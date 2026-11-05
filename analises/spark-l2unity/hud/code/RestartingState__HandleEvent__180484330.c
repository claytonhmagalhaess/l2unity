// RestartingState__HandleEvent__180484330 @ 0x180484330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RestartingState__HandleEvent__180484330(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_28;
  undefined8 uStack_20;
  int aiStack_18 [4];
  
  if (cRam00000001834b316b == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_GameEvent);
    FUN_180315380(TI_GameState);
    FUN_180315380(LIT_"'[GameStateMachine] Unhandled event {0} for state {1}'");
    cRam00000001834b316b = '\x01';
  }
  if (param_2 == 4) {
    if (cRam00000001834b31c1 == '\0') {
      FUN_180315380(TI_L2LoginUI);
      cRam00000001834b31c1 = '\x01';
    }
    if (**(longlong **)(TI_L2LoginUI + 0xb8) != 0) {
      L2LoginUI__ShowLoginWindow__180777960(**(longlong **)(TI_L2LoginUI + 0xb8),0);
      if (*(longlong *)(param_1 + 0x18) != 0) {
        GameManager__ChangeState(*(longlong *)(param_1 + 0x18),2,0,0);
        return;
      }
    }
  }
  else if (param_2 - 10U < 2) {
    if (param_2 == 10) {
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    else if (param_2 == 0xb) {
      *(undefined1 *)(param_1 + 0x11) = 1;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
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
        aiStack_18[0] = 0xc;
        uVar4 = System_Enum__ToString(&uStack_28,0);
        uVar4 = System_String__Concat(LIT_"'[GameStateMachine][EVENT] '",uVar4,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__Log(uVar4,0);
      }
      plVar1 = *(longlong **)(lVar2 + 0x40);
      if (plVar1 == (longlong *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00018047b0af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x1a8))(plVar1,0xc,0,*(undefined8 *)(*plVar1 + 0x1b0));
      return;
    }
  }
  else {
    if (param_2 != 0xc) {
      aiStack_18[0] = param_2;
      uVar4 = func_0x000180314670(TI_GameEvent,aiStack_18);
      if (*(longlong *)(param_1 + 0x18) == 0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = func_0x000180314670(TI_GameState,&stack0x00000010);
      uVar4 = System_String__Format(LIT_"'[GameStateMachine] Unhandled event {0} for state {1}'",uVar4,uVar5,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__LogWarning(uVar4,0);
      return;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      GameManager__StopLoading(*(longlong *)(param_1 + 0x18),0);
      lVar2 = *(longlong *)(param_1 + 0x18);
      if (lVar2 != 0) {
        if (cRam00000001834b315c == '\0') {
          FUN_180315380(TI_UnityEngine.Debug,5,0,0);
          FUN_180315380(TI_GameState);
          FUN_180315380(LIT_"'[GameStateMachine][STATE] '");
          cRam00000001834b315c = '\x01';
        }
        if (*(char *)(lVar2 + 0x20) != '\0') {
          uStack_28 = TI_GameState;
          uStack_20 = 0xffffffffffffffff;
          aiStack_18[0] = CONCAT31(aiStack_18[0]._1_3_,5);
          uVar4 = System_Enum__ToString(&uStack_28,0);
          uVar4 = System_String__Concat(LIT_"'[GameStateMachine][STATE] '",uVar4,0);
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Debug__Log(uVar4,0);
        }
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
        }
        *(undefined1 *)(lVar2 + 0x39) = 5;
        GameManager__InitializeState(lVar2,0);
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 == (longlong *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00018047a503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x178))(plVar1,0,*(undefined8 *)(*plVar1 + 0x180));
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

