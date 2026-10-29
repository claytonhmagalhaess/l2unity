// SparkDetalhePersonagem__DesfazLods__180496ba0 @ 0x180496ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDetalhePersonagem__DesfazLods__180496ba0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b327d == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.Clear);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkDetalhePersonagem.Estado>.get_Values);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkDetalhePersonagem.Estado>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkDetalhePersonagem.Estado>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkDetalhePersonagem.Estado>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.get_Value);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkDetalhePersonagem.Estado>.GetEnumerator);
    cRam00000001834b327d = '\x01';
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_18117ccd0(&uStack_a8,*(longlong *)(param_1 + 0x58),MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.GetEnumerator);
    uStack_68 = uStack_a8;
    puStack_60 = puStack_a0;
    lStack_58 = lStack_98;
    lStack_50 = lStack_90;
    uStack_48 = uStack_88;
    uStack_a8 = 0;
    puStack_a0 = &uStack_68;
code_r0x000180496cd4:
    do {
      cVar4 = FUN_18133c520(&uStack_68,MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.MoveNext);
      lVar3 = lStack_50;
      lVar6 = lStack_58;
      if (cVar4 == '\0') goto code_r0x000180496dd0;
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = UnityEngine_Object__op_Inequality(lVar6,0,0);
      if (cVar4 != '\0') {
        if (lVar3 != 0) {
          uVar1 = *(undefined8 *)(lVar3 + 0x10);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
          if (cVar4 == '\0') goto code_r0x000180496cd4;
          if (lVar6 != 0) {
            uVar5 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(lVar6,0);
            uVar1 = *(undefined8 *)(lVar3 + 0x10);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar4 = UnityEngine_Object__op_Inequality(uVar5,uVar1,0);
            if (cVar4 != '\0') {
              uVar1 = *(undefined8 *)(lVar3 + 0x10);
              uVar5 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(lVar6,0);
              cVar4 = SparkDetalhePersonagem__EhSimplificadaDe__180496f20(param_1,uVar1,uVar5,0);
              if (cVar4 != '\0') {
                UnityEngine_SkinnedMeshRenderer__set_sharedMesh(lVar6,*(undefined8 *)(lVar3 + 0x10))
                ;
              }
            }
            goto code_r0x000180496cd4;
          }
          FUN_1803155d0();
        }
        FUN_1803155d0();
        FUN_180311490();
        goto code_r0x000180496f04;
      }
    } while( true );
  }
code_r0x000180496f10:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_r0x000180496dd0:
  func_0x0001803dadf0(&uStack_68,MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.Dispose);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_18117b6e0(*(longlong *)(param_1 + 0x58),MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.Clear);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      lVar6 = FUN_18117fd20(*(longlong *)(param_1 + 0x38),MR_System.Collections.Generic.Dictionary<Entity,SparkDetalhePersonagem.Estado>.get_Values);
      if (lVar6 != 0) {
        FUN_180fbde10(&uStack_a8,lVar6,MR_System.Collections.Generic.Dictionary<Entity,SparkDetalhePersonagem.Estado>.GetEnumerator);
        uStack_80 = uStack_a8;
        puStack_78 = puStack_a0;
        lStack_70 = lStack_98;
        uStack_a8 = 0;
        puStack_a0 = &uStack_80;
        while( true ) {
          cVar4 = FUN_1813194f0(&uStack_80,MR_System.Collections.Generic.Dictionary<Entity,SparkDetalhePersonagem.Estado>.MoveNext);
          if (cVar4 == '\0') {
            func_0x0001803dadf0(&uStack_80,MR_System.Collections.Generic.Dictionary<Entity,SparkDetalhePersonagem.Estado>.Dispose);
            return;
          }
          if (lStack_70 == 0) break;
          *(undefined4 *)(lStack_70 + 0x18) = 0;
          *(undefined1 *)(lStack_70 + 0x1c) = 1;
        }
code_r0x000180496f04:
        FUN_1803155d0();
        FUN_180311490();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  goto code_r0x000180496f10;
}

