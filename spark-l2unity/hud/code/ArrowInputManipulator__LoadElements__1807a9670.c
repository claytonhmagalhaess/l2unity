// ArrowInputManipulator__LoadElements__1807a9670 @ 0x1807a9670

/* WARNING: Possible PIC construction at 0x0001807a9743: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001807a978e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001807a97c1: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001807a9793) */
/* WARNING: Removing unreachable block (ram,0x0001807a97c6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong ArrowInputManipulator__LoadElements__1807a9670(longlong param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b4501 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.TextField>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'unity-label'");
    FUN_180315380(LIT_"'RightArrow'");
    FUN_180315380(LIT_"'L2Input'");
    FUN_180315380(LIT_"'LeftArrow'");
    cRam00000001834b4501 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x38) == 0) || (*(int *)(*(longlong *)(param_1 + 0x38) + 0x10) < 1))
  {
    uVar2 = func_0x0001814b50c0(param_1,0);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar3 = FUN_180b0e310(uVar2,LIT_"'L2Input'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.TextField>);
    uVar4 = param_1 + 0x50;
    *(ulonglong *)(param_1 + 0x50) = uVar3;
  }
  else {
    uVar2 = func_0x0001814b50c0(param_1,0);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar3 = FUN_180b0e310(uVar2,0,LIT_"'unity-label'",MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    uVar4 = param_1 + 0x40;
    *(ulonglong *)(param_1 + 0x40) = uVar3;
  }
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(uVar4 >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar4 = *puVar1;
      LOCK();
      uVar3 = *puVar1;
      bVar6 = uVar4 == uVar3;
      if (bVar6) {
        *puVar1 = uVar4 | 1L << (uVar5 & 0x3f);
        uVar3 = uVar4;
      }
      UNLOCK();
    } while (!bVar6);
  }
  return uVar3;
}

