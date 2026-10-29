// SparkMapaWindow__MostraAbaRaid__18063fa70 @ 0x18063fa70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__MostraAbaRaid__18063fa70(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  char cVar10;
  undefined1 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ushort uVar19;
  uint uVar20;
  undefined8 unaff_XMM8_Qa;
  longlong unaff_XMM8_Qb;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  float unaff_XMM10_Dc;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [32];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  longlong lStack_40;
  
  if (cRam00000001834b3d2f == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_SparkMapaWindow.Boss__);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.Clear);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkMapaWindow.__c__DisplayClass170_0._MostraAbaRaid_b__0);
    FUN_180315380(TI_SparkMapaWindow.<>c__DisplayClass170_0);
    FUN_180315380(MR_System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>..ctor);
    FUN_180315380(LIT_"'Radar'");
    FUN_180315380(LIT_"'Lv. '");
    cRam00000001834b3d2f = '\x01';
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    fStack_88 = unaff_XMM10_Da;
    fStack_84 = unaff_XMM10_Db;
    fStack_80 = unaff_XMM10_Dc;
    uStack_68 = unaff_XMM8_Qa;
    lStack_60 = unaff_XMM8_Qb;
    UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x1c0),0);
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    if (lVar12 != 0) {
      iVar4 = *(int *)(lVar12 + 0x18);
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      *(undefined4 *)(lVar12 + 0x18) = 0;
      if (0 < iVar4) {
        System_Array__Clear(*(undefined8 *)(lVar12 + 0x10),0,iVar4,0);
      }
      lVar12 = *(longlong *)(param_1 + 0x1b0);
      if (lVar12 != 0) {
        if (param_2 == 0) {
          lVar12 = *(longlong *)(lVar12 + 0x10);
        }
        else {
          lVar12 = *(longlong *)(lVar12 + 0x18);
        }
        if (lVar12 == 0) {
          lVar12 = func_0x000180314710(TI_SparkMapaWindow.Boss__,0);
          if (lVar12 == 0) goto code_r0x000180640619;
        }
        uVar20 = 0;
        while ((int)uVar20 < *(int *)(lVar12 + 0x18)) {
          if (*(uint *)(lVar12 + 0x18) <= uVar20) {
code_r0x000180640625:
            FUN_1803155c0();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar7 = *(longlong *)(lVar12 + 0x20 + (longlong)(int)uVar20 * 8);
          lVar13 = func_0x000180315580(TI_SparkMapaWindow.<>c__DisplayClass170_0);
          SparkMapaWindow_Loja___ctor__1803f01b0(lVar13,0);
          if (lVar13 == 0) {
code_r0x00018064061f:
            FUN_1803155d0();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          *(longlong *)(lVar13 + 0x18) = param_1;
          func_0x000180314690(lVar13 + 0x18,param_1);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar14 = SparkEstilo__Linha__180720db0(0x18,0);
          if (lVar7 == 0) goto code_r0x00018064061f;
          uStack_1a8 = 0;
          uStack_1a0 = 0;
          uStack_198 = 0;
          lVar15 = SparkEstilo__Texto__180722af0(*(undefined8 *)(lVar7 + 0x28),0xb,&uStack_1a8,0,0);
          if (lVar15 == 0) goto code_r0x00018064061f;
          plVar16 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
          uVar17 = func_0x000182601c10(0x3f800000,0);
          if (plVar16 == (longlong *)0x0) goto code_r0x00018064061f;
          lVar8 = *plVar16;
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar19 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar18 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x3b) * 0x10 + 0x138 + lVar8);
                goto code_r0x00018063fd79;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar18 = (undefined8 *)FUN_180312860(plVar16,TI_UnityEngine.UIElements.IStyle,0x3b);
code_r0x00018063fd79:
          (*(code *)*puVar18)(plVar16,uVar17,puVar18[1]);
          plVar16 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
          uVar17 = func_0x000182601c10(0x3f800000,0);
          if (plVar16 == (longlong *)0x0) goto code_r0x00018064061f;
          lVar8 = *plVar16;
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar19 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar18 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x3d) * 0x10 + 0x138 + lVar8);
                goto code_r0x00018063fdf9;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar18 = (undefined8 *)FUN_180312860(plVar16,TI_UnityEngine.UIElements.IStyle,0x3d);
code_r0x00018063fdf9:
          (*(code *)*puVar18)(plVar16,uVar17,puVar18[1]);
          plVar16 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
          puVar18 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_e8,0,0);
          if (plVar16 == (longlong *)0x0) goto code_r0x00018064061f;
          lVar8 = *plVar16;
          uVar17 = *puVar18;
          uVar5 = *(undefined4 *)(puVar18 + 1);
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar19 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar18 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x59) * 0x10 + 0x138 + lVar8);
                goto code_r0x00018063fe89;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar18 = (undefined8 *)FUN_180312860(plVar16,TI_UnityEngine.UIElements.IStyle,0x59);
