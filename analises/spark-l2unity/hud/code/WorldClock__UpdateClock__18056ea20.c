// WorldClock__UpdateClock__18056ea20 @ 0x18056ea20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WorldClock__UpdateClock__18056ea20(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined8 auStackX_8 [4];
  
  if (cRam00000001834b38ae == '\0') {
    FUN_180315380(TI_System.TimeSpan);
    FUN_180315380(LIT_"'hh\\\\:mm\\\\:ss'");
    cRam00000001834b38ae = '\x01';
  }
  fVar4 = *(float *)(param_1 + 0x30);
  auStackX_8[0] = 0;
  fVar3 = (float)FUN_182436420(0);
  fVar3 = fVar3 + fVar4;
  *(float *)(param_1 + 0x30) = fVar3;
  if (*(float *)(param_1 + 0x20) * 60.0 <= fVar3) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  fVar4 = *(float *)(param_1 + 0x30) / (*(float *)(param_1 + 0x20) * 60.0);
  *(float *)(param_1 + 0x50) = fVar4;
  iVar2 = (int)(fVar4 * 86400.0);
  if (*(int *)(TI_System.TimeSpan + 0xe4) == 0) {
    func_0x000180315660();
  }
  System_TimeSpan___ctor(auStackX_8,iVar2 / 0xe10,(iVar2 % 0xe10) / 0x3c,iVar2 % 0x3c,0);
  uVar1 = System_TimeSpan__ToString(auStackX_8,LIT_"'hh\\\\:mm\\\\:ss'",0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000180314690(param_1 + 0x28,uVar1);
  return;
}

