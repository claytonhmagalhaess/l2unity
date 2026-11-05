// PlayerNameplate__HideGauge__1806a2530 @ 0x1806a2530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerNameplate__HideGauge__1806a2530(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  
  if (DAT_1834b3e14 == '\0') {
    FUN_180315380(LIT_"'gauge'");
    DAT_1834b3e14 = '\x01';
  }
  if (*(char *)(param_1 + 0x130) != '\0') {
    *(undefined1 *)(param_1 + 0x130) = 0;
    uVar3 = LIT_"'gauge'";
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar1,LIT_"'gauge'",0);
    if (cVar4 != '\0') {
      UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar1,uVar3,0);
    }
  }
  return;
}

