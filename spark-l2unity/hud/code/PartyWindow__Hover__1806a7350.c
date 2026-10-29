// PartyWindow__Hover__1806a7350 @ 0x1806a7350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PartyWindow__Hover__1806a7350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  ushort uVar12;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_50;
  undefined1 *puStack_30;
  
  if (cRam00000001834b3f7b == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(MD_PartyWindow.__c__DisplayClass38_0._Hover_b__0);
    FUN_180315380(MD_PartyWindow.__c__DisplayClass38_0._Hover_b__1);
    FUN_180315380(TI_PartyWindow.<>c__DisplayClass38_0);
    FUN_180315380(LIT_"'Data/UI/Assets/Party/'");
    cRam00000001834b3f7b = '\x01';
  }
  lVar5 = func_0x000180315580(TI_PartyWindow.<>c__DisplayClass38_0);
  Gear__UpdateWeaponType__1803dadf0(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_1;
    func_0x000180314690(lVar5 + 0x10,param_1);
    *(undefined8 *)(lVar5 + 0x18) = param_3;
    func_0x000180314690(lVar5 + 0x18,param_3);
    *(undefined8 *)(lVar5 + 0x20) = param_2;
    func_0x000180314690(lVar5 + 0x20,param_2);
    if (*(longlong *)(lVar5 + 0x10) != 0) {
      plVar6 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x10),0);
      uVar7 = System_String__Concat(LIT_"'Data/UI/Assets/Party/'",*(undefined8 *)(lVar5 + 0x20),0);
      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar7 = FUN_180a90ae0(uVar7,MR_SparkArte.Load<UnityEngine.Texture2D>);
      puVar8 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_88,uVar7,0)
      ;
      if (plVar6 != (longlong *)0x0) {
        lVar9 = *plVar6;
        uVar11 = *puVar8;
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        uVar7 = puVar8[4];
        if (*(ushort *)(lVar9 + 0x12e) != 0) {
          uVar12 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar8 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0xb)
                        * 0x10 + 0x138 + lVar9);
              goto code_r0x0001806a7527;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(ushort *)(lVar9 + 0x12e));
        }
        puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806a7527:
        uStack_88 = uVar11;
        uStack_80 = uVar2;
        uStack_78 = uVar3;
        uStack_70 = uVar4;
        uStack_68 = uVar7;
        (*(code *)*puVar8)(plVar6,&uStack_88,puVar8[1]);
        lVar9 = *(longlong *)(lVar5 + 0x10);
        uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
        FUN_18055b980(uVar7,lVar5,MD_PartyWindow.__c__DisplayClass38_0._Hover_b__0,0);
        if (lVar9 != 0) {
          FUN_180990d50(lVar9,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
          plVar6 = *(longlong **)(lVar5 + 0x10);
          lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
          FUN_18055b980(lVar9,lVar5,MD_PartyWindow.__c__DisplayClass38_0._Hover_b__1,0);
          lVar5 = MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>;
          if (plVar6 != (longlong *)0x0) {
            if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> + 0x38) == 0) {
              puStack_50 = (undefined1 *)0x180990d79;
              FUN_180315380(TI_UnityEngine.UIElements.EventCallbackRegistry);
              if (*(longlong *)(lVar5 + 0x38) == 0) {
                puStack_50 = &LAB_180990d88;
                FUN_180312fc0(lVar5);
              }
            }
            if (lVar9 != 0) {
              lVar10 = plVar6[3];
              if (lVar10 == 0) {
                puStack_50 = (undefined1 *)0x180990db0;
                lVar10 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallbackRegistry);
                puStack_50 = (undefined1 *)0x180990dbd;
                UnityEngine_UIElements_EventCallbackRegistry___ctor(lVar10,0);
                plVar6[3] = lVar10;
                puStack_50 = (undefined1 *)0x180990dcd;
                func_0x000180314690(plVar6 + 3,lVar10);
                if (lVar10 == 0) {
                  puStack_50 = (undefined1 *)0x180990e4a;
                  FUN_1803155d0();
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              puStack_50 = (undefined1 *)0x180990de8;
              FUN_1809c9fd0(lVar10,lVar9,0,*(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 8));
              lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x10);
              if (*(longlong *)(lVar5 + 0x38) == 0) {
                puStack_30 = (undefined1 *)0x1800331ba;
                FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
                if (*(longlong *)(lVar5 + 0x38) == 0) {
                  puStack_30 = &LAB_1800331c9;
                  FUN_180312fc0(lVar5);
                }
              }
              if (plVar6 != (longlong *)0x0) {
                if ((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
                   (*(longlong *)
                     (*(longlong *)(*plVar6 + 200) + -8 +
                     (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8) == TI_UnityEngine.UIElements.VisualElement)) {
                  lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 8);
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    puStack_30 = &LAB_180033216;
                    lVar9 = FUN_180312f40(lVar9);
                  }
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    puStack_30 = &LAB_180033227;
                    func_0x000180315660(lVar9);
                  }
                  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 8);
                  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    puStack_30 = &LAB_180033240;
                    lVar5 = FUN_180312f40(lVar5);
                  }
                  puStack_30 = &LAB_18003325f;
                  func_0x0001825c3d40(plVar6,1 << ((byte)*(undefined4 *)
                                                          (*(longlong *)(lVar5 + 0xb8) + 0x10) &
                                                  0x1f),0,0);
                }
              }
              return;
            }
            puStack_50 = (undefined1 *)0x180990e14;
            uVar7 = func_0x0001803153a0(TI_System.ArgumentException);
            puStack_50 = (undefined1 *)0x180990e1c;
            uVar7 = func_0x000180315580(uVar7);
            puStack_50 = (undefined1 *)0x180990e2b;
            uVar11 = func_0x0001803153a0(LIT_"'callback parameter is null'");
            puStack_50 = (undefined1 *)0x180990e39;
            System_ArgumentException___ctor(uVar7,uVar11,0);
            puStack_50 = (undefined1 *)0x180990e44;
            FUN_180315590(uVar7,lVar5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
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

