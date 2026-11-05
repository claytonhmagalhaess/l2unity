// LicenseWindow__Update__18079b970 @ 0x18079b970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LicenseWindow__Update__18079b970(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  undefined8 uVar8;
  
  if (cRam00000001834b44b3 == '\0') {
    FUN_180315380(LIT_"'click_01'");
    cRam00000001834b44b3 = '\x01';
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  cVar7 = UnityEngine_Input__GetKeyDown(0x1b,0);
  if (cVar7 == '\0') {
    cVar7 = UnityEngine_Input__GetKeyDown(0x10f,0);
    if ((cVar7 == '\0') && (cVar7 = UnityEngine_Input__GetKeyDown(0xd,0), cVar7 == '\0')) {
      return;
    }
    if (DAT_1834b301f == '\0') {
      FUN_180315380(TI_AudioManager);
      DAT_1834b301f = '\x01';
    }
    if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
      AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'click_01'",0);
      if (cRam00000001834b44b6 == '\0') {
        FUN_180315380(TI_LoginClient);
        cRam00000001834b44b6 = '\x01';
      }
      if (*(int *)(TI_LoginClient + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b36c4 == '\0') {
        FUN_180315380(TI_LoginClient);
        cRam00000001834b36c4 = '\x01';
      }
      if (*(int *)(TI_LoginClient + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar4 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
      if ((lVar4 == 0) || (plVar5 = *(longlong **)(lVar4 + 0x88), plVar5 == (longlong *)0x0)) {
        FUN_1803155d0();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (cRam00000001834b374d == '\0') {
        FUN_180315380(TI_LoginClient,0);
        FUN_180315380(TI_RequestServerListPacket);
        cRam00000001834b374d = '\x01';
      }
      if (*(int *)(TI_LoginClient + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b36c4 == '\0') {
        FUN_180315380(TI_LoginClient);
        cRam00000001834b36c4 = '\x01';
      }
      if (*(int *)(TI_LoginClient + 0xe4) == 0) {
        func_0x000180315660(TI_LoginClient);
      }
      lVar4 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
      if (lVar4 != 0) {
        uVar1 = *(undefined4 *)(lVar4 + 0x40);
        if (cRam00000001834b36c4 == '\0') {
          FUN_180315380(TI_LoginClient);
          cRam00000001834b36c4 = '\x01';
        }
        if (*(int *)(TI_LoginClient + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar4 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
        if (lVar4 != 0) {
          uVar2 = *(undefined4 *)(lVar4 + 0x44);
          uVar8 = func_0x000180315580(TI_RequestServerListPacket);
          RequestServerListPacket___ctor(uVar8,uVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00018052923a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x178))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x180));
          return;
        }
      }
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if (DAT_1834b301f == '\0') {
      FUN_180315380(TI_AudioManager);
      DAT_1834b301f = '\x01';
    }
    if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
      AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'click_01'",0);
      if (cRam00000001834b44b7 == '\0') {
        FUN_180315380(TI_LoginClient);
        cRam00000001834b44b7 = '\x01';
      }
      if (*(int *)(TI_LoginClient + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b36c4 == '\0') {
        FUN_180315380(TI_LoginClient);
        cRam00000001834b36c4 = '\x01';
      }
      if (*(int *)(TI_LoginClient + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar4 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
      if (lVar4 == 0) {
        FUN_1803155d0();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (cRam00000001834b3774 == '\0') {
        FUN_180315380(TI_UnityEngine.Debug);
        FUN_180315380(LIT_"'Disconnect'");
        cRam00000001834b3774 = '\x01';
      }
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__Log(LIT_"'Disconnect'",0);
      *(undefined1 *)(lVar4 + 0x3c) = 0;
      if (*(longlong *)(lVar4 + 0x30) != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (cRam00000001834b35b5 == '\0') {
          FUN_180315380(TI_System.Action);
          FUN_180315380(MD_AsynchronousClient._Disconnect_b__23_0);
          FUN_180315380(TI_UnityEngine.Debug);
          FUN_180315380(TI_DefaultClient);
          FUN_180315380(TI_UnityEngine.Object);
          FUN_180315380(LIT_"'Disconnect'");
          cRam00000001834b35b5 = '\x01';
        }
        if (*(char *)(lVar4 + 0x24) != '\0') {
          if (*(int *)(TI_DefaultClient + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (cRam00000001834b35eb == '\0') {
            FUN_180315380(TI_DefaultClient);
            cRam00000001834b35eb = '\x01';
          }
          if (*(int *)(TI_DefaultClient + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (*(char *)(*(longlong *)(TI_DefaultClient + 0xb8) + 0x10) != '\0') {
            *(undefined1 *)(lVar4 + 0x24) = 0;
            if (*(longlong *)(lVar4 + 0x60) != 0) {
              System_Threading_CancellationTokenSource__Cancel(*(longlong *)(lVar4 + 0x60),0);
            }
            if (*(longlong *)(lVar4 + 0x30) != 0) {
              ServerPacketHandler__CancelTokens(*(longlong *)(lVar4 + 0x30),0);
            }
            lVar4 = *(longlong *)(lVar4 + 0x10);
            if (lVar4 != 0) {
              System_Net_Sockets_Socket__Shutdown(lVar4,2,0);
              System_Net_Sockets_Socket__Close(lVar4,0,0);
            }
            return;
          }
          if (*(longlong *)(lVar4 + 0x60) != 0) {
            System_Threading_CancellationTokenSource__Cancel(*(longlong *)(lVar4 + 0x60),0);
          }
          AsynchronousClient__ClientCleanup(lVar4,0);
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Debug__Log(LIT_"'Disconnect'",0);
          if (cRam00000001834b31cf == '\0') {
            FUN_180315380(TI_EventProcessor);
            cRam00000001834b31cf = '\x01';
          }
          uVar8 = **(undefined8 **)(TI_EventProcessor + 0xb8);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
          if (cVar7 != '\0') {
            if (cRam00000001834b31cf == '\0') {
              FUN_180315380(TI_EventProcessor);
              cRam00000001834b31cf = '\x01';
            }
            lVar3 = **(longlong **)(TI_EventProcessor + 0xb8);
            uVar8 = func_0x000180315580(TI_System.Action);
            FUN_1816a9c60(uVar8,lVar4,MD_AsynchronousClient._Disconnect_b__23_0,0);
            if (lVar3 == 0) {
              FUN_1803155d0();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            EventProcessor__QueueEvent(lVar3,uVar8,0);
          }
        }
        return;
      }
      return;
    }
  }
  FUN_1803155d0();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

