// SparkHtml__Botao__180736e80 @ 0x180736e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * SparkHtml__Botao__180736e80(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ushort uVar13;
  longlong lVar14;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  if (cRam00000001834b4252 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(TI_UnityEngine.UIElements.Button);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass21_0._Botao_b__0);
    FUN_180315380(TI_SparkHtml.<>c__DisplayClass21_0);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'ButtonLabel'");
    FUN_180315380(LIT_"'fore'");
    FUN_180315380(LIT_"'value'");
    FUN_180315380(LIT_"'height'");
    FUN_180315380(LIT_"'<'");
    FUN_180315380(LIT_"'prev'");
    FUN_180315380(LIT_"'next'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'width'");
    FUN_180315380(LIT_"'>'");
    FUN_180315380(LIT_"'msg'");
    FUN_180315380(LIT_"'action'");
    cRam00000001834b4252 = '\x01';
  }
  lVar6 = func_0x000180315580(TI_SparkHtml.<>c__DisplayClass21_0);
  Gear__UpdateWeaponType__1803dadf0(lVar6,0);
  if (lVar6 == 0) goto code_r0x000180737ab3;
  *(longlong *)(lVar6 + 0x10) = param_1;
  func_0x000180314690(lVar6 + 0x10,param_1);
  if (((*(longlong *)(param_1 + 0x10) == 0) ||
      (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28), lVar7 == 0)) ||
     (lVar7 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(lVar7,0), lVar7 == 0))
  goto code_r0x000180737ab3;
  plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_Item(lVar7,0,0);
  if (plVar8 != (longlong *)0x0) {
    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.Button + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar8 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.Button + 0x130) * 8
         ) != TI_UnityEngine.UIElements.Button)) {
      FUN_1803146d0(plVar8);
      pcVar2 = (code *)swi(3);
      plVar8 = (longlong *)(*pcVar2)();
      return plVar8;
    }
  }
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar9 = (longlong *)FUN_180b0e310(plVar8,LIT_"'ButtonLabel'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
  if (param_2 == 0) goto code_r0x000180737ab3;
  uVar10 = SparkHtml_No__Attr__180735120(param_2,LIT_"'width'",0);
  if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar4 = SparkHtml__Numero__18073daf0(uVar10,0);
  uVar10 = SparkHtml_No__Attr__180735120(param_2,LIT_"'height'",0);
  iVar5 = SparkHtml__Numero__18073daf0(uVar10,0);
  if (0 < iVar4) {
    if (plVar8 == (longlong *)0x0) goto code_r0x000180737ab3;
    plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar8,0);
    puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar11 == (longlong *)0x0) goto code_r0x000180737ab3;
    lVar7 = *plVar11;
    uVar10 = *puVar12;
    uVar1 = *(undefined4 *)(puVar12 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar13 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar12 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0xad) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x000180737199;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180737199:
    uStack_68 = uVar10;
    uStack_60 = uVar1;
    (*(code *)*puVar12)(plVar11,&uStack_68,puVar12[1]);
    plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar8,0);
    puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar11 == (longlong *)0x0) goto code_r0x000180737ab3;
    lVar7 = *plVar11;
    uVar10 = *puVar12;
    uVar1 = *(undefined4 *)(puVar12 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar13 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar12 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0x59) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x000180737239;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x59);
