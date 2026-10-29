// OptionsWindow___c__DisplayClass37_0___Video_b__38__1806bf940 @ 0x1806bf940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass37_0___Video_b__38__1806bf940(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3f34 == '\0') {
    FUN_180315380(TI_SparkApiGrafica);
    FUN_180315380(LIT_"'\\n'");
    FUN_180315380(LIT_"'. A new choice is used on the next start (launcher or th...");
    FUN_180315380(LIT_"'Running: '");
    FUN_180315380(LIT_"''");
    cRam00000001834b3f34 = '\x01';
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar5 = SparkApiGrafica__get_NomeAtual(0);
  if (cRam00000001834b32c7 == '\0') {
    FUN_180315380(TI_SparkApiGrafica);
    cRam00000001834b32c7 = '\x01';
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660(TI_SparkApiGrafica);
  }
  uVar4 = LIT_"'Running: '";
  uVar3 = LIT_"'. A new choice is used on the next start (launcher or th...";
  uVar6 = LIT_"''";
  if (*(longlong *)(*(longlong *)(TI_SparkApiGrafica + 0xb8) + 0x18) != 0) {
    if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
      func_0x000180315660(TI_SparkApiGrafica);
    }
    if (cRam00000001834b32c7 == '\0') {
      FUN_180315380(TI_SparkApiGrafica);
      cRam00000001834b32c7 = '\x01';
    }
    if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
      func_0x000180315660(TI_SparkApiGrafica);
    }
    uVar6 = System_String__Concat
                      (LIT_"'\\n'",
                       *(undefined8 *)(*(longlong *)(TI_SparkApiGrafica + 0xb8) + 0x18),0);
  }
  uVar5 = System_String__Concat(uVar4,uVar5,uVar3,uVar6,0);
  if (plVar1 == (longlong *)0x0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001806bfabf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe48))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 0xe50));
  return;
}

