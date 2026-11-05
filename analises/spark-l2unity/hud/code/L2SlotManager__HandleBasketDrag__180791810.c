// L2SlotManager__HandleBasketDrag__180791810 @ 0x180791810

void L2SlotManager__HandleBasketDrag__180791810(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (cRam00000001834b444c == '\0') {
    FUN_180315380(TI_BasketSlot);
    cRam00000001834b444c = '\x01';
  }
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TI_BasketSlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_BasketSlot + 0x130) * 8
         ) != TI_BasketSlot)) {
      FUN_1803146d0(plVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*(longlong *)(param_1 + 0x90) != 0) && (*(int *)(*(longlong *)(param_1 + 0x90) + 0x18) == 9))
  {
    return;
  }
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018079189a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

