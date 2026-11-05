// ArrowInputManipulator__UpdateValues__1807a9d70 @ 0x1807a9d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrowInputManipulator__UpdateValues__1807a9d70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (cRam00000001834b4500 == '\0') {
    FUN_180315380(LIT_"''");
    cRam00000001834b4500 = '\x01';
  }
  *(undefined8 *)(param_1 + 0x48) = param_2;
  func_0x000180314690(param_1 + 0x48,param_2);
  plVar1 = *(longlong **)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001807a9dd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa88))(plVar1,LIT_"''",*(undefined8 *)(*plVar1 + 0xa90));
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

