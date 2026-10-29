// ChatWindow_BordaDoSistema__Move__1805bec90 @ 0x1805bec90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow_BordaDoSistema__Move__1805bec90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort uVar8;
  float fVar9;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b3af5 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_pointerId);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_position);
    cRam00000001834b3af5 = '\x01';
  }
  uVar5 = func_0x0001814b50c0(param_1,0);
  if (param_2 != 0) {
    cVar4 = UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture
                      (uVar5,*(undefined4 *)(param_2 + 0x80),0);
    if (cVar4 == '\0') {
      return;
    }
    if ((*(longlong *)(param_1 + 0x38) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0xc0), lVar2 != 0)) {
      plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar2,0);
      fVar9 = *(float *)(param_1 + 0x44) - (*(float *)(param_2 + 0xa0) - *(float *)(param_1 + 0x40))
      ;
      if (fVar9 < 64.0) {
        fVar9 = 64.0;
      }
      else if (400.0 < fVar9) {
        fVar9 = 400.0;
      }
      puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,fVar9,0);
      if (plVar6 != (longlong *)0x0) {
        lVar2 = *plVar6;
        uVar1 = *(undefined4 *)(puVar7 + 1);
        uVar5 = *puVar7;
        if (*(ushort *)(lVar2 + 0x12e) != 0) {
          uVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0x43)
                        * 0x10 + 0x138 + lVar2);
              goto code_r0x0001805bedd5;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(ushort *)(lVar2 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805bedd5:
        uStack_28 = uVar5;
        uStack_20 = uVar1;
        (*(code *)*puVar7)(plVar6,&uStack_28,puVar7[1]);
        func_0x00018274f9b0(param_2,0);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

