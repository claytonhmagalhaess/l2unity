// L2SlotManager__Equip__180791570 @ 0x180791570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotManager__Equip__180791570(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b444e == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_InventorySlot);
    FUN_180315380(LIT_"'Equip {0}.'");
    cRam00000001834b444e = '\x01';
  }
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    if ((*(byte *)(TI_InventorySlot + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (*(longlong *)
         (*(longlong *)(*plVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) ==
        TI_InventorySlot)) {
      auStackX_8[0] = (undefined4)plVar1[2];
      uVar3 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      uVar3 = System_String__Format(LIT_"'Equip {0}.'",uVar3,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__Log(uVar3,0);
      (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
      return;
    }
    FUN_1803146d0(plVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

