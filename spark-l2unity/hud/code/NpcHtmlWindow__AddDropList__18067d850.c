// NpcHtmlWindow__AddDropList__18067d850 @ 0x18067d850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__AddDropList__18067d850(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  longlong *plVar12;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [2];
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (cRam00000001834b3e51 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.BasePopupField<string,string>.get_text);
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.TryAdd);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
    FUN_180315380(TI_UnityEngine.UIElements.DropdownField);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>>);
    FUN_180315380(MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<string>.AddRange);
    FUN_180315380(TI_System.Math);
    FUN_180315380(MR_UnityEngine.UIElements.PopupField<string>.set_index);
    FUN_180315380(MD_NpcHtmlWindow.__c__DisplayClass42_0._AddDropList_b__0);
    FUN_180315380(TI_NpcHtmlWindow.<>c__DisplayClass42_0);
    FUN_180315380(LIT_"'var'");
    FUN_180315380(LIT_"'list'");
    FUN_180315380(LIT_"'height'");
    FUN_180315380(LIT_"';'");
    FUN_180315380(LIT_"'width'");
    cRam00000001834b3e51 = '\x01';
  }
  plVar12 = (longlong *)0x0;
  uStack_60 = 0;
  auStack_58[0] = 0;
  lStack_68 = 0;
  lVar5 = func_0x000180315580(TI_NpcHtmlWindow.<>c__DisplayClass42_0);
  Gear__UpdateWeaponType__1803dadf0(lVar5,0);
  if (lVar5 != 0) {
    *(longlong *)(lVar5 + 0x10) = param_1;
    func_0x000180314690(lVar5 + 0x10,param_1);
    if ((*(longlong *)(param_1 + 0xc0) != 0) &&
       (lVar6 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(param_1 + 0xc0),0)
       , lVar6 != 0)) {
      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_Item(lVar6,0,0);
      if (plVar7 != (longlong *)0x0) {
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.DropdownField + 0x130)) ||
           (plVar12 = plVar7,
           *(longlong *)
            (*(longlong *)(*plVar7 + 200) + -8 +
            (ulonglong)*(byte *)(TI_UnityEngine.UIElements.DropdownField + 0x130) * 8) != TI_UnityEngine.UIElements.DropdownField)) {
          FUN_1803146d0(plVar7);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (param_3 != 0) {
        cVar3 = FUN_1812698d0(param_3,LIT_"'width'",&uStack_60,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
        if (cVar3 != '\0') {
          iVar4 = System_Int32__Parse(uStack_60,0);
          if (plVar12 == (longlong *)0x0) goto code_r0x00018067df76;
          plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar12,0);
          if (*(int *)(TI_System.Math + 0xe4) == 0) {
            func_0x000180315660();
          }
          func_0x00018189eb20(0x28,iVar4 + -0x32,0);
          puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
          if (plVar7 == (longlong *)0x0) goto code_r0x00018067df76;
          lVar6 = *plVar7;
          uVar9 = *puVar8;
          uVar1 = *(undefined4 *)(puVar8 + 1);
          if (*(ushort *)(lVar6 + 0x12e) != 0) {
            uVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar8 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                          0x59) * 0x10 + 0x138 + lVar6);
                goto code_r0x00018067db09;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
          }
          puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x59);
