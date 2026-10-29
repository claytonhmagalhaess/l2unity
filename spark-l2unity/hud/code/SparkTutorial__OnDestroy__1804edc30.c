// SparkTutorial__OnDestroy__1804edc30 @ 0x1804edc30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTutorial__OnDestroy__1804edc30(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (cRam00000001834b33db == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTutorial);
    cRam00000001834b33db = '\x01';
  }
  if (*(int *)(TI_SparkTutorial + 0xe4) == 0) {
    func_0x000180315660(TI_SparkTutorial);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(TI_SparkTutorial + 0xb8) + 8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar1,param_1,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_SparkTutorial + 0xe4) == 0) {
      func_0x000180315660(TI_SparkTutorial);
    }
    *(undefined8 *)(*(longlong *)(TI_SparkTutorial + 0xb8) + 8) = 0;
    func_0x000180314690(*(longlong *)(TI_SparkTutorial + 0xb8) + 8,0);
  }
  return;
}

