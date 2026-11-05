// ChatWindow__SendChatMessage__1805ce520 @ 0x1805ce520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__SendChatMessage__1805ce520(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  short asStackX_20 [4];
  
  if (cRam00000001834b3ae1 == '\0') {
    FUN_180315380(TI_ChatMessage);
    FUN_180315380(TI_SparkBotsArma);
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(TI_SparkComandos);
    FUN_180315380(TI_SparkLinkItem);
    FUN_180315380(LIT_"'+!#@$%\"'");
    FUN_180315380(LIT_"'//'");
    FUN_180315380(LIT_"'/'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'Usage: \"Name message'");
    cRam00000001834b3ae1 = '\x01';
  }
  if (cRam00000001834b30fe == '\0') {
    FUN_180315380(TI_World);
    cRam00000001834b30fe = '\x01';
  }
  if (**(longlong **)(TI_World + 0xb8) == 0) goto code_r0x0001805cea18;
  if (*(char *)(**(longlong **)(TI_World + 0xb8) + 0x48) != '\0') {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    if ((**(longlong **)(TI_PlayerEntity + 0xb8) != 0) &&
       (lVar7 = *(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x30), lVar7 != 0)) {
      uVar8 = *(undefined8 *)(lVar7 + 0x18);
      lVar7 = func_0x000180315580(TI_ChatMessage);
      Gear__UpdateWeaponType__1803dadf0(lVar7,0);
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
      func_0x000180314690(lVar7 + 0x10,uVar8);
      *(longlong *)(lVar7 + 0x18) = param_2;
      func_0x000180314690(lVar7 + 0x18,param_2);
      ChatWindow__ReceiveChatMessage__1805cd350(param_1,lVar7,0);
      return;
    }
    goto code_r0x0001805cea18;
  }
  if (param_2 == 0) goto code_r0x0001805cea18;
  cVar2 = System_String__StartsWith(param_2,LIT_"'//'",0);
  if (cVar2 != '\0') {
    uVar8 = func_0x00018170c060(param_2,2,0);
    if (*(int *)(TI_SparkBotsArma + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = SparkBotsArma__Trata(uVar8,0);
    if (cVar2 != '\0') {
      return;
    }
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if (**(longlong **)(TI_GameClient + 0xb8) != 0) {
      lVar7 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8);
      uVar8 = func_0x00018170c060(param_2,2,0);
      if (lVar7 != 0) {
        GameClientPacketHandler__SendGMCommand(lVar7,uVar8,0);
        return;
      }
    }
    goto code_r0x0001805cea18;
  }
  cVar2 = System_String__StartsWith(param_2,LIT_"'/'");
  if (cVar2 != '\0') {
    if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkComandos__Executa__1805ed1c0(param_2,0);
    return;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    return;
  }
  if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar7 = SparkLinkItem__ParaEnvio__1805f5c50(param_2,0);
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660(TI_SparkChatFiltro);
  }
  lVar9 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x18);
  uVar5 = SparkChatFiltro__Casa(*(undefined4 *)(param_1 + 0x110),0);
  if (lVar9 == 0) goto code_r0x0001805cea18;
  if (*(uint *)(lVar9 + 0x18) <= uVar5) {
code_r0x0001805cea1e:
    FUN_1803155c0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  asStackX_20[0] = *(short *)(lVar9 + 0x20 + (longlong)(int)uVar5 * 2);
  if ((lVar7 == 0) || (uVar3 = System_String__get_Chars(lVar7,0,0), LIT_"'+!#@$%\"'" == 0))
  goto code_r0x0001805cea18;
  iVar6 = func_0x0001817079f0(LIT_"'+!#@$%\"'",uVar3,0);
  if ((iVar6 < 0) && (asStackX_20[0] != 0)) {
    if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar8 = System_Char__ToString(asStackX_20,0);
    lVar7 = System_String__Concat(uVar8,lVar7,0);
    if (lVar7 == 0) goto code_r0x0001805cea18;
  }
  lVar10 = 0;
  sVar4 = System_String__get_Chars(lVar7,0,0);
  lVar9 = lVar7;
  uVar11 = 0;
  switch(sVar4) {
  case 0x21:
    uVar11 = 1;
    break;
  case 0x22:
    lVar9 = func_0x00018170c060(lVar7,1,0);
    if ((lVar9 == 0) || (lVar9 = System_String__Split(lVar9,0x20,0,0), lVar9 == 0))
    goto code_r0x0001805cea18;
    lVar10 = LIT_"''";
    if (*(longlong *)(lVar9 + 0x18) != 0) {
      if (*(int *)(lVar9 + 0x18) == 0) goto code_r0x0001805cea1e;
      lVar10 = *(longlong *)(lVar9 + 0x20);
    }
    iVar6 = func_0x0001817079f0(lVar7,0x20,0);
    lVar9 = LIT_"''";
    if (0 < iVar6) {
      lVar9 = func_0x00018170c060(lVar7,iVar6 + 1,0);
    }
    cVar2 = System_String__IsNullOrWhiteSpace(lVar9,0);
    if ((cVar2 != '\0') || (cVar2 = func_0x000181707e50(lVar10,0), cVar2 != '\0')) {
      if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkComandos__Diz__1805ed000(LIT_"'Usage: \"Name message'",0);
      return;
    }
    uVar11 = 2;
    goto code_r0x0001805ce892;
  case 0x23:
    uVar11 = 3;
    break;
  case 0x24:
    uVar11 = 9;
    break;
  case 0x25:
    uVar11 = 0x11;
    break;
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
    goto code_r0x0001805ce892;
  case 0x2b:
    uVar11 = 8;
    break;
  default:
    uVar11 = 0;
    if (sVar4 == 0x40) {
      uVar11 = 4;
      break;
    }
    goto code_r0x0001805ce892;
  }
  lVar9 = func_0x00018170c060(lVar7,1,0);
code_r0x0001805ce892:
  lVar7 = FUN_1804582c0(0);
  if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0xa8) != 0)) {
    GameClientPacketHandler__SendMessage(*(longlong *)(lVar7 + 0xa8),lVar9,uVar11,lVar10,0);
    return;
  }
code_r0x0001805cea18:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

