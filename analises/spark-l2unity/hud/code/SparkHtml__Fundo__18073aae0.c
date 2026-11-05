// SparkHtml__Fundo__18073aae0 @ 0x18073aae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml__Fundo__18073aae0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  ushort uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if (cRam00000001834b4251 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(LIT_"'background'");
    cRam00000001834b4251 = '\x01';
  }
  if (param_2 == 0) {
DAT_18073ad24:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar6 = SparkHtml_No__Attr__180735120(param_2,LIT_"'background'",0);
  cVar4 = func_0x000181707e50(uVar6,0);
  if (cVar4 == '\0') {
    if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar6 = SparkHtml__Textura__18073eaa0(uVar6,0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if (cVar4 == '\0') {
      if (param_1 != 0) {
        lVar7 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
        puVar8 = (undefined8 *)
                 UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_88,uVar6,0);
        if (lVar7 != 0) {
          uStack_58 = *puVar8;
          uStack_50 = puVar8[1];
          uStack_48 = puVar8[2];
          uStack_40 = *(undefined4 *)(puVar8 + 3);
          uStack_3c = *(undefined4 *)((longlong)puVar8 + 0x1c);
          uStack_38 = puVar8[4];
          FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_58);
          plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
          puVar10 = (undefined4 *)
                    UnityEngine_UIElements_BackgroundPropertyHelper__ConvertScaleModeToBackgroundSize
                              (&uStack_58,0,0);
          uStack_88 = *puVar10;
          uStack_84 = puVar10[1];
          uStack_80 = puVar10[2];
          uStack_7c = puVar10[3];
          uStack_78 = puVar10[4];
          puVar8 = (undefined8 *)
                   UnityEngine_UIElements_StyleBackgroundSize__op_Implicit(&uStack_58,&uStack_88,0);
          if (plVar9 != (longlong *)0x0) {
            lVar7 = *plVar9;
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            uVar6 = puVar8[2];
            uVar5 = 0;
            if (*(ushort *)(lVar7 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar5 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar8 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10) +
                            0x13) * 0x10 + 0x138 + lVar7);
                  goto code_r0x00018073acc3;
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < *(ushort *)(lVar7 + 0x12e));
            }
            puVar8 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x13);
code_r0x00018073acc3:
            uStack_58 = uVar2;
            uStack_50 = uVar3;
            uStack_48 = uVar6;
            (*(code *)*puVar8)(plVar9,&uStack_58,puVar8[1]);
            return;
          }
        }
      }
      goto DAT_18073ad24;
    }
  }
  return;
}

