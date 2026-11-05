// NpcHtmlWindow__ProcessTable__180682a20 @ 0x180682a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__ProcessTable__180682a20
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ushort uVar15;
  ulonglong uVar16;
  longlong *unaff_RBX;
  int iVar17;
  int iStack_1c8;
  longlong lStack_1b8;
  undefined4 uStack_1b0;
  longlong lStack_1a8;
  int iStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  longlong lStack_150;
  longlong lStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_118;
  longlong *plStack_110;
  longlong *plStack_108;
  undefined8 uStack_100;
  longlong *plStack_f8;
  longlong *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [56];
  
  if (cRam00000001834b3e58 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_System.Text.RegularExpressions.Match);
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(LIT_"'height=(\\\\d+)'");
    FUN_180315380(LIT_"'FF'");
    FUN_180315380(LIT_"'align=(left|center|right|justify)'");
    FUN_180315380(LIT_"'bgcolor'");
    FUN_180315380(LIT_"'height'");
    FUN_180315380(LIT_"'FIXWIDTH=(\\\\d+)'");
    FUN_180315380(LIT_"'<td[^>]*>(.*?)</td>'");
    FUN_180315380(LIT_"'left'");
    FUN_180315380(LIT_"'<tr>(.*?)</tr>'");
    FUN_180315380(LIT_"'right'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'width=(\\\\d+)'");
    FUN_180315380(LIT_"'width'");
    FUN_180315380(LIT_"'>'");
    FUN_180315380(LIT_"'center'");
    cRam00000001834b3e58 = '\x01';
  }
  iVar17 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  lStack_198 = 0;
  lStack_160 = 0;
  if ((*(longlong *)(param_1 + 0xb8) == 0) ||
     (lVar5 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(param_1 + 0xb8),0),
     lVar5 == 0)) goto code_r0x000180683b3f;
  lStack_b0 = UnityEngine_UIElements_VisualElement__get_Item(lVar5,0,0);
  if ((*(longlong *)(param_1 + 0x98) == 0) ||
     ((lVar5 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(param_1 + 0x98),0),
      lVar5 == 0 ||
      (lVar5 = UnityEngine_UIElements_VisualElement__get_Item(lVar5,0,0), lStack_150 = lVar5,
      param_3 == 0)))) goto code_r0x000180683b3f;
  lStack_148 = lVar5;
  cVar2 = FUN_1812698d0(param_3,LIT_"'height'",&uStack_178,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
  uVar15 = 0;
  if (cVar2 != '\0') {
    if (lVar5 == 0) goto code_r0x000180683b3f;
    unaff_RBX = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    System_Int32__Parse(uStack_178,0);
    plVar6 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_188);
    if (unaff_RBX == (longlong *)0x0) goto code_r0x000180683b3f;
    lVar10 = *plVar6;
    lVar13 = plVar6[1];
    lVar12 = *unaff_RBX;
    if (*(ushort *)(lVar12 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) + 0x43) *
                    0x10 + 0x138 + lVar12);
          goto code_r0x000180682cc9;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(ushort *)(lVar12 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(unaff_RBX,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180682cc9:
    lStack_1b8 = lVar10;
    uStack_1b0 = (int)lVar13;
    (*(code *)*puVar7)(unaff_RBX,&lStack_1b8,puVar7[1]);
  }
  cVar2 = FUN_1812698d0(param_3,LIT_"'width'",&uStack_170,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
  if (cVar2 == '\0') {
    if (lVar5 != 0) {
      plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
      lStack_1a8 = 0;
      func_0x0001825fc4d0(&lStack_1a8);
      plVar8 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_188,lStack_1a8,0)
      ;
      unaff_RBX = (longlong *)0x0;
      if (plVar6 != (longlong *)0x0) {
        lVar10 = *plVar8;
        lVar13 = plVar8[1];
        lVar12 = *plVar6;
        if (*(ushort *)(lVar12 + 0x12e) != 0) {
          uVar16 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + uVar16 * 0x10) + 0xad) * 0x10 +
                        0x138 + lVar12);
              goto code_r0x000180682da7;
            }
            uVar15 = (short)uVar16 + 1;
            uVar16 = (ulonglong)uVar15;
          } while (uVar15 < *(ushort *)(lVar12 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180682da7:
        lStack_1b8 = lVar10;
        uStack_1b0 = (int)lVar13;
        (*(code *)*puVar7)(plVar6,&lStack_1b8,puVar7[1]);
        goto code_r0x000180682eb9;
      }
    }
    FUN_1803155d0();
