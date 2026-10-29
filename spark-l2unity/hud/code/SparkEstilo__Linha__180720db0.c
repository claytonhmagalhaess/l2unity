// SparkEstilo__Linha__180720db0 @ 0x180720db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkEstilo__Linha__180720db0(void)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort uVar8;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b41f9 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass33_0._Linha_b__0);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass33_0._Linha_b__1);
    FUN_180315380(TI_SparkEstilo.<>c__DisplayClass33_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b41f9 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_SparkEstilo.<>c__DisplayClass33_0);
  Gear__UpdateWeaponType__1803dadf0(lVar3,0);
  uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar4,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = uVar4;
    func_0x000180314690(lVar3 + 0x10,uVar4);
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar3 + 0x10),0);
      uVar4 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
      if (lVar5 != 0) {
        FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
        if (*(longlong *)(lVar3 + 0x10) != 0) {
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar3 + 0x10),0);
          uVar4 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
          if (lVar5 != 0) {
            FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
            if (*(longlong *)(lVar3 + 0x10) != 0) {
              plVar6 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(lVar3 + 0x10),0);
              puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
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
                                (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10)
                                + 0x43) * 0x10 + 0x138 + lVar5);
                      goto code_r0x000180720fc9;
                    }
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
                }
                puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180720fc9:
                uStack_28 = uVar4;
                uStack_20 = uVar1;
                (*(code *)*puVar7)(plVar6,&uStack_28,puVar7[1]);
                if (*(longlong *)(lVar3 + 0x10) != 0) {
                  plVar6 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(lVar3 + 0x10),0);
                  puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
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
                                             (ulonglong)uVar8 * 0x10) + 0x61) * 0x10 + 0x138 + lVar5
                                   );
                          goto code_r0x000180721069;
                        }
                        uVar8 = uVar8 + 1;
                      } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
                    }
                    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x000180721069:
                    uStack_28 = uVar4;
                    uStack_20 = uVar1;
                    (*(code *)*puVar7)(plVar6,&uStack_28,puVar7[1]);
                    if (*(longlong *)(lVar3 + 0x10) != 0) {
                      lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(lVar3 + 0x10),0);
                      uVar4 = func_0x000182601c10(0,0);
                      if (lVar5 != 0) {
                        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                        lVar5 = *(longlong *)(lVar3 + 0x10);
                        uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                        FUN_18055b980(uVar4,lVar3,MD_SparkEstilo.__c__DisplayClass33_0._Linha_b__0,0);
                        if (lVar5 != 0) {
                          FUN_180990d50(lVar5,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                          lVar5 = *(longlong *)(lVar3 + 0x10);
                          uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                          FUN_18055b980(uVar4,lVar3,MD_SparkEstilo.__c__DisplayClass33_0._Linha_b__1,0);
                          if (lVar5 != 0) {
                            FUN_180990d50(lVar5,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                            return *(undefined8 *)(lVar3 + 0x10);
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
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}

