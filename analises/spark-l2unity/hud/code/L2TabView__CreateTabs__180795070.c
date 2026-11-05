// L2TabView__CreateTabs__180795070 @ 0x180795070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2TabView__CreateTabs__180795070(longlong param_1,char param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  
  if (cRam00000001834b4461 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'tab-header-container is null'");
    FUN_180315380(LIT_"'tab-header-container'");
    FUN_180315380(LIT_"'tab-content-container'");
    FUN_180315380(LIT_"'unselected-tab'");
    cRam00000001834b4461 = '\x01';
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = FUN_180b0e310(uVar1,LIT_"'tab-header-container'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
  if (lVar3 == 0) {
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogError(LIT_"'tab-header-container is null'",0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar4 = FUN_180b0e310(uVar1,LIT_"'tab-content-container'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
  if (lVar4 == 0) {
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogError(LIT_"'tab-content-container'");
  }
  lVar8 = *(longlong *)(param_1 + 0x18);
  uVar9 = 0;
  if (lVar8 != 0) {
    while (lVar5 = *(longlong *)(param_1 + 0x18), (int)uVar9 < *(int *)(lVar8 + 0x18)) {
      if (param_2 == '\0') {
        if (lVar5 == 0) goto code_r0x0001807953a5;
        if (*(uint *)(lVar5 + 0x18) <= uVar9) goto code_r0x0001807953ab;
        lVar8 = *(longlong *)(lVar5 + 0x20 + (longlong)(int)uVar9 * 8);
      }
      else {
        if (lVar5 == 0) goto code_r0x0001807953a5;
        lVar8 = (longlong)(int)(*(int *)(lVar5 + 0x18) - uVar9) + -1;
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar8) {
code_r0x0001807953ab:
          FUN_1803155c0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar8 = *(longlong *)(lVar5 + 0x20 + lVar8 * 8);
      }
      if ((((*(longlong *)(param_1 + 0x20) == 0) ||
           (lVar5 = func_0x00018265d4f0(*(longlong *)(param_1 + 0x20),0), lVar5 == 0)) ||
          (lVar5 = UnityEngine_UIElements_VisualElement__get_Item(lVar5,0,0), lVar8 == 0)) ||
         (lVar5 == 0)) goto code_r0x0001807953a5;
      UnityEngine_UIElements_VisualElement__set_name(lVar5,*(undefined8 *)(lVar8 + 0x10),0);
      UnityEngine_UIElements_VisualElement__AddToClassList(lVar5,LIT_"'unselected-tab'",0);
      if (((*(longlong *)(param_1 + 0x28) == 0) ||
          (lVar6 = func_0x00018265d4f0(*(longlong *)(param_1 + 0x28),0), lVar6 == 0)) ||
         (lVar6 = UnityEngine_UIElements_VisualElement__get_Item(lVar6,0,0), lVar6 == 0))
      goto code_r0x0001807953a5;
      UnityEngine_UIElements_VisualElement__set_name(lVar6,*(undefined8 *)(lVar8 + 0x10),0);
      if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
        func_0x000180315660();
      }
      plVar7 = (longlong *)FUN_180b0e310(lVar6,0,0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
      if (((plVar7 == (longlong *)0x0) ||
          ((**(code **)(*plVar7 + 0xe48))
                     (plVar7,*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(*plVar7 + 0xe50)),
          lVar3 == 0)) || (UnityEngine_UIElements_VisualElement__Add(lVar3,lVar6,0), lVar4 == 0))
      goto code_r0x0001807953a5;
      UnityEngine_UIElements_VisualElement__Add(lVar4,lVar5,0);
      FUN_180007640(4,lVar8,param_1,lVar5,lVar6);
      lVar8 = *(longlong *)(param_1 + 0x18);
      uVar9 = uVar9 + 1;
      if (lVar8 == 0) goto code_r0x0001807953a5;
    }
    if (lVar5 != 0) {
      if (*(longlong *)(lVar5 + 0x18) != 0) {
        if (*(int *)(lVar5 + 0x18) == 0) goto code_r0x0001807953ab;
        L2TabView__SwitchTab__180795540(param_1,*(undefined8 *)(lVar5 + 0x20),0);
      }
      return;
    }
  }
code_r0x0001807953a5:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

