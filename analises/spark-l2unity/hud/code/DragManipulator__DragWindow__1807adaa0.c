// DragManipulator__DragWindow__1807adaa0 @ 0x1807adaa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DragManipulator__DragWindow__1807adaa0(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fStackX_c;
  float fStack_74;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  if (cRam00000001834b452e == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b452e = '\x01';
  }
  DragManipulator__UpdateAnchorType__1807ae7b0(param_1);
  uVar5 = DragManipulator__get_Painel(param_1);
  if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x0001807ae1a5;
  if (*(char *)(param_1 + 0x58) == '\0') {
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style();
    puVar7 = (undefined8 *)
             UnityEngine_UIElements_StyleLength__op_Implicit
                       (&uStack_68,*(float *)(param_1 + 0x48) - (float)param_2,0);
    if (plVar6 == (longlong *)0x0) goto code_r0x0001807ae1a5;
    lVar8 = *plVar6;
    uVar13 = *puVar7;
    uVar14 = *(undefined4 *)(puVar7 + 1);
    uVar9 = 0;
    if (*(ushort *)(lVar8 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0x47) *
                    0x10 + 0x138 + lVar8);
          goto code_r0x0001807adbc9;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001807adbc9:
    uStack_68 = uVar13;
    uStack_60 = uVar14;
    (*(code *)*puVar7)(plVar6,&uStack_68,puVar7[1]);
    if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x0001807ae1a5;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x38),0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_68,2,0)
    ;
    if (plVar6 == (longlong *)0x0) goto code_r0x0001807ae1a5;
    lVar8 = *plVar6;
    uVar13 = *puVar7;
    uVar14 = *(undefined4 *)(puVar7 + 1);
    uVar9 = 0;
    if (*(ushort *)(lVar8 + 0x12e) != 0) {
code_r0x0001807adc40:
      if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar9 * 0x10) != TI_UnityEngine.UIElements.IStyle)
      goto code_r0x0001807adc4c;
      iVar4 = *(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0x69;
code_r0x0001807adfcd:
      puVar7 = (undefined8 *)((longlong)iVar4 * 0x10 + 0x138 + lVar8);
      goto code_r0x0001807ade09;
    }
code_r0x0001807adc54:
    uVar12 = 0x69;
  }
  else {
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style();
    if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x0001807ae1a5;
    fVar1 = *(float *)(param_1 + 0x48);
    lVar8 = UnityEngine_UIElements_VisualElement__get_layout
                      (&uStack_68,*(longlong *)(param_1 + 0x38),0);
    fVar2 = *(float *)(lVar8 + 8);
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    puVar7 = (undefined8 *)
             UnityEngine_UIElements_StyleLength__op_Implicit
                       (&uStack_68,(((float)uVar5 - fVar1) - fVar2) + (float)param_2,0);
    if (plVar6 == (longlong *)0x0) goto code_r0x0001807ae1a5;
    lVar8 = *plVar6;
    uVar13 = *puVar7;
    uVar14 = *(undefined4 *)(puVar7 + 1);
    if (*(ushort *)(lVar8 + 0x12e) != 0) {
      uVar9 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0x69) *
                    0x10 + 0x138 + lVar8);
          goto code_r0x0001807add69;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x0001807add69:
    uStack_68 = uVar13;
    uStack_60 = uVar14;
    (*(code *)*puVar7)(plVar6,&uStack_68,puVar7[1]);
    if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x0001807ae1a5;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x38),0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_68,2,0)
    ;
    if (plVar6 == (longlong *)0x0) goto code_r0x0001807ae1a5;
    lVar8 = *plVar6;
    uVar13 = *puVar7;
    uVar14 = *(undefined4 *)(puVar7 + 1);
    if (*(ushort *)(lVar8 + 0x12e) != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
          iVar4 = *(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar11 * 0x10) + 0x47;
          goto code_r0x0001807adfcd;
        }
        uVar9 = (short)uVar11 + 1;
        uVar11 = (ulonglong)uVar9;
      } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
    }
    uVar12 = 0x47;
  }
  puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,uVar12);
