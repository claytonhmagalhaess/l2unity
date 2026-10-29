// SkillbarSlot__AssignSkill__180704b90 @ 0x180704b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarSlot__AssignSkill__180704b90(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  if (cRam00000001834b4170 == '\0') {
    FUN_180315380(TI_L2ClickableSlot);
    FUN_180315380(TI_SkillSlot);
    FUN_180315380(TI_SkillWindowInfo);
    FUN_180315380(TI_SlotAnimationManipulator);
    cRam00000001834b4170 = '\x01';
  }
  uVar4 = SkillbarSlot__NivelDoJogador__1807058d0(param_2,param_3,0);
  *(undefined4 *)(param_1 + 200) = uVar4;
  lVar5 = func_0x000180315580(TI_SkillWindowInfo);
  uVar8 = 0;
  SkillWindowInfo___ctor(lVar5,param_2,uVar4,0,0,0);
  if (lVar5 != 0) {
    cVar3 = func_0x0001804d5330(lVar5,0);
    if (cVar3 != '\0') {
      return;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    uVar6 = func_0x000180315580(TI_SlotAnimationManipulator);
    SlotAnimationManipulator___ctor__1807b2d00(uVar6,uVar7,param_1,0);
    *(undefined8 *)(param_1 + 0x98) = uVar6;
    func_0x000180314690(param_1 + 0x98,uVar6);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = func_0x000180315580(TI_SkillSlot);
    L2DraggableSlot___ctor__180771210(uVar6,uVar4,uVar7,5,1,uVar8 & 0xffffffffffffff00,0);
    *(undefined8 *)(param_1 + 0xa8) = uVar6;
    func_0x000180314690(param_1 + 0xa8,uVar6);
    plVar1 = *(longlong **)(param_1 + 0xa8);
    if (plVar1 != (longlong *)0x0) {
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TI_SkillSlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar1 + 200) + -8 +
           (ulonglong)*(byte *)(TI_SkillSlot + 0x130) * 8) != TI_SkillSlot)) {
        FUN_1803146d0(plVar1);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      SkillSlot__AssignSkill__180700cb0(plVar1,lVar5,0);
      plVar1 = *(longlong **)(param_1 + 0xa8);
      if (plVar1 != (longlong *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TI_L2ClickableSlot + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar1 + 200) + -8 +
             (ulonglong)*(byte *)(TI_L2ClickableSlot + 0x130) * 8) != TI_L2ClickableSlot)) {
          FUN_1803146d0(plVar1,TI_L2ClickableSlot);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        L2ClickableSlot__UnregisterClickableCallback__18076f2f0(plVar1,0);
        if (DAT_1834b3103 == '\0') {
          FUN_180315380(TI_PlayerSkill);
          DAT_1834b3103 = '\x01';
        }
        if (**(longlong **)(TI_PlayerSkill + 0xb8) != 0) {
          uVar7 = PlayerSkill__GetSkillInfo(**(longlong **)(TI_PlayerSkill + 0xb8),param_2,0);
          *(undefined8 *)(param_1 + 0x80) = uVar7;
          func_0x000180314690(param_1 + 0x80,uVar7);
          if ((*(longlong *)(param_1 + 0x80) != 0) &&
             (cVar3 = SkillInfo__get_IsSkillOnCooldown(*(undefined8 *)(param_1 + 0x80),0),
             cVar3 != '\0')) {
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
            cVar3 = PlayerShortcuts__IsSkillToggled__1804d2170
                              (**(longlong **)(TI_PlayerShortcuts + 0xb8),param_2,0);
            *(char *)(param_1 + 0x88) = cVar3;
            if (cVar3 == '\0') {
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
            if (*(longlong *)(param_1 + 0x40) != 0) {
              UnityEngine_UIElements_VisualElement__RemoveFromClassList
                        (*(longlong *)(param_1 + 0x40),LIT_"'empty'",0);
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

