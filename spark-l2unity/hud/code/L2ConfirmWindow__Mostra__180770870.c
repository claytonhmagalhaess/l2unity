// L2ConfirmWindow__Mostra__180770870 @ 0x180770870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ConfirmWindow__Mostra__180770870(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (DAT_1834b43df == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'window_open'");
    DAT_1834b43df = '\x01';
  }
  if (param_1[0x14] == 0) {
    if (param_2 == 0) goto LAB_180770b04;
  }
  else {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x14],0);
    if (param_2 == 0) goto LAB_180770b04;
    uVar5 = FUN_180eb5810(*(longlong *)(param_2 + 0x20) == 0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar4 == 0) goto LAB_180770b04;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
  }
  plVar1 = (longlong *)param_1[0x13];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xe48))
              (plVar1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(*plVar1 + 0xe50));
    param_1[0x11] = *(longlong *)(param_2 + 0x18);
    func_0x000180314690(param_1 + 0x11);
    param_1[0x12] = *(longlong *)(param_2 + 0x20);
    func_0x000180314690(param_1 + 0x12);
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined1 *)(param_1 + 0x16) = 1;
    *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
    if (param_1[0x17] != 0) {
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x17],0);
      uVar5 = FUN_180eb5810(*(float *)(param_1 + 0x15) <= 0.0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar4 == 0) goto LAB_180770b04;
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
    }
    L2ConfirmWindow__AtualizaTempo(param_1,0);
    L2Window__ShowWindow__18079a6b0(param_1,0);
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    if (DAT_1834b301f == '\0') {
      FUN_180315380(TI_AudioManager);
      DAT_1834b301f = '\x01';
    }
    if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
      AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_open'",0);
      if (DAT_1834b31c0 == '\0') {
        FUN_180315380(TI_L2GameUI);
        DAT_1834b31c0 = '\x01';
      }
      uVar5 = **(undefined8 **)(TI_L2GameUI + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if (cVar3 != '\0') {
        if (DAT_1834b31c0 == '\0') {
          FUN_180315380(TI_L2GameUI);
          DAT_1834b31c0 = '\x01';
        }
        if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) goto LAB_180770b04;
        L2GameUI__WindowOpened__180776020(**(longlong **)(TI_L2GameUI + 0xb8),param_1,0);
      }
      return;
    }
  }
LAB_180770b04:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

