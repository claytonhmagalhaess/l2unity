// SparkFps__Atualiza__180499dc0 @ 0x180499dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkFps__Atualiza__180499dc0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  char cVar17;
  undefined4 uVar18;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_68 [96];
  
  if (cRam00000001834b3289 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3289 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa8) == '\0') {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar17 = *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa9);
  }
  else {
    cVar17 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
    uVar10 = FUN_180eb5810(cVar17 == '\0',MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar9 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar9 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xd0);
      if (lVar9 != 0) {
        uVar3 = *(uint *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xd8);
        if ((((int)uVar3 < 0) || (uVar16 = *(int *)(lVar9 + 0x18) - 1, (int)uVar3 <= (int)uVar16))
           && (uVar16 = uVar3, (int)uVar3 < 0)) {
          uVar16 = 0;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar16) {
code_r0x00018049a1fb:
          FUN_1803155c0();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xb8);
        if (lVar6 != 0) {
          uVar3 = *(uint *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc0);
          if ((((int)uVar3 < 0) || (uVar15 = *(int *)(lVar6 + 0x18) - 1, (int)uVar3 <= (int)uVar15))
             && (uVar15 = uVar3, (int)uVar3 < 0)) {
            uVar15 = 0;
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto code_r0x00018049a1fb;
          if (*(longlong *)(param_1 + 0x20) != 0) {
            lVar11 = (longlong)(int)uVar15 + 2;
            uVar18 = *(undefined4 *)(lVar6 + lVar11 * 0x10);
            uVar1 = *(undefined4 *)(lVar6 + 4 + lVar11 * 0x10);
            uVar2 = *(undefined4 *)(lVar6 + 8 + lVar11 * 0x10);
            iVar4 = *(int *)(lVar9 + 0x20 + (longlong)(int)uVar16 * 4);
            plVar12 = (longlong *)
                      UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0x20),0);
            puVar13 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar12 != (longlong *)0x0) {
              lVar9 = *plVar12;
              uVar10 = *puVar13;
              uVar5 = *(undefined4 *)(puVar13 + 1);
              if (*(ushort *)(lVar9 + 0x12e) != 0) {
                uVar14 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar13 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10)
                               + 0x41) * 0x10 + 0x138 + lVar9);
                    goto code_r0x00018049a039;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
              }
              puVar13 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x41);
code_r0x00018049a039:
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
              uStack_88 = uVar10;
              (*(code *)*puVar13)(plVar12,&uStack_88,puVar13[1]);
              if (*(longlong *)(param_1 + 0x20) != 0) {
                plVar12 = (longlong *)
                          UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0x20),0);
                uStack_88 = CONCAT44(uVar1,uVar18);
                uStack_80 = CONCAT44(0x3f733333,uVar2);
                puVar13 = (undefined8 *)
                          UnityEngine_UIElements_StyleColor__op_Implicit(auStack_68,&uStack_88,0);
                if (plVar12 != (longlong *)0x0) {
                  lVar9 = *plVar12;
                  uVar10 = *puVar13;
                  uVar8 = puVar13[1];
                  uVar18 = *(undefined4 *)(puVar13 + 2);
                  if (*(ushort *)(lVar9 + 0x12e) != 0) {
                    uVar14 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar13 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                            (ulonglong)uVar14 * 0x10) + 0x2f) * 0x10 + 0x138 + lVar9
                                  );
                        goto code_r0x00018049a0f5;
                      }
                      uVar14 = uVar14 + 1;
                    } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
                  }
                  puVar13 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x00018049a0f5:
                  uStack_88 = uVar10;
                  uStack_80 = uVar8;
                  uStack_78 = uVar18;
                  (*(code *)*puVar13)(plVar12,&uStack_88,puVar13[1]);
                  if (*(longlong *)(param_1 + 0x20) != 0) {
                    lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(param_1 + 0x20),0);
                    if (iVar4 < 0x11) {
                      uVar18 = 0x3f000000;
                    }
                    else {
                      uVar18 = 0x3f800000;
                    }
                    uVar10 = func_0x000182601c10(uVar18,0);
                    if (lVar9 != 0) {
                      FUN_180005060(0xa5,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
                      if (*(longlong *)(param_1 + 0x20) != 0) {
                        UnityEngine_UIElements_VisualElement__BringToFront
                                  (*(longlong *)(param_1 + 0x20),0);
                        SparkFps__Escreve__18049a280(param_1,0);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

