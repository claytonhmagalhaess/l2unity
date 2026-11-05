// VersionCheckPacket__Parse__180525b30 @ 0x180525b30

void VersionCheckPacket__Parse__180525b30(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x24);
  *(uint *)((longlong)param_1 + 0x24) = uVar1 + 1;
  if (param_1[2] == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 < *(uint *)(param_1[2] + 0x18)) {
    if (cRam00000001834b3640 == '\0') {
      FUN_180315380(0x183331868);
      cRam00000001834b3640 = '\x01';
    }
    lVar4 = func_0x000180314710(uRam0000000183331868,8);
    FUN_1818b1260(param_1[2],*(undefined4 *)((longlong)param_1 + 0x24),lVar4,0,8,0);
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 8;
    param_1[5] = lVar4;
    func_0x000180314690(param_1 + 5,lVar4);
    iVar3 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    *(bool *)(param_1 + 6) = iVar3 == 1;
    iVar3 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    *(bool *)((longlong)param_1 + 0x31) = iVar3 == 1;
    return;
  }
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

