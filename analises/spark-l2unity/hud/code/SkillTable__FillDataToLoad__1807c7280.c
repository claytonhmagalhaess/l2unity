// SkillTable__FillDataToLoad__1807c7280 @ 0x1807c7280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SkillTable__FillDataToLoad__1807c7280(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  
  if (cRam00000001834b459d == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<int>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<int>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<int>);
    cRam00000001834b459d = '\x01';
  }
  lVar6 = func_0x000180315580(TI_System.Collections.Generic.List<int>);
  FUN_180bba2e0(lVar6,MR_System.Collections.Generic.List<int>..ctor);
  lVar4 = MR_System.Collections.Generic.List<int>.Add;
  if (lVar6 != 0) {
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar3 = *(longlong *)(lVar6 + 0x10);
    if (lVar3 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar3 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar3 + 0x20 + (longlong)(int)uVar8 * 4) = 0x10;
    }
    else {
      FUN_18162d2b0(lVar6,0x10,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x38;
    }
    else {
      FUN_18162d2b0(lVar6,0x38,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 3;
    }
    else {
      FUN_18162d2b0(lVar6,3,*(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x4c0;
    }
    else {
      FUN_18162d2b0(lVar6,0x4c0,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x4d4;
    }
    else {
      FUN_18162d2b0(lVar6,0x4d4,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x499;
    }
    else {
      FUN_18162d2b0(lVar6,0x499,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x3f4;
    }
    else {
      FUN_18162d2b0(lVar6,0x3f4,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x3f3;
    }
    else {
      FUN_18162d2b0(lVar6,0x3f3,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x490;
    }
    else {
      FUN_18162d2b0(lVar6,0x490,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x10f9;
    }
    else {
      FUN_18162d2b0(lVar6,0x10f9,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x410;
    }
    else {
      FUN_18162d2b0(lVar6,0x410,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x403;
    }
    else {
      FUN_18162d2b0(lVar6,0x403,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x3f7;
    }
    else {
      FUN_18162d2b0(lVar6,0x3f7,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x47b;
    }
    else {
      FUN_18162d2b0(lVar6,0x47b,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x48c;
    }
    else {
      FUN_18162d2b0(lVar6,0x48c,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x5b;
    }
    else {
      FUN_18162d2b0(lVar6,0x5b,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x4d;
    }
    else {
      FUN_18162d2b0(lVar6,0x4d,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x46;
    }
    else {
      FUN_18162d2b0(lVar6,0x46,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x1d;
    }
    else {
      FUN_18162d2b0(lVar6,0x1d,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x442;
    }
    else {
      FUN_18162d2b0(lVar6,0x442,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x44c;
    }
    else {
      FUN_18162d2b0(lVar6,0x44c,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x449;
    }
    else {
      FUN_18162d2b0(lVar6,0x449,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x3f2;
    }
    else {
      FUN_18162d2b0(lVar6,0x3f2,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x447;
    }
    else {
      FUN_18162d2b0(lVar6,0x447,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x8d;
    }
    else {
      FUN_18162d2b0(lVar6,0x8d,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x8e;
    }
    else {
      FUN_18162d2b0(lVar6,0x8e,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x7f7;
    }
    else {
      FUN_18162d2b0(lVar6,0x7f7,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x866;
    }
    else {
      FUN_18162d2b0(lVar6,0x866,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x867;
    }
    else {
      FUN_18162d2b0(lVar6,0x867,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x868;
    }
    else {
      FUN_18162d2b0(lVar6,0x868,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x869;
    }
    else {
      FUN_18162d2b0(lVar6,0x869,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x86a;
    }
    else {
      FUN_18162d2b0(lVar6,0x86a,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x80d;
    }
    else {
      FUN_18162d2b0(lVar6,0x80d,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x870;
    }
    else {
      FUN_18162d2b0(lVar6,0x870,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x871;
    }
    else {
      FUN_18162d2b0(lVar6,0x871,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x872;
    }
    else {
      FUN_18162d2b0(lVar6,0x872,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x873;
    }
    else {
      FUN_18162d2b0(lVar6,0x873,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x874;
    }
    else {
      FUN_18162d2b0(lVar6,0x874,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x7ff;
    }
    else {
      FUN_18162d2b0(lVar6,0x7ff,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x86b;
    }
    else {
      FUN_18162d2b0(lVar6,0x86b,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x86c;
    }
    else {
      FUN_18162d2b0(lVar6,0x86c,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x86d;
    }
    else {
      FUN_18162d2b0(lVar6,0x86d,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x86e;
    }
    else {
      FUN_18162d2b0(lVar6,0x86e,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x0001807c81e7;
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar8 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001807c81ed;
      *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x86f;
    }
    else {
      FUN_18162d2b0(lVar6,0x86f,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = MR_System.Collections.Generic.List<int>.Add;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if (lVar4 != 0) {
      uVar8 = *(uint *)(lVar6 + 0x18);
      if (uVar8 < *(uint *)(lVar4 + 0x18)) {
        uVar7 = (ulonglong)(uVar8 + 1);
        *(uint *)(lVar6 + 0x18) = uVar8 + 1;
        if (*(uint *)(lVar4 + 0x18) <= uVar8) {
code_r0x0001807c81ed:
          FUN_1803155c0();
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return uVar7;
        }
        *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 4) = 0x84a;
      }
      else {
        uVar7 = FUN_18162d2b0(lVar6,0x84a,
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      *(longlong *)(param_1 + 0x10) = lVar6;
      if (_DAT_1834c7d58 != 0) {
        uVar8 = (uint)(param_1 + 0x10U >> 0xc);
        puVar1 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
        do {
          uVar2 = *puVar1;
          LOCK();
          uVar7 = *puVar1;
          bVar9 = uVar2 == uVar7;
          if (bVar9) {
            *puVar1 = uVar2 | 1L << (uVar8 & 0x3f);
            uVar7 = uVar2;
          }
          UNLOCK();
        } while (!bVar9);
      }
      return uVar7;
    }
  }
code_r0x0001807c81e7:
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return uVar7;
}

