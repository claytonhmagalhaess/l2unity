// MailWindow__MostraLista__180661210 @ 0x180661210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MailWindow__MostraLista__180661210(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
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
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_78;
  undefined4 *puStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  
  if (cRam00000001834b3d95 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCorreio.Carta>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCorreio.Carta>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCorreio.Carta>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCorreio.Carta>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCorreio.Carta>.get_Count);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkCorreio);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_string__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(TI_MailWindow.<>c__DisplayClass53_0);
    FUN_180315380(MD_MailWindow.__c__DisplayClass53_1._MostraLista_b__0);
    FUN_180315380(TI_MailWindow.<>c__DisplayClass53_1);
    FUN_180315380(LIT_"': '");
    FUN_180315380(LIT_"'To'");
    FUN_180315380(LIT_"'System'");
    FUN_180315380(LIT_"'From'");
    FUN_180315380(LIT_"'Your inbox is empty.'");
    FUN_180315380(LIT_"'You have not sent any mail.'");
    FUN_180315380(LIT_"' <color=#FF9A80>[COD]</color>'");
    FUN_180315380(LIT_"' <color=#A0A0A0>[returned]</color>'");
    FUN_180315380(LIT_"'    expires in '");
    FUN_180315380(LIT_"' <color=#E8D4A0>[item]</color>'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'(no subject)'");
    cRam00000001834b3d95 = '\x01';
  }
  lVar6 = func_0x000180315580(TI_MailWindow.<>c__DisplayClass53_0);
  Gear__UpdateWeaponType__1803dadf0(lVar6,0);
  if (*(char *)(param_1 + 0x88) == '\0') {
    return;
  }
  if (lVar6 != 0) {
    iVar3 = *(int *)(param_1 + 0x8c);
    *(bool *)(lVar6 + 0x10) = iVar3 == 0;
    if (iVar3 == 0) {
      if (*(int *)(TI_SparkCorreio + 0xe4) == 0) {
        func_0x000180315660(TI_SparkCorreio);
      }
      lVar15 = **(longlong **)(TI_SparkCorreio + 0xb8);
    }
    else {
      if (*(int *)(TI_SparkCorreio + 0xe4) == 0) {
        func_0x000180315660(TI_SparkCorreio);
      }
      lVar15 = *(longlong *)(*(longlong *)(TI_SparkCorreio + 0xb8) + 8);
    }
    if ((*(longlong *)(param_1 + 0xc0) != 0) &&
       (UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xc0),0), lVar15 != 0))
    {
      uVar10 = LIT_"''";
      if ((*(int *)(lVar15 + 0x18) == 0) &&
         (uVar10 = LIT_"'You have not sent any mail.'", *(char *)(lVar6 + 0x10) != '\0')) {
        uVar10 = LIT_"'Your inbox is empty.'";
      }
      plVar9 = *(longlong **)(param_1 + 200);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0xe48))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0xe50));
        FUN_180bada40(&uStack_98,lVar15,MR_System.Collections.Generic.List<SparkCorreio.Carta>.GetEnumerator);
        uStack_58 = uStack_98;
        uStack_54 = uStack_94;
        uStack_50 = uStack_90;
        uStack_4c = uStack_8c;
        lStack_48 = CONCAT44(uStack_84,uStack_88);
        uStack_78 = 0;
        puStack_70 = &uStack_58;
        while( true ) {
          cVar5 = FUN_1812fa7e0(&uStack_58,MR_System.Collections.Generic.List<SparkCorreio.Carta>.MoveNext);
          lVar15 = lStack_48;
          if (cVar5 == '\0') {
            Gear__UpdateWeaponType__1803dadf0(&uStack_58,MR_System.Collections.Generic.List<SparkCorreio.Carta>.Dispose);
            return;
          }
          lVar7 = func_0x000180315580(TI_MailWindow.<>c__DisplayClass53_1);
          Gear__UpdateWeaponType__1803dadf0(lVar7,0);
          if (lVar7 == 0) goto code_r0x000180661aeb;
          *(longlong *)(lVar7 + 0x18) = lVar6;
          func_0x000180314690(lVar7 + 0x18,lVar6);
          *(longlong *)(lVar7 + 0x10) = lVar15;
          func_0x000180314690(lVar7 + 0x10,lVar15);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar8 = SparkEstilo__Linha__180720db0(0x26,0);
          if (lVar8 == 0) break;
          plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          uVar10 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
          if (plVar9 == (longlong *)0x0) {
code_r0x000180661ae1:
            FUN_1803155d0();
            break;
          }
          lVar12 = *plVar9;
          if (*(ushort *)(lVar12 + 0x12e) != 0) {
            uVar13 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar11 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                           0x39) * 0x10 + 0x138 + lVar12);
                goto code_r0x0001806615f9;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(ushort *)(lVar12 + 0x12e));
          }
          puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x39);
