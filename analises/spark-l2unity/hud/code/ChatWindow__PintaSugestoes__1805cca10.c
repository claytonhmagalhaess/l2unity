// ChatWindow__PintaSugestoes__1805cca10 @ 0x1805cca10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__PintaSugestoes__1805cca10(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ushort uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [104];
  
  if (cRam00000001834b3ad9 == '\0') {
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Item);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Tab'");
    cRam00000001834b3ad9 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    return;
  }
  UnityEngine_UIElements_VisualElement__Clear(*(undefined8 *)(param_1 + 0xb0),0);
  if (*(char *)(param_1 + 0x88) == '\0') {
code_r0x0001805cd1ef:
    if (*(longlong *)(param_1 + 0xb0) == 0) goto DAT_1805cd294;
    lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
    uVar8 = 1;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0xa0);
    if (lVar6 == 0) goto DAT_1805cd294;
    if (*(int *)(lVar6 + 0x18) == 0) goto code_r0x0001805cd1ef;
    iVar1 = *(int *)(lVar6 + 0x18);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar2 = *(int *)(param_1 + 0xa8);
      lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
      if (lVar6 == 0) goto DAT_1805cd294;
      UnityEngine_UIElements_VisualElement__set_pickingMode(lVar6,1,0);
      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
      if (plVar7 == (longlong *)0x0) goto DAT_1805cd294;
      lVar10 = *plVar7;
      if (*(ushort *)(lVar10 + 0x12e) != 0) {
        uVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar9 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x39)
                      * 0x10 + 0x138 + lVar10);
            goto code_r0x0001805ccc49;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x39);
code_r0x0001805ccc49:
      (*(code *)*puVar9)(plVar7,uVar8,puVar9[1]);
      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
      if (plVar7 == (longlong *)0x0) goto DAT_1805cd294;
      lVar10 = *plVar7;
      if (*(ushort *)(lVar10 + 0x12e) != 0) {
        uVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar9 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 3) *
                      0x10 + 0x138 + lVar10);
            goto code_r0x0001805cccd9;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,3);
code_r0x0001805cccd9:
      (*(code *)*puVar9)(plVar7,uVar8,puVar9[1]);
      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      puVar9 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a0,0x40800000,0);
      if (plVar7 == (longlong *)0x0) goto DAT_1805cd294;
      lVar10 = *plVar7;
      uVar8 = *puVar9;
      uVar13 = *(undefined4 *)(puVar9 + 1);
      if (*(ushort *)(lVar10 + 0x12e) != 0) {
        uVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar9 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x61)
                      * 0x10 + 0x138 + lVar10);
            goto code_r0x0001805ccd69;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x0001805ccd69:
      uStack_e8 = uVar8;
      uStack_e0 = uVar13;
      (*(code *)*puVar9)(plVar7,&uStack_e8,puVar9[1]);
      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      puVar9 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(auStack_90,0x40800000,0);
      if (plVar7 == (longlong *)0x0) goto DAT_1805cd294;
      lVar10 = *plVar7;
      uVar8 = *puVar9;
      uVar13 = *(undefined4 *)(puVar9 + 1);
      if (*(ushort *)(lVar10 + 0x12e) != 0) {
        uVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar9 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 99) *
                      0x10 + 0x138 + lVar10);
            goto code_r0x0001805ccdf9;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,99);
