// L2InputAmountWindow__ShowWindow__180776630 @ 0x180776630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2InputAmountWindow__ShowWindow__180776630
               (longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
               longlong param_5)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (cRam00000001834b43f9 == '\0') {
    FUN_180315380(LIT_"'Unkown SystemMessageId.'");
    cRam00000001834b43f9 = '\x01';
  }
  lVar4 = SystemMessageTable__get_Instance(0);
  if (lVar4 == 0) {
code_r0x0001807766af:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar4 = SystemMessageTable__GetSystemMessage(lVar4,param_2,0);
  if (lVar4 == 0) goto code_r0x0001807766af;
  lVar6 = *(longlong *)(lVar4 + 0x18);
  if (*(longlong *)(lVar4 + 0x18) == 0) {
    lVar6 = LIT_"'Unkown SystemMessageId.'";
  }
  if (cRam00000001834b43fa == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'window_open'");
    FUN_180315380(LIT_"''");
    cRam00000001834b43fa = '\x01';
  }
  plVar1 = (longlong *)param_1[0x15];
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = param_3;
  if (plVar1 == (longlong *)0x0) goto code_r0x00018077696a;
  (**(code **)(*plVar1 + 0xa88))(plVar1,LIT_"''",*(undefined8 *)(*plVar1 + 0xa90));
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_5 == 0) {
    if (param_1[0x14] == 0) goto code_r0x00018077696a;
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x14],0);
    uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar4 == 0) goto code_r0x00018077696a;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
  }
  plVar1 = (longlong *)param_1[0x13];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xe48))(plVar1,lVar6,*(undefined8 *)(*plVar1 + 0xe50));
    param_1[0x11] = param_4;
    func_0x000180314690(param_1 + 0x11,param_4);
    param_1[0x12] = param_5;
    func_0x000180314690(param_1 + 0x12,param_5);
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
        if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) goto code_r0x00018077696a;
        L2GameUI__WindowOpened__180776020(**(longlong **)(TI_L2GameUI + 0xb8),param_1,0);
      }
      return;
    }
  }
code_r0x00018077696a:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

