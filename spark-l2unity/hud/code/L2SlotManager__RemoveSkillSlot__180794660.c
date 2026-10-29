// L2SlotManager__RemoveSkillSlot__180794660 @ 0x180794660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotManager__RemoveSkillSlot__180794660(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b4459 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(LIT_"'Removing skillbar shortcut from slot {0}.'");
    cRam00000001834b4459 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x14);
    auStackX_8[0] = uVar1;
    uVar3 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    uVar3 = System_String__Format(LIT_"'Removing skillbar shortcut from slot {0}.'",uVar3,0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(uVar3,0);
    if (cRam00000001834b3101 == '\0') {
      FUN_180315380(TI_PlayerShortcuts);
      cRam00000001834b3101 = '\x01';
    }
    if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
      PlayerShortcuts__DeleteShortcut__1804d1f20
                (**(longlong **)(TI_PlayerShortcuts + 0xb8),uVar1,0);
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

