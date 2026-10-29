// L2_login_GameCrypt__Encrypt__1807aecd0 @ 0x1807aecd0

void L2_login_GameCrypt__Encrypt__1807aecd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  if (param_2 != 0) {
    bVar5 = 0;
    for (uVar3 = 0; (int)uVar3 < *(int *)(param_2 + 0x18); uVar3 = uVar3 + 1) {
      if (*(uint *)(param_2 + 0x18) <= uVar3) goto DAT_1807aee17;
      lVar1 = *(longlong *)(param_1 + 0x18);
      if (lVar1 == 0) goto code_r0x0001807aee1d;
      if (*(uint *)(lVar1 + 0x18) <= (uVar3 & 0xf)) goto DAT_1807aee17;
      bVar5 = bVar5 ^ *(byte *)((longlong)(int)uVar3 + 0x20 + param_2) ^
                      *(byte *)((ulonglong)(uVar3 & 0xf) + 0x20 + lVar1);
      *(byte *)((longlong)(int)uVar3 + 0x20 + param_2) = bVar5;
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if ((*(uint *)(lVar1 + 0x18) < 9) || (*(uint *)(lVar1 + 0x18) < 10)) {
DAT_1807aee17:
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x18) < 0xb) goto DAT_1807aee17;
        if (lVar1 != 0) {
          if (*(uint *)(lVar1 + 0x18) < 0xc) goto DAT_1807aee17;
          if (lVar1 != 0) {
            iVar4 = *(int *)(lVar1 + 0x28) + *(int *)(param_2 + 0x18);
            *(char *)(lVar1 + 0x28) = (char)iVar4;
            lVar1 = *(longlong *)(param_1 + 0x18);
            if (lVar1 != 0) {
              if (9 < *(uint *)(lVar1 + 0x18)) {
                *(char *)(lVar1 + 0x29) = (char)((uint)iVar4 >> 8);
                lVar1 = *(longlong *)(param_1 + 0x18);
                if (lVar1 == 0) goto code_r0x0001807aee1d;
                if (10 < *(uint *)(lVar1 + 0x18)) {
                  *(char *)(lVar1 + 0x2a) = (char)((uint)iVar4 >> 0x10);
                  lVar1 = *(longlong *)(param_1 + 0x18);
                  if (lVar1 == 0) goto code_r0x0001807aee1d;
                  if (0xb < *(uint *)(lVar1 + 0x18)) {
                    *(char *)(lVar1 + 0x2b) = (char)((uint)iVar4 >> 0x18);
                    return;
                  }
                }
              }
              goto DAT_1807aee17;
            }
          }
        }
      }
    }
  }
code_r0x0001807aee1d:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

