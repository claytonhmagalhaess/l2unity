// LoginWindow__ExitButtonPressed__180543800 @ 0x180543800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__ExitButtonPressed__180543800(void)

{
  if (DAT_1834b3495 == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_SparkSaida);
    DAT_1834b3495 = '\x01';
  }
  **(undefined1 **)(TI_SparkSaida + 0xb8) = 1;
  if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834bf6b0 == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    DAT_1834bf6b0 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (_DAT_1834bf6a8 == (code *)0x0) {
    _DAT_1834bf6a8 = (code *)FUN_180315630(&UNK_182932420);
  }
                    /* WARNING: Could not recover jumptable at 0x0001823c928a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1834bf6a8)(0);
  return;
}

