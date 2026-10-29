// LoginWindow__OnInputBlur__1807a0f40 @ 0x1807a0f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__OnInputBlur__1807a0f40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  
  if (cRam00000001834b44c4 == '\0') {
    FUN_180315380(LIT_"'highlighted'");
    cRam00000001834b44c4 = '\x01';
  }
  if (param_3 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar5 = UnityEngine_UIElements_VisualElement__ClassListContains(param_3,LIT_"'highlighted'",0);
  uVar4 = LIT_"'highlighted'";
  if (cVar5 == '\0') {
    return;
  }
  if (DAT_1834c4698 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.Remove,LIT_"'highlighted'",0);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_UnityEngine.UIElements.ObjectListPool<string>.Release);
    FUN_180315380(TI_UnityEngine.UIElements.ObjectListPool<string>);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    DAT_1834c4698 = '\x01';
  }
  if (*(longlong *)(param_3 + 0x40) != 0) {
    cVar5 = FUN_18164eb60(*(longlong *)(param_3 + 0x40),uVar4,MR_System.Collections.Generic.List<string>.Remove);
    if (cVar5 != '\0') {
      lVar1 = *(longlong *)(param_3 + 0x40);
      if (lVar1 == 0) goto LAB_1825ca921;
      if (*(int *)(lVar1 + 0x18) == 0) {
        if (*(int *)(TI_UnityEngine.UIElements.ObjectListPool<string> + 0xe4) == 0) {
          func_0x000180315660();
        }
        FUN_180d0e7e0(lVar1,MR_UnityEngine.UIElements.ObjectListPool<string>.Release);
        if (*(int *)(TI_UnityEngine.UIElements.VisualElement + 0xe4) == 0) {
          func_0x000180315660(TI_UnityEngine.UIElements.VisualElement);
        }
        *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(*(longlong *)(TI_UnityEngine.UIElements.VisualElement + 0xb8) + 8);
        func_0x000180314690(param_3 + 0x40);
      }
      plVar2 = *(longlong **)(param_3 + 0x298);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x388))(plVar2,param_3,0x10,*(undefined8 *)(*plVar2 + 0x390));
      }
    }
    return;
  }
LAB_1825ca921:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

