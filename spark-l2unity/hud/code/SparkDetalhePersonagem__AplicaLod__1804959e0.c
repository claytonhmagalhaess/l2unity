// SparkDetalhePersonagem__AplicaLod__1804959e0 @ 0x1804959e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkDetalhePersonagem__AplicaLod__1804959e0
                    (longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  longlong lStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong lStack_30;
  
  if (cRam00000001834b3276 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponentsInChildren<UnityEngine.SkinnedMeshRenderer>);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.ContainsKey);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.set_Item);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.SkinnedMeshRenderer>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.SkinnedMeshRenderer>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.SkinnedMeshRenderer>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.SkinnedMeshRenderer>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.SkinnedMeshRenderer>.GetEnumerator);
    FUN_180315380(TI_SparkDetalhePersonagem.Lod);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3276 = '\x01';
  }
  lStack_68 = 0;
  if (param_2 != 0) {
    FUN_180997280(param_2,1,*(undefined8 *)(param_1 + 0x60),MR_UnityEngine.Component.GetComponentsInChildren<UnityEngine.SkinnedMeshRenderer>);
    if (*(longlong *)(param_1 + 0x60) != 0) {
      bVar10 = 1;
      FUN_180bada40(&uStack_58,*(longlong *)(param_1 + 0x60),MR_System.Collections.Generic.List<UnityEngine.SkinnedMeshRenderer>.GetEnumerator);
      uStack_40 = (undefined4)uStack_58;
      uStack_3c = uStack_58._4_4_;
      uStack_38 = (undefined4)uStack_50;
      uStack_34 = uStack_50._4_4_;
      lStack_30 = lStack_48;
      uStack_58 = 0;
      uStack_50 = &uStack_40;
code_r0x000180495b10:
      do {
        cVar5 = FUN_1812fa7e0(&uStack_40,MR_System.Collections.Generic.List<UnityEngine.SkinnedMeshRenderer>.MoveNext);
        lVar3 = lStack_30;
        if (cVar5 == '\0') goto code_r0x000180495d7d;
        if (lStack_30 == 0) goto code_r0x000180495e49;
        uVar6 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(lStack_30,0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Equality(uVar6,0,0);
        if (cVar5 == '\0') {
          cVar5 = UnityEngine_Renderer__get_enabled(lVar3,0);
          if (cVar5 == '\0') {
            if (*(longlong *)(param_1 + 0x58) == 0) goto code_r0x000180495e0c;
            cVar5 = FUN_18124cf10(*(longlong *)(param_1 + 0x58),lVar3);
            if (cVar5 == '\0') goto code_r0x000180495b10;
          }
          if (*(longlong *)(param_1 + 0x58) == 0) goto code_r0x000180495e44;
          cVar5 = FUN_1812698d0(*(longlong *)(param_1 + 0x58),lVar3);
          if (cVar5 == '\0') {
            lStack_68 = func_0x000180315580(TI_SparkDetalhePersonagem.Lod);
            func_0x0001803dadf0(lStack_68,0);
            if (lStack_68 == 0) goto code_r0x000180495e3f;
            *(undefined8 *)(lStack_68 + 0x10) = uVar6;
            func_0x000180314690(lStack_68 + 0x10,uVar6);
            if (*(longlong *)(param_1 + 0x58) == 0) goto code_r0x000180495e3a;
            FUN_18126c020(*(longlong *)(param_1 + 0x58),lVar3);
          }
          else {
            if (lStack_68 == 0) goto code_r0x000180495e1c;
            uVar2 = *(undefined8 *)(lStack_68 + 0x10);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar5 = UnityEngine_Object__op_Inequality(uVar6,uVar2);
            if (cVar5 != '\0') {
              if (lStack_68 == 0) goto code_r0x000180495e17;
              cVar5 = SparkDetalhePersonagem__EhSimplificadaDe__180496f20
                                (param_1,*(undefined8 *)(lStack_68 + 0x10));
              if (cVar5 == '\0') {
                if (lStack_68 == 0) goto code_r0x000180495e12;
                *(undefined8 *)(lStack_68 + 0x10) = uVar6;
                func_0x000180314690(lStack_68 + 0x10,uVar6);
              }
            }
          }
          if (lStack_68 == 0) goto code_r0x000180495e35;
          lVar9 = *(longlong *)(lStack_68 + 0x10);
          if (0 < param_3) {
            cVar5 = UnityEngine_Renderer__get_enabled(lVar3,0);
            if (cVar5 != '\0') {
              if (lStack_68 == 0) goto code_r0x000180495e30;
              lVar7 = SparkDetalhePersonagem__Simplificadas__180498e90
                                (param_1,*(undefined8 *)(lStack_68 + 0x10));
              if (lVar7 == 0) {
                bVar10 = 0;
              }
              else {
                if (*(uint *)(lVar7 + 0x18) <= param_3 - 1U) goto code_r0x000180495e21;
                lVar9 = *(longlong *)(lVar7 + 0x18 + (longlong)param_3 * 8);
                if (lVar9 == 0) {
                  if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x000180495e26;
                  lVar9 = *(longlong *)(lVar7 + 0x20);
                  if (lVar9 == 0) {
                    if (lStack_68 == 0) goto code_r0x000180495e2b;
                    lVar9 = *(longlong *)(lStack_68 + 0x10);
                  }
                }
              }
            }
          }
          uVar6 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(lVar3,0);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar5 = UnityEngine_Object__op_Inequality(uVar6,lVar9);
          if (cVar5 != '\0') {
            UnityEngine_SkinnedMeshRenderer__set_sharedMesh(lVar3,lVar9);
          }
        }
      } while( true );
    }
  }
code_r0x000180495e06:
  FUN_1803155d0();
code_r0x000180495e0c:
  FUN_1803155d0();
code_r0x000180495e12:
  FUN_1803155d0();
code_r0x000180495e17:
  FUN_1803155d0();
code_r0x000180495e1c:
  FUN_1803155d0();
code_r0x000180495e21:
  FUN_1803155c0();
code_r0x000180495e26:
  FUN_1803155c0();
code_r0x000180495e2b:
  FUN_1803155d0();
code_r0x000180495e30:
  FUN_1803155d0();
code_r0x000180495e35:
  FUN_1803155d0();
code_r0x000180495e3a:
  FUN_1803155d0();
code_r0x000180495e3f:
  FUN_1803155d0();
code_r0x000180495e44:
  FUN_1803155d0();
code_r0x000180495e49:
  FUN_1803155d0();
  FUN_180311490();
  pcVar4 = (code *)swi(3);
  uVar8 = (*pcVar4)();
  return uVar8;
code_r0x000180495d7d:
  func_0x0001803dadf0(&uStack_40,MR_System.Collections.Generic.List<UnityEngine.SkinnedMeshRenderer>.Dispose);
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    iVar1 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
    }
    return (ulonglong)bVar10;
  }
  goto code_r0x000180495e06;
}

