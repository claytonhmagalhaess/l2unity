// SparkChatFiltro__set_JanelaDeSistema__1805d50b0 @ 0x1805d50b0

void SparkChatFiltro__set_JanelaDeSistema__1805d50b0(char param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if (cRam00000001834b3b35 == '\0') {
    FUN_180315380(TI_SparkAvisoNaTela);
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(LIT_"'spark_chat_janela_sistema'");
    FUN_180315380(LIT_"'System messages are hidden now. To see them in the chat,...");
    cRam00000001834b3b35 = '\x01';
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkChatFiltro__Carrega__1805d2bb0(0);
  if (*(char *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x70) != param_1) {
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660();
    }
    *(char *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x70) = param_1;
    uVar4 = LIT_"'spark_chat_janela_sistema'";
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkChatFiltro__Grava__1805d3060(uVar4,param_1,0);
    lVar5 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x50);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),0xfffffffe,*(undefined8 *)(lVar5 + 0x28));
    }
    if (param_1 == '\0') {
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b3b36 == '\0') {
        FUN_180315380(TI_SparkChatFiltro);
        cRam00000001834b3b36 = '\x01';
      }
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkChatFiltro__Carrega__1805d2bb0(0);
      uVar8 = 0;
      uVar6 = 0xb;
      lVar5 = TI_SparkChatFiltro;
      while( true ) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          func_0x000180315660();
          lVar5 = TI_SparkChatFiltro;
        }
        if (**(longlong **)(lVar5 + 0xb8) == 0) goto DAT_1805d5314;
        if (*(int *)(**(longlong **)(lVar5 + 0xb8) + 0x18) <= (int)uVar6) break;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          func_0x000180315660();
          lVar5 = TI_SparkChatFiltro;
        }
        uVar8 = uVar8 | 1 << (uVar6 & 0x1f);
        uVar6 = uVar6 + 1;
      }
      uVar7 = 0;
      do {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          func_0x000180315660();
          lVar5 = TI_SparkChatFiltro;
        }
        lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 0x68);
        if (lVar1 == 0) {
DAT_1805d5314:
          FUN_1803155d0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(uint *)(lVar1 + 0x18) <= (uint)uVar7) {
code_r0x0001805d531a:
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 0x60);
        if (lVar2 == 0) goto DAT_1805d5314;
        uVar6 = *(uint *)(lVar1 + 0x20 + uVar7 * 4);
        if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_r0x0001805d531a;
        if ((*(uint *)(lVar2 + 0x20 + (longlong)(int)uVar6 * 4) & uVar8) != 0) {
          return;
        }
        uVar6 = (uint)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < 5);
      if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      SparkAvisoNaTela__Mostra(LIT_"'System messages are hidden now. To see them in the chat,...",7000,2,0,&uStack_38,0);
    }
  }
  return;
}

