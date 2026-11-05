// SparkHtml__FimDaTag__18073aa10 @ 0x18073aa10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkHtml__FimDaTag__18073aa10(longlong param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  ulonglong uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  
  sVar6 = 0;
  uVar7 = param_2 + 1;
  sVar5 = 0;
  if (param_1 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  do {
    while( true ) {
      if (*(int *)(param_1 + 0x10) <= (int)uVar7) {
        return 0xffffffff;
      }
      sVar3 = System_String__get_Chars(param_1,uVar7,0);
      if (sVar6 != 0) break;
      if (((sVar3 == 0x22) || (sVar3 == 0x27)) && (sVar5 == 0x3d)) {
        uVar7 = uVar7 + 1;
        sVar6 = sVar3;
      }
      else {
        if (sVar3 == 0x3e) {
          return (ulonglong)uVar7;
        }
        if (sVar3 == 0x3c) {
          return 0xffffffff;
        }
        if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = System_Char__IsWhiteSpace(sVar3,0);
        if (cVar2 != '\0') goto code_r0x00018073aaac;
        uVar7 = uVar7 + 1;
        sVar5 = sVar3;
      }
    }
    if ((sVar3 == sVar6) || (sVar3 == 10)) {
      sVar6 = 0;
    }
code_r0x00018073aaac:
    uVar7 = uVar7 + 1;
  } while( true );
}

