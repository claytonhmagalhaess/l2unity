// L2SlotContainer__AssignItemsToSlots__18078ed90 @ 0x18078ed90

void L2SlotContainer__AssignItemsToSlots__18078ed90(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (cRam00000001834b443f == '\0') {
    FUN_180315380(TI_System.Action<ItemInstance>);
    FUN_180315380(MD_L2SlotContainer._AssignItemsToSlots_b__19_0);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.ForEach);
    cRam00000001834b443f = '\x01';
  }
  if (param_2 != 0) {
    uVar1 = func_0x000180315580(TI_System.Action<ItemInstance>);
    FUN_18055b980(uVar1,param_1,MD_L2SlotContainer._AssignItemsToSlots_b__19_0,0);
    FUN_180bad8e0(param_2,uVar1,MR_System.Collections.Generic.List<ItemInstance>.ForEach);
  }
  return;
}

