// SparkCifraStream___ctor__18058fe60 @ 0x18058fe60

void SparkCifraStream___ctor__18058fe60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar10;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (cRam00000001834b39e2 == '\0') {
    FUN_180315380(0x183303c20);
    cRam00000001834b39e2 = '\x01';
  }
  uVar8 = func_0x000180315580(uRam0000000183303c20);
  FUN_1818716e0(uVar8,param_2,3,1,1,0x1000,CONCAT44(uVar10,0x10000000),0);
  if (cRam00000001834b39e3 == '\0') {
    FUN_180315380(0x183331868,uVar8,param_3,0);
    FUN_180315380(0x1832c55f0);
    FUN_180315380(0x1832eb0e0);
    FUN_180315380(0x1832f49e8);
    cRam00000001834b39e3 = '\x01';
  }
  uVar6 = func_0x000180315580(uRam00000001832c55f0);
  SparkCifraStream__Flush__1803dadf0(uVar6,0);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  func_0x000180314690(param_1 + 0x48,uVar6);
  if (*(int *)(lRam00000001832f49e8 + 0xe4) == 0) {
    func_0x000180315660();
  }
  L2_login_NewCrypt___ctor__1803f01b0(param_1,0);
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  func_0x000180314690(param_1 + 0x28,uVar8);
  lVar7 = func_0x000180314710(uRam0000000183331868,8);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x208))(plVar2,0,*(undefined8 *)(*plVar2 + 0x210));
    iVar9 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x28);
      if (plVar2 == (longlong *)0x0) goto code_r0x00018058fdb1;
      if (*(int *)(lRam00000001832f49e8 + 0xe4) == 0) {
        func_0x000180315660();
      }
      iVar5 = (**(code **)(*plVar2 + 0x338))
                        (plVar2,lVar7,iVar9,8 - iVar9,*(undefined8 *)(*plVar2 + 0x340));
      if (iVar5 < 1) {
        if (iVar9 < 8) goto code_r0x00018058fdbd;
        break;
      }
      iVar9 = iVar9 + iVar5;
    } while (iVar9 < 8);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) != 0) {
        cVar1 = *(char *)(lVar7 + 0x20);
        if (*(int *)(lRam00000001832eb0e0 + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar3 = **(longlong **)(lRam00000001832eb0e0 + 0xb8);
        if (lVar3 == 0) goto code_r0x00018058fdb1;
        if (*(int *)(lVar3 + 0x18) != 0) {
          if (cVar1 != *(char *)(lVar3 + 0x20)) {
code_r0x00018058fdbd:
            uVar8 = *(undefined8 *)(param_1 + 0x28);
            FUN_180002480(uVar8);
            uVar6 = func_0x0001803153a0(0x1832f49e8);
            func_0x000180002510(uVar6);
            func_0x0001817251f0(uVar8,0);
            uVar8 = func_0x0001803153a0(0x1832f3ff8);
            uVar6 = func_0x0001803153a0(0x1832cd208);
            uVar8 = FUN_181703510(uVar6,param_3,uVar8,0);
            uVar6 = func_0x0001803153a0(0x1833220d8);
            uVar6 = func_0x000180315580(uVar6);
            FUN_181e29d20(uVar6,uVar8,0);
            uVar8 = func_0x0001803153a0(0x1832d5ea0);
            FUN_180315590(uVar6,uVar8);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (1 < *(uint *)(lVar7 + 0x18)) {
            cVar1 = *(char *)(lVar7 + 0x21);
            if (*(int *)(lRam00000001832eb0e0 + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar3 = **(longlong **)(lRam00000001832eb0e0 + 0xb8);
            if (lVar3 == 0) goto code_r0x00018058fdb1;
            if (1 < *(uint *)(lVar3 + 0x18)) {
              if (cVar1 != *(char *)(lVar3 + 0x21)) goto code_r0x00018058fdbd;
              if (2 < *(uint *)(lVar7 + 0x18)) {
                cVar1 = *(char *)(lVar7 + 0x22);
                if (*(int *)(lRam00000001832eb0e0 + 0xe4) == 0) {
                  func_0x000180315660();
                }
                lVar3 = **(longlong **)(lRam00000001832eb0e0 + 0xb8);
                if (lVar3 == 0) goto code_r0x00018058fdb1;
                if (2 < *(uint *)(lVar3 + 0x18)) {
                  if (cVar1 != *(char *)(lVar3 + 0x22)) goto code_r0x00018058fdbd;
                  if (3 < *(uint *)(lVar7 + 0x18)) {
                    cVar1 = *(char *)(lVar7 + 0x23);
                    if (*(int *)(lRam00000001832eb0e0 + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    lVar7 = **(longlong **)(lRam00000001832eb0e0 + 0xb8);
                    if (lVar7 != 0) {
                      if (*(uint *)(lVar7 + 0x18) < 4) goto code_r0x00018058fdb7;
                      if (cVar1 != *(char *)(lVar7 + 0x23)) goto code_r0x00018058fdbd;
                      plVar2 = *(longlong **)(param_1 + 0x28);
                      if (plVar2 != (longlong *)0x0) {
                        if (*(int *)(lRam00000001832f49e8 + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        lVar7 = (**(code **)(*plVar2 + 0x1e8))
                                          (plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
                        *(longlong *)(param_1 + 0x38) = lVar7 + -8;
                        if (*(int *)(lRam00000001832eb0e0 + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar8 = SparkCifraStream__Semente__18058f290(param_3,0);
                        *(undefined8 *)(param_1 + 0x30) = uVar8;
                        return;
                      }
                    }
                    goto code_r0x00018058fdb1;
                  }
                }
              }
            }
          }
        }
      }
code_r0x00018058fdb7:
      FUN_1803155c0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
code_r0x00018058fdb1:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

