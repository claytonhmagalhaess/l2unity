// SparkFps__Monta__18049a430 @ 0x18049a430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkFps__Monta__18049a430(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort uVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b3288 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'SparkFps'");
    cRam00000001834b3288 = '\x01';
  }
  if ((param_2 == 0) || (*(longlong *)(param_1 + 0x20) != 0)) {
    return;
  }
  uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
  UnityEngine_UIElements_Label___ctor(uVar4,LIT_"''",0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  func_0x000180314690(param_1 + 0x20,uVar4);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    UnityEngine_UIElements_VisualElement__set_name
              (*(longlong *)(param_1 + 0x20),LIT_"'SparkFps'",0);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      UnityEngine_UIElements_VisualElement__set_pickingMode(*(longlong *)(param_1 + 0x20),1,0);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
        uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
        if (lVar5 != 0) {
          FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
          if (*(longlong *)(param_1 + 0x20) != 0) {
            plVar6 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0x20),0);
            puVar7 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,0x40800000,0);
            if (plVar6 != (longlong *)0x0) {
              lVar5 = *plVar6;
              uVar4 = *puVar7;
              uVar1 = *(undefined4 *)(puVar7 + 1);
              if (*(ushort *)(lVar5 + 0x12e) != 0) {
                uVar8 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar7 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                              0x47) * 0x10 + 0x138 + lVar5);
                    goto code_r0x00018049a5f9;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
              }
              puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x00018049a5f9:
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
              uStack_58 = uVar4;
              (*(code *)*puVar7)(plVar6,&uStack_58,puVar7[1]);
              if (*(longlong *)(param_1 + 0x20) != 0) {
                plVar6 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(param_1 + 0x20),0);
                puVar7 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,0x40000000,0);
                if (plVar6 != (longlong *)0x0) {
                  lVar5 = *plVar6;
                  uVar4 = *puVar7;
                  uVar1 = *(undefined4 *)(puVar7 + 1);
                  if (*(ushort *)(lVar5 + 0x12e) != 0) {
                    uVar8 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar7 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                           (ulonglong)uVar8 * 0x10) + 0x73) * 0x10 + 0x138 + lVar5);
                        goto code_r0x00018049a699;
                      }
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
                  }
                  puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x00018049a699:
                  uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
                  uStack_58 = uVar4;
                  (*(code *)*puVar7)(plVar6,&uStack_58,puVar7[1]);
                  if (*(longlong *)(param_1 + 0x20) != 0) {
                    plVar6 = (longlong *)
                             UnityEngine_UIElements_VisualElement__get_style
                                       (*(longlong *)(param_1 + 0x20),0);
                    uStack_58 = 0;
                    uStack_50 = 0x3f80000000000000;
                    puVar7 = (undefined8 *)
                             UnityEngine_UIElements_StyleColor__op_Implicit(auStack_38,&uStack_58,0)
                    ;
                    if (plVar6 != (longlong *)0x0) {
                      lVar5 = *plVar6;
                      uVar4 = *puVar7;
                      uVar3 = puVar7[1];
                      uVar1 = *(undefined4 *)(puVar7 + 2);
                      if (*(ushort *)(lVar5 + 0x12e) != 0) {
                        uVar8 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar7 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                               (ulonglong)uVar8 * 0x10) + 0xa3) * 0x10 + 0x138 +
                                     lVar5);
                            goto code_r0x00018049a749;
                          }
                          uVar8 = uVar8 + 1;
                        } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
                      }
                      puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xa3);
code_r0x00018049a749:
                      uStack_58 = uVar4;
                      uStack_50 = uVar3;
                      uStack_48 = uVar1;
                      (*(code *)*puVar7)(plVar6,&uStack_58,puVar7[1]);
                      UnityEngine_UIElements_VisualElement__Add
                                (param_2,*(undefined8 *)(param_1 + 0x20),0);
                      SparkFps__Atualiza(param_1,0);
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
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

