// BlinkingCursorManipulator__UnregisterCallbacksFromTarget__1807aa370 @ 0x1807aa370

void BlinkingCursorManipulator__UnregisterCallbacksFromTarget__1807aa370(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  ushort uVar5;
  undefined8 *puVar6;
  undefined8 unaff_RBX;
  
  if (cRam00000001834b4507 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    cRam00000001834b4507 = '\x01';
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    lVar2 = *plVar3;
    uVar5 = 0;
    uVar1 = *(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar5 * 0x10) ==
            TI_UnityEngine.UIElements.IVisualElementScheduledItem) {
          puVar6 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10) + 2) * 0x10
                    + 0x138 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x000180002419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar6)(plVar3,puVar6[1]);
          return;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
    }
    puVar6 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IVisualElementScheduledItem,2,uVar1,unaff_RBX);
                    /* WARNING: Could not recover jumptable at 0x0001800023ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar6)(plVar3,puVar6[1]);
    return;
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

