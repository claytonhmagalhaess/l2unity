// SparkGmWindow__MostraCeu__180610530 @ 0x180610530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkGmWindow__MostraCeu__180610530(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (cRam00000001834b3c1d == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"' - fixed; the game time keeps running.'");
    FUN_180315380(LIT_"'Sky on your screen: '");
    FUN_180315380(LIT_"' - follows the game time.'");
    cRam00000001834b3c1d = '\x01';
  }
  if (*(longlong *)(param_1 + 0x168) == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x168);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x108);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x100);
    if ((((int)uVar1 < 0) || (uVar6 = *(int *)(lVar3 + 0x18) - 1, (int)uVar1 <= (int)uVar6)) &&
       (uVar6 = uVar1, (int)uVar1 < 0)) {
      uVar6 = 0;
    }
    if (uVar6 < *(uint *)(lVar3 + 0x18)) {
      uVar5 = LIT_"' - follows the game time.'";
      if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x100) != 0) {
        uVar5 = LIT_"' - fixed; the game time keeps running.'";
      }
      uVar5 = System_String__Concat
                        (LIT_"'Sky on your screen: '",
                         *(undefined8 *)((longlong)(int)uVar6 * 8 + 0x20 + lVar3),uVar5);
      lVar3 = *plVar2;
                    /* WARNING: Could not recover jumptable at 0x00018061063c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0xe48))(plVar2,uVar5,*(undefined8 *)(lVar3 + 0xe50));
      return;
    }
    FUN_1803155c0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

