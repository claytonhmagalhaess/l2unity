// SlotDragManipulator__PointerMoveHandler__1807b3280 @ 0x1807b3280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SlotDragManipulator__PointerMoveHandler__1807b3280(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  code *pcVar11;
  undefined8 uVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStack_b8 [176];
  
  if (cRam00000001834b451a == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_pointerId);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_position);
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b451a = '\x01';
  }
  if (*(char *)(param_1 + 0x59) != '\0') {
    if (param_2 == 0) goto DAT_1807b3565;
    cVar13 = UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture
                       (*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x80),0);
    if (cVar13 != '\0') {
      *(undefined1 *)(param_1 + 0x58) = 1;
      if (*(longlong *)(param_1 + 0x38) == 0) {
DAT_1807b3565:
        FUN_1803155d0();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      fVar1 = *(float *)(param_1 + 0x40);
      fVar2 = *(float *)(param_1 + 0x44);
      fVar3 = *(float *)(param_2 + 0x9c);
      fVar4 = *(float *)(param_2 + 0xa0);
      lVar16 = UnityEngine_UIElements_VisualElement__get_layout
                         (auStack_b8,*(longlong *)(param_1 + 0x38),0);
      fVar5 = *(float *)(lVar16 + 8);
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(longlong *)(param_1 + 0x38) == 0) goto DAT_1807b3565;
      lVar16 = UnityEngine_UIElements_VisualElement__get_layout
                         (auStack_b8,*(longlong *)(param_1 + 0x38),0);
      uVar12 = *(undefined8 *)(param_2 + 0x9c);
      fVar6 = *(float *)(lVar16 + 0xc);
      if (cRam00000001834b451b == '\0') {
        FUN_180315380(TI_UnityEngine.Rect);
        cRam00000001834b451b = '\x01';
      }
      iVar14 = FUN_1823e2820(0);
      if (*(longlong *)(param_1 + 0x38) == 0) goto DAT_1807b3565;
      fVar7 = *(float *)(param_1 + 0x48);
      lVar16 = UnityEngine_UIElements_VisualElement__get_layout
                         (auStack_b8,*(longlong *)(param_1 + 0x38),0);
      fVar8 = *(float *)(lVar16 + 8);
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      iVar15 = FUN_1823e26f0(0);
      if (*(longlong *)(param_1 + 0x38) == 0) goto DAT_1807b3565;
      fVar9 = *(float *)(param_1 + 0x4c);
      lVar16 = UnityEngine_UIElements_VisualElement__get_layout
                         (auStack_b8,*(longlong *)(param_1 + 0x38),0);
      fVar10 = *(float *)(lVar16 + 0xc);
      if (DAT_1834b3d0f == '\0') {
        FUN_180315380(TI_L2SlotManager);
        DAT_1834b3d0f = '\x01';
      }
      if (**(longlong **)(TI_L2SlotManager + 0xb8) == 0) goto DAT_1807b3565;
      L2SlotManager__DragSlot__180790c60
                (**(longlong **)(TI_L2SlotManager + 0xb8),
                 (fVar1 - fVar3) + fVar5 * 0.5 + (((float)iVar14 - fVar7) - fVar8),
                 (fVar2 - fVar4) + fVar6 * 0.5 + (((float)iVar15 - fVar9) - fVar10),uVar12,0);
    }
    func_0x00018274f9b0(param_2,0);
  }
  return;
}

