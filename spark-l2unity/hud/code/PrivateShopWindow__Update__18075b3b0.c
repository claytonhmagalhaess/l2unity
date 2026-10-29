// PrivateShopWindow__Update__18075b3b0 @ 0x18075b3b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PrivateShopWindow__Update__18075b3b0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ushort uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  float afStack_48 [4];
  undefined8 uStack_38;
  undefined *puStack_30;
  
  if (cRam00000001834b4324 == '\0') {
    puStack_30 = &UNK_18075b3ce;
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b4324 = '\x01';
  }
  if ((*(char *)((longlong)param_1 + 0x109) == '\0') || ((char)param_1[0x21] == '\0')) {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x109) = 0;
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    puStack_30 = &UNK_18075b40b;
    func_0x000180315660();
  }
  if (cRam00000001834b3553 == '\0') {
    puStack_30 = &UNK_18075b420;
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b3553 = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    puStack_30 = &UNK_18075b43c;
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x50) == '\0') {
    if ((char)param_1[7] != '\0') {
      return;
    }
    puStack_30 = &UNK_18075b4a6;
    (**(code **)(*param_1 + 0x1c8))(param_1,1,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if ((char)param_1[7] != '\0') {
    puStack_30 = &UNK_18075b46b;
    (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    puStack_30 = &UNK_18075b47e;
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  }
  if (cRam00000001834b432e == '\0') {
    FUN_180315380(TI_System.Collections.Generic.IReadOnlyCollection<ItemInstance>,0);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkLoja);
    FUN_180315380(TI_string__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'Purchase List'");
    FUN_180315380(LIT_"'Wanted Items'");
    FUN_180315380(LIT_"'OK'");
    FUN_180315380(LIT_"'ButtonLabel'");
    FUN_180315380(LIT_"'({0})'");
    FUN_180315380(LIT_"'Store Items'");
    FUN_180315380(LIT_"'Buy'");
    FUN_180315380(LIT_"'Sell'");
    FUN_180315380(LIT_"'Sale List'");
    FUN_180315380(LIT_"'Inventory'");
    FUN_180315380(LIT_"'Start'");
    FUN_180315380(LIT_"' - '");
    FUN_180315380(LIT_"')'");
    FUN_180315380(LIT_"'Package Sale'");
    FUN_180315380(LIT_"'Private Store'");
    FUN_180315380(LIT_"' ('");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'{0:n0}'");
    cRam00000001834b432e = '\x01';
  }
  uVar7 = PrivateShopWindow__Texto(0x1f2,LIT_"'Private Store'",0);
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = SparkLoja__get_MinhaLoja(0);
  uVar8 = LIT_"''";
  if (cVar4 == '\0') {
    if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b4373 == '\0') {
      FUN_180315380(TI_SparkLoja);
      cRam00000001834b4373 = '\x01';
    }
    if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar8 = System_String__Concat
                      (LIT_"' - '",
                       *(undefined8 *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x40),0);
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b354b == '\0') {
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b354b = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar6 = *(int *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x38);
  if (iVar6 == 0) {
    plVar11 = (longlong *)param_1[0x13];
    lVar10 = func_0x000180314710(TI_string__,5);
    if (lVar10 == 0) goto DAT_18075b08b;
    if (*(int *)(lVar10 + 0x18) == 0) {
code_r0x00018075b097:
      FUN_1803155c0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined8 *)(lVar10 + 0x20) = uVar7;
    func_0x000180314690(lVar10 + 0x20,uVar7);
    if (*(uint *)(lVar10 + 0x18) < 2) goto code_r0x00018075b097;
    *(undefined8 *)(lVar10 + 0x28) = LIT_"' ('";
    func_0x000180314690(lVar10 + 0x28);
    if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = FUN_1804d0730(0);
    if (cVar4 == '\0') {
      uVar9 = 0x485;
      uVar7 = LIT_"'Sell'";
    }
    else {
      uVar9 = 0x4ae;
      uVar7 = LIT_"'Package Sale'";
    }
    uVar7 = PrivateShopWindow__Texto(uVar9,uVar7,0);
    if (*(uint *)(lVar10 + 0x18) < 3) goto code_r0x00018075b097;
    *(undefined8 *)(lVar10 + 0x30) = uVar7;
    func_0x000180314690(lVar10 + 0x30,uVar7);
    if (*(uint *)(lVar10 + 0x18) < 4) goto code_r0x00018075b097;
    *(undefined8 *)(lVar10 + 0x38) = LIT_"')'";
    func_0x000180314690(lVar10 + 0x38);
    if (*(uint *)(lVar10 + 0x18) < 5) goto code_r0x00018075b097;
    *(undefined8 *)(lVar10 + 0x40) = uVar8;
    func_0x000180314690(lVar10 + 0x40,uVar8);
    uVar7 = System_String__Concat(lVar10,0);
    if (plVar11 == (longlong *)0x0) goto DAT_18075b08b;
    (**(code **)(*plVar11 + 0xe48))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0xe50));
    uVar8 = 0x89;
    uVar7 = LIT_"'Store Items'";
code_r0x00018075aa36:
    plVar11 = (longlong *)param_1[0x14];
    uVar7 = PrivateShopWindow__Texto(uVar8,uVar7,0);
    if (plVar11 == (longlong *)0x0) goto DAT_18075b08b;
    (**(code **)(*plVar11 + 0xe48))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0xe50));
    plVar11 = (longlong *)param_1[0x15];
    uVar7 = PrivateShopWindow__Texto(0x8b,LIT_"'Purchase List'",0);
    if (plVar11 == (longlong *)0x0) goto DAT_18075b08b;
    (**(code **)(*plVar11 + 0xe48))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0xe50));
  }
  else {
    if (iVar6 == 1) {
      plVar11 = (longlong *)param_1[0x13];
      lVar10 = func_0x000180314710(TI_string__,5);
      if (lVar10 == 0) goto DAT_18075b08b;
      if (*(int *)(lVar10 + 0x18) == 0) goto code_r0x00018075b097;
      *(undefined8 *)(lVar10 + 0x20) = uVar7;
      func_0x000180314690(lVar10 + 0x20,uVar7);
      if (*(uint *)(lVar10 + 0x18) < 2) goto code_r0x00018075b097;
      *(undefined8 *)(lVar10 + 0x28) = LIT_"' ('";
      func_0x000180314690(lVar10 + 0x28);
      uVar7 = PrivateShopWindow__Texto(0x59a,LIT_"'Buy'",0);
      if (*(uint *)(lVar10 + 0x18) < 3) goto code_r0x00018075b097;
      *(undefined8 *)(lVar10 + 0x30) = uVar7;
      func_0x000180314690(lVar10 + 0x30,uVar7);
      if (*(uint *)(lVar10 + 0x18) < 4) goto code_r0x00018075b097;
      *(undefined8 *)(lVar10 + 0x38) = LIT_"')'";
      func_0x000180314690(lVar10 + 0x38);
      if (*(uint *)(lVar10 + 0x18) < 5) goto code_r0x00018075b097;
      *(undefined8 *)(lVar10 + 0x40) = uVar8;
      func_0x000180314690(lVar10 + 0x40,uVar8);
      uVar7 = System_String__Concat(lVar10,0);
      if (plVar11 == (longlong *)0x0) goto DAT_18075b08b;
      (**(code **)(*plVar11 + 0xe48))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0xe50));
      plVar11 = (longlong *)param_1[0x14];
      if (plVar11 == (longlong *)0x0) goto DAT_18075b08b;
      (**(code **)(*plVar11 + 0xe48))
                (plVar11,LIT_"'Wanted Items'",*(undefined8 *)(*plVar11 + 0xe50));
    }
    else {
      if (iVar6 != 2) {
        if (iVar6 == 3) {
          plVar11 = (longlong *)param_1[0x13];
          uVar8 = PrivateShopWindow__Texto(0x59a,LIT_"'Buy'",0);
          uVar7 = System_String__Concat(uVar7,LIT_"' ('",uVar8,LIT_"')'",0);
          if (plVar11 == (longlong *)0x0) goto DAT_18075b08b;
          (**(code **)(*plVar11 + 0xe48))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0xe50));
          uVar8 = 1;
          uVar7 = LIT_"'Inventory'";
          goto code_r0x00018075aa36;
        }
        goto code_r0x00018075aaa0;
      }
      plVar11 = (longlong *)param_1[0x13];
      if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = FUN_1804d0730(0);
      uVar8 = LIT_"' ('";
      if (cVar4 == '\0') {
        uVar14 = 0x485;
        uVar9 = LIT_"'Sell'";
      }
      else {
        uVar14 = 0x4ae;
        uVar9 = LIT_"'Package Sale'";
      }
      uVar9 = PrivateShopWindow__Texto(uVar14,uVar9,0);
      uVar7 = System_String__Concat(uVar7,uVar8,uVar9,LIT_"')'",0);
      if (plVar11 == (longlong *)0x0) goto DAT_18075b08b;
      (**(code **)(*plVar11 + 0xe48))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0xe50));
      plVar11 = (longlong *)param_1[0x14];
      uVar7 = PrivateShopWindow__Texto(1,LIT_"'Inventory'",0);
      if (plVar11 == (longlong *)0x0) goto DAT_18075b08b;
      (**(code **)(*plVar11 + 0xe48))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0xe50));
    }
    plVar11 = (longlong *)param_1[0x15];
    if (plVar11 == (longlong *)0x0) goto DAT_18075b08b;
    (**(code **)(*plVar11 + 0xe48))(plVar11,LIT_"'Sale List'",*(undefined8 *)(*plVar11 + 0xe50));
  }
