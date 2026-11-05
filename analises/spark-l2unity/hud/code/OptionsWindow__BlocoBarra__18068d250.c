// OptionsWindow__BlocoBarra__18068d250 @ 0x18068d250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow__BlocoBarra__18068d250
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [40];
  
  if (cRam00000001834b3ea0 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3ea0 = '\x01';
  }
  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
  if (lVar4 != 0) {
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    uVar6 = func_0x000182601c10();
    if (lVar5 != 0) {
      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
      puVar8 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x40800000,0);
      if (plVar7 != (longlong *)0x0) {
        lVar5 = *plVar7;
        uVar6 = *puVar8;
        uVar10 = *(undefined4 *)(puVar8 + 1);
        if (*(ushort *)(lVar5 + 0x12e) != 0) {
          uVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar8 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0x4b)
                        * 0x10 + 0x138 + lVar5);
              goto code_r0x00018068d3b9;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
        }
        puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x00018068d3b9:
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
        uStack_88 = uVar6;
        (*(code *)*puVar8)(plVar7,&uStack_88,puVar8[1]);
        plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        puVar8 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x40400000,0);
        if (plVar7 != (longlong *)0x0) {
          lVar5 = *plVar7;
          uVar6 = *puVar8;
          uVar10 = *(undefined4 *)(puVar8 + 1);
          if (*(ushort *)(lVar5 + 0x12e) != 0) {
            uVar9 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar8 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                          0x5f) * 0x10 + 0x138 + lVar5);
                goto code_r0x00018068d459;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
          }
          puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x5f);
code_r0x00018068d459:
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
          uStack_88 = uVar6;
          (*(code *)*puVar8)(plVar7,&uStack_88,puVar8[1]);
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
          uVar6 = func_0x000182601c10();
          if (lVar5 != 0) {
            FUN_180005060(0x1b,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
            plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            uStack_88 = 0x3e6b851f3e800000;
            uStack_80 = 0x3f19999a3e428f5c;
            puVar8 = (undefined8 *)
                     UnityEngine_UIElements_StyleColor__op_Implicit(auStack_50,&uStack_88,0);
            if (plVar7 != (longlong *)0x0) {
              lVar5 = *plVar7;
              uVar6 = *puVar8;
              uVar3 = puVar8[1];
              uVar10 = *(undefined4 *)(puVar8 + 2);
              if (*(ushort *)(lVar5 + 0x12e) != 0) {
                uVar9 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar8 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                              0x15) * 0x10 + 0x138 + lVar5);
                    goto code_r0x00018068d539;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
              }
              puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x15);
code_r0x00018068d539:
              uStack_88 = uVar6;
              uStack_80 = uVar3;
              uStack_78 = uVar10;
              (*(code *)*puVar8)(plVar7,&uStack_88,puVar8[1]);
              if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                func_0x000180315660(TI_OptionsWindow);
              }
              uStack_88 = *(undefined8 *)(*(longlong *)(TI_OptionsWindow + 0xb8) + 0x28);
              uStack_80 = *(undefined8 *)(*(longlong *)(TI_OptionsWindow + 0xb8) + 0x30);
              uStack_68 = 0;
              uStack_60 = 0;
              uStack_58 = 0;
              func_0x000180cb7cb0(&uStack_68,&uStack_88,MR_System.Nullable<UnityEngine.Color>..ctor);
              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                func_0x000180315660();
              }
              uStack_78 = uStack_58;
              uStack_88 = uStack_68;
              uStack_80 = uStack_60;
              uVar10 = 0;
              uVar6 = SparkEstilo__Texto(param_2,0xb,&uStack_88,0,0);
              UnityEngine_UIElements_VisualElement__Add(lVar4,uVar6,0);
              lVar5 = OptionsWindow__Barra__18068bee0
                                (param_1,param_5,param_6,0xbe,CONCAT44(uVar10,param_7),param_3,
                                 param_4,0);
              if (lVar5 != 0) {
                plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                puVar8 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x42700000,0);
                if (plVar7 != (longlong *)0x0) {
                  lVar1 = *plVar7;
                  uVar6 = *puVar8;
                  uVar10 = *(undefined4 *)(puVar8 + 1);
                  if (*(ushort *)(lVar1 + 0x12e) != 0) {
                    uVar9 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar8 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 +
                                           (ulonglong)uVar9 * 0x10) + 0x4d) * 0x10 + 0x138 + lVar1);
                        goto code_r0x00018068d6a9;
                      }
                      uVar9 = uVar9 + 1;
                    } while (uVar9 < *(ushort *)(lVar1 + 0x12e));
                  }
                  puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x00018068d6a9:
                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
                  uStack_88 = uVar6;
                  (*(code *)*puVar8)(plVar7,&uStack_88,puVar8[1]);
                  UnityEngine_UIElements_VisualElement__Add(lVar4,lVar5,0);
                  return lVar4;
                }
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

