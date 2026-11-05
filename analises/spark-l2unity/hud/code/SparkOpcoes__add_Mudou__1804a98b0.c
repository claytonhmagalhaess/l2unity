// SparkOpcoes__add_Mudou__1804a98b0 @ 0x1804a98b0

void SparkOpcoes__add_Mudou__1804a98b0(undefined8 param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  if (cRam00000001834b32a0 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32a0 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  lVar5 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1d0);
  do {
    plVar2 = (longlong *)System_Delegate__Combine(lVar5,param_1,0);
    plVar4 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 == TI_System.Action) {
        plVar4 = plVar2;
      }
      if (plVar4 == (longlong *)0x0) {
        FUN_1803146d0(plVar2);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar3 = FUN_18031a4d0(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1d0,plVar4);
    bVar6 = lVar3 != lVar5;
    lVar5 = lVar3;
  } while (bVar6);
  return;
}

