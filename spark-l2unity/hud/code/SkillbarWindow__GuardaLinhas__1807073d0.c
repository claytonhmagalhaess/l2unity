// SkillbarWindow__GuardaLinhas__1807073d0 @ 0x1807073d0

void SkillbarWindow__GuardaLinhas__1807073d0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = func_0x000181707e50(*(undefined8 *)(param_1 + 0xe8),0);
  if ((cVar2 == '\0') && (*(char *)(param_1 + 0xf1) == '\0')) {
    if (cRam00000001834b4180 == '\0') {
      FUN_180315380(LIT_"'spark.atalhos.linhas.'");
      cRam00000001834b4180 = '\x01';
    }
    uVar1 = System_String__Concat(LIT_"'spark.atalhos.linhas.'",*(undefined8 *)(param_1 + 0xe8),0);
    UnityEngine_PlayerPrefs__SetInt(uVar1,*(int *)(param_1 + 0x90) + 1,0);
    FUN_18242e9f0(0);
  }
  return;
}

