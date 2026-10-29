// OptionsWindow___c__DisplayClass70_0___Barra_b__3__1806c5360 @ 0x1806c5360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass70_0___Barra_b__3__1806c5360(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b3f64 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_button);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_localPosition);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_pointerId);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(LIT_"'Opcoes/slider_cursor_over'");
    cRam00000001834b3f64 = '\x01';
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x94) != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x48) = 1;
    UnityEngine_UIElements_PointerCaptureHelper__CapturePointer
              (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x80),0);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar7 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x18),0);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar8 = SparkEstilo__Textura(LIT_"'Opcoes/slider_cursor_over'",0);
      puVar9 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar8,0)
      ;
      if (plVar7 != (longlong *)0x0) {
        lVar1 = *plVar7;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        uVar8 = puVar9[4];
        if (*(ushort *)(lVar1 + 0x12e) != 0) {
          uVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0xb)
                        * 0x10 + 0x138 + lVar1);
              goto code_r0x0001806c54b5;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(lVar1 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806c54b5:
        uStack_68 = uVar3;
        uStack_60 = uVar4;
        uStack_58 = uVar5;
        uStack_50 = uVar6;
        uStack_48 = uVar8;
        (*(code *)*puVar9)(plVar7,&uStack_68,puVar9[1]);
        OptionsWindow___c__DisplayClass70_0___Barra_g__Poe_2__1806c5750
                  (param_1,*(undefined4 *)(param_2 + 0xa8),0);
        func_0x00018274f9b0(param_2,0);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

