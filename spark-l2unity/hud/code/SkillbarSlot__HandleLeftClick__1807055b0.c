// SkillbarSlot__HandleLeftClick__1807055b0 @ 0x1807055b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarSlot__HandleLeftClick__1807055b0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b4176 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(LIT_"'Use bar slot {0}.'");
    cRam00000001834b4176 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    auStackX_8[0] = *(undefined4 *)(param_1 + 0x14);
    uVar2 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    uVar2 = System_String__Format(LIT_"'Use bar slot {0}.'",uVar2,0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__Log(uVar2,0);
    if (cRam00000001834b3101 == '\0') {
      FUN_180315380(TI_PlayerShortcuts);
      cRam00000001834b3101 = '\x01';
    }
    if (**(longlong **)(TI_PlayerShortcuts + 0xb8) == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    PlayerShortcuts__UseShortcut__1804d3630
              (**(longlong **)(TI_PlayerShortcuts + 0xb8),*(undefined8 *)(param_1 + 0xb0),0);
  }
  return;
}

