// TooltipManipulator___ctor__1807b5900 @ 0x1807b5900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TooltipManipulator___ctor__1807b5900
                    (longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  SparkMapaWindow_Loja___ctor__1803f01b0(param_1,0);
  uVar3 = UnityEngine_UIElements_Manipulator__set_target(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(param_1 + 0x18U >> 0xc);
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

