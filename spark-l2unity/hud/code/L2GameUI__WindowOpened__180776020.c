// L2GameUI__WindowOpened__180776020 @ 0x180776020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong L2GameUI__WindowOpened__180776020(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 unaff_RDI;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  if (DAT_1834b43ef == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<L2PopupWindow>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<L2PopupWindow>.Remove);
    DAT_1834b43ef = '\x01';
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
LAB_1807760ed:
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return uVar8;
  }
  FUN_18164eb60(*(longlong *)(param_1 + 0x80),param_2,MR_System.Collections.Generic.List<L2PopupWindow>.Remove);
  lVar5 = MR_System.Collections.Generic.List<L2PopupWindow>.Add;
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 == 0) goto LAB_1807760ed;
  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
  lVar3 = *(longlong *)(lVar2 + 0x10);
  if (lVar3 == 0) goto LAB_1807760ed;
  uVar10 = *(uint *)(lVar2 + 0x18);
  if (uVar10 < *(uint *)(lVar3 + 0x18)) {
    uVar11 = uVar10 + 1;
    *(uint *)(lVar2 + 0x18) = uVar11;
    if (*(uint *)(lVar3 + 0x18) <= uVar10) {
      FUN_1803155c0();
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
    *(undefined8 *)(lVar3 + 0x20 + (longlong)(int)uVar10 * 8) = param_2;
    uVar8 = lVar3 + 0x20 + (longlong)(int)uVar10 * 8;
    goto SUB_180314690;
  }
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + 0xc0) + 0x70);
  lVar3 = *(longlong *)(lVar2 + 0x10);
  if (lVar3 == 0) goto LAB_181645bb8;
  uVar10 = *(uint *)(lVar2 + 0x18);
  uVar11 = uVar10 + 1;
  if (*(int *)(lVar3 + 0x18) < (int)uVar11) {
    if (*(longlong *)(lVar3 + 0x18) == 0) {
      uVar9 = 4;
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + 0xc0) + 0x78);
LAB_181645b5a:
      uVar7 = uVar9;
    }
    else {
      uVar9 = *(int *)(lVar3 + 0x18) * 2;
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + 0xc0) + 0x78);
      uVar7 = 0x7fefffff;
      if (uVar9 < 0x7ff00000) goto LAB_181645b5a;
    }
    if ((int)uVar11 <= (int)uVar7) {
      uVar11 = uVar7;
    }
    func_0x0001800350c0(lVar2,uVar11,
                        *(undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + 0xc0) + 0xf0),
                        uVar11,unaff_RDI);
  }
  lVar5 = *(longlong *)(lVar2 + 0x10);
  uVar11 = uVar10 + 1;
  *(uint *)(lVar2 + 0x18) = uVar11;
  if (lVar5 == 0) {
LAB_181645bb8:
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return uVar8;
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar10) {
    FUN_1803155c0();
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return uVar8;
  }
  *(undefined8 *)(lVar5 + 0x20 + (longlong)(int)uVar10 * 8) = param_2;
  uVar8 = lVar5 + (longlong)(int)uVar10 * 8 + 0x20;
SUB_180314690:
  uVar6 = (ulonglong)uVar11;
  if (_DAT_1834c7d58 != 0) {
    uVar10 = (uint)(uVar8 >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar8 = *puVar1;
      LOCK();
      uVar6 = *puVar1;
      bVar12 = uVar8 == uVar6;
      if (bVar12) {
        *puVar1 = uVar8 | 1L << (uVar10 & 0x3f);
        uVar6 = uVar8;
      }
      UNLOCK();
    } while (!bVar12);
  }
  return uVar6;
}

