// Nameplate__AtualizaLoja__180675a80 @ 0x180675a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Nameplate__AtualizaLoja__180675a80(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char acStackX_8 [8];
  undefined4 auStackX_18 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_68 [80];
  
  if (cRam00000001834b3e05 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_Nameplate);
    FUN_180315380(TI_SparkLoja);
    FUN_180315380(TI_string__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.FontStyle>.op_Implicit);
    FUN_180315380(LIT_"'|'");
    cRam00000001834b3e05 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30), lVar4 != 0)) {
    uVar11 = *(undefined4 *)(lVar4 + 0x14);
    if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
      func_0x000180315660();
    }
    auStackX_18[0] = SparkLoja__TipoDe(uVar11,0);
    if ((*(longlong *)(param_1 + 0x50) != 0) &&
       (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30), lVar4 != 0)) {
      lVar4 = SparkLoja__LetreiroDe(*(undefined4 *)(lVar4 + 0x14),0);
      if (lVar4 == 0) {
        acStackX_8[0] = '\x01';
        uVar5 = 0;
      }
      else {
        if ((*(longlong *)(param_1 + 0x50) == 0) ||
           (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30), lVar8 == 0))
        goto code_r0x000180676112;
        uVar5 = *(undefined8 *)(lVar8 + 0x18);
        if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
          func_0x000180315660();
        }
        acStackX_8[0] = SparkLoja__PassaNoFiltro__1804dfab0(lVar4,uVar5,0);
        lVar8 = func_0x000180314710(TI_string__,5);
        uVar5 = System_Int32__ToString(auStackX_18,0);
        if (lVar8 == 0) goto code_r0x000180676112;
        if (*(int *)(lVar8 + 0x18) == 0) {
code_r0x000180676118:
          FUN_1803155c0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(undefined8 *)(lVar8 + 0x20) = uVar5;
        func_0x000180314690(lVar8 + 0x20,uVar5);
        if (*(uint *)(lVar8 + 0x18) < 2) goto code_r0x000180676118;
        *(undefined8 *)(lVar8 + 0x28) = LIT_"'|'";
        func_0x000180314690(lVar8 + 0x28);
        if (*(uint *)(lVar8 + 0x18) < 3) goto code_r0x000180676118;
        *(longlong *)(lVar8 + 0x30) = lVar4;
        func_0x000180314690(lVar8 + 0x30,lVar4);
        if (*(uint *)(lVar8 + 0x18) < 4) goto code_r0x000180676118;
        *(undefined8 *)(lVar8 + 0x38) = LIT_"'|'";
        func_0x000180314690(lVar8 + 0x38);
        if (*(int *)(_DAT_1834c6248 + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar5 = System_Boolean__ToString(acStackX_8,0);
        if (*(uint *)(lVar8 + 0x18) < 5) goto code_r0x000180676118;
        *(undefined8 *)(lVar8 + 0x40) = uVar5;
        func_0x000180314690(lVar8 + 0x40,uVar5);
        uVar5 = System_String__Concat(lVar8,0);
      }
      cVar3 = func_0x0001817058a0(uVar5,*(undefined8 *)(param_1 + 200),0);
      if (cVar3 == '\0') {
        *(undefined8 *)(param_1 + 200) = uVar5;
        func_0x000180314690(param_1 + 200,uVar5);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          if (*(int *)(TI_Nameplate + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar5 = Nameplate__Placa__180677750(0x43160000,0);
          *(undefined8 *)(param_1 + 0xc0) = uVar5;
          func_0x000180314690(param_1 + 0xc0,uVar5);
          if (*(longlong *)(param_1 + 0xc0) == 0) goto code_r0x000180676112;
          plVar6 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
          uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.FontStyle>.op_Implicit);
          if (plVar6 == (longlong *)0x0) goto code_r0x000180676112;
          lVar8 = *plVar6;
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar7 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                          0x89) * 0x10 + 0x138 + lVar8);
                goto code_r0x000180675dc9;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x89);
code_r0x000180675dc9:
          (*(code *)*puVar7)(plVar6,uVar5,puVar7[1]);
          lVar8 = Nameplate__Acima__180674540(param_1,0);
          if (lVar8 == 0) goto code_r0x000180676112;
          UnityEngine_UIElements_VisualElement__Insert(lVar8,0,*(undefined8 *)(param_1 + 0xc0),0);
          if (*(longlong *)(param_1 + 0xd0) != 0) {
            if (*(longlong *)(param_1 + 0xa8) == 0) goto code_r0x000180676112;
            UnityEngine_UIElements_VisualElement__Insert
                      (*(longlong *)(param_1 + 0xa8),0,*(undefined8 *)(param_1 + 0xd0),0);
          }
        }
        uVar11 = auStackX_18[0];
        plVar6 = *(longlong **)(param_1 + 0xc0);
        if (lVar4 == 0) {
          if (plVar6 == (longlong *)0x0) goto code_r0x000180676112;
          lVar4 = UnityEngine_UIElements_VisualElement__get_style(plVar6,0);
          uVar5 = 1;
        }
        else {
          if ((*(longlong *)(param_1 + 0x50) == 0) ||
             (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30), lVar8 == 0))
          goto code_r0x000180676112;
          uVar15 = *(undefined4 *)(lVar8 + 0x14);
          if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar5 = SparkLoja__PrefixoDe(uVar15,uVar11,0);
          uVar5 = System_String__Concat(uVar5,lVar4,0);
          if (plVar6 == (longlong *)0x0) goto code_r0x000180676112;
          (**(code **)(*plVar6 + 0xe48))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0xe50));
          if (*(longlong *)(param_1 + 0xc0) == 0) goto code_r0x000180676112;
          plVar6 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
          uVar11 = auStackX_18[0];
          uVar15 = 0x3f800000;
          if (acStackX_8[0] == '\0') {
            uVar11 = 0x3f0ccccd;
            uVar12 = 0x3f0ccccd;
            uVar13 = 0x3f0ccccd;
            uVar14 = 0x3f800000;
          }
          else {
            if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
              func_0x000180315660();
            }
            puVar9 = (undefined4 *)func_0x0001804ddec0(&uStack_88,uVar11,0);
            uVar11 = *puVar9;
            uVar12 = puVar9[1];
            uVar13 = puVar9[2];
            uVar14 = puVar9[3];
          }
          uStack_88 = CONCAT44(uVar12,uVar11);
          uStack_80 = CONCAT44(uVar14,uVar13);
          puVar7 = (undefined8 *)
                   UnityEngine_UIElements_StyleColor__op_Implicit(auStack_68,&uStack_88,0);
          if (plVar6 == (longlong *)0x0) goto code_r0x000180676112;
          lVar4 = *plVar6;
          uVar11 = *(undefined4 *)(puVar7 + 2);
          uVar5 = *puVar7;
          uVar2 = puVar7[1];
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            uVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar7 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                          0x2f) * 0x10 + 0x138 + lVar4);
                goto code_r0x000180675ff9;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x000180675ff9:
          uStack_88 = uVar5;
          uStack_80 = uVar2;
          uStack_78 = uVar11;
          (*(code *)*puVar7)(plVar6,&uStack_88,puVar7[1]);
          if (*(longlong *)(param_1 + 0xc0) == 0) goto code_r0x000180676112;
          lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
          if (acStackX_8[0] == '\0') {
            uVar15 = 0x3f0ccccd;
          }
          uVar5 = func_0x000182601c10(uVar15,0);
          if (lVar4 == 0) goto code_r0x000180676112;
          FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
          if (*(longlong *)(param_1 + 0xc0) == 0) goto code_r0x000180676112;
          lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
          uVar5 = 0;
        }
        uVar5 = FUN_180eb5810(uVar5,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar4 == 0) goto code_r0x000180676112;
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
      }
      return;
    }
  }
code_r0x000180676112:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

