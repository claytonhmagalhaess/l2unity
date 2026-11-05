// SparkChatFiltro___c__DisplayClass57_1___MontaFiltros_b__1__1805f9250 @ 0x1805f9250

void SparkChatFiltro___c__DisplayClass57_1___MontaFiltros_b__1__1805f9250
               (longlong param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  if (cRam00000001834b3b3e == '\0') {
    FUN_180315380(TI_SparkChatFiltro);
    cRam00000001834b3b3e = '\x01';
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar7 = (longlong)(int)uVar2;
  if (cRam00000001834b3b31 == '\0') {
    FUN_180315380(TI_SparkChatFiltro,uVar6,param_2,0);
    FUN_180315380(LIT_"'spark_chat_filtro_'");
    cRam00000001834b3b31 = '\x01';
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkChatFiltro__Carrega__1805d2bb0(0);
  lVar3 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
  if (lVar3 == 0) goto code_r0x0001805d3246;
  if (uVar2 < *(uint *)(lVar3 + 0x18)) {
    uVar1 = *(uint *)(lVar3 + 0x20 + lVar7 * 4);
    lVar3 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
    if (param_2 == '\0') {
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar6 = uVar1 & ~(1 << (uVar6 & 0x1f));
    }
    else {
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar6 = uVar1 | 1 << (uVar6 & 0x1f);
    }
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(lVar3 + 0x20 + lVar7 * 4) = uVar6;
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar3 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
      if (lVar3 == 0) {
code_r0x0001805d3246:
        FUN_1803155d0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar2 < *(uint *)(lVar3 + 0x18)) {
        if (*(uint *)(lVar3 + 0x20 + lVar7 * 4) == uVar1) {
          return;
        }
        if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar3 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 8);
        if (lVar3 == 0) goto code_r0x0001805d3246;
        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
          uVar5 = System_String__Concat
                            (LIT_"'spark_chat_filtro_'",*(undefined8 *)(lVar3 + 0x20 + lVar7 * 8),0);
          lVar3 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x60);
          if (lVar3 == 0) goto code_r0x0001805d3246;
          if (uVar2 < *(uint *)(lVar3 + 0x18)) {
            SparkChatFiltro__Grava__1805d3060(uVar5,*(undefined4 *)(lVar3 + 0x20 + lVar7 * 4),0);
            lVar7 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x50);
            if (lVar7 == 0) {
              return;
            }
            (**(code **)(lVar7 + 0x18))
                      (*(undefined8 *)(lVar7 + 0x40),uVar2,*(undefined8 *)(lVar7 + 0x28));
            return;
          }
        }
      }
    }
  }
  FUN_1803155c0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

