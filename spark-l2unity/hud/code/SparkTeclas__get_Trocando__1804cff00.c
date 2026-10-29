// SparkTeclas__get_Trocando__1804cff00 @ 0x1804cff00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkTeclas__get_Trocando__1804cff00(void)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  
  if (cRam00000001834b3302 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b3302 = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660(TI_SparkTeclas);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x30);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660(TI_SparkTeclas);
  }
  lVar2 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x30);
  if (lVar2 != 0) {
    return (ulonglong)*(byte *)(lVar2 + 0x20);
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}

