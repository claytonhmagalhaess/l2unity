// Posicao, velocidade, rotacao e correcao de sincronia de um pawn (PawnMotion de client/world/movement.ts).
using System;

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
        /// <summary>0x6c0: tempo andando desde a ultima parada.</summary>
        public float MoveTime;
        /// <summary>0x6d0 / 0x6d4: tempo restante e velocidade extra da correcao de sincronia.</summary>
        public float CorrTimer;
        public float Corr;
        /// <summary>Velocidade de giro no ultimo passo (unidades/s), para escolher TurnAnim.</summary>
        public float TurnRate;
        /// <summary>Teve velocidade no ultimo passo.</summary>
        public bool Moving;

        /// <summary>APawn::GetCurSpeed(-1): velocidade base (sem moveMul) do modo atual, com a fase inicial de caminhada.</summary>
        public float BaseSpeed()
        {
            if (Running && HasWalkAnim && MoveTime <= Movement.WalkBeforeRun) return WalkSpd;
            return Running ? RunSpd : WalkSpd;
        }

        /// <summary>Velocidade efetiva do tick (0x1550 = GetCurSpeed * moveMul + correcao).</summary>
        public float Speed() => Math.Max(1, BaseSpeed() * MoveMul + Corr);

        /// <summary>Esta na fase de corrida (para a animacao).</summary>
        public bool RunPhase => Running && (!HasWalkAnim || MoveTime > Movement.WalkBeforeRun);

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

        /// <summary>StopMove: para; reposiciona so outros pawns e so se divergirem mais que SnapDistance.</summary>
        public void ServerStop(Vec3 pos, bool isSelf)
        {
            if (!isSelf && Movement.Dist3(this, pos) > Movement.SnapDistance) Place(pos.X, pos.Y, pos.Z);
            Dest = null;
            Corr = 0;
            CorrTimer = 0;
        }

        /// <summary>ValidateLocation: o proprio jogador e teleportado (L2_Teleport); outros sao corrigidos aos poucos.</summary>
        public void ServerValidate(Vec3 pos, int heading, bool isSelf)
        {
            if (isSelf)
            {
                Place(pos.X, pos.Y, pos.Z);
                Yaw = DesiredYaw = heading & 0xffff;
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
            else if (d > Movement.IdleMinDistance)
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
