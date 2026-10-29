// Trava de pedido do clique: o int +0x64 do UGameEngine (engine.dll do Interlude), spec 05 secao 5.7.
// PLAYERPAWNMOVETO (exec FUN_105a9600, 0x105af019) so envia Action/MoveBackwardToLocation com a trava em 0 e a liga ao
// enviar; o comando ATTACK nao consulta a trava, mas a liga sempre (0x105aa3fe). As respostas do servidor a zeram:
// ActionFailed (0x25) sem condicao, as recusas de ataque (0x08/0x09/0x0a) quando o proprio pawn existe e as demais
// (movimento, ataque, alvo) quando o objeto e o proprio jogador. Zerar a trava e o unico efeito dos quatro pacotes sem
// campos: nao param o ataque automatico, nao mexem na animacao, no movimento nem na skill.
namespace L2Web.World
{
    public sealed class ActionLatch
    {
        /// <summary>GEngine+0x64: ha um pedido do clique sem resposta do servidor. Nao ha prazo no original.</summary>
        public bool Pending { get; private set; }

        /// <summary>PLAYERPAWNMOVETO (0x105af027): com a trava ligada o clique e ignorado (nem pedido, nem marcador).</summary>
        public bool CanClick => !Pending;

        /// <summary>
        /// Pedido enviado: PLAYERPAWNMOVETO depois do Action (0x105af1ff, 0x105af391) ou do movimento (0x105af49b);
        /// ATTACK sempre (0x105aa3fe), mesmo sem alvo.
        /// </summary>
        public void Lock() => Pending = true;

        /// <summary>Saida do mundo (o GEngine e outro objeto no proximo login).</summary>
        public void Reset() => Pending = false;

        /// <summary>0x25 ActionFailed: OnActionFail (0x10314376) zera sem condicao.</summary>
        public void ActionFailed() => Pending = false;

        /// <summary>
        /// 0x08 AttackOutofRange, 0x09 AttackinCoolTime, 0x0a AttackDeadTarget (OnAttackOutofRange 0x1030bfa5,
        /// OnAttackinCoolTime 0x10305a1f, OnAttackDeadTarget 0x1030c1bc): o tratador procura o proprio objeto (id do
        /// UserInfo) e o metodo so zera se ele existe e tem o pawn do controller.
        /// </summary>
        public void AttackRefused(bool hasSelfPawn)
        {
            if (hasSelfPawn) Pending = false;
        }

        /// <summary>
        /// Resposta sobre o proprio jogador: MoveToLocation 0x01, MoveToPawn 0x60, FlyToLocation 0xc5,
        /// MoveToLocationInVehicle 0x71, Attack 0x05 (atacante ou alvo), TargetSelected 0x29, TargetUnselected 0x2a.
        /// </summary>
        public void Answered(int objectId, int selfId)
        {
            if (objectId != 0 && objectId == selfId) Pending = false;
        }

        /// <summary>0xa6 MyTargetSelected: OnMyTargetSelected (0x1030bb09) zera sem condicao.</summary>
        public void MyTargetSelected() => Pending = false;

        /// <summary>0x12 DeleteObject: OnDeleteUser/OnDeleteItem/OnDeleteStaticObject zeram se o objeto apagado e o alvo atual.</summary>
        public void Deleted(int objectId, int targetId)
        {
            if (objectId != 0 && objectId == targetId) Pending = false;
        }
    }
}
