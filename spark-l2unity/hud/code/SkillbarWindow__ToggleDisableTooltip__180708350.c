// SkillbarWindow__ToggleDisableTooltip__180708350 @ 0x180708350

void SkillbarWindow__ToggleDisableTooltip__180708350(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  
  if (cRam00000001834b418c == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item);
    FUN_180315380(TI_SkillbarMain);
    cRam00000001834b418c = '\x01';
  }
  iVar5 = 0;
  *(bool *)(param_1 + 0x8a) = *(char *)(param_1 + 0x8a) == '\0';
  while (*(longlong *)(param_1 + 0xd0) != 0) {
    plVar4 = (longlong *)FUN_180bbafe0(*(longlong *)(param_1 + 0xd0),iVar5 * 5,MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item)
    ;
    if (plVar4 == (longlong *)0x0) break;
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TI_SkillbarMain + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar4 + 200) + -8 + (ulonglong)*(byte *)(TI_SkillbarMain + 0x130) * 8
         ) != TI_SkillbarMain)) {
      FUN_1803146d0(plVar4,TI_SkillbarMain);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam00000001834b4161 == '\0') {
      FUN_180315380(LIT_"'min'");
      cRam00000001834b4161 = '\x01';
    }
    if (cRam00000001834b32cb == '\0') {
      FUN_180315380(TI_SkillbarWindow);
      cRam00000001834b32cb = '\x01';
    }
    if ((**(longlong **)(TI_SkillbarWindow + 0xb8) == 0) || (lVar1 = plVar4[0xb], lVar1 == 0))
    break;
    if (*(char *)(**(longlong **)(TI_SkillbarWindow + 0xb8) + 0x8a) == '\0') {
      cVar3 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar1,LIT_"'min'");
      if (cVar3 != '\0') {
        if (plVar4[0xb] == 0) break;
        UnityEngine_UIElements_VisualElement__RemoveFromClassList
                  (plVar4[0xb],LIT_"'min'",0);
      }
    }
    else {
      cVar3 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar1,LIT_"'min'");
      if (cVar3 == '\0') {
        if (plVar4[0xb] == 0) break;
        UnityEngine_UIElements_VisualElement__AddToClassList(plVar4[0xb],LIT_"'min'",0);
      }
    }
    iVar5 = iVar5 + 1;
    if (1 < iVar5) {
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

