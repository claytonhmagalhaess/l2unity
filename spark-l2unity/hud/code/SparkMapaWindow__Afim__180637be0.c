// SparkMapaWindow__Afim__180637be0 @ 0x180637be0

undefined8 SparkMapaWindow__Afim__180637be0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uStackX_c;
  
  lVar1 = *(longlong *)(param_1 + 0x280);
  uStackX_c = (float)((ulonglong)param_2 >> 0x20);
  fVar4 = (float)param_2 / 100000.0;
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x18) != 0) && (1 < *(uint *)(lVar1 + 0x18))) {
      if (lVar1 == 0) goto code_r0x000180637c95;
      if (2 < *(uint *)(lVar1 + 0x18)) {
        if (lVar1 == 0) goto code_r0x000180637c95;
        if (3 < *(uint *)(lVar1 + 0x18)) {
          if (lVar1 == 0) goto code_r0x000180637c95;
          if (4 < *(uint *)(lVar1 + 0x18)) {
            if (lVar1 == 0) goto code_r0x000180637c95;
            if (5 < *(uint *)(lVar1 + 0x18)) {
              return CONCAT44((uStackX_c / 100000.0) * *(float *)(lVar1 + 0x30) +
                              fVar4 * *(float *)(lVar1 + 0x2c) + *(float *)(lVar1 + 0x34),
                              (uStackX_c / 100000.0) * *(float *)(lVar1 + 0x24) +
                              fVar4 * *(float *)(lVar1 + 0x20) + *(float *)(lVar1 + 0x28));
            }
          }
        }
      }
    }
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
code_r0x000180637c95:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}

