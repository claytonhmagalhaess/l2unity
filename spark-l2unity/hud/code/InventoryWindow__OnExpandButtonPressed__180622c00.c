// InventoryWindow__OnExpandButtonPressed__180622c00 @ 0x180622c00

void InventoryWindow__OnExpandButtonPressed__180622c00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  
  if (cRam00000001834b3cd6 == '\0') {
    FUN_180315380(LIT_"'expanded'");
    cRam00000001834b3cd6 = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0xc0) == '\0') {
      cVar3 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar1,LIT_"'expanded'");
      if (cVar3 == '\0') {
        if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x000180622d45;
        UnityEngine_UIElements_VisualElement__AddToClassList
                  (*(longlong *)(param_1 + 0x30),LIT_"'expanded'",0);
      }
      if (*(longlong *)(param_1 + 200) == 0) goto code_r0x000180622d45;
      cVar3 = UnityEngine_UIElements_VisualElement__ClassListContains
                        (*(longlong *)(param_1 + 200),LIT_"'expanded'",0);
      if (cVar3 == '\0') {
        if (*(longlong *)(param_1 + 200) == 0) goto code_r0x000180622d45;
        UnityEngine_UIElements_VisualElement__AddToClassList
                  (*(longlong *)(param_1 + 200),LIT_"'expanded'",0);
      }
      uVar4 = 1;
    }
    else {
      cVar3 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar1,LIT_"'expanded'");
      if (cVar3 != '\0') {
        if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x000180622d45;
        UnityEngine_UIElements_VisualElement__RemoveFromClassList
                  (*(longlong *)(param_1 + 0x30),LIT_"'expanded'",0);
      }
      if (*(longlong *)(param_1 + 200) == 0) goto code_r0x000180622d45;
      cVar3 = UnityEngine_UIElements_VisualElement__ClassListContains
                        (*(longlong *)(param_1 + 200),LIT_"'expanded'",0);
      if (cVar3 != '\0') {
        if (*(longlong *)(param_1 + 200) == 0) goto code_r0x000180622d45;
        UnityEngine_UIElements_VisualElement__RemoveFromClassList
                  (*(longlong *)(param_1 + 200),LIT_"'expanded'",0);
      }
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0xc0) = uVar4;
    InventoryWindow__UpdateItemList__180623c10(param_1,*(undefined8 *)(param_1 + 0xe0),0);
    if (param_2 != 0) {
      *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) | 1;
      return;
    }
  }
code_r0x000180622d45:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

