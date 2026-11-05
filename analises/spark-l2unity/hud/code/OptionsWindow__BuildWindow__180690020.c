// OptionsWindow__BuildWindow__180690020 @ 0x180690020

longlong OptionsWindow__BuildWindow__180690020(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  
  if (cRam00000001834b3e7c == '\0') {
    FUN_180315380(TI_OptionsWindow.<BuildWindow>d__30);
    cRam00000001834b3e7c = '\x01';
  }
  lVar2 = func_0x000180315580(TI_OptionsWindow.<BuildWindow>d__30);
  AbstractEffectWindow__UpdateBuffTimers_d__24___ctor(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    func_0x000180314690(lVar2 + 0x20,param_1);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    func_0x000180314690(lVar2 + 0x28,param_2);
    return lVar2;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}

