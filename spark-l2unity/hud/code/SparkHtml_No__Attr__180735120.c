// SparkHtml_No__Attr__180735120 @ 0x180735120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkHtml_No__Attr__180735120(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uStackX_8;
  
  if (cRam00000001834b4268 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
    cRam00000001834b4268 = '\x01';
  }
  uStackX_8 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar2 = FUN_1812698d0(*(longlong *)(param_1 + 0x20),param_2,&uStackX_8,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
    uVar3 = 0;
    if (cVar2 != '\0') {
      uVar3 = uStackX_8;
    }
    return uVar3;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

