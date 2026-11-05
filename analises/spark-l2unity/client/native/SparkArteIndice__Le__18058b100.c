// SparkArteIndice__Le__18058b100 @ 0x18058b100

longlong SparkArteIndice__Le__18058b100(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int aiStackX_8 [4];
  undefined4 auStackX_18 [2];
  int iStackX_20;
  longlong *plStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong **pplStack_90;
  undefined8 uStack_88;
  longlong *plStack_80;
  undefined8 uStack_78;
  longlong *plStack_70;
  longlong lStack_68;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (cRam00000001834b39de == '\0') {
    FUN_180315380(0x1832daf70);
    FUN_180315380(0x18330c648);
    FUN_180315380(0x183308378);
    FUN_180315380(0x1833125d0);
    FUN_180315380(0x1832bef00);
    FUN_180315380(0x1832e3cd8);
    FUN_180315380(0x1832c33d8);
    FUN_180315380(0x1833318a8);
    FUN_180315380(0x1832ea560);
    cRam00000001834b39de = '\x01';
  }
  iVar10 = 0;
  lStack_b8 = 0;
  plStack_c8 = (longlong *)0x0;
  aiStackX_8[0] = 0;
  auStackX_18[0] = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  lVar4 = func_0x000180315580(uRam00000001832ea560);
  lStack_c0 = lVar4;
  FUN_18058bb10(lVar4,0);
  lStack_68 = lVar4;
  lVar5 = func_0x000180315580(uRam00000001833318a8);
  FUN_18185da60(lVar5,param_1,0);
  uStack_78 = 0;
  plStack_70 = &lStack_b0;
  lStack_b0 = lVar5;
  lVar6 = func_0x000180315580(uRam0000000183308378);
  FUN_181e24ff0(lVar6,lVar5,0,0);
  uStack_88 = 0;
  plStack_80 = &lStack_b8;
  lStack_b8 = lVar6;
  uVar7 = FUN_18172dd40(0);
  plVar8 = (longlong *)func_0x000180315580(uRam00000001832daf70);
  FUN_181854d90(plVar8,lVar6,uVar7,0);
  uStack_98 = 0;
  pplStack_90 = &plStack_c8;
  plStack_c8 = plVar8;
  if (plVar8 == (longlong *)0x0) goto code_r0x00018058b8a2;
  aiStackX_8[0] = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
  if (aiStackX_8[0] == 1) {
    if (plStack_c8 != (longlong *)0x0) {
      iStackX_20 = (**(code **)(*plStack_c8 + 0x228))
                             (plStack_c8,*(undefined8 *)(*plStack_c8 + 0x230));
      while( true ) {
        if (iStackX_20 <= iVar10) break;
        if (plStack_c8 == (longlong *)0x0) {
code_r0x00018058b720:
          FUN_1803155d0();
          goto code_r0x00018058b725;
        }
        uVar7 = (**(code **)(*plStack_c8 + 0x298))(plStack_c8,*(undefined8 *)(*plStack_c8 + 0x2a0));
        if (lVar4 == 0) {
code_r0x00018058b71b:
          FUN_1803155d0();
          goto code_r0x00018058b720;
        }
        FUN_18058b8c0(lVar4,uVar7,0);
        if (plStack_c8 == (longlong *)0x0) {
code_r0x00018058b716:
          FUN_1803155d0();
          goto code_r0x00018058b71b;
        }
        uVar3 = (**(code **)(*plStack_c8 + 0x228))(plStack_c8,*(undefined8 *)(*plStack_c8 + 0x230));
        lVar5 = func_0x000180314710(uRam00000001832bef00,uVar3);
        uVar11 = 0;
        if (lVar5 == 0) {
code_r0x00018058b711:
          FUN_1803155d0();
          goto code_r0x00018058b716;
        }
        for (; lVar4 = lStack_c0, (int)uVar11 < *(int *)(lVar5 + 0x18); uVar11 = uVar11 + 1) {
          if (plStack_c8 == (longlong *)0x0) {
code_r0x00018058b707:
            FUN_1803155d0();
            goto code_r0x00018058b70c;
          }
          uVar3 = (**(code **)(*plStack_c8 + 0x228))
                            (plStack_c8,*(undefined8 *)(*plStack_c8 + 0x230));
          if (*(uint *)(lVar5 + 0x18) <= uVar11) {
            FUN_1803155c0();
            goto code_r0x00018058b707;
          }
          *(undefined4 *)(lVar5 + 0x20 + (longlong)(int)uVar11 * 4) = uVar3;
        }
        if (*(longlong *)(lStack_c0 + 0x18) == 0) {
code_r0x00018058b70c:
          FUN_1803155d0();
          goto code_r0x00018058b711;
        }
        FUN_181657340(*(longlong *)(lStack_c0 + 0x18),iVar10);
        iVar10 = iVar10 + 1;
      }
      if (plStack_c8 != (longlong *)0x0) {
        iVar10 = (**(code **)(*plStack_c8 + 0x228))(plStack_c8,*(undefined8 *)(*plStack_c8 + 0x230))
        ;
        iVar12 = 0;
        while (iVar12 < iVar10) {
          if (lVar4 == 0) goto code_r0x00018058b739;
          if (plStack_c8 == (longlong *)0x0) goto code_r0x00018058b734;
          lVar5 = *(longlong *)(lVar4 + 0x20);
          uVar3 = (**(code **)(*plStack_c8 + 0x228))
                            (plStack_c8,*(undefined8 *)(*plStack_c8 + 0x230));
          lVar6 = lRam00000001832e3cd8;
          if (lVar5 == 0) goto code_r0x00018058b72f;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          lVar1 = *(longlong *)(lVar5 + 0x10);
          if (lVar1 == 0) goto code_r0x00018058b72a;
          uVar11 = *(uint *)(lVar5 + 0x18);
          if (uVar11 < *(uint *)(lVar1 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar11 + 1;
            if (*(uint *)(lVar1 + 0x18) <= uVar11) goto code_r0x00018058b725;
            *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)uVar11 * 4) = uVar3;
            iVar12 = iVar12 + 1;
          }
          else {
            FUN_18162d2b0(lVar5,uVar3,
                          *(undefined8 *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xc0) + 0x70))
            ;
            iVar12 = iVar12 + 1;
          }
        }
        if (plStack_c8 != (longlong *)0x0) {
          iVar10 = (**(code **)(*plStack_c8 + 0x228))
                             (plStack_c8,*(undefined8 *)(*plStack_c8 + 0x230));
          for (iVar12 = 0; iVar12 < iVar10; iVar12 = iVar12 + 1) {
            if (plStack_c8 == (longlong *)0x0) goto code_r0x00018058b74d;
            uVar7 = (**(code **)(*plStack_c8 + 0x298))
                              (plStack_c8,*(undefined8 *)(*plStack_c8 + 0x2a0));
            if (lStack_c0 == 0) goto code_r0x00018058b748;
            if (plStack_c8 == (longlong *)0x0) goto code_r0x00018058b743;
            lVar4 = *(longlong *)(lStack_c0 + 0x38);
            uVar3 = (**(code **)(*plStack_c8 + 0x228))
                              (plStack_c8,*(undefined8 *)(*plStack_c8 + 0x230));
            if (lVar4 == 0) goto code_r0x00018058b73e;
            FUN_18125db60(lVar4,uVar7,uVar3);
          }
          if (plStack_c8 != (longlong *)0x0) {
            iStackX_20 = (**(code **)(*plStack_c8 + 0x228))
                                   (plStack_c8,*(undefined8 *)(*plStack_c8 + 0x230));
            iVar10 = 0;
            while( true ) {
              if (iStackX_20 <= iVar10) {
                if (plStack_c8 != (longlong *)0x0) {
                  FUN_180002390(0,uRam00000001833125d0,plStack_c8);
                }
                if (lStack_b8 != 0) {
                  FUN_180002390(0,uRam00000001833125d0,lStack_b8);
                }
                if (lStack_b0 != 0) {
                  FUN_180002390(0,uRam00000001833125d0,lStack_b0);
                }
                return lStack_c0;
              }
              if (plStack_c8 == (longlong *)0x0) break;
              uVar7 = (**(code **)(*plStack_c8 + 0x298))
                                (plStack_c8,*(undefined8 *)(*plStack_c8 + 0x2a0));
              if (plStack_c8 == (longlong *)0x0) goto code_r0x00018058b757;
              uVar3 = (**(code **)(*plStack_c8 + 0x228))
                                (plStack_c8,*(undefined8 *)(*plStack_c8 + 0x230));
              lVar4 = FUN_18058a010(uVar7,0);
              if (lVar4 != 0) {
                uVar9 = SparkArteIndice__Chave__18058a180(lVar4,0);
                uStack_a4 = 0;
                uStack_a0 = uVar7;
                uStack_a8 = uVar3;
                func_0x000180314690(&uStack_a0,uVar7);
                if (lStack_c0 == 0) goto code_r0x00018058b752;
                uStack_48 = uStack_a8;
                uStack_44 = uStack_a4;
                uStack_40 = (undefined4)uStack_a0;
                uStack_3c = uStack_a0._4_4_;
                FUN_1805899a0(lStack_c0,uVar9,&uStack_48,0);
              }
              iVar10 = iVar10 + 1;
            }
            goto code_r0x00018058b75c;
          }
          goto code_r0x00018058b761;
        }
        goto code_r0x00018058b766;
      }
      goto code_r0x00018058b76b;
    }
    goto code_r0x00018058b770;
  }
  goto code_r0x00018058b775;
