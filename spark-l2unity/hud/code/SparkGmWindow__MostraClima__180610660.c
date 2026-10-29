// SparkGmWindow__MostraClima__180610660 @ 0x180610660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkGmWindow__MostraClima__180610660(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3c1c == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Weather on your screen: '");
    FUN_180315380(LIT_"'.'");
    cRam00000001834b3c1c = '\x01';
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar2 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x128);
    if (lVar2 != 0) {
      uVar1 = *(uint *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x120);
      if ((((int)uVar1 < 0) || (uVar5 = *(int *)(lVar2 + 0x18) - 1, (int)uVar1 <= (int)uVar5)) &&
         (uVar5 = uVar1, (int)uVar1 < 0)) {
        uVar5 = 0;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
        FUN_1803155c0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)(param_1 + 0x170);
      uVar6 = System_String__Concat
                        (LIT_"'Weather on your screen: '",
                         *(undefined8 *)(lVar2 + 0x20 + (longlong)(int)uVar5 * 8),LIT_"'.'",0);
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018061073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0xe48))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0xe50));
        return;
      }
    }
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

