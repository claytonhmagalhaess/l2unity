// InventoryWindow__UpdateItemList__180623c10 @ 0x180623c10

void InventoryWindow__UpdateItemList__180623c10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  
  if (cRam00000001834b3cdc == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<ItemInstance>);
    cRam00000001834b3cdc = '\x01';
  }
  if (param_2 == 0) {
    param_2 = func_0x000180315580(TI_System.Collections.Generic.List<ItemInstance>);
    FUN_180bba2e0(param_2,MR_System.Collections.Generic.List<ItemInstance>..ctor);
  }
  *(longlong *)(param_1 + 0xe0) = param_2;
  func_0x000180314690(param_1 + 0xe0,param_2);
  InventoryWindow__RefreshSlotsAndAdenas(param_1,0);
  InventoryWindow__RefreshWeight(param_1,0);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    InventoryGearTab__UpdateItemList__18061eeb0(*(longlong *)(param_1 + 0xd0),param_2,0);
    uVar3 = 0;
    lVar1 = *(longlong *)(param_1 + 0xd8);
    while (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) <= (int)uVar3) {
        return;
      }
      lVar1 = *(longlong *)(param_1 + 0xd8);
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar3) {
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar3 * 8);
      if (lVar1 == 0) break;
      InventoryTab__UpdateItemList__180620c20(lVar1,param_2,0);
      uVar3 = uVar3 + 1;
      lVar1 = *(longlong *)(param_1 + 0xd8);
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

