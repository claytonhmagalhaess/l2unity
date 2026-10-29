// SparkDicaItem__Augments__180625b00 @ 0x180625b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkDicaItem__Augments__180625b00(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b3d06 == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_System.IO.Path);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(LIT_"'Data/Meta/Augments_Infinity.json'");
    cRam00000001834b3d06 = '\x01';
  }
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_SparkDicaItem + 0xb8) == 0) {
    if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar2 = UnityEngine_Application__get_streamingAssetsPath(0);
    if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar2 = System_IO_Path__Combine(uVar2,LIT_"'Data/Meta/Augments_Infinity.json'",0);
    cVar1 = SparkDados__Existe(uVar2,0);
    if (cVar1 != '\0') {
      uVar2 = SparkDados__LerTexto(uVar2,0);
      uVar2 = func_0x00018199e940(uVar2,0);
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      **(undefined8 **)(TI_SparkDicaItem + 0xb8) = uVar2;
      func_0x000180314690(*(undefined8 *)(TI_SparkDicaItem + 0xb8),uVar2);
      return **(undefined8 **)(TI_SparkDicaItem + 0xb8);
    }
    return 0;
  }
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  return **(undefined8 **)(TI_SparkDicaItem + 0xb8);
}

