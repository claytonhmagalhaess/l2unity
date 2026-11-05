// SparkHtml__MinimoDaTabela__18073da40 @ 0x18073da40

ulonglong SparkHtml__MinimoDaTabela__18073da40(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uStackX_8;
  uint uStackX_c;
  
  if (cRam00000001834b4250 == '\0') {
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(LIT_"'cellpadding'");
    cRam00000001834b4250 = '\x01';
  }
  if (param_1 != 0) {
    uVar2 = SparkHtml_No__Attr__180735120(param_1,LIT_"'cellpadding'",0);
    if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStackX_8 = SparkHtml__Numero__18073daf0(uVar2,0);
    uStackX_c = 0;
    SparkHtml___MinimoDaTabela_g__Linhas_19_0(param_1,&uStackX_8,0);
    return (ulonglong)uStackX_c;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

