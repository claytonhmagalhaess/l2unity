// PetStatusWindow__BuildWindow__1806a9ed0 @ 0x1806a9ed0

longlong PetStatusWindow__BuildWindow__1806a9ed0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (cRam00000001834b3fa8 == '\0') {
    FUN_180315380(TI_PetStatusWindow.<BuildWindow>d__16);
    cRam00000001834b3fa8 = '\x01';
  }
  lVar1 = func_0x000180315580(TI_PetStatusWindow.<BuildWindow>d__16);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000180314690(lVar1 + 0x20,param_1);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000180314690(lVar1 + 0x28,param_2);
  return lVar1;
}