code_r0x00018063fe89:
          uStack_188 = uVar17;
          uStack_180 = uVar5;
          (*(code *)*puVar18)(plVar16,&uStack_188,puVar18[1]);
          if (lVar14 == 0) goto code_r0x00018064061f;
          UnityEngine_UIElements_VisualElement__Add(lVar14,lVar15,0);
          uVar17 = System_Int32__ToString(lVar7 + 0x14,0);
          uVar17 = System_String__Concat(LIT_"'Lv. '",uVar17,0);
          uStack_1a8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
          uStack_1a0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
          uStack_128 = 0;
          uStack_138 = 0;
          uStack_130 = 0;
          func_0x000180cb7cb0(&uStack_138,&uStack_1a8,MR_System.Nullable<UnityEngine.Color>..ctor);
          uStack_f8 = uStack_128;
          uStack_108 = (undefined4)uStack_138;
          uStack_104 = uStack_138._4_4_;
          uStack_100 = (undefined4)uStack_130;
          uStack_fc = uStack_130._4_4_;
          lVar15 = SparkEstilo__Texto__180722af0(uVar17,0xb,&uStack_108,0,0);
          if (lVar15 == 0) goto code_r0x00018064061f;
          plVar16 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
          puVar18 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(auStack_d8,0x42200000,0);
          if (plVar16 == (longlong *)0x0) goto code_r0x00018064061f;
          lVar8 = *plVar16;
          uVar17 = *puVar18;
          uVar5 = *(undefined4 *)(puVar18 + 1);
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar19 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar18 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0xad) * 0x10 + 0x138 + lVar8);
                goto code_r0x00018063ffc9;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar18 = (undefined8 *)FUN_180312860(plVar16,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018063ffc9:
          uStack_178 = uVar17;
          uStack_170 = uVar5;
          (*(code *)*puVar18)(plVar16,&uStack_178,puVar18[1]);
          plVar16 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
          uVar17 = func_0x000182601c10(0,0);
          if (plVar16 == (longlong *)0x0) goto code_r0x00018064061f;
          lVar8 = *plVar16;
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar19 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar18 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x3d) * 0x10 + 0x138 + lVar8);
                goto code_r0x000180640059;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar18 = (undefined8 *)FUN_180312860(plVar16,TI_UnityEngine.UIElements.IStyle,0x3d);
