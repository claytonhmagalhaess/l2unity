// SparkTeclas_Captura__Termina__1804b4aa0 @ 0x1804b4aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas_Captura__Termina__1804b4aa0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (cRam00000001834b330a == '\0') {
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b330a = '\x01';
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar2 = FUN_1824364b0(0);
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  *(undefined4 *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x38) = uVar2;
  lVar1 = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x000180314690(param_1 + 0x38,0);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  }
  return;
}

