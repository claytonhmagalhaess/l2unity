// L2ClickableSlot__SetSelected__18076f170 @ 0x18076f170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ClickableSlot__SetSelected__18076f170(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b43d1 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(LIT_"'Slot {0} selected.'");
    FUN_180315380(LIT_"'selected'");
    cRam00000001834b43d1 = '\x01';
  }
  auStackX_8[0] = *(undefined4 *)(param_1 + 0x14);
  uVar2 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
  uVar2 = System_String__Format(LIT_"'Slot {0} selected.'",uVar2,0);
  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
    func_0x000180315660();
  }
  UnityEngine_Debug__Log(uVar2,0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    UnityEngine_UIElements_VisualElement__AddToClassList
              (*(longlong *)(param_1 + 0x40),LIT_"'selected'",0);
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

