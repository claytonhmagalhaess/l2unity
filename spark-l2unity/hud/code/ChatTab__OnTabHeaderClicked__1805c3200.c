// ChatTab__OnTabHeaderClicked__1805c3200 @ 0x1805c3200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ChatTab__OnTabHeaderClicked__1805c3200(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 == 0) {
    FUN_1803155d0(param_1,0);
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  if (DAT_1834b4462 == '\0') {
    FUN_180315380(LIT_"'window_open'");
    FUN_180315380(LIT_"'active'");
    FUN_180315380(LIT_"'unselected-tab'");
    DAT_1834b4462 = '\x01';
  }
  if (*(longlong *)(lVar2 + 0x30) == param_1) {
    return 0;
  }
  if (*(longlong *)(lVar2 + 0x30) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x20);
    if (lVar1 == 0) goto LAB_180795682;
    UnityEngine_UIElements_VisualElement__AddToClassList(lVar1,LIT_"'unselected-tab'",0);
    if ((*(longlong *)(lVar2 + 0x30) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x28), lVar1 == 0)) goto LAB_180795682;
    UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar1,LIT_"'active'",0);
  }
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    UnityEngine_UIElements_VisualElement__RemoveFromClassList
              (*(longlong *)(param_1 + 0x20),LIT_"'unselected-tab'",0);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      UnityEngine_UIElements_VisualElement__AddToClassList
                (*(longlong *)(param_1 + 0x28),LIT_"'active'",0);
      if (DAT_1834b301f == '\0') {
        FUN_180315380(TI_AudioManager);
        DAT_1834b301f = '\x01';
      }
      if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
        AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_open'",0);
        *(longlong *)(lVar2 + 0x30) = param_1;
        func_0x000180314690(lVar2 + 0x30,param_1);
        return 1;
      }
    }
  }
LAB_180795682:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}

