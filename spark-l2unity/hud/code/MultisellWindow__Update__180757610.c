// MultisellWindow__Update__180757610 @ 0x180757610

void MultisellWindow__Update__180757610
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 unaff_RBX;
  float fVar5;
  
  if (((*(char *)(param_1 + 0xcd) != '\0') && (*(char *)(param_1 + 0xcc) != '\0')) &&
     ((*(char *)(param_1 + 0xce) != '\0' ||
      (fVar5 = (float)FUN_1824366b0(0), 0.5 <= fVar5 - *(float *)(param_1 + 0xd0))))) {
    *(undefined1 *)(param_1 + 0xcd) = 0;
    if (*(longlong *)(param_1 + 0x88) == 0) {
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TradeSlotContainer__Mostra__1807793c0
              (*(longlong *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0xb8),0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      if (cRam00000001834b4305 == '\0') {
        FUN_180315380(LIT_"'selected'",0);
        cRam00000001834b4305 = '\x01';
      }
      lVar1 = *(longlong *)(param_1 + 0x88);
      if (lVar1 == 0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(lVar1 + 0x38) != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x38);
        for (uVar4 = 0; (int)uVar4 < *(int *)(lVar1 + 0x18); uVar4 = uVar4 + 1) {
          if (*(uint *)(lVar1 + 0x18) <= uVar4) {
            FUN_1803155c0();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 8);
          if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 != 0)) {
            UnityEngine_UIElements_VisualElement__RemoveFromClassList
                      (lVar2,LIT_"'selected'",0,param_4,unaff_RBX);
          }
        }
      }
      return;
    }
  }
  return;
}

