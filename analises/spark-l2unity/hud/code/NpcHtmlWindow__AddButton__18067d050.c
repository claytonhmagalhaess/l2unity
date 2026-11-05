// NpcHtmlWindow__AddButton__18067d050 @ 0x18067d050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__AddButton__18067d050(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ushort uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (cRam00000001834b3e55 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(TI_UnityEngine.UIElements.Button);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MD_NpcHtmlWindow.__c__DisplayClass46_0._AddButton_b__0);
    FUN_180315380(TI_NpcHtmlWindow.<>c__DisplayClass46_0);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'ButtonLabel'");
    FUN_180315380(LIT_"'fore'");
    FUN_180315380(LIT_"'value'");
    FUN_180315380(LIT_"'L2UI_CH3.prev1'");
    FUN_180315380(LIT_"'height'");
    FUN_180315380(LIT_"'<'");
    FUN_180315380(LIT_"'L2UI_CH3.next1'");
    FUN_180315380(LIT_"'*'");
    FUN_180315380(LIT_"'width'");
    FUN_180315380(LIT_"'>'");
    FUN_180315380(LIT_"'action'");
    cRam00000001834b3e55 = '\x01';
  }
  plVar11 = (longlong *)0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  lVar4 = func_0x000180315580(TI_NpcHtmlWindow.<>c__DisplayClass46_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 == 0) goto code_r0x00018067d840;
  *(longlong *)(lVar4 + 0x10) = param_1;
  func_0x000180314690(lVar4 + 0x10,param_1);
  if ((*(longlong *)(param_1 + 0x88) == 0) ||
     (lVar5 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(param_1 + 0x88),0),
     lVar5 == 0)) goto code_r0x00018067d840;
  plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_Item(lVar5,0,0);
  if (plVar6 != (longlong *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.Button + 0x130)) ||
       (plVar11 = plVar6,
       *(longlong *)
        (*(longlong *)(*plVar6 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.Button + 0x130) * 8)
       != TI_UnityEngine.UIElements.Button)) {
      FUN_1803146d0(plVar6);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar6 = (longlong *)FUN_180b0e310(plVar11,LIT_"'ButtonLabel'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
  if (param_3 == 0) goto code_r0x00018067d840;
  cVar3 = FUN_1812698d0(param_3,LIT_"'width'",&uStack_68,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
  if (cVar3 != '\0') {
    if (plVar11 == (longlong *)0x0) goto code_r0x00018067d840;
    plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar11,0);
    System_Int32__Parse(uStack_68,0);
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar7 == (longlong *)0x0) goto code_r0x00018067d840;
    lVar5 = *plVar7;
    uVar9 = *puVar8;
    uVar1 = *(undefined4 *)(puVar8 + 1);
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x59) *
                    0x10 + 0x138 + lVar5);
          goto code_r0x00018067d329;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x59);
