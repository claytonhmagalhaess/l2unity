// SkillbarMin__UpdateVisuals__180703e60 @ 0x180703e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarMin__UpdateVisuals__180703e60(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b4164 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'ExpandBtn'");
    FUN_180315380(LIT_"'Footer'");
    FUN_180315380(LIT_"'MinimizeBtn'");
    cRam00000001834b4164 = '\x01';
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = FUN_180b0e310(uVar4,LIT_"'Footer'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
  if (lVar3 != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
    uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar3 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
      lVar3 = FUN_180b0e310(*(undefined8 *)(param_1 + 0x10),LIT_"'ExpandBtn'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
      if (lVar3 != 0) {
        lVar3 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
        uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar3 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
          lVar3 = FUN_180b0e310(*(undefined8 *)(param_1 + 0x10),LIT_"'MinimizeBtn'",0,
                                MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
          if (lVar3 != 0) {
            lVar3 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
            uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
            if (lVar3 != 0) {
              FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
              if (*(longlong *)(param_1 + 0x10) != 0) {
                if (*(char *)(param_1 + 0x28) == '\0') {
                  plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style();
                  puVar6 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0xc0400000,0);
                  if (plVar5 == (longlong *)0x0) goto code_r0x00018070417a;
                  lVar3 = *plVar5;
                  uVar7 = 0;
                  uVar9 = (undefined4)*puVar6;
                  uVar10 = (undefined4)((ulonglong)*puVar6 >> 0x20);
                  uVar8 = *(undefined4 *)(puVar6 + 1);
                  if (*(ushort *)(lVar3 + 0x12e) != 0) {
code_r0x000180704080:
                    if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) !=
                        TI_UnityEngine.UIElements.IStyle) goto code_r0x00018070408c;
                    iVar2 = *(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) +
                            0x4f;
code_r0x000180704169:
                    puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + 0x138 + lVar3);
                    goto AbstractSkillbar__HideBar__1806f85c0;
                  }
code_r0x000180704094:
                  uVar4 = 0x4f;
                }
                else {
                  plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style();
                  puVar6 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0xc0400000,0);
                  if (plVar5 == (longlong *)0x0) goto code_r0x00018070417a;
                  lVar3 = *plVar5;
                  uVar7 = 0;
                  uVar9 = (undefined4)*puVar6;
                  uVar10 = (undefined4)((ulonglong)*puVar6 >> 0x20);
                  uVar8 = *(undefined4 *)(puVar6 + 1);
                  if (*(ushort *)(lVar3 + 0x12e) != 0) {
                    do {
                      if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        iVar2 = *(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10)
                                + 0x4b;
                        goto code_r0x000180704169;
                      }
                      uVar7 = uVar7 + 1;
                    } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
                  }
                  uVar4 = 0x4b;
                }
                puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,uVar4);
AbstractSkillbar__HideBar__1806f85c0:
                uStack_28 = CONCAT44(uVar10,uVar9);
                uStack_20 = uVar8;
                (*(code *)*puVar6)(plVar5,&uStack_28,puVar6[1]);
                if (cRam00000001834b415b == '\0') {
                  FUN_180315380(TI_UnityEngine.UIElements.IStyle);
                  FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                  cRam00000001834b415b = '\x01';
                }
                if (*(longlong *)(param_1 + 0x10) != 0) {
                  plVar5 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(param_1 + 0x10),0);
                  uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                  if (plVar5 != (longlong *)0x0) {
                    uVar7 = 0;
                    lVar3 = *plVar5;
                    if (*(ushort *)(lVar3 + 0x12e) != 0) {
                      do {
                        if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar6 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 +
                                             (ulonglong)uVar7 * 0x10) + 0x33) * 0x10 + 0x138 + lVar3
                                   );
                          goto LAB_1800050ad;
                        }
                        uVar7 = uVar7 + 1;
                      } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
                    }
                    puVar6 = (undefined8 *)FUN_180312860(plVar5);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)*puVar6)(plVar5,uVar4,puVar6[1]);
                    return;
                  }
                }
                FUN_1803155d0();
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
          }
        }
      }
    }
  }
code_r0x00018070417a:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_r0x00018070408c:
  uVar7 = uVar7 + 1;
  if (*(ushort *)(lVar3 + 0x12e) <= uVar7) goto code_r0x000180704094;
  goto code_r0x000180704080;
}

