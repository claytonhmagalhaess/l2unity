// SparkCripto__CifraEstavel__1805900d0 @ 0x1805900d0

undefined8 SparkCripto__CifraEstavel__1805900d0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plStackX_18;
  longlong *plStackX_20;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar8;
  longlong *plStack_a8;
  longlong lStack_a0;
  longlong *plStack_98;
  undefined8 uStack_90;
  longlong **pplStack_88;
  undefined8 uStack_80;
  longlong *plStack_78;
  longlong lStack_70;
  longlong **pplStack_68;
  undefined8 uStack_60;
  longlong **pplStack_58;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  if (cRam00000001834b39eb == '\0') {
    FUN_180315380(0x1832d0398);
    FUN_180315380(0x183331868);
    FUN_180315380(0x1832ea468);
    FUN_180315380(0x18330b778);
    FUN_180315380(0x1833125d0);
    FUN_180315380(0x1833318a8);
    FUN_180315380(0x1832eb8c8);
    cRam00000001834b39eb = '\x01';
  }
  lStack_a0 = 0;
  plStackX_20 = (longlong *)0x0;
  plStack_a8 = (longlong *)0x0;
  if (*(int *)(lRam00000001832eb8c8 + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = SparkCripto__Chave__18058ff60(0);
  uStack_80 = uVar3;
  lVar4 = func_0x000180314710(uRam0000000183331868,0x10);
  lStack_70 = lVar4;
  plVar5 = (longlong *)func_0x000180315580(uRam000000018330b778);
  FUN_18173d080(plVar5,uVar3,0);
  uStack_90 = 0;
  pplStack_88 = &plStack_98;
  plStack_98 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    FUN_1803155d0();
    FUN_180311490();
code_r0x000180590634:
    FUN_1803155d0();
code_r0x00018059063a:
    FUN_1803155d0();
code_r0x00018059063f:
    FUN_1803155d0();
    FUN_180311490();
code_r0x00018059064a:
    FUN_1803155d0();
code_r0x00018059064f:
    FUN_1803155d0();
code_r0x000180590654:
    FUN_1803155d0();
code_r0x000180590659:
    FUN_1803155d0();
    FUN_180311490();
    FUN_180311490();
    FUN_180311490();
code_r0x000180590671:
    FUN_1803155d0();
code_r0x000180590676:
    FUN_1803155d0();
code_r0x00018059067b:
    FUN_1803155d0();
code_r0x000180590680:
    FUN_1803155d0();
  }
  else {
    uVar6 = FUN_18172e850(plVar5,param_1,0);
    FUN_1818cf2e0(uVar6,0,lVar4,0,CONCAT44(uVar8,0x10),0);
    if (plStack_98 != (longlong *)0x0) {
      FUN_180002390(0,uRam00000001833125d0);
    }
    if (*(int *)(lRam00000001832d0398 + 0xe4) == 0) {
      func_0x000180315660();
    }
    plStackX_18 = (longlong *)FUN_181724580(0);
    uStack_60 = 0;
    pplStack_58 = &plStackX_18;
    if (plStackX_18 == (longlong *)0x0) goto code_r0x00018059068a;
    (**(code **)(*plStackX_18 + 0x228))(plStackX_18,0x100,*(undefined8 *)(*plStackX_18 + 0x230));
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x248))(plStackX_18,1,*(undefined8 *)(*plStackX_18 + 0x250));
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x268))(plStackX_18,2,*(undefined8 *)(*plStackX_18 + 0x270));
        if (plStackX_18 != (longlong *)0x0) {
          (**(code **)(*plStackX_18 + 0x1f8))
                    (plStackX_18,uVar3,*(undefined8 *)(*plStackX_18 + 0x200));
          if (plStackX_18 != (longlong *)0x0) {
            (**(code **)(*plStackX_18 + 0x1d8))
                      (plStackX_18,lVar4,*(undefined8 *)(*plStackX_18 + 0x1e0));
            if (plStackX_18 != (longlong *)0x0) {
              lStack_a0 = (**(code **)(*plStackX_18 + 0x278))
                                    (plStackX_18,*(undefined8 *)(*plStackX_18 + 0x280));
              uStack_80 = 0;
              plStack_78 = &lStack_a0;
              plVar5 = (longlong *)func_0x000180315580(uRam00000001833318a8);
              FUN_18185db40(plVar5,0);
              lStack_70 = 0;
              pplStack_68 = &plStackX_20;
              plStackX_20 = plVar5;
              if (*(int *)(lRam00000001832eb8c8 + 0xe4) == 0) {
                func_0x000180315660(lRam00000001832eb8c8);
              }
              lVar1 = **(longlong **)(lRam00000001832eb8c8 + 0xb8);
              if (lVar1 != 0) {
                if (plVar5 != (longlong *)0x0) {
                  (**(code **)(*plVar5 + 0x368))
                            (plVar5,lVar1,0,*(undefined4 *)(lVar1 + 0x18),
                             *(undefined8 *)(*plVar5 + 0x370));
                  if (lVar4 != 0) {
                    if (plStackX_20 != (longlong *)0x0) {
                      (**(code **)(*plStackX_20 + 0x368))
                                (plStackX_20,lVar4,0,*(undefined4 *)(lVar4 + 0x18),
                                 *(undefined8 *)(*plStackX_20 + 0x370));
                      lVar4 = lStack_a0;
                      plVar5 = plStackX_20;
                      plVar7 = (longlong *)func_0x000180315580(uRam00000001832ea468);
                      FUN_181726290(plVar7,plVar5,lVar4,1,0);
                      uStack_90 = 0;
                      pplStack_88 = &plStack_a8;
                      plStack_a8 = plVar7;
                      if (param_1 != 0) {
                        if (plVar7 != (longlong *)0x0) {
                          (**(code **)(*plVar7 + 0x368))
                                    (plVar7,param_1,0,*(undefined4 *)(param_1 + 0x18),
                                     *(undefined8 *)(*plVar7 + 0x370));
                          if (plStack_a8 != (longlong *)0x0) {
                            FUN_180002390(0,uRam00000001833125d0);
                          }
                          if (plStackX_20 != (longlong *)0x0) {
                            uVar3 = (**(code **)(*plStackX_20 + 0x3c8))
                                              (plStackX_20,*(undefined8 *)(*plStackX_20 + 0x3d0));
                            if (plStackX_20 != (longlong *)0x0) {
                              FUN_180002390(0,uRam00000001833125d0);
                            }
                            if (lStack_a0 != 0) {
                              FUN_180002390(0,uRam00000001833125d0);
                            }
                            if (plStackX_18 != (longlong *)0x0) {
                              FUN_180002390(0,uRam00000001833125d0);
                            }
                            return uVar3;
                          }
                          goto code_r0x000180590634;
                        }
                        goto code_r0x00018059063a;
                      }
                      goto code_r0x00018059063f;
                    }
                    goto code_r0x00018059064a;
                  }
                  goto code_r0x00018059064f;
                }
                goto code_r0x000180590654;
              }
              goto code_r0x000180590659;
            }
            goto code_r0x000180590671;
          }
          goto code_r0x000180590676;
        }
        goto code_r0x00018059067b;
      }
      goto code_r0x000180590680;
    }
  }
  FUN_1803155d0();
code_r0x00018059068a:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}

