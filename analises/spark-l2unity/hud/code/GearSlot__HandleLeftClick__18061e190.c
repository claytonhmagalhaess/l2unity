// GearSlot__HandleLeftClick__18061e190 @ 0x18061e190

void GearSlot__HandleLeftClick__18061e190(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  if (cRam00000001834b30fc == '\0') {
    FUN_180315380(TI_InventoryWindow);
    cRam00000001834b30fc = '\x01';
  }
  if ((**(longlong **)(TI_InventoryWindow + 0xb8) != 0) &&
     (plVar1 = *(longlong **)(**(longlong **)(TI_InventoryWindow + 0xb8) + 0xd0),
     plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00018061e1ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x198))
              (plVar1,*(undefined4 *)(param_1 + 0x14),*(undefined8 *)(*plVar1 + 0x1a0));
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

