// SparkQuests__MostraRadar__1804c6a60 @ 0x1804c6a60

void SparkQuests__MostraRadar__1804c6a60(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (cRam00000001834b33a7 == '\0') {
    FUN_180315380(TI_SparkQuests);
    cRam00000001834b33a7 = '\x01';
  }
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
  *(longlong *)(*(longlong *)(TI_SparkQuests + 0xb8) + 0x48) = param_1;
  func_0x000180314690(*(longlong *)(TI_SparkQuests + 0xb8) + 0x48,param_1);
  lVar2 = *(longlong *)(TI_SparkQuests + 0xb8);
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + 0x50) = *param_2;
  *(undefined4 *)(lVar2 + 0x58) = uVar1;
  if (param_1 != 0) {
    if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b33cf == '\0') {
      FUN_180315380(TI_SparkQuests);
      cRam00000001834b33cf = '\x01';
    }
    if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (-1 < *(int *)(*(longlong *)(TI_SparkQuests + 0xb8) + 0x18)) {
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
      *(undefined4 *)(*(longlong *)(TI_SparkQuests + 0xb8) + 0x18) = 0xffffffff;
      SparkQuests__Salva(0);
    }
  }
  if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar2 = *(longlong *)(*(longlong *)(TI_SparkQuests + 0xb8) + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  }
  return;
}

