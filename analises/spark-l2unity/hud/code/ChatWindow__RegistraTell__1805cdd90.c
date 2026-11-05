// ChatWindow__RegistraTell__1805cdd90 @ 0x1805cdd90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__RegistraTell__1805cdd90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  
  if (cRam00000001834b3ad5 == '\0') {
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Insert);
    FUN_180315380(MR_System.Collections.Generic.List<string>.RemoveAt);
    FUN_180315380(MR_System.Collections.Generic.List<string>.RemoveRange);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    cRam00000001834b3ad5 = '\x01';
  }
  lVar5 = 0;
  if (param_2 != 0) {
    lVar5 = func_0x00018170d270(param_2,0);
  }
  cVar3 = func_0x000181707e50(lVar5,0);
  if (cVar3 != '\0') {
    return;
  }
  if (lVar5 != 0) {
    iVar4 = func_0x0001817079f0(lVar5,0x20,0);
    if (-1 < iVar4) {
      return;
    }
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar4 = ChatWindow__IndiceTell__1805c7370(lVar5,0);
    if (-1 < iVar4) {
      if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar1 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
      if (lVar1 == 0) goto DAT_1805cdf5f;
      FUN_18164e790(lVar1,iVar4,MR_System.Collections.Generic.List<string>.RemoveAt);
    }
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660(TI_ChatWindow);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
    if (lVar1 != 0) {
      FUN_18164d990(lVar1,0,lVar5,MR_System.Collections.Generic.List<string>.Insert);
      lVar5 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
      if (lVar5 != 0) {
        if (0x14 < *(int *)(lVar5 + 0x18)) {
          if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar5 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
          if (lVar5 == 0) goto DAT_1805cdf5f;
          FUN_180bb1f20(*(undefined8 *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10),0x14,
                        *(int *)(lVar5 + 0x18) + -0x14,MR_System.Collections.Generic.List<string>.RemoveRange);
        }
        if (*(char *)(param_1 + 0x88) == '\0') {
          return;
        }
        ChatWindow__AtualizaTell__1805c5120(param_1,0);
        return;
      }
    }
  }
DAT_1805cdf5f:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

