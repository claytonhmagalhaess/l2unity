// SparkMusica__GaranteOuvinte__1804548d0 @ 0x1804548d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMusica__GaranteOuvinte__1804548d0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (cRam00000001834b3007 == '\0') {
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<UnityEngine.AudioListener>);
    FUN_180315380(MR_UnityEngine.Object.FindObjectsByType<UnityEngine.AudioListener>);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3007 = '\x01';
  }
  if (cRam00000001834b3021 == '\0') {
    FUN_180315380(TI_GameManager);
    cRam00000001834b3021 = '\x01';
  }
  lVar4 = **(longlong **)(TI_GameManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
  if (cVar3 != '\0') {
    if (lVar4 == 0) goto code_r0x000180454b7e;
    if ((*(char *)(lVar4 + 0x39) == '\a') || (*(char *)(lVar4 + 0x39) == '\n')) {
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if (cVar3 != '\0') {
        uVar5 = *(undefined8 *)(param_1 + 0x80);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Object__Destroy(uVar5,0);
        *(undefined8 *)(param_1 + 0x80) = 0;
        func_0x000180314690(param_1 + 0x80,0);
      }
      if (*(char *)(lVar4 + 0x38) != '\0') {
        return;
      }
      SparkSons__GaranteOuvinte__1805856d0(0);
      return;
    }
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar4 = FUN_180a40300(0,MR_UnityEngine.Object.FindObjectsByType<UnityEngine.AudioListener>);
  if (lVar4 != 0) {
    for (uVar6 = 0; (int)uVar6 < *(int *)(lVar4 + 0x18); uVar6 = uVar6 + 1) {
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(lVar4 + 0x20 + (longlong)(int)uVar6 * 8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = UnityEngine_Object__op_Inequality(lVar1);
      if (cVar3 != '\0') {
        if (lVar1 == 0) goto code_r0x000180454b7e;
        cVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled(lVar1);
        if (cVar3 != '\0') {
          uVar5 = *(undefined8 *)(param_1 + 0x80);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if (cVar3 == '\0') {
            return;
          }
          lVar4 = *(longlong *)(param_1 + 0x80);
          if (lVar4 == 0) goto code_r0x000180454b7e;
          uVar5 = 0;
          goto code_r0x000180454ae8;
        }
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if (cVar3 != '\0') {
      lVar4 = UnityEngine_Component__get_gameObject(param_1,0);
      if (lVar4 == 0) goto code_r0x000180454b7e;
      uVar5 = FUN_1809e9600(lVar4,MR_UnityEngine.GameObject.AddComponent<UnityEngine.AudioListener>);
      *(undefined8 *)(param_1 + 0x80) = uVar5;
      func_0x000180314690(param_1 + 0x80,uVar5);
    }
    lVar4 = *(longlong *)(param_1 + 0x80);
    if (lVar4 != 0) {
      uVar5 = 1;
code_r0x000180454ae8:
      UnityEngine_Behaviour__set_enabled(lVar4,uVar5,0);
      return;
    }
  }
code_r0x000180454b7e:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

