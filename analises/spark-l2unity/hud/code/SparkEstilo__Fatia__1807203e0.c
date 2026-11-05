// SparkEstilo__Fatia__1807203e0 @ 0x1807203e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEstilo__Fatia__1807203e0
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (cRam00000001834b41eb == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b41eb = '\x01';
  }
  if (param_1 != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    uVar5 = func_0x000182602520(param_2,0);
    if (lVar4 != 0) {
      FUN_180005060(0x93,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
      uVar5 = func_0x000182602520(param_3,0);
      if (lVar4 != 0) {
        FUN_180005060(0x99,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
        lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
        uVar5 = func_0x000182602520(param_4,0);
        if (lVar4 != 0) {
          FUN_180005060(0x95,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
          plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
          uVar5 = func_0x000182602520(param_5,0);
          if (plVar6 != (longlong *)0x0) {
            uVar2 = 0;
            lVar4 = *plVar6;
            if (*(ushort *)(lVar4 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar2 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar3 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar2 * 0x10) +
                            0x91) * 0x10 + 0x138 + lVar4);
                  goto LAB_1800050ad;
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < *(ushort *)(lVar4 + 0x12e));
            }
            puVar3 = (undefined8 *)FUN_180312860(plVar6);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar3)(plVar6,uVar5,puVar3[1]);
            return;
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

