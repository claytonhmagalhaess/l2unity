// SparkMapaWindow__ParaMovimento__180641320 @ 0x180641320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__ParaMovimento__180641320(longlong param_1)

{
  undefined4 uVar1;
  
  if (DAT_1834b2f44 == '\0') {
    FUN_180315380(TI_UnityEngine.Vector2);
    DAT_1834b2f44 = '\x01';
  }
  uVar1 = **(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8);
  *(undefined4 *)(param_1 + 0x238) = (*(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8))[1];
  *(undefined4 *)(param_1 + 0x234) = uVar1;
  *(undefined4 *)(param_1 + 0x248) = 0;
  return;
}

