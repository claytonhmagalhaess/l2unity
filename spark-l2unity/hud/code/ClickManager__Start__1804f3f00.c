// ClickManager__Start__1804f3f00 @ 0x1804f3f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClickManager__Start__1804f3f00(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (cRam00000001834b359f == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>);
    FUN_180315380(MR_UnityEngine.GameObject.GetComponent<L2Particle>);
    FUN_180315380(LIT_"'Locator'");
    cRam00000001834b359f = '\x01';
  }
  uVar3 = UnityEngine_GameObject__Find(LIT_"'Locator'",0);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  func_0x000180314690(param_1 + 0x20,uVar3);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar4 = UnityEngine_GameObject__get_transform(*(longlong *)(param_1 + 0x20),0);
    if (lVar4 != 0) {
      lVar4 = UnityEngine_Transform__GetChild(lVar4,0,0);
      if (lVar4 != 0) {
        lVar4 = UnityEngine_Component__get_gameObject(lVar4,0);
        if (lVar4 != 0) {
          uVar3 = FUN_1809e9ef0(lVar4,MR_UnityEngine.GameObject.GetComponent<L2Particle>);
          *(undefined8 *)(param_1 + 0x28) = uVar3;
          func_0x000180314690(param_1 + 0x28,uVar3);
          if (*(longlong *)(param_1 + 0x20) != 0) {
            lVar4 = UnityEngine_GameObject__get_transform(*(longlong *)(param_1 + 0x20),0);
            if (lVar4 != 0) {
              lVar4 = UnityEngine_Transform__GetChild(lVar4,1,0);
              if (lVar4 != 0) {
                lVar4 = UnityEngine_Component__get_gameObject(lVar4,0);
                if (lVar4 != 0) {
                  uVar3 = FUN_1809e9ef0(lVar4,MR_UnityEngine.GameObject.GetComponent<L2Particle>);
                  *(undefined8 *)(param_1 + 0x30) = uVar3;
                  func_0x000180314690(param_1 + 0x30,uVar3);
                  if (DAT_1834b31bf == '\0') {
                    FUN_180315380(TI_CameraController);
                    DAT_1834b31bf = '\x01';
                  }
                  if (**(longlong **)(TI_CameraController + 0xb8) != 0) {
                    uVar3 = FUN_180997040(**(longlong **)(TI_CameraController + 0xb8),
                                          MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>);
                    *(undefined8 *)(param_1 + 0x68) = uVar3;
                    func_0x000180314690(param_1 + 0x68,uVar3);
                    if (cRam00000001834b35a8 == '\0') {
                      FUN_180315380(MR_UnityEngine.Component.GetComponent<L2Particle>);
                      cRam00000001834b35a8 = '\x01';
                    }
                    if (*(longlong *)(param_1 + 0x20) != 0) {
                      UnityEngine_GameObject__SetActive(*(longlong *)(param_1 + 0x20),0,0);
                      if (*(longlong *)(param_1 + 0x30) != 0) {
                        lVar4 = UnityEngine_Component__get_gameObject
                                          (*(longlong *)(param_1 + 0x30),0);
                        if (lVar4 != 0) {
                          UnityEngine_GameObject__SetActive(lVar4,0,0);
                          if (*(longlong *)(param_1 + 0x28) != 0) {
                            lVar4 = UnityEngine_Component__get_gameObject
                                              (*(longlong *)(param_1 + 0x28),0);
                            if (lVar4 != 0) {
                              if (cRam00000001834c1104 == '\0') {
                                FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.GameObject>,0,0);
                                cRam00000001834c1104 = '\x01';
                              }
                              if (lVar4 != 0) {
                                lVar1 = *(longlong *)(lVar4 + 0x10);
                                if (lVar1 == 0) {
                                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException
                                            (lVar4,0);
                                }
                                if (pcRam00000001834c1178 == (code *)0x0) {
                                  pcRam00000001834c1178 = (code *)FUN_180315630(&UNK_182941990);
                                }
                    /* WARNING: Could not recover jumptable at 0x0001824267ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (*pcRam00000001834c1178)(lVar1,0);
                                return;
                              }
                              FUN_1803155d0();
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
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
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

