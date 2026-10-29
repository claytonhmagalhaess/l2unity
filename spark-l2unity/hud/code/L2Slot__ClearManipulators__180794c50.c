// L2Slot__ClearManipulators__180794c50 @ 0x180794c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Slot__ClearManipulators__180794c50(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      TooltipManipulator__Clear__1807b53b0(*(undefined8 *)(param_1 + 0x58),0);
      UnityEngine_UIElements_VisualElementExtensions__RemoveManipulator
                (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x58),0);
      *(undefined8 *)(param_1 + 0x58) = 0;
      func_0x000180314690(param_1 + 0x58,0);
    }
    if (*(longlong *)(param_1 + 0x60) == 0) {
      plVar2 = *(longlong **)(param_1 + 0x60);
      if (cRam00000001834c4cd0 == '\0') {
        FUN_180315380(TI_UnityEngine.UIElements.IManipulator,plVar2,0);
        cRam00000001834c4cd0 = '\x01';
      }
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      uVar3 = 0;
      lVar1 = *plVar2;
      if (*(ushort *)(lVar1 + 0x12e) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar3 * 0x10) == TI_UnityEngine.UIElements.IManipulator
             ) {
            puVar4 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar3 * 0x10)
                      * 0x10 + 0x138 + lVar1);
            goto LAB_180002080;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(lVar1 + 0x12e));
      }
      puVar4 = (undefined8 *)FUN_180312860(plVar2);
LAB_180002080:
                    /* WARNING: Could not recover jumptable at 0x000180002099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar2,0,puVar4[1]);
      return;
    }
  }
  return;
}

