// SparkSons__TocaAgora__180586020 @ 0x180586020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkSons__TocaAgora__180586020
                   (longlong param_1,undefined8 param_2,undefined8 *param_3,float param_4,
                   float param_5,undefined1 param_6,char param_7)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if (cRam00000001834b38e0 == '\0') {
    FUN_180315380(MR_System.Array.IndexOf<UnityEngine.AudioSource>);
    FUN_180315380(MR_UnityEngine.Object.FindAnyObjectByType<UnityEngine.AudioListener>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkSons);
    cRam00000001834b38e0 = '\x01';
  }
  fVar8 = (float)FUN_1824366b0(0);
  if (*(float *)(param_1 + 0x68) <= fVar8) {
    fVar8 = (float)FUN_1824366b0(0);
    *(float *)(param_1 + 0x68) = fVar8 + 1.0;
    SparkSons__GaranteOuvinte__1805856d0(0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = FUN_180a40140(MR_UnityEngine.Object.FindAnyObjectByType<UnityEngine.AudioListener>);
    cVar2 = UnityEngine_Object__op_Inequality(lVar4,0,0);
    if (cVar2 == '\0') {
      uVar5 = 0;
    }
    else {
      if (lVar4 == 0) goto code_r0x0001805864a4;
      uVar5 = UnityEngine_Component__get_transform(lVar4,0);
    }
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    func_0x000180314690(param_1 + 0x70,uVar5);
  }
  if (param_7 != '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if (cVar2 != '\0') {
      if (*(longlong *)(param_1 + 0x70) == 0) goto code_r0x0001805864a4;
      puVar6 = (undefined8 *)
               UnityEngine_Transform__get_position(&uStack_58,*(longlong *)(param_1 + 0x70),0);
      uVar9 = *(undefined4 *)(puVar6 + 1);
      *param_3 = *puVar6;
      *(undefined4 *)(param_3 + 1) = uVar9;
    }
  }
  uVar9 = 0;
  if (param_5 <= 0.0) {
    fVar8 = 30.0;
  }
  else {
    fVar8 = 8.0;
    if (8.0 <= param_5 * 0.4) {
      fVar8 = param_5 * 0.4;
    }
  }
  if (param_4 <= 0.0) {
code_r0x0001805861da:
    param_4 = 1.0;
  }
  else {
    param_4 = param_4 / 250.0;
    if (param_4 < 0.0) {
      param_4 = 0.0;
    }
    else if (1.0 < param_4) goto code_r0x0001805861da;
  }
  uStack_58 = *param_3;
  uStack_50 = *(undefined4 *)(param_3 + 1);
  lVar4 = SparkSons__Fonte__180585080(param_1,param_2,&uStack_58,fVar8,param_4,param_6,0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(lVar4,0,0);
  if (cVar2 != '\0') {
    return 0;
  }
  uVar3 = FUN_1809e1cf0(*(undefined8 *)(param_1 + 0x38),lVar4,MR_System.Array.IndexOf<UnityEngine.AudioSource>);
  if (-1 < (int)uVar3) {
    lVar7 = *(longlong *)(param_1 + 0x40);
    if (lVar7 == 0) goto code_r0x0001805864a4;
    if (*(uint *)(lVar7 + 0x18) <= uVar3) {
code_r0x00018058649e:
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
    *(undefined1 *)((longlong)(int)uVar3 + 0x20 + lVar7) = param_6;
    lVar7 = *(longlong *)(param_1 + 0x48);
    if (lVar7 == 0) goto code_r0x0001805864a4;
    if (*(uint *)(lVar7 + 0x18) <= uVar3) goto code_r0x00018058649e;
    *(float *)(lVar7 + 0x20 + (longlong)(int)uVar3 * 4) = param_4;
  }
  *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 0xc) =
       *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 0xc) + 1;
  if (lVar4 == 0) {
code_r0x0001805864a4:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    lVar4 = (*pcVar1)();
    return lVar4;
  }
  UnityEngine_AudioSource__Stop(lVar4,0);
  lVar7 = UnityEngine_Component__get_transform(lVar4,0);
  if (lVar7 == 0) goto code_r0x0001805864a4;
  uStack_50 = *(undefined4 *)(param_3 + 1);
  uStack_58 = *param_3;
  UnityEngine_Transform__set_position(lVar7,&uStack_58,0);
  UnityEngine_AudioSource__set_maxDistance(lVar4,fVar8,0);
  if (cRam00000001834b301f == '\0') {
    FUN_180315380(TI_AudioManager);
    cRam00000001834b301f = '\x01';
  }
  uVar5 = **(undefined8 **)(TI_AudioManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if (cVar2 == '\0') {
    UnityEngine_AudioSource__set_volume(lVar4,param_4,0);
    if (param_7 != '\0') goto code_r0x000180586436;
  }
  else {
    if (param_7 != '\0') {
      if (cRam00000001834b301f == '\0') {
        FUN_180315380(TI_AudioManager);
        cRam00000001834b301f = '\x01';
      }
      if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
        fVar8 = (float)AudioManager__get_VolumeInterfaceEfetivo
                                 (**(longlong **)(TI_AudioManager + 0xb8),0);
        UnityEngine_AudioSource__set_volume(lVar4,fVar8 * param_4,0);
        goto code_r0x000180586436;
      }
      goto code_r0x0001805864a4;
    }
    if (cRam00000001834b301f == '\0') {
      FUN_180315380(TI_AudioManager);
      cRam00000001834b301f = '\x01';
    }
    if (**(longlong **)(TI_AudioManager + 0xb8) == 0) goto code_r0x0001805864a4;
    fVar8 = (float)AudioManager__get_VolumeSfxEfetivo
                             (**(longlong **)(TI_AudioManager + 0xb8),0);
    UnityEngine_AudioSource__set_volume(lVar4,fVar8 * param_4,0);
  }
  uVar9 = 0x3f800000;
code_r0x000180586436:
  UnityEngine_AudioSource__set_spatialBlend(lVar4,uVar9,0);
  UnityEngine_AudioSource__set_clip(lVar4,param_2,0);
  UnityEngine_AudioSource__Play(lVar4,0);
  return lVar4;
}

