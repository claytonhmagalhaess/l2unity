// SparkMapaWindow__Avisa__180639150 @ 0x180639150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__Avisa__180639150(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ushort uVar6;
  
  if (cRam00000001834b3d38 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    FUN_180315380(MD_SparkMapaWindow._Avisa_b__182_0);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3d38 = '\x01';
  }
  plVar4 = *(longlong **)(param_1 + 0x150);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0xe48))(plVar4,param_2,*(undefined8 *)(*plVar4 + 0xe50));
    if (*(longlong *)(param_1 + 0x150) != 0) {
      lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x150),0);
      uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar2 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
        if (*(longlong *)(param_1 + 0x168) != 0) {
          FUN_180002390(2,TI_UnityEngine.UIElements.IVisualElementScheduledItem);
        }
        if (*(longlong *)(param_1 + 0x150) != 0) {
          plVar4 = (longlong *)func_0x0001818f3de0(*(longlong *)(param_1 + 0x150),0);
          uVar3 = func_0x000180315580(TI_System.Action);
          FUN_1816a9c60(uVar3,param_1,MD_SparkMapaWindow._Avisa_b__182_0,0);
          if (plVar4 != (longlong *)0x0) {
            lVar2 = *plVar4;
            uVar6 = 0;
            if (*(ushort *)(lVar2 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar6 * 0x10) ==
                    TI_UnityEngine.UIElements.IVisualElementScheduler) {
                  puVar5 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10) + 1
                            ) * 0x10 + 0x138 + lVar2);
                  goto code_r0x0001806392d9;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < *(ushort *)(lVar2 + 0x12e));
            }
            puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IVisualElementScheduler,1);
code_r0x0001806392d9:
            uVar3 = (*(code *)*puVar5)(plVar4,uVar3,puVar5[1]);
            *(undefined8 *)(param_1 + 0x168) = uVar3;
            func_0x000180314690(param_1 + 0x168,uVar3);
            plVar4 = *(longlong **)(param_1 + 0x168);
            if (plVar4 != (longlong *)0x0) {
              lVar2 = *plVar4;
              if (*(ushort *)(lVar2 + 0x12e) != 0) {
                uVar6 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar6 * 0x10) ==
                      TI_UnityEngine.UIElements.IVisualElementScheduledItem) {
                    puVar5 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10) +
                              3) * 0x10 + 0x138 + lVar2);
                    goto code_r0x000180639355;
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 < *(ushort *)(lVar2 + 0x12e));
              }
              puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IVisualElementScheduledItem,3);
code_r0x000180639355:
                    /* WARNING: Could not recover jumptable at 0x000180639370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar5)(plVar4,0x9c4,puVar5[1]);
              return;
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

