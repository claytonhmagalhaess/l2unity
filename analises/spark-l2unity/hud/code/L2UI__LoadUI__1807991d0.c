// L2UI__LoadUI__1807991d0 @ 0x1807991d0

/* WARNING: Possible PIC construction at 0x00018079927e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001807992a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001807992d2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001807992fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001807992d7) */
/* WARNING: Removing unreachable block (ram,0x0001807992ad) */
/* WARNING: Removing unreachable block (ram,0x000180799283) */
/* WARNING: Removing unreachable block (ram,0x000180799301) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong L2UI__LoadUI__1807991d0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b4477 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'UIContainerPopup'");
    FUN_180315380(LIT_"'UIContainer'");
    FUN_180315380(LIT_"'Loading'");
    FUN_180315380(LIT_"'UIContainerTooltip'");
    FUN_180315380(LIT_"'UIContainerSlot'");
    cRam00000001834b4477 = '\x01';
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = FUN_180b0e310(uVar3,LIT_"'UIContainer'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
  *(ulonglong *)(param_1 + 0x48) = uVar4;
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(param_1 + 0x48U >> 0xc);
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

