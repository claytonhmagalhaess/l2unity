// ChatWindow__TextoDigitado__1805cf0e0 @ 0x1805cf0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__TextoDigitado__1805cf0e0(longlong param_1,undefined2 param_2)

{
  code *pcVar1;
  char cVar2;
  
  if (cRam00000001834b3acf == '\0') {
    FUN_180315380(TI_SparkObservador);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3acf = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  if (((*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xde) == '\0') &&
      (*(char *)(param_1 + 0x118) != '\0')) && (*(char *)(param_1 + 0x128) == '\0')) {
    if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = System_Char__IsControl(param_2,0);
    if (cVar2 == '\0') {
      cVar2 = ChatWindow__CampoDoChatComFoco__1805c6190(param_1,0);
      if (cVar2 == '\0') {
        if (*(int *)(TI_SparkObservador + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = FUN_1804f0780(0);
        if (cVar2 == '\0') {
          if (*(longlong *)(param_1 + 0x130) == 0) {
            FUN_1803155d0();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          System_Text_StringBuilder__Append(*(longlong *)(param_1 + 0x130),param_2,0);
        }
      }
    }
  }
  return;
}

