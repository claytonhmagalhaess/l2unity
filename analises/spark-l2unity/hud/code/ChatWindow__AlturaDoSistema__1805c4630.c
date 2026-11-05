// ChatWindow__AlturaDoSistema__1805c4630 @ 0x1805c4630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__AlturaDoSistema__1805c4630(longlong param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ushort uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b3abc == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IResolvedStyle);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(LIT_"'spark_sysmsg_h'");
    cRam00000001834b3abc = '\x01';
  }
  if ((*(longlong *)(param_1 + 0xc0) != 0) &&
     (lVar4 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                        (*(longlong *)(param_1 + 0xc0),0), lVar4 != 0)) {
    fVar8 = (float)FUN_1800020c0(0x20,TI_UnityEngine.UIElements.IResolvedStyle,lVar4);
    if (fVar8 <= 0.0) {
      uVar9 = 0x43680000;
    }
    else {
      if ((*(longlong *)(param_1 + 0xc0) == 0) ||
         (lVar4 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                            (*(longlong *)(param_1 + 0xc0),0), lVar4 == 0))
      goto code_r0x0001805c4806;
      uVar9 = FUN_1800020c0(0x20,TI_UnityEngine.UIElements.IResolvedStyle,lVar4);
    }
    iVar3 = FUN_1803fb530(uVar9,0);
    param_2 = param_2 + iVar3;
    if (param_2 < 0x40) {
      param_2 = 0x40;
    }
    else if (400 < param_2) {
      param_2 = 400;
    }
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      plVar5 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
      puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
      if (plVar5 != (longlong *)0x0) {
        uVar1 = *puVar6;
        uVar9 = *(undefined4 *)(puVar6 + 1);
        lVar4 = *plVar5;
        if (*(ushort *)(lVar4 + 0x12e) != 0) {
          uVar7 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar6 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0x43)
                        * 0x10 + 0x138 + lVar4);
              goto code_r0x0001805c47a5;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(ushort *)(lVar4 + 0x12e));
        }
        puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805c47a5:
        uStack_28 = uVar1;
        uStack_20 = uVar9;
        (*(code *)*puVar6)(plVar5,&uStack_28,puVar6[1]);
        UnityEngine_PlayerPrefs__SetInt(LIT_"'spark_sysmsg_h'",param_2,0);
        return;
      }
    }
  }
code_r0x0001805c4806:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

