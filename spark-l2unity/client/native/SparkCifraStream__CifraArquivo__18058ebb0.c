// SparkCifraStream__CifraArquivo__18058ebb0 @ 0x18058ebb0

void SparkCifraStream__CifraArquivo__18058ebb0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar11;
  ulonglong uVar10;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar12;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  if (cRam00000001834b39e5 == '\0') {
    FUN_180315380(0x183331868);
    FUN_180315380(0x183303c20);
    FUN_180315380(0x1833125d0);
    FUN_180315380(0x1832eb0e0);
    cRam00000001834b39e5 = '\x01';
  }
  lVar9 = 0;
  if (*(int *)(lRam00000001832eb0e0 + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = SparkCifraStream__Semente__18058f290(param_3,0);
  lVar5 = func_0x000180314710(uRam0000000183331868,0x100000);
  plVar6 = (longlong *)func_0x000180315580(uRam0000000183303c20);
  uVar8 = CONCAT44(uVar12,0x10000);
  uVar10 = CONCAT44(uVar11,1);
  FUN_181870b50(plVar6,param_1,3,1,uVar10,uVar8,0);
  uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
  plVar7 = (longlong *)func_0x000180315580(uRam0000000183303c20);
  FUN_181870b50(plVar7,param_2,2,2,uVar10 & 0xffffffff00000000,CONCAT44(uVar11,0x10000),0);
  if (*(int *)(lRam00000001832eb0e0 + 0xe4) == 0) {
    func_0x000180315660(lRam00000001832eb0e0);
  }
  lVar1 = **(longlong **)(lRam00000001832eb0e0 + 0xb8);
  if (lVar1 != 0) {
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x368))
                (plVar7,lVar1,0,*(undefined4 *)(lVar1 + 0x18),*(undefined8 *)(*plVar7 + 0x370));
      if (**(longlong **)(lRam00000001832eb0e0 + 0xb8) != 0) {
        uVar8 = func_0x000180314710(uRam0000000183331868,
                                    8 - *(int *)(**(longlong **)(lRam00000001832eb0e0 + 0xb8) + 0x18
                                                ));
        if (**(longlong **)(lRam00000001832eb0e0 + 0xb8) != 0) {
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x368))
                      (plVar7,uVar8,0,
                       8 - *(int *)(**(longlong **)(lRam00000001832eb0e0 + 0xb8) + 0x18),
                       *(undefined8 *)(*plVar7 + 0x370));
            if (lVar5 != 0) {
              while (plVar6 != (longlong *)0x0) {
                uVar8 = *(undefined8 *)(*plVar6 + 0x340);
                iVar3 = (**(code **)(*plVar6 + 0x338))
                                  (plVar6,lVar5,0,*(undefined4 *)(lVar5 + 0x18),uVar8);
                uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
                if (iVar3 < 1) {
                  if (plVar7 != (longlong *)0x0) {
                    FUN_180002390(0,uRam00000001833125d0,plVar7);
                  }
                  if (plVar6 != (longlong *)0x0) {
                    FUN_180002390(0,uRam00000001833125d0,plVar6);
                  }
                  return;
                }
                if (*(int *)(lRam00000001832eb0e0 + 0xe4) == 0) {
                  func_0x000180315660();
                }
                SparkCifraStream__Xor__18058f690(uVar4,lVar9,lVar5,0,CONCAT44(uVar11,iVar3),0);
                if (plVar7 == (longlong *)0x0) {
                  FUN_1803155d0();
                  break;
                }
                (**(code **)(*plVar7 + 0x368))
                          (plVar7,lVar5,0,iVar3,*(undefined8 *)(*plVar7 + 0x370));
                lVar9 = lVar9 + iVar3;
              }
              FUN_1803155d0();
            }
            FUN_1803155d0();
          }
          FUN_1803155d0();
        }
        FUN_1803155d0();
      }
      FUN_1803155d0();
    }
    FUN_1803155d0();
  }
  FUN_1803155d0();
  FUN_180311490();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

