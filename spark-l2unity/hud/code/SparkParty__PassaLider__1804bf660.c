// SparkParty__PassaLider__1804bf660 @ 0x1804bf660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkParty__PassaLider__1804bf660(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b333b == '\0') {
    FUN_180315380(TI_SparkParty);
    cRam00000001834b333b = '\x01';
  }
  if (param_1 == 0) {
    if (*(int *)(TI_SparkParty + 0xe4) == 0) {
      func_0x000180315660();
    }
    param_1 = SparkParty__NomeDoAlvoJogador(0);
    if (param_1 == 0) {
      return;
    }
  }
  if (*(int *)(TI_SparkParty + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = SparkParty__get_SouLider(0);
  if (cVar3 == '\0') {
    return;
  }
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
     (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
     plVar1 != (longlong *)0x0)) {
    if (cRam00000001834b3667 == '\0') {
      FUN_180315380(MR_System.Array.Empty<int>,param_1,0);
      FUN_180315380(TI_SparkPacoteTexto);
      cRam00000001834b3667 = '\x01';
    }
    uVar4 = FUN_180001ef0(MR_System.Array.Empty<int>);
    uVar5 = func_0x000180315580(TI_SparkPacoteTexto);
    SparkPacoteTexto___ctor(uVar5,0xd0,4,param_1,uVar4,0);
                    /* WARNING: Could not recover jumptable at 0x00018050c79e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x178))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 0x180));
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

