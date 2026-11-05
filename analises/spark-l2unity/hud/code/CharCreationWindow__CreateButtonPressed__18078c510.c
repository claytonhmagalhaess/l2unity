// CharCreationWindow__CreateButtonPressed__18078c510 @ 0x18078c510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharCreationWindow__CreateButtonPressed__18078c510(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (cRam00000001834b4497 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_CharCreationWindow.__c._CreateButtonPressed_b__20_0);
    FUN_180315380(TI_CharCreationWindow.<>c);
    cRam00000001834b4497 = '\x01';
  }
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if ((plVar1 != (longlong *)0x0) &&
     (lVar3 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80)), lVar3 != 0))
  {
    if (*(int *)(lVar3 + 0x10) == 0) {
      if (DAT_1834b30fd == '\0') {
        FUN_180315380(TI_L2ConfirmWindow);
        DAT_1834b30fd = '\x01';
      }
      lVar3 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
      if (*(int *)(TI_CharCreationWindow.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = *(longlong *)(*(longlong *)(TI_CharCreationWindow.<>c + 0xb8) + 0x28);
      if (lVar5 == 0) {
        if (*(int *)(TI_CharCreationWindow.<>c + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar4 = **(undefined8 **)(TI_CharCreationWindow.<>c + 0xb8);
        lVar5 = func_0x000180315580(TI_System.Action);
        FUN_1816a9c60(lVar5,uVar4,MD_CharCreationWindow.__c._CreateButtonPressed_b__20_0,0);
        *(longlong *)(*(longlong *)(TI_CharCreationWindow.<>c + 0xb8) + 0x28) = lVar5;
        func_0x000180314690(*(longlong *)(TI_CharCreationWindow.<>c + 0xb8) + 0x28,lVar5);
      }
      if (lVar3 != 0) {
        L2ConfirmWindow__ShowWindow__180770e10(lVar3,0xcd,lVar5,0,0);
        return;
      }
    }
    else {
      if (cRam00000001834b31c8 == '\0') {
        FUN_180315380(TI_CharacterCreator);
        cRam00000001834b31c8 = '\x01';
      }
      if (**(longlong **)(TI_CharacterCreator + 0xb8) != 0) {
        if (*(int *)(**(longlong **)(TI_CharacterCreator + 0xb8) + 0x28) == -1) {
          return;
        }
        if (cRam00000001834b31c8 == '\0') {
          FUN_180315380(TI_CharacterCreator);
          cRam00000001834b31c8 = '\x01';
        }
        plVar1 = *(longlong **)(param_1 + 0xc0);
        if (plVar1 != (longlong *)0x0) {
          lVar3 = **(longlong **)(TI_CharacterCreator + 0xb8);
          uVar4 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80));
          if ((*(longlong *)(param_1 + 0xb0) != 0) && (lVar3 != 0)) {
            CharacterCreator__ValidateCharacterCreation
                      (lVar3,uVar4,*(int *)(*(longlong *)(param_1 + 0xb0) + 0x70) == 1,0);
            return;
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

