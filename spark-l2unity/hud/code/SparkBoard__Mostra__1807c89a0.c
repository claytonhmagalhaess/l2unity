// SparkBoard__Mostra__1807c89a0 @ 0x1807c89a0

void SparkBoard__Mostra__1807c89a0(undefined8 param_1)

{
  longlong lVar1;
  
  if (cRam00000001834b45db == '\0') {
    FUN_180315380(TI_SparkBoard);
    cRam00000001834b45db = '\x01';
  }
  if (*(int *)(TI_SparkBoard + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b4660 == '\0') {
    FUN_180315380(TI_SparkBoard);
    cRam00000001834b4660 = '\x01';
  }
  if (*(int *)(TI_SparkBoard + 0xe4) == 0) {
    func_0x000180315660();
  }
  *(undefined8 *)(*(longlong *)(TI_SparkBoard + 0xb8) + 0x18) = param_1;
  func_0x000180314690(*(longlong *)(TI_SparkBoard + 0xb8) + 0x18,param_1);
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkBoard + 0xb8) + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001807c8a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),param_1,*(undefined8 *)(lVar1 + 0x28))
    ;
    return;
  }
  return;
}

