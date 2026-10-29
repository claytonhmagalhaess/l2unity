// SparkTextoDano__EhServo__180747b30 @ 0x180747b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool SparkTextoDano__EhServo__180747b30(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  if (cRam00000001834b42ad == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkPet);
    cRam00000001834b42ad = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(param_1,0,0);
  if (cVar3 != '\0') {
    if (param_1 == 0) {
code_r0x000180747c3a:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      if (*(int *)(TI_SparkPet + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (DAT_1834b3016 == '\0') {
        FUN_180315380(TI_SparkPet);
        DAT_1834b3016 = '\x01';
      }
      if (*(int *)(TI_SparkPet + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (**(longlong **)(TI_SparkPet + 0xb8) != 0) {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x14);
          if (*(int *)(TI_SparkPet + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar5 = FUN_18043b7c0(0);
          if (lVar5 != 0) {
            return iVar1 == *(int *)(lVar5 + 0x14);
          }
        }
        goto code_r0x000180747c3a;
      }
    }
  }
  return false;
}

