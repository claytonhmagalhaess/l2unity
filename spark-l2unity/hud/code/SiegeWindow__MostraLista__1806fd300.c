// SiegeWindow__MostraLista__1806fd300 @ 0x1806fd300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SiegeWindow__MostraLista__1806fd300(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ushort uVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined1 auStack_88 [16];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  
  if (cRam00000001834b4108 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_System.Collections.Generic.List<SparkSiege.Cla>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkSiege.Cla>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkSiege.Cla>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkSiege.Cla>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkSiege.Cla>.get_Count);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkSiege);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MD_SiegeWindow.__c__DisplayClass22_0._MostraLista_b__0);
    FUN_180315380(MD_SiegeWindow.__c__DisplayClass22_0._MostraLista_b__1);
    FUN_180315380(TI_SiegeWindow.<>c__DisplayClass22_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Refuse'");
    FUN_180315380(LIT_"'  <color=#E8D4A0>[Owner]</color>'");
    FUN_180315380(LIT_"'No attacking clans registered.'");
    FUN_180315380(LIT_"'    Alliance: '");
    FUN_180315380(LIT_"'Leader: '");
    FUN_180315380(LIT_"'No defending clans registered.'");
    FUN_180315380(LIT_"'  <color=#FF9A80>[Waiting approval]</color>'");
    FUN_180315380(LIT_"'  <color=#7FE0C8>[Approved]</color>'");
    FUN_180315380(LIT_"'Approve'");
    FUN_180315380(LIT_"''");
    cRam00000001834b4108 = '\x01';
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    iVar1 = *(int *)(param_1 + 0x8c);
    if (iVar1 == 1) {
      if (*(int *)(TI_SparkSiege + 0xe4) == 0) {
        func_0x000180315660(TI_SparkSiege);
      }
      lVar12 = *(longlong *)(*(longlong *)(TI_SparkSiege + 0xb8) + 0x40);
    }
    else {
      if (*(int *)(TI_SparkSiege + 0xe4) == 0) {
        func_0x000180315660(TI_SparkSiege);
      }
      lVar12 = *(longlong *)(*(longlong *)(TI_SparkSiege + 0xb8) + 0x38);
    }
    if ((*(longlong *)(param_1 + 0xb8) == 0) ||
       (UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xb8),0), lVar12 == 0))
    {
      FUN_1803155d0();
code_r0x0001806fdd6f:
      FUN_1803155d0();
code_r0x0001806fdd75:
      FUN_1803155d0();
code_r0x0001806fdd7a:
      FUN_1803155d0();
code_r0x0001806fdd7f:
      FUN_1803155d0();
code_r0x0001806fdd84:
      FUN_1803155d0();
code_r0x0001806fdd89:
      FUN_1803155d0();
code_r0x0001806fdd8e:
      FUN_1803155d0();
code_r0x0001806fdd93:
      FUN_1803155d0();
code_r0x0001806fdd98:
      FUN_1803155d0();
code_r0x0001806fdd9d:
      FUN_1803155d0();
      FUN_180311490();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)(lVar12 + 0x18) == 0) {
      uVar10 = LIT_"'No attacking clans registered.'";
      if (iVar1 == 1) {
        uVar10 = LIT_"'No defending clans registered.'";
      }
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar12 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uStack_a8 = *(undefined4 *)(lVar12 + 0x50);
      uStack_a4 = *(undefined4 *)(lVar12 + 0x54);
      uStack_a0 = *(undefined4 *)(lVar12 + 0x58);
      uStack_9c = *(undefined4 *)(lVar12 + 0x5c);
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      func_0x000180cb7cb0(&uStack_e8,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_c8 = (undefined4)uStack_e8;
      uStack_c4 = uStack_e8._4_4_;
      uStack_c0 = (undefined4)uStack_e0;
      uStack_bc = uStack_e0._4_4_;
      uStack_b8 = uStack_d8;
      uVar15 = 0;
      lVar12 = SparkEstilo__Texto__180722af0(uVar10,0xb,&uStack_c8,0,0);
      if (lVar12 != 0) {
        plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
        puVar11 = (undefined8 *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(auStack_88,0x41000000,0);
        if (plVar9 != (longlong *)0x0) {
          uVar10 = *puVar11;
          uVar2 = *(undefined4 *)(puVar11 + 1);
          lVar6 = *plVar9;
          uVar14 = 0;
          if (*(ushort *)(lVar6 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar11 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                           0x4d) * 0x10 + 0x138 + lVar6);
                goto code_r0x0001806fdc39;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(ushort *)(lVar6 + 0x12e));
          }
          puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001806fdc39:
          uStack_f8 = uVar10;
          uStack_f0 = uVar2;
          (*(code *)*puVar11)(plVar9,&uStack_f8,puVar11[1]);
          plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
          puVar11 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(auStack_88,0x40c00000,0);
          if (plVar9 != (longlong *)0x0) {
            uVar10 = *puVar11;
            uVar2 = *(undefined4 *)(puVar11 + 1);
            lVar6 = *plVar9;
            if (*(ushort *)(lVar6 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar11 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar15 * 0x10) + 0x51) *
                             0x10 + 0x138 + lVar6);
                  goto code_r0x0001806fdcce;
                }
                uVar14 = (short)uVar15 + 1;
                uVar15 = (ulonglong)uVar14;
              } while (uVar14 < *(ushort *)(lVar6 + 0x12e));
            }
            puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001806fdcce:
            uStack_f8 = uVar10;
            uStack_f0 = uVar2;
            (*(code *)*puVar11)(plVar9,&uStack_f8,puVar11[1]);
            if (*(longlong *)(param_1 + 0xb8) != 0) {
              UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xb8),lVar12,0);
              return;
            }
          }
        }
      }
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_180bada40(&uStack_c8,lVar12,MR_System.Collections.Generic.List<SparkSiege.Cla>.GetEnumerator);
    uStack_78 = uStack_c8;
    uStack_74 = uStack_c4;
    uStack_70 = uStack_c0;
    uStack_6c = uStack_bc;
    lStack_68 = CONCAT44(uStack_b4,uStack_b8);
    uStack_98 = 0;
    puStack_90 = &uStack_78;
    while (cVar5 = FUN_1812fa7e0(&uStack_78,MR_System.Collections.Generic.List<SparkSiege.Cla>.MoveNext), lVar12 = lStack_68, cVar5 != '\0'
          ) {
      lVar6 = func_0x000180315580(TI_SiegeWindow.<>c__DisplayClass22_0);
      Gear__UpdateWeaponType__1803dadf0(lVar6,0);
      if (lVar6 == 0) goto code_r0x0001806fdd9d;
      *(longlong *)(lVar6 + 0x10) = lVar12;
      func_0x000180314690(lVar6 + 0x10,lVar12);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar7 = SparkEstilo__Linha__180720db0(0x26,0);
      lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar8,0);
      if (lVar8 == 0) goto code_r0x0001806fdd98;
      plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
      uVar10 = func_0x000182601c10(0x3f800000,0);
      if (plVar9 == (longlong *)0x0) goto code_r0x0001806fdd93;
      lVar3 = *plVar9;
      uVar14 = 0;
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        uVar13 = uVar14;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar11 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0x3b)
                       * 0x10 + 0x138 + lVar3);
            goto code_r0x0001806fd679;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x3b);
