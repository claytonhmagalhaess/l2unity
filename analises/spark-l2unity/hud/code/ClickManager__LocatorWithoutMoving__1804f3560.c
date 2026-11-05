// ClickManager__LocatorWithoutMoving__1804f3560 @ 0x1804f3560

longlong ClickManager__LocatorWithoutMoving__1804f3560
                   (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (cRam00000001834b35a6 == '\0') {
    FUN_180315380(TI_ClickManager.<LocatorWithoutMoving>d__35);
    cRam00000001834b35a6 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_ClickManager.<LocatorWithoutMoving>d__35);
  Gear__UpdateWeaponType__1803dadf0(lVar3,0);
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  func_0x000180314690(lVar3 + 0x20,param_1);
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + 0x28) = *param_2;
  *(undefined8 *)(lVar3 + 0x34) = *param_3;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x30) = uVar2;
  return lVar3;
}

