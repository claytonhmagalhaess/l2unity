// SparkEstilo__Fechar__180720510 @ 0x180720510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkEstilo__Fechar__180720510(undefined8 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ushort uVar13;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b41f6 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass30_0._Fechar_b__0);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass30_0._Fechar_b__1);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass30_0._Fechar_b__2);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass30_0._Fechar_b__3);
    FUN_180315380(TI_SparkEstilo.<>c__DisplayClass30_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Frame/Frame_DF_Btn_Close/frames_df_btn_close'");
    cRam00000001834b41f6 = '\x01';
  }
  lVar7 = func_0x000180315580(TI_SparkEstilo.<>c__DisplayClass30_0);
  Gear__UpdateWeaponType__1803dadf0(lVar7,0);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x20) = param_1;
    func_0x000180314690(lVar7 + 0x20,param_1);
    uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar8,0);
    *(undefined8 *)(lVar7 + 0x10) = uVar8;
    func_0x000180314690(lVar7 + 0x10,uVar8);
    if (*(longlong *)(lVar7 + 0x10) != 0) {
      plVar9 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x10),0);
      if (*(longlong *)(lVar7 + 0x10) != 0) {
        plVar10 = (longlong *)
                  UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x10),0);
        puVar11 = (undefined8 *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x41800000,0);
        if (plVar10 != (longlong *)0x0) {
          lVar12 = *plVar10;
          uVar8 = *puVar11;
          uVar1 = *(undefined4 *)(puVar11 + 1);
          if (*(ushort *)(lVar12 + 0x12e) != 0) {
            uVar13 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar11 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                           0x43) * 0x10 + 0x138 + lVar12);
                goto code_r0x000180720727;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(ushort *)(lVar12 + 0x12e));
          }
          puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180720727:
          uStack_78 = uVar8;
          uStack_70 = uVar1;
          (*(code *)*puVar11)(plVar10,&uStack_78,puVar11[1]);
          if (plVar9 != (longlong *)0x0) {
            lVar12 = *plVar9;
            if (*(ushort *)(lVar12 + 0x12e) != 0) {
              uVar13 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar11 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10)
                             + 0xad) * 0x10 + 0x138 + lVar12);
                  goto code_r0x0001807207a9;
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < *(ushort *)(lVar12 + 0x12e));
            }
            puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001807207a9:
            uStack_78 = uVar8;
            uStack_70 = uVar1;
            (*(code *)*puVar11)(plVar9,&uStack_78,puVar11[1]);
            if (*(longlong *)(lVar7 + 0x10) != 0) {
              lVar12 = UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(lVar7 + 0x10),0);
              uVar8 = func_0x000182601c10(0,0);
              if (lVar12 != 0) {
                FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar12,uVar8);
                if (*(longlong *)(lVar7 + 0x10) != 0) {
                  plVar9 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(lVar7 + 0x10),0);
                  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar8 = SparkEstilo__Textura__180723790(LIT_"'Frame/Frame_DF_Btn_Close/frames_df_btn_close'",0);
                  puVar11 = (undefined8 *)
                            UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar8,0);
                  if (plVar9 != (longlong *)0x0) {
                    lVar12 = *plVar9;
                    uVar3 = *puVar11;
                    uVar4 = puVar11[1];
                    uVar5 = puVar11[2];
                    uVar6 = puVar11[3];
                    uVar8 = puVar11[4];
                    if (*(ushort *)(lVar12 + 0x12e) != 0) {
                      uVar13 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar13 * 0x10)
                            == TI_UnityEngine.UIElements.IStyle) {
                          puVar11 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 +
                                              (ulonglong)uVar13 * 0x10) + 0xb) * 0x10 + 0x138 +
                                    lVar12);
                          goto code_r0x0001807208b7;
                        }
                        uVar13 = uVar13 + 1;
                      } while (uVar13 < *(ushort *)(lVar12 + 0x12e));
                    }
                    puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001807208b7:
                    uStack_68 = uVar3;
                    uStack_60 = uVar4;
                    uStack_58 = uVar5;
                    uStack_50 = uVar6;
                    uStack_48 = uVar8;
                    (*(code *)*puVar11)(plVar9,&uStack_68,puVar11[1]);
                    lVar12 = *(longlong *)(lVar7 + 0x10);
                    *(undefined1 *)(lVar7 + 0x18) = 0;
                    uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                    FUN_18055b980(uVar8,lVar7,MD_SparkEstilo.__c__DisplayClass30_0._Fechar_b__0,0);
                    if (lVar12 != 0) {
                      FUN_180990d50(lVar12,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                      lVar12 = *(longlong *)(lVar7 + 0x10);
                      uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                      FUN_18055b980(uVar8,lVar7,MD_SparkEstilo.__c__DisplayClass30_0._Fechar_b__1,0);
                      if (lVar12 != 0) {
                        FUN_180990d50(lVar12,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                        lVar12 = *(longlong *)(lVar7 + 0x10);
                        uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
                        FUN_18055b980(uVar8,lVar7,MD_SparkEstilo.__c__DisplayClass30_0._Fechar_b__2,0);
                        if (lVar12 != 0) {
                          FUN_180990d50(lVar12,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
                          lVar12 = *(longlong *)(lVar7 + 0x10);
                          uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
                          FUN_18055b980(uVar8,lVar7,MD_SparkEstilo.__c__DisplayClass30_0._Fechar_b__3,0);
                          if (lVar12 != 0) {
                            FUN_180990d50(lVar12,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>);
                            return *(undefined8 *)(lVar7 + 0x10);
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
  uVar8 = (*pcVar2)();
  return uVar8;
}

