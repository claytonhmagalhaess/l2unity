// SparkDesempenho__.cctor__180449fb0 @ 0x180449fb0

void SparkDesempenho___cctor__180449fb0(void)

{
  undefined8 uVar1;
  
  if (cRam00000001834b2f77 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkDesempenho.Relacao>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<Entity,SparkDesempenho.Relacao>);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<Entity>);
    FUN_180315380(TI_SparkDesempenho);
    cRam00000001834b2f77 = '\x01';
  }
  **(undefined1 **)(TI_SparkDesempenho + 0xb8) = 1;
  *(undefined1 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 1) = 0;
  *(undefined4 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 4) = 0x41700000;
  *(undefined4 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 8) = 0x41f00000;
  *(undefined4 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0xc) = 0x41f00000;
  *(undefined4 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x10) = 0x41a00000;
  *(undefined1 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x14) = 1;
  *(undefined1 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x15) = 0;
  *(undefined4 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x18) = 0x3c;
  *(undefined1 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x1c) = 1;
  *(undefined4 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x20) = 0x28;
  *(undefined1 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x24) = 1;
  *(undefined4 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x28) = 0x41f00000;
  *(undefined4 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x2c) = 0x41a00000;
  *(undefined4 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x30) = 4;
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<Entity,SparkDesempenho.Relacao>);
  FUN_18124bf80(uVar1,MR_System.Collections.Generic.Dictionary<Entity,SparkDesempenho.Relacao>..ctor);
  *(undefined8 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x38) = uVar1;
  func_0x000180314690(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x38,uVar1);
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.List<Entity>);
  FUN_180bba2e0(uVar1,MR_System.Collections.Generic.List<Entity>..ctor);
  *(undefined8 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x40) = uVar1;
  func_0x000180314690(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x40,uVar1);
  *(undefined4 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x48) = 0xffffffff;
  return;
}

