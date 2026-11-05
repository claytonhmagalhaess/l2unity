// OptionsWindow__Aba__180689810 @ 0x180689810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow__Aba__180689810(longlong param_1,uint param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  
  if (cRam00000001834b3e80 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380();
    cRam00000001834b3e80 = '\x01';
  }
  *(uint *)(param_1 + 0x8c) = param_2;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(*(undefined8 *)(param_1 + 0xd8),0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    func_0x000180314690(param_1 + 0xd8,0);
  }
  uVar5 = 0;
  lVar2 = *(longlong *)(param_1 + 0x90);
  while (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) <= (int)uVar5) {
      if (param_2 == 3) {
        OptionsWindow__MostraTeclas(param_1,0);
      }
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x90);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar5) {
code_r0x0001806899ad:
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(longlong *)(lVar2 + 0x20 + (longlong)(int)uVar5 * 8) != 0) {
      lVar2 = UnityEngine_UIElements_VisualElement__get_style
                        (*(undefined8 *)(lVar2 + 0x20 + (longlong)(int)uVar5 * 8),0);
      uVar3 = FUN_180eb5810(uVar5 != param_2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar2 == 0) break;
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
    }
    lVar2 = *(longlong *)(param_1 + 0x98);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar5) goto code_r0x0001806899ad;
    if ((*(longlong *)(lVar2 + 0x20 + (longlong)(int)uVar5 * 8) != 0) &&
       (plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_userData(),
       plVar4 != (longlong *)0x0)) {
      plVar6 = (longlong *)0x0;
      if (*plVar4 == TI_System.Action) {
        plVar6 = plVar4;
      }
      if (plVar6 != (longlong *)0x0) {
        (*(code *)plVar6[3])(plVar6[8]);
      }
    }
    uVar5 = uVar5 + 1;
    lVar2 = *(longlong *)(param_1 + 0x90);
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