code_r0x000180737239:
    uStack_68 = uVar10;
    uStack_60 = uVar1;
    (*(code *)*puVar12)(plVar11,&uStack_68,puVar12[1]);
  }
  if (0 < iVar5) {
    if (plVar8 == (longlong *)0x0) goto code_r0x000180737ab3;
    plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar8,0);
    puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar11 == (longlong *)0x0) goto code_r0x000180737ab3;
    lVar7 = *plVar11;
    uVar10 = *puVar12;
    uVar1 = *(undefined4 *)(puVar12 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar13 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar12 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0x43) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x0001807372e9;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001807372e9:
    uStack_68 = uVar10;
    uStack_60 = uVar1;
    (*(code *)*puVar12)(plVar11,&uStack_68,puVar12[1]);
    plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar8,0);
    puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar11 == (longlong *)0x0) goto code_r0x000180737ab3;
    lVar7 = *plVar11;
    uVar10 = *puVar12;
    uVar1 = *(undefined4 *)(puVar12 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar13 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar12 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0x57) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x000180737389;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x000180737389:
    uStack_68 = uVar10;
    uStack_60 = uVar1;
    (*(code *)*puVar12)(plVar11,&uStack_68,puVar12[1]);
  }
  uVar10 = SparkHtml_No__Attr__180735120(param_2,LIT_"'value'",0);
  cVar3 = func_0x000181707e50(uVar10,0);
  if (cVar3 == '\0') {
    if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar10 = SparkHtml__Entidades__180739c60(uVar10,0);
    if (plVar9 == (longlong *)0x0) goto code_r0x000180737ab3;
    (**(code **)(*plVar9 + 0xe48))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0xe50));
    if (0 < iVar4) {
      if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b4253 == '\0') {
        FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>);
        FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>);
        FUN_180315380(MD_SparkHtml.__c__DisplayClass22_0._AjustaFonte_b__0);
        FUN_180315380(TI_SparkHtml.<>c__DisplayClass22_0);
        cRam00000001834b4253 = '\x01';
      }
      lVar7 = func_0x000180315580(TI_SparkHtml.<>c__DisplayClass22_0);
      Gear__UpdateWeaponType__1803dadf0(lVar7,0);
      if (lVar7 == 0) goto code_r0x000180737ab3;
      *(longlong **)(lVar7 + 0x10) = plVar8;
      func_0x000180314690(lVar7 + 0x10,plVar8);
      *(longlong **)(lVar7 + 0x20) = plVar9;
      func_0x000180314690(lVar7 + 0x20,plVar9);
      *(undefined8 *)(lVar7 + 0x18) = 0;
      func_0x000180314690(lVar7 + 0x18,0);
      uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>);
      FUN_18055b980(uVar10,lVar7,MD_SparkHtml.__c__DisplayClass22_0._AjustaFonte_b__0,0);
      *(undefined8 *)(lVar7 + 0x18) = uVar10;
      func_0x000180314690(lVar7 + 0x18,uVar10);
      if (*(longlong *)(lVar7 + 0x10) == 0) goto code_r0x000180737ab3;
      FUN_180990d50(*(longlong *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18),0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>
                   );
    }
