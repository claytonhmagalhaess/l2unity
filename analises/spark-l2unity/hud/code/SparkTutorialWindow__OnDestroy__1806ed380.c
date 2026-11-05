// SparkTutorialWindow__OnDestroy__1806ed380 @ 0x1806ed380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTutorialWindow__OnDestroy__1806ed380(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (cRam00000001834b4075 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTutorialWindow);
    cRam00000001834b4075 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_SparkTutorialWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar1,param_1,0);
  if (cVar2 != '\0') {
    **(undefined8 **)(TI_SparkTutorialWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_SparkTutorialWindow + 0xb8),0);
  }
  return;
}

