// NpcHtmlWindow__PreProcessHtml__180681eb0 @ 0x180681eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__PreProcessHtml__180681eb0
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 auStackX_18 [2];
  undefined4 auStackX_20 [2];
  
  auStackX_18[0] = param_3;
  auStackX_20[0] = param_4;
  if (cRam00000001834b3e48 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(LIT_"'</body>'");
    FUN_180315380(LIT_"'%objectId%'");
    FUN_180315380(LIT_"'<br1>'");
    FUN_180315380(LIT_"'<body>'");
    FUN_180315380(LIT_"'</html>'");
    FUN_180315380(LIT_"'<center>'");
    FUN_180315380(LIT_"'\\\\s{2,}'");
    FUN_180315380(LIT_"'</p>'");
    FUN_180315380(LIT_"'</center>'");
    FUN_180315380(LIT_"'<html>'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'%item%'");
    FUN_180315380(LIT_"'<p>'");
    cRam00000001834b3e48 = '\x01';
  }
  if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = System_Text_RegularExpressions_Regex__Replace
                    (param_2,LIT_"'\\\\s{2,}'",LIT_"''",0);
  if (lVar5 == 0) goto DAT_1806825b6;
  cVar4 = System_String__Contains(lVar5,LIT_"'<center>'",0);
  lVar6 = *(longlong *)(param_1 + 200);
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + 0xe0) = 0;
    if (lVar6 == 0) goto DAT_1806825b6;
    lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
    uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    if (lVar6 == 0) goto DAT_1806825b6;
    FUN_180005060(1,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
    if (*(longlong *)(param_1 + 200) == 0) goto DAT_1806825b6;
    lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 200),0);
    uVar7 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xe0) = 1;
    if (lVar6 == 0) goto DAT_1806825b6;
    lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
    uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    if (lVar6 == 0) goto DAT_1806825b6;
    FUN_180005060(1,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
    if (*(longlong *)(param_1 + 200) == 0) goto DAT_1806825b6;
    lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 200),0);
    uVar7 = 1;
  }
  uVar7 = FUN_180eb5810(uVar7,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
  if (lVar6 != 0) {
    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
    lVar5 = System_String__Replace(lVar5,LIT_"'<html>'",LIT_"''",0);
    if (lVar5 != 0) {
      lVar5 = System_String__Replace(lVar5,LIT_"'</html>'",LIT_"''",0);
      if (lVar5 != 0) {
        lVar5 = System_String__Replace(lVar5,LIT_"'<body>'",LIT_"''",0);
        if (lVar5 != 0) {
          lVar5 = System_String__Replace(lVar5,LIT_"'</body>'",LIT_"''",0);
          uVar7 = System_Int32__ToString(auStackX_18,0);
          if (lVar5 != 0) {
            lVar5 = System_String__Replace(lVar5,LIT_"'%objectId%'",uVar7,0);
            uVar7 = System_Int32__ToString(auStackX_20,0);
            if (lVar5 != 0) {
              lVar5 = System_String__Replace(lVar5,LIT_"'%item%'",uVar7,0);
              if (lVar5 != 0) {
                lVar5 = System_String__Replace(lVar5,LIT_"'<center>'",LIT_"''",0);
                if (lVar5 != 0) {
                  lVar5 = System_String__Replace(lVar5,LIT_"'</center>'",LIT_"''",0);
                  if (lVar5 != 0) {
                    lVar5 = System_String__Replace
                                      (lVar5,LIT_"'<p>'",LIT_"'<br1>'",0);
                    if (lVar5 != 0) {
                      uVar7 = System_String__Replace
                                        (lVar5,LIT_"'</p>'",LIT_"'<br1>'",0);
                      if (cRam00000001834b3e49 == '\0') {
                        FUN_180315380(TI_System.Text.RegularExpressions.MatchEvaluator);
                        FUN_180315380(TI_System.Text.RegularExpressions.Regex);
                        FUN_180315380(MD_NpcHtmlWindow.__c._ReplaceItemNames_b__34_0);
                        FUN_180315380(TI_NpcHtmlWindow.<>c);
                        FUN_180315380(LIT_"'\\\\&\\\\#(\\\\d+);'");
                        cRam00000001834b3e49 = '\x01';
                      }
                      if (*(int *)(TI_NpcHtmlWindow.<>c + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar3 = LIT_"'\\\\&\\\\#(\\\\d+);'";
                      lVar5 = *(longlong *)(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x18);
                      if (lVar5 == 0) {
                        if (*(int *)(TI_NpcHtmlWindow.<>c + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar1 = **(undefined8 **)(TI_NpcHtmlWindow.<>c + 0xb8);
                        lVar5 = func_0x000180315580(TI_System.Text.RegularExpressions.MatchEvaluator);
                        FUN_18148abd0(lVar5,uVar1,MD_NpcHtmlWindow.__c._ReplaceItemNames_b__34_0,0);
                        *(longlong *)(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x18) = lVar5;
                        func_0x000180314690(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x18,lVar5)
                        ;
                      }
                      if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar7 = System_Text_RegularExpressions_Regex__Replace(uVar7,uVar3,lVar5,0);
                      if (cRam00000001834b3e4a == '\0') {
                        FUN_180315380(TI_System.Text.RegularExpressions.MatchEvaluator);
                        FUN_180315380(TI_System.Text.RegularExpressions.Regex);
                        FUN_180315380(MD_NpcHtmlWindow.__c._ReplaceSysStrings_b__35_0);
                        FUN_180315380(TI_NpcHtmlWindow.<>c);
                        FUN_180315380(LIT_"'\\\\&\\\\$(\\\\d+);'");
                        cRam00000001834b3e4a = '\x01';
                      }
                      if (*(int *)(TI_NpcHtmlWindow.<>c + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar3 = LIT_"'\\\\&\\\\$(\\\\d+);'";
                      lVar5 = *(longlong *)(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x20);
                      if (lVar5 == 0) {
                        if (*(int *)(TI_NpcHtmlWindow.<>c + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar1 = **(undefined8 **)(TI_NpcHtmlWindow.<>c + 0xb8);
                        lVar5 = func_0x000180315580(TI_System.Text.RegularExpressions.MatchEvaluator);
                        FUN_18148abd0(lVar5,uVar1,MD_NpcHtmlWindow.__c._ReplaceSysStrings_b__35_0,0);
                        *(longlong *)(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x20) = lVar5;
                        func_0x000180314690(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x20,lVar5)
                        ;
                      }
                      if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar7 = System_Text_RegularExpressions_Regex__Replace(uVar7,uVar3,lVar5,0);
                      if (cRam00000001834b3e4b == '\0') {
                        FUN_180315380(TI_System.Text.RegularExpressions.MatchEvaluator);
                        FUN_180315380(TI_System.Text.RegularExpressions.Regex);
                        FUN_180315380(MD_NpcHtmlWindow.__c._ReplaceFontColors_b__36_0);
                        FUN_180315380(TI_NpcHtmlWindow.<>c);
                        FUN_180315380(LIT_"'<font color=(?:\"|\\')?([^\"\\'>]+?)(?:\"|\\')?>(.*?)</font>'");
                        cRam00000001834b3e4b = '\x01';
                      }
                      if (*(int *)(TI_NpcHtmlWindow.<>c + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar3 = LIT_"'<font color=(?:\"|\\')?([^\"\\'>]+?)(?:\"|\\')?>(.*?)</font>'";
                      lVar5 = *(longlong *)(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x28);
                      if (lVar5 == 0) {
                        if (*(int *)(TI_NpcHtmlWindow.<>c + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar1 = **(undefined8 **)(TI_NpcHtmlWindow.<>c + 0xb8);
                        lVar5 = func_0x000180315580(TI_System.Text.RegularExpressions.MatchEvaluator);
                        FUN_18148abd0(lVar5,uVar1,MD_NpcHtmlWindow.__c._ReplaceFontColors_b__36_0,0);
                        *(longlong *)(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x28) = lVar5;
                        func_0x000180314690(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x28,lVar5)
                        ;
                      }
                      if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      System_Text_RegularExpressions_Regex__Replace(uVar7,uVar3,lVar5,0);
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
DAT_1806825b6:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

