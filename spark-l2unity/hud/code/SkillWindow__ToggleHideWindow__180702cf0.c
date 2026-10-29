// SkillWindow__ToggleHideWindow__180702cf0 @ 0x180702cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillWindow__ToggleHideWindow__180702cf0(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000180702d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if (DAT_1834b3103 == '\0') {
    FUN_180315380(TI_PlayerSkill);
    DAT_1834b3103 = '\x01';
  }
  if (**(longlong **)(TI_PlayerSkill + 0xb8) != 0) {
    if (*(char *)(**(longlong **)(TI_PlayerSkill + 0xb8) + 0x38) == '\0') {
      if (DAT_1834b3103 == '\0') {
        FUN_180315380(TI_PlayerSkill);
        DAT_1834b3103 = '\x01';
      }
      if (**(longlong **)(TI_PlayerSkill + 0xb8) == 0) goto code_r0x000180702dae;
      uVar2 = PlayerSkill__GetSkillsForWindow(**(longlong **)(TI_PlayerSkill + 0xb8),0);
      SkillWindow__SetSkills(param_1,uVar2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x000180702da7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    return;
  }
code_r0x000180702dae:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

