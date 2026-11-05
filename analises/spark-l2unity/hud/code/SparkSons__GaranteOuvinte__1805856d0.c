// SparkSons__GaranteOuvinte__1805856d0 @ 0x1805856d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkSons__GaranteOuvinte__1805856d0(void)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (cRam00000001834b38e1 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<UnityEngine.AudioListener>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<UnityEngine.AudioListener>);
    FUN_180315380(MR_UnityEngine.Object.FindAnyObjectByType<UnityEngine.AudioListener>);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b38e1 = '\x01';
  }
  lVar4 = GameManager__get_CameraDoJogo(0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = FUN_180a40140(MR_UnityEngine.Object.FindAnyObjectByType<UnityEngine.AudioListener>);
  cVar2 = UnityEngine_Object__op_Inequality(lVar5,0,0);
  if (cVar2 == '\0') {
code_r0x00018058585c:
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(lVar4,0,0);
    if (cVar2 == '\0') {
      return;
    }
    if (lVar4 == 0) goto code_r0x000180585902;
    lVar5 = FUN_180997040(lVar4,MR_UnityEngine.Component.GetComponent<UnityEngine.AudioListener>);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Equality(lVar5,0,0);
    if (cVar2 != '\0') {
      lVar4 = UnityEngine_Component__get_gameObject(lVar4,0);
      if (lVar4 == 0) goto code_r0x000180585902;
      lVar5 = FUN_1809e9600(lVar4,MR_UnityEngine.GameObject.AddComponent<UnityEngine.AudioListener>);
    }
  }
  else {
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Equality(lVar4,0,0);
    if (cVar2 == '\0') {
      if ((lVar5 == 0) || (uVar6 = UnityEngine_Component__get_gameObject(lVar5,0), lVar4 == 0))
      goto code_r0x000180585902;
      uVar7 = UnityEngine_Component__get_gameObject(lVar4,0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      bVar3 = UnityEngine_Object__op_Equality(uVar6,uVar7,0);
    }
    else {
      bVar3 = GameManager__EhCameraDeLoading(lVar5,0);
      bVar3 = bVar3 ^ 1;
    }
    if (bVar3 == 0) {
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Equality(lVar4,0,0);
      if (cVar2 != '\0') {
        return;
      }
      if (lVar5 == 0) goto code_r0x000180585902;
      UnityEngine_Behaviour__set_enabled(lVar5,0,0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Object__Destroy(lVar5,0);
      goto code_r0x00018058585c;
    }
  }
  if (lVar5 != 0) {
    UnityEngine_Behaviour__set_enabled(lVar5,1,0);
    return;
  }
code_r0x000180585902:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

