// Posicao, velocidade, rotacao e correcao de sincronia de um pawn (PawnMotion de client/world/movement.ts).
using System;
using System.Collections.Generic;

namespace L2Web.World
{
    public sealed class PawnMotion
    {
        public float X;
        public float Y;
        public float Z;
        /// <summary>Heading atual (float, 0..65536) e o desejado (para onde esta indo).</summary>
        public float Yaw;
        public float DesiredYaw;
        public Vec3 Dest;
        public float RunSpd = 120;
        public float WalkSpd = 80;
        public float MoveMul = 1;
        public bool Running = true;
        /// <summary>Se o modelo tem animacao de caminhada (o engine so faz a fase de caminhada se existir).</summary>
        public bool HasWalkAnim = true;
        /// <summary>
        /// Fase inicial de caminhada (s) antes de correr: pawn+0x6cc / 30 no APawn::GetCurSpeed (0x103138bd). O 0x6cc
        /// (walkanimframe do chargrp, 12) so e gravado pelo OnUserInfo e pelo OnCharInfo; o NpcInfo nao o toca, entao o NPC
        /// fica com 0 e corre desde o primeiro tick (Entity poe 0 para "npc").
        /// </summary>
        public float WalkPhase = Movement.WalkBeforeRun;
        /// <summary>0x6c0: tempo andando desde a ultima parada.</summary>
        public float MoveTime;
        /// <summary>0x6d0 / 0x6d4: tempo restante e velocidade extra da correcao de sincronia.</summary>
        public float CorrTimer;
        public float Corr;
        /// <summary>Velocidade de giro no ultimo passo (unidades/s), para escolher TurnAnim.</summary>
        public float TurnRate;
        /// <summary>Teve velocidade no ultimo passo.</summary>
        public bool Moving;
        /// <summary>
        /// Pouso pendente depois de um teleporte ou de surgir (Z do servidor, que pode estar acima do chao): o proximo Step
        /// com chao conhecido poe o pe nele. Search = busca do L2_Teleport (o proprio jogador); senao queda.
        /// </summary>
        public bool Landing;
        public bool LandingSearch;
        /// <summary>Pe (Z) de onde o pouso parte: Z do pacote + TeleportLift.</summary>
        public float LandingFeet;
        /// <summary>Queda maxima do pouso pendente (Movement.TeleportMaxFall ou NpcMaxFall).</summary>
        public float LandingMaxFall = Movement.TeleportMaxFall;
        /// <summary>Todas as camadas do geodata em (x, y), se a cena as expuser (World.GroundLayers); null usa so o ground.</summary>
        public Func<float, float, IReadOnlyList<float>> Layers;

        /// <summary>APawn::GetCurSpeed(-1): velocidade base (sem moveMul) do modo atual, com a fase inicial de caminhada.</summary>
        public float BaseSpeed()
        {
            if (Running && HasWalkAnim && MoveTime <= WalkPhase) return WalkSpd;
            return Running ? RunSpd : WalkSpd;
        }

        /// <summary>Velocidade efetiva do tick (0x1550 = GetCurSpeed * moveMul + correcao).</summary>
        public float Speed() => Math.Max(1, BaseSpeed() * MoveMul + Corr);

        /// <summary>Esta na fase de corrida (para a animacao).</summary>
        public bool RunPhase => Running && (!HasWalkAnim || MoveTime > WalkPhase);

        /// <summary>
        /// MoveToLocation do servidor. Outro pawn longe demais da origem e reposicionado (AdjustPawnLocation);
        /// o proprio jogador nunca. Depois AController::AddMoveTo calcula a correcao para chegar em sincronia.
        /// </summary>
        public void ServerMove(Vec3 dest, Vec3 origin, bool isSelf)
        {
            if (!isSelf && Movement.Dist3(this, origin) > Movement.SnapDistance) Place(origin.X, origin.Y, origin.Z);
            AddMoveTo(origin, dest);
        }

