// SparkDesempenho__SomPrioritario__180449ce0 @ 0x180449ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool SparkDesempenho__SomPrioritario__180449ce0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  int aiStackX_8 [2];
  
  if (cRam00000001834b2f73 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkDesempenho.Relacao>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkDesempenho.Relacao>.get_Count);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDesempenho);
    FUN_180315380(TI_SparkPet);
    cRam00000001834b2f73 = '\x01';
  }
  aiStackX_8[0] = 0;
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(param_1,0,0);
  if (cVar3 == '\0') {
    if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
      func_0x000180315660(TI_SparkDesempenho);
    }
    lVar6 = *(longlong *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x38);
    if (lVar6 == 0) {
code_r0x000180449f9c:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar5 = func_0x000181183c40(lVar6,MR_System.Collections.Generic.Dictionary<Entity,SparkDesempenho.Relacao>.get_Count);
    if (0 < iVar5) {
      if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
        func_0x000180315660(TI_SparkDesempenho);
      }
      lVar6 = *(longlong *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x38);
      if (lVar6 == 0) goto code_r0x000180449f9c;
      cVar3 = FUN_18125ae60(lVar6,param_1,aiStackX_8,MR_System.Collections.Generic.Dictionary<Entity,SparkDesempenho.Relacao>.TryGetValue);
      if (cVar3 != '\0') {
        return aiStackX_8[0] == 2;
      }
    }
    if (cRam00000001834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      cRam00000001834b2f32 = '\x01';
    }
    uVar1 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Equality(uVar1,0,0);
    if (cVar3 == '\0') {
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = UnityEngine_Object__op_Equality(param_1,uVar1,0);
      if (cVar3 != '\0') {
        return true;
      }
      if (cRam00000001834b3015 == '\0') {
        FUN_180315380(TI_TargetManager);
        cRam00000001834b3015 = '\x01';
      }
      uVar1 = **(undefined8 **)(TI_TargetManager + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
      if (cVar3 != '\0') {
        lVar6 = FUN_18043b810(0);
        if (lVar6 == 0) goto code_r0x000180449f9c;
        uVar1 = *(undefined8 *)(lVar6 + 0x20);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Equality(uVar1,param_1,0);
        if (cVar3 != '\0') {
          return true;
        }
      }
      if (*(int *)(TI_SparkPet + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar6 = FUN_18043b7c0(0);
      if (lVar6 != 0) {
        if (param_1 != 0) {
          if (*(longlong *)(param_1 + 0x30) == 0) {
            return false;
          }
          iVar5 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x14);
          if (*(int *)(TI_SparkPet + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar6 = FUN_18043b7c0(0);
          if (lVar6 != 0) {
            return iVar5 == *(int *)(lVar6 + 0x14);
          }
        }
        goto code_r0x000180449f9c;
      }
    }
  }
  return false;
}

