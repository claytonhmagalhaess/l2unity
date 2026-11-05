// SparkTextoDano__Consome__1807478a0 @ 0x1807478a0

ulonglong SparkTextoDano__Consome__1807478a0(int param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  
  if (cRam00000001834b42aa == '\0') {
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42aa = '\x01';
  }
  fVar7 = (float)FUN_182436650(0);
  uVar6 = 0;
  lVar5 = TI_SparkTextoDano;
  do {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      func_0x000180315660();
      lVar5 = TI_SparkTextoDano;
    }
    lVar2 = *(longlong *)(*(ulonglong *)(lVar5 + 0xb8) + 0x30);
    if (lVar2 == 0) goto code_r0x000180747a6d;
    if (*(int *)(lVar2 + 0x18) <= (int)uVar6) {
      return *(ulonglong *)(lVar5 + 0xb8) & 0xffffffffffffff00;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      func_0x000180315660();
      lVar5 = TI_SparkTextoDano;
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 0x30);
    if (lVar2 == 0) goto code_r0x000180747a6d;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_r0x000180747a73;
    if (0 < *(int *)(lVar2 + 0x28 + (longlong)(int)uVar6 * 0x10)) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        func_0x000180315660();
        lVar5 = TI_SparkTextoDano;
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 0x30);
      if (lVar2 == 0) goto code_r0x000180747a6d;
      if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_r0x000180747a73;
      if (fVar7 <= *(float *)(lVar2 + 0x2c + (longlong)(int)uVar6 * 0x10)) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          func_0x000180315660();
          lVar5 = TI_SparkTextoDano;
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 0x30);
        if (lVar2 == 0) goto code_r0x000180747a6d;
        if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_r0x000180747a73;
        if (*(int *)(lVar2 + ((longlong)(int)uVar6 + 2) * 0x10) == param_1) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            func_0x000180315660();
            lVar5 = TI_SparkTextoDano;
          }
          lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 0x30);
          if (lVar2 == 0) goto code_r0x000180747a6d;
          if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_r0x000180747a73;
          if (*(int *)(lVar2 + 0x24 + (longlong)(int)uVar6 * 0x10) == param_2) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              func_0x000180315660();
              lVar5 = TI_SparkTextoDano;
            }
            lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 0x30);
            if (lVar5 != 0) {
              if (uVar6 < *(uint *)(lVar5 + 0x18)) {
                piVar1 = (int *)((longlong)(int)uVar6 * 0x10 + 0x28 + lVar5);
                *piVar1 = *piVar1 + -1;
                return CONCAT71((int7)((ulonglong)((longlong)(int)uVar6 * 0x10) >> 8),1);
              }
code_r0x000180747a73:
              FUN_1803155c0();
              pcVar3 = (code *)swi(3);
              uVar4 = (*pcVar3)();
              return uVar4;
            }
code_r0x000180747a6d:
            FUN_1803155d0();
            pcVar3 = (code *)swi(3);
            uVar4 = (*pcVar3)();
            return uVar4;
          }
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

