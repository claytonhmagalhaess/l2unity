// SparkDados__LerTexto__1805917c0 @ 0x1805917c0

longlong SparkDados__LerTexto__1805917c0(undefined8 param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  if (cRam00000001834b39f1 == '\0') {
    FUN_180315380(0x1833075b0);
    cRam00000001834b39f1 = '\x01';
  }
  plVar2 = (longlong *)func_0x000180315580(uRam00000001833075b0);
  FUN_18171faf0(plVar2,0,0);
  uVar3 = SparkDados__LerBytes__180591630(param_1,0);
  if ((plVar2 == (longlong *)0x0) ||
     (lVar4 = (**(code **)(*plVar2 + 0x348))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x350)),
     lVar4 == 0)) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    lVar4 = (*pcVar1)();
    return lVar4;
  }
  iVar7 = *(int *)(lVar4 + 0x10);
  uVar6 = 0;
  if (0 < *(int *)(lVar4 + 0x10)) {
    do {
      if ((longlong)*(int *)(lVar4 + 0x10) <= (longlong)(ulonglong)uVar6) {
        FUN_1818c0670(0);
      }
    } while ((*(short *)(lVar4 + 0x14 + (longlong)(int)uVar6 * 2) == -0x101) &&
            (uVar6 = uVar6 + 1, (int)uVar6 < *(int *)(lVar4 + 0x10)));
  }
  iVar7 = iVar7 - uVar6;
  lVar5 = lVar4;
  if (iVar7 != *(int *)(lVar4 + 0x10)) {
    if (iVar7 == 0) {
      return **(longlong **)(lRam00000001834c62b0 + 0xb8);
    }
    lVar5 = func_0x000180325580(iVar7);
    if (lVar5 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
    func_0x0001818cf950(lVar5 + 0x14,lVar4 + 0x14 + (longlong)(int)uVar6 * 2,iVar7 * 2,0);
  }
  return lVar5;
}

