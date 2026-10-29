// SparkEstilo__Moldura__180721b40 @ 0x180721b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEstilo__Moldura__180721b40(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b41ef == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(LIT_"'Party/GroupBox_DF'");
    cRam00000001834b41ef = '\x01';
  }
  if (param_1 != 0) {
    plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar8 = SparkEstilo__Textura__180723790(LIT_"'Party/GroupBox_DF'",0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar8,0);
    if (plVar7 != (longlong *)0x0) {
      lVar1 = *plVar7;
      uVar3 = *puVar9;
      uVar4 = puVar9[1];
      uVar5 = puVar9[2];
      uVar6 = puVar9[3];
      uVar8 = puVar9[4];
      if (*(ushort *)(lVar1 + 0x12e) != 0) {
        uVar10 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar9 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0xb) *
                      0x10 + 0x138 + lVar1);
            goto code_r0x000180721c49;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(lVar1 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180721c49:
      uStack_68 = uVar3;
      uStack_60 = uVar4;
      uStack_58 = uVar5;
      uStack_50 = uVar6;
      uStack_48 = uVar8;
      (*(code *)*puVar9)(plVar7,&uStack_68,puVar9[1]);
      SparkEstilo__Fatia__1807203e0(param_1,3,3,3,3,0);
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

