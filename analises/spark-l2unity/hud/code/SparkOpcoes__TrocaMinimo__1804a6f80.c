// SparkOpcoes__TrocaMinimo__1804a6f80 @ 0x1804a6f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes__TrocaMinimo__1804a6f80(void)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b32b7 == '\0') {
    FUN_180315380(TI_SparkComandos);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(LIT_"'Low detail mode: off.'");
    FUN_180315380(LIT_"' again to restore your settings.'");
    FUN_180315380(LIT_"'LowDetail'");
    FUN_180315380(LIT_"'spark.opt.minimo'");
    FUN_180315380(LIT_"'Low detail mode: on. Press '");
    cRam00000001834b32b7 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkOpcoes__Carrega__1804a3c40(0);
  if (cRam00000001834b32ca == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32ca = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x69);
  if (cRam00000001834b32c9 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32c9 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x69) = cVar1 == '\0';
  if (cRam00000001834b32ca == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32ca = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = LIT_"'spark.opt.minimo'";
  cVar1 = *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x69);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkOpcoes__Grava__1804a5430(uVar3,cVar1 != '\0',0);
  FUN_18242e9f0(0);
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
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b32a3 == '\0') {
      FUN_180315380(TI_SparkOpcoes);
      cRam00000001834b32a3 = '\x01';
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1d8) = 0;
    SparkOpcoes__Carrega__1804a3c40(0);
  }
  else {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkOpcoes__PoeMinimo__1804a5e10(0);
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkOpcoes__AplicaQualidade__1804a3090(0);
  if (cRam00000001834b32ca == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32ca = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  uVar3 = LIT_"'Low detail mode: off.'";
  if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x69) != '\0') {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar3 = SparkTeclas__TextoDaAcao__1804cec20(LIT_"'LowDetail'",0);
    uVar3 = System_String__Concat(LIT_"'Low detail mode: on. Press '",uVar3,LIT_"' again to restore your settings.'",0);
  }
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
  plVar4 = (longlong *)func_0x000180314710(TI_SMParam__,1);
  lVar5 = func_0x000180315580(TI_SMParam);
  SMParam___ctor(lVar5,0,uVar3,0,unaff_RDI);
  if (plVar4 == (longlong *)0x0) {
code_r0x0001805ed19f:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((lVar5 != 0) &&
     (lVar6 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
    uVar3 = func_0x000180314f80();
    FUN_180315590(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)plVar4[3] == 0) {
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar4[4] = lVar5;
  func_0x000180314690(plVar4 + 4,lVar5);
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b3105 == '\0') {
    FUN_180315380(TI_ChatWindow);
    DAT_1834b3105 = '\x01';
  }
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
  if (lVar5 != 0) {
    lVar6 = SystemMessageTable__get_Instance(0);
    if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x10) == 0)) goto code_r0x0001805ed19f;
    uVar3 = FUN_1812035e0(*(longlong *)(lVar6 + 0x10),0x266,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
    uVar7 = func_0x000180315580(TI_SystemMessage);
    AllianceMessage___ctor(uVar7,plVar4,uVar3,0);
    ChatWindow__ReceiveSystemMessage__1805cdb10(lVar5,uVar7,0);
  }
  return;
}

