// FpsLimiter__Update__180558750 @ 0x180558750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FpsLimiter__Update__180558750(void)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (cRam00000001834b3864 == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3864 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = FUN_1823c9780(0);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14) < 1) {
    iVar6 = -1;
  }
  else {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    iVar6 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14);
  }
  if (cRam00000001834b3021 == '\0') {
    FUN_180315380(TI_GameManager);
    cRam00000001834b3021 = '\x01';
  }
  lVar1 = **(longlong **)(TI_GameManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(lVar1,0,0);
  if (cVar4 == '\0') {
code_r0x00018055887a:
    if (cVar3 != '\0') {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660(TI_SparkOpcoes);
      }
      uVar7 = (uint)(*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x10) != '\0');
      goto code_r0x0001805588b3;
    }
  }
  else {
    if (lVar1 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)(lVar1 + 0x39) == '\a') goto code_r0x00018055887a;
    if (0x3b < iVar6 - 1U) {
      iVar6 = 0x3c;
      uVar7 = 0;
      goto code_r0x0001805588b3;
    }
  }
  uVar7 = 0;
code_r0x0001805588b3:
  uVar5 = FUN_1823fcfb0(0);
  if (uVar5 != uVar7) {
    FUN_1823fd240(uVar7,0);
  }
  if (cVar3 == '\0') {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x18) < 1) {
      iVar6 = 0x1e;
    }
    else {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      iVar6 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x18);
    }
  }
  if (cRam00000001834b3865 == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    cRam00000001834b3865 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (pcRam00000001834bf700 == (code *)0x0) {
    pcRam00000001834bf700 = (code *)FUN_180315630(&UNK_1829325a0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001823ca01e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000001834bf700)(iVar6);
  return;
}

