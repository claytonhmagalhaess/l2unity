// SparkMapaWindow__NomeDaRegiao__180640c10 @ 0x180640c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMapaWindow__NomeDaRegiao__180640c10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_88;
  float fStack_84;
  
  if (cRam00000001834b3d45 == '\0') {
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(LIT_"'Near '");
    FUN_180315380(LIT_"''");
    cRam00000001834b3d45 = '\x01';
  }
  uVar5 = LIT_"''";
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMapaWindow);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 8);
  if (lVar1 != 0) {
    uVar6 = 0;
    fVar11 = 3.4028235e+38;
    fStack_88 = (float)param_2;
    fStack_84 = (float)((ulonglong)param_2 >> 0x20);
    while( true ) {
      if (*(int *)(lVar1 + 0x18) <= (int)uVar6) {
        uVar4 = LIT_"''";
        if (fVar11 < 40000.0) {
          uVar4 = System_String__Concat(LIT_"'Near '",uVar5,0);
        }
        return uVar4;
      }
      if (*(uint *)(lVar1 + 0x18) <= uVar6) break;
      lVar3 = (longlong)(int)uVar6;
      uVar4 = *(undefined8 *)(lVar1 + 0x20 + lVar3 * 0x18);
      fVar10 = *(float *)(lVar1 + 0x30 + lVar3 * 0x18);
      fVar9 = *(float *)(lVar1 + 0x34 + lVar3 * 0x18);
      if (cRam00000001834b3809 == '\0') {
        FUN_180315380(TI_System.Math);
        cRam00000001834b3809 = '\x01';
      }
      fVar10 = fStack_88 - fVar10;
      fVar9 = fStack_84 - fVar9;
      if (*(int *)(TI_System.Math + 0xe4) == 0) {
        func_0x000180315660();
      }
      dVar7 = (double)(fVar9 * fVar9 + fVar10 * fVar10);
      if (dVar7 < 0.0) {
        dVar7 = (double)FUN_1803a9930();
      }
      else {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = dVar7;
        auVar8 = sqrtpd(ZEXT816(0),auVar8);
        dVar7 = auVar8._0_8_;
      }
      fVar10 = (float)dVar7;
      if (fVar11 <= (float)dVar7) {
        uVar4 = uVar5;
        fVar10 = fVar11;
      }
      fVar11 = fVar10;
      uVar5 = uVar4;
      uVar6 = uVar6 + 1;
    }
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}

