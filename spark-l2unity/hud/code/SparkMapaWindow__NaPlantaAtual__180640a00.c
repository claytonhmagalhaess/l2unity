// SparkMapaWindow__NaPlantaAtual__180640a00 @ 0x180640a00

bool SparkMapaWindow__NaPlantaAtual__180640a00(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  float fStackX_c;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  if (*(longlong *)(param_1 + 0x188) == 0) {
    return true;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x20);
  if (*(char *)(*(longlong *)(param_1 + 0x188) + 0x28) == '\0') {
    if (lVar1 != 0) {
      if (*(uint *)(lVar1 + 0x18) <= *(uint *)(param_1 + 400)) goto code_r0x000180640a9d;
      lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)*(uint *)(param_1 + 400) * 8);
      if (lVar1 != 0) {
        uStack_18 = *param_2;
        uStack_10 = *(undefined4 *)(param_2 + 1);
        uVar3 = SparkMapaWindow_Andar__Contem__1806542f0(lVar1,&uStack_18,0);
        return (bool)uVar3;
      }
    }
  }
  else if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= *(uint *)(param_1 + 400)) {
code_r0x000180640a9d:
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
    lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)*(uint *)(param_1 + 400) * 8);
    if (lVar1 != 0) {
      fVar5 = ((float)*param_2 - *(float *)(lVar1 + 0x20)) * *(float *)(lVar1 + 0x28);
      if (((0.0 <= fVar5) &&
          (fStackX_c = (float)((ulonglong)*param_2 >> 0x20),
          fVar4 = (fStackX_c - *(float *)(lVar1 + 0x24)) * *(float *)(lVar1 + 0x28), 0.0 <= fVar4))
         && (fVar5 <= 1024.0)) {
        return fVar4 <= 1024.0;
      }
      return false;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return (bool)uVar3;
}

