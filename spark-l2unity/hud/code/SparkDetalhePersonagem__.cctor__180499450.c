// SparkDetalhePersonagem__.cctor__180499450 @ 0x180499450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkDetalhePersonagem___cctor__180499450(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (cRam00000001834b3281 == '\0') {
    FUN_180315380(TI_float__);
    FUN_180315380(TI_SparkDetalhePersonagem);
    cRam00000001834b3281 = '\x01';
  }
  lVar4 = func_0x000180314710(TI_float__,2);
  if (lVar4 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  if ((*(int *)(lVar4 + 0x18) != 0) &&
     (*(undefined4 *)(lVar4 + 0x20) = 0x3f000000, 1 < *(uint *)(lVar4 + 0x18))) {
    *(undefined4 *)(lVar4 + 0x24) = 0x3e4ccccd;
    *(longlong *)(*(longlong *)(TI_SparkDetalhePersonagem + 0xb8) + 8) = lVar4;
    uVar5 = TI_SparkDetalhePersonagem;
    if (_DAT_1834c7d58 != 0) {
      uVar6 = (uint)(*(longlong *)(TI_SparkDetalhePersonagem + 0xb8) + 8U >> 0xc);
      puVar1 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
      do {
        uVar2 = *puVar1;
        LOCK();
        uVar5 = *puVar1;
        bVar7 = uVar2 == uVar5;
        if (bVar7) {
          *puVar1 = uVar2 | 1L << (uVar6 & 0x3f);
          uVar5 = uVar2;
        }
        UNLOCK();
      } while (!bVar7);
    }
    return uVar5;
  }
  FUN_1803155c0();
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}

