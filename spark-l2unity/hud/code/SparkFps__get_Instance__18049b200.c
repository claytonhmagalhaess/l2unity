// SparkFps__get_Instance__18049b200 @ 0x18049b200

undefined8 SparkFps__get_Instance__18049b200(void)

{
  if (cRam00000001834b3285 == '\0') {
    FUN_180315380(TI_SparkFps);
    cRam00000001834b3285 = '\x01';
  }
  if (*(int *)(TI_SparkFps + 0xe4) == 0) {
    func_0x000180315660(TI_SparkFps);
  }
  return **(undefined8 **)(TI_SparkFps + 0xb8);
}

