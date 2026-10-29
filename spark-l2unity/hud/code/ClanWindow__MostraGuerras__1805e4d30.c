// ClanWindow__MostraGuerras__1805e4d30 @ 0x1805e4d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClanWindow__MostraGuerras__1805e4d30(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  ushort uVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 auStackX_20 [2];
  undefined8 uStack_248;
  undefined4 uStack_240;
  longlong lStack_238;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_208;
  undefined4 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [176];
  
  if (cRam00000001834b3b75 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Guerra>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<string>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Guerra>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Guerra>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_System.Collections.Generic.HashSet<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.HashSet<string>.Contains);
    FUN_180315380(MR_System.Collections.Generic.HashSet<string>..ctor);
    FUN_180315380(TI_System.Collections.Generic.HashSet<string>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Exists);
    FUN_180315380(MR_System.Collections.Generic.List<string>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Guerra>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_System.Predicate<string>);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkClan);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_System.StringComparer);
    FUN_180315380(TI_ClanWindow.<>c__DisplayClass113_0);
    FUN_180315380(MD_ClanWindow.__c__DisplayClass113_1._MostraGuerras_b__0);
    FUN_180315380(TI_ClanWindow.<>c__DisplayClass113_1);
    FUN_180315380(MD_ClanWindow.__c__DisplayClass113_2._MostraGuerras_b__1);
    FUN_180315380(TI_ClanWindow.<>c__DisplayClass113_2);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'AT WAR'");
    FUN_180315380(LIT_"'Data/UI/Assets/Clan/clan_DF_warlist_arrow'");
    FUN_180315380(LIT_"'UNDER ATTACK'");
    FUN_180315380(LIT_"'No clan wars. Type a clan name above and press Declare W...");
    FUN_180315380(LIT_"'DECLARED'");
    cRam00000001834b3b75 = '\x01';
  }
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uVar18 = 0;
  auStackX_20[0] = 0;
  lVar7 = func_0x000180315580(TI_ClanWindow.<>c__DisplayClass113_0);
  lStack_180 = lVar7;
  Gear__UpdateWeaponType__1803dadf0(lVar7,0);
  if (lVar7 != 0) {
    *(longlong *)(lVar7 + 0x10) = param_1;
    func_0x000180314690(lVar7 + 0x10,param_1);
    if (*(longlong *)(param_1 + 0x238) == 0) {
      return;
    }
    UnityEngine_UIElements_VisualElement__Clear(*(undefined8 *)(param_1 + 0x238),0);
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = SparkClan__Pode(0x20,0);
    bVar19 = false;
    if (cVar4 != '\0') {
      if (*(int *)(TI_SparkClan + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b3bbb == '\0') {
        FUN_180315380(TI_SparkClan);
        cRam00000001834b3bbb = '\x01';
      }
      if (*(int *)(TI_SparkClan + 0xe4) == 0) {
        func_0x000180315660();
      }
      bVar19 = 2 < *(int *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x1c);
    }
    *(bool *)(lVar7 + 0x18) = bVar19;
    uVar11 = *(undefined8 *)(param_1 + 600);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkEstilo__Liga__180720c80(uVar11,bVar19,0);
    SparkEstilo__Liga__180720c80(*(undefined8 *)(param_1 + 0x240),0,0);
    SparkEstilo__Liga__180720c80(*(undefined8 *)(param_1 + 0x248),0,0);
    SparkEstilo__Liga__180720c80(*(undefined8 *)(param_1 + 0x250),0,0);
    if (*(int *)(TI_System.StringComparer + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (DAT_1834b31cb == '\0') {
      FUN_180315380(TI_System.StringComparer);
      DAT_1834b31cb = '\x01';
    }
    if (*(int *)(TI_System.StringComparer + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar11 = *(undefined8 *)(*(longlong *)(TI_System.StringComparer + 0xb8) + 0x18);
    lVar7 = func_0x000180315580(TI_System.Collections.Generic.HashSet<string>);
    lStack_1e8 = lVar7;
    FUN_1814e26b0(lVar7,uVar11,MR_System.Collections.Generic.HashSet<string>..ctor);
    if (DAT_1834b31cb == '\0') {
      FUN_180315380(TI_System.StringComparer);
      DAT_1834b31cb = '\x01';
    }
    if (*(int *)(TI_System.StringComparer + 0xe4) == 0) {
      func_0x000180315660(TI_System.StringComparer);
    }
    uVar11 = *(undefined8 *)(*(longlong *)(TI_System.StringComparer + 0xb8) + 0x18);
    lVar8 = func_0x000180315580(TI_System.Collections.Generic.HashSet<string>);
    lStack_1e0 = lVar8;
    FUN_1814e26b0(lVar8,uVar11,MR_System.Collections.Generic.HashSet<string>..ctor);
    lVar9 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
    lStack_1d8 = lVar9;
    FUN_180bba2e0(lVar9,MR_System.Collections.Generic.List<string>..ctor);
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar10 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x68);
    if (lVar10 != 0) {
      lStack_238 = lVar8;
      lStack_1d0 = lVar9;
      FUN_180bada40(&uStack_1c8,lVar10,MR_System.Collections.Generic.List<SparkClan.Guerra>.GetEnumerator);
      uStack_148 = (undefined4)uStack_1c8;
      uStack_144 = uStack_1c8._4_4_;
      uStack_140 = (undefined4)uStack_1c0;
      uStack_13c = uStack_1c0._4_4_;
      uStack_138 = CONCAT44(uStack_1b4,uStack_1b8);
      uStack_208 = 0;
      puStack_200 = &uStack_148;
      while (cVar4 = FUN_1812fa7e0(&uStack_148,MR_System.Collections.Generic.List<SparkClan.Guerra>.MoveNext), cVar4 != '\0') {
        lVar10 = func_0x000180315580(TI_ClanWindow.<>c__DisplayClass113_1);
        Gear__UpdateWeaponType__1803dadf0(lVar10,0);
        if (lVar10 == 0) goto code_r0x0001805e5c44;
        *(undefined8 *)(lVar10 + 0x10) = uStack_138;
        func_0x000180314690(lVar10 + 0x10);
        lVar2 = *(longlong *)(lVar10 + 0x10);
        if (lVar2 == 0) goto code_r0x0001805e5c3f;
        lVar17 = lVar7;
        if (*(int *)(lVar2 + 0x18) != 0) {
          lVar17 = lVar8;
        }
        if (lVar17 == 0) goto code_r0x0001805e5c3a;
        func_0x0001814ce980(lVar17,*(undefined8 *)(lVar2 + 0x10),MR_System.Collections.Generic.HashSet<string>.Add);
        uVar11 = func_0x000180315580(TI_System.Predicate<string>);
        FUN_180d27680(uVar11,lVar10,MD_ClanWindow.__c__DisplayClass113_1._MostraGuerras_b__0);
        if (lVar9 == 0) goto code_r0x0001805e5c35;
        cVar4 = FUN_180bab060(lVar9,uVar11,MR_System.Collections.Generic.List<string>.Exists);
        if (cVar4 == '\0') {
          if (*(longlong *)(lVar10 + 0x10) == 0) goto code_r0x0001805e5c2f;
          FUN_180002eb0(lVar9,*(undefined8 *)(*(longlong *)(lVar10 + 0x10) + 0x10),MR_System.Collections.Generic.List<string>.Add);
        }
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_148,MR_System.Collections.Generic.List<SparkClan.Guerra>.Dispose);
      if (lVar9 != 0) {
        FUN_180bada40(&uStack_1c8,lVar9,MR_System.Collections.Generic.List<string>.GetEnumerator);
        uStack_198 = uStack_1c8;
        uStack_190 = uStack_1c0;
        uStack_188 = CONCAT44(uStack_1b4,uStack_1b8);
        uStack_1f8 = 0;
        puStack_1f0 = &uStack_198;
        while (cVar4 = FUN_1812fa7e0(&uStack_198,MR_System.Collections.Generic.List<string>.MoveNext), uVar11 = uStack_188, cVar4 != '\0'
              ) {
          uStack_178 = uStack_188;
          lVar9 = func_0x000180315580(TI_ClanWindow.<>c__DisplayClass113_2);
          Gear__UpdateWeaponType__1803dadf0(lVar9,0);
          if (lVar9 == 0) goto code_r0x0001805e5c91;
          *(longlong *)(lVar9 + 0x28) = lStack_180;
          func_0x000180314690(lVar9 + 0x28,lStack_180);
          if (lVar7 == 0) goto code_r0x0001805e5c8c;
          uVar5 = FUN_1814cf450(lVar7,uVar11,MR_System.Collections.Generic.HashSet<string>.Contains);
          *(undefined1 *)(lVar9 + 0x20) = uVar5;
          if (lVar8 == 0) goto code_r0x0001805e5c87;
          bVar6 = FUN_1814cf450(lVar8,uVar11,MR_System.Collections.Generic.HashSet<string>.Contains);
          if ((*(byte *)(lVar9 + 0x20) & bVar6) == 0) {
            bVar19 = *(char *)(lVar9 + 0x20) == '\0';
            lStack_238 = LIT_"'UNDER ATTACK'";
            if (!bVar19) {
              lStack_238 = LIT_"'DECLARED'";
            }
            uVar20 = 0x3f800000;
            uVar23 = 0x3f800000;
            if (bVar19) {
              uVar21 = 0x3f0ccccd;
              uVar22 = 0x3eb33333;
            }
            else {
              uVar21 = 0x3f400000;
              uVar22 = 0x3ecccccd;
            }
          }
          else {
            lStack_238 = LIT_"'AT WAR'";
            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
            uVar20 = *(undefined4 *)(lVar7 + 0x90);
            uVar21 = *(undefined4 *)(lVar7 + 0x94);
            uVar22 = *(undefined4 *)(lVar7 + 0x98);
            uVar23 = *(undefined4 *)(lVar7 + 0x9c);
          }
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar11 = SparkEstilo__Linha__180720db0(0x1a,0);
          *(undefined8 *)(lVar9 + 0x10) = uVar11;
          func_0x000180314690(lVar9 + 0x10,uVar11);
          lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
          UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
          if (lVar7 == 0) goto code_r0x0001805e5c82;
          lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          puVar12 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(auStack_e8,0x41800000,0);
          if (lVar10 == 0) goto code_r0x0001805e5c7d;
          uVar11 = *puVar12;
          uVar1 = *(undefined4 *)(puVar12 + 1);
          uStack_168 = uVar11;
          uStack_160 = uVar1;
          FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar10,&uStack_168);
          if (lVar8 == 0) goto code_r0x0001805e5c78;
          uStack_158 = uVar11;
          uStack_150 = uVar1;
          FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_158);
          lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          puVar12 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_208,0x40c00000,0);
          if (lVar8 == 0) goto code_r0x0001805e5c73;
          uStack_248 = *puVar12;
          uStack_240 = *(undefined4 *)(puVar12 + 1);
          FUN_1800050f0(0x4f,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_248);
          lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          uVar11 = func_0x000182601c10(0,0);
          if (lVar8 == 0) goto code_r0x0001805e5c6e;
          FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar11);
          lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          uVar11 = LIT_"'Data/UI/Assets/Clan/clan_DF_warlist_arrow'";
          if ((*(byte *)(lVar9 + 0x20) & bVar6) == 0) {
            auStackX_20[0] = 1;
            if (*(char *)(lVar9 + 0x20) == '\0') {
              auStackX_20[0] = 2;
            }
          }
          else {
            auStackX_20[0] = 3;
          }
          uVar13 = System_Int32__ToString(auStackX_20,0);
          uVar11 = System_String__Concat(uVar11,uVar13,0);
          if (*(int *)(TI_SparkArte + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar11 = FUN_180a90ae0(uVar11,MR_SparkArte.Load<UnityEngine.Texture2D>);
          puVar12 = (undefined8 *)
                    UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_1c8,uVar11,0);
          if (lVar8 == 0) goto code_r0x0001805e5c69;
          uStack_118 = *puVar12;
          uStack_110 = puVar12[1];
          uStack_108 = *(undefined4 *)(puVar12 + 2);
          uStack_104 = *(undefined4 *)((longlong)puVar12 + 0x14);
          uStack_100 = *(undefined4 *)(puVar12 + 3);
          uStack_fc = *(undefined4 *)((longlong)puVar12 + 0x1c);
          uStack_f8 = puVar12[4];
          FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_118);
          if (*(longlong *)(lVar9 + 0x10) == 0) goto code_r0x0001805e5c64;
          UnityEngine_UIElements_VisualElement__Add(*(longlong *)(lVar9 + 0x10),lVar7,0);
          lVar7 = *(longlong *)(lVar9 + 0x10);
          if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar11 = uStack_178;
          uStack_1c8 = 0;
          uStack_1c0 = 0;
          uStack_1b8 = 0;
          uVar13 = ClanWindow__Coluna(uStack_178,300,&uStack_1c8,0);
          if (lVar7 == 0) goto code_r0x0001805e5c5f;
          UnityEngine_UIElements_VisualElement__Add(lVar7,uVar13,0);
          lVar7 = *(longlong *)(lVar9 + 0x10);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660();
          }
          uStack_228 = CONCAT44(uVar21,uVar20);
          uStack_220 = CONCAT44(uVar23,uVar22);
          uVar13 = SparkEstilo__Etiqueta__18071fef0(lStack_238,&uStack_228,0);
          if (lVar7 == 0) goto code_r0x0001805e5c5a;
          UnityEngine_UIElements_VisualElement__Add(lVar7,uVar13,0);
          *(undefined8 *)(lVar9 + 0x18) = uVar11;
          func_0x000180314690(lVar9 + 0x18,uVar11);
          lVar7 = *(longlong *)(lVar9 + 0x10);
          uVar11 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
          FUN_18055b980(uVar11,lVar9,MD_ClanWindow.__c__DisplayClass113_2._MostraGuerras_b__1,0);
          if (lVar7 == 0) goto code_r0x0001805e5c55;
          FUN_180990d50(lVar7,uVar11,0);
          if (*(longlong *)(param_1 + 0x238) == 0) goto code_r0x0001805e5c50;
          UnityEngine_UIElements_VisualElement__Add
                    (*(longlong *)(param_1 + 0x238),*(undefined8 *)(lVar9 + 0x10),0);
          lVar8 = lStack_1e0;
          lVar7 = lStack_1e8;
        }
        Gear__UpdateWeaponType__1803dadf0(&uStack_198,MR_System.Collections.Generic.List<string>.Dispose);
        if (*(int *)(lStack_1d8 + 0x18) != 0) {
          return;
        }
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        uStack_1f8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
        puStack_1f0 = *(undefined8 **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
        uStack_228 = 0;
        uStack_220 = 0;
        uStack_218 = 0;
        func_0x000180cb7cb0(&uStack_228,&uStack_1f8,MR_System.Nullable<UnityEngine.Color>..ctor);
        uStack_1c8 = uStack_228;
        uStack_1c0 = uStack_220;
        uStack_1b8 = uStack_218;
        lVar7 = SparkEstilo__Texto__180722af0(LIT_"'No clan wars. Type a clan name above and press Declare W...",0xb,&uStack_1c8,0,0);
        if (lVar7 != 0) {
          plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          plVar15 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          puVar12 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_208,0x41000000,0);
          if (plVar15 != (longlong *)0x0) {
            uVar11 = *puVar12;
            uVar20 = *(undefined4 *)(puVar12 + 1);
            lVar8 = *plVar15;
            uVar16 = 0;
            if (*(ushort *)(lVar8 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar12 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) +
                             0x51) * 0x10 + 0x138 + lVar8);
                  goto code_r0x0001805e5ae7;
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 < *(ushort *)(lVar8 + 0x12e));
            }
            puVar12 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805e5ae7:
            uStack_248 = uVar11;
            uStack_240 = uVar20;
            (*(code *)*puVar12)(plVar15,&uStack_248,puVar12[1]);
            if (plVar14 != (longlong *)0x0) {
              lVar8 = *plVar14;
              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                do {
                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar18 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar12 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar18 * 0x10) + 0x4d) *
                               0x10 + 0x138 + lVar8);
                    goto code_r0x0001805e5b59;
                  }
                  uVar16 = (short)uVar18 + 1;
                  uVar18 = (ulonglong)uVar16;
                } while (uVar16 < *(ushort *)(lVar8 + 0x12e));
              }
              puVar12 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001805e5b59:
              uStack_248 = uVar11;
              uStack_240 = uVar20;
              (*(code *)*puVar12)(plVar14,&uStack_248,puVar12[1]);
              if (*(longlong *)(param_1 + 0x238) != 0) {
                UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x238),lVar7,0);
                return;
              }
            }
          }
        }
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  FUN_1803155d0();
code_r0x0001805e5c2f:
  FUN_1803155d0();
code_r0x0001805e5c35:
  FUN_1803155d0();
code_r0x0001805e5c3a:
  FUN_1803155d0();
code_r0x0001805e5c3f:
  FUN_1803155d0();
code_r0x0001805e5c44:
  FUN_1803155d0();
  FUN_180311490();
code_r0x0001805e5c50:
  FUN_1803155d0();
code_r0x0001805e5c55:
  FUN_1803155d0();
code_r0x0001805e5c5a:
  FUN_1803155d0();
code_r0x0001805e5c5f:
  FUN_1803155d0();
code_r0x0001805e5c64:
  FUN_1803155d0();
code_r0x0001805e5c69:
  FUN_1803155d0();
code_r0x0001805e5c6e:
  FUN_1803155d0();
code_r0x0001805e5c73:
  FUN_1803155d0();
code_r0x0001805e5c78:
  FUN_1803155d0();
code_r0x0001805e5c7d:
  FUN_1803155d0();
code_r0x0001805e5c82:
  FUN_1803155d0();
code_r0x0001805e5c87:
  FUN_1803155d0();
code_r0x0001805e5c8c:
  FUN_1803155d0();
code_r0x0001805e5c91:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

