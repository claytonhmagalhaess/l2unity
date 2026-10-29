// L2ConfirmWindow__MostraProximo__180770760 @ 0x180770760

void L2ConfirmWindow__MostraProximo__180770760(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  float fVar3;
  
  if (cRam00000001834b43e2 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.RemoveAt);
    FUN_180315380(MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Item);
    cRam00000001834b43e2 = '\x01';
  }
  lVar2 = *(longlong *)(param_1 + 0xd8);
  if (lVar2 != 0) {
    while( true ) {
      if ((*(int *)(lVar2 + 0x18) < 1) || (*(char *)(param_1 + 0x38) == '\0')) {
        return;
      }
      if (*(longlong *)(param_1 + 0xd8) == 0) break;
      lVar2 = FUN_180bbafe0(*(longlong *)(param_1 + 0xd8),0,MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Item);
      if ((*(longlong *)(param_1 + 0xd8) == 0) ||
         (FUN_18164e790(*(longlong *)(param_1 + 0xd8),0,MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.RemoveAt), lVar2 == 0)) break;
      if ((*(float *)(lVar2 + 0x28) <= 0.0) ||
         (fVar3 = (float)FUN_1824366b0(0), fVar3 < *(float *)(lVar2 + 0x28))) {
        L2ConfirmWindow__Mostra__180770870(param_1,lVar2,0);
      }
      else {
        L2ConfirmWindow__Executa__18076f860(*(undefined8 *)(lVar2 + 0x20));
      }
      lVar2 = *(longlong *)(param_1 + 0xd8);
      if (lVar2 == 0) break;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

