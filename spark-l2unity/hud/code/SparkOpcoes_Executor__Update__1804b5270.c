// SparkOpcoes_Executor__Update__1804b5270 @ 0x1804b5270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes_Executor__Update__1804b5270
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 unaff_RBX;
  float fVar7;
  
  if (cRam00000001834b32ce == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32ce = '\x01';
  }
  fVar7 = (float)FUN_1824366b0(0);
  if (*(float *)(param_1 + 0x20) <= fVar7) {
    fVar7 = (float)FUN_1824366b0(0);
    *(float *)(param_1 + 0x20) = fVar7 + 2.0;
    uVar4 = UnityEngine_Camera__get_main(0);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar4,uVar5,0);
    if (cVar2 != '\0') {
      uVar5 = UnityEngine_Camera__get_main(0);
      *(undefined8 *)(param_1 + 0x28) = uVar5;
      func_0x000180314690(param_1 + 0x28,uVar5);
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b32b2 == '\0') {
        FUN_180315380(TI_UnityEngine.Object);
        FUN_180315380(TI_SparkOpcoes);
        cRam00000001834b32b2 = '\x01';
      }
      lVar3 = UnityEngine_Camera__get_main(0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Equality(lVar3,0,0,param_4,unaff_RBX);
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
          fVar7 = 0.55;
        }
        else {
          if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x2c) == 1) {
            fVar7 = 0.8;
          }
          else {
            fVar7 = 1.0;
          }
        }
        if (lVar3 == 0) {
code_r0x0001804a2882:
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UnityEngine_Camera__set_farClipPlane(lVar3,fVar7 * 500.0,0);
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
            iVar6 = 0;
          }
          else {
            if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
              func_0x000180315660();
            }
            iVar6 = (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x28) != 1) + 1;
          }
          if (lVar3 == 0) goto code_r0x0001804a2882;
          *(int *)(lVar3 + 0x50) = iVar6;
        }
      }
      return;
    }
  }
  return;
}

