// L2LoginUI__LoadUI__180777070 @ 0x180777070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2LoginUI__LoadUI__180777070(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  
  if (cRam00000001834b4404 == '\0') {
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<OptionsWindow>);
    FUN_180315380(TI_LoginWindow);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b4404 = '\x01';
  }
  L2UI__LoadUI__1807991d0(param_1,0);
  if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b31c7 == '\0') {
    FUN_180315380(TI_LoginWindow);
    cRam00000001834b31c7 = '\x01';
  }
  if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_LoginWindow + 0xb8) != 0) {
    L2Window__AddWindow__1807995d0
              (**(longlong **)(TI_LoginWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
    if (cRam00000001834b31c3 == '\0') {
      FUN_180315380(TI_CharSelectWindow);
      cRam00000001834b31c3 = '\x01';
    }
    if (**(longlong **)(TI_CharSelectWindow + 0xb8) != 0) {
      L2Window__AddWindow__1807995d0
                (**(longlong **)(TI_CharSelectWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
      if (cRam00000001834b31c3 == '\0') {
        FUN_180315380(TI_CharSelectWindow);
        cRam00000001834b31c3 = '\x01';
      }
      plVar1 = (longlong *)**(longlong **)(TI_CharSelectWindow + 0xb8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x1c8))(plVar1,1,*(undefined8 *)(*plVar1 + 0x1d0));
        if (cRam00000001834b3022 == '\0') {
          FUN_180315380(TI_CharCreationWindow);
          cRam00000001834b3022 = '\x01';
        }
        if (**(longlong **)(TI_CharCreationWindow + 0xb8) != 0) {
          L2Window__AddWindow__1807995d0
                    (**(longlong **)(TI_CharCreationWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0)
          ;
          if (cRam00000001834b3022 == '\0') {
            FUN_180315380(TI_CharCreationWindow);
            cRam00000001834b3022 = '\x01';
          }
          plVar1 = (longlong *)**(longlong **)(TI_CharCreationWindow + 0xb8);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x1c8))(plVar1,1,*(undefined8 *)(*plVar1 + 0x1d0));
            if (cRam00000001834b4432 == '\0') {
              FUN_180315380(TI_LicenseWindow);
              cRam00000001834b4432 = '\x01';
            }
            if (**(longlong **)(TI_LicenseWindow + 0xb8) != 0) {
              L2Window__AddWindow__1807995d0
                        (**(longlong **)(TI_LicenseWindow + 0xb8),
                         *(undefined8 *)(param_1 + 0x48),0);
              if (cRam00000001834b4432 == '\0') {
                FUN_180315380(TI_LicenseWindow);
                cRam00000001834b4432 = '\x01';
              }
              plVar1 = (longlong *)**(longlong **)(TI_LicenseWindow + 0xb8);
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x1c8))(plVar1,1,*(undefined8 *)(*plVar1 + 0x1d0));
                if (cRam00000001834b31c6 == '\0') {
                  FUN_180315380(TI_ServerSelectWindow);
                  cRam00000001834b31c6 = '\x01';
                }
                if (**(longlong **)(TI_ServerSelectWindow + 0xb8) != 0) {
                  L2Window__AddWindow__1807995d0
                            (**(longlong **)(TI_ServerSelectWindow + 0xb8),
                             *(undefined8 *)(param_1 + 0x48),0);
                  if (cRam00000001834b31c6 == '\0') {
                    FUN_180315380(TI_ServerSelectWindow);
                    cRam00000001834b31c6 = '\x01';
                  }
                  plVar1 = (longlong *)**(longlong **)(TI_ServerSelectWindow + 0xb8);
                  if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 0x1c8))(plVar1,1,*(undefined8 *)(*plVar1 + 0x1d0));
                    if (DAT_1834b30fd == '\0') {
                      FUN_180315380(TI_L2ConfirmWindow);
                      DAT_1834b30fd = '\x01';
                    }
                    if (**(longlong **)(TI_L2ConfirmWindow + 0xb8) != 0) {
                      L2Window__AddWindow__1807995d0
                                (**(longlong **)(TI_L2ConfirmWindow + 0xb8),
                                 *(undefined8 *)(param_1 + 0x48),0);
                      if (DAT_1834b30fd == '\0') {
                        FUN_180315380(TI_L2ConfirmWindow);
                        DAT_1834b30fd = '\x01';
                      }
                      plVar1 = (longlong *)**(longlong **)(TI_L2ConfirmWindow + 0xb8);
                      if (plVar1 != (longlong *)0x0) {
                        (**(code **)(*plVar1 + 0x1c8))(plVar1,1,*(undefined8 *)(*plVar1 + 0x1d0));
                        if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        if (cRam00000001834b4370 == '\0') {
                          FUN_180315380(TI_OptionsWindow);
                          cRam00000001834b4370 = '\x01';
                        }
                        if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar2 = **(undefined8 **)(TI_OptionsWindow + 0xb8);
                        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        cVar4 = UnityEngine_Object__op_Equality(uVar2,0,0);
                        if (cVar4 != '\0') {
                          lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
                          if (lVar5 == 0) goto code_r0x0001807775bc;
                          lVar5 = FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<OptionsWindow>);
                          if (lVar5 == 0) goto code_r0x0001807775bc;
                          *(undefined1 *)(lVar5 + 0x88) = 1;
                          if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          if (cRam00000001834b4370 == '\0') {
                            FUN_180315380(TI_OptionsWindow);
                            cRam00000001834b4370 = '\x01';
                          }
                          if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          if (**(longlong **)(TI_OptionsWindow + 0xb8) == 0)
                          goto code_r0x0001807775bc;
                          SparkRefinoWindow__Monta__1805afce0
                                    (**(longlong **)(TI_OptionsWindow + 0xb8),
                                     *(undefined8 *)(param_1 + 0x48),0);
                          if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          SparkOpcoes__AplicaTudo__1804a3a50(1,0);
                        }
                        if (cRam00000001834b3021 == '\0') {
                          FUN_180315380(TI_GameManager);
                          cRam00000001834b3021 = '\x01';
                        }
                        if (**(longlong **)(TI_GameManager + 0xb8) != 0) {
                          if (*(char *)(**(longlong **)(TI_GameManager + 0xb8) + 0x28) != '\0') {
                            if (cRam00000001834b4405 == '\0') {
                              FUN_180315380(TI_L2LoginUI.<AutoLogin>d__9);
                              cRam00000001834b4405 = '\x01';
                            }
                            lVar5 = func_0x000180315580(TI_L2LoginUI.<AutoLogin>d__9);
                            Gear__UpdateWeaponType__1803dadf0(lVar5,0);
                            *(undefined4 *)(lVar5 + 0x10) = 0;
                            UnityEngine_MonoBehaviour__StartCoroutine(param_1,lVar5,0);
                          }
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
code_r0x0001807775bc:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

