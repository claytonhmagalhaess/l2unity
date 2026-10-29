// L2ClickableSlot__HandleLeftDoubleClick__18076ec70 @ 0x18076ec70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ClickableSlot__HandleLeftDoubleClick__18076ec70(longlong param_1)

{
  undefined8 uVar1;
  undefined4 auStackX_8 [8];
  
  if (cRam00000001834b43d7 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(LIT_"'Slot {0} left double-clicked.'");
    cRam00000001834b43d7 = '\x01';
  }
  auStackX_8[0] = *(undefined4 *)(param_1 + 0x14);
  uVar1 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
  uVar1 = System_String__Format(LIT_"'Slot {0} left double-clicked.'",uVar1,0);
  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
    func_0x000180315660();
  }
  UnityEngine_Debug__Log(uVar1,0);
  return;
}

