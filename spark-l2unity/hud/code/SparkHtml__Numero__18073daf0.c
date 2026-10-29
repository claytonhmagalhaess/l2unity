// SparkHtml__Numero__18073daf0 @ 0x18073daf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkHtml__Numero__18073daf0(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint auStackX_8 [8];
  
  if (cRam00000001834b425d == '\0') {
    FUN_180315380(TI_System.Globalization.CultureInfo);
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    FUN_180315380(LIT_"'-?\\\\d+'");
    cRam00000001834b425d = '\x01';
  }
  auStackX_8[0] = 0;
  cVar2 = func_0x000181707e50(param_1,0);
  if (cVar2 == '\0') {
    if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar3 = System_Text_RegularExpressions_Regex__Match(param_1,LIT_"'-?\\\\d+'",0);
    if (lVar3 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    cVar2 = func_0x000181db51d0(lVar3,0);
    if (cVar2 != '\0') {
      uVar4 = System_Text_RegularExpressions_Capture__ToString(lVar3,0);
      if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      cVar2 = System_Int32__TryParse(uVar4,7,uVar5,auStackX_8,0);
      if (cVar2 != '\0') {
        return (ulonglong)auStackX_8[0];
      }
    }
  }
  return 0;
}

