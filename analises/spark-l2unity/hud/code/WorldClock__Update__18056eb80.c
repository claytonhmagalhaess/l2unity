// WorldClock__Update__18056eb80 @ 0x18056eb80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WorldClock__Update__18056eb80(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uStackX_8;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  
  if (cRam00000001834b38ad == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b38ad = '\x01';
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    if (cRam00000001834b38ae == '\0') {
      FUN_180315380(TI_System.TimeSpan);
      FUN_180315380(LIT_"'hh\\\\:mm\\\\:ss'");
      cRam00000001834b38ae = '\x01';
    }
    fVar6 = *(float *)(param_1 + 0x30);
    uStackX_8 = 0;
    fVar5 = (float)FUN_182436420(0);
    fVar5 = fVar5 + fVar6;
    *(float *)(param_1 + 0x30) = fVar5;
    if (*(float *)(param_1 + 0x20) * 60.0 <= fVar5) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    fVar6 = *(float *)(param_1 + 0x30) / (*(float *)(param_1 + 0x20) * 60.0);
    *(float *)(param_1 + 0x50) = fVar6;
    iVar3 = (int)(fVar6 * 86400.0);
    if (*(int *)(TI_System.TimeSpan + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStack_28 = 0;
    System_TimeSpan___ctor(&uStackX_8,iVar3 / 0xe10,(iVar3 % 0xe10) / 0x3c,iVar3 % 0x3c);
    uVar2 = System_TimeSpan__ToString(&uStackX_8,LIT_"'hh\\\\:mm\\\\:ss'",0);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    func_0x000180314690(param_1 + 0x28,uVar2);
  }
  func_0x00018056e550(param_1,param_1 + 0x50,0);
  WorldClock__CalculateSunPhaseRatio(param_1,param_1 + 0x50,0);
  uVar4 = *(undefined4 *)(param_1 + 0x50);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  fVar6 = (float)SparkOpcoes__RazaoDoCeu__1804a5f10(uVar4,0);
  if (fVar6 != *(float *)(param_1 + 0x50)) {
    *(float *)(param_1 + 0x6c) = fVar6;
    func_0x00018056e550(param_1,param_1 + 0x6c,0);
    puVar1 = (undefined8 *)(param_1 + 0x6c);
    uStack_14 = *(undefined8 *)(param_1 + 0x80);
    uStack_28 = *puVar1;
    uStack_20 = *(undefined4 *)(param_1 + 0x74);
    uStack_1c = (undefined4)*(undefined8 *)(param_1 + 0x78);
    uStack_18 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
    uVar4 = func_0x00018056e5f0(&uStack_28,*(undefined4 *)(param_1 + 0x40),
                                *(undefined4 *)(param_1 + 0x44),0);
    uStack_28 = *puVar1;
    uStack_20 = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)puVar1 = *(undefined4 *)puVar1;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x74) = uStack_20;
    *(undefined4 *)(param_1 + 0x78) = uVar4;
    uStack_1c = *(undefined4 *)(param_1 + 0x78);
    uStack_18 = *(undefined4 *)(param_1 + 0x7c);
    uStack_14 = *(undefined8 *)(param_1 + 0x80);
    uVar4 = func_0x00018056e5f0(&uStack_28,*(undefined4 *)(param_1 + 0x44),
                                *(undefined4 *)(param_1 + 0x48),0);
    *(undefined4 *)(param_1 + 0x7c) = uVar4;
    uStack_28 = *puVar1;
    uStack_1c = *(undefined4 *)(param_1 + 0x78);
    uStack_18 = *(undefined4 *)(param_1 + 0x7c);
    uStack_14 = *(undefined8 *)(param_1 + 0x80);
    uStack_20 = (undefined4)*(undefined8 *)(param_1 + 0x74);
    uVar4 = func_0x00018056e5f0(&uStack_28,*(undefined4 *)(param_1 + 0x48),
                                *(undefined4 *)(param_1 + 0x4c),0);
    *(undefined4 *)(param_1 + 0x80) = uVar4;
    uStack_28 = *puVar1;
    uStack_1c = *(undefined4 *)(param_1 + 0x78);
    uStack_18 = *(undefined4 *)(param_1 + 0x7c);
    uStack_14 = *(undefined8 *)(param_1 + 0x80);
    uStack_20 = (undefined4)*(undefined8 *)(param_1 + 0x74);
    uVar4 = func_0x00018056e5f0(&uStack_28,0xbf7d70a4,*(undefined4 *)(param_1 + 0x40),0);
    *(undefined4 *)(param_1 + 0x84) = uVar4;
    return;
  }
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x5c);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 100);
  return;
}

