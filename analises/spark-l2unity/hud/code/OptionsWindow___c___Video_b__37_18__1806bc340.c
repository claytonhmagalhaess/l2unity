// OptionsWindow___c___Video_b__37_18__1806bc340 @ 0x1806bc340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow___c___Video_b__37_18__1806bc340(void)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 auStackX_18 [4];
  
  if (cRam00000001834b3eb8 == '\0') {
    FUN_180315380(MR_System.Array.ConvertAll<int,string>);
    FUN_180315380(TI_System.Converter<int,string>);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkResolucao);
    FUN_180315380(TI_string__);
    FUN_180315380(MD_OptionsWindow.__c._Video_b__37_107);
    FUN_180315380(TI_OptionsWindow.<>c);
    FUN_180315380(LIT_"'% (auto)'");
    cRam00000001834b3eb8 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x54) < 1) {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x158);
    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar3 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x60);
    if (lVar3 == 0) {
      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar1 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
      lVar3 = func_0x000180315580(TI_System.Converter<int,string>);
      FUN_18116ac60(lVar3,uVar1,MD_OptionsWindow.__c._Video_b__37_107,0);
      *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x60) = lVar3;
      func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x60,lVar3);
    }
    lVar3 = FUN_1809dd2b0(uVar4,lVar3,MR_System.Array.ConvertAll<int,string>);
    return lVar3;
  }
  lVar3 = func_0x000180314710(TI_string__,1);
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b39fa == '\0') {
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b39fa = '\x01';
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660();
  }
  auStackX_18[0] =
       FUN_1803fb530(*(float *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x18) * 100.0,0);
  uVar4 = System_Int32__ToString(auStackX_18,0);
  uVar4 = System_String__Concat(uVar4,LIT_"'% (auto)'",0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      func_0x000180314690(lVar3 + 0x20,uVar4);
      return lVar3;
    }
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    lVar3 = (*pcVar2)();
    return lVar3;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar3 = (*pcVar2)();
  return lVar3;
}

