// SlotDragManipulator__PointerUpHandler__1807b3570 @ 0x1807b3570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SlotDragManipulator__PointerUpHandler__1807b3570(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  
  if (cRam00000001834b451c == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerUpEvent>.get_pointerId);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerUpEvent>.get_position);
    cRam00000001834b451c = '\x01';
  }
  if (param_2 != 0) {
    cVar2 = UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture
                      (*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x80),0);
    if (cVar2 != '\0') {
      UnityEngine_UIElements_PointerCaptureHelper__ReleasePointer
                (*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x80),0);
      if (*(char *)(param_1 + 0x58) != '\0') {
        if (DAT_1834b3d0f == '\0') {
          FUN_180315380(TI_L2SlotManager);
          DAT_1834b3d0f = '\x01';
        }
        if (**(longlong **)(TI_L2SlotManager + 0xb8) == 0) goto code_r0x0001807b3645;
        L2SlotManager__ReleaseDrag__180793220
                  (**(longlong **)(TI_L2SlotManager + 0xb8),*(undefined8 *)(param_2 + 0x9c),0);
      }
    }
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) | 1;
    return;
  }
code_r0x0001807b3645:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

