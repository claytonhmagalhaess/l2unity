// SparkChatFiltro__Carrega__1805d2bb0 @ 0x1805d2bb0

void SparkChatFiltro__Carrega__1805d2bb0(void)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint auStackX_10 [2];
  
  if (cRam00000001834b3b2f == '\0') {
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(LIT_"'spark_chat_aba'");
    FUN_180315380(LIT_"'spark_chat_janela_sistema'");
    FUN_180315380(LIT_"'spark_chat_filtro_'");
    cRam00000001834b3b2f = '\x01';
  }
  auStackX_10[0] = 0;
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x58) != '\0') {
    return;
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar8 = 0;
  *(undefined1 *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x58) = 1;
  while( true ) {
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660(TI_SparkChatFiltro);
    }
    lVar6 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
    if (lVar6 == 0) goto DAT_1805d2e9f;
    if (*(int *)(lVar6 + 0x18) <= (int)uVar8) goto code_r0x0001805d2d30;
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660(TI_SparkChatFiltro);
    }
    lVar6 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 8);
    if (lVar6 == 0) goto DAT_1805d2e9f;
    if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
    lVar7 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
    uVar5 = System_String__Concat
                      (LIT_"'spark_chat_filtro_'",*(undefined8 *)(lVar6 + 0x20 + (longlong)(int)uVar8 * 8)
                      );
    uVar3 = SparkChatFiltro__Padrao__1805d3a50(uVar8,0);
    uVar3 = SparkChatFiltro__Le(uVar5,uVar3);
    if (lVar7 == 0) goto DAT_1805d2e9f;
    if (*(uint *)(lVar7 + 0x18) <= uVar8) break;
    lVar6 = (longlong)(int)uVar8;
    uVar8 = uVar8 + 1;
    *(undefined4 *)(lVar7 + 0x20 + lVar6 * 4) = uVar3;
  }
code_r0x0001805d2ea5:
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_r0x0001805d2d30:
  uVar5 = System_Int32__ToString(auStackX_10,0);
  uVar5 = System_String__Concat(LIT_"'spark_chat_aba'",uVar5,0);
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar6 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x20);
  if (lVar6 == 0) {
DAT_1805d2e9f:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(uint *)(lVar6 + 0x18) <= auStackX_10[0]) goto code_r0x0001805d2ea5;
  iVar4 = SparkChatFiltro__Le(uVar5,*(undefined4 *)
                                     (lVar6 + 0x20 + (longlong)(int)auStackX_10[0] * 4));
  uVar8 = auStackX_10[0];
  lVar7 = (longlong)(int)auStackX_10[0];
  lVar6 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x68);
  if (iVar4 < 0) {
code_r0x0001805d2dec:
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660(TI_SparkChatFiltro);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x20);
    if (lVar1 == 0) goto DAT_1805d2e9f;
    if (*(uint *)(lVar1 + 0x18) <= auStackX_10[0]) goto code_r0x0001805d2ea5;
    iVar4 = *(int *)(lVar1 + 0x20 + (longlong)(int)auStackX_10[0] * 4);
  }
  else {
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660(TI_SparkChatFiltro);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 8);
    if (lVar1 == 0) goto DAT_1805d2e9f;
    if (*(int *)(lVar1 + 0x18) <= iVar4) goto code_r0x0001805d2dec;
  }
  if (lVar6 == 0) goto DAT_1805d2e9f;
  if (*(uint *)(lVar6 + 0x18) <= uVar8) goto code_r0x0001805d2ea5;
  *(int *)(lVar6 + 0x20 + lVar7 * 4) = iVar4;
  auStackX_10[0] = auStackX_10[0] + 1;
  if (4 < (int)auStackX_10[0]) {
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar4 = SparkChatFiltro__Le(LIT_"'spark_chat_janela_sistema'",1,0);
    *(bool *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x70) = iVar4 == 1;
    return;
  }
  goto code_r0x0001805d2d30;
}

