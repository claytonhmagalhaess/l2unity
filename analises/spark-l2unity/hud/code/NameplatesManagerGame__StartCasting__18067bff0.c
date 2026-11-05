// NameplatesManagerGame__StartCasting__18067bff0 @ 0x18067bff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerGame__StartCasting__18067bff0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  float fVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    fVar5 = (float)FUN_182436650(0);
    if (cRam00000001834b3e13 == '\0') {
      FUN_180315380(LIT_"'gauge'");
      cRam00000001834b3e13 = '\x01';
    }
    *(float *)(lVar1 + 0x134) = fVar5;
    *(float *)(lVar1 + 0x138) = (float)param_3 / 1000.0 + fVar5;
    if (*(char *)(lVar1 + 0x130) == '\0') {
      *(undefined1 *)(lVar1 + 0x130) = 1;
      uVar3 = LIT_"'gauge'";
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cVar4 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar1,LIT_"'gauge'",0);
      if (cVar4 == '\0') {
        UnityEngine_UIElements_VisualElement__AddToClassList(lVar1,uVar3,0);
      }
    }
  }
  return;
}

