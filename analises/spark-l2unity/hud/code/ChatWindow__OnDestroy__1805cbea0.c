// ChatWindow__OnDestroy__1805cbea0 @ 0x1805cbea0

/* WARNING: Possible PIC construction at 0x0001805cbf47: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001805cbf4c) */
/* WARNING: Removing unreachable block (ram,0x0001805cbf80) */
/* WARNING: Removing unreachable block (ram,0x0001805cbf85) */
/* WARNING: Removing unreachable block (ram,0x0001805cbf99) */
/* WARNING: Removing unreachable block (ram,0x0001805cbfb0) */
/* WARNING: Removing unreachable block (ram,0x0001805cbfb5) */
/* WARNING: Removing unreachable block (ram,0x0001805cbfbf) */
/* WARNING: Removing unreachable block (ram,0x0001805cbfc9) */
/* WARNING: Removing unreachable block (ram,0x0001805cc00c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong ChatWindow__OnDestroy__1805cbea0(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  if (cRam00000001834b3ab5 == '\0') {
    FUN_180315380(TI_System.Action<char>);
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(MD_ChatWindow.FiltroMudou);
    FUN_180315380(MD_ChatWindow.TextoDigitado);
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(TI_SparkChatFiltro);
    cRam00000001834b3ab5 = '\x01';
  }
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660(TI_ChatWindow);
  }
  *(undefined8 *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8) = 0;
  uVar3 = TI_ChatWindow;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(*(longlong *)(TI_ChatWindow + 0xb8) + 8U >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar2 = *puVar1;
      LOCK();
      uVar3 = *puVar1;
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        *puVar1 = uVar2 | 1L << (uVar4 & 0x3f);
        uVar3 = uVar2;
      }
      UNLOCK();
    } while (!bVar5);
  }
  return uVar3;
}

