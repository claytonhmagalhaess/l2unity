// SparkMapaWindow__PlantaDaCidade__180641490 @ 0x180641490

longlong SparkMapaWindow__PlantaDaCidade__180641490(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  
  if (cRam00000001834b3d12 == '\0') {
    FUN_180315380(TI_SparkMapaWindow);
    cRam00000001834b3d12 = '\x01';
  }
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x20) != '\0') {
    if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x18);
    if (lVar4 == 0) {
code_r0x00018064156e:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      lVar4 = (*pcVar2)();
      return lVar4;
    }
    for (uVar5 = 0; (int)uVar5 < *(int *)(lVar4 + 0x18); uVar5 = uVar5 + 1) {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        lVar4 = (*pcVar2)();
        return lVar4;
      }
      lVar1 = *(longlong *)(lVar4 + 0x20 + (longlong)(int)uVar5 * 8);
      if (lVar1 == 0) goto code_r0x00018064156e;
      if ((*(char *)(lVar1 + 0x28) != '\0') &&
         (cVar3 = func_0x0001817058a0(*(undefined8 *)(lVar1 + 0x10),param_1,0), cVar3 != '\0')) {
        return lVar1;
      }
    }
  }
  return 0;
}

