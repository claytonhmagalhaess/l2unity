// SparkGmWindow__MostraQuests__180610760 @ 0x180610760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkGmWindow__MostraQuests__180610760(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ushort uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  byte bVar23;
  longlong alStackX_8 [2];
  uint auStackX_18 [2];
  longlong *plStackX_20;
  longlong lStack_168;
  undefined8 *puStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  longlong *plStack_148;
  byte bStack_140;
  int iStack_13c;
  ulonglong uStack_138;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined4 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong lStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  ulonglong uVar22;
  
  alStackX_8[0] = param_1;
  if (cRam00000001834b3c35 == '\0') {
    FUN_180315380(TI_System.Comparison<int>);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkQuests.Dados>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkGmQuest.Estado>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,string>>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkGmQuest.Estado>..ctor);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,string>>.get_Keys);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkGmQuest.Estado>.set_Item);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<int,SparkGmQuest.Estado>);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkGmQuest.Estado>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkQuests.Dados>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkQuests.Dados>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<int>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkGmQuest.Estado>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkQuests.Dados>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkGmQuest.Estado>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,SparkQuests.Dados>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,SparkQuests.Dados>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<int>.AddRange);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SparkGmQuest.Estado>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<int>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Sort);
    FUN_180315380(MR_System.Collections.Generic.List<int>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Count);
    FUN_180315380(TI_System.Collections.Generic.List<int>);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_object__);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkGmQuest);
    FUN_180315380(TI_SparkGmWindow);
    FUN_180315380(TI_SparkQuests);
    FUN_180315380(TI_string__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MD_SparkGmWindow.__c__DisplayClass72_0._MostraQuests_b__1);
    FUN_180315380(TI_SparkGmWindow.<>c__DisplayClass72_0);
    FUN_180315380(LIT_"'\\n<color=#E8C66A>The buttons act on '");
    FUN_180315380(LIT_"' '");
    FUN_180315380(LIT_"' - press Load player for '");
    FUN_180315380(LIT_"'Nothing found.'");
    FUN_180315380(LIT_"\"{0}'s quests  ·  {1} in progress  ·  {2} completed  ·  {...");
    FUN_180315380(LIT_"'.</color>'");
    FUN_180315380(LIT_"\"'s quests.\"");
    FUN_180315380(LIT_"'Showing the first {0} of {1} - type a name or an id to n...");
    FUN_180315380(LIT_"'Press Load player to see '");
    FUN_180315380(LIT_"'Type a name (or target a player) and press Load player.'");
    FUN_180315380(LIT_"' has no quest that matches.'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3c35 = '\x01';
  }
  uVar18 = 0;
  iStack_13c = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  lStack_c8 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  lStack_e0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uVar7 = func_0x000180315580(TI_SparkGmWindow.<>c__DisplayClass72_0);
  uStack_138 = uVar7;
  SparkMapaWindow_Loja___ctor__1803f01b0(uVar7,0);
  if (*(longlong *)(param_1 + 0x150) == 0) {
    return;
  }
  UnityEngine_UIElements_VisualElement__Clear(*(undefined8 *)(param_1 + 0x150),0);
  if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkGmWindow__LeServidor(0);
  plVar9 = *(longlong **)(param_1 + 0x90);
  if ((plVar9 == (longlong *)0x0) ||
     ((lVar8 = (**(code **)(*plVar9 + 0xa78))(plVar9,*(undefined8 *)(*plVar9 + 0xa80)), lVar8 == 0
      && (lVar8 = LIT_"''", LIT_"''" == 0)))) goto code_r0x000180611c47;
  plVar9 = (longlong *)func_0x00018170d270(lVar8,0);
  plStackX_20 = plVar9;
  if (*(int *)(TI_SparkGmQuest + 0xe4) == 0) {
    func_0x000180315660(TI_SparkGmQuest);
  }
  if (**(longlong **)(TI_SparkGmQuest + 0xb8) == 0) goto code_r0x000180611c47;
  uVar20 = *(uint *)(**(longlong **)(TI_SparkGmQuest + 0xb8) + 0x10);
  bStack_140 = 0 < (int)uVar20;
  auStackX_18[0] = uVar20;
  uVar10 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<int,SparkGmQuest.Estado>);
  FUN_1811e4340(uVar10,MR_System.Collections.Generic.Dictionary<int,SparkGmQuest.Estado>..ctor);
  if (uVar7 == 0) goto code_r0x000180611c47;
  *(undefined8 *)(uVar7 + 0x10) = uVar10;
  uStack_150 = uVar7;
  func_0x000180314690(uVar7 + 0x10,uVar10);
  uVar11 = func_0x000180315580(TI_System.Collections.Generic.List<int>);
  FUN_180bba2e0(uVar11,MR_System.Collections.Generic.List<int>..ctor);
  uStack_158 = uVar11;
  if ((int)uVar20 < 1) {
    if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(longlong *)(*(longlong *)(TI_SparkGmWindow + 0xb8) + 0x40) == 0) {
      if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar8 = SparkQuests__get_Todas(0);
      if (lVar8 != 0) {
        if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar8 = SparkQuests__get_Todas(0);
        if (lVar8 == 0) goto code_r0x000180611c47;
        FUN_18117ccd0(&uStack_108,lVar8,MR_System.Collections.Generic.Dictionary<int,SparkQuests.Dados>.GetEnumerator);
        uStack_98 = uStack_108;
        uStack_90 = uStack_100;
        uStack_88 = CONCAT44(uStack_f4,uStack_f8);
        lStack_80 = lStack_f0;
        uStack_78 = uStack_e8;
        lStack_168 = 0;
        puStack_160 = &uStack_98;
        while (cVar5 = FUN_181334a60(&uStack_98,MR_System.Collections.Generic.Dictionary<int,SparkQuests.Dados>.MoveNext), cVar5 != '\0') {
          if (lStack_80 == 0) goto code_r0x000180611c73;
          if (*(char *)(lStack_80 + 0x48) != '\0') {
            if (uVar11 == 0) goto code_r0x000180611c6e;
            FUN_1800034b0(uVar11,uStack_88 & 0xffffffff,MR_System.Collections.Generic.List<int>.Add);
          }
        }
        Gear__UpdateWeaponType__1803dadf0(&uStack_98,MR_System.Collections.Generic.Dictionary<int,SparkQuests.Dados>.Dispose);
      }
    }
    else {
      if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar8 = *(longlong *)(*(longlong *)(TI_SparkGmWindow + 0xb8) + 0x40);
      if ((lVar8 == 0) || (uVar10 = FUN_18117fc80(lVar8,MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,string>>.get_Keys), uVar11 == 0))
      goto code_r0x000180611c47;
      func_0x00018162d1b0(uVar11,uVar10,MR_System.Collections.Generic.List<int>.AddRange);
    }
    if (0 < (int)uVar20) goto code_r0x000180610f0c;
    plStack_148 = plVar9;
    if (plVar9 == (longlong *)0x0) goto code_r0x000180611c47;
    plVar12 = *(longlong **)(param_1 + 0x158);
    uVar10 = LIT_"'Type a name (or target a player) and press Load player.'";
    if ((int)plVar9[2] != 0) {
      uVar10 = System_String__Concat(LIT_"'Press Load player to see '",plVar9,LIT_"\"'s quests.\"",0);
    }
    if (plVar12 == (longlong *)0x0) goto code_r0x000180611c47;
    (**(code **)(*plVar12 + 0xe48))(plVar12,uVar10,*(undefined8 *)(*plVar12 + 0xe50));
    uVar10 = func_0x000180315580(TI_System.Comparison<int>);
    FUN_1811308c0(uVar10,uVar7,MD_SparkGmWindow.__c__DisplayClass72_0._MostraQuests_b__1,0);
    if (uVar11 == 0) goto code_r0x000180611c47;
  }
  else {
    if (*(int *)(TI_SparkGmQuest + 0xe4) == 0) {
      func_0x000180315660(TI_SparkGmQuest);
    }
    lVar8 = *(longlong *)(*(longlong *)(TI_SparkGmQuest + 0xb8) + 0x10);
    if (lVar8 == 0) goto code_r0x000180611c47;
    FUN_180bada40(&uStack_108,lVar8,MR_System.Collections.Generic.List<SparkGmQuest.Estado>.GetEnumerator);
    uStack_d8 = uStack_108;
    uStack_d0 = uStack_100;
    lStack_c8 = CONCAT44(uStack_f4,uStack_f8);
    lStack_168 = 0;
    puStack_160 = &uStack_d8;
    while (cVar5 = FUN_1812fa7e0(&uStack_d8,MR_System.Collections.Generic.List<SparkGmQuest.Estado>.MoveNext), lVar8 = lStack_c8, cVar5 != '\0')
    {
      if (lStack_c8 == 0) goto code_r0x000180611c62;
      if (*(longlong *)(uVar7 + 0x10) == 0) goto code_r0x000180611c5d;
      FUN_1812037f0(*(longlong *)(uVar7 + 0x10),*(undefined4 *)(lStack_c8 + 0x10),lStack_c8,
                    MR_System.Collections.Generic.Dictionary<int,SparkGmQuest.Estado>.set_Item);
      lVar13 = MR_System.Collections.Generic.List<int>.Add;
      if (uVar11 == 0) goto code_r0x000180611c58;
      uVar1 = *(undefined4 *)(lVar8 + 0x10);
      *(int *)(uVar11 + 0x1c) = *(int *)(uVar11 + 0x1c) + 1;
      lVar8 = *(longlong *)(uVar11 + 0x10);
      if (lVar8 == 0) goto code_r0x000180611c53;
      uVar20 = *(uint *)(uVar11 + 0x18);
      if (uVar20 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(uVar11 + 0x18) = uVar20 + 1;
        if (*(uint *)(lVar8 + 0x18) <= uVar20) goto code_r0x000180611c4d;
        *(undefined4 *)(lVar8 + 0x20 + (longlong)(int)uVar20 * 4) = uVar1;
      }
      else {
        FUN_18162d2b0(uVar11,uVar1,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_d8,MR_System.Collections.Generic.List<SparkGmQuest.Estado>.Dispose);
code_r0x000180610f0c:
    plStack_148 = plVar9;
    if (*(int *)(TI_SparkGmQuest + 0xe4) == 0) {
      func_0x000180315660(TI_SparkGmQuest);
    }
    lVar8 = *(longlong *)(*(longlong *)(TI_SparkGmQuest + 0xb8) + 0x10);
    if (lVar8 == 0) goto code_r0x000180611c47;
    auStackX_18[0] = 0;
    plStackX_20 = (longlong *)((ulonglong)plStackX_20 & 0xffffffff00000000);
    FUN_180bada40(&uStack_108,lVar8,MR_System.Collections.Generic.List<SparkGmQuest.Estado>.GetEnumerator);
    uStack_d8 = uStack_108;
    uStack_d0 = uStack_100;
    lStack_c8 = CONCAT44(uStack_f4,uStack_f8);
    lStack_168 = 0;
    uVar7 = uVar18;
    uVar22 = uVar18;
    puStack_160 = &uStack_d8;
    while( true ) {
      cVar5 = FUN_1812fa7e0(&uStack_d8,MR_System.Collections.Generic.List<SparkGmQuest.Estado>.MoveNext);
      if (cVar5 == '\0') break;
      if (lStack_c8 == 0) goto code_r0x000180611c7f;
      if ((*(int *)(lStack_c8 + 0x14) == 1) && (0 < *(int *)(lStack_c8 + 0x18))) {
        auStackX_18[0] = (int)uVar7 + 1;
        uVar7 = (ulonglong)auStackX_18[0];
      }
      else if (*(int *)(lStack_c8 + 0x14) == 2) {
        uVar20 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar20;
        plStackX_20 = (longlong *)CONCAT44(plStackX_20._4_4_,uVar20);
      }
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_d8,MR_System.Collections.Generic.List<SparkGmQuest.Estado>.Dispose);
    if (plVar9 == (longlong *)0x0) goto code_r0x000180611c47;
    if ((int)plVar9[2] < 1) {
      auStackX_18[0] = auStackX_18[0] & 0xffffff00;
    }
    else {
      if (*(int *)(TI_SparkGmQuest + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar6 = System_String__Equals(**(undefined8 **)(TI_SparkGmQuest + 0xb8),plVar9,5,0);
      auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,uVar6) ^ 1;
    }
    plStack_148 = *(longlong **)(param_1 + 0x158);
    plVar12 = (longlong *)func_0x000180314710(TI_object__,4);
    if (*(int *)(TI_SparkGmQuest + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (plVar12 == (longlong *)0x0) {
code_r0x000180611cd7:
      FUN_1803155d0();
code_r0x000180611cdd:
      FUN_1803155d0();
code_r0x000180611ce2:
      FUN_1803155d0();
code_r0x000180611ce7:
      FUN_1803155d0();
code_r0x000180611cec:
      FUN_1803155d0();
code_r0x000180611cf1:
      FUN_1803155d0();
      FUN_180311490();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lStack_168 = **(longlong **)(TI_SparkGmQuest + 0xb8);
    if ((lStack_168 != 0) &&
       (lVar8 = func_0x0001803146b0(lStack_168,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0)) {
      uVar10 = func_0x000180314f80();
      FUN_180315590(uVar10,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((int)plVar12[3] == 0) {
code_r0x000180611cd1:
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar12[4] = lStack_168;
    func_0x000180314690(plVar12 + 4,lStack_168);
    plStackX_20 = (longlong *)CONCAT44(plStackX_20._4_4_,(int)uVar7);
    lVar8 = func_0x000180314670(_DAT_1834c6268,&plStackX_20);
    if ((lVar8 != 0) &&
       (lVar13 = func_0x0001803146b0(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
      uVar10 = func_0x000180314f80();
      FUN_180315590(uVar10,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(uint *)(plVar12 + 3) < 2) goto code_r0x000180611cd1;
    plVar12[5] = lVar8;
    func_0x000180314690(plVar12 + 5,lVar8);
    uStack_150 = CONCAT44(uStack_150._4_4_,(int)uVar22);
    lVar8 = func_0x000180314670(_DAT_1834c6268,&uStack_150);
    if ((lVar8 != 0) &&
       (lVar13 = func_0x0001803146b0(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
      uVar10 = func_0x000180314f80();
      FUN_180315590(uVar10,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(uint *)(plVar12 + 3) < 3) goto code_r0x000180611cd1;
    plVar12[6] = lVar8;
    func_0x000180314690(plVar12 + 6,lVar8);
    if (uVar11 == 0) goto code_r0x000180611cd7;
    uStack_158 = CONCAT44(uStack_158._4_4_,*(undefined4 *)(uVar11 + 0x18));
    lVar8 = func_0x000180314670(_DAT_1834c6268,&uStack_158);
    if ((lVar8 != 0) &&
       (lVar13 = func_0x0001803146b0(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
      uVar10 = func_0x000180314f80();
      FUN_180315590(uVar10,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(uint *)(plVar12 + 3) < 4) goto code_r0x000180611cd1;
    plVar12[7] = lVar8;
    func_0x000180314690(plVar12 + 7,lVar8);
    uVar10 = System_String__Format(LIT_"\"{0}'s quests  ·  {1} in progress  ·  {2} completed  ·  {...",plVar12,0);
    lVar8 = LIT_"''";
    if ((char)auStackX_18[0] != '\0') {
      lVar8 = func_0x000180314710(TI_string__,5);
      if (lVar8 == 0) goto code_r0x000180611c47;
      if (*(int *)(lVar8 + 0x18) == 0) {
code_r0x000180611ccb:
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)(lVar8 + 0x20) = LIT_"'\\n<color=#E8C66A>The buttons act on '";
      func_0x000180314690(lVar8 + 0x20);
      if (*(int *)(TI_SparkGmQuest + 0xe4) == 0) {
        func_0x000180315660(TI_SparkGmQuest);
      }
      if (*(uint *)(lVar8 + 0x18) < 2) goto code_r0x000180611ccb;
      *(undefined8 *)(lVar8 + 0x28) = **(undefined8 **)(TI_SparkGmQuest + 0xb8);
      func_0x000180314690(lVar8 + 0x28);
      if (*(uint *)(lVar8 + 0x18) < 3) goto code_r0x000180611ccb;
      *(undefined8 *)(lVar8 + 0x30) = LIT_"' - press Load player for '";
      func_0x000180314690(lVar8 + 0x30);
      if (*(uint *)(lVar8 + 0x18) < 4) goto code_r0x000180611ccb;
      *(longlong **)(lVar8 + 0x38) = plVar9;
      func_0x000180314690(lVar8 + 0x38,plVar9);
      if (*(uint *)(lVar8 + 0x18) < 5) goto code_r0x000180611ccb;
      *(undefined8 *)(lVar8 + 0x40) = LIT_"'.</color>'";
      func_0x000180314690(lVar8 + 0x40);
      lVar8 = System_String__Concat(lVar8,0);
    }
    plVar9 = plStack_148;
    uVar10 = System_String__Concat(uVar10,lVar8,0);
    if (plVar9 == (longlong *)0x0) goto code_r0x000180611c47;
    (**(code **)(*plVar9 + 0xe48))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0xe50));
    uVar10 = func_0x000180315580(TI_System.Comparison<int>);
    FUN_1811308c0(uVar10,uStack_138,MD_SparkGmWindow.__c__DisplayClass72_0._MostraQuests_b__1,0);
  }
  FUN_1816325e0(uVar11,uVar10,MR_System.Collections.Generic.List<int>.Sort);
  plVar9 = *(longlong **)(param_1 + 0x148);
  if ((plVar9 != (longlong *)0x0) &&
     ((lVar8 = (**(code **)(*plVar9 + 0xa78))(plVar9,*(undefined8 *)(*plVar9 + 0xa80)), lVar8 != 0
      || (lVar8 = LIT_"''", LIT_"''" != 0)))) {
    lVar8 = func_0x00018170d270(lVar8,0);
    lStack_168 = lVar8;
    uVar6 = System_Int32__TryParse(lVar8,&iStack_13c,0);
    auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,uVar6);
    if (lVar8 != 0) {
      plStackX_20 = (longlong *)CONCAT71(plStackX_20._1_7_,bStack_140);
      plStack_148 = (longlong *)System_String__ToLowerInvariant(lVar8,0);
      uStack_150 = uStack_150 & 0xffffffff00000000;
      uStack_158 = uStack_158 & 0xffffffff00000000;
      FUN_180be3fd0(&uStack_108,uVar11,MR_System.Collections.Generic.List<int>.GetEnumerator);
      uStack_c0 = uStack_108;
      uStack_b8 = uStack_100;
      uStack_b0 = CONCAT44(uStack_f4,uStack_f8);
      uStack_128 = 0;
      uVar7 = uVar18;
      uVar11 = uVar18;
      puStack_120 = &uStack_c0;
code_r0x000180611520:
      iVar21 = (int)uVar11;
      cVar5 = FUN_1812f11f0(&uStack_c0,MR_System.Collections.Generic.List<int>.MoveNext);
      uVar22 = uStack_b0;
      iVar19 = (int)uVar7;
      if (cVar5 != '\0') {
        if (*(longlong *)(uStack_138 + 0x10) == 0) goto code_r0x000180611cf1;
        iVar4 = (int)uStack_b0;
        FUN_1812007b0(*(longlong *)(uStack_138 + 0x10),uStack_b0 & 0xffffffff);
        if ((*(char *)(param_1 + 0x160) == '\0') ||
           ((lStack_e0 != 0 && (*(int *)(lStack_e0 + 0x14) != 0)))) {
          if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar8 = SparkGmWindow__NomeDaQuest(uVar22 & 0xffffffff,0);
          if (0 < *(int *)(lStack_168 + 0x10)) {
            if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar13 = LIT_"''";
            if (*(longlong *)(*(longlong *)(TI_SparkGmWindow + 0xb8) + 0x40) != 0) {
              if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar13 = *(longlong *)(*(longlong *)(TI_SparkGmWindow + 0xb8) + 0x40);
              if (lVar13 == 0) goto code_r0x000180611cdd;
              cVar5 = FUN_1811e1920(lVar13,uVar22 & 0xffffffff);
              lVar13 = LIT_"''";
              if (cVar5 != '\0') {
                lVar13 = System_String__Concat(uStack_a8,LIT_"' '");
              }
            }
            if ((char)auStackX_18[0] == '\0') {
              if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
                func_0x000180315660();
              }
              if (lVar8 == 0) {
code_r0x0001806116b1:
                if (lVar13 == 0) {
                  bVar23 = 0;
                }
                else {
                  lVar13 = System_String__ToLowerInvariant(lVar13,0);
                  if (lVar13 == 0) goto code_r0x000180611ce7;
                  bVar23 = System_String__Contains(lVar13,plStack_148);
                }
              }
              else {
                lVar14 = System_String__ToLowerInvariant(lVar8,0);
                if (lVar14 == 0) goto code_r0x000180611ce2;
                cVar5 = System_String__Contains(lVar14,plStack_148);
                if (cVar5 == '\0') goto code_r0x0001806116b1;
                bVar23 = 1;
              }
              bVar23 = bVar23 ^ 1;
            }
            else {
              bVar23 = iVar4 != iStack_13c;
            }
            uVar11 = uStack_158 & 0xffffffff;
            iVar21 = (int)uStack_158;
            if (bVar23 != 0) goto code_r0x000180611520;
          }
          if (iVar19 < 0x3c) {
            lVar13 = *(longlong *)(param_1 + 0x150);
            uVar10 = SparkGmWindow__LinhaDeQuest
                               (param_1,uVar22 & 0xffffffff,lVar8,lStack_e0,bStack_140,0);
            if (lVar13 == 0) goto code_r0x000180611cec;
            UnityEngine_UIElements_VisualElement__Add(lVar13,uVar10);
            uVar7 = (ulonglong)(iVar19 + 1U);
            uStack_150 = CONCAT44(uStack_150._4_4_,iVar19 + 1U);
            uVar11 = uStack_158 & 0xffffffff;
          }
          else {
            uVar11 = (ulonglong)(iVar21 + 1U);
            uStack_158 = CONCAT44(uStack_158._4_4_,iVar21 + 1U);
          }
        }
        goto code_r0x000180611520;
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_c0,MR_System.Collections.Generic.List<int>.Dispose);
      if (iVar19 != 0) {
        if (iVar21 < 1) {
          return;
        }
        alStackX_8[0] = CONCAT44(alStackX_8[0]._4_4_,0x3c);
        uVar10 = func_0x000180314670(_DAT_1834c6268,alStackX_8);
        auStackX_18[0] = iVar21 + iVar19;
        uVar15 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
        uVar10 = System_String__Format(LIT_"'Showing the first {0} of {1} - type a name or an id to n...",uVar10,uVar15,0);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStack_128 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
        puStack_120 = *(undefined8 **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        func_0x000180cb7cb0(&uStack_108,&uStack_128,MR_System.Nullable<UnityEngine.Color>..ctor);
        uStack_128 = uStack_108;
        puStack_120 = (undefined8 *)uStack_100;
        uStack_118 = uStack_f8;
        lVar8 = SparkEstilo__Texto__180722af0(uVar10,10,&uStack_128,0,0);
        if (lVar8 != 0) {
          lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          uVar10 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
          if (lVar13 != 0) {
            FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar13,uVar10);
            plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
            plVar12 = (longlong *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(&lStack_168,0x40c00000,0);
            if (plVar9 != (longlong *)0x0) {
              lVar13 = *plVar12;
              lVar3 = plVar12[1];
              lVar14 = *plVar9;
              if (*(ushort *)(lVar14 + 0x12e) != 0) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar16 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + uVar7 * 0x10) + 0x4d) *
                               0x10 + 0x138 + lVar14);
                    goto code_r0x000180611969;
                  }
                  uVar17 = (short)uVar7 + 1;
                  uVar7 = (ulonglong)uVar17;
                } while (uVar17 < *(ushort *)(lVar14 + 0x12e));
              }
              puVar16 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180611969:
              puStack_160 = (undefined8 *)CONCAT44(puStack_160._4_4_,(int)lVar3);
              lStack_168 = lVar13;
              (*(code *)*puVar16)(plVar9,&lStack_168,puVar16[1]);
              plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
              plVar12 = (longlong *)
                        UnityEngine_UIElements_StyleLength__op_Implicit(&lStack_168,0x40800000,0);
              if (plVar9 != (longlong *)0x0) {
                lVar13 = *plVar12;
                lVar3 = plVar12[1];
                lVar14 = *plVar9;
                if (*(ushort *)(lVar14 + 0x12e) != 0) {
                  do {
                    if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + uVar18 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar16 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + uVar18 * 0x10) + 0x51)
                                 * 0x10 + 0x138 + lVar14);
                      goto code_r0x000180611a06;
                    }
                    uVar17 = (short)uVar18 + 1;
                    uVar18 = (ulonglong)uVar17;
                  } while (uVar17 < *(ushort *)(lVar14 + 0x12e));
                }
                puVar16 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180611a06:
                puStack_160 = (undefined8 *)CONCAT44(puStack_160._4_4_,(int)lVar3);
                lStack_168 = lVar13;
                (*(code *)*puVar16)(plVar9,&lStack_168,puVar16[1]);
                lVar13 = *(longlong *)(param_1 + 0x150);
                if (lVar13 != 0) goto code_r0x000180611a35;
              }
            }
          }
        }
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = LIT_"'Nothing found.'";
      if ((*(byte *)(param_1 + 0x160) & bStack_140) != 0) {
        if (*(int *)(TI_SparkGmQuest + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar10 = System_String__Concat
                           (**(undefined8 **)(TI_SparkGmQuest + 0xb8),LIT_"' has no quest that matches.'",0);
      }
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      uStack_128 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
      puStack_120 = *(undefined8 **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      func_0x000180cb7cb0(&uStack_108,&uStack_128,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_128 = uStack_108;
      puStack_120 = (undefined8 *)uStack_100;
      uStack_118 = uStack_f8;
      lVar8 = SparkEstilo__Texto__180722af0(uVar10,0xb,&uStack_128,0,0);
      if (lVar8 != 0) {
        plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
        plVar12 = (longlong *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(&lStack_168,0x40c00000,0);
        if (plVar9 != (longlong *)0x0) {
          lVar13 = *plVar12;
          lVar3 = plVar12[1];
          lVar14 = *plVar9;
          if (*(ushort *)(lVar14 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + uVar18 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + uVar18 * 0x10) + 0x4d) *
                           0x10 + 0x138 + lVar14);
                goto code_r0x000180611bf4;
              }
              uVar17 = (short)uVar18 + 1;
              uVar18 = (ulonglong)uVar17;
            } while (uVar17 < *(ushort *)(lVar14 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180611bf4:
          puStack_160 = (undefined8 *)CONCAT44(puStack_160._4_4_,(int)lVar3);
          lStack_168 = lVar13;
          (*(code *)*puVar16)(plVar9,&lStack_168,puVar16[1]);
          lVar13 = *(longlong *)(param_1 + 0x150);
          if (lVar13 != 0) {
code_r0x000180611a35:
            UnityEngine_UIElements_VisualElement__Add(lVar13,lVar8,0);
            return;
          }
        }
      }
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
code_r0x000180611c47:
  FUN_1803155d0();
code_r0x000180611c4d:
  FUN_1803155c0();
code_r0x000180611c53:
  FUN_1803155d0();
code_r0x000180611c58:
  FUN_1803155d0();
code_r0x000180611c5d:
  FUN_1803155d0();
code_r0x000180611c62:
  FUN_1803155d0();
  FUN_180311490();
code_r0x000180611c6e:
  FUN_1803155d0();
code_r0x000180611c73:
  FUN_1803155d0();
  FUN_180311490();
code_r0x000180611c7f:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

