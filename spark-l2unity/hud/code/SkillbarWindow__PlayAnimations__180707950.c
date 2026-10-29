// SkillbarWindow__PlayAnimations__180707950 @ 0x180707950

longlong SkillbarWindow__PlayAnimations__180707950(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  
  if (cRam00000001834b4199 == '\0') {
    FUN_180315380(TI_SkillbarWindow.<PlayAnimations>d__69);
    cRam00000001834b4199 = '\x01';
  }
  lVar2 = func_0x000180315580(TI_SkillbarWindow.<PlayAnimations>d__69);
  AbstractEffectWindow__UpdateBuffTimers_d__24___ctor(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    func_0x000180314690(lVar2 + 0x20,param_1);
    return lVar2;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}