code_r0x0001805ccdf9:
      uStack_d8 = uVar8;
      uStack_d0 = uVar13;
      (*(code *)*puVar9)(plVar7,&uStack_d8,puVar9[1]);
      if (iVar1 == iVar2) {
        lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
        uStack_108 = 0x3f8000003f800000;
        uStack_100 = 0x3dcccccd3f800000;
        puVar9 = (undefined8 *)
                 UnityEngine_UIElements_StyleColor__op_Implicit(auStack_b8,&uStack_108,0);
        if (lVar10 == 0) goto DAT_1805cd294;
        uStack_108 = *puVar9;
        uStack_100 = puVar9[1];
        uStack_f8 = *(undefined4 *)(puVar9 + 2);
        FUN_180004fc0(9,TI_UnityEngine.UIElements.IStyle,lVar10,&uStack_108);
      }
      if (*(longlong *)(param_1 + 0xa0) == 0) goto DAT_1805cd294;
      uVar8 = FUN_180bbafe0(*(longlong *)(param_1 + 0xa0),iVar1,MR_System.Collections.Generic.List<string>.get_Item);
      lVar10 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
      UnityEngine_UIElements_Label___ctor(lVar10,uVar8,0);
      if (lVar10 == 0) goto DAT_1805cd294;
      UnityEngine_UIElements_VisualElement__set_pickingMode(lVar10,1,0);
      iVar3 = *(int *)(param_1 + 0x114);
      if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      ChatWindow__Fonte__1805c7120(lVar10,iVar3 + 0xb,0);
      lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
      uVar8 = func_0x000182601c10(0x3f800000,0);
      if (lVar11 == 0) goto DAT_1805cd294;
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar11,uVar8);
      lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
      if (iVar1 == iVar2) {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uVar13 = *(undefined4 *)(lVar4 + 0x60);
        uVar14 = *(undefined4 *)(lVar4 + 100);
        uVar15 = *(undefined4 *)(lVar4 + 0x68);
        uVar16 = *(undefined4 *)(lVar4 + 0x6c);
      }
      else {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uVar13 = *(undefined4 *)(lVar4 + 0x40);
        uVar14 = *(undefined4 *)(lVar4 + 0x44);
        uVar15 = *(undefined4 *)(lVar4 + 0x48);
        uVar16 = *(undefined4 *)(lVar4 + 0x4c);
      }
      uStack_108 = CONCAT44(uVar14,uVar13);
      uStack_100 = CONCAT44(uVar16,uVar15);
      puVar9 = (undefined8 *)
               UnityEngine_UIElements_StyleColor__op_Implicit(auStack_b8,&uStack_108,0);
      if (lVar11 == 0) goto DAT_1805cd294;
      uStack_108 = *puVar9;
      uStack_100 = puVar9[1];
      uStack_f8 = *(undefined4 *)(puVar9 + 2);
      FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_108);
      UnityEngine_UIElements_VisualElement__Add(lVar6,lVar10);
      if (iVar1 == iVar2) {
        lVar10 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
        UnityEngine_UIElements_Label___ctor(lVar10,LIT_"'Tab'",0);
        if (lVar10 == 0) goto DAT_1805cd294;
        UnityEngine_UIElements_VisualElement__set_pickingMode(lVar10,1,0);
        if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        ChatWindow__Fonte__1805c7120(lVar10,9,0);
        lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
        puVar9 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(auStack_80,0x41200000,0);
        if (lVar11 == 0) goto DAT_1805cd294;
        uStack_c0 = *(undefined4 *)(puVar9 + 1);
        uStack_c8 = *puVar9;
        FUN_1800050f0(0x4d,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_c8);
        lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStack_108 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
        uStack_100 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
        puVar9 = (undefined8 *)
                 UnityEngine_UIElements_StyleColor__op_Implicit(auStack_b8,&uStack_108,0);
        if (lVar11 == 0) goto DAT_1805cd294;
        uStack_108 = *puVar9;
        uStack_100 = puVar9[1];
        uStack_f8 = *(undefined4 *)(puVar9 + 2);
        FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_108);
        UnityEngine_UIElements_VisualElement__Add(lVar6,lVar10);
      }
      if (*(longlong *)(param_1 + 0xb0) == 0) goto DAT_1805cd294;
      UnityEngine_UIElements_VisualElement__Add();
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) goto DAT_1805cd294;
    lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
    uVar8 = 0;
  }
  uVar8 = FUN_180eb5810(uVar8,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (lVar6 != 0) {
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar8);
    return;
  }
DAT_1805cd294:
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

