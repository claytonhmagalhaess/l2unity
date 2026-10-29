// NpcHtmlWindow__AddHyperlinkElement__18067df90 @ 0x18067df90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__AddHyperlinkElement__18067df90
               (longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ushort uVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (cRam00000001834b3e54 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.Button);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MD_NpcHtmlWindow.__c__DisplayClass45_0._AddHyperlinkElement_b__0);
    FUN_180315380(TI_NpcHtmlWindow.<>c__DisplayClass45_0);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'ButtonLabel'");
    FUN_180315380(LIT_"'value'");
    FUN_180315380(LIT_"'<u>'");
    FUN_180315380(LIT_"'height'");
    FUN_180315380(LIT_"'</u>'");
    FUN_180315380(LIT_"'<u>...</u>'");
    FUN_180315380(LIT_"'ButtonBg'");
    FUN_180315380(LIT_"'width'");
    FUN_180315380(LIT_"'action'");
    cRam00000001834b3e54 = '\x01';
  }
  uStack_58 = 0;
  uStack_50 = 0;
  auStack_48[0] = 0;
  lVar4 = func_0x000180315580(TI_NpcHtmlWindow.<>c__DisplayClass45_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(longlong *)(lVar4 + 0x10) = param_1;
    func_0x000180314690(lVar4 + 0x10,param_1);
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar5 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(param_1 + 0xb0),0);
      if (lVar5 != 0) {
        plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_Item(lVar5,0,0);
        if (plVar6 != (longlong *)0x0) {
          if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.Button + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(*plVar6 + 200) + -8 +
               (ulonglong)*(byte *)(TI_UnityEngine.UIElements.Button + 0x130) * 8) != TI_UnityEngine.UIElements.Button)) {
            FUN_1803146d0(plVar6);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
          func_0x000180315660();
        }
        FUN_180b0e310(plVar6,LIT_"'ButtonLabel'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
        FUN_180b0e310(plVar6,LIT_"'ButtonBg'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
        plVar7 = (longlong *)FUN_180b0e310(plVar6,LIT_"'ButtonLabel'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
        if (param_3 != 0) {
          cVar3 = FUN_1812698d0(param_3,LIT_"'width'",&uStack_58,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
          if (cVar3 != '\0') {
            if (plVar6 == (longlong *)0x0) goto code_r0x00018067e4ce;
            plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar6,0);
            System_Int32__Parse(uStack_58,0);
            puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar8 == (longlong *)0x0) goto code_r0x00018067e4ce;
            lVar5 = *plVar8;
            uVar10 = *puVar9;
            uVar1 = *(undefined4 *)(puVar9 + 1);
            if (*(ushort *)(lVar5 + 0x12e) != 0) {
              uVar11 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                            0xad) * 0x10 + 0x138 + lVar5);
                  goto code_r0x00018067e289;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < *(ushort *)(lVar5 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018067e289:
            uStack_38 = uVar10;
            uStack_30 = uVar1;
            (*(code *)*puVar9)(plVar8,&uStack_38,puVar9[1]);
          }
          cVar3 = FUN_1812698d0(param_3,LIT_"'height'",&uStack_50,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
          if (cVar3 != '\0') {
            if (plVar6 == (longlong *)0x0) goto code_r0x00018067e4ce;
            plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar6,0);
            System_Int32__Parse(uStack_50,0);
            puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar8 == (longlong *)0x0) goto code_r0x00018067e4ce;
            lVar5 = *plVar8;
            uVar10 = *puVar9;
            uVar1 = *(undefined4 *)(puVar9 + 1);
            if (*(ushort *)(lVar5 + 0x12e) != 0) {
              uVar11 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                            0x43) * 0x10 + 0x138 + lVar5);
                  goto code_r0x00018067e359;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < *(ushort *)(lVar5 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018067e359:
            uStack_38 = uVar10;
            uStack_30 = uVar1;
            (*(code *)*puVar9)(plVar8,&uStack_38,puVar9[1]);
          }
          cVar3 = FUN_1812698d0(param_3,LIT_"'action'",lVar4 + 0x18,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
          if (cVar3 != '\0') {
            uVar10 = func_0x000180315580(TI_System.Action);
            FUN_1816a9c60(uVar10,lVar4,MD_NpcHtmlWindow.__c__DisplayClass45_0._AddHyperlinkElement_b__0,0);
            if (plVar6 == (longlong *)0x0) goto code_r0x00018067e4ce;
            UnityEngine_UIElements_Button__add_clicked(plVar6,uVar10,0);
          }
          cVar3 = FUN_1812698d0(param_3,LIT_"'value'",auStack_48,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
          if (cVar3 == '\0') {
            if (plVar7 == (longlong *)0x0) goto code_r0x00018067e4ce;
            (**(code **)(*plVar7 + 0xe48))
                      (plVar7,LIT_"'<u>...</u>'",*(undefined8 *)(*plVar7 + 0xe50));
          }
          else {
            uVar10 = System_String__Concat
                               (LIT_"'<u>'",auStack_48[0],LIT_"'</u>'",0);
            if (plVar7 == (longlong *)0x0) goto code_r0x00018067e4ce;
            (**(code **)(*plVar7 + 0xe48))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0xe50));
          }
          if (param_2 != 0) {
            UnityEngine_UIElements_VisualElement__Add(param_2,plVar6,0);
            return;
          }
        }
      }
    }
  }
code_r0x00018067e4ce:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

