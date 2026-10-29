// ==== 103412a0 FUN_103412a0 depth=0 from=raiz callees=
// strings: 

uint __fastcall FUN_103412a0(int param_1)

{
  return *(uint *)(param_1 + 0x748) & 1;
}


// ==== 10361ad0 FUN_10361ad0 depth=0 from=raiz callees=
// strings: 

void __thiscall FUN_10361ad0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = NCBoneSimul::vftable;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  puVar2 = (undefined4 *)(param_2 + 0x18);
  puVar3 = param_1 + 6;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x26] = *(undefined4 *)(param_2 + 0x98);
  param_1[0x27] = *(undefined4 *)(param_2 + 0x9c);
  param_1[0x28] = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x29] = *(undefined4 *)(param_2 + 0xa4);
  param_1[0x2a] = *(undefined4 *)(param_2 + 0xa8);
  puVar2 = (undefined4 *)(param_2 + 0xac);
  puVar3 = param_1 + 0x2b;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0xdc);
  puVar3 = param_1 + 0x37;
  for (iVar1 = 0x180; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x1b7] = *(undefined4 *)(param_2 + 0x6dc);
  param_1[0x1b8] = *(undefined4 *)(param_2 + 0x6e0);
  param_1[0x1b9] = *(undefined4 *)(param_2 + 0x6e4);
  param_1[0x1ba] = *(undefined4 *)(param_2 + 0x6e8);
  param_1[0x1bb] = *(undefined4 *)(param_2 + 0x6ec);
  param_1[0x1bc] = *(undefined4 *)(param_2 + 0x6f0);
  param_1[0x1bd] = *(undefined4 *)(param_2 + 0x6f4);
  param_1[0x1be] = *(undefined4 *)(param_2 + 0x6f8);
  param_1[0x1bf] = *(undefined4 *)(param_2 + 0x6fc);
  param_1[0x1c0] = *(undefined4 *)(param_2 + 0x700);
  param_1[0x1c1] = *(undefined4 *)(param_2 + 0x704);
  param_1[0x1c2] = *(undefined4 *)(param_2 + 0x708);
  param_1[0x1c3] = *(undefined4 *)(param_2 + 0x70c);
  param_1[0x1c4] = *(undefined4 *)(param_2 + 0x710);
  param_1[0x1c5] = *(undefined4 *)(param_2 + 0x714);
  param_1[0x1c6] = *(undefined4 *)(param_2 + 0x718);
  param_1[0x1c7] = *(undefined4 *)(param_2 + 0x71c);
  param_1[0x1c8] = *(undefined4 *)(param_2 + 0x720);
  param_1[0x1c9] = *(undefined4 *)(param_2 + 0x724);
  param_1[0x1ca] = *(undefined4 *)(param_2 + 0x728);
  param_1[0x1cb] = *(undefined4 *)(param_2 + 0x72c);
  param_1[0x1cc] = *(undefined4 *)(param_2 + 0x730);
  param_1[0x1cd] = *(undefined4 *)(param_2 + 0x734);
  param_1[0x1ce] = *(undefined4 *)(param_2 + 0x738);
  param_1[0x1cf] = *(undefined4 *)(param_2 + 0x73c);
  param_1[0x1d0] = *(undefined4 *)(param_2 + 0x740);
  param_1[0x1d1] = *(undefined4 *)(param_2 + 0x744);
  param_1[0x1d2] = *(undefined4 *)(param_2 + 0x748);
  param_1[0x1d3] = *(undefined4 *)(param_2 + 0x74c);
  param_1[0x1d4] = *(undefined4 *)(param_2 + 0x750);
  param_1[0x1d5] = *(undefined4 *)(param_2 + 0x754);
  param_1[0x1d6] = *(undefined4 *)(param_2 + 0x758);
  param_1[0x1d7] = *(undefined4 *)(param_2 + 0x75c);
  param_1[0x1d8] = *(undefined4 *)(param_2 + 0x760);
  param_1[0x1d9] = *(undefined4 *)(param_2 + 0x764);
  param_1[0x1da] = *(undefined4 *)(param_2 + 0x768);
  param_1[0x1db] = *(undefined4 *)(param_2 + 0x76c);
  param_1[0x1dc] = *(undefined4 *)(param_2 + 0x770);
  param_1[0x1dd] = *(undefined4 *)(param_2 + 0x774);
  param_1[0x1de] = *(undefined4 *)(param_2 + 0x778);
  param_1[0x1df] = *(undefined4 *)(param_2 + 0x77c);
  param_1[0x1e0] = *(undefined4 *)(param_2 + 0x780);
  param_1[0x1e1] = *(undefined4 *)(param_2 + 0x784);
  param_1[0x1e2] = *(undefined4 *)(param_2 + 0x788);
  param_1[0x1e3] = *(undefined4 *)(param_2 + 0x78c);
  param_1[0x1e4] = *(undefined4 *)(param_2 + 0x790);
  param_1[0x1e5] = *(undefined4 *)(param_2 + 0x794);
  param_1[0x1e6] = *(undefined4 *)(param_2 + 0x798);
  param_1[0x1e7] = *(undefined4 *)(param_2 + 0x79c);
  param_1[0x1e8] = *(undefined4 *)(param_2 + 0x7a0);
  param_1[0x1e9] = *(undefined4 *)(param_2 + 0x7a4);
  param_1[0x1ea] = *(undefined4 *)(param_2 + 0x7a8);
  param_1[0x1eb] = *(undefined4 *)(param_2 + 0x7ac);
  param_1[0x1ec] = *(undefined4 *)(param_2 + 0x7b0);
  param_1[0x1ed] = *(undefined4 *)(param_2 + 0x7b4);
  param_1[0x1ee] = *(undefined4 *)(param_2 + 0x7b8);
  puVar2 = (undefined4 *)(param_2 + 0x7bc);
  puVar3 = param_1 + 0x1ef;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0x7ec);
  puVar3 = param_1 + 0x1fb;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0x81c);
  puVar3 = param_1 + 0x207;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0x84c);
  puVar3 = param_1 + 0x213;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0x87c);
  puVar3 = param_1 + 0x21f;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0x8ac);
  puVar3 = param_1 + 0x22b;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x237] = *(undefined4 *)(param_2 + 0x8dc);
  param_1[0x238] = *(undefined4 *)(param_2 + 0x8e0);
  param_1[0x239] = *(undefined4 *)(param_2 + 0x8e4);
  param_1[0x23a] = *(undefined4 *)(param_2 + 0x8e8);
  param_1[0x23b] = *(undefined4 *)(param_2 + 0x8ec);
  param_1[0x23c] = *(undefined4 *)(param_2 + 0x8f0);
  param_1[0x23d] = *(undefined4 *)(param_2 + 0x8f4);
  param_1[0x23e] = *(undefined4 *)(param_2 + 0x8f8);
  return;
}


// ==== 10361ff0 FUN_10361ff0 depth=0 from=raiz callees=
// strings: 

void __thiscall FUN_10361ff0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  puVar2 = (undefined4 *)(param_1 + 0x18);
  iVar3 = param_2 - param_1;
  iVar4 = 0x20;
  do {
    *puVar2 = *(undefined4 *)((int)puVar2 + iVar3);
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  puVar2 = (undefined4 *)(param_2 + 0xac);
  puVar5 = (undefined4 *)(param_1 + 0xac);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  param_2 = 0x20;
  puVar2 = (undefined4 *)(param_1 + 0xdc);
  do {
    param_2 = param_2 + -1;
    puVar5 = (undefined4 *)((int)puVar2 + iVar3);
    puVar6 = puVar2;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar2 = puVar2 + 0xc;
  } while (param_2 != 0);
  *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(iVar1 + 0x6dc);
  *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(iVar1 + 0x6e0);
  *(undefined4 *)(param_1 + 0x6e4) = *(undefined4 *)(iVar1 + 0x6e4);
  *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(iVar1 + 0x6e8);
  *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(iVar1 + 0x6ec);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(iVar1 + 0x6f0);
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(iVar1 + 0x6f4);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(iVar1 + 0x6f8);
  *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(iVar1 + 0x6fc);
  *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(iVar1 + 0x700);
  *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(iVar1 + 0x704);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(iVar1 + 0x708);
  *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(iVar1 + 0x70c);
  *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(iVar1 + 0x710);
  *(undefined4 *)(param_1 + 0x714) = *(undefined4 *)(iVar1 + 0x714);
  *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(iVar1 + 0x718);
  *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(iVar1 + 0x71c);
  *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)(iVar1 + 0x720);
  *(undefined4 *)(param_1 + 0x724) = *(undefined4 *)(iVar1 + 0x724);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(iVar1 + 0x728);
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(iVar1 + 0x72c);
  *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(iVar1 + 0x730);
  *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(iVar1 + 0x734);
  *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(iVar1 + 0x738);
  *(undefined4 *)(param_1 + 0x73c) = *(undefined4 *)(iVar1 + 0x73c);
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(iVar1 + 0x740);
  *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(iVar1 + 0x744);
  *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(iVar1 + 0x748);
  *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(iVar1 + 0x74c);
  *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(iVar1 + 0x750);
  *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(iVar1 + 0x754);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(iVar1 + 0x758);
  *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)(iVar1 + 0x75c);
  *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(iVar1 + 0x760);
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(iVar1 + 0x764);
  *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(iVar1 + 0x768);
  *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(iVar1 + 0x76c);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(iVar1 + 0x770);
  *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(iVar1 + 0x774);
  *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(iVar1 + 0x778);
  *(undefined4 *)(param_1 + 0x77c) = *(undefined4 *)(iVar1 + 0x77c);
  *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(iVar1 + 0x780);
  *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(iVar1 + 0x784);
  *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(iVar1 + 0x788);
  *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(iVar1 + 0x78c);
  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(iVar1 + 0x790);
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(iVar1 + 0x794);
  *(undefined4 *)(param_1 + 0x798) = *(undefined4 *)(iVar1 + 0x798);
  *(undefined4 *)(param_1 + 0x79c) = *(undefined4 *)(iVar1 + 0x79c);
  *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(iVar1 + 0x7a0);
  *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(iVar1 + 0x7a4);
  *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(iVar1 + 0x7a8);
  *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(iVar1 + 0x7ac);
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(iVar1 + 0x7b0);
  *(undefined4 *)(param_1 + 0x7b4) = *(undefined4 *)(iVar1 + 0x7b4);
  *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(iVar1 + 0x7b8);
  puVar2 = (undefined4 *)(iVar1 + 0x7bc);
  puVar5 = (undefined4 *)(param_1 + 0x7bc);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x7ec);
  puVar5 = (undefined4 *)(param_1 + 0x7ec);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x81c);
  puVar5 = (undefined4 *)(param_1 + 0x81c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x84c);
  puVar5 = (undefined4 *)(param_1 + 0x84c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x87c);
  puVar5 = (undefined4 *)(param_1 + 0x87c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x8ac);
  puVar5 = (undefined4 *)(param_1 + 0x8ac);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x8dc) = *(undefined4 *)(iVar1 + 0x8dc);
  *(undefined4 *)(param_1 + 0x8e0) = *(undefined4 *)(iVar1 + 0x8e0);
  *(undefined4 *)(param_1 + 0x8e4) = *(undefined4 *)(iVar1 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(iVar1 + 0x8e8);
  *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(iVar1 + 0x8ec);
  *(undefined4 *)(param_1 + 0x8f0) = *(undefined4 *)(iVar1 + 0x8f0);
  *(undefined4 *)(param_1 + 0x8f4) = *(undefined4 *)(iVar1 + 0x8f4);
  *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(iVar1 + 0x8f8);
  return;
}


// ==== 103625e0 FUN_103625e0 depth=0 from=raiz callees=
// strings: 

void __thiscall FUN_103625e0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = NCCloakSimul::vftable;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  puVar2 = (undefined4 *)(param_2 + 0x18);
  puVar3 = param_1 + 6;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x26] = *(undefined4 *)(param_2 + 0x98);
  param_1[0x27] = *(undefined4 *)(param_2 + 0x9c);
  param_1[0x28] = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x29] = *(undefined4 *)(param_2 + 0xa4);
  param_1[0x2a] = *(undefined4 *)(param_2 + 0xa8);
  puVar2 = (undefined4 *)(param_2 + 0xac);
  puVar3 = param_1 + 0x2b;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0xdc);
  puVar3 = param_1 + 0x37;
  for (iVar1 = 0x180; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x1b7] = *(undefined4 *)(param_2 + 0x6dc);
  param_1[0x1b8] = *(undefined4 *)(param_2 + 0x6e0);
  param_1[0x1b9] = *(undefined4 *)(param_2 + 0x6e4);
  param_1[0x1ba] = *(undefined4 *)(param_2 + 0x6e8);
  param_1[0x1bb] = *(undefined4 *)(param_2 + 0x6ec);
  param_1[0x1bc] = *(undefined4 *)(param_2 + 0x6f0);
  param_1[0x1bd] = *(undefined4 *)(param_2 + 0x6f4);
  param_1[0x1be] = *(undefined4 *)(param_2 + 0x6f8);
  param_1[0x1bf] = *(undefined4 *)(param_2 + 0x6fc);
  param_1[0x1c0] = *(undefined4 *)(param_2 + 0x700);
  param_1[0x1c1] = *(undefined4 *)(param_2 + 0x704);
  param_1[0x1c2] = *(undefined4 *)(param_2 + 0x708);
  param_1[0x1c3] = *(undefined4 *)(param_2 + 0x70c);
  param_1[0x1c4] = *(undefined4 *)(param_2 + 0x710);
  param_1[0x1c5] = *(undefined4 *)(param_2 + 0x714);
  param_1[0x1c6] = *(undefined4 *)(param_2 + 0x718);
  param_1[0x1c7] = *(undefined4 *)(param_2 + 0x71c);
  param_1[0x1c8] = *(undefined4 *)(param_2 + 0x720);
  param_1[0x1c9] = *(undefined4 *)(param_2 + 0x724);
  param_1[0x1ca] = *(undefined4 *)(param_2 + 0x728);
  param_1[0x1cb] = *(undefined4 *)(param_2 + 0x72c);
  param_1[0x1cc] = *(undefined4 *)(param_2 + 0x730);
  param_1[0x1cd] = *(undefined4 *)(param_2 + 0x734);
  param_1[0x1ce] = *(undefined4 *)(param_2 + 0x738);
  param_1[0x1cf] = *(undefined4 *)(param_2 + 0x73c);
  param_1[0x1d0] = *(undefined4 *)(param_2 + 0x740);
  param_1[0x1d1] = *(undefined4 *)(param_2 + 0x744);
  param_1[0x1d2] = *(undefined4 *)(param_2 + 0x748);
  param_1[0x1d3] = *(undefined4 *)(param_2 + 0x74c);
  param_1[0x1d4] = *(undefined4 *)(param_2 + 0x750);
  param_1[0x1d5] = *(undefined4 *)(param_2 + 0x754);
  param_1[0x1d6] = *(undefined4 *)(param_2 + 0x758);
  param_1[0x1d7] = *(undefined4 *)(param_2 + 0x75c);
  param_1[0x1d8] = *(undefined4 *)(param_2 + 0x760);
  param_1[0x1d9] = *(undefined4 *)(param_2 + 0x764);
  param_1[0x1da] = *(undefined4 *)(param_2 + 0x768);
  param_1[0x1db] = *(undefined4 *)(param_2 + 0x76c);
  param_1[0x1dc] = *(undefined4 *)(param_2 + 0x770);
  param_1[0x1dd] = *(undefined4 *)(param_2 + 0x774);
  param_1[0x1de] = *(undefined4 *)(param_2 + 0x778);
  param_1[0x1df] = *(undefined4 *)(param_2 + 0x77c);
  param_1[0x1e0] = *(undefined4 *)(param_2 + 0x780);
  param_1[0x1e1] = *(undefined4 *)(param_2 + 0x784);
  param_1[0x1e2] = *(undefined4 *)(param_2 + 0x788);
  param_1[0x1e3] = *(undefined4 *)(param_2 + 0x78c);
  param_1[0x1e4] = *(undefined4 *)(param_2 + 0x790);
  param_1[0x1e5] = *(undefined4 *)(param_2 + 0x794);
  param_1[0x1e6] = *(undefined4 *)(param_2 + 0x798);
  param_1[0x1e7] = *(undefined4 *)(param_2 + 0x79c);
  param_1[0x1e8] = *(undefined4 *)(param_2 + 0x7a0);
  param_1[0x1e9] = *(undefined4 *)(param_2 + 0x7a4);
  param_1[0x1ea] = *(undefined4 *)(param_2 + 0x7a8);
  param_1[0x1eb] = *(undefined4 *)(param_2 + 0x7ac);
  param_1[0x1ec] = *(undefined4 *)(param_2 + 0x7b0);
  param_1[0x1ed] = *(undefined4 *)(param_2 + 0x7b4);
  param_1[0x1ee] = *(undefined4 *)(param_2 + 0x7b8);
  puVar2 = (undefined4 *)(param_2 + 0x7bc);
  puVar3 = param_1 + 0x1ef;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0x7ec);
  puVar3 = param_1 + 0x1fb;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0x81c);
  puVar3 = param_1 + 0x207;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0x84c);
  puVar3 = param_1 + 0x213;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0x87c);
  puVar3 = param_1 + 0x21f;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0x8ac);
  puVar3 = param_1 + 0x22b;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x237] = *(undefined4 *)(param_2 + 0x8dc);
  return;
}


// ==== 10362a90 FUN_10362a90 depth=0 from=raiz callees=
// strings: 

void __thiscall FUN_10362a90(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  puVar2 = (undefined4 *)(param_1 + 0x18);
  iVar3 = param_2 - param_1;
  iVar4 = 0x20;
  do {
    *puVar2 = *(undefined4 *)((int)puVar2 + iVar3);
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  puVar2 = (undefined4 *)(param_2 + 0xac);
  puVar5 = (undefined4 *)(param_1 + 0xac);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  param_2 = 0x20;
  puVar2 = (undefined4 *)(param_1 + 0xdc);
  do {
    param_2 = param_2 + -1;
    puVar5 = (undefined4 *)((int)puVar2 + iVar3);
    puVar6 = puVar2;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar2 = puVar2 + 0xc;
  } while (param_2 != 0);
  *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(iVar1 + 0x6dc);
  *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(iVar1 + 0x6e0);
  *(undefined4 *)(param_1 + 0x6e4) = *(undefined4 *)(iVar1 + 0x6e4);
  *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(iVar1 + 0x6e8);
  *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(iVar1 + 0x6ec);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(iVar1 + 0x6f0);
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(iVar1 + 0x6f4);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(iVar1 + 0x6f8);
  *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(iVar1 + 0x6fc);
  *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(iVar1 + 0x700);
  *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(iVar1 + 0x704);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(iVar1 + 0x708);
  *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(iVar1 + 0x70c);
  *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(iVar1 + 0x710);
  *(undefined4 *)(param_1 + 0x714) = *(undefined4 *)(iVar1 + 0x714);
  *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(iVar1 + 0x718);
  *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(iVar1 + 0x71c);
  *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)(iVar1 + 0x720);
  *(undefined4 *)(param_1 + 0x724) = *(undefined4 *)(iVar1 + 0x724);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(iVar1 + 0x728);
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(iVar1 + 0x72c);
  *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(iVar1 + 0x730);
  *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(iVar1 + 0x734);
  *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(iVar1 + 0x738);
  *(undefined4 *)(param_1 + 0x73c) = *(undefined4 *)(iVar1 + 0x73c);
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(iVar1 + 0x740);
  *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(iVar1 + 0x744);
  *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(iVar1 + 0x748);
  *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(iVar1 + 0x74c);
  *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(iVar1 + 0x750);
  *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(iVar1 + 0x754);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(iVar1 + 0x758);
  *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)(iVar1 + 0x75c);
  *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(iVar1 + 0x760);
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(iVar1 + 0x764);
  *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(iVar1 + 0x768);
  *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(iVar1 + 0x76c);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(iVar1 + 0x770);
  *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(iVar1 + 0x774);
  *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(iVar1 + 0x778);
  *(undefined4 *)(param_1 + 0x77c) = *(undefined4 *)(iVar1 + 0x77c);
  *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(iVar1 + 0x780);
  *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(iVar1 + 0x784);
  *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(iVar1 + 0x788);
  *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(iVar1 + 0x78c);
  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(iVar1 + 0x790);
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(iVar1 + 0x794);
  *(undefined4 *)(param_1 + 0x798) = *(undefined4 *)(iVar1 + 0x798);
  *(undefined4 *)(param_1 + 0x79c) = *(undefined4 *)(iVar1 + 0x79c);
  *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(iVar1 + 0x7a0);
  *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(iVar1 + 0x7a4);
  *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(iVar1 + 0x7a8);
  *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(iVar1 + 0x7ac);
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(iVar1 + 0x7b0);
  *(undefined4 *)(param_1 + 0x7b4) = *(undefined4 *)(iVar1 + 0x7b4);
  *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(iVar1 + 0x7b8);
  puVar2 = (undefined4 *)(iVar1 + 0x7bc);
  puVar5 = (undefined4 *)(param_1 + 0x7bc);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x7ec);
  puVar5 = (undefined4 *)(param_1 + 0x7ec);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x81c);
  puVar5 = (undefined4 *)(param_1 + 0x81c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x84c);
  puVar5 = (undefined4 *)(param_1 + 0x84c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x87c);
  puVar5 = (undefined4 *)(param_1 + 0x87c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x8ac);
  puVar5 = (undefined4 *)(param_1 + 0x8ac);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x8dc) = *(undefined4 *)(iVar1 + 0x8dc);
  return;
}


// ==== 103a3960 FUN_103a3960 depth=0 from=raiz callees=CORE.DLL::UObject::operator=@EXTERNAL:0000009f thunk_FUN_10392c40@10302a09 thunk_FUN_10386170@10304ea8 thunk_FUN_10386640@103034c2 thunk_FUN_103862b0@10306ab9 thunk_FUN_10386060@10304bdd CORE.DLL::FStringNoInit::operator=@EXTERNAL:000000b2 thunk_FUN_103863c0@10307ed2 thunk_FUN_10386500@10303779 thunk_FUN_103795a0@10311bee thunk_FUN_10385f50@10314f97 thunk_FUN_10379900@103146e1
// strings: 

UObject * __thiscall FUN_103a3960(UObject *param_1,UObject *param_2)

{
  uint uVar1;
  int iVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  
  UObject::operator=(param_1,param_2);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(uint *)(param_1 + 0x40) =
       *(uint *)(param_1 + 0x40) ^ (*(uint *)(param_1 + 0x40) ^ *(uint *)(param_2 + 0x40)) & 1;
  *(uint *)(param_1 + 0x40) =
       (*(uint *)(param_2 + 0x40) ^ *(uint *)(param_1 + 0x40)) & 2 ^ *(uint *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(uint *)(param_1 + 0x68) =
       *(uint *)(param_1 + 0x68) ^ (*(uint *)(param_2 + 0x68) ^ *(uint *)(param_1 + 0x68)) & 1;
  thunk_FUN_10392c40(param_2 + 0x6c);
  *(uint *)(param_1 + 0x78) =
       *(uint *)(param_1 + 0x78) ^ (*(uint *)(param_2 + 0x78) ^ *(uint *)(param_1 + 0x78)) & 1;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(uint *)(param_1 + 0xa4) =
       *(uint *)(param_1 + 0xa4) ^ (*(uint *)(param_1 + 0xa4) ^ *(uint *)(param_2 + 0xa4)) & 1;
  *(uint *)(param_1 + 0xa4) =
       (*(uint *)(param_2 + 0xa4) ^ *(uint *)(param_1 + 0xa4)) & 2 ^ *(uint *)(param_1 + 0xa4);
  thunk_FUN_10385f50(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(uint *)(param_1 + 0xec) =
       *(uint *)(param_1 + 0xec) ^ (*(uint *)(param_2 + 0xec) ^ *(uint *)(param_1 + 0xec)) & 1;
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(uint *)(param_1 + 0x104) =
       *(uint *)(param_1 + 0x104) ^ (*(uint *)(param_1 + 0x104) ^ *(uint *)(param_2 + 0x104)) & 1;
  *(uint *)(param_1 + 0x104) =
       (*(uint *)(param_2 + 0x104) ^ *(uint *)(param_1 + 0x104)) & 2 ^ *(uint *)(param_1 + 0x104);
  param_1[0x108] = param_2[0x108];
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *(uint *)(param_1 + 0x110) =
       *(uint *)(param_1 + 0x110) ^ (*(uint *)(param_2 + 0x110) ^ *(uint *)(param_1 + 0x110)) & 1;
  param_1[0x114] = param_2[0x114];
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  param_1[0x120] = param_2[0x120];
  *(uint *)(param_1 + 0x124) =
       *(uint *)(param_1 + 0x124) ^ (*(uint *)(param_2 + 0x124) ^ *(uint *)(param_1 + 0x124)) & 1;
  thunk_FUN_10386060(param_2 + 0x128);
  *(uint *)(param_1 + 0x134) =
       *(uint *)(param_1 + 0x134) ^ (*(uint *)(param_1 + 0x134) ^ *(uint *)(param_2 + 0x134)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ *(uint *)(param_1 + 0x134)) & 2 ^ *(uint *)(param_1 + 0x134)
  ;
  *(uint *)(param_1 + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x134) = uVar1;
  *(uint *)(param_1 + 0x134) = (*(uint *)(param_2 + 0x134) ^ uVar1) & 0x100 ^ uVar1;
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x140),(FStringNoInit *)(param_2 + 0x140));
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  param_1[0x174] = param_2[0x174];
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  param_1[0x1a4] = param_2[0x1a4];
  *(uint *)(param_1 + 0x1a8) =
       *(uint *)(param_1 + 0x1a8) ^ (*(uint *)(param_2 + 0x1a8) ^ *(uint *)(param_1 + 0x1a8)) & 1;
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(uint *)(param_1 + 0x1dc) =
       *(uint *)(param_1 + 0x1dc) ^ (*(uint *)(param_1 + 0x1dc) ^ *(uint *)(param_2 + 0x1dc)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x1dc) ^ *(uint *)(param_1 + 0x1dc)) & 2 ^ *(uint *)(param_1 + 0x1dc)
  ;
  *(uint *)(param_1 + 0x1dc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x1dc) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x1dc) = uVar1;
  *(uint *)(param_1 + 0x1dc) = (*(uint *)(param_2 + 0x1dc) ^ uVar1) & 8 ^ uVar1;
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
  *(uint *)(param_1 + 0x1f8) =
       *(uint *)(param_1 + 0x1f8) ^ (*(uint *)(param_1 + 0x1f8) ^ *(uint *)(param_2 + 0x1f8)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x1f8) ^ *(uint *)(param_1 + 0x1f8)) & 2 ^ *(uint *)(param_1 + 0x1f8)
  ;
  *(uint *)(param_1 + 0x1f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x1f8) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x1f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x1f8) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x1f8) = uVar1;
  *(uint *)(param_1 + 0x1f8) = (*(uint *)(param_2 + 0x1f8) ^ uVar1) & 0x10 ^ uVar1;
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 0x224);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  *(uint *)(param_1 + 0x22c) =
       *(uint *)(param_1 + 0x22c) ^ (*(uint *)(param_2 + 0x22c) ^ *(uint *)(param_1 + 0x22c)) & 1;
  thunk_FUN_10386170(param_2 + 0x230);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x23c);
  param_1[0x240] = param_2[0x240];
  *(uint *)(param_1 + 0x244) =
       *(uint *)(param_1 + 0x244) ^ (*(uint *)(param_2 + 0x244) ^ *(uint *)(param_1 + 0x244)) & 1;
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_2 + 0x24c);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_2 + 0x26c);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_2 + 0x28c);
  *(uint *)(param_1 + 0x290) =
       *(uint *)(param_1 + 0x290) ^ (*(uint *)(param_2 + 0x290) ^ *(uint *)(param_1 + 0x290)) & 1;
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_2 + 0x29c);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_2 + 0x2b4);
  *(uint *)(param_1 + 0x2b8) =
       *(uint *)(param_1 + 0x2b8) ^ (*(uint *)(param_1 + 0x2b8) ^ *(uint *)(param_2 + 0x2b8)) & 1;
  *(uint *)(param_1 + 0x2b8) =
       (*(uint *)(param_2 + 0x2b8) ^ *(uint *)(param_1 + 0x2b8)) & 2 ^ *(uint *)(param_1 + 0x2b8);
  thunk_FUN_103862b0(param_2 + 700);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x2cc);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
  *(uint *)(param_1 + 0x2e4) =
       *(uint *)(param_1 + 0x2e4) ^ (*(uint *)(param_2 + 0x2e4) ^ *(uint *)(param_1 + 0x2e4)) & 1;
  param_1[0x2e8] = param_2[0x2e8];
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0x2f4);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  thunk_FUN_103863c0(param_2 + 0x304);
  param_1[0x310] = param_2[0x310];
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_2 + 0x314);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x318);
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
  param_1[0x324] = param_2[0x324];
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_2 + 0x32c);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x330);
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_2 + 0x33c);
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) ^ (*(uint *)(param_2 + 0x340) ^ *(uint *)(param_1 + 0x340)) & 1;
  param_1[0x344] = param_2[0x344];
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x348);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x350);
  *(uint *)(param_1 + 0x354) =
       *(uint *)(param_1 + 0x354) ^ (*(uint *)(param_1 + 0x354) ^ *(uint *)(param_2 + 0x354)) & 1;
  *(uint *)(param_1 + 0x354) =
       (*(uint *)(param_2 + 0x354) ^ *(uint *)(param_1 + 0x354)) & 2 ^ *(uint *)(param_1 + 0x354);
  thunk_FUN_10379900(param_2 + 0x358);
  *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_2 + 0x364);
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x368);
  *(uint *)(param_1 + 0x36c) =
       *(uint *)(param_1 + 0x36c) ^ (*(uint *)(param_2 + 0x36c) ^ *(uint *)(param_1 + 0x36c)) & 1;
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x370);
  *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_2 + 0x374);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x378);
  *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_2 + 0x37c);
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x380);
  *(undefined4 *)(param_1 + 900) = *(undefined4 *)(param_2 + 900);
  *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_2 + 0x388);
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_2 + 0x38c);
  *(uint *)(param_1 + 0x390) =
       *(uint *)(param_1 + 0x390) ^ (*(uint *)(param_1 + 0x390) ^ *(uint *)(param_2 + 0x390)) & 1;
  *(uint *)(param_1 + 0x390) =
       (*(uint *)(param_2 + 0x390) ^ *(uint *)(param_1 + 0x390)) & 2 ^ *(uint *)(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_2 + 0x394);
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_2 + 0x398);
  *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(param_2 + 0x39c);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_2 + 0x3a4);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_2 + 0x3ac);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x3b0);
  *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_2 + 0x3b4);
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_2 + 0x3b8);
  *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_2 + 0x3bc);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x3c0);
  *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_2 + 0x3c4);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_2 + 0x3cc);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_2 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_2 + 0x3dc);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x3e0);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x3e4);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 1000);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_2 + 0x3ec);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_2 + 0x3f4);
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_2 + 0x3f8);
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_2 + 0x3fc);
  param_1[0x400] = param_2[0x400];
  *(uint *)(param_1 + 0x404) =
       *(uint *)(param_1 + 0x404) ^ (*(uint *)(param_2 + 0x404) ^ *(uint *)(param_1 + 0x404)) & 1;
  thunk_FUN_10386500(param_2 + 0x408);
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_2 + 0x418);
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_2 + 0x41c);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x420);
  *(uint *)(param_1 + 0x424) =
       *(uint *)(param_1 + 0x424) ^ (*(uint *)(param_1 + 0x424) ^ *(uint *)(param_2 + 0x424)) & 1;
  *(uint *)(param_1 + 0x424) =
       (*(uint *)(param_2 + 0x424) ^ *(uint *)(param_1 + 0x424)) & 2 ^ *(uint *)(param_1 + 0x424);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x428);
  thunk_FUN_10386640(param_2 + 0x42c);
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_2 + 0x438);
  *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x43c);
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x440);
  pUVar3 = param_2 + 0x444;
  pUVar4 = param_1 + 0x444;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x460);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  *(uint *)(param_1 + 0x46c) =
       *(uint *)(param_1 + 0x46c) ^ (*(uint *)(param_1 + 0x46c) ^ *(uint *)(param_2 + 0x46c)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x46c) ^ *(uint *)(param_1 + 0x46c)) & 2 ^ *(uint *)(param_1 + 0x46c)
  ;
  *(uint *)(param_1 + 0x46c) = uVar1;
  *(uint *)(param_1 + 0x46c) = (*(uint *)(param_2 + 0x46c) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x478);
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_2 + 0x47c);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 0x480);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_2 + 0x484);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_2 + 0x488);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_2 + 0x48c);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0x490);
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_2 + 0x494);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_2 + 0x49c);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_2 + 0x4a4);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x4a8);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_2 + 0x4ac);
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x4b0);
  thunk_FUN_103795a0(param_2 + 0x4b4);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x4c0);
  *(uint *)(param_1 + 0x4c4) =
       *(uint *)(param_1 + 0x4c4) ^ (*(uint *)(param_2 + 0x4c4) ^ *(uint *)(param_1 + 0x4c4)) & 1;
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_2 + 0x4c8);
  *(uint *)(param_1 + 0x4cc) =
       *(uint *)(param_1 + 0x4cc) ^ (*(uint *)(param_2 + 0x4cc) ^ *(uint *)(param_1 + 0x4cc)) & 1;
  return param_1;
}


// ==== 103a52f0 FUN_103a52f0 depth=0 from=raiz callees=UParticleEmitter::operator=@103076d5 thunk_FUN_103868c0@103028d8 thunk_FUN_10386780@1030a4de
// strings: 

UParticleEmitter * __thiscall FUN_103a52f0(UParticleEmitter *param_1,UParticleEmitter *param_2)

{
  UParticleEmitter::operator=(param_1,param_2);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_2 + 0x4d4);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x4d8);
  *(uint *)(param_1 + 0x4dc) =
       *(uint *)(param_1 + 0x4dc) ^ (*(uint *)(param_2 + 0x4dc) ^ *(uint *)(param_1 + 0x4dc)) & 1;
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  thunk_FUN_10386780(param_2 + 0x4e4);
  thunk_FUN_103868c0(param_2 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_2 + 0x50c);
  return param_1;
}


// ==== 103a55f0 FUN_103a55f0 depth=0 from=raiz callees=UParticleEmitter::operator=@103076d5 thunk_FUN_10386a10@10305641
// strings: 

UParticleEmitter * __thiscall FUN_103a55f0(UParticleEmitter *param_1,UParticleEmitter *param_2)

{
  UParticleEmitter::operator=(param_1,param_2);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_2 + 0x4d4);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x4d8);
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_2 + 0x4dc);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  thunk_FUN_10386a10(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  return param_1;
}


// ==== 103a5c80 FUN_103a5c80 depth=0 from=raiz callees=thunk_FUN_10386c70@10305137 thunk_FUN_10386da0@10308cce thunk_FUN_1032bfc0@1030d229 UParticleEmitter::operator=@103076d5 thunk_FUN_10386ee0@10309f39 thunk_FUN_103795a0@10311bee
// strings: 

UParticleEmitter * __thiscall FUN_103a5c80(UParticleEmitter *param_1,UParticleEmitter *param_2)

{
  uint uVar1;
  
  UParticleEmitter::operator=(param_1,param_2);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_2 + 0x4d4);
  thunk_FUN_10386c70(param_2 + 0x4d8);
  param_1[0x4e4] = param_2[0x4e4];
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
  *(uint *)(param_1 + 0x4f4) =
       *(uint *)(param_1 + 0x4f4) ^ (*(uint *)(param_2 + 0x4f4) ^ *(uint *)(param_1 + 0x4f4)) & 1;
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_2 + 0x50c);
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_2 + 0x510);
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x514);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_2 + 0x518);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_2 + 0x51c);
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_2 + 0x520);
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_2 + 0x524);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_2 + 0x528);
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_2 + 0x52c);
  thunk_FUN_10386da0(param_2 + 0x530);
  thunk_FUN_10386da0(param_2 + 0x53c);
  *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_2 + 0x548);
  *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_2 + 0x54c);
  *(uint *)(param_1 + 0x550) =
       *(uint *)(param_1 + 0x550) ^ (*(uint *)(param_1 + 0x550) ^ *(uint *)(param_2 + 0x550)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x550) ^ *(uint *)(param_1 + 0x550)) & 2 ^ *(uint *)(param_1 + 0x550)
  ;
  *(uint *)(param_1 + 0x550) = uVar1;
  *(uint *)(param_1 + 0x550) = (*(uint *)(param_2 + 0x550) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_2 + 0x554);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_2 + 0x558);
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_2 + 0x55c);
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_2 + 0x560);
  *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(param_2 + 0x564);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_2 + 0x568);
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_2 + 0x56c);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_2 + 0x570);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_2 + 0x574);
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_2 + 0x578);
  *(uint *)(param_1 + 0x57c) =
       *(uint *)(param_1 + 0x57c) ^ (*(uint *)(param_2 + 0x57c) ^ *(uint *)(param_1 + 0x57c)) & 1;
  *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_2 + 0x580);
  *(undefined4 *)(param_1 + 0x584) = *(undefined4 *)(param_2 + 0x584);
  *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_2 + 0x588);
  *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_2 + 0x58c);
  *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_2 + 0x590);
  *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_2 + 0x594);
  *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_2 + 0x598);
  *(uint *)(param_1 + 0x59c) =
       *(uint *)(param_1 + 0x59c) ^ (*(uint *)(param_2 + 0x59c) ^ *(uint *)(param_1 + 0x59c)) & 1;
  *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(param_2 + 0x5a0);
  *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(param_2 + 0x5a4);
  *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_2 + 0x5a8);
  *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(param_2 + 0x5ac);
  *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_2 + 0x5b0);
  thunk_FUN_10386ee0(param_2 + 0x5b4);
  thunk_FUN_103795a0(param_2 + 0x5c0);
  thunk_FUN_1032bfc0(param_2 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(param_2 + 0x5d8);
  return param_1;
}


// ==== 103b60f0 FUN_103b60f0 depth=0 from=raiz callees=thunk_FUN_1037bb60@10310e56 CORE.DLL::UObject::UObject@EXTERNAL:0000009d thunk_FUN_10379bd0@1030c56d thunk_FUN_1037b9f0@1030ba19 thunk_FUN_1032bc20@10312940 thunk_FUN_1032bef0@103083c3 thunk_FUN_1037bab0@10306569 thunk_FUN_1037bc10@1031517c
// strings: 

UObject * __thiscall FUN_103b60f0(UObject *param_1,UObject *param_2)

{
  uint uVar1;
  int iVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10802630;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = AActor::vftable;
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  param_1[0x50] = param_2[0x50];
  *(uint *)(param_1 + 0x54) =
       *(uint *)(param_1 + 0x54) ^ (*(uint *)(param_2 + 0x54) ^ *(uint *)(param_1 + 0x54)) & 1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(uint *)(param_1 + 0x5c) =
       *(uint *)(param_1 + 0x5c) ^ (*(uint *)(param_1 + 0x5c) ^ *(uint *)(param_2 + 0x5c)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ *(uint *)(param_1 + 0x5c)) & 2 ^ *(uint *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  *(uint *)(param_1 + 0x5c) = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x800 ^ uVar1;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(uint *)(param_1 + 100) =
       *(uint *)(param_1 + 100) ^ (*(uint *)(param_1 + 100) ^ *(uint *)(param_2 + 100)) & 1;
  uVar1 = (*(uint *)(param_2 + 100) ^ *(uint *)(param_1 + 100)) & 2 ^ *(uint *)(param_1 + 100);
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  *(uint *)(param_1 + 100) = (*(uint *)(param_2 + 100) ^ uVar1) & 0x100000 ^ uVar1;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(uint *)(param_1 + 0x74) =
       *(uint *)(param_1 + 0x74) ^ (*(uint *)(param_1 + 0x74) ^ *(uint *)(param_2 + 0x74)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ *(uint *)(param_1 + 0x74)) & 2 ^ *(uint *)(param_1 + 0x74);
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x100000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x200000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  *(uint *)(param_1 + 0x74) = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x400000 ^ uVar1;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(uint *)(param_1 + 0x88) =
       *(uint *)(param_1 + 0x88) ^ (*(uint *)(param_1 + 0x88) ^ *(uint *)(param_2 + 0x88)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x88) ^ *(uint *)(param_1 + 0x88)) & 2 ^ *(uint *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x88) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x88) = uVar1;
  *(uint *)(param_1 + 0x88) = (*(uint *)(param_2 + 0x88) ^ uVar1) & 8 ^ uVar1;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(uint *)(param_1 + 0x98) =
       *(uint *)(param_1 + 0x98) ^ (*(uint *)(param_1 + 0x98) ^ *(uint *)(param_2 + 0x98)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x98) ^ *(uint *)(param_1 + 0x98)) & 2 ^ *(uint *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x98) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x98) = uVar1;
  *(uint *)(param_1 + 0x98) = (*(uint *)(param_2 + 0x98) ^ uVar1) & 8 ^ uVar1;
  param_1[0x9c] = param_2[0x9c];
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  param_1[0xa8] = param_2[0xa8];
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  param_1[0xc0] = param_2[0xc0];
  param_1[0xc1] = param_2[0xc1];
  param_1[0xc2] = param_2[0xc2];
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  param_1[0xdc] = param_2[0xdc];
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  thunk_FUN_1032bc20(param_2 + 0x110);
  local_4._0_1_ = 2;
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  thunk_FUN_1037b9f0(param_2 + 0x120);
  local_4._0_1_ = 4;
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(uint *)(param_1 + 0x13c) =
       *(uint *)(param_1 + 0x13c) ^ (*(uint *)(param_2 + 0x13c) ^ *(uint *)(param_1 + 0x13c)) & 1;
  param_1[0x140] = param_2[0x140];
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  thunk_FUN_1032bef0(param_2 + 0x150);
  local_4._0_1_ = 6;
  thunk_FUN_1032bef0(param_2 + 0x15c);
  local_4._0_1_ = 8;
  thunk_FUN_1032bc20(param_2 + 0x168);
  local_4._0_1_ = 10;
  pUVar3 = param_2 + 0x174;
  pUVar4 = param_1 + 0x174;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  thunk_FUN_1032bef0(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(uint *)(param_1 + 0x214) =
       *(uint *)(param_1 + 0x214) ^ (*(uint *)(param_2 + 0x214) ^ *(uint *)(param_1 + 0x214)) & 1;
  pUVar3 = param_2 + 0x218;
  pUVar4 = param_1 + 0x218;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  local_4._0_1_ = 0xd;
  thunk_FUN_1037bab0(param_2 + 600);
  local_4._0_1_ = 0xf;
  thunk_FUN_10379bd0(param_2 + 0x264);
  local_4._0_1_ = 0x11;
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_2 + 0x28c);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0x294);
  thunk_FUN_1037bb60(param_2 + 0x298);
  local_4._0_1_ = 0x13;
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  param_1[0x2b4] = param_2[0x2b4];
  param_1[0x2b5] = param_2[0x2b5];
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_2 + 700);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x2cc);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
  *(uint *)(param_1 + 0x2dc) =
       *(uint *)(param_1 + 0x2dc) ^ (*(uint *)(param_2 + 0x2dc) ^ *(uint *)(param_1 + 0x2dc)) & 1;
  param_1[0x2e0] = param_2[0x2e0];
  *(uint *)(param_1 + 0x2e4) =
       *(uint *)(param_1 + 0x2e4) ^ (*(uint *)(param_1 + 0x2e4) ^ *(uint *)(param_2 + 0x2e4)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ *(uint *)(param_1 + 0x2e4)) & 2 ^ *(uint *)(param_1 + 0x2e4)
  ;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  *(uint *)(param_1 + 0x2e4) = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x100000 ^ uVar1;
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0x2f4);
  *(uint *)(param_1 + 0x2f8) =
       *(uint *)(param_1 + 0x2f8) ^ (*(uint *)(param_1 + 0x2f8) ^ *(uint *)(param_2 + 0x2f8)) & 1;
  *(uint *)(param_1 + 0x2f8) =
       *(uint *)(param_1 + 0x2f8) ^ (*(uint *)(param_1 + 0x2f8) ^ *(uint *)(param_2 + 0x2f8)) & 2;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ *(uint *)(param_1 + 0x2f8)) & 4 ^ *(uint *)(param_1 + 0x2f8)
  ;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  *(uint *)(param_1 + 0x2f8) = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x10000 ^ uVar1;
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_2 + 0x30c);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x310);
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_2 + 0x314);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x318);
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_2 + 0x324);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_2 + 0x32c);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x330);
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_2 + 0x33c);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_2 + 0x344);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x348);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x350);
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_2 + 0x354);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_2 + 0x358);
  param_1[0x35c] = param_2[0x35c];
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x360);
  *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_2 + 0x364);
  *(uint *)(param_1 + 0x368) =
       *(uint *)(param_1 + 0x368) ^ (*(uint *)(param_1 + 0x368) ^ *(uint *)(param_2 + 0x368)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ *(uint *)(param_1 + 0x368)) & 2 ^ *(uint *)(param_1 + 0x368)
  ;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  *(uint *)(param_1 + 0x368) = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x80000 ^ uVar1;
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_2 + 0x36c);
  thunk_FUN_1037bc10(param_2 + 0x370);
  local_4._0_1_ = 0x15;
  thunk_FUN_1032bef0(param_2 + 0x37c);
  local_4 = CONCAT31(local_4._1_3_,0x17);
  thunk_FUN_1032bef0(param_2 + 0x388);
  param_1[0x394] = param_2[0x394];
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_2 + 0x398);
  param_1[0x39c] = param_2[0x39c];
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_2 + 0x3a4);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_2 + 0x3ac);
  param_1[0x3b0] = param_2[0x3b0];
  *(uint *)(param_1 + 0x3b4) =
       *(uint *)(param_1 + 0x3b4) ^ (*(uint *)(param_2 + 0x3b4) ^ *(uint *)(param_1 + 0x3b4)) & 1;
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_2 + 0x3b8);
  ExceptionList = local_c;
  return param_1;
}


// ==== 103b7750 FUN_103b7750 depth=0 from=raiz callees=thunk_FUN_103932e0@10314a2e thunk_FUN_10393250@1030efbb thunk_FUN_10383ed0@10302cd9 thunk_FUN_1032bfc0@1030d229 thunk_FUN_10383e20@1030162c CORE.DLL::UObject::operator=@EXTERNAL:0000009f thunk_FUN_1032bcd0@1030e322 thunk_FUN_10390350@10305042
// strings: 

UObject * __thiscall FUN_103b7750(UObject *param_1,UObject *param_2)

{
  uint uVar1;
  int iVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  
  UObject::operator=(param_1,param_2);
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  param_1[0x50] = param_2[0x50];
  *(uint *)(param_1 + 0x54) =
       *(uint *)(param_1 + 0x54) ^ (*(uint *)(param_2 + 0x54) ^ *(uint *)(param_1 + 0x54)) & 1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(uint *)(param_1 + 0x5c) =
       *(uint *)(param_1 + 0x5c) ^ (*(uint *)(param_1 + 0x5c) ^ *(uint *)(param_2 + 0x5c)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ *(uint *)(param_1 + 0x5c)) & 2 ^ *(uint *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x5c) = uVar1;
  *(uint *)(param_1 + 0x5c) = (*(uint *)(param_2 + 0x5c) ^ uVar1) & 0x800 ^ uVar1;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(uint *)(param_1 + 100) =
       *(uint *)(param_1 + 100) ^ (*(uint *)(param_1 + 100) ^ *(uint *)(param_2 + 100)) & 1;
  uVar1 = (*(uint *)(param_2 + 100) ^ *(uint *)(param_1 + 100)) & 2 ^ *(uint *)(param_1 + 100);
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  uVar1 = (*(uint *)(param_2 + 100) ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  *(uint *)(param_1 + 100) = (*(uint *)(param_2 + 100) ^ uVar1) & 0x100000 ^ uVar1;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(uint *)(param_1 + 0x74) =
       *(uint *)(param_1 + 0x74) ^ (*(uint *)(param_1 + 0x74) ^ *(uint *)(param_2 + 0x74)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ *(uint *)(param_1 + 0x74)) & 2 ^ *(uint *)(param_1 + 0x74);
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x100000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x200000 ^ uVar1;
  *(uint *)(param_1 + 0x74) = uVar1;
  *(uint *)(param_1 + 0x74) = (*(uint *)(param_2 + 0x74) ^ uVar1) & 0x400000 ^ uVar1;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(uint *)(param_1 + 0x88) =
       *(uint *)(param_1 + 0x88) ^ (*(uint *)(param_1 + 0x88) ^ *(uint *)(param_2 + 0x88)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x88) ^ *(uint *)(param_1 + 0x88)) & 2 ^ *(uint *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x88) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x88) = uVar1;
  *(uint *)(param_1 + 0x88) = (*(uint *)(param_2 + 0x88) ^ uVar1) & 8 ^ uVar1;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(uint *)(param_1 + 0x98) =
       *(uint *)(param_1 + 0x98) ^ (*(uint *)(param_1 + 0x98) ^ *(uint *)(param_2 + 0x98)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x98) ^ *(uint *)(param_1 + 0x98)) & 2 ^ *(uint *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x98) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x98) = uVar1;
  *(uint *)(param_1 + 0x98) = (*(uint *)(param_2 + 0x98) ^ uVar1) & 8 ^ uVar1;
  param_1[0x9c] = param_2[0x9c];
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  param_1[0xa8] = param_2[0xa8];
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  param_1[0xc0] = param_2[0xc0];
  param_1[0xc1] = param_2[0xc1];
  param_1[0xc2] = param_2[0xc2];
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  param_1[0xdc] = param_2[0xdc];
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  thunk_FUN_1032bcd0(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  thunk_FUN_10383e20(param_2 + 0x120);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(uint *)(param_1 + 0x13c) =
       *(uint *)(param_1 + 0x13c) ^ (*(uint *)(param_2 + 0x13c) ^ *(uint *)(param_1 + 0x13c)) & 1;
  param_1[0x140] = param_2[0x140];
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  thunk_FUN_1032bfc0(param_2 + 0x150);
  thunk_FUN_1032bfc0(param_2 + 0x15c);
  thunk_FUN_1032bcd0(param_2 + 0x168);
  pUVar3 = param_2 + 0x174;
  pUVar4 = param_1 + 0x174;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  thunk_FUN_1032bfc0(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(uint *)(param_1 + 0x214) =
       *(uint *)(param_1 + 0x214) ^ (*(uint *)(param_2 + 0x214) ^ *(uint *)(param_1 + 0x214)) & 1;
  pUVar3 = param_2 + 0x218;
  pUVar4 = param_1 + 0x218;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  thunk_FUN_10393250(param_2 + 600);
  thunk_FUN_10390350(param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_2 + 0x28c);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0x294);
  thunk_FUN_103932e0(param_2 + 0x298);
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  param_1[0x2b4] = param_2[0x2b4];
  param_1[0x2b5] = param_2[0x2b5];
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_2 + 700);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x2cc);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
  *(uint *)(param_1 + 0x2dc) =
       *(uint *)(param_1 + 0x2dc) ^ (*(uint *)(param_2 + 0x2dc) ^ *(uint *)(param_1 + 0x2dc)) & 1;
  param_1[0x2e0] = param_2[0x2e0];
  *(uint *)(param_1 + 0x2e4) =
       *(uint *)(param_1 + 0x2e4) ^ (*(uint *)(param_1 + 0x2e4) ^ *(uint *)(param_2 + 0x2e4)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ *(uint *)(param_1 + 0x2e4)) & 2 ^ *(uint *)(param_1 + 0x2e4)
  ;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(param_1 + 0x2e4) = uVar1;
  *(uint *)(param_1 + 0x2e4) = (*(uint *)(param_2 + 0x2e4) ^ uVar1) & 0x100000 ^ uVar1;
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0x2f4);
  *(uint *)(param_1 + 0x2f8) =
       *(uint *)(param_1 + 0x2f8) ^ (*(uint *)(param_1 + 0x2f8) ^ *(uint *)(param_2 + 0x2f8)) & 1;
  *(uint *)(param_1 + 0x2f8) =
       *(uint *)(param_1 + 0x2f8) ^ (*(uint *)(param_1 + 0x2f8) ^ *(uint *)(param_2 + 0x2f8)) & 2;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ *(uint *)(param_1 + 0x2f8)) & 4 ^ *(uint *)(param_1 + 0x2f8)
  ;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x2f8) = uVar1;
  *(uint *)(param_1 + 0x2f8) = (*(uint *)(param_2 + 0x2f8) ^ uVar1) & 0x10000 ^ uVar1;
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_2 + 0x30c);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x310);
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_2 + 0x314);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x318);
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_2 + 0x324);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_2 + 0x32c);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x330);
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_2 + 0x33c);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_2 + 0x344);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x348);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x350);
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_2 + 0x354);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_2 + 0x358);
  param_1[0x35c] = param_2[0x35c];
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x360);
  *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_2 + 0x364);
  *(uint *)(param_1 + 0x368) =
       *(uint *)(param_1 + 0x368) ^ (*(uint *)(param_1 + 0x368) ^ *(uint *)(param_2 + 0x368)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ *(uint *)(param_1 + 0x368)) & 2 ^ *(uint *)(param_1 + 0x368)
  ;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 0x368) = uVar1;
  *(uint *)(param_1 + 0x368) = (*(uint *)(param_2 + 0x368) ^ uVar1) & 0x80000 ^ uVar1;
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_2 + 0x36c);
  thunk_FUN_10383ed0(param_2 + 0x370);
  thunk_FUN_1032bfc0(param_2 + 0x37c);
  thunk_FUN_1032bfc0(param_2 + 0x388);
  param_1[0x394] = param_2[0x394];
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_2 + 0x398);
  param_1[0x39c] = param_2[0x39c];
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_2 + 0x3a4);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_2 + 0x3ac);
  param_1[0x3b0] = param_2[0x3b0];
  *(uint *)(param_1 + 0x3b4) =
       *(uint *)(param_1 + 0x3b4) ^ (*(uint *)(param_2 + 0x3b4) ^ *(uint *)(param_1 + 0x3b4)) & 1;
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_2 + 0x3b8);
  return param_1;
}


// ==== 103bf2c0 FUN_103bf2c0 depth=0 from=raiz callees=AZoneInfo::AZoneInfo@1030e615 CORE.DLL::FStringNoInit::FStringNoInit@EXTERNAL:000000b1 `eh_vector_copy_constructor_iterator'@107a6770
// strings: 

AZoneInfo * __thiscall FUN_103bf2c0(AZoneInfo *param_1,AZoneInfo *param_2)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  AZoneInfo *pAVar4;
  AZoneInfo *pAVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10803cf7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AZoneInfo::AZoneInfo(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = AWarpZoneInfo::vftable;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x4b8),(FStringNoInit *)(param_2 + 0x4b8));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_2 + 0x4c4);
  *(uint *)(param_1 + 0x4c8) =
       *(uint *)(param_1 + 0x4c8) ^ (*(uint *)(param_2 + 0x4c8) ^ *(uint *)(param_1 + 0x4c8)) & 1;
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_2 + 0x4cc);
  pcVar1 = ~FStringNoInit_exref;
  pAVar4 = param_2 + 0x4d0;
  pAVar5 = param_1 + 0x4d0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pAVar5 = *(undefined4 *)pAVar4;
    pAVar4 = pAVar4 + 4;
    pAVar5 = pAVar5 + 4;
  }
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  pcVar2 = FStringNoInit_exref;
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  _eh_vector_copy_constructor_iterator_(param_1 + 0x508,param_2 + 0x508,0xc,8,pcVar2,pcVar1);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_2 + 0x568);
  ExceptionList = local_c;
  return param_1;
}


// ==== 103bf400 FUN_103bf400 depth=0 from=raiz callees=CORE.DLL::FStringNoInit::operator=@EXTERNAL:000000b2 AZoneInfo::operator=@10304a0c
// strings: 

AZoneInfo * __thiscall FUN_103bf400(AZoneInfo *param_1,AZoneInfo *param_2)

{
  AZoneInfo *pAVar1;
  int iVar2;
  AZoneInfo *pAVar3;
  AZoneInfo *pAVar4;
  
  pAVar1 = param_2;
  AZoneInfo::operator=(param_1,param_2);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x4b8),(FStringNoInit *)(param_2 + 0x4b8));
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_2 + 0x4c4);
  *(uint *)(param_1 + 0x4c8) =
       *(uint *)(param_1 + 0x4c8) ^ (*(uint *)(param_2 + 0x4c8) ^ *(uint *)(param_1 + 0x4c8)) & 1;
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_2 + 0x4cc);
  pAVar3 = param_2 + 0x4d0;
  pAVar4 = param_1 + 0x4d0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  pAVar3 = param_1 + 0x508;
  iVar2 = (int)param_2 - (int)param_1;
  param_2 = (AZoneInfo *)0x8;
  do {
    FStringNoInit::operator=((FStringNoInit *)pAVar3,(FStringNoInit *)(pAVar3 + iVar2));
    pAVar3 = pAVar3 + 0xc;
    param_2 = (AZoneInfo *)((int)param_2 + -1);
  } while (param_2 != (AZoneInfo *)0x0);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(pAVar1 + 0x568);
  return param_1;
}


// ==== 103c0df0 FUN_103c0df0 depth=0 from=raiz callees=AInfo::AInfo@10301861 CORE.DLL::FStringNoInit::FStringNoInit@EXTERNAL:000000b1 `eh_vector_copy_constructor_iterator'@107a6770 thunk_FUN_1037c4e0@10312c74
// strings: 

AInfo * __thiscall FUN_103c0df0(AInfo *param_1,AInfo *param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108046e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AInfo::AInfo(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = AGameInfo::vftable;
  *(uint *)(param_1 + 0x3bc) =
       *(uint *)(param_1 + 0x3bc) ^ (*(uint *)(param_1 + 0x3bc) ^ *(uint *)(param_2 + 0x3bc)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ *(uint *)(param_1 + 0x3bc)) & 2 ^ *(uint *)(param_1 + 0x3bc)
  ;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  *(uint *)(param_1 + 0x3bc) = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x8000 ^ uVar1;
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x3c0);
  *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_2 + 0x3c4);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_2 + 0x3cc);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x3d0);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x3d4),(FStringNoInit *)(param_2 + 0x3d4));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x3e0),(FStringNoInit *)(param_2 + 0x3e0));
  local_4._0_1_ = 2;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x3ec),(FStringNoInit *)(param_2 + 0x3ec));
  local_4._0_1_ = 3;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x3f8),(FStringNoInit *)(param_2 + 0x3f8));
  local_4._0_1_ = 4;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x404),(FStringNoInit *)(param_2 + 0x404));
  local_4._0_1_ = 5;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x410),(FStringNoInit *)(param_2 + 0x410));
  local_4._0_1_ = 6;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x41c),(FStringNoInit *)(param_2 + 0x41c));
  local_4._0_1_ = 7;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x428),(FStringNoInit *)(param_2 + 0x428));
  local_4._0_1_ = 8;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x434),(FStringNoInit *)(param_2 + 0x434));
  local_4._0_1_ = 9;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x440),(FStringNoInit *)(param_2 + 0x440));
  local_4._0_1_ = 10;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x44c),(FStringNoInit *)(param_2 + 0x44c));
  local_4._0_1_ = 0xb;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x458),(FStringNoInit *)(param_2 + 0x458));
  local_4._0_1_ = 0xc;
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_2 + 0x46c);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x478);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x47c),(FStringNoInit *)(param_2 + 0x47c));
  local_4._0_1_ = 0xd;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x488),(FStringNoInit *)(param_2 + 0x488));
  local_4._0_1_ = 0xe;
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_2 + 0x494);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_2 + 0x49c);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_2 + 0x4a4);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x4a8);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_2 + 0x4ac);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x4b0),(FStringNoInit *)(param_2 + 0x4b0));
  local_4._0_1_ = 0xf;
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_2 + 0x4bc);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x4c0),(FStringNoInit *)(param_2 + 0x4c0));
  local_4._0_1_ = 0x10;
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_2 + 0x4cc);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x4d4),(FStringNoInit *)(param_2 + 0x4d4));
  local_4._0_1_ = 0x11;
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x4e8),(FStringNoInit *)(param_2 + 0x4e8));
  local_4._0_1_ = 0x12;
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(uint *)(param_1 + 0x4fc) =
       *(uint *)(param_1 + 0x4fc) ^ (*(uint *)(param_2 + 0x4fc) ^ *(uint *)(param_1 + 0x4fc)) & 1;
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  thunk_FUN_1037c4e0(param_2 + 0x508);
  local_4._0_1_ = 0x14;
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x514);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x518),(FStringNoInit *)(param_2 + 0x518));
  local_4._0_1_ = 0x15;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x524),(FStringNoInit *)(param_2 + 0x524));
  local_4._0_1_ = 0x16;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x530),(FStringNoInit *)(param_2 + 0x530));
  local_4 = CONCAT31(local_4._1_3_,0x17);
  _eh_vector_copy_constructor_iterator_
            (param_1 + 0x53c,param_2 + 0x53c,0xc,0xb,FStringNoInit_exref,~FStringNoInit_exref);
  _eh_vector_copy_constructor_iterator_
            (param_1 + 0x5c0,param_2 + 0x5c0,0xc,2,FStringNoInit_exref,~FStringNoInit_exref);
  ExceptionList = local_c;
  return param_1;
}


// ==== 103c14b0 FUN_103c14b0 depth=0 from=raiz callees=AActor::operator=@10315177 CORE.DLL::FStringNoInit::operator=@EXTERNAL:000000b2 thunk_FUN_10384a90@1030f150
// strings: 

AActor * __thiscall FUN_103c14b0(AActor *param_1,AActor *param_2)

{
  uint uVar1;
  AActor *pAVar2;
  int iVar3;
  
  AActor::operator=(param_1,param_2);
  *(uint *)(param_1 + 0x3bc) =
       *(uint *)(param_1 + 0x3bc) ^ (*(uint *)(param_1 + 0x3bc) ^ *(uint *)(param_2 + 0x3bc)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ *(uint *)(param_1 + 0x3bc)) & 2 ^ *(uint *)(param_1 + 0x3bc)
  ;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x3bc) = uVar1;
  *(uint *)(param_1 + 0x3bc) = (*(uint *)(param_2 + 0x3bc) ^ uVar1) & 0x8000 ^ uVar1;
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x3c0);
  *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_2 + 0x3c4);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_2 + 0x3cc);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x3d0);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x3d4),(FStringNoInit *)(param_2 + 0x3d4));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x3e0),(FStringNoInit *)(param_2 + 0x3e0));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x3ec),(FStringNoInit *)(param_2 + 0x3ec));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x3f8),(FStringNoInit *)(param_2 + 0x3f8));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x404),(FStringNoInit *)(param_2 + 0x404));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x410),(FStringNoInit *)(param_2 + 0x410));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x41c),(FStringNoInit *)(param_2 + 0x41c));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x428),(FStringNoInit *)(param_2 + 0x428));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x434),(FStringNoInit *)(param_2 + 0x434));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x440),(FStringNoInit *)(param_2 + 0x440));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x44c),(FStringNoInit *)(param_2 + 0x44c));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x458),(FStringNoInit *)(param_2 + 0x458));
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_2 + 0x46c);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x478);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x47c),(FStringNoInit *)(param_2 + 0x47c));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x488),(FStringNoInit *)(param_2 + 0x488));
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_2 + 0x494);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_2 + 0x49c);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_2 + 0x4a4);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x4a8);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_2 + 0x4ac);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x4b0),(FStringNoInit *)(param_2 + 0x4b0));
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_2 + 0x4bc);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x4c0),(FStringNoInit *)(param_2 + 0x4c0));
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_2 + 0x4cc);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x4d4),(FStringNoInit *)(param_2 + 0x4d4));
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x4e8),(FStringNoInit *)(param_2 + 0x4e8));
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(uint *)(param_1 + 0x4fc) =
       *(uint *)(param_1 + 0x4fc) ^ (*(uint *)(param_2 + 0x4fc) ^ *(uint *)(param_1 + 0x4fc)) & 1;
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  thunk_FUN_10384a90(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x514);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x518),(FStringNoInit *)(param_2 + 0x518));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x524),(FStringNoInit *)(param_2 + 0x524));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x530),(FStringNoInit *)(param_2 + 0x530));
  pAVar2 = param_1 + 0x53c;
  iVar3 = 0xb;
  do {
    FStringNoInit::operator=
              ((FStringNoInit *)pAVar2,(FStringNoInit *)(pAVar2 + ((int)param_2 - (int)param_1)));
    pAVar2 = pAVar2 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pAVar2 = param_1 + 0x5c0;
  iVar3 = 2;
  do {
    FStringNoInit::operator=
              ((FStringNoInit *)pAVar2,(FStringNoInit *)(pAVar2 + ((int)param_2 - (int)param_1)));
    pAVar2 = pAVar2 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1;
}


// ==== 103c5f50 FUN_103c5f50 depth=0 from=raiz callees=FNPrimeActionParam::FNPrimeActionParam@1030f9cf thunk_FUN_1037ca70@103076fd thunk_FUN_10379b10@1030b6d1 FNMagicInfo::FNMagicInfo@10304a2a thunk_FUN_1037cbd0@10306226 thunk_FUN_1037c860@10309b29 thunk_FUN_1037c9c0@1030e90d thunk_FUN_1037c910@10309188 thunk_FUN_1037cc80@1030588f CORE.DLL::FStringNoInit::FStringNoInit@EXTERNAL:000000b1 thunk_FUN_1037c7b0@10303f08 thunk_FUN_1037cb20@10301a91 thunk_FUN_10379a40@1030d24c FWhenExtinctionCreate::FWhenExtinctionCreate@1030878d thunk_FUN_1032bc20@10312940 AActor::AActor@103123f0 thunk_FUN_1037cd30@1030ea2f
// strings: 

AActor * __thiscall FUN_103c5f50(AActor *param_1,AActor *param_2)

{
  uint uVar1;
  int iVar2;
  AActor *pAVar3;
  AActor *pAVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10805743;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AActor::AActor(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = APawn::vftable;
  pAVar3 = param_2 + 0x3bc;
  pAVar4 = param_1 + 0x3bc;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x3e0);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x3e4);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 1000);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_2 + 0x3ec);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_2 + 0x3f4);
  pAVar3 = param_2 + 0x3f8;
  pAVar4 = param_1 + 0x3f8;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_2 + 0x41c);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x420);
  *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(param_2 + 0x424);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x428);
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_2 + 0x42c);
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x430);
  *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_2 + 0x434);
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_2 + 0x438);
  *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x43c);
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x440);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_2 + 0x444);
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_2 + 0x448);
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_2 + 0x44c);
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x450);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_2 + 0x454);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_2 + 0x45c);
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x460);
  pAVar3 = param_2 + 0x464;
  pAVar4 = param_1 + 0x464;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_2 + 0x488);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_2 + 0x48c);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0x490);
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_2 + 0x494);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_2 + 0x49c);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_2 + 0x4a4);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x4a8),(FStringNoInit *)(param_2 + 0x4a8));
  local_4._0_1_ = 1;
  *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_2 + 0x4b4);
  thunk_FUN_10379a40(param_2 + 0x4b8);
  local_4._0_1_ = 3;
  FWhenExtinctionCreate::FWhenExtinctionCreate
            ((FWhenExtinctionCreate *)(param_1 + 0x4c4),(FWhenExtinctionCreate *)(param_2 + 0x4c4));
  local_4._0_1_ = 4;
  *(uint *)(param_1 + 0x4dc) =
       *(uint *)(param_1 + 0x4dc) ^ (*(uint *)(param_2 + 0x4dc) ^ *(uint *)(param_1 + 0x4dc)) & 1;
  thunk_FUN_10379b10(param_2 + 0x4e0);
  local_4._0_1_ = 6;
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  FNMagicInfo::FNMagicInfo((FNMagicInfo *)(param_1 + 0x4f0),(FNMagicInfo *)(param_2 + 0x4f0));
  local_4._0_1_ = 7;
  pAVar3 = param_2 + 0x5a8;
  pAVar4 = param_1 + 0x5a8;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x5cc;
  pAVar4 = param_1 + 0x5cc;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(param_2 + 0x5f0);
  *(undefined4 *)(param_1 + 0x5f4) = *(undefined4 *)(param_2 + 0x5f4);
  *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(param_2 + 0x5f8);
  *(undefined4 *)(param_1 + 0x5fc) = *(undefined4 *)(param_2 + 0x5fc);
  *(undefined4 *)(param_1 + 0x600) = *(undefined4 *)(param_2 + 0x600);
  *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)(param_2 + 0x604);
  *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_2 + 0x608);
  *(undefined4 *)(param_1 + 0x60c) = *(undefined4 *)(param_2 + 0x60c);
  *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_2 + 0x610);
  *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_2 + 0x614);
  *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_2 + 0x618);
  *(undefined4 *)(param_1 + 0x61c) = *(undefined4 *)(param_2 + 0x61c);
  *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_2 + 0x620);
  *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_2 + 0x624);
  *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(param_2 + 0x628);
  FNPrimeActionParam::FNPrimeActionParam
            ((FNPrimeActionParam *)(param_1 + 0x62c),(FNPrimeActionParam *)(param_2 + 0x62c));
  local_4._0_1_ = 8;
  thunk_FUN_1037c7b0(param_2 + 0x658);
  local_4._0_1_ = 10;
  *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(param_2 + 0x664);
  *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(param_2 + 0x668);
  thunk_FUN_1037c860(param_2 + 0x66c);
  local_4._0_1_ = 0xc;
  *(uint *)(param_1 + 0x678) =
       *(uint *)(param_1 + 0x678) ^ (*(uint *)(param_1 + 0x678) ^ *(uint *)(param_2 + 0x678)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x678) ^ *(uint *)(param_1 + 0x678)) & 2 ^ *(uint *)(param_1 + 0x678)
  ;
  *(uint *)(param_1 + 0x678) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x678) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x678) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x678) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x678) = uVar1;
  *(uint *)(param_1 + 0x678) = (*(uint *)(param_2 + 0x678) ^ uVar1) & 0x10 ^ uVar1;
  *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(param_2 + 0x67c);
  *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(param_2 + 0x680);
  *(undefined4 *)(param_1 + 0x684) = *(undefined4 *)(param_2 + 0x684);
  *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(param_2 + 0x688);
  *(undefined4 *)(param_1 + 0x68c) = *(undefined4 *)(param_2 + 0x68c);
  *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(param_2 + 0x690);
  *(uint *)(param_1 + 0x694) =
       *(uint *)(param_1 + 0x694) ^ (*(uint *)(param_1 + 0x694) ^ *(uint *)(param_2 + 0x694)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x694) ^ *(uint *)(param_1 + 0x694)) & 2 ^ *(uint *)(param_1 + 0x694)
  ;
  *(uint *)(param_1 + 0x694) = uVar1;
  *(uint *)(param_1 + 0x694) = (*(uint *)(param_2 + 0x694) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(param_2 + 0x698);
  *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(param_2 + 0x69c);
  *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_2 + 0x6a0);
  *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(param_2 + 0x6a4);
  *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_2 + 0x6a8);
  *(uint *)(param_1 + 0x6ac) =
       *(uint *)(param_1 + 0x6ac) ^ (*(uint *)(param_2 + 0x6ac) ^ *(uint *)(param_1 + 0x6ac)) & 1;
  *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_2 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(param_2 + 0x6b4);
  *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_2 + 0x6b8);
  *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(param_2 + 0x6bc);
  *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(param_2 + 0x6c0);
  *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(param_2 + 0x6c4);
  *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_2 + 0x6c8);
  *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(param_2 + 0x6cc);
  *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_2 + 0x6d0);
  *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_2 + 0x6d4);
  *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_2 + 0x6d8);
  *(uint *)(param_1 + 0x6dc) =
       *(uint *)(param_1 + 0x6dc) ^ (*(uint *)(param_1 + 0x6dc) ^ *(uint *)(param_2 + 0x6dc)) & 1;
  *(uint *)(param_1 + 0x6dc) =
       (*(uint *)(param_2 + 0x6dc) ^ *(uint *)(param_1 + 0x6dc)) & 2 ^ *(uint *)(param_1 + 0x6dc);
  *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_2 + 0x6e0);
  *(uint *)(param_1 + 0x6e4) =
       *(uint *)(param_1 + 0x6e4) ^ (*(uint *)(param_2 + 0x6e4) ^ *(uint *)(param_1 + 0x6e4)) & 1;
  *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(param_2 + 0x6e8);
  *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(param_2 + 0x6ec);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_2 + 0x6f0);
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_2 + 0x6f4);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_2 + 0x6f8);
  *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(param_2 + 0x6fc);
  *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_2 + 0x700);
  *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_2 + 0x704);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_2 + 0x708);
  *(uint *)(param_1 + 0x70c) =
       *(uint *)(param_1 + 0x70c) ^ (*(uint *)(param_2 + 0x70c) ^ *(uint *)(param_1 + 0x70c)) & 1;
  param_1[0x710] = param_2[0x710];
  *(uint *)(param_1 + 0x714) =
       *(uint *)(param_1 + 0x714) ^ (*(uint *)(param_2 + 0x714) ^ *(uint *)(param_1 + 0x714)) & 1;
  *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(param_2 + 0x718);
  param_1[0x71c] = param_2[0x71c];
  param_1[0x71d] = param_2[0x71d];
  *(uint *)(param_1 + 0x720) =
       *(uint *)(param_1 + 0x720) ^ (*(uint *)(param_1 + 0x720) ^ *(uint *)(param_2 + 0x720)) & 1;
  *(uint *)(param_1 + 0x720) =
       (*(uint *)(param_2 + 0x720) ^ *(uint *)(param_1 + 0x720)) & 2 ^ *(uint *)(param_1 + 0x720);
  param_1[0x724] = param_2[0x724];
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_2 + 0x728);
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(param_2 + 0x72c);
  *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(param_2 + 0x730);
  *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(param_2 + 0x734);
  *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(param_2 + 0x738);
  *(uint *)(param_1 + 0x73c) =
       *(uint *)(param_1 + 0x73c) ^ (*(uint *)(param_2 + 0x73c) ^ *(uint *)(param_1 + 0x73c)) & 1;
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_2 + 0x740);
  *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(param_2 + 0x744);
  *(uint *)(param_1 + 0x748) =
       *(uint *)(param_1 + 0x748) ^ (*(uint *)(param_1 + 0x748) ^ *(uint *)(param_2 + 0x748)) & 1;
  *(uint *)(param_1 + 0x748) =
       (*(uint *)(param_2 + 0x748) ^ *(uint *)(param_1 + 0x748)) & 2 ^ *(uint *)(param_1 + 0x748);
  *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(param_2 + 0x74c);
  *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_2 + 0x750);
  *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_2 + 0x754);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_2 + 0x758);
  *(uint *)(param_1 + 0x75c) =
       *(uint *)(param_1 + 0x75c) ^ (*(uint *)(param_2 + 0x75c) ^ *(uint *)(param_1 + 0x75c)) & 1;
  *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_2 + 0x760);
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_2 + 0x764);
  *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_2 + 0x768);
  *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_2 + 0x76c);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_2 + 0x770);
  *(uint *)(param_1 + 0x774) =
       *(uint *)(param_1 + 0x774) ^ (*(uint *)(param_1 + 0x774) ^ *(uint *)(param_2 + 0x774)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x774) ^ *(uint *)(param_1 + 0x774)) & 2 ^ *(uint *)(param_1 + 0x774)
  ;
  *(uint *)(param_1 + 0x774) = uVar1;
  *(uint *)(param_1 + 0x774) = (*(uint *)(param_2 + 0x774) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(param_2 + 0x778);
  *(uint *)(param_1 + 0x77c) =
       *(uint *)(param_1 + 0x77c) ^ (*(uint *)(param_1 + 0x77c) ^ *(uint *)(param_2 + 0x77c)) & 1;
  *(uint *)(param_1 + 0x77c) =
       (*(uint *)(param_2 + 0x77c) ^ *(uint *)(param_1 + 0x77c)) & 2 ^ *(uint *)(param_1 + 0x77c);
  *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_2 + 0x780);
  *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_2 + 0x784);
  *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(param_2 + 0x788);
  pAVar3 = param_2 + 0x78c;
  pAVar4 = param_1 + 0x78c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x7ac;
  pAVar4 = param_1 + 0x7ac;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x7cc;
  pAVar4 = param_1 + 0x7cc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x7ec;
  pAVar4 = param_1 + 0x7ec;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x80c;
  pAVar4 = param_1 + 0x80c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x82c;
  pAVar4 = param_1 + 0x82c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x84c;
  pAVar4 = param_1 + 0x84c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x86c;
  pAVar4 = param_1 + 0x86c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x88c;
  pAVar4 = param_1 + 0x88c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x8ac;
  pAVar4 = param_1 + 0x8ac;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x8cc;
  pAVar4 = param_1 + 0x8cc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x8ec;
  pAVar4 = param_1 + 0x8ec;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x90c;
  pAVar4 = param_1 + 0x90c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x92c;
  pAVar4 = param_1 + 0x92c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x94c;
  pAVar4 = param_1 + 0x94c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x96c;
  pAVar4 = param_1 + 0x96c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x98c;
  pAVar4 = param_1 + 0x98c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x9ac;
  pAVar4 = param_1 + 0x9ac;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x9cc;
  pAVar4 = param_1 + 0x9cc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x9ec;
  pAVar4 = param_1 + 0x9ec;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xa0c;
  pAVar4 = param_1 + 0xa0c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xa2c;
  pAVar4 = param_1 + 0xa2c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xa4c;
  pAVar4 = param_1 + 0xa4c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xa6c;
  pAVar4 = param_1 + 0xa6c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xa8c;
  pAVar4 = param_1 + 0xa8c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xaac;
  pAVar4 = param_1 + 0xaac;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xacc;
  pAVar4 = param_1 + 0xacc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xaec;
  pAVar4 = param_1 + 0xaec;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xb0c;
  pAVar4 = param_1 + 0xb0c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xb2c;
  pAVar4 = param_1 + 0xb2c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xb4c;
  pAVar4 = param_1 + 0xb4c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xb6c;
  pAVar4 = param_1 + 0xb6c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xb8c;
  pAVar4 = param_1 + 0xb8c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xbac;
  pAVar4 = param_1 + 0xbac;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xbcc;
  pAVar4 = param_1 + 0xbcc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xbec;
  pAVar4 = param_1 + 0xbec;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xc0c;
  pAVar4 = param_1 + 0xc0c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xc2c;
  pAVar4 = param_1 + 0xc2c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xc4c;
  pAVar4 = param_1 + 0xc4c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xc6c;
  pAVar4 = param_1 + 0xc6c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xc8c;
  pAVar4 = param_1 + 0xc8c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xcac;
  pAVar4 = param_1 + 0xcac;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xccc;
  pAVar4 = param_1 + 0xccc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xcec;
  pAVar4 = param_1 + 0xcec;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xd0c;
  pAVar4 = param_1 + 0xd0c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xd2c;
  pAVar4 = param_1 + 0xd2c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xd4c;
  pAVar4 = param_1 + 0xd4c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xd6c;
  pAVar4 = param_1 + 0xd6c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xd8c;
  pAVar4 = param_1 + 0xd8c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xdac;
  pAVar4 = param_1 + 0xdac;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xdcc;
  pAVar4 = param_1 + 0xdcc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xdec;
  pAVar4 = param_1 + 0xdec;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xe0c;
  pAVar4 = param_1 + 0xe0c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xe2c;
  pAVar4 = param_1 + 0xe2c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xe4c;
  pAVar4 = param_1 + 0xe4c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xe6c;
  pAVar4 = param_1 + 0xe6c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xe8c;
  pAVar4 = param_1 + 0xe8c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xeac;
  pAVar4 = param_1 + 0xeac;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xecc;
  pAVar4 = param_1 + 0xecc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xeec;
  pAVar4 = param_1 + 0xeec;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xf0c;
  pAVar4 = param_1 + 0xf0c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xf2c;
  pAVar4 = param_1 + 0xf2c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xf4c;
  pAVar4 = param_1 + 0xf4c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xf6c;
  pAVar4 = param_1 + 0xf6c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xf8c;
  pAVar4 = param_1 + 0xf8c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xfac;
  pAVar4 = param_1 + 0xfac;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xfcc;
  pAVar4 = param_1 + 0xfcc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0xfec;
  pAVar4 = param_1 + 0xfec;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x100c;
  pAVar4 = param_1 + 0x100c;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x105c) = *(undefined4 *)(param_2 + 0x105c);
  *(undefined4 *)(param_1 + 0x1060) = *(undefined4 *)(param_2 + 0x1060);
  *(undefined4 *)(param_1 + 0x1064) = *(undefined4 *)(param_2 + 0x1064);
  *(undefined4 *)(param_1 + 0x1068) = *(undefined4 *)(param_2 + 0x1068);
  *(undefined4 *)(param_1 + 0x106c) = *(undefined4 *)(param_2 + 0x106c);
  *(undefined4 *)(param_1 + 0x1070) = *(undefined4 *)(param_2 + 0x1070);
  *(undefined4 *)(param_1 + 0x1074) = *(undefined4 *)(param_2 + 0x1074);
  *(undefined4 *)(param_1 + 0x1078) = *(undefined4 *)(param_2 + 0x1078);
  *(undefined4 *)(param_1 + 0x107c) = *(undefined4 *)(param_2 + 0x107c);
  *(undefined4 *)(param_1 + 0x1080) = *(undefined4 *)(param_2 + 0x1080);
  *(undefined4 *)(param_1 + 0x1084) = *(undefined4 *)(param_2 + 0x1084);
  *(undefined4 *)(param_1 + 0x1088) = *(undefined4 *)(param_2 + 0x1088);
  *(undefined4 *)(param_1 + 0x108c) = *(undefined4 *)(param_2 + 0x108c);
  *(undefined4 *)(param_1 + 0x1090) = *(undefined4 *)(param_2 + 0x1090);
  *(undefined4 *)(param_1 + 0x1094) = *(undefined4 *)(param_2 + 0x1094);
  *(undefined4 *)(param_1 + 0x1098) = *(undefined4 *)(param_2 + 0x1098);
  *(undefined4 *)(param_1 + 0x109c) = *(undefined4 *)(param_2 + 0x109c);
  *(undefined4 *)(param_1 + 0x10a0) = *(undefined4 *)(param_2 + 0x10a0);
  *(undefined4 *)(param_1 + 0x10a4) = *(undefined4 *)(param_2 + 0x10a4);
  *(undefined4 *)(param_1 + 0x10a8) = *(undefined4 *)(param_2 + 0x10a8);
  pAVar3 = param_2 + 0x10ac;
  pAVar4 = param_1 + 0x10ac;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x10cc;
  pAVar4 = param_1 + 0x10cc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x10ec;
  pAVar4 = param_1 + 0x10ec;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x110c;
  pAVar4 = param_1 + 0x110c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x112c;
  pAVar4 = param_1 + 0x112c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x114c) = *(undefined4 *)(param_2 + 0x114c);
  *(undefined4 *)(param_1 + 0x1150) = *(undefined4 *)(param_2 + 0x1150);
  *(undefined4 *)(param_1 + 0x1154) = *(undefined4 *)(param_2 + 0x1154);
  *(undefined4 *)(param_1 + 0x1158) = *(undefined4 *)(param_2 + 0x1158);
  *(undefined4 *)(param_1 + 0x115c) = *(undefined4 *)(param_2 + 0x115c);
  pAVar3 = param_2 + 0x1160;
  pAVar4 = param_1 + 0x1160;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x1180;
  pAVar4 = param_1 + 0x1180;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x11a0;
  pAVar4 = param_1 + 0x11a0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x11c0;
  pAVar4 = param_1 + 0x11c0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x11e0;
  pAVar4 = param_1 + 0x11e0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x1200;
  pAVar4 = param_1 + 0x1200;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x1220;
  pAVar4 = param_1 + 0x1220;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x1240;
  pAVar4 = param_1 + 0x1240;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x1260;
  pAVar4 = param_1 + 0x1260;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x1280;
  pAVar4 = param_1 + 0x1280;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x12a0;
  pAVar4 = param_1 + 0x12a0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x12c0;
  pAVar4 = param_1 + 0x12c0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x12e0;
  pAVar4 = param_1 + 0x12e0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x1300;
  pAVar4 = param_1 + 0x1300;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x1320;
  pAVar4 = param_1 + 0x1320;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x1340;
  pAVar4 = param_1 + 0x1340;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x1360;
  pAVar4 = param_1 + 0x1360;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x1380;
  pAVar4 = param_1 + 0x1380;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x13a0;
  pAVar4 = param_1 + 0x13a0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x13c0;
  pAVar4 = param_1 + 0x13c0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x13e0;
  pAVar4 = param_1 + 0x13e0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x1400) = *(undefined4 *)(param_2 + 0x1400);
  *(undefined4 *)(param_1 + 0x1404) = *(undefined4 *)(param_2 + 0x1404);
  pAVar3 = param_2 + 0x1408;
  pAVar4 = param_1 + 0x1408;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_2 + 0x1458;
  pAVar4 = param_1 + 0x1458;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x14a8) = *(undefined4 *)(param_2 + 0x14a8);
  *(undefined4 *)(param_1 + 0x14ac) = *(undefined4 *)(param_2 + 0x14ac);
  *(undefined4 *)(param_1 + 0x14b0) = *(undefined4 *)(param_2 + 0x14b0);
  *(undefined4 *)(param_1 + 0x14b4) = *(undefined4 *)(param_2 + 0x14b4);
  *(undefined4 *)(param_1 + 0x14b8) = *(undefined4 *)(param_2 + 0x14b8);
  *(undefined4 *)(param_1 + 0x14bc) = *(undefined4 *)(param_2 + 0x14bc);
  *(undefined4 *)(param_1 + 0x14c0) = *(undefined4 *)(param_2 + 0x14c0);
  *(undefined4 *)(param_1 + 0x14c4) = *(undefined4 *)(param_2 + 0x14c4);
  *(undefined4 *)(param_1 + 0x14c8) = *(undefined4 *)(param_2 + 0x14c8);
  *(undefined4 *)(param_1 + 0x14cc) = *(undefined4 *)(param_2 + 0x14cc);
  *(undefined4 *)(param_1 + 0x14d0) = *(undefined4 *)(param_2 + 0x14d0);
  *(undefined4 *)(param_1 + 0x14d4) = *(undefined4 *)(param_2 + 0x14d4);
  *(undefined4 *)(param_1 + 0x14d8) = *(undefined4 *)(param_2 + 0x14d8);
  *(undefined4 *)(param_1 + 0x14dc) = *(undefined4 *)(param_2 + 0x14dc);
  *(undefined4 *)(param_1 + 0x14e0) = *(undefined4 *)(param_2 + 0x14e0);
  *(undefined4 *)(param_1 + 0x14e4) = *(undefined4 *)(param_2 + 0x14e4);
  *(uint *)(param_1 + 0x14e8) =
       *(uint *)(param_1 + 0x14e8) ^ (*(uint *)(param_1 + 0x14e8) ^ *(uint *)(param_2 + 0x14e8)) & 1
  ;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ *(uint *)(param_1 + 0x14e8)) & 2 ^
          *(uint *)(param_1 + 0x14e8);
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x100000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x200000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x400000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x800000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x1000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x2000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x4000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x8000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x10000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x20000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x40000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  *(uint *)(param_1 + 0x14e8) =
       (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x7fffffff ^ *(uint *)(param_2 + 0x14e8);
  *(uint *)(param_1 + 0x14ec) =
       *(uint *)(param_1 + 0x14ec) ^ (*(uint *)(param_1 + 0x14ec) ^ *(uint *)(param_2 + 0x14ec)) & 1
  ;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ *(uint *)(param_1 + 0x14ec)) & 2 ^
          *(uint *)(param_1 + 0x14ec);
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x100000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x200000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x400000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  *(uint *)(param_1 + 0x14ec) = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x800000 ^ uVar1;
  param_1[0x14f0] = param_2[0x14f0];
  param_1[0x14f1] = param_2[0x14f1];
  *(undefined4 *)(param_1 + 0x14f4) = *(undefined4 *)(param_2 + 0x14f4);
  *(undefined4 *)(param_1 + 0x14f8) = *(undefined4 *)(param_2 + 0x14f8);
  *(undefined4 *)(param_1 + 0x14fc) = *(undefined4 *)(param_2 + 0x14fc);
  *(undefined4 *)(param_1 + 0x1500) = *(undefined4 *)(param_2 + 0x1500);
  *(undefined4 *)(param_1 + 0x1504) = *(undefined4 *)(param_2 + 0x1504);
  *(undefined4 *)(param_1 + 0x1508) = *(undefined4 *)(param_2 + 0x1508);
  *(undefined4 *)(param_1 + 0x150c) = *(undefined4 *)(param_2 + 0x150c);
  *(undefined4 *)(param_1 + 0x1510) = *(undefined4 *)(param_2 + 0x1510);
  *(undefined4 *)(param_1 + 0x1514) = *(undefined4 *)(param_2 + 0x1514);
  *(undefined4 *)(param_1 + 0x1518) = *(undefined4 *)(param_2 + 0x1518);
  *(undefined4 *)(param_1 + 0x151c) = *(undefined4 *)(param_2 + 0x151c);
  *(undefined4 *)(param_1 + 0x1520) = *(undefined4 *)(param_2 + 0x1520);
  *(undefined4 *)(param_1 + 0x1524) = *(undefined4 *)(param_2 + 0x1524);
  *(undefined4 *)(param_1 + 0x1528) = *(undefined4 *)(param_2 + 0x1528);
  *(undefined4 *)(param_1 + 0x152c) = *(undefined4 *)(param_2 + 0x152c);
  *(undefined4 *)(param_1 + 0x1530) = *(undefined4 *)(param_2 + 0x1530);
  *(undefined4 *)(param_1 + 0x1534) = *(undefined4 *)(param_2 + 0x1534);
  *(undefined4 *)(param_1 + 0x1538) = *(undefined4 *)(param_2 + 0x1538);
  *(undefined4 *)(param_1 + 0x153c) = *(undefined4 *)(param_2 + 0x153c);
  *(undefined4 *)(param_1 + 0x1540) = *(undefined4 *)(param_2 + 0x1540);
  *(undefined4 *)(param_1 + 0x1544) = *(undefined4 *)(param_2 + 0x1544);
  *(undefined4 *)(param_1 + 0x1548) = *(undefined4 *)(param_2 + 0x1548);
  *(undefined4 *)(param_1 + 0x154c) = *(undefined4 *)(param_2 + 0x154c);
  *(undefined4 *)(param_1 + 0x1550) = *(undefined4 *)(param_2 + 0x1550);
  *(undefined4 *)(param_1 + 0x1554) = *(undefined4 *)(param_2 + 0x1554);
  *(undefined4 *)(param_1 + 0x1558) = *(undefined4 *)(param_2 + 0x1558);
  *(undefined4 *)(param_1 + 0x155c) = *(undefined4 *)(param_2 + 0x155c);
  *(undefined4 *)(param_1 + 0x1560) = *(undefined4 *)(param_2 + 0x1560);
  *(undefined4 *)(param_1 + 0x1564) = *(undefined4 *)(param_2 + 0x1564);
  *(undefined4 *)(param_1 + 0x1568) = *(undefined4 *)(param_2 + 0x1568);
  *(undefined4 *)(param_1 + 0x156c) = *(undefined4 *)(param_2 + 0x156c);
  *(undefined4 *)(param_1 + 0x1570) = *(undefined4 *)(param_2 + 0x1570);
  *(undefined4 *)(param_1 + 0x1574) = *(undefined4 *)(param_2 + 0x1574);
  *(undefined4 *)(param_1 + 0x1578) = *(undefined4 *)(param_2 + 0x1578);
  *(undefined4 *)(param_1 + 0x157c) = *(undefined4 *)(param_2 + 0x157c);
  *(undefined4 *)(param_1 + 0x1580) = *(undefined4 *)(param_2 + 0x1580);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x1584),(FStringNoInit *)(param_2 + 0x1584));
  local_4._0_1_ = 0xd;
  *(undefined4 *)(param_1 + 0x1590) = *(undefined4 *)(param_2 + 0x1590);
  *(undefined4 *)(param_1 + 0x1594) = *(undefined4 *)(param_2 + 0x1594);
  *(undefined4 *)(param_1 + 0x1598) = *(undefined4 *)(param_2 + 0x1598);
  *(undefined4 *)(param_1 + 0x159c) = *(undefined4 *)(param_2 + 0x159c);
  *(undefined4 *)(param_1 + 0x15a0) = *(undefined4 *)(param_2 + 0x15a0);
  *(undefined4 *)(param_1 + 0x15a4) = *(undefined4 *)(param_2 + 0x15a4);
  *(undefined4 *)(param_1 + 0x15a8) = *(undefined4 *)(param_2 + 0x15a8);
  *(undefined4 *)(param_1 + 0x15ac) = *(undefined4 *)(param_2 + 0x15ac);
  *(undefined4 *)(param_1 + 0x15b0) = *(undefined4 *)(param_2 + 0x15b0);
  *(undefined4 *)(param_1 + 0x15b4) = *(undefined4 *)(param_2 + 0x15b4);
  *(undefined4 *)(param_1 + 0x15b8) = *(undefined4 *)(param_2 + 0x15b8);
  *(undefined4 *)(param_1 + 0x15bc) = *(undefined4 *)(param_2 + 0x15bc);
  *(undefined4 *)(param_1 + 0x15c0) = *(undefined4 *)(param_2 + 0x15c0);
  *(undefined4 *)(param_1 + 0x15c4) = *(undefined4 *)(param_2 + 0x15c4);
  *(undefined4 *)(param_1 + 0x15c8) = *(undefined4 *)(param_2 + 0x15c8);
  *(undefined4 *)(param_1 + 0x15cc) = *(undefined4 *)(param_2 + 0x15cc);
  *(undefined4 *)(param_1 + 0x15d0) = *(undefined4 *)(param_2 + 0x15d0);
  *(undefined4 *)(param_1 + 0x15d4) = *(undefined4 *)(param_2 + 0x15d4);
  *(undefined4 *)(param_1 + 0x15d8) = *(undefined4 *)(param_2 + 0x15d8);
  *(undefined4 *)(param_1 + 0x15dc) = *(undefined4 *)(param_2 + 0x15dc);
  *(undefined4 *)(param_1 + 0x15e0) = *(undefined4 *)(param_2 + 0x15e0);
  *(undefined4 *)(param_1 + 0x15e4) = *(undefined4 *)(param_2 + 0x15e4);
  *(undefined4 *)(param_1 + 0x15e8) = *(undefined4 *)(param_2 + 0x15e8);
  *(undefined4 *)(param_1 + 0x15ec) = *(undefined4 *)(param_2 + 0x15ec);
  *(undefined4 *)(param_1 + 0x15f0) = *(undefined4 *)(param_2 + 0x15f0);
  *(undefined4 *)(param_1 + 0x15f4) = *(undefined4 *)(param_2 + 0x15f4);
  *(undefined4 *)(param_1 + 0x15f8) = *(undefined4 *)(param_2 + 0x15f8);
  *(undefined4 *)(param_1 + 0x15fc) = *(undefined4 *)(param_2 + 0x15fc);
  *(undefined4 *)(param_1 + 0x1600) = *(undefined4 *)(param_2 + 0x1600);
  *(undefined4 *)(param_1 + 0x1604) = *(undefined4 *)(param_2 + 0x1604);
  *(undefined4 *)(param_1 + 0x1608) = *(undefined4 *)(param_2 + 0x1608);
  *(undefined4 *)(param_1 + 0x160c) = *(undefined4 *)(param_2 + 0x160c);
  *(undefined4 *)(param_1 + 0x1610) = *(undefined4 *)(param_2 + 0x1610);
  *(undefined4 *)(param_1 + 0x1614) = *(undefined4 *)(param_2 + 0x1614);
  *(undefined4 *)(param_1 + 0x1618) = *(undefined4 *)(param_2 + 0x1618);
  *(undefined4 *)(param_1 + 0x161c) = *(undefined4 *)(param_2 + 0x161c);
  *(undefined4 *)(param_1 + 0x1620) = *(undefined4 *)(param_2 + 0x1620);
  *(undefined4 *)(param_1 + 0x1624) = *(undefined4 *)(param_2 + 0x1624);
  *(undefined4 *)(param_1 + 0x1628) = *(undefined4 *)(param_2 + 0x1628);
  *(undefined4 *)(param_1 + 0x162c) = *(undefined4 *)(param_2 + 0x162c);
  *(undefined4 *)(param_1 + 0x1630) = *(undefined4 *)(param_2 + 0x1630);
  *(undefined4 *)(param_1 + 0x1634) = *(undefined4 *)(param_2 + 0x1634);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x1638),(FStringNoInit *)(param_2 + 0x1638));
  local_4._0_1_ = 0xe;
  *(undefined4 *)(param_1 + 0x1644) = *(undefined4 *)(param_2 + 0x1644);
  *(undefined4 *)(param_1 + 0x1648) = *(undefined4 *)(param_2 + 0x1648);
  *(uint *)(param_1 + 0x164c) =
       *(uint *)(param_1 + 0x164c) ^ (*(uint *)(param_1 + 0x164c) ^ *(uint *)(param_2 + 0x164c)) & 1
  ;
  uVar1 = (*(uint *)(param_2 + 0x164c) ^ *(uint *)(param_1 + 0x164c)) & 2 ^
          *(uint *)(param_1 + 0x164c);
  *(uint *)(param_1 + 0x164c) = uVar1;
  *(uint *)(param_1 + 0x164c) = (*(uint *)(param_2 + 0x164c) ^ uVar1) & 4 ^ uVar1;
  thunk_FUN_1037c910(param_2 + 0x1650);
  local_4._0_1_ = 0x10;
  thunk_FUN_1037c9c0(param_2 + 0x165c);
  local_4._0_1_ = 0x12;
  thunk_FUN_1037ca70(param_2 + 0x1668);
  local_4._0_1_ = 0x14;
  thunk_FUN_1037cb20(param_2 + 0x1674);
  local_4._0_1_ = 0x16;
  *(undefined4 *)(param_1 + 0x1680) = *(undefined4 *)(param_2 + 0x1680);
  *(uint *)(param_1 + 0x1684) =
       *(uint *)(param_1 + 0x1684) ^ (*(uint *)(param_2 + 0x1684) ^ *(uint *)(param_1 + 0x1684)) & 1
  ;
  *(undefined4 *)(param_1 + 0x1688) = *(undefined4 *)(param_2 + 0x1688);
  *(undefined4 *)(param_1 + 0x168c) = *(undefined4 *)(param_2 + 0x168c);
  *(undefined4 *)(param_1 + 0x1690) = *(undefined4 *)(param_2 + 0x1690);
  thunk_FUN_1037cbd0(param_2 + 0x1694);
  local_4._0_1_ = 0x18;
  thunk_FUN_1037cc80(param_2 + 0x16a0);
  local_4._0_1_ = 0x1a;
  *(undefined4 *)(param_1 + 0x16ac) = *(undefined4 *)(param_2 + 0x16ac);
  *(undefined4 *)(param_1 + 0x16b0) = *(undefined4 *)(param_2 + 0x16b0);
  thunk_FUN_1037cd30(param_2 + 0x16b4);
  local_4._0_1_ = 0x1c;
  *(undefined4 *)(param_1 + 0x16c0) = *(undefined4 *)(param_2 + 0x16c0);
  param_1[0x16c4] = param_2[0x16c4];
  *(undefined4 *)(param_1 + 0x16c8) = *(undefined4 *)(param_2 + 0x16c8);
  *(undefined4 *)(param_1 + 0x16cc) = *(undefined4 *)(param_2 + 0x16cc);
  *(undefined4 *)(param_1 + 0x16d0) = *(undefined4 *)(param_2 + 0x16d0);
  *(undefined4 *)(param_1 + 0x16d4) = *(undefined4 *)(param_2 + 0x16d4);
  *(undefined4 *)(param_1 + 0x16d8) = *(undefined4 *)(param_2 + 0x16d8);
  *(undefined4 *)(param_1 + 0x16dc) = *(undefined4 *)(param_2 + 0x16dc);
  *(undefined4 *)(param_1 + 0x16e0) = *(undefined4 *)(param_2 + 0x16e0);
  *(undefined4 *)(param_1 + 0x16e4) = *(undefined4 *)(param_2 + 0x16e4);
  *(undefined4 *)(param_1 + 0x16e8) = *(undefined4 *)(param_2 + 0x16e8);
  *(undefined4 *)(param_1 + 0x16ec) = *(undefined4 *)(param_2 + 0x16ec);
  pAVar3 = param_2 + 0x16f0;
  pAVar4 = param_1 + 0x16f0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x1710) = *(undefined4 *)(param_2 + 0x1710);
  *(undefined4 *)(param_1 + 0x1714) = *(undefined4 *)(param_2 + 0x1714);
  *(undefined4 *)(param_1 + 0x1718) = *(undefined4 *)(param_2 + 0x1718);
  *(undefined4 *)(param_1 + 0x171c) = *(undefined4 *)(param_2 + 0x171c);
  *(undefined4 *)(param_1 + 0x1720) = *(undefined4 *)(param_2 + 0x1720);
  *(undefined4 *)(param_1 + 0x1724) = *(undefined4 *)(param_2 + 0x1724);
  *(undefined4 *)(param_1 + 0x1728) = *(undefined4 *)(param_2 + 0x1728);
  *(undefined4 *)(param_1 + 0x172c) = *(undefined4 *)(param_2 + 0x172c);
  *(undefined4 *)(param_1 + 0x1730) = *(undefined4 *)(param_2 + 0x1730);
  *(uint *)(param_1 + 0x1734) =
       *(uint *)(param_1 + 0x1734) ^ (*(uint *)(param_1 + 0x1734) ^ *(uint *)(param_2 + 0x1734)) & 1
  ;
  uVar1 = (*(uint *)(param_2 + 0x1734) ^ *(uint *)(param_1 + 0x1734)) & 2 ^
          *(uint *)(param_1 + 0x1734);
  *(uint *)(param_1 + 0x1734) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x1734) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x1734) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x1734) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x1734) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x1734) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x1734) = uVar1;
  *(uint *)(param_1 + 0x1734) = (*(uint *)(param_2 + 0x1734) ^ uVar1) & 0x20 ^ uVar1;
  param_1[0x1738] = param_2[0x1738];
  *(undefined4 *)(param_1 + 0x173c) = *(undefined4 *)(param_2 + 0x173c);
  *(undefined4 *)(param_1 + 0x1740) = *(undefined4 *)(param_2 + 0x1740);
  *(undefined4 *)(param_1 + 0x1744) = *(undefined4 *)(param_2 + 0x1744);
  *(undefined4 *)(param_1 + 0x1748) = *(undefined4 *)(param_2 + 0x1748);
  *(undefined4 *)(param_1 + 0x174c) = *(undefined4 *)(param_2 + 0x174c);
  *(undefined4 *)(param_1 + 0x1750) = *(undefined4 *)(param_2 + 0x1750);
  *(undefined4 *)(param_1 + 0x1754) = *(undefined4 *)(param_2 + 0x1754);
  *(undefined4 *)(param_1 + 0x1758) = *(undefined4 *)(param_2 + 0x1758);
  *(undefined4 *)(param_1 + 0x175c) = *(undefined4 *)(param_2 + 0x175c);
  *(undefined4 *)(param_1 + 0x1760) = *(undefined4 *)(param_2 + 0x1760);
  *(undefined4 *)(param_1 + 0x1764) = *(undefined4 *)(param_2 + 0x1764);
  *(undefined4 *)(param_1 + 0x1768) = *(undefined4 *)(param_2 + 0x1768);
  *(undefined4 *)(param_1 + 0x176c) = *(undefined4 *)(param_2 + 0x176c);
  *(undefined4 *)(param_1 + 6000) = *(undefined4 *)(param_2 + 6000);
  *(undefined4 *)(param_1 + 0x1774) = *(undefined4 *)(param_2 + 0x1774);
  *(uint *)(param_1 + 0x1778) =
       *(uint *)(param_1 + 0x1778) ^ (*(uint *)(param_2 + 0x1778) ^ *(uint *)(param_1 + 0x1778)) & 1
  ;
  *(undefined4 *)(param_1 + 0x177c) = *(undefined4 *)(param_2 + 0x177c);
  *(undefined4 *)(param_1 + 0x1780) = *(undefined4 *)(param_2 + 0x1780);
  *(undefined4 *)(param_1 + 0x1784) = *(undefined4 *)(param_2 + 0x1784);
  *(undefined4 *)(param_1 + 0x1788) = *(undefined4 *)(param_2 + 0x1788);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x178c),(FStringNoInit *)(param_2 + 0x178c));
  local_4._0_1_ = 0x1d;
  *(undefined4 *)(param_1 + 0x1798) = *(undefined4 *)(param_2 + 0x1798);
  *(undefined4 *)(param_1 + 0x179c) = *(undefined4 *)(param_2 + 0x179c);
  *(undefined4 *)(param_1 + 0x17a0) = *(undefined4 *)(param_2 + 0x17a0);
  *(undefined4 *)(param_1 + 0x17a4) = *(undefined4 *)(param_2 + 0x17a4);
  *(undefined4 *)(param_1 + 0x17a8) = *(undefined4 *)(param_2 + 0x17a8);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x17ac),(FStringNoInit *)(param_2 + 0x17ac));
  local_4._0_1_ = 0x1e;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x17b8),(FStringNoInit *)(param_2 + 0x17b8));
  local_4._0_1_ = 0x1f;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x17c4),(FStringNoInit *)(param_2 + 0x17c4));
  local_4 = CONCAT31(local_4._1_3_,0x20);
  *(undefined4 *)(param_1 + 0x17d0) = *(undefined4 *)(param_2 + 0x17d0);
  *(undefined4 *)(param_1 + 0x17d4) = *(undefined4 *)(param_2 + 0x17d4);
  *(undefined4 *)(param_1 + 0x17d8) = *(undefined4 *)(param_2 + 0x17d8);
  *(undefined4 *)(param_1 + 0x17dc) = *(undefined4 *)(param_2 + 0x17dc);
  *(uint *)(param_1 + 0x17e0) =
       *(uint *)(param_1 + 0x17e0) ^ (*(uint *)(param_2 + 0x17e0) ^ *(uint *)(param_1 + 0x17e0)) & 1
  ;
  *(undefined4 *)(param_1 + 0x17e4) = *(undefined4 *)(param_2 + 0x17e4);
  *(undefined4 *)(param_1 + 0x17e8) = *(undefined4 *)(param_2 + 0x17e8);
  *(uint *)(param_1 + 0x17ec) =
       *(uint *)(param_1 + 0x17ec) ^ (*(uint *)(param_2 + 0x17ec) ^ *(uint *)(param_1 + 0x17ec)) & 1
  ;
  *(undefined4 *)(param_1 + 0x17f0) = *(undefined4 *)(param_2 + 0x17f0);
  *(undefined4 *)(param_1 + 0x17f4) = *(undefined4 *)(param_2 + 0x17f4);
  *(undefined4 *)(param_1 + 0x17f8) = *(undefined4 *)(param_2 + 0x17f8);
  *(uint *)(param_1 + 0x17fc) =
       *(uint *)(param_1 + 0x17fc) ^ (*(uint *)(param_1 + 0x17fc) ^ *(uint *)(param_2 + 0x17fc)) & 1
  ;
  *(uint *)(param_1 + 0x17fc) =
       (*(uint *)(param_2 + 0x17fc) ^ *(uint *)(param_1 + 0x17fc)) & 2 ^ *(uint *)(param_1 + 0x17fc)
  ;
  *(undefined4 *)(param_1 + 0x1800) = *(undefined4 *)(param_2 + 0x1800);
  *(undefined4 *)(param_1 + 0x1804) = *(undefined4 *)(param_2 + 0x1804);
  *(undefined4 *)(param_1 + 0x1808) = *(undefined4 *)(param_2 + 0x1808);
  *(undefined4 *)(param_1 + 0x180c) = *(undefined4 *)(param_2 + 0x180c);
  *(undefined4 *)(param_1 + 0x1810) = *(undefined4 *)(param_2 + 0x1810);
  *(undefined4 *)(param_1 + 0x1814) = *(undefined4 *)(param_2 + 0x1814);
  *(uint *)(param_1 + 0x1818) =
       *(uint *)(param_1 + 0x1818) ^ (*(uint *)(param_2 + 0x1818) ^ *(uint *)(param_1 + 0x1818)) & 1
  ;
  *(undefined4 *)(param_1 + 0x181c) = *(undefined4 *)(param_2 + 0x181c);
  *(uint *)(param_1 + 0x1820) =
       *(uint *)(param_1 + 0x1820) ^ (*(uint *)(param_1 + 0x1820) ^ *(uint *)(param_2 + 0x1820)) & 1
  ;
  uVar1 = (*(uint *)(param_2 + 0x1820) ^ *(uint *)(param_1 + 0x1820)) & 2 ^
          *(uint *)(param_1 + 0x1820);
  *(uint *)(param_1 + 0x1820) = uVar1;
  *(uint *)(param_1 + 0x1820) = (*(uint *)(param_2 + 0x1820) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x1824) = *(undefined4 *)(param_2 + 0x1824);
  *(undefined4 *)(param_1 + 0x1828) = *(undefined4 *)(param_2 + 0x1828);
  *(undefined4 *)(param_1 + 0x182c) = *(undefined4 *)(param_2 + 0x182c);
  *(undefined4 *)(param_1 + 0x1830) = *(undefined4 *)(param_2 + 0x1830);
  *(undefined4 *)(param_1 + 0x1834) = *(undefined4 *)(param_2 + 0x1834);
  *(undefined4 *)(param_1 + 0x1838) = *(undefined4 *)(param_2 + 0x1838);
  pAVar3 = param_2 + 0x183c;
  pAVar4 = param_1 + 0x183c;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(uint *)(param_1 + 0x1860) =
       *(uint *)(param_1 + 0x1860) ^ (*(uint *)(param_2 + 0x1860) ^ *(uint *)(param_1 + 0x1860)) & 1
  ;
  *(undefined4 *)(param_1 + 0x1864) = *(undefined4 *)(param_2 + 0x1864);
  *(undefined4 *)(param_1 + 0x1868) = *(undefined4 *)(param_2 + 0x1868);
  *(undefined4 *)(param_1 + 0x186c) = *(undefined4 *)(param_2 + 0x186c);
  *(undefined4 *)(param_1 + 0x1870) = *(undefined4 *)(param_2 + 0x1870);
  *(undefined4 *)(param_1 + 0x1874) = *(undefined4 *)(param_2 + 0x1874);
  *(undefined4 *)(param_1 + 0x1878) = *(undefined4 *)(param_2 + 0x1878);
  *(undefined4 *)(param_1 + 0x187c) = *(undefined4 *)(param_2 + 0x187c);
  *(undefined4 *)(param_1 + 0x1880) = *(undefined4 *)(param_2 + 0x1880);
  *(undefined4 *)(param_1 + 0x1884) = *(undefined4 *)(param_2 + 0x1884);
  *(undefined4 *)(param_1 + 0x1888) = *(undefined4 *)(param_2 + 0x1888);
  *(undefined4 *)(param_1 + 0x188c) = *(undefined4 *)(param_2 + 0x188c);
  *(undefined4 *)(param_1 + 0x1890) = *(undefined4 *)(param_2 + 0x1890);
  *(undefined4 *)(param_1 + 0x1894) = *(undefined4 *)(param_2 + 0x1894);
  *(undefined4 *)(param_1 + 0x1898) = *(undefined4 *)(param_2 + 0x1898);
  *(undefined4 *)(param_1 + 0x189c) = *(undefined4 *)(param_2 + 0x189c);
  *(undefined4 *)(param_1 + 0x18a0) = *(undefined4 *)(param_2 + 0x18a0);
  *(undefined4 *)(param_1 + 0x18a4) = *(undefined4 *)(param_2 + 0x18a4);
  *(undefined4 *)(param_1 + 0x18a8) = *(undefined4 *)(param_2 + 0x18a8);
  *(undefined4 *)(param_1 + 0x18ac) = *(undefined4 *)(param_2 + 0x18ac);
  *(undefined4 *)(param_1 + 0x18b0) = *(undefined4 *)(param_2 + 0x18b0);
  *(undefined4 *)(param_1 + 0x18b4) = *(undefined4 *)(param_2 + 0x18b4);
  *(undefined4 *)(param_1 + 0x18b8) = *(undefined4 *)(param_2 + 0x18b8);
  thunk_FUN_1032bc20(param_2 + 0x18bc);
  *(uint *)(param_1 + 0x18c8) =
       *(uint *)(param_1 + 0x18c8) ^ (*(uint *)(param_2 + 0x18c8) ^ *(uint *)(param_1 + 0x18c8)) & 1
  ;
  *(undefined4 *)(param_1 + 0x18cc) = *(undefined4 *)(param_2 + 0x18cc);
  *(undefined4 *)(param_1 + 0x18d0) = *(undefined4 *)(param_2 + 0x18d0);
  *(uint *)(param_1 + 0x18d4) =
       *(uint *)(param_1 + 0x18d4) ^ (*(uint *)(param_2 + 0x18d4) ^ *(uint *)(param_1 + 0x18d4)) & 1
  ;
  ExceptionList = local_c;
  return param_1;
}


// ==== 103c8a70 FUN_103c8a70 depth=0 from=raiz callees=thunk_FUN_10385470@10302d15 AActor::operator=@10315177 FNPrimeActionParam::operator=@1030ace0 CORE.DLL::FStringNoInit::operator=@EXTERNAL:000000b2 thunk_FUN_103902d0@10303490 thunk_FUN_103901d0@1030a57e thunk_FUN_10385360@10311a09 thunk_FUN_10385030@10304917 thunk_FUN_10385580@10306028 thunk_FUN_10385250@10301ad7 thunk_FUN_10384e10@10305407 FNMagicInfo::operator=@10307dab thunk_FUN_10385140@1030ed22 thunk_FUN_10385690@1030d35a thunk_FUN_10384f20@10302437 thunk_FUN_1032bcd0@1030e322
// strings: 

AActor * __thiscall FUN_103c8a70(AActor *param_1,AActor *param_2)

{
  uint uVar1;
  int iVar2;
  AActor *pAVar3;
  int iVar4;
  AActor *pAVar5;
  
  AActor::operator=(param_1,param_2);
  *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_2 + 0x3bc);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x3c0);
  *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_2 + 0x3c4);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_2 + 0x3cc);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_2 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_2 + 0x3dc);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x3e0);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x3e4);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 1000);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_2 + 0x3ec);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_2 + 0x3f4);
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_2 + 0x3f8);
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_2 + 0x3fc);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x400);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_2 + 0x404);
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_2 + 0x408);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x40c);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_2 + 0x418);
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_2 + 0x41c);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x420);
  *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(param_2 + 0x424);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x428);
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_2 + 0x42c);
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x430);
  *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_2 + 0x434);
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_2 + 0x438);
  *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x43c);
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x440);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_2 + 0x444);
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_2 + 0x448);
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_2 + 0x44c);
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x450);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_2 + 0x454);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_2 + 0x45c);
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x460);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_2 + 0x46c);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x478);
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_2 + 0x47c);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 0x480);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_2 + 0x484);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_2 + 0x488);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_2 + 0x48c);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0x490);
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_2 + 0x494);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_2 + 0x49c);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_2 + 0x4a4);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x4a8),(FStringNoInit *)(param_2 + 0x4a8));
  *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_2 + 0x4b4);
  thunk_FUN_103901d0(param_2 + 0x4b8);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x4c4),(FStringNoInit *)(param_2 + 0x4c4));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x4d0),(FStringNoInit *)(param_2 + 0x4d0));
  *(uint *)(param_1 + 0x4dc) =
       *(uint *)(param_1 + 0x4dc) ^ (*(uint *)(param_2 + 0x4dc) ^ *(uint *)(param_1 + 0x4dc)) & 1;
  thunk_FUN_103902d0(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  FNMagicInfo::operator=((FNMagicInfo *)(param_1 + 0x4f0),(FNMagicInfo *)(param_2 + 0x4f0));
  *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_2 + 0x5a8);
  *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(param_2 + 0x5ac);
  *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_2 + 0x5b0);
  *(undefined4 *)(param_1 + 0x5b4) = *(undefined4 *)(param_2 + 0x5b4);
  *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_2 + 0x5b8);
  *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_2 + 0x5bc);
  *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_2 + 0x5c0);
  *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(param_2 + 0x5c4);
  *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_2 + 0x5c8);
  *(undefined4 *)(param_1 + 0x5cc) = *(undefined4 *)(param_2 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_2 + 0x5d0);
  *(undefined4 *)(param_1 + 0x5d4) = *(undefined4 *)(param_2 + 0x5d4);
  *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(param_2 + 0x5d8);
  *(undefined4 *)(param_1 + 0x5dc) = *(undefined4 *)(param_2 + 0x5dc);
  *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(param_2 + 0x5e0);
  *(undefined4 *)(param_1 + 0x5e4) = *(undefined4 *)(param_2 + 0x5e4);
  *(undefined4 *)(param_1 + 0x5e8) = *(undefined4 *)(param_2 + 0x5e8);
  *(undefined4 *)(param_1 + 0x5ec) = *(undefined4 *)(param_2 + 0x5ec);
  *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(param_2 + 0x5f0);
  *(undefined4 *)(param_1 + 0x5f4) = *(undefined4 *)(param_2 + 0x5f4);
  *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(param_2 + 0x5f8);
  *(undefined4 *)(param_1 + 0x5fc) = *(undefined4 *)(param_2 + 0x5fc);
  *(undefined4 *)(param_1 + 0x600) = *(undefined4 *)(param_2 + 0x600);
  *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)(param_2 + 0x604);
  *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_2 + 0x608);
  *(undefined4 *)(param_1 + 0x60c) = *(undefined4 *)(param_2 + 0x60c);
  *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_2 + 0x610);
  *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_2 + 0x614);
  *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_2 + 0x618);
  *(undefined4 *)(param_1 + 0x61c) = *(undefined4 *)(param_2 + 0x61c);
  *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_2 + 0x620);
  *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_2 + 0x624);
  *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(param_2 + 0x628);
  FNPrimeActionParam::operator=
            ((FNPrimeActionParam *)(param_1 + 0x62c),(FNPrimeActionParam *)(param_2 + 0x62c));
  thunk_FUN_10384e10(param_2 + 0x658);
  *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(param_2 + 0x664);
  *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(param_2 + 0x668);
  thunk_FUN_10384f20(param_2 + 0x66c);
  *(uint *)(param_1 + 0x678) =
       *(uint *)(param_1 + 0x678) ^ (*(uint *)(param_1 + 0x678) ^ *(uint *)(param_2 + 0x678)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x678) ^ *(uint *)(param_1 + 0x678)) & 2 ^ *(uint *)(param_1 + 0x678)
  ;
  *(uint *)(param_1 + 0x678) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x678) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x678) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x678) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x678) = uVar1;
  *(uint *)(param_1 + 0x678) = (*(uint *)(param_2 + 0x678) ^ uVar1) & 0x10 ^ uVar1;
  *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(param_2 + 0x67c);
  *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(param_2 + 0x680);
  *(undefined4 *)(param_1 + 0x684) = *(undefined4 *)(param_2 + 0x684);
  *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(param_2 + 0x688);
  *(undefined4 *)(param_1 + 0x68c) = *(undefined4 *)(param_2 + 0x68c);
  *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(param_2 + 0x690);
  *(uint *)(param_1 + 0x694) =
       *(uint *)(param_1 + 0x694) ^ (*(uint *)(param_1 + 0x694) ^ *(uint *)(param_2 + 0x694)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x694) ^ *(uint *)(param_1 + 0x694)) & 2 ^ *(uint *)(param_1 + 0x694)
  ;
  *(uint *)(param_1 + 0x694) = uVar1;
  *(uint *)(param_1 + 0x694) = (*(uint *)(param_2 + 0x694) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(param_2 + 0x698);
  *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(param_2 + 0x69c);
  *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_2 + 0x6a0);
  *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(param_2 + 0x6a4);
  *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_2 + 0x6a8);
  *(uint *)(param_1 + 0x6ac) =
       *(uint *)(param_1 + 0x6ac) ^ (*(uint *)(param_2 + 0x6ac) ^ *(uint *)(param_1 + 0x6ac)) & 1;
  *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_2 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(param_2 + 0x6b4);
  *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_2 + 0x6b8);
  *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(param_2 + 0x6bc);
  *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(param_2 + 0x6c0);
  *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(param_2 + 0x6c4);
  *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_2 + 0x6c8);
  *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(param_2 + 0x6cc);
  *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_2 + 0x6d0);
  *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_2 + 0x6d4);
  *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_2 + 0x6d8);
  *(uint *)(param_1 + 0x6dc) =
       *(uint *)(param_1 + 0x6dc) ^ (*(uint *)(param_1 + 0x6dc) ^ *(uint *)(param_2 + 0x6dc)) & 1;
  *(uint *)(param_1 + 0x6dc) =
       (*(uint *)(param_2 + 0x6dc) ^ *(uint *)(param_1 + 0x6dc)) & 2 ^ *(uint *)(param_1 + 0x6dc);
  *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_2 + 0x6e0);
  *(uint *)(param_1 + 0x6e4) =
       *(uint *)(param_1 + 0x6e4) ^ (*(uint *)(param_2 + 0x6e4) ^ *(uint *)(param_1 + 0x6e4)) & 1;
  *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(param_2 + 0x6e8);
  *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(param_2 + 0x6ec);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_2 + 0x6f0);
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_2 + 0x6f4);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_2 + 0x6f8);
  *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(param_2 + 0x6fc);
  *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_2 + 0x700);
  *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_2 + 0x704);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_2 + 0x708);
  *(uint *)(param_1 + 0x70c) =
       *(uint *)(param_1 + 0x70c) ^ (*(uint *)(param_2 + 0x70c) ^ *(uint *)(param_1 + 0x70c)) & 1;
  param_1[0x710] = param_2[0x710];
  *(uint *)(param_1 + 0x714) =
       *(uint *)(param_1 + 0x714) ^ (*(uint *)(param_2 + 0x714) ^ *(uint *)(param_1 + 0x714)) & 1;
  *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(param_2 + 0x718);
  param_1[0x71c] = param_2[0x71c];
  param_1[0x71d] = param_2[0x71d];
  *(uint *)(param_1 + 0x720) =
       *(uint *)(param_1 + 0x720) ^ (*(uint *)(param_1 + 0x720) ^ *(uint *)(param_2 + 0x720)) & 1;
  *(uint *)(param_1 + 0x720) =
       (*(uint *)(param_2 + 0x720) ^ *(uint *)(param_1 + 0x720)) & 2 ^ *(uint *)(param_1 + 0x720);
  param_1[0x724] = param_2[0x724];
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_2 + 0x728);
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(param_2 + 0x72c);
  *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(param_2 + 0x730);
  *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(param_2 + 0x734);
  *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(param_2 + 0x738);
  *(uint *)(param_1 + 0x73c) =
       *(uint *)(param_1 + 0x73c) ^ (*(uint *)(param_2 + 0x73c) ^ *(uint *)(param_1 + 0x73c)) & 1;
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_2 + 0x740);
  *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(param_2 + 0x744);
  *(uint *)(param_1 + 0x748) =
       *(uint *)(param_1 + 0x748) ^ (*(uint *)(param_1 + 0x748) ^ *(uint *)(param_2 + 0x748)) & 1;
  *(uint *)(param_1 + 0x748) =
       (*(uint *)(param_2 + 0x748) ^ *(uint *)(param_1 + 0x748)) & 2 ^ *(uint *)(param_1 + 0x748);
  *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(param_2 + 0x74c);
  *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_2 + 0x750);
  *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_2 + 0x754);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_2 + 0x758);
  *(uint *)(param_1 + 0x75c) =
       *(uint *)(param_1 + 0x75c) ^ (*(uint *)(param_2 + 0x75c) ^ *(uint *)(param_1 + 0x75c)) & 1;
  *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_2 + 0x760);
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_2 + 0x764);
  *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_2 + 0x768);
  *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_2 + 0x76c);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_2 + 0x770);
  *(uint *)(param_1 + 0x774) =
       *(uint *)(param_1 + 0x774) ^ (*(uint *)(param_1 + 0x774) ^ *(uint *)(param_2 + 0x774)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x774) ^ *(uint *)(param_1 + 0x774)) & 2 ^ *(uint *)(param_1 + 0x774)
  ;
  *(uint *)(param_1 + 0x774) = uVar1;
  *(uint *)(param_1 + 0x774) = (*(uint *)(param_2 + 0x774) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(param_2 + 0x778);
  *(uint *)(param_1 + 0x77c) =
       *(uint *)(param_1 + 0x77c) ^ (*(uint *)(param_1 + 0x77c) ^ *(uint *)(param_2 + 0x77c)) & 1;
  *(uint *)(param_1 + 0x77c) =
       (*(uint *)(param_2 + 0x77c) ^ *(uint *)(param_1 + 0x77c)) & 2 ^ *(uint *)(param_1 + 0x77c);
  *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_2 + 0x780);
  *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_2 + 0x784);
  *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(param_2 + 0x788);
  *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(param_2 + 0x78c);
  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_2 + 0x790);
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_2 + 0x794);
  *(undefined4 *)(param_1 + 0x798) = *(undefined4 *)(param_2 + 0x798);
  *(undefined4 *)(param_1 + 0x79c) = *(undefined4 *)(param_2 + 0x79c);
  *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(param_2 + 0x7a0);
  *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(param_2 + 0x7a4);
  *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(param_2 + 0x7a8);
  *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_2 + 0x7ac);
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_2 + 0x7b0);
  *(undefined4 *)(param_1 + 0x7b4) = *(undefined4 *)(param_2 + 0x7b4);
  *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(param_2 + 0x7b8);
  *(undefined4 *)(param_1 + 0x7bc) = *(undefined4 *)(param_2 + 0x7bc);
  *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_2 + 0x7c0);
  *(undefined4 *)(param_1 + 0x7c4) = *(undefined4 *)(param_2 + 0x7c4);
  *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(param_2 + 0x7c8);
  *(undefined4 *)(param_1 + 0x7cc) = *(undefined4 *)(param_2 + 0x7cc);
  *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(param_2 + 2000);
  *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(param_2 + 0x7d4);
  *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(param_2 + 0x7d8);
  *(undefined4 *)(param_1 + 0x7dc) = *(undefined4 *)(param_2 + 0x7dc);
  *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(param_2 + 0x7e0);
  *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(param_2 + 0x7e4);
  *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_2 + 0x7e8);
  *(undefined4 *)(param_1 + 0x7ec) = *(undefined4 *)(param_2 + 0x7ec);
  *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_2 + 0x7f0);
  *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(param_2 + 0x7f4);
  *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_2 + 0x7f8);
  *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_2 + 0x7fc);
  *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_2 + 0x800);
  *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(param_2 + 0x804);
  *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(param_2 + 0x808);
  *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(param_2 + 0x80c);
  *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(param_2 + 0x810);
  *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(param_2 + 0x814);
  *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(param_2 + 0x818);
  *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(param_2 + 0x81c);
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_2 + 0x820);
  *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_2 + 0x824);
  *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_2 + 0x828);
  *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(param_2 + 0x82c);
  *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(param_2 + 0x830);
  *(undefined4 *)(param_1 + 0x834) = *(undefined4 *)(param_2 + 0x834);
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(param_2 + 0x838);
  *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(param_2 + 0x83c);
  *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_2 + 0x840);
  *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(param_2 + 0x844);
  *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(param_2 + 0x848);
  *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(param_2 + 0x84c);
  *(undefined4 *)(param_1 + 0x850) = *(undefined4 *)(param_2 + 0x850);
  *(undefined4 *)(param_1 + 0x854) = *(undefined4 *)(param_2 + 0x854);
  *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_2 + 0x858);
  *(undefined4 *)(param_1 + 0x85c) = *(undefined4 *)(param_2 + 0x85c);
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_2 + 0x860);
  *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_2 + 0x864);
  *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(param_2 + 0x868);
  *(undefined4 *)(param_1 + 0x86c) = *(undefined4 *)(param_2 + 0x86c);
  *(undefined4 *)(param_1 + 0x870) = *(undefined4 *)(param_2 + 0x870);
  *(undefined4 *)(param_1 + 0x874) = *(undefined4 *)(param_2 + 0x874);
  *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_2 + 0x878);
  *(undefined4 *)(param_1 + 0x87c) = *(undefined4 *)(param_2 + 0x87c);
  *(undefined4 *)(param_1 + 0x880) = *(undefined4 *)(param_2 + 0x880);
  *(undefined4 *)(param_1 + 0x884) = *(undefined4 *)(param_2 + 0x884);
  *(undefined4 *)(param_1 + 0x888) = *(undefined4 *)(param_2 + 0x888);
  *(undefined4 *)(param_1 + 0x88c) = *(undefined4 *)(param_2 + 0x88c);
  *(undefined4 *)(param_1 + 0x890) = *(undefined4 *)(param_2 + 0x890);
  *(undefined4 *)(param_1 + 0x894) = *(undefined4 *)(param_2 + 0x894);
  *(undefined4 *)(param_1 + 0x898) = *(undefined4 *)(param_2 + 0x898);
  *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(param_2 + 0x89c);
  *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_2 + 0x8a0);
  *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_2 + 0x8a4);
  *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(param_2 + 0x8a8);
  *(undefined4 *)(param_1 + 0x8ac) = *(undefined4 *)(param_2 + 0x8ac);
  *(undefined4 *)(param_1 + 0x8b0) = *(undefined4 *)(param_2 + 0x8b0);
  *(undefined4 *)(param_1 + 0x8b4) = *(undefined4 *)(param_2 + 0x8b4);
  *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_2 + 0x8b8);
  *(undefined4 *)(param_1 + 0x8bc) = *(undefined4 *)(param_2 + 0x8bc);
  *(undefined4 *)(param_1 + 0x8c0) = *(undefined4 *)(param_2 + 0x8c0);
  *(undefined4 *)(param_1 + 0x8c4) = *(undefined4 *)(param_2 + 0x8c4);
  *(undefined4 *)(param_1 + 0x8c8) = *(undefined4 *)(param_2 + 0x8c8);
  *(undefined4 *)(param_1 + 0x8cc) = *(undefined4 *)(param_2 + 0x8cc);
  *(undefined4 *)(param_1 + 0x8d0) = *(undefined4 *)(param_2 + 0x8d0);
  *(undefined4 *)(param_1 + 0x8d4) = *(undefined4 *)(param_2 + 0x8d4);
  *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(param_2 + 0x8d8);
  *(undefined4 *)(param_1 + 0x8dc) = *(undefined4 *)(param_2 + 0x8dc);
  *(undefined4 *)(param_1 + 0x8e0) = *(undefined4 *)(param_2 + 0x8e0);
  *(undefined4 *)(param_1 + 0x8e4) = *(undefined4 *)(param_2 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(param_2 + 0x8e8);
  *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(param_2 + 0x8ec);
  *(undefined4 *)(param_1 + 0x8f0) = *(undefined4 *)(param_2 + 0x8f0);
  *(undefined4 *)(param_1 + 0x8f4) = *(undefined4 *)(param_2 + 0x8f4);
  *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_2 + 0x8f8);
  *(undefined4 *)(param_1 + 0x8fc) = *(undefined4 *)(param_2 + 0x8fc);
  *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(param_2 + 0x900);
  *(undefined4 *)(param_1 + 0x904) = *(undefined4 *)(param_2 + 0x904);
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_2 + 0x908);
  *(undefined4 *)(param_1 + 0x90c) = *(undefined4 *)(param_2 + 0x90c);
  *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(param_2 + 0x910);
  *(undefined4 *)(param_1 + 0x914) = *(undefined4 *)(param_2 + 0x914);
  *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(param_2 + 0x918);
  *(undefined4 *)(param_1 + 0x91c) = *(undefined4 *)(param_2 + 0x91c);
  *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_2 + 0x920);
  *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(param_2 + 0x924);
  *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(param_2 + 0x928);
  *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(param_2 + 0x92c);
  *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(param_2 + 0x930);
  *(undefined4 *)(param_1 + 0x934) = *(undefined4 *)(param_2 + 0x934);
  *(undefined4 *)(param_1 + 0x938) = *(undefined4 *)(param_2 + 0x938);
  *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_2 + 0x93c);
  *(undefined4 *)(param_1 + 0x940) = *(undefined4 *)(param_2 + 0x940);
  *(undefined4 *)(param_1 + 0x944) = *(undefined4 *)(param_2 + 0x944);
  *(undefined4 *)(param_1 + 0x948) = *(undefined4 *)(param_2 + 0x948);
  *(undefined4 *)(param_1 + 0x94c) = *(undefined4 *)(param_2 + 0x94c);
  *(undefined4 *)(param_1 + 0x950) = *(undefined4 *)(param_2 + 0x950);
  *(undefined4 *)(param_1 + 0x954) = *(undefined4 *)(param_2 + 0x954);
  *(undefined4 *)(param_1 + 0x958) = *(undefined4 *)(param_2 + 0x958);
  *(undefined4 *)(param_1 + 0x95c) = *(undefined4 *)(param_2 + 0x95c);
  *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_2 + 0x960);
  *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_2 + 0x964);
  *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_2 + 0x968);
  *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_2 + 0x96c);
  *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(param_2 + 0x970);
  *(undefined4 *)(param_1 + 0x974) = *(undefined4 *)(param_2 + 0x974);
  *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(param_2 + 0x978);
  *(undefined4 *)(param_1 + 0x97c) = *(undefined4 *)(param_2 + 0x97c);
  *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(param_2 + 0x980);
  *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(param_2 + 0x984);
  *(undefined4 *)(param_1 + 0x988) = *(undefined4 *)(param_2 + 0x988);
  *(undefined4 *)(param_1 + 0x98c) = *(undefined4 *)(param_2 + 0x98c);
  *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(param_2 + 0x990);
  *(undefined4 *)(param_1 + 0x994) = *(undefined4 *)(param_2 + 0x994);
  *(undefined4 *)(param_1 + 0x998) = *(undefined4 *)(param_2 + 0x998);
  *(undefined4 *)(param_1 + 0x99c) = *(undefined4 *)(param_2 + 0x99c);
  *(undefined4 *)(param_1 + 0x9a0) = *(undefined4 *)(param_2 + 0x9a0);
  *(undefined4 *)(param_1 + 0x9a4) = *(undefined4 *)(param_2 + 0x9a4);
  *(undefined4 *)(param_1 + 0x9a8) = *(undefined4 *)(param_2 + 0x9a8);
  *(undefined4 *)(param_1 + 0x9ac) = *(undefined4 *)(param_2 + 0x9ac);
  *(undefined4 *)(param_1 + 0x9b0) = *(undefined4 *)(param_2 + 0x9b0);
  *(undefined4 *)(param_1 + 0x9b4) = *(undefined4 *)(param_2 + 0x9b4);
  *(undefined4 *)(param_1 + 0x9b8) = *(undefined4 *)(param_2 + 0x9b8);
  *(undefined4 *)(param_1 + 0x9bc) = *(undefined4 *)(param_2 + 0x9bc);
  *(undefined4 *)(param_1 + 0x9c0) = *(undefined4 *)(param_2 + 0x9c0);
  *(undefined4 *)(param_1 + 0x9c4) = *(undefined4 *)(param_2 + 0x9c4);
  *(undefined4 *)(param_1 + 0x9c8) = *(undefined4 *)(param_2 + 0x9c8);
  *(undefined4 *)(param_1 + 0x9cc) = *(undefined4 *)(param_2 + 0x9cc);
  *(undefined4 *)(param_1 + 0x9d0) = *(undefined4 *)(param_2 + 0x9d0);
  *(undefined4 *)(param_1 + 0x9d4) = *(undefined4 *)(param_2 + 0x9d4);
  *(undefined4 *)(param_1 + 0x9d8) = *(undefined4 *)(param_2 + 0x9d8);
  *(undefined4 *)(param_1 + 0x9dc) = *(undefined4 *)(param_2 + 0x9dc);
  *(undefined4 *)(param_1 + 0x9e0) = *(undefined4 *)(param_2 + 0x9e0);
  *(undefined4 *)(param_1 + 0x9e4) = *(undefined4 *)(param_2 + 0x9e4);
  *(undefined4 *)(param_1 + 0x9e8) = *(undefined4 *)(param_2 + 0x9e8);
  *(undefined4 *)(param_1 + 0x9ec) = *(undefined4 *)(param_2 + 0x9ec);
  *(undefined4 *)(param_1 + 0x9f0) = *(undefined4 *)(param_2 + 0x9f0);
  *(undefined4 *)(param_1 + 0x9f4) = *(undefined4 *)(param_2 + 0x9f4);
  *(undefined4 *)(param_1 + 0x9f8) = *(undefined4 *)(param_2 + 0x9f8);
  *(undefined4 *)(param_1 + 0x9fc) = *(undefined4 *)(param_2 + 0x9fc);
  *(undefined4 *)(param_1 + 0xa00) = *(undefined4 *)(param_2 + 0xa00);
  *(undefined4 *)(param_1 + 0xa04) = *(undefined4 *)(param_2 + 0xa04);
  *(undefined4 *)(param_1 + 0xa08) = *(undefined4 *)(param_2 + 0xa08);
  *(undefined4 *)(param_1 + 0xa0c) = *(undefined4 *)(param_2 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa10) = *(undefined4 *)(param_2 + 0xa10);
  *(undefined4 *)(param_1 + 0xa14) = *(undefined4 *)(param_2 + 0xa14);
  *(undefined4 *)(param_1 + 0xa18) = *(undefined4 *)(param_2 + 0xa18);
  *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(param_2 + 0xa1c);
  *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(param_2 + 0xa20);
  *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_2 + 0xa24);
  *(undefined4 *)(param_1 + 0xa28) = *(undefined4 *)(param_2 + 0xa28);
  *(undefined4 *)(param_1 + 0xa2c) = *(undefined4 *)(param_2 + 0xa2c);
  *(undefined4 *)(param_1 + 0xa30) = *(undefined4 *)(param_2 + 0xa30);
  *(undefined4 *)(param_1 + 0xa34) = *(undefined4 *)(param_2 + 0xa34);
  *(undefined4 *)(param_1 + 0xa38) = *(undefined4 *)(param_2 + 0xa38);
  *(undefined4 *)(param_1 + 0xa3c) = *(undefined4 *)(param_2 + 0xa3c);
  *(undefined4 *)(param_1 + 0xa40) = *(undefined4 *)(param_2 + 0xa40);
  *(undefined4 *)(param_1 + 0xa44) = *(undefined4 *)(param_2 + 0xa44);
  *(undefined4 *)(param_1 + 0xa48) = *(undefined4 *)(param_2 + 0xa48);
  *(undefined4 *)(param_1 + 0xa4c) = *(undefined4 *)(param_2 + 0xa4c);
  *(undefined4 *)(param_1 + 0xa50) = *(undefined4 *)(param_2 + 0xa50);
  *(undefined4 *)(param_1 + 0xa54) = *(undefined4 *)(param_2 + 0xa54);
  *(undefined4 *)(param_1 + 0xa58) = *(undefined4 *)(param_2 + 0xa58);
  *(undefined4 *)(param_1 + 0xa5c) = *(undefined4 *)(param_2 + 0xa5c);
  *(undefined4 *)(param_1 + 0xa60) = *(undefined4 *)(param_2 + 0xa60);
  *(undefined4 *)(param_1 + 0xa64) = *(undefined4 *)(param_2 + 0xa64);
  *(undefined4 *)(param_1 + 0xa68) = *(undefined4 *)(param_2 + 0xa68);
  *(undefined4 *)(param_1 + 0xa6c) = *(undefined4 *)(param_2 + 0xa6c);
  *(undefined4 *)(param_1 + 0xa70) = *(undefined4 *)(param_2 + 0xa70);
  *(undefined4 *)(param_1 + 0xa74) = *(undefined4 *)(param_2 + 0xa74);
  *(undefined4 *)(param_1 + 0xa78) = *(undefined4 *)(param_2 + 0xa78);
  *(undefined4 *)(param_1 + 0xa7c) = *(undefined4 *)(param_2 + 0xa7c);
  *(undefined4 *)(param_1 + 0xa80) = *(undefined4 *)(param_2 + 0xa80);
  *(undefined4 *)(param_1 + 0xa84) = *(undefined4 *)(param_2 + 0xa84);
  *(undefined4 *)(param_1 + 0xa88) = *(undefined4 *)(param_2 + 0xa88);
  *(undefined4 *)(param_1 + 0xa8c) = *(undefined4 *)(param_2 + 0xa8c);
  *(undefined4 *)(param_1 + 0xa90) = *(undefined4 *)(param_2 + 0xa90);
  *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_2 + 0xa94);
  *(undefined4 *)(param_1 + 0xa98) = *(undefined4 *)(param_2 + 0xa98);
  *(undefined4 *)(param_1 + 0xa9c) = *(undefined4 *)(param_2 + 0xa9c);
  *(undefined4 *)(param_1 + 0xaa0) = *(undefined4 *)(param_2 + 0xaa0);
  *(undefined4 *)(param_1 + 0xaa4) = *(undefined4 *)(param_2 + 0xaa4);
  *(undefined4 *)(param_1 + 0xaa8) = *(undefined4 *)(param_2 + 0xaa8);
  *(undefined4 *)(param_1 + 0xaac) = *(undefined4 *)(param_2 + 0xaac);
  *(undefined4 *)(param_1 + 0xab0) = *(undefined4 *)(param_2 + 0xab0);
  *(undefined4 *)(param_1 + 0xab4) = *(undefined4 *)(param_2 + 0xab4);
  *(undefined4 *)(param_1 + 0xab8) = *(undefined4 *)(param_2 + 0xab8);
  *(undefined4 *)(param_1 + 0xabc) = *(undefined4 *)(param_2 + 0xabc);
  *(undefined4 *)(param_1 + 0xac0) = *(undefined4 *)(param_2 + 0xac0);
  *(undefined4 *)(param_1 + 0xac4) = *(undefined4 *)(param_2 + 0xac4);
  *(undefined4 *)(param_1 + 0xac8) = *(undefined4 *)(param_2 + 0xac8);
  *(undefined4 *)(param_1 + 0xacc) = *(undefined4 *)(param_2 + 0xacc);
  *(undefined4 *)(param_1 + 0xad0) = *(undefined4 *)(param_2 + 0xad0);
  *(undefined4 *)(param_1 + 0xad4) = *(undefined4 *)(param_2 + 0xad4);
  *(undefined4 *)(param_1 + 0xad8) = *(undefined4 *)(param_2 + 0xad8);
  *(undefined4 *)(param_1 + 0xadc) = *(undefined4 *)(param_2 + 0xadc);
  *(undefined4 *)(param_1 + 0xae0) = *(undefined4 *)(param_2 + 0xae0);
  *(undefined4 *)(param_1 + 0xae4) = *(undefined4 *)(param_2 + 0xae4);
  *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(param_2 + 0xae8);
  *(undefined4 *)(param_1 + 0xaec) = *(undefined4 *)(param_2 + 0xaec);
  *(undefined4 *)(param_1 + 0xaf0) = *(undefined4 *)(param_2 + 0xaf0);
  *(undefined4 *)(param_1 + 0xaf4) = *(undefined4 *)(param_2 + 0xaf4);
  *(undefined4 *)(param_1 + 0xaf8) = *(undefined4 *)(param_2 + 0xaf8);
  *(undefined4 *)(param_1 + 0xafc) = *(undefined4 *)(param_2 + 0xafc);
  *(undefined4 *)(param_1 + 0xb00) = *(undefined4 *)(param_2 + 0xb00);
  *(undefined4 *)(param_1 + 0xb04) = *(undefined4 *)(param_2 + 0xb04);
  *(undefined4 *)(param_1 + 0xb08) = *(undefined4 *)(param_2 + 0xb08);
  *(undefined4 *)(param_1 + 0xb0c) = *(undefined4 *)(param_2 + 0xb0c);
  *(undefined4 *)(param_1 + 0xb10) = *(undefined4 *)(param_2 + 0xb10);
  *(undefined4 *)(param_1 + 0xb14) = *(undefined4 *)(param_2 + 0xb14);
  *(undefined4 *)(param_1 + 0xb18) = *(undefined4 *)(param_2 + 0xb18);
  *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(param_2 + 0xb1c);
  *(undefined4 *)(param_1 + 0xb20) = *(undefined4 *)(param_2 + 0xb20);
  *(undefined4 *)(param_1 + 0xb24) = *(undefined4 *)(param_2 + 0xb24);
  *(undefined4 *)(param_1 + 0xb28) = *(undefined4 *)(param_2 + 0xb28);
  *(undefined4 *)(param_1 + 0xb2c) = *(undefined4 *)(param_2 + 0xb2c);
  *(undefined4 *)(param_1 + 0xb30) = *(undefined4 *)(param_2 + 0xb30);
  *(undefined4 *)(param_1 + 0xb34) = *(undefined4 *)(param_2 + 0xb34);
  *(undefined4 *)(param_1 + 0xb38) = *(undefined4 *)(param_2 + 0xb38);
  *(undefined4 *)(param_1 + 0xb3c) = *(undefined4 *)(param_2 + 0xb3c);
  *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(param_2 + 0xb40);
  *(undefined4 *)(param_1 + 0xb44) = *(undefined4 *)(param_2 + 0xb44);
  *(undefined4 *)(param_1 + 0xb48) = *(undefined4 *)(param_2 + 0xb48);
  *(undefined4 *)(param_1 + 0xb4c) = *(undefined4 *)(param_2 + 0xb4c);
  *(undefined4 *)(param_1 + 0xb50) = *(undefined4 *)(param_2 + 0xb50);
  *(undefined4 *)(param_1 + 0xb54) = *(undefined4 *)(param_2 + 0xb54);
  *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(param_2 + 0xb58);
  *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(param_2 + 0xb5c);
  *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_2 + 0xb60);
  *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_2 + 0xb64);
  *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_2 + 0xb68);
  *(undefined4 *)(param_1 + 0xb6c) = *(undefined4 *)(param_2 + 0xb6c);
  *(undefined4 *)(param_1 + 0xb70) = *(undefined4 *)(param_2 + 0xb70);
  *(undefined4 *)(param_1 + 0xb74) = *(undefined4 *)(param_2 + 0xb74);
  *(undefined4 *)(param_1 + 0xb78) = *(undefined4 *)(param_2 + 0xb78);
  *(undefined4 *)(param_1 + 0xb7c) = *(undefined4 *)(param_2 + 0xb7c);
  *(undefined4 *)(param_1 + 0xb80) = *(undefined4 *)(param_2 + 0xb80);
  *(undefined4 *)(param_1 + 0xb84) = *(undefined4 *)(param_2 + 0xb84);
  *(undefined4 *)(param_1 + 0xb88) = *(undefined4 *)(param_2 + 0xb88);
  *(undefined4 *)(param_1 + 0xb8c) = *(undefined4 *)(param_2 + 0xb8c);
  *(undefined4 *)(param_1 + 0xb90) = *(undefined4 *)(param_2 + 0xb90);
  *(undefined4 *)(param_1 + 0xb94) = *(undefined4 *)(param_2 + 0xb94);
  *(undefined4 *)(param_1 + 0xb98) = *(undefined4 *)(param_2 + 0xb98);
  *(undefined4 *)(param_1 + 0xb9c) = *(undefined4 *)(param_2 + 0xb9c);
  *(undefined4 *)(param_1 + 0xba0) = *(undefined4 *)(param_2 + 0xba0);
  *(undefined4 *)(param_1 + 0xba4) = *(undefined4 *)(param_2 + 0xba4);
  *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(param_2 + 0xba8);
  *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_2 + 0xbac);
  *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_2 + 0xbb0);
  *(undefined4 *)(param_1 + 0xbb4) = *(undefined4 *)(param_2 + 0xbb4);
  *(undefined4 *)(param_1 + 3000) = *(undefined4 *)(param_2 + 3000);
  *(undefined4 *)(param_1 + 0xbbc) = *(undefined4 *)(param_2 + 0xbbc);
  *(undefined4 *)(param_1 + 0xbc0) = *(undefined4 *)(param_2 + 0xbc0);
  *(undefined4 *)(param_1 + 0xbc4) = *(undefined4 *)(param_2 + 0xbc4);
  *(undefined4 *)(param_1 + 0xbc8) = *(undefined4 *)(param_2 + 0xbc8);
  *(undefined4 *)(param_1 + 0xbcc) = *(undefined4 *)(param_2 + 0xbcc);
  *(undefined4 *)(param_1 + 0xbd0) = *(undefined4 *)(param_2 + 0xbd0);
  *(undefined4 *)(param_1 + 0xbd4) = *(undefined4 *)(param_2 + 0xbd4);
  *(undefined4 *)(param_1 + 0xbd8) = *(undefined4 *)(param_2 + 0xbd8);
  *(undefined4 *)(param_1 + 0xbdc) = *(undefined4 *)(param_2 + 0xbdc);
  *(undefined4 *)(param_1 + 0xbe0) = *(undefined4 *)(param_2 + 0xbe0);
  *(undefined4 *)(param_1 + 0xbe4) = *(undefined4 *)(param_2 + 0xbe4);
  *(undefined4 *)(param_1 + 0xbe8) = *(undefined4 *)(param_2 + 0xbe8);
  *(undefined4 *)(param_1 + 0xbec) = *(undefined4 *)(param_2 + 0xbec);
  *(undefined4 *)(param_1 + 0xbf0) = *(undefined4 *)(param_2 + 0xbf0);
  *(undefined4 *)(param_1 + 0xbf4) = *(undefined4 *)(param_2 + 0xbf4);
  *(undefined4 *)(param_1 + 0xbf8) = *(undefined4 *)(param_2 + 0xbf8);
  *(undefined4 *)(param_1 + 0xbfc) = *(undefined4 *)(param_2 + 0xbfc);
  *(undefined4 *)(param_1 + 0xc00) = *(undefined4 *)(param_2 + 0xc00);
  *(undefined4 *)(param_1 + 0xc04) = *(undefined4 *)(param_2 + 0xc04);
  *(undefined4 *)(param_1 + 0xc08) = *(undefined4 *)(param_2 + 0xc08);
  *(undefined4 *)(param_1 + 0xc0c) = *(undefined4 *)(param_2 + 0xc0c);
  *(undefined4 *)(param_1 + 0xc10) = *(undefined4 *)(param_2 + 0xc10);
  *(undefined4 *)(param_1 + 0xc14) = *(undefined4 *)(param_2 + 0xc14);
  *(undefined4 *)(param_1 + 0xc18) = *(undefined4 *)(param_2 + 0xc18);
  *(undefined4 *)(param_1 + 0xc1c) = *(undefined4 *)(param_2 + 0xc1c);
  *(undefined4 *)(param_1 + 0xc20) = *(undefined4 *)(param_2 + 0xc20);
  *(undefined4 *)(param_1 + 0xc24) = *(undefined4 *)(param_2 + 0xc24);
  *(undefined4 *)(param_1 + 0xc28) = *(undefined4 *)(param_2 + 0xc28);
  *(undefined4 *)(param_1 + 0xc2c) = *(undefined4 *)(param_2 + 0xc2c);
  *(undefined4 *)(param_1 + 0xc30) = *(undefined4 *)(param_2 + 0xc30);
  *(undefined4 *)(param_1 + 0xc34) = *(undefined4 *)(param_2 + 0xc34);
  *(undefined4 *)(param_1 + 0xc38) = *(undefined4 *)(param_2 + 0xc38);
  *(undefined4 *)(param_1 + 0xc3c) = *(undefined4 *)(param_2 + 0xc3c);
  *(undefined4 *)(param_1 + 0xc40) = *(undefined4 *)(param_2 + 0xc40);
  *(undefined4 *)(param_1 + 0xc44) = *(undefined4 *)(param_2 + 0xc44);
  *(undefined4 *)(param_1 + 0xc48) = *(undefined4 *)(param_2 + 0xc48);
  *(undefined4 *)(param_1 + 0xc4c) = *(undefined4 *)(param_2 + 0xc4c);
  *(undefined4 *)(param_1 + 0xc50) = *(undefined4 *)(param_2 + 0xc50);
  *(undefined4 *)(param_1 + 0xc54) = *(undefined4 *)(param_2 + 0xc54);
  *(undefined4 *)(param_1 + 0xc58) = *(undefined4 *)(param_2 + 0xc58);
  *(undefined4 *)(param_1 + 0xc5c) = *(undefined4 *)(param_2 + 0xc5c);
  *(undefined4 *)(param_1 + 0xc60) = *(undefined4 *)(param_2 + 0xc60);
  *(undefined4 *)(param_1 + 0xc64) = *(undefined4 *)(param_2 + 0xc64);
  *(undefined4 *)(param_1 + 0xc68) = *(undefined4 *)(param_2 + 0xc68);
  *(undefined4 *)(param_1 + 0xc6c) = *(undefined4 *)(param_2 + 0xc6c);
  *(undefined4 *)(param_1 + 0xc70) = *(undefined4 *)(param_2 + 0xc70);
  *(undefined4 *)(param_1 + 0xc74) = *(undefined4 *)(param_2 + 0xc74);
  *(undefined4 *)(param_1 + 0xc78) = *(undefined4 *)(param_2 + 0xc78);
  *(undefined4 *)(param_1 + 0xc7c) = *(undefined4 *)(param_2 + 0xc7c);
  *(undefined4 *)(param_1 + 0xc80) = *(undefined4 *)(param_2 + 0xc80);
  *(undefined4 *)(param_1 + 0xc84) = *(undefined4 *)(param_2 + 0xc84);
  *(undefined4 *)(param_1 + 0xc88) = *(undefined4 *)(param_2 + 0xc88);
  *(undefined4 *)(param_1 + 0xc8c) = *(undefined4 *)(param_2 + 0xc8c);
  *(undefined4 *)(param_1 + 0xc90) = *(undefined4 *)(param_2 + 0xc90);
  *(undefined4 *)(param_1 + 0xc94) = *(undefined4 *)(param_2 + 0xc94);
  *(undefined4 *)(param_1 + 0xc98) = *(undefined4 *)(param_2 + 0xc98);
  *(undefined4 *)(param_1 + 0xc9c) = *(undefined4 *)(param_2 + 0xc9c);
  *(undefined4 *)(param_1 + 0xca0) = *(undefined4 *)(param_2 + 0xca0);
  *(undefined4 *)(param_1 + 0xca4) = *(undefined4 *)(param_2 + 0xca4);
  *(undefined4 *)(param_1 + 0xca8) = *(undefined4 *)(param_2 + 0xca8);
  *(undefined4 *)(param_1 + 0xcac) = *(undefined4 *)(param_2 + 0xcac);
  *(undefined4 *)(param_1 + 0xcb0) = *(undefined4 *)(param_2 + 0xcb0);
  *(undefined4 *)(param_1 + 0xcb4) = *(undefined4 *)(param_2 + 0xcb4);
  *(undefined4 *)(param_1 + 0xcb8) = *(undefined4 *)(param_2 + 0xcb8);
  *(undefined4 *)(param_1 + 0xcbc) = *(undefined4 *)(param_2 + 0xcbc);
  *(undefined4 *)(param_1 + 0xcc0) = *(undefined4 *)(param_2 + 0xcc0);
  *(undefined4 *)(param_1 + 0xcc4) = *(undefined4 *)(param_2 + 0xcc4);
  *(undefined4 *)(param_1 + 0xcc8) = *(undefined4 *)(param_2 + 0xcc8);
  *(undefined4 *)(param_1 + 0xccc) = *(undefined4 *)(param_2 + 0xccc);
  *(undefined4 *)(param_1 + 0xcd0) = *(undefined4 *)(param_2 + 0xcd0);
  *(undefined4 *)(param_1 + 0xcd4) = *(undefined4 *)(param_2 + 0xcd4);
  *(undefined4 *)(param_1 + 0xcd8) = *(undefined4 *)(param_2 + 0xcd8);
  *(undefined4 *)(param_1 + 0xcdc) = *(undefined4 *)(param_2 + 0xcdc);
  *(undefined4 *)(param_1 + 0xce0) = *(undefined4 *)(param_2 + 0xce0);
  *(undefined4 *)(param_1 + 0xce4) = *(undefined4 *)(param_2 + 0xce4);
  *(undefined4 *)(param_1 + 0xce8) = *(undefined4 *)(param_2 + 0xce8);
  *(undefined4 *)(param_1 + 0xcec) = *(undefined4 *)(param_2 + 0xcec);
  *(undefined4 *)(param_1 + 0xcf0) = *(undefined4 *)(param_2 + 0xcf0);
  *(undefined4 *)(param_1 + 0xcf4) = *(undefined4 *)(param_2 + 0xcf4);
  *(undefined4 *)(param_1 + 0xcf8) = *(undefined4 *)(param_2 + 0xcf8);
  *(undefined4 *)(param_1 + 0xcfc) = *(undefined4 *)(param_2 + 0xcfc);
  *(undefined4 *)(param_1 + 0xd00) = *(undefined4 *)(param_2 + 0xd00);
  *(undefined4 *)(param_1 + 0xd04) = *(undefined4 *)(param_2 + 0xd04);
  *(undefined4 *)(param_1 + 0xd08) = *(undefined4 *)(param_2 + 0xd08);
  *(undefined4 *)(param_1 + 0xd0c) = *(undefined4 *)(param_2 + 0xd0c);
  *(undefined4 *)(param_1 + 0xd10) = *(undefined4 *)(param_2 + 0xd10);
  *(undefined4 *)(param_1 + 0xd14) = *(undefined4 *)(param_2 + 0xd14);
  *(undefined4 *)(param_1 + 0xd18) = *(undefined4 *)(param_2 + 0xd18);
  *(undefined4 *)(param_1 + 0xd1c) = *(undefined4 *)(param_2 + 0xd1c);
  *(undefined4 *)(param_1 + 0xd20) = *(undefined4 *)(param_2 + 0xd20);
  *(undefined4 *)(param_1 + 0xd24) = *(undefined4 *)(param_2 + 0xd24);
  *(undefined4 *)(param_1 + 0xd28) = *(undefined4 *)(param_2 + 0xd28);
  *(undefined4 *)(param_1 + 0xd2c) = *(undefined4 *)(param_2 + 0xd2c);
  *(undefined4 *)(param_1 + 0xd30) = *(undefined4 *)(param_2 + 0xd30);
  *(undefined4 *)(param_1 + 0xd34) = *(undefined4 *)(param_2 + 0xd34);
  *(undefined4 *)(param_1 + 0xd38) = *(undefined4 *)(param_2 + 0xd38);
  *(undefined4 *)(param_1 + 0xd3c) = *(undefined4 *)(param_2 + 0xd3c);
  *(undefined4 *)(param_1 + 0xd40) = *(undefined4 *)(param_2 + 0xd40);
  *(undefined4 *)(param_1 + 0xd44) = *(undefined4 *)(param_2 + 0xd44);
  *(undefined4 *)(param_1 + 0xd48) = *(undefined4 *)(param_2 + 0xd48);
  *(undefined4 *)(param_1 + 0xd4c) = *(undefined4 *)(param_2 + 0xd4c);
  *(undefined4 *)(param_1 + 0xd50) = *(undefined4 *)(param_2 + 0xd50);
  *(undefined4 *)(param_1 + 0xd54) = *(undefined4 *)(param_2 + 0xd54);
  *(undefined4 *)(param_1 + 0xd58) = *(undefined4 *)(param_2 + 0xd58);
  *(undefined4 *)(param_1 + 0xd5c) = *(undefined4 *)(param_2 + 0xd5c);
  *(undefined4 *)(param_1 + 0xd60) = *(undefined4 *)(param_2 + 0xd60);
  *(undefined4 *)(param_1 + 0xd64) = *(undefined4 *)(param_2 + 0xd64);
  *(undefined4 *)(param_1 + 0xd68) = *(undefined4 *)(param_2 + 0xd68);
  *(undefined4 *)(param_1 + 0xd6c) = *(undefined4 *)(param_2 + 0xd6c);
  *(undefined4 *)(param_1 + 0xd70) = *(undefined4 *)(param_2 + 0xd70);
  *(undefined4 *)(param_1 + 0xd74) = *(undefined4 *)(param_2 + 0xd74);
  *(undefined4 *)(param_1 + 0xd78) = *(undefined4 *)(param_2 + 0xd78);
  *(undefined4 *)(param_1 + 0xd7c) = *(undefined4 *)(param_2 + 0xd7c);
  *(undefined4 *)(param_1 + 0xd80) = *(undefined4 *)(param_2 + 0xd80);
  *(undefined4 *)(param_1 + 0xd84) = *(undefined4 *)(param_2 + 0xd84);
  *(undefined4 *)(param_1 + 0xd88) = *(undefined4 *)(param_2 + 0xd88);
  *(undefined4 *)(param_1 + 0xd8c) = *(undefined4 *)(param_2 + 0xd8c);
  *(undefined4 *)(param_1 + 0xd90) = *(undefined4 *)(param_2 + 0xd90);
  *(undefined4 *)(param_1 + 0xd94) = *(undefined4 *)(param_2 + 0xd94);
  *(undefined4 *)(param_1 + 0xd98) = *(undefined4 *)(param_2 + 0xd98);
  *(undefined4 *)(param_1 + 0xd9c) = *(undefined4 *)(param_2 + 0xd9c);
  *(undefined4 *)(param_1 + 0xda0) = *(undefined4 *)(param_2 + 0xda0);
  *(undefined4 *)(param_1 + 0xda4) = *(undefined4 *)(param_2 + 0xda4);
  *(undefined4 *)(param_1 + 0xda8) = *(undefined4 *)(param_2 + 0xda8);
  *(undefined4 *)(param_1 + 0xdac) = *(undefined4 *)(param_2 + 0xdac);
  *(undefined4 *)(param_1 + 0xdb0) = *(undefined4 *)(param_2 + 0xdb0);
  *(undefined4 *)(param_1 + 0xdb4) = *(undefined4 *)(param_2 + 0xdb4);
  *(undefined4 *)(param_1 + 0xdb8) = *(undefined4 *)(param_2 + 0xdb8);
  *(undefined4 *)(param_1 + 0xdbc) = *(undefined4 *)(param_2 + 0xdbc);
  *(undefined4 *)(param_1 + 0xdc0) = *(undefined4 *)(param_2 + 0xdc0);
  *(undefined4 *)(param_1 + 0xdc4) = *(undefined4 *)(param_2 + 0xdc4);
  *(undefined4 *)(param_1 + 0xdc8) = *(undefined4 *)(param_2 + 0xdc8);
  *(undefined4 *)(param_1 + 0xdcc) = *(undefined4 *)(param_2 + 0xdcc);
  *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_2 + 0xdd0);
  *(undefined4 *)(param_1 + 0xdd4) = *(undefined4 *)(param_2 + 0xdd4);
  *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_2 + 0xdd8);
  *(undefined4 *)(param_1 + 0xddc) = *(undefined4 *)(param_2 + 0xddc);
  *(undefined4 *)(param_1 + 0xde0) = *(undefined4 *)(param_2 + 0xde0);
  *(undefined4 *)(param_1 + 0xde4) = *(undefined4 *)(param_2 + 0xde4);
  *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_2 + 0xde8);
  *(undefined4 *)(param_1 + 0xdec) = *(undefined4 *)(param_2 + 0xdec);
  *(undefined4 *)(param_1 + 0xdf0) = *(undefined4 *)(param_2 + 0xdf0);
  *(undefined4 *)(param_1 + 0xdf4) = *(undefined4 *)(param_2 + 0xdf4);
  *(undefined4 *)(param_1 + 0xdf8) = *(undefined4 *)(param_2 + 0xdf8);
  *(undefined4 *)(param_1 + 0xdfc) = *(undefined4 *)(param_2 + 0xdfc);
  *(undefined4 *)(param_1 + 0xe00) = *(undefined4 *)(param_2 + 0xe00);
  *(undefined4 *)(param_1 + 0xe04) = *(undefined4 *)(param_2 + 0xe04);
  *(undefined4 *)(param_1 + 0xe08) = *(undefined4 *)(param_2 + 0xe08);
  *(undefined4 *)(param_1 + 0xe0c) = *(undefined4 *)(param_2 + 0xe0c);
  *(undefined4 *)(param_1 + 0xe10) = *(undefined4 *)(param_2 + 0xe10);
  *(undefined4 *)(param_1 + 0xe14) = *(undefined4 *)(param_2 + 0xe14);
  *(undefined4 *)(param_1 + 0xe18) = *(undefined4 *)(param_2 + 0xe18);
  *(undefined4 *)(param_1 + 0xe1c) = *(undefined4 *)(param_2 + 0xe1c);
  *(undefined4 *)(param_1 + 0xe20) = *(undefined4 *)(param_2 + 0xe20);
  *(undefined4 *)(param_1 + 0xe24) = *(undefined4 *)(param_2 + 0xe24);
  *(undefined4 *)(param_1 + 0xe28) = *(undefined4 *)(param_2 + 0xe28);
  *(undefined4 *)(param_1 + 0xe2c) = *(undefined4 *)(param_2 + 0xe2c);
  *(undefined4 *)(param_1 + 0xe30) = *(undefined4 *)(param_2 + 0xe30);
  *(undefined4 *)(param_1 + 0xe34) = *(undefined4 *)(param_2 + 0xe34);
  *(undefined4 *)(param_1 + 0xe38) = *(undefined4 *)(param_2 + 0xe38);
  *(undefined4 *)(param_1 + 0xe3c) = *(undefined4 *)(param_2 + 0xe3c);
  *(undefined4 *)(param_1 + 0xe40) = *(undefined4 *)(param_2 + 0xe40);
  *(undefined4 *)(param_1 + 0xe44) = *(undefined4 *)(param_2 + 0xe44);
  *(undefined4 *)(param_1 + 0xe48) = *(undefined4 *)(param_2 + 0xe48);
  *(undefined4 *)(param_1 + 0xe4c) = *(undefined4 *)(param_2 + 0xe4c);
  *(undefined4 *)(param_1 + 0xe50) = *(undefined4 *)(param_2 + 0xe50);
  *(undefined4 *)(param_1 + 0xe54) = *(undefined4 *)(param_2 + 0xe54);
  *(undefined4 *)(param_1 + 0xe58) = *(undefined4 *)(param_2 + 0xe58);
  *(undefined4 *)(param_1 + 0xe5c) = *(undefined4 *)(param_2 + 0xe5c);
  *(undefined4 *)(param_1 + 0xe60) = *(undefined4 *)(param_2 + 0xe60);
  *(undefined4 *)(param_1 + 0xe64) = *(undefined4 *)(param_2 + 0xe64);
  *(undefined4 *)(param_1 + 0xe68) = *(undefined4 *)(param_2 + 0xe68);
  *(undefined4 *)(param_1 + 0xe6c) = *(undefined4 *)(param_2 + 0xe6c);
  *(undefined4 *)(param_1 + 0xe70) = *(undefined4 *)(param_2 + 0xe70);
  *(undefined4 *)(param_1 + 0xe74) = *(undefined4 *)(param_2 + 0xe74);
  *(undefined4 *)(param_1 + 0xe78) = *(undefined4 *)(param_2 + 0xe78);
  *(undefined4 *)(param_1 + 0xe7c) = *(undefined4 *)(param_2 + 0xe7c);
  *(undefined4 *)(param_1 + 0xe80) = *(undefined4 *)(param_2 + 0xe80);
  *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_2 + 0xe84);
  *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_2 + 0xe88);
  *(undefined4 *)(param_1 + 0xe8c) = *(undefined4 *)(param_2 + 0xe8c);
  *(undefined4 *)(param_1 + 0xe90) = *(undefined4 *)(param_2 + 0xe90);
  *(undefined4 *)(param_1 + 0xe94) = *(undefined4 *)(param_2 + 0xe94);
  *(undefined4 *)(param_1 + 0xe98) = *(undefined4 *)(param_2 + 0xe98);
  *(undefined4 *)(param_1 + 0xe9c) = *(undefined4 *)(param_2 + 0xe9c);
  *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_2 + 0xea0);
  *(undefined4 *)(param_1 + 0xea4) = *(undefined4 *)(param_2 + 0xea4);
  *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_2 + 0xea8);
  *(undefined4 *)(param_1 + 0xeac) = *(undefined4 *)(param_2 + 0xeac);
  *(undefined4 *)(param_1 + 0xeb0) = *(undefined4 *)(param_2 + 0xeb0);
  *(undefined4 *)(param_1 + 0xeb4) = *(undefined4 *)(param_2 + 0xeb4);
  *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_2 + 0xeb8);
  *(undefined4 *)(param_1 + 0xebc) = *(undefined4 *)(param_2 + 0xebc);
  *(undefined4 *)(param_1 + 0xec0) = *(undefined4 *)(param_2 + 0xec0);
  *(undefined4 *)(param_1 + 0xec4) = *(undefined4 *)(param_2 + 0xec4);
  *(undefined4 *)(param_1 + 0xec8) = *(undefined4 *)(param_2 + 0xec8);
  *(undefined4 *)(param_1 + 0xecc) = *(undefined4 *)(param_2 + 0xecc);
  *(undefined4 *)(param_1 + 0xed0) = *(undefined4 *)(param_2 + 0xed0);
  *(undefined4 *)(param_1 + 0xed4) = *(undefined4 *)(param_2 + 0xed4);
  *(undefined4 *)(param_1 + 0xed8) = *(undefined4 *)(param_2 + 0xed8);
  *(undefined4 *)(param_1 + 0xedc) = *(undefined4 *)(param_2 + 0xedc);
  *(undefined4 *)(param_1 + 0xee0) = *(undefined4 *)(param_2 + 0xee0);
  *(undefined4 *)(param_1 + 0xee4) = *(undefined4 *)(param_2 + 0xee4);
  *(undefined4 *)(param_1 + 0xee8) = *(undefined4 *)(param_2 + 0xee8);
  *(undefined4 *)(param_1 + 0xeec) = *(undefined4 *)(param_2 + 0xeec);
  *(undefined4 *)(param_1 + 0xef0) = *(undefined4 *)(param_2 + 0xef0);
  *(undefined4 *)(param_1 + 0xef4) = *(undefined4 *)(param_2 + 0xef4);
  *(undefined4 *)(param_1 + 0xef8) = *(undefined4 *)(param_2 + 0xef8);
  *(undefined4 *)(param_1 + 0xefc) = *(undefined4 *)(param_2 + 0xefc);
  *(undefined4 *)(param_1 + 0xf00) = *(undefined4 *)(param_2 + 0xf00);
  *(undefined4 *)(param_1 + 0xf04) = *(undefined4 *)(param_2 + 0xf04);
  *(undefined4 *)(param_1 + 0xf08) = *(undefined4 *)(param_2 + 0xf08);
  *(undefined4 *)(param_1 + 0xf0c) = *(undefined4 *)(param_2 + 0xf0c);
  *(undefined4 *)(param_1 + 0xf10) = *(undefined4 *)(param_2 + 0xf10);
  *(undefined4 *)(param_1 + 0xf14) = *(undefined4 *)(param_2 + 0xf14);
  *(undefined4 *)(param_1 + 0xf18) = *(undefined4 *)(param_2 + 0xf18);
  *(undefined4 *)(param_1 + 0xf1c) = *(undefined4 *)(param_2 + 0xf1c);
  *(undefined4 *)(param_1 + 0xf20) = *(undefined4 *)(param_2 + 0xf20);
  *(undefined4 *)(param_1 + 0xf24) = *(undefined4 *)(param_2 + 0xf24);
  *(undefined4 *)(param_1 + 0xf28) = *(undefined4 *)(param_2 + 0xf28);
  *(undefined4 *)(param_1 + 0xf2c) = *(undefined4 *)(param_2 + 0xf2c);
  *(undefined4 *)(param_1 + 0xf30) = *(undefined4 *)(param_2 + 0xf30);
  *(undefined4 *)(param_1 + 0xf34) = *(undefined4 *)(param_2 + 0xf34);
  *(undefined4 *)(param_1 + 0xf38) = *(undefined4 *)(param_2 + 0xf38);
  *(undefined4 *)(param_1 + 0xf3c) = *(undefined4 *)(param_2 + 0xf3c);
  *(undefined4 *)(param_1 + 0xf40) = *(undefined4 *)(param_2 + 0xf40);
  *(undefined4 *)(param_1 + 0xf44) = *(undefined4 *)(param_2 + 0xf44);
  *(undefined4 *)(param_1 + 0xf48) = *(undefined4 *)(param_2 + 0xf48);
  *(undefined4 *)(param_1 + 0xf4c) = *(undefined4 *)(param_2 + 0xf4c);
  *(undefined4 *)(param_1 + 0xf50) = *(undefined4 *)(param_2 + 0xf50);
  *(undefined4 *)(param_1 + 0xf54) = *(undefined4 *)(param_2 + 0xf54);
  *(undefined4 *)(param_1 + 0xf58) = *(undefined4 *)(param_2 + 0xf58);
  *(undefined4 *)(param_1 + 0xf5c) = *(undefined4 *)(param_2 + 0xf5c);
  *(undefined4 *)(param_1 + 0xf60) = *(undefined4 *)(param_2 + 0xf60);
  *(undefined4 *)(param_1 + 0xf64) = *(undefined4 *)(param_2 + 0xf64);
  *(undefined4 *)(param_1 + 0xf68) = *(undefined4 *)(param_2 + 0xf68);
  *(undefined4 *)(param_1 + 0xf6c) = *(undefined4 *)(param_2 + 0xf6c);
  *(undefined4 *)(param_1 + 0xf70) = *(undefined4 *)(param_2 + 0xf70);
  *(undefined4 *)(param_1 + 0xf74) = *(undefined4 *)(param_2 + 0xf74);
  *(undefined4 *)(param_1 + 0xf78) = *(undefined4 *)(param_2 + 0xf78);
  *(undefined4 *)(param_1 + 0xf7c) = *(undefined4 *)(param_2 + 0xf7c);
  *(undefined4 *)(param_1 + 0xf80) = *(undefined4 *)(param_2 + 0xf80);
  *(undefined4 *)(param_1 + 0xf84) = *(undefined4 *)(param_2 + 0xf84);
  *(undefined4 *)(param_1 + 0xf88) = *(undefined4 *)(param_2 + 0xf88);
  *(undefined4 *)(param_1 + 0xf8c) = *(undefined4 *)(param_2 + 0xf8c);
  *(undefined4 *)(param_1 + 0xf90) = *(undefined4 *)(param_2 + 0xf90);
  *(undefined4 *)(param_1 + 0xf94) = *(undefined4 *)(param_2 + 0xf94);
  *(undefined4 *)(param_1 + 0xf98) = *(undefined4 *)(param_2 + 0xf98);
  *(undefined4 *)(param_1 + 0xf9c) = *(undefined4 *)(param_2 + 0xf9c);
  *(undefined4 *)(param_1 + 4000) = *(undefined4 *)(param_2 + 4000);
  *(undefined4 *)(param_1 + 0xfa4) = *(undefined4 *)(param_2 + 0xfa4);
  *(undefined4 *)(param_1 + 0xfa8) = *(undefined4 *)(param_2 + 0xfa8);
  *(undefined4 *)(param_1 + 0xfac) = *(undefined4 *)(param_2 + 0xfac);
  *(undefined4 *)(param_1 + 0xfb0) = *(undefined4 *)(param_2 + 0xfb0);
  *(undefined4 *)(param_1 + 0xfb4) = *(undefined4 *)(param_2 + 0xfb4);
  *(undefined4 *)(param_1 + 0xfb8) = *(undefined4 *)(param_2 + 0xfb8);
  *(undefined4 *)(param_1 + 0xfbc) = *(undefined4 *)(param_2 + 0xfbc);
  *(undefined4 *)(param_1 + 0xfc0) = *(undefined4 *)(param_2 + 0xfc0);
  *(undefined4 *)(param_1 + 0xfc4) = *(undefined4 *)(param_2 + 0xfc4);
  *(undefined4 *)(param_1 + 0xfc8) = *(undefined4 *)(param_2 + 0xfc8);
  *(undefined4 *)(param_1 + 0xfcc) = *(undefined4 *)(param_2 + 0xfcc);
  *(undefined4 *)(param_1 + 0xfd0) = *(undefined4 *)(param_2 + 0xfd0);
  *(undefined4 *)(param_1 + 0xfd4) = *(undefined4 *)(param_2 + 0xfd4);
  *(undefined4 *)(param_1 + 0xfd8) = *(undefined4 *)(param_2 + 0xfd8);
  *(undefined4 *)(param_1 + 0xfdc) = *(undefined4 *)(param_2 + 0xfdc);
  *(undefined4 *)(param_1 + 0xfe0) = *(undefined4 *)(param_2 + 0xfe0);
  *(undefined4 *)(param_1 + 0xfe4) = *(undefined4 *)(param_2 + 0xfe4);
  *(undefined4 *)(param_1 + 0xfe8) = *(undefined4 *)(param_2 + 0xfe8);
  *(undefined4 *)(param_1 + 0xfec) = *(undefined4 *)(param_2 + 0xfec);
  *(undefined4 *)(param_1 + 0xff0) = *(undefined4 *)(param_2 + 0xff0);
  *(undefined4 *)(param_1 + 0xff4) = *(undefined4 *)(param_2 + 0xff4);
  *(undefined4 *)(param_1 + 0xff8) = *(undefined4 *)(param_2 + 0xff8);
  *(undefined4 *)(param_1 + 0xffc) = *(undefined4 *)(param_2 + 0xffc);
  *(undefined4 *)(param_1 + 0x1000) = *(undefined4 *)(param_2 + 0x1000);
  *(undefined4 *)(param_1 + 0x1004) = *(undefined4 *)(param_2 + 0x1004);
  *(undefined4 *)(param_1 + 0x1008) = *(undefined4 *)(param_2 + 0x1008);
  pAVar3 = param_1 + 0x100c;
  iVar2 = (int)param_2 - (int)param_1;
  iVar4 = 0x14;
  do {
    *(undefined4 *)pAVar3 = *(undefined4 *)(pAVar3 + iVar2);
    pAVar3 = pAVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0x105c) = *(undefined4 *)(param_2 + 0x105c);
  *(undefined4 *)(param_1 + 0x1060) = *(undefined4 *)(param_2 + 0x1060);
  *(undefined4 *)(param_1 + 0x1064) = *(undefined4 *)(param_2 + 0x1064);
  *(undefined4 *)(param_1 + 0x1068) = *(undefined4 *)(param_2 + 0x1068);
  *(undefined4 *)(param_1 + 0x106c) = *(undefined4 *)(param_2 + 0x106c);
  *(undefined4 *)(param_1 + 0x1070) = *(undefined4 *)(param_2 + 0x1070);
  *(undefined4 *)(param_1 + 0x1074) = *(undefined4 *)(param_2 + 0x1074);
  *(undefined4 *)(param_1 + 0x1078) = *(undefined4 *)(param_2 + 0x1078);
  *(undefined4 *)(param_1 + 0x107c) = *(undefined4 *)(param_2 + 0x107c);
  *(undefined4 *)(param_1 + 0x1080) = *(undefined4 *)(param_2 + 0x1080);
  *(undefined4 *)(param_1 + 0x1084) = *(undefined4 *)(param_2 + 0x1084);
  *(undefined4 *)(param_1 + 0x1088) = *(undefined4 *)(param_2 + 0x1088);
  *(undefined4 *)(param_1 + 0x108c) = *(undefined4 *)(param_2 + 0x108c);
  *(undefined4 *)(param_1 + 0x1090) = *(undefined4 *)(param_2 + 0x1090);
  *(undefined4 *)(param_1 + 0x1094) = *(undefined4 *)(param_2 + 0x1094);
  *(undefined4 *)(param_1 + 0x1098) = *(undefined4 *)(param_2 + 0x1098);
  *(undefined4 *)(param_1 + 0x109c) = *(undefined4 *)(param_2 + 0x109c);
  *(undefined4 *)(param_1 + 0x10a0) = *(undefined4 *)(param_2 + 0x10a0);
  *(undefined4 *)(param_1 + 0x10a4) = *(undefined4 *)(param_2 + 0x10a4);
  *(undefined4 *)(param_1 + 0x10a8) = *(undefined4 *)(param_2 + 0x10a8);
  *(undefined4 *)(param_1 + 0x10ac) = *(undefined4 *)(param_2 + 0x10ac);
  *(undefined4 *)(param_1 + 0x10b0) = *(undefined4 *)(param_2 + 0x10b0);
  *(undefined4 *)(param_1 + 0x10b4) = *(undefined4 *)(param_2 + 0x10b4);
  *(undefined4 *)(param_1 + 0x10b8) = *(undefined4 *)(param_2 + 0x10b8);
  *(undefined4 *)(param_1 + 0x10bc) = *(undefined4 *)(param_2 + 0x10bc);
  *(undefined4 *)(param_1 + 0x10c0) = *(undefined4 *)(param_2 + 0x10c0);
  *(undefined4 *)(param_1 + 0x10c4) = *(undefined4 *)(param_2 + 0x10c4);
  *(undefined4 *)(param_1 + 0x10c8) = *(undefined4 *)(param_2 + 0x10c8);
  *(undefined4 *)(param_1 + 0x10cc) = *(undefined4 *)(param_2 + 0x10cc);
  *(undefined4 *)(param_1 + 0x10d0) = *(undefined4 *)(param_2 + 0x10d0);
  *(undefined4 *)(param_1 + 0x10d4) = *(undefined4 *)(param_2 + 0x10d4);
  *(undefined4 *)(param_1 + 0x10d8) = *(undefined4 *)(param_2 + 0x10d8);
  *(undefined4 *)(param_1 + 0x10dc) = *(undefined4 *)(param_2 + 0x10dc);
  *(undefined4 *)(param_1 + 0x10e0) = *(undefined4 *)(param_2 + 0x10e0);
  *(undefined4 *)(param_1 + 0x10e4) = *(undefined4 *)(param_2 + 0x10e4);
  *(undefined4 *)(param_1 + 0x10e8) = *(undefined4 *)(param_2 + 0x10e8);
  *(undefined4 *)(param_1 + 0x10ec) = *(undefined4 *)(param_2 + 0x10ec);
  *(undefined4 *)(param_1 + 0x10f0) = *(undefined4 *)(param_2 + 0x10f0);
  *(undefined4 *)(param_1 + 0x10f4) = *(undefined4 *)(param_2 + 0x10f4);
  *(undefined4 *)(param_1 + 0x10f8) = *(undefined4 *)(param_2 + 0x10f8);
  *(undefined4 *)(param_1 + 0x10fc) = *(undefined4 *)(param_2 + 0x10fc);
  *(undefined4 *)(param_1 + 0x1100) = *(undefined4 *)(param_2 + 0x1100);
  *(undefined4 *)(param_1 + 0x1104) = *(undefined4 *)(param_2 + 0x1104);
  *(undefined4 *)(param_1 + 0x1108) = *(undefined4 *)(param_2 + 0x1108);
  *(undefined4 *)(param_1 + 0x110c) = *(undefined4 *)(param_2 + 0x110c);
  *(undefined4 *)(param_1 + 0x1110) = *(undefined4 *)(param_2 + 0x1110);
  *(undefined4 *)(param_1 + 0x1114) = *(undefined4 *)(param_2 + 0x1114);
  *(undefined4 *)(param_1 + 0x1118) = *(undefined4 *)(param_2 + 0x1118);
  *(undefined4 *)(param_1 + 0x111c) = *(undefined4 *)(param_2 + 0x111c);
  *(undefined4 *)(param_1 + 0x1120) = *(undefined4 *)(param_2 + 0x1120);
  *(undefined4 *)(param_1 + 0x1124) = *(undefined4 *)(param_2 + 0x1124);
  *(undefined4 *)(param_1 + 0x1128) = *(undefined4 *)(param_2 + 0x1128);
  *(undefined4 *)(param_1 + 0x112c) = *(undefined4 *)(param_2 + 0x112c);
  *(undefined4 *)(param_1 + 0x1130) = *(undefined4 *)(param_2 + 0x1130);
  *(undefined4 *)(param_1 + 0x1134) = *(undefined4 *)(param_2 + 0x1134);
  *(undefined4 *)(param_1 + 0x1138) = *(undefined4 *)(param_2 + 0x1138);
  *(undefined4 *)(param_1 + 0x113c) = *(undefined4 *)(param_2 + 0x113c);
  *(undefined4 *)(param_1 + 0x1140) = *(undefined4 *)(param_2 + 0x1140);
  *(undefined4 *)(param_1 + 0x1144) = *(undefined4 *)(param_2 + 0x1144);
  *(undefined4 *)(param_1 + 0x1148) = *(undefined4 *)(param_2 + 0x1148);
  *(undefined4 *)(param_1 + 0x114c) = *(undefined4 *)(param_2 + 0x114c);
  *(undefined4 *)(param_1 + 0x1150) = *(undefined4 *)(param_2 + 0x1150);
  *(undefined4 *)(param_1 + 0x1154) = *(undefined4 *)(param_2 + 0x1154);
  *(undefined4 *)(param_1 + 0x1158) = *(undefined4 *)(param_2 + 0x1158);
  *(undefined4 *)(param_1 + 0x115c) = *(undefined4 *)(param_2 + 0x115c);
  *(undefined4 *)(param_1 + 0x1160) = *(undefined4 *)(param_2 + 0x1160);
  *(undefined4 *)(param_1 + 0x1164) = *(undefined4 *)(param_2 + 0x1164);
  *(undefined4 *)(param_1 + 0x1168) = *(undefined4 *)(param_2 + 0x1168);
  *(undefined4 *)(param_1 + 0x116c) = *(undefined4 *)(param_2 + 0x116c);
  *(undefined4 *)(param_1 + 0x1170) = *(undefined4 *)(param_2 + 0x1170);
  *(undefined4 *)(param_1 + 0x1174) = *(undefined4 *)(param_2 + 0x1174);
  *(undefined4 *)(param_1 + 0x1178) = *(undefined4 *)(param_2 + 0x1178);
  *(undefined4 *)(param_1 + 0x117c) = *(undefined4 *)(param_2 + 0x117c);
  *(undefined4 *)(param_1 + 0x1180) = *(undefined4 *)(param_2 + 0x1180);
  *(undefined4 *)(param_1 + 0x1184) = *(undefined4 *)(param_2 + 0x1184);
  *(undefined4 *)(param_1 + 0x1188) = *(undefined4 *)(param_2 + 0x1188);
  *(undefined4 *)(param_1 + 0x118c) = *(undefined4 *)(param_2 + 0x118c);
  *(undefined4 *)(param_1 + 0x1190) = *(undefined4 *)(param_2 + 0x1190);
  *(undefined4 *)(param_1 + 0x1194) = *(undefined4 *)(param_2 + 0x1194);
  *(undefined4 *)(param_1 + 0x1198) = *(undefined4 *)(param_2 + 0x1198);
  *(undefined4 *)(param_1 + 0x119c) = *(undefined4 *)(param_2 + 0x119c);
  *(undefined4 *)(param_1 + 0x11a0) = *(undefined4 *)(param_2 + 0x11a0);
  *(undefined4 *)(param_1 + 0x11a4) = *(undefined4 *)(param_2 + 0x11a4);
  *(undefined4 *)(param_1 + 0x11a8) = *(undefined4 *)(param_2 + 0x11a8);
  *(undefined4 *)(param_1 + 0x11ac) = *(undefined4 *)(param_2 + 0x11ac);
  *(undefined4 *)(param_1 + 0x11b0) = *(undefined4 *)(param_2 + 0x11b0);
  *(undefined4 *)(param_1 + 0x11b4) = *(undefined4 *)(param_2 + 0x11b4);
  *(undefined4 *)(param_1 + 0x11b8) = *(undefined4 *)(param_2 + 0x11b8);
  *(undefined4 *)(param_1 + 0x11bc) = *(undefined4 *)(param_2 + 0x11bc);
  *(undefined4 *)(param_1 + 0x11c0) = *(undefined4 *)(param_2 + 0x11c0);
  *(undefined4 *)(param_1 + 0x11c4) = *(undefined4 *)(param_2 + 0x11c4);
  *(undefined4 *)(param_1 + 0x11c8) = *(undefined4 *)(param_2 + 0x11c8);
  *(undefined4 *)(param_1 + 0x11cc) = *(undefined4 *)(param_2 + 0x11cc);
  *(undefined4 *)(param_1 + 0x11d0) = *(undefined4 *)(param_2 + 0x11d0);
  *(undefined4 *)(param_1 + 0x11d4) = *(undefined4 *)(param_2 + 0x11d4);
  *(undefined4 *)(param_1 + 0x11d8) = *(undefined4 *)(param_2 + 0x11d8);
  *(undefined4 *)(param_1 + 0x11dc) = *(undefined4 *)(param_2 + 0x11dc);
  *(undefined4 *)(param_1 + 0x11e0) = *(undefined4 *)(param_2 + 0x11e0);
  *(undefined4 *)(param_1 + 0x11e4) = *(undefined4 *)(param_2 + 0x11e4);
  *(undefined4 *)(param_1 + 0x11e8) = *(undefined4 *)(param_2 + 0x11e8);
  *(undefined4 *)(param_1 + 0x11ec) = *(undefined4 *)(param_2 + 0x11ec);
  *(undefined4 *)(param_1 + 0x11f0) = *(undefined4 *)(param_2 + 0x11f0);
  *(undefined4 *)(param_1 + 0x11f4) = *(undefined4 *)(param_2 + 0x11f4);
  *(undefined4 *)(param_1 + 0x11f8) = *(undefined4 *)(param_2 + 0x11f8);
  *(undefined4 *)(param_1 + 0x11fc) = *(undefined4 *)(param_2 + 0x11fc);
  *(undefined4 *)(param_1 + 0x1200) = *(undefined4 *)(param_2 + 0x1200);
  *(undefined4 *)(param_1 + 0x1204) = *(undefined4 *)(param_2 + 0x1204);
  *(undefined4 *)(param_1 + 0x1208) = *(undefined4 *)(param_2 + 0x1208);
  *(undefined4 *)(param_1 + 0x120c) = *(undefined4 *)(param_2 + 0x120c);
  *(undefined4 *)(param_1 + 0x1210) = *(undefined4 *)(param_2 + 0x1210);
  *(undefined4 *)(param_1 + 0x1214) = *(undefined4 *)(param_2 + 0x1214);
  *(undefined4 *)(param_1 + 0x1218) = *(undefined4 *)(param_2 + 0x1218);
  *(undefined4 *)(param_1 + 0x121c) = *(undefined4 *)(param_2 + 0x121c);
  *(undefined4 *)(param_1 + 0x1220) = *(undefined4 *)(param_2 + 0x1220);
  *(undefined4 *)(param_1 + 0x1224) = *(undefined4 *)(param_2 + 0x1224);
  *(undefined4 *)(param_1 + 0x1228) = *(undefined4 *)(param_2 + 0x1228);
  *(undefined4 *)(param_1 + 0x122c) = *(undefined4 *)(param_2 + 0x122c);
  *(undefined4 *)(param_1 + 0x1230) = *(undefined4 *)(param_2 + 0x1230);
  *(undefined4 *)(param_1 + 0x1234) = *(undefined4 *)(param_2 + 0x1234);
  *(undefined4 *)(param_1 + 0x1238) = *(undefined4 *)(param_2 + 0x1238);
  *(undefined4 *)(param_1 + 0x123c) = *(undefined4 *)(param_2 + 0x123c);
  *(undefined4 *)(param_1 + 0x1240) = *(undefined4 *)(param_2 + 0x1240);
  *(undefined4 *)(param_1 + 0x1244) = *(undefined4 *)(param_2 + 0x1244);
  *(undefined4 *)(param_1 + 0x1248) = *(undefined4 *)(param_2 + 0x1248);
  *(undefined4 *)(param_1 + 0x124c) = *(undefined4 *)(param_2 + 0x124c);
  *(undefined4 *)(param_1 + 0x1250) = *(undefined4 *)(param_2 + 0x1250);
  *(undefined4 *)(param_1 + 0x1254) = *(undefined4 *)(param_2 + 0x1254);
  *(undefined4 *)(param_1 + 0x1258) = *(undefined4 *)(param_2 + 0x1258);
  *(undefined4 *)(param_1 + 0x125c) = *(undefined4 *)(param_2 + 0x125c);
  *(undefined4 *)(param_1 + 0x1260) = *(undefined4 *)(param_2 + 0x1260);
  *(undefined4 *)(param_1 + 0x1264) = *(undefined4 *)(param_2 + 0x1264);
  *(undefined4 *)(param_1 + 0x1268) = *(undefined4 *)(param_2 + 0x1268);
  *(undefined4 *)(param_1 + 0x126c) = *(undefined4 *)(param_2 + 0x126c);
  *(undefined4 *)(param_1 + 0x1270) = *(undefined4 *)(param_2 + 0x1270);
  *(undefined4 *)(param_1 + 0x1274) = *(undefined4 *)(param_2 + 0x1274);
  *(undefined4 *)(param_1 + 0x1278) = *(undefined4 *)(param_2 + 0x1278);
  *(undefined4 *)(param_1 + 0x127c) = *(undefined4 *)(param_2 + 0x127c);
  *(undefined4 *)(param_1 + 0x1280) = *(undefined4 *)(param_2 + 0x1280);
  *(undefined4 *)(param_1 + 0x1284) = *(undefined4 *)(param_2 + 0x1284);
  *(undefined4 *)(param_1 + 0x1288) = *(undefined4 *)(param_2 + 0x1288);
  *(undefined4 *)(param_1 + 0x128c) = *(undefined4 *)(param_2 + 0x128c);
  *(undefined4 *)(param_1 + 0x1290) = *(undefined4 *)(param_2 + 0x1290);
  *(undefined4 *)(param_1 + 0x1294) = *(undefined4 *)(param_2 + 0x1294);
  *(undefined4 *)(param_1 + 0x1298) = *(undefined4 *)(param_2 + 0x1298);
  *(undefined4 *)(param_1 + 0x129c) = *(undefined4 *)(param_2 + 0x129c);
  *(undefined4 *)(param_1 + 0x12a0) = *(undefined4 *)(param_2 + 0x12a0);
  *(undefined4 *)(param_1 + 0x12a4) = *(undefined4 *)(param_2 + 0x12a4);
  *(undefined4 *)(param_1 + 0x12a8) = *(undefined4 *)(param_2 + 0x12a8);
  *(undefined4 *)(param_1 + 0x12ac) = *(undefined4 *)(param_2 + 0x12ac);
  *(undefined4 *)(param_1 + 0x12b0) = *(undefined4 *)(param_2 + 0x12b0);
  *(undefined4 *)(param_1 + 0x12b4) = *(undefined4 *)(param_2 + 0x12b4);
  *(undefined4 *)(param_1 + 0x12b8) = *(undefined4 *)(param_2 + 0x12b8);
  *(undefined4 *)(param_1 + 0x12bc) = *(undefined4 *)(param_2 + 0x12bc);
  *(undefined4 *)(param_1 + 0x12c0) = *(undefined4 *)(param_2 + 0x12c0);
  *(undefined4 *)(param_1 + 0x12c4) = *(undefined4 *)(param_2 + 0x12c4);
  *(undefined4 *)(param_1 + 0x12c8) = *(undefined4 *)(param_2 + 0x12c8);
  *(undefined4 *)(param_1 + 0x12cc) = *(undefined4 *)(param_2 + 0x12cc);
  *(undefined4 *)(param_1 + 0x12d0) = *(undefined4 *)(param_2 + 0x12d0);
  *(undefined4 *)(param_1 + 0x12d4) = *(undefined4 *)(param_2 + 0x12d4);
  *(undefined4 *)(param_1 + 0x12d8) = *(undefined4 *)(param_2 + 0x12d8);
  *(undefined4 *)(param_1 + 0x12dc) = *(undefined4 *)(param_2 + 0x12dc);
  *(undefined4 *)(param_1 + 0x12e0) = *(undefined4 *)(param_2 + 0x12e0);
  *(undefined4 *)(param_1 + 0x12e4) = *(undefined4 *)(param_2 + 0x12e4);
  *(undefined4 *)(param_1 + 0x12e8) = *(undefined4 *)(param_2 + 0x12e8);
  *(undefined4 *)(param_1 + 0x12ec) = *(undefined4 *)(param_2 + 0x12ec);
  *(undefined4 *)(param_1 + 0x12f0) = *(undefined4 *)(param_2 + 0x12f0);
  *(undefined4 *)(param_1 + 0x12f4) = *(undefined4 *)(param_2 + 0x12f4);
  *(undefined4 *)(param_1 + 0x12f8) = *(undefined4 *)(param_2 + 0x12f8);
  *(undefined4 *)(param_1 + 0x12fc) = *(undefined4 *)(param_2 + 0x12fc);
  *(undefined4 *)(param_1 + 0x1300) = *(undefined4 *)(param_2 + 0x1300);
  *(undefined4 *)(param_1 + 0x1304) = *(undefined4 *)(param_2 + 0x1304);
  *(undefined4 *)(param_1 + 0x1308) = *(undefined4 *)(param_2 + 0x1308);
  *(undefined4 *)(param_1 + 0x130c) = *(undefined4 *)(param_2 + 0x130c);
  *(undefined4 *)(param_1 + 0x1310) = *(undefined4 *)(param_2 + 0x1310);
  *(undefined4 *)(param_1 + 0x1314) = *(undefined4 *)(param_2 + 0x1314);
  *(undefined4 *)(param_1 + 0x1318) = *(undefined4 *)(param_2 + 0x1318);
  *(undefined4 *)(param_1 + 0x131c) = *(undefined4 *)(param_2 + 0x131c);
  *(undefined4 *)(param_1 + 0x1320) = *(undefined4 *)(param_2 + 0x1320);
  *(undefined4 *)(param_1 + 0x1324) = *(undefined4 *)(param_2 + 0x1324);
  *(undefined4 *)(param_1 + 0x1328) = *(undefined4 *)(param_2 + 0x1328);
  *(undefined4 *)(param_1 + 0x132c) = *(undefined4 *)(param_2 + 0x132c);
  *(undefined4 *)(param_1 + 0x1330) = *(undefined4 *)(param_2 + 0x1330);
  *(undefined4 *)(param_1 + 0x1334) = *(undefined4 *)(param_2 + 0x1334);
  *(undefined4 *)(param_1 + 0x1338) = *(undefined4 *)(param_2 + 0x1338);
  *(undefined4 *)(param_1 + 0x133c) = *(undefined4 *)(param_2 + 0x133c);
  *(undefined4 *)(param_1 + 0x1340) = *(undefined4 *)(param_2 + 0x1340);
  *(undefined4 *)(param_1 + 0x1344) = *(undefined4 *)(param_2 + 0x1344);
  *(undefined4 *)(param_1 + 0x1348) = *(undefined4 *)(param_2 + 0x1348);
  *(undefined4 *)(param_1 + 0x134c) = *(undefined4 *)(param_2 + 0x134c);
  *(undefined4 *)(param_1 + 0x1350) = *(undefined4 *)(param_2 + 0x1350);
  *(undefined4 *)(param_1 + 0x1354) = *(undefined4 *)(param_2 + 0x1354);
  *(undefined4 *)(param_1 + 0x1358) = *(undefined4 *)(param_2 + 0x1358);
  *(undefined4 *)(param_1 + 0x135c) = *(undefined4 *)(param_2 + 0x135c);
  *(undefined4 *)(param_1 + 0x1360) = *(undefined4 *)(param_2 + 0x1360);
  *(undefined4 *)(param_1 + 0x1364) = *(undefined4 *)(param_2 + 0x1364);
  *(undefined4 *)(param_1 + 0x1368) = *(undefined4 *)(param_2 + 0x1368);
  *(undefined4 *)(param_1 + 0x136c) = *(undefined4 *)(param_2 + 0x136c);
  *(undefined4 *)(param_1 + 0x1370) = *(undefined4 *)(param_2 + 0x1370);
  *(undefined4 *)(param_1 + 0x1374) = *(undefined4 *)(param_2 + 0x1374);
  *(undefined4 *)(param_1 + 0x1378) = *(undefined4 *)(param_2 + 0x1378);
  *(undefined4 *)(param_1 + 0x137c) = *(undefined4 *)(param_2 + 0x137c);
  *(undefined4 *)(param_1 + 0x1380) = *(undefined4 *)(param_2 + 0x1380);
  *(undefined4 *)(param_1 + 0x1384) = *(undefined4 *)(param_2 + 0x1384);
  pAVar3 = param_1 + 0x1408;
  iVar4 = 0x14;
  *(undefined4 *)(param_1 + 5000) = *(undefined4 *)(param_2 + 5000);
  *(undefined4 *)(param_1 + 0x138c) = *(undefined4 *)(param_2 + 0x138c);
  *(undefined4 *)(param_1 + 0x1390) = *(undefined4 *)(param_2 + 0x1390);
  *(undefined4 *)(param_1 + 0x1394) = *(undefined4 *)(param_2 + 0x1394);
  *(undefined4 *)(param_1 + 0x1398) = *(undefined4 *)(param_2 + 0x1398);
  *(undefined4 *)(param_1 + 0x139c) = *(undefined4 *)(param_2 + 0x139c);
  *(undefined4 *)(param_1 + 0x13a0) = *(undefined4 *)(param_2 + 0x13a0);
  *(undefined4 *)(param_1 + 0x13a4) = *(undefined4 *)(param_2 + 0x13a4);
  *(undefined4 *)(param_1 + 0x13a8) = *(undefined4 *)(param_2 + 0x13a8);
  *(undefined4 *)(param_1 + 0x13ac) = *(undefined4 *)(param_2 + 0x13ac);
  *(undefined4 *)(param_1 + 0x13b0) = *(undefined4 *)(param_2 + 0x13b0);
  *(undefined4 *)(param_1 + 0x13b4) = *(undefined4 *)(param_2 + 0x13b4);
  *(undefined4 *)(param_1 + 0x13b8) = *(undefined4 *)(param_2 + 0x13b8);
  *(undefined4 *)(param_1 + 0x13bc) = *(undefined4 *)(param_2 + 0x13bc);
  *(undefined4 *)(param_1 + 0x13c0) = *(undefined4 *)(param_2 + 0x13c0);
  *(undefined4 *)(param_1 + 0x13c4) = *(undefined4 *)(param_2 + 0x13c4);
  *(undefined4 *)(param_1 + 0x13c8) = *(undefined4 *)(param_2 + 0x13c8);
  *(undefined4 *)(param_1 + 0x13cc) = *(undefined4 *)(param_2 + 0x13cc);
  *(undefined4 *)(param_1 + 0x13d0) = *(undefined4 *)(param_2 + 0x13d0);
  *(undefined4 *)(param_1 + 0x13d4) = *(undefined4 *)(param_2 + 0x13d4);
  *(undefined4 *)(param_1 + 0x13d8) = *(undefined4 *)(param_2 + 0x13d8);
  *(undefined4 *)(param_1 + 0x13dc) = *(undefined4 *)(param_2 + 0x13dc);
  *(undefined4 *)(param_1 + 0x13e0) = *(undefined4 *)(param_2 + 0x13e0);
  *(undefined4 *)(param_1 + 0x13e4) = *(undefined4 *)(param_2 + 0x13e4);
  *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(param_2 + 0x13e8);
  *(undefined4 *)(param_1 + 0x13ec) = *(undefined4 *)(param_2 + 0x13ec);
  *(undefined4 *)(param_1 + 0x13f0) = *(undefined4 *)(param_2 + 0x13f0);
  *(undefined4 *)(param_1 + 0x13f4) = *(undefined4 *)(param_2 + 0x13f4);
  *(undefined4 *)(param_1 + 0x13f8) = *(undefined4 *)(param_2 + 0x13f8);
  *(undefined4 *)(param_1 + 0x13fc) = *(undefined4 *)(param_2 + 0x13fc);
  *(undefined4 *)(param_1 + 0x1400) = *(undefined4 *)(param_2 + 0x1400);
  *(undefined4 *)(param_1 + 0x1404) = *(undefined4 *)(param_2 + 0x1404);
  do {
    *(undefined4 *)pAVar3 = *(undefined4 *)(pAVar3 + iVar2);
    pAVar3 = pAVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pAVar3 = param_1 + 0x1458;
  iVar4 = 0x14;
  do {
    *(undefined4 *)pAVar3 = *(undefined4 *)(pAVar3 + iVar2);
    pAVar3 = pAVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0x14a8) = *(undefined4 *)(param_2 + 0x14a8);
  *(undefined4 *)(param_1 + 0x14ac) = *(undefined4 *)(param_2 + 0x14ac);
  *(undefined4 *)(param_1 + 0x14b0) = *(undefined4 *)(param_2 + 0x14b0);
  *(undefined4 *)(param_1 + 0x14b4) = *(undefined4 *)(param_2 + 0x14b4);
  *(undefined4 *)(param_1 + 0x14b8) = *(undefined4 *)(param_2 + 0x14b8);
  *(undefined4 *)(param_1 + 0x14bc) = *(undefined4 *)(param_2 + 0x14bc);
  *(undefined4 *)(param_1 + 0x14c0) = *(undefined4 *)(param_2 + 0x14c0);
  *(undefined4 *)(param_1 + 0x14c4) = *(undefined4 *)(param_2 + 0x14c4);
  *(undefined4 *)(param_1 + 0x14c8) = *(undefined4 *)(param_2 + 0x14c8);
  *(undefined4 *)(param_1 + 0x14cc) = *(undefined4 *)(param_2 + 0x14cc);
  *(undefined4 *)(param_1 + 0x14d0) = *(undefined4 *)(param_2 + 0x14d0);
  *(undefined4 *)(param_1 + 0x14d4) = *(undefined4 *)(param_2 + 0x14d4);
  *(undefined4 *)(param_1 + 0x14d8) = *(undefined4 *)(param_2 + 0x14d8);
  *(undefined4 *)(param_1 + 0x14dc) = *(undefined4 *)(param_2 + 0x14dc);
  *(undefined4 *)(param_1 + 0x14e0) = *(undefined4 *)(param_2 + 0x14e0);
  *(undefined4 *)(param_1 + 0x14e4) = *(undefined4 *)(param_2 + 0x14e4);
  *(uint *)(param_1 + 0x14e8) =
       *(uint *)(param_1 + 0x14e8) ^ (*(uint *)(param_1 + 0x14e8) ^ *(uint *)(param_2 + 0x14e8)) & 1
  ;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ *(uint *)(param_1 + 0x14e8)) & 2 ^
          *(uint *)(param_1 + 0x14e8);
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x100000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x200000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x400000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x800000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x1000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x2000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x4000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x8000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x10000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x20000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x40000000 ^ uVar1;
  *(uint *)(param_1 + 0x14e8) = uVar1;
  *(uint *)(param_1 + 0x14e8) =
       (*(uint *)(param_2 + 0x14e8) ^ uVar1) & 0x7fffffff ^ *(uint *)(param_2 + 0x14e8);
  *(uint *)(param_1 + 0x14ec) =
       *(uint *)(param_1 + 0x14ec) ^ (*(uint *)(param_1 + 0x14ec) ^ *(uint *)(param_2 + 0x14ec)) & 1
  ;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ *(uint *)(param_1 + 0x14ec)) & 2 ^
          *(uint *)(param_1 + 0x14ec);
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x100000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x200000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x400000 ^ uVar1;
  *(uint *)(param_1 + 0x14ec) = uVar1;
  *(uint *)(param_1 + 0x14ec) = (*(uint *)(param_2 + 0x14ec) ^ uVar1) & 0x800000 ^ uVar1;
  param_1[0x14f0] = param_2[0x14f0];
  param_1[0x14f1] = param_2[0x14f1];
  *(undefined4 *)(param_1 + 0x14f4) = *(undefined4 *)(param_2 + 0x14f4);
  *(undefined4 *)(param_1 + 0x14f8) = *(undefined4 *)(param_2 + 0x14f8);
  *(undefined4 *)(param_1 + 0x14fc) = *(undefined4 *)(param_2 + 0x14fc);
  *(undefined4 *)(param_1 + 0x1500) = *(undefined4 *)(param_2 + 0x1500);
  *(undefined4 *)(param_1 + 0x1504) = *(undefined4 *)(param_2 + 0x1504);
  *(undefined4 *)(param_1 + 0x1508) = *(undefined4 *)(param_2 + 0x1508);
  *(undefined4 *)(param_1 + 0x150c) = *(undefined4 *)(param_2 + 0x150c);
  *(undefined4 *)(param_1 + 0x1510) = *(undefined4 *)(param_2 + 0x1510);
  *(undefined4 *)(param_1 + 0x1514) = *(undefined4 *)(param_2 + 0x1514);
  *(undefined4 *)(param_1 + 0x1518) = *(undefined4 *)(param_2 + 0x1518);
  *(undefined4 *)(param_1 + 0x151c) = *(undefined4 *)(param_2 + 0x151c);
  *(undefined4 *)(param_1 + 0x1520) = *(undefined4 *)(param_2 + 0x1520);
  *(undefined4 *)(param_1 + 0x1524) = *(undefined4 *)(param_2 + 0x1524);
  *(undefined4 *)(param_1 + 0x1528) = *(undefined4 *)(param_2 + 0x1528);
  *(undefined4 *)(param_1 + 0x152c) = *(undefined4 *)(param_2 + 0x152c);
  *(undefined4 *)(param_1 + 0x1530) = *(undefined4 *)(param_2 + 0x1530);
  *(undefined4 *)(param_1 + 0x1534) = *(undefined4 *)(param_2 + 0x1534);
  *(undefined4 *)(param_1 + 0x1538) = *(undefined4 *)(param_2 + 0x1538);
  *(undefined4 *)(param_1 + 0x153c) = *(undefined4 *)(param_2 + 0x153c);
  *(undefined4 *)(param_1 + 0x1540) = *(undefined4 *)(param_2 + 0x1540);
  *(undefined4 *)(param_1 + 0x1544) = *(undefined4 *)(param_2 + 0x1544);
  *(undefined4 *)(param_1 + 0x1548) = *(undefined4 *)(param_2 + 0x1548);
  *(undefined4 *)(param_1 + 0x154c) = *(undefined4 *)(param_2 + 0x154c);
  *(undefined4 *)(param_1 + 0x1550) = *(undefined4 *)(param_2 + 0x1550);
  *(undefined4 *)(param_1 + 0x1554) = *(undefined4 *)(param_2 + 0x1554);
  *(undefined4 *)(param_1 + 0x1558) = *(undefined4 *)(param_2 + 0x1558);
  *(undefined4 *)(param_1 + 0x155c) = *(undefined4 *)(param_2 + 0x155c);
  *(undefined4 *)(param_1 + 0x1560) = *(undefined4 *)(param_2 + 0x1560);
  *(undefined4 *)(param_1 + 0x1564) = *(undefined4 *)(param_2 + 0x1564);
  *(undefined4 *)(param_1 + 0x1568) = *(undefined4 *)(param_2 + 0x1568);
  *(undefined4 *)(param_1 + 0x156c) = *(undefined4 *)(param_2 + 0x156c);
  *(undefined4 *)(param_1 + 0x1570) = *(undefined4 *)(param_2 + 0x1570);
  *(undefined4 *)(param_1 + 0x1574) = *(undefined4 *)(param_2 + 0x1574);
  *(undefined4 *)(param_1 + 0x1578) = *(undefined4 *)(param_2 + 0x1578);
  *(undefined4 *)(param_1 + 0x157c) = *(undefined4 *)(param_2 + 0x157c);
  *(undefined4 *)(param_1 + 0x1580) = *(undefined4 *)(param_2 + 0x1580);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x1584),(FStringNoInit *)(param_2 + 0x1584));
  *(undefined4 *)(param_1 + 0x1590) = *(undefined4 *)(param_2 + 0x1590);
  *(undefined4 *)(param_1 + 0x1594) = *(undefined4 *)(param_2 + 0x1594);
  *(undefined4 *)(param_1 + 0x1598) = *(undefined4 *)(param_2 + 0x1598);
  *(undefined4 *)(param_1 + 0x159c) = *(undefined4 *)(param_2 + 0x159c);
  *(undefined4 *)(param_1 + 0x15a0) = *(undefined4 *)(param_2 + 0x15a0);
  *(undefined4 *)(param_1 + 0x15a4) = *(undefined4 *)(param_2 + 0x15a4);
  *(undefined4 *)(param_1 + 0x15a8) = *(undefined4 *)(param_2 + 0x15a8);
  *(undefined4 *)(param_1 + 0x15ac) = *(undefined4 *)(param_2 + 0x15ac);
  *(undefined4 *)(param_1 + 0x15b0) = *(undefined4 *)(param_2 + 0x15b0);
  *(undefined4 *)(param_1 + 0x15b4) = *(undefined4 *)(param_2 + 0x15b4);
  *(undefined4 *)(param_1 + 0x15b8) = *(undefined4 *)(param_2 + 0x15b8);
  *(undefined4 *)(param_1 + 0x15bc) = *(undefined4 *)(param_2 + 0x15bc);
  *(undefined4 *)(param_1 + 0x15c0) = *(undefined4 *)(param_2 + 0x15c0);
  *(undefined4 *)(param_1 + 0x15c4) = *(undefined4 *)(param_2 + 0x15c4);
  *(undefined4 *)(param_1 + 0x15c8) = *(undefined4 *)(param_2 + 0x15c8);
  *(undefined4 *)(param_1 + 0x15cc) = *(undefined4 *)(param_2 + 0x15cc);
  *(undefined4 *)(param_1 + 0x15d0) = *(undefined4 *)(param_2 + 0x15d0);
  *(undefined4 *)(param_1 + 0x15d4) = *(undefined4 *)(param_2 + 0x15d4);
  *(undefined4 *)(param_1 + 0x15d8) = *(undefined4 *)(param_2 + 0x15d8);
  *(undefined4 *)(param_1 + 0x15dc) = *(undefined4 *)(param_2 + 0x15dc);
  *(undefined4 *)(param_1 + 0x15e0) = *(undefined4 *)(param_2 + 0x15e0);
  *(undefined4 *)(param_1 + 0x15e4) = *(undefined4 *)(param_2 + 0x15e4);
  *(undefined4 *)(param_1 + 0x15e8) = *(undefined4 *)(param_2 + 0x15e8);
  *(undefined4 *)(param_1 + 0x15ec) = *(undefined4 *)(param_2 + 0x15ec);
  *(undefined4 *)(param_1 + 0x15f0) = *(undefined4 *)(param_2 + 0x15f0);
  *(undefined4 *)(param_1 + 0x15f4) = *(undefined4 *)(param_2 + 0x15f4);
  *(undefined4 *)(param_1 + 0x15f8) = *(undefined4 *)(param_2 + 0x15f8);
  *(undefined4 *)(param_1 + 0x15fc) = *(undefined4 *)(param_2 + 0x15fc);
  *(undefined4 *)(param_1 + 0x1600) = *(undefined4 *)(param_2 + 0x1600);
  *(undefined4 *)(param_1 + 0x1604) = *(undefined4 *)(param_2 + 0x1604);
  *(undefined4 *)(param_1 + 0x1608) = *(undefined4 *)(param_2 + 0x1608);
  *(undefined4 *)(param_1 + 0x160c) = *(undefined4 *)(param_2 + 0x160c);
  *(undefined4 *)(param_1 + 0x1610) = *(undefined4 *)(param_2 + 0x1610);
  *(undefined4 *)(param_1 + 0x1614) = *(undefined4 *)(param_2 + 0x1614);
  *(undefined4 *)(param_1 + 0x1618) = *(undefined4 *)(param_2 + 0x1618);
  *(undefined4 *)(param_1 + 0x161c) = *(undefined4 *)(param_2 + 0x161c);
  *(undefined4 *)(param_1 + 0x1620) = *(undefined4 *)(param_2 + 0x1620);
  *(undefined4 *)(param_1 + 0x1624) = *(undefined4 *)(param_2 + 0x1624);
  *(undefined4 *)(param_1 + 0x1628) = *(undefined4 *)(param_2 + 0x1628);
  *(undefined4 *)(param_1 + 0x162c) = *(undefined4 *)(param_2 + 0x162c);
  *(undefined4 *)(param_1 + 0x1630) = *(undefined4 *)(param_2 + 0x1630);
  *(undefined4 *)(param_1 + 0x1634) = *(undefined4 *)(param_2 + 0x1634);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x1638),(FStringNoInit *)(param_2 + 0x1638));
  *(undefined4 *)(param_1 + 0x1644) = *(undefined4 *)(param_2 + 0x1644);
  *(undefined4 *)(param_1 + 0x1648) = *(undefined4 *)(param_2 + 0x1648);
  *(uint *)(param_1 + 0x164c) =
       *(uint *)(param_1 + 0x164c) ^ (*(uint *)(param_1 + 0x164c) ^ *(uint *)(param_2 + 0x164c)) & 1
  ;
  uVar1 = (*(uint *)(param_2 + 0x164c) ^ *(uint *)(param_1 + 0x164c)) & 2 ^
          *(uint *)(param_1 + 0x164c);
  *(uint *)(param_1 + 0x164c) = uVar1;
  *(uint *)(param_1 + 0x164c) = (*(uint *)(param_2 + 0x164c) ^ uVar1) & 4 ^ uVar1;
  thunk_FUN_10385030(param_2 + 0x1650);
  thunk_FUN_10385140(param_2 + 0x165c);
  thunk_FUN_10385250(param_2 + 0x1668);
  thunk_FUN_10385360(param_2 + 0x1674);
  *(undefined4 *)(param_1 + 0x1680) = *(undefined4 *)(param_2 + 0x1680);
  *(uint *)(param_1 + 0x1684) =
       *(uint *)(param_1 + 0x1684) ^ (*(uint *)(param_2 + 0x1684) ^ *(uint *)(param_1 + 0x1684)) & 1
  ;
  *(undefined4 *)(param_1 + 0x1688) = *(undefined4 *)(param_2 + 0x1688);
  *(undefined4 *)(param_1 + 0x168c) = *(undefined4 *)(param_2 + 0x168c);
  *(undefined4 *)(param_1 + 0x1690) = *(undefined4 *)(param_2 + 0x1690);
  thunk_FUN_10385470(param_2 + 0x1694);
  thunk_FUN_10385580(param_2 + 0x16a0);
  *(undefined4 *)(param_1 + 0x16ac) = *(undefined4 *)(param_2 + 0x16ac);
  *(undefined4 *)(param_1 + 0x16b0) = *(undefined4 *)(param_2 + 0x16b0);
  thunk_FUN_10385690(param_2 + 0x16b4);
  *(undefined4 *)(param_1 + 0x16c0) = *(undefined4 *)(param_2 + 0x16c0);
  param_1[0x16c4] = param_2[0x16c4];
  *(undefined4 *)(param_1 + 0x16c8) = *(undefined4 *)(param_2 + 0x16c8);
  *(undefined4 *)(param_1 + 0x16cc) = *(undefined4 *)(param_2 + 0x16cc);
  *(undefined4 *)(param_1 + 0x16d0) = *(undefined4 *)(param_2 + 0x16d0);
  *(undefined4 *)(param_1 + 0x16d4) = *(undefined4 *)(param_2 + 0x16d4);
  *(undefined4 *)(param_1 + 0x16d8) = *(undefined4 *)(param_2 + 0x16d8);
  *(undefined4 *)(param_1 + 0x16dc) = *(undefined4 *)(param_2 + 0x16dc);
  *(undefined4 *)(param_1 + 0x16e0) = *(undefined4 *)(param_2 + 0x16e0);
  *(undefined4 *)(param_1 + 0x16e4) = *(undefined4 *)(param_2 + 0x16e4);
  *(undefined4 *)(param_1 + 0x16e8) = *(undefined4 *)(param_2 + 0x16e8);
  *(undefined4 *)(param_1 + 0x16ec) = *(undefined4 *)(param_2 + 0x16ec);
  *(undefined4 *)(param_1 + 0x16f0) = *(undefined4 *)(param_2 + 0x16f0);
  *(undefined4 *)(param_1 + 0x16f4) = *(undefined4 *)(param_2 + 0x16f4);
  *(undefined4 *)(param_1 + 0x16f8) = *(undefined4 *)(param_2 + 0x16f8);
  *(undefined4 *)(param_1 + 0x16fc) = *(undefined4 *)(param_2 + 0x16fc);
  *(undefined4 *)(param_1 + 0x1700) = *(undefined4 *)(param_2 + 0x1700);
  *(undefined4 *)(param_1 + 0x1704) = *(undefined4 *)(param_2 + 0x1704);
  *(undefined4 *)(param_1 + 0x1708) = *(undefined4 *)(param_2 + 0x1708);
  *(undefined4 *)(param_1 + 0x170c) = *(undefined4 *)(param_2 + 0x170c);
  *(undefined4 *)(param_1 + 0x1710) = *(undefined4 *)(param_2 + 0x1710);
  *(undefined4 *)(param_1 + 0x1714) = *(undefined4 *)(param_2 + 0x1714);
  *(undefined4 *)(param_1 + 0x1718) = *(undefined4 *)(param_2 + 0x1718);
  *(undefined4 *)(param_1 + 0x171c) = *(undefined4 *)(param_2 + 0x171c);
  *(undefined4 *)(param_1 + 0x1720) = *(undefined4 *)(param_2 + 0x1720);
  *(undefined4 *)(param_1 + 0x1724) = *(undefined4 *)(param_2 + 0x1724);
  *(undefined4 *)(param_1 + 0x1728) = *(undefined4 *)(param_2 + 0x1728);
  *(undefined4 *)(param_1 + 0x172c) = *(undefined4 *)(param_2 + 0x172c);
  *(undefined4 *)(param_1 + 0x1730) = *(undefined4 *)(param_2 + 0x1730);
  *(uint *)(param_1 + 0x1734) =
       *(uint *)(param_1 + 0x1734) ^ (*(uint *)(param_1 + 0x1734) ^ *(uint *)(param_2 + 0x1734)) & 1
  ;
  uVar1 = (*(uint *)(param_2 + 0x1734) ^ *(uint *)(param_1 + 0x1734)) & 2 ^
          *(uint *)(param_1 + 0x1734);
  *(uint *)(param_1 + 0x1734) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x1734) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x1734) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x1734) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x1734) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x1734) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x1734) = uVar1;
  *(uint *)(param_1 + 0x1734) = (*(uint *)(param_2 + 0x1734) ^ uVar1) & 0x20 ^ uVar1;
  param_1[0x1738] = param_2[0x1738];
  *(undefined4 *)(param_1 + 0x173c) = *(undefined4 *)(param_2 + 0x173c);
  *(undefined4 *)(param_1 + 0x1740) = *(undefined4 *)(param_2 + 0x1740);
  *(undefined4 *)(param_1 + 0x1744) = *(undefined4 *)(param_2 + 0x1744);
  *(undefined4 *)(param_1 + 0x1748) = *(undefined4 *)(param_2 + 0x1748);
  *(undefined4 *)(param_1 + 0x174c) = *(undefined4 *)(param_2 + 0x174c);
  *(undefined4 *)(param_1 + 0x1750) = *(undefined4 *)(param_2 + 0x1750);
  *(undefined4 *)(param_1 + 0x1754) = *(undefined4 *)(param_2 + 0x1754);
  *(undefined4 *)(param_1 + 0x1758) = *(undefined4 *)(param_2 + 0x1758);
  *(undefined4 *)(param_1 + 0x175c) = *(undefined4 *)(param_2 + 0x175c);
  *(undefined4 *)(param_1 + 0x1760) = *(undefined4 *)(param_2 + 0x1760);
  *(undefined4 *)(param_1 + 0x1764) = *(undefined4 *)(param_2 + 0x1764);
  *(undefined4 *)(param_1 + 0x1768) = *(undefined4 *)(param_2 + 0x1768);
  *(undefined4 *)(param_1 + 0x176c) = *(undefined4 *)(param_2 + 0x176c);
  *(undefined4 *)(param_1 + 6000) = *(undefined4 *)(param_2 + 6000);
  *(undefined4 *)(param_1 + 0x1774) = *(undefined4 *)(param_2 + 0x1774);
  *(uint *)(param_1 + 0x1778) =
       *(uint *)(param_1 + 0x1778) ^ (*(uint *)(param_2 + 0x1778) ^ *(uint *)(param_1 + 0x1778)) & 1
  ;
  *(undefined4 *)(param_1 + 0x177c) = *(undefined4 *)(param_2 + 0x177c);
  *(undefined4 *)(param_1 + 0x1780) = *(undefined4 *)(param_2 + 0x1780);
  *(undefined4 *)(param_1 + 0x1784) = *(undefined4 *)(param_2 + 0x1784);
  *(undefined4 *)(param_1 + 0x1788) = *(undefined4 *)(param_2 + 0x1788);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x178c),(FStringNoInit *)(param_2 + 0x178c));
  *(undefined4 *)(param_1 + 0x1798) = *(undefined4 *)(param_2 + 0x1798);
  *(undefined4 *)(param_1 + 0x179c) = *(undefined4 *)(param_2 + 0x179c);
  *(undefined4 *)(param_1 + 0x17a0) = *(undefined4 *)(param_2 + 0x17a0);
  *(undefined4 *)(param_1 + 0x17a4) = *(undefined4 *)(param_2 + 0x17a4);
  *(undefined4 *)(param_1 + 0x17a8) = *(undefined4 *)(param_2 + 0x17a8);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x17ac),(FStringNoInit *)(param_2 + 0x17ac));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x17b8),(FStringNoInit *)(param_2 + 0x17b8));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x17c4),(FStringNoInit *)(param_2 + 0x17c4));
  *(undefined4 *)(param_1 + 0x17d0) = *(undefined4 *)(param_2 + 0x17d0);
  *(undefined4 *)(param_1 + 0x17d4) = *(undefined4 *)(param_2 + 0x17d4);
  *(undefined4 *)(param_1 + 0x17d8) = *(undefined4 *)(param_2 + 0x17d8);
  *(undefined4 *)(param_1 + 0x17dc) = *(undefined4 *)(param_2 + 0x17dc);
  *(uint *)(param_1 + 0x17e0) =
       *(uint *)(param_1 + 0x17e0) ^ (*(uint *)(param_2 + 0x17e0) ^ *(uint *)(param_1 + 0x17e0)) & 1
  ;
  *(undefined4 *)(param_1 + 0x17e4) = *(undefined4 *)(param_2 + 0x17e4);
  *(undefined4 *)(param_1 + 0x17e8) = *(undefined4 *)(param_2 + 0x17e8);
  *(uint *)(param_1 + 0x17ec) =
       *(uint *)(param_1 + 0x17ec) ^ (*(uint *)(param_2 + 0x17ec) ^ *(uint *)(param_1 + 0x17ec)) & 1
  ;
  *(undefined4 *)(param_1 + 0x17f0) = *(undefined4 *)(param_2 + 0x17f0);
  *(undefined4 *)(param_1 + 0x17f4) = *(undefined4 *)(param_2 + 0x17f4);
  *(undefined4 *)(param_1 + 0x17f8) = *(undefined4 *)(param_2 + 0x17f8);
  *(uint *)(param_1 + 0x17fc) =
       *(uint *)(param_1 + 0x17fc) ^ (*(uint *)(param_1 + 0x17fc) ^ *(uint *)(param_2 + 0x17fc)) & 1
  ;
  *(uint *)(param_1 + 0x17fc) =
       (*(uint *)(param_2 + 0x17fc) ^ *(uint *)(param_1 + 0x17fc)) & 2 ^ *(uint *)(param_1 + 0x17fc)
  ;
  *(undefined4 *)(param_1 + 0x1800) = *(undefined4 *)(param_2 + 0x1800);
  *(undefined4 *)(param_1 + 0x1804) = *(undefined4 *)(param_2 + 0x1804);
  *(undefined4 *)(param_1 + 0x1808) = *(undefined4 *)(param_2 + 0x1808);
  *(undefined4 *)(param_1 + 0x180c) = *(undefined4 *)(param_2 + 0x180c);
  *(undefined4 *)(param_1 + 0x1810) = *(undefined4 *)(param_2 + 0x1810);
  *(undefined4 *)(param_1 + 0x1814) = *(undefined4 *)(param_2 + 0x1814);
  *(uint *)(param_1 + 0x1818) =
       *(uint *)(param_1 + 0x1818) ^ (*(uint *)(param_2 + 0x1818) ^ *(uint *)(param_1 + 0x1818)) & 1
  ;
  *(undefined4 *)(param_1 + 0x181c) = *(undefined4 *)(param_2 + 0x181c);
  *(uint *)(param_1 + 0x1820) =
       *(uint *)(param_1 + 0x1820) ^ (*(uint *)(param_1 + 0x1820) ^ *(uint *)(param_2 + 0x1820)) & 1
  ;
  uVar1 = (*(uint *)(param_2 + 0x1820) ^ *(uint *)(param_1 + 0x1820)) & 2 ^
          *(uint *)(param_1 + 0x1820);
  *(uint *)(param_1 + 0x1820) = uVar1;
  *(uint *)(param_1 + 0x1820) = (*(uint *)(param_2 + 0x1820) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x1824) = *(undefined4 *)(param_2 + 0x1824);
  *(undefined4 *)(param_1 + 0x1828) = *(undefined4 *)(param_2 + 0x1828);
  *(undefined4 *)(param_1 + 0x182c) = *(undefined4 *)(param_2 + 0x182c);
  *(undefined4 *)(param_1 + 0x1830) = *(undefined4 *)(param_2 + 0x1830);
  *(undefined4 *)(param_1 + 0x1834) = *(undefined4 *)(param_2 + 0x1834);
  *(undefined4 *)(param_1 + 0x1838) = *(undefined4 *)(param_2 + 0x1838);
  pAVar3 = param_2 + 0x183c;
  pAVar5 = param_1 + 0x183c;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar5 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar5 = pAVar5 + 4;
  }
  *(uint *)(param_1 + 0x1860) =
       *(uint *)(param_1 + 0x1860) ^ (*(uint *)(param_2 + 0x1860) ^ *(uint *)(param_1 + 0x1860)) & 1
  ;
  *(undefined4 *)(param_1 + 0x1864) = *(undefined4 *)(param_2 + 0x1864);
  *(undefined4 *)(param_1 + 0x1868) = *(undefined4 *)(param_2 + 0x1868);
  *(undefined4 *)(param_1 + 0x186c) = *(undefined4 *)(param_2 + 0x186c);
  *(undefined4 *)(param_1 + 0x1870) = *(undefined4 *)(param_2 + 0x1870);
  *(undefined4 *)(param_1 + 0x1874) = *(undefined4 *)(param_2 + 0x1874);
  *(undefined4 *)(param_1 + 0x1878) = *(undefined4 *)(param_2 + 0x1878);
  *(undefined4 *)(param_1 + 0x187c) = *(undefined4 *)(param_2 + 0x187c);
  *(undefined4 *)(param_1 + 0x1880) = *(undefined4 *)(param_2 + 0x1880);
  *(undefined4 *)(param_1 + 0x1884) = *(undefined4 *)(param_2 + 0x1884);
  *(undefined4 *)(param_1 + 0x1888) = *(undefined4 *)(param_2 + 0x1888);
  *(undefined4 *)(param_1 + 0x188c) = *(undefined4 *)(param_2 + 0x188c);
  *(undefined4 *)(param_1 + 0x1890) = *(undefined4 *)(param_2 + 0x1890);
  *(undefined4 *)(param_1 + 0x1894) = *(undefined4 *)(param_2 + 0x1894);
  *(undefined4 *)(param_1 + 0x1898) = *(undefined4 *)(param_2 + 0x1898);
  *(undefined4 *)(param_1 + 0x189c) = *(undefined4 *)(param_2 + 0x189c);
  *(undefined4 *)(param_1 + 0x18a0) = *(undefined4 *)(param_2 + 0x18a0);
  *(undefined4 *)(param_1 + 0x18a4) = *(undefined4 *)(param_2 + 0x18a4);
  *(undefined4 *)(param_1 + 0x18a8) = *(undefined4 *)(param_2 + 0x18a8);
  *(undefined4 *)(param_1 + 0x18ac) = *(undefined4 *)(param_2 + 0x18ac);
  *(undefined4 *)(param_1 + 0x18b0) = *(undefined4 *)(param_2 + 0x18b0);
  *(undefined4 *)(param_1 + 0x18b4) = *(undefined4 *)(param_2 + 0x18b4);
  *(undefined4 *)(param_1 + 0x18b8) = *(undefined4 *)(param_2 + 0x18b8);
  thunk_FUN_1032bcd0(param_2 + 0x18bc);
  *(uint *)(param_1 + 0x18c8) =
       *(uint *)(param_1 + 0x18c8) ^ (*(uint *)(param_2 + 0x18c8) ^ *(uint *)(param_1 + 0x18c8)) & 1
  ;
  *(undefined4 *)(param_1 + 0x18cc) = *(undefined4 *)(param_2 + 0x18cc);
  *(undefined4 *)(param_1 + 0x18d0) = *(undefined4 *)(param_2 + 0x18d0);
  *(uint *)(param_1 + 0x18d4) =
       *(uint *)(param_1 + 0x18d4) ^ (*(uint *)(param_2 + 0x18d4) ^ *(uint *)(param_1 + 0x18d4)) & 1
  ;
  return param_1;
}


// ==== 103cfc20 FUN_103cfc20 depth=0 from=raiz callees=AEmitter::AEmitter@10307ab8
// strings: 

AEmitter * __thiscall FUN_103cfc20(AEmitter *param_1,AEmitter *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10805e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AEmitter::AEmitter(param_1,param_2);
  *(undefined ***)param_1 = AAirEmitter::vftable;
  *(uint *)(param_1 + 0x4dc) =
       *(uint *)(param_1 + 0x4dc) ^ (*(uint *)(param_1 + 0x4dc) ^ *(uint *)(param_2 + 0x4dc)) & 1;
  *(uint *)(param_1 + 0x4dc) =
       (*(uint *)(param_2 + 0x4dc) ^ *(uint *)(param_1 + 0x4dc)) & 2 ^ *(uint *)(param_1 + 0x4dc);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  ExceptionList = local_c;
  return param_1;
}


// ==== 103cfd60 FUN_103cfd60 depth=0 from=raiz callees=AEmitter::operator=@10304543
// strings: 

AEmitter * __thiscall FUN_103cfd60(AEmitter *param_1,AEmitter *param_2)

{
  AEmitter::operator=(param_1,param_2);
  *(uint *)(param_1 + 0x4dc) =
       *(uint *)(param_1 + 0x4dc) ^ (*(uint *)(param_1 + 0x4dc) ^ *(uint *)(param_2 + 0x4dc)) & 1;
  *(uint *)(param_1 + 0x4dc) =
       (*(uint *)(param_2 + 0x4dc) ^ *(uint *)(param_1 + 0x4dc)) & 2 ^ *(uint *)(param_1 + 0x4dc);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  return param_1;
}


// ==== 103d0440 FUN_103d0440 depth=0 from=raiz callees=AEmitter::AEmitter@10307ab8 FNMagicInfo::FNMagicInfo@10304a2a
// strings: 

AEmitter * __thiscall FUN_103d0440(AEmitter *param_1,AEmitter *param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10805f66;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AEmitter::AEmitter(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = ANProjectile::vftable;
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_2 + 0x4dc);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(uint *)(param_1 + 0x504) =
       *(uint *)(param_1 + 0x504) ^ (*(uint *)(param_1 + 0x504) ^ *(uint *)(param_2 + 0x504)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x504) ^ *(uint *)(param_1 + 0x504)) & 2 ^ *(uint *)(param_1 + 0x504)
  ;
  *(uint *)(param_1 + 0x504) = uVar1;
  *(uint *)(param_1 + 0x504) = (*(uint *)(param_2 + 0x504) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_2 + 0x50c);
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_2 + 0x510);
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x514);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_2 + 0x518);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_2 + 0x51c);
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_2 + 0x520);
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_2 + 0x524);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_2 + 0x528);
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_2 + 0x52c);
  *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_2 + 0x530);
  *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_2 + 0x534);
  FNMagicInfo::FNMagicInfo((FNMagicInfo *)(param_1 + 0x538),(FNMagicInfo *)(param_2 + 0x538));
  ExceptionList = local_c;
  return param_1;
}


// ==== 103d0600 FUN_103d0600 depth=0 from=raiz callees=AEmitter::operator=@10304543 FNMagicInfo::operator=@10307dab
// strings: 

AEmitter * __thiscall FUN_103d0600(AEmitter *param_1,AEmitter *param_2)

{
  uint uVar1;
  
  AEmitter::operator=(param_1,param_2);
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_2 + 0x4dc);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(uint *)(param_1 + 0x504) =
       *(uint *)(param_1 + 0x504) ^ (*(uint *)(param_1 + 0x504) ^ *(uint *)(param_2 + 0x504)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x504) ^ *(uint *)(param_1 + 0x504)) & 2 ^ *(uint *)(param_1 + 0x504)
  ;
  *(uint *)(param_1 + 0x504) = uVar1;
  *(uint *)(param_1 + 0x504) = (*(uint *)(param_2 + 0x504) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_2 + 0x50c);
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_2 + 0x510);
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x514);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_2 + 0x518);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_2 + 0x51c);
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_2 + 0x520);
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_2 + 0x524);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_2 + 0x528);
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_2 + 0x52c);
  *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_2 + 0x530);
  *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_2 + 0x534);
  FNMagicInfo::operator=((FNMagicInfo *)(param_1 + 0x538),(FNMagicInfo *)(param_2 + 0x538));
  return param_1;
}


// ==== 103d0bd0 FUN_103d0bd0 depth=0 from=raiz callees=AEmitter::AEmitter@10307ab8 FNMagicInfo::FNMagicInfo@10304a2a
// strings: 

AEmitter * __thiscall FUN_103d0bd0(AEmitter *param_1,AEmitter *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10806056;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AEmitter::AEmitter(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = ANCubics::vftable;
  param_1[0x4dc] = param_2[0x4dc];
  param_1[0x4dd] = param_2[0x4dd];
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  FNMagicInfo::FNMagicInfo((FNMagicInfo *)(param_1 + 0x508),(FNMagicInfo *)(param_2 + 0x508));
  ExceptionList = local_c;
  return param_1;
}


// ==== 103d0d10 FUN_103d0d10 depth=0 from=raiz callees=AEmitter::operator=@10304543 FNMagicInfo::operator=@10307dab
// strings: 

AEmitter * __thiscall FUN_103d0d10(AEmitter *param_1,AEmitter *param_2)

{
  AEmitter::operator=(param_1,param_2);
  param_1[0x4dc] = param_2[0x4dc];
  param_1[0x4dd] = param_2[0x4dd];
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  FNMagicInfo::operator=((FNMagicInfo *)(param_1 + 0x508),(FNMagicInfo *)(param_2 + 0x508));
  return param_1;
}


// ==== 103d1710 FUN_103d1710 depth=0 from=raiz callees=thunk_FUN_103858b0@1030555b AActor::operator=@10315177 CORE.DLL::FStringNoInit::operator=@EXTERNAL:000000b2 thunk_FUN_103859c0@10307c02
// strings: 

AActor * __thiscall FUN_103d1710(AActor *param_1,AActor *param_2)

{
  uint uVar1;
  
  AActor::operator=(param_1,param_2);
  *(uint *)(param_1 + 0x3bc) =
       *(uint *)(param_1 + 0x3bc) ^ (*(uint *)(param_2 + 0x3bc) ^ *(uint *)(param_1 + 0x3bc)) & 1;
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x3c0);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x3c4),(FStringNoInit *)(param_2 + 0x3c4));
  *(uint *)(param_1 + 0x3d0) =
       *(uint *)(param_1 + 0x3d0) ^ (*(uint *)(param_2 + 0x3d0) ^ *(uint *)(param_1 + 0x3d0)) & 1;
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_2 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_2 + 0x3dc);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x3e0);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x3e4);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 1000);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_2 + 0x3ec);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_2 + 0x3f4);
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_2 + 0x3f8);
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_2 + 0x3fc);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x400);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_2 + 0x404);
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_2 + 0x408);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x40c);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_2 + 0x418);
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_2 + 0x41c);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x420);
  *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(param_2 + 0x424);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x428);
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_2 + 0x42c);
  thunk_FUN_103858b0(param_2 + 0x430);
  thunk_FUN_103858b0(param_2 + 0x43c);
  param_1[0x448] = param_2[0x448];
  param_1[0x449] = param_2[0x449];
  param_1[0x44a] = param_2[0x44a];
  param_1[1099] = param_2[1099];
  param_1[0x44c] = param_2[0x44c];
  param_1[0x44d] = param_2[0x44d];
  param_1[0x44e] = param_2[0x44e];
  param_1[0x44f] = param_2[0x44f];
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x450);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_2 + 0x454);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_2 + 0x45c);
  *(uint *)(param_1 + 0x460) =
       *(uint *)(param_1 + 0x460) ^ (*(uint *)(param_1 + 0x460) ^ *(uint *)(param_2 + 0x460)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x460) ^ *(uint *)(param_1 + 0x460)) & 2 ^ *(uint *)(param_1 + 0x460)
  ;
  *(uint *)(param_1 + 0x460) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x460) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x460) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x460) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x460) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x460) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x460) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x460) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x460) = uVar1;
  *(uint *)(param_1 + 0x460) = (*(uint *)(param_2 + 0x460) ^ uVar1) & 0x40 ^ uVar1;
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_2 + 0x46c);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x478);
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_2 + 0x47c);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 0x480);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_2 + 0x484);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_2 + 0x488);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_2 + 0x48c);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0x490);
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_2 + 0x494);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_2 + 0x49c);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_2 + 0x4a4);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x4a8);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_2 + 0x4ac);
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x4b0);
  *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_2 + 0x4b4);
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_2 + 0x4b8);
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_2 + 0x4bc);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x4c0);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_2 + 0x4c4);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_2 + 0x4c8);
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_2 + 0x4cc);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_2 + 0x4d4);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x4d8);
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_2 + 0x4dc);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_2 + 0x50c);
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_2 + 0x510);
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x514);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_2 + 0x518);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_2 + 0x51c);
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_2 + 0x520);
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_2 + 0x524);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_2 + 0x528);
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_2 + 0x52c);
  *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_2 + 0x530);
  *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_2 + 0x534);
  *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(param_2 + 0x538);
  *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_2 + 0x53c);
  *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_2 + 0x540);
  *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(param_2 + 0x544);
  *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_2 + 0x548);
  *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_2 + 0x54c);
  *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(param_2 + 0x550);
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_2 + 0x554);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_2 + 0x558);
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_2 + 0x55c);
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_2 + 0x560);
  *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(param_2 + 0x564);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_2 + 0x568);
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_2 + 0x56c);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_2 + 0x570);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_2 + 0x574);
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_2 + 0x578);
  *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(param_2 + 0x57c);
  *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_2 + 0x580);
  *(undefined4 *)(param_1 + 0x584) = *(undefined4 *)(param_2 + 0x584);
  *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_2 + 0x588);
  *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_2 + 0x58c);
  *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_2 + 0x590);
  *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_2 + 0x594);
  *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_2 + 0x598);
  *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_2 + 0x59c);
  *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(param_2 + 0x5a0);
  *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(param_2 + 0x5a4);
  *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_2 + 0x5a8);
  *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(param_2 + 0x5ac);
  *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_2 + 0x5b0);
  *(undefined4 *)(param_1 + 0x5b4) = *(undefined4 *)(param_2 + 0x5b4);
  *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_2 + 0x5b8);
  *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_2 + 0x5bc);
  *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_2 + 0x5c0);
  *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(param_2 + 0x5c4);
  *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_2 + 0x5c8);
  *(undefined4 *)(param_1 + 0x5cc) = *(undefined4 *)(param_2 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_2 + 0x5d0);
  *(uint *)(param_1 + 0x5d4) =
       *(uint *)(param_1 + 0x5d4) ^ (*(uint *)(param_1 + 0x5d4) ^ *(uint *)(param_2 + 0x5d4)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x5d4) ^ *(uint *)(param_1 + 0x5d4)) & 2 ^ *(uint *)(param_1 + 0x5d4)
  ;
  *(uint *)(param_1 + 0x5d4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5d4) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x5d4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5d4) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x5d4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5d4) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x5d4) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x5d4) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x5d4) = uVar1;
  *(uint *)(param_1 + 0x5d4) = (*(uint *)(param_2 + 0x5d4) ^ uVar1) & 0x40 ^ uVar1;
  *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(param_2 + 0x5d8);
  *(undefined4 *)(param_1 + 0x5dc) = *(undefined4 *)(param_2 + 0x5dc);
  *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(param_2 + 0x5e0);
  *(undefined4 *)(param_1 + 0x5e4) = *(undefined4 *)(param_2 + 0x5e4);
  *(undefined4 *)(param_1 + 0x5e8) = *(undefined4 *)(param_2 + 0x5e8);
  *(undefined4 *)(param_1 + 0x5ec) = *(undefined4 *)(param_2 + 0x5ec);
  *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(param_2 + 0x5f0);
  *(undefined4 *)(param_1 + 0x5f4) = *(undefined4 *)(param_2 + 0x5f4);
  *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(param_2 + 0x5f8);
  *(undefined4 *)(param_1 + 0x5fc) = *(undefined4 *)(param_2 + 0x5fc);
  *(undefined4 *)(param_1 + 0x600) = *(undefined4 *)(param_2 + 0x600);
  *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)(param_2 + 0x604);
  *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_2 + 0x608);
  *(undefined4 *)(param_1 + 0x60c) = *(undefined4 *)(param_2 + 0x60c);
  *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_2 + 0x610);
  *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_2 + 0x614);
  thunk_FUN_103859c0(param_2 + 0x618);
  *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_2 + 0x624);
  return param_1;
}


// ==== 103d6850 FUN_103d6850 depth=0 from=raiz callees=AActor::AActor@103123f0 CORE.DLL::FStringNoInit::FStringNoInit@EXTERNAL:000000b1 thunk_FUN_103794b0@10309d54
// strings: 

AActor * __thiscall FUN_103d6850(AActor *param_1,AActor *param_2)

{
  uint uVar1;
  int iVar2;
  AActor *pAVar3;
  AActor *pAVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108069ed;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AActor::AActor(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = AController::vftable;
  *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_2 + 0x3bc);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x3c0);
  *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_2 + 0x3c4);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_2 + 0x3cc);
  *(uint *)(param_1 + 0x3d0) =
       *(uint *)(param_1 + 0x3d0) ^ (*(uint *)(param_1 + 0x3d0) ^ *(uint *)(param_2 + 0x3d0)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ *(uint *)(param_1 + 0x3d0)) & 2 ^ *(uint *)(param_1 + 0x3d0)
  ;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  *(uint *)(param_1 + 0x3d0) = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x20000 ^ uVar1;
  param_1[0x3d4] = param_2[0x3d4];
  param_1[0x3d5] = param_2[0x3d5];
  param_1[0x3d6] = param_2[0x3d6];
  param_1[0x3d7] = param_2[0x3d7];
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_2 + 0x3dc);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x3e0);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x3e4);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 1000);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_2 + 0x3ec);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_2 + 0x3f4);
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_2 + 0x3f8);
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_2 + 0x3fc);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x400);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_2 + 0x404);
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_2 + 0x408);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x40c);
  *(uint *)(param_1 + 0x410) =
       *(uint *)(param_1 + 0x410) ^ (*(uint *)(param_2 + 0x410) ^ *(uint *)(param_1 + 0x410)) & 1;
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_2 + 0x418);
  *(uint *)(param_1 + 0x41c) =
       *(uint *)(param_1 + 0x41c) ^ (*(uint *)(param_1 + 0x41c) ^ *(uint *)(param_2 + 0x41c)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x41c) ^ *(uint *)(param_1 + 0x41c)) & 2 ^ *(uint *)(param_1 + 0x41c)
  ;
  *(uint *)(param_1 + 0x41c) = uVar1;
  *(uint *)(param_1 + 0x41c) = (*(uint *)(param_2 + 0x41c) ^ uVar1) & 4 ^ uVar1;
  thunk_FUN_103794b0(param_2 + 0x420);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_2 + 0x42c);
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x430);
  param_1[0x434] = param_2[0x434];
  param_1[0x435] = param_2[0x435];
  *(uint *)(param_1 + 0x438) =
       *(uint *)(param_1 + 0x438) ^ (*(uint *)(param_2 + 0x438) ^ *(uint *)(param_1 + 0x438)) & 1;
  *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x43c);
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x440);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_2 + 0x444);
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_2 + 0x448);
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_2 + 0x44c);
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x450);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_2 + 0x454);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_2 + 0x45c);
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x460);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_2 + 0x46c);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x478);
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_2 + 0x47c);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 0x480);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x484),(FStringNoInit *)(param_2 + 0x484));
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0x490);
  pAVar3 = param_2 + 0x494;
  pAVar4 = param_1 + 0x494;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_2 + 0x4d4);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x4d8);
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_2 + 0x4dc);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_2 + 0x50c);
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_2 + 0x510);
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x514);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_2 + 0x518);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_2 + 0x51c);
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_2 + 0x520);
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_2 + 0x524);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_2 + 0x528);
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_2 + 0x52c);
  *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_2 + 0x530);
  *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_2 + 0x534);
  *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(param_2 + 0x538);
  *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_2 + 0x53c);
  *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_2 + 0x540);
  *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(param_2 + 0x544);
  *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_2 + 0x548);
  *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_2 + 0x54c);
  *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(param_2 + 0x550);
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_2 + 0x554);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_2 + 0x558);
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_2 + 0x55c);
  ExceptionList = local_c;
  return param_1;
}


// ==== 103d7060 FUN_103d7060 depth=0 from=raiz callees=AActor::operator=@10315177 CORE.DLL::FStringNoInit::operator=@EXTERNAL:000000b2 thunk_FUN_103795a0@10311bee
// strings: 

AActor * __thiscall FUN_103d7060(AActor *param_1,AActor *param_2)

{
  uint uVar1;
  AActor *pAVar2;
  int iVar3;
  
  AActor::operator=(param_1,param_2);
  *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_2 + 0x3bc);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x3c0);
  *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_2 + 0x3c4);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_2 + 0x3cc);
  *(uint *)(param_1 + 0x3d0) =
       *(uint *)(param_1 + 0x3d0) ^ (*(uint *)(param_1 + 0x3d0) ^ *(uint *)(param_2 + 0x3d0)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ *(uint *)(param_1 + 0x3d0)) & 2 ^ *(uint *)(param_1 + 0x3d0)
  ;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x3d0) = uVar1;
  *(uint *)(param_1 + 0x3d0) = (*(uint *)(param_2 + 0x3d0) ^ uVar1) & 0x20000 ^ uVar1;
  param_1[0x3d4] = param_2[0x3d4];
  param_1[0x3d5] = param_2[0x3d5];
  param_1[0x3d6] = param_2[0x3d6];
  param_1[0x3d7] = param_2[0x3d7];
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_2 + 0x3dc);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x3e0);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x3e4);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 1000);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_2 + 0x3ec);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_2 + 0x3f4);
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_2 + 0x3f8);
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_2 + 0x3fc);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x400);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_2 + 0x404);
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_2 + 0x408);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x40c);
  *(uint *)(param_1 + 0x410) =
       *(uint *)(param_1 + 0x410) ^ (*(uint *)(param_2 + 0x410) ^ *(uint *)(param_1 + 0x410)) & 1;
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_2 + 0x418);
  *(uint *)(param_1 + 0x41c) =
       *(uint *)(param_1 + 0x41c) ^ (*(uint *)(param_1 + 0x41c) ^ *(uint *)(param_2 + 0x41c)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x41c) ^ *(uint *)(param_1 + 0x41c)) & 2 ^ *(uint *)(param_1 + 0x41c)
  ;
  *(uint *)(param_1 + 0x41c) = uVar1;
  *(uint *)(param_1 + 0x41c) = (*(uint *)(param_2 + 0x41c) ^ uVar1) & 4 ^ uVar1;
  thunk_FUN_103795a0(param_2 + 0x420);
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_2 + 0x42c);
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x430);
  param_1[0x434] = param_2[0x434];
  param_1[0x435] = param_2[0x435];
  *(uint *)(param_1 + 0x438) =
       *(uint *)(param_1 + 0x438) ^ (*(uint *)(param_2 + 0x438) ^ *(uint *)(param_1 + 0x438)) & 1;
  *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x43c);
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x440);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_2 + 0x444);
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_2 + 0x448);
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_2 + 0x44c);
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x450);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_2 + 0x454);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_2 + 0x45c);
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x460);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_2 + 0x46c);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x478);
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_2 + 0x47c);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 0x480);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x484),(FStringNoInit *)(param_2 + 0x484));
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0x490);
  pAVar2 = param_1 + 0x494;
  iVar3 = 0x10;
  do {
    *(undefined4 *)pAVar2 = *(undefined4 *)(pAVar2 + ((int)param_2 - (int)param_1));
    pAVar2 = pAVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_2 + 0x4d4);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x4d8);
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_2 + 0x4dc);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_2 + 0x50c);
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_2 + 0x510);
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x514);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_2 + 0x518);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_2 + 0x51c);
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_2 + 0x520);
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_2 + 0x524);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_2 + 0x528);
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_2 + 0x52c);
  *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_2 + 0x530);
  *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_2 + 0x534);
  *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(param_2 + 0x538);
  *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_2 + 0x53c);
  *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_2 + 0x540);
  *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(param_2 + 0x544);
  *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_2 + 0x548);
  *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_2 + 0x54c);
  *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(param_2 + 0x550);
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_2 + 0x554);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_2 + 0x558);
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_2 + 0x55c);
  return param_1;
}


// ==== 103d7bb0 FUN_103d7bb0 depth=0 from=raiz callees=CORE.DLL::FStringNoInit::FStringNoInit@EXTERNAL:000000b1 `eh_vector_copy_constructor_iterator'@107a6770 AController::AController@1030390e thunk_FUN_1037cff0@1030da99
// strings: 

AController * __thiscall FUN_103d7bb0(AController *param_1,AController *param_2)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  AController *pAVar5;
  AController *pAVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10806c96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AController::AController(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = APlayerController::vftable;
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_2 + 0x560);
  *(uint *)(param_1 + 0x564) =
       *(uint *)(param_1 + 0x564) ^ (*(uint *)(param_1 + 0x564) ^ *(uint *)(param_2 + 0x564)) & 1;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ *(uint *)(param_1 + 0x564)) & 2 ^ *(uint *)(param_1 + 0x564)
  ;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 4 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 8 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x10 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x20 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x40 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x80 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x100 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x200 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x400 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x800 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x1000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x2000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x4000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x8000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x10000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x20000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x40000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x80000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x100000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x200000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x400000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x800000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x1000000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x2000000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x4000000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x8000000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x10000000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x20000000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x40000000 ^ uVar3;
  *(uint *)(param_1 + 0x564) = uVar3;
  *(uint *)(param_1 + 0x564) =
       (*(uint *)(param_2 + 0x564) ^ uVar3) & 0x7fffffff ^ *(uint *)(param_2 + 0x564);
  param_1[0x568] = param_2[0x568];
  param_1[0x569] = param_2[0x569];
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_2 + 0x56c);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_2 + 0x570);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_2 + 0x574);
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_2 + 0x578);
  *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(param_2 + 0x57c);
  *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_2 + 0x580);
  *(undefined4 *)(param_1 + 0x584) = *(undefined4 *)(param_2 + 0x584);
  *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_2 + 0x588);
  *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_2 + 0x58c);
  *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_2 + 0x590);
  *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_2 + 0x594);
  *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_2 + 0x598);
  *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_2 + 0x59c);
  param_1[0x5a0] = param_2[0x5a0];
  param_1[0x5a1] = param_2[0x5a1];
  param_1[0x5a2] = param_2[0x5a2];
  param_1[0x5a3] = param_2[0x5a3];
  param_1[0x5a4] = param_2[0x5a4];
  param_1[0x5a5] = param_2[0x5a5];
  param_1[0x5a6] = param_2[0x5a6];
  param_1[0x5a7] = param_2[0x5a7];
  param_1[0x5a8] = param_2[0x5a8];
  *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(param_2 + 0x5ac);
  *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_2 + 0x5b0);
  *(undefined4 *)(param_1 + 0x5b4) = *(undefined4 *)(param_2 + 0x5b4);
  *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_2 + 0x5b8);
  *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_2 + 0x5bc);
  *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_2 + 0x5c0);
  *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(param_2 + 0x5c4);
  *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_2 + 0x5c8);
  *(undefined4 *)(param_1 + 0x5cc) = *(undefined4 *)(param_2 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_2 + 0x5d0);
  *(undefined4 *)(param_1 + 0x5d4) = *(undefined4 *)(param_2 + 0x5d4);
  *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(param_2 + 0x5d8);
  *(undefined4 *)(param_1 + 0x5dc) = *(undefined4 *)(param_2 + 0x5dc);
  *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(param_2 + 0x5e0);
  thunk_FUN_1037cff0(param_2 + 0x5e4);
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  *(uint *)(param_1 + 0x5f0) =
       *(uint *)(param_1 + 0x5f0) ^ (*(uint *)(param_2 + 0x5f0) ^ *(uint *)(param_1 + 0x5f0)) & 1;
  *(undefined4 *)(param_1 + 0x5f4) = *(undefined4 *)(param_2 + 0x5f4);
  *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(param_2 + 0x5f8);
  *(undefined4 *)(param_1 + 0x5fc) = *(undefined4 *)(param_2 + 0x5fc);
  *(undefined4 *)(param_1 + 0x600) = *(undefined4 *)(param_2 + 0x600);
  *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)(param_2 + 0x604);
  *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_2 + 0x608);
  *(undefined4 *)(param_1 + 0x60c) = *(undefined4 *)(param_2 + 0x60c);
  *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_2 + 0x610);
  *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_2 + 0x614);
  pAVar5 = param_2 + 0x618;
  pAVar6 = param_1 + 0x618;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pAVar6 = *(undefined4 *)pAVar5;
    pAVar5 = pAVar5 + 4;
    pAVar6 = pAVar6 + 4;
  }
  local_4._0_1_ = 3;
  *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_2 + 0x658);
  *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_2 + 0x65c);
  *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_2 + 0x660);
  *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(param_2 + 0x664);
  *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(param_2 + 0x668);
  *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_2 + 0x66c);
  *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(param_2 + 0x670);
  *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(param_2 + 0x674);
  *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_2 + 0x678);
  *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(param_2 + 0x67c);
  *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(param_2 + 0x680);
  *(undefined4 *)(param_1 + 0x684) = *(undefined4 *)(param_2 + 0x684);
  *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(param_2 + 0x688);
  *(undefined4 *)(param_1 + 0x68c) = *(undefined4 *)(param_2 + 0x68c);
  *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(param_2 + 0x690);
  *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(param_2 + 0x694);
  *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(param_2 + 0x698);
  *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(param_2 + 0x69c);
  *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_2 + 0x6a0);
  *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(param_2 + 0x6a4);
  *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_2 + 0x6a8);
  *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(param_2 + 0x6ac);
  *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_2 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(param_2 + 0x6b4);
  *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_2 + 0x6b8);
  *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(param_2 + 0x6bc);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x6c0),(FStringNoInit *)(param_2 + 0x6c0));
  local_4._0_1_ = 4;
  param_1[0x6cc] = param_2[0x6cc];
  *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_2 + 0x6d0);
  *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_2 + 0x6d4);
  *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_2 + 0x6d8);
  pcVar1 = ~FStringNoInit_exref;
  *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(param_2 + 0x6dc);
  *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_2 + 0x6e0);
  *(undefined4 *)(param_1 + 0x6e4) = *(undefined4 *)(param_2 + 0x6e4);
  *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(param_2 + 0x6e8);
  *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(param_2 + 0x6ec);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_2 + 0x6f0);
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_2 + 0x6f4);
  pcVar2 = FStringNoInit_exref;
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_2 + 0x6f8);
  _eh_vector_copy_constructor_iterator_(param_1 + 0x6fc,param_2 + 0x6fc,0xc,4,pcVar2,pcVar1);
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(param_2 + 0x72c);
  *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(param_2 + 0x730);
  *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(param_2 + 0x734);
  *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(param_2 + 0x738);
  *(undefined4 *)(param_1 + 0x73c) = *(undefined4 *)(param_2 + 0x73c);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x740),(FStringNoInit *)(param_2 + 0x740));
  local_4._0_1_ = 5;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x74c),(FStringNoInit *)(param_2 + 0x74c));
  local_4._0_1_ = 6;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x758),(FStringNoInit *)(param_2 + 0x758));
  local_4._0_1_ = 7;
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x764),(FStringNoInit *)(param_2 + 0x764));
  local_4._0_1_ = 8;
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_2 + 0x770);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x774),(FStringNoInit *)(param_2 + 0x774));
  local_4 = CONCAT31(local_4._1_3_,9);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x780),(FStringNoInit *)(param_2 + 0x780));
  *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(param_2 + 0x78c);
  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_2 + 0x790);
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_2 + 0x794);
  *(undefined4 *)(param_1 + 0x798) = *(undefined4 *)(param_2 + 0x798);
  *(undefined4 *)(param_1 + 0x79c) = *(undefined4 *)(param_2 + 0x79c);
  *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(param_2 + 0x7a0);
  *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(param_2 + 0x7a4);
  *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(param_2 + 0x7a8);
  *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_2 + 0x7ac);
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_2 + 0x7b0);
  *(undefined4 *)(param_1 + 0x7b4) = *(undefined4 *)(param_2 + 0x7b4);
  *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(param_2 + 0x7b8);
  *(undefined4 *)(param_1 + 0x7bc) = *(undefined4 *)(param_2 + 0x7bc);
  *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_2 + 0x7c0);
  *(undefined4 *)(param_1 + 0x7c4) = *(undefined4 *)(param_2 + 0x7c4);
  *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(param_2 + 0x7c8);
  *(undefined4 *)(param_1 + 0x7cc) = *(undefined4 *)(param_2 + 0x7cc);
  *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(param_2 + 2000);
  *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(param_2 + 0x7d4);
  *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(param_2 + 0x7d8);
  *(undefined4 *)(param_1 + 0x7dc) = *(undefined4 *)(param_2 + 0x7dc);
  *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(param_2 + 0x7e0);
  *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(param_2 + 0x7e4);
  *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_2 + 0x7e8);
  *(undefined4 *)(param_1 + 0x7ec) = *(undefined4 *)(param_2 + 0x7ec);
  *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_2 + 0x7f0);
  *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(param_2 + 0x7f4);
  *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_2 + 0x7f8);
  *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_2 + 0x7fc);
  *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_2 + 0x800);
  *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(param_2 + 0x804);
  *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(param_2 + 0x808);
  *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(param_2 + 0x80c);
  *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(param_2 + 0x810);
  *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(param_2 + 0x814);
  *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(param_2 + 0x818);
  *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(param_2 + 0x81c);
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_2 + 0x820);
  *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_2 + 0x824);
  *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_2 + 0x828);
  *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(param_2 + 0x82c);
  *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(param_2 + 0x830);
  *(uint *)(param_1 + 0x834) =
       *(uint *)(param_1 + 0x834) ^ (*(uint *)(param_2 + 0x834) ^ *(uint *)(param_1 + 0x834)) & 1;
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(param_2 + 0x838);
  *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(param_2 + 0x83c);
  *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_2 + 0x840);
  *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(param_2 + 0x844);
  *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(param_2 + 0x848);
  *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(param_2 + 0x84c);
  *(undefined4 *)(param_1 + 0x850) = *(undefined4 *)(param_2 + 0x850);
  ExceptionList = local_c;
  return param_1;
}


// ==== 103d8930 FUN_103d8930 depth=0 from=raiz callees=CORE.DLL::FStringNoInit::operator=@EXTERNAL:000000b2 thunk_FUN_10385ad0@10313cd7 AController::operator=@10307cb6
// strings: 

AController * __thiscall FUN_103d8930(AController *param_1,AController *param_2)

{
  AController *pAVar1;
  uint uVar2;
  int iVar3;
  AController *pAVar4;
  AController *pAVar5;
  
  pAVar1 = param_2;
  AController::operator=(param_1,param_2);
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_2 + 0x560);
  *(uint *)(param_1 + 0x564) =
       *(uint *)(param_1 + 0x564) ^ (*(uint *)(param_1 + 0x564) ^ *(uint *)(param_2 + 0x564)) & 1;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ *(uint *)(param_1 + 0x564)) & 2 ^ *(uint *)(param_1 + 0x564)
  ;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 4 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 8 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x10 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x20 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x40 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x80 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x100 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x200 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x400 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x800 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x1000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x2000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x4000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x8000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x10000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x20000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x40000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x80000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x100000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x200000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x400000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x800000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x1000000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x2000000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x4000000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x8000000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x10000000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x20000000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  uVar2 = (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x40000000 ^ uVar2;
  *(uint *)(param_1 + 0x564) = uVar2;
  *(uint *)(param_1 + 0x564) =
       (*(uint *)(param_2 + 0x564) ^ uVar2) & 0x7fffffff ^ *(uint *)(param_2 + 0x564);
  param_1[0x568] = param_2[0x568];
  param_1[0x569] = param_2[0x569];
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_2 + 0x56c);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_2 + 0x570);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_2 + 0x574);
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_2 + 0x578);
  *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(param_2 + 0x57c);
  *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_2 + 0x580);
  *(undefined4 *)(param_1 + 0x584) = *(undefined4 *)(param_2 + 0x584);
  *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_2 + 0x588);
  *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_2 + 0x58c);
  *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_2 + 0x590);
  *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_2 + 0x594);
  *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_2 + 0x598);
  *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_2 + 0x59c);
  param_1[0x5a0] = param_2[0x5a0];
  param_1[0x5a1] = param_2[0x5a1];
  param_1[0x5a2] = param_2[0x5a2];
  param_1[0x5a3] = param_2[0x5a3];
  param_1[0x5a4] = param_2[0x5a4];
  param_1[0x5a5] = param_2[0x5a5];
  param_1[0x5a6] = param_2[0x5a6];
  param_1[0x5a7] = param_2[0x5a7];
  param_1[0x5a8] = param_2[0x5a8];
  *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(param_2 + 0x5ac);
  *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_2 + 0x5b0);
  *(undefined4 *)(param_1 + 0x5b4) = *(undefined4 *)(param_2 + 0x5b4);
  *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_2 + 0x5b8);
  *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_2 + 0x5bc);
  *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_2 + 0x5c0);
  *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(param_2 + 0x5c4);
  *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_2 + 0x5c8);
  *(undefined4 *)(param_1 + 0x5cc) = *(undefined4 *)(param_2 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_2 + 0x5d0);
  *(undefined4 *)(param_1 + 0x5d4) = *(undefined4 *)(param_2 + 0x5d4);
  *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(param_2 + 0x5d8);
  *(undefined4 *)(param_1 + 0x5dc) = *(undefined4 *)(param_2 + 0x5dc);
  *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(param_2 + 0x5e0);
  thunk_FUN_10385ad0(param_2 + 0x5e4);
  *(uint *)(param_1 + 0x5f0) =
       *(uint *)(param_1 + 0x5f0) ^ (*(uint *)(param_2 + 0x5f0) ^ *(uint *)(param_1 + 0x5f0)) & 1;
  *(undefined4 *)(param_1 + 0x5f4) = *(undefined4 *)(param_2 + 0x5f4);
  *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(param_2 + 0x5f8);
  *(undefined4 *)(param_1 + 0x5fc) = *(undefined4 *)(param_2 + 0x5fc);
  *(undefined4 *)(param_1 + 0x600) = *(undefined4 *)(param_2 + 0x600);
  *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)(param_2 + 0x604);
  *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_2 + 0x608);
  *(undefined4 *)(param_1 + 0x60c) = *(undefined4 *)(param_2 + 0x60c);
  *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_2 + 0x610);
  *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_2 + 0x614);
  pAVar5 = param_2 + 0x618;
  pAVar4 = param_1 + 0x618;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar5;
    pAVar5 = pAVar5 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_2 + 0x658);
  *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_2 + 0x65c);
  *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_2 + 0x660);
  *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(param_2 + 0x664);
  *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(param_2 + 0x668);
  *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_2 + 0x66c);
  *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(param_2 + 0x670);
  *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(param_2 + 0x674);
  *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_2 + 0x678);
  *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(param_2 + 0x67c);
  *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(param_2 + 0x680);
  *(undefined4 *)(param_1 + 0x684) = *(undefined4 *)(param_2 + 0x684);
  *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(param_2 + 0x688);
  *(undefined4 *)(param_1 + 0x68c) = *(undefined4 *)(param_2 + 0x68c);
  *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(param_2 + 0x690);
  *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(param_2 + 0x694);
  *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(param_2 + 0x698);
  *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(param_2 + 0x69c);
  *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_2 + 0x6a0);
  *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(param_2 + 0x6a4);
  *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_2 + 0x6a8);
  *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(param_2 + 0x6ac);
  *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_2 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(param_2 + 0x6b4);
  *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_2 + 0x6b8);
  *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(param_2 + 0x6bc);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x6c0),(FStringNoInit *)(param_2 + 0x6c0));
  param_1[0x6cc] = param_2[0x6cc];
  *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_2 + 0x6d0);
  *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_2 + 0x6d4);
  *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_2 + 0x6d8);
  pAVar5 = param_1 + 0x6fc;
  *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(param_2 + 0x6dc);
  iVar3 = (int)param_2 - (int)param_1;
  pAVar4 = param_2 + 0x6e0;
  param_2 = (AController *)0x4;
  *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)pAVar4;
  *(undefined4 *)(param_1 + 0x6e4) = *(undefined4 *)(pAVar1 + 0x6e4);
  *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(pAVar1 + 0x6e8);
  *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(pAVar1 + 0x6ec);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(pAVar1 + 0x6f0);
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(pAVar1 + 0x6f4);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(pAVar1 + 0x6f8);
  do {
    FStringNoInit::operator=((FStringNoInit *)pAVar5,(FStringNoInit *)(pAVar5 + iVar3));
    pAVar5 = pAVar5 + 0xc;
    param_2 = (AController *)((int)param_2 + -1);
  } while (param_2 != (AController *)0x0);
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(pAVar1 + 0x72c);
  *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(pAVar1 + 0x730);
  *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(pAVar1 + 0x734);
  *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(pAVar1 + 0x738);
  *(undefined4 *)(param_1 + 0x73c) = *(undefined4 *)(pAVar1 + 0x73c);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x740),(FStringNoInit *)(pAVar1 + 0x740));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x74c),(FStringNoInit *)(pAVar1 + 0x74c));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x758),(FStringNoInit *)(pAVar1 + 0x758));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x764),(FStringNoInit *)(pAVar1 + 0x764));
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(pAVar1 + 0x770);
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x774),(FStringNoInit *)(pAVar1 + 0x774));
  FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x780),(FStringNoInit *)(pAVar1 + 0x780));
  *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(pAVar1 + 0x78c);
  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(pAVar1 + 0x790);
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(pAVar1 + 0x794);
  *(undefined4 *)(param_1 + 0x798) = *(undefined4 *)(pAVar1 + 0x798);
  *(undefined4 *)(param_1 + 0x79c) = *(undefined4 *)(pAVar1 + 0x79c);
  *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(pAVar1 + 0x7a0);
  *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(pAVar1 + 0x7a4);
  *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(pAVar1 + 0x7a8);
  *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(pAVar1 + 0x7ac);
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(pAVar1 + 0x7b0);
  *(undefined4 *)(param_1 + 0x7b4) = *(undefined4 *)(pAVar1 + 0x7b4);
  *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(pAVar1 + 0x7b8);
  *(undefined4 *)(param_1 + 0x7bc) = *(undefined4 *)(pAVar1 + 0x7bc);
  *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(pAVar1 + 0x7c0);
  *(undefined4 *)(param_1 + 0x7c4) = *(undefined4 *)(pAVar1 + 0x7c4);
  *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(pAVar1 + 0x7c8);
  *(undefined4 *)(param_1 + 0x7cc) = *(undefined4 *)(pAVar1 + 0x7cc);
  *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(pAVar1 + 2000);
  *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(pAVar1 + 0x7d4);
  *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(pAVar1 + 0x7d8);
  *(undefined4 *)(param_1 + 0x7dc) = *(undefined4 *)(pAVar1 + 0x7dc);
  *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(pAVar1 + 0x7e0);
  *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(pAVar1 + 0x7e4);
  *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(pAVar1 + 0x7e8);
  *(undefined4 *)(param_1 + 0x7ec) = *(undefined4 *)(pAVar1 + 0x7ec);
  *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(pAVar1 + 0x7f0);
  *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(pAVar1 + 0x7f4);
  *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(pAVar1 + 0x7f8);
  *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(pAVar1 + 0x7fc);
  *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(pAVar1 + 0x800);
  *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(pAVar1 + 0x804);
  *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(pAVar1 + 0x808);
  *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(pAVar1 + 0x80c);
  *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(pAVar1 + 0x810);
  *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(pAVar1 + 0x814);
  *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(pAVar1 + 0x818);
  *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(pAVar1 + 0x81c);
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(pAVar1 + 0x820);
  *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(pAVar1 + 0x824);
  *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(pAVar1 + 0x828);
  *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(pAVar1 + 0x82c);
  *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(pAVar1 + 0x830);
  *(uint *)(param_1 + 0x834) =
       *(uint *)(param_1 + 0x834) ^ (*(uint *)(pAVar1 + 0x834) ^ *(uint *)(param_1 + 0x834)) & 1;
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(pAVar1 + 0x838);
  *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(pAVar1 + 0x83c);
  *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(pAVar1 + 0x840);
  *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(pAVar1 + 0x844);
  *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(pAVar1 + 0x848);
  *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(pAVar1 + 0x84c);
  *(undefined4 *)(param_1 + 0x850) = *(undefined4 *)(pAVar1 + 0x850);
  return param_1;
}


// ==== 103e5ff0 FUN_103e5ff0 depth=0 from=raiz callees=thunk_FUN_1037d460@1030e17e thunk_FUN_103794b0@10309d54 thunk_FUN_1037d2e0@10307ad1 CORE.DLL::UObject::UObject@EXTERNAL:0000009d thunk_FUN_1037d5f0@10312a7b thunk_FUN_1037b310@10303e1d CORE.DLL::FStringNoInit::FStringNoInit@EXTERNAL:000000b1 thunk_FUN_1037d530@10302900 thunk_FUN_1037d3a0@1030f763 thunk_FUN_1037d7c0@10301afa thunk_FUN_10379830@103060ff thunk_FUN_1037d6f0@10307441
// strings: 

UObject * __thiscall FUN_103e5ff0(UObject *param_1,UObject *param_2)

{
  uint uVar1;
  int iVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808a91;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = UParticleEmitter::vftable;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(uint *)(param_1 + 0x40) =
       *(uint *)(param_1 + 0x40) ^ (*(uint *)(param_1 + 0x40) ^ *(uint *)(param_2 + 0x40)) & 1;
  *(uint *)(param_1 + 0x40) =
       (*(uint *)(param_2 + 0x40) ^ *(uint *)(param_1 + 0x40)) & 2 ^ *(uint *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(uint *)(param_1 + 0x68) =
       *(uint *)(param_1 + 0x68) ^ (*(uint *)(param_2 + 0x68) ^ *(uint *)(param_1 + 0x68)) & 1;
  thunk_FUN_1037b310(param_2 + 0x6c);
  local_4._0_1_ = 2;
  *(uint *)(param_1 + 0x78) =
       *(uint *)(param_1 + 0x78) ^ (*(uint *)(param_2 + 0x78) ^ *(uint *)(param_1 + 0x78)) & 1;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(uint *)(param_1 + 0xa4) =
       *(uint *)(param_1 + 0xa4) ^ (*(uint *)(param_1 + 0xa4) ^ *(uint *)(param_2 + 0xa4)) & 1;
  *(uint *)(param_1 + 0xa4) =
       (*(uint *)(param_2 + 0xa4) ^ *(uint *)(param_1 + 0xa4)) & 2 ^ *(uint *)(param_1 + 0xa4);
  thunk_FUN_1037d2e0(param_2 + 0xa8);
  local_4._0_1_ = 4;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(uint *)(param_1 + 0xec) =
       *(uint *)(param_1 + 0xec) ^ (*(uint *)(param_2 + 0xec) ^ *(uint *)(param_1 + 0xec)) & 1;
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(uint *)(param_1 + 0x104) =
       *(uint *)(param_1 + 0x104) ^ (*(uint *)(param_1 + 0x104) ^ *(uint *)(param_2 + 0x104)) & 1;
  *(uint *)(param_1 + 0x104) =
       (*(uint *)(param_2 + 0x104) ^ *(uint *)(param_1 + 0x104)) & 2 ^ *(uint *)(param_1 + 0x104);
  param_1[0x108] = param_2[0x108];
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *(uint *)(param_1 + 0x110) =
       *(uint *)(param_1 + 0x110) ^ (*(uint *)(param_2 + 0x110) ^ *(uint *)(param_1 + 0x110)) & 1;
  param_1[0x114] = param_2[0x114];
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  param_1[0x120] = param_2[0x120];
  *(uint *)(param_1 + 0x124) =
       *(uint *)(param_1 + 0x124) ^ (*(uint *)(param_2 + 0x124) ^ *(uint *)(param_1 + 0x124)) & 1;
  thunk_FUN_1037d3a0(param_2 + 0x128);
  local_4._0_1_ = 6;
  *(uint *)(param_1 + 0x134) =
       *(uint *)(param_1 + 0x134) ^ (*(uint *)(param_1 + 0x134) ^ *(uint *)(param_2 + 0x134)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ *(uint *)(param_1 + 0x134)) & 2 ^ *(uint *)(param_1 + 0x134)
  ;
  *(uint *)(param_1 + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x134) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x134) = uVar1;
  *(uint *)(param_1 + 0x134) = (*(uint *)(param_2 + 0x134) ^ uVar1) & 0x100 ^ uVar1;
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  FStringNoInit::FStringNoInit
            ((FStringNoInit *)(param_1 + 0x140),(FStringNoInit *)(param_2 + 0x140));
  local_4._0_1_ = 7;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  param_1[0x174] = param_2[0x174];
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  param_1[0x1a4] = param_2[0x1a4];
  *(uint *)(param_1 + 0x1a8) =
       *(uint *)(param_1 + 0x1a8) ^ (*(uint *)(param_2 + 0x1a8) ^ *(uint *)(param_1 + 0x1a8)) & 1;
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(uint *)(param_1 + 0x1dc) =
       *(uint *)(param_1 + 0x1dc) ^ (*(uint *)(param_1 + 0x1dc) ^ *(uint *)(param_2 + 0x1dc)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x1dc) ^ *(uint *)(param_1 + 0x1dc)) & 2 ^ *(uint *)(param_1 + 0x1dc)
  ;
  *(uint *)(param_1 + 0x1dc) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x1dc) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x1dc) = uVar1;
  *(uint *)(param_1 + 0x1dc) = (*(uint *)(param_2 + 0x1dc) ^ uVar1) & 8 ^ uVar1;
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
  *(uint *)(param_1 + 0x1f8) =
       *(uint *)(param_1 + 0x1f8) ^ (*(uint *)(param_1 + 0x1f8) ^ *(uint *)(param_2 + 0x1f8)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x1f8) ^ *(uint *)(param_1 + 0x1f8)) & 2 ^ *(uint *)(param_1 + 0x1f8)
  ;
  *(uint *)(param_1 + 0x1f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x1f8) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x1f8) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x1f8) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x1f8) = uVar1;
  *(uint *)(param_1 + 0x1f8) = (*(uint *)(param_2 + 0x1f8) ^ uVar1) & 0x10 ^ uVar1;
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 0x224);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  *(uint *)(param_1 + 0x22c) =
       *(uint *)(param_1 + 0x22c) ^ (*(uint *)(param_2 + 0x22c) ^ *(uint *)(param_1 + 0x22c)) & 1;
  thunk_FUN_1037d460(param_2 + 0x230);
  local_4._0_1_ = 9;
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x23c);
  param_1[0x240] = param_2[0x240];
  *(uint *)(param_1 + 0x244) =
       *(uint *)(param_1 + 0x244) ^ (*(uint *)(param_2 + 0x244) ^ *(uint *)(param_1 + 0x244)) & 1;
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_2 + 0x24c);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_2 + 0x26c);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_2 + 0x28c);
  *(uint *)(param_1 + 0x290) =
       *(uint *)(param_1 + 0x290) ^ (*(uint *)(param_2 + 0x290) ^ *(uint *)(param_1 + 0x290)) & 1;
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_2 + 0x29c);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_2 + 0x2b4);
  *(uint *)(param_1 + 0x2b8) =
       *(uint *)(param_1 + 0x2b8) ^ (*(uint *)(param_1 + 0x2b8) ^ *(uint *)(param_2 + 0x2b8)) & 1;
  *(uint *)(param_1 + 0x2b8) =
       (*(uint *)(param_2 + 0x2b8) ^ *(uint *)(param_1 + 0x2b8)) & 2 ^ *(uint *)(param_1 + 0x2b8);
  thunk_FUN_1037d530(param_2 + 700);
  local_4._0_1_ = 0xb;
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x2cc);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
  *(uint *)(param_1 + 0x2e4) =
       *(uint *)(param_1 + 0x2e4) ^ (*(uint *)(param_2 + 0x2e4) ^ *(uint *)(param_1 + 0x2e4)) & 1;
  param_1[0x2e8] = param_2[0x2e8];
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0x2f4);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  thunk_FUN_1037d5f0(param_2 + 0x304);
  local_4._0_1_ = 0xd;
  param_1[0x310] = param_2[0x310];
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_2 + 0x314);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x318);
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
  param_1[0x324] = param_2[0x324];
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_2 + 0x32c);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x330);
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_2 + 0x33c);
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) ^ (*(uint *)(param_2 + 0x340) ^ *(uint *)(param_1 + 0x340)) & 1;
  param_1[0x344] = param_2[0x344];
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x348);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x350);
  *(uint *)(param_1 + 0x354) =
       *(uint *)(param_1 + 0x354) ^ (*(uint *)(param_1 + 0x354) ^ *(uint *)(param_2 + 0x354)) & 1;
  *(uint *)(param_1 + 0x354) =
       (*(uint *)(param_2 + 0x354) ^ *(uint *)(param_1 + 0x354)) & 2 ^ *(uint *)(param_1 + 0x354);
  thunk_FUN_10379830(param_2 + 0x358);
  local_4._0_1_ = 0xf;
  *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_2 + 0x364);
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x368);
  *(uint *)(param_1 + 0x36c) =
       *(uint *)(param_1 + 0x36c) ^ (*(uint *)(param_2 + 0x36c) ^ *(uint *)(param_1 + 0x36c)) & 1;
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x370);
  *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_2 + 0x374);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x378);
  *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_2 + 0x37c);
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x380);
  *(undefined4 *)(param_1 + 900) = *(undefined4 *)(param_2 + 900);
  *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_2 + 0x388);
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_2 + 0x38c);
  *(uint *)(param_1 + 0x390) =
       *(uint *)(param_1 + 0x390) ^ (*(uint *)(param_1 + 0x390) ^ *(uint *)(param_2 + 0x390)) & 1;
  *(uint *)(param_1 + 0x390) =
       (*(uint *)(param_2 + 0x390) ^ *(uint *)(param_1 + 0x390)) & 2 ^ *(uint *)(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_2 + 0x394);
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_2 + 0x398);
  *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(param_2 + 0x39c);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_2 + 0x3a4);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_2 + 0x3ac);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x3b0);
  *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_2 + 0x3b4);
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_2 + 0x3b8);
  *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_2 + 0x3bc);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x3c0);
  *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_2 + 0x3c4);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_2 + 0x3cc);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_2 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_2 + 0x3dc);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x3e0);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x3e4);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 1000);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_2 + 0x3ec);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_2 + 0x3f4);
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_2 + 0x3f8);
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_2 + 0x3fc);
  param_1[0x400] = param_2[0x400];
  *(uint *)(param_1 + 0x404) =
       *(uint *)(param_1 + 0x404) ^ (*(uint *)(param_2 + 0x404) ^ *(uint *)(param_1 + 0x404)) & 1;
  thunk_FUN_1037d6f0(param_2 + 0x408);
  local_4._0_1_ = 0x11;
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_2 + 0x418);
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_2 + 0x41c);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x420);
  *(uint *)(param_1 + 0x424) =
       *(uint *)(param_1 + 0x424) ^ (*(uint *)(param_1 + 0x424) ^ *(uint *)(param_2 + 0x424)) & 1;
  *(uint *)(param_1 + 0x424) =
       (*(uint *)(param_2 + 0x424) ^ *(uint *)(param_1 + 0x424)) & 2 ^ *(uint *)(param_1 + 0x424);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x428);
  thunk_FUN_1037d7c0(param_2 + 0x42c);
  local_4 = CONCAT31(local_4._1_3_,0x13);
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_2 + 0x438);
  *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x43c);
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x440);
  pUVar3 = param_2 + 0x444;
  pUVar4 = param_1 + 0x444;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x460);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  *(uint *)(param_1 + 0x46c) =
       *(uint *)(param_1 + 0x46c) ^ (*(uint *)(param_1 + 0x46c) ^ *(uint *)(param_2 + 0x46c)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x46c) ^ *(uint *)(param_1 + 0x46c)) & 2 ^ *(uint *)(param_1 + 0x46c)
  ;
  *(uint *)(param_1 + 0x46c) = uVar1;
  *(uint *)(param_1 + 0x46c) = (*(uint *)(param_2 + 0x46c) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x478);
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_2 + 0x47c);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 0x480);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_2 + 0x484);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_2 + 0x488);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_2 + 0x48c);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0x490);
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_2 + 0x494);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_2 + 0x49c);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_2 + 0x4a4);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x4a8);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_2 + 0x4ac);
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x4b0);
  thunk_FUN_103794b0(param_2 + 0x4b4);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x4c0);
  *(uint *)(param_1 + 0x4c4) =
       *(uint *)(param_1 + 0x4c4) ^ (*(uint *)(param_2 + 0x4c4) ^ *(uint *)(param_1 + 0x4c4)) & 1;
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_2 + 0x4c8);
  *(uint *)(param_1 + 0x4cc) =
       *(uint *)(param_1 + 0x4cc) ^ (*(uint *)(param_2 + 0x4cc) ^ *(uint *)(param_1 + 0x4cc)) & 1;
  ExceptionList = local_c;
  return param_1;
}


// ==== 103e7620 FUN_103e7620 depth=0 from=raiz callees=thunk_FUN_1037d9b0@103015c3 UParticleEmitter::UParticleEmitter@10312670 thunk_FUN_1037d8c0@103048d1
// strings: 

UParticleEmitter * __thiscall FUN_103e7620(UParticleEmitter *param_1,UParticleEmitter *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808bd4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = UTrailEmitter::vftable;
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_2 + 0x4d4);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x4d8);
  *(uint *)(param_1 + 0x4dc) =
       *(uint *)(param_1 + 0x4dc) ^ (*(uint *)(param_2 + 0x4dc) ^ *(uint *)(param_1 + 0x4dc)) & 1;
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  thunk_FUN_1037d8c0(param_2 + 0x4e4);
  local_4 = CONCAT31(local_4._1_3_,2);
  thunk_FUN_1037d9b0(param_2 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_2 + 0x50c);
  ExceptionList = local_c;
  return param_1;
}


// ==== 103e7be0 FUN_103e7be0 depth=0 from=raiz callees=thunk_FUN_1037da90@10305f6f UParticleEmitter::UParticleEmitter@10312670
// strings: 

UParticleEmitter * __thiscall FUN_103e7be0(UParticleEmitter *param_1,UParticleEmitter *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808cee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = USparkEmitter::vftable;
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_2 + 0x4d4);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x4d8);
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_2 + 0x4dc);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  thunk_FUN_1037da90(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  ExceptionList = local_c;
  return param_1;
}


// ==== 103e8900 FUN_103e8900 depth=0 from=raiz callees=thunk_FUN_1037de30@1030d021 thunk_FUN_103794b0@10309d54 thunk_FUN_1037dd60@10301ea1 thunk_FUN_1032bef0@103083c3 UParticleEmitter::UParticleEmitter@10312670 thunk_FUN_1037dc70@103082fb
// strings: 

UParticleEmitter * __thiscall FUN_103e8900(UParticleEmitter *param_1,UParticleEmitter *param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108090cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = UBeamEmitter::vftable;
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_2 + 0x4d4);
  thunk_FUN_1037dc70(param_2 + 0x4d8);
  local_4._0_1_ = 2;
  param_1[0x4e4] = param_2[0x4e4];
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
  *(uint *)(param_1 + 0x4f4) =
       *(uint *)(param_1 + 0x4f4) ^ (*(uint *)(param_2 + 0x4f4) ^ *(uint *)(param_1 + 0x4f4)) & 1;
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_2 + 0x50c);
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_2 + 0x510);
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x514);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_2 + 0x518);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_2 + 0x51c);
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_2 + 0x520);
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_2 + 0x524);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_2 + 0x528);
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_2 + 0x52c);
  thunk_FUN_1037dd60(param_2 + 0x530);
  local_4._0_1_ = 4;
  thunk_FUN_1037dd60(param_2 + 0x53c);
  local_4._0_1_ = 6;
  *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_2 + 0x548);
  *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_2 + 0x54c);
  *(uint *)(param_1 + 0x550) =
       *(uint *)(param_1 + 0x550) ^ (*(uint *)(param_1 + 0x550) ^ *(uint *)(param_2 + 0x550)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x550) ^ *(uint *)(param_1 + 0x550)) & 2 ^ *(uint *)(param_1 + 0x550)
  ;
  *(uint *)(param_1 + 0x550) = uVar1;
  *(uint *)(param_1 + 0x550) = (*(uint *)(param_2 + 0x550) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_2 + 0x554);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_2 + 0x558);
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_2 + 0x55c);
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_2 + 0x560);
  *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(param_2 + 0x564);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_2 + 0x568);
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_2 + 0x56c);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_2 + 0x570);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_2 + 0x574);
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_2 + 0x578);
  *(uint *)(param_1 + 0x57c) =
       *(uint *)(param_1 + 0x57c) ^ (*(uint *)(param_2 + 0x57c) ^ *(uint *)(param_1 + 0x57c)) & 1;
  *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_2 + 0x580);
  *(undefined4 *)(param_1 + 0x584) = *(undefined4 *)(param_2 + 0x584);
  *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_2 + 0x588);
  *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_2 + 0x58c);
  *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_2 + 0x590);
  *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_2 + 0x594);
  *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_2 + 0x598);
  *(uint *)(param_1 + 0x59c) =
       *(uint *)(param_1 + 0x59c) ^ (*(uint *)(param_2 + 0x59c) ^ *(uint *)(param_1 + 0x59c)) & 1;
  *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(param_2 + 0x5a0);
  *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(param_2 + 0x5a4);
  *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_2 + 0x5a8);
  *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(param_2 + 0x5ac);
  *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_2 + 0x5b0);
  thunk_FUN_1037de30(param_2 + 0x5b4);
  local_4._0_1_ = 8;
  thunk_FUN_103794b0(param_2 + 0x5c0);
  local_4 = CONCAT31(local_4._1_3_,10);
  thunk_FUN_1032bef0(param_2 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(param_2 + 0x5d8);
  ExceptionList = local_c;
  return param_1;
}


// ==== 103f51e0 FUN_103f51e0 depth=0 from=raiz callees=thunk_FUN_10380560@103123b9 thunk_FUN_103b21b0@1030f58d thunk_FUN_10379830@103060ff UParticleEmitter::UParticleEmitter@10312670
// strings: 

UParticleEmitter * __thiscall FUN_103f51e0(UParticleEmitter *param_1,UParticleEmitter *param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c01e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = UVertMeshEmitter::vftable;
  thunk_FUN_103b21b0(param_2 + 0x4d0);
  local_4._0_1_ = 2;
  thunk_FUN_10380560(param_2 + 0x4dc);
  local_4._0_1_ = 4;
  thunk_FUN_10379830(param_2 + 0x4e8);
  local_4._0_1_ = 5;
  thunk_FUN_10379830(param_2 + 0x4f4);
  local_4 = CONCAT31(local_4._1_3_,6);
  thunk_FUN_10379830(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_2 + 0x50c);
  *(uint *)(param_1 + 0x510) =
       *(uint *)(param_1 + 0x510) ^ (*(uint *)(param_1 + 0x510) ^ *(uint *)(param_2 + 0x510)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x510) ^ *(uint *)(param_1 + 0x510)) & 2 ^ *(uint *)(param_1 + 0x510)
  ;
  *(uint *)(param_1 + 0x510) = uVar1;
  *(uint *)(param_1 + 0x510) = (*(uint *)(param_2 + 0x510) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x514);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_2 + 0x518);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_2 + 0x51c);
  ExceptionList = local_c;
  return param_1;
}


// ==== 103f5370 FUN_103f5370 depth=0 from=raiz callees=thunk_FUN_103b3eb0@10308387 thunk_FUN_10379900@103146e1 thunk_FUN_10389b50@10304066 UParticleEmitter::operator=@103076d5
// strings: 

UParticleEmitter * __thiscall FUN_103f5370(UParticleEmitter *param_1,UParticleEmitter *param_2)

{
  uint uVar1;
  
  UParticleEmitter::operator=(param_1,param_2);
  thunk_FUN_103b3eb0(param_2 + 0x4d0);
  thunk_FUN_10389b50(param_2 + 0x4dc);
  thunk_FUN_10379900(param_2 + 0x4e8);
  thunk_FUN_10379900(param_2 + 0x4f4);
  thunk_FUN_10379900(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_2 + 0x50c);
  *(uint *)(param_1 + 0x510) =
       *(uint *)(param_1 + 0x510) ^ (*(uint *)(param_1 + 0x510) ^ *(uint *)(param_2 + 0x510)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x510) ^ *(uint *)(param_1 + 0x510)) & 2 ^ *(uint *)(param_1 + 0x510)
  ;
  *(uint *)(param_1 + 0x510) = uVar1;
  *(uint *)(param_1 + 0x510) = (*(uint *)(param_2 + 0x510) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x514);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_2 + 0x518);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_2 + 0x51c);
  return param_1;
}


// ==== 10401310 FUN_10401310 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4
// strings: 1087ee44=(Receive)PetitionVotePacket  | 

uint FUN_10401310(void)

{
  uint extraout_EAX;
  
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x674))();
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040ea00 FUN_1040ea00 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5
// strings: 10884940=dddhhhdhh | 10884900=(Receive)PetItemList : %d | 

uint FUN_1040ea00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  undefined4 local_40;
  undefined2 auStack_3c [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  local_40 = 0;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088494c,&local_40);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x504))();
  iVar3 = 0;
  if (0 < (short)local_40) {
    do {
      auStack_3c[0] = 0xffff;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1e = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0xffffffff;
      uStack_c = 0;
      uStack_8 = 0;
      uStack_4 = 0xffffffff;
      uStack_1c = 0;
      param_1 = -1;
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1088494c,&param_1);
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,"dddhhhdhh",&uStack_38,
                                 &uStack_34,&uStack_30,auStack_3c,&uStack_20,&uStack_1e,&uStack_24,
                                 &uStack_1c,&uStack_18);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x508))(auStack_3c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (short)local_40);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1041f8c0 FUN_1041f8c0 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a thunk_FUN_104026b0@103034e5 CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136
// strings: 

uint FUN_1041f8c0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080f9d9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  local_18 = (void *)0x0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_18);
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x748))(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10426930 FUN_10426930 depth=0 from=raiz callees=CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_104026b0@103034e5 User::User@10313449 thunk_FUN_104226e0@1030d04e User::SetAttackItemVariationOption@1030aa47
// strings: 10889278=dddddSddddQddddddddddddddddddddddddddddddddddddddddddddddddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhddddddddddddddddddddffffddddSdddcccddhhddddccdccdd | 10889220=(Receive)GMViewCharacterInfoPacket | 

uint FUN_10426930(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint extraout_EAX;
  char cStack_39e;
  char cStack_39d;
  char cStack_39c;
  char cStack_39b;
  char cStack_39a;
  undefined1 auStack_398 [4];
  undefined8 uStack_394;
  undefined8 uStack_38c;
  double dStack_380;
  undefined1 auStack_378 [4];
  double dStack_374;
  undefined1 auStack_36c [4];
  undefined1 auStack_368 [4];
  undefined1 auStack_364 [4];
  undefined1 auStack_360 [4];
  undefined1 auStack_35c [4];
  undefined1 auStack_358 [4];
  undefined1 auStack_354 [4];
  undefined1 auStack_350 [4];
  undefined1 auStack_34c [4];
  undefined1 auStack_348 [4];
  undefined1 auStack_344 [4];
  undefined1 auStack_340 [4];
  undefined1 auStack_33c [4];
  undefined1 auStack_338 [4];
  undefined1 auStack_334 [4];
  undefined1 auStack_330 [4];
  undefined1 auStack_32c [12];
  undefined1 auStack_320 [4];
  undefined1 auStack_31c [8];
  User aUStack_314 [24];
  undefined1 auStack_2fc [4];
  undefined1 auStack_2f8 [48];
  undefined1 auStack_2c8 [4];
  undefined1 auStack_2c4 [4];
  undefined1 auStack_2c0 [4];
  undefined1 auStack_2bc [4];
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [4];
  undefined1 auStack_2ac [4];
  undefined1 auStack_2a8 [4];
  undefined1 auStack_2a4 [4];
  undefined1 auStack_2a0 [4];
  undefined1 auStack_29c [4];
  undefined1 auStack_298 [4];
  undefined1 auStack_294 [4];
  undefined1 auStack_290 [4];
  undefined1 auStack_28c [4];
  undefined1 auStack_288 [4];
  undefined1 auStack_284 [8];
  undefined1 auStack_27c [4];
  undefined1 auStack_278 [4];
  undefined1 auStack_274 [4];
  undefined1 auStack_270 [4];
  undefined1 auStack_26c [4];
  undefined1 auStack_268 [4];
  undefined1 auStack_264 [4];
  undefined1 auStack_260 [4];
  undefined1 auStack_25c [4];
  undefined1 auStack_258 [4];
  undefined1 auStack_254 [4];
  undefined1 auStack_250 [4];
  undefined1 auStack_24c [4];
  undefined1 auStack_248 [4];
  undefined1 auStack_244 [12];
  undefined1 auStack_238 [4];
  undefined1 auStack_234 [8];
  undefined1 auStack_22c [4];
  undefined1 auStack_228 [4];
  undefined1 auStack_224 [4];
  undefined1 auStack_220 [4];
  undefined1 auStack_21c [4];
  undefined1 auStack_218 [4];
  undefined1 auStack_214 [4];
  undefined1 auStack_210 [4];
  undefined1 auStack_20c [4];
  undefined1 auStack_208 [4];
  undefined1 auStack_204 [4];
  undefined1 auStack_200 [4];
  undefined1 auStack_1fc [4];
  undefined1 auStack_1f8 [4];
  undefined1 auStack_1f4 [4];
  undefined1 auStack_1f0 [4];
  undefined1 auStack_1ec [4];
  undefined1 auStack_1e8 [4];
  undefined1 auStack_1e4 [4];
  undefined1 auStack_1e0 [4];
  undefined1 auStack_1dc [4];
  undefined1 auStack_1d8 [4];
  undefined1 auStack_1d4 [4];
  undefined1 auStack_1d0 [4];
  undefined1 auStack_1cc [4];
  undefined1 auStack_1c8 [4];
  undefined1 auStack_1c4 [4];
  undefined1 auStack_1c0 [4];
  undefined1 auStack_1bc [4];
  undefined1 auStack_1b8 [20];
  undefined1 auStack_1a4 [4];
  undefined1 auStack_1a0 [4];
  undefined1 auStack_19c [4];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [4];
  undefined1 auStack_17c [4];
  undefined1 auStack_178 [4];
  undefined1 auStack_174 [4];
  undefined1 auStack_170 [4];
  undefined1 auStack_16c [4];
  undefined1 auStack_168 [4];
  undefined1 auStack_164 [4];
  undefined1 auStack_160 [4];
  undefined1 auStack_15c [4];
  undefined8 uStack_158;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_144;
  undefined4 uStack_110;
  undefined1 auStack_100 [4];
  undefined1 auStack_fc [4];
  undefined1 auStack_f8 [4];
  undefined1 auStack_f4 [4];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [8];
  undefined1 auStack_c4 [88];
  int iStack_6c;
  undefined1 auStack_68 [60];
  int iStack_2c;
  int iStack_28;
  int iStack_1c;
  int iStack_18;
  
  User::User(aUStack_314);
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,
                     "dddddSddddQddddddddddddddddddddddddddddddddddddddddddddddddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhddddddddddddddddddddffffddddSdddcccddhhddddccdccdd"
                     ,auStack_378,auStack_36c,auStack_398,auStack_368,auStack_2fc,0x30,auStack_2f8,
                     auStack_2c8,auStack_2c4,auStack_2c0,auStack_2bc,auStack_2b8,auStack_2b0,
                     auStack_2ac,auStack_2a8,auStack_2a4,auStack_2a0,auStack_29c,auStack_298,
                     auStack_294,auStack_290,auStack_28c,auStack_fc,auStack_100,auStack_288,
                     auStack_284,auStack_27c,auStack_278,auStack_274,auStack_270,auStack_26c,
                     auStack_268,auStack_264,auStack_260,auStack_25c,auStack_258,auStack_254,
                     auStack_250,auStack_24c,auStack_248,auStack_244,auStack_238,auStack_234,
                     auStack_364,auStack_360,auStack_35c,auStack_358,auStack_354,auStack_350,
                     auStack_34c,auStack_348,auStack_344,auStack_340,auStack_33c,auStack_338,
                     auStack_334,auStack_330,auStack_32c,auStack_320,auStack_31c,auStack_22c,
                     auStack_228,auStack_224,auStack_220,auStack_21c,auStack_218,auStack_214,
                     auStack_210,auStack_20c,auStack_208,auStack_204,auStack_200,auStack_1fc,
                     auStack_1f8,auStack_1f4,auStack_1f0,auStack_1ec,auStack_1e8,auStack_1e4,
                     auStack_1e0,auStack_1dc,auStack_1d8,auStack_1d4,auStack_1d0,auStack_1cc,
                     auStack_1c8,auStack_1c4,auStack_1c0,auStack_1bc,auStack_1b8,auStack_1a4,
                     auStack_1a0,auStack_19c,auStack_198,auStack_f0,auStack_ec,auStack_e8,auStack_e4
                     ,auStack_f8,auStack_f4,auStack_e0,auStack_d8,auStack_68,auStack_dc,auStack_180,
                     auStack_17c,auStack_178,auStack_174,auStack_170,auStack_16c,auStack_160,
                     auStack_15c,auStack_168,auStack_164,&uStack_38c,&uStack_394,&dStack_380,
                     &dStack_374,auStack_d4,auStack_d0,auStack_cc,auStack_c4);
  iStack_6c = (int)cStack_39a;
  uStack_158 = uStack_394;
  iStack_2c = (int)cStack_39c;
  uStack_150 = uStack_38c;
  fStack_148 = (float)dStack_380;
  iStack_28 = (int)cStack_39e;
  fStack_144 = (float)dStack_374;
  iStack_1c = (int)cStack_39d;
  iStack_18 = (int)cStack_39b;
  User::SetAttackItemVariationOption(aUStack_314);
  iVar1 = DAT_10b1f538;
  if (DAT_10b1f538 != 0) {
    iVar2 = thunk_FUN_104226e0(auStack_2fc);
    if (iVar2 != 0) {
      piVar3 = (int *)thunk_FUN_104226e0(auStack_2fc);
      if (*piVar3 == 1) {
        iVar2 = thunk_FUN_104226e0(auStack_2fc);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = thunk_FUN_104226e0(auStack_2fc);
          if (*(int *)(iVar2 + 4) != 0) {
            iVar2 = thunk_FUN_104226e0(auStack_2fc);
            if (iVar2 != 0) {
              piVar3 = (int *)thunk_FUN_104226e0(auStack_2fc);
              if (*piVar3 == 1) {
                iVar2 = thunk_FUN_104226e0(auStack_2fc);
                if (*(int *)(iVar2 + 4) != 0) {
                  iVar2 = thunk_FUN_104226e0(auStack_2fc);
                  uStack_110 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x204);
                  goto LAB_10426f47;
                }
              }
            }
            uStack_110 = uRam00000204;
            goto LAB_10426f47;
          }
        }
      }
    }
  }
  uStack_110 = 0;
LAB_10426f47:
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x510))(aUStack_314);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10493b30 FUN_10493b30 depth=0 from=raiz callees=AViewportWindowController::SetCalcStep@1030ec50 CORE.DLL::L2ParamStack::Top@EXTERNAL:00000131
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10493b30(int param_1,int param_2,L2ParamStack *param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  undefined4 unaff_EDI;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  L2ParamStack::Top(param_3);
  pvVar3 = L2ParamStack::Top(param_3);
  pvVar4 = L2ParamStack::Top(param_3);
  L2ParamStack::Top(param_3);
  pvVar5 = L2ParamStack::Top(param_3);
  if (((*(byte *)(param_2 + 0x720) & 1) != 0) && (*(char *)(param_2 + 0x724) != '\x02')) {
    piVar1 = *(int **)(param_2 + 0x72c);
    *(undefined1 *)(param_2 + 0x724) = 2;
    uVar6 = _DAT_1089df54;
    if (piVar1 != (int *)0x0) {
      *(undefined1 *)(piVar1 + 0xef) = 2;
      uVar7 = 0;
      piVar1[0xf1] = ((uint)pvVar5 & 1) * 2 | (uint)pvVar4 & 1 | piVar1[0xf1] & 0xfffffffcU;
      (**(code **)(*piVar1 + 0x2cc))(0,piVar1[0xfe],0x3f800000,uVar6,0);
      iVar2 = *(int *)(**(int **)(*(int *)(param_1 + 0x54) + 0x38) + 0x3c);
      if (((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x3bc), iVar2 != 0)) && (iVar2 == param_2)) {
        if (*(AViewportWindowController **)(iVar2 + 0x730) != (AViewportWindowController *)0x0) {
          AViewportWindowController::SetCalcStep(*(AViewportWindowController **)(iVar2 + 0x730),4);
        }
        uVar8 = uVar7;
        (**(code **)(**(int **)(param_1 + 0x68) + 0x75c))(unaff_EDI,uVar7,pvVar3);
        (**(code **)(**(int **)(param_1 + 0x68) + 0x760))(unaff_EDI,uVar7,0,uVar8,3,0,uVar6);
      }
    }
  }
  return;
}


// ==== 10493cb0 FUN_10493cb0 depth=0 from=raiz callees=APawn::GetFishingPullAnimName@10312e40 CORE.DLL::L2ParamStack::Top@EXTERNAL:00000131 AL2Float::GetCurAnimName@1030f312
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10493cb0(int param_1,APawn *param_2,L2ParamStack *param_3)

{
  int iVar1;
  AL2Float *this;
  APawn *pAVar2;
  code *pcVar3;
  APawn *pAVar4;
  L2ParamStack *this_00;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte bVar13;
  int unaff_retaddr;
  undefined1 *puVar14;
  uint local_20;
  uint local_1c;
  uint local_14;
  undefined1 local_4 [4];
  
  this_00 = param_3;
  pvVar5 = L2ParamStack::Top(param_3);
  pvVar6 = L2ParamStack::Top(this_00);
  pvVar7 = L2ParamStack::Top(this_00);
  local_20 = (uint)pvVar7 & 0xff;
  pvVar8 = L2ParamStack::Top(this_00);
  local_14 = (uint)pvVar8 & 0xff;
  pvVar9 = L2ParamStack::Top(this_00);
  param_3 = (L2ParamStack *)CONCAT31(param_3._1_3_,(char)pvVar9);
  pvVar9 = L2ParamStack::Top(this_00);
  pvVar10 = L2ParamStack::Top(this_00);
  pAVar4 = param_2;
  local_1c = (uint)pvVar10 & 0xff;
  if ((((byte)param_2[0x720] & 1) != 0) && (param_2[0x724] == (APawn)0x2)) {
    bVar13 = 0;
    if ((byte)param_3 != '\0') {
      iVar1 = *(int *)param_2;
      puVar12 = &param_2;
      puVar11 = (undefined4 *)APawn::GetFishingPullAnimName(param_2);
      (**(code **)(iVar1 + 0x328))
                (0,*puVar11,*(undefined4 *)(pAVar4 + 0x6b4),_DAT_1089df54,0,1,puVar12);
      bVar13 = (byte)param_3;
    }
    this = *(AL2Float **)(pAVar4 + 0x72c);
    if (this != (AL2Float *)0x0) {
      if (bVar13 != 0) {
        *(undefined4 *)(this + 0x3dc) = 0;
        *(uint *)(this + 0x3e0) = (uint)bVar13;
      }
      if ((*(uint *)(this + 0x3c4) & 1) != ((uint)pvVar7 & 0xff)) {
        param_2 = *(APawn **)this;
        puVar14 = local_4;
        puVar12 = (undefined4 *)AL2Float::GetCurAnimName(this);
        (**(code **)(unaff_retaddr + 0x2cc))(0,*puVar12,0x3f800000,_DAT_1089fe6c,1,puVar14);
        bVar13 = (byte)param_3;
      }
      *(uint *)(this + 0x3c4) =
           ((uint)pvVar10 & 1) * 2 | (uint)pvVar7 & 1 | *(uint *)(this + 0x3c4) & 0xfffffffc;
      iVar1 = *(int *)(**(int **)(*(int *)(param_1 + 0x54) + 0x38) + 0x3c);
      if (((iVar1 != 0) && (pAVar2 = *(APawn **)(iVar1 + 0x3bc), pAVar2 != (APawn *)0x0)) &&
         (pAVar2 == pAVar4)) {
        pcVar3 = *(code **)(**(int **)(param_1 + 0x68) + 0x760);
        if (bVar13 == 0) {
          (*pcVar3)(pvVar6,pvVar5,local_14,local_20,0,pvVar9,local_1c);
        }
        else {
          (*pcVar3)(pvVar6,pvVar5,local_14,local_20,param_3,pvVar9,local_1c);
          if (*(int *)GL2FFEffectUse_exref != 0) {
            if ((char)pvVar8 == '\x01') {
              (**(code **)(*(int *)**(undefined4 **)(*(int *)(DAT_10c51044 + 0x54) + 0x38) + 0xb0))
                        (0xd,0);
              return;
            }
            if ((char)pvVar8 == '\x02') {
              (**(code **)(*(int *)**(undefined4 **)(*(int *)(DAT_10c51044 + 0x54) + 0x38) + 0xb0))
                        (0xe,0);
              return;
            }
          }
        }
      }
    }
  }
  return;
}


// ==== 104948c0 FUN_104948c0 depth=0 from=raiz callees=CORE.DLL::FMemMark::Pop@EXTERNAL:00000187 AActor::IsBlockedBy@10308bde CORE.DLL::FMemMark::FMemMark@EXTERNAL:00000188 CORE.DLL::appFailAssert@EXTERNAL:00000026 CORE.DLL::UObject::IsA@EXTERNAL:0000004f FUN_107a6660@107a6660
// strings: 1085af50=d:\work\interlude\2007_05_23\warfare2110\engine\inc\UnLevel.h | 1085b084=Actors(0) | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_104948c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_ESI;
  undefined4 *puVar7;
  undefined4 uStack0000000c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  FMemMark local_3c [60];
  
  uVar3 = _DAT_108a01c4;
  uStack0000000c = _DAT_108a01c0;
  FMemMark::FMemMark(local_3c,(FMemStack *)GMem_exref);
  piVar1 = *(int **)(*(int *)(*(int *)(**(int **)(*(int *)(param_1 + 0x54) + 0x38) + 0x3c) + 0x3bc)
                    + 0x2cc);
  if (*(int *)piVar1[0xe] == 0) {
    local_74 = 0x10494941;
    appFailAssert("Actors(0)","d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnLevel.h"
                  ,0x203);
  }
  local_7c = _DAT_1089183c;
  local_78 = _DAT_1089183c;
  local_74 = _DAT_108a01bc;
  local_84 = param_3;
  local_80 = uVar3;
  puVar4 = (undefined4 *)
           (**(code **)(*piVar1 + 0xf4))(GMem_exref,param_2,param_3,uStack0000000c,param_2);
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) goto LAB_10494a1a;
    iVar5 = AActor::IsBlockedBy(*(AActor **)
                                 (*(int *)(**(int **)(*(int *)(param_1 + 0x54) + 0x38) + 0x3c) +
                                 0x3bc),(AActor *)puVar4[1]);
    if ((iVar5 != 0) &&
       (((UObject *)puVar4[1] == (UObject *)0x0 ||
        (iVar5 = UObject::IsA((UObject *)puVar4[1],&AVehicle::PrivateStaticClass), iVar5 == 0))))
    break;
    puVar4 = (undefined4 *)*puVar4;
  }
  puVar7 = (undefined4 *)&stack0xffffff9c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  if (unaff_ESI != 0) {
    iVar5 = *(int *)(*(int *)(**(int **)(*(int *)(param_1 + 0x54) + 0x38) + 0x3c) + 0x3bc);
    iVar2 = **(int **)(param_1 + 0x60);
    uVar6 = FUN_107a6660();
    (**(code **)(iVar2 + 0x128))
              (*(undefined4 *)(iVar5 + 0x1bc),*(undefined4 *)(iVar5 + 0x1c0),
               *(undefined4 *)(iVar5 + 0x1c4),*(undefined4 *)(iVar5 + 0x1cc),
               uVar6 & 0x8fefffff | 0xfe00000);
    FMemMark::Pop((FMemMark *)&local_84);
    return 1;
  }
LAB_10494a1a:
  FMemMark::Pop((FMemMark *)&stack0xffffff90);
  return 0;
}


// ==== 104ab190 FUN_104ab190 depth=0 from=raiz callees=CORE.DLL::FString::operator==@EXTERNAL:0000016e CORE.DLL::appStrcpy@EXTERNAL:0000012c CORE.DLL::UPackage::StaticClass@EXTERNAL:000000b6 CORE.DLL::appFindPackageFile@EXTERNAL:0000019e CORE.DLL::appFailAssert@EXTERNAL:00000026 CORE.DLL::FString::FString@EXTERNAL:00000035 thunk_FUN_104a7b60@10312d37 CORE.DLL::FString::~FString@EXTERNAL:0000002b CORE.DLL::UObject::IsA@EXTERNAL:0000004f CORE.DLL::UObject::GetName@EXTERNAL:000000b5 CORE.DLL::appSprintf@EXTERNAL:0000013b CORE.DLL::UObject::GetOuter@EXTERNAL:000000dc thunk_FUN_103737b0@1030c3c4 CORE.DLL::appStrstr@EXTERNAL:00000178 CORE.DLL::FString::FString@EXTERNAL:000000cc CORE.DLL::FArray::Add@EXTERNAL:000000a7 CORE.DLL::appStricmp@EXTERNAL:000000e9 CORE.DLL::FString::Empty@EXTERNAL:00000163 CORE.DLL::UObject::GetPathName@EXTERNAL:00000197
// strings: 1085b738=d:\work\interlude\2007_05_23\warfare2110\core\inc\UnObjBas.h | 1085b730=Class | 108a238c=Maps | 108a2364=../Sounds/%s.uax | 108a2330=../SysTextures/%s.utx | 108a2300=../Textures/%s.utx | 

void __fastcall FUN_104ab190(int param_1)

{
  FString *pFVar1;
  UClass *pUVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  code *pcVar8;
  FArray *pFVar9;
  int iVar10;
  int iVar11;
  FString local_66c [12];
  UClass *local_660;
  int local_65c;
  FString local_658 [12];
  ushort local_64c [32];
  ushort local_60c [256];
  ushort local_40c [256];
  ushort local_20c [3];
  ushort local_206 [253];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10817294;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(local_658);
  local_4 = 0;
  FString::Empty(local_658);
  local_660 = UPackage::StaticClass();
  local_65c = -1;
  if (local_660 == (UClass *)0x0) {
    appFailAssert("Class","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",
                  0x505);
  }
  thunk_FUN_103737b0();
  iVar10 = local_65c;
  if (local_65c < *(int *)(GObjObjects_exref + 4)) {
    do {
      puVar3 = UObject::GetPathName
                         (*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4),(UObject *)0x0,
                          (ushort *)0x0);
      appStrcpy(local_60c,puVar3);
      appFindPackageFile(local_60c,(FGuid *)0x0,local_20c);
      appStrcpy(local_64c,local_206);
      puVar3 = appStrstr(local_64c,(ushort *)&DAT_108a239c);
      if (puVar3 == (ushort *)0x0) {
        puVar3 = appStrstr(local_64c,(ushort *)&DAT_108a2398);
        if (puVar3 != (ushort *)0x0) {
          puVar3 = (ushort *)&DAT_108a2398;
          goto LAB_104ab2a2;
        }
      }
      else {
        puVar3 = (ushort *)&DAT_108a239c;
LAB_104ab2a2:
        puVar3 = appStrstr(local_64c,puVar3);
        *puVar3 = 0;
      }
      iVar4 = appStricmp(local_64c,(ushort *)L"Maps");
      pUVar2 = local_660;
      if (iVar4 == 0) {
        FString::FString(local_66c,local_60c);
        local_4._0_1_ = 1;
        iVar4 = thunk_FUN_104a7b60(local_66c);
        local_4 = (uint)local_4._1_3_ << 8;
        FString::~FString(local_66c);
        pUVar2 = local_660;
        if (iVar4 == -1) {
          iVar4 = FArray::Add((FArray *)(param_1 + 0x5560),1,0xc);
          pFVar1 = (FString *)(*(int *)(param_1 + 0x5560) + iVar4 * 0xc);
          pUVar2 = local_660;
          if (pFVar1 != (FString *)0x0) {
            FString::FString(pFVar1,local_60c);
            pUVar2 = local_660;
          }
        }
      }
      do {
        iVar10 = iVar10 + 1;
        if (*(int *)(GObjObjects_exref + 4) <= iVar10) goto LAB_104ab366;
      } while ((*(int *)(*(int *)GObjObjects_exref + iVar10 * 4) == 0) ||
              (iVar4 = UObject::IsA(*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4),pUVar2),
              iVar4 == 0));
    } while (iVar10 < *(int *)(GObjObjects_exref + 4));
  }
LAB_104ab366:
  iVar10 = -1;
  pcVar8 = GObjObjects_exref;
  do {
    iVar10 = iVar10 + 1;
    if (*(int *)(pcVar8 + 4) <= iVar10) goto LAB_104ab489;
  } while ((*(int *)(*(int *)pcVar8 + iVar10 * 4) == 0) ||
          (iVar4 = UObject::IsA(*(UObject **)(*(int *)pcVar8 + iVar10 * 4),
                                &USkeletalMesh::PrivateStaticClass), pcVar8 = GObjObjects_exref,
          iVar4 == 0));
  if (iVar10 < *(int *)(GObjObjects_exref + 4)) {
    pFVar9 = (FArray *)(param_1 + 0x5548);
    do {
      puVar3 = UObject::GetPathName
                         (*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4),(UObject *)0x0,
                          (ushort *)0x0);
      appStrcpy(local_60c,puVar3);
      FString::FString(local_66c,local_60c);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < *(int *)(param_1 + 0x554c)) {
        iVar4 = 0;
        iVar11 = 0;
        do {
          iVar5 = FString::operator==((FString *)(*(int *)pFVar9 + iVar4),local_66c);
          if (iVar5 != 0) goto LAB_104ab412;
          iVar11 = iVar11 + 1;
          iVar4 = iVar4 + 0xc;
        } while (iVar11 < *(int *)(param_1 + 0x554c));
      }
      iVar11 = -1;
LAB_104ab412:
      local_4 = local_4 & 0xffffff00;
      FString::~FString(local_66c);
      if (iVar11 == -1) {
        iVar4 = FArray::Add(pFVar9,1,0xc);
        pFVar1 = (FString *)(*(int *)pFVar9 + iVar4 * 0xc);
        if (pFVar1 != (FString *)0x0) {
          FString::FString(pFVar1,local_60c);
        }
      }
      do {
        iVar10 = iVar10 + 1;
        pcVar8 = GObjObjects_exref;
        if (*(int *)(GObjObjects_exref + 4) <= iVar10) goto LAB_104ab489;
      } while ((*(int *)(*(int *)GObjObjects_exref + iVar10 * 4) == 0) ||
              (iVar4 = UObject::IsA(*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4),
                                    &USkeletalMesh::PrivateStaticClass), iVar4 == 0));
      pcVar8 = GObjObjects_exref;
    } while (iVar10 < *(int *)(GObjObjects_exref + 4));
  }
LAB_104ab489:
  iVar10 = -1;
  do {
    iVar10 = iVar10 + 1;
    if (*(int *)(pcVar8 + 4) <= iVar10) goto LAB_104ab5a9;
  } while ((*(int *)(*(int *)pcVar8 + iVar10 * 4) == 0) ||
          (iVar4 = UObject::IsA(*(UObject **)(*(int *)pcVar8 + iVar10 * 4),
                                &UMeshAnimation::PrivateStaticClass), pcVar8 = GObjObjects_exref,
          iVar4 == 0));
  if (iVar10 < *(int *)(GObjObjects_exref + 4)) {
    pFVar9 = (FArray *)(param_1 + 0x5554);
    do {
      puVar3 = UObject::GetPathName
                         (*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4),(UObject *)0x0,
                          (ushort *)0x0);
      appStrcpy(local_60c,puVar3);
      FString::FString(local_66c,local_60c);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0 < *(int *)(param_1 + 0x5558)) {
        iVar4 = 0;
        iVar11 = 0;
        do {
          iVar5 = FString::operator==((FString *)(*(int *)pFVar9 + iVar4),local_66c);
          if (iVar5 != 0) goto LAB_104ab532;
          iVar11 = iVar11 + 1;
          iVar4 = iVar4 + 0xc;
        } while (iVar11 < *(int *)(param_1 + 0x5558));
      }
      iVar11 = -1;
LAB_104ab532:
      local_4 = local_4 & 0xffffff00;
      FString::~FString(local_66c);
      if (iVar11 == -1) {
        iVar4 = FArray::Add(pFVar9,1,0xc);
        pFVar1 = (FString *)(*(int *)pFVar9 + iVar4 * 0xc);
        if (pFVar1 != (FString *)0x0) {
          FString::FString(pFVar1,local_60c);
        }
      }
      do {
        iVar10 = iVar10 + 1;
        pcVar8 = GObjObjects_exref;
        if (*(int *)(GObjObjects_exref + 4) <= iVar10) goto LAB_104ab5a9;
      } while ((*(int *)(*(int *)GObjObjects_exref + iVar10 * 4) == 0) ||
              (iVar4 = UObject::IsA(*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4),
                                    &UMeshAnimation::PrivateStaticClass), iVar4 == 0));
      pcVar8 = GObjObjects_exref;
    } while (iVar10 < *(int *)(GObjObjects_exref + 4));
  }
LAB_104ab5a9:
  iVar10 = -1;
  do {
    iVar10 = iVar10 + 1;
    if (*(int *)(pcVar8 + 4) <= iVar10) goto LAB_104ab757;
  } while ((*(int *)(*(int *)pcVar8 + iVar10 * 4) == 0) ||
          (iVar4 = UObject::IsA(*(UObject **)(*(int *)pcVar8 + iVar10 * 4),
                                &USound::PrivateStaticClass), pcVar8 = GObjObjects_exref, iVar4 == 0
          ));
  if (iVar10 < *(int *)(GObjObjects_exref + 4)) {
LAB_104ab5f0:
    for (pUVar6 = UObject::GetOuter(*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4));
        pUVar6 != (UObject *)0x0; pUVar6 = UObject::GetOuter(pUVar6)) {
      pUVar7 = UObject::GetOuter(pUVar6);
      if (pUVar7 == (UObject *)0x0) {
        if (pUVar6 != (UObject *)0x0) {
          puVar3 = UObject::GetName(pUVar6);
          appSprintf(local_40c,(ushort *)L"../Sounds/%s.uax",puVar3);
          iVar4 = (**(code **)(**(int **)GFileManager_exref + 0x10))(local_40c);
          if (0 < iVar4) {
            puVar3 = UObject::GetPathName
                               (*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4),(UObject *)0x0
                                ,(ushort *)0x0);
            appStrcpy(local_60c,puVar3);
            FString::FString(local_66c,local_60c);
            local_4 = CONCAT31(local_4._1_3_,4);
            pFVar9 = (FArray *)(param_1 + 0x5530);
            iVar4 = 0;
            if (*(int *)(param_1 + 0x5534) < 1) goto LAB_104ab6d6;
            iVar11 = 0;
            goto LAB_104ab6b8;
          }
        }
        break;
      }
    }
    goto LAB_104ab725;
  }
LAB_104ab757:
  iVar10 = -1;
  do {
    iVar10 = iVar10 + 1;
    if (*(int *)(pcVar8 + 4) <= iVar10) goto LAB_104ab879;
  } while ((*(int *)(*(int *)pcVar8 + iVar10 * 4) == 0) ||
          (iVar4 = UObject::IsA(*(UObject **)(*(int *)pcVar8 + iVar10 * 4),
                                &UStaticMesh::PrivateStaticClass), pcVar8 = GObjObjects_exref,
          iVar4 == 0));
  if (iVar10 < *(int *)(GObjObjects_exref + 4)) {
    pFVar9 = (FArray *)(param_1 + 0x5524);
    do {
      puVar3 = UObject::GetPathName
                         (*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4),(UObject *)0x0,
                          (ushort *)0x0);
      appStrcpy(local_60c,puVar3);
      FString::FString(local_66c,local_60c);
      local_4 = CONCAT31(local_4._1_3_,5);
      if (0 < *(int *)(param_1 + 0x5528)) {
        iVar4 = 0;
        iVar11 = 0;
        do {
          iVar5 = FString::operator==((FString *)(*(int *)pFVar9 + iVar4),local_66c);
          if (iVar5 != 0) goto LAB_104ab802;
          iVar11 = iVar11 + 1;
          iVar4 = iVar4 + 0xc;
        } while (iVar11 < *(int *)(param_1 + 0x5528));
      }
      iVar11 = -1;
LAB_104ab802:
      local_4 = local_4 & 0xffffff00;
      FString::~FString(local_66c);
      if (iVar11 == -1) {
        iVar4 = FArray::Add(pFVar9,1,0xc);
        pFVar1 = (FString *)(*(int *)pFVar9 + iVar4 * 0xc);
        if (pFVar1 != (FString *)0x0) {
          FString::FString(pFVar1,local_60c);
        }
      }
      do {
        iVar10 = iVar10 + 1;
        pcVar8 = GObjObjects_exref;
        if (*(int *)(GObjObjects_exref + 4) <= iVar10) goto LAB_104ab879;
      } while ((*(int *)(*(int *)GObjObjects_exref + iVar10 * 4) == 0) ||
              (iVar4 = UObject::IsA(*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4),
                                    &UStaticMesh::PrivateStaticClass), iVar4 == 0));
      pcVar8 = GObjObjects_exref;
    } while (iVar10 < *(int *)(GObjObjects_exref + 4));
  }
LAB_104ab879:
  iVar10 = -1;
  do {
    iVar10 = iVar10 + 1;
    if (*(int *)(pcVar8 + 4) <= iVar10) goto LAB_104aba57;
  } while ((*(int *)(*(int *)pcVar8 + iVar10 * 4) == 0) ||
          (iVar4 = UObject::IsA(*(UObject **)(*(int *)pcVar8 + iVar10 * 4),
                                &UMaterial::PrivateStaticClass), pcVar8 = GObjObjects_exref,
          iVar4 == 0));
  if (*(int *)(GObjObjects_exref + 4) <= iVar10) {
LAB_104aba57:
    local_4 = 0xffffffff;
    FString::~FString(local_658);
    ExceptionList = local_c;
    return;
  }
LAB_104ab8c0:
  for (pUVar6 = UObject::GetOuter(*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4));
      pUVar6 != (UObject *)0x0; pUVar6 = UObject::GetOuter(pUVar6)) {
    pUVar7 = UObject::GetOuter(pUVar6);
    if (pUVar7 == (UObject *)0x0) {
      if (pUVar6 == (UObject *)0x0) break;
      puVar3 = UObject::GetName(pUVar6);
      appSprintf(local_40c,(ushort *)L"../SysTextures/%s.utx",puVar3);
      iVar4 = (**(code **)(**(int **)GFileManager_exref + 0x10))(local_40c);
      if (iVar4 < 1) {
        puVar3 = UObject::GetName(pUVar6);
        appSprintf(local_40c,(ushort *)L"../Textures/%s.utx",puVar3);
        iVar4 = (**(code **)(**(int **)GFileManager_exref + 0x10))(local_40c);
        if (iVar4 < 1) break;
      }
      puVar3 = UObject::GetPathName
                         (*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4),(UObject *)0x0,
                          (ushort *)0x0);
      appStrcpy(local_60c,puVar3);
      FString::FString(local_66c,local_60c);
      local_4 = CONCAT31(local_4._1_3_,6);
      pFVar9 = (FArray *)(param_1 + 0x553c);
      iVar4 = 0;
      if (*(int *)(param_1 + 0x5540) < 1) goto LAB_104ab9de;
      iVar11 = 0;
      goto LAB_104ab9c0;
    }
  }
  goto LAB_104aba25;
  while( true ) {
    iVar4 = iVar4 + 1;
    iVar11 = iVar11 + 0xc;
    if (*(int *)(param_1 + 0x5534) <= iVar4) break;
LAB_104ab6b8:
    iVar5 = FString::operator==((FString *)(*(int *)pFVar9 + iVar11),local_66c);
    if (iVar5 != 0) goto LAB_104ab6d9;
  }
LAB_104ab6d6:
  iVar4 = -1;
LAB_104ab6d9:
  local_4 = local_4 & 0xffffff00;
  FString::~FString(local_66c);
  if (iVar4 == -1) {
    iVar4 = FArray::Add(pFVar9,1,0xc);
    pFVar1 = (FString *)(*(int *)pFVar9 + iVar4 * 0xc);
    if (pFVar1 != (FString *)0x0) {
      FString::FString(pFVar1,local_60c);
    }
  }
LAB_104ab725:
  do {
    iVar10 = iVar10 + 1;
    pcVar8 = GObjObjects_exref;
    if (*(int *)(GObjObjects_exref + 4) <= iVar10) goto LAB_104ab757;
  } while ((*(int *)(*(int *)GObjObjects_exref + iVar10 * 4) == 0) ||
          (iVar4 = UObject::IsA(*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4),
                                &USound::PrivateStaticClass), iVar4 == 0));
  pcVar8 = GObjObjects_exref;
  if (*(int *)(GObjObjects_exref + 4) <= iVar10) goto LAB_104ab757;
  goto LAB_104ab5f0;
  while( true ) {
    iVar4 = iVar4 + 1;
    iVar11 = iVar11 + 0xc;
    if (*(int *)(param_1 + 0x5540) <= iVar4) break;
LAB_104ab9c0:
    iVar5 = FString::operator==((FString *)(*(int *)pFVar9 + iVar11),local_66c);
    if (iVar5 != 0) goto LAB_104ab9e1;
  }
LAB_104ab9de:
  iVar4 = -1;
LAB_104ab9e1:
  local_4 = local_4 & 0xffffff00;
  FString::~FString(local_66c);
  if (iVar4 == -1) {
    iVar4 = FArray::Add(pFVar9,1,0xc);
    pFVar1 = (FString *)(*(int *)pFVar9 + iVar4 * 0xc);
    if (pFVar1 != (FString *)0x0) {
      FString::FString(pFVar1,local_60c);
    }
  }
LAB_104aba25:
  do {
    iVar10 = iVar10 + 1;
    if (*(int *)(GObjObjects_exref + 4) <= iVar10) goto LAB_104aba57;
  } while ((*(int *)(*(int *)GObjObjects_exref + iVar10 * 4) == 0) ||
          (iVar4 = UObject::IsA(*(UObject **)(*(int *)GObjObjects_exref + iVar10 * 4),
                                &UMaterial::PrivateStaticClass), iVar4 == 0));
  if (*(int *)(GObjObjects_exref + 4) <= iVar10) goto LAB_104aba57;
  goto LAB_104ab8c0;
}


// ==== 104bc4a0 FUN_104bc4a0 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000004e CORE.DLL::UObject::StaticLoadObject@EXTERNAL:0000013c CORE.DLL::UObject::StaticLoadClass@EXTERNAL:0000013a thunk_FUN_104bc470@10303850 ANLine::SetEndPositions@10309f7a APawn::GetWeaponMeshInstance@1030c856 APawn::GetFishingStartAnimName@1030226b APawn::GetCurAnimName@10304d04 AActor::SetOwner@10301b68 CORE.DLL::UObject::StaticFindObject@EXTERNAL:00000135 CORE.DLL::FName::operator!=@EXTERNAL:00000168 AViewportWindowController::SetCalcStep@1030ec50 AL2Float::GetCurAnimName@1030f312 CORE.DLL::FName::FName@EXTERNAL:000000dd
// strings: 108a4eb8=LineageDecos.float_m00 | 108a4eb8=LineageDecos.float_m00 | 108a4e60=LineageEffect.etc_noctilucence_bait | 108a4e40=Fishing_wait | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_104bc4a0(int param_1,APawn *param_2)

{
  APawn *pAVar1;
  UMeshInstance *pUVar2;
  AActor *this;
  int iVar3;
  FName *this_00;
  AL2Float *this_01;
  UObject *pUVar4;
  undefined4 uVar5;
  UClass *pUVar6;
  int *piVar7;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iVar8;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  FName *pFVar9;
  int local_24 [3];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (((byte)param_2[0x720] & 1) == 0) {
    return 0;
  }
  local_24[0] = param_1;
  if (*(int *)(param_1 + 0x18) == 0) {
    APawn::GetFishingStartAnimName(param_2);
    pFVar9 = (FName *)0x0;
    uStack_48 = 0x104bc658;
    this_00 = (FName *)APawn::GetCurAnimName(param_2,(int)local_24);
    iVar3 = FName::operator!=(this_00,pFVar9);
    if (iVar3 != 0) {
      iVar3 = **(int **)(param_2 + 0xe4);
      local_5c = *(float *)(param_2 + 0x1c8);
      local_58 = *(float *)(param_2 + 0x1cc);
      uStack_48 = 0;
      local_4c = 0;
      local_50 = 0;
      local_54 = *(undefined4 *)(param_2 + 0x1d0);
      local_64 = *(float *)(param_1 + 0xc);
      local_60 = *(float *)(param_1 + 0x10);
      FName::FName((FName *)&stack0xffffff94,0);
      this_01 = (AL2Float *)(**(code **)(iVar3 + 0xc0))();
      pUVar4 = UObject::StaticFindObject
                         (&USkeletalMesh::PrivateStaticClass,(UObject *)0x0,
                          (ushort *)L"LineageDecos.float_m00",0);
      if ((pUVar4 == (UObject *)0x0) &&
         (pUVar4 = UObject::StaticLoadObject
                             (&USkeletalMesh::PrivateStaticClass,(UObject *)0x0,
                              (ushort *)L"LineageDecos.float_m00",(ushort *)0x0,0,(UPackageMap *)0x0
                             ), pUVar4 == (UObject *)0x0)) {
        return 0;
      }
      *(UObject **)(this_01 + 0x104) = pUVar4;
      uVar5 = (**(code **)(*(int *)pUVar4 + 0x98))();
      *(undefined4 *)(this_01 + 0x134) = uVar5;
      this_01[0x3bc] = (AL2Float)0x1;
      *(undefined4 *)(this_01 + 0x3c0) = *(undefined4 *)(param_1 + 0x14);
      if ((((byte)param_2[0x720] & 2) != 0) &&
         (pUVar6 = UObject::StaticLoadClass
                             (&AActor::PrivateStaticClass,(UObject *)0x0,
                              (ushort *)L"LineageEffect.etc_noctilucence_bait",(ushort *)0x0,1,
                              (UPackageMap *)0x0), pUVar6 != (UClass *)0x0)) {
        iVar3 = **(int **)(param_2 + 0xe4);
        uStack_a0 = *(undefined4 *)(this_01 + 0x1bc);
        uStack_a4 = *(undefined4 *)(this_01 + 0x1c0);
        FName::FName((FName *)&uStack_a4,0);
        (**(code **)(iVar3 + 0xc0))();
        uVar5 = thunk_FUN_104bc470();
        *(undefined4 *)(this_01 + 0x3f0) = uVar5;
      }
      iVar3 = *(int *)this_01;
      piVar7 = (int *)AL2Float::GetCurAnimName(this_01);
      iVar8 = *piVar7;
      (**(code **)(iVar3 + 0x2cc))();
      (**(code **)(*(int *)this_01 + 0x128))();
      *(undefined4 *)(this_01 + 0x3dc) = 0;
      *(undefined4 *)(this_01 + 0x3e4) = *(undefined4 *)(this_01 + 0x1bc);
      *(undefined4 *)(this_01 + 1000) = *(undefined4 *)(this_01 + 0x1c0);
      *(undefined4 *)(this_01 + 0x3ec) = *(undefined4 *)(this_01 + 0x1c4);
      *(undefined4 *)(this_01 + 0x3e0) = 0;
      *(AL2Float **)(param_2 + 0x72c) = this_01;
      uStack_a0 = 0x104bc860;
      pUVar2 = APawn::GetWeaponMeshInstance(param_2,10);
      if (pUVar2 != (UMeshInstance *)0x0) {
        iVar3 = *(int *)pUVar2;
        uStack_a0 = _DAT_1089df54;
        uStack_a4 = *(undefined4 *)(param_2 + 0x6b4);
        FName::FName((FName *)&stack0xffffff58,(ushort *)L"Fishing_wait",1);
        (**(code **)(iVar3 + 0xac))(0);
      }
      *(undefined4 *)(iVar8 + 0x18) = 1;
      iVar3 = *(int *)(**(int **)(*(int *)(DAT_10c51044 + 0x54) + 0x38) + 0x3c);
      if (((iVar3 != 0) && (pAVar1 = *(APawn **)(iVar3 + 0x3bc), pAVar1 != (APawn *)0x0)) &&
         (pAVar1 == param_2)) {
        uStack_a0 = 0x104bc8d7;
        AViewportWindowController::SetCalcStep(*(AViewportWindowController **)(param_2 + 0x730),1);
      }
    }
  }
  else if (((*(int *)(param_1 + 0x18) == 1) && (*(int *)(param_2 + 0x72c) != 0)) &&
          ((iVar3 = *(int *)(*(int *)(param_2 + 0x72c) + 0x134),
           pUVar2 = APawn::GetWeaponMeshInstance(param_2,10), iVar3 != 0 &&
           (pUVar2 != (UMeshInstance *)0x0)))) {
    iVar3 = *(int *)(param_2 + 0x72c);
    local_54 = *(undefined4 *)(param_2 + 0x1c8);
    local_50 = *(undefined4 *)(param_2 + 0x1cc);
    uStack_48 = 0;
    local_4 = (float)_DAT_10859038;
    local_c = (*(float *)(param_2 + 0x1bc) - *(float *)(iVar3 + 0x1bc)) * local_4;
    local_8 = (*(float *)(param_2 + 0x1c0) - *(float *)(iVar3 + 0x1c0)) * local_4;
    local_4 = local_4 * (*(float *)(param_2 + 0x1c4) - *(float *)(iVar3 + 0x1c4));
    local_60 = local_c + *(float *)(iVar3 + 0x1bc);
    local_64 = *(float *)(iVar3 + 0x1c0) + local_8;
    iVar8 = **(int **)(param_2 + 0xe4);
    local_58 = *(float *)(iVar3 + 0x1c4) + local_4;
    local_4c = *(undefined4 *)(param_2 + 0x1d0);
    local_5c = local_64;
    local_18 = local_60;
    local_14 = local_64;
    local_10 = local_58;
    FName::FName((FName *)&local_64,0);
    this = (AActor *)(**(code **)(iVar8 + 0xc0))();
    if (this == (AActor *)0x0) {
      return 0;
    }
    AActor::SetOwner(this,(AActor *)param_2);
    iVar3 = ANLine::SetEndPositions((ANLine *)this,param_2,0x1e);
    if (iVar3 != 0) {
      *(AActor **)(param_2 + 0x728) = this;
      return 0;
    }
    (**(code **)(**(int **)(param_2 + 0xe4) + 0xac))();
    return 1;
  }
  return 1;
}


// ==== 104e06d0 FUN_104e06d0 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000004e thunk_FUN_104b4240@103029aa FNMover::FNMover@10305eac FNMover::SetTarget@103151ef AActor::SpawnSkillEffect@103147c7 AActor::AttachToBone@10305f79 CORE.DLL::UObject::StaticLoadClass@EXTERNAL:0000013a AActor::AttachToBone@10305c54 CORE.DLL::FRotator::FRotator@EXTERNAL:000000bb thunk_FUN_104b4270@10312bca thunk_FUN_1032ffc0@103131d8 USkeletalMeshInstance::GetAliasesTagCoords@1030f010 FNMover::AdjustPosition@10314713 CORE.DLL::UObject::IsA@EXTERNAL:0000004f AEmitter::AdjustparticleLife@1031205d APawn::PlaySkillSound@10307360 thunk_FUN_1037ae60@1031109f USkeletalMeshInstance::GetAliasesTagBoneName@1031075d CORE.DLL::FName::operator!=@EXTERNAL:00000168 AEmitter::SetSizeScale@10304c23 thunk_FUN_10379630@1030eb10 FNMover::Init@10304d90 CORE.DLL::FName::FName@EXTERNAL:000000dd
// strings: 108a7ac0=LineageEffect.s_u013_x | 108a7a88=LineageEffect.m_u000_c | 108a7a50=LineageEffect.m_u003_c | 108a7a18=LineageEffect.m_u003_b | 108a7a18=LineageEffect.m_u003_b | 108a79d4=LineageEffect.m_u037_d | 108a799c=LineageEffect.s_u011_a | 108a7964=LineageEffect.m_u001_b | 108a792c=LineageEffect.m_u007_b | 108a78f4=LineageEffect.m_u018_b | 108a78b8=LineageEffect.ph_hate_ta | 108a3b20=e_bone | 108a3b20=e_bone | 108a7880=LineageEffect.m_u013_c | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_104e06d0(AActor *param_1,ANProjectile *param_2,float param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  ANProjectile *pAVar4;
  undefined4 uVar5;
  AEmitter *this;
  int iVar6;
  USkeletalMeshInstance *pUVar7;
  int iVar8;
  AActor *pAVar9;
  APawn *this_00;
  UClass *pUVar10;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  FRotator local_124 [12];
  FRotator local_118 [12];
  FRotator local_10c [12];
  FRotator local_100 [12];
  FRotator local_f4 [16];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  UClass *local_10;
  AEmitter *local_c;
  AActor *local_8;
  
  puStack_7c = &LAB_108188f6;
  local_80 = ExceptionList;
  local_84 = &stack0xfffffea0;
  local_78 = 0;
  if (param_1[0x4dd] != (AActor)0x2) {
    return 0;
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_c = (AEmitter *)0x0;
  local_24 = 0;
  this_00 = (APawn *)param_2;
  ExceptionList = &local_80;
  puVar2 = &stack0xfffffea0;
  if ((*(float *)(param_1 + 0x4f8) == 0.0) &&
     (ExceptionList = &local_80, puVar2 = &stack0xfffffea0, param_1[0x4dc] != (AActor)0x0)) {
    piVar1 = *(int **)(param_1 + 0xe4);
    local_17c = 0x104e0773;
    ExceptionList = &local_80;
    local_8 = (AActor *)piVar1;
    local_10 = UObject::StaticLoadClass
                         (&AActor::PrivateStaticClass,(UObject *)0x0,
                          (ushort *)L"LineageEffect.s_u013_x",(ushort *)0x0,1,(UPackageMap *)0x0);
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    iVar8 = *piVar1;
    puVar3 = (undefined4 *)FRotator::FRotator((FRotator *)&local_c0,0,0,0);
    local_180 = *puVar3;
    local_17c = puVar3[1];
    local_18c = local_34;
    local_188 = local_30;
    local_184 = local_2c;
    local_28 = (undefined1 *)&uStack_190;
    uStack_190 = local_2c;
    FName::FName((FName *)&uStack_190,0);
    local_8 = (AActor *)(**(code **)(iVar8 + 0xc0))();
    local_10 = (UClass *)_DAT_10884cf0;
    if (param_1[0x4dc] != (AActor)0x1) {
      local_10 = (UClass *)_DAT_108a7834;
    }
    AEmitter::AdjustparticleLife((AEmitter *)local_8,(float)local_10);
    this_00 = (APawn *)param_2;
    *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x4f0);
    puVar2 = local_84;
    if (param_2 != (ANProjectile *)0x0) {
      APawn::PlaySkillSound((APawn *)param_2,param_1,local_8,1);
      puVar2 = local_84;
    }
  }
  local_84 = puVar2;
  switch(param_1[0x4dc]) {
  case (AActor)0x1:
    if (*(float *)(param_1 + 0x4f8) <= (float)_DAT_10884cf0) break;
    piVar1 = *(int **)(this_00 + 0xe4);
    local_17c = 0x104e088f;
    local_8 = (AActor *)
              UObject::StaticLoadClass
                        (&AActor::PrivateStaticClass,(UObject *)0x0,
                         (ushort *)L"LineageEffect.m_u000_c",(ushort *)0x0,1,(UPackageMap *)0x0);
    if (local_8 != (AActor *)0x0) {
      iVar8 = *piVar1;
      local_180 = *(undefined4 *)(param_1 + 0x1c8);
      local_17c = *(undefined4 *)(param_1 + 0x1cc);
      local_18c = *(undefined4 *)(param_1 + 0x1bc);
      uStack_190 = *(undefined4 *)(param_1 + 0x1c0);
      local_184 = *(undefined4 *)(param_1 + 0x1c4);
      local_10 = (UClass *)&uStack_190;
      local_188 = uStack_190;
      FName::FName((FName *)&uStack_190,0);
      this = (AEmitter *)(**(code **)(iVar8 + 0xc0))();
      if (this != (AEmitter *)0x0) {
        local_68 = 0;
        local_64 = 0;
        local_60 = 0x3f800000;
        (**(code **)(*(int *)this + 0x1c8))();
        *(int *)(this + 0x5f0) = *(int *)(param_1 + 0x4f0);
        *(int *)(this + 0x4e4) = *(int *)(param_1 + 0x4f4);
        *(int *)(this + 0x540) = *(int *)(param_1 + 0x4f0);
        local_8 = (AActor *)this;
LAB_104e096b:
        thunk_FUN_1037ae60();
        AEmitter::SetSizeScale(this,_DAT_108a574c);
        APawn::PlaySkillSound((APawn *)param_2,param_1,(AActor *)this,2);
      }
    }
    goto LAB_104e099a;
  case (AActor)0x2:
    if ((float)_DAT_108a4c38 < *(float *)(param_1 + 0x4f8)) {
      pUVar10 = *(UClass **)(param_1 + 0xe4);
      local_17c = 0x104e09dc;
      local_10 = pUVar10;
      local_c = (AEmitter *)
                UObject::StaticLoadClass
                          (&AActor::PrivateStaticClass,(UObject *)0x0,
                           (ushort *)L"LineageEffect.m_u003_c",(ushort *)0x0,1,(UPackageMap *)0x0);
      if (local_c != (AEmitter *)0x0) {
        local_8 = (AActor *)(*(int *)pUVar10 + 0xc0);
        puVar3 = (undefined4 *)FRotator::FRotator((FRotator *)&local_34,0,0,0);
        local_180 = *puVar3;
        local_17c = puVar3[1];
        local_18c = local_20;
        local_188 = local_1c;
        local_184 = local_18;
        local_14 = (undefined1 *)&uStack_190;
        uStack_190 = local_18;
        FName::FName((FName *)&uStack_190,0);
        local_c = (AEmitter *)(**(code **)local_8)();
        if (((*(UObject **)(*(int *)(param_1 + 0x4f4) + 0x104) != (UObject *)0x0) &&
            (iVar8 = UObject::IsA(*(UObject **)(*(int *)(param_1 + 0x4f4) + 0x104),
                                  &USkeletalMesh::PrivateStaticClass), iVar8 != 0)) &&
           ((local_24 = thunk_FUN_104b4270(), local_24 != 0 &&
            ((local_c != (AEmitter *)0x0 &&
             (iVar8 = (**(code **)(*(int *)local_c + 0x7c))(), iVar8 != 0)))))) {
          iVar8 = (**(code **)(*(int *)local_c + 0x7c))();
          *(undefined4 *)(iVar8 + 0x484) = *(undefined4 *)(local_24 + 0x98);
        }
        if (param_2 != (ANProjectile *)0x0) {
          APawn::PlaySkillSound((APawn *)param_2,param_1,(AActor *)local_c,2);
        }
      }
      iVar8 = *(int *)(param_1 + 0x4f4);
      local_20 = *(undefined4 *)(iVar8 + 0x1bc);
      local_1c = *(undefined4 *)(iVar8 + 0x1c0);
      local_18 = *(undefined4 *)(iVar8 + 0x1c4);
      local_17c = 0x104e0b06;
      local_c = (AEmitter *)
                UObject::StaticLoadClass
                          (&AActor::PrivateStaticClass,(UObject *)0x0,
                           (ushort *)L"LineageEffect.m_u003_b",(ushort *)0x0,1,(UPackageMap *)0x0);
      if (local_c != (AEmitter *)0x0) {
        param_2 = (ANProjectile *)(*(int *)pUVar10 + 0xc0);
        local_180 = *(undefined4 *)(param_1 + 0x1c8);
        local_17c = *(undefined4 *)(param_1 + 0x1cc);
        local_18c = local_20;
        local_188 = local_1c;
        local_184 = local_18;
        local_14 = (undefined1 *)&uStack_190;
        uStack_190 = local_1c;
        FName::FName((FName *)&uStack_190,0);
        pAVar4 = (ANProjectile *)(**(code **)param_2)();
        pUVar10 = local_10;
        if (pAVar4 != (ANProjectile *)0x0) {
          local_5c = 0;
          local_58 = 0;
          local_54 = 0x3f800000;
          (**(code **)(*(int *)pAVar4 + 0x1c8))();
          *(undefined4 *)(pAVar4 + 0x5f0) = *(undefined4 *)(param_1 + 0x510);
          *(undefined4 *)(pAVar4 + 0x4e4) = *(undefined4 *)(param_1 + 0x3c);
          param_2 = pAVar4;
          thunk_FUN_1037ae60();
          *(undefined4 *)(pAVar4 + 0x540) = *(undefined4 *)(param_1 + 0x4f0);
          *(undefined4 *)(pAVar4 + 0x568) = *(undefined4 *)(param_1 + 0x3c);
          *(undefined4 *)(pAVar4 + 0x4dc) = _DAT_1089df54;
          *(undefined4 *)(pAVar4 + 0x4e0) = _DAT_108a7a14;
          param_2 = (ANProjectile *)thunk_FUN_1032ffc0();
          local_78._0_1_ = 1;
          if (param_2 == (ANProjectile *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FNMover::FNMover((FNMover *)param_2);
          }
          local_78 = (uint)local_78._1_3_ << 8;
          *(undefined4 *)(pAVar4 + 0x2c4) = uVar5;
          local_cc = _DAT_108a7a10;
          local_c8 = _DAT_1089fb1c;
          local_c4 = _DAT_1089fb1c;
          thunk_FUN_10379630();
          local_e4 = 0x3f800000;
          local_e0 = 0;
          local_dc = 0;
          thunk_FUN_10379630();
          FNMover::Init(*(FNMover **)(pAVar4 + 0x2c4),pAVar4,2);
          iVar8 = *(int *)(pAVar4 + 0x2c4);
          *(undefined4 *)(iVar8 + 0x34) = local_20;
          *(undefined4 *)(iVar8 + 0x38) = local_1c;
          *(undefined4 *)(iVar8 + 0x3c) = local_18;
          FNMover::SetTarget(*(FNMover **)(pAVar4 + 0x2c4),
                             (FVector *)(*(int *)(param_1 + 0x3c) + 0x1bc));
          FNMover::AdjustPosition(*(FNMover **)(pAVar4 + 0x2c4));
          puVar3 = *(undefined4 **)(pAVar4 + 0x2c4);
          *puVar3 = _DAT_1089df54;
          puVar3[1] = _DAT_108a7a14;
          pUVar10 = local_10;
        }
      }
      iVar8 = *(int *)(param_1 + 0x4f4);
      local_20 = *(undefined4 *)(iVar8 + 0x1bc);
      local_1c = *(undefined4 *)(iVar8 + 0x1c0);
      local_18 = *(undefined4 *)(iVar8 + 0x1c4);
      local_17c = 0x104e0d07;
      local_c = (AEmitter *)
                UObject::StaticLoadClass
                          (&AActor::PrivateStaticClass,(UObject *)0x0,
                           (ushort *)L"LineageEffect.m_u003_b",(ushort *)0x0,1,(UPackageMap *)0x0);
      if (local_c != (AEmitter *)0x0) {
        iVar8 = *(int *)pUVar10;
        local_180 = *(undefined4 *)(param_1 + 0x1c8);
        local_17c = *(undefined4 *)(param_1 + 0x1cc);
        local_18c = local_20;
        local_188 = local_1c;
        local_184 = local_18;
        param_2 = (ANProjectile *)&uStack_190;
        uStack_190 = local_1c;
        FName::FName((FName *)&uStack_190,0);
        pAVar4 = (ANProjectile *)(**(code **)(iVar8 + 0xc0))();
        if (pAVar4 != (ANProjectile *)0x0) {
          local_a8 = 0;
          local_a4 = 0;
          local_a0 = 0x3f800000;
          (**(code **)(*(int *)pAVar4 + 0x1c8))();
          *(undefined4 *)(pAVar4 + 0x5f0) = *(undefined4 *)(param_1 + 0x510);
          *(undefined4 *)(pAVar4 + 0x4e4) = *(undefined4 *)(param_1 + 0x3c);
          local_10 = (UClass *)pAVar4;
          thunk_FUN_1037ae60();
          *(undefined4 *)(pAVar4 + 0x540) = *(undefined4 *)(param_1 + 0x4f0);
          *(undefined4 *)(pAVar4 + 0x4dc) = _DAT_1089df54;
          *(undefined4 *)(pAVar4 + 0x4e0) = _DAT_108a7a14;
          param_2 = (ANProjectile *)thunk_FUN_1032ffc0();
          local_78._0_1_ = 2;
          if (param_2 == (ANProjectile *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FNMover::FNMover((FNMover *)param_2);
          }
          local_78 = (uint)local_78._1_3_ << 8;
          *(undefined4 *)(pAVar4 + 0x2c4) = uVar5;
          local_d8 = _DAT_108a7a10;
          local_d4 = _DAT_108a7a0c;
          local_d0 = _DAT_1089fb1c;
          thunk_FUN_10379630();
          local_c0 = 0x3f800000;
          local_bc = 0;
          local_b8 = 0;
          thunk_FUN_10379630();
          FNMover::Init(*(FNMover **)(pAVar4 + 0x2c4),pAVar4,2);
          iVar8 = *(int *)(pAVar4 + 0x2c4);
          *(undefined4 *)(iVar8 + 0x34) = local_20;
          *(undefined4 *)(iVar8 + 0x38) = local_1c;
          *(undefined4 *)(iVar8 + 0x3c) = local_18;
          FNMover::SetTarget(*(FNMover **)(pAVar4 + 0x2c4),
                             (FVector *)(*(int *)(param_1 + 0x3c) + 0x1bc));
          FNMover::AdjustPosition(*(FNMover **)(pAVar4 + 0x2c4));
          puVar3 = *(undefined4 **)(pAVar4 + 0x2c4);
          *puVar3 = _DAT_1089df54;
          puVar3[1] = _DAT_108a7a14;
        }
      }
      param_1[0x4dd] = (AActor)0x0;
    }
    break;
  case (AActor)0x3:
    if ((float)_DAT_108a4c38 < *(float *)(param_1 + 0x4f8)) {
      param_2 = *(ANProjectile **)(param_1 + 0xe4);
      local_17c = 0x104e10f9;
      local_8 = (AActor *)
                UObject::StaticLoadClass
                          (&AActor::PrivateStaticClass,(UObject *)0x0,
                           (ushort *)L"LineageEffect.m_u001_b",(ushort *)0x0,1,(UPackageMap *)0x0);
      local_74 = 0;
      local_70 = 0;
      local_6c = 0;
      iVar8 = *(int *)param_2;
      puVar3 = (undefined4 *)FRotator::FRotator(local_f4,0,0,0);
      local_180 = *puVar3;
      local_17c = puVar3[1];
      local_18c = local_74;
      local_188 = local_70;
      local_184 = local_6c;
      local_14 = (undefined1 *)&uStack_190;
      uStack_190 = local_6c;
      FName::FName((FName *)&uStack_190,0);
      param_2 = (ANProjectile *)(**(code **)(iVar8 + 0xc0))();
      iVar8 = thunk_FUN_104b4270();
      local_24 = iVar8;
      if (((iVar8 != 0) && (param_2 != (ANProjectile *)0x0)) &&
         (iVar6 = (**(code **)(*(int *)param_2 + 0x7c))(), iVar6 != 0)) {
        local_8 = (AActor *)(*(float *)(iVar8 + 0x98) * (float)_DAT_108a0660);
        iVar8 = (**(code **)(*(int *)param_2 + 0x7c))();
        *(AActor **)(iVar8 + 0x484) = local_8;
      }
      param_1[0x4dd] = (AActor)0x0;
      if (this_00 != (APawn *)0x0) {
        APawn::PlaySkillSound(this_00,param_1,(AActor *)param_2,2);
      }
    }
    break;
  case (AActor)0x4:
  case (AActor)0x6:
    if ((float)_DAT_108a4c38 < *(float *)(param_1 + 0x4f8)) {
      param_2 = *(ANProjectile **)(param_1 + 0xe4);
      local_17c = 0x104e1224;
      local_8 = (AActor *)
                UObject::StaticLoadClass
                          (&AActor::PrivateStaticClass,(UObject *)0x0,
                           (ushort *)L"LineageEffect.m_u007_b",(ushort *)0x0,1,(UPackageMap *)0x0);
      local_9c = 0;
      local_98 = 0;
      local_94 = 0;
      iVar8 = *(int *)param_2;
      puVar3 = (undefined4 *)FRotator::FRotator(local_124,0,0,0);
      local_180 = *puVar3;
      local_17c = puVar3[1];
      local_18c = local_9c;
      local_188 = local_98;
      local_184 = local_94;
      local_14 = (undefined1 *)&uStack_190;
      uStack_190 = local_94;
      FName::FName((FName *)&uStack_190,0);
      pAVar9 = (AActor *)(**(code **)(iVar8 + 0xc0))();
      if (pAVar9 != (AActor *)0x0) {
        AActor::AttachToBone(*(AActor **)(param_1 + 0x4f4),pAVar9,0,1);
      }
      param_1[0x4dd] = (AActor)0x0;
      if (this_00 != (APawn *)0x0) {
        APawn::PlaySkillSound(this_00,param_1,pAVar9,2);
      }
    }
    break;
  case (AActor)0x5:
    if (*(float *)(param_1 + 0x4f8) <= (float)_DAT_108a4c38) break;
    if (*(int *)(param_1 + 0x4f4) != 0) {
      local_b4 = 0;
      local_b0 = 0;
      local_ac = 0;
      puVar3 = (undefined4 *)FRotator::FRotator(local_100,0,0,0);
      local_180 = *puVar3;
      local_17c = puVar3[1];
      local_18c = local_b4;
      local_188 = local_b0;
      local_184 = local_ac;
      uStack_190 = 2;
      param_2 = (ANProjectile *)&stack0xfffffe6c;
      FName::FName((FName *)&stack0xfffffe6c,(ushort *)L"LineageEffect.m_u018_b",1);
      local_c = (AEmitter *)AActor::SpawnSkillEffect((AActor *)this_00);
    }
    if (this_00 != (APawn *)0x0) {
      APawn::PlaySkillSound(this_00,param_1,(AActor *)local_c,2);
      param_1[0x4dd] = (AActor)0x0;
      break;
    }
    goto LAB_104e099a;
  case (AActor)0x7:
    if (*(float *)(param_1 + 0x4f8) <= (float)_DAT_10884cf0) break;
    piVar1 = *(int **)(this_00 + 0xe4);
    local_17c = 0x104e0f0c;
    local_8 = (AActor *)
              UObject::StaticLoadClass
                        (&AActor::PrivateStaticClass,(UObject *)0x0,
                         (ushort *)L"LineageEffect.m_u037_d",(ushort *)0x0,1,(UPackageMap *)0x0);
    if (local_8 != (AActor *)0x0) {
      iVar8 = *piVar1;
      local_180 = *(undefined4 *)(param_1 + 0x1c8);
      local_17c = *(undefined4 *)(param_1 + 0x1cc);
      local_18c = *(undefined4 *)(param_1 + 0x1bc);
      uStack_190 = *(undefined4 *)(param_1 + 0x1c0);
      local_184 = *(undefined4 *)(param_1 + 0x1c4);
      local_14 = (undefined1 *)&uStack_190;
      local_188 = uStack_190;
      FName::FName((FName *)&uStack_190,0);
      this = (AEmitter *)(**(code **)(iVar8 + 0xc0))();
      if (this != (AEmitter *)0x0) {
        local_90 = 0;
        local_8c = 0;
        local_88 = 0x3f800000;
        (**(code **)(*(int *)this + 0x1c8))();
        *(int *)(this + 0x5f0) = *(int *)(param_1 + 0x4f0);
        *(int *)(this + 0x4e4) = *(int *)(param_1 + 0x4f4);
        *(int *)(this + 0x540) = *(int *)(param_1 + 0x4f0);
        local_c = this;
        goto LAB_104e096b;
      }
    }
    goto LAB_104e099a;
  case (AActor)0x8:
    if ((float)_DAT_108a4c38 < *(float *)(param_1 + 0x4f8)) {
      param_2 = *(ANProjectile **)(param_1 + 0xe4);
      local_17c = 0x104e1023;
      local_8 = (AActor *)
                UObject::StaticLoadClass
                          (&AActor::PrivateStaticClass,(UObject *)0x0,
                           (ushort *)L"LineageEffect.s_u011_a",(ushort *)0x0,1,(UPackageMap *)0x0);
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      iVar8 = *(int *)param_2;
      puVar3 = (undefined4 *)FRotator::FRotator(local_10c,0,0,0);
      local_180 = *puVar3;
      local_17c = puVar3[1];
      local_18c = local_40;
      local_188 = local_3c;
      local_184 = local_38;
      local_14 = (undefined1 *)&uStack_190;
      uStack_190 = local_38;
      FName::FName((FName *)&uStack_190,0);
      pAVar9 = (AActor *)(**(code **)(iVar8 + 0xc0))();
      param_1[0x4dd] = (AActor)0x0;
      if (this_00 != (APawn *)0x0) {
        APawn::PlaySkillSound(this_00,param_1,pAVar9,2);
      }
    }
    break;
  case (AActor)0x9:
    if (*(int *)(param_1 + 0x4f0) == 0x13fb) {
      piVar1 = *(int **)(param_1 + 0xe4);
      local_17c = 0x104e13c8;
      local_8 = (AActor *)
                UObject::StaticLoadClass
                          (&AActor::PrivateStaticClass,(UObject *)0x0,
                           (ushort *)L"LineageEffect.ph_hate_ta",(ushort *)0x0,1,(UPackageMap *)0x0)
      ;
      if ((*(int *)(param_1 + 0x4f4) == 0) || (*(int *)(*(int *)(param_1 + 0x4f4) + 0x134) == 0))
      break;
      pUVar7 = (USkeletalMeshInstance *)thunk_FUN_104b4240();
      local_14 = &stack0xfffffe9c;
      local_10 = (UClass *)pUVar7;
      FName::FName((FName *)&stack0xfffffe9c,(ushort *)L"e_bone",1);
      USkeletalMeshInstance::GetAliasesTagBoneName(pUVar7);
      FName::FName((FName *)&local_28,0);
      iVar8 = FName::operator!=((FName *)&param_2,(FName *)&local_28);
      if (iVar8 != 0) {
        iVar8 = *piVar1;
        iVar6 = *(int *)(param_1 + 0x4f4);
        local_17c = 0;
        local_188 = *(undefined4 *)(iVar6 + 0x1c8);
        local_184 = *(undefined4 *)(iVar6 + 0x1cc);
        local_180 = *(undefined4 *)(iVar6 + 0x1d0);
        uStack_190 = *(undefined4 *)(iVar6 + 0x1c0);
        local_18c = *(undefined4 *)(iVar6 + 0x1c4);
        local_14 = &stack0xfffffe68;
        FName::FName((FName *)&stack0xfffffe68,0);
        pAVar9 = (AActor *)(**(code **)(iVar8 + 0xc0))();
        if (pAVar9 != (AActor *)0x0) {
          iVar8 = AActor::AttachToBone(*(AActor **)(param_1 + 0x4f4));
          if (iVar8 == 0) {
            AActor::AttachToBone(*(AActor **)(param_1 + 0x4f4),pAVar9,0,1);
            param_1[0x4dd] = (AActor)0x0;
          }
          else {
            local_14 = &stack0xfffffe54;
            FName::FName((FName *)&stack0xfffffe54,(ushort *)L"e_bone",1);
            USkeletalMeshInstance::GetAliasesTagCoords((USkeletalMeshInstance *)local_10,&local_154)
            ;
            *(undefined4 *)(pAVar9 + 0x1fc) = local_154;
            *(undefined4 *)(pAVar9 + 0x200) = local_150;
            *(undefined4 *)(pAVar9 + 0x204) = local_14c;
            param_1[0x4dd] = (AActor)0x0;
          }
          break;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x4f0) != 0x13fc) {
        param_1[0x4dd] = (AActor)0x0;
        break;
      }
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      puVar3 = (undefined4 *)FRotator::FRotator(local_118,0,0,0);
      local_180 = *puVar3;
      local_17c = puVar3[1];
      local_18c = local_4c;
      local_188 = local_48;
      local_184 = local_44;
      uStack_190 = 2;
      param_2 = (ANProjectile *)&stack0xfffffe6c;
      FName::FName((FName *)&stack0xfffffe6c,(ushort *)L"LineageEffect.m_u013_c",1);
      pAVar9 = AActor::SpawnSkillEffect(param_1);
      if (this_00 != (APawn *)0x0) {
        APawn::PlaySkillSound(this_00,param_1,pAVar9,2);
        param_1[0x4dd] = (AActor)0x0;
        break;
      }
    }
LAB_104e099a:
    param_1[0x4dd] = (AActor)0x0;
    break;
  default:
    param_1[0x4dd] = (AActor)0x0;
  }
  *(float *)(param_1 + 0x4f8) = param_3 + *(float *)(param_1 + 0x4f8);
  ExceptionList = local_80;
  return 1;
}


// ==== 104ef470 FUN_104ef470 depth=0 from=raiz callees=thunk_FUN_1037ae60@1031109f FNMagicInfo::Clear@103091a1 APawn::SetSkillAnim@10302fa9 APawn::FindSeq@10303f85 USkeletalMeshInstance::AnimGetAttackShotNotifyTimeRev@103142d1
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_104ef470(APawn *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 *puVar5;
  int iVar6;
  FMeshAnimSeq *pFVar7;
  int iVar8;
  int local_28;
  float local_24;
  float local_1c;
  APawn *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10818bd0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  if ((*(float *)(param_1 + 0x6b8) == (float)_DAT_10854b60) ||
     ((iVar6 = *(int *)(param_1 + 0x52c), iVar6 != 0xb && (*(int *)(param_1 + 0x520) == 0)))) {
    return 0;
  }
  local_1c = 0.0;
  local_24 = 0.0;
  local_28 = -1;
  ExceptionList = &local_10;
  puVar5 = &stack0xffffffb4;
  if ((*(int *)(param_1 + 0x534) < 2) &&
     ((ExceptionList = &local_10,
      iVar6 = APawn::SetSkillAnim(param_1,*(int *)(param_1 + 0x4f8),*(int *)(param_1 + 0x4fc)),
      iVar6 < 1 || (iVar6 = *(int *)(param_1 + 0x52c), puVar5 = local_14, iVar6 == 0)))) {
    FNMagicInfo::Clear((FNMagicInfo *)(param_1 + 0x4f0),1);
    ExceptionList = local_10;
    return 0;
  }
  local_14 = puVar5;
  if ((iVar6 != 0xb) && (iVar6 != 0xe)) {
    local_18 = param_1;
    thunk_FUN_1037ae60(&local_18);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(int **)(param_1 + 0x104) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x104) + 0x98))(param_1);
  }
  iVar6 = *(int *)(param_1 + 0x534);
  while( true ) {
    fVar3 = 0.0;
    iVar6 = iVar6 + -1;
    if (iVar6 < 0) break;
    pFVar7 = APawn::FindSeq(param_1,*(undefined4 *)(param_1 + iVar6 * 4 + 0x580));
    if (((pFVar7 == (FMeshAnimSeq *)0x0) || (*(float *)(pFVar7 + 0x18) <= 0.0)) ||
       (*(int *)(param_1 + 0x504) == iVar6)) {
      *(undefined4 *)(param_1 + iVar6 * 4 + 0x58c) = 0;
    }
    else {
      local_18 = (APawn *)((float)*(int *)(pFVar7 + 0x14) / *(float *)(pFVar7 + 0x18));
      *(APawn **)(param_1 + iVar6 * 4 + 0x58c) = local_18;
      if (local_24 == 0.0) {
        local_24 = USkeletalMeshInstance::AnimGetAttackShotNotifyTimeRev
                             (*(USkeletalMeshInstance **)(param_1 + 0x134),
                              *(undefined4 *)(param_1 + iVar6 * 4 + 0x580),param_1 + 0x598);
        local_24 = local_24 * *(float *)(param_1 + iVar6 * 4 + 0x58c);
        local_28 = iVar6;
        local_1c = local_24;
      }
      else {
        local_1c = (float)local_18 + local_1c;
      }
    }
  }
  if (local_1c == 0.0) {
    iVar6 = *(int *)(param_1 + 0x534);
    local_24 = *(float *)(param_1 + iVar6 * 4 + 0x588);
    local_28 = iVar6 + -1;
    for (iVar8 = 0; iVar8 < iVar6; iVar8 = iVar8 + 1) {
      local_1c = *(float *)(param_1 + iVar8 * 4 + 0x58c) + local_1c;
    }
  }
  if (*(int *)(param_1 + 0x4f0) == 0) {
    iVar6 = *(int *)(param_1 + 0x52c);
    fVar1 = _DAT_108a53f0;
    if ((((iVar6 == 2) || (iVar6 == 10)) || (iVar6 == 5)) ||
       (((iVar6 == 8 || (fVar1 = fVar3, iVar6 == 3)) ||
        ((iVar6 == 0xc || (fVar1 = _DAT_108a91a0, fVar3 = _DAT_10884cf0, iVar6 != 0xe))))))
    goto LAB_104ef69e;
  }
  else {
    fVar1 = *(float *)(*(int *)(param_1 + 0x4f0) + 0x74);
    if ((_DAT_108a91a0 <= fVar1) ||
       (fVar1 = fVar3, fVar3 = _DAT_108a91a0, *(int *)(param_1 + 0x52c) == 3)) goto LAB_104ef69e;
  }
  fVar1 = fVar3;
LAB_104ef69e:
  iVar6 = *(int *)(param_1 + 0x504);
  fVar3 = *(float *)(param_1 + 0x510) - fVar1;
  if (iVar6 < 0) {
    *(float *)(param_1 + 0x524) = local_1c / (fVar3 - (float)_DAT_108a0530);
    *(float *)(param_1 + 0x518) = _DAT_108a052c;
  }
  else {
    fVar4 = (float)_DAT_108a0530;
    if (*(int *)(param_1 + 0x52c) == 0xd) {
      *(float *)(param_1 + iVar6 * 4 + 0x58c) = fVar3 - (local_1c + fVar4);
      fVar3 = _DAT_108a052c;
    }
    else {
      *(float *)(param_1 + iVar6 * 4 + 0x58c) =
           fVar3 - (local_1c + fVar4) / *(float *)(param_1 + 0x6b8);
      fVar3 = fVar4 / *(float *)(param_1 + 0x6b8);
    }
    *(float *)(param_1 + 0x518) = fVar3;
    if ((0.0 <= *(float *)(param_1 + *(int *)(param_1 + 0x504) * 4 + 0x58c)) ||
       (fVar3 = (*(float *)(param_1 + 0x510) - fVar1) - fVar4 / *(float *)(param_1 + 0x6b8),
       fVar3 <= (float)_DAT_108a74a8)) {
      *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_1 + 0x6b8);
    }
    else {
      *(float *)(param_1 + 0x524) = local_1c / fVar3;
      *(float *)(param_1 + *(int *)(param_1 + 0x504) * 4 + 0x58c) = 0.0;
    }
  }
  fVar4 = _DAT_108a91a0;
  local_18 = *(APawn **)(param_1 + 0x518);
  fVar3 = (float)_DAT_108a9188;
  iVar6 = 0;
  do {
    while( true ) {
      if (*(int *)(param_1 + 0x534) <= iVar6) {
        local_8 = 0;
        if (*(int *)(param_1 + 0x52c) != 0) {
          APawn::DisableSpineRotation(param_1);
        }
        ExceptionList = local_10;
        return 1;
      }
      if (local_28 == iVar6) {
        if (*(float *)(param_1 + 0x524) <= 0.0) {
          *(APawn **)(param_1 + 0x514) = local_18;
        }
        else if (*(int *)(param_1 + 0x52c) == 0xd) {
          *(float *)(param_1 + 0x514) = (float)local_18 + local_24;
        }
        else {
          *(float *)(param_1 + 0x514) = (float)local_18 + local_24 / *(float *)(param_1 + 0x524);
        }
      }
      if ((*(int *)(param_1 + 0x504) != iVar6) && (0.0 < *(float *)(param_1 + 0x524))) break;
      *(float *)(param_1 + iVar6 * 4 + 0x58c) =
           (float)local_18 + *(float *)(param_1 + iVar6 * 4 + 0x58c);
LAB_104ef945:
      local_18 = *(APawn **)(param_1 + iVar6 * 4 + 0x58c);
      iVar6 = iVar6 + 1;
    }
    fVar2 = *(float *)(param_1 + iVar6 * 4 + 0x58c);
    if (*(int *)(param_1 + 0x52c) != 0xd) {
      fVar2 = fVar2 / *(float *)(param_1 + 0x524);
    }
    *(float *)(param_1 + iVar6 * 4 + 0x58c) = fVar2 + (float)local_18;
    if (((fVar1 < fVar4) || (iVar6 != 0)) || (*(int *)(param_1 + 0x534) < 2)) goto LAB_104ef945;
    *(float *)(param_1 + 0x58c) =
         *(float *)(param_1 + 0x58c) -
         (*(float *)(param_1 + 0x58c) / (*(float *)(param_1 + 0x510) - fVar1)) * fVar3;
    local_18 = *(APawn **)(param_1 + 0x58c);
    iVar6 = 1;
  } while( true );
}


// ==== 105308e0 FUN_105308e0 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000004e CORE.DLL::appSin@EXTERNAL:000000d2 CORE.DLL::FVector::Size@EXTERNAL:00000132 thunk_FUN_103256b0@1030314d UModel::BoxLeaves@1030e228 thunk_FUN_104a4940@10305ed9 FDynamicActor::Update@10314c4a thunk_FUN_1032bcd0@1030e322 ULevel::GetCurrentSWLevel@10304548 thunk_FUN_10325f90@1031447a CORE.DLL::FBox::GetCenterAndExtents@EXTERNAL:000001d2 CORE.DLL::UObject::IsA@EXTERNAL:0000004f FColor::FColor@1030dd23 CORE.DLL::FArray::Empty@EXTERNAL:000000a6 ULevel::GetZoneActor@10301d3e AActor::GetAmbientLightingActor@1030874c CORE.DLL::FName::operator!=@EXTERNAL:00000168 thunk_FUN_104ed3d0@1031190a CORE.DLL::FBox::ExpandBy@EXTERNAL:000001d1 thunk_FUN_10525d30@10314c77 CORE.DLL::appFailAssert@EXTERNAL:00000026
// strings: 108b37a0=.\UnActor.cpp | 108b5674=ActorRenderData | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_105308e0(AActor *param_1)

{
  int *piVar1;
  AActor AVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  ULevel *pUVar6;
  int iVar7;
  AActor *pAVar8;
  undefined4 *puVar9;
  AZoneInfo *pAVar10;
  int iVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float fVar14;
  double dVar15;
  undefined4 auStack_dc [6];
  undefined4 uStack_c4;
  float local_9c [3];
  undefined1 *local_90;
  void *local_8c;
  undefined1 *puStack_88;
  int local_84;
  undefined1 local_78 [12];
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  int local_4c;
  int local_44;
  AActor *local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  AActor *local_10;
  float local_c;
  AActor *local_8;
  
  pvVar4 = ExceptionList;
  puStack_88 = &LAB_1081a8c8;
  local_8c = ExceptionList;
  local_90 = &stack0xffffff4c;
  local_84 = 0;
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddb18 * 4);
  uVar3 = rdtsc();
  ExceptionList = &local_8c;
  *piVar1 = *piVar1 - (int)uVar3;
  if (((byte)param_1[100] & 0x80) != 0) {
    ExceptionList = pvVar4;
    return;
  }
  puVar5 = &stack0xffffff4c;
  local_40 = param_1;
  if (*(int *)(param_1 + 0x44) == 0) {
    uStack_c4 = 0x10530947;
    appFailAssert("ActorRenderData",".\\UnActor.cpp",0x9d4);
    puVar5 = local_90;
  }
  local_90 = puVar5;
  FDynamicActor::Update(*(FDynamicActor **)(param_1 + 0x44));
  local_c = 0.0;
  iVar7 = *(int *)(param_1 + 0x2cc);
  if (((*(int *)GIsL2Seamless_exref == 0) || (*(int *)GIsEditor_exref != 0)) ||
     (((byte)param_1[0x98] & 2) == 0)) {
    *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0xe4);
  }
  else {
    pUVar6 = ULevel::GetCurrentSWLevel
                       (*(ULevel **)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x19c),
                        (FVector *)(param_1 + 0x1bc));
    *(ULevel **)(param_1 + 0x2cc) = pUVar6;
    if (pUVar6 == (ULevel *)0x0) {
      *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0xe4);
    }
  }
  if (iVar7 != *(int *)(param_1 + 0x2cc)) {
    local_c = 1.4013e-45;
  }
  if (((*(int *)GIsEditor_exref == 0) && (*(char *)(*(int *)(param_1 + 0x44) + 0xe4) != '\0')) &&
     ((iVar7 = thunk_FUN_10525d30(), iVar7 != 0 &&
      ((iVar7 = thunk_FUN_10525d30(), iVar7 != 0 && (local_c == 0.0)))))) {
    pAVar8 = AActor::GetAmbientLightingActor(param_1);
    if (pAVar8[0x2b4] == (AActor)0xff) {
      dVar15 = appSin((double)(*(float *)(*(int *)(param_1 + 0xe0) + 0x4bc) * (float)_DAT_10891830))
      ;
      fVar13 = (float10)dVar15 * (float10)_DAT_108a0530 + (float10)_DAT_108a0540;
    }
    else {
      pAVar8 = AActor::GetAmbientLightingActor(param_1);
      fVar13 = (float10)(byte)pAVar8[0x2b4] / (float10)_DAT_10853b38;
    }
    local_9c[0] = (float)fVar13;
    iVar7 = *(int *)(param_1 + 0x44);
    local_5c = *(float *)(iVar7 + 0xe8) + local_9c[0];
    local_58 = *(float *)(iVar7 + 0xec) + local_9c[0];
    local_54 = local_9c[0] + *(float *)(iVar7 + 0xf0);
    local_50 = 0;
    local_3c = local_5c;
    local_38 = local_58;
    local_34 = local_54;
    local_10 = (AActor *)local_58;
    local_c = local_5c;
    local_8 = (AActor *)local_54;
    puVar9 = (undefined4 *)FColor::FColor((FColor *)&local_8,(FPlane *)&local_5c);
    *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xb8) = *puVar9;
    if (((*(int *)GIsEditor_exref == 0) && (param_1[0x35] == (AActor)0xb)) &&
       (*(int *)(param_1 + 0x2b8) != 0)) {
      for (iVar7 = 0; iVar7 < *(int *)(param_1 + 0x114); iVar7 = iVar7 + 1) {
        local_44 = iVar7;
        local_8 = param_1;
        thunk_FUN_104ed3d0();
      }
    }
    piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddb18 * 4);
    uVar3 = rdtsc();
    *piVar1 = *piVar1 + (int)uVar3 + -0xc;
    ExceptionList = local_8c;
    return;
  }
  AVar2 = param_1[0x34];
  if (AVar2 == (AActor)0x5) {
    FBox::GetCenterAndExtents
              ((FBox *)(*(int *)(param_1 + 0x44) + 0x8c),(FVector *)&local_1c,(FVector *)&local_3c);
    *(undefined1 *)(*(int *)(param_1 + 0x44) + 0xe4) = 1;
    iVar7 = *(int *)(param_1 + 0x44);
    *(float *)(iVar7 + 0xd8) = local_1c;
    *(float *)(iVar7 + 0xdc) = local_18;
    *(float *)(iVar7 + 0xe0) = local_14;
    iVar7 = *(int *)(param_1 + 0x44);
    *(undefined4 *)(iVar7 + 0xcc) = *(undefined4 *)(iVar7 + 0xd8);
    *(undefined4 *)(iVar7 + 0xd0) = *(undefined4 *)(iVar7 + 0xdc);
    *(undefined4 *)(iVar7 + 0xd4) = *(undefined4 *)(iVar7 + 0xe0);
    fVar14 = FVector::Size((FVector *)&local_3c);
    local_8 = (AActor *)(fVar14 * (float)_DAT_108a4120);
  }
  else {
    puVar9 = (undefined4 *)(*(int *)(param_1 + 0x44) + 0x8c);
    puVar12 = (undefined4 *)(*(int *)(param_1 + 0x44) + 0xcc);
    for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    if (AVar2 == (AActor)0x0) goto LAB_10530c37;
  }
  puVar9 = (undefined4 *)FBox::ExpandBy((FBox *)(*(int *)(param_1 + 0x44) + 0xcc),(float)local_78);
  puVar12 = (undefined4 *)(*(int *)(param_1 + 0x44) + 0xcc);
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
LAB_10530c37:
  uStack_c4 = 0x10530c4c;
  FArray::Empty((FArray *)(param_1 + 0x110),4,*(int *)(param_1 + 0x114));
  if (param_1[0x35] == (AActor)0xa) {
    uStack_c4 = 0x10530c69;
    FBox::GetCenterAndExtents
              ((FBox *)(*(int *)(param_1 + 0x44) + 0xcc),(FVector *)local_9c,(FVector *)&local_1c);
    fVar14 = FVector::Size((FVector *)&local_1c);
    local_8 = (AActor *)(fVar14 * (float)_DAT_108b5668);
    uStack_c4 = 0x10530c95;
    puVar9 = (undefined4 *)FBox::ExpandBy((FBox *)(*(int *)(param_1 + 0x44) + 0xcc),(float)local_78)
    ;
    puVar12 = (undefined4 *)(*(int *)(param_1 + 0x44) + 0xcc);
    for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  if (((*(int *)GIsL2Seamless_exref == 0) || (*(int *)GIsEditor_exref != 0)) ||
     (((byte)param_1[0x98] & 2) == 0)) {
    iVar7 = *(int *)(param_1 + 0xe4);
  }
  else {
    pUVar6 = ULevel::GetCurrentSWLevel
                       (*(ULevel **)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x19c),
                        (FVector *)(param_1 + 0x1bc));
    *(ULevel **)(param_1 + 0x2cc) = pUVar6;
    if (pUVar6 == (ULevel *)0x0) {
      *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0xe4);
    }
    iVar7 = *(int *)(param_1 + 0x2cc);
  }
  puVar9 = (undefined4 *)(*(int *)(param_1 + 0x44) + 0xcc);
  puVar12 = auStack_dc;
  for (iVar11 = 7; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
  UModel::BoxLeaves(*(UModel **)(iVar7 + 0xc0),&local_1c);
  local_84._0_1_ = 1;
  thunk_FUN_1032bcd0();
  local_84 = (uint)local_84._1_3_ << 8;
  thunk_FUN_10325f90();
  FName::FName((FName *)&local_8,0);
  iVar7 = FName::operator!=((FName *)(param_1 + 0x58),(FName *)&local_8);
  if (iVar7 != 0) {
    for (iVar7 = 0; local_30 = iVar7, iVar7 < *(int *)(param_1 + 0x114); iVar7 = iVar7 + 1) {
      if (((*(int *)GIsL2Seamless_exref == 0) || (*(int *)GIsEditor_exref != 0)) ||
         (((byte)param_1[0x98] & 2) == 0)) {
        pUVar6 = *(ULevel **)(param_1 + 0xe4);
      }
      else {
        if (*(int *)(param_1 + 0x2cc) == 0) {
          *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0xe4);
        }
        pUVar6 = *(ULevel **)(param_1 + 0x2cc);
      }
      pAVar10 = ULevel::GetZoneActor
                          (pUVar6,*(int *)(*(int *)(*(int *)(pUVar6 + 0xc0) + 0xcc) +
                                          *(int *)(*(int *)(param_1 + 0x110) + iVar7 * 4) * 0x14));
      iVar11 = FName::operator!=((FName *)(pAVar10 + 0x10c),(FName *)(param_1 + 0x58));
      if (iVar11 != 0) {
        thunk_FUN_103256b0(iVar7,1);
        iVar7 = iVar7 + -1;
      }
    }
  }
  local_2c = 0.0;
  local_28 = 0.0;
  local_24 = 0.0;
  iVar7 = UObject::IsA((UObject *)param_1,&AZoneInfo::PrivateStaticClass);
  if (iVar7 == 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffe;
  }
  for (local_20 = 0; local_20 < *(int *)(param_1 + 0x114); local_20 = local_20 + 1) {
    pAVar10 = ULevel::GetZoneActor
                        (*(ULevel **)(param_1 + 0x2cc),
                         *(int *)(*(int *)(*(int *)(*(ULevel **)(param_1 + 0x2cc) + 0xc0) + 0xcc) +
                                 *(int *)(*(int *)(param_1 + 0x110) + local_20 * 4) * 0x14));
    fVar13 = (float10)thunk_FUN_104a4940(local_2c);
    local_2c = (float)fVar13;
    fVar13 = (float10)thunk_FUN_104a4940(local_28);
    local_28 = (float)fVar13;
    fVar13 = (float10)thunk_FUN_104a4940(local_24);
    local_24 = (float)fVar13;
    iVar7 = UObject::IsA((UObject *)param_1,&AZoneInfo::PrivateStaticClass);
    if ((iVar7 == 0) && (((byte)pAVar10[0x13c] & 1) != 0)) {
      *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 1;
    }
  }
  iVar7 = *(int *)(param_1 + 0x44);
  *(float *)(iVar7 + 0xe8) = local_2c;
  *(float *)(iVar7 + 0xec) = local_28;
  *(float *)(iVar7 + 0xf0) = local_24;
  pAVar8 = AActor::GetAmbientLightingActor(param_1);
  if (pAVar8[0x2b4] == (AActor)0xff) {
    dVar15 = appSin((double)(*(float *)(*(int *)(param_1 + 0xe0) + 0x4bc) * (float)_DAT_10891830));
    fVar13 = (float10)dVar15 * (float10)_DAT_108a0530 + (float10)_DAT_108a0540;
  }
  else {
    pAVar8 = AActor::GetAmbientLightingActor(param_1);
    fVar13 = (float10)(byte)pAVar8[0x2b4] / (float10)_DAT_10853b38;
  }
  local_64 = (float)fVar13;
  iVar7 = *(int *)(param_1 + 0x44);
  local_6c = *(float *)(iVar7 + 0xe8) + local_64;
  local_68 = *(float *)(iVar7 + 0xec) + local_64;
  local_64 = local_64 + *(float *)(iVar7 + 0xf0);
  local_60 = 0;
  local_1c = local_6c;
  local_18 = local_68;
  local_14 = local_64;
  local_10 = (AActor *)local_68;
  local_c = local_64;
  local_8 = (AActor *)local_6c;
  puVar9 = (undefined4 *)FColor::FColor((FColor *)&local_8,(FPlane *)&local_6c);
  *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xb8) = *puVar9;
  if (((*(int *)GIsEditor_exref == 0) && (param_1[0x35] == (AActor)0xb)) &&
     (*(int *)(param_1 + 0x2b8) != 0)) {
    for (iVar7 = 0; iVar7 < *(int *)(param_1 + 0x114); iVar7 = iVar7 + 1) {
      local_4c = iVar7;
      local_10 = param_1;
      thunk_FUN_104ed3d0();
    }
  }
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddb18 * 4);
  uVar3 = rdtsc();
  *piVar1 = *piVar1 + (int)uVar3 + -0xc;
  ExceptionList = local_8c;
  return;
}


// ==== 10535430 FUN_10535430 depth=0 from=raiz callees=CORE.DLL::FArray::Add@EXTERNAL:000000a7 UParticleEmitter::Initialize@10311ddd
// strings: 

void __thiscall FUN_10535430(UParticleEmitter *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ab30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UParticleEmitter::Initialize(param_1,param_2);
  if (*(int *)(param_1 + 0x4f0) == 0) {
    *(undefined4 *)(param_1 + 0x5a0) = 1;
  }
  else {
    *(int *)(param_1 + 0x5a0) = *(int *)(param_1 + 0x4f0);
  }
  iVar1 = *(int *)(param_1 + 0x52c);
  *(int *)(param_1 + 0x5a4) = iVar1 * *(int *)(param_1 + 0x5a0) * 2;
  iVar2 = (iVar1 + -1) * *(int *)(param_1 + 0x5a0);
  *(int *)(param_1 + 0x5a8) = iVar2 * 6;
  *(int *)(param_1 + 0x5ac) = iVar2 * 2;
  FArray::Add((FArray *)(param_1 + 0x5b4),iVar1 * param_2,0x10);
  FArray::Add((FArray *)(param_1 + 0x5c0),*(int *)(param_1 + 0x510) * param_2,0xc);
  (**(code **)(*(int *)param_1 + 0x94))();
  ExceptionList = local_10;
  return;
}


// ==== 10535b40 FUN_10535b40 depth=0 from=raiz callees=UParticleEmitter::SpawnParticle@103122ec CORE.DLL::appFrand@EXTERNAL:000001b0 AActor::eventTrigger@10304fc5 CORE.DLL::FRangeVector::GetRand@EXTERNAL:000001d8 CORE.DLL::appFractional@EXTERNAL:000001d7 thunk_FUN_10535750@10313926 CORE.DLL::FRange::GetRand@EXTERNAL:000001d9 CORE.DLL::FOutputDevice::Logf2@EXTERNAL:0000002e thunk_FUN_103301a0@10309831 CORE.DLL::FVector::Normalize@EXTERNAL:000001bb FUN_107a6660@107a6660
// strings: 108b6b40=PTCS_Relative is not supported in conjunction with PTEP_TraceOffset | 

undefined4 __thiscall
FUN_10535b40(UParticleEmitter *param_1,float param_2,float param_3,float param_4,int param_5,
            FVector *param_6)

{
  AActor *pAVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float local_19c [3];
  undefined1 local_190 [8];
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_164;
  float local_160;
  float local_154;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  float local_12c;
  float *local_128;
  int local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  int local_fc;
  float local_f8;
  int local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 *local_74;
  void *local_70;
  undefined1 *puStack_6c;
  undefined4 local_68;
  float local_64;
  int local_60;
  float *local_5c;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  undefined8 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float *local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float *local_8;
  
  puStack_6c = &LAB_1081ab60;
  local_70 = ExceptionList;
  local_74 = &stack0xfffffe4c;
  local_68 = 0;
  ExceptionList = &local_70;
  iVar4 = UParticleEmitter::SpawnParticle(param_1,(int)param_2,param_3,(int)param_4,param_5,param_6)
  ;
  if (iVar4 == 0) {
    ExceptionList = local_70;
    return 0;
  }
  pfVar9 = (float *)((int)param_2 * 0xe0 + *(int *)(param_1 + 0x42c));
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  local_40 = 0;
  iVar10 = -1;
  local_60 = -1;
  iVar4 = iVar10;
  local_128 = pfVar9;
  if ((byte)((char)param_1[0x4e4] - 2U) < 4) {
    if (*(float *)(param_1 + 0x5b0) != 0.0) {
      fVar11 = appFrand();
      local_f4 = 0;
      for (param_6 = (FVector *)0x0;
          (iVar4 = iVar10, iVar3 = local_60, local_f4 < *(int *)(param_1 + 0x4dc) &&
          ((fVar11 * *(float *)(param_1 + 0x5b0) <= (float)param_6 ||
           (iVar4 = local_f4, iVar3 = local_f4,
           *(float *)(*(int *)(param_1 + 0x4d8) + 0x1c + local_f4 * 0x20) + (float)param_6 <
           fVar11 * *(float *)(param_1 + 0x5b0)))));
          param_6 = (FVector *)
                    ((float)param_6 + *(float *)(*(int *)(param_1 + 0x4d8) + 0x1c + iVar4))) {
        iVar4 = local_f4 * 0x20;
        local_f4 = local_f4 + 1;
      }
      local_60 = iVar3;
      if (iVar4 != -1) goto LAB_10535c66;
    }
    if (*(int *)(param_1 + 0x4dc) != 0) {
      iVar4 = 0;
      local_60 = 0;
    }
  }
LAB_10535c66:
  if (((param_1[0x4e4] == (UParticleEmitter)0x4) && (param_1[0x108] == (UParticleEmitter)0x1)) &&
     (*(int *)GLog_exref != 0)) {
    FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
  }
  switch(param_1[0x4e4]) {
  case (UParticleEmitter)0x0:
    pfVar6 = (float *)thunk_FUN_103301a0(&local_e0,pfVar9[0x2c]);
    local_20 = *pfVar6;
    local_1c = pfVar6[1];
    local_18 = pfVar6[2];
    break;
  case (UParticleEmitter)0x1:
    FVector::Normalize((FVector *)(pfVar9 + 6));
    fVar11 = FRange::GetRand((FRange *)(param_1 + 0x4d0));
    pfVar6 = (float *)thunk_FUN_103301a0(&local_144,fVar11);
    local_20 = *pfVar6;
    local_1c = pfVar6[1];
    local_18 = pfVar6[2];
    break;
  case (UParticleEmitter)0x2:
    if (iVar4 != -1) {
      FRangeVector::GetRand((FRangeVector *)(*(int *)(param_1 + 0x4d8) + 4 + iVar4 * 0x20));
      local_20 = local_14;
      local_1c = local_10;
      local_18 = local_c;
      local_3c = *pfVar9 + local_14;
      local_2c = pfVar9[1] + local_10;
      local_28 = pfVar9[2] + local_c;
      local_38 = (double)CONCAT44(local_28,local_2c);
      local_30 = local_3c;
    }
    local_40 = 1;
    break;
  case (UParticleEmitter)0x3:
    if (((iVar4 != -1) && (iVar4 < *(int *)(param_1 + 0x5d0))) &&
       (piVar2 = (int *)(*(int *)(param_1 + 0x5cc) + iVar4 * 4), *piVar2 != 0)) {
      pAVar1 = *(AActor **)(param_1 + 0x420);
      iVar4 = *piVar2;
      local_d4 = *(float *)(iVar4 + 0x1bc) - *(float *)(pAVar1 + 0x1bc);
      local_d0 = *(float *)(iVar4 + 0x1c0) - *(float *)(pAVar1 + 0x1c0);
      local_cc = *(float *)(iVar4 + 0x1c4) - *(float *)(pAVar1 + 0x1c4);
      iVar4 = *piVar2;
      local_30 = *(float *)(iVar4 + 0x1bc);
      local_2c = *(float *)(iVar4 + 0x1c0);
      local_28 = *(float *)(iVar4 + 0x1c4);
      local_20 = local_d4;
      local_1c = local_d0;
      local_18 = local_cc;
      if (((byte)param_1[0x4f4] & 1) != 0) {
        AActor::eventTrigger((AActor *)*piVar2,pAVar1,(APawn *)0x0);
      }
    }
    local_40 = 0;
    break;
  case (UParticleEmitter)0x4:
    if (iVar4 != -1) {
      FRangeVector::GetRand((FRangeVector *)(*(int *)(param_1 + 0x4d8) + 4 + iVar4 * 0x20));
      local_20 = local_14;
      local_1c = local_10;
      local_18 = local_c;
      local_bc = *pfVar9 + local_14;
      local_b8 = local_10 + pfVar9[1];
      local_b4 = local_c + pfVar9[2];
      local_164 = 0;
      local_138 = 0;
      local_134 = 0;
      local_130 = 0;
      local_30 = local_bc;
      local_2c = local_b8;
      local_28 = local_b4;
      iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x420) + 0xe4) + 0xe4))
                        (local_190,*(int *)(param_1 + 0x420),&local_30,pfVar9,0xdf,0,0,0);
      if (iVar4 == 0) {
        local_30 = local_188;
        local_2c = local_184;
        local_28 = local_180;
        local_108 = local_188 - *pfVar9;
        local_104 = local_184 - pfVar9[1];
        local_100 = local_180 - pfVar9[2];
        local_20 = local_108;
        local_1c = local_104;
        local_18 = local_100;
      }
    }
    local_40 = 1;
    break;
  case (UParticleEmitter)0x5:
    if (iVar4 != -1) {
      FRangeVector::GetRand((FRangeVector *)(*(int *)(param_1 + 0x4d8) + 4 + iVar4 * 0x20));
      local_120 = local_14 - *pfVar9;
      local_11c = local_10 - pfVar9[1];
      local_118 = local_c - pfVar9[2];
      local_30 = local_14;
      local_2c = local_10;
      local_28 = local_c;
      local_20 = local_120;
      local_1c = local_11c;
      local_18 = local_118;
    }
    local_40 = 1;
  }
  if (((byte)param_1[0x550] & 4) != 0) {
    local_40 = 0;
  }
  local_8 = *(float **)(param_1 + 0x52c);
  fVar11 = 1.0 / (float)((int)local_8 + -1);
  iVar4 = *(int *)(param_1 + 0x510);
  local_64 = 1.0 / (float)(iVar4 + -1);
  local_f8 = 1.0 / (float)iVar4;
  local_12c = 1.0 / (float)(int)local_8;
  pfVar6 = (float *)(*(int *)(param_1 + 0x5c0) + iVar4 * (int)param_2 * 0xc);
  *pfVar6 = *pfVar9;
  pfVar6[1] = pfVar9[1];
  pfVar6[2] = pfVar9[2];
  local_54 = 0.0;
  local_50 = 0.0;
  local_4c = 0.0;
  for (local_48 = 1; pfVar7 = pfVar6 + 3, local_48 < *(int *)(param_1 + 0x510);
      local_48 = local_48 + 1) {
    local_24 = pfVar7;
    if (((byte)param_1[0x550] & 2) == 0) {
      pfVar5 = (float *)FRangeVector::GetRand((FRangeVector *)(param_1 + 0x4f8));
      local_54 = *pfVar5;
      local_50 = pfVar5[1];
      local_4c = pfVar5[2];
    }
    else {
      fVar12 = appFractional((float)local_48 * local_f8 * (*(float *)(param_1 + 0x548) + 1.0));
      for (local_124 = 0; local_124 < *(int *)(param_1 + 0x534); local_124 = local_124 + 1) {
        iVar4 = *(int *)(param_1 + 0x530) + local_124 * 0x10;
        if (fVar12 <= *(float *)(iVar4 + 0xc)) {
          puVar8 = (undefined4 *)(local_124 * 0x10 + *(int *)(param_1 + 0x530));
          local_8 = (float *)puVar8[3];
          local_144 = *puVar8;
          local_140 = puVar8[1];
          local_13c = puVar8[2];
          if (local_124 == 0) {
            local_ec = 0x3f800000;
            local_e8 = 0x3f800000;
            local_e4 = 0x3f800000;
            local_a4 = 0x3f800000;
            local_a0 = 0x3f800000;
            local_9c = 0x3f800000;
            param_4 = 0.0;
          }
          else {
            local_a4 = *(undefined4 *)(iVar4 + -0x10);
            local_a0 = *(undefined4 *)(iVar4 + -0xc);
            local_9c = *(undefined4 *)(iVar4 + -8);
            param_4 = *(float *)(iVar4 + -4);
          }
          if ((float)local_8 == 0.0) {
            fVar12 = 1.0;
          }
          else {
            fVar12 = (fVar12 - param_4) / ((float)local_8 - param_4);
          }
          local_8 = (float *)FRangeVector::GetRand((FRangeVector *)(param_1 + 0x514));
          pfVar5 = (float *)thunk_FUN_10535750(&local_80,&local_a4,&local_144,fVar12);
          local_c8 = *local_8 * *pfVar5;
          local_c4 = local_8[1] * pfVar5[1];
          local_c0 = local_8[2] * pfVar5[2];
          local_38 = (double)CONCAT44(local_c0,(undefined4)local_38);
          local_54 = local_c8;
          local_50 = local_c4;
          local_4c = local_c0;
          break;
        }
      }
    }
    fVar12 = (float)local_48;
    local_160 = fVar12 * local_20;
    local_19c[0] = local_64 * local_160;
    local_154 = local_19c[0] + *pfVar9;
    local_98 = local_154 + local_54;
    local_94 = local_50 + pfVar9[1] + local_1c * fVar12 * local_64;
    local_38 = (double)CONCAT44(local_94,(undefined4)local_38);
    local_90 = local_4c + pfVar9[2] + local_64 * fVar12 * local_18;
    *pfVar7 = local_98;
    pfVar6[4] = local_94;
    pfVar6[5] = local_90;
    local_8 = (float *)local_90;
    pfVar6 = pfVar7;
  }
  if (local_40 != 0) {
    *pfVar6 = local_30;
    pfVar6[1] = local_2c;
    pfVar6[2] = local_28;
  }
  local_24 = (float *)(*(int *)(param_1 + 0x5c0) + *(int *)(param_1 + 0x510) * (int)param_2 * 0xc);
  puVar8 = (undefined4 *)
           (*(int *)(param_1 + 0x52c) * (int)param_2 * 0x10 + *(int *)(param_1 + 0x5b4));
  *puVar8 = *local_24;
  puVar8[1] = local_24[1];
  puVar8[2] = local_24[2];
  puVar8[3] = 0;
  local_5c = (float *)(puVar8 + 4);
  local_14 = 0.0;
  local_10 = 0.0;
  local_c = 0.0;
  local_44 = 1;
  param_6 = (FVector *)fVar11;
  do {
    pfVar9 = local_5c;
    if (*(int *)(param_1 + 0x52c) <= local_44) {
      if (local_40 != 0) {
        local_5c[-4] = local_30;
        local_5c[-3] = local_2c;
        local_5c[-2] = local_28;
      }
      ExceptionList = local_70;
      return 1;
    }
    if (((byte)param_1[0x550] & 1) == 0) {
      pfVar6 = (float *)FRangeVector::GetRand((FRangeVector *)(param_1 + 0x514));
      local_14 = *pfVar6;
      local_10 = pfVar6[1];
      local_c = pfVar6[2];
    }
    else {
      fVar12 = appFractional((float)local_44 * local_12c * (*(float *)(param_1 + 0x54c) + 1.0));
      for (local_fc = 0; local_fc < *(int *)(param_1 + 0x540); local_fc = local_fc + 1) {
        iVar4 = local_fc * 0x10 + *(int *)(param_1 + 0x53c);
        if (fVar12 <= *(float *)(iVar4 + 0xc)) {
          puVar8 = (undefined4 *)(local_fc * 0x10 + *(int *)(param_1 + 0x53c));
          local_e0 = *puVar8;
          local_dc = puVar8[1];
          local_d8 = puVar8[2];
          if (local_fc == 0) {
            local_114 = 0x3f800000;
            local_110 = 0x3f800000;
            local_10c = 0x3f800000;
            local_8c = 0x3f800000;
            local_88 = 0x3f800000;
            local_84 = 0x3f800000;
            param_2 = 0.0;
          }
          else {
            local_8c = *(undefined4 *)(iVar4 + -0x10);
            local_88 = *(undefined4 *)(iVar4 + -0xc);
            local_84 = *(undefined4 *)(iVar4 + -8);
            param_2 = *(float *)(iVar4 + -4);
          }
          if ((float)puVar8[3] == 0.0) {
            fVar12 = 1.0;
          }
          else {
            fVar12 = (fVar12 - param_2) / ((float)puVar8[3] - param_2);
          }
          pfVar6 = (float *)FRangeVector::GetRand((FRangeVector *)(param_1 + 0x514));
          pfVar7 = (float *)thunk_FUN_10535750(local_19c,&local_8c,&local_e0,fVar12);
          local_b0 = *pfVar6 * *pfVar7;
          local_ac = pfVar6[1] * pfVar7[1];
          local_a8 = pfVar6[2] * pfVar7[2];
          local_38 = (double)CONCAT44(local_a8,(undefined4)local_38);
          local_14 = local_b0;
          local_10 = local_ac;
          local_c = local_a8;
          break;
        }
      }
    }
    fVar12 = (float)(*(int *)(param_1 + 0x510) + -1) * (float)param_6;
    pfVar6 = (float *)thunk_FUN_103301a0(&local_144,fVar12);
    pfVar7 = (float *)thunk_FUN_103301a0(&local_98,1.0 - fVar12);
    local_80 = *pfVar7 + *pfVar6 + local_14;
    local_7c = local_10 + pfVar6[1] + pfVar7[1];
    local_78 = local_c + pfVar6[2] + pfVar7[2];
    local_38 = (double)CONCAT44(local_78,(undefined4)local_38);
    *pfVar9 = local_80;
    pfVar9[1] = local_7c;
    pfVar9[2] = local_78;
    fVar12 = (float)local_44;
    pfVar9[3] = fVar12 * fVar11;
    if (((((byte)param_1[0x57c] & 1) != 0) && (*(float *)(param_1 + 0x588) < fVar12)) &&
       (fVar12 < *(float *)(param_1 + 0x58c))) {
      fVar12 = FRange::GetRand((FRange *)(param_1 + 0x580));
      local_38 = (double)fVar12;
      fVar12 = appFrand();
      if ((fVar12 < (float)local_38 != (fVar12 == (float)local_38)) &&
         (-1 < *(int *)(param_1 + 0x590))) {
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x420) + 0x3bc) +
                          *(int *)(param_1 + 0x590) * 4);
        if ((*(byte *)(piVar2 + 0x109) & 1) != 0) {
          piVar2[0x108] = *(int *)(param_1 + 0x420);
          FRange::GetRand((FRange *)(param_1 + 0x594));
          iVar4 = FUN_107a6660();
          for (local_58 = 0; local_58 < iVar4; local_58 = local_58 + 1) {
            (**(code **)(*piVar2 + 0x80))(piVar2[0x10e],param_3,0,3);
            if (((byte)param_1[0x59c] & 1) != 0) {
              iVar10 = piVar2[0x10e] * 0xe0 + piVar2[0x10b];
              *(float *)(iVar10 + 0xac) = local_128[0x2b];
              *(float *)(iVar10 + 0xb0) = local_128[0x2c];
            }
            iVar10 = piVar2[0x10e] + 1;
            if (piVar2[0x10e] + 1 <= piVar2[0x10f]) {
              iVar10 = piVar2[0x10f];
            }
            piVar2[0x10f] = iVar10;
            piVar2[0x10e] = piVar2[0x10e] + 1;
            piVar2[0x10e] = piVar2[0x10e] % piVar2[0x123];
          }
        }
      }
    }
    local_5c = pfVar9 + 4;
    param_6 = (FVector *)((float)param_6 + fVar11);
    if (local_64 < (float)param_6 == (local_64 == (float)param_6)) {
      local_44 = local_44 + 1;
    }
    else {
      param_6 = (FVector *)((float)param_6 - local_64);
      local_24 = local_24 + 3;
      local_44 = local_44 + 1;
    }
  } while( true );
}


// ==== 105601d0 FUN_105601d0 depth=0 from=raiz callees=FL2TextAlignParser::GetLineBuffer@10305d3a FL2TextAlignParser::FL2TextAlignParser@10310dde FL2TextAlignParser::~FL2TextAlignParser@10302b8f FL2GameData::GetSymbolTexture@10314506 _memset@107a6860
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_105601d0(int param_1,ushort *param_2,uint *param_3,ulong param_4,uint param_5,int param_6,
            int param_7,int param_8,uint param_9)

{
  ushort uVar1;
  UL2Font *pUVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  ushort *puVar7;
  UTexture *pUVar8;
  UTexture *pUVar9;
  uint local_2bc;
  uint local_2b8;
  longlong lStack_2a8;
  uint local_2a0;
  uint uStack_29c;
  int local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  FL2TextAlignParser aFStack_284 [24];
  int iStack_26c;
  int iStack_268;
  int iStack_264;
  int iStack_244;
  ushort local_20c;
  undefined1 local_20a [510];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1081c10b;
  local_c = ExceptionList;
  if (param_2 == (ushort *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_9 = 0;
  }
  else {
    pUVar2 = *(UL2Font **)(param_1 + 0x13c + param_7 * 4);
    local_2b8 = 0;
    local_2bc = 0;
    local_2a0 = 0;
    local_20c = 0;
    ExceptionList = &local_c;
    _memset(local_20a,0,0x1fe);
    local_298 = 0;
    bVar5 = false;
    if (pUVar2 != (UL2Font *)0x0) {
      iVar6 = (**(code **)(*(int *)pUVar2 + 0x74))(0x41);
      if (iVar6 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      local_2bc = *(uint *)(iVar6 + 0xc);
      uStack_29c = local_2bc;
      FL2TextAlignParser::FL2TextAlignParser
                (aFStack_284,param_2,param_4,pUVar2,param_9,0,1,0,(FRenderInterface *)0x0,0);
      uStack_4 = 0;
      puVar7 = FL2TextAlignParser::GetLineBuffer(aFStack_284,(int *)&lStack_2a8);
      if (puVar7 != (ushort *)0x0) {
LAB_105602c4:
        uVar1 = *puVar7;
        while ((uVar1 != 0 && ((local_2a0 = local_2a0 + 1, param_5 == 0 || (local_2a0 <= param_5))))
              ) {
          puVar7 = puVar7 + 1;
          if ((param_8 == 0) || (uVar1 != 0x60)) {
            if (bVar5) {
              *(ushort *)(local_20a + local_298 * 2 + -2) = uVar1;
              local_298 = local_298 + 1;
              *(undefined2 *)(local_20a + local_298 * 2 + -2) = 0;
            }
            else if (uVar1 == 10) {
              local_2bc = local_2bc + uStack_29c;
              if (param_6 != 0) {
                local_2bc = local_2bc + 6;
              }
              param_9 = 0;
            }
            else {
              if (uVar1 == 0x20) {
                if (iStack_26c < iStack_264) {
                  iVar6 = iStack_26c * 4;
                  iStack_26c = iStack_26c + 1;
                  param_9 = param_9 + *(int *)(iStack_268 + iVar6);
                }
                else {
                  param_9 = param_9 + iStack_244;
                }
                goto LAB_10560475;
              }
              if (0x1f < uVar1) {
                pUVar9 = (UTexture *)(**(code **)(*(int *)pUVar2 + 0x74))(uVar1);
                pUVar8 = pUVar9;
                goto LAB_105603da;
              }
            }
          }
          else if (bVar5) {
            bVar5 = false;
            uStack_294 = 0;
            uStack_28c = 0;
            uStack_290 = 0xc;
            uStack_288 = 0xc;
            pUVar9 = (UTexture *)&uStack_294;
            pUVar8 = FL2GameData::GetSymbolTexture(&GL2GameData,&local_20c);
LAB_105603da:
            if (pUVar8 != (UTexture *)0x0) {
              if (param_4 != 0) {
                fVar3 = (float)(int)param_9;
                if ((int)param_9 < 0) {
                  fVar3 = fVar3 + _DAT_108a1768;
                }
                fVar4 = (float)(int)param_4;
                if ((int)param_4 < 0) {
                  fVar4 = fVar4 + _DAT_108a1768;
                }
                if (fVar4 < fVar3 + (float)*(int *)(pUVar9 + 4)) {
                  local_2bc = local_2bc + uStack_29c;
                  if (param_6 != 0) {
                    local_2bc = local_2bc + 6;
                  }
                  param_9 = 0;
                }
              }
              fVar3 = (float)(int)param_9;
              if ((int)param_9 < 0) {
                fVar3 = fVar3 + _DAT_108a1768;
              }
              lStack_2a8 = (longlong)ROUND(fVar3 + (float)*(int *)(pUVar9 + 4));
              param_9 = (uint)lStack_2a8;
LAB_10560475:
              if (local_2b8 < param_9) {
                local_2b8 = param_9;
              }
            }
          }
          else {
            bVar5 = true;
            local_298 = 0;
          }
          uVar1 = *puVar7;
        }
        puVar7 = FL2TextAlignParser::GetLineBuffer(aFStack_284,(int *)&lStack_2a8);
        if (puVar7 != (ushort *)0x0) {
          if (*puVar7 != 0) {
            local_2bc = local_2bc + uStack_29c;
            if (param_6 != 0) {
              local_2bc = local_2bc + 6;
            }
            param_9 = 0;
          }
          goto LAB_105602c4;
        }
      }
      uStack_4 = 0xffffffff;
      FL2TextAlignParser::~FL2TextAlignParser(aFStack_284);
    }
    *param_3 = local_2b8;
    param_3[1] = local_2bc;
  }
  ExceptionList = local_c;
  return param_9;
}


// ==== 10597290 FUN_10597290 depth=0 from=raiz callees=FUN_1058cce0@1058cce0 FL2ReplayManager::Tick@10308175 UGameEngine::CheckPurgeLevel@10305f42 thunk_FUN_10538650@10312da5 thunk_FUN_103f4120@103118b0 UGameEngine::FadeUpdate@1030385f UGameEngine::AdjustTerrain@1030d58f FL2ResueOrCast::Add@1030f8a8 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000000b4 thunk_FUN_103704b0@10307743 UGameEngine::LoadTeleportMap@10313ce1 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:0000012b CORE.DLL::FName::FName@EXTERNAL:0000004e FNMonsterRaceMgr::Tick@10309b47 thunk_FUN_103ee450@103101ef CORE.DLL::FRotator::FRotator@EXTERNAL:000000bb CORE.DLL::FString::operator==@EXTERNAL:0000016f thunk_FUN_10538890@103103a7 ULevel::GetLevelInfo@1030c491 thunk_FUN_10590bb0@10314821 CORE.DLL::FMemCache::Tick@EXTERNAL:000002dc CORE.DLL::FString::~FString@EXTERNAL:0000002b thunk_FUN_1032bbf0@103143f8 AInspector::eventInspection@103100f0 UGameEngine::ModifyGlobalClippingRange@1030245f UGameEngine::GetSWMapXY@10301efb CORE.DLL::LocalizeError@EXTERNAL:0000019f UGameEngine::TickCommandMacro@1030f579 CORE.DLL::FString::operator!=@EXTERNAL:000002d1 UGameEngine::FinishRemain@103016f4 CORE.DLL::FStringNoInit::operator=@EXTERNAL:000000da thunk_FUN_103f4170@1030c7a2 CORE.DLL::FOutputDevice::Logf2@EXTERNAL:0000016a CORE.DLL::FString::FString@EXTERNAL:00000035 FURL::String@1030fa6f UGameEngine::SetLastDeltaSeconds@1030489a CORE.DLL::appRequestExit@EXTERNAL:00000161 FUN_107a6660@107a6660 CORE.DLL::UObject::StaticTick@EXTERNAL:000002dd UGameEngine::GetAverageDeltaSeconds@10305efc CORE.DLL::appStricmp@EXTERNAL:000000e9 CORE.DLL::FOutputDevice::Logf2@EXTERNAL:0000002e CORE.DLL::FString::operator*@EXTERNAL:00000032 FLandMark::Update@1030dd82 FURL::FURL@10314781 CORE.DLL::L2ParamStack::PushBack@EXTERNAL:00000136 thunk_FUN_1058b580@10303c5b thunk_FUN_103285e0@1030a74a CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:0000012a FNActorResourceLoader::LoadActorResourceArray@1030dd32
// strings: 108c803c=Negative delta time! | 108c800c=All Windows Closed | 108c7fd4=InspectorValues | 108c7f98=RequestEnterWorldPacket | 108c7f48=?RESTART | 108c7f0c=Server switch level: %s | 108c7f48=?RESTART | 108c7ed8=Export travel for: %s | 108a24d0=Engine | 108c71f0=ConnectionFailed | 108a24d0=Engine | 108c7ec4=Pending | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10597290(UGameEngine *param_1,float param_2)

{
  ULevel *this;
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  SEAMLESS_RESULT SVar4;
  float *pfVar5;
  AInspector *this_00;
  int *piVar6;
  ALevelInfo *pAVar7;
  FString *this_01;
  FOutputDevice *extraout_ECX;
  FOutputDevice *pFVar8;
  UGameEngine *this_02;
  FOutputDevice *this_03;
  FOutputDevice *this_04;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  float10 fVar12;
  float fVar13;
  ETravelType EVar14;
  FURL aFStack_114 [20];
  undefined4 uStack_100;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  ushort *puVar15;
  wchar_t *pwVar16;
  void *local_84;
  undefined1 *puStack_80;
  uint local_7c;
  int local_68;
  int local_44;
  undefined1 *local_40;
  int local_3c;
  int local_38;
  undefined8 local_34;
  undefined4 local_28;
  undefined8 local_24;
  L2ParamStack local_1c [4];
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  puStack_80 = &LAB_1081e3ed;
  local_84 = ExceptionList;
  local_7c = 0;
  uVar1 = rdtsc();
  local_40 = (undefined1 *)-(int)uVar1;
  pFVar8 = (FOutputDevice *)param_1;
  ExceptionList = &local_84;
  if (param_2 < 0.0) {
    ExceptionList = &local_84;
    FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
    pFVar8 = extraout_ECX;
  }
  if ((*(int *)(param_1 + 0x54) != 0) && (*(int *)(*(int *)(param_1 + 0x54) + 0x3c) == 0)) {
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(pFVar8,*(ushort **)GLog_exref);
    }
    appRequestExit(0);
    ExceptionList = local_84;
    return;
  }
  if (*(int *)(param_1 + 0x32c) != 0) {
    iVar3 = FUN_107a6660();
    *(int *)(param_1 + 0x334) = *(int *)(param_1 + 0x334) + iVar3;
    if (*(int *)(param_1 + 0x330) <= *(int *)(param_1 + 0x334)) {
      L2ParamStack::L2ParamStack(local_1c,10);
      local_7c = CONCAT31(local_7c._1_3_,1);
      L2ParamStack::PushBack(local_1c,*(void **)(param_1 + 0x330));
      L2ParamStack::PushBack(local_1c,*(void **)(param_1 + 0x334));
      if ((*(int **)(param_1 + 0x60) != (int *)0x0) &&
         (*(int *)(*(int *)(param_1 + 0x68) + 0x38) == 5)) {
        (**(code **)(**(int **)(param_1 + 0x60) + 0x40c))();
      }
      *(undefined4 *)(param_1 + 0x32c) = 0;
      local_7c = local_7c & 0xffffff00;
      L2ParamStack::~L2ParamStack(local_1c);
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    piVar6 = (int *)(DAT_10ddd7e0 + DAT_10dddadc * 4);
    uVar1 = rdtsc();
    *piVar6 = *piVar6 - (int)uVar1;
    (**(code **)(**(int **)(param_1 + 0x60) + 0x68))();
    piVar6 = (int *)(DAT_10ddd7e0 + DAT_10dddadc * 4);
    uVar1 = rdtsc();
    *piVar6 = *piVar6 + (int)uVar1 + -0xc;
  }
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x68))();
  FNActorResourceLoader::LoadActorResourceArray(&GL2ActorResourceLoader,param_2);
  FNMonsterRaceMgr::Tick(&GL2MonsterRaceMgr,param_2);
  if (*(int *)GIsL2NetLogin_exref != 0) {
    UGameEngine::SetLastDeltaSeconds(param_1,param_2);
    fVar13 = UGameEngine::GetAverageDeltaSeconds(this_02);
    UGameEngine::ModifyGlobalClippingRange(param_1,fVar13);
  }
  UGameEngine::FadeUpdate(param_1,param_2);
  iVar3 = *(int *)(**(int **)(*(int *)(param_1 + 0x54) + 0x38) + 0x3c);
  if (iVar3 != 0) {
    if (((*(int **)(param_1 + 0x60) != (int *)0x0) && (*(int *)(iVar3 + 0x3bc) != 0)) &&
       (iVar3 = (**(code **)(**(int **)(param_1 + 0x60) + 0x94))(), iVar3 != 0)) {
      local_c = param_2 * (float)_DAT_10888760;
      FL2ResueOrCast::Add((FL2ResueOrCast *)(iVar3 + 0x1d4),local_c);
      FL2ResueOrCast::Add((FL2ResueOrCast *)(iVar3 + 0x1e0),local_c);
      FL2ResueOrCast::Add((FL2ResueOrCast *)(iVar3 + 0x1ec),local_c);
      FL2ResueOrCast::Add((FL2ResueOrCast *)(iVar3 + 0x1f8),local_c);
    }
    local_7c = CONCAT31(local_7c._1_3_,2);
    if (((*(int *)GIsL2Seamless_exref != 0) && (DAT_10c51050 == 0)) &&
       (*(int *)GIsRequestingExit_exref == 0)) {
      local_24 = (double)CONCAT44(((float)_DAT_10891830 - *(float *)GL2SeamlessMaginotLine_exref) *
                                  (float)_DAT_10854b70 * (float)_DAT_10882e20,(undefined4)local_24);
      iVar3 = *(int *)(**(int **)(*(int *)(param_1 + 0x54) + 0x38) + 0x3c);
      iVar10 = *(int *)(iVar3 + 0x3bc);
      if (iVar10 == 0) {
        if (*(int *)GIsL2NetLogin_exref == 0) {
          fVar13 = *(float *)(iVar3 + 0x1bc);
          local_14 = *(float *)(iVar3 + 0x1c0);
          uVar9 = *(undefined4 *)(iVar3 + 0x1c4);
        }
        else {
          local_14 = DAT_10c51064;
          fVar13 = DAT_10c51060;
          uVar9 = DAT_10c51068;
        }
      }
      else {
        fVar13 = *(float *)(iVar10 + 0x1bc);
        local_14 = *(float *)(iVar10 + 0x1c0);
        uVar9 = *(undefined4 *)(iVar10 + 0x1c4);
      }
      local_18 = fVar13;
      UGameEngine::CheckPurgeLevel(param_1);
      fStack_e8 = local_14;
      uStack_f0 = 0x105975c6;
      fStack_ec = fVar13;
      fStack_e4 = (float)uVar9;
      UGameEngine::GetSWMapXY(param_1);
      while (SVar4 = UGameEngine::AdjustTerrain(param_1), SVar4 == 1) {
        local_8 = ABS(local_18 - DAT_10c596f4);
        if ((local_8 <= local_24._4_4_) &&
           (local_8 = ABS(local_14 - DAT_10c596f8), local_8 <= local_24._4_4_)) break;
        local_8 = (float)FUN_107a6660();
        local_c = (float)FUN_107a6660();
        if (local_8 != 0.0) {
          UGameEngine::LoadTeleportMap(param_1,(int)local_8 + local_34._4_4_,local_3c);
        }
        if (local_c != 0.0) {
          UGameEngine::LoadTeleportMap(param_1,local_34._4_4_,(int)local_c + local_3c);
        }
        if ((local_8 != 0.0) && (local_c != 0.0)) {
          UGameEngine::LoadTeleportMap
                    (param_1,(int)local_8 + local_34._4_4_,(int)local_c + local_3c);
        }
      }
    }
    local_24 = (double)CONCAT44(**(int **)(*(int *)(param_1 + 0x54) + 0x38),(undefined4)local_24);
    if (DAT_10c51058 != 0) {
      if (DAT_10c516cc == 0) {
        if (*(int *)GIsL2NetLogin_exref != 0) {
          fStack_e4 = *(float *)(**(int **)(*(int *)(param_1 + 0x54) + 0x38) + 0x3c);
          fStack_e8 = 4.2887035e-29;
          (**(code **)(**(int **)(param_1 + 0x19c) + 0xa8))();
        }
      }
      else if (DAT_10c516cc == 3) {
        if (*(int *)(param_1 + 0x37c) == 0) {
          if (*(int *)GL2ReplayMode_exref == 0) {
            (**(code **)(*(int *)param_1 + 0x2cc))();
          }
        }
        else {
          DAT_10c516cc = 2;
        }
      }
      else if (7 < DAT_10c516cc) {
        DAT_10c51058 = 0;
        local_38 = 0;
        if (*(int *)(param_1 + 0x35c) != 0) {
          local_28 = 0;
          local_24 = 0.0;
          iVar3 = **(int **)(param_1 + 0x19c);
          pfVar5 = (float *)FRotator::FRotator((FRotator *)&local_18,0,0,0);
          fStack_e8 = *pfVar5;
          fStack_e4 = pfVar5[1];
          uStack_f4 = local_28;
          uStack_f0 = (undefined4)local_24;
          fStack_ec = local_24._4_4_;
          fStack_f8 = local_24._4_4_;
          local_24 = (double)CONCAT44(&fStack_f8,(undefined4)local_24);
          uStack_100 = 0x10597822;
          FName::FName((FName *)&fStack_f8,0);
          uStack_100 = 0x10597833;
          (**(code **)(iVar3 + 0xc0))();
          this_00 = (AInspector *)thunk_FUN_1058b580();
          if (this_00 != (AInspector *)0x0) {
            local_38 = (**(code **)**(undefined4 **)GMalloc_exref)();
            for (iVar3 = 0; local_68 = iVar3, iVar3 < *(int *)(param_1 + 0x354); iVar3 = iVar3 + 1)
            {
              piVar6 = (int *)(iVar3 * 0x10 + *(int *)(param_1 + 0x358));
              iVar10 = AInspector::eventInspection(this_00,*piVar6,piVar6[1],piVar6[2],piVar6[3]);
              *(int *)(local_38 + iVar3 * 4) = iVar10;
            }
          }
        }
        fStack_e4 = 4.288878e-29;
        (**(code **)(**(int **)(param_1 + 0x60) + 0x180))();
        DAT_10c516cc = -1;
        pFVar8 = *(FOutputDevice **)GL2ThreadFilterBackup_exref;
        *(FOutputDevice **)GL2ThreadFilter_exref = pFVar8;
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2(pFVar8,*(ushort **)GLog_exref);
        }
      }
      DAT_10c516cc = DAT_10c516cc + 1;
    }
    if ((*(int *)GIsRunning_exref == 0) || (*(int *)GIsRequestingExit_exref != 0)) {
      UGameEngine::FinishRemain(param_1);
    }
    local_7c = 0;
  }
  iVar3 = *(int *)(param_1 + 0x54);
  if ((((iVar3 == 0) || (iVar10 = 1, *(int *)(iVar3 + 0x3c) != 1)) ||
      (*(int *)(param_1 + 0x19c) == 0)) ||
     (iVar3 = (**(code **)(*(int *)**(undefined4 **)(iVar3 + 0x38) + 0x7c))(), iVar3 != 0)) {
    DAT_10b13f70 = 0;
    iVar10 = DAT_10b13f70;
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x19c) + 0x108))();
    if (iVar3 == 0) {
      piVar6 = (int *)**(int **)(*(int *)(param_1 + 0x54) + 0x38);
      if ((*(byte *)(piVar6 + 0x11) & 2) != 0) goto LAB_105979e6;
      iVar10 = 0;
      if ((DAT_10b13f70 == 0) || (*(int *)(*(int *)(param_1 + 0x54) + 0x44) == 0))
      goto LAB_10597a01;
    }
    else {
LAB_105979e6:
      if (DAT_10b13f70 != 0) goto LAB_10597a01;
      piVar6 = (int *)**(int **)(*(int *)(param_1 + 0x54) + 0x38);
    }
    (**(code **)(*piVar6 + 0xa0))();
  }
LAB_10597a01:
  DAT_10b13f70 = iVar10;
  UObject::StaticTick();
  FMemCache::Tick(&GCache);
  local_7c = CONCAT31(local_7c._1_3_,4);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar1 = rdtsc();
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) - (int)uVar1;
  this = *(ULevel **)(param_1 + 0x19c);
  if (this != (ULevel *)0x0) {
    if (*(int *)(param_1 + 0x54) != 0) {
      local_24 = (double)param_2;
      fVar12 = (float10)thunk_FUN_103704b0();
      if (((float10)local_24 <= (float10)1 / fVar12) || (*(int *)GIsBenchmarking_exref != 0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      pAVar7 = ULevel::GetLevelInfo(this);
      pAVar7 = pAVar7 + 0x55c;
      *(uint *)pAVar7 = *(uint *)pAVar7 ^ (*(uint *)pAVar7 ^ uVar11) & 1;
      local_34 = (double)param_2;
      local_24 = (double)CONCAT44(*(float *)(*(int *)(param_1 + 0x54) + 0xa8) - (float)_DAT_10891850
                                  ,(undefined4)local_24);
      fVar12 = (float10)thunk_FUN_103704b0();
      if (((float10)local_34 <= (float10)1 / fVar12) || (*(int *)GIsBenchmarking_exref != 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(param_1 + 0x19c));
      pAVar7 = pAVar7 + 0x55c;
      *(uint *)pAVar7 = *(uint *)pAVar7 ^ (iVar3 * 2 ^ *(uint *)pAVar7) & 2;
      fVar13 = (float)*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4);
      if (*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4) < 0) {
        fVar13 = fVar13 + (float)_DAT_10888818;
      }
      fVar13 = fVar13 * (float)*(double *)GSecondsPerCycleQPF_exref;
      local_34 = (double)CONCAT44(fVar13,(undefined4)local_34);
      if (*(float *)(param_1 + 0x254) == 0.0) {
        *(float *)(param_1 + 0x254) = param_2;
      }
      else {
        if (*(float *)(param_1 + 0x254) != 0.0) {
          fVar13 = *(float *)(param_1 + 0x254) * (float)_DAT_108c7f60 +
                   fVar13 * (float)_DAT_108c7f70;
        }
        *(float *)(param_1 + 0x254) = fVar13;
      }
      *(float *)(param_1 + 600) = param_2;
    }
    (**(code **)(**(int **)(param_1 + 0x19c) + 0x70))();
  }
  piVar6 = *(int **)(param_1 + 0x1a0);
  if ((piVar6 != (int *)0x0) && (piVar6 != *(int **)(param_1 + 0x19c))) {
    (**(code **)(*piVar6 + 0x70))();
  }
  if (((*(int *)GL2SharedSky_exref != 0) &&
      (piVar6 = *(int **)(param_1 + 0x1a4), piVar6 != (int *)0x0)) &&
     (piVar6 != *(int **)(param_1 + 0x19c))) {
    (**(code **)(*piVar6 + 0x70))();
  }
  iVar3 = *(int *)(param_1 + 0x54);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x3c) != 0)) &&
     (*(int *)(*(int *)(**(int **)(iVar3 + 0x38) + 0x3c) + 0xe4) != *(int *)(param_1 + 0x19c))) {
    (**(code **)(**(int **)(*(int *)(**(int **)(iVar3 + 0x38) + 0x3c) + 0xe4) + 0x70))();
  }
  uVar1 = rdtsc();
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + (int)uVar1 + -0xc;
  local_7c._0_1_ = 6;
  local_7c._1_3_ = 0;
  if (*(ULevel **)(param_1 + 0x19c) != (ULevel *)0x0) {
    puVar15 = (ushort *)&DAT_10853d94;
    pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(param_1 + 0x19c));
    iVar3 = FString::operator!=((FString *)(pAVar7 + 0x628),puVar15);
    if (iVar3 != 0) {
      pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(param_1 + 0x19c));
      fVar13 = *(float *)(pAVar7 + 0x638) - param_2;
      local_24 = (double)CONCAT44(fVar13,(undefined4)local_24);
      *(float *)(pAVar7 + 0x638) = fVar13;
      if (fVar13 <= 0.0) {
        thunk_FUN_103f4170();
        local_7c = CONCAT31(local_7c._1_3_,7);
        pwVar16 = L"?RESTART";
        pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(param_1 + 0x19c));
        iVar3 = FString::operator==((FString *)(pAVar7 + 0x628),(ushort *)pwVar16);
        if (iVar3 == 0) {
          pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(param_1 + 0x19c));
          if (((byte)pAVar7[0x634] & 1) != 0) {
            thunk_FUN_103ee450();
            for (iVar3 = 0; local_44 = iVar3, iVar3 < *(int *)(*(int *)(param_1 + 0x19c) + 0x3c);
                iVar3 = iVar3 + 1) {
              iVar10 = thunk_FUN_103285e0();
              if (((iVar10 != 0) && (*(int *)(iVar10 + 0x560) != 0)) &&
                 (*(int *)(iVar10 + 0x3bc) != 0)) {
                thunk_FUN_10538650();
                local_7c = CONCAT31(local_7c._1_3_,8);
                FUN_1058cce0();
                for (iVar3 = *(int *)(*(int *)(iVar10 + 0x3bc) + 300); iVar3 != 0;
                    iVar3 = *(int *)(iVar3 + 300)) {
                  FUN_1058cce0();
                }
                FString::operator*((FString *)&local_28);
                FString::operator*((FString *)(*(int *)(iVar10 + 0x4f4) + 0x3d8));
                thunk_FUN_10590bb0();
                iVar3 = thunk_FUN_1032bbf0();
                if (iVar3 != 0) {
                  puVar15 = (ushort *)&DAT_10853d94;
                  iVar3 = thunk_FUN_1032bbf0();
                  FStringNoInit::operator=((FStringNoInit *)(iVar3 + 0x134),puVar15);
                }
                local_7c = CONCAT31(local_7c._1_3_,7);
                thunk_FUN_10538890();
                iVar3 = local_44;
              }
            }
          }
        }
        else {
          thunk_FUN_103ee450();
        }
        if (*(int *)GLog_exref != 0) {
          pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(param_1 + 0x19c));
          FString::operator*((FString *)(pAVar7 + 0x628));
          FOutputDevice::Logf2
                    (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
        }
        FString::FString((FString *)&local_18);
        local_7c._0_1_ = 9;
        EVar14 = 2;
        pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(param_1 + 0x19c));
        puVar15 = FString::operator*((FString *)(pAVar7 + 0x628));
        FURL::FURL(aFStack_114,(FURL *)(param_1 + 0x1ac),puVar15,EVar14);
        local_7c._0_1_ = 9;
        (**(code **)(*(int *)param_1 + 200))();
        puVar15 = (ushort *)&DAT_10853d94;
        pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(param_1 + 0x19c));
        FStringNoInit::operator=((FStringNoInit *)(pAVar7 + 0x628),puVar15);
        local_7c._0_1_ = 7;
        FString::~FString((FString *)&local_18);
        local_7c = CONCAT31(local_7c._1_3_,6);
        goto LAB_10597da8;
      }
    }
  }
  local_7c._0_1_ = 0xc;
  local_7c._1_3_ = 0;
  iVar3 = *(int *)(param_1 + 0x54);
  if (((iVar3 == 0) || (*(int *)(iVar3 + 0x3c) == 0)) ||
     (iVar3 = FString::operator!=((FString *)(**(int **)(iVar3 + 0x38) + 0x134),
                                  (ushort *)&DAT_10853d94), iVar3 == 0)) {
    local_7c._0_1_ = 0x12;
    local_7c._1_3_ = 0;
    if (*(int **)(param_1 + 0x1a8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1a8) + 0x68))();
      iVar3 = FString::operator!=((FString *)(*(int *)(param_1 + 0x1a8) + 0xd0),
                                  (ushort *)&DAT_10853d94);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x1a8);
        if (((*(int *)(iVar3 + 0xc0) != 0) && (*(int *)(iVar3 + 0xcc) == 0)) &&
           (*(int *)(iVar3 + 0xc4) == 0)) {
          FString::FString((FString *)&local_18);
          local_7c = CONCAT31(local_7c._1_3_,0x17);
          (**(code **)(*(int *)param_1 + 0xcc))();
          iVar3 = FString::operator!=((FString *)&local_18,(ushort *)&DAT_10853d94);
          if (iVar3 == 0) {
            if (*(int *)(*(int *)(param_1 + 0x1a8) + 200) == 0) {
              UGameEngine::AuthorizeClient(param_1,*(ULevel **)(param_1 + 0x19c));
              pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(param_1 + 0x19c));
              pAVar7[0x5cc] = (ALevelInfo)0x3;
              pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(param_1 + 0x1a0));
              pAVar7[0x5cc] = (ALevelInfo)0x3;
              if (*(int **)(param_1 + 0x54) != (int *)0x0) {
                (**(code **)(**(int **)(param_1 + 0x54) + 0x80))();
              }
              (**(code **)(**(int **)(param_1 + 0x1a8) + 0x70))();
              *(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x70) = 0;
              *(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0xbc) = 0;
            }
          }
          else {
            iVar3 = *(int *)param_1;
            FString::operator*((FString *)&local_18);
            LocalizeError((ushort *)L"ConnectionFailed",(ushort *)L"Engine",(ushort *)0x0);
            (**(code **)(iVar3 + 0xac))();
          }
          local_7c = 0x19;
          if (*(int **)(param_1 + 0x1a8) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x1a8) + 0xc))();
          }
          *(undefined4 *)(param_1 + 0x1a8) = 0;
          local_7c = 0x12;
          FString::~FString((FString *)&local_18);
        }
      }
      else {
        local_7c._0_1_ = 0x13;
        iVar3 = *(int *)param_1;
        FString::operator*((FString *)(*(int *)(param_1 + 0x1a8) + 0xd0));
        LocalizeError((ushort *)L"ConnectionFailed",(ushort *)L"Engine",(ushort *)0x0);
        (**(code **)(iVar3 + 0xac))();
        if (*(int *)GLog_exref != 0) {
          this_01 = (FString *)
                    FURL::String((FURL *)(*(int *)(param_1 + 0x1a8) + 0x78),(int)&local_18);
          local_7c._0_1_ = 0x14;
          FString::operator*((FString *)(*(int *)(param_1 + 0x1a8) + 0xd0));
          FString::operator*(this_01);
          fStack_e4 = 4.2895524e-29;
          LocalizeError((ushort *)L"Pending",(ushort *)L"Engine",(ushort *)0x0);
          fStack_e4 = 4.2895597e-29;
          FOutputDevice::Logf2(this_04,*(EName *)GLog_exref,(ushort *)0x2f8);
          local_7c._0_1_ = 0x13;
          FString::~FString((FString *)&local_18);
        }
        if (*(int **)(param_1 + 0x1a8) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x1a8) + 0xc))();
        }
        *(undefined4 *)(param_1 + 0x1a8) = 0;
      }
    }
    local_7c = 0x1c;
    iVar3 = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      uVar1 = rdtsc();
      (**(code **)(**(int **)(param_1 + 0x54) + 0x80))();
      uVar2 = rdtsc();
      iVar3 = (-0xc - (int)uVar1) + (int)uVar2;
    }
    *(int *)(param_1 + 0xc4) = iVar3;
    local_7c = 0;
    uVar1 = rdtsc();
    *(undefined1 **)(param_1 + 0xbc) = local_40 + (int)uVar1 + -0xc;
    uVar11 = *(uint *)GTicks_exref;
    *(int *)GTicks_exref = *(int *)GTicks_exref + 1;
    *(uint *)(GTicks_exref + 4) = *(int *)(GTicks_exref + 4) + (uint)(0xfffffffe < uVar11);
    if (*(int *)(*(int *)(param_1 + 0x6c) + 0x144) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x168) = 0;
    }
    if ((*(int *)GIsL2Console_exref != 0) && (*(int **)(param_1 + 0x68) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1 + 0x68) + 0x68))();
    }
    if ((*(int *)GL2UseReplayManager_exref != 0) &&
       (*(FL2ReplayManager **)(param_1 + 0x198) != (FL2ReplayManager *)0x0)) {
      FL2ReplayManager::Tick(*(FL2ReplayManager **)(param_1 + 0x198),param_2);
    }
    UGameEngine::TickCommandMacro(param_1,param_2);
    if (*(FLandMark **)(param_1 + 0x2fc) == (FLandMark *)0x0) {
      ExceptionList = local_84;
      return;
    }
    FLandMark::Update(*(FLandMark **)(param_1 + 0x2fc),param_2);
    ExceptionList = local_84;
    return;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x54) + 0x38);
  thunk_FUN_103f4170();
  local_7c = CONCAT31(local_7c._1_3_,0xd);
  pwVar16 = L"?RESTART";
  puVar15 = FString::operator*((FString *)(iVar3 + 0x134));
  iVar10 = appStricmp(puVar15,(ushort *)pwVar16);
  if (iVar10 == 0) {
    thunk_FUN_103ee450();
  }
  else if (*(int *)(iVar3 + 0x140) != 0) {
    if (*(int *)GLog_exref != 0) {
      FString::operator*((FString *)(*(int *)(*(int *)(iVar3 + 0x3c) + 0x4f4) + 0x3d8));
      FOutputDevice::Logf2(this_03,*(ushort **)GLog_exref);
    }
    thunk_FUN_10538650();
    local_7c = CONCAT31(local_7c._1_3_,0xe);
    FUN_1058cce0();
    for (iVar10 = *(int *)(*(int *)(*(int *)(iVar3 + 0x3c) + 0x3bc) + 300); iVar10 != 0;
        iVar10 = *(int *)(iVar10 + 300)) {
      FUN_1058cce0();
    }
    FString::operator*((FString *)&local_28);
    FString::operator*((FString *)(*(int *)(*(int *)(iVar3 + 0x3c) + 0x4f4) + 0x3d8));
    thunk_FUN_10590bb0();
    local_7c = CONCAT31(local_7c._1_3_,0xd);
    thunk_FUN_10538890();
  }
  FString::FString((FString *)&local_18);
  local_7c._0_1_ = 0xf;
  local_40 = aFStack_114;
  EVar14 = *(ETravelType *)(iVar3 + 0x130);
  puVar15 = FString::operator*((FString *)(iVar3 + 0x134));
  FURL::FURL(aFStack_114,(FURL *)(param_1 + 0x1ac),puVar15,EVar14);
  local_7c._0_1_ = 0xf;
  (**(code **)(*(int *)param_1 + 200))();
  FStringNoInit::operator=((FStringNoInit *)(iVar3 + 0x134),(ushort *)&DAT_10853d94);
  local_7c._0_1_ = 0xd;
  FString::~FString((FString *)&local_18);
  local_7c = CONCAT31(local_7c._1_3_,0xc);
LAB_10597da8:
  thunk_FUN_103f4120();
  ExceptionList = local_84;
  return;
}


// ==== 1059f0b0 FUN_1059f0b0 depth=0 from=raiz callees=ULevel::GetTerrainInfo@103027c0 thunk_FUN_10373830@10304bb0 UGameEngine::GetSWMapXY@10301efb thunk_FUN_103737b0@1030c3c4 UGameEngine::CheckPurgeLevel@10305f42 thunk_FUN_10598d90@10315343 CORE.DLL::FOutputDevice::Logf2@EXTERNAL:0000002e CORE.DLL::FArray::Empty@EXTERNAL:000000a6 thunk_FUN_1059bd20@103109f6 thunk_FUN_1059a760@1030a9ca UGameEngine::AdjustTerrain@1030d58f thunk_FUN_104419f0@103048d6 UGameEngine::FinishRemain@103016f4 UGameEngine::AttachLevel@10309232 AActor::GetCylinderExtent@1030a2b3 UGameEngine::LoadTeleportMap@10313ce1 FUN_107a6660@107a6660
// strings: 108c9478=Teleport from %02d_%02d to %02d_%02d  | 108a0884=Couldn't find landing place | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1059f0b0(UGameEngine *param_1,AActor *param_2,float param_3,FOutputDevice *param_4,float param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  ATerrainInfo *pAVar1;
  ATerrainInfo *pAVar2;
  int iVar3;
  int iVar4;
  SEAMLESS_RESULT SVar5;
  undefined4 *puVar6;
  int iVar7;
  float fVar8;
  float10 fVar9;
  float fVar10;
  FOutputDevice *pFVar11;
  float *pfVar12;
  undefined1 local_ac [8];
  float local_a4;
  FOutputDevice *local_a0;
  float local_9c;
  float local_88;
  undefined1 *local_74;
  void *pvStack_70;
  undefined1 *puStack_6c;
  undefined4 local_68;
  int local_5c;
  undefined1 local_54 [4];
  FOutputDevice *local_50 [2];
  float local_48;
  FOutputDevice *local_44;
  float local_40;
  int local_38;
  float local_34;
  FOutputDevice *local_30;
  float local_2c;
  float local_28;
  FOutputDevice *local_24;
  float local_20;
  int local_1c;
  ULevel *local_18;
  float local_14;
  int local_10;
  int local_c;
  float local_8;
  
  puStack_6c = &LAB_1081e650;
  pvStack_70 = ExceptionList;
  local_74 = &stack0xffffff48;
  local_68 = 0;
  ExceptionList = &pvStack_70;
  UGameEngine::GetSWMapXY
            (param_1,*(undefined4 *)(param_2 + 0x1bc),*(undefined4 *)(param_2 + 0x1c0),
             *(undefined4 *)(param_2 + 0x1c4),local_54,local_50);
  UGameEngine::GetSWMapXY(param_1,param_3,param_4,param_5,&local_c,&local_10);
  local_14 = **(float **)(*(int *)(param_1 + 0x54) + 0x38);
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(local_50[0],*(ushort **)GLog_exref);
  }
  fVar9 = (float10)thunk_FUN_10373830(param_2 + 0x1bc,&param_3);
  if ((float10)_DAT_108c9474 < fVar9) {
    UGameEngine::FinishRemain(param_1);
    (**(code **)(*(int *)param_1 + 0x74))(1);
    for (local_5c = 0; local_5c < *(int *)(*(int *)(param_1 + 0x19c) + 0x68);
        local_5c = local_5c + 1) {
    }
    FArray::Empty((FArray *)(*(int *)(param_1 + 0x19c) + 100),4,0);
    thunk_FUN_1059bd20();
    while ((int)local_20 < *(int *)(GObjObjects_exref + 4)) {
      iVar3 = *(int *)(*(int *)GObjObjects_exref + (int)local_20 * 4);
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x2cc) != 0)) &&
         (*(int *)(iVar3 + 0xe4) != *(int *)(iVar3 + 0x2cc))) {
        *(undefined4 *)(iVar3 + 0x2cc) = 0;
        *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
      }
      thunk_FUN_103737b0();
    }
  }
  UGameEngine::LoadTeleportMap(param_1,local_c,local_10);
  local_18 = (ULevel *)thunk_FUN_10598d90(local_c,local_10);
  if (local_18 != (ULevel *)0x0) {
    local_68 = CONCAT31((int3)((uint)local_68 >> 8),2);
    pAVar1 = ULevel::GetTerrainInfo(local_18);
    pAVar2 = ULevel::GetTerrainInfo(*(ULevel **)(param_1 + 0x19c));
    if ((pAVar1 != (ATerrainInfo *)0x0) && (pAVar2 != (ATerrainInfo *)0x0)) {
      thunk_FUN_1059a760(pAVar2,pAVar1);
      DAT_10c596f4 = *(float *)(pAVar1 + 0x1bc);
      DAT_10c596f8 = *(float *)(pAVar1 + 0x1c0);
      _DAT_10c59700 = DAT_10c596f4;
      _DAT_10c59704 = DAT_10c596f8;
      *(undefined4 *)(pAVar2 + 0x215c) = *(undefined4 *)(pAVar1 + 0x222c);
      *(undefined4 *)(pAVar2 + 0x2160) = *(undefined4 *)(pAVar1 + 0x2230);
      *(undefined4 *)(pAVar2 + 0x2164) = *(undefined4 *)(pAVar1 + 0x2234);
      DAT_10c516dc = 0;
      DAT_10c556e0 = 0;
      *(ULevel **)(param_2 + 0x2cc) = local_18;
      local_34 = param_3;
      local_30 = param_4;
      local_2c = param_5;
      local_20 = ((float)_DAT_10891830 - *(float *)GL2SeamlessMaginotLine_exref) *
                 (float)_DAT_10854b70 * (float)_DAT_10882e20;
      iVar3 = FUN_107a6660();
      iVar4 = FUN_107a6660();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar7 = iVar3;
        if (iVar3 < 0) {
          iVar7 = -iVar3;
        }
        iVar3 = iVar3 / iVar7;
      }
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar7 = iVar4;
        if (iVar4 < 0) {
          iVar7 = -iVar4;
        }
        iVar4 = iVar4 / iVar7;
      }
      if (iVar3 != 0) {
        UGameEngine::LoadTeleportMap(param_1,iVar3 + local_c,local_10);
      }
      if (iVar4 != 0) {
        UGameEngine::LoadTeleportMap(param_1,local_c,iVar4 + local_10);
      }
      pFVar11 = local_30;
      fVar8 = local_34;
      if ((iVar3 != 0) && (iVar4 != 0)) {
        UGameEngine::LoadTeleportMap(param_1,iVar3 + local_c,iVar4 + local_10);
        pFVar11 = local_30;
        fVar8 = local_34;
      }
      do {
        SVar5 = UGameEngine::AdjustTerrain(param_1,fVar8,pFVar11,local_2c);
        if (SVar5 != 1) break;
        local_8 = ABS(local_34 - DAT_10c596f4);
      } while ((local_20 < local_8) ||
              (local_8 = ABS((float)local_30 - DAT_10c596f8), local_20 < local_8));
    }
    local_68 = 1;
    UGameEngine::AttachLevel(param_1,*(ULevel **)(param_1 + 0x19c),local_18,(FVector *)&param_3);
    fVar8 = param_5;
    fVar10 = param_3;
    pFVar11 = param_4;
    if ((*(int *)(param_1 + 0x31c) == 0) &&
       ((*(uint *)(*(int *)((int)local_14 + 0x3c) + 0x564) & 0x40000) == 0)) {
      thunk_FUN_104419f0(0x3f800000,0);
      local_28 = param_3;
      local_24 = param_4;
      local_20 = param_5;
      local_48 = param_3;
      local_44 = param_4;
      local_40 = param_5;
      for (local_1c = 0; local_1c < 0x1e; local_1c = local_1c + 1) {
        local_20 = local_20 + (float)_DAT_1089d2f0;
        local_40 = local_40 - (float)_DAT_1089d2f0;
        iVar3 = **(int **)(param_1 + 0x19c);
        pfVar12 = &local_34;
        puVar6 = (undefined4 *)AActor::GetCylinderExtent(param_2);
        (**(code **)(iVar3 + 0xe4))
                  (local_ac,param_2,&local_48,&local_28,0x86,*puVar6,puVar6[1],puVar6[2],pfVar12);
        if (local_9c != 0.0) {
          local_14 = local_88 * (float)_DAT_10891488;
          fVar8 = local_9c;
          fVar10 = local_a4;
          pFVar11 = local_a0;
          if (local_14 < (float)_DAT_10891478) {
            local_9c = ((float)_DAT_10891468 - local_14) + local_9c;
            fVar8 = local_9c;
            fVar10 = local_a4;
            pFVar11 = local_a0;
          }
          goto LAB_1059f59a;
        }
      }
      local_a4 = param_3;
      local_a0 = param_4;
      local_9c = param_5;
      fVar8 = param_5;
      fVar10 = param_3;
      pFVar11 = param_4;
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(param_4,*(ushort **)GLog_exref);
        fVar8 = local_9c;
        fVar10 = local_a4;
        pFVar11 = local_a0;
      }
    }
LAB_1059f59a:
    (**(code **)(**(int **)(param_1 + 0x19c) + 0xa8))
              (param_2,fVar10,pFVar11,fVar8,param_6,param_7,param_8);
    (**(code **)(*(int *)param_2 + 0x1c0))();
    UGameEngine::CheckPurgeLevel
              (param_1,*(undefined4 *)(param_2 + 0x1bc),*(undefined4 *)(param_2 + 0x1c0),
               *(undefined4 *)(param_2 + 0x1c4),1);
  }
  local_68 = 0;
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x19c) + 0x74) + 0x6c);
  *(float *)(iVar3 + 0x164) = *(float *)(iVar3 + 0x164) - (float)_DAT_10888760;
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x19c) + 0x74) + 0x18c);
  for (local_38 = 0; local_38 < *(int *)(iVar3 + 0x3c); local_38 = local_38 + 1) {
  }
  FArray::Empty((FArray *)(iVar3 + 0x38),4,0);
  thunk_FUN_10443020();
  ExceptionList = pvStack_70;
  return;
}


// ==== 105b5676 Catch@105b5676 depth=0 from=raiz callees=ULevel::GetTerrainInfo@103027c0 UGameEngine::GetSWMapXY@10301efb APlayerController::eventClientMessage@10312049 UL2NEnvManager::ChangeEnv@10303229 thunk_FUN_1040b560@10314e0c AActor::IsBlockedBy@10308bde ATerrainInfo::ClearDecorations@1030924b UGameEngine::StartCommandMacro@10301e47 thunk_FUN_1059a760@1030a9ca thunk_FUN_104419f0@103048d6 ULevel::GetLevelInfo@1030c491 thunk_FUN_104bc470@10303850 thunk_FUN_103301a0@10309831 UGameEngine::OnSpawnPc@10308512
// strings: 108cb0f8=UInput::Exec::C_Teleport | 108cb0e4=C_RMODE | 108cb0d0=GEODATA | 108cb0b8=SEAMLESS | 108cb0a8=MAPLOC | 108cb080=MapX=%d MapY=%d | 108cb058=MapX=%d, MapY=%d | 108cb034=SHOWBORDERLINE | 108cb018=SHOWSECTORS | 108cb000=LINECHECK | 108cafe0=CacheTexture | 108cafd0=Upper= | 108caf84=Texture Cache Upper Limit = %f | 108caf74=Lower= | 108caf28=Texture Cache Lower Limit = %f | 108caf14=Period= | 108caec8=Texture Cache Exist Period = %f | 108c09f4=RenderDeco | 108caeb4=Arrow | 108cae9c=RadarTime | 108cae8c=MapBug | 108cae7c=Batch | 108cae6c=File= | 108cae5c=SkipGC | 108cae3c=ChangeServer | 108c28a8=Thread | 108c0120=L2ThreadFilter | 108cae1c=Filter= | 108cade8=Thread Loading is %s | 108cadd8=CLIENT | 108cadb8=SHOWLOADLINE | 108cad94=CAMERAWALKING | 108cb304=MODE= | 108cad60=INCCAMERAWALKINGACCEL | 108ca034=OnRelease | 108cad50=RATE= | 108cad1c=DECCAMERAWALKINGACCEL | 108ca034=OnRelease | 108cacec=MODMAXAIRSPEEDSTART | 108ca034=OnRelease | 108ca9a0=SPEED= | 108cacb8=MODMAXAIRSPEEDFINISH | 108ca034=OnRelease | 108cac78=CAMERAMODESELECTINGCANCEL | 108cac60=ChangeEnv | 108cac54=Env= | 108cb6a0=Dur= | 108cac44=Peak= | 108cac34=Last= | 108cac28=FISH | 108c2608=START | 108cac14=FISHID= | 108cac00=BRIGHT= | 108cabf0=EVENT= | 108cabe0=COMBAT | 108cb880=TIME= | 108cabc4=GUTS= | 108cb93c=LEVEL= | 108cabb4=FAKE= | 108caba4=REGEN | 108cb880=TIME= | 108cabc4=GUTS= | 108cab90=EFFECT= | 108cab80=SKILL= | 108cab68=PENALTY= | 108cabb4=FAKE= | 108cab5c=RANK | 108cab40=GPUSkinning | 108cab24=SpawnPC | 108a482c=Num= | 108cab0c=SETALPHA | 108caafc=ALPHA= | 108caadc=SPAWNEMITTER | 108caacc=NAME= | 108caa9c=wh_magic_barrier_ta | 108caa78=LineageEffect. | 1085d6f8=%s%s | 108caa50=VARIATIONEFFECT | 108caa38=OPT1= | 108caa28=OPT2= | 108caa10=ENCHANT= | 

void Catch_105b5676(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::Exec::C_Teleport");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d5420 FUN_105d5420 depth=0 from=raiz callees=UGameEngine::GetSWMapXY@10301efb CORE.DLL::FString::FString@EXTERNAL:0000009c CORE.DLL::UObject::SetFlags@EXTERNAL:0000016c CORE.DLL::appPow@EXTERNAL:000001d3 CORE.DLL::appStrcpy@EXTERNAL:0000012c CORE.DLL::FRotator::Vector@EXTERNAL:00000184 APlayerController::Tick@10310d89 FStaticTexture::GetRawTextureData@10304782 AController::MoveTo@10308ef4 ALineagePlayerController::UpdateShakeState@10312b2a ALevelInfo::L2GetAirVolume@10313d95 CORE.DLL::FString::operator!=@EXTERNAL:000002d1 CORE.DLL::FString::FString@EXTERNAL:000000cc CORE.DLL::FStringNoInit::operator=@EXTERNAL:000000da CORE.DLL::FName::operator*@EXTERNAL:00000156 thunk_FUN_103704b0@10307743 CORE.DLL::FName::operator!=@EXTERNAL:00000168 FL2GameData::GetZoneNameTexture@1030ea02 FUN_107a6660@107a6660 CORE.DLL::FName::FName@EXTERNAL:0000004e CORE.DLL::UObject::StaticLoadClass@EXTERNAL:0000013a thunk_FUN_105d2bd0@1030db93 CORE.DLL::FVector::operator==@EXTERNAL:00000186 FL2GameData::GetMusicName@1030848b CORE.DLL::FRotator::FRotator@EXTERNAL:000000bb thunk_FUN_1040b560@10314e0c ALineagePlayerController::SpecialViewTick@10301bf9 UGameEngine::IsLimitContentForYoungUsers@103103c5 FL2GameData::GetZoneNameInfo@103087a6 CORE.DLL::UObject::GetStateFrame@EXTERNAL:00000179 AAirEmitter::eventSetAirVolume@1030f385 CORE.DLL::FVector::RotateAngleAxis@EXTERNAL:00000143 CORE.DLL::FString::operator*@EXTERNAL:00000032 FStaticTexture::FStaticTexture@10313ae3 FStaticTexture::~FStaticTexture@10312d2d CORE.DLL::appStrcmp@EXTERNAL:00000160 CORE.DLL::appStrfind@EXTERNAL:00000345 ALevelInfo::L2GetMusicVolume@103146d2 thunk_FUN_103301a0@10309831 CORE.DLL::FVector::Size@EXTERNAL:00000132 CORE.DLL::appFailAssert@EXTERNAL:00000026
// strings: 108d12c8=.\UnLevTic.cpp | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_105d5420(APlayerController *param_1,UClass *param_2,undefined4 *param_3)

{
  FString *this;
  undefined4 *puVar1;
  byte bVar2;
  undefined3 uVar3;
  undefined3 uVar4;
  int iVar5;
  float *pfVar6;
  FRotator *pFVar7;
  FStateFrame *pFVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  undefined4 uVar12;
  AMusicVolume *pAVar13;
  void *pvVar14;
  FZoneNameInfo *pFVar15;
  ushort *puVar16;
  AAirVolume *pAVar17;
  UObject *this_00;
  int *piVar18;
  undefined2 in_FPUControlWord;
  float10 fVar19;
  float fVar20;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  ulong uVar21;
  UPackageMap *pUVar22;
  ushort local_30c [290];
  float local_c8;
  UTexture *local_c4;
  float local_c0;
  float local_b8;
  UTexture *local_b4;
  float local_b0;
  undefined4 local_a0;
  undefined4 local_98;
  int local_88;
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  FStaticTexture local_70 [8];
  undefined1 *local_68;
  float local_64;
  UTexture *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  float local_40;
  UTexture *local_3c;
  float local_38;
  float local_34;
  UTexture *local_30;
  float local_2c;
  int local_28 [2];
  undefined1 *local_20;
  float local_1c;
  UTexture *local_18;
  float local_14;
  UTexture *local_10;
  float local_c;
  undefined1 *local_8;
  
  puStack_7c = &LAB_10820480;
  local_80 = ExceptionList;
  local_84 = &stack0xfffffce8;
  local_78 = 0;
  ExceptionList = &local_80;
  APlayerController::Tick(param_1,(float)param_2,(ELevelTick)param_3);
  local_78 = CONCAT31(local_78._1_3_,1);
  ALineagePlayerController::UpdateShakeState((ALineagePlayerController *)param_1,(float)param_2);
  ALineagePlayerController::SpecialViewTick((ALineagePlayerController *)param_1,(float)param_2);
  local_78 = 3;
  if (((*(int *)GIsL2NetLogin_exref != 0) && (*(int *)(param_1 + 0x3bc) != 0)) &&
     (fVar20 = FVector::Size((FVector *)(*(int *)(param_1 + 0x3bc) + 0x1d4)),
     fVar20 != _DAT_1085222c)) {
    iVar5 = FVector::operator==((FVector *)(*(int *)(param_1 + 0x3bc) + 0x1d4),
                                (FVector *)(*(int *)(param_1 + 0x3bc) + 0x1d4));
    if (iVar5 == 0) {
      appFailAssert("Pawn->Velocity==Pawn->Velocity",".\\UnLevTic.cpp",0x652);
    }
    param_3 = (undefined4 *)(*(float *)(param_1 + 0xa00) - (float)param_2);
    *(undefined4 **)(param_1 + 0xa00) = param_3;
    if ((float)param_3 <= 0.0) {
      *(float *)(param_1 + 0xa00) = (float)param_3 + (float)_DAT_108a4120;
      if ((*(byte *)(*(int *)(param_1 + 0x3bc) + 0x6ac) & 1) == 0) {
        (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x60) + 0x128))();
      }
      else {
        iVar5 = thunk_FUN_1040b560();
        if (iVar5 != 0) {
          iVar9 = *(int *)(param_1 + 0x3bc);
          local_1c = *(float *)(iVar9 + 0x1bc) - *(float *)(iVar5 + 0x1bc);
          local_18 = (UTexture *)(*(float *)(iVar9 + 0x1c0) - *(float *)(iVar5 + 0x1c0));
          local_14 = *(float *)(iVar9 + 0x1c4) - *(float *)(iVar5 + 0x1c4);
          local_5c = 0;
          local_58 = 0;
          local_54 = 0x3f800000;
          pfVar6 = (float *)FVector::RotateAngleAxis
                                      ((FVector *)&local_1c,(int)&local_68,
                                       (FVector *)-(*(uint *)(iVar5 + 0x1cc) & 0xffff));
          local_1c = *pfVar6;
          local_18 = (UTexture *)pfVar6[1];
          local_14 = pfVar6[2];
          (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x60) + 0x128))();
        }
      }
    }
  }
  local_78 = 5;
  if ((((byte)param_1[0xa18] & 1) != 0) && (iVar5 = *(int *)(param_1 + 0x3bc), iVar5 != 0)) {
    if ((*(byte *)(iVar5 + 0x6dc) & 2) == 0) {
      pFVar7 = (FRotator *)FRotator::FRotator((FRotator *)&local_5c,0,*(int *)(param_1 + 0xa1c),0);
      FRotator::Vector(pFVar7);
      param_3 = (undefined4 *)(*(float *)(iVar5 + 0x1550) * (float)_DAT_10891850);
      pfVar6 = (float *)thunk_FUN_103301a0();
      param_3 = (undefined4 *)(*pfVar6 + *(float *)(iVar5 + 0x1bc));
      local_c4 = (UTexture *)(pfVar6[1] + *(float *)(iVar5 + 0x1c0));
      local_c0 = pfVar6[2] + *(float *)(iVar5 + 0x1c4);
      local_c8 = (float)param_3;
      local_10 = local_c4;
      local_c = local_c0;
    }
    else {
      pFVar7 = (FRotator *)FRotator::FRotator((FRotator *)&local_5c,0,*(int *)(param_1 + 0xa1c),0);
      FRotator::Vector(pFVar7);
      param_3 = (undefined4 *)(*(float *)(iVar5 + 0x1550) * (float)_DAT_10891850);
      pfVar6 = (float *)thunk_FUN_103301a0();
      param_3 = (undefined4 *)(*(float *)(iVar5 + 0x1bc) + *pfVar6);
      local_b4 = (UTexture *)(*(float *)(iVar5 + 0x1c0) + pfVar6[1]);
      local_b0 = *(float *)(iVar5 + 0x1c4) + pfVar6[2];
      *(uint *)(iVar5 + 0x6dc) = *(uint *)(iVar5 + 0x6dc) & 0xfffffffd;
      local_b8 = (float)param_3;
      local_10 = local_b4;
      local_c = local_b0;
    }
    local_1c = (float)param_3;
    local_18 = local_10;
    local_14 = local_c;
    if (*(int *)GIsL2NetLogin_exref == 0) {
      AController::MoveTo((AController *)param_1);
    }
    else {
      pFVar8 = UObject::GetStateFrame((UObject *)param_1);
      if (*(int *)(pFVar8 + 0x28) == 0) {
        piVar18 = *(int **)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x60);
      }
      else {
        param_3 = (undefined4 *)(*(float *)(param_1 + 0xa20) + (float)param_2);
        *(undefined4 **)(param_1 + 0xa20) = param_3;
        if ((float)param_3 <= _DAT_10884cf0) goto code_r0x105d585a;
        *(float *)(param_1 + 0xa20) = (float)param_3 - (float)_DAT_1085b788;
        piVar18 = *(int **)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x60);
      }
      (**(code **)(*piVar18 + 0xe4))();
    }
  }
code_r0x105d585a:
  local_78 = 7;
  if ((((byte)param_1[0xa08] & 3) != 0) && (iVar5 = *(int *)(param_1 + 0x3bc), iVar5 != 0)) {
    if ((*(byte *)(iVar5 + 0x6dc) & 2) == 0) {
      iVar5 = *(int *)(param_1 + 0x3bc);
      pFVar7 = (FRotator *)FRotator::FRotator((FRotator *)&local_5c,0,*(int *)(param_1 + 0xa0c),0);
      FRotator::Vector(pFVar7);
      param_3 = (undefined4 *)(*(float *)(iVar5 + 0x1550) * (float)_DAT_10891850);
      pfVar6 = (float *)thunk_FUN_103301a0();
      param_3 = (undefined4 *)(*pfVar6 + *(float *)(iVar5 + 0x1bc));
      local_3c = (UTexture *)(pfVar6[1] + *(float *)(iVar5 + 0x1c0));
      local_38 = pfVar6[2] + *(float *)(iVar5 + 0x1c4);
      local_40 = (float)param_3;
      local_10 = local_3c;
      local_c = local_38;
      if (*(int *)GIsL2NetLogin_exref == 0) {
        AController::MoveTo((AController *)param_1);
      }
      else {
        pFVar8 = UObject::GetStateFrame((UObject *)param_1);
        if (*(int *)(pFVar8 + 0x28) == 0) {
          (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x60) + 0xe4))();
        }
        else {
          param_3 = (undefined4 *)(*(float *)(param_1 + 0xa14) + (float)param_2);
          *(undefined4 **)(param_1 + 0xa14) = param_3;
          if (_DAT_108822fc < (float)param_3) {
            *(float *)(param_1 + 0xa14) = (float)param_3 - (float)_DAT_10853b28;
            (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x60) + 0xe4))();
          }
        }
      }
    }
    else {
      *(float *)(param_1 + 0x98c) =
           *(float *)(param_1 + 0x98c) +
           (float)*(int *)(iVar5 + 0x6e0) * (float)param_2 * (float)*(int *)(iVar5 + 0x314);
      *(undefined4 *)(iVar5 + 0x32c) = *(undefined4 *)(iVar5 + 0x1c8);
      *(undefined4 *)(iVar5 + 0x330) = *(undefined4 *)(iVar5 + 0x1cc);
      *(undefined4 *)(iVar5 + 0x334) = *(undefined4 *)(iVar5 + 0x1d0);
      if (((byte)param_1[0xa24] & 1) == 0) {
        iVar5 = *(int *)(param_1 + 0x3bc);
        uVar12 = FUN_107a6660();
        *(undefined4 *)(iVar5 + 0x330) = uVar12;
        *(undefined4 *)(param_1 + 0xa0c) = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0x330);
      }
      else {
        while (*(int *)(param_1 + 0xa0c) - *(int *)(*(int *)(param_1 + 0x3bc) + 0x1cc) < -0x7fff) {
          *(int *)(param_1 + 0xa0c) = *(int *)(param_1 + 0xa0c) + 0x10000;
        }
        while (0x8000 < *(int *)(param_1 + 0xa0c) - *(int *)(*(int *)(param_1 + 0x3bc) + 0x1cc)) {
          *(int *)(param_1 + 0xa0c) = *(int *)(param_1 + 0xa0c) + -0x10000;
        }
        iVar5 = *(int *)(param_1 + 0xa0c);
        iVar9 = *(int *)(*(int *)(param_1 + 0x3bc) + 0x1cc);
        if ((iVar5 + -100 < iVar9) && (iVar9 < iVar5 + 100)) {
          *(uint *)(param_1 + 0xa24) = *(uint *)(param_1 + 0xa24) & 0xfffffffe;
        }
        *(int *)(*(int *)(param_1 + 0x3bc) + 0x330) = iVar5;
      }
      iVar5 = *(int *)(param_1 + 0x3bc);
      pFVar7 = (FRotator *)FRotator::FRotator((FRotator *)&local_5c,0,*(int *)(iVar5 + 0x330),0);
      FRotator::Vector(pFVar7);
      param_3 = (undefined4 *)(*(float *)(iVar5 + 0x1550) * (float)_DAT_10891850);
      pfVar6 = (float *)thunk_FUN_103301a0();
      param_3 = (undefined4 *)(*pfVar6 + *(float *)(iVar5 + 0x1bc));
      local_30 = (UTexture *)(pfVar6[1] + *(float *)(iVar5 + 0x1c0));
      local_2c = pfVar6[2] + *(float *)(iVar5 + 0x1c4);
      local_34 = (float)param_3;
      local_10 = local_30;
      local_c = local_2c;
      if (*(int *)GIsL2NetLogin_exref == 0) {
        AController::MoveTo((AController *)param_1);
      }
      else {
        pFVar8 = UObject::GetStateFrame((UObject *)param_1);
        if (*(int *)(pFVar8 + 0x28) == 0) {
          (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x60) + 0xe4))();
        }
        else {
          param_3 = (undefined4 *)(*(float *)(param_1 + 0xa14) + (float)param_2);
          *(undefined4 **)(param_1 + 0xa14) = param_3;
          if ((float)_DAT_108a01b0 < (float)param_3) {
            *(float *)(param_1 + 0xa14) = (float)param_3 - (float)_DAT_108a01b0;
            (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x60) + 0xe4))();
          }
        }
      }
    }
  }
  local_78 = 9;
  if (*(int *)(param_1 + 0x3bc) != 0) {
    *(undefined4 *)(DAT_10ddd810 + DAT_10dddb80 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0x1bc);
    *(undefined4 *)(DAT_10ddd810 + DAT_10dddb84 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0x1c0);
    *(undefined4 *)(DAT_10ddd810 + DAT_10dddb88 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0x1c4);
    *(undefined4 *)(DAT_10ddd810 + DAT_10dddb94 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0x1550);
    iVar5 = (**(code **)(*(int *)param_1 + 0x35c))();
    if (iVar5 == 0) {
      *(undefined4 *)(DAT_10ddd810 + DAT_10dddbb0 * 4) = 0;
      *(undefined4 *)(DAT_10ddd810 + DAT_10dddbb4 * 4) = 0;
      *(undefined4 *)(DAT_10ddd810 + DAT_10dddbb8 * 4) = 0;
    }
    else {
      puVar1 = (undefined4 *)(DAT_10ddd810 + DAT_10dddbb0 * 4);
      iVar5 = (**(code **)(*(int *)param_1 + 0x35c))();
      *puVar1 = *(undefined4 *)(iVar5 + 0x1bc);
      puVar1 = (undefined4 *)(DAT_10ddd810 + DAT_10dddbb4 * 4);
      iVar5 = (**(code **)(*(int *)param_1 + 0x35c))();
      *puVar1 = *(undefined4 *)(iVar5 + 0x1c0);
      puVar1 = (undefined4 *)(DAT_10ddd810 + DAT_10dddbb8 * 4);
      iVar5 = (**(code **)(*(int *)param_1 + 0x35c))();
      *puVar1 = *(undefined4 *)(iVar5 + 0x1c4);
    }
    if (*(int *)GIsEditor_exref == 0) {
      UGameEngine::GetSWMapXY(*(UGameEngine **)(*(int *)(param_1 + 0xe4) + 0x74));
      *(undefined4 **)(DAT_10ddd7e0 + DAT_10dddb8c * 4) = param_3;
      *(UTexture **)(DAT_10ddd7e0 + DAT_10dddb90 * 4) = local_10;
    }
  }
  local_78 = 0;
  piVar18 = *(int **)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x58);
  param_3 = (undefined4 *)0x0;
  if ((*(int *)(param_1 + 0x3bc) != 0) &&
     (((*(byte *)(*(int *)(param_1 + 0x3bc) + 0x6ac) & 1) == 0 ||
      (param_3 = (undefined4 *)0x1, ((byte)param_1[0xa64] & 1) == 0)))) {
    param_3 = (undefined4 *)0x0;
  }
  if ((((piVar18 != (int *)0x0) && (iVar5 = (**(code **)(*piVar18 + 0xc4))(), iVar5 != 0)) &&
      (iVar5 = (**(code **)(*piVar18 + 0xb8))(), iVar5 != 0)) && (0 < *(int *)(param_1 + 0xa5c))) {
    (**(code **)(*piVar18 + 0x98))();
  }
  local_78 = CONCAT31(local_78._1_3_,0xb);
  if ((*(int *)(param_1 + 0xa68) != 0) && (piVar18 != (int *)0x0)) {
    local_c = (float)(**(code **)(*piVar18 + 0xbc))();
    iVar5 = (**(code **)(*piVar18 + 0xc0))();
    local_10 = (UTexture *)(**(code **)(*piVar18 + 0xb8))();
    if ((*(int *)(param_1 + 0xa68) == 1) &&
       ((iVar5 != 0 || local_c != 0.0 && (0 < *(int *)(param_1 + 0xa60))))) {
LAB_105d5f9e:
      (**(code **)(*piVar18 + 0xd4))();
      *(undefined4 *)(param_1 + 0xa60) = 0xffffffff;
    }
    else if (*(int *)(param_1 + 0xa68) == 2) {
      if (((iVar5 != 0) && (local_c == 0.0)) && (0 < *(int *)(param_1 + 0xa60))) goto LAB_105d5f9e;
      if (local_c != 0.0) {
        *(undefined4 *)(param_1 + 0xa70) = 0;
        *(undefined4 *)(param_1 + 0xa68) = 0;
        FStringNoInit::operator=((FStringNoInit *)(param_1 + 0xa84),(ushort *)&DAT_10853d94);
      }
    }
    if (*(float *)(param_1 + 0xa70) <= 0.0) {
      this = (FString *)(param_1 + 0xa84);
      iVar5 = FString::operator!=(this,(ushort *)&DAT_10853d94);
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0xa70) = 0;
        if (*(int *)(param_1 + 0xa68) == 1) {
          local_20 = &stack0xfffffcd0;
          FString::FString((FString *)&stack0xfffffcd0,this);
          local_78 = CONCAT31((int3)((uint)local_78 >> 8),0xb);
          uVar12 = (**(code **)(*piVar18 + 0xdc))();
          *(undefined4 *)(param_1 + 0xa60) = uVar12;
        }
        else if (*(int *)(param_1 + 0xa68) == 2) {
          local_20 = &stack0xfffffcd0;
          FString::FString((FString *)&stack0xfffffcd0,this);
          local_78 = CONCAT31((int3)((uint)local_78 >> 8),0xb);
          uVar12 = (**(code **)(*piVar18 + 0xdc))();
          *(undefined4 *)(param_1 + 0xa60) = uVar12;
        }
        *(undefined4 *)(param_1 + 0xa68) = 0;
        if (0 < *(int *)(param_1 + 0xa60)) {
          if ((local_10 != (UTexture *)0x0) && (0 < *(int *)(param_1 + 0xa5c))) {
            (**(code **)(*piVar18 + 0x98))();
          }
          *(uint *)(param_1 + 0xa74) = *(uint *)(param_1 + 0xa74) | 1;
        }
      }
    }
    else {
      *(float *)(param_1 + 0xa70) = *(float *)(param_1 + 0xa70) - (float)param_2;
    }
  }
  local_78 = 0xf;
  if ((((byte)param_1[0xa64] & 2) != 0) && (piVar18 != (int *)0x0)) {
    iVar5 = (**(code **)(*piVar18 + 0xc0))();
    iVar9 = (**(code **)(*piVar18 + 0xbc))();
    iVar10 = (**(code **)(*piVar18 + 0xb8))();
    if ((iVar10 != 0) && (0 < *(int *)(param_1 + 0xa5c))) {
      (**(code **)(*piVar18 + 0xd4))();
      *(undefined4 *)(param_1 + 0xa5c) = 0xffffffff;
    }
    if (*(float *)(param_1 + 0xa6c) <= 0.0) {
      *(undefined4 *)(param_1 + 0xa6c) = 0;
      if ((iVar5 == 0 && iVar9 == 0) || (*(int *)(param_1 + 0xa60) < 1)) {
        local_20 = &stack0xfffffcc8;
        FString::FString((FString *)&stack0xfffffcc8,(FString *)(param_1 + 0xa78));
      }
      else {
        local_20 = &stack0xfffffcc8;
        FString::FString((FString *)&stack0xfffffcc8,(FString *)(param_1 + 0xa78));
      }
      local_78 = CONCAT31((int3)((uint)local_78 >> 8),0xf);
      iVar5 = (**(code **)(*piVar18 + 0xd0))();
      *(int *)(param_1 + 0xa5c) = iVar5;
      *(uint *)(param_1 + 0xa64) = *(uint *)(param_1 + 0xa64) & 0xfffffffd;
      if (0 < iVar5) {
        *(uint *)(param_1 + 0xa74) = *(uint *)(param_1 + 0xa74) | 1;
      }
    }
    else {
      *(float *)(param_1 + 0xa6c) = *(float *)(param_1 + 0xa6c) - (float)param_2;
    }
  }
  local_78._0_1_ = 0x13;
  local_78._1_3_ = 0;
  if ((((*(int *)(param_1 + 0x3bc) != 0) && (piVar18 != (int *)0x0)) &&
      (((byte)param_1[0xa74] & 1) == 0)) && (param_3 != (undefined4 *)0x0)) {
    iVar5 = (**(code **)(*piVar18 + 0xb8))();
    if ((iVar5 == 0) &&
       (puVar11 = FL2GameData::GetMusicName(&GL2GameData,0), puVar11 != (ushort *)0x0)) {
      local_20 = &stack0xfffffcc8;
      FString::FString((FString *)&stack0xfffffcc8,puVar11);
      local_78 = CONCAT31(local_78._1_3_,0x13);
      uVar12 = (**(code **)(*piVar18 + 0xd0))();
      *(undefined4 *)(param_1 + 0xa5c) = uVar12;
    }
    if ((*(uint *)(param_1 + 0xa50) & 1) == 0) {
      *(uint *)(param_1 + 0xa50) = *(uint *)(param_1 + 0xa50) | 1;
    }
  }
  local_78._1_3_ = 0;
  uVar4 = local_78._1_3_;
  local_78._0_1_ = 0x16;
  local_78._1_3_ = 0;
  uVar3 = uVar4;
  if (((*(int *)(param_1 + 0x3bc) == 0) || (uVar3 = local_78._1_3_, piVar18 == (int *)0x0)) ||
     (param_3 != (undefined4 *)0x0)) {
LAB_105d65ca:
    local_78._1_3_ = uVar3;
    uVar4 = local_78._1_3_;
    if (((byte)param_1[0xa74] & 1) != 0) goto LAB_105d65d3;
  }
  else {
    if (((byte)param_1[0xa74] & 1) == 0) {
      param_3 = (undefined4 *)(**(code **)(*piVar18 + 0xb8))();
      if (DAT_10c51044 == (UGameEngine *)0x0) {
        local_c = _DAT_108acd14;
        local_10 = _DAT_1089fb1c;
      }
      else {
        local_c = *(float *)(DAT_10c51044 + 0x338);
        local_10 = *(UTexture **)(DAT_10c51044 + 0x33c);
      }
      pAVar13 = ALevelInfo::L2GetMusicVolume(*(ALevelInfo **)(*(int *)(param_1 + 0x3bc) + 0xe0));
      if (param_3 == (undefined4 *)0x0) {
        if (((pAVar13 == (AMusicVolume *)0x0) || (((byte)pAVar13[0x438] & 2) == 0)) ||
           ((*(uint *)(param_1 + 0xa50) & 1) != 0)) {
          if ((*(uint *)(param_1 + 0xa50) & 1) == 0) {
            local_8 = (undefined1 *)(*(float *)(param_1 + 0xa54) + (float)param_2);
            *(undefined1 **)(param_1 + 0xa54) = local_8;
            if (local_c < (float)local_8 != (local_c == (float)local_8)) {
              *(uint *)(param_1 + 0xa50) = *(uint *)(param_1 + 0xa50) | 1;
              goto LAB_105d63cc;
            }
          }
        }
        else {
          *(uint *)(param_1 + 0xa50) = *(uint *)(param_1 + 0xa50) | 1;
LAB_105d63cc:
          *(undefined4 *)(param_1 + 0xa54) = 0;
        }
      }
      if (pAVar13 != (AMusicVolume *)0x0) {
        if (pAVar13 == *(AMusicVolume **)(param_1 + 0xa4c)) {
          if (((((byte)param_1[0xa50] & 1) != 0) && (param_3 == (undefined4 *)0x0)) &&
             (puVar11 = FL2GameData::GetMusicName(&GL2GameData,*(int *)(pAVar13 + 0x434)),
             puVar11 != (ushort *)0x0)) {
            local_20 = &stack0xfffffcc8;
            FString::FString((FString *)&stack0xfffffcc8,puVar11);
            goto LAB_105d64a0;
          }
        }
        else {
          if ((param_3 != (undefined4 *)0x0) && (0 < *(int *)(param_1 + 0xa5c))) {
            (**(code **)(*piVar18 + 0xd4))();
            *(undefined4 *)(param_1 + 0xa5c) = 0xffffffff;
          }
          puVar11 = FL2GameData::GetMusicName(&GL2GameData,*(int *)(pAVar13 + 0x434));
          if (puVar11 != (ushort *)0x0) {
            local_20 = &stack0xfffffcc8;
            FString::FString((FString *)&stack0xfffffcc8,puVar11);
LAB_105d64a0:
            local_78._0_1_ = 0x16;
            uVar12 = (**(code **)(*piVar18 + 0xd0))();
            *(undefined4 *)(param_1 + 0xa5c) = uVar12;
            *(uint *)(param_1 + 0xa50) = *(uint *)(param_1 + 0xa50) & 0xfffffffe;
          }
        }
      }
      *(AMusicVolume **)(param_1 + 0xa4c) = pAVar13;
      uVar3 = local_78._1_3_;
      if (pAVar13 == (AMusicVolume *)0x0) {
        if (param_3 == (undefined4 *)0x0) {
          param_3 = (undefined4 *)(*(float *)(param_1 + 0xa58) + (float)param_2);
          *(undefined4 **)(param_1 + 0xa58) = param_3;
          if ((float)local_10 < (float)param_3 != ((float)local_10 == (float)param_3)) {
            *(undefined4 *)(param_1 + 0xa58) = 0;
            param_3 = (undefined4 *)FUN_107a6660();
            iVar5 = FUN_107a6660();
            appPow(_DAT_1089de78,_DAT_1085b788);
            iVar9 = FUN_107a6660();
            puVar11 = FL2GameData::GetMusicName(&GL2GameData,iVar9 + iVar5);
            uVar3 = local_78._1_3_;
            if (puVar11 != (ushort *)0x0) {
              param_3 = (undefined4 *)&stack0xfffffcc8;
              FString::FString((FString *)&stack0xfffffcc8,puVar11);
              local_78._0_1_ = 0x16;
              uVar12 = (**(code **)(*piVar18 + 0xd0))();
              *(undefined4 *)(param_1 + 0xa5c) = uVar12;
              *(uint *)(param_1 + 0xa50) = *(uint *)(param_1 + 0xa50) & 0xfffffffe;
              uVar3 = local_78._1_3_;
            }
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xa58) = 0;
      }
      goto LAB_105d65ca;
    }
LAB_105d65d3:
    local_78._1_3_ = uVar4;
    iVar5 = (**(code **)(*piVar18 + 0xb8))();
    if (iVar5 == 0) {
      *(uint *)(param_1 + 0xa74) = *(uint *)(param_1 + 0xa74) & 0xfffffffe;
    }
  }
  local_78 = 0x1b;
  iVar5 = *(int *)(param_1 + 0x3bc);
  if (iVar5 != 0) {
    iVar10 = 6000;
    local_98 = 6000;
    iVar9 = 3000;
    local_a0 = 3000;
    local_28[0] = CONCAT31(local_28[0]._1_3_,0xff);
    param_3 = (undefined4 *)(*(float *)(param_1 + 0x1bc) - *(float *)(iVar5 + 0x1bc));
    local_64 = *(float *)(param_1 + 0x1c0) - *(float *)(iVar5 + 0x1c0);
    local_60 = (UTexture *)(*(float *)(param_1 + 0x1c4) - *(float *)(iVar5 + 0x1c4));
    local_68 = (undefined1 *)param_3;
    local_10 = local_60;
    local_8 = (undefined1 *)local_64;
    local_c = FVector::Size((FVector *)&local_68);
    if ((*(int *)GLanguageType_exref == 4) ||
       ((DAT_10c51044 != (UGameEngine *)0x0 &&
        (iVar5 = UGameEngine::IsLimitContentForYoungUsers(DAT_10c51044), iVar5 != 0)))) {
      iVar10 = 2000;
      local_98 = 2000;
      iVar9 = 500;
      local_a0 = 500;
    }
    if (((float)_DAT_108d15e8 <= local_c) || ((int)*(uint *)(param_1 + 0x1c8) <= iVar9)) {
      (**(code **)(**(int **)(param_1 + 0x3bc) + 0x128))();
      iVar5 = *(int *)(param_1 + 0x3bc);
      iVar9 = *(int *)(iVar5 + 0x718);
    }
    else {
      param_3 = (undefined4 *)
                (((float)(int)(iVar10 - (*(uint *)(param_1 + 0x1c8) & 0xffff)) *
                 (float)_DAT_10853b38) / (float)(iVar10 - iVar9));
      fVar19 = (float10)thunk_FUN_103704b0();
      local_8 = (undefined1 *)(int)ROUND(fVar19);
      bVar2 = (byte)local_8;
      param_3 = (undefined4 *)
                (((local_c - (float)_DAT_1089de78) * (float)_DAT_10853b38) / (float)_DAT_1089f9a8);
      fVar19 = (float10)thunk_FUN_103704b0();
      param_3 = (undefined4 *)CONCAT22(in_FPUControlWord,param_3._0_2_);
      local_8 = (undefined1 *)(int)ROUND(fVar19);
      local_28[0] = CONCAT31((int3)((uint)local_28[0] >> 8),bVar2);
      if ((float)_DAT_108a7828 < local_c) {
        param_3 = (undefined4 *)
                  (((local_c - (float)_DAT_108a7828) * (float)_DAT_10853b38) / (float)_DAT_108a59d0)
        ;
        fVar19 = (float10)thunk_FUN_103704b0();
        param_3 = (undefined4 *)CONCAT22(in_FPUControlWord,param_3._0_2_);
        local_8 = (undefined1 *)(int)ROUND(fVar19);
        if (bVar2 < (byte)local_8) {
          local_28[0] = CONCAT31(local_28[0]._1_3_,(byte)local_8);
        }
      }
      (**(code **)(**(int **)(param_1 + 0x3bc) + 0x128))();
      iVar5 = *(int *)(param_1 + 0x3bc);
      iVar9 = *(int *)(iVar5 + 0x718);
    }
    if (iVar9 != 0) {
      (**(code **)(**(int **)(iVar5 + 0x718) + 0x128))();
    }
  }
  local_78._0_1_ = 0x1d;
  local_78._1_3_ = 0;
  if (*(int *)GIsEditor_exref != 0) goto code_r0x105d6b8a;
  _DAT_10c6a5c4 = (float)param_2 + _DAT_10c6a5c4;
  _DAT_10c6a5c0 = (float)param_2 + _DAT_10c6a5c0;
  if (DAT_10c6a5bc != 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0xe4) + 0x74);
    appStrcpy(local_30c,(ushort *)DAT_10c6a5bc);
    local_28[1] = 0;
    local_20 = (undefined1 *)0x0;
    for (iVar9 = 0; local_88 = iVar9, iVar9 < 2; iVar9 = iVar9 + 1) {
      if (iVar9 == 0) {
        puVar11 = local_30c;
      }
      else {
        puVar11 = (ushort *)local_28[iVar9];
        if (puVar11 == (ushort *)0x0) break;
      }
      puVar11 = appStrfind(puVar11,(ushort *)&DAT_108d15e0);
      if (puVar11 != (ushort *)0x0) {
        local_28[iVar9 + 1] = (int)&DAT_108d15de;
      }
    }
    if (*(int *)(iVar5 + 0x68) != 0) {
      (**(code **)(**(int **)(iVar5 + 0x68) + 0x674))();
      (**(code **)(**(int **)(iVar5 + 0x68) + 0x504))();
    }
    DAT_10c6a5bc = 0;
    _DAT_10c6a5b8 = 0xffffffff;
    _DAT_10c6a5b4 = 0xffffffff;
    _DAT_10c6a5b0 = 0xffffffff;
    _DAT_10c6a5ac = 0xffffffff;
    _DAT_10c6a5a8 = 0xffffffff;
    _DAT_10c6a5a4 = 0xffffffff;
    _DAT_10c6a5a0 = 0;
    _DAT_10c6a59c = (ushort *)0x0;
  }
  if (_DAT_10c6a5c4 <= _DAT_10884cf0) goto code_r0x105d6b8a;
  _DAT_10c6a5c4 = 0.0;
  iVar5 = **(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x54) + 0x38);
  iVar9 = *(int *)(*(int *)(iVar5 + 0x3c) + 0x3bc);
  if (iVar9 == 0) goto code_r0x105d6b8a;
  UGameEngine::GetSWMapXY();
  local_10 = FL2GameData::GetZoneNameTexture(&GL2GameData,(int)param_3,(int)param_2);
  if ((((local_10 == (UTexture *)0x0) || (*(int *)(iVar5 + 0x164) == 0)) ||
      (*(int *)(*(int *)(iVar5 + 0x7c) + 0x5c) != 0)) || (*(int *)(iVar5 + 0x168) == 0))
  goto code_r0x105d6b8a;
  local_8 = (undefined1 *)((int)param_3 + -0x14);
  local_44 = FUN_107a6660();
  local_8 = (undefined1 *)((int)param_2 + -0x12);
  local_8 = (undefined1 *)FUN_107a6660();
  local_c = *(float *)(local_10 + 0x580);
  local_20 = *(undefined1 **)(local_10 + 0x584);
  local_44 = FUN_107a6660();
  iVar5 = FUN_107a6660();
  FStaticTexture::FStaticTexture(local_70,local_10);
  local_78 = CONCAT31(local_78._1_3_,0x1e);
  pvVar14 = FStaticTexture::GetRawTextureData(local_70,0);
  pFVar15 = FL2GameData::GetZoneNameInfo
                      (&GL2GameData,(uint)*(byte *)((int)pvVar14 + local_44 + iVar5 * (int)local_c),
                       (int)param_3,(int)param_2,*(float *)(iVar9 + 0x1c4));
  pvVar14 = ALineagePlayerController::m_pPrevZoneNameInfo;
  if (((pFVar15 != (FZoneNameInfo *)0x0) &&
      (ALineagePlayerController::m_pPrevZoneNameInfo != pFVar15)) && (_DAT_1089183c < _DAT_10c6a5c0)
     ) {
    if (ALineagePlayerController::m_pPrevZoneNameInfo == (void *)0x0) {
LAB_105d6b12:
      DAT_10c6a5bc = (int)FString::operator*((FString *)(pFVar15 + 0x18));
      _DAT_10c6a5b8 = *(undefined4 *)(pFVar15 + 0x24);
      _DAT_10c6a5b4 = *(undefined4 *)(pFVar15 + 0x28);
      _DAT_10c6a5b0 = *(undefined4 *)(pFVar15 + 0x2c);
      _DAT_10c6a5ac = *(undefined4 *)(pFVar15 + 0x30);
      _DAT_10c6a5a8 = *(undefined4 *)(pFVar15 + 0x34);
      _DAT_10c6a5a4 = *(undefined4 *)(pFVar15 + 0x38);
      _DAT_10c6a5a0 = FUN_107a6660();
      _DAT_10c6a59c = FString::operator*((FString *)(pFVar15 + 0x40));
    }
    else {
      puVar11 = FString::operator*((FString *)(pFVar15 + 0x18));
      puVar16 = FString::operator*((FString *)((int)pvVar14 + 0x18));
      iVar5 = appStrcmp(puVar16,puVar11);
      if (iVar5 != 0) goto LAB_105d6b12;
    }
    _DAT_10c6a5c0 = 0.0;
    ALineagePlayerController::m_pPrevZoneNameInfo = pFVar15;
  }
  local_78 = CONCAT31(local_78._1_3_,0x1d);
  FStaticTexture::~FStaticTexture(local_70);
code_r0x105d6b8a:
  local_78 = 0x20;
  pAVar17 = ALevelInfo::L2GetAirVolume(*(ALevelInfo **)(param_1 + 0xe0));
  if (*(AAirEmitter **)(param_1 + 0xa9c) != (AAirEmitter *)0x0) {
    AAirEmitter::eventSetAirVolume(*(AAirEmitter **)(param_1 + 0xa9c),pAVar17);
  }
  if ((*(int *)GL2RenderDeco_exref != 0) && (pAVar17 != (AAirVolume *)0x0)) {
    FName::FName((FName *)&param_2,0);
    iVar5 = FName::operator!=((FName *)(pAVar17 + 0x434),(FName *)&param_2);
    if ((iVar5 != 0) && (*(int *)(param_1 + 0xa9c) == 0)) {
      pUVar22 = (UPackageMap *)0x0;
      uVar21 = 0x2000;
      puVar16 = (ushort *)0x0;
      puVar11 = FName::operator*((FName *)(pAVar17 + 0x434));
      uStack_348 = 0x105d6c3d;
      param_2 = UObject::StaticLoadClass
                          (&AActor::PrivateStaticClass,(UObject *)0x0,puVar11,puVar16,uVar21,pUVar22
                          );
      if (param_2 != (UClass *)0x0) {
        iVar5 = **(int **)(param_1 + 0xe4);
        uStack_34c = *(undefined4 *)(param_1 + 0x1c8);
        uStack_348 = *(undefined4 *)(param_1 + 0x1cc);
        uStack_358 = *(undefined4 *)(param_1 + 0x1bc);
        uStack_35c = *(undefined4 *)(param_1 + 0x1c0);
        uStack_350 = *(undefined4 *)(param_1 + 0x1c4);
        param_3 = &uStack_35c;
        uStack_354 = uStack_35c;
        FName::FName((FName *)&uStack_35c,0);
        uVar12 = (**(code **)(iVar5 + 0xc0))(param_2);
        this_00 = (UObject *)thunk_FUN_105d2bd0(uVar12);
        *(UObject **)(param_1 + 0xa9c) = this_00;
        if (this_00 != (UObject *)0x0) {
          UObject::SetFlags(this_00,0x4000000);
          if ((*(byte *)(*(int **)(param_1 + 0xa9c) + 0x137) & 1) == 0) {
            local_50 = 0;
            local_4c = 0;
            local_48 = 0x3f800000;
            (**(code **)(**(int **)(param_1 + 0xa9c) + 0x16c))(param_1,0,0,0x3f800000,1);
          }
        }
      }
    }
  }
  ExceptionList = local_80;
  return 1;
}


// ==== 105db7a0 FUN_105db7a0 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000004e CORE.DLL::UObject::StaticLoadClass@EXTERNAL:0000013a CORE.DLL::FVector::Normalize@EXTERNAL:000001bb AActor::Tick@103073b5 AL2Float::GetCurAnimName@1030f312 thunk_FUN_104419f0@103048d6 thunk_FUN_104b4240@103029aa thunk_FUN_104bc470@10303850 AEmitter::SetSpeedScale@10313ca0 CORE.DLL::FVector::Rotation@EXTERNAL:00000147 AEmitter::SetSizeScale@10304c23
// strings: 108d1d38=LineageEffect.e_u075_w | 108d1d38=LineageEffect.e_u075_w | 108d1ce0=LineageEffect.etc_fish_gura_skill | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_105db7a0(AActor *param_1,float param_2,ELevelTick param_3)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  UClass *pUVar5;
  AEmitter *this;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float local_b4;
  float local_b0;
  float local_ac;
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  float local_6c;
  undefined1 *local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 *local_40;
  float local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  AEmitter *local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined1 *local_8;
  
  puStack_74 = &LAB_10820570;
  local_78 = ExceptionList;
  local_70 = 0;
  ExceptionList = &local_78;
  local_38 = AActor::Tick(param_1,param_2,param_3);
  if ((*(int *)(param_1 + 0x104) != 0) && (*(int *)(param_1 + 0x3f0) != 0)) {
    piVar3 = (int *)thunk_FUN_104b4240();
    if (piVar3 == (int *)0x0) {
      iVar4 = *(int *)(param_1 + 0x3f0);
      *(undefined4 *)(iVar4 + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
      *(undefined4 *)(iVar4 + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
      *(undefined4 *)(iVar4 + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
    }
    else {
      (**(code **)(*piVar3 + 0x150))();
      (**(code **)(*piVar3 + 0x150))();
      local_5c = local_24 - local_44;
      local_58 = local_20 - (float)local_40;
      local_54 = local_1c - local_3c;
      local_50 = local_5c;
      local_4c = local_58;
      local_48 = local_54;
      local_18 = local_58;
      local_8 = (undefined1 *)local_54;
      FVector::Normalize((FVector *)&local_50);
      fVar1 = (float)_DAT_10853b28;
      local_34 = local_50 * fVar1 + local_24;
      local_30 = local_20 + local_4c * fVar1;
      local_2c = local_1c + fVar1 * local_48;
      iVar4 = *(int *)(param_1 + 0x3f0);
      *(float *)(iVar4 + 0x1bc) = local_34;
      *(float *)(iVar4 + 0x1c0) = local_30;
      *(float *)(iVar4 + 0x1c4) = local_2c;
      local_18 = local_2c;
      local_8 = (undefined1 *)local_30;
    }
  }
  if ((*(int **)(param_1 + 0x104) != (int *)0x0) && (param_1[0x3bc] == (AActor)0x2)) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x104) + 0x98))();
    iVar4 = (**(code **)(*piVar3 + 0xe0))();
    if (iVar4 == 0) {
      iVar4 = *(int *)param_1;
      AL2Float::GetCurAnimName((AL2Float *)param_1);
      (**(code **)(iVar4 + 0x2cc))();
    }
    fVar1 = param_2 + *(float *)(param_1 + 0x3dc);
    *(float *)(param_1 + 0x3dc) = fVar1;
    iVar4 = *(int *)(param_1 + 0x3e0);
    if (iVar4 == 0) {
      fVar1 = fVar1 * (float)_DAT_1089f9a8;
      local_8 = (undefined1 *)(*(float *)(param_1 + 0x3ec) - *(float *)(param_1 + 0x1c4));
      if ((float)local_8 != 0.0) {
        if ((float)local_8 <= 0.0) {
          if (-fVar1 <= (float)local_8) goto LAB_105dba87;
          *(float *)(param_1 + 0x1c4) = *(float *)(param_1 + 0x1c4) - fVar1;
        }
        else if ((float)local_8 <= fVar1) {
LAB_105dba87:
          *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x3ec);
        }
        else {
          *(float *)(param_1 + 0x1c4) = fVar1 + *(float *)(param_1 + 0x1c4);
        }
      }
    }
    else if (iVar4 == 1) {
      if (_DAT_1089fe6c <= fVar1) {
LAB_105dba21:
        *(undefined4 *)(param_1 + 0x3dc) = 0;
        *(undefined4 *)(param_1 + 0x3e0) = 0;
      }
      else {
        *(float *)(param_1 + 0x1c4) =
             *(float *)(param_1 + 0x3ec) -
             ((float)_DAT_108a59d0 * fVar1 -
             fVar1 * (float)_DAT_108d1d70 * *(float *)(param_1 + 0x3dc));
      }
    }
    else if (iVar4 == 2) {
      if (_DAT_1089fe6c <= fVar1) goto LAB_105dba21;
      *(float *)(param_1 + 0x1c4) =
           *(float *)(param_1 + 0x3ec) +
           ((float)_DAT_1089f9a8 * fVar1 -
           fVar1 * (float)_DAT_108a7828 * *(float *)(param_1 + 0x3dc));
    }
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0x134) + 0x150))();
  if (iVar4 == 0) {
    ExceptionList = local_78;
    return local_38;
  }
  thunk_FUN_104419f0();
  local_6c = local_14 + 0.0;
  local_68 = (undefined1 *)(local_10 + 0.0);
  local_64 = local_c + (float)_DAT_1088afc8;
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = local_64;
  local_8 = local_68;
  (**(code **)(**(int **)(DAT_10c51044 + 0x19c) + 0xe4))();
  if (local_ac != 0.0) {
    local_14 = local_b4;
    local_10 = local_b0;
    local_c = local_ac;
  }
  this = (AEmitter *)0x0;
  local_28 = (AEmitter *)0x0;
  if ((0.0 < *(float *)(param_1 + 0x3c8)) || (*(int *)(param_1 + 0x134) == 0)) goto LAB_105dbdac;
  if (param_1[0x3bc] == (AActor)0x1) {
    pUVar5 = UObject::StaticLoadClass
                       (&AActor::PrivateStaticClass,(UObject *)0x0,
                        (ushort *)L"LineageEffect.e_u075_w",(ushort *)0x0,1,(UPackageMap *)0x0);
    if (pUVar5 == (UClass *)0x0) goto LAB_105dbdac;
    iVar4 = **(int **)(param_1 + 0xe4);
    fStack_128 = *(float *)(param_1 + 0x1c8);
    fStack_134 = local_14;
    fStack_130 = local_10;
    fStack_12c = local_c;
    local_8 = (undefined1 *)&fStack_138;
    fStack_138 = local_10;
    FName::FName((FName *)&fStack_138,0);
    (**(code **)(iVar4 + 0xc0))();
    this = (AEmitter *)thunk_FUN_104bc470();
    local_28 = this;
    if (this == (AEmitter *)0x0) goto LAB_105dbdac;
    AEmitter::SetSizeScale(this,_DAT_1089fe6c);
    AEmitter::SetSpeedScale(this,1.0);
    uVar2 = 0x3f800000;
  }
  else {
    local_44 = local_14 - *(float *)(param_1 + 0x3d0);
    local_40 = (undefined1 *)(local_10 - *(float *)(param_1 + 0x3d4));
    local_3c = local_c - *(float *)(param_1 + 0x3d8);
    local_18 = local_3c;
    local_8 = local_40;
    FVector::Rotation((FVector *)&local_44);
    fStack_128 = 4.3730093e-29;
    pUVar5 = UObject::StaticLoadClass
                       (&AActor::PrivateStaticClass,(UObject *)0x0,
                        (ushort *)L"LineageEffect.e_u075_w",(ushort *)0x0,1,(UPackageMap *)0x0);
    if (pUVar5 == (UClass *)0x0) goto LAB_105dbdac;
    iVar4 = **(int **)(param_1 + 0xe4);
    fStack_12c = local_34;
    fStack_128 = local_30;
    fStack_138 = local_14;
    fStack_134 = local_10;
    fStack_130 = local_c;
    local_8 = &stack0xfffffec4;
    FName::FName((FName *)&stack0xfffffec4,0);
    (**(code **)(iVar4 + 0xc0))(pUVar5);
    this = (AEmitter *)thunk_FUN_104bc470();
    local_28 = this;
    if (this == (AEmitter *)0x0) goto LAB_105dbdac;
    AEmitter::SetSizeScale(this,_DAT_1089fe6c);
    AEmitter::SetSpeedScale(this,_DAT_10884cf0);
    uVar2 = _DAT_108d1d34;
  }
  *(undefined4 *)(param_1 + 0x3c8) = uVar2;
  *(float *)(param_1 + 0x3d0) = local_14;
  *(float *)(param_1 + 0x3d4) = local_10;
  *(float *)(param_1 + 0x3d8) = local_c;
LAB_105dbdac:
  *(float *)(param_1 + 0x3c8) = *(float *)(param_1 + 0x3c8) - param_2;
  if (((*(float *)(param_1 + 0x3cc) < 0.0) && (*(int *)(param_1 + 0x134) != 0)) &&
     (((byte)param_1[0x3c4] & 2) != 0)) {
    pUVar5 = UObject::StaticLoadClass
                       (&AActor::PrivateStaticClass,(UObject *)0x0,
                        (ushort *)L"LineageEffect.etc_fish_gura_skill",(ushort *)0x0,1,
                        (UPackageMap *)0x0);
    if (pUVar5 != (UClass *)0x0) {
      iVar4 = **(int **)(param_1 + 0xe4);
      fStack_128 = *(float *)(param_1 + 0x1c8);
      fStack_134 = local_14;
      fStack_130 = local_10;
      fStack_12c = local_c;
      local_8 = (undefined1 *)&fStack_138;
      fStack_138 = local_10;
      FName::FName((FName *)&fStack_138,0);
      (**(code **)(iVar4 + 0xc0))();
      this = (AEmitter *)thunk_FUN_104bc470();
      local_28 = this;
    }
    if (this != (AEmitter *)0x0) {
      AEmitter::SetSizeScale(this,_DAT_1089fe6c);
      AEmitter::SetSpeedScale(this,1.0);
      *(undefined4 *)(param_1 + 0x3cc) = _DAT_108a052c;
      *(float *)(param_1 + 0x3d0) = local_14;
      *(float *)(param_1 + 0x3d4) = local_10;
      *(float *)(param_1 + 0x3d8) = local_c;
    }
  }
  *(float *)(param_1 + 0x3cc) = *(float *)(param_1 + 0x3cc) - param_2;
  ExceptionList = local_78;
  return local_38;
}


// ==== 1065e940 FUN_1065e940 depth=0 from=raiz callees=thunk_FUN_10443540@1030579a thunk_FUN_10598d90@10315343 thunk_FUN_10530420@103011d1 FStatGraph::Render@10304386 thunk_FUN_10445320@10301c1c thunk_FUN_10445470@1030fea7 thunk_FUN_10443650@10302e37 thunk_FUN_10443ad0@103112f7 thunk_FUN_10652540@103100dc thunk_FUN_1068c560@10301951 thunk_FUN_104448f0@10312972 thunk_FUN_104433e0@103057c7 thunk_FUN_104451d0@10303774 UViewport::IsDepthComplexity@10302f59 CORE.DLL::FName::FName@EXTERNAL:0000004e thunk_FUN_10443950@1030f5a1 thunk_FUN_10444470@10314470 thunk_FUN_10443100@10301708 thunk_FUN_10657850@1030b9a6 thunk_FUN_1053d270@103014e7 thunk_FUN_10444a30@10302bbc UL2NEnvManager::GetCloudName@1030718f UModel::PointRegion@10306b6d ALevelInfo::L2GetPhysicsVolume@1031111c FCanvasUtil::~FCanvasUtil@1030884b thunk_FUN_10443020@1030b59b thunk_FUN_10445610@10307581 UGameEngine::GetSWMapXY@10301efb thunk_FUN_10443580@10301c8a thunk_FUN_104431b0@10312909 thunk_FUN_10444560@1030c01d AHUD::eventWorldSpaceOverlays@10310181 thunk_FUN_10391680@1030ea3e ULevel::GetLevelInfo@1030c491 thunk_FUN_106560f0@1030dbb6 CORE.DLL::UObject::StaticFindObject@EXTERNAL:00000135 thunk_FUN_1053d3f0@10312535 thunk_FUN_10443330@103116a8 thunk_FUN_104430f0@103087dd FSolidColorTexture::FSolidColorTexture@1030fa1f UViewport::IsWire@10305fe2 CORE.DLL::FArray::Empty@EXTERNAL:000000a6 UProxyBitmapMaterial::SetTextureInterface@1030bb77 thunk_FUN_10368e10@10301d2f thunk_FUN_10444540@1030a14b thunk_FUN_10443c90@103137d7 thunk_FUN_10443920@1030a768 UViewport::IsRealtime@1030d48b FCanvasUtil::FCanvasUtil@1030a06f _atexit@107a6249 ULevel::GetZoneActor@10301d3e FTempLineBatcher::Render@10305eed FCanvasUtil::DrawTile@10311e41
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1065e940(int param_1,FRenderInterface *param_2)

{
  undefined1 *puVar1;
  APhysicsVolume *pAVar2;
  UViewport *this;
  int *piVar3;
  AHUD *this_00;
  float fVar4;
  ULevel *this_01;
  int iVar5;
  undefined1 uVar6;
  FCanvasUtil *pFVar7;
  APhysicsVolume *pAVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  AZoneInfo *pAVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float10 fVar17;
  undefined4 auStack_1f8 [14];
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  float afStack_1b4 [7];
  FCanvasUtil local_168 [176];
  int local_b8;
  float local_b0;
  int local_ac;
  int local_a4;
  int local_a0;
  ULevel *local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  int local_7c;
  int local_74;
  int local_6c;
  int local_68;
  int local_60;
  int local_5c;
  int local_54;
  int local_50;
  float local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  float local_3c;
  int local_38;
  float local_34;
  undefined1 local_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  AZoneInfo *local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  float local_8;
  
  puStack_80 = &LAB_10824894;
  local_84 = ExceptionList;
  local_88 = &stack0xfffffe8c;
  local_7c = 0;
  ExceptionList = &local_84;
  puVar1 = &stack0xfffffe8c;
  if (DAT_10db1f04 == (UProxyBitmapMaterial *)0x0) {
    local_1c = (AZoneInfo *)&stack0xfffffe84;
    ExceptionList = &local_84;
    FName::FName((FName *)&stack0xfffffe84,0);
    DAT_10db1f04 = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
    thunk_FUN_10530420();
    if ((DAT_10db1f00 & 1) == 0) {
      DAT_10db1f00 = DAT_10db1f00 | 1;
      local_7c._0_1_ = 1;
      local_34 = -1.7014118e+38;
      FSolidColorTexture::FSolidColorTexture((FSolidColorTexture *)&DAT_10db1ee8);
      _atexit((_func_4879 *)&LAB_1084d660);
      local_7c = (uint)local_7c._1_3_ << 8;
    }
    UProxyBitmapMaterial::SetTextureInterface(DAT_10db1f04,(FBaseTexture *)&DAT_10db1ee8);
    puVar1 = local_88;
  }
  local_88 = puVar1;
  if (DAT_10db1ee4 == 0) {
    local_1c = (AZoneInfo *)&stack0xfffffe84;
    FName::FName((FName *)&stack0xfffffe84,0);
    DAT_10db1ee4 = thunk_FUN_1053d3f0();
    thunk_FUN_10530420();
    *(UProxyBitmapMaterial **)(DAT_10db1ee4 + 0x578) = DAT_10db1f04;
    *(undefined1 *)(DAT_10db1ee4 + 0x57c) = 7;
    *(uint *)(DAT_10db1ee4 + 0x580) = *(uint *)(DAT_10db1ee4 + 0x580) | 1;
    *(uint *)(DAT_10db1ee4 + 0x580) = *(uint *)(DAT_10db1ee4 + 0x580) & 0xfffffffd;
  }
  (*(code *)**(undefined4 **)param_2)();
  if ((*(int *)(param_1 + 0x1e0) != 0) &&
     ((*(int *)GIsEditor_exref != 0 ||
      (*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x7c) + 0x6c) != 0)))) {
    iVar10 = *(int *)param_2;
    UViewport::IsDepthComplexity(*(UViewport **)(param_1 + 4));
    (**(code **)(iVar10 + 0x94))();
    afStack_1b4[6] = 4.534328e-29;
    pFVar7 = (FCanvasUtil *)
             FCanvasUtil::FCanvasUtil
                       (local_168,(FRenderTarget *)(*(int *)(param_1 + 4) + 0xdc),param_2);
    local_7c._0_1_ = 2;
    local_24 = -1.7014118e+38;
    afStack_1b4[6] = 1.0;
    afStack_1b4[5] = 0.0;
    afStack_1b4[4] = 0.0;
    afStack_1b4[3] = 0.0;
    afStack_1b4[2] = 0.0;
    afStack_1b4[1] = (float)*(int *)(*(int *)(param_1 + 4) + 0x98);
    afStack_1b4[0] = (float)*(int *)(*(int *)(param_1 + 4) + 0x94);
    uStack_1b8 = 0;
    uStack_1bc = 0;
    uStack_1c0 = 0x1065eb50;
    FCanvasUtil::DrawTile(pFVar7);
    local_7c = (uint)local_7c._1_3_ << 8;
    FCanvasUtil::~FCanvasUtil(local_168);
  }
  local_48 = 0;
  if (((*(int *)(param_1 + 0xc) == 0) &&
      (iVar10 = *(int *)(*(int *)(param_1 + 4) + 0x3c), iVar10 != 0)) &&
     (*(int *)(iVar10 + 0xe0) != 0)) {
    pAVar8 = ALevelInfo::L2GetPhysicsVolume(*(ALevelInfo **)(iVar10 + 0xe0));
    if ((pAVar8 != (APhysicsVolume *)0x0) && (((byte)pAVar8[0x498] & 1) != 0)) {
      local_48 = 1;
      if (*(int *)GEdShowFogInViewports_exref == 0) {
LAB_1065ebf4:
        local_18 = 0;
      }
      else {
        iVar9 = UViewport::IsWire(*(UViewport **)(param_1 + 4));
        local_18 = 1;
        if (iVar9 != 0) goto LAB_1065ebf4;
      }
      local_10 = *(float *)(pAVar8 + 0x4a0);
      local_8 = *(float *)(pAVar8 + 0x4a4);
      local_28 = *(float *)(pAVar8 + 0x49c);
      if ((((byte)pAVar8[0x4a8] & 1) == 0) && (*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) != 0)) {
        iVar9 = *(int *)(*(int *)(param_1 + 0x1cc) + 0x74);
        local_10 = *(float *)(iVar9 + 0xf8);
        local_8 = *(float *)(iVar9 + 0xfc);
        local_28 = *(float *)(iVar9 + 0xf4);
      }
      pAVar2 = *(APhysicsVolume **)(iVar10 + 0x820);
      if (((pAVar2 == (APhysicsVolume *)0x0) || (((byte)pAVar2[0x4c0] & 1) == 0)) ||
         (*(int *)GIsEditor_exref != 0)) {
        (**(code **)(*(int *)param_2 + 0x38))();
      }
      else {
        if (pAVar2 != pAVar8) {
          if (1.0 <= *(float *)(iVar10 + 0x82c)) {
            *(undefined4 *)(iVar10 + 0x690) = 0;
            *(undefined4 *)(iVar10 + 0x82c) = 0;
          }
          else {
            fVar4 = 1.0 - *(float *)(iVar10 + 0x82c);
            *(float *)(iVar10 + 0x82c) = fVar4;
            *(float *)(iVar10 + 0x690) = fVar4 + fVar4;
            *(undefined4 *)(iVar10 + 0x684) = *(undefined4 *)(iVar10 + 0x824);
            *(undefined4 *)(iVar10 + 0x688) = *(undefined4 *)(iVar10 + 0x68c);
            *(undefined4 *)(iVar10 + 0x680) = *(undefined4 *)(iVar10 + 0x828);
          }
          *(float *)(iVar10 + 0x68c) = local_8;
          *(float *)(iVar10 + 0x828) = local_28;
          *(float *)(iVar10 + 0x824) = local_10;
        }
        local_14 = *(float *)(iVar10 + 0x690) * (float)_DAT_10859038;
        *(float *)(iVar10 + 0x82c) = local_14;
        if (1.0 < local_14) {
          *(float *)(iVar10 + 0x684) = local_10;
          *(float *)(iVar10 + 0x688) = local_8;
          *(float *)(iVar10 + 0x680) = local_28;
          *(undefined4 *)(iVar10 + 0x690) = _DAT_108a7210;
          *(undefined4 *)(iVar10 + 0x82c) = 0x3f800000;
        }
        fVar17 = (float10)thunk_FUN_10443920();
        local_2c = (float)fVar17;
        fVar17 = (float10)thunk_FUN_10443920();
        local_14 = (float)fVar17;
        uVar6 = thunk_FUN_10443950();
        local_c._0_3_ = CONCAT12(uVar6,(undefined2)local_c);
        uVar6 = thunk_FUN_10443950();
        local_c._0_2_ = CONCAT11(uVar6,(undefined1)local_c);
        uVar6 = thunk_FUN_10443950();
        local_c = (float)CONCAT31(local_c._1_3_,uVar6);
        (**(code **)(*(int *)param_2 + 0x38))();
      }
    }
    if (*(APhysicsVolume **)(iVar10 + 0x820) != pAVar8) {
      *(APhysicsVolume **)(iVar10 + 0x820) = pAVar8;
    }
    if (local_48 != 0) {
      thunk_FUN_10657850();
      goto LAB_1065f9d2;
    }
  }
  iVar10 = *(int *)(*(int *)(param_1 + 4) + 0x3c);
  if ((*(int *)(iVar10 + 0x3bc) == 0) ||
     (local_9c = *(ULevel **)(*(int *)(iVar10 + 0x3bc) + 0x2cc), local_9c == (ULevel *)0x0)) {
    local_9c = *(ULevel **)(param_1 + 0x1cc);
  }
  if ((DAT_10db1ee0 != 0) || ((iVar10 != 0 && ((*(byte *)(iVar10 + 0xa90) & 1) != 0)))) {
    UGameEngine::GetSWMapXY(DAT_10c51044);
    iVar10 = thunk_FUN_10598d90();
    if (iVar10 == 0) {
      local_9c = *(ULevel **)(param_1 + 0x1cc);
    }
    else {
      local_9c = (ULevel *)thunk_FUN_10598d90();
    }
    DAT_10db1ee0 = 1;
  }
  this_01 = local_9c;
  if (((*(int *)GIsEditor_exref == 0) ||
      (iVar10 = UViewport::IsWire(*(UViewport **)(param_1 + 4)), iVar10 == 0)) &&
     (*(int *)(*(int *)(param_1 + 4) + 0x160) == 0)) {
    ULevel::GetLevelInfo(this_01);
    iVar10 = UModel::PointRegion(*(UModel **)(this_01 + 0xc0));
    uVar11 = (uint)*(byte *)(iVar10 + 8);
  }
  else {
    uVar11 = 0;
  }
  pAVar12 = ULevel::GetZoneActor(this_01,uVar11);
  local_1c = pAVar12;
  if (*(int *)(param_1 + 0xc) == 0) {
    this = *(UViewport **)(param_1 + 4);
    iVar10 = UViewport::IsRealtime(this);
    if (iVar10 != 0) {
      iVar10 = *(int *)(this + 0x3c);
      if (*(int *)(iVar10 + 0x3bc) != 0) {
        iVar10 = *(int *)(iVar10 + 0x3bc);
      }
      local_94 = *(undefined4 *)(iVar10 + 0x1bc);
      local_90 = *(undefined4 *)(iVar10 + 0x1c0);
      local_8c = *(undefined4 *)(iVar10 + 0x1c4);
      local_14 = *(float *)(pAVar12 + 0x3fc);
      local_2c = *(float *)(pAVar12 + 0x400);
      local_40 = *(undefined4 *)(pAVar12 + 0x3f8);
      iVar10 = *(int *)(*(int *)(param_1 + 0x1cc) + 0x74);
      if ((*(int *)(iVar10 + 0x18c) == 0) || (*(int *)(iVar10 + 400) == 0)) goto LAB_1065f927;
      for (iVar10 = 0; local_54 = iVar10,
          iVar10 < *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x18c) + 0x3c);
          iVar10 = iVar10 + 1) {
        iVar9 = thunk_FUN_106560f0();
        if (iVar9 == 0) {
          thunk_FUN_10444470();
          iVar10 = iVar10 + -1;
        }
      }
      if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x18c) + 0x3c) == 0) {
        if (*(int *)GIsEditor_exref == 0) {
          if (DAT_10c51050 == 0) {
            if ((*(uint *)(pAVar12 + 0x3d8) >> 2 & 1) != 0) {
              thunk_FUN_104448f0();
              if (DAT_10db1ed4 != *(int *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x18c)) {
                DAT_10db1ed4 = *(int *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x18c);
                thunk_FUN_104430f0();
                thunk_FUN_10443330();
              }
            }
            if (DAT_10db1edc == 0.0) {
LAB_1065f6d2:
              uVar11 = *(uint *)(pAVar12 + 0x3d8) >> 2 & 1;
              if ((((uVar11 != 0) && (DAT_10db1ed0 == 0)) ||
                  (pfVar15 = *(float **)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x18c),
                  *(float *)GL2FogStart_exref != *pfVar15)) ||
                 (*(float *)GL2FogEnd_exref != pfVar15[1])) goto LAB_1065f781;
              if ((uVar11 == 0) && ((*(uint *)(pAVar12 + 0x3d8) & 8) != 0)) {
                thunk_FUN_10443100();
                thunk_FUN_104431b0();
                if (DAT_10db1ed0 == 0) goto LAB_1065f829;
                goto LAB_1065f7fd;
              }
            }
            else {
              iVar10 = 0;
              puVar13 = UL2NEnvManager::GetCloudName
                                  (*(UL2NEnvManager **)
                                    (*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x6c),0);
              UObject::StaticFindObject
                        (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar13,iVar10);
              thunk_FUN_10443c90();
              if (DAT_10db1edc == 0.0) goto LAB_1065f6d2;
LAB_1065f781:
              **(undefined4 **)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x18c) =
                   *(undefined4 *)GL2FogStart_exref;
              *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x18c) + 4) =
                   *(undefined4 *)GL2FogEnd_exref;
              local_1c = (AZoneInfo *)
                         ((float)_DAT_10854b70 *
                          **(float **)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x18c) *
                         (float)_DAT_10882e20);
              thunk_FUN_10443100();
LAB_1065f7fd:
              thunk_FUN_104433e0();
              thunk_FUN_10443020();
            }
LAB_1065f829:
            DAT_10db1ed0 = *(uint *)(pAVar12 + 0x3d8) >> 2 & 1;
            local_c = (float)*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4);
            if (*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4) < 0) {
              local_c = local_c + (float)_DAT_10888818;
            }
            local_c = local_c * (float)*(double *)GSecondsPerCycleQPF_exref;
            thunk_FUN_10443ad0();
            DAT_10db1edc = 0.0;
            thunk_FUN_10657850();
            thunk_FUN_10443540();
          }
          else if (DAT_10db1edc != 0.0) {
            DAT_10db1edc = 0.0;
            iVar10 = 0;
            puVar13 = UL2NEnvManager::GetCloudName
                                (*(UL2NEnvManager **)
                                  (*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x6c),0);
            UObject::StaticFindObject
                      (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar13,iVar10);
            thunk_FUN_10443c90();
            thunk_FUN_10657850();
          }
        }
      }
      else {
        local_24 = *(float *)GL2FogStart_exref * (float)_DAT_10854b70 * (float)_DAT_10882e20;
        local_28 = (float)_DAT_10854b70 * *(float *)GL2FogEnd_exref * (float)_DAT_10882e20;
        thunk_FUN_10444a30();
        thunk_FUN_10368e10();
        local_7c._0_1_ = 3;
        thunk_FUN_10368e10();
        local_7c = CONCAT31(local_7c._1_3_,4);
        piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x6c);
        local_10 = (float)*(double *)(piVar3 + 0x4d);
        (**(code **)(*piVar3 + 0xd8))();
        (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x6c) + 0xe0))();
        (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x6c) + 0xdc))();
        local_3c = DAT_10db1edc;
        for (local_38 = 0;
            local_38 < *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x18c) + 0x3c)
            ; local_38 = local_38 + 1) {
          DAT_10db1edc = *(float *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) +
                                                     0x18c) + 0x38) + local_38 * 4);
          fVar17 = (float10)thunk_FUN_10444560();
          local_8 = (float)fVar17;
          fVar17 = (float10)thunk_FUN_10443580();
          local_34 = (float)fVar17;
          fVar17 = (float10)thunk_FUN_10443650();
          local_b0 = (float)fVar17;
          thunk_FUN_104451d0();
          thunk_FUN_10445320();
          thunk_FUN_10445470();
          local_7c._0_1_ = 5;
          thunk_FUN_10445610();
          local_7c = CONCAT31(local_7c._1_3_,6);
          local_24 = local_8 * (local_34 - local_24) + local_24;
          local_28 = local_28 + local_8 * (local_b0 - local_28);
          uVar6 = thunk_FUN_10443950();
          _local_30 = CONCAT12(uVar6,_local_30);
          uVar6 = thunk_FUN_10443950();
          _local_30 = CONCAT11(uVar6,local_30);
          uVar6 = thunk_FUN_10443950();
          _local_30 = CONCAT31(_uStack_2f,uVar6);
          local_1e = thunk_FUN_10443950();
          local_1f = thunk_FUN_10443950();
          local_20 = thunk_FUN_10443950();
          for (iVar10 = 0;
              (iVar9 = local_6c, local_a0 = iVar10, iVar10 < local_68 && (iVar10 < local_74));
              iVar10 = iVar10 + 1) {
            uVar6 = thunk_FUN_10443950();
            iVar5 = local_6c;
            *(undefined1 *)(iVar9 + 2 + iVar10 * 4) = uVar6;
            uVar6 = thunk_FUN_10443950();
            *(undefined1 *)(iVar5 + 1 + iVar10 * 4) = uVar6;
            puVar1 = (undefined1 *)(local_6c + iVar10 * 4);
            uVar6 = thunk_FUN_10443950();
            *puVar1 = uVar6;
          }
          for (iVar10 = 0;
              (iVar9 = local_60, local_ac = iVar10, iVar10 < local_5c && (iVar10 < local_b8));
              iVar10 = iVar10 + 1) {
            uVar6 = thunk_FUN_10443950();
            iVar5 = local_60;
            *(undefined1 *)(iVar9 + 2 + iVar10 * 4) = uVar6;
            uVar6 = thunk_FUN_10443950();
            *(undefined1 *)(iVar5 + 1 + iVar10 * 4) = uVar6;
            puVar1 = (undefined1 *)(local_60 + iVar10 * 4);
            uVar6 = thunk_FUN_10443950();
            *puVar1 = uVar6;
          }
          local_7c._0_1_ = 5;
          thunk_FUN_10391680();
          local_7c = CONCAT31(local_7c._1_3_,4);
          thunk_FUN_10391680();
        }
        thunk_FUN_10443100();
        thunk_FUN_104431b0();
        if (local_3c == 0.0) {
          thunk_FUN_104433e0();
          thunk_FUN_10443020();
        }
        local_c = (float)*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4);
        if (*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4) < 0) {
          local_c = local_c + (float)_DAT_10888818;
        }
        local_c = local_c * (float)*(double *)GSecondsPerCycleQPF_exref;
        thunk_FUN_10443ad0();
        thunk_FUN_10657850();
        local_44 = 0;
        local_50 = 0;
        local_4c = _DAT_108dc79c;
        iVar10 = 0;
        while (iVar9 = iVar10, local_a4 = iVar9,
              iVar9 < *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x18c) + 0x3c))
        {
          fVar17 = (float10)thunk_FUN_10652540();
          if (fVar17 == (float10)_DAT_1085222c) {
LAB_1065f518:
            iVar10 = iVar9 + 1;
          }
          else {
            local_44 = 1;
            DAT_10db1ed8 = 1;
            fVar17 = (float10)thunk_FUN_10444540();
            local_3c = (float)fVar17;
            if (local_4c <= local_3c) goto LAB_1065f518;
            iVar10 = iVar9 + 1;
            local_50 = iVar9;
            local_4c = local_3c;
          }
        }
        if (local_44 == 0) {
          if (DAT_10db1ed8 != 0) {
            DAT_10db1ed8 = 0;
            goto LAB_1065f58d;
          }
        }
        else {
          *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x18c) + 0x44) = local_50;
LAB_1065f58d:
          thunk_FUN_10443c90();
        }
        thunk_FUN_10443540();
        iVar10 = *(int *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0x74) + 0x18c);
        for (local_98 = 0; local_98 < *(int *)(iVar10 + 0x3c); local_98 = local_98 + 1) {
        }
        FArray::Empty((FArray *)(iVar10 + 0x38),4,0);
        local_7c._0_1_ = 3;
        thunk_FUN_10391680();
        local_7c = (uint)local_7c._1_3_ << 8;
        thunk_FUN_10391680();
      }
LAB_1065f927:
      (**(code **)(*(int *)param_2 + 0x38))();
      goto LAB_1065f9d2;
    }
  }
  (**(code **)(*(int *)param_2 + 0x38))();
LAB_1065f9d2:
  thunk_FUN_1068c560();
  if ((*(int *)(param_1 + 0x1e0) != 0) &&
     ((*(int *)GIsEditor_exref != 0 ||
      (*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x7c) + 0x6c) != 0)))) {
    pFVar7 = (FCanvasUtil *)
             FCanvasUtil::FCanvasUtil
                       (local_168,(FRenderTarget *)(*(int *)(param_1 + 4) + 0xdc),param_2);
    local_7c._0_1_ = 7;
    local_18 = 0xff000000;
    afStack_1b4[6] = 0.0;
    afStack_1b4[5] = 0.0;
    afStack_1b4[4] = 4.5355238e-29;
    FCanvasUtil::DrawTile(pFVar7);
    local_7c = (uint)local_7c._1_3_ << 8;
    FCanvasUtil::~FCanvasUtil(local_168);
  }
  if (GTempLineBatcher != (FTempLineBatcher *)0x0) {
    (*(code *)**(undefined4 **)param_2)();
    iVar10 = *(int *)param_2;
    puVar14 = (undefined4 *)(param_1 + 0x14);
    pfVar15 = afStack_1b4;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar15 = (float)*puVar14;
      puVar14 = puVar14 + 1;
      pfVar15 = pfVar15 + 1;
    }
    uStack_1b8 = 1;
    uStack_1bc = 0x1065fab7;
    (**(code **)(iVar10 + 0x40))();
    iVar10 = *(int *)param_2;
    puVar14 = (undefined4 *)(param_1 + 0x94);
    puVar16 = auStack_1f8;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar16 = puVar16 + 1;
    }
    (**(code **)(iVar10 + 0x40))(2);
    FTempLineBatcher::Render(GTempLineBatcher,param_2,1);
    (**(code **)(*(int *)param_2 + 4))();
  }
  this_00 = *(AHUD **)(*(int *)(*(int *)(param_1 + 4) + 0x3c) + 0x6b4);
  if (this_00 != (AHUD *)0x0) {
    AHUD::eventWorldSpaceOverlays(this_00);
  }
  if (GStatGraph != (FStatGraph *)0x0) {
    FStatGraph::Render(GStatGraph,*(UViewport **)(param_1 + 4),param_2);
  }
  (**(code **)(*(int *)param_2 + 4))();
  ExceptionList = local_84;
  return;
}


// ==== 10662d80 FUN_10662d80 depth=0 from=raiz callees=CORE.DLL::FMemMark::FMemMark@EXTERNAL:00000188 CORE.DLL::FName::FName@EXTERNAL:0000004e CORE.DLL::FSphere::FSphere@EXTERNAL:000000c2 thunk_FUN_10326340@103090a7 CORE.DLL::FMemMark::Pop@EXTERNAL:00000187 CORE.DLL::FBox::GetExtent@EXTERNAL:000000eb CORE.DLL::FVector::SizeSquared@EXTERNAL:000001cb FDynamicLight::FDynamicLight@1030cc61 FDynamicLight::SetLightColor@1030cf09 FDynamicActor::Render@1030d36e CORE.DLL::UObject::StaticConstructObject@EXTERNAL:00000138 ULevel::GetLevelInfo@1030c491 thunk_FUN_10686f00@103132dc thunk_FUN_1032ffc0@103131d8 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:00000139 CORE.DLL::FBox::GetCenter@EXTERNAL:000000ec thunk_FUN_105eaa30@10311c93 AActor::GetActorRenderData@10307a40 thunk_FUN_105e9950@10304f0c UViewport::IsLit@1030a0ec thunk_FUN_10522300@1030a54c CORE.DLL::appFailAssert@EXTERNAL:00000026
// strings: 108dc9d4=.\UnRender.cpp | 108dc9b4=ProjectorInfo->Projector | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10662d80(FLevelSceneNode *param_1,FRenderInterface *param_2)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  ULevel *this;
  FDynamicActor *pFVar4;
  int *piVar5;
  TList<FProjectorRenderInfo*> *pTVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  FLevelSceneNode *pFVar10;
  FBox *this_00;
  undefined4 *puVar11;
  int ***pppiVar12;
  float10 fVar13;
  UClass *pUStack_59c;
  code *pcStack_594;
  int **appiStack_57c [15];
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 auStack_538 [14];
  undefined4 uStack_500;
  undefined4 local_4ec [256];
  UObject *local_ec [5];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 *local_74;
  void *local_70;
  undefined1 *puStack_6c;
  uint local_68;
  FMemMark local_64 [16];
  int local_54;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int *local_3c;
  float local_38;
  TList<FDynamicLight*> *local_34;
  int local_30;
  float local_2c;
  int local_28;
  TList<FProjectorRenderInfo*> *local_24;
  int local_20;
  int local_1c;
  float local_18;
  TList<FDynamicLight*> *local_14;
  FDynamicActor *local_10;
  int *local_c;
  TList<FDynamicLight*> *local_8;
  
  puStack_6c = &LAB_10824a7b;
  local_70 = ExceptionList;
  local_74 = &stack0xfffffb08;
  local_68 = 0;
  uStack_500 = 0x10662dc1;
  ExceptionList = &local_70;
  FMemMark::FMemMark(local_64,(FMemStack *)&DAT_10db1d98);
  (*(code *)**(undefined4 **)param_2)();
  iVar7 = 0x10;
  uStack_53c = 1;
  if ((*(uint *)(*(int *)(*(int *)(param_1 + 4) + 0x3c) + 0x564) & 0x800000) == 0) {
    iVar8 = *(int *)param_2;
    pFVar10 = param_1 + 0x14;
    puVar9 = auStack_538;
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *(undefined4 *)pFVar10;
      pFVar10 = pFVar10 + 4;
      puVar9 = puVar9 + 1;
    }
    uStack_540 = 0x10662e0f;
    (**(code **)(iVar8 + 0x40))();
  }
  else {
    puVar9 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x3c) + 0x618);
    puVar11 = auStack_538;
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    uStack_540 = 0x10662dfc;
    (**(code **)(*(int *)param_2 + 0x40))();
  }
  iVar7 = *(int *)param_2;
  pFVar10 = param_1 + 0x94;
  pppiVar12 = appiStack_57c;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pppiVar12 = (int **)*(undefined4 *)pFVar10;
    pFVar10 = pFVar10 + 4;
    pppiVar12 = pppiVar12 + 1;
  }
  (**(code **)(iVar7 + 0x40))();
  local_10 = AActor::GetActorRenderData(*(AActor **)(param_1 + 500));
  local_14 = (TList<FDynamicLight*> *)0x0;
  iVar7 = UViewport::IsLit(*(UViewport **)(param_1 + 4));
  if ((iVar7 != 0) && ((*(uint *)(*(int *)(param_1 + 500) + 0x5c) & 0x800) == 0)) {
    local_20 = 0;
    local_2c = *(float *)(param_1 + 0x1d0);
    fVar3 = *(float *)(*(int *)(*(int *)(param_1 + 500) + 0x2cc) + 0xc0);
    if (local_2c != fVar3) {
      *(float *)(param_1 + 0x1d0) = fVar3;
    }
    for (local_30 = 0; pFVar4 = local_10, local_30 < *(int *)(*(int *)(param_1 + 500) + 0x114);
        local_30 = local_30 + 1) {
      iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0xcc) +
                       *(int *)(*(int *)(*(int *)(param_1 + 500) + 0x110) + local_30 * 4) * 0x14 + 4
                      );
      if ((iVar7 != -1) && (local_20 < 0x100)) {
        while (local_28 = iVar7,
              piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0xd8) + local_28 * 4),
              *piVar1 != 0) {
          piVar1 = (int *)*piVar1;
          piVar5 = (int *)(**(code **)(*piVar1 + 0x154))();
          iVar7 = *(int *)(param_1 + 500);
          if (((((*(char *)(iVar7 + 0x35) != '\b') || ((*(byte *)(iVar7 + 100) & 0x10) == 0)) ||
               ((*(byte *)(iVar7 + 0x5c) & 0x20) != 0)) || ((piVar5[9] != 0 || (piVar5[10] != 0))))
             && (((*(uint *)(iVar7 + 0x5c) ^ *(uint *)(*piVar5 + 0x5c)) & 1) == 0)) {
            local_3c = (int *)((float)piVar5[2] - *(float *)(local_10 + 0xa8));
            local_38 = (float)piVar5[3] - *(float *)(local_10 + 0xac);
            local_34 = (TList<FDynamicLight*> *)((float)piVar5[4] - *(float *)(local_10 + 0xb0));
            local_18 = local_38;
            local_c = local_3c;
            local_8 = local_34;
            local_18 = FVector::SizeSquared((FVector *)&local_3c);
            if ((*(char *)((int)piVar1 + 0x3bd) == '\x13') ||
               (local_8 = (TList<FDynamicLight*> *)
                          ((*(float *)(local_10 + 0xb4) + (float)piVar5[8]) *
                          (*(float *)(local_10 + 0xb4) + (float)piVar5[8])),
               local_18 <= (float)local_8)) {
              for (local_4c = 0; local_4c < local_20; local_4c = local_4c + 1) {
                if ((int *)local_4ec[local_4c] == piVar5) goto LAB_10662ff4;
              }
              local_4ec[local_20] = piVar5;
              local_20 = local_20 + 1;
              if (0xff < local_20) break;
            }
          }
LAB_10662ff4:
          iVar7 = local_28 + 1;
        }
      }
    }
    local_8 = (TList<FDynamicLight*> *)&pUStack_59c;
    FSphere::FSphere((FSphere *)&pUStack_59c,(FSphere *)(local_10 + 0xa8));
    local_14 = (TList<FDynamicLight*> *)thunk_FUN_10686f00(param_1,pFVar4);
    if (((*(int *)GIsEditor_exref != 0) && (*(int *)GL2Shader_exref != 0)) &&
       (*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x3c) + 0x5b8) == 0x14)) {
      FDynamicLight::FDynamicLight((FDynamicLight *)local_ec,(ALight *)0x0);
      local_8 = (TList<FDynamicLight*> *)&pcStack_594;
      pcStack_594 = GError_exref;
      pUStack_59c = (UClass *)0x10663097;
      FName::FName((FName *)&pcStack_594,0);
      UObject::GetTransientPackage();
      pUStack_59c = &ALight::PrivateStaticClass;
      local_ec[0] = UObject::StaticConstructObject();
      local_48 = 0x3f800000;
      local_44 = 0x3f800000;
      local_40 = _DAT_10854358;
      local_d8 = 0x3f800000;
      local_d4 = 0x3f800000;
      local_d0 = _DAT_10854358;
      pcStack_594 = (code *)0x3f800000;
      local_8 = (TList<FDynamicLight*> *)&pcStack_594;
      FDynamicLight::SetLightColor((FDynamicLight *)local_ec);
      local_ec[0][0x3bd] = (UObject)0x13;
      local_8 = (TList<FDynamicLight*> *)thunk_FUN_1032ffc0();
      if (local_8 == (TList<FDynamicLight*> *)0x0) {
        local_14 = (TList<FDynamicLight*> *)0x0;
      }
      else {
        *(UObject ***)local_8 = local_ec;
        *(int *)(local_8 + 4) = 0;
        local_14 = local_8;
      }
      local_68 = local_68 & 0xffffff00;
    }
    *(float *)(param_1 + 0x1d0) = local_2c;
  }
  iVar7 = 0;
  local_24 = (TList<FProjectorRenderInfo*> *)0x0;
  if ((*(byte *)(*(int *)(param_1 + 500) + 0x74) & 4) != 0) {
    while (this = *(ULevel **)(param_1 + 0x1cc), local_1c = iVar7, iVar7 < *(int *)(this + 0x116c))
    {
      piVar1 = *(int **)(*(int *)(this + 0x1168) + iVar7 * 4);
      local_c = piVar1;
      ULevel::GetLevelInfo(this);
      iVar8 = thunk_FUN_105eaa30();
      if (iVar8 == 0) {
        iVar8 = *(int *)(*(int *)(param_1 + 0x1cc) + 0x1168);
        *(undefined4 *)(iVar8 + iVar7 * 4) =
             *(undefined4 *)(iVar8 + -4 + *(int *)(*(int *)(param_1 + 0x1cc) + 0x116c) * 4);
        local_1c = iVar7 + -1;
        thunk_FUN_10326340();
      }
      else {
        if (*piVar1 == 0) {
          appFailAssert("ProjectorInfo->Projector",".\\UnRender.cpp",0x148b);
        }
        iVar7 = (**(code **)(*(int *)param_1 + 0x38))();
        if (((iVar7 == 0) ||
            (((*(uint *)(*local_c + 0x3cc) & 0x10) == 0 &&
             (*(int *)(*(int *)(param_1 + 500) + 0x104) != 0)))) ||
           (((*(uint *)(*local_c + 0x3cc) & 4) == 0 &&
            (*(int *)(*(int *)(param_1 + 500) + 0x38) != 0)))) {
LAB_106632ec:
          iVar7 = local_1c + 1;
        }
        else {
          this_00 = (FBox *)(local_10 + 0x8c);
          appiStack_57c[0] = &local_3c;
          FBox::GetCenter(this_00);
          FBox::GetExtent(this_00);
          for (iVar7 = 0; local_54 = iVar7, iVar7 < 6; iVar7 = iVar7 + 1) {
            pfVar2 = (float *)(local_c + iVar7 * 4 + 0x2f);
            fVar13 = (float10)thunk_FUN_105e9950();
            local_8 = (TList<FDynamicLight*> *)(float)fVar13;
            local_2c = (pfVar2[2] * (float)local_34 +
                       *pfVar2 * (float)local_3c + pfVar2[1] * local_38) - pfVar2[3];
            if (local_2c < -(float)local_8) goto LAB_106632ec;
          }
          pcStack_594 = (code *)0x106632c7;
          pTVar6 = (TList<FProjectorRenderInfo*> *)thunk_FUN_10522300();
          if (pTVar6 == (TList<FProjectorRenderInfo*> *)0x0) {
            local_24 = (TList<FProjectorRenderInfo*> *)0x0;
            goto LAB_106632ec;
          }
          *(int **)pTVar6 = local_c;
          *(TList<FProjectorRenderInfo*> **)(pTVar6 + 4) = local_24;
          iVar7 = local_1c + 1;
          local_24 = pTVar6;
        }
      }
    }
  }
  pcStack_594 = (code *)0x1066330c;
  FDynamicActor::Render(local_10,param_1,local_14,local_24,param_2);
  (**(code **)(*(int *)param_2 + 4))();
  FMemMark::Pop(local_64);
  ExceptionList = local_70;
  return;
}


// ==== 10686f00 FUN_10686f00 depth=0 from=raiz callees=thunk_FUN_1048e290@10313aa2 thunk_FUN_10538d80@1030c7ca CORE.DLL::UObject::IsA@EXTERNAL:0000004f CORE.DLL::FMemCache::Get@EXTERNAL:0000032e thunk_FUN_10684d30@103040a7 CORE.DLL::FMemCache::FCacheItem::Unlock@EXTERNAL:0000032f CORE.DLL::UObject::GetIndex@EXTERNAL:000000a5 thunk_FUN_10686bd0@103084a9 CORE.DLL::FSphere::FSphere@EXTERNAL:000000c2 CORE.DLL::FVector::IsZero@EXTERNAL:000001ae FDynamicLight::GetLightColor@10313df9 CORE.DLL::FString::Printf@EXTERNAL:000000ff CORE.DLL::FString::operator*@EXTERNAL:00000032 CORE.DLL::FString::~FString@EXTERNAL:0000002b thunk_FUN_10373830@10304bb0 CORE.DLL::UObject::GetClass@EXTERNAL:000000a9 CORE.DLL::UObject::GetIndexedObject@EXTERNAL:00000368 thunk_FUN_10686970@10309282 CORE.DLL::FString::FString@EXTERNAL:00000035 CORE.DLL::FString::operator=@EXTERNAL:0000009e ULevel::GetZoneActor@10301d3e CORE.DLL::UObject::GetName@EXTERNAL:000000b5 thunk_FUN_10522300@1030a54c FUN_10686430@10686430 CORE.DLL::FMemCache::Create@EXTERNAL:0000032d CORE.DLL::appFailAssert@EXTERNAL:00000026
// strings: 108decec=.\UnRenderVisibility.cpp | 108defd8=OtherLight | 108decec=.\UnRenderVisibility.cpp | 108defc4=DynamicLight | 108decec=.\UnRenderVisibility.cpp | 108defc4=DynamicLight | 108def58= Lighting - actor:%s sphereradius %f  | 108dee78=[%i]{%2i}(%s) Rad %4.4f Col %3.2f %3.2f %3.2f Alph %4.4f Dst %4.5f Ky %i br %3.2f v=%u lv=%u | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10686f00(int param_1,int *param_2,float param_3,float param_4,float param_5,undefined4 param_6,
            int param_7,int param_8,int param_9)

{
  uint *puVar1;
  ULevel *this;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  AZoneInfo *pAVar11;
  FString *pFVar12;
  FDynamicLight *this_00;
  ushort *puVar13;
  uchar *puVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  float10 fVar18;
  __uint64 _Var19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  double dVar27;
  undefined1 local_128 [44];
  undefined4 local_fc;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_d8;
  float local_d4;
  float local_d0;
  int local_c8;
  int local_c0;
  int local_b8;
  int local_b0;
  int local_ac;
  int local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int *local_90;
  float local_8c;
  float local_88;
  int *local_84;
  float local_80;
  float local_7c;
  int local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 *local_64;
  void *local_60;
  undefined1 *puStack_5c;
  uint local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  uchar *local_2c;
  int local_28;
  float local_24;
  float local_20;
  int *local_1c;
  float local_18;
  UObject *local_14;
  int *local_10;
  FCacheItem *local_c;
  uchar *local_8;
  
  puStack_5c = &LAB_108263eb;
  local_60 = ExceptionList;
  local_64 = &stack0xfffffec0;
  local_58 = 0;
  piVar10 = (int *)(DAT_10ddd7e0 + DAT_10ddd9cc * 4);
  uVar2 = rdtsc();
  ExceptionList = &local_60;
  *piVar10 = *piVar10 - (int)uVar2;
  local_14 = (UObject *)*param_2;
  _Var19 = thunk_FUN_10538d80();
  local_c = (FCacheItem *)0x0;
  local_3c = (int *)0x0;
  local_18 = 0.0;
  local_8 = FMemCache::Get(&GCache,_Var19,&local_c,8);
  if (local_8 == (uchar *)0x0) {
    local_8 = FMemCache::Create(&GCache,_Var19,&local_c,0x1c4,8,0);
    local_8[0x1c0] = '\0';
    local_8[0x1c1] = '\0';
    local_8[0x1c2] = '\0';
    local_8[0x1c3] = '\0';
    local_18 = 1.4013e-45;
  }
  iVar16 = 0;
  local_30 = 0;
  local_58 = CONCAT31(local_58._1_3_,1);
  for (local_34 = 0; local_34 < *(int *)(local_8 + 0x1c0); local_34 = local_34 + 1) {
    piVar10 = (int *)(local_8 + local_34 * 0x1c);
    if ((((*piVar10 != 0) &&
         (pUVar5 = UObject::GetIndexedObject(piVar10[1]), (UObject *)*piVar10 == pUVar5)) &&
        (pUVar6 = UObject::GetClass((UObject *)*piVar10), (UClass *)piVar10[2] == pUVar6)) &&
       (((*(byte *)((int *)*piVar10 + 0x19) & 0x80) == 0 &&
        (iVar7 = (**(code **)(*(int *)*piVar10 + 0x154))(), iVar7 != 0)))) {
      iVar7 = iVar16;
      if (iVar16 != local_34) {
        piVar15 = piVar10;
        piVar17 = (int *)(local_8 + local_30 * 0x1c);
        for (iVar16 = 7; iVar7 = local_30, iVar16 != 0; iVar16 = iVar16 + -1) {
          *piVar17 = *piVar15;
          piVar15 = piVar15 + 1;
          piVar17 = piVar17 + 1;
        }
      }
      puVar14 = local_8 + iVar7 * 0x1c + 0x10;
      puVar14[0] = '\0';
      puVar14[1] = '\0';
      puVar14[2] = '\0';
      puVar14[3] = '\0';
      iVar8 = (**(code **)(*(int *)*piVar10 + 0x154))();
      local_10 = (int *)&stack0xfffffeb0;
      FSphere::FSphere((FSphere *)&stack0xfffffeb0,(FSphere *)&param_3);
      FUN_10686430();
      iVar16 = iVar7;
      if (0 < *(int *)(iVar8 + 0x2c)) {
        iVar16 = iVar7 + 1;
        local_30 = iVar16;
        iVar8 = UObject::IsA((UObject *)*piVar10,&ANMovableSunLight::PrivateStaticClass);
        if (((iVar8 != 0) && (param_9 != 0)) && (param_9 != *(int *)(*piVar10 + 0xe4))) {
          iVar16 = iVar7;
          local_30 = iVar7;
        }
      }
    }
  }
  *(int *)(local_8 + 0x1c0) = iVar16;
  local_58 = 3;
  local_b0 = 0;
  while (puVar14 = local_8, iVar7 = local_b0, iVar16 = param_8, local_b0 < param_8) {
    local_10 = (int *)&stack0xfffffeb0;
    FSphere::FSphere((FSphere *)&stack0xfffffeb0,(FSphere *)&param_3);
    FUN_10686430();
    local_b0 = iVar7 + 1;
  }
  thunk_FUN_10686970();
  local_44 = 0;
  do {
    if (iVar16 <= local_44) {
      local_58 = 0;
      thunk_FUN_10686bd0();
      local_58 = CONCAT31(local_58._1_3_,5);
      local_74 = 0;
      do {
        iVar16 = local_74;
        if (*(int *)(puVar14 + 0x1c0) <= local_74) {
          local_2c = (uchar *)0x8;
          if ((byte)local_14[0x2b5] < 8) {
            local_2c = (uchar *)(uint)(byte)local_14[0x2b5];
          }
          local_54 = 0;
          local_58 = 7;
          local_ac = 0;
          while (iVar16 = local_ac, local_ac < *(int *)(puVar14 + 0x1c0)) {
            puVar14 = local_8 + local_ac * 0x1c;
            iVar7 = (**(code **)(**(int **)puVar14 + 0x154))();
            if (iVar7 == 0) {
              appFailAssert("DynamicLight",".\\UnRenderVisibility.cpp",0x2da);
            }
            if ((local_54 < (int)local_2c) &&
               ((*(int *)(puVar14 + 0x14) != 0 || (*(int *)(puVar14 + 0x18) != 0)))) {
              if (*(int *)(puVar14 + 0x18) == 0) {
                local_1c = (int *)0x0;
              }
              else {
                local_1c = (int *)0x3f800000;
              }
              if (*(int *)(puVar14 + 0x14) == 0) {
                local_18 = 0.0;
              }
              else {
                local_18 = 1.0;
              }
              local_10 = (int *)(((float)*(double *)(*(int *)(param_1 + 4) + 0x144) -
                                 *(float *)(puVar14 + 0xc)) / (float)_DAT_108defb8);
              *(float *)(iVar7 + 0x30) =
                   (local_18 - (float)local_1c) * (float)local_10 + (float)local_1c;
              piVar10 = (int *)thunk_FUN_10522300();
              if (piVar10 == (int *)0x0) {
                piVar10 = (int *)0x0;
              }
              else {
                *piVar10 = iVar7;
                piVar10[1] = (int)local_3c;
              }
              local_54 = local_54 + 1;
              local_3c = piVar10;
            }
            puVar14 = local_8;
            local_ac = iVar16 + 1;
          }
          FMemCache::FCacheItem::Unlock(local_c);
          local_58 = 0;
          if ((((*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x3c) + 0xe4) + 0x74) +
                         0xa0) != 0) &&
               (iVar16 = UObject::IsA(local_14,&APawn::PrivateStaticClass), iVar16 != 0)) &&
              (iVar16 = *(int *)(param_1 + 4), iVar16 != 0)) &&
             ((*(int *)(iVar16 + 0x74) != 0 && (*(int *)(iVar16 + 0x158) == param_1)))) {
            iVar16 = *(int *)(iVar16 + 0x74);
            FString::FString((FString *)&local_50);
            local_58._0_1_ = 9;
            UObject::GetName(local_14);
            pFVar12 = (FString *)FString::Printf((ushort *)&local_90);
            local_58._0_1_ = 10;
            FString::operator=((FString *)&local_50,pFVar12);
            local_58 = CONCAT31(local_58._1_3_,9);
            FString::~FString((FString *)&local_90);
            *(float *)(iVar16 + 0x54) = *(float *)(iVar16 + 0x54) + (float)_DAT_108ba2c8;
            local_14 = (UObject *)0xffffff00;
            FString::operator*((FString *)&local_50);
            thunk_FUN_10684d30(iVar16);
            *(float *)(iVar16 + 0x54) = *(float *)(iVar16 + 0x54) + (float)_DAT_10853b28;
            local_40 = 0;
            for (local_38 = 0; local_38 < *(int *)(local_8 + 0x1c0); local_38 = local_38 + 1) {
              this_00 = (FDynamicLight *)
                        (**(code **)(**(int **)(local_8 + local_38 * 0x1c) + 0x154))();
              if (*(int *)this_00 != 0) {
                FDynamicLight::GetLightColor(this_00,(ELightColorType)&local_d8);
                fVar18 = (float10)thunk_FUN_10373830();
                local_10 = (int *)(float)fVar18;
                dVar27 = (double)*(float *)(*(UObject **)this_00 + 0x3c0);
                uVar26 = *(undefined4 *)(this_00 + 0x2c);
                dVar25 = (double)(float)local_10;
                dVar24 = (double)*(float *)(this_00 + 0x30);
                dVar23 = (double)local_d0;
                dVar22 = (double)local_d4;
                dVar21 = (double)local_d8;
                dVar20 = (double)*(float *)(this_00 + 0x20);
                puVar13 = UObject::GetName(*(UObject **)this_00);
                pFVar12 = (FString *)
                          FString::Printf((ushort *)&local_90,
                                          L"[%i]{%2i}(%s) Rad %4.4f Col %3.2f %3.2f %3.2f Alph %4.4f Dst %4.5f Ky %i br %3.2f v=%u lv=%u"
                                          ,local_40,(uint)*(byte *)(*(int *)this_00 + 0x3bd),puVar13
                                          ,dVar20,dVar21,dVar22,dVar23,dVar24,dVar25,uVar26,
                                          SUB84(dVar27,0));
                local_58._0_1_ = 0xb;
                FString::operator=((FString *)&local_50,pFVar12);
                local_58 = CONCAT31(local_58._1_3_,9);
                FString::~FString((FString *)&local_90);
                local_18 = -NAN;
                FString::operator*((FString *)&local_50);
                thunk_FUN_10684d30(iVar16,local_18);
              }
              local_40 = local_40 + 1;
            }
            local_58 = local_58 & 0xffffff00;
            FString::~FString((FString *)&local_50);
          }
          piVar10 = (int *)(DAT_10ddd7e0 + DAT_10ddd9cc * 4);
          uVar2 = rdtsc();
          *piVar10 = *piVar10 + (int)uVar2 + -0xc;
          ExceptionList = local_60;
          return CONCAT44((int)((ulonglong)uVar2 >> 0x20),local_3c);
        }
        puVar14 = local_8 + local_74 * 0x1c;
        local_2c = puVar14;
        piVar10 = (int *)(**(code **)(**(int **)puVar14 + 0x154))();
        local_10 = piVar10;
        if (piVar10 == (int *)0x0) {
          appFailAssert("DynamicLight",".\\UnRenderVisibility.cpp",0x287);
        }
        if ((double)*(float *)(puVar14 + 0xc) <=
            *(double *)(*(int *)(param_1 + 4) + 0x144) - _DAT_108defb8) {
          local_f4 = param_3;
          local_f0 = param_4;
          local_ec = param_5;
          if (*(char *)(*piVar10 + 0x3bd) == '\x13') {
            fVar4 = (float)_DAT_108913c0;
            local_90 = (int *)(param_3 - (float)piVar10[5] * fVar4);
            local_8c = param_4 - (float)piVar10[6] * fVar4;
            local_88 = param_5 - fVar4 * (float)piVar10[7];
            local_24 = local_8c;
            local_20 = local_88;
            local_1c = local_90;
          }
          *(undefined4 *)(puVar14 + 0x18) = *(undefined4 *)(puVar14 + 0x14);
          if (((*(int *)GIsEditor_exref == 0) && (*(char *)(*piVar10 + 0x3bd) == '\x13')) &&
             (iVar16 = *param_2, (*(byte *)(iVar16 + 0x2e4) & 0x20) != 0)) {
            this = *(ULevel **)(iVar16 + 0x2cc);
            iVar16 = FVector::IsZero((FVector *)(iVar16 + 0x1d4));
            if (iVar16 == 0) {
              *(uint *)(*param_2 + 0x2e4) = *(uint *)(*param_2 + 0x2e4) & 0xffffffbf;
              if (this != (ULevel *)0x0) {
                for (iVar16 = 0; local_c0 = iVar16, iVar16 < *(int *)(local_14 + 0x114);
                    iVar16 = iVar16 + 1) {
                  pAVar11 = ULevel::GetZoneActor
                                      (this,*(int *)(*(int *)(*(int *)(this + 0xc0) + 0xcc) +
                                                    *(int *)(*(int *)(local_14 + 0x110) + iVar16 * 4
                                                            ) * 0x14));
                  if (((byte)pAVar11[0x13c] & 1) == 0) {
                    *(uint *)(*param_2 + 0x2e4) = *(uint *)(*param_2 + 0x2e4) | 0x40;
                    break;
                  }
                }
              }
              if (((*(byte *)(*param_2 + 0x2e4) & 0x40) == 0) && (this != (ULevel *)0x0)) {
                iVar16 = *(int *)(**(int **)(*(int *)(*(int *)(this + 0x74) + 0x54) + 0x38) + 0x3c);
                iVar7 = *(int *)(iVar16 + 0x3bc);
                if (iVar7 == 0) {
                  local_9c = *(undefined4 *)(iVar16 + 0x1bc);
                  local_98 = *(undefined4 *)(iVar16 + 0x1c0);
                  local_94 = *(undefined4 *)(iVar16 + 0x1c4);
                }
                else {
                  local_9c = *(undefined4 *)(iVar7 + 0x1bc);
                  local_98 = *(undefined4 *)(iVar7 + 0x1c0);
                  local_94 = *(undefined4 *)(iVar7 + 0x1c4);
                }
                fVar18 = (float10)thunk_FUN_1048e290();
                iVar16 = *param_2;
                if (fVar18 <= (float10)_DAT_108a7838) {
                  local_70 = *(float *)(iVar16 + 0x1bc);
                  local_6c = *(float *)(iVar16 + 0x1c0);
                  local_68 = *(float *)(iVar16 + 0x1c4);
                  fVar4 = (float)_DAT_108913c0;
                  local_d4 = (float)local_10[5] * fVar4;
                  local_84 = (int *)(local_70 - local_d4);
                  local_80 = local_6c - (float)local_10[6] * fVar4;
                  local_7c = local_68 - fVar4 * (float)local_10[7];
                  local_fc = 0;
                  uVar2 = rdtsc();
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  local_24 = local_7c;
                  local_20 = local_80;
                  local_10 = local_84;
                  iVar16 = (**(code **)(*(int *)this + 0xe4))
                                     (local_128,*param_2,&local_84,&local_70);
                  puVar1 = (uint *)(*param_2 + 0x2e4);
                  *puVar1 = *puVar1 ^ ((uint)(iVar16 == 0) << 6 ^ *(uint *)(*param_2 + 0x2e4)) &
                                      0x40;
                  uVar3 = rdtsc();
                  piVar10 = (int *)(DAT_10ddd7e0 + DAT_10dddb2c * 4);
                  *piVar10 = *piVar10 + (-0xc - (int)uVar2) + (int)uVar3;
                }
                else {
                  *(uint *)(iVar16 + 0x2e4) = *(uint *)(iVar16 + 0x2e4) & 0xffffffbf;
                }
              }
            }
            *(uint *)(local_2c + 0x14) = (*(byte *)(*param_2 + 0x2e4) ^ 0xffffffff) >> 6 & 1;
          }
          else {
            *(uint *)(puVar14 + 0x14) = (uint)(*(int *)(puVar14 + 0x10) != 0);
          }
          *(float *)(local_2c + 0xc) =
               (float)*(double *)(*(int *)(param_1 + 4) + 0x144) -
               (float)(int)local_18 * (float)_DAT_108defb8;
          iVar16 = local_74;
        }
        local_74 = iVar16 + 1;
        puVar14 = local_8;
      } while( true );
    }
    local_1c = *(int **)(param_7 + local_44 * 4);
    local_28 = -1;
    for (local_b8 = 0;
        (iVar16 = local_28, local_b8 < *(int *)(puVar14 + 0x1c0) &&
        (iVar16 = local_b8, *(int *)(puVar14 + local_b8 * 0x1c) != *local_1c));
        local_b8 = local_b8 + 1) {
    }
    local_28 = iVar16;
    if (local_28 == -1) {
      iVar16 = local_1c[0xb];
      if (0 < iVar16) {
        if (*(int *)(local_8 + 0x1c0) < 0x10) {
          local_28 = *(int *)(local_8 + 0x1c0);
          *(int *)(local_8 + 0x1c0) = local_28 + 1;
        }
        else {
          local_78 = -1;
          local_c8 = iVar16;
          for (iVar7 = 0; local_a4 = iVar7, iVar7 < *(int *)(local_8 + 0x1c0); iVar7 = iVar7 + 1) {
            iVar8 = (**(code **)(**(int **)(local_8 + iVar7 * 0x1c) + 0x154))();
            if (iVar8 == 0) {
              appFailAssert("OtherLight",".\\UnRenderVisibility.cpp",0x25e);
            }
            iVar8 = *(int *)(iVar8 + 0x2c);
            if (iVar8 < iVar16) {
              iVar16 = iVar8;
              local_c8 = iVar8;
              local_78 = iVar7;
            }
          }
          if (local_78 != -1) {
            local_28 = local_78;
          }
        }
        piVar10 = local_1c;
        if (local_28 != -1) {
          piVar15 = (int *)(local_8 + local_28 * 0x1c);
          *piVar15 = *local_1c;
          uVar9 = UObject::GetIndex((UObject *)*local_1c);
          piVar15[1] = uVar9;
          pUVar6 = UObject::GetClass((UObject *)*piVar10);
          piVar15[2] = (int)pUVar6;
          piVar15[3] = _DAT_108defd4;
          piVar15[5] = 0;
          piVar15[6] = 0;
          puVar14 = local_8;
          goto LAB_10687255;
        }
      }
    }
    else {
LAB_10687255:
      puVar14 = puVar14 + local_28 * 0x1c + 0x10;
      puVar14[0] = '\x01';
      puVar14[1] = '\0';
      puVar14[2] = '\0';
      puVar14[3] = '\0';
    }
    local_44 = local_44 + 1;
    puVar14 = local_8;
    iVar16 = param_8;
  } while( true );
}


// ==== 10687d00 FUN_10687d00 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000004e CORE.DLL::FSphere::FSphere@EXTERNAL:000000c2 UGameEngine::GetSWMapXY@10301efb CORE.DLL::FBox::GetExtent@EXTERNAL:000000eb CORE.DLL::FVector::SizeSquared@EXTERNAL:000001cb FDynamicLight::FDynamicLight@1030cc61 FDynamicLight::SetLightColor@1030cf09 USubSkeletalMeshInstance::GetBoneCoords@103051c8 AActor::GetAmbientLightingActor@1030874c FDynamicActor::Render@1030d36e CORE.DLL::UObject::StaticConstructObject@EXTERNAL:00000138 thunk_FUN_10598d90@10315343 thunk_FUN_10686f00@103132dc CORE.DLL::UObject::IsA@EXTERNAL:0000004f CORE.DLL::FMemStackFrame::PushBytes@EXTERNAL:000001c8 CORE.DLL::FBox::GetCenter@EXTERNAL:000000ec CORE.DLL::UObject::GetTransientPackage@EXTERNAL:00000139 CORE.DLL::FMemStack::GetThreadSafeMemStack@EXTERNAL:000001c9 CORE.DLL::FPlane::operator+=@EXTERNAL:000001c6 CORE.DLL::appFailAssert@EXTERNAL:00000026
// strings: 108decec=.\UnRenderVisibility.cpp | 108defe8=MeshInstance | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687d00(int *param_1,FDynamicActor *param_2)

{
  UObject *this;
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  UObject *pUVar4;
  float *pfVar5;
  AActor *pAVar6;
  undefined4 *puVar7;
  int iVar8;
  FMemStackFrame *this_00;
  int *piVar9;
  TList<FDynamicLight*> *pTVar10;
  int *piVar11;
  TList<FProjectorRenderInfo*> *pTVar12;
  bool bVar13;
  float fVar14;
  undefined4 uStack_54c;
  int *piStack_518;
  int *piStack_510;
  int *piStack_50c;
  TList<FProjectorRenderInfo*> *pTStack_508;
  TList<FDynamicLight*> *local_504;
  float fStack_500;
  float fStack_4fc;
  TList<FProjectorRenderInfo*> *pTStack_4f8;
  TList<FDynamicLight*> *pTStack_4f4;
  undefined4 local_4f0;
  float local_4ec;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  TList<FProjectorRenderInfo*> *pTStack_4d4;
  TList<FDynamicLight*> *pTStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  FPlane aFStack_4c0 [8];
  UObject *apUStack_4b8 [5];
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  float fStack_49c;
  undefined1 auStack_434 [40];
  undefined4 auStack_40c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1082640e;
  local_c = ExceptionList;
  this = *(UObject **)param_2;
  local_4f0 = 0;
  local_504 = (TList<FDynamicLight*> *)0x0;
  ExceptionList = &local_c;
  if ((*(int *)GIsEditor_exref == 0) && (ExceptionList = &local_c, *(int *)GIsL2Seamless_exref != 0)
     ) {
    if (*(int *)(this + 0x2cc) != param_1[2]) {
LAB_10687d5c:
      *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
      ExceptionList = local_c;
      return;
    }
    ExceptionList = &local_c;
    if ((*(int *)GIsL2NetLogin_exref != 0) &&
       (ExceptionList = &local_c, iVar3 = (**(code **)(*(int *)*param_1 + 0x18))(), iVar3 == 0)) {
      uStack_54c = 0x10687db3;
      UGameEngine::GetSWMapXY(*(UGameEngine **)(*(int *)(this + 0xe4) + 0x74));
      iVar3 = thunk_FUN_10598d90();
      if (*(int *)(this + 0x2cc) != iVar3) goto LAB_10687d5c;
    }
  }
  FSphere::FSphere((FSphere *)&local_4ec,(FSphere *)(param_2 + 0xa8));
  if (((this[0x35] == (UObject)0x2) && (*(UObject **)(this + 0x104) != (UObject *)0x0)) &&
     (iVar3 = UObject::IsA(*(UObject **)(this + 0x104),&USkeletalMesh::PrivateStaticClass),
     iVar3 != 0)) {
    pUVar4 = (UObject *)(**(code **)(**(int **)(this + 0x104) + 0x98))();
    if ((pUVar4 == (UObject *)0x0) ||
       (iVar3 = UObject::IsA(pUVar4,&USkeletalMeshInstance::PrivateStaticClass), iVar3 == 0)) {
      pUVar4 = (UObject *)0x0;
      appFailAssert("MeshInstance",".\\UnRenderVisibility.cpp",0x354);
    }
    pfVar5 = (float *)USubSkeletalMeshInstance::GetBoneCoords
                                ((USubSkeletalMeshInstance *)pUVar4,(ulong)auStack_434);
    fStack_4fc = *pfVar5 - *(float *)(this + 0x1bc);
    pTStack_508 = (TList<FProjectorRenderInfo*> *)(pfVar5[1] - *(float *)(this + 0x1c0));
    local_504 = (TList<FDynamicLight*> *)(pfVar5[2] - *(float *)(this + 0x1c4));
    fStack_4cc = 0.0;
    pTStack_4f8 = pTStack_508;
    pTStack_4f4 = local_504;
    fStack_4d8 = fStack_4fc;
    pTStack_4d4 = pTStack_508;
    pTStack_4d0 = local_504;
    FPlane::operator+=((FPlane *)&fStack_4e8,aFStack_4c0);
  }
  pAVar6 = (AActor *)this;
  if ((((byte)this[0x2e4] & 8) != 0) && (*(AActor **)(this + 0x40) != (AActor *)0x0)) {
    pAVar6 = AActor::GetAmbientLightingActor(*(AActor **)(this + 0x40));
  }
  if (((byte)*(UObject *)(pAVar6 + 0x2e4) & 1) == 0) {
    pTStack_508 = (TList<FProjectorRenderInfo*> *)0x0;
    if ((this[0x35] == (UObject)0x8) &&
       (((iVar3 = UObject::IsA(this,&AMover::PrivateStaticClass), iVar3 != 0 &&
         (iVar3 = UObject::IsA(this,&AMover::PrivateStaticClass),
         (*(byte *)((-(uint)(iVar3 != 0) & (uint)this) + 0x460) & 0x10) == 0)) ||
        ((((byte)this[100] & 0x10) != 0 &&
         (((((byte)this[0x5c] & 0x20) == 0 && (*(int *)(this + 0x38) != 0)) &&
          (*(int *)(this + 0x274) != 0)))))))) {
      piStack_50c = (int *)0x1;
    }
    else {
      piStack_50c = (int *)0x0;
    }
    pTStack_4f4 = (TList<FDynamicLight*> *)0x0;
    if (0 < *(int *)(this + 0x114)) {
      do {
        iVar3 = *(int *)(*(int *)(this + 0x110) + (int)pTStack_4f4 * 4);
        fStack_4cc = (float)(*(int *)(param_1[3] + 0xcc) + iVar3 * 0x14);
        piVar11 = (int *)(DAT_10ddd7e0 + DAT_10ddd9cc * 4);
        uVar2 = rdtsc();
        *piVar11 = *piVar11 - (int)uVar2;
        if (*(int *)((int)fStack_4cc + 4) == -1) {
          piStack_518 = (int *)0x0;
        }
        else {
          piStack_518 = (int *)(*(int *)(param_1[3] + 0xd8) + *(int *)((int)fStack_4cc + 4) * 4);
        }
        piStack_510 = *(int **)(param_1[0x10c] + iVar3 * 4);
        pTVar12 = pTStack_508;
        for (piVar11 = piStack_50c; (int)piVar11 < 2; piVar11 = (int *)((int)piVar11 + 1)) {
          if ((int)pTVar12 < 0x100) {
            if (piVar11 == (int *)0x0) {
              bVar13 = *(int *)((int)fStack_4cc + 4) == -1;
LAB_1068801e:
              if (bVar13) goto LAB_106881a3;
            }
            else if (piVar11 == (int *)0x1) {
              if (piStack_510 == (int *)0x0) goto LAB_106881a3;
              bVar13 = ((byte)this[0x5c] & 0x10) == 0;
              goto LAB_1068801e;
            }
LAB_10688024:
            do {
              if (piVar11 == (int *)0x0) {
                pUVar4 = (UObject *)*piStack_518;
                piStack_518 = piStack_518 + 1;
                if (pUVar4 == (UObject *)0x0) goto LAB_106881a3;
                puVar7 = (undefined4 *)(**(code **)(*(int *)pUVar4 + 0x154))();
              }
              else {
                puVar7 = (undefined4 *)*piStack_510;
                piStack_510 = piStack_510 + 1;
                if (puVar7 == (undefined4 *)0x0) goto LAB_106881a3;
                pUVar4 = (UObject *)*puVar7;
              }
            } while ((puVar7 == (undefined4 *)0x0) ||
                    (((*(uint *)(pUVar4 + 0x5c) ^ *(uint *)(this + 0x5c)) & 1) != 0));
            fStack_500 = (float)puVar7[2] - local_4ec;
            fStack_4fc = (float)puVar7[3] - fStack_4e8;
            pTStack_4f8 = (TList<FProjectorRenderInfo*> *)((float)puVar7[4] - fStack_4e4);
            fStack_4c8 = fStack_4fc;
            fVar14 = FVector::SizeSquared((FVector *)&fStack_500);
            iVar8 = UObject::IsA(pUVar4,&AEmitterLight::PrivateStaticClass);
            if (iVar8 == 0) {
              if ((pUVar4[0x3bd] != (UObject)0x13) &&
                 (((float)puVar7[8] + fStack_4e0) * ((float)puVar7[8] + fStack_4e0) < fVar14))
              goto LAB_10688024;
LAB_1068814f:
              if ((this[0x35] == (UObject)0x2) && (pUVar4[0x3bd] == (UObject)0x13)) {
                bVar13 = ((byte)this[0x13c] & 1) == 0;
                goto LAB_10688165;
              }
            }
            else {
              if ((((float)puVar7[8] + fStack_4e0) * ((float)puVar7[8] + fStack_4e0) < fVar14) ||
                 ((*(char *)(puVar7 + 0xd) == '\0' && (this[0x35] != (UObject)0x2))))
              goto LAB_10688024;
              if (*(char *)(puVar7 + 0xd) != '\x01') goto LAB_1068814f;
              bVar13 = this[0x35] == (UObject)0x2;
LAB_10688165:
              if (bVar13) goto LAB_10688024;
            }
            iVar8 = 0;
            if (0 < (int)pTVar12) {
              do {
                if ((undefined4 *)auStack_40c[iVar8] == puVar7) goto LAB_10688024;
                iVar8 = iVar8 + 1;
              } while (iVar8 < (int)pTVar12);
            }
            auStack_40c[(int)pTVar12] = puVar7;
            pTVar12 = pTVar12 + 1;
            pTStack_508 = pTVar12;
            if ((int)pTVar12 < 0x100) goto LAB_10688024;
          }
LAB_106881a3:
        }
        piVar11 = (int *)(DAT_10ddd7e0 + DAT_10ddd9cc * 4);
        uVar2 = rdtsc();
        *piVar11 = *piVar11 + (int)uVar2 + -0xc;
        if (((byte)this[0x74] & 4) != 0) {
          for (piVar11 = *(int **)(param_1[0x10d] + iVar3 * 4);
              (piVar11 != (int *)0x0 && (piVar1 = (int *)*piVar11, piVar1 != (int *)0x0));
              piVar11 = piVar11 + 1) {
            if ((((*(uint *)(*piVar1 + 0x3cc) & 0x10) != 0) || (*(int *)(this + 0x104) == 0)) &&
               ((pTVar10 = local_504, (*(uint *)(*piVar1 + 0x3cc) & 4) != 0 ||
                (*(int *)(this + 0x38) == 0)))) {
              for (; pTVar10 != (TList<FDynamicLight*> *)0x0;
                  pTVar10 = *(TList<FDynamicLight*> **)(pTVar10 + 4)) {
                if (*(int **)pTVar10 == piVar1) goto LAB_10688336;
              }
              FBox::GetCenter((FBox *)(param_2 + 0x8c));
              FBox::GetExtent((FBox *)(param_2 + 0x8c));
              iVar3 = 0;
              pfVar5 = (float *)(piVar1 + 0x31);
              do {
                if ((*pfVar5 * fStack_4c4 + fStack_4cc * pfVar5[-2] + fStack_4c8 * pfVar5[-1]) -
                    pfVar5[1] <
                    -(ABS(fStack_4e0 * pfVar5[-1]) + ABS(fStack_4e4 * pfVar5[-2]) +
                     ABS(*pfVar5 * fStack_4dc))) goto LAB_10688336;
                iVar3 = iVar3 + 1;
                pfVar5 = pfVar5 + 4;
              } while (iVar3 < 6);
              iVar8 = 8;
              iVar3 = 8;
              this_00 = FMemStack::GetThreadSafeMemStack((FMemStack *)&DAT_10db1d98);
              piVar9 = (int *)FMemStackFrame::PushBytes(this_00,iVar3,iVar8);
              if (piVar9 == (int *)0x0) {
                piStack_50c = (int *)0x0;
              }
              else {
                *piVar9 = (int)piVar1;
                piVar9[1] = (int)piStack_50c;
                piStack_50c = piVar9;
              }
            }
LAB_10688336:
          }
        }
        pTStack_4f4 = pTStack_4f4 + 1;
      } while ((int)pTStack_4f4 < *(int *)(this + 0x114));
      if (pTStack_508 != (TList<FProjectorRenderInfo*> *)0x0) {
        FSphere::FSphere((FSphere *)&stack0xfffffab0,(FSphere *)&local_4ec);
        local_4f0 = thunk_FUN_10686f00(*param_1,param_2);
      }
    }
  }
  (*(code *)**(undefined4 **)param_1[1])();
  (**(code **)(*(int *)param_1[1] + 0x1c))();
  pTVar10 = pTStack_4f4;
  if (((*(int *)GIsEditor_exref != 0) && (*(int *)GL2Shader_exref != 0)) &&
     (*(int *)(*(int *)(*(int *)(*param_1 + 4) + 0x3c) + 0x5b8) == 0x1b)) {
    FDynamicLight::FDynamicLight((FDynamicLight *)apUStack_4b8,(ALight *)0x0);
    uStack_54c = *(undefined4 *)GError_exref;
    FName::FName((FName *)&uStack_54c,0);
    UObject::GetTransientPackage();
    apUStack_4b8[0] = UObject::StaticConstructObject(&ALight::PrivateStaticClass);
    fStack_500 = 1.0;
    fStack_4fc = _DAT_10854358;
    uStack_4a0 = 0x3f800000;
    fStack_49c = _DAT_10854358;
    uStack_4a4 = 0x3f800000;
    uStack_54c = 0x3f800000;
    FDynamicLight::SetLightColor((FDynamicLight *)apUStack_4b8);
    *(undefined1 *)((int)fStack_4cc + 0x3bd) = 0x13;
    pTVar10 = (TList<FDynamicLight*> *)(**(code **)**(undefined4 **)GMalloc_exref)(8);
    if (pTVar10 == (TList<FDynamicLight*> *)0x0) {
      puStack_8 = (undefined1 *)0xffffffff;
      pTVar10 = (TList<FDynamicLight*> *)0x0;
    }
    else {
      *(UObject ***)pTVar10 = apUStack_4b8;
      *(int *)(pTVar10 + 4) = 0;
      puStack_8 = (undefined1 *)0xffffffff;
    }
  }
  uStack_54c = 0x1068851f;
  FDynamicActor::Render
            (param_2,(FLevelSceneNode *)*param_1,pTVar10,pTStack_508,(FRenderInterface *)param_1[1])
  ;
  (**(code **)(*(int *)param_1[1] + 4))();
  ExceptionList = local_c;
  return;
}


// ==== 1068cd00 FUN_1068cd00 depth=0 from=raiz callees=thunk_FUN_1048e290@10313aa2 thunk_FUN_10326340@103090a7 thunk_FUN_104b42a0@10310c1c UViewport::IsWire@10305fe2 ULevel::GetLevelInfo@1030c491 FDynamicLight::Update@10306bef UModel::PointRegion@10306b6d CORE.DLL::UObject::GetOuter@EXTERNAL:000000dc CORE.DLL::UObject::IsA@EXTERNAL:0000004f thunk_FUN_105eaa30@10311c93 CORE.DLL::FArray::Empty@EXTERNAL:000000a6 AActor::GetActorRenderData@10307a40 thunk_FUN_10685470@1030952a thunk_FUN_106854d0@1030229d UViewport::IsLit@1030a0ec thunk_FUN_103704b0@10307743 thunk_FUN_10493fd0@103104ba thunk_FUN_10522300@1030a54c thunk_FUN_10685210@1031015e CORE.DLL::appFailAssert@EXTERNAL:00000026
// strings: 108decec=.\UnRenderVisibility.cpp | 108dc9b4=ProjectorInfo->Projector | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068cd00(void)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  UModel *pUVar4;
  UViewport *this;
  undefined4 uVar5;
  void *_Dst;
  FRenderInterface *pFVar6;
  ULevelObject *this_00;
  bool bVar7;
  byte bVar8;
  ALevelInfo *pAVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  UObject *pUVar13;
  FDynamicActor *pFVar14;
  FDynamicLight *pFVar15;
  int *piVar16;
  undefined4 *puVar17;
  int *piVar18;
  FConvexVolume *this_01;
  undefined4 uVar19;
  int *piVar20;
  AZoneInfo *pAVar21;
  undefined4 *puVar22;
  ATerrainInfo *pAVar23;
  FVector *pFVar24;
  APawn *pAVar25;
  FCanvasUtil *pFVar26;
  FVisibilityInterface *pFVar27;
  ABrush *this_02;
  code *pcVar28;
  FLevelSceneNode *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int iVar29;
  undefined4 *puVar30;
  float *pfVar31;
  ULevel *pUVar32;
  undefined2 in_FPUControlWord;
  float10 fVar33;
  longlong lVar34;
  undefined8 uVar35;
  float fVar36;
  undefined4 auStack_40 [6];
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  if (unaff_EBP[-0x17] < 0) {
    unaff_EBP[-1] = 4;
    if (((*(int *)GIsEditor_exref == 0) && (*(int *)(unaff_EBX + 0xc) == 0)) &&
       (*(int *)(unaff_EBX + 0x1d8) == 0)) {
      *(undefined1 *)(unaff_EBP + -7) = 0;
      *(undefined1 *)((int)unaff_EBP + -0x1b) = 0;
      *(undefined1 *)((int)unaff_EBP + -0x1a) = 0;
      *(undefined1 *)((int)unaff_EBP + -0x19) = 0;
      (**(code **)(*unaff_ESI + 0x10))();
    }
    pAVar21 = ULevel::GetZoneActor(*(ULevel **)(unaff_EBX + 0x1cc),*(int *)(unaff_EBX + 0x1d8));
    if (((*(int *)GIsEditor_exref == 0) && (*(int *)(unaff_EBX + 0xc) == 0)) &&
       (((*(uint *)(pAVar21 + 0x3d8) & 0x10) != 0 && ((*(uint *)(pAVar21 + 0x3d8) & 8) != 0)))) {
      (**(code **)(*unaff_ESI + 0x10))();
    }
    piVar16 = (int *)(DAT_10ddd7e0 + DAT_10ddd990 * 4);
    uVar35 = rdtsc();
    *piVar16 = *piVar16 + ((int)uVar35 - unaff_EBP[-6]);
    *(undefined1 *)(unaff_EBP + -1) = 0x19;
    uVar35 = rdtsc();
    unaff_EBP[-5] = (int)uVar35;
    iVar12 = unaff_EBP[0x19] + -1;
    unaff_EBP[-0x34] = iVar12;
LAB_1068ddf0:
    if (-1 < iVar12) {
      pUVar32 = (ULevel *)unaff_EBP[iVar12 + -0xc];
      pUVar4 = (UModel *)unaff_EBP[iVar12 + -0x1d];
      unaff_EBP[0x17] = (int)pUVar4;
      unaff_EBP[0x1a] = (int)(unaff_EBP + iVar12 * 0x31d + -0x1292);
      *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
      *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
      if (*(int *)(unaff_EBX + 0x1d4) != 0) {
        *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
        pAVar9 = ULevel::GetLevelInfo(pUVar32);
        *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
        if (((*(int *)GIsEditor_exref == 0) ||
            (iVar12 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar12 == 0)) &&
           (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
          iVar12 = UModel::PointRegion(pUVar4);
          uVar11 = (uint)*(byte *)(iVar12 + 8);
        }
        else {
          uVar11 = 0;
        }
        *(uint *)(unaff_EBX + 0x1d8) = uVar11;
      }
      puVar17 = (undefined4 *)0x0;
      unaff_EBP[-0x18] = 0;
      iVar12 = UViewport::IsWire(*(UViewport **)(unaff_EBP[0x1e] + 4));
      if ((iVar12 == 0) || (*(int *)GIsEditor_exref == 0)) {
        iVar12 = unaff_EBP[0x17];
        iVar10 = unaff_EBP[0x1a];
        if (*(int *)(iVar12 + 0x68) != 0) {
          puVar17 = (undefined4 *)thunk_FUN_106859a0();
          _memcpy((void *)puVar17[8],(void *)(iVar10 + 0x46c),*(int *)(iVar10 + 0xc6c) * 4);
          _memcpy((void *)puVar17[7],(void *)(iVar10 + 0x86c),*(int *)(iVar10 + 0xc70) * 4);
          puVar17[6] = 0;
          puVar17[1] = 0;
          puVar17[2] = *(undefined4 *)(iVar12 + 0x124);
          *puVar17 = 0;
          unaff_EBP[-0x18] = (int)puVar17;
        }
      }
      else {
        iVar10 = unaff_EBP[0x1a];
      }
      piVar16 = *(int **)(iVar10 + 0x18);
LAB_1068df45:
      do {
        unaff_EBP[0x1b] = (int)piVar16;
        if (piVar16 == (int *)0x0) goto LAB_1068e032;
        piVar18 = (int *)*piVar16;
        unaff_EBP[0x18] = (int)piVar18;
        iVar12 = *piVar18;
        if ((((*(char *)(iVar12 + 0x35) == '\v') && (*(int *)(iVar12 + 0x2b8) != 0)) &&
            ((*(uint *)(*(int *)(*(int *)(*(int *)unaff_EBP[0x1a] + 4) + 0x3c) + 0x5ac) & 0x800) !=
             0)) && (iVar12 = FUN_106858b0(), iVar12 != 0)) {
          iVar12 = *(int *)(unaff_EBP[0x1a] + 0x1c);
          puVar22 = (undefined4 *)(unaff_EBP[0x18] + 0x8c);
          puVar30 = (undefined4 *)&stack0xffffffe4;
          for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar30 = *puVar22;
            puVar22 = puVar22 + 1;
            puVar30 = puVar30 + 1;
          }
          iStack_20 = 0x1068dfc4;
          iVar12 = (**(code **)(iVar12 + 8))();
          if (iVar12 != 0) {
            iVar10 = unaff_EBP[0x1a];
            uVar19 = thunk_FUN_10685df0();
            iStack_20 = 8;
            iStack_24 = 0x1068e002;
            puVar22 = (undefined4 *)thunk_FUN_10522300();
            if (puVar22 != (undefined4 *)0x0) {
              uVar5 = *(undefined4 *)(iVar10 + 0x24);
              *puVar22 = uVar19;
              puVar22[1] = uVar5;
              *(undefined4 **)(iVar10 + 0x24) = puVar22;
              piVar16 = *(int **)(unaff_EBP[0x1b] + 4);
              goto LAB_1068df45;
            }
            *(undefined4 *)(iVar10 + 0x24) = 0;
          }
          piVar16 = (int *)unaff_EBP[0x1b];
        }
        piVar16 = (int *)piVar16[1];
        iVar10 = unaff_EBP[0x1a];
      } while( true );
    }
    iVar12 = unaff_EBP[0x19];
    while( true ) {
      iVar10 = iVar12 + -1;
      unaff_EBP[-0x3e] = iVar10;
      if (iVar10 < 0) break;
      pUVar32 = (ULevel *)unaff_EBP[iVar12 + -0xd];
      pUVar4 = (UModel *)unaff_EBP[iVar12 + -0x1e];
      unaff_EBP[0x1a] = (int)(unaff_EBP + iVar10 * 0x31d + -0x1292);
      *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
      *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
      if (*(int *)(unaff_EBX + 0x1d4) != 0) {
        *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
        pAVar9 = ULevel::GetLevelInfo(pUVar32);
        *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
        if (((*(int *)GIsEditor_exref == 0) ||
            (iVar12 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar12 == 0)) &&
           (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
          iVar12 = UModel::PointRegion(pUVar4);
          uVar11 = (uint)*(byte *)(iVar12 + 8);
        }
        else {
          uVar11 = 0;
        }
        *(uint *)(unaff_EBX + 0x1d8) = uVar11;
      }
      unaff_EBP[0x16] = *(int *)(unaff_EBP[0x1a] + 0x18);
      while (iVar12 = iVar10, unaff_EBP[0x16] != 0) {
        piVar16 = *(int **)unaff_EBP[0x16];
        if ((((((piVar16 != (int *)0x0) && (*piVar16 != 0)) &&
              ((*(int *)GIsEditor_exref != 0 && ((*(byte *)(*piVar16 + 100) & 8) != 0)))) ||
             ((*(char *)(*piVar16 + 0x35) != '\v' || (*(int *)(*piVar16 + 0x2b8) == 0)))) ||
            ((*(uint *)(*(int *)(*(int *)(*(int *)unaff_EBP[0x1a] + 4) + 0x3c) + 0x5ac) & 0x800) ==
             0)) && (iVar12 = FUN_106858b0(), iVar12 != 0)) {
          iVar12 = *(int *)(unaff_EBP[0x1a] + 0x1c);
          piVar18 = piVar16 + 0x23;
          piVar20 = (int *)&stack0xffffffe4;
          for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar20 = *piVar18;
            piVar18 = piVar18 + 1;
            piVar20 = piVar20 + 1;
          }
          iStack_20 = 0x1068e8c1;
          iVar12 = (**(code **)(iVar12 + 8))();
          if (iVar12 != 0) {
            piVar18 = (int *)thunk_FUN_10522300();
            if (piVar18 == (int *)0x0) {
              piVar18 = (int *)0x0;
            }
            else {
              iVar12 = *(int *)(unaff_EBP[0x1a] + 0x438);
              *piVar18 = (int)piVar16;
              piVar18[1] = iVar12;
            }
            *(int **)(unaff_EBP[0x1a] + 0x438) = piVar18;
          }
        }
        unaff_EBP[0x16] = *(int *)(unaff_EBP[0x16] + 4);
        unaff_EBX = (FLevelSceneNode *)unaff_EBP[0x1e];
        iVar10 = unaff_EBP[-0x3e];
      }
    }
    piVar16 = (int *)(DAT_10ddd7e0 + DAT_10ddd9b0 * 4);
    uVar35 = rdtsc();
    *piVar16 = *piVar16 + ((int)uVar35 - unaff_EBP[-5]);
    unaff_EBP[-1] = 4;
    *(undefined1 *)(unaff_EBP + -1) = 0x1b;
    iVar12 = unaff_EBP[0x19] + -1;
    unaff_EBP[-0x32] = iVar12;
LAB_1068e944:
    if (-1 < iVar12) {
      pUVar32 = (ULevel *)unaff_EBP[iVar12 + -0xc];
      pUVar4 = (UModel *)unaff_EBP[iVar12 + -0x1d];
      *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
      *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
      if (*(int *)(unaff_EBX + 0x1d4) != 0) {
        *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
        pAVar9 = ULevel::GetLevelInfo(pUVar32);
        *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
        if (((*(int *)GIsEditor_exref == 0) ||
            (iVar10 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar10 == 0)) &&
           (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
          iVar10 = UModel::PointRegion(pUVar4);
          uVar11 = (uint)*(byte *)(iVar10 + 8);
        }
        else {
          uVar11 = 0;
        }
        *(uint *)(unaff_EBX + 0x1d8) = uVar11;
      }
      if ((*(int *)GIsEditor_exref == 0) &&
         (*(int *)(*(int *)(*(int *)(unaff_EBX + 4) + 0x7c) + 0x6c) == 0)) {
        bVar7 = false;
        unaff_EBP[-0x3f] = 0;
        piVar16 = (int *)unaff_EBP[iVar12 * 0x31d + -0x1187];
LAB_1068ea23:
        do {
          if (piVar16 == (int *)0x0) goto LAB_1068ea81;
          if (unaff_EBP[-0x16] == 0) {
            iVar12 = (**(code **)(*(int *)*piVar16 + 0x20))();
            if (iVar12 == 0) {
              bVar7 = true;
              unaff_EBP[-0x3f] = 1;
              (**(code **)(*(int *)*piVar16 + 8))();
              piVar16 = (int *)piVar16[1];
              goto LAB_1068ea23;
            }
          }
          else {
            bVar7 = true;
            unaff_EBP[-0x3f] = 1;
            (**(code **)(*(int *)*piVar16 + 8))();
            if ((undefined4 *)*piVar16 != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)*piVar16)();
            }
          }
          piVar16 = (int *)piVar16[1];
        } while( true );
      }
      goto LAB_1068eab1;
    }
    unaff_EBP[-1] = 4;
    *(undefined1 *)(unaff_EBP + -1) = 0x1d;
    if (((*(uint *)(*(int *)(*(int *)(unaff_EBX + 4) + 0x3c) + 0x5ac) & 0x40000) != 0) &&
       ((unaff_EBP[-0x16] == 0 ||
        ((*(int *)GIsL2WaterEffectType_exref == 1 && (*(int *)(unaff_EBP[0x11] + 0x208) != 0)))))) {
      pAVar23 = ULevel::GetTerrainInfo((ULevel *)unaff_EBP[-0xc]);
      unaff_EBP[0x1b] = (int)pAVar23;
      if (pAVar23 != (ATerrainInfo *)0x0) {
        iVar12 = unaff_EBP[-0xe];
        pUVar32 = (ULevel *)unaff_EBP[iVar12 + -0xc];
        unaff_EBP[-5] = (int)pUVar32;
        pUVar4 = (UModel *)unaff_EBP[iVar12 + -0x1d];
        unaff_EBP[0x11] = (int)pUVar4;
        *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
        *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
        if (*(int *)(unaff_EBX + 0x1d4) != 0) {
          *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
          pAVar9 = ULevel::GetLevelInfo(pUVar32);
          *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
          if (((*(int *)GIsEditor_exref == 0) ||
              (iVar10 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar10 == 0)) &&
             (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
            iVar10 = UModel::PointRegion(pUVar4);
            uVar11 = (uint)*(byte *)(iVar10 + 8);
          }
          else {
            uVar11 = 0;
          }
          *(uint *)(unaff_EBX + 0x1d8) = uVar11;
          pAVar23 = (ATerrainInfo *)unaff_EBP[0x1b];
        }
        if (*(int *)GIsEditor_exref != 0) {
          ATerrainInfo::CheckComputeDataOnLoad(pAVar23);
        }
        uVar35 = rdtsc();
        unaff_EBP[0x18] = (int)uVar35;
        unaff_EBP[-0x36] = 0;
        unaff_EBP[-0xd] = 0;
        pFVar6 = (FRenderInterface *)unaff_EBP[0x1f];
        while (unaff_EBP[-0xd] < *(int *)(unaff_EBP[0x11] + 0x134)) {
          pAVar21 = ULevel::GetZoneActor((ULevel *)unaff_EBP[-5],unaff_EBP[-0xd]);
          if (((((byte)pAVar21[0x3d8] & 4) != 0) &&
              ((*(int *)(unaff_EBX + 0x1d8) == 0 ||
               (uVar35 = __allshl(),
               ((uint)uVar35 & unaff_EBP[iVar12 * 0x31d + -0x118a]) != 0 ||
               ((uint)((ulonglong)uVar35 >> 0x20) & unaff_EBP[iVar12 * 0x31d + -0x1189]) != 0)))) &&
             (unaff_EBP[-0xd] != *(int *)(unaff_EBX + 0x1dc))) {
            (*(code *)**(undefined4 **)pFVar6)();
            if ((*(byte *)(unaff_EBP[0x1b] + 0x20e0) & 1) != 0) {
              (**(code **)(*(int *)pFVar6 + 0x1c))();
            }
            unaff_EBP[0x17] = DAT_10ddd974;
            if (*(int *)(unaff_EBX + 0x1d8) == 0) {
              iVar10 = iVar12 * 0x31d + -0x128b;
            }
            else {
              iVar10 = iVar12 * 0x31d + unaff_EBP[-0xd] * 4 + -0x128b;
            }
            iStack_20 = 0x1068ece3;
            ATerrainInfo::Render
                      ((ATerrainInfo *)unaff_EBP[0x1b],unaff_EBX,pFVar6,
                       (FVisibilityInterface *)(unaff_EBP + iVar10),
                       (FDynamicLight **)(unaff_EBP + iVar12 * 0x31d + -0x1177),
                       unaff_EBP[iVar12 * 0x31d + -0xf77],
                       (FProjectorRenderInfo **)(unaff_EBP + iVar12 * 0x31d + -0x1077),
                       unaff_EBP[iVar12 * 0x31d + -0xf76]);
            unaff_EBP[-0x36] = unaff_EBP[-0x36] + (DAT_10ddd974 - unaff_EBP[0x17]);
            (**(code **)(*(int *)pFVar6 + 4))();
          }
          unaff_EBP[-0xd] = unaff_EBP[-0xd] + 1;
        }
        piVar16 = (int *)(DAT_10ddd7e0 + DAT_10ddd9d0 * 4);
        uVar35 = rdtsc();
        *piVar16 = *piVar16 + ((int)uVar35 - unaff_EBP[0x18]) + unaff_EBP[-0x36];
      }
    }
    unaff_EBP[-1] = 4;
    if (*(int *)GL2RenderActorLimit_exref < 10000) {
      iVar12 = unaff_EBP[0x19] + -1;
      unaff_EBP[-0x2c] = iVar12;
      while (-1 < iVar12) {
        pUVar32 = (ULevel *)unaff_EBP[iVar12 + -0xc];
        pUVar4 = (UModel *)unaff_EBP[iVar12 + -0x1d];
        *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
        *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
        if (*(int *)(unaff_EBX + 0x1d4) != 0) {
          *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
          pAVar9 = ULevel::GetLevelInfo(pUVar32);
          *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
          if (((*(int *)GIsEditor_exref == 0) ||
              (iVar10 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar10 == 0)) &&
             (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
            iVar10 = UModel::PointRegion(pUVar4);
            uVar11 = (uint)*(byte *)(iVar10 + 8);
          }
          else {
            uVar11 = 0;
          }
          *(uint *)(unaff_EBX + 0x1d8) = uVar11;
        }
        for (puVar17 = (undefined4 *)unaff_EBP[iVar12 * 0x31d + -0x1184];
            puVar17 != (undefined4 *)0x0; puVar17 = (undefined4 *)puVar17[1]) {
          pUVar13 = *(UObject **)*puVar17;
          if (((pUVar13[0x35] == (UObject)0x2) && (*(int *)(pUVar13 + 0x104) != 0)) &&
             (iVar10 = UObject::IsA(pUVar13,&APawn::PrivateStaticClass), iVar10 != 0)) {
            thunk_FUN_106868a0();
          }
        }
        for (piVar16 = (int *)unaff_EBP[iVar12 * 0x31d + -0x1178]; piVar16 != (int *)0x0;
            piVar16 = (int *)piVar16[1]) {
          pUVar13 = (UObject *)**(undefined4 **)(*piVar16 + 8);
          if (((pUVar13[0x35] == (UObject)0x2) && (*(int *)(pUVar13 + 0x104) != 0)) &&
             (iVar10 = UObject::IsA(pUVar13,&APawn::PrivateStaticClass), iVar10 != 0)) {
            thunk_FUN_106868a0();
          }
        }
        for (piVar16 = (int *)unaff_EBP[iVar12 * 0x31d + -0x1179]; piVar16 != (int *)0x0;
            piVar16 = (int *)piVar16[1]) {
          if (((*(int *)(*piVar16 + 0xc) == 0) &&
              (pUVar13 = (UObject *)**(undefined4 **)(*piVar16 + 8), pUVar13[0x35] == (UObject)0x2))
             && ((*(int *)(pUVar13 + 0x104) != 0 &&
                 (iVar12 = UObject::IsA(pUVar13,&APawn::PrivateStaticClass), iVar12 != 0)))) {
            thunk_FUN_106868a0();
          }
        }
        unaff_EBP[-0x2c] = unaff_EBP[-0x2c] + -1;
        iVar12 = unaff_EBP[-0x2c];
      }
      if (0 < unaff_EBP[0x13]) {
        piVar16 = (int *)0x0;
        unaff_EBP[0x15] = 0;
        iVar12 = *(int *)(*(int *)(unaff_EBX + 4) + 0x3c);
        if (*(int *)(iVar12 + 0x3bc) != 0) {
          iVar12 = *(int *)(iVar12 + 0x3bc);
        }
        unaff_EBP[1] = *(int *)(iVar12 + 0x1bc);
        unaff_EBP[2] = *(int *)(iVar12 + 0x1c0);
        unaff_EBP[3] = *(int *)(iVar12 + 0x1c4);
        iVar12 = 0;
        unaff_EBP[-0x72] = 0;
        while (iVar12 < unaff_EBP[0x13]) {
          unaff_EBP[-0xa1] = unaff_EBP[1];
          unaff_EBP[-0xa0] = unaff_EBP[2];
          unaff_EBP[-0x9f] = unaff_EBP[3];
          unaff_EBP[-0x9e] = 0;
          pFVar24 = (FVector *)
                    FPlane::operator-((FPlane *)(*(int *)(unaff_EBP[0x12] + iVar12 * 4) + 0xa8),
                                      (FPlane *)(unaff_EBP + -0x8f));
          fVar36 = FVector::SizeSquared(pFVar24);
          unaff_EBP[0x11] = (int)fVar36;
          for (piVar16 = unaff_EBP + 0x15; *piVar16 != 0; piVar16 = (int *)(*piVar16 + 4)) {
            unaff_EBP[-0xa5] = unaff_EBP[1];
            unaff_EBP[-0xa4] = unaff_EBP[2];
            unaff_EBP[-0xa3] = unaff_EBP[3];
            unaff_EBP[-0xa2] = 0;
            pFVar24 = (FVector *)
                      FPlane::operator-((FPlane *)(*(int *)*piVar16 + 0xa8),
                                        (FPlane *)(unaff_EBP + -0x94));
            fVar36 = FVector::SizeSquared(pFVar24);
            if ((float)unaff_EBP[0x11] <= fVar36) break;
          }
          puVar17 = (undefined4 *)thunk_FUN_10522300();
          if (puVar17 == (undefined4 *)0x0) {
            *piVar16 = 0;
            iVar12 = iVar12 + 1;
            unaff_EBP[-0x72] = iVar12;
            piVar16 = (int *)unaff_EBP[0x15];
          }
          else {
            iVar10 = *piVar16;
            *puVar17 = *(undefined4 *)(unaff_EBP[0x12] + iVar12 * 4);
            puVar17[1] = iVar10;
            *piVar16 = (int)puVar17;
            iVar12 = iVar12 + 1;
            unaff_EBP[-0x72] = iVar12;
            piVar16 = (int *)unaff_EBP[0x15];
          }
        }
        while (piVar16 != (int *)0x0) {
          *(int *)(*piVar16 + 0xf4) = _DAT_10dc1100;
          _DAT_10dc1100 = _DAT_10dc1100 + 1;
          if (((((*(float *)GL2MaxPawnResourceLoad_exref != 0.0) && (*(int *)unaff_EBP[0x15] != 0))
               && (**(int **)unaff_EBP[0x15] != 0)) &&
              ((pAVar25 = (APawn *)thunk_FUN_104b42a0(), *(int *)GIsEditor_exref == 0 &&
               (pAVar25 != (APawn *)0x0)))) &&
             (iVar12 = FNActorResourceLoader::CheckLoadingResource
                                 (&GL2ActorResourceLoader,pAVar25,0), iVar12 == 0)) {
            (**(code **)(*(int *)pAVar25 + 0xf8))();
          }
          piVar16 = *(int **)(unaff_EBP[0x15] + 4);
          unaff_EBP[0x15] = (int)piVar16;
        }
      }
    }
    else if (*(float *)GL2MaxPawnResourceLoad_exref != 0.0) {
      iVar12 = unaff_EBP[0x19] + -1;
      unaff_EBP[-0x2d] = iVar12;
      while (-1 < iVar12) {
        pUVar32 = (ULevel *)unaff_EBP[iVar12 + -0xc];
        pUVar4 = (UModel *)unaff_EBP[iVar12 + -0x1d];
        *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
        *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
        if (*(int *)(unaff_EBX + 0x1d4) != 0) {
          *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
          pAVar9 = ULevel::GetLevelInfo(pUVar32);
          *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
          if (((*(int *)GIsEditor_exref == 0) ||
              (iVar10 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar10 == 0)) &&
             (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
            iVar10 = UModel::PointRegion(pUVar4);
            uVar11 = (uint)*(byte *)(iVar10 + 8);
          }
          else {
            uVar11 = 0;
          }
          *(uint *)(unaff_EBX + 0x1d8) = uVar11;
        }
        for (puVar17 = (undefined4 *)unaff_EBP[iVar12 * 0x31d + -0x1184];
            puVar17 != (undefined4 *)0x0; puVar17 = (undefined4 *)puVar17[1]) {
          pUVar13 = *(UObject **)*puVar17;
          if (((pUVar13[0x35] == (UObject)0x2) && (*(int *)(pUVar13 + 0x104) != 0)) &&
             (iVar10 = UObject::IsA(pUVar13,&APawn::PrivateStaticClass), iVar10 != 0)) {
            thunk_FUN_106868a0();
          }
        }
        for (piVar16 = (int *)unaff_EBP[iVar12 * 0x31d + -0x1178]; piVar16 != (int *)0x0;
            piVar16 = (int *)piVar16[1]) {
          pUVar13 = (UObject *)**(undefined4 **)(*piVar16 + 8);
          if (((pUVar13[0x35] == (UObject)0x2) && (*(int *)(pUVar13 + 0x104) != 0)) &&
             (iVar10 = UObject::IsA(pUVar13,&APawn::PrivateStaticClass), iVar10 != 0)) {
            thunk_FUN_106868a0();
          }
        }
        for (piVar16 = (int *)unaff_EBP[iVar12 * 0x31d + -0x1179]; piVar16 != (int *)0x0;
            piVar16 = (int *)piVar16[1]) {
          if (((*(int *)(*piVar16 + 0xc) == 0) &&
              (pUVar13 = (UObject *)**(undefined4 **)(*piVar16 + 8), pUVar13[0x35] == (UObject)0x2))
             && ((*(int *)(pUVar13 + 0x104) != 0 &&
                 (iVar12 = UObject::IsA(pUVar13,&APawn::PrivateStaticClass), iVar12 != 0)))) {
            thunk_FUN_106868a0();
          }
        }
        unaff_EBP[-0x2d] = unaff_EBP[-0x2d] + -1;
        iVar12 = unaff_EBP[-0x2d];
      }
      if (0 < unaff_EBP[0x13]) {
        piVar16 = (int *)0x0;
        unaff_EBP[0x1a] = 0;
        iVar12 = *(int *)(*(int *)(unaff_EBX + 4) + 0x3c);
        if (*(int *)(iVar12 + 0x3bc) != 0) {
          iVar12 = *(int *)(iVar12 + 0x3bc);
        }
        unaff_EBP[1] = *(int *)(iVar12 + 0x1bc);
        unaff_EBP[2] = *(int *)(iVar12 + 0x1c0);
        unaff_EBP[3] = *(int *)(iVar12 + 0x1c4);
        iVar12 = 0;
        unaff_EBP[-0x54] = 0;
        while (iVar12 < unaff_EBP[0x13]) {
          unaff_EBP[-0x99] = unaff_EBP[1];
          unaff_EBP[-0x98] = unaff_EBP[2];
          unaff_EBP[-0x97] = unaff_EBP[3];
          unaff_EBP[-0x96] = 0;
          pFVar24 = (FVector *)
                    FPlane::operator-((FPlane *)(*(int *)(unaff_EBP[0x12] + iVar12 * 4) + 0xa8),
                                      (FPlane *)(unaff_EBP + -0x8f));
          fVar36 = FVector::SizeSquared(pFVar24);
          unaff_EBP[0x11] = (int)fVar36;
          for (piVar16 = unaff_EBP + 0x1a; *piVar16 != 0; piVar16 = (int *)(*piVar16 + 4)) {
            unaff_EBP[-0x9d] = unaff_EBP[1];
            unaff_EBP[-0x9c] = unaff_EBP[2];
            unaff_EBP[-0x9b] = unaff_EBP[3];
            unaff_EBP[-0x9a] = 0;
            pFVar24 = (FVector *)
                      FPlane::operator-((FPlane *)(*(int *)*piVar16 + 0xa8),
                                        (FPlane *)(unaff_EBP + -0x94));
            fVar36 = FVector::SizeSquared(pFVar24);
            if ((float)unaff_EBP[0x11] <= fVar36) break;
          }
          puVar17 = (undefined4 *)thunk_FUN_10522300();
          if (puVar17 == (undefined4 *)0x0) {
            *piVar16 = 0;
            iVar12 = iVar12 + 1;
            unaff_EBP[-0x54] = iVar12;
            piVar16 = (int *)unaff_EBP[0x1a];
          }
          else {
            iVar10 = *piVar16;
            *puVar17 = *(undefined4 *)(unaff_EBP[0x12] + iVar12 * 4);
            puVar17[1] = iVar10;
            *piVar16 = (int)puVar17;
            iVar12 = iVar12 + 1;
            unaff_EBP[-0x54] = iVar12;
            piVar16 = (int *)unaff_EBP[0x1a];
          }
        }
        while (piVar16 != (int *)0x0) {
          *(int *)(*piVar16 + 0xf4) = _DAT_10dc1100;
          _DAT_10dc1100 = _DAT_10dc1100 + 1;
          if ((((*(int *)unaff_EBP[0x1a] != 0) && (**(int **)unaff_EBP[0x1a] != 0)) &&
              (pAVar25 = (APawn *)thunk_FUN_104b42a0(), *(int *)GIsEditor_exref == 0)) &&
             ((pAVar25 != (APawn *)0x0 &&
              (iVar12 = FNActorResourceLoader::CheckLoadingResource
                                  (&GL2ActorResourceLoader,pAVar25,0), iVar12 == 0)))) {
            (**(code **)(*(int *)pAVar25 + 0xf8))();
          }
          piVar16 = *(int **)(unaff_EBP[0x1a] + 4);
          unaff_EBP[0x1a] = (int)piVar16;
        }
      }
    }
    piVar16 = (int *)unaff_EBP[0x1f];
    (**(code **)*piVar16)();
    iVar12 = *piVar16;
    pcVar28 = Identity_exref;
    puVar17 = auStack_40;
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar17 = *(undefined4 *)pcVar28;
      pcVar28 = pcVar28 + 4;
      puVar17 = puVar17 + 1;
    }
    (**(code **)(iVar12 + 0x40))();
    *(undefined1 *)(unaff_EBP + -1) = 0x1f;
    iVar12 = unaff_EBP[0x19];
    while( true ) {
      iVar10 = iVar12 + -1;
      unaff_EBP[-0x40] = iVar10;
      if (iVar10 < 0) break;
      pUVar32 = (ULevel *)unaff_EBP[iVar12 + -0xd];
      unaff_EBP[0x1b] = (int)pUVar32;
      pUVar4 = (UModel *)unaff_EBP[iVar12 + -0x1e];
      piVar16 = unaff_EBP + iVar10 * 0x31d + -0x1292;
      *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
      *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
      if (*(int *)(unaff_EBX + 0x1d4) != 0) {
        *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
        pAVar9 = ULevel::GetLevelInfo(pUVar32);
        *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
        if (((*(int *)GIsEditor_exref == 0) ||
            (iVar12 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar12 == 0)) &&
           (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
          iVar12 = UModel::PointRegion(pUVar4,unaff_EBP + -0x14,
                                       *(undefined4 *)(*(int *)(unaff_EBX + 0x1d4) + 0xe0),
                                       *(undefined4 *)(unaff_EBX + 0x194));
          uVar11 = (uint)*(byte *)(iVar12 + 8);
        }
        else {
          uVar11 = 0;
        }
        *(uint *)(unaff_EBX + 0x1d8) = uVar11;
      }
      for (iVar12 = piVar16[0x115]; iVar12 != 0; iVar12 = *(int *)(iVar12 + 4)) {
        thunk_FUN_10669de0();
      }
      if (*(int *)GIsEditor_exref != 0) {
        for (iVar12 = 0; unaff_EBP[-0x82] = iVar12, iVar12 < *(int *)(unaff_EBP[0x1b] + 0x4c);
            iVar12 = iVar12 + 1) {
          if ((*(int *)(*(int *)(unaff_EBP[0x1b] + 0x48) + iVar12 * 4) != 0) &&
             (iVar10 = (**(code **)(*(int *)unaff_EBP[0x1e] + 0x2c))(), iVar10 != 0)) {
            this_00 = *(ULevelObject **)(*(int *)(unaff_EBP[0x1b] + 0x48) + iVar12 * 4);
            (*(code *)**(undefined4 **)piVar16[1])();
            (**(code **)(*(int *)piVar16[1] + 0x1c))();
            ULevelObject::Render(this_00,(FLevelSceneNode *)*piVar16,(FRenderInterface *)piVar16[1])
            ;
            (**(code **)(*(int *)piVar16[1] + 4))();
          }
        }
      }
      for (puVar17 = (undefined4 *)piVar16[0x10e]; puVar17 != (undefined4 *)0x0;
          puVar17 = (undefined4 *)puVar17[1]) {
        FUN_10687d00();
        (**(code **)(**(int **)*puVar17 + 0xcc))();
      }
      unaff_EBX = (FLevelSceneNode *)unaff_EBP[0x1e];
      thunk_FUN_10664de0();
      iVar12 = unaff_EBP[-0x40];
    }
    unaff_EBP[-1] = 4;
    *(undefined1 *)(unaff_EBP + -1) = 0x21;
    piVar16 = (int *)unaff_EBP[0x1f];
    iVar12 = DAT_10dc10f8;
    if (*(int *)(*(int *)(unaff_EBX + 4) + 0x16c) == 0) {
      for (; iVar12 != 0; iVar12 = *(int *)(iVar12 + 4)) {
        thunk_FUN_106656e0();
      }
    }
    DAT_10dc10f8 = 0;
    unaff_EBP[-1] = 4;
    (**(code **)(*piVar16 + 4))();
    *(undefined1 *)(unaff_EBP + -1) = 0x23;
    if ((*(int *)GIsEditor_exref == 0) &&
       (*(int *)(*(int *)(*(int *)(unaff_EBX + 4) + 0x7c) + 0x6c) == 0)) {
code_r0x1068fb6a:
      unaff_EBP[-1] = 4;
      thunk_FUN_10685340();
      *(undefined1 *)(unaff_EBP + -1) = 0x2d;
      thunk_FUN_10685340();
      *(undefined1 *)(unaff_EBP + -1) = 0x2e;
      thunk_FUN_10685340();
      *(undefined1 *)(unaff_EBP + -1) = 0x2f;
      *(undefined1 *)(unaff_EBP + -1) = 0x30;
      _eh_vector_constructor_iterator_
                (unaff_EBP + -0x25c1,0xc74,5,(_func_void_void_ptr *)&LAB_10312314,thunk_FUN_10686790
                );
      *(undefined1 *)(unaff_EBP + -1) = 0x31;
      iVar10 = 0;
      unaff_EBP[-0x74] = 0;
      iVar12 = unaff_EBP[0x19];
      while (iVar10 < iVar12) {
        unaff_EBP[iVar10 + -0x90] = unaff_EBP[iVar10 + -0xc];
        unaff_EBP[iVar10 + -0x95] = unaff_EBP[iVar10 + -0x1d];
        thunk_FUN_1068c0a0();
        iVar10 = iVar10 + 1;
        unaff_EBP[-0x74] = iVar10;
      }
      if (*(int *)(unaff_EBX + 4) != 0) {
        iVar10 = *(int *)(*(int *)(unaff_EBX + 4) + 0x3c);
        iVar29 = *(int *)(iVar10 + 0x3bc);
        if (iVar29 == 0) {
          unaff_EBP[-0x3a] = *(int *)(iVar10 + 0x1bc);
          unaff_EBP[-0x39] = *(int *)(iVar10 + 0x1c0);
          unaff_EBP[-0x38] = *(int *)(iVar10 + 0x1c4);
        }
        else {
          unaff_EBP[-0x3a] = *(int *)(iVar29 + 0x1bc);
          unaff_EBP[-0x39] = *(int *)(iVar29 + 0x1c0);
          unaff_EBP[-0x38] = *(int *)(iVar29 + 0x1c4);
        }
        unaff_EBP[-0x11] = 0;
        while (unaff_EBP[-0x11] < iVar12 + -1) {
          iVar12 = unaff_EBP[-0x11];
          while( true ) {
            iVar10 = iVar12;
            iVar12 = iVar10 + 1;
            unaff_EBP[-0x58] = iVar12;
            if (unaff_EBP[0x19] <= iVar12) break;
            iVar29 = unaff_EBP[-0x11];
            pUVar32 = (ULevel *)unaff_EBP[iVar29 + -0xc];
            ULevel::GetTerrainInfo(pUVar32);
            fVar33 = (float10)thunk_FUN_1048e290();
            unaff_EBP[0x11] = (int)(float)fVar33;
            ULevel::GetTerrainInfo((ULevel *)unaff_EBP[iVar10 + -0xb]);
            fVar33 = (float10)thunk_FUN_1048e290();
            unaff_EBP[-5] = (int)(float)fVar33;
            if ((float)unaff_EBP[-5] < (float)unaff_EBP[0x11]) {
              unaff_EBP[iVar29 + -0xc] = unaff_EBP[iVar10 + -0xb];
              unaff_EBP[iVar10 + -0xb] = (int)pUVar32;
              iVar29 = unaff_EBP[unaff_EBP[-0x11] + -0x1d];
              unaff_EBP[unaff_EBP[-0x11] + -0x1d] = unaff_EBP[iVar10 + -0x1c];
              unaff_EBP[iVar10 + -0x1c] = iVar29;
              thunk_FUN_1068c2b0();
              *(undefined1 *)(unaff_EBP + -1) = 0x32;
              thunk_FUN_1068c0a0();
              thunk_FUN_1068c0a0();
              *(undefined1 *)(unaff_EBP + -1) = 0x31;
              thunk_FUN_10686790();
            }
          }
          unaff_EBP[-0x11] = unaff_EBP[-0x11] + 1;
          unaff_EBX = (FLevelSceneNode *)unaff_EBP[0x1e];
          iVar12 = unaff_EBP[0x19];
        }
      }
      unaff_EBP[-0x1e] = iVar12 + -1;
      while (-1 < unaff_EBP[-0x1e]) {
        iVar12 = unaff_EBP[-0x1e];
        pUVar32 = (ULevel *)unaff_EBP[iVar12 + -0xc];
        unaff_EBP[0x1b] = (int)pUVar32;
        pUVar4 = (UModel *)unaff_EBP[iVar12 + -0x1d];
        unaff_EBP[-0x42] = (int)pUVar4;
        piVar16 = unaff_EBP + iVar12 * 0x31d + -0x1292;
        unaff_EBP[-0x5c] = (int)piVar16;
        *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
        *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
        if (*(int *)(unaff_EBX + 0x1d4) != 0) {
          *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
          pAVar9 = ULevel::GetLevelInfo(pUVar32);
          *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
          if (((*(int *)GIsEditor_exref == 0) ||
              (iVar12 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar12 == 0)) &&
             (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
            iVar12 = UModel::PointRegion(pUVar4,unaff_EBP + -0x14,
                                         *(undefined4 *)(*(int *)(unaff_EBX + 0x1d4) + 0xe0),
                                         *(undefined4 *)(unaff_EBX + 0x194));
            uVar11 = (uint)*(byte *)(iVar12 + 8);
          }
          else {
            uVar11 = 0;
          }
          *(uint *)(unaff_EBX + 0x1d8) = uVar11;
        }
        for (piVar18 = (int *)piVar16[0x11a]; unaff_EBP[-0x8a] = (int)piVar18, piVar18 != (int *)0x0
            ; piVar18 = (int *)piVar18[1]) {
          *(undefined1 *)(unaff_EBP + -1) = 0x33;
          FUN_10687d00();
          (**(code **)(*(int *)**(undefined4 **)(*piVar18 + 8) + 0xcc))();
          unaff_EBP[-1] = 0x31;
        }
        piVar18 = (int *)piVar16[0x119];
        unaff_EBP[-0x20] = (int)piVar18;
        while (piVar18 != (int *)0x0) {
          if (*(int *)(*piVar18 + 0xc) == 0) {
            *(undefined1 *)(unaff_EBP + -1) = 0x37;
            piVar20 = *(int **)(*piVar18 + 8);
            if (*(char *)(*piVar20 + 0x35) == '\n') {
              if ((piVar20[0x31] & 0x100U) == 0) {
                thunk_FUN_106868a0();
              }
              else {
                iVar12 = (**(code **)(*(int *)unaff_EBX + 0x10))();
                if ((iVar12 != 0) &&
                   (iVar12 = (**(code **)(**(int **)(*(int *)(unaff_EBX + 4) + 0x154) + 0xec))(),
                   iVar12 != 0)) {
                  thunk_FUN_106868a0();
                }
              }
            }
            else {
              if ((((*(byte *)(piVar20 + 0x31) & 2) != 0) &&
                  (iVar12 = (**(code **)(*(int *)unaff_EBX + 0x10))(), iVar12 != 0)) &&
                 ((*(int *)GL2GlowEffect_exref != 0 &&
                  ((iVar12 = (**(code **)(**(int **)(*(int *)(unaff_EBX + 4) + 0x154) + 0xec))(),
                   iVar12 != 0 && (0 < *(int *)GL2PostProcessType_exref)))))) {
                thunk_FUN_106868a0();
              }
              FUN_10687d00();
              (**(code **)(*(int *)**(undefined4 **)(*piVar18 + 8) + 0xcc))();
              if (piVar16[0x113] != 0) {
                thunk_FUN_10664de0();
              }
            }
            unaff_EBP[-1] = 0x31;
          }
          else {
            *(undefined1 *)(unaff_EBP + -1) = 0x35;
            (*(code *)**(undefined4 **)unaff_EBP[0x1f])();
            thunk_FUN_1064f320();
            piVar16 = *(int **)unaff_EBP[-0x20];
            piVar18 = unaff_EBP + -0xd0;
            for (iVar12 = 9; iVar12 != 0; iVar12 = iVar12 + -1) {
              *piVar18 = *piVar16;
              piVar16 = piVar16 + 1;
              piVar18 = piVar18 + 1;
            }
            unaff_EBP[-0xd6] =
                 *(int *)(*(int *)(unaff_EBP[-0x42] + 100) + unaff_EBP[-0xcc] * 0x78 + 0x60);
            unaff_EBP[-0xd3] = (int)(unaff_EBP + -0xcc);
            thunk_FUN_1066bac0(unaff_EBP[-0xcc],unaff_EBP[-0xcb],unaff_EBP[-0xca],unaff_EBP[-0xc9]);
            piVar16 = (int *)unaff_EBP[0x1f];
            thunk_FUN_10669de0();
            (**(code **)(*piVar16 + 4))();
            unaff_EBP[-1] = 0x31;
          }
          *(undefined1 *)(unaff_EBP + -1) = 0x39;
          iVar12 = DAT_10dc10f8;
          if (*(int *)(*(int *)(unaff_EBX + 4) + 0x16c) == 0) {
            for (; iVar12 != 0; iVar12 = *(int *)(iVar12 + 4)) {
              thunk_FUN_106656e0();
            }
          }
          DAT_10dc10f8 = 0;
          unaff_EBP[-1] = 0x31;
          piVar18 = *(int **)(unaff_EBP[-0x20] + 4);
          unaff_EBP[-0x20] = (int)piVar18;
          piVar16 = (int *)unaff_EBP[-0x5c];
        }
        for (piVar16 = (int *)piVar16[0x10b]; piVar16 != (int *)0x0; piVar16 = (int *)piVar16[1]) {
          if (unaff_EBP[-0x16] == 0) {
            iVar12 = (**(code **)(*(int *)*piVar16 + 0x20))();
            if (iVar12 != 0) {
              *(int *)(iVar12 + 0x1cc) = unaff_EBP[0x1b];
              (**(code **)(*(int *)*piVar16 + 8))();
            }
            if ((undefined4 *)*piVar16 != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)*piVar16)();
            }
          }
        }
        unaff_EBP[-0x1e] = unaff_EBP[-0x1e] + -1;
        iVar12 = unaff_EBP[0x19];
      }
      for (iVar10 = 0; unaff_EBP[-0x78] = iVar10, iVar10 < iVar12; iVar10 = iVar10 + 1) {
        unaff_EBP[iVar10 + -0xc] = unaff_EBP[iVar10 + -0x90];
        unaff_EBP[iVar10 + -0x1d] = unaff_EBP[iVar10 + -0x95];
        thunk_FUN_1068c0a0();
      }
      *(undefined1 *)(unaff_EBP + -1) = 0x30;
      _eh_vector_destructor_iterator_(unaff_EBP + -0x25c1,0xc74,5,thunk_FUN_10686790);
      unaff_EBP[-1] = 0x2f;
      DAT_10dc10f8 = unaff_EBP[4];
      *(undefined1 *)(unaff_EBP + -1) = 0x3c;
      unaff_EBP[-0x37] = 0;
      iVar12 = 0;
      while (-1 < iVar12) {
        pUVar32 = (ULevel *)unaff_EBP[iVar12 + -0xc];
        unaff_EBP[0x11] = (int)pUVar32;
        pUVar4 = (UModel *)unaff_EBP[iVar12 + -0x1d];
        unaff_EBP[4] = (int)pUVar4;
        unaff_EBP[0x1b] = (int)(unaff_EBP + iVar12 * 0x31d + -0x1292);
        *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
        *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
        if (*(int *)(unaff_EBX + 0x1d4) != 0) {
          *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
          pAVar9 = ULevel::GetLevelInfo(pUVar32);
          *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
          if (((*(int *)GIsEditor_exref == 0) ||
              (iVar12 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar12 == 0)) &&
             (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
            iVar12 = UModel::PointRegion(pUVar4,unaff_EBP + -0x14,
                                         *(undefined4 *)(*(int *)(unaff_EBX + 0x1d4) + 0xe0),
                                         *(undefined4 *)(unaff_EBX + 0x194));
            uVar11 = (uint)*(byte *)(iVar12 + 8);
          }
          else {
            uVar11 = 0;
          }
          *(uint *)(unaff_EBX + 0x1d8) = uVar11;
        }
        pUVar13 = UObject::GetOuter(*(UObject **)(unaff_EBX + 4));
        if (((*(int *)(pUVar13 + 0x60) != 0) &&
            ((*(uint *)(*(int *)(*(int *)(unaff_EBX + 4) + 0x3c) + 0x5ac) & 0x40000) != 0)) &&
           (unaff_EBP[-0x16] == 0)) {
          uVar35 = rdtsc();
          unaff_EBP[-5] = (int)uVar35;
          (*(code *)**(undefined4 **)unaff_EBP[0x1f])();
          iVar12 = 0;
          unaff_EBP[-0x35] = 0;
          while (iVar12 < *(int *)(unaff_EBP[4] + 0x134)) {
            pAVar21 = ULevel::GetZoneActor(pUVar32,iVar12);
            unaff_EBP[0x17] = (int)pAVar21;
            if (((((byte)pAVar21[0x3d8] & 4) != 0) &&
                ((*(int *)(unaff_EBX + 0x1d8) == 0 ||
                 (uVar35 = __allshl(),
                 ((uint)uVar35 & *(uint *)(unaff_EBP[0x1b] + 0x420)) != 0 ||
                 ((uint)((ulonglong)uVar35 >> 0x20) & *(uint *)(unaff_EBP[0x1b] + 0x424)) != 0))))
               && (iVar12 != *(int *)(unaff_EBX + 0x1dc))) {
              iVar10 = 0;
              unaff_EBP[-0x44] = 0;
              while (iVar10 < *(int *)(unaff_EBP[0x17] + 0x3e0)) {
                pAVar23 = *(ATerrainInfo **)(*(int *)(unaff_EBP[0x17] + 0x3dc) + iVar10 * 4);
                if (((byte)pAVar23[0x20e0] & 1) != 0) {
                  (**(code **)(*(int *)unaff_EBP[0x1f] + 0x1c))();
                }
                if ((*(int *)GIsEditor_exref != 0) || (*(int *)GL2KeepMinFrameRate_exref == 0)) {
                  if (*(int *)(unaff_EBX + 0x1d8) == 0) {
                    pFVar27 = (FVisibilityInterface *)(unaff_EBP[0x1b] + 0x1c);
                  }
                  else {
                    pFVar27 = (FVisibilityInterface *)
                              (unaff_EBP[-0x35] * 0x10 + 0x1c + unaff_EBP[0x1b]);
                  }
                  ATerrainInfo::RenderDecorations
                            (pAVar23,unaff_EBX,(FRenderInterface *)unaff_EBP[0x1f],pFVar27);
                }
                if (((byte)pAVar23[0x20e0] & 1) != 0) {
                  (**(code **)(*(int *)unaff_EBP[0x1f] + 0x1c))();
                }
                iVar10 = iVar10 + 1;
                unaff_EBP[-0x44] = iVar10;
                iVar12 = unaff_EBP[-0x35];
              }
            }
            iVar12 = iVar12 + 1;
            unaff_EBP[-0x35] = iVar12;
            pUVar32 = (ULevel *)unaff_EBP[0x11];
          }
          (**(code **)(*(int *)unaff_EBP[0x1f] + 4))();
          piVar16 = (int *)(DAT_10ddd7e0 + DAT_10ddd9e4 * 4);
          uVar35 = rdtsc();
          *piVar16 = *piVar16 + ((int)uVar35 - unaff_EBP[-5]);
        }
        unaff_EBP[-0x37] = unaff_EBP[-0x37] + -1;
        iVar12 = unaff_EBP[-0x37];
      }
      unaff_EBP[-1] = 0x2f;
      *(undefined1 *)(unaff_EBP + -1) = 0x3e;
      if (0 < unaff_EBP[9]) {
        puVar17 = (undefined4 *)0x0;
        unaff_EBP[0x17] = 0;
        unaff_EBP[-0xf] = unaff_EBP[9] + -1;
        while (-1 < unaff_EBP[-0xf]) {
          piVar16 = unaff_EBP + 0x17;
          unaff_EBP[-0x62] = (int)piVar16;
          iVar12 = unaff_EBP[8];
          if (((*(char *)(**(int **)(iVar12 + unaff_EBP[-0xf] * 4) + 0x35) == '\n') &&
              (iVar10 = thunk_FUN_10685210(*(undefined4 *)
                                            (**(int **)(iVar12 + unaff_EBP[-0xf] * 4) + 0x2cc)),
              -1 < iVar10)) && (iVar10 < unaff_EBP[0x19])) {
            iVar10 = unaff_EBP[iVar10 * 0x31d + -0x1292];
            unaff_EBP[-0x94] = *(int *)(iVar10 + 0x194);
            unaff_EBP[-0x93] = *(int *)(iVar10 + 0x198);
            unaff_EBP[-0x92] = *(int *)(iVar10 + 0x19c);
            unaff_EBP[-0x91] = 0;
            pFVar24 = (FVector *)
                      FPlane::operator-((FPlane *)(*(int *)(iVar12 + unaff_EBP[-0xf] * 4) + 0xa8),
                                        (FPlane *)(unaff_EBP + -0x9d));
            fVar36 = FVector::SizeSquared(pFVar24);
            unaff_EBP[4] = (int)fVar36;
            iVar12 = unaff_EBP[0x19];
            while (*piVar16 != 0) {
              iVar10 = thunk_FUN_10685210(*(undefined4 *)(**(int **)*piVar16 + 0xe4),
                                          unaff_EBP + -0xc);
              if ((-1 < iVar10) && (iVar10 < iVar12)) {
                iVar10 = unaff_EBP[iVar10 * 0x31d + -0x1292];
                unaff_EBP[-0x8f] = *(int *)(iVar10 + 0x194);
                unaff_EBP[-0x8e] = *(int *)(iVar10 + 0x198);
                unaff_EBP[-0x8d] = *(int *)(iVar10 + 0x19c);
                unaff_EBP[-0x8c] = 0;
                pFVar24 = (FVector *)
                          FPlane::operator-((FPlane *)(*(int *)*piVar16 + 0xa8),
                                            (FPlane *)(unaff_EBP + -0x99));
                fVar36 = FVector::SizeSquared(pFVar24);
                if (fVar36 <= (float)unaff_EBP[4]) break;
                piVar16 = (int *)(*piVar16 + 4);
                unaff_EBP[-0x62] = (int)piVar16;
              }
            }
          }
          puVar17 = (undefined4 *)thunk_FUN_10522300(8,&DAT_10db1d98);
          if (puVar17 == (undefined4 *)0x0) {
            *piVar16 = 0;
            unaff_EBP[-0xf] = unaff_EBP[-0xf] + -1;
            puVar17 = (undefined4 *)unaff_EBP[0x17];
          }
          else {
            iVar12 = *piVar16;
            *puVar17 = *(undefined4 *)(unaff_EBP[8] + unaff_EBP[-0xf] * 4);
            puVar17[1] = iVar12;
            *piVar16 = (int)puVar17;
            unaff_EBP[-0xf] = unaff_EBP[-0xf] + -1;
            puVar17 = (undefined4 *)unaff_EBP[0x17];
          }
        }
        while (puVar17 != (undefined4 *)0x0) {
          iVar12 = thunk_FUN_10685210(*(undefined4 *)(*(int *)*puVar17 + 0x2cc));
          if ((-1 < iVar12) && (iVar12 < unaff_EBP[0x19])) {
            FUN_10687d00();
            puVar17 = (undefined4 *)unaff_EBP[0x17];
          }
          puVar17 = (undefined4 *)puVar17[1];
          unaff_EBP[0x17] = (int)puVar17;
        }
      }
      unaff_EBP[-1] = 0x2f;
      *(undefined1 *)(unaff_EBP + -1) = 0x40;
      if (0 < unaff_EBP[0xf]) {
        if (FPlayerSceneNode::OcclusionTex != (FAuxRenderTarget *)0x0) {
          piVar16 = (int *)unaff_EBP[0x1f];
          (**(code **)*piVar16)();
          (**(code **)(*piVar16 + 8))();
          (**(code **)(*piVar16 + 0xc))(0,0,*(undefined4 *)(*(int *)(unaff_EBX + 4) + 0x94));
          (**(code **)(*piVar16 + 0x88))(1);
          iVar10 = unaff_EBP[0xf] + -1;
          unaff_EBP[-0x7a] = iVar10;
          iVar12 = unaff_EBP[0xe];
          while (-1 < iVar10) {
            iVar29 = thunk_FUN_10685210(*(undefined4 *)(**(int **)(iVar12 + iVar10 * 4) + 0x2cc),
                                        unaff_EBP + -0xc,unaff_EBP[0x19]);
            if ((-1 < iVar29) && (iVar29 < unaff_EBP[0x19])) {
              FUN_10687d00(unaff_EBP + iVar29 * 0x31d + -0x1292,*(undefined4 *)(iVar12 + iVar10 * 4)
                          );
              iVar12 = unaff_EBP[0xe];
            }
            iVar10 = iVar10 + -1;
            unaff_EBP[-0x7a] = iVar10;
          }
          (**(code **)(*(int *)unaff_EBP[0x1f] + 4))();
        }
        (**(code **)(*(int *)unaff_EBP[0x1f] + 0x88))();
        iVar10 = unaff_EBP[0xf] + -1;
        unaff_EBP[-100] = iVar10;
        iVar12 = unaff_EBP[0xe];
        while (-1 < iVar10) {
          iVar29 = thunk_FUN_10685210(*(undefined4 *)(**(int **)(iVar12 + iVar10 * 4) + 0x2cc));
          if ((-1 < iVar29) && (iVar29 < unaff_EBP[0x19])) {
            FUN_10687d00();
            iVar12 = unaff_EBP[0xe];
          }
          iVar10 = iVar10 + -1;
          unaff_EBP[-100] = iVar10;
        }
      }
      unaff_EBP[-1] = 0x2f;
      *(undefined1 *)(unaff_EBP + -1) = 0x42;
      piVar16 = (int *)unaff_EBP[0x1f];
      if (0 < unaff_EBP[0xc]) {
        (**(code **)*piVar16)();
        if (FPlayerSceneNode::GlowAspectTex != (FAuxRenderTarget *)0x0) {
          (**(code **)(*piVar16 + 8))();
          (**(code **)(*piVar16 + 0xc))(0,0,*(undefined4 *)(*(int *)(unaff_EBX + 4) + 0x94));
          *(undefined1 *)(unaff_EBP + 0x1b) = 0;
          *(undefined1 *)((int)unaff_EBP + 0x6d) = 0;
          *(undefined1 *)((int)unaff_EBP + 0x6e) = 0;
          *(undefined1 *)((int)unaff_EBP + 0x6f) = 0;
          iVar12 = *piVar16;
          iVar10 = UViewport::IsDepthComplexity(*(UViewport **)(unaff_EBX + 4));
          (**(code **)(iVar12 + 0x10))(1,unaff_EBP[0x1b],0,0,1,~(-(uint)(iVar10 != 0) & 0xf));
          if (_DAT_10dc9220 == 0) {
            unaff_EBP[4] = (int)&stack0xffffffb4;
            FName::FName((FName *)&stack0xffffffb4,0);
            _DAT_10dc9220 = thunk_FUN_1052eb00(&UL2ColorModifier::PrivateStaticClass,0xffffffff);
            thunk_FUN_10530420();
            *(undefined1 *)(_DAT_10dc9220 + 0x584) = 1;
            *(undefined1 *)(_DAT_10dc9220 + 0x585) = 2;
          }
          if (_DAT_10dc921c == 0) {
            unaff_EBP[4] = (int)&stack0xffffffb4;
            FName::FName((FName *)&stack0xffffffb4,0);
            _DAT_10dc921c = thunk_FUN_1053d3f0(&UFinalBlend::PrivateStaticClass,0xffffffff);
            thunk_FUN_10530420();
            *(undefined1 *)(_DAT_10dc921c + 0x57c) = 6;
            *(uint *)(_DAT_10dc921c + 0x580) = *(uint *)(_DAT_10dc921c + 0x580) & 0xfffffffe;
            *(uint *)(_DAT_10dc921c + 0x580) = *(uint *)(_DAT_10dc921c + 0x580) | 2;
            *(uint *)(_DAT_10dc921c + 0x580) = *(uint *)(_DAT_10dc921c + 0x580) | 8;
            *(uint *)(_DAT_10dc921c + 0x580) = *(uint *)(_DAT_10dc921c + 0x580) | 4;
            *(undefined1 *)(_DAT_10dc921c + 0x584) = 1;
            *(int *)(_DAT_10dc921c + 0x578) = _DAT_10dc9220;
          }
          iVar12 = unaff_EBP[0xc];
          while( true ) {
            iVar12 = iVar12 + -1;
            unaff_EBP[-0x30] = iVar12;
            if (iVar12 < 0) break;
            *(undefined4 *)(_DAT_10dc9220 + 0x57c) =
                 *(undefined4 *)(*(int *)(unaff_EBP[0xb] + iVar12 * 4) + 0xbc);
            *(undefined4 *)(_DAT_10dc9220 + 0x578) = 0;
            iVar10 = thunk_FUN_10685210(*(undefined4 *)
                                         (**(int **)(unaff_EBP[0xb] + iVar12 * 4) + 0x2cc));
            if ((-1 < iVar10) && (iVar10 < unaff_EBP[0x19])) {
              (**(code **)(*piVar16 + 0x90))();
              FUN_10687d00(unaff_EBP + iVar10 * 0x31d + -0x1292);
              (**(code **)(*piVar16 + 0x90))();
              iVar12 = unaff_EBP[-0x30];
            }
          }
        }
        (**(code **)(*piVar16 + 4))();
      }
      unaff_EBP[-1] = 0x2f;
      *(undefined1 *)(unaff_EBP + -1) = 0x44;
      if (*(int *)(unaff_EBX + 0xc) == 0) {
        pUVar32 = (ULevel *)unaff_EBP[unaff_EBP[-0xe] + -0xc];
        iVar12 = unaff_EBP[unaff_EBP[-0xe] + -0x1d];
        unaff_EBP[4] = iVar12;
        *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
        *(int *)(unaff_EBX + 0x1d0) = iVar12;
        if (*(int *)(unaff_EBX + 0x1d4) != 0) {
          *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
          pAVar9 = ULevel::GetLevelInfo(pUVar32);
          *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
          if (((*(int *)GIsEditor_exref == 0) ||
              (iVar12 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar12 == 0)) &&
             (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
            iVar12 = UModel::PointRegion((UModel *)unaff_EBP[4],unaff_EBP + -0x14,
                                         *(undefined4 *)(*(int *)(unaff_EBX + 0x1d4) + 0xe0),
                                         *(undefined4 *)(unaff_EBX + 0x194));
            uVar11 = (uint)*(byte *)(iVar12 + 8);
          }
          else {
            uVar11 = 0;
          }
          *(uint *)(unaff_EBX + 0x1d8) = uVar11;
        }
        ULevel::GetTerrainInfo(pUVar32);
        thunk_FUN_107320d0(unaff_EBX);
        ULevel::GetTerrainInfo(pUVar32);
        thunk_FUN_1072eb30(unaff_EBX);
        ULevel::GetTerrainInfo(pUVar32);
        thunk_FUN_1072c690(unaff_EBX);
      }
      unaff_EBP[-1] = 0x2f;
      *(undefined1 *)(unaff_EBP + -1) = 0x46;
      unaff_EBP[-0x21] = unaff_EBP[0x19] + -1;
      while (-1 < unaff_EBP[-0x21]) {
        pUVar32 = (ULevel *)unaff_EBP[unaff_EBP[-0x21] + -0xc];
        pUVar4 = (UModel *)unaff_EBP[unaff_EBP[-0x21] + -0x1d];
        *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
        *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
        if (*(int *)(unaff_EBX + 0x1d4) != 0) {
          *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
          pAVar9 = ULevel::GetLevelInfo(pUVar32);
          *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
          if (((*(int *)GIsEditor_exref == 0) ||
              (iVar12 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar12 == 0)) &&
             (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
            iVar12 = UModel::PointRegion(pUVar4,unaff_EBP + -0x14,
                                         *(undefined4 *)(*(int *)(unaff_EBX + 0x1d4) + 0xe0),
                                         *(undefined4 *)(unaff_EBX + 0x194));
            uVar11 = (uint)*(byte *)(iVar12 + 8);
          }
          else {
            uVar11 = 0;
          }
          *(uint *)(unaff_EBX + 0x1d8) = uVar11;
        }
        iVar12 = (**(code **)(*(int *)unaff_EBX + 0x18))();
        if (((iVar12 == 0) && (*(int *)(unaff_EBX + 0xc) == 0)) &&
           ((*(uint *)(*(int *)(*(int *)(unaff_EBX + 4) + 0x3c) + 0x5ac) & 0x400000) != 0)) {
          (**(code **)*piVar16)();
          thunk_FUN_10658690();
          (**(code **)(*piVar16 + 4))();
        }
        unaff_EBP[-0x21] = unaff_EBP[-0x21] + -1;
      }
      unaff_EBP[-1] = 0x2f;
      *(undefined1 *)(unaff_EBP + -1) = 0x48;
      pUVar32 = (ULevel *)unaff_EBP[-0xc];
      *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
      pUVar4 = (UModel *)unaff_EBP[-0x1d];
      *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
      if (*(int *)(unaff_EBX + 0x1d4) != 0) {
        *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
        pAVar9 = ULevel::GetLevelInfo(pUVar32);
        *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
        if (((*(int *)GIsEditor_exref == 0) ||
            (iVar12 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar12 == 0)) &&
           (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
          iVar12 = UModel::PointRegion(pUVar4,unaff_EBP + -0x14,
                                       *(undefined4 *)(*(int *)(unaff_EBX + 0x1d4) + 0xe0),
                                       *(undefined4 *)(unaff_EBX + 0x194));
          uVar11 = (uint)*(byte *)(iVar12 + 8);
        }
        else {
          uVar11 = 0;
        }
        *(uint *)(unaff_EBX + 0x1d8) = uVar11;
      }
      thunk_FUN_10657c00();
      unaff_EBP[-1] = 0x2f;
      if (*(int *)GIsEditor_exref != 0) {
        iVar12 = *(int *)unaff_EBX;
        ULevel::Brush((ULevel *)unaff_EBP[-0xc]);
        iVar12 = (**(code **)(iVar12 + 0x30))();
        if (iVar12 != 0) {
          this_02 = ULevel::Brush((ULevel *)unaff_EBP[-0xc]);
          pFVar14 = AActor::GetActorRenderData((AActor *)this_02);
          unaff_EBP[4] = (int)pFVar14;
          (**(code **)(*(int *)unaff_EBX + 0x28))();
          puVar17 = (undefined4 *)FBox::GetExtent((FBox *)(pFVar14 + 0x8c));
          piVar16 = unaff_EBP + -0x3a;
          puVar22 = (undefined4 *)FBox::GetCenter((FBox *)(pFVar14 + 0x8c));
          bVar8 = FConvexVolume::BoxCheck
                            ((FConvexVolume *)(unaff_EBP + -0x1313),*puVar22,puVar22[1],puVar22[2],
                             *puVar17,puVar17[1],puVar17[2],piVar16);
          if ((bVar8 & 1) != 0) {
            FDynamicActor::Render
                      ((FDynamicActor *)unaff_EBP[4],unaff_EBX,(TList<FDynamicLight*> *)0x0,
                       (TList<FProjectorRenderInfo*> *)0x0,(FRenderInterface *)unaff_EBP[0x1f]);
          }
        }
      }
      piVar16 = (int *)(DAT_10ddd7e0 + DAT_10ddd9c8 * 4);
      iVar12 = FMemStack::GetByteCount((FMemStack *)&DAT_10db1d98);
      *piVar16 = *piVar16 + (iVar12 - unaff_EBP[-0x87]);
      *(undefined1 *)(unaff_EBP + -1) = 0x4a;
      if (unaff_EBP[-0x66] != 0) {
        DAT_10dc111c = unaff_EBP[-0x7c];
        DAT_10dc1130 = unaff_EBP[-0x68];
        DAT_10dc10d4 = unaff_EBP[-0x8b];
        DAT_10dc10c0 = unaff_EBP[-0x6a];
        DAT_10dc1108 = unaff_EBP[-0x66];
      }
      if (*(int *)(unaff_EBX + 0x1c8) != 0) {
        thunk_FUN_106850c0(&DAT_10dc1108,&DAT_10dc111c,&DAT_10dc1130);
      }
      iVar12 = unaff_EBP[0x19];
      while( true ) {
        iVar12 = iVar12 + -1;
        unaff_EBP[-0x7e] = iVar12;
        if (iVar12 < 0) break;
        if ((int *)(&DAT_10dc1108)[iVar12] == unaff_EBP + iVar12 * 0x31d + -0x1292) {
          (&DAT_10dc1108)[iVar12] = 0;
        }
      }
      unaff_EBP[-1] = 0x2f;
      FMemMark::Pop((FMemMark *)(unaff_EBP + 5));
      *(undefined1 *)(unaff_EBP + -1) = 0x2e;
      thunk_FUN_1068c4a0();
      *(undefined1 *)(unaff_EBP + -1) = 0x2d;
      thunk_FUN_1068c4a0();
      *(undefined1 *)(unaff_EBP + -1) = 4;
      thunk_FUN_1068c4a0();
      *(undefined1 *)(unaff_EBP + -1) = 1;
      thunk_FUN_1068c4a0();
      *(undefined1 *)(unaff_EBP + -1) = 0;
      _eh_vector_destructor_iterator_(unaff_EBP + -0x1292,0xc74,5,thunk_FUN_10686790);
      unaff_EBP[-1] = -1;
      ExceptionList = (void *)unaff_EBP[-3];
      return;
    }
    *(undefined1 *)(unaff_EBP + -1) = 0x24;
    iVar12 = unaff_EBP[0x19];
    while( true ) {
      iVar10 = iVar12 + -1;
      unaff_EBP[-0x56] = iVar10;
      if (iVar10 < 0) break;
      pUVar32 = (ULevel *)unaff_EBP[iVar12 + -0xd];
      pUVar4 = (UModel *)unaff_EBP[iVar12 + -0x1e];
      unaff_EBP[0x11] = (int)(unaff_EBP + iVar10 * 0x31d + -0x1292);
      *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
      *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
      if (*(int *)(unaff_EBX + 0x1d4) != 0) {
        *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
        pAVar9 = ULevel::GetLevelInfo(pUVar32);
        *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
        if (((*(int *)GIsEditor_exref == 0) ||
            (iVar12 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar12 == 0)) &&
           (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
          iVar12 = UModel::PointRegion(pUVar4,unaff_EBP + -0x14,
                                       *(undefined4 *)(*(int *)(unaff_EBX + 0x1d4) + 0xe0),
                                       *(undefined4 *)(unaff_EBX + 0x194));
          uVar11 = (uint)*(byte *)(iVar12 + 8);
        }
        else {
          uVar11 = 0;
        }
        *(uint *)(unaff_EBX + 0x1d8) = uVar11;
      }
      for (iVar29 = *(int *)(unaff_EBP[0x11] + 0x458); iVar12 = iVar10, iVar29 != 0;
          iVar29 = *(int *)(iVar29 + 4)) {
        thunk_FUN_10668600();
      }
    }
    unaff_EBP[-1] = 0x23;
    *(undefined1 *)(unaff_EBP + -1) = 0x26;
    iVar12 = 0;
    while (unaff_EBP[-0x31] = iVar12, -1 < iVar12) {
      pUVar32 = (ULevel *)unaff_EBP[iVar12 + -0xc];
      pUVar4 = (UModel *)unaff_EBP[iVar12 + -0x1d];
      *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
      *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
      iVar10 = iVar12;
      if (*(int *)(unaff_EBX + 0x1d4) != 0) {
        *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
        pAVar9 = ULevel::GetLevelInfo(pUVar32);
        *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
        if (((*(int *)GIsEditor_exref == 0) ||
            (iVar10 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar10 == 0)) &&
           (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
          iVar10 = UModel::PointRegion(pUVar4,unaff_EBP + -0x14,
                                       *(undefined4 *)(*(int *)(unaff_EBX + 0x1d4) + 0xe0),
                                       *(undefined4 *)(unaff_EBX + 0x194));
          uVar11 = (uint)*(byte *)(iVar10 + 8);
        }
        else {
          uVar11 = 0;
        }
        *(uint *)(unaff_EBX + 0x1d8) = uVar11;
        iVar10 = unaff_EBP[-0x31];
      }
      if (unaff_EBP[iVar12 * 0x31d + -0x117b] != 0) {
        uVar35 = rdtsc();
        unaff_EBP[0x11] = (int)uVar35;
        pFVar6 = (FRenderInterface *)unaff_EBP[0x1f];
        (*(code *)**(undefined4 **)pFVar6)();
        if (_DAT_10dc9244 == (UProxyBitmapMaterial *)0x0) {
          unaff_EBP[-5] = (int)&stack0xffffffb4;
          FName::FName((FName *)&stack0xffffffb4,0);
          _DAT_10dc9244 =
               (UProxyBitmapMaterial *)
               thunk_FUN_1053d270(&UProxyBitmapMaterial::PrivateStaticClass,0xffffffff);
          thunk_FUN_10530420();
          if ((DAT_10dc9240 & 1) == 0) {
            DAT_10dc9240 = DAT_10dc9240 | 1;
            *(undefined1 *)(unaff_EBP + -1) = 0x27;
            *(undefined1 *)(unaff_EBP + -6) = 0;
            *(undefined1 *)((int)unaff_EBP + -0x17) = 0;
            *(undefined1 *)((int)unaff_EBP + -0x16) = 0;
            *(undefined1 *)((int)unaff_EBP + -0x15) = 0xff;
            FSolidColorTexture::FSolidColorTexture((FSolidColorTexture *)&DAT_10dc9228);
            _atexit((_func_4879 *)&LAB_1084dd90);
            *(undefined1 *)(unaff_EBP + -1) = 0x26;
          }
          UProxyBitmapMaterial::SetTextureInterface(_DAT_10dc9244,(FBaseTexture *)&DAT_10dc9228);
        }
        if (_DAT_10dc9224 == 0) {
          unaff_EBP[-5] = (int)&stack0xffffffb4;
          FName::FName((FName *)&stack0xffffffb4,0);
          _DAT_10dc9224 = thunk_FUN_1053d3f0(&UFinalBlend::PrivateStaticClass,0xffffffff);
          thunk_FUN_10530420();
          *(UProxyBitmapMaterial **)(_DAT_10dc9224 + 0x578) = _DAT_10dc9244;
          *(undefined1 *)(_DAT_10dc9224 + 0x57c) = 7;
          *(uint *)(_DAT_10dc9224 + 0x580) = *(uint *)(_DAT_10dc9224 + 0x580) & 0xfffffffe;
          *(uint *)(_DAT_10dc9224 + 0x580) = *(uint *)(_DAT_10dc9224 + 0x580) | 8;
        }
        (**(code **)(*(int *)pFVar6 + 0x94))(8,~unaff_EBP[iVar12 * 0x31d + -0x117b],0xffffffff,1,1);
        pFVar26 = (FCanvasUtil *)
                  FCanvasUtil::FCanvasUtil
                            ((FCanvasUtil *)(unaff_EBP + -0x101),
                             (FRenderTarget *)(*(int *)(unaff_EBX + 4) + 0xdc),pFVar6);
        *(undefined1 *)(unaff_EBP + -1) = 0x28;
        *(undefined1 *)(unaff_EBP + 0x18) = 0;
        *(undefined1 *)((int)unaff_EBP + 0x61) = 0;
        *(undefined1 *)((int)unaff_EBP + 0x62) = 0;
        *(undefined1 *)((int)unaff_EBP + 99) = 0xff;
        FCanvasUtil::DrawTile
                  (pFVar26,0,0,(float)*(int *)(*(int *)(unaff_EBX + 4) + 0x94),
                   (float)*(int *)(*(int *)(unaff_EBX + 4) + 0x98),0,0,0,0,0x3f800000,_DAT_10dc9224,
                   unaff_EBP[0x18]);
        *(undefined1 *)(unaff_EBP + -1) = 0x26;
        FCanvasUtil::~FCanvasUtil((FCanvasUtil *)(unaff_EBP + -0x101));
        (**(code **)(*(int *)pFVar6 + 4))();
        piVar16 = (int *)(DAT_10ddd7e0 + DAT_10ddd984 * 4);
        uVar35 = rdtsc();
        *piVar16 = *piVar16 + ((int)uVar35 - unaff_EBP[0x11]);
        iVar10 = unaff_EBP[-0x31];
      }
      iVar12 = iVar10 + -1;
    }
    unaff_EBP[-1] = 0x23;
    *(undefined1 *)(unaff_EBP + -1) = 0x2a;
    iVar12 = unaff_EBP[0x19] + -1;
    unaff_EBP[-0x33] = iVar12;
LAB_1068fa51:
    if (-1 < iVar12) {
      pUVar32 = (ULevel *)unaff_EBP[iVar12 + -0xc];
      pUVar4 = (UModel *)unaff_EBP[iVar12 + -0x1d];
      *(ULevel **)(unaff_EBX + 0x1cc) = pUVar32;
      *(UModel **)(unaff_EBX + 0x1d0) = pUVar4;
      if (*(int *)(unaff_EBX + 0x1d4) != 0) {
        *(ULevel **)(*(int *)(unaff_EBX + 0x1d4) + 0xe4) = pUVar32;
        pAVar9 = ULevel::GetLevelInfo(pUVar32);
        *(ALevelInfo **)(*(int *)(unaff_EBX + 0x1d4) + 0xe0) = pAVar9;
        if (((*(int *)GIsEditor_exref == 0) ||
            (iVar10 = UViewport::IsWire(*(UViewport **)(unaff_EBX + 4)), iVar10 == 0)) &&
           (*(int *)(*(int *)(unaff_EBX + 4) + 0x160) == 0)) {
          iVar10 = UModel::PointRegion(pUVar4,unaff_EBP + -0x14,
                                       *(undefined4 *)(*(int *)(unaff_EBX + 0x1d4) + 0xe0),
                                       *(undefined4 *)(unaff_EBX + 0x194));
          uVar11 = (uint)*(byte *)(iVar10 + 8);
        }
        else {
          uVar11 = 0;
        }
        *(uint *)(unaff_EBX + 0x1d8) = uVar11;
      }
      piVar16 = (int *)unaff_EBP[iVar12 * 0x31d + -0x1187];
LAB_1068fb10:
      do {
        if (piVar16 == (int *)0x0) goto LAB_1068fb4f;
        if (unaff_EBP[-0x16] == 0) {
          iVar12 = (**(code **)(*(int *)*piVar16 + 0x20))();
          if (iVar12 == 0) {
            (**(code **)(*(int *)*piVar16 + 8))();
            piVar16 = (int *)piVar16[1];
            goto LAB_1068fb10;
          }
        }
        else {
          (**(code **)(*(int *)*piVar16 + 8))();
          if ((undefined4 *)*piVar16 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar16)();
          }
        }
        piVar16 = (int *)piVar16[1];
      } while( true );
    }
    unaff_EBP[-1] = 0x23;
    goto code_r0x1068fb6a;
  }
  iVar12 = unaff_EBP[-0x17];
  pUVar32 = (ULevel *)unaff_EBP[iVar12 + -0xc];
  unaff_EBP[-0x2f] = (int)pUVar32;
  pUVar4 = (UModel *)unaff_EBP[iVar12 + -0x1d];
  *unaff_EBP = (int)pUVar4;
  piVar16 = unaff_EBP + iVar12 * 0x31d + -0x1292;
  unaff_EBP[-0x79] = (int)piVar16;
  iVar12 = unaff_EBP[0x1e];
  *(ULevel **)(iVar12 + 0x1cc) = pUVar32;
  *(UModel **)(iVar12 + 0x1d0) = pUVar4;
  if (*(int *)(iVar12 + 0x1d4) != 0) {
    *(ULevel **)(*(int *)(iVar12 + 0x1d4) + 0xe4) = pUVar32;
    pAVar9 = ULevel::GetLevelInfo(pUVar32);
    *(ALevelInfo **)(*(int *)(iVar12 + 0x1d4) + 0xe0) = pAVar9;
    if (((*(int *)GIsEditor_exref == 0) ||
        (iVar10 = UViewport::IsWire(*(UViewport **)(iVar12 + 4)), iVar10 == 0)) &&
       (*(int *)(*(int *)(iVar12 + 4) + 0x160) == 0)) {
      iVar10 = UModel::PointRegion(pUVar4);
      uVar11 = (uint)*(byte *)(iVar10 + 8);
    }
    else {
      uVar11 = 0;
    }
    *(uint *)(iVar12 + 0x1d8) = uVar11;
  }
  iVar12 = unaff_EBP[-0x17];
  piVar18 = &DAT_10dc1108 + iVar12;
  unaff_EBP[-0x81] = (int)piVar18;
  unaff_EBP[-0x83] = (int)(&DAT_10dc111c + iVar12);
  unaff_EBP[-0x43] = (int)(&DAT_10dc1130 + iVar12);
  piVar20 = &DAT_10dc10d4 + iVar12;
  unaff_EBP[-0x86] = (int)piVar20;
  piVar2 = &DAT_10dc10c0 + iVar12;
  unaff_EBP[-0x46] = (int)piVar2;
  piVar16[0x31b] = 0;
  piVar16[0x31c] = 0;
  if (*piVar18 == 0) {
    *(undefined1 *)(unaff_EBP + -1) = 6;
    piVar16[6] = 0;
    iVar12 = thunk_FUN_10685470();
    piVar16[5] = iVar12;
    iVar12 = thunk_FUN_106854d0();
    piVar16[0x118] = iVar12;
    iVar12 = unaff_EBP[0x1e];
    this = *(UViewport **)(iVar12 + 4);
    iVar10 = UViewport::IsLit(this);
    unaff_EBP[-0x41] = iVar10;
    pUVar13 = UObject::GetOuter((UObject *)this);
    unaff_EBP[-0x3d] = (uint)(*(int *)(pUVar13 + 0x54) == 0);
    iVar12 = *(int *)(*(int *)(iVar12 + 4) + 0x3c);
    if (*(int *)(iVar12 + 0x3bc) != 0) {
      iVar12 = *(int *)(iVar12 + 0x3bc);
    }
    unaff_EBP[-0x14] = *(int *)(iVar12 + 0x1bc);
    unaff_EBP[-0x13] = *(int *)(iVar12 + 0x1c0);
    unaff_EBP[-0x12] = *(int *)(iVar12 + 0x1c4);
    fVar36 = (float)_DAT_10854b70;
    _DAT_10dc10e8 = (float)_DAT_10882e20;
    _DAT_10dc10f4 = *(float *)GL2ActorCR_exref * fVar36 * _DAT_10dc10e8;
    _DAT_10dc10f0 = *(float *)GL2StaticMeshCR_exref * fVar36 * _DAT_10dc10e8;
    _DAT_10dc10ec = *(float *)GL2StaticMeshLodCR_exref * fVar36 * _DAT_10dc10e8;
    _DAT_10dc10e8 = fVar36 * *(float *)GL2PawnCR_exref * _DAT_10dc10e8;
    if (*(int *)GIsEditor_exref == 0) {
      iVar12 = *(int *)(unaff_EBP[-0x2f] + 0x138);
    }
    else {
      iVar12 = 2;
    }
    unaff_EBP[-0x27] = iVar12;
    *(undefined1 *)(unaff_EBP + -1) = 7;
    uVar35 = rdtsc();
    unaff_EBP[0x18] = (int)uVar35;
    while (iVar12 < *(int *)(unaff_EBP[-0x2f] + 0x3c)) {
      pUVar13 = *(UObject **)(*(int *)(unaff_EBP[-0x2f] + 0x38) + iVar12 * 4);
      if (((pUVar13 == (UObject *)0x0) ||
          (iVar12 = (**(code **)(*(int *)pUVar13 + 100))(), iVar12 != 0)) &&
         ((*(int *)GL2HideDropMesh_exref == 0 ||
          ((pUVar13 == (UObject *)0x0 || (iVar12 = thunk_FUN_10493fd0(), iVar12 == 0)))))) {
        if (*(int *)GIsEditor_exref != 0) {
LAB_1068d1a1:
          if ((pUVar13 != (UObject *)0x0) &&
             ((((byte)pUVar13[100] & 0x10) == 0 || (*(int *)GIsEditor_exref != 0)))) {
            piVar18 = (int *)unaff_EBP[0x1e];
            iVar12 = (**(code **)(*piVar18 + 0x30))();
            if (iVar12 != 0) {
              pFVar14 = AActor::GetActorRenderData((AActor *)pUVar13);
              unaff_EBP[0x15] = (int)pFVar14;
              iVar12 = piVar18[0x76];
              if (iVar12 == 0) {
LAB_1068d4d4:
                piVar18 = (int *)thunk_FUN_10522300();
                if (piVar18 == (int *)0x0) {
                  piVar18 = (int *)0x0;
                }
                else {
                  iVar12 = piVar16[6];
                  *piVar18 = unaff_EBP[0x15];
                  piVar18[1] = iVar12;
                }
                piVar16[6] = (int)piVar18;
              }
              else if (*(int *)(pUVar13 + 0x114) == 0) {
                if (iVar12 == 0) goto LAB_1068d4d4;
              }
              else if ((*(int *)GIsL2Seamless_exref == 0) || (*(int *)GIsEditor_exref != 0)) {
                for (iVar12 = 0; unaff_EBP[-0x7b] = iVar12, iVar12 < *(int *)(pUVar13 + 0x114);
                    iVar12 = iVar12 + 1) {
                  piVar18 = (int *)thunk_FUN_10522300();
                  if (piVar18 == (int *)0x0) {
                    piVar18 = (int *)0x0;
                  }
                  else {
                    iVar10 = *(int *)(piVar16[5] +
                                     *(int *)(*(int *)(pUVar13 + 0x110) + iVar12 * 4) * 4);
                    *piVar18 = unaff_EBP[0x15];
                    piVar18[1] = iVar10;
                  }
                  *(int **)(piVar16[5] + *(int *)(*(int *)(pUVar13 + 0x110) + iVar12 * 4) * 4) =
                       piVar18;
                }
              }
              else {
                iVar12 = 0;
                unaff_EBP[-0x23] = 0;
LAB_1068d230:
                if (iVar12 < *(int *)(pUVar13 + 0x114)) {
                  if ((((byte)pUVar13[0x98] & 2) == 0) || (piVar16[2] == *(int *)(pUVar13 + 0x2cc)))
                  {
                    iVar12 = *(int *)(*(int *)(pUVar13 + 0x110) + iVar12 * 4);
                    piVar18 = (int *)thunk_FUN_10522300();
                    if (piVar18 == (int *)0x0) {
                      piVar18 = (int *)0x0;
                    }
                    else {
                      iVar10 = *(int *)(piVar16[5] + iVar12 * 4);
                      *piVar18 = unaff_EBP[0x15];
                      piVar18[1] = iVar10;
                    }
                    *(int **)(piVar16[5] + iVar12 * 4) = piVar18;
                  }
                  else {
                    if (((*(int *)(unaff_EBP[0x1e] + 0xc) != 0) ||
                        (iVar12 = thunk_FUN_10685210(), iVar12 < 0)) || (unaff_EBP[0x19] <= iVar12))
                    goto LAB_1068d45e;
                    piVar16 = unaff_EBP + iVar12 * 0x31d + -0x1292;
                    unaff_EBP[0x1b] = (int)piVar16;
                    iVar10 = UObject::IsA(pUVar13,&AEmitterLight::PrivateStaticClass);
                    if (iVar10 == 0) {
                      piVar16 = (int *)thunk_FUN_10522300();
                      if (piVar16 == (int *)0x0) {
                        piVar16 = (int *)0x0;
                      }
                      else {
                        iVar10 = *(int *)(pUVar13 + 0x2cc);
                        *piVar16 = iVar12;
                        piVar16[1] = iVar10;
                        piVar16[2] = (int)pUVar13;
                        piVar16[3] = unaff_EBP[0x15];
                      }
                      iVar12 = *(int *)(*(int *)(pUVar13 + 0x110) + unaff_EBP[-0x23] * 4);
                      puVar17 = (undefined4 *)thunk_FUN_10522300();
                      if (puVar17 == (undefined4 *)0x0) {
                        *(undefined4 *)(*(int *)(unaff_EBP[0x1b] + 0x460) + iVar12 * 4) = 0;
                        unaff_EBP[-0x23] = unaff_EBP[-0x23] + 1;
                        piVar16 = (int *)unaff_EBP[-0x79];
                        iVar12 = unaff_EBP[-0x23];
                      }
                      else {
                        uVar19 = *(undefined4 *)(*(int *)(unaff_EBP[0x1b] + 0x460) + iVar12 * 4);
                        *puVar17 = piVar16;
                        puVar17[1] = uVar19;
                        *(undefined4 **)(*(int *)(unaff_EBP[0x1b] + 0x460) + iVar12 * 4) = puVar17;
                        unaff_EBP[-0x23] = unaff_EBP[-0x23] + 1;
                        piVar16 = (int *)unaff_EBP[-0x79];
                        iVar12 = unaff_EBP[-0x23];
                      }
                      goto LAB_1068d230;
                    }
                    iVar12 = (**(code **)(*(int *)pUVar13 + 0x78))();
                    if ((iVar12 != 0) &&
                       (iVar12 = (**(code **)(*(int *)pUVar13 + 0x78))(),
                       *(char *)(iVar12 + 0x3bc) != '\0')) {
                      pFVar15 = (FDynamicLight *)(**(code **)(*(int *)pUVar13 + 0x154))();
                      if ((*(int *)(unaff_EBP[0x1e] + 0xc) == 0) &&
                         ((((*(uint *)(pUVar13 + 100) & 0x200) != 0 ||
                           (*(int *)(pFVar15 + 0x24) != 0)) ||
                          ((((byte)pUVar13[0x5c] & 0x20) != 0 ||
                           (((char)*(uint *)(pUVar13 + 100) < '\0' ||
                            (*(int *)(pFVar15 + 0x28) != 0)))))))) {
                        FDynamicLight::Update(pFVar15);
                      }
                      if ((((*(int *)(pFVar15 + 0x24) == 0) && (*(int *)(pFVar15 + 0x28) == 0)) ||
                          (0xff < piVar16[0x31b])) || (unaff_EBP[-0x3d] == 0)) goto LAB_1068d45e;
                      piVar16[piVar16[0x31b] + 0x11b] = (int)pFVar15;
                      piVar16[0x31b] = piVar16[0x31b] + 1;
                      unaff_EBP[-0x23] = unaff_EBP[-0x23] + 1;
                      piVar16 = (int *)unaff_EBP[-0x79];
                      iVar12 = unaff_EBP[-0x23];
                      goto LAB_1068d230;
                    }
                  }
LAB_1068d45e:
                  unaff_EBP[-0x23] = unaff_EBP[-0x23] + 1;
                  piVar16 = (int *)unaff_EBP[-0x79];
                  iVar12 = unaff_EBP[-0x23];
                  goto LAB_1068d230;
                }
              }
            }
            if (((unaff_EBP[-0x41] != 0) &&
                (iVar12 = (**(code **)(*(int *)pUVar13 + 0x78))(), iVar12 != 0)) &&
               (iVar12 = (**(code **)(*(int *)pUVar13 + 0x78))(), *(char *)(iVar12 + 0x3bc) != '\0')
               ) {
              pFVar15 = (FDynamicLight *)(**(code **)(*(int *)pUVar13 + 0x154))();
              if ((*(int *)(unaff_EBP[0x1e] + 0xc) == 0) &&
                 ((((*(uint *)(pUVar13 + 100) & 0x200) != 0 || (*(int *)(pFVar15 + 0x24) != 0)) ||
                  ((((byte)pUVar13[0x5c] & 0x20) != 0 ||
                   (((char)*(uint *)(pUVar13 + 100) < '\0' || (*(int *)(pFVar15 + 0x28) != 0))))))))
              {
                FDynamicLight::Update(pFVar15);
              }
              if ((((*(int *)(pFVar15 + 0x24) != 0) || (*(int *)(pFVar15 + 0x28) != 0)) &&
                  (piVar16[0x31b] < 0x100)) && (unaff_EBP[-0x3d] != 0)) {
                piVar16[piVar16[0x31b] + 0x11b] = (int)pFVar15;
                piVar16[0x31b] = piVar16[0x31b] + 1;
              }
            }
          }
          goto LAB_1068d5a0;
        }
        if (pUVar13 == (UObject *)0x0) goto LAB_1068d5a0;
        if (((byte)pUVar13[0x2e4] & 0x10) != 0) goto LAB_1068d1a1;
        if (pUVar13[0x35] == (UObject)0x2) {
          unaff_EBP[0x1a] = (int)_DAT_10dc10e8;
          if (unaff_EBP[-0x16] == 0) {
            iVar12 = thunk_FUN_104b42a0();
            if (iVar12 != 0) {
              *(uint *)(iVar12 + 0x17fc) = *(uint *)(iVar12 + 0x17fc) & 0xfffffffe;
              *(uint *)(iVar12 + 0x75c) = *(uint *)(iVar12 + 0x75c) & 0xfffffffe;
            }
            *(uint *)(pUVar13 + 0x54) = *(uint *)(pUVar13 + 0x54) & 0xfffffffe;
          }
        }
        else {
          fVar36 = _DAT_10dc10f4;
          if (pUVar13[0x35] == (UObject)0x8) {
            if (*(int *)(pUVar13 + 0x38) == 0) goto LAB_1068d5a0;
            fVar36 = _DAT_10dc10f0;
            if (*(int *)(*(int *)(pUVar13 + 0x38) + 0x194) != 0) {
              fVar36 = _DAT_10dc10ec;
            }
          }
          unaff_EBP[0x1a] = (int)fVar36;
        }
        fVar33 = (float10)thunk_FUN_1048e290();
        unaff_EBP[0x1b] = (int)(float)fVar33;
        fVar36 = (float)unaff_EBP[0x1b];
        fVar3 = (float)unaff_EBP[0x1a];
        if (*(int *)GL2ActorAppearingType_exref == 0) {
          if (fVar36 < fVar3) {
            if (fVar3 - (float)_DAT_108ba308 < fVar36) {
              UObject::IsA(pUVar13,&AEmitter::PrivateStaticClass);
            }
LAB_1068d195:
            pcVar28 = *(code **)(*(int *)pUVar13 + 0x128);
            goto LAB_1068d19d;
          }
          if (fVar36 < fVar3 + (float)_DAT_108ba308) {
            if (pUVar13[0x9c] == (UObject)0x3) goto LAB_1068d5a0;
            goto LAB_1068d195;
          }
          (**(code **)(*(int *)pUVar13 + 0x128))();
          if (pUVar13[0x9c] != (UObject)0x3) goto LAB_1068d1a1;
          unaff_EBP[-0x27] = unaff_EBP[-0x27] + 1;
          iVar12 = unaff_EBP[-0x27];
        }
        else {
          if (fVar36 <= fVar3) {
            if (fVar36 <= fVar3 - (float)_DAT_108d2208) goto LAB_1068d195;
            unaff_EBP[0x1b] = (int)(fVar36 - (fVar3 - (float)_DAT_108d2208));
            unaff_EBP[0x1b] =
                 (int)((float)_DAT_10853b38 -
                      (float)unaff_EBP[0x1b] * (float)_DAT_10853b38 * (float)_DAT_108d2218);
            fVar33 = (float10)thunk_FUN_103704b0();
            *(undefined2 *)((int)unaff_EBP + 0x6a) = in_FPUControlWord;
            unaff_EBP[0x1b] = *(ushort *)((int)unaff_EBP + 0x6a) | 0xc00;
            unaff_EBP[0x1b] = (int)ROUND(fVar33);
            in_FPUControlWord = *(undefined2 *)((int)unaff_EBP + 0x6a);
            *(char *)(unaff_EBP + 0x17) = (char)unaff_EBP[0x1b];
            pcVar28 = *(code **)(*(int *)pUVar13 + 0x128);
LAB_1068d19d:
            (*pcVar28)();
            goto LAB_1068d1a1;
          }
          (**(code **)(*(int *)pUVar13 + 0x128))();
          unaff_EBP[-0x27] = unaff_EBP[-0x27] + 1;
          iVar12 = unaff_EBP[-0x27];
        }
      }
      else {
LAB_1068d5a0:
        unaff_EBP[-0x27] = unaff_EBP[-0x27] + 1;
        iVar12 = unaff_EBP[-0x27];
      }
    }
    piVar18 = (int *)(DAT_10ddd7e0 + DAT_10ddd998 * 4);
    uVar35 = rdtsc();
    *piVar18 = *piVar18 + ((int)uVar35 - unaff_EBP[0x18]);
    unaff_EBP[-1] = 6;
    *(undefined1 *)(unaff_EBP + -1) = 9;
    unaff_EBP[-0x15] = 0;
    while (pUVar32 = (ULevel *)unaff_EBP[-0x10], unaff_EBP[-0x15] < *(int *)(pUVar32 + 0x116c)) {
      piVar18 = *(int **)(*(int *)(pUVar32 + 0x1168) + unaff_EBP[-0x15] * 4);
      ULevel::GetLevelInfo(pUVar32);
      iVar12 = thunk_FUN_105eaa30();
      if (iVar12 == 0) {
        iVar12 = *(int *)(pUVar32 + 0x1168);
        iVar10 = unaff_EBP[-0x15];
        *(undefined4 *)(iVar12 + iVar10 * 4) =
             *(undefined4 *)(iVar12 + -4 + *(int *)(unaff_EBP[-0x10] + 0x116c) * 4);
        unaff_EBP[-0x15] = iVar10 + -1;
        thunk_FUN_10326340();
        unaff_EBP[-0x15] = unaff_EBP[-0x15] + 1;
      }
      else {
        if (*piVar18 == 0) {
          appFailAssert("ProjectorInfo->Projector",".\\UnRenderVisibility.cpp",0xbc3);
        }
        iVar12 = (**(code **)(*(int *)unaff_EBP[0x1e] + 0x38))();
        if (iVar12 != 0) {
          piVar16[piVar16[0x31c] + 0x21b] = (int)piVar18;
          piVar16[0x31c] = piVar16[0x31c] + 1;
          if (piVar16[0x31c] == 0x100) break;
        }
        unaff_EBP[-0x15] = unaff_EBP[-0x15] + 1;
      }
    }
    unaff_EBP[-1] = 6;
    *(undefined1 *)(unaff_EBP + -1) = 0xb;
    uVar35 = rdtsc();
    unaff_EBP[0x1b] = (int)uVar35;
    if ((*(int *)(unaff_EBP[0x1e] + 0xc) == 0) && (unaff_EBP[-0x41] != 0)) {
      unaff_EBP[-0x2e] = 0;
      iVar12 = *unaff_EBP;
      iVar10 = 0;
      while (iVar10 < *(int *)(iVar12 + 0x11c)) {
        iVar29 = *(int *)(*(int *)(iVar12 + 0x118) + iVar10 * 4) * 0xac + *(int *)(iVar12 + 0x10c);
        for (iVar10 = 0; unaff_EBP[-0x7d] = iVar10, iVar10 < *(int *)(iVar29 + 0xa4);
            iVar10 = iVar10 + 1) {
        }
        FArray::Empty((FArray *)(iVar29 + 0xa0),4,0);
        *(int *)(iVar29 + 0x2c) = *(int *)(iVar29 + 0x2c) + 1;
        if (*(int *)(iVar12 + 0xfc) == 0) {
          piVar18 = (int *)(*(int *)(iVar29 + 0x10) * 0x6c + 0x68 + *(int *)(iVar12 + 0x100));
          *piVar18 = *piVar18 + 1;
        }
        else if (0 < *(int *)(iVar12 + 0xf4)) {
          iVar10 = 0;
          while( true ) {
            unaff_EBP[-0x7f] = iVar10;
            iVar1 = *(int *)(iVar12 + 0xf0) + *(int *)(iVar29 + 0x10) * 0x1c;
            if (*(int *)(iVar1 + 0x14) <= iVar10) break;
            piVar18 = (int *)(iVar10 * 0x6c + 0x68 + *(int *)(iVar1 + 0x10));
            *piVar18 = *piVar18 + 1;
            iVar10 = iVar10 + 1;
          }
        }
        unaff_EBP[-0x2e] = unaff_EBP[-0x2e] + 1;
        iVar10 = unaff_EBP[-0x2e];
      }
      FArray::Empty((FArray *)(iVar12 + 0x118),4,0);
    }
    piVar18 = (int *)(DAT_10ddd7e0 + DAT_10ddd99c * 4);
    uVar35 = rdtsc();
    *piVar18 = *piVar18 + ((int)uVar35 - unaff_EBP[0x1b]);
    unaff_EBP[-1] = 6;
    *(int **)unaff_EBP[-0x81] = piVar16;
    *(int **)unaff_EBP[-0x83] = piVar16 + 0x11b;
    *(int **)unaff_EBP[-0x43] = piVar16 + 0x21b;
    *(int *)unaff_EBP[-0x86] = piVar16[0x31b];
    *(int *)unaff_EBP[-0x46] = piVar16[0x31c];
  }
  else {
    *(undefined1 *)(unaff_EBP + -1) = 0xe;
    piVar16[5] = *(int *)(*piVar18 + 0x14);
    piVar16[6] = *(int *)(*piVar18 + 0x18);
    piVar16[0x118] = *(int *)(*piVar18 + 0x460);
    _memcpy(piVar16 + 0x11b,(void *)(&DAT_10dc111c)[iVar12],*piVar20 * 4);
    _memcpy(piVar16 + 0x21b,*(void **)unaff_EBP[-0x43],*piVar2 * 4);
    piVar16[0x31b] = *piVar20;
    piVar16[0x31c] = *piVar2;
  }
  unaff_EBP[-1] = 5;
  *(undefined1 *)(unaff_EBP + -1) = 0x10;
  iVar12 = thunk_FUN_10685530();
  piVar16[0x10c] = iVar12;
  iVar12 = thunk_FUN_10685590();
  piVar16[0x10d] = iVar12;
  iVar12 = thunk_FUN_10670480();
  piVar16[0x10a] = iVar12;
  piVar16[0x10e] = 0;
  piVar16[0x119] = 0;
  piVar16[0x11a] = 0;
  piVar16[0x10f] = unaff_EBP[-0x2f];
  iVar12 = thunk_FUN_10665d30();
  piVar16[0x110] = iVar12;
  iVar12 = thunk_FUN_106855f0();
  piVar16[0x111] = iVar12;
  iVar12 = thunk_FUN_10665d30();
  piVar16[0x112] = iVar12;
  piVar16[0x113] = 0;
  iVar12 = thunk_FUN_10685650();
  piVar16[0x114] = iVar12;
  piVar16[0x115] = 0;
  piVar16[0x116] = 0;
  piVar16[0x117] = 0;
  piVar16[0x10b] = 0;
  unaff_EBP[-1] = 5;
  piVar18 = (int *)unaff_EBP[0x1e];
  if (*(int *)(piVar18[1] + 0x160) == 0) {
    *(undefined1 *)(unaff_EBP + -1) = 0x14;
    puVar17 = (undefined4 *)thunk_FUN_10522300();
    if (puVar17 == (undefined4 *)0x0) {
      puVar17 = (undefined4 *)0x0;
    }
    else {
      iVar12 = thunk_FUN_10522300();
      if (iVar12 == 0) {
        *puVar17 = 0;
        puVar17[1] = 0;
      }
      else {
        uVar19 = (**(code **)(*piVar18 + 0x28))();
        *puVar17 = uVar19;
        puVar17[1] = 0;
      }
    }
    piVar16[(piVar18[0x76] + 2) * 4] = (int)puVar17;
    piVar20 = (int *)thunk_FUN_10522300();
    if (piVar20 == (int *)0x0) {
      piVar20 = (int *)0x0;
    }
    else {
      *piVar20 = piVar18[0x76];
      piVar20[1] = 0;
    }
    piVar16[0x107] = (int)piVar20;
    uVar35 = __allshl();
    *(undefined8 *)(piVar16 + 0x108) = uVar35;
  }
  else {
    *(undefined1 *)(unaff_EBP + -1) = 0x12;
    piVar16[0x107] = 0;
    iVar12 = 1;
    while (unaff_EBP[-0x4a] = iVar12, iVar12 < *(int *)(*unaff_EBP + 0x134)) {
      piVar18 = (int *)thunk_FUN_10522300();
      if (piVar18 == (int *)0x0) {
        piVar16[0x107] = 0;
        iVar12 = iVar12 + 1;
      }
      else {
        iVar10 = piVar16[0x107];
        *piVar18 = iVar12;
        piVar18[1] = iVar10;
        piVar16[0x107] = (int)piVar18;
        iVar12 = iVar12 + 1;
      }
    }
    lVar34 = __allshl();
    *(longlong *)(piVar16 + 0x108) = lVar34 + -1;
    iVar12 = 0;
    while (unaff_EBP[-0x6e] = iVar12, iVar12 < *(int *)(*unaff_EBP + 0x134)) {
      puVar17 = (undefined4 *)thunk_FUN_10522300();
      if (puVar17 == (undefined4 *)0x0) {
        piVar16[(iVar12 + 2) * 4] = 0;
        iVar12 = iVar12 + 1;
      }
      else {
        this_01 = (FConvexVolume *)thunk_FUN_10522300();
        if (this_01 == (FConvexVolume *)0x0) {
          *puVar17 = 0;
          puVar17[1] = 0;
          piVar16[(iVar12 + 2) * 4] = (int)puVar17;
          iVar12 = iVar12 + 1;
        }
        else {
          uVar19 = FConvexVolume::FConvexVolume(this_01);
          *puVar17 = uVar19;
          puVar17[1] = 0;
          piVar16[(iVar12 + 2) * 4] = (int)puVar17;
          iVar12 = iVar12 + 1;
        }
      }
    }
  }
  unaff_EBP[-1] = 5;
  *(undefined1 *)(unaff_EBP + -1) = 0x16;
  if (*(int *)GIsEditor_exref == 0) {
    FUN_10686220();
  }
  unaff_EBP[-1] = 5;
  unaff_EBP[-0x17] = unaff_EBP[-0x17] + -1;
  FUN_1068cd00();
  return;
LAB_1068e032:
  if (*(int *)(unaff_EBP[0x1e] + 4) != 0) {
    iVar12 = *(int *)(*(int *)(unaff_EBP[0x1e] + 4) + 0x3c);
    iVar29 = *(int *)(iVar12 + 0x3bc);
    if (iVar29 == 0) {
      unaff_EBP[-0x26] = *(int *)(iVar12 + 0x1bc);
      unaff_EBP[-0x25] = *(int *)(iVar12 + 0x1c0);
      unaff_EBP[-0x24] = *(int *)(iVar12 + 0x1c4);
    }
    else {
      unaff_EBP[-0x26] = *(int *)(iVar29 + 0x1bc);
      unaff_EBP[-0x25] = *(int *)(iVar29 + 0x1c0);
      unaff_EBP[-0x24] = *(int *)(iVar29 + 0x1c4);
    }
  }
LAB_1068e093:
  if (puVar17 != (undefined4 *)0x0) {
    iVar12 = puVar17[1];
    pfVar31 = (float *)(*(int *)(unaff_EBP[0x17] + 100) + iVar12 * 0x78);
    unaff_EBP[0x18] = (int)pfVar31;
    if (puVar17[6] == 0) {
      piVar16 = (int *)(DAT_10ddd7e0 + DAT_10ddd9a0 * 4);
      *piVar16 = *piVar16 + 1;
      if ((*(int *)(unaff_EBP[0x1e] + 0x1d8) != 0) &&
         ((*(uint *)(iVar10 + 0x420) & (uint)pfVar31[4]) == 0 &&
          (*(uint *)(iVar10 + 0x424) & (uint)pfVar31[5]) == 0)) {
        piVar16 = (int *)(DAT_10ddd7e0 + DAT_10ddd9a4 * 4);
        *piVar16 = *piVar16 + 1;
        puVar17 = (undefined4 *)*puVar17;
        unaff_EBP[-0x18] = (int)puVar17;
        goto LAB_1068e093;
      }
      if (pfVar31[0x14] != -NAN) {
        unaff_EBP[-6] = *(int *)(unaff_EBP[0x17] + 0xb4) + (int)pfVar31[0x14] * 0x1c;
        unaff_EBP[0x16] = 0;
        piVar16 = (int *)(DAT_10ddd7e0 + DAT_10ddd9a8 * 4);
        *piVar16 = *piVar16 + 1;
        if (*(int *)(unaff_EBP[0x1e] + 0x1d8) == 0) {
          iVar12 = *(int *)(unaff_EBP[0x1a] + 0x1c);
          puVar22 = (undefined4 *)unaff_EBP[-6];
          puVar30 = (undefined4 *)&stack0xffffffe4;
          for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar30 = *puVar22;
            puVar22 = puVar22 + 1;
            puVar30 = puVar30 + 1;
          }
          iStack_20 = 0x1068e1c3;
          iVar12 = (**(code **)(iVar12 + 8))();
          unaff_EBP[0x16] = iVar12;
          pfVar31 = (float *)unaff_EBP[0x18];
        }
        else {
          piVar16 = *(int **)(unaff_EBP[0x1a] + 0x41c);
          unaff_EBP[0x1b] = (int)piVar16;
          while (piVar16 != (int *)0x0) {
            iVar12 = *piVar16;
            uVar35 = __allshl();
            if (((uint)uVar35 & (uint)pfVar31[4]) != 0 ||
                ((uint)((ulonglong)uVar35 >> 0x20) & (uint)pfVar31[5]) != 0) {
              iVar12 = *(int *)(iVar12 * 0x10 + 0x1c + unaff_EBP[0x1a]);
              puVar22 = (undefined4 *)unaff_EBP[-6];
              puVar30 = (undefined4 *)&stack0xffffffe4;
              for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar30 = *puVar22;
                puVar22 = puVar22 + 1;
                puVar30 = puVar30 + 1;
              }
              iStack_20 = 0x1068e194;
              iVar12 = (**(code **)(iVar12 + 8))();
              pfVar31 = (float *)unaff_EBP[0x18];
              if (iVar12 != 0) goto LAB_1068e1eb;
            }
            piVar16 = *(int **)(unaff_EBP[0x1b] + 4);
            unaff_EBP[0x1b] = (int)piVar16;
          }
        }
        if (unaff_EBP[0x16] == 0) {
          piVar16 = (int *)(DAT_10ddd7e0 + DAT_10ddd9ac * 4);
          *piVar16 = *piVar16 + 1;
          puVar17 = (undefined4 *)*puVar17;
          unaff_EBP[-0x18] = (int)puVar17;
          iVar10 = unaff_EBP[0x1a];
          goto LAB_1068e093;
        }
      }
LAB_1068e1eb:
      iVar10 = 0;
      unaff_EBP[-0x2b] = 0;
      iVar29 = 0;
      unaff_EBP[-0x2a] = 0;
      iVar12 = 0;
      while (unaff_EBP[-0x3b] = iVar12, iVar12 < (int)puVar17[9]) {
        piVar16 = *(int **)(puVar17[8] + iVar12 * 4);
        if (*(char *)(*piVar16 + 0x3bd) == '\x13') {
          unaff_EBP[iVar29 + -0x201] = (int)piVar16;
          iVar29 = iVar29 + 1;
          unaff_EBP[-0x2a] = iVar29;
LAB_1068e277:
          unaff_EBP[iVar10 + -0x301] = (int)piVar16;
          iVar10 = iVar10 + 1;
          unaff_EBP[-0x2b] = iVar10;
        }
        else {
          unaff_EBP[0x1b] =
               (int)((pfVar31[2] * (float)piVar16[4] +
                     *pfVar31 * (float)piVar16[2] + pfVar31[1] * (float)piVar16[3]) - pfVar31[3]);
          fVar36 = (float)unaff_EBP[0x1b];
          if (-(float)piVar16[8] < fVar36) {
            unaff_EBP[iVar29 + -0x201] = (int)piVar16;
            iVar29 = iVar29 + 1;
            unaff_EBP[-0x2a] = iVar29;
          }
          if (fVar36 < (float)piVar16[8]) goto LAB_1068e277;
        }
        iVar12 = unaff_EBP[-0x3b] + 1;
      }
      unaff_EBP[-0x29] = 0;
      unaff_EBP[-0x28] = 0;
      unaff_EBP[-0x1f] = 0;
      while (unaff_EBP[-0x1f] < (int)puVar17[10]) {
        iVar12 = *(int *)(puVar17[7] + unaff_EBP[-0x1f] * 4);
        fVar33 = (float10)thunk_FUN_105e9950();
        unaff_EBP[0x18] = (int)(float)fVar33;
        unaff_EBP[0x1b] =
             (int)((pfVar31[2] * *(float *)(iVar12 + 0xac) +
                   *pfVar31 * *(float *)(iVar12 + 0xa4) + pfVar31[1] * *(float *)(iVar12 + 0xa8)) -
                  pfVar31[3]);
        fVar36 = (float)unaff_EBP[0x1b];
        fVar3 = (float)unaff_EBP[0x18];
        if (-fVar3 < fVar36) {
          iVar10 = unaff_EBP[-0x28];
          unaff_EBP[iVar10 + -0x1413] = iVar12;
          unaff_EBP[-0x28] = iVar10 + 1;
        }
        if (fVar36 < fVar3) {
          iVar10 = unaff_EBP[-0x29];
          unaff_EBP[iVar10 + -0x1513] = iVar12;
          unaff_EBP[-0x29] = iVar10 + 1;
        }
        unaff_EBP[-0x1f] = unaff_EBP[-0x1f] + 1;
      }
      iVar12 = unaff_EBP[0x1e];
      unaff_EBP[0x1b] =
           (int)((pfVar31[2] * *(float *)(iVar12 + 0x19c) +
                 *pfVar31 * *(float *)(iVar12 + 0x194) + pfVar31[1] * *(float *)(iVar12 + 0x198)) -
                pfVar31[3]);
      uVar11 = (uint)(_DAT_1085222c < (float)unaff_EBP[0x1b]);
      puVar17[6] = 1;
      puVar17[3] = pfVar31[9 - uVar11];
      uVar19 = thunk_FUN_10685750();
      puVar17[4] = uVar19;
      puVar17[5] = pfVar31[0x17 - uVar11];
      iVar12 = unaff_EBP[-0x2a - uVar11];
      unaff_EBP[0x1b] = iVar12;
      _Dst = (void *)puVar17[8];
      unaff_EBP[0x15] = uVar11 * 0x400;
      _memcpy(_Dst,unaff_EBP + uVar11 * -0x100 + -0x201,iVar12 * 4);
      puVar17[9] = unaff_EBP[0x1b];
      iVar12 = unaff_EBP[-0x28 - uVar11];
      unaff_EBP[0x1b] = iVar12;
      _memcpy((void *)puVar17[7],(void *)((int)unaff_EBP + (-0x504c - unaff_EBP[0x15])),iVar12 * 4);
      puVar17[10] = unaff_EBP[0x1b];
      if (pfVar31[uVar11 + 8] == -NAN) {
        if (pfVar31[uVar11 + 0x16] != -NAN) {
          if (unaff_EBP[uVar11 - 0x2b] != 0) {
            unaff_EBP[uVar11 * 0x100 + unaff_EBP[uVar11 - 0x2b] + -0x301] = 0;
            uVar19 = thunk_FUN_10685410();
            *(undefined4 *)(*(int *)(unaff_EBP[0x1a] + 0x430) + (int)pfVar31[uVar11 + 0x16] * 4) =
                 uVar19;
            _memcpy(*(void **)(*(int *)(unaff_EBP[0x1a] + 0x430) + (int)pfVar31[uVar11 + 0x16] * 4),
                    (void *)((int)unaff_EBP + unaff_EBP[0x15] + -0xc04),
                    unaff_EBP[uVar11 - 0x2b] * 4 + 4);
          }
          if (unaff_EBP[uVar11 - 0x29] != 0) {
            unaff_EBP[uVar11 * 0x100 + unaff_EBP[uVar11 - 0x29] + -0x1513] = 0;
            uVar19 = thunk_FUN_10685440();
            *(undefined4 *)(*(int *)(unaff_EBP[0x1a] + 0x434) + (int)pfVar31[uVar11 + 0x16] * 4) =
                 uVar19;
            _memcpy(*(void **)(*(int *)(unaff_EBP[0x1a] + 0x434) + (int)pfVar31[uVar11 + 0x16] * 4),
                    (void *)((int)unaff_EBP + unaff_EBP[0x15] + -0x544c),
                    unaff_EBP[uVar11 - 0x29] * 4 + 4);
          }
          FUN_10688760();
        }
        iVar10 = unaff_EBP[0x1a];
      }
      else {
        iVar12 = thunk_FUN_106859a0();
        unaff_EBP[0x1b] = iVar12;
        _memcpy(*(void **)(iVar12 + 0x20),(void *)((int)unaff_EBP + unaff_EBP[0x15] + -0xc04),
                unaff_EBP[uVar11 - 0x2b] * 4);
        _memcpy(*(void **)(unaff_EBP[0x1b] + 0x1c),
                (void *)((int)unaff_EBP + unaff_EBP[0x15] + -0x544c),unaff_EBP[uVar11 - 0x29] * 4);
        *(float *)(unaff_EBP[0x1b] + 4) = pfVar31[uVar11 + 8];
        uVar19 = thunk_FUN_10685750();
        puVar22 = (undefined4 *)unaff_EBP[0x1b];
        puVar22[2] = uVar19;
        puVar22[6] = 0;
        *puVar22 = puVar17;
        unaff_EBP[-0x18] = (int)puVar22;
        iVar10 = unaff_EBP[0x1a];
        puVar17 = puVar22;
      }
      goto LAB_1068e093;
    }
    uStack_28 = 0x1068e633;
    iStack_24 = iVar10;
    iStack_20 = iVar12;
    FUN_10689fd0();
    if (puVar17[3] == -1) {
      if (puVar17[5] != -1) {
        if (puVar17[9] != 0) {
          uVar19 = thunk_FUN_10685410();
          *(undefined4 *)(*(int *)(iVar10 + 0x430) + puVar17[5] * 4) = uVar19;
          _memcpy(*(void **)(*(int *)(iVar10 + 0x430) + puVar17[5] * 4),(void *)puVar17[8],
                  puVar17[9] * 4);
          *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x430) + puVar17[5] * 4) + puVar17[9] * 4) = 0;
        }
        if (puVar17[10] != 0) {
          uVar19 = thunk_FUN_10685440();
          *(undefined4 *)(*(int *)(iVar10 + 0x434) + puVar17[5] * 4) = uVar19;
          _memcpy(*(void **)(*(int *)(iVar10 + 0x434) + puVar17[5] * 4),(void *)puVar17[7],
                  puVar17[10] * 4);
          *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x434) + puVar17[5] * 4) + puVar17[10] * 4) = 0
          ;
        }
        FUN_10688760();
      }
      puVar17 = (undefined4 *)*puVar17;
      unaff_EBP[-0x18] = (int)puVar17;
    }
    else {
      puVar17[1] = puVar17[3];
      puVar17[2] = puVar17[4];
      puVar17[6] = 0;
    }
    goto LAB_1068e093;
  }
  unaff_EBP[-0x34] = unaff_EBP[-0x34] + -1;
  unaff_EBX = (FLevelSceneNode *)unaff_EBP[0x1e];
  iVar12 = unaff_EBP[-0x34];
  goto LAB_1068ddf0;
LAB_1068ea81:
  if (bVar7) {
    *(undefined1 *)(unaff_EBP + 0x16) = 0;
    *(undefined1 *)((int)unaff_EBP + 0x59) = 0;
    *(undefined1 *)((int)unaff_EBP + 0x5a) = 0;
    *(undefined1 *)((int)unaff_EBP + 0x5b) = 0xff;
    (**(code **)(*(int *)unaff_EBP[0x1f] + 0x10))();
  }
LAB_1068eab1:
  unaff_EBP[-0x32] = unaff_EBP[-0x32] + -1;
  iVar12 = unaff_EBP[-0x32];
  goto LAB_1068e944;
LAB_1068fb4f:
  unaff_EBP[-0x33] = unaff_EBP[-0x33] + -1;
  iVar12 = unaff_EBP[-0x33];
  goto LAB_1068fa51;
}


// ==== 1069013e Catch@1069013e depth=0 from=raiz callees=thunk_FUN_10658690@10313ead FConvexVolume::BoxCheck@1030cdce thunk_FUN_1052eb00@103065e6 thunk_FUN_106850c0@10301a73 __allshl@107a8210 `eh_vector_destructor_iterator'@107a60c2 FDynamicActor::Render@1030d36e ULevel::GetLevelInfo@1030c491 FUN_10687d00@10687d00 ULevel::GetZoneActor@10301d3e thunk_FUN_1053d3f0@10312535 thunk_FUN_1072c690@10307b53 ULevel::Brush@103034f9 ATerrainInfo::RenderDecorations@10309e6c thunk_FUN_1072eb30@1030d288 thunk_FUN_10530420@103011d1 ULevel::GetTerrainInfo@103027c0 UViewport::IsWire@10305fe2 thunk_FUN_10657c00@10309548 UModel::PointRegion@10306b6d thunk_FUN_1068c4a0@10314ed4 thunk_FUN_107320d0@1030907a AActor::GetActorRenderData@10307a40 thunk_FUN_1068c0a0@1030c0bd thunk_FUN_10522300@1030a54c thunk_FUN_10685210@1031015e UViewport::IsDepthComplexity@10302f59
// strings: 108df308=Actor | 

void Catch_1069013e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Actor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1069d200 FUN_1069d200 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000004e
// strings: 

void __thiscall FUN_1069d200(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int iStack_20;
  FName local_8 [8];
  
  iStack_20 = 0x1069d213;
  FName::FName(local_8,0);
  bVar1 = **(byte **)(param_2 + 0xc);
  *(byte **)(param_2 + 0xc) = *(byte **)(param_2 + 0xc) + 1;
  iStack_20 = param_2;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  bVar1 = **(byte **)(param_2 + 0xc);
  *(byte **)(param_2 + 0xc) = *(byte **)(param_2 + 0xc) + 1;
  puVar5 = &stack0xffffffec;
  iVar4 = param_2;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_2,puVar5);
  iStack_20 = 0;
  bVar1 = **(byte **)(param_2 + 0xc);
  *(byte **)(param_2 + 0xc) = *(byte **)(param_2 + 0xc) + 1;
  piVar3 = &iStack_20;
  iVar2 = param_2;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_2,piVar3);
  bVar1 = **(byte **)(param_2 + 0xc);
  *(byte **)(param_2 + 0xc) = *(byte **)(param_2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_2,&stack0xffffffe4);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  if (**(char **)(param_2 + 0xc) == 'B') {
    *(char **)(param_2 + 0xc) = *(char **)(param_2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_2,0);
  }
  (**(code **)(*param_1 + 0x2cc))(puVar5,iVar4,piVar3,iVar2,0);
  return;
}


// ==== 1069d4c0 FUN_1069d4c0 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000004e
// strings: 

void __thiscall FUN_1069d4c0(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int iStack_20;
  FName local_8 [8];
  
  iStack_20 = 0x1069d4d3;
  FName::FName(local_8,0);
  bVar1 = **(byte **)(param_2 + 0xc);
  *(byte **)(param_2 + 0xc) = *(byte **)(param_2 + 0xc) + 1;
  iStack_20 = param_2;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  bVar1 = **(byte **)(param_2 + 0xc);
  *(byte **)(param_2 + 0xc) = *(byte **)(param_2 + 0xc) + 1;
  puVar5 = &stack0xffffffec;
  iVar4 = param_2;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_2,puVar5);
  iStack_20 = 0;
  bVar1 = **(byte **)(param_2 + 0xc);
  *(byte **)(param_2 + 0xc) = *(byte **)(param_2 + 0xc) + 1;
  piVar3 = &iStack_20;
  iVar2 = param_2;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_2,piVar3);
  bVar1 = **(byte **)(param_2 + 0xc);
  *(byte **)(param_2 + 0xc) = *(byte **)(param_2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_2,&stack0xffffffe4);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  if (**(char **)(param_2 + 0xc) == 'B') {
    *(char **)(param_2 + 0xc) = *(char **)(param_2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_2,0);
  }
  (**(code **)(*param_1 + 0x2cc))(puVar5,iVar4,piVar3,iVar2,1);
  return;
}


// ==== 1069d600 FUN_1069d600 depth=0 from=raiz callees=CORE.DLL::FName::FName@EXTERNAL:0000004e
// strings: 

void __thiscall FUN_1069d600(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  FName local_8 [8];
  
  FName::FName(local_8,0);
  bVar1 = **(byte **)(param_2 + 0xc);
  *(byte **)(param_2 + 0xc) = *(byte **)(param_2 + 0xc) + 1;
  iVar4 = param_2;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_2,local_8);
  bVar1 = **(byte **)(param_2 + 0xc);
  *(byte **)(param_2 + 0xc) = *(byte **)(param_2 + 0xc) + 1;
  puVar3 = &stack0xffffffec;
  iVar2 = param_2;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_2,puVar3);
  bVar1 = **(byte **)(param_2 + 0xc);
  *(byte **)(param_2 + 0xc) = *(byte **)(param_2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_2,&stack0xffffffec);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  if (**(char **)(param_2 + 0xc) == 'B') {
    *(char **)(param_2 + 0xc) = *(char **)(param_2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_2,0);
  }
  (**(code **)(*param_1 + 0x2cc))(iVar4,puVar3,0,iVar2,0);
  return;
}


// ==== 10754730 FUN_10754730 depth=0 from=raiz callees=CORE.DLL::FSphere::FSphere@EXTERNAL:000002ba CORE.DLL::TArray<unsigned_short>::Empty@EXTERNAL:000000f8 CORE.DLL::FMatrix::operator*@EXTERNAL:00000048 __alloca_probe@107a69d0 CORE.DLL::TArray<unsigned_short>::AddItem@EXTERNAL:0000035c thunk_FUN_10368430@1030b78f thunk_FUN_103284c0@1030b6e0 thunk_FUN_10326fb0@1030916f UViewport::IsLit@1030a0ec CORE.DLL::FSphere::FSphere@EXTERNAL:000000c2 thunk_FUN_104225e0@1031502d FUN_107a6660@107a6660 CORE.DLL::FName::FName@EXTERNAL:0000004e thunk_FUN_10328560@10304458 thunk_FUN_105e7110@1030ece6 CORE.DLL::FArray::Add@EXTERNAL:000000a7 CORE.DLL::FRotator::FRotator@EXTERNAL:000000bb thunk_FUN_10530420@103011d1 UViewport::IsWire@10305fe2 thunk_FUN_105263f0@10306b40 thunk_FUN_103274a0@1030d526 UParticleEmitter::RenderParticles@10301d89 thunk_FUN_105e70e0@1030c27f CORE.DLL::FArray::Empty@EXTERNAL:000000a6 CORE.DLL::FMatrix::~FMatrix@EXTERNAL:00000039 thunk_FUN_10325f90@1031447a CORE.DLL::TArray<unsigned_short>::operator()@EXTERNAL:000000f9 thunk_FUN_10526040@10301e4c UVertMeshInstance::RenderPreProcess@10309e99 thunk_FUN_1053d370@1030870b
// strings: 108d36d0=world_mat | 108d36bc=tFactor | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_10754730(UParticleEmitter *param_1,FDynamicActor *param_2,FLevelSceneNode *param_3,
            TList<FDynamicLight*> *param_4,FRenderInterface *param_5)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  UVertMeshInstance *this;
  ushort *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  FMatrix *pFVar10;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int iVar11;
  undefined4 *puVar12;
  float fVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 auStack_1980 [4];
  undefined4 uStack_1970;
  undefined4 uStack_196c;
  undefined1 *puStack_1968;
  undefined4 uStack_1964;
  uint uStack_1960;
  uint uStack_195c;
  wchar_t *pwStack_1958;
  float *pfStack_1954;
  undefined4 uStack_1950;
  wchar_t *pwStack_194c;
  FMatrix *pFStack_1948;
  undefined4 uStack_1944;
  FMatrix *pFStack_1940;
  undefined4 auStack_193c [15];
  undefined4 uStack_1900;
  FMatrix *pFStack_18fc;
  undefined4 auStack_18f8 [15];
  undefined4 uStack_18bc;
  FMatrix *pFStack_18b8;
  undefined4 auStack_18b4 [15];
  undefined4 uStack_1878;
  FMatrix *pFStack_1874;
  undefined4 auStack_1870 [15];
  undefined4 uStack_1834;
  FMatrix *pFStack_1830;
  undefined4 auStack_182c [6];
  undefined4 uStack_1814;
  int *piStack_1810;
  undefined4 uStack_180c;
  undefined8 uStack_1800;
  undefined4 local_177c [32];
  undefined4 local_16fc [48];
  FMatrix local_163c [128];
  FMatrix local_15bc [64];
  undefined4 local_157c [16];
  undefined4 local_153c [16];
  FMatrix local_14fc [64];
  undefined4 local_14bc [48];
  FMatrix local_13fc [128];
  FMatrix local_137c [128];
  undefined4 local_12fc [48];
  FMatrix local_123c [64];
  FMatrix local_11fc [64];
  FMatrix local_11bc [64];
  undefined4 local_117c [16];
  FMatrix local_113c [128];
  undefined4 local_10bc [16];
  FMatrix local_107c [64];
  undefined4 local_103c [16];
  FMatrix local_ffc [64];
  undefined4 local_fbc [16];
  undefined4 local_f7c [32];
  undefined4 local_efc [32];
  undefined4 local_e7c [80];
  FMatrix local_d3c [128];
  FMatrix local_cbc [64];
  FMatrix local_c7c [64];
  FMatrix local_c3c [64];
  FMatrix local_bfc [64];
  undefined4 local_bbc [16];
  undefined4 local_b7c [16];
  undefined4 local_b3c [16];
  undefined4 local_afc [16];
  undefined4 local_abc [112];
  FMatrix local_8fc [128];
  undefined4 local_87c [32];
  undefined4 local_7fc [16];
  FMatrix local_7bc [64];
  undefined4 local_77c [16];
  FMatrix local_73c [64];
  FMatrix local_6fc [64];
  FMatrix local_6bc [64];
  FMatrix local_67c [64];
  FMatrix local_63c [64];
  FMatrix local_5fc [64];
  FMatrix local_5bc [64];
  FMatrix local_57c [64];
  FMatrix local_53c [64];
  FMatrix local_4fc [64];
  FMatrix local_4bc [64];
  FMatrix local_47c [64];
  FMatrix local_43c [64];
  FMatrix local_3fc [64];
  FMatrix local_3bc [64];
  FMatrix local_37c [64];
  FMatrix local_33c [64];
  FMatrix local_2fc [64];
  FMatrix local_2bc [64];
  FMatrix local_27c [64];
  FMatrix local_23c [64];
  FMatrix local_1fc [64];
  FMatrix local_1bc [64];
  FMatrix local_17c [64];
  FSphere local_13c [16];
  FMatrix local_12c [68];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined1 *local_c4;
  float local_c0;
  int *local_bc;
  float local_b8;
  int *local_b4;
  undefined1 *local_b0;
  float local_ac;
  undefined1 *local_a8;
  float local_a4;
  int *local_a0;
  int local_9c;
  int local_98;
  undefined1 *local_94;
  float local_90;
  int *local_8c;
  int local_84;
  int local_80;
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  uint local_70;
  undefined1 *local_6c;
  float local_68;
  int *local_64;
  undefined1 *local_60;
  float local_5c;
  int *local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined1 *local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  byte local_16;
  byte local_15;
  float local_14;
  undefined1 *local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_74 = &LAB_1082fda5;
  local_78 = ExceptionList;
  local_80 = 0x10754758;
  local_7c = &stack0xffffe838;
  local_70 = 0;
  ExceptionList = &local_78;
  UParticleEmitter::RenderParticles(param_1,param_2,param_3,param_4,param_5);
  local_4c = 0;
  if (*(int *)(param_1 + 0x50c) == 0) {
    ExceptionList = local_78;
    return 0;
  }
  local_50 = *(undefined4 *)param_2;
  if ((((byte)param_1[0x510] & 1) != 0) &&
     (iVar5 = UViewport::IsWire(*(UViewport **)(param_3 + 4)), iVar5 == 0)) {
    iVar5 = UViewport::IsLit(*(UViewport **)(param_3 + 4));
    local_8 = (int *)0x1;
    if (iVar5 != 0) goto LAB_107547df;
  }
  local_8 = (int *)0x0;
LAB_107547df:
  FSphere::FSphere(local_13c,(FVector *)(param_1 + 0x444),2);
  iVar5 = *(int *)param_5;
  local_48 = &stack0xffffe828;
  FSphere::FSphere((FSphere *)&stack0xffffe828,local_13c);
  (**(code **)(iVar5 + 0x24))();
  if (local_8 != (int *)0x0) {
    *(uint *)(*(int *)(param_1 + 0x420) + 0x2e4) =
         *(uint *)(*(int *)(param_1 + 0x420) + 0x2e4) & 0xfffffffe;
    if (((*(byte *)(*(int *)(param_1 + 0x420) + 0x13c) & 1) == 0) ||
       (*(int *)(*(int *)(*(int *)(param_3 + 0x1cc) + 0x74) + 0x6c) == 0)) {
      (**(code **)(*(int *)param_5 + 0x20))();
    }
    else {
      local_16 = 0;
      local_15 = 0;
      piVar7 = *(int **)(*(int *)(*(int *)(param_3 + 0x1cc) + 0x74) + 0x6c);
      local_28 = (float)*(double *)(piVar7 + 0x4d);
      uStack_1800._0_4_ = 0x107548a5;
      uStack_1800._4_4_ = local_28;
      (**(code **)(*piVar7 + 0xcc))();
      local_8 = (int *)CONCAT13(0xff,(uint3)CONCAT11(local_16 >> 1,local_15 >> 1) << 8);
      uStack_1800 = (double)CONCAT44(uStack_1800._4_4_,local_8);
      (**(code **)(*(int *)param_5 + 0x20))();
    }
    local_54 = 0;
    local_30 = 0;
    while (param_4 != (TList<FDynamicLight*> *)0x0) {
      if ((*(int *)GL2Shader_exref == 0) || (2 < local_30)) {
        uStack_1800 = (double)CONCAT44(local_54,0x1075493a);
        (**(code **)(*(int *)param_5 + 0x28))();
        local_54 = local_54 + 1;
        param_4 = *(TList<FDynamicLight*> **)(param_4 + 4);
      }
      else {
        uStack_1800 = (double)CONCAT44(local_30,0x1075491b);
        (**(code **)(*(int *)param_5 + 0x30))();
        local_30 = local_30 + 1;
        param_4 = *(TList<FDynamicLight*> **)(param_4 + 4);
      }
    }
  }
  local_c = 0;
  do {
    if (*(int *)(param_1 + 0x43c) <= local_c) {
      ExceptionList = local_78;
      return local_4c;
    }
    this = (UVertMeshInstance *)(**(code **)(**(int **)(param_1 + 0x50c) + 0x98))();
    if (this != (UVertMeshInstance *)0x0) {
      iVar5 = (**(code **)(*(int *)this + 0x94))();
      iVar11 = local_c * 0x2c;
      if (*(int *)((FAnimMeshVertexStream *)(*(int *)(param_1 + 0x4d0) + iVar11) + 0x14) == 0) {
        UVertMeshInstance::RenderPreProcess
                  (this,(FAnimMeshVertexStream *)(*(int *)(param_1 + 0x4d0) + iVar11));
      }
      iVar2 = iVar11 + *(int *)(param_1 + 0x4d0);
      if (*(int *)(iVar2 + 0x14) == 0) {
        for (local_98 = 0; local_98 < *(int *)(iVar2 + 0x14); local_98 = local_98 + 1) {
        }
        FArray::Empty((FArray *)(iVar2 + 0x10),0x20,0);
        iVar11 = local_c * 0x2c;
        FArray::Add((FArray *)(iVar11 + 0x10 + *(int *)(param_1 + 0x4d0)),*(int *)(iVar5 + 0xd0),
                    0x20);
        piVar7 = (int *)(iVar11 + 0x1c + *(int *)(param_1 + 0x4d0));
        *piVar7 = *piVar7 + 1;
      }
      if (*(int *)(*(int *)(param_1 + 0x50c) + 0x1e8) == 0) {
        ExceptionList = local_78;
        return 0;
      }
      iVar5 = *(int *)(*(int *)(param_1 + 0x50c) + 0x68);
      *(undefined4 *)(this + 200) = *(undefined4 *)(*(int *)(param_1 + 0x4e8) + local_c * 4);
      uStack_1800 = (double)CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x4d0) + iVar11 + 0x10),
                                     param_3);
      local_84 = iVar5;
      (**(code **)(*(int *)this + 0x120))();
      *(undefined4 *)(*(int *)(param_1 + 0x4e8) + local_c * 4) = *(undefined4 *)(this + 200);
      local_28 = *(float *)(param_1 + 0x50c);
      uStack_180c = 0x10754a99;
      TArray<unsigned_short>::Empty
                ((TArray<unsigned_short> *)(*(int *)(param_1 + 0x4dc) + 0xc + local_c * 0x1c),
                 *(int *)((int)local_28 + 0xb8) * 3);
      thunk_FUN_10368430();
      local_70 = CONCAT31(local_70._1_3_,1);
      local_44 = 0;
      fVar13 = local_28;
      while (iVar11 = local_c, local_44 < *(int *)((int)fVar13 + 0x1e8)) {
        sVar4 = 0;
        local_48 = *(undefined1 **)(*(int *)(param_1 + 0x4dc) + local_c * 0x1c + 0x10);
        *(short *)(local_44 * 0x5c + 2 + *(int *)((int)fVar13 + 0x1e4)) = (short)local_48;
        local_8 = (int *)(uint)*(ushort *)(local_44 * 0x5c + 0xe + *(int *)((int)fVar13 + 0x1e4));
        for (local_2c = 0; iVar11 = local_44,
            local_2c <
            (int)(uint)*(ushort *)(local_44 * 0x5c + 0x10 + *(int *)((int)fVar13 + 0x1e4));
            local_2c = local_2c + 1) {
          iVar11 = local_2c + (int)local_8;
          uStack_180c = 0x10754b3a;
          puVar6 = TArray<unsigned_short>::operator()
                             ((TArray<unsigned_short> *)(*(int *)(param_1 + 0x50c) + 0xa8),iVar11);
          if ((int)(uint)*puVar6 <= iVar5) {
            local_d8 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50c) + 0xb4) + iVar11 * 8);
            local_d4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50c) + 0xb4) + 4 + iVar11 * 8);
            for (iVar11 = 0; local_9c = iVar11, iVar11 < 3; iVar11 = iVar11 + 1) {
              uVar3 = *(ushort *)((int)&local_d4 + iVar11 * -2);
              while( true ) {
                local_14 = (float)(uint)uVar3;
                if ((int)(uint)*(ushort *)
                                (*(int *)(*(int *)(param_1 + 0x50c) + 0xcc) + (int)local_14 * 0xc) <
                    iVar5) break;
                uStack_180c = 0x10754b9c;
                puVar6 = TArray<unsigned_short>::operator()
                                   ((TArray<unsigned_short> *)(*(int *)(param_1 + 0x50c) + 0xc0),
                                    (int)local_14);
                uVar3 = *puVar6;
              }
              uStack_180c = 0x10754bc7;
              local_ac = local_14;
              TArray<unsigned_short>::AddItem
                        ((TArray<unsigned_short> *)
                         (*(int *)(param_1 + 0x4dc) + 0xc + local_c * 0x1c),(ushort *)&local_ac);
              fVar13 = local_28;
            }
            sVar4 = sVar4 + 1;
          }
        }
        *(short *)(local_44 * 0x5c + 0x10 + *(int *)((int)fVar13 + 0x1e4)) = sVar4;
        uStack_180c = 0x10754bff;
        thunk_FUN_104225e0();
        local_44 = iVar11 + 1;
      }
      if (*(int *)GL2Shader_exref == 0) {
        uStack_180c = 0;
        piStack_1810 = (int *)0x10754c49;
        uStack_180c = (**(code **)(*(int *)param_5 + 0xa8))();
        iVar11 = local_c;
      }
      else {
        uStack_180c = 0x10754c30;
        uStack_180c = (**(code **)(*(int *)param_5 + 0x68))();
      }
      piStack_1810 = (int *)(*(int *)(param_1 + 0x4dc) + iVar11 * 0x1c);
      uStack_1814 = 0x10754c6c;
      local_48 = (undefined1 *)(**(code **)(*(int *)param_5 + 0xb0))();
      for (local_34 = 0; local_34 < *(int *)(*(int *)(param_1 + 0x50c) + 0x1e8);
          local_34 = local_34 + 1) {
        local_80 = *(int *)((int)local_28 + 0x1e4) + local_34 * 0x5c;
        if ((*(int *)(local_d0 + local_34 * 4) != 0) &&
           (*(short *)(*(int *)(*(int *)(param_1 + 0x50c) + 0x1e4) + 0x10 + local_34 * 0x5c) != 0))
        {
          piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x50c) + 0x98))();
          uStack_1800 = (double)CONCAT44(0x10754d03,(undefined4)uStack_1800);
          local_8 = (int *)(**(code **)(*piVar7 + 0x114))();
          puVar12 = (undefined4 *)(local_c * 0xe0 + *(int *)(param_1 + 0x42c));
          uStack_1800 = (double)CONCAT44(0x10754d29,(undefined4)uStack_1800);
          iVar5 = UViewport::IsWire(*(UViewport **)(param_3 + 4));
          if (iVar5 == 0) {
            if (((byte)param_1[0x510] & 1) == 0) {
              *(uint *)(*(int *)(*(int *)(param_1 + 0x420) + 0x46c) + 0x578) =
                   (uint)(byte)param_1[0x344];
              if (*(int *)(*(int *)(*(int *)(param_3 + 4) + 0x3c) + 0x5b8) == 7) {
                *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + 0x46c) + 0x588) = 0;
              }
              else {
                uStack_1800 = (double)CONCAT44(local_8,0x10754de9);
                uVar8 = thunk_FUN_105e70e0();
                *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + 0x46c) + 0x588) = uVar8;
              }
              *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + 0x46c) + 0x57c) = 0;
              *(uint *)(*(int *)(*(int *)(param_1 + 0x420) + 0x46c) + 0x580) =
                   *(uint *)(param_1 + 0x510) >> 1 & 1;
              *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + 0x46c) + 0x584) = 1;
              *(uint *)(*(int *)(*(int *)(param_1 + 0x420) + 0x46c) + 0x598) =
                   *(uint *)(param_1 + 0x1f8) & 1;
              *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + 0x46c) + 0x59c) =
                   *(undefined4 *)(param_1 + 500);
              puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x420) + 0x46c) + 0x5ac);
              *puVar1 = *puVar1 ^ (*(uint *)(param_1 + 0x1f8) >> 1 ^
                                  *(uint *)(*(int *)(*(int *)(param_1 + 0x420) + 0x46c) + 0x5ac)) &
                                  1;
              *(uint *)(*(int *)(*(int *)(param_1 + 0x420) + 0x46c) + 0x5a0) =
                   *(uint *)(param_1 + 0x1f8) >> 2 & 1;
              *(uint *)(*(int *)(*(int *)(param_1 + 0x420) + 0x46c) + 0x5a4) =
                   *(uint *)(param_1 + 0x1f8) >> 3 & 1;
              uStack_1800 = (double)CONCAT44(0x10754ee4,(undefined4)uStack_1800);
              iVar5 = UViewport::IsWire(*(UViewport **)(param_3 + 4));
              *(int *)(*(int *)(*(int *)(param_1 + 0x420) + 0x46c) + 0x5a8) = iVar5;
              uStack_1800 = (double)*(float *)(param_1 + 0x4c8);
              (**(code **)(*(int *)param_5 + 0x78))();
              (**(code **)(*(int *)param_5 + 0x7c))();
              if (*(int *)GL2Shader_exref == 0) {
                uStack_180c = 0;
                piStack_1810 = *(int **)(*(int *)(param_1 + 0x420) + 0x46c);
                uStack_1814 = 0x10754f6c;
                (**(code **)(*(int *)param_5 + 0x44))();
                uStack_1814 = 0x10754f78;
                (**(code **)(*(int *)param_5 + 0x80))();
              }
              else {
                (**(code **)(*(int *)param_5 + 0x54))();
                uStack_180c = 0x10754f3f;
                (**(code **)(*(int *)param_5 + 0x4c))();
                uStack_180c = 0x10754f4b;
                (**(code **)(*(int *)param_5 + 0x80))();
              }
            }
            else {
              if (DAT_11d7ecc4 == (int *)0x0) {
                local_10 = (undefined1 *)&uStack_1800;
                uStack_1800 = (double)(ulonglong)extraout_ECX;
                FName::FName((FName *)&uStack_1800,0);
                uStack_180c = 0x10754fa2;
                DAT_11d7ecc4 = (int *)thunk_FUN_105e7110();
                uStack_1800 = 1.034171926108547e-222;
                thunk_FUN_10530420();
              }
              uStack_1800 = (double)CONCAT44(0x10754fc5,(undefined4)uStack_1800);
              iVar5 = UViewport::IsWire(*(UViewport **)(param_3 + 4));
              if (iVar5 == 0) {
                if (((byte)param_1[0x510] & 4) == 0) {
                  uStack_1800 = (double)*(float *)(param_1 + 0x4c8);
                  (**(code **)(*(int *)param_5 + 0x78))();
                  (**(code **)(*(int *)param_5 + 0x7c))();
                  piVar7 = local_8;
                  if (*(int *)GL2Shader_exref == 0) goto LAB_107550bc;
                  (**(code **)(*(int *)param_5 + 0x4c))();
                }
                else {
                  DAT_11d7ecc4[0x15e] = (int)local_8;
                  uStack_1800 = (double)*(float *)(param_1 + 0x4c8);
                  (**(code **)(*(int *)param_5 + 0x78))();
                  (**(code **)(*(int *)param_5 + 0x7c))();
                  piVar7 = DAT_11d7ecc4;
                  if (*(int *)GL2Shader_exref == 0) {
LAB_107550bc:
                    uStack_180c = 0;
                    uStack_1814 = 0x107550cc;
                    piStack_1810 = piVar7;
                    (**(code **)(*(int *)param_5 + 0x44))();
                  }
                  else {
                    (**(code **)(*(int *)param_5 + 0x4c))();
                  }
                }
                (**(code **)(*(int *)param_5 + 0x80))();
              }
              else {
                if (DAT_11d7ecc0 == (UClass *)0x0) {
                  local_10 = (undefined1 *)&uStack_1800;
                  uStack_1800 = (double)(ulonglong)extraout_ECX_00;
                  FName::FName((FName *)&uStack_1800,0);
                  uStack_180c = 0x10754fee;
                  DAT_11d7ecc0 = (UClass *)thunk_FUN_1053d370();
                  uStack_1800 = 1.0341692878140227e-222;
                  thunk_FUN_10530420();
                  *(uint *)(DAT_11d7ecc0 + 0x59c) = *(uint *)(DAT_11d7ecc0 + 0x59c) | 2;
                }
                uStack_1800 = 0.0;
                uStack_180c = 0x10755027;
                (**(code **)(*(int *)param_5 + 0x44))();
              }
            }
          }
          else {
            if (DAT_11d7ecc8 == (UClass *)0x0) {
              local_10 = (undefined1 *)&uStack_1800;
              uStack_1800 = (double)(ulonglong)extraout_ECX;
              FName::FName((FName *)&uStack_1800,0);
              uStack_180c = 0x10754d52;
              DAT_11d7ecc8 = (UClass *)thunk_FUN_1053d370();
              uStack_1800 = 1.0341745644029921e-222;
              thunk_FUN_10530420();
              *(uint *)(DAT_11d7ecc8 + 0x59c) = *(uint *)(DAT_11d7ecc8 + 0x59c) | 2;
            }
            uStack_1800 = 0.0;
            uStack_180c = 0x10754d8b;
            (**(code **)(*(int *)param_5 + 0x44))();
          }
          if ((*(byte *)(puVar12 + 0x2f) & 1) != 0) {
            local_4c = local_4c + 1;
            local_70 = CONCAT31(local_70._1_3_,2);
            local_24 = *puVar12;
            local_20 = puVar12[1];
            local_1c = puVar12[2];
            uStack_1800 = (double)CONCAT44(0x1075510d,(undefined4)uStack_1800);
            FRotator::FRotator((FRotator *)&local_40,0,0,0);
            uVar14 = *(uint *)(param_1 + 0x244) & 1;
            if (uVar14 != 0) {
              local_3c = FUN_107a6660();
              local_40 = FUN_107a6660();
              local_38 = FUN_107a6660();
            }
            if (param_1[0x108] == (UParticleEmitter)0x1) {
              if (uVar14 == 0) {
                uStack_1800 = (double)CONCAT44(0x10755520,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x13;
                pFVar10 = local_3bc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x1075555e,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_105263f0();
                local_70._0_1_ = 0x14;
                pFVar10 = local_5bc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x10755592,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x15;
                pFVar10 = local_33c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x107555cb,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_103274a0();
                local_70._0_1_ = 0x16;
                pFVar10 = local_4bc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                pFVar10 = local_3bc;
                puVar9 = local_16fc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x17;
                pFVar10 = local_5bc;
                puVar9 = local_b7c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70 = CONCAT31(local_70._1_3_,0x18);
                pFVar10 = local_33c;
                puVar9 = local_117c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x19;
                pFVar10 = local_4bc;
                puVar9 = local_afc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x1a;
                iVar5 = *(int *)(param_1 + 0x420);
                local_6c = (undefined1 *)-*(float *)(iVar5 + 0x28c);
                local_68 = -*(float *)(iVar5 + 0x290);
                local_64 = (int *)-*(float *)(iVar5 + 0x294);
                uStack_1800 = (double)CONCAT44(0x1075568f,(undefined4)uStack_1800);
                local_14 = local_68;
                local_10 = local_6c;
                local_8 = local_64;
                pFVar10 = (FMatrix *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x1b;
                puVar9 = local_afc;
                puVar15 = auStack_182c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1830 = local_14fc;
                uStack_1834 = 0x107556b4;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x1c;
                puVar9 = local_117c;
                puVar15 = auStack_1870;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1874 = local_c7c;
                uStack_1878 = 0x107556d9;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x1d;
                puVar9 = local_b7c;
                puVar15 = auStack_18b4;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18b8 = local_11fc;
                uStack_18bc = 0x107556fe;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x1e;
                puVar9 = local_16fc;
                puVar15 = auStack_18f8;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18fc = local_bfc;
                uStack_1900 = 0x10755723;
                puVar9 = (undefined4 *)FMatrix::operator*(pFVar10);
                local_70 = (uint)local_70._1_3_ << 8;
                pFVar10 = local_12c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                local_70._0_1_ = 0x1e;
                uStack_1944 = 0x10755746;
                FMatrix::~FMatrix(local_bfc);
                local_70._0_1_ = 0x1d;
                uStack_1944 = 0x10755756;
                FMatrix::~FMatrix(local_11fc);
                local_70._0_1_ = 0x1c;
                uStack_1944 = 0x10755766;
                FMatrix::~FMatrix(local_c7c);
                local_70._0_1_ = 0x1b;
                uStack_1944 = 0x10755776;
                FMatrix::~FMatrix(local_14fc);
                local_70._0_1_ = 0x1a;
                uStack_1944 = 0x10755785;
                thunk_FUN_103284c0();
                local_70._0_1_ = 0x19;
                uStack_1944 = 0x10755795;
                FMatrix::~FMatrix(local_4bc);
                local_70._0_1_ = 0x18;
                uStack_1944 = 0x107557a5;
                FMatrix::~FMatrix(local_33c);
                local_70._0_1_ = 0x17;
                uStack_1944 = 0x107557b5;
                FMatrix::~FMatrix(local_5bc);
                local_70._0_1_ = 0x16;
                uStack_1944 = 0x107557c5;
                FMatrix::~FMatrix(local_3bc);
                local_70._0_1_ = 0x15;
                uStack_1944 = 0x107557d4;
                thunk_FUN_10328560();
                local_70._0_1_ = 0x14;
                uStack_1944 = 0x107557e3;
                thunk_FUN_103284c0();
                local_70._0_1_ = 0x13;
                uStack_1944 = 0x107557f2;
                thunk_FUN_10526040();
                local_70 = CONCAT31(local_70._1_3_,2);
              }
              else {
                uStack_1800 = (double)CONCAT44(0x10755195,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_10326fb0();
                local_70._0_1_ = 3;
                pFVar10 = local_2bc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x107551d3,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_105263f0();
                local_70._0_1_ = 4;
                pFVar10 = local_63c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x10755207,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_10326fb0();
                local_70._0_1_ = 5;
                pFVar10 = local_23c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x1075523b,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_105263f0();
                local_70._0_1_ = 6;
                pFVar10 = local_17c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x10755274,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_103274a0();
                local_70 = CONCAT31(local_70._1_3_,7);
                pFVar10 = local_43c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                pFVar10 = local_2bc;
                puVar9 = local_7fc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70 = CONCAT31(local_70._1_3_,8);
                pFVar10 = local_63c;
                puVar9 = local_177c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 9;
                pFVar10 = local_23c;
                puVar9 = local_77c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 10;
                pFVar10 = local_17c;
                puVar9 = local_f7c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0xb;
                pFVar10 = local_43c;
                puVar9 = local_87c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0xc;
                iVar5 = *(int *)(param_1 + 0x420);
                local_b8 = -*(float *)(iVar5 + 0x28c);
                local_b4 = (int *)-*(float *)(iVar5 + 0x290);
                local_b0 = (undefined1 *)-*(float *)(iVar5 + 0x294);
                uStack_1800 = (double)CONCAT44(0x1075534f,(undefined4)uStack_1800);
                local_14 = local_b8;
                local_10 = local_b0;
                local_8 = local_b4;
                pFVar10 = (FMatrix *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0xd;
                puVar9 = local_87c;
                puVar15 = auStack_182c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1830 = local_107c;
                uStack_1834 = 0x10755374;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0xe;
                puVar9 = local_f7c;
                puVar15 = auStack_1870;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1874 = local_8fc;
                uStack_1878 = 0x10755399;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0xf;
                puVar9 = local_77c;
                puVar15 = auStack_18b4;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18b8 = local_13fc;
                uStack_18bc = 0x107553be;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x10;
                puVar9 = local_177c;
                puVar15 = auStack_18f8;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18fc = local_6bc;
                uStack_1900 = 0x107553e3;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x11;
                puVar9 = local_7fc;
                puVar15 = auStack_193c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1940 = local_ffc;
                uStack_1944 = 0x10755408;
                puVar9 = (undefined4 *)FMatrix::operator*(pFVar10);
                local_70 = (uint)local_70._1_3_ << 8;
                pFVar10 = local_12c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                local_70._0_1_ = 0x11;
                uStack_1944 = 0x1075542b;
                FMatrix::~FMatrix(local_ffc);
                local_70._0_1_ = 0x10;
                uStack_1944 = 0x1075543b;
                FMatrix::~FMatrix(local_6bc);
                local_70._0_1_ = 0xf;
                uStack_1944 = 0x1075544b;
                FMatrix::~FMatrix(local_13fc);
                local_70._0_1_ = 0xe;
                uStack_1944 = 0x1075545b;
                FMatrix::~FMatrix(local_8fc);
                local_70._0_1_ = 0xd;
                uStack_1944 = 0x1075546b;
                FMatrix::~FMatrix(local_107c);
                local_70._0_1_ = 0xc;
                uStack_1944 = 0x1075547a;
                thunk_FUN_103284c0();
                local_70._0_1_ = 0xb;
                uStack_1944 = 0x1075548a;
                FMatrix::~FMatrix(local_43c);
                local_70._0_1_ = 10;
                uStack_1944 = 0x1075549a;
                FMatrix::~FMatrix(local_17c);
                local_70._0_1_ = 9;
                uStack_1944 = 0x107554aa;
                FMatrix::~FMatrix(local_23c);
                local_70._0_1_ = 8;
                uStack_1944 = 0x107554ba;
                FMatrix::~FMatrix(local_63c);
                local_70._0_1_ = 7;
                uStack_1944 = 0x107554ca;
                FMatrix::~FMatrix(local_2bc);
                local_70._0_1_ = 6;
                uStack_1944 = 0x107554d9;
                thunk_FUN_10328560();
                local_70._0_1_ = 5;
                uStack_1944 = 0x107554e8;
                thunk_FUN_10526040();
                local_70._0_1_ = 4;
                uStack_1944 = 0x107554f7;
                thunk_FUN_103284c0();
                local_70._0_1_ = 3;
                uStack_1944 = 0x10755506;
                thunk_FUN_10526040();
                local_70 = CONCAT31(local_70._1_3_,2);
              }
            }
            else if (param_1[0x108] == (UParticleEmitter)0x4) {
              if (uVar14 == 0) {
                uStack_1800 = (double)CONCAT44(0x10755b18,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x2d;
                pFVar10 = local_3fc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x10755b53,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_105263f0();
                local_70._0_1_ = 0x2e;
                pFVar10 = local_37c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x10755b8c,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_103274a0();
                local_70 = CONCAT31(local_70._1_3_,0x2f);
                pFVar10 = local_2fc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                pFVar10 = local_3fc;
                puVar9 = local_bbc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x30;
                pFVar10 = local_37c;
                puVar9 = local_b3c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x31;
                pFVar10 = local_2fc;
                puVar9 = local_abc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x32;
                iVar5 = *(int *)(param_1 + 0x420);
                local_94 = (undefined1 *)-*(float *)(iVar5 + 0x28c);
                local_90 = -*(float *)(iVar5 + 0x290);
                local_8c = (int *)-*(float *)(iVar5 + 0x294);
                uStack_1800 = (double)CONCAT44(0x10755c39,(undefined4)uStack_1800);
                local_14 = local_90;
                local_10 = local_94;
                local_8 = local_8c;
                pFVar10 = (FMatrix *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x33;
                puVar9 = local_abc;
                puVar15 = auStack_182c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1830 = local_d3c;
                uStack_1834 = 0x10755c5e;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x34;
                puVar9 = local_b3c;
                puVar15 = auStack_1870;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1874 = local_cbc;
                uStack_1878 = 0x10755c83;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x35;
                puVar9 = local_bbc;
                puVar15 = auStack_18b4;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18b8 = local_c3c;
                uStack_18bc = 0x10755ca8;
                puVar9 = (undefined4 *)FMatrix::operator*(pFVar10);
                local_70 = (uint)local_70._1_3_ << 8;
                pFVar10 = local_12c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                local_70._0_1_ = 0x35;
                uStack_1944 = 0x10755ccb;
                FMatrix::~FMatrix(local_c3c);
                local_70._0_1_ = 0x34;
                uStack_1944 = 0x10755cdb;
                FMatrix::~FMatrix(local_cbc);
                local_70._0_1_ = 0x33;
                uStack_1944 = 0x10755ceb;
                FMatrix::~FMatrix(local_d3c);
                local_70._0_1_ = 0x32;
                uStack_1944 = 0x10755cfa;
                thunk_FUN_103284c0();
                local_70._0_1_ = 0x31;
                uStack_1944 = 0x10755d0a;
                FMatrix::~FMatrix(local_2fc);
                local_70._0_1_ = 0x30;
                uStack_1944 = 0x10755d1a;
                FMatrix::~FMatrix(local_37c);
                local_70._0_1_ = 0x2f;
                uStack_1944 = 0x10755d2a;
                FMatrix::~FMatrix(local_3fc);
                local_70._0_1_ = 0x2e;
                uStack_1944 = 0x10755d39;
                thunk_FUN_10328560();
                local_70._0_1_ = 0x2d;
                uStack_1944 = 0x10755d48;
                thunk_FUN_10526040();
                local_70 = CONCAT31(local_70._1_3_,2);
              }
              else {
                uStack_1800 = (double)CONCAT44(0x1075582f,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x20;
                pFVar10 = local_27c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x10755863,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_105263f0();
                local_70._0_1_ = 0x21;
                pFVar10 = local_1fc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x1075589e,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_105263f0();
                local_70._0_1_ = 0x22;
                pFVar10 = local_1bc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x107558d7,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_103274a0();
                local_70 = CONCAT31(local_70._1_3_,0x23);
                pFVar10 = local_53c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                pFVar10 = local_27c;
                puVar9 = local_efc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70 = CONCAT31(local_70._1_3_,0x24);
                pFVar10 = local_1fc;
                puVar9 = local_157c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x25;
                pFVar10 = local_1bc;
                puVar9 = local_e7c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70 = CONCAT31(local_70._1_3_,0x26);
                pFVar10 = local_53c;
                puVar9 = local_12fc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x27;
                iVar5 = *(int *)(param_1 + 0x420);
                local_60 = (undefined1 *)-*(float *)(iVar5 + 0x28c);
                local_5c = -*(float *)(iVar5 + 0x290);
                local_58 = (int *)-*(float *)(iVar5 + 0x294);
                uStack_1800 = (double)CONCAT44(0x1075599b,(undefined4)uStack_1800);
                local_14 = local_5c;
                local_10 = local_60;
                local_8 = local_58;
                pFVar10 = (FMatrix *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x28;
                puVar9 = local_12fc;
                puVar15 = auStack_182c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1830 = local_7bc;
                uStack_1834 = 0x107559c0;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x29;
                puVar9 = local_e7c;
                puVar15 = auStack_1870;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1874 = local_73c;
                uStack_1878 = 0x107559e5;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x2a;
                puVar9 = local_157c;
                puVar15 = auStack_18b4;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18b8 = local_6fc;
                uStack_18bc = 0x10755a0a;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x2b;
                puVar9 = local_efc;
                puVar15 = auStack_18f8;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18fc = local_137c;
                uStack_1900 = 0x10755a2f;
                puVar9 = (undefined4 *)FMatrix::operator*(pFVar10);
                local_70 = (uint)local_70._1_3_ << 8;
                pFVar10 = local_12c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                local_70._0_1_ = 0x2b;
                uStack_1944 = 0x10755a52;
                FMatrix::~FMatrix(local_137c);
                local_70._0_1_ = 0x2a;
                uStack_1944 = 0x10755a62;
                FMatrix::~FMatrix(local_6fc);
                local_70._0_1_ = 0x29;
                uStack_1944 = 0x10755a72;
                FMatrix::~FMatrix(local_73c);
                local_70._0_1_ = 0x28;
                uStack_1944 = 0x10755a82;
                FMatrix::~FMatrix(local_7bc);
                local_70._0_1_ = 0x27;
                uStack_1944 = 0x10755a91;
                thunk_FUN_103284c0();
                local_70._0_1_ = 0x26;
                uStack_1944 = 0x10755aa1;
                FMatrix::~FMatrix(local_53c);
                local_70._0_1_ = 0x25;
                uStack_1944 = 0x10755ab1;
                FMatrix::~FMatrix(local_1bc);
                local_70._0_1_ = 0x24;
                uStack_1944 = 0x10755ac1;
                FMatrix::~FMatrix(local_1fc);
                local_70._0_1_ = 0x23;
                uStack_1944 = 0x10755ad1;
                FMatrix::~FMatrix(local_27c);
                local_70._0_1_ = 0x22;
                uStack_1944 = 0x10755ae0;
                thunk_FUN_10328560();
                local_70._0_1_ = 0x21;
                uStack_1944 = 0x10755aef;
                thunk_FUN_10526040();
                local_70._0_1_ = 0x20;
                uStack_1944 = 0x10755afe;
                thunk_FUN_10526040();
                local_70 = CONCAT31(local_70._1_3_,2);
              }
            }
            else if (uVar14 == 0) {
              uStack_1800 = (double)CONCAT44(0x10755fbe,(undefined4)uStack_1800);
              puVar9 = (undefined4 *)thunk_FUN_10326fb0();
              local_70._0_1_ = 0x41;
              pFVar10 = local_67c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              uStack_1800 = (double)CONCAT44(0x10755ff7,(undefined4)uStack_1800);
              puVar9 = (undefined4 *)thunk_FUN_103274a0();
              local_70._0_1_ = 0x42;
              pFVar10 = local_5fc;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              pFVar10 = local_67c;
              puVar9 = local_153c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *(undefined4 *)pFVar10;
                pFVar10 = pFVar10 + 4;
                puVar9 = puVar9 + 1;
              }
              local_70 = CONCAT31(local_70._1_3_,0x43);
              pFVar10 = local_5fc;
              puVar9 = local_14bc;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *(undefined4 *)pFVar10;
                pFVar10 = pFVar10 + 4;
                puVar9 = puVar9 + 1;
              }
              local_70._0_1_ = 0x44;
              iVar5 = *(int *)(param_1 + 0x420);
              local_a8 = (undefined1 *)-*(float *)(iVar5 + 0x28c);
              local_a4 = -*(float *)(iVar5 + 0x290);
              local_a0 = (int *)-*(float *)(iVar5 + 0x294);
              uStack_1800 = (double)CONCAT44(0x1075608d,(undefined4)uStack_1800);
              local_14 = local_a4;
              local_10 = local_a8;
              local_8 = local_a0;
              pFVar10 = (FMatrix *)thunk_FUN_10326fb0();
              local_70._0_1_ = 0x45;
              puVar9 = local_14bc;
              puVar15 = auStack_182c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar15 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar15 = puVar15 + 1;
              }
              pFStack_1830 = local_163c;
              uStack_1834 = 0x107560b2;
              pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
              local_70._0_1_ = 0x46;
              puVar9 = local_153c;
              puVar15 = auStack_1870;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar15 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar15 = puVar15 + 1;
              }
              pFStack_1874 = local_15bc;
              uStack_1878 = 0x107560d7;
              puVar9 = (undefined4 *)FMatrix::operator*(pFVar10);
              local_70 = (uint)local_70._1_3_ << 8;
              pFVar10 = local_12c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              local_70._0_1_ = 0x46;
              uStack_1944 = 0x107560fa;
              FMatrix::~FMatrix(local_15bc);
              local_70._0_1_ = 0x45;
              uStack_1944 = 0x1075610a;
              FMatrix::~FMatrix(local_163c);
              local_70._0_1_ = 0x44;
              uStack_1944 = 0x10756119;
              thunk_FUN_103284c0();
              local_70._0_1_ = 0x43;
              uStack_1944 = 0x10756129;
              FMatrix::~FMatrix(local_5fc);
              local_70._0_1_ = 0x42;
              uStack_1944 = 0x10756139;
              FMatrix::~FMatrix(local_67c);
              local_70._0_1_ = 0x41;
              uStack_1944 = 0x10756148;
              thunk_FUN_10328560();
              local_70 = CONCAT31(local_70._1_3_,2);
            }
            else {
              uStack_1800 = (double)CONCAT44(0x10755d7b,(undefined4)uStack_1800);
              puVar9 = (undefined4 *)thunk_FUN_10326fb0();
              local_70._0_1_ = 0x37;
              pFVar10 = local_57c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              uStack_1800 = (double)CONCAT44(0x10755daf,(undefined4)uStack_1800);
              puVar9 = (undefined4 *)thunk_FUN_105263f0();
              local_70._0_1_ = 0x38;
              pFVar10 = local_4fc;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              uStack_1800 = (double)CONCAT44(0x10755de8,(undefined4)uStack_1800);
              puVar9 = (undefined4 *)thunk_FUN_103274a0();
              local_70._0_1_ = 0x39;
              pFVar10 = local_47c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              pFVar10 = local_57c;
              puVar9 = local_10bc;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *(undefined4 *)pFVar10;
                pFVar10 = pFVar10 + 4;
                puVar9 = puVar9 + 1;
              }
              local_70._0_1_ = 0x3a;
              pFVar10 = local_4fc;
              puVar9 = local_103c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *(undefined4 *)pFVar10;
                pFVar10 = pFVar10 + 4;
                puVar9 = puVar9 + 1;
              }
              local_70._0_1_ = 0x3b;
              pFVar10 = local_47c;
              puVar9 = local_fbc;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *(undefined4 *)pFVar10;
                pFVar10 = pFVar10 + 4;
                puVar9 = puVar9 + 1;
              }
              local_70._0_1_ = 0x3c;
              iVar5 = *(int *)(param_1 + 0x420);
              local_c4 = (undefined1 *)-*(float *)(iVar5 + 0x28c);
              local_c0 = -*(float *)(iVar5 + 0x290);
              local_bc = (int *)-*(float *)(iVar5 + 0x294);
              uStack_1800 = (double)CONCAT44(0x10755e95,(undefined4)uStack_1800);
              local_14 = local_c0;
              local_10 = local_c4;
              local_8 = local_bc;
              pFVar10 = (FMatrix *)thunk_FUN_10326fb0();
              local_70._0_1_ = 0x3d;
              puVar9 = local_fbc;
              puVar15 = auStack_182c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar15 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar15 = puVar15 + 1;
              }
              pFStack_1830 = local_123c;
              uStack_1834 = 0x10755eba;
              pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
              local_70._0_1_ = 0x3e;
              puVar9 = local_103c;
              puVar15 = auStack_1870;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar15 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar15 = puVar15 + 1;
              }
              pFStack_1874 = local_11bc;
              uStack_1878 = 0x10755edf;
              pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
              local_70._0_1_ = 0x3f;
              puVar9 = local_10bc;
              puVar15 = auStack_18b4;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar15 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar15 = puVar15 + 1;
              }
              pFStack_18b8 = local_113c;
              uStack_18bc = 0x10755f04;
              puVar9 = (undefined4 *)FMatrix::operator*(pFVar10);
              local_70 = (uint)local_70._1_3_ << 8;
              pFVar10 = local_12c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              local_70._0_1_ = 0x3f;
              uStack_1944 = 0x10755f27;
              FMatrix::~FMatrix(local_113c);
              local_70._0_1_ = 0x3e;
              uStack_1944 = 0x10755f37;
              FMatrix::~FMatrix(local_11bc);
              local_70._0_1_ = 0x3d;
              uStack_1944 = 0x10755f47;
              FMatrix::~FMatrix(local_123c);
              local_70._0_1_ = 0x3c;
              uStack_1944 = 0x10755f56;
              thunk_FUN_103284c0();
              local_70._0_1_ = 0x3b;
              uStack_1944 = 0x10755f66;
              FMatrix::~FMatrix(local_47c);
              local_70._0_1_ = 0x3a;
              uStack_1944 = 0x10755f76;
              FMatrix::~FMatrix(local_4fc);
              local_70._0_1_ = 0x39;
              uStack_1944 = 0x10755f86;
              FMatrix::~FMatrix(local_57c);
              local_70._0_1_ = 0x38;
              uStack_1944 = 0x10755f95;
              thunk_FUN_10328560();
              local_70._0_1_ = 0x37;
              uStack_1944 = 0x10755fa4;
              thunk_FUN_10526040();
              local_70 = CONCAT31(local_70._1_3_,2);
            }
            uStack_1944 = 0x10756157;
            thunk_FUN_103284c0();
            if (*(int *)GL2Shader_exref == 0) {
              iVar5 = *(int *)param_5;
              pFVar10 = local_12c;
              puVar9 = auStack_1980;
              for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
                *puVar9 = *(undefined4 *)pFVar10;
                pFVar10 = pFVar10 + 4;
                puVar9 = puVar9 + 1;
              }
              (**(code **)(iVar5 + 0x40))(0);
              (**(code **)(*(int *)param_5 + 0x3c))(puVar12[0x2a]);
            }
            else {
              uStack_1944 = 4;
              pFStack_1948 = local_12c;
              pwStack_194c = L"world_mat";
              uStack_1950 = 0x10756180;
              (**(code **)(*(int *)param_5 + 0x6c))();
              local_dc = (float)_DAT_10853b38;
              local_e8 = (float)*(byte *)((int)puVar12 + 0xaa) / local_dc;
              local_e4 = (float)*(byte *)((int)puVar12 + 0xa9) / local_dc;
              local_e0 = (float)*(byte *)(puVar12 + 0x2a) / local_dc;
              local_dc = (float)*(byte *)((int)puVar12 + 0xab) / local_dc;
              uStack_1950 = 1;
              pfStack_1954 = &local_e8;
              pwStack_1958 = L"tFactor";
              uStack_195c = 0x107561e7;
              (**(code **)(*(int *)param_5 + 0x70))();
            }
            uStack_195c = (uint)*(ushort *)(local_80 + 6);
            uStack_1960 = (uint)*(ushort *)(local_80 + 4);
            uStack_1964 = *(undefined4 *)(local_d0 + local_34 * 4);
            puStack_1968 = local_48 + *(ushort *)(local_80 + 2);
            uStack_196c = 0;
            uStack_1970 = 0x1075624d;
            (**(code **)(*(int *)param_5 + 0xb4))();
            local_70 = CONCAT31(local_70._1_3_,1);
            FMatrix::~FMatrix(local_12c);
          }
        }
      }
      local_70 = local_70 & 0xffffff00;
      thunk_FUN_10325f90();
    }
    local_c = local_c + 1;
  } while( true );
}


