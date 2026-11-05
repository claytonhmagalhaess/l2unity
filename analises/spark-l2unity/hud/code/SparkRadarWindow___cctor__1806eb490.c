// SparkRadarWindow___cctor__1806eb490 @ 0x1806eb490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow___cctor__1806eb490(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b40a7 == '\0') {
    FUN_180315380(TI_int__);
    FUN_180315380(TI_SparkRadarWindow.PorDistancia);
    FUN_180315380(TI_float__);
    FUN_180315380(TI_SparkRadarWindow);
    FUN_180315380(FI_92);
    FUN_180315380(FI_128);
    cRam00000001834b40a7 = '\x01';
  }
  uVar2 = func_0x000180314710(TI_float__,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,FI_128,0);
  *(undefined8 *)(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 8) = uVar2;
  func_0x000180314690(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 8,uVar2);
  lVar1 = *(longlong *)(TI_SparkRadarWindow + 0xb8);
  *(undefined4 *)(lVar1 + 0x10) = 0x3eb0b0b1;
  *(undefined4 *)(lVar1 + 0x14) = 0x3ed0d0d1;
  *(undefined4 *)(lVar1 + 0x18) = 0x3ecccccd;
  *(undefined4 *)(lVar1 + 0x1c) = 0x3f800000;
  uVar2 = func_0x000180314710(TI_int__,10);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,FI_92,0);
  *(undefined8 *)(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 0x20) = uVar2;
  func_0x000180314690(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 0x20,uVar2);
  uVar2 = func_0x000180315580(TI_SparkRadarWindow.PorDistancia);
  Gear__UpdateWeaponType__1803dadf0(uVar2,0);
  *(undefined8 *)(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 0x28) = uVar2;
  func_0x000180314690(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 0x28,uVar2);
  lVar1 = *(longlong *)(TI_SparkRadarWindow + 0xb8);
  *(undefined4 *)(lVar1 + 0x3c) = 0x3d808081;
  *(undefined4 *)(lVar1 + 0x40) = 0x3d70f0f1;
  *(undefined4 *)(lVar1 + 0x44) = 0x3d50d0d1;
  *(undefined4 *)(lVar1 + 0x48) = 0x3f800000;
  return;
}

