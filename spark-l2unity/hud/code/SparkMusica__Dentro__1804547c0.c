// SparkMusica__Dentro__1804547c0 @ 0x1804547c0

ulonglong SparkMusica__Dentro__1804547c0(longlong param_1,float param_2,float param_3,float param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  if (param_1 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  iVar3 = 0;
  iVar5 = 0;
  while( true ) {
    uVar2 = iVar3 * 6;
    if ((((*(uint *)(param_1 + 0x18) <= uVar2) || (*(uint *)(param_1 + 0x18) <= uVar2 + 1)) ||
        (*(uint *)(param_1 + 0x18) <= uVar2 + 2)) || (*(uint *)(param_1 + 0x18) <= uVar2 + 3))
    break;
    fVar7 = (param_2 * *(float *)(param_1 + 0x20 + (longlong)(int)uVar2 * 4) +
             param_3 * *(float *)(param_1 + 0x24 + (longlong)(int)uVar2 * 4) +
            param_4 * *(float *)(param_1 + 0x28 + (longlong)(int)uVar2 * 4)) -
            *(float *)(param_1 + 0x2c + (longlong)(int)uVar2 * 4);
    if (fVar7 < 0.0) {
      if (*(uint *)(param_1 + 0x18) <= uVar2 + 4) break;
      fVar6 = *(float *)(param_1 + 0x30 + (longlong)(int)uVar2 * 4);
    }
    else {
      if (*(uint *)(param_1 + 0x18) <= uVar2 + 5) break;
      fVar6 = *(float *)(param_1 + 0x34 + (longlong)(int)uVar2 * 4);
    }
    if ((int)fVar6 < 0) {
      return (ulonglong)CONCAT31((int3)((uint)(int)fVar6 >> 8),fVar7 < 0.0);
    }
    iVar5 = iVar5 + 1;
    iVar3 = (int)fVar6;
    if (0xff < iVar5) {
      return (ulonglong)(uint3)((uint)iVar3 >> 8) << 8;
    }
  }
  FUN_1803155c0();
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

