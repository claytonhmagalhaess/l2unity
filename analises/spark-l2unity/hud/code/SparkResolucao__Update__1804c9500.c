// SparkResolucao__Update__1804c9500 @ 0x1804c9500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkResolucao__Update__1804c9500(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  
  if (cRam00000001834b32e4 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.Rendering.GraphicsDeviceType);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkResolucao);
    FUN_180315380(LIT_"' - using render scale.'");
    FUN_180315380(LIT_"'[SPARK] Dynamic resolution: native scaling had no effect...");
    FUN_180315380(LIT_"'[SPARK] Dynamic resolution: native scaling not accepted ...");
    cRam00000001834b32e4 = '\x01';
  }
  fVar13 = (float)FUN_1824366b0(0);
  bVar12 = false;
  bVar11 = false;
  if (*(float *)(param_1 + 0x5c) <= fVar13) {
    *(float *)(param_1 + 0x5c) = fVar13 + 1.0;
    uVar7 = UnityEngine_Camera__get_main(0);
    uVar10 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = UnityEngine_Object__op_Inequality(uVar7,uVar10,0);
    if (cVar5 != '\0') {
      if (*(char *)(param_1 + 0x24) != '\0') {
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660(TI_SparkOpcoes);
        }
        bVar12 = 0 < *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x54);
      }
      SparkResolucao__LigaNativa__1804c8b50(param_1,bVar12,0);
    }
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x54) == 0) {
    return;
  }
  if (((*(float *)(param_1 + 0x54) <= 0.0) || (fVar13 < *(float *)(param_1 + 0x54))) ||
     (*(undefined4 *)(param_1 + 0x54) = 0xbf800000, *(char *)(param_1 + 0x24) == '\0')) {
code_r0x0001804c9770:
    fVar14 = *(float *)(param_1 + 0x2c);
    fVar15 = (float)FUN_182436680(0);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(float *)(param_1 + 0x2c) = fVar15 * 1000.0 + fVar14;
    cVar5 = FUN_1823d5a10(0);
    if (cVar5 != '\0') {
      FUN_1823d58d0(0);
      iVar6 = UnityEngine_FrameTimingManager__GetLatestTimings(1,*(undefined8 *)(param_1 + 0x68),0);
      if (iVar6 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x68);
        if (lVar2 == 0) goto code_r0x0001804c9d90;
        if (*(int *)(lVar2 + 0x18) == 0) {
DAT_1804c9d8a:
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (0.0 < *(double *)(lVar2 + 0x40)) {
          dVar1 = *(double *)(lVar2 + 0x40);
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
          *(float *)(param_1 + 0x30) = (float)dVar1 + *(float *)(param_1 + 0x30);
        }
      }
    }
    fVar14 = *(float *)(param_1 + 0x28);
    fVar15 = (float)FUN_182436680(0);
    fVar15 = fVar15 + fVar14;
    *(float *)(param_1 + 0x28) = fVar15;
    if (fVar15 < 0.5) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x34);
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    fVar14 = *(float *)(param_1 + 0x2c) / (float)iVar6;
    if (*(int *)(param_1 + 0x34) / 2 <= *(int *)(param_1 + 0x38)) {
      bVar11 = 0 < *(int *)(param_1 + 0x38);
    }
    if (bVar11 == false) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = *(float *)(param_1 + 0x30) / (float)*(int *)(param_1 + 0x38);
    }
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    if (fVar13 - *(float *)(param_1 + 0x44) < 1.0) {
      return;
    }
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b32e3 == '\0') {
      FUN_180315380(TI_SparkOpcoes);
      cRam00000001834b32e3 = '\x01';
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    iVar6 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x54);
    if (iVar6 == 1) {
      fVar17 = 30.0;
    }
    else if (iVar6 == 2) {
      fVar17 = 45.0;
    }
    else if (iVar6 == 3) {
      fVar17 = 60.0;
    }
    else {
      puVar8 = (undefined8 *)UnityEngine_Screen__get_currentResolution(&uStack_98,0);
      uStack_a8 = *puVar8;
      uStack_a0 = puVar8[1];
      uVar9 = func_0x000181907b40(&uStack_a8,0);
      fVar17 = (float)((double)(uVar9 & 0xffffffff) / (double)(uVar9 >> 0x20));
      if ((fVar17 < 30.0) || (0x7f800000 < (uint)ABS(fVar17))) {
        fVar17 = 60.0;
      }
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x10) == '\0') {
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (0 < *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14)) {
          if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
            func_0x000180315660();
          }
          fVar16 = (float)*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14);
          if (fVar16 <= fVar17) {
            fVar17 = fVar16;
          }
        }
      }
    }
    fVar17 = 1000.0 / fVar17;
    if (cRam00000001834b33bd == '\0') {
      FUN_180315380(TI_SparkResolucao);
      cRam00000001834b33bd = '\x01';
    }
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    *(float *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x30) = fVar17;
    if (cRam00000001834b33be == '\0') {
      FUN_180315380(TI_SparkResolucao);
      cRam00000001834b33be = '\x01';
    }
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660(TI_SparkResolucao);
    }
    *(bool *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x34) = bVar11;
    fVar16 = fVar14;
    if (bVar11 != false) {
      fVar16 = fVar15;
    }
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b33bf == '\0') {
      FUN_180315380(TI_SparkResolucao);
      cRam00000001834b33bf = '\x01';
    }
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    *(float *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x2c) = fVar16;
    if ((((*(byte *)(param_1 + 0x24) & bVar11) != 0) && (0.0 < *(float *)(param_1 + 0x58))) &&
       (3 < *(int *)(param_1 + 0x20))) {
      if (*(float *)(param_1 + 0x58) * 0.92 < fVar15) {
        if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
          func_0x000180315660();
        }
        FUN_1804b4770(1,0);
        *(undefined4 *)(param_1 + 0x58) = 0xbf800000;
        uStack_88 = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
        uStack_98 = TI_UnityEngine.Rendering.GraphicsDeviceType;
        uStack_90 = 0xffffffffffffffff;
        uVar7 = System_Enum__ToString(&uStack_98,0);
        uVar10 = LIT_"'[SPARK] Dynamic resolution: native scaling had no effect...";
        goto code_r0x0001804c9ba3;
      }
      *(undefined4 *)(param_1 + 0x58) = 0xbf800000;
    }
    if (bVar11 == false) {
      bVar4 = fVar17 * 1.1 < fVar14;
      bVar12 = fVar17 * 1.02 == fVar14;
      bVar11 = fVar17 * 1.02 < fVar14;
    }
    else {
      bVar4 = fVar17 * 0.92 < fVar15;
      bVar12 = fVar17 * 0.72 == fVar15;
      bVar11 = fVar17 * 0.72 < fVar15;
    }
    if (bVar4) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (fVar13 - *(float *)(param_1 + 0x48) < 4.0) {
        *(float *)(param_1 + 0x4c) = fVar13 + *(float *)(param_1 + 0x50);
        fVar13 = *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x48) = 0xc2c80000;
        iVar6 = *(int *)(param_1 + 0x20) + 1;
        if (60.0 <= fVar13) {
          fVar13 = 60.0;
        }
        *(float *)(param_1 + 0x50) = fVar13;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x3c) + 1;
        *(int *)(param_1 + 0x3c) = iVar6;
        if (iVar6 < 2) {
          return;
        }
        iVar6 = *(int *)(param_1 + 0x20);
        if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (**(longlong **)(TI_SparkResolucao + 0xb8) == 0) {
code_r0x0001804c9d90:
          FUN_1803155d0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(**(longlong **)(TI_SparkResolucao + 0xb8) + 0x18) + -1 <= iVar6) {
          return;
        }
        if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
          func_0x000180315660();
        }
        fVar13 = (float)FUN_1804b46b0(0);
        iVar6 = (1.4 < fVar13 / fVar17) + 1 + *(int *)(param_1 + 0x20);
      }
      SparkResolucao__PoeDegrau__1804c8d20(param_1,iVar6,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if ((0.0 < *(float *)(param_1 + 0x48)) && (20.0 < fVar13 - *(float *)(param_1 + 0x48))) {
        *(undefined4 *)(param_1 + 0x50) = 0x41000000;
        *(undefined4 *)(param_1 + 0x48) = 0xc2c80000;
      }
      if (bVar11 || bVar12) {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x40) + 1;
        *(int *)(param_1 + 0x40) = iVar6;
        if (((5 < iVar6) && (0 < *(int *)(param_1 + 0x20))) &&
           (*(float *)(param_1 + 0x4c) <= fVar13)) {
          SparkResolucao__PoeDegrau__1804c8d20(param_1,*(int *)(param_1 + 0x20) + -1,0);
          *(float *)(param_1 + 0x48) = fVar13;
        }
      }
    }
  }
  else {
    fVar14 = (float)FUN_1823e2460(0);
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar2 = **(longlong **)(TI_SparkResolucao + 0xb8);
    if (lVar2 == 0) goto code_r0x0001804c9d90;
    if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_1 + 0x20)) goto DAT_1804c9d8a;
    if (ABS(fVar14 - *(float *)(lVar2 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x20) * 4)) <=
        0.01) goto code_r0x0001804c9770;
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    FUN_1804b4770(1,0);
    uStack_88 = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
    uStack_98 = TI_UnityEngine.Rendering.GraphicsDeviceType;
    uStack_90 = 0xffffffffffffffff;
    uVar7 = System_Enum__ToString(&uStack_98,0);
    uVar10 = LIT_"'[SPARK] Dynamic resolution: native scaling not accepted ...";
code_r0x0001804c9ba3:
    uVar10 = System_String__Concat(uVar10,uVar7,LIT_"' - using render scale.'",0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__Log(uVar10,0);
    SparkResolucao__Reinicia__1804c90b0(param_1,0);
  }
  return;
}

