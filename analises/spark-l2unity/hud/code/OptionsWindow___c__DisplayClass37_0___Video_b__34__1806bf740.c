// OptionsWindow___c__DisplayClass37_0___Video_b__34__1806bf740 @ 0x1806bf740

void OptionsWindow___c__DisplayClass37_0___Video_b__34__1806bf740(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b3f33 == '\0') {
    FUN_180315380(TI_SparkApiGrafica);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkResolucao);
    FUN_180315380(LIT_"'upscaled by FSR 1.0'");
    FUN_180315380(LIT_"'). The interface always stays sharp.'");
    FUN_180315380(LIT_"'no native dynamic resolution in '");
    FUN_180315380(LIT_"'. The interface always stays sharp.'");
    FUN_180315380(LIT_"'Uses the native dynamic resolution of '");
    FUN_180315380(LIT_"'Adjusts the Render Scale ('");
    FUN_180315380(LIT_"'Lowers the 3D resolution only when needed to hold the FP...");
    cRam00000001834b3f33 = '\x01';
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  uVar4 = LIT_"'Lowers the 3D resolution only when needed to hold the FP...";
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x54) != 0) {
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = SparkResolucao__get_ApiTemNativa(0);
    if (cVar3 != '\0') {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x4c) != 1) {
        if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar4 = SparkApiGrafica__get_NomeAtual(0);
        uVar4 = System_String__Concat(LIT_"'Uses the native dynamic resolution of '",uVar4,LIT_"'. The interface always stays sharp.'",0);
        goto code_r0x0001806bf90f;
      }
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = LIT_"'Adjusts the Render Scale ('";
    uVar5 = LIT_"'upscaled by FSR 1.0'";
    if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x4c) != 1) {
      if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = SparkApiGrafica__get_NomeAtual(0);
      uVar5 = System_String__Concat(LIT_"'no native dynamic resolution in '",uVar5,0);
    }
    uVar4 = System_String__Concat(uVar4,uVar5,LIT_"'). The interface always stays sharp.'",0);
  }
code_r0x0001806bf90f:
  if (plVar1 == (longlong *)0x0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001806bf926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe48))(plVar1,uVar4,*(undefined8 *)(*plVar1 + 0xe50));
  return;
}

