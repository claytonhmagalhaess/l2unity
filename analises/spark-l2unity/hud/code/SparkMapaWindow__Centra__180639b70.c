// SparkMapaWindow__Centra__180639b70 @ 0x180639b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__Centra__180639b70(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  if (cRam00000001834b3d27 == '\0') {
    FUN_180315380(MR_System.Nullable<UnityEngine.Vector2>..ctor);
    FUN_180315380(TI_SparkMapaWindow);
    cRam00000001834b3d27 = '\x01';
  }
  uStackX_10 = 0;
  uStackX_8 = (ulonglong)(uint)uStackX_8._4_4_ << 0x20;
  if (DAT_1834b2f44 == '\0') {
    FUN_180315380(TI_UnityEngine.Vector2);
    DAT_1834b2f44 = '\x01';
  }
  uVar1 = **(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8);
  *(undefined4 *)(param_1 + 0x238) = (*(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8))[1];
  *(undefined4 *)(param_1 + 0x234) = uVar1;
  *(undefined4 *)(param_1 + 0x248) = 0;
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uStack_78 = *param_2;
  uStack_70 = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  uVar7 = *param_2;
  uVar6 = *param_2;
  cVar5 = SparkMapaWindow__LocalInterno__18063c550(&uStack_78,&uStackX_10,&uStackX_8,0);
  uVar4 = uStackX_10;
  if (cVar5 == '\0') {
    if (*(char *)(param_1 + 0x1f8) == '\0') {
      SparkMapaWindow__EntraNaRegiao__18063aa50(param_1,uVar6);
    }
    else {
      uVar6 = SparkMapaWindow__TamanhoDaVista__180649960(param_1,0);
      uStackX_8._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
      fVar3 = uStackX_8._4_4_;
      uStackX_8 = uVar6;
      uVar7 = SparkMapaWindow__L2ParaArte__18063b850(param_1,uVar7,0);
      uStackX_8._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
      *(float *)(param_1 + 0x204) = fVar3 * 0.5 - *(float *)(param_1 + 0x1fc) * uStackX_8._4_4_;
      *(float *)(param_1 + 0x200) = (float)uVar6 * 0.5 - *(float *)(param_1 + 0x1fc) * (float)uVar7;
      uStackX_8 = uVar7;
      SparkMapaWindow__Redesenha__180646390(param_1,0);
    }
  }
  else {
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000180cb7f80(&uStack_78,uVar2,MR_System.Nullable<UnityEngine.Vector2>..ctor);
    uStack_68 = uStack_78;
    uStack_60 = uStack_70;
    SparkMapaWindow__AbreInterno__180637670
              (param_1,uVar4,uStackX_8 & 0xffffffff,&uStack_68,param_3,0);
  }
  return;
}