code_r0x00018058b725:
  FUN_1803155c0();
code_r0x00018058b72a:
  FUN_1803155d0();
code_r0x00018058b72f:
  FUN_1803155d0();
code_r0x00018058b734:
  FUN_1803155d0();
code_r0x00018058b739:
  FUN_1803155d0();
code_r0x00018058b73e:
  FUN_1803155d0();
code_r0x00018058b743:
  FUN_1803155d0();
code_r0x00018058b748:
  FUN_1803155d0();
code_r0x00018058b74d:
  FUN_1803155d0();
code_r0x00018058b752:
  FUN_1803155d0();
code_r0x00018058b757:
  FUN_1803155d0();
code_r0x00018058b75c:
  FUN_1803155d0();
code_r0x00018058b761:
  FUN_1803155d0();
code_r0x00018058b766:
  FUN_1803155d0();
code_r0x00018058b76b:
  FUN_1803155d0();
code_r0x00018058b770:
  FUN_1803155d0();
code_r0x00018058b775:
  uVar7 = func_0x0001803153a0(0x1832c4538);
  uVar7 = func_0x000180314710(uVar7,5);
  FUN_180002480(uVar7);
  uVar9 = func_0x0001803153a0(0x1832cc918);
  FUN_1800024a0(uVar7,0,uVar9);
  uVar9 = FUN_18189c240(aiStackX_8,0);
  FUN_180002480(uVar7);
  FUN_1800024a0(uVar7,1,uVar9);
  FUN_180002480(uVar7);
  uVar9 = func_0x0001803153a0(0x1832cdcc0);
  FUN_1800024a0(uVar7,2,uVar9);
  auStackX_18[0] = 1;
  uVar9 = FUN_18189c240(auStackX_18,0);
  FUN_180002480(uVar7);
  FUN_1800024a0(uVar7,3,uVar9);
  FUN_180002480(uVar7);
  uVar9 = func_0x0001803153a0(0x1832f3ff8);
  FUN_1800024a0(uVar7,4,uVar9);
  uVar7 = FUN_181703260(uVar7,0);
  uVar9 = func_0x0001803153a0(0x1833220d8);
  uVar9 = func_0x000180315580(uVar9);
  FUN_181e29d20(uVar9,uVar7,0);
  uVar7 = func_0x0001803153a0(0x1832d57c0);
  FUN_180315590(uVar9,uVar7);
code_r0x00018058b8a2:
  FUN_1803155d0();
  FUN_180311490();
  FUN_180311490();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  lVar4 = (*pcVar2)();
  return lVar4;
}

