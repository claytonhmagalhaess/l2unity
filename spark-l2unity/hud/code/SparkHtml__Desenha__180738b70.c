// SparkHtml__Desenha__180738b70 @ 0x180738b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml__Desenha__180738b70
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 uVar13;
  longlong *plStack_88;
  undefined4 uStack_80;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if (cRam00000001834b424b == '\0') {
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_char__);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.ContainsKey);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.get_Count);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>.GetValueOrDefault);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>.get_HasValue);
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(TI_string__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(FI_30);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass14_0._Desenha_b__0);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass14_0._Desenha_b__1);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass14_0._Desenha_b__2);
    FUN_180315380(TI_SparkHtml.<>c__DisplayClass14_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'icon'");
    FUN_180315380(LIT_"'a'");
    FUN_180315380(LIT_"'font'");
    FUN_180315380(LIT_"'p'");
    FUN_180315380(LIT_"' '");
    FUN_180315380(LIT_"'multiedit'");
    FUN_180315380(LIT_"'button'");
    FUN_180315380(LIT_"'br'");
    FUN_180315380(LIT_"'<u>'");
    FUN_180315380(LIT_"'[\\\\r\\\\n\\\\t]+'");
    FUN_180315380(LIT_"'br1'");
    FUN_180315380(LIT_"'<'");
    FUN_180315380(LIT_"'img'");
    FUN_180315380(LIT_"'<noparse><</noparse>'");
    FUN_180315380(LIT_"'edit'");
    FUN_180315380(LIT_"'</u>'");
    FUN_180315380(LIT_"'hr'");
    FUN_180315380(LIT_"'<color=#'");
    FUN_180315380(LIT_"'table'");
    FUN_180315380(LIT_"'title'");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"'color'");
    FUN_180315380(LIT_"'combobox'");
    FUN_180315380(LIT_"'>'");
    FUN_180315380(LIT_"'center'");
    FUN_180315380(LIT_"'msg'");
    FUN_180315380(LIT_"'action'");
    cRam00000001834b424b = '\x01';
  }
  lVar6 = func_0x000180315580(TI_SparkHtml.<>c__DisplayClass14_0);
  Gear__UpdateWeaponType__1803dadf0(lVar6,0);
  if (lVar6 == 0) goto code_r0x000180739b47;
  *(longlong *)(lVar6 + 0x10) = param_1;
  func_0x000180314690(lVar6 + 0x10,param_1);
  if (param_2 == 0) goto code_r0x000180739b47;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    if (param_3 != 0) {
      lVar6 = *(longlong *)(param_2 + 0x18);
      if (*(longlong *)(param_3 + 0x20) == 0) {
        if (*(longlong *)(param_3 + 0x28) == 0) goto code_r0x000180739b47;
        iVar5 = func_0x000181717180(*(longlong *)(param_3 + 0x28),0);
        if (iVar5 == 0) {
          uVar7 = func_0x000180314710(TI_char__,4);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    (uVar7,FI_30,0);
          if (lVar6 == 0) goto code_r0x000180739b47;
          lVar6 = System_String__TrimStart(lVar6,uVar7,0);
        }
      }
      if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar7 = SparkHtml__Entidades__180739c60(lVar6,0);
      if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar6 = System_Text_RegularExpressions_Regex__Replace
                        (uVar7,LIT_"'[\\\\r\\\\n\\\\t]+'",LIT_"' '",0);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x10) == 0) {
          return;
        }
        uVar7 = System_String__Replace(lVar6,LIT_"'<'",LIT_"'<noparse><</noparse>'",0);
        cVar3 = func_0x000181707e50(param_4,0);
        if (cVar3 == '\0') {
          lVar6 = func_0x000180314710(TI_string__,5);
          if (lVar6 == 0) goto code_r0x000180739b47;
          if (*(int *)(lVar6 + 0x18) == 0) {
code_r0x000180739b53:
            FUN_1803155c0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined8 *)(lVar6 + 0x20) = LIT_"'<color=#'";
          func_0x000180314690(lVar6 + 0x20);
          if (*(uint *)(lVar6 + 0x18) < 2) goto code_r0x000180739b53;
          *(longlong *)(lVar6 + 0x28) = param_4;
          func_0x000180314690(lVar6 + 0x28,param_4);
          if (*(uint *)(lVar6 + 0x18) < 3) goto code_r0x000180739b53;
          *(undefined8 *)(lVar6 + 0x30) = LIT_"'>'";
          func_0x000180314690(lVar6 + 0x30);
          if (*(uint *)(lVar6 + 0x18) < 4) goto code_r0x000180739b53;
          *(undefined8 *)(lVar6 + 0x38) = uVar7;
          func_0x000180314690(lVar6 + 0x38,uVar7);
          if (*(uint *)(lVar6 + 0x18) < 5) goto code_r0x000180739b53;
          *(undefined8 *)(lVar6 + 0x40) = LIT_"'</color>'";
          func_0x000180314690(lVar6 + 0x40);
          uVar7 = System_String__Concat(lVar6,0);
        }
        if (*(longlong *)(param_3 + 0x28) != 0) {
          System_Text_StringBuilder__Append(*(longlong *)(param_3 + 0x28),uVar7,0);
          return;
        }
      }
    }
    goto code_r0x000180739b47;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = _PrivateImplementationDetails___ComputeStringHash(uVar7,0);
  if (uVar4 < 0x4f3acf40) {
    if (uVar4 < 0x274e1291) {
      if (uVar4 == 0x58c4484) {
        cVar3 = func_0x0001817058a0(uVar7,LIT_"'center'",0);
        if (cVar3 != '\0') {
          if (param_3 != 0) {
            if (cRam00000001834b426f == '\0') {
              FUN_180315380(TI_UnityEngine.UIElements.IStyle);
              FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
              cRam00000001834b426f = '\x01';
            }
            SparkHtml_Bloco__SoltaTexto__180734d30(param_3,0);
            if (*(longlong *)(param_3 + 0x20) != 0) {
              *(undefined8 *)(param_3 + 0x20) = 0;
              func_0x000180314690(param_3 + 0x20,0);
            }
            uVar1 = *(undefined1 *)(param_3 + 0x18);
            *(undefined1 *)(param_3 + 0x18) = 1;
            SparkHtml__Filhos__18073a8e0(param_1,param_2,param_3,param_4,0);
            if (cRam00000001834b426f == '\0') {
              FUN_180315380(TI_UnityEngine.UIElements.IStyle);
              FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
              cRam00000001834b426f = '\x01';
            }
            SparkHtml_Bloco__SoltaTexto__180734d30(param_3,0);
            if (*(longlong *)(param_3 + 0x20) != 0) {
              *(undefined8 *)(param_3 + 0x20) = 0;
              func_0x000180314690(param_3 + 0x20,0);
            }
            *(undefined1 *)(param_3 + 0x18) = uVar1;
            return;
          }
          goto code_r0x000180739b47;
        }
      }
      else if (uVar4 == 0x25e65bcc) {
        cVar3 = func_0x0001817058a0(uVar7,LIT_"'br1'",0);
        if (cVar3 != '\0') {
          if (param_3 != 0) {
            uVar13 = 0x40800000;
            goto code_r0x00018073955d;
          }
          goto code_r0x000180739b47;
        }
      }
      else if ((uVar4 == 0x274e1290) &&
              (cVar3 = func_0x0001817058a0(uVar7,LIT_"'font'",0), cVar3 != '\0')) {
        uVar7 = SparkHtml_No__Attr__180735120(param_2,LIT_"'color'",0);
        if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar6 = SparkHtml__Cor__180738870(uVar7,0);
        if (lVar6 != 0) {
          param_4 = lVar6;
        }
        if (param_1 == 0) goto code_r0x000180739b47;
      }
      goto code_r0x000180739967;
    }
    if (0x4a9c9bdf < uVar4) {
      if (uVar4 == 0x4f2bc4b5) {
        cVar3 = func_0x0001817058a0(uVar7,LIT_"'br'",0);
        if (cVar3 != '\0') {
          if (param_3 != 0) {
            uVar13 = 0x41300000;
code_r0x00018073955d:
            SparkHtml_Bloco__Quebra__180734af0(param_3,1,uVar13,0);
            return;
          }
          goto code_r0x000180739b47;
        }
      }
      else if ((uVar4 == 0x4f3acf3f) &&
              (cVar3 = func_0x0001817058a0(uVar7,LIT_"'hr'",0), cVar3 != '\0')) {
        lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
        UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
        if (lVar6 != 0) {
          lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
          puVar10 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_68,0x3f800000,0);
          if (lVar9 != 0) {
            uStack_80 = *(undefined4 *)(puVar10 + 1);
            plStack_88 = (longlong *)*puVar10;
            FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar9,&plStack_88);
            lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
            lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
            puVar10 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_68,0x40400000,0);
            if (lVar12 != 0) {
              plVar11 = (longlong *)*puVar10;
              uVar13 = *(undefined4 *)(puVar10 + 1);
              plStack_88 = plVar11;
              uStack_80 = uVar13;
              FUN_1800050f0(0x4b,TI_UnityEngine.UIElements.IStyle,lVar12,&plStack_88);
              if (lVar9 != 0) {
                plStack_88 = plVar11;
                uStack_80 = uVar13;
                FUN_1800050f0(0x51,TI_UnityEngine.UIElements.IStyle,lVar9,&plStack_88);
                lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                uStack_68 = 0x3ee66666;
                uStack_64 = 0x3ed70a3d;
                uStack_60 = 0x3eae147b;
                uStack_5c = 0x3f333333;
                puVar10 = (undefined8 *)
                          UnityEngine_UIElements_StyleColor__op_Implicit(&plStack_88,&uStack_68,0);
                if (lVar9 != 0) {
                  uStack_58 = *(undefined4 *)(puVar10 + 2);
                  uStack_68 = (undefined4)*puVar10;
                  uStack_64 = (undefined4)((ulonglong)*puVar10 >> 0x20);
                  uStack_60 = (undefined4)puVar10[1];
                  uStack_5c = (undefined4)((ulonglong)puVar10[1] >> 0x20);
                  FUN_180004fc0(9,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_68);
                  if (param_3 != 0) {
                    SparkHtml_Bloco__Inteiro__180734740(param_3,lVar6,0);
                    return;
                  }
                }
              }
            }
          }
        }
        goto code_r0x000180739b47;
      }
      goto code_r0x000180739967;
    }
    if (uVar4 == 0x43b27471) {
      cVar3 = func_0x0001817058a0(uVar7,LIT_"'button'",0);
      if (cVar3 == '\0') goto code_r0x000180739967;
      if (*(longlong *)(param_2 + 0x28) == 0) goto code_r0x000180739b47;
      if (*(int *)(*(longlong *)(param_2 + 0x28) + 0x18) < 1) {
        if (*(longlong *)(param_2 + 0x20) == 0) goto code_r0x000180739b47;
        cVar3 = FUN_18124cf10(*(longlong *)(param_2 + 0x20),LIT_"'icon'",MR_System.Collections.Generic.Dictionary<string,string>.ContainsKey);
        if (cVar3 == '\0') {
          uVar7 = SparkHtml__Botao__180736e80(param_1,param_2,0);
          goto code_r0x000180739224;
        }
      }
      uVar7 = SparkHtml__BotaoDeLista__1807353d0(param_1,param_2,0);
    }
    else {
      if ((uVar4 != 0x4a9c9bdf) ||
         (cVar3 = func_0x0001817058a0(uVar7,LIT_"'table'",0), cVar3 == '\0'))
      goto code_r0x000180739967;
      uVar7 = SparkHtml__Tabela__18073dff0(param_1,param_2,0);
    }
    if (param_3 != 0) {
      SparkHtml_Bloco__Inteiro__180734740(param_3,uVar7,0);
      return;
    }
  }
  else {
    if (uVar4 < 0x84e72505) {
      if (uVar4 == 0x5be7d591) {
        cVar3 = func_0x0001817058a0(uVar7,LIT_"'edit'",0);
        if (cVar3 == '\0') goto code_r0x000180739967;
        uVar7 = SparkHtml__Campo__180737ad0(param_1,param_2,0,0);
      }
      else if (uVar4 == 0x774ce05e) {
        cVar3 = func_0x0001817058a0(uVar7,LIT_"'multiedit'",0);
        if (cVar3 == '\0') goto code_r0x000180739967;
        uVar7 = SparkHtml__Campo__180737ad0(param_1,param_2,1,0);
      }
      else {
        if ((uVar4 != 0x84e72504) ||
           (cVar3 = func_0x0001817058a0(uVar7,LIT_"'img'",0), cVar3 == '\0'))
        goto code_r0x000180739967;
        uVar7 = SparkHtml__Imagem__18073ad30(param_1,param_2,0);
      }
    }
    else if (uVar4 < 0xafb65f8f) {
      if (uVar4 == 0x9865b509) {
        cVar3 = func_0x0001817058a0(uVar7,LIT_"'title'",0);
        if (cVar3 != '\0') {
          if (*(longlong *)(param_1 + 0x10) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
            if (lVar6 == 0) {
              return;
            }
            if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
              func_0x000180315660();
            }
            if (cRam00000001834b4260 == '\0') {
              FUN_180315380(TI_SparkHtml);
              FUN_180315380(TI_System.Text.StringBuilder);
              cRam00000001834b4260 = '\x01';
            }
            plVar11 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
            System_Text_StringBuilder___ctor(plVar11,0);
            plStack_88 = plVar11;
            func_0x000180314690(&plStack_88,plVar11);
            if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkHtml___TextoPuro_g__Anda_35_0(param_2,&plStack_88,0);
            if (plStack_88 == (longlong *)0x0) {
              FUN_1803155d0();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar7 = (**(code **)(*plStack_88 + 0x168))
                              (plStack_88,*(undefined8 *)(*plStack_88 + 0x170));
            lVar9 = SparkHtml__Entidades__180739c60(uVar7,0);
            if (lVar9 != 0) {
              uVar7 = func_0x00018170d270(lVar9,0);
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),uVar7,*(undefined8 *)(lVar6 + 0x28));
              return;
            }
          }
          goto code_r0x000180739b47;
        }
        goto code_r0x000180739967;
      }
      if ((uVar4 != 0xafb65f8e) ||
         (cVar3 = func_0x0001817058a0(uVar7,LIT_"'combobox'",0), cVar3 == '\0'))
      goto code_r0x000180739967;
      uVar7 = SparkHtml__Combo__180738210(param_1,param_2,0);
    }
    else {
      if (uVar4 != 0xe40c292c) {
        if ((uVar4 == 0xf50c43ef) &&
           (cVar3 = func_0x0001817058a0(uVar7,LIT_"'p'",0), cVar3 != '\0')) {
          if (param_3 != 0) {
            if (cRam00000001834b426f == '\0') {
              FUN_180315380(TI_UnityEngine.UIElements.IStyle);
              FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
              cRam00000001834b426f = '\x01';
            }
            SparkHtml_Bloco__SoltaTexto__180734d30(param_3,0);
            if (*(longlong *)(param_3 + 0x20) != 0) {
              *(undefined8 *)(param_3 + 0x20) = 0;
              func_0x000180314690(param_3 + 0x20,0);
            }
            SparkHtml__Filhos__18073a8e0(param_1,param_2,param_3,param_4,0);
            if (cRam00000001834b426f == '\0') {
              FUN_180315380(TI_UnityEngine.UIElements.IStyle);
              FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
              cRam00000001834b426f = '\x01';
            }
            SparkHtml_Bloco__SoltaTexto__180734d30(param_3,0);
            if (*(longlong *)(param_3 + 0x20) == 0) {
              return;
            }
            *(undefined8 *)(param_3 + 0x20) = 0;
            func_0x000180314690(param_3 + 0x20,0);
            return;
          }
          goto code_r0x000180739b47;
        }
code_r0x000180739967:
        SparkHtml__Filhos__18073a8e0(param_1,param_2,param_3,param_4,0);
        return;
      }
      cVar3 = func_0x0001817058a0(uVar7,LIT_"'a'",0);
      if (cVar3 == '\0') goto code_r0x000180739967;
      uVar7 = SparkHtml_No__Attr__180735120(param_2,LIT_"'action'",0);
      *(undefined8 *)(lVar6 + 0x30) = uVar7;
      func_0x000180314690(lVar6 + 0x30,uVar7);
      if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = SparkHtml__TemImagem__18073e860(param_2,0);
      if (cVar3 == '\0') {
        uVar7 = SparkHtml__RichInterno__18073dbf0(param_1,param_2,param_4,0);
        if (*(longlong *)(param_1 + 0x10) != 0) {
          if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x50) != '\0') {
            uVar7 = System_String__Concat(LIT_"'<u>'",uVar7,LIT_"'</u>'",0);
          }
          uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
          UnityEngine_UIElements_Label___ctor(uVar8,uVar7,0);
          *(undefined8 *)(lVar6 + 0x18) = uVar8;
          func_0x000180314690(lVar6 + 0x18,uVar8);
          if (*(longlong *)(lVar6 + 0x18) != 0) {
            UnityEngine_UIElements_TextElement__set_enableRichText(*(longlong *)(lVar6 + 0x18),1,0);
            uVar7 = *(undefined8 *)(lVar6 + 0x18);
            if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkHtml__Estilo__18073a000(uVar7,0);
            lVar9 = *(longlong *)(param_1 + 0x10);
            if (lVar9 != 0) {
              uVar7 = *(undefined8 *)(lVar9 + 0x3d);
              uStack_58 = *(undefined4 *)(lVar9 + 0x4c);
              uStack_68._1_3_ = (undefined3)uVar7;
              uStack_64 = (undefined4)((ulonglong)uVar7 >> 0x18);
              uStack_60._0_1_ = (undefined1)((ulonglong)uVar7 >> 0x38);
              uStack_60._1_3_ = (undefined3)*(undefined8 *)(lVar9 + 0x45);
              uStack_5c = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x45) >> 0x18);
              if (*(char *)(lVar9 + 0x3c) == '\0') {
                if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                  func_0x000180315660(TI_SparkHtml);
                }
                uVar7 = *(undefined8 *)(*(longlong *)(TI_SparkHtml + 0xb8) + 0x18);
                uVar8 = *(undefined8 *)(*(longlong *)(TI_SparkHtml + 0xb8) + 0x20);
              }
              else {
                uVar7 = CONCAT44(uStack_60,uStack_64);
                uVar8 = CONCAT44(uStack_58,uStack_5c);
              }
              *(undefined8 *)(lVar6 + 0x20) = uVar7;
              *(undefined8 *)(lVar6 + 0x28) = uVar8;
              if (*(longlong *)(lVar6 + 0x18) != 0) {
                lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(lVar6 + 0x18),0);
                uStack_68 = (undefined4)*(undefined8 *)(lVar6 + 0x20);
                uStack_64 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x20) >> 0x20);
                uStack_60 = (undefined4)*(undefined8 *)(lVar6 + 0x28);
                uStack_5c = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x28) >> 0x20);
                puVar10 = (undefined8 *)
                          UnityEngine_UIElements_StyleColor__op_Implicit(&plStack_88,&uStack_68,0);
                if (lVar9 != 0) {
                  uStack_58 = *(undefined4 *)(puVar10 + 2);
                  uStack_68 = (undefined4)*puVar10;
                  uStack_64 = (undefined4)((ulonglong)*puVar10 >> 0x20);
                  uStack_60 = (undefined4)puVar10[1];
                  uStack_5c = (undefined4)((ulonglong)puVar10[1] >> 0x20);
                  FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_68);
                  if (*(longlong *)(lVar6 + 0x18) != 0) {
                    lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(lVar6 + 0x18),0);
                    uVar7 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                    if (lVar9 != 0) {
                      FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar9,uVar7);
                      uVar7 = SparkHtml_No__Attr__180735120(param_2,LIT_"'msg'",0);
                      *(undefined8 *)(lVar6 + 0x38) = uVar7;
                      func_0x000180314690(lVar6 + 0x38,uVar7);
                      cVar3 = func_0x000181707e50(*(undefined8 *)(lVar6 + 0x30),0);
                      if (cVar3 == '\0') {
                        lVar9 = *(longlong *)(lVar6 + 0x18);
                        uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                        FUN_18055b980(uVar7,lVar6,MD_SparkHtml.__c__DisplayClass14_0._Desenha_b__0,0);
                        if (lVar9 == 0) goto code_r0x000180739b47;
                        FUN_180990d50(lVar9,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                        lVar9 = *(longlong *)(lVar6 + 0x18);
                        uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                        FUN_18055b980(uVar7,lVar6,MD_SparkHtml.__c__DisplayClass14_0._Desenha_b__1,0);
                        if (lVar9 == 0) goto code_r0x000180739b47;
                        FUN_180990d50(lVar9,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                        lVar9 = *(longlong *)(lVar6 + 0x18);
                        uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
                        FUN_18055b980(uVar7,lVar6,MD_SparkHtml.__c__DisplayClass14_0._Desenha_b__2,0);
                        if (lVar9 == 0) goto code_r0x000180739b47;
                        FUN_180990d50(lVar9,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
                        uVar7 = *(undefined8 *)(lVar6 + 0x18);
                        uVar8 = func_0x000180315580(TI_ButtonClickSoundManipulator);
                        BlinkingCursorManipulator___ctor__1807aa3c0(uVar8,uVar7,0);
                        UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                                  (uVar7,uVar8,0);
                      }
                      if (param_3 != 0) {
                        SparkHtml_Bloco__Peca__180734aa0(param_3,*(undefined8 *)(lVar6 + 0x18),0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x000180739b47;
      }
      uVar7 = *(undefined8 *)(lVar6 + 0x30);
      uVar8 = SparkHtml_No__Attr__180735120(param_2,LIT_"'msg'",0);
      uVar7 = SparkHtml__LinkComImagem__18073d550(param_1,param_2,param_4,uVar7,uVar8,0);
    }
code_r0x000180739224:
    if (param_3 != 0) {
      SparkHtml_Bloco__Peca__180734aa0(param_3,uVar7,0);
      return;
    }
  }
code_r0x000180739b47:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

