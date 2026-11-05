// SparkChatFiltro__CanalDoSistema__1805d29d0 @ 0x1805d29d0

undefined8 SparkChatFiltro__CanalDoSistema__1805d29d0(undefined4 param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b3b38 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>.Contains);
    FUN_180315380(TI_SparkChatFiltro);
    cRam00000001834b3b38 = '\x01';
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660(TI_SparkChatFiltro);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x28);
  if (lVar1 != 0) {
    cVar3 = FUN_1814cf290(lVar1,param_1,MR_System.Collections.Generic.HashSet<int>.Contains);
    if (cVar3 != '\0') {
      return 0xb;
    }
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660(TI_SparkChatFiltro);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x38);
    if (lVar1 != 0) {
      cVar3 = FUN_1814cf290(lVar1,param_1,MR_System.Collections.Generic.HashSet<int>.Contains);
      if (cVar3 != '\0') {
        return 0xd;
      }
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660(TI_SparkChatFiltro);
      }
      lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x40);
      if (lVar1 != 0) {
        cVar3 = FUN_1814cf290(lVar1,param_1,MR_System.Collections.Generic.HashSet<int>.Contains);
        if (cVar3 != '\0') {
          return 0xe;
        }
        if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
          func_0x000180315660(TI_SparkChatFiltro);
        }
        lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x30);
        if (lVar1 != 0) {
          cVar3 = FUN_1814cf290(lVar1,param_1,MR_System.Collections.Generic.HashSet<int>.Contains);
          if (cVar3 != '\0') {
            return 0xf;
          }
          if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
            func_0x000180315660(TI_SparkChatFiltro);
          }
          lVar1 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x48);
          if (lVar1 != 0) {
            cVar3 = FUN_1814cf290(lVar1,param_1,MR_System.Collections.Generic.HashSet<int>.Contains);
            uVar4 = 0x10;
            if (cVar3 == '\0') {
              uVar4 = 0xc;
            }
            return uVar4;
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}

