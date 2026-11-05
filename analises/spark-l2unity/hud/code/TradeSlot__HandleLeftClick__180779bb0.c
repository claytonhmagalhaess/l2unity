// TradeSlot__HandleLeftClick__180779bb0 @ 0x180779bb0

void TradeSlot__HandleLeftClick__180779bb0(longlong param_1)

{
  longlong lVar1;
  
  InventorySlot__HandleLeftClick__18061fce0(param_1,0);
  lVar1 = TradeSlot__get_Grade(param_1,0);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x58), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000180779bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(param_1 + 0xb8),
               *(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}

