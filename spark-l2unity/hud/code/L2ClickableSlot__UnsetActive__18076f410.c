// L2ClickableSlot__UnsetActive__18076f410 @ 0x18076f410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ClickableSlot__UnsetActive__18076f410(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  
  if (cRam00000001834b43d6 == '\0') {
    FUN_180315380(LIT_"'active'");
    cRam00000001834b43d6 = '\x01';
  }
  uVar5 = LIT_"'active'";
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (DAT_1834c4698 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.Remove,LIT_"'active'",0);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_UnityEngine.UIElements.ObjectListPool<string>.Release);
    FUN_180315380(TI_UnityEngine.UIElements.ObjectListPool<string>);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    DAT_1834c4698 = '\x01';
  }
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    cVar6 = FUN_18164eb60(*(longlong *)(lVar1 + 0x40),uVar5,MR_System.Collections.Generic.List<string>.Remove);
    if (cVar6 != '\0') {
      lVar2 = *(longlong *)(lVar1 + 0x40);
      if (lVar2 == 0) goto LAB_1825ca921;
      if (*(int *)(lVar2 + 0x18) == 0) {
        if (*(int *)(TI_UnityEngine.UIElements.ObjectListPool<string> + 0xe4) == 0) {
          func_0x000180315660();
        }
        FUN_180d0e7e0(lVar2,MR_UnityEngine.UIElements.ObjectListPool<string>.Release);
        if (*(int *)(TI_UnityEngine.UIElements.VisualElement + 0xe4) == 0) {
          func_0x000180315660(TI_UnityEngine.UIElements.VisualElement);
        }
        *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(*(longlong *)(TI_UnityEngine.UIElements.VisualElement + 0xb8) + 8);
        func_0x000180314690(lVar1 + 0x40);
      }
      plVar3 = *(longlong **)(lVar1 + 0x298);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x388))(plVar3,lVar1,0x10,*(undefined8 *)(*plVar3 + 0x390));
      }
    }
    return;
  }
LAB_1825ca921:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

