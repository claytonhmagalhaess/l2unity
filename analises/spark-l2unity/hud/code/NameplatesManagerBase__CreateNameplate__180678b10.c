// NameplatesManagerBase__CreateNameplate__180678b10 @ 0x180678b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 NameplatesManagerBase__CreateNameplate__180678b10(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3e20 == '\0') {
    FUN_180315380(TI_Nameplate);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'EntityName'");
    FUN_180315380(LIT_"'EntityTitle'");
    cRam00000001834b3e20 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar2 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(param_1 + 0x50),0);
    if (lVar2 != 0) {
      uVar3 = UnityEngine_UIElements_VisualElement__get_Item(lVar2,0,0);
      if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = FUN_180b0e310(uVar3,LIT_"'EntityName'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
      uVar5 = FUN_180b0e310(uVar3,LIT_"'EntityTitle'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
      uVar6 = func_0x000180315580(TI_Nameplate);
      Nameplate___ctor__1806785e0(uVar6,uVar3,uVar4,uVar5,param_2,0);
      if (*(longlong *)(param_1 + 0x48) != 0) {
        UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar3,0);
        return uVar6;
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

