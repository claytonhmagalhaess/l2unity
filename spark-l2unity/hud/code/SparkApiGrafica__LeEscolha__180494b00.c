// SparkApiGrafica__LeEscolha__180494b00 @ 0x180494b00

ulonglong SparkApiGrafica__LeEscolha__180494b00(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if (cRam00000001834b3263 == '\0') {
    FUN_180315380(MR_System.Array.IndexOf<string>);
    FUN_180315380(TI_SparkApiGrafica);
    FUN_180315380(LIT_"'api='");
    cRam00000001834b3263 = '\x01';
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = SparkApiGrafica__get_Arquivo__180495670(0);
  cVar2 = System_IO_File__Exists(uVar4,0);
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = SparkApiGrafica__get_Arquivo__180495670(0);
  lVar5 = System_IO_File__ReadAllLines(uVar4,0);
  uVar9 = 0;
  if (lVar5 != 0) {
    while( true ) {
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar9) {
        return 0;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar9) break;
      lVar6 = *(longlong *)(lVar5 + 0x20 + (longlong)(int)uVar9 * 8);
      if (lVar6 == 0) goto code_r0x000180494ca7;
      lVar6 = func_0x00018170d270(lVar6,0);
      if (lVar6 == 0) goto code_r0x000180494ca2;
      cVar2 = System_String__StartsWith(lVar6,LIT_"'api='",5,0);
      if (cVar2 != '\0') {
        if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
          func_0x000180315660(TI_SparkApiGrafica);
        }
        uVar4 = *(undefined8 *)(*(longlong *)(TI_SparkApiGrafica + 0xb8) + 8);
        lVar5 = func_0x00018170c060(lVar6,4,0);
        if (lVar5 != 0) {
          lVar5 = func_0x00018170d270(lVar5,0);
          if (lVar5 != 0) {
            uVar7 = System_String__ToLowerInvariant(lVar5,0);
            uVar3 = FUN_1809e1cf0(uVar4,uVar7,MR_System.Array.IndexOf<string>);
            uVar9 = 0;
            if (-1 < (int)uVar3) {
              uVar9 = uVar3;
            }
            return (ulonglong)uVar9;
          }
          goto code_r0x000180494c98;
        }
        goto code_r0x000180494c9d;
      }
      uVar9 = uVar9 + 1;
    }
    FUN_1803155c0();
code_r0x000180494c98:
    FUN_1803155d0();
code_r0x000180494c9d:
    FUN_1803155d0();
code_r0x000180494ca2:
    FUN_1803155d0();
code_r0x000180494ca7:
    FUN_1803155d0();
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar8 = (*pcVar1)();
  return uVar8;
}

