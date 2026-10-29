// SparkSons__Tem__180585fa0 @ 0x180585fa0

ulonglong SparkSons__Tem__180585fa0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  byte extraout_var;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (cRam00000001834b38d7 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.ContainsKey);
    cRam00000001834b38d7 = '\x01';
  }
  lVar2 = SparkSons__Chave__180584d90(param_2,0);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = SparkSons__Indice__180585910(param_1,0);
  if (lVar3 != 0) {
    FUN_18124e470(lVar3,lVar2,
                  *(undefined8 *)
                   (*(longlong *)(*(longlong *)(MR_System.Collections.Generic.Dictionary<string,string>.ContainsKey + 0x20) + 0xc0) + 0x80));
    return (ulonglong)(extraout_var >> 7) ^ 1;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

