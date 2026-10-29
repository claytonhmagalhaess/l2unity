// CharSelectWindow__Update__18078e360 @ 0x18078e360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharSelectWindow__Update__18078e360(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined *puStack_50;
  undefined1 *puStack_40;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (cRam00000001834b44a4 == '\0') {
    puStack_30 = &UNK_18078e37e;
    FUN_180315380(LIT_"'click_01'");
    cRam00000001834b44a4 = '\x01';
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  puStack_30 = &UNK_18078e39b;
  cVar6 = UnityEngine_Input__GetKeyDown(0x1b,0);
  if (cVar6 == '\0') {
    puStack_30 = &UNK_18078e3ab;
    cVar6 = UnityEngine_Input__GetKeyDown(0x10f,0);
    if (cVar6 == '\0') {
      puStack_30 = &UNK_18078e3bb;
      cVar6 = UnityEngine_Input__GetKeyDown(0xd,0);
      if (cVar6 == '\0') {
        return;
      }
    }
    if (DAT_1834b301f == '\0') {
      puStack_30 = &UNK_18078e3d4;
      FUN_180315380(TI_AudioManager);
      DAT_1834b301f = '\x01';
    }
    if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
      puStack_30 = &UNK_18078e400;
      AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'click_01'",0);
      if (DAT_1834b30fd == '\0') {
        puStack_30 = &UNK_18078e249;
        FUN_180315380(TI_L2ConfirmWindow);
        DAT_1834b30fd = '\x01';
      }
      plVar3 = (longlong *)**(longlong **)(TI_L2ConfirmWindow + 0xb8);
      if (plVar3 != (longlong *)0x0) {
        puStack_30 = &UNK_18078e278;
        (**(code **)(*plVar3 + 0x1c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x1d0));
        if (cRam00000001834b31c4 == '\0') {
          puStack_30 = &UNK_18078e28d;
          FUN_180315380(TI_CharacterSelector);
          cRam00000001834b31c4 = '\x01';
        }
        lVar4 = **(longlong **)(TI_CharacterSelector + 0xb8);
        if (lVar4 != 0) {
          if (cRam00000001834b45f8 == '\0') {
            FUN_180315380(TI_UnityEngine.Debug);
            FUN_180315380(MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item);
            FUN_180315380(LIT_"'Please select a character'");
            FUN_180315380(LIT_"'game_start'");
            cRam00000001834b45f8 = '\x01';
          }
          if (*(int *)(lVar4 + 0x20) != -1) {
            if (*(longlong *)(lVar4 + 0x98) != 0) {
              FUN_1815f9940(auStack_78,*(longlong *)(lVar4 + 0x98),*(undefined4 *)(lVar4 + 0x20),
                            MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item);
              if (0 < uStack_18._4_4_) goto code_r0x0001807ba22f;
              if (DAT_1834b301f == '\0') {
                FUN_180315380(TI_AudioManager);
                DAT_1834b301f = '\x01';
              }
              if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
                AudioManager__PlayUISound
                          (**(longlong **)(TI_AudioManager + 0xb8),LIT_"'game_start'",0);
                if (DAT_1834b30fb == '\0') {
                  FUN_180315380(TI_GameClient);
                  DAT_1834b30fb = '\x01';
                }
                if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
                   (plVar3 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
                   plVar3 != (longlong *)0x0)) {
                  uVar1 = *(undefined4 *)(lVar4 + 0x20);
                  if (cRam00000001834b3656 == '\0') {
                    puStack_30 = &UNK_18050dfa9;
                    FUN_180315380(TI_RequestCharSelectPacket,uVar1,0);
                    cRam00000001834b3656 = '\x01';
                  }
                  puStack_30 = &UNK_18050dfbc;
                  uVar7 = func_0x000180315580(TI_RequestCharSelectPacket);
                  puStack_30 = &UNK_18050dfcc;
                  RequestCharSelectPacket___ctor(uVar7,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00018050dfeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar3 + 0x178))(plVar3,uVar7,*(undefined8 *)(*plVar3 + 0x180));
                  return;
                }
              }
            }
            FUN_1803155d0();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
code_r0x0001807ba22f:
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar7 = LIT_"'Please select a character'";
          if (DAT_1834bfa1e == '\0') {
            puStack_40 = (undefined1 *)0x1823d21fe;
            FUN_180315380(TI_UnityEngine.Debug,0);
            puStack_40 = (undefined1 *)0x1823d220a;
            FUN_180315380(TI_UnityEngine.ILogger);
            DAT_1834bfa1e = '\x01';
          }
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            puStack_40 = &LAB_1823d2226;
            func_0x000180315660();
          }
          if (DAT_1834b3803 == '\0') {
            puStack_40 = (undefined1 *)0x1823d223b;
            FUN_180315380(TI_UnityEngine.Debug);
            DAT_1834b3803 = '\x01';
          }
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            puStack_40 = &LAB_1823d2257;
            func_0x000180315660();
          }
          lVar4 = *(longlong *)(*(longlong *)(TI_UnityEngine.Debug + 0xb8) + 8);
          if (lVar4 != 0) {
            uStack_18 = uVar7;
            puStack_40 = (undefined1 *)0x1823d228a;
            FUN_180036090(5,TI_UnityEngine.ILogger,lVar4,2);
            return;
          }
          puStack_40 = (undefined1 *)0x1823d2295;
          FUN_1803155d0();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puStack_30 = &UNK_18078e2ba;
      FUN_1803155d0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (DAT_1834b301f == '\0') {
      puStack_30 = &UNK_18078e42a;
      FUN_180315380(TI_AudioManager);
      DAT_1834b301f = '\x01';
    }
    if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
      puStack_30 = &UNK_18078e456;
      AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'click_01'",0);
      if (DAT_1834b30fd == '\0') {
        puStack_30 = &UNK_18078d939;
        FUN_180315380(TI_L2ConfirmWindow);
        DAT_1834b30fd = '\x01';
      }
      plVar3 = (longlong *)**(longlong **)(TI_L2ConfirmWindow + 0xb8);
      if (plVar3 != (longlong *)0x0) {
        puStack_30 = &UNK_18078d968;
        (**(code **)(*plVar3 + 0x1c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x1d0));
        if (DAT_1834b30fb == '\0') {
          puStack_30 = &UNK_18078d97d;
          FUN_180315380(TI_GameClient);
          DAT_1834b30fb = '\x01';
        }
        lVar4 = **(longlong **)(TI_GameClient + 0xb8);
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x3c) == '\0') {
            if (cRam00000001834b3021 == '\0') {
              puStack_30 = &UNK_180528241;
              FUN_180315380(TI_GameManager);
              cRam00000001834b3021 = '\x01';
            }
            lVar4 = **(longlong **)(TI_GameManager + 0xb8);
            if (lVar4 != 0) {
              if (cRam00000001834b315e == '\0') {
                puStack_50 = &UNK_18047b005;
                FUN_180315380(TI_UnityEngine.Debug);
                puStack_50 = &UNK_18047b011;
                FUN_180315380(TI_GameEvent);
                puStack_50 = &UNK_18047b01d;
                FUN_180315380(LIT_"'[GameStateMachine][EVENT] '");
                cRam00000001834b315e = '\x01';
              }
              if (*(char *)(lVar4 + 0x20) != '\0') {
                uStack_28 = TI_GameEvent;
                uStack_20 = 0xffffffffffffffff;
                uStack_18 = CONCAT44(uStack_18._4_4_,4);
                puStack_50 = &UNK_18047b054;
                uVar7 = System_Enum__ToString(&uStack_28,0);
                puStack_50 = &UNK_18047b066;
                uVar7 = System_String__Concat(LIT_"'[GameStateMachine][EVENT] '",uVar7,0);
                if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
                  puStack_50 = &UNK_18047b07e;
                  func_0x000180315660();
                }
                puStack_50 = &UNK_18047b088;
                UnityEngine_Debug__Log(uVar7,0);
              }
              plVar3 = *(longlong **)(lVar4 + 0x40);
              if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018047b0af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar3 + 0x1a8))(plVar3,4,0,*(undefined8 *)(*plVar3 + 0x1b0));
                return;
              }
              return;
            }
            puStack_30 = &UNK_180528274;
            FUN_1803155d0();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined1 *)(lVar4 + 0xb8) = 1;
          if (cRam00000001834b3774 == '\0') {
            puStack_30 = &UNK_1805262ae;
            FUN_180315380(TI_UnityEngine.Debug);
            puStack_30 = &UNK_1805262ba;
            FUN_180315380(LIT_"'Disconnect'");
            cRam00000001834b3774 = '\x01';
          }
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            puStack_30 = &UNK_1805262d6;
            func_0x000180315660();
          }
          puStack_30 = &UNK_1805262e4;
          UnityEngine_Debug__Log(LIT_"'Disconnect'",0);
          *(undefined1 *)(lVar4 + 0x3c) = 0;
          if (*(longlong *)(lVar4 + 0x30) != 0) {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            if (cRam00000001834b35b5 == '\0') {
              puStack_30 = &UNK_1804f105e;
              FUN_180315380(TI_System.Action);
              puStack_30 = &UNK_1804f106a;
              FUN_180315380(MD_AsynchronousClient._Disconnect_b__23_0);
              puStack_30 = &UNK_1804f1076;
              FUN_180315380(TI_UnityEngine.Debug);
              puStack_30 = &UNK_1804f1082;
              FUN_180315380(TI_DefaultClient);
              puStack_30 = &UNK_1804f108e;
              FUN_180315380(TI_UnityEngine.Object);
              puStack_30 = &UNK_1804f109a;
              FUN_180315380(LIT_"'Disconnect'");
              cRam00000001834b35b5 = '\x01';
            }
            if (*(char *)(lVar4 + 0x24) != '\0') {
              if (*(int *)(TI_DefaultClient + 0xe4) == 0) {
                puStack_30 = &UNK_1804f10c0;
                func_0x000180315660();
              }
              if (cRam00000001834b35eb == '\0') {
                puStack_30 = &UNK_1804f10d5;
                FUN_180315380(TI_DefaultClient);
                cRam00000001834b35eb = '\x01';
              }
              if (*(int *)(TI_DefaultClient + 0xe4) == 0) {
                puStack_30 = &UNK_1804f10f1;
                func_0x000180315660();
              }
              if (*(char *)(*(longlong *)(TI_DefaultClient + 0xb8) + 0x10) != '\0') {
                *(undefined1 *)(lVar4 + 0x24) = 0;
                if (*(longlong *)(lVar4 + 0x60) != 0) {
                  puStack_70 = &UNK_1804f1251;
                  System_Threading_CancellationTokenSource__Cancel(*(longlong *)(lVar4 + 0x60),0);
                }
                if (*(longlong *)(lVar4 + 0x30) != 0) {
                  puStack_70 = &UNK_1804f1269;
                  ServerPacketHandler__CancelTokens(*(longlong *)(lVar4 + 0x30),0);
                }
                lVar4 = *(longlong *)(lVar4 + 0x10);
                if (lVar4 != 0) {
                  puStack_70 = &UNK_1804f128f;
                  System_Net_Sockets_Socket__Shutdown(lVar4,2,0);
                  puStack_70 = &UNK_1804f12a4;
                  System_Net_Sockets_Socket__Close(lVar4,0,0);
                }
                return;
              }
              if (*(longlong *)(lVar4 + 0x60) != 0) {
                puStack_30 = &UNK_1804f111e;
                System_Threading_CancellationTokenSource__Cancel(*(longlong *)(lVar4 + 0x60),0);
              }
              puStack_30 = &UNK_1804f1128;
              AsynchronousClient__ClientCleanup(lVar4,0);
              if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
                puStack_30 = &UNK_1804f113d;
                func_0x000180315660();
              }
              puStack_30 = &UNK_1804f114b;
              UnityEngine_Debug__Log(LIT_"'Disconnect'",0);
              if (cRam00000001834b31cf == '\0') {
                puStack_30 = &UNK_1804f1160;
                FUN_180315380(TI_EventProcessor);
                cRam00000001834b31cf = '\x01';
              }
              uVar7 = **(undefined8 **)(TI_EventProcessor + 0xb8);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                puStack_30 = &UNK_1804f118d;
                func_0x000180315660();
              }
              puStack_30 = &UNK_1804f119a;
              cVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
              if (cVar6 != '\0') {
                if (cRam00000001834b31cf == '\0') {
                  puStack_30 = &UNK_1804f11b8;
                  FUN_180315380(TI_EventProcessor);
                  cRam00000001834b31cf = '\x01';
                }
                lVar2 = **(longlong **)(TI_EventProcessor + 0xb8);
                puStack_30 = &UNK_1804f11dc;
                uVar7 = func_0x000180315580(TI_System.Action);
                puStack_30 = &UNK_1804f11f4;
                FUN_1816a9c60(uVar7,lVar4,MD_AsynchronousClient._Disconnect_b__23_0,0);
                if (lVar2 == 0) {
                  puStack_30 = &UNK_1804f122b;
                  FUN_1803155d0();
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                puStack_30 = &UNK_1804f1207;
                EventProcessor__QueueEvent(lVar2,uVar7,0);
              }
            }
            return;
          }
          return;
        }
      }
      puStack_30 = &UNK_18078d9aa;
      FUN_1803155d0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puStack_30 = &UNK_18078e46a;
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

