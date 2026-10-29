// SkillbarMain__HandleRotateClick__180702fc0 @ 0x180702fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarMain__HandleRotateClick__180702fc0(void)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b32cb == '\0') {
    FUN_180315380(TI_SkillbarWindow);
    cRam00000001834b32cb = '\x01';
  }
  lVar2 = **(longlong **)(TI_SkillbarWindow + 0xb8);
  if (lVar2 != 0) {
    if (cRam00000001834b4188 == '\0') {
      FUN_180315380(TI_UnityEngine.UIElements.IStyle);
      FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      cRam00000001834b4188 = '\x01';
    }
    cVar1 = *(char *)(lVar2 + 0x89);
    lVar4 = *(longlong *)(lVar2 + 0xb0);
    *(bool *)(lVar2 + 0x89) = cVar1 == '\0';
    if (lVar4 != 0) {
      if (cVar1 == '\0') {
        lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar4 == 0) goto code_r0x00018070314c;
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
        if (*(longlong *)(lVar2 + 0xb8) == 0) goto code_r0x00018070314c;
        lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar2 + 0xb8),0);
        uVar5 = 0;
      }
      else {
        lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar4 == 0) goto code_r0x00018070314c;
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
        if (*(longlong *)(lVar2 + 0xb8) == 0) goto code_r0x00018070314c;
        lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar2 + 0xb8),0);
        uVar5 = 1;
      }
      uVar5 = FUN_180eb5810(uVar5,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar4 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
        SkillbarWindow__AplicaEscala__1807062b0(lVar2,0);
        lVar2 = *(longlong *)(lVar2 + 0xf8);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        }
        return;
      }
    }
  }
code_r0x00018070314c:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

