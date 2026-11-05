// ChatWindow_BordaDoSistema__Sobe__1805befd0 @ 0x1805befd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow_BordaDoSistema__Sobe__1805befd0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (cRam00000001834b3af6 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IResolvedStyle);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerUpEvent>.get_pointerId);
    FUN_180315380(LIT_"'spark_sysmsg_h'");
    cRam00000001834b3af6 = '\x01';
  }
  uVar4 = func_0x0001814b50c0(param_1,0);
  if (param_2 == 0) {
    FUN_1803155d0();
code_r0x0001805bf0b9:
    FUN_1803155d0();
  }
  else {
    cVar2 = UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture
                      (uVar4,*(undefined4 *)(param_2 + 0x80),0);
    if (cVar2 == '\0') {
      return;
    }
    uVar4 = func_0x0001814b50c0(param_1,0);
    UnityEngine_UIElements_PointerCaptureHelper__ReleasePointer
              (uVar4,*(undefined4 *)(param_2 + 0x80),0);
    if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x0001805bf0c4;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0xc0);
    if (lVar5 != 0) {
      lVar5 = UnityEngine_UIElements_VisualElement__get_resolvedStyle(lVar5,0);
      if (lVar5 != 0) {
        FUN_1800020c0(0x20,TI_UnityEngine.UIElements.IResolvedStyle,lVar5);
        uVar3 = FUN_1803fb530();
        UnityEngine_PlayerPrefs__SetInt(LIT_"'spark_sysmsg_h'",uVar3,0);
        return;
      }
      goto code_r0x0001805bf0b9;
    }
  }
  FUN_1803155d0();
code_r0x0001805bf0c4:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

