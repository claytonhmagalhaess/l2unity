// SparkMapaWindow__MontaAbas__18063da80 @ 0x18063da80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__MontaAbas__18063da80(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ushort uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  
  if (cRam00000001834b3d34 == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkMapaWindow.TrocaAndar);
    FUN_180315380(TI_string__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3d34 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x180),0);
    *(undefined8 *)(param_1 + 0x298) = 0;
    func_0x000180314690(param_1 + 0x298,0);
    if (((*(longlong *)(param_1 + 0x188) != 0) &&
        (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x20), lVar5 != 0)) &&
       (lVar1 = *(longlong *)(param_1 + 0x180), lVar1 != 0)) {
      if (*(int *)(lVar5 + 0x18) < 2) {
        plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar1,0);
        uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (plVar8 != (longlong *)0x0) {
          uVar3 = 0;
          lVar5 = *plVar8;
          if (*(ushort *)(lVar5 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar3 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar4 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar3 * 0x10) +
                          0x33) * 0x10 + 0x138 + lVar5);
                goto LAB_1800050ad;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < *(ushort *)(lVar5 + 0x12e));
          }
          puVar4 = (undefined8 *)FUN_180312860(plVar8);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar4)(plVar8,uVar6,puVar4[1]);
          return;
        }
      }
      else {
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar1,0);
        uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar5 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
          if ((*(longlong *)(param_1 + 0x188) != 0) &&
             (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x20), lVar5 != 0)) {
            lVar5 = func_0x000180314710(TI_string__,*(undefined4 *)(lVar5 + 0x18));
            if (lVar5 != 0) {
              for (uVar9 = 0; (int)uVar9 < *(int *)(lVar5 + 0x18); uVar9 = uVar9 + 1) {
                if ((*(longlong *)(param_1 + 0x188) == 0) ||
                   (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x20), lVar1 == 0))
                goto code_r0x00018063dd0f;
                if (*(uint *)(lVar1 + 0x18) <= uVar9) {
code_r0x00018063dd15:
                  FUN_1803155c0();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar9 * 8);
                if (lVar1 == 0) goto code_r0x00018063dd0f;
                if (*(uint *)(lVar5 + 0x18) <= uVar9) goto code_r0x00018063dd15;
                *(undefined8 *)(lVar5 + 0x20 + (longlong)(int)uVar9 * 8) =
                     *(undefined8 *)(lVar1 + 0x10);
                func_0x000180314690(lVar5 + ((longlong)(int)uVar9 + 4) * 8);
              }
              uVar6 = *(undefined8 *)(param_1 + 0x180);
              uVar7 = func_0x000180315580(TI_System.Action<int>);
              FUN_180b7db20(uVar7,param_1,MD_SparkMapaWindow.TrocaAndar,0);
              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar6 = SparkEstilo__Abas__18071cbe0(uVar6,lVar5,uVar7,0);
              *(undefined8 *)(param_1 + 0x298) = uVar6;
              func_0x000180314690(param_1 + 0x298,uVar6);
              lVar5 = *(longlong *)(param_1 + 0x298);
              if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018063dcc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),*(undefined4 *)(param_1 + 400),
                           *(undefined8 *)(lVar5 + 0x28));
                return;
              }
            }
          }
        }
      }
    }
  }
code_r0x00018063dd0f:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

