// SparkMapaWindow__PosicaoDoJogador3__180642280 @ 0x180642280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMapaWindow__PosicaoDoJogador3__180642280(float *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined1 auStack_18 [16];
  
  if (cRam00000001834b3d4d == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3d4d = '\x01';
  }
  if (DAT_1834b2e67 == '\0') {
    FUN_180315380(TI_UnityEngine.Vector3);
    DAT_1834b2e67 = '\x01';
  }
  fVar2 = *(float *)(*(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8) + 1);
  *(undefined8 *)param_1 = **(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8);
  param_1[2] = fVar2;
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  uVar7 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if (cVar4 == '\0') {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    if (**(longlong **)(TI_PlayerEntity + 0xb8) != 0) {
      lVar5 = UnityEngine_Component__get_transform(**(longlong **)(TI_PlayerEntity + 0xb8),0);
      if (lVar5 != 0) {
        pfVar6 = (float *)UnityEngine_Transform__get_position(auStack_18,lVar5,0);
        fVar2 = pfVar6[1];
        fVar1 = pfVar6[2];
        param_1[1] = *pfVar6 * 52.5;
        param_1[2] = fVar2 * 52.5;
        *param_1 = fVar1 * 52.5;
        return 1;
      }
    }
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  return 0;
}

