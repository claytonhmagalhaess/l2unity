// L2SlotManager__IsValidDrag__180792b80 @ 0x180792b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool L2SlotManager__IsValidDrag__180792b80(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    return true;
  }
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
    return *(char *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x38) == '\0';
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}

