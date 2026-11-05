// ==== 10002f70 FUN_10002f70 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10002f70(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6f30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  iVar5 = *(int *)(param_1 + 0x2e0);
  if (iVar5 != 0) {
    uVar9 = 1;
    uVar8 = 0xff;
    uVar1 = *(undefined4 *)(param_1 + 0x2ec);
    uVar2 = *(undefined4 *)(param_1 + 0x2e8);
    uVar7 = 0;
    uVar6 = 0;
    uVar3 = FUN_101c19e0(0,0,uVar2,uVar1,iVar5,0xff,1);
    uVar4 = FUN_101c19e0(uVar3);
    FUN_10021a00(0,0,uVar4,uVar3,uVar6,uVar7,uVar2,uVar1,iVar5,uVar8,uVar9);
  }
  if ((*(int *)(param_1 + 0x2e4) != 0) && (*(int *)(param_1 + 0x2d8) != 0)) {
    iVar5 = FUN_101c19e0();
    if (0 < iVar5) {
      uVar9 = 1;
      uVar8 = 0xff;
      uVar1 = *(undefined4 *)(param_1 + 0x2e4);
      uVar2 = *(undefined4 *)(param_1 + 0x2ec);
      uVar3 = *(undefined4 *)(param_1 + 0x2e8);
      uVar7 = 0;
      uVar6 = 0;
      uVar4 = FUN_101c19e0(0,0,uVar3,uVar2,uVar1,0xff,1);
      FUN_10021a00(0,0,iVar5,uVar4,uVar6,uVar7,uVar3,uVar2,uVar1,uVar8,uVar9);
    }
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10005aa0 FUN_10005aa0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100034b0@100034b0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10005aa0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_100034b0(param_2);
  if (*(char *)(param_1 + 0x369) == '\0') {
    if (*(char *)(param_1 + 0x344) == '\0') goto LAB_10005bce;
    uVar7 = 1;
    uVar6 = 0xff;
    uVar1 = *(undefined4 *)(param_1 + 0x2ec);
    uVar5 = 0x20;
    uVar2 = 0x20;
    iVar4 = 0x20;
    iVar3 = 0;
  }
  else {
    FUN_10021a00(0xffffffd0,0xffffffd0,0x80,0x80,0,0,0x80,0x80,*(undefined4 *)(param_1 + 0x350),
                 *(undefined1 *)(param_1 + 0x360),0);
    iVar4 = (*(int *)(param_1 + 0x364) << 7) / 100;
    iVar3 = 0x10 - iVar4 / 2;
    uVar7 = 0;
    uVar6 = *(undefined1 *)(param_1 + 0x360);
    uVar1 = *(undefined4 *)(param_1 + 0x354);
    uVar5 = 0x80;
    uVar2 = 0x80;
  }
  FUN_10021a00(iVar3,iVar3,iVar4,iVar4,0,0,uVar2,uVar5,uVar1,uVar6,uVar7);
LAB_10005bce:
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10005e00 FUN_10005e00 depth=0 from=raiz callees=FUN_10005c50@10005c50 FUN_10021df0@10021df0 FUN_100034b0@100034b0 FUN_100220e0@100220e0 FUN_10058f70@10058f70 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_100212e0@100212e0 FUN_10005c80@10005c80
// strings: 

undefined4 __thiscall FUN_10005e00(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7670;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar7 = FUN_10058f70();
  iVar8 = FUN_10005c50(uVar7);
  if (iVar8 != 0) {
    uVar7 = FUN_10058f70();
    iVar8 = FUN_10005c80(uVar7);
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x1cc) != 0)) {
      iVar3 = *(int *)(param_1 + 0x80);
      iVar4 = *(int *)(iVar8 + 0x1d0);
      iVar9 = iVar3;
      if (iVar3 <= iVar4) {
        iVar9 = iVar4;
      }
      iVar5 = *(int *)(param_1 + 0x84);
      iVar6 = *(int *)(iVar8 + 0x1d4);
      iVar10 = iVar5;
      if (iVar5 <= iVar6) {
        iVar10 = iVar6;
      }
      fVar1 = *(float *)(iVar8 + 0x1d8) + (float)iVar4;
      if ((float)iVar3 + *(float *)(param_1 + 0x88) <= fVar1) {
        fVar1 = *(float *)(param_1 + 0x88);
      }
      else {
        fVar1 = fVar1 - (float)iVar3;
      }
      fVar2 = *(float *)(iVar8 + 0x1dc) + (float)iVar6;
      if ((float)iVar5 + *(float *)(param_1 + 0x8c) <= fVar2) {
        fVar2 = *(float *)(param_1 + 0x8c);
      }
      else {
        fVar2 = fVar2 - (float)iVar5;
      }
      FUN_100220e0(iVar9,iVar10,fVar1,fVar2);
      goto LAB_10005f80;
    }
  }
  uVar7 = FUN_101c19e0();
  uVar11 = FUN_101c19e0(uVar7);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar11,uVar7);
LAB_10005f80:
  FUN_100034b0(param_2);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10007c40 FUN_10007c40 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_10020bb0@10020bb0
// strings: 

undefined4 __thiscall FUN_10007c40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uStack_3c;
  int local_2c [4];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7c90;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar4 = *(int *)(param_1 + 0x224);
  if (((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) {
    if (*(int *)(param_1 + 0x1d0) != 0) {
      FUN_10021a00(0,0,0xb,0x88,0,0,0xb,0x88,*(int *)(param_1 + 0x1d0),0xff,0);
    }
    iVar4 = *(int *)(param_1 + 0x20c);
    if ((iVar4 < *(int *)(param_1 + 0x1cc)) && (*(int *)(param_1 + 0x1d4) != 0)) {
      iVar3 = (*(int *)(param_1 + 0x1cc) - iVar4) * *(int *)(param_1 + 500);
      iVar4 = iVar4 * *(int *)(param_1 + 500);
      FUN_10021a00(1,iVar4 + 1,9,iVar3,0,iVar4,9,iVar3,*(int *)(param_1 + 0x1d4),0xff,0);
    }
    iVar4 = *(int *)(param_1 + 0x1e0);
    if (iVar4 != 0) {
      uVar12 = 0;
      uVar10 = 0xff;
      uVar9 = 0x88;
      uVar8 = 0xc;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0x88;
      uVar2 = FUN_101c19e0(0x88,0,0,0xc,0x88,iVar4,0xff,0);
      FUN_10021a00(0xb,0,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,iVar4,uVar10,uVar12);
    }
    iVar4 = *(int *)(param_1 + 0x1e8);
    if (iVar4 == 0) goto LAB_10008026;
    uVar5 = 0x88;
    uVar2 = 0x88;
  }
  else if ((iVar4 == 3) || (iVar4 == 4)) {
    if (*(int *)(param_1 + 0x1d8) != 0) {
      FUN_10021a00(0,0,0xb,0x97,0,0,0xb,0x97,*(int *)(param_1 + 0x1d8),0xff,0);
    }
    if ((*(int *)(param_1 + 0x20c) < *(int *)(param_1 + 0x1cc)) && (*(int *)(param_1 + 0x1dc) != 0))
    {
      iVar4 = (*(int *)(param_1 + 0x1cc) - *(int *)(param_1 + 0x20c)) * *(int *)(param_1 + 500);
      iVar3 = *(int *)(param_1 + 0x20c) * *(int *)(param_1 + 500);
      FUN_10021a00(1,iVar3 + 1,9,iVar4,0,iVar3,9,iVar4,*(int *)(param_1 + 0x1dc),0xff,0);
    }
    iVar4 = *(int *)(param_1 + 0x1e4);
    if (iVar4 != 0) {
      uVar12 = 0;
      uVar10 = 0xff;
      uVar9 = 0x88;
      uVar8 = 0xc;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0x97;
      uVar2 = FUN_101c19e0(0x97,0,0,0xc,0x88,iVar4,0xff,0);
      FUN_10021a00(0xb,0,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,iVar4,uVar10,uVar12);
    }
    iVar4 = *(int *)(param_1 + 0x1ec);
    if (iVar4 == 0) goto LAB_10008026;
    uVar5 = 0x88;
    uVar2 = 0x97;
  }
  else {
    if (iVar4 != 5) goto LAB_10008026;
    if (*(int *)(param_1 + 0x1d8) != 0) {
      FUN_10021a00(0,0,0xb,1,0,0,0xb,1,*(int *)(param_1 + 0x1d8),0xff,0);
      FUN_10021a00(0,1,0xb,0x87,0,0x10,0xb,0x87,*(undefined4 *)(param_1 + 0x1d8),0xff,0);
      FUN_10021a00(0,0x87,0xb,0xf,0,1,0xb,0xf,*(undefined4 *)(param_1 + 0x1d8),0xff,0);
    }
    iVar4 = *(int *)(param_1 + 0x20c);
    if ((iVar4 < *(int *)(param_1 + 0x1cc)) && (*(int *)(param_1 + 0x1dc) != 0)) {
      iVar3 = *(int *)(param_1 + 500);
      iVar1 = ((*(int *)(param_1 + 0x1cc) - iVar4) + -1) * iVar3;
      FUN_10021a00(1,iVar3 * *(int *)(param_1 + 0x20c) + 1,9,iVar1,0,(iVar4 + 1) * iVar3,9,iVar1,
                   *(int *)(param_1 + 0x1dc),0xff,0);
      iVar4 = *(int *)(param_1 + 500);
      FUN_10021a00(1,(*(int *)(param_1 + 0x1cc) + -1) * iVar4 + 1,9,iVar4,0,0,9,iVar4,
                   *(undefined4 *)(param_1 + 0x1dc),0xff,0);
    }
    iVar4 = *(int *)(param_1 + 0x1e4);
    if (iVar4 != 0) {
      uVar12 = 0;
      uVar10 = 0xff;
      uVar9 = 0x97;
      uVar8 = 0xc;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0x97;
      uVar2 = FUN_101c19e0(0x97,0,0,0xc,0x97,iVar4,0xff,0);
      FUN_10021a00(0xb,0,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,iVar4,uVar10,uVar12);
    }
    iVar4 = *(int *)(param_1 + 0x1ec);
    if (iVar4 == 0) goto LAB_10008026;
    uVar5 = 0x97;
    uVar2 = 0x97;
  }
  uVar13 = 0;
  uVar11 = 0xff;
  uVar12 = 4;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 4;
  uVar7 = 0;
  uVar6 = FUN_101c19e0(0,4,uVar2,0,0,4,uVar5,iVar4,0xff,0);
  FUN_10021a00(uVar6,uVar7,uVar8,uVar2,uVar9,uVar10,uVar12,uVar5,iVar4,uVar11,uVar13);
LAB_10008026:
  iVar4 = *(int *)(param_1 + 0x208);
  local_18 = 0;
  do {
    if ((*(int *)(param_1 + 0x1cc) + *(int *)(param_1 + 0x208) <= iVar4) ||
       (*(int *)(param_1 + 0x20c) < iVar4)) {
      *(undefined4 *)(param_2 + 0x38) = 0;
      *(undefined4 *)(param_2 + 0x3c) = 0;
      ExceptionList = local_10;
      return 1;
    }
    iVar3 = *(int *)(param_1 + 0x208) + iVar4;
    local_1c = iVar4;
    if (iVar4 == *(int *)(param_1 + 0x204)) {
      FUN_10020bb0(local_2c,iVar3 * 0x804 + *(int *)(param_1 + 0x1f8),0,0,0,0,0,0);
      FUN_10021a00(0xc,(*(int *)(param_1 + 0x204) % *(int *)(param_1 + 0x1cc)) *
                       *(int *)(param_1 + 500),local_2c[0] + 3,*(undefined4 *)(param_1 + 500),0,0,
                   local_2c[0],*(undefined4 *)(param_1 + 500),*(undefined4 *)(param_1 + 0x1f0),0xff,
                   0);
      iVar3 = *(int *)(param_1 + 0x208) + iVar4;
      if (iVar3 < *(int *)(param_1 + 0x1fc)) {
        iVar1 = iVar3 * 0x804 + *(int *)(param_1 + 0x1f8);
        uVar2 = *(undefined4 *)(param_1 + 0x21c);
        iVar3 = *(int *)(param_1 + 500) * local_18;
LAB_1000816a:
        FUN_100217a0(0xe,iVar3 + 2,uVar2,iVar1,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      }
    }
    else if (iVar3 < *(int *)(param_1 + 0x1fc)) {
      iVar1 = iVar3 * 0x804 + *(int *)(param_1 + 0x1f8);
      uVar2 = 0xffdcdcdc;
      iVar3 = *(int *)(param_1 + 500) * local_18;
      goto LAB_1000816a;
    }
    iVar4 = iVar4 + 1;
    local_18 = local_18 + 1;
  } while( true );
}


// ==== 10008310 FUN_10008310 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_100218f0@100218f0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0 CORE.DLL::FString::Mid@EXTERNAL:000001b2
// strings: 

undefined4 __thiscall FUN_10008310(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FString *this;
  ushort *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uStack_40;
  FString local_30 [20];
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d7cb9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  uVar5 = 0;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  iVar3 = *(int *)(param_1 + 0x1cc);
  if (iVar3 != 0) {
    uVar15 = 0xff;
    uVar13 = 1;
    uVar1 = FUN_101c19e0(iVar3,1,0xff);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_100218f0(0,0,uVar2,uVar1,iVar3,uVar13,uVar15);
  }
  local_1c = 0;
  local_18 = *(int *)(param_1 + 0x1dc);
  while (iVar3 = FString::Len((FString *)(param_1 + 0x1d0)), local_18 < iVar3) {
    if ((local_18 == *(int *)(param_1 + 0x1e0)) && (*(int *)(param_1 + 0x1e4) != 0)) {
      FUN_100217a0(uVar5 + 1,3,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    }
    this = (FString *)FString::Mid((FString *)(param_1 + 0x1d0),(int)local_30,local_18);
    local_8._0_1_ = 1;
    uVar14 = 0xffffffff;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar15 = 0;
    uVar13 = 0;
    uVar2 = 0;
    uVar1 = 0;
    puVar4 = FString::operator*(this);
    iVar3 = FUN_100217a0(uVar5 + 3,3,0xffdcdcdc,puVar4,uVar1,uVar2,uVar13,uVar15,uVar6,uVar7,uVar8,
                         uVar9,uVar10,uVar11,uVar12,uVar14);
    uVar5 = uVar5 + iVar3;
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c = uVar5;
    FString::~FString(local_30);
    if (0x61 < uVar5) break;
    local_18 = local_18 + 1;
  }
  if ((local_18 == *(int *)(param_1 + 0x1e0)) && (*(int *)(param_1 + 0x1e4) != 0)) {
    FUN_100217a0(uVar5 + 1,3,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10009080 FUN_10009080 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FOutputDevice::Logf2@EXTERNAL:000001b5 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0
// strings: 102315e0=NCCheckBox : m_TitleSource should be valid | 

undefined4 __thiscall FUN_10009080(int param_1,ushort *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uStack_34;
  int local_24 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7f40;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  iVar5 = *(int *)(param_1 + 0x2f4);
  if (iVar5 < 0) {
    puVar3 = FString::operator*((FString *)(param_1 + 0x2e8));
  }
  else if (*(int *)(param_1 + 0x2f8) == 0) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + iVar5 * 0xc + 0x6a8dc));
  }
  else if (*(int *)(param_1 + 0x2f8) == 1) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + iVar5 * 0x5c + 0x240ec));
  }
  else {
    puVar3 = param_2;
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
    }
  }
  if (*(int *)(param_1 + 0x304) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x30c);
    uVar2 = *(undefined4 *)(param_1 + 0x308);
    uStack_34 = 1;
    if (*(int *)(param_1 + 0x300) == 0) {
      if (*(int *)(param_1 + 0x2fc) == 0) {
        uVar4 = *(undefined4 *)(param_1 + 0x2dc);
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0x2d8);
      }
      FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,uVar4,0xff);
      uVar1 = *(undefined4 *)(param_1 + 0x310);
      uVar2 = 0xffdcdcdc;
    }
    else if (*(int *)(param_1 + 0x2fc) == 0) {
      FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(param_1 + 0x2e0),0xff);
      uVar1 = *(undefined4 *)(param_1 + 0x310);
      uVar2 = 0xff808080;
    }
    else {
      FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(param_1 + 0x2e4),0xff);
      uVar1 = *(undefined4 *)(param_1 + 0x310);
      uVar2 = 0xff808080;
    }
    iVar5 = *(int *)(param_1 + 0x308) + 4;
  }
  else {
    uStack_34 = 0;
    FUN_10020bb0(local_24,puVar3,0,0,0,0,0);
    uVar1 = *(undefined4 *)(param_1 + 0x30c);
    uVar2 = *(undefined4 *)(param_1 + 0x308);
    uStack_34 = 1;
    if (*(int *)(param_1 + 0x300) == 0) {
      if (*(int *)(param_1 + 0x2fc) == 0) {
        FUN_10021a00(local_24[0] + 4,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(param_1 + 0x2dc),
                     0xff);
        uVar1 = *(undefined4 *)(param_1 + 0x310);
        uVar2 = 0xffdcdcdc;
        iVar5 = 0;
      }
      else {
        FUN_10021a00(local_24[0] + 4,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(param_1 + 0x2d8),
                     0xff);
        uVar1 = *(undefined4 *)(param_1 + 0x310);
        uVar2 = 0xffdcdcdc;
        iVar5 = 0;
      }
    }
    else if (*(int *)(param_1 + 0x2fc) == 0) {
      FUN_10021a00(local_24[0] + 4,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(param_1 + 0x2e0),
                   0xff);
      uVar1 = *(undefined4 *)(param_1 + 0x310);
      uVar2 = 0xff808080;
      iVar5 = 0;
    }
    else {
      FUN_10021a00(local_24[0] + 4,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(param_1 + 0x2e4),
                   0xff);
      uVar1 = *(undefined4 *)(param_1 + 0x310);
      uVar2 = 0xff808080;
      iVar5 = 0;
    }
  }
  uStack_34 = 0xffffffff;
  FUN_100217a0(iVar5,0,uVar2,puVar3,uVar1,0,0,0,0,0,0,0,0,0,0);
  uStack_34 = 0x10009425;
  FUN_100212e0();
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1000a640 FUN_1000a640 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_10009b10@10009b10 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021970@10021970 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1000a640(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8260;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(param_1[0x20],param_1[0x21],uVar2,uVar1);
  FUN_10002f40(param_1[0x20],param_1[0x21]);
  iVar3 = param_1[0xcb] / 2 - param_1[200] / 2;
  iVar4 = (**(code **)(*param_1 + 0x6c))();
  uVar2 = 1;
  uVar1 = 0xff;
  iVar6 = param_1[0xcb];
  if (iVar4 == 0) {
    iVar4 = param_1[0xbe];
    uVar17 = 0x11;
    uVar16 = 8;
    uVar14 = 0;
    uVar11 = 0;
    uVar9 = 8;
    uVar7 = FUN_101c19e0(8,iVar6,0,0,8,0x11,iVar4,0xff,1);
    FUN_10021a00(0,uVar7,uVar9,iVar6,uVar11,uVar14,uVar16,uVar17,iVar4,uVar1,uVar2);
    iVar6 = param_1[0xcb];
    uVar17 = 1;
    uVar16 = 0xff;
    iVar4 = param_1[0xbf];
    uVar14 = 0x11;
    uVar11 = 8;
    uVar9 = 0;
    uVar7 = 0;
    uVar1 = FUN_101c19e0(iVar6,0,0,8,0x11,iVar4,0xff,1);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021a00(8,uVar2,uVar1,iVar6,uVar7,uVar9,uVar11,uVar14,iVar4,uVar16,uVar17);
    iVar6 = param_1[0xcb];
    uVar8 = 1;
    uVar17 = 0xff;
    iVar4 = param_1[0xc0];
    uVar16 = 0x11;
    uVar14 = 8;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 8;
    uVar1 = FUN_101c19e0(8,iVar6,0,0,8,0x11,iVar4,0xff,1);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021a00(uVar2,uVar1,uVar7,iVar6,uVar9,uVar11,uVar14,uVar16,iVar4,uVar17,uVar8);
    if ((param_1[0xb9] <= param_1[0xc9]) || (param_1[0xc9] < 0)) goto LAB_1000a98c;
    uVar18 = 0xffffffff;
    uVar15 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar17 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    uVar2 = 0xff7e7e7e;
    iVar6 = (param_1[0xc6] / 2 - param_1[0xcb] / 2) + param_1[0xb7] + iVar3;
  }
  else {
    FUN_10021a00(0,param_1[0xc6] / 2 - iVar6 / 2,8,iVar6,0,0,8,0x11,param_1[0xbb],0xff,1);
    iVar6 = param_1[0xcb];
    uVar16 = 1;
    uVar14 = 0xff;
    iVar4 = param_1[0xbc];
    uVar11 = 0x11;
    uVar9 = 8;
    uVar7 = 0;
    uVar2 = 0;
    iVar5 = iVar6;
    uVar1 = FUN_101c19e0(iVar6,0,0,8,0x11,iVar4,0xff,1);
    FUN_10021a00(8,param_1[0xc6] / 2 - iVar6 / 2,uVar1,iVar5,uVar2,uVar7,uVar9,uVar11,iVar4,uVar14,
                 uVar16);
    iVar6 = param_1[0xcb];
    uVar17 = 1;
    uVar16 = 0xff;
    iVar4 = param_1[0xbd];
    uVar14 = 0x11;
    uVar11 = 8;
    uVar9 = 0;
    uVar7 = 0;
    uVar2 = 8;
    iVar5 = param_1[0xc6] / 2 - iVar6 / 2;
    uVar1 = FUN_101c19e0(iVar5,8,iVar6,0,0,8,0x11,iVar4,0xff,1);
    FUN_10021a00(uVar1,iVar5,uVar2,iVar6,uVar7,uVar9,uVar11,uVar14,iVar4,uVar16,uVar17);
    if ((param_1[0xb9] <= param_1[0xc9]) || (param_1[0xc9] < 0)) goto LAB_1000a98c;
    uVar18 = 0xffffffff;
    uVar15 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar17 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    uVar2 = 0xffdcdcdc;
    iVar6 = param_1[0xc6] / 2 + (param_1[0xb7] - param_1[0xcb] / 2) + iVar3;
  }
  FUN_100217a0(param_1[0xb6],iVar6,uVar2,uVar1,uVar7,uVar9,uVar11,uVar14,uVar16,uVar17,uVar8,uVar10,
               uVar12,uVar13,uVar15,uVar18);
LAB_1000a98c:
  if (param_1[0xc4] != 0) {
    iVar6 = (**(code **)(*param_1 + 0x74))();
    if (iVar6 != 0) {
      for (local_18 = 0; local_18 < param_1[0xb9]; local_18 = local_18 + 1) {
        FUN_10021a00(0,param_1[0xcb] * local_18 + param_1[0xc6],8,param_1[0xcb],0,0,8,0x11,
                     param_1[0xbb],0xff,1);
        iVar6 = param_1[0xcb];
        uVar16 = 1;
        uVar14 = 0xff;
        iVar4 = param_1[0xbc];
        uVar11 = 0x11;
        uVar9 = 8;
        uVar7 = 0;
        uVar2 = 0;
        iVar5 = iVar6;
        uVar1 = FUN_101c19e0(iVar6,0,0,8,0x11,iVar4,0xff,1);
        FUN_10021a00(8,iVar6 * local_18 + param_1[0xc6],uVar1,iVar5,uVar2,uVar7,uVar9,uVar11,iVar4,
                     uVar14,uVar16);
        iVar6 = param_1[0xcb];
        uVar17 = 1;
        uVar16 = 0xff;
        iVar4 = param_1[0xbd];
        uVar14 = 0x11;
        uVar11 = 8;
        uVar9 = 0;
        uVar7 = 0;
        uVar2 = 8;
        iVar5 = iVar6 * local_18 + param_1[0xc6];
        uVar1 = FUN_101c19e0(iVar5,8,iVar6,0,0,8,0x11,iVar4,0xff,1);
        FUN_10021a00(uVar1,iVar5,uVar2,iVar6,uVar7,uVar9,uVar11,uVar14,iVar4,uVar16,uVar17);
      }
      iVar6 = 0;
      while (iVar6 < param_1[0xb9]) {
        if (param_1[0xca] == iVar6) {
          uVar16 = 0xff;
          iVar4 = param_1[0xc1];
          uVar14 = 0xd;
          uVar11 = 0x10;
          uVar9 = 0;
          uVar7 = 0;
          uVar2 = 0x10;
          uVar1 = FUN_101c19e0(0x10,0,0,0x10,0xd,iVar4,0xff);
          FUN_10021970(1,param_1[0xcb] * iVar6 + param_1[0xc6],uVar1,uVar2,uVar7,uVar9,uVar11,uVar14
                       ,iVar4,uVar16);
          uVar17 = 0xff;
          iVar4 = param_1[0xc2];
          uVar16 = 0xd;
          uVar14 = 0x20;
          uVar11 = 0;
          uVar9 = 0;
          uVar7 = 0x10;
          uVar2 = 0x20;
          iVar5 = param_1[0xcb] * iVar6 + param_1[0xc6];
          uVar1 = FUN_101c19e0(iVar5,0x20,0x10,0,0,0x20,0xd,iVar4,0xff);
          FUN_10021970(uVar1,iVar5,uVar2,uVar7,uVar9,uVar11,uVar14,uVar16,iVar4,uVar17);
          uVar15 = 0xffffffff;
          uVar13 = 0;
          uVar12 = 0;
          uVar10 = 0;
          uVar8 = 0;
          uVar17 = 0;
          uVar16 = 0;
          uVar14 = 0;
          uVar11 = 0;
          uVar9 = 0;
          uVar7 = 0;
          uVar2 = 0;
          uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
          FUN_100217a0(param_1[0xb6],param_1[0xcb] * iVar6 + iVar3 + param_1[0xc6],0xffdcdcdc,uVar1,
                       uVar2,uVar7,uVar9,uVar11,uVar14,uVar16,uVar17,uVar8,uVar10,uVar12,uVar13,
                       uVar15);
          iVar6 = iVar6 + 1;
        }
        else {
          uVar15 = 0xffffffff;
          uVar13 = 0;
          uVar12 = 0;
          uVar10 = 0;
          uVar8 = 0;
          uVar17 = 0;
          uVar16 = 0;
          uVar14 = 0;
          uVar11 = 0;
          uVar9 = 0;
          uVar7 = 0;
          uVar2 = 0;
          uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
          FUN_100217a0(param_1[0xb6],param_1[0xcb] * iVar6 + param_1[0xc6] + iVar3,0xffdcdcdc,uVar1,
                       uVar2,uVar7,uVar9,uVar11,uVar14,uVar16,uVar17,uVar8,uVar10,uVar12,uVar13,
                       uVar15);
          iVar6 = iVar6 + 1;
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1000d060 FUN_1000d060 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_100218f0@100218f0 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1000d060(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8a50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar4 = *(int *)(param_1 + 0x30c);
  if (iVar4 != 0) {
    uVar13 = 0xff;
    uVar11 = 1;
    uVar1 = FUN_101c19e0(iVar4,1,0xff);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_100218f0(0,0,uVar2,uVar1,iVar4,uVar11,uVar13);
  }
  uVar14 = 0xffffffff;
  uVar12 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar13 = 0;
  uVar11 = 0;
  uVar2 = 0;
  uVar1 = 0;
  puVar3 = FString::operator*((FString *)(param_1 + 0x2f8));
  iVar4 = FUN_100217a0(*(undefined4 *)(param_1 + 0x304),*(undefined4 *)(param_1 + 0x308),0xffdcdcdc,
                       puVar3,uVar1,uVar2,uVar11,uVar13,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12,
                       uVar14);
  FUN_100217a0(*(int *)(param_1 + 0x304) + 5 + iVar4,*(undefined4 *)(param_1 + 0x308),0xffdcdcdc,
               param_1 + 0x2d8,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1000d670 FUN_1000d670 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_1003f8a0@1003f8a0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_1000cb20@1000cb20 FUN_100212e0@100212e0 FUN_10057590@10057590 UUIScript::eventOnProgressTimeUp@1000d5e0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1000d670(int *param_1,int param_2)

{
  int iVar1;
  UUIScript *this;
  FString *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uStack_44;
  FString local_34 [20];
  int local_20;
  int iStack_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d8b49;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  fVar6 = (float10)FUN_1003f8a0();
  local_20 = (int)(longlong)ROUND(fVar6 * (float10)_DAT_102325f0);
  iVar9 = local_20;
  local_20 = (int)(longlong)ROUND((float)param_1[0x22] - (float)(param_1[0xb9] * 2));
  iVar1 = local_20;
  _local_20 = CONCAT44(local_20,local_20);
  if ((param_1[0xba] == 0) &&
     (param_1[0xbb] = param_1[0xbb] + iVar9, (uint)param_1[0xbc] <= (uint)param_1[0xbb])) {
    this = (UUIScript *)(**(code **)(*param_1 + 0xc4))();
    if (this != (UUIScript *)0x0) {
      pFVar2 = (FString *)FUN_10057590(local_34);
      local_8._0_1_ = 1;
      UUIScript::eventOnProgressTimeUp(this,pFVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_34);
    }
    FUN_1000cb20(0);
    param_1[0xbb] = param_1[0xbc];
    param_1[0xba] = 1;
  }
  local_18 = (uint)(param_1[0xbb] * iVar1) / (uint)param_1[0xbc];
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(param_1[0x20],param_1[0x21],uVar4,uVar3);
  FUN_10002f40(param_1[0x20],param_1[0x21]);
  if (param_1[0xb7] != 0) {
    uVar3 = FUN_101c19e0();
    uVar4 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar4,uVar3,0,0,uVar4,uVar3,param_1[0xb7],0xff,1);
  }
  iVar9 = param_1[0xb6];
  if (iVar9 != 0) {
    iVar1 = param_1[0xb9];
    uVar11 = 1;
    uVar10 = 0xff;
    uVar3 = FUN_101c19e0(iVar9,0xff,1);
    uVar4 = FUN_101c19e0(uVar3);
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = FUN_101c19e0(0,0,uVar4);
    FUN_10021a00(iVar1,iVar1,iStack_1c - local_18,uVar5,uVar7,uVar8,uVar4,uVar3,iVar9,uVar10,uVar11)
    ;
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1000f700 FUN_1000f700 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_100676e0@100676e0 CORE.DLL::FString::FString@EXTERNAL:000001a4 __security_check_cookie@101c16c2 FUN_10002f40@10002f40 FUN_10021a00@10021a00 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_101c19e0@101c19e0 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10146040@10146040
// strings: 

void __thiscall FUN_1000f700(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  FString *pFVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uStack_144;
  int local_130 [3];
  FString local_124 [12];
  undefined1 *local_118;
  void *local_114;
  undefined1 *puStack_110;
  uint local_10c;
  undefined1 local_108 [256];
  uint local_8;
  
  puStack_110 = &LAB_101d9079;
  local_114 = ExceptionList;
  uStack_144 = DAT_103554c4 ^ (uint)local_108;
  local_118 = (undefined1 *)&uStack_144;
  ExceptionList = &local_114;
  local_10c = 0;
  local_8 = uStack_144;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  if (*(int *)(param_1 + 0x2d8) != 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(param_1 + 0x2d8),0xff,1);
  }
  if (*(int *)(param_1 + 0x2e0) != 0) {
    FUN_10021a00(0xb,8,0x18,0x18,0,0,0x18,0x18,*(int *)(param_1 + 0x2e0),0xff,1);
  }
  FString::FString(local_124);
  local_10c = CONCAT31(local_10c._1_3_,1);
  pFVar13 = local_124;
  puVar3 = FString::operator*((FString *)(param_1 + 0x354));
  FUN_10146040(puVar3,pFVar13);
  uVar14 = 0xffffffff;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar2 = 0;
  uVar1 = 0;
  iVar4 = *(int *)(param_1 + 0x348) + -0x30;
  puVar3 = FString::operator*(local_124);
  FUN_100217a0(0x29,9,0xffdcdcdc,puVar3,iVar4,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
               uVar11,uVar12,uVar14);
  iVar4 = (**(code **)(**(int **)(param_1 + 0x324) + 0x1f8))();
  if ((*(int *)(param_1 + 0x334) != 0) && (*(int *)(param_1 + 0x32c) == 3)) {
    if (*(int *)(param_1 + 0x2dc) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x34c);
      FUN_10021a00(*(undefined4 *)(param_1 + 0x348),0,uVar1,uVar1,0,0,uVar1,uVar1,
                   *(int *)(param_1 + 0x2dc),0xff,1);
    }
    if (iVar4 != 0) {
      FUN_100676e0(local_108,iVar4,1);
      FUN_10146040(local_108,local_124);
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar2 = 0;
      uVar1 = *(undefined4 *)(param_1 + 0x348);
      puVar3 = FString::operator*(local_124);
      FUN_10020bb0(local_130,puVar3,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8);
      uVar15 = 0xffffffff;
      uVar14 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar2 = 0;
      uVar1 = *(undefined4 *)(param_1 + 0x348);
      puVar3 = FString::operator*(local_124);
      FUN_100217a0((*(int *)(param_1 + 0x348) - local_130[0]) / 2,0x39,0xffe4ca7f,puVar3,uVar1,uVar2
                   ,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar14,uVar15);
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  local_10c = local_10c & 0xffffff00;
  FString::~FString(local_124);
  local_10c = 0xffffffff;
  ExceptionList = local_114;
  __security_check_cookie(local_8 ^ (uint)local_108);
  return;
}


// ==== 1000fee0 FUN_1000fee0 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 CORE.DLL::FString::operator_int@EXTERNAL:000001a1 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1000fee0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d90d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  if (*(int *)(param_1 + 0x2d8) != 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(param_1 + 0x2d8),0xff,1);
  }
  if (*(int *)(param_1 + 0x2dc) != 0) {
    FUN_10021a00(0xb,0xf,0x18,0x18,0,0,0x18,0x18,*(int *)(param_1 + 0x2dc),0xff,1);
  }
  iVar3 = FString::operator_int((FString *)(param_1 + 0x2e4));
  if (iVar3 != 0) {
    uVar14 = 0xffffffff;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 1;
    uVar2 = 0;
    uVar1 = 200;
    puVar4 = FString::operator*((FString *)(param_1 + 0x2e4));
    FUN_100217a0(0x29,0x10,0xffdcdcdc,puVar4,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11
                 ,uVar12,uVar13,uVar14);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10012860 FUN_10012860 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10068be0@10068be0 FUN_10002f40@10002f40 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10012860(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9590;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10068be0(param_2,param_1 + 0x2d8,0,0,0,0);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 100183b0 FUN_100183b0 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10014420@10014420 FUN_10015f70@10015f70 FUN_10002f40@10002f40 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_100218f0@100218f0 CORE.DLL::FString::Empty@EXTERNAL:000001a5 FUN_100169b0@100169b0 FUN_101c19e0@101c19e0 CORE.DLL::FString::operator_int@EXTERNAL:000001a1 FUN_100134e0@100134e0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10025df0@10025df0 FUN_100212e0@100212e0 FUN_10021df0@10021df0 FUN_100133c0@100133c0 __security_check_cookie@101c16c2 FUN_10013e70@10013e70 FUN_100216e0@100216e0 CORE.DLL::FString::operator+@EXTERNAL:000001c1 FUN_10141550@10141550 FUN_10015b00@10015b00 CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_1005a050@1005a050 FUN_10016270@10016270 FUN_10021970@10021970 CORE.DLL::FString::operator[]@EXTERNAL:000001a0 FUN_10020bb0@10020bb0 FUN_10013c60@10013c60 FUN_100139e0@100139e0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100183b0(int *param_1,int param_2)

{
  FString *this;
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piStack_3a4;
  uint uStack_398;
  int local_378;
  int local_374;
  int *local_370;
  undefined4 local_36c;
  int local_368;
  int local_364;
  FString local_360 [4];
  int local_35c;
  undefined1 *local_358;
  int local_354;
  int local_350;
  int local_34c [2];
  int local_344;
  int local_340;
  int local_33c;
  undefined1 *local_338;
  void *local_334;
  undefined1 *puStack_330;
  uint local_32c;
  ushort local_328 [400];
  uint local_8;
  
  puStack_330 = &LAB_101da022;
  local_334 = ExceptionList;
  uStack_398 = DAT_103554c4 ^ (uint)local_328;
  local_338 = (undefined1 *)&uStack_398;
  ExceptionList = &local_334;
  local_32c = 0;
  piStack_3a4 = (int *)0x10018411;
  local_8 = uStack_398;
  FUN_10002f40();
  FUN_101c19e0();
  FUN_101c19e0();
  piStack_3a4 = (int *)param_1[0x21];
  FUN_10021df0(param_1[0x20]);
  local_36c = 0xffdcdcdc;
  if (param_1[0xcd] == 3) {
    piStack_3a4 = (int *)0x10018465;
    FString::operator+((FString *)(param_1 + 0xde),local_360);
    local_32c._0_1_ = 1;
    FString::operator*(local_360);
    piStack_3a4 = (int *)0x1001847a;
    local_36c = FUN_1005a050();
    FString::Empty(local_360);
    local_32c = (uint)local_32c._1_3_ << 8;
    FString::~FString(local_360);
  }
  iVar2 = (**(code **)(*param_1 + 0x74))();
  if (iVar2 == 0) {
    if (param_1[0xc9] != 0) {
      piStack_3a4 = (int *)0x11;
      uVar12 = 8;
      uVar9 = 0;
      uVar7 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      FUN_10021970(0,0,8,uVar3,uVar7,uVar9,uVar12);
    }
    if (param_1[0xca] != 0) {
      piStack_3a4 = (int *)0x11;
      uVar13 = 8;
      uVar12 = 0;
      uVar9 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      uVar7 = FUN_101c19e0(uVar3);
      FUN_10021970(8,0,uVar7,uVar3,uVar9,uVar12,uVar13);
    }
    iVar2 = param_1[0xcb];
  }
  else {
    if (param_1[0xc6] != 0) {
      piStack_3a4 = (int *)0x11;
      uVar12 = 8;
      uVar9 = 0;
      uVar7 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      FUN_10021970(0,0,8,uVar3,uVar7,uVar9,uVar12);
    }
    if (param_1[199] != 0) {
      piStack_3a4 = (int *)0x11;
      uVar13 = 8;
      uVar12 = 0;
      uVar9 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      uVar7 = FUN_101c19e0(uVar3);
      FUN_10021970(8,0,uVar7,uVar3,uVar9,uVar12,uVar13);
    }
    iVar2 = param_1[200];
  }
  if (iVar2 != 0) {
    piStack_3a4 = (int *)0x11;
    uVar14 = 8;
    uVar10 = 0;
    uVar13 = 0;
    uVar3 = FUN_101c19e0(0,0,8);
    uVar12 = 8;
    uVar9 = 0;
    uVar7 = FUN_101c19e0(0,8,uVar3);
    FUN_10021970(uVar7,uVar9,uVar12,uVar3,uVar13,uVar10,uVar14);
  }
  if ((param_1[0xd2] != 0) && (param_1[0xcc] != 0)) {
    piStack_3a4 = (int *)0x10;
    uVar13 = 0xc1;
    uVar12 = 0;
    uVar9 = 0;
    uVar3 = FUN_101c19e0(0,0,0xc1);
    uVar7 = FUN_101c19e0(uVar3);
    FUN_10021970(0,0,uVar7,uVar3,uVar9,uVar12,uVar13);
  }
  local_370 = (int *)param_1[0xda];
  if ((int)local_370 < 1) {
    iVar2 = FUN_101c19e0();
  }
  else {
    iVar2 = FUN_101c19e0();
  }
  param_1[0xdb] = iVar2;
  piStack_3a4 = (int *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(param_1 + 0xde));
  FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
  iVar2 = local_34c[0];
  piStack_3a4 = (int *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(param_1 + 0xed));
  FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
  iVar2 = iVar2 + local_34c[0];
  piStack_3a4 = (int *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(param_1 + 0xe1));
  FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
  if (param_1[0xdd] == 0) {
    param_1[0xd0] = (uint)(iVar2 + local_34c[0] < param_1[0xdb] + -0xc);
  }
  local_354 = 0;
  local_370 = (int *)0x0;
  if (param_1[0xcd] == 2) {
    for (iVar2 = 0; iVar5 = FString::Len((FString *)(param_1 + 0xde)), iVar2 < iVar5;
        iVar2 = iVar2 + 1) {
      local_328[iVar2] = 0x2a;
    }
    local_328[iVar2] = 0;
    piStack_3a4 = (int *)0x0;
    piVar6 = (int *)FUN_100217a0(2,2,0xffdcdcdc,local_328,0,0,0,0,0,0,0,0,0);
  }
  else {
    iVar2 = FString::Len((FString *)(param_1 + 0xde));
    if (param_1[0xd9] < iVar2) {
      piStack_3a4 = (int *)0x0;
      uVar11 = 0;
      uVar8 = 0;
      uVar14 = 0;
      uVar10 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar3 = 0;
      puVar4 = FString::operator*((FString *)(param_1 + 0xde));
      piVar6 = (int *)FUN_100217a0(2,2,local_36c,puVar4 + param_1[0xd9],uVar3,uVar7,uVar9,uVar12,
                                   uVar13,uVar10,uVar14,uVar8,uVar11);
      iVar2 = FString::Len((FString *)(param_1 + 0xde));
      if (0 < iVar2) {
        puVar4 = FString::operator*((FString *)(param_1 + 0xde));
        local_358 = (undefined1 *)&piStack_3a4;
        FString::FString((FString *)&piStack_3a4,puVar4 + param_1[0xd9]);
        local_32c = local_32c & 0xffffff00;
        piVar6 = (int *)FUN_10014420();
      }
    }
    else {
      piVar6 = (int *)0x0;
    }
  }
  piStack_3a4 = (int *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(param_1 + 0xed));
  FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
  local_33c = local_34c[0];
  piStack_3a4 = (int *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(param_1 + 0xf0));
  FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
  local_354 = local_34c[0];
  if ((local_34c[0] != 0) && (iVar2 = FUN_10141550(), iVar2 == 6)) {
    local_354 = 0xc;
  }
  if (param_1[0xcd] != 2) {
    iVar2 = *(int *)GLanguageType_exref;
    if (iVar2 == 2) {
      piStack_3a4 = piVar6;
      FUN_100139e0(2,2);
    }
    else if (iVar2 == 0) {
      piStack_3a4 = piVar6;
      FUN_10013c60(2,2);
    }
    else if (iVar2 == 3) {
      piStack_3a4 = piVar6;
      FUN_10013e70(2,2);
    }
    else if (iVar2 == 4) {
      piStack_3a4 = (int *)0x2;
      FUN_100169b0(2);
    }
    if (param_1[0xcd] != 2) {
      iVar2 = FUN_10141550();
      if ((iVar2 == 10) || (iVar2 = FUN_10141550(), iVar2 == 9)) {
        local_34c[0] = 0;
      }
      else {
        piStack_3a4 = (int *)0x0;
        uVar9 = 0;
        uVar7 = 0;
        uVar3 = 0;
        puVar4 = FString::operator*((FString *)(param_1 + 0xed));
        FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
      }
      iVar2 = FString::Len((FString *)(param_1 + 0xde));
      if (iVar2 < param_1[0xd9]) {
        iVar2 = FString::Len((FString *)(param_1 + 0xde));
        local_358 = (undefined1 *)(param_1[0xd9] - iVar2);
        piStack_3a4 = (int *)0x0;
        uVar15 = 0;
        uVar11 = 0;
        uVar8 = 0;
        uVar14 = 0;
        uVar10 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar9 = 0;
        uVar7 = 0;
        puVar4 = FString::operator*((FString *)(param_1 + 0xe1));
        puVar4 = puVar4 + (int)local_358;
        uVar3 = local_36c;
      }
      else {
        piStack_3a4 = (int *)0x0;
        uVar15 = 0;
        uVar11 = 0;
        uVar8 = 0;
        uVar14 = 0;
        uVar10 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar9 = 0;
        uVar7 = 0;
        puVar4 = FString::operator*((FString *)(param_1 + 0xe1));
        uVar3 = local_36c;
      }
      goto LAB_10018a3f;
    }
  }
  local_350 = 0;
  while (iVar2 = FString::Len((FString *)(param_1 + 0xe1)), local_350 < iVar2) {
    local_328[local_350] = 0x2a;
    local_350 = local_350 + 1;
  }
  local_328[local_350] = 0;
  piStack_3a4 = (int *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(param_1 + 0xed));
  FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
  piStack_3a4 = (int *)0x0;
  uVar15 = 0;
  uVar11 = 0;
  uVar8 = 0;
  uVar14 = 0;
  uVar10 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0xffdcdcdc;
  puVar4 = local_328;
LAB_10018a3f:
  FUN_100217a0((int)piVar6 + local_34c[0] + local_354 + 2,2,uVar3,puVar4,uVar7,uVar9,uVar12,uVar13,
               uVar10,uVar14,uVar8,uVar11,uVar15);
  iVar2 = (**(code **)(*param_1 + 0x1f8))();
  if (((iVar2 == 0) && (iVar2 = (**(code **)(*param_1 + 0x74))(), iVar2 == 0)) &&
     (iVar2 = FString::operator_int((FString *)(param_1 + 0xfd)), iVar2 != 0)) {
    piStack_3a4 = (int *)0x0;
    uVar11 = 0;
    uVar8 = 0;
    uVar14 = 0;
    uVar10 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar3 = 0;
    puVar4 = FString::operator*((FString *)(param_1 + 0xfd));
    FUN_100217a0(2,2,0xff787878,puVar4,uVar3,uVar7,uVar9,uVar12,uVar13,uVar10,uVar14,uVar8,uVar11);
  }
  if ((param_1[0xc5] == 0) || (iVar2 = FUN_10025df0(), iVar2 != 0)) {
    param_1[0xf7] = local_33c + (int)piVar6;
    if (param_1[0xf4] == 0) {
      this = (FString *)(param_1 + 0xde);
      piStack_3a4 = (int *)0x0;
      uVar9 = 0;
      uVar7 = 0;
      uVar3 = 0;
      puVar4 = FString::operator*(this);
      FUN_10020bb0(&local_374,puVar4,uVar3,uVar7,uVar9);
      iVar2 = param_1[0xf7];
      local_358 = (undefined1 *)(float)iVar2;
      if (iVar2 < 0) {
        local_358 = (undefined1 *)((float)local_358 + _DAT_10230f20);
      }
      if ((float)param_1[0x22] < (float)local_358 == ((float)param_1[0x22] == (float)local_358)) {
        local_33c = local_374 - iVar2;
        local_364 = 0;
        local_340 = 0;
        while (iVar2 = FString::Len(this), local_340 < iVar2) {
          FString::operator[](this,local_340);
          piStack_3a4 = &local_35c;
          FUN_100216e0();
          if (local_33c <= local_364) {
            param_1[0xd9] = local_340;
            break;
          }
          local_364 = local_364 + local_35c;
          local_340 = local_340 + 1;
        }
        if (local_33c <= local_364) {
          param_1[0xd9] = local_340;
        }
      }
      else {
        local_33c = FUN_101c19e0();
        local_368 = 0;
        local_344 = param_1[0xd9];
        while (iVar2 = FString::Len(this), local_344 < iVar2) {
          FString::operator[](this,local_344);
          piStack_3a4 = &local_35c;
          FUN_100216e0();
          if (local_33c <= local_368) {
            param_1[0xd9] = local_344;
            break;
          }
          local_368 = local_368 + local_35c;
          local_344 = local_344 + 1;
        }
        if (local_33c <= local_368) {
          param_1[0xd9] = local_344;
        }
      }
    }
    if (((param_1[0xcf] != 0) && (iVar2 = (**(code **)(*param_1 + 0x74))(), iVar2 != 0)) &&
       (param_1[0xd1] != 0)) {
      piStack_3a4 = (int *)0x0;
      FUN_100217a0(param_1[0xf7] + -1,2,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0);
    }
    if (param_1[0xf4] < 0) {
      piStack_3a4 = (int *)param_1[0xd5];
      FUN_100218f0((param_1[0xf7] - param_1[0xf5]) + 2,2,param_1[0xf5],0xc);
    }
    else if (0 < param_1[0xf4]) {
      local_378 = 0;
      for (iVar2 = 0; iVar2 < param_1[0xf4]; iVar2 = iVar2 + 1) {
        iVar5 = FString::Len((FString *)(param_1 + 0xde));
        if ((param_1[0xd9] <= iVar5 + iVar2) &&
           (iVar5 = FString::Len((FString *)(param_1 + 0xe1)), iVar2 < iVar5)) {
          FString::operator[]((FString *)(param_1 + 0xe1),iVar2);
          piStack_3a4 = &local_35c;
          FUN_100216e0();
          if (*(int *)GLanguageType_exref == 5) {
            piStack_3a4 = (int *)0x10018ec4;
            local_35c = FUN_10015b00();
          }
          piStack_3a4 = (int *)param_1[0xd5];
          FUN_100218f0(param_1[0xf7] + 1 + local_378,2,local_35c,0xc);
          local_378 = local_378 + local_35c;
        }
      }
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x74))();
    if ((iVar2 == 0) || (*(int *)GLanguageType_exref != 0)) {
      iVar2 = (**(code **)(*param_1 + 0x74))();
      if ((iVar2 == 0) || (*(int *)GLanguageType_exref != 2)) {
        iVar2 = (**(code **)(*param_1 + 0x74))();
        if ((iVar2 == 0) || (*(int *)GLanguageType_exref != 3)) {
          iVar2 = (**(code **)(*param_1 + 0x74))();
          if ((iVar2 != 0) && (*(int *)GLanguageType_exref == 4)) {
            piStack_3a4 = piVar6;
            FUN_10016270(2,2);
          }
        }
        else {
          piStack_3a4 = local_370;
          FUN_100134e0(2,2,piVar6,local_33c);
        }
      }
      else {
        piStack_3a4 = piVar6;
        FUN_10015f70(2,2);
      }
    }
    else {
      piStack_3a4 = piVar6;
      FUN_100133c0(2,2);
    }
    iVar2 = (**(code **)(*param_1 + 0x74))();
    if ((((iVar2 != 0) && (local_33c == 0)) && (param_1[0xcf] != 0)) && (param_1[0xd1] != 0)) {
      piStack_3a4 = (int *)0x0;
      FUN_100217a0((int)piVar6 + -1,2,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0);
    }
    local_358 = (undefined1 *)(local_33c + (int)piVar6);
    fVar1 = (float)(int)local_358;
    if ((int)local_358 < 0) {
      fVar1 = fVar1 + _DAT_10230f20;
    }
    if ((float)param_1[0x22] < fVar1) {
      param_1[0xd9] = param_1[0xd9] + 1;
    }
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_334;
  __security_check_cookie(local_8 ^ (uint)local_328);
  return;
}


// ==== 1001ba20 FUN_1001ba20 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::FString@EXTERNAL:0000019e FUN_100217a0@100217a0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 CORE.DLL::FString::operator=@EXTERNAL:000001a3 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::operator!=@EXTERNAL:000001aa FUN_101c19e0@101c19e0 CORE.DLL::FString::operator==@EXTERNAL:000001c7 FUN_10021970@10021970 FUN_10020bb0@10020bb0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1001ba20(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uStack_40;
  FString local_30 [12];
  undefined1 local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101da619;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x348) == 0) goto LAB_1001bdac;
  if (*(int *)(param_1 + 0x328) == 0) {
    if (*(int *)(param_1 + 0x32c) == 0) {
      if (*(int *)(param_1 + 0x2ec) != 0) {
        FUN_10021a00(0,0,0x10,0x14,0,0,0x10,0x14,*(int *)(param_1 + 0x2ec),0xff,1);
      }
      iVar3 = *(int *)(param_1 + 0x2f4);
      if (iVar3 != 0) {
        uVar13 = 1;
        uVar11 = 0xff;
        uVar10 = 0x14;
        uVar9 = 0x10;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0x14;
        uVar5 = 0x10;
        uVar2 = 0;
        uVar1 = FUN_101c19e0(0,0x10,0x14,0,0,0x10,0x14,iVar3,0xff,1);
        FUN_10021a00(uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,iVar3,uVar11,uVar13);
      }
      iVar3 = *(int *)(param_1 + 0x2f0);
      if (iVar3 != 0) {
        uVar9 = 0xff;
        uVar8 = 0x14;
        uVar7 = 0x20;
        uVar6 = 0;
        uVar5 = 0;
        uVar2 = 0x14;
        uVar1 = FUN_101c19e0(0x14,0,0,0x20,0x14,iVar3,0xff);
        FUN_10021970(0x10,0,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,iVar3,uVar9);
      }
      FString::FString(local_30,(FString *)(param_1 + 0x2d8));
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar3 = FString::operator==(local_30,(ushort *)&DAT_1022f9f8);
      if ((iVar3 != 0) && (*(int *)(param_1 + 0x2e4) != -1)) {
        puVar4 = FString::operator*((FString *)
                                    (GL2GameData_exref + *(int *)(param_1 + 0x2e4) * 0xc + 0x6a8dc))
        ;
        FString::operator=(local_30,puVar4);
      }
      if ((*(int *)(param_1 + 800) == 0) && (*(int *)(param_1 + 0x324) == 0)) {
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        uVar2 = 0;
        uVar1 = 0;
        puVar4 = FString::operator*(local_30);
        FUN_10020bb0(local_24,puVar4,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8);
        *(undefined4 *)(param_1 + 800) = 0x14;
        uVar1 = FUN_101c19e0();
        *(undefined4 *)(param_1 + 0x324) = uVar1;
      }
      iVar3 = FString::operator!=(local_30,(ushort *)&DAT_1022f9f8);
      if (iVar3 != 0) {
        uVar14 = 0xffffffff;
        uVar12 = 0;
        uVar13 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        uVar2 = 0;
        uVar1 = 0;
        puVar4 = FString::operator*(local_30);
        FUN_100217a0(*(undefined4 *)(param_1 + 800),*(undefined4 *)(param_1 + 0x324),0xffc8d2dc,
                     puVar4,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar13,uVar12,
                     uVar14);
      }
      local_8 = local_8 & 0xffffff00;
      FString::~FString(local_30);
      goto LAB_1001bdac;
    }
    if (*(int *)(param_1 + 0x32c) != 1) goto LAB_1001bd06;
    if (*(int *)(param_1 + 0x300) != 0) {
      FUN_10021a00(0,0,8,0xc,0,0,8,0xc,*(undefined4 *)(param_1 + 0x308),0xff,1);
    }
    iVar3 = *(int *)(param_1 + 0x304);
    if (iVar3 != 0) {
      uVar10 = 1;
      uVar9 = 0xff;
      uVar8 = 0xc;
      uVar7 = 8;
      uVar6 = 0;
      uVar5 = 0;
      uVar2 = 0xc;
      uVar1 = FUN_101c19e0(0xc,0,0,8,0xc,iVar3,0xff,1);
      FUN_10021a00(8,0,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,iVar3,uVar9,uVar10);
    }
    if (*(int *)(param_1 + 0x308) == 0) goto LAB_1001bdac;
    uVar13 = 1;
    uVar11 = 0xff;
    iVar3 = *(int *)(param_1 + 0x300);
    uVar10 = 0xc;
    uVar9 = 8;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0xc;
    uVar5 = 8;
    uVar2 = 0;
    uVar1 = FUN_101c19e0(0,8,0xc,0,0,8,0xc,iVar3,0xff,1);
  }
  else {
LAB_1001bd06:
    if ((*(int *)(param_1 + 0x328) != 1) || (*(int *)(param_1 + 0x32c) != 1)) goto LAB_1001bdac;
    if (*(int *)(param_1 + 0x30c) != 0) {
      FUN_10021a00(0,0,0xc,8,0,0,0xc,8,*(int *)(param_1 + 0x30c),0xff,1);
    }
    iVar3 = *(int *)(param_1 + 0x310);
    if (iVar3 != 0) {
      uVar9 = 1;
      uVar8 = 0xff;
      uVar7 = 8;
      uVar6 = 0xc;
      uVar5 = 0;
      uVar2 = 0;
      uVar1 = FUN_101c19e0(0,0,0xc,8,iVar3,0xff,1);
      FUN_10021a00(0,8,0xc,uVar1,uVar2,uVar5,uVar6,uVar7,iVar3,uVar8,uVar9);
    }
    iVar3 = *(int *)(param_1 + 0x314);
    if (iVar3 == 0) goto LAB_1001bdac;
    uVar13 = 1;
    uVar11 = 0xff;
    uVar10 = 8;
    uVar9 = 0xc;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 8;
    uVar5 = 0xc;
    uVar2 = FUN_101c19e0(0xc,8,0,0,0xc,8,iVar3,0xff,1);
    uVar1 = 0;
  }
  FUN_10021a00(uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,iVar3,uVar11,uVar13);
LAB_1001bdac:
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1001c190 FUN_1001c190 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1001c190(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  *(undefined4 *)(param_2 + 0x6c) = uVar2;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  if (*(int *)(param_1 + 0x374) != 0) {
    iVar1 = *(int *)(param_1 + 0x364);
    if ((iVar1 == 2) || (iVar1 == 1)) {
      uVar2 = *(undefined4 *)(param_1 + 0x358);
      uVar8 = 0xd;
      uVar7 = 9;
      uVar6 = 0xd;
      uVar5 = 9;
      uVar4 = 4;
      uVar3 = 1;
    }
    else {
      if ((iVar1 != 3) && (iVar1 != 4)) goto LAB_1001c24f;
      uVar2 = *(undefined4 *)(param_1 + 0x35c);
      uVar8 = 10;
      uVar7 = 0x18;
      uVar6 = 10;
      uVar5 = 0x18;
      uVar4 = 0xfffffffd;
      uVar3 = 0;
    }
    FUN_10021a00(uVar3,uVar4,uVar5,uVar6,0,0,uVar7,uVar8,uVar2,0xff,0);
  }
LAB_1001c24f:
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 1001eb60 FUN_1001eb60 depth=0 from=raiz callees=FUN_100220e0@100220e0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0 FUN_10021be0@10021be0
// strings: 

undefined4 __thiscall FUN_1001eb60(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dad60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_10021be0(*(undefined4 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1d4),
                 *(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),0);
  }
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  FUN_100220e0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
               *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  local_1c = 0;
  local_18 = 0;
  if ((*(byte *)(param_1 + 0xac) & 0x80) != 0) {
    if (*(int *)(param_1 + 0x58) == 3) {
      if (*(int *)(param_1 + 0x54) == 0) {
        local_18 = 0x14;
      }
      else if (*(int *)(param_1 + 0x54) == 1) {
        local_18 = 0xc;
      }
    }
    else if (*(int *)(param_1 + 0x58) == 1) {
      if (*(int *)(param_1 + 0x54) == 0) {
        local_1c = 0x14;
      }
      else if (*(int *)(param_1 + 0x54) == 1) {
        local_1c = 0xc;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x1e0);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(local_1c,local_18,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10023d10 FUN_10023d10 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_10145670@10145670 FUN_101c19e0@101c19e0 FUN_1000cc30@1000cc30 FUN_10002f40@10002f40 FUN_10020dc0@10020dc0 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10023d10(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uStack_3c;
  int local_2c;
  int local_28 [2];
  int local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101db760;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = &uStack_3c;
  if (*(int *)(param_1 + 0x300) != 0) {
    FUN_10145670(&local_2c,local_28);
    local_1c = (local_2c - *(int *)(param_1 + 0x2dc)) - *(int *)(param_1 + 0x80);
    local_20 = (local_28[0] - *(int *)(param_1 + 0x2e0)) - *(int *)(param_1 + 0x84);
    FUN_1000cc30(*(undefined4 *)(param_1 + 0xb8),3,0,local_20 * 0x10000 | local_1c & 0xffff);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  if (*(int *)(param_1 + 0x2d8) != 0) {
    FUN_10021a00(0,0,0x20,0x20,0,0,0x20,0x20,*(int *)(param_1 + 0x2d8),0xff,1);
  }
  if (((*(int *)(param_1 + 0x304) != 0) && (*(int *)(param_1 + 0x2d8) != 0)) &&
     (*(int *)(param_1 + 0x308) != 0)) {
    FUN_10020dc0(0,0,0x20,0x20,0,0,0x20,0x20,*(int *)(param_1 + 0x2d8),0xff388080);
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10030d90 FUN_10030d90 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_1002c9b0@1002c9b0 FUN_10002f40@10002f40 FUN_10020dc0@10020dc0 FUN_1002cc10@1002cc10 FUN_100218f0@100218f0 FUN_1002da20@1002da20 FUN_101c19e0@101c19e0 FUN_1014ed50@1014ed50 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0 FUN_101ad480@101ad480 FUN_1002cc60@1002cc60 FUN_10021df0@10021df0 FUN_1002ccb0@1002ccb0 FUN_10064790@10064790 FUN_10021a00@10021a00 FUN_10030af0@10030af0 FUN_1002f110@1002f110 FUN_10147a60@10147a60 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_1002c970@1002c970 FUN_10146830@10146830 CORE.DLL::FString::Printf@EXTERNAL:000001a7 FUN_100549b0@100549b0
// strings: 

undefined4 __thiscall FUN_10030d90(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FString *this;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uStack_74;
  FString local_64 [12];
  int local_58;
  int local_54;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101dc749;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(param_1[0x20],param_1[0x21],uVar2,uVar1);
  FUN_10002f40(param_1[0x20],param_1[0x21]);
  iVar5 = param_1[0xa1] + 1;
  local_18 = param_1[0xa2] + 1;
  local_38 = 0;
  local_20 = 0;
  local_54 = 0;
  local_58 = 0;
  local_30 = iVar5;
  if (param_1[0x87] != 0) {
    local_28 = local_18;
    local_24 = iVar5;
    for (local_2c = param_1[0x98] * param_1[0x96]; iVar4 = param_1[0x96],
        local_2c < param_1[0x97] * iVar4; local_2c = local_2c + 1) {
      if (local_2c % iVar4 == 0) {
        local_24 = param_1[0xa1] + 1;
        if (local_2c != param_1[0x98] * iVar4) {
          local_28 = local_28 + param_1[0x9e] + param_1[0x9c];
        }
        iVar4 = (param_1[0x9c] + 1) * param_1[0x97];
        if (iVar4 - local_28 == 0 || iVar4 < local_28) break;
      }
      else {
        local_24 = local_24 + param_1[0x9d] + param_1[0x9b];
      }
      local_1c = param_1[0x9c] / 2;
      FUN_10021a00((param_1[0x9b] / 2 - param_1[0x88] / 2) + local_24,
                   (local_1c - param_1[0x89] / 2) + local_28,param_1[0x88],param_1[0x89],0,0,
                   param_1[0x88],param_1[0x89],param_1[0x87],0xff,1);
    }
  }
  for (local_34 = param_1[0x98] * param_1[0x96]; local_34 < param_1[0x91]; local_34 = local_34 + 1)
  {
    local_1c = *(int *)(param_1[0x90] + local_34 * 4);
    if (local_1c != 0) {
      if (local_34 % param_1[0x96] == 0) {
        iVar5 = param_1[0xa1] + 1;
        if (local_34 != param_1[0x98] * param_1[0x96]) {
          local_18 = local_18 + param_1[0x9e] + param_1[0x9c];
        }
        iVar4 = (param_1[0x9c] + 1) * param_1[0x97];
        local_30 = iVar5;
        if (iVar4 - local_18 == 0 || iVar4 < local_18) break;
      }
      else {
        iVar5 = iVar5 + param_1[0x9d] + param_1[0x9b];
      }
      local_30 = iVar5;
      iVar4 = FUN_1002c970();
      if (iVar4 != 0) {
        FUN_100218f0(iVar5,local_18,param_1[0x9b],param_1[0x9c],iVar4,1,0xff);
      }
      local_40 = FUN_1002cc60();
      if (param_1[0xa7] == 0) {
        if (((param_1[0x8a] != 0) && (local_40 != 0)) && (param_1[0xa5] == 0)) {
          iVar4 = param_1[0x8b];
          iVar7 = (param_1[0x9b] / 2 - iVar4 / 2) + iVar5;
          iVar6 = (param_1[0x9c] / 2 - param_1[0x8c] / 2) + local_18;
          FUN_10021a00(iVar7,iVar6,iVar4,param_1[0x8c],0,0,iVar4,param_1[0x8c],param_1[0x8a],0xff,1)
          ;
          local_38 = local_1c;
          iVar5 = local_30;
          local_58 = iVar7;
          local_54 = iVar6;
        }
        if ((param_1[0x8d] != 0) && (local_40 == 0)) {
          iVar4 = (param_1[0x9b] / 2 - param_1[0x8e] / 2) + iVar5;
          local_40 = param_1[0x9c] / 2;
          iVar6 = (local_40 - param_1[0x8f] / 2) + local_18;
          iVar7 = param_1[0x8d];
          iVar18 = param_1[0x8f];
          iVar16 = param_1[0x8e];
          iVar12 = param_1[0x8f];
          iVar10 = param_1[0x8e];
          goto LAB_1003116b;
        }
      }
      else {
        iVar4 = iVar5 + -1;
        iVar6 = local_18 + -1;
        if (local_40 == 0) {
          iVar7 = param_1[0xb0];
        }
        else {
          iVar7 = param_1[0xaf];
        }
        iVar18 = 0x22;
        iVar16 = 0x22;
        iVar12 = 0x22;
        iVar10 = 0x22;
LAB_1003116b:
        FUN_10021a00(iVar4,iVar6,iVar10,iVar12,0,0,iVar16,iVar18,iVar7,0xff,1);
      }
      if ((*(int *)(local_1c + 0x1e54) == 4) && (iVar4 = FUN_1002cc10(), iVar4 != 0)) {
        uVar1 = FUN_1002cc10();
        FUN_10064790(param_2,iVar5,local_18,0xffdcdcdc,uVar1);
      }
      iVar4 = (**(code **)(*param_1 + 0x6c))();
      if ((iVar4 == 0) || ((param_1[0xa4] != 0 && (*(int *)(local_1c + 0x1f18) != 0)))) {
        FUN_10021a00(iVar5,local_18,param_1[0x9b],param_1[0x9c],0,0,param_1[0x9b],param_1[0x9c],
                     param_1[0xa4],0xff,1);
      }
      if (*(int *)(local_1c + 0x1f14) != 0) {
        this = (FString *)
               FString::Printf((ushort *)local_64,&DAT_10233718,*(undefined4 *)(local_1c + 0x1e64));
        local_8._0_1_ = 1;
        uVar22 = 0xffffffff;
        uVar21 = 0;
        uVar20 = 0;
        uVar19 = 0;
        uVar17 = 0;
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 0;
        uVar11 = 0;
        uVar9 = 0;
        uVar2 = 0;
        uVar1 = 0;
        puVar3 = FString::operator*(this);
        FUN_100217a0(iVar5,local_18,0xffff0000,puVar3,uVar1,uVar2,uVar9,uVar11,uVar13,uVar14,uVar15,
                     uVar17,uVar19,uVar20,uVar21,uVar22);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_64);
      }
      if (((*(int *)(local_1c + 0x1e54) == 2) && (iVar4 = FUN_1002ccb0(), iVar4 != 0)) &&
         (iVar4 = FUN_10146830(*(undefined4 *)(local_1c + 0x1e5c)), iVar4 != 0)) {
        FUN_10021a00(iVar5,local_18,param_1[0x9b],param_1[0x9c],0,0,param_1[0x9b],param_1[0x9c],
                     param_1[0xb7],0xff,1);
      }
      if (((param_1[0xa8] != 0) &&
          (iVar4 = FUN_101ad480(*(undefined4 *)(local_1c + 0x1e5c),
                                *(undefined4 *)(local_1c + 0x1e54),&local_20), iVar4 != 0)) &&
         (local_20 != 0)) {
        if (*(int *)(local_20 + 0x38) != 0) {
          local_40 = param_1[0x9c];
          local_44 = param_1[0x9b];
          uVar2 = 0xff008080;
          uVar1 = FUN_1002f110(0xff008080);
          FUN_10020dc0(iVar5,local_18,local_44,local_40,0,0,local_44,local_40,uVar1,uVar2);
          if (*(int *)(local_20 + 0x3c) != 0) {
            FUN_1014ed50(9);
            *(undefined4 *)(local_20 + 0x3c) = 0;
          }
        }
        if (((*(int *)(local_20 + 0x34) != 0) && (iVar4 = FUN_1002da20(), iVar4 == 0)) &&
           (iVar4 = FUN_10030af0(), iVar4 != 0)) {
          local_44 = param_1[0x9c];
          local_40 = param_1[0x9b];
          uVar9 = 1;
          uVar2 = 0xff;
          uVar1 = FUN_10030af0(0xff,1);
          FUN_10021a00(iVar5,local_18,local_40,local_44,0,0,local_40,local_44,uVar1,uVar2,uVar9);
        }
      }
      if (*(int *)(local_1c + 0x1f08) != 0) {
        FUN_10021a00(iVar5,local_18,param_1[0x9b],param_1[0x9c],0,0,param_1[0x9b],param_1[0x9c],
                     param_1[0xa4],0xff,1);
      }
      iVar4 = FUN_1002c9b0();
      if (iVar4 != 0) {
        uVar9 = 1;
        uVar2 = 0xff;
        uVar8 = FUN_1002c9b0(0xff,1);
        uVar1 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_10021a00(iVar5,local_18,param_1[0x9b],uVar1,0,0,param_1[0x9b],uVar1,(int)uVar8,uVar2,
                     uVar9);
      }
    }
  }
  if ((param_1[0xab] != 0) && (param_1[0xac] != 0)) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,param_1[0xac],0xff,1);
  }
  local_3c = 0;
  local_48 = 0;
  iVar5 = FUN_10147a60(&local_3c,&local_48);
  if ((iVar5 == 2) && (local_38 == local_3c)) {
    FUN_100549b0(param_2,local_38 + 0x1f1c,local_58,local_54,param_1[0x20],param_1[0x21],
                 param_1[0x22],param_1[0x23]);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 100326c0 FUN_100326c0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_10002f40@10002f40 FUN_10004ed0@10004ed0 FUN_10021a00@10021a00 CORE.DLL::FString::operator!=@EXTERNAL:000001d9 FUN_10020d60@10020d60 CORE.DLL::FString::operator=@EXTERNAL:000001a3 CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100323b0@100323b0 FUN_101c19e0@101c19e0 FUN_1004f5c0@1004f5c0 FUN_100223d0@100223d0 FUN_101b8ab0@101b8ab0 FUN_10054da0@10054da0 FUN_10054cc0@10054cc0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100326c0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uStack_60;
  FString local_50 [12];
  FString local_44 [20];
  undefined8 local_30;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101dca2d;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  iVar6 = *(int *)(param_1 + 0x2d8);
  if (iVar6 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar6,0xff,1);
  }
  local_28 = FUN_100323b0();
  iVar6 = *(int *)(param_1 + 0x308);
  local_1c = 0;
  for (; ((local_20 = iVar6, iVar6 < *(int *)(param_1 + 0x308) + local_28 &&
          (iVar6 <= *(int *)(param_1 + 0x30c))) && (iVar6 < *(int *)(param_1 + 0x2ec)));
      iVar6 = iVar6 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x2e8) + iVar6 * 4);
    local_24 = *(undefined4 *)(*piVar1 + 0xc);
    FString::FString(local_44,(ushort *)&DAT_1022f9f8);
    local_8 = CONCAT31(local_8._1_3_,1);
    puVar4 = (ushort *)FUN_1004f5c0(0);
    if (puVar4 != (ushort *)0x0) {
      FString::operator=(local_44,puVar4);
    }
    FString::FString(local_50,(ushort *)&DAT_1022f9f8);
    local_8 = CONCAT31(local_8._1_3_,2);
    uVar3 = 0;
    local_30 = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_10230fc0);
    uVar2 = (undefined4)local_30;
    puVar4 = FString::operator*(local_44);
    puVar4 = (ushort *)FUN_100223d0(puVar4,uVar2,uVar3);
    if (puVar4 != (ushort *)0x0) {
      FString::operator=(local_50,puVar4);
    }
    if (iVar6 == *(int *)(param_1 + 0x310)) {
      iVar6 = *(int *)(param_1 + 0x31c) + 0xc;
      uVar3 = 0xff646464;
      iVar5 = iVar6;
      uVar2 = FUN_101c19e0(iVar6,0xff646464);
      FUN_10020d60(0,iVar6 * local_1c,uVar2,iVar5,uVar3);
      local_24 = 0xffdcdcdc;
      iVar5 = FString::operator!=(local_50,local_44);
      iVar6 = local_20;
      if (iVar5 != 0) {
        if (piVar1[3] == 0) {
          iVar6 = FUN_10004ed0(0x3c);
          local_30 = CONCAT44(iVar6,(undefined4)local_30);
          local_8._0_1_ = 3;
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_10054da0();
          }
          local_8 = CONCAT31(local_8._1_3_,2);
          piVar1[3] = iVar6;
        }
        FUN_10054cc0();
        FUN_101b8ab0(local_44,piVar1[3],0);
        iVar6 = local_20;
      }
    }
    uVar16 = 0xffffffff;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar3 = 0;
    uVar2 = 0;
    puVar4 = FString::operator*(local_50);
    FUN_100217a0(*(undefined4 *)(param_1 + 0x314),
                 (*(int *)(param_1 + 0x31c) + 0xc) * local_1c + *(int *)(param_1 + 0x318),local_24,
                 puVar4,uVar2,uVar3,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,
                 uVar16);
    local_8._0_1_ = 1;
    FString::~FString(local_50);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_44);
    local_1c = local_1c + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10033050 FUN_10033050 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_100323b0@100323b0 FUN_101c19e0@101c19e0 FUN_1004f5c0@1004f5c0 FUN_100216e0@100216e0 FUN_10002f40@10002f40 FUN_100212e0@100212e0 FUN_100325f0@100325f0
// strings: 

undefined4 __thiscall FUN_10033050(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uStack_50;
  undefined1 local_30 [4];
  int local_2c;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101dcad8;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  *(undefined4 *)(param_1 + 0x314) = 2;
  FUN_100216e0(local_30,0x41,0);
  iVar4 = *(int *)(param_1 + 0x308);
  local_18 = 0;
  while( true ) {
    local_20 = iVar4;
    iVar3 = FUN_100323b0();
    if (((iVar3 + *(int *)(param_1 + 0x308) <= iVar4) || (*(int *)(param_1 + 0x30c) < iVar4)) ||
       (*(int *)(param_1 + 0x2ec) <= iVar4)) break;
    iVar3 = **(int **)(*(int *)(param_1 + 0x2e8) + iVar4 * 4);
    local_8._0_1_ = 1;
    uVar1 = *(undefined4 *)(iVar3 + 0xc);
    local_1c = *(int *)(iVar3 + 0x10);
    uVar16 = 0xffffffff;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 1;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = FUN_1004f5c0(0);
    FUN_100217a0(*(int *)(param_1 + 0x314) + local_1c,
                 ((*(int *)(param_1 + 0x31c) * local_18 + *(int *)(param_1 + 0x318)) - local_2c / 2)
                 + 9,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,
                 uVar15,uVar16);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100325f0();
    iVar4 = iVar4 + 1;
    local_18 = local_18 + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10035330 FUN_10035330 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021970@10021970 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_10035330(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uStack_48;
  int local_38 [5];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dcfb0;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  iVar4 = *(int *)(param_1 + 0x30c);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x2d8);
    for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {
      local_38[local_20] = *(int *)(param_1 + 0x2e4 + local_20 * 4);
    }
LAB_10035443:
    if (iVar4 == 0) goto LAB_10035472;
    uVar14 = 0xff;
    uVar11 = 0xf;
    uVar9 = 0x43;
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = FUN_101c19e0(0,0,0x43,0xf,iVar4,0xff);
    uVar2 = FUN_101c19e0(uVar1);
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    if (iVar4 == 1) {
      iVar4 = *(int *)(param_1 + 0x2dc);
      for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
        local_38[local_1c] = *(int *)(param_1 + 0x2f0 + local_1c * 4);
      }
      goto LAB_10035443;
    }
    if (iVar4 == 2) {
      iVar4 = *(int *)(param_1 + 0x2e0);
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x2d8);
      }
      local_18 = 0;
      while (local_18 < 3) {
        if (*(int *)(param_1 + 0x2fc + local_18 * 4) == 0) {
          local_38[local_18] = *(int *)(param_1 + 0x2e4 + local_18 * 4);
          local_18 = local_18 + 1;
        }
        else {
          local_38[local_18] = *(int *)(param_1 + 0x2fc + local_18 * 4);
          local_18 = local_18 + 1;
        }
      }
      goto LAB_10035443;
    }
LAB_10035472:
    if (local_38[0] != 0) {
      uVar8 = 0xff;
      uVar7 = 0x13;
      uVar6 = 8;
      uVar5 = 0;
      uVar2 = 0;
      uVar1 = FUN_101c19e0(0,0,8,0x13,local_38[0],0xff);
      FUN_10021970(0,0,8,uVar1,uVar2,uVar5,uVar6,uVar7,local_38[0],uVar8);
    }
    if (local_38[1] != 0) {
      uVar9 = 0xff;
      uVar8 = 0x13;
      uVar7 = 8;
      uVar6 = 0;
      uVar5 = 0;
      iVar4 = local_38[1];
      uVar1 = FUN_101c19e0(0,0,8,0x13,local_38[1],0xff);
      uVar2 = FUN_101c19e0(uVar1);
      FUN_10021970(8,0,uVar2,uVar1,uVar5,uVar6,uVar7,uVar8,iVar4,uVar9);
    }
    if (local_38[2] == 0) goto LAB_10035512;
    uVar14 = 0xff;
    uVar11 = 0x13;
    uVar9 = 8;
    uVar8 = 0;
    uVar7 = 0;
    iVar4 = local_38[2];
    uVar1 = FUN_101c19e0(0,0,8,0x13,local_38[2],0xff);
    uVar2 = 8;
    uVar6 = 0;
    uVar5 = FUN_101c19e0(0,8,uVar1);
  }
  FUN_10021970(uVar5,uVar6,uVar2,uVar1,uVar7,uVar8,uVar9,uVar11,iVar4,uVar14);
LAB_10035512:
  if (-1 < *(int *)(param_1 + 0x308)) {
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = 0;
    uVar1 = 0;
    puVar3 = FString::operator*((FString *)
                                (GL2GameData_exref + *(int *)(param_1 + 0x308) * 0xc + 0x6a8dc));
    FUN_10020bb0(local_38 + 1,puVar3,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8);
    local_24 = local_38[1] / 2;
    uVar1 = FUN_101c19e0();
    local_24 = local_38[2] / 2;
    iVar4 = FUN_101c19e0();
    uVar15 = 0xffffffff;
    uVar13 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar14 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = 0;
    puVar3 = FString::operator*((FString *)
                                (GL2GameData_exref + *(int *)(param_1 + 0x308) * 0xc + 0x6a8dc));
    FUN_100217a0(uVar1,iVar4 + 1,0xffe6dcbe,puVar3,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar14
                 ,uVar10,uVar12,uVar13,uVar15);
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10035670 FUN_10035670 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021970@10021970 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10035670(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int local_30;
  int local_28;
  int local_24;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dcfd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar5 = FUN_101c19e0();
  uVar6 = FUN_101c19e0(uVar5);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar6,uVar5);
  iVar2 = *(int *)(param_1 + 0x350);
  if (*(int *)(param_1 + 0x2dc) != 0) {
    uVar5 = FUN_101c19e0();
    uVar6 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar6,uVar5,0,0,uVar6,uVar5,*(undefined4 *)(param_1 + 0x2dc),0xff,1);
  }
  for (uVar7 = 0; (int)uVar7 < *(int *)(param_1 + 800) + 1; uVar7 = uVar7 + 1) {
    uVar8 = uVar7 & 0x80000001;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
    }
    if (uVar8 == 1) {
      iVar13 = *(int *)(param_1 + 0x350);
      uVar19 = 0xff;
      uVar5 = *(undefined4 *)(param_1 + 0x2f8);
      uVar18 = 0xf;
      uVar17 = 8;
      uVar16 = 0;
      uVar15 = 0;
      iVar14 = iVar13;
      uVar6 = FUN_101c19e0(iVar13,0,0,8,0xf,uVar5,0xff,1);
      FUN_10021a00(0,iVar13 * uVar7 + -1 + *(int *)(param_1 + 0x340),uVar6,iVar14,uVar15,uVar16,
                   uVar17,uVar18,uVar5,uVar19,uVar8);
    }
  }
  iVar13 = *(int *)(param_1 + 0x32c);
  local_28 = 0;
  for (; ((iVar13 < *(int *)(param_1 + 0x32c) + *(int *)(param_1 + 800) &&
          (iVar13 <= *(int *)(param_1 + 0x330))) && (iVar13 < *(int *)(param_1 + 0x300)));
      iVar13 = iVar13 + 1) {
    iVar14 = *(int *)(param_1 + 0x340);
    uVar5 = FUN_101c19e0();
    uVar6 = FUN_101c19e0(uVar5);
    FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(int *)(param_1 + 0x84) + iVar14,uVar6,uVar5);
    if (iVar13 == *(int *)(param_1 + 0x334)) {
      uVar19 = 0xff;
      uVar5 = *(undefined4 *)(param_1 + 0x2e0);
      uVar18 = 0xd;
      uVar17 = 0x10;
      uVar16 = 0;
      uVar15 = 0;
      iVar14 = iVar2;
      uVar6 = FUN_101c19e0(iVar2,0,0,0x10,0xd,uVar5,0xff);
      FUN_10021970(1,local_28 * iVar2 + -1 + *(int *)(param_1 + 0x340),uVar6,iVar14,uVar15,uVar16,
                   uVar17,uVar18,uVar5,uVar19);
      uVar20 = 0xff;
      uVar5 = *(undefined4 *)(param_1 + 0x2e4);
      uVar19 = 0xd;
      uVar18 = 0x20;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0x20;
      iVar14 = local_28 * iVar2 + -1 + *(int *)(param_1 + 0x340);
      iVar9 = iVar2;
      uVar6 = FUN_101c19e0(iVar14,0x20,iVar2,0,0,0x20,0xd,uVar5,0xff);
      FUN_10021970(uVar6,iVar14,uVar15,iVar9,uVar16,uVar17,uVar18,uVar19,uVar5,uVar20);
    }
    FUN_100212e0();
    piVar3 = *(int **)(*(int *)(param_1 + 0x2fc) + iVar13 * 4);
    local_1c = *(int *)(param_1 + 0x344);
    for (local_24 = 0; local_24 < *(int *)(param_1 + 0x30c); local_24 = local_24 + 1) {
      iVar14 = *(int *)(*(int *)(param_1 + 0x308) + local_24 * 4);
      iVar12 = local_28 * iVar2 + *(int *)(param_1 + 0x348) + *(int *)(param_1 + 0x340);
      FUN_10021df0(*(int *)(param_1 + 0x80) + local_1c,*(int *)(param_1 + 0x84) + -1 + iVar12,
                   *(undefined4 *)(iVar14 + 0x31c),0xf);
      local_30 = 0;
      for (iVar9 = 0; iVar9 < 0x10; iVar9 = iVar9 + 1) {
        piVar1 = (int *)(local_24 * 0x1a64 + iVar9 * 0x24 + 0x1004 + *piVar3);
        if (*piVar1 != 0) {
          iVar4 = piVar1[3];
          iVar10 = piVar1[7];
          if (piVar1[7] == 0) {
            iVar10 = iVar4;
          }
          iVar11 = piVar1[8];
          if (piVar1[8] == 0) {
            iVar11 = piVar1[4];
          }
          FUN_10021a00(piVar1[1] + local_1c,piVar1[2] + iVar12,iVar4,piVar1[4],piVar1[5],piVar1[6],
                       iVar10,iVar11,*piVar1,0xff,1);
          local_30 = local_30 + iVar4;
        }
      }
      iVar9 = *piVar3 + local_24 * 0x1a64;
      if (*(int *)(iVar9 + 0x1000) != 0) {
        iVar4 = *(int *)(iVar9 + 0x1a5c);
        iVar10 = *(int *)(iVar9 + 0x1a58);
        FUN_10021a00((*(int *)(iVar14 + 0x31c) / 2 - iVar10 / 2) + local_1c,
                     (local_28 * iVar2 - iVar4 / 2) + *(int *)(param_1 + 0x340) + iVar2 / 2,iVar10,
                     iVar4,0,0,iVar10,iVar4,*(int *)(iVar9 + 0x1000),0xff,1);
      }
      iVar9 = local_24 * 0x1a64 + *piVar3;
      if (*(int *)(iVar9 + 0x1a60) != 0) {
        FUN_100217a0(*(int *)(iVar9 + 0x1a58) + local_30 + 10 + local_1c,iVar12,
                     *(undefined4 *)(iVar9 + 0x1244),iVar9,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      }
      local_1c = local_1c + *(int *)(iVar14 + 0x31c);
      FUN_100212e0();
    }
    local_28 = local_28 + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1003c6f0 FUN_1003c6f0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 CORE.DLL::FString::FString@EXTERNAL:0000019e CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_10002f40@10002f40 FUN_10141550@10141550 FUN_1003b890@1003b890 CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::Mid@EXTERNAL:000001b2 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10038320@10038320 FUN_101c19e0@101c19e0 FUN_10038aa0@10038aa0 FUN_1003b4a0@1003b4a0 FUN_10038fd0@10038fd0 FUN_10037e10@10037e10 FUN_1003b100@1003b100 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10025df0@10025df0 FUN_100212e0@100212e0 FUN_10039a70@10039a70 FUN_10024670@10024670
// strings: 

undefined4 __thiscall FUN_1003c6f0(int *param_1,int param_2)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  ushort *puVar4;
  FString *pFVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_174;
  int iStack_168;
  int iStack_164;
  uint uStack_150;
  FString local_140 [12];
  FString local_134 [12];
  FString local_128 [12];
  FString local_11c [12];
  FString local_110 [12];
  FString local_104 [12];
  FString local_f8 [12];
  FString local_ec [12];
  FString local_e0 [12];
  FString local_d4 [12];
  FString local_c8 [12];
  FString local_bc [12];
  FString local_b0 [12];
  FString local_a4 [12];
  FString local_98 [12];
  FString local_8c [12];
  undefined1 *local_80;
  void *local_7c;
  undefined1 *puStack_78;
  int local_74;
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [16];
  int local_30;
  int local_28;
  undefined4 local_24;
  FString local_20 [12];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_2;
  puStack_78 = &LAB_101ddd54;
  local_7c = ExceptionList;
  uStack_150 = DAT_103554c4 ^ (uint)local_70;
  local_80 = (undefined1 *)&uStack_150;
  ExceptionList = &local_7c;
  local_74 = 0;
  FUN_10002f40();
  FUN_101c19e0();
  FUN_101c19e0();
  iStack_164 = 0x1003c772;
  FUN_10021df0();
  iVar7 = param_1[0xd8];
  local_8 = 0;
  local_30 = iVar7;
  FString::FString(local_20);
  local_74._0_1_ = 1;
  local_24 = 0;
  param_2 = FUN_1003b100();
  local_c = FUN_1003b890();
  local_14 = param_1[0xde];
  do {
    if ((param_1[0xdd] + param_1[0xde] <= local_14) || (param_1[0xf6] <= local_14)) {
      FUN_100212e0();
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      local_74 = (uint)local_74._1_3_ << 8;
      FString::~FString(local_20);
      ExceptionList = local_7c;
      return 1;
    }
    if (param_1[0xe2] == 0) {
      if (local_14 == param_1[0xe0]) {
        local_8 = 0;
        if ((param_1[0xe1] != 0) && (iVar3 = FUN_10039a70(), iVar3 != 0)) {
          pFVar2 = local_8c;
          iStack_164 = 0x1003cdbc;
          pFVar5 = (FString *)FUN_10039a70();
          pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,param_2);
          local_74._0_1_ = 0xe;
          FString::operator=(local_20,pFVar2);
          local_74._0_1_ = 1;
          FString::~FString(local_8c);
          iStack_164 = 0;
          iStack_168 = 0;
          uStack_174 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          puVar4 = FString::operator*(local_20);
          local_8 = FUN_100217a0(param_1[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
        }
        iVar3 = FUN_10025df0();
        if (iVar3 == 0) {
          local_10 = FUN_1003b4a0();
          if (param_1[0xe2] == 0) {
            local_28 = 0;
            iVar3 = *(int *)GLanguageType_exref;
            if (iVar3 == 2) {
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*((FString *)(param_1 + 0xc1));
              local_28 = FUN_100217a0(param_1[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11)
              ;
              iStack_164 = local_8;
              iStack_168 = 0;
              FString::FString((FString *)&uStack_174,(FString *)(param_1 + 0xc1));
              local_74._0_1_ = 1;
              FUN_10037e10();
            }
            else if (iVar3 == 3) {
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*((FString *)(param_1 + 0xc1));
              local_28 = FUN_100217a0(param_1[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11)
              ;
              iStack_164 = local_8;
              iStack_168 = 0;
              FString::FString((FString *)&uStack_174,(FString *)(param_1 + 0xc1));
              local_74._0_1_ = 1;
              FUN_10038320();
            }
            else if (iVar3 == 4) {
              iVar3 = FUN_10141550();
              if (iVar3 == 8) {
                iStack_164 = 0;
                iStack_168 = 0;
                uStack_174 = 0;
                uVar11 = 0;
                uVar10 = 0;
                puVar4 = FString::operator*((FString *)(param_1 + 0xc1));
                local_28 = FUN_100217a0(param_1[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,
                                        uVar11);
              }
              iStack_164 = local_8;
              iStack_168 = 0;
              FString::FString((FString *)&uStack_174,(FString *)(param_1 + 0xc1));
              local_74._0_1_ = 1;
              FUN_10038fd0();
            }
            else {
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar11 = 0;
              uVar10 = 0;
              if (iVar3 == 0) {
                puVar4 = FString::operator*((FString *)(param_1 + 0xc1));
                local_28 = FUN_100217a0(param_1[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,
                                        uVar11);
                FString::FString((FString *)&iStack_168,(FString *)(param_1 + 0xc1));
                local_74._0_1_ = 1;
                FUN_10038aa0();
              }
              else {
                puVar4 = FString::operator*((FString *)(param_1 + 0xc1));
                local_28 = FUN_100217a0(param_1[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,
                                        uVar11);
              }
            }
            local_8 = local_8 + local_28;
            iVar3 = FUN_10039a70();
            if (iVar3 != 0) {
              if (local_10 < 1) {
                iVar3 = param_1[0xdb];
                pFVar2 = (FString *)FUN_10039a70();
                FString::Len(pFVar2);
                pFVar2 = local_104;
                iStack_164 = 0x1003d355;
                pFVar5 = (FString *)FUN_10039a70();
                pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,iVar3);
                local_74._0_1_ = 0x1a;
                FString::operator=(local_20,pFVar2);
                pFVar2 = local_104;
              }
              else {
                iVar3 = param_1[0xdb];
                pFVar2 = local_bc;
                iStack_164 = 0x1003d2f7;
                pFVar5 = (FString *)FUN_10039a70();
                pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,iVar3);
                local_74._0_1_ = 0x19;
                FString::operator=(local_20,pFVar2);
                pFVar2 = local_bc;
              }
              local_74._0_1_ = 1;
              FString::~FString(pFVar2);
              iVar3 = FString::Len(local_20);
              if (iVar3 != 0) {
                iStack_164 = 0;
                iStack_168 = 0;
                uStack_174 = 0;
                uVar12 = 0;
                uVar11 = 0;
                uVar10 = 0;
                puVar4 = FString::operator*(local_20);
                FUN_100217a0(param_1[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
              }
            }
          }
          else {
            iVar3 = *(int *)GLanguageType_exref;
            if (iVar3 == 2) {
              pFVar2 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_40,0);
              local_74._0_1_ = 0xf;
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*(pFVar2);
              FUN_100217a0(param_1[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
              local_74._0_1_ = 1;
              FString::~FString(local_40);
              iStack_168 = local_8;
              iVar3 = local_10;
              iStack_164 = iVar7;
              FString::Mid((FString *)(param_1 + 0xc1),(int)&stack0xfffffe88,0);
              local_74._0_1_ = 1;
              FUN_10037e10(iVar3);
            }
            else if (iVar3 == 3) {
              pFVar2 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_a4,0);
              local_74._0_1_ = 0x11;
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*(pFVar2);
              FUN_100217a0(param_1[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
              local_74._0_1_ = 1;
              FString::~FString(local_a4);
              iStack_168 = local_8;
              iVar3 = local_10;
              iStack_164 = iVar7;
              FString::Mid((FString *)(param_1 + 0xc1),(int)&stack0xfffffe88,0);
              local_74._0_1_ = 1;
              FUN_10038320(iVar3);
            }
            else if (iVar3 == 4) {
              iStack_164 = local_8;
              iStack_168 = 0;
              FString::Mid((FString *)(param_1 + 0xc1),(int)&uStack_174,0);
              local_74._0_1_ = 1;
              FUN_10038fd0();
            }
            else {
              pFVar2 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_11c,0);
              local_74._0_1_ = 0x14;
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*(pFVar2);
              FUN_100217a0(param_1[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
              local_74._0_1_ = 1;
              FString::~FString(local_11c);
            }
          }
          iVar3 = (**(code **)(*param_1 + 0x74))();
          if (((iVar3 != 0) && (param_1[0xdc] != 0)) && (*(int *)GLanguageType_exref == 2)) {
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar4 = (ushort *)&DAT_10230ff8;
            iVar3 = param_1[0xd8] + param_1[0xe1];
LAB_1003db1f:
            FUN_100217a0(iVar3,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
          }
        }
        else {
          iVar3 = FUN_10141550();
          if (((((iVar3 == 10) || (iVar3 = FUN_10141550(), iVar3 == 9)) ||
               ((iVar3 = FUN_10141550(), iVar3 == 0xb ||
                ((iVar3 = FUN_10141550(), iVar3 == 8 || (iVar3 = FUN_10141550(), iVar3 == 0xc))))))
              && (param_1[0xb6] != 0)) && (iVar3 = FUN_10024670(), iVar3 != 0)) {
            piVar6 = (int *)FUN_10024670();
            piVar6 = (int *)(**(code **)(*piVar6 + 0x200))();
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 0x13c))();
            }
          }
          iVar3 = (**(code **)(*param_1 + 0x74))();
          if ((iVar3 != 0) && (param_1[0xdc] != 0)) {
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            FUN_100217a0(param_1[0xd8] + -3 + local_8,iVar7,0xffdcdcdc,&DAT_10230ff8,0,0);
          }
          local_10 = FUN_1003b4a0();
          iVar3 = FUN_10039a70();
          if (iVar3 != 0) {
            if (local_14 + 1 < param_1[0xf6]) {
              if (local_10 == 0) {
                iVar3 = param_1[0xdb];
                pFVar2 = (FString *)FUN_10039a70();
                FString::Len(pFVar2);
                pFVar2 = local_4c;
                iStack_164 = 0x1003d578;
                pFVar5 = (FString *)FUN_10039a70();
                pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,iVar3);
                local_74._0_1_ = 0x1b;
                FString::operator=(local_20,pFVar2);
                pFVar2 = local_4c;
              }
              else {
                iVar3 = param_1[0xdb];
                pFVar2 = local_58;
                iStack_164 = 0x1003d5ba;
                pFVar5 = (FString *)FUN_10039a70();
                pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,iVar3);
                local_74._0_1_ = 0x1c;
                FString::operator=(local_20,pFVar2);
                pFVar2 = local_58;
              }
            }
            else {
              iVar3 = param_1[0xdb];
              pFVar2 = (FString *)FUN_10039a70();
              FString::Len(pFVar2);
              iStack_164 = 0x1003d615;
              pFVar2 = local_70;
              pFVar5 = (FString *)FUN_10039a70();
              pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,iVar3);
              local_74._0_1_ = 0x1d;
              FString::operator=(local_20,pFVar2);
              pFVar2 = local_70;
            }
            local_74._0_1_ = 1;
            FString::~FString(pFVar2);
            iVar3 = FString::Len(local_20);
            if (iVar3 != 0) {
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*(local_20);
              iVar3 = param_1[0xd8] + local_8;
              goto LAB_1003db1f;
            }
          }
        }
      }
      else if (local_14 + 1 < param_1[0xf6]) {
        local_10 = FUN_1003b4a0();
        if (param_1[0xe2] == 0) {
          iVar3 = FUN_10039a70();
          if (iVar3 != 0) {
            if (local_10 == 0) {
              pFVar2 = (FString *)FUN_10039a70();
              FString::Len(pFVar2);
              pFVar2 = local_128;
              iStack_164 = 0x1003d9f3;
              pFVar5 = (FString *)FUN_10039a70();
              pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,param_2);
              local_74._0_1_ = 0x26;
              FString::operator=(local_20,pFVar2);
              pFVar2 = local_128;
            }
            else {
              pFVar2 = local_110;
              iStack_164 = 0x1003d99b;
              pFVar5 = (FString *)FUN_10039a70();
              pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,param_2);
              local_74._0_1_ = 0x25;
              FString::operator=(local_20,pFVar2);
              pFVar2 = local_110;
            }
            local_74._0_1_ = 1;
            FString::~FString(pFVar2);
            iVar3 = FString::Len(local_20);
            if (iVar3 != 0) {
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*(local_20);
              local_8 = FUN_100217a0(param_1[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
            }
          }
        }
        else {
          iVar3 = FUN_10039a70();
          if (iVar3 != 0) {
            if (param_1[0xdb] < 1) {
              pFVar2 = (FString *)FUN_10039a70();
              FString::Len(pFVar2);
              pFVar2 = local_b0;
              iStack_164 = 0x1003d72f;
              pFVar5 = (FString *)FUN_10039a70();
              pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,param_2);
              local_74._0_1_ = 0x1f;
              FString::operator=(local_20,pFVar2);
              pFVar2 = local_b0;
            }
            else {
              pFVar2 = local_98;
              iStack_164 = 0x1003d6dd;
              pFVar5 = (FString *)FUN_10039a70();
              pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,param_2);
              local_74._0_1_ = 0x1e;
              FString::operator=(local_20,pFVar2);
              pFVar2 = local_98;
            }
            local_74._0_1_ = 1;
            FString::~FString(pFVar2);
            iVar3 = FString::Len(local_20);
            if (iVar3 != 0) {
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*(local_20);
              local_8 = FUN_100217a0(param_1[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
            }
          }
          if (*(int *)GLanguageType_exref == 2) {
            pFVar2 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_c8,0);
            local_74._0_1_ = 0x20;
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar4 = FString::operator*(pFVar2);
            FUN_100217a0(param_1[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
            local_74._0_1_ = 1;
            FString::~FString(local_c8);
            iStack_168 = local_8;
            iVar3 = local_10;
            iStack_164 = iVar7;
            FString::Mid((FString *)(param_1 + 0xc1),(int)&stack0xfffffe88,0);
            local_74._0_1_ = 1;
            FUN_10037e10(iVar3);
          }
          else if (*(int *)GLanguageType_exref == 3) {
            pFVar2 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_e0,0);
            local_74._0_1_ = 0x22;
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar4 = FString::operator*(pFVar2);
            FUN_100217a0(param_1[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
            local_74._0_1_ = 1;
            FString::~FString(local_e0);
            iStack_168 = local_8;
            iVar3 = local_10;
            iStack_164 = iVar7;
            FString::Mid((FString *)(param_1 + 0xc1),(int)&stack0xfffffe88,0);
            local_74._0_1_ = 1;
            FUN_10038320(iVar3);
          }
          else {
            pFVar2 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_f8,0);
            local_74._0_1_ = 0x24;
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar4 = FString::operator*(pFVar2);
            FUN_100217a0(param_1[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
            local_74._0_1_ = 1;
            FString::~FString(local_f8);
          }
        }
      }
      else {
        local_10 = FUN_1003b4a0();
        iVar3 = FUN_10039a70();
        if (iVar3 != 0) {
          pFVar2 = (FString *)FUN_10039a70();
          FString::Len(pFVar2);
          pFVar2 = local_140;
          iStack_164 = 0x1003dabd;
          pFVar5 = (FString *)FUN_10039a70();
          pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,param_2);
          local_74._0_1_ = 0x27;
          FString::operator=(local_20,pFVar2);
          local_74._0_1_ = 1;
          FString::~FString(local_140);
          iVar3 = FString::Len(local_20);
          if (iVar3 != 0) {
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar4 = FString::operator*(local_20);
            iVar3 = param_1[0xd8];
            goto LAB_1003db1f;
          }
        }
      }
    }
    else {
      local_10 = FUN_1003b4a0();
      if (param_1[0xe2] == 0) {
        FString::Len((FString *)(param_1 + 0xc1));
        pFVar2 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_d4,param_2);
        local_74._0_1_ = 7;
        FString::operator=(local_20,pFVar2);
        local_74._0_1_ = 1;
        FString::~FString(local_d4);
        local_8 = 0;
        iVar3 = *(int *)GLanguageType_exref;
        if (iVar3 == 2) {
          iStack_164 = 0;
          iStack_168 = 0;
          uStack_174 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          puVar4 = FString::operator*(local_20);
          local_8 = FUN_100217a0(param_1[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
          iStack_168 = 0;
          iStack_164 = iVar7;
          FString::FString((FString *)&stack0xfffffe88,local_20);
          local_74._0_1_ = 1;
          FUN_10037e10();
        }
        else if (iVar3 == 3) {
          iStack_164 = 0;
          iStack_168 = 0;
          uStack_174 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          puVar4 = FString::operator*(local_20);
          local_8 = FUN_100217a0(param_1[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
          iStack_168 = 0;
          iStack_164 = iVar7;
          FString::FString((FString *)&stack0xfffffe88,local_20);
          local_74._0_1_ = 1;
          FUN_10038320();
        }
        else if (iVar3 == 4) {
          iStack_168 = 0;
          iStack_164 = iVar7;
          FString::FString((FString *)&stack0xfffffe88,local_20);
          local_74._0_1_ = 1;
          FUN_10038fd0();
        }
        else {
          iStack_164 = 0;
          iStack_168 = 0;
          uStack_174 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          if (iVar3 == 0) {
            puVar4 = FString::operator*(local_20);
            local_8 = FUN_100217a0(param_1[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
            uStack_174 = 0x1003cbd6;
            FString::FString((FString *)&stack0xfffffe94,local_20);
            local_74._0_1_ = 1;
            FUN_10038aa0();
          }
          else {
            puVar4 = FString::operator*(local_20);
            local_8 = FUN_100217a0(param_1[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
          }
        }
        iVar3 = FUN_10039a70();
        if (iVar3 != 0) {
          if (local_10 < 1) {
            iVar3 = param_1[0xdb];
            pFVar2 = (FString *)FUN_10039a70();
            FString::Len(pFVar2);
            pFVar2 = local_134;
            iStack_164 = local_c;
            iStack_168 = 0x1003cca0;
            pFVar5 = (FString *)FUN_10039a70();
            iStack_164 = 0x1003cca8;
            pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,iVar3);
            local_74._0_1_ = 0xd;
            FString::operator=(local_20,pFVar2);
            pFVar2 = local_134;
          }
          else {
            iVar3 = param_1[0xdb];
            pFVar2 = local_64;
            iStack_164 = local_c;
            iStack_168 = 0x1003cc42;
            pFVar5 = (FString *)FUN_10039a70();
            iStack_164 = 0x1003cc4a;
            pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,iVar3);
            local_74._0_1_ = 0xc;
            FString::operator=(local_20,pFVar2);
            pFVar2 = local_64;
          }
          local_74._0_1_ = 1;
          FString::~FString(pFVar2);
          iVar3 = FString::Len(local_20);
          if (iVar3 != 0) {
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar4 = (ushort *)0x0;
            puVar9 = FString::operator*(local_20);
            iVar8 = -0x232324;
            iVar3 = iVar7;
LAB_1003cd05:
            FUN_100217a0(iVar3,iVar8,puVar9,puVar4,uVar10,uVar11,uVar12);
          }
        }
      }
      else {
        pFVar2 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_ec,param_2);
        local_74._0_1_ = 2;
        FString::operator=(local_20,pFVar2);
        local_74._0_1_ = 1;
        FString::~FString(local_ec);
        iVar3 = FString::Len(local_20);
        if (iVar3 != 0) {
          iVar3 = *(int *)GLanguageType_exref;
          if (iVar3 == 2) {
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar4 = FString::operator*(local_20);
            FUN_100217a0(param_1[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
            iStack_168 = 0;
            iStack_164 = iVar7;
            FString::FString((FString *)&stack0xfffffe88,local_20);
            local_74._0_1_ = 1;
            FUN_10037e10();
          }
          else if (iVar3 == 3) {
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar4 = FString::operator*(local_20);
            FUN_100217a0(param_1[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
            iStack_168 = 0;
            iStack_164 = iVar7;
            FString::FString((FString *)&stack0xfffffe88,local_20);
            local_74._0_1_ = 1;
            FUN_10038320();
          }
          else if (iVar3 == 4) {
            iStack_168 = 0;
            iStack_164 = iVar7;
            FString::FString((FString *)&stack0xfffffe88,local_20);
            local_74._0_1_ = 1;
            FUN_10038fd0();
          }
          else {
            if (iVar3 != 0) {
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*(local_20);
              puVar9 = (ushort *)0xffdcdcdc;
              iVar3 = param_1[0xd8];
              iVar8 = iVar7;
              goto LAB_1003cd05;
            }
            uStack_174 = 0x1003c9af;
            FString::FString((FString *)&stack0xfffffe94,local_20);
            local_74._0_1_ = 1;
            FUN_10038aa0();
          }
        }
      }
      if (((local_14 == param_1[0xe0]) && (param_1[0xdc] != 0)) &&
         (*(int *)GLanguageType_exref == 2)) {
        iStack_164 = 0;
        iStack_168 = 0;
        uStack_174 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = (ushort *)&DAT_10230ff8;
        iVar3 = param_1[0xe1] + -3 + param_1[0xd8];
        goto LAB_1003db1f;
      }
    }
    iVar7 = iVar7 + param_1[0xd7] + param_1[0xd8];
    param_2 = local_10;
    if ((local_10 == 0) && ((param_1[0xe2] == 0 || (param_1[0xdb] == 0)))) {
      local_c = local_c + 1;
    }
    local_14 = local_14 + 1;
    local_30 = iVar7;
  } while( true );
}


// ==== 10042bd0 FUN_10042bd0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_10020e50@10020e50 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 ENGINE.DLL::FColor::FColor@EXTERNAL:0000008c FUN_100212e0@100212e0 FUN_10020e70@10020e70 FUN_10020e60@10020e60
// strings: 

undefined4 __thiscall FUN_10042bd0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined3 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uStack_44;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de8d0;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar4 = FUN_101c19e0();
  uVar5 = FUN_101c19e0(uVar4);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar5,uVar4);
  FColor::FColor((FColor *)&local_18);
  local_1c = (undefined1)(int)ROUND(*(float *)(param_1 + 0x1dc));
  uVar2 = CONCAT11(local_18._3_1_,local_1c);
  local_1c = (undefined1)(int)ROUND(*(float *)(param_1 + 0x1e0));
  uVar3 = CONCAT21(uVar2,local_1c);
  local_1c = (undefined1)(int)ROUND(*(float *)(param_1 + 0x1e4));
  local_18 = CONCAT31(uVar3,local_1c);
  FUN_10020e50(local_18);
  for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x1d0); iVar6 = iVar6 + 1) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x1cc) + iVar6 * 0xc);
    FUN_10020e70(*puVar1,puVar1[1]);
  }
  FUN_10020e60();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10044680 FUN_10044680 depth=0 from=raiz callees=FUN_10059eb0@10059eb0 FUN_100220e0@100220e0 FUN_10002f40@10002f40 FUN_10044570@10044570 FUN_100212e0@100212e0 FUN_10021be0@10021be0
// strings: 

undefined4 __thiscall FUN_10044680(int param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ded30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x208) == 0) {
    FUN_10059eb0(param_2);
  }
  else {
    FUN_10021be0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                 *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),0);
    FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
    FUN_100220e0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                 *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
    if (*(int *)(param_1 + 0x210) == 0) {
      *(undefined4 *)(param_1 + 0x210) = 1;
      FUN_10044570();
    }
    FUN_100212e0();
    *(undefined4 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10047b40 FUN_10047b40 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101b3f10@101b3f10 FUN_1002ccb0@1002ccb0 FUN_101ade70@101ade70 FUN_10064790@10064790 FUN_10002f40@10002f40 FUN_10020dc0@10020dc0 FUN_10021a00@10021a00 FUN_10030af0@10030af0 FUN_1002f110@1002f110 FUN_1002da20@1002da20 FUN_100034b0@100034b0 FUN_1002c970@1002c970 FUN_10146830@10146830 FUN_101c19e0@101c19e0 FUN_1014ed50@1014ed50 FUN_100212e0@100212e0 FUN_101ad480@101ad480 FUN_10045220@10045220
// strings: 

undefined4 __thiscall FUN_10047b40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  puStack_c = &LAB_101df4b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  if (*(int *)(param_1 + 0x340) != 0) {
    iVar4 = FUN_10045220();
    if (iVar4 != 0) {
      uVar2 = FUN_101c19e0();
      uVar3 = FUN_101c19e0();
      uVar7 = 1;
      uVar6 = 0xff;
      uVar5 = FUN_1002c970(0xff,1);
      FUN_10021a00(1,1,uVar3,uVar2,*(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x108)
                   ,uVar3,uVar2,uVar5,uVar6,uVar7);
      FUN_100034b0(iVar1);
      if (*(int *)(*(int *)(param_1 + 0x340) + 0x1e54) == 4) {
        iVar4 = FUN_101ade70(*(undefined4 *)(*(int *)(param_1 + 0x340) + 0x1e5c));
        if (iVar4 != 0) {
          iVar4 = FUN_101b3f10();
          if (iVar4 != 0) {
            FUN_10064790(iVar1,0,0,0xffdcdcdc,iVar4);
          }
        }
      }
      iVar4 = FUN_1002ccb0();
      if (iVar4 == 0) {
LAB_10047ca9:
        if (*(int *)(*(int *)(param_1 + 0x340) + 0x1f68) != 0) goto LAB_10047cb8;
      }
      else {
        iVar4 = FUN_10146830(*(undefined4 *)(*(int *)(param_1 + 0x340) + 0x1e5c));
        if (iVar4 == 0) goto LAB_10047ca9;
LAB_10047cb8:
        FUN_10021a00(1,1,0x21,0x21,0,0,0x20,0x20,*(undefined4 *)(param_1 + 0x348),0xff,1);
      }
      if (*(int *)(*(int *)(param_1 + 0x340) + 0x1e54) == 5) {
        FUN_10021a00(1,1,0x21,0x21,0,0,0x20,0x20,*(undefined4 *)(param_1 + 0x34c),0xff,1);
      }
      param_2 = 0;
      iVar4 = FUN_101ad480(*(undefined4 *)(*(int *)(param_1 + 0x340) + 0x1e5c),
                           *(undefined4 *)(*(int *)(param_1 + 0x340) + 0x1e54),&param_2);
      if ((iVar4 != 0) && (param_2 != 0)) {
        if (*(int *)(param_2 + 0x38) != 0) {
          uVar3 = 0xff008080;
          uVar2 = FUN_1002f110(0xff008080);
          FUN_10020dc0(1,1,0x21,0x21,0,0,0x20,0x20,uVar2,uVar3);
          if (*(int *)(param_2 + 0x3c) != 0) {
            FUN_1014ed50(9);
            *(undefined4 *)(param_2 + 0x3c) = 0;
          }
        }
        if (*(int *)(param_2 + 0x34) != 0) {
          iVar4 = FUN_1002da20();
          if (iVar4 == 0) {
            iVar4 = FUN_10030af0();
            if (iVar4 != 0) {
              uVar5 = 1;
              uVar3 = 0xff;
              uVar2 = FUN_10030af0(0xff,1);
              FUN_10021a00(1,1,0x21,0x21,0,0,0x20,0x20,uVar2,uVar3,uVar5);
            }
          }
        }
      }
      goto LAB_10047e0a;
    }
  }
  if (*(int *)(param_1 + 0x354) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x2d8);
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    FUN_100034b0(iVar1);
    *(undefined4 *)(param_1 + 0x2d8) = uVar2;
  }
LAB_10047e0a:
  FUN_100212e0();
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10049ec0 FUN_10049ec0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021970@10021970 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10049ec0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dfac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (0 < *(int *)(param_1 + 0x2d8)) {
    if (*(int *)(param_1 + 0x2f8) != 0) {
      FUN_10021a00(0,*(undefined4 *)(param_1 + 0x2dc),0xf,8,0,0,0xf,8,*(int *)(param_1 + 0x2f8),0xff
                   ,1);
    }
    if (*(int *)(param_1 + 0x300) != 0) {
      FUN_10021a00(0,*(int *)(param_1 + 0x2dc) + -8 + *(int *)(param_1 + 0x2d8),0xf,8,0,0,0xf,8,
                   *(int *)(param_1 + 0x300),0xff,1);
    }
    if (*(int *)(param_1 + 0x2fc) != 0) {
      FUN_10021970(0,*(int *)(param_1 + 0x2dc) + 8,0xf,*(int *)(param_1 + 0x2d8) + -0x10,0,0,0xf,8,
                   *(int *)(param_1 + 0x2fc),0xff);
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1004b070 FUN_1004b070 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1004b070(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar3 = *(int *)(param_1 + 0x2dc);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x2d8);
  }
  if (iVar3 != 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,iVar3,0xff,1);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2f4)) {
    do {
      FUN_10021a00(*(int *)(param_1 + 0x2f8) * iVar3 + -4,0,8,0x10,0,0,8,0x10,
                   *(undefined4 *)(param_1 + 0x2e0),0xff,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x2f4));
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 1004b510 FUN_1004b510 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_1004a790@1004a790 FUN_10058770@10058770 FUN_100212e0@100212e0 FUN_1004abc0@1004abc0
// strings: 

undefined4 __thiscall FUN_1004b510(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  local_8 = 0;
  local_4 = 0;
  local_c = 0;
  local_10 = 0;
  FUN_10058770(&local_10);
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(local_10,local_c,uVar2,uVar1);
  if (*(int *)(param_1 + 0x2d8) == 0) {
    FUN_1004abc0(param_2);
  }
  else if (*(int *)(param_1 + 0x2d8) == 1) {
    FUN_1004a790(param_2);
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 1004c7c0 FUN_1004c7c0 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100212f0@100212f0 FUN_100133a0@100133a0 __security_check_cookie@101c16c2 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 CORE.DLL::appSprintf@EXTERNAL:000001ba FUN_10020bb0@10020bb0 FUN_100212e0@100212e0
// strings: 1024128c=%.2f%s | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1004c7c0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  uint uStack_140;
  undefined4 local_124;
  int local_120;
  int iStack_11c;
  undefined1 *local_118;
  void *local_114;
  undefined1 *puStack_110;
  undefined4 local_10c;
  ushort local_108 [128];
  uint local_8;
  
  puStack_110 = &LAB_101e0130;
  local_114 = ExceptionList;
  uStack_140 = DAT_103554c4 ^ (uint)local_108;
  local_118 = (undefined1 *)&uStack_140;
  ExceptionList = &local_114;
  uVar7 = 0;
  local_10c = 0;
  local_8 = uStack_140;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40();
  uVar11 = 1;
  uVar10 = CONCAT44(0xff,*(undefined4 *)(param_1 + 0x2dc));
  uVar2 = *(undefined4 *)(param_1 + 0x2ec);
  uVar3 = *(undefined4 *)(param_1 + 0x2e8);
  uVar9 = 0;
  uVar8 = 0;
  uVar4 = FUN_101c19e0(0,0,uVar3,uVar2,*(undefined4 *)(param_1 + 0x2dc),0xff,1);
  uVar5 = FUN_101c19e0(uVar4);
  FUN_10021a00(0,0,uVar5,uVar4,uVar8,uVar9,uVar3,uVar2,uVar10,uVar11);
  local_120 = *(int *)(param_1 + 0x2f8);
  iStack_11c = *(int *)(param_1 + 0x2fc);
  if (local_120 != 0 || iStack_11c != 0) {
    if (*(int *)(param_1 + 0x35c) != 0) {
      if (*(int *)(param_1 + 0x35c) != 1) goto LAB_1004c90a;
      local_120 = *(uint *)(param_1 + 0x2f0) - *(uint *)(param_1 + 0x308);
      iStack_11c = (*(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x30c)) -
                   (uint)(*(uint *)(param_1 + 0x2f0) < *(uint *)(param_1 + 0x308));
    }
    uVar7 = FUN_101c19e0();
  }
LAB_1004c90a:
  uVar9 = 1;
  uVar10 = CONCAT44(0xff,*(undefined4 *)(param_1 + 0x2d8));
  uVar2 = *(undefined4 *)(param_1 + 0x2ec);
  uVar3 = *(undefined4 *)(param_1 + 0x2e8);
  uVar8 = 0;
  uVar5 = 0;
  uVar4 = FUN_101c19e0(0,0,uVar3,uVar2,*(undefined4 *)(param_1 + 0x2d8),0xff,1);
  FUN_10021a00(0,0,uVar7,uVar4,uVar5,uVar8,uVar3,uVar2,uVar10,uVar9);
  if (*(int *)(param_1 + 0x33c) != 0) {
    local_124 = 0;
    if (*(double *)(param_1 + 0x324) != 0.0) {
      local_124 = FUN_101c19e0();
    }
    uVar9 = 1;
    uVar10 = CONCAT44(0x80,*(undefined4 *)(param_1 + 0x2e0));
    uVar2 = *(undefined4 *)(param_1 + 0x2ec);
    uVar3 = *(undefined4 *)(param_1 + 0x2e8);
    uVar8 = 0;
    uVar5 = 0;
    uVar4 = FUN_101c19e0(0,0,uVar3,uVar2,*(undefined4 *)(param_1 + 0x2e0),0x80,1);
    FUN_10021a00(uVar7,0,local_124,uVar4,uVar5,uVar8,uVar3,uVar2,uVar10,uVar9);
  }
  if (*(int *)(param_1 + 0x338) != 0) {
    uVar9 = 1;
    uVar10 = CONCAT44(0xff,*(undefined4 *)(param_1 + 0x2e4));
    uVar2 = *(undefined4 *)(param_1 + 0x2ec);
    uVar3 = *(undefined4 *)(param_1 + 0x2e8);
    uVar8 = 0;
    uVar5 = 0;
    uVar4 = FUN_101c19e0(0,0,uVar3,uVar2,*(undefined4 *)(param_1 + 0x2e4),0xff,1);
    FUN_10021a00(0,0,uVar7,uVar4,uVar5,uVar8,uVar3,uVar2,uVar10,uVar9);
  }
  if (*(int *)(param_1 + 0x35c) == 0) {
    uVar2 = 0xff;
    puVar6 = FString::operator*((FString *)(param_1 + 0x350));
    FUN_100212f0(1,9,2,0xffdcdcdc,puVar6,uVar2);
    appSprintf(local_108,(ushort *)&DAT_1022dde0,&DAT_1023d810);
    FUN_10020bb0(&local_120,local_108,0,0,0,0,0,0);
    uVar4 = 0xff;
    uVar10 = CONCAT44(local_108,0xffdcdcdc);
    uVar3 = 2;
    uVar2 = FUN_101c19e0(2,0xffdcdcdc,local_108,0xff);
    FUN_100212f0(1,uVar2,uVar3,uVar10,uVar4);
    appSprintf(local_108,(ushort *)&DAT_10233718);
    FUN_10020bb0(&local_120,local_108,0,0,0,0,0,0);
    uVar4 = 0xff;
    uVar10 = CONCAT44(local_108,0xffdcdcdc);
    uVar3 = 2;
    uVar2 = FUN_101c19e0(2,0xffdcdcdc,local_108,0xff);
    FUN_100212f0(1,uVar2,uVar3,uVar10,uVar4);
    appSprintf(local_108,(ushort *)&DAT_10233718);
    FUN_10020bb0(&local_120,local_108,0,0,0,0,0,0);
  }
  else {
    if (*(int *)(param_1 + 0x35c) != 1) goto LAB_1004cc1c;
    uVar1 = *(uint *)(param_1 + 0x308);
    local_120 = *(uint *)(param_1 + 0x2f0) - uVar1;
    iStack_11c = (*(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x30c)) -
                 (uint)(*(uint *)(param_1 + 0x2f0) < uVar1);
    FUN_100133a0(local_108,L"%.2f%s",
                 ((double)CONCAT44((*(int *)(param_1 + 0x2fc) - *(int *)(param_1 + 0x30c)) -
                                   (uint)(*(uint *)(param_1 + 0x2f8) < uVar1),
                                   *(uint *)(param_1 + 0x2f8) - uVar1) * _DAT_10234778) /
                 (double)CONCAT44(iStack_11c,local_120),&DAT_1024129c);
    FUN_10020bb0(&local_120,local_108,0,0,0,0,0,0);
  }
  uVar4 = 0xff;
  uVar10 = CONCAT44(local_108,0xffdcdcdc);
  uVar3 = 2;
  uVar2 = FUN_101c19e0(2,0xffdcdcdc,local_108,0xff);
  FUN_100212f0(1,uVar2,uVar3,uVar10,uVar4);
LAB_1004cc1c:
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_114;
  __security_check_cookie(local_8 ^ (uint)local_108);
  return;
}


// ==== 1004db50 FUN_1004db50 depth=0 from=raiz callees=FUN_10021df0@10021df0 __security_check_cookie@101c16c2 FUN_100053e0@100053e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100218f0@100218f0 CORE.DLL::appSprintf@EXTERNAL:000001ba FUN_1004d130@1004d130 FUN_100212f0@100212f0 FUN_101c19e0@101c19e0 FUN_1004d920@1004d920 FUN_1004da90@1004da90 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0
// strings: 

void __thiscall FUN_1004db50(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uStack_60;
  int local_50 [3];
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  ushort local_20 [4];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e03d0;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_24 = param_2;
  iVar4 = 0;
  local_8 = 0;
  local_18 = uStack_60;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  local_38 = FUN_1004d130();
  do {
    local_30 = iVar4;
    if (local_38 <= iVar4) {
      *(undefined4 *)(param_2 + 0x38) = 0;
      *(undefined4 *)(param_2 + 0x3c) = 0;
      FUN_100212e0();
      ExceptionList = local_10;
      __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_40 = FUN_1004d920(iVar4);
    for (local_34 = 0; local_34 < local_40; local_34 = local_34 + 1) {
      iVar4 = FUN_1004da90(iVar4,local_34);
      if (((iVar4 != 0) && (*(int *)(iVar4 + 0x1f6c) != 0)) && (*(int *)(iVar4 + 0x34) != 0)) {
        iVar5 = *(int *)(iVar4 + 0x1f80);
        local_2c = *(int *)(iVar4 + 0x1f84);
        local_28 = 0;
        if (*(int *)(iVar4 + 0x1f90) != 0) {
          local_28 = 1;
          uVar1 = *(undefined4 *)(iVar4 + 0x1f60);
          FUN_10021a00(iVar5,local_2c,uVar1,uVar1,0,0,uVar1,uVar1,*(undefined4 *)(iVar4 + 0x1f90),
                       0xff,*(int *)(param_1 + 0x2d8) == 0);
        }
        local_44 = local_2c + local_28;
        local_28 = local_28 + iVar5;
        FUN_100218f0(local_28,local_44,*(undefined4 *)(iVar4 + 0x1f5c),
                     *(undefined4 *)(iVar4 + 0x1f5c),*(undefined4 *)(iVar4 + 0x34),
                     *(int *)(param_1 + 0x2d8) == 0,*(undefined1 *)(iVar4 + 0x1f68));
        if (((*(int *)(param_1 + 0x2d8) == 0) && (iVar3 = *(int *)(iVar4 + 0x1f64), iVar3 < 0x3c))
           && (-1 < iVar3)) {
          if (*(int *)(iVar4 + 0x1f7c) == 0) {
            appSprintf(local_20,(ushort *)&DAT_10233718,iVar3);
            if (*(int *)(iVar4 + 0x1f74) == 0) {
              uVar2 = 0xcc;
              if (*(int *)(iVar4 + 0x1f64) < 10) {
                iVar3 = local_2c + 10;
                iVar5 = iVar5 + 7;
                uVar1 = 2;
              }
              else {
                iVar3 = local_2c + 10;
                iVar5 = iVar5 + 2;
                uVar1 = 2;
              }
            }
            else {
              FUN_10020bb0(local_50,local_20,0,0,0,0,0,0);
              uVar2 = 0xff;
              iVar3 = local_2c + 8;
              iVar5 = (iVar5 - local_50[0] / 2) + 0xc;
              uVar1 = 1;
            }
            FUN_100212f0(uVar1,iVar5,iVar3,0xffdcdcdc,local_20,uVar2);
            goto LAB_1004dd97;
          }
LAB_1004dda0:
          if (*(int *)(iVar4 + 0x1f6c) != 0) {
            FUN_10021a00(local_28,local_44,*(undefined4 *)(iVar4 + 0x1f5c),
                         *(undefined4 *)(iVar4 + 0x1f5c),0,0,0x1a,0x1a,
                         *(undefined4 *)(param_1 + 0x310),*(undefined1 *)(iVar4 + 0x1f68),
                         *(int *)(param_1 + 0x2d8) == 0);
          }
        }
        else {
LAB_1004dd97:
          if (*(int *)(iVar4 + 0x1f7c) != 0) goto LAB_1004dda0;
        }
        if (*(int *)(param_1 + 0x2dc) == 0) {
          iVar5 = FUN_100053e0(*(undefined4 *)(param_1 + 0x300),*(undefined4 *)(param_1 + 0x304));
          if (iVar5 != 0) {
            *(int *)(param_1 + 0x2fc) = iVar4;
          }
        }
      }
      iVar4 = local_30;
      param_2 = local_24;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


// ==== 10052600 FUN_10052600 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 CORE.DLL::FString::operator_int@EXTERNAL:000001a1 FUN_10051d50@10051d50 FUN_10002f40@10002f40 FUN_10051770@10051770 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10052600(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0fb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0();
  FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(param_1 + 0x2f4),0xff,1);
  iVar3 = FString::operator_int((FString *)(param_1 + 0x2e0));
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x358) < 2) {
      FUN_10051770(param_2);
    }
    else {
      FUN_10051d50(param_2);
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10053790 FUN_10053790 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_10053160@10053160 FUN_100536d0@100536d0 FUN_10058f70@10058f70 FUN_101c19e0@101c19e0 FUN_10021190@10021190 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_10058770@10058770 FUN_100212e0@100212e0 FUN_10053270@10053270 FUN_10145a60@10145a60
// strings: 

undefined4 __thiscall FUN_10053790(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float10 extraout_ST0;
  float10 extraout_ST1;
  int iVar8;
  undefined4 uVar9;
  uint uStack_58;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e13e0;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10058f70();
  local_44 = 0.0;
  local_48 = 0;
  local_40 = 0.0;
  local_3c = 0.0;
  FUN_10058770(&local_48);
  iVar6 = param_1[0x20];
  local_18 = local_48;
  if (local_48 < iVar6) {
    local_18 = iVar6;
  }
  local_28 = (float)param_1[0x21];
  fVar3 = local_44;
  if ((int)local_44 < (int)local_28) {
    fVar3 = local_28;
  }
  local_2c = (float)iVar6;
  if ((float)local_48 + local_40 <= local_2c + (float)param_1[0x22]) {
    uVar1 = FUN_101c19e0();
  }
  else {
    uVar1 = FUN_101c19e0();
  }
  local_2c = (float)(int)local_28;
  if ((float)(int)local_44 + local_3c <= local_2c + (float)param_1[0x23]) {
    uVar2 = FUN_101c19e0();
  }
  else {
    uVar2 = FUN_101c19e0();
  }
  FUN_10021df0(local_18,fVar3,uVar1,uVar2);
  FUN_10002f40(param_1[0x20],param_1[0x21]);
  local_18 = (**(code **)(*param_1 + 0x1f8))();
  if (local_18 == 0) {
    iVar6 = FUN_10053160();
    if (iVar6 != 0) {
      uVar1 = FUN_10053160();
      iVar6 = FUN_10145a60(uVar1);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0xe0) != 0)) {
        uVar1 = FUN_10053160();
        FUN_10021190(0,0,uVar1);
      }
    }
  }
  else {
    fVar3 = (float)FUN_101c19e0();
    local_28 = fVar3;
    fVar4 = (float)FUN_101c19e0();
    local_2c = fVar4;
    uVar1 = FUN_10053270();
    switch(uVar1) {
    case 0:
      uVar9 = 1;
      uVar7 = (uint)*(byte *)(param_1 + 0xbc);
      iVar6 = param_1[0xb8];
      iVar5 = param_1[0xb7];
      iVar8 = local_18;
      uVar1 = FUN_101c19e0(iVar5,iVar6,fVar3,fVar4,local_18,uVar7,1);
      uVar2 = FUN_101c19e0(uVar1);
      FUN_10021a00(0,0,uVar2,uVar1,iVar5,iVar6,fVar3,fVar4,iVar8,uVar7,uVar9);
      break;
    case 1:
    case 4:
      FUN_10021a00(0,0,fVar3,fVar4,param_1[0xb7],param_1[0xb8],fVar3,fVar4,local_18,
                   (char)param_1[0xbc],1);
      break;
    case 2:
      local_28 = (float)param_1[0x22] / (float)(int)local_28;
      local_2c = (float)param_1[0x23] / (float)(int)local_2c;
      local_20 = FUN_101c19e0();
      local_1c = FUN_101c19e0();
      if ((float10)0 != extraout_ST1 - (float10)local_20) {
        local_20 = local_20 + 1;
      }
      if (extraout_ST0 - (float10)local_1c != (float10)0) {
        local_1c = local_1c + 1;
      }
      for (local_30 = 0; local_30 < local_1c; local_30 = local_30 + 1) {
        for (local_24 = 0; local_24 < local_20; local_24 = local_24 + 1) {
          FUN_10021a00(local_24 * (int)fVar3,local_30 * (int)fVar4,fVar3,fVar4,param_1[0xb7],
                       param_1[0xb8],fVar3,fVar4,local_18,(char)param_1[0xbc],1);
        }
      }
      break;
    case 3:
      uVar1 = FUN_101c19e0();
      iVar6 = FUN_100536d0(param_1[0xb7],0,uVar1);
      param_1[0xb7] = iVar6;
      uVar1 = FUN_101c19e0();
      iVar5 = FUN_100536d0(param_1[0xb8],0,uVar1);
      param_1[0xb8] = iVar5;
      local_2c = (float)FUN_101c19e0();
      uVar1 = FUN_101c19e0();
      FUN_10021a00(0,0,uVar1,local_2c,iVar6,iVar5,uVar1,local_2c,local_18,(char)param_1[0xbc],1);
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10055580 FUN_10055580 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10058770@10058770 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10055580(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1760;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(param_1[0x20],param_1[0x21]);
  if (*(int *)(*(int *)(param_1[0x2e] + 0xc) + 4) != 0) {
    local_28 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_10058770(&local_2c);
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021df0(param_1[0x20],param_1[0xbd] + param_1[0x21],uVar2,uVar1);
    iVar3 = (**(code **)(*param_1 + 0x200))(param_2,param_1[0xb6],0,0);
    param_1[0xbc] = iVar3;
    (**(code **)(*param_1 + 0x128))(param_1[0x22],(float)iVar3);
    FUN_100212e0();
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10055930 FUN_10055930 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10043dd0@10043dd0 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10055930(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1780;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10043dd0(*(int *)(*(int *)(param_1 + 0x214) + 0x2f0) + 0x15);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10059eb0 FUN_10059eb0 depth=0 from=raiz callees=
// strings: 

undefined4 FUN_10059eb0(void)

{
  return 0;
}


// ==== 1006a5e0 FUN_1006a5e0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1006a5e0(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4a20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(param_1[0x20],param_1[0x21]);
  iVar2 = param_1[0xb8];
  uVar1 = FUN_101c19e0(iVar2);
  FUN_10021df0(param_1[0x20],param_1[0xb7] + param_1[0x21],uVar1,iVar2);
  param_1[0xbc] = 0;
  iVar2 = (**(code **)(*param_1 + 0x1f8))(param_2,param_1[0xbb],0,0);
  param_1[0xb6] = iVar2;
  (**(code **)(*param_1 + 0x128))(param_1[0x22],(float)iVar2);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1006ab60 FUN_1006ab60 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10043dd0@10043dd0 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1006ab60(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4ac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10043dd0(*(undefined4 *)(*(int *)(param_1 + 0x214) + 0x2d8));
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 100833e0 FUN_100833e0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10023790@10023790 ENGINE.DLL::UCanvas::EndTextAnim@EXTERNAL:00000077 FUN_10002f40@10002f40 FUN_10043d00@10043d00 FUN_10083010@10083010 FUN_10021a00@10021a00 FUN_10023160@10023160 FUN_100212e0@100212e0 ENGINE.DLL::UCanvas::StartTextAnim@EXTERNAL:00000076
// strings: 

undefined4 __thiscall FUN_100833e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea590;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  if (*(int *)(param_1 + 0x21c) != 0) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x1ec) + 0xfc))(0);
    if (iVar3 == 0) {
      uVar4 = FUN_101c19e0();
      uVar5 = FUN_101c19e0();
      uVar10 = 1;
      uVar9 = 0xff;
      uVar1 = *(undefined4 *)(param_1 + 0x21c);
      uVar7 = 0;
      uVar6 = 0;
      uVar2 = uVar5;
      uVar8 = uVar4;
    }
    else {
      uVar4 = FUN_101c19e0();
      uVar10 = 1;
      uVar9 = 0xff;
      uVar1 = *(undefined4 *)(param_1 + 0x21c);
      uVar8 = uVar4;
      uVar2 = FUN_101c19e0(uVar4,uVar1,0xff,1);
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = FUN_101c19e0(uVar4,0,0,uVar2);
    }
    FUN_10021a00(0,0,uVar5,uVar4,uVar6,uVar7,uVar2,uVar8,uVar1,uVar9,uVar10);
  }
  FUN_10023790(*(undefined4 *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x1d0));
  if (*(char *)(param_1 + 0x254) != '\0') {
    UCanvas::StartTextAnim(DAT_103663c0);
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    if (*(int *)(param_1 + 0x218) != 0) {
      (**(code **)(**(int **)(param_1 + 0x218) + 8))(param_2);
    }
    if ((*(int *)(param_1 + 0x238) != 0) && (*(int *)(param_1 + 0x218) != 0)) {
      uVar1 = FUN_10083010();
      FUN_10043d00(uVar1);
    }
  }
  FUN_10023160();
  if (*(char *)(param_1 + 0x254) != '\0') {
    UCanvas::EndTextAnim(DAT_103663c0);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10083660 FUN_10083660 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10023790@10023790 FUN_10002f40@10002f40 FUN_10043d00@10043d00 FUN_10083010@10083010 FUN_10023160@10023160 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10083660(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea5d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(int *)(param_1 + 0x80) + 3,*(int *)(param_1 + 0x84) + 10,uVar2,uVar1);
  FUN_10023790(*(undefined4 *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x1d0));
  if ((*(int *)(param_1 + 0x218) != 0) && (*(int *)(param_1 + 0x238) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x218) + 8))(param_2);
    if (*(int *)(param_1 + 0x238) != 0) {
      uVar1 = FUN_10083010();
      FUN_10043d00(uVar1);
    }
  }
  FUN_10023160();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 100837d0 FUN_100837d0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_100837d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea5f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  iVar1 = *(int *)(param_1 + 0x1d0);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0x14,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10091400 FUN_10091400 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_10009b10@10009b10 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10058020@10058020 CORE.DLL::UObject::IsA@EXTERNAL:00000198 FUN_10021970@10021970 FUN_10021a00@10021a00 FUN_10058770@10058770 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10091400(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  UObject *this;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uStack_48;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ebdb0;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(param_1[0x20],param_1[0x21]);
  if (param_1[0xc4] == 0) {
    this = *(UObject **)(*(int *)(param_1[0x2e] + 0xc) + 4);
    local_34 = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    while (this != (UObject *)0x0) {
      iVar3 = UObject::IsA(this,(UClass *)&DAT_1036eff0);
      if (iVar3 != 0) {
        FUN_10058770(&local_38);
        uVar1 = FUN_101c19e0();
        uVar2 = FUN_101c19e0(uVar1);
        iVar3 = local_38;
        iVar4 = local_34;
        goto LAB_10091480;
      }
      iVar3 = FUN_10058020();
      this = *(UObject **)(*(int *)(iVar3 + 0xc) + 4);
    }
  }
  else {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0(uVar1);
    iVar3 = param_1[0x20];
    iVar4 = param_1[0x21];
LAB_10091480:
    FUN_10021df0(iVar3,iVar4,uVar2,uVar1);
  }
  iVar4 = 9 - param_1[200] / 2;
  iVar3 = (**(code **)(*param_1 + 0x6c))();
  if (iVar3 == 0) {
    FUN_10021a00(0,0,8,0x11,0,0,8,0x11,param_1[0xbe],0xff,1);
    uVar16 = 1;
    uVar13 = 0xff;
    iVar3 = param_1[0xbf];
    uVar10 = 0x11;
    uVar9 = 8;
    uVar8 = 0;
    uVar7 = 0;
    uVar2 = 0x11;
    uVar1 = FUN_101c19e0(0x11,0,0,8,0x11,iVar3,0xff,1);
    FUN_10021a00(8,0,uVar1,uVar2,uVar7,uVar8,uVar9,uVar10,iVar3,uVar13,uVar16);
    uVar17 = 1;
    uVar14 = 0xff;
    iVar3 = param_1[0xc0];
    uVar16 = 0x11;
    uVar13 = 8;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0x11;
    uVar7 = 8;
    uVar2 = 0;
    uVar1 = FUN_101c19e0(0,8,0x11,0,0,8,0x11,iVar3,0xff,1);
    FUN_10021a00(uVar1,uVar2,uVar7,uVar8,uVar9,uVar10,uVar13,uVar16,iVar3,uVar14,uVar17);
    if ((param_1[0xb9] <= param_1[0xc9]) || (param_1[0xc9] < 0)) goto LAB_100916e8;
    uVar18 = 0xffffffff;
    uVar15 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar17 = 0;
    uVar14 = 0;
    uVar16 = 0;
    uVar13 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    uVar2 = 0xff7e7e7e;
    iVar5 = param_1[0xb7];
    iVar3 = param_1[0xb6];
  }
  else {
    FUN_10021a00(0,0,8,0x11,0,0,8,0x11,param_1[0xbb],0xff,1);
    uVar16 = 1;
    uVar13 = 0xff;
    iVar3 = param_1[0xbc];
    uVar10 = 0x11;
    uVar9 = 8;
    uVar8 = 0;
    uVar7 = 0;
    uVar2 = 0x11;
    uVar1 = FUN_101c19e0(0x11,0,0,8,0x11,iVar3,0xff,1);
    FUN_10021a00(8,0,uVar1,uVar2,uVar7,uVar8,uVar9,uVar10,iVar3,uVar13,uVar16);
    uVar17 = 1;
    uVar14 = 0xff;
    iVar3 = param_1[0xbd];
    uVar16 = 0x11;
    uVar13 = 8;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0x11;
    uVar7 = 8;
    uVar2 = 0;
    uVar1 = FUN_101c19e0(0,8,0x11,0,0,8,0x11,iVar3,0xff,1);
    FUN_10021a00(uVar1,uVar2,uVar7,uVar8,uVar9,uVar10,uVar13,uVar16,iVar3,uVar14,uVar17);
    if ((param_1[0xb9] <= param_1[0xc9]) || (param_1[0xc9] < 0)) goto LAB_100916e8;
    uVar18 = 0xffffffff;
    uVar15 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar17 = 0;
    uVar14 = 0;
    uVar16 = 0;
    uVar13 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    uVar2 = 0xffdcdcdc;
    iVar5 = param_1[0xb7];
    iVar3 = param_1[0xb6];
  }
  FUN_100217a0(iVar3,iVar5 + iVar4,uVar2,uVar1,uVar7,uVar8,uVar9,uVar10,uVar13,uVar16,uVar14,uVar17,
               uVar11,uVar12,uVar15,uVar18);
LAB_100916e8:
  if (param_1[0xc4] != 0) {
    iVar3 = (**(code **)(*param_1 + 0x74))();
    if (iVar3 != 0) {
      for (local_1c = 0; local_1c < param_1[0xb9] + 1; local_1c = local_1c + 1) {
        iVar5 = local_1c * 0x11;
        FUN_10021a00(0,iVar5,8,0x11,0,0,8,0x11,param_1[0xbb],0xff,1);
        uVar16 = 1;
        uVar13 = 0xff;
        iVar3 = param_1[0xbc];
        uVar10 = 0x11;
        uVar9 = 8;
        uVar8 = 0;
        uVar7 = 0;
        uVar2 = 0x11;
        uVar1 = FUN_101c19e0(0x11,0,0,8,0x11,iVar3,0xff,1);
        FUN_10021a00(8,iVar5,uVar1,uVar2,uVar7,uVar8,uVar9,uVar10,iVar3,uVar13,uVar16);
        uVar14 = 1;
        uVar16 = 0xff;
        iVar3 = param_1[0xbd];
        uVar13 = 0x11;
        uVar10 = 8;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0x11;
        uVar2 = 8;
        uVar1 = FUN_101c19e0(iVar5,8,0x11,0,0,8,0x11,iVar3,0xff,1);
        FUN_10021a00(uVar1,iVar5,uVar2,uVar7,uVar8,uVar9,uVar10,uVar13,iVar3,uVar16,uVar14);
      }
      local_18 = 0;
      while (local_18 < param_1[0xb9]) {
        if (param_1[0xca] == local_18) {
          iVar5 = local_18 * 0x11;
          local_20 = iVar5 + 0x11;
          uVar13 = 0xff;
          iVar3 = param_1[0xc1];
          uVar10 = 0xd;
          uVar9 = 0x10;
          uVar8 = 0;
          uVar7 = 0;
          uVar2 = 0x10;
          uVar1 = FUN_101c19e0(0x10,0,0,0x10,0xd,iVar3,0xff);
          FUN_10021970(1,local_20,uVar1,uVar2,uVar7,uVar8,uVar9,uVar10,iVar3,uVar13);
          uVar16 = 0xff;
          iVar3 = param_1[0xc2];
          uVar13 = 0xd;
          uVar10 = 0x20;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0x10;
          uVar2 = 0x20;
          iVar6 = local_20;
          uVar1 = FUN_101c19e0(local_20,0x20,0x10,0,0,0x20,0xd,iVar3,0xff);
          FUN_10021970(uVar1,iVar6,uVar2,uVar7,uVar8,uVar9,uVar10,uVar13,iVar3,uVar16);
          uVar15 = 0xffffffff;
          uVar12 = 0;
          uVar11 = 0;
          uVar17 = 0;
          uVar14 = 0;
          uVar16 = 0;
          uVar13 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar2 = 0;
          uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
          FUN_100217a0(param_1[0xb6],iVar5 + 0x11 + iVar4,0xffdcdcdc,uVar1,uVar2,uVar7,uVar8,uVar9,
                       uVar10,uVar13,uVar16,uVar14,uVar17,uVar11,uVar12,uVar15);
          local_18 = local_18 + 1;
        }
        else {
          uVar15 = 0xffffffff;
          uVar12 = 0;
          uVar11 = 0;
          uVar17 = 0;
          uVar14 = 0;
          uVar16 = 0;
          uVar13 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar2 = 0;
          uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
          FUN_100217a0(param_1[0xb6],(local_18 + 1) * 0x11 + iVar4,0xffdcdcdc,uVar1,uVar2,uVar7,
                       uVar8,uVar9,uVar10,uVar13,uVar16,uVar14,uVar17,uVar11,uVar12,uVar15);
          local_18 = local_18 + 1;
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10091980 FUN_10091980 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100034b0@100034b0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10058020@10058020 CORE.DLL::UObject::IsA@EXTERNAL:00000198 FUN_10058770@10058770 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10091980(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UObject *this;
  uint local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ebdd0;
  local_10 = ExceptionList;
  local_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  this = *(UObject **)(*(int *)(*(int *)(param_1 + 0xb8) + 0xc) + 4);
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  do {
    if (this == (UObject *)0x0) {
LAB_10091a31:
      FUN_100034b0(param_2);
      FUN_100212e0();
      *(undefined4 *)(param_2 + 0x38) = 0;
      *(undefined4 *)(param_2 + 0x3c) = 0;
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = UObject::IsA(this,(UClass *)&DAT_1036eff0);
    if (iVar1 != 0) {
      FUN_10058770(&local_2c);
      uVar2 = FUN_101c19e0();
      uVar3 = FUN_101c19e0(uVar2);
      FUN_10021df0(local_2c,local_28,uVar3,uVar2);
      goto LAB_10091a31;
    }
    iVar1 = FUN_10058020();
    this = *(UObject **)(*(int *)(iVar1 + 0xc) + 4);
  } while( true );
}


// ==== 10091ab0 FUN_10091ab0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100034b0@100034b0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10058020@10058020 CORE.DLL::UObject::IsA@EXTERNAL:00000198 FUN_10058770@10058770 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10091ab0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UObject *this;
  uint local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ebdf0;
  local_10 = ExceptionList;
  local_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  this = *(UObject **)(*(int *)(*(int *)(param_1 + 0xb8) + 0xc) + 4);
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  do {
    if (this == (UObject *)0x0) {
LAB_10091b6e:
      FUN_100034b0(param_2);
      FUN_100212e0();
      *(undefined4 *)(param_2 + 0x38) = 0;
      *(undefined4 *)(param_2 + 0x3c) = 0;
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = UObject::IsA(this,(UClass *)&DAT_1035b180);
    if (iVar1 == 0) {
      FUN_10058770(&local_2c);
      uVar2 = FUN_101c19e0();
      uVar3 = FUN_101c19e0(uVar2);
      FUN_10021df0(local_2c,local_28,uVar3,uVar2);
      goto LAB_10091b6e;
    }
    iVar1 = FUN_10058020();
    this = *(UObject **)(*(int *)(iVar1 + 0xc) + 4);
  } while( true );
}


// ==== 10091c30 FUN_10091c30 depth=0 from=raiz callees=FUN_100217a0@100217a0 CORE.DLL::FString::FString@EXTERNAL:000001a4 FUN_10002f40@10002f40 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_100218f0@100218f0 CORE.DLL::FString::Mid@EXTERNAL:000001b2 FUN_10038320@10038320 FUN_101c19e0@101c19e0 FUN_10038aa0@10038aa0 FUN_10058020@10058020 FUN_1003b4a0@1003b4a0 CORE.DLL::UObject::IsA@EXTERNAL:00000198 FUN_10058770@10058770 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10025df0@10025df0 FUN_100212e0@100212e0 FUN_10024670@10024670 FUN_10021df0@10021df0 CORE.DLL::FString::FString@EXTERNAL:0000019e CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_10141550@10141550 FUN_10021a00@10021a00 FUN_1003b890@1003b890 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10038fd0@10038fd0 FUN_10037e10@10037e10 FUN_1003b100@1003b100 FUN_10039a70@10039a70
// strings: 

undefined4 __thiscall FUN_10091c30(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  ushort *puVar6;
  FString *pFVar7;
  int *piVar8;
  UObject *this;
  ushort *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_184;
  int iStack_178;
  int iStack_174;
  uint uStack_160;
  FString local_150 [12];
  FString local_144 [12];
  FString local_138 [12];
  FString local_12c [12];
  FString local_120 [12];
  FString local_114 [12];
  FString local_108 [12];
  FString local_fc [12];
  FString local_f0 [12];
  FString local_e4 [12];
  FString local_d8 [12];
  FString local_cc [12];
  FString local_c0 [12];
  FString local_b4 [12];
  FString local_a8 [12];
  FString local_9c [12];
  FString local_90 [12];
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  int local_78;
  FString local_74 [12];
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_28;
  undefined4 local_24;
  FString local_20 [12];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_2;
  puStack_7c = &LAB_101ebf87;
  local_80 = ExceptionList;
  uStack_160 = DAT_103554c4 ^ (uint)local_74;
  local_84 = (undefined1 *)&uStack_160;
  ExceptionList = &local_80;
  local_78 = 0;
  FUN_10002f40();
  this = *(UObject **)(*(int *)(param_1[0x2e] + 0xc) + 4);
  local_3c = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  while (this != (UObject *)0x0) {
    iVar2 = UObject::IsA(this,(UClass *)&DAT_1035b180);
    if (iVar2 == 0) {
      FUN_10058770();
      FUN_101c19e0();
      FUN_101c19e0();
      iStack_174 = 0x10091cf5;
      FUN_10021df0();
      break;
    }
    iVar2 = FUN_10058020();
    this = *(UObject **)(*(int *)(iVar2 + 0xc) + 4);
  }
  iVar2 = FUN_101c19e0();
  iVar3 = FUN_101c19e0();
  iVar4 = (**(code **)(*param_1 + 0x74))();
  if (iVar4 == 0) {
    if (param_1[0xce] != 0) {
      iStack_174 = 4;
      iStack_178 = 0;
      uStack_184 = 4;
      FUN_10021a00(0);
    }
    if (param_1[0xcf] != 0) {
      iStack_174 = iVar2 + -8;
      iStack_178 = 0;
      FUN_100218f0();
    }
    if (param_1[0xd0] != 0) {
      iStack_174 = 4;
      iStack_178 = 0;
      uStack_184 = 4;
      FUN_10021a00(iVar2 + -4);
    }
    if (param_1[0xd1] != 0) {
      iStack_174 = 4;
      iStack_178 = 4;
      FUN_100218f0();
    }
    if (param_1[0xd2] != 0) {
      iStack_174 = iVar2 + -8;
      iStack_178 = 4;
      FUN_100218f0();
    }
    if (param_1[0xd3] != 0) {
      iStack_174 = 4;
      iStack_178 = 4;
      FUN_100218f0();
    }
    if (param_1[0xd4] != 0) {
      iStack_174 = 4;
      iStack_178 = 0;
      uStack_184 = 4;
      FUN_10021a00(0);
    }
    if (param_1[0xd5] != 0) {
      iStack_174 = iVar2 + -8;
      iStack_178 = iVar3 + -4;
      FUN_100218f0();
    }
    iVar3 = param_1[0xd6];
  }
  else {
    if (param_1[0xc5] != 0) {
      iStack_174 = 4;
      iStack_178 = 0;
      uStack_184 = 4;
      FUN_10021a00(0);
    }
    if (param_1[0xc6] != 0) {
      iStack_174 = iVar2 + -8;
      iStack_178 = 0;
      FUN_100218f0();
    }
    if (param_1[199] != 0) {
      iStack_174 = 4;
      iStack_178 = 0;
      uStack_184 = 4;
      FUN_10021a00(iVar2 + -4);
    }
    if (param_1[200] != 0) {
      iStack_174 = 4;
      iStack_178 = 4;
      FUN_100218f0();
    }
    if (param_1[0xc9] != 0) {
      iStack_174 = iVar2 + -8;
      iStack_178 = 4;
      FUN_100218f0();
    }
    if (param_1[0xca] != 0) {
      iStack_174 = 4;
      iStack_178 = 4;
      FUN_100218f0();
    }
    if (param_1[0xcb] != 0) {
      iStack_174 = 4;
      iStack_178 = 0;
      uStack_184 = 4;
      FUN_10021a00(0);
    }
    if (param_1[0xcc] != 0) {
      iStack_174 = iVar2 + -8;
      iStack_178 = iVar3 + -4;
      FUN_100218f0();
    }
    iVar3 = param_1[0xcd];
  }
  if (iVar3 != 0) {
    iStack_174 = 4;
    iStack_178 = 0;
    uStack_184 = 4;
    FUN_10021a00(iVar2 + -4);
  }
  iVar2 = param_1[0xd8];
  local_8 = 0;
  local_30 = iVar2;
  FString::FString(local_20);
  local_78._0_1_ = 1;
  local_24 = 0;
  param_2 = FUN_1003b100();
  local_c = FUN_1003b890();
  local_14 = param_1[0xde];
  do {
    if ((param_1[0xdd] + param_1[0xde] <= local_14) || (param_1[0xf6] <= local_14)) {
      FUN_100212e0();
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      local_78 = (uint)local_78._1_3_ << 8;
      FString::~FString(local_20);
      ExceptionList = local_80;
      return 1;
    }
    if (param_1[0xe2] == 0) {
      if (local_14 == param_1[0xe0]) {
        local_8 = 0;
        if ((param_1[0xe1] != 0) && (iVar3 = FUN_10039a70(), iVar3 != 0)) {
          pFVar5 = local_144;
          iStack_174 = 0x10092663;
          pFVar7 = (FString *)FUN_10039a70();
          pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,param_2);
          local_78._0_1_ = 0xe;
          FString::operator=(local_20,pFVar5);
          local_78._0_1_ = 1;
          FString::~FString(local_144);
          iStack_174 = 0;
          iStack_178 = 0;
          uStack_184 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          puVar6 = FString::operator*(local_20);
          local_8 = FUN_100217a0(param_1[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
        }
        iVar3 = FUN_10025df0();
        if (iVar3 == 0) {
          local_10 = FUN_1003b4a0();
          if (param_1[0xe2] == 0) {
            local_28 = 0;
            iVar3 = *(int *)GLanguageType_exref;
            if (iVar3 == 2) {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*((FString *)(param_1 + 0xc1));
              local_28 = FUN_100217a0(param_1[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11)
              ;
              iStack_174 = local_8;
              iStack_178 = 0;
              FString::FString((FString *)&uStack_184,(FString *)(param_1 + 0xc1));
              local_78._0_1_ = 1;
              FUN_10037e10();
            }
            else if (iVar3 == 3) {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*((FString *)(param_1 + 0xc1));
              local_28 = FUN_100217a0(param_1[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11)
              ;
              iStack_174 = local_8;
              iStack_178 = 0;
              FString::FString((FString *)&uStack_184,(FString *)(param_1 + 0xc1));
              local_78._0_1_ = 1;
              FUN_10038320();
            }
            else if (iVar3 == 4) {
              iVar3 = FUN_10141550();
              if (iVar3 == 8) {
                iStack_174 = 0;
                iStack_178 = 0;
                uStack_184 = 0;
                uVar11 = 0;
                uVar10 = 0;
                puVar6 = FString::operator*((FString *)(param_1 + 0xc1));
                local_28 = FUN_100217a0(param_1[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,
                                        uVar11);
              }
              iStack_174 = local_8;
              iStack_178 = 0;
              FString::FString((FString *)&uStack_184,(FString *)(param_1 + 0xc1));
              local_78._0_1_ = 1;
              FUN_10038fd0();
            }
            else {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar11 = 0;
              uVar10 = 0;
              if (iVar3 == 0) {
                puVar6 = FString::operator*((FString *)(param_1 + 0xc1));
                local_28 = FUN_100217a0(param_1[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,
                                        uVar11);
                FString::FString((FString *)&iStack_178,(FString *)(param_1 + 0xc1));
                local_78._0_1_ = 1;
                FUN_10038aa0();
              }
              else {
                puVar6 = FString::operator*((FString *)(param_1 + 0xc1));
                local_28 = FUN_100217a0(param_1[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,
                                        uVar11);
              }
            }
            local_8 = local_8 + local_28;
            iVar3 = FUN_10039a70();
            if (iVar3 != 0) {
              if (local_10 < 1) {
                iVar3 = param_1[0xdb];
                pFVar5 = (FString *)FUN_10039a70();
                FString::Len(pFVar5);
                pFVar5 = local_cc;
                iStack_174 = 0x10092c03;
                pFVar7 = (FString *)FUN_10039a70();
                pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
                local_78._0_1_ = 0x1a;
                FString::operator=(local_20,pFVar5);
                pFVar5 = local_cc;
              }
              else {
                iVar3 = param_1[0xdb];
                pFVar5 = local_12c;
                iStack_174 = 0x10092ba5;
                pFVar7 = (FString *)FUN_10039a70();
                pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
                local_78._0_1_ = 0x19;
                FString::operator=(local_20,pFVar5);
                pFVar5 = local_12c;
              }
              local_78._0_1_ = 1;
              FString::~FString(pFVar5);
              iVar3 = FString::Len(local_20);
              if (iVar3 != 0) {
                iStack_174 = 0;
                iStack_178 = 0;
                uStack_184 = 0;
                uVar12 = 0;
                uVar11 = 0;
                uVar10 = 0;
                puVar6 = FString::operator*(local_20);
                FUN_100217a0(param_1[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
              }
            }
          }
          else {
            iVar3 = *(int *)GLanguageType_exref;
            if (iVar3 == 2) {
              pFVar5 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_50,0);
              local_78._0_1_ = 0xf;
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(pFVar5);
              FUN_100217a0(param_1[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
              local_78._0_1_ = 1;
              FString::~FString(local_50);
              iStack_178 = local_8;
              iVar3 = local_10;
              iStack_174 = iVar2;
              FString::Mid((FString *)(param_1 + 0xc1),(int)&stack0xfffffe78,0);
              local_78._0_1_ = 1;
              FUN_10037e10(iVar3);
            }
            else if (iVar3 == 3) {
              pFVar5 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_fc,0);
              local_78._0_1_ = 0x11;
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(pFVar5);
              FUN_100217a0(param_1[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
              local_78._0_1_ = 1;
              FString::~FString(local_fc);
              iStack_178 = local_8;
              iVar3 = local_10;
              iStack_174 = iVar2;
              FString::Mid((FString *)(param_1 + 0xc1),(int)&stack0xfffffe78,0);
              local_78._0_1_ = 1;
              FUN_10038320(iVar3);
            }
            else if (iVar3 == 4) {
              iStack_174 = local_8;
              iStack_178 = 0;
              FString::Mid((FString *)(param_1 + 0xc1),(int)&uStack_184,0);
              local_78._0_1_ = 1;
              FUN_10038fd0();
            }
            else {
              pFVar5 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_b4,0);
              local_78._0_1_ = 0x14;
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(pFVar5);
              FUN_100217a0(param_1[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
              local_78._0_1_ = 1;
              FString::~FString(local_b4);
            }
          }
          iVar3 = (**(code **)(*param_1 + 0x74))();
          if (((iVar3 != 0) && (param_1[0xdc] != 0)) && (*(int *)GLanguageType_exref == 2)) {
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = (ushort *)&DAT_10230ff8;
            iVar3 = param_1[0xe1] + param_1[0xd8];
LAB_100933ca:
            FUN_100217a0(iVar3,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
          }
        }
        else {
          iVar3 = FUN_10141550();
          if (((((iVar3 == 10) || (iVar3 = FUN_10141550(), iVar3 == 9)) ||
               ((iVar3 = FUN_10141550(), iVar3 == 0xb ||
                ((iVar3 = FUN_10141550(), iVar3 == 8 || (iVar3 = FUN_10141550(), iVar3 == 0xc))))))
              && (param_1[0xb6] != 0)) && (iVar3 = FUN_10024670(), iVar3 != 0)) {
            piVar8 = (int *)FUN_10024670();
            piVar8 = (int *)(**(code **)(*piVar8 + 0x200))();
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0x13c))();
            }
          }
          iVar3 = (**(code **)(*param_1 + 0x74))();
          if ((iVar3 != 0) && (param_1[0xdc] != 0)) {
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            FUN_100217a0(local_8 + -3 + param_1[0xd8],iVar2,0xffdcdcdc,&DAT_10230ff8,0,0);
          }
          local_10 = FUN_1003b4a0();
          iVar3 = FUN_10039a70();
          if (iVar3 != 0) {
            if (local_14 + 1 < param_1[0xf6]) {
              if (local_10 == 0) {
                iVar3 = param_1[0xdb];
                pFVar5 = (FString *)FUN_10039a70();
                FString::Len(pFVar5);
                pFVar5 = local_114;
                iStack_174 = 0x10092e26;
                pFVar7 = (FString *)FUN_10039a70();
                pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
                local_78._0_1_ = 0x1b;
                FString::operator=(local_20,pFVar5);
                pFVar5 = local_114;
              }
              else {
                iVar3 = param_1[0xdb];
                pFVar5 = local_5c;
                iStack_174 = 0x10092e6b;
                pFVar7 = (FString *)FUN_10039a70();
                pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
                local_78._0_1_ = 0x1c;
                FString::operator=(local_20,pFVar5);
                pFVar5 = local_5c;
              }
            }
            else {
              iVar3 = param_1[0xdb];
              pFVar5 = (FString *)FUN_10039a70();
              FString::Len(pFVar5);
              pFVar5 = local_68;
              iStack_174 = 0x10092ec6;
              pFVar7 = (FString *)FUN_10039a70();
              pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
              local_78._0_1_ = 0x1d;
              FString::operator=(local_20,pFVar5);
              pFVar5 = local_68;
            }
            local_78._0_1_ = 1;
            FString::~FString(pFVar5);
            iVar3 = FString::Len(local_20);
            if (iVar3 != 0) {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(local_20);
              iVar3 = param_1[0xd8] + local_8;
              goto LAB_100933ca;
            }
          }
        }
      }
      else if (local_14 + 1 < param_1[0xf6]) {
        local_10 = FUN_1003b4a0();
        if (param_1[0xe2] == 0) {
          iVar3 = FUN_10039a70();
          if (iVar3 != 0) {
            if (local_10 == 0) {
              pFVar5 = (FString *)FUN_10039a70();
              FString::Len(pFVar5);
              pFVar5 = local_120;
              iStack_174 = 0x1009329e;
              pFVar7 = (FString *)FUN_10039a70();
              pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,param_2);
              local_78._0_1_ = 0x26;
              FString::operator=(local_20,pFVar5);
              pFVar5 = local_120;
            }
            else {
              pFVar5 = local_108;
              iStack_174 = 0x10093246;
              pFVar7 = (FString *)FUN_10039a70();
              pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,param_2);
              local_78._0_1_ = 0x25;
              FString::operator=(local_20,pFVar5);
              pFVar5 = local_108;
            }
            local_78._0_1_ = 1;
            FString::~FString(pFVar5);
            iVar3 = FString::Len(local_20);
            if (iVar3 != 0) {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(local_20);
              local_8 = FUN_100217a0(param_1[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            }
          }
        }
        else {
          iVar3 = FUN_10039a70();
          if (iVar3 != 0) {
            if (param_1[0xdb] < 1) {
              pFVar5 = (FString *)FUN_10039a70();
              FString::Len(pFVar5);
              pFVar5 = local_a8;
              iStack_174 = 0x10092fe0;
              pFVar7 = (FString *)FUN_10039a70();
              pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,param_2);
              local_78._0_1_ = 0x1f;
              FString::operator=(local_20,pFVar5);
              pFVar5 = local_a8;
            }
            else {
              pFVar5 = local_90;
              iStack_174 = 0x10092f8e;
              pFVar7 = (FString *)FUN_10039a70();
              pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,param_2);
              local_78._0_1_ = 0x1e;
              FString::operator=(local_20,pFVar5);
              pFVar5 = local_90;
            }
            local_78._0_1_ = 1;
            FString::~FString(pFVar5);
            iVar3 = FString::Len(local_20);
            if (iVar3 != 0) {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(local_20);
              local_8 = FUN_100217a0(param_1[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            }
          }
          if (*(int *)GLanguageType_exref == 2) {
            pFVar5 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_c0,0);
            local_78._0_1_ = 0x20;
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(param_1[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            local_78._0_1_ = 1;
            FString::~FString(local_c0);
            iStack_178 = local_8;
            iVar3 = local_10;
            iStack_174 = iVar2;
            FString::Mid((FString *)(param_1 + 0xc1),(int)&stack0xfffffe78,0);
            local_78._0_1_ = 1;
            FUN_10037e10(iVar3);
          }
          else if (*(int *)GLanguageType_exref == 3) {
            pFVar5 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_d8,0);
            local_78._0_1_ = 0x22;
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(param_1[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            local_78._0_1_ = 1;
            FString::~FString(local_d8);
            iStack_178 = local_8;
            iVar3 = local_10;
            iStack_174 = iVar2;
            FString::Mid((FString *)(param_1 + 0xc1),(int)&stack0xfffffe78,0);
            local_78._0_1_ = 1;
            FUN_10038320(iVar3);
          }
          else {
            pFVar5 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_f0,0);
            local_78._0_1_ = 0x24;
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(param_1[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            local_78._0_1_ = 1;
            FString::~FString(local_f0);
          }
        }
      }
      else {
        local_10 = FUN_1003b4a0();
        iVar3 = FUN_10039a70();
        if (iVar3 != 0) {
          pFVar5 = (FString *)FUN_10039a70();
          FString::Len(pFVar5);
          pFVar5 = local_138;
          iStack_174 = 0x10093368;
          pFVar7 = (FString *)FUN_10039a70();
          pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,param_2);
          local_78._0_1_ = 0x27;
          FString::operator=(local_20,pFVar5);
          local_78._0_1_ = 1;
          FString::~FString(local_138);
          iVar3 = FString::Len(local_20);
          if (iVar3 != 0) {
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = FString::operator*(local_20);
            iVar3 = param_1[0xd8];
            goto LAB_100933ca;
          }
        }
      }
    }
    else {
      local_10 = FUN_1003b4a0();
      if (param_1[0xe2] == 0) {
        FString::Len((FString *)(param_1 + 0xc1));
        pFVar5 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_150,param_2);
        local_78._0_1_ = 7;
        FString::operator=(local_20,pFVar5);
        local_78._0_1_ = 1;
        FString::~FString(local_150);
        local_8 = 0;
        iVar3 = *(int *)GLanguageType_exref;
        if (iVar3 == 2) {
          iStack_174 = 0;
          iStack_178 = 0;
          uStack_184 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          puVar6 = FString::operator*(local_20);
          local_8 = FUN_100217a0(param_1[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
          iStack_178 = 0;
          iStack_174 = iVar2;
          FString::FString((FString *)&stack0xfffffe78,local_20);
          local_78._0_1_ = 1;
          FUN_10037e10();
        }
        else if (iVar3 == 3) {
          iStack_174 = 0;
          iStack_178 = 0;
          uStack_184 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          puVar6 = FString::operator*(local_20);
          local_8 = FUN_100217a0(param_1[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
          iStack_178 = 0;
          iStack_174 = iVar2;
          FString::FString((FString *)&stack0xfffffe78,local_20);
          local_78._0_1_ = 1;
          FUN_10038320();
        }
        else if (iVar3 == 4) {
          iStack_178 = 0;
          iStack_174 = iVar2;
          FString::FString((FString *)&stack0xfffffe78,local_20);
          local_78._0_1_ = 1;
          FUN_10038fd0();
        }
        else {
          iStack_174 = 0;
          iStack_178 = 0;
          uStack_184 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          if (iVar3 == 0) {
            puVar6 = FString::operator*(local_20);
            local_8 = FUN_100217a0(param_1[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            uStack_184 = 0x10092476;
            FString::FString((FString *)&stack0xfffffe84,local_20);
            local_78._0_1_ = 1;
            FUN_10038aa0();
          }
          else {
            puVar6 = FString::operator*(local_20);
            local_8 = FUN_100217a0(param_1[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
          }
        }
        iVar3 = FUN_10039a70();
        if (iVar3 != 0) {
          if (local_10 < 1) {
            iVar3 = param_1[0xdb];
            pFVar5 = (FString *)FUN_10039a70();
            FString::Len(pFVar5);
            iStack_174 = local_c;
            iStack_178 = 0x1009253d;
            pFVar5 = local_74;
            pFVar7 = (FString *)FUN_10039a70();
            iStack_174 = 0x10092545;
            pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
            local_78._0_1_ = 0xd;
            FString::operator=(local_20,pFVar5);
            pFVar5 = local_74;
          }
          else {
            iVar3 = param_1[0xdb];
            pFVar5 = local_e4;
            iStack_174 = local_c;
            iStack_178 = 0x100924e2;
            pFVar7 = (FString *)FUN_10039a70();
            iStack_174 = 0x100924ea;
            pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
            local_78._0_1_ = 0xc;
            FString::operator=(local_20,pFVar5);
            pFVar5 = local_e4;
          }
          local_78._0_1_ = 1;
          FString::~FString(pFVar5);
          iVar3 = FString::Len(local_20);
          if (iVar3 != 0) {
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = (ushort *)0x0;
            puVar9 = FString::operator*(local_20);
            iVar4 = -0x232324;
            iVar3 = iVar2;
LAB_1009259f:
            FUN_100217a0(iVar3,iVar4,puVar9,puVar6,uVar10,uVar11,uVar12);
          }
        }
      }
      else {
        pFVar5 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_9c,param_2);
        local_78._0_1_ = 2;
        FString::operator=(local_20,pFVar5);
        local_78._0_1_ = 1;
        FString::~FString(local_9c);
        iVar3 = FString::Len(local_20);
        if (iVar3 != 0) {
          iVar3 = *(int *)GLanguageType_exref;
          if (iVar3 == 2) {
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = FString::operator*(local_20);
            FUN_100217a0(param_1[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            iStack_178 = 0;
            iStack_174 = iVar2;
            FString::FString((FString *)&stack0xfffffe78,local_20);
            local_78._0_1_ = 1;
            FUN_10037e10();
          }
          else if (iVar3 == 3) {
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = FString::operator*(local_20);
            FUN_100217a0(param_1[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            iStack_178 = 0;
            iStack_174 = iVar2;
            FString::FString((FString *)&stack0xfffffe78,local_20);
            local_78._0_1_ = 1;
            FUN_10038320();
          }
          else if (iVar3 == 4) {
            iStack_178 = 0;
            iStack_174 = iVar2;
            FString::FString((FString *)&stack0xfffffe78,local_20);
            local_78._0_1_ = 1;
            FUN_10038fd0();
          }
          else {
            if (iVar3 != 0) {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(local_20);
              puVar9 = (ushort *)0xffdcdcdc;
              iVar3 = param_1[0xd8];
              iVar4 = iVar2;
              goto LAB_1009259f;
            }
            uStack_184 = 0x1009224f;
            FString::FString((FString *)&stack0xfffffe84,local_20);
            local_78._0_1_ = 1;
            FUN_10038aa0();
          }
        }
      }
      if (((local_14 == param_1[0xe0]) && (param_1[0xdc] != 0)) &&
         (*(int *)GLanguageType_exref == 2)) {
        iStack_174 = 0;
        iStack_178 = 0;
        uStack_184 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        puVar6 = (ushort *)&DAT_10230ff8;
        iVar3 = param_1[0xe1] + -3 + param_1[0xd8];
        goto LAB_100933ca;
      }
    }
    iVar2 = iVar2 + param_1[0xd7] + param_1[0xd8];
    param_2 = local_10;
    if ((local_10 == 0) && ((param_1[0xe2] == 0 || (param_1[0xdb] == 0)))) {
      local_c = local_c + 1;
    }
    local_14 = local_14 + 1;
    local_30 = iVar2;
  } while( true );
}


// ==== 10093480 FUN_10093480 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10014420@10014420 FUN_10015f70@10015f70 FUN_10002f40@10002f40 CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::Mid@EXTERNAL:000001b2 FUN_100169b0@100169b0 FUN_101c19e0@101c19e0 FUN_10015ac0@10015ac0 FUN_10058020@10058020 CORE.DLL::UObject::IsA@EXTERNAL:00000198 FUN_100134e0@100134e0 FUN_10058770@10058770 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10025df0@10025df0 FUN_100212e0@100212e0 FUN_10021df0@10021df0 FUN_100133c0@100133c0 __security_check_cookie@101c16c2 FUN_10013e70@10013e70 FUN_10141550@10141550 FUN_1002ac60@1002ac60 CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10016270@10016270 FUN_10021970@10021970 FUN_10020bb0@10020bb0 FUN_10013c60@10013c60 FUN_100139e0@100139e0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10093480(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  FString *pFVar6;
  UObject *this;
  ushort in_FPUControlWord;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uStack_3a8;
  FString local_394 [12];
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  int local_374;
  longlong local_370;
  int local_368;
  undefined4 local_364;
  int local_360;
  int local_35c;
  int local_358;
  undefined1 *local_354;
  float local_350;
  int local_34c;
  float local_348 [2];
  int local_340;
  undefined4 local_33c;
  undefined1 *local_338;
  void *local_334;
  undefined1 *puStack_330;
  uint local_32c;
  ushort local_328 [400];
  uint local_8;
  
  puStack_330 = &LAB_101ebfd4;
  local_334 = ExceptionList;
  uStack_3a8 = DAT_103554c4 ^ (uint)local_328;
  local_338 = (undefined1 *)&uStack_3a8;
  ExceptionList = &local_334;
  local_32c = 0;
  local_8 = uStack_3a8;
  FUN_10002f40();
  this = *(UObject **)(*(int *)(param_1[0x2e] + 0xc) + 4);
  local_384 = 0;
  local_388 = 0;
  local_380 = 0;
  local_37c = 0;
  while (this != (UObject *)0x0) {
    iVar2 = UObject::IsA(this,(UClass *)&DAT_1035b180);
    if (iVar2 == 0) {
      FUN_10058770();
      FUN_101c19e0();
      FUN_101c19e0();
      FUN_10021df0(param_1[0x20]);
      break;
    }
    iVar2 = FUN_10058020();
    this = *(UObject **)(*(int *)(iVar2 + 0xc) + 4);
  }
  iVar2 = (**(code **)(*param_1 + 0x74))();
  if (iVar2 == 0) {
    if (param_1[0xc9] != 0) {
      uVar11 = 8;
      uVar8 = 0;
      uVar7 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      FUN_10021970(0,0,8,uVar3,uVar7,uVar8,uVar11);
    }
    if (param_1[0xca] != 0) {
      uVar12 = 8;
      uVar11 = 0;
      uVar8 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      uVar7 = FUN_101c19e0(uVar3);
      FUN_10021970(8,0,uVar7,uVar3,uVar8,uVar11,uVar12);
    }
    iVar2 = param_1[0xcb];
  }
  else {
    if (param_1[0xc6] != 0) {
      uVar11 = 8;
      uVar8 = 0;
      uVar7 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      FUN_10021970(0,0,8,uVar3,uVar7,uVar8,uVar11);
    }
    if (param_1[199] != 0) {
      uVar12 = 8;
      uVar11 = 0;
      uVar8 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      uVar7 = FUN_101c19e0(uVar3);
      FUN_10021970(8,0,uVar7,uVar3,uVar8,uVar11,uVar12);
    }
    iVar2 = param_1[200];
  }
  if (iVar2 != 0) {
    uVar13 = 8;
    uVar9 = 0;
    uVar12 = 0;
    uVar3 = FUN_101c19e0(0,0,8);
    uVar11 = 8;
    uVar8 = 0;
    uVar7 = FUN_101c19e0(0,8,uVar3);
    FUN_10021970(uVar7,uVar8,uVar11,uVar3,uVar12,uVar9,uVar13);
  }
  if ((param_1[0xd2] != 0) && (param_1[0xcc] != 0)) {
    uVar12 = 0xc1;
    uVar11 = 0;
    uVar8 = 0;
    uVar3 = FUN_101c19e0(0,0,0xc1);
    uVar7 = FUN_101c19e0(uVar3);
    FUN_10021970(0,0,uVar7,uVar3,uVar8,uVar11,uVar12);
  }
  local_33c = (float)param_1[0xda];
  if ((int)local_33c < 1) {
    iVar2 = FUN_101c19e0();
  }
  else {
    iVar2 = FUN_101c19e0();
  }
  param_1[0xdb] = iVar2;
  uVar8 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(param_1 + 0xde));
  FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
  fVar1 = local_348[0];
  uVar8 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(param_1 + 0xed));
  FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
  iVar2 = (int)fVar1 + (int)local_348[0];
  uVar8 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(param_1 + 0xe1));
  FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
  if (param_1[0xdd] == 0) {
    param_1[0xd0] = (uint)(iVar2 + (int)local_348[0] < param_1[0xdb] + -0xc);
  }
  local_350 = 0.0;
  local_364 = 0;
  local_340 = 2;
  iVar2 = 0;
  if (param_1[0xcd] == 2) {
    while( true ) {
      local_374 = iVar2;
      iVar5 = FString::Len((FString *)(param_1 + 0xde));
      if (iVar5 <= iVar2) break;
      local_328[iVar2] = 0x2a;
      iVar2 = iVar2 + 1;
    }
    local_328[iVar2] = 0;
    iVar2 = FUN_100217a0(local_340,2,0xffdcdcdc,local_328,0,0,0,0,0,0,0,0,0);
  }
  else {
    local_368 = 0;
    local_358 = 0;
    local_33c = (float)param_1[0xd9];
    iVar5 = FString::Len((FString *)(param_1 + 0xde));
    if ((int)local_33c < iVar5) {
      local_360 = (int)local_33c;
      while( true ) {
        iVar5 = FString::Len((FString *)(param_1 + 0xde));
        if (iVar5 <= local_360) break;
        pFVar6 = (FString *)FString::Mid((FString *)(param_1 + 0xde),(int)local_394,local_360);
        local_32c._0_1_ = 1;
        uVar11 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar3 = 0;
        puVar4 = FString::operator*(pFVar6);
        FUN_10020bb0(&local_370,puVar4,uVar3,uVar7,uVar8,uVar11);
        local_32c = (uint)local_32c._1_3_ << 8;
        FString::~FString(local_394);
        iVar2 = iVar2 + (int)local_370;
        local_368 = iVar2;
        iVar5 = FUN_101c19e0();
        if (iVar5 <= iVar2) goto LAB_10093984;
        local_360 = local_360 + 1;
      }
      if (local_358 == 0) goto LAB_100938c2;
    }
    else {
LAB_100938c2:
      uVar8 = 0;
      uVar7 = 0;
      uVar3 = 0;
      puVar4 = FString::operator*((FString *)(param_1 + 0xed));
      FUN_10020bb0(&local_370,puVar4,uVar3,uVar7,uVar8);
      iVar2 = iVar2 + (int)local_370;
      local_368 = iVar2;
      iVar5 = FUN_101c19e0();
      if (iVar2 < iVar5) {
        local_35c = 0;
        while( true ) {
          iVar5 = FString::Len((FString *)(param_1 + 0xe1));
          if (iVar5 <= local_35c) break;
          pFVar6 = (FString *)FString::Mid((FString *)(param_1 + 0xe1),(int)local_394,local_35c);
          local_32c._0_1_ = 2;
          uVar11 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar3 = 0;
          puVar4 = FString::operator*(pFVar6);
          FUN_10020bb0(&local_370,puVar4,uVar3,uVar7,uVar8,uVar11);
          local_32c = (uint)local_32c._1_3_ << 8;
          FString::~FString(local_394);
          iVar2 = iVar2 + (int)local_370;
          local_368 = iVar2;
          iVar5 = FUN_101c19e0();
          if (iVar5 <= iVar2) goto LAB_10093984;
          local_35c = local_35c + 1;
        }
      }
      else {
LAB_10093984:
        local_358 = 1;
      }
    }
    local_340 = 2;
    iVar2 = FString::Len((FString *)(param_1 + 0xde));
    if (param_1[0xd9] < iVar2) {
      uVar14 = 0;
      uVar10 = 0;
      uVar13 = 0;
      uVar9 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar3 = 0;
      puVar4 = FString::operator*((FString *)(param_1 + 0xde));
      iVar2 = FUN_100217a0(2,2,0xffdcdcdc,puVar4 + param_1[0xd9],uVar3,uVar7,uVar8,uVar11,uVar12,
                           uVar9,uVar13,uVar10,uVar14);
      iVar5 = FString::Len((FString *)(param_1 + 0xde));
      if (0 < iVar5) {
        puVar4 = FString::operator*((FString *)(param_1 + 0xde));
        local_354 = &stack0xfffffc4c;
        FString::FString((FString *)&stack0xfffffc4c,puVar4 + param_1[0xd9]);
        local_32c = local_32c & 0xffffff00;
        iVar2 = FUN_10014420();
      }
    }
    else {
      iVar2 = 0;
    }
  }
  uVar8 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(param_1 + 0xed));
  FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
  local_33c = local_348[0];
  uVar8 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(param_1 + 0xf0));
  FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
  local_350 = local_348[0];
  if (local_348[0] != 0.0) {
    iVar5 = FUN_10141550();
    if (iVar5 == 6) {
      local_350 = 1.68156e-44;
    }
  }
  if (param_1[0xcd] == 2) {
LAB_10093b35:
    local_34c = 0;
    while( true ) {
      iVar5 = FString::Len((FString *)(param_1 + 0xe1));
      if (iVar5 <= local_34c) break;
      local_328[local_34c] = 0x2a;
      local_34c = local_34c + 1;
    }
    local_328[local_34c] = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar3 = 0;
    puVar4 = FString::operator*((FString *)(param_1 + 0xed));
    FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
    uVar14 = 0;
    uVar10 = 0;
    uVar13 = 0;
    uVar9 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar3 = 0;
    puVar4 = local_328;
  }
  else {
    iVar5 = *(int *)GLanguageType_exref;
    if (iVar5 == 2) {
      FUN_100139e0(local_340,2);
    }
    else if (iVar5 == 0) {
      FUN_10013c60(local_340,2);
    }
    else if (iVar5 == 3) {
      FUN_10013e70(local_340,2);
    }
    else if (iVar5 == 4) {
      FUN_100169b0(local_340);
    }
    if (param_1[0xcd] == 2) goto LAB_10093b35;
    iVar5 = FUN_10141550();
    if (iVar5 == 10) {
LAB_10093bfa:
      local_348[0] = 0.0;
    }
    else {
      iVar5 = FUN_10141550();
      if (iVar5 == 9) goto LAB_10093bfa;
      uVar8 = 0;
      uVar7 = 0;
      uVar3 = 0;
      puVar4 = FString::operator*((FString *)(param_1 + 0xed));
      FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
    }
    uVar14 = 0;
    uVar10 = 0;
    uVar13 = 0;
    uVar9 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar3 = 0;
    puVar4 = FString::operator*((FString *)(param_1 + 0xe1));
  }
  FUN_100217a0(local_340 + (int)local_350 + iVar2 + (int)local_348[0],2,0xffdcdcdc,puVar4,uVar3,
               uVar7,uVar8,uVar11,uVar12,uVar9,uVar13,uVar10,uVar14);
  iVar5 = FUN_10025df0();
  if (iVar5 == 0) {
    iVar5 = (**(code **)(*param_1 + 0x74))();
    if ((iVar5 == 0) || (*(int *)GLanguageType_exref != 0)) {
      iVar5 = (**(code **)(*param_1 + 0x74))();
      if ((iVar5 == 0) || (*(int *)GLanguageType_exref != 2)) {
        iVar5 = (**(code **)(*param_1 + 0x74))();
        if ((iVar5 == 0) || (*(int *)GLanguageType_exref != 3)) {
          iVar5 = (**(code **)(*param_1 + 0x74))();
          if ((iVar5 != 0) && (*(int *)GLanguageType_exref == 4)) {
            FUN_10016270(local_340,2);
          }
        }
        else {
          FUN_100134e0(local_340,2,iVar2,local_33c);
        }
      }
      else {
        FUN_10015f70(local_340,2);
      }
    }
    else {
      FUN_100133c0(local_340,2);
    }
    iVar5 = (**(code **)(*param_1 + 0x74))();
    if ((((iVar5 != 0) && (local_33c == 0.0)) && (param_1[0xcf] != 0)) && (param_1[0xd1] != 0)) {
      FUN_100217a0(iVar2 + -1,2,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0);
    }
    local_354 = (undefined1 *)((int)local_33c + iVar2);
    fVar1 = (float)(int)local_354;
    if ((int)local_354 < 0) {
      fVar1 = fVar1 + _DAT_10230f20;
    }
    if ((float)param_1[0x22] < fVar1) {
      param_1[0xd9] = param_1[0xd9] + 1;
    }
    goto LAB_10093f02;
  }
  local_354 = (undefined1 *)((int)local_33c + iVar2);
  param_1[0xf7] = (int)local_354;
  local_33c = (float)(int)local_354;
  if ((int)local_354 < 0) {
    local_33c = local_33c + _DAT_10230f20;
  }
  if ((float)param_1[0x22] == local_33c) {
    iVar2 = (int)local_354 - 1;
LAB_10093e93:
    param_1[0xf7] = iVar2;
  }
  else if ((float)param_1[0x22] < local_33c) {
    if (*(int *)GLanguageType_exref == 5) {
      local_354 = &stack0xfffffc4c;
      iVar2 = param_1[0xd9];
      FString::Mid((FString *)(param_1 + 0xde),(int)&stack0xfffffc4c,0);
      local_32c = local_32c & 0xffffff00;
      FUN_1002ac60(iVar2);
      iVar2 = FUN_10015ac0();
      param_1[0xd9] = param_1[0xd9] + iVar2;
    }
    else {
      param_1[0xd9] = param_1[0xd9] + 1;
    }
    param_1[0xdc] = param_1[0xd9];
    local_33c = (float)CONCAT22(in_FPUControlWord,(undefined2)local_33c);
    local_354 = (undefined1 *)(in_FPUControlWord | 0xc00);
    local_370 = (longlong)ROUND((float)param_1[0x22] - (float)_DAT_1022e0b0);
    iVar2 = (int)local_370;
    goto LAB_10093e93;
  }
  if (param_1[0xcf] != 0) {
    iVar2 = (**(code **)(*param_1 + 0x74))();
    if ((iVar2 != 0) && (param_1[0xd1] != 0)) {
      if (param_1[0xcd] == 2) {
        iVar2 = param_1[0xf7];
      }
      else {
        iVar2 = param_1[0xf7] + -1;
      }
      FUN_100217a0(iVar2,2,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0);
    }
  }
LAB_10093f02:
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_334;
  __security_check_cookie(local_8 ^ (uint)local_328);
  return;
}


// ==== 10093f70 FUN_10093f70 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10058020@10058020 CORE.DLL::UObject::IsA@EXTERNAL:00000198 FUN_10021970@10021970 FUN_10021a00@10021a00 FUN_10058770@10058770 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10093f70(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UObject *this;
  uint local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ec000;
  local_10 = ExceptionList;
  local_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  this = *(UObject **)(*(int *)(*(int *)(param_1 + 0xb8) + 0xc) + 4);
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  do {
    if (this == (UObject *)0x0) {
LAB_1009402e:
      if (0 < *(int *)(param_1 + 0x2d8)) {
        if (*(int *)(param_1 + 0x2f8) != 0) {
          FUN_10021a00(0,*(undefined4 *)(param_1 + 0x2dc),0xf,8,0,0,0xf,8,*(int *)(param_1 + 0x2f8),
                       0xff,1);
        }
        if (*(int *)(param_1 + 0x300) != 0) {
          FUN_10021a00(0,*(int *)(param_1 + 0x2dc) + -8 + *(int *)(param_1 + 0x2d8),0xf,8,0,0,0xf,8,
                       *(int *)(param_1 + 0x300),0xff,1);
        }
        if (*(int *)(param_1 + 0x2fc) != 0) {
          FUN_10021970(0,*(int *)(param_1 + 0x2dc) + 8,0xf,*(int *)(param_1 + 0x2d8) + -0x10,0,0,0xf
                       ,8,*(int *)(param_1 + 0x2fc),0xff);
        }
      }
      *(undefined4 *)(param_2 + 0x38) = 0;
      *(undefined4 *)(param_2 + 0x3c) = 0;
      FUN_100212e0();
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = UObject::IsA(this,(UClass *)&DAT_1035b180);
    if (iVar1 == 0) {
      FUN_10058770(&local_2c);
      uVar2 = FUN_101c19e0();
      uVar3 = FUN_101c19e0(uVar2);
      FUN_10021df0(local_2c,local_28,uVar3,uVar2);
      goto LAB_1009402e;
    }
    iVar1 = FUN_10058020();
    this = *(UObject **)(*(int *)(iVar1 + 0xc) + 4);
  } while( true );
}


// ==== 10096870 FUN_10096870 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 __security_check_cookie@101c16c2 FUN_101c19e0@101c19e0 FUN_1004f5c0@1004f5c0 FUN_10002f40@10002f40 FUN_10021970@10021970 FUN_10021a00@10021a00 FUN_100212e0@100212e0 FUN_100c72c0@100c72c0
// strings: 

void __thiscall FUN_10096870(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int local_224;
  void *local_21c;
  undefined1 *puStack_218;
  undefined4 local_214;
  undefined1 local_210 [520];
  uint local_8;
  
  puStack_218 = &LAB_101ec820;
  local_21c = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_210;
  ExceptionList = &local_21c;
  iVar4 = 0;
  local_214 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  for (local_224 = *(int *)(param_1 + 0x308);
      ((local_224 < *(int *)(param_1 + 0x300) + *(int *)(param_1 + 0x308) &&
       (local_224 <= *(int *)(param_1 + 0x30c))) && (local_224 < *(int *)(param_1 + 0x2ec)));
      local_224 = local_224 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x2e8) + local_224 * 4);
    if (local_224 == *(int *)(param_1 + 0x310)) {
      FUN_10021970(*(undefined4 *)(param_1 + 0x314),
                   (*(int *)(param_1 + 0x31c) + 0xc) * iVar4 + *(int *)(param_1 + 0x318),0xeb,0xf,0,
                   0,0x10,0xd,*(undefined4 *)(param_1 + 0x2dc),0xff);
      FUN_10021970(*(int *)(param_1 + 0x314) + 0xeb,
                   (*(int *)(param_1 + 0x31c) + 0xc) * iVar4 + *(int *)(param_1 + 0x318),0x20,0xf,0,
                   0,0x20,0xd,*(undefined4 *)(param_1 + 0x324),0xff);
    }
    if (piVar1[2] != 0) {
      FUN_10021a00(*(undefined4 *)(param_1 + 0x314),
                   (*(int *)(param_1 + 0x31c) + 0xc) * iVar4 + *(int *)(param_1 + 0x318),0xf,0xf,0,0
                   ,0xf,0xf,piVar1[2],0xff,1);
    }
    uVar6 = 0xc;
    uVar3 = 0xfa;
    puVar5 = local_210;
    uVar2 = FUN_1004f5c0(0);
    FUN_100c72c0(uVar2,puVar5,uVar3,uVar6);
    FUN_100217a0(*(int *)(param_1 + 0x314) + 0x12,
                 (*(int *)(param_1 + 0x31c) + 0xc) * iVar4 + *(int *)(param_1 + 0x318),
                 *(undefined4 *)(*piVar1 + 0xc),local_210,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    iVar4 = iVar4 + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_21c;
  __security_check_cookie(local_8 ^ (uint)local_210);
  return;
}


// ==== 10096b00 FUN_10096b00 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10096b00(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x1e0) != 0) {
    FUN_10021a00(0,0x14,0x154,0xf0,0,0,0x154,0xf0,*(int *)(param_1 + 0x1e0),0xff,1);
  }
  uVar13 = 0xffffffff;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = 0;
  uVar1 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x42448));
  FUN_100217a0(0xb,0x1c,0xffdcdcdc,puVar3,uVar1,uVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
               uVar11,uVar12,uVar13);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 10096cc0 FUN_10096cc0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 __security_check_cookie@101c16c2 FUN_101c19e0@101c19e0 FUN_1004f5c0@1004f5c0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0 FUN_100c72c0@100c72c0 FUN_100325f0@100325f0
// strings: 

void __thiscall FUN_10096cc0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int local_224;
  void *local_21c;
  undefined1 *puStack_218;
  int local_214;
  undefined1 local_210 [520];
  uint local_8;
  
  puStack_218 = &LAB_101ec888;
  local_21c = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_210;
  ExceptionList = &local_21c;
  iVar6 = 0;
  local_214 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar4 = FUN_101c19e0();
  uVar5 = FUN_101c19e0(uVar4);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar5,uVar4);
  *(undefined4 *)(param_1 + 0x314) = 4;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 2;
  for (local_224 = *(int *)(param_1 + 0x308);
      ((local_224 < *(int *)(param_1 + 0x300) + *(int *)(param_1 + 0x308) &&
       (local_224 <= *(int *)(param_1 + 0x30c))) && (local_224 < *(int *)(param_1 + 0x2ec)));
      local_224 = local_224 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x2e8) + local_224 * 4);
    iVar2 = *piVar1;
    iVar3 = piVar1[2];
    local_214._0_1_ = 1;
    if (iVar3 != 0) {
      FUN_10021a00(*(undefined4 *)(param_1 + 0x314),
                   (*(int *)(param_1 + 0x31c) + 0xc) * iVar6 + *(int *)(param_1 + 0x318),0xf,0xf,0,0
                   ,0xf,0xf,iVar3,0xff,1);
    }
    uVar8 = 0xc;
    uVar5 = 0xc9;
    puVar7 = local_210;
    uVar4 = FUN_1004f5c0(0);
    FUN_100c72c0(uVar4,puVar7,uVar5,uVar8);
    FUN_100217a0(*(int *)(param_1 + 0x314) + 0x11,
                 (*(int *)(param_1 + 0x31c) + 0xc) * iVar6 + 2 + *(int *)(param_1 + 0x318),
                 *(undefined4 *)(iVar2 + 0xc),local_210,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    local_214 = (uint)local_214._1_3_ << 8;
    FUN_100325f0();
    iVar6 = iVar6 + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_21c;
  __security_check_cookie(local_8 ^ (uint)local_210);
  return;
}


// ==== 10096f30 FUN_10096f30 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_1004f5c0@1004f5c0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0 FUN_100325f0@100325f0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10096f30(int param_1,int param_2)

{
  int *piVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_28;
  undefined4 local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101ec8b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar8 = 0;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar4,uVar3);
  for (local_18 = *(int *)(param_1 + 0x308);
      ((local_18 < *(int *)(param_1 + 0x300) + *(int *)(param_1 + 0x308) &&
       (local_18 <= *(int *)(param_1 + 0x30c))) && (local_18 < *(int *)(param_1 + 0x2ec)));
      local_18 = local_18 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x2e8) + local_18 * 4);
    iVar6 = *piVar1;
    local_8 = CONCAT31(local_8._1_3_,1);
    if (piVar1[2] == 0) {
      uVar18 = 0xffffffff;
      uVar3 = *(undefined4 *)(iVar6 + 0xc);
      uVar17 = 0;
      uVar16 = 0;
      dVar2 = ((double)*(float *)(param_1 + 0x88) - _DAT_10231ce0) - _DAT_1023c280;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar4 = 0;
      if (piVar1[1] == 0) {
        local_28 = (undefined4)(longlong)ROUND(dVar2);
        uVar5 = FUN_1004f5c0(0);
        iVar6 = (*(int *)(param_1 + 0x31c) + 0xc) * iVar8 + *(int *)(param_1 + 0x318);
        iVar7 = *(int *)(param_1 + 0x314);
        local_20 = local_28;
      }
      else {
        local_28 = (undefined4)(longlong)ROUND(dVar2);
        uVar5 = FUN_1004f5c0(0);
        iVar6 = (*(int *)(param_1 + 0x31c) + 0xc) * iVar8 + *(int *)(param_1 + 0x318);
        iVar7 = *(int *)(param_1 + 0x314) + 0xf;
        local_20 = local_28;
      }
    }
    else {
      FUN_10021a00(*(undefined4 *)(param_1 + 0x314),
                   (*(int *)(param_1 + 0x31c) + 0xc) * iVar8 + *(int *)(param_1 + 0x318),0xf,0xf,0,0
                   ,0xf,0xf,piVar1[2],0xff,1);
      uVar3 = *(undefined4 *)(iVar6 + 0xc);
      uVar18 = 0xffffffff;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar4 = 0;
      local_20 = (undefined4)
                 (longlong)
                 ROUND(((*(float *)(param_1 + 0x88) - (float)_DAT_10231ce0) - (float)_DAT_1023c280)
                       - (float)_DAT_10251b38);
      uVar5 = FUN_1004f5c0(0);
      iVar6 = (*(int *)(param_1 + 0x31c) + 0xc) * iVar8 + 2 + *(int *)(param_1 + 0x318);
      iVar7 = *(int *)(param_1 + 0x314) + 0x11;
    }
    FUN_100217a0(iVar7,iVar6,uVar3,uVar5,local_20,uVar4,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,
                 uVar15,uVar16,uVar17,uVar18);
    local_8 = local_8 & 0xffffff00;
    FUN_100325f0();
    iVar8 = iVar8 + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10097520 FUN_10097520 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 __security_check_cookie@101c16c2 FUN_101c19e0@101c19e0 FUN_1004f5c0@1004f5c0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0 FUN_100c72c0@100c72c0 FUN_100325f0@100325f0
// strings: 

void __thiscall FUN_10097520(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int local_228;
  int local_224;
  void *local_21c;
  undefined1 *puStack_218;
  uint local_214;
  undefined1 local_210 [520];
  uint local_8;
  
  puStack_218 = &LAB_101ec918;
  local_21c = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_210;
  ExceptionList = &local_21c;
  local_214 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar4 = FUN_101c19e0();
  uVar5 = FUN_101c19e0(uVar4);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar5,uVar4);
  local_228 = *(int *)(param_1 + 0x308);
  local_224 = 0;
  for (; ((local_228 < *(int *)(param_1 + 0x300) + *(int *)(param_1 + 0x308) &&
          (local_228 <= *(int *)(param_1 + 0x30c))) && (local_228 < *(int *)(param_1 + 0x2ec)));
      local_228 = local_228 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x2e8) + local_228 * 4);
    iVar2 = *piVar1;
    iVar6 = piVar1[1];
    iVar3 = piVar1[2];
    local_214 = CONCAT31(local_214._1_3_,1);
    if (local_228 == *(int *)(param_1 + 0x310)) {
      uVar4 = *(undefined4 *)(param_1 + 0x328);
    }
    else if ((iVar6 == 0) || (*(int *)(iVar6 + 0x1d4) == 0)) {
      uVar4 = *(undefined4 *)(param_1 + 0x324);
    }
    else if (*(int *)(iVar6 + 0x1d8) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x324);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x32c);
    }
    iVar6 = local_224 * 0x15;
    FUN_10021a00(0,iVar6,0x8c,0x15,0,0,0x8c,0x15,uVar4,0xff,1);
    if (iVar3 != 0) {
      FUN_10021a00(*(undefined4 *)(param_1 + 0x314),*(int *)(param_1 + 0x318) + iVar6,0xf,0xf,0,0,
                   0xf,0xf,iVar3,0xff,1);
    }
    uVar8 = 0xc;
    uVar5 = 0x74;
    puVar7 = local_210;
    uVar4 = FUN_1004f5c0(0);
    FUN_100c72c0(uVar4,puVar7,uVar5,uVar8);
    FUN_100217a0(*(int *)(param_1 + 0x314) + 0x12,*(int *)(param_1 + 0x318) + iVar6,
                 *(undefined4 *)(iVar2 + 0xc),local_210,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    local_214 = local_214 & 0xffffff00;
    FUN_100325f0();
    local_224 = local_224 + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_21c;
  __security_check_cookie(local_8 ^ (uint)local_210);
  return;
}


// ==== 100978f0 FUN_100978f0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10021970@10021970 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_100978f0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_10021a00(0xc,0,0xb4,8,0,0,0xb4,8,*(int *)(param_1 + 0x1e4),0xff,1);
  }
  if (*(int *)(param_1 + 0x1e8) != 0) {
    FUN_10021970(0xc,8,0xb4,0x74,0,0,0xb4,8,*(int *)(param_1 + 0x1e8),0xff);
  }
  if (*(int *)(param_1 + 0x1ec) != 0) {
    FUN_10021a00(0xc,0x7c,0xb4,8,0,0,0xb4,8,*(int *)(param_1 + 0x1ec),0xff,1);
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 1009f630 FUN_1009f630 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100abd40@100abd40 CORE.DLL::FString::FString@EXTERNAL:0000019e FUN_100217a0@100217a0 __security_check_cookie@101c16c2 CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_10021a00@10021a00 CORE.DLL::appSprintf@EXTERNAL:000001ba CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::FString::Substitute@EXTERNAL:00000140 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_101c19e0@101c19e0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1009f630(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  FString *pFVar4;
  undefined2 in_FPUControlWord;
  ushort *puStack_284;
  undefined4 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 *puStack_260;
  undefined1 *local_23c;
  longlong local_238;
  FString local_230 [12];
  FString local_224 [12];
  ushort auStack_218 [252];
  undefined1 uStack_20;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee234;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_23c;
  ExceptionList = &local_c;
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  FUN_101c19e0();
  FUN_101c19e0();
  puStack_260 = *(undefined1 **)(param_1 + 0x80);
  uStack_264 = 0x1009f6c1;
  FUN_10021df0();
  if (*(int *)(param_1 + 0x2fc) != 0) {
    local_23c = (undefined1 *)FUN_101c19e0();
    uStack_274 = FUN_101c19e0();
    puStack_260 = local_23c;
    uStack_268 = 0;
    uStack_278 = 0;
    uStack_280 = 0x1009f700;
    uStack_264 = uStack_274;
    FUN_10021a00();
  }
  if (0 < *(int *)(param_1 + 0x2e0)) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x426cc));
    FString::FString(local_230,puVar3);
    local_4 = 0;
    puStack_260 = &stack0xfffffda4;
    local_238 = CONCAT44(local_238._4_4_,&stack0xfffffda4);
    uStack_264 = 0x1009f747;
    FUN_100abd40();
    local_4._0_1_ = 1;
    local_23c = (undefined1 *)&uStack_268;
    FString::FString((FString *)&uStack_268,(ushort *)&DAT_10251894);
    local_4 = (uint)local_4._1_3_ << 8;
    pFVar4 = (FString *)FString::Substitute(local_230);
    uStack_20 = 3;
    uStack_274 = 0x1009f794;
    FString::operator=((FString *)&stack0xfffffdb4,pFVar4);
    uStack_20 = 0;
    FString::~FString((FString *)&stack0xfffffdc0);
    uStack_280 = 0x1009f7c0;
    FString::FString((FString *)&uStack_278,(FString *)(**(int **)(param_1 + 0x2dc) + 0x20));
    uStack_20 = 4;
    FString::FString((FString *)&puStack_284,(ushort *)&DAT_10251ab8);
    uStack_20 = 0;
    pFVar4 = (FString *)FString::Substitute((FString *)&stack0xfffffdb4,&stack0xfffffdc0);
    local_4._0_1_ = 6;
    FString::operator=(local_230,pFVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_224);
    FString::operator*(local_230);
    puStack_260 = (undefined1 *)0x1009f839;
    appSprintf(auStack_218,(ushort *)&DAT_1022dde0);
    puStack_260 = (undefined1 *)0x0;
    uStack_264 = 0;
    uStack_268 = 0;
    uStack_274 = 0;
    uStack_278 = 0;
    puStack_284 = auStack_218;
    local_238 = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_102534d0);
    uStack_280 = (undefined4)local_238;
    FUN_100217a0(0x2e,0x10,0xffdcdcdc);
    puStack_260 = (undefined1 *)0x0;
    uStack_264 = 0;
    uStack_268 = 0;
    local_23c = (undefined1 *)CONCAT22(local_23c._2_2_,in_FPUControlWord);
    uStack_274 = 0;
    uStack_278 = 0;
    local_238 = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_1023c288);
    uStack_280 = (undefined4)local_238;
    puStack_284 = (ushort *)0x1009f8d9;
    puStack_284 = FString::operator*((FString *)(GL2GameData_exref + 0x42728));
    FUN_100217a0(0xd,0x5a,0xffdcdcdc);
    local_4 = 0xffffffff;
    FString::~FString(local_230);
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_23c);
  return;
}


// ==== 100a1100 FUN_100a1100 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10021a00@10021a00 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_100212e0@100212e0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100a1100(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  iVar3 = *(int *)(param_1 + 0x2e8);
  if (iVar3 != 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,iVar3,0xff,1);
  }
  iVar3 = FString::Len((FString *)(param_1 + 0x2d8));
  if (0 < iVar3) {
    uVar13 = 0xffffffff;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = 0;
    uVar1 = 0;
    local_8 = (undefined4)(longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_1023c288);
    puVar4 = FString::operator*((FString *)(param_1 + 0x2d8));
    FUN_100217a0(0xb,0x10,0xffdcdcdc,puVar4,local_8,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10
                 ,uVar11,uVar12,uVar13);
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 100a2970 FUN_100a2970 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_1004f5c0@1004f5c0 FUN_10002f40@10002f40 FUN_100212e0@100212e0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100a2970(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_24;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eeac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  iVar3 = *(int *)(param_1 + 0x308);
  local_1c = 0;
  for (; ((iVar3 < *(int *)(param_1 + 0x300) + *(int *)(param_1 + 0x308) &&
          (iVar3 <= *(int *)(param_1 + 0x30c))) && (iVar3 < *(int *)(param_1 + 0x2ec)));
      iVar3 = iVar3 + 1) {
    uVar1 = *(undefined4 *)(**(int **)(*(int *)(param_1 + 0x2e8) + iVar3 * 4) + 0xc);
    uVar14 = 0xffffffff;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    local_24 = (undefined4)
               (longlong)
               ROUND((*(float *)(param_1 + 0x88) - (float)_DAT_10231ce0) - (float)_DAT_1023c280);
    uVar2 = FUN_1004f5c0(0);
    FUN_100217a0(*(undefined4 *)(param_1 + 0x314),
                 (*(int *)(param_1 + 0x31c) + 0xc) * local_1c + *(int *)(param_1 + 0x318),uVar1,
                 uVar2,local_24,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                 uVar14);
    local_1c = local_1c + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 100a2b20 FUN_100a2b20 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10021a00@10021a00 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_100a2b20(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x1f0) != 0) {
    FUN_10021a00(0,0x14,0x100,0x17d,0,0,0x100,0x17d,*(int *)(param_1 + 0x1f0),0xff,1);
  }
  iVar3 = FString::Len((FString *)(param_1 + 0x1d0));
  if (0 < iVar3) {
    uVar14 = 0xffffffff;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = 0;
    uVar1 = 0;
    puVar4 = FString::operator*((FString *)(param_1 + 0x1d0));
    FUN_100217a0(0xb,0x36,0xffdcdcdc,puVar4,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                 uVar12,uVar13,uVar14);
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 100a2c10 FUN_100a2c10 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 __security_check_cookie@101c16c2 FUN_101c19e0@101c19e0 FUN_1004f5c0@1004f5c0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0 FUN_100c72c0@100c72c0 FUN_100325f0@100325f0
// strings: 

void __thiscall FUN_100a2c10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int local_228;
  int local_224;
  void *local_21c;
  undefined1 *puStack_218;
  int local_214;
  undefined1 local_210 [520];
  uint local_8;
  
  puStack_218 = &LAB_101eeae8;
  local_21c = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_210;
  ExceptionList = &local_21c;
  local_214 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar4 = FUN_101c19e0();
  uVar5 = FUN_101c19e0(uVar4);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar5,uVar4);
  local_228 = *(int *)(param_1 + 0x308);
  local_224 = 0;
  for (; ((local_228 < *(int *)(param_1 + 0x300) + *(int *)(param_1 + 0x308) &&
          (local_228 <= *(int *)(param_1 + 0x30c))) && (local_228 < *(int *)(param_1 + 0x2ec)));
      local_228 = local_228 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x2e8) + local_228 * 4);
    iVar2 = *piVar1;
    iVar3 = piVar1[1];
    local_214._0_1_ = 1;
    if (local_228 == *(int *)(param_1 + 0x310)) {
      uVar4 = *(undefined4 *)(param_1 + 0x328);
    }
    else if ((iVar3 == 0) || (*(int *)(iVar3 + 0x1dc) == 0)) {
      uVar4 = *(undefined4 *)(param_1 + 0x324);
    }
    else if (*(int *)(iVar3 + 0x1e0) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x324);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x32c);
    }
    FUN_10021a00(0,local_224 * 0x15,0x8c,0x15,0,0,0x8c,0x15,uVar4,0xff,1);
    uVar7 = 0xc;
    uVar5 = 0x74;
    puVar6 = local_210;
    uVar4 = FUN_1004f5c0(0);
    FUN_100c72c0(uVar4,puVar6,uVar5,uVar7);
    FUN_100217a0(*(int *)(param_1 + 0x314) + 3,*(int *)(param_1 + 0x318) + local_224 * 0x15,
                 *(undefined4 *)(iVar2 + 0xc),local_210,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    local_214 = (uint)local_214._1_3_ << 8;
    FUN_100325f0();
    local_224 = local_224 + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_21c;
  __security_check_cookie(local_8 ^ (uint)local_210);
  return;
}


// ==== 100b2600 FUN_100b2600 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10021a00@10021a00 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_100b2600(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 local_8 [8];
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_10021a00(0,0,0x100,0x161,0,0,0x100,0x161,*(int *)(param_1 + 0x1e4),0xff,1);
  }
  if (*(int *)(param_1 + 0x1e8) != 0) {
    FUN_10021a00(0x5f,0x116,0x8e,0x17,0,0,0x8e,0x17,*(int *)(param_1 + 0x1e8),0xff,1);
  }
  uVar15 = 0;
  uVar13 = 0;
  uVar11 = 0;
  uVar9 = 0;
  uVar2 = 0;
  uVar1 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7e0));
  FUN_10020bb0(local_8,puVar3,uVar1,uVar2,uVar9,uVar11,uVar13,uVar15);
  uVar16 = 0xffffffff;
  uVar14 = 0;
  uVar12 = 0;
  uVar10 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar15 = 0;
  uVar13 = 0;
  uVar11 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7e0));
  uVar9 = 0xffdcdcdc;
  uVar2 = 0x6d;
  uVar1 = FUN_101c19e0(0x6d,0xffdcdcdc,puVar3,uVar11,uVar13,uVar15,uVar4,uVar5,uVar6,uVar7,uVar8,
                       uVar10,uVar12,uVar14,uVar16);
  FUN_100217a0(uVar1,uVar2,uVar9,puVar3,uVar11,uVar13,uVar15,uVar4,uVar5,uVar6,uVar7,uVar8,uVar10,
               uVar12,uVar14,uVar16);
  uVar10 = 0xffffffff;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar15 = 0;
  uVar13 = 0;
  uVar11 = 0;
  uVar9 = 0;
  uVar2 = 0;
  uVar1 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7ec));
  FUN_100217a0(0x10,0x86,0xffdcdcdc,puVar3,uVar1,uVar2,uVar9,uVar11,uVar13,uVar15,uVar4,uVar5,uVar6,
               uVar7,uVar8,uVar10);
  uVar10 = 0xffffffff;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar15 = 0;
  uVar13 = 0;
  uVar11 = 0;
  uVar9 = 0;
  uVar2 = 0;
  uVar1 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7f8));
  FUN_100217a0(0x10,0x9b,0xffdcdcdc,puVar3,uVar1,uVar2,uVar9,uVar11,uVar13,uVar15,uVar4,uVar5,uVar6,
               uVar7,uVar8,uVar10);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 100b2aa0 FUN_100b2aa0 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 __security_check_cookie@101c16c2 FUN_101c19e0@101c19e0 FUN_10021a00@10021a00 CORE.DLL::appSprintf@EXTERNAL:000001ba FUN_100212e0@100212e0 __alloca_probe@101c2730
// strings: 10256704=%s%s\n\n\n | 10256704=%s%s\n\n\n | 102566f8=%s%s | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100b2aa0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined1 auStack_1010 [4];
  longlong local_100c;
  ushort local_1004 [2048];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)auStack_1010;
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x1d4) != 0) {
    FUN_10021a00(0,0,0x100,0x161,0,0,0x100,0x161,*(int *)(param_1 + 0x1d4),0xff,1);
  }
  local_1004[0] = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x417b4));
  appSprintf(local_1004,(ushort *)L"%s%s\r\n\r\n\r\n",local_1004,puVar3);
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x41810));
  appSprintf(local_1004,(ushort *)L"%s%s\r\n\r\n\r\n",local_1004,puVar3);
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x4186c));
  appSprintf(local_1004,(ushort *)L"%s%s",local_1004,puVar3);
  local_100c = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_102566f0);
  FUN_100217a0(0x12,0x2c,0xffdcdcdc,local_1004,(undefined4)local_100c,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  __security_check_cookie(local_4 ^ (uint)auStack_1010);
  return;
}


// ==== 100b2c60 FUN_100b2c60 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_1003f630@1003f630 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 1025671c=L2UI_CH3.Msn.msnlogin01 | 

undefined4 __thiscall FUN_100b2c60(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  FString *this;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x1d4) != 0) {
    FUN_10021a00(0,0,0x100,0x161,0,0,0x100,0x161,*(int *)(param_1 + 0x1d4),0xff,1);
  }
  uVar12 = 1;
  uVar2 = 0xff;
  uVar1 = FUN_1003f630(L"L2UI_CH3.Msn.msnlogin01",1);
  FUN_10021a00(0x2b,0x90,0x27,0x21,0,0,0x27,0x21,uVar1,uVar2,uVar12);
  uVar13 = 0xffffffff;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar12 = 0;
  uVar2 = 0;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1d0) == 0) {
    this = (FString *)(GL2GameData_exref + 0x428f4);
  }
  else {
    this = (FString *)(GL2GameData_exref + 0x41cbc);
  }
  puVar3 = FString::operator*(this);
  FUN_100217a0(0x53,0xa0,0xffdcdcdc,puVar3,uVar1,uVar2,uVar12,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
               uVar10,uVar11,uVar13);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 100b2d90 FUN_100b2d90 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100abd40@100abd40 CORE.DLL::FString::FString@EXTERNAL:0000019e FUN_100217a0@100217a0 __security_check_cookie@101c16c2 CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_10021a00@10021a00 CORE.DLL::FString::operator==@EXTERNAL:0000014a CORE.DLL::appSprintf@EXTERNAL:000001ba __alloca_probe@101c2730 CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::FString::Substitute@EXTERNAL:00000140 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_101c19e0@101c19e0 CORE.DLL::FString::operator+=@EXTERNAL:000001bd FUN_100c73d0@100c73d0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0
// strings: 1025674c=%s %s | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100b2d90(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  FString *pFVar4;
  int iVar5;
  undefined2 in_FPUControlWord;
  undefined4 uStack_206c;
  undefined4 uStack_2068;
  undefined1 *local_2040;
  longlong local_203c;
  FString local_2034 [12];
  FString local_2028 [12];
  FString local_201c [12];
  ushort local_2010 [2048];
  undefined2 local_1010 [2048];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f26cc;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_2040;
  ExceptionList = &local_c;
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  *(undefined4 *)(param_2 + 0x6c) = uVar2;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  FUN_101c19e0();
  FUN_101c19e0();
  uStack_2068 = 0x100b2e25;
  FUN_10021df0();
  if (*(int *)(param_1 + 0x290) != 0) {
    uVar2 = FUN_101c19e0();
    uStack_2068 = FUN_101c19e0();
    uStack_206c = 0;
    FUN_10021a00(0,0,uStack_2068,uVar2,0);
  }
  iVar5 = *(int *)(param_1 + 0x1d4);
  local_1010[0] = 0;
  if (iVar5 == 0) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x42950));
    FString::FString(local_2028,puVar3);
    local_4 = 0;
    local_203c = CONCAT44(local_203c._4_4_,&stack0xffffdfa0);
    uStack_2068 = 0x100b2eb6;
    FUN_100abd40();
    local_4._0_1_ = 1;
    local_2040 = (undefined1 *)&uStack_206c;
    FString::FString((FString *)&uStack_206c,(ushort *)&DAT_10251894);
    local_4 = (uint)local_4._1_3_ << 8;
    pFVar4 = (FString *)FString::Substitute(local_2028,local_201c);
    local_4._0_1_ = 3;
    FString::operator=(local_2028,pFVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_201c);
    FString::operator*(local_2028);
    appSprintf(local_2010,(ushort *)&DAT_1022dde0);
    local_4 = 0xffffffff;
    FString::~FString(local_2028);
  }
  else if (iVar5 == 1) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x41d74));
    FString::FString(local_2034,puVar3);
    local_4 = 4;
    FUN_100abd40();
    local_4._0_1_ = 5;
    local_203c = CONCAT44(local_203c._4_4_,&stack0xffffdfa0);
    uStack_2068 = 0x100b2fa7;
    FString::FString((FString *)&stack0xffffdfa0,local_201c);
    local_4._0_1_ = 6;
    local_2040 = (undefined1 *)&uStack_206c;
    FString::FString((FString *)&uStack_206c,(ushort *)&DAT_10251894);
    local_4._0_1_ = 5;
    FString::Substitute(local_2034,local_2028);
    local_4 = CONCAT31(local_4._1_3_,8);
    iVar5 = FString::operator==(local_2034,local_2028);
    if (iVar5 != 0) {
      pFVar4 = FString::operator+=(local_201c,local_2034);
      FString::operator=(local_2028,pFVar4);
    }
    FString::operator*((FString *)(param_1 + 0x22c));
    FString::operator*(local_2028);
    uStack_2068 = 0x100b303f;
    appSprintf(local_2010,(ushort *)L"%s %s");
    local_4._0_1_ = 5;
    FString::~FString(local_2028);
    local_4 = CONCAT31(local_4._1_3_,4);
    FString::~FString(local_201c);
    local_4 = 0xffffffff;
    FString::~FString(local_2034);
  }
  else if (iVar5 == 2) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x429ac));
    FString::FString(local_2034,puVar3);
    local_4 = 9;
    local_203c = CONCAT44(local_203c._4_4_,&stack0xffffdfa0);
    uStack_2068 = 0x100b30c4;
    FString::FString((FString *)&stack0xffffdfa0,(FString *)(param_1 + 0x21c));
    local_4._0_1_ = 10;
    local_2040 = (undefined1 *)&uStack_206c;
    FString::FString((FString *)&uStack_206c,(ushort *)&DAT_10251894);
    local_4._0_1_ = 9;
    pFVar4 = (FString *)FString::Substitute(local_2034,local_201c);
    local_4._0_1_ = 0xc;
    FString::operator=(local_2034,pFVar4);
    local_4 = CONCAT31(local_4._1_3_,9);
    FString::~FString(local_201c);
    FString::operator*(local_2034);
    appSprintf(local_2010,(ushort *)&DAT_1022dde0);
    local_4 = 0xffffffff;
    FString::~FString(local_2034);
  }
  else {
    if (iVar5 == 3) {
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x41d18));
    }
    else {
      if (iVar5 != 4) goto LAB_100b319a;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x42a08));
    }
    appSprintf(local_2010,puVar3);
  }
LAB_100b319a:
  FUN_101c19e0();
  FUN_101c19e0();
  uStack_2068 = 0x100b31d0;
  FUN_100c73d0();
  local_2040 = (undefined1 *)CONCAT22(local_2040._2_2_,in_FPUControlWord);
  uStack_2068 = 0;
  uStack_206c = 0;
  local_203c = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_1023c288);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,local_1010,(undefined4)local_203c,0,0,0,0,0);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_2040);
  return;
}


// ==== 100b3270 FUN_100b3270 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_1004f5c0@1004f5c0 FUN_10020e80@10020e80 FUN_10021970@10021970 FUN_10021a00@10021a00 FUN_100218f0@100218f0 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_100b3270(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  iVar2 = param_2;
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  uVar4 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar3;
  *(undefined4 *)(param_2 + 0x3c) = uVar4;
  *(undefined4 *)(param_2 + 0x6c) = uVar3;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar4,uVar3);
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_10021a00(0,0,8,8,0,0,8,8,*(int *)(param_1 + 0x1e4),0xff,1);
  }
  iVar5 = *(int *)(param_1 + 0x1e8);
  if (iVar5 != 0) {
    uVar17 = 0xff;
    uVar14 = 1;
    uVar4 = 8;
    uVar3 = FUN_101c19e0(8,iVar5,1,0xff);
    FUN_100218f0(8,0,uVar3,uVar4,iVar5,uVar14,uVar17);
  }
  iVar5 = *(int *)(param_1 + 0x1ec);
  if (iVar5 != 0) {
    uVar18 = 1;
    uVar15 = 0xff;
    uVar11 = 8;
    uVar9 = 8;
    uVar8 = 0;
    uVar7 = 0;
    uVar17 = 8;
    uVar14 = 8;
    uVar4 = 0;
    uVar3 = FUN_101c19e0(0,8,8,0,0,8,8,iVar5,0xff,1);
    FUN_10021a00(uVar3,uVar4,uVar14,uVar17,uVar7,uVar8,uVar9,uVar11,iVar5,uVar15,uVar18);
  }
  iVar5 = *(int *)(param_1 + 0x1f0);
  if (iVar5 != 0) {
    uVar14 = 0xff;
    uVar4 = 1;
    uVar3 = FUN_101c19e0(iVar5,1,0xff);
    FUN_100218f0(0,8,8,uVar3,iVar5,uVar4,uVar14);
  }
  iVar5 = *(int *)(param_1 + 500);
  if (iVar5 != 0) {
    uVar17 = 0xff;
    uVar14 = 1;
    uVar3 = FUN_101c19e0(iVar5,1,0xff);
    uVar4 = FUN_101c19e0(uVar3);
    FUN_100218f0(8,8,uVar4,uVar3,iVar5,uVar14,uVar17);
  }
  iVar5 = *(int *)(param_1 + 0x1f8);
  if (iVar5 != 0) {
    uVar8 = 0xff;
    uVar7 = 1;
    uVar3 = FUN_101c19e0(iVar5,1,0xff);
    uVar17 = 8;
    uVar14 = 8;
    uVar4 = FUN_101c19e0(8,8,uVar3);
    FUN_100218f0(uVar4,uVar14,uVar17,uVar3,iVar5,uVar7,uVar8);
  }
  iVar5 = *(int *)(param_1 + 0x1fc);
  if (iVar5 != 0) {
    uVar15 = 1;
    uVar11 = 0xff;
    uVar9 = 8;
    uVar8 = 8;
    uVar7 = 0;
    uVar17 = 0;
    uVar14 = 8;
    uVar4 = 8;
    uVar3 = FUN_101c19e0(8,8,0,0,8,8,iVar5,0xff,1);
    FUN_10021a00(0,uVar3,uVar4,uVar14,uVar17,uVar7,uVar8,uVar9,iVar5,uVar11,uVar15);
  }
  iVar5 = *(int *)(param_1 + 0x200);
  if (iVar5 != 0) {
    uVar7 = 0xff;
    uVar17 = 1;
    uVar14 = 8;
    uVar3 = FUN_101c19e0(8,iVar5,1,0xff);
    uVar4 = FUN_101c19e0(uVar3);
    FUN_100218f0(8,uVar4,uVar3,uVar14,iVar5,uVar17,uVar7);
  }
  iVar5 = *(int *)(param_1 + 0x204);
  if (iVar5 != 0) {
    uVar18 = 1;
    uVar15 = 0xff;
    uVar11 = 8;
    uVar9 = 8;
    uVar8 = 0;
    uVar7 = 0;
    uVar17 = 8;
    uVar14 = 8;
    uVar3 = FUN_101c19e0(8,8,0,0,8,8,iVar5,0xff,1);
    uVar4 = FUN_101c19e0(uVar3);
    FUN_10021a00(uVar4,uVar3,uVar14,uVar17,uVar7,uVar8,uVar9,uVar11,iVar5,uVar15,uVar18);
  }
  iVar5 = *(int *)(param_1 + 0x1d8);
  param_2 = 0;
  if (0 < iVar5) {
    iVar6 = 4;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x1d4) + param_2 * 4);
      if (param_2 == *(int *)(param_1 + 0x1e0)) {
        uVar3 = 0xff;
        if (param_2 == iVar5 + -1) {
          uVar4 = *(undefined4 *)(param_1 + 0x208);
          uVar11 = 0xd;
          uVar9 = 0x10;
          uVar8 = 0;
          uVar7 = 0;
          uVar17 = 0x11;
          iVar5 = iVar6 + 2;
          uVar14 = FUN_101c19e0(0x11,0,0,0x10,0xd,uVar4);
          FUN_10021970(2,iVar5,uVar14,uVar17,uVar7,uVar8,uVar9,uVar11,uVar4,uVar3);
          uVar3 = *(undefined4 *)(param_1 + 0x20c);
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 0x208);
          uVar11 = 0xd;
          uVar9 = 0x10;
          uVar8 = 0;
          uVar7 = 0;
          uVar17 = 0x11;
          iVar5 = iVar6 + -2;
          uVar14 = FUN_101c19e0(0x11,0,0,0x10,0xd,uVar4,0xff);
          FUN_10021970(2,iVar5,uVar14,uVar17,uVar7,uVar8,uVar9,uVar11,uVar4,uVar3);
          uVar3 = *(undefined4 *)(param_1 + 0x20c);
        }
        uVar15 = 0xff;
        uVar11 = 0xd;
        uVar9 = 0x20;
        uVar8 = 0;
        uVar7 = 0;
        uVar17 = 0x11;
        uVar14 = 0x20;
        uVar4 = FUN_101c19e0(iVar5,0x20,0x11,0,0,0x20,0xd,uVar3,0xff);
        FUN_10021970(uVar4,iVar5,uVar14,uVar17,uVar7,uVar8,uVar9,uVar11,uVar3,uVar15);
      }
      if (piVar1[2] != 0) {
        FUN_10021a00(4,iVar6,0xd,0xd,0,0,0xd,0xd,piVar1[2],0xff,1);
      }
      if (param_2 == *(int *)(param_1 + 0x1d8) + -1) {
        if (*piVar1 != 0) {
          iVar5 = FUN_1004f5c0(0);
          if (iVar5 == 0) goto LAB_100b3687;
          uVar14 = 0;
          uVar4 = 0xff7e7e7e;
          iVar5 = iVar6;
          uVar3 = FUN_101c19e0(iVar6,0xff7e7e7e,0);
          FUN_10020e80(4,iVar6,uVar3,iVar5,uVar4,uVar14);
          uVar16 = 0xffffffff;
          uVar13 = 0;
          uVar12 = 0;
          uVar10 = 0;
          uVar18 = 0;
          uVar15 = 0;
          uVar11 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar17 = 0;
          uVar14 = 0;
          if (DAT_1037c9d0 == 0) {
            uVar3 = FUN_1004f5c0(0);
            uVar4 = 0xffdcdcdc;
            iVar5 = iVar6 + 6;
          }
          else {
            uVar3 = FUN_1004f5c0(0);
            uVar4 = 0xff7e7e7e;
            iVar5 = iVar6 + 4;
          }
          goto LAB_100b36c5;
        }
      }
      else {
LAB_100b3687:
        if ((*piVar1 != 0) && (iVar5 = FUN_1004f5c0(0), iVar5 != 0)) {
          uVar16 = 0xffffffff;
          uVar13 = 0;
          uVar12 = 0;
          uVar10 = 0;
          uVar18 = 0;
          uVar15 = 0;
          uVar11 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar17 = 0;
          uVar14 = 0;
          uVar3 = FUN_1004f5c0(0);
          uVar4 = 0xffdcdcdc;
          iVar5 = iVar6 + 2;
LAB_100b36c5:
          FUN_100217a0(0x16,iVar5,uVar4,uVar3,uVar14,uVar17,uVar7,uVar8,uVar9,uVar11,uVar15,uVar18,
                       uVar10,uVar12,uVar13,uVar16);
        }
      }
      iVar5 = *(int *)(param_1 + 0x1d8);
      param_2 = param_2 + 1;
      iVar6 = iVar6 + 0x11;
    } while (param_2 < iVar5);
  }
  FUN_100212e0();
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  return 1;
}


// ==== 100b41e0 FUN_100b41e0 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_100b41e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  *(undefined4 *)(param_2 + 0x6c) = uVar2;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  iVar1 = *(int *)(param_1 + 0x204);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0x14,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d828));
  FUN_100217a0(0x16,0x1f,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d834));
  FUN_100217a0(0x16,0x52,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d840));
  FUN_100217a0(0x16,0x87,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 100b4630 FUN_100b4630 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_100abd40@100abd40 __security_check_cookie@101c16c2 FUN_1003f630@1003f630 FUN_10021a00@10021a00 FUN_100a98c0@100a98c0 FUN_100c72c0@100c72c0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_101c19e0@101c19e0 CORE.DLL::FString::operator==@EXTERNAL:000001c7 CORE.DLL::FString::Printf@EXTERNAL:000001a7 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0
// strings: 102568dc=L2UI_CH3.Msn.msnbigicon1 | 102568d0=(%s) | 1025689c=L2UI_CH3.Msn.msnbigicon2 | 102568d0=(%s) | 1025689c=L2UI_CH3.Msn.msnbigicon2 | 102568d0=(%s) | 1025689c=L2UI_CH3.Msn.msnbigicon2 | 102568d0=(%s) | 10256868=L2UI_CH3.Msn.msnbigicon3 | 102568d0=(%s) | 10256868=L2UI_CH3.Msn.msnbigicon3 | 102568d0=(%s) | 10256834=L2UI_CH3.Msn.msnbigicon4 | 102568d0=(%s) | 

void __thiscall FUN_100b4630(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FString *pFVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_23c [3];
  char local_239;
  uint local_238;
  FString local_234 [12];
  int local_228;
  FString local_224 [12];
  undefined1 local_218 [520];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f29b8;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)auStack_23c;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffffdb4;
  ExceptionList = &local_c;
  local_238 = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  *(undefined4 *)(param_2 + 0x6c) = uVar2;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar2 = FUN_101c19e0(uVar1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  if (*(int *)(*(int *)(param_1 + 0x1cc) + 0x4c) == 0) goto LAB_100b4d69;
  if (*(int *)(param_1 + 0x2b0) != 0) {
    FUN_10021a00(0,0,0x100,0x161,0,0,0x100,0x161,*(int *)(param_1 + 0x2b0),0xff,1);
  }
  pFVar4 = (FString *)FUN_100a98c0(local_224);
  local_4 = 0;
  iVar5 = FString::operator==(pFVar4,(ushort *)&DAT_10251d70);
  local_4 = 0xffffffff;
  FString::~FString(local_224);
  if (iVar5 == 0) {
    pFVar4 = (FString *)FUN_100a98c0(local_224);
    local_4 = 2;
    iVar5 = FString::operator==(pFVar4,(ushort *)&DAT_10251d3c);
    local_4 = 0xffffffff;
    FString::~FString(local_224);
    if (iVar5 != 0) {
      uVar17 = 1;
      uVar3 = 0xff;
      uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon2",1);
      FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d888));
      pFVar4 = (FString *)FString::Printf((ushort *)local_224,L"(%s)",puVar6);
      local_4 = 3;
      goto LAB_100b47a7;
    }
    pFVar4 = (FString *)FUN_100a98c0(local_234);
    local_4 = 4;
    uVar1 = 1;
    local_238 = 1;
    iVar5 = FString::operator==(pFVar4,(ushort *)&DAT_10251d34);
    if (iVar5 == 0) {
      pFVar4 = (FString *)FUN_100a98c0(local_224);
      local_4 = 5;
      uVar1 = 3;
      local_238 = 3;
      iVar5 = FString::operator==(pFVar4,(ushort *)&DAT_10251d2c);
      local_239 = '\0';
      if (iVar5 != 0) goto LAB_100b48f8;
    }
    else {
LAB_100b48f8:
      local_239 = '\x01';
    }
    local_4 = 4;
    if ((uVar1 & 2) != 0) {
      uVar1 = uVar1 & 0xfffffffd;
      local_238 = uVar1;
      FString::~FString(local_224);
    }
    local_4 = 0xffffffff;
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar1 & 0xfffffffe;
      local_238 = uVar1;
      FString::~FString(local_234);
    }
    if (local_239 != '\0') {
      uVar17 = 1;
      uVar3 = 0xff;
      uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon2",1);
      FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d894));
      pFVar4 = (FString *)FString::Printf((ushort *)local_234,L"(%s)",puVar6);
      local_4 = 6;
LAB_100b4cb1:
      uVar18 = 0xffffffff;
      uVar16 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar17 = 0;
      uVar3 = 0;
      uVar2 = 0;
      puVar6 = FString::operator*(pFVar4);
      FUN_100217a0(0x34,0x1b,0xffb09b79,puVar6,uVar2,uVar3,uVar17,uVar8,uVar9,uVar10,uVar11,uVar12,
                   uVar13,uVar14,uVar16,uVar18);
      pFVar4 = local_234;
      goto LAB_100b4cec;
    }
    pFVar4 = (FString *)FUN_100a98c0(local_234);
    local_4 = 7;
    local_228 = FString::operator==(pFVar4,(ushort *)&DAT_10251d24);
    local_4 = 0xffffffff;
    FString::~FString(local_234);
    if (local_228 != 0) {
      uVar17 = 1;
      uVar3 = 0xff;
      uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon2",1);
      FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d8ac));
      pFVar4 = (FString *)FString::Printf((ushort *)local_234,L"(%s)",puVar6);
      local_4 = 8;
      goto LAB_100b4cb1;
    }
    pFVar4 = (FString *)FUN_100a98c0(local_234);
    local_4 = 9;
    local_228 = FString::operator==(pFVar4,(ushort *)&DAT_10251d1c);
    local_4 = 0xffffffff;
    FString::~FString(local_234);
    if (local_228 != 0) {
      uVar17 = 1;
      uVar3 = 0xff;
      uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon3",1);
      FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d87c));
      pFVar4 = (FString *)FString::Printf((ushort *)local_234,L"(%s)",puVar6);
      local_4 = 10;
      goto LAB_100b4cb1;
    }
    pFVar4 = (FString *)FUN_100a98c0(local_234);
    local_4 = 0xb;
    local_228 = FString::operator==(pFVar4,(ushort *)&DAT_10251d14);
    local_4 = 0xffffffff;
    FString::~FString(local_234);
    if (local_228 != 0) {
      uVar17 = 1;
      uVar3 = 0xff;
      uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon3",1);
      FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d8a0));
      pFVar4 = (FString *)FString::Printf((ushort *)local_234,L"(%s)",puVar6);
      local_4 = 0xc;
      goto LAB_100b4cb1;
    }
    pFVar4 = (FString *)FUN_100a98c0(local_224);
    local_4 = 0xd;
    uVar7 = uVar1 | 4;
    local_238 = uVar7;
    iVar5 = FString::operator==(pFVar4,(ushort *)&DAT_10251d0c);
    if (iVar5 == 0) {
      pFVar4 = (FString *)FUN_100a98c0(local_234);
      local_4 = 0xe;
      uVar7 = uVar1 | 0xc;
      local_238 = uVar7;
      iVar5 = FString::operator==(pFVar4,(ushort *)&DAT_10252c20);
      local_239 = '\0';
      if (iVar5 != 0) goto LAB_100b4c05;
    }
    else {
LAB_100b4c05:
      local_239 = '\x01';
    }
    local_4 = 0xd;
    if ((uVar7 & 8) != 0) {
      uVar7 = uVar7 & 0xfffffff7;
      local_238 = uVar7;
      FString::~FString(local_234);
    }
    local_4 = 0xffffffff;
    if ((uVar7 & 4) != 0) {
      local_238 = uVar7 & 0xfffffffb;
      FString::~FString(local_224);
    }
    if (local_239 != '\0') {
      uVar17 = 1;
      uVar3 = 0xff;
      uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon4",1);
      FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
      puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d8b8));
      pFVar4 = (FString *)FString::Printf((ushort *)local_234,L"(%s)",puVar6);
      local_4 = 0xf;
      goto LAB_100b4cb1;
    }
  }
  else {
    uVar17 = 1;
    uVar3 = 0xff;
    uVar2 = FUN_1003f630(L"L2UI_CH3.Msn.msnbigicon1",1);
    FUN_10021a00(9,10,0x1d,0x1d,0,0,0x1d,0x1d,uVar2,uVar3,uVar17);
    puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d870));
    pFVar4 = (FString *)FString::Printf((ushort *)local_224,L"(%s)",puVar6);
    local_4 = 1;
LAB_100b47a7:
    uVar18 = 0xffffffff;
    uVar16 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar17 = 0;
    uVar3 = 0;
    uVar2 = 0;
    puVar6 = FString::operator*(pFVar4);
    FUN_100217a0(0x34,0x1b,0xffb09b79,puVar6,uVar2,uVar3,uVar17,uVar8,uVar9,uVar10,uVar11,uVar12,
                 uVar13,uVar14,uVar16,uVar18);
    pFVar4 = local_224;
LAB_100b4cec:
    local_4 = 0xffffffff;
    FString::~FString(pFVar4);
  }
  pFVar4 = (FString *)FUN_100abd40(local_234);
  local_4 = 0x10;
  uVar3 = 0xc;
  uVar2 = 0x80;
  puVar15 = local_218;
  puVar6 = FString::operator*(pFVar4);
  FUN_100c72c0(puVar6,puVar15,uVar2,uVar3);
  local_4 = 0xffffffff;
  FString::~FString(local_234);
  FUN_100217a0(0x34,0xb,0xffdcdcdc,local_218,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
LAB_100b4d69:
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_23c);
  return;
}


// ==== 100b5c10 FUN_100b5c10 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_100b5c10(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x200) != 0) {
    FUN_10021a00(0,0,0x100,0x161,0,0,0x100,0x161,*(int *)(param_1 + 0x200),0xff,1);
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 100b5fc0 FUN_100b5fc0 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::FString@EXTERNAL:000001a4 __security_check_cookie@101c16c2 CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_10021a00@10021a00 FUN_100a98c0@100a98c0 CORE.DLL::appStrcpy@EXTERNAL:000001c3 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_101c19e0@101c19e0 CORE.DLL::FString::operator==@EXTERNAL:000001c7 FUN_10023820@10023820 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0
// strings: 10256a28=L2UI_CH3.Msn.msnminimumicon1 | 102569f4=L2UI_CH3.Msn.msnminiicon5 | 102569b8=L2UI_CH3.Msn.msnminimumicon4 | 1025697c=L2UI_CH3.Msn.msnminimumicon2 | 10256940=L2UI_CH3.Msn.msnminimumicon3 | 

void __thiscall FUN_100b5fc0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FString *pFVar4;
  int iVar5;
  ushort *puVar6;
  wchar_t *pwVar7;
  FString local_230 [12];
  FString local_224 [12];
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f2c58;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_230;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffffdc4;
  ExceptionList = &local_c;
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  *(undefined4 *)(param_2 + 0x6c) = uVar2;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar2 = FUN_101c19e0(uVar1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  if (*(int *)(param_1 + 0x1d8) != 0) {
    FUN_10021a00(0,0x14,0x114,0x1c,0,0,0x114,0x1c,*(int *)(param_1 + 0x1d8),0xff,1);
  }
  if ((*(int *)(param_1 + 0x50) == 0) || (*(int *)(*(int *)(param_1 + 0x50) + 0x2f8) == 0))
  goto LAB_100b6229;
  FString::FString(local_230);
  local_4 = 0;
  if (*(int *)(*(int *)(param_1 + 0x1cc) + 0x1cc) != 0) {
    pFVar4 = (FString *)FUN_100a98c0(local_224);
    local_4._0_1_ = 1;
    FString::operator=(local_230,pFVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_224);
  }
  iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d70);
  if (iVar5 == 0) {
    iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d3c);
    if ((((iVar5 != 0) ||
         (iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d34), iVar5 != 0)) ||
        (iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d2c), iVar5 != 0)) ||
       (iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d24), iVar5 != 0)) {
      pwVar7 = L"L2UI_CH3.Msn.msnminimumicon3";
      goto LAB_100b61ea;
    }
    iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d1c);
    if ((iVar5 != 0) || (iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d14), iVar5 != 0)
       ) {
      pwVar7 = L"L2UI_CH3.Msn.msnminimumicon2";
      goto LAB_100b61ea;
    }
    iVar5 = FString::operator==(local_230,(ushort *)&DAT_10251d0c);
    if ((iVar5 != 0) || (iVar5 = FString::operator==(local_230,(ushort *)&DAT_10252c20), iVar5 != 0)
       ) {
      pwVar7 = L"L2UI_CH3.Msn.msnminimumicon4";
      goto LAB_100b61ea;
    }
    iVar5 = FString::operator==(local_230,(ushort *)&DAT_1022f9f8);
    if (iVar5 != 0) {
      pwVar7 = L"L2UI_CH3.Msn.msnminiicon5";
      goto LAB_100b61ea;
    }
  }
  else {
    pwVar7 = L"L2UI_CH3.Msn.msnminimumicon1";
LAB_100b61ea:
    appStrcpy(local_218,(ushort *)pwVar7);
  }
  uVar2 = 0;
  puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7b0));
  FUN_10023820(local_218,puVar6,uVar2);
  local_4 = 0xffffffff;
  FString::~FString(local_230);
LAB_100b6229:
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_230);
  return;
}


// ==== 100c4b30 FUN_100c4b30 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10043dd0@10043dd0 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_100c4b30(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f5d20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10043dd0(*(int *)(*(int *)(param_1 + 0x238) + 0x2f0) + 0x15);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 100c50e0 FUN_100c50e0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10043dd0@10043dd0 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_100c50e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f5d40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10043dd0(*(int *)(*(int *)(param_1 + 0x22c) + 0x2f0) + 0x15);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10136850 FUN_10136850 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_10141a90@10141a90 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_100218f0@100218f0 FUN_100212e0@100212e0
// strings: 1027bb60=1.Authorizing.... | 1027baa4=Can not connect to server | 

undefined4 __thiscall FUN_10136850(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208a50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar4 = *(int *)(param_1 + 0x1cc);
  if (iVar4 != 0) {
    uVar6 = 0xff;
    uVar5 = 1;
    uVar1 = FUN_101c19e0(iVar4,1,0xff);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_100218f0(0,0,uVar2,uVar1,iVar4,uVar5,uVar6);
  }
  if (*(int *)(param_1 + 0x1d8) < 3) {
    for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x1d8) + 1; iVar4 = iVar4 + 1) {
      FUN_100217a0(*(undefined4 *)(param_1 + 0x1dc),*(int *)(param_1 + 0x1e0) + iVar3,0xffdcdcdc,
                   (&PTR_u_1_Authorizing_____10350ddc)[iVar4],0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      iVar3 = iVar3 + 0xc;
    }
  }
  else if (*(int *)(param_1 + 0x1d8) == 3) {
    FUN_100217a0(*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_1 + 0x1e0),0xffdcdcdc,
                 PTR_u_Can_not_connect_to_server_10350de8,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  if ((*(int *)(param_1 + 0x1d0) == 0) &&
     (iVar4 = FUN_10141a90(&DAT_1039cfd8,&DAT_1039cf58,0), iVar4 != 0)) {
    *(undefined4 *)(param_1 + 0x1d0) = 1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10137f00 FUN_10137f00 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_10049a00@10049a00 FUN_10049b50@10049b50 FUN_101c19e0@101c19e0 FUN_1004f5c0@1004f5c0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10137f00(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 local_28;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208e50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = 0;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar4,uVar3);
  if (*(int *)(param_1 + 0x35c) != 0) {
    if (*(int *)(param_1 + 0x360) != 0) {
      FUN_10021a00(0,0,0x15c,0x12,0,0,0x15c,0x12,*(int *)(param_1 + 0x360),0xff,1);
    }
    iVar8 = 0;
    while( true ) {
      iVar5 = FUN_101c19e0();
      iVar12 = *(int *)(param_1 + 0x364);
      if (iVar5 <= iVar8) break;
      if (iVar12 != 0) {
        FUN_10021a00(0,iVar8 * 0xf + 0x12,0x15c,0xf,0,0,0x15c,0xf,iVar12,0xff,1);
      }
      iVar7 = iVar8 * 0xf + 0x21;
      iVar8 = iVar8 + 1;
    }
    if ((iVar12 != 0) && (0 < iVar7)) {
      uVar17 = 1;
      uVar14 = 0xff;
      uVar11 = 0xf;
      uVar10 = 0x15c;
      uVar9 = 0;
      uVar4 = 0;
      uVar3 = FUN_101c19e0(0,0,0x15c,0xf,iVar12,0xff,1);
      FUN_10021a00(0,iVar7,0x15c,uVar3,uVar4,uVar9,uVar10,uVar11,iVar12,uVar14,uVar17);
    }
    iVar7 = *(int *)(param_1 + 0x368);
    if (iVar7 != 0) {
      uVar18 = 1;
      uVar15 = 0xff;
      uVar17 = 0x12;
      uVar14 = 0x15c;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0x12;
      uVar4 = 0x15c;
      uVar3 = FUN_101c19e0(0x15c,0x12,0,0,0x15c,0x12,iVar7,0xff,1);
      FUN_10021a00(0,uVar3,uVar4,uVar9,uVar10,uVar11,uVar14,uVar17,iVar7,uVar15,uVar18);
    }
  }
  iVar7 = FUN_101c19e0();
  if (iVar7 / 0xf != *(int *)(param_1 + 0x300)) {
    iVar7 = FUN_101c19e0();
    *(int *)(param_1 + 0x300) = iVar7;
    if (iVar7 <= *(int *)(param_1 + 0x2ec)) {
      *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x2ec) - iVar7;
    }
    FUN_10049a00(*(undefined4 *)(param_1 + 0x30c),iVar7);
    FUN_10049b50(*(undefined4 *)(param_1 + 0x308));
  }
  FUN_10049a00(*(undefined4 *)(param_1 + 0x30c),*(undefined4 *)(param_1 + 0x300));
  if (*(int *)(param_1 + 0x2ec) < *(int *)(param_1 + 0x300)) {
    *(undefined4 *)(param_1 + 0x308) = 0;
  }
  iVar7 = *(int *)(param_1 + 0x308);
  local_1c = 0;
  for (; ((iVar7 < *(int *)(param_1 + 0x308) + *(int *)(param_1 + 0x300) &&
          (iVar7 <= *(int *)(param_1 + 0x30c))) && (iVar7 < *(int *)(param_1 + 0x2ec)));
      iVar7 = iVar7 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x2e8) + iVar7 * 4);
    FUN_1004f5c0(0);
    iVar8 = *piVar1;
    iVar12 = *(int *)(iVar8 + 0x10);
    uVar3 = *(undefined4 *)(iVar8 + 0xc);
    uVar19 = 0xffffffff;
    uVar16 = 0;
    uVar13 = 0;
    uVar18 = 0;
    uVar15 = 0;
    uVar17 = 0;
    uVar14 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar4 = 0;
    fVar2 = (float)iVar12;
    if (iVar12 < 0) {
      fVar2 = fVar2 + _DAT_10230f20;
    }
    local_28 = (undefined4)
               (longlong)
               ROUND(((*(float *)(param_1 + 0x88) - (float)_DAT_10231ce0) - (float)_DAT_1023c280) -
                     fVar2);
    uVar6 = FUN_1004f5c0(0);
    FUN_100217a0(*(int *)(param_1 + 0x314) + iVar12,
                 (*(int *)(param_1 + 0x31c) + 0xb) * local_1c + *(int *)(param_1 + 0x318),uVar3,
                 uVar6,local_28,uVar4,uVar9,uVar10,uVar11,uVar14,uVar17,uVar15,uVar18,uVar13,uVar16,
                 uVar19);
    local_1c = local_1c + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10174780 FUN_10174780 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10021970@10021970 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10174780(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  iVar7 = *(int *)(param_1 + 0x2d8);
  if (iVar7 != 0) {
    uVar8 = 0xff;
    uVar6 = 0x300;
    uVar5 = 0x400;
    uVar4 = 0;
    uVar3 = 0;
    uVar1 = FUN_101c19e0(0,0,0x400,0x300,iVar7,0xff);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021970(0,0,uVar2,uVar1,uVar3,uVar4,uVar5,uVar6,iVar7,uVar8);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  return 1;
}


// ==== 10175bc0 FUN_10175bc0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_10178820@10178820 FUN_1002c9a0@1002c9a0 FUN_1003f630@1003f630 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100218f0@100218f0 FUN_1002c990@1002c990 FUN_1014e4a0@1014e4a0 FUN_1002c970@1002c970 FUN_101c19e0@101c19e0 FUN_1002c980@1002c980 FUN_100212e0@100212e0 FUN_1002cc60@1002cc60
// strings: 10237710=Default.ChatBack | 

undefined4 __thiscall FUN_10175bc0(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_2;
  puStack_c = &LAB_10212ae0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar5 = FUN_101c19e0();
  uVar6 = FUN_101c19e0(uVar5);
  FUN_10021df0(param_1[0x20] + -1,param_1[0x21] + -1,uVar6,uVar5);
  FUN_10002f40(param_1[0x20],param_1[0x21]);
  local_20 = 0;
  local_1c = 0;
  iVar7 = 0;
LAB_10175c50:
  do {
    while( true ) {
      if (param_1[0x76] <= iVar7) {
        if (param_1[0x8f] != 0) {
          iVar7 = FUN_1014e4a0();
          for (local_30 = 0; local_30 < iVar7; local_30 = local_30 + 1) {
            FUN_10021a00(0xd7,local_30 * 0x1b + 8,0x1a,0x1a,0,0,0x1a,0x1a,param_1[0x8f],0xff,1);
            if ((local_30 < param_1[0x79]) && (iVar9 = FUN_1002c970(), iVar9 != 0)) {
              iVar9 = local_30 * 0x1b + 9;
              uVar12 = 0xff;
              uVar6 = 1;
              uVar5 = FUN_1002c970(1,0xff);
              FUN_100218f0(0xd8,iVar9,0x18,0x18,uVar5,uVar6,uVar12);
              if (*(int *)(*(int *)(local_30 * 4 + param_1[0x78]) + 0x1e7c) == 0) {
                uVar12 = 1;
                uVar6 = 0xff;
                uVar5 = FUN_1003f630(L"Default.ChatBack",1);
                FUN_10021a00(0xd9,iVar9,0x18,0x18,0,0,0x18,0x18,uVar5,uVar6,uVar12);
              }
            }
          }
        }
        *(undefined4 *)(iVar2 + 0x38) = 0;
        *(undefined4 *)(iVar2 + 0x3c) = 0;
        FUN_100212e0();
        ExceptionList = local_10;
        return 1;
      }
      iVar9 = *(int *)(param_1[0x75] + iVar7 * 4);
      if (iVar9 != 0) break;
switchD_10175c9b_default:
      iVar7 = iVar7 + 1;
    }
    iVar8 = (**(code **)(*param_1 + 500))
                      (*(undefined4 *)(iVar9 + 0x1e6c),*(undefined4 *)(iVar9 + 0x1e58));
    bVar1 = false;
    switch(iVar8) {
    case 0:
      local_20 = 7;
      local_1c = 7;
      break;
    case 1:
      local_20 = 0x2e;
      local_1c = 7;
      break;
    case 2:
      local_20 = 0x55;
      local_1c = 7;
      break;
    case 3:
      local_20 = 0x82;
      local_1c = 7;
      break;
    case 4:
      local_20 = 0xa9;
      local_1c = 7;
      break;
    case 5:
      local_20 = 7;
      local_1c = 0x2d;
      break;
    case 6:
      local_20 = 0x2e;
      local_1c = 0x2d;
      break;
    case 7:
      local_20 = 0x55;
      local_1c = 0x2d;
      break;
    case 8:
      local_20 = 0x82;
      local_1c = 0x2d;
      break;
    case 9:
      local_20 = 0xa9;
      local_1c = 0x2d;
      break;
    case 10:
      local_20 = 7;
      local_1c = 0x53;
      break;
    case 0xb:
      local_20 = 0x2e;
      local_1c = 0x53;
      break;
    case 0xc:
      local_20 = 0x55;
      local_1c = 0x53;
      break;
    case 0xd:
      local_20 = 0x82;
      local_1c = 0x53;
      break;
    case 0xe:
      local_20 = 0xa9;
      local_1c = 0x53;
      break;
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      bVar1 = true;
      break;
    default:
      goto switchD_10175c9b_default;
    }
    if (((*(int *)(iVar9 + 0x1e78) == 6) || (*(int *)(iVar9 + 0x1e78) == 10)) &&
       (param_1[0x91] != 0)) {
      local_20 = 7;
      local_1c = 0x2d;
LAB_10175dde:
      iVar9 = param_1[0x97];
      uVar12 = 1;
      uVar6 = 0xff;
      uVar5 = FUN_1002c970(0xff,1);
      FUN_10021a00(local_20,local_1c,iVar9,iVar9,0,0,iVar9,iVar9,uVar5,uVar6,uVar12);
      iVar9 = FUN_1002cc60();
      if (iVar9 == 0) {
        FUN_10021a00(local_20 + -1,local_1c + -1,0x22,0x22,0,0,0x22,0x22,param_1[0x8b],0xff,1);
        FUN_10021a00(local_20 + -1,local_1c + -1,0x23,0x23,0,0,0x23,0x23,param_1[0x8c],0xff,1);
        iVar7 = iVar7 + 1;
      }
      else {
        FUN_10021a00(local_20 + -1,local_1c + -1,0x22,0x22,0,0,0x22,0x22,param_1[0x8a],0xff,1);
        iVar7 = iVar7 + 1;
      }
      goto LAB_10175c50;
    }
    if (!bVar1) goto LAB_10175dde;
    local_28 = 0;
    local_24 = 0;
    local_2c = 0;
    param_2 = 0;
    if (*(short *)(iVar9 + 0x54c) != 0) {
      local_28 = FUN_10178820();
    }
    if (*(short *)(iVar9 + 0x64c) != 0) {
      local_24 = FUN_1002c980();
    }
    if (*(short *)(iVar9 + 0x74c) != 0) {
      local_2c = FUN_1002c990();
    }
    if (*(short *)(iVar9 + 0x84c) != 0) {
      param_2 = FUN_1002c9a0();
    }
    if (local_28 == 0) {
      local_28 = FUN_1002c970();
      iVar9 = local_28;
      iVar3 = local_28;
      iVar4 = local_28;
    }
    else {
      iVar9 = local_28;
      iVar3 = local_28;
      iVar4 = local_28;
      if (local_24 != 0) {
        iVar4 = local_24;
        if (local_2c == 0) {
          local_2c = local_24;
        }
        else {
          iVar9 = param_2;
          iVar3 = local_2c;
          if (param_2 != 0) goto LAB_10175f72;
        }
        iVar9 = local_2c;
        iVar3 = local_2c;
      }
    }
LAB_10175f72:
    local_24 = iVar4;
    local_2c = iVar3;
    param_2 = iVar9;
    if (iVar8 == 0x10) {
      iVar9 = param_1[0x97];
      FUN_10021a00(7,0x2d,iVar9,iVar9,0,0,iVar9,iVar9,local_28,0xff,1);
      iVar9 = param_1[0x97];
      FUN_10021a00(0x55,0x2d,iVar9,iVar9,0,0,iVar9,iVar9,local_24,0xff,1);
      iVar9 = param_1[0x97];
      FUN_10021a00(0x55,0x2d,iVar9,iVar9,0,0,iVar9,iVar9,param_1[0x8e],0xff,1);
      iVar9 = FUN_1002cc60();
      if (iVar9 == 0) {
        FUN_10021a00(6,0x2c,0x22,0x22,0,0,0x22,0x22,param_1[0x8b],0xff,1);
        iVar9 = param_1[0x8c];
        uVar11 = 0x23;
        uVar10 = 0x23;
        uVar12 = 0x23;
        uVar6 = 0x23;
        uVar5 = 0x2c;
      }
      else {
        iVar9 = param_1[0x8a];
        uVar11 = 0x22;
        uVar10 = 0x22;
        uVar12 = 0x22;
        uVar6 = 0x22;
        uVar5 = 0x2c;
      }
LAB_10176337:
      FUN_10021a00(6,uVar5,uVar6,uVar12,0,0,uVar10,uVar11,iVar9,0xff,1);
      goto switchD_10175c9b_default;
    }
    if (iVar8 == 0xf) {
      iVar9 = param_1[0x97];
      FUN_10021a00(0x2e,0x2d,iVar9,iVar9,0,0,iVar9,iVar9,local_28,0xff,1);
      iVar9 = param_1[0x97];
      FUN_10021a00(0x2e,0x53,iVar9,iVar9,0,0,iVar9,iVar9,local_24,0xff,1);
      iVar9 = param_1[0x97];
      iVar8 = param_1[0x8e];
      uVar5 = 0x2e;
    }
    else {
      if (iVar8 != 0x11) {
        if (iVar8 != 0x12) goto switchD_10175c9b_default;
        iVar9 = param_1[0x97];
        FUN_10021a00(7,7,iVar9,iVar9,0,0,iVar9,iVar9,local_28,0xff,1);
        iVar9 = param_1[0x97];
        FUN_10021a00(0x55,7,iVar9,iVar9,0,0,iVar9,iVar9,local_24,0xff,1);
        iVar9 = param_1[0x97];
        FUN_10021a00(0x55,7,iVar9,iVar9,0,0,iVar9,iVar9,param_1[0x8e],0xff,1);
        iVar9 = FUN_1002cc60();
        if (iVar9 == 0) {
          FUN_10021a00(6,6,0x22,0x22,0,0,0x22,0x22,param_1[0x8b],0xff,1);
          iVar9 = param_1[0x8c];
          uVar11 = 0x23;
          uVar10 = 0x23;
          uVar12 = 0x23;
          uVar6 = 0x23;
        }
        else {
          iVar9 = param_1[0x8a];
          uVar11 = 0x22;
          uVar10 = 0x22;
          uVar12 = 0x22;
          uVar6 = 0x22;
        }
        uVar5 = 6;
        goto LAB_10176337;
      }
      iVar9 = param_1[0x97];
      FUN_10021a00(0x2e,0x2d,iVar9,iVar9,0,0,iVar9,iVar9,local_28,0xff,1);
      iVar9 = param_1[0x97];
      FUN_10021a00(0x2e,0x53,iVar9,iVar9,0,0,iVar9,iVar9,local_24,0xff,1);
      iVar9 = param_1[0x97];
      FUN_10021a00(0x2e,0x53,iVar9,iVar9,0,0,iVar9,iVar9,param_1[0x8e],0xff,1);
      iVar9 = param_1[0x97];
      FUN_10021a00(7,0x53,iVar9,iVar9,0,0,iVar9,iVar9,local_2c,0xff,1);
      iVar9 = param_1[0x97];
      FUN_10021a00(7,0x53,iVar9,iVar9,0,0,iVar9,iVar9,param_1[0x8e],0xff,1);
      iVar9 = param_1[0x97];
      FUN_10021a00(0x55,0x53,iVar9,iVar9,0,0,iVar9,iVar9,param_2,0xff,1);
      iVar9 = param_1[0x97];
      iVar8 = param_1[0x8e];
      uVar5 = 0x55;
    }
    FUN_10021a00(uVar5,0x53,iVar9,iVar9,0,0,iVar9,iVar9,iVar8,0xff,1);
    iVar9 = FUN_1002cc60();
    if (iVar9 == 0) {
      FUN_10021a00(0x2d,0x2c,0x22,0x22,0,0,0x22,0x22,param_1[0x8b],0xff,1);
      FUN_10021a00(0x2d,0x2c,0x23,0x23,0,0,0x23,0x23,param_1[0x8c],0xff,1);
      iVar7 = iVar7 + 1;
    }
    else {
      FUN_10021a00(0x2d,0x2c,0x22,0x22,0,0,0x22,0x22,param_1[0x8a],0xff,1);
      iVar7 = iVar7 + 1;
    }
  } while( true );
}


// ==== 10179c30 FUN_10179c30 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_1002c970@1002c970 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0 FUN_1002cc60@1002cc60
// strings: 

undefined4 __thiscall FUN_10179c30(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102130d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(int *)(param_1 + 0x80) + -1,*(int *)(param_1 + 0x84) + -1,uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  local_20 = 1;
  local_18 = 1;
  iVar3 = *(int *)(param_1 + 0x260) * *(int *)(param_1 + 600);
LAB_10179cdb:
  do {
    if (*(int *)(param_1 + 0x244) <= iVar3) {
LAB_10179d45:
      *(undefined4 *)(param_2 + 0x38) = 0;
      *(undefined4 *)(param_2 + 0x3c) = 0;
      FUN_100212e0();
      ExceptionList = local_10;
      return 1;
    }
    if (*(int *)(*(int *)(param_1 + 0x240) + iVar3 * 4) != 0) {
      if (iVar3 % *(int *)(param_1 + 600) == 0) {
        local_20 = 1;
        if (iVar3 != *(int *)(param_1 + 0x260) * *(int *)(param_1 + 600)) {
          local_18 = local_18 + 3 + *(int *)(param_1 + 0x270);
        }
        if ((*(int *)(param_1 + 0x270) + 3) * *(int *)(param_1 + 0x25c) + 1 <= local_18)
        goto LAB_10179d45;
      }
      else {
        local_20 = local_20 + 5 + *(int *)(param_1 + 0x26c);
      }
      iVar4 = FUN_1002c970();
      if (iVar4 != 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x270);
        uVar2 = *(undefined4 *)(param_1 + 0x26c);
        uVar7 = 1;
        uVar6 = 0xff;
        uVar5 = FUN_1002c970(0xff,1);
        FUN_10021a00(local_20,local_18,uVar2,uVar1,0,0,uVar2,uVar1,uVar5,uVar6,uVar7);
      }
      iVar4 = FUN_1002cc60();
      if (iVar4 != 0) {
        FUN_10021a00(local_20 + -1,local_18 + -1,0x22,0x22,0,0,0x22,0x22,
                     *(undefined4 *)(param_1 + 0x214),0xff,1);
        iVar3 = iVar3 + 1;
        goto LAB_10179cdb;
      }
      FUN_10021a00(local_20 + -1,local_18 + -1,0x22,0x22,0,0,0x22,0x22,
                   *(undefined4 *)(param_1 + 0x2f4),0xff,1);
      FUN_10021a00(local_20 + -1,local_18 + -1,0x23,0x23,0,0,0x23,0x23,
                   *(undefined4 *)(param_1 + 0x2f8),0xff,1);
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== 1017cea0 FUN_1017cea0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1017cea0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213600;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar9 = 1;
  uVar8 = 0xff;
  uVar1 = *(undefined4 *)(param_1 + 0x1d8);
  uVar7 = 0x8a;
  uVar6 = 0x78;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = FUN_101c19e0(0,0,0x78,0x8a,uVar1,0xff,1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021a00(0,0,uVar3,uVar2,uVar4,uVar5,uVar6,uVar7,uVar1,uVar8,uVar9);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017d5a0 FUN_1017d5a0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1017d5a0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213750;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar9 = 1;
  uVar8 = 0xff;
  uVar1 = *(undefined4 *)(param_1 + 0x1d0);
  uVar7 = 0x31;
  uVar6 = 0x8c;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = FUN_101c19e0(0,0,0x8c,0x31,uVar1,0xff,1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021a00(0,0,uVar3,uVar2,uVar4,uVar5,uVar6,uVar7,uVar1,uVar8,uVar9);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017ef00 FUN_1017ef00 depth=0 from=raiz callees=FUN_10021df0@10021df0 __security_check_cookie@101c16c2 ENGINE.DLL::User::GetName@EXTERNAL:0000009f FUN_10021000@10021000 FUN_10002f40@10002f40 FUN_10062790@10062790 CORE.DLL::appSprintf@EXTERNAL:000001ba CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100536d0@100536d0 FUN_101c19e0@101c19e0 ENGINE.DLL::User::GetMeshType@EXTERNAL:00000018 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0 FUN_100210c0@100210c0
// strings: 1026eb70=%s : %s | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1017ef00(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  FString *this;
  ushort *puVar4;
  int iVar5;
  undefined4 *puVar6;
  User *pUVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uStack_760;
  FString local_750 [20];
  int local_73c;
  undefined4 local_734;
  float local_730;
  undefined1 *local_72c;
  void *local_728;
  undefined1 *puStack_724;
  int local_720;
  User local_71c [408];
  int local_584;
  int local_518;
  char local_510;
  int local_50c;
  ushort local_408 [512];
  uint local_8;
  
  puStack_724 = &LAB_102138f9;
  local_728 = ExceptionList;
  uStack_760 = DAT_103554c4 ^ (uint)local_71c;
  local_72c = (undefined1 *)&uStack_760;
  ExceptionList = &local_728;
  local_720 = 0;
  local_8 = uStack_760;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  for (local_73c = 0; local_73c < 8; local_73c = local_73c + 1) {
    puVar6 = (undefined4 *)(local_73c * 0x314 + 0x37bc + DAT_103663bc);
    pUVar7 = local_71c;
    for (iVar5 = 0xc5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pUVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      pUVar7 = pUVar7 + 4;
    }
    if (local_518 != 0) {
      uVar1 = *(undefined4 *)(local_518 + 0x1bc);
      local_734 = *(undefined4 *)(local_518 + 0x1c0);
      local_730 = *(float *)(local_518 + 0x2f4) * (float)_DAT_1022f270 + (float)_DAT_1027f850 +
                  *(float *)(local_518 + 0x1c4);
      iVar5 = User::GetMeshType(local_71c);
      if (iVar5 == 0) {
        local_730 = local_730 + (float)_DAT_10230fb8;
      }
      iVar5 = 0;
      if (0xff < local_584) {
        iVar5 = 0xff;
      }
      if (0 < local_584) {
        iVar5 = FUN_100536d0(local_584,((int)(local_584 + (local_584 >> 0x1f & 0xfU)) >> 4) + 100,
                             0xff);
      }
      uVar11 = 1;
      uVar10 = 0;
      uVar9 = 2;
      uVar8 = 0;
      puVar3 = User::GetName(local_71c);
      uVar2 = local_734;
      FUN_10021000(uVar1,local_734,local_730,iVar5 * -0x100 - 0x100U | 0xffU - iVar5 | 0xffff0000,
                   puVar3,uVar8,uVar9,uVar10,uVar11);
      if ((0 < local_50c) && (local_510 == '\0')) {
        local_730 = local_730 + (float)_DAT_102373b0;
        this = (FString *)FUN_10062790(local_750,local_50c);
        local_720._0_1_ = 1;
        puVar3 = FString::operator*(this);
        puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6dccc));
        appSprintf(local_408,(ushort *)L"%s : %s",puVar4,puVar3);
        local_720 = (uint)local_720._1_3_ << 8;
        FString::~FString(local_750);
        FUN_100210c0(uVar1,uVar2,local_730,0xffdcdcdc,local_408,2,0,0,0,1,0);
      }
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  local_720 = 0xffffffff;
  ExceptionList = local_728;
  __security_check_cookie(local_8 ^ (uint)local_71c);
  return;
}


// ==== 1017ff30 FUN_1017ff30 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1017ff30(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213b40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar7 = *(int *)(param_1 + 0x1cc);
  if (iVar7 != 0) {
    uVar9 = 1;
    uVar8 = 0xff;
    uVar6 = 0x8a;
    uVar5 = 0x78;
    uVar4 = 0;
    uVar3 = 0;
    uVar1 = FUN_101c19e0(0,0,0x78,0x8a,iVar7,0xff,1);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021a00(0,0,uVar2,uVar1,uVar3,uVar4,uVar5,uVar6,iVar7,uVar8,uVar9);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10181500 FUN_10181500 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10181500(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213e80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar8 = *(int *)(param_1 + 0x2d8);
  if (iVar8 != 0) {
    uVar12 = 1;
    uVar10 = 0xff;
    uVar7 = 0x57;
    uVar6 = 0xcd;
    uVar5 = 0;
    uVar4 = 0;
    uVar1 = FUN_101c19e0(0,0,0xcd,0x57,iVar8,0xff,1);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021a00(0,0,uVar2,uVar1,uVar4,uVar5,uVar6,uVar7,iVar8,uVar10,uVar12);
  }
  uVar13 = 0xffffffff;
  uVar11 = 0;
  uVar9 = 0;
  uVar12 = 0;
  uVar10 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = 0;
  uVar1 = 0;
  local_1c = (undefined4)(longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_10244a08);
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x3fe30));
  FUN_100217a0(10,10,0xffdcdcdc,puVar3,local_1c,uVar1,uVar2,uVar4,uVar5,uVar6,uVar7,uVar10,uVar12,
               uVar9,uVar11,uVar13);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10183e30 FUN_10183e30 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 __security_check_cookie@101c16c2 FUN_101c19e0@101c19e0 FUN_10023790@10023790 FUN_10002f40@10002f40 FUN_10043d00@10043d00 FUN_10021a00@10021a00 FUN_10023160@10023160 CORE.DLL::appSprintf@EXTERNAL:000001ba FUN_100212e0@100212e0 __alloca_probe@101c2730
// strings: 1028cc28=x %d | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_10183e30(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_1014;
  undefined1 *puStack_1010;
  undefined4 local_100c;
  ushort local_1008 [2048];
  uint local_8;
  
  puStack_1010 = &LAB_10214110;
  local_1014 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_1008;
  ExceptionList = &local_1014;
  iVar4 = 0;
  local_100c = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  if (0 < *(int *)(param_1 + 0x218)) {
    FUN_10023790(*(undefined4 *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x1d0));
    for (; iVar4 < *(int *)(param_1 + 0x218); iVar4 = iVar4 + 1) {
      iVar1 = iVar4 * 0x24;
      FUN_10021a00(10,iVar1 + 5,0x22,0x22,0,0,0x22,0x22,*(undefined4 *)(param_1 + 0x224),0xff,1);
      FUN_10021a00(0xb,iVar1 + 6,0x20,0x20,0,0,0x20,0x20,
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x214) + iVar4 * 4) + 0x208),0xff,1);
      appSprintf(local_1008,(ushort *)L"x %d",
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x214) + iVar4 * 4) + 0x204));
      FUN_100217a0(0x2e,iVar1 + 0x19,0xffdcdcdc,local_1008,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    }
    FUN_10043d00(iVar4 * 0x24 + 5);
    FUN_10023160();
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_1014;
  __security_check_cookie(local_8 ^ (uint)local_1008);
  return;
}


// ==== 10184100 FUN_10184100 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10023790@10023790 FUN_10002f40@10002f40 FUN_10182730@10182730 FUN_10043d00@10043d00 FUN_10021a00@10021a00 FUN_10023160@10023160 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10184100(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214140;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10023790(*(undefined4 *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x1d0));
  if (*(int *)(param_1 + 0x2dc) == 1) {
    uVar1 = FUN_10182730(param_2,*(undefined4 *)(param_1 + 0x214),10,4);
    FUN_10043d00(uVar1);
  }
  else if (1 < *(int *)(param_1 + 0x2dc)) {
    FUN_10023790(*(undefined4 *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x1d0));
    for (; iVar3 < *(int *)(param_1 + 0x2dc); iVar3 = iVar3 + 1) {
      FUN_10021a00(10,iVar3 * 0x24 + 5,0x22,0x22,0,0,0x22,0x22,*(undefined4 *)(param_1 + 0x2e4),0xff
                   ,1);
      FUN_10021a00(0xb,iVar3 * 0x24 + 6,0x20,0x20,0,0,0x20,0x20,
                   *(undefined4 *)(*(int *)(param_1 + 0x214 + iVar3 * 4) + 0x34),0xff,1);
    }
    FUN_10043d00(iVar3 * 0x24 + 5);
    FUN_10023160();
  }
  FUN_10023160();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10185840 FUN_10185840 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10185840(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  return 1;
}


// ==== 101858b0 FUN_101858b0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_101858b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  *(undefined4 *)(param_2 + 0x6c) = uVar2;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  iVar1 = *(int *)(param_1 + 0x1cc);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  return 1;
}


// ==== 10185ed0 FUN_10185ed0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_10002f40@10002f40 FUN_10020dc0@10020dc0 FUN_10021a00@10021a00 FUN_1002f160@1002f160 FUN_10030af0@10030af0 FUN_1002f110@1002f110 FUN_1002da20@1002da20 FUN_1002c970@1002c970 FUN_10146830@10146830 FUN_101c19e0@101c19e0 FUN_101b57d0@101b57d0 FUN_1014ed50@1014ed50 FUN_100212e0@100212e0 FUN_1002cc60@1002cc60
// strings: 

undefined4 __thiscall FUN_10185ed0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  local_20 = 1;
  local_18 = 1;
  for (iVar4 = *(int *)(param_1 + 0x260) * *(int *)(param_1 + 600);
      iVar4 < *(int *)(param_1 + 0x244); iVar4 = iVar4 + 1) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x240) + iVar4 * 4);
    if (iVar1 != 0) {
      if (iVar4 % *(int *)(param_1 + 600) == 0) {
        local_20 = 1;
        if (iVar4 != *(int *)(param_1 + 0x260) * *(int *)(param_1 + 600)) {
          local_18 = local_18 + *(int *)(param_1 + 0x270) + 3;
        }
        iVar6 = (*(int *)(param_1 + 0x270) + 1) * *(int *)(param_1 + 0x25c);
        if (iVar6 - local_18 == 0 || iVar6 < local_18) break;
      }
      else {
        local_20 = local_20 + *(int *)(param_1 + 0x26c) + 5;
      }
      iVar6 = FUN_1002cc60();
      if (iVar6 != 0) {
        FUN_10021a00(local_20,local_18,*(undefined4 *)(param_1 + 0x26c),
                     *(undefined4 *)(param_1 + 0x270),0,0,*(undefined4 *)(param_1 + 0x26c),
                     *(undefined4 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x214),0xff,1);
      }
      iVar6 = FUN_1002c970();
      if (iVar6 != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x270);
        uVar3 = *(undefined4 *)(param_1 + 0x26c);
        uVar8 = 1;
        uVar7 = 0xff;
        uVar5 = FUN_1002c970(0xff,1);
        FUN_10021a00(local_20,local_18,uVar3,uVar2,0,0,uVar3,uVar2,uVar5,uVar7,uVar8);
      }
      if (*(int *)(iVar1 + 0x1e50) == 0) {
        if (*(int *)(param_1 + 0x2e4) != 0) {
          FUN_10021a00(local_20 + -1,local_18 + -1,0x22,0x22,0,0,0x22,0x22,*(int *)(param_1 + 0x2e4)
                       ,0xff,1);
        }
        if (((*(int *)(param_1 + 0x2e8) != 0) && (*(int *)(param_1 + 0x27c) == iVar4)) &&
           (*(int *)(param_1 + 0x2f4) != 0)) {
          FUN_10021a00(local_20 + -1,local_18 + -1,0x22,0x22,0,0,0x22,0x22,*(int *)(param_1 + 0x2e8)
                       ,0xff,1);
        }
      }
      uVar2 = *(undefined4 *)(iVar1 + 0x1e60);
      uVar3 = *(undefined4 *)(iVar1 + 0x1e5c);
      FUN_1002f160(uVar3,uVar2);
      iVar6 = FUN_101b57d0(uVar3,uVar2);
      if ((iVar6 != 0) && (iVar6 = FUN_10146830(*(undefined4 *)(iVar1 + 0x1e5c)), iVar6 != 0)) {
        FUN_10021a00(local_20,local_18,0x20,0x20,0,0,0x20,0x20,*(undefined4 *)(param_1 + 0x2ec),0xff
                     ,1);
      }
      if (*(int *)(*(int *)(iVar4 * 4 + *(int *)(param_1 + 0x2f8)) + 0x38) != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x270);
        uVar3 = *(undefined4 *)(param_1 + 0x26c);
        uVar7 = 0xff008080;
        uVar5 = FUN_1002f110(0xff008080);
        FUN_10020dc0(local_20,local_18,uVar3,uVar2,0,0,uVar3,uVar2,uVar5,uVar7);
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x2f8) + iVar4 * 4) + 0x3c) != 0) {
          FUN_1014ed50(9);
          *(undefined4 *)(*(int *)(iVar4 * 4 + *(int *)(param_1 + 0x2f8)) + 0x3c) = 0;
        }
      }
      if (((*(int *)(*(int *)(iVar4 * 4 + *(int *)(param_1 + 0x2f8)) + 0x34) != 0) &&
          (iVar6 = FUN_1002da20(), iVar6 == 0)) && (iVar6 = FUN_10030af0(), iVar6 != 0)) {
        uVar2 = *(undefined4 *)(param_1 + 0x270);
        uVar3 = *(undefined4 *)(param_1 + 0x26c);
        uVar8 = 1;
        uVar7 = 0xff;
        uVar5 = FUN_10030af0(0xff,1);
        FUN_10021a00(local_20,local_18,uVar3,uVar2,0,0,uVar3,uVar2,uVar5,uVar7,uVar8);
      }
      if (*(int *)(iVar1 + 0x1f08) != 0) {
        FUN_10021a00(local_20,local_18,0x20,0x20,0,0,0x20,0x20,*(undefined4 *)(param_1 + 0x2f0),0xff
                     ,1);
      }
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10186c20 FUN_10186c20 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::FString@EXTERNAL:0000019e CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 CORE.DLL::FString::operator_int@EXTERNAL:000001a1 FUN_10021a00@10021a00 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0 CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::operator=@EXTERNAL:000001a3
// strings: 

undefined4 __thiscall FUN_10186c20(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_20 [2];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10214639;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  uVar2 = FUN_101c19e0(uVar1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  *(undefined4 *)(param_2 + 0x6c) = uVar2;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  iVar4 = *(int *)(param_1 + 0x1cc);
  if (iVar4 != 0) {
    uVar2 = FUN_101c19e0(uVar1);
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar4,0xff,1);
  }
  FString::FString(local_18,(FString *)(param_1 + 0x1d0));
  local_4 = 0;
  iVar4 = FString::operator_int(local_18);
  if ((iVar4 == 0) && (*(int *)(param_1 + 0x1dc) != -1)) {
    puVar5 = FString::operator*((FString *)
                                (GL2GameData_exref + *(int *)(param_1 + 0x1dc) * 0x5c + 0x240ec));
    FString::operator=(local_18,puVar5);
  }
  uVar16 = 0;
  uVar14 = 0;
  uVar12 = 0;
  uVar10 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar5 = FString::operator*(local_18);
  FUN_10020bb0(local_20,puVar5,uVar2,uVar3,uVar10,uVar12,uVar14,uVar16);
  iVar4 = FString::operator_int(local_18);
  if (iVar4 == 0) {
LAB_10186dca:
    iVar4 = FString::operator_int(local_18);
    if (iVar4 == 0) goto LAB_10186e0a;
    uVar17 = 0xffffffff;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar16 = 0;
    uVar14 = 0;
    iVar4 = *(int *)GSEKScreenX_exref + -100;
    uVar12 = 0;
    puVar5 = FString::operator*(local_18);
    uVar10 = 0xffdcdcdc;
    uVar2 = 8;
    uVar3 = 0x32;
  }
  else {
    iVar4 = FUN_101c19e0();
    if (iVar4 <= local_20[0]) goto LAB_10186dca;
    uVar17 = 0xffffffff;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar12 = 0;
    iVar4 = 0;
    puVar5 = FString::operator*(local_18);
    uVar10 = 0xffdcdcdc;
    uVar2 = FUN_101c19e0(0xffdcdcdc,puVar5,iVar4,uVar12,uVar14,uVar16,uVar6,uVar7,uVar8,uVar9,uVar11
                         ,uVar13,uVar15,uVar17);
    uVar3 = FUN_101c19e0(uVar2);
  }
  FUN_100217a0(uVar3,uVar2,uVar10,puVar5,iVar4,uVar12,uVar14,uVar16,uVar6,uVar7,uVar8,uVar9,uVar11,
               uVar13,uVar15,uVar17);
LAB_10186e0a:
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return 1;
}


// ==== 101895c0 FUN_101895c0 depth=0 from=raiz callees=FUN_10040090@10040090 FUN_10189240@10189240 FUN_1003f970@1003f970 FUN_10189490@10189490 FUN_10002f40@10002f40 FUN_10188400@10188400 FUN_10189130@10189130 FUN_101c19e0@101c19e0 FUN_10058770@10058770 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0 FUN_10021df0@10021df0 FUN_101b5c90@101b5c90 FUN_100d1790@100d1790 FUN_10187a60@10187a60 FUN_101ae990@101ae990 FUN_1003fff0@1003fff0 FUN_10189340@10189340 CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10187910@10187910 FUN_10187d60@10187d60 FUN_10005c30@10005c30 FUN_10187130@10187130 FUN_10004190@10004190 FUN_100d10a0@100d10a0
// strings: 1028e5b8=GameHour | 1028e5a0=GameMinute | 

undefined4 __thiscall FUN_101895c0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  ushort *puVar8;
  int iVar9;
  uint uStack_88;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int *local_68;
  int *local_64;
  int local_60;
  undefined4 local_5c;
  FString local_58 [12];
  FString local_4c [20];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10214d04;
  local_10 = ExceptionList;
  uStack_88 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_88;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar4,uVar3);
  piVar1 = (int *)(param_1 + 0x250);
  iVar5 = FUN_10187a60(piVar1);
  if (iVar5 == 0) {
    FUN_10187910(param_2);
  }
  else {
    FUN_10189130(param_2,iVar5);
  }
  if (((*piVar1 == 0) && (FUN_10187d60(param_2), *piVar1 == 0)) &&
     (*(char *)(param_1 + 0x22a) != '\0')) {
    FUN_10187130(param_2);
  }
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0xd4))(&local_28);
  iVar5 = 0;
  local_30 = 0;
  local_24 = 0;
  local_68 = local_28;
  local_64 = local_28;
  local_5c = 0;
  local_8._0_1_ = 1;
  for (local_60 = 0; local_60 < local_64[1]; local_60 = local_60 + 1) {
    puVar2 = *(undefined4 **)(*local_64 + 8 + local_60 * 0xc);
    if (((puVar2[1] != -1) || (puVar2[2] != -1)) &&
       ((*(int *)(DAT_103663bc + 0x5110) != 0 && (local_2c = FUN_101ae990(*puVar2), local_2c != 0)))
       ) {
      FUN_10188400(puVar2[1],puVar2[2],&local_18,&local_20,*(undefined4 *)(param_1 + 0x250));
      local_18 = local_18 - *(int *)(param_1 + 0x25c);
      iVar9 = local_20 - *(int *)(param_1 + 0x260);
      local_20 = iVar9;
      if (((iVar5 < 9) && (0xb < local_18)) &&
         ((iVar6 = FUN_101c19e0(), local_18 <= iVar6 + -0xc &&
          ((0xb < iVar9 && (iVar6 = FUN_101c19e0(), iVar9 < iVar6 + -0xc)))))) {
        local_74 = 0;
        local_78 = 0;
        local_70 = 0;
        local_6c = 0;
        FUN_10058770(&local_78);
        (**(code **)(**(int **)(param_1 + 0x274 + iVar5 * 4) + 0x148))
                  ((*(int *)(param_1 + 0x80) - local_78) + local_18,
                   (*(int *)(param_1 + 0x84) - local_74) + iVar9,0);
        (**(code **)(**(int **)(param_1 + 0x274 + iVar5 * 4) + 0x138))();
        pFVar7 = (FString *)FUN_101b5c90(local_58);
        local_8._0_1_ = 2;
        puVar8 = FString::operator*(pFVar7);
        FString::FString(local_4c,puVar8);
        local_8._0_1_ = 3;
        FUN_10004190(local_4c,1,0);
        local_8._0_1_ = 2;
        FString::~FString(local_4c);
        local_8._0_1_ = 1;
        FString::~FString(local_58);
        iVar5 = iVar5 + 1;
        local_30 = iVar5;
      }
    }
    local_24 = local_24 + 1;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100d10a0();
  for (; local_34 = iVar5, iVar5 < 8; iVar5 = iVar5 + 1) {
    (**(code **)(**(int **)(param_1 + 0x274 + iVar5 * 4) + 0x13c))();
  }
  if (*(char *)(param_1 + 0x22b) != '\0') {
    FUN_10189240(param_2);
  }
  FUN_10189340(param_2);
  if (*(int *)(param_1 + 0x244) != 0) {
    FUN_10189490(param_2);
  }
  local_1c = FUN_101c19e0();
  iVar5 = FUN_101c19e0();
  if (0x3b < iVar5) {
    iVar5 = iVar5 + -0x3c;
    local_1c = local_1c + 1;
  }
  local_38 = iVar5;
  if (*(int *)(param_1 + 0x294) != iVar5) {
    FUN_1003f970();
    local_8._0_1_ = 4;
    FString::FString(local_58,(ushort *)L"GameHour");
    local_8._0_1_ = 5;
    FUN_10040090(local_58,local_1c);
    local_8._0_1_ = 4;
    FString::~FString(local_58);
    FString::FString(local_58,(ushort *)L"GameMinute");
    local_8._0_1_ = 6;
    FUN_10040090(local_58,iVar5);
    local_8._0_1_ = 4;
    FString::~FString(local_58);
    pFVar7 = local_4c;
    uVar3 = 0x762;
    FUN_10005c30(0x762,pFVar7);
    FUN_100d1790(uVar3,pFVar7);
    *(int *)(param_1 + 0x294) = iVar5;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1018ced0 FUN_1018ced0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_10059eb0@10059eb0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021970@10021970 FUN_10021a00@10021a00 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1018ced0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uStack_34;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215270;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10059eb0(param_2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_10021a00(0,100,0xf0,300,0,0,0xf0,300,*(int *)(param_1 + 0x1e4),0xff,1);
  }
  if (*(int *)(param_1 + 0x1e8) != 0) {
    FUN_10021970(0,0,0xf0,100,0,0,300,0x3c,*(int *)(param_1 + 0x1e8),0xff);
  }
  FUN_10020bb0(&local_24,&DAT_1028eee4,0,0,0,0,0,0);
  FUN_100217a0((0x37 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1e,0xffdcdcdc,&DAT_1028eee4,0,0,0
               ,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,&DAT_1028eed8,0,0,0,0,0,0);
  FUN_100217a0((0x37 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x37,0xffdcdcdc,&DAT_1028eed8,0,0,0
               ,0,0,0,0,0,0,0,0,0xffffffff);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018d420 FUN_1018d420 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1018d420(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102152d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  if (*(int *)(param_1 + 0x1d8) != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,*(undefined4 *)(param_1 + 0x1d8),0xff,1);
  }
  iVar1 = *(int *)(param_1 + 0x1d4);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    FUN_10021a00(2,3,uVar2,0x14,0,0,uVar2,0x14,iVar1,0xff,1);
  }
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b038));
  FUN_100217a0(0x17,8,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab34));
  FUN_100217a0(8,0x20,0xffa3a3a3,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6acfc));
  FUN_100217a0(8,0x48,0xffa3a3a3,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad14));
  FUN_100217a0(8,100,0xffa3a3a3,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad20));
  FUN_100217a0(0x6b,100,0xffa3a3a3,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad2c));
  FUN_100217a0(8,0x72,0xffa3a3a3,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad98));
  FUN_100217a0(6,0x80,0xffa3a3a3,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018f360 FUN_1018f360 depth=0 from=raiz callees=
// strings: 

undefined4 FUN_1018f360(void)

{
  return 1;
}


// ==== 1018fa60 FUN_1018fa60 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10023790@10023790 FUN_10002f40@10002f40 FUN_10043d00@10043d00 FUN_10021a00@10021a00 FUN_10023160@10023160 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1018fa60(int param_1,int param_2)

{
  short *psVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uStack_40;
  undefined1 local_30 [4];
  undefined4 local_2c;
  longlong local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215740;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar4,uVar3);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  local_18 = 0;
  while( true ) {
    uVar2 = local_18;
    iVar5 = FUN_101c19e0();
    if (iVar5 <= (int)uVar2) break;
    uVar6 = uVar2 & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    if (uVar6 == 1) {
      uVar12 = 0xff;
      uVar3 = *(undefined4 *)(param_1 + 0x214);
      uVar11 = 0xf;
      uVar10 = 8;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0xf;
      uVar4 = FUN_101c19e0(0xf,0,0,8,0xf,uVar3,0xff,1);
      FUN_10021a00(0,uVar2 * 0x12,uVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar3,uVar12,uVar6);
    }
    local_18 = uVar2 + 1;
  }
  psVar1 = (short *)(param_1 + 0x218);
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    FUN_10023790(*(undefined4 *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x1d0));
    local_20 = (longlong)
               ROUND((*(float *)(param_1 + 0x88) - (float)_DAT_10231ce0) - (float)_DAT_10230fb8);
    FUN_100217a0(1,2,0xffdcdcdc,psVar1,(undefined4)local_20,0,1,0,0,0,0,0,0,0,0,0xffffffff);
    local_20 = (longlong)
               ROUND((*(float *)(param_1 + 0x88) - (float)_DAT_10231ce0) - (float)_DAT_10230fb8);
    FUN_10020bb0(local_30,psVar1,(undefined4)local_20,0,1,0,0,0);
    FUN_10043d00(local_2c);
    FUN_10023160();
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018fc90 FUN_1018fc90 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1018fc90(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215760;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar1 = *(int *)(param_1 + 0x1d4);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018fdb0 FUN_1018fdb0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_1018fdb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215780;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar1 = *(int *)(param_1 + 0x1cc);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101901c0 FUN_101901c0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_101901c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar1 = *(int *)(param_1 + 0x1cc);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10191430 FUN_10191430 depth=0 from=raiz callees=FUN_100326c0@100326c0
// strings: 

undefined4 FUN_10191430(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215b40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100326c0(param_1);
  ExceptionList = local_10;
  return 1;
}


// ==== 101917c0 FUN_101917c0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_10059eb0@10059eb0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_101917c0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215b80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10059eb0(param_2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_10021a00(0,0x14,0xf0,0xb9,0,0,0xf0,0xb9,*(int *)(param_1 + 0x1e4),0xff,1);
  }
  if (*(int *)(param_1 + 0x1e8) != 0) {
    FUN_10021a00(0,0xcd,0xf0,0x46,0,0x112,0xf0,0x46,*(int *)(param_1 + 0x1e8),0xff,1);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101924e0 FUN_101924e0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021970@10021970 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0
// strings: 10290af8=Mesh | 10290af8=Mesh | 10290aec=Tex1 | 10290aec=Tex1 | 10290ae0=Tex2 | 10290ae0=Tex2 | 10290ad4=Tex3 | 10290ad4=Tex3 | 10290ac8=Tex4 | 10290ac8=Tex4 | 10290ab0=CollisionH | 10290aa0=ColliH | 10290a88=CollisionR | 10290a78=ColliR | 10290a6c=Speed | 10290a58=AnimRate | 10290aa0=ColliH | 10290a78=ColliR | 10290a4c=Scale | 

undefined4 __thiscall FUN_101924e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uStack_34;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215c10;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar8 = *(int *)(param_1 + 0x228);
  if (iVar8 != 0) {
    uVar9 = 0xff;
    uVar7 = 0x14;
    uVar6 = 0xf0;
    uVar5 = 0;
    uVar4 = 0;
    uVar2 = 0x14;
    uVar1 = FUN_101c19e0(0x14,0,0,0xf0,0x14,iVar8,0xff);
    FUN_10021970(0,0,uVar1,uVar2,uVar4,uVar5,uVar6,uVar7,iVar8,uVar9);
  }
  iVar8 = *(int *)(param_1 + 0x22c);
  if (iVar8 != 0) {
    uVar9 = 0xff;
    uVar7 = 0x9b;
    uVar6 = 0xf2;
    uVar5 = 0;
    uVar4 = 0;
    uVar1 = FUN_101c19e0(0,0,0xf2,0x9b,iVar8,0xff);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021970(0,0x14,uVar2,uVar1,uVar4,uVar5,uVar6,uVar7,iVar8,uVar9);
  }
  FUN_100217a0(10,0x12d,0xffffff00,param_1 + 0x238,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x13d,0xffffff00,param_1 + 0x438,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x14d,0xffffff00,param_1 + 0x638,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x15d,0xffffff00,param_1 + 0x838,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x16d,0xffffff00,param_1 + 0xa38,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Mesh",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1a2,0xffdcdcdc,L"Mesh",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Tex1",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1b6,0xffdcdcdc,L"Tex1",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Tex2",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1ca,0xffdcdcdc,L"Tex2",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Tex3",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1de,0xffdcdcdc,L"Tex3",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Tex4",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1f2,0xffdcdcdc,L"Tex4",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = 0;
  uVar1 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bd1c));
  FUN_10020bb0(&local_24,puVar3,uVar1,uVar2,uVar4,uVar5,uVar6,uVar7);
  FUN_10020bb0(&local_24,L"CollisionH",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x206,0xffdcdcdc,L"ColliH",0,0,0,0,
               0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"CollisionR",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 100,(0x10 - local_20) / 2 + 0x206,0xffdcdcdc,L"ColliR",0,0,0,
               0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,(0x10 - local_20) / 2 + 0x226,0xffdcdcdc,L"Speed",0,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100217a0(0x96,(0x10 - local_20) / 2 + 0x226,0xffdcdcdc,L"AnimRate",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(10,(0x10 - local_20) / 2 + 0x23a,0xffdcdcdc,L"ColliH",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x96,(0x10 - local_20) / 2 + 0x23a,0xffdcdcdc,L"ColliR",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(10,(0x10 - local_20) / 2 + 0x24e,0xffdcdcdc,L"Scale",0,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10196360 FUN_10196360 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_10196360(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102160f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar9 = 1;
  uVar8 = 0xff;
  uVar1 = *(undefined4 *)(param_1 + 0x1cc);
  uVar7 = 0x8a;
  uVar6 = 0x78;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = FUN_101c19e0(0,0,0x78,0x8a,uVar1,0xff,1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021a00(0,0,uVar3,uVar2,uVar4,uVar5,uVar6,uVar7,uVar1,uVar8,uVar9);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101973d0 FUN_101973d0 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_101973d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102162a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  FUN_10021a00(0,0,8,0x11,0,0,8,0x11,*(undefined4 *)(param_1 + 0x2e0),0xff,1);
  uVar12 = 1;
  uVar10 = 0xff;
  uVar2 = *(undefined4 *)(param_1 + 0x2e4);
  uVar9 = 0x11;
  uVar8 = 8;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0x11;
  uVar3 = FUN_101c19e0(0x11,0,0,8,0x11,uVar2,0xff,1);
  FUN_10021a00(8,0,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar2,uVar10,uVar12);
  uVar13 = 1;
  uVar11 = 0xff;
  uVar2 = *(undefined4 *)(param_1 + 0x2e8);
  uVar12 = 0x11;
  uVar10 = 8;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x11;
  uVar6 = 8;
  uVar5 = 0;
  uVar3 = FUN_101c19e0(0,8,0x11,0,0,8,0x11,uVar2,0xff,1);
  FUN_10021a00(uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12,uVar2,uVar11,uVar13);
  iVar1 = *(int *)(param_1 + 0x2ec);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x2f4))) {
    uVar14 = 0xffffffff;
    uVar13 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = 0;
    uVar2 = 0;
    puVar4 = FString::operator*((FString *)
                                (GL2GameData_exref +
                                *(int *)(*(int *)(param_1 + 0x2f0) + iVar1 * 4) * 0xc + 0x6a8dc));
    FUN_100217a0(3,3,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12,
                 uVar11,uVar13,uVar14);
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 101975f0 FUN_101975f0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_101975f0(int param_1,int param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102162c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  if (*(int *)(param_1 + 0x1cc) != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,*(undefined4 *)(param_1 + 0x1cc),0xff,1);
  }
  for (uVar5 = 0; (int)uVar5 < 0xd; uVar5 = uVar5 + 1) {
    uVar4 = uVar5 & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    if (uVar4 == 1) {
      uVar11 = 0xff;
      uVar2 = *(undefined4 *)(param_1 + 0x1d0);
      uVar10 = 0xf;
      uVar9 = 8;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0xf;
      uVar3 = FUN_101c19e0(0xf,0,0,8,0xf,uVar2,0xff,1);
      FUN_10021a00(5,uVar5 * 0xf + 5,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar2,uVar11,uVar4);
    }
  }
  psVar1 = (short *)(param_1 + 0x1d4);
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    local_20 = (undefined4)(longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_1024f730);
    FUN_100217a0(7,7,0xffdcdcdc,psVar1,local_20,0,1,0,0,0,0,0,0,0,0,0xffffffff);
  }
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 101977d0 FUN_101977d0 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_101977d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102162e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar1 = *(int *)(param_1 + 0x1e8);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d1bc));
  FUN_100217a0(0x21,0x14,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b08c));
  FUN_100217a0(0x21,0x37,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b098));
  FUN_100217a0(0x21,0x4f,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0a4));
  FUN_100217a0(0x21,0x67,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0b0));
  FUN_100217a0(0x21,0x7f,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0bc));
  FUN_100217a0(0x21,0x97,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0c8));
  FUN_100217a0(0x21,0xaf,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1019c5a0 FUN_1019c5a0 depth=0 from=raiz callees=FUN_100326c0@100326c0
// strings: 

undefined4 FUN_1019c5a0(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216720;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100326c0(param_1);
  ExceptionList = local_10;
  return 1;
}


// ==== 1019d8e0 FUN_1019d8e0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_10059eb0@10059eb0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0
// strings: 10293444=.unr | 10293444=.unr | 

undefined4 __thiscall FUN_1019d8e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_34;
  undefined1 local_24 [4];
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102167a0;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10059eb0(param_2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(*(int *)(param_1 + 0x86c) + 0x2fc) == 0) {
    iVar3 = *(int *)(param_1 + 0x824);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x820);
  }
  if (iVar3 != 0) {
    FUN_10021a00(0,0x121,0x122,0xb9,0,0,0xf0,0xb9,iVar3,0xff,1);
  }
  if (*(int *)(param_1 + 0x824) != 0) {
    FUN_10021a00(0,0x28,0x122,0xf9,0,0,0xf0,0xf9,*(int *)(param_1 + 0x824),0xff,1);
    FUN_10021a00(0,0x1da,0x122,0x7d,0,0xdb,0xf0,0x7d,*(undefined4 *)(param_1 + 0x824),0xff,1);
  }
  FUN_100217a0(10,0x1d2,0xffffff00,param_1 + 0x1cc,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x1e3,0xffffff00,param_1 + 0x3cc,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,500,0xffffff00,param_1 + 0x5cc,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(local_24,&DAT_10291d98,0,0,0,0,0,0);
  FUN_100217a0(0x23,(0x10 - local_20) / 2 + 0x23f,0xffdcdcdc,&DAT_10291d98,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_10020bb0(local_24,L".unr",0,0,0,0,0,0);
  FUN_100217a0(0x45,(0x10 - local_20) / 2 + 0x23f,0xffdcdcdc,L".unr",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1019ed20 FUN_1019ed20 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_10059eb0@10059eb0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0
// strings: 102935c4=HITTIME | 102935c4=HITTIME | 

undefined4 __thiscall FUN_1019ed20(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uStack_34;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102169d0;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10059eb0(param_2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10020bb0(&local_24,L"HITTIME",0,0,0,0,0,0);
  FUN_100217a0((0x32 - local_24) / 2 + 10,(0x10 - local_20) / 2 + 0x78,0xffdcdcdc,L"HITTIME",0,0,0,0
               ,0,0,0,0,0,0,0,0xffffffff);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101a0d60 FUN_101a0d60 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_10059eb0@10059eb0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0 CORE.DLL::appSecondsQPC@EXTERNAL:000001d5
// strings: 

undefined4 __thiscall FUN_101a0d60(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  uint uStack_38;
  int local_28;
  int local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216b00;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10059eb0(param_2);
  FUN_10002f40(param_1[0x20],param_1[0x21]);
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(param_1[0x20],param_1[0x21],uVar2,uVar1);
  FUN_10020bb0(&local_28,&DAT_10293910,0,0,0,0,0,0);
  FUN_100217a0((0x50 - local_28) / 2 + 0x14,(0x10 - local_24) / 2 + 0x1e,0xffdcdcdc,&DAT_10293910,0,
               0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_28,&DAT_10293900,0,0,0,0,0,0);
  FUN_100217a0((0x50 - local_28) / 2 + 0x14,(0x10 - local_24) / 2 + 0x3c,0xffdcdcdc,&DAT_10293900,0,
               0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_28,&DAT_102938f0,0,0,0,0,0,0);
  FUN_100217a0((0x50 - local_28) / 2 + 0x14,(0x10 - local_24) / 2 + 0x5a,0xffdcdcdc,&DAT_102938f0,0,
               0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_28,&DAT_102938e0,0,0,0,0,0,0);
  FUN_100217a0((0x50 - local_28) / 2 + 0x14,(0x10 - local_24) / 2 + 0x78,0xffdcdcdc,&DAT_102938e0,0,
               0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_28,&DAT_102938d8,0,0,0,0,0,0);
  FUN_100217a0((0x2d - local_28) / 2 + 0x19,(0x10 - local_24) / 2 + 0x96,0xffdcdcdc,&DAT_102938d8,0,
               0,0,0,0,0,0,0,0,0,0,0xffffffff);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  if (param_1[0x79] != 0) {
    dVar5 = appSecondsQPC();
    *(double *)(param_1 + 0x81) = dVar5 - *(double *)(param_1 + 0x7f);
    *(double *)(param_1 + 0x7f) =
         (dVar5 - *(double *)(param_1 + 0x7f)) + *(double *)(param_1 + 0x7f);
    for (iVar4 = 0; iVar4 < param_1[0x7a]; iVar4 = iVar4 + 1) {
      local_18 = iVar4;
      iVar3 = (**(code **)(*param_1 + 0x1fc))(iVar4);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*param_1 + 0x200))(iVar4);
        if (iVar3 == 0) {
          (**(code **)(*param_1 + 0x204))(iVar4);
        }
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 101a1640 FUN_101a1640 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_100217a0@100217a0 FUN_101c19e0@101c19e0 FUN_10021a00@10021a00 FUN_10020bb0@10020bb0 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_101a1640(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_8 [8];
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_10021a00(0,0,0x1a1,0x2c,0,0,0x1a1,0x2c,*(int *)(param_1 + 0x1cc),0xff,1);
  }
  iVar3 = 0x1f;
  param_1 = param_1 + 0xbd0;
  do {
    if (param_1 != 0) {
      FUN_10020bb0(local_8,param_1,0,0,0,0,0,0);
      FUN_100217a0(iVar3,6,0xffdcdcdc,param_1,0x20,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    }
    iVar3 = iVar3 + 0x25;
    param_1 = param_1 + 0x20;
  } while (iVar3 < 0x191);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 101a7990 FUN_101a7990 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_101a7990(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0();
  FUN_10021a00(0,0x14,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(param_1 + 0x1cc),0xff,1);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 1;
}


// ==== 101a7f20 FUN_101a7f20 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 CORE.DLL::appStrstr@EXTERNAL:0000014e __security_check_cookie@101c16c2 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021970@10021970 FUN_10021a00@10021a00 FUN_100212e0@100212e0 CORE.DLL::appStrcpy@EXTERNAL:000001c3
// strings: 10295484= --  | 10295484= --  | 10295484= --  | 

void __thiscall FUN_101a7f20(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uStack_230;
  ushort local_218 [256];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102176e0;
  local_10 = ExceptionList;
  uStack_230 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_230;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_230;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar12 = *(int *)(param_1 + 0x1cc);
  if (iVar12 != 0) {
    uVar14 = 0xff;
    uVar10 = 0x300;
    uVar8 = 0x400;
    uVar6 = 0;
    uVar5 = 0;
    uVar1 = FUN_101c19e0(0,0,0x400,0x300,iVar12,0xff);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021970(0,0,uVar2,uVar1,uVar5,uVar6,uVar8,uVar10,iVar12,uVar14);
  }
  FUN_10021a00(0,0,0xe8,0x78,0,0,0xe8,0x78,*(undefined4 *)(param_1 + 0x1d0),0xff,1);
  puVar3 = FString::operator*((FString *)(param_1 + 0x1d8));
  appStrcpy(local_218,puVar3);
  puVar3 = appStrstr(local_218,(ushort *)L" -- ");
  if (puVar3 != (ushort *)0x0) {
    puVar3 = appStrstr(local_218,(ushort *)L" -- ");
    *puVar3 = 0;
  }
  FUN_100217a0(100,0x96,0xffffffff,local_218,0,0,0,5,0,0,0,0,0,0,0,0xffffffff);
  uVar15 = 0xffffffff;
  uVar13 = 0;
  uVar11 = 0;
  uVar9 = 0;
  uVar7 = 0;
  uVar14 = 0;
  uVar10 = 0;
  uVar8 = 0;
  uVar6 = 5;
  uVar5 = 0;
  uVar2 = 0;
  uVar1 = 0;
  pwVar4 = L" -- ";
  puVar3 = FString::operator*((FString *)(param_1 + 0x1d8));
  puVar3 = appStrstr(puVar3,(ushort *)pwVar4);
  FUN_100217a0(0xaa,0xb4,0xffffffff,puVar3,uVar1,uVar2,uVar5,uVar6,uVar8,uVar10,uVar14,uVar7,uVar9,
               uVar11,uVar13,uVar15);
  FUN_100217a0(100,0xe6,0xffffffff,GMachineOS_exref,0,0,0,5,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(100,0x104,0xffffffff,GMachineCPU_exref,0,0,0,5,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(100,0x122,0xffffffff,GMachineVideo_exref,0,0,0,5,0,0,0,0,0,0,0,0xffffffff);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101a8b40 FUN_101a8b40 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_101a8b40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102177f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar1 = *(int *)(param_1 + 0x1cc);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101a9650 FUN_101a9650 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_101a9650(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217890;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar1 = *(int *)(param_1 + 0x1cc);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101aa930 FUN_101aa930 depth=0 from=raiz callees=
// strings: 

undefined4 FUN_101aa930(void)

{
  return 1;
}


// ==== 101ab1c0 FUN_101ab1c0 depth=0 from=raiz callees=FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_100212f0@100212f0 __security_check_cookie@101c16c2 FUN_101c19e0@101c19e0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_10020bb0@10020bb0 CORE.DLL::appSprintf@EXTERNAL:000001ba FUN_100212e0@100212e0 FUN_101aa9e0@101aa9e0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_101ab1c0(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  FString *this;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uStack_64;
  int local_50 [3];
  undefined8 local_44;
  undefined1 local_3b;
  ushort local_38 [16];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217c50;
  local_10 = ExceptionList;
  uStack_64 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_64;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  if (*(int *)(param_1 + 0x1cc) != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0x14,uVar3,uVar2,0,0,uVar3,uVar2,*(undefined4 *)(param_1 + 0x1cc),0xff,1);
  }
  FUN_101aa9e0(param_2);
  uVar16 = 0;
  uVar14 = 0;
  uVar12 = 0;
  uVar10 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(param_1 + 0x220));
  FUN_10020bb0(local_50,puVar4,uVar2,uVar3,uVar10,uVar12,uVar14,uVar16);
  if (0.0 < *(float *)(param_1 + 0x22c)) {
    uVar7 = 0xff;
    local_3b = 0xff;
    if ((1.0 < *(float *)(param_1 + 0x22c)) || (*(float *)(param_1 + 0x22c) <= 0.0)) {
      local_3b = 0xff;
      uVar7 = 0xff;
    }
    else if (*(float *)(param_1 + 0x22c) <= 1.0) {
      uVar2 = (undefined4)local_44;
      uVar6 = (uint)ROUND(*(float *)(param_1 + 0x22c) * (float)_DAT_10296718);
      local_44._4_1_ = (undefined1)uVar6;
      local_3b = local_44._4_1_;
      uVar7 = uVar6 & 0xff;
      local_44 = CONCAT44(uVar6,uVar2);
    }
    uVar17 = 0xffffffff;
    uVar7 = uVar7 << 0x18;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar3 = 0;
    uVar2 = 0;
    if (*(int *)(param_1 + 0x230) == 0) {
      puVar4 = FString::operator*((FString *)(param_1 + 0x210));
      uVar6 = uVar7 | 0xdcdcdc;
    }
    else {
      puVar4 = FString::operator*((FString *)(param_1 + 0x210));
      uVar6 = uVar7 | 0xff0000;
    }
    FUN_100217a0(0xd,0x100,uVar6,puVar4,uVar2,uVar3,uVar10,uVar12,uVar14,uVar16,uVar8,uVar9,uVar11,
                 uVar13,uVar15,uVar17);
    if (*(int *)(param_1 + 0x21c) < 1) {
      if (*(int *)(param_1 + 0x21c) < 0) {
        uVar17 = 0xffffffff;
        uVar15 = 0;
        uVar13 = 0;
        uVar11 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar16 = 0;
        uVar14 = 0;
        uVar12 = 0;
        uVar10 = 0;
        uVar3 = 0;
        uVar2 = 0;
        puVar4 = FString::operator*((FString *)(param_1 + 0x220));
        FUN_100217a0(0xf2 - local_50[0],0x100,uVar7 | 0xdcdcdc,puVar4,uVar2,uVar3,uVar10,uVar12,
                     uVar14,uVar16,uVar8,uVar9,uVar11,uVar13,uVar15,uVar17);
      }
    }
    else {
      uVar17 = 0xffffffff;
      uVar15 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar16 = 0;
      uVar14 = 0;
      uVar12 = 0;
      uVar10 = 0;
      uVar3 = 0;
      uVar2 = 0;
      puVar4 = FString::operator*((FString *)(param_1 + 0x220));
      FUN_100217a0(0xf2 - local_50[0],0x100,uVar7 | 0xff0000,puVar4,uVar2,uVar3,uVar10,uVar12,uVar14
                   ,uVar16,uVar8,uVar9,uVar11,uVar13,uVar15,uVar17);
    }
  }
  if (*(int *)(param_1 + 0x1fc) != 0) {
    if (*(int *)(param_1 + 0x1d0) != 0) {
      FUN_10021a00(0x6e,0xd7,0xc,0x10,0,0,0xc,0x10,*(int *)(param_1 + 0x1d0),0xff,1);
      appSprintf(local_38,(ushort *)&DAT_10233718,*(undefined4 *)(param_1 + 0x1f8));
      FUN_100212f0(2,0x7d,0xd8,0xffdcdcdc,local_38,0xff);
    }
    if (*(int *)(param_1 + 0x1ec) != 0) {
      iVar5 = (*(int *)(param_1 + 0x1f0) * 0x73) / *(int *)(param_1 + 0x1ec);
      if (*(char *)(param_1 + 0x23e) == '\0') {
        uVar2 = *(undefined4 *)(param_1 + 0x1d4);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x1dc);
      }
      FUN_10021a00(0xd,0xec,iVar5,0xb,0,0,8,0xb,uVar2,0xff,1);
      FUN_10021a00(iVar5 + 0xd,0xec,0xe6 - iVar5,0xb,0,0,8,0xb,*(undefined4 *)(param_1 + 0x1d8),0xff
                   ,1);
    }
    if (*(int *)(param_1 + 0x204) != 0) {
      FUN_10021a00(0xffffffea,0xdd,0x129,0x29,0,0,0x129,0x29,*(undefined4 *)(param_1 + 0x1e0),
                   *(undefined1 *)(param_1 + 0x200),1);
    }
  }
  if ((*(int *)(param_1 + 0x234) != 0) &&
     ((((fVar1 = *(float *)(param_1 + 0x238), !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0) &&
        (*(float *)(param_1 + 0x238) < (float)_DAT_10296710)) ||
       (((float)_DAT_10293570 <= *(float *)(param_1 + 0x238) &&
        (*(float *)(param_1 + 0x238) < _DAT_10288d6c)))) ||
      ((float)_DAT_10296708 <= *(float *)(param_1 + 0x238))))) {
    if (*(char *)(param_1 + 0x23d) == '\0') {
      FUN_10021a00(0xd,0x21,0x20,0x20,0,0,0x20,0x20,*(undefined4 *)(param_1 + 0x1e4),0xff,1);
      local_44 = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_10296700);
      this = (FString *)(GL2GameData_exref + 0x49748);
      uVar2 = (undefined4)local_44;
    }
    else {
      FUN_10021a00(0xd,0x21,0x20,0x20,0,0,0x20,0x20,*(undefined4 *)(param_1 + 0x1e8),0xff,1);
      local_44 = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_10296700);
      this = (FString *)(GL2GameData_exref + 0x496ec);
      uVar2 = (undefined4)local_44;
    }
    uVar17 = 0xffffffff;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar3 = 0;
    puVar4 = FString::operator*(this);
    FUN_100217a0(0x35,0x21,0xffe7dcb6,puVar4,uVar2,uVar3,uVar10,uVar12,uVar14,uVar16,uVar8,uVar9,
                 uVar11,uVar13,uVar15,uVar17);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101ac290 FUN_101ac290 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0 FUN_10021a00@10021a00 FUN_100212e0@100212e0
// strings: 

undefined4 __thiscall FUN_101ac290(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
  if (*(int *)(param_1 + 0x1d0) != 0) {
    FUN_10021a00(0,0x14,0x14e,0x14d,0,0,0x14e,0x14d,*(int *)(param_1 + 0x1d0),0xff,1);
  }
  if (*(int *)(param_1 + 0x1d4) != 0) {
    FUN_10021a00(3,0x15,0x148,0x149,0,0,0x148,0x149,*(int *)(param_1 + 0x1d4),0xff,1);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  return 1;
}


// ==== 10021df0 FUN_10021df0 depth=1 from=FUN_10002f70 callees=FUN_101c19e0@101c19e0
// strings: 

void __thiscall FUN_10021df0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101db350;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_2c = param_2;
  if (*(int *)(param_1 + 0x84) != 0) {
    if (param_2 < *(int *)(param_1 + 0x8c)) {
      local_2c = *(int *)(param_1 + 0x8c);
    }
    if (param_3 < *(int *)(param_1 + 0x90)) {
      param_3 = *(int *)(param_1 + 0x90);
    }
  }
  iVar1 = **(int **)(param_1 + 0x34);
  uVar2 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar2);
  (**(code **)(iVar1 + 0x120))(local_2c,param_3,uVar2);
  ExceptionList = local_10;
  return;
}


// ==== 101c19e0 FUN_101c19e0 depth=1 from=FUN_10002f70 callees=
// strings: 

ulonglong __fastcall FUN_101c19e0(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint uStack_20;
  float fStack_1c;
  
  if (DAT_103b56c8 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    uStack_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((uStack_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(uStack_20 < uVar2),uStack_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}


// ==== 10002f40 FUN_10002f40 depth=1 from=FUN_10002f70 callees=
// strings: 

void __thiscall FUN_10002f40(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  return;
}


// ==== 10021a00 FUN_10021a00 depth=1 from=FUN_10002f70 callees=FUN_10021590@10021590
// strings: 

void __thiscall
FUN_10021a00(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,undefined4 param_11,undefined4 param_12
            )

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101db2d0;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((param_10 != 0) && ((*(int *)(param_10 + 0x580) != 0 || (*(int *)(param_10 + 0x584) != 0)))) {
    iVar1 = **(int **)(param_1 + 0x34);
    ExceptionList = &local_10;
    uVar2 = FUN_10021590(param_11);
    (**(code **)(iVar1 + 0xa0))
              (*(int *)(param_1 + 0x38) + param_2,*(int *)(param_1 + 0x3c) + param_3,param_4,param_5
               ,(float)param_6,(float)param_7,(float)param_8,(float)param_9,param_10,uVar2,param_12)
    ;
    param_3 = *(int *)(param_1 + 0x3c) + param_3;
    if (*(int *)(param_1 + 0x58) < param_3 + param_5) {
      *(int *)(param_1 + 0x58) = param_3 + param_5;
    }
    if (param_3 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = param_3;
    }
    ExceptionList = local_10;
    return;
  }
  return;
}


// ==== 100212e0 FUN_100212e0 depth=1 from=FUN_10002f70 callees=
// strings: 

void __fastcall FUN_100212e0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100212eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x34) + 0x94))();
  return;
}


// ==== 100034b0 FUN_100034b0 depth=1 from=FUN_10005aa0 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_101c19e0@101c19e0 CORE.DLL::FString::operator_int@EXTERNAL:000001a1 FUN_10021a00@10021a00 CORE.DLL::FString::operator[]@EXTERNAL:000001a0 FUN_10020bb0@10020bb0 CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::operator=@EXTERNAL:000001a3 FUN_10147a60@10147a60
// strings: 

void __fastcall FUN_100034b0(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uStack_48;
  FString local_38 [12];
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101d7039;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar5 = 0;
  local_18 = 0;
  puVar1 = &uStack_48;
  switch(param_1[0xb6]) {
  case 1:
    iVar5 = param_1[0xba];
    local_18 = iVar5;
    puVar1 = &uStack_48;
    break;
  case 2:
    iVar5 = param_1[0xbb];
    local_18 = iVar5;
    puVar1 = &uStack_48;
    if (iVar5 != 0) break;
  case 0:
    iVar5 = param_1[0xb9];
    local_18 = iVar5;
    puVar1 = &uStack_48;
    break;
  case 3:
    iVar5 = param_1[0xbc];
    if (iVar5 == 0) {
      iVar5 = param_1[0xb9];
    }
    local_18 = iVar5;
    iVar3 = FUN_10147a60(0,0);
    puVar1 = (uint *)local_14;
    if (iVar3 == 0) {
      param_1[0xb6] = 0;
    }
  }
  local_14 = (undefined1 *)puVar1;
  FString::FString(local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_1[0xc2] < 0) {
    FString::operator=(local_38,(FString *)(param_1 + 0xbf));
  }
  else {
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + param_1[0xc2] * 0xc + 0x6a8dc));
    FString::operator=(local_38,puVar2);
  }
  iVar3 = (**(code **)(*param_1 + 0x6c))();
  iVar3 = (-(uint)(iVar3 != 0) & 0x463c1e) - 0x5f5f60;
  if (iVar5 != 0) {
    local_1c = FUN_101c19e0();
    uVar4 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar4,local_1c,param_1[0x41],param_1[0x42],uVar4,local_1c,iVar5,0xff,1);
  }
  iVar5 = FString::operator_int(local_38);
  if ((iVar5 != 0) && (puVar2 = FString::operator[](local_38,0), *puVar2 != 0)) {
    uVar17 = 0;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar4 = 0;
    puVar2 = FString::operator*(local_38);
    FUN_10020bb0(&local_2c,puVar2,uVar4,uVar9,uVar11,uVar13,uVar15,uVar17);
    uVar18 = 0xffffffff;
    uVar16 = 0;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar17 = 0;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    puVar2 = FString::operator*(local_38);
    local_1c = local_28 / 2;
    uVar4 = FUN_101c19e0(iVar3,puVar2,uVar11,uVar13,uVar15,uVar17,uVar6,uVar7,uVar8,uVar10,uVar12,
                         uVar14,uVar16,uVar18);
    local_1c = local_2c / 2;
    uVar9 = FUN_101c19e0(uVar4);
    FUN_100217a0(uVar9,uVar4,iVar3,puVar2,uVar11,uVar13,uVar15,uVar17,uVar6,uVar7,uVar8,uVar10,
                 uVar12,uVar14,uVar16,uVar18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 10005c50 FUN_10005c50 depth=1 from=FUN_10005e00 callees=CORE.DLL::UObject::IsA@EXTERNAL:00000198
// strings: 

UObject * FUN_10005c50(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1035db10);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 100220e0 FUN_100220e0 depth=1 from=FUN_10005e00 callees=FUN_10021df0@10021df0 FUN_101c19e0@101c19e0
// strings: 

void FUN_100220e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101db3d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(param_1,param_2,uVar2,uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 10058f70 FUN_10058f70 depth=1 from=FUN_10005e00 callees=FUN_10058020@10058020
// strings: 

undefined4 FUN_10058f70(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2020;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10058020();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    ExceptionList = local_10;
    return *(undefined4 *)(*(int *)(iVar1 + 0xc) + 4);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10005c80 FUN_10005c80 depth=1 from=FUN_10005e00 callees=CORE.DLL::UObject::IsA@EXTERNAL:00000198
// strings: 

UObject * FUN_10005c80(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1035eaa0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 100217a0 FUN_100217a0 depth=1 from=FUN_10007c40 callees=FUN_10021590@10021590 FUN_10020bb0@10020bb0
// strings: 

undefined4 __thiscall
FUN_100217a0(int param_1,int param_2,int param_3,uint param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
            undefined4 param_15,undefined4 param_16,undefined4 param_17)

{
  undefined4 uVar1;
  int iVar2;
  uint uStack_34;
  undefined1 local_24 [4];
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101db2b0;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(param_1 + 0x34) == 0) || (param_5 == 0)) {
    uVar1 = 0;
  }
  else {
    FUN_10020bb0(local_24,param_5,param_6,param_7,param_2,0,0,0);
    *(int *)(param_1 + 0x5c) = local_20;
    iVar2 = local_20 + *(int *)(param_1 + 0x3c) + param_3;
    if (*(int *)(param_1 + 0x58) < iVar2) {
      *(int *)(param_1 + 0x58) = iVar2;
    }
    iVar2 = *(int *)(param_1 + 0x3c) + param_3;
    if (iVar2 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar2;
    }
    iVar2 = FUN_10021590(0xff);
    uVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0xbc))
                      (*(int *)(param_1 + 0x38) + param_2,*(int *)(param_1 + 0x3c) + param_3,
                       param_4 & (iVar2 << 0x18 | 0xffffffU),param_5,0,param_6,param_7,0,param_8,
                       param_9,param_10,param_11,param_12,param_13,param_14,param_15,0,0,0,param_17)
    ;
  }
  ExceptionList = local_10;
  return uVar1;
}


// ==== 10020bb0 FUN_10020bb0 depth=1 from=FUN_10007c40 callees=
// strings: 

undefined4
FUN_10020bb0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101db140;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (**(code **)(*DAT_103663c0 + 0xd0))
                      (param_2,param_1,param_3,param_4,param_5,param_8,param_6,param_7);
  }
  ExceptionList = local_10;
  return uVar1;
}


// ==== 100218f0 FUN_100218f0 depth=1 from=FUN_10008310 callees=FUN_10021590@10021590
// strings: 

void __thiscall
FUN_100218f0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_6 != 0) && ((*(int *)(param_6 + 0x580) != 0 || (*(int *)(param_6 + 0x584) != 0)))) {
    iVar1 = **(int **)(param_1 + 0x34);
    uVar2 = FUN_10021590(param_8);
    (**(code **)(iVar1 + 0x9c))
              (*(int *)(param_1 + 0x38) + param_2,*(int *)(param_1 + 0x3c) + param_3,param_4,param_5
               ,param_6,param_7,uVar2);
    param_3 = *(int *)(param_1 + 0x3c) + param_3;
    if (*(int *)(param_1 + 0x58) < param_3 + param_5) {
      *(int *)(param_1 + 0x58) = param_3 + param_5;
    }
    if (param_3 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = param_3;
    }
  }
  return;
}


// ==== 10009b10 FUN_10009b10 depth=1 from=FUN_1000a640 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_1004f5c0@1004f5c0
// strings: 

ushort * __fastcall FUN_10009b10(int *param_1)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d80b0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1[1] < 0) {
    if (param_1[2] < 0) {
      if (*param_1 != 0) {
        ExceptionList = &local_10;
        puVar2 = (ushort *)FUN_1004f5c0(0);
        ExceptionList = local_10;
        return puVar2;
      }
      return (ushort *)0x0;
    }
    iVar1 = param_1[2] * 0x5c + 0x240ec;
  }
  else {
    iVar1 = param_1[1] * 0xc + 0x6a8dc;
  }
  ExceptionList = &local_10;
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + iVar1));
  ExceptionList = local_10;
  return puVar2;
}


// ==== 10021970 FUN_10021970 depth=1 from=FUN_1000a640 callees=FUN_10021590@10021590
// strings: 

void __thiscall
FUN_10021970(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10,
            undefined4 param_11)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_10 != 0) && ((*(int *)(param_10 + 0x580) != 0 || (*(int *)(param_10 + 0x584) != 0)))) {
    iVar1 = **(int **)(param_1 + 0x34);
    uVar2 = FUN_10021590(param_11);
    (**(code **)(iVar1 + 0x98))
              (*(int *)(param_1 + 0x38) + param_2,*(int *)(param_1 + 0x3c) + param_3,param_4,param_5
               ,param_6,param_7,param_8,param_9,param_10,uVar2);
    param_3 = *(int *)(param_1 + 0x3c) + param_3;
    if (*(int *)(param_1 + 0x58) < param_3 + param_5) {
      *(int *)(param_1 + 0x58) = param_3 + param_5;
    }
    if (param_3 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = param_3;
    }
  }
  return;
}


// ==== 1003f8a0 FUN_1003f8a0 depth=1 from=FUN_1000d670 callees=
// strings: 

float10 FUN_1003f8a0(void)

{
  return (float10)*(float *)(DAT_103663bc + 0x50f4);
}


// ==== 1000cb20 FUN_1000cb20 depth=1 from=FUN_1000d670 callees=
// strings: 

undefined4 __thiscall FUN_1000cb20(int param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d89e0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0xb8) + 0xc);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xb8) + 0xc) + 4) + 0x68))
              (0x501,*(undefined4 *)(param_1 + 0x1cc),param_2);
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}


// ==== 10057590 FUN_10057590 depth=1 from=FUN_1000d670 callees=CORE.DLL::FString::FString@EXTERNAL:0000019e
// strings: 

FString * __thiscall FUN_10057590(int param_1,FString *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1b0a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_2,(FString *)(param_1 + 0x180));
  ExceptionList = local_10;
  return param_2;
}


// ==== 1000d5e0 UUIScript::eventOnProgressTimeUp depth=1 from=FUN_1000d670 callees=CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::FString::operator=@EXTERNAL:000001a2 CORE.DLL::UObject::FindFunctionChecked@EXTERNAL:00000191 CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnProgressTimeUp(class FString const &) */

void __thiscall UUIScript::eventOnProgressTimeUp(UUIScript *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void *unaff_EDI;
  undefined4 *puStack_2c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd5e0  1041  ?eventOnProgressTimeUp@UUIScript@@QAEXABVFString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d8b1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_2c = (undefined4 *)0x1000d628;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *(int *)this;
  puStack_2c = local_18;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnProgressTimeUp,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&puStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 100676e0 FUN_100676e0 depth=1 from=FUN_1000f700 callees=CORE.DLL::appStrcat@EXTERNAL:000001d4 FUN_10052740@10052740 __security_check_cookie@101c16c2 CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::appStrlen@EXTERNAL:000001b4 CORE.DLL::appStrcpy@EXTERNAL:000001c3 CORE.DLL::FString::operator=@EXTERNAL:000001a3 CORE.DLL::appItoa@EXTERNAL:00000146 CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10051aa0@10051aa0 FUN_101c19e0@101c19e0 FUN_10062ee0@10062ee0 CORE.DLL::FString::ParseIntoArray@EXTERNAL:0000013a CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::appStrcmp@EXTERNAL:0000014d
// strings: 

void FUN_100676e0(ushort *param_1,ushort *param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  FString *pFVar6;
  float10 extraout_ST0;
  uint local_1c8;
  FString local_1b8 [12];
  FString local_1ac [12];
  FString local_1a0 [16];
  int local_190;
  int local_188;
  float local_184;
  FString local_180 [12];
  int local_174;
  int local_170;
  int local_16c;
  int local_164;
  int local_160;
  int local_158;
  ushort *local_154;
  int local_150;
  int local_14c;
  FString *local_148;
  int local_144;
  int local_13c;
  ushort local_138 [2];
  int local_134;
  int local_130;
  int local_12c;
  FString *local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined1 *local_118;
  void *local_114;
  undefined1 *puStack_110;
  int local_10c;
  ushort local_108 [128];
  uint local_8;
  
  puStack_110 = &LAB_101e4345;
  local_114 = ExceptionList;
  local_1c8 = DAT_103554c4 ^ (uint)local_108;
  local_118 = (undefined1 *)&local_1c8;
  ExceptionList = &local_114;
  local_154 = param_2;
  local_10c = 0;
  *param_1 = 0;
  puVar2 = &local_1c8;
  local_8 = local_1c8;
  if (((param_2 != (ushort *)0x0) &&
      (iVar3 = appStrlen(param_2), puVar2 = (uint *)local_118, 0 < iVar3)) &&
     (iVar4 = appStrcmp(param_2,(ushort *)&DAT_10233714), puVar2 = (uint *)local_118, iVar4 != 0)) {
    if (iVar3 < 0xd) {
      for (local_174 = 0; local_174 < iVar3; local_174 = local_174 + 1) {
        if ((param_2[local_174] < 0x30) || (0x39 < param_2[local_174])) goto code_r0x10067773;
      }
      iVar4 = (iVar3 + -1) / 2;
      local_188 = (int)((param_2[((iVar3 - iVar4) + -1) / 2] - 0x60) + (uint)param_2[iVar4]) % 10;
      iVar3 = local_188 * 0xc;
      local_128 = (FString *)(&DAT_1036d0e8 + iVar3);
      puVar5 = FString::operator*(local_128);
      iVar4 = appStrcmp(param_2,puVar5);
      if (iVar4 == 0) {
        puVar5 = FString::operator*((FString *)(&DAT_1036d160 + iVar3));
        appStrcpy(param_1,puVar5);
        iVar3 = appStrlen(param_1);
        puVar2 = (uint *)local_118;
        if ((0 < iVar3) && (param_3 == 0)) {
          appStrcat(param_1,&DAT_1023d5d0);
          puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6bed8));
          appStrcat(param_1,puVar5);
          puVar2 = (uint *)local_118;
        }
      }
      else {
        FString::operator=(local_128,param_2);
        local_128 = *(FString **)GLanguageType_exref;
        if ((local_128 == (FString *)0x1) || (local_128 == (FString *)0x6)) {
          local_12c = 3;
          puVar5 = (ushort *)&DAT_10246d48;
        }
        else if (local_128 == (FString *)0x5) {
          local_12c = 6;
          puVar5 = &DAT_1023d5d0;
        }
        else {
          local_12c = 4;
          if (local_128 == (FString *)0x0) {
            puVar5 = (ushort *)&DAT_10246d48;
          }
          else {
            puVar5 = (ushort *)&DAT_1022f9f8;
          }
        }
        appStrcpy(local_138,puVar5);
        FString::FString(local_180);
        local_10c._0_1_ = 1;
        puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6e4c4));
        FString::FString(local_1a0,puVar5);
        local_10c._0_1_ = 2;
        puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6e4d0));
        FString::FString(local_1ac,puVar5);
        local_10c._0_1_ = 3;
        puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6eb3c));
        FString::FString(local_1b8,puVar5);
        local_10c._0_1_ = 4;
        if ((local_128 == (FString *)0x1) || (local_128 == (FString *)0x6)) {
          pFVar6 = (FString *)(GL2GameData_exref + 0x6e4e8);
        }
        else if (local_128 == (FString *)0x5) {
          pFVar6 = (FString *)(GL2GameData_exref + 0x6e4f4);
        }
        else {
          pFVar6 = (FString *)(GL2GameData_exref + 0x6e4dc);
        }
        puVar5 = FString::operator*(pFVar6);
        FString::operator=(local_180,puVar5);
        FUN_10051aa0();
        local_10c._0_1_ = 5;
        FUN_10051aa0();
        local_10c._0_1_ = 6;
        FUN_10051aa0();
        local_10c = CONCAT31(local_10c._1_3_,7);
        FString::ParseIntoArray(local_1a0,(ushort *)&DAT_10246d48,(TArray<FString> *)&local_170);
        FString::ParseIntoArray(local_1ac,(ushort *)&DAT_10246d48,(TArray<FString> *)&local_164);
        FString::ParseIntoArray(local_180,(ushort *)&DAT_10246d48,(TArray<FString> *)&local_148);
        local_158 = 0;
        local_134 = appStrlen(param_2);
        iVar3 = 0;
        local_190 = 0;
        for (local_120 = 0; local_120 < local_134; local_120 = local_120 + 1) {
          if (local_158 == 0) {
            if (param_2[local_120] != 0x30) {
              local_158 = 1;
              goto LAB_10067a30;
            }
          }
          else {
LAB_10067a30:
            local_108[iVar3] = param_2[local_120];
            iVar3 = iVar3 + 1;
            local_190 = iVar3;
          }
        }
        local_108[iVar3] = 0;
        appStrcpy(param_2,local_108);
        iVar3 = appStrlen(param_2);
        local_11c = iVar3 % local_12c;
        local_184 = (float)iVar3 / (float)local_12c;
        local_150 = 0;
        local_14c = 0;
        local_134 = iVar3;
        local_124 = FUN_101c19e0();
        if ((float10)local_124 == extraout_ST0) {
          local_124 = local_124 + -1;
        }
        bVar1 = false;
        if (local_128 == (FString *)0x5) {
          local_128 = (FString *)(uint)(6 < iVar3);
          local_13c = 0;
          if (local_128 != (FString *)0x0) {
            local_13c = iVar3 + -6;
          }
          local_130 = 0;
          local_120 = 0;
          while (local_120 < iVar3) {
            if (local_11c == 0) {
              local_11c = local_12c;
            }
            iVar3 = local_154[local_120] - 0x30;
            if (local_128 == (FString *)0x0) {
              if (iVar3 != 0) {
                if (iVar3 <= local_16c) {
                  if (((local_120 == local_134 + -1) && (1 < local_134)) && (iVar3 == 1)) {
                    if (0 < local_144) {
                      pFVar6 = local_148 + 0xc;
                      goto LAB_10067bd0;
                    }
                  }
                  else if (((local_120 == local_134 + -2) && (1 < local_134)) && (iVar3 == 2)) {
                    if (1 < local_144) {
                      pFVar6 = local_148 + 0x18;
LAB_10067bd0:
                      puVar5 = FString::operator*(pFVar6);
                      appStrcat(param_1,puVar5);
                    }
                  }
                  else if ((iVar3 != 1) || (local_11c != 2)) {
                    pFVar6 = (FString *)(local_170 + -0xc + iVar3 * 0xc);
                    goto LAB_10067bd0;
                  }
                }
                if ((1 < local_11c) && (local_11c + -1 <= local_160)) {
                  puVar5 = FString::operator*((FString *)(local_164 + (local_11c * 3 + -6) * 4));
                  appStrcat(param_1,puVar5);
                }
                local_130 = 1;
              }
              if (local_11c == 1) {
                if ((((local_130 == 1) && (local_124 <= local_144)) && (0 < local_124)) &&
                   (local_124 <= local_144)) {
                  puVar5 = FString::operator*(local_148 + local_124 * 0xc + -0xc);
                  appStrcat(param_1,puVar5);
                }
                local_124 = local_124 + -1;
                local_130 = 0;
              }
LAB_10067c4e:
              local_11c = local_11c + -1;
              local_120 = local_120 + 1;
              iVar3 = local_134;
            }
            else {
              if (((local_11c < local_12c) && (local_11c % 3 == 0)) && (0 < local_120)) {
                appStrcat(param_1,(ushort *)&DAT_10246d48);
              }
              puVar5 = appItoa(iVar3);
              appStrcat(param_1,puVar5);
              if ((local_13c < 1) || (local_13c = local_13c + -1, local_13c != 0))
              goto LAB_10067c4e;
              puVar5 = FString::operator*(local_1b8);
              appStrcat(param_1,puVar5);
              local_11c = local_11c + -1;
              local_120 = local_120 + 1;
              iVar3 = local_134;
            }
          }
          if ((local_128 != (FString *)0x0) && (0 < local_144)) {
            appStrcat(param_1,&DAT_1023d5d0);
            puVar5 = FString::operator*(local_148);
            appStrcat(param_1,puVar5);
          }
        }
        else {
          local_130 = 0;
          for (local_120 = 0; local_120 < iVar3; local_120 = local_120 + 1) {
            if (local_11c == 0) {
              local_11c = local_12c;
            }
            iVar3 = local_154[local_120] - 0x30;
            if ((iVar3 != 0) || (local_150 != 0)) {
              if (local_14c != 0) {
                appStrcat(param_1,local_138);
                local_14c = 0;
              }
              if ((local_128 == (FString *)0x1) || (local_128 == (FString *)0x6)) {
                puVar5 = appItoa(iVar3);
                appStrcat(param_1,puVar5);
                local_150 = 1;
              }
              else {
                if (iVar3 <= local_16c) {
                  puVar5 = FString::operator*((FString *)(local_170 + -0xc + iVar3 * 0xc));
                  appStrcat(param_1,puVar5);
                }
                if ((1 < local_11c) && (local_11c + -1 <= local_160)) {
                  puVar5 = FString::operator*((FString *)(local_164 + (local_11c * 3 + -6) * 4));
                  appStrcat(param_1,puVar5);
                }
              }
              bVar1 = true;
              local_130 = 1;
            }
            if (local_11c == 1) {
              if (bVar1) {
                if (local_124 <= local_144) {
                  if ((local_128 == (FString *)0x1) || (local_128 == (FString *)0x6)) {
                    appStrcat(param_1,&DAT_1023d5d0);
                    local_150 = 0;
                  }
                  if ((0 < local_124) && (local_124 <= local_144)) {
                    puVar5 = FString::operator*(local_148 + local_124 * 0xc + -0xc);
                    appStrcat(param_1,puVar5);
                  }
                }
                local_14c = 1;
              }
              local_124 = local_124 + -1;
              bVar1 = false;
              local_130 = 0;
            }
            local_11c = local_11c + -1;
            iVar3 = local_134;
          }
        }
        FString::operator=((FString *)(&DAT_1036d160 + local_188 * 0xc),param_1);
        iVar3 = appStrlen(param_1);
        if ((0 < iVar3) && (param_3 == 0)) {
          appStrcat(param_1,&DAT_1023d5d0);
          puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6bed8));
          appStrcat(param_1,puVar5);
        }
        local_10c._0_1_ = 6;
        FUN_10052740();
        local_10c._0_1_ = 5;
        FUN_10052740();
        local_10c._0_1_ = 4;
        FUN_10052740();
        local_10c._0_1_ = 3;
        FString::~FString(local_1b8);
        local_10c._0_1_ = 2;
        FString::~FString(local_1ac);
        local_10c._0_1_ = 1;
        FString::~FString(local_1a0);
        local_10c = (uint)local_10c._1_3_ << 8;
        FString::~FString(local_180);
        puVar2 = (uint *)local_118;
      }
    }
    else {
      FUN_10062ee0(param_1,param_2);
      puVar2 = (uint *)local_118;
    }
  }
code_r0x10067773:
  local_118 = (undefined1 *)puVar2;
  ExceptionList = local_114;
  __security_check_cookie(local_8 ^ (uint)local_108);
  return;
}


// ==== 101c16c2 __security_check_cookie depth=1 from=FUN_1000f700 callees=___report_gsfailure@101c6adc
// strings: 

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_103554c4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}


// ==== 10146040 FUN_10146040 depth=1 from=FUN_1000f700 callees=FUN_10064640@10064640
// strings: 

void FUN_10146040(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020aac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10064640(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 10068be0 FUN_10068be0 depth=1 from=FUN_10012860 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 CORE.DLL::FString::FString@EXTERNAL:000001a4 FUN_10067ec0@10067ec0 FUN_10146430@10146430 FUN_10021a00@10021a00 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10020bb0@10020bb0 FUN_10146040@10146040
// strings: 

void FUN_10068be0(undefined4 param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  FString *this;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  FString *pFVar18;
  undefined4 uVar19;
  uint uStack_5c;
  FString local_4c [12];
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e45e9;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_4c);
  local_8._0_1_ = 1;
  local_1c = 0;
  local_28 = 0;
  local_2c = 0;
  local_20 = param_3;
  local_24 = param_4;
  local_18 = param_5;
  local_30 = 0;
  iVar3 = 0;
  iVar6 = param_3;
  do {
    while( true ) {
      if (param_2[1] <= local_30) {
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_4c);
        ExceptionList = local_10;
        return;
      }
      piVar1 = *(int **)(*param_2 + local_30 * 4);
      if (piVar1 != (int *)0x0) break;
LAB_10068ec6:
      local_30 = local_30 + 1;
    }
    if ((piVar1[3] == 0) && (*piVar1 != 0)) {
      iVar6 = iVar6 + piVar1[1];
      local_28 = iVar3 + piVar1[1];
    }
    else {
      local_2c = local_2c + 1;
      if ((0 < param_6) && (local_2c == param_6)) {
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_4c);
        ExceptionList = local_10;
        return;
      }
      iVar6 = piVar1[1] + param_3;
      param_4 = param_4 + local_1c;
      if (local_18 < iVar3) {
        local_18 = iVar3;
      }
      local_28 = 0;
      local_1c = 0;
      local_24 = param_4;
    }
    iVar4 = *piVar1;
    iVar3 = local_28;
    if (iVar4 != 0) {
      local_20 = iVar6;
      if (iVar4 == 1) {
        FUN_10067ec0(piVar1);
        pFVar18 = local_4c;
        if (piVar1[5] < 1) {
          this = (FString *)(piVar1 + 6);
        }
        else {
          this = (FString *)(GL2GameData_exref + piVar1[5] * 0xc + 0x6a8dc);
        }
        puVar2 = FString::operator*(this);
        FUN_10146040(puVar2,pFVar18);
        iVar3 = FUN_10146430(local_4c);
        if (iVar3 == 0) {
          if ((piVar1[10] == 0) && (0 < local_18)) {
            iVar3 = (local_18 - iVar6) + param_3;
            uVar17 = 0xffffffff;
            uVar16 = 0;
            uVar15 = 0;
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 1;
            uVar7 = 0;
            iVar4 = iVar3;
            puVar2 = FString::operator*(local_4c);
            FUN_100217a0(iVar6,piVar1[2] + local_24,piVar1[9],puVar2,iVar4,uVar7,uVar8,uVar9,uVar10,
                         uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17);
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 1;
            uVar7 = 0;
            puVar2 = FString::operator*(local_4c);
            FUN_10020bb0(&local_40,puVar2,iVar3,uVar7,uVar8,uVar9,uVar10,uVar11);
            param_4 = local_24;
          }
          else {
            uVar19 = 0xffffffff;
            uVar17 = 0;
            uVar16 = 0;
            uVar15 = 0;
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            puVar2 = FString::operator*(local_4c);
            FUN_100217a0(iVar6,piVar1[2] + param_4,piVar1[9],puVar2,uVar7,uVar8,uVar9,uVar10,uVar11,
                         uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar19);
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            puVar2 = FString::operator*(local_4c);
            FUN_10020bb0(&local_40,puVar2,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
          }
        }
        else {
          uVar19 = 0xffffffff;
          uVar17 = 0;
          uVar16 = 0;
          uVar15 = 0;
          uVar14 = 0;
          uVar13 = 0;
          uVar12 = 0;
          uVar11 = 1;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          puVar2 = FString::operator*(local_4c);
          FUN_100217a0(iVar6,piVar1[2] + param_4,piVar1[9],puVar2,uVar7,uVar8,uVar9,uVar10,uVar11,
                       uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar19);
          local_40 = 0xc;
          local_3c = 0xc;
        }
        iVar6 = iVar6 + local_40;
        local_28 = iVar6 - param_3;
        if (local_18 < local_28) {
          local_18 = local_28;
        }
        iVar4 = piVar1[2];
        iVar5 = local_3c;
      }
      else {
        if (iVar4 != 2) goto LAB_10068ec6;
        FUN_10021a00(iVar6,piVar1[2] + param_4,piVar1[0xb],piVar1[0xc],0,0,piVar1[0xd],piVar1[0xe],
                     piVar1[0x12],0xff,1);
        iVar6 = iVar6 + piVar1[0xb];
        local_28 = iVar6 - param_3;
        if (local_18 < local_28) {
          local_18 = local_28;
        }
        iVar4 = piVar1[0xc];
        iVar5 = piVar1[2];
      }
      iVar3 = local_28;
      local_20 = iVar6;
      if (local_1c < iVar4 + iVar5) {
        local_1c = iVar4 + iVar5;
      }
      goto LAB_10068ec6;
    }
    local_1c = 0;
    local_20 = param_3;
    param_4 = param_4 + piVar1[4];
    local_30 = local_30 + 1;
    iVar6 = param_3;
    local_24 = param_4;
  } while( true );
}


// ==== 10014420 FUN_10014420 depth=1 from=FUN_100183b0 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10020bb0@10020bb0 CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 

undefined4 FUN_10014420(void)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uStack_34;
  undefined4 local_24 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9969;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 1;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar1 = FString::operator*((FString *)&stack0x00000004);
  FUN_10020bb0(local_24,puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return local_24[0];
}


// ==== 10015f70 FUN_10015f70 depth=1 from=FUN_100183b0 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c1ed6@101c1ed6 FUN_100152c0@100152c0 FUN_10020bb0@10020bb0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10024670@10024670 CORE.DLL::FString::Mid@EXTERNAL:000001b2
// strings: 

void __thiscall FUN_10015f70(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  FString *pFVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  FString *this;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uStack_7c;
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  int local_3c [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101d9d64;
  local_10 = ExceptionList;
  uStack_7c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_7c;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  local_28 = param_1;
  uVar1 = FUN_100152c0();
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  if (*(int *)(param_1 + 0x314) != 0) {
    uVar1 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCJapaneseIME::RTTI_Type_Descriptor,0);
    local_20 = FUN_101c1ed6(uVar1);
    if (local_20 != 0) {
      local_24 = 0;
      iVar4 = 0;
      local_1c = 0;
      local_2c = 0;
      while (iVar5 = local_2c, local_2c < *(int *)(local_20 + 0x42dc)) {
        this = (FString *)(param_1 + 0x3b4);
        uVar12 = 1;
        pFVar2 = (FString *)FString::Mid(this,(int)local_48,local_2c);
        local_8 = 1;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar1 = 0;
        puVar3 = FString::operator*(pFVar2);
        FUN_10020bb0(local_3c,puVar3,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12);
        local_8 = 0;
        FString::~FString(local_48);
        if (*(char *)(iVar5 + 0x2ad8 + local_20) == '\0') {
          if ((iVar5 == 0) || (*(char *)(iVar5 + 0x2ad7 + local_20) != '\0')) {
            iVar11 = iVar5;
            pFVar2 = (FString *)FString::Mid(this,(int)local_60,0);
            local_8 = 2;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar6 = 0;
            uVar1 = 0;
            puVar3 = FString::operator*(pFVar2);
            FUN_10020bb0(local_3c,puVar3,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,iVar11);
            local_8 = 0;
            FString::~FString(local_60);
            local_24 = local_3c[0];
            uVar12 = 1;
            pFVar2 = (FString *)FString::Mid(this,(int)local_6c,iVar5);
            local_8 = 3;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar6 = 0;
            uVar1 = 0;
            puVar3 = FString::operator*(pFVar2);
            FUN_10020bb0(local_3c,puVar3,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12);
            pFVar2 = local_6c;
          }
          else {
            uVar12 = 1;
            pFVar2 = (FString *)FString::Mid(this,(int)local_54,iVar5);
            local_8 = 4;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar6 = 0;
            uVar1 = 0;
            puVar3 = FString::operator*(pFVar2);
            FUN_10020bb0(local_3c,puVar3,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12);
            pFVar2 = local_54;
          }
          local_8 = 0;
          FString::~FString(pFVar2);
          iVar4 = iVar4 + local_3c[0];
          local_1c = iVar4;
        }
        param_1 = local_28;
        local_2c = iVar5 + 1;
      }
      if (0 < iVar4) {
        for (iVar5 = 0; local_18 = iVar5, iVar5 < iVar4; iVar5 = iVar5 + 3) {
          FUN_100217a0(iVar5 + local_24 + param_2 + -2 + param_4,param_3 + 3,0xffdcdcdc,
                       &DAT_10234780,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
        }
      }
      iVar4 = local_28;
      if (*(int *)(local_28 + 0x344) != 0) {
        FUN_100217a0(param_2 + -1 + *(int *)(local_28 + 0x3dc),param_3,0xffdcdcdc,&DAT_10230ff8,0,0,
                     0,0,0,0,0,0,0,0,0,0xffffffff);
        FUN_100217a0(*(int *)(iVar4 + 0x3dc) + param_2,param_3,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,
                     0,0,0,0,0,0xffffffff);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100169b0 FUN_100169b0 depth=1 from=FUN_100183b0 callees=FUN_10007b80@10007b80 FUN_100246a0@100246a0 FUN_10141550@10141550 CORE.DLL::appFailAssert@EXTERNAL:0000018a CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::Mid@EXTERNAL:000001b2 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100246c0@100246c0 FUN_101c1ed6@101c1ed6 FUN_100086c0@100086c0 FUN_10025df0@10025df0 FUN_10020bb0@10020bb0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10058770@10058770 FUN_10024670@10024670
// strings: 10234ec0=.\Src\NEditBox.cpp | 10234eb0=pCompositeBox | 

void __thiscall FUN_100169b0(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  FString *pFVar4;
  ushort *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uStack_58;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  int local_38 [4];
  int local_28;
  int local_24;
  undefined8 local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9df2;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  iVar7 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x314) != 0) {
    *(undefined4 *)(param_1 + 0x3e4) = 0;
    uVar2 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCChineseIME::RTTI_Type_Descriptor,0);
    iVar3 = FUN_101c1ed6(uVar2);
    local_20 = CONCAT44(iVar3,(undefined4)local_20);
    if (iVar3 != 0) {
      iVar3 = FUN_10025df0();
      if (iVar3 != 0) {
        piVar6 = (int *)FUN_100246a0();
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x13c))();
        }
        ExceptionList = local_10;
        return;
      }
      local_18 = 0;
      iVar3 = FString::Len((FString *)(param_1 + 0x378));
      if (*(int *)(param_1 + 0x364) < iVar3) {
        while( true ) {
          local_24 = iVar7;
          iVar3 = FString::Len((FString *)(param_1 + 0x3b4));
          if (iVar3 <= iVar7) break;
          uVar13 = 1;
          pFVar4 = (FString *)FString::Mid((FString *)(param_1 + 0x3b4),(int)&local_44,iVar7);
          local_8._0_1_ = 1;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar2 = 0;
          puVar5 = FString::operator*(pFVar4);
          FUN_10020bb0(local_38,puVar5,uVar2,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString((FString *)&local_44);
          cVar1 = *(char *)(iVar7 + 0x2ad8 + local_20._4_4_);
          if ((cVar1 == '\x01') || (cVar1 == '\0')) break;
          local_18 = local_18 + local_38[0];
          iVar7 = iVar7 + 1;
        }
      }
      else {
        iVar7 = FString::Len((FString *)(param_1 + 0x378));
        iVar7 = *(int *)(param_1 + 0x364) - iVar7;
        while( true ) {
          local_28 = iVar7;
          iVar3 = FString::Len((FString *)(param_1 + 0x3b4));
          if (iVar3 <= iVar7) break;
          uVar13 = 1;
          pFVar4 = (FString *)FString::Mid((FString *)(param_1 + 0x3b4),(int)&local_44,iVar7);
          local_8._0_1_ = 2;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar2 = 0;
          puVar5 = FString::operator*(pFVar4);
          FUN_10020bb0(local_38,puVar5,uVar2,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString((FString *)&local_44);
          cVar1 = *(char *)(iVar7 + 0x2ad8 + local_20._4_4_);
          if ((cVar1 == '\x01') || (cVar1 == '\0')) break;
          local_18 = local_18 + local_38[0];
          iVar7 = iVar7 + 1;
        }
      }
      piVar6 = (int *)FUN_100246a0();
      if (piVar6 == (int *)0x0) {
        appFailAssert("pCompositeBox",".\\Src\\NEditBox.cpp",0x313);
      }
      iVar7 = FUN_10141550();
      if ((((iVar7 == 10) || (iVar7 = FUN_10141550(), iVar7 == 9)) ||
          (iVar7 = FUN_10141550(), iVar7 == 0xb)) || (iVar7 = FUN_10141550(), iVar7 == 0xc)) {
        if (*(int *)(param_1 + 0x358) == 0) {
          *(undefined4 *)(param_1 + 1000) = 0x11;
        }
        else {
          iVar7 = FUN_10141550();
          if (((iVar7 == 5) || (iVar7 = FUN_10141550(), iVar7 == 9)) ||
             (iVar7 = FUN_10141550(), iVar7 == 0xc)) {
            *(undefined4 *)(param_1 + 1000) = 0x98;
          }
          else {
            *(undefined4 *)(param_1 + 1000) = 0x89;
          }
        }
        if (*(int *)(param_1 + 0x360) == 0) {
          iVar7 = *(int *)(param_1 + 1000);
          if (*(int *)(param_1 + 0x358) != 0) {
            iVar7 = -iVar7;
          }
          (**(code **)(*piVar6 + 0xc0))(param_2 + param_4,iVar7,100,0xf,0,0,3);
        }
        (**(code **)(*piVar6 + 0x138))();
        piVar6 = (int *)FUN_100246c0();
        local_44 = 0;
        local_48 = 0;
        local_40 = 0.0;
        local_3c = 0.0;
        if (piVar6 != (int *)0x0) {
          FUN_10058770(&local_48);
          if (*(int *)(param_1 + 0x358) == 0) {
            local_20._0_4_ = (undefined4)(longlong)ROUND(local_3c);
            uVar2 = (undefined4)local_20;
            local_20 = (longlong)ROUND(local_40);
            iVar7 = *(int *)(param_1 + 1000);
          }
          else {
            local_20._0_4_ = (undefined4)(longlong)ROUND(local_3c);
            uVar2 = (undefined4)local_20;
            local_20 = (longlong)ROUND(local_40);
            iVar7 = -*(int *)(param_1 + 1000);
          }
          (**(code **)(*piVar6 + 0xc0))
                    (*(undefined4 *)(param_1 + 0x3e4),iVar7,(undefined4)local_20,uVar2,0,0,3);
        }
      }
      else {
        iVar7 = FUN_10141550();
        if (iVar7 == 8) {
          puVar5 = FString::operator*((FString *)(param_1 + 0x3c0));
          FUN_100086c0(puVar5);
          (**(code **)(*piVar6 + 0xc0))
                    (local_18 + param_2 + 5 + param_4,param_3 + -10,0x32,0xf,0,0,3);
          iVar7 = FString::Len((FString *)(param_1 + 0x3c0));
          if (iVar7 == 0) {
            (**(code **)(*piVar6 + 0x13c))();
          }
          else {
            (**(code **)(*piVar6 + 0x138))();
          }
        }
      }
      iVar7 = FUN_10141550();
      if (iVar7 != 10) {
        FUN_10007b80(0);
        ExceptionList = local_10;
        return;
      }
      FUN_10007b80(1);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100134e0 FUN_100134e0 depth=1 from=FUN_100183b0 callees=FUN_100217a0@100217a0 FUN_10021df0@10021df0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_101c19e0@101c19e0 FUN_1003f630@1003f630 FUN_10141550@10141550 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_100218f0@100218f0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0 CORE.DLL::FString::Mid@EXTERNAL:000001b2
// strings: 10230d20=Default.WhiteTexture | 10234750=Default.GrayTexture | 10230d20=Default.WhiteTexture | 10234750=Default.GrayTexture | 

void __thiscall
FUN_100134e0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  FString *pFVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [20];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d97e4;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_5 == 0) {
    iVar1 = FUN_10141550();
    if (((iVar1 == 7) && (iVar1 = (**(code **)(*param_1 + 0x74))(), iVar1 != 0)) &&
       (param_1[0xd1] != 0)) {
      FUN_100217a0(param_4 + -1,param_3,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    }
  }
  else {
    local_14 = (undefined1 *)&uStack_50;
    iVar1 = FUN_10141550();
    if ((iVar1 != 5) && (iVar1 = FUN_10141550(), iVar1 != 7)) {
      for (local_18 = 0; local_18 < param_5; local_18 = local_18 + 3) {
        FUN_100217a0(local_18 + param_2 + -2 + param_4,param_3 + 3,0xffdcdcdc,&DAT_10234780,0,0,0,0,
                     0,0,0,0,0,0,0,0xffffffff);
      }
    }
  }
  if (param_1[0xd7] != 0) {
    iVar1 = FUN_10141550();
    if (iVar1 == 6) {
      FString::Len((FString *)(param_1 + 0xf0));
      uVar2 = FUN_101c19e0();
      uVar3 = FUN_101c19e0(uVar2);
      if (param_1[0xd6] == 0) {
        FUN_10021df0(param_1[0x20],param_1[0x21],uVar3,uVar2);
        param_6 = param_2 + param_4 + param_6;
        uVar16 = 0xff;
        uVar3 = 1;
        uVar2 = FUN_1003f630(L"Default.WhiteTexture",1);
        FUN_100218f0(param_6,param_3 + 6,0xc,0x30,uVar2,uVar3,uVar16);
        iVar1 = 0;
        while (local_20 = iVar1, iVar4 = FString::Len((FString *)(param_1 + 0xf0)), iVar1 < iVar4) {
          if (iVar1 < param_1[0xfc]) {
            pFVar5 = (FString *)FString::Mid((FString *)(param_1 + 0xf0),(int)local_34,iVar1);
            local_8._0_1_ = 4;
            uVar15 = 0xffffffff;
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar16 = 0;
            uVar3 = 0;
            uVar2 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(param_6,param_3 + 6 + iVar1 * 0xc,0xff0000ff,puVar6,uVar2,uVar3,uVar16,
                         uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_34);
            iVar1 = iVar1 + 1;
          }
          else {
            pFVar5 = (FString *)FString::Mid((FString *)(param_1 + 0xf0),(int)local_40,iVar1);
            local_8._0_1_ = 3;
            uVar15 = 0xffffffff;
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar16 = 0;
            uVar3 = 0;
            uVar2 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(param_6,param_3 + 6 + iVar1 * 0xc,0xffff0000,puVar6,uVar2,uVar3,uVar16,
                         uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_40);
            iVar1 = iVar1 + 1;
          }
        }
      }
      else {
        FUN_10021df0(param_1[0x20],param_1[0x21] + -100,uVar3,uVar2);
        param_6 = param_2 + param_4 + param_6;
        uVar16 = 0xff;
        uVar3 = 1;
        uVar2 = FUN_1003f630(L"Default.WhiteTexture",1);
        FUN_100218f0(param_6,param_3 + -0x2a,0xc,0x30,uVar2,uVar3,uVar16);
        iVar1 = 0;
        while (local_1c = iVar1, iVar4 = FString::Len((FString *)(param_1 + 0xf0)), iVar1 < iVar4) {
          if (iVar1 < param_1[0xfc]) {
            pFVar5 = (FString *)FString::Mid((FString *)(param_1 + 0xf0),(int)local_40,iVar1);
            local_8._0_1_ = 2;
            uVar15 = 0xffffffff;
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar16 = 0;
            uVar3 = 0;
            uVar2 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(param_6,param_3 + -0x2a + iVar1 * 0xc,0xff0000ff,puVar6,uVar2,uVar3,uVar16,
                         uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_40);
            iVar1 = iVar1 + 1;
          }
          else {
            iVar4 = param_3 + -0x2a + iVar1 * 0xc;
            uVar16 = 0xff;
            uVar3 = 1;
            uVar2 = FUN_1003f630(L"Default.GrayTexture",1);
            FUN_100218f0(param_6,iVar4,0xc,0xc,uVar2,uVar3,uVar16);
            pFVar5 = (FString *)FString::Mid((FString *)(param_1 + 0xf0),(int)local_34,iVar1);
            local_8._0_1_ = 1;
            uVar15 = 0xffffffff;
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar16 = 0;
            uVar3 = 0;
            uVar2 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(param_6,iVar4,0xffff0000,puVar6,uVar2,uVar3,uVar16,uVar7,uVar8,uVar9,uVar10
                         ,uVar11,uVar12,uVar13,uVar14,uVar15);
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_34);
            iVar1 = iVar1 + 1;
          }
        }
      }
      FUN_100212e0();
    }
    else {
      iVar1 = FUN_10141550();
      if (iVar1 == 4) {
        param_6 = param_2 + param_4 + param_6;
        uVar16 = 0xff;
        uVar3 = 1;
        uVar2 = FUN_1003f630(L"Default.GrayTexture",1);
        FUN_100218f0(param_6,param_3,param_7,0xc,uVar2,uVar3,uVar16);
        uVar15 = 0xffffffff;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar16 = 0;
        uVar3 = 0;
        uVar2 = 0;
        puVar6 = FString::operator*((FString *)(param_1 + 0xf0));
        FUN_100217a0(param_6,param_3,0xff000000,puVar6,uVar2,uVar3,uVar16,uVar7,uVar8,uVar9,uVar10,
                     uVar11,uVar12,uVar13,uVar14,uVar15);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10025df0 FUN_10025df0 depth=1 from=FUN_100183b0 callees=FUN_10024ad0@10024ad0 CORE.DLL::appFailAssert@EXTERNAL:0000018a
// strings: 1023794c=.\Src\NIMEManager.cpp | 10237944=m_pIME | 

undefined4 __fastcall FUN_10025df0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2d8) == 0) {
    appFailAssert("m_pIME",".\\Src\\NIMEManager.cpp",0xad);
  }
  if (*(int *)(param_1 + 0x2d8) != 0) {
    uVar1 = FUN_10024ad0();
    return uVar1;
  }
  return 0xffffffff;
}


// ==== 100133c0 FUN_100133c0 depth=1 from=FUN_100183b0 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_100218f0@100218f0
// strings: 

void __thiscall
FUN_100133c0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d97a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x344) == 0) {
    uVar14 = 0xffffffff;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    puVar1 = FString::operator*((FString *)(param_1 + 0x3b4));
    uVar2 = 0xffdcdcdc;
  }
  else {
    FUN_100218f0(param_2 + param_4,param_3,param_5,0xc,*(undefined4 *)(param_1 + 0x354),1,0xff);
    uVar14 = 0xffffffff;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    puVar1 = FString::operator*((FString *)(param_1 + 0x3b4));
    uVar2 = 0xff000000;
  }
  FUN_100217a0(param_2 + param_4,param_3,uVar2,puVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
               uVar10,uVar11,uVar12,uVar13,uVar14);
  ExceptionList = local_10;
  return;
}


// ==== 10013e70 FUN_10013e70 depth=1 from=FUN_100183b0 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c1ed6@101c1ed6 FUN_1003f630@1003f630 FUN_10020e80@10020e80 CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100218f0@100218f0 FUN_10024670@10024670 CORE.DLL::FString::Mid@EXTERNAL:000001b2
// strings: 10234750=Default.GrayTexture | 

void __thiscall FUN_10013e70(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  FString *pFVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uStack_6c;
  FString local_5c [12];
  FString local_50 [20];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101d9872;
  local_10 = ExceptionList;
  uStack_6c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_6c;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  param_1[0xf9] = param_4;
  local_2c = 0;
  local_1c = 0;
  local_18 = param_1;
  uVar2 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCTaiwanIME::RTTI_Type_Descriptor,0);
  local_20 = FUN_101c1ed6(uVar2);
  if (local_20 != 0) {
    if (param_1[0xd6] == 0) {
      local_30 = param_3 + 0xd;
    }
    else {
      local_30 = param_3 + -1;
    }
    local_24 = 0;
    local_28 = 0;
    iVar3 = 0;
    while( true ) {
      iVar8 = iVar3;
      local_3c = iVar8;
      iVar3 = FString::Len((FString *)(param_1 + 0xed));
      if (iVar3 <= iVar8) break;
      iVar1 = local_1c + param_2 + param_4;
      pFVar4 = (FString *)FString::Mid((FString *)(param_1 + 0xed),(int)local_50,iVar8);
      local_8 = 1;
      uVar19 = 0xffffffff;
      uVar18 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar2 = 0;
      puVar5 = FString::operator*(pFVar4);
      iVar3 = FUN_100217a0(iVar1,param_3,0xffdcdcdc,puVar5,uVar2,uVar9,uVar10,uVar11,uVar12,uVar13,
                           uVar14,uVar15,uVar16,uVar17,uVar18,uVar19);
      local_8 = 0;
      local_34 = iVar3;
      FString::~FString(local_50);
      if (((*(byte *)(iVar8 + 0x2ad8 + local_20) & 1) != 0) && (local_28 == 0)) {
        local_28 = 1;
        local_18[0xf9] = iVar1;
        if (iVar3 == 0) {
          *param_5 = local_1c;
        }
      }
      local_1c = local_1c + iVar3;
      iVar7 = local_1c + param_2 + param_4;
      local_38 = iVar8 + 1;
      if (*(int *)(local_20 + 0x32dc + local_24 * 4) == local_38) {
        local_24 = local_24 + 1;
        iVar7 = iVar7 + -1;
      }
      local_2c = iVar7;
      iVar6 = (**(code **)(*local_18 + 0x74))();
      param_1 = local_18;
      iVar3 = local_38;
      if (iVar6 != 0) {
        if (((*(byte *)(iVar8 + 0x2ad8 + local_20) & 1) != 0) && (0 < local_34)) {
          uVar10 = 0xff;
          uVar9 = 1;
          uVar2 = FUN_1003f630(L"Default.GrayTexture",1);
          FUN_100218f0(iVar1,param_3,iVar7 - iVar1,0xc,uVar2,uVar9,uVar10);
          pFVar4 = (FString *)FString::Mid((FString *)(local_18 + 0xed),(int)local_5c,iVar8);
          local_8 = 2;
          uVar19 = 0xffffffff;
          uVar18 = 0;
          uVar17 = 0;
          uVar16 = 0;
          uVar15 = 0;
          uVar14 = 0;
          uVar13 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar2 = 0;
          puVar5 = FString::operator*(pFVar4);
          FUN_100217a0(iVar1,param_3,0xff000000,puVar5,uVar2,uVar9,uVar10,uVar11,uVar12,uVar13,
                       uVar14,uVar15,uVar16,uVar17,uVar18,uVar19);
          local_8 = 0;
          FString::~FString(local_5c);
        }
        param_1 = local_18;
        iVar3 = local_38;
        if ((*(byte *)(iVar8 + 0x2ad8 + local_20) & 4) != 0) {
          FUN_10020e80(iVar1,local_30,iVar7,local_30,0xffff0000,0);
          param_1 = local_18;
          iVar3 = local_38;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100216e0 FUN_100216e0 depth=1 from=FUN_100183b0 callees=FUN_101c19e0@101c19e0
// strings: 

void FUN_100216e0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)GIsTrueFontUse_exref != 0) {
    piVar1 = (int *)(**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(
                                                  DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c) +
                                                  0xe4) + 0x74) + 0x5c) + 0xd8))();
    (**(code **)(*piVar1 + 0xf8))(param_2,param_1,0);
    uVar2 = FUN_101c19e0();
    *param_1 = uVar2;
    uVar2 = FUN_101c19e0();
    param_1[1] = uVar2;
    return;
  }
  piVar1 = *(int **)(DAT_103663c0 + 0x13c + param_3 * 4);
  *param_1 = 0;
  param_1[1] = 0;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x74))(param_2);
    if (iVar3 != 0) {
      *param_1 = *(undefined4 *)(iVar3 + 4);
      param_1[1] = *(undefined4 *)(iVar3 + 0xc);
    }
  }
  return;
}


// ==== 10141550 FUN_10141550 depth=1 from=FUN_100183b0 callees=IMM32.DLL::ImmGetOpenStatus@101c0e92 __security_check_cookie@101c16c2 KERNEL32.DLL::lstrcmpiA@EXTERNAL:0000022a IMM32.DLL::ImmReleaseContext@101c0e56 IMM32.DLL::ImmGetConversionStatus@101c0e8c USER32.DLL::GetKeyboardLayout@EXTERNAL:000002a3 IMM32.DLL::ImmGetIMEFileNameA@101c0e6e IMM32.DLL::ImmGetContext@101c0e5c
// strings: 10237a74=CINTLGNT.IME | 

void FUN_10141550(void)

{
  HKL pHVar1;
  HIMC pHVar2;
  short sVar3;
  DWORD local_110;
  DWORD local_10c;
  CHAR local_108 [260];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_110;
  pHVar1 = GetKeyboardLayout(0);
  ImmGetIMEFileNameA(pHVar1,local_108,0x103);
  pHVar2 = ImmGetContext(DAT_103663b8);
  switch((uint)pHVar1 & 0x3ff) {
  case 4:
    sVar3 = (short)((uint)pHVar1 >> 0x10);
    if ((((sVar3 != -0x1ffe) && (sVar3 != -0x1ffa)) && (sVar3 != -0x1ff8)) &&
       ((*(int *)GLanguageType_exref != 3 || (sVar3 != -0x1fff)))) {
      lstrcmpiA(local_108,"CINTLGNT.IME");
    }
    goto LAB_101416c2;
  default:
    break;
  case 9:
    break;
  case 0x11:
LAB_101416c2:
    ImmGetOpenStatus(pHVar2);
    break;
  case 0x12:
    ImmGetConversionStatus(pHVar2,&local_110,&local_10c);
    break;
  case 0x1e:
  }
  ImmReleaseContext(DAT_103663b8,pHVar2);
  __security_check_cookie(local_4 ^ (uint)&local_110);
  return;
}


// ==== 10015b00 FUN_10015b00 depth=1 from=FUN_100183b0 callees=
// strings: 

int __thiscall FUN_10015b00(short *param_1,int param_2,int param_3)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_2 + 0x13c + param_3 * 4);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  sVar2 = param_1[7];
  if (sVar2 == 0) {
    if (param_1[1] != 0) {
      iVar3 = (**(code **)(*piVar1 + 0x74))(param_1[1]);
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 4);
      }
      sVar2 = *param_1;
      if (sVar2 == 0) {
        return iVar4;
      }
      if (sVar2 == 0xe33) {
        sVar2 = 0xe32;
      }
      iVar3 = (**(code **)(*piVar1 + 0x74))(sVar2);
      if (iVar3 == 0) {
        return iVar4;
      }
      return iVar4 + *(int *)(iVar3 + 4);
    }
    sVar2 = *param_1;
    if ((sVar2 == 0) && (sVar2 = param_1[5], sVar2 == 0)) {
      return 0;
    }
  }
  iVar3 = (**(code **)(*piVar1 + 0x74))(sVar2);
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 4);
  }
  return iVar4;
}


// ==== 1005a050 FUN_1005a050 depth=1 from=FUN_100183b0 callees=CORE.DLL::appStrlen@EXTERNAL:000001b4
// strings: 

undefined4 FUN_1005a050(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e22a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar5 = 0xffdcdcdc;
  iVar1 = appStrlen(param_1);
  iVar4 = 0;
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    if (param_1[iVar3] == 0x2c) {
      iVar4 = iVar4 + 1;
    }
  }
  if (4 < iVar1 - iVar4) {
    uVar2 = (iVar1 - iVar4) - 2U & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    switch(uVar2) {
    case 0:
      uVar5 = 0xffff80ff;
      break;
    case 1:
      uVar5 = 0xffffff00;
      break;
    case 2:
      uVar5 = 0xff00ff00;
      break;
    case 3:
      uVar5 = 0xff00ffff;
    }
  }
  ExceptionList = local_10;
  return uVar5;
}


// ==== 10016270 FUN_10016270 depth=1 from=FUN_100183b0 callees=FUN_100217a0@100217a0 FUN_100246a0@100246a0 FUN_1003f630@1003f630 FUN_10141550@10141550 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_100218f0@100218f0 CORE.DLL::FString::Mid@EXTERNAL:000001b2 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100246c0@100246c0 FUN_101c1ed6@101c1ed6 FUN_10025df0@10025df0 FUN_10020bb0@10020bb0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10058770@10058770 FUN_10024670@10024670
// strings: 10230d20=Default.WhiteTexture | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10016270(int *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  ushort *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uStack_74;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  FString local_54 [12];
  int local_48 [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  FString local_24 [4];
  undefined8 local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9db6;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  local_8 = 0;
  if (param_1[0xc5] == 0) {
    return;
  }
  ExceptionList = &local_10;
  iVar2 = FUN_10025df0();
  if (iVar2 == 0) {
    iVar2 = FUN_10141550();
    if (iVar2 == 8) {
      local_20._4_4_ = 0;
      local_30 = 0;
      if (param_1[0xd6] == 0) {
        param_1[0xfa] = 0x11;
      }
      else {
        iVar2 = FUN_10141550();
        if (((iVar2 == 5) || (iVar2 = FUN_10141550(), iVar2 == 9)) ||
           (iVar2 = FUN_10141550(), iVar2 == 0xc)) {
          param_1[0xfa] = 0x98;
        }
        else {
          param_1[0xfa] = 0x89;
        }
      }
      iVar3 = FString::Len((FString *)(param_1 + 0xde));
      iVar2 = local_20._4_4_;
      if (iVar3 <= param_1[0xd9]) {
        iVar2 = FString::Len((FString *)(param_1 + 0xde));
        iVar2 = param_1[0xd9] - iVar2;
        local_20._4_4_ = iVar2;
      }
      while( true ) {
        local_18 = iVar2;
        iVar3 = FString::Len((FString *)(param_1 + 0xed));
        if (iVar3 <= iVar2) break;
        uVar21 = 1;
        pFVar4 = (FString *)FString::Mid((FString *)(param_1 + 0xed),(int)local_54,iVar2);
        local_8._0_1_ = 1;
        uVar19 = 0;
        uVar16 = 0;
        uVar14 = 0;
        uVar12 = 0;
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = FString::operator*(pFVar4);
        FUN_10020bb0(local_48,puVar5,uVar9,uVar10,uVar12,uVar14,uVar16,uVar19,uVar21);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_54);
        local_38 = local_48[0] + local_30 + param_4;
        fVar1 = (float)local_38;
        if (local_38 < 0) {
          fVar1 = fVar1 + _DAT_10230f20;
        }
        if ((float)param_1[0x22] < fVar1) break;
        iVar2 = iVar2 + 1;
        local_30 = local_48[0] + local_30;
      }
      pFVar4 = (FString *)FString::Mid((FString *)(param_1 + 0xed),(int)local_54,local_20._4_4_);
      local_8._0_1_ = 2;
      uVar20 = 0xffffffff;
      uVar17 = 0;
      uVar15 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar21 = 0;
      uVar19 = 0;
      uVar16 = 0;
      uVar14 = 0;
      uVar12 = 0;
      uVar10 = 0;
      uVar9 = 0;
      puVar5 = FString::operator*(pFVar4);
      FUN_100217a0(param_2 + param_4,param_3,0xffdcdcdc,puVar5,uVar9,uVar10,uVar12,uVar14,uVar16,
                   uVar19,uVar21,uVar11,uVar13,uVar15,uVar17,uVar20);
      local_8._0_1_ = 0;
      FString::~FString(local_54);
      for (iVar2 = 0; local_18 = iVar2, iVar2 < local_30; iVar2 = iVar2 + 3) {
        FUN_100217a0(iVar2 + param_2 + -2 + param_4,param_3 + 3,0xffdcdcdc,&DAT_10234780,0,0,0,0,0,0
                     ,0,0,0,0,0,0xffffffff);
      }
      local_28 = 0;
      local_34 = 0;
      if (param_1[0xc5] != 0) {
        uVar9 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCChineseIME::RTTI_Type_Descriptor,0);
        iVar2 = FUN_101c1ed6(uVar9);
        local_38 = iVar2;
        piVar6 = (int *)FUN_100246c0();
        if ((iVar2 != 0) && (iVar2 = local_20._4_4_, piVar6 != (int *)0x0)) {
          for (; local_18 = iVar2, iVar2 < *(int *)(local_38 + 0x42dc); iVar2 = iVar2 + 1) {
            uVar21 = 1;
            pFVar4 = (FString *)FString::Mid((FString *)(param_1 + 0xed),(int)local_54,iVar2);
            local_8._0_1_ = 3;
            uVar19 = 0;
            uVar16 = 0;
            uVar14 = 0;
            uVar12 = 0;
            uVar10 = 0;
            uVar9 = 0;
            puVar5 = FString::operator*(pFVar4);
            FUN_10020bb0(local_48,puVar5,uVar9,uVar10,uVar12,uVar14,uVar16,uVar19,uVar21);
            local_8._0_1_ = 0;
            FString::~FString(local_54);
            if (*(char *)(local_38 + 0x2ad8 + iVar2) == '\x01') {
              local_34 = local_48[0];
              iVar3 = local_28 + param_2 + param_4;
              uVar12 = 0xff;
              uVar10 = 1;
              uVar9 = FUN_1003f630(L"Default.WhiteTexture",1);
              FUN_100218f0(iVar3,param_3,local_34,0xc,uVar9,uVar10,uVar12);
              uVar18 = 1;
              pFVar4 = (FString *)FString::Mid((FString *)(param_1 + 0xed),(int)local_24,local_18);
              local_8._0_1_ = 4;
              uVar20 = 0xffffffff;
              uVar17 = 0;
              uVar15 = 0;
              uVar13 = 0;
              uVar11 = 0;
              uVar21 = 0;
              uVar19 = 0;
              uVar16 = 0;
              uVar14 = 0;
              uVar12 = 0;
              uVar10 = 0;
              uVar9 = 0;
              puVar5 = FString::operator*(pFVar4);
              FUN_100217a0(iVar3,param_3,0xff000000,puVar5,uVar9,uVar10,uVar12,uVar14,uVar16,uVar19,
                           uVar21,uVar11,uVar13,uVar15,uVar17,uVar20);
              local_8._0_1_ = 0;
              FString::~FString(local_24);
              piVar7 = (int *)FUN_100246a0(uVar18);
              iVar2 = local_18;
              if (piVar7 != (int *)0x0) {
                (**(code **)(*piVar7 + 0xc0))(iVar3 + 5,param_3 + -10,0x32,0xf,0,0,3);
                iVar2 = local_18;
              }
            }
            local_28 = local_28 + local_48[0];
          }
          local_60 = 0;
          local_64 = 0;
          local_5c = 0.0;
          local_58 = 0.0;
          FUN_10058770(&local_64);
          if (param_1[0xd6] == 0) {
            local_20._0_4_ = (undefined4)(longlong)ROUND(local_58);
            uVar9 = (undefined4)local_20;
            local_20 = (longlong)ROUND(local_5c);
            iVar2 = param_1[0xfa];
          }
          else {
            local_20._0_4_ = (undefined4)(longlong)ROUND(local_58);
            uVar9 = (undefined4)local_20;
            local_20 = (longlong)ROUND(local_5c);
            iVar2 = -param_1[0xfa];
          }
          (**(code **)(*piVar6 + 0xc0))(param_1[0xf9],iVar2,(undefined4)local_20,uVar9,0,0,3);
          if (((local_34 == 0) && (iVar2 = (**(code **)(*param_1 + 0x74))(), iVar2 != 0)) &&
             (param_1[0xd1] != 0)) {
            FUN_100217a0(local_28 + param_2 + -2 + param_4,param_3,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,
                         0,0,0,0,0,0,0,0xffffffff);
          }
          local_2c = 0;
          iVar2 = FString::Len((FString *)(param_1 + 0xde));
          if (param_1[0xd9] < iVar2) {
            iVar2 = param_1[0xd9];
            iVar3 = FString::Len((FString *)(param_1 + 0xed));
            iVar3 = iVar3 - iVar2;
            pFVar4 = (FString *)FString::Mid((FString *)(param_1 + 0xed),(int)local_54,iVar2);
            local_8._0_1_ = 5;
            uVar19 = 0;
            uVar16 = 0;
            uVar14 = 0;
            uVar12 = 0;
            uVar10 = 0;
            uVar9 = 0;
            puVar5 = FString::operator*(pFVar4);
            FUN_10020bb0(local_48,puVar5,uVar9,uVar10,uVar12,uVar14,uVar16,uVar19,iVar3);
            local_8._0_1_ = 0;
            FString::~FString(local_54);
            local_2c = local_48[0];
          }
          for (iVar2 = 0; iVar3 = local_38, local_18 = iVar2, iVar2 < *(int *)(local_38 + 0x42dc);
              iVar2 = iVar2 + 1) {
            uVar21 = 1;
            pFVar4 = (FString *)FString::Mid((FString *)(param_1 + 0xed),(int)local_54,iVar2);
            local_8._0_1_ = 6;
            uVar19 = 0;
            uVar16 = 0;
            uVar14 = 0;
            uVar12 = 0;
            uVar10 = 0;
            uVar9 = 0;
            puVar5 = FString::operator*(pFVar4);
            FUN_10020bb0(local_48,puVar5,uVar9,uVar10,uVar12,uVar14,uVar16,uVar19,uVar21);
            local_8._0_1_ = 0;
            FString::~FString(local_54);
            iVar8 = FString::Len((FString *)(param_1 + 0xde));
            if (param_1[0xd9] - iVar8 <= iVar2) {
              local_2c = local_2c + local_48[0];
            }
            if (*(char *)(iVar3 + 0x2ad8 + iVar2) == '\x01') break;
          }
          iVar3 = param_1[0xd9];
          iVar8 = FString::Len((FString *)(param_1 + 0xde));
          if (iVar2 < iVar3 - iVar8) {
            param_1[0xd9] = iVar3 + -1;
            ExceptionList = local_10;
            return;
          }
          fVar1 = (float)local_2c;
          if (local_2c < 0) {
            fVar1 = fVar1 + _DAT_10230f20;
          }
          if (fVar1 <= (float)param_1[0x22]) {
            ExceptionList = local_10;
            return;
          }
          param_1[0xd9] = iVar3 + 1;
          param_1[0xdc] = iVar3 + 1;
          ExceptionList = local_10;
          return;
        }
      }
      ExceptionList = local_10;
      return;
    }
    iVar2 = FUN_10141550();
    if (((((iVar2 == 10) || (iVar2 = FUN_10141550(), iVar2 == 9)) ||
         (iVar2 = FUN_10141550(), iVar2 == 0xb)) || (iVar2 = FUN_10141550(), iVar2 == 0xc)) &&
       ((iVar2 = (**(code **)(*param_1 + 0x74))(), iVar2 != 0 && (param_1[0xd1] != 0)))) {
      FUN_100217a0(param_2 + -2 + param_4,param_3,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10013c60 FUN_10013c60 depth=1 from=FUN_100183b0 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c1ed6@101c1ed6 FUN_10020e80@10020e80 CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10024670@10024670 CORE.DLL::FString::Mid@EXTERNAL:000001b2
// strings: 

void __thiscall FUN_10013c60(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  FString *this;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint local_5c;
  FString local_4c [20];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9839;
  local_10 = ExceptionList;
  local_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  param_1[0xf9] = param_4;
  local_1c = 0;
  if (param_1[0xc5] != 0) {
    local_18 = param_1;
    uVar2 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCKoreanIME::RTTI_Type_Descriptor,0);
    local_24 = FUN_101c1ed6(uVar2);
    if (local_24 != 0) {
      if (param_1[0xd6] == 0) {
        local_2c = param_3 + 0xd;
      }
      else {
        local_2c = param_3 + -1;
      }
      local_20 = 0;
      local_28 = 0;
      local_38 = 0;
      iVar3 = local_38;
      while (local_38 = iVar3, iVar1 = local_38, iVar3 = FString::Len((FString *)(local_18 + 0xed)),
            iVar1 < iVar3) {
        if (((*(byte *)(iVar1 + 0x2ad8 + local_24) & 1) != 0) && (local_28 == 0)) {
          local_28 = 1;
          local_18[0xf9] = param_2 + param_4 + param_5;
        }
        local_30 = param_4 + param_2 + param_5;
        uVar17 = 1;
        this = (FString *)FString::Mid((FString *)(local_18 + 0xed),(int)local_4c,iVar1);
        local_8._0_1_ = 1;
        uVar16 = 0xffffffff;
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar2 = 0;
        puVar4 = FString::operator*(this);
        local_34 = FUN_100217a0(local_30,param_3,0xffdcdcdc,puVar4,uVar2,uVar6,uVar7,uVar8,uVar9,
                                uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_4c);
        param_5 = param_5 + local_34;
        local_1c = param_4 + param_2 + param_5;
        iVar3 = iVar1 + 1;
        if (*(int *)(local_24 + 0x32dc + local_20 * 4) == iVar3) {
          local_20 = local_20 + 1;
          local_1c = local_1c + -1;
        }
        iVar5 = (**(code **)(*local_18 + 0x74))(uVar17);
        if ((iVar5 != 0) && ((*(byte *)(iVar1 + 0x2ad8 + local_24) & 4) != 0)) {
          FUN_10020e80(local_30,local_2c,local_1c,local_2c,0xffff0000,0);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100139e0 FUN_100139e0 depth=1 from=FUN_100183b0 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_101c1ed6@101c1ed6 FUN_10020e80@10020e80 CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10024670@10024670 CORE.DLL::FString::Mid@EXTERNAL:000001b2
// strings: 

void __thiscall FUN_100139e0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  FString *this;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uStack_5c;
  FString local_4c [20];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9809;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  param_1[0xf9] = param_4;
  local_2c = 0;
  if (param_1[0xc5] != 0) {
    local_24 = param_1;
    uVar2 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCJapaneseIME::RTTI_Type_Descriptor,0);
    local_18 = FUN_101c1ed6(uVar2);
    if (local_18 != 0) {
      local_1c = 0;
      local_28 = 0;
      iVar3 = 0;
      while (iVar6 = iVar3, local_38 = iVar6, iVar3 = FString::Len((FString *)(param_1 + 0xed)),
            iVar6 < iVar3) {
        if (((*(byte *)(iVar6 + 0x2ad8 + local_18) & 1) != 0) && (local_28 == 0)) {
          local_28 = 1;
          param_1[0xf9] = param_2 + param_4 + param_5;
        }
        iVar1 = param_2 + param_4 + param_5;
        uVar19 = 1;
        this = (FString *)FString::Mid((FString *)(local_24 + 0xed),(int)local_4c,iVar6);
        local_8._0_1_ = 1;
        uVar18 = 0xffffffff;
        uVar17 = 0;
        uVar16 = 0;
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar2 = 0;
        puVar4 = FString::operator*(this);
        local_20 = FUN_100217a0(iVar1,param_3,0xffdcdcdc,puVar4,uVar2,uVar8,uVar9,uVar10,uVar11,
                                uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_4c);
        param_5 = param_5 + local_20;
        iVar7 = param_2 + param_4 + param_5;
        local_34 = iVar6 + 1;
        if (*(int *)(local_18 + 0x32dc + local_1c * 4) == local_34) {
          local_1c = local_1c + 1;
          iVar7 = iVar7 + -1;
        }
        local_2c = iVar7;
        iVar5 = (**(code **)(*local_24 + 0x74))(uVar19);
        iVar3 = local_34;
        param_1 = local_24;
        if (iVar5 != 0) {
          if (((*(byte *)(iVar6 + 0x2ad8 + local_18) & 1) != 0) && (0 < local_20)) {
            local_30 = param_3 + 0xd;
            FUN_10020e80(iVar1,local_30,iVar7,param_3 + 0xe,0xffdcdcdc,0);
            FUN_10020e80(iVar1,local_30,iVar7,local_30,0xffdcdcdc,0);
          }
          if (((*(byte *)(iVar6 + 0x2ad8 + local_18) & 3) != 0) && (0 < local_20)) {
            FUN_10020e80(iVar1,param_3 + 0xd,iVar7,param_3 + 0xd,0xffdcdcdc,0);
          }
          if ((*(byte *)(iVar6 + 0x2ad8 + local_18) & 2) != 0) {
            FUN_10020e80(iVar1,param_3 + 0xd,iVar7,param_3 + 0xd,0xffdcdcdc,0);
          }
          iVar3 = local_34;
          param_1 = local_24;
          if ((*(byte *)(iVar6 + 0x2ad8 + local_18) & 4) != 0) {
            FUN_10020e80(iVar1,param_3 + 0xd,iVar7,param_3 + 0xd,0xffff0000,0);
            iVar3 = local_34;
            param_1 = local_24;
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10021be0 FUN_10021be0 depth=1 from=FUN_1001eb60 callees=FUN_1001d9e0@1001d9e0
// strings: 

void __thiscall
FUN_10021be0(int param_1,int param_2,int param_3,float param_4,float param_5,int param_6)

{
  uint uStack_40;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101db310;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_2c = 0;
  local_30 = 0;
  local_28 = 0.0;
  local_24 = 0.0;
  FUN_1001d9e0(&param_2);
  if ((*(int *)(param_1 + 0x84) != 0) && (param_6 == 0)) {
    param_6 = *(int *)(param_1 + 0x8c);
    local_30 = param_2;
    if (param_2 <= param_6) {
      local_30 = param_6;
    }
    local_18 = *(int *)(param_1 + 0x90);
    local_2c = param_3;
    if (param_3 <= local_18) {
      local_2c = local_18;
    }
    local_28 = *(float *)(param_1 + 0x94) + (float)param_6;
    if ((float)param_2 + param_4 < local_28) {
      local_28 = (float)param_2 + param_4;
    }
    local_28 = local_28 - (float)local_30;
    local_24 = *(float *)(param_1 + 0x98) + (float)local_18;
    if ((float)param_3 + param_5 < local_24) {
      local_24 = (float)param_3 + param_5;
    }
    local_24 = local_24 - (float)local_2c;
  }
  if (local_28 < 0.0) {
    local_28 = 0.0;
  }
  if (local_24 < 0.0) {
    local_24 = 0.0;
  }
  *(undefined4 *)(param_1 + 0x84) = 1;
  FUN_1001d9e0(&local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10145670 FUN_10145670 depth=1 from=FUN_10023d10 callees=FUN_10071760@10071760
// strings: 

void FUN_10145670(void)

{
  FUN_10071760();
  return;
}


// ==== 1000cc30 FUN_1000cc30 depth=1 from=FUN_10023d10 callees=
// strings: 

bool FUN_1000cc30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x68))(param_2,param_3,param_4);
    return iVar1 != 0;
  }
  return false;
}


// ==== 10020dc0 FUN_10020dc0 depth=1 from=FUN_10023d10 callees=
// strings: 

void __thiscall
FUN_10020dc0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,undefined4 param_11)

{
  if ((param_10 != 0) && ((*(int *)(param_10 + 0x580) != 0 || (*(int *)(param_10 + 0x584) != 0)))) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0xb8))
              (*(int *)(param_1 + 0x38) + param_2,*(int *)(param_1 + 0x3c) + param_3,param_4,param_5
               ,(float)param_6,(float)param_7,(float)param_8,(float)param_9,param_10,param_11);
    param_3 = *(int *)(param_1 + 0x3c) + param_3;
    if (*(int *)(param_1 + 0x58) < param_3 + param_5) {
      *(int *)(param_1 + 0x58) = param_3 + param_5;
    }
    if (param_3 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = param_3;
    }
  }
  return;
}


// ==== 1002c9b0 FUN_1002c9b0 depth=1 from=FUN_10030d90 callees=
// strings: 

undefined4 __fastcall FUN_1002c9b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


// ==== 1002cc10 FUN_1002cc10 depth=1 from=FUN_10030d90 callees=
// strings: 

short * __fastcall FUN_1002cc10(int param_1)

{
  short *psVar1;
  
  psVar1 = (short *)(param_1 + 0x24c);
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    psVar1 = (short *)0x0;
  }
  return psVar1;
}


// ==== 1002da20 FUN_1002da20 depth=1 from=FUN_10030d90 callees=
// strings: 

bool __fastcall FUN_1002da20(int param_1)

{
  return *(int *)(param_1 + 0x34) == 0;
}


// ==== 1014ed50 FUN_1014ed50 depth=1 from=FUN_10030d90 callees=FUN_10147e60@10147e60
// strings: 

void FUN_1014ed50(void)

{
  FUN_10147e60();
  return;
}


// ==== 101ad480 FUN_101ad480 depth=1 from=FUN_10030d90 callees=FUN_101ac580@101ac580
// strings: 

undefined4 __thiscall
FUN_101ad480(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102182d0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(param_1 + 0x8c) == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  uVar1 = FUN_101ac580(param_2,param_3,param_4);
  ExceptionList = local_10;
  return uVar1;
}


// ==== 1002cc60 FUN_1002cc60 depth=1 from=FUN_10030d90 callees=
// strings: 

undefined4 __fastcall FUN_1002cc60(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1e98);
}


// ==== 1002ccb0 FUN_1002ccb0 depth=1 from=FUN_10030d90 callees=
// strings: 

undefined4 __fastcall FUN_1002ccb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1f58);
}


// ==== 10064790 FUN_10064790 depth=1 from=FUN_10030d90 callees=CORE.DLL::appStrlen@EXTERNAL:000001b4 FUN_100217a0@100217a0
// strings: 

void FUN_10064790(undefined4 param_1,int param_2,int param_3,undefined4 param_4,ushort *param_5)

{
  int iVar1;
  uint uStack_3c;
  int local_2c;
  int local_28;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3ba0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_5 != (ushort *)0x0) {
    iVar1 = appStrlen(param_5);
    local_1c = param_2 + 0xf;
    switch(iVar1) {
    case 4:
      local_18 = (uint)param_5[3];
      (**(code **)(*DAT_103663c0 + 0xd0))(&local_18,&local_2c,0,0,0,0,0,0);
      FUN_100217a0((local_1c - local_2c / 2) + 8,((param_3 + 0x10) - local_28 / 2) + 8,param_4,
                   &local_18,0x20,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    case 3:
      local_18 = (uint)param_5[2];
      (**(code **)(*DAT_103663c0 + 0xd0))(&local_18,&local_2c,0,0,0,0,0,0);
      FUN_100217a0(((param_2 + 2) - local_2c / 2) + 8,((param_3 + 0x10) - local_28 / 2) + 8,param_4,
                   &local_18,0x20,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    case 2:
      local_18 = (uint)param_5[1];
      (**(code **)(*DAT_103663c0 + 0xd0))(&local_18,&local_2c,0,0,0,0,0,0);
      FUN_100217a0((local_1c - local_2c / 2) + 8,((param_3 + 3) - local_28 / 2) + 8,param_4,
                   &local_18,0x20,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    case 1:
      local_18 = (uint)*param_5;
      (**(code **)(*DAT_103663c0 + 0xd0))(&local_18,&local_2c,0,0,0,0,0,0);
      FUN_100217a0(((param_2 + 2) - local_2c / 2) + 8,((param_3 + 3) - local_28 / 2) + 8,param_4,
                   &local_18,0x20,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10030af0 FUN_10030af0 depth=1 from=FUN_10030d90 callees=FUN_1002ef40@1002ef40 CORE.DLL::appSecondsQPC@EXTERNAL:000001d5 FUN_1002ef10@1002ef10 FUN_1002da10@1002da10
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10030af0(undefined4 *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = appSecondsQPC();
  dVar1 = dVar2 - *(double *)(param_1 + 8);
  if (dVar1 < 0.0) {
    dVar1 = 0.0;
  }
  if (dVar2 <= _DAT_1022f270 + *(double *)(param_1 + 6) + *(double *)(param_1 + 8)) {
    if (dVar2 <= *(double *)(param_1 + 6) + *(double *)(param_1 + 8)) {
      FUN_1002ef40(dVar1);
      return *param_1;
    }
    FUN_1002ef10();
    return 0;
  }
  FUN_1002da10();
  return 0;
}


// ==== 1002f110 FUN_1002f110 depth=1 from=FUN_10030d90 callees=FUN_1002ef40@1002ef40 CORE.DLL::appSecondsQPC@EXTERNAL:000001d5
// strings: 

undefined4 __fastcall FUN_1002f110(undefined4 *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = appSecondsQPC();
  dVar1 = dVar2 - *(double *)(param_1 + 8);
  if (dVar1 < 0.0) {
    dVar1 = 0.0;
  }
  if (dVar2 <= *(double *)(param_1 + 6) + *(double *)(param_1 + 8)) {
    FUN_1002ef40(dVar1);
    return *param_1;
  }
  param_1[0xe] = 0;
  return 0;
}


// ==== 10147a60 FUN_10147a60 depth=1 from=FUN_10030d90 callees=
// strings: 

undefined4 __thiscall FUN_10147a60(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x5164);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x5168);
  }
  return *(undefined4 *)(param_1 + 0x5160);
}


// ==== 1002c970 FUN_1002c970 depth=1 from=FUN_10030d90 callees=
// strings: 

undefined4 __fastcall FUN_1002c970(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}


// ==== 10146830 FUN_10146830 depth=1 from=FUN_10030d90 callees=FUN_101aceb0@101aceb0 FUN_101adac0@101adac0
// strings: 

undefined4 FUN_10146830(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020abf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    iVar2 = 0;
    while( true ) {
      iVar1 = FUN_101aceb0();
      if (iVar1 <= iVar2) break;
      iVar1 = FUN_101adac0(iVar2);
      if (param_1 == iVar1) {
        ExceptionList = local_10;
        return 1;
      }
      iVar2 = iVar2 + 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 100549b0 FUN_100549b0 depth=1 from=FUN_10030d90 callees=FUN_10021df0@10021df0 FUN_1005d0a0@1005d0a0 FUN_101c19e0@101c19e0 FUN_10068be0@10068be0 FUN_10021a00@10021a00 FUN_100218f0@100218f0 FUN_100212e0@100212e0
// strings: 

void FUN_100549b0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1610;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  local_8 = 0;
  if (*(int *)(param_2 + 0x30) < 1) {
    return;
  }
  local_34 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  ExceptionList = &local_10;
  puVar1 = &uStack_48;
  if (*(int *)(DAT_103663bc + 0x50ac) != 0) {
    FUN_1005d0a0(&local_38);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_101c19e0();
  local_1c = iVar2;
  iVar3 = FUN_101c19e0();
  local_20 = iVar3;
  iVar4 = FUN_101c19e0();
  if (iVar4 < param_5 + iVar2 + param_3) {
    iVar2 = FUN_101c19e0();
    param_3 = param_3 - iVar2;
  }
  else if (param_5 + param_3 < 0) {
    param_3 = -param_5;
  }
  param_4 = param_4 - iVar3;
  if (param_6 + param_4 < 0) {
    param_4 = param_4 + iVar3;
  }
  FUN_10021df0(param_5 + param_3,param_6 + param_4,local_1c,iVar3);
  if (*local_18 != 0) {
    FUN_10021a00(param_3,param_4,8,8,0,0,8,8,*local_18,0xff,1);
  }
  if (local_18[1] != 0) {
    FUN_100218f0(param_3 + 8,param_4,local_1c + -0x10,8,local_18[1],1,0xff);
  }
  if (local_18[2] != 0) {
    FUN_10021a00(local_1c + -8 + param_3,param_4,8,8,0,0,8,8,local_18[2],0xff,1);
  }
  if (local_18[3] != 0) {
    FUN_100218f0(param_3,param_4 + 8,8,local_20 + -0x10,local_18[3],1,0xff);
  }
  if (local_18[4] != 0) {
    FUN_100218f0(param_3 + 8,param_4 + 8,local_1c + -0x10,local_20 + -0x10,local_18[4],1,0xff);
  }
  if (local_18[5] != 0) {
    FUN_100218f0(local_1c + -8 + param_3,param_4 + 8,8,local_20 + -0x10,local_18[5],1,0xff);
  }
  if (local_18[6] != 0) {
    FUN_10021a00(param_3,local_20 + -8 + param_4,8,8,0,0,8,8,local_18[6],0xff,1);
  }
  if (local_18[7] != 0) {
    FUN_100218f0(param_3 + 8,local_20 + -8 + param_4,local_1c + -0x10,8,local_18[7],1,0xff);
  }
  if (local_18[8] != 0) {
    FUN_10021a00(local_1c + -8 + param_3,local_20 + -8 + param_4,8,8,0,0,8,8,local_18[8],0xff,1);
  }
  FUN_10068be0(param_1,param_2 + 0x2c,param_3 + 5,param_4 + 5,0,*(undefined4 *)(param_2 + 0x28));
  FUN_100212e0();
  ExceptionList = local_10;
  return;
}


// ==== 10004ed0 FUN_10004ed0 depth=1 from=FUN_100326c0 callees=
// strings: 

void FUN_10004ed0(undefined4 param_1)

{
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1,&DAT_1022f8a0);
  return;
}


// ==== 10020d60 FUN_10020d60 depth=1 from=FUN_100326c0 callees=FUN_1003f630@1003f630
// strings: 10230d20=Default.WhiteTexture | 

void __thiscall
FUN_10020d60(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1003f630(L"Default.WhiteTexture",1);
  (**(code **)(**(int **)(param_1 + 0x34) + 0xac))
            (*(int *)(param_1 + 0x38) + param_2,*(int *)(param_1 + 0x3c) + param_3,param_4,param_5,
             uVar1,param_6);
  param_3 = *(int *)(param_1 + 0x3c) + param_3;
  if (*(int *)(param_1 + 0x58) < param_3 + param_5) {
    *(int *)(param_1 + 0x58) = param_3 + param_5;
  }
  if (param_3 < *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = param_3;
  }
  return;
}


// ==== 100323b0 FUN_100323b0 depth=1 from=FUN_100326c0 callees=FUN_101c19e0@101c19e0
// strings: 

void __fastcall FUN_100323b0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dc9b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x300) == -1) {
    FUN_101c19e0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004f5c0 FUN_1004f5c0 depth=1 from=FUN_100326c0 callees=
// strings: 

int __thiscall FUN_1004f5c0(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 8) < param_2) {
    return 0;
  }
  return *(int *)(param_1 + 4) + param_2 * 2;
}


// ==== 100223d0 FUN_100223d0 depth=1 from=FUN_100326c0 callees=CORE.DLL::appStrlen@EXTERNAL:000001b4 ENGINE.DLL::FL2TextAlignParser::GetLineBuffer@EXTERNAL:00000096 FUN_10015a70@10015a70 CORE.DLL::appStrncpy@EXTERNAL:000001ce FUN_10021620@10021620 ENGINE.DLL::FL2TextAlignParser::SetParserParam@EXTERNAL:00000095 FUN_10015ac0@10015ac0 FUN_10004ed0@10004ed0 FUN_10019740@10019740 ENGINE.DLL::FL2TextAlignParser::Clear@EXTERNAL:00000097
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_100223d0(ushort *param_1,ulong param_2,int param_3)

{
  ushort uVar1;
  UL2Font *pUVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  float fVar7;
  short sVar8;
  code *pcVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  ushort *puVar13;
  ushort *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined2 in_FPUControlWord;
  undefined4 uVar18;
  uint local_38;
  int local_2c;
  int local_28;
  short local_20;
  short sStack_1e;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  short sStack_16;
  undefined2 local_14;
  ushort uStack_12;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar16 = param_3;
  puVar11 = param_1;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101db418;
  uVar10 = DAT_103554c4 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_c;
  uVar17 = 0;
  if (((param_1 != (ushort *)0x0) && (DAT_103663c0 != 0)) &&
     (pUVar2 = *(UL2Font **)(DAT_103663c0 + 0x13c + param_3 * 4), pUVar2 != (UL2Font *)0x0)) {
    iVar12 = *(int *)GLanguageType_exref;
    if (((iVar12 == 1) || (iVar12 == 6)) && (DAT_103663cc != 0)) {
      param_1 = (ushort *)0x0;
      FL2TextAlignParser::Clear((FL2TextAlignParser *)DAT_103663cc);
      FL2TextAlignParser::SetParserParam
                ((FL2TextAlignParser *)DAT_103663cc,puVar11,param_2,pUVar2,0,0,1,0,
                 (FRenderInterface *)0x0,0);
      puVar11 = FL2TextAlignParser::GetLineBuffer
                          ((FL2TextAlignParser *)DAT_103663cc,(int *)&param_1);
      ExceptionList = local_c;
      return puVar11;
    }
    if (iVar12 != 5) {
      do {
        uVar1 = *puVar11;
        *(ushort *)(((int)&DAT_1035ffd0 - (int)param_1) + (int)puVar11) = uVar1;
        puVar11 = puVar11 + 1;
      } while (uVar1 != 0);
      puVar11 = &DAT_1035ffd0;
      do {
        puVar13 = puVar11;
        puVar11 = puVar13 + 1;
      } while (*puVar13 != 0);
      DAT_10360fd0 = (int)(puVar13 + -0x81affe8) >> 1;
      iVar16 = 0;
      local_38 = 0;
      DAT_10360fd4 = 0;
      puVar11 = &DAT_1035ffd0;
      DAT_1035efd0 = 0;
      uVar1 = DAT_1035ffd0;
      if (DAT_103663c0 != -0x13c) {
        while (uVar1 != 0) {
          uVar1 = *puVar11;
          puVar11 = puVar11 + 1;
          if (DAT_10360fd0 <= DAT_10360fd4) break;
          if (uVar1 == 0xd) {
            (&DAT_1035efd0)[iVar16] = 0xd;
LAB_100227fb:
            iVar16 = iVar16 + 1;
          }
          else {
            if (uVar1 == 10) {
              DAT_10360fd4 = DAT_10360fd4 + 1;
              (&DAT_1035efd0)[iVar16] = 10;
              iVar16 = iVar16 + 1;
              break;
            }
            if (0x1f < uVar1) {
              iVar12 = (**(code **)(*(int *)pUVar2 + 0x74))(uVar1,uVar10);
              if (iVar12 != 0) {
                fVar7 = (float)(int)local_38;
                if ((int)local_38 < 0) {
                  fVar7 = fVar7 + _DAT_10230f20;
                }
                param_1 = (ushort *)CONCAT22((short)(local_38 >> 0x10),in_FPUControlWord);
                local_38 = (uint)(longlong)ROUND(fVar7 + (float)*(int *)(iVar12 + 4));
                if (param_2 < local_38) break;
              }
              (&DAT_1035efd0)[iVar16] = uVar1;
              goto LAB_100227fb;
            }
          }
          DAT_10360fd4 = DAT_10360fd4 + 1;
          uVar1 = *puVar11;
        }
      }
      (&DAT_1035efd0)[iVar16] = 0;
      ExceptionList = local_c;
      return (ushort *)(-(uint)(iVar16 != 0) & 0x1035efd0);
    }
    FUN_10015a70();
    local_4 = 0;
    iVar12 = appStrlen(puVar11);
    lVar6 = (ulonglong)(iVar12 + 1) * 2;
    puVar13 = (ushort *)FUN_10004ed0(-(uint)((int)((ulonglong)lVar6 >> 0x20) != 0) | (uint)lVar6);
    FUN_10021620(puVar11,&local_2c,puVar13);
    puVar11 = puVar13;
    do {
      uVar1 = *puVar11;
      *(ushort *)(((int)&DAT_1035ffd0 - (int)puVar13) + (int)puVar11) = uVar1;
      puVar11 = puVar11 + 1;
    } while (uVar1 != 0);
    puVar11 = &DAT_1035ffd0;
    do {
      puVar14 = puVar11;
      puVar11 = puVar14 + 1;
    } while (*puVar14 != 0);
    DAT_10360fd0 = (int)(puVar14 + -0x81affe8) >> 1;
    DAT_1035efd0 = 0;
    piVar3 = *(int **)(DAT_103663c0 + 0x13c + iVar16 * 4);
    DAT_10360fd4 = 0;
    param_1 = (ushort *)0x0;
    if ((piVar3 != (int *)0x0) && (DAT_103663c0 != -0x13c)) {
      iVar16 = 0;
      if (0 < local_28) {
        iVar12 = 0;
        do {
          uVar4 = *(undefined4 *)(local_2c + 8 + iVar12);
          uVar18 = *(undefined4 *)(local_2c + iVar12);
          uVar5 = *(undefined4 *)(local_2c + 4 + iVar12);
          local_18 = (undefined2)uVar4;
          sStack_16 = (short)((uint)uVar4 >> 0x10);
          uVar10 = *(uint *)(local_2c + 0xc + iVar12);
          local_10 = *(void **)(local_2c + 0x10 + iVar12);
          local_14 = (undefined2)uVar10;
          uStack_12 = (ushort)(uVar10 >> 0x10);
          local_20 = (short)uVar18;
          sVar8 = local_20;
          sStack_1e = (short)((uint)uVar18 >> 0x10);
          local_1c = (undefined2)uVar5;
          uStack_1a = (undefined2)((uint)uVar5 >> 0x10);
          if (uStack_12 == 0) {
            if (sStack_1e == 0) {
              if (local_20 == 0) {
                uVar18 = CONCAT22(local_14,sStack_16);
                sVar8 = sStack_16;
                goto joined_r0x1002261b;
              }
            }
            else {
              iVar15 = (**(code **)(*piVar3 + 0x74))(CONCAT22(local_1c,sStack_1e));
              if (iVar15 != 0) {
                uVar17 = uVar17 + *(int *)(iVar15 + 4);
              }
joined_r0x1002261b:
              if (sVar8 == 0) goto LAB_1002262e;
            }
            iVar15 = (**(code **)(*piVar3 + 0x74))(uVar18);
            if (iVar15 != 0) {
              uVar17 = uVar17 + *(int *)(iVar15 + 4);
            }
LAB_1002262e:
            if (param_2 < uVar17) break;
            param_1 = (ushort *)((int)param_1 + 1);
            iVar15 = FUN_10015ac0();
          }
          else {
            iVar15 = (**(code **)(*piVar3 + 0x74))(uVar10 >> 0x10);
            if (iVar15 != 0) {
              uVar17 = uVar17 + *(int *)(iVar15 + 4);
            }
            if (uStack_12 == 0xd) {
              iVar15 = 1;
              param_1 = (ushort *)((int)param_1 + 1);
            }
            else {
              if (uStack_12 == 10) {
                param_1 = (ushort *)((int)param_1 + 1);
                DAT_10360fd4 = DAT_10360fd4 + 1;
                break;
              }
              if (0x1f < uStack_12) goto LAB_1002262e;
              iVar15 = 1;
              param_1 = (ushort *)((int)param_1 + 1);
            }
          }
          DAT_10360fd4 = DAT_10360fd4 + iVar15;
          iVar16 = iVar16 + 1;
          iVar12 = iVar12 + 0x14;
        } while (iVar16 < local_28);
      }
      iVar12 = 0;
      iVar16 = (int)param_1;
      if (0 < (int)param_1) {
        do {
          iVar15 = FUN_10015ac0();
          iVar12 = iVar12 + iVar15;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        if ((0 < iVar12) && (puVar13 != (ushort *)0x0)) {
          appStrncpy(&DAT_1035efd0,puVar13,iVar12 + 1);
          pcVar9 = GMalloc_exref;
          (&DAT_1035efd2)[iVar12] = 0;
          (**(code **)(**(int **)pcVar9 + 8))(puVar13);
          puStack_8 = (undefined1 *)0xffffffff;
          FUN_10019740();
          ExceptionList = local_10;
          return &DAT_1035efd0;
        }
      }
    }
    local_4 = 0xffffffff;
    FUN_10019740();
  }
  ExceptionList = local_c;
  return (ushort *)0x0;
}


// ==== 101b8ab0 FUN_101b8ab0 depth=1 from=FUN_100326c0 callees=FUN_10040090@10040090 FUN_1003f970@1003f970 FUN_100d1790@100d1790 FUN_1003fff0@1003fff0 CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10054240@10054240 FUN_10005c30@10005c30 FUN_100542c0@100542c0 FUN_10040230@10040230 FUN_10054cc0@10054cc0 FUN_100541c0@100541c0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10054f20@10054f20
// strings: 1029a5a8=SourceType | 1029a59c=Text | 1029a584=TooltipType | 10246284=Description | 1029a584=TooltipType | 1029a59c=Text | 

undefined4 __thiscall FUN_101b8ab0(int *param_1,FString *param_2,int param_3,int param_4)

{
  int iVar1;
  ushort *puVar2;
  FString *this;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1021a357;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10054240();
  if (param_1[6] != iVar1) {
    FUN_10054cc0();
  }
  iVar1 = FUN_100541c0();
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (param_3 != 0) {
    puVar2 = FString::operator*(param_2);
    if (puVar2 != (ushort *)0x0) {
      iVar1 = FString::Len(param_2);
      if (0 < iVar1) {
        FUN_1003f970();
        local_8._0_1_ = 1;
        FString::FString(local_34,(ushort *)L"SourceType");
        local_8._0_1_ = 2;
        FUN_10040090(local_34,0);
        local_8._0_1_ = 1;
        FString::~FString(local_34);
        if (param_4 == 0) {
          FString::FString(local_40,(ushort *)L"Text");
          local_8._0_1_ = 3;
          FString::FString(local_34,(ushort *)L"TooltipType");
          local_8._0_1_ = 4;
          FUN_10040230(local_34,local_40);
          local_8._0_1_ = 3;
          FString::~FString(local_34);
          this = local_40;
        }
        else {
          FString::FString(local_34,(ushort *)L"Description");
          local_8._0_1_ = 5;
          FString::FString(local_40,(ushort *)L"TooltipType");
          local_8._0_1_ = 6;
          FUN_10040230(local_40,local_34);
          local_8._0_1_ = 5;
          FString::~FString(local_40);
          this = local_34;
        }
        local_8._0_1_ = 1;
        FString::~FString(this);
        puVar2 = FString::operator*(param_2);
        FString::FString(local_34,puVar2);
        local_8._0_1_ = 7;
        FString::FString(local_40,(ushort *)L"Text");
        local_8._0_1_ = 8;
        FUN_10040230(local_40,local_34);
        local_8._0_1_ = 7;
        FString::~FString(local_40);
        local_8._0_1_ = 1;
        FString::~FString(local_34);
        *param_1 = 0;
        puVar4 = local_28;
        uVar3 = 0xb68;
        FUN_10005c30(0xb68,puVar4);
        FUN_100d1790(uVar3,puVar4);
        if (*param_1 != 0) {
          FUN_10054f20(param_1 + 1);
          FUN_100542c0(param_1[6]);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_1003fff0();
          ExceptionList = local_10;
          return 1;
        }
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_1003fff0();
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10054da0 FUN_10054da0 depth=1 from=FUN_100326c0 callees=CORE.DLL::FArray::FArray@EXTERNAL:00000184 CORE.DLL::FArray::Empty@EXTERNAL:000001b3
// strings: 

undefined4 * __fastcall FUN_10054da0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e1664;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FArray::FArray((FArray *)(param_1 + 0xb));
  local_8 = 2;
  *param_1 = 0;
  for (iVar1 = 0; iVar1 < (int)param_1[0xc]; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(param_1 + 0xb),4,0);
  param_1[9] = 0;
  param_1[10] = 1;
  param_1[0xe] = 0;
  ExceptionList = local_10;
  return param_1;
}


// ==== 10054cc0 FUN_10054cc0 depth=1 from=FUN_100326c0 callees=FUN_10012830@10012830 CORE.DLL::FArray::Empty@EXTERNAL:000001b3
// strings: 

void __fastcall FUN_10054cc0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  param_1[0xe] = 0;
  for (iVar1 = 0; iVar1 < (int)param_1[0xc]; iVar1 = iVar1 + 1) {
    if (*(int *)(param_1[0xb] + iVar1 * 4) != 0) {
      FUN_10012830(1);
    }
  }
  for (iVar1 = 0; iVar1 < (int)param_1[0xc]; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(param_1 + 0xb),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 100325f0 FUN_100325f0 depth=1 from=FUN_10033050 callees=FUN_100325c0@100325c0
// strings: 

void __fastcall FUN_100325f0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dc9f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  if (param_1[3] != 0) {
    FUN_100325c0(1);
    param_1[3] = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1003b890 FUN_1003b890 depth=1 from=FUN_1003c6f0 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100abe10@100abe10 FUN_101c19e0@101c19e0 FUN_10141550@10141550 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_10025df0@10025df0 FUN_10020bb0@10020bb0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10039a70@10039a70 CORE.DLL::FString::Mid@EXTERNAL:000001b2
// strings: 

int __thiscall FUN_1003b890(int param_1,int param_2)

{
  int iVar1;
  FString *pFVar2;
  ushort *puVar3;
  int unaff_EBX;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int iStack_38;
  FString local_34 [4];
  undefined1 local_30 [8];
  FString local_28 [4];
  undefined1 auStack_24 [12];
  void *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  local_10 = &LAB_101ddae2;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar4 = 0;
  local_4c = 0;
  if (param_2 < *(int *)(param_1 + 0x3d8)) {
    local_3c = 0;
    iVar1 = FUN_100abe10(DAT_103554c4 ^ (uint)&stack0xffffffa8);
    if (0 < iVar1) {
      do {
        if (local_4c == param_2) {
          ExceptionList = local_14;
          return iVar4;
        }
        iVar5 = 0;
        local_40 = 0;
        iVar1 = FUN_10039a70(iVar4);
        if (iVar1 != 0) {
          pFVar2 = (FString *)FUN_10039a70(iVar4);
          local_40 = FString::Len(pFVar2);
        }
        local_48 = 0;
        if (0 < local_40) {
          do {
            if ((((iVar4 == *(int *)(param_1 + 0x368)) && (local_48 == *(int *)(param_1 + 0x36c)))
                && (iVar1 = FUN_10025df0(), iVar1 == 0)) &&
               (((iVar1 = FUN_10141550(), iVar1 != 10 && (iVar1 = FUN_10141550(), iVar1 != 9)) &&
                ((iVar1 = FUN_10141550(), iVar1 != 0xb && (iVar1 = FUN_10141550(), iVar1 != 0xc)))))
               ) {
              pFVar2 = (FString *)(param_1 + 0x304);
              iVar6 = 0;
              iVar1 = FString::Len(pFVar2);
              iVar4 = local_3c;
              if (0 < iVar1) {
                do {
                  uVar14 = 1;
                  FString::Mid(pFVar2,(int)local_30,iVar6);
                  local_10 = (undefined1 *)0x0;
                  uVar13 = 0;
                  uVar11 = 0;
                  uVar10 = 0;
                  uVar9 = 0;
                  uVar8 = 0;
                  uVar7 = 0;
                  puVar3 = FString::operator*(local_34);
                  FUN_10020bb0(&local_3c,puVar3,uVar7,uVar8,uVar9,uVar10,uVar11,uVar13,uVar14);
                  iVar5 = iVar5 + local_3c;
                  iVar4 = FUN_101c19e0();
                  if (iVar4 + -0x24 < iVar5) {
                    unaff_EBX = unaff_EBX + 1;
                    iVar5 = 0;
                    if (unaff_EBX == param_2) {
                      local_10 = (undefined1 *)0xffffffff;
                      FString::~FString(local_34);
                      ExceptionList = local_18;
                      return local_40;
                    }
                    iVar6 = iVar6 + -1;
                  }
                  local_10 = (undefined1 *)0xffffffff;
                  FString::~FString(local_34);
                  iVar6 = iVar6 + 1;
                  iVar1 = FString::Len(pFVar2);
                  iVar4 = local_3c;
                } while (iVar6 < iVar1);
              }
            }
            iVar1 = FUN_10039a70(iVar4);
            if (iVar1 == 0) {
              iStack_38 = 0;
            }
            else {
              uVar14 = 1;
              puVar12 = auStack_24;
              iVar1 = local_48;
              pFVar2 = (FString *)FUN_10039a70(iVar4);
              FString::Mid(pFVar2,(int)puVar12,iVar1);
              local_10 = (undefined1 *)0x1;
              uVar13 = 0;
              uVar11 = 0;
              uVar10 = 0;
              uVar9 = 0;
              uVar8 = 0;
              uVar7 = 0;
              puVar3 = FString::operator*(local_28);
              FUN_10020bb0(&local_3c,puVar3,uVar7,uVar8,uVar9,uVar10,uVar11,uVar13,uVar14);
              local_10 = (undefined1 *)0xffffffff;
              FString::~FString(local_28);
            }
            iVar5 = iVar5 + iStack_38;
            iVar1 = FUN_101c19e0();
            if (iVar1 + -0x24 < iVar5) {
              local_4c = local_4c + 1;
              iVar5 = 0;
              if (local_4c == param_2) {
                ExceptionList = local_14;
                return iVar4;
              }
              local_48 = local_48 + -1;
            }
            local_48 = local_48 + 1;
          } while (local_48 < local_40);
        }
        local_4c = local_4c + 1;
        iVar4 = iVar4 + 1;
        local_3c = iVar4;
        iVar1 = FUN_100abe10();
      } while (iVar4 < iVar1);
    }
  }
  ExceptionList = local_14;
  return -1;
}


// ==== 10038320 FUN_10038320 depth=1 from=FUN_1003c6f0 callees=FUN_100217a0@100217a0 FUN_10021df0@10021df0 FUN_1003f630@1003f630 FUN_10141550@10141550 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_100218f0@100218f0 CORE.DLL::FString::Mid@EXTERNAL:000001b2 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_101c19e0@101c19e0 FUN_10020e80@10020e80 FUN_10020bb0@10020bb0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100212e0@100212e0 FUN_10024670@10024670
// strings: 10234750=Default.GrayTexture | 10230d20=Default.WhiteTexture | 10234750=Default.GrayTexture | 10234750=Default.GrayTexture | 

/* WARNING: Removing unreachable block (ram,0x10038805) */
/* WARNING: Removing unreachable block (ram,0x100389ef) */
/* WARNING: Removing unreachable block (ram,0x100389ff) */
/* WARNING: Removing unreachable block (ram,0x10038819) */
/* WARNING: Removing unreachable block (ram,0x100388b9) */
/* WARNING: Removing unreachable block (ram,0x100388c0) */
/* WARNING: Removing unreachable block (ram,0x10038962) */
/* WARNING: Removing unreachable block (ram,0x100388d0) */
/* WARNING: Removing unreachable block (ram,0x100389bf) */
/* WARNING: Removing unreachable block (ram,0x100389e3) */

void __thiscall
FUN_10038320(int *param_1,undefined4 param_2,undefined4 param_3,byte *param_4,byte *param_5,
            int param_6,int param_7,undefined4 param_8,int *param_9)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_40;
  int local_38;
  FString local_34 [4];
  undefined1 local_30 [8];
  FString aFStack_28 [4];
  undefined1 auStack_24 [8];
  FString aFStack_1c [4];
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 local_4;
  
  local_8 = 0x26;
  uStack_7 = 0x101dd6;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffff94;
  ExceptionList = &local_c;
  local_4 = 0;
  uVar19 = 0;
  uVar17 = 0;
  uVar15 = 0;
  uVar13 = 0;
  uVar11 = 0;
  uVar9 = 0;
  puVar2 = FString::operator*((FString *)(param_1 + 0xed));
  FUN_10020bb0(&local_38,puVar2,uVar9,uVar11,uVar13,uVar15,uVar17,uVar19,uVar1);
  local_40 = local_38;
  if ((local_38 != 0) && (iVar3 = FUN_10141550(), iVar3 == 6)) {
    local_40 = 0xc;
  }
  local_54 = 0;
  local_58 = 0;
  local_4c = 0;
  iVar3 = FUN_10024670();
  if (iVar3 != 0) {
    iVar4 = 0;
    if (0 < *(int *)(iVar3 + 0x42e0)) {
      piVar7 = (int *)(iVar3 + 0x32d8);
      do {
        if ((int)param_5 < *piVar7) {
          local_4c = iVar4 + -1;
          break;
        }
        iVar4 = iVar4 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar4 < *(int *)(iVar3 + 0x42e0));
    }
    local_5c = 0;
    iVar5 = FString::Len((FString *)&param_2);
    iVar4 = param_6;
    if (0 < iVar5) {
      param_5 = param_5 + iVar3 + 0x2ad8;
      param_6 = iVar3 + 0x32dc + local_4c * 4;
      do {
        iVar3 = param_1[0xd8] + local_54 + iVar4;
        pFVar6 = (FString *)FString::Mid((FString *)&param_2,(int)local_30,local_5c);
        local_8 = 1;
        uVar18 = 0xffffffff;
        uVar16 = 0;
        uVar14 = 0;
        uVar12 = 0;
        uVar10 = 0;
        uVar8 = 0;
        uVar19 = 0;
        uVar17 = 0;
        uVar15 = 0;
        uVar13 = 0;
        uVar11 = 0;
        uVar9 = 0;
        puVar2 = FString::operator*(pFVar6);
        local_54 = FUN_100217a0(param_1[0xd8] + local_58 + iVar4,param_6,0xffdcdcdc,puVar2,uVar9,
                                uVar11,uVar13,uVar15,uVar17,uVar19,uVar8,uVar10,uVar12,uVar14,uVar16
                                ,uVar18);
        local_8 = 0;
        FString::~FString(local_34);
        if (((*param_4 & 1) != 0) && (local_4c == 0)) {
          local_4c = 1;
          if (*param_9 == 0) {
            param_1[0xea] = param_1[0xd8] + local_58 + iVar4;
            param_1[0xeb] = param_7 * -0xf + -2;
            *param_9 = 1;
          }
          if (local_54 == 0) {
            local_5c = local_58;
          }
        }
        local_58 = local_58 + local_54;
        local_50 = param_1[0xd8] + local_58 + iVar4;
        if (*(byte **)param_5 == param_4 + local_40) {
          param_5 = param_5 + 4;
          local_50 = local_50 + -1;
        }
        iVar5 = (**(code **)(*param_1 + 0x74))();
        if (iVar5 != 0) {
          param_9 = (int *)0x0;
          if (((*param_5 & 1) != 0) && (0 < local_50)) {
            uVar13 = 0xff;
            uVar11 = 1;
            uVar9 = FUN_1003f630(L"Default.GrayTexture",1);
            FUN_100218f0(iVar3,param_7,local_4c - iVar3,0xc,uVar9,uVar11,uVar13);
            pFVar6 = (FString *)FString::Mid((FString *)&param_2,(int)auStack_24,local_5c);
            local_8 = 2;
            uVar18 = 0xffffffff;
            uVar16 = 0;
            uVar14 = 0;
            uVar12 = 0;
            uVar10 = 0;
            uVar8 = 0;
            uVar19 = 0;
            uVar17 = 0;
            uVar15 = 0;
            uVar13 = 0;
            uVar11 = 0;
            uVar9 = 0;
            puVar2 = FString::operator*(pFVar6);
            FUN_100217a0(iVar3,param_6,0xff000000,puVar2,uVar9,uVar11,uVar13,uVar15,uVar17,uVar19,
                         uVar8,uVar10,uVar12,uVar14,uVar16,uVar18);
            local_8 = 0;
            FString::~FString(aFStack_28);
            param_8 = 1;
          }
          if ((*param_5 & 4) != 0) {
            FUN_10020e80(iVar3,param_7 + 0xd,local_4c,param_7 + 0xd,0xffff0000,0);
            param_9 = (int *)((int)param_9 + 1);
          }
          if ((param_9 == (int *)0x0) &&
             ((iVar5 = FUN_10141550(), iVar5 == 5 || (iVar5 = FUN_10141550(), iVar5 == 7)))) {
            pFVar6 = (FString *)FString::Mid((FString *)&param_2,(int)auStack_18,local_5c);
            local_8 = 3;
            uVar18 = 0xffffffff;
            uVar16 = 0;
            uVar14 = 0;
            uVar12 = 0;
            uVar10 = 0;
            uVar8 = 0;
            uVar19 = 0;
            uVar17 = 0;
            uVar15 = 0;
            uVar13 = 0;
            uVar11 = 0;
            uVar9 = 0;
            puVar2 = FString::operator*(pFVar6);
            FUN_100217a0(iVar3,param_6,0xffff0000,puVar2,uVar9,uVar11,uVar13,uVar15,uVar17,uVar19,
                         uVar8,uVar10,uVar12,uVar14,uVar16,uVar18);
            local_8 = 0;
            FString::~FString(aFStack_1c);
          }
        }
        param_5 = param_5 + 1;
        local_5c = local_5c + 1;
        iVar3 = FString::Len((FString *)&param_2);
      } while (local_5c < iVar3);
    }
    iVar3 = FString::Len((FString *)&param_2);
    if (((0 < iVar3) && (iVar3 = FUN_10141550(), iVar3 != 5)) &&
       (iVar3 = FUN_10141550(), iVar3 != 7)) {
      uVar19 = 0;
      uVar17 = 0;
      uVar15 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      puVar2 = FString::operator*((FString *)&param_2);
      FUN_10020bb0(&local_38,puVar2,uVar9,uVar11,uVar13,uVar15,uVar17,uVar19);
      iVar3 = 0;
      if (0 < local_38) {
        if (local_38 < 1) goto LAB_100387e6;
        do {
          FUN_100217a0(iVar4 + iVar3,param_7 + 3,0xffdcdcdc,&DAT_10234780,0,0,0,0,0,0,0,0,0,0,0,
                       0xffffffff);
LAB_100387e6:
          iVar3 = iVar3 + 3;
        } while (iVar3 < local_38);
      }
    }
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&param_2);
  ExceptionList = local_c;
  return;
}


// ==== 10038aa0 FUN_10038aa0 depth=1 from=FUN_1003c6f0 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_10020bb0@10020bb0 FUN_100218f0@100218f0 CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 

void __thiscall FUN_10038aa0(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101dd659;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  local_4 = 0;
  uVar16 = 0;
  uVar14 = 0;
  uVar12 = 0;
  uVar10 = 0;
  uVar8 = 0;
  uVar6 = 0;
  puVar2 = FString::operator*((FString *)&stack0x00000004);
  FUN_10020bb0(local_14,puVar2,uVar6,uVar8,uVar10,uVar12,uVar14,uVar16,uVar1);
  uVar6 = in_stack_00000014;
  iVar3 = in_stack_00000010;
  if (*(int *)(param_1 + 0x370) == 0) {
    uVar17 = 0xffffffff;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = 0;
    puVar2 = FString::operator*((FString *)&stack0x00000004);
    iVar3 = *(int *)(param_1 + 0x360) + in_stack_00000010;
    uVar8 = 0xffdcdcdc;
    uVar6 = in_stack_00000014;
  }
  else {
    FUN_100218f0(*(int *)(param_1 + 0x360) + in_stack_00000010,in_stack_00000014,local_14[0],0xc,
                 *(undefined4 *)(param_1 + 0x2dc),1,0xff);
    uVar17 = 0xffffffff;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = 0;
    puVar2 = FString::operator*((FString *)&stack0x00000004);
    uVar8 = 0xff000000;
    iVar3 = *(int *)(param_1 + 0x360) + iVar3;
  }
  FUN_100217a0(iVar3,uVar6,uVar8,puVar2,uVar10,uVar12,uVar14,uVar16,uVar4,uVar5,uVar7,uVar9,uVar11,
               uVar13,uVar15,uVar17);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 1003b4a0 FUN_1003b4a0 depth=1 from=FUN_1003c6f0 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100abe10@100abe10 FUN_101c19e0@101c19e0 FUN_10141550@10141550 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_10025df0@10025df0 FUN_10020bb0@10020bb0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10039a70@10039a70 CORE.DLL::FString::Mid@EXTERNAL:000001b2
// strings: 

int __thiscall FUN_1003b4a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  FString *pFVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_30;
  int local_2c;
  FString local_28 [4];
  FString local_24 [4];
  undefined1 local_20 [4];
  FString aFStack_1c [4];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_101ddaab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar7 = 0;
  iVar1 = FUN_100abe10(DAT_103554c4 ^ (uint)&stack0xffffffbc);
  if (param_3 < iVar1) {
    if (((*(int *)(param_1 + 0x388) != 0) && (iVar1 = FUN_10025df0(), iVar1 == 0)) &&
       (param_3 == *(int *)(param_1 + 0x368))) {
      iVar1 = FUN_10141550();
      if (((iVar1 != 10) && (iVar1 = FUN_10141550(), iVar1 != 9)) &&
         ((iVar1 = FUN_10141550(), iVar1 != 0xb && (iVar1 = FUN_10141550(), iVar1 != 0xc)))) {
        iVar1 = FString::Len((FString *)(param_1 + 0x304));
        if (param_2 < iVar1) {
          do {
            uVar15 = 1;
            FString::Mid((FString *)(param_1 + 0x304),(int)local_24,param_2);
            local_8 = (undefined1 *)0x0;
            uVar14 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            puVar2 = FString::operator*(local_28);
            FUN_10020bb0(&local_30,puVar2,uVar8,uVar9,uVar10,uVar11,uVar12,uVar14,uVar15);
            iVar7 = iVar7 + local_30;
            iVar1 = FUN_101c19e0();
            if (iVar1 + -0x24 < iVar7) {
              local_8 = (undefined1 *)0xffffffff;
              FString::~FString(local_28);
              ExceptionList = local_c;
              return param_2;
            }
            local_8 = (undefined1 *)0xffffffff;
            FString::~FString(local_28);
            param_2 = param_2 + 1;
          } while (param_2 < unaff_EBX);
        }
      }
      param_2 = *(int *)(param_1 + 0x36c);
    }
    pFVar3 = (FString *)FUN_10039a70(param_3);
    iVar4 = FString::Len(pFVar3);
    for (iVar1 = param_2; local_30 = iVar1, iVar1 < iVar4 + 1; iVar1 = iVar1 + 1) {
      if ((((param_3 == *(int *)(param_1 + 0x368)) && (*(int *)(param_1 + 0x388) == 0)) &&
          ((iVar1 == *(int *)(param_1 + 0x36c) &&
           ((((iVar5 = FUN_10025df0(), iVar5 == 0 && (iVar5 = FUN_10141550(), iVar5 != 10)) &&
             (iVar5 = FUN_10141550(), iVar5 != 9)) &&
            ((iVar5 = FUN_10141550(), iVar5 != 0xb && (iVar5 = FUN_10141550(), iVar5 != 0xc))))))))
         && (*(int *)(param_1 + 0x36c) != param_2)) {
        pFVar3 = (FString *)(param_1 + 0x304);
        iVar6 = 0;
        iVar5 = FString::Len(pFVar3);
        iVar1 = local_30;
        if (0 < iVar5) {
          do {
            uVar15 = 1;
            FString::Mid(pFVar3,(int)local_20,iVar6);
            uStack_4 = 1;
            uVar14 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            puVar2 = FString::operator*(local_24);
            FUN_10020bb0(&local_2c,puVar2,uVar8,uVar9,uVar10,uVar11,uVar12,uVar14,uVar15);
            iVar7 = iVar7 + local_2c;
            iVar1 = FUN_101c19e0();
            if (iVar1 + -0x24 < iVar7) {
              *(undefined4 *)(param_1 + 0x388) = 1;
              uStack_4 = 0xffffffff;
              FString::~FString(local_24);
              ExceptionList = local_c;
              return iVar6;
            }
            uStack_4 = 0xffffffff;
            FString::~FString(local_24);
            iVar6 = iVar6 + 1;
            iVar5 = FString::Len(pFVar3);
            iVar1 = local_30;
          } while (iVar6 < iVar5);
        }
      }
      iVar5 = FUN_10039a70(param_3);
      if (iVar5 == 0) {
        local_2c = 0;
      }
      else {
        uVar15 = 1;
        puVar13 = local_18;
        iVar5 = iVar1;
        pFVar3 = (FString *)FUN_10039a70(param_3);
        FString::Mid(pFVar3,(int)puVar13,iVar5);
        local_8 = (undefined1 *)0x2;
        uVar14 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        puVar2 = FString::operator*(aFStack_1c);
        FUN_10020bb0(&local_30,puVar2,uVar8,uVar9,uVar10,uVar11,uVar12,uVar14,uVar15);
        local_8 = (undefined1 *)0xffffffff;
        FString::~FString(aFStack_1c);
      }
      iVar7 = iVar7 + local_2c;
      iVar5 = FUN_101c19e0();
      if (iVar5 + -0x24 < iVar7) {
        *(undefined4 *)(param_1 + 0x388) = 0;
        ExceptionList = local_c;
        return iVar1;
      }
    }
    if (((param_3 + 1 == *(int *)(param_1 + 0x368)) && (*(int *)(param_1 + 0x36c) == 0)) &&
       (iVar7 = FUN_10025df0(), iVar7 == 0)) {
      *(undefined4 *)(param_1 + 0x388) = 1;
      iVar7 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x388) = 0;
      iVar7 = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x388) = 0;
    iVar7 = -1;
  }
  ExceptionList = local_c;
  return iVar7;
}


// ==== 10038fd0 FUN_10038fd0 depth=1 from=FUN_1003c6f0 callees=FUN_100217a0@100217a0 CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::appFailAssert@EXTERNAL:0000018a CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_1003f630@1003f630 FUN_10141550@10141550 FUN_100246a0@100246a0 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_100218f0@100218f0 FUN_101c1ed6@101c1ed6 CORE.DLL::FString::Mid@EXTERNAL:000001b2 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10007b80@10007b80 FUN_100246c0@100246c0 FUN_100086c0@100086c0 FUN_10025df0@10025df0 FUN_10058770@10058770 FUN_10020bb0@10020bb0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10024670@10024670
// strings: 1023d068=.\Src\NMultiEdit.cpp | 1023d058=m_pIMEManager | 1023d068=.\Src\NMultiEdit.cpp | 1023d04c=pChineseIME | 10230d20=Default.WhiteTexture | 

/* WARNING: Removing unreachable block (ram,0x10039330) */
/* WARNING: Removing unreachable block (ram,0x10039341) */
/* WARNING: Removing unreachable block (ram,0x1003934e) */
/* WARNING: Removing unreachable block (ram,0x10039366) */
/* WARNING: Removing unreachable block (ram,0x10039381) */
/* WARNING: Removing unreachable block (ram,0x10039397) */
/* WARNING: Removing unreachable block (ram,0x1003939b) */
/* WARNING: Removing unreachable block (ram,0x100393b8) */
/* WARNING: Removing unreachable block (ram,0x100393cd) */

void __thiscall
FUN_10038fd0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7,undefined4 param_8,uint param_9)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ushort *puVar4;
  int iVar5;
  FString *pFVar6;
  code *pcVar7;
  int unaff_EBX;
  int unaff_EBP;
  int iVar8;
  int iVar9;
  ushort in_FPUControlWord;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 local_44;
  int local_3c;
  FString local_38 [4];
  FString local_34 [4];
  float local_30;
  float local_2c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *local_8;
  uint local_4;
  
  local_8 = &LAB_101dd76d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar8 = 0;
  local_4 = 0;
  iVar1 = FUN_10025df0(DAT_103554c4 ^ (uint)&stack0xffffff9c);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_100246a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x13c))();
    }
    goto LAB_10039816;
  }
  local_18 = 0;
  local_14 = 0.0;
  local_1c = 0;
  local_10 = 0.0;
  piVar2 = (int *)FUN_100246c0();
  local_44 = CONCAT44(local_44._4_4_,piVar2);
  if (piVar2 != (int *)0x0) {
    FUN_10058770(&local_1c);
  }
  piVar3 = (int *)FUN_100246a0();
  iVar1 = FUN_10141550();
  if ((iVar1 == 10) || (iVar1 = FUN_10141550(), iVar1 == 9)) {
    iVar1 = param_6;
    param_1[0xea] = param_1[0xd8] + 0x69 + param_6;
    param_1[0xeb] = param_7 + 0xf;
    puVar4 = FString::operator*((FString *)&param_2);
    FUN_100086c0(puVar4);
    (**(code **)(*piVar3 + 0xc0))(param_1[0xd8] + iVar1,param_1[0xeb],100,0xf,0,0,3);
    (**(code **)(*piVar3 + 0x138))();
    if (piVar2 != (int *)0x0) {
      uVar11 = (undefined4)(longlong)ROUND(local_2c);
      local_8 = (undefined1 *)CONCAT22(local_8._2_2_,in_FPUControlWord);
      uVar10 = (undefined4)(longlong)ROUND(local_30);
LAB_1003976b:
      local_c = (void *)(in_FPUControlWord | 0xc00);
      (**(code **)(*piVar2 + 0xc0))(param_1[0xea],param_1[0xeb],uVar10,uVar11,0,0,3);
    }
LAB_10039786:
    iVar8 = (**(code **)(*param_1 + 0x74))();
    if ((iVar8 != 0) && (param_1[0xdc] != 0)) {
      FUN_100217a0(param_1[0xd8] + -2 + iVar1,param_7,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0,0,0
                   ,0xffffffff);
    }
  }
  else {
    iVar1 = FUN_10141550();
    if ((iVar1 == 0xb) || (iVar1 = FUN_10141550(), iVar1 == 0xc)) {
      iVar1 = param_6;
      param_1[0xea] = param_1[0xd8] + param_6 + 0x69;
      param_1[0xeb] = param_7 + 0xf;
      (**(code **)(*piVar3 + 0xc0))(param_1[0xd8] + param_6,param_7 + 0xf,100,0xf,0,0,3);
      (**(code **)(*piVar3 + 0x138))();
      if (piVar2 != (int *)0x0) {
        uVar11 = (undefined4)(longlong)ROUND(local_2c);
        local_8 = (undefined1 *)CONCAT22(local_8._2_2_,in_FPUControlWord);
        uVar10 = (undefined4)(longlong)ROUND(local_30);
        goto LAB_1003976b;
      }
      goto LAB_10039786;
    }
    iVar1 = FUN_10141550();
    if (iVar1 == 8) {
      uVar21 = 0xffffffff;
      uVar20 = 0;
      uVar19 = 0;
      uVar18 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      puVar4 = FString::operator*((FString *)&param_2);
      iVar1 = param_7;
      FUN_100217a0(param_1[0xd8] + param_6,param_7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12,uVar13,
                   uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21);
      FString::FString(local_34);
      local_4 = CONCAT31(local_4._1_3_,1);
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      puVar4 = FString::operator*((FString *)&param_2);
      FUN_10020bb0(&local_3c,puVar4,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
      if (0 < local_3c) {
        if (local_3c < 1) goto LAB_10039186;
        do {
          FUN_100217a0(param_1[0xd8] + iVar8 + -2 + param_6,iVar1 + 3,0xffdcdcdc,&DAT_10234780,0,0,0
                       ,0,0,0,0,0,0,0,0,0xffffffff);
LAB_10039186:
          iVar8 = iVar8 + 3;
        } while (iVar8 < local_3c);
      }
      if (param_1[0xb6] == 0) {
        appFailAssert("m_pIMEManager",".\\Src\\NMultiEdit.cpp",0x49c);
      }
      uVar10 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCChineseIME::RTTI_Type_Descriptor,0);
      iVar8 = FUN_101c1ed6(uVar10);
      if (iVar8 == 0) {
        appFailAssert("pChineseIME",".\\Src\\NMultiEdit.cpp",0x49e);
      }
      iVar9 = 0;
      iVar5 = FString::Len((FString *)&param_2);
      if (0 < iVar5) {
        param_7 = iVar8 + 0x2ad8 + param_5;
        do {
          uVar16 = 1;
          pFVar6 = (FString *)FString::Mid((FString *)&param_2,(int)local_28,iVar9);
          local_8._0_1_ = 2;
          FString::operator=(local_38,pFVar6);
          local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
          FString::~FString((FString *)&local_2c);
          uVar15 = 0;
          uVar14 = 0;
          uVar13 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          puVar4 = FString::operator*(local_38);
          FUN_10020bb0((int)&local_44 + 4,puVar4,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16);
          if ((*(char *)(param_6 + iVar9) == '\x01') || (*(char *)(iVar9 + 0x2ad8) == '\0')) {
            param_1[0xea] = param_1[0xd8] + unaff_EBX + 5 + param_5;
            param_1[0xeb] = iVar1 + 0xf;
            break;
          }
          unaff_EBX = unaff_EBX + local_44._4_4_;
          iVar9 = iVar9 + 1;
          iVar8 = FString::Len((FString *)&stack0x00000000);
        } while (iVar9 < iVar8);
      }
      uVar16 = 1;
      pFVar6 = (FString *)FString::Mid((FString *)&param_2,(int)local_28,iVar9);
      local_8._0_1_ = 3;
      FString::operator=(local_38,pFVar6);
      local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
      FString::~FString((FString *)&local_2c);
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      puVar4 = FString::operator*(local_38);
      FUN_10020bb0((int)&local_44 + 4,puVar4,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16);
      uVar10 = local_44._4_4_;
      uVar13 = 0xff;
      uVar12 = 1;
      uVar11 = FUN_1003f630(L"Default.WhiteTexture",1);
      FUN_100218f0(param_1[0xd8] + unaff_EBX + param_5,iVar1,uVar10,0xc,uVar11,uVar12,uVar13);
      pFVar6 = (FString *)FString::Mid((FString *)&stack0x00000000,(int)&local_2c,iVar9);
      local_c._0_1_ = 4;
      uVar21 = 0xffffffff;
      uVar20 = 0;
      uVar19 = 0;
      uVar18 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      puVar4 = FString::operator*(pFVar6);
      FUN_100217a0(param_1[0xd8] + unaff_EBP + param_4,iVar1,0xff000000,puVar4,uVar10,uVar11,uVar12,
                   uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21);
      local_c = (void *)CONCAT31(local_c._1_3_,1);
      FString::~FString((FString *)&local_30);
      puVar4 = FString::operator*((FString *)(param_1 + 0xed));
      FUN_100086c0(puVar4);
      (**(code **)(*piVar3 + 0xc0))(param_1[0xea],param_1[0xeb],0x32,0xf,0,0,3);
      iVar1 = FString::Len((FString *)(param_1 + 0xed));
      if (iVar1 == 0) {
        pcVar7 = *(code **)(*piVar3 + 0x13c);
      }
      else {
        pcVar7 = *(code **)(*piVar3 + 0x138);
      }
      (*pcVar7)();
      if ((int *)local_44 != (int *)0x0) {
        iVar1 = *(int *)local_44;
        local_44._0_4_ = (int *)(longlong)ROUND(local_10);
        uVar10 = (int *)local_44;
        param_6 = CONCAT22(param_6._2_2_,in_FPUControlWord);
        param_9 = in_FPUControlWord | 0xc00;
        local_44 = (longlong)ROUND(local_14);
        (**(code **)(iVar1 + 0xc0))(param_1[0xea],param_1[0xeb],(int *)local_44,uVar10,0,0,3);
      }
      local_4 = local_4 & 0xffffff00;
      FString::~FString(local_34);
    }
  }
  iVar1 = FUN_10141550();
  if (iVar1 == 10) {
    FUN_10007b80(1);
  }
  else {
    FUN_10007b80(0);
  }
LAB_10039816:
  local_4 = 0xffffffff;
  FString::~FString((FString *)&param_2);
  ExceptionList = local_c;
  return;
}


// ==== 10037e10 FUN_10037e10 depth=1 from=FUN_1003c6f0 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_10020e80@10020e80 CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10020bb0@10020bb0 FUN_10024670@10024670 CORE.DLL::FString::Mid@EXTERNAL:000001b2
// strings: 

/* WARNING: Removing unreachable block (ram,0x10038013) */
/* WARNING: Removing unreachable block (ram,0x10038069) */

void __thiscall FUN_10037e10(int *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int *in_stack_00000024;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int local_64;
  byte *local_60;
  undefined4 *local_5c;
  int local_54;
  int local_48;
  int iStack_44;
  FString aFStack_40 [4];
  FString local_3c [8];
  FString local_34 [4];
  undefined1 local_30 [8];
  FString aFStack_28 [4];
  undefined1 auStack_24 [4];
  FString aFStack_20 [4];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *local_8;
  uint local_4;
  
  local_8 = &LAB_101dd5c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  local_5c = (undefined4 *)0x0;
  iVar1 = FUN_10024670(DAT_103554c4 ^ (uint)&stack0xffffff8c);
  if (iVar1 != 0) {
    local_54 = 0;
    FString::FString(local_3c);
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x42e0)) {
      piVar6 = (int *)(iVar1 + 0x32d8);
      do {
        if (in_stack_00000010 < *piVar6) break;
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x42e0));
    }
    local_64 = 0;
    iVar2 = FString::Len((FString *)&stack0x00000004);
    if (0 < iVar2) {
      local_60 = (byte *)(iVar1 + 0x2ad8 + in_stack_00000010);
      local_48 = -0x2ad7 - iVar1;
      do {
        if ((((*local_60 & 1) != 0) && (local_54 == 0)) && (*in_stack_00000024 == 0)) {
          param_1[0xea] = (int)local_5c + in_stack_00000014 + param_1[0xd8];
          param_1[0xeb] = in_stack_0000001c * 0xf + 2;
          *in_stack_00000024 = 1;
        }
        pbVar7 = local_60 + local_48;
        uVar22 = 1;
        iVar2 = (int)local_5c + in_stack_00000014 + param_1[0xd8];
        pFVar3 = (FString *)
                 FString::Mid((FString *)(param_1 + 0xc1),(int)local_30,(int)(pbVar7 + -1));
        local_8._0_1_ = 2;
        uVar21 = 0xffffffff;
        uVar20 = 0;
        uVar19 = 0;
        uVar18 = 0;
        uVar17 = 0;
        uVar16 = 0;
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = FString::operator*(pFVar3);
        local_54 = FUN_100217a0(iVar2,in_stack_00000014,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12,
                                uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21);
        local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
        FString::~FString(local_34);
        local_60 = local_60 + local_54;
        pbVar8 = local_60 + in_stack_00000010 + param_1[0xd8];
        if ((byte *)*local_5c == pbVar7) {
          local_5c = local_5c + 1;
          pbVar8 = pbVar8 + -1;
        }
        iVar5 = (**(code **)(*param_1 + 0x74))(uVar22);
        if (iVar5 != 0) {
          if ((*local_60 & 2) != 0) {
            FUN_10020e80(iVar2,in_stack_00000018 + 0xd,pbVar8,in_stack_00000018 + 0xd,0xffdcdcdc,0);
          }
          if ((*local_60 & 4) != 0) {
            FUN_10020e80(iVar2,in_stack_00000018 + 0xd,pbVar8,in_stack_00000018 + 0xd,0xffff0000,0);
          }
        }
        local_60 = local_60 + 1;
        local_64 = local_64 + 1;
        iVar2 = FString::Len((FString *)&stack0x00000004);
      } while (local_64 < iVar2);
    }
    iVar9 = 0;
    in_stack_00000024 = (int *)0x0;
    local_64 = 0;
    iVar5 = FString::Len((FString *)&stack0x00000004);
    iVar2 = in_stack_00000010;
    if (0 < iVar5) {
      do {
        if (*(char *)(iVar1 + 0x2ad8 + iVar2) == '\0') {
          if ((local_64 == 0) || (*(char *)(iVar1 + 0x2ad7 + iVar2) != '\0')) {
            iVar1 = local_64;
            pFVar3 = (FString *)
                     FString::Mid((FString *)(param_1 + 0xc1),(int)auStack_24,in_stack_00000010);
            local_8._0_1_ = 3;
            FString::operator=(aFStack_40,pFVar3);
            local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
            FString::~FString(aFStack_28);
            uVar15 = 0;
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar4 = FString::operator*(aFStack_40);
            FUN_10020bb0(&local_48,puVar4,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,iVar1);
            in_stack_00000020 = local_48;
            pFVar3 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)auStack_1c,iVar2);
            local_c._0_1_ = 4;
            FString::operator=((FString *)&iStack_44,pFVar3);
            local_c = (void *)CONCAT31(local_c._1_3_,1);
            FString::~FString(aFStack_20);
            FString::operator*((FString *)&iStack_44);
            FUN_10020bb0();
            iVar1 = local_54;
          }
          else {
            pFVar3 = (FString *)FString::Mid((FString *)(param_1 + 0xc1),(int)local_30,iVar2);
            local_8._0_1_ = 5;
            FString::operator=(aFStack_40,pFVar3);
            local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
            FString::~FString(local_34);
            FString::operator*(aFStack_40);
            FUN_10020bb0();
          }
          iVar9 = iVar9 + iStack_44;
        }
        local_64 = local_64 + 1;
        iVar5 = FString::Len((FString *)&stack0x00000004);
        iVar2 = iVar2 + 1;
      } while (local_64 < iVar5);
      if ((0 < iVar9) && (iVar1 = 0, 0 < iVar9)) {
        if (iVar9 < 1) goto LAB_100382db;
        do {
          FUN_100217a0((int)in_stack_00000024 + in_stack_00000014 + param_1[0xd8] + iVar1,
                       in_stack_00000018 + 3,0xffdcdcdc,&DAT_10234780,0,0,0,0,0,0,0,0,0,0,0,
                       0xffffffff);
LAB_100382db:
          iVar1 = iVar1 + 3;
        } while (iVar1 < iVar9);
      }
    }
    local_4 = local_4 & 0xffffff00;
    FString::~FString(local_3c);
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 1003b100 FUN_1003b100 depth=1 from=FUN_1003c6f0 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100abe10@100abe10 FUN_101c19e0@101c19e0 FUN_10141550@10141550 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_10025df0@10025df0 FUN_10020bb0@10020bb0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10039a70@10039a70 CORE.DLL::FString::Mid@EXTERNAL:000001b2
// strings: 

int __thiscall FUN_1003b100(int param_1,int param_2)

{
  int iVar1;
  FString *pFVar2;
  ushort *puVar3;
  int unaff_EBX;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int iStack_38;
  FString local_34 [4];
  undefined1 local_30 [8];
  FString local_28 [4];
  undefined1 auStack_24 [12];
  void *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  local_10 = &LAB_101dda72;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_40 = 0;
  local_48 = 0;
  if (param_2 < *(int *)(param_1 + 0x3d8)) {
    iVar4 = 0;
    local_3c = 0;
    uVar7 = FUN_100abe10(DAT_103554c4 ^ (uint)&stack0xffffffa8);
    local_40 = (int)((ulonglong)uVar7 >> 0x20);
    local_4c = param_1;
    if (0 < (int)uVar7) {
      do {
        if (local_48 == param_2) {
          if ((iVar4 == *(int *)(local_4c + 0x368)) && (*(int *)(local_4c + 0x36c) == local_40)) {
            iVar4 = FUN_10025df0();
            if (iVar4 == 0) {
              *(undefined4 *)(local_4c + 0x388) = 1;
              ExceptionList = local_14;
              return 0;
            }
            local_40 = 0;
          }
          *(int *)(local_4c + 0x388) = local_40;
          ExceptionList = local_14;
          return 0;
        }
        iVar5 = 0;
        iVar1 = FUN_10039a70(iVar4);
        if (iVar1 != 0) {
          pFVar2 = (FString *)FUN_10039a70(iVar4);
          local_40 = FString::Len(pFVar2);
          local_40 = local_40 + 1;
        }
        local_44 = 0;
        if (0 < local_40) {
          do {
            if ((((iVar4 == *(int *)(local_4c + 0x368)) && (local_44 == *(int *)(local_4c + 0x36c)))
                && (iVar1 = FUN_10025df0(), iVar1 == 0)) &&
               (((iVar1 = FUN_10141550(), iVar1 != 10 && (iVar1 = FUN_10141550(), iVar1 != 9)) &&
                ((iVar1 = FUN_10141550(), iVar1 != 0xb && (iVar1 = FUN_10141550(), iVar1 != 0xc)))))
               ) {
              pFVar2 = (FString *)(local_4c + 0x304);
              iVar6 = 0;
              iVar1 = FString::Len(pFVar2);
              iVar4 = local_3c;
              if (0 < iVar1) {
                do {
                  uVar15 = 1;
                  FString::Mid(pFVar2,(int)local_30,iVar6);
                  local_10 = (undefined1 *)0x0;
                  uVar14 = 0;
                  uVar12 = 0;
                  uVar11 = 0;
                  uVar10 = 0;
                  uVar9 = 0;
                  uVar8 = 0;
                  puVar3 = FString::operator*(local_34);
                  FUN_10020bb0(&local_3c,puVar3,uVar8,uVar9,uVar10,uVar11,uVar12,uVar14,uVar15);
                  iVar5 = iVar5 + local_3c;
                  iVar4 = FUN_101c19e0();
                  if (iVar4 + -0x24 < iVar5) {
                    local_4c = local_4c + 1;
                    iVar5 = 0;
                    if (local_4c == param_2) {
                      *(undefined4 *)(unaff_EBX + 0x388) = 1;
                      local_10 = (undefined1 *)0xffffffff;
                      FString::~FString(local_34);
                      ExceptionList = local_18;
                      return iVar6;
                    }
                    iVar6 = iVar6 + -1;
                  }
                  local_10 = (undefined1 *)0xffffffff;
                  FString::~FString(local_34);
                  iVar6 = iVar6 + 1;
                  iVar1 = FString::Len(pFVar2);
                  iVar4 = local_3c;
                } while (iVar6 < iVar1);
              }
            }
            iVar1 = FUN_10039a70(iVar4);
            if (iVar1 == 0) {
              iStack_38 = 0;
            }
            else {
              uVar15 = 1;
              puVar13 = auStack_24;
              iVar1 = local_44;
              pFVar2 = (FString *)FUN_10039a70(iVar4);
              FString::Mid(pFVar2,(int)puVar13,iVar1);
              local_10 = (undefined1 *)0x1;
              uVar14 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              uVar9 = 0;
              uVar8 = 0;
              puVar3 = FString::operator*(local_28);
              FUN_10020bb0(&local_3c,puVar3,uVar8,uVar9,uVar10,uVar11,uVar12,uVar14,uVar15);
              local_10 = (undefined1 *)0xffffffff;
              FString::~FString(local_28);
            }
            iVar5 = iVar5 + iStack_38;
            iVar1 = FUN_101c19e0();
            if (iVar1 + -0x24 < iVar5) {
              local_48 = local_48 + 1;
              iVar5 = 0;
              if (local_48 == param_2) {
                *(undefined4 *)(local_4c + 0x388) = 0;
                ExceptionList = local_14;
                return local_44;
              }
              local_44 = local_44 + -1;
            }
            local_44 = local_44 + 1;
          } while (local_44 < local_40);
        }
        local_48 = local_48 + 1;
        iVar4 = iVar4 + 1;
        local_3c = iVar4;
        iVar1 = FUN_100abe10();
        local_40 = 0;
        param_1 = local_4c;
      } while (iVar4 < iVar1);
    }
  }
  *(int *)(param_1 + 0x388) = local_40;
  ExceptionList = local_14;
  return -1;
}


// ==== 10039a70 FUN_10039a70 depth=1 from=FUN_1003c6f0 callees=
// strings: 

int __thiscall FUN_10039a70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[5];
  iVar2 = *param_1;
  if (iVar2 <= param_2) {
    return 0;
  }
  if (param_2 != iVar4) {
    if (param_2 < iVar4) {
      iVar4 = iVar4 - param_2;
      if (iVar4 < param_2) {
        iVar1 = param_1[3];
        iVar2 = iVar1;
        if (0 < iVar4) {
          do {
            if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc) == 0)) {
              iVar1 = 0;
            }
            else {
              param_1[3] = *(int *)(iVar2 + 0xc);
              if (0 < param_1[5]) {
                param_1[5] = param_1[5] + -1;
              }
              iVar1 = param_1[3];
              iVar2 = iVar1;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      else {
        if (param_1[2] == 0) {
          param_1[3] = 0;
        }
        else {
          param_1[3] = param_1[2];
        }
        iVar1 = param_1[3];
        param_1[5] = 0;
        if (0 < param_2) {
          do {
            if ((iVar1 == 0) || (*(int *)(iVar1 + 0x10) == 0)) {
              iVar4 = 0;
            }
            else {
              param_1[3] = *(int *)(iVar1 + 0x10);
              if (param_1[5] < iVar2 + -1) {
                param_1[5] = param_1[5] + 1;
              }
              iVar4 = param_1[3];
              iVar1 = iVar4;
            }
            param_2 = param_2 + -1;
          } while (param_2 != 0);
          return iVar4;
        }
      }
    }
    else {
      iVar4 = param_2 - iVar4;
      iVar3 = (iVar2 - param_2) + -1;
      if (iVar3 < iVar4) {
        iVar1 = param_1[4];
        iVar4 = 0;
        param_1[3] = iVar1;
        param_1[5] = iVar2 + -1;
        if (0 < iVar3) {
          do {
            if ((param_1[3] == 0) || (iVar2 = *(int *)(param_1[3] + 0xc), iVar2 == 0)) {
              iVar2 = 0;
            }
            else {
              param_1[3] = iVar2;
              if (0 < param_1[5]) {
                param_1[5] = param_1[5] + -1;
              }
              iVar2 = param_1[3];
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (*param_1 - param_2) + -1);
          return iVar2;
        }
      }
      else {
        iVar1 = param_1[3];
        if (0 < iVar4) {
          do {
            if ((iVar1 == 0) || (*(int *)(iVar1 + 0x10) == 0)) {
              iVar3 = 0;
            }
            else {
              param_1[3] = *(int *)(iVar1 + 0x10);
              if (param_1[5] < iVar2 + -1) {
                param_1[5] = param_1[5] + 1;
              }
              iVar3 = param_1[3];
              iVar1 = iVar3;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          return iVar3;
        }
      }
    }
    return iVar1;
  }
  return param_1[3];
}


// ==== 10024670 FUN_10024670 depth=1 from=FUN_1003c6f0 callees=CORE.DLL::appFailAssert@EXTERNAL:0000018a
// strings: 1023794c=.\Src\NIMEManager.cpp | 10237944=m_pIME | 

undefined4 __fastcall FUN_10024670(int param_1)

{
  if (*(int *)(param_1 + 0x2d8) == 0) {
    appFailAssert("m_pIME",".\\Src\\NIMEManager.cpp",0xc0);
  }
  return *(undefined4 *)(param_1 + 0x2d8);
}


// ==== 10020e50 FUN_10020e50 depth=1 from=FUN_10042bd0 callees=
// strings: 

void __fastcall FUN_10020e50(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10020e53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UCanvas::DrawRadarBack(*(UCanvas **)(param_1 + 0x34));
  return;
}


// ==== 10020e70 FUN_10020e70 depth=1 from=FUN_10042bd0 callees=
// strings: 

void __thiscall FUN_10020e70(int param_1,int param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10020e73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UCanvas::DrawRadarTarget(*(UCanvas **)(param_1 + 0x34),param_2,param_3);
  return;
}


// ==== 10020e60 FUN_10020e60 depth=1 from=FUN_10042bd0 callees=
// strings: 

void __fastcall FUN_10020e60(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10020e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UCanvas::DrawRadarEtc(*(UCanvas **)(param_1 + 0x34));
  return;
}


// ==== 10044570 FUN_10044570 depth=1 from=FUN_10044680 callees=FUN_10049ad0@10049ad0 FUN_10010290@10010290
// strings: 

void __fastcall FUN_10044570(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ded10;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x208) == 0) {
    *unaff_FS_OFFSET = local_10;
    return;
  }
  iVar2 = FUN_10049ad0();
  iVar1 = *(int *)(param_1 + 0x20c);
  *(int *)(param_1 + 0x20c) = iVar2;
  for (piVar4 = *(int **)(param_1 + 0x48); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
    piVar3 = (int *)FUN_10010290(*(undefined4 *)(*piVar4 + 4));
    if ((((piVar3 != (int *)0x0) && (piVar3 != *(int **)(param_1 + 0x1fc))) &&
        (piVar3 != *(int **)(param_1 + 0x1ec))) && (piVar3 != *(int **)(param_1 + 0x1f0))) {
      (**(code **)(*piVar3 + 0x148))(0,iVar1 - iVar2,0);
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 101b3f10 FUN_101b3f10 depth=1 from=FUN_10047b40 callees=
// strings: 

short * __fastcall FUN_101b3f10(int param_1)

{
  short *psVar1;
  
  psVar1 = (short *)(param_1 + 0xa0c);
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    psVar1 = (short *)0x0;
  }
  return psVar1;
}


// ==== 101ade70 FUN_101ade70 depth=1 from=FUN_10047b40 callees=FUN_101adb70@101adb70 FUN_101acf70@101acf70
// strings: 

int FUN_101ade70(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218510;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = 0;
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_101acf70();
    if (iVar1 <= iVar2) {
      ExceptionList = local_10;
      return 0;
    }
    iVar1 = FUN_101adb70(iVar2);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x9a0) == param_1)) break;
    iVar2 = iVar2 + 1;
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 10045220 FUN_10045220 depth=1 from=FUN_10047b40 callees=
// strings: 

undefined4 __fastcall FUN_10045220(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1f64);
}


// ==== 1004a790 FUN_1004a790 depth=1 from=FUN_1004b510 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10147e30@10147e30 FUN_100217a0@100217a0 __security_check_cookie@101c16c2 FUN_101c19e0@101c19e0 FUN_10147da0@10147da0 FUN_10146390@10146390 CORE.DLL::appSprintf@EXTERNAL:000001ba FUN_10020bb0@10020bb0 CORE.DLL::appStrcpy@EXTERNAL:000001c3 CORE.DLL::appStrlen@EXTERNAL:000001b4
// strings: 102407e4=+%d %s | 102407d8=`%s` | 

void __thiscall FUN_1004a790(int param_1,undefined4 param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uStack_a6c;
  int local_a5c [2];
  int local_a54 [4];
  int local_a44;
  undefined4 local_a40;
  int local_a3c;
  int local_a38;
  uint local_a34;
  int local_a30;
  int local_a2c [2];
  int local_a24;
  undefined4 local_a20;
  char local_a1b;
  char local_a1a;
  char local_a19;
  undefined1 *local_a18;
  void *local_a14;
  undefined1 *puStack_a10;
  undefined4 local_a0c;
  undefined1 local_a08 [512];
  ushort local_808 [256];
  undefined1 local_608 [512];
  ushort local_408 [256];
  ushort local_208 [256];
  uint local_8;
  
  puStack_a10 = &LAB_101dfc30;
  local_a14 = ExceptionList;
  uStack_a6c = DAT_103554c4 ^ (uint)local_a08;
  local_a18 = (undefined1 *)&uStack_a6c;
  ExceptionList = &local_a14;
  local_a20 = param_2;
  local_a0c = 0;
  local_a40 = *(undefined4 *)(param_1 + 0x2ec);
  local_8 = uStack_a6c;
  puVar1 = FString::operator*((FString *)(param_1 + 0x2e0));
  appStrcpy(local_808,puVar1);
  iVar2 = *(int *)(param_1 + 0x2f0);
  iVar7 = *(int *)(param_1 + 0x2f4);
  local_a34 = *(uint *)(param_1 + 0x2f8);
  local_a38 = *(int *)(param_1 + 0x2fc);
  local_a24 = FUN_101c19e0();
  pcVar6 = appSprintf_exref;
  if ((iVar7 < 1) || ((((iVar2 != 0 && (iVar2 != 1)) && (iVar2 != 3)) && (iVar2 != 2)))) {
    appSprintf(local_208,(ushort *)&DAT_1022dde0,local_808);
    pcVar6 = appSprintf_exref;
  }
  else {
    appSprintf(local_208,(ushort *)L"+%d %s",iVar7,local_808);
  }
  FUN_10020bb0(local_a2c,local_208,0,0,0,0,0,0);
  uVar3 = local_a40;
  local_a19 = '\0';
  iVar2 = FUN_10147da0(local_a40);
  if (iVar2 != 0) {
    uVar3 = FUN_10147e30(uVar3);
    (*pcVar6)(local_608,&DAT_1022dde0,uVar3);
    FUN_10020bb0(local_a5c,local_608,0,0,0,0,0,0);
    local_a19 = '\x01';
  }
  local_a1a = '\0';
  iVar2 = local_a2c[0];
  if (local_a19 != '\0') {
    iVar2 = local_a5c[0] + 2 + local_a2c[0];
  }
  iVar7 = iVar2;
  if ((local_a34 < 5) && (iVar4 = FUN_10146390(local_a34), iVar4 != 0)) {
    uVar3 = FUN_10146390(local_a34);
    (*pcVar6)(local_a08,L"`%s`",uVar3);
    local_a1a = '\x01';
    iVar7 = iVar2 + 0xe;
  }
  local_a1b = '\0';
  iVar4 = iVar7;
  if ((*(int *)(param_1 + 0x344) != 0) && (0 < local_a38)) {
    appSprintf(local_408,(ushort *)&DAT_102407d0,local_a38);
    FUN_10020bb0(local_a54,local_408,0,0,0,0,0,0);
    local_a1b = '\x01';
    iVar4 = local_a54[0] + 2 + iVar7;
  }
  iVar5 = 0;
  local_a24 = iVar4 - local_a24;
  if (0 < local_a24) {
    local_a30 = 0;
    FUN_10020bb0(&local_a3c,&DAT_102407c8,0,0,0,0,0,0);
    iVar4 = appStrlen(local_208);
    do {
      iVar5 = iVar4;
      iVar4 = iVar5 + -1;
      local_a30 = iVar4;
      if (iVar4 < 0) break;
      local_208[iVar4] = 0;
      FUN_10020bb0(&local_a44,local_208,0,0,0,0,0,0);
    } while ((local_a2c[0] - local_a3c) - local_a44 <= local_a24);
    local_208[iVar4] = 0x2e;
    local_208[iVar5] = 0x2e;
    local_208[iVar5 + 1] = 0;
    iVar5 = (local_a2c[0] - local_a3c) - local_a44;
  }
  FUN_100217a0(0,0,0xffdcdcdc,local_208,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  if (local_a19 != '\0') {
    FUN_100217a0((local_a2c[0] - iVar5) + 2,0,0xffffd969,local_608,0,0,0,0,0,0,0,0,0,0,0,0xffffffff)
    ;
  }
  if (local_a1a != '\0') {
    FUN_100217a0((iVar2 - iVar5) + 2,0,0xffdcdcdc,local_a08,0,0,0,0,1,0,0,0,0,0,0,0xffffffff);
  }
  if (local_a1b != '\0') {
    FUN_100217a0((iVar7 - iVar5) + 2,0,0xffdcdcdc,local_408,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  }
  local_a0c = 0xffffffff;
  ExceptionList = local_a14;
  __security_check_cookie(local_8 ^ (uint)local_a08);
  return;
}


// ==== 10058770 FUN_10058770 depth=1 from=FUN_1004b510 callees=
// strings: 

void __thiscall FUN_10058770(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x80);
  param_2[1] = *(undefined4 *)(param_1 + 0x84);
  param_2[3] = *(undefined4 *)(param_1 + 0x8c);
  param_2[2] = *(undefined4 *)(param_1 + 0x88);
  return;
}


// ==== 1004abc0 FUN_1004abc0 depth=1 from=FUN_1004b510 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 __security_check_cookie@101c16c2 FUN_101c19e0@101c19e0 FUN_10020bb0@10020bb0 CORE.DLL::appStrcpy@EXTERNAL:000001c3 CORE.DLL::appStrlen@EXTERNAL:000001b4
// strings: 

void __thiscall FUN_1004abc0(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uStack_250;
  int local_240 [3];
  int local_234 [2];
  int local_22c [3];
  int local_220;
  int local_21c;
  undefined1 *local_218;
  void *local_214;
  undefined1 *puStack_210;
  undefined4 local_20c;
  ushort local_208 [256];
  uint local_8;
  
  puStack_210 = &LAB_101dfc60;
  local_214 = ExceptionList;
  uStack_250 = DAT_103554c4 ^ (uint)local_208;
  local_218 = (undefined1 *)&uStack_250;
  ExceptionList = &local_214;
  local_21c = param_2;
  local_20c = 0;
  local_8 = uStack_250;
  puVar1 = FString::operator*((FString *)(param_1 + 0x2e0));
  appStrcpy(local_208,puVar1);
  FUN_10020bb0(local_234,local_208,0,0,0,0,0,0);
  iVar2 = FUN_101c19e0();
  if (0 < iVar2) {
    FUN_10020bb0(local_240,&DAT_102407c8,0,0,0,0,0,0);
    local_220 = 0;
    iVar3 = appStrlen(local_208);
    do {
      iVar5 = iVar3;
      iVar3 = iVar5 + -1;
      local_220 = iVar3;
      if (iVar3 < 0) break;
      local_208[iVar3] = 0;
      FUN_10020bb0(local_22c,local_208,0,0,0,0,0,0);
    } while ((local_234[0] - local_240[0]) - local_22c[0] <= iVar2);
    local_208[iVar3] = 0x2e;
    local_208[iVar5] = 0x2e;
    local_208[iVar5 + 1] = 0;
  }
  puVar1 = local_208;
  if (*(int *)(param_1 + 0x2dc) == 1) {
    uVar19 = 0xffffffff;
    uVar18 = 0;
    uVar17 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = *(undefined4 *)(param_1 + 0x300);
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x2dc) != 2) goto code_r0x1004ad7d;
    FUN_10020bb0(local_22c,local_208,0,0,0,0,0,0);
    uVar19 = 0xffffffff;
    uVar18 = 0;
    uVar17 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = *(undefined4 *)(param_1 + 0x300);
    uVar6 = 0;
    local_21c = local_22c[0] / 2;
    uVar4 = FUN_101c19e0(0,uVar7,local_208,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  }
  FUN_100217a0(uVar4,uVar6,uVar7,puVar1,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16
               ,uVar17,uVar18,uVar19);
code_r0x1004ad7d:
  local_20c = 0xffffffff;
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}


// ==== 100212f0 FUN_100212f0 depth=1 from=FUN_1004c7c0 callees=
// strings: 

undefined4 __thiscall
FUN_100212f0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            char param_7)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101db1c0;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((param_6 != 0) && (*(int *)(param_1 + 0x34) != 0)) {
    _param_7 = (uint)(byte)(-param_7 - 1);
    if (param_2 == 0) {
      uVar1 = *(uint *)(param_1 + 0x60);
      uVar3 = 5;
      uVar4 = 5;
    }
    else if (param_2 == 1) {
      uVar1 = *(uint *)(param_1 + 100);
      uVar3 = 8;
      uVar4 = 8;
    }
    else {
      uVar1 = _param_7;
      uVar3 = _param_7;
      uVar4 = _param_7;
      if (param_2 == 2) {
        uVar1 = *(uint *)(param_1 + 0x68);
        uVar3 = 0xb;
        uVar4 = 0xe;
      }
    }
    ExceptionList = &local_10;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x34) + 0xec))
                      (uVar3,uVar4,*(int *)(param_1 + 0x38) + param_3,
                       *(int *)(param_1 + 0x3c) + param_4,param_5,param_6,uVar1,_param_7);
    ExceptionList = local_10;
    return uVar2;
  }
  return 0;
}


// ==== 100133a0 FUN_100133a0 depth=1 from=FUN_1004c7c0 callees=__vswprintf@101c1bbf
// strings: 

void FUN_100133a0(wchar_t *param_1,wchar_t *param_2)

{
  __vswprintf(param_1,param_2,&stack0x0000000c);
  return;
}


// ==== 100053e0 FUN_100053e0 depth=1 from=FUN_1004db50 callees=
// strings: 

undefined4 __thiscall FUN_100053e0(int *param_1,int param_2,int param_3)

{
  if ((((*param_1 <= param_2) && ((float)param_2 <= (float)param_1[2] + (float)*param_1)) &&
      (param_1[1] <= param_3)) && ((float)param_3 <= (float)param_1[3] + (float)param_1[1])) {
    return 1;
  }
  return 0;
}


// ==== 1004d130 FUN_1004d130 depth=1 from=FUN_1004db50 callees=
// strings: 

undefined4 __fastcall FUN_1004d130(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== 1004d920 FUN_1004d920 depth=1 from=FUN_1004db50 callees=FUN_1004d130@1004d130
// strings: 

undefined4 __thiscall FUN_1004d920(int param_1,int param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0370;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (-1 < param_2) {
    iVar1 = FUN_1004d130();
    if (param_2 + 1 <= iVar1) {
      ExceptionList = local_10;
      return *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + param_2 * 4) + 4);
    }
  }
  ExceptionList = local_10;
  return 0xffffffff;
}


// ==== 1004da90 FUN_1004da90 depth=1 from=FUN_1004db50 callees=FUN_1004d920@1004d920 FUN_1004d130@1004d130
// strings: 

undefined4 __thiscall FUN_1004da90(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e03b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  if (-1 < param_2) {
    iVar1 = FUN_1004d130();
    if ((param_2 < iVar1) && (-1 < param_3)) {
      iVar1 = FUN_1004d920(param_2);
      if (param_3 < iVar1) {
        local_18 = *(undefined4 *)(**(int **)(*(int *)(param_1 + 8) + param_2 * 4) + param_3 * 4);
      }
    }
  }
  ExceptionList = local_10;
  return local_18;
}


// ==== 10051d50 FUN_10051d50 depth=1 from=FUN_10052600 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_100212f0@100212f0 FUN_101c19e0@101c19e0
// strings: 

void __fastcall FUN_10051d50(int *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_2c;
  int local_24;
  undefined4 local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0ee0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_24 = 999;
  for (iVar2 = 0; iVar2 < param_1[0xd6]; iVar2 = iVar2 + 1) {
    iVar5 = param_1[0xbb];
    if (iVar5 == 1) {
      local_1c = 0;
    }
    else if (iVar5 == 2) {
      local_1c = FUN_101c19e0();
    }
    else if (iVar5 == 3) {
      local_1c = FUN_101c19e0();
    }
    iVar5 = param_1[0xbc];
    if (iVar5 < 8) {
      uVar13 = 0xffffffff;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      iVar6 = param_1[0xd3];
      uVar4 = 1;
      uVar3 = 0;
      local_2c = (undefined4)(longlong)ROUND((float)param_1[0x22]);
      puVar1 = FString::operator*((FString *)(param_1[0xd8] + iVar2 * 0xc));
      FUN_100217a0(local_1c,param_1[0xd7] * iVar2,param_1[0xd2],puVar1,local_2c,uVar3,uVar4,iVar5,
                   iVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
    }
    else {
      if (iVar5 == 9) {
        local_20 = 0;
      }
      else if (iVar5 == 10) {
        local_20 = 1;
      }
      else if (iVar5 == 0xb) {
        local_20 = 2;
      }
      uVar3 = 0xff;
      puVar1 = FString::operator*((FString *)(param_1[0xd8] + iVar2 * 0xc));
      FUN_100212f0(local_20,local_1c,param_1[0xbe],param_1[0xd2],puVar1,uVar3);
    }
    if (local_1c < local_24) {
      local_24 = local_1c;
    }
  }
  if ((param_1[0xd4] != 0) && (param_1[0xd5] != 0)) {
    param_1[0xd5] = 0;
    (**(code **)(*param_1 + 0x148))(local_24,0,0);
    (**(code **)(*param_1 + 0x128))((float)param_1[0xc0],(float)param_1[0xc1]);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10051770 FUN_10051770 depth=1 from=FUN_10052600 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100217a0@100217a0 FUN_100212f0@100212f0 FUN_10064790@10064790
// strings: 

void __thiscall FUN_10051770(int param_1,undefined4 param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0e00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0x2ec) == 4) {
    puVar1 = FString::operator*((FString *)(param_1 + 0x2e0));
    FUN_10064790(param_2,0,0,*(undefined4 *)(param_1 + 0x348),puVar1);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x2f0);
    if (iVar5 < 8) {
      uVar12 = 0xffffffff;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar2 = *(undefined4 *)(param_1 + 0x34c);
      uVar4 = 1;
      uVar3 = 0;
      local_20 = (undefined4)(longlong)ROUND(*(float *)(param_1 + 0x88));
      puVar1 = FString::operator*((FString *)(param_1 + 0x2e0));
      FUN_100217a0(*(undefined4 *)(param_1 + 0x2fc),0,*(undefined4 *)(param_1 + 0x348),puVar1,
                   local_20,uVar3,uVar4,iVar5,uVar2,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    }
    else {
      if (iVar5 == 9) {
        uVar2 = 0;
      }
      else if (iVar5 == 10) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
        if (iVar5 != 0xb) {
          uVar2 = param_2;
        }
      }
      uVar3 = 0xff;
      puVar1 = FString::operator*((FString *)(param_1 + 0x2e0));
      FUN_100212f0(uVar2,*(undefined4 *)(param_1 + 0x2fc),*(undefined4 *)(param_1 + 0x2f8),
                   *(undefined4 *)(param_1 + 0x348),puVar1,uVar3);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10053160 FUN_10053160 depth=1 from=FUN_10053790 callees=
// strings: 

undefined4 __fastcall FUN_10053160(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2ec);
}


// ==== 100536d0 FUN_100536d0 depth=1 from=FUN_10053790 callees=
// strings: 

int FUN_100536d0(int param_1,int param_2,int param_3)

{
  if ((param_2 <= param_1) && (param_2 = param_3, param_1 < param_3)) {
    param_2 = param_1;
  }
  return param_2;
}


// ==== 10021190 FUN_10021190 depth=1 from=FUN_10053790 callees=FUN_10145a90@10145a90
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10021190(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int unaff_retaddr;
  
  if (0 < param_4) {
    iVar1 = FUN_10145a90(param_4);
    if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x580) != 0 || (*(int *)(iVar1 + 0x584) != 0)))) {
      (**(code **)(**(int **)(param_1 + 0x34) + 0xa0))
                (*(int *)(param_1 + 0x38) + unaff_retaddr,*(int *)(param_1 + 0x3c) + param_2,0x10,
                 0xc,0,_DAT_102372c4,_DAT_102372c8,_DAT_102372cc,iVar1,0xff,1);
      param_2 = *(int *)(param_1 + 0x3c) + param_2;
      if (*(int *)(param_1 + 0x58) < param_2 + 0xc) {
        *(int *)(param_1 + 0x58) = param_2 + 0xc;
      }
      if (param_2 < *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x54) = param_2;
      }
      return 1;
    }
  }
  return 0;
}


// ==== 10053270 FUN_10053270 depth=1 from=FUN_10053790 callees=
// strings: 

undefined4 __fastcall FUN_10053270(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2d8);
}


// ==== 10145a60 FUN_10145a60 depth=1 from=FUN_10053790 callees=
// strings: 

void __fastcall FUN_10145a60(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10145a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 0x50) + 0x60) + 0xac))();
  return;
}


// ==== 10043dd0 FUN_10043dd0 depth=1 from=FUN_10055930 callees=thunk_FUN_10049b50@1004a050 FUN_101c19e0@101c19e0 thunk_FUN_10049a00@1004a040
// strings: 

void __thiscall FUN_10043dd0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101debe0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = param_1[0x7f];
  iVar1 = FUN_101c19e0();
  if (iVar1 + -0x1e < *(int *)(iVar2 + 0x2dc) + *(int *)(iVar2 + 0x2d8)) {
    (**(code **)(*param_1 + 0x1fc))(0);
    param_1[0x79] = 0;
    thunk_FUN_10049b50(0);
  }
  else {
    if (iVar1 < param_2) {
      iVar2 = FUN_101c19e0();
      param_1[0x79] = iVar2;
    }
    else {
      param_1[0x79] = 0;
    }
    thunk_FUN_10049a00(param_2,iVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10023790 FUN_10023790 depth=1 from=FUN_100833e0 callees=FUN_10023700@10023700
// strings: 

void __thiscall FUN_10023790(int param_1,int param_2,int param_3)

{
  FUN_10023700(&param_2);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_2;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + param_3;
  return;
}


// ==== 10043d00 FUN_10043d00 depth=1 from=FUN_100833e0 callees=FUN_101c19e0@101c19e0 thunk_FUN_10049a00@1004a040
// strings: 

void __thiscall FUN_10043d00(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101debc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101c19e0();
  if (iVar1 < param_2) {
    uVar2 = FUN_101c19e0();
    *(undefined4 *)(param_1 + 0x1e4) = uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    param_2 = 0;
  }
  thunk_FUN_10049a00(param_2,iVar1);
  ExceptionList = local_10;
  return;
}


// ==== 10083010 FUN_10083010 depth=1 from=FUN_100833e0 callees=FUN_10082510@10082510
// strings: 

int __fastcall FUN_10083010(int param_1)

{
  int iVar1;
  uint uStack_34;
  undefined1 local_24 [4];
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea530;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 < 1) {
    return 0;
  }
  ExceptionList = &local_10;
  FUN_10082510(local_24);
  ExceptionList = local_10;
  return *(int *)(*(int *)(*(int *)(param_1 + 100) + -4 + iVar1 * 4) + 0x28) + local_20;
}


// ==== 10023160 FUN_10023160 depth=1 from=FUN_100833e0 callees=FUN_10022e20@10022e20
// strings: 

void __fastcall FUN_10023160(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10022e20();
  iVar2 = piVar1[1];
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - *piVar1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar2;
  if ((*(int *)(param_1 + 0x50) != 0) &&
     (iVar2 = *(int *)(param_1 + 0x50) + -1, *(int *)(param_1 + 0x50) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}


// ==== 10058020 FUN_10058020 depth=1 from=FUN_10091400 callees=
// strings: 

undefined4 __fastcall FUN_10058020(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}


// ==== 10015ac0 FUN_10015ac0 depth=1 from=FUN_10093480 callees=
// strings: 

int __fastcall FUN_10015ac0(short *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_1[1] != 0) {
    if (param_1[2] != 0) {
      iVar1 = 2;
    }
    if (param_1[3] != 0) {
      iVar1 = iVar1 + 1;
    }
    if (*param_1 != 0) {
      iVar1 = iVar1 + 1;
    }
    if (param_1[4] != 0) {
      iVar1 = iVar1 + 1;
    }
    if (param_1[6] != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


// ==== 1002ac60 FUN_1002ac60 depth=1 from=FUN_10093480 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10021620@10021620 CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10019740@10019740 FUN_10015a70@10015a70
// strings: 

int FUN_1002ac60(void)

{
  ushort *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_18 [4];
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101dba81;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)GLanguageType_exref == 5) {
    FUN_10015a70(DAT_103554c4 ^ (uint)&stack0xffffffe4);
    local_4._0_1_ = 1;
    uVar4 = 0;
    puVar3 = local_18;
    puVar1 = FString::operator*((FString *)&stack0x00000004);
    FUN_10021620(puVar1,puVar3,uVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_10019740();
    iVar2 = local_14;
  }
  else {
    iVar2 = FString::Len((FString *)&stack0x00000004);
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return iVar2;
}


// ==== 100c72c0 FUN_100c72c0 depth=1 from=FUN_10096870 callees=FUN_10020bb0@10020bb0 CORE.DLL::appStrcpy@EXTERNAL:000001c3 CORE.DLL::appStrlen@EXTERNAL:000001b4
// strings: 

int FUN_100c72c0(ushort *param_1,ushort *param_2,int param_3,int param_4)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_8 [2];
  
  iVar5 = 0;
  FUN_10020bb0(local_8,param_1,0,0,0,0,0,0);
  local_10 = 0;
  if (local_8[0] <= param_3) {
    appStrcpy(param_2,param_1);
    iVar5 = appStrlen(param_2);
    return iVar5;
  }
  piVar2 = *(int **)(DAT_103663c0 + 0x13c);
  iVar4 = 0;
  if (DAT_103663c0 != -0x13c) {
    uVar1 = *param_1;
    while (uVar1 != 0) {
      param_1 = param_1 + 1;
      if (uVar1 == 10) {
        param_2[iVar5] = 10;
        iVar5 = iVar5 + 1;
        break;
      }
      iVar3 = (**(code **)(*piVar2 + 0x74))(uVar1);
      if (iVar3 != 0) {
        iVar4 = iVar4 + *(int *)(iVar3 + 4);
        if (param_3 - param_4 < iVar4) break;
        param_2[iVar5] = uVar1;
        iVar5 = iVar5 + 1;
        local_10 = local_10 + 1;
      }
      uVar1 = *param_1;
    }
  }
  if (0 < param_4) {
    param_2[iVar5] = 0x2e;
    param_2[iVar5 + 1] = 0x2e;
    param_2[iVar5 + 2] = 0x2e;
    iVar5 = iVar5 + 3;
  }
  param_2[iVar5] = 0;
  return local_10;
}


// ==== 100abd40 FUN_100abd40 depth=1 from=FUN_1009f630 callees=CORE.DLL::appMemset@EXTERNAL:000001d0 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::FString@EXTERNAL:0000019e __security_check_cookie@101c16c2 FUN_100c75a0@100c75a0 CORE.DLL::FString::operator=@EXTERNAL:000001a3
// strings: 

void __thiscall FUN_100abd40(int param_1,FString *param_2)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 local_220;
  FString *local_21c;
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f0d13;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_220;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffffdd8;
  ExceptionList = &local_c;
  local_21c = param_2;
  local_220 = 0;
  appMemset(local_218,0,0x208);
  puVar3 = local_218;
  puVar2 = FString::operator*((FString *)(param_1 + 0x2c));
  FUN_100c75a0(puVar2,puVar3,uVar1);
  FString::operator=((FString *)(param_1 + 0x38),local_218);
  FString::FString(param_2,(FString *)(param_1 + 0x38));
  local_4 = 0;
  local_220 = 1;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_220);
  return;
}


// ==== 101c2730 __alloca_probe depth=1 from=FUN_100b2aa0 callees=
// strings: 

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}


// ==== 1003f630 FUN_1003f630 depth=1 from=FUN_100b2c60 callees=CORE.DLL::UObject::StaticFindObject@EXTERNAL:000001cb CORE.DLL::UObject::StaticLoadObject@EXTERNAL:000001d8 CORE.DLL::UObject::SetFlags@EXTERNAL:0000016e FUN_1003f630@1003f630 FUN_10002030@10002030 ENGINE.DLL::UTexture::StaticClass@EXTERNAL:000000a2
// strings: 1023d4bc=Can not find Texture : %s | 10230f28=Default.BlackTexture | 

UObject * __thiscall FUN_1003f630(undefined4 param_1,ushort *param_2,int param_3)

{
  UClass *pUVar1;
  ushort *puVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  int iVar6;
  UObject *pUVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de070;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_2 == (ushort *)0x0) {
    return (UObject *)0x0;
  }
  iVar6 = 0;
  pUVar3 = (UObject *)0xffffffff;
  ExceptionList = &local_10;
  puVar2 = param_2;
  pUVar1 = UTexture::StaticClass();
  pUVar3 = UObject::StaticFindObject(pUVar1,pUVar3,puVar2,iVar6);
  if (pUVar3 == (UObject *)0x0) {
    puVar2 = param_2;
    pUVar4 = pUVar3;
    pUVar5 = pUVar3;
    pUVar7 = pUVar3;
    pUVar1 = UTexture::StaticClass();
    pUVar3 = UObject::StaticLoadObject
                       (pUVar1,pUVar3,puVar2,(ushort *)pUVar4,(ulong)pUVar5,(UPackageMap *)pUVar7);
    if (pUVar3 == (UObject *)0x0) {
      if (param_3 == 0) {
        ExceptionList = local_10;
        return (UObject *)0x0;
      }
      FUN_10002030(param_1,L"Can not find Texture : %s",param_2);
      pUVar3 = (UObject *)FUN_1003f630(L"Default.BlackTexture",1);
      if (pUVar3 == (UObject *)0x0) {
        ExceptionList = local_10;
        return (UObject *)0x0;
      }
    }
  }
  UObject::SetFlags(pUVar3,0x4000000);
  ExceptionList = local_10;
  return pUVar3;
}


// ==== 100c73d0 FUN_100c73d0 depth=1 from=FUN_100b2d90 callees=__security_check_cookie@101c16c2 FUN_100216e0@100216e0 CORE.DLL::appStrcat@EXTERNAL:000001d4 FUN_10020bb0@10020bb0 FUN_100c72c0@100c72c0
// strings: 

void FUN_100c73d0(int param_1,ushort *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_224;
  ushort *local_220;
  undefined1 local_21c [4];
  int local_218;
  undefined1 local_214 [4];
  int local_210;
  ushort local_20c [260];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_224;
  local_220 = param_2;
  FUN_10020bb0(local_21c,param_1,param_3,0,0,0,0,0);
  FUN_100216e0(local_214,0x41,0);
  local_224 = local_218 / local_210;
  if (param_4 / local_210 < local_218 / local_210) {
    local_224 = param_4 / local_210;
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < local_224) {
    do {
      if (iVar3 == local_224 + -1) {
        uVar4 = 0xc;
      }
      else {
        uVar4 = 0;
      }
      iVar1 = FUN_100c72c0(param_1 + iVar2 * 2,local_20c,param_3,uVar4);
      iVar2 = iVar2 + iVar1;
      appStrcat(local_220,local_20c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_224);
  }
  __security_check_cookie(local_4 ^ (uint)&local_224);
  return;
}


// ==== 10020e80 FUN_10020e80 depth=1 from=FUN_100b3270 callees=
// strings: 

void __thiscall
FUN_10020e80(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7)

{
  (**(code **)(**(int **)(param_1 + 0x34) + 0xa4))
            (*(int *)(param_1 + 0x38) + param_2,*(int *)(param_1 + 0x3c) + param_3,
             param_4 + *(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c) + param_5,param_6,param_7);
  param_3 = *(int *)(param_1 + 0x3c) + param_3;
  if (*(int *)(param_1 + 0x58) < param_3) {
    *(int *)(param_1 + 0x58) = param_3;
  }
  param_5 = *(int *)(param_1 + 0x3c) + param_5;
  if (*(int *)(param_1 + 0x58) < param_5) {
    *(int *)(param_1 + 0x58) = param_5;
  }
  if (param_3 < *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = param_3;
  }
  if (param_5 < *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = param_5;
  }
  return;
}


// ==== 100a98c0 FUN_100a98c0 depth=1 from=FUN_100b4630 callees=FUN_100be240@100be240 CORE.DLL::FString::FString@EXTERNAL:000001b0
// strings: 

FString * __thiscall FUN_100a98c0(int param_1,FString *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f01ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xc) == 0) {
    FString::FString(param_2,(ushort *)&DAT_1022f9f8);
  }
  else {
    FUN_100be240(param_2);
  }
  ExceptionList = local_c;
  return param_2;
}


// ==== 10023820 FUN_10023820 depth=1 from=FUN_100b5fc0 callees=FUN_1003f630@1003f630 CORE.DLL::FString::operator=@EXTERNAL:000001a3
// strings: 

void __thiscall FUN_10023820(int param_1,int param_2,ushort *param_3,byte param_4)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_1003f630(param_2,1);
    *(undefined4 *)(param_1 + 0x2d8) = uVar1;
  }
  if (param_3 != (ushort *)0x0) {
    FString::operator=((FString *)(param_1 + 0x2e4),param_3);
    *(uint *)(param_1 + 0x2f8) = (uint)param_4;
    return;
  }
  *(uint *)(param_1 + 0x2f8) = (uint)param_4;
  return;
}


// ==== 10141a90 FUN_10141a90 depth=1 from=FUN_10136850 callees=
// strings: 

undefined4 __thiscall
FUN_10141a90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a090;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x50) + 0x60) + 0x138))
                    (param_2,param_3,param_4);
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10049a00 FUN_10049a00 depth=1 from=FUN_10137f00 callees=FUN_101c19e0@101c19e0
// strings: 

void __thiscall FUN_10049a00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  
  param_1[0xb9] = param_2;
  param_1[0xbc] = param_3;
  if (param_3 < param_2) {
    iVar1 = FUN_101c19e0();
    param_1[0xb6] = iVar1;
    if (*(int *)(*(int *)(param_1[0x2e] + 0xc) + 4) == 0) goto LAB_10049a99;
    iVar1 = (**(code **)(**(int **)(*(int *)(param_1[0x2e] + 0xc) + 4) + 0xfc))(0);
    if (iVar1 == 0) goto LAB_10049a99;
    iVar1 = (**(code **)(*param_1 + 0xfc))(0);
    if (iVar1 != 0) goto LAB_10049a99;
    pcVar2 = *(code **)(*param_1 + 0x138);
  }
  else {
    iVar1 = FUN_101c19e0();
    param_1[0xb6] = iVar1;
    pcVar2 = *(code **)(*param_1 + 0x13c);
  }
  (*pcVar2)();
LAB_10049a99:
  if (param_1[0xb6] < 0xf) {
    param_1[0xb6] = 0xf;
  }
  iVar1 = FUN_101c19e0();
  param_1[0xba] = iVar1;
  return;
}


// ==== 10049b50 FUN_10049b50 depth=1 from=FUN_10137f00 callees=
// strings: 

void __thiscall FUN_10049b50(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2e4);
  if ((*(int *)(param_1 + 0x2ec) <= iVar1) && (-1 < *(int *)(param_1 + 0x2ec))) {
    *(int *)(param_1 + 0x2ec) = param_2;
    if (*(int *)(param_1 + 0x2f0) < iVar1) {
      *(int *)(param_1 + 0x2dc) =
           (*(int *)(param_1 + 0x2e8) * param_2) / (iVar1 - *(int *)(param_1 + 0x2f0));
      return;
    }
    *(undefined4 *)(param_1 + 0x2dc) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  return;
}


// ==== 10178820 FUN_10178820 depth=1 from=FUN_10175bc0 callees=
// strings: 

undefined4 __fastcall FUN_10178820(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}


// ==== 1002c9a0 FUN_1002c9a0 depth=1 from=FUN_10175bc0 callees=
// strings: 

undefined4 __fastcall FUN_1002c9a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}


// ==== 1002c990 FUN_1002c990 depth=1 from=FUN_10175bc0 callees=
// strings: 

undefined4 __fastcall FUN_1002c990(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ==== 1014e4a0 FUN_1014e4a0 depth=1 from=FUN_10175bc0 callees=FUN_10146260@10146260 FUN_1014dd00@1014dd00
// strings: 

undefined4 FUN_1014e4a0(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bcc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1014dd00();
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0xffffffff;
  }
  uVar2 = FUN_10146260(*(undefined4 *)(iVar1 + 0x2c0));
  ExceptionList = local_10;
  return uVar2;
}


// ==== 1002c980 FUN_1002c980 depth=1 from=FUN_10175bc0 callees=
// strings: 

undefined4 __fastcall FUN_1002c980(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}


// ==== 10021000 FUN_10021000 depth=1 from=FUN_1017ef00 callees=
// strings: 

void __thiscall
FUN_10021000(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101db160;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(param_1 + 0x34) + 200))
            (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,0);
  ExceptionList = local_10;
  return;
}


// ==== 10062790 FUN_10062790 depth=1 from=FUN_1017ef00 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f __security_check_cookie@101c16c2 CORE.DLL::appSprintf@EXTERNAL:000001ba CORE.DLL::FString::FString@EXTERNAL:000001b0
// strings: 10245ae8=%d%s %d%s %d%s | 

void FUN_10062790(FString *param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  void *local_414;
  undefined1 *puStack_410;
  undefined4 local_40c;
  ushort local_408 [512];
  uint local_8;
  
  puStack_410 = &LAB_101e353a;
  local_414 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_408;
  ExceptionList = &local_414;
  local_40c = 1;
  iVar1 = (param_2 % 0x15180) / 0xe10;
  iVar5 = ((param_2 % 0x15180) % 0xe10) / 0x3c;
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6dcf0));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6dce4));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6dcd8));
  appSprintf(local_408,(ushort *)L"%d%s %d%s %d%s",param_2 / 0x15180,puVar4,iVar1,puVar3,iVar5,
             puVar2);
  FString::FString(param_1,local_408);
  ExceptionList = local_414;
  __security_check_cookie(local_8 ^ (uint)local_408);
  return;
}


// ==== 100210c0 FUN_100210c0 depth=1 from=FUN_1017ef00 callees=
// strings: 

void __thiscall
FUN_100210c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101db180;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x134))
            (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
             param_12);
  ExceptionList = local_10;
  return;
}


// ==== 10182730 FUN_10182730 depth=1 from=FUN_10184100 callees=FUN_100217a0@100217a0 CORE.DLL::FString::FString@EXTERNAL:000001a4 __security_check_cookie@101c16c2 FUN_100216e0@100216e0 FUN_1014e330@1014e330 FUN_10021a00@10021a00 FUN_1002cc30@1002cc30 CORE.DLL::appSprintf@EXTERNAL:000001ba FUN_1014e290@1014e290 FUN_10145ed0@10145ed0 __alloca_probe@101c2730 FUN_10145ba0@10145ba0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_1014e1f0@1014e1f0 FUN_10164d80@10164d80 FUN_10020bb0@10020bb0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10146040@10146040 FUN_10145ab0@10145ab0
// strings: 1028cbd4=%s :  | 1028cbd4=%s :  | 1028cbd4=%s :  | 1028cbd4=%s :  | 1028cbd4=%s :  | 1028cbd4=%s :  | 1028cbd4=%s :  | 1028cbc4=%s / %s | 1028cbd4=%s :  | 1028cbd4=%s :  | 1028cbd4=%s :  | 1028cbd4=%s :  | 1028cbb8=X %d | 1028cbd4=%s :  | 1028cbb8=X %d | 1028cbd4=%s :  | 1028cbd4=%s :  | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_10182730(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  FString *pFVar5;
  int local_1040;
  int local_103c;
  int local_1038;
  undefined1 local_1034 [4];
  int local_1030;
  int local_102c;
  FString local_1028 [12];
  FString local_101c [12];
  ushort local_1010 [2048];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102140d8;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_1040;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffefb0;
  ExceptionList = &local_c;
  if (param_3 == 0) goto LAB_10183ded;
  FUN_10021a00(param_4 + -1,param_5 + -1,0x22,0x22,0,0,0x22,0x22,*(undefined4 *)(param_1 + 0x2e4),
               0xff,1);
  FUN_10021a00(param_4,param_5,0x20,0x20,0,0,0x20,0x20,*(undefined4 *)(param_3 + 0x34),0xff,1);
  FUN_100216e0(local_1034,0x41,0,uVar1);
  FString::FString(local_101c);
  local_4 = 0;
  pFVar5 = local_101c;
  uVar2 = FUN_1002cc30(pFVar5);
  FUN_10146040(uVar2,pFVar5);
  FString::FString(local_1028);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_10145ba0(*(undefined4 *)(param_3 + 0x1e50),*(undefined4 *)(param_3 + 0x1e6c),local_1028,
               *(undefined4 *)(param_3 + 0x1eb8));
  iVar4 = *(int *)(param_3 + 0x1e50);
  local_1040 = param_5 + 8 + local_1030;
  local_102c = 0x2e;
  if (iVar4 == 0) {
    puVar3 = FString::operator*(local_1028);
    uVar2 = FUN_10145ab0(*(undefined4 *)(param_3 + 0x1e78));
    appSprintf(local_1010,(ushort *)L"%s / %s",uVar2,puVar3);
    FUN_100217a0(0x2e,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    local_1040 = local_1040 + 0x14;
    local_102c = param_4;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad44));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(param_4,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_4,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad44));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    uVar2 = FUN_1014e1f0(*(undefined4 *)(param_3 + 0x1e78),*(undefined4 *)(param_3 + 0x1e6c),
                         *(undefined4 *)(param_3 + 0x1ea0),*(undefined4 *)(param_3 + 0x1e80),
                         *(undefined4 *)(param_3 + 0x1ec4));
    appSprintf(local_1010,(ushort *)&DAT_10233718,uVar2);
    FUN_100217a0(local_103c + param_4,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    local_1040 = local_1040 + 4 + local_1030;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad74));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(param_4,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_4,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad74));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    uVar2 = FUN_1014e290(*(undefined4 *)(param_3 + 0x1e78),*(undefined4 *)(param_3 + 0x1e6c),
                         *(undefined4 *)(param_3 + 0x1ea0),*(undefined4 *)(param_3 + 0x1e80),
                         *(undefined4 *)(param_3 + 0x1ec8));
    appSprintf(local_1010,(ushort *)&DAT_10233718,uVar2);
    FUN_100217a0(local_103c + param_4,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    local_1040 = local_1040 + 4 + local_1030;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ae10));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(param_4,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_4,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ae10));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    uVar2 = FUN_10145ed0(*(undefined4 *)(param_3 + 0x1eb0));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,uVar2);
    FUN_100217a0(local_103c + param_4,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    local_1040 = local_1040 + 4 + local_1030;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bbcc));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(param_4,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_4,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bbcc));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)L"X %d",*(undefined4 *)(param_3 + 0x1ee8));
    FUN_100217a0(local_103c + param_4,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    local_1040 = local_1040 + 4 + local_1030;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6c01c));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(param_4,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_4,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6c01c));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)L"X %d",*(undefined4 *)(param_3 + 0x1eec));
LAB_10183966:
    FUN_100217a0(local_103c + param_4,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    local_1040 = local_1040 + 4 + local_1030;
  }
  else if (iVar4 == 1) {
    puVar3 = FString::operator*(local_1028);
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(0x2e,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    local_1040 = local_1040 + 0x14;
    local_102c = param_4;
    if (((*(uint *)(param_3 + 0x1e6c) & 0x100) == 0) && (-1 < (char)*(uint *)(param_3 + 0x1e6c))) {
      iVar4 = FUN_10164d80(*(undefined4 *)(param_3 + 0x1e5c));
      if (iVar4 == 0) {
        puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad50));
        appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
        FUN_100217a0(param_4,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
        FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
        appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
        FUN_100217a0(local_103c + param_4,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                     0xffffffff);
        puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad50));
        appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
        FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
        uVar2 = FUN_1014e330(*(undefined4 *)(param_3 + 0x1ea0),*(undefined4 *)(param_3 + 0x1e80),
                             *(undefined4 *)(param_3 + 0x1ecc));
        appSprintf(local_1010,(ushort *)&DAT_10233718,uVar2);
        goto LAB_10183966;
      }
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bb0c));
      appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
      FUN_100217a0(param_4,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
      FUN_100217a0(local_103c + param_4,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bb0c));
      appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_10233718,*(undefined4 *)(param_3 + 0x1ee4));
      FUN_100217a0(local_103c + param_4,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      local_1040 = local_1040 + 4 + local_1030;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad50));
      appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
      FUN_100217a0(param_4,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
      FUN_100217a0(local_103c + param_4,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad50));
      appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      uVar2 = FUN_1014e330(*(undefined4 *)(param_3 + 0x1ea0),*(undefined4 *)(param_3 + 0x1e80),
                           *(undefined4 *)(param_3 + 0x1ecc));
      appSprintf(local_1010,(ushort *)&DAT_10233718,uVar2);
      FUN_100217a0(local_103c + param_4,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      local_1040 = local_1040 + 4 + local_1030;
    }
    else {
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad50));
      appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
      FUN_100217a0(param_4,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
      FUN_100217a0(local_103c + param_4,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad50));
      appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      uVar2 = FUN_1014e330(*(undefined4 *)(param_3 + 0x1ea0),*(undefined4 *)(param_3 + 0x1e80),
                           *(undefined4 *)(param_3 + 0x1ed4));
      appSprintf(local_1010,(ushort *)&DAT_10233718,uVar2);
      FUN_100217a0(local_103c + param_4,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      local_1040 = local_1040 + 4 + local_1030;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b7b8));
      appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
      FUN_100217a0(param_4,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
      FUN_100217a0(local_103c + param_4,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b7b8));
      appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_10233718,*(undefined4 *)(param_3 + 0x1ed8));
      FUN_100217a0(local_103c + param_4,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      local_1040 = local_1040 + 4 + local_1030;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad68));
      appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
      FUN_100217a0(param_4,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
      FUN_100217a0(local_103c + param_4,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad68));
      appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_10233718,*(undefined4 *)(param_3 + 0x1ebc));
      FUN_100217a0(local_103c + param_4,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      local_1040 = local_1040 + 4 + local_1030;
    }
  }
  else if (iVar4 == 2) {
    puVar3 = FString::operator*(local_1028);
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(0x2e,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    local_1040 = local_1040 + 0x14;
    local_102c = param_4;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad80));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(param_4,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_4,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad80));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    uVar2 = FUN_1014e330(*(undefined4 *)(param_3 + 0x1ea0),*(undefined4 *)(param_3 + 0x1e80),
                         *(undefined4 *)(param_3 + 0x1ed0));
    appSprintf(local_1010,(ushort *)&DAT_10233718,uVar2);
    FUN_100217a0(local_103c + param_4,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    local_1040 = local_1040 + 4 + local_1030;
  }
  switch(*(undefined4 *)(param_3 + 0x1e50)) {
  case 0:
  case 1:
  case 2:
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab4c));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    param_4 = local_102c;
    FUN_100217a0(local_102c,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_4,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab4c));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_10233718,*(undefined4 *)(param_3 + 0x1e70));
    iVar4 = local_1040;
    FUN_100217a0(local_103c + param_4,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*(local_101c);
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    if (local_1010[0] != 0) {
      iVar4 = iVar4 + 4 + local_1030;
      goto LAB_10183d67;
    }
    break;
  case 3:
    puVar3 = FString::operator*(local_1028);
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(local_102c,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    puVar3 = FString::operator*(local_101c);
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    if (local_1010[0] == 0) break;
    iVar4 = local_1040 + 4 + local_1030;
    FUN_100217a0(param_4,iVar4,0xffb2becf,local_1010,200,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    goto LAB_10183dae;
  case 5:
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab4c));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(local_102c,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + local_102c,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab4c));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_10233718,*(undefined4 *)(param_3 + 0x1e70));
    FUN_100217a0(local_103c + local_102c,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
  default:
    puVar3 = FString::operator*(local_101c);
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    if (local_1010[0] != 0) {
      iVar4 = local_1040 + 4 + local_1030;
LAB_10183d67:
      FUN_100217a0(param_4,iVar4,0xffb2becf,local_1010,200,0,0,0,0,0,0,0,0,0,0,0xffffffff);
LAB_10183dae:
      FUN_10020bb0(&local_103c,local_1010,200,0,0,0,0,0);
      local_1040 = iVar4 + local_1038;
    }
  }
  local_4 = local_4 & 0xffffff00;
  FString::~FString(local_1028);
  local_4 = 0xffffffff;
  FString::~FString(local_101c);
LAB_10183ded:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_1040);
  return;
}


// ==== 1002f160 FUN_1002f160 depth=1 from=FUN_10185ed0 callees=FUN_1002db10@1002db10
// strings: 

int FUN_1002f160(void)

{
  if (DAT_10363f48 == 0) {
    FUN_1002db10();
  }
  return DAT_10363f48;
}


// ==== 101b57d0 FUN_101b57d0 depth=1 from=FUN_10185ed0 callees=FUN_101b5360@101b5360
// strings: 

undefined4 FUN_101b57d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219ad0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b5360(param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) == 3)) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10040090 FUN_10040090 depth=1 from=FUN_101895c0 callees=FUN_1003fb30@1003fb30 CORE.DLL::FString::Printf@EXTERNAL:000001a7 CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 

void FUN_10040090(FString *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de249;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::Len(param_1);
  if (iVar1 != 0) {
    uVar2 = FString::Printf((ushort *)local_28,&DAT_10233718,param_2);
    local_8._0_1_ = 1;
    FUN_1003fb30(param_1,uVar2,0);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10189240 FUN_10189240 depth=1 from=FUN_101895c0 callees=FUN_101c19e0@101c19e0 FUN_10188300@10188300 FUN_10021b30@10021b30
// strings: 

void __fastcall FUN_10189240(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214c70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)(param_1 + 600);
  piVar2 = (int *)(param_1 + 0x254);
  FUN_10188300(piVar2,piVar1,*(undefined4 *)(param_1 + 0x250));
  *piVar2 = *piVar2 - *(int *)(param_1 + 0x25c);
  iVar3 = *piVar2;
  *piVar1 = *piVar1 - *(int *)(param_1 + 0x260);
  iVar4 = *piVar1;
  iVar5 = *(int *)(param_1 + 0x234);
  if ((iVar5 != 0) && (0xb < iVar3)) {
    iVar6 = FUN_101c19e0();
    if ((iVar3 <= iVar6 + -0xc) && (0xb < iVar4)) {
      iVar6 = FUN_101c19e0();
      if (iVar4 < iVar6 + -0xc) {
        FUN_10021b30(iVar3,iVar4,iVar5,0xff);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1003f970 FUN_1003f970 depth=1 from=FUN_101895c0 callees=CORE.DLL::FString::FString@EXTERNAL:000001a4
// strings: 

FString * __fastcall FUN_1003f970(FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101de0d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FString::FString(param_1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 10189490 FUN_10189490 depth=1 from=FUN_101895c0 callees=FUN_101c19e0@101c19e0 FUN_10188400@10188400 FUN_10021a00@10021a00
// strings: 

void __fastcall FUN_10189490(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uStack_58;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214cb0;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101c19e0();
  iVar2 = FUN_101c19e0();
  iVar3 = FUN_101c19e0();
  if (((iVar1 != 0) || (iVar2 != 0)) || (iVar3 != 0)) {
    FUN_10188400(iVar1,iVar2,&local_18,&local_1c,*(undefined4 *)(param_1 + 0x250));
    local_18 = local_18 - *(int *)(param_1 + 0x25c);
    local_1c = local_1c - *(int *)(param_1 + 0x260);
    FUN_10021a00(local_18,local_1c + -0x14,0x20,0x20,0,0,0x20,0x20,*(undefined4 *)(param_1 + 0x23c),
                 0xff,1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10188400 FUN_10188400 depth=1 from=FUN_101895c0 callees=FUN_10188010@10188010
// strings: 

void FUN_10188400(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102149d0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  FUN_10188010(&param_1,&param_2,&local_18,0,param_5);
  *param_3 = param_1;
  *param_4 = param_2;
  ExceptionList = local_10;
  return;
}


// ==== 10189130 FUN_10189130 depth=1 from=FUN_101895c0 callees=FUN_10187f50@10187f50 FUN_101c19e0@101c19e0 FUN_10187a60@10187a60 FUN_10187e90@10187e90 FUN_10021a00@10021a00 CORE.DLL::appFailAssert@EXTERNAL:0000018a
// strings: 1028e4a4=.\Src\NMinimapWnd.cpp | 1028e498=pZoneName | 

void __thiscall FUN_10189130(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214c50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x250);
  iVar2 = FUN_10187a60(puVar1);
  if (iVar2 == 0) {
    appFailAssert("pZoneName",".\\Src\\NMinimapWnd.cpp",0x280);
  }
  FUN_10187e90(*puVar1);
  FUN_10187f50(*puVar1);
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0();
  FUN_10021a00(0,0,uVar3,uVar4,*(undefined4 *)(param_1 + 0x25c),*(undefined4 *)(param_1 + 0x260),
               uVar3,uVar4,*param_3,0xff,1);
  ExceptionList = local_10;
  return;
}


// ==== 101b5c90 FUN_101b5c90 depth=1 from=FUN_101895c0 callees=CORE.DLL::FString::FString@EXTERNAL:0000019e
// strings: 

FString * __thiscall FUN_101b5c90(FString *param_1,FString *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219bda;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_2,param_1);
  ExceptionList = local_10;
  return param_2;
}


// ==== 100d1790 FUN_100d1790 depth=1 from=FUN_101895c0 callees=FUN_100d04e0@100d04e0 FUN_100d1000@100d1000 FUN_100d0a70@100d0a70 FUN_100d01f0@100d01f0 UUIScript::eventOnEvent@1007f210
// strings: 1025be98=script not found ,event id : %d | 

undefined4 __thiscall FUN_100d1790(undefined4 param_1,int param_2,FString *param_3)

{
  UUIScript *this;
  int iVar1;
  FString *pFVar2;
  int iVar3;
  uint uStack_3c;
  int local_2c;
  int local_28;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f8348;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100d04e0();
  local_8._0_1_ = 1;
  FUN_100d0a70(&param_2,&local_2c);
  pFVar2 = param_3;
  iVar1 = param_2;
  if (local_28 != 0) {
    local_18 = 0;
    while (iVar3 = local_18, local_18 < local_28) {
      this = *(UUIScript **)(local_2c + local_18 * 4);
      if (this != (UUIScript *)0x0) {
        UUIScript::eventOnEvent(this,iVar1,pFVar2);
      }
      local_18 = iVar3 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100d1000();
    ExceptionList = local_10;
    return 1;
  }
  FUN_100d01f0(param_1,L"script not found ,event id : %d",param_2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100d1000();
  ExceptionList = local_10;
  return 0;
}


// ==== 10187a60 FUN_10187a60 depth=1 from=FUN_101895c0 callees=
// strings: 

undefined4 __thiscall FUN_10187a60(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[3] + (param_1[4] - 1U & *param_2) * 4);
  if (iVar2 != -1) {
    iVar1 = *param_1;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_2) {
        return *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc);
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 101ae990 FUN_101ae990 depth=1 from=FUN_101895c0 callees=FUN_101ad930@101ad930
// strings: 

undefined4 __thiscall FUN_101ae990(int param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102186a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad930(param_2);
  if (iVar1 == -1) {
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return *(undefined4 *)(*(int *)(param_1 + 0x34) + iVar1 * 4);
}


// ==== 1003fff0 FUN_1003fff0 depth=1 from=FUN_101895c0 callees=CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_1003faa0@1003faa0
// strings: 

void __fastcall FUN_1003fff0(FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de219;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_1003faa0();
  local_8 = 0xffffffff;
  FString::~FString(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10189340 FUN_10189340 depth=1 from=FUN_101895c0 callees=FUN_101c19e0@101c19e0 FUN_10188400@10188400 FUN_10021a00@10021a00
// strings: 

void __fastcall FUN_10189340(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_44;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214c90;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  for (local_18 = 0; local_18 < *(int *)(param_1 + 0x200); local_18 = local_18 + 1) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x1fc) + local_18 * 0xc);
    FUN_10188400(*puVar1,puVar1[1],&local_1c,&local_20,*(undefined4 *)(param_1 + 0x250));
    iVar4 = local_1c - *(int *)(param_1 + 0x25c);
    iVar3 = local_20 - *(int *)(param_1 + 0x260);
    local_20 = iVar3;
    local_1c = iVar4;
    if ((*(int *)(param_1 + 0x238) != 0) && (0xb < iVar4)) {
      iVar2 = FUN_101c19e0();
      if ((iVar4 <= iVar2 + -0xc) && (0xb < iVar3)) {
        iVar2 = FUN_101c19e0();
        if (iVar3 < iVar2 + -0xc) {
          FUN_10021a00(iVar4 + -0x10,iVar3 + -0x1f,0x20,0x20,0,0,0x20,0x20,
                       *(undefined4 *)(param_1 + 0x238),0xff,1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10187910 FUN_10187910 depth=1 from=FUN_101895c0 callees=FUN_10021a00@10021a00 FUN_10187760@10187760
// strings: 

void __fastcall FUN_10187910(int param_1)

{
  int iVar1;
  int iVar2;
  uint uStack_4c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214860;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
      FUN_10187760(iVar1,iVar2,*(undefined4 *)(param_1 + 0x25c),*(undefined4 *)(param_1 + 0x260),
                   &local_2c,&local_28,&local_18,&local_1c,&local_24,&local_20);
      if ((0 < local_18) && (0 < local_1c)) {
        FUN_10021a00(local_2c,local_28,local_18,local_1c,local_24,local_20,local_18,local_1c,
                     *(undefined4 *)(param_1 + 0x1cc + (iVar1 + iVar2 * 2) * 4),0xff,1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10187d60 FUN_10187d60 depth=1 from=FUN_101895c0 callees=FUN_101c19e0@101c19e0 FUN_101870b0@101870b0 FUN_10021a00@10021a00 FUN_10187540@10187540
// strings: 

void __fastcall FUN_10187d60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_38;
  undefined4 local_34;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102148d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (local_20 = 0; local_20 < *(int *)(param_1 + 0x220); local_20 = local_20 + 1) {
    FUN_101870b0(*(int *)(param_1 + 0x21c) + local_20 * 0x28);
    local_8._0_1_ = 1;
    iVar2 = local_48 - *(int *)(param_1 + 0x25c);
    iVar3 = local_44 - *(int *)(param_1 + 0x260);
    if (-0x3e < iVar2) {
      iVar1 = FUN_101c19e0();
      if ((iVar2 < iVar1 + 0x3d) && (-0x3e < iVar3)) {
        iVar1 = FUN_101c19e0();
        if (iVar3 < iVar1 + 0x3d) {
          FUN_10021a00(iVar2,iVar3,local_38,local_34,0,0,local_38,local_34,local_4c,0xff,1);
        }
      }
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10187540();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10005c30 FUN_10005c30 depth=1 from=FUN_101895c0 callees=FUN_10005270@10005270
// strings: 

int FUN_10005c30(void)

{
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  return DAT_1035786c;
}


// ==== 10187130 FUN_10187130 depth=1 from=FUN_101895c0 callees=FUN_100217a0@100217a0 FUN_10020e80@10020e80 __security_check_cookie@101c16c2 FUN_101c19e0@101c19e0 CORE.DLL::appSprintf@EXTERNAL:000001ba FUN_10020bb0@10020bb0
// strings: 

void __thiscall FUN_10187130(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uStack_258;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  undefined4 local_220;
  int local_21c;
  undefined1 *local_218;
  void *local_214;
  undefined1 *puStack_210;
  undefined4 local_20c;
  ushort local_208 [256];
  uint local_8;
  
  puStack_210 = &LAB_10214760;
  local_214 = ExceptionList;
  uStack_258 = DAT_103554c4 ^ (uint)local_208;
  local_218 = (undefined1 *)&uStack_258;
  ExceptionList = &local_214;
  local_220 = param_2;
  local_20c = 0;
  local_22c = 0x3d;
  local_230 = 0x3d;
  iVar3 = 0x3d - *(int *)(param_1 + 0x25c) % 0x3d;
  iVar4 = 0x3d - *(int *)(param_1 + 0x260) % 0x3d;
  local_224 = *(int *)(param_1 + 0x25c) / 0x3d + 0x14;
  local_228 = *(int *)(param_1 + 0x260) / 0x3d + 0x14;
  local_21c = 0;
  local_8 = uStack_258;
  while( true ) {
    iVar1 = FUN_101c19e0();
    if (iVar1 < local_21c) break;
    if (-1 < local_224) {
      appSprintf(local_208,(ushort *)&DAT_10233718,local_224);
      FUN_10020bb0(&local_238,local_208,0,0,0,0,0,0);
      if (0xf < iVar3) {
        FUN_100217a0(iVar3 - local_238 / 2,2,0xffdcdcdc,local_208,0,0,0,1,0,0,0,0,0,0,0,0xffffffff);
      }
    }
    uVar6 = 1;
    uVar5 = 0x40000000;
    uVar2 = FUN_101c19e0(0x40000000,1);
    FUN_10020e80(iVar3,local_234,iVar3,uVar2,uVar5,uVar6);
    iVar3 = iVar3 + local_22c;
    local_224 = local_224 + 1;
    local_21c = local_21c + 1;
  }
  local_21c = 0;
  while( true ) {
    iVar1 = FUN_101c19e0();
    iVar3 = local_228;
    if (iVar1 < local_21c) break;
    if (-1 < local_228) {
      appSprintf(local_208,(ushort *)&DAT_10233718,local_228 + 1);
      FUN_10020bb0(&local_238,local_208,0,0,0,0,0,0);
      if (0x14 < iVar4) {
        FUN_100217a0(0,iVar4 - local_234 / 2,0xffdcdcdc,local_208,0,0,0,1,0,0,0,0,0,0,0,0xffffffff);
      }
    }
    uVar6 = 1;
    uVar5 = 0x40000000;
    iVar1 = iVar4;
    uVar2 = FUN_101c19e0(iVar4,0x40000000,1);
    FUN_10020e80(local_238,iVar4,uVar2,iVar1,uVar5,uVar6);
    iVar4 = iVar4 + local_230;
    local_228 = iVar3 + 1;
    local_21c = local_21c + 1;
  }
  local_20c = 0xffffffff;
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}


// ==== 10004190 FUN_10004190 depth=1 from=FUN_101895c0 callees=CORE.DLL::FString::operator_int@EXTERNAL:000001a1 CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_10054cc0@10054cc0
// strings: 

void __thiscall FUN_10004190(int param_1,FString *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10054cc0();
  iVar1 = FString::operator_int(param_2);
  if (iVar1 != 0) {
    FString::operator=((FString *)(param_1 + 0x310),param_2);
    *(undefined4 *)(param_1 + 0x2e0) = param_3;
    *(undefined4 *)(param_1 + 0x328) = param_4;
  }
  ExceptionList = local_10;
  return;
}


// ==== 100d10a0 FUN_100d10a0 depth=1 from=FUN_101895c0 callees=FUN_1000b930@1000b930
// strings: 

void __fastcall FUN_100d10a0(int *param_1)

{
  int iVar1;
  
  if (param_1[3] != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10)) {
      do {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) / 2;
      } while (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10));
    }
    FUN_1000b930();
    return;
  }
  return;
}


// ==== 101aa9e0 FUN_101aa9e0 depth=1 from=FUN_101ab1c0 callees=FUN_10021640@10021640 FUN_101c19e0@101c19e0
// strings: 

void __fastcall FUN_101aa9e0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021640(param_1[4],*param_1,param_1[1],uVar2,uVar1);
  ExceptionList = local_10;
  return;
}


