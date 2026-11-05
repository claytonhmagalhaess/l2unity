// L2SlotManager__AddSkillToSkillbar__18078fef0 @ 0x18078fef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotManager__AddSkillToSkillbar__18078fef0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_18 [2];
  
  if (cRam00000001834b4458 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_SkillSlot);
    FUN_180315380(LIT_"'Add skill {0} to skillbar slot {1}.'");
    cRam00000001834b4458 = '\x01';
  }
  plVar3 = *(longlong **)(param_1 + 0x88);
  if (plVar3 != (longlong *)0x0) {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TI_SkillSlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar3 + 200) + -8 + (ulonglong)*(byte *)(TI_SkillSlot + 0x130) * 8
         ) != TI_SkillSlot)) {
      FUN_1803146d0(plVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((plVar3[0x14] != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
      uVar1 = *(undefined4 *)(plVar3[0x14] + 0x10);
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x14);
      auStackX_8[0] = uVar1;
      uVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      auStackX_18[0] = uVar2;
      uVar6 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
      uVar5 = System_String__Format(LIT_"'Add skill {0} to skillbar slot {1}.'",uVar5,uVar6,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__LogWarning(uVar5,0);
      if (cRam00000001834b3101 == '\0') {
        FUN_180315380(TI_PlayerShortcuts);
        cRam00000001834b3101 = '\x01';
      }
      if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
        PlayerShortcuts__AddShortcut__1804d1730
                  (**(longlong **)(TI_PlayerShortcuts + 0xb8),uVar2,uVar1,2,0);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

