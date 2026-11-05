// SparkCripto__Decifra__180590bd0 @ 0x180590bd0

undefined8 SparkCripto__Decifra__180590bd0(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong *plStackX_8;
  longlong *plStackX_18;
  longlong lStackX_20;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar11;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong **pplStack_88;
  undefined8 uStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  undefined8 uStack_50;
  longlong **pplStack_48;
  
  if (cRam00000001834b39ed == '\0') {
    FUN_180315380(0x1832d0398);
    FUN_180315380(0x183331868);
    FUN_180315380(0x1832ea468);
    FUN_180315380(0x1833125d0);
    FUN_180315380(0x1833318a8);
    FUN_180315380(0x1832eb8c8);
    cRam00000001834b39ed = '\x01';
  }
  uVar9 = 0;
  plStackX_8 = (longlong *)0x0;
  lStack_a0 = 0;
  lStack_a8 = 0;
  lStackX_20 = 0;
  plStackX_18 = (longlong *)0x0;
  if (*(int *)(lRam00000001832eb8c8 + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b39ec == '\0') {
    FUN_180315380(0x1832eb8c8);
    cRam00000001834b39ec = '\x01';
  }
  if (param_1 != 0) {
    if (*(int *)(lRam00000001832eb8c8 + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (**(longlong **)(lRam00000001832eb8c8 + 0xb8) == 0) {
code_r0x00018059123a:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    lVar8 = lRam00000001832eb8c8;
    if (*(int *)(**(longlong **)(lRam00000001832eb8c8 + 0xb8) + 0x18) + 0x10 <=
        *(int *)(param_1 + 0x18)) {
      do {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          func_0x000180315660();
          lVar8 = lRam00000001832eb8c8;
        }
        uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
        if (**(longlong **)(lVar8 + 0xb8) == 0) goto code_r0x00018059123a;
        if (*(int *)(**(longlong **)(lVar8 + 0xb8) + 0x18) <= (int)uVar9) {
          uStack_98 = 0;
          if (*(int *)(lRam00000001832d0398 + 0xe4) == 0) {
            func_0x000180315660();
          }
          plStackX_8 = (longlong *)FUN_181724580(0);
          uStack_50 = 0;
          pplStack_48 = &plStackX_8;
          if (plStackX_8 != (longlong *)0x0) {
            (**(code **)(*plStackX_8 + 0x228))
                      (plStackX_8,0x100,*(undefined8 *)(*plStackX_8 + 0x230));
            if (plStackX_8 != (longlong *)0x0) {
              (**(code **)(*plStackX_8 + 0x248))(plStackX_8,1,*(undefined8 *)(*plStackX_8 + 0x250));
              if (plStackX_8 != (longlong *)0x0) {
                (**(code **)(*plStackX_8 + 0x268))
                          (plStackX_8,2,*(undefined8 *)(*plStackX_8 + 0x270));
                plVar5 = plStackX_8;
                if (*(int *)(lRam00000001832eb8c8 + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar6 = SparkCripto__Chave__18058ff60(0);
                if (plVar5 != (longlong *)0x0) {
                  (**(code **)(*plVar5 + 0x1f8))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x200));
                  uVar6 = func_0x000180314710(uRam0000000183331868,0x10);
                  if (**(longlong **)(lRam00000001832eb8c8 + 0xb8) != 0) {
                    FUN_1818cf2e0(param_1,*(undefined4 *)
                                           (**(longlong **)(lRam00000001832eb8c8 + 0xb8) + 0x18),
                                  uVar6,0,CONCAT44(uVar11,0x10),0);
                    if (plStackX_8 != (longlong *)0x0) {
                      (**(code **)(*plStackX_8 + 0x1d8))
                                (plStackX_8,uVar6,*(undefined8 *)(*plStackX_8 + 0x1e0));
                      if (**(longlong **)(lRam00000001832eb8c8 + 0xb8) != 0) {
                        if (plStackX_8 != (longlong *)0x0) {
                          iVar10 = *(int *)(**(longlong **)(lRam00000001832eb8c8 + 0xb8) + 0x18) +
                                   0x10;
                          lStack_a0 = (**(code **)(*plStackX_8 + 0x298))
                                                (plStackX_8,*(undefined8 *)(*plStackX_8 + 0x2a0));
                          uStack_60 = 0;
                          plStack_58 = &lStack_a0;
                          lVar3 = func_0x000180315580(uRam00000001833318a8);
                          FUN_18185d730(lVar3,param_1,iVar10,*(int *)(param_1 + 0x18) - iVar10,0);
                          lVar8 = lStack_a0;
                          uStack_70 = 0;
                          plStack_68 = &lStack_a8;
                          lStack_a8 = lVar3;
                          lVar4 = func_0x000180315580(uRam00000001832ea468);
                          FUN_181726290(lVar4,lVar3,lVar8,0,0);
                          uStack_80 = 0;
                          plStack_78 = &lStackX_20;
                          lStackX_20 = lVar4;
                          plVar5 = (longlong *)func_0x000180315580(uRam00000001833318a8);
                          FUN_18185db40(plVar5,0);
                          uStack_90 = 0;
                          pplStack_88 = &plStackX_18;
                          plStackX_18 = plVar5;
                          if (lStackX_20 != 0) {
                            FUN_1818650b0(lStackX_20,plVar5,0);
                            if (plStackX_18 != (longlong *)0x0) {
                              uVar6 = (**(code **)(*plStackX_18 + 0x3c8))
                                                (plStackX_18,*(undefined8 *)(*plStackX_18 + 0x3d0));
                              uStack_98 = uVar6;
                              if (plStackX_18 != (longlong *)0x0) {
                                FUN_180002390(0,uRam00000001833125d0);
                              }
                              if (lStackX_20 != 0) {
                                FUN_180002390(0,uRam00000001833125d0);
                              }
                              if (lStack_a8 != 0) {
                                FUN_180002390(0,uRam00000001833125d0);
                              }
                              if (lStack_a0 != 0) {
                                FUN_180002390(0,uRam00000001833125d0);
                              }
                              if (plStackX_8 != (longlong *)0x0) {
                                FUN_180002390(0,uRam00000001833125d0);
                              }
                              return uVar6;
                            }
                            goto code_r0x0001805911e7;
                          }
                          goto code_r0x0001805911ed;
                        }
                        goto code_r0x000180591211;
                      }
                      goto code_r0x000180591216;
                    }
                    goto code_r0x00018059121b;
                  }
                  goto code_r0x000180591220;
                }
                goto code_r0x000180591225;
              }
              goto code_r0x00018059122a;
            }
            goto code_r0x00018059122f;
          }
code_r0x000180591234:
          FUN_1803155d0();
          goto code_r0x00018059123a;
        }
        if (*(uint *)(param_1 + 0x18) <= uVar9) {
code_r0x0001805911e1:
          FUN_1803155c0();
code_r0x0001805911e7:
          FUN_1803155d0();
code_r0x0001805911ed:
          FUN_1803155d0();
          FUN_180311490();
          FUN_180311490();
          FUN_180311490();
          FUN_180311490();
          FUN_180311490();
code_r0x000180591211:
          FUN_1803155d0();
code_r0x000180591216:
          FUN_1803155d0();
code_r0x00018059121b:
          FUN_1803155d0();
code_r0x000180591220:
          FUN_1803155d0();
code_r0x000180591225:
          FUN_1803155d0();
code_r0x00018059122a:
          FUN_1803155d0();
code_r0x00018059122f:
          FUN_1803155d0();
          goto code_r0x000180591234;
        }
        cVar1 = *(char *)((longlong)(int)uVar9 + 0x20 + param_1);
        if (*(int *)(lVar8 + 0xe4) == 0) {
          func_0x000180315660();
          lVar8 = lRam00000001832eb8c8;
        }
        lVar3 = **(longlong **)(lVar8 + 0xb8);
        if (lVar3 == 0) goto code_r0x00018059123a;
        if (*(uint *)(lVar3 + 0x18) <= uVar9) goto code_r0x0001805911e1;
        if (cVar1 != *(char *)((longlong)(int)uVar9 + 0x20 + lVar3)) break;
        uVar9 = uVar9 + 1;
      } while( true );
    }
  }
  uVar6 = func_0x0001803153a0(0x1833220d8);
  uVar6 = func_0x000180315580(uVar6);
  uVar7 = func_0x0001803153a0(0x1832cdba8);
  FUN_181e29d20(uVar6,uVar7,0);
  uVar7 = func_0x0001803153a0(0x1832d6f20);
  FUN_180315590(uVar6,uVar7);
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return uVar6;
}

