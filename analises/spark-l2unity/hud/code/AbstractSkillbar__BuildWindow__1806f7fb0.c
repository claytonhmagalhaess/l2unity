// AbstractSkillbar__BuildWindow__1806f7fb0 @ 0x1806f7fb0

longlong AbstractSkillbar__BuildWindow__1806f7fb0
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (cRam00000001834b4156 == '\0') {
    FUN_180315380(TI_AbstractSkillbar.<BuildWindow>d__15);
    cRam00000001834b4156 = '\x01';
  }
  lVar1 = func_0x000180315580(TI_AbstractSkillbar.<BuildWindow>d__15);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000180314690(lVar1 + 0x20,param_1);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000180314690(lVar1 + 0x28,param_2);
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  func_0x000180314690(lVar1 + 0x30,param_3);
  return lVar1;
}

