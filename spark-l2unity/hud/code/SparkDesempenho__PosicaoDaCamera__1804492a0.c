// SparkDesempenho__PosicaoDaCamera__1804492a0 @ 0x1804492a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkDesempenho__PosicaoDaCamera__1804492a0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_28 [32];
  
  if (cRam00000001834b2f75 == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDesempenho);
    cRam00000001834b2f75 = '\x01';
  }
  if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
    func_0x000180315660(TI_SparkDesempenho);
  }
  iVar2 = *(int *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x48);
  iVar6 = FUN_1824364b0(0);
  if (iVar2 != iVar6) {
    uVar7 = FUN_1824364b0(0);
    if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
      func_0x000180315660();
    }
    *(undefined4 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x48) = uVar7;
    if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = FUN_1823c9850(0);
    if (cVar4 == '\0') {
      lVar8 = 0;
    }
    else {
      lVar8 = GameManager__get_CameraDoJogo(0);
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Equality(lVar8,0,0);
    if (cVar4 != '\0') {
      lVar8 = UnityEngine_Camera__get_main(0);
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar5 = UnityEngine_Object__op_Inequality(lVar8,0,0);
    if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
      func_0x000180315660();
    }
    *(undefined1 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x58) = uVar5;
    if (*(char *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x58) != '\0') {
      if (lVar8 != 0) {
        lVar8 = UnityEngine_Component__get_transform(lVar8,0);
        if (lVar8 != 0) {
          puVar9 = (undefined8 *)UnityEngine_Transform__get_position(auStack_28,lVar8,0);
          uVar1 = *puVar9;
          uVar7 = *(undefined4 *)(puVar9 + 1);
          if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
            func_0x000180315660(TI_SparkDesempenho);
          }
          lVar8 = *(longlong *)(TI_SparkDesempenho + 0xb8);
          *(undefined8 *)(lVar8 + 0x4c) = uVar1;
          *(undefined4 *)(lVar8 + 0x54) = uVar7;
          goto DAT_18044947b;
        }
      }
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return uVar10;
    }
  }
DAT_18044947b:
  if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar7 = *(undefined4 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x54);
  *param_1 = *(undefined8 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x4c);
  *(undefined4 *)(param_1 + 1) = uVar7;
  return (ulonglong)*(byte *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x58);
}

