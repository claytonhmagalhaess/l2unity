// TradeSlot__AssignItem__180779b20 @ 0x180779b20

void TradeSlot__AssignItem__180779b20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  
  InventorySlot__AssignItem__18061f4f0(param_1,param_2,0);
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  func_0x000180314690(param_1 + 0xb8,param_2);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
    lVar3 = TradeSlot__get_Grade(param_1,0);
    if (lVar3 == 0) {
      *(undefined1 *)(lVar1 + 0x59) = 0;
      return;
    }
    lVar3 = TradeSlot__get_Grade(param_1,0);
    if (lVar3 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(bool *)(lVar1 + 0x59) = *(longlong *)(lVar3 + 0x60) != 0;
  }
  return;
}

