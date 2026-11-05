// SkillbarMin__AdjustHeight__180703bf0 @ 0x180703bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarMin__AdjustHeight__180703bf0(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b4167 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b4167 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x48) = param_2;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style();
      puVar4 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,param_2,0);
      if (plVar3 == (longlong *)0x0) goto code_r0x000180703d6d;
      lVar8 = *plVar3;
      uVar5 = 0;
      uVar9 = (undefined4)*puVar4;
      uVar10 = (undefined4)((ulonglong)*puVar4 >> 0x20);
      uVar6 = *(undefined4 *)(puVar4 + 1);
      if (*(ushort *)(lVar8 + 0x12e) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar5 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            iVar2 = *(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10) + 0xad;
code_r0x000180703d5c:
            puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + 0x138 + lVar8);
            goto code_r0x000180703d26;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(lVar8 + 0x12e));
      }
      uVar7 = 0xad;
    }
    else {
      plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style();
      puVar4 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,param_2,0);
      if (plVar3 == (longlong *)0x0) goto code_r0x000180703d6d;
      lVar8 = *plVar3;
      uVar5 = 0;
      uVar9 = (undefined4)*puVar4;
      uVar10 = (undefined4)((ulonglong)*puVar4 >> 0x20);
      uVar6 = *(undefined4 *)(puVar4 + 1);
      if (*(ushort *)(lVar8 + 0x12e) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar5 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            iVar2 = *(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10) + 0x43;
            goto code_r0x000180703d5c;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(lVar8 + 0x12e));
      }
      uVar7 = 0x43;
    }
    puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,uVar7);
code_r0x000180703d26:
    uStack_28 = CONCAT44(uVar10,uVar9);
    uStack_20 = uVar6;
    (*(code *)*puVar4)(plVar3,&uStack_28,puVar4[1]);
    return;
  }
code_r0x000180703d6d:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

