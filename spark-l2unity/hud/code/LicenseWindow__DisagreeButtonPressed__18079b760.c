// LicenseWindow__DisagreeButtonPressed__18079b760 @ 0x18079b760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LicenseWindow__DisagreeButtonPressed__18079b760(void)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  
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
  lVar2 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
  if (lVar2 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
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
  *(undefined1 *)(lVar2 + 0x3c) = 0;
  if (*(longlong *)(lVar2 + 0x30) == 0) {
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0x30);
  if (cRam00000001834b35b5 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_AsynchronousClient._Disconnect_b__23_0);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_DefaultClient);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(LIT_"'Disconnect'");
    cRam00000001834b35b5 = '\x01';
  }
  if (*(char *)(lVar2 + 0x24) != '\0') {
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
      *(undefined1 *)(lVar2 + 0x24) = 0;
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        System_Threading_CancellationTokenSource__Cancel(*(longlong *)(lVar2 + 0x60),0);
      }
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        ServerPacketHandler__CancelTokens(*(longlong *)(lVar2 + 0x30),0);
      }
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        System_Net_Sockets_Socket__Shutdown(lVar2,2,0);
        System_Net_Sockets_Socket__Close(lVar2,0,0);
      }
      return;
    }
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      System_Threading_CancellationTokenSource__Cancel(*(longlong *)(lVar2 + 0x60),0);
    }
    AsynchronousClient__ClientCleanup(lVar2,0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__Log(LIT_"'Disconnect'",0);
    if (cRam00000001834b31cf == '\0') {
      FUN_180315380(TI_EventProcessor);
      cRam00000001834b31cf = '\x01';
    }
    uVar5 = **(undefined8 **)(TI_EventProcessor + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if (cVar4 != '\0') {
      if (cRam00000001834b31cf == '\0') {
        FUN_180315380(TI_EventProcessor);
        cRam00000001834b31cf = '\x01';
      }
      lVar1 = **(longlong **)(TI_EventProcessor + 0xb8);
      uVar5 = func_0x000180315580(TI_System.Action);
      FUN_1816a9c60(uVar5,lVar2,MD_AsynchronousClient._Disconnect_b__23_0,0);
      if (lVar1 == 0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EventProcessor__QueueEvent(lVar1,uVar5,0);
    }
  }
  return;
}

