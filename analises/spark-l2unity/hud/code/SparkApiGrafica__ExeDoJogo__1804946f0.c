// SparkApiGrafica__ExeDoJogo__1804946f0 @ 0x1804946f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkApiGrafica__ExeDoJogo__1804946f0(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b3266 == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_System.IO.Path);
    FUN_180315380(TI_SparkApiGrafica);
    FUN_180315380(LIT_"'.exe'");
    FUN_180315380(LIT_"'_Data'");
    cRam00000001834b3266 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = UnityEngine_Application__get_dataPath(0);
  if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar4 = System_IO_Path__GetFileName(uVar3,0);
  if (lVar4 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  cVar2 = System_String__EndsWith(lVar4,LIT_"'_Data'",5,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar3 = SparkApiGrafica__get_Pasta__1804958b0(0);
    uVar5 = System_String__Substring(lVar4,0,*(int *)(lVar4 + 0x10) + -5,0);
    uVar5 = System_String__Concat(uVar5,LIT_"'.exe'",0);
    if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar3 = System_IO_Path__Combine(uVar3,uVar5,0);
    cVar2 = System_IO_File__Exists(uVar3,0);
    if (cVar2 != '\0') {
      return uVar3;
    }
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = SparkApiGrafica__get_Pasta__1804958b0(0);
  if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar5 = UnityEngine_Application__get_productName(0);
  uVar5 = System_String__Concat(uVar5,LIT_"'.exe'",0);
  if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar5 = System_IO_Path__Combine(uVar3,uVar5,0);
  cVar2 = System_IO_File__Exists(uVar5,0);
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar3 = uVar5;
  }
  return uVar3;
}

