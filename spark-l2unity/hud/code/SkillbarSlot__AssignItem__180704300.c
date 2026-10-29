// SkillbarSlot__AssignItem__180704300 @ 0x180704300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarSlot__AssignItem__180704300(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  if (cRam00000001834b416d == '\0') {
    FUN_180315380(TI_InventorySlot);
    FUN_180315380(TI_L2ClickableSlot);
    FUN_180315380(TI_SlotAnimationManipulator);
    cRam00000001834b416d = '\x01';
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (DAT_1834b3102 == '\0') {
    FUN_180315380(TI_PlayerInventory);
    DAT_1834b3102 = '\x01';
  }
  if (**(longlong **)(TI_PlayerInventory + 0xb8) != 0) {
    lVar7 = PlayerInventory__GetItemByObjectId(**(longlong **)(TI_PlayerInventory + 0xb8),param_2,0);
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar8 = func_0x000180315580(TI_InventorySlot);
    InventorySlot___ctor__18061ffa0(uVar8,uVar1,uVar2,5,0);
    *(undefined8 *)(param_1 + 0xa8) = uVar8;
    func_0x000180314690(param_1 + 0xa8,uVar8);
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = *plVar3;
      if ((*(byte *)(lVar4 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(lVar4 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) !=
          TI_InventorySlot)) {
        FUN_1803146d0(plVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(lVar4 + 0x208))(plVar3,lVar7,*(undefined8 *)(lVar4 + 0x210));
      plVar3 = *(longlong **)(param_1 + 0xa8);
      if (plVar3 != (longlong *)0x0) {
        if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TI_L2ClickableSlot + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar3 + 200) + -8 +
             (ulonglong)*(byte *)(TI_L2ClickableSlot + 0x130) * 8) != TI_L2ClickableSlot)) {
          FUN_1803146d0(plVar3,TI_L2ClickableSlot);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        L2ClickableSlot__UnregisterClickableCallback__18076f2f0(plVar3,0);
        uVar2 = *(undefined8 *)(param_1 + 0x50);
        uVar8 = func_0x000180315580(TI_SlotAnimationManipulator);
        SlotAnimationManipulator___ctor__1807b2d00(uVar8,uVar2,param_1,0);
        *(undefined8 *)(param_1 + 0x98) = uVar8;
        func_0x000180314690(param_1 + 0x98,uVar8);
        if (cRam00000001834b4173 == '\0') {
          FUN_180315380(LIT_"'empty'");
          cRam00000001834b4173 = '\x01';
        }
        if (*(longlong *)(param_1 + 0x40) != 0) {
          UnityEngine_UIElements_VisualElement__RemoveFromClassList
                    (*(longlong *)(param_1 + 0x40),LIT_"'empty'",0);
          SkillbarSlot__AtualizaTecla__1807051f0(param_1,0);
          if (cRam00000001834b3101 == '\0') {
            FUN_180315380(TI_PlayerShortcuts);
            cRam00000001834b3101 = '\x01';
          }
          if ((lVar7 != 0) && (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0)) {
            cVar6 = PlayerShortcuts__IsItemToggled__1804d2110
                              (**(longlong **)(TI_PlayerShortcuts + 0xb8),
                               *(undefined4 *)(lVar7 + 0x1c),0);
            if (cVar6 == '\0') {
              *(undefined1 *)(param_1 + 0x88) = 0;
              if (cRam00000001834b32cb == '\0') {
                FUN_180315380(TI_SkillbarWindow);
                cRam00000001834b32cb = '\x01';
              }
              if (**(longlong **)(TI_SkillbarWindow + 0xb8) == 0) goto code_r0x0001807045f2;
              SkillbarWindow__RemoveToggledSlot__180708030
                        (**(longlong **)(TI_SkillbarWindow + 0xb8),param_1,0);
            }
            else {
              *(undefined1 *)(param_1 + 0x88) = 1;
              if (cRam00000001834b32cb == '\0') {
                FUN_180315380(TI_SkillbarWindow);
                cRam00000001834b32cb = '\x01';
              }
              if (**(longlong **)(TI_SkillbarWindow + 0xb8) == 0) goto code_r0x0001807045f2;
              SkillbarWindow__AddToggledSlot__180706080
                        (**(longlong **)(TI_SkillbarWindow + 0xb8),param_1,0);
            }
            return;
          }
        }
      }
    }
  }
code_r0x0001807045f2:
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

