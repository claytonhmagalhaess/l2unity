// SparkCifraStream__set_Position__18058fef0 @ 0x18058fef0

void SparkCifraStream__set_Position__18058fef0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (-1 < param_2) {
    *(longlong *)(param_1 + 0x40) = param_2;
    return;
  }
  uVar2 = func_0x0001803153a0(0x1832d4010);
  uVar2 = func_0x000180315580(uVar2);
  uVar3 = func_0x0001803153a0(0x183314830);
  FUN_18180b960(uVar2,uVar3,0);
  uVar3 = func_0x0001803153a0(0x1832d6160);
  FUN_180315590(uVar2,uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

