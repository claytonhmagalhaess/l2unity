// ChatWindow__Distribui__1805c6990 @ 0x1805c6990

void ChatWindow__Distribui__1805c6990(longlong param_1,undefined8 param_2,int param_3,char param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (cRam00000001834b3ac4 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<string,int>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.RemoveRange);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.get_Count);
    FUN_180315380(TI_SparkChatFiltro);
    cRam00000001834b3ac4 = '\x01';
  }
  if (param_3 < 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0xd8);
  uStack_48 = 0;
  uStack_40 = 0;
  Animancer_ControllerState_ParameterID___ctor(&uStack_48,param_2,param_3,MR_System.Collections.Generic.KeyValuePair<string,int>..ctor);
  lVar5 = MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.Add;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (lVar3 != 0) {
      uVar7 = *(uint *)(lVar2 + 0x18);
      if (uVar7 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar7 + 1;
        if (*(uint *)(lVar3 + 0x18) <= uVar7) {
          FUN_1803155c0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar1 = (undefined4 *)(lVar3 + ((longlong)(int)uVar7 + 2) * 0x10);
        *puVar1 = (undefined4)uStack_48;
        puVar1[1] = uStack_48._4_4_;
        puVar1[2] = (undefined4)uStack_40;
        puVar1[3] = uStack_40._4_4_;
        func_0x000180314690(((longlong)(int)uVar7 + 2) * 0x10 + lVar3,0);
      }
      else {
        uStack_38 = (undefined4)uStack_48;
        uStack_34 = uStack_48._4_4_;
        uStack_30 = (undefined4)uStack_40;
        uStack_2c = uStack_40._4_4_;
        FUN_180ba8bc0(lVar2,&uStack_38,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      lVar2 = *(longlong *)(param_1 + 0xd8);
      if (lVar2 != 0) {
        if (600 < *(int *)(lVar2 + 0x18)) {
          FUN_180bb1f20(lVar2,0,*(int *)(lVar2 + 0x18) + -600,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.RemoveRange);
        }
        uVar8 = 0;
        while( true ) {
          if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (cRam00000001834b3b32 == '\0') {
            FUN_180315380(TI_SparkChatFiltro);
            cRam00000001834b3b32 = '\x01';
          }
          if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkChatFiltro__Carrega(0);
          lVar2 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x68);
          if (lVar2 == 0) break;
          uVar7 = (uint)uVar8;
          if (*(uint *)(lVar2 + 0x18) <= uVar7) {
code_r0x0001805c6bb2:
            FUN_1803155c0();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          cVar6 = SparkChatFiltro__Mostra__1805d3960
                            (*(undefined4 *)(lVar2 + 0x20 + uVar8 * 4),param_3,0);
          if ((cVar6 != '\0') || ((param_4 != '\0' && (uVar7 == *(uint *)(param_1 + 0x110))))) {
            lVar2 = *(longlong *)(param_1 + 200);
            if (lVar2 == 0) break;
            if (*(uint *)(lVar2 + 0x18) <= uVar7) goto code_r0x0001805c6bb2;
            ChatWindow__Adiciona__1805c3e70
                      (param_1,*(undefined8 *)(lVar2 + 0x20 + uVar8 * 8),param_2,0);
          }
          uVar8 = (ulonglong)(uVar7 + 1);
          if (4 < (int)(uVar7 + 1)) {
            return;
          }
        }
        FUN_1803155d0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

