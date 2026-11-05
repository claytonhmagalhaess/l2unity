// OptionsWindow__Desativa__180692d00 @ 0x180692d00

void OptionsWindow__Desativa__180692d00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (cRam00000001834b3e99 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Add);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass60_0._Desativa_b__0);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass60_0);
    cRam00000001834b3e99 = '\x01';
  }
  lVar5 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass60_0);
  func_0x0001803f01b0(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_2;
    func_0x000180314690(lVar5 + 0x10,param_2);
    *(undefined8 *)(lVar5 + 0x18) = param_3;
    func_0x000180314690(lVar5 + 0x18,param_3);
    lVar6 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(lVar6,lVar5,MD_OptionsWindow.__c__DisplayClass60_0._Desativa_b__0,0);
    lVar4 = MR_System.Collections.Generic.List<System.Action>.Add;
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (lVar5 != 0) {
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      lVar2 = *(longlong *)(lVar5 + 0x10);
      if (lVar2 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          if (*(uint *)(lVar2 + 0x18) <= uVar1) {
            FUN_1803155c0();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(longlong *)(lVar2 + 0x20 + (longlong)(int)uVar1 * 8) = lVar6;
          func_0x000180314690(lVar2 + 0x20 + (longlong)(int)uVar1 * 8,lVar6);
        }
        else {
          FUN_181645af0(lVar5,lVar6,
                        *(undefined8 *)(*(longlong *)(*(longlong *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180692e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
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

