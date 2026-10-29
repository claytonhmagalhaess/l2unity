// ClanWindow__MostraMembros__1805e6710 @ 0x1805e6710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClanWindow__MostraMembros__1805e6710(longlong param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 auStackX_18 [2];
  longlong lStackX_20;
  undefined8 *puVar18;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulonglong uStack_128;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong uStack_a8;
  undefined1 auStack_78 [64];
  
  if (cRam00000001834b3b63 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MD_ClanWindow._MostraMembros_b__69_1);
    FUN_180315380(MD_ClanWindow._MostraMembros_b__69_3);
    FUN_180315380(TI_System.Comparison<SparkClan.Membro>);
    FUN_180315380(TI_System.Comparison<int>);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkClan.Unidade>.get_Keys);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Membro>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkClan.Unidade>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkClan.Unidade>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<int>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Membro>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Membro>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkClan.Unidade>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkClan.Unidade>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Membro>.FindAll);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Membro>.Find);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Membro>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<int>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Membro>.Sort);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Sort);
    FUN_180315380(MR_System.Collections.Generic.List<int>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Membro>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Count);
    FUN_180315380(TI_System.Collections.Generic.List<int>);
    FUN_180315380(TI_System.Predicate<SparkClan.Membro>);
    FUN_180315380(TI_SparkClan);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MD_ClanWindow.__c._MostraMembros_b__69_0);
    FUN_180315380(MD_ClanWindow.__c._MostraMembros_b__69_2);
    FUN_180315380(MD_ClanWindow.__c__DisplayClass69_0._MostraMembros_b__4);
    FUN_180315380(MD_ClanWindow.__c__DisplayClass69_0._MostraMembros_b__5);
    FUN_180315380(TI_ClanWindow.<>c__DisplayClass69_0);
    FUN_180315380(TI_ClanWindow.<>c);
    FUN_180315380(LIT_"'{0}  {1}'");
    cRam00000001834b3b63 = '\x01';
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  lVar6 = func_0x000180315580(TI_System.Collections.Generic.List<int>);
  FUN_180bba2e0(lVar6,MR_System.Collections.Generic.List<int>..ctor);
  lVar7 = MR_System.Collections.Generic.List<int>.Add;
  if (lVar6 != 0) {
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar10 = *(longlong *)(lVar6 + 0x10);
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        if (*(uint *)(lVar10 + 0x18) <= uVar1) {
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)(lVar10 + 0x20 + (longlong)(int)uVar1 * 4) = 0;
      }
      else {
        FUN_18162d2b0(lVar6,0,*(undefined8 *)
                               (*(longlong *)(*(longlong *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      if (*(int *)(TI_SparkClan + 0xe4) == 0) {
        func_0x000180315660(TI_SparkClan);
      }
      lVar7 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x50);
      if (lVar7 != 0) {
        lVar7 = FUN_18117fc80(lVar7,MR_System.Collections.Generic.Dictionary<int,SparkClan.Unidade>.get_Keys);
        if (lVar7 != 0) {
          lStackX_20 = lVar6;
          FUN_180fbded0(&uStack_138,lVar7,MR_System.Collections.Generic.Dictionary<int,SparkClan.Unidade>.GetEnumerator);
          uStack_b8 = uStack_138;
          uStack_b4 = uStack_134;
          uStack_b0 = uStack_130;
          uStack_ac = uStack_12c;
          uStack_a8 = uStack_128;
          uStack_118 = 0;
          puStack_110 = (undefined8 *)&uStack_b8;
          while( true ) {
            cVar5 = FUN_18131f280(&uStack_b8,MR_System.Collections.Generic.Dictionary<int,SparkClan.Unidade>.MoveNext);
            uVar4 = uStack_a8;
            if (cVar5 == '\0') break;
            cVar5 = FUN_18162e860(lVar6,uStack_a8 & 0xffffffff,MR_System.Collections.Generic.List<int>.Contains);
            if (cVar5 == '\0') {
              FUN_1800034b0(lVar6,uVar4 & 0xffffffff,MR_System.Collections.Generic.List<int>.Add);
            }
          }
          Gear__UpdateWeaponType__1803dadf0(&uStack_b8,MR_System.Collections.Generic.Dictionary<int,SparkClan.Unidade>.Dispose);
          if (*(int *)(TI_SparkClan + 0xe4) == 0) {
            func_0x000180315660(TI_SparkClan);
          }
          lVar7 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x48);
          if (lVar7 != 0) {
            FUN_180bada40(&uStack_138,lVar7,MR_System.Collections.Generic.List<SparkClan.Membro>.GetEnumerator);
            uStack_f0 = CONCAT44(uStack_134,uStack_138);
            uStack_e8 = CONCAT44(uStack_12c,uStack_130);
            uStack_e0 = uStack_128;
            uStack_118 = 0;
            puStack_110 = &uStack_f0;
            while( true ) {
              cVar5 = FUN_1812fa7e0(&uStack_f0,MR_System.Collections.Generic.List<SparkClan.Membro>.MoveNext);
              uVar4 = uStack_e0;
              if (cVar5 == '\0') break;
              if (uStack_e0 == 0) {
                FUN_1803155d0();
                FUN_180311490();
                goto code_r0x0001805e753a;
              }
              cVar5 = FUN_18162e860(lVar6,*(undefined4 *)(uStack_e0 + 0x28),MR_System.Collections.Generic.List<int>.Contains);
              if (cVar5 == '\0') {
                FUN_1800034b0(lVar6,*(undefined4 *)(uVar4 + 0x28),MR_System.Collections.Generic.List<int>.Add);
              }
            }
            Gear__UpdateWeaponType__1803dadf0(&uStack_f0,MR_System.Collections.Generic.List<SparkClan.Membro>.Dispose);
            if (*(int *)(TI_ClanWindow.<>c + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar7 = *(longlong *)(*(longlong *)(TI_ClanWindow.<>c + 0xb8) + 0x30);
            if (lVar7 == 0) {
              if (*(int *)(TI_ClanWindow.<>c + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar8 = **(undefined8 **)(TI_ClanWindow.<>c + 0xb8);
              lVar7 = func_0x000180315580(TI_System.Comparison<int>);
              FUN_1811308c0(lVar7,uVar8,MD_ClanWindow.__c._MostraMembros_b__69_0,0);
              *(longlong *)(*(longlong *)(TI_ClanWindow.<>c + 0xb8) + 0x30) = lVar7;
              func_0x000180314690(*(longlong *)(TI_ClanWindow.<>c + 0xb8) + 0x30,lVar7);
            }
            FUN_1816325e0(lVar6,lVar7,MR_System.Collections.Generic.List<int>.Sort);
            cVar5 = FUN_18162e860(lVar6,*(undefined4 *)(param_1 + 0x100),MR_System.Collections.Generic.List<int>.Contains);
            if (cVar5 == '\0') {
              *(undefined4 *)(param_1 + 0x100) = 0;
            }
            if (*(longlong *)(param_1 + 0xf0) != 0) {
              UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xf0),0);
              if (*(longlong *)(param_1 + 0xf0) != 0) {
                lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(param_1 + 0xf0),0);
                uVar8 = FUN_180eb5810(*(int *)(lVar6 + 0x18) < 2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                if (lVar7 != 0) {
                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
                  FUN_180be3fd0(&uStack_138,lVar6,MR_System.Collections.Generic.List<int>.GetEnumerator);
                  uStack_108 = CONCAT44(uStack_134,uStack_138);
                  uStack_100 = CONCAT44(uStack_12c,uStack_130);
                  uStack_f8 = uStack_128;
                  uVar8 = 0;
                  puVar18 = &uStack_108;
                  while( true ) {
                    cVar5 = FUN_1812f11f0(&uStack_108,MR_System.Collections.Generic.List<int>.MoveNext);
                    if (cVar5 == '\0') break;
                    uVar14 = (undefined4)uStack_f8;
                    lVar7 = func_0x000180315580(TI_ClanWindow.<>c__DisplayClass69_0);
                    Gear__UpdateWeaponType__1803dadf0(lVar7,0);
                    if (lVar7 == 0) goto code_r0x0001805e7558;
                    *(longlong *)(lVar7 + 0x18) = param_1;
                    func_0x000180314690(lVar7 + 0x18,param_1);
                    *(undefined4 *)(lVar7 + 0x10) = uVar14;
                    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                      func_0x000180315660(TI_SparkClan);
                    }
                    lVar10 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x48);
                    uVar9 = func_0x000180315580(TI_System.Predicate<SparkClan.Membro>);
                    FUN_180d27680(uVar9,lVar7,MD_ClanWindow.__c__DisplayClass69_0._MostraMembros_b__4,0);
                    if (lVar10 == 0) goto code_r0x0001805e7553;
                    lVar10 = FUN_1816483d0(lVar10,uVar9,MR_System.Collections.Generic.List<SparkClan.Membro>.FindAll);
                    if (lVar10 == 0) goto code_r0x0001805e754e;
                    uVar14 = *(undefined4 *)(lVar10 + 0x18);
                    uVar9 = SparkClan__TipoDaUnidade(*(undefined4 *)(lVar7 + 0x10),0);
                    auStackX_18[0] = uVar14;
                    uVar11 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
                    uVar9 = System_String__Format(LIT_"'{0}  {1}'",uVar9,uVar11,0);
                    if (*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x100)) {
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      lVar10 = *(longlong *)(TI_SparkEstilo + 0xb8);
                      uVar14 = *(undefined4 *)(lVar10 + 0x60);
                      uVar15 = *(undefined4 *)(lVar10 + 100);
                      uVar16 = *(undefined4 *)(lVar10 + 0x68);
                      uVar17 = *(undefined4 *)(lVar10 + 0x6c);
                    }
                    else {
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      lVar10 = *(longlong *)(TI_SparkEstilo + 0xb8);
                      uVar14 = *(undefined4 *)(lVar10 + 0x50);
                      uVar15 = *(undefined4 *)(lVar10 + 0x54);
                      uVar16 = *(undefined4 *)(lVar10 + 0x58);
                      uVar17 = *(undefined4 *)(lVar10 + 0x5c);
                    }
                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    uStack_138 = uVar14;
                    uStack_134 = uVar15;
                    uStack_130 = uVar16;
                    uStack_12c = uVar17;
                    lVar10 = SparkEstilo__Etiqueta__18071fef0(uVar9,&uStack_138,0);
                    if (lVar10 == 0) goto code_r0x0001805e7549;
                    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar10,0,0);
                    lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                    puVar13 = (undefined8 *)
                              UnityEngine_UIElements_StyleLength__op_Implicit
                                        (auStack_78,0x40800000,0);
                    if (lVar12 == 0) goto code_r0x0001805e7544;
                    uStack_d8 = *puVar13;
                    uStack_d0 = *(undefined4 *)(puVar13 + 1);
                    FUN_1800050f0(0x4f,TI_UnityEngine.UIElements.IStyle,lVar12,&uStack_d8);
                    lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                    puVar13 = (undefined8 *)
                              UnityEngine_UIElements_StyleLength__op_Implicit
                                        (&uStack_118,0x40000000,0);
                    if (lVar12 == 0) goto code_r0x0001805e753f;
                    uStack_c8 = *puVar13;
                    uStack_c0 = *(undefined4 *)(puVar13 + 1);
                    FUN_1800050f0(0x4b,TI_UnityEngine.UIElements.IStyle,lVar12,&uStack_c8);
                    uVar9 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                    FUN_18055b980(uVar9,lVar7,MD_ClanWindow.__c__DisplayClass69_0._MostraMembros_b__5,0);
                    FUN_180990d50(lVar10,uVar9,0);
                    if (*(longlong *)(param_1 + 0xf0) == 0) goto code_r0x0001805e753a;
                    UnityEngine_UIElements_VisualElement__Add
                              (*(longlong *)(param_1 + 0xf0),lVar10,0);
                  }
                  Gear__UpdateWeaponType__1803dadf0(&uStack_108,MR_System.Collections.Generic.List<int>.Dispose);
                  lVar7 = *(longlong *)(param_1 + 0x1b0);
                  if (lVar7 != 0) {
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    *(undefined4 *)(lVar7 + 0x18) = 0;
                    lVar7 = *(longlong *)(param_1 + 0x1a8);
                    if (lVar7 != 0) {
                      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                      iVar2 = *(int *)(lVar7 + 0x18);
                      *(undefined4 *)(lVar7 + 0x18) = 0;
                      if (0 < iVar2) {
                        System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar2,0,uVar8,puVar18);
                      }
                      FUN_180be3fd0(&uStack_138,lVar6,MR_System.Collections.Generic.List<int>.GetEnumerator);
                      uStack_108 = CONCAT44(uStack_134,uStack_138);
                      uStack_100 = CONCAT44(uStack_12c,uStack_130);
                      uStack_f8 = uStack_128;
                      uVar8 = 0;
                      puVar18 = &uStack_108;
                      while( true ) {
                        cVar5 = FUN_1812f11f0(&uStack_108,MR_System.Collections.Generic.List<int>.MoveNext);
                        uVar4 = uStack_f8;
                        lVar7 = MR_System.Collections.Generic.List<int>.Add;
                        if (cVar5 == '\0') break;
                        lVar6 = *(longlong *)(param_1 + 0x1b0);
                        if (lVar6 == 0) goto code_r0x0001805e757d;
                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                        lVar10 = *(longlong *)(lVar6 + 0x10);
                        if (lVar10 == 0) goto code_r0x0001805e7578;
                        uVar1 = *(uint *)(lVar6 + 0x18);
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                          if (*(uint *)(lVar10 + 0x18) <= uVar1) goto code_r0x0001805e7564;
                          *(undefined4 *)(lVar10 + 0x20 + (longlong)(int)uVar1 * 4) =
                               (undefined4)uStack_f8;
                        }
                        else {
                          FUN_18162d2b0(lVar6,uStack_f8 & 0xffffffff,
                                        *(undefined8 *)
                                         (*(longlong *)(*(longlong *)(lVar7 + 0x20) + 0xc0) + 0x70),
                                        lVar7,uVar8,puVar18);
                        }
                        lVar7 = *(longlong *)(param_1 + 0x1a8);
                        if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar9 = SparkClan__TipoDaUnidade(uVar4 & 0xffffffff,0);
                        lVar6 = MR_System.Collections.Generic.List<string>.Add;
                        if (lVar7 == 0) goto code_r0x0001805e7573;
                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                        lVar10 = *(longlong *)(lVar7 + 0x10);
                        if (lVar10 == 0) goto code_r0x0001805e756e;
                        uVar1 = *(uint *)(lVar7 + 0x18);
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                          if (*(uint *)(lVar10 + 0x18) <= uVar1) goto code_r0x0001805e7569;
                          *(undefined8 *)(lVar10 + 0x20 + (longlong)(int)uVar1 * 8) = uVar9;
                          func_0x000180314690(lVar10 + (longlong)(int)uVar1 * 8 + 0x20,uVar9);
                        }
                        else {
                          FUN_181645af0(lVar7,uVar9,
                                        *(undefined8 *)
                                         (*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xc0) + 0x70))
                          ;
                        }
                      }
                      Gear__UpdateWeaponType__1803dadf0(&uStack_108,MR_System.Collections.Generic.List<int>.Dispose);
                      if (*(longlong *)(param_1 + 0xf8) != 0) {
                        UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xf8),0)
                        ;
                        if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                          func_0x000180315660(TI_SparkClan);
                        }
                        lVar7 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x48);
                        uVar8 = func_0x000180315580(TI_System.Predicate<SparkClan.Membro>);
                        FUN_180d27680(uVar8,param_1,MD_ClanWindow._MostraMembros_b__69_1,0);
                        if (lVar7 != 0) {
                          lVar7 = FUN_1816483d0(lVar7,uVar8,MR_System.Collections.Generic.List<SparkClan.Membro>.FindAll);
                          if (*(int *)(TI_ClanWindow.<>c + 0xe4) == 0) {
                            func_0x000180315660(TI_ClanWindow.<>c);
                          }
                          lVar6 = *(longlong *)(*(longlong *)(TI_ClanWindow.<>c + 0xb8) + 0x38);
                          if (lVar6 == 0) {
                            if (*(int *)(TI_ClanWindow.<>c + 0xe4) == 0) {
                              func_0x000180315660(TI_ClanWindow.<>c);
                            }
                            uVar8 = **(undefined8 **)(TI_ClanWindow.<>c + 0xb8);
                            lVar6 = func_0x000180315580(TI_System.Comparison<SparkClan.Membro>);
                            FUN_180c394b0(lVar6,uVar8,MD_ClanWindow.__c._MostraMembros_b__69_2,0);
                            *(longlong *)(*(longlong *)(TI_ClanWindow.<>c + 0xb8) + 0x38) = lVar6
                            ;
                            func_0x000180314690(*(longlong *)(TI_ClanWindow.<>c + 0xb8) + 0x38,
                                                lVar6);
                          }
                          if (lVar7 != 0) {
                            FUN_1816508f0(lVar7,lVar6,MR_System.Collections.Generic.List<SparkClan.Membro>.Sort);
                            FUN_180bada40(&uStack_138,lVar7,MR_System.Collections.Generic.List<SparkClan.Membro>.GetEnumerator);
                            uStack_f0 = CONCAT44(uStack_134,uStack_138);
                            uStack_e8 = CONCAT44(uStack_12c,uStack_130);
                            uStack_e0 = uStack_128;
                            while( true ) {
                              cVar5 = FUN_1812fa7e0(&uStack_f0,MR_System.Collections.Generic.List<SparkClan.Membro>.MoveNext);
                              if (cVar5 == '\0') break;
                              lVar7 = *(longlong *)(param_1 + 0xf8);
                              uVar8 = ClanWindow__LinhaDoMembro(param_1,uStack_e0,0);
                              if (lVar7 == 0) goto code_r0x0001805e7589;
                              UnityEngine_UIElements_VisualElement__Add(lVar7,uVar8);
                            }
                            Gear__UpdateWeaponType__1803dadf0(&uStack_f0,MR_System.Collections.Generic.List<SparkClan.Membro>.Dispose);
                            if (*(longlong *)(param_1 + 0x108) != 0) {
                              if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                                func_0x000180315660(TI_SparkClan);
                              }
                              lVar7 = *(longlong *)
                                       (*(longlong *)(TI_SparkClan + 0xb8) + 0x48);
                              uVar8 = func_0x000180315580(TI_System.Predicate<SparkClan.Membro>);
                              FUN_180d27680(uVar8,param_1,MD_ClanWindow._MostraMembros_b__69_3,0);
                              if (lVar7 == 0) goto code_r0x0001805e751c;
                              lVar7 = FUN_180bad500(lVar7,uVar8,MR_System.Collections.Generic.List<SparkClan.Membro>.Find);
                              if (lVar7 == 0) {
                                *(undefined8 *)(param_1 + 0x108) = 0;
                                func_0x000180314690(param_1 + 0x108,0);
                              }
                            }
                            ClanWindow__AtualizaCartao(param_1,0);
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
code_r0x0001805e751c:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_r0x0001805e753a:
  FUN_1803155d0();
code_r0x0001805e753f:
  FUN_1803155d0();
code_r0x0001805e7544:
  FUN_1803155d0();
code_r0x0001805e7549:
  FUN_1803155d0();
code_r0x0001805e754e:
  FUN_1803155d0();
code_r0x0001805e7553:
  FUN_1803155d0();
code_r0x0001805e7558:
  FUN_1803155d0();
  FUN_180311490();
code_r0x0001805e7564:
  FUN_1803155c0();
code_r0x0001805e7569:
  FUN_1803155c0();
code_r0x0001805e756e:
  FUN_1803155d0();
code_r0x0001805e7573:
  FUN_1803155d0();
code_r0x0001805e7578:
  FUN_1803155d0();
code_r0x0001805e757d:
  FUN_1803155d0();
  FUN_180311490();
code_r0x0001805e7589:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

