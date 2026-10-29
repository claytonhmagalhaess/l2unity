// DamageText__FlotatingText__18061e000 @ 0x18061e000

longlong DamageText__FlotatingText__18061e000(undefined8 param_1)

{
  longlong lVar1;
  
  if (cRam00000001834b3d0a == '\0') {
    FUN_180315380(TI_DamageText.<FlotatingText>d__2);
    cRam00000001834b3d0a = '\x01';
  }
  lVar1 = func_0x000180315580(TI_DamageText.<FlotatingText>d__2);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000180314690(lVar1 + 0x20,param_1);
  return lVar1;
}

