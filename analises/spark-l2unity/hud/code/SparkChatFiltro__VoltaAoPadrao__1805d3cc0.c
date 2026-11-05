// SparkChatFiltro__VoltaAoPadrao__1805d3cc0 @ 0x1805d3cc0

void SparkChatFiltro__VoltaAoPadrao__1805d3cc0(void)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint auStackX_10 [6];
  
  if (cRam00000001834b3b37 == '\0') {
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(LIT_"'spark_chat_aba'");
    FUN_180315380(LIT_"'spark_chat_janela_sistema'");
    FUN_180315380(LIT_"'spark_chat_filtro_'");
    cRam00000001834b3b37 = '\x01';
  }
  auStackX_10[0] = 0;
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkChatFiltro__Carrega__1805d2bb0(0);
  uVar6 = 0;
  while( true ) {
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660(TI_SparkChatFiltro);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
    if (lVar1 == 0) goto code_r0x0001805d3f7a;
    if (*(int *)(lVar1 + 0x18) <= (int)uVar6) goto code_r0x0001805d3e40;
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660(TI_SparkChatFiltro);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
    uVar4 = SparkChatFiltro__Padrao__1805d3a50(uVar6,0);
    if (lVar1 == 0) goto code_r0x0001805d3f7a;
    if (*(uint *)(lVar1 + 0x18) <= uVar6) break;
    *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)uVar6 * 4) = uVar4;
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 8);
    if (lVar1 == 0) goto code_r0x0001805d3f7a;
    if (*(uint *)(lVar1 + 0x18) <= uVar6) break;
    uVar5 = System_String__Concat
                      (LIT_"'spark_chat_filtro_'",*(undefined8 *)(lVar1 + 0x20 + (longlong)(int)uVar6 * 8)
                       ,0);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
    if (lVar1 == 0) goto code_r0x0001805d3f7a;
    if (*(uint *)(lVar1 + 0x18) <= uVar6) break;
    SparkChatFiltro__Grava__1805d3060
              (uVar5,*(undefined4 *)(lVar1 + 0x20 + (longlong)(int)uVar6 * 4));
    uVar6 = uVar6 + 1;
  }
code_r0x0001805d3f80:
  FUN_1803155c0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_r0x0001805d3e40:
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660(TI_SparkChatFiltro);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x20);
  if (lVar1 == 0) {
code_r0x0001805d3f7a:
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(uint *)(lVar1 + 0x18) <= auStackX_10[0]) goto code_r0x0001805d3f80;
  lVar2 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x68);
  if (lVar2 == 0) goto code_r0x0001805d3f7a;
  if (*(uint *)(lVar2 + 0x18) <= auStackX_10[0]) goto code_r0x0001805d3f80;
  *(undefined4 *)(lVar2 + 0x20 + (longlong)(int)auStackX_10[0] * 4) =
       *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)auStackX_10[0] * 4);
  uVar5 = System_Int32__ToString(auStackX_10,0);
  uVar5 = System_String__Concat(LIT_"'spark_chat_aba'",uVar5,0);
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x68);
  if (lVar1 == 0) goto code_r0x0001805d3f7a;
  if (*(uint *)(lVar1 + 0x18) <= auStackX_10[0]) goto code_r0x0001805d3f80;
  SparkChatFiltro__Grava__1805d3060
            (uVar5,*(undefined4 *)(lVar1 + 0x20 + (longlong)(int)auStackX_10[0] * 4),0);
  auStackX_10[0] = auStackX_10[0] + 1;
  if (4 < (int)auStackX_10[0]) {
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660(TI_SparkChatFiltro);
    }
    *(undefined1 *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x70) = 1;
    SparkChatFiltro__Grava__1805d3060(LIT_"'spark_chat_janela_sistema'",1,0);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x50);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),0xffffffff,*(undefined8 *)(lVar1 + 0x28));
    }
    return;
  }
  goto code_r0x0001805d3e40;
}

