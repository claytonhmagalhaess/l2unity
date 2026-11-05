// SparkHtml_No___ctor__180735190 @ 0x180735190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml_No___ctor__180735190(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b4269 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<string,string>);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<SparkHtml.No>);
    FUN_180315380(TI_System.StringComparer);
    cRam00000001834b4269 = '\x01';
  }
  if (*(int *)(TI_System.StringComparer + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b31cb == '\0') {
    FUN_180315380(TI_System.StringComparer);
    DAT_1834b31cb = '\x01';
  }
  if (*(int *)(TI_System.StringComparer + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar2 = *(undefined8 *)(*(longlong *)(TI_System.StringComparer + 0xb8) + 0x18);
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,string>);
  FUN_18124bc40(uVar1,uVar2,MR_System.Collections.Generic.Dictionary<string,string>..ctor);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000180314690(param_1 + 0x20,uVar1);
  uVar2 = func_0x000180315580(TI_System.Collections.Generic.List<SparkHtml.No>);
  FUN_180bba2e0(uVar2,MR_System.Collections.Generic.List<SparkHtml.No>..ctor);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  func_0x000180314690(param_1 + 0x28,uVar2);
  return;
}

