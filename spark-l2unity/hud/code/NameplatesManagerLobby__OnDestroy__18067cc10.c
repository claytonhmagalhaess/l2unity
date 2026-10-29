// NameplatesManagerLobby__OnDestroy__18067cc10 @ 0x18067cc10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong NameplatesManagerLobby__OnDestroy__18067cc10(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b3e39 == '\0') {
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.Clear);
    FUN_180315380(TI_NameplatesManagerLobby);
    cRam00000001834b3e39 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  FUN_1811317a0(*(longlong *)(param_1 + 0x30),MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.Clear);
  uVar4 = TI_NameplatesManagerLobby;
  **(undefined8 **)(TI_NameplatesManagerLobby + 0xb8) = 0;
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(*(ulonglong *)(TI_NameplatesManagerLobby + 0xb8) >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar2 = *puVar1;
      LOCK();
      uVar4 = *puVar1;
      bVar6 = uVar2 == uVar4;
      if (bVar6) {
        *puVar1 = uVar2 | 1L << (uVar5 & 0x3f);
        uVar4 = uVar2;
      }
      UNLOCK();
    } while (!bVar6);
  }
  return uVar4;
}

