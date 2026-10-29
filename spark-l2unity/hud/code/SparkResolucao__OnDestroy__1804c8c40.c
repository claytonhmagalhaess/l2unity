// SparkResolucao__OnDestroy__1804c8c40 @ 0x1804c8c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkResolucao__OnDestroy__1804c8c40(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (cRam00000001834b32e5 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b32e5 = '\x01';
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660(TI_SparkResolucao);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar1,param_1,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660(TI_SparkResolucao);
    }
    *(undefined8 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 8) = 0;
    func_0x000180314690(*(longlong *)(TI_SparkResolucao + 0xb8) + 8,0);
  }
  return;
}

