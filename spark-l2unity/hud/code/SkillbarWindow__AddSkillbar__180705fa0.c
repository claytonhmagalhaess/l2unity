// SkillbarWindow__AddSkillbar__180705fa0 @ 0x180705fa0

void SkillbarWindow__AddSkillbar__180705fa0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  
  if (cRam00000001834b417f == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item);
    FUN_180315380(TI_SkillbarMain);
    cRam00000001834b417f = '\x01';
  }
  iVar5 = 0;
  do {
    if (2 < *(int *)(param_1 + 0x90)) {
      if (*(longlong *)(param_1 + 0xd0) == 0) {
code_r0x000180706067:
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)
               FUN_180bbafe0(*(longlong *)(param_1 + 0xd0),iVar5 * 5,MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item);
      if (plVar4 == (longlong *)0x0) goto code_r0x000180706067;
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TI_SkillbarMain + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar4 + 200) + -8 +
           (ulonglong)*(byte *)(TI_SkillbarMain + 0x130) * 8) != TI_SkillbarMain)) {
        FUN_1803146d0(plVar4,TI_SkillbarMain);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      SkillbarMain__UpdateExpandInput__1807034d0(plVar4,1,0);
    }
    iVar5 = iVar5 + 1;
    if (1 < iVar5) {
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
      SkillbarWindow__ExpandSkillbar__180706ee0(param_1,0);
      cVar3 = func_0x000181707e50(*(undefined8 *)(param_1 + 0xe8),0);
      if ((cVar3 == '\0') && (*(char *)(param_1 + 0xf1) == '\0')) {
        if (cRam00000001834b4180 == '\0') {
          FUN_180315380(LIT_"'spark.atalhos.linhas.'");
          cRam00000001834b4180 = '\x01';
        }
        uVar2 = System_String__Concat(LIT_"'spark.atalhos.linhas.'",*(undefined8 *)(param_1 + 0xe8),0);
        UnityEngine_PlayerPrefs__SetInt(uVar2,*(int *)(param_1 + 0x90) + 1,0);
        FUN_18242e9f0(0);
      }
      return;
    }
  } while( true );
}

