// SparkChatFiltro__TrocaCasa__1805d3ba0 @ 0x1805d3ba0

void SparkChatFiltro__TrocaCasa__1805d3ba0(uint param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint auStackX_8 [8];
  
  auStackX_8[0] = param_1;
  if (cRam00000001834b3b33 == '\0') {
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(LIT_"'spark_chat_aba'");
    cRam00000001834b3b33 = '\x01';
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkChatFiltro__Carrega__1805d2bb0(0);
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x68);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= auStackX_8[0]) {
code_r0x0001805d3cb8:
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)(lVar1 + 0x20 + (longlong)(int)auStackX_8[0] * 4) != param_2) {
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x68);
      if (lVar1 == 0) goto code_r0x0001805d3cb2;
      if (*(uint *)(lVar1 + 0x18) <= auStackX_8[0]) goto code_r0x0001805d3cb8;
      *(int *)(lVar1 + 0x20 + (longlong)(int)auStackX_8[0] * 4) = param_2;
      uVar3 = System_Int32__ToString(auStackX_8,0);
      uVar3 = System_String__Concat(LIT_"'spark_chat_aba'",uVar3,0);
      SparkChatFiltro__Grava__1805d3060(uVar3,param_2,0);
      lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x50);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x18))
                  (*(undefined8 *)(lVar1 + 0x40),0xffffffff,*(undefined8 *)(lVar1 + 0x28));
      }
    }
    return;
  }
code_r0x0001805d3cb2:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

