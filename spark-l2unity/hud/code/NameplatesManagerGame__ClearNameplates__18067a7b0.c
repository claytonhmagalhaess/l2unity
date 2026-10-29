// NameplatesManagerGame__ClearNameplates__18067a7b0 @ 0x18067a7b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong NameplatesManagerGame__ClearNameplates__18067a7b0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar4 = NameplatesManagerBase__ClearNameplates__180678980(param_1,0);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    return uVar4;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x70);
  if (*(longlong *)(uVar4 + 0x10) != 0) {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
    uVar4 = UnityEngine_UIElements_VisualElement__Remove
                      (*(longlong *)(param_1 + 0x48),*(undefined8 *)(uVar4 + 0x10),0);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(param_1 + 0x70U >> 0xc);
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

