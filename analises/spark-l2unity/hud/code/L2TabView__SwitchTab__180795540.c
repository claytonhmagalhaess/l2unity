// L2TabView__SwitchTab__180795540 @ 0x180795540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 L2TabView__SwitchTab__180795540(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (DAT_1834b4462 == '\0') {
    FUN_180315380(LIT_"'window_open'");
    FUN_180315380(LIT_"'active'");
    FUN_180315380(LIT_"'unselected-tab'");
    DAT_1834b4462 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x30) == param_2) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x20);
    if (lVar1 == 0) goto LAB_180795682;
    UnityEngine_UIElements_VisualElement__AddToClassList(lVar1,LIT_"'unselected-tab'",0);
    if ((*(longlong *)(param_1 + 0x30) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28), lVar1 == 0))
    goto LAB_180795682;
    UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar1,LIT_"'active'",0);
  }
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x20) != 0)) {
    UnityEngine_UIElements_VisualElement__RemoveFromClassList
              (*(longlong *)(param_2 + 0x20),LIT_"'unselected-tab'",0);
    if (*(longlong *)(param_2 + 0x28) != 0) {
      UnityEngine_UIElements_VisualElement__AddToClassList
                (*(longlong *)(param_2 + 0x28),LIT_"'active'",0);
      if (DAT_1834b301f == '\0') {
        FUN_180315380(TI_AudioManager);
        DAT_1834b301f = '\x01';
      }
      if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
        AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_open'",0);
        *(longlong *)(param_1 + 0x30) = param_2;
        func_0x000180314690(param_1 + 0x30,param_2);
        return 1;
      }
    }
  }
LAB_180795682:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}

