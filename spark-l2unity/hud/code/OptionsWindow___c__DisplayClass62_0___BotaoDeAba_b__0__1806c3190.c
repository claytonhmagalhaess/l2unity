// OptionsWindow___c__DisplayClass62_0___BotaoDeAba_b__0__1806c3190 @ 0x1806c3190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass62_0___BotaoDeAba_b__0__1806c3190(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ushort uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b3f54 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(LIT_"'Aba_Sobre'");
    FUN_180315380(LIT_"'Opcoes/'");
    FUN_180315380(LIT_"'Aba_Escolhida'");
    FUN_180315380(LIT_"'Aba'");
    cRam00000001834b3f54 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x8c);
    plVar9 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
    uVar10 = LIT_"'Aba_Escolhida'";
    if ((iVar2 != iVar1) && (uVar10 = LIT_"'Aba_Sobre'", *(char *)(param_1 + 0x28) == '\0')) {
      uVar10 = LIT_"'Aba'";
    }
    uVar10 = System_String__Concat(LIT_"'Opcoes/'",uVar10,0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar10 = SparkEstilo__Textura(uVar10,0);
    puVar11 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar10,0)
    ;
    if (plVar9 != (longlong *)0x0) {
      lVar3 = *plVar9;
      uVar5 = *puVar11;
      uVar6 = puVar11[1];
      uVar7 = puVar11[2];
      uVar8 = puVar11[3];
      uVar10 = puVar11[4];
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        uVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar11 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0xb)
                       * 0x10 + 0x138 + lVar3);
            goto code_r0x0001806c3329;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806c3329:
      uStack_68 = uVar5;
      uStack_60 = uVar6;
      uStack_58 = uVar7;
      uStack_50 = uVar8;
      uStack_48 = uVar10;
      (*(code *)*puVar11)(plVar9,&uStack_68,puVar11[1]);
      if (*(longlong *)(param_1 + 0x30) != 0) {
        plVar9 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
        if (iVar2 == iVar1) {
          uVar13 = 0x3f800000;
          uVar14 = 0x3f56d6d7;
          uVar16 = 0x3f800000;
          uVar15 = 0x3edcdcdd;
        }
        else if (*(char *)(param_1 + 0x28) == '\0') {
          if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
            func_0x000180315660(TI_OptionsWindow);
          }
          lVar3 = *(longlong *)(TI_OptionsWindow + 0xb8);
          uVar13 = *(undefined4 *)(lVar3 + 0x28);
          uVar14 = *(undefined4 *)(lVar3 + 0x2c);
          uVar15 = *(undefined4 *)(lVar3 + 0x30);
          uVar16 = *(undefined4 *)(lVar3 + 0x34);
        }
        else {
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar3 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uVar13 = *(undefined4 *)(lVar3 + 0x60);
          uVar14 = *(undefined4 *)(lVar3 + 100);
          uVar15 = *(undefined4 *)(lVar3 + 0x68);
          uVar16 = *(undefined4 *)(lVar3 + 0x6c);
        }
        uStack_88 = CONCAT44(uVar14,uVar13);
        uStack_80 = CONCAT44(uVar16,uVar15);
        puVar11 = (undefined8 *)
                  UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_68,&uStack_88,0);
        if (plVar9 != (longlong *)0x0) {
          lVar3 = *plVar9;
          uVar10 = *puVar11;
          uVar5 = puVar11[1];
          uVar13 = *(undefined4 *)(puVar11 + 2);
          if (*(ushort *)(lVar3 + 0x12e) != 0) {
            uVar12 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar11 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) +
                           0x2f) * 0x10 + 0x138 + lVar3);
                goto code_r0x0001806c34b5;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(ushort *)(lVar3 + 0x12e));
          }
          puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x0001806c34b5:
          uStack_88 = uVar10;
          uStack_80 = uVar5;
          uStack_78 = uVar13;
          (*(code *)*puVar11)(plVar9,&uStack_88,puVar11[1]);
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

