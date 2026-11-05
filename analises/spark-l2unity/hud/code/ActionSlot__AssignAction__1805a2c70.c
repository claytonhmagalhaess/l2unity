// ActionSlot__AssignAction__1805a2c70 @ 0x1805a2c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ActionSlot__AssignAction__1805a2c70(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined4 auStackX_8 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (DAT_1834b3a0d == '\0') {
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(LIT_"'Action '");
    FUN_180315380(LIT_"'empty'");
    DAT_1834b3a0d = '\x01';
  }
  auStackX_8[0] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 0x90) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = func_0x000180315580(TI_ButtonClickSoundManipulator);
    BlinkingCursorManipulator___ctor__1807aa3c0(uVar5,uVar7,0);
    *(undefined8 *)(param_1 + 0x90) = uVar5;
    func_0x000180314690(param_1 + 0x90,uVar5);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x59) = 1;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      UnityEngine_UIElements_VisualElement__RemoveFromClassList
                (*(longlong *)(param_1 + 0x40),LIT_"'empty'",0);
      *(undefined4 *)(param_1 + 0x80) = param_2;
      lVar6 = ActionNameTable__get_Instance(0);
      if (lVar6 != 0) {
        uVar7 = ActionNameTable__GetAction(lVar6,param_2,0);
        *(undefined8 *)(param_1 + 0x88) = uVar7;
        func_0x000180314690(param_1 + 0x88,uVar7);
        if (*(longlong *)(param_1 + 0x48) != 0) {
          plVar8 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x48),0);
          if (*(longlong *)(param_1 + 0x88) == 0) {
            uVar7 = 0;
          }
          else {
            lVar6 = IconTable__get_Instance(0);
            if ((*(longlong *)(param_1 + 0x88) == 0) || (lVar6 == 0)) goto LAB_1805a2f2a;
            uVar7 = IconTable__LoadTextureByName
                              (lVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x28),0);
          }
          puVar9 = (undefined8 *)
                   UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar7,0);
          if (plVar8 != (longlong *)0x0) {
            lVar6 = *plVar8;
            uVar5 = *puVar9;
            uVar2 = puVar9[1];
            uVar3 = puVar9[2];
            uVar4 = puVar9[3];
            uVar7 = puVar9[4];
            if (*(ushort *)(lVar6 + 0x12e) != 0) {
              uVar10 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                            0xb) * 0x10 + 0x138 + lVar6);
                  goto LAB_1805a2e63;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(ushort *)(lVar6 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
LAB_1805a2e63:
            uStack_68 = uVar5;
            uStack_60 = uVar2;
            uStack_58 = uVar3;
            uStack_50 = uVar4;
            uStack_48 = uVar7;
            (*(code *)*puVar9)(plVar8,&uStack_68,puVar9[1]);
            if (*(longlong *)(param_1 + 0x58) != 0) {
              lVar6 = *(longlong *)(param_1 + 0x58);
              if (*(longlong *)(param_1 + 0x88) == 0) {
                auStackX_8[0] = *(undefined4 *)(param_1 + 0x80);
                uVar7 = System_Int32__ToString(auStackX_8,0);
                uVar7 = System_String__Concat(LIT_"'Action '",uVar7,0);
              }
              else {
                uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
              }
              *(undefined8 *)(lVar6 + 0x18) = uVar7;
              func_0x000180314690(lVar6 + 0x18,uVar7);
            }
            return;
          }
        }
      }
    }
  }
LAB_1805a2f2a:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

