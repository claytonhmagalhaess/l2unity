// L2ConfirmWindow__ShowWindow__180770e10 @ 0x180770e10

void L2ConfirmWindow__ShowWindow__180770e10
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (cRam00000001834b43dd == '\0') {
    FUN_180315380(LIT_"'Unkown SystemMessageId.'");
    cRam00000001834b43dd = '\x01';
  }
  lVar2 = SystemMessageTable__get_Instance(0);
  if (lVar2 != 0) {
    lVar2 = SystemMessageTable__GetSystemMessage(lVar2,param_2,0);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x18);
      if (*(longlong *)(lVar2 + 0x18) == 0) {
        lVar3 = LIT_"'Unkown SystemMessageId.'";
      }
      L2ConfirmWindow__ShowWindow__180770c40(param_1,lVar3,param_3,param_4,0,0);
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

