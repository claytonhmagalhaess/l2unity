// FpsLimiter__Start__180558700 @ 0x180558700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FpsLimiter__Start__180558700
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (cRam00000001834b3865 == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    cRam00000001834b3865 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (pcRam00000001834bf700 == (code *)0x0) {
    pcRam00000001834bf700 = (code *)FUN_180315630(&UNK_1829325a0,0,param_3,param_4,unaff_RBX);
  }
                    /* WARNING: Could not recover jumptable at 0x0001823ca01e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000001834bf700)(uVar1);
  return;
}

