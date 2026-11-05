// ChatWindow_BordaDoSistema__Desce__1805beba0 @ 0x1805beba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow_BordaDoSistema__Desce__1805beba0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_28 [32];
  
  if (cRam00000001834b3af4 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_button);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_pointerId);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_position);
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b3af4 = '\x01';
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x94) == 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0xa0);
      if ((*(longlong *)(param_1 + 0x38) == 0) ||
         (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0xc0), lVar3 == 0))
      goto code_r0x0001805bec86;
      lVar3 = UnityEngine_UIElements_VisualElement__get_layout(auStack_28,lVar3,0);
      uVar1 = *(undefined4 *)(lVar3 + 0xc);
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      *(undefined4 *)(param_1 + 0x44) = uVar1;
      uVar4 = func_0x0001814b50c0(param_1,0);
      UnityEngine_UIElements_PointerCaptureHelper__CapturePointer
                (uVar4,*(undefined4 *)(param_2 + 0x80),0);
      func_0x00018274f9b0(param_2,0);
    }
    return;
  }
code_r0x0001805bec86:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

