// SparkFps__get_Lagado__18049b250 @ 0x18049b250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool SparkFps__get_Lagado__18049b250(void)

{
  longlong lVar1;
  bool bVar2;
  char acStackX_10 [8];
  undefined1 uStackX_18;
  undefined8 uStackX_20;
  
  if (cRam00000001834b328b == '\0') {
    FUN_180315380(TI_SparkFps);
    FUN_180315380(TI_System.Diagnostics.Stopwatch);
    cRam00000001834b328b = '\x01';
  }
  uStackX_18 = 0;
  if (*(int *)(TI_SparkFps + 0xe4) == 0) {
    func_0x000180315660(TI_SparkFps);
  }
  uStackX_20 = *(undefined8 *)(*(longlong *)(TI_SparkFps + 0xb8) + 8);
  acStackX_10[0] = '\0';
  System_Threading_Monitor__Enter(uStackX_20,acStackX_10,0);
  if (*(int *)(TI_SparkFps + 0xe4) == 0) {
    func_0x000180315660(TI_SparkFps);
  }
  if (*(char *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x20) == '\0') {
    bVar2 = false;
  }
  else {
    if (*(int *)(TI_System.Diagnostics.Stopwatch + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar1 = func_0x000181937eb0(0);
    if (*(int *)(TI_SparkFps + 0xe4) == 0) {
      func_0x000180315660(TI_SparkFps);
    }
    bVar2 = 0.5 < (double)(lVar1 - *(longlong *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x18))
                  / (double)**(longlong **)(TI_System.Diagnostics.Stopwatch + 0xb8);
  }
  if (acStackX_10[0] != '\0') {
    uStackX_18 = bVar2;
    func_0x0001819153a0(uStackX_20,0);
  }
  return bVar2;
}

