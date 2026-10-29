// LoginConnectedState__HandleEvent__18047bbc0 @ 0x18047bbc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginConnectedState__HandleEvent__18047bbc0(longlong param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 uStack_28;
  undefined8 uStack_20;
  int aiStack_18 [4];
  
  if (cRam00000001834b3168 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_GameEvent);
    FUN_180315380(TI_GameState);
    FUN_180315380(LIT_"'[GameStateMachine] Unhandled event {0} for state {1}'");
    cRam00000001834b3168 = '\x01';
  }
  if (param_2 == 1) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (lVar5 == 0) {
code_r0x00018047bce3:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = 4;
  }
  else {
    if (param_2 != 3) {
      aiStack_18[0] = param_2;
      uVar3 = func_0x000180314670(TI_GameEvent,aiStack_18);
      if (*(longlong *)(param_1 + 0x18) != 0) {
        uVar4 = func_0x000180314670(TI_GameState,&stack0x00000010);
        uVar3 = System_String__Format(LIT_"'[GameStateMachine] Unhandled event {0} for state {1}'",uVar3,uVar4,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__LogWarning(uVar3,0);
        return;
      }
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (lVar5 == 0) goto code_r0x00018047bce3;
    uVar6 = 2;
  }
  if (cRam00000001834b315c == '\0') {
    FUN_180315380(TI_UnityEngine.Debug,uVar6,0,0);
    FUN_180315380(TI_GameState);
    FUN_180315380(LIT_"'[GameStateMachine][STATE] '");
    cRam00000001834b315c = '\x01';
  }
  if (*(char *)(lVar5 + 0x20) != '\0') {
    uStack_28 = TI_GameState;
    uStack_20 = 0xffffffffffffffff;
    aiStack_18[0] = CONCAT31(aiStack_18[0]._1_3_,uVar6);
    uVar3 = System_Enum__ToString(&uStack_28,0);
    uVar3 = System_String__Concat(LIT_"'[GameStateMachine][STATE] '",uVar3,0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__Log(uVar3,0);
  }
  plVar1 = *(longlong **)(lVar5 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
  }
  *(undefined1 *)(lVar5 + 0x39) = uVar6;
  GameManager__InitializeState(lVar5,0);
  plVar1 = *(longlong **)(lVar5 + 0x40);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018047a503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x178))(plVar1,0,*(undefined8 *)(*plVar1 + 0x180));
    return;
  }
  return;
}

