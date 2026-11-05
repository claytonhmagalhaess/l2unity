// TooltipManipulator__PointerOutHandler__1807b54e0 @ 0x1807b54e0

void TooltipManipulator__PointerOutHandler__1807b54e0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (cRam00000001834b3b3c == '\0') {
      FUN_180315380(TI_L2ToolTip);
      cRam00000001834b3b3c = '\x01';
    }
    lVar1 = **(longlong **)(TI_L2ToolTip + 0xb8);
    uVar3 = func_0x0001814b50c0(param_1,0);
    if (lVar1 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    L2ToolTip__HideWindow__1807966a0(lVar1,uVar3,0);
  }
  return;
}

