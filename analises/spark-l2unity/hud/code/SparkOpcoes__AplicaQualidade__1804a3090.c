// SparkOpcoes__AplicaQualidade__1804a3090 @ 0x1804a3090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes__AplicaQualidade__1804a3090(void)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  undefined8 in_R9;
  undefined4 uVar8;
  float fVar9;
  
  if (cRam00000001834b32b0 == '\0') {
    FUN_180315380(TI_UnityEngine.Rendering.GraphicsSettings);
    FUN_180315380(MR_UnityEngine.Object.Instantiate<UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkResolucao);
    FUN_180315380(TI_UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset);
    FUN_180315380(LIT_"' (SPARK)'");
    cRam00000001834b32b0 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  FUN_1823fd240(*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x10) != '\0',0);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  FUN_1823fd110(*(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x30),0);
  fVar9 = 1.0;
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x2c) == 0) {
    uVar8 = 0x3f333333;
  }
  else {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x2c) == 1) {
      uVar8 = 0x3f800000;
    }
    else {
      uVar8 = 0x3fc00000;
    }
  }
  FUN_1823fd150(uVar8,0);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  uVar6 = *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if (cVar3 != '\0') {
    if (*(int *)(TI_UnityEngine.Rendering.GraphicsSettings + 0xe4) == 0) {
      func_0x000180315660();
    }
    plVar5 = (longlong *)UnityEngine_Rendering_GraphicsSettings__get_currentRenderPipeline(0);
    if (plVar5 != (longlong *)0x0) {
      if ((*(byte *)(TI_UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
         (*(longlong *)
           (*(longlong *)(*plVar5 + 200) + -8 +
           (ulonglong)*(byte *)(TI_UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset + 0x130) * 8) == TI_UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset)) {
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar6 = FUN_180a40790(plVar5,MR_UnityEngine.Object.Instantiate<UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset>);
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e0) = uVar6;
        func_0x000180314690(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e0,uVar6);
        lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e0);
        uVar6 = func_0x00018242cb90(plVar5,0);
        uVar6 = System_String__Concat(uVar6,LIT_"' (SPARK)'",0);
        if (lVar7 == 0) goto code_r0x0001804a36b9;
        func_0x00018242cf20(lVar7,uVar6,0);
        UnityEngine_QualitySettings__set_renderPipeline
                  (*(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e0),0);
      }
    }
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  uVar6 = *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if (cVar3 != '\0') {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    uVar6 = *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e0);
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkResolucao__Aplica(uVar6,0);
    lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e0);
    if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x24) == 0) {
      uVar8 = 0;
    }
    else {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x24) == 1) {
        uVar8 = 0x420c0000;
      }
      else {
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x24) == 2) {
          uVar8 = 0x428c0000;
        }
        else {
          uVar8 = 0x42c80000;
        }
      }
    }
    if (lVar7 == 0) goto code_r0x0001804a36b9;
    func_0x0001821afbf0(lVar7,uVar8,0);
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e0);
    if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x24) < 3) {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x24) == 2) + '\x01';
    }
    else {
      cVar3 = '\x03';
    }
    if (lVar7 == 0) goto code_r0x0001804a36b9;
    UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_shadowCascadeCount
              (lVar7,cVar3,0);
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b32b2 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32b2 = '\x01';
  }
  lVar7 = UnityEngine_Camera__get_main(0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(lVar7,0,0);
  if (cVar3 == '\0') {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b32b1 == '\0') {
      FUN_180315380(TI_SparkOpcoes);
      cRam00000001834b32b1 = '\x01';
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x2c) == 0) {
      fVar9 = 0.55;
    }
    else {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x2c) == 1) {
        fVar9 = 0.8;
      }
    }
    if (lVar7 == 0) {
code_r0x0001804a36b9:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine_Camera__set_farClipPlane(lVar7,fVar9 * 500.0,0);
    lVar7 = UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData
                      (lVar7,0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(lVar7,0,0);
    if (cVar3 != '\0') {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x28) == 0) {
        iVar4 = 0;
      }
      else {
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        iVar4 = (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x28) != 1) + 1;
      }
      if (lVar7 == 0) goto code_r0x0001804a36b9;
      *(int *)(lVar7 + 0x50) = iVar4;
    }
  }
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
  uVar6 = *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar6,0,0,in_R9,unaff_RBX);
  if (cVar3 != '\0') {
    lVar7 = func_0x000180315580(TI_UnityEngine.GameObject);
    UnityEngine_GameObject___ctor(lVar7,LIT_"'SparkOpcoesVolume'",0);
    iVar4 = UnityEngine_LayerMask__NameToLayer(LIT_"'BoxVolume'",0);
    if (-1 < iVar4) {
      if (lVar7 == 0) goto code_r0x0001804a2ea0;
      UnityEngine_GameObject__set_layer(lVar7,iVar4,0);
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Object__DontDestroyOnLoad(lVar7,0);
    if (lVar7 == 0) goto code_r0x0001804a2ea0;
    uVar6 = FUN_1809e9600(lVar7,MR_UnityEngine.GameObject.AddComponent<UnityEngine.Rendering.Volume>);
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e8) = uVar6;
    func_0x000180314690(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e8,uVar6);
    lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e8);
    if (lVar7 == 0) goto code_r0x0001804a2ea0;
    UnityEngine_Rendering_Volume__set_isGlobal(lVar7,1,0);
    lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e8);
    if (lVar7 == 0) goto code_r0x0001804a2ea0;
    *(undefined4 *)(lVar7 + 0x24) = 0x447a0000;
    lVar7 = FUN_180a87ef0(MR_UnityEngine.ScriptableObject.CreateInstance<UnityEngine.Rendering.VolumeProfile>);
    if (lVar7 == 0) goto code_r0x0001804a2ea0;
    uVar6 = FUN_180b1c600(lVar7,0,MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.Bloom>);
    *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f0) = uVar6;
    func_0x000180314690(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f0,uVar6);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f0);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 == 0))
    goto code_r0x0001804a2ea0;
    FUN_1810ea890(lVar1,0,MR_UnityEngine.Rendering.VolumeParameter<float>.Override);
    uVar6 = FUN_180b1c600(lVar7,0,MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.DepthOfField>);
    *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f8) = uVar6;
    func_0x000180314690(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f8,uVar6);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f8);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_r0x0001804a2ea0;
    FUN_1810ea850(lVar1,0,MR_UnityEngine.Rendering.VolumeParameter<UnityEngine.Rendering.Universal.DepthOfFieldMode>.Override);
    uVar6 = FUN_180b1c600(lVar7,0,MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ChromaticAberration>);
    *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x200) = uVar6;
    func_0x000180314690(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x200,uVar6);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x200);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_r0x0001804a2ea0;
    FUN_1810ea890(lVar1,0,MR_UnityEngine.Rendering.VolumeParameter<float>.Override);
    uVar6 = FUN_180b1c600(lVar7,0,MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ScreenSpaceLensFlare>);
    *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x208) = uVar6;
    func_0x000180314690(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x208,uVar6);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x208);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_r0x0001804a2ea0;
    FUN_1810ea890(lVar1,0,MR_UnityEngine.Rendering.VolumeParameter<float>.Override);
    uVar6 = FUN_180b1c600(lVar7,0,MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ColorAdjustments>);
    *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x210) = uVar6;
    func_0x000180314690(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x210,uVar6);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x210);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_r0x0001804a2ea0;
    FUN_1810ea890(lVar1,0,MR_UnityEngine.Rendering.VolumeParameter<float>.Override);
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e8);
    if (lVar1 == 0) goto code_r0x0001804a2ea0;
    *(longlong *)(lVar1 + 0x30) = lVar7;
    func_0x000180314690(lVar1 + 0x30,lVar7);
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x210);
  if (lVar7 != 0) {
    *(bool *)(lVar7 + 0x18) = 0.001 < ABS(*(float *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x38));
    lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x210);
    if ((lVar7 != 0) && (plVar5 = *(longlong **)(lVar7 + 0x38), plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x228))
                (plVar5,*(float *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x38) * 1.2,
                 *(undefined8 *)(*plVar5 + 0x230));
      lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f0);
      if (lVar7 != 0) {
        *(bool *)(lVar7 + 0x18) = *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x34) == '\0';
        lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1f8);
        if (lVar7 != 0) {
          *(bool *)(lVar7 + 0x18) = *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x35) == '\0';
          lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x200);
          if (lVar7 != 0) {
            *(bool *)(lVar7 + 0x18) = *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x36) == '\0'
            ;
            lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x208);
            if (lVar7 != 0) {
              *(bool *)(lVar7 + 0x18) =
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

