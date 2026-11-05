// SparkRefinoWindow__NomeDoBotao__1805b60c0 @ 0x1805b60c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRefinoWindow__NomeDoBotao__1805b60c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (cRam00000001834b3a29 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    cRam00000001834b3a29 = '\x01';
  }
  uVar1 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar3 = (longlong *)FUN_180b0e310(uVar1,0,0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 200);
    if (plVar3 == (longlong *)0x0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar4 = *plVar3;
  }
  else {
    lVar4 = *plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001805b6162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0xe48))(plVar3,param_2,*(undefined8 *)(lVar4 + 0xe50));
  return;
}