code_r0x000180640059:
          (*(code *)*puVar18)(plVar16,uVar17,puVar18[1]);
          plVar16 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
          puVar18 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(auStack_c8,0x40800000,0);
          if (plVar16 == (longlong *)0x0) goto code_r0x00018064061f;
          lVar8 = *plVar16;
          uVar17 = *puVar18;
          uVar5 = *(undefined4 *)(puVar18 + 1);
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar19 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar18 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x4d) * 0x10 + 0x138 + lVar8);
                goto code_r0x0001806400e9;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar18 = (undefined8 *)FUN_180312860(plVar16,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001806400e9:
          uStack_168 = uVar17;
          uStack_160 = uVar5;
          (*(code *)*puVar18)(plVar16,&uStack_168,puVar18[1]);
          UnityEngine_UIElements_VisualElement__Add(lVar14,lVar15,0);
          *(longlong *)(lVar13 + 0x10) = lVar7;
          func_0x000180314690(lVar13 + 0x10,lVar7);
          uVar17 = func_0x000180315580(TI_System.Action);
          FUN_1816a9c60(uVar17,lVar13,MD_SparkMapaWindow.__c__DisplayClass170_0._MostraAbaRaid_b__0,0);
          lVar13 = SparkEstilo__Botao__18071e130(LIT_"'Radar'",uVar17,0x36,0,0);
          if (lVar13 == 0) goto code_r0x00018064061f;
          plVar16 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
          puVar18 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(auStack_b8,0x41a00000,0);
          if (plVar16 == (longlong *)0x0) goto code_r0x00018064061f;
          lVar15 = *plVar16;
          uVar17 = *puVar18;
          uVar5 = *(undefined4 *)(puVar18 + 1);
          if (*(ushort *)(lVar15 + 0x12e) != 0) {
            uVar19 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar18 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x43) * 0x10 + 0x138 + lVar15);
                goto code_r0x0001806401f9;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar15 + 0x12e));
          }
          puVar18 = (undefined8 *)FUN_180312860(plVar16,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806401f9:
          uStack_158 = uVar17;
          uStack_150 = uVar5;
          (*(code *)*puVar18)(plVar16,&uStack_158,puVar18[1]);
          plVar16 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
          uVar17 = func_0x000182601c10(0,0);
          if (plVar16 == (longlong *)0x0) goto code_r0x00018064061f;
          lVar15 = *plVar16;
          if (*(ushort *)(lVar15 + 0x12e) != 0) {
            uVar19 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar18 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x3d) * 0x10 + 0x138 + lVar15);
                goto code_r0x000180640289;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar15 + 0x12e));
          }
          puVar18 = (undefined8 *)FUN_180312860(plVar16,TI_UnityEngine.UIElements.IStyle,0x3d);