code_r0x000180683b4b:
    FUN_1803155d0();
code_r0x000180683b51:
    FUN_1803146d0(unaff_RBX);
code_r0x000180683b59:
    FUN_1803155d0();
code_r0x000180683b5e:
    FUN_1803155d0();
code_r0x000180683b63:
    FUN_1803155d0();
code_r0x000180683b68:
    FUN_1803155d0();
code_r0x000180683b6d:
    FUN_1803155d0();
code_r0x000180683b72:
    FUN_1803155d0();
code_r0x000180683b77:
    FUN_1803155d0();
code_r0x000180683b7c:
    FUN_1803155d0();
code_r0x000180683b81:
    FUN_1803155d0();
code_r0x000180683b86:
    FUN_1803155d0();
code_r0x000180683b8b:
    FUN_1803155d0();
code_r0x000180683b90:
    FUN_1803155d0();
code_r0x000180683b95:
    FUN_1803155d0();
code_r0x000180683b9a:
    FUN_1803155d0();
code_r0x000180683b9f:
    FUN_1803155d0();
code_r0x000180683ba4:
    FUN_1803155d0();
code_r0x000180683ba9:
    FUN_1803155d0();
code_r0x000180683bae:
    FUN_1803155d0();
code_r0x000180683bb3:
    FUN_1803155d0();
code_r0x000180683bb8:
    FUN_1803155d0();
code_r0x000180683bbd:
    FUN_1803155d0();
code_r0x000180683bc2:
    FUN_1803155d0();
code_r0x000180683bc7:
    FUN_1803155d0();
code_r0x000180683bcc:
    FUN_1803155d0();
code_r0x000180683bd1:
    FUN_1803155d0();
code_r0x000180683bd6:
    FUN_1803155d0();
code_r0x000180683bdb:
    FUN_1803155d0();
code_r0x000180683be0:
    FUN_1803155d0();
code_r0x000180683be5:
    FUN_1803155d0();
code_r0x000180683bea:
    FUN_1803155d0();
code_r0x000180683bef:
    FUN_1803155d0();
code_r0x000180683bf4:
    FUN_1803155d0();
    plVar6 = unaff_RBX;
code_r0x000180683bf9:
    FUN_1803155d0();
code_r0x000180683bfe:
    FUN_1803155d0();
code_r0x000180683c03:
    FUN_1803155d0();
code_r0x000180683c08:
    FUN_1803155d0();
    unaff_RBX = plVar6;
code_r0x000180683c0d:
    FUN_1803146d0(unaff_RBX);
code_r0x000180683c15:
    FUN_1803155d0();
code_r0x000180683c1a:
    FUN_1803155d0();
    FUN_180311490();
code_r0x000180683c25:
    FUN_1803155d0();
code_r0x000180683c2a:
    FUN_1803155d0();
code_r0x000180683c2f:
    FUN_1803155d0();
code_r0x000180683c34:
    FUN_1803155d0();
code_r0x000180683c39:
    FUN_1803146d0(unaff_RBX);
code_r0x000180683c41:
    FUN_1803155d0();
code_r0x000180683c46:
    FUN_1803155d0();
