// HighlightedInputFieldManipulator__OnBlurEvent__1807af190 @ 0x1807af190

void HighlightedInputFieldManipulator__OnBlurEvent__1807af190(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  ushort uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  
  if (cRam00000001834b4510 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(LIT_"'bg-highlight-'");
    cRam00000001834b4510 = '\x01';
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar8 = System_Int32__ToString(param_1 + 0x44,0);
  uVar8 = System_String__Concat(LIT_"'bg-highlight-'",uVar8,0);
  if (lVar2 != 0) {
    cVar5 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar2,uVar8,0);
    if (cVar5 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x48);
      uVar8 = System_Int32__ToString(param_1 + 0x44,0);
      uVar8 = System_String__Concat(LIT_"'bg-highlight-'",uVar8,0);
      if (lVar2 == 0) goto code_r0x0001807af255;
      UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar2,uVar8,0);
    }
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      lVar2 = *plVar3;
      uVar6 = 0;
      uVar1 = *(ushort *)(lVar2 + 0x12e);
      if (uVar1 != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar6 * 0x10) ==
              TI_UnityEngine.UIElements.IVisualElementScheduledItem) {
            puVar7 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10) + 2) *
                      0x10 + 0x138 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x000180002419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar7)(plVar3,puVar7[1]);
            return;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
      }
      puVar7 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IVisualElementScheduledItem,2,uVar1,unaff_RBX);
                    /* WARNING: Could not recover jumptable at 0x0001800023ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar7)(plVar3,puVar7[1]);
      return;
    }
  }
code_r0x0001807af255:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

