// SkillbarWindow___ctor__1807089e0 @ 0x1807089e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarWindow___ctor__1807089e0
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBX;
  
  *(undefined1 *)(param_1 + 0x89) = 1;
  if (DAT_1834b440e == '\0') {
    FUN_180315380(TI_L2Window);
    DAT_1834b440e = '\x01';
  }
  if (*(int *)(TI_L2Window + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834c10ac == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0,param_3,param_4,unaff_RBX);
    DAT_1834c10ac = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  return;
}

