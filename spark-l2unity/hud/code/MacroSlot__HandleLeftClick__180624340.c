// MacroSlot__HandleLeftClick__180624340 @ 0x180624340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MacroSlot__HandleLeftClick__180624340(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (cRam00000001834b3d0d == '\0') {
    FUN_180315380(TI_SparkMacros);
    cRam00000001834b3d0d = '\x01';
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkMacros__Executa__1804745f0(uVar1,0);
    if ((*(int *)(param_1 + 0x18) == 0xc) && (lVar2 = *(longlong *)(param_1 + 0x88), lVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001806243be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),*(undefined4 *)(param_1 + 0x80),
                 *(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}

