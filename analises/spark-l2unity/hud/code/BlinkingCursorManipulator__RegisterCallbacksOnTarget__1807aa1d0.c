// BlinkingCursorManipulator__RegisterCallbacksOnTarget__1807aa1d0 @ 0x1807aa1d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong BlinkingCursorManipulator__RegisterCallbacksOnTarget__1807aa1d0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  if (cRam00000001834b4506 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_BlinkingCursorManipulator._RegisterCallbacksOnTarget_b__2_0);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    cRam00000001834b4506 = '\x01';
  }
  lVar4 = func_0x0001814b50c0(param_1,0);
  if (lVar4 != 0) {
    lVar4 = func_0x0001818f3de0(lVar4,0);
    uVar5 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(uVar5,param_1,MD_BlinkingCursorManipulator._RegisterCallbacksOnTarget_b__2_0,0);
    if ((lVar4 != 0) && (lVar4 = FUN_180002030(1,TI_UnityEngine.UIElements.IVisualElementScheduler,lVar4,uVar5), lVar4 != 0)) {
      uVar6 = FUN_180002030(5,TI_UnityEngine.UIElements.IVisualElementScheduledItem,lVar4,500);
      *(ulonglong *)(param_1 + 0x38) = uVar6;
      if (_DAT_1834c7d58 != 0) {
        uVar7 = (uint)(param_1 + 0x38U >> 0xc);
        puVar1 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
        do {
          uVar2 = *puVar1;
          LOCK();
          uVar6 = *puVar1;
          bVar8 = uVar2 == uVar6;
          if (bVar8) {
            *puVar1 = uVar2 | 1L << (uVar7 & 0x3f);
            uVar6 = uVar2;
          }
          UNLOCK();
        } while (!bVar8);
      }
      return uVar6;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return uVar6;
}

