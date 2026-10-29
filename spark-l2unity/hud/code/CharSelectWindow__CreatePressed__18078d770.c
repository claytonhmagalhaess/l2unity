// CharSelectWindow__CreatePressed__18078d770 @ 0x18078d770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharSelectWindow__CreatePressed__18078d770(void)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  if (DAT_1834b30fd == '\0') {
    FUN_180315380(TI_L2ConfirmWindow);
    DAT_1834b30fd = '\x01';
  }
  plVar1 = (longlong *)**(longlong **)(TI_L2ConfirmWindow + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x1d0));
    if (cRam00000001834b3021 == '\0') {
      FUN_180315380(TI_GameManager);
      cRam00000001834b3021 = '\x01';
    }
    lVar2 = **(longlong **)(TI_GameManager + 0xb8);
    if (lVar2 != 0) {
      if (cRam00000001834b315c == '\0') {
        FUN_180315380(TI_UnityEngine.Debug,6,0,0);
        FUN_180315380(TI_GameState);
        FUN_180315380(LIT_"'[GameStateMachine][STATE] '");
        cRam00000001834b315c = '\x01';
      }
      if (*(char *)(lVar2 + 0x20) != '\0') {
        uStack_28 = TI_GameState;
        uStack_20 = 0xffffffffffffffff;
        uStack_18 = 6;
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
      *(undefined1 *)(lVar2 + 0x39) = 6;
      GameManager__InitializeState(lVar2,0);
      plVar1 = *(longlong **)(lVar2 + 0x40);
      if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018047a503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x178))(plVar1,0,*(undefined8 *)(*plVar1 + 0x180));
        return;
      }
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