code_r0x000180640289:
          (*(code *)*puVar18)(plVar16,uVar17,puVar18[1]);
          plVar16 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
          puVar18 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,0x40000000,0);
          if (plVar16 == (longlong *)0x0) goto code_r0x00018064061f;
          lVar15 = *plVar16;
          uVar17 = *puVar18;
          uVar5 = *(undefined4 *)(puVar18 + 1);
          if (*(ushort *)(lVar15 + 0x12e) != 0) {
            uVar19 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar18 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x4f) * 0x10 + 0x138 + lVar15);
                goto code_r0x000180640319;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar15 + 0x12e));
          }
          puVar18 = (undefined8 *)FUN_180312860(plVar16,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x000180640319:
          uStack_148 = uVar17;
          uStack_140 = uVar5;
          (*(code *)*puVar18)(plVar16,&uStack_148,puVar18[1]);
          UnityEngine_UIElements_VisualElement__Add(lVar14,lVar13,0);
          if (*(longlong *)(param_1 + 0x1c0) == 0) goto code_r0x00018064061f;
          UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x1c0),lVar14,0);
          lVar13 = *(longlong *)(param_1 + 0x1c8);
          uStack_118 = 0;
          uStack_110 = 0;
          System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor(&uStack_118,lVar14,lVar7);
          if (lVar13 == 0) goto code_r0x00018064061f;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          lVar7 = *(longlong *)(lVar13 + 0x10);
          if (lVar7 == 0) goto code_r0x00018064061f;
          uVar6 = *(uint *)(lVar13 + 0x18);
          if (uVar6 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar6 + 1;
            if (*(uint *)(lVar7 + 0x18) <= uVar6) goto code_r0x000180640625;
            puVar1 = (undefined4 *)(lVar7 + ((longlong)(int)uVar6 + 2) * 0x10);
            *puVar1 = (undefined4)uStack_118;
            puVar1[1] = uStack_118._4_4_;
            puVar1[2] = (undefined4)uStack_110;
            puVar1[3] = uStack_110._4_4_;
            func_0x000180314690(((longlong)(int)uVar6 + 2) * 0x10 + lVar7,0);
            uVar20 = uVar20 + 1;
          }
          else {
            uStack_1a8 = uStack_118;
            uStack_1a0 = uStack_110;
            FUN_180ba8bc0(lVar13,&uStack_1a8);
            uVar20 = uVar20 + 1;
          }
        }
        lVar12 = *(longlong *)(param_1 + 0x1c0);
        if (DAT_1834b2f44 == '\0') {
          FUN_180315380(TI_UnityEngine.Vector2);
          DAT_1834b2f44 = '\x01';
        }
        if (lVar12 != 0) {
          UnityEngine_UIElements_ScrollView__set_scrollOffset
                    (lVar12,**(undefined8 **)(TI_UnityEngine.Vector2 + 0xb8),0);
          if (cRam00000001834b3d31 == '\0') {
            puStack_c0 = &UNK_18063c718;
            FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.Dispose,0);
            puStack_c0 = &UNK_18063c724;
            FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.MoveNext);
            puStack_c0 = &UNK_18063c730;
            FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.get_Current);
            puStack_c0 = &UNK_18063c73c;
            FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.GetEnumerator);
            puStack_c0 = &UNK_18063c748;
            FUN_180315380(TI_SparkEstilo);
            puStack_c0 = &UNK_18063c754;
            FUN_180315380(TI_SparkQuests);
            cRam00000001834b3d31 = '\x01';
          }
          if (*(longlong *)(param_1 + 0x1c8) != 0) {
            puStack_c0 = &UNK_18063c77c;
            FUN_180badb20(&uStack_78,*(longlong *)(param_1 + 0x1c8),MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.GetEnumerator);
            uStack_48 = uStack_68;
            lStack_40 = lStack_60;
            uStack_78 = 0;
            puStack_70 = auStack_58;
            while( true ) {
              puStack_c0 = &UNK_18063c7b4;
              cVar10 = FUN_1812ec720(auStack_58,MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.MoveNext);
              uVar17 = uStack_48;
              if (cVar10 == '\0') {
                puStack_c0 = &UNK_18063c858;
                Gear__UpdateWeaponType__1803dadf0(auStack_58,MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.Dispose);
                return;
              }
              if (lStack_40 == 0) break;
              iVar4 = *(int *)(lStack_40 + 0x18);
              iVar2 = *(int *)(lStack_40 + 0x1c);
              iVar3 = *(int *)(lStack_40 + 0x20);
              if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
                puStack_c0 = &UNK_18063c7fe;
                func_0x000180315660();
              }
              puStack_c0 = &UNK_18063c81d;
              fStack_88 = (float)iVar4;
              fStack_84 = (float)iVar2;
              fStack_80 = (float)iVar3;
              uVar11 = SparkQuests__RadarEm(&fStack_88,0);
              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                puStack_c0 = &UNK_18063c835;
                func_0x000180315660();
              }
              puStack_c0 = &UNK_18063c844;
              SparkEstilo__Marca__180721270(uVar17,uVar11,0);
            }
            puStack_c0 = &UNK_18063c89e;
            FUN_1803155d0();
            puStack_c0 = &UNK_18063c8a4;
            FUN_180311490();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puStack_c0 = &UNK_18063c8aa;
          FUN_1803155d0();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
    }
  }
code_r0x000180640619:
  FUN_1803155d0();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

