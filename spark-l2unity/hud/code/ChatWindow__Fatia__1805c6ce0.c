// ChatWindow__Fatia__1805c6ce0 @ 0x1805c6ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__Fatia__1805c6ce0(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  if (cRam00000001834b3ae9 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b3ae9 = '\x01';
  }
  if (param_1 != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    uVar6 = func_0x000182602520(param_2,0);
    if (lVar5 != 0) {
      FUN_180005060(0x95,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
      if (lVar4 != 0) {
        FUN_180005060(0x93,TI_UnityEngine.UIElements.IStyle,lVar4,uVar6);
        plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
        lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
        uVar6 = func_0x000182602520(param_2,0);
        if (lVar4 != 0) {
          FUN_180005060(0x91,TI_UnityEngine.UIElements.IStyle,lVar4,uVar6);
          if (plVar7 != (longlong *)0x0) {
            uVar2 = 0;
            lVar4 = *plVar7;
            if (*(ushort *)(lVar4 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar2 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar3 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar2 * 0x10) +
                            0x99) * 0x10 + 0x138 + lVar4);
                  goto LAB_1800050ad;
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < *(ushort *)(lVar4 + 0x12e));
            }
            puVar3 = (undefined8 *)FUN_180312860(plVar7);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar3)(plVar7,uVar6,puVar3[1]);
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

