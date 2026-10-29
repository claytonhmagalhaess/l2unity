// NpcHtmlWindow__RefreshContent__180683c60 @ 0x180683c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__RefreshContent__180683c60
               (longlong *param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 auStackX_10 [4];
  undefined4 auStackX_20 [2];
  
  auStackX_10[0] = param_2;
  auStackX_20[0] = param_4;
  if (cRam00000001834b3e43 == '\0') {
    FUN_180315380(TI_System.Action<string>);
    FUN_180315380(TI_System.Action<string,string>);
    FUN_180315380(TI_SparkHtml.Contexto);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<string,string>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MD_NpcHtmlWindow.Clique);
    FUN_180315380(MD_NpcHtmlWindow._RefreshContent_b__24_0);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(LIT_"'%objectId%'");
    FUN_180315380(LIT_"'Chat'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'%item%'");
    cRam00000001834b3e43 = '\x01';
  }
  if (cRam00000001834b3eaa == '\0') {
    FUN_180315380(TI_SparkEnchantWindow);
    cRam00000001834b3eaa = '\x01';
  }
  uVar6 = **(undefined8 **)(TI_SparkEnchantWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if (cVar4 != '\0') {
    if (cRam00000001834b3eaa == '\0') {
      FUN_180315380(TI_SparkEnchantWindow);
      cRam00000001834b3eaa = '\x01';
    }
    if (**(longlong **)(TI_SparkEnchantWindow + 0xb8) == 0) goto code_r0x0001806841b5;
    cVar4 = func_0x00018079b3f0(**(longlong **)(TI_SparkEnchantWindow + 0xb8),0);
    if (cVar4 != '\0') {
      if (cRam00000001834b3eaa == '\0') {
        FUN_180315380(TI_SparkEnchantWindow);
        cRam00000001834b3eaa = '\x01';
      }
      plVar1 = (longlong *)**(longlong **)(TI_SparkEnchantWindow + 0xb8);
      if (plVar1 == (longlong *)0x0) goto code_r0x0001806841b5;
      (**(code **)(*plVar1 + 0x1c8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x1d0));
    }
  }
  (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x19] != 0) {
    UnityEngine_UIElements_VisualElement__Clear(param_1[0x19],0);
    if (param_1[0x19] != 0) {
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x19],0);
      uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
      if (lVar5 != 0) {
        FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
        if (param_1[0x19] != 0) {
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x19],0);
          uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
          if (lVar5 != 0) {
            FUN_180005060(1,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
            if (param_1[0x19] != 0) {
              lVar5 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x19],0);
              uVar6 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
              if (lVar5 != 0) {
                FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                if (param_1[0x19] != 0) {
                  lVar5 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x19],0);
                  uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                  if (lVar5 != 0) {
                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                    lVar5 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,string>);
                    FUN_18124bf80(lVar5,MR_System.Collections.Generic.Dictionary<string,string>..ctor);
                    param_1[0x1e] = lVar5;
                    func_0x000180314690(param_1 + 0x1e,lVar5);
                    plVar1 = (longlong *)param_1[0x1b];
                    if (plVar1 != (longlong *)0x0) {
                      (**(code **)(*plVar1 + 0xe48))
                                (plVar1,LIT_"'Chat'",*(undefined8 *)(*plVar1 + 0xe50));
                      lVar5 = LIT_"''";
                      if (param_3 == 0) {
                        uVar6 = System_Int32__ToString(auStackX_10,0);
                        if (lVar5 == 0) goto code_r0x0001806841b5;
                      }
                      else {
                        uVar6 = System_Int32__ToString(auStackX_10,0);
                        lVar5 = param_3;
                      }
                      lVar5 = System_String__Replace(lVar5,LIT_"'%objectId%'",uVar6,0);
                      uVar6 = System_Int32__ToString(auStackX_20,0);
                      if (lVar5 != 0) {
                        uVar6 = System_String__Replace(lVar5,LIT_"'%item%'",uVar6,0);
                        lVar5 = func_0x000180315580(TI_SparkHtml.Contexto);
                        SparkHtml_Contexto___ctor__1807350a0(lVar5,0);
                        uVar7 = func_0x000180315580(TI_System.Action<string,string>);
                        FUN_180e35270(uVar7,param_1,MD_NpcHtmlWindow.Clique,0);
                        if (lVar5 != 0) {
                          *(undefined8 *)(lVar5 + 0x10) = uVar7;
                          func_0x000180314690(lVar5 + 0x10,uVar7);
                          uVar7 = func_0x000180315580(TI_System.Action<string>);
                          FUN_18055b980(uVar7,param_1,MD_NpcHtmlWindow._RefreshContent_b__24_0,0);
                          *(undefined8 *)(lVar5 + 0x18) = uVar7;
                          func_0x000180314690(lVar5 + 0x18,uVar7);
                          *(longlong *)(lVar5 + 0x28) = param_1[0x11];
                          func_0x000180314690(lVar5 + 0x28);
                          *(longlong *)(lVar5 + 0x30) = param_1[0x18];
                          func_0x000180314690(lVar5 + 0x30);
                          *(undefined4 *)(lVar5 + 0x38) = 0x41300000;
                          param_1[0x1f] = *(longlong *)(lVar5 + 0x20);
                          func_0x000180314690(param_1 + 0x1f);
                          lVar2 = param_1[0x19];
                          if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          uVar6 = SparkHtml__Le__18073bd70(uVar6,0);
                          SparkHtml__Desenha__180739b60(lVar2,uVar6,lVar5,0);
                          lVar5 = param_1[0x1a];
                          if (DAT_1834b2f44 == '\0') {
                            FUN_180315380(TI_UnityEngine.Vector2);
                            DAT_1834b2f44 = '\x01';
                          }
                          if (lVar5 != 0) {
                            UnityEngine_UIElements_ScrollView__set_scrollOffset
                                      (lVar5,**(undefined8 **)(TI_UnityEngine.Vector2 + 0xb8),0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x0001806841b5:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

