// OptionsWindow___c___Video_b__37_83__1806bdd40 @ 0x1806bdd40

longlong OptionsWindow___c___Video_b__37_83__1806bdd40(void)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  
  if (cRam00000001834b3ef4 == '\0') {
    FUN_180315380(MR_System.Array.ConvertAll<int,string>);
    FUN_180315380(TI_System.Converter<int,string>);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(MD_OptionsWindow.__c._Video_b__37_109);
    FUN_180315380(TI_OptionsWindow.<>c);
    cRam00000001834b3ef4 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  lVar6 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x150);
  if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x240);
  if (lVar3 == 0) {
    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar5 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
    lVar3 = func_0x000180315580(TI_System.Converter<int,string>);
    FUN_18116ac60(lVar3,uVar5,MD_OptionsWindow.__c._Video_b__37_109,0);
    *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x240) = lVar3;
    func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x240,lVar3);
  }
  lVar4 = MR_System.Array.ConvertAll<int,string>;
  if (*(longlong *)(MR_System.Array.ConvertAll<int,string> + 0x38) == 0) {
    FUN_180312fc0(MR_System.Array.ConvertAll<int,string>);
  }
  if (lVar6 == 0) {
    uVar5 = func_0x0001803153a0(TI_System.ArgumentNullException);
    uVar5 = func_0x000180315580(uVar5);
    uVar7 = func_0x0001803153a0(LIT_"'array'");
    System_ArgumentNullException___ctor(uVar5,uVar7,0);
    FUN_180315590(uVar5,lVar4);
    pcVar2 = (code *)swi(3);
    lVar6 = (*pcVar2)();
    return lVar6;
  }
  if (lVar3 == 0) {
    uVar5 = func_0x0001803153a0(TI_System.ArgumentNullException);
    uVar5 = func_0x000180315580(uVar5);
    uVar7 = func_0x0001803153a0(LIT_"'converter'");
    System_ArgumentNullException___ctor(uVar5,uVar7,0);
    FUN_180315590(uVar5,lVar4);
    pcVar2 = (code *)swi(3);
    lVar6 = (*pcVar2)();
    return lVar6;
  }
  uVar1 = *(undefined4 *)(lVar6 + 0x18);
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_180312f40(lVar4);
  }
  lVar4 = func_0x000180314710(lVar4,uVar1);
  uVar8 = 0;
  while( true ) {
    if (*(int *)(lVar6 + 0x18) <= (int)uVar8) {
      return lVar4;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
    uVar5 = (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),
                       *(undefined4 *)(lVar6 + 0x20 + (longlong)(int)uVar8 * 4),
                       *(undefined8 *)(lVar3 + 0x28));
    if (lVar4 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      lVar6 = (*pcVar2)();
      return lVar6;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar8) break;
    *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 8) = uVar5;
    func_0x000180314690(lVar4 + ((longlong)(int)uVar8 + 4) * 8,uVar5);
    uVar8 = uVar8 + 1;
  }
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  lVar6 = (*pcVar2)();
  return lVar6;
}

