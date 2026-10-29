// SparkMapaWindow__PosicionaAmaldicoadas__180642530 @ 0x180642530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__PosicionaAmaldicoadas__180642530(longlong param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong *puVar16;
  undefined8 uVar17;
  ushort uVar18;
  longlong *plVar19;
  float fStackX_c;
  undefined8 uStack_1d8;
  ulonglong uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  ulonglong uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [192];
  
  if (cRam00000001834b3d49 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAmaldicoadas.Arma>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAmaldicoadas.Arma>.get_Item);
    FUN_180315380(TI_SparkAmaldicoadas);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"''");
    cRam00000001834b3d49 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x110) == 0) {
    return;
  }
  if (*(int *)(TI_SparkAmaldicoadas + 0xe4) == 0) {
    func_0x000180315660(TI_SparkAmaldicoadas);
  }
  lVar11 = *(longlong *)(param_1 + 0x110);
  if (lVar11 != 0) {
    lVar3 = **(longlong **)(TI_SparkAmaldicoadas + 0xb8);
    do {
      iVar9 = UnityEngine_UIElements_VisualElement__get_childCount(lVar11,0);
      if (lVar3 == 0) break;
      if (*(int *)(lVar3 + 0x18) <= iVar9) {
        lVar11 = *(longlong *)(param_1 + 0x110);
        if (lVar11 != 0) {
          iVar9 = 0;
          goto code_r0x000180642ee6;
        }
        break;
      }
      lVar11 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar11,0);
      if (lVar11 == 0) break;
      UnityEngine_UIElements_VisualElement__set_pickingMode(lVar11,1,0);
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
      uVar13 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (plVar12 == (longlong *)0x0) break;
      lVar15 = *plVar12;
      if (*(ushort *)(lVar15 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar14 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 0x67
                       ) * 0x10 + 0x138 + lVar15);
            goto code_r0x0001806427c9;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar15 + 0x12e));
      }
      puVar14 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x67);
code_r0x0001806427c9:
      (*(code *)*puVar14)(plVar12,uVar13,puVar14[1]);
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
      puVar14 = (undefined8 *)
                UnityEngine_UIElements_StyleLength__op_Implicit(auStack_118,0x42400000,0);
      if (plVar12 == (longlong *)0x0) break;
      lVar15 = *plVar12;
      uVar13 = *puVar14;
      uVar2 = *(undefined4 *)(puVar14 + 1);
      if (*(ushort *)(lVar15 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar14 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 0xad
                       ) * 0x10 + 0x138 + lVar15);
            goto code_r0x000180642859;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar15 + 0x12e));
      }
      puVar14 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180642859:
      uStack_188 = uVar13;
      uStack_180 = uVar2;
      (*(code *)*puVar14)(plVar12,&uStack_188,puVar14[1]);
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
      puVar14 = (undefined8 *)
                UnityEngine_UIElements_StyleLength__op_Implicit(auStack_108,0x42680000,0);
      if (plVar12 == (longlong *)0x0) break;
      lVar15 = *plVar12;
      uVar13 = *puVar14;
      uVar2 = *(undefined4 *)(puVar14 + 1);
      if (*(ushort *)(lVar15 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar14 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 0x43
                       ) * 0x10 + 0x138 + lVar15);
            goto code_r0x0001806428e9;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar15 + 0x12e));
      }
      puVar14 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806428e9:
      uStack_178 = uVar13;
      uStack_170 = uVar2;
      (*(code *)*puVar14)(plVar12,&uStack_178,puVar14[1]);
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_1d8 = 0x3ef0f0f13f800000;
      uStack_1d0 = 0x3f8000003edcdcdd;
      lVar15 = SparkMapaWindow__Letra__18063bad0(LIT_"''",10,&uStack_1d8,0);
      if (lVar15 == 0) break;
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
      uVar13 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (plVar12 == (longlong *)0x0) break;
      lVar4 = *plVar12;
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar14 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 0x67)
                       * 0x10 + 0x138 + lVar4);
            goto code_r0x0001806429b9;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar14 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x67);
