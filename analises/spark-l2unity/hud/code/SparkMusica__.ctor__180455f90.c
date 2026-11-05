// SparkMusica__.ctor__180455f90 @ 0x180455f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMusica___ctor__180455f90
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  
  if (cRam00000001834b3008 == '\0') {
    FUN_180315380(TI_UnityEngine.AudioSource__);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,string__>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<int,string__>);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMusica.Volume>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<SparkMusica.Volume>);
    FUN_180315380(TI_float__);
    FUN_180315380(LIT_"''");
    cRam00000001834b3008 = '\x01';
  }
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<int,string__>);
  FUN_1811e4340(uVar1,MR_System.Collections.Generic.Dictionary<int,string__>..ctor);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000180314690(param_1 + 0x20,uVar1);
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.List<SparkMusica.Volume>);
  FUN_180bba2e0(uVar1,MR_System.Collections.Generic.List<SparkMusica.Volume>..ctor);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000180314690(param_1 + 0x28,uVar1);
  uVar1 = func_0x000180314710(TI_UnityEngine.AudioSource__,2);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000180314690(param_1 + 0x30,uVar1);
  uVar1 = func_0x000180314710(TI_float__,2);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x000180314690(param_1 + 0x38,uVar1);
  uVar1 = func_0x000180314710(TI_float__,2);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  func_0x000180314690(param_1 + 0x40,uVar1);
  *(undefined8 *)(param_1 + 0x50) = LIT_"''";
  func_0x000180314690(param_1 + 0x50,LIT_"''");
  *(undefined4 *)(param_1 + 0x68) = 0xbf800000;
  if (DAT_1834c10ac == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0,param_3,param_4,unaff_RBX);
    DAT_1834c10ac = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  return;
}

