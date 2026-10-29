// ChatWindow__TeclaDoTell__1805ced60 @ 0x1805ced60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__TeclaDoTell__1805ced60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  
  if (cRam00000001834b3ade == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.KeyboardEventBase<UnityEngine.UIElements.KeyDownEvent>.get_character);
    FUN_180315380(MR_UnityEngine.UIElements.KeyboardEventBase<UnityEngine.UIElements.KeyDownEvent>.get_keyCode);
    FUN_180315380(MR_UnityEngine.UIElements.KeyboardEventBase<UnityEngine.UIElements.KeyDownEvent>.get_shiftKey);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_UnityEngine.UIElements.TextInputBaseField<string>.get_cursorIndex);
    FUN_180315380(LIT_"''");
    cRam00000001834b3ade = '\x01';
  }
  if (*(char *)(param_1 + 0x9c) == '\0') {
    return;
  }
  if (param_2 == 0) goto DAT_1805cef3f;
  if (*(int *)(param_2 + 0x70) == 9) {
    bVar8 = true;
code_r0x0001805cee02:
    bVar7 = *(int *)(param_2 + 0x70) == 0x112;
    if ((*(int *)(param_2 + 0x70) != 0x113) ||
       (cVar4 = func_0x000180c3eff0(param_2,MR_UnityEngine.UIElements.KeyboardEventBase<UnityEngine.UIElements.KeyDownEvent>.get_shiftKey), cVar4 != '\0'))
    goto code_r0x0001805ceec3;
    if (*(longlong *)(param_1 + 0xa0) == 0) goto DAT_1805cef3f;
    if (*(int *)(*(longlong *)(param_1 + 0xa0) + 0x18) < 1) goto code_r0x0001805ceec3;
    if (*(longlong *)(param_1 + 0x108) == 0) goto DAT_1805cef3f;
    iVar5 = FUN_180effb90(*(longlong *)(param_1 + 0x108),MR_UnityEngine.UIElements.TextInputBaseField<string>.get_cursorIndex);
    plVar1 = *(longlong **)(param_1 + 0x108);
    if ((plVar1 == (longlong *)0x0) ||
       ((lVar6 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80)), lVar6 == 0
        && (lVar6 = LIT_"''", LIT_"''" == 0)))) goto DAT_1805cef3f;
    bVar2 = *(int *)(lVar6 + 0x10) <= iVar5;
  }
  else {
    bVar8 = *(short *)(param_2 + 0x6c) == 9;
    if (*(int *)(param_2 + 0x70) != 0x111) goto code_r0x0001805cee02;
    bVar7 = true;
code_r0x0001805ceec3:
    bVar2 = false;
  }
  if (((bVar8) || (bVar7)) || (bVar2)) {
    if (*(int *)(param_2 + 0x70) == 9) {
      bVar2 = true;
    }
    if (bVar2) {
      ChatWindow__AceitaSugestao__1805c3dd0(param_1,0);
    }
    func_0x00018274f9a0(param_2,0);
    plVar1 = *(longlong **)(param_1 + 0x108);
    if (plVar1 == (longlong *)0x0) {
DAT_1805cef3f:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar6 = (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
    if (lVar6 != 0) {
      UnityEngine_UIElements_FocusController__IgnoreEvent(lVar6,param_2,0);
    }
  }
  return;
}

