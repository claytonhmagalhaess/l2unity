// ClanWindow__MostraAba__1805e42a0 @ 0x1805e42a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClanWindow__MostraAba__1805e42a0(longlong param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  ushort uVar20;
  ulonglong uVar21;
  int iVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 uStackX_1c;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined4 *puStack_150;
  undefined4 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong uStack_c8;
  undefined1 auStack_c0 [16];
  undefined *puStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  undefined1 *puStack_30;
  
  if (cRam00000001834b3b56 == '\0') {
    uStack_50 = &UNK_1805e42c4;
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    uStack_50 = &UNK_1805e42d0;
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Count);
    uStack_50 = &UNK_1805e42dc;
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
    uStack_50 = &UNK_1805e42e8;
    FUN_180315380(TI_SparkClan);
    uStack_50 = &UNK_1805e42f4;
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3b56 = '\x01';
  }
  *(int *)(param_1 + 0x98) = param_2;
  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
    uStack_50 = &UNK_1805e4316;
    func_0x000180315660();
  }
  uStack_50 = &UNK_1805e4322;
  cVar8 = SparkClan__get_TemClan(0);
  lVar11 = *(longlong *)(param_1 + 0xa0);
  iVar22 = 0;
  do {
    if (lVar11 == 0) {
code_r0x0001805e4584:
      uStack_50 = &UNK_1805e4589;
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)(lVar11 + 0x18) <= iVar22) {
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        uStack_50 = &UNK_1805e43eb;
        lVar11 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa8),0);
        uStack_50 = &UNK_1805e43fd;
        uVar12 = FUN_180eb5810(cVar8,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar11 != 0) {
          uStack_50 = &UNK_1805e441d;
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar11,uVar12);
          if (cVar8 == '\0') {
            return;
          }
          if (param_2 == 1) {
            uStack_50 = &UNK_1805e456c;
            ClanWindow__MostraInfo__1805e60e0(param_1,0);
            if (cRam00000001834b3b71 == '\0') {
              FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.Dispose);
              FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.MoveNext);
              FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.get_Current);
              FUN_180315380(TI_UnityEngine.UIElements.IStyle);
              FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,int>.get_Key);
              FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,int>.get_Value);
              FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.GetEnumerator);
              FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.get_Count);
              FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
              FUN_180315380(TI_SparkClan);
              FUN_180315380(TI_SparkEstilo);
              FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
              FUN_180315380(LIT_"'Skill '");
              FUN_180315380(LIT_"'This clan has no skills yet.'");
              FUN_180315380(LIT_"' Lv '");
              cRam00000001834b3b71 = '\x01';
            }
            if (*(longlong *)(param_1 + 0x230) == 0) {
              return;
            }
            UnityEngine_UIElements_VisualElement__Clear(*(undefined8 *)(param_1 + 0x230),0);
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar11 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x58);
            if (lVar11 != 0) {
              if (*(int *)(lVar11 + 0x18) == 0) {
                if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                  func_0x000180315660(TI_SparkEstilo);
                }
                uStack_138 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
                uStack_130 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
                uStack_158 = 0;
                puStack_150 = (undefined4 *)0x0;
                uStack_148 = 0;
                func_0x000180cb7cb0(&uStack_158,&uStack_138,MR_System.Nullable<UnityEngine.Color>..ctor);
                uStack_138 = uStack_158;
                uStack_130 = puStack_150;
                uStack_128 = uStack_148;
                lVar11 = SparkEstilo__Texto__180722af0(LIT_"'This clan has no skills yet.'",0xb,&uStack_138,0,0);
                if (lVar11 == 0) goto code_r0x0001805e8a92;
                plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
                plVar15 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
                puVar14 = (undefined8 *)
                          UnityEngine_UIElements_StyleLength__op_Implicit(auStack_c0,0x40800000,0);
                if (plVar15 == (longlong *)0x0) goto code_r0x0001805e8a92;
                uVar12 = *puVar14;
                uVar24 = *(undefined4 *)(puVar14 + 1);
                lVar16 = *plVar15;
                if (*(ushort *)(lVar16 + 0x12e) == 0) goto code_r0x0001805e8929;
                uVar20 = 0;
                goto code_r0x0001805e8910;
              }
              if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar11 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x58);
              if (lVar11 != 0) {
                FUN_180bada40(&uStack_138,lVar11,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.GetEnumerator);
                uStack_d8 = (undefined4)uStack_138;
                uStack_d4 = uStack_138._4_4_;
                uStack_d0 = (undefined4)uStack_130;
                uStack_cc = uStack_130._4_4_;
                uStack_c8 = CONCAT44(uStack_124,uStack_128);
                uStack_158 = 0;
                puStack_150 = &uStack_d8;
                break;
              }
            }
            FUN_1803155d0();
            goto code_r0x0001805e8a58;
          }
          if (param_2 == 2) {
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              uStack_50 = &UNK_1805e454d;
              func_0x000180315660();
            }
            if (cRam00000001834b4646 == '\0') {
              puStack_30 = &UNK_1807cdfdb;
              FUN_180315380(TI_SparkClan);
              puStack_30 = &UNK_1807cdfe7;
              FUN_180315380(TI_SparkPacoteLivre);
              cRam00000001834b4646 = '\x01';
            }
            puStack_30 = &UNK_1807cdfff;
            lVar11 = func_0x000180315580(TI_SparkPacoteLivre);
            puStack_30 = &UNK_1807ce00f;
            func_0x000180503ed0(lVar11,0xd0,0);
            if (lVar11 == 0) {
code_r0x0001807ce0af:
              puStack_30 = &UNK_1807ce0b4;
              FUN_1803155d0();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puStack_30 = &UNK_1807ce028;
            lVar11 = SparkPacoteLivre__H(lVar11,0x1a,0);
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              puStack_30 = &UNK_1807ce040;
              func_0x000180315660();
            }
            if (DAT_1834b30fb == '\0') {
              puStack_30 = &UNK_1807ce055;
              FUN_180315380(TI_GameClient);
              DAT_1834b30fb = '\x01';
            }
            if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
               (plVar13 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
               plVar13 != (longlong *)0x0)) {
              if (lVar11 == 0) goto code_r0x0001807ce0af;
              puStack_30 = &UNK_1807ce08d;
              uVar12 = SparkPacoteLivre__Fim(lVar11,0);
              puStack_30 = &UNK_1807ce0a4;
              (**(code **)(*plVar13 + 0x178))(plVar13,uVar12,*(undefined8 *)(*plVar13 + 0x180));
            }
            return;
          }
          if (param_2 != 3) {
            if (param_2 != 4) {
              if (param_2 != 5) {
                return;
              }
              uStack_50 = &UNK_1805e444f;
              ClanWindow__MostraCrest__1805e4a00(param_1,0);
              return;
            }
            if (cRam00000001834b3b78 == '\0') {
              puStack_b0 = &UNK_1805e45b5;
              FUN_180315380(TI_UnityEngine.UIElements.IStyle,0);
              puStack_b0 = &UNK_1805e45c1;
              FUN_180315380(TI_SparkClan);
              puStack_b0 = &UNK_1805e45cd;
              FUN_180315380(TI_SparkEstilo);
              puStack_b0 = &UNK_1805e45d9;
              FUN_180315380(LIT_"'Your clan is not in an alliance.'");
              puStack_b0 = &UNK_1805e45e5;
              FUN_180315380(LIT_"'Your clan leads this alliance.'");
              puStack_b0 = &UNK_1805e45f1;
              FUN_180315380(LIT_"'No alliance'");
              puStack_b0 = &UNK_1805e45fd;
              FUN_180315380(LIT_"'Member of this alliance.'");
              cRam00000001834b3b78 = '\x01';
            }
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              puStack_b0 = &UNK_1805e4619;
              func_0x000180315660();
            }
            if (cRam00000001834b3bc0 == '\0') {
              puStack_b0 = &UNK_1805e462e;
              FUN_180315380(TI_SparkClan);
              cRam00000001834b3bc0 = '\x01';
            }
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              puStack_b0 = &UNK_1805e464a;
              func_0x000180315660();
            }
            iVar22 = *(int *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x30);
            puStack_b0 = &UNK_1805e466a;
            bVar9 = SparkClan__get_SouLider(0);
            bVar10 = 0;
            if (iVar22 != 0) {
              bVar10 = bVar9;
            }
            if (bVar10 == 0) {
              bVar23 = false;
            }
            else {
              if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                puStack_b0 = &UNK_1805e4696;
                func_0x000180315660();
              }
              if (cRam00000001834b3bc0 == '\0') {
                puStack_b0 = &UNK_1805e46ab;
                FUN_180315380(TI_SparkClan);
                cRam00000001834b3bc0 = '\x01';
              }
              if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                puStack_b0 = &UNK_1805e46c7;
                func_0x000180315660();
              }
              iVar2 = *(int *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x30);
              if (cRam00000001834b3bbd == '\0') {
                puStack_b0 = &UNK_1805e46ed;
                FUN_180315380(TI_SparkClan);
                cRam00000001834b3bbd = '\x01';
              }
              if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                puStack_b0 = &UNK_1805e4709;
                func_0x000180315660();
              }
              bVar23 = iVar2 == **(int **)(TI_SparkClan + 0xb8);
            }
            plVar13 = *(longlong **)(param_1 + 0x270);
            uVar12 = LIT_"'No alliance'";
            if (iVar22 != 0) {
              if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                puStack_b0 = &UNK_1805e473c;
                func_0x000180315660();
              }
              if (cRam00000001834b3bc1 == '\0') {
                puStack_b0 = &UNK_1805e4751;
                FUN_180315380(TI_SparkClan);
                cRam00000001834b3bc1 = '\x01';
              }
              if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                puStack_b0 = &UNK_1805e476d;
                func_0x000180315660();
              }
              uVar12 = *(undefined8 *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x38);
            }
            if (plVar13 == (longlong *)0x0) goto DAT_1805e49eb;
            puStack_b0 = &UNK_1805e47a4;
            (**(code **)(*plVar13 + 0xe48))(plVar13,uVar12,*(undefined8 *)(*plVar13 + 0xe50));
            uVar12 = LIT_"'Your clan is not in an alliance.'";
            if ((iVar22 != 0) && (uVar12 = LIT_"'Member of this alliance.'", bVar23 != false)) {
              uVar12 = LIT_"'Your clan leads this alliance.'";
            }
            plVar13 = *(longlong **)(param_1 + 0x278);
            if (plVar13 == (longlong *)0x0) goto DAT_1805e49eb;
            puStack_b0 = &UNK_1805e47e2;
            (**(code **)(*plVar13 + 0xe48))(plVar13,uVar12,*(undefined8 *)(*plVar13 + 0xe50));
            if (*(longlong *)(param_1 + 0x280) == 0) goto DAT_1805e49eb;
            puStack_b0 = &UNK_1805e47f9;
            plVar13 = (longlong *)
                      UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0x280),0);
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              puStack_b0 = &UNK_1805e4811;
              func_0x000180315660();
            }
            if (cRam00000001834b3bc2 == '\0') {
              puStack_b0 = &UNK_1805e4826;
              FUN_180315380(TI_SparkClan);
              cRam00000001834b3bc2 = '\x01';
            }
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              puStack_b0 = &UNK_1805e4842;
              func_0x000180315660();
            }
            puStack_b0 = &UNK_1805e485a;
            uVar12 = SparkClan__AllyCrest
                               (*(undefined4 *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x40),0
                               );
            puStack_b0 = &UNK_1805e486a;
            puVar14 = (undefined8 *)
                      UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_88,uVar12,0);
            if (plVar13 == (longlong *)0x0) goto DAT_1805e49eb;
            lVar11 = *plVar13;
            uVar19 = *puVar14;
            uVar4 = puVar14[1];
            uVar5 = puVar14[2];
            uVar6 = puVar14[3];
            uStack_50 = (undefined *)CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
            uVar12 = puVar14[4];
            if (*(ushort *)(lVar11 + 0x12e) == 0) goto code_r0x0001805e48d9;
            uVar20 = 0;
            goto code_r0x0001805e48c0;
          }
          if (cRam00000001834b3b74 == '\0') {
            uStack_50 = &UNK_1805e448b;
            FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Guerra>.Clear);
            uStack_50 = &UNK_1805e4497;
            FUN_180315380(TI_SparkClan);
            cRam00000001834b3b74 = '\x01';
          }
          *(undefined8 *)(param_1 + 0x268) = 0;
          uStack_50 = &UNK_1805e44b7;
          func_0x000180314690(param_1 + 0x268,0);
          if (*(int *)(TI_SparkClan + 0xe4) == 0) {
            uStack_50 = &UNK_1805e44cf;
            func_0x000180315660(TI_SparkClan);
          }
          lVar11 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x68);
          if (lVar11 != 0) {
            iVar22 = *(int *)(lVar11 + 0x18);
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            *(undefined4 *)(lVar11 + 0x18) = 0;
            if (0 < iVar22) {
              uStack_50 = &UNK_1805e450b;
              System_Array__Clear(*(undefined8 *)(lVar11 + 0x10),0,iVar22,0);
            }
            uStack_50 = &UNK_1805e4515;
            ClanWindow__MostraGuerras__1805e4d30(param_1,0);
            uStack_50 = &UNK_1805e451e;
            SparkClan__PedeGuerras(0,0);
            if (cRam00000001834b464a == '\0') {
              puStack_30 = &UNK_1807cda41;
              FUN_180315380(TI_SparkClan,0);
              puStack_30 = &UNK_1807cda4d;
              FUN_180315380(TI_SparkPacoteLivre);
              cRam00000001834b464a = '\x01';
            }
            puStack_30 = &UNK_1807cda60;
            lVar11 = func_0x000180315580(TI_SparkPacoteLivre);
            puStack_30 = &UNK_1807cda70;
            func_0x000180503ed0(lVar11,0xd0,0);
            if (lVar11 != 0) {
              puStack_30 = &UNK_1807cda89;
              lVar11 = SparkPacoteLivre__H(lVar11,0x1e,0);
              if (lVar11 != 0) {
                puStack_30 = &UNK_1807cda9f;
                lVar11 = SparkPacoteLivre__D(lVar11,0,0);
                if (lVar11 != 0) {
                  puStack_30 = &UNK_1807cdab5;
                  lVar11 = SparkPacoteLivre__D(lVar11,1,0);
                  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                    puStack_30 = &UNK_1807cdacd;
                    func_0x000180315660();
                  }
                  if (DAT_1834b30fb == '\0') {
                    puStack_30 = &UNK_1807cdae2;
                    FUN_180315380(TI_GameClient);
                    DAT_1834b30fb = '\x01';
                  }
                  if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
                     (plVar13 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
                     plVar13 != (longlong *)0x0)) {
                    if (lVar11 == 0) goto code_r0x0001807cdb3c;
                    puStack_30 = &UNK_1807cdb1a;
                    uVar12 = SparkPacoteLivre__Fim(lVar11,0);
                    puStack_30 = &UNK_1807cdb31;
                    (**(code **)(*plVar13 + 0x178))
                              (plVar13,uVar12,*(undefined8 *)(*plVar13 + 0x180));
                  }
                  return;
                }
              }
            }
