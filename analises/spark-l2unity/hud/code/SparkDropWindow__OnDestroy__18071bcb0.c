// SparkDropWindow__OnDestroy__18071bcb0 @ 0x18071bcb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDropWindow__OnDestroy__18071bcb0(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (cRam00000001834b41d8 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDropWindow);
    cRam00000001834b41d8 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_SparkDropWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar1,param_1,0);
  if (cVar2 != '\0') {
    **(undefined8 **)(TI_SparkDropWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_SparkDropWindow + 0xb8),0);
  }
  return;
}

