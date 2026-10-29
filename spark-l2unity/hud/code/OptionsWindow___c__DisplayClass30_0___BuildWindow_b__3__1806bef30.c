// OptionsWindow___c__DisplayClass30_0___BuildWindow_b__3__1806bef30 @ 0x1806bef30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass30_0___BuildWindow_b__3__1806bef30(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (cRam00000001834b3e80 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380();
    cRam00000001834b3e80 = '\x01';
  }
  *(uint *)(lVar2 + 0x8c) = uVar1;
  if (*(longlong *)(lVar2 + 0xd8) != 0) {
    UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(*(undefined8 *)(lVar2 + 0xd8),0);
    *(undefined8 *)(lVar2 + 0xd8) = 0;
    func_0x000180314690(lVar2 + 0xd8,0);
  }
  uVar7 = 0;
  lVar4 = *(longlong *)(lVar2 + 0x90);
  while (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) <= (int)uVar7) {
      if (uVar1 == 3) {
        OptionsWindow__MostraTeclas(lVar2,0);
      }
      return;
    }
    lVar4 = *(longlong *)(lVar2 + 0x90);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar7) {
code_r0x0001806899ad:
      FUN_1803155c0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)(lVar4 + 0x20 + (longlong)(int)uVar7 * 8) != 0) {
      lVar4 = UnityEngine_UIElements_VisualElement__get_style
                        (*(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar7 * 8),0);
      uVar5 = FUN_180eb5810(uVar7 != uVar1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar4 == 0) break;
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
    }
    lVar4 = *(longlong *)(lVar2 + 0x98);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar7) goto code_r0x0001806899ad;
    if ((*(longlong *)(lVar4 + 0x20 + (longlong)(int)uVar7 * 8) != 0) &&
       (plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_userData(),
       plVar6 != (longlong *)0x0)) {
      plVar8 = (longlong *)0x0;
      if (*plVar6 == TI_System.Action) {
        plVar8 = plVar6;
      }
      if (plVar8 != (longlong *)0x0) {
        (*(code *)plVar8[3])(plVar8[8]);
      }
    }
    uVar7 = uVar7 + 1;
    lVar4 = *(longlong *)(lVar2 + 0x90);
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

