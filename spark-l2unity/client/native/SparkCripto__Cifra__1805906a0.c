// SparkCripto__Cifra__1805906a0 @ 0x1805906a0

undefined8 SparkCripto__Cifra__1805906a0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plStackX_18;
  longlong *plStackX_20;
  longlong *plStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong **pplStack_78;
  undefined8 uStack_70;
  longlong **pplStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  undefined8 uStack_50;
  longlong **pplStack_48;
  
  if (cRam00000001834b39ea == '\0') {
    FUN_180315380(0x1832d0398);
    FUN_180315380(0x1832ea468);
    FUN_180315380(0x1833125d0);
    FUN_180315380(0x1833318a8);
    FUN_180315380(0x1832eb8c8);
    cRam00000001834b39ea = '\x01';
  }
  lStack_90 = 0;
  plStackX_20 = (longlong *)0x0;
  plStack_98 = (longlong *)0x0;
  uStack_88 = 0;
  if (*(int *)(lRam00000001832d0398 + 0xe4) == 0) {
    func_0x000180315660();
  }
  plStackX_18 = (longlong *)FUN_181724580(0);
  uStack_50 = 0;
  pplStack_48 = &plStackX_18;
  if (plStackX_18 != (longlong *)0x0) {
    (**(code **)(*plStackX_18 + 0x228))(plStackX_18,0x100,*(undefined8 *)(*plStackX_18 + 0x230));
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x248))(plStackX_18,1,*(undefined8 *)(*plStackX_18 + 0x250));
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x268))(plStackX_18,2,*(undefined8 *)(*plStackX_18 + 0x270));
        plVar3 = plStackX_18;
        if (*(int *)(lRam00000001832eb8c8 + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar2 = SparkCripto__Chave__18058ff60(0);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x1f8))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x200));
          if (plStackX_18 != (longlong *)0x0) {
            (**(code **)(*plStackX_18 + 0x2c8))(plStackX_18,*(undefined8 *)(*plStackX_18 + 0x2d0));
            if (plStackX_18 != (longlong *)0x0) {
              lStack_90 = (**(code **)(*plStackX_18 + 0x278))
                                    (plStackX_18,*(undefined8 *)(*plStackX_18 + 0x280));
              uStack_60 = 0;
              plStack_58 = &lStack_90;
              plVar3 = (longlong *)func_0x000180315580(uRam00000001833318a8);
              FUN_18185db40(plVar3,0);
              uStack_70 = 0;
              pplStack_68 = &plStackX_20;
              plStackX_20 = plVar3;
              if (*(int *)(lRam00000001832eb8c8 + 0xe4) == 0) {
                func_0x000180315660(lRam00000001832eb8c8);
              }
              lVar4 = **(longlong **)(lRam00000001832eb8c8 + 0xb8);
              if (lVar4 != 0) {
                if (plVar3 != (longlong *)0x0) {
                  (**(code **)(*plVar3 + 0x368))
                            (plVar3,lVar4,0,*(undefined4 *)(lVar4 + 0x18),
                             *(undefined8 *)(*plVar3 + 0x370));
                  plVar3 = plStackX_20;
                  if (plStackX_18 != (longlong *)0x0) {
                    uVar2 = (**(code **)(*plStackX_18 + 0x1c8))
                                      (plStackX_18,*(undefined8 *)(*plStackX_18 + 0x1d0));
                    if (plStackX_18 != (longlong *)0x0) {
                      lVar4 = (**(code **)(*plStackX_18 + 0x1c8))
                                        (plStackX_18,*(undefined8 *)(*plStackX_18 + 0x1d0));
                      if (lVar4 != 0) {
                        if (plVar3 != (longlong *)0x0) {
                          (**(code **)(*plVar3 + 0x368))
                                    (plVar3,uVar2,0,*(undefined4 *)(lVar4 + 0x18),
                                     *(undefined8 *)(*plVar3 + 0x370));
                          lVar4 = lStack_90;
                          plVar3 = plStackX_20;
                          plVar5 = (longlong *)func_0x000180315580(uRam00000001832ea468);
                          FUN_181726290(plVar5,plVar3,lVar4,1,0);
                          uStack_80 = 0;
                          pplStack_78 = &plStack_98;
                          plStack_98 = plVar5;
                          if (param_1 != 0) {
                            if (plVar5 != (longlong *)0x0) {
                              (**(code **)(*plVar5 + 0x368))
                                        (plVar5,param_1,0,*(undefined4 *)(param_1 + 0x18),
                                         *(undefined8 *)(*plVar5 + 0x370));
                              if (plStack_98 != (longlong *)0x0) {
                                FUN_180002390(0,uRam00000001833125d0);
                              }
                              if (plStackX_20 != (longlong *)0x0) {
                                uVar2 = (**(code **)(*plStackX_20 + 0x3c8))
                                                  (plStackX_20,*(undefined8 *)(*plStackX_20 + 0x3d0)
                                                  );
                                uStack_88 = uVar2;
                                if (plStackX_20 != (longlong *)0x0) {
                                  FUN_180002390(0,uRam00000001833125d0);
                                }
                                if (lStack_90 != 0) {
                                  FUN_180002390(0,uRam00000001833125d0);
                                }
                                if (plStackX_18 != (longlong *)0x0) {
                                  FUN_180002390(0,uRam00000001833125d0);
                                }
                                return uVar2;
                              }
                              FUN_1803155d0();
                            }
                            FUN_1803155d0();
                          }
                          FUN_1803155d0();
                          FUN_180311490();
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
              FUN_180311490();
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
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

