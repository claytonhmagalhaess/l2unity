// SparkCraftWindow__NomeDoBotao__1805f4250 @ 0x1805f4250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkCraftWindow__NomeDoBotao__1805f4250(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (cRam00000001834b3baf == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    cRam00000001834b3baf = '\x01';
  }
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar2 = (longlong *)FUN_180b0e310(param_1,0,0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
  if (plVar2 == (longlong *)0x0) {
    if (param_1 == (longlong *)0x0) {
      FUN_1803155d0(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar3 = *param_1;
    plVar2 = param_1;
  }
  else {
    lVar3 = *plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001805f42dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0xe48))(plVar2,param_2,*(undefined8 *)(lVar3 + 0xe50));
  return;
}

