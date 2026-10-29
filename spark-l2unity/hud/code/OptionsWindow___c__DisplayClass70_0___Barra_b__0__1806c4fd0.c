// OptionsWindow___c__DisplayClass70_0___Barra_b__0__1806c4fd0 @ 0x1806c4fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass70_0___Barra_b__0__1806c4fd0(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort uVar8;
  int iVar9;
  float fVar10;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [96];
  
  if (cRam00000001834b3f62 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b3f62 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar5 = UnityEngine_UIElements_VisualElement__get_layout
                      (auStack_68,*(longlong *)(param_1 + 0x10),0);
    fVar1 = *(float *)(lVar5 + 8);
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    if ((0x7f800000 < (uint)ABS(fVar1)) || (fVar1 <= 0.0)) {
      return;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar6 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x18),0);
      lVar5 = *(longlong *)(param_1 + 0x20);
      if (lVar5 != 0) {
        fVar10 = (float)(**(code **)(lVar5 + 0x18))
                                  (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
        else if (1.0 < fVar10) {
          fVar10 = 1.0;
        }
        puVar7 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit
                           (&uStack_78,(fVar1 - 11.0) * fVar10,0);
        if (plVar6 != (longlong *)0x0) {
          lVar5 = *plVar6;
          uVar2 = *puVar7;
          uVar3 = *(undefined4 *)(puVar7 + 1);
          if (*(ushort *)(lVar5 + 0x12e) != 0) {
            uVar8 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar7 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                          0x47) * 0x10 + 0x138 + lVar5);
                goto code_r0x0001806c5179;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
          }
          puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001806c5179:
          uStack_78 = uVar2;
          uStack_70 = uVar3;
          (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
          iVar9 = 0;
          lVar5 = *(longlong *)(param_1 + 0x28);
          while (lVar5 != 0) {
            if (*(int *)(lVar5 + 0x18) <= iVar9) {
              return;
            }
            if ((*(longlong *)(param_1 + 0x28) == 0) ||
               (lVar5 = FUN_180bbafe0(*(longlong *)(param_1 + 0x28),iVar9,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item),
               lVar5 == 0)) break;
            plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
            puVar7 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit
                               (auStack_68,
                                (((float)iVar9 / (float)*(int *)(param_1 + 0x30)) * (fVar1 - 11.0) +
                                5.5) - 1.0,0);
            if (plVar6 == (longlong *)0x0) break;
            lVar5 = *plVar6;
            uVar2 = *puVar7;
            uVar3 = *(undefined4 *)(puVar7 + 1);
            if (*(ushort *)(lVar5 + 0x12e) != 0) {
              uVar8 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar7 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                            0x47) * 0x10 + 0x138 + lVar5);
                  goto code_r0x0001806c5277;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
            }
            puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001806c5277:
            uStack_78 = uVar2;
            uStack_70 = uVar3;
            (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
            iVar9 = iVar9 + 1;
            lVar5 = *(longlong *)(param_1 + 0x28);
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