code_r0x0001806429b9:
      (*(code *)*puVar14)(plVar12,uVar13,puVar14[1]);
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
      puVar14 = (undefined8 *)
                UnityEngine_UIElements_StyleLength__op_Implicit(auStack_f8,0x43340000,0);
      if (plVar12 == (longlong *)0x0) break;
      lVar4 = *plVar12;
      uVar13 = *puVar14;
      uVar2 = *(undefined4 *)(puVar14 + 1);
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar14 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 0xad)
                       * 0x10 + 0x138 + lVar4);
            goto code_r0x000180642a49;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar14 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180642a49:
      uStack_1b8 = uVar13;
      uStack_1b0 = uVar2;
      (*(code *)*puVar14)(plVar12,&uStack_1b8,puVar14[1]);
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
      puVar14 = (undefined8 *)
                UnityEngine_UIElements_StyleLength__op_Implicit(auStack_168,0xc2840000,0);
      if (plVar12 == (longlong *)0x0) break;
      lVar4 = *plVar12;
      uVar13 = *puVar14;
      uVar2 = *(undefined4 *)(puVar14 + 1);
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar14 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 0x47)
                       * 0x10 + 0x138 + lVar4);
            goto code_r0x000180642ad9;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar14 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180642ad9:
      uStack_1a8 = uVar13;
      uStack_1a0 = uVar2;
      (*(code *)*puVar14)(plVar12,&uStack_1a8,puVar14[1]);
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
      puVar16 = (ulonglong *)
                UnityEngine_UIElements_StyleLength__op_Implicit(auStack_158,0x42300000,0);
      if (plVar12 == (longlong *)0x0) break;
      lVar4 = *plVar12;
      uVar1 = *puVar16;
      uVar6 = puVar16[1];
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar14 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 0x73)
                       * 0x10 + 0x138 + lVar4);
            goto code_r0x000180642b69;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar14 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x000180642b69:
      uStack_198 = uVar1;
      uStack_190 = (int)uVar6;
      (*(code *)*puVar14)(plVar12,&uStack_198,puVar14[1]);
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
      uVar13 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
      if (plVar12 == (longlong *)0x0) break;
      lVar4 = *plVar12;
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar14 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 0x9d)
                       * 0x10 + 0x138 + lVar4);
            goto code_r0x000180642bf9;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar14 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x9d);
code_r0x000180642bf9:
      (*(code *)*puVar14)(plVar12,uVar13,puVar14[1]);
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
      uStack_1d8 = 0;
      uStack_1d0 = 0x3f80000000000000;
      puVar16 = (ulonglong *)
                UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_148,&uStack_1d8,0);
      if (plVar12 == (longlong *)0x0) break;
      lVar4 = *plVar12;
      uVar1 = *puVar16;
      uVar6 = puVar16[1];
      uVar7 = puVar16[2];
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar14 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 0xa3)
                       * 0x10 + 0x138 + lVar4);
            goto code_r0x000180642c89;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar14 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0xa3);
code_r0x000180642c89:
      uStack_1d8 = uVar1;
      uStack_1d0 = uVar6;
      uStack_1c8 = (int)uVar7;
      (*(code *)*puVar14)(plVar12,&uStack_1d8,puVar14[1]);
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar15,0);
      uVar13 = func_0x000182601c10(0x3e99999a,0);
      if (plVar12 == (longlong *)0x0) break;
      lVar4 = *plVar12;
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar14 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 0xa5)
                       * 0x10 + 0x138 + lVar4);
            goto code_r0x000180642d19;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar14 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0xa5);
code_r0x000180642d19:
      (*(code *)*puVar14)(plVar12,uVar13);
      UnityEngine_UIElements_VisualElement__Add(lVar11,lVar15);
      if (*(longlong *)(param_1 + 0x110) == 0) break;
      UnityEngine_UIElements_VisualElement__Add();
      lVar11 = *(longlong *)(param_1 + 0x110);
    } while (lVar11 != 0);
  }
