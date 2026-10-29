// L2ConfirmWindow__Update__180770f20 @ 0x180770f20

void L2ConfirmWindow__Update__180770f20(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  float fVar5;
  
  if (cRam00000001834b43e0 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.RemoveAt);
    FUN_180315380(MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Item);
    cRam00000001834b43e0 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xd8) + 0x18);
    while( true ) {
      do {
        do {
          iVar1 = iVar1 + -1;
          if (iVar1 < 0) {
            if (((*(char *)(param_1 + 0xb0) != '\0') && (*(char *)(param_1 + 0x38) == '\0')) &&
               (0.0 < *(float *)(param_1 + 0xa8))) {
              fVar5 = (float)FUN_1824366b0(0);
              if (*(float *)(param_1 + 0xa8) <= fVar5) {
                L2ConfirmWindow__Responde(param_1,0,0);
              }
              else {
                L2ConfirmWindow__AtualizaTempo(param_1,0);
              }
            }
            return;
          }
          if ((*(longlong *)(param_1 + 0xd8) == 0) ||
             (lVar4 = FUN_180bbafe0(*(longlong *)(param_1 + 0xd8),iVar1,MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Item),
             lVar4 == 0)) goto code_r0x0001807710ac;
        } while (*(float *)(lVar4 + 0x28) <= 0.0);
        fVar5 = (float)FUN_1824366b0(0);
        if ((*(longlong *)(param_1 + 0xd8) == 0) ||
           (lVar4 = FUN_180bbafe0(*(longlong *)(param_1 + 0xd8),iVar1,MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Item),
           lVar4 == 0)) goto code_r0x0001807710ac;
      } while (fVar5 < *(float *)(lVar4 + 0x28));
      if (((*(longlong *)(param_1 + 0xd8) == 0) ||
          (lVar4 = FUN_180bbafe0(*(longlong *)(param_1 + 0xd8),iVar1,MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Item),
          lVar4 == 0)) || (*(longlong *)(param_1 + 0xd8) == 0)) break;
      uVar2 = *(undefined8 *)(lVar4 + 0x20);
      FUN_18164e790(*(longlong *)(param_1 + 0xd8),iVar1,MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.RemoveAt);
      L2ConfirmWindow__Executa__18076f860(uVar2,0);
    }
  }
code_r0x0001807710ac:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