code_r0x0001807cdb3c:
            puStack_30 = &UNK_1807cdb41;
            FUN_1803155d0();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      goto code_r0x0001805e4584;
    }
    if (*(longlong *)(param_1 + 0xa0) == 0) goto code_r0x0001805e4584;
    uStack_50 = &UNK_1805e4367;
    lVar11 = FUN_180bbafe0(*(longlong *)(param_1 + 0xa0),iVar22,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
    if (lVar11 == 0) goto code_r0x0001805e4584;
    uStack_50 = &UNK_1805e437a;
    lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
    if ((cVar8 == '\0') || (iVar22 != param_2)) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
    uStack_50 = &UNK_1805e439b;
    uVar12 = FUN_180eb5810(uVar12,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar11 == 0) goto code_r0x0001805e4584;
    uStack_50 = &UNK_1805e43bb;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar11,uVar12);
    lVar11 = *(longlong *)(param_1 + 0xa0);
    iVar22 = iVar22 + 1;
  } while( true );
code_r0x0001805e82e0:
  cVar8 = FUN_1812ed5e0(&uStack_d8,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.MoveNext);
  uVar7 = uStack_c8;
  if (cVar8 == '\0') {
    Gear__UpdateWeaponType__1803dadf0(&uStack_d8,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.Dispose);
    return;
  }
  lVar11 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar11,0);
  if (lVar11 == 0) goto code_r0x0001805e8a86;
  plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
  plVar15 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
  puVar14 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,0x42000000,0);
  if (plVar15 == (longlong *)0x0) goto code_r0x0001805e8a81;
  uVar12 = *puVar14;
  uVar24 = *(undefined4 *)(puVar14 + 1);
  lVar16 = *plVar15;
  if (*(ushort *)(lVar16 + 0x12e) != 0) {
    uVar20 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar16 + 0xb0) + (ulonglong)uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle)
      {
        puVar14 = (undefined8 *)
                  ((longlong)
                   (*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) + 0x43) *
                   0x10 + 0x138 + lVar16);
        goto code_r0x0001805e83b9;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(ushort *)(lVar16 + 0x12e));
  }
  puVar14 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805e83b9:
  uStack_108 = uVar12;
  uStack_100 = uVar24;
  (*(code *)*puVar14)(plVar15,&uStack_108,puVar14[1]);
  if (plVar13 == (longlong *)0x0) goto code_r0x0001805e8a7c;
  lVar16 = *plVar13;
  if (*(ushort *)(lVar16 + 0x12e) != 0) {
    uVar20 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar16 + 0xb0) + (ulonglong)uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle)
      {
        puVar14 = (undefined8 *)
                  ((longlong)
                   (*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) + 0xad) *
                   0x10 + 0x138 + lVar16);
        goto code_r0x0001805e8439;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(ushort *)(lVar16 + 0x12e));
  }
  puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805e8439:
  uStack_f8 = uVar12;
  uStack_f0 = uVar24;
  (*(code *)*puVar14)(plVar13,&uStack_f8,puVar14[1]);
  plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
  plVar15 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
  puVar14 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_c0,0x40c00000,0);
  if (plVar15 == (longlong *)0x0) goto code_r0x0001805e8a77;
  uVar12 = *puVar14;
  uVar24 = *(undefined4 *)(puVar14 + 1);
  lVar16 = *plVar15;
  if (*(ushort *)(lVar16 + 0x12e) != 0) {
    uVar20 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar16 + 0xb0) + (ulonglong)uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle)
      {
        puVar14 = (undefined8 *)
                  ((longlong)
                   (*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) + 0x4b) *
                   0x10 + 0x138 + lVar16);
        goto code_r0x0001805e84e9;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(ushort *)(lVar16 + 0x12e));
  }
  puVar14 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001805e84e9:
  uStack_e8 = uVar12;
  uStack_e0 = uVar24;
  (*(code *)*puVar14)(plVar15,&uStack_e8,puVar14[1]);
  if (plVar13 == (longlong *)0x0) goto code_r0x0001805e8a72;
  lVar16 = *plVar13;
  uVar21 = 0;
  if (*(ushort *)(lVar16 + 0x12e) != 0) {
    do {
      if (*(longlong *)(*(longlong *)(lVar16 + 0xb0) + uVar21 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
        puVar14 = (undefined8 *)
                  ((longlong)(*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + uVar21 * 0x10) + 0x4f) *
                   0x10 + 0x138 + lVar16);
        goto code_r0x0001805e8569;
      }
      uVar20 = (short)uVar21 + 1;
      uVar21 = (ulonglong)uVar20;
    } while (uVar20 < *(ushort *)(lVar16 + 0x12e));
  }
  puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001805e8569:
  uStack_168 = uVar12;
  uStack_160 = uVar24;
  (*(code *)*puVar14)(plVar13,&uStack_168,puVar14[1]);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660(TI_SparkEstilo);
  }
  uStack_138 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x30);
  uStack_130 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x38);
  SparkEstilo__Borda__18071da60(lVar11,&uStack_138,0x3f800000,0,0);
  lVar16 = SkillgrpTable__get_Instance(0);
  uStackX_1c = (undefined4)(uVar7 >> 0x20);
  if (lVar16 != 0) {
    lVar16 = SkillgrpTable__get_Instance(0);
    if (lVar16 == 0) goto code_r0x0001805e8a63;
    lVar16 = SkillgrpTable__GetSkill(lVar16,uVar7 & 0xffffffff,uStackX_1c,0);
    if (lVar16 != 0) {
      lVar17 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
      lVar18 = IconTable__get_Instance(0);
      if (lVar18 == 0) goto code_r0x0001805e8a5e;
      uVar12 = IconTable__LoadTextureByName(lVar18,*(undefined8 *)(lVar16 + 0x68),0);
      puVar14 = (undefined8 *)
                UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_98,uVar12,0);
      if (lVar17 == 0) goto code_r0x0001805e8a58;
      uStack_138 = *puVar14;
      uStack_130 = puVar14[1];
      uStack_128 = *(undefined4 *)(puVar14 + 2);
      uStack_124 = *(undefined4 *)((longlong)puVar14 + 0x14);
      uStack_120 = *(undefined4 *)(puVar14 + 3);
      uStack_11c = *(undefined4 *)((longlong)puVar14 + 0x1c);
      uStack_118 = puVar14[4];
      FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar17,&uStack_138);
    }
  }
  lVar16 = SkillNameTable__get_Instance(0);
  if (lVar16 == 0) {
code_r0x0001805e875b:
    uVar12 = System_Int32__ToString(&stack0x00000008,0);
    uVar12 = System_String__Concat(LIT_"'Skill '",uVar12,0);
  }
  else {
    lVar16 = SkillNameTable__get_Instance(0);
    if (lVar16 == 0) goto code_r0x0001805e8a68;
    lVar16 = SkillNameTable__GetName(lVar16,uVar7 & 0xffffffff,uStackX_1c,0);
    if (lVar16 == 0) goto code_r0x0001805e875b;
    uVar12 = *(undefined8 *)(lVar16 + 0x20);
  }
  uVar19 = System_Int32__ToString(&stack0x00000008,0);
  uVar12 = System_String__Concat(uVar12,LIT_"' Lv '",uVar19,0);
  UnityEngine_UIElements_VisualElement__set_tooltip(lVar11,uVar12);
  if (*(longlong *)(param_1 + 0x230) == 0) goto code_r0x0001805e8a6d;
  UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x230),lVar11);
  goto code_r0x0001805e82e0;
  while (uVar20 = uVar20 + 1, uVar20 < *(ushort *)(lVar16 + 0x12e)) {
code_r0x0001805e8910:
    if (*(longlong *)(*(longlong *)(lVar16 + 0xb0) + (ulonglong)uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
      puVar14 = (undefined8 *)
                ((longlong)
                 (*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) + 0x51) *
                 0x10 + 0x138 + lVar16);
      goto code_r0x0001805e8937;
    }
  }
