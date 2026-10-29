// SkillbarMain__HandleTooltipClick__180703160 @ 0x180703160

void SkillbarMain__HandleTooltipClick__180703160(void)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  
  if (cRam00000001834b32cb == '\0') {
    FUN_180315380(TI_SkillbarWindow);
    cRam00000001834b32cb = '\x01';
  }
  lVar1 = **(longlong **)(TI_SkillbarWindow + 0xb8);
  if (lVar1 != 0) {
    if (cRam00000001834b418c == '\0') {
      FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item);
      FUN_180315380(TI_SkillbarMain);
      cRam00000001834b418c = '\x01';
    }
    iVar6 = 0;
    *(bool *)(lVar1 + 0x8a) = *(char *)(lVar1 + 0x8a) == '\0';
    while (*(longlong *)(lVar1 + 0xd0) != 0) {
      plVar5 = (longlong *)FUN_180bbafe0(*(longlong *)(lVar1 + 0xd0),iVar6 * 5,MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item)
      ;
      if (plVar5 == (longlong *)0x0) break;
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TI_SkillbarMain + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar5 + 200) + -8 +
           (ulonglong)*(byte *)(TI_SkillbarMain + 0x130) * 8) != TI_SkillbarMain)) {
        FUN_1803146d0(plVar5,TI_SkillbarMain);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
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
      if ((**(longlong **)(TI_SkillbarWindow + 0xb8) == 0) || (lVar2 = plVar5[0xb], lVar2 == 0))
      break;
      if (*(char *)(**(longlong **)(TI_SkillbarWindow + 0xb8) + 0x8a) == '\0') {
        cVar4 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar2,LIT_"'min'");
        if (cVar4 != '\0') {
          if (plVar5[0xb] == 0) break;
          UnityEngine_UIElements_VisualElement__RemoveFromClassList
                    (plVar5[0xb],LIT_"'min'",0);
        }
      }
      else {
        cVar4 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar2,LIT_"'min'");
        if (cVar4 == '\0') {
          if (plVar5[0xb] == 0) break;
          UnityEngine_UIElements_VisualElement__AddToClassList(plVar5[0xb],LIT_"'min'",0);
        }
      }
      iVar6 = iVar6 + 1;
      if (1 < iVar6) {
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

