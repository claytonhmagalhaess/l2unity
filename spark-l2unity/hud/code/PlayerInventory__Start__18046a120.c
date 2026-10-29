// PlayerInventory__Start__18046a120 @ 0x18046a120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [32] PlayerInventory__Start__18046a120(longlong param_1)

{
  undefined1 auVar1 [32];
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined1 (*in_RAX) [32];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  undefined1 (*pauVar12) [16];
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auVar16 [32];
  
  if (cRam00000001834b3043 == '\0') {
    in_RAX = (undefined1 (*) [32])FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.Clear);
    cRam00000001834b3043 = '\x01';
  }
  lVar15 = *(longlong *)(param_1 + 0x28);
  if (lVar15 == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    pauVar9 = (undefined1 (*) [32])(*pcVar4)();
    return pauVar9;
  }
  iVar2 = *(int *)(lVar15 + 0x18);
  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
  *(undefined4 *)(lVar15 + 0x18) = 0;
  if (iVar2 < 1) {
    return in_RAX;
  }
  puVar3 = *(undefined8 **)(lVar15 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    uVar7 = func_0x0001803153a0(TI_System.ArgumentNullException,0,iVar2,0);
    uVar7 = func_0x000180315580(uVar7);
    uVar8 = func_0x0001803153a0(LIT_"'array'");
    System_ArgumentNullException___ctor(uVar7,uVar8,0);
    uVar8 = func_0x0001803153a0(MD_System.Array.Clear);
    FUN_180315590(uVar7,uVar8);
    pcVar4 = (code *)swi(3);
    pauVar9 = (undefined1 (*) [32])(*pcVar4)();
    return pauVar9;
  }
  if (iVar2 < 0) {
    uVar7 = func_0x0001803153a0(TI_System.IndexOutOfRangeException,0,iVar2,0);
    uVar7 = func_0x000180315580(uVar7);
    uVar8 = func_0x0001803153a0(LIT_"'length < 0'");
    System_IndexOutOfRangeException___ctor(uVar7,uVar8,0);
    uVar8 = func_0x0001803153a0(MD_System.Array.Clear);
    FUN_180315590(uVar7,uVar8);
    pcVar4 = (code *)swi(3);
    pauVar9 = (undefined1 (*) [32])(*pcVar4)();
    return pauVar9;
  }
  iVar5 = FUN_180335f40(puVar3,0);
  if (0 < iVar5) {
    uVar7 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
    uVar7 = func_0x000180315580(uVar7);
    uVar8 = func_0x0001803153a0(LIT_"'index < lower bound'");
    System_IndexOutOfRangeException___ctor(uVar7,uVar8,0);
    uVar8 = func_0x0001803153a0(MD_System.Array.Clear);
    FUN_180315590(uVar7,uVar8);
    pcVar4 = (code *)swi(3);
    pauVar9 = (undefined1 (*) [32])(*pcVar4)();
    return pauVar9;
  }
  iVar6 = System_Array__InternalArray__ICollection_get_Count(puVar3,0);
  if (iVar6 - iVar2 < -iVar5) {
    uVar7 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
    uVar7 = func_0x000180315580(uVar7);
    uVar8 = func_0x0001803153a0(LIT_"'index + length > size'");
    System_IndexOutOfRangeException___ctor(uVar7,uVar8,0);
    uVar8 = func_0x0001803153a0(MD_System.Array.Clear);
    FUN_180315590(uVar7,uVar8);
    pcVar4 = (code *)swi(3);
    pauVar9 = (undefined1 (*) [32])(*pcVar4)();
    return pauVar9;
  }
  iVar6 = func_0x00018036cf90(*puVar3);
  uVar13 = (ulonglong)(iVar6 * iVar2);
  pauVar9 = (undefined1 (*) [32])((longlong)puVar3 + (longlong)iVar6 * (longlong)-iVar5 + 0x20);
  switch(uVar13) {
  case 0:
    return pauVar9;
  case 8:
    *(undefined8 *)(pauVar9[-1] + uVar13 + 0x18) = 0;
    return pauVar9;
  case 9:
    *(undefined8 *)(pauVar9[-1] + uVar13 + 0x17) = 0;
    pauVar9[-1][uVar13 + 0x1f] = 0;
    return pauVar9;
  case 10:
    *(undefined8 *)(pauVar9[-1] + uVar13 + 0x16) = 0;
    *(undefined2 *)(pauVar9[-1] + uVar13 + 0x1e) = 0;
    return pauVar9;
  case 0xb:
    *(undefined8 *)(pauVar9[-1] + uVar13 + 0x15) = 0;
    *(undefined2 *)(pauVar9[-1] + uVar13 + 0x1d) = 0;
    pauVar9[-1][uVar13 + 0x1f] = 0;
    return pauVar9;
  case 0xc:
    *(undefined8 *)(pauVar9[-1] + uVar13 + 0x14) = 0;
  case 4:
    *(undefined4 *)(pauVar9[-1] + uVar13 + 0x1c) = 0;
    return pauVar9;
  case 0xd:
    *(undefined8 *)(pauVar9[-1] + uVar13 + 0x13) = 0;
  case 5:
    *(undefined4 *)(pauVar9[-1] + uVar13 + 0x1b) = 0;
    pauVar9[-1][uVar13 + 0x1f] = 0;
    return pauVar9;
  case 0xe:
    *(undefined8 *)(pauVar9[-1] + uVar13 + 0x12) = 0;
  case 6:
    *(undefined4 *)(pauVar9[-1] + uVar13 + 0x1a) = 0;
  case 2:
    *(undefined2 *)(pauVar9[-1] + uVar13 + 0x1e) = 0;
    return pauVar9;
  case 0xf:
    *(undefined8 *)(pauVar9[-1] + uVar13 + 0x11) = 0;
  case 7:
    *(undefined4 *)(pauVar9[-1] + uVar13 + 0x19) = 0;
  case 3:
    *(undefined2 *)(pauVar9[-1] + uVar13 + 0x1d) = 0;
  case 1:
    pauVar9[-1][uVar13 + 0x1f] = 0;
    return pauVar9;
  }
  auVar16._0_16_ = ZEXT816(0);
  if (uVar13 < 0x21) {
    *(undefined1 (*) [16])*pauVar9 = auVar16._0_16_;
    *(undefined1 (*) [16])(pauVar9[-1] + uVar13 + 0x10) = auVar16._0_16_;
    return pauVar9;
  }
  pauVar10 = pauVar9;
  if (_DAT_1834b1878 < 3) {
    if ((uVar13 <= _DAT_1834b1880) || ((DAT_1834c86f4 & 2) == 0)) {
      lVar15 = ((ulonglong)pauVar9 & 0xf) - 0x10;
      pauVar12 = (undefined1 (*) [16])((longlong)pauVar9 - lVar15);
      uVar13 = uVar13 + lVar15;
      if (0x80 < uVar13) {
        do {
          *pauVar12 = auVar16._0_16_;
          pauVar12[1] = auVar16._0_16_;
          pauVar12[2] = auVar16._0_16_;
          pauVar12[3] = auVar16._0_16_;
          pauVar12[4] = auVar16._0_16_;
          pauVar12[5] = auVar16._0_16_;
          pauVar12[6] = auVar16._0_16_;
          pauVar12[7] = auVar16._0_16_;
          pauVar12 = pauVar12 + 8;
          uVar13 = uVar13 - 0x80;
        } while (0x7f < uVar13);
      }
                    /* WARNING: Could not recover jumptable at 0x0001803d4c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar9 = (undefined1 (*) [32])
                (*(code *)((ulonglong)*(uint *)(&UNK_183069118 + (uVar13 + 0xf >> 4) * 4) +
                          0x180000000))(pauVar12,-lVar15);
      return pauVar9;
    }
  }
  else if (((uVar13 <= _DAT_1834b1880) || (_DAT_1834b1888 < uVar13)) || ((DAT_1834c86f4 & 2) == 0))
  {
    auVar16._16_16_ = auVar16._0_16_;
    lVar15 = ((ulonglong)pauVar9 & 0x1f) - 0x20;
    pauVar10 = (undefined1 (*) [32])((longlong)pauVar9 - lVar15);
    uVar13 = uVar13 + lVar15;
    if (0x100 < uVar13) {
      if (_DAT_1834b1888 < uVar13) {
        do {
          uVar14 = uVar13;
          pauVar11 = pauVar10;
          auVar1 = vmovntdq_avx(auVar16);
          *pauVar11 = auVar1;
          auVar1 = vmovntdq_avx(auVar16);
          pauVar11[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar16);
          pauVar11[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar16);
          pauVar11[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar16);
          pauVar11[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar16);
          pauVar11[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar16);
          pauVar11[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar16);
          pauVar11[7] = auVar1;
          pauVar10 = pauVar11 + 8;
          uVar13 = uVar14 - 0x100;
        } while (0xff < uVar14 - 0x100);
        uVar13 = uVar14 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar14) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar1 = vmovntdq_avx(auVar16);
          *(undefined1 (*) [32])(*pauVar11 + uVar13) = auVar1;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar1 = vmovntdq_avx(auVar16);
          *(undefined1 (*) [32])(pauVar11[1] + uVar13) = auVar1;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar1 = vmovntdq_avx(auVar16);
          *(undefined1 (*) [32])(pauVar11[2] + uVar13) = auVar1;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar1 = vmovntdq_avx(auVar16);
          *(undefined1 (*) [32])(pauVar11[3] + uVar13) = auVar1;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar1 = vmovntdq_avx(auVar16);
          *(undefined1 (*) [32])(pauVar11[4] + uVar13) = auVar1;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar1 = vmovntdq_avx(auVar16);
          *(undefined1 (*) [32])(pauVar11[5] + uVar13) = auVar1;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar1 = vmovntdq_avx(auVar16);
          *(undefined1 (*) [32])(pauVar11[6] + uVar13) = auVar1;
        default:
          *(undefined1 (*) [32])(pauVar11[-1] + uVar14) = auVar16;
        case 0x100:
          *pauVar9 = auVar16;
          return pauVar9;
        }
      }
      do {
        *pauVar10 = auVar16;
        pauVar10[1] = auVar16;
        pauVar10[2] = auVar16;
        pauVar10[3] = auVar16;
        pauVar10[4] = auVar16;
        pauVar10[5] = auVar16;
        pauVar10[6] = auVar16;
        pauVar10[7] = auVar16;
        pauVar10 = pauVar10 + 8;
        uVar13 = uVar13 - 0x100;
      } while (0xff < uVar13);
    }
                    /* WARNING: Could not recover jumptable at 0x0001803d4ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar9 = (undefined1 (*) [32])
              (*(code *)((ulonglong)*(uint *)(&UNK_1830690d0 + (uVar13 + 0x1f >> 5) * 4) +
                        0x180000000))(0,-lVar15);
    return pauVar9;
  }
  for (; uVar13 != 0; uVar13 = uVar13 - 1) {
    (*pauVar10)[0] = 0;
    pauVar10 = (undefined1 (*) [32])(*pauVar10 + 1);
  }
  return pauVar9;
}

