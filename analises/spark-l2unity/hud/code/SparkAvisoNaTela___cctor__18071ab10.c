// SparkAvisoNaTela___cctor__18071ab10 @ 0x18071ab10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkAvisoNaTela___cctor__18071ab10(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b41d5 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>);
    FUN_180315380(TI_SparkAvisoNaTela);
    cRam00000001834b41d5 = '\x01';
  }
  uVar3 = func_0x000180315580(TI_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>);
  uVar4 = FUN_180bba2e0(uVar3,MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>..ctor);
  *(undefined8 *)(*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 8) = uVar3;
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 8U >> 0xc);
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

