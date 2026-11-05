// ChatWindow__Escapa__1805c6bc0 @ 0x1805c6bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong ChatWindow__Escapa__1805c6bc0(longlong param_1)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  short sVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lStackX_18;
  undefined1 auStack_278 [456];
  undefined8 uStack_b0;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (cRam00000001834b3ae4 == '\0') {
    FUN_180315380(LIT_"'<'");
    FUN_180315380(LIT_"'<noparse><</noparse>'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3ae4 = '\x01';
  }
  cVar6 = func_0x000181707e50(param_1,0);
  lVar5 = LIT_"'<noparse><</noparse>'";
  lVar11 = LIT_"'<'";
  if (cVar6 != '\0') {
    return LIT_"''";
  }
  if (param_1 == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    lVar11 = (*pcVar4)();
    return lVar11;
  }
  lStackX_18 = LIT_"'<noparse><</noparse>'";
  if (DAT_1834b89b9 == '\0') {
    uStack_b0 = 0x18170a5e8;
    FUN_180315380(MR_System.Span<int>..ctor,LIT_"'<'",LIT_"'<noparse><</noparse>'",0);
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
  if (lVar11 == 0) {
    uStack_b0 = 0x18170a799;
    uVar8 = func_0x0001803153a0(TI_System.ArgumentNullException);
    uStack_b0 = 0x18170a7a1;
    uVar8 = func_0x000180315580(uVar8);
    uStack_b0 = 0x18170a7b0;
    uVar9 = func_0x0001803153a0(LIT_"'oldValue'");
    uStack_b0 = 0x18170a7be;
    System_ArgumentNullException___ctor(uVar8,uVar9,0);
    uStack_b0 = 0x18170a7ca;
    uVar9 = func_0x0001803153a0(MD_System.String.Replace);
    uStack_b0 = 0x18170a7d5;
    FUN_180315590(uVar8,uVar9);
    pcVar4 = (code *)swi(3);
    lVar11 = (*pcVar4)();
    return lVar11;
  }
  if (*(int *)(lVar11 + 0x10) == 0) {
    uStack_b0 = 0x18170a7e2;
    uVar8 = func_0x0001803153a0(TI_System.ArgumentException);
    uStack_b0 = 0x18170a7ea;
    uVar8 = func_0x000180315580(uVar8);
    uStack_b0 = 0x18170a7f9;
    uVar9 = func_0x0001803153a0(LIT_"'oldValue'");
    uStack_b0 = 0x18170a808;
    uVar10 = func_0x0001803153a0(LIT_"'String cannot be of zero length.'");
    uStack_b0 = 0x18170a819;
    System_ArgumentException___ctor(uVar8,uVar10,uVar9,0);
    uStack_b0 = 0x18170a825;
    uVar9 = func_0x0001803153a0(MD_System.String.Replace);
    uStack_b0 = 0x18170a830;
    FUN_180315590(uVar8,uVar9);
    pcVar4 = (code *)swi(3);
    lVar11 = (*pcVar4)();
    return lVar11;
  }
  if (lVar5 == 0) {
    lStackX_18 = **(longlong **)(_DAT_1834c62b0 + 0xb8);
  }
  FUN_1803d4930(auStack_278,0,0x200);
  uStack_70 = 0x80;
  puStack_78 = auStack_278;
  func_0x000180fdff80(&uStack_68,&puStack_78,MR_System.Collections.Generic.ValueListBuilder<int>..ctor);
  iVar13 = *(int *)(param_1 + 0x10) - *(int *)(lVar11 + 0x10);
  if (-1 < iVar13) {
    iVar14 = 0;
    do {
      for (iVar12 = 0; iVar12 < *(int *)(lVar11 + 0x10); iVar12 = iVar12 + 1) {
        sVar2 = *(short *)((longlong)iVar14 * 2 + param_1 + 0x14 + (longlong)iVar12 * 2);
        sVar7 = System_String__get_Chars(lVar11,iVar12,0);
        if (sVar2 != sVar7) {
          iVar12 = 1;
          goto LAB_18170a711;
        }
      }
      FUN_180254200(&uStack_68,iVar14,MR_System.Collections.Generic.ValueListBuilder<int>.Append);
      iVar12 = *(int *)(lVar11 + 0x10);
LAB_18170a711:
      iVar1 = iVar12 + iVar14;
      iVar14 = iVar14 + iVar12;
    } while (iVar1 <= iVar13);
  }
  if ((int)uStack_50 != 0) {
    uVar3 = *(undefined4 *)(lVar11 + 0x10);
    FUN_180fdf3f0(&puStack_78,&uStack_68,MR_System.Collections.Generic.ValueListBuilder<int>.AsSpan);
    param_1 = System_String__ReplaceHelper(param_1,uVar3,lStackX_18,&puStack_78,0);
    FUN_180254280(&uStack_68,MR_System.Collections.Generic.ValueListBuilder<int>.Dispose);
  }
  return param_1;
}