code_r0x0001807ade09:
  uVar9 = 0;
  uStack_68 = uVar13;
  uStack_60 = uVar14;
  (*(code *)*puVar7)(plVar6,&uStack_68,puVar7[1]);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    fStack_74 = (float)((ulonglong)param_2 >> 0x20);
    if (*(char *)(param_1 + 0x59) == '\0') {
      plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style();
      puVar7 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit
                         (&uStack_68,*(float *)(param_1 + 0x4c) - fStack_74,0);
      if (plVar6 != (longlong *)0x0) {
        lVar8 = *plVar6;
        uVar5 = *puVar7;
        uVar14 = *(undefined4 *)(puVar7 + 1);
        if (*(ushort *)(lVar8 + 0x12e) != 0) {
          uVar11 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
              puVar7 = (undefined8 *)
                       ((longlong)(*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar11 * 0x10) + 0x73)
                        * 0x10 + 0x138 + lVar8);
              goto code_r0x0001807adeb9;
            }
            uVar10 = (short)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
          } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001807adeb9:
        uStack_68 = uVar5;
        uStack_60 = uVar14;
        (*(code *)*puVar7)(plVar6,&uStack_68,puVar7[1]);
        if (*(longlong *)(param_1 + 0x38) != 0) {
          plVar6 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x38),0);
          puVar7 = (undefined8 *)
                   UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_68,2,0);
          if (plVar6 != (longlong *)0x0) {
            lVar8 = *plVar6;
            uVar5 = *puVar7;
            uVar14 = *(undefined4 *)(puVar7 + 1);
            if (*(ushort *)(lVar8 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  iVar4 = *(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0x2d
                  ;
code_r0x0001807ae011:
                  puVar7 = (undefined8 *)((longlong)iVar4 * 0x10 + 0x138 + lVar8);
                  goto code_r0x0001807adf56;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
            }
            uVar13 = 0x2d;
code_r0x0001807adf4e:
            puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,uVar13);
code_r0x0001807adf56:
            uStack_68 = uVar5;
            uStack_60 = uVar14;
            (*(code *)*puVar7)(plVar6,&uStack_68,puVar7[1]);
            return;
          }
        }
      }
    }
    else {
      plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style();
      if (*(longlong *)(param_1 + 0x38) != 0) {
        fStackX_c = (float)((ulonglong)uVar5 >> 0x20);
        fVar1 = *(float *)(param_1 + 0x4c);
        lVar8 = UnityEngine_UIElements_VisualElement__get_layout
                          (&uStack_68,*(longlong *)(param_1 + 0x38),0);
        fVar2 = *(float *)(lVar8 + 0xc);
        if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
          func_0x000180315660();
        }
        puVar7 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit
                           (&uStack_68,((fStackX_c - fVar1) - fVar2) + fStack_74,0);
        if (plVar6 != (longlong *)0x0) {
          lVar8 = *plVar6;
          uVar5 = *puVar7;
          uVar14 = *(undefined4 *)(puVar7 + 1);
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar7 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar11 * 0x10) + 0x2d) * 0x10
                          + 0x138 + lVar8);
                goto code_r0x0001807ae0e9;
              }
              uVar10 = (short)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
            } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x0001807ae0e9:
          uStack_68 = uVar5;
          uStack_60 = uVar14;
          (*(code *)*puVar7)(plVar6,&uStack_68,puVar7[1]);
          if (*(longlong *)(param_1 + 0x38) != 0) {
            plVar6 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0x38),0);
            puVar7 = (undefined8 *)
                     UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_68,2,0);
            if (plVar6 != (longlong *)0x0) {
              lVar8 = *plVar6;
              uVar5 = *puVar7;
              uVar14 = *(undefined4 *)(puVar7 + 1);
              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                do {
                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    iVar4 = *(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                            0x73;
                    goto code_r0x0001807ae011;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
              }
              uVar13 = 0x73;
              goto code_r0x0001807adf4e;
            }
          }
        }
      }
    }
  }
code_r0x0001807ae1a5:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_r0x0001807adc4c:
  uVar9 = uVar9 + 1;
  if (*(ushort *)(lVar8 + 0x12e) <= uVar9) goto code_r0x0001807adc54;
  goto code_r0x0001807adc40;
}

