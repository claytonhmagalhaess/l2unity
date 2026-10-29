// LoginClient__OnConnectionFailed__1805298b0 @ 0x1805298b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginClient__OnConnectionFailed__1805298b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (cRam00000001834b3795 == '\0') {
    FUN_180315380(LIT_"'Could not connect to the login server. Please try again ...");
    cRam00000001834b3795 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  uVar3 = LIT_"'Could not connect to the login server. Please try again ...";
  if (cRam00000001834b3793 == '\0') {
    FUN_180315380(TI_System.Action,LIT_"'Could not connect to the login server. Please try again ...",0);
    FUN_180315380(TI_DefaultClient);
    FUN_180315380(MD_LoginClient.__c._AvisaQueda_b__38_0);
    FUN_180315380(TI_LoginClient.<>c);
    cRam00000001834b3793 = '\x01';
  }
  if ((*(char *)(param_1 + 0x98) == '\0') && (*(char *)(param_1 + 0x99) == '\0')) {
    if (*(int *)(TI_DefaultClient + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b35eb == '\0') {
      FUN_180315380(TI_DefaultClient);
      cRam00000001834b35eb = '\x01';
    }
    if (*(int *)(TI_DefaultClient + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(char *)(*(longlong *)(TI_DefaultClient + 0xb8) + 0x10) == '\0') {
      *(undefined1 *)(param_1 + 0x99) = 1;
      if (DAT_1834b30fd == '\0') {
        FUN_180315380(TI_L2ConfirmWindow);
        DAT_1834b30fd = '\x01';
      }
      lVar1 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
      if (lVar1 != 0) {
        if (*(int *)(TI_LoginClient.<>c + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar4 = *(longlong *)(*(longlong *)(TI_LoginClient.<>c + 0xb8) + 8);
        if (lVar4 == 0) {
          if (*(int *)(TI_LoginClient.<>c + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar2 = **(undefined8 **)(TI_LoginClient.<>c + 0xb8);
          lVar4 = func_0x000180315580(TI_System.Action);
          FUN_1816a9c60(lVar4,uVar2,MD_LoginClient.__c._AvisaQueda_b__38_0,0);
          *(longlong *)(*(longlong *)(TI_LoginClient.<>c + 0xb8) + 8) = lVar4;
          func_0x000180314690(*(longlong *)(TI_LoginClient.<>c + 0xb8) + 8,lVar4);
        }
        L2ConfirmWindow__ShowWindow__180770df0(lVar1,uVar3,lVar4,0,0);
      }
    }
  }
  return;
}

