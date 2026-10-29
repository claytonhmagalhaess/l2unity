// ClickManager___ctor__1804f5020 @ 0x1804f5020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClickManager___ctor__1804f5020
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  
  if (DAT_1834b2e67 == '\0') {
    FUN_180315380(TI_UnityEngine.Vector3);
    DAT_1834b2e67 = '\x01';
  }
  uVar1 = *(undefined4 *)(*(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x48) = **(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (DAT_1834c10ac == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0,param_3,param_4,unaff_RBX);
    DAT_1834c10ac = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  return;
}