code_r0x00018075aaa0:
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  bVar5 = SparkLoja__get_MinhaLoja(0);
  if (param_1[0x1b] != 0) {
    lVar10 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x1b],0);
    uVar7 = FUN_180eb5810(bVar5 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar10 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar10,uVar7);
      if (param_1[0x1a] != 0) {
        lVar10 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x1a],0);
        uVar7 = FUN_180eb5810(bVar5 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar10 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar10,uVar7);
          lVar10 = param_1[0x19];
          if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar11 = (longlong *)FUN_180b0e310(lVar10,LIT_"'ButtonLabel'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
          uVar7 = LIT_"'Start'";
          if (bVar5 == 0) {
            uVar7 = PrivateShopWindow__Texto(0x8c,LIT_"'OK'",0);
          }
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0xe48))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0xe50));
            lVar10 = param_1[0x11];
            if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
              func_0x000180315660();
            }
            if (cRam00000001834b4374 == '\0') {
              FUN_180315380(TI_SparkLoja);
              cRam00000001834b4374 = '\x01';
            }
            if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
              func_0x000180315660();
            }
            if (lVar10 != 0) {
              TradeSlotContainer__Mostra__1807793c0
                        (lVar10,*(undefined8 *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x18),0
                        );
              lVar10 = param_1[0x12];
              if (cRam00000001834b4375 == '\0') {
                FUN_180315380(TI_SparkLoja);
                cRam00000001834b4375 = '\x01';
              }
              if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
                func_0x000180315660(TI_SparkLoja);
              }
              if (lVar10 != 0) {
                TradeSlotContainer__Mostra__1807793c0
                          (lVar10,*(undefined8 *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x20)
                           ,0);
                plVar11 = (longlong *)param_1[0x18];
                if (cRam00000001834b4375 == '\0') {
                  FUN_180315380();
                  cRam00000001834b4375 = '\x01';
                }
                if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
                  func_0x000180315660();
                }
                plVar1 = *(longlong **)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x20);
                if (plVar1 != (longlong *)0x0) {
                  lVar10 = *plVar1;
                  if (*(ushort *)(lVar10 + 0x12e) != 0) {
                    uVar13 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                          TI_System.Collections.Generic.IReadOnlyCollection<ItemInstance>) {
                        puVar12 = (undefined8 *)
                                  ((longlong)
                                   *(int *)(*(longlong *)(lVar10 + 0xb0) + 8 +
                                           (ulonglong)uVar13 * 0x10) * 0x10 + 0x138 + lVar10);
                        goto code_r0x00018075ad46;
                      }
                      uVar13 = uVar13 + 1;
                    } while (uVar13 < *(ushort *)(lVar10 + 0x12e));
                  }
                  puVar12 = (undefined8 *)FUN_180312860(plVar1,TI_System.Collections.Generic.IReadOnlyCollection<ItemInstance>,0);
