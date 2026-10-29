// SparkMapaWindow__NaVista__180640ab0 @ 0x180640ab0

undefined8
SparkMapaWindow__NaVista__180640ab0
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uStackX_c;
  
  if (*(longlong *)(param_1 + 0x188) == 0) {
    if (*(char *)(param_1 + 0x1f8) == '\0') {
      fVar6 = *(float *)(param_1 + 0x208);
      fVar4 = *(float *)(param_1 + 0x20c);
      fVar5 = *(float *)(param_1 + 0x210);
      uVar3 = SparkMapaWindow__TamanhoDaVista__180649960(param_1,0,param_3,param_4,param_2);
      uStackX_c = (float)((ulonglong)uVar3 >> 0x20);
      fVar5 = uStackX_c * 0.5 + ((float)((ulonglong)param_2 >> 0x20) - fVar5) * fVar6;
      fVar6 = (float)uVar3 * 0.5 + ((float)param_2 - fVar4) * fVar6;
      goto code_r0x000180640be4;
    }
    fVar6 = *(float *)(param_1 + 0x200);
    fVar5 = *(float *)(param_1 + 0x204);
    uVar3 = SparkMapaWindow__L2ParaArte__18063b850(param_1,param_2,0);
    fVar4 = *(float *)(param_1 + 0x1fc);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x20);
    if (lVar1 == 0) {
code_r0x000180640c08:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
    if (*(uint *)(lVar1 + 0x18) <= *(uint *)(param_1 + 400)) {
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
    lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)*(uint *)(param_1 + 400) * 8);
    if (lVar1 == 0) goto code_r0x000180640c08;
    fVar6 = *(float *)(param_1 + 0x198);
    fVar5 = *(float *)(param_1 + 0x19c);
    uVar3 = SparkMapaWindow_Andar__NaPlanta__180654830(lVar1,param_2,0);
    fVar4 = *(float *)(param_1 + 0x194);
  }
  uStackX_c = (float)((ulonglong)uVar3 >> 0x20);
  fVar5 = fVar4 * uStackX_c + fVar5;
  fVar6 = fVar4 * (float)uVar3 + fVar6;
code_r0x000180640be4:
  return CONCAT44(fVar5,fVar6);
}

