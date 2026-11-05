// HighlightedInputFieldManipulator___ctor__1807af5e0 @ 0x1807af5e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong HighlightedInputFieldManipulator___ctor__1807af5e0
                    (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  if (cRam00000001834b450c == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'unity-text-input'");
    cRam00000001834b450c = '\x01';
  }
  *(undefined4 *)(param_1 + 0x40) = 0x14;
  UnityEngine_UIElements_MouseManipulator___ctor(param_1,0);
  UnityEngine_UIElements_Manipulator__set_target(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x40) = param_3;
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = FUN_180b0e310(param_2,LIT_"'unity-text-input'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
  *(ulonglong *)(param_1 + 0x48) = uVar3;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(param_1 + 0x48U >> 0xc);
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

