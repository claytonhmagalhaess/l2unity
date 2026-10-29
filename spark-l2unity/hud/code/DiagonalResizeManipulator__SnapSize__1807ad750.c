// DiagonalResizeManipulator__SnapSize__1807ad750 @ 0x1807ad750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DiagonalResizeManipulator__SnapSize__1807ad750(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort uVar8;
  float fVar9;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b4527 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b4527 = '\x01';
  }
  fVar9 = (float)FUN_1803a9a90(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    fVar1 = *(float *)(param_1 + 0x58);
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x38),0);
    puVar7 = (undefined8 *)
             UnityEngine_UIElements_StyleLength__op_Implicit
                       (&uStack_28,(fVar1 - fVar9) + *(float *)(param_1 + 100),0);
    if (plVar6 != (longlong *)0x0) {
      lVar4 = *plVar6;
      uVar2 = *puVar7;
      uVar3 = *(undefined4 *)(puVar7 + 1);
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        uVar8 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar7 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0x43) *
                      0x10 + 0x138 + lVar4);
            goto code_r0x0001807ad823;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001807ad823:
      uStack_28 = uVar2;
      uStack_20 = uVar3;
      (*(code *)*puVar7)(plVar6,&uStack_28,puVar7[1]);
      return;
    }
  }
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

