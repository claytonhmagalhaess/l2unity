// OptionsWindow___c__DisplayClass60_0___Desativa_b__0__1806c3110 @ 0x1806c3110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass60_0___Desativa_b__0__1806c3110(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  ushort uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  if (cRam00000001834b3f53 == '\0') {
    FUN_180315380(TI_OptionsWindow);
    cRam00000001834b3f53 = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  cVar4 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3e9a == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b3e9a = '\x01';
  }
  if (lVar2 != 0) {
    func_0x0001825cbbd0(lVar2,cVar4 == '\0',0);
    plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar2,0);
    if (cVar4 == '\0') {
      uVar9 = 0x3f800000;
    }
    else {
      uVar9 = 0x3ee66666;
    }
    uVar8 = func_0x000182601c10(uVar9,0);
    if (plVar7 != (longlong *)0x0) {
      uVar5 = 0;
      lVar1 = *plVar7;
      if (*(ushort *)(lVar1 + 0x12e) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar5 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar6 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10) + 0x5b) *
                      0x10 + 0x138 + lVar1);
            goto LAB_1800050ad;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(lVar1 + 0x12e));
      }
      puVar6 = (undefined8 *)FUN_180312860(plVar7);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar6)(plVar7,uVar8,puVar6[1]);
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

