// ChatWindow__ReceiveChatMessage__1805cd350 @ 0x1805cd350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__ReceiveChatMessage__1805cd350(longlong param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if (cRam00000001834b3ac5 == '\0') {
    FUN_180315380(MD_ChatWindow.Escapa);
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(TI_System.Func<string,string>);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkAvisoNaTela);
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(TI_SparkLinkItem);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"': '");
    FUN_180315380(LIT_"'->'");
    FUN_180315380(LIT_"'<color=#'");
    FUN_180315380(LIT_"'Announcement: '");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'>'");
    cRam00000001834b3ac5 = '\x01';
  }
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x118) == '\0') {
    return;
  }
  cVar3 = SparkFindWindow__Escondida(*(undefined8 *)(param_2 + 0x18),0);
  if (cVar3 != '\0') {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x20);
  cVar3 = func_0x000181707e50(*(undefined8 *)(param_2 + 0x10),0);
  uVar7 = LIT_"''";
  if (cVar3 == '\0') {
    lVar5 = *(longlong *)(param_2 + 0x10);
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3ae4 == '\0') {
      FUN_180315380(LIT_"'<'");
      FUN_180315380(LIT_"'<noparse><</noparse>'");
      FUN_180315380(LIT_"''");
      cRam00000001834b3ae4 = '\x01';
    }
    cVar3 = func_0x000181707e50(lVar5,0);
    uVar7 = LIT_"''";
    if (cVar3 == '\0') {
      if (lVar5 == 0) goto code_r0x0001805cda66;
      uVar7 = System_String__Replace(lVar5,LIT_"'<'",LIT_"'<noparse><</noparse>'",0);
    }
    uVar7 = System_String__Concat(uVar7,LIT_"': '",0);
  }
  uVar6 = LIT_"'Announcement: '";
  uVar8 = 0;
  if (iVar1 == 10) {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_68 = 0x3f8000003f008081;
    uStack_60 = 0x3f8000003f800000;
    func_0x000180cb7cb0(&uStack_48,&uStack_68,MR_System.Nullable<UnityEngine.Color>..ctor);
    if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStack_58 = uStack_38;
    uStack_68 = uStack_48;
    uStack_60 = uStack_40;
    SparkAvisoNaTela__Mostra__180719980(uVar7,5000,2,0,&uStack_68,0);
    uVar7 = uVar6;
  }
  lVar5 = func_0x000180314710(TI_string__,6);
  if (lVar5 == 0) goto code_r0x0001805cda66;
  if (*(int *)(lVar5 + 0x18) == 0) {
code_r0x0001805cda6c:
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined8 *)(lVar5 + 0x20) = LIT_"'<color=#'";
  func_0x000180314690(lVar5 + 0x20);
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3ae3 == '\0') {
    FUN_180315380(LIT_"'408CFF'");
    FUN_180315380(LIT_"'FF00FF'");
    FUN_180315380(LIT_"'80FFFF'");
    FUN_180315380(LIT_"'FF9695'");
    FUN_180315380(LIT_"'77FF99'");
    FUN_180315380(LIT_"'FF7200'");
    FUN_180315380(LIT_"'00FFFF'");
    FUN_180315380(LIT_"'7D77FF'");
    FUN_180315380(LIT_"'FFF8B2'");
    FUN_180315380(LIT_"'EAA5F5'");
    FUN_180315380(LIT_"'DCDCDC'");
    FUN_180315380(LIT_"'00FF00'");
    cRam00000001834b3ae3 = '\x01';
  }
  switch(iVar1) {
  case 1:
    uVar6 = LIT_"'FF7200'";
    break;
  case 2:
    uVar6 = LIT_"'FF00FF'";
    break;
  case 3:
    uVar6 = LIT_"'00FF00'";
    break;
  case 4:
    uVar6 = LIT_"'7D77FF'";
    break;
  case 5:
  case 10:
    uVar6 = LIT_"'80FFFF'";
    break;
  default:
    uVar6 = LIT_"'DCDCDC'";
    break;
  case 8:
    uVar6 = LIT_"'EAA5F5'";
    break;
  case 9:
    uVar6 = LIT_"'77FF99'";
    break;
  case 0xf:
    uVar6 = LIT_"'FFF8B2'";
    break;
  case 0x10:
    uVar6 = LIT_"'FF9695'";
    break;
  case 0x11:
    uVar6 = LIT_"'408CFF'";
    break;
  case 0x12:
    uVar6 = LIT_"'00FFFF'";
  }
  if (*(uint *)(lVar5 + 0x18) < 2) goto code_r0x0001805cda6c;
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  func_0x000180314690(lVar5 + 0x28);
  if (*(uint *)(lVar5 + 0x18) < 3) goto code_r0x0001805cda6c;
  *(undefined8 *)(lVar5 + 0x30) = LIT_"'>'";
  func_0x000180314690(lVar5 + 0x30);
  if (*(uint *)(lVar5 + 0x18) < 4) goto code_r0x0001805cda6c;
  *(undefined8 *)(lVar5 + 0x38) = uVar7;
  func_0x000180314690(lVar5 + 0x38,uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = func_0x000180315580(TI_System.Func<string,string>);
  FUN_18148abd0(uVar6,0,MD_ChatWindow.Escapa,0);
  if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar7 = SparkLinkItem__ParaChat__1805f5550(uVar7,uVar6,0);
  if (*(uint *)(lVar5 + 0x18) < 5) goto code_r0x0001805cda6c;
  *(undefined8 *)(lVar5 + 0x40) = uVar7;
  func_0x000180314690(lVar5 + 0x40,uVar7);
  if (*(uint *)(lVar5 + 0x18) < 6) goto code_r0x0001805cda6c;
  *(undefined8 *)(lVar5 + 0x48) = LIT_"'</color>'";
  func_0x000180314690(lVar5 + 0x48);
  uVar7 = System_String__Concat(lVar5,0);
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  if ((**(longlong **)(TI_PlayerEntity + 0xb8) != 0) &&
     (lVar5 = *(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x30), lVar5 != 0)) {
    uVar8 = *(undefined8 *)(lVar5 + 0x18);
  }
  cVar3 = func_0x000181707e50(*(undefined8 *)(param_2 + 0x10),0);
  if (cVar3 == '\0') {
    if (*(longlong *)(param_2 + 0x10) == 0) goto code_r0x0001805cda66;
    cVar3 = System_String__StartsWith(*(longlong *)(param_2 + 0x10),LIT_"'->'",0);
    if (cVar3 == '\0') {
      cVar3 = func_0x000181707e50(uVar8,0);
      if (cVar3 == '\0') {
        uVar4 = func_0x0001817058a0(*(undefined8 *)(param_2 + 0x10),uVar8,0);
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  switch(iVar1) {
  case 0:
    uVar8 = 0;
    goto code_r0x0001805cd906;
  case 1:
    uVar8 = 1;
    goto code_r0x0001805cd906;
  case 2:
  case 0xc:
  case 0xd:
    uVar8 = 7;
    break;
  case 3:
  case 0xe:
    uVar8 = 3;
    break;
  case 4:
    uVar8 = 4;
    goto code_r0x0001805cd906;
  case 5:
  case 6:
  case 7:
    uVar8 = 10;
    break;
  case 8:
    uVar8 = 2;
    goto code_r0x0001805cd906;
  case 9:
    uVar8 = 5;
    goto code_r0x0001805cd906;
  case 10:
  case 0x12:
    uVar8 = 9;
    break;
  default:
    uVar8 = 0xffffffff;
    break;
  case 0xf:
  case 0x10:
    uVar8 = 8;
    break;
  case 0x11:
    uVar8 = 6;
code_r0x0001805cd906:
    ChatWindow__Distribui__1805c6990(param_1,uVar7,uVar8,uVar4,0);
    return;
  }
  ChatWindow__Distribui__1805c6990(param_1,uVar7,uVar8,uVar4,0);
  if (iVar1 != 2) {
    if ((iVar1 != 10) && (iVar1 != 0x12)) {
      return;
    }
    ChatWindow__Adiciona__1805c3e70(param_1,*(undefined8 *)(param_1 + 0x100),uVar7,0);
    return;
  }
  cVar3 = func_0x000181707e50(*(undefined8 *)(param_2 + 0x10),0);
  if (cVar3 != '\0') {
    return;
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    cVar3 = System_String__StartsWith(*(longlong *)(param_2 + 0x10),LIT_"'->'",0);
    lVar5 = *(longlong *)(param_2 + 0x10);
    if (cVar3 != '\0') {
      if (lVar5 == 0) goto code_r0x0001805cda66;
      lVar5 = func_0x00018170c060(lVar5,2,0);
    }
    ChatWindow__RegistraTell__1805cdd90(param_1,lVar5,0);
    return;
  }
code_r0x0001805cda66:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

