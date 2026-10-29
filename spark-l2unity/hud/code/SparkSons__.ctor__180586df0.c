// SparkSons__.ctor__180586df0 @ 0x180586df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkSons___ctor__180586df0
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  
  if (cRam00000001834b38e5 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.AudioClip>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<string,UnityEngine.AudioClip>);
    FUN_180315380(MR_System.Collections.Generic.HashSet<string>..ctor);
    FUN_180315380(TI_System.Collections.Generic.HashSet<string>);
    FUN_180315380(MR_System.Collections.Generic.List<SparkSons.Pendente>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<SparkSons.Pendente>);
    cRam00000001834b38e5 = '\x01';
  }
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,UnityEngine.AudioClip>);
  FUN_18124bf80(uVar1,MR_System.Collections.Generic.Dictionary<string,UnityEngine.AudioClip>..ctor);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000180314690(param_1 + 0x28,uVar1);
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.HashSet<string>);
  FUN_1814e1e50(uVar1,MR_System.Collections.Generic.HashSet<string>..ctor);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000180314690(param_1 + 0x30,uVar1);
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.List<SparkSons.Pendente>);
  FUN_180bba2e0(uVar1,MR_System.Collections.Generic.List<SparkSons.Pendente>..ctor);
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

