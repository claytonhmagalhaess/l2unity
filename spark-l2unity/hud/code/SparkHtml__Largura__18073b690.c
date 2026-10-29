// SparkHtml__Largura__18073b690 @ 0x18073b690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkHtml__Largura__18073b690(longlong param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ushort uVar11;
  float fVar12;
  float afStackX_10 [2];
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_28 [32];
  
  if (cRam00000001834b425c == '\0') {
    FUN_180315380(TI_System.Globalization.CultureInfo);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(LIT_"'%'");
    cRam00000001834b425c = '\x01';
  }
  afStackX_10[0] = 0.0;
  cVar4 = func_0x000181707e50(param_2,0);
  if (cVar4 == '\0') {
    if ((param_2 == 0) || (lVar6 = func_0x00018170d270(param_2,0), lVar6 == 0)) goto DAT_18073ba27;
    cVar4 = System_String__EndsWith(lVar6,LIT_"'%'",0);
    if (cVar4 != '\0') {
      uVar7 = System_String__TrimEnd(lVar6,0x25,0);
      if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      cVar4 = System_Single__TryParse(uVar7,0xa7,uVar8,afStackX_10,0);
      if (cVar4 != '\0') {
        if (param_1 != 0) {
          lVar6 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
          fVar3 = 1.0;
          if ((afStackX_10[0] < 1.0) ||
             (fVar12 = afStackX_10[0], fVar3 = 100.0, 100.0 < afStackX_10[0])) {
            fVar12 = fVar3;
          }
          uVar7 = func_0x0001825fc350(fVar12,0);
          puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_28,uVar7,0)
          ;
          if (lVar6 == 0) goto DAT_18073ba27;
          uVar7 = 0xad;
          goto code_r0x00018073b7f9;
        }
        goto DAT_18073ba27;
      }
    }
    if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar5 = SparkHtml__Numero__18073daf0(lVar6,0);
    if (0 < iVar5) {
      if (param_1 != 0) {
        lVar6 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
        puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_28);
        if (lVar6 != 0) {
          uStack_30 = *(undefined4 *)(puVar9 + 1);
          uStack_38 = *puVar9;
          FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_38);
          lVar6 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
          uVar7 = func_0x000182601c10(0x3f800000,0);
          if (lVar6 != 0) {
            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
            lVar6 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
            uVar7 = func_0x0001825fc350(0x42c80000,0);
            puVar9 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(auStack_28,uVar7,0);
            if (lVar6 != 0) {
              uVar7 = 0x55;
code_r0x00018073b7f9:
              uStack_38 = *puVar9;
              uStack_30 = *(undefined4 *)(puVar9 + 1);
              FUN_1800050f0(uVar7,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_38);
              return 1;
            }
          }
        }
      }
      goto DAT_18073ba27;
    }
  }
  if (param_3 == '\0') {
    return 0;
  }
  if (param_1 != 0) {
    plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    uVar7 = func_0x0001825fc350(0x42c80000,0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_28,uVar7,0);
    if (plVar10 != (longlong *)0x0) {
      lVar6 = *plVar10;
      uVar1 = *(undefined4 *)(puVar9 + 1);
      uVar7 = *puVar9;
      if (*(ushort *)(lVar6 + 0x12e) != 0) {
        uVar11 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar9 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0xad)
                      * 0x10 + 0x138 + lVar6);
            goto code_r0x00018073b9d5;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018073b9d5:
      uStack_38 = uVar7;
      uStack_30 = uVar1;
      (*(code *)*puVar9)(plVar10,&uStack_38,puVar9[1]);
      return 0;
    }
  }
DAT_18073ba27:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar7 = (*pcVar2)();
  return uVar7;
}

