// LoginWindow__OnInputFocus__1807a0fb0 @ 0x1807a0fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__OnInputFocus__1807a0fb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  
  if (cRam00000001834b44c3 == '\0') {
    FUN_180315380(LIT_"'highlighted'");
    cRam00000001834b44c3 = '\x01';
  }
  if (param_3 == 0) {
    FUN_1803155d0();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  cVar8 = UnityEngine_UIElements_VisualElement__ClassListContains(param_3,LIT_"'highlighted'",0);
  uVar6 = LIT_"'highlighted'";
  if (cVar8 != '\0') {
    return;
  }
  if (DAT_1834c4697 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add,LIT_"'highlighted'",0);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Capacity);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.set_Capacity);
    FUN_180315380(MR_UnityEngine.UIElements.ObjectListPool<string>.Get);
    FUN_180315380(TI_UnityEngine.UIElements.ObjectListPool<string>);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    DAT_1834c4697 = '\x01';
  }
  cVar8 = func_0x000181707e50(uVar6,0);
  if (cVar8 != '\0') {
    return;
  }
  lVar2 = *(longlong *)(param_3 + 0x40);
  if (*(int *)(TI_UnityEngine.UIElements.VisualElement + 0xe4) == 0) {
    func_0x000180315660(TI_UnityEngine.UIElements.VisualElement);
  }
  if (lVar2 == *(longlong *)(*(longlong *)(TI_UnityEngine.UIElements.VisualElement + 0xb8) + 8)) {
    if (*(int *)(TI_UnityEngine.UIElements.ObjectListPool<string> + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar10 = FUN_180d0e450(MR_UnityEngine.UIElements.ObjectListPool<string>.Get);
    *(undefined8 *)(param_3 + 0x40) = uVar10;
    func_0x000180314690(param_3 + 0x40,uVar10);
  }
  else {
    if (*(longlong *)(param_3 + 0x40) == 0) goto LAB_1825c41c4;
    cVar8 = FUN_181647ac0(*(longlong *)(param_3 + 0x40),uVar6,MR_System.Collections.Generic.List<string>.Contains);
    if (cVar8 != '\0') {
      return;
    }
    if (*(longlong *)(param_3 + 0x40) == 0) goto LAB_1825c41c4;
    iVar9 = Animancer_AnimancerEvent_Sequence__get_Capacity
                      (*(longlong *)(param_3 + 0x40),MR_System.Collections.Generic.List<string>.get_Capacity);
    lVar2 = *(longlong *)(param_3 + 0x40);
    if (lVar2 == 0) goto LAB_1825c41c4;
    if (iVar9 == *(int *)(lVar2 + 0x18)) {
      iVar9 = Animancer_AnimancerEvent_Sequence__get_Capacity(lVar2,MR_System.Collections.Generic.List<string>.get_Capacity);
      FUN_180bbb170(lVar2,iVar9 + 1,MR_System.Collections.Generic.List<string>.set_Capacity);
    }
  }
  lVar7 = MR_System.Collections.Generic.List<string>.Add;
  lVar2 = *(longlong *)(param_3 + 0x40);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        if (*(uint *)(lVar3 + 0x18) <= uVar1) {
          FUN_1803155c0();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined8 *)(lVar3 + 0x20 + (longlong)(int)uVar1 * 8) = uVar6;
        func_0x000180314690(lVar3 + 0x20 + (longlong)(int)uVar1 * 8,uVar6);
      }
      else {
        FUN_181645af0(lVar2,uVar6,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      plVar4 = *(longlong **)(param_3 + 0x298);
      if (plVar4 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar4 + 0x388))(plVar4,param_3,0x10,*(undefined8 *)(*plVar4 + 0x390));
      return;
    }
  }
LAB_1825c41c4:
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

