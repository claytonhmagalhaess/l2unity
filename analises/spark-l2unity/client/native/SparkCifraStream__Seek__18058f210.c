// SparkCifraStream__Seek__18058f210 @ 0x18058f210

longlong SparkCifraStream__Seek__18058f210(longlong param_1,longlong param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      param_2 = param_2 + *(longlong *)(param_1 + 0x40);
    }
    else {
      param_2 = param_2 + *(longlong *)(param_1 + 0x38);
    }
  }
  if (-1 < param_2) {
    *(longlong *)(param_1 + 0x40) = param_2;
    return param_2;
  }
  uVar2 = func_0x0001803153a0(0x183316e30);
  uVar2 = func_0x000180315580(uVar2);
  uVar3 = func_0x0001803153a0(0x1832cd158);
  FUN_18185b600(uVar2,uVar3,0);
  uVar3 = func_0x0001803153a0(0x1832d5f50);
  FUN_180315590(uVar2,uVar3);
  pcVar1 = (code *)swi(3);
  lVar4 = (*pcVar1)();
  return lVar4;
}

