// HighlightedInputFieldManipulator__NextBackgroundFrame__1807af090 @ 0x1807af090

void HighlightedInputFieldManipulator__NextBackgroundFrame__1807af090(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b4511 == '\0') {
    FUN_180315380(LIT_"'bg-highlight-'");
    cRam00000001834b4511 = '\x01';
  }
  auStackX_8[0] = *(undefined4 *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x40) + -1) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar4 = System_Int32__ToString(auStackX_8,0);
  uVar4 = System_String__Concat(LIT_"'bg-highlight-'",uVar4,0);
  if (lVar1 != 0) {
    cVar3 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar1,uVar4,0);
    if (cVar3 != '\0') {
      lVar1 = *(longlong *)(param_1 + 0x48);
      uVar4 = System_Int32__ToString(auStackX_8,0);
      uVar4 = System_String__Concat(LIT_"'bg-highlight-'",uVar4,0);
      if (lVar1 == 0) goto code_r0x0001807af187;
      UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar1,uVar4,0);
    }
    lVar1 = *(longlong *)(param_1 + 0x48);
    uVar4 = System_Int32__ToString(param_1 + 0x44,0);
    uVar4 = System_String__Concat(LIT_"'bg-highlight-'",uVar4,0);
    if (lVar1 != 0) {
      UnityEngine_UIElements_VisualElement__AddToClassList(lVar1,uVar4,0);
      return;
    }
  }
code_r0x0001807af187:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

