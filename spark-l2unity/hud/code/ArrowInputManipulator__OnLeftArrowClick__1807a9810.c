// ArrowInputManipulator__OnLeftArrowClick__1807a9810 @ 0x1807a9810

void ArrowInputManipulator__OnLeftArrowClick__1807a9810(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  if ((*(longlong *)(param_1 + 0x48) == 0) ||
     (lVar3 = *(longlong *)(param_1 + 0x48), *(longlong *)(lVar3 + 0x18) == 0)) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x70);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    if (lVar3 == 0) goto DAT_1807a98be;
    *(int *)(param_1 + 0x70) = *(int *)(lVar3 + 0x18) + -1;
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0x70)) {
      FUN_1803155c0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar4 = *(longlong **)(param_1 + 0x50);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0xa88))
                (plVar4,*(undefined8 *)(lVar3 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x70) * 8)
                 ,*(undefined8 *)(*plVar4 + 0xa90));
      plVar4 = *(longlong **)(param_1 + 0x50);
      if (plVar4 != (longlong *)0x0) {
        lVar3 = *(longlong *)(param_1 + 0x68);
        uVar2 = *(undefined4 *)(param_1 + 0x70);
        uVar6 = (**(code **)(*plVar4 + 0xa78))(plVar4,*(undefined8 *)(*plVar4 + 0xa80));
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),uVar2,uVar6,*(undefined8 *)(lVar3 + 0x28));
          return;
        }
      }
    }
  }
DAT_1807a98be:
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