code_r0x000180737706:
    if (plVar8 == (longlong *)0x0) goto code_r0x000180737ab3;
  }
  else {
    lVar7 = SparkHtml_No__Attr__180735120(param_2,LIT_"'fore'",0);
    if (((lVar7 == 0) && (lVar7 = LIT_"''", LIT_"''" == 0)) ||
       (lVar7 = System_String__ToLowerInvariant(lVar7,0), lVar7 == 0)) goto code_r0x000180737ab3;
    cVar3 = System_String__Contains(lVar7,LIT_"'prev'",0);
    lVar14 = LIT_"'<'";
    if ((cVar3 == '\0') &&
       (cVar3 = System_String__Contains(lVar7,LIT_"'next'",0), lVar14 = LIT_"''",
       cVar3 != '\0')) {
      lVar14 = LIT_"'>'";
    }
    if (plVar9 == (longlong *)0x0) goto code_r0x000180737ab3;
    (**(code **)(*plVar9 + 0xe48))(plVar9,lVar14,*(undefined8 *)(*plVar9 + 0xe50));
    if (0 < iVar4) goto code_r0x000180737706;
    if (plVar8 == (longlong *)0x0) goto code_r0x000180737ab3;
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar8,0);
    puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar9 == (longlong *)0x0) goto code_r0x000180737ab3;
    lVar7 = *plVar9;
    uVar10 = *puVar12;
    uVar1 = *(undefined4 *)(puVar12 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar13 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar12 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0xad) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x000180737585;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar12 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180737585:
    uStack_68 = uVar10;
    uStack_60 = uVar1;
    (*(code *)*puVar12)(plVar9,&uStack_68,puVar12[1]);
  }
  plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar8,0);
  plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar8,0);
  puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
  if (plVar11 != (longlong *)0x0) {
    lVar7 = *plVar11;
    uVar10 = *puVar12;
    uVar1 = *(undefined4 *)(puVar12 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar13 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar12 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0x4f) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x0001807377a7;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001807377a7:
    uStack_68 = uVar10;
    uStack_60 = uVar1;
    (*(code *)*puVar12)(plVar11,&uStack_68,puVar12[1]);
    if (plVar9 != (longlong *)0x0) {
      lVar7 = *plVar9;
      if (*(ushort *)(lVar7 + 0x12e) != 0) {
        uVar13 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar12 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0x4d)
                       * 0x10 + 0x138 + lVar7);
            goto code_r0x000180737819;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
      }
      puVar12 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180737819:
      uStack_68 = uVar10;
      uStack_60 = uVar1;
      (*(code *)*puVar12)(plVar9,&uStack_68,puVar12[1]);
      plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar8,0);
      plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar8,0);
      puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
      if (plVar11 != (longlong *)0x0) {
        lVar7 = *plVar11;
        uVar10 = *puVar12;
        uVar1 = *(undefined4 *)(puVar12 + 1);
        if (*(ushort *)(lVar7 + 0x12e) != 0) {
          uVar13 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar12 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                         0x4b) * 0x10 + 0x138 + lVar7);
              goto code_r0x0001807378b7;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
        }
        puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001807378b7:
        uStack_68 = uVar10;
        uStack_60 = uVar1;
        (*(code *)*puVar12)(plVar11,&uStack_68,puVar12[1]);
        if (plVar9 != (longlong *)0x0) {
          lVar7 = *plVar9;
          if (*(ushort *)(lVar7 + 0x12e) != 0) {
            uVar13 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar12 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                           0x51) * 0x10 + 0x138 + lVar7);
                goto code_r0x000180737929;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
          }
          puVar12 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180737929:
          uStack_68 = uVar10;
          uStack_60 = uVar1;
          (*(code *)*puVar12)(plVar9,&uStack_68,puVar12[1]);
          uVar10 = SparkHtml_No__Attr__180735120(param_2,LIT_"'action'",0);
          *(undefined8 *)(lVar6 + 0x18) = uVar10;
          func_0x000180314690(lVar6 + 0x18,uVar10);
          uVar10 = SparkHtml_No__Attr__180735120(param_2,LIT_"'msg'",0);
          *(undefined8 *)(lVar6 + 0x20) = uVar10;
          func_0x000180314690(lVar6 + 0x20,uVar10);
          cVar3 = func_0x000181707e50(*(undefined8 *)(lVar6 + 0x18),0);
          if (cVar3 == '\0') {
            uVar10 = func_0x000180315580(TI_System.Action);
            FUN_1816a9c60(uVar10,lVar6,MD_SparkHtml.__c__DisplayClass21_0._Botao_b__0,0);
            UnityEngine_UIElements_Button__add_clicked(plVar8,uVar10,0);
          }
          uVar10 = func_0x000180315580(TI_ButtonClickSoundManipulator);
          BlinkingCursorManipulator___ctor__1807aa3c0(uVar10,plVar8,0);
          UnityEngine_UIElements_VisualElementExtensions__AddManipulator(plVar8,uVar10,0);
          return plVar8;
        }
      }
    }
  }
code_r0x000180737ab3:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  plVar8 = (longlong *)(*pcVar2)();
  return plVar8;
}

