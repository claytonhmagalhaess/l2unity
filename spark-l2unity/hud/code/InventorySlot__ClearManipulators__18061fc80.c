// InventorySlot__ClearManipulators__18061fc80 @ 0x18061fc80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong InventorySlot__ClearManipulators__18061fc80(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = L2DraggableSlot__ClearManipulators__1807711c0(param_1,0);
  if (*(longlong *)(param_1 + 0x98) == 0) {
    return uVar3;
  }
  uVar3 = UnityEngine_UIElements_VisualElementExtensions__RemoveManipulator
                    (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x98),0);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(param_1 + 0x98U >> 0xc);
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

