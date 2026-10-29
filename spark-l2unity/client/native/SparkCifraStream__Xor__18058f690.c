// SparkCifraStream__Xor__18058f690 @ 0x18058f690

void SparkCifraStream__Xor__18058f690
               (longlong param_1,ulonglong param_2,longlong param_3,int param_4,int param_5)

{
  byte *pbVar1;
  ulonglong uVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  longlong lVar12;
  uint uVar13;
  
  if (cRam00000001834b39e7 == '\0') {
    FUN_180315380(0x1832ec368);
    FUN_180315380(0x183327a00);
    FUN_180315380(0x18332c900);
    FUN_180315380(0x1832eb0e0);
    cRam00000001834b39e7 = '\x01';
  }
  if (0 < param_5) {
    lVar12 = (longlong)param_2 >> 3;
    iVar9 = 0;
    uVar10 = (uint)param_2 & 7;
    if ((param_2 & 7) != 0) {
      if (*(int *)(lRam00000001832eb0e0 + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar7 = param_1 + lVar12 * -0x61c8864680b583eb;
      uVar7 = (uVar7 >> 0x1e ^ uVar7) * -0x40a7b892e31b1a47;
      uVar7 = (uVar7 >> 0x1b ^ uVar7) * -0x6b2fb644ecceee15;
      do {
        if (param_5 <= iVar9) break;
        if (param_3 == 0) goto DAT_18058f9cb;
        if (*(uint *)(param_3 + 0x18) <= (uint)(iVar9 + param_4)) goto code_r0x00018058f9d1;
        iVar4 = iVar9 + param_4;
        iVar9 = iVar9 + 1;
        cVar11 = (char)uVar10;
        uVar10 = uVar10 + 1;
        pbVar1 = (byte *)((longlong)iVar4 + 0x20 + param_3);
        *pbVar1 = *pbVar1 ^ (byte)((uVar7 >> 0x1f ^ uVar7) >> (cVar11 * '\b' & 0x3fU));
      } while ((int)uVar10 < 8);
      lVar12 = lVar12 + 1;
    }
    iVar4 = param_5 - iVar9 >> 3;
    if (0 < iVar4) {
      uVar10 = iVar9 + param_4;
      uVar13 = iVar4 * 8;
      if (param_3 == 0) {
        if ((uVar10 != 0) || (uVar13 != 0)) {
          FUN_1818c0520(0);
        }
        lVar5 = 0;
        uVar13 = 0;
      }
      else {
        if ((*(uint *)(param_3 + 0x18) < uVar10) || (*(int *)(param_3 + 0x18) - uVar10 < uVar13)) {
          FUN_1818c0520(0);
        }
        lVar5 = (longlong)(int)uVar10 + 0x20 + param_3;
      }
      if (*(longlong *)(lRam00000001832ec368 + 0x38) == 0) {
        FUN_180312fc0();
      }
      uVar10 = 0;
      if (uVar13 != 0) {
        do {
          uVar7 = (ulonglong)uVar10;
          if (uVar13 >> 3 <= uVar10) goto code_r0x00018058f9d1;
          uVar2 = *(ulonglong *)(lVar5 + uVar7 * 8);
          if (*(int *)(lRam00000001832eb0e0 + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar8 = param_1 + (uVar7 + lVar12) * -0x61c8864680b583eb;
          uVar8 = (uVar8 >> 0x1e ^ uVar8) * -0x40a7b892e31b1a47;
          uVar8 = (uVar8 >> 0x1b ^ uVar8) * -0x6b2fb644ecceee15;
          *(ulonglong *)(lVar5 + uVar7 * 8) = uVar8 >> 0x1f ^ uVar8 ^ uVar2;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)(uVar13 >> 3));
      }
      iVar9 = iVar9 + iVar4 * 8;
      lVar12 = lVar12 + iVar4;
    }
    if (iVar9 < param_5) {
      if (*(int *)(lRam00000001832eb0e0 + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar7 = param_1 + lVar12 * -0x61c8864680b583eb;
      uVar7 = (uVar7 >> 0x1e ^ uVar7) * -0x40a7b892e31b1a47;
      uVar7 = (uVar7 >> 0x1b ^ uVar7) * -0x6b2fb644ecceee15;
      if (param_3 == 0) {
DAT_18058f9cb:
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar11 = '\0';
      do {
        if (*(uint *)(param_3 + 0x18) <= (uint)(iVar9 + param_4)) {
code_r0x00018058f9d1:
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar4 = iVar9 + param_4;
        iVar9 = iVar9 + 1;
        bVar6 = cVar11 * '\b';
        cVar11 = cVar11 + '\x01';
        pbVar1 = (byte *)((longlong)iVar4 + 0x20 + param_3);
        *pbVar1 = *pbVar1 ^ (byte)((uVar7 >> 0x1f ^ uVar7) >> (bVar6 & 0x3f));
      } while (iVar9 < param_5);
    }
  }
  return;
}

