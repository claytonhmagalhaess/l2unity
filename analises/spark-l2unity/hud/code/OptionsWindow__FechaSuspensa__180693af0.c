// OptionsWindow__FechaSuspensa__180693af0 @ 0x180693af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong OptionsWindow__FechaSuspensa__180693af0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    return in_RAX;
  }
  uVar3 = UnityEngine_UIElements_VisualElement__RemoveFromHierarchy
                    (*(undefined8 *)(param_1 + 0xd8),0);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(param_1 + 0xd8U >> 0xc);
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

