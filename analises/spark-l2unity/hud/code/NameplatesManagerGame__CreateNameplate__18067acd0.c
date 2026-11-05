// NameplatesManagerGame__CreateNameplate__18067acd0 @ 0x18067acd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong NameplatesManagerGame__CreateNameplate__18067acd0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (cRam00000001834b3e2f == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3e2f = '\x01';
  }
  if (cRam00000001834b3e20 == '\0') {
    FUN_180315380(TI_Nameplate);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'EntityName'");
    FUN_180315380(LIT_"'EntityTitle'");
    cRam00000001834b3e20 = '\x01';
  }
  if ((param_1[10] != 0) &&
     (lVar5 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(param_1[10],0), lVar5 != 0)) {
    uVar6 = UnityEngine_UIElements_VisualElement__get_Item(lVar5,0,0);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar7 = FUN_180b0e310(uVar6,LIT_"'EntityName'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    uVar8 = FUN_180b0e310(uVar6,LIT_"'EntityTitle'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    lVar5 = func_0x000180315580(TI_Nameplate);
    Nameplate___ctor__1806785e0(lVar5,uVar6,uVar7,uVar8,param_2,0);
    if (param_1[9] != 0) {
      UnityEngine_UIElements_VisualElement__Add(param_1[9],uVar6,0);
      if (DAT_1834b31bf == '\0') {
        FUN_180315380(TI_CameraController);
        DAT_1834b31bf = '\x01';
      }
      if (**(longlong **)(TI_CameraController + 0xb8) != 0) {
        iVar4 = func_0x000182427a70(*(undefined4 *)(**(longlong **)(TI_CameraController + 0xb8) + 0xa0),0
                                   );
        if (iVar4 != 0) {
          lVar9 = param_1[8];
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar3 = UnityEngine_Object__op_Inequality(lVar9,0,0);
          if (cVar3 != '\0') {
            if ((param_1[8] != 0) &&
               (lVar9 = UnityEngine_Component__get_transform(param_1[8],0), lVar9 != 0)) {
              puVar10 = (undefined8 *)UnityEngine_Transform__get_position(&uStack_38,lVar9,0);
              uVar6 = *puVar10;
              uVar1 = *(undefined4 *)(puVar10 + 1);
              uVar11 = FUN_1824366b0(0);
              uStack_38 = uVar6;
              uStack_30 = uVar1;
              NameplatesManagerGame__ConfereParede__18067a810(lVar5,&uStack_38,iVar4,uVar11,0);
              cVar3 = (**(code **)(*param_1 + 0x1b8))
                                (param_1,lVar5,*(undefined8 *)(*param_1 + 0x1c0));
              if (cVar3 == '\0') {
                return lVar5;
              }
              if (lVar5 != 0) {
                *(undefined1 *)(lVar5 + 0x48) = 0;
                Nameplate__Exibe__1806768f0(lVar5,0,0);
                return lVar5;
              }
            }
            goto code_r0x00018067af56;
          }
        }
        return lVar5;
      }
    }
  }
code_r0x00018067af56:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar5 = (*pcVar2)();
  return lVar5;
}

