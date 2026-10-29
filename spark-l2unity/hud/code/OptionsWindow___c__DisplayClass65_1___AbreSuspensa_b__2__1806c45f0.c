// OptionsWindow___c__DisplayClass65_1___AbreSuspensa_b__2__1806c45f0 @ 0x1806c45f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass65_1___AbreSuspensa_b__2__1806c45f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b3f5e == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b3f5e = '\x01';
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar8 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x10),0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,3,0);
    if (plVar8 != (longlong *)0x0) {
      lVar2 = *plVar8;
      uVar4 = *puVar9;
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      uVar1 = puVar9[4];
      if (*(ushort *)(lVar2 + 0x12e) != 0) {
        uVar10 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar9 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0xb) *
                      0x10 + 0x138 + lVar2);
            goto code_r0x0001806c46b3;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806c46b3:
      uStack_68 = uVar4;
      uStack_60 = uVar5;
      uStack_58 = uVar6;
      uStack_50 = uVar7;
      uStack_48 = uVar1;
      (*(code *)*puVar9)(plVar8,&uStack_68,puVar9[1]);
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