        /// <summary>AController::AddMoveTo(origem, destino).</summary>
        public void AddMoveTo(Vec3 origin, Vec3 dest)
        {
            var v = BaseSpeed();
            var d1 = Movement.Dist3(origin, dest);
            var d2 = Movement.Dist3(this, dest);
            if (v > 0 && d1 > 0 && MoveMul > 0)
            {
                CorrTimer = d1 / v * MoveMul;
                Corr = (d2 - d1) / CorrTimer;
            }
            else
            {
                CorrTimer = 0;
                Corr = 0;
            }
            Dest = dest.Clone();
        }

        /// <summary>
        /// AController::AddMoveToward(origem, alvo, offset) do OnMoveToPawn para OUTROS pawns: correcao para chegar em
        /// sincronia com o servidor, pelas distancias ate o CENTRO do alvo (sem descontar o offset, como no engine):
        /// 0x6d0 = |alvo - origem| / GetCurSpeed(-1) (sem o moveMul, ao contrario do AddMoveTo) e
        /// 0x6d4 = (|alvo - pawn| - |alvo - origem|) / 0x6d0. O MoveToward troca o Destination: o MoveToLocation anterior acaba.
        /// </summary>
        public void AddMoveToward(Vec3 origin, Vec3 goal)
        {
            var v = BaseSpeed();
            var d1 = Movement.Dist3(goal, origin);
            var d2 = Movement.Dist3(this, goal);
            if (v > 0 && d1 > 0 && MoveMul > 0)
            {
                CorrTimer = d1 / v;
                Corr = (d2 - d1) / CorrTimer;
            }
            else
            {
                CorrTimer = 0;
                Corr = 0;
            }
            Dest = null;
        }

        /// <summary>
        /// UGameEngine::OnMoveToPawn: outro pawn longe demais da origem do pacote e reposicionado (AdjustPawnLocation) e
        /// ganha a correcao do AddMoveToward; o proprio jogador so troca o destino (MoveToward, sem ajuste nem correcao).
        /// </summary>
        public void ServerMoveToPawn(Vec3 goal, Vec3 origin, bool isSelf)
        {
            if (isSelf)
            {
                Dest = null;
                return;
            }
            if (Movement.Dist3(this, origin) > Movement.SnapDistance) Place(origin.X, origin.Y, origin.Z);
            AddMoveToward(origin, goal);
        }

        /// <summary>StopMove: para; reposiciona so outros pawns e so se divergirem mais que SnapDistance.</summary>
        public void ServerStop(Vec3 pos, bool isSelf)
        {
            if (!isSelf && Movement.Dist3(this, pos) > Movement.SnapDistance) Place(pos.X, pos.Y, pos.Z);
            Dest = null;
            Corr = 0;
            CorrTimer = 0;
        }

        /// <summary>
        /// ValidateLocation: o proprio jogador e teleportado (L2_Teleport); outros sao corrigidos aos poucos.
        /// `inAction` = o pawn esta num golpe ou cast (pawn+0x62c != 0 no engine): parado, o OnValidateLocation so anda ate a
        /// posicao do servidor (AddMoveTo) com pawn+0x62c == 0; o reposicionamento acima de SnapDistance vale sempre.
        /// </summary>
        public void ServerValidate(Vec3 pos, int heading, bool isSelf, bool inAction = false)
        {
            if (isSelf)
            {
                Place(pos.X, pos.Y, pos.Z);
                Yaw = DesiredYaw = heading & 0xffff;
                Drop(true);
                return;
            }
            var d = Movement.Dist3(this, pos);
            if (d > Movement.SnapDistance)
            {
                Place(pos.X, pos.Y, pos.Z);
                return;
            }
            if (Dest != null)
            {
                // em movimento: velocidade = base*moveMul + (d_local - d_servidor) / 3 por 3 s
                CorrTimer = Movement.ValidateCatchupTime;
                Corr = (Movement.Dist3(Dest, new Vec3(X, Y, Z)) - Movement.Dist3(Dest, pos)) / Movement.ValidateCatchupTime;
            }
            else if (d > Movement.IdleMinDistance && !inAction)
            {
                Corr = 0;
                CorrTimer = 0;
                AddMoveTo(pos, pos);
            }
        }

