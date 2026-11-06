// Alvo automatico de quem ataca o proprio jogador, como o UGameEngine::OnAttack do engine.dll do Interlude (0x10313d81,
// decomp_all/engine/00011.c:17014; Tryskell engine.c:500199): quando o alvo do golpe e o proprio pawn, o cliente esta sem
// alvo (controller +0x35c), fAutoTargetPendingTime (pawn +0x18cc) e 0 e AutoTargetPawn (pawn +0x18d0) e nulo, envia
// Action (NetworkHandler +0x100) com o id do atacante, a posicao do proprio pawn e o Shift, e grava o atacante em
// AutoTargetPawn. O MyTargetSelected (engine.c:294998) e o TargetSelected do proprio (engine.c:497392) zeram o
// AutoTargetPawn; o TargetUnselected do proprio (engine.c:359729) poe 10 s (0x41200000) no PendingTime, que o tick do pawn
// desconta ate 0 (engine.c:221144). O aCis trata o Action como o 1o clique: so seleciona o atacante (Npc/Player.onAction).
namespace L2Web.World
{
    public sealed class AutoTarget
    {
        /// <summary>0x41200000: segundos sem alvo automatico depois de o proprio jogador perder o alvo.</summary>
        public const float PendingAfterUnselect = 10f;

        /// <summary>AutoTargetPawn (+0x18d0): atacante para quem ja foi pedido o alvo; 0 = nenhum.</summary>
        public int Pawn { get; private set; }

        /// <summary>fAutoTargetPendingTime (+0x18cc), em segundos.</summary>
        public float Pending { get; private set; }

        /// <summary>
        /// Golpe principal do pacote Attack. Devolve true quando o cliente deve mandar Action(attackerId) e passa a guardar
        /// o atacante. attackerDead: o OnAttack so faz isso se o atacante nao esta morto (controller +0x41c bit 0).
        /// </summary>
        public bool OnAttack(int attackerId, int targetId, int selfId, bool attackerKnown, bool targetKnown, bool attackerDead, int currentTargetId)
        {
            if (attackerId == 0 || attackerId == targetId || !attackerKnown || !targetKnown || attackerDead) return false;
            if (selfId == 0 || targetId != selfId) return false;
            if (currentTargetId != 0 || Pending != 0 || Pawn != 0) return false;
            Pawn = attackerId;
            return true;
        }

        /// <summary>MyTargetSelected (0xa6) ou TargetSelected (0x29) do proprio jogador: zera o AutoTargetPawn.</summary>
        public void Selected() => Pawn = 0;

        /// <summary>TargetUnselected (0x2a) do proprio jogador: 10 s sem alvo automatico.</summary>
        public void Unselected() => Pending = PendingAfterUnselect;

        /// <summary>Tick do pawn: desconta o PendingTime ate 0.</summary>
        public void Tick(float dt)
        {
            if (Pending <= 0)
            {
                Pending = 0;
                return;
            }
            Pending -= dt;
            if (Pending < 0) Pending = 0;
        }

        /// <summary>Saida do mundo.</summary>
        public void Reset()
        {
            Pawn = 0;
            Pending = 0;
        }
    }
}
