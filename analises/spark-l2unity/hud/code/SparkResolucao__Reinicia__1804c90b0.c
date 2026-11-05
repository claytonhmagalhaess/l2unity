// SparkResolucao__Reinicia__1804c90b0 @ 0x1804c90b0

/* WARNING: Removing unreachable block (ram,0x0001804c8d67) */
/* WARNING: Removing unreachable block (ram,0x0001804c8d77) */
/* WARNING: Removing unreachable block (ram,0x0001804c8d7c) */
/* WARNING: Removing unreachable block (ram,0x0001804c8d85) */
/* WARNING: Removing unreachable block (ram,0x0001804c8d98) */
/* WARNING: Removing unreachable block (ram,0x0001804c8da8) */
/* WARNING: Removing unreachable block (ram,0x0001804c8dad) */
/* WARNING: Removing unreachable block (ram,0x0001804c8dc1) */
/* WARNING: Removing unreachable block (ram,0x0001804c8dca) */
/* WARNING: Removing unreachable block (ram,0x0001804c8dcf) */
/* WARNING: Removing unreachable block (ram,0x0001804c8e27) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkResolucao__Reinicia__1804c90b0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  
  if (cRam00000001834b32e0 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkResolucao);
    FUN_180315380(LIT_"'native'");
    FUN_180315380(LIT_"'off'");
    FUN_180315380(LIT_"'renderScale'");
    cRam00000001834b32e0 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x50) = 0x41000000;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xc2c80000;
  uVar9 = FUN_1824366b0(0);
  *(undefined4 *)(param_1 + 0x44) = uVar9;
  *(undefined4 *)(param_1 + 0x58) = 0xbf800000;
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  iVar5 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x54);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 0x24) = 0;
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    FUN_1804b4700(LIT_"'off'",0);
    uVar7 = *(undefined8 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x10);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if (cVar4 == '\0') {
code_r0x0001804c946c:
      SparkResolucao__LigaNativa__1804c8b50(param_1,0,0);
      if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar9 = SparkResolucao__get_EscalaFixa__1804ca0a0(0);
      if (cRam00000001834b33b9 == '\0') {
        FUN_180315380(TI_SparkResolucao);
        cRam00000001834b33b9 = '\x01';
      }
      if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
        func_0x000180315660(TI_SparkResolucao);
      }
      *(undefined4 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x18) = uVar9;
      return;
    }
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660(TI_SparkResolucao);
    }
    lVar2 = *(longlong *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x10);
    if (cRam00000001834b32dd == '\0') {
      FUN_180315380(TI_SparkOpcoes);
      cRam00000001834b32dd = '\x01';
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    iVar5 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x20);
    if (iVar5 < 0x32) {
      iVar5 = 0x32;
    }
    else if (100 < iVar5) {
      iVar5 = 100;
    }
    if (lVar2 != 0) {
      UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_renderScale
                (lVar2,(float)iVar5 / 100.0,0);
      goto code_r0x0001804c946c;
    }
    goto DAT_1804c94f4;
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b32de == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b32de = '\x01';
  }
  iVar5 = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
  if ((iVar5 == 0x12) || (iVar5 == 0x15)) {
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b33b7 == '\0') {
      FUN_180315380(TI_SparkResolucao);
      cRam00000001834b33b7 = '\x01';
    }
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(char *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x28) != '\0')
    goto code_r0x0001804c9226;
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x4c) == 1) {
      if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
        func_0x000180315660();
      }
      iVar5 = UnityEngine_SystemInfo__get_graphicsShaderLevel(0);
      *(bool *)(param_1 + 0x24) = iVar5 < 0x2d;
      uVar7 = LIT_"'native'";
      if (iVar5 < 0x2d) goto code_r0x0001804c9231;
      goto code_r0x0001804c922a;
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
    uVar7 = LIT_"'native'";
  }
  else {
code_r0x0001804c9226:
    *(undefined1 *)(param_1 + 0x24) = 0;
code_r0x0001804c922a:
    uVar7 = LIT_"'renderScale'";
  }
code_r0x0001804c9231:
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660();
  }
  FUN_1804b4700(uVar7,0);
  uVar7 = *(undefined8 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x10);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if (cVar4 != '\0') {
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660(TI_SparkResolucao);
    }
    if (*(longlong *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x10) == 0) {
DAT_1804c94f4:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_renderScale();
  }
  SparkResolucao__LigaNativa__1804c8b50(param_1,*(undefined1 *)(param_1 + 0x24),0);
  if (cRam00000001834b32e2 == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0,0);
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b32e2 = '\x01';
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_SparkResolucao + 0xb8) != 0) {
    uVar6 = *(int *)(**(longlong **)(TI_SparkResolucao + 0xb8) + 0x18) - 1;
    if (-1 < (int)uVar6) {
      uVar6 = 0;
    }
    *(uint *)(param_1 + 0x20) = uVar6;
    lVar2 = **(longlong **)(TI_SparkResolucao + 0xb8);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= uVar6) {
        FUN_1803155c0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(lVar2 + 0x20 + (longlong)(int)uVar6 * 4);
      if (*(char *)(param_1 + 0x24) == '\0') {
        if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
          func_0x000180315660(TI_SparkResolucao);
        }
        uVar7 = *(undefined8 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x10);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if (cVar4 != '\0') {
          if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
            func_0x000180315660(TI_SparkResolucao);
          }
          if (*(longlong *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x10) == 0)
          goto code_r0x0001804c8fa1;
          UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_renderScale();
        }
      }
      else {
        FUN_1823e23e0(fVar1,TI_SparkResolucao,0);
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
      uVar9 = FUN_1824366b0(0);
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x44) = uVar9;
      return;
    }
  }
code_r0x0001804c8fa1:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

