// SparkChatFiltro__AlgumaCategoriaDeSistema__1805d27f0 @ 0x1805d27f0

longlong SparkChatFiltro__AlgumaCategoriaDeSistema__1805d27f0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  uint7 uVar6;
  longlong lVar5;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if (cRam00000001834b3b36 == '\0') {
    FUN_180315380(TI_SparkChatFiltro);
    cRam00000001834b3b36 = '\x01';
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkChatFiltro__Carrega__1805d2bb0(0);
  uVar9 = 0;
  uVar7 = 0xb;
  lVar5 = TI_SparkChatFiltro;
  while( true ) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      func_0x000180315660();
      lVar5 = TI_SparkChatFiltro;
    }
    if (**(longlong **)(lVar5 + 0xb8) == 0) goto code_r0x0001805d28f6;
    if (*(int *)(**(longlong **)(lVar5 + 0xb8) + 0x18) <= (int)uVar7) break;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      func_0x000180315660();
      lVar5 = TI_SparkChatFiltro;
    }
    uVar9 = uVar9 | 1 << (uVar7 & 0x1f);
    uVar7 = uVar7 + 1;
  }
  uVar8 = 0;
  while( true ) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      func_0x000180315660();
      lVar5 = TI_SparkChatFiltro;
    }
    lVar1 = *(longlong *)(lVar5 + 0xb8);
    lVar2 = *(longlong *)(lVar1 + 0x68);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= (uint)uVar8) {
code_r0x0001805d28fc:
      FUN_1803155c0();
      pcVar4 = (code *)swi(3);
      lVar5 = (*pcVar4)();
      return lVar5;
    }
    lVar3 = *(longlong *)(lVar1 + 0x60);
    if (lVar3 == 0) break;
    uVar7 = *(uint *)(lVar2 + 0x20 + uVar8 * 4);
    if (*(uint *)(lVar3 + 0x18) <= uVar7) goto code_r0x0001805d28fc;
    uVar6 = (uint7)((ulonglong)lVar1 >> 8);
    if ((*(uint *)(lVar3 + 0x20 + (longlong)(int)uVar7 * 4) & uVar9) != 0) {
      return CONCAT71(uVar6,1);
    }
    uVar7 = (uint)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    if (4 < (int)uVar7) {
      return (ulonglong)uVar6 << 8;
    }
  }
code_r0x0001805d28f6:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  lVar5 = (*pcVar4)();
  return lVar5;
}

