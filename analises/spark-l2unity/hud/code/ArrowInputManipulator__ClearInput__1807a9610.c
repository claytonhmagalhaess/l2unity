// ArrowInputManipulator__ClearInput__1807a9610 @ 0x1807a9610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrowInputManipulator__ClearInput__1807a9610(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (cRam00000001834b4505 == '\0') {
    FUN_180315380(LIT_"''");
    cRam00000001834b4505 = '\x01';
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001807a965b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa88))(plVar1,LIT_"''",*(undefined8 *)(*plVar1 + 0xa90));
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

