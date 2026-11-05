// OptionsWindow___c__DisplayClass52_0___CaixaDeTecla_b__3__1806c2330 @ 0x1806c2330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass52_0___CaixaDeTecla_b__3__1806c2330(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  if (cRam00000001834b3f51 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'\" is also used by: '");
    FUN_180315380(LIT_"'\"'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'.'");
    cRam00000001834b3f51 = '\x01';
  }
  if (cRam00000001834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    cRam00000001834b31c0 = '\x01';
  }
  uVar8 = **(undefined8 **)(TI_L2GameUI + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if (cVar5 != '\0') {
    if (cRam00000001834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      cRam00000001834b31c0 = '\x01';
    }
    if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) goto code_r0x0001806c25f3;
    *(undefined1 *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x88) = 0;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar6 = SparkTeclas__QuemUsa(uVar8,uVar1,uVar2,0);
  uVar8 = LIT_"''";
  if (lVar6 != 0) {
    lVar7 = func_0x000180314710(TI_string__,5);
    if (lVar7 == 0) goto code_r0x0001806c25f3;
    if (*(int *)(lVar7 + 0x18) == 0) {
code_r0x0001806c25f9:
      FUN_1803155c0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined8 *)(lVar7 + 0x20) = LIT_"'\"'";
    func_0x000180314690(lVar7 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar8 = SparkTeclas__Texto(uVar8,uVar1,0);
    if (*(uint *)(lVar7 + 0x18) < 2) goto code_r0x0001806c25f9;
    *(undefined8 *)(lVar7 + 0x28) = uVar8;
    func_0x000180314690(lVar7 + 0x28,uVar8);
    if (*(uint *)(lVar7 + 0x18) < 3) goto code_r0x0001806c25f9;
    *(undefined8 *)(lVar7 + 0x30) = LIT_"'\" is also used by: '";
    func_0x000180314690(lVar7 + 0x30);
    if (*(uint *)(lVar7 + 0x18) < 4) goto code_r0x0001806c25f9;
    *(longlong *)(lVar7 + 0x38) = lVar6;
    func_0x000180314690(lVar7 + 0x38,lVar6);
    if (*(uint *)(lVar7 + 0x18) < 5) goto code_r0x0001806c25f9;
    *(undefined8 *)(lVar7 + 0x40) = LIT_"'.'";
    func_0x000180314690(lVar7 + 0x40);
    uVar8 = System_String__Concat(lVar7,0);
  }
  if (cRam00000001834b32cb == '\0') {
    FUN_180315380(TI_SkillbarWindow);
    cRam00000001834b32cb = '\x01';
  }
  if (**(longlong **)(TI_SkillbarWindow + 0xb8) != 0) {
    SkillbarWindow__AtualizaTeclas(**(longlong **)(TI_SkillbarWindow + 0xb8),0);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    OptionsWindow__MostraTeclas(*(longlong *)(param_1 + 0x38),0);
    if ((*(longlong *)(param_1 + 0x38) != 0) &&
       (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0xc0), plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001806c25ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0xe48))(plVar3,uVar8,*(undefined8 *)(*plVar3 + 0xe50));
      return;
    }
  }
code_r0x0001806c25f3:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

