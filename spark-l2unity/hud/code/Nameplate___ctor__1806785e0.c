// Nameplate___ctor__1806785e0 @ 0x1806785e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Nameplate___ctor__1806785e0
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ushort uVar9;
  undefined8 uStack_28;
  
  if (cRam00000001834b3dfe == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MD_Nameplate.AoMudarGeometria);
    cRam00000001834b3dfe = '\x01';
  }
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x84) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x88) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x8c) = 0x7fc00000;
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(undefined1 *)(param_1 + 0xa4) = 1;
  Gear__UpdateWeaponType__1803dadf0(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  func_0x000180314690(param_1 + 0x10,param_2);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  func_0x000180314690(param_1 + 0x28,param_3);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  func_0x000180314690(param_1 + 0x30,param_4);
  if (param_5 != 0) {
    uVar3 = UnityEngine_Component__get_transform(param_5,0);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    func_0x000180314690(param_1 + 0x40,uVar3);
    *(longlong *)(param_1 + 0x50) = param_5;
    func_0x000180314690(param_1 + 0x50,param_5);
    if ((*(longlong *)(param_5 + 0x30) != 0) &&
       (plVar4 = *(longlong **)(param_1 + 0x28), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0xe48))
                (plVar4,*(undefined8 *)(*(longlong *)(param_5 + 0x30) + 0x18),
                 *(undefined8 *)(*plVar4 + 0xe50));
      if ((*(longlong *)(param_5 + 0x30) != 0) &&
         (plVar4 = *(longlong **)(param_1 + 0x30), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0xe48))
                  (plVar4,*(undefined8 *)(*(longlong *)(param_5 + 0x30) + 0x20),
                   *(undefined8 *)(*plVar4 + 0xe50));
        *(undefined1 *)(param_1 + 0x48) = 1;
        if (*(longlong *)(param_1 + 0x10) != 0) {
          UnityEngine_UIElements_VisualElement__set_usageHints(*(longlong *)(param_1 + 0x10),1,0);
          if (*(longlong *)(param_1 + 0x10) != 0) {
            plVar4 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0x10),0);
            puVar5 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0,0);
            if (plVar4 != (longlong *)0x0) {
              lVar2 = *plVar4;
              uVar3 = *puVar5;
              if (*(ushort *)(lVar2 + 0x12e) != 0) {
                uVar9 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar5 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                              0x47) * 0x10 + 0x138 + lVar2);
                    goto code_r0x0001806787f9;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(ushort *)(lVar2 + 0x12e));
              }
              puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001806787f9:
              uStack_28 = uVar3;
              (*(code *)*puVar5)(plVar4,&uStack_28,puVar5[1]);
              if (*(longlong *)(param_1 + 0x10) != 0) {
                plVar4 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(param_1 + 0x10),0);
                puVar5 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0,0);
                if (plVar4 != (longlong *)0x0) {
                  lVar2 = *plVar4;
                  uVar3 = *puVar5;
                  if (*(ushort *)(lVar2 + 0x12e) != 0) {
                    uVar9 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar5 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 +
                                           (ulonglong)uVar9 * 0x10) + 0x73) * 0x10 + 0x138 + lVar2);
                        goto code_r0x000180678899;
                      }
                      uVar9 = uVar9 + 1;
                    } while (uVar9 < *(ushort *)(lVar2 + 0x12e));
                  }
                  puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x000180678899:
                  uStack_28 = uVar3;
                  (*(code *)*puVar5)(plVar4,&uStack_28,puVar5[1]);
                  plVar4 = *(longlong **)(param_1 + 0x10);
                  lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>);
                  FUN_18055b980(lVar6,param_1,MD_Nameplate.AoMudarGeometria,0);
                  lVar2 = MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>;
                  if (plVar4 != (longlong *)0x0) {
                    if (*(longlong *)(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent> + 0x38) == 0) {
                      FUN_180315380(TI_UnityEngine.UIElements.EventCallbackRegistry);
                      if (*(longlong *)(lVar2 + 0x38) == 0) {
                        FUN_180312fc0(lVar2);
                      }
                    }
                    if (lVar6 != 0) {
                      lVar7 = plVar4[3];
                      if (lVar7 == 0) {
                        lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallbackRegistry);
                        UnityEngine_UIElements_EventCallbackRegistry___ctor(lVar7,0);
                        plVar4[3] = lVar7;
                        func_0x000180314690(plVar4 + 3,lVar7);
                        if (lVar7 == 0) {
                          FUN_1803155d0();
                          pcVar1 = (code *)swi(3);
                          (*pcVar1)();
                          return;
                        }
                      }
                      FUN_1809c9fd0(lVar7,lVar6,0,*(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 8));
                      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x10);
                      if (*(longlong *)(lVar2 + 0x38) == 0) {
                        FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
                        if (*(longlong *)(lVar2 + 0x38) == 0) {
                          FUN_180312fc0(lVar2);
                        }
                      }
                      if (plVar4 != (longlong *)0x0) {
                        if ((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
                           (*(longlong *)
                             (*(longlong *)(*plVar4 + 200) + -8 +
                             (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8) == TI_UnityEngine.UIElements.VisualElement)) {
                          lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 8);
                          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                            lVar6 = FUN_180312f40(lVar6);
                          }
                          if (*(int *)(lVar6 + 0xe4) == 0) {
                            func_0x000180315660(lVar6);
                          }
                          lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 8);
                          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                            lVar2 = FUN_180312f40(lVar2);
                          }
                          func_0x0001825c3d40(plVar4,1 << ((byte)*(undefined4 *)
                                                                  (*(longlong *)(lVar2 + 0xb8) +
                                                                  0x10) & 0x1f),0,0);
                        }
                      }
                      return;
                    }
                    uVar3 = func_0x0001803153a0(TI_System.ArgumentException);
                    uVar3 = func_0x000180315580(uVar3);
                    uVar8 = func_0x0001803153a0(LIT_"'callback parameter is null'");
                    System_ArgumentException___ctor(uVar3,uVar8,0);
                    FUN_180315590(uVar3,lVar2);
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
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

