// L2Window__MontaELembra__180799fc0 @ 0x180799fc0

longlong L2Window__MontaELembra__180799fc0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (cRam00000001834b447d == '\0') {
    FUN_180315380(TI_L2Window.<MontaELembra>d__18);
    cRam00000001834b447d = '\x01';
  }
  lVar1 = func_0x000180315580(TI_L2Window.<MontaELembra>d__18);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000180314690(lVar1 + 0x20,param_1);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000180314690(lVar1 + 0x28,param_2);
  return lVar1;
}

