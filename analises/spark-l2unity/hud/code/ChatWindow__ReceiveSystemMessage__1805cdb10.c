// ChatWindow__ReceiveSystemMessage__1805cdb10 @ 0x1805cdb10

void ChatWindow__ReceiveSystemMessage__1805cdb10(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3ac6 == '\0') {
    FUN_180315380(TI_SparkChatFiltro);
    cRam00000001834b3ac6 = '\x01';
  }
  if ((param_2 != (longlong *)0x0) && (*(char *)(param_1 + 0x118) != '\0')) {
    uVar4 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
    ChatWindow__Adiciona__1805c3e70(param_1,*(undefined8 *)(param_1 + 0x100),uVar4,0);
    if (param_2[3] == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(undefined4 *)(param_2[3] + 0x10);
    }
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3b38 == '\0') {
      FUN_180315380(MR_System.Collections.Generic.HashSet<int>.Contains);
      FUN_180315380(TI_SparkChatFiltro);
      cRam00000001834b3b38 = '\x01';
    }
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x28);
    if (lVar1 == 0) {
DAT_1805cdd86:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar3 = FUN_1814cf290(lVar1,uVar5,MR_System.Collections.Generic.HashSet<int>.Contains);
    if (cVar3 == '\0') {
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660(TI_SparkChatFiltro);
      }
      lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x38);
      if (lVar1 == 0) goto DAT_1805cdd86;
      cVar3 = FUN_1814cf290(lVar1,uVar5,MR_System.Collections.Generic.HashSet<int>.Contains);
      if (cVar3 == '\0') {
        if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
          func_0x000180315660(TI_SparkChatFiltro);
        }
        lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x40);
        if (lVar1 == 0) goto DAT_1805cdd86;
        cVar3 = FUN_1814cf290(lVar1,uVar5,MR_System.Collections.Generic.HashSet<int>.Contains);
        if (cVar3 == '\0') {
          if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
            func_0x000180315660(TI_SparkChatFiltro);
          }
          lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x30);
          if (lVar1 == 0) goto DAT_1805cdd86;
          cVar3 = FUN_1814cf290(lVar1,uVar5,MR_System.Collections.Generic.HashSet<int>.Contains);
          if (cVar3 == '\0') {
            if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
              func_0x000180315660(TI_SparkChatFiltro);
            }
            lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x48);
            if (lVar1 == 0) goto DAT_1805cdd86;
            cVar3 = FUN_1814cf290(lVar1,uVar5,MR_System.Collections.Generic.HashSet<int>.Contains);
            uVar6 = 0x10;
            if (cVar3 == '\0') {
              uVar6 = 0xc;
            }
          }
          else {
            uVar6 = 0xf;
          }
        }
        else {
          uVar6 = 0xe;
        }
      }
      else {
        uVar6 = 0xd;
      }
    }
    else {
      uVar6 = 0xb;
    }
    ChatWindow__Distribui__1805c6990(param_1,uVar4,uVar6,0,0);
  }
  return;
}