code_r0x00018067d329:
    uStack_48 = uVar9;
    uStack_40 = uVar1;
    (*(code *)*puVar8)(plVar7,&uStack_48,puVar8[1]);
    plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar11,0);
    System_Int32__Parse(uStack_68,0);
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar7 == (longlong *)0x0) goto code_r0x00018067d840;
    lVar5 = *plVar7;
    uVar9 = *puVar8;
    uVar1 = *(undefined4 *)(puVar8 + 1);
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0xad) *
                    0x10 + 0x138 + lVar5);
          goto code_r0x00018067d3c9;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018067d3c9:
    uStack_48 = uVar9;
    uStack_40 = uVar1;
    (*(code *)*puVar8)(plVar7,&uStack_48,puVar8[1]);
  }
  cVar3 = FUN_1812698d0(param_3,LIT_"'height'",&uStack_60,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
  if (cVar3 != '\0') {
    if (plVar11 == (longlong *)0x0) goto code_r0x00018067d840;
    plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar11,0);
    System_Int32__Parse(uStack_60,0);
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar7 == (longlong *)0x0) goto code_r0x00018067d840;
    lVar5 = *plVar7;
    uVar9 = *puVar8;
    uVar1 = *(undefined4 *)(puVar8 + 1);
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x57) *
                    0x10 + 0x138 + lVar5);
          goto code_r0x00018067d499;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018067d499:
    uStack_48 = uVar9;
    uStack_40 = uVar1;
    (*(code *)*puVar8)(plVar7,&uStack_48,puVar8[1]);
    plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar11,0);
    System_Int32__Parse(uStack_60,0);
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar7 == (longlong *)0x0) goto code_r0x00018067d840;
    lVar5 = *plVar7;
    uVar9 = *puVar8;
    uVar1 = *(undefined4 *)(puVar8 + 1);
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x43) *
                    0x10 + 0x138 + lVar5);
          goto code_r0x00018067d539;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018067d539:
    uStack_48 = uVar9;
    uStack_40 = uVar1;
    (*(code *)*puVar8)(plVar7,&uStack_48,puVar8[1]);
  }
  cVar3 = FUN_1812698d0(param_3,LIT_"'action'",lVar4 + 0x18,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
  if (cVar3 != '\0') {
    uVar9 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(uVar9,lVar4,MD_NpcHtmlWindow.__c__DisplayClass46_0._AddButton_b__0,0);
    if (plVar11 == (longlong *)0x0) goto code_r0x00018067d840;
    UnityEngine_UIElements_Button__add_clicked(plVar11,uVar9,0);
  }
  cVar3 = FUN_1812698d0(param_3,LIT_"'value'",&uStack_50,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
  uVar9 = uStack_50;
  if (cVar3 == '\0') {
    if (plVar11 == (longlong *)0x0) goto code_r0x00018067d840;
    plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar11,0);
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar7 == (longlong *)0x0) goto code_r0x00018067d840;
    lVar4 = *plVar7;
    uVar9 = *puVar8;
    uVar1 = *(undefined4 *)(puVar8 + 1);
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0xad) *
                    0x10 + 0x138 + lVar4);
          goto code_r0x00018067d659;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018067d659:
    uStack_48 = uVar9;
    uStack_40 = uVar1;
    (*(code *)*puVar8)(plVar7,&uStack_48,puVar8[1]);
    cVar3 = FUN_1812698d0(param_3,LIT_"'fore'",&uStack_58,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
    uVar9 = LIT_"'*'";
    if ((cVar3 == '\0') ||
       (cVar3 = func_0x0001817058a0(uStack_58,LIT_"'L2UI_CH3.next1'",0), uVar9 = LIT_"'>'",
       cVar3 != '\0')) goto joined_r0x00018067d7bf;
    cVar3 = func_0x0001817058a0(uStack_58,LIT_"'L2UI_CH3.prev1'",0);
    if (plVar6 == (longlong *)0x0) goto code_r0x00018067d840;
    lVar4 = *plVar6;
    uVar12 = *(undefined8 *)(lVar4 + 0xe50);
    uVar9 = LIT_"'<'";
    if (cVar3 == '\0') {
      uVar9 = LIT_"'*'";
    }
  }
  else {
joined_r0x00018067d7bf:
    if (plVar6 == (longlong *)0x0) goto code_r0x00018067d840;
    lVar4 = *plVar6;
    uVar12 = *(undefined8 *)(lVar4 + 0xe50);
  }
  (**(code **)(lVar4 + 0xe48))(plVar6,uVar9,uVar12);
  uVar9 = func_0x000180315580(TI_ButtonClickSoundManipulator);
  BlinkingCursorManipulator___ctor__1807aa3c0(uVar9,plVar11,0);
  UnityEngine_UIElements_VisualElementExtensions__AddManipulator(plVar11,uVar9,0);
  if (param_2 != 0) {
    UnityEngine_UIElements_VisualElement__Add(param_2,plVar11,0);
    return;
  }
code_r0x00018067d840:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

