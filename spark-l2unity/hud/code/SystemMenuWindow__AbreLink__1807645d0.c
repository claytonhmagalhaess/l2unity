// SystemMenuWindow__AbreLink__1807645d0 @ 0x1807645d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SystemMenuWindow__AbreLink__1807645d0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (cRam00000001834b42ce == '\0') {
    puStack_30 = &UNK_1807645fd;
    FUN_180315380(TI_UnityEngine.Application);
    puStack_30 = &UNK_180764609;
    FUN_180315380(TI_SparkComandos);
    puStack_30 = &UNK_180764615;
    FUN_180315380(LIT_"': Coming soon.'");
    cRam00000001834b42ce = '\x01';
  }
  puStack_30 = &UNK_180764631;
  (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
  puStack_30 = &UNK_18076463b;
  cVar2 = func_0x000181707e50(param_2,0);
  if (cVar2 == '\0') {
    if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
      puStack_30 = &UNK_180764654;
      func_0x000180315660();
    }
    if (cRam00000001834bf6f1 == '\0') {
      FUN_180315380(TI_UnityEngine.Application);
      FUN_180315380(MR_System.ReadOnlySpan<char>.GetPinnableReference);
      FUN_180315380(MR_System.ReadOnlySpan<char>.get_Length);
      cRam00000001834bf6f1 = '\x01';
    }
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    puStack_30 = (undefined *)0x0;
    uStack_28 = 0;
    puStack_20 = &stack0x00000008;
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0x10) == 0) {
        uVar7 = func_0x0001818f3de0(1,0);
        uVar7 = func_0x0001803df910(uVar7,0);
        uStack_18 = 0;
        uStack_10 = 0;
        func_0x000180d7b1f0(&uStack_18,uVar7,0,0);
        uStack_38 = uStack_18;
        puStack_30 = (undefined *)uStack_10;
      }
      else {
        if (DAT_1834b89d4 == '\0') {
          FUN_180315380(MR_System.ReadOnlySpan<char>..ctor);
          DAT_1834b89d4 = '\x01';
        }
        uStack_48 = func_0x000181706cc0(param_2,0);
        uStack_40 = (ulonglong)*(uint *)(param_2 + 0x10);
        uVar7 = func_0x000180e028c0(&uStack_48,MR_System.ReadOnlySpan<char>.GetPinnableReference);
        func_0x000180d7b1f0(&uStack_38,uVar7,uStack_40 & 0xffffffff,0);
      }
    }
    if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (pcRam00000001834bf748 == (code *)0x0) {
      pcRam00000001834bf748 = (code *)FUN_180315630(&UNK_1829327b0);
    }
    (*pcRam00000001834bf748)(&uStack_38);
    return;
  }
  puStack_30 = &UNK_18076467f;
  uVar7 = System_String__Concat(param_3,LIT_"': Coming soon.'",0);
  if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
    puStack_30 = &UNK_180764697;
    func_0x000180315660();
  }
  if (cRam00000001834b3b43 == '\0') {
    puStack_30 = &UNK_1805ed027;
    FUN_180315380(TI_ChatWindow,0);
    puStack_30 = &UNK_1805ed033;
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
    puStack_30 = &UNK_1805ed03f;
    FUN_180315380(TI_SMParam__);
    puStack_30 = &UNK_1805ed04b;
    FUN_180315380(TI_SMParam);
    puStack_30 = &UNK_1805ed057;
    FUN_180315380(TI_SystemMessage);
    cRam00000001834b3b43 = '\x01';
  }
  puStack_30 = &UNK_1805ed074;
  plVar3 = (longlong *)func_0x000180314710(TI_SMParam__,1);
  puStack_30 = &UNK_1805ed083;
  lVar4 = func_0x000180315580(TI_SMParam);
  puStack_30 = &UNK_1805ed096;
  SMParam___ctor(lVar4,0,uVar7,0);
  if (plVar3 != (longlong *)0x0) {
    if (lVar4 != 0) {
      puStack_30 = &UNK_1805ed0b3;
      lVar5 = func_0x0001803146b0(lVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) {
        puStack_30 = &UNK_1805ed1aa;
        uVar7 = func_0x000180314f80();
        puStack_30 = &UNK_1805ed1b4;
        FUN_180315590(uVar7,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((int)plVar3[3] == 0) {
      puStack_30 = &UNK_1805ed1ba;
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    plVar3[4] = lVar4;
    puStack_30 = &UNK_1805ed0d6;
    func_0x000180314690(plVar3 + 4,lVar4);
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      puStack_30 = &UNK_1805ed0eb;
      func_0x000180315660();
    }
    if (DAT_1834b3105 == '\0') {
      puStack_30 = &UNK_1805ed100;
      FUN_180315380(TI_ChatWindow);
      DAT_1834b3105 = '\x01';
    }
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      puStack_30 = &UNK_1805ed11c;
      func_0x000180315660();
    }
    lVar4 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
    if (lVar4 != 0) {
      puStack_30 = &UNK_1805ed13a;
      lVar5 = SystemMessageTable__get_Instance(0);
      if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x10) == 0)) goto code_r0x0001805ed19f;
      puStack_30 = &UNK_1805ed159;
      uVar7 = FUN_1812035e0(*(longlong *)(lVar5 + 0x10),0x266,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
      puStack_30 = &UNK_1805ed168;
      uVar6 = func_0x000180315580(TI_SystemMessage);
      puStack_30 = &UNK_1805ed17c;
      AllianceMessage___ctor(uVar6,plVar3,uVar7,0);
      puStack_30 = &UNK_1805ed18a;
      ChatWindow__ReceiveSystemMessage__1805cdb10(lVar4,uVar6,0);
    }
    return;
  }
code_r0x0001805ed19f:
  puStack_30 = &UNK_1805ed1a4;
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

