// VipWindow__ShowWindow__180789180 @ 0x180789180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VipWindow__ShowWindow__180789180(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  ushort uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  longlong *aplStackX_8 [2];
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong *aplStack_148 [2];
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  
  if (cRam00000001834b43a6 == '\0') {
    FUN_180315380(LIT_"'window_open'");
    cRam00000001834b43a6 = '\x01';
  }
  L2Window__ShowWindow__18079a6b0(param_1,0);
  (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  if (DAT_1834b301f == '\0') {
    FUN_180315380(TI_AudioManager);
    DAT_1834b301f = '\x01';
  }
  if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
    AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_open'",0);
  }
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
    L2GameUI__WindowOpened__180776020(**(longlong **)(TI_L2GameUI + 0xb8),param_1,0);
  }
  aplStackX_8[0] = param_1;
  if (cRam00000001834b43af == '\0') {
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkVip);
    FUN_180315380(TI_string__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(TI_VipWindow);
    FUN_180315380(LIT_"'Your rates (level {0})'");
    FUN_180315380(LIT_"'x'");
    FUN_180315380(LIT_"'No VIP'");
    FUN_180315380(LIT_"'Your account has no VIP.'");
    FUN_180315380(LIT_"'-'");
    FUN_180315380(LIT_"'Vip/VIPmark_'");
    FUN_180315380(LIT_"'0.##'");
    FUN_180315380(LIT_"'Your rates'");
    FUN_180315380(LIT_"'Ticket: '");
    FUN_180315380(LIT_"'VIP Level {0}'");
    cRam00000001834b43af = '\x01';
  }
  VipWindow__AtualizaInsignia(param_1,0);
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  if (*(int *)(TI_SparkVip + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b4416 == '\0') {
    FUN_180315380(TI_SparkVip);
    cRam00000001834b4416 = '\x01';
  }
  if (*(int *)(TI_SparkVip + 0xe4) == 0) {
    func_0x000180315660();
  }
  aiStackX_18[0] = **(int **)(TI_SparkVip + 0xb8);
  if ((aiStackX_18[0] < 0) || (aiStackX_18[0] < 8)) {
    if (aiStackX_18[0] < 0) {
      aiStackX_18[0] = 0;
    }
  }
  else {
    aiStackX_18[0] = 7;
  }
  uVar19 = 0;
  if (param_1[0x13] != 0) {
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1[0x13],0);
    uVar10 = System_Int32__ToString(aiStackX_18,0);
    uVar10 = System_String__Concat(LIT_"'Vip/VIPmark_'",uVar10,0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar10 = SparkEstilo__Textura__180723790(uVar10,0);
    puVar11 = (undefined8 *)
              UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_118,uVar10,0);
    if (plVar9 != (longlong *)0x0) {
      uVar4 = *puVar11;
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      uVar10 = puVar11[4];
      lVar12 = *plVar9;
      if (*(ushort *)(lVar12 + 0x12e) != 0) {
        uVar15 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar11 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) + 0xb)
                       * 0x10 + 0x138 + lVar12);
            goto code_r0x000180783019;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(ushort *)(lVar12 + 0x12e));
      }
      puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180783019:
      uStack_118 = uVar4;
      uStack_110 = uVar5;
      uStack_108 = uVar6;
      uStack_100 = uVar7;
      uStack_f8 = uVar10;
      (*(code *)*puVar11)(plVar9,&uStack_118,puVar11[1]);
      plVar9 = (longlong *)param_1[0x18];
      uVar10 = LIT_"'No VIP'";
      if (0 < aiStackX_18[0]) {
        aiStackX_20[0] = aiStackX_18[0];
        uVar10 = func_0x000180314670(_DAT_1834c6268,aiStackX_20);
        uVar10 = System_String__Format(LIT_"'VIP Level {0}'",uVar10,0);
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0xe48))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0xe50));
        iVar20 = aiStackX_18[0];
        plVar9 = (longlong *)param_1[0x19];
        uVar10 = LIT_"'Your account has no VIP.'";
        if (0 < aiStackX_18[0]) {
          if (*(int *)(TI_SparkVip + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar10 = SparkVip__NomeDoNivel(iVar20,0);
          uVar10 = System_String__Concat(LIT_"'Ticket: '",uVar10,0);
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0xe48))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0xe50));
          if ((param_1[0x14] != 0) &&
             (lVar12 = UnityEngine_UIElements_VisualElement__Children(param_1[0x14],0), lVar12 != 0)
             ) {
            iVar20 = 1;
            aplStack_148[0] = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>,lVar12);
            uStack_158 = 0;
            uStack_150 = aplStack_148;
            while (aplStack_148[0] != (longlong *)0x0) {
              cVar8 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
              plVar9 = aplStack_148[0];
              if (cVar8 == '\0') {
                if (aplStack_148[0] != (longlong *)0x0) {
                  FUN_180002390(0,TI_System.IDisposable,aplStack_148[0]);
                }
                VipWindow__AtualizaTempo(param_1,0);
                bVar2 = 0 < aiStackX_18[0];
                lVar12 = func_0x000180314710(TI_string__,8);
                uVar17 = uVar19;
                goto code_r0x000180783310;
              }
              if (aplStack_148[0] == (longlong *)0x0) goto code_r0x000180783a9d;
              lVar12 = *aplStack_148[0];
              if (*(ushort *)(lVar12 + 0x12e) != 0) {
                uVar15 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                      TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>) {
                    puVar11 = (undefined8 *)
                              ((longlong)
                               *(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10)
                               * 0x10 + 0x138 + lVar12);
                    goto code_r0x000180783212;
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 < *(ushort *)(lVar12 + 0x12e));
              }
              puVar11 = (undefined8 *)FUN_180312860(aplStack_148[0],TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>,0);