code_r0x0001806615f9:
          (*(code *)*puVar11)(plVar9,uVar10,puVar11[1]);
          plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
          if (plVar9 == (longlong *)0x0) {
code_r0x000180661adc:
            FUN_1803155d0();
            goto code_r0x000180661ae1;
          }
          lVar12 = *plVar9;
          if (*(ushort *)(lVar12 + 0x12e) != 0) {
            uVar13 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar11 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                           0x45) * 0x10 + 0x138 + lVar12);
                goto code_r0x000180661689;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(ushort *)(lVar12 + 0x12e));
          }
          puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x45);
code_r0x000180661689:
          (*(code *)*puVar11)(plVar9,uVar10,puVar11[1]);
          if (lVar15 == 0) {
code_r0x000180661ad7:
            FUN_1803155d0();
            goto code_r0x000180661adc;
          }
          uVar10 = LIT_"''";
          if (*(char *)(lVar15 + 0x31) != '\0') {
            uVar10 = LIT_"' <color=#E8D4A0>[item]</color>'";
          }
          uVar14 = LIT_"''";
          if (*(char *)(lVar15 + 0x28) != '\0') {
            uVar14 = LIT_"' <color=#FF9A80>[COD]</color>'";
          }
          uVar16 = LIT_"''";
          if (*(char *)(lVar15 + 0x32) != '\0') {
            uVar16 = LIT_"' <color=#A0A0A0>[returned]</color>'";
          }
          uVar10 = System_String__Concat(uVar10,uVar14,uVar16,0);
          if (*(longlong *)(lVar7 + 0x18) == 0) {
code_r0x000180661ad2:
            FUN_1803155d0();
            goto code_r0x000180661ad7;
          }
          if ((*(byte *)(lVar15 + 0x30) & *(byte *)(*(longlong *)(lVar7 + 0x18) + 0x10)) == 0) {
            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
              func_0x000180315660(TI_SparkEstilo);
            }
            lVar12 = *(longlong *)(TI_SparkEstilo + 0xb8);
            uVar17 = *(undefined4 *)(lVar12 + 0x40);
            uVar18 = *(undefined4 *)(lVar12 + 0x44);
            uVar19 = *(undefined4 *)(lVar12 + 0x48);
            uVar20 = *(undefined4 *)(lVar12 + 0x4c);
          }
          else {
            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
              func_0x000180315660(TI_SparkEstilo);
            }
            lVar12 = *(longlong *)(TI_SparkEstilo + 0xb8);
            uVar17 = *(undefined4 *)(lVar12 + 0x60);
            uVar18 = *(undefined4 *)(lVar12 + 100);
            uVar19 = *(undefined4 *)(lVar12 + 0x68);
            uVar20 = *(undefined4 *)(lVar12 + 0x6c);
          }
          cVar5 = func_0x000181707e50(*(undefined8 *)(lVar15 + 0x18),0);
          uVar14 = LIT_"'(no subject)'";
          if (cVar5 == '\0') {
            uVar14 = *(undefined8 *)(lVar15 + 0x18);
          }
          uVar10 = System_String__Concat(uVar14,uVar10,0);
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_68 = uVar17;
          uStack_64 = uVar18;
          uStack_60 = uVar19;
          uStack_5c = uVar20;
          func_0x000180cb7cb0(&uStack_b8,&uStack_68,MR_System.Nullable<UnityEngine.Color>..ctor);
          if (*(longlong *)(lVar7 + 0x18) == 0) {
code_r0x000180661acd:
            FUN_1803155d0();
            goto code_r0x000180661ad2;
          }
          bVar1 = *(byte *)(lVar15 + 0x30);
          bVar2 = *(byte *)(*(longlong *)(lVar7 + 0x18) + 0x10);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660();
          }
          uStack_98 = (undefined4)uStack_b8;
          uStack_94 = uStack_b8._4_4_;
          uStack_90 = (undefined4)uStack_b0;
          uStack_8c = uStack_b0._4_4_;
          uStack_88 = uStack_a8;
          uVar10 = SparkEstilo__Texto__180722af0(uVar10,0xb,&uStack_98,bVar2 & bVar1,0);
          UnityEngine_UIElements_VisualElement__Add(lVar8,uVar10,0);
          uVar10 = LIT_"'System'";
          if (*(char *)(lVar15 + 0x14) == '\0') {
            uVar10 = *(undefined8 *)(lVar15 + 0x20);
          }
          lVar12 = func_0x000180314710(TI_string__,5);
          if (*(longlong *)(lVar7 + 0x18) == 0) {
code_r0x000180661ac8:
            FUN_1803155d0();
            goto code_r0x000180661acd;
          }
          uVar14 = LIT_"'From'";
          if (*(char *)(*(longlong *)(lVar7 + 0x18) + 0x10) == '\0') {
            uVar14 = LIT_"'To'";
          }
          if (lVar12 == 0) {
code_r0x000180661ac3:
            FUN_1803155d0();
            goto code_r0x000180661ac8;
          }
          if (*(int *)(lVar12 + 0x18) == 0) {
            FUN_1803155c0();
code_r0x000180661aaa:
            FUN_1803155c0();
code_r0x000180661aaf:
            FUN_1803155c0();
code_r0x000180661ab4:
            FUN_1803155c0();
code_r0x000180661ab9:
            FUN_1803155c0();
code_r0x000180661abe:
            FUN_1803155d0();
            goto code_r0x000180661ac3;
          }
          *(undefined8 *)(lVar12 + 0x20) = uVar14;
          func_0x000180314690(lVar12 + 0x20);
          if (*(uint *)(lVar12 + 0x18) < 2) goto code_r0x000180661aaa;
          *(undefined8 *)(lVar12 + 0x28) = LIT_"': '";
          func_0x000180314690(lVar12 + 0x28);
          if (*(uint *)(lVar12 + 0x18) < 3) goto code_r0x000180661aaf;
          *(undefined8 *)(lVar12 + 0x30) = uVar10;
          func_0x000180314690(lVar12 + 0x30,uVar10);
          if (*(uint *)(lVar12 + 0x18) < 4) goto code_r0x000180661ab4;
          *(undefined8 *)(lVar12 + 0x38) = LIT_"'    expires in '";
          func_0x000180314690(lVar12 + 0x38);
          uVar17 = *(undefined4 *)(lVar15 + 0x2c);
          if (*(int *)(TI_SparkCorreio + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar10 = SparkCorreio__Restante(uVar17,0);
          if (*(uint *)(lVar12 + 0x18) < 5) goto code_r0x000180661ab9;
          *(undefined8 *)(lVar12 + 0x40) = uVar10;
          func_0x000180314690(lVar12 + 0x40,uVar10);
          uVar10 = System_String__Concat(lVar12,0);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar15 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uStack_68 = *(undefined4 *)(lVar15 + 0x50);
          uStack_64 = *(undefined4 *)(lVar15 + 0x54);
          uStack_60 = *(undefined4 *)(lVar15 + 0x58);
          uStack_5c = *(undefined4 *)(lVar15 + 0x5c);
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          func_0x000180cb7cb0(&uStack_b8,&uStack_68,MR_System.Nullable<UnityEngine.Color>..ctor);
          uStack_98 = (undefined4)uStack_b8;
          uStack_94 = uStack_b8._4_4_;
          uStack_90 = (undefined4)uStack_b0;
          uStack_8c = uStack_b0._4_4_;
          uStack_88 = uStack_a8;
          uVar10 = SparkEstilo__Texto__180722af0(uVar10,10,&uStack_98,0,0);
          UnityEngine_UIElements_VisualElement__Add(lVar8,uVar10,0);
          uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
          FUN_18055b980(uVar10,lVar7,MD_MailWindow.__c__DisplayClass53_1._MostraLista_b__0,0);
          FUN_180990d50(lVar8,uVar10,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
          if (*(longlong *)(param_1 + 0xc0) == 0) goto code_r0x000180661abe;
          UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xc0),lVar8,0);
        }
        FUN_1803155d0();
code_r0x000180661aeb:
        FUN_1803155d0();
        FUN_180311490();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

