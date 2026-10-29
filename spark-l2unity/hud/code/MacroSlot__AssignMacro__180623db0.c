// MacroSlot__AssignMacro__180623db0 @ 0x180623db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MacroSlot__AssignMacro__180623db0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ushort uVar10;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  ulonglong uVar11;
  
  if (cRam00000001834b3d0c == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkMacros);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'MacroSigla'");
    FUN_180315380(LIT_"'empty'");
    cRam00000001834b3d0c = '\x01';
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) {
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = FUN_180b0e310(lVar4,LIT_"'MacroSigla'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    if (lVar4 != 0) {
      UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(lVar4,0);
    }
  }
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x59) = 0;
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x48),0);
      puVar6 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,1,0);
      if (lVar4 == 0) goto code_r0x000180624327;
      uStack_98 = *puVar6;
      uStack_90 = puVar6[1];
      uStack_88 = puVar6[2];
      uStack_80 = puVar6[3];
      uStack_78 = puVar6[4];
      FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar4,&uStack_98);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    if (*(longlong *)(param_1 + 0x78) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x59) = 1;
    }
    if (*(longlong *)(param_1 + 0x40) == 0) {
code_r0x000180624327:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine_UIElements_VisualElement__RemoveFromClassList
              (*(longlong *)(param_1 + 0x40),LIT_"'empty'",0);
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x48),0);
      uVar1 = *(undefined4 *)(param_2 + 0x30);
      if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = SparkMacros__Icone__180474ba0(uVar1,0);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = SparkEstilo__Textura__180723790(uVar5,0);
      puVar6 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar5,0)
      ;
      if (lVar4 == 0) goto code_r0x000180624327;
      uStack_98 = *puVar6;
      uStack_90 = puVar6[1];
      uStack_88 = puVar6[2];
      uStack_80 = puVar6[3];
      uStack_78 = puVar6[4];
      FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar4,&uStack_98);
      cVar3 = func_0x000181707e50(*(undefined8 *)(param_2 + 0x28),0);
      if (cVar3 == '\0') {
        uVar5 = *(undefined8 *)(param_2 + 0x28);
        uStack_68 = 0x3f8000003f800000;
        uStack_60 = 0x3f8000003f800000;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = uStack_88 & 0xffffffff00000000;
        func_0x000180cb7cb0(&uStack_98,&uStack_68,MR_System.Nullable<UnityEngine.Color>..ctor);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar11 = 0;
        uStack_58 = (undefined4)uStack_88;
        uStack_68 = uStack_98;
        uStack_60 = uStack_90;
        lVar4 = SparkEstilo__Texto__180722af0(uVar5,9,&uStack_68,1,0);
        if (lVar4 == 0) {
code_r0x00018062432d:
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UnityEngine_UIElements_VisualElement__set_name(lVar4,LIT_"'MacroSigla'",0);
        lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
        if (lVar7 == 0) goto code_r0x00018062432d;
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar7,uVar5);
        lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_68);
        if (lVar8 == 0) goto code_r0x00018062432d;
        uVar5 = *puVar6;
        uVar1 = *(undefined4 *)(puVar6 + 1);
        uStack_a8 = uVar5;
        uStack_a0 = uVar1;
        FUN_1800050f0(0x69,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_a8);
        if (lVar7 == 0) goto code_r0x00018062432d;
        uStack_a8 = uVar5;
        uStack_a0 = uVar1;
        FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_a8);
        lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_68);
        if (lVar8 == 0) goto code_r0x00018062432d;
        uVar5 = *puVar6;
        uVar1 = *(undefined4 *)(puVar6 + 1);
        uStack_a8 = uVar5;
        uStack_a0 = uVar1;
        FUN_1800050f0(0x2d,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_a8);
        if (lVar7 == 0) goto code_r0x00018062432d;
        uStack_a8 = uVar5;
        uStack_a0 = uVar1;
        FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_a8);
        plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        uVar5 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
        if (plVar9 == (longlong *)0x0) goto code_r0x00018062432d;
        lVar7 = *plVar9;
        if (*(ushort *)(lVar7 + 0x12e) != 0) {
          do {
            if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
              puVar6 = (undefined8 *)
                       ((longlong)(*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar11 * 0x10) + 0x9d)
                        * 0x10 + 0x138 + lVar7);
              goto code_r0x000180624206;
            }
            uVar10 = (short)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
          } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
        }
        puVar6 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x9d);
code_r0x000180624206:
        (*(code *)*puVar6)(plVar9,uVar5,puVar6[1]);
        UnityEngine_UIElements_VisualElement__set_pickingMode(lVar4,1,0);
        if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x00018062432d;
        UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),lVar4,0);
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x58);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      func_0x000180314690(lVar4 + 0x18);
    }
  }
  return;
}

