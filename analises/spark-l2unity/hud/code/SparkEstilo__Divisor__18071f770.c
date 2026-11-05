// SparkEstilo__Divisor__18071f770 @ 0x18071f770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkEstilo__Divisor__18071f770(void)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  ushort uVar12;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b41f1 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.ScaleMode>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Party/Divider_DF_Ver'");
    cRam00000001834b41f1 = '\x01';
  }
  lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
  if (lVar7 != 0) {
    plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x40800000,0);
    if (plVar8 != (longlong *)0x0) {
      lVar10 = *plVar8;
      uVar11 = *puVar9;
      uVar1 = *(undefined4 *)(puVar9 + 1);
      if (*(ushort *)(lVar10 + 0x12e) != 0) {
        uVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar9 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x43)
                      * 0x10 + 0x138 + lVar10);
            goto code_r0x00018071f889;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018071f889:
      uStack_78 = uVar11;
      uStack_70 = uVar1;
      (*(code *)*puVar9)(plVar8,&uStack_78,puVar9[1]);
      lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
      uVar11 = func_0x000182601c10(0,0);
      if (lVar10 != 0) {
        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar10,uVar11);
        plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        puVar9 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x40000000,0);
        if (plVar8 != (longlong *)0x0) {
          lVar10 = *plVar8;
          uVar11 = *puVar9;
          uVar1 = *(undefined4 *)(puVar9 + 1);
          if (*(ushort *)(lVar10 + 0x12e) != 0) {
            uVar12 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar9 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) +
                          0x51) * 0x10 + 0x138 + lVar10);
                goto code_r0x00018071f959;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
          }
          puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018071f959:
          uStack_78 = uVar11;
          uStack_70 = uVar1;
          (*(code *)*puVar9)(plVar8,&uStack_78,puVar9[1]);
          plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar11 = SparkEstilo__Textura__180723790(LIT_"'Party/Divider_DF_Ver'",0);
          puVar9 = (undefined8 *)
                   UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar11,0);
          if (plVar8 != (longlong *)0x0) {
            lVar10 = *plVar8;
            uVar3 = *puVar9;
            uVar4 = puVar9[1];
            uVar5 = puVar9[2];
            uVar6 = puVar9[3];
            uVar11 = puVar9[4];
            if (*(ushort *)(lVar10 + 0x12e) != 0) {
              uVar12 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) +
                            0xb) * 0x10 + 0x138 + lVar10);
                  goto code_r0x00018071fa27;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x00018071fa27:
            uStack_68 = uVar3;
            uStack_60 = uVar4;
            uStack_58 = uVar5;
            uStack_50 = uVar6;
            uStack_48 = uVar11;
            (*(code *)*puVar9)(plVar8,&uStack_68,puVar9[1]);
            lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
            uVar11 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.ScaleMode>.op_Implicit);
            if (lVar10 != 0) {
              FUN_180005060(0xb0,TI_UnityEngine.UIElements.IStyle,lVar10,uVar11);
              UnityEngine_UIElements_VisualElement__set_pickingMode(lVar7,1,0);
              return lVar7;
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar7 = (*pcVar2)();
  return lVar7;
}

