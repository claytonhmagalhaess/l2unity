// L2ConfirmWindow__FechaJanela__18076f8b0 @ 0x18076f8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ConfirmWindow__FechaJanela__18076f8b0(longlong param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b43e3 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'window_close'");
    cRam00000001834b43e3 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0xa0),0);
    uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar3 == 0) goto code_r0x00018076fa79;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
  }
  if ((param_2 == '\0') && (*(char *)(param_1 + 0x38) == '\0')) {
    if (DAT_1834b301f == '\0') {
      FUN_180315380(TI_AudioManager);
      DAT_1834b301f = '\x01';
    }
    if (**(longlong **)(TI_AudioManager + 0xb8) == 0) goto code_r0x00018076fa79;
    AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_close'",0);
  }
  L2Window__HideWindow__180799d10(param_1,param_2,0);
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  uVar4 = **(undefined8 **)(TI_L2GameUI + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  lVar3 = **(longlong **)(TI_L2GameUI + 0xb8);
  if (lVar3 != 0) {
    if (cRam00000001834b43f0 == '\0') {
      FUN_180315380(MR_System.Collections.Generic.List<L2PopupWindow>.Remove);
      cRam00000001834b43f0 = '\x01';
    }
    lVar3 = *(longlong *)(lVar3 + 0x80);
    if (lVar3 != 0) {
      FUN_18164eb60(lVar3,param_1,MR_System.Collections.Generic.List<L2PopupWindow>.Remove);
      return;
    }
  }
code_r0x00018076fa79:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

