// OptionsWindow__Grupo__180694480 @ 0x180694480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow__Grupo__180694480(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ushort uVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  if (cRam00000001834b3e94 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Opcoes/GroupBox_DF'");
    cRam00000001834b3e94 = '\x01';
  }
  lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar8,0);
  if (lVar8 != 0) {
    lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
    uVar10 = func_0x000182601c10(0,0);
    if (lVar9 != 0) {
      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
      plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
      puVar12 = (undefined8 *)
                UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x40c00000,0);
      if (plVar11 != (longlong *)0x0) {
        lVar9 = *plVar11;
        uVar10 = *puVar12;
        uVar1 = *(undefined4 *)(puVar12 + 1);
        if (*(ushort *)(lVar9 + 0x12e) != 0) {
          uVar13 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar12 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                         0x4b) * 0x10 + 0x138 + lVar9);
              goto code_r0x0001806945e9;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(ushort *)(lVar9 + 0x12e));
        }
        puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001806945e9:
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        uStack_88 = uVar10;
        (*(code *)*puVar12)(plVar11,&uStack_88,puVar12[1]);
        plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar10 = SparkEstilo__Textura(LIT_"'Opcoes/GroupBox_DF'",0);
        puVar12 = (undefined8 *)
                  UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_88,uVar10,0);
        if (plVar11 != (longlong *)0x0) {
          lVar9 = *plVar11;
          uVar4 = *puVar12;
          uVar5 = puVar12[1];
          uVar6 = puVar12[2];
          uVar7 = puVar12[3];
          uVar10 = puVar12[4];
          if (*(ushort *)(lVar9 + 0x12e) != 0) {
            uVar13 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar12 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                           0xb) * 0x10 + 0x138 + lVar9);
                goto code_r0x0001806946b9;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(ushort *)(lVar9 + 0x12e));
          }
          puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806946b9:
          uStack_88 = uVar4;
          uStack_80 = uVar5;
          uStack_78 = uVar6;
          uStack_70 = uVar7;
          uStack_68 = uVar10;
          (*(code *)*puVar12)(plVar11,&uStack_88,puVar12[1]);
          SparkEstilo__Fatia(lVar8,3,3,3,CONCAT44(uVar14,3),0);
          SparkEstilo__Espaco(lVar8,0x40800000,0x41000000,0x40c00000,0x41000000,0);
          if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
            func_0x000180315660(TI_OptionsWindow);
          }
          uStack_88 = *(undefined8 *)(*(longlong *)(TI_OptionsWindow + 0xb8) + 0x18);
          uStack_80 = *(undefined8 *)(*(longlong *)(TI_OptionsWindow + 0xb8) + 0x20);
          uStack_58 = 0;
          uStack_50 = 0;
          uStack_48 = 0;
          func_0x000180cb7cb0(&uStack_58,&uStack_88,MR_System.Nullable<UnityEngine.Color>..ctor);
          uStack_78 = CONCAT44(uStack_78._4_4_,uStack_48);
          uStack_88 = uStack_58;
          uStack_80 = uStack_50;
          lVar9 = SparkEstilo__Texto(param_1,0xb,&uStack_88,1,0);
          if (lVar9 != 0) {
            plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
            puVar12 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x40800000,0);
            if (plVar11 != (longlong *)0x0) {
              lVar2 = *plVar11;
              uVar10 = *puVar12;
              uVar14 = *(undefined4 *)(puVar12 + 1);
              if (*(ushort *)(lVar2 + 0x12e) != 0) {
                uVar13 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar12 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10)
                               + 0x4b) * 0x10 + 0x138 + lVar2);
                    goto code_r0x000180694849;
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 < *(ushort *)(lVar2 + 0x12e));
              }
              puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180694849:
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar14);
              uStack_88 = uVar10;
              (*(code *)*puVar12)(plVar11,&uStack_88,puVar12[1]);
              UnityEngine_UIElements_VisualElement__Add(lVar8,lVar9,0);
              uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
              UnityEngine_UIElements_VisualElement___ctor(uVar10,0);
              *param_2 = uVar10;
              func_0x000180314690(param_2,uVar10);
              UnityEngine_UIElements_VisualElement__Add(lVar8,*param_2,0);
              return lVar8;
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  lVar8 = (*pcVar3)();
  return lVar8;
}

