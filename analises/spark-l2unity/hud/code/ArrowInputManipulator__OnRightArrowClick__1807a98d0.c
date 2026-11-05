// ArrowInputManipulator__OnRightArrowClick__1807a98d0 @ 0x1807a98d0

void ArrowInputManipulator__OnRightArrowClick__1807a98d0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     (lVar2 = *(longlong *)(param_1 + 0x48), *(longlong *)(lVar2 + 0x18) != 0)) {
    iVar6 = *(int *)(param_1 + 0x70) + 1;
    *(int *)(param_1 + 0x70) = iVar6;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) + -1 < iVar6) {
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
      lVar2 = *(longlong *)(param_1 + 0x48);
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_1 + 0x70)) {
          FUN_1803155c0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar3 = *(longlong **)(param_1 + 0x50);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0xa88))
                    (plVar3,*(undefined8 *)
                             (lVar2 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x70) * 8),
                     *(undefined8 *)(*plVar3 + 0xa90));
          plVar3 = *(longlong **)(param_1 + 0x50);
          if (plVar3 != (longlong *)0x0) {
            lVar2 = *(longlong *)(param_1 + 0x68);
            uVar1 = *(undefined4 *)(param_1 + 0x70);
            uVar5 = (**(code **)(*plVar3 + 0xa78))(plVar3,*(undefined8 *)(*plVar3 + 0xa80));
            if (lVar2 != 0) {
              (**(code **)(lVar2 + 0x18))
                        (*(undefined8 *)(lVar2 + 0x40),uVar1,uVar5,*(undefined8 *)(lVar2 + 0x28));
              return;
            }
          }
        }
      }
    }
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

