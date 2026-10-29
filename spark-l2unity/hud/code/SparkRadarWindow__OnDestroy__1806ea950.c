// SparkRadarWindow__OnDestroy__1806ea950 @ 0x1806ea950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__OnDestroy__1806ea950(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (cRam00000001834b408a == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkRadarWindow);
    cRam00000001834b408a = '\x01';
  }
  if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SparkRadarWindow);
  }
  uVar1 = **(undefined8 **)(TI_SparkRadarWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar1,param_1,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
      func_0x000180315660(TI_SparkRadarWindow);
    }
    **(undefined8 **)(TI_SparkRadarWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_SparkRadarWindow + 0xb8),0);
  }
  return;
}

