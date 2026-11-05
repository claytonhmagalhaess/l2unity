// SparkHtml__LeAtributos__18073ba30 @ 0x18073ba30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml__LeAtributos__18073ba30(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (cRam00000001834b4248 == '\0') {
    FUN_180315380(TI_char__);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_180315380(LIT_"''");
    cRam00000001834b4248 = '\x01';
  }
  if (param_1 == 0) {
code_r0x00018073bd64:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar8 = 0;
code_r0x00018073baa0:
  if (*(int *)(param_1 + 0x10) <= iVar8) {
    return;
  }
  for (; iVar9 = iVar8, iVar8 < *(int *)(param_1 + 0x10); iVar8 = iVar8 + 1) {
    uVar3 = System_String__get_Chars(param_1,iVar8,0);
    if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = System_Char__IsWhiteSpace(uVar3,0);
    if (cVar2 == '\0') break;
  }
  do {
    if ((*(int *)(param_1 + 0x10) <= iVar9) ||
       (sVar4 = System_String__get_Chars(param_1,iVar9,0), sVar4 == 0x3d)) break;
    uVar3 = System_String__get_Chars(param_1,iVar9,0);
    if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = System_Char__IsWhiteSpace(uVar3,0);
    if (cVar2 != '\0') break;
    iVar9 = iVar9 + 1;
  } while( true );
  if (iVar9 <= iVar8) {
    iVar8 = iVar9 + 1;
    goto code_r0x00018073baa0;
  }
  uVar5 = System_String__Substring(param_1,iVar8,iVar9 - iVar8,0);
  for (; iVar9 < *(int *)(param_1 + 0x10); iVar9 = iVar9 + 1) {
    uVar3 = System_String__get_Chars(param_1,iVar9,0);
    if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = System_Char__IsWhiteSpace(uVar3,0);
    if (cVar2 == '\0') break;
  }
  if ((iVar9 < *(int *)(param_1 + 0x10)) &&
     (sVar4 = System_String__get_Chars(param_1,iVar9,0), sVar4 == 0x3d)) {
    do {
      iVar8 = iVar9;
      iVar10 = iVar8 + 1;
      iVar9 = iVar10;
      if (*(int *)(param_1 + 0x10) <= iVar10) goto code_r0x00018073bc72;
      uVar3 = System_String__get_Chars(param_1,iVar10,0);
      if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = System_Char__IsWhiteSpace(uVar3,0);
    } while (cVar2 != '\0');
    if ((*(int *)(param_1 + 0x10) <= iVar10) ||
       ((sVar4 = System_String__get_Chars(param_1,iVar10,0), sVar4 != 0x22 &&
        (sVar4 = System_String__get_Chars(param_1,iVar10,0), sVar4 != 0x27)))) {
code_r0x00018073bc72:
      do {
        if (*(int *)(param_1 + 0x10) <= iVar9) goto code_r0x00018073bcae;
        uVar3 = System_String__get_Chars(param_1,iVar9,0);
        if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = System_Char__IsWhiteSpace(uVar3,0);
        if (cVar2 != '\0') goto code_r0x00018073bcae;
        iVar9 = iVar9 + 1;
      } while( true );
    }
    iVar8 = iVar8 + 2;
    uVar3 = System_String__get_Chars(param_1,iVar10,0);
    iVar9 = System_String__IndexOf(param_1,uVar3,iVar8,0);
    if (iVar9 < 0) {
      iVar9 = *(int *)(param_1 + 0x10);
    }
    System_String__Substring(param_1,iVar8,iVar9 - iVar8,0);
    iVar9 = iVar9 + 1;
  }
code_r0x00018073bd0e:
  if (param_2 == 0) goto code_r0x00018073bd64;
  FUN_18126c020(param_2,uVar5);
  iVar8 = iVar9;
  goto code_r0x00018073baa0;
code_r0x00018073bcae:
  lVar6 = System_String__Substring(param_1,iVar10,iVar9 - iVar10,0);
  lVar7 = func_0x000180314710(TI_char__,2);
  if (lVar7 == 0) goto code_r0x00018073bd64;
  if ((*(int *)(lVar7 + 0x18) == 0) ||
     (*(undefined2 *)(lVar7 + 0x20) = 0x22, *(uint *)(lVar7 + 0x18) < 2)) {
    FUN_1803155c0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined2 *)(lVar7 + 0x22) = 0x27;
  if (lVar6 == 0) goto code_r0x00018073bd64;
  System_String__Trim(lVar6,lVar7,0);
  goto code_r0x00018073bd0e;
}

