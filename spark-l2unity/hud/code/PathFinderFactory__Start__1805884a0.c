// PathFinderFactory__Start__1805884a0 @ 0x1805884a0

void PathFinderFactory__Start__1805884a0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b3986 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<PathFinder>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<PathFinder>);
    cRam00000001834b3986 = '\x01';
  }
  uVar2 = func_0x000180315580(TI_System.Collections.Generic.List<PathFinder>);
  FUN_180bba2e0(uVar2,MR_System.Collections.Generic.List<PathFinder>..ctor);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  func_0x000180314690(param_1 + 0x28,uVar2);
  uVar2 = func_0x000180315580(TI_System.Collections.Generic.List<PathFinder>);
  FUN_180bba2e0(uVar2,MR_System.Collections.Generic.List<PathFinder>..ctor);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  func_0x000180314690(param_1 + 0x30,uVar2);
  if (cRam00000001834b31d0 == '\0') {
    FUN_180315380(TI_Geodata);
    cRam00000001834b31d0 = '\x01';
  }
  if (**(longlong **)(TI_Geodata + 0xb8) != 0) {
    *(undefined4 *)(param_1 + 0x38) =
         *(undefined4 *)(**(longlong **)(TI_Geodata + 0xb8) + 0x20);
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

