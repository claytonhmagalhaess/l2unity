// SparkDados__LerBytes__180591630 @ 0x180591630

undefined8 SparkDados__LerBytes__180591630(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  longlong *plStackX_18;
  longlong lStackX_20;
  undefined4 uVar14;
  undefined8 in_stack_ffffffffffffff48;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong **pplStack_88;
  undefined *puStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  undefined *puStack_30;
  undefined1 *puStack_28;
  
  if (cRam00000001834b39f0 == '\0') {
    puStack_30 = &UNK_180591652;
    FUN_180315380(0x1832eb8c8);
    puStack_30 = &UNK_18059165e;
    FUN_180315380(0x183303ff8);
    cRam00000001834b39f0 = '\x01';
  }
  puStack_30 = &UNK_180591677;
  uVar6 = FUN_1817037f0(param_1,uRam0000000183303ff8,0);
  puStack_30 = &UNK_180591684;
  cVar2 = FUN_18185a2e0(uVar6,0);
  if (cVar2 != '\0') {
    puStack_30 = &UNK_1805916a4;
    lVar7 = FUN_18185ae80(uVar6,0);
    if (*(int *)(lRam00000001832eb8c8 + 0xe4) == 0) {
      puStack_30 = &UNK_1805916bc;
      func_0x000180315660();
    }
    if (cRam00000001834b39ed == '\0') {
      FUN_180315380(0x1832d0398,0);
      FUN_180315380(0x183331868);
      FUN_180315380(0x1832ea468);
      FUN_180315380(0x1833125d0);
      FUN_180315380(0x1833318a8);
      FUN_180315380(0x1832eb8c8);
      cRam00000001834b39ed = '\x01';
    }
    uVar12 = 0;
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
    if (lVar7 != 0) {
      if (*(int *)(lRam00000001832eb8c8 + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (**(longlong **)(lRam00000001832eb8c8 + 0xb8) == 0) {
code_r0x00018059123a:
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      lVar4 = lRam00000001832eb8c8;
      if (*(int *)(**(longlong **)(lRam00000001832eb8c8 + 0xb8) + 0x18) + 0x10 <=
          *(int *)(lVar7 + 0x18)) {
        do {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            func_0x000180315660();
            lVar4 = lRam00000001832eb8c8;
          }
          uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
          if (**(longlong **)(lVar4 + 0xb8) == 0) goto code_r0x00018059123a;
          if (*(int *)(**(longlong **)(lVar4 + 0xb8) + 0x18) <= (int)uVar12) {
            uStack_98 = 0;
            if (*(int *)(lRam00000001832d0398 + 0xe4) == 0) {
              func_0x000180315660();
            }
            plVar8 = (longlong *)FUN_181724580(0);
            uStack_50 = 0;
            puStack_48 = &stack0x00000008;
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x228))(plVar8,0x100,*(undefined8 *)(*plVar8 + 0x230));
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x248))(plVar8,1,*(undefined8 *)(*plVar8 + 0x250));
                if (plVar8 != (longlong *)0x0) {
                  (**(code **)(*plVar8 + 0x268))(plVar8,2,*(undefined8 *)(*plVar8 + 0x270));
                  if (*(int *)(lRam00000001832eb8c8 + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar6 = SparkCripto__Chave__18058ff60(0);
                  if (plVar8 != (longlong *)0x0) {
                    (**(code **)(*plVar8 + 0x1f8))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x200));
                    uVar6 = func_0x000180314710(uRam0000000183331868,0x10);
                    if (**(longlong **)(lRam00000001832eb8c8 + 0xb8) != 0) {
                      FUN_1818cf2e0(lVar7,*(undefined4 *)
                                           (**(longlong **)(lRam00000001832eb8c8 + 0xb8) + 0x18),
                                    uVar6,0,CONCAT44(uVar14,0x10),0);
                      if (plVar8 != (longlong *)0x0) {
                        (**(code **)(*plVar8 + 0x1d8))
                                  (plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x1e0));
                        if (**(longlong **)(lRam00000001832eb8c8 + 0xb8) != 0) {
                          if (plVar8 != (longlong *)0x0) {
                            iVar13 = *(int *)(**(longlong **)(lRam00000001832eb8c8 + 0xb8) + 0x18) +
                                     0x10;
                            lStack_a0 = (**(code **)(*plVar8 + 0x298))
                                                  (plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
                            uStack_60 = 0;
                            plStack_58 = &lStack_a0;
                            lVar4 = func_0x000180315580(uRam00000001833318a8);
                            FUN_18185d730(lVar4,lVar7,iVar13,*(int *)(lVar7 + 0x18) - iVar13,0);
                            lVar7 = lStack_a0;
                            uStack_70 = 0;
                            plStack_68 = &lStack_a8;
                            lStack_a8 = lVar4;
                            lVar5 = func_0x000180315580(uRam00000001832ea468);
                            FUN_181726290(lVar5,lVar4,lVar7,0,0);
                            puStack_80 = (undefined *)0x0;
                            plStack_78 = &lStackX_20;
                            lStackX_20 = lVar5;
                            plVar10 = (longlong *)func_0x000180315580(uRam00000001833318a8);
                            FUN_18185db40(plVar10,0);
                            uStack_90 = 0;
                            pplStack_88 = &plStackX_18;
                            plStackX_18 = plVar10;
                            if (lStackX_20 != 0) {
                              FUN_1818650b0(lStackX_20,plVar10,0);
                              if (plStackX_18 != (longlong *)0x0) {
                                uVar6 = (**(code **)(*plStackX_18 + 0x3c8))
                                                  (plStackX_18,*(undefined8 *)(*plStackX_18 + 0x3d0)
                                                  );
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
                                if (plVar8 != (longlong *)0x0) {
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
          if (*(uint *)(lVar7 + 0x18) <= uVar12) {
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
          cVar2 = *(char *)((longlong)(int)uVar12 + 0x20 + lVar7);
          if (*(int *)(lVar4 + 0xe4) == 0) {
            func_0x000180315660();
            lVar4 = lRam00000001832eb8c8;
          }
          lVar5 = **(longlong **)(lVar4 + 0xb8);
          if (lVar5 == 0) goto code_r0x00018059123a;
          if (*(uint *)(lVar5 + 0x18) <= uVar12) goto code_r0x0001805911e1;
          if (cVar2 != *(char *)((longlong)(int)uVar12 + 0x20 + lVar5)) break;
          uVar12 = uVar12 + 1;
        } while( true );
      }
    }
    uVar6 = func_0x0001803153a0(0x1833220d8);
    uVar6 = func_0x000180315580(uVar6);
    uVar11 = func_0x0001803153a0(0x1832cdba8);
    FUN_181e29d20(uVar6,uVar11,0);
    uVar11 = func_0x0001803153a0(0x1832d6f20);
    FUN_180315590(uVar6,uVar11);
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  if (cRam00000001834b93ef == '\0') {
    puStack_80 = &UNK_18185aea5;
    FUN_180315380(0x183331868);
    puStack_80 = &UNK_18185aeb1;
    FUN_180315380(0x183303c20);
    puStack_80 = &UNK_18185aebd;
    FUN_180315380(0x1833125d0);
    cRam00000001834b93ef = '\x01';
  }
  iVar13 = 0;
  plStackX_18 = (longlong *)0x0;
  puStack_80 = &UNK_18185aeda;
  plVar8 = (longlong *)func_0x000180315580(uRam0000000183303c20);
  puStack_48 = (undefined1 *)0x0;
  uStack_50 = CONCAT44(uStack_50._4_4_,1);
  plStack_58 = (longlong *)CONCAT44(plStack_58._4_4_,1);
  puStack_80 = &UNK_18185af09;
  FUN_181870b50(plVar8,param_1,3,1);
  puStack_30 = (undefined *)0x0;
  puStack_28 = &stack0x00000008;
  if (plVar8 != (longlong *)0x0) {
    puStack_80 = &UNK_18185af44;
    uVar9 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
    if ((longlong)uVar9 < 0x80000000) {
      if (uVar9 == 0) {
        puStack_80 = &UNK_18185afe2;
        plVar10 = (longlong *)FUN_18185a9b0(plVar8,0);
        if (plVar8 != (longlong *)0x0) {
          puStack_80 = &UNK_18185b008;
          plStackX_18 = plVar10;
          FUN_180002390(0,uRam00000001833125d0);
        }
      }
      else {
        puStack_80 = &UNK_18185af66;
        plVar10 = (longlong *)func_0x000180314710(uRam0000000183331868,uVar9 & 0xffffffff);
        for (; 0 < (int)uVar9; uVar9 = (ulonglong)(uint)((int)uVar9 - iVar3)) {
          if (plVar8 == (longlong *)0x0) {
code_r0x00018185b071:
            puStack_80 = &UNK_18185b076;
            FUN_1803155d0();
            goto code_r0x00018185b076;
          }
          plStack_58 = *(longlong **)(*plVar8 + 0x340);
          puStack_80 = &UNK_18185afa4;
          iVar3 = (**(code **)(*plVar8 + 0x338))(plVar8,plVar10,iVar13,uVar9 & 0xffffffff);
          if (iVar3 == 0) {
            puStack_80 = &UNK_18185b057;
            uVar6 = FUN_181857430(0);
            puStack_80 = &UNK_18185b066;
            uVar11 = func_0x0001803153a0(0x183304ea8);
            puStack_80 = &UNK_18185b071;
            FUN_180315590(uVar6,uVar11);
            goto code_r0x00018185b071;
          }
          iVar13 = iVar13 + iVar3;
        }
        if (plVar8 != (longlong *)0x0) {
          puStack_80 = &UNK_18185afd1;
          plStackX_18 = plVar10;
          FUN_180002390(0,uRam00000001833125d0,plVar8);
        }
      }
      return plVar10;
    }
code_r0x00018185b076:
    puStack_80 = &UNK_18185b082;
    uVar6 = func_0x0001803153a0(0x183316e30);
    puStack_80 = &UNK_18185b08a;
    uVar6 = func_0x000180315580(uVar6);
    puStack_80 = &UNK_18185b099;
    uVar11 = func_0x0001803153a0(0x1832fd210);
    puStack_80 = &UNK_18185b0a7;
    FUN_18185b600(uVar6,uVar11,0);
    puStack_80 = &UNK_18185b0b3;
    uVar11 = func_0x0001803153a0(0x183304ea8);
    puStack_80 = &UNK_18185b0be;
    FUN_180315590(uVar6,uVar11);
  }
  puStack_80 = &UNK_18185b0c3;
  FUN_1803155d0();
  puStack_80 = &UNK_18185b0c9;
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}

