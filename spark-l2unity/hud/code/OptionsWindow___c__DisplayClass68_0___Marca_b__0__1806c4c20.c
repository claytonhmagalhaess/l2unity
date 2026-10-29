// OptionsWindow___c__DisplayClass68_0___Marca_b__0__1806c4c20 @ 0x1806c4c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass68_0___Marca_b__0__1806c4c20(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ushort uVar11;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b3f60 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(LIT_"'CheckBox_checked'");
    FUN_180315380(LIT_"'Opcoes/'");
    FUN_180315380(LIT_"'CheckBox'");
    cRam00000001834b3f60 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar8 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x10),0);
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
      cVar7 = (**(code **)(lVar1 + 0x18))
                        (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      uVar9 = LIT_"'CheckBox_checked'";
      if (cVar7 == '\0') {
        uVar9 = LIT_"'CheckBox'";
      }
      uVar9 = System_String__Concat(LIT_"'Opcoes/'",uVar9,0);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar9 = SparkEstilo__Textura(uVar9,0);
      puVar10 = (undefined8 *)
                UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar9,0);
      if (plVar8 != (longlong *)0x0) {
        lVar1 = *plVar8;
        uVar3 = *puVar10;
        uVar4 = puVar10[1];
        uVar5 = puVar10[2];
        uVar6 = puVar10[3];
        uVar9 = puVar10[4];
        if (*(ushort *)(lVar1 + 0x12e) != 0) {
          uVar11 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar10 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0xb
                         ) * 0x10 + 0x138 + lVar1);
              goto code_r0x0001806c4d75;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(ushort *)(lVar1 + 0x12e));
        }
        puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806c4d75:
        uStack_68 = uVar3;
        uStack_60 = uVar4;
        uStack_58 = uVar5;
        uStack_50 = uVar6;
        uStack_48 = uVar9;
        (*(code *)*puVar10)(plVar8,&uStack_68,puVar10[1]);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

