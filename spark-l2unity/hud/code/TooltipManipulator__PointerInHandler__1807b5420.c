// TooltipManipulator__PointerInHandler__1807b5420 @ 0x1807b5420

void TooltipManipulator__PointerInHandler__1807b5420(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b4521 == '\0') {
    FUN_180315380(MR_L2ToolTip.UpdateTooltip<object>);
    cRam00000001834b4521 = '\x01';
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    if (cRam00000001834b3b3c == '\0') {
      FUN_180315380(TI_L2ToolTip);
      cRam00000001834b3b3c = '\x01';
    }
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = **(longlong **)(TI_L2ToolTip + 0xb8);
    uVar5 = func_0x0001814b50c0(param_1,0);
    if (lVar3 == 0) {
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_180a19bf0(lVar3,uVar1,uVar2,uVar5,MR_L2ToolTip.UpdateTooltip<object>);
  }
  *(undefined1 *)(param_1 + 0x24) = 1;
  return;
}

