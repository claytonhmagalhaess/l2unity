// L2SlotContainer__AssignAction__18078ece0 @ 0x18078ece0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotContainer__AssignAction__18078ece0(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ushort uVar12;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_30;
  
  if (cRam00000001834b443d == '\0') {
    puStack_30 = &UNK_18078ed0d;
    FUN_180315380(TI_ActionSlot);
    cRam00000001834b443d = '\x01';
  }
  lVar8 = *(longlong *)(param_1 + 0x38);
  if (lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= param_2) {
      puStack_30 = &UNK_18078ed7c;
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar1 = *(longlong **)(lVar8 + 0x20 + (longlong)(int)param_2 * 8);
    if (plVar1 != (longlong *)0x0) {
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TI_ActionSlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_ActionSlot + 0x130) * 8) !=
          TI_ActionSlot)) {
        puStack_30 = &UNK_18078ed85;
        FUN_1803146d0(plVar1,TI_ActionSlot);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (DAT_1834b3a0d == '\0') {
        FUN_180315380(TI_ButtonClickSoundManipulator);
        FUN_180315380(TI_UnityEngine.UIElements.IStyle);
        FUN_180315380(LIT_"'Action '");
        FUN_180315380(LIT_"'empty'");
        DAT_1834b3a0d = '\x01';
      }
      *(undefined1 *)(plVar1 + 7) = 0;
      if (plVar1[0x12] == 0) {
        lVar8 = plVar1[8];
        lVar7 = func_0x000180315580(TI_ButtonClickSoundManipulator);
        BlinkingCursorManipulator___ctor__1807aa3c0(lVar7,lVar8,0);
        plVar1[0x12] = lVar7;
        func_0x000180314690(plVar1 + 0x12,lVar7);
      }
      if (plVar1[0xf] != 0) {
        *(undefined1 *)(plVar1[0xf] + 0x59) = 1;
        if (plVar1[8] != 0) {
          UnityEngine_UIElements_VisualElement__RemoveFromClassList(plVar1[8],LIT_"'empty'",0);
          *(undefined4 *)(plVar1 + 0x10) = param_3;
          lVar8 = ActionNameTable__get_Instance(0);
          if (lVar8 != 0) {
            lVar8 = ActionNameTable__GetAction(lVar8,param_3,0);
            plVar1[0x11] = lVar8;
            func_0x000180314690(plVar1 + 0x11,lVar8);
            if (plVar1[9] != 0) {
              plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar1[9],0);
              if (plVar1[0x11] == 0) {
                uVar10 = 0;
              }
              else {
                lVar8 = IconTable__get_Instance(0);
                if ((plVar1[0x11] == 0) || (lVar8 == 0)) goto LAB_1805a2f2a;
                uVar10 = IconTable__LoadTextureByName(lVar8,*(undefined8 *)(plVar1[0x11] + 0x28),0);
              }
              puVar11 = (undefined8 *)
                        UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar10,0);
              if (plVar9 != (longlong *)0x0) {
                lVar8 = *plVar9;
                uVar3 = *puVar11;
                uVar4 = puVar11[1];
                uVar5 = puVar11[2];
                uVar6 = puVar11[3];
                uVar10 = puVar11[4];
                if (*(ushort *)(lVar8 + 0x12e) != 0) {
                  uVar12 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar11 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                          (ulonglong)uVar12 * 0x10) + 0xb) * 0x10 + 0x138 + lVar8);
                      goto LAB_1805a2e63;
                    }
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < *(ushort *)(lVar8 + 0x12e));
                }
                puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xb);
LAB_1805a2e63:
                uStack_68 = uVar3;
                uStack_60 = uVar4;
                uStack_58 = uVar5;
                uStack_50 = uVar6;
                uStack_48 = uVar10;
                (*(code *)*puVar11)(plVar9,&uStack_68,puVar11[1]);
                if (plVar1[0xb] != 0) {
                  lVar8 = plVar1[0xb];
                  if (plVar1[0x11] == 0) {
                    uVar10 = System_Int32__ToString(&stack0x00000008,0);
                    uVar10 = System_String__Concat(LIT_"'Action '",uVar10,0);
                  }
                  else {
                    uVar10 = *(undefined8 *)(plVar1[0x11] + 0x18);
                  }
                  *(undefined8 *)(lVar8 + 0x18) = uVar10;
                  func_0x000180314690(lVar8 + 0x18,uVar10);
                }
                return;
              }
            }
          }
        }
      }
LAB_1805a2f2a:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puStack_30 = &UNK_18078ed76;
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

