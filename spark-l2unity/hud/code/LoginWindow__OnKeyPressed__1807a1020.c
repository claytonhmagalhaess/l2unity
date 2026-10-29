// LoginWindow__OnKeyPressed__1807a1020 @ 0x1807a1020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__OnKeyPressed__1807a1020(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  
  if (cRam00000001834b44c1 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.KeyboardEventBase<UnityEngine.UIElements.KeyDownEvent>.get_keyCode);
    FUN_180315380(LIT_"'click_01'");
    cRam00000001834b44c1 = '\x01';
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x70);
    if (iVar1 == 9) {
      if (param_3 == *(longlong *)(param_1 + 0x98)) {
        plVar3 = *(longlong **)(param_1 + 0x90);
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x98);
      }
      if (plVar3 == (longlong *)0x0) goto code_r0x0001807a1112;
      (**(code **)(*plVar3 + 0x268))(plVar3,*(undefined8 *)(*plVar3 + 0x270));
    }
    else {
      if ((iVar1 != 0xd) && (iVar1 != 0x10f)) {
        return;
      }
      if (DAT_1834b301f == '\0') {
        FUN_180315380(TI_AudioManager);
        DAT_1834b301f = '\x01';
      }
      if (**(longlong **)(TI_AudioManager + 0xb8) == 0) goto code_r0x0001807a1112;
      AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'click_01'",0);
      LoginWindow__LoginButtonPressed__18079e420(param_1,0);
    }
    func_0x00018274f9b0(param_2,0);
    return;
  }
code_r0x0001807a1112:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

