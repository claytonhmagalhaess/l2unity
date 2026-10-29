// SparkHtml_Bloco__Linha__180734840 @ 0x180734840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkHtml_Bloco__Linha__180734840(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ushort uVar6;
  
  if (cRam00000001834b426c == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b426c = '\x01';
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar2 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar2,0);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    func_0x000180314690(param_1 + 0x20,uVar2);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
      uVar2 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
      if (lVar3 != 0) {
        FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar3,uVar2);
        if (*(longlong *)(param_1 + 0x20) != 0) {
          plVar4 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
          uVar2 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit);
          if (plVar4 != (longlong *)0x0) {
            lVar3 = *plVar4;
            if (*(ushort *)(lVar3 + 0x12e) != 0) {
              uVar6 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar6 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar5 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10) +
                            0x3f) * 0x10 + 0x138 + lVar3);
                  goto code_r0x0001807349a9;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < *(ushort *)(lVar3 + 0x12e));
            }
            puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x3f);
code_r0x0001807349a9:
            (*(code *)*puVar5)(plVar4,uVar2,puVar5[1]);
            if (*(longlong *)(param_1 + 0x20) != 0) {
              lVar3 = UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0x20),0);
              uVar2 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
              if (lVar3 != 0) {
                FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar3,uVar2);
                if (*(longlong *)(param_1 + 0x20) != 0) {
                  lVar3 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0x20),0);
                  uVar2 = FUN_180eb5810(*(char *)(param_1 + 0x18) != '\0',MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                  if (lVar3 != 0) {
                    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar3,uVar2);
                    if (*(longlong *)(param_1 + 0x10) != 0) {
                      UnityEngine_UIElements_VisualElement__Add
                                (*(longlong *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),0);
                      goto code_r0x000180734a59;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
code_r0x000180734a59:
  return *(undefined8 *)(param_1 + 0x20);
}

