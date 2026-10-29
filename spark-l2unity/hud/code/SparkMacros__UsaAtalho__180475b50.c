// SparkMacros__UsaAtalho__180475b50 @ 0x180475b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool SparkMacros__UsaAtalho__180475b50(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  int aiStackX_8 [4];
  int aiStackX_18 [4];
  
  if (cRam00000001834b3083 == '\0') {
    FUN_180315380(TI_char__);
    cRam00000001834b3083 = '\x01';
  }
  aiStackX_8[0] = 0;
  aiStackX_18[0] = 0;
  lVar4 = func_0x000180314710(TI_char__,1);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) goto code_r0x000180475cb1;
    *(undefined2 *)(lVar4 + 0x20) = 0x20;
    if (param_1 != 0) {
      lVar4 = System_String__Split(param_1,lVar4,1,0);
      if (lVar4 != 0) {
        if (2 < *(int *)(lVar4 + 0x18)) {
          if (*(uint *)(lVar4 + 0x18) < 2) {
code_r0x000180475cb1:
            FUN_1803155c0();
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          cVar2 = System_Int32__TryParse(*(undefined8 *)(lVar4 + 0x28),aiStackX_8,0);
          if (cVar2 != '\0') {
            if (*(uint *)(lVar4 + 0x18) < 3) goto code_r0x000180475cb1;
            cVar2 = System_Int32__TryParse(*(undefined8 *)(lVar4 + 0x30),aiStackX_18,0);
            if (cVar2 != '\0') {
              if (cRam00000001834b3101 == '\0') {
                FUN_180315380(TI_PlayerShortcuts);
                cRam00000001834b3101 = '\x01';
              }
              if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
                lVar4 = PlayerShortcuts__GetShortcutBySlot__1804d2090
                                  (**(longlong **)(TI_PlayerShortcuts + 0xb8),
                                   aiStackX_8[0] * 0xc + -0xd + aiStackX_18[0],0);
                if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) != 4)) {
                  lVar5 = FUN_1804583c0(0);
                  if (lVar5 != 0) {
                    PlayerShortcuts__UseShortcut__1804d3630(lVar5,lVar4,0);
                    return *(int *)(lVar4 + 0x18) == 2;
                  }
                  goto code_r0x000180475cab;
                }
              }
            }
          }
        }
        return false;
      }
    }
  }
code_r0x000180475cab:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

