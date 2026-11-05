// SparkFps__Resposta__18049aca0 @ 0x18049aca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkFps__Resposta__18049aca0(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  char acStackX_18 [8];
  undefined8 uStackX_20;
  
  if (cRam00000001834b328a == '\0') {
    FUN_180315380(TI_SparkFps);
    FUN_180315380(TI_System.Diagnostics.Stopwatch);
    cRam00000001834b328a = '\x01';
  }
  if (*(int *)(TI_System.Diagnostics.Stopwatch + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar2 = func_0x000181937eb0(0);
  if (*(int *)(TI_SparkFps + 0xe4) == 0) {
    func_0x000180315660();
  }
  uStackX_20 = *(undefined8 *)(*(longlong *)(TI_SparkFps + 0xb8) + 8);
  acStackX_18[0] = '\0';
  System_Threading_Monitor__Enter(uStackX_20,acStackX_18,0);
  if (*(int *)(TI_SparkFps + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x20) != '\0') {
    if (*(int *)(TI_SparkFps + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (param_1 == *(int *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x10)) {
      if (*(int *)(TI_SparkFps + 0xe4) == 0) {
        func_0x000180315660();
      }
      *(undefined1 *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x20) = 0;
      lVar1 = *(longlong *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x18);
      if (*(int *)(TI_System.Diagnostics.Stopwatch + 0xe4) == 0) {
        func_0x000180315660();
      }
      *(int *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x24) =
           (int)(((lVar2 - lVar1) * 1000) / **(longlong **)(TI_System.Diagnostics.Stopwatch + 0xb8));
      if (acStackX_18[0] == '\0') {
        return;
      }
      func_0x0001819153a0(uStackX_20,0);
      return;
    }
  }
  if (acStackX_18[0] != '\0') {
    func_0x0001819153a0(uStackX_20,0);
  }
  return;
}

