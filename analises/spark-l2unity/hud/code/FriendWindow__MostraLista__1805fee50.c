// FriendWindow__MostraLista__1805fee50 @ 0x1805fee50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FriendWindow__MostraLista__1805fee50(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  ushort uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong alStackX_8 [2];
  uint auStackX_18 [2];
  longlong lStackX_20;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined4 *puStack_120;
  longlong lStack_118;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong lStack_b8;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  
  alStackX_8[0] = param_1;
  if (cRam00000001834b3c06 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAmigos.Amigo>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAmigos.Amigo>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAmigos.Amigo>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_FriendWindow);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAmigos.Amigo>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAmigos.Amigo>.get_Count);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkAmigos);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_FriendWindow.__c__DisplayClass23_0._MostraLista_b__0);
    FUN_180315380(TI_FriendWindow.<>c__DisplayClass23_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Your friend list is empty.'");
    FUN_180315380(LIT_"'Offline'");
    FUN_180315380(LIT_"'Friends: {0}   Online: {1}'");
    FUN_180315380(LIT_"'Online'");
    cRam00000001834b3c06 = '\x01';
  }
  if ((*(char *)(param_1 + 0x88) == '\0') || (*(longlong *)(param_1 + 0xa0) == 0)) {
    return;
  }
  UnityEngine_UIElements_VisualElement__Clear(*(undefined8 *)(param_1 + 0xa0),0);
  if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
    func_0x000180315660(TI_SparkAmigos);
  }
  if (**(longlong **)(TI_SparkAmigos + 0xb8) != 0) {
    uVar14 = 0;
    auStackX_18[0] = 0;
    FUN_180bada40(&uStack_168,**(longlong **)(TI_SparkAmigos + 0xb8),MR_System.Collections.Generic.List<SparkAmigos.Amigo>.GetEnumerator);
    uStack_c8 = uStack_168;
    uStack_c4 = uStack_164;
    uStack_c0 = uStack_160;
    uStack_bc = uStack_15c;
    lStack_b8 = CONCAT44(uStack_154,uStack_158);
    uStack_128 = 0;
    uVar15 = uVar14;
    puStack_120 = &uStack_c8;
    while( true ) {
      cVar2 = FUN_1812fa7e0(&uStack_c8,MR_System.Collections.Generic.List<SparkAmigos.Amigo>.MoveNext);
      lVar5 = lStack_b8;
      if (cVar2 == '\0') break;
      lStackX_20 = lStack_b8;
      lVar4 = func_0x000180315580(TI_FriendWindow.<>c__DisplayClass23_0);
      lStack_118 = lVar4;
      Gear__UpdateWeaponType__1803dadf0(lVar4,0);
      if (lVar4 == 0) goto code_r0x0001805ffa96;
      *(longlong *)(lVar4 + 0x18) = param_1;
      func_0x000180314690(lVar4 + 0x18,param_1);
      if (lVar5 == 0) goto code_r0x0001805ffa91;
      if (*(char *)(lVar5 + 0x20) != '\0') {
        auStackX_18[0] = (uint)uVar15 + 1;
      }
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar5 + 0x18);
      func_0x000180314690(lVar4 + 0x10);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = SparkEstilo__Linha__180720db0(0x1a,0);
      if (lVar5 == 0) goto code_r0x0001805ffa8c;
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
      uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
      if (lVar4 == 0) goto code_r0x0001805ffa87;
      FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar4,uVar6);
      lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
      if (lVar4 == 0) goto code_r0x0001805ffa82;
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
      lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
      puVar9 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,0x41000000,0);
      if (lVar8 == 0) goto code_r0x0001805ffa7d;
      uVar6 = *puVar9;
      uVar16 = *(undefined4 *)(puVar9 + 1);
      uStack_108 = uVar6;
      uStack_100 = uVar16;
      FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_108);
      if (lVar7 == 0) goto code_r0x0001805ffa78;
      uStack_f8 = uVar6;
      uStack_f0 = uVar16;
      FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_f8);
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
      puVar9 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(auStack_98,0x40800000,0);
      if (lVar7 == 0) goto code_r0x0001805ffa73;
      uStack_e8 = *puVar9;
      uStack_e0 = *(undefined4 *)(puVar9 + 1);
      FUN_1800050f0(0x4d,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_e8);
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
      puVar9 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(auStack_d8,0x41000000,0);
      if (lVar7 == 0) goto code_r0x0001805ffa6e;
      uStack_178 = *puVar9;
      uStack_170 = *(undefined4 *)(puVar9 + 1);
      FUN_1800050f0(0x4f,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_178);
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
      uVar6 = func_0x000182601c10(0,0);
      if (lVar7 == 0) goto code_r0x0001805ffa69;
      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
      lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
      lVar7 = lStackX_20;
      if (*(char *)(lStackX_20 + 0x20) == '\0') {
        uStack_138 = 0x3ecccccd;
        uStack_134 = 0x3ecccccd;
        uStack_130 = 0x3ecccccd;
        uStack_12c = 0x3f800000;
      }
      else {
        if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
          func_0x000180315660(TI_FriendWindow);
        }
        lVar10 = *(longlong *)(TI_FriendWindow + 0xb8);
        uStack_138 = *(undefined4 *)(lVar10 + 8);
        uStack_134 = *(undefined4 *)(lVar10 + 0xc);
        uStack_130 = *(undefined4 *)(lVar10 + 0x10);
        uStack_12c = *(undefined4 *)(lVar10 + 0x14);
      }
      puVar9 = (undefined8 *)
               UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_168,&uStack_138,0);
      if (lVar8 == 0) goto code_r0x0001805ffa64;
      uStack_198 = *puVar9;
      uStack_190 = puVar9[1];
      uStack_188 = *(undefined4 *)(puVar9 + 2);
      FUN_180004fc0(9,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_198);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_148 = 0;
      uStack_140 = 0;
      SparkEstilo__Borda__18071da60(lVar4,&uStack_148,0,0x40800000,0);
      UnityEngine_UIElements_VisualElement__Add(lVar5,lVar4,0);
      lVar4 = lStack_118;
      uVar6 = *(undefined8 *)(lStack_118 + 0x10);
      if (*(char *)(lVar7 + 0x20) == '\0') {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar8 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uVar16 = *(undefined4 *)(lVar8 + 0x50);
        uVar17 = *(undefined4 *)(lVar8 + 0x54);
        uVar18 = *(undefined4 *)(lVar8 + 0x58);
        uVar19 = *(undefined4 *)(lVar8 + 0x5c);
      }
      else {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar8 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uVar16 = *(undefined4 *)(lVar8 + 0x40);
        uVar17 = *(undefined4 *)(lVar8 + 0x44);
        uVar18 = *(undefined4 *)(lVar8 + 0x48);
        uVar19 = *(undefined4 *)(lVar8 + 0x4c);
      }
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_148 = CONCAT44(uVar17,uVar16);
      uStack_140 = CONCAT44(uVar19,uVar18);
      func_0x000180cb7cb0(&uStack_198,&uStack_148,MR_System.Nullable<UnityEngine.Color>..ctor);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_168 = (undefined4)uStack_198;
      uStack_164 = uStack_198._4_4_;
      uStack_160 = (undefined4)uStack_190;
      uStack_15c = uStack_190._4_4_;
      uStack_158 = uStack_188;
      lVar8 = SparkEstilo__Texto__180722af0(uVar6,0xb,&uStack_168,0,0);
      if (lVar8 == 0) goto code_r0x0001805ffa5f;
      lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
      uVar6 = func_0x000182601c10(0x3f800000,0);
      if (lVar10 == 0) goto code_r0x0001805ffa5a;
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar10,uVar6);
      UnityEngine_UIElements_VisualElement__Add(lVar5,lVar8,0);
      uVar12 = LIT_"'Online'";
      uVar6 = LIT_"'Offline'";
      if (*(char *)(lVar7 + 0x20) == '\0') {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uVar16 = *(undefined4 *)(lVar7 + 0x50);
        uVar17 = *(undefined4 *)(lVar7 + 0x54);
        uVar18 = *(undefined4 *)(lVar7 + 0x58);
        uVar19 = *(undefined4 *)(lVar7 + 0x5c);
      }
      else {
        if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
          func_0x000180315660(TI_FriendWindow);
        }
        lVar7 = *(longlong *)(TI_FriendWindow + 0xb8);
        uVar16 = *(undefined4 *)(lVar7 + 8);
        uVar17 = *(undefined4 *)(lVar7 + 0xc);
        uVar18 = *(undefined4 *)(lVar7 + 0x10);
        uVar19 = *(undefined4 *)(lVar7 + 0x14);
        uVar6 = uVar12;
      }
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_148 = CONCAT44(uVar17,uVar16);
      uStack_140 = CONCAT44(uVar19,uVar18);
      func_0x000180cb7cb0(&uStack_198,&uStack_148,MR_System.Nullable<UnityEngine.Color>..ctor);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_168 = (undefined4)uStack_198;
      uStack_164 = uStack_198._4_4_;
      uStack_160 = (undefined4)uStack_190;
      uStack_15c = uStack_190._4_4_;
      uStack_158 = uStack_188;
      uVar6 = SparkEstilo__Texto__180722af0(uVar6,10,&uStack_168,0,0);
      UnityEngine_UIElements_VisualElement__Add(lVar5,uVar6,0);
      param_1 = alStackX_8[0];
      uVar3 = System_String__Equals
                        (*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(alStackX_8[0] + 0xc0),5,0);
      SparkEstilo__Marca__180721270(lVar5,uVar3,0);
      uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
      FUN_18055b980(uVar6,lVar4,MD_FriendWindow.__c__DisplayClass23_0._MostraLista_b__0,0);
      FUN_180990d50(lVar5,uVar6,0);
      if (*(longlong *)(param_1 + 0xa0) == 0) goto code_r0x0001805ffa54;
      UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xa0),lVar5,0);
      uVar15 = (ulonglong)auStackX_18[0];
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_c8,MR_System.Collections.Generic.List<SparkAmigos.Amigo>.Dispose);
    if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (**(longlong **)(TI_SparkAmigos + 0xb8) != 0) {
      if (*(int *)(**(longlong **)(TI_SparkAmigos + 0xb8) + 0x18) != 0) {
code_r0x0001805ff938:
        plVar11 = *(longlong **)(param_1 + 0xa8);
        if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (**(longlong **)(TI_SparkAmigos + 0xb8) != 0) {
          alStackX_8[0] =
               CONCAT44(alStackX_8[0]._4_4_,
                        *(undefined4 *)(**(longlong **)(TI_SparkAmigos + 0xb8) + 0x18));
          uVar6 = func_0x000180314670(_DAT_1834c6268,alStackX_8);
          auStackX_18[0] = (uint)uVar15;
          uVar12 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
          uVar6 = System_String__Format(LIT_"'Friends: {0}   Online: {1}'",uVar6,uVar12,0);
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0xe48))(plVar11,uVar6,*(undefined8 *)(*plVar11 + 0xe50));
            return;
          }
        }
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      uStack_148 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
      uStack_140 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      func_0x000180cb7cb0(&uStack_198,&uStack_148,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_168 = (undefined4)uStack_198;
      uStack_164 = uStack_198._4_4_;
      uStack_160 = (undefined4)uStack_190;
      uStack_15c = uStack_190._4_4_;
      uStack_158 = uStack_188;
      lVar5 = SparkEstilo__Texto__180722af0(LIT_"'Your friend list is empty.'",0xb,&uStack_168,0,0);
      if (lVar5 != 0) {
        plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        puVar9 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(auStack_d8,0x41000000,0);
        if (plVar11 != (longlong *)0x0) {
          uVar6 = *puVar9;
          uVar16 = *(undefined4 *)(puVar9 + 1);
          lVar4 = *plVar11;
          uVar13 = 0;
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar9 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                          0x4d) * 0x10 + 0x138 + lVar4);
                goto code_r0x0001805ff869;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar9 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001805ff869:
          uStack_178 = uVar6;
          uStack_170 = uVar16;
          (*(code *)*puVar9)(plVar11,&uStack_178,puVar9[1]);
          plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
          puVar9 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(auStack_d8,0x40c00000,0);
          if (plVar11 != (longlong *)0x0) {
            uVar6 = *puVar9;
            uVar16 = *(undefined4 *)(puVar9 + 1);
            lVar4 = *plVar11;
            if (*(ushort *)(lVar4 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar14 * 0x10) + 0x51) *
                            0x10 + 0x138 + lVar4);
                  goto code_r0x0001805ff8fe;
                }
                uVar13 = (short)uVar14 + 1;
                uVar14 = (ulonglong)uVar13;
              } while (uVar13 < *(ushort *)(lVar4 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805ff8fe:
            uStack_178 = uVar6;
            uStack_170 = uVar16;
            (*(code *)*puVar9)(plVar11,&uStack_178,puVar9[1]);
            if (*(longlong *)(param_1 + 0xa0) != 0) {
              UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xa0),lVar5,0);
              goto code_r0x0001805ff938;
            }
          }
        }
      }
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUN_1803155d0();
code_r0x0001805ffa54:
  FUN_1803155d0();
code_r0x0001805ffa5a:
  FUN_1803155d0();
code_r0x0001805ffa5f:
  FUN_1803155d0();
code_r0x0001805ffa64:
  FUN_1803155d0();
code_r0x0001805ffa69:
  FUN_1803155d0();
code_r0x0001805ffa6e:
  FUN_1803155d0();
code_r0x0001805ffa73:
  FUN_1803155d0();
code_r0x0001805ffa78:
  FUN_1803155d0();
code_r0x0001805ffa7d:
  FUN_1803155d0();
code_r0x0001805ffa82:
  FUN_1803155d0();
code_r0x0001805ffa87:
  FUN_1803155d0();
code_r0x0001805ffa8c:
  FUN_1803155d0();
code_r0x0001805ffa91:
  FUN_1803155d0();
code_r0x0001805ffa96:
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

