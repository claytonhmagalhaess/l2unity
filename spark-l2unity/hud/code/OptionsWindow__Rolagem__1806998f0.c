// OptionsWindow__Rolagem__1806998f0 @ 0x1806998f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow__Rolagem__1806998f0(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ushort uVar9;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (cRam00000001834b3e92 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3e92 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar3,0);
  if (lVar3 != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
    uVar5 = func_0x000182601c10(0x3f800000,0);
    if (lVar4 != 0) {
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
      plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
      puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,0,0);
      if (plVar6 != (longlong *)0x0) {
        lVar4 = *plVar6;
        uVar1 = *(undefined4 *)(puVar7 + 1);
        uVar5 = *puVar7;
        if (*(ushort *)(lVar4 + 0x12e) != 0) {
          uVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0x57)
                        * 0x10 + 0x138 + lVar4);
              goto code_r0x000180699a29;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)(lVar4 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x000180699a29:
        uStack_38 = uVar5;
        uStack_30 = uVar1;
        (*(code *)*puVar7)(plVar6,&uStack_38,puVar7[1]);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar4 = SparkEstilo__Lista(0);
        if (lVar4 != 0) {
          lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
          uVar5 = func_0x000182601c10(0x3f800000,0);
          if (lVar8 != 0) {
            FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
            lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            uVar5 = func_0x000182601c10(0x3f800000,0);
            if (lVar8 != 0) {
              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
              plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
              puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,0,0)
              ;
              if (plVar6 != (longlong *)0x0) {
                lVar8 = *plVar6;
                uVar5 = *puVar7;
                uVar1 = *(undefined4 *)(puVar7 + 1);
                if (*(ushort *)(lVar8 + 0x12e) != 0) {
                  uVar9 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar7 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10)
                                + 0x37) * 0x10 + 0x138 + lVar8);
                      goto code_r0x000180699b59;
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
                }
                puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x37);
code_r0x000180699b59:
                uStack_38 = uVar5;
                uStack_30 = uVar1;
                (*(code *)*puVar7)(plVar6,&uStack_38,puVar7[1]);
                plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                puVar7 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,0,0);
                if (plVar6 != (longlong *)0x0) {
                  lVar8 = *plVar6;
                  uVar5 = *puVar7;
                  uVar1 = *(undefined4 *)(puVar7 + 1);
                  if (*(ushort *)(lVar8 + 0x12e) != 0) {
                    uVar9 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar7 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                           (ulonglong)uVar9 * 0x10) + 0x57) * 0x10 + 0x138 + lVar8);
                        goto code_r0x000180699be9;
                      }
                      uVar9 = uVar9 + 1;
                    } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
                  }
                  puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x000180699be9:
                  uStack_38 = uVar5;
                  uStack_30 = uVar1;
                  (*(code *)*puVar7)(plVar6,&uStack_38,puVar7[1]);
                  UnityEngine_UIElements_VisualElement__Add(lVar3,lVar4,0);
                  uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                  UnityEngine_UIElements_VisualElement___ctor(uVar5,0);
                  SparkEstilo__Espaco(uVar5,0x40800000,0x41200000,0x41000000,0x41000000,0);
                  UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
                  *param_1 = uVar5;
                  func_0x000180314690(param_1,uVar5);
                  return lVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar3 = (*pcVar2)();
  return lVar3;
}

