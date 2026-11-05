// PlayerShortcuts__IsSkillToggled__1804d2170 @ 0x1804d2170

undefined8 PlayerShortcuts__IsSkillToggled__1804d2170(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  
  if (cRam00000001834b340f == '\0') {
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>.Contains);
    cRam00000001834b340f = '\x01';
  }
  lVar5 = MR_System.Collections.Generic.HashSet<int>.Contains;
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return uVar11;
  }
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    return 0;
  }
  lVar3 = *(longlong *)(lVar2 + 0x30);
  if (lVar3 != 0) {
    lVar8 = *(longlong *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(MR_System.Collections.Generic.HashSet<int>.Contains + 0x20) + 0xc0) + 0xb0) + 0x20)
               + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_180312f40(lVar8);
    }
    uVar7 = FUN_1800022b0(1,lVar8,lVar3,param_2);
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (lVar3 != 0) {
      uVar12 = (int)(uVar7 & 0x7fffffff) % *(int *)(lVar3 + 0x18);
      if (*(uint *)(lVar3 + 0x18) <= uVar12) {
code_r0x0001814cf43b:
        FUN_1803155c0();
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return uVar11;
      }
      uVar12 = *(int *)(lVar3 + 0x20 + (longlong)(int)uVar12 * 4) - 1;
      if (-1 < (int)uVar12) {
        lVar3 = *(longlong *)(lVar2 + 0x18);
        if (lVar3 == 0) goto code_r0x0001814cf3f8;
        iVar13 = 0;
        do {
          if (*(uint *)(lVar3 + 0x18) <= uVar12) goto code_r0x0001814cf43b;
          if (*(uint *)(lVar3 + 0x20 + (longlong)(int)uVar12 * 0xc) == (uVar7 & 0x7fffffff)) {
            lVar8 = *(longlong *)(lVar2 + 0x30);
            if (lVar8 == 0) goto code_r0x0001814cf3f8;
            uVar1 = *(undefined4 *)(lVar3 + 0x28 + (longlong)(int)uVar12 * 0xc);
            lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_180312f40(lVar9);
            }
            cVar6 = FUN_18002cd30(0,lVar9,lVar8,uVar1,param_2);
            if (cVar6 != '\0') {
              return 1;
            }
          }
          if (*(int *)(lVar3 + 0x18) <= iVar13) {
            uVar11 = func_0x0001803153a0(TI_System.InvalidOperationException);
            uVar11 = func_0x000180315580(uVar11);
            uVar10 = func_0x0001803153a0(LIT_"\"Operations that change non-concurrent collections must h...");
            System_InvalidOperationException___ctor(uVar11,uVar10,0);
            FUN_180315590(uVar11,lVar5);
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return uVar11;
          }
          if (*(uint *)(lVar3 + 0x18) <= uVar12) goto code_r0x0001814cf43b;
          iVar13 = iVar13 + 1;
          uVar12 = *(uint *)(lVar3 + ((longlong)(int)uVar12 + 3) * 0xc);
        } while (-1 < (int)uVar12);
      }
      return 0;
    }
  }
code_r0x0001814cf3f8:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  uVar11 = (*pcVar4)();
  return uVar11;
}

