// SparkHtml__Entidades__180739c60 @ 0x180739c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkHtml__Entidades__180739c60(longlong param_1)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_278 [456];
  undefined8 uStack_b0;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (cRam00000001834b4261 == '\0') {
    FUN_180315380(TI_System.Text.RegularExpressions.MatchEvaluator);
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    FUN_180315380(MD_SparkHtml.__c._Entidades_b__36_0);
    FUN_180315380(MD_SparkHtml.__c._Entidades_b__36_1);
    FUN_180315380(TI_SparkHtml.<>c);
    FUN_180315380(LIT_"'&amp;'");
    FUN_180315380(LIT_"' '");
    FUN_180315380(LIT_"'&#(\\\\d+);'");
    FUN_180315380(LIT_"'&\\\\$(\\\\d+);'");
    FUN_180315380(LIT_"'<'");
    FUN_180315380(LIT_"'&gt;'");
    FUN_180315380(LIT_"'&nbsp;'");
    FUN_180315380(LIT_"'&quot;'");
    FUN_180315380(LIT_"'&'");
    FUN_180315380(LIT_"'\"'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'&lt;'");
    FUN_180315380(LIT_"'>'");
    cRam00000001834b4261 = '\x01';
  }
  cVar6 = func_0x000181707e50(param_1,0);
  if (cVar6 != '\0') {
    if (param_1 == 0) {
      param_1 = LIT_"''";
    }
    return param_1;
  }
  if (param_1 != 0) {
    iVar8 = func_0x0001817079f0(param_1,0x26,0);
    if (iVar8 < 0) {
      return param_1;
    }
    if (*(int *)(TI_SparkHtml.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar10 = LIT_"'&#(\\\\d+);'";
    lVar9 = *(longlong *)(*(longlong *)(TI_SparkHtml.<>c + 0xb8) + 8);
    if (lVar9 == 0) {
      if (*(int *)(TI_SparkHtml.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar12 = **(undefined8 **)(TI_SparkHtml.<>c + 0xb8);
      lVar9 = func_0x000180315580(TI_System.Text.RegularExpressions.MatchEvaluator);
      FUN_18148abd0(lVar9,uVar12,MD_SparkHtml.__c._Entidades_b__36_0,0);
      *(longlong *)(*(longlong *)(TI_SparkHtml.<>c + 0xb8) + 8) = lVar9;
      func_0x000180314690(*(longlong *)(TI_SparkHtml.<>c + 0xb8) + 8,lVar9);
    }
    if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar10 = System_Text_RegularExpressions_Regex__Replace(param_1,uVar10,lVar9,0);
    if (*(int *)(TI_SparkHtml.<>c + 0xe4) == 0) {
      func_0x000180315660(TI_SparkHtml.<>c);
    }
    uVar12 = LIT_"'&\\\\$(\\\\d+);'";
    lVar9 = *(longlong *)(*(longlong *)(TI_SparkHtml.<>c + 0xb8) + 0x10);
    if (lVar9 == 0) {
      if (*(int *)(TI_SparkHtml.<>c + 0xe4) == 0) {
        func_0x000180315660(TI_SparkHtml.<>c);
      }
      uVar13 = **(undefined8 **)(TI_SparkHtml.<>c + 0xb8);
      lVar9 = func_0x000180315580(TI_System.Text.RegularExpressions.MatchEvaluator);
      FUN_18148abd0(lVar9,uVar13,MD_SparkHtml.__c._Entidades_b__36_1,0);
      *(longlong *)(*(longlong *)(TI_SparkHtml.<>c + 0xb8) + 0x10) = lVar9;
      func_0x000180314690(*(longlong *)(TI_SparkHtml.<>c + 0xb8) + 0x10,lVar9);
    }
    if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar9 = System_Text_RegularExpressions_Regex__Replace(uVar10,uVar12,lVar9,0);
    if ((((lVar9 != 0) &&
         (lVar9 = System_String__Replace(lVar9,LIT_"'&nbsp;'",LIT_"' '",0), lVar9 != 0))
        && (lVar9 = System_String__Replace(lVar9,LIT_"'&lt;'",LIT_"'<'",0),
           lVar9 != 0)) &&
       ((lVar9 = System_String__Replace(lVar9,LIT_"'&gt;'",LIT_"'>'",0),
        lVar9 != 0 &&
        (lVar11 = System_String__Replace(lVar9,LIT_"'&quot;'",LIT_"'\"'",0),
        lVar5 = LIT_"'&amp;'", lVar9 = LIT_"'&'", lVar11 != 0)))) {
      if (DAT_1834b89b9 == '\0') {
        uStack_b0 = 0x18170a5e8;
        FUN_180315380(MR_System.Span<int>..ctor,LIT_"'&amp;'",LIT_"'&'",0);
        uStack_b0 = 0x18170a5f4;
        FUN_180315380(MR_System.Collections.Generic.ValueListBuilder<int>.Append);
        uStack_b0 = 0x18170a600;
        FUN_180315380(MR_System.Collections.Generic.ValueListBuilder<int>.AsSpan);
        uStack_b0 = 0x18170a60c;
        FUN_180315380(MR_System.Collections.Generic.ValueListBuilder<int>.Dispose);
        uStack_b0 = 0x18170a618;
        FUN_180315380(MR_System.Collections.Generic.ValueListBuilder<int>..ctor);
        uStack_b0 = 0x18170a624;
        FUN_180315380(MR_System.Collections.Generic.ValueListBuilder<int>.get_Length);
        DAT_1834b89b9 = '\x01';
      }
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      if (lVar5 == 0) {
        uStack_b0 = 0x18170a799;
        uVar10 = func_0x0001803153a0(TI_System.ArgumentNullException);
        uStack_b0 = 0x18170a7a1;
        uVar10 = func_0x000180315580(uVar10);
        uStack_b0 = 0x18170a7b0;
        uVar12 = func_0x0001803153a0(LIT_"'oldValue'");
        uStack_b0 = 0x18170a7be;
        System_ArgumentNullException___ctor(uVar10,uVar12,0);
        uStack_b0 = 0x18170a7ca;
        uVar12 = func_0x0001803153a0(MD_System.String.Replace);
        uStack_b0 = 0x18170a7d5;
        FUN_180315590(uVar10,uVar12);
        pcVar4 = (code *)swi(3);
        lVar9 = (*pcVar4)();
        return lVar9;
      }
      if (*(int *)(lVar5 + 0x10) == 0) {
        uStack_b0 = 0x18170a7e2;
        uVar10 = func_0x0001803153a0(TI_System.ArgumentException);
        uStack_b0 = 0x18170a7ea;
        uVar10 = func_0x000180315580(uVar10);
        uStack_b0 = 0x18170a7f9;
        uVar12 = func_0x0001803153a0(LIT_"'oldValue'");
        uStack_b0 = 0x18170a808;
        uVar13 = func_0x0001803153a0(LIT_"'String cannot be of zero length.'");
        uStack_b0 = 0x18170a819;
        System_ArgumentException___ctor(uVar10,uVar13,uVar12,0);
        uStack_b0 = 0x18170a825;
        uVar12 = func_0x0001803153a0(MD_System.String.Replace);
        uStack_b0 = 0x18170a830;
        FUN_180315590(uVar10,uVar12);
        pcVar4 = (code *)swi(3);
        lVar9 = (*pcVar4)();
        return lVar9;
      }
      if (lVar9 == 0) {
        lVar9 = **(longlong **)(_DAT_1834c62b0 + 0xb8);
      }
      FUN_1803d4930(auStack_278,0,0x200);
      uStack_70 = 0x80;
      puStack_78 = auStack_278;
      func_0x000180fdff80(&uStack_68,&puStack_78,MR_System.Collections.Generic.ValueListBuilder<int>..ctor);
      iVar8 = *(int *)(lVar11 + 0x10) - *(int *)(lVar5 + 0x10);
      if (-1 < iVar8) {
        iVar15 = 0;
        do {
          for (iVar14 = 0; iVar14 < *(int *)(lVar5 + 0x10); iVar14 = iVar14 + 1) {
            sVar2 = *(short *)((longlong)iVar15 * 2 + lVar11 + 0x14 + (longlong)iVar14 * 2);
            sVar7 = System_String__get_Chars(lVar5,iVar14,0);
            if (sVar2 != sVar7) {
              iVar14 = 1;
              goto LAB_18170a711;
            }
          }
          FUN_180254200(&uStack_68,iVar15,MR_System.Collections.Generic.ValueListBuilder<int>.Append);
          iVar14 = *(int *)(lVar5 + 0x10);
LAB_18170a711:
          iVar1 = iVar14 + iVar15;
          iVar15 = iVar15 + iVar14;
        } while (iVar1 <= iVar8);
      }
      if ((int)uStack_50 != 0) {
        uVar3 = *(undefined4 *)(lVar5 + 0x10);
        FUN_180fdf3f0(&puStack_78,&uStack_68,MR_System.Collections.Generic.ValueListBuilder<int>.AsSpan);
        lVar11 = System_String__ReplaceHelper(lVar11,uVar3,lVar9,&puStack_78,0);
        FUN_180254280(&uStack_68,MR_System.Collections.Generic.ValueListBuilder<int>.Dispose);
      }
      return lVar11;
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  lVar9 = (*pcVar4)();
  return lVar9;
}

