// SparkMapaWindow__NomeDoLugar__180640e40 @ 0x180640e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMapaWindow__NomeDoLugar__180640e40(float param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (cRam00000001834b3d46 == '\0') {
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(LIT_"''");
    cRam00000001834b3d46 = '\x01';
  }
  uVar6 = LIT_"''";
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMapaWindow);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 8);
  if (lVar1 != 0) {
    fVar12 = 3.4028235e+38;
    for (uVar7 = 0; (int)uVar7 < *(int *)(lVar1 + 0x18); uVar7 = uVar7 + 1) {
      if (*(uint *)(lVar1 + 0x18) <= uVar7) goto code_r0x000180641116;
      lVar4 = (longlong)(int)uVar7;
      uVar5 = *(undefined8 *)(lVar1 + 0x20 + lVar4 * 0x18);
      fVar11 = *(float *)(lVar1 + 0x30 + lVar4 * 0x18);
      fVar10 = *(float *)(lVar1 + 0x34 + lVar4 * 0x18);
      if (cRam00000001834b3809 == '\0') {
        FUN_180315380(TI_System.Math);
        cRam00000001834b3809 = '\x01';
      }
      fVar11 = param_1 - fVar11;
      fVar10 = param_2 - fVar10;
      if (*(int *)(TI_System.Math + 0xe4) == 0) {
        func_0x000180315660();
      }
      dVar8 = (double)(fVar10 * fVar10 + fVar11 * fVar11);
      if (dVar8 < 0.0) {
        dVar8 = (double)FUN_1803a9930();
      }
      else {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = dVar8;
        auVar9 = sqrtpd(ZEXT816(0),auVar9);
        dVar8 = auVar9._0_8_;
      }
      fVar11 = (float)dVar8;
      if (fVar12 <= (float)dVar8) {
        uVar5 = uVar6;
        fVar11 = fVar12;
      }
      fVar12 = fVar11;
      uVar6 = uVar5;
    }
    if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
      func_0x000180315660(TI_SparkMapaWindow);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x10);
    if (lVar1 != 0) {
      uVar7 = 0;
      while( true ) {
        if (*(int *)(lVar1 + 0x18) <= (int)uVar7) {
          uVar5 = LIT_"''";
          if (fVar12 < 40000.0) {
            uVar5 = uVar6;
          }
          return uVar5;
        }
        if (*(uint *)(lVar1 + 0x18) <= uVar7) break;
        lVar4 = (longlong)(int)uVar7 + 2;
        uVar5 = *(undefined8 *)(lVar1 + lVar4 * 0x10);
        fVar11 = *(float *)(lVar1 + 8 + lVar4 * 0x10);
        fVar10 = *(float *)(lVar1 + 0xc + lVar4 * 0x10);
        if (cRam00000001834b3809 == '\0') {
          FUN_180315380(TI_System.Math);
          cRam00000001834b3809 = '\x01';
        }
        fVar11 = param_1 - fVar11;
        fVar10 = param_2 - fVar10;
        if (*(int *)(TI_System.Math + 0xe4) == 0) {
          func_0x000180315660();
        }
        dVar8 = (double)(fVar10 * fVar10 + fVar11 * fVar11);
        if (dVar8 < 0.0) {
          dVar8 = (double)FUN_1803a9930();
        }
        else {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = dVar8;
          auVar9 = sqrtpd(ZEXT816(0),auVar3);
          dVar8 = auVar9._0_8_;
        }
        fVar11 = (float)dVar8;
        if (fVar12 <= (float)dVar8) {
          uVar5 = uVar6;
          fVar11 = fVar12;
        }
        fVar12 = fVar11;
        uVar6 = uVar5;
        uVar7 = uVar7 + 1;
      }
code_r0x000180641116:
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return uVar6;
}

