// ArrowInputManipulator___ctor__1807a9df0 @ 0x1807a9df0

/* WARNING: Possible PIC construction at 0x0001807a9e17: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001807a9e62: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001807a9e1c) */
/* WARNING: Removing unreachable block (ram,0x0001807a9e31) */
/* WARNING: Removing unreachable block (ram,0x0001807a9e3b) */
/* WARNING: Removing unreachable block (ram,0x0001807a9e44) */
/* WARNING: Removing unreachable block (ram,0x0001807a9e57) */
/* WARNING: Removing unreachable block (ram,0x0001807a9e67) */
/* WARNING: Removing unreachable block (ram,0x0001807a9e74) */
/* WARNING: Removing unreachable block (ram,0x0001807a9e79) */
/* WARNING: Removing unreachable block (ram,0x0001807a9ebf) */
/* WARNING: Removing unreachable block (ram,0x0001807a9e7e) */
/* WARNING: Removing unreachable block (ram,0x0001807a9eb9) */
/* WARNING: Removing unreachable block (ram,0x0001807a9e87) */
/* WARNING: Removing unreachable block (ram,0x0001807a9e9f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong ArrowInputManipulator___ctor__1807a9df0
                    (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = UnityEngine_UIElements_MouseManipulator___ctor(param_1,0);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(param_1 + 0x38U >> 0xc);
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

