// L2ConfirmWindow__HideWindow__18076fa80 @ 0x18076fa80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ConfirmWindow__HideWindow__18076fa80(longlong param_1,undefined1 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  
  if (cRam00000001834b43e4 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b43e4 = '\x01';
  }
  if (*(char *)(param_1 + 0xb0) == '\0') {
code_r0x00018076fb39:
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    func_0x000180314690(param_1 + 0x88,0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    func_0x000180314690(param_1 + 0x90,0);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    L2ConfirmWindow__FechaJanela__18076f8b0(param_1,param_2,0);
L2ConfirmWindow__MostraProximo__180770760:
    if (cRam00000001834b43e2 == '\0') {
      FUN_180315380(MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.RemoveAt);
      FUN_180315380(MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Count);
      FUN_180315380(MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Item);
      cRam00000001834b43e2 = '\x01';
    }
    lVar4 = *(longlong *)(param_1 + 0xd8);
    if (lVar4 != 0) {
      while( true ) {
        if ((*(int *)(lVar4 + 0x18) < 1) || (*(char *)(param_1 + 0x38) == '\0')) {
          return;
        }
        if (*(longlong *)(param_1 + 0xd8) == 0) break;
        lVar4 = FUN_180bbafe0(*(longlong *)(param_1 + 0xd8),0,MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Item);
        if ((*(longlong *)(param_1 + 0xd8) == 0) ||
           (FUN_18164e790(*(longlong *)(param_1 + 0xd8),0,MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.RemoveAt), lVar4 == 0)) break;
        if ((*(float *)(lVar4 + 0x28) <= 0.0) ||
           (fVar5 = (float)FUN_1824366b0(0), fVar5 < *(float *)(lVar4 + 0x28))) {
          L2ConfirmWindow__Mostra__180770870(param_1,lVar4,0);
        }
        else {
          L2ConfirmWindow__Executa__18076f860(*(undefined8 *)(lVar4 + 0x20));
        }
        lVar4 = *(longlong *)(param_1 + 0xd8);
        if (lVar4 == 0) break;
      }
    }
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(float *)(param_1 + 0xa8) <= 0.0) {
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    uVar3 = **(undefined8 **)(TI_L2GameUI + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if (cVar2 == '\0') goto code_r0x00018076fb39;
  }
  if (*(char *)(param_1 + 0xb0) != '\0') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x88) = 0;
    func_0x000180314690(param_1 + 0x88,0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    func_0x000180314690(param_1 + 0x90,0);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    L2ConfirmWindow__FechaJanela__18076f8b0(param_1,0,0);
    L2ConfirmWindow__Executa__18076f860(uVar3,0);
    goto L2ConfirmWindow__MostraProximo__180770760;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  if (cRam00000001834b43e3 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'window_close'");
    cRam00000001834b43e3 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0xa0),0);
    uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar4 == 0) goto code_r0x00018076fa79;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (DAT_1834b301f == '\0') {
      FUN_180315380(TI_AudioManager);
      DAT_1834b301f = '\x01';
    }
    if (**(longlong **)(TI_AudioManager + 0xb8) == 0) goto code_r0x00018076fa79;
    AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_close'",0);
  }
  L2Window__HideWindow__180799d10(param_1,0,0);
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  uVar3 = **(undefined8 **)(TI_L2GameUI + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  lVar4 = **(longlong **)(TI_L2GameUI + 0xb8);
  if (lVar4 != 0) {
    if (cRam00000001834b43f0 == '\0') {
      FUN_180315380(MR_System.Collections.Generic.List<L2PopupWindow>.Remove);
      cRam00000001834b43f0 = '\x01';
    }
    lVar4 = *(longlong *)(lVar4 + 0x80);
    if (lVar4 != 0) {
      FUN_18164eb60(lVar4,param_1,MR_System.Collections.Generic.List<L2PopupWindow>.Remove);
      return;
    }
  }
code_r0x00018076fa79:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

