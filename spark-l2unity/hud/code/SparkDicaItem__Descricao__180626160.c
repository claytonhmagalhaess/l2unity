// SparkDicaItem__Descricao__180626160 @ 0x180626160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDicaItem__Descricao__180626160(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  if (cRam00000001834b3cff == '\0') {
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"'\\n\\n<color=#C9C4B0>'");
    cRam00000001834b3cff = '\x01';
  }
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x20) == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x20);
  }
  cVar3 = System_String__IsNullOrWhiteSpace(lVar4,0);
  if (cVar3 != '\0') {
    return;
  }
  if (lVar4 != 0) {
    uVar2 = func_0x00018170d270(lVar4,0);
    uVar2 = System_String__Concat(LIT_"'\\n\\n<color=#C9C4B0>'",uVar2,LIT_"'</color>'",0);
    if (param_1 != 0) {
      System_Text_StringBuilder__Append(param_1,uVar2,0);
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

