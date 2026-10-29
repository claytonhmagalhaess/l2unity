// NameplatesManagerGame__StopCasting__18067c0b0 @ 0x18067c0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerGame__StopCasting__18067c0b0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 == 0) {
    return;
  }
  if (DAT_1834b3e14 == '\0') {
    FUN_180315380(LIT_"'gauge'",0);
    DAT_1834b3e14 = '\x01';
  }
  if (*(char *)(lVar1 + 0x130) != '\0') {
    *(undefined1 *)(lVar1 + 0x130) = 0;
    uVar3 = LIT_"'gauge'";
    lVar1 = *(longlong *)(lVar1 + 0x10);
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

