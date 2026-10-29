// ActionSlot__Limpa__1805a2fb0 @ 0x1805a2fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ActionSlot__Limpa__1805a2fb0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b3a0c == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'empty'");
    cRam00000001834b3a0c = '\x01';
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x88) = 0;
  func_0x000180314690(param_1 + 0x88,0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x59) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      UnityEngine_UIElements_VisualElement__AddToClassList
                (*(longlong *)(param_1 + 0x40),LIT_"'empty'",0);
      if (*(longlong *)(param_1 + 0x48) != 0) {
        plVar8 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x48),0);
        puVar9 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,1,0);
        if (plVar8 != (longlong *)0x0) {
          lVar2 = *plVar8;
          uVar4 = *puVar9;
          uVar5 = puVar9[1];
          uVar6 = puVar9[2];
          uVar7 = puVar9[3];
          uVar1 = puVar9[4];
          if (*(ushort *)(lVar2 + 0x12e) != 0) {
            uVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar9 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                          0xb) * 0x10 + 0x138 + lVar2);
                goto code_r0x0001805a30e3;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
          }
          puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001805a30e3:
          uStack_68 = uVar4;
          uStack_60 = uVar5;
          uStack_58 = uVar6;
          uStack_50 = uVar7;
          uStack_48 = uVar1;
          (*(code *)*puVar9)(plVar8,&uStack_68,puVar9[1]);
          if (*(longlong *)(param_1 + 0x58) != 0) {
            lVar2 = *(longlong *)(param_1 + 0x58);
            *(undefined8 *)(lVar2 + 0x18) = LIT_"''";
            func_0x000180314690(lVar2 + 0x18);
          }
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

