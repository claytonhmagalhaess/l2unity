// ServerSelectWindow__ConfirmButtonPressed__1807b1740 @ 0x1807b1740

void ServerSelectWindow__ConfirmButtonPressed__1807b1740(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  if (cRam00000001834b44fb == '\0') {
    FUN_180315380(TI_LoginClient);
    cRam00000001834b44fb = '\x01';
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
  lVar4 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
  if (lVar4 == 0) {
    FUN_1803155d0();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  fVar7 = (float)FUN_1824366b0(0,uVar2,0);
  fVar7 = fVar7 - *(float *)(lVar4 + 0x9c);
  if ((0.0 <= fVar7) && (fVar7 < 3.0)) {
    return;
  }
  uVar8 = FUN_1824366b0(0);
  plVar3 = *(longlong **)(lVar4 + 0x88);
  *(undefined4 *)(lVar4 + 0x9c) = uVar8;
  if (plVar3 != (longlong *)0x0) {
    if (cRam00000001834b374e == '\0') {
      FUN_180315380(TI_LoginClient);
      FUN_180315380(TI_RequestServerLoginPacket);
      cRam00000001834b374e = '\x01';
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
    lVar4 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
    if (lVar4 != 0) {
      uVar8 = *(undefined4 *)(lVar4 + 0x40);
      if (cRam00000001834b36c4 == '\0') {
        FUN_180315380(TI_LoginClient);
        cRam00000001834b36c4 = '\x01';
      }
      if (*(int *)(TI_LoginClient + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar4 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
      if (lVar4 != 0) {
        uVar1 = *(undefined4 *)(lVar4 + 0x44);
        uVar6 = func_0x000180315580(TI_RequestServerLoginPacket);
        RequestServerLoginPacket___ctor(uVar6,uVar2,uVar8,uVar1,0);
        (**(code **)(*plVar3 + 0x178))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x180));
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

