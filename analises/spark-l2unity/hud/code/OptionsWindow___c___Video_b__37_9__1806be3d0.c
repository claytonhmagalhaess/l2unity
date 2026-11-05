// OptionsWindow___c___Video_b__37_9__1806be3d0 @ 0x1806be3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c___Video_b__37_9__1806be3d0(undefined8 param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (cRam00000001834b3eb3 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3eb3 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(float *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x38) = (param_2 + param_2) - 1.0;
  if (cRam00000001834b32b3 == '\0') {
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<UnityEngine.Rendering.Volume>);
    FUN_180315380(TI_UnityEngine.GameObject);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.ScriptableObject.CreateInstance<UnityEngine.Rendering.VolumeProfile>);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(MR_UnityEngine.Rendering.VolumeParameter<float>.Override);
    FUN_180315380(MR_UnityEngine.Rendering.VolumeParameter<UnityEngine.Rendering.Universal.DepthOfFieldMode>.Override);
    FUN_180315380(MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.Bloom>);
    FUN_180315380(MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ChromaticAberration>);
    FUN_180315380(MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ColorAdjustments>);
    FUN_180315380(MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.DepthOfField>);
    FUN_180315380(MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ScreenSpaceLensFlare>);
    FUN_180315380(LIT_"'BoxVolume'");
    FUN_180315380(LIT_"'SparkOpcoesVolume'");
    cRam00000001834b32b3 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  uVar7 = *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if (cVar4 != '\0') {
    lVar6 = func_0x000180315580(TI_UnityEngine.GameObject);
    UnityEngine_GameObject___ctor(lVar6,LIT_"'SparkOpcoesVolume'",0);
    iVar5 = UnityEngine_LayerMask__NameToLayer(LIT_"'BoxVolume'",0);
    if (-1 < iVar5) {
      if (lVar6 == 0) goto code_r0x0001804a2ea0;
      UnityEngine_GameObject__set_layer(lVar6,iVar5,0);
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Object__DontDestroyOnLoad(lVar6,0);
    if (lVar6 == 0) goto code_r0x0001804a2ea0;
    uVar7 = FUN_1809e9600(lVar6,MR_UnityEngine.GameObject.AddComponent<UnityEngine.Rendering.Volume>);
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e8) = uVar7;
    func_0x000180314690(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e8,uVar7);
    lVar6 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e8);
    if (lVar6 == 0) goto code_r0x0001804a2ea0;
    UnityEngine_Rendering_Volume__set_isGlobal(lVar6,1,0);
    lVar6 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e8);
    if (lVar6 == 0) goto code_r0x0001804a2ea0;
    *(undefined4 *)(lVar6 + 0x24) = 0x447a0000;
    lVar6 = FUN_180a87ef0(MR_UnityEngine.ScriptableObject.CreateInstance<UnityEngine.Rendering.VolumeProfile>);
    if (lVar6 == 0) goto code_r0x0001804a2ea0;
    uVar7 = FUN_180b1c600(lVar6,0,MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.Bloom>);
    *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f0) = uVar7;
    func_0x000180314690(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f0,uVar7);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f0);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 == 0))
    goto code_r0x0001804a2ea0;
    FUN_1810ea890(lVar1,0,MR_UnityEngine.Rendering.VolumeParameter<float>.Override);
    uVar7 = FUN_180b1c600(lVar6,0,MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.DepthOfField>);
    *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f8) = uVar7;
    func_0x000180314690(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f8,uVar7);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f8);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_r0x0001804a2ea0;
    FUN_1810ea850(lVar1,0,MR_UnityEngine.Rendering.VolumeParameter<UnityEngine.Rendering.Universal.DepthOfFieldMode>.Override);
    uVar7 = FUN_180b1c600(lVar6,0,MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ChromaticAberration>);
    *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x200) = uVar7;
    func_0x000180314690(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x200,uVar7);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x200);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_r0x0001804a2ea0;
    FUN_1810ea890(lVar1,0,MR_UnityEngine.Rendering.VolumeParameter<float>.Override);
    uVar7 = FUN_180b1c600(lVar6,0,MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ScreenSpaceLensFlare>);
    *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x208) = uVar7;
    func_0x000180314690(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x208,uVar7);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x208);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_r0x0001804a2ea0;
    FUN_1810ea890(lVar1,0,MR_UnityEngine.Rendering.VolumeParameter<float>.Override);
    uVar7 = FUN_180b1c600(lVar6,0,MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ColorAdjustments>);
    *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x210) = uVar7;
    func_0x000180314690(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x210,uVar7);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x210);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_r0x0001804a2ea0;
    FUN_1810ea890(lVar1,0,MR_UnityEngine.Rendering.VolumeParameter<float>.Override);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e8);
    if (lVar1 == 0) goto code_r0x0001804a2ea0;
    *(longlong *)(lVar1 + 0x30) = lVar6;
    func_0x000180314690(lVar1 + 0x30,lVar6);
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar6 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x210);
  if (lVar6 != 0) {
    *(bool *)(lVar6 + 0x18) =
         0.001 < ABS(*(float *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x38));
    lVar6 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x210);
    if ((lVar6 != 0) && (plVar2 = *(longlong **)(lVar6 + 0x38), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x228))
                (plVar2,*(float *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x38) * 1.2,
                 *(undefined8 *)(*plVar2 + 0x230));
      lVar6 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f0);
      if (lVar6 != 0) {
        *(bool *)(lVar6 + 0x18) =
             *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x34) == '\0';
        lVar6 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f8);
        if (lVar6 != 0) {
          *(bool *)(lVar6 + 0x18) =
               *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x35) == '\0';
          lVar6 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x200);
          if (lVar6 != 0) {
            *(bool *)(lVar6 + 0x18) =
                 *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x36) == '\0';
            lVar6 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x208);
            if (lVar6 != 0) {
              *(bool *)(lVar6 + 0x18) =
                   *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x36) == '\0';
              return;
            }
          }
        }
      }
    }
  }
code_r0x0001804a2ea0:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

