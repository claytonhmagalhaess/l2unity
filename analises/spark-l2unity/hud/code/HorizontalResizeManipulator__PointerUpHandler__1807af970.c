// HorizontalResizeManipulator__PointerUpHandler__1807af970 @ 0x1807af970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HorizontalResizeManipulator__PointerUpHandler__1807af970(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  
  if (cRam00000001834b4534 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerUpEvent>.get_pointerId);
    cRam00000001834b4534 = '\x01';
  }
  uVar2 = func_0x0001814b50c0(param_1,0);
  if (param_2 != 0) {
    cVar3 = UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture
                      (uVar2,*(undefined4 *)(param_2 + 0x80),0);
    if (cVar3 != '\0') {
      uVar2 = func_0x0001814b50c0(param_1,0);
      UnityEngine_UIElements_PointerCaptureHelper__ReleasePointer
                (uVar2,*(undefined4 *)(param_2 + 0x80),0);
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
      if (cVar3 != '\0') {
        if (*(longlong *)(param_1 + 0x58) == 0) goto code_r0x0001807afa43;
        L2Window__GuardaTamanho__180799c30(*(longlong *)(param_1 + 0x58),0);
      }
    }
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) | 1;
    return;
  }
code_r0x0001807afa43:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

