// SparkTextoDano__MinhaSkillEm__18074c520 @ 0x18074c520

ulonglong SparkTextoDano__MinhaSkillEm__18074c520(int param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  
  if (cRam00000001834b42ab == '\0') {
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42ab = '\x01';
  }
  fVar6 = (float)FUN_182436650(0);
  uVar5 = 0;
  lVar4 = TI_SparkTextoDano;
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      func_0x000180315660();
      lVar4 = TI_SparkTextoDano;
    }
    lVar1 = *(longlong *)(*(ulonglong *)(lVar4 + 0xb8) + 0x50);
    if (lVar1 == 0) break;
    if (*(int *)(lVar1 + 0x18) <= (int)uVar5) {
      return *(ulonglong *)(lVar4 + 0xb8) & 0xffffffffffffff00;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      func_0x000180315660();
      lVar4 = TI_SparkTextoDano;
    }
    lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + 0x50);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= uVar5) {
code_r0x00018074c638:
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
    if (*(int *)(lVar1 + 0x20 + (longlong)(int)uVar5 * 4) == param_1) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        func_0x000180315660();
        lVar4 = TI_SparkTextoDano;
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + 0x58);
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar5) goto code_r0x00018074c638;
      if (fVar6 - *(float *)(lVar1 + 0x20 + (longlong)(int)uVar5 * 4) <= 2.0) {
        return CONCAT71((int7)(int3)(uVar5 >> 8),1);
      }
    }
    uVar5 = uVar5 + 1;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}

