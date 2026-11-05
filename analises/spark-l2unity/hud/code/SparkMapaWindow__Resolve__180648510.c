// SparkMapaWindow__Resolve__180648510 @ 0x180648510

longlong SparkMapaWindow__Resolve__180648510(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  
  if (cRam00000001834b3d50 == '\0') {
    FUN_180315380(TI_ty14);
    FUN_180315380(TI_double__);
    FUN_180315380(TI_SparkMapaWindow);
    cRam00000001834b3d50 = '\x01';
  }
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  dVar10 = (double)SparkMapaWindow___Resolve_g__Det_213_0(param_1,0);
  lVar3 = func_0x000180314710(TI_double__,3);
  uVar8 = 0;
  if (param_1 != 0) {
    while( true ) {
      lVar4 = func_0x00018180f450(param_1,0);
      uVar2 = TI_ty14;
      if (lVar4 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = func_0x0001803146b0(lVar4,TI_ty14);
        if (lVar5 == 0) {
          FUN_1803146d0(lVar4,uVar2);
          pcVar1 = (code *)swi(3);
          lVar3 = (*pcVar1)();
          return lVar3;
        }
      }
      uVar9 = 0;
      if (param_2 == 0) break;
      do {
        if (*(uint *)(param_2 + 0x18) <= uVar9) goto code_r0x0001806486af;
        if (lVar5 == 0) goto code_r0x0001806486a9;
        if ((**(uint **)(lVar5 + 0x10) <= uVar9) ||
           (lVar4 = *(longlong *)(*(uint **)(lVar5 + 0x10) + 4), (uint)lVar4 <= uVar8))
        goto code_r0x0001806486af;
        lVar7 = (longlong)(int)uVar9;
        lVar6 = (longlong)(int)uVar9;
        uVar9 = uVar9 + 1;
        *(undefined8 *)(lVar5 + 0x20 + (lVar7 * lVar4 + (longlong)(int)uVar8) * 8) =
             *(undefined8 *)(param_2 + 0x20 + lVar6 * 8);
      } while ((int)uVar9 < 3);
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      dVar11 = (double)SparkMapaWindow___Resolve_g__Det_213_0(lVar5);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar8) {
code_r0x0001806486af:
        FUN_1803155c0();
        pcVar1 = (code *)swi(3);
        lVar3 = (*pcVar1)();
        return lVar3;
      }
      lVar4 = (longlong)(int)uVar8;
      uVar8 = uVar8 + 1;
      *(double *)(lVar3 + 0x20 + lVar4 * 8) = dVar11 / dVar10;
      if (2 < (int)uVar8) {
        return lVar3;
      }
    }
  }
code_r0x0001806486a9:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}

