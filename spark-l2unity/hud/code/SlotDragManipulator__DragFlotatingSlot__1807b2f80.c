// SlotDragManipulator__DragFlotatingSlot__1807b2f80 @ 0x1807b2f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SlotDragManipulator__DragFlotatingSlot__1807b2f80
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float fStack_74;
  undefined1 auStack_70 [104];
  
  if (cRam00000001834b451b == '\0') {
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b451b = '\x01';
  }
  iVar6 = FUN_1823e2820(0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    fVar1 = *(float *)(param_1 + 0x48);
    lVar8 = UnityEngine_UIElements_VisualElement__get_layout
                      (auStack_70,*(longlong *)(param_1 + 0x38),0);
    fVar2 = *(float *)(lVar8 + 8);
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar7 = FUN_1823e26f0(0);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      fVar3 = *(float *)(param_1 + 0x4c);
      lVar8 = UnityEngine_UIElements_VisualElement__get_layout
                        (auStack_70,*(longlong *)(param_1 + 0x38),0);
      fVar4 = *(float *)(lVar8 + 0xc);
      if (DAT_1834b3d0f == '\0') {
        FUN_180315380(TI_L2SlotManager);
        DAT_1834b3d0f = '\x01';
      }
      if (**(longlong **)(TI_L2SlotManager + 0xb8) != 0) {
        fStack_74 = (float)((ulonglong)param_2 >> 0x20);
        L2SlotManager__DragSlot__180790c60
                  (**(longlong **)(TI_L2SlotManager + 0xb8),
                   (((float)iVar6 - fVar1) - fVar2) + (float)param_2,
                   (((float)iVar7 - fVar3) - fVar4) + fStack_74,param_3,0);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

