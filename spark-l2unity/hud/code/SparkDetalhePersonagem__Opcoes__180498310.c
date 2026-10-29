// SparkDetalhePersonagem__Opcoes__180498310 @ 0x180498310

undefined8 * SparkDetalhePersonagem__Opcoes__180498310(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b3279 == '\0') {
    FUN_180315380(TI_UnityMeshSimplifier.SimplificationOptions);
    cRam00000001834b3279 = '\x01';
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (*(int *)(TI_UnityMeshSimplifier.SimplificationOptions + 0xe4) == 0) {
    func_0x000180315660(TI_UnityMeshSimplifier.SimplificationOptions);
  }
  puVar2 = *(undefined8 **)(TI_UnityMeshSimplifier.SimplificationOptions + 0xb8);
  uVar1 = puVar2[1];
  uVar3 = puVar2[2];
  uVar4 = puVar2[3];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  uVar1 = puVar2[4];
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar1;
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return param_1;
}

