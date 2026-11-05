// MacroWindow__ToggleHideWindow__18065b240 @ 0x18065b240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MacroWindow__ToggleHideWindow__18065b240(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  lVar4 = *param_1;
  if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00018065b269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x1c8))(param_1,0,*(undefined8 *)(lVar4 + 0x1d0));
    return;
  }
  (**(code **)(lVar4 + 0x1d8))(param_1,*(undefined8 *)(lVar4 + 0x1e0));
  (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  if (cRam00000001834b3d6c == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle,0);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Macro'");
    cRam00000001834b3d6c = '\x01';
  }
  if (param_1[0x15] == 0) {
    return;
  }
  plVar1 = (longlong *)param_1[0x12];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"'Macro'",*(undefined8 *)(*plVar1 + 0xe50));
    if (param_1[0x16] != 0) {
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x16],0);
      uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar4 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
        if (param_1[0x15] != 0) {
          lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x15],0);
          uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
          if (lVar4 != 0) {
            FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
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
              if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) goto DAT_18065b507;
              *(undefined1 *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x88) = 0;
            }
            MacroWindow__MostraLista__1806593c0(param_1,0);
            return;
          }
        }
      }
    }
  }
DAT_18065b507:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