code_r0x00018075ad46:
                  aiStackX_18[0] = (*(code *)*puVar12)(plVar1,puVar12[1]);
                  uVar7 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
                  uVar7 = System_String__Format(LIT_"'({0})'",uVar7,0);
                  if (plVar11 != (longlong *)0x0) {
                    (**(code **)(*plVar11 + 0xe48))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0xe50))
                    ;
                    plVar11 = (longlong *)param_1[0x16];
                    if (cRam00000001834b4376 == '\0') {
                      FUN_180315380(TI_SparkLoja);
                      cRam00000001834b4376 = '\x01';
                    }
                    if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
                      func_0x000180315660(TI_SparkLoja);
                    }
                    aiStackX_20[0] = *(int *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x4c);
                    uVar7 = func_0x000180314670(_DAT_1834c6268,aiStackX_20);
                    uVar7 = System_String__Format(LIT_"'{0:n0}'",uVar7,0);
                    if (plVar11 != (longlong *)0x0) {
                      (**(code **)(*plVar11 + 0xe48))
                                (plVar11,uVar7,*(undefined8 *)(*plVar11 + 0xe50));
                      lVar10 = SparkLoja__Total(0);
                      plVar11 = (longlong *)param_1[0x17];
                      uStack_68 = lVar10;
                      uVar7 = func_0x000180314670(_DAT_1834c6288,&uStack_68);
                      uVar7 = System_String__Format(LIT_"'{0:n0}'",uVar7,0);
                      if (plVar11 != (longlong *)0x0) {
                        (**(code **)(*plVar11 + 0xe48))
                                  (plVar11,uVar7,*(undefined8 *)(*plVar11 + 0xe50));
                        if (cRam00000001834b354b == '\0') {
                          FUN_180315380(TI_SparkLoja);
                          cRam00000001834b354b = '\x01';
                        }
                        if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        if (*(int *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x38) == 0) {
                          if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          if (cRam00000001834b4376 == '\0') {
                            FUN_180315380(TI_SparkLoja);
                            cRam00000001834b4376 = '\x01';
                          }
                          if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          bVar2 = *(int *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x4c) <
                                  lVar10;
                        }
                        else {
                          bVar2 = false;
                        }
                        if (param_1[0x17] != 0) {
                          plVar11 = (longlong *)
                                    UnityEngine_UIElements_VisualElement__get_style(param_1[0x17],0)
                          ;
                          uVar15 = 0x3f800000;
                          if (bVar2) {
                            uVar18 = 0x3eb33333;
                          }
                          else {
                            uVar15 = 0x3f5c28f6;
                            uVar18 = 0x3f5c28f6;
                          }
                          uStack_68 = CONCAT44(uVar18,uVar15);
                          uStack_60 = CONCAT44(0x3f800000,uVar18);
                          puVar12 = (undefined8 *)
                                    UnityEngine_UIElements_StyleColor__op_Implicit
                                              (afStack_48,&uStack_68,0);
                          if (plVar11 != (longlong *)0x0) {
                            lVar10 = *plVar11;
                            uVar15 = *(undefined4 *)(puVar12 + 2);
                            uVar7 = *puVar12;
                            uVar8 = puVar12[1];
                            if (*(ushort *)(lVar10 + 0x12e) != 0) {
                              uVar13 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar12 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 +
                                                      (ulonglong)uVar13 * 0x10) + 0x2f) * 0x10 +
                                             0x138 + lVar10);
                                  goto PrivateShopWindow__AtualizaPeso;
                                }
                                uVar13 = uVar13 + 1;
                              } while (uVar13 < *(ushort *)(lVar10 + 0x12e));
                            }
                            puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x2f);
