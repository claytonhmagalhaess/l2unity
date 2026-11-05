// ChatWindow__FechaMenuDaAba__1805c6e10 @ 0x1805c6e10

/* WARNING: Possible PIC construction at 0x0001805c6ead: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001805c6eb2) */
/* WARNING: Removing unreachable block (ram,0x0001805c6ebe) */
/* WARNING: Removing unreachable block (ram,0x0001805c6ec5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__FechaMenuDaAba__1805c6e10(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  
  if (cRam00000001834b3ac0 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IPanel);
    cRam00000001834b3ac0 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar5 = func_0x0001825d76c0(*(longlong *)(param_1 + 0xb8),0);
    if ((lVar5 != 0) && (lVar5 = FUN_1800020c0(0,TI_UnityEngine.UIElements.IPanel,lVar5), lVar5 != 0)) {
      FUN_180990ff0(lVar5,*(undefined8 *)(param_1 + 0xe8),1,MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    }
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (_DAT_1834c7d58 != 0) {
    uVar6 = (uint)(param_1 + 0xe8U >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar3 = *puVar1;
      LOCK();
      uVar2 = *puVar1;
      if (uVar3 == uVar2) {
        *puVar1 = uVar3 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar2);
  }
  return;
}

