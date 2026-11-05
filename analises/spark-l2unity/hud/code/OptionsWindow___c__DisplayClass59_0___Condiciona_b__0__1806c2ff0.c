// OptionsWindow___c__DisplayClass59_0___Condiciona_b__0__1806c2ff0 @ 0x1806c2ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass59_0___Condiciona_b__0__1806c2ff0(longlong param_1)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (cRam00000001834b3f52 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"''");
    cRam00000001834b3f52 = '\x01';
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    lVar4 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
    ;
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    OptionsWindow__Liga__180696ba0(uVar6,lVar4 == 0,0);
    lVar7 = LIT_"''";
    if (lVar4 != 0) {
      lVar7 = lVar4;
    }
    plVar5 = *(longlong **)(param_1 + 0x20);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0xe48))(plVar5,lVar7,*(undefined8 *)(*plVar5 + 0xe50));
      if (*(longlong *)(param_1 + 0x20) != 0) {
        plVar5 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
        uVar6 = FUN_180eb5810(lVar4 == 0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (plVar5 != (longlong *)0x0) {
          uVar2 = 0;
          lVar4 = *plVar5;
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar2 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar3 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar2 * 0x10) +
                          0x33) * 0x10 + 0x138 + lVar4);
                goto LAB_1800050ad;
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar3 = (undefined8 *)FUN_180312860(plVar5);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(plVar5,uVar6,puVar3[1]);
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

