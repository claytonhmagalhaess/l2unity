// SparkMacros__Icone__180474ba0 @ 0x180474ba0

void SparkMacros__Icone__180474ba0(int param_1)

{
  undefined8 uVar1;
  int aiStackX_8 [8];
  
  if (cRam00000001834b307c == '\0') {
    FUN_180315380(LIT_"'Macro/Macro_Icon'");
    cRam00000001834b307c = '\x01';
  }
  if (param_1 < 7) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 6;
  }
  aiStackX_8[0] = param_1 + 1;
  uVar1 = System_Int32__ToString(aiStackX_8,0);
  System_String__Concat(LIT_"'Macro/Macro_Icon'",uVar1,0);
  return;
}