PrivateShopWindow__AtualizaPeso:
                            uStack_68 = uVar7;
                            uStack_60 = uVar8;
                            uStack_58 = uVar15;
                            (*(code *)*puVar12)(plVar11,&uStack_68,puVar12[1]);
                            if (cRam00000001834b432f == '\0') {
                              FUN_180315380(TI_UnityEngine.UIElements.IStyle);
                              FUN_180315380(TI_UnityEngine.Object);
                              FUN_180315380(TI_PlayerStats);
                              FUN_180315380(TI_SparkLoja);
                              FUN_180315380(LIT_"'weight-'");
                              FUN_180315380(LIT_"'{0:0.00}%'");
                              cRam00000001834b432f = '\x01';
                            }
                            aiStackX_20[0] = 0;
                            if (DAT_1834b2f32 == '\0') {
                              FUN_180315380(TI_PlayerEntity);
                              DAT_1834b2f32 = '\x01';
                            }
                            uVar7 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
                            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            cVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
                            if (cVar4 == '\0') {
                              if (DAT_1834b2f32 == '\0') {
                                FUN_180315380(TI_PlayerEntity);
                                DAT_1834b2f32 = '\x01';
                              }
                              if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) {
DAT_180757d15:
                                FUN_1803155d0();
                                pcVar3 = (code *)swi(3);
                                (*pcVar3)();
                                return;
                              }
                              plVar11 = *(longlong **)
                                         (**(longlong **)(TI_PlayerEntity + 0xb8) + 0x40);
                              if (plVar11 != (longlong *)0x0) {
                                if (((*(byte *)(TI_PlayerStats + 0x130) <=
                                      *(byte *)(*plVar11 + 0x130)) &&
                                    (*(longlong *)
                                      (*(longlong *)(*plVar11 + 200) + -8 +
                                      (ulonglong)*(byte *)(TI_PlayerStats + 0x130) * 8) ==
                                     TI_PlayerStats)) &&
                                   (0 < *(int *)((longlong)plVar11 + 0x84))) {
                                  lVar10 = plVar11[0x10];
                                  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
                                    func_0x000180315660();
                                  }
                                  iVar6 = SparkLoja__PesoDaTroca(0);
                                  fVar19 = (float)(iVar6 + (int)lVar10) /
                                           (float)*(int *)((longlong)plVar11 + 0x84);
                                  auVar16 = ZEXT416((uint)fVar19);
                                  if (fVar19 < 0.0) {
                                    auVar16 = ZEXT416(0);
                                  }
                                  else if (1.0 < fVar19) {
                                    auVar16 = ZEXT816(0x3f800000);
                                  }
                                  aiStackX_18[0] = 1;
                                  do {
                                    lVar10 = param_1[0x1e];
                                    uVar7 = System_Int32__ToString(aiStackX_18,0);
                                    System_String__Concat(LIT_"'weight-'",uVar7,0);
                                    if (lVar10 == 0) goto DAT_180757d15;
                                    UnityEngine_UIElements_VisualElement__RemoveFromClassList
                                              (lVar10);
                                    aiStackX_18[0] = aiStackX_18[0] + 1;
                                  } while (aiStackX_18[0] < 6);
                                  lVar10 = param_1[0x1e];
                                  fVar20 = auVar16._0_4_;
                                  auVar16._0_4_ = fVar20 * 4.0;
                                  fVar19 = (float)func_0x0001803a9df0(auVar16._0_8_);
                                  aiStackX_20[0] = (int)fVar19 + 1;
                                  if (5 < (int)fVar19 + 1) {
                                    aiStackX_20[0] = 5;
                                  }
                                  uVar7 = System_Int32__ToString(aiStackX_20,0);
                                  uVar7 = System_String__Concat(LIT_"'weight-'",uVar7,0);
                                  if (lVar10 != 0) {
                                    UnityEngine_UIElements_VisualElement__AddToClassList
                                              (lVar10,uVar7,0);
                                    if (param_1[0x1f] != 0) {
                                      plVar11 = (longlong *)
                                                UnityEngine_UIElements_VisualElement__get_style
                                                          (param_1[0x1f],0);
                                      auVar17._0_4_ = fVar20 * 100.0;
                                      auVar17._4_12_ = auVar16._4_12_;
                                      uVar7 = func_0x0001825fc350(auVar17._0_8_,0);
                                      puVar12 = (undefined8 *)
                                                UnityEngine_UIElements_StyleLength__op_Implicit
                                                          (&uStack_38,uVar7,0);
                                      if (plVar11 != (longlong *)0x0) {
                                        lVar10 = *plVar11;
                                        uVar15 = *(undefined4 *)(puVar12 + 1);
                                        uVar7 = *puVar12;
                                        if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                          uVar13 = 0;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar10 + 0xb0) +
                                                 (ulonglong)uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                              puVar12 = (undefined8 *)
                                                        ((longlong)
                                                         (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8
                                                                  + (ulonglong)uVar13 * 0x10) + 0xad
                                                         ) * 0x10 + 0x138 + lVar10);
                                              goto code_r0x000180757c69;
                                            }
                                            uVar13 = uVar13 + 1;
                                          } while (uVar13 < *(ushort *)(lVar10 + 0x12e));
                                        }
                                        puVar12 = (undefined8 *)
                                                  FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180757c69:
                                        puStack_30 = (undefined *)CONCAT44(puStack_30._4_4_,uVar15);
                                        uStack_38 = uVar7;
                                        (*(code *)*puVar12)(plVar11,&uStack_38,puVar12[1]);
                                        afStack_48[0] = fVar20 * 100.0;
                                        plVar11 = (longlong *)param_1[0x20];
                                        uVar7 = func_0x000180314670(_DAT_1834c6298,afStack_48);
                                        uVar7 = System_String__Format(LIT_"'{0:0.00}%'",uVar7,0);
                                        if (plVar11 != (longlong *)0x0) {
                                          (**(code **)(*plVar11 + 0xe48))
                                                    (plVar11,uVar7,*(undefined8 *)(*plVar11 + 0xe50)
                                                    );
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
                            return;
                          }
                        }
                        goto DAT_18075b08b;
                      }
                    }
                  }
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
  }
DAT_18075b08b:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

