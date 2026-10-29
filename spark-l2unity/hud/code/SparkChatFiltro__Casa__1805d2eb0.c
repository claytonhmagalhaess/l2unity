// SparkChatFiltro__Casa__1805d2eb0 @ 0x1805d2eb0

ulonglong SparkChatFiltro__Casa__1805d2eb0(uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  if (cRam00000001834b3b32 == '\0') {
    FUN_180315380(TI_SparkChatFiltro);
    cRam00000001834b3b32 = '\x01';
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkChatFiltro__Carrega__1805d2bb0(0);
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x68);
  if (lVar1 != 0) {
    if (param_1 < *(uint *)(lVar1 + 0x18)) {
      return (ulonglong)*(uint *)(lVar1 + 0x20 + (longlong)(int)param_1 * 4);
    }
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}

