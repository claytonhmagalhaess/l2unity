// L2_login_GameCrypt__Decrypt__1807aeb70 @ 0x1807aeb70

void L2_login_GameCrypt__Decrypt__1807aeb70(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    return;
  }
  if (param_2 != 0) {
    bVar6 = 0;
    for (uVar4 = 0; (int)uVar4 < *(int *)(param_2 + 0x18); uVar4 = uVar4 + 1) {
      if (*(uint *)(param_2 + 0x18) <= uVar4) goto code_r0x0001807aecbf;
      lVar2 = *(longlong *)(param_1 + 0x10);
      if (lVar2 == 0) goto DAT_1807aecb9;
      if (*(uint *)(lVar2 + 0x18) <= (uVar4 & 0xf)) goto code_r0x0001807aecbf;
      bVar1 = *(byte *)((longlong)(int)uVar4 + 0x20 + param_2);
      *(byte *)((longlong)(int)uVar4 + 0x20 + param_2) =
           bVar1 ^ *(byte *)((ulonglong)(uVar4 & 0xf) + 0x20 + lVar2) ^ bVar6;
      bVar6 = bVar1;
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0x18) < 9) || (*(uint *)(lVar2 + 0x18) < 10)) {
code_r0x0001807aecbf:
        FUN_1803155c0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) < 0xb) goto code_r0x0001807aecbf;
        if (lVar2 != 0) {
          if (*(uint *)(lVar2 + 0x18) < 0xc) goto code_r0x0001807aecbf;
          if (lVar2 != 0) {
            iVar5 = *(int *)(lVar2 + 0x28) + *(int *)(param_2 + 0x18);
            *(char *)(lVar2 + 0x28) = (char)iVar5;
            lVar2 = *(longlong *)(param_1 + 0x10);
            if (lVar2 != 0) {
              if (9 < *(uint *)(lVar2 + 0x18)) {
                *(char *)(lVar2 + 0x29) = (char)((uint)iVar5 >> 8);
                lVar2 = *(longlong *)(param_1 + 0x10);
                if (lVar2 == 0) goto DAT_1807aecb9;
                if (10 < *(uint *)(lVar2 + 0x18)) {
                  *(char *)(lVar2 + 0x2a) = (char)((uint)iVar5 >> 0x10);
                  lVar2 = *(longlong *)(param_1 + 0x10);
                  if (lVar2 == 0) goto DAT_1807aecb9;
                  if (0xb < *(uint *)(lVar2 + 0x18)) {
                    *(char *)(lVar2 + 0x2b) = (char)((uint)iVar5 >> 0x18);
                    return;
                  }
                }
              }
              goto code_r0x0001807aecbf;
            }
          }
        }
      }
    }
  }
DAT_1807aecb9:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

