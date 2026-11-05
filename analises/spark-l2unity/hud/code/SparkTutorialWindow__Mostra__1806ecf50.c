// SparkTutorialWindow__Mostra__1806ecf50 @ 0x1806ecf50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTutorialWindow__Mostra__1806ecf50(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (cRam00000001834b407a == '\0') {
    FUN_180315380(TI_System.Action<string>);
    FUN_180315380(TI_System.Action<string,string>);
    FUN_180315380(TI_SparkHtml.Contexto);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(MD_SparkTutorialWindow.Clique);
    FUN_180315380(MD_SparkTutorialWindow._Mostra_b__29_0);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(LIT_"'Tutorial'");
    FUN_180315380(LIT_"''");
    cRam00000001834b407a = '\x01';
  }
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  if (param_1[0x14] != 0) {
    UnityEngine_UIElements_VisualElement__Clear(param_1[0x14],0);
    if (param_1[0x14] != 0) {
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x14],0);
      uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
      if (lVar4 != 0) {
        FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
        if (param_1[0x14] != 0) {
          lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x14],0);
          uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
          if (lVar4 != 0) {
            FUN_180005060(1,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
            if (param_1[0x14] != 0) {
              lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x14],0);
              uVar5 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
              if (lVar4 != 0) {
                FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
                if (param_1[0x14] != 0) {
                  lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x14],0);
                  uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                  if (lVar4 != 0) {
                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
                    plVar1 = (longlong *)param_1[0x16];
                    if (plVar1 != (longlong *)0x0) {
                      (**(code **)(*plVar1 + 0xe48))
                                (plVar1,LIT_"'Tutorial'",*(undefined8 *)(*plVar1 + 0xe50));
                      lVar4 = func_0x000180315580(TI_SparkHtml.Contexto);
                      SparkHtml_Contexto___ctor__1807350a0(lVar4,0);
                      uVar5 = func_0x000180315580(TI_System.Action<string,string>);
                      FUN_180e35270(uVar5,param_1,MD_SparkTutorialWindow.Clique,0);
                      if (lVar4 != 0) {
                        *(undefined8 *)(lVar4 + 0x10) = uVar5;
                        func_0x000180314690(lVar4 + 0x10,uVar5);
                        uVar5 = func_0x000180315580(TI_System.Action<string>);
                        FUN_18055b980(uVar5,param_1,MD_SparkTutorialWindow._Mostra_b__29_0,0);
                        *(undefined8 *)(lVar4 + 0x18) = uVar5;
                        func_0x000180314690(lVar4 + 0x18,uVar5);
                        *(longlong *)(lVar4 + 0x28) = param_1[0x12];
                        func_0x000180314690(lVar4 + 0x28);
                        *(longlong *)(lVar4 + 0x30) = param_1[0x13];
                        func_0x000180314690(lVar4 + 0x30);
                        *(undefined4 *)(lVar4 + 0x38) = 0x41600000;
                        uStack_38 = 0x3f19999a3ecccccd;
                        uStack_30 = 0x3f8000003f800000;
                        uStack_28 = 0;
                        uStack_20 = 0;
                        uStack_18 = 0;
                        func_0x000180cb7cb0(&uStack_28,&uStack_38,MR_System.Nullable<UnityEngine.Color>..ctor);
                        *(undefined4 *)(lVar4 + 0x3c) = (undefined4)uStack_28;
                        *(undefined4 *)(lVar4 + 0x40) = uStack_28._4_4_;
                        *(undefined4 *)(lVar4 + 0x44) = (undefined4)uStack_20;
                        *(undefined4 *)(lVar4 + 0x48) = uStack_20._4_4_;
                        *(undefined4 *)(lVar4 + 0x4c) = uStack_18;
                        *(undefined1 *)(lVar4 + 0x50) = 1;
                        param_1[0x17] = *(longlong *)(lVar4 + 0x20);
                        func_0x000180314690(param_1 + 0x17);
                        lVar6 = LIT_"''";
                        if (param_2 != 0) {
                          lVar6 = param_2;
                        }
                        lVar2 = param_1[0x14];
                        if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar5 = SparkHtml__Le__18073bd70(lVar6,0);
                        SparkHtml__Desenha__180739b60(lVar2,uVar5,lVar4,0);
                        lVar4 = param_1[0x15];
                        if (DAT_1834b2f44 == '\0') {
                          FUN_180315380(TI_UnityEngine.Vector2);
                          DAT_1834b2f44 = '\x01';
                        }
                        if (lVar4 != 0) {
                          UnityEngine_UIElements_ScrollView__set_scrollOffset
                                    (lVar4,**(undefined8 **)(TI_UnityEngine.Vector2 + 0xb8),0);
                          if ((char)param_1[7] != '\0') {
                            (**(code **)(*param_1 + 0x1d8))
                                      (param_1,*(undefined8 *)(*param_1 + 0x1e0));
                          }
                          (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200))
                          ;
                          return;
                        }
                        FUN_1803155d0();
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
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
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

