// BoardWindow__Clique__1805aef70 @ 0x1805aef70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardWindow__Clique__1805aef70(longlong param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 auStack_38 [6];
  
  if (cRam00000001834b3a71 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_BoardWindow);
    FUN_180315380(TI_char__);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.ContainsKey);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
    FUN_180315380(TI_System.Text.RegularExpressions.MatchEvaluator);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    FUN_180315380(TI_SMParam__);
    FUN_180315380(TI_SMParam);
    FUN_180315380(TI_SystemMessage);
    FUN_180315380(MD_BoardWindow.__c._Clique_b__26_2);
    FUN_180315380(MD_BoardWindow.__c__DisplayClass26_0._Clique_b__0);
    FUN_180315380(MD_BoardWindow.__c__DisplayClass26_0._Clique_b__1);
    FUN_180315380(TI_BoardWindow.<>c__DisplayClass26_0);
    FUN_180315380(TI_BoardWindow.<>c);
    FUN_180315380(LIT_"'\\\\$(\\\\w+)'");
    FUN_180315380(LIT_"'$'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3a71 = '\x01';
  }
  auStack_38[0] = 0;
  lVar3 = func_0x000180315580(TI_BoardWindow.<>c__DisplayClass26_0);
  SparkMapaWindow_Loja___ctor__1803f01b0(lVar3,0);
  if (lVar3 != 0) {
    *(longlong *)(lVar3 + 0x10) = param_1;
    func_0x000180314690(lVar3 + 0x10,param_1);
    *(undefined8 *)(lVar3 + 0x18) = param_2;
    func_0x000180314690(lVar3 + 0x18,param_2);
    lVar6 = *(longlong *)(lVar3 + 0x18);
    if ((*(longlong *)(lVar3 + 0x18) != 0) || (lVar6 = LIT_"''", LIT_"''" != 0)) {
      uVar4 = func_0x00018170d270(lVar6,0);
      *(undefined8 *)(lVar3 + 0x18) = uVar4;
      func_0x000180314690(lVar3 + 0x18,uVar4);
      if (*(longlong *)(lVar3 + 0x18) != 0) {
        cVar2 = System_String__Contains(*(longlong *)(lVar3 + 0x18),LIT_"'$'",0);
        if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0xb8) != 0)) {
          uVar4 = *(undefined8 *)(lVar3 + 0x18);
          uVar5 = func_0x000180315580(TI_System.Text.RegularExpressions.MatchEvaluator);
          FUN_18148abd0(uVar5,lVar3,MD_BoardWindow.__c__DisplayClass26_0._Clique_b__0,0);
          if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar4 = System_Text_RegularExpressions_Regex__Replace(uVar4,LIT_"'\\\\$(\\\\w+)'",uVar5,0);
          *(undefined8 *)(lVar3 + 0x18) = uVar4;
          func_0x000180314690(lVar3 + 0x18,uVar4);
        }
        cVar2 = func_0x000181707e50(param_3,0);
        if (cVar2 == '\0') {
          if (DAT_1834b30fd == '\0') {
            FUN_180315380(TI_L2ConfirmWindow);
            DAT_1834b30fd = '\x01';
          }
          uVar4 = **(undefined8 **)(TI_L2ConfirmWindow + 0xb8);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
          if (cVar2 == '\0') {
            lVar6 = func_0x000180314710(TI_char__,1);
            if (lVar6 == 0) goto code_r0x0001805af4d9;
            if (*(int *)(lVar6 + 0x18) == 0) {
code_r0x0001805af4ef:
              FUN_1803155c0();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            *(undefined2 *)(lVar6 + 0x20) = 0x3b;
            if ((param_3 == 0) || (lVar6 = System_String__Split(param_3,lVar6,2,0), lVar6 == 0))
            goto code_r0x0001805af4d9;
            if (*(int *)(lVar6 + 0x18) == 0) goto code_r0x0001805af4ef;
            cVar2 = System_Int32__TryParse(*(undefined8 *)(lVar6 + 0x20),auStack_38,0);
            if (cVar2 != '\0') {
              lVar7 = SystemMessageTable__get_Instance(0);
              if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x10) == 0)) goto code_r0x0001805af4d9;
              cVar2 = FUN_1811f4d60(*(longlong *)(lVar7 + 0x10),auStack_38[0],MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.ContainsKey);
              if (cVar2 != '\0') {
                plVar8 = (longlong *)func_0x000180314710(TI_SMParam__,1);
                lVar7 = LIT_"''";
                if (1 < (int)*(uint *)(lVar6 + 0x18)) {
                  if (*(uint *)(lVar6 + 0x18) < 2) goto code_r0x0001805af4ef;
                  lVar7 = *(longlong *)(lVar6 + 0x28);
                }
                lVar6 = func_0x000180315580(TI_SMParam);
                SMParam___ctor(lVar6,0,lVar7,0);
                if (plVar8 == (longlong *)0x0) goto code_r0x0001805af4d9;
                if ((lVar6 != 0) &&
                   (lVar7 = func_0x0001803146b0(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
                {
                  uVar4 = func_0x000180314f80();
                  FUN_180315590(uVar4,0);
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                if ((int)plVar8[3] == 0) goto code_r0x0001805af4ef;
                plVar8[4] = lVar6;
                func_0x000180314690(plVar8 + 4,lVar6);
                lVar6 = SystemMessageTable__get_Instance(0);
                if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x10) == 0)) goto code_r0x0001805af4d9;
                uVar4 = FUN_1812035e0(*(longlong *)(lVar6 + 0x10),auStack_38[0],MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item
                                     );
                lVar6 = func_0x000180315580(TI_SystemMessage);
                AllianceMessage___ctor(lVar6,plVar8,uVar4,0);
                if (lVar6 == 0) goto code_r0x0001805af4d9;
                param_3 = SystemMessage__PrintMessage(lVar6,0,0);
              }
            }
            if (DAT_1834b30fd == '\0') {
              FUN_180315380(TI_L2ConfirmWindow);
              DAT_1834b30fd = '\x01';
            }
            lVar6 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
            uVar4 = func_0x000180315580(TI_System.Action);
            FUN_1816a9c60(uVar4,lVar3,MD_BoardWindow.__c__DisplayClass26_0._Clique_b__1,0);
            if (*(int *)(TI_BoardWindow.<>c + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar3 = *(longlong *)(*(longlong *)(TI_BoardWindow.<>c + 0xb8) + 8);
            if (lVar3 == 0) {
              if (*(int *)(TI_BoardWindow.<>c + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar5 = **(undefined8 **)(TI_BoardWindow.<>c + 0xb8);
              lVar3 = func_0x000180315580(TI_System.Action);
              FUN_1816a9c60(lVar3,uVar5,MD_BoardWindow.__c._Clique_b__26_2,0);
              *(longlong *)(*(longlong *)(TI_BoardWindow.<>c + 0xb8) + 8) = lVar3;
              func_0x000180314690(*(longlong *)(TI_BoardWindow.<>c + 0xb8) + 8,lVar3);
            }
            if (lVar6 != 0) {
              L2ConfirmWindow__ShowWindow__180770df0(lVar6,param_3,uVar4,lVar3,0);
              return;
            }
            goto code_r0x0001805af4d9;
          }
        }
        uVar4 = *(undefined8 *)(lVar3 + 0x18);
        if (*(int *)(TI_BoardWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        BoardWindow__Manda(uVar4,0);
        return;
      }
    }
  }
code_r0x0001805af4d9:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

