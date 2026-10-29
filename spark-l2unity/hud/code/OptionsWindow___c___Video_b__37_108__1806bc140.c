// OptionsWindow___c___Video_b__37_108__1806bc140 @ 0x1806bc140

undefined8 OptionsWindow___c___Video_b__37_108__1806bc140(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int aiStackX_10 [6];
  
  aiStackX_10[0] = param_2;
  if (cRam00000001834b3ef0 == '\0') {
    FUN_180315380(LIT_"'Unlimited'");
    cRam00000001834b3ef0 = '\x01';
  }
  if (aiStackX_10[0] == 0) {
    return LIT_"'Unlimited'";
  }
  uVar1 = System_Int32__ToString(aiStackX_10,0);
  return uVar1;
}

