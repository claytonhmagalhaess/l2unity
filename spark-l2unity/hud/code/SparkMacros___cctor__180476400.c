// SparkMacros___cctor__180476400 @ 0x180476400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMacros___cctor__180476400(void)

{
  undefined8 uVar1;
  
  if (cRam00000001834b3087 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<SparkMacros.Macro>);
    FUN_180315380(TI_SparkMacros);
    cRam00000001834b3087 = '\x01';
  }
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.List<SparkMacros.Macro>);
  FUN_180bba2e0(uVar1,MR_System.Collections.Generic.List<SparkMacros.Macro>..ctor);
  **(undefined8 **)(TI_SparkMacros + 0xb8) = uVar1;
  func_0x000180314690(*(undefined8 *)(TI_SparkMacros + 0xb8),uVar1);
  *(undefined4 *)(*(longlong *)(TI_SparkMacros + 0xb8) + 8) = 0xffffffff;
  return;
}

