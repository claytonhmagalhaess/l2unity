// LobbyNameplate__HideDeleteTimer__180673e90 @ 0x180673e90

void LobbyNameplate__HideDeleteTimer__180673e90(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  
  if (cRam00000001834b3dfc == '\0') {
    FUN_180315380(LIT_"'delete-timer'");
    cRam00000001834b3dfc = '\x01';
  }
  if (*(char *)(param_1 + 0x130) != '\0') {
    *(undefined1 *)(param_1 + 0x130) = 0;
    uVar3 = LIT_"'delete-timer'";
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar1,LIT_"'delete-timer'",0);
    if (cVar4 != '\0') {
      UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar1,uVar3,0);
    }
  }
  return;
}

