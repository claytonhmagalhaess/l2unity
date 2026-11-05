// SparkPesca__MontaLinha__18084fe10 @ 0x18084fe10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkPesca__MontaLinha__18084fe10(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (cRam00000001834b4875 == '\0') {
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<UnityEngine.LineRenderer>);
    FUN_180315380(TI_UnityEngine.GameObject);
    FUN_180315380(TI_UnityEngine.Material);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkPesca);
    FUN_180315380(LIT_"'Universal Render Pipeline/Unlit'");
    FUN_180315380(LIT_"'_BaseColor'");
    FUN_180315380(LIT_"'Sprites/Default'");
    FUN_180315380(LIT_"'Linha'");
    cRam00000001834b4875 = '\x01';
  }
  if (*(int *)(TI_SparkPesca + 0xe4) == 0) {
    func_0x000180315660(TI_SparkPesca);
  }
  uVar3 = *(undefined8 *)(*(longlong *)(TI_SparkPesca + 0xb8) + 0x28);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar3 = SparkArte__AchaShader(LIT_"'Universal Render Pipeline/Unlit'",0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if (cVar2 != '\0') {
      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar3 = SparkArte__AchaShader(LIT_"'Sprites/Default'",0);
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if (cVar2 == '\0') {
      if (*(int *)(TI_SparkPesca + 0xe4) == 0) {
        func_0x000180315660(TI_SparkPesca);
      }
      uVar3 = *(undefined8 *)(*(longlong *)(TI_SparkPesca + 0xb8) + 0x20);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if (cVar2 == '\0') {
        uVar4 = 0;
      }
      else {
        if (*(int *)(TI_SparkPesca + 0xe4) == 0) {
          func_0x000180315660(TI_SparkPesca);
        }
        uVar3 = *(undefined8 *)(*(longlong *)(TI_SparkPesca + 0xb8) + 0x20);
        uVar4 = func_0x000180315580(TI_UnityEngine.Material);
        UnityEngine_Material___ctor(uVar4,uVar3,0);
      }
    }
    else {
      uVar4 = func_0x000180315580(TI_UnityEngine.Material);
      UnityEngine_Material___ctor(uVar4,uVar3,0);
    }
    if (*(int *)(TI_SparkPesca + 0xe4) == 0) {
      func_0x000180315660(TI_SparkPesca);
    }
    *(undefined8 *)(*(longlong *)(TI_SparkPesca + 0xb8) + 0x28) = uVar4;
    func_0x000180314690(*(longlong *)(TI_SparkPesca + 0xb8) + 0x28,uVar4);
    uVar3 = *(undefined8 *)(*(longlong *)(TI_SparkPesca + 0xb8) + 0x28);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if (cVar2 != '\0') {
      if (*(int *)(TI_SparkPesca + 0xe4) == 0) {
        func_0x000180315660(TI_SparkPesca);
      }
      lVar5 = *(longlong *)(*(longlong *)(TI_SparkPesca + 0xb8) + 0x28);
      if (lVar5 == 0) goto code_r0x00018085031d;
      uStack_18 = 0x3f51eb853f51eb85;
      uStack_10 = 0x3f8000003f47ae14;
      UnityEngine_Material__set_color(lVar5,&uStack_18,0);
      lVar5 = *(longlong *)(*(longlong *)(TI_SparkPesca + 0xb8) + 0x28);
      if (lVar5 == 0) goto code_r0x00018085031d;
      cVar2 = UnityEngine_Material__HasProperty(lVar5,LIT_"'_BaseColor'",0);
      if (cVar2 != '\0') {
        if (*(int *)(TI_SparkPesca + 0xe4) == 0) {
          func_0x000180315660(TI_SparkPesca);
        }
        lVar5 = *(longlong *)(*(longlong *)(TI_SparkPesca + 0xb8) + 0x28);
        if (lVar5 == 0) goto code_r0x00018085031d;
        uStack_18 = 0x3f51eb853f51eb85;
        uStack_10 = 0x3f8000003f47ae14;
        UnityEngine_Material__SetColor(lVar5,LIT_"'_BaseColor'",&uStack_18,0);
      }
    }
  }
  lVar5 = func_0x000180315580(TI_UnityEngine.GameObject);
  UnityEngine_GameObject___ctor(lVar5,LIT_"'Linha'",0);
  if (lVar5 != 0) {
    lVar6 = UnityEngine_GameObject__get_transform(lVar5,0);
    if (param_1 != 0) {
      uVar3 = UnityEngine_GameObject__get_transform(param_1,0);
      if (lVar6 != 0) {
        UnityEngine_Transform__SetParent(lVar6,uVar3,0,0);
        lVar5 = FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<UnityEngine.LineRenderer>);
        if (lVar5 != 0) {
          UnityEngine_LineRenderer__set_useWorldSpace(lVar5,1,0);
          UnityEngine_LineRenderer__set_positionCount(lVar5,0xe,0);
          UnityEngine_LineRenderer__set_widthMultiplier(lVar5,0x3c23d70a,0);
          UnityEngine_LineRenderer__set_numCapVertices(lVar5,0,0);
          UnityEngine_LineRenderer__set_alignment(lVar5,0,0);
          UnityEngine_Renderer__set_shadowCastingMode(lVar5,0,0);
          UnityEngine_Renderer__set_receiveShadows(lVar5,0,0);
          if (*(int *)(TI_SparkPesca + 0xe4) == 0) {
            func_0x000180315660(TI_SparkPesca);
          }
          uVar3 = *(undefined8 *)(*(longlong *)(TI_SparkPesca + 0xb8) + 0x28);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
          if (cVar2 != '\0') {
            if (*(int *)(TI_SparkPesca + 0xe4) == 0) {
              func_0x000180315660(TI_SparkPesca);
            }
            UnityEngine_Renderer__SetMaterial
                      (lVar5,*(undefined8 *)(*(longlong *)(TI_SparkPesca + 0xb8) + 0x28),0);
          }
          return lVar5;
        }
      }
    }
  }
code_r0x00018085031d:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar5 = (*pcVar1)();
  return lVar5;
}

