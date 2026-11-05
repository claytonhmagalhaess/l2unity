// SparkChatFiltro__add_Mudou__1805d4e30 @ 0x1805d4e30

void SparkChatFiltro__add_Mudou__1805d4e30(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (cRam00000001834b3b2c == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_SparkChatFiltro);
    cRam00000001834b3b2c = '\x01';
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660(TI_SparkChatFiltro);
  }
  lVar5 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x50);
  do {
    lVar3 = System_Delegate__Combine(lVar5,param_1,0);
    uVar2 = TI_System.Action<int>;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = func_0x0001803146b0(lVar3,TI_System.Action<int>);
      if (lVar4 == 0) {
        FUN_1803146d0(lVar3,uVar2);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar3 = FUN_18031a4d0(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x50,lVar4);
    bVar6 = lVar3 != lVar5;
    lVar5 = lVar3;
  } while (bVar6);
  return;
}

