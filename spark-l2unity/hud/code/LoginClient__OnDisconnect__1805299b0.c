// LoginClient__OnDisconnect__1805299b0 @ 0x1805299b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginClient__OnDisconnect__1805299b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (cRam00000001834b3797 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(LIT_"'Disconnected from LoginServer.'");
    FUN_180315380(LIT_"'The login server closed the connection without answering...");
    cRam00000001834b3797 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
    func_0x000180315660();
  }
  UnityEngine_Debug__Log(LIT_"'Disconnected from LoginServer.'",0);
  LoginClient__AvisaQueda(param_1,LIT_"'The login server closed the connection without answering...",0);
  if (cRam00000001834b3021 == '\0') {
    FUN_180315380(TI_GameManager);
    cRam00000001834b3021 = '\x01';
  }
  lVar2 = **(longlong **)(TI_GameManager + 0xb8);
  if (lVar2 != 0) {
    if (cRam00000001834b315e == '\0') {
      FUN_180315380(TI_UnityEngine.Debug);
      FUN_180315380(TI_GameEvent);
      FUN_180315380(LIT_"'[GameStateMachine][EVENT] '");
      cRam00000001834b315e = '\x01';
    }
    if (*(char *)(lVar2 + 0x20) != '\0') {
      uStack_28 = TI_GameEvent;
      uStack_20 = 0xffffffffffffffff;
      uStack_18 = 3;
      uVar4 = System_Enum__ToString(&uStack_28,0);
      uVar4 = System_String__Concat(LIT_"'[GameStateMachine][EVENT] '",uVar4,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__Log(uVar4,0);
    }
    plVar1 = *(longlong **)(lVar2 + 0x40);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018047b0af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x1a8))(plVar1,3,0,*(undefined8 *)(*plVar1 + 0x1b0));
      return;
    }
    return;
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

