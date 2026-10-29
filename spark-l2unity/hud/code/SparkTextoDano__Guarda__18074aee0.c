// SparkTextoDano__Guarda__18074aee0 @ 0x18074aee0

void SparkTextoDano__Guarda__18074aee0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float *pfVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  if (cRam00000001834b42a9 == '\0') {
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42a9 = '\x01';
  }
  fVar8 = (float)FUN_182436650(0);
  fVar9 = 3.4028235e+38;
  uVar6 = 0;
  uVar5 = 0;
  lVar4 = TI_SparkTextoDano;
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      func_0x000180315660();
      lVar4 = TI_SparkTextoDano;
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + 0x30);
    if (lVar3 == 0) goto code_r0x00018074b0da;
    uVar7 = uVar6;
    if (*(int *)(lVar3 + 0x18) <= (int)uVar5) break;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      func_0x000180315660();
      lVar4 = TI_SparkTextoDano;
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + 0x30);
    if (lVar3 == 0) goto code_r0x00018074b0da;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) goto code_r0x00018074b0d4;
    uVar7 = uVar5;
    if (*(int *)(lVar3 + 0x28 + (longlong)(int)uVar5 * 0x10) < 1) break;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      func_0x000180315660();
      lVar4 = TI_SparkTextoDano;
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + 0x30);
    if (lVar3 == 0) goto code_r0x00018074b0da;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) goto code_r0x00018074b0d4;
    pfVar1 = (float *)(lVar3 + 0x2c + (longlong)(int)uVar5 * 0x10);
    if (*pfVar1 <= fVar8 && fVar8 != *pfVar1) break;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      func_0x000180315660();
      lVar4 = TI_SparkTextoDano;
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + 0x30);
    if (lVar3 == 0) goto code_r0x00018074b0da;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) goto code_r0x00018074b0d4;
    pfVar1 = (float *)(lVar3 + 0x2c + (longlong)(int)uVar5 * 0x10);
    if (*pfVar1 <= fVar9 && fVar9 != *pfVar1) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        func_0x000180315660();
        lVar4 = TI_SparkTextoDano;
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + 0x30);
      if (lVar3 == 0) goto code_r0x00018074b0da;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto code_r0x00018074b0d4;
      fVar9 = *(float *)(lVar3 + 0x2c + (longlong)(int)uVar5 * 0x10);
      uVar6 = uVar5;
    }
    uVar5 = uVar5 + 1;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    func_0x000180315660();
    lVar4 = TI_SparkTextoDano;
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + 0x30);
  if (lVar4 == 0) {
code_r0x00018074b0da:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar7 < *(uint *)(lVar4 + 0x18)) {
    lVar3 = (longlong)(int)uVar7 + 2;
    *(float *)(lVar4 + 0xc + lVar3 * 0x10) = fVar8 + 4.0;
    *(undefined4 *)(lVar4 + lVar3 * 0x10) = param_1;
    *(undefined4 *)(lVar4 + 4 + lVar3 * 0x10) = param_2;
    *(undefined4 *)(lVar4 + 8 + lVar3 * 0x10) = param_3;
    return;
  }
code_r0x00018074b0d4:
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

