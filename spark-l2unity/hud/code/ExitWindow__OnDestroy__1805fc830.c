// ExitWindow__OnDestroy__1805fc830 @ 0x1805fc830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong ExitWindow__OnDestroy__1805fc830(undefined8 param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b3bec == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_ExitWindow.AoMudarSessao);
    FUN_180315380(TI_ExitWindow);
    FUN_180315380(TI_SparkSessao);
    cRam00000001834b3bec = '\x01';
  }
  uVar4 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar4,param_1,MD_ExitWindow.AoMudarSessao,0);
  if (*(int *)(TI_SparkSessao + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkSessao__remove_Mudou(uVar4,0);
  uVar3 = TI_ExitWindow;
  **(undefined8 **)(TI_ExitWindow + 0xb8) = 0;
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(*(ulonglong *)(TI_ExitWindow + 0xb8) >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar2 = *puVar1;
      LOCK();
      uVar3 = *puVar1;
      bVar6 = uVar2 == uVar3;
      if (bVar6) {
        *puVar1 = uVar2 | 1L << (uVar5 & 0x3f);
        uVar3 = uVar2;
      }
      UNLOCK();
    } while (!bVar6);
  }
  return uVar3;
}

