// SparkDicaItem__Sets__180629530 @ 0x180629530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkDicaItem__Sets__180629530(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b3cfc == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_Newtonsoft.Json.Linq.JArray);
    FUN_180315380(TI_System.IO.Path);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(LIT_"'Data/Meta/Sets_Infinity.json'");
    cRam00000001834b3cfc = '\x01';
  }
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(longlong *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x28) == 0) {
    if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar2 = UnityEngine_Application__get_streamingAssetsPath(0);
    if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar2 = System_IO_Path__Combine(uVar2,LIT_"'Data/Meta/Sets_Infinity.json'",0);
    cVar1 = SparkDados__Existe(uVar2,0);
    if (cVar1 == '\0') {
      uVar2 = func_0x000180315580(TI_Newtonsoft.Json.Linq.JArray);
      Newtonsoft_Json_Linq_JArray___ctor(uVar2,0);
    }
    else {
      uVar2 = SparkDados__LerTexto(uVar2,0);
      uVar2 = func_0x00018199a350(uVar2,0);
    }
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660(TI_SparkDicaItem);
    }
    *(undefined8 *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x28) = uVar2;
    func_0x000180314690(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x28,uVar2);
    return *(undefined8 *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x28);
  }
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  return *(undefined8 *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x28);
}

