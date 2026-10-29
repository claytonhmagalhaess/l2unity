// SparkLojaCristalWindow__MostraDetalhe__180761fc0 @ 0x180761fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLojaCristalWindow__MostraDetalhe__180761fc0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ushort uVar12;
  undefined4 auStackX_8 [4];
  undefined4 auStackX_18 [2];
  undefined4 auStackX_20 [2];
  undefined4 uStack_98;
  undefined4 auStack_94 [3];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (cRam00000001834b4369 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkLojaCristal);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Crystallization: {0:N0} {1}'");
    FUN_180315380(LIT_"'Shop fee: {0:N0} {1} ({2}%)'");
    FUN_180315380(LIT_"'You receive: {0:N0} {1}'");
    cRam00000001834b4369 = '\x01';
  }
  lVar5 = SparkLojaCristalWindow__Escolhido(param_1,0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
    uVar7 = FUN_180eb5810(lVar5 == 0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar6 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
      if (*(longlong *)(param_1 + 0x100) != 0) {
        lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x100),0);
        uVar7 = FUN_180eb5810(lVar5 != 0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar6 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
          if (*(longlong *)(param_1 + 0x120) != 0) {
            func_0x0001825cbbd0(*(longlong *)(param_1 + 0x120),lVar5 != 0,0);
            if (lVar5 == 0) {
              return;
            }
            uVar7 = SparkUI__NomeDoItem(*(undefined4 *)(lVar5 + 0x1c),0);
            if (*(longlong *)(param_1 + 0xa8) != 0) {
              plVar8 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(param_1 + 0xa8),0);
              lVar6 = IconTable__get_Instance(0);
              uVar9 = 0;
              if (lVar6 != 0) {
                lVar6 = IconTable__get_Instance(0);
                if (lVar6 == 0) goto DAT_180762436;
                uVar9 = IconTable__GetIcon(lVar6,*(undefined4 *)(lVar5 + 0x14),0);
              }
              puVar10 = (undefined8 *)
                        UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_88,uVar9,0);
              if (plVar8 != (longlong *)0x0) {
                lVar6 = *plVar8;
                uVar11 = *puVar10;
                uVar2 = puVar10[1];
                uVar3 = puVar10[2];
                uVar4 = puVar10[3];
                uVar9 = puVar10[4];
                if (*(ushort *)(lVar6 + 0x12e) != 0) {
                  uVar12 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar10 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                          (ulonglong)uVar12 * 0x10) + 0xb) * 0x10 + 0x138 + lVar6);
                      goto code_r0x0001807621e7;
                    }
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < *(ushort *)(lVar6 + 0x12e));
                }
                puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001807621e7:
                uStack_88 = uVar11;
                uStack_80 = uVar2;
                uStack_78 = uVar3;
                uStack_70 = uVar4;
                uStack_68 = uVar9;
                (*(code *)*puVar10)(plVar8,&uStack_88,puVar10[1]);
                plVar8 = *(longlong **)(param_1 + 0xe0);
                if (cRam00000001834b4367 == '\0') {
                  FUN_180315380(LIT_"'+{0} {1}'");
                  cRam00000001834b4367 = '\x01';
                }
                uVar9 = SparkUI__NomeDoItem(*(undefined4 *)(lVar5 + 0x14),0);
                if (0 < *(int *)(lVar5 + 0x18)) {
                  auStackX_8[0] = *(undefined4 *)(lVar5 + 0x18);
                  uVar11 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
                  uVar9 = System_String__Format(LIT_"'+{0} {1}'",uVar11,uVar9,0);
                }
                if (plVar8 != (longlong *)0x0) {
                  (**(code **)(*plVar8 + 0xe48))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0xe50));
                  auStackX_18[0] = *(undefined4 *)(lVar5 + 0x20);
                  plVar8 = *(longlong **)(param_1 + 0xe8);
                  uVar9 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
                  uVar9 = System_String__Format(LIT_"'Crystallization: {0:N0} {1}'",uVar9,uVar7,0);
                  if (plVar8 != (longlong *)0x0) {
                    (**(code **)(*plVar8 + 0xe48))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0xe50));
                    auStackX_20[0] = *(undefined4 *)(lVar5 + 0x24);
                    plVar8 = *(longlong **)(param_1 + 0xf0);
                    uVar9 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
                    uVar9 = System_String__Format(LIT_"'You receive: {0:N0} {1}'",uVar9,uVar7,0);
                    if (plVar8 != (longlong *)0x0) {
                      (**(code **)(*plVar8 + 0xe48))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0xe50));
                      uStack_98 = *(undefined4 *)(lVar5 + 0x28);
                      plVar8 = *(longlong **)(param_1 + 0xf8);
                      uVar9 = func_0x000180314670(_DAT_1834c6268,&uStack_98);
                      if (*(int *)(TI_SparkLojaCristal + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      auStack_94[0] =
                           *(undefined4 *)(*(longlong *)(TI_SparkLojaCristal + 0xb8) + 0x24);
                      uVar11 = func_0x000180314670(_DAT_1834c6268,auStack_94);
                      uVar7 = System_String__Format(LIT_"'Shop fee: {0:N0} {1} ({2}%)'",uVar9,uVar7,uVar11,0);
                      if (plVar8 != (longlong *)0x0) {
                        (**(code **)(*plVar8 + 0xe48))
                                  (plVar8,uVar7,*(undefined8 *)(*plVar8 + 0xe50));
                        return;
                      }
                    }
                  }
                }
              }
              FUN_1803155d0();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
        }
      }
    }
  }
DAT_180762436:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

