// SparkTeclas__VooEBarra__1804cfa80 @ 0x1804cfa80

ulonglong SparkTeclas__VooEBarra__1804cfa80(longlong param_1,longlong param_2)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  
  if (cRam00000001834b32ff == '\0') {
    FUN_180315380(LIT_"'Shortcut bar'");
    FUN_180315380(LIT_"'Wyvern'");
    cRam00000001834b32ff = '\x01';
  }
  if (param_1 != 0) {
    bVar2 = func_0x0001817058a0(*(undefined8 *)(param_1 + 0x18),LIT_"'Wyvern'",0);
    if (param_2 != 0) {
      bVar3 = func_0x0001817058a0(*(undefined8 *)(param_2 + 0x18),LIT_"'Wyvern'",0);
      if (*(longlong *)(param_1 + 0x18) != 0) {
        bVar4 = System_String__StartsWith(*(longlong *)(param_1 + 0x18),LIT_"'Shortcut bar'",0);
        if (*(longlong *)(param_2 + 0x18) != 0) {
          bVar5 = System_String__StartsWith(*(longlong *)(param_2 + 0x18),LIT_"'Shortcut bar'",0);
          uVar6 = (ulonglong)(bVar4 & bVar3);
          if ((bVar2 & bVar5) != 0) {
            uVar6 = 1;
          }
          return uVar6;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}

