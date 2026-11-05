// NameplatesManagerBase___ctor__18067a1d0 @ 0x18067a1d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerBase___ctor__18067a1d0
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  
  if (DAT_1834b3e22 == '\0') {
    FUN_180315380(TI_UnityEngine.Collider__);
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>..ctor);
    FUN_180315380(TI_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>);
    FUN_180315380(MR_System.Collections.Generic.List<Nameplate>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<Nameplate>);
    DAT_1834b3e22 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x20) = 0x42480000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ff9999a;
  uVar1 = func_0x000180315580(TI_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>);
  FUN_18113f2d0(uVar1,MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>..ctor);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000180314690(param_1 + 0x30,uVar1);
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.List<Nameplate>);
  FUN_180bba2e0(uVar1,MR_System.Collections.Generic.List<Nameplate>..ctor);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  func_0x000180314690(param_1 + 0x60,uVar1);
  uVar1 = func_0x000180314710(TI_UnityEngine.Collider__,0x100);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  func_0x000180314690(param_1 + 0x68,uVar1);
  if (DAT_1834c10ac == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0,param_3,param_4,unaff_RBX);
    DAT_1834c10ac = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  return;
}

