// InputManager__Awake__1804f5f50 @ 0x1804f5f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InputManager__Awake__1804f5f50(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint auStackX_18 [4];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  
  if (cRam00000001834b35ad == '\0') {
    puStack_30 = &UNK_1804f5f72;
    FUN_180315380(MR_UnityEngine.Component.GetComponent<UnityEngine.InputSystem.PlayerInput>);
    puStack_30 = &UNK_1804f5f7e;
    FUN_180315380(TI_InputManager);
    puStack_30 = &UNK_1804f5f8a;
    FUN_180315380(TI_UnityEngine.Object);
    puStack_30 = &UNK_1804f5f96;
    FUN_180315380(TI_SparkOpcoes);
    puStack_30 = &UNK_1804f5fa2;
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b35ad = '\x01';
  }
  uVar3 = **(undefined8 **)(TI_InputManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    puStack_30 = &UNK_1804f5fcf;
    func_0x000180315660();
  }
  puStack_30 = &UNK_1804f5fdc;
  cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if (cVar2 == '\0') {
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      puStack_30 = &UNK_1804f5ff5;
      func_0x000180315660();
    }
    puStack_30 = &UNK_1804f5fff;
    UnityEngine_Object__Destroy(param_1,0);
  }
  else {
    **(longlong **)(TI_InputManager + 0xb8) = param_1;
    puStack_30 = &UNK_1804f6028;
    func_0x000180314690(*(undefined8 *)(TI_InputManager + 0xb8),param_1);
  }
  puStack_30 = &UNK_1804f6037;
  uVar3 = FUN_180997040(param_1,MR_UnityEngine.Component.GetComponent<UnityEngine.InputSystem.PlayerInput>);
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  puStack_30 = &UNK_1804f604d;
  func_0x000180314690(param_1 + 0x118,uVar3);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    puStack_30 = &UNK_1804f60b7;
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puStack_30 = &UNK_1804f6060;
  uVar3 = UnityEngine_InputSystem_PlayerInput__get_actions(*(longlong *)(param_1 + 0x118),0);
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    puStack_30 = &UNK_1804f6078;
    func_0x000180315660();
  }
  puStack_30 = &UNK_1804f6082;
  SparkTeclas__CarregaJogo__1804ca5c0(uVar3,0);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    puStack_30 = &UNK_1804f6097;
    func_0x000180315660();
  }
  puStack_30 = &UNK_1804f609e;
  SparkOpcoes__Carrega__1804a3c40(0);
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
    lVar4 = UnityEngine_InputSystem_PlayerInput__get_actions(*(longlong *)(param_1 + 0x118),0);
    if (lVar4 != 0) {
      uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item(lVar4,LIT_"'LeftClick'",0);
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      func_0x000180314690(param_1 + 0x20,uVar3);
      if (*(longlong *)(param_1 + 0x118) != 0) {
        lVar4 = UnityEngine_InputSystem_PlayerInput__get_actions(*(longlong *)(param_1 + 0x118),0);
        if (lVar4 != 0) {
          uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item(lVar4,LIT_"'RightClick'",0);
          *(undefined8 *)(param_1 + 0x28) = uVar3;
          func_0x000180314690(param_1 + 0x28,uVar3);
          if (*(longlong *)(param_1 + 0x118) != 0) {
            lVar4 = UnityEngine_InputSystem_PlayerInput__get_actions
                              (*(longlong *)(param_1 + 0x118),0);
            if (lVar4 != 0) {
              uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                (lVar4,LIT_"'CameraAxis'",0);
              *(undefined8 *)(param_1 + 0x30) = uVar3;
              func_0x000180314690(param_1 + 0x30,uVar3);
              if (*(longlong *)(param_1 + 0x118) != 0) {
                lVar4 = UnityEngine_InputSystem_PlayerInput__get_actions
                                  (*(longlong *)(param_1 + 0x118),0);
                if (lVar4 != 0) {
                  uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                    (lVar4,LIT_"'ZoomAxis'",0);
                  *(undefined8 *)(param_1 + 0x38) = uVar3;
                  func_0x000180314690(param_1 + 0x38,uVar3);
                  if (*(longlong *)(param_1 + 0x118) != 0) {
                    lVar4 = UnityEngine_InputSystem_PlayerInput__get_actions
                                      (*(longlong *)(param_1 + 0x118),0);
                    if (lVar4 != 0) {
                      uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                        (lVar4,LIT_"'Move'",0);
                      *(undefined8 *)(param_1 + 0x40) = uVar3;
                      func_0x000180314690(param_1 + 0x40,uVar3);
                      if (*(longlong *)(param_1 + 0x118) != 0) {
                        lVar4 = UnityEngine_InputSystem_PlayerInput__get_actions
                                          (*(longlong *)(param_1 + 0x118),0);
                        if (lVar4 != 0) {
                          uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                            (lVar4,LIT_"'ArrowUp'",0);
                          *(undefined8 *)(param_1 + 0x48) = uVar3;
                          func_0x000180314690(param_1 + 0x48,uVar3);
                          if (*(longlong *)(param_1 + 0x118) != 0) {
                            lVar4 = UnityEngine_InputSystem_PlayerInput__get_actions
                                              (*(longlong *)(param_1 + 0x118),0);
                            if (lVar4 != 0) {
                              uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                                (lVar4,LIT_"'ArrowDown'",0);
                              *(undefined8 *)(param_1 + 0x50) = uVar3;
                              func_0x000180314690(param_1 + 0x50,uVar3);
                              if (*(longlong *)(param_1 + 0x118) != 0) {
                                lVar4 = UnityEngine_InputSystem_PlayerInput__get_actions
                                                  (*(longlong *)(param_1 + 0x118),0);
                                if (lVar4 != 0) {
                                  uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                                    (lVar4,LIT_"'NextTarget'",0);
                                  *(undefined8 *)(param_1 + 0x60) = uVar3;
                                  func_0x000180314690(param_1 + 0x60,uVar3);
                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                    lVar4 = UnityEngine_InputSystem_PlayerInput__get_actions
                                                      (*(longlong *)(param_1 + 0x118),0);
                                    if (lVar4 != 0) {
                                      uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                                        (lVar4,LIT_"'TargetSelf'",0);
                                      *(undefined8 *)(param_1 + 0x68) = uVar3;
                                      func_0x000180314690(param_1 + 0x68,uVar3);
                                      if (*(longlong *)(param_1 + 0x118) != 0) {
                                        lVar4 = UnityEngine_InputSystem_PlayerInput__get_actions
                                                          (*(longlong *)(param_1 + 0x118),0);
                                        if (lVar4 != 0) {
                                          uVar3 = UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar4,LIT_"'Attack'",0);
                                          *(undefined8 *)(param_1 + 0x58) = uVar3;
                                          func_0x000180314690(param_1 + 0x58,uVar3);
                                          if (*(longlong *)(param_1 + 0x118) != 0) {
                                            lVar4 = UnityEngine_InputSystem_PlayerInput__get_actions
                                                              (*(longlong *)(param_1 + 0x118),0);
                                            if (lVar4 != 0) {
                                              uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar4,LIT_"'Sit'",0);
                                              *(undefined8 *)(param_1 + 0x70) = uVar3;
                                              func_0x000180314690(param_1 + 0x70,uVar3);
                                              if (*(longlong *)(param_1 + 0x118) != 0) {
                                                lVar4 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                if (lVar4 != 0) {
                                                  uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar4,LIT_"'Ctrl'",0);
                                                  *(undefined8 *)(param_1 + 0x78) = uVar3;
                                                  func_0x000180314690(param_1 + 0x78,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar4 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar4 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar4,LIT_"'Shift'",0);
                                                  *(undefined8 *)(param_1 + 0x80) = uVar3;
                                                  func_0x000180314690(param_1 + 0x80,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar4 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar4 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar4,LIT_"'Inventory'",0);
                                                  *(undefined8 *)(param_1 + 0x88) = uVar3;
                                                  func_0x000180314690(param_1 + 0x88,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar4 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar4 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar4,LIT_"'CharacterStatus'",0);
                                                  *(undefined8 *)(param_1 + 0x90) = uVar3;
                                                  func_0x000180314690(param_1 + 0x90,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar4 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar4 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar4,LIT_"'Actions'",0);
                                                  *(undefined8 *)(param_1 + 0x98) = uVar3;
                                                  func_0x000180314690(param_1 + 0x98,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar4 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar4 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar4,LIT_"'CloseWindow'",0);
                                                  *(undefined8 *)(param_1 + 0xa0) = uVar3;
                                                  func_0x000180314690(param_1 + 0xa0,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar4 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar4 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar4,LIT_"'SystemMenu'",0);
                                                  *(undefined8 *)(param_1 + 0xa8) = uVar3;
                                                  func_0x000180314690(param_1 + 0xa8,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar4 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar4 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar4,LIT_"'Skills'",0);
                                                  *(undefined8 *)(param_1 + 0xb0) = uVar3;
                                                  func_0x000180314690(param_1 + 0xb0,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar4 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar4 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar4,LIT_"'Validate'",0);
                                                  *(undefined8 *)(param_1 + 0xb8) = uVar3;
                                                  func_0x000180314690(param_1 + 0xb8,uVar3);
                                                  if (*(longlong *)(param_1 + 0x118) != 0) {
                                                    lVar4 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  if (lVar4 != 0) {
                                                    uVar3 = 
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar4,LIT_"'Test'",0);
                                                  *(undefined8 *)(param_1 + 0xc0) = uVar3;
                                                  func_0x000180314690(param_1 + 0xc0,uVar3);
                                                  uStack_48 = 5;
                                                  uStack_40 = 0xc;
                                                  uVar3 = func_0x000180314680(TI_ty14,
                                                                              &uStack_48);
                                                  *(undefined8 *)(param_1 + 0x100) = uVar3;
                                                  func_0x000180314690(param_1 + 0x100,uVar3);
                                                  uVar7 = 1;
                                                  do {
                                                    uVar8 = 1;
                                                    do {
                                                      if (*(longlong *)(param_1 + 0x118) == 0) {
DAT_1804f69ac:
                                                        FUN_1803155d0();
                                                        pcVar1 = (code *)swi(3);
                                                        (*pcVar1)();
                                                        return;
                                                      }
                                                      lVar4 = *(longlong *)(param_1 + 0x100);
                                                      lVar5 = 
                                                  UnityEngine_InputSystem_PlayerInput__get_actions
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  uVar3 = func_0x000180314670(_DAT_1834c6268,
                                                                              &stack0x00000008);
                                                  auStackX_18[0] = uVar8;
                                                  uVar6 = func_0x000180314670(_DAT_1834c6268,
                                                                              auStackX_18);
                                                  uVar3 = System_String__Format
                                                                    (LIT_"'Shortcut{0}-{1}'",uVar3,
                                                                     uVar6,0);
                                                  if (lVar5 == 0) goto DAT_1804f69ac;
                                                  UnityEngine_InputSystem_InputActionAsset__get_Item
                                                            (lVar5,uVar3,0);
                                                  if (lVar4 == 0) goto DAT_1804f69ac;
                                                  FUN_180005a00(lVar4,(ulonglong)uVar7 - 1,
                                                                (ulonglong)uVar8 - 1);
                                                  uVar8 = uVar8 + 1;
                                                  } while ((int)uVar8 < 0xd);
                                                  uVar7 = uVar7 + 1;
                                                  if (5 < (int)uVar7) {
                                                    uStack_48 = 5;
                                                    uStack_40 = 0xc;
                                                    uVar3 = func_0x000180314680(TI_ty14
                                                                                ,&uStack_48);
                                                    *(undefined8 *)(param_1 + 0x108) = uVar3;
                                                    func_0x000180314690(param_1 + 0x108,uVar3);
                                                    uStack_38 = 5;
                                                    puStack_30 = (undefined *)0xc;
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

