// CharacterInfoWindow__UpdateBars__1805c1770 @ 0x1805c1770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterInfoWindow__UpdateBars__1805c1770(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort uVar8;
  float fVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float afStackX_8 [2];
  int aiStackX_10 [2];
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  if (cRam00000001834b3aab == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IResolvedStyle);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_System.Math);
    FUN_180315380(LIT_"'weight-'");
    FUN_180315380(LIT_"'%'");
    FUN_180315380(LIT_"'{0}/{1}'");
    FUN_180315380(LIT_"'00.00%'");
    FUN_180315380(LIT_"'0.00'");
    cRam00000001834b3aab = '\x01';
  }
  afStackX_8[0] = 0.0;
  if (param_2 == 0) {
DAT_1805c228c:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_94 = *(undefined4 *)(param_2 + 0x10);
  plVar6 = *(longlong **)(param_1 + 0xa0);
  uVar3 = func_0x000180314670(_DAT_1834c6268,&uStack_94);
  if (param_3 == 0) goto DAT_1805c228c;
  uStack_90 = *(undefined4 *)(param_3 + 0x38);
  uVar4 = func_0x000180314670(_DAT_1834c6268,&uStack_90);
  uVar3 = System_String__Format(LIT_"'{0}/{1}'",uVar3,uVar4,0);
  if (plVar6 == (longlong *)0x0) goto DAT_1805c228c;
  (**(code **)(*plVar6 + 0xe48))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0xe50));
  uStack_8c = *(undefined4 *)(param_2 + 0x14);
  plVar6 = *(longlong **)(param_1 + 0xa8);
  uVar3 = func_0x000180314670(_DAT_1834c6268,&uStack_8c);
  uStack_88 = *(undefined4 *)(param_3 + 0x3c);
  uVar4 = func_0x000180314670(_DAT_1834c6268,&uStack_88);
  uVar3 = System_String__Format(LIT_"'{0}/{1}'",uVar3,uVar4,0);
  if (plVar6 == (longlong *)0x0) goto DAT_1805c228c;
  (**(code **)(*plVar6 + 0xe48))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0xe50));
  uStack_84 = *(undefined4 *)(param_2 + 0x20);
  plVar6 = *(longlong **)(param_1 + 200);
  uVar3 = func_0x000180314670(_DAT_1834c6268,&uStack_84);
  auStack_80[0] = *(undefined4 *)(param_3 + 0x40);
  uVar4 = func_0x000180314670(_DAT_1834c6268,auStack_80);
  uVar3 = System_String__Format(LIT_"'{0}/{1}'",uVar3,uVar4,0);
  if (plVar6 == (longlong *)0x0) goto DAT_1805c228c;
  (**(code **)(*plVar6 + 0xe48))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0xe50));
  iStack_98 = *(int *)(param_3 + 0x7c);
  plVar6 = *(longlong **)(param_1 + 0xb0);
  uVar3 = System_Int32__ToString(&iStack_98,0);
  if (plVar6 == (longlong *)0x0) goto DAT_1805c228c;
  (**(code **)(*plVar6 + 0xe48))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0xe50));
  plVar6 = *(longlong **)(param_1 + 0xb8);
  if (0.0 < *(float *)(param_3 + 0x78)) {
    afStackX_8[0] = *(float *)(param_3 + 0x78) * 100.0;
    uVar3 = System_Single__ToString(afStackX_8,LIT_"'0.00'",0);
    uVar3 = System_String__Concat(uVar3,LIT_"'%'",0);
    if (plVar6 == (longlong *)0x0) goto DAT_1805c2292;
    (**(code **)(*plVar6 + 0xe48))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0xe50));
  }
  else {
    if (plVar6 == (longlong *)0x0) goto DAT_1805c2292;
    (**(code **)(*plVar6 + 0xe48))(plVar6,LIT_"'00.00%'",*(undefined8 *)(*plVar6 + 0xe50));
  }
  plVar6 = *(longlong **)(param_1 + 0xc0);
  if (*(int *)(param_3 + 0x80) < 1) {
    if (plVar6 == (longlong *)0x0) goto DAT_1805c2292;
    (**(code **)(*plVar6 + 0xe48))(plVar6,LIT_"'00.00%'",*(undefined8 *)(*plVar6 + 0xe50));
  }
  else {
    afStackX_8[0] = ((float)*(int *)(param_3 + 0x80) / (float)*(int *)(param_3 + 0x84)) * 100.0;
    uVar3 = System_Single__ToString(afStackX_8,LIT_"'0.00'",0);
    uVar3 = System_String__Concat(uVar3,LIT_"'%'",0);
    if (plVar6 == (longlong *)0x0) goto DAT_1805c2292;
    (**(code **)(*plVar6 + 0xe48))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0xe50));
  }
  if ((*(longlong *)(param_1 + 0xd8) != 0) && (*(longlong *)(param_1 + 0xd0) != 0)) {
    if (*(int *)(TI_System.Math + 0xe4) == 0) {
      func_0x000180315660();
    }
    func_0x00018189ed90();
    if ((*(longlong *)(param_1 + 0xd8) == 0) ||
       (lVar5 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                          (*(longlong *)(param_1 + 0xd8),0), lVar5 == 0)) goto DAT_1805c2292;
    FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar5);
    if (*(longlong *)(param_1 + 0xd0) == 0) goto DAT_1805c2292;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd0),0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar6 == (longlong *)0x0) goto DAT_1805c2292;
    lVar5 = *plVar6;
    uVar3 = *puVar7;
    uVar1 = *(undefined4 *)(puVar7 + 1);
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      uVar8 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0xad) *
                    0x10 + 0x138 + lVar5);
          goto code_r0x0001805c1c19;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805c1c19:
    uStack_78 = uVar3;
    uStack_70 = uVar1;
    (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
  }
  if ((*(longlong *)(param_1 + 0xf0) != 0) && (*(longlong *)(param_1 + 0xe8) != 0)) {
    if (*(int *)(TI_System.Math + 0xe4) == 0) {
      func_0x000180315660();
    }
    func_0x00018189ed90();
    if ((*(longlong *)(param_1 + 0xf0) == 0) ||
       (lVar5 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                          (*(longlong *)(param_1 + 0xf0),0), lVar5 == 0)) goto DAT_1805c2292;
    FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar5);
    if (*(longlong *)(param_1 + 0xe8) == 0) goto DAT_1805c2292;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe8),0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar6 == (longlong *)0x0) goto DAT_1805c2292;
    lVar5 = *plVar6;
    uVar3 = *puVar7;
    uVar1 = *(undefined4 *)(puVar7 + 1);
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      uVar8 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0xad) *
                    0x10 + 0x138 + lVar5);
          goto code_r0x0001805c1d89;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805c1d89:
    uStack_78 = uVar3;
    uStack_70 = uVar1;
    (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
  }
  if ((*(longlong *)(param_1 + 0x100) != 0) && (*(longlong *)(param_1 + 0xf8) != 0)) {
    lVar5 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                      (*(undefined8 *)(param_1 + 0x100),0);
    if (lVar5 == 0) goto DAT_1805c2292;
    FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar5);
    if (*(int *)(TI_System.Math + 0xe4) == 0) {
      func_0x000180315660();
    }
    func_0x00018189ed90();
    if (*(longlong *)(param_1 + 0xf8) == 0) goto DAT_1805c2292;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xf8),0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar6 == (longlong *)0x0) goto DAT_1805c2292;
    lVar5 = *plVar6;
    uVar3 = *puVar7;
    uVar1 = *(undefined4 *)(puVar7 + 1);
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      uVar8 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0xad) *
                    0x10 + 0x138 + lVar5);
          goto code_r0x0001805c1ee9;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805c1ee9:
    uStack_78 = uVar3;
    uStack_70 = uVar1;
    (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
  }
  if ((*(longlong *)(param_1 + 0x120) != 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    lVar5 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                      (*(undefined8 *)(param_1 + 0x120),0);
    if (lVar5 == 0) goto DAT_1805c2292;
    FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar5);
    if (*(longlong *)(param_1 + 0x118) == 0) goto DAT_1805c2292;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x118),0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar6 == (longlong *)0x0) goto DAT_1805c2292;
    lVar5 = *plVar6;
    uVar3 = *puVar7;
    uVar1 = *(undefined4 *)(puVar7 + 1);
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      uVar8 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0xad) *
                    0x10 + 0x138 + lVar5);
          goto code_r0x0001805c2009;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805c2009:
    uStack_78 = uVar3;
    uStack_70 = uVar1;
    (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
  }
  if ((*(longlong *)(param_1 + 0x110) == 0) || (*(longlong *)(param_1 + 0x108) == 0)) {
    return;
  }
  lVar5 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                    (*(undefined8 *)(param_1 + 0x110),0);
  if (lVar5 != 0) {
    FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar5);
    if (*(int *)(TI_System.Math + 0xe4) == 0) {
      func_0x000180315660();
    }
    auVar10._0_8_ = func_0x00018189ed90();
    auVar10._8_4_ = (undefined4)extraout_XMM0_Qb;
    auVar10._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    aiStackX_10[0] = 1;
    do {
      lVar5 = *(longlong *)(param_1 + 0x128);
      uVar3 = System_Int32__ToString(aiStackX_10,0);
      System_String__Concat(LIT_"'weight-'",uVar3,0);
      if (lVar5 == 0) goto DAT_1805c2292;
      UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar5);
      aiStackX_10[0] = aiStackX_10[0] + 1;
    } while (aiStackX_10[0] < 6);
    lVar5 = *(longlong *)(param_1 + 0x128);
    auVar11._4_12_ = auVar10._4_12_;
    auVar11._0_4_ = (float)auVar10._0_8_ * 4.0;
    fVar9 = (float)func_0x0001803a9df0(auVar11._0_8_);
    iStack_98 = (int)fVar9 + 1;
    uVar3 = System_Int32__ToString(&iStack_98,0);
    uVar3 = System_String__Concat(LIT_"'weight-'",uVar3,0);
    if (lVar5 != 0) {
      UnityEngine_UIElements_VisualElement__AddToClassList(lVar5,uVar3,0);
      if (*(longlong *)(param_1 + 0x108) != 0) {
        plVar6 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x108),0);
        puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
        if (plVar6 != (longlong *)0x0) {
          lVar5 = *plVar6;
          uVar3 = *puVar7;
          uVar1 = *(undefined4 *)(puVar7 + 1);
          if (*(ushort *)(lVar5 + 0x12e) != 0) {
            uVar8 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar7 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                          0xad) * 0x10 + 0x138 + lVar5);
                goto code_r0x0001805c21f9;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
          }
          puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805c21f9:
          uStack_78 = uVar3;
          uStack_70 = uVar1;
          (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
          return;
        }
      }
    }
  }
DAT_1805c2292:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

