// InputManager__SetupInputActions__1804f6110 @ 0x1804f6110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InputManager__SetupInputActions__1804f6110(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint auStackX_8 [2];
  uint auStackX_18 [4];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (cRam00000001834b35ae == '\0') {
    FUN_180315380(TI_ty14);
    FUN_180315380(TI_ty14);
    FUN_180315380(LIT_"'CharacterStatus'");
    FUN_180315380(LIT_"'Ctrl'");
    FUN_180315380(LIT_"'SystemMenu'");
    FUN_180315380(LIT_"'Validate'");
    FUN_180315380(LIT_"'Move'");
    FUN_180315380(LIT_"'TargetSelf'");
    FUN_180315380(LIT_"'ZoomAxis'");
    FUN_180315380(LIT_"'Actions'");
    FUN_180315380(LIT_"'Shortcut{0}-{1}'");
    FUN_180315380(LIT_"'NextTarget'");
    FUN_180315380(LIT_"'Attack'");
    FUN_180315380(LIT_"'Inventory'");
    FUN_180315380(LIT_"'RightClick'");
    FUN_180315380(LIT_"'ArrowUp'");
    FUN_180315380(LIT_"'Skills'");
    FUN_180315380(LIT_"'CloseWindow'");
    FUN_180315380(LIT_"'Test'");
    FUN_180315380(LIT_"'Sit'");
    FUN_180315380(LIT_"'CameraAxis'");
    FUN_180315380(LIT_"'LeftClick'");
    FUN_180315380(LIT_"'ArrowDown'");
    FUN_180315380(LIT_"'Shift'");
    cRam00000001834b35ae = '\x01';
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar2 = UnityEngine_InputSystem_PlayerInput__get_actions(*(longlong *)(param_1 + 0x118),0);
    if (lVar2 != 0) {
      uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item(lVar2,LIT_"'LeftClick'",0);
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      func_0x000180314690(param_1 + 0x20,uVar3);
      if (*(longlong *)(param_1 + 0x118) != 0) {
        lVar2 = UnityEngine_InputSystem_PlayerInput__get_actions(*(longlong *)(param_1 + 0x118),0);
        if (lVar2 != 0) {
          uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item(lVar2,LIT_"'RightClick'",0);
          *(undefined8 *)(param_1 + 0x28) = uVar3;
          func_0x000180314690(param_1 + 0x28,uVar3);
          if (*(longlong *)(param_1 + 0x118) != 0) {
            lVar2 = UnityEngine_InputSystem_PlayerInput__get_actions
                              (*(longlong *)(param_1 + 0x118),0);
            if (lVar2 != 0) {
              uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                (lVar2,LIT_"'CameraAxis'",0);
              *(undefined8 *)(param_1 + 0x30) = uVar3;
              func_0x000180314690(param_1 + 0x30,uVar3);
              if (*(longlong *)(param_1 + 0x118) != 0) {
                lVar2 = UnityEngine_InputSystem_PlayerInput__get_actions
                                  (*(longlong *)(param_1 + 0x118),0);
                if (lVar2 != 0) {
                  uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                    (lVar2,LIT_"'ZoomAxis'",0);
                  *(undefined8 *)(param_1 + 0x38) = uVar3;
                  func_0x000180314690(param_1 + 0x38,uVar3);
                  if (*(longlong *)(param_1 + 0x118) != 0) {
                    lVar2 = UnityEngine_InputSystem_PlayerInput__get_actions
                                      (*(longlong *)(param_1 + 0x118),0);
                    if (lVar2 != 0) {
                      uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                        (lVar2,LIT_"'Move'",0);
                      *(undefined8 *)(param_1 + 0x40) = uVar3;
                      func_0x000180314690(param_1 + 0x40,uVar3);
                      if (*(longlong *)(param_1 + 0x118) != 0) {
                        lVar2 = UnityEngine_InputSystem_PlayerInput__get_actions
                                          (*(longlong *)(param_1 + 0x118),0);
                        if (lVar2 != 0) {
                          uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                            (lVar2,LIT_"'ArrowUp'",0);
                          *(undefined8 *)(param_1 + 0x48) = uVar3;
                          func_0x000180314690(param_1 + 0x48,uVar3);
                          if (*(longlong *)(param_1 + 0x118) != 0) {
                            lVar2 = UnityEngine_InputSystem_PlayerInput__get_actions
                                              (*(longlong *)(param_1 + 0x118),0);
                            if (lVar2 != 0) {
                              uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                                (lVar2,LIT_"'ArrowDown'",0);
                              *(undefined8 *)(param_1 + 0x50) = uVar3;
                              func_0x000180314690(param_1 + 0x50,uVar3);
                              if (*(longlong *)(param_1 + 0x118) != 0) {
                                lVar2 = UnityEngine_InputSystem_PlayerInput__get_actions
                                                  (*(longlong *)(param_1 + 0x118),0);
                                if (lVar2 != 0) {
                                  uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                                    (lVar2,LIT_"'NextTarget'",0);
                                  *(undefined8 *)(param_1 + 0x60) = uVar3;
                                  func_0x000180314690(param_1 + 0x60,uVar3);
                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                    lVar2 = UnityEngine_InputSystem_PlayerInput__get_actions
                                                      (*(longlong *)(param_1 + 0x118),0);
                                    if (lVar2 != 0) {
                                      uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                                        (lVar2,LIT_"'TargetSelf'",0);
                                      *(undefined8 *)(param_1 + 0x68) = uVar3;
                                      func_0x000180314690(param_1 + 0x68,uVar3);
                                      if (*(longlong *)(param_1 + 0x118) != 0) {
                                        lVar2 = UnityEngine_InputSystem_PlayerInput__get_actions
                                                          (*(longlong *)(param_1 + 0x118),0);
                                        if (lVar2 != 0) {
                                          uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar2,LIT_"'Attack'",0);
                                          *(undefined8 *)(param_1 + 0x58) = uVar3;
                                          func_0x000180314690(param_1 + 0x58,uVar3);
                                          if (*(longlong *)(param_1 + 0x118) != 0) {
                                            lVar2 = UnityEngine_InputSystem_PlayerInput__get_actions
                                                              (*(longlong *)(param_1 + 0x118),0);
                                            if (lVar2 != 0) {
                                              uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar2,LIT_"'Sit'",0);
                                              *(undefined8 *)(param_1 + 0x70) = uVar3;
                                              func_0x000180314690(param_1 + 0x70,uVar3);
                                              if (*(longlong *)(param_1 + 0x118) != 0) {
                                                lVar2 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                if (lVar2 != 0) {
                                                  uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar2,LIT_"'Ctrl'",0);
                                                  *(undefined8 *)(param_1 + 0x78) = uVar3;
                                                  func_0x000180314690(param_1 + 0x78,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar2 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar2 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar2,LIT_"'Shift'",0);
                                                  *(undefined8 *)(param_1 + 0x80) = uVar3;
                                                  func_0x000180314690(param_1 + 0x80,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar2 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar2 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar2,LIT_"'Inventory'",0);
                                                  *(undefined8 *)(param_1 + 0x88) = uVar3;
                                                  func_0x000180314690(param_1 + 0x88,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar2 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar2 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar2,LIT_"'CharacterStatus'",0);
                                                  *(undefined8 *)(param_1 + 0x90) = uVar3;
                                                  func_0x000180314690(param_1 + 0x90,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar2 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar2 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar2,LIT_"'Actions'",0);
                                                  *(undefined8 *)(param_1 + 0x98) = uVar3;
                                                  func_0x000180314690(param_1 + 0x98,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar2 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar2 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar2,LIT_"'CloseWindow'",0);
                                                  *(undefined8 *)(param_1 + 0xa0) = uVar3;
                                                  func_0x000180314690(param_1 + 0xa0,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar2 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar2 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar2,LIT_"'SystemMenu'",0);
                                                  *(undefined8 *)(param_1 + 0xa8) = uVar3;
                                                  func_0x000180314690(param_1 + 0xa8,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar2 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar2 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar2,LIT_"'Skills'",0);
                                                  *(undefined8 *)(param_1 + 0xb0) = uVar3;
                                                  func_0x000180314690(param_1 + 0xb0,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar2 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar2 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar2,LIT_"'Validate'",0);
                                                  *(undefined8 *)(param_1 + 0xb8) = uVar3;
                                                  func_0x000180314690(param_1 + 0xb8,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar2 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar2 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar2,LIT_"'Test'",0);
                                                  *(undefined8 *)(param_1 + 0xc0) = uVar3;
                                                  func_0x000180314690(param_1 + 0xc0,uVar3);
                                                  uStack_48 = 5;
                                                  uStack_40 = 0xc;
                                                  uVar3 = func_0x000180314680(TI_ty14,
                                                                              &uStack_48);
                                                  *(undefined8 *)(param_1 + 0x100) = uVar3;
                                                  func_0x000180314690(param_1 + 0x100,uVar3);
                                                  uVar6 = 1;
                                                  do {
                                                    uVar7 = 1;
                                                    do {
                                                      if (*(longlong *)(param_1 + 0x118) == 0) {
DAT_1804f69ac:
                                                        FUN_1803155d0();
                                                        pcVar1 = (code *)swi(3);
                                                        (*pcVar1)();
                                                        return;
                                                      }
                                                      lVar2 = *(longlong *)(param_1 + 0x100);
                                                      lVar4 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  auStackX_8[0] = uVar6;
                                                  uVar3 = func_0x000180314670(_DAT_1834c6268,
                                                                              auStackX_8);
                                                  auStackX_18[0] = uVar7;
                                                  uVar5 = func_0x000180314670(_DAT_1834c6268,
                                                                              auStackX_18);
                                                  uVar3 = System_String__Format
                                                                    (LIT_"'Shortcut{0}-{1}'",uVar3,
                                                                     uVar5,0);
                                                  if (lVar4 == 0) goto DAT_1804f69ac;
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar4,uVar3,0);
                                                  if (lVar2 == 0) goto DAT_1804f69ac;
                                                  FUN_180005a00(lVar2,(ulonglong)uVar6 - 1,
                                                                (ulonglong)uVar7 - 1);
                                                  uVar7 = uVar7 + 1;
                                                  } while ((int)uVar7 < 0xd);
                                                  uVar6 = uVar6 + 1;
                                                  if (5 < (int)uVar6) {
                                                    uStack_48 = 5;
                                                    uStack_40 = 0xc;
                                                    uVar3 = func_0x000180314680(TI_ty14
                                                                                ,&uStack_48);
                                                    *(undefined8 *)(param_1 + 0x108) = uVar3;
                                                    func_0x000180314690(param_1 + 0x108,uVar3);
                                                    uStack_38 = 5;
                                                    uStack_30 = 0xc;
                                                    uVar3 = func_0x000180314680(TI_ty14
                                                                                ,&uStack_38);
                                                    *(undefined8 *)(param_1 + 0x110) = uVar3;
                                                    func_0x000180314690(param_1 + 0x110,uVar3);
                                                    return;
                                                  }
                                                  } while( true );
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
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

