// SparkDetalhePersonagem___c__DisplayClass46_0___Passo_b__0__1804ad7c0 @ 0x1804ad7c0

void SparkDetalhePersonagem___c__DisplayClass46_0___Passo_b__0__1804ad7c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  
  if (cRam00000001834b3284 == '\0') {
    FUN_180315380(TI_SparkDetalhePersonagem);
    cRam00000001834b3284 = '\x01';
  }
  uVar4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  while (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) <= (int)uVar4) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= uVar4) {
code_r0x0001804ad88d:
      FUN_1803155c0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 8);
    if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
      func_0x000180315660(TI_SparkDetalhePersonagem);
    }
    lVar2 = *(longlong *)(*(longlong *)(TI_SparkDetalhePersonagem + 0xb8) + 8);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto code_r0x0001804ad88d;
    if (lVar1 == 0) break;
    UnityMeshSimplifier_MeshSimplifier__SimplifyMesh
              (lVar1,*(undefined4 *)(lVar2 + 0x20 + (longlong)(int)uVar4 * 4),0);
    uVar4 = uVar4 + 1;
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

