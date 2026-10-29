// TooltipManipulator__SaiuDaTela__1807b5700 @ 0x1807b5700

void TooltipManipulator__SaiuDaTela__1807b5700(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x24) != '\0') {
    *(undefined1 *)(param_1 + 0x24) = 0;
    if (cRam00000001834b3b3c == '\0') {
      FUN_180315380(TI_L2ToolTip);
      cRam00000001834b3b3c = '\x01';
    }
    lVar1 = **(longlong **)(TI_L2ToolTip + 0xb8);
    if (lVar1 != 0) {
      uVar2 = func_0x0001814b50c0(param_1,0);
      L2ToolTip__HideWindow__1807966a0(lVar1,uVar2,0);
    }
  }
  return;
}

