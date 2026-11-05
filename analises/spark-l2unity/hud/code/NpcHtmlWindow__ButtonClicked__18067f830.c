// NpcHtmlWindow__ButtonClicked__18067f830 @ 0x18067f830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__ButtonClicked__18067f830(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b3e59 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_System.Text.RegularExpressions.MatchEvaluator);
    FUN_180315380(MD_NpcHtmlWindow._ButtonClicked_b__50_0);
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    FUN_180315380(LIT_"'\\\\$(\\\\w+)'");
    FUN_180315380(LIT_"'$'");
    cRam00000001834b3e59 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
    func_0x000180315660();
  }
  UnityEngine_Debug__Log(param_2,0);
  if (param_2 != 0) {
    cVar3 = System_String__Contains(param_2,LIT_"'$'",0);
    if (cVar3 != '\0') {
      uVar4 = func_0x000180315580(TI_System.Text.RegularExpressions.MatchEvaluator);
      FUN_18148abd0(uVar4,param_1,MD_NpcHtmlWindow._ButtonClicked_b__50_0,0);
      if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
        func_0x000180315660();
      }
      param_2 = System_Text_RegularExpressions_Regex__Replace(param_2,LIT_"'\\\\$(\\\\w+)'",uVar4,0);
    }
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__Log(param_2,0);
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
       (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
       plVar1 != (longlong *)0x0)) {
      if (cRam00000001834b3678 == '\0') {
        FUN_180315380(TI_RequestBypassToServerPacket,param_2,0);
        cRam00000001834b3678 = '\x01';
      }
      uVar4 = func_0x000180315580(TI_RequestBypassToServerPacket);
      RequestBypassToServerPacket___ctor(uVar4,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00018050c6fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x178))(plVar1,uVar4,*(undefined8 *)(*plVar1 + 0x180));
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

