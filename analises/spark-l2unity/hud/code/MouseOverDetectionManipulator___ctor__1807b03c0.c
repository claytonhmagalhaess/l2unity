// MouseOverDetectionManipulator___ctor__1807b03c0 @ 0x1807b03c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong MouseOverDetectionManipulator___ctor__1807b03c0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  if (cRam00000001834b4535 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b4535 = '\x01';
  }
  UnityEngine_UIElements_MouseManipulator___ctor(param_1,0);
  *(undefined1 *)(param_1 + 0x38) = 1;
  UnityEngine_UIElements_Manipulator__set_target(param_1,param_2,0);
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  uVar3 = **(undefined8 **)(TI_L2GameUI + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if (cVar4 == '\0') {
    lVar6 = TI_L2LoginUI;
    if (cRam00000001834b31c1 == '\0') {
      FUN_180315380(TI_L2LoginUI);
      cRam00000001834b31c1 = '\x01';
      lVar6 = TI_L2LoginUI;
    }
  }
  else {
    lVar6 = TI_L2GameUI;
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
      lVar6 = TI_L2GameUI;
    }
  }
  uVar5 = **(ulonglong **)(lVar6 + 0xb8);
  *(ulonglong *)(param_1 + 0x40) = uVar5;
  if (_DAT_1834c7d58 != 0) {
    uVar7 = (uint)(param_1 + 0x40U >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar2 = *puVar1;
      LOCK();
      uVar5 = *puVar1;
      bVar8 = uVar2 == uVar5;
      if (bVar8) {
        *puVar1 = uVar2 | 1L << (uVar7 & 0x3f);
        uVar5 = uVar2;
      }
      UNLOCK();
    } while (!bVar8);
  }
  return uVar5;
}

