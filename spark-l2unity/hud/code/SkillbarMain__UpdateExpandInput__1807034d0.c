// SkillbarMain__UpdateExpandInput__1807034d0 @ 0x1807034d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarMain__UpdateExpandInput__1807034d0(longlong param_1,int param_2)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (cRam00000001834b4160 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b4160 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x50) == 0) goto code_r0x0001807035d4;
  lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x50),0);
  if (param_2 == 0) {
    uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar4 == 0) goto code_r0x0001807035d4;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x0001807035d4;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x48),0);
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar4 == 0) goto code_r0x0001807035d4;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x0001807035d4;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x48),0);
    uVar5 = 1;
  }
  uVar5 = FUN_180eb5810(uVar5,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (plVar6 != (longlong *)0x0) {
    uVar2 = 0;
    lVar4 = *plVar6;
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar2 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar3 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar2 * 0x10) + 0x33) *
                    0x10 + 0x138 + lVar4);
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
code_r0x0001807035d4:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

