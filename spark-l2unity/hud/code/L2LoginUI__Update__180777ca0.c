// L2LoginUI__Update__180777ca0 @ 0x180777ca0

/* WARNING: Possible PIC construction at 0x000180799517: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong L2LoginUI__Update__180777ca0(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  
  if (DAT_1834b4476 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<UnityEngine.UIElements.UIDocument>);
    FUN_180315380(TI_UnityEngine.UIElements.IResolvedStyle);
    DAT_1834b4476 = '\x01';
  }
  if (param_1[4] != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_resolvedStyle(param_1[4],0);
    if (lVar4 == 0) goto LAB_180799565;
    uVar8 = FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar4);
    if (((uVar8 & 0x7fffffff) < 0x7f800001) && ((char)param_1[5] == '\0')) {
      uVar5 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      *(undefined1 *)(param_1 + 5) = 1;
      if ((char)param_1[5] == '\0') {
        return uVar5;
      }
      plVar6 = (longlong *)param_1[4];
      if ((plVar6 == (longlong *)0x0) ||
         (lVar4 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230)),
         lVar4 == 0)) goto LAB_180799565;
      uVar5 = UnityEngine_UIElements_FocusController__get_focusedElement(lVar4,0);
      plVar6 = param_1 + 6;
      param_1[6] = uVar5;
      goto SUB_180314690;
    }
  }
  lVar4 = FUN_180997040(param_1,MR_UnityEngine.Component.GetComponent<UnityEngine.UIElements.UIDocument>);
  if (lVar4 != 0) {
    uVar5 = func_0x00018239a4a0(lVar4,0);
    plVar6 = param_1 + 4;
    param_1[4] = uVar5;
SUB_180314690:
    if (_DAT_1834c7d58 != 0) {
      uVar8 = (uint)((ulonglong)plVar6 >> 0xc);
      puVar1 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
      do {
        uVar2 = *puVar1;
        LOCK();
        uVar5 = *puVar1;
        bVar7 = uVar2 == uVar5;
        if (bVar7) {
          *puVar1 = uVar2 | 1L << (uVar8 & 0x3f);
          uVar5 = uVar2;
        }
        UNLOCK();
      } while (!bVar7);
    }
    return uVar5;
  }
LAB_180799565:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}

