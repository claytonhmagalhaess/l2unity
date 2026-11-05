// NpcHtmlWindow__ReplaceItemNames__180684300 @ 0x180684300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__ReplaceItemNames__180684300(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
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
  uVar4 = LIT_"'\\\\&\\\\#(\\\\d+);'";
  lVar2 = *(longlong *)(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x18);
  if (lVar2 == 0) {
    if (*(int *)(TI_NpcHtmlWindow.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar5 = **(undefined8 **)(TI_NpcHtmlWindow.<>c + 0xb8);
    lVar2 = func_0x000180315580(TI_System.Text.RegularExpressions.MatchEvaluator);
    FUN_18148abd0(lVar2,uVar5,MD_NpcHtmlWindow.__c._ReplaceItemNames_b__34_0,0);
    *(longlong *)(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x18) = lVar2;
    func_0x000180314690(*(longlong *)(TI_NpcHtmlWindow.<>c + 0xb8) + 0x18,lVar2);
  }
  if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834bbe80 == '\0') {
    FUN_180315380(TI_System.Text.RegularExpressions.Regex,uVar4,lVar2,0);
    cRam00000001834bbe80 = '\x01';
  }
  if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar5 = *(undefined8 *)(*(longlong *)(TI_System.Text.RegularExpressions.Regex + 0xb8) + 0x30);
  if (cRam00000001834bbe81 == '\0') {
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    cRam00000001834bbe81 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_System.Text.RegularExpressions.Regex);
  System_Text_RegularExpressions_Regex___ctor(lVar3,uVar4,0,uVar5,1,0);
  if (lVar3 != 0) {
    if (param_2 != 0) {
      if ((*(byte *)(lVar3 + 0x20) & 0x40) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(param_2 + 0x10);
      }
      if (cRam00000001834bbe82 == '\0') {
        FUN_180315380(TI_System.Text.RegularExpressions.Regex);
        cRam00000001834bbe82 = '\x01';
      }
      if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
        func_0x000180315660();
      }
      System_Text_RegularExpressions_Regex__Replace(lVar2,lVar3,param_2,0xffffffff,uVar6,0);
      return;
    }
    uVar4 = func_0x0001803153a0(TI_System.ArgumentNullException);
    uVar4 = func_0x000180315580(uVar4);
    uVar5 = func_0x0001803153a0(LIT_"'input'");
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
    uVar5 = func_0x0001803153a0(MD_System.Text.RegularExpressions.Regex.Replace);
    FUN_180315590(uVar4,uVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

