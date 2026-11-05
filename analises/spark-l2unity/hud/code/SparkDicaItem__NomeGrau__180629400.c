// SparkDicaItem__NomeGrau__180629400 @ 0x180629400

void SparkDicaItem__NomeGrau__180629400(undefined1 param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  if (cRam00000001834b3cee == '\0') {
    FUN_180315380(TI_ItemGrade);
    FUN_180315380(LIT_"'-Grade'");
    cRam00000001834b3cee = '\x01';
  }
  uStack_28 = TI_ItemGrade;
  uStack_20 = 0xffffffffffffffff;
  uStack_18 = param_1;
  lVar2 = System_Enum__ToString(&uStack_28,0);
  if (lVar2 != 0) {
    uVar3 = System_String__ToUpper(lVar2,0);
    System_String__Concat(uVar3,LIT_"'-Grade'",0);
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

