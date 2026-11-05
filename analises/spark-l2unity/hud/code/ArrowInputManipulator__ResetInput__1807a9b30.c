// ArrowInputManipulator__ResetInput__1807a9b30 @ 0x1807a9b30

void ArrowInputManipulator__ResetInput__1807a9b30(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
      FUN_1803155c0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar2 = *(longlong **)(param_1 + 0x50);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001807a9b65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xa88))
                (plVar2,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(*plVar2 + 0xa90));
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

