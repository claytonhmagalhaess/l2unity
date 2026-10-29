// UnionWindow__HideWindow__1806c6650 @ 0x1806c6650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong UnionWindow__HideWindow__1806c6650(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 unaff_RDI;
  undefined8 uVar6;
  undefined4 uVar7;
  
  L2PopupWindow__HideWindow__1807780b0(param_1,param_2,0);
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  lVar5 = **(longlong **)(TI_L2GameUI + 0xb8);
  if (lVar5 == 0) {
    return TI_L2GameUI;
  }
  if (cRam00000001834b43f0 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<L2PopupWindow>.Remove,param_1,0);
    cRam00000001834b43f0 = '\x01';
  }
  lVar5 = *(longlong *)(lVar5 + 0x80);
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(MR_System.Collections.Generic.List<L2PopupWindow>.Remove + 0x20) + 0xc0) + 0xd0) +
                 0x20) + 0xc0) + 0x150);
    uVar3 = FUN_180ab5570(*(undefined8 *)(lVar5 + 0x10),param_1,0,*(undefined4 *)(lVar5 + 0x18),
                          uVar6);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar3 < 0) {
      return 0;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar3) {
      System_ThrowHelper__ThrowArgumentOutOfRange_IndexException(0);
    }
    iVar4 = *(int *)(lVar5 + 0x18) + -1;
    *(int *)(lVar5 + 0x18) = iVar4;
    if ((int)uVar3 < iVar4) {
      System_Array__Copy(*(undefined8 *)(lVar5 + 0x10),uVar3 + 1,*(undefined8 *)(lVar5 + 0x10),uVar3
                         ,CONCAT44(uVar7,iVar4 - uVar3),0,unaff_RDI);
    }
    lVar1 = *(longlong *)(lVar5 + 0x10);
    if (lVar1 != 0) {
      uVar3 = *(uint *)(lVar5 + 0x18);
      if (uVar3 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x20 + (longlong)(int)uVar3 * 8) = 0;
        func_0x000180314690(lVar1 + (longlong)(int)uVar3 * 8 + 0x20,0);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        return 1;
      }
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      lVar5 = (*pcVar2)();
      return lVar5;
    }
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    lVar5 = (*pcVar2)();
    return lVar5;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar5 = (*pcVar2)();
  return lVar5;
}

