// SparkOpcoes__AplicaCamera__1804a26d0 @ 0x1804a26d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes__AplicaCamera__1804a26d0(void)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  
  if (cRam00000001834b32b2 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32b2 = '\x01';
  }
  lVar3 = UnityEngine_Camera__get_main(0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(lVar3,0,0);
  if (cVar2 == '\0') {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b32b1 == '\0') {
      FUN_180315380(TI_SparkOpcoes);
      cRam00000001834b32b1 = '\x01';
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x2c) == 0) {
      fVar5 = 0.55;
    }
    else {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x2c) == 1) {
        fVar5 = 0.8;
      }
      else {
        fVar5 = 1.0;
      }
    }
    if (lVar3 == 0) {
code_r0x0001804a2882:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine_Camera__set_farClipPlane(lVar3,fVar5 * 500.0,0);
    lVar3 = UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData
                      (lVar3,0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
    if (cVar2 != '\0') {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x28) == 0) {
        iVar4 = 0;
      }
      else {
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        iVar4 = (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x28) != 1) + 1;
      }
      if (lVar3 == 0) goto code_r0x0001804a2882;
      *(int *)(lVar3 + 0x50) = iVar4;
    }
  }
  return;
}

