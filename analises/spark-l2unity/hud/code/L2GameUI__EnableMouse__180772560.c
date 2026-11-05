// L2GameUI__EnableMouse__180772560 @ 0x180772560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool L2GameUI__EnableMouse__180772560(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 in_AL;
  int iVar3;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x78) = 1;
    uVar1 = *(undefined4 *)(param_1 + 0x74);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    if (_DAT_1834b4538 == (code *)0x0) {
      uStack_30 = 10;
      puStack_38 = &UNK_18285b310;
      uStack_20 = 0xc;
      puStack_28 = &UNK_18285b750;
      uStack_18 = 0;
      uStack_14 = 2;
      uStack_10 = 8;
      uStack_c = 0;
      _DAT_1834b4538 = (code *)func_0x000180315620(&puStack_38,uVar1,0);
    }
    iVar3 = (*_DAT_1834b4538)(uVar2,uVar1);
    return iVar3 != 0;
  }
  return (bool)in_AL;
}

