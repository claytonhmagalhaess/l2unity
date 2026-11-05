// CameraController__UpdateInputs__180572b60 @ 0x180572b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CameraController__UpdateInputs__180572b60(longlong param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (cRam00000001834b3901 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Mouse Y'");
    FUN_180315380(LIT_"'Mouse X'");
    cRam00000001834b3901 = '\x01';
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if (**(longlong **)(TI_InputManager + 0xb8) != 0) {
    if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xd9) != '\0') {
      if (DAT_1834b3532 == '\0') {
        FUN_180315380(TI_InputManager);
        DAT_1834b3532 = '\x01';
      }
      if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x000180572d08;
      fVar4 = *(float *)(param_1 + 0x2c);
      fVar2 = (float)func_0x0001824bb440(LIT_"'Mouse X'",0);
      fVar5 = *(float *)(param_1 + 0x30);
      *(float *)(param_1 + 0x2c) = fVar2 * *(float *)(param_1 + 100) + fVar4;
      fVar2 = (float)func_0x0001824bb440(LIT_"'Mouse Y'",0);
      fVar4 = *(float *)(param_1 + 100);
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660(TI_SparkOpcoes);
      }
      if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xdc) == '\0') {
        fVar3 = 1.0;
      }
      else {
        fVar3 = -1.0;
      }
      fVar5 = fVar5 - fVar4 * fVar2 * fVar3;
      if (fVar5 < -360.0) {
        fVar5 = fVar5 + 360.0;
      }
      if (360.0 < fVar5) {
        fVar5 = fVar5 + -360.0;
      }
      fVar4 = -90.0;
      if ((-90.0 <= fVar5) && (fVar4 = 90.0, fVar5 <= 90.0)) {
        fVar4 = fVar5;
      }
      *(float *)(param_1 + 0x30) = fVar4;
    }
    return;
  }
code_r0x000180572d08:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

