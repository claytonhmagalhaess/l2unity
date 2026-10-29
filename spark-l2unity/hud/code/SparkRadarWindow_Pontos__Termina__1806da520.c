// SparkRadarWindow_Pontos__Termina__1806da520 @ 0x1806da520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow_Pontos__Termina__1806da520(longlong param_1,int param_2)

{
  code *pcVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (cRam00000001834b40ac == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b40ac = '\x01';
  }
  iVar7 = param_2;
  if (param_2 < *(int *)(param_1 + 0x38)) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (lVar3 == 0) {
code_r0x0001806da688:
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)(lVar3 + 0x18) <= iVar7) break;
      lVar3 = FUN_180bbafe0(lVar3,iVar7,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
      if (lVar3 == 0) goto code_r0x0001806da688;
      plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
      uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (plVar4 == (longlong *)0x0) goto code_r0x0001806da688;
      lVar3 = *plVar4;
      uVar2 = 0;
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar2 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar6 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar2 * 0x10) + 0x33) *
                      0x10 + 0x138 + lVar3);
            goto code_r0x0001806da635;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar6 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x33);
code_r0x0001806da635:
      (*(code *)*puVar6)(plVar4,uVar5,puVar6[1]);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x38));
  }
  *(int *)(param_1 + 0x38) = param_2;
  return;
}

