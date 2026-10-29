// SparkResolucao__AlvoFps__1804c86f0 @ 0x1804c86f0

float SparkResolucao__AlvoFps__1804c86f0(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [40];
  
  if (cRam00000001834b32e3 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32e3 = '\x01';
  }
  uStack_38 = 0;
  uStack_30 = 0;
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  iVar1 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x54);
  if (iVar1 == 1) {
    return 30.0;
  }
  if (iVar1 == 2) {
    return 45.0;
  }
  if (iVar1 != 3) {
    puVar2 = (undefined8 *)UnityEngine_Screen__get_currentResolution(auStack_28,0);
    uStack_38 = *puVar2;
    uStack_30 = puVar2[1];
    uVar3 = func_0x000181907b40(&uStack_38,0);
    fVar5 = (float)((double)(uVar3 & 0xffffffff) / (double)(uVar3 >> 0x20));
    if ((fVar5 < 30.0) || (0x7f800000 < (uint)ABS(fVar5))) {
      fVar5 = 60.0;
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x10) == '\0') {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (0 < *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14)) {
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        fVar4 = (float)*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14);
        if (fVar4 <= fVar5) {
          fVar5 = fVar4;
        }
      }
    }
    return fVar5;
  }
  return 60.0;
}

