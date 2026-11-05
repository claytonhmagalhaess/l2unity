// LoginClient__OnServerSelected__180529b20 @ 0x180529b20

void LoginClient__OnServerSelected__180529b20(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  fVar6 = (float)FUN_1824366b0(0);
  fVar6 = fVar6 - *(float *)(param_1 + 0x9c);
  if ((0.0 <= fVar6) && (fVar6 < 3.0)) {
    return;
  }
  uVar7 = FUN_1824366b0(0);
  plVar2 = *(longlong **)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x9c) = uVar7;
  if (plVar2 != (longlong *)0x0) {
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
    lVar3 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
    if (lVar3 != 0) {
      uVar7 = *(undefined4 *)(lVar3 + 0x40);
      if (cRam00000001834b36c4 == '\0') {
        FUN_180315380(TI_LoginClient);
        cRam00000001834b36c4 = '\x01';
      }
      if (*(int *)(TI_LoginClient + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar3 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
      if (lVar3 != 0) {
        uVar1 = *(undefined4 *)(lVar3 + 0x44);
        uVar5 = func_0x000180315580(TI_RequestServerLoginPacket);
        RequestServerLoginPacket___ctor(uVar5,param_2,uVar7,uVar1,0);
        (**(code **)(*plVar2 + 0x178))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0x180));
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

