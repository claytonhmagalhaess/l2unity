// SlotDragManipulator__PointerDownHandler__1807b3100 @ 0x1807b3100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SlotDragManipulator__PointerDownHandler__1807b3100(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  code *pcVar5;
  float *pfVar6;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b4519 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_button);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_pointerId);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_position);
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b4519 = '\x01';
  }
  if (*(char *)(param_1 + 0x59) != '\0') {
    if (param_2 == 0) goto DAT_1807b327a;
    if (*(int *)(param_2 + 0x94) == 0) {
      if (DAT_1834b3d0f == '\0') {
        FUN_180315380(TI_L2SlotManager);
        DAT_1834b3d0f = '\x01';
      }
      if (**(longlong **)(TI_L2SlotManager + 0xb8) == 0) {
DAT_1807b327a:
        FUN_1803155d0();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      L2SlotManager__SetDraggedSlot__180794860
                (**(longlong **)(TI_L2SlotManager + 0xb8),*(undefined8 *)(param_1 + 0x50),0);
      *(undefined1 *)(param_1 + 0x58) = 0;
      uVar4 = *(undefined4 *)(param_2 + 0x9c);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0xa0);
      *(undefined4 *)(param_1 + 0x40) = uVar4;
      if (*(longlong *)(param_1 + 0x38) == 0) goto DAT_1807b327a;
      pfVar6 = (float *)UnityEngine_UIElements_VisualElement__get_worldBound
                                  (auStack_38,*(longlong *)(param_1 + 0x38),0);
      fVar1 = *pfVar6;
      fVar2 = pfVar6[1];
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(longlong *)(param_1 + 0x38) == 0) goto DAT_1807b327a;
      pfVar6 = (float *)UnityEngine_UIElements_VisualElement__get_worldBound
                                  (auStack_38,*(longlong *)(param_1 + 0x38),0);
      fVar3 = *pfVar6;
      *(float *)(param_1 + 0x4c) = fVar2 - (pfVar6[1] - *(float *)(param_1 + 0x44));
      *(float *)(param_1 + 0x48) = fVar1 - (fVar3 - *(float *)(param_1 + 0x40));
      UnityEngine_UIElements_PointerCaptureHelper__CapturePointer
                (*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x80),0);
    }
    func_0x00018274f9b0(param_2,0);
  }
  return;
}

