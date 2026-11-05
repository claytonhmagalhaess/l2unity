// SkillbarMin__Minimize__180703df0 @ 0x180703df0

longlong SkillbarMin__Minimize__180703df0(undefined8 param_1)

{
  longlong lVar1;
  
  if (cRam00000001834b4166 == '\0') {
    FUN_180315380(TI_SkillbarMin.<Minimize>d__4);
    cRam00000001834b4166 = '\x01';
  }
  lVar1 = func_0x000180315580(TI_SkillbarMin.<Minimize>d__4);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000180314690(lVar1 + 0x20,param_1);
  return lVar1;
}

