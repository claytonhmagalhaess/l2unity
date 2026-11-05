// NpcHtmlWindow__ProcessNode__180682820 @ 0x180682820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__ProcessNode__180682820(longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b3e50 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    cRam00000001834b3e50 = '\x01';
  }
  if (*(char *)(param_1 + 0xe0) != '\0') {
    if (param_2 == 0) goto code_r0x0001806829f2;
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(param_2,0);
    uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    if (lVar2 == 0) goto code_r0x0001806829f2;
    FUN_180005060(1,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(param_2,0);
    uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    if (lVar2 == 0) goto code_r0x0001806829f2;
    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
  }
  if (param_3 == 0) {
code_r0x0001806829f2:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  switch(*(undefined4 *)(param_3 + 0x10)) {
  case 0:
    NpcHtmlWindow__AddTextElement__18067f5b0(param_1,param_2,*(undefined8 *)(param_3 + 0x18),0);
    break;
  case 1:
    uVar3 = 0;
    goto code_r0x000180682942;
  case 2:
    uVar3 = 1;
code_r0x000180682942:
    NpcHtmlWindow__AddLineBreak__18067f3d0(param_1,param_2,uVar3,0);
    break;
  case 3:
    NpcHtmlWindow__AddImageElement__18067e4e0(param_1,param_2,*(undefined8 *)(param_3 + 0x20),0);
    break;
  case 4:
    NpcHtmlWindow__ProcessTable__180682a20
              (param_1,param_2,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x18),0);
    break;
  case 5:
    NpcHtmlWindow__AddHyperlinkElement__18067df90(param_1,param_2,*(undefined8 *)(param_3 + 0x20),0)
    ;
    break;
  case 6:
    NpcHtmlWindow__AddButton__18067d050(param_1,param_2,*(undefined8 *)(param_3 + 0x20),0);
    break;
  case 7:
    NpcHtmlWindow__AddInputField__18067edd0(param_1,param_2,*(undefined8 *)(param_3 + 0x20),0);
    break;
  case 8:
    NpcHtmlWindow__AddDropList__18067d850(param_1,param_2,*(undefined8 *)(param_3 + 0x20),0);
  }
  return;
}

