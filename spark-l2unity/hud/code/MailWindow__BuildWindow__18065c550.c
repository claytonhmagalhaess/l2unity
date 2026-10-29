// MailWindow__BuildWindow__18065c550 @ 0x18065c550

longlong MailWindow__BuildWindow__18065c550(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (cRam00000001834b3d89 == '\0') {
    FUN_180315380(TI_MailWindow.<BuildWindow>d__40);
    cRam00000001834b3d89 = '\x01';
  }
  lVar1 = func_0x000180315580(TI_MailWindow.<BuildWindow>d__40);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000180314690(lVar1 + 0x20,param_1);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000180314690(lVar1 + 0x28,param_2);
  return lVar1;
}

