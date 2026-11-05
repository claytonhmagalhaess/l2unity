// L2SlotManager__DragSlot__180790c60 @ 0x180790c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotManager__DragSlot__180790c60
               (longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ushort uVar7;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (cRam00000001834b4447 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b4447 = '\x01';
  }
  (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  if (param_1[6] != 0) {
    plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1[6],0);
    puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48,param_2,0);
    if (plVar5 != (longlong *)0x0) {
      lVar3 = *plVar5;
      uVar1 = *puVar6;
      uVar2 = *(undefined4 *)(puVar6 + 1);
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        uVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar6 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0x69) *
                      0x10 + 0x138 + lVar3);
            goto code_r0x000180790d49;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x000180790d49:
      uStack_48 = uVar1;
      uStack_40 = uVar2;
      (*(code *)*puVar6)(plVar5,&uStack_48,puVar6[1]);
      if (param_1[6] != 0) {
        plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1[6],0);
        puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48,param_3,0)
        ;
        if (plVar5 != (longlong *)0x0) {
          lVar3 = *plVar5;
          uVar1 = *puVar6;
          uVar2 = *(undefined4 *)(puVar6 + 1);
          if (*(ushort *)(lVar3 + 0x12e) != 0) {
            uVar7 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) +
                          0x2d) * 0x10 + 0x138 + lVar3);
                goto code_r0x000180790de9;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x000180790de9:
          uStack_48 = uVar1;
          uStack_40 = uVar2;
          (*(code *)*puVar6)(plVar5,&uStack_48,puVar6[1]);
          if (cRam00000001834b4371 == '\0') {
            FUN_180315380(TI_MacroWindow);
            cRam00000001834b4371 = '\x01';
          }
          if (**(longlong **)(TI_MacroWindow + 0xb8) != 0) {
            MacroWindow__Arrastando__1806551f0
                      (**(longlong **)(TI_MacroWindow + 0xb8),param_1[0x11],param_4,0);
          }
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

