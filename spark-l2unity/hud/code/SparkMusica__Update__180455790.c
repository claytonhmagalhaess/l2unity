// SparkMusica__Update__180455790 @ 0x180455790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMusica__Update__180455790(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (cRam00000001834b3002 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3002 = '\x01';
  }
  fVar10 = (float)FUN_1824366b0(0);
  if (*(float *)(param_1 + 0x78) <= fVar10) {
    *(float *)(param_1 + 0x78) = fVar10 + 0.5;
    SparkMusica__Decide__180454130(param_1,0);
    SparkMusica__GaranteOuvinte__1804548d0(param_1,0);
  }
  lVar7 = *(longlong *)(param_1 + 0x30);
  if (lVar7 == 0) goto code_r0x000180455bc0;
  if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x48)) {
code_r0x000180455bc6:
    FUN_1803155c0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(float *)(param_1 + 0x68) <= 0.0 && *(float *)(param_1 + 0x68) != 0.0) &&
     (*(longlong *)(param_1 + 0x58) != 0)) {
    lVar7 = *(longlong *)(lVar7 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x48) * 8);
    if (lVar7 == 0) goto code_r0x000180455bc0;
    uVar6 = UnityEngine_AudioSource__get_clip(lVar7,0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (cVar4 != '\0') {
      cVar4 = UnityEngine_AudioSource__get_isPlaying(lVar7,0);
      if ((cVar4 == '\0') && (1.0 < fVar10 - *(float *)(param_1 + 0x4c))) {
        lVar7 = UnityEngine_AudioSource__get_clip(lVar7,0);
        if (lVar7 == 0) goto code_r0x000180455bc0;
        iVar5 = UnityEngine_AudioClip__get_loadState(lVar7,0);
        if (iVar5 != 1) {
          *(float *)(param_1 + 0x68) = fVar10 + *(float *)(param_1 + 100);
        }
      }
    }
  }
  if ((0.0 <= *(float *)(param_1 + 0x68)) && (*(float *)(param_1 + 0x68) <= fVar10)) {
    *(undefined4 *)(param_1 + 0x68) = 0xbf800000;
    SparkMusica__TocaProxima__180454f20(param_1,0);
  }
  if (cRam00000001834b301f == '\0') {
    FUN_180315380(TI_AudioManager);
    cRam00000001834b301f = '\x01';
  }
  uVar6 = **(undefined8 **)(TI_AudioManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if (cVar4 == '\0') {
    fVar10 = 0.5;
  }
  else {
    if (cRam00000001834b301f == '\0') {
      FUN_180315380(TI_AudioManager);
      cRam00000001834b301f = '\x01';
    }
    lVar7 = **(longlong **)(TI_AudioManager + 0xb8);
    if (lVar7 == 0) goto code_r0x000180455bc0;
    if (cRam00000001834b2fe3 == '\0') {
      FUN_180315380(TI_UnityEngine.Application);
      cRam00000001834b2fe3 = '\x01';
    }
    if (*(char *)(lVar7 + 0x34) != '\0') {
      if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = FUN_1823c9780(0);
      if (cVar4 == '\0') {
        fVar10 = 0.0;
        goto code_r0x0001804559f9;
      }
    }
    fVar10 = *(float *)(lVar7 + 0x3c) * *(float *)(lVar7 + 0x24) * *(float *)(lVar7 + 0x20) *
             *(float *)(lVar7 + 0x38);
  }
code_r0x0001804559f9:
  fVar11 = (float)FUN_182436680(0);
  uVar9 = 0;
  while (lVar7 = *(longlong *)(param_1 + 0x38), lVar7 != 0) {
    uVar8 = (uint)uVar9;
    if (*(uint *)(lVar7 + 0x18) <= uVar8) goto code_r0x000180455bc6;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar8) goto code_r0x000180455bc6;
    fVar12 = *(float *)(lVar2 + 0x20 + uVar9 * 4);
    fVar1 = *(float *)(lVar7 + 0x20 + uVar9 * 4);
    if (fVar11 * 0.5 < ABS(fVar12 - fVar1)) {
      if (fVar12 - fVar1 < 0.0) {
        fVar12 = -1.0;
      }
      else {
        fVar12 = 1.0;
      }
      fVar12 = fVar12 * fVar11 * 0.5 + fVar1;
    }
    *(float *)(lVar7 + 0x20 + uVar9 * 4) = fVar12;
    lVar7 = *(longlong *)(param_1 + 0x30);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar8) goto code_r0x000180455bc6;
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar8) goto code_r0x000180455bc6;
    lVar7 = *(longlong *)(lVar7 + 0x20 + uVar9 * 8);
    if (lVar7 == 0) break;
    UnityEngine_AudioSource__set_volume(lVar7,fVar10 * *(float *)(lVar2 + 0x20 + uVar9 * 4),0);
    lVar7 = *(longlong *)(param_1 + 0x38);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar8) goto code_r0x000180455bc6;
    if (*(float *)(lVar7 + 0x20 + uVar9 * 4) <= 0.0) {
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar8) goto code_r0x000180455bc6;
      if (*(float *)(lVar7 + 0x20 + uVar9 * 4) <= 0.0) {
        lVar7 = *(longlong *)(param_1 + 0x30);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar8) goto code_r0x000180455bc6;
        lVar7 = *(longlong *)(lVar7 + 0x20 + uVar9 * 8);
        if (lVar7 == 0) break;
        uVar6 = UnityEngine_AudioSource__get_clip(lVar7,0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Inequality(uVar6,0);
        if (cVar4 != '\0') {
          SparkMusica__Solta__180454dc0(param_1,uVar9);
        }
      }
    }
    uVar9 = (ulonglong)(uVar8 + 1);
    if (1 < (int)(uVar8 + 1)) {
      return;
    }
  }
code_r0x000180455bc0:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

