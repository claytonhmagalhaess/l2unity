// L2SlotManager__MoveSkillbarSlot__180792d40 @ 0x180792d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotManager__MoveSkillbarSlot__180792d40(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_18 [2];
  
  if (cRam00000001834b4456 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(LIT_"'Moving skillbar shortcut from slot {0} to slot {1}.'");
    cRam00000001834b4456 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x14);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x14);
    auStackX_8[0] = uVar2;
    uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    auStackX_18[0] = uVar1;
    uVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
    uVar4 = System_String__Format(LIT_"'Moving skillbar shortcut from slot {0} to slot {1}.'",uVar4,uVar5,0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(uVar4,0);
    if (cRam00000001834b3101 == '\0') {
      FUN_180315380(TI_PlayerShortcuts);
      cRam00000001834b3101 = '\x01';
    }
    if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
      PlayerShortcuts__MoveShortcut__1804d21d0
                (**(longlong **)(TI_PlayerShortcuts + 0xb8),uVar2,uVar1,0);
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

