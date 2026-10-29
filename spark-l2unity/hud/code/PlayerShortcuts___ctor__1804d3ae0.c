// PlayerShortcuts___ctor__1804d3ae0 @ 0x1804d3ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerShortcuts___ctor__1804d3ae0
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  
  if (cRam00000001834b3412 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>..ctor);
    FUN_180315380(TI_System.Collections.Generic.HashSet<int>);
    cRam00000001834b3412 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.HashSet<int>);
  FUN_1814e1d50(uVar1,MR_System.Collections.Generic.HashSet<int>..ctor);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  func_0x000180314690(param_1 + 0x50,uVar1);
  if (DAT_1834c10ac == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0,param_3,param_4,unaff_RBX);
    DAT_1834c10ac = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  return;
}

