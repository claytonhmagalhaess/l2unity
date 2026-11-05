// TooltipManipulator__Clear__1807b53b0 @ 0x1807b53b0

void TooltipManipulator__Clear__1807b53b0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x24) != '\0') {
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

