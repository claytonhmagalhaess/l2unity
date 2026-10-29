// AbstractSkillbar__ShowBar__1806f8840 @ 0x1806f8840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AbstractSkillbar__ShowBar__1806f8840(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ushort uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b415c == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b415c = '\x01';
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar5 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x10),0);
    uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (plVar5 != (longlong *)0x0) {
      uVar3 = 0;
      lVar1 = *plVar5;
      if (*(ushort *)(lVar1 + 0x12e) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar3 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar4 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar3 * 0x10) + 0x33) *
                      0x10 + 0x138 + lVar1);
            goto LAB_1800050ad;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(lVar1 + 0x12e));
      }
      puVar4 = (undefined8 *)FUN_180312860(plVar5);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar5,uVar6,puVar4[1]);
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

