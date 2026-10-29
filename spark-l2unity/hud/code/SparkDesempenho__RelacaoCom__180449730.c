// SparkDesempenho__RelacaoCom__180449730 @ 0x180449730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkDesempenho__RelacaoCom__180449730(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ushort uVar11;
  uint auStackX_8 [2];
  
  if (cRam00000001834b2f71 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkDesempenho.Relacao>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkDesempenho.Relacao>.get_Count);
    FUN_180315380(TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>);
    FUN_180315380(TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDesempenho);
    FUN_180315380(TI_SparkParty);
    FUN_180315380(TI_SparkPet);
    cRam00000001834b2f71 = '\x01';
  }
  auStackX_8[0] = 0;
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(param_1,0,0);
  if (cVar4 != '\0') {
    return 0;
  }
  if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
    func_0x000180315660(TI_SparkDesempenho);
  }
  lVar9 = *(longlong *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x38);
  if (lVar9 == 0) goto code_r0x000180449cd8;
  iVar5 = func_0x000181183c40(lVar9,MR_System.Collections.Generic.Dictionary<Entity,SparkDesempenho.Relacao>.get_Count);
  if (0 < iVar5) {
    if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
      func_0x000180315660(TI_SparkDesempenho);
    }
    lVar9 = *(longlong *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x38);
    if (lVar9 == 0) goto code_r0x000180449cd8;
    cVar4 = FUN_18125ae60(lVar9,param_1,auStackX_8,MR_System.Collections.Generic.Dictionary<Entity,SparkDesempenho.Relacao>.TryGetValue);
    if (cVar4 != '\0') {
      return (ulonglong)auStackX_8[0];
    }
  }
  if (cRam00000001834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    cRam00000001834b2f32 = '\x01';
  }
  lVar9 = **(longlong **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(lVar9,0,0);
  if (cVar4 != '\0') {
    return 0;
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(param_1,lVar9,0);
  if (cVar4 != '\0') {
    return 2;
  }
  if (cRam00000001834b3015 == '\0') {
    FUN_180315380(TI_TargetManager);
    cRam00000001834b3015 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_TargetManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar7 = FUN_18043b810(0);
    if (lVar7 == 0) goto code_r0x000180449cd8;
    uVar1 = *(undefined8 *)(lVar7 + 0x20);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Equality(uVar1,param_1,0);
    if (cVar4 != '\0') {
      return 2;
    }
  }
  if (*(int *)(TI_SparkPet + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar7 = FUN_18043b7c0(0);
  if (lVar7 == 0) {
code_r0x0001804499fa:
    if (param_1 == 0) goto code_r0x000180449cd8;
  }
  else {
    if (param_1 == 0) goto code_r0x000180449cd8;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x14);
      if (*(int *)(TI_SparkPet + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar7 = FUN_18043b7c0(0);
      if (lVar7 == 0) goto code_r0x000180449cd8;
      if (iVar5 == *(int *)(lVar7 + 0x14)) {
        return 2;
      }
      goto code_r0x0001804499fa;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar4 != '\0') {
    if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x000180449cd8;
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x30);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if (cVar4 != '\0') {
      if (lVar9 == 0) goto code_r0x000180449cd8;
      if (*(longlong *)(lVar9 + 0x30) != 0) {
        if ((*(longlong *)(param_1 + 0x20) == 0) ||
           (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30), lVar7 == 0))
        goto code_r0x000180449cd8;
        if (*(int *)(lVar7 + 0x28) == *(int *)(*(longlong *)(lVar9 + 0x30) + 0x14)) {
          return 2;
        }
        uVar1 = *(undefined8 *)(lVar7 + 0x30);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Equality(uVar1,lVar9,0);
        if (cVar4 != '\0') {
          return 2;
        }
        uVar1 = *(undefined8 *)(lVar7 + 0x38);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Equality(uVar1,lVar9,0);
        if (cVar4 != '\0') {
          return 2;
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (*(int *)(TI_SparkParty + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = SparkParty__get_EmParty(0);
    if (cVar4 != '\0') {
      if (*(int *)(TI_SparkParty + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b3017 == '\0') {
        FUN_180315380(TI_SparkParty);
        cRam00000001834b3017 = '\x01';
      }
      if (*(int *)(TI_SparkParty + 0xe4) == 0) {
        func_0x000180315660();
      }
      plVar2 = (longlong *)**(longlong **)(TI_SparkParty + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        iVar5 = 0;
        do {
          lVar9 = *plVar2;
          if (*(ushort *)(lVar9 + 0x12e) != 0) {
            uVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                  TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>) {
                puVar8 = (undefined8 *)
                         ((longlong)
                          *(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) *
                          0x10 + 0x138 + lVar9);
                goto code_r0x000180449bf6;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ushort *)(lVar9 + 0x12e));
          }
          puVar8 = (undefined8 *)FUN_180312860(plVar2,TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>,0);
code_r0x000180449bf6:
          iVar6 = (*(code *)*puVar8)(plVar2,puVar8[1]);
          if (iVar6 <= iVar5) {
            return 0;
          }
          lVar9 = *plVar2;
          if (*(ushort *)(lVar9 + 0x12e) != 0) {
            uVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                  TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>) {
                puVar8 = (undefined8 *)
                         ((longlong)
                          *(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) *
                          0x10 + 0x138 + lVar9);
                goto code_r0x000180449c52;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ushort *)(lVar9 + 0x12e));
          }
          puVar8 = (undefined8 *)FUN_180312860(plVar2,TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>,0);
code_r0x000180449c52:
          lVar9 = (*(code *)*puVar8)(plVar2,iVar5);
          if ((lVar9 == 0) || (*(longlong *)(param_1 + 0x30) == 0)) break;
          if (*(int *)(lVar9 + 0x10) == *(int *)(*(longlong *)(param_1 + 0x30) + 0x14)) {
            return 1;
          }
          iVar5 = iVar5 + 1;
        } while( true );
      }
code_r0x000180449cd8:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return uVar10;
    }
  }
  return 0;
}

