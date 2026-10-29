// SparkChatFiltro__Liga__1805d3080 @ 0x1805d3080

void SparkChatFiltro__Liga__1805d3080(uint param_1,uint param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_1;
  if (cRam00000001834b3b31 == '\0') {
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(LIT_"'spark_chat_filtro_'");
    cRam00000001834b3b31 = '\x01';
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkChatFiltro__Carrega__1805d2bb0(0);
  lVar2 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
  if (lVar2 == 0) goto code_r0x0001805d3246;
  if (param_1 < *(uint *)(lVar2 + 0x18)) {
    uVar1 = *(uint *)(lVar2 + 0x20 + lVar6 * 4);
    lVar2 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
    if (param_3 == '\0') {
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = uVar1 & ~(1 << (param_2 & 0x1f));
    }
    else {
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = uVar1 | 1 << (param_2 & 0x1f);
    }
    if (param_1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(lVar2 + 0x20 + lVar6 * 4) = uVar5;
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar2 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
      if (lVar2 == 0) {
code_r0x0001805d3246:
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (param_1 < *(uint *)(lVar2 + 0x18)) {
        if (*(uint *)(lVar2 + 0x20 + lVar6 * 4) == uVar1) {
          return;
        }
        if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar2 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 8);
        if (lVar2 == 0) goto code_r0x0001805d3246;
        if (param_1 < *(uint *)(lVar2 + 0x18)) {
          uVar4 = System_String__Concat
                            (LIT_"'spark_chat_filtro_'",*(undefined8 *)(lVar2 + 0x20 + lVar6 * 8),0);
          lVar2 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
          if (lVar2 == 0) goto code_r0x0001805d3246;
          if (param_1 < *(uint *)(lVar2 + 0x18)) {
            SparkChatFiltro__Grava__1805d3060(uVar4,*(undefined4 *)(lVar2 + 0x20 + lVar6 * 4),0);
            lVar6 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x50);
            if (lVar6 == 0) {
              return;
            }
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),param_1,*(undefined8 *)(lVar6 + 0x28));
            return;
          }
        }
      }
    }
  }
  FUN_1803155c0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

