// CameraController___ctor__180573470 @ 0x180573470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CameraController___ctor__180573470(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x60) = 0x41000000;
  *(undefined4 *)(param_1 + 100) = 0x41c80000;
  *(undefined4 *)(param_1 + 0x68) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x6c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x70) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x74) = 0x40000000;
  if (DAT_1834c10ac == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0);
    DAT_1834c10ac = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  return;
}