        public void Place(float x, float y, float z)
        {
            X = x;
            Y = y;
            Z = z;
        }

        /// <summary>
        /// Arma o pouso a partir do Z atual (OnTeleportToLocation / L2_Teleport): `search` para o proprio jogador (busca do
        /// lugar de pouso), senao queda ate o chao abaixo.
        /// </summary>
        public void Drop(bool search, float maxFall = Movement.TeleportMaxFall)
        {
            Landing = true;
            LandingSearch = search;
            LandingMaxFall = maxFall;
            LandingFeet = Z + Movement.TeleportLift;
        }

        /// <summary>Resolve o pouso pendente se o chao em (X, Y) ja for conhecido. Devolve true se pousou.</summary>
        public bool TryLand(Func<float, float, float, float?> ground)
        {
            if (!Landing) return false;
            var z = Movement.Land(ground, Layers, X, Y, LandingFeet, Z, LandingSearch, LandingMaxFall);
            if (!z.HasValue) return false;
            Z = z.Value;
            Landing = false;
            return true;
        }

        /// <summary>
        /// Um tick: correcao de sincronia, deslocamento ate o destino, rotacao a RotationRate.
        /// ground(x, y, z) devolve a altura do chao mais proxima (geodata) ou null.
        /// Devolve true se o pawn se moveu. Sem `target`, usa Dest (como o parametro padrao do TS).
        /// </summary>
        public bool Step(float dt, Func<float, float, float, float?> ground) => Step(dt, ground, Dest);

        /// <summary>Um tick com alvo explicito (null = parado).</summary>
        public bool Step(float dt, Func<float, float, float, float?> ground, Vec3 target)
        {
            if (CorrTimer > 0)
            {
                CorrTimer -= dt;
                if (CorrTimer <= 0)
                {
                    CorrTimer = 0;
                    Corr = 0;
                }
            }
            TryLand(ground);
            var moved = false;
            if (target != null)
            {
                MoveTime += dt;
                var dx = target.X - X;
                var dy = target.Y - Y;
                var len = (float)Math.Sqrt((double)dx * dx + (double)dy * dy);
                var stepLen = Speed() * dt;
                if (len > 0.5f) DesiredYaw = Movement.HeadingOf(dx, dy);
                if (len <= stepLen || len < 1)
                {
                    X = target.X;
                    Y = target.Y;
                    Z = ground?.Invoke(X, Y, target.Z) ?? target.Z;
                    if (ReferenceEquals(target, Dest)) Dest = null;
                }
                else
                {
                    var k = stepLen / len;
                    var nz = Z + (target.Z - Z) * k;
                    X += dx * k;
                    Y += dy * k;
                    Z = ground?.Invoke(X, Y, nz) ?? nz;
                }
                // pouso ainda pendente (sem chao aqui): parte do Z de agora quando o chao chegar
                if (Landing) LandingFeet = Z + Movement.TeleportLift;
                moved = true;
            }
            else MoveTime = 0;
            Moving = moved;
            // rotacao: UE2 physicsRotation com RotationRate.Yaw
            var diff = Movement.WrapYaw(DesiredYaw - Yaw);
            var maxTurn = Movement.RotationRate * dt;
            var turn = Math.Abs(diff) <= maxTurn ? diff : Math.Sign(diff) * maxTurn;
            Yaw = (Yaw + turn + 65536) % 65536;
            TurnRate = dt > 0 ? Math.Abs(turn) / dt : 0;
            return moved;
        }
    }
}
