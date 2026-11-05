// Nameplate__Mostra__180677530 @ 0x180677530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Nameplate__Mostra__180677530(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  byte bVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  ushort uVar13;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b3e0a == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Relacao/clan_DF_clanwaricon_'");
    cRam00000001834b3e0a = '\x01';
  }
  if (param_1 == 0) {
    return;
  }
  cVar7 = func_0x000181707e50(param_2,0);
  if (cVar7 == '\0') {
    uVar12 = System_String__Concat(LIT_"'Relacao/clan_DF_clanwaricon_'",param_2,0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar12 = SparkEstilo__Textura__180723790(uVar12,0);
  }
  else {
    uVar12 = 0;
  }
  plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
  puVar10 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar12,0);
  if (plVar9 != (longlong *)0x0) {
    lVar11 = *plVar9;
    uVar3 = *puVar10;
    uVar4 = puVar10[1];
    uVar5 = puVar10[2];
    uVar6 = puVar10[3];
    uVar1 = puVar10[4];
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      uVar13 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar10 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0xb) *
                     0x10 + 0x138 + lVar11);
          goto code_r0x000180677677;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ushort *)(lVar11 + 0x12e));
    }
    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180677677:
    uStack_68 = uVar3;
    uStack_60 = uVar4;
    uStack_58 = uVar5;
    uStack_50 = uVar6;
    uStack_48 = uVar1;
    (*(code *)*puVar10)(plVar9,&uStack_68,puVar10[1]);
    lVar11 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    bVar8 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    uVar12 = FUN_180eb5810(bVar8 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar11 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar11,uVar12);
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

