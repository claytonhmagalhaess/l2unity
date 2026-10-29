// L2LoginUI__AutoLogin__180776f50 @ 0x180776f50

longlong L2LoginUI__AutoLogin__180776f50(void)

{
  longlong lVar1;
  
  if (cRam00000001834b4405 == '\0') {
    FUN_180315380(TI_L2LoginUI.<AutoLogin>d__9);
    cRam00000001834b4405 = '\x01';
  }
  lVar1 = func_0x000180315580(TI_L2LoginUI.<AutoLogin>d__9);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  return lVar1;
}

