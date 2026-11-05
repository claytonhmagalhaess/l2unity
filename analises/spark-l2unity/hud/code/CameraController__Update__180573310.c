// CameraController__Update__180573310 @ 0x180573310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CameraController__Update__180573310(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  float fVar5;
  
  if (cRam00000001834b38fd == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b38fd = '\x01';
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((cVar4 != '\0') && (*(longlong *)(param_1 + 0x90) != 0)) {
    if (cRam00000001834b3902 == '\0') {
      FUN_180315380(TI_SparkOpcoes);
      cRam00000001834b3902 = '\x01';
    }
    if (DAT_1834b3532 == '\0') {
      FUN_180315380(TI_InputManager);
      DAT_1834b3532 = '\x01';
    }
    if (**(longlong **)(TI_InputManager + 0xb8) == 0) {
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar1 = *(float *)(**(longlong **)(TI_InputManager + 0xb8) + 0xdc);
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xdd) == '\0') {
      fVar5 = 1.0;
    }
    else {
      fVar5 = -1.0;
    }
    fVar5 = *(float *)(param_1 + 0x74) - fVar1 * fVar5 * *(float *)(param_1 + 0x70) * 0.1;
    fVar1 = *(float *)(param_1 + 0x68);
    if ((fVar5 < *(float *)(param_1 + 0x68)) ||
       (fVar1 = *(float *)(param_1 + 0x6c), *(float *)(param_1 + 0x6c) < fVar5)) {
      fVar5 = fVar1;
    }
    *(float *)(param_1 + 0x74) = fVar5;
  }
  return;
}

