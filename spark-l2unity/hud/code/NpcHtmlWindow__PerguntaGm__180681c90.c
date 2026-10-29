// NpcHtmlWindow__PerguntaGm__180681c90 @ 0x180681c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__PerguntaGm__180681c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if (cRam00000001834b3e46 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_NpcHtmlWindow.__c._PerguntaGm_b__29_1);
    FUN_180315380(MD_NpcHtmlWindow.__c__DisplayClass29_0._PerguntaGm_b__0);
    FUN_180315380(TI_NpcHtmlWindow.<>c__DisplayClass29_0);
    FUN_180315380(TI_NpcHtmlWindow.<>c);
    FUN_180315380(LIT_"'?'");
    FUN_180315380(LIT_"'Run GM command: '");
    cRam00000001834b3e46 = '\x01';
  }
  lVar4 = func_0x000180315580(TI_NpcHtmlWindow.<>c__DisplayClass29_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = param_1;
    func_0x000180314690(lVar4 + 0x18,param_1);
    *(undefined8 *)(lVar4 + 0x20) = param_2;
    func_0x000180314690(lVar4 + 0x20,param_2);
    *(undefined8 *)(lVar4 + 0x28) = param_3;
    func_0x000180314690(lVar4 + 0x28,param_3);
    uVar7 = FUN_1824366b0(0);
    *(undefined4 *)(lVar4 + 0x10) = uVar7;
    if (DAT_1834b30fd == '\0') {
      FUN_180315380(TI_L2ConfirmWindow);
      DAT_1834b30fd = '\x01';
    }
    lVar1 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
    uVar5 = System_String__Concat
                      (LIT_"'Run GM command: '",*(undefined8 *)(lVar4 + 0x28),LIT_"'?'",0);
    uVar6 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(uVar6,lVar4,MD_NpcHtmlWindow.__c__DisplayClass29_0._PerguntaGm_b__0,0);
    if (*(int *)(TI_NpcHtmlWindow.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = *(longlong *)(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x10);
    if (lVar4 == 0) {
      if (*(int *)(TI_NpcHtmlWindow.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar2 = **(undefined8 **)(TI_NpcHtmlWindow.<>c + 0xb8);
      lVar4 = func_0x000180315580(TI_System.Action);
      FUN_1816a9c60(lVar4,uVar2,MD_NpcHtmlWindow.__c._PerguntaGm_b__29_1,0);
      *(longlong *)(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x10) = lVar4;
      func_0x000180314690(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x10,lVar4);
    }
    if (lVar1 != 0) {
      L2ConfirmWindow__ShowWindow__180770df0(lVar1,uVar5,uVar6,lVar4,0);
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

