// SkillbarMain__ToggleLockSkillBar__1807033f0 @ 0x1807033f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarMain__ToggleLockSkillBar__1807033f0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  
  if (cRam00000001834b4162 == '\0') {
    FUN_180315380(LIT_"'locked'");
    cRam00000001834b4162 = '\x01';
  }
  if (cRam00000001834b32cb == '\0') {
    FUN_180315380(TI_SkillbarWindow);
    cRam00000001834b32cb = '\x01';
  }
  if ((**(longlong **)(TI_SkillbarWindow + 0xb8) == 0) ||
     (lVar2 = *(longlong *)(param_1 + 0x60), lVar2 == 0)) {
code_r0x0001807034b5:
    FUN_1803155d0();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(char *)(**(longlong **)(TI_SkillbarWindow + 0xb8) + 0x88) == '\0') {
    cVar9 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar2,LIT_"'locked'");
    uVar8 = LIT_"'locked'";
    if (cVar9 == '\0') {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (lVar2 != 0) {
      if (DAT_1834c4698 == '\0') {
        FUN_180315380(MR_System.Collections.Generic.List<string>.Remove,LIT_"'locked'",0);
        FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
        FUN_180315380(MR_UnityEngine.UIElements.ObjectListPool<string>.Release);
        FUN_180315380(TI_UnityEngine.UIElements.ObjectListPool<string>);
        FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
        DAT_1834c4698 = '\x01';
      }
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        cVar9 = FUN_18164eb60(*(longlong *)(lVar2 + 0x40),uVar8,MR_System.Collections.Generic.List<string>.Remove);
        if (cVar9 != '\0') {
          lVar3 = *(longlong *)(lVar2 + 0x40);
          if (lVar3 == 0) goto LAB_1825ca921;
          if (*(int *)(lVar3 + 0x18) == 0) {
            if (*(int *)(TI_UnityEngine.UIElements.ObjectListPool<string> + 0xe4) == 0) {
              func_0x000180315660();
            }
            FUN_180d0e7e0(lVar3,MR_UnityEngine.UIElements.ObjectListPool<string>.Release);
            if (*(int *)(TI_UnityEngine.UIElements.VisualElement + 0xe4) == 0) {
              func_0x000180315660(TI_UnityEngine.UIElements.VisualElement);
            }
            *(undefined8 *)(lVar2 + 0x40) =
                 *(undefined8 *)(*(longlong *)(TI_UnityEngine.UIElements.VisualElement + 0xb8) + 8);
            func_0x000180314690(lVar2 + 0x40);
          }
          plVar5 = *(longlong **)(lVar2 + 0x298);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x388))(plVar5,lVar2,0x10,*(undefined8 *)(*plVar5 + 0x390));
          }
        }
        return;
      }
LAB_1825ca921:
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    goto code_r0x0001807034b5;
  }
  cVar9 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar2,LIT_"'locked'");
  uVar8 = LIT_"'locked'";
  if (cVar9 != '\0') {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (lVar2 == 0) goto code_r0x0001807034b5;
  if (DAT_1834c4697 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add,LIT_"'locked'",0);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Capacity);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.set_Capacity);
    FUN_180315380(MR_UnityEngine.UIElements.ObjectListPool<string>.Get);
    FUN_180315380(TI_UnityEngine.UIElements.ObjectListPool<string>);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    DAT_1834c4697 = '\x01';
  }
  cVar9 = func_0x000181707e50(uVar8,0);
  if (cVar9 != '\0') {
    return;
  }
  lVar3 = *(longlong *)(lVar2 + 0x40);
  if (*(int *)(TI_UnityEngine.UIElements.VisualElement + 0xe4) == 0) {
    func_0x000180315660(TI_UnityEngine.UIElements.VisualElement);
  }
  if (lVar3 == *(longlong *)(*(longlong *)(TI_UnityEngine.UIElements.VisualElement + 0xb8) + 8)) {
    if (*(int *)(TI_UnityEngine.UIElements.ObjectListPool<string> + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar11 = FUN_180d0e450(MR_UnityEngine.UIElements.ObjectListPool<string>.Get);
    *(undefined8 *)(lVar2 + 0x40) = uVar11;
    func_0x000180314690(lVar2 + 0x40,uVar11);
  }
  else {
    if (*(longlong *)(lVar2 + 0x40) == 0) goto LAB_1825c41c4;
    cVar9 = FUN_181647ac0(*(longlong *)(lVar2 + 0x40),uVar8,MR_System.Collections.Generic.List<string>.Contains);
    if (cVar9 != '\0') {
      return;
    }
    if (*(longlong *)(lVar2 + 0x40) == 0) goto LAB_1825c41c4;
    iVar10 = Animancer_AnimancerEvent_Sequence__get_Capacity
                       (*(longlong *)(lVar2 + 0x40),MR_System.Collections.Generic.List<string>.get_Capacity);
    lVar3 = *(longlong *)(lVar2 + 0x40);
    if (lVar3 == 0) goto LAB_1825c41c4;
    if (iVar10 == *(int *)(lVar3 + 0x18)) {
      iVar10 = Animancer_AnimancerEvent_Sequence__get_Capacity(lVar3,MR_System.Collections.Generic.List<string>.get_Capacity);
      FUN_180bbb170(lVar3,iVar10 + 1,MR_System.Collections.Generic.List<string>.set_Capacity);
    }
  }
  lVar7 = MR_System.Collections.Generic.List<string>.Add;
  lVar3 = *(longlong *)(lVar2 + 0x40);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar3 + 0x10);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        if (*(uint *)(lVar4 + 0x18) <= uVar1) {
          FUN_1803155c0();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar1 * 8) = uVar8;
        func_0x000180314690(lVar4 + 0x20 + (longlong)(int)uVar1 * 8,uVar8);
      }
      else {
        FUN_181645af0(lVar3,uVar8,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      plVar5 = *(longlong **)(lVar2 + 0x298);
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar5 + 0x388))(plVar5,lVar2,0x10,*(undefined8 *)(*plVar5 + 0x390));
      return;
    }
  }
LAB_1825c41c4:
  FUN_1803155d0();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

