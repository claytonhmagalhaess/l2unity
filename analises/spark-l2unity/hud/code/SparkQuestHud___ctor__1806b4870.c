// SparkQuestHud___ctor__1806b4870 @ 0x1806b4870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkQuestHud___ctor__1806b4870
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  
  if (cRam00000001834b3fe1 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>);
    cRam00000001834b3fe1 = '\x01';
  }
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>);
  FUN_180bba2e0(uVar1,MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>..ctor);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  func_0x000180314690(param_1 + 0x60,uVar1);
  if (DAT_1834c10ac == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0,param_3,param_4,unaff_RBX);
    DAT_1834c10ac = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  return;
}

