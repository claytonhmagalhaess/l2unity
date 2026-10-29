// SparkDesempenho__PosicaoDoJogador__1804494d0 @ 0x1804494d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * SparkDesempenho__PosicaoDoJogador__1804494d0(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  if (cRam00000001834b2f70 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDesempenho);
    cRam00000001834b2f70 = '\x01';
  }
  uStack_18 = 0;
  uStack_10 = 0;
  if (cRam00000001834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    cRam00000001834b2f32 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar3 == '\0') {
    if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = SparkDesempenho__PosicaoDaCamera__1804492a0(&uStack_18,0);
    if (cVar3 != '\0') goto code_r0x000180449617;
    if (cRam00000001834b2e67 == '\0') {
      FUN_180315380(TI_UnityEngine.Vector3);
      cRam00000001834b2e67 = '\x01';
    }
    puVar5 = *(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8);
  }
  else {
    if (cRam00000001834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      cRam00000001834b2f32 = '\x01';
    }
    if ((**(longlong **)(TI_PlayerEntity + 0xb8) == 0) ||
       (lVar4 = UnityEngine_Component__get_transform(**(longlong **)(TI_PlayerEntity + 0xb8),0)
       , lVar4 == 0)) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      puVar5 = (undefined8 *)(*pcVar2)();
      return puVar5;
    }
    puVar5 = (undefined8 *)UnityEngine_Transform__get_position(&uStack_18,lVar4,0);
  }
  uStack_18 = *puVar5;
  uStack_10 = *(undefined4 *)(puVar5 + 1);
code_r0x000180449617:
  *param_1 = uStack_18;
  *(undefined4 *)(param_1 + 1) = uStack_10;
  return param_1;
}