DAT_1806432f1:
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
code_r0x000180642ee6:
  iVar10 = UnityEngine_UIElements_VisualElement__get_childCount(lVar11,0);
  if (iVar10 <= iVar9) {
    return;
  }
  if (*(longlong *)(param_1 + 0x110) == 0) goto DAT_1806432f1;
  lVar11 = UnityEngine_UIElements_VisualElement__get_Item(*(longlong *)(param_1 + 0x110),iVar9,0);
  if (iVar9 < *(int *)(lVar3 + 0x18)) {
    FUN_180bdfec0(&uStack_1d8,lVar3,iVar9,MR_System.Collections.Generic.List<SparkAmaldicoadas.Arma>.get_Item);
    uStack_198 = uStack_1d0;
    uStack_190 = uStack_1c8;
    cVar8 = SparkMapaWindow__NaPlantaAtual__180640a00(param_1,&uStack_198,0);
    if (cVar8 == '\0') goto code_r0x000180643207;
    FUN_180bdfec0(&uStack_1d8,lVar3,iVar9,MR_System.Collections.Generic.List<SparkAmaldicoadas.Arma>.get_Item);
    uVar1 = uStack_1d8;
    if (*(int *)(TI_SparkAmaldicoadas + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar13 = SparkAmaldicoadas__Icone(uVar1 & 0xffffffff,uStack_1d8._4_1_,0);
    if (lVar11 == 0) goto DAT_1806432f1;
    plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_userData(lVar11,0);
    if (plVar12 == (longlong *)0x0) {
code_r0x000180642fe7:
      UnityEngine_UIElements_VisualElement__set_userData(lVar11,uVar13,0);
      lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar13 = FUN_180a90ae0(uVar13,MR_SparkArte.Load<UnityEngine.Texture2D>);
      puVar14 = (undefined8 *)
                UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_e8,uVar13,0);
      if (lVar15 == 0) goto DAT_1806432f1;
      uStack_148 = *puVar14;
      uStack_140 = puVar14[1];
      uStack_138 = *(undefined4 *)(puVar14 + 2);
      uStack_134 = *(undefined4 *)((longlong)puVar14 + 0x14);
      uStack_130 = *(undefined4 *)(puVar14 + 3);
      uStack_12c = *(undefined4 *)((longlong)puVar14 + 0x1c);
      uStack_128 = puVar14[4];
      FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar15,&uStack_148);
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_Item(lVar11,0,0);
      if (*(int *)(TI_SparkAmaldicoadas + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar13 = SparkAmaldicoadas__Nome(uVar1 & 0xffffffff,0);
      if (plVar12 == (longlong *)0x0) goto DAT_1806432f1;
      lVar15 = *plVar12;
      if ((*(byte *)(lVar15 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.Label + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(lVar15 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.Label + 0x130) * 8) !=
          TI_UnityEngine.UIElements.Label)) {
        FUN_1803146d0(plVar12,TI_UnityEngine.UIElements.Label);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(lVar15 + 0xe48))(plVar12,uVar13,*(undefined8 *)(lVar15 + 0xe50));
    }
    else {
      plVar19 = (longlong *)0x0;
      if (*plVar12 == _DAT_1834c62b0) {
        plVar19 = plVar12;
      }
      if ((plVar19 == (longlong *)0x0) ||
         (cVar8 = System_String__op_Inequality(plVar19,uVar13,0), cVar8 != '\0'))
      goto code_r0x000180642fe7;
    }
    uVar13 = SparkMapaWindow__NaVista__180640ab0(param_1,uStack_1d0,0);
    lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
    uVar17 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar15 == 0) goto DAT_1806432f1;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar15,uVar17);
    lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
    puVar14 = (undefined8 *)
              UnityEngine_UIElements_StyleLength__op_Implicit(auStack_158,(float)uVar13 - 24.0,0);
    if (lVar15 == 0) goto DAT_1806432f1;
    uStack_1a8 = *puVar14;
    uStack_1a0 = *(undefined4 *)(puVar14 + 1);
    fStackX_c = (float)((ulonglong)uVar13 >> 0x20);
    FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar15,&uStack_1a8);
    lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
    puVar14 = (undefined8 *)
              UnityEngine_UIElements_StyleLength__op_Implicit(auStack_168,fStackX_c - 42.0,0);
    if (lVar11 == 0) goto DAT_1806432f1;
    uStack_1b0 = *(undefined4 *)(puVar14 + 1);
    uStack_1b8 = *puVar14;
    FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_1b8);
  }
  else {
code_r0x000180643207:
    if (lVar11 == 0) goto DAT_1806432f1;
    lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
    uVar13 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar11 == 0) goto DAT_1806432f1;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar11,uVar13);
  }
  lVar11 = *(longlong *)(param_1 + 0x110);
  if (lVar11 == 0) goto DAT_1806432f1;
  iVar9 = iVar9 + 1;
  goto code_r0x000180642ee6;
}

