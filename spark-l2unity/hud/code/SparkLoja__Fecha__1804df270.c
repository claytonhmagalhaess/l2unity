// SparkLoja__Fecha__1804df270 @ 0x1804df270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLoja__Fecha__1804df270(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (cRam00000001834b34c6 == '\0') {
    FUN_180315380(TI_SparkLoja);
    FUN_180315380(TI_SparkPacoteLivre);
    cRam00000001834b34c6 = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3553 == '\0') {
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b3553 = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x50) == '\0') {
    return;
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b354b == '\0') {
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b354b = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(int *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x38) == 2) {
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if (**(longlong **)(TI_GameClient + 0xb8) == 0) goto DAT_1804df4d0;
    plVar4 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8);
    lVar2 = func_0x000180315580(TI_SparkPacoteLivre);
    uVar3 = 0x76;
  }
  else {
    if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b354b == '\0') {
      FUN_180315380(TI_SparkLoja);
      cRam00000001834b354b = '\x01';
    }
    if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(int *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x38) != 3) goto code_r0x0001804df483;
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if (**(longlong **)(TI_GameClient + 0xb8) == 0) goto DAT_1804df4d0;
    plVar4 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8);
    lVar2 = func_0x000180315580(TI_SparkPacoteLivre);
    uVar3 = 0x93;
  }
  func_0x000180503ed0(lVar2,uVar3,0);
  if ((lVar2 == 0) || (uVar3 = SparkPacoteLivre__Fim(lVar2,0), plVar4 == (longlong *)0x0)) {
DAT_1804df4d0:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(*plVar4 + 0x178))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x180));
code_r0x0001804df483:
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkLoja__Limpa(0);
  lVar2 = *(longlong *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x60);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  }
  return;
}