code_r0x0001805e8929:
  puVar14 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805e8937:
  uStack_168 = uVar12;
  uStack_160 = uVar24;
  (*(code *)*puVar14)(plVar15,&uStack_168,puVar14[1]);
  if (plVar13 != (longlong *)0x0) {
    lVar16 = *plVar13;
    if (*(ushort *)(lVar16 + 0x12e) != 0) {
      uVar20 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar16 + 0xb0) + (ulonglong)uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar14 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) + 0x4d)
                     * 0x10 + 0x138 + lVar16);
          goto code_r0x0001805e89a9;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(ushort *)(lVar16 + 0x12e));
    }
    puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001805e89a9:
    uStack_168 = uVar12;
    uStack_160 = uVar24;
    (*(code *)*puVar14)(plVar13,&uStack_168,puVar14[1]);
    if (*(longlong *)(param_1 + 0x230) != 0) {
      UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x230),lVar11,0);
      return;
    }
  }
code_r0x0001805e8a92:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_r0x0001805e8a58:
  FUN_1803155d0();
code_r0x0001805e8a5e:
  FUN_1803155d0();
code_r0x0001805e8a63:
  FUN_1803155d0();
code_r0x0001805e8a68:
  FUN_1803155d0();
code_r0x0001805e8a6d:
  FUN_1803155d0();
