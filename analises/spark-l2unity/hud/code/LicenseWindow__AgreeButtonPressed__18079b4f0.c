// LicenseWindow__AgreeButtonPressed__18079b4f0 @ 0x18079b4f0

void LicenseWindow__AgreeButtonPressed__18079b4f0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b44b6 == '\0') {
    FUN_180315380(TI_LoginClient);
    cRam00000001834b44b6 = '\x01';
  }
  if (*(int *)(TI_LoginClient + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b36c4 == '\0') {
    FUN_180315380(TI_LoginClient);
    cRam00000001834b36c4 = '\x01';
  }
  if (*(int *)(TI_LoginClient + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
  if ((lVar3 == 0) || (plVar4 = *(longlong **)(lVar3 + 0x88), plVar4 == (longlong *)0x0)) {
    FUN_1803155d0();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (cRam00000001834b374d == '\0') {
    FUN_180315380(TI_LoginClient,0);
    FUN_180315380(TI_RequestServerListPacket);
    cRam00000001834b374d = '\x01';
  }
  if (*(int *)(TI_LoginClient + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b36c4 == '\0') {
    FUN_180315380(TI_LoginClient);
    cRam00000001834b36c4 = '\x01';
  }
  if (*(int *)(TI_LoginClient + 0xe4) == 0) {
    func_0x000180315660(TI_LoginClient);
  }
  lVar3 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x40);
    if (cRam00000001834b36c4 == '\0') {
      FUN_180315380(TI_LoginClient);
      cRam00000001834b36c4 = '\x01';
    }
    if (*(int *)(TI_LoginClient + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar3 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
    if (lVar3 != 0) {
      uVar2 = *(undefined4 *)(lVar3 + 0x44);
      uVar6 = func_0x000180315580(TI_RequestServerListPacket);
      RequestServerListPacket___ctor(uVar6,uVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00018052923a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x178))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x180));
      return;
    }
  }
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

