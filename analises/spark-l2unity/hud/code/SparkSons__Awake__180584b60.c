// SparkSons__Awake__180584b60 @ 0x180584b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkSons__Awake__180584b60(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint auStackX_8 [2];
  
  if (cRam00000001834b38d5 == '\0') {
    FUN_180315380(TI_UnityEngine.AudioSource__);
    FUN_180315380(TI_bool__);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<UnityEngine.AudioSource>);
    FUN_180315380(TI_UnityEngine.GameObject);
    FUN_180315380(TI_float__);
    FUN_180315380(LIT_"'Fonte'");
    cRam00000001834b38d5 = '\x01';
  }
  uVar2 = func_0x000180314710(TI_UnityEngine.AudioSource__,0x20);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  func_0x000180314690(param_1 + 0x38,uVar2);
  uVar2 = func_0x000180314710(TI_bool__,0x20);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  func_0x000180314690(param_1 + 0x40,uVar2);
  uVar2 = func_0x000180314710(TI_float__,0x20);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  func_0x000180314690(param_1 + 0x48,uVar2);
  auStackX_8[0] = 0;
  while( true ) {
    uVar2 = System_Int32__ToString(auStackX_8,0);
    uVar2 = System_String__Concat(LIT_"'Fonte'",uVar2,0);
    lVar3 = func_0x000180315580(TI_UnityEngine.GameObject);
    UnityEngine_GameObject___ctor(lVar3,uVar2);
    if (lVar3 == 0) break;
    lVar3 = FUN_1809e9600(lVar3,MR_UnityEngine.GameObject.AddComponent<UnityEngine.AudioSource>);
    if (lVar3 == 0) break;
    lVar4 = UnityEngine_Component__get_transform(lVar3,0);
    uVar2 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar4 == 0) break;
    UnityEngine_Transform__SetParent(lVar4,uVar2,0,0);
    UnityEngine_AudioSource__set_playOnAwake(lVar3,0);
    UnityEngine_AudioSource__set_spatialBlend(lVar3,0x3f800000);
    UnityEngine_AudioSource__set_rolloffMode(lVar3,1);
    UnityEngine_AudioSource__set_minDistance(lVar3,0x40000000);
    UnityEngine_AudioSource__set_dopplerLevel(lVar3,0);
    lVar4 = *(longlong *)(param_1 + 0x38);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= auStackX_8[0]) {
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(longlong *)(lVar4 + 0x20 + (longlong)(int)auStackX_8[0] * 8) = lVar3;
    func_0x000180314690(lVar4 + (longlong)(int)auStackX_8[0] * 8 + 0x20);
    auStackX_8[0] = auStackX_8[0] + 1;
    if (0x1f < (int)auStackX_8[0]) {
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