code_r0x0001806fd679:
      (*(code *)*puVar11)(plVar9,uVar10,puVar11[1]);
      plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
      uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
      if (plVar9 == (longlong *)0x0) goto code_r0x0001806fdd8e;
      lVar3 = *plVar9;
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar11 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 0x45)
                       * 0x10 + 0x138 + lVar3);
            goto code_r0x0001806fd6f7;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x45);
code_r0x0001806fd6f7:
      (*(code *)*puVar11)(plVar9,uVar10,puVar11[1]);
      uVar10 = LIT_"''";
      if (iVar1 == 1) {
        if (lVar12 == 0) goto code_r0x0001806fdd89;
        uVar10 = LIT_"'  <color=#E8D4A0>[Owner]</color>'";
        if ((*(int *)(lVar12 + 0x38) != 1) &&
           (uVar10 = LIT_"'  <color=#7FE0C8>[Approved]</color>'", *(int *)(lVar12 + 0x38) == 2)) {
          uVar10 = LIT_"'  <color=#FF9A80>[Waiting approval]</color>'";
        }
      }
      if (lVar12 == 0) goto code_r0x0001806fdd84;
      uVar10 = System_String__Concat(*(undefined8 *)(lVar12 + 0x18),uVar10,0);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar3 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uStack_a8 = *(undefined4 *)(lVar3 + 0x40);
      uStack_a4 = *(undefined4 *)(lVar3 + 0x44);
      uStack_a0 = *(undefined4 *)(lVar3 + 0x48);
      uStack_9c = *(undefined4 *)(lVar3 + 0x4c);
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      func_0x000180cb7cb0(&uStack_e8,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_c8 = (undefined4)uStack_e8;
      uStack_c4 = uStack_e8._4_4_;
      uStack_c0 = (undefined4)uStack_e0;
      uStack_bc = uStack_e0._4_4_;
      uStack_b8 = uStack_d8;
      uVar10 = SparkEstilo__Texto__180722af0(uVar10,0xb,&uStack_c8,0,0);
      UnityEngine_UIElements_VisualElement__Add(lVar8,uVar10,0);
      cVar5 = func_0x000181707e50(*(undefined8 *)(lVar12 + 0x30),0);
      uVar10 = LIT_"''";
      if (cVar5 == '\0') {
        uVar10 = System_String__Concat(LIT_"'    Alliance: '",*(undefined8 *)(lVar12 + 0x30),0);
      }
      uVar10 = System_String__Concat(LIT_"'Leader: '",*(undefined8 *)(lVar12 + 0x20),uVar10,0);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar3 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uStack_a8 = *(undefined4 *)(lVar3 + 0x50);
      uStack_a4 = *(undefined4 *)(lVar3 + 0x54);
      uStack_a0 = *(undefined4 *)(lVar3 + 0x58);
      uStack_9c = *(undefined4 *)(lVar3 + 0x5c);
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      func_0x000180cb7cb0(&uStack_e8,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_c8 = (undefined4)uStack_e8;
      uStack_c4 = uStack_e8._4_4_;
      uStack_c0 = (undefined4)uStack_e0;
      uStack_bc = uStack_e0._4_4_;
      uStack_b8 = uStack_d8;
      uVar10 = SparkEstilo__Texto__180722af0(uVar10,10,&uStack_c8,0,0);
      UnityEngine_UIElements_VisualElement__Add(lVar8,uVar10,0);
      if (lVar7 == 0) goto code_r0x0001806fdd7f;
      UnityEngine_UIElements_VisualElement__Add(lVar7,lVar8,0);
      if (iVar1 == 1) {
        if (*(int *)(TI_SparkSiege + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = FUN_1806f7f60(0);
        if ((cVar5 != '\0') && (*(int *)(lVar12 + 0x38) == 2)) {
          uVar10 = func_0x000180315580(TI_System.Action);
          FUN_1816a9c60(uVar10,lVar6,MD_SiegeWindow.__c__DisplayClass22_0._MostraLista_b__0,0);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar10 = SparkEstilo__Botao__18071e130(LIT_"'Approve'",uVar10,0x46,0,0);
          UnityEngine_UIElements_VisualElement__Add(lVar7,uVar10,0);
          lVar12 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
          UnityEngine_UIElements_VisualElement___ctor(lVar12,0);
          if (lVar12 == 0) goto code_r0x0001806fdd75;
          lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
          puVar11 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(auStack_88,0x40800000,0);
          if (lVar8 == 0) goto code_r0x0001806fdd6f;
          uStack_f8 = *puVar11;
          uStack_f0 = *(undefined4 *)(puVar11 + 1);
          FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_f8);
          UnityEngine_UIElements_VisualElement__Add(lVar7,lVar12,0);
          uVar10 = func_0x000180315580(TI_System.Action);
          FUN_1816a9c60(uVar10,lVar6,MD_SiegeWindow.__c__DisplayClass22_0._MostraLista_b__1,0);
          uVar10 = SparkEstilo__Botao__18071e130(LIT_"'Refuse'",uVar10,0x40,1,0);
          UnityEngine_UIElements_VisualElement__Add(lVar7,uVar10,0);
        }
      }
      if (*(longlong *)(param_1 + 0xb8) == 0) goto code_r0x0001806fdd7a;
      UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xb8),lVar7,0);
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_78,MR_System.Collections.Generic.List<SparkSiege.Cla>.Dispose);
  }
  return;
}

