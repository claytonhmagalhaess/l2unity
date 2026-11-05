// SparkEstilo__Janela__180720aa0 @ 0x180720aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEstilo__Janela__180720aa0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_30;
  
  if (cRam00000001834b41ee == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(LIT_"'Windows/Windows_DF_Large_Bg_Darker'");
    cRam00000001834b41ee = '\x01';
  }
  if (param_1 != 0) {
    plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar9 = SparkEstilo__Textura__180723790(LIT_"'Windows/Windows_DF_Large_Bg_Darker'",0);
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar9,0);
    if (plVar8 != (longlong *)0x0) {
      lVar1 = *plVar8;
      uVar3 = *puVar10;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      uStack_30 = (undefined1 *)CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
      uVar9 = puVar10[4];
      uVar7 = 0;
      if (*(ushort *)(lVar1 + 0x12e) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar10 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0xb) *
                       0x10 + 0x138 + lVar1);
            goto code_r0x000180720bb9;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(lVar1 + 0x12e));
      }
      puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180720bb9:
      uStack_68 = uVar3;
      uStack_60 = uVar4;
      uStack_58 = uVar5;
      uStack_50 = uVar6;
      uStack_48 = uVar9;
      (*(code *)*puVar10)(plVar8,&uStack_68,puVar10[1]);
      SparkEstilo__Fatia__1807203e0(param_1,0x10,0x10,0x10,0x1e,0);
      plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
      uVar9 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
      if (plVar8 != (longlong *)0x0) {
        uVar7 = 0;
        lVar1 = *plVar8;
        if (*(ushort *)(lVar1 + 0x12e) != 0) {
          do {
            if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar10 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0x5d
                         ) * 0x10 + 0x138 + lVar1);
              goto LAB_1800050ad;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(ushort *)(lVar1 + 0x12e));
        }
        uStack_30 = &LAB_1800050ad;
        puVar10 = (undefined8 *)FUN_180312860(plVar8);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar10)(plVar8,uVar9,puVar10[1]);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

