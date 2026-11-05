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
        /// <summary>
        /// Taxa da animacao de andar/correr (APawn::GetWalkAnimRate 0x1030f65a / GetRunAnimRate 0x10313a70): XxxAnimRate[arma]
        /// do .int (1 se 0), vezes o npc_speed do npcgrp se o pawn for NPC (bNpc, FL2NpcData+0x58, gravado pelo
        /// FL2GameData::NpcDataLoad), vezes o moveMul (0x6b4) no atualizador. `npcSpeed` 0 (ausente) conta como 1.
        /// </summary>
        public static float MoveAnimRate(float animRate, float npcSpeed, float moveMul)
        {
            var r = animRate != 0 ? animRate : 1;
            if (npcSpeed != 0) r *= npcSpeed;
            return r * (moveMul != 0 ? moveMul : 1);
        }

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
        /// Quanto o pouso pode subir acima do pe. O original pousa na colisao real (BSP/StaticMesh); o porte so tem o
        /// geodata, que dentro dos predios as vezes so tem o telhado (lojas de Giran: NPC em -3506, geodata so em -3080).
        /// Os NPCs do spawnlist com o chao do geodata ate 30 acima do pe sao 1452; acima disso (358) e telhado.
        /// </summary>
        public const float MaxRise = 30;
        /// <summary>Queda maxima de NPCs e itens (z do spawnlist): mais que isso e estrutura que o geodata nao tem.</summary>
        public const float NpcMaxFall = 100;
        /// <summary>Queda maxima do proprio jogador e de outros jogadores (teleporte: alcance do L2_Teleport).</summary>
        public const float TeleportMaxFall = LandingStep * LandingTries;

        /// <summary>
        /// Novo Z do pawn que pousa em (x, y) com o pe em `feet` (`keepZ` = Z atual, mantido quando nenhum chao confiavel
        /// esta na faixa [feet - queda maxima, feet + MaxRise]); null enquanto o chao do lugar nao for conhecido (geodata
        /// ainda nao carregado). `search` = busca do L2_Teleport (o proprio jogador: janela mais proxima, a mais alta nela);
        /// senao queda (o chao mais alto da faixa).
        /// Com `layers` (todas as camadas da celula) todas valem. So com `ground` (a mais proxima de zRef, entre a mais alta
        /// e a mais baixa): celula de uma camada e exata; multicamada so ate MultiLayerTrust para baixo.
        /// </summary>
        public static float? Land(Func<float, float, float, float?> ground, Func<float, float, IReadOnlyList<float>> layers,
            float x, float y, float feet, float keepZ, bool search, float maxFall = TeleportMaxFall)
        {
            float?[] hs;
            var exact = true;
            var all = layers?.Invoke(x, y);
            if (all != null && all.Count > 0)
            {
                hs = new float?[all.Count];
                for (var i = 0; i < hs.Length; i++) hs[i] = all[i];
            }
            else
            {
                if (ground == null) return null;
                var near = ground(x, y, feet);
                if (!near.HasValue) return null;
                var top = ground(x, y, FarRef);
                var low = ground(x, y, -FarRef);
                // uma camada so quando a mais alta e a mais baixa existem e coincidem; o GroundHeight da #0056 devolve null
                // para zRef longe de todas as camadas de uma celula multicamada, e isso tambem conta como multicamada
                exact = top.HasValue && low.HasValue && top.Value == low.Value;
                hs = new[] { near, top, low };
            }
            var reach = exact ? maxFall : Math.Min(maxFall, MultiLayerTrust);
            for (var i = 0; i < hs.Length; i++)
                if (hs[i].HasValue && (hs[i].Value < feet - reach || hs[i].Value > feet + MaxRise))
                    hs[i] = null;
            float? z;
            if (search) z = LandingZ(feet, hs);
            else
            {
                z = null;
                foreach (var h in hs)
                    if (h.HasValue && (!z.HasValue || h.Value > z.Value))
                        z = h;
            }
            return z ?? keepZ;
        }

        /// <summary>
        /// Folga da chegada ao alvo do MoveToPawn. O original (APawn::moveToward) anda o passo inteiro em direcao ao centro do
        /// alvo e so testa a chegada no comeco do tick, entao para um pouco DENTRO do raio; o porte para exatamente na borda,
        /// e sem folga o arredondamento deixava d um fio acima do offset: o pawn dava um passo de fracao de unidade por quadro
        /// e ficava "andando no lugar" ao lado do alvo. 1 = o limiar de encaixe do PawnMotion.Step (len < 1).
        /// </summary>
        public const float ReachSlack = 1;

        /// <summary>
        /// APawn::ReachedDestination com alvo pawn (engine.dll, export 0x10301415, chamado pelo APawn::moveToward): em PHYS_Walking o
        /// moveToward zera o Z da direcao, entao a regra e so a distancia horizontal entre os centros &lt;= pawn+0x6c4 (o
        /// offset do MoveToPawn, gravado pelo OnMoveToPawn / AddMoveToward) + DestinationOffset (0x152c; 0 no MoveToward
        /// nativo). O aCis ja manda o offset somando os dois CollisionRadius (CreatureAI.maybeMoveToPawn).
        /// </summary>
        public static bool PawnReached(float dx, float dy, float offset)
        {
            var d = (float)Math.Sqrt((double)dx * dx + (double)dy * dy);
            return d <= offset + ReachSlack;
        }

        /// <summary>
        /// Ponto em que o pawn em (x, y) para ao seguir um alvo em (tx, ty, tz) a `offset` (APawn::moveToward ate o
        /// ReachedDestination): null se ja chegou; senao o ponto da reta pawn-alvo a `offset` do centro do alvo.
        /// </summary>
        public static Vec3 PawnGoal(float x, float y, float tx, float ty, float tz, float offset)
        {
            var dx = tx - x;
            var dy = ty - y;
            if (PawnReached(dx, dy, offset)) return null;
            var d = (float)Math.Sqrt((double)dx * dx + (double)dy * dy);
            return new Vec3(tx - dx / d * offset, ty - dy / d * offset, tz);
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
