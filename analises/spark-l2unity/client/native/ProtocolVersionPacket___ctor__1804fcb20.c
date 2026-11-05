// ProtocolVersionPacket___ctor__1804fcb20 @ 0x1804fcb20

void ProtocolVersionPacket___ctor__1804fcb20(longlong *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_1804f5690(param_1,0,0);
  if (cRam00000001834b35d2 == '\0') {
    FUN_180315380(0x1832ca6a8);
    cRam00000001834b35d2 = '\x01';
  }
  uVar2 = FUN_18180c5f0(param_2,0);
  if (param_1[4] != 0) {
    func_0x0001815ed530(param_1[4],uVar2,uRam00000001832ca6a8);
                    /* WARNING: Could not recover jumptable at 0x0001804fcb8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

