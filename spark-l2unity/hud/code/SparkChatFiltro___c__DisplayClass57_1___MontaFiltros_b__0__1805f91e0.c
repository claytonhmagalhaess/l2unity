// SparkChatFiltro___c__DisplayClass57_1___MontaFiltros_b__0__1805f91e0 @ 0x1805f91e0

ulonglong SparkChatFiltro___c__DisplayClass57_1___MontaFiltros_b__0__1805f91e0
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b3b3d == '\0') {
    FUN_180315380(TI_SparkChatFiltro);
    cRam00000001834b3b3d = '\x01';
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3b30 == '\0') {
    FUN_180315380(TI_SparkChatFiltro,iVar1,0,param_4,unaff_RDI);
    cRam00000001834b3b30 = '\x01';
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar5 = SparkChatFiltro__Carrega__1805d2bb0(0);
  if ((-1 < iVar1) && (-1 < (int)uVar2)) {
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar5 = *(ulonglong *)(TI_SparkChatFiltro + 0xb8);
    if (*(longlong *)(uVar5 + 0x60) != 0) {
      if (*(int *)(*(longlong *)(uVar5 + 0x60) + 0x18) <= (int)uVar2) goto code_r0x0001805d3a30;
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar3 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
      if (lVar3 != 0) {
        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
          return CONCAT71((int7)((ulonglong)*(longlong *)(TI_SparkChatFiltro + 0xb8) >> 8),
                          (*(uint *)(lVar3 + 0x20 + (longlong)(int)uVar2 * 4) &
                          1 << ((byte)iVar1 & 0x1f)) != 0);
        }
        FUN_1803155c0();
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return uVar5;
      }
    }
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return uVar5;
  }
code_r0x0001805d3a30:
  return uVar5 & 0xffffffffffffff00;
}

