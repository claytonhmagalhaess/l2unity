// ChatWindow_CantoDoChat__Desce__1805c0880 @ 0x1805c0880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow_CantoDoChat__Desce__1805c0880(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b3af9 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_button);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_pointerId);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_position);
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b3af9 = '\x01';
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x94) == 0) {
      uVar1 = *(undefined4 *)(param_2 + 0xa0);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x9c);
      *(undefined4 *)(param_1 + 0x44) = uVar1;
      if ((*(longlong *)(param_1 + 0x38) == 0) ||
         (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0xb8), lVar4 == 0))
      goto code_r0x0001805c098f;
      lVar4 = UnityEngine_UIElements_VisualElement__get_layout(auStack_38,lVar4,0);
      uVar1 = *(undefined4 *)(lVar4 + 8);
      uVar2 = *(undefined4 *)(lVar4 + 0xc);
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      *(undefined4 *)(param_1 + 0x48) = uVar1;
      *(undefined4 *)(param_1 + 0x4c) = uVar2;
      uVar5 = func_0x0001814b50c0(param_1,0);
      UnityEngine_UIElements_PointerCaptureHelper__CapturePointer
                (uVar5,*(undefined4 *)(param_2 + 0x80),0);
      func_0x00018274f9b0(param_2,0);
    }
    return;
  }
code_r0x0001805c098f:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

