// CharSelectWindow__ReLoginPressed__18078d920 @ 0x18078d920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharSelectWindow__ReLoginPressed__18078d920(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (DAT_1834b30fd == '\0') {
    FUN_180315380(TI_L2ConfirmWindow);
    DAT_1834b30fd = '\x01';
  }
  plVar2 = (longlong *)**(longlong **)(TI_L2ConfirmWindow + 0xb8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x1c8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x1d0));
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    lVar3 = **(longlong **)(TI_GameClient + 0xb8);
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x3c) != '\0') {
        *(undefined1 *)(lVar3 + 0xb8) = 1;
        if (cRam00000001834b3774 == '\0') {
          FUN_180315380(TI_UnityEngine.Debug);
          FUN_180315380(LIT_"'Disconnect'");
          cRam00000001834b3774 = '\x01';
        }
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__Log(LIT_"'Disconnect'",0);
        *(undefined1 *)(lVar3 + 0x3c) = 0;
        if (*(longlong *)(lVar3 + 0x30) == 0) {
          return;
        }
        lVar3 = *(longlong *)(lVar3 + 0x30);
        if (cRam00000001834b35b5 == '\0') {
          FUN_180315380(TI_System.Action);
          FUN_180315380(MD_AsynchronousClient._Disconnect_b__23_0);
          FUN_180315380(TI_UnityEngine.Debug);
          FUN_180315380(TI_DefaultClient);
          FUN_180315380(TI_UnityEngine.Object);
          FUN_180315380(LIT_"'Disconnect'");
          cRam00000001834b35b5 = '\x01';
        }
        if (*(char *)(lVar3 + 0x24) != '\0') {
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
            *(undefined1 *)(lVar3 + 0x24) = 0;
            if (*(longlong *)(lVar3 + 0x60) != 0) {
              System_Threading_CancellationTokenSource__Cancel(*(longlong *)(lVar3 + 0x60),0);
            }
            if (*(longlong *)(lVar3 + 0x30) != 0) {
              ServerPacketHandler__CancelTokens(*(longlong *)(lVar3 + 0x30),0);
            }
            lVar3 = *(longlong *)(lVar3 + 0x10);
            if (lVar3 != 0) {
              System_Net_Sockets_Socket__Shutdown(lVar3,2,0);
              System_Net_Sockets_Socket__Close(lVar3,0,0);
            }
            return;
          }
          if (*(longlong *)(lVar3 + 0x60) != 0) {
            System_Threading_CancellationTokenSource__Cancel(*(longlong *)(lVar3 + 0x60),0);
          }
          AsynchronousClient__ClientCleanup(lVar3,0);
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Debug__Log(LIT_"'Disconnect'",0);
          if (cRam00000001834b31cf == '\0') {
            FUN_180315380(TI_EventProcessor);
            cRam00000001834b31cf = '\x01';
          }
          uVar6 = **(undefined8 **)(TI_EventProcessor + 0xb8);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar5 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if (cVar5 != '\0') {
            if (cRam00000001834b31cf == '\0') {
              FUN_180315380(TI_EventProcessor);
              cRam00000001834b31cf = '\x01';
            }
            lVar1 = **(longlong **)(TI_EventProcessor + 0xb8);
            uVar6 = func_0x000180315580(TI_System.Action);
            FUN_1816a9c60(uVar6,lVar3,MD_AsynchronousClient._Disconnect_b__23_0,0);
            if (lVar1 == 0) {
              FUN_1803155d0();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            EventProcessor__QueueEvent(lVar1,uVar6,0);
          }
        }
        return;
      }
      if (cRam00000001834b3021 == '\0') {
        FUN_180315380(TI_GameManager);
        cRam00000001834b3021 = '\x01';
      }
      lVar3 = **(longlong **)(TI_GameManager + 0xb8);
      if (lVar3 == 0) {
        FUN_1803155d0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (cRam00000001834b315e == '\0') {
        FUN_180315380(TI_UnityEngine.Debug);
        FUN_180315380(TI_GameEvent);
        FUN_180315380(LIT_"'[GameStateMachine][EVENT] '");
        cRam00000001834b315e = '\x01';
      }
      if (*(char *)(lVar3 + 0x20) != '\0') {
        uStack_28 = TI_GameEvent;
        uStack_20 = 0xffffffffffffffff;
        uStack_18 = 4;
        uVar6 = System_Enum__ToString(&uStack_28,0);
        uVar6 = System_String__Concat(LIT_"'[GameStateMachine][EVENT] '",uVar6,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__Log(uVar6,0);
      }
      plVar2 = *(longlong **)(lVar3 + 0x40);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00018047b0af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x1a8))(plVar2,4,0,*(undefined8 *)(*plVar2 + 0x1b0));
      return;
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

