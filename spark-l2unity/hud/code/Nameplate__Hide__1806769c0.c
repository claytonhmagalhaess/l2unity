// Nameplate__Hide__1806769c0 @ 0x1806769c0

void Nameplate__Hide__1806769c0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  
  if (cRam00000001834b3e10 == '\0') {
    FUN_180315380(LIT_"'hidden'");
    cRam00000001834b3e10 = '\x01';
  }
  uVar3 = LIT_"'hidden'";
  if (*(char *)(param_1 + 0x78) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar1,LIT_"'hidden'",0);
    if (cVar4 == '\0') {
      UnityEngine_UIElements_VisualElement__AddToClassList(lVar1,uVar3,0);
    }
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  return;
}

