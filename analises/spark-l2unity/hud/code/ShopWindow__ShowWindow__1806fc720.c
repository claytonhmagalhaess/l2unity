// ShopWindow__ShowWindow__1806fc720 @ 0x1806fc720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong ShopWindow__ShowWindow__1806fc720(undefined8 param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 unaff_RDI;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  if (cRam00000001834b40f9 == '\0') {
    FUN_180315380(LIT_"'window_open'");
    cRam00000001834b40f9 = '\x01';
  }
  L2PopupWindow__ShowWindow__180778380(param_1,0);
  if (cRam00000001834b30fc == '\0') {
    FUN_180315380(TI_InventoryWindow);
    cRam00000001834b30fc = '\x01';
  }
  plVar2 = (longlong *)**(longlong **)(TI_InventoryWindow + 0xb8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x1c8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x1d0));
  }
  if (DAT_1834b301f == '\0') {
    FUN_180315380(TI_AudioManager);
    DAT_1834b301f = '\x01';
  }
  if (**(longlong **)(TI_AudioManager + 0xb8) == 0) {
code_r0x0001806fc816:
    FUN_1803155d0();
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return uVar9;
  }
  AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_open'",0);
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  lVar3 = **(longlong **)(TI_L2GameUI + 0xb8);
  if (lVar3 == 0) goto code_r0x0001806fc816;
  if (DAT_1834b43ef == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<L2PopupWindow>.Add,param_1,0);
    FUN_180315380(MR_System.Collections.Generic.List<L2PopupWindow>.Remove);
    DAT_1834b43ef = '\x01';
  }
  if (*(longlong *)(lVar3 + 0x80) == 0) {
LAB_1807760ed:
    FUN_1803155d0();
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return uVar9;
  }
  FUN_18164eb60(*(longlong *)(lVar3 + 0x80),param_1,MR_System.Collections.Generic.List<L2PopupWindow>.Remove);
  lVar6 = MR_System.Collections.Generic.List<L2PopupWindow>.Add;
  lVar3 = *(longlong *)(lVar3 + 0x80);
  if (lVar3 == 0) goto LAB_1807760ed;
  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
  lVar4 = *(longlong *)(lVar3 + 0x10);
  if (lVar4 == 0) goto LAB_1807760ed;
  uVar11 = *(uint *)(lVar3 + 0x18);
  if (uVar11 < *(uint *)(lVar4 + 0x18)) {
    uVar12 = uVar11 + 1;
    *(uint *)(lVar3 + 0x18) = uVar12;
    if (*(uint *)(lVar4 + 0x18) <= uVar11) {
      FUN_1803155c0();
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return uVar9;
    }
    *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar11 * 8) = param_1;
    uVar9 = lVar4 + 0x20 + (longlong)(int)uVar11 * 8;
    goto SUB_180314690;
  }
  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xc0) + 0x70);
  lVar4 = *(longlong *)(lVar3 + 0x10);
  if (lVar4 == 0) goto LAB_181645bb8;
  uVar11 = *(uint *)(lVar3 + 0x18);
  uVar12 = uVar11 + 1;
  if (*(int *)(lVar4 + 0x18) < (int)uVar12) {
    if (*(longlong *)(lVar4 + 0x18) == 0) {
      uVar10 = 4;
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xc0) + 0x78);
LAB_181645b5a:
      uVar8 = uVar10;
    }
    else {
      uVar10 = *(int *)(lVar4 + 0x18) * 2;
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xc0) + 0x78);
      uVar8 = 0x7fefffff;
      if (uVar10 < 0x7ff00000) goto LAB_181645b5a;
    }
    if ((int)uVar12 <= (int)uVar8) {
      uVar12 = uVar8;
    }
    func_0x0001800350c0(lVar3,uVar12,
                        *(undefined8 *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xc0) + 0xf0),
                        uVar12,unaff_RDI);
  }
  lVar6 = *(longlong *)(lVar3 + 0x10);
  uVar12 = uVar11 + 1;
  *(uint *)(lVar3 + 0x18) = uVar12;
  if (lVar6 == 0) {
LAB_181645bb8:
    FUN_1803155d0();
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return uVar9;
  }
  if (*(uint *)(lVar6 + 0x18) <= uVar11) {
    FUN_1803155c0();
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return uVar9;
  }
  *(undefined8 *)(lVar6 + 0x20 + (longlong)(int)uVar11 * 8) = param_1;
  uVar9 = lVar6 + (longlong)(int)uVar11 * 8 + 0x20;
SUB_180314690:
  uVar7 = (ulonglong)uVar12;
  if (_DAT_1834c7d58 != 0) {
    uVar11 = (uint)(uVar9 >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar9 = *puVar1;
      LOCK();
      uVar7 = *puVar1;
      bVar13 = uVar9 == uVar7;
      if (bVar13) {
        *puVar1 = uVar9 | 1L << (uVar11 & 0x3f);
        uVar7 = uVar9;
      }
      UNLOCK();
    } while (!bVar13);
  }
  return uVar7;
}

