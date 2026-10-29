// SparkMapaWindow__ArteParaL2__180638d90 @ 0x180638d90

undefined8 SparkMapaWindow__ArteParaL2__180638d90(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uStackX_c;
  undefined4 uStack_b4;
  
  if (*(longlong *)(param_1 + 0x280) == 0) {
    SparkMapaWindow__CalculaDeformacao__180639550(param_1,0);
  }
  lVar1 = *(longlong *)(param_1 + 0x280);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x18) != 0) && (1 < *(uint *)(lVar1 + 0x18))) {
      if (lVar1 == 0) goto DAT_180639141;
      if (3 < *(uint *)(lVar1 + 0x18)) {
        if (lVar1 == 0) goto DAT_180639141;
        if (4 < *(uint *)(lVar1 + 0x18)) {
          if (lVar1 == 0) goto DAT_180639141;
          if (5 < *(uint *)(lVar1 + 0x18)) {
            fVar9 = *(float *)(lVar1 + 0x30) * *(float *)(lVar1 + 0x20) -
                    *(float *)(lVar1 + 0x2c) * *(float *)(lVar1 + 0x24);
            fVar6 = (float)param_2 - *(float *)(lVar1 + 0x28);
            uStack_b4 = (float)((ulonglong)param_2 >> 0x20);
            iVar5 = 0;
            fVar7 = uStack_b4 - *(float *)(lVar1 + 0x34);
            fVar12 = ((fVar6 * *(float *)(lVar1 + 0x30) - fVar7 * *(float *)(lVar1 + 0x24)) / fVar9)
                     * 100000.0;
            fVar6 = ((-*(float *)(lVar1 + 0x2c) * fVar6 + fVar7 * *(float *)(lVar1 + 0x20)) / fVar9)
                    * 100000.0;
            do {
              uVar3 = SparkMapaWindow__L2ParaArte__18063b850(param_1,CONCAT44(fVar6,fVar12),0);
              fVar7 = (float)uVar3 - (float)param_2;
              uStackX_c = (float)((ulonglong)uVar3 >> 0x20);
              fVar9 = uStackX_c - uStack_b4;
              if (fVar9 * fVar9 + fVar7 * fVar7 < 0.0025) break;
              uVar3 = SparkMapaWindow__L2ParaArte__18063b850
                                (param_1,CONCAT44(fVar6 + 0.0,fVar12 + 200.0),0);
              uStackX_c = (float)((ulonglong)uVar3 >> 0x20);
              fVar8 = uStackX_c;
              uVar4 = SparkMapaWindow__L2ParaArte__18063b850(param_1,CONCAT44(fVar6,fVar12));
              uStackX_c = (float)((ulonglong)uVar4 >> 0x20);
              fVar13 = ((float)uVar3 - (float)uVar4) / 200.0;
              fVar10 = (fVar8 - uStackX_c) / 200.0;
              uVar3 = SparkMapaWindow__L2ParaArte__18063b850
                                (param_1,CONCAT44(fVar6 + 200.0,fVar12 + 0.0));
              uStackX_c = (float)((ulonglong)uVar3 >> 0x20);
              fVar8 = uStackX_c;
              uVar4 = SparkMapaWindow__L2ParaArte__18063b850(param_1,CONCAT44(fVar6,fVar12));
              uStackX_c = (float)((ulonglong)uVar4 >> 0x20);
              fVar14 = ((float)uVar3 - (float)uVar4) / 200.0;
              fVar11 = (fVar8 - uStackX_c) / 200.0;
              fVar8 = fVar11 * fVar13 - fVar14 * fVar10;
              if (ABS(fVar8) < 1e-12) break;
              iVar5 = iVar5 + 1;
              fVar12 = fVar12 - (fVar11 * fVar7 - fVar14 * fVar9) / fVar8;
              fVar6 = fVar6 - (-fVar10 * fVar7 + fVar13 * fVar9) / fVar8;
            } while (iVar5 < 0xc);
            return CONCAT44(fVar6,fVar12);
          }
        }
      }
    }
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
DAT_180639141:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}