code_r0x0001805e8a72:
  FUN_1803155d0();
code_r0x0001805e8a77:
  FUN_1803155d0();
code_r0x0001805e8a7c:
  FUN_1803155d0();
code_r0x0001805e8a81:
  FUN_1803155d0();
code_r0x0001805e8a86:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
  while (uVar20 = uVar20 + 1, uVar20 < *(ushort *)(lVar11 + 0x12e)) {
code_r0x0001805e48c0:
    if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
      puVar14 = (undefined8 *)
                ((longlong)
                 (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) + 0xb) *
                 0x10 + 0x138 + lVar11);
      goto code_r0x0001805e48e7;
    }
  }
code_r0x0001805e48d9:
  puStack_b0 = &UNK_1805e48e7;
  puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001805e48e7:
  puStack_b0 = &UNK_1805e4906;
  uStack_88 = uVar19;
  uStack_80 = uVar4;
  uStack_78 = uVar5;
  uStack_70 = uVar6;
  uStack_68 = uVar12;
  (*(code *)*puVar14)(plVar13,&uStack_88,puVar14[1]);
  uVar12 = *(undefined8 *)(param_1 + 0x298);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    puStack_b0 = &UNK_1805e4932;
    func_0x000180315660();
  }
  puStack_b0 = &UNK_1805e4940;
  SparkEstilo__Liga__180720c80(uVar12,bVar23,0);
  uVar12 = *(undefined8 *)(param_1 + 0x2a0);
  bVar10 = 0;
  if (iVar22 != 0) {
    bVar10 = bVar9;
  }
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    puStack_b0 = &UNK_1805e496c;
    func_0x000180315660();
  }
  puStack_b0 = &UNK_1805e497b;
  SparkEstilo__Liga__180720c80(uVar12,bVar10 & (bVar23 ^ 1U),0);
  puStack_b0 = &UNK_1805e498d;
  SparkEstilo__Liga__180720c80(*(undefined8 *)(param_1 + 0x2b0),bVar23,0);
  puStack_b0 = &UNK_1805e499f;
  SparkEstilo__Liga__180720c80(*(undefined8 *)(param_1 + 0x2a8),bVar23,0);
  lVar11 = *(longlong *)(param_1 + 0x290);
  if (lVar11 == 0) {
DAT_1805e49eb:
    puStack_b0 = &UNK_1805e49f0;
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(bool *)(lVar11 + 0x40) = bVar23;
  if (cRam00000001834b3b90 == '\0') {
    puStack_30 = &UNK_1805ec297;
    FUN_180315380(TI_SparkEstilo,0);
    cRam00000001834b3b90 = '\x01';
  }
  uVar12 = *(undefined8 *)(lVar11 + 0x20);
  uVar1 = *(undefined1 *)(lVar11 + 0x40);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    puStack_30 = &UNK_1805ec2bb;
    func_0x000180315660();
  }
  puStack_30 = &UNK_1805ec2ca;
  SparkEstilo__Liga__180720c80(uVar12,uVar1,0);
  bVar23 = false;
  if (*(char *)(lVar11 + 0x40) != '\0') {
    bVar23 = *(longlong *)(lVar11 + 0x38) != 0;
  }
  lVar11 = *(longlong *)(lVar11 + 0x28);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    puStack_30 = &UNK_1805ec2f1;
    func_0x000180315660();
  }
  if (cRam00000001834b41f5 == '\0') {
    puStack_30 = &UNK_180720ca5;
    FUN_180315380(TI_System.Action);
    puStack_30 = &UNK_180720cb1;
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b41f5 = '\x01';
  }
  if (lVar11 == 0) {
    return;
  }
  puStack_30 = &UNK_180720cd5;
  func_0x0001825cbbd0(lVar11,bVar23,0);
  puStack_30 = &UNK_180720cdf;
  plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_userData(lVar11,0);
  if (plVar13 != (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
    if (*plVar13 == TI_System.Action) {
      plVar15 = plVar13;
    }
    if (plVar15 != (longlong *)0x0) {
      puStack_30 = &UNK_180720d03;
      lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
      puStack_30 = &UNK_180720d15;
      uVar12 = func_0x000182601c10(0x3f800000,0);
      if (lVar11 != 0) {
        puStack_30 = &UNK_180720d35;
        FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle,lVar11,uVar12);
        puStack_30 = &UNK_180720d40;
        (*(code *)plVar15[3])(plVar15[8],plVar15[5]);
        return;
      }
      goto DAT_180720da6;
    }
  }
  puStack_30 = &UNK_180720d5a;
  plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
  if (bVar23 == false) {
    uVar24 = 0x3ecccccd;
  }
  else {
    uVar24 = 0x3f800000;
  }
  puStack_30 = &UNK_180720d7b;
  uVar12 = func_0x000182601c10(uVar24,0);
  if (plVar13 != (longlong *)0x0) {
    uVar20 = 0;
    lVar11 = *plVar13;
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar14 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) + 0x5b)
                     * 0x10 + 0x138 + lVar11);
          goto LAB_1800050ad;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(ushort *)(lVar11 + 0x12e));
    }
    puStack_30 = &LAB_1800050ad;
    puVar14 = (undefined8 *)FUN_180312860(plVar13);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar14)(plVar13,uVar12,puVar14[1]);
    return;
  }
DAT_180720da6:
  puStack_30 = &UNK_180720dab;
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