code_r0x000180783212:
              lVar12 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              if (lVar12 == 0) goto code_r0x000180783a98;
              lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
              if (aiStackX_18[0] < iVar20) {
                uVar21 = 0x3e99999a;
              }
              else {
                uVar21 = 0x3f800000;
              }
              uVar10 = func_0x000182601c10(uVar21,0);
              if (lVar12 == 0) goto code_r0x000180783a92;
              FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle,lVar12,uVar10);
              iVar20 = iVar20 + 1;
            }
            goto code_r0x000180783aa2;
          }
        }
      }
    }
  }
  goto code_r0x000180783a8c;
  while( true ) {
    uVar16 = (uint)uVar17;
    if (*(uint *)(lVar13 + 0x18) <= uVar16) goto code_r0x000180783ab4;
    uVar10 = LIT_"'-'";
    if (0.0 < *(float *)(lVar13 + 0x20 + uVar17 * 4)) {
      if (*(int *)(TI_SparkVip + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar13 = *(longlong *)(*(longlong *)(TI_SparkVip + 0xb8) + 0x10);
      if (lVar13 == 0) goto code_r0x000180783a8c;
      if (*(uint *)(lVar13 + 0x18) <= uVar16) goto code_r0x000180783ab4;
      uVar10 = System_Single__ToString(lVar13 + uVar17 * 4 + 0x20,LIT_"'0.##'",0);
      uVar10 = System_String__Concat(LIT_"'x'",uVar10);
    }
    if (lVar12 == 0) goto code_r0x000180783a8c;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x000180783ab4;
    *(undefined8 *)(lVar12 + 0x20 + uVar17 * 8) = uVar10;
    func_0x000180314690(lVar12 + (uVar17 + 4) * 8);
    uVar17 = (ulonglong)(uVar16 + 1);
    uVar18 = uVar19;
    if (7 < (int)(uVar16 + 1)) break;
code_r0x000180783310:
    if (*(int *)(TI_SparkVip + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar13 = *(longlong *)(*(longlong *)(TI_SparkVip + 0xb8) + 0x10);
    if (lVar13 == 0) goto code_r0x000180783a8c;
  }
  do {
    lVar13 = param_1[0x1d];
    if (lVar13 == 0) goto code_r0x000180783a8c;
    uVar16 = (uint)uVar18;
    if (((**(uint **)(lVar13 + 0x10) <= uVar16) ||
        (lVar1 = *(longlong *)(*(uint **)(lVar13 + 0x10) + 4), (uint)lVar1 < 2)) ||
       (*(uint *)(lVar12 + 0x18) <= uVar16 * 2)) goto code_r0x000180783ab4;
    plVar9 = *(longlong **)(lVar13 + 0x28 + uVar18 * lVar1 * 8);
    if (plVar9 == (longlong *)0x0) goto code_r0x000180783a8c;
    (**(code **)(*plVar9 + 0xe48))
              (plVar9,*(undefined8 *)(lVar12 + 0x20 + (longlong)(int)(uVar16 * 2) * 8),
               *(undefined8 *)(*plVar9 + 0xe50));
    lVar13 = param_1[0x1d];
    if (lVar13 == 0) goto code_r0x000180783a8c;
    if (((**(uint **)(lVar13 + 0x10) <= uVar16) ||
        (lVar1 = *(longlong *)(*(uint **)(lVar13 + 0x10) + 4), (int)lVar1 == 0)) ||
       (*(uint *)(lVar12 + 0x18) <= uVar16 * 2 + 1)) goto code_r0x000180783ab4;
    plVar9 = *(longlong **)(lVar13 + 0x20 + uVar18 * lVar1 * 8);
    if (plVar9 == (longlong *)0x0) goto code_r0x000180783a8c;
    (**(code **)(*plVar9 + 0xe48))
              (plVar9,*(undefined8 *)(lVar12 + 0x28 + (longlong)(int)(uVar16 * 2) * 8),
               *(undefined8 *)(*plVar9 + 0xe50));
    lVar13 = param_1[0x1d];
    if (lVar13 == 0) goto code_r0x000180783a8c;
    if ((**(uint **)(lVar13 + 0x10) <= uVar16) ||
       (lVar1 = *(longlong *)(*(uint **)(lVar13 + 0x10) + 4), (uint)lVar1 < 2))
    goto code_r0x000180783ab4;
    lVar13 = *(longlong *)(lVar13 + 0x28 + uVar18 * lVar1 * 8);
    if (lVar13 == 0) goto code_r0x000180783a8c;
    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
    if (bVar2) {
      if (*(int *)(TI_VipWindow + 0xe4) == 0) {
        func_0x000180315660(TI_VipWindow);
      }
      lVar1 = *(longlong *)(TI_VipWindow + 0xb8);
      uStack_178 = *(undefined4 *)(lVar1 + 8);
      uStack_174 = *(undefined4 *)(lVar1 + 0xc);
      uStack_170 = *(undefined4 *)(lVar1 + 0x10);
      uStack_16c = *(undefined4 *)(lVar1 + 0x14);
    }
    else {
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar1 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uStack_178 = *(undefined4 *)(lVar1 + 0x40);
      uStack_174 = *(undefined4 *)(lVar1 + 0x44);
      uStack_170 = *(undefined4 *)(lVar1 + 0x48);
      uStack_16c = *(undefined4 *)(lVar1 + 0x4c);
    }
    puVar14 = (undefined4 *)
              UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_138,&uStack_178,0);
    if (lVar13 == 0) goto code_r0x000180783a8c;
    uStack_178 = *puVar14;
    uStack_174 = puVar14[1];
    uStack_170 = puVar14[2];
    uStack_16c = puVar14[3];
    uStack_168 = puVar14[4];
    FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_178);
    lVar13 = param_1[0x1d];
    if (lVar13 == 0) goto code_r0x000180783a8c;
    if ((**(uint **)(lVar13 + 0x10) <= uVar16) ||
       (lVar1 = *(longlong *)(*(uint **)(lVar13 + 0x10) + 4), (int)lVar1 == 0))
    goto code_r0x000180783ab4;
    lVar13 = *(longlong *)(lVar13 + 0x20 + uVar18 * lVar1 * 8);
    if (lVar13 == 0) goto code_r0x000180783a8c;
    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
    if (bVar2) {
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar1 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uStack_178 = *(undefined4 *)(lVar1 + 0x50);
      uStack_174 = *(undefined4 *)(lVar1 + 0x54);
      uStack_170 = *(undefined4 *)(lVar1 + 0x58);
      uStack_16c = *(undefined4 *)(lVar1 + 0x5c);
    }
    else {
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar1 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uStack_178 = *(undefined4 *)(lVar1 + 0x40);
      uStack_174 = *(undefined4 *)(lVar1 + 0x44);
      uStack_170 = *(undefined4 *)(lVar1 + 0x48);
      uStack_16c = *(undefined4 *)(lVar1 + 0x4c);
    }
    puVar14 = (undefined4 *)
              UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_138,&uStack_178,0);
    if (lVar13 == 0) goto code_r0x000180783a8c;
    uStack_178 = *puVar14;
    uStack_174 = puVar14[1];
    uStack_170 = puVar14[2];
    uStack_16c = puVar14[3];
    uStack_168 = puVar14[4];
    FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_178);
    uVar18 = (ulonglong)(uVar16 + 1);
  } while ((int)(uVar16 + 1) < 4);
  do {
    uVar16 = (uint)uVar19;
    lVar12 = param_1[0x1e];
    if (lVar12 == 0) goto code_r0x000180783a8c;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) {
code_r0x000180783ab4:
      FUN_1803155c0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar12 = *(longlong *)(lVar12 + 0x20 + uVar19 * 8);
    if (lVar12 == 0) goto code_r0x000180783a8c;
    lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
    if ((uVar16 == 1) == bVar2) {
      uVar21 = 0x3f47ae14;
      uVar22 = 0x3f28f5c3;
      uVar23 = 0x3eb33333;
      uVar24 = 0x3df5c28f;
    }
    else {
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
    }
    uStack_158 = CONCAT44(uVar22,uVar21);
    uStack_150 = (longlong **)CONCAT44(uVar24,uVar23);
    puVar14 = (undefined4 *)
              UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_118,&uStack_158,0);
    if (lVar12 == 0) goto code_r0x000180783a8c;
    uStack_138 = *puVar14;
    uStack_134 = puVar14[1];
    uStack_130 = puVar14[2];
    uStack_12c = puVar14[3];
    uStack_128 = puVar14[4];
    FUN_180004fc0(9,TI_UnityEngine.UIElements.IStyle,lVar12,&uStack_138);
    lVar12 = param_1[0x1e];
    if (lVar12 == 0) goto code_r0x000180783a8c;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x000180783ab4;
    uVar10 = *(undefined8 *)(lVar12 + 0x20 + uVar19 * 8);
    if ((uVar16 == 1) == bVar2) {
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar12 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uVar21 = *(undefined4 *)(lVar12 + 0x20);
      uVar22 = *(undefined4 *)(lVar12 + 0x24);
      uVar23 = *(undefined4 *)(lVar12 + 0x28);
      uVar24 = *(undefined4 *)(lVar12 + 0x2c);
    }
    else {
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
    }
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStack_178 = uVar21;
    uStack_174 = uVar22;
    uStack_170 = uVar23;
    uStack_16c = uVar24;
    SparkEstilo__Borda__18071da60(uVar10,&uStack_178,0x3f800000,0x40400000,0);
    uVar19 = (ulonglong)(uVar16 + 1);
  } while ((int)(uVar16 + 1) < 2);
  plVar9 = (longlong *)param_1[0x1b];
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  uVar10 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar8 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  uVar10 = LIT_"'Your rates'";
  if (cVar8 != '\0') {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) goto code_r0x000180783a8c;
    uVar10 = LIT_"'Your rates'";
    if (*(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x40) != 0) {
      if (DAT_1834b2f32 == '\0') {
        FUN_180315380(TI_PlayerEntity);
        DAT_1834b2f32 = '\x01';
      }
      if ((**(longlong **)(TI_PlayerEntity + 0xb8) == 0) ||
         (lVar12 = *(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x40), lVar12 == 0)) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      aplStackX_8[0] = (longlong *)CONCAT44(aplStackX_8[0]._4_4_,*(undefined4 *)(lVar12 + 0x10));
      uVar10 = func_0x000180314670(_DAT_1834c6268,aplStackX_8);
      uVar10 = System_String__Format(LIT_"'Your rates (level {0})'",uVar10,0);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0xe48))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0xe50));
    if (param_1[0x16] != 0) {
      lVar12 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x16],0);
      if (*(int *)(TI_SparkVip + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b4417 == '\0') {
        FUN_180315380(TI_SparkVip);
        cRam00000001834b4417 = '\x01';
      }
      if (*(int *)(TI_SparkVip + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar10 = FUN_180eb5810(*(char *)(*(longlong *)(TI_SparkVip + 0xb8) + 0x18) == '\0',
                             MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar12 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar12,uVar10);
        VipWindow__AtualizaPresenca(param_1,0);
        return;
      }
    }
  }
code_r0x000180783a8c:
  FUN_1803155d0();
code_r0x000180783a92:
  FUN_1803155d0();
code_r0x000180783a98:
  FUN_1803155d0();
code_r0x000180783a9d:
  FUN_1803155d0();
code_r0x000180783aa2:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

