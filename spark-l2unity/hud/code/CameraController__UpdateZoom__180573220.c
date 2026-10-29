// CameraController__UpdateZoom__180573220 @ 0x180573220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CameraController__UpdateZoom__180573220(longlong param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  
  if (cRam00000001834b3902 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3902 = '\x01';
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if (**(longlong **)(TI_InputManager + 0xb8) != 0) {
    fVar1 = *(float *)(**(longlong **)(TI_InputManager + 0xb8) + 0xdc);
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xdd) == '\0') {
      fVar3 = 1.0;
    }
    else {
      fVar3 = -1.0;
    }
    fVar3 = *(float *)(param_1 + 0x74) - fVar1 * fVar3 * *(float *)(param_1 + 0x70) * 0.1;
    fVar1 = *(float *)(param_1 + 0x68);
    if ((fVar3 < *(float *)(param_1 + 0x68)) ||
       (fVar1 = *(float *)(param_1 + 0x6c), *(float *)(param_1 + 0x6c) < fVar3)) {
      fVar3 = fVar1;
    }
    *(float *)(param_1 + 0x74) = fVar3;
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

