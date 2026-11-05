// SparkHtml_Bloco___ctor__180734f70 @ 0x180734f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml_Bloco___ctor__180734f70
               (longlong param_1,longlong param_2,undefined1 param_3,undefined4 param_4)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  ushort uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b426b == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    cRam00000001834b426b = '\x01';
  }
  uVar6 = func_0x000180315580(TI_System.Text.StringBuilder);
  System_Text_StringBuilder___ctor(uVar6,0);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  func_0x000180314690(param_1 + 0x28,uVar6);
  Gear__UpdateWeaponType__1803dadf0(param_1,0);
  *(longlong *)(param_1 + 0x10) = param_2;
  func_0x000180314690(param_1 + 0x10,param_2);
  *(undefined4 *)(param_1 + 0x34) = param_4;
  *(undefined1 *)(param_1 + 0x18) = param_3;
  if (param_2 != 0) {
    plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_2,0);
    uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    if (plVar7 != (longlong *)0x0) {
      uVar4 = 0;
      lVar2 = *plVar7;
      uVar1 = *(ushort *)(lVar2 + 0x12e);
      if (uVar1 != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar4 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar5 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar4 * 0x10) + 0x39) *
                      0x10 + 0x138 + lVar2);
            goto LAB_1800050ad;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      puVar5 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x39,uVar1,unaff_RDI);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar7,uVar6,puVar5[1]);
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

