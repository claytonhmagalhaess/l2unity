// Nameplate__Icone__180676a40 @ 0x180676a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong Nameplate__Icone__180676a40(void)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  ushort uVar8;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (cRam00000001834b3e09 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3e09 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar3,0);
  if (lVar3 != 0) {
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar3,1,0);
    plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
    puVar5 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,0x41800000,0);
    if (plVar4 != (longlong *)0x0) {
      lVar6 = *plVar4;
      uVar1 = *(undefined4 *)(puVar5 + 1);
      uVar7 = *puVar5;
      if (*(ushort *)(lVar6 + 0x12e) != 0) {
        uVar8 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar5 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0xad) *
                      0x10 + 0x138 + lVar6);
            goto code_r0x000180676b59;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(lVar6 + 0x12e));
      }
      puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180676b59:
      uStack_38 = uVar7;
      uStack_30 = uVar1;
      (*(code *)*puVar5)(plVar4,&uStack_38,puVar5[1]);
      plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
      puVar5 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,0x41800000,0);
      if (plVar4 != (longlong *)0x0) {
        lVar6 = *plVar4;
        uVar7 = *puVar5;
        uVar1 = *(undefined4 *)(puVar5 + 1);
        if (*(ushort *)(lVar6 + 0x12e) != 0) {
          uVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar5 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0x43)
                        * 0x10 + 0x138 + lVar6);
              goto code_r0x000180676bf9;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(ushort *)(lVar6 + 0x12e));
        }
        puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180676bf9:
        uStack_38 = uVar7;
        uStack_30 = uVar1;
        (*(code *)*puVar5)(plVar4,&uStack_38,puVar5[1]);
        plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
        puVar5 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,0x3f800000,0);
        if (plVar4 != (longlong *)0x0) {
          lVar6 = *plVar4;
          uVar7 = *puVar5;
          uVar1 = *(undefined4 *)(puVar5 + 1);
          if (*(ushort *)(lVar6 + 0x12e) != 0) {
            uVar8 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar5 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                          0x4f) * 0x10 + 0x138 + lVar6);
                goto code_r0x000180676c99;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(ushort *)(lVar6 + 0x12e));
          }
          puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x000180676c99:
          uStack_38 = uVar7;
          uStack_30 = uVar1;
          (*(code *)*puVar5)(plVar4,&uStack_38,puVar5[1]);
          lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
          uVar7 = func_0x000182601c10(0,0);
          if (lVar6 != 0) {
            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
            lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
            uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
            if (lVar6 != 0) {
              FUN_180005060(5,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
              lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
              uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
              if (lVar6 != 0) {
                FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
                return lVar3;
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar3 = (*pcVar2)();
  return lVar3;
}

