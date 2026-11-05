// SparkQuestWindow__MostraDetalhe__1806e2e00 @ 0x1806e2e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkQuestWindow__MostraDetalhe__1806e2e00(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int aiStackX_18 [2];
  undefined4 auStackX_20 [2];
  longlong lStack_138;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  undefined8 uStack_120;
  undefined4 *puStack_118;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  uint uStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong uStack_88;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [64];
  
  if (cRam00000001834b4066 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkQuests.Passo>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkQuests.Passo>.get_Item);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkQuests.Passo>.get_Keys);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<int>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkQuests.Ativa>.FindIndex);
    FUN_180315380(MR_System.Collections.Generic.List<int>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Sort);
    FUN_180315380(MR_System.Collections.Generic.List<int>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<SparkQuests.Ativa>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SparkQuests.Ativa>.get_Item);
    FUN_180315380(TI_System.Collections.Generic.List<int>);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_System.Predicate<SparkQuests.Ativa>);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkQuestWindow._MostraDetalhe_b__38_0);
    FUN_180315380(TI_SparkQuests);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Level {0}-{1}   ·   {2}'");
    FUN_180315380(LIT_"'No one-time quests in progress.'");
    FUN_180315380(LIT_"'Step '");
    FUN_180315380(LIT_"'Go to: '");
    FUN_180315380(LIT_"'You have no quests in progress.'");
    FUN_180315380(LIT_"'No repeatable quests in progress.'");
    FUN_180315380(LIT_"'Quest '");
    FUN_180315380(LIT_"'Select a quest on the left.'");
    FUN_180315380(LIT_"''");
    cRam00000001834b4066 = '\x01';
  }
  if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
    func_0x000180315660(TI_SparkQuests);
  }
  lVar9 = **(longlong **)(TI_SparkQuests + 0xb8);
  uVar8 = func_0x000180315580(TI_System.Predicate<SparkQuests.Ativa>);
  FUN_180d270e0(uVar8,param_1,MD_SparkQuestWindow._MostraDetalhe_b__38_0,0);
  if (lVar9 != 0) {
    uVar7 = FUN_180bac240(lVar9,uVar8,MR_System.Collections.Generic.List<SparkQuests.Ativa>.FindIndex);
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa8),0);
      uVar8 = FUN_180eb5810(~uVar7 >> 0x1f,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar9 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa0),0);
          uVar8 = FUN_180eb5810(uVar7 >> 0x1f,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
          if (lVar9 != 0) {
            FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
            plVar1 = *(longlong **)(param_1 + 0xa8);
            if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
              func_0x000180315660(TI_SparkQuests);
            }
            if (**(longlong **)(TI_SparkQuests + 0xb8) != 0) {
              uVar8 = LIT_"'You have no quests in progress.'";
              if (((*(int *)(**(longlong **)(TI_SparkQuests + 0xb8) + 0x18) != 0) &&
                  (uVar8 = LIT_"'No one-time quests in progress.'", *(int *)(param_1 + 0x11c) != 1)) &&
                 (uVar8 = LIT_"'No repeatable quests in progress.'", *(int *)(param_1 + 0x11c) != 2)) {
                uVar8 = LIT_"'Select a quest on the left.'";
              }
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0xe48))(plVar1,uVar8,*(undefined8 *)(*plVar1 + 0xe50));
                if ((int)uVar7 < 0) {
                  return;
                }
                if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
                  func_0x000180315660(TI_SparkQuests);
                }
                if (**(longlong **)(TI_SparkQuests + 0xb8) != 0) {
                  uStack_130 = FUN_180bbafe0(**(longlong **)(TI_SparkQuests + 0xb8),uVar7,
                                             MR_System.Collections.Generic.List<SparkQuests.Ativa>.get_Item);
                  lVar9 = SparkQuests__Info(uStack_130 & 0xffffffff,0);
                  aiStackX_18[0] = func_0x0001804c72a0(uStack_130._4_4_,0);
                  plVar1 = *(longlong **)(param_1 + 0xb0);
                  if (lVar9 == 0) {
                    uVar8 = System_Int32__ToString(&uStack_130,0);
                    uVar8 = System_String__Concat(LIT_"'Quest '",uVar8,0);
                  }
                  else {
                    uVar8 = *(undefined8 *)(lVar9 + 0x10);
                  }
                  if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 0xe48))(plVar1,uVar8,*(undefined8 *)(*plVar1 + 0xe50));
                    plVar1 = *(longlong **)(param_1 + 0xb8);
                    uVar8 = LIT_"''";
                    if (lVar9 != 0) {
                      auStackX_20[0] = *(undefined4 *)(lVar9 + 0x18);
                      uVar8 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
                      auStack_128[0] = *(undefined4 *)(lVar9 + 0x1c);
                      uVar10 = func_0x000180314670(_DAT_1834c6268,auStack_128);
                      uVar17 = *(undefined4 *)(lVar9 + 0x20);
                      if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar11 = SparkQuests__Tipo(uVar17,0);
                      uVar8 = System_String__Format(LIT_"'Level {0}-{1}   ·   {2}'",uVar8,uVar10,uVar11,0);
                    }
                    if (plVar1 != (longlong *)0x0) {
                      (**(code **)(*plVar1 + 0xe48))(plVar1,uVar8,*(undefined8 *)(*plVar1 + 0xe50));
                      lStack_138 = 0;
                      if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x50) != 0)) {
                        FUN_1812007b0(*(longlong *)(lVar9 + 0x50),aiStackX_18[0],&lStack_138,
                                      MR_System.Collections.Generic.Dictionary<int,SparkQuests.Passo>.TryGetValue);
                      }
                      plVar1 = *(longlong **)(param_1 + 0xc0);
                      if (lStack_138 == 0) {
                        uVar8 = System_Int32__ToString(aiStackX_18,0);
                        uVar8 = System_String__Concat(LIT_"'Step '",uVar8,0);
                      }
                      else {
                        uVar8 = *(undefined8 *)(lStack_138 + 0x10);
                      }
                      if (plVar1 != (longlong *)0x0) {
                        (**(code **)(*plVar1 + 0xe48))
                                  (plVar1,uVar8,*(undefined8 *)(*plVar1 + 0xe50));
                        plVar1 = *(longlong **)(param_1 + 200);
                        uVar8 = LIT_"''";
                        if ((lStack_138 != 0) &&
                           (cVar5 = func_0x000181707e50(*(undefined8 *)(lStack_138 + 0x20),0),
                           uVar8 = LIT_"''", cVar5 == '\0')) {
                          if (lStack_138 == 0) goto code_r0x0001806e3a32;
                          uVar8 = System_String__Concat
                                            (LIT_"'Go to: '",*(undefined8 *)(lStack_138 + 0x20)
                                             ,0);
                        }
                        if (plVar1 != (longlong *)0x0) {
                          (**(code **)(*plVar1 + 0xe48))
                                    (plVar1,uVar8,*(undefined8 *)(*plVar1 + 0xe50));
                          uVar8 = LIT_"''";
                          if (lStack_138 != 0) {
                            uVar8 = *(undefined8 *)(lStack_138 + 0x18);
                          }
                          plVar1 = *(longlong **)(param_1 + 0xd0);
                          if (plVar1 != (longlong *)0x0) {
                            (**(code **)(*plVar1 + 0xe48))
                                      (plVar1,uVar8,*(undefined8 *)(*plVar1 + 0xe50));
                            plVar1 = *(longlong **)(param_1 + 0xd8);
                            uVar8 = LIT_"''";
                            if (lVar9 != 0) {
                              uVar8 = *(undefined8 *)(lVar9 + 0x28);
                            }
                            if (plVar1 != (longlong *)0x0) {
                              (**(code **)(*plVar1 + 0xe48))
                                        (plVar1,uVar8,*(undefined8 *)(*plVar1 + 0xe50));
                              uVar8 = 0;
                              if (lStack_138 != 0) {
                                uVar8 = *(undefined8 *)(lStack_138 + 0x28);
                              }
                              *(undefined8 *)(param_1 + 0x130) = uVar8;
                              func_0x000180314690(param_1 + 0x130);
                              SparkQuestWindow__MontaItens__1806e2170(param_1,0);
                              uVar3 = uStack_130;
                              lVar12 = *(longlong *)(param_1 + 0xf0);
                              if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
                                func_0x000180315660();
                              }
                              uVar6 = SparkQuests__NoAlarme(uVar3 & 0xffffffff,0);
                              if (lVar12 != 0) {
                                (**(code **)(lVar12 + 0x18))
                                          (*(undefined8 *)(lVar12 + 0x40),uVar6,1,
                                           *(undefined8 *)(lVar12 + 0x28));
                                if ((lStack_138 == 0) || (*(longlong *)(lStack_138 + 0x30) == 0)) {
                                  bVar16 = false;
                                }
                                else {
                                  bVar16 = 1 < *(int *)(*(longlong *)(lStack_138 + 0x30) + 0x18);
                                }
                                lVar12 = *(longlong *)(param_1 + 0xf8);
                                if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
                                  func_0x000180315660();
                                }
                                if (cRam00000001834b33cf == '\0') {
                                  FUN_180315380(TI_SparkQuests);
                                  cRam00000001834b33cf = '\x01';
                                }
                                if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
                                  func_0x000180315660();
                                }
                                if (lVar12 != 0) {
                                  (**(code **)(lVar12 + 0x18))
                                            (*(undefined8 *)(lVar12 + 0x40),
                                             *(int *)(*(longlong *)(TI_SparkQuests + 0xb8) +
                                                     0x18) == (int)uStack_130,bVar16,
                                             *(undefined8 *)(lVar12 + 0x28));
                                  if (*(longlong *)(param_1 + 0xe0) != 0) {
                                    UnityEngine_UIElements_VisualElement__Clear
                                              (*(longlong *)(param_1 + 0xe0),0);
                                    if (lVar9 == 0) {
                                      return;
                                    }
                                    if (*(longlong *)(lVar9 + 0x50) == 0) {
                                      return;
                                    }
                                    uVar8 = FUN_18117fc80(*(undefined8 *)(lVar9 + 0x50),
                                                          MR_System.Collections.Generic.Dictionary<int,SparkQuests.Passo>.get_Keys);
                                    lVar12 = func_0x000180315580(TI_System.Collections.Generic.List<int>);
                                    FUN_181637b80(lVar12,uVar8,MR_System.Collections.Generic.List<int>..ctor);
                                    if (lVar12 != 0) {
                                      FUN_181632d60(lVar12,MR_System.Collections.Generic.List<int>.Sort);
                                      FUN_180be3fd0(&uStack_b8,lVar12,MR_System.Collections.Generic.List<int>.GetEnumerator);
                                      uStack_98 = uStack_b8;
                                      uStack_94 = uStack_b4;
                                      uStack_90 = uStack_b0;
                                      uStack_8c = uStack_ac;
                                      uStack_88 = (ulonglong)uStack_a8;
                                      uStack_120 = 0;
                                      puStack_118 = &uStack_98;
                                      while( true ) {
                                        do {
                                          cVar5 = FUN_1812f11f0(&uStack_98,MR_System.Collections.Generic.List<int>.MoveNext);
                                          uVar3 = uStack_88;
                                          if (cVar5 == '\0') {
                                            Gear__UpdateWeaponType__1803dadf0
                                                      (&uStack_98,MR_System.Collections.Generic.List<int>.Dispose);
                                            return;
                                          }
                                          iVar4 = (int)uStack_88;
                                          if (aiStackX_18[0] < (int)uStack_88) {
                                            Gear__UpdateWeaponType__1803dadf0
                                                      (&uStack_98,MR_System.Collections.Generic.List<int>.Dispose);
                                            return;
                                          }
                                          uVar17 = uStack_130._4_4_;
                                          if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
                                            func_0x000180315660();
                                          }
                                          cVar5 = SparkQuests__PassoFeito
                                                            (uVar17,uVar3 & 0xffffffff,0);
                                        } while ((iVar4 < aiStackX_18[0]) && (cVar5 == '\0'));
                                        lVar12 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                        UnityEngine_UIElements_VisualElement___ctor(lVar12,0);
                                        if (lVar12 == 0) goto code_r0x0001806e3a26;
                                        lVar13 = UnityEngine_UIElements_VisualElement__get_style
                                                           (lVar12,0);
                                        uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                        if (lVar13 == 0) break;
                                        FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar13,uVar8);
                                        lVar13 = UnityEngine_UIElements_VisualElement__get_style
                                                           (lVar12,0);
                                        uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                        if (lVar13 == 0) {
code_r0x0001806e3a1c:
                                          FUN_1803155d0();
                                          break;
                                        }
                                        FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar13,uVar8);
                                        lVar13 = UnityEngine_UIElements_VisualElement__get_style
                                                           (lVar12,0);
                                        puVar14 = (undefined8 *)
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (auStack_78,0x41900000,0);
                                        if (lVar13 == 0) {
code_r0x0001806e3a17:
                                          FUN_1803155d0();
                                          goto code_r0x0001806e3a1c;
                                        }
                                        uStack_108 = *puVar14;
                                        uStack_100 = *(undefined4 *)(puVar14 + 1);
                                        FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_108);
                                        if (iVar4 == aiStackX_18[0]) {
                                          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                            func_0x000180315660();
                                          }
                                          lVar13 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                          uVar17 = *(undefined4 *)(lVar13 + 0x60);
                                          uVar18 = *(undefined4 *)(lVar13 + 100);
                                          uVar19 = *(undefined4 *)(lVar13 + 0x68);
                                          uVar20 = *(undefined4 *)(lVar13 + 0x6c);
                                        }
                                        else {
                                          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                            func_0x000180315660();
                                          }
                                          lVar13 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                          uVar17 = *(undefined4 *)(lVar13 + 0x80);
                                          uVar18 = *(undefined4 *)(lVar13 + 0x84);
                                          uVar19 = *(undefined4 *)(lVar13 + 0x88);
                                          uVar20 = *(undefined4 *)(lVar13 + 0x8c);
                                        }
                                        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                          func_0x000180315660();
                                        }
                                        uStack_e8 = uVar17;
                                        uStack_e4 = uVar18;
                                        uStack_e0 = uVar19;
                                        uStack_dc = uVar20;
                                        lVar13 = SparkEstilo__Ponto__180721e60(&uStack_e8,6,0);
                                        if (lVar13 == 0) {
code_r0x0001806e3a12:
                                          FUN_1803155d0();
                                          goto code_r0x0001806e3a17;
                                        }
                                        lVar15 = UnityEngine_UIElements_VisualElement__get_style
                                                           (lVar13,0);
                                        puVar14 = (undefined8 *)
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (auStack_68,0x40c00000,0);
                                        if (lVar15 == 0) {
code_r0x0001806e3a0d:
                                          FUN_1803155d0();
                                          goto code_r0x0001806e3a12;
                                        }
                                        uStack_f8 = *puVar14;
                                        uStack_f0 = *(undefined4 *)(puVar14 + 1);
                                        FUN_1800050f0(0x4f,TI_UnityEngine.UIElements.IStyle,lVar15,&uStack_f8);
                                        UnityEngine_UIElements_VisualElement__Add(lVar12,lVar13,0);
                                        if (*(longlong *)(lVar9 + 0x50) == 0) {
code_r0x0001806e3a08:
                                          FUN_1803155d0();
                                          goto code_r0x0001806e3a0d;
                                        }
                                        lVar13 = FUN_1812035e0(*(longlong *)(lVar9 + 0x50),
                                                               uVar3 & 0xffffffff,
                                                               MR_System.Collections.Generic.Dictionary<int,SparkQuests.Passo>.get_Item);
                                        if (lVar13 == 0) {
code_r0x0001806e3a03:
                                          FUN_1803155d0();
                                          goto code_r0x0001806e3a08;
                                        }
                                        uVar8 = *(undefined8 *)(lVar13 + 0x10);
                                        if (iVar4 == aiStackX_18[0]) {
                                          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                            func_0x000180315660(TI_SparkEstilo);
                                          }
                                          lVar13 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                          uStack_e8 = *(undefined4 *)(lVar13 + 0x40);
                                          uStack_e4 = *(undefined4 *)(lVar13 + 0x44);
                                          uStack_e0 = *(undefined4 *)(lVar13 + 0x48);
                                          uStack_dc = *(undefined4 *)(lVar13 + 0x4c);
                                        }
                                        else {
                                          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                            func_0x000180315660(TI_SparkEstilo);
                                          }
                                          lVar13 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                          uStack_e8 = *(undefined4 *)(lVar13 + 0x50);
                                          uStack_e4 = *(undefined4 *)(lVar13 + 0x54);
                                          uStack_e0 = *(undefined4 *)(lVar13 + 0x58);
                                          uStack_dc = *(undefined4 *)(lVar13 + 0x5c);
                                        }
                                        uStack_d8 = 0;
                                        uStack_d0 = 0;
                                        uStack_c8 = 0;
                                        func_0x000180cb7cb0(&uStack_d8,&uStack_e8,MR_System.Nullable<UnityEngine.Color>..ctor);
                                        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                          func_0x000180315660();
                                        }
                                        uStack_b8 = (undefined4)uStack_d8;
                                        uStack_b4 = uStack_d8._4_4_;
                                        uStack_b0 = (undefined4)uStack_d0;
                                        uStack_ac = uStack_d0._4_4_;
                                        uStack_a8 = uStack_c8;
                                        uVar8 = SparkEstilo__Texto__180722af0
                                                          (uVar8,0xb,&uStack_b8,0,0);
                                        UnityEngine_UIElements_VisualElement__Add(lVar12,uVar8);
                                        if (*(longlong *)(param_1 + 0xe0) == 0) {
                                          FUN_1803155d0();
                                          goto code_r0x0001806e3a03;
                                        }
                                        UnityEngine_UIElements_VisualElement__Add
                                                  (*(longlong *)(param_1 + 0xe0),lVar12);
                                      }
                                      FUN_1803155d0();
code_r0x0001806e3a26:
                                      FUN_1803155d0();
                                      FUN_180311490();
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
code_r0x0001806e3a32:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

