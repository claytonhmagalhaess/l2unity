// L2Window__PosicaoPadrao__18079a240 @ 0x18079a240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Window__PosicaoPadrao__18079a240(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ushort uVar7;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b4484 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b4484 = '\x01';
  }
  if (DAT_1834b447e == '\0') {
    FUN_180315380(LIT_"'spark.janela.'");
    DAT_1834b447e = '\x01';
  }
  plVar4 = (longlong *)func_0x0001818f8b80(param_1,0);
  if (plVar4 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    uVar5 = System_String__Concat(LIT_"'spark.janela.'",uVar5,0);
    UnityEngine_PlayerPrefs__DeleteKey(uVar5,0);
    uVar5 = L2Window__get_ChaveDoTamanho(param_1,0);
    UnityEngine_PlayerPrefs__DeleteKey(uVar5,0);
    if ((*(char *)(param_1 + 0x84) == '\0') || (*(longlong *)(param_1 + 0x30) == 0)) {
      return;
    }
    plVar4 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x30),0);
    if (plVar4 != (longlong *)0x0) {
      lVar2 = *plVar4;
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      uVar1 = *(undefined4 *)(param_1 + 0x80);
      if (*(ushort *)(lVar2 + 0x12e) != 0) {
        uVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar6 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0xad) *
                      0x10 + 0x138 + lVar2);
            goto code_r0x00018079a379;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(lVar2 + 0x12e));
      }
      puVar6 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018079a379:
      uStack_28 = uVar5;
      uStack_20 = uVar1;
      (*(code *)*puVar6)(plVar4,&uStack_28,puVar6[1]);
      if ((*(longlong *)(param_1 + 0x30) != 0) &&
         (plVar4 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0),
         plVar4 != (longlong *)0x0)) {
        lVar2 = *plVar4;
        uVar5 = *(undefined8 *)(param_1 + 0x48);
        uVar1 = *(undefined4 *)(param_1 + 0x50);
        if (*(ushort *)(lVar2 + 0x12e) != 0) {
          uVar7 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar6 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0x47)
                        * 0x10 + 0x138 + lVar2);
              goto code_r0x00018079a409;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(ushort *)(lVar2 + 0x12e));
        }
        puVar6 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x00018079a409:
        uStack_28 = uVar5;
        uStack_20 = uVar1;
        (*(code *)*puVar6)(plVar4,&uStack_28,puVar6[1]);
        if ((*(longlong *)(param_1 + 0x30) != 0) &&
           (plVar4 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0x30),0), plVar4 != (longlong *)0x0)) {
          lVar2 = *plVar4;
          uVar5 = *(undefined8 *)(param_1 + 0x54);
          uVar1 = *(undefined4 *)(param_1 + 0x5c);
          if (*(ushort *)(lVar2 + 0x12e) != 0) {
            uVar7 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) +
                          0x73) * 0x10 + 0x138 + lVar2);
                goto code_r0x00018079a499;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(ushort *)(lVar2 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x00018079a499:
          uStack_28 = uVar5;
          uStack_20 = uVar1;
          (*(code *)*puVar6)(plVar4,&uStack_28,puVar6[1]);
          if ((*(longlong *)(param_1 + 0x30) != 0) &&
             (plVar4 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(param_1 + 0x30),0), plVar4 != (longlong *)0x0)) {
            lVar2 = *plVar4;
            uVar5 = *(undefined8 *)(param_1 + 0x60);
            uVar1 = *(undefined4 *)(param_1 + 0x68);
            if (*(ushort *)(lVar2 + 0x12e) != 0) {
              uVar7 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar6 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) +
                            0x69) * 0x10 + 0x138 + lVar2);
                  goto code_r0x00018079a529;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < *(ushort *)(lVar2 + 0x12e));
            }
            puVar6 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x00018079a529:
            uStack_28 = uVar5;
            uStack_20 = uVar1;
            (*(code *)*puVar6)(plVar4,&uStack_28,puVar6[1]);
            if ((*(longlong *)(param_1 + 0x30) != 0) &&
               (plVar4 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(param_1 + 0x30),0), plVar4 != (longlong *)0x0)) {
              lVar2 = *plVar4;
              uVar5 = *(undefined8 *)(param_1 + 0x6c);
              uVar1 = *(undefined4 *)(param_1 + 0x74);
              if (*(ushort *)(lVar2 + 0x12e) != 0) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar6 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) +
                              0x2d) * 0x10 + 0x138 + lVar2);
                    goto code_r0x00018079a5b7;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < *(ushort *)(lVar2 + 0x12e));
              }
              puVar6 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x00018079a5b7:
              uStack_28 = uVar5;
              uStack_20 = uVar1;
              (*(code *)*puVar6)(plVar4,&uStack_28,puVar6[1]);
              return;
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

