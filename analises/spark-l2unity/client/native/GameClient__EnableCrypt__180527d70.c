// GameClient__EnableCrypt__180527d70 @ 0x180527d70

/* WARNING: Removing unreachable block (ram,0x0001804f1f77) */

void GameClient__EnableCrypt__180527d70
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b3787 == '\0') {
    FUN_180315380(0x183308700);
    cRam00000001834b3787 = '\x01';
  }
  uVar3 = func_0x000180315580(uRam0000000183308700);
  L2_login_GameCrypt___ctor__1807af010(uVar3,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  func_0x000180314690(param_1 + 0xa0,uVar3);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    L2_login_GameCrypt__SetKey__1807aee30(*(longlong *)(param_1 + 0xa0),param_2,0);
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 != 0) {
      if (cRam00000001834b35b2 == '\0') {
        FUN_180315380(0x1832f3868);
        FUN_180315380(0x183313ce8);
        FUN_180315380(0x1832d5668);
        FUN_180315380(0x1832d64d8);
        cRam00000001834b35b2 = '\x01';
      }
      uVar3 = FUN_1817037f0(uRam0000000183313ce8,uRam00000001832d64d8,0,param_4,unaff_RDI);
      if (*(int *)(lRam00000001832f3868 + 0xe4) == 0) {
        func_0x000180315660();
      }
      FUN_1823d2370(uVar3,0);
      *(undefined1 *)(lVar1 + 0x40) = 1;
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