code_r0x00018067db09:
          uStack_48 = uVar9;
          uStack_40 = uVar1;
          (*(code *)*puVar8)(plVar7,&uStack_48,puVar8[1]);
          plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar12,0);
          func_0x00018189eb20(0x28,iVar4 + -0x32,0);
          puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48);
          if (plVar7 == (longlong *)0x0) goto code_r0x00018067df76;
          lVar6 = *plVar7;
          uVar9 = *puVar8;
          uVar1 = *(undefined4 *)(puVar8 + 1);
          if (*(ushort *)(lVar6 + 0x12e) != 0) {
            uVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar8 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                          0xad) * 0x10 + 0x138 + lVar6);
                goto code_r0x00018067dbb9;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
          }
          puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018067dbb9:
          uStack_48 = uVar9;
          uStack_40 = uVar1;
          (*(code *)*puVar8)(plVar7,&uStack_48,puVar8[1]);
        }
        cVar3 = FUN_1812698d0(param_3,LIT_"'height'",auStack_58,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
        if (cVar3 != '\0') {
          System_Int32__Parse(auStack_58[0],0);
          if (plVar12 == (longlong *)0x0) goto code_r0x00018067df76;
          plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar12,0);
          puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
          if (plVar7 == (longlong *)0x0) goto code_r0x00018067df76;
          lVar6 = *plVar7;
          uVar9 = *puVar8;
          uVar1 = *(undefined4 *)(puVar8 + 1);
          if (*(ushort *)(lVar6 + 0x12e) != 0) {
            uVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar8 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                          0x57) * 0x10 + 0x138 + lVar6);
                goto code_r0x00018067dc89;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
          }
          puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018067dc89:
          uStack_48 = uVar9;
          uStack_40 = uVar1;
          (*(code *)*puVar8)(plVar7,&uStack_48,puVar8[1]);
          plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar12,0);
          puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
          if (plVar7 == (longlong *)0x0) goto code_r0x00018067df76;
          lVar6 = *plVar7;
          uVar9 = *puVar8;
          uVar1 = *(undefined4 *)(puVar8 + 1);
          if (*(ushort *)(lVar6 + 0x12e) != 0) {
            uVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar8 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                          0x43) * 0x10 + 0x138 + lVar6);
                goto code_r0x00018067dd29;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
          }
          puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018067dd29:
          uStack_48 = uVar9;
          uStack_40 = uVar1;
          (*(code *)*puVar8)(plVar7,&uStack_48,puVar8[1]);
        }
        cVar3 = FUN_1812698d0(param_3,LIT_"'list'",&lStack_68,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
        if (((cVar3 == '\0') || (lStack_68 == 0)) || (*(int *)(lStack_68 + 0x10) < 1)) {
          if (plVar12 == (longlong *)0x0) goto code_r0x00018067df76;
        }
        else {
          if (((plVar12 == (longlong *)0x0) ||
              (lVar6 = (**(code **)(*plVar12 + 0xb68))(plVar12,*(undefined8 *)(*plVar12 + 0xb70)),
              lStack_68 == 0)) ||
             (uVar9 = System_String__Split(lStack_68,LIT_"';'",0,0), lVar6 == 0))
          goto code_r0x00018067df76;
          func_0x0001816458c0(lVar6,uVar9,MR_System.Collections.Generic.List<string>.AddRange);
        }
        FUN_180d268a0(plVar12,0,MR_UnityEngine.UIElements.PopupField<string>.set_index);
        cVar3 = FUN_1812698d0(param_3,LIT_"'var'",lVar5 + 0x18,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
        if (cVar3 != '\0') {
          lVar6 = *(longlong *)(param_1 + 0xf0);
          uVar9 = *(undefined8 *)(lVar5 + 0x18);
          uVar10 = FUN_180e34af0(plVar12,MR_UnityEngine.UIElements.BasePopupField<string,string>.get_text);
          if (lVar6 == 0) goto code_r0x00018067df76;
          FUN_181269770(lVar6,uVar9,uVar10,MR_System.Collections.Generic.Dictionary<string,string>.TryAdd);
          uVar9 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>>);
          FUN_18055b980(uVar9,lVar5,MD_NpcHtmlWindow.__c__DisplayClass42_0._AddDropList_b__0,0);
          FUN_1809fd010(plVar12,uVar9,MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string>);
          uVar9 = func_0x000180315580(TI_ButtonClickSoundManipulator);
          BlinkingCursorManipulator___ctor__1807aa3c0(uVar9,plVar12,0);
          UnityEngine_UIElements_VisualElementExtensions__AddManipulator(plVar12,uVar9,0);
        }
        if (param_2 != 0) {
          UnityEngine_UIElements_VisualElement__Add(param_2,plVar12,0);
          return;
        }
      }
    }
  }
code_r0x00018067df76:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

