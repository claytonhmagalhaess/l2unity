// SparkHtml__Desenha__180739b60 @ 0x180739b60

/* WARNING: Possible PIC construction at 0x000180739bca: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000180739bcf) */
/* WARNING: Removing unreachable block (ram,0x000180739bd8) */
/* WARNING: Removing unreachable block (ram,0x000180739c58) */
/* WARNING: Removing unreachable block (ram,0x000180739c33) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkHtml__Desenha__180739b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b4249 == '\0') {
    FUN_180315380(TI_SparkHtml.Bloco);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(LIT_"''");
    cRam00000001834b4249 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_SparkHtml);
  uVar4 = Gear__UpdateWeaponType__1803dadf0(lVar3,0);
  *(undefined8 *)(lVar3 + 0x10) = param_3;
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(lVar3 + 0x10U >> 0xc);
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

