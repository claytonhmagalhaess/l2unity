// SparkDicaItem__DadosServidor__180625f70 @ 0x180625f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * SparkDicaItem__DadosServidor__180625f70(undefined4 param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 auStackX_8 [8];
  
  auStackX_8[0] = param_1;
  if (cRam00000001834b3cea == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_Newtonsoft.Json.Linq.JObject);
    FUN_180315380(TI_System.IO.Path);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(LIT_"'Data/Meta/Itens_Infinity.json'");
    cRam00000001834b3cea = '\x01';
  }
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(longlong *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x10) == 0) {
    if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar5 = UnityEngine_Application__get_streamingAssetsPath(0);
    if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar5 = System_IO_Path__Combine(uVar5,LIT_"'Data/Meta/Itens_Infinity.json'",0);
    cVar4 = SparkDados__Existe(uVar5,0);
    if (cVar4 == '\0') {
      uVar5 = func_0x000180315580(TI_Newtonsoft.Json.Linq.JObject);
      Newtonsoft_Json_Linq_JObject___ctor(uVar5,0);
    }
    else {
      uVar5 = SparkDados__LerTexto(uVar5,0);
      uVar5 = func_0x00018199e940(uVar5,0);
    }
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660(TI_SparkDicaItem);
    }
    *(undefined8 *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x10) = uVar5;
    func_0x000180314690(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x10,uVar5);
  }
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x10);
  uVar5 = System_Int32__ToString(auStackX_8,0);
  if (lVar1 != 0) {
    plVar6 = (longlong *)Newtonsoft_Json_Linq_JObject__get_Item(lVar1,uVar5,0);
    plVar7 = (longlong *)0x0;
    if (plVar6 != (longlong *)0x0) {
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TI_Newtonsoft.Json.Linq.JObject + 0x130)) ||
         (bVar3 = true,
         *(longlong *)
          (*(longlong *)(*plVar6 + 200) + -8 +
          (ulonglong)*(byte *)(TI_Newtonsoft.Json.Linq.JObject + 0x130) * 8) != TI_Newtonsoft.Json.Linq.JObject)) {
        bVar3 = false;
      }
      if (bVar3) {
        plVar7 = plVar6;
      }
    }
    return plVar7;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  plVar7 = (longlong *)(*pcVar2)();
  return plVar7;
}

