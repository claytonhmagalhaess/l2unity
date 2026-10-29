// L2GameUI__WindowClosed__180775fc0 @ 0x180775fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 L2GameUI__WindowClosed__180775fc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 unaff_RDI;
  undefined4 uVar7;
  
  if (cRam00000001834b43f0 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<L2PopupWindow>.Remove);
    cRam00000001834b43f0 = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  uVar6 = *(undefined8 *)
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(MR_System.Collections.Generic.List<L2PopupWindow>.Remove + 0x20) + 0xc0) + 0xd0) +
               0x20) + 0xc0) + 0x150);
  uVar4 = FUN_180ab5570(*(undefined8 *)(lVar1 + 0x10),param_2,0,*(undefined4 *)(lVar1 + 0x18),uVar6)
  ;
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar4 < 0) {
    return 0;
  }
  if (*(uint *)(lVar1 + 0x18) <= uVar4) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException(0);
  }
  iVar5 = *(int *)(lVar1 + 0x18) + -1;
  *(int *)(lVar1 + 0x18) = iVar5;
  if ((int)uVar4 < iVar5) {
    System_Array__Copy(*(undefined8 *)(lVar1 + 0x10),uVar4 + 1,*(undefined8 *)(lVar1 + 0x10),uVar4,
                       CONCAT44(uVar7,iVar5 - uVar4),0,unaff_RDI);
  }
  lVar2 = *(longlong *)(lVar1 + 0x10);
  if (lVar2 != 0) {
    uVar4 = *(uint *)(lVar1 + 0x18);
    if (uVar4 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x20 + (longlong)(int)uVar4 * 8) = 0;
      func_0x000180314690(lVar2 + (longlong)(int)uVar4 * 8 + 0x20,0);
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      return 1;
    }
    FUN_1803155c0();
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return uVar6;
}

