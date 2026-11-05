// SparkQuestHud__Padrao__1806b35c0 @ 0x1806b35c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkQuestHud__Padrao__1806b35c0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ushort uVar7;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b3fdc == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(LIT_"'spark.quest.quadro.proporcao'");
    FUN_180315380(LIT_"'spark.quest.quadro.posicao'");
    cRam00000001834b3fdc = '\x01';
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  UnityEngine_PlayerPrefs__DeleteKey(LIT_"'spark.quest.quadro.proporcao'",0);
  UnityEngine_PlayerPrefs__DeleteKey(LIT_"'spark.quest.quadro.posicao'",0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar5 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
    puVar6 = (undefined8 *)UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_28,2,0)
    ;
    if (plVar5 != (longlong *)0x0) {
      lVar3 = *plVar5;
      uVar1 = *puVar6;
      uVar2 = *(undefined4 *)(puVar6 + 1);
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        uVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar6 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0x47) *
                      0x10 + 0x138 + lVar3);
            goto code_r0x0001806b36b9;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001806b36b9:
      uStack_28 = uVar1;
      uStack_20 = uVar2;
      (*(code *)*puVar6)(plVar5,&uStack_28,puVar6[1]);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        plVar5 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0x41400000,0);
        if (plVar5 != (longlong *)0x0) {
          lVar3 = *plVar5;
          uVar1 = *puVar6;
          uVar2 = *(undefined4 *)(puVar6 + 1);
          if (*(ushort *)(lVar3 + 0x12e) != 0) {
            uVar7 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) +
                          0x69) * 0x10 + 0x138 + lVar3);
                goto code_r0x0001806b3759;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x0001806b3759:
          uStack_28 = uVar1;
          uStack_20 = uVar2;
          (*(code *)*puVar6)(plVar5,&uStack_28,puVar6[1]);
          if (*(longlong *)(param_1 + 0x20) != 0) {
            plVar5 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0x20),0);
            puVar6 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0x43660000,0);
            if (plVar5 != (longlong *)0x0) {
              lVar3 = *plVar5;
              uVar1 = *puVar6;
              uVar2 = *(undefined4 *)(puVar6 + 1);
              if (*(ushort *)(lVar3 + 0x12e) != 0) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar6 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) +
                              0x73) * 0x10 + 0x138 + lVar3);
                    goto code_r0x0001806b37f7;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
              }
              puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001806b37f7:
              uStack_28 = uVar1;
              uStack_20 = uVar2;
              (*(code *)*puVar6)(plVar5,&uStack_28,puVar6[1]);
              return;
            }
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

