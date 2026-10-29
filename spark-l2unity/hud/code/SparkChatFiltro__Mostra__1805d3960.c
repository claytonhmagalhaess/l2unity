// SparkChatFiltro__Mostra__1805d3960 @ 0x1805d3960

ulonglong SparkChatFiltro__Mostra__1805d3960(uint param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  if (cRam00000001834b3b30 == '\0') {
    FUN_180315380(TI_SparkChatFiltro);
    cRam00000001834b3b30 = '\x01';
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = SparkChatFiltro__Carrega(0);
  if ((-1 < param_2) && (-1 < (int)param_1)) {
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar3 = *(ulonglong *)(TI_SparkChatFiltro + 0xb8);
    if (*(longlong *)(uVar3 + 0x60) != 0) {
      if (*(int *)(*(longlong *)(uVar3 + 0x60) + 0x18) <= (int)param_1) goto code_r0x0001805d3a30;
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
      if (lVar1 != 0) {
        if (param_1 < *(uint *)(lVar1 + 0x18)) {
          return CONCAT71((int7)((ulonglong)*(longlong *)(TI_SparkChatFiltro + 0xb8) >> 8),
                          (*(uint *)(lVar1 + 0x20 + (longlong)(int)param_1 * 4) &
                          1 << ((byte)param_2 & 0x1f)) != 0);
        }
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return uVar3;
      }
    }
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
code_r0x0001805d3a30:
  return uVar3 & 0xffffffffffffff00;
}

