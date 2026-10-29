// SparkFps__Update__18049ae80 @ 0x18049ae80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkFps__Update__18049ae80(longlong param_1)

{
  float fVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  char acStackX_18 [8];
  undefined1 uStackX_20;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 *puStack_48;
  
  if (cRam00000001834b328c == '\0') {
    FUN_180315380(TI_SparkFps);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_System.Diagnostics.Stopwatch);
    cRam00000001834b328c = '\x01';
  }
  uStack_70 = 0;
  acStackX_18[0] = '\0';
  SparkFps__PedePing(param_1,0);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa8);
  cVar3 = *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa9);
  if ((cVar2 == '\0') && (cVar3 == '\0')) {
    return;
  }
  bVar5 = false;
  uStackX_20 = 0;
  if (cVar2 != '\0') {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    fVar1 = *(float *)(param_1 + 0x2c);
    fVar9 = (float)FUN_182436680(0);
    *(float *)(param_1 + 0x2c) = fVar1 + fVar9;
    if (0.5 <= fVar1 + fVar9) {
      uVar6 = FUN_1803fb530((float)*(int *)(param_1 + 0x28) / (fVar1 + fVar9),0);
      *(undefined4 *)(param_1 + 0x30) = uVar6;
      *(undefined8 *)(param_1 + 0x28) = 0;
      bVar5 = true;
      uStackX_20 = 1;
    }
  }
  if (cVar3 != '\0') {
    lStack_68 = 0;
    if (*(int *)(TI_SparkFps + 0xe4) == 0) {
      func_0x000180315660(TI_SparkFps);
    }
    uStack_70 = *(undefined8 *)(*(longlong *)(TI_SparkFps + 0xb8) + 8);
    uStack_58 = 0;
    pcStack_50 = acStackX_18;
    puStack_48 = &uStack_70;
    System_Threading_Monitor__Enter(uStack_70,acStackX_18,0);
    if (*(int *)(TI_SparkFps + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = *(longlong *)(TI_SparkFps + 0xb8);
    iVar8 = *(int *)(lVar4 + 0x24);
    cVar2 = *(char *)(lVar4 + 0x20);
    lVar4 = *(longlong *)(lVar4 + 0x18);
    lStack_68 = lVar4;
    if (acStackX_18[0] != '\0') {
      func_0x0001819153a0(uStack_70,0);
    }
    if (cVar2 == '\0') {
code_r0x00018049b0ff:
      if (iVar8 < 0) goto code_r0x00018049b103;
    }
    else {
      if (*(int *)(TI_System.Diagnostics.Stopwatch + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar7 = func_0x000181937eb0(0);
      if ((double)(lVar7 - lVar4) / (double)**(longlong **)(TI_System.Diagnostics.Stopwatch + 0xb8) <= 5.0)
      goto code_r0x00018049b0ff;
code_r0x00018049b103:
      iVar8 = -1;
    }
    if (iVar8 != *(int *)(param_1 + 0x38)) {
      *(int *)(param_1 + 0x38) = iVar8;
      goto code_r0x00018049b117;
    }
  }
  if (!bVar5) {
    return;
  }
code_r0x00018049b117:
  SparkFps__Escreve(param_1,0);
  return;
}

