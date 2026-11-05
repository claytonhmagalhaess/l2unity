// OptionsWindow___c___BuildWindow_b__30_1__1806bb3b0 @ 0x1806bb3b0

void OptionsWindow___c___BuildWindow_b__30_1__1806bb3b0(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3eae == '\0') {
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(TI_L2Window);
    FUN_180315380(TI_SparkComandos);
    FUN_180315380(LIT_"'The interface was reset to the default layout.'");
    cRam00000001834b3eae = '\x01';
  }
  if (*(int *)(TI_L2Window + 0xe4) == 0) {
    func_0x000180315660();
  }
  L2Window__TodasNaPosicaoPadrao(0);
  if (cRam00000001834b3fe2 == '\0') {
    FUN_180315380(TI_SparkQuestHud);
    cRam00000001834b3fe2 = '\x01';
  }
  if (**(longlong **)(TI_SparkQuestHud + 0xb8) != 0) {
    SparkQuestHud__Padrao(**(longlong **)(TI_SparkQuestHud + 0xb8),0);
  }
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3105 == '\0') {
    FUN_180315380(TI_ChatWindow);
    cRam00000001834b3105 = '\x01';
  }
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
  if (lVar3 != 0) {
    ChatWindow__TamanhoPadrao(lVar3,0);
  }
  if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar5 = LIT_"'The interface was reset to the default layout.'";
  if (cRam00000001834b3b43 == '\0') {
    FUN_180315380(TI_ChatWindow,0);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
    FUN_180315380(TI_SMParam__);
    FUN_180315380(TI_SMParam);
    FUN_180315380(TI_SystemMessage);
    cRam00000001834b3b43 = '\x01';
  }
  plVar2 = (longlong *)func_0x000180314710(TI_SMParam__,1);
  lVar3 = func_0x000180315580(TI_SMParam);
  SMParam___ctor(lVar3,0,uVar5,0);
  if (plVar2 != (longlong *)0x0) {
    if (lVar3 != 0) {
      lVar4 = func_0x0001803146b0(lVar3,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar4 == 0) {
        uVar5 = func_0x000180314f80();
        FUN_180315590(uVar5,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((int)plVar2[3] == 0) {
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    plVar2[4] = lVar3;
    func_0x000180314690(plVar2 + 4,lVar3);
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3105 == '\0') {
      FUN_180315380(TI_ChatWindow);
      cRam00000001834b3105 = '\x01';
    }
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar3 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
    if (lVar3 != 0) {
      lVar4 = SystemMessageTable__get_Instance(0);
      if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x10) == 0)) goto code_r0x0001805ed19f;
      uVar5 = FUN_1812035e0(*(longlong *)(lVar4 + 0x10),0x266,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
      uVar6 = func_0x000180315580(TI_SystemMessage);
      AllianceMessage___ctor(uVar6,plVar2,uVar5,0);
      ChatWindow__ReceiveSystemMessage(lVar3,uVar6,0);
    }
    return;
  }
code_r0x0001805ed19f:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

