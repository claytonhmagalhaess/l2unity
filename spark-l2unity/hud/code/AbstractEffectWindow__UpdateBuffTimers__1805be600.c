// AbstractEffectWindow__UpdateBuffTimers__1805be600 @ 0x1805be600

longlong AbstractEffectWindow__UpdateBuffTimers__1805be600(undefined8 param_1)

{
  longlong lVar1;
  
  if (cRam00000001834b3a85 == '\0') {
    FUN_180315380(TI_AbstractEffectWindow.<UpdateBuffTimers>d__24);
    cRam00000001834b3a85 = '\x01';
  }
  lVar1 = func_0x000180315580(TI_AbstractEffectWindow.<UpdateBuffTimers>d__24);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000180314690(lVar1 + 0x20,param_1);
  return lVar1;
}

