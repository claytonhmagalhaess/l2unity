// SkillbarSlot__AssignShortcut__1807047c0 @ 0x1807047c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarSlot__AssignShortcut__1807047c0(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if (cRam00000001834b416b == '\0') {
    FUN_180315380(TI_ButtonClickSoundManipulator);
    cRam00000001834b416b = '\x01';
  }
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  param_1[0x16] = param_2;
  func_0x000180314690(param_1 + 0x16,param_2);
  lVar8 = param_1[8];
  lVar6 = func_0x000180315580(TI_ButtonClickSoundManipulator);
  BlinkingCursorManipulator___ctor__1807aa3c0(lVar6,lVar8,0);
  param_1[0x12] = lVar6;
  func_0x000180314690(param_1 + 0x12,lVar6);
  if (param_2 == 0) goto code_r0x000180704b5e;
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 == 1) {
    uVar5 = *(undefined4 *)(param_2 + 0x1c);
    if (cRam00000001834b416d == '\0') {
      FUN_180315380(TI_InventorySlot);
      FUN_180315380(TI_L2ClickableSlot);
      FUN_180315380(TI_SlotAnimationManipulator);
      cRam00000001834b416d = '\x01';
    }
    *(undefined1 *)(param_1 + 7) = 0;
    if (DAT_1834b3102 == '\0') {
      FUN_180315380(TI_PlayerInventory);
      DAT_1834b3102 = '\x01';
    }
    if (**(longlong **)(TI_PlayerInventory + 0xb8) != 0) {
      lVar6 = PlayerInventory__GetItemByObjectId(**(longlong **)(TI_PlayerInventory + 0xb8),uVar5,0);
      uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
      lVar8 = param_1[8];
      lVar9 = func_0x000180315580(TI_InventorySlot);
      InventorySlot___ctor__18061ffa0(lVar9,uVar5,lVar8,5,0);
      param_1[0x15] = lVar9;
      func_0x000180314690(param_1 + 0x15,lVar9);
      plVar10 = (longlong *)param_1[0x15];
      if (plVar10 != (longlong *)0x0) {
        lVar8 = *plVar10;
        if ((*(byte *)(lVar8 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(lVar8 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) !=
            TI_InventorySlot)) {
          FUN_1803146d0(plVar10);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(lVar8 + 0x208))(plVar10,lVar6,*(undefined8 *)(lVar8 + 0x210));
        plVar10 = (longlong *)param_1[0x15];
        if (plVar10 != (longlong *)0x0) {
          if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(TI_L2ClickableSlot + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(*plVar10 + 200) + -8 +
               (ulonglong)*(byte *)(TI_L2ClickableSlot + 0x130) * 8) != TI_L2ClickableSlot)) {
            FUN_1803146d0(plVar10,TI_L2ClickableSlot);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          L2ClickableSlot__UnregisterClickableCallback__18076f2f0(plVar10,0);
          lVar8 = param_1[10];
          lVar9 = func_0x000180315580(TI_SlotAnimationManipulator);
          SlotAnimationManipulator___ctor__1807b2d00(lVar9,lVar8,param_1,0);
          param_1[0x13] = lVar9;
          func_0x000180314690(param_1 + 0x13,lVar9);
          if (cRam00000001834b4173 == '\0') {
            FUN_180315380(LIT_"'empty'");
            cRam00000001834b4173 = '\x01';
          }
          if (param_1[8] != 0) {
            UnityEngine_UIElements_VisualElement__RemoveFromClassList(param_1[8],LIT_"'empty'",0);
            SkillbarSlot__AtualizaTecla__1807051f0(param_1,0);
            if (cRam00000001834b3101 == '\0') {
              FUN_180315380(TI_PlayerShortcuts);
              cRam00000001834b3101 = '\x01';
            }
            if ((lVar6 != 0) && (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0)) {
              cVar4 = PlayerShortcuts__IsItemToggled__1804d2110
                                (**(longlong **)(TI_PlayerShortcuts + 0xb8),
                                 *(undefined4 *)(lVar6 + 0x1c),0);
              if (cVar4 == '\0') {
                *(undefined1 *)(param_1 + 0x11) = 0;
                if (cRam00000001834b32cb == '\0') {
                  FUN_180315380(TI_SkillbarWindow);
                  cRam00000001834b32cb = '\x01';
                }
                if (**(longlong **)(TI_SkillbarWindow + 0xb8) != 0) {
                  SkillbarWindow__RemoveToggledSlot__180708030
                            (**(longlong **)(TI_SkillbarWindow + 0xb8),param_1,0);
                  return;
                }
              }
              else {
                *(undefined1 *)(param_1 + 0x11) = 1;
                if (cRam00000001834b32cb == '\0') {
                  FUN_180315380(TI_SkillbarWindow);
                  cRam00000001834b32cb = '\x01';
                }
                if (**(longlong **)(TI_SkillbarWindow + 0xb8) != 0) {
                  SkillbarWindow__AddToggledSlot__180706080
                            (**(longlong **)(TI_SkillbarWindow + 0xb8),param_1,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iVar1 == 2) {
    uVar5 = *(undefined4 *)(param_2 + 0x20);
    uVar2 = *(undefined4 *)(param_2 + 0x1c);
    if (cRam00000001834b4170 == '\0') {
      FUN_180315380(TI_L2ClickableSlot,uVar2,uVar5,0);
      FUN_180315380(TI_SkillSlot);
      FUN_180315380(TI_SkillWindowInfo);
      FUN_180315380(TI_SlotAnimationManipulator);
      cRam00000001834b4170 = '\x01';
    }
    uVar5 = SkillbarSlot__NivelDoJogador__1807058d0(uVar2,uVar5,0);
    *(undefined4 *)(param_1 + 0x19) = uVar5;
    lVar8 = func_0x000180315580(TI_SkillWindowInfo);
    uVar11 = 0;
    SkillWindowInfo___ctor(lVar8,uVar2,uVar5,0,0,0);
    if (lVar8 != 0) {
      cVar4 = func_0x0001804d5330(lVar8,0);
      if (cVar4 != '\0') {
        return;
      }
      lVar6 = param_1[10];
      lVar9 = func_0x000180315580(TI_SlotAnimationManipulator);
      SlotAnimationManipulator___ctor__1807b2d00(lVar9,lVar6,param_1,0);
      param_1[0x13] = lVar9;
      func_0x000180314690(param_1 + 0x13,lVar9);
      uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
      lVar6 = param_1[8];
      lVar9 = func_0x000180315580(TI_SkillSlot);
      L2DraggableSlot___ctor__180771210(lVar9,uVar5,lVar6,5,1,uVar11 & 0xffffffffffffff00,0);
      param_1[0x15] = lVar9;
      func_0x000180314690(param_1 + 0x15,lVar9);
      plVar10 = (longlong *)param_1[0x15];
      if (plVar10 != (longlong *)0x0) {
        if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(TI_SkillSlot + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar10 + 200) + -8 +
             (ulonglong)*(byte *)(TI_SkillSlot + 0x130) * 8) != TI_SkillSlot)) {
          FUN_1803146d0(plVar10);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        SkillSlot__AssignSkill__180700cb0(plVar10,lVar8,0);
        plVar10 = (longlong *)param_1[0x15];
        if (plVar10 != (longlong *)0x0) {
          if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(TI_L2ClickableSlot + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(*plVar10 + 200) + -8 +
               (ulonglong)*(byte *)(TI_L2ClickableSlot + 0x130) * 8) != TI_L2ClickableSlot)) {
            FUN_1803146d0(plVar10,TI_L2ClickableSlot);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          L2ClickableSlot__UnregisterClickableCallback__18076f2f0(plVar10,0);
          if (DAT_1834b3103 == '\0') {
            FUN_180315380(TI_PlayerSkill);
            DAT_1834b3103 = '\x01';
          }
          if (**(longlong **)(TI_PlayerSkill + 0xb8) != 0) {
            lVar8 = PlayerSkill__GetSkillInfo(**(longlong **)(TI_PlayerSkill + 0xb8),uVar2,0);
            param_1[0x10] = lVar8;
            func_0x000180314690(param_1 + 0x10,lVar8);
            if ((param_1[0x10] != 0) &&
               (cVar4 = SkillInfo__get_IsSkillOnCooldown(param_1[0x10],0), cVar4 != '\0')) {
              if (cRam00000001834b32cb == '\0') {
                FUN_180315380(TI_SkillbarWindow);
                cRam00000001834b32cb = '\x01';
              }
              if (**(longlong **)(TI_SkillbarWindow + 0xb8) == 0) goto code_r0x000180704f50;
              SkillbarWindow__AddSkillOnCooldown__180705f10
                        (**(longlong **)(TI_SkillbarWindow + 0xb8),param_1,0);
            }
            if (cRam00000001834b3101 == '\0') {
              FUN_180315380(TI_PlayerShortcuts);
              cRam00000001834b3101 = '\x01';
            }
            if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
              cVar4 = PlayerShortcuts__IsSkillToggled__1804d2170
                                (**(longlong **)(TI_PlayerShortcuts + 0xb8),uVar2,0);
              *(char *)(param_1 + 0x11) = cVar4;
              if (cVar4 == '\0') {
                if (cRam00000001834b32cb == '\0') {
                  FUN_180315380(TI_SkillbarWindow);
                  cRam00000001834b32cb = '\x01';
                }
                if (**(longlong **)(TI_SkillbarWindow + 0xb8) == 0) goto code_r0x000180704f50;
                SkillbarWindow__RemoveToggledSlot__180708030
                          (**(longlong **)(TI_SkillbarWindow + 0xb8),param_1,0);
              }
              else {
                if (cRam00000001834b32cb == '\0') {
                  FUN_180315380(TI_SkillbarWindow);
                  cRam00000001834b32cb = '\x01';
                }
                if (**(longlong **)(TI_SkillbarWindow + 0xb8) == 0) goto code_r0x000180704f50;
                SkillbarWindow__AddToggledSlot__180706080
                          (**(longlong **)(TI_SkillbarWindow + 0xb8),param_1,0);
              }
              if (cRam00000001834b4173 == '\0') {
                FUN_180315380(LIT_"'empty'");
                cRam00000001834b4173 = '\x01';
              }
              if (param_1[8] != 0) {
                UnityEngine_UIElements_VisualElement__RemoveFromClassList
                          (param_1[8],LIT_"'empty'",0);
                SkillbarSlot__AtualizaTecla__1807051f0(param_1,0);
                return;
              }
            }
          }
        }
      }
    }
code_r0x000180704f50:
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iVar1 == 3) {
    uVar5 = *(undefined4 *)(param_2 + 0x1c);
    if (cRam00000001834b416f == '\0') {
      FUN_180315380(TI_ActionSlot);
      FUN_180315380(TI_L2ClickableSlot);
      cRam00000001834b416f = '\x01';
    }
    lVar8 = param_1[8];
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
    *(undefined1 *)(param_1 + 7) = 0;
    lVar6 = func_0x000180315580(TI_ActionSlot);
    ActionSlot___ctor__1805a3170(lVar6,lVar8,uVar2,5,0);
    param_1[0x15] = lVar6;
    func_0x000180314690(param_1 + 0x15,lVar6);
    plVar10 = (longlong *)param_1[0x15];
    if (plVar10 == (longlong *)0x0) goto code_r0x000180704b5e;
    if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(TI_ActionSlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar10 + 200) + -8 + (ulonglong)*(byte *)(TI_ActionSlot + 0x130) * 8) !=
        TI_ActionSlot)) {
      FUN_1803146d0(plVar10);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ActionSlot__AssignAction__1805a2c70(plVar10,uVar5,0);
    plVar10 = (longlong *)param_1[0x15];
    if (plVar10 == (longlong *)0x0) goto code_r0x000180704b5e;
    if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(TI_L2ClickableSlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar10 + 200) + -8 +
         (ulonglong)*(byte *)(TI_L2ClickableSlot + 0x130) * 8) != TI_L2ClickableSlot)) {
      FUN_1803146d0(plVar10,TI_L2ClickableSlot);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (iVar1 != 4) {
      return;
    }
    uVar5 = *(undefined4 *)(param_2 + 0x1c);
    if (cRam00000001834b416c == '\0') {
      FUN_180315380(TI_L2ClickableSlot);
      FUN_180315380(TI_MacroSlot);
      FUN_180315380(TI_SparkMacros);
      cRam00000001834b416c = '\x01';
    }
    lVar8 = param_1[8];
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
    *(undefined1 *)(param_1 + 7) = 0;
    lVar6 = func_0x000180315580(TI_MacroSlot);
    ActionSlot___ctor__1805a3170(lVar6,lVar8,uVar2,5,0);
    param_1[0x15] = lVar6;
    func_0x000180314690(param_1 + 0x15,lVar6);
    plVar10 = (longlong *)param_1[0x15];
    if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar7 = SparkMacros__Busca__1804744f0(uVar5,0);
    if (plVar10 == (longlong *)0x0) goto code_r0x000180704b5e;
    if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(TI_MacroSlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar10 + 200) + -8 +
         (ulonglong)*(byte *)(TI_MacroSlot + 0x130) * 8) != TI_MacroSlot)) {
      FUN_1803146d0(plVar10,TI_MacroSlot);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    MacroSlot__AssignMacro__180623db0(plVar10,uVar7,0);
    plVar10 = (longlong *)param_1[0x15];
    if (plVar10 == (longlong *)0x0) goto code_r0x000180704b5e;
    if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(TI_L2ClickableSlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar10 + 200) + -8 +
         (ulonglong)*(byte *)(TI_L2ClickableSlot + 0x130) * 8) != TI_L2ClickableSlot)) {
      FUN_1803146d0(plVar10,TI_L2ClickableSlot);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  L2ClickableSlot__UnregisterClickableCallback__18076f2f0(plVar10,0);
  if (cRam00000001834b4173 == '\0') {
    FUN_180315380(LIT_"'empty'");
    cRam00000001834b4173 = '\x01';
  }
  if (param_1[8] != 0) {
    UnityEngine_UIElements_VisualElement__RemoveFromClassList(param_1[8],LIT_"'empty'",0);
    SkillbarSlot__AtualizaTecla__1807051f0(param_1,0);
    return;
  }
code_r0x000180704b5e:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

