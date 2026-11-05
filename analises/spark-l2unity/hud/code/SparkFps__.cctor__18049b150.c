// SparkFps__.cctor__18049b150 @ 0x18049b150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkFps___cctor__18049b150(void)

{
  undefined8 uVar1;
  
  if (cRam00000001834b328f == '\0') {
    FUN_180315380(TI_object);
    FUN_180315380(TI_SparkFps);
    cRam00000001834b328f = '\x01';
  }
  uVar1 = func_0x000180315580(TI_object);
  func_0x0001803dadf0(uVar1,0);
  *(undefined8 *)(*(longlong *)(TI_SparkFps + 0xb8) + 8) = uVar1;
  func_0x000180314690(*(longlong *)(TI_SparkFps + 0xb8) + 8,uVar1);
  *(undefined4 *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x24) = 0xffffffff;
  return;
}

