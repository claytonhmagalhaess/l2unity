// UnionWindow__Update__1806c7b40 @ 0x1806c7b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnionWindow__Update__1806c7b40(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_18 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (cRam00000001834b3f92 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<string,int,int>>.get_Count);
    FUN_180315380(TI_SparkCanal);
    cRam00000001834b3f92 = '\x01';
  }
  if ((*(char *)((longlong)param_1 + 0xde) == '\0') || (*(char *)((longlong)param_1 + 0xdd) == '\0')
     ) {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0xde) = 0;
  if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b33c0 == '\0') {
    FUN_180315380(TI_SparkCanal);
    cRam00000001834b33c0 = '\x01';
  }
  if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(char **)(TI_SparkCanal + 0xb8) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001806c7c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,1,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if ((char)param_1[7] != '\0') {
    if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar8 = FUN_1804b45a0(0);
    if (lVar8 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)(lVar8 + 0x18) == 0) {
      (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  if (cRam00000001834b3f94 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>,0);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<string,int,int>>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<string,int,int>>.get_Item);
    FUN_180315380(TI_SparkCanal);
    FUN_180315380(TI_SparkParty);
    FUN_180315380(MD_UnionWindow.__c__DisplayClass27_0._Redesenha_b__0);
    FUN_180315380(TI_UnionWindow.<>c__DisplayClass27_0);
    FUN_180315380(LIT_"'Members'");
    FUN_180315380(LIT_"\"Party Leader's Choice\"");
    FUN_180315380(LIT_"'{0} parties / {1} members'");
    FUN_180315380(LIT_"'escolhida'");
    FUN_180315380(LIT_"'Party Leader'");
    cRam00000001834b3f94 = '\x01';
  }
  plVar1 = (longlong *)param_1[0x11];
  uVar5 = 0;
  uVar6 = 0;
  if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b33c1 == '\0') {
    FUN_180315380(TI_SparkCanal);
    cRam00000001834b33c1 = '\x01';
  }
  if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (plVar1 != (longlong *)0x0) {
    lVar8 = *plVar1;
    (**(code **)(lVar8 + 0xe48))
              (plVar1,*(undefined8 *)(*(longlong *)(TI_SparkCanal + 0xb8) + 8),
               *(undefined8 *)(lVar8 + 0xe50),lVar8,uVar5,uVar6);
    plVar1 = (longlong *)param_1[0x12];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"\"Party Leader's Choice\"",*(undefined8 *)(*plVar1 + 0xe50));
      plVar1 = (longlong *)param_1[0x13];
      if (cRam00000001834b33c5 == '\0') {
        FUN_180315380(TI_SparkCanal);
        cRam00000001834b33c5 = '\x01';
      }
      if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
        func_0x000180315660(TI_SparkCanal);
      }
      lVar8 = *(longlong *)(*(longlong *)(TI_SparkCanal + 0xb8) + 0x18);
      if (lVar8 != 0) {
        auStackX_8[0] = *(undefined4 *)(lVar8 + 0x18);
        uVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
        if (cRam00000001834b3fe6 == '\0') {
          FUN_180315380(TI_SparkCanal);
          cRam00000001834b3fe6 = '\x01';
        }
        if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
          func_0x000180315660(TI_SparkCanal);
        }
        auStackX_18[0] = *(undefined4 *)(*(longlong *)(TI_SparkCanal + 0xb8) + 0x10);
        uVar6 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
        uVar5 = System_String__Format(LIT_"'{0} parties / {1} members'",uVar5,uVar6,0);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0xe48))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 0xe50));
          plVar1 = (longlong *)param_1[0x14];
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0xe48))
                      (plVar1,LIT_"'Party Leader'",*(undefined8 *)(*plVar1 + 0xe50));
            plVar1 = (longlong *)param_1[0x15];
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0xe48))
                        (plVar1,LIT_"'Members'",*(undefined8 *)(*plVar1 + 0xe50));
              if (param_1[0x16] != 0) {
                UnityEngine_UIElements_VisualElement__Clear(param_1[0x16],0);
                lVar8 = param_1[0x1b];
                if (cRam00000001834b33c5 == '\0') {
                  FUN_180315380(TI_SparkCanal);
                  cRam00000001834b33c5 = '\x01';
                }
                if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
                  func_0x000180315660();
                }
                lVar7 = *(longlong *)(*(longlong *)(TI_SparkCanal + 0xb8) + 0x18);
                if (lVar7 != 0) {
                  if (*(int *)(lVar7 + 0x18) <= (int)lVar8) {
                    *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
                  }
                  iVar9 = 0;
                  while( true ) {
                    if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    if (cRam00000001834b33c5 == '\0') {
                      FUN_180315380(TI_SparkCanal);
                      cRam00000001834b33c5 = '\x01';
                    }
                    if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    lVar8 = *(longlong *)(*(longlong *)(TI_SparkCanal + 0xb8) + 0x18);
                    if (lVar8 == 0) goto DAT_1806c7575;
                    if (*(int *)(lVar8 + 0x18) <= iVar9) break;
                    lVar8 = func_0x000180315580(TI_UnionWindow.<>c__DisplayClass27_0);
                    Gear__UpdateWeaponType__1803dadf0(lVar8,0);
                    if (lVar8 == 0) goto DAT_1806c7575;
                    *(longlong **)(lVar8 + 0x18) = param_1;
                    func_0x000180314690(lVar8 + 0x18,param_1);
                    if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    if (cRam00000001834b33c5 == '\0') {
                      FUN_180315380(TI_SparkCanal);
                      cRam00000001834b33c5 = '\x01';
                    }
                    if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    lVar7 = *(longlong *)(*(longlong *)(TI_SparkCanal + 0xb8) + 0x18);
                    if (lVar7 == 0) goto DAT_1806c7575;
                    FUN_180bbaf80(&uStack_28,lVar7,iVar9,MR_System.Collections.Generic.List<System.ValueTuple<string,int,int>>.get_Item);
                    uVar6 = CONCAT44(uStack_24,uStack_28);
                    *(int *)(lVar8 + 0x10) = iVar9;
                    uVar5 = System_Int32__ToString(&stack0xffffffffffffffd4,0);
                    lVar7 = UnionWindow__Linha(uVar6,uVar5,0);
                    if (iVar9 == (int)param_1[0x1b]) {
                      if (lVar7 == 0) goto DAT_1806c7575;
                      UnityEngine_UIElements_VisualElement__AddToClassList
                                (lVar7,LIT_"'escolhida'",0);
                      uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                      FUN_18055b980(uVar5,lVar8,MD_UnionWindow.__c__DisplayClass27_0._Redesenha_b__0,0);
                    }
                    else {
                      uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                      FUN_18055b980(uVar5,lVar8,MD_UnionWindow.__c__DisplayClass27_0._Redesenha_b__0,0);
                      if (lVar7 == 0) goto DAT_1806c7575;
                    }
                    FUN_180990d50(lVar7,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
                    if (param_1[0x16] == 0) goto DAT_1806c7575;
                    UnityEngine_UIElements_VisualElement__Add(param_1[0x16],lVar7,0);
                    iVar9 = iVar9 + 1;
                  }
                  if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  bVar3 = SparkCanal__get_SouLiderDoCanal(0);
                  if (*(int *)(TI_SparkParty + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  cVar4 = SparkParty__get_SouLider(0);
                  lVar8 = param_1[0x18];
                  if (cRam00000001834b3f9d == '\0') {
                    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
                    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                    cRam00000001834b3f9d = '\x01';
                  }
                  if (lVar8 != 0) {
                    lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                    uVar5 = FUN_180eb5810(bVar3 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                    if (lVar8 != 0) {
                      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
                      lVar8 = param_1[0x19];
                      if (cRam00000001834b3f9d == '\0') {
                        FUN_180315380(TI_UnityEngine.UIElements.IStyle);
                        FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                        cRam00000001834b3f9d = '\x01';
                      }
                      if (lVar8 != 0) {
                        lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                        uVar5 = FUN_180eb5810(bVar3 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                        if (lVar8 != 0) {
                          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
                          if (cVar4 == '\0') {
                            bVar3 = 0;
                          }
                          else {
                            bVar3 = bVar3 ^ 1;
                          }
                          lVar8 = param_1[0x1a];
                          if (cRam00000001834b3f9d == '\0') {
                            FUN_180315380(TI_UnityEngine.UIElements.IStyle);
                            FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                            cRam00000001834b3f9d = '\x01';
                          }
                          if (lVar8 != 0) {
                            lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                            uVar5 = FUN_180eb5810(bVar3 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                            if (lVar8 != 0) {
                              FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
                              lVar8 = param_1[0x17];
                              if (cRam00000001834b3f9d == '\0') {
                                FUN_180315380(TI_UnityEngine.UIElements.IStyle);
                                FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                cRam00000001834b3f9d = '\x01';
                              }
                              if (lVar8 != 0) {
                                lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                                uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                if (lVar8 != 0) {
                                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
DAT_1806c7575:
                  FUN_1803155d0();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
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