code_r0x000180683c4b:
    FUN_1803155d0();
  }
  else {
    if (lVar5 == 0) goto code_r0x000180683b3f;
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    System_Int32__Parse(uStack_170,0);
    plVar8 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_188);
    if (plVar6 == (longlong *)0x0) goto code_r0x000180683b3f;
    lVar10 = *plVar8;
    lVar13 = plVar8[1];
    lVar12 = *plVar6;
    if (*(ushort *)(lVar12 + 0x12e) != 0) {
      uVar16 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
          puVar7 = (undefined8 *)
                   ((longlong)(*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + uVar16 * 0x10) + 0xad) *
                    0x10 + 0x138 + lVar12);
          goto code_r0x000180682e99;
        }
        uVar15 = (short)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
      } while (uVar15 < *(ushort *)(lVar12 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180682e99:
    lStack_1b8 = lVar10;
    uStack_1b0 = (int)lVar13;
    (*(code *)*puVar7)(plVar6,&lStack_1b8,puVar7[1]);
code_r0x000180682eb9:
    cVar2 = FUN_1812698d0(param_3,LIT_"'bgcolor'",&uStack_168,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
    if (cVar2 != '\0') {
      plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
      uVar9 = System_String__Concat(uStack_168,LIT_"'FF'",0);
      puVar7 = (undefined8 *)ColorUtils__HexToColor(&uStack_138,uVar9,0);
      uStack_138 = *puVar7;
      uStack_130 = puVar7[1];
      puVar7 = (undefined8 *)
               UnityEngine_UIElements_StyleColor__op_Implicit(auStack_78,&uStack_138,0);
      if (plVar6 == (longlong *)0x0) goto code_r0x000180683b3f;
      uVar9 = *puVar7;
      uVar11 = puVar7[1];
      uVar3 = *(undefined4 *)(puVar7 + 2);
      lVar10 = *plVar6;
      if (*(ushort *)(lVar10 + 0x12e) != 0) {
        uVar16 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
            puVar7 = (undefined8 *)
                     ((longlong)(*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + uVar16 * 0x10) + 9) *
                      0x10 + 0x138 + lVar10);
            goto code_r0x000180682f99;
          }
          uVar15 = (short)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
        } while (uVar15 < *(ushort *)(lVar10 + 0x12e));
      }
      puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180682f99:
      uStack_138 = uVar9;
      uStack_130 = uVar11;
      uStack_128 = uVar3;
      (*(code *)*puVar7)(plVar6,&uStack_138,puVar7[1]);
    }
    if (*(char *)(param_1 + 0xe0) != '\0') {
      lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
      uVar9 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
      if (lVar10 == 0) goto code_r0x000180683b3f;
      FUN_180005060(5,TI_UnityEngine.UIElements.IStyle,lVar10,uVar9);
    }
    if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar10 = System_Text_RegularExpressions_Regex__Matches(param_4,LIT_"'<tr>(.*?)</tr>'",0x10,0);
    if (lVar10 == 0) {
code_r0x000180683b3f:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iStack_1c8 = 0;
    iStack_1a0 = 0;
    lStack_190 = System_Text_RegularExpressions_MatchCollection__GetEnumerator(lVar10,0);
    uStack_118 = 0;
    plStack_110 = &lStack_190;
    plStack_108 = &lStack_160;
    while (lStack_190 != 0) {
      cVar2 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
      if (cVar2 == '\0') {
        lVar10 = func_0x0001803146b0(*plStack_110,TI_System.IDisposable);
        *plStack_108 = lVar10;
        if (lVar10 != 0) {
          FUN_180002390(0,TI_System.IDisposable,lVar10);
        }
        lVar10 = lStack_b0;
        if ((lStack_b0 != 0) &&
           (UnityEngine_UIElements_VisualElement__Add(lStack_b0,lVar5,0), param_2 != 0)) {
          UnityEngine_UIElements_VisualElement__Add(param_2,lVar10,0);
          return;
        }
        goto code_r0x000180683b3f;
      }
      if (lStack_190 == 0) goto code_r0x000180683c4b;
      unaff_RBX = (longlong *)FUN_1800020c0(1,TI_System.Collections.IEnumerator);
      if (*(longlong *)(param_1 + 0xa0) == 0) goto code_r0x000180683c46;
      lVar5 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(param_1 + 0xa0),0);
      if (lVar5 == 0) goto code_r0x000180683c41;
      lVar10 = UnityEngine_UIElements_VisualElement__get_Item(lVar5,0,0);
      uVar11 = LIT_"'<td[^>]*>(.*?)</td>'";
      uVar9 = LIT_"'width=(\\\\d+)'";
      lStack_c8 = lVar10;
      if (unaff_RBX == (longlong *)0x0) goto code_r0x000180683b4b;
      lVar5 = *unaff_RBX;
      if ((*(byte *)(lVar5 + 0x130) < *(byte *)(TI_System.Text.RegularExpressions.Match + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(lVar5 + 200) + -8 + (ulonglong)*(byte *)(TI_System.Text.RegularExpressions.Match + 0x130) * 8) !=
          TI_System.Text.RegularExpressions.Match)) goto code_r0x000180683c39;
      uStack_b8 = LIT_"'width=(\\\\d+)'";
      uStack_e0 = LIT_"'height=(\\\\d+)'";
      uStack_e8 = LIT_"'FIXWIDTH=(\\\\d+)'";
      uStack_d8 = LIT_"'align=(left|center|right|justify)'";
      uStack_d0 = LIT_"'<td[^>]*>(.*?)</td>'";
      lVar5 = (**(code **)(lVar5 + 0x188))(unaff_RBX,*(undefined8 *)(lVar5 + 400));
      if (lVar5 == 0) goto code_r0x000180683c34;
      lVar5 = func_0x000181db4940(lVar5,1,0);
      if (lVar5 == 0) goto code_r0x000180683c2f;
      unaff_RBX = (longlong *)System_Text_RegularExpressions_Capture__ToString(lVar5,0);
      if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = System_Text_RegularExpressions_Regex__Matches(unaff_RBX,uVar11,0x10,0);
      lStack_c0 = lVar5;
      if (lVar5 == 0) goto code_r0x000180683c2a;
      lStack_1b8 = lVar10;
      lStack_198 = System_Text_RegularExpressions_MatchCollection__GetEnumerator(lVar5,0);
      uStack_100 = 0;
      plStack_f8 = &lStack_198;
      plStack_f0 = &lStack_160;
      while( true ) {
        plVar6 = (longlong *)0x0;
        if (lStack_198 == 0) goto code_r0x000180683c1a;
        cVar2 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
        if (cVar2 == '\0') break;
        if (lStack_198 == 0) goto code_r0x000180683c15;
        unaff_RBX = (longlong *)FUN_1800020c0(1,TI_System.Collections.IEnumerator);
        if (iVar17 == 0) {
          if (unaff_RBX != (longlong *)0x0) {
            if ((*(byte *)(*unaff_RBX + 0x130) < *(byte *)(TI_System.Text.RegularExpressions.Match + 0x130)) ||
               (plVar6 = unaff_RBX,
               *(longlong *)
                (*(longlong *)(*unaff_RBX + 200) + -8 +
                (ulonglong)*(byte *)(TI_System.Text.RegularExpressions.Match + 0x130) * 8) != TI_System.Text.RegularExpressions.Match))
            goto code_r0x000180683c0d;
          }
          iStack_1c8 = System_Text_RegularExpressions_MatchCollection__get_Count(lVar5,0);
          iStack_1a0 = iStack_1c8;
        }
        else if (unaff_RBX != (longlong *)0x0) {
          if ((*(byte *)(*unaff_RBX + 0x130) < *(byte *)(TI_System.Text.RegularExpressions.Match + 0x130)) ||
             (plVar6 = unaff_RBX,
             *(longlong *)
              (*(longlong *)(*unaff_RBX + 200) + -8 +
              (ulonglong)*(byte *)(TI_System.Text.RegularExpressions.Match + 0x130) * 8) != TI_System.Text.RegularExpressions.Match))
          goto code_r0x000180683b51;
        }
        if (*(longlong *)(param_1 + 0xa8) == 0) goto code_r0x000180683c08;
        lVar5 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(param_1 + 0xa8),0)
        ;
        if (lVar5 == 0) goto code_r0x000180683c03;
        lStack_1a8 = UnityEngine_UIElements_VisualElement__get_Item(lVar5,0,0);
        if (plVar6 == (longlong *)0x0) goto code_r0x000180683bfe;
        lVar5 = System_Text_RegularExpressions_Capture__ToString(plVar6,0);
        if (lVar5 == 0) goto code_r0x000180683bf9;
        uVar3 = System_String__IndexOf(lVar5,LIT_"'>'",0);
        uVar11 = System_String__Substring(lVar5,0,uVar3);
        if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
          func_0x000180315660();
        }
        unaff_RBX = (longlong *)System_Text_RegularExpressions_Regex__Match(uVar11,uVar9,0);
        if (unaff_RBX == (longlong *)0x0) goto code_r0x000180683bf4;
        cVar2 = func_0x000181db51d0(unaff_RBX,0);
        lVar10 = LIT_"''";
        if (cVar2 != '\0') {
          lVar10 = (**(code **)(*unaff_RBX + 0x188))(unaff_RBX,*(undefined8 *)(*unaff_RBX + 400));
          if (lVar10 == 0) goto code_r0x000180683b5e;
          lVar10 = func_0x000181db4940(lVar10,1,0);
          if (lVar10 == 0) goto code_r0x000180683b59;
          lVar10 = System_Text_RegularExpressions_Capture__ToString(lVar10,0);
        }
        if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
          func_0x000180315660();
        }
        unaff_RBX = (longlong *)System_Text_RegularExpressions_Regex__Match(uVar11,uStack_e8,0);
        if (unaff_RBX == (longlong *)0x0) goto code_r0x000180683bef;
        cVar2 = func_0x000181db51d0(unaff_RBX,0);
        lVar12 = LIT_"''";
        if (cVar2 != '\0') {
          lVar12 = (**(code **)(*unaff_RBX + 0x188))(unaff_RBX,*(undefined8 *)(*unaff_RBX + 400));
          if (lVar12 == 0) goto code_r0x000180683b68;
          lVar12 = func_0x000181db4940(lVar12,1,0);
          if (lVar12 == 0) goto code_r0x000180683b63;
          lVar12 = System_Text_RegularExpressions_Capture__ToString(lVar12,0);
        }
        if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
          func_0x000180315660();
        }
        unaff_RBX = (longlong *)System_Text_RegularExpressions_Regex__Match(uVar11,uStack_e0,0);
        if (unaff_RBX == (longlong *)0x0) goto code_r0x000180683bea;
        cVar2 = func_0x000181db51d0(unaff_RBX,0);
        lVar13 = LIT_"''";
        if (cVar2 != '\0') {
          lVar13 = (**(code **)(*unaff_RBX + 0x188))(unaff_RBX,*(undefined8 *)(*unaff_RBX + 400));
          if (lVar13 == 0) goto code_r0x000180683b72;
          lVar13 = func_0x000181db4940(lVar13,1,0);
          if (lVar13 == 0) goto code_r0x000180683b6d;
          lVar13 = System_Text_RegularExpressions_Capture__ToString(lVar13,0);
        }
        if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
          func_0x000180315660();
        }
        unaff_RBX = (longlong *)System_Text_RegularExpressions_Regex__Match(uVar11,uStack_d8,0);
        if (unaff_RBX == (longlong *)0x0) goto code_r0x000180683be5;
        cVar2 = func_0x000181db51d0(unaff_RBX,0);
        lVar14 = LIT_"''";
        if (cVar2 != '\0') {
          lVar14 = (**(code **)(*unaff_RBX + 0x188))(unaff_RBX,*(undefined8 *)(*unaff_RBX + 400));
          if (lVar14 == 0) goto code_r0x000180683b7c;
          lVar14 = func_0x000181db4940(lVar14,1,0);
          if (lVar14 == 0) goto code_r0x000180683b77;
          lVar14 = System_Text_RegularExpressions_Capture__ToString(lVar14,0);
        }
        if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
          func_0x000180315660();
        }
        unaff_RBX = (longlong *)System_Text_RegularExpressions_Regex__Match(lVar5,uStack_d0,0);
        if (unaff_RBX == (longlong *)0x0) goto code_r0x000180683be0;
        cVar2 = func_0x000181db51d0(unaff_RBX,0);
        lVar5 = LIT_"''";
        if (cVar2 != '\0') {
          lVar5 = (**(code **)(*unaff_RBX + 0x188))(unaff_RBX,*(undefined8 *)(*unaff_RBX + 400));
          if (lVar5 == 0) goto code_r0x000180683b86;
          lVar5 = func_0x000181db4940(lVar5,1,0);
          if (lVar5 == 0) goto code_r0x000180683b81;
          lVar5 = System_Text_RegularExpressions_Capture__ToString(lVar5,0);
        }
        if (lVar10 == 0) goto code_r0x000180683bdb;
        if (*(int *)(lVar10 + 0x10) < 1) {
          if (lVar12 == 0) goto code_r0x000180683b8b;
          if (0 < *(int *)(lVar12 + 0x10)) {
            uVar4 = System_Int32__Parse(lVar12,0);
            goto code_r0x0001806836da;
          }
code_r0x0001806838c0:
          lVar12 = lStack_1a8;
          if (lStack_1a8 == 0) goto code_r0x000180683bd6;
          unaff_RBX = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lStack_1a8,0);
          uStack_158 = 0;
          func_0x0001825fc4d0(&uStack_158,100.0 / (float)iStack_1c8,1,0);
          puVar7 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78,uStack_158,0);
          if (unaff_RBX == (longlong *)0x0) goto code_r0x000180683bd1;
          uStack_98 = *puVar7;
          uStack_90 = *(undefined4 *)(puVar7 + 1);
          FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,unaff_RBX);
        }
        else {
          uVar4 = System_Int32__Parse(lVar10,0);
code_r0x0001806836da:
          lVar12 = lStack_1a8;
          unaff_RBX = (longlong *)(ulonglong)uVar4;
          if (uVar4 == 0) goto code_r0x0001806838c0;
          if ((int)uVar4 < 0x78) {
            if (lStack_1a8 == 0) goto code_r0x000180683b9a;
            lVar10 = UnityEngine_UIElements_VisualElement__get_style(lStack_1a8,0);
            puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_60);
            if (lVar10 == 0) goto code_r0x000180683b95;
            uStack_a8 = *puVar7;
            uStack_a0 = *(undefined4 *)(puVar7 + 1);
            FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar10,&uStack_a8);
            unaff_RBX = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
            func_0x000182601c10();
            if (unaff_RBX == (longlong *)0x0) goto code_r0x000180683b90;
            FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,unaff_RBX);
          }
        }
        if (lVar13 == 0) goto code_r0x000180683bcc;
        if (0 < *(int *)(lVar13 + 0x10)) {
          if (lVar12 == 0) goto code_r0x000180683ba4;
          unaff_RBX = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
          System_Int32__Parse(lVar13,0);
          puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_138);
          if (unaff_RBX == (longlong *)0x0) goto code_r0x000180683b9f;
          uStack_188 = *puVar7;
          uStack_180 = *(undefined4 *)(puVar7 + 1);
          FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,unaff_RBX);
        }
        cVar2 = func_0x0001817058a0(lVar14,LIT_"'left'",0);
        if (cVar2 == '\0') {
          cVar2 = func_0x0001817058a0(lVar14,LIT_"'center'",0);
          if (cVar2 != '\0') {
            if (lVar12 != 0) {
              unaff_RBX = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
              FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
              if (unaff_RBX != (longlong *)0x0) goto code_r0x00018068385c;
              goto code_r0x000180683bb3;
            }
            goto code_r0x000180683bb8;
          }
          cVar2 = func_0x0001817058a0(lVar14,LIT_"'right'",0);
          if (cVar2 != '\0') {
            if (lVar12 != 0) {
              unaff_RBX = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
              FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
              if (unaff_RBX != (longlong *)0x0) goto code_r0x00018068385c;
              goto code_r0x000180683bbd;
            }
            goto code_r0x000180683bc2;
          }
        }
        else {
          if (lVar12 == 0) goto code_r0x000180683bae;
          unaff_RBX = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
          FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
          if (unaff_RBX == (longlong *)0x0) goto code_r0x000180683ba9;
code_r0x00018068385c:
          FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,unaff_RBX);
        }
        lVar10 = lStack_c8;
        if (lStack_c8 == 0) goto code_r0x000180683bc7;
        UnityEngine_UIElements_VisualElement__Add(lStack_c8,lVar12,0);
        NpcHtmlWindow__ProcessHtmlContent__1806825c0(param_1,lVar12,lVar5);
        lVar5 = lStack_c0;
        uVar9 = uStack_b8;
        iVar17 = iStack_1c8;
      }
      FUN_1803da000(&plStack_f8);
      lVar5 = lStack_150;
      if (lStack_150 == 0) goto code_r0x000180683c25;
      UnityEngine_UIElements_VisualElement__Add(lStack_150,lVar10,0);
    }
  }
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

