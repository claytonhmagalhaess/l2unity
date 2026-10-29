// SparkMacros_MacroRunner__Executa__1804594c0 @ 0x1804594c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkMacros_MacroRunner__Executa__1804594c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (DAT_1834b308a == '\0') {
    FUN_180315380(TI_SparkMacros.MacroRunner.<Executa>d__2);
    DAT_1834b308a = '\x01';
  }
  lVar1 = func_0x000180315580(TI_SparkMacros.MacroRunner.<Executa>d__2);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  func_0x000180314690(lVar1 + 0x28,param_1);
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  func_0x000180314690(lVar1 + 0x20,param_2);
  return lVar1;
}

