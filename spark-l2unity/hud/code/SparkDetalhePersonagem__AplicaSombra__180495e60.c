// SparkDetalhePersonagem__AplicaSombra__180495e60 @ 0x180495e60

void SparkDetalhePersonagem__AplicaSombra__180495e60(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int aiStackX_10 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong *plStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *plStack_28;
  
  if (cRam00000001834b3270 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponentsInChildren<UnityEngine.Renderer>);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Renderer,UnityEngine.Rendering.ShadowCastingMode>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Renderer,UnityEngine.Rendering.ShadowCastingMode>.set_Item);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Renderer>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Renderer>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Renderer>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Renderer>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Renderer>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.MeshRenderer);
    FUN_180315380(TI_UnityEngine.SkinnedMeshRenderer);
    cRam00000001834b3270 = '\x01';
  }
  aiStackX_10[0] = 0;
  if (param_2 != 0) {
    FUN_180997280(param_2,1,*(undefined8 *)(param_1 + 0x48),MR_UnityEngine.Component.GetComponentsInChildren<UnityEngine.Renderer>);
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_180bada40(&uStack_50,*(longlong *)(param_1 + 0x48),MR_System.Collections.Generic.List<UnityEngine.Renderer>.GetEnumerator);
      uStack_38 = (undefined4)uStack_50;
      uStack_34 = uStack_50._4_4_;
      uStack_30 = (undefined4)uStack_48;
      uStack_2c = uStack_48._4_4_;
      plStack_28 = plStack_40;
      uStack_50 = 0;
      uStack_48 = &uStack_38;
code_r0x000180495f80:
      cVar5 = FUN_1812fa7e0(&uStack_38,MR_System.Collections.Generic.List<UnityEngine.Renderer>.MoveNext);
      plVar4 = plStack_28;
      if (cVar5 != '\0') {
        if (plStack_28 != (longlong *)0x0) {
          lVar2 = *plStack_28;
          if ((*(byte *)(lVar2 + 0x130) < *(byte *)(TI_UnityEngine.SkinnedMeshRenderer + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(lVar2 + 200) + -8 +
               (ulonglong)*(byte *)(TI_UnityEngine.SkinnedMeshRenderer + 0x130) * 8) != TI_UnityEngine.SkinnedMeshRenderer)) {
            if ((*(byte *)(lVar2 + 0x130) < *(byte *)(TI_UnityEngine.MeshRenderer + 0x130)) ||
               (*(longlong *)
                 (*(longlong *)(lVar2 + 200) + -8 +
                 (ulonglong)*(byte *)(TI_UnityEngine.MeshRenderer + 0x130) * 8) != TI_UnityEngine.MeshRenderer))
            goto code_r0x000180495f80;
          }
          if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001804960fd;
          cVar5 = FUN_18125ae60(*(longlong *)(param_1 + 0x40),plStack_28,aiStackX_10);
          if (cVar5 == '\0') {
            aiStackX_10[0] = UnityEngine_Renderer__get_shadowCastingMode(plVar4,0);
            if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001804960f7;
            FUN_18126c160(*(longlong *)(param_1 + 0x40),plVar4,aiStackX_10[0]);
          }
          if (aiStackX_10[0] == 1) {
            uVar6 = UnityEngine_Renderer__get_shadowCastingMode(plVar4,0);
            if (uVar6 != (param_3 & 0xff)) {
              UnityEngine_Renderer__set_shadowCastingMode(plVar4,param_3 & 0xff,0);
            }
          }
        }
        goto code_r0x000180495f80;
      }
      func_0x0001803dadf0(&uStack_38,MR_System.Collections.Generic.List<UnityEngine.Renderer>.Dispose);
      lVar2 = *(longlong *)(param_1 + 0x48);
      if (lVar2 != 0) {
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        iVar1 = *(int *)(lVar2 + 0x18);
        *(undefined4 *)(lVar2 + 0x18) = 0;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
        }
        return;
      }
    }
  }
  FUN_1803155d0();
code_r0x0001804960f7:
  FUN_1803155d0();
code_r0x0001804960fd:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

