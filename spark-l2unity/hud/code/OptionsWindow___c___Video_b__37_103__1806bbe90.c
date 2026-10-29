// OptionsWindow___c___Video_b__37_103__1806bbe90 @ 0x1806bbe90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c___Video_b__37_103__1806bbe90(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
  undefined4 uVar19;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_68 [56];
  undefined *puStack_30;
  
  if (cRam00000001834b3f04 == '\0') {
    puStack_30 = &UNK_1806bbead;
    FUN_180315380(TI_SparkFps);
    puStack_30 = &UNK_1806bbeb9;
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f04 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    puStack_30 = &UNK_1806bbed8;
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc0) = param_2;
  if (*(int *)(TI_SparkFps + 0xe4) == 0) {
    puStack_30 = &UNK_1806bbf01;
    func_0x000180315660();
  }
  if (cRam00000001834b3eac == '\0') {
    puStack_30 = &UNK_1806bbf16;
    FUN_180315380(TI_SparkFps);
    cRam00000001834b3eac = '\x01';
  }
  if (*(int *)(TI_SparkFps + 0xe4) == 0) {
    puStack_30 = &UNK_1806bbf32;
    func_0x000180315660();
  }
  lVar7 = **(longlong **)(TI_SparkFps + 0xb8);
  if (lVar7 == 0) {
    return;
  }
  if (cRam00000001834b3289 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3289 = '\x01';
  }
  if (*(longlong *)(lVar7 + 0x20) == 0) {
    return;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa8) == '\0') {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar18 = *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa9);
  }
  else {
    cVar18 = '\x01';
  }
  if (*(longlong *)(lVar7 + 0x20) != 0) {
    lVar10 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x20),0);
    uVar11 = FUN_180eb5810(cVar18 == '\0',MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar10 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar10,uVar11);
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar10 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xd0);
      if (lVar10 != 0) {
        uVar3 = *(uint *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xd8);
        if ((((int)uVar3 < 0) || (uVar17 = *(int *)(lVar10 + 0x18) - 1, (int)uVar3 <= (int)uVar17))
           && (uVar17 = uVar3, (int)uVar3 < 0)) {
          uVar17 = 0;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar17) {
code_r0x00018049a1fb:
          FUN_1803155c0();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xb8);
        if (lVar6 != 0) {
          uVar3 = *(uint *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc0);
          if ((((int)uVar3 < 0) || (uVar16 = *(int *)(lVar6 + 0x18) - 1, (int)uVar3 <= (int)uVar16))
             && (uVar16 = uVar3, (int)uVar3 < 0)) {
            uVar16 = 0;
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar16) goto code_r0x00018049a1fb;
          if (*(longlong *)(lVar7 + 0x20) != 0) {
            lVar12 = (longlong)(int)uVar16 + 2;
            uVar19 = *(undefined4 *)(lVar6 + lVar12 * 0x10);
            uVar1 = *(undefined4 *)(lVar6 + 4 + lVar12 * 0x10);
            uVar2 = *(undefined4 *)(lVar6 + 8 + lVar12 * 0x10);
            iVar4 = *(int *)(lVar10 + 0x20 + (longlong)(int)uVar17 * 4);
            plVar13 = (longlong *)
                      UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x20),0)
            ;
            puVar14 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar13 != (longlong *)0x0) {
              lVar10 = *plVar13;
              uVar11 = *puVar14;
              uVar5 = *(undefined4 *)(puVar14 + 1);
              if (*(ushort *)(lVar10 + 0x12e) != 0) {
                uVar15 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar14 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10
                                        ) + 0x41) * 0x10 + 0x138 + lVar10);
                    goto code_r0x00018049a039;
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 < *(ushort *)(lVar10 + 0x12e));
              }
              puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x41);
code_r0x00018049a039:
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
              uStack_88 = uVar11;
              (*(code *)*puVar14)(plVar13,&uStack_88,puVar14[1]);
              if (*(longlong *)(lVar7 + 0x20) != 0) {
                plVar13 = (longlong *)
                          UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(lVar7 + 0x20),0);
                uStack_88 = CONCAT44(uVar1,uVar19);
                uStack_80 = CONCAT44(0x3f733333,uVar2);
                puVar14 = (undefined8 *)
                          UnityEngine_UIElements_StyleColor__op_Implicit(auStack_68,&uStack_88,0);
                if (plVar13 != (longlong *)0x0) {
                  lVar10 = *plVar13;
                  uVar11 = *puVar14;
                  uVar9 = puVar14[1];
                  uVar19 = *(undefined4 *)(puVar14 + 2);
                  if (*(ushort *)(lVar10 + 0x12e) != 0) {
                    uVar15 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar14 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 +
                                            (ulonglong)uVar15 * 0x10) + 0x2f) * 0x10 + 0x138 +
                                  lVar10);
                        goto code_r0x00018049a0f5;
                      }
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < *(ushort *)(lVar10 + 0x12e));
                  }
                  puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x00018049a0f5:
                  uStack_88 = uVar11;
                  uStack_80 = uVar9;
                  uStack_78 = uVar19;
                  (*(code *)*puVar14)(plVar13,&uStack_88,puVar14[1]);
                  if (*(longlong *)(lVar7 + 0x20) != 0) {
                    lVar10 = UnityEngine_UIElements_VisualElement__get_style
                                       (*(longlong *)(lVar7 + 0x20),0);
                    if (iVar4 < 0x11) {
                      uVar19 = 0x3f000000;
                    }
                    else {
                      uVar19 = 0x3f800000;
                    }
                    uVar11 = func_0x000182601c10(uVar19,0);
                    if (lVar10 != 0) {
                      FUN_180005060(0xa5,TI_UnityEngine.UIElements.IStyle,lVar10,uVar11);
                      if (*(longlong *)(lVar7 + 0x20) != 0) {
                        UnityEngine_UIElements_VisualElement__BringToFront
                                  (*(longlong *)(lVar7 + 0x20),0);
                        SparkFps__Escreve(lVar7,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

