// UnionWindow__MostraMembros__1806c69b0 @ 0x1806c69b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnionWindow__MostraMembros__1806c69b0(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined4 auStackX_18 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 in_stack_fffffffffffffff0;
  
  if (cRam00000001834b3f95 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<string,int,int>>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<string,int,int>>.get_Item);
    FUN_180315380(TI_SparkCanal);
    cRam00000001834b3f95 = '\x01';
  }
  if (*(char *)(param_1 + 0xdc) != '\0') {
    *(undefined1 *)(param_1 + 0xdc) = 0;
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
    plVar1 = *(longlong **)(param_1 + 0x88);
    uVar6 = 0;
    uVar7 = 0;
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
      lVar5 = *plVar1;
      (**(code **)(lVar5 + 0xe48))
                (plVar1,*(undefined8 *)(*(longlong *)(TI_SparkCanal + 0xb8) + 8),
                 *(undefined8 *)(lVar5 + 0xe50),lVar5,uVar6,uVar7);
      plVar1 = *(longlong **)(param_1 + 0x90);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"\"Party Leader's Choice\"",*(undefined8 *)(*plVar1 + 0xe50))
        ;
        plVar1 = *(longlong **)(param_1 + 0x98);
        if (cRam00000001834b33c5 == '\0') {
          FUN_180315380(TI_SparkCanal);
          cRam00000001834b33c5 = '\x01';
        }
        if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
          func_0x000180315660(TI_SparkCanal);
        }
        if (*(longlong *)(*(longlong *)(TI_SparkCanal + 0xb8) + 0x18) != 0) {
          uVar6 = func_0x000180314670(_DAT_1834c6268,&stack0x00000008);
          if (cRam00000001834b3fe6 == '\0') {
            FUN_180315380(TI_SparkCanal);
            cRam00000001834b3fe6 = '\x01';
          }
          if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
            func_0x000180315660(TI_SparkCanal);
          }
          auStackX_18[0] = *(undefined4 *)(*(longlong *)(TI_SparkCanal + 0xb8) + 0x10);
          uVar7 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
          uVar6 = System_String__Format(LIT_"'{0} parties / {1} members'",uVar6,uVar7,0);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0xe48))(plVar1,uVar6,*(undefined8 *)(*plVar1 + 0xe50));
            plVar1 = *(longlong **)(param_1 + 0xa0);
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0xe48))
                        (plVar1,LIT_"'Party Leader'",*(undefined8 *)(*plVar1 + 0xe50));
              plVar1 = *(longlong **)(param_1 + 0xa8);
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0xe48))
                          (plVar1,LIT_"'Members'",*(undefined8 *)(*plVar1 + 0xe50));
                if (*(longlong *)(param_1 + 0xb0) != 0) {
                  UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xb0),0);
                  iVar9 = *(int *)(param_1 + 0xd8);
                  if (cRam00000001834b33c5 == '\0') {
                    FUN_180315380(TI_SparkCanal);
                    cRam00000001834b33c5 = '\x01';
                  }
                  if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  lVar5 = *(longlong *)(*(longlong *)(TI_SparkCanal + 0xb8) + 0x18);
                  if (lVar5 != 0) {
                    if (*(int *)(lVar5 + 0x18) <= iVar9) {
                      *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
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
                      lVar5 = *(longlong *)(*(longlong *)(TI_SparkCanal + 0xb8) + 0x18);
                      if (lVar5 == 0) goto DAT_1806c7575;
                      if (*(int *)(lVar5 + 0x18) <= iVar9) break;
                      lVar5 = func_0x000180315580(TI_UnionWindow.<>c__DisplayClass27_0);
                      Gear__UpdateWeaponType__1803dadf0(lVar5,0);
                      if (lVar5 == 0) goto DAT_1806c7575;
                      *(longlong *)(lVar5 + 0x18) = param_1;
                      func_0x000180314690(lVar5 + 0x18,param_1);
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
                      FUN_180bbaf80(&uStack_28,lVar8,iVar9,MR_System.Collections.Generic.List<System.ValueTuple<string,int,int>>.get_Item);
                      uVar7 = CONCAT44(uStack_24,uStack_28);
                      *(int *)(lVar5 + 0x10) = iVar9;
                      uVar6 = System_Int32__ToString(&stack0xffffffffffffffd4,0);
                      lVar8 = UnionWindow__Linha(uVar7,uVar6,0);
                      if (iVar9 == *(int *)(param_1 + 0xd8)) {
                        if (lVar8 == 0) goto DAT_1806c7575;
                        UnityEngine_UIElements_VisualElement__AddToClassList
                                  (lVar8,LIT_"'escolhida'",0);
                        uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                        FUN_18055b980(uVar6,lVar5,MD_UnionWindow.__c__DisplayClass27_0._Redesenha_b__0,0);
                      }
                      else {
                        uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                        FUN_18055b980(uVar6,lVar5,MD_UnionWindow.__c__DisplayClass27_0._Redesenha_b__0,0);
                        if (lVar8 == 0) goto DAT_1806c7575;
                      }
                      FUN_180990d50(lVar8,uVar6,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
                      if (*(longlong *)(param_1 + 0xb0) == 0) goto DAT_1806c7575;
                      UnityEngine_UIElements_VisualElement__Add
                                (*(longlong *)(param_1 + 0xb0),lVar8,0);
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
                    lVar5 = *(longlong *)(param_1 + 0xc0);
                    if (cRam00000001834b3f9d == '\0') {
                      FUN_180315380(TI_UnityEngine.UIElements.IStyle);
                      FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                      cRam00000001834b3f9d = '\x01';
                    }
                    if (lVar5 != 0) {
                      lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                      uVar6 = FUN_180eb5810(bVar3 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                      if (lVar5 != 0) {
                        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                        lVar5 = *(longlong *)(param_1 + 200);
                        if (cRam00000001834b3f9d == '\0') {
                          FUN_180315380(TI_UnityEngine.UIElements.IStyle);
                          FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                          cRam00000001834b3f9d = '\x01';
                        }
                        if (lVar5 != 0) {
                          lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                          uVar6 = FUN_180eb5810(bVar3 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                          if (lVar5 != 0) {
                            FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                            if (cVar4 == '\0') {
                              bVar3 = 0;
                            }
                            else {
                              bVar3 = bVar3 ^ 1;
                            }
                            lVar5 = *(longlong *)(param_1 + 0xd0);
                            if (cRam00000001834b3f9d == '\0') {
                              FUN_180315380(TI_UnityEngine.UIElements.IStyle);
                              FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                              cRam00000001834b3f9d = '\x01';
                            }
                            if (lVar5 != 0) {
                              lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                              uVar6 = FUN_180eb5810(bVar3 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                              if (lVar5 != 0) {
                                FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                lVar5 = *(longlong *)(param_1 + 0xb8);
                                if (cRam00000001834b3f9d == '\0') {
                                  FUN_180315380(TI_UnityEngine.UIElements.IStyle);
                                  FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                  cRam00000001834b3f9d = '\x01';
                                }
                                if (lVar5 != 0) {
                                  lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                                  uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                  if (lVar5 != 0) {
                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
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
  if (-1 < *(int *)(param_1 + 0xd8)) {
    iVar9 = *(int *)(param_1 + 0xd8);
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
    lVar5 = *(longlong *)(*(longlong *)(TI_SparkCanal + 0xb8) + 0x18);
    if (lVar5 == 0) {
DAT_1806c6adc:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iVar9 < *(int *)(lVar5 + 0x18)) {
      if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = FUN_1804b45a0(0);
      if (lVar5 == 0) goto DAT_1806c6adc;
      FUN_180bbaf80(&stack0xffffffffffffffe8,lVar5,*(undefined4 *)(param_1 + 0xd8),
                    MR_System.Collections.Generic.List<System.ValueTuple<string,int,int>>.get_Item);
      SparkCanal__PedeMembros(in_stack_fffffffffffffff0,0);
    }
  }
  return;
}

