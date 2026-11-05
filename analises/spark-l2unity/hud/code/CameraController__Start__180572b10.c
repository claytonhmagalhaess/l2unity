// CameraController__Start__180572b10 @ 0x180572b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CameraController__Start__180572b10(longlong param_1)

{
  undefined4 uVar1;
  
  if (DAT_1834b2e67 == '\0') {
    FUN_180315380(TI_UnityEngine.Vector3);
    DAT_1834b2e67 = '\x01';
  }
  uVar1 = *(undefined4 *)(*(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x20) = **(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}

