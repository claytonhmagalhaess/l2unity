// NpcHtmlWindow__AddTextElement__18067f5b0 @ 0x18067f5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__AddTextElement__18067f5b0
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  
  if (cRam00000001834b3e53 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(LIT_"'l2-color-4'");
    FUN_180315380(LIT_"'html-window-label'");
    cRam00000001834b3e53 = '\x01';
  }
  cVar2 = func_0x000181707e50(param_3,0);
  if (cVar2 != '\0') {
    return;
  }
  plVar3 = (longlong *)func_0x000180315580(TI_UnityEngine.UIElements.Label);
  func_0x00018270a450(plVar3,0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0xe48))(plVar3,param_3,*(undefined8 *)(*plVar3 + 0xe50));
    UnityEngine_UIElements_TextElement__set_enableRichText(plVar3,1,0);
    UnityEngine_UIElements_VisualElement__AddToClassList(plVar3,LIT_"'l2-color-4'",0);
    UnityEngine_UIElements_VisualElement__AddToClassList(plVar3,LIT_"'html-window-label'",0);
    if (param_2 != 0) {
      UnityEngine_UIElements_VisualElement__Add(param_2,plVar3,0);
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

