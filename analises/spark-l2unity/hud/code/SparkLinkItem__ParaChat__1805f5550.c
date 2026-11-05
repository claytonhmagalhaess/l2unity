// SparkLinkItem__ParaChat__1805f5550 @ 0x1805f5550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLinkItem__ParaChat__1805f5550(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  int aiStackX_8 [2];
  int aiStackX_20 [2];
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int aiStack_40 [2];
  
  if (cRam00000001834b3b47 == '\0') {
    FUN_180315380(TI_object__);
    FUN_180315380(TI_SparkLinkItem);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(LIT_"'#F2C94C'");
    FUN_180315380(LIT_"'item:'");
    FUN_180315380(LIT_"'<color=#808080>[Unknown item]</color>'");
    FUN_180315380(LIT_"'<link=\"{0}{1},{2},{3},{4}\"><color={5}><u>['");
    FUN_180315380(LIT_"']</u></color></link>'");
    cRam00000001834b3b47 = '\x01';
  }
  aiStackX_20[0] = 0;
  aiStackX_8[0] = 0;
  uStack_54 = 0;
  iStack_58 = 0;
  cVar2 = func_0x000181707e50(param_1,0);
  if (cVar2 == '\0') {
    if (param_1 == 0) goto code_r0x0001805f5bce;
    iVar3 = func_0x0001817079f0(param_1,8,0);
    if (-1 < iVar3) {
      lVar4 = System_String__Split(param_1,8,0,0);
      iVar3 = *(int *)(param_1 + 0x10);
      plVar5 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
      func_0x000181716710(plVar5,iVar3 + 0x40,0);
      if (lVar4 != 0) {
        uVar10 = 0;
code_r0x0001805f5676:
        do {
          if (*(int *)(lVar4 + 0x18) <= (int)uVar10) goto code_r0x0001805f5b7e;
          if ((uVar10 & 1) == 0) {
            if (*(uint *)(lVar4 + 0x18) <= uVar10) goto code_r0x0001805f5c40;
            if ((param_2 == 0) ||
               (uVar9 = (**(code **)(param_2 + 0x18))
                                  (*(undefined8 *)(param_2 + 0x40),
                                   *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar10 * 8),
                                   *(undefined8 *)(param_2 + 0x28)), plVar5 == (longlong *)0x0))
            break;
            System_Text_StringBuilder__Append(plVar5,uVar9,0);
          }
          else if ((int)uVar10 < *(int *)(lVar4 + 0x18) + -1) {
            if (*(uint *)(lVar4 + 0x18) <= uVar10) goto code_r0x0001805f5c40;
            lVar6 = *(longlong *)(lVar4 + 0x20 + (longlong)(int)uVar10 * 8);
            if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
              func_0x000180315660();
            }
            if (cRam00000001834b3b4c == '\0') {
              FUN_180315380(LIT_"'ID='");
              cRam00000001834b3b4c = '\x01';
            }
            iStack_58 = 0;
            uStack_54 = 0;
            aiStackX_8[0] = 0;
            aiStackX_20[0] = 0;
            if ((lVar6 != 0) &&
               (cVar2 = System_String__StartsWith(lVar6,LIT_"'ID='",0), cVar2 != '\0')) {
              if ((LIT_"'ID='" == 0) ||
                 ((lVar6 = func_0x00018170c060(lVar6,*(undefined4 *)(LIT_"'ID='" + 0x10)),
                  lVar6 == 0 || (lVar6 = System_String__Split(lVar6,0x2c,0,0), lVar6 == 0)))) break;
              if ((*(int *)(lVar6 + 0x18) == 4) || (*(int *)(lVar6 + 0x18) == 5)) {
                if (*(uint *)(lVar6 + 0x18) < 2) {
code_r0x0001805f5c40:
                  FUN_1803155c0();
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                cVar2 = System_Int32__TryParse(*(undefined8 *)(lVar6 + 0x28),aiStackX_20);
                if ((cVar2 != '\0') && (0 < aiStackX_20[0])) {
                  if (*(uint *)(lVar6 + 0x18) < 3) goto code_r0x0001805f5c40;
                  cVar2 = System_Int32__TryParse(*(undefined8 *)(lVar6 + 0x30),aiStackX_8);
                  if (cVar2 != '\0') {
                    if (*(uint *)(lVar6 + 0x18) < 4) goto code_r0x0001805f5c40;
                    cVar2 = System_Int32__TryParse(*(undefined8 *)(lVar6 + 0x38),&uStack_54);
                    if (cVar2 != '\0') {
                      if (*(uint *)(lVar6 + 0x18) != 4) {
                        if (*(uint *)(lVar6 + 0x18) < 5) goto code_r0x0001805f5c40;
                        cVar2 = System_Int32__TryParse(*(undefined8 *)(lVar6 + 0x40),&iStack_58);
                        if (cVar2 == '\0') goto code_r0x0001805f5b17;
                      }
                      plVar7 = (longlong *)func_0x000180314710(TI_object__,6);
                      if (plVar7 == (longlong *)0x0) {
code_r0x0001805f5c3a:
                        FUN_1803155d0();
                        pcVar1 = (code *)swi(3);
                        (*pcVar1)();
                        return;
                      }
                      if ((LIT_"'item:'" != 0) &&
                         (lVar6 = func_0x0001803146b0(LIT_"'item:'",
                                                      *(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
                      {
                        uVar9 = func_0x000180314f80();
                        FUN_180315590(uVar9,0);
                        pcVar1 = (code *)swi(3);
                        (*pcVar1)();
                        return;
                      }
                      lVar6 = LIT_"'item:'";
                      if ((int)plVar7[3] != 0) {
                        plVar7[4] = LIT_"'item:'";
                        func_0x000180314690(plVar7 + 4,lVar6);
                        iStack_50 = aiStackX_20[0];
                        lVar6 = func_0x000180314670(_DAT_1834c6268,&iStack_50);
                        if ((lVar6 != 0) &&
                           (lVar8 = func_0x0001803146b0(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar8 == 0)) {
                          uVar9 = func_0x000180314f80();
                          FUN_180315590(uVar9,0);
                          pcVar1 = (code *)swi(3);
                          (*pcVar1)();
                          return;
                        }
                        if (1 < *(uint *)(plVar7 + 3)) {
                          plVar7[5] = lVar6;
                          func_0x000180314690(plVar7 + 5,lVar6);
                          iStack_4c = aiStackX_8[0];
                          lVar6 = func_0x000180314670(_DAT_1834c6268,&iStack_4c);
                          if ((lVar6 != 0) &&
                             (lVar8 = func_0x0001803146b0(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                             lVar8 == 0)) {
                            uVar9 = func_0x000180314f80();
                            FUN_180315590(uVar9,0);
                            pcVar1 = (code *)swi(3);
                            (*pcVar1)();
                            return;
                          }
                          if (2 < *(uint *)(plVar7 + 3)) {
                            plVar7[6] = lVar6;
                            func_0x000180314690(plVar7 + 6,lVar6);
                            uStack_48 = uStack_54;
                            lVar6 = func_0x000180314670(_DAT_1834c6268,&uStack_48);
                            if ((lVar6 != 0) &&
                               (lVar8 = func_0x0001803146b0(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                               lVar8 == 0)) {
                              uVar9 = func_0x000180314f80();
                              FUN_180315590(uVar9,0);
                              pcVar1 = (code *)swi(3);
                              (*pcVar1)();
                              return;
                            }
                            if (3 < *(uint *)(plVar7 + 3)) {
                              plVar7[7] = lVar6;
                              func_0x000180314690(plVar7 + 7,lVar6);
                              iStack_44 = iStack_58;
                              lVar6 = func_0x000180314670(_DAT_1834c6268,&iStack_44);
                              if ((lVar6 != 0) &&
                                 (lVar8 = func_0x0001803146b0(lVar6,*(undefined8 *)(*plVar7 + 0x40))
                                 , lVar8 == 0)) {
                                uVar9 = func_0x000180314f80();
                                FUN_180315590(uVar9,0);
                                pcVar1 = (code *)swi(3);
                                (*pcVar1)();
                                return;
                              }
                              if (4 < *(uint *)(plVar7 + 3)) {
                                plVar7[8] = lVar6;
                                func_0x000180314690(plVar7 + 8,lVar6);
                                if ((LIT_"'#F2C94C'" != 0) &&
                                   (lVar6 = func_0x0001803146b0(LIT_"'#F2C94C'",
                                                                *(undefined8 *)(*plVar7 + 0x40)),
                                   lVar6 == 0)) {
                                  uVar9 = func_0x000180314f80();
                                  FUN_180315590(uVar9,0);
                                  pcVar1 = (code *)swi(3);
                                  (*pcVar1)();
                                  return;
                                }
                                lVar6 = LIT_"'#F2C94C'";
                                if (5 < *(uint *)(plVar7 + 3)) {
                                  plVar7[9] = LIT_"'#F2C94C'";
                                  func_0x000180314690(plVar7 + 9,lVar6);
                                  uVar9 = System_String__Format(LIT_"'<link=\"{0}{1},{2},{3},{4}\"><color={5}><u>['",plVar7);
                                  if (plVar5 == (longlong *)0x0) goto code_r0x0001805f5c3a;
                                  System_Text_StringBuilder__Append(plVar5,uVar9);
                                  if (0 < aiStackX_8[0]) {
                                    lVar6 = System_Text_StringBuilder__Append(plVar5,0x2b);
                                    if ((lVar6 == 0) ||
                                       (lVar6 = System_Text_StringBuilder__Append
                                                          (lVar6,aiStackX_8[0]), lVar6 == 0)) break;
                                    System_Text_StringBuilder__Append(lVar6,0x20);
                                  }
                                  uVar9 = SparkUI__NomeDoItem(aiStackX_20[0],0);
                                  lVar6 = System_Text_StringBuilder__Append(plVar5,uVar9);
                                  iVar3 = iStack_58;
                                  if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
                                    func_0x000180315660();
                                  }
                                  if (cRam00000001834b3b4b == '\0') {
                                    FUN_180315380(LIT_"''");
                                    FUN_180315380(LIT_"' ({0:n0})'");
                                    cRam00000001834b3b4b = '\x01';
                                  }
                                  uVar9 = LIT_"''";
                                  if (1 < iVar3) {
                                    aiStack_40[0] = iVar3;
                                    uVar9 = func_0x000180314670(_DAT_1834c6268,aiStack_40);
                                    uVar9 = System_String__Format(LIT_"' ({0:n0})'",uVar9);
                                  }
                                  if ((lVar6 == 0) ||
                                     (lVar6 = System_Text_StringBuilder__Append(lVar6,uVar9),
                                     lVar6 == 0)) break;
                                  System_Text_StringBuilder__Append(lVar6,LIT_"']</u></color></link>'");
                                  uVar10 = uVar10 + 1;
                                  goto code_r0x0001805f5676;
                                }
                              }
                            }
                          }
                        }
                      }
                      FUN_1803155c0();
                      pcVar1 = (code *)swi(3);
                      (*pcVar1)();
                      return;
                    }
                  }
                }
              }
            }
code_r0x0001805f5b17:
            if (plVar5 == (longlong *)0x0) break;
            System_Text_StringBuilder__Append(plVar5,LIT_"'<color=#808080>[Unknown item]</color>'");
            uVar10 = uVar10 + 1;
            goto code_r0x0001805f5676;
          }
          uVar10 = uVar10 + 1;
        } while( true );
      }
      goto code_r0x0001805f5bce;
    }
  }
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x18))
              (*(undefined8 *)(param_2 + 0x40),param_1,*(undefined8 *)(param_2 + 0x28));
    return;
  }
code_r0x0001805f5bce:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_r0x0001805f5b7e:
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    return;
  }
  goto code_r0x0001805f5bce;
}

