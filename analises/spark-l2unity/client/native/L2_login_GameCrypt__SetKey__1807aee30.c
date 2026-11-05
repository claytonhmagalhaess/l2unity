// L2_login_GameCrypt__SetKey__1807aee30 @ 0x1807aee30

void L2_login_GameCrypt__SetKey__1807aee30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (param_2 != 0) {
    FUN_1818b0d90(param_2,*(undefined8 *)(param_1 + 0x10),0,0);
    FUN_1818b0d90(param_2,*(undefined8 *)(param_1 + 0x18),0,0);
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != 0) {
      if (8 < *(uint *)(lVar1 + 0x18)) {
        *(undefined1 *)(lVar1 + 0x28) = 200;
        lVar1 = *(longlong *)(param_1 + 0x10);
        if (lVar1 == 0) goto code_r0x0001807aeffc;
        if (9 < *(uint *)(lVar1 + 0x18)) {
          *(undefined1 *)(lVar1 + 0x29) = 0x27;
          lVar1 = *(longlong *)(param_1 + 0x10);
          if (lVar1 == 0) goto code_r0x0001807aeffc;
          if (10 < *(uint *)(lVar1 + 0x18)) {
            *(undefined1 *)(lVar1 + 0x2a) = 0x93;
            lVar1 = *(longlong *)(param_1 + 0x10);
            if (lVar1 == 0) goto code_r0x0001807aeffc;
            if (0xb < *(uint *)(lVar1 + 0x18)) {
              *(undefined1 *)(lVar1 + 0x2b) = 1;
              lVar1 = *(longlong *)(param_1 + 0x10);
              if (lVar1 == 0) goto code_r0x0001807aeffc;
              if (0xc < *(uint *)(lVar1 + 0x18)) {
                *(undefined1 *)(lVar1 + 0x2c) = 0xa1;
                lVar1 = *(longlong *)(param_1 + 0x10);
                if (lVar1 == 0) goto code_r0x0001807aeffc;
                if (0xd < *(uint *)(lVar1 + 0x18)) {
                  *(undefined1 *)(lVar1 + 0x2d) = 0x6c;
                  lVar1 = *(longlong *)(param_1 + 0x10);
                  if (lVar1 == 0) goto code_r0x0001807aeffc;
                  if (0xe < *(uint *)(lVar1 + 0x18)) {
                    *(undefined1 *)(lVar1 + 0x2e) = 0x31;
                    lVar1 = *(longlong *)(param_1 + 0x10);
                    if (lVar1 == 0) goto code_r0x0001807aeffc;
                    if (0xf < *(uint *)(lVar1 + 0x18)) {
                      *(undefined1 *)(lVar1 + 0x2f) = 0x97;
                      lVar1 = *(longlong *)(param_1 + 0x18);
                      if (lVar1 == 0) goto code_r0x0001807aeffc;
                      if (8 < *(uint *)(lVar1 + 0x18)) {
                        *(undefined1 *)(lVar1 + 0x28) = 200;
                        lVar1 = *(longlong *)(param_1 + 0x18);
                        if (lVar1 == 0) goto code_r0x0001807aeffc;
                        if (9 < *(uint *)(lVar1 + 0x18)) {
                          *(undefined1 *)(lVar1 + 0x29) = 0x27;
                          lVar1 = *(longlong *)(param_1 + 0x18);
                          if (lVar1 == 0) goto code_r0x0001807aeffc;
                          if (10 < *(uint *)(lVar1 + 0x18)) {
                            *(undefined1 *)(lVar1 + 0x2a) = 0x93;
                            lVar1 = *(longlong *)(param_1 + 0x18);
                            if (lVar1 == 0) goto code_r0x0001807aeffc;
                            if (0xb < *(uint *)(lVar1 + 0x18)) {
                              *(undefined1 *)(lVar1 + 0x2b) = 1;
                              lVar1 = *(longlong *)(param_1 + 0x18);
                              if (lVar1 == 0) goto code_r0x0001807aeffc;
                              if (0xc < *(uint *)(lVar1 + 0x18)) {
                                *(undefined1 *)(lVar1 + 0x2c) = 0xa1;
                                lVar1 = *(longlong *)(param_1 + 0x18);
                                if (lVar1 == 0) goto code_r0x0001807aeffc;
                                if (0xd < *(uint *)(lVar1 + 0x18)) {
                                  *(undefined1 *)(lVar1 + 0x2d) = 0x6c;
                                  lVar1 = *(longlong *)(param_1 + 0x18);
                                  if (lVar1 == 0) goto code_r0x0001807aeffc;
                                  if (0xe < *(uint *)(lVar1 + 0x18)) {
                                    *(undefined1 *)(lVar1 + 0x2e) = 0x31;
                                    lVar1 = *(longlong *)(param_1 + 0x18);
                                    if (lVar1 == 0) goto code_r0x0001807aeffc;
                                    if (0xf < *(uint *)(lVar1 + 0x18)) {
                                      *(undefined1 *)(lVar1 + 0x2f) = 0x97;
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
code_r0x0001807aeffc:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

