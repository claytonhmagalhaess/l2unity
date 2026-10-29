// SparkMapaWindow__Roda__1806486d0 @ 0x1806486d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__Roda__1806486d0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStackX_14;
  
  if (cRam00000001834b3d3d == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.MouseEventBase<UnityEngine.UIElements.WheelEvent>.get_localMousePosition);
    FUN_180315380(TI_SparkMapaWindow);
    cRam00000001834b3d3d = '\x01';
  }
  if (param_2 == 0) {
    FUN_1803155d0();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  func_0x00018274f9b0(param_2,0);
  fVar2 = *(float *)(param_2 + 0x74);
  pfVar1 = (float *)(param_2 + 0xbc);
  fVar12 = *pfVar1;
  bVar5 = *pfVar1 != 0.0;
  bVar6 = *pfVar1 <= 0.0;
  fVar3 = *(float *)(param_2 + 0x78);
  if (*(longlong *)(param_1 + 0x188) == 0) {
    if (*(char *)(param_1 + 0x1f8) == '\0') {
      if ((bVar6 && bVar5) || (0.0121 < *(float *)(param_1 + 0x208))) goto code_r0x0001806489b3;
      uVar8 = SparkMapaWindow__TamanhoDaVista__180649960(param_1,0);
      *(undefined1 *)(param_1 + 0x1f8) = 1;
      *(undefined4 *)(param_1 + 0x1fc) = 0x40000000;
      fStackX_14 = (float)((ulonglong)uVar8 >> 0x20);
      uVar8 = SparkMapaWindow__L2ParaArte__18063b850
                        (param_1,CONCAT44((fVar3 - fStackX_14 * 0.5) / *(float *)(param_1 + 0x208) +
                                          *(float *)(param_1 + 0x210),
                                          (fVar2 - (float)uVar8 * 0.5) / *(float *)(param_1 + 0x208)
                                          + *(float *)(param_1 + 0x20c)),0);
      fStackX_14 = (float)((ulonglong)uVar8 >> 0x20);
      *(float *)(param_1 + 0x204) = fVar3 - fStackX_14 * *(float *)(param_1 + 0x1fc);
      *(float *)(param_1 + 0x200) = fVar2 - (float)uVar8 * *(float *)(param_1 + 0x1fc);
    }
    else {
      if ((NAN(fVar12) || (!bVar6 || !bVar5)) ||
         (fVar13 = *(float *)(param_1 + 0x1fc), fVar13 < 1.999)) goto code_r0x0001806489b3;
      uVar8 = SparkMapaWindow__ArteParaL2__180638d90
                        (param_1,CONCAT44((fVar3 - *(float *)(param_1 + 0x204)) / fVar13,
                                          (fVar2 - *(float *)(param_1 + 0x200)) / fVar13),0);
      *(undefined1 *)(param_1 + 0x1f8) = 0;
      *(undefined8 *)(param_1 + 0x290) = 0;
      fStackX_14 = (float)((ulonglong)uVar8 >> 0x20);
      fVar12 = fStackX_14;
      func_0x000180314690(param_1 + 0x290,0);
      *(undefined4 *)(param_1 + 0x208) = 0x3c449ba6;
      uVar9 = SparkMapaWindow__TamanhoDaVista__180649960(param_1,0);
      fStackX_14 = (float)((ulonglong)uVar9 >> 0x20);
      *(float *)(param_1 + 0x210) =
           fVar12 - (fVar3 - fStackX_14 * 0.5) / *(float *)(param_1 + 0x208);
      *(float *)(param_1 + 0x20c) =
           (float)uVar8 - (fVar2 - (float)uVar9 * 0.5) / *(float *)(param_1 + 0x208);
    }
    SparkMapaWindow__ParaMovimento__180641320(param_1,0);
    SparkMapaWindow__Redesenha__180646390(param_1,0);
  }
  else {
    if (!bVar6 || !bVar5) {
      fVar13 = *(float *)(param_1 + 0x194);
      uVar10 = SparkMapaWindow__TamanhoDaVista__180649960(param_1,0);
      fStackX_14 = (float)(uVar10 >> 0x20);
      if (fStackX_14 <= (float)uVar10) {
        uVar10 = (ulonglong)(uint)fStackX_14;
      }
      if (fVar13 <= (float)uVar10 * 0.0009765625 + 0.001) {
        SparkMapaWindow__MostraMundo__1806407d0(param_1,0);
        return;
      }
    }
code_r0x0001806489b3:
    if (DAT_1834b2f44 == '\0') {
      FUN_180315380(TI_UnityEngine.Vector2);
      DAT_1834b2f44 = '\x01';
    }
    uVar4 = **(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8);
    *(undefined4 *)(param_1 + 0x238) = (*(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8))[1];
    *(undefined4 *)(param_1 + 0x234) = uVar4;
    if ((*(float *)(param_1 + 0x248) != 0.0) &&
       (0.0 < *(float *)(param_1 + 0x248) != (bVar6 && bVar5))) {
      *(undefined4 *)(param_1 + 0x248) = 0;
    }
    fVar13 = *(float *)(param_1 + 0x248);
    if (NAN(fVar12) || (!bVar6 || !bVar5)) {
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      fVar12 = -*(float *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x90);
    }
    else {
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      fVar12 = *(float *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x90);
    }
    if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    fVar13 = fVar13 + fVar12;
    fVar12 = *(float *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x90) * -4.0;
    fVar11 = *(float *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x90) * 4.0;
    if ((fVar12 <= fVar13) && (fVar12 = fVar13, fVar11 < fVar13)) {
      fVar12 = fVar11;
    }
    *(float *)(param_1 + 0x248) = fVar12;
    *(float *)(param_1 + 0x24c) = fVar2;
    *(float *)(param_1 + 0x250) = fVar3;
  }
  return;
}

