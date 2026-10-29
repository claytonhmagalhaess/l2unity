// PartyWindow__Mostra__1806a8da0 @ 0x1806a8da0

ulonglong PartyWindow__Mostra__1806a8da0(longlong param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if (cRam00000001834b3f77 == '\0') {
    FUN_180315380(TI_SparkParty);
    cRam00000001834b3f77 = '\x01';
  }
  if (*(int *)(TI_SparkParty + 0xe4) == 0) {
    func_0x000180315660();
  }
  bVar3 = SparkParty__EhDebuff(param_2,0);
  if (param_2 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar4 = SparkParty__EhCancao(*(undefined4 *)(param_2 + 0x10),0);
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 1) {
    uVar4 = (ulonglong)(byte)((byte)uVar4 ^ 1);
    if (bVar3 != 0) {
      uVar4 = 0;
    }
    return uVar4;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    return uVar4;
  }
  return (ulonglong)bVar3;
}

