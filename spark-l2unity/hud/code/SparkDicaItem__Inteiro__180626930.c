// SparkDicaItem__Inteiro__180626930 @ 0x180626930

ulonglong SparkDicaItem__Inteiro__180626930(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  float fVar5;
  double dVar6;
  double dStackX_8;
  
  if (cRam00000001834b3cf1 == '\0') {
    FUN_180315380(TI_Newtonsoft.Json.Linq.JToken);
    cRam00000001834b3cf1 = '\x01';
  }
  if (param_1 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  lVar2 = Newtonsoft_Json_Linq_JObject__get_Item(param_1,param_2,0);
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = Newtonsoft_Json_Linq_JObject__get_Item(param_1,param_2,0);
  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
    func_0x000180315660();
  }
  fVar5 = (float)Newtonsoft_Json_Linq_JToken__op_Explicit(uVar3,0);
  if (fVar5 < 0.0) {
    dVar6 = (double)func_0x0001803a7930((double)fVar5,&dStackX_8);
    if (dVar6 == -0.5) {
      fVar5 = (float)dStackX_8;
      if (((longlong)dStackX_8 & 1U) != 0) {
        fVar5 = fVar5 - 1.0;
      }
    }
    else {
      fVar5 = (float)func_0x0001803aaa10(fVar5 - 0.5);
    }
  }
  else {
    dVar6 = (double)func_0x0001803a7930((double)fVar5,&dStackX_8);
    if (dVar6 == 0.5) {
      fVar5 = (float)dStackX_8;
      if (((longlong)dStackX_8 & 1U) != 0) {
        fVar5 = fVar5 + 1.0;
      }
    }
    else {
      fVar5 = (float)func_0x0001803a9df0(fVar5 + 0.5);
    }
  }
  return (ulonglong)(uint)(int)fVar5;
}

