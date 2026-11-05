// FindStoreWindow__OnDestroy__1807531f0 @ 0x1807531f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FindStoreWindow__OnDestroy__1807531f0(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (cRam00000001834b42f0 == '\0') {
    FUN_180315380(TI_FindStoreWindow);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b42f0 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_FindStoreWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar1,param_1,0);
  if (cVar2 != '\0') {
    **(undefined8 **)(TI_FindStoreWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_FindStoreWindow + 0xb8),0);
  }
  return;
}

