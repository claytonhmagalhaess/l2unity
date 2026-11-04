// Movimento de pawns como no cliente original (engine.dll do Interlude), sem dependencia da cena.
// Fontes (decompilacao em docs/re/ do l2web): UGameEngine::OnMoveToLocation, AController::AddMoveTo, APawn::GetCurSpeed,
// tick do APawn (0x105d4040), UGameEngine::OnValidateLocation/OnStopMove, AdjustPawnLocation, atualizador de
// animacao de movimento (0x10624cc0), tick do PlayerController (ValidatePosition) e defaults do LineagePawn.
// Porte de client/world/movement.ts. Coordenadas em unidades do L2.
using System;
using System.Collections.Generic;

namespace L2Web.World
{
    /// <summary>Ponto em coordenadas do L2 (objeto { x, y, z } do TS; referencia, como no JS).</summary>
    public sealed class Vec3
    {
        public float X;
        public float Y;
        public float Z;

        public Vec3() { }

        public Vec3(float x, float y, float z)
        {
            X = x;
            Y = y;
            Z = z;
        }

        public Vec3 Clone() => new Vec3(X, Y, Z);

        public override string ToString() => $"({X}, {Y}, {Z})";
    }

    public static class Movement
    {
        /// <summary>chargrp.dat walkanimframe = 12 para todas as classes; o engine compara com tempo_andando * 30.</summary>
        public const float WalkBeforeRun = 12f / 30f;
        /// <summary>LineagePawn.RotationRate.Yaw (unidades de heading por segundo; 65536 = 360 graus).</summary>
        public const float RotationRate = 65000;
        /// <summary>AdjustPawnLocation: so reposiciona outro pawn se a diferenca para o servidor passar disso.</summary>
        public const float SnapDistance = 200;
        /// <summary>OnValidateLocation: janela (s) para alcancar a posicao do servidor ajustando a velocidade.</summary>
        public const float ValidateCatchupTime = 3;
        /// <summary>OnValidateLocation com o pawn parado: abaixo disso ignora, acima (ate SnapDistance) anda ate la.</summary>
        public const float IdleMinDistance = 2;
        /// <summary>Tweens (s) usados pelo atualizador de animacao.</summary>
        public const float TweenMove = 0.1f;
        public const float TweenMoveFromWait = 0.4f;
        public const float TweenWait = 0.2f;
        /// <summary>Parado e girando mais rapido que isso (unidades/s) toca TurnAnim.</summary>
        public const float TurnAnimRate = 1000;
        /// <summary>Tick do PlayerController: ValidatePosition a cada 1,2 s enquanto o pawn tem velocidade.</summary>
        public const float ValidateInterval = 1.2f;

        /// <summary>
        /// UGameEngine::OnTeleportToLocation: o pawn entra em Z do pacote + CollisionHeight + 10 (o pe fica 10 acima do Z;
        /// o aCis ja manda o Z do destino + 10) e a fisica (ou o L2_Teleport) o poe no chao.
        /// </summary>
        public const float TeleportLift = 10;
        /// <summary>UGameEngine::L2_Teleport: procura o lugar de pouso com traces de z+30i ate z-30i, i = 1..30.</summary>
        public const float LandingStep = 30;
        public const int LandingTries = 30;
        /// <summary>Consulta do chao com zRef extremo: a camada mais alta (+) e a mais baixa (-) da celula.</summary>
        const float FarRef = 1e6f;

        /// <summary>
        /// Celula multicamada com so a camada mais alta e a mais baixa conhecidas (o geodata do porte guarda so essas duas):
        /// as do meio sao desconhecidas, entao o pouso so vale ate esta distancia do pe; mais longe, fica no Z do servidor.
        /// Medido em todos os destinos de teleporte do aCis (Docs/teleporte_z.md): ate 150 nenhuma camada errada; 200 ja erra.
        /// </summary>
        public const float MultiLayerTrust = 150;

