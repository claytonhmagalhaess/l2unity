// OptionsWindow__Aplica__18068ac50 @ 0x18068ac50

void OptionsWindow__Aplica__18068ac50(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3e7d == '\0') {
    FUN_180315380(TI_SparkComandos);
    FUN_180315380(TI_SparkFps);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(LIT_"'Options applied.'");
    FUN_180315380(LIT_"'LowDetail'");
    FUN_180315380(LIT_"'Low detail mode is on: graphics stay at minimum until yo...");
    FUN_180315380(LIT_"' again.'");
    cRam00000001834b3e7d = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkOpcoes__Salva(0);
  SparkOpcoes__AplicaTela(0);
  SparkOpcoes__AplicaQualidade(0);
  SparkOpcoes__AplicaAudio(0);
  if (*(int *)(TI_SparkFps + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3eac == '\0') {
    FUN_180315380(TI_SparkFps);
    cRam00000001834b3eac = '\x01';
  }
  if (*(int *)(TI_SparkFps + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_SparkFps + 0xb8) != 0) {
    SparkFps__Atualiza(**(longlong **)(TI_SparkFps + 0xb8),0);
  }
  if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkComandos__Diz(LIT_"'Options applied.'",0);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b32ca == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32ca = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x69) == '\0') {
    return;
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar6 = SparkTeclas__TextoDaAcao(LIT_"'LowDetail'",0);
  uVar6 = System_String__Concat(LIT_"'Low detail mode is on: graphics stay at minimum until yo...",uVar6,LIT_"' again.'",0);
  if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
    func_0x000180315660();
  }
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
  SMParam___ctor(lVar3,0,uVar6,0);
  if (plVar2 != (longlong *)0x0) {
    if (lVar3 != 0) {
      lVar4 = func_0x0001803146b0(lVar3,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar4 == 0) {
        uVar6 = func_0x000180314f80();
        FUN_180315590(uVar6,0);
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
      uVar6 = FUN_1812035e0(*(longlong *)(lVar4 + 0x10),0x266,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
      uVar5 = func_0x000180315580(TI_SystemMessage);
      AllianceMessage___ctor(uVar5,plVar2,uVar6,0);
      ChatWindow__ReceiveSystemMessage(lVar3,uVar5,0);
    }
    return;
  }
code_r0x0001805ed19f:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

