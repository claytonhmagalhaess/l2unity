// L2ConfirmWindow__ShowWindow__180770ea0 @ 0x180770ea0

void L2ConfirmWindow__ShowWindow__180770ea0
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = SystemMessage__PrintMessage(param_2,0,0);
    L2ConfirmWindow__ShowWindow__180770c40(param_1,uVar2,param_3,param_4,0,0);
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

