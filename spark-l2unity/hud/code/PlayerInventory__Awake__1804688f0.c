// PlayerInventory__Awake__1804688f0 @ 0x1804688f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerInventory__Awake__1804688f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b3042 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<ItemInstance>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_PlayerInventory);
    cRam00000001834b3042 = '\x01';
  }
  uVar3 = **(undefined8 **)(TI_PlayerInventory + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if (cVar2 == '\0') {
    lVar1 = **(longlong **)(TI_PlayerInventory + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(lVar1,param_1,0);
    if (cVar2 != '\0') {
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Object__Destroy(param_1,0);
    }
  }
  else {
    **(longlong **)(TI_PlayerInventory + 0xb8) = param_1;
    func_0x000180314690(*(undefined8 *)(TI_PlayerInventory + 0xb8),param_1);
  }
  uVar3 = func_0x000180315580(TI_System.Collections.Generic.List<ItemInstance>);
  FUN_180bba2e0(uVar3,MR_System.Collections.Generic.List<ItemInstance>..ctor);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  func_0x000180314690(param_1 + 0x28,uVar3);
  *(undefined4 *)(param_1 + 0x20) = 0x50;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}

