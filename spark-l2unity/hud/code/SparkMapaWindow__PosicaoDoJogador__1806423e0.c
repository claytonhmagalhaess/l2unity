// SparkMapaWindow__PosicaoDoJogador__1806423e0 @ 0x1806423e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMapaWindow__PosicaoDoJogador__1806423e0(float *param_1)

{
  float fVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined1 auStack_18 [16];
  
  if (cRam00000001834b3d4c == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3d4c = '\x01';
  }
  if (DAT_1834b2f44 == '\0') {
    FUN_180315380(TI_UnityEngine.Vector2);
    DAT_1834b2f44 = '\x01';
  }
  fVar1 = **(float **)(TI_UnityEngine.Vector2 + 0xb8);
  param_1[1] = (*(float **)(TI_UnityEngine.Vector2 + 0xb8))[1];
  *param_1 = fVar1;
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  uVar6 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if (cVar3 == '\0') {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    if (**(longlong **)(TI_PlayerEntity + 0xb8) != 0) {
      lVar4 = UnityEngine_Component__get_transform(**(longlong **)(TI_PlayerEntity + 0xb8),0);
      if (lVar4 != 0) {
        pfVar5 = (float *)UnityEngine_Transform__get_position(auStack_18,lVar4,0);
        fVar1 = pfVar5[2];
        param_1[1] = *pfVar5 * 52.5;
        *param_1 = fVar1 * 52.5;
        return 1;
      }
    }
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  return 0;
}

