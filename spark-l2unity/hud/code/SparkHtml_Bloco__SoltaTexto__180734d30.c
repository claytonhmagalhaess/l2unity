// SparkHtml_Bloco__SoltaTexto__180734d30 @ 0x180734d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml_Bloco__SoltaTexto__180734d30(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b426d == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    cRam00000001834b426d = '\x01';
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar3 = func_0x000181717180(*(longlong *)(param_1 + 0x28),0);
    if (iVar3 == 0) {
      return;
    }
    plVar1 = *(longlong **)(param_1 + 0x28);
    if (plVar1 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
      if (((*(longlong *)(param_1 + 0x28) != 0) &&
          (System_Text_StringBuilder__Clear(*(longlong *)(param_1 + 0x28),0), lVar4 != 0)) &&
         (lVar5 = func_0x00018170d270(lVar4,0), lVar5 != 0)) {
        if ((*(int *)(lVar5 + 0x10) == 0) && (*(longlong *)(param_1 + 0x20) == 0)) {
          return;
        }
        lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
        UnityEngine_UIElements_Label___ctor(lVar5,lVar4,0);
        if (lVar5 != 0) {
          UnityEngine_UIElements_TextElement__set_enableRichText(lVar5,1,0);
          if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkHtml__Estilo__18073a000(lVar5,0);
          lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
          uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
          if (lVar4 != 0) {
            FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar4,uVar6);
            lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
            uVar6 = func_0x000182601c10(0x3f800000,0);
            if (lVar4 != 0) {
              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar6);
              lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
              uVar6 = FUN_180eb5810((*(char *)(param_1 + 0x18) != '\0') + '\x03',
                                    MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
              if (lVar4 != 0) {
                FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar6);
                lVar4 = SparkHtml_Bloco__Linha__180734840(param_1,0);
                if (lVar4 != 0) {
                  UnityEngine_UIElements_VisualElement__Add(lVar4,lVar5,0);
                  *(undefined4 *)(param_1 + 0x30) = 0;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

