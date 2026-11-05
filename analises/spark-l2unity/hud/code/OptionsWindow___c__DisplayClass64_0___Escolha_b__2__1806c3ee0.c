// OptionsWindow___c__DisplayClass64_0___Escolha_b__2__1806c3ee0 @ 0x1806c3ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass64_0___Escolha_b__2__1806c3ee0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if (cRam00000001834b3f59 == '\0') {
    FUN_180315380(LIT_"'-'");
    cRam00000001834b3f59 = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    lVar5 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
    ;
    lVar1 = *(longlong *)(param_1 + 0x20);
    if ((lVar1 != 0) &&
       (uVar4 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40)), lVar5 != 0)) {
      uVar6 = *(int *)(lVar5 + 0x18) - 1;
      uVar7 = 0;
      if (-1 < (int)uVar6) {
        uVar7 = uVar6;
      }
      if ((int)uVar4 < 0) {
        uVar7 = 0;
      }
      else if ((int)uVar4 <= (int)uVar7) {
        uVar7 = uVar4;
      }
      plVar2 = *(longlong **)(param_1 + 0x28);
      uVar8 = LIT_"'-'";
      if (*(longlong *)(lVar5 + 0x18) != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar7) {
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = *(undefined8 *)(lVar5 + 0x20 + (longlong)(int)uVar7 * 8);
      }
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001806c3f91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0xe48))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 0xe50));
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

