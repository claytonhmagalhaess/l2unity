// SparkApiGrafica__GravaEscolha__1804948e0 @ 0x1804948e0

void SparkApiGrafica__GravaEscolha__1804948e0(uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  if (cRam00000001834b3264 == '\0') {
    FUN_180315380(TI_SparkApiGrafica);
    FUN_180315380(LIT_"'\\r\\n'");
    FUN_180315380(LIT_"'api='");
    cRam00000001834b3264 = '\x01';
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660(TI_SparkApiGrafica);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkApiGrafica + 0xb8) + 8);
  if (lVar1 == 0) {
    FUN_1803155d0();
  }
  else {
    if ((((int)param_1 < 0) || (uVar8 = *(int *)(lVar1 + 0x18) - 1, (int)param_1 <= (int)uVar8)) &&
       (uVar8 = param_1, (int)param_1 < 0)) {
      uVar8 = 0;
    }
    if (uVar8 == 0) {
      if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = SparkApiGrafica__get_Arquivo__180495670(0);
      cVar3 = System_IO_File__Exists(uVar5,0);
      if (cVar3 == '\0') {
        return;
      }
    }
    if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = SparkApiGrafica__LeEscolha__180494b00(0);
    if (uVar8 == uVar4) {
      if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = SparkApiGrafica__get_Arquivo__180495670(0);
      cVar3 = System_IO_File__Exists(uVar5,0);
      if (cVar3 != '\0') {
        return;
      }
    }
    if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar5 = SparkApiGrafica__get_Pasta__1804958b0(0);
    System_IO_Directory__CreateDirectory(uVar5,0);
    uVar5 = SparkApiGrafica__get_Arquivo__180495670(0);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkApiGrafica + 0xb8) + 8);
    if (lVar1 == 0) goto code_r0x000180494af7;
    if (uVar8 < *(uint *)(lVar1 + 0x18)) {
      uVar6 = System_String__Concat
                        (LIT_"'api='",
                         *(undefined8 *)(lVar1 + 0x20 + (longlong)(int)uVar8 * 8),
                         LIT_"'\\r\\n'",0);
      uVar7 = System_Text_Encoding__get_ASCII(0);
      System_IO_File__WriteAllText(uVar5,uVar6,uVar7,0);
      return;
    }
  }
  FUN_1803155c0();
code_r0x000180494af7:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

