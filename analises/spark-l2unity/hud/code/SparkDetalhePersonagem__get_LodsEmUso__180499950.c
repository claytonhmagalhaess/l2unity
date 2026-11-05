// SparkDetalhePersonagem__get_LodsEmUso__180499950 @ 0x180499950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkDetalhePersonagem__get_LodsEmUso__180499950(void)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  
  if (cRam00000001834b3273 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.get_Value);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDetalhePersonagem);
    cRam00000001834b3273 = '\x01';
  }
  if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
    func_0x000180315660(TI_SparkDetalhePersonagem);
  }
  uVar1 = **(undefined8 **)(TI_SparkDetalhePersonagem + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar5 != '\0') {
    return 0;
  }
  if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
    func_0x000180315660(TI_SparkDetalhePersonagem);
  }
  if ((**(longlong **)(TI_SparkDetalhePersonagem + 0xb8) == 0) ||
     (lVar2 = *(longlong *)(**(longlong **)(TI_SparkDetalhePersonagem + 0xb8) + 0x58), lVar2 == 0)) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  uVar7 = 0;
  FUN_18117ccd0(&uStack_48,lVar2,MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.GetEnumerator);
  uStack_70 = uStack_48;
  uStack_68 = uStack_40;
  lStack_60 = lStack_38;
  lStack_58 = lStack_30;
  uStack_50 = uStack_28;
  while( true ) {
    do {
      do {
        cVar5 = FUN_18133c520(&uStack_70,MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.MoveNext);
        lVar4 = lStack_58;
        lVar2 = lStack_60;
        if (cVar5 == '\0') {
          func_0x0001803dadf0(&uStack_70,MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.Dispose);
          return uVar7;
        }
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(lVar2,0,0);
      } while (cVar5 == '\0');
      if (lVar4 == 0) goto code_r0x000180499bdb;
      uVar1 = *(undefined8 *)(lVar4 + 0x10);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar5 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    } while (cVar5 == '\0');
    if (lVar2 == 0) break;
    uVar6 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(lVar2,0);
    uVar1 = *(undefined8 *)(lVar4 + 0x10);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = UnityEngine_Object__op_Inequality(uVar6,uVar1,0);
    if (cVar5 != '\0') {
      uVar7 = (ulonglong)((int)uVar7 + 1);
    }
  }
  FUN_1803155d0();
code_r0x000180499bdb:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return uVar7;
}

