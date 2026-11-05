// SparkEstilo__Etiqueta__18071fef0 @ 0x18071fef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkEstilo__Etiqueta__18071fef0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  ushort uVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [56];
  
  if (cRam00000001834b41fd == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    cRam00000001834b41fd = '\x01';
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_88 = *param_2;
  uStack_80 = param_2[1];
  uStack_58 = 0;
  func_0x000180cb7cb0(&uStack_68,&uStack_88,MR_System.Nullable<UnityEngine.Color>..ctor);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  uStack_88 = uStack_68;
  uStack_80 = uStack_60;
  uStack_78 = uStack_58;
  lVar4 = SparkEstilo__Texto__180722af0(param_1,10,&uStack_88,1,0);
  if (lVar4 != 0) {
    plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x41000000,0);
    if (plVar6 != (longlong *)0x0) {
      lVar8 = *plVar6;
      uVar9 = *puVar7;
      uVar1 = *(undefined4 *)(puVar7 + 1);
      if (*(ushort *)(lVar8 + 0x12e) != 0) {
        uVar10 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar7 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 99) *
                      0x10 + 0x138 + lVar8);
            goto code_r0x000180720067;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
      }
      puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,99);
code_r0x000180720067:
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
      uStack_88 = uVar9;
      (*(code *)*puVar7)(plVar6,&uStack_88,puVar7[1]);
      if (plVar5 != (longlong *)0x0) {
        lVar8 = *plVar5;
        if (*(ushort *)(lVar8 + 0x12e) != 0) {
          uVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x61
                        ) * 0x10 + 0x138 + lVar8);
              goto code_r0x0001807200d9;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x0001807200d9:
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        uStack_88 = uVar9;
        (*(code *)*puVar7)(plVar5,&uStack_88,puVar7[1]);
        plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        puVar7 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x40400000,0);
        if (plVar6 != (longlong *)0x0) {
          lVar8 = *plVar6;
          uVar9 = *puVar7;
          uVar1 = *(undefined4 *)(puVar7 + 1);
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar7 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                          0x5f) * 0x10 + 0x138 + lVar8);
                goto code_r0x000180720187;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x5f);
code_r0x000180720187:
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
          uStack_88 = uVar9;
          (*(code *)*puVar7)(plVar6,&uStack_88,puVar7[1]);
          if (plVar5 != (longlong *)0x0) {
            lVar8 = *plVar5;
            if (*(ushort *)(lVar8 + 0x12e) != 0) {
              uVar10 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar7 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                            0x65) * 0x10 + 0x138 + lVar8);
                  goto code_r0x0001807201f9;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
            }
            puVar7 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x65);
code_r0x0001807201f9:
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
            uStack_88 = uVar9;
            (*(code *)*puVar7)(plVar5,&uStack_88,puVar7[1]);
            plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            uStack_88 = 0;
            uStack_80 = 0x3e99999a00000000;
            puVar7 = (undefined8 *)
                     UnityEngine_UIElements_StyleColor__op_Implicit(auStack_50,&uStack_88,0);
            if (plVar5 != (longlong *)0x0) {
              lVar8 = *plVar5;
              uVar9 = *puVar7;
              uVar3 = puVar7[1];
              uVar1 = *(undefined4 *)(puVar7 + 2);
              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                uVar10 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar7 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10)
                              + 9) * 0x10 + 0x138 + lVar8);
                    goto code_r0x000180720299;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
              }
              puVar7 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180720299:
              uStack_88 = uVar9;
              uStack_80 = uVar3;
              uStack_78 = uVar1;
              (*(code *)*puVar7)(plVar5,&uStack_88,puVar7[1]);
              SparkEstilo__Moldura__180721b40(lVar4,0);
              lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
              uVar9 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
              if (lVar8 != 0) {
                FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar9);
                return lVar4;
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar4 = (*pcVar2)();
  return lVar4;
}

