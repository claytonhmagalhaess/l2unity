// L2ToolTip__UpdateToolTipCoroutine__1807987e0 @ 0x1807987e0

longlong L2ToolTip__UpdateToolTipCoroutine__1807987e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (cRam00000001834b446e == '\0') {
    FUN_180315380(TI_L2ToolTip.<UpdateToolTipCoroutine>d__29);
    cRam00000001834b446e = '\x01';
  }
  lVar1 = func_0x000180315580(TI_L2ToolTip.<UpdateToolTipCoroutine>d__29);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000180314690(lVar1 + 0x20,param_1);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000180314690(lVar1 + 0x28,param_2);
  return lVar1;
}

