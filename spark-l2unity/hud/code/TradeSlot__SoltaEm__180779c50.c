// TradeSlot__SoltaEm__180779c50 @ 0x180779c50

void TradeSlot__SoltaEm__180779c50(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0xb8) == 0) || (lVar2 = TradeSlot__get_Grade(param_1,0), lVar2 == 0))
  {
    return;
  }
  lVar2 = TradeSlot__get_Grade(param_1,0);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x60) == 0) {
      return;
    }
    if (param_2 != 0) {
      lVar2 = TradeSlot__get_Grade(param_2,0);
      lVar3 = TradeSlot__get_Grade(param_1,0);
      if (lVar3 != 0) {
        if (lVar2 != *(longlong *)(lVar3 + 0x60)) {
          return;
        }
        lVar2 = TradeSlot__get_Grade(param_1,0);
        if (lVar2 != 0) {
          lVar2 = *(longlong *)(lVar2 + 0x50);
          if (lVar2 == 0) {
            return;
          }
          (**(code **)(lVar2 + 0x18))
                    (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(param_1 + 0xb8),
                     *(undefined8 *)(lVar2 + 0x28));
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

