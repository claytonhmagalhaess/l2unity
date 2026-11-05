// L2SlotContainer__PadSlots__18078f8c0 @ 0x18078f8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong L2SlotContainer__PadSlots__18078f8c0(longlong param_1,int param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_1834b443a == '\0') {
    FUN_180315380(LIT_"'disabled'");
    DAT_1834b443a = '\x01';
  }
  iVar5 = 0;
  uVar3 = (longlong)param_2 / (longlong)*(int *)(param_1 + 0x44);
  if (param_2 % *(int *)(param_1 + 0x44) != 0) {
    uVar3 = (longlong)param_2 / (longlong)*(int *)(param_1 + 0x44);
    iVar5 = *(int *)(param_1 + 0x44) - param_2 % *(int *)(param_1 + 0x44);
  }
  uVar3 = uVar3 & 0xffffffff;
  iVar4 = 0;
  if (0 < iVar5) {
    do {
      lVar2 = L2SlotContainer__InstantiateSlot__18078f4b0
                        (param_1,*(undefined4 *)(param_1 + 0x4c),iVar4 + param_2,0);
      if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x40) == 0)) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      uVar3 = UnityEngine_UIElements_VisualElement__AddToClassList
                        (*(longlong *)(lVar2 + 0x40),LIT_"'disabled'",0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  return uVar3;
}

