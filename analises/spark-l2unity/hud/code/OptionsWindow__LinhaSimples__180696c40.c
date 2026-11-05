// OptionsWindow__LinhaSimples__180696c40 @ 0x180696c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow__LinhaSimples__180696c40(undefined8 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ushort uVar9;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if (cRam00000001834b3e96 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3e96 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar3,0);
  if (lVar3 != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
    uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    if (lVar4 != 0) {
      FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
      uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
      if (lVar4 != 0) {
        FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
        plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
        puVar7 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,0x41d00000,0);
        if (plVar6 != (longlong *)0x0) {
          lVar4 = *plVar6;
          uVar1 = *(undefined4 *)(puVar7 + 1);
          uVar5 = *puVar7;
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            uVar9 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar7 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                          0x43) * 0x10 + 0x138 + lVar4);
                goto code_r0x000180696df9;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180696df9:
          uStack_58 = uVar5;
          uStack_50 = uVar1;
          (*(code *)*puVar7)(plVar6,&uStack_58,puVar7[1]);
          lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
          uVar5 = func_0x000182601c10(0,0);
          if (lVar4 != 0) {
            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
            if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
              func_0x000180315660(TI_OptionsWindow);
            }
            lVar4 = *(longlong *)(TI_OptionsWindow + 0xb8);
            uStack_58 = *(undefined8 *)(lVar4 + 0x28);
            uStack_50 = *(undefined4 *)(lVar4 + 0x30);
            uStack_4c = *(undefined4 *)(lVar4 + 0x34);
            uStack_38 = 0;
            uStack_30 = 0;
            uStack_28 = 0;
            func_0x000180cb7cb0(&uStack_38,&uStack_58,MR_System.Nullable<UnityEngine.Color>..ctor);
            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
              func_0x000180315660();
            }
            uStack_48 = uStack_28;
            uStack_58 = uStack_38;
            uStack_50 = (undefined4)uStack_30;
            uStack_4c = uStack_30._4_4_;
            lVar4 = SparkEstilo__Texto(param_1,0xb,&uStack_58,0,0);
            if (lVar4 != 0) {
              lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
              uVar5 = func_0x000182601c10(0x3f800000,0);
              if (lVar8 != 0) {
                FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
                lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                if (lVar8 != 0) {
                  FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
                  UnityEngine_UIElements_VisualElement__Add(lVar3,lVar4,0);
                  return lVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar3 = (*pcVar2)();
  return lVar3;
}

