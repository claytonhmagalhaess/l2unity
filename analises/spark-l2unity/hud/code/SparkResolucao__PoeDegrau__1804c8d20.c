// SparkResolucao__PoeDegrau__1804c8d20 @ 0x1804c8d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkResolucao__PoeDegrau__1804c8d20(longlong param_1,uint param_2)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  
  if (cRam00000001834b32e2 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b32e2 = '\x01';
  }
  if (((*(char *)(param_1 + 0x24) != '\0') && (*(int *)(param_1 + 0x20) == 0)) && (0 < (int)param_2)
     ) {
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b33ba == '\0') {
      FUN_180315380(TI_SparkResolucao);
      cRam00000001834b33ba = '\x01';
    }
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(char *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x34) != '\0') {
      if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar7 = FUN_1804b46b0(0);
      *(undefined4 *)(param_1 + 0x58) = uVar7;
    }
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_SparkResolucao + 0xb8) != 0) {
    if ((((int)param_2 < 0) ||
        (uVar6 = *(int *)(**(longlong **)(TI_SparkResolucao + 0xb8) + 0x18) - 1,
        (int)param_2 <= (int)uVar6)) && (uVar6 = param_2, (int)param_2 < 0)) {
      uVar6 = 0;
    }
    *(uint *)(param_1 + 0x20) = uVar6;
    lVar2 = **(longlong **)(TI_SparkResolucao + 0xb8);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= uVar6) {
        FUN_1803155c0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar1 = *(float *)(lVar2 + 0x20 + (longlong)(int)uVar6 * 4);
      if (*(char *)(param_1 + 0x24) == '\0') {
        if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
          func_0x000180315660(TI_SparkResolucao);
        }
        uVar3 = *(undefined8 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x10);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if (cVar5 != '\0') {
          if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
            func_0x000180315660(TI_SparkResolucao);
          }
          lVar2 = *(longlong *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x10);
          if (lVar2 == 0) goto code_r0x0001804c8fa1;
          UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_renderScale
                    (lVar2,fVar1,0);
        }
      }
      else {
        FUN_1823e23e0(fVar1,fVar1,0);
        if (fVar1 < 0.999) {
          fVar8 = (float)FUN_1824366b0(0);
          *(float *)(param_1 + 0x54) = fVar8 + 0.2;
        }
      }
      if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b33b9 == '\0') {
        FUN_180315380(TI_SparkResolucao);
        cRam00000001834b33b9 = '\x01';
      }
      if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
        func_0x000180315660();
      }
      *(float *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x18) = fVar1;
      uVar7 = FUN_1824366b0(0);
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x44) = uVar7;
      return;
    }
  }
code_r0x0001804c8fa1:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

