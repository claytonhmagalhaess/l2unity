// CharSelectWindow__DeletePressed__18078d800 @ 0x18078d800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharSelectWindow__DeletePressed__18078d800(void)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (cRam00000001834b31c4 == '\0') {
    FUN_180315380(TI_CharacterSelector);
    cRam00000001834b31c4 = '\x01';
  }
  lVar6 = **(longlong **)(TI_CharacterSelector + 0xb8);
  if (lVar6 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam00000001834b45fa == '\0') {
    FUN_180315380(TI_System.Action,0);
    FUN_180315380(MD_CharacterSelector._DeleteCharacter_b__31_0);
    FUN_180315380(MD_CharacterSelector.__c._DeleteCharacter_b__31_1);
    FUN_180315380(TI_CharacterSelector.<>c);
    FUN_180315380(LIT_"'$s1'");
    cRam00000001834b45fa = '\x01';
  }
  if (0 < *(int *)(lVar6 + 0x8c)) {
    return;
  }
  lVar3 = SystemMessageTable__get_Instance(0);
  if (((lVar3 != 0) && (lVar3 = SystemMessageTable__GetSystemMessage(lVar3,0xfec,0), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x18) != 0)) {
    uVar4 = System_String__Replace
                      (*(longlong *)(lVar3 + 0x18),LIT_"'$s1'",
                       *(undefined8 *)(lVar6 + 0x30),0);
    if (DAT_1834b30fd == '\0') {
      FUN_180315380(TI_L2ConfirmWindow);
      DAT_1834b30fd = '\x01';
    }
    lVar3 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
    uVar5 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(uVar5,lVar6,MD_CharacterSelector._DeleteCharacter_b__31_0,0);
    if (*(int *)(TI_CharacterSelector.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar6 = *(longlong *)(*(longlong *)(TI_CharacterSelector.<>c + 0xb8) + 0x10);
    if (lVar6 == 0) {
      if (*(int *)(TI_CharacterSelector.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar1 = **(undefined8 **)(TI_CharacterSelector.<>c + 0xb8);
      lVar6 = func_0x000180315580(TI_System.Action);
      FUN_1816a9c60(lVar6,uVar1,MD_CharacterSelector.__c._DeleteCharacter_b__31_1,0);
      *(longlong *)(*(longlong *)(TI_CharacterSelector.<>c + 0xb8) + 0x10) = lVar6;
      func_0x000180314690(*(longlong *)(TI_CharacterSelector.<>c + 0xb8) + 0x10,lVar6);
    }
    if (lVar3 != 0) {
      L2ConfirmWindow__ShowWindow__180770df0(lVar3,uVar4,uVar5,lVar6,0);
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

