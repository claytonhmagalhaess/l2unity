// CharSelectWindow__SelectSlot__18078d9b0 @ 0x18078d9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharSelectWindow__SelectSlot__18078d9b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_10 [4];
  undefined4 auStackX_20 [2];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float afStack_c0 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 auStack_a0 [56];
  longlong lStack_68;
  longlong lStack_60;
  undefined1 uStack_57;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  
  if (cRam00000001834b44a8 == '\0') {
    FUN_180315380(TI_CharacterClass);
    FUN_180315380(MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item);
    FUN_180315380(LIT_"'0.00%'");
    FUN_180315380(LIT_"'%'");
    FUN_180315380(LIT_"'{0}/{1}'");
    FUN_180315380(LIT_"'0.00'");
    FUN_180315380(LIT_"'0/0'");
    FUN_180315380(LIT_"'??'");
    FUN_180315380(LIT_"'0'");
    cRam00000001834b44a8 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    if (param_2 == *(int *)(*(longlong *)(param_1 + 0x90) + 0x70)) {
      return;
    }
    if (param_2 == -1) {
      plVar1 = *(longlong **)(param_1 + 0xa0);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"'0'",*(undefined8 *)(*plVar1 + 0xe50));
        plVar1 = *(longlong **)(param_1 + 0xa8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0xe48))
                    (plVar1,LIT_"'??'",*(undefined8 *)(*plVar1 + 0xe50));
          plVar1 = *(longlong **)(param_1 + 0xb0);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0xe48))
                      (plVar1,LIT_"'0/0'",*(undefined8 *)(*plVar1 + 0xe50));
            plVar1 = *(longlong **)(param_1 + 0xb8);
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0xe48))
                        (plVar1,LIT_"'0/0'",*(undefined8 *)(*plVar1 + 0xe50));
              plVar1 = *(longlong **)(param_1 + 0xc0);
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0xe48))
                          (plVar1,LIT_"'0.00%'",*(undefined8 *)(*plVar1 + 0xe50));
                plVar1 = *(longlong **)(param_1 + 200);
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0xe48))
                            (plVar1,LIT_"'0'",*(undefined8 *)(*plVar1 + 0xe50));
                  plVar1 = *(longlong **)(param_1 + 0xd0);
                  if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 0xe48))
                              (plVar1,LIT_"'0'",*(undefined8 *)(*plVar1 + 0xe50));
                    if (*(longlong *)(param_1 + 0x90) != 0) {
                      ArrowInputManipulator__ClearInput__1807a9610(*(longlong *)(param_1 + 0x90),0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x98);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) <= param_2) {
          return;
        }
        if (lVar5 != 0) {
          plVar1 = *(longlong **)(param_1 + 0xa0);
          FUN_1815f9940(auStack_a0,lVar5,param_2,MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item);
          if (lStack_60 != 0) {
            auStackX_10[0] = *(undefined4 *)(lStack_60 + 0x10);
            uVar3 = System_Int32__ToString(auStackX_10,0);
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
              if (*(longlong *)(param_1 + 0x98) != 0) {
                plVar1 = *(longlong **)(param_1 + 0xa8);
                FUN_1815f9940(auStack_a0,*(longlong *)(param_1 + 0x98),param_2,MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item)
                ;
                uStack_b8 = TI_CharacterClass;
                uStack_a8 = uStack_57;
                uStack_b0 = 0xffffffffffffffff;
                uVar3 = System_Enum__ToString(&uStack_b8,0);
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                  if (*(longlong *)(param_1 + 0x98) != 0) {
                    plVar1 = *(longlong **)(param_1 + 0xb0);
                    FUN_1815f9940(auStack_a0,*(longlong *)(param_1 + 0x98),param_2,
                                  MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item);
                    if (lStack_68 != 0) {
                      auStackX_8[0] = *(undefined4 *)(lStack_68 + 0x10);
                      uVar3 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
                      if ((*(longlong *)(param_1 + 0x98) != 0) &&
                         (FUN_1815f9940(auStack_a0,*(longlong *)(param_1 + 0x98),param_2,
                                        MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item), lStack_60 != 0)) {
                        auStackX_20[0] = *(undefined4 *)(lStack_60 + 0x38);
                        uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
                        uVar3 = System_String__Format(LIT_"'{0}/{1}'",uVar3,uVar4,0);
                        if (plVar1 != (longlong *)0x0) {
                          (**(code **)(*plVar1 + 0xe48))
                                    (plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                          if (*(longlong *)(param_1 + 0x98) != 0) {
                            plVar1 = *(longlong **)(param_1 + 0xb8);
                            FUN_1815f9940(auStack_a0,*(longlong *)(param_1 + 0x98),param_2,
                                          MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item);
                            if (lStack_68 != 0) {
                              uStack_c8 = *(undefined4 *)(lStack_68 + 0x14);
                              uVar3 = func_0x000180314670(_DAT_1834c6268,&uStack_c8);
                              if ((*(longlong *)(param_1 + 0x98) != 0) &&
                                 (FUN_1815f9940(auStack_a0,*(longlong *)(param_1 + 0x98),param_2,
                                                MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item), lStack_60 != 0)) {
                                uStack_c4 = *(undefined4 *)(lStack_60 + 0x3c);
                                uVar4 = func_0x000180314670(_DAT_1834c6268,&uStack_c4);
                                uVar3 = System_String__Format(LIT_"'{0}/{1}'",uVar3,uVar4,0);
                                if (plVar1 != (longlong *)0x0) {
                                  (**(code **)(*plVar1 + 0xe48))
                                            (plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                                  if (*(longlong *)(param_1 + 0x98) != 0) {
                                    plVar1 = *(longlong **)(param_1 + 0xc0);
                                    FUN_1815f9940(auStack_a0,*(longlong *)(param_1 + 0x98),param_2,
                                                  MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item);
                                    afStack_c0[0] = fStack_4c * 100.0;
                                    uVar3 = System_Single__ToString(afStack_c0,LIT_"'0.00'",0);
                                    uVar3 = System_String__Concat(uVar3,LIT_"'%'",0);
                                    if (plVar1 != (longlong *)0x0) {
                                      (**(code **)(*plVar1 + 0xe48))
                                                (plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                                      if (*(longlong *)(param_1 + 0x98) != 0) {
                                        plVar1 = *(longlong **)(param_1 + 200);
                                        FUN_1815f9940(auStack_a0,*(longlong *)(param_1 + 0x98),
                                                      param_2,MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item);
                                        auStackX_10[0] = uStack_50;
                                        uVar3 = System_Int32__ToString(auStackX_10,0);
                                        if (plVar1 != (longlong *)0x0) {
                                          (**(code **)(*plVar1 + 0xe48))
                                                    (plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                                          if (*(longlong *)(param_1 + 0x98) != 0) {
                                            plVar1 = *(longlong **)(param_1 + 0xd0);
                                            FUN_1815f9940(auStack_a0,*(longlong *)(param_1 + 0x98),
                                                          param_2,MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item);
                                            auStackX_10[0] = uStack_48;
                                            uVar3 = System_Int32__ToString(auStackX_10,0);
                                            if (plVar1 != (longlong *)0x0) {
                                              (**(code **)(*plVar1 + 0xe48))
                                                        (plVar1,uVar3,
                                                         *(undefined8 *)(*plVar1 + 0xe50));
                                              if (cRam00000001834b44a9 == '\0') {
                                                FUN_180315380(TI_CharSelectWindow.<UpdateBars>d__26);
                                                cRam00000001834b44a9 = '\x01';
                                              }
                                              lVar5 = func_0x000180315580(TI_CharSelectWindow.<UpdateBars>d__26);
                                              Gear__UpdateWeaponType__1803dadf0(lVar5,0);
                                              *(undefined4 *)(lVar5 + 0x10) = 0;
                                              *(longlong *)(lVar5 + 0x20) = param_1;
                                              func_0x000180314690(lVar5 + 0x20,param_1);
                                              *(int *)(lVar5 + 0x28) = param_2;
                                              UnityEngine_MonoBehaviour__StartCoroutine
                                                        (param_1,lVar5,0);
                                              if (*(longlong *)(param_1 + 0x90) != 0) {
                                                ArrowInputManipulator__SelectIndex__1807a9b80
                                                          (*(longlong *)(param_1 + 0x90),param_2,0);
                                                return;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

