// SparkQuests__MostraLocal__1804c6920 @ 0x1804c6920

void SparkQuests__MostraLocal__1804c6920(int param_1)

{
  longlong lVar1;
  
  if (cRam00000001834b33a4 == '\0') {
    FUN_180315380(TI_SparkQuests);
    cRam00000001834b33a4 = '\x01';
  }
  if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b33d0 == '\0') {
    FUN_180315380(TI_SparkQuests);
    cRam00000001834b33d0 = '\x01';
  }
  if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
    func_0x000180315660();
  }
  *(int *)(*(longlong *)(TI_SparkQuests + 0xb8) + 0x18) = param_1;
  if (-1 < param_1) {
    if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b33d1 == '\0') {
      FUN_180315380(TI_SparkQuests);
      cRam00000001834b33d1 = '\x01';
    }
    if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
      func_0x000180315660();
    }
    *(undefined8 *)(*(longlong *)(TI_SparkQuests + 0xb8) + 0x48) = 0;
    func_0x000180314690(*(longlong *)(TI_SparkQuests + 0xb8) + 0x48,0);
  }
  if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkQuests__Salva(0);
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkQuests + 0xb8) + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001804c6a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}

