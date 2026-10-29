// ArrowInputManipulator__SelectIndex__1807a9b80 @ 0x1807a9b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrowInputManipulator__SelectIndex__1807a9b80(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint auStackX_10 [6];
  
  if (cRam00000001834b4504 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(LIT_"'Trying to select wrong index [{0}] for arrow manipulator.'");
    cRam00000001834b4504 = '\x01';
  }
  if (-1 < (int)param_2) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) <= (int)param_2) goto code_r0x0001807a9c12;
      *(uint *)(param_1 + 0x70) = param_2;
      if (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x18) <= param_2) {
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(param_1 + 0x50);
        if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001807a9c0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0xa88))
                    (plVar2,*(undefined8 *)(lVar1 + 0x20 + (longlong)(int)param_2 * 8),
                     *(undefined8 *)(*plVar2 + 0xa90));
          return;
        }
      }
    }
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
code_r0x0001807a9c12:
  auStackX_10[0] = param_2;
  uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_10);
  uVar4 = System_String__Format(LIT_"'Trying to select wrong index [{0}] for arrow manipulator.'",uVar4,0);
  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
    func_0x000180315660();
  }
  UnityEngine_Debug__LogWarning(uVar4,0);
  return;
}

