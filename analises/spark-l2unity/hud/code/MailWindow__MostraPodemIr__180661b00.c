// MailWindow__MostraPodemIr__180661b00 @ 0x180661b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MailWindow__MostraPodemIr__180661b00(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined4 auStackX_18 [2];
  undefined4 auStackX_20 [2];
  undefined8 uStack_c8;
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  
  if (cRam00000001834b3d9a == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.get_Count);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkCorreio);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_MailWindow.__c__DisplayClass58_0._MostraPodemIr_b__0);
    FUN_180315380(TI_MailWindow.<>c__DisplayClass58_0);
    FUN_180315380(LIT_"'+{0} {1}'");
    FUN_180315380(LIT_"'  x{0:N0}'");
    FUN_180315380(LIT_"'You have no item that can be sent.'");
    cRam00000001834b3d9a = '\x01';
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x120),0);
    if (*(int *)(TI_SparkCorreio + 0xe4) == 0) {
      func_0x000180315660(TI_SparkCorreio);
    }
    lVar8 = *(longlong *)(*(longlong *)(TI_SparkCorreio + 0xb8) + 0x10);
    if (lVar8 != 0) {
      FUN_180bada40(&uStack_98,lVar8,MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
      uStack_68 = uStack_98;
      uStack_64 = uStack_94;
      uStack_60 = uStack_90;
      uStack_5c = uStack_8c;
      lStack_58 = CONCAT44(uStack_84,uStack_88);
      uVar13 = 0;
      uStack_c8 = 0;
      puStack_c0 = &uStack_68;
      while (cVar3 = FUN_1812fa7e0(&uStack_68,MR_System.Collections.Generic.List<ItemInstance>.MoveNext), lVar8 = lStack_58, cVar3 != '\0') {
        lVar4 = func_0x000180315580(TI_MailWindow.<>c__DisplayClass58_0);
        Gear__UpdateWeaponType__1803dadf0(lVar4,0);
        if (lVar4 == 0) goto code_r0x0001806621ee;
        *(longlong *)(lVar4 + 0x18) = param_1;
        func_0x000180314690(lVar4 + 0x18,param_1);
        *(longlong *)(lVar4 + 0x10) = lVar8;
        func_0x000180314690(lVar4 + 0x10,lVar8);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar5 = SparkEstilo__Linha__180720db0(0x20,0);
        uVar6 = MailWindow__Icone(lVar8,0,0);
        if (lVar5 == 0) goto code_r0x0001806621e9;
        UnityEngine_UIElements_VisualElement__Add(lVar5,uVar6,0);
        if (lVar8 == 0) goto code_r0x0001806621e4;
        uVar6 = SparkUI__NomeDoItem(*(undefined4 *)(lVar8 + 0x1c),0);
        if (0 < *(int *)(lVar8 + 0x34)) {
          auStackX_18[0] = *(undefined4 *)(lVar8 + 0x34);
          uVar7 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
          uVar6 = System_String__Format(LIT_"'+{0} {1}'",uVar7,uVar6,0);
        }
        if (1 < *(int *)(lVar8 + 0x28)) {
          auStackX_20[0] = *(undefined4 *)(lVar8 + 0x28);
          uVar7 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
          uVar7 = System_String__Format(LIT_"'  x{0:N0}'",uVar7,0);
          uVar6 = System_String__Concat(uVar6,uVar7,0);
        }
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar8 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_78 = *(undefined4 *)(lVar8 + 0x40);
        uStack_74 = *(undefined4 *)(lVar8 + 0x44);
        uStack_70 = *(undefined4 *)(lVar8 + 0x48);
        uStack_6c = *(undefined4 *)(lVar8 + 0x4c);
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        func_0x000180cb7cb0(&uStack_b8,&uStack_78,MR_System.Nullable<UnityEngine.Color>..ctor);
        uStack_98 = (undefined4)uStack_b8;
        uStack_94 = uStack_b8._4_4_;
        uStack_90 = (undefined4)uStack_b0;
        uStack_8c = uStack_b0._4_4_;
        uStack_88 = uStack_a8;
        lVar8 = SparkEstilo__Texto__180722af0(uVar6,0xb,&uStack_98,0,0);
        if (lVar8 == 0) goto code_r0x0001806621df;
        lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
        uVar6 = func_0x000182601c10(0x3f800000,0);
        if (lVar9 == 0) goto code_r0x0001806621da;
        FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar9,uVar6);
        UnityEngine_UIElements_VisualElement__Add(lVar5,lVar8,0);
        uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
        FUN_18055b980(uVar6,lVar4,MD_MailWindow.__c__DisplayClass58_0._MostraPodemIr_b__0,0);
        FUN_180990d50(lVar5,uVar6);
        if (*(longlong *)(param_1 + 0x120) == 0) goto code_r0x0001806621d4;
        UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x120),lVar5);
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_68,MR_System.Collections.Generic.List<ItemInstance>.Dispose);
      if (*(int *)(TI_SparkCorreio + 0xe4) == 0) {
        func_0x000180315660(TI_SparkCorreio);
      }
      lVar8 = *(longlong *)(*(longlong *)(TI_SparkCorreio + 0xb8) + 0x10);
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x18) != 0) {
          return;
        }
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar8 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_78 = *(undefined4 *)(lVar8 + 0x50);
        uStack_74 = *(undefined4 *)(lVar8 + 0x54);
        uStack_70 = *(undefined4 *)(lVar8 + 0x58);
        uStack_6c = *(undefined4 *)(lVar8 + 0x5c);
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        func_0x000180cb7cb0(&uStack_b8,&uStack_78,MR_System.Nullable<UnityEngine.Color>..ctor);
        uStack_98 = (undefined4)uStack_b8;
        uStack_94 = uStack_b8._4_4_;
        uStack_90 = (undefined4)uStack_b0;
        uStack_8c = uStack_b0._4_4_;
        uStack_88 = uStack_a8;
        lVar8 = SparkEstilo__Texto__180722af0(LIT_"'You have no item that can be sent.'",0xb,&uStack_98,0,0);
        if (lVar8 != 0) {
          plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          puVar11 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8,0x41000000,0);
          if (plVar10 != (longlong *)0x0) {
            uVar6 = *puVar11;
            uVar1 = *(undefined4 *)(puVar11 + 1);
            lVar4 = *plVar10;
            uVar12 = 0;
            if (*(ushort *)(lVar4 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar11 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) +
                             0x4d) * 0x10 + 0x138 + lVar4);
                  goto code_r0x0001806620a9;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < *(ushort *)(lVar4 + 0x12e));
            }
            puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001806620a9:
            puStack_c0 = (undefined4 *)CONCAT44(puStack_c0._4_4_,uVar1);
            uStack_c8 = uVar6;
            (*(code *)*puVar11)(plVar10,&uStack_c8,puVar11[1]);
            plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
            puVar11 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8,0x40c00000,0);
            if (plVar10 != (longlong *)0x0) {
              uVar6 = *puVar11;
              uVar1 = *(undefined4 *)(puVar11 + 1);
              lVar4 = *plVar10;
              if (*(ushort *)(lVar4 + 0x12e) != 0) {
                do {
                  if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar11 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar13 * 0x10) + 0x51) *
                               0x10 + 0x138 + lVar4);
                    goto code_r0x00018066213b;
                  }
                  uVar12 = (short)uVar13 + 1;
                  uVar13 = (ulonglong)uVar12;
                } while (uVar12 < *(ushort *)(lVar4 + 0x12e));
              }
              puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018066213b:
              puStack_c0 = (undefined4 *)CONCAT44(puStack_c0._4_4_,uVar1);
              uStack_c8 = uVar6;
              (*(code *)*puVar11)(plVar10,&uStack_c8,puVar11[1]);
              if (*(longlong *)(param_1 + 0x120) != 0) {
                UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x120),lVar8,0);
                return;
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
code_r0x0001806621d4:
  FUN_1803155d0();
code_r0x0001806621da:
  FUN_1803155d0();
code_r0x0001806621df:
  FUN_1803155d0();
code_r0x0001806621e4:
  FUN_1803155d0();
code_r0x0001806621e9:
  FUN_1803155d0();
code_r0x0001806621ee:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

