// SparkApiGrafica__get_NomeAtual__180495790 @ 0x180495790

undefined8 SparkApiGrafica__get_NomeAtual__180495790(void)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (cRam00000001834b3262 == '\0') {
    FUN_180315380(TI_UnityEngine.Rendering.GraphicsDeviceType);
    FUN_180315380(TI_SparkApiGrafica);
    cRam00000001834b3262 = '\x01';
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
  if ((0x15 < uVar3) || ((0x240004U >> (uVar3 & 0x1f) & 1) == 0)) {
    uStack_18 = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
    uStack_28 = TI_UnityEngine.Rendering.GraphicsDeviceType;
    uStack_20 = 0xffffffffffffffff;
    uVar5 = System_Enum__ToString(&uStack_28,0);
    return uVar5;
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar1 = **(longlong **)(TI_SparkApiGrafica + 0xb8);
  iVar4 = UnityEngine_SystemInfo__get_graphicsDeviceType();
  if (iVar4 == 2) {
    uVar3 = 0;
  }
  else if (iVar4 == 0x12) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar4 == 0x15) {
      uVar3 = 2;
    }
  }
  if (lVar1 != 0) {
    if (uVar3 < *(uint *)(lVar1 + 0x18)) {
      return *(undefined8 *)(lVar1 + 0x20 + (longlong)(int)uVar3 * 8);
    }
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}

