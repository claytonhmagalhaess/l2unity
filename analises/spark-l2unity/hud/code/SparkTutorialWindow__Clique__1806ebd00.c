// SparkTutorialWindow__Clique__1806ebd00 @ 0x1806ebd00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTutorialWindow__Clique__1806ebd00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (cRam00000001834b407c == '\0') {
    FUN_180315380(TI_System.Text.RegularExpressions.MatchEvaluator);
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    FUN_180315380(MD_SparkTutorialWindow._Clique_b__32_0);
    FUN_180315380(TI_SparkTutorial);
    FUN_180315380(LIT_"'\\\\$(\\\\w+)'");
    FUN_180315380(LIT_"'bypass'");
    FUN_180315380(LIT_"'$'");
    FUN_180315380(LIT_"'-h'");
    FUN_180315380(LIT_"'link '");
    FUN_180315380(LIT_"''");
    cRam00000001834b407c = '\x01';
  }
  if (((param_2 != 0) || (param_2 = LIT_"''", LIT_"''" != 0)) &&
     (lVar5 = func_0x00018170d270(param_2,0), lVar5 != 0)) {
    cVar3 = System_String__Contains(lVar5,LIT_"'$'",0);
    if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0xb8) != 0)) {
      uVar6 = func_0x000180315580(TI_System.Text.RegularExpressions.MatchEvaluator);
      FUN_18148abd0(uVar6,param_1,MD_SparkTutorialWindow._Clique_b__32_0,0);
      if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = System_Text_RegularExpressions_Regex__Replace(lVar5,LIT_"'\\\\$(\\\\w+)'",uVar6,0);
      if (lVar5 == 0) goto code_r0x0001806ebfa3;
    }
    cVar3 = System_String__StartsWith(lVar5,LIT_"'link '",5,0);
    if (cVar3 == '\0') {
      cVar3 = System_String__StartsWith(lVar5,LIT_"'bypass'",5,0);
      if (cVar3 == '\0') {
        return;
      }
      lVar5 = func_0x00018170c060(lVar5,6,0);
      if (((lVar5 != 0) && (lVar5 = func_0x00018170d270(lVar5,0), lVar5 != 0)) &&
         ((cVar3 = System_String__StartsWith(lVar5,LIT_"'-h'",5,0), cVar3 == '\0' ||
          ((lVar5 = func_0x00018170c060(lVar5,2,0), lVar5 != 0 &&
           (lVar5 = func_0x00018170d270(lVar5,0), lVar5 != 0)))))) {
        if (*(int *)(lVar5 + 0x10) < 1) {
          return;
        }
        if (DAT_1834b30fb == '\0') {
          FUN_180315380(TI_GameClient);
          DAT_1834b30fb = '\x01';
        }
        if (**(longlong **)(TI_GameClient + 0xb8) == 0) {
          return;
        }
        lVar7 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8);
        if (lVar7 == 0) {
          return;
        }
        GameClientPacketHandler__RequestBypassToServer(lVar7,lVar5,0);
        return;
      }
    }
    else {
      lVar5 = func_0x00018170c060(lVar5,5,0);
      if (lVar5 != 0) {
        lVar5 = func_0x00018170d270(lVar5,0);
        if (*(int *)(TI_SparkTutorial + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (cRam00000001834b33e0 == '\0') {
          FUN_180315380(TI_SparkPacoteLivre,0);
          FUN_180315380(TI_SparkTutorial);
          FUN_180315380(LIT_"''");
          cRam00000001834b33e0 = '\x01';
        }
        lVar4 = func_0x000180315580(TI_SparkPacoteLivre);
        func_0x000180503ed0(lVar4,0x7b,0);
        lVar7 = LIT_"''";
        if (lVar5 != 0) {
          lVar7 = lVar5;
        }
        if (lVar4 == 0) {
code_r0x0001804edb56:
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar5 = SparkPacoteLivre__S(lVar4,lVar7,0);
        if (*(int *)(TI_SparkTutorial + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (DAT_1834b30fb == '\0') {
          FUN_180315380(TI_GameClient);
          DAT_1834b30fb = '\x01';
        }
        if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
           (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
           plVar1 != (longlong *)0x0)) {
          if (lVar5 == 0) goto code_r0x0001804edb56;
          uVar6 = SparkPacoteLivre__Fim(lVar5,0);
          (**(code **)(*plVar1 + 0x178))(plVar1,uVar6,*(undefined8 *)(*plVar1 + 0x180));
        }
        return;
      }
    }
  }
code_r0x0001806ebfa3:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

