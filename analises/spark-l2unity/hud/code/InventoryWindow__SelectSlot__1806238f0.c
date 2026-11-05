// InventoryWindow__SelectSlot__1806238f0 @ 0x1806238f0

void InventoryWindow__SelectSlot__1806238f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
      FUN_1803155c0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar2 = *(longlong **)(lVar1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018062391d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x198))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x1a0));
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

