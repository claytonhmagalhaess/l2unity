// PlayerShortcuts__IsItemToggled__1804d2110 @ 0x1804d2110

bool PlayerShortcuts__IsItemToggled__1804d2110(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (cRam00000001834b3410 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<int>.Contains);
    cRam00000001834b3410 = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
      return false;
    }
    iVar4 = FUN_180aaf6c0(*(undefined8 *)(lVar1 + 0x10),param_2,0,*(undefined4 *)(lVar1 + 0x18),
                          *(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(MR_System.Collections.Generic.List<int>.Contains + 0x20) + 0xc0) +
                                 0xd0) + 0x20) + 0xc0) + 0x150));
    return iVar4 != -1;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return (bool)uVar3;
}

