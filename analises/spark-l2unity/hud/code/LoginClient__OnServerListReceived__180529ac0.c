// LoginClient__OnServerListReceived__180529ac0 @ 0x180529ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginClient__OnServerListReceived__180529ac0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (cRam00000001834b3021 == '\0') {
    FUN_180315380(TI_GameManager);
    cRam00000001834b3021 = '\x01';
  }
  lVar2 = **(longlong **)(TI_GameManager + 0xb8);
  if (lVar2 != 0) {
    if (cRam00000001834b315e == '\0') {
      FUN_180315380(TI_UnityEngine.Debug,2,param_2,0);
      FUN_180315380(TI_GameEvent);
      FUN_180315380(LIT_"'[GameStateMachine][EVENT] '");
      cRam00000001834b315e = '\x01';
    }
    if (*(char *)(lVar2 + 0x20) != '\0') {
      uStack_28 = TI_GameEvent;
      uStack_20 = 0xffffffffffffffff;
      uStack_18 = 2;
      uVar4 = System_Enum__ToString(&uStack_28,0);
      uVar4 = System_String__Concat(LIT_"'[GameStateMachine][EVENT] '",uVar4,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__Log(uVar4,0);
    }
    plVar1 = *(longlong **)(lVar2 + 0x40);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x1a8))(plVar1,2,param_2,*(undefined8 *)(*plVar1 + 0x1b0));
    }
    return;
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

