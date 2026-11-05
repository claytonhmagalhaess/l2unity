// NpcHtmlWindow__AddLineBreak__18067f3d0 @ 0x18067f3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__AddLineBreak__18067f3d0(longlong param_1,longlong *param_2,char param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b3e52 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b3e52 = '\x01';
  }
  if (((*(longlong *)(param_1 + 0xb8) == 0) ||
      (lVar2 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(param_1 + 0xb8),0),
      lVar2 == 0)) ||
     (lVar2 = UnityEngine_UIElements_VisualElement__get_Item(lVar2,0,0), lVar2 == 0))
  goto code_r0x00018067f59b;
  plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar2,0);
  if (param_3 == '\0') {
    puVar4 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0x41000000,0);
    if (plVar3 == (longlong *)0x0) goto code_r0x00018067f59b;
    lVar10 = *plVar3;
    uVar7 = 0;
    uVar11 = (undefined4)*puVar4;
    uVar12 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    uVar8 = *(undefined4 *)(puVar4 + 1);
    if (*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar9 = *(longlong *)(lVar10 + 0xb0);
      do {
        if (*(longlong *)(lVar9 + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        goto code_r0x00018067f579;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(lVar10 + 0x12e));
    }
  }
  else {
    puVar4 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0,0);
    if (plVar3 == (longlong *)0x0) goto code_r0x00018067f59b;
    lVar10 = *plVar3;
    uVar7 = 0;
    uVar11 = (undefined4)*puVar4;
    uVar12 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    uVar8 = *(undefined4 *)(puVar4 + 1);
    if (*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar9 = *(longlong *)(lVar10 + 0xb0);
      do {
        if (*(longlong *)(lVar9 + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        goto code_r0x00018067f579;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(lVar10 + 0x12e));
    }
  }
  puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018067f4d9:
  uStack_28 = CONCAT44(uVar12,uVar11);
  uStack_20 = uVar8;
  (*(code *)*puVar4)(plVar3,&uStack_28,puVar4[1]);
  if (param_2 != (longlong *)0x0) {
    if (lVar2 != 0) {
      plVar3 = (longlong *)
               (**(code **)(*param_2 + 0x9d8))(param_2,*(undefined8 *)(*param_2 + 0x9e0),0);
      if (plVar3 == (longlong *)0x0) {
        uVar5 = func_0x0001803153a0(TI_System.InvalidOperationException);
        uVar5 = func_0x000180315580(uVar5);
        uVar6 = func_0x0001803153a0(LIT_"\"You can't add directly to this VisualElement. Use hierar...");
        System_InvalidOperationException___ctor(uVar5,uVar6,0);
        uVar6 = func_0x0001803153a0(MD_UnityEngine.UIElements.VisualElement.Add);
        FUN_180315590(uVar5,uVar6);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (plVar3 == param_2) {
        UnityEngine_UIElements_VisualElement_Hierarchy__Add(&stack0x00000010,lVar2,0);
      }
      else {
        UnityEngine_UIElements_VisualElement__Add(plVar3);
      }
      *(longlong **)(lVar2 + 0x288) = param_2;
      func_0x000180314690(lVar2 + 0x288,param_2);
    }
    return;
  }
code_r0x00018067f59b:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_r0x00018067f579:
  puVar4 = (undefined8 *)
           ((longlong)(*(int *)(lVar9 + 8 + (ulonglong)uVar7 * 0x10) + 0x43) * 0x10 + 0x138 + lVar10
           );
  goto code_r0x00018067f4d9;
}