        /// <summary>
        /// Lugar de pouso do L2_Teleport (engine.dll, "Couldn't find landing place"): o trace i (i = 1..30) vai de pe + 30i
        /// ate pe - 30i e para no primeiro chao, ou seja, o mais alto dentro da janela; a primeira janela com chao vence.
        /// null se nenhum chao estiver a ate 900 unidades.
        /// </summary>
        public static float? LandingZ(float feet, params float?[] floors)
        {
            float? best = null;
            var bestWin = int.MaxValue;
            if (floors == null) return null;
            foreach (var h in floors)
            {
                if (!h.HasValue) continue;
                var win = Math.Max(1, (int)Math.Ceiling(Math.Abs(h.Value - feet) / LandingStep));
                if (win > LandingTries) continue;
                if (win < bestWin || (win == bestWin && h.Value > best.Value))
                {
                    best = h;
                    bestWin = win;
                }
            }
            return best;
        }

        /// <summary>
        /// Queda (PHYS_Falling) de um pawn posto acima do chao: o chao mais alto abaixo do pe; sem nenhum abaixo, o mais
        /// proximo. null sem chao.
        /// </summary>
        public static float? FallZ(float feet, params float?[] floors)
        {
            float? below = null, near = null;
            if (floors == null) return null;
            foreach (var h in floors)
            {
                if (!h.HasValue) continue;
                if (h.Value <= feet && (!below.HasValue || h.Value > below.Value)) below = h;
                if (!near.HasValue || Math.Abs(h.Value - feet) < Math.Abs(near.Value - feet)) near = h;
            }
            return below ?? near;
        }

        /// <summary>
        /// Novo Z do pawn que pousa em (x, y) com o pe em `feet` (`keepZ` = Z atual, mantido quando nao da para confiar no
        /// chao); null enquanto o chao do lugar nao for conhecido (geodata ainda nao carregado). `search` = busca do
        /// L2_Teleport (o proprio jogador); senao queda.
        /// Com `layers` (todas as camadas da celula) a regra e a do original. Sem elas, so com `ground` (a camada mais
        /// proxima de zRef, entre a mais alta e a mais baixa): celula de uma camada pousa igual; multicamada so ate
        /// MultiLayerTrust do pe.
        /// </summary>
        public static float? Land(Func<float, float, float, float?> ground, Func<float, float, IReadOnlyList<float>> layers,
            float x, float y, float feet, float keepZ, bool search)
        {
            var all = layers?.Invoke(x, y);
            if (all != null && all.Count > 0)
            {
                var hs = new float?[all.Count];
                for (var i = 0; i < hs.Length; i++) hs[i] = all[i];
                return (search ? LandingZ(feet, hs) : null) ?? FallZ(feet, hs);
            }
            if (ground == null) return null;
            var near = ground(x, y, feet);
            if (!near.HasValue) return null;
            var top = ground(x, y, FarRef);
            var low = ground(x, y, -FarRef);
            var multi = top.HasValue && low.HasValue && top.Value != low.Value;
            var z = search ? LandingZ(feet, near, top, low) : FallZ(feet, near, top, low);
            if (!multi) return z ?? FallZ(feet, near, top, low);
            return z.HasValue && Math.Abs(z.Value - feet) <= MultiLayerTrust ? z.Value : keepZ;
        }

        public static float Dist3(float ax, float ay, float az, float bx, float by, float bz)
        {
            double dx = ax - bx, dy = ay - by, dz = az - bz;
            return (float)Math.Sqrt(dx * dx + dy * dy + dz * dz);
        }

        public static float Dist3(Vec3 a, Vec3 b) => Dist3(a.X, a.Y, a.Z, b.X, b.Y, b.Z);

        public static float Dist3(PawnMotion a, Vec3 b) => Dist3(a.X, a.Y, a.Z, b.X, b.Y, b.Z);

        /// <summary>Heading L2 (0..65535) de um vetor (dx, dy).</summary>
        public static float HeadingOf(float dx, float dy)
        {
            var a = Math.Atan2(dy, dx);
            if (a < 0) a += Math.PI * 2;
            return (float)(a / (Math.PI * 2) * 65536 % 65536);
        }

        /// <summary>Diferenca de heading no intervalo (-32768, 32768].</summary>
        public static float WrapYaw(float d)
        {
            d %= 65536;
            if (d > 32768) d -= 65536;
            if (d <= -32768) d += 65536;
            return d;
        }
    }
}
