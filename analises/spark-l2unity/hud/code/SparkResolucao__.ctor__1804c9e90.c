// SparkResolucao__.ctor__1804c9e90 @ 0x1804c9e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkResolucao___ctor__1804c9e90
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  
  if (cRam00000001834b32e6 == '\0') {
    FUN_180315380(TI_UnityEngine.FrameTiming__);
    cRam00000001834b32e6 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x48) = 0xc2c80000;
  *(undefined4 *)(param_1 + 0x50) = 0x41000000;
  *(undefined4 *)(param_1 + 0x54) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x58) = 0xbf800000;
  uVar1 = func_0x000180314710(TI_UnityEngine.FrameTiming__,1);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  func_0x000180314690(param_1 + 0x68,uVar1);
  if (DAT_1834c10ac == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0,param_3,param_4,unaff_RBX);
    DAT_1834c10ac = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  return;
}

