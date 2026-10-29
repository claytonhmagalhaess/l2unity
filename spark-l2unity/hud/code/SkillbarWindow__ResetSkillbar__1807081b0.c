// SkillbarWindow__ResetSkillbar__1807081b0 @ 0x1807081b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarWindow__ResetSkillbar__1807081b0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (cRam00000001834b4185 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item);
    FUN_180315380(TI_SkillbarMain);
    cRam00000001834b4185 = '\x01';
  }
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  while (*(longlong *)(param_1 + 0xd0) != 0) {
    plVar3 = (longlong *)FUN_180bbafe0(*(longlong *)(param_1 + 0xd0),iVar6 * 5,MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item)
    ;
    if (plVar3 == (longlong *)0x0) break;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TI_SkillbarMain + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar3 + 200) + -8 + (ulonglong)*(byte *)(TI_SkillbarMain + 0x130) * 8
         ) != TI_SkillbarMain)) {
      FUN_1803146d0(plVar3,TI_SkillbarMain);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (cRam00000001834b4160 == '\0') {
      FUN_180315380(TI_UnityEngine.UIElements.IStyle);
      FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      cRam00000001834b4160 = '\x01';
    }
    if (plVar3[10] == 0) break;
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(plVar3[10],0);
    uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar4 == 0) break;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
    if (plVar3[9] == 0) break;
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(plVar3[9],0);
    uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar4 == 0) break;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
    iVar6 = iVar6 + 1;
    if (1 < iVar6) {
      SkillbarWindow__MinimizeSkillbar__180707510(param_1,0);
      cVar2 = func_0x000181707e50(*(undefined8 *)(param_1 + 0xe8),0);
      if ((cVar2 == '\0') && (*(char *)(param_1 + 0xf1) == '\0')) {
        if (cRam00000001834b4180 == '\0') {
          FUN_180315380(LIT_"'spark.atalhos.linhas.'");
          cRam00000001834b4180 = '\x01';
        }
        uVar5 = System_String__Concat(LIT_"'spark.atalhos.linhas.'",*(undefined8 *)(param_1 + 0xe8),0);
        UnityEngine_PlayerPrefs__SetInt(uVar5,*(int *)(param_1 + 0x90) + 1,0);
        FUN_18242e9f0(0);
      }
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

