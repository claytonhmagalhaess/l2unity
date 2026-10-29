// ==== 10059eb0 FUN_10059eb0 depth=0 from=raiz callees=
// strings: 

undefined4 FUN_10059eb0(void)

{
  return 0;
}


// ==== 10097220 FUN_10097220 depth=0 from=raiz callees=FUN_10021970@10021970 FUN_100217a0@100217a0 FUN_100c72c0@100c72c0 __alloca_probe@101c2730 FUN_10021df0@10021df0 FUN_10020bb0@10020bb0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 __security_check_cookie@101c16c2
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_10097220(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uStack_2038;
  undefined1 auStack_2020 [4];
  int iStack_201c;
  undefined1 *puStack_2018;
  void *pvStack_2014;
  undefined *puStack_2010;
  undefined4 uStack_200c;
  ushort auStack_2008 [2048];
  undefined1 auStack_1008 [4096];
  uint uStack_8;
  
  puStack_2010 = &UNK_101ec8e0;
  pvStack_2014 = ExceptionList;
  uStack_2038 = DAT_103554c4 ^ (uint)auStack_2008;
  puStack_2018 = (undefined1 *)&uStack_2038;
  ExceptionList = &pvStack_2014;
  uStack_200c = 0;
  uStack_8 = uStack_2038;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x2ec) != 0) {
    FUN_10021a00(0,0,0x10,0x14,0,0,0x10,0x14,*(int *)(param_1 + 0x2ec),0xff,1);
  }
  iVar11 = *(int *)(param_1 + 0x2f4);
  if (iVar11 != 0) {
    uVar13 = 1;
    uVar12 = 0xff;
    uVar10 = 0x14;
    uVar9 = 0x10;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0x14;
    uVar5 = 0x10;
    uVar2 = 0;
    uVar1 = FUN_101c19e0(0,0x10,0x14,0,0,0x10,0x14,iVar11,0xff,1);
    FUN_10021a00(uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,iVar11,uVar12,uVar13);
  }
  iVar11 = *(int *)(param_1 + 0x2f0);
  if (iVar11 != 0) {
    uVar9 = 0xff;
    uVar8 = 0x14;
    uVar7 = 0x20;
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = 0x14;
    uVar1 = FUN_101c19e0(0x14,0,0,0x20,0x14,iVar11,0xff);
    FUN_10021970(0x10,0,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,iVar11,uVar9);
  }
  if ((*(int *)(param_1 + 800) == 0) && (*(int *)(param_1 + 0x324) == 0)) {
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = 0;
    uVar1 = 0;
    puVar3 = FString::operator*((FString *)(param_1 + 0x2d8));
    FUN_10020bb0(auStack_2020,puVar3,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8);
    *(undefined4 *)(param_1 + 800) = 0x14;
    iStack_201c = iStack_201c / 2;
    uVar1 = FUN_101c19e0();
    *(undefined4 *)(param_1 + 0x324) = uVar1;
  }
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7d4));
  puVar4 = FString::operator*((FString *)(param_1 + 0x2d8));
  appSprintf(auStack_2008,(ushort *)L"%s - %s",puVar4,puVar3);
  FUN_10020bb0(auStack_2020,auStack_2008,0,0,0,0,0,0);
  uVar1 = FUN_101c19e0(0xc);
  FUN_100c72c0(auStack_2008,auStack_1008,uVar1);
  FUN_100217a0(*(undefined4 *)(param_1 + 800),*(undefined4 *)(param_1 + 0x324),0xffdcdcdc,
               auStack_1008,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = pvStack_2014;
  __security_check_cookie(uStack_8 ^ (uint)auStack_2008);
  return;
}


// ==== 100994d0 FUN_100994d0 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10098d60@10098d60 FUN_100c72c0@100c72c0 __security_check_cookie@101c16c2 FUN_10096770@10096770 FUN_10021df0@10021df0 FUN_10020bb0@10020bb0 FUN_100abd40@100abd40 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_100abc50@100abc50 FUN_100212e0@100212e0
// strings: 

void __thiscall FUN_100994d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  FString *pFVar5;
  undefined1 *puVar6;
  uint uStack_4bc;
  undefined1 auStack_4ac [72];
  int iStack_464;
  int iStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  int iStack_454;
  int iStack_450;
  int iStack_44c;
  undefined4 uStack_448;
  FString aFStack_440 [4];
  int aiStack_43c [2];
  FString aFStack_434 [12];
  undefined1 *puStack_428;
  void *pvStack_424;
  undefined *puStack_420;
  int iStack_41c;
  undefined1 auStack_418 [520];
  ushort auStack_210 [260];
  uint uStack_8;
  
  puStack_420 = &UNK_101ecdaa;
  pvStack_424 = ExceptionList;
  uStack_4bc = DAT_103554c4 ^ (uint)auStack_418;
  puStack_428 = (undefined1 *)&uStack_4bc;
  ExceptionList = &pvStack_424;
  iStack_41c = 0;
  uStack_8 = uStack_4bc;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  if (*(int *)(param_1 + 0xaf4) != 0) {
    FUN_10021a00(0,0x14,0x100,0x17d,0,0,0x100,0x17d,*(int *)(param_1 + 0xaf4),0xff,1);
  }
  if (*(int *)(param_1 + 0x1d4) != 0) {
    puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d84c));
    appStrcpy(auStack_210,puVar4);
    FUN_100217a0(8,0x22,0xffdcdcdc,auStack_210,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(aiStack_43c,auStack_210,0,0,0,0,0,0);
    uVar2 = *(undefined4 *)(param_1 + 0xa2c);
    puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d858));
    appSprintf(auStack_210,(ushort *)L"%d%s",uVar2,puVar4);
    FUN_100217a0(aiStack_43c[0] + 10,0x22,0xffdcdcdc,auStack_210,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  }
  FString::FString(aFStack_434);
  iStack_41c._0_1_ = 1;
  if (*(int *)(param_1 + 0xa18) < 2) {
    if (*(int *)(param_1 + 0xa18) == 1) {
      iStack_464 = param_1 + 0xa14;
      uStack_45c = 0;
      uStack_458 = 0;
      iStack_41c._0_1_ = 6;
      iStack_460 = iStack_464;
      FUN_10096770(auStack_4ac);
      iStack_41c._0_1_ = 7;
      pFVar5 = (FString *)FUN_100abd40(aFStack_440);
      iStack_41c._0_1_ = 8;
      FString::operator+=(aFStack_434,pFVar5);
      iStack_41c._0_1_ = 7;
      FString::~FString(aFStack_440);
      iStack_41c._0_1_ = 6;
      FUN_100abc50();
      FString::operator+=(aFStack_434,&DAT_1023d5d0);
      puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x424a4));
      FString::operator+=(aFStack_434,puVar4);
      iStack_41c._0_1_ = 1;
      FUN_10098d60();
    }
  }
  else {
    puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d8e8));
    FString::operator=(aFStack_434,puVar4);
    FString::operator+=(aFStack_434,(ushort *)&DAT_10251de4);
    iStack_454 = param_1 + 0xa14;
    uStack_448 = 0;
    iStack_41c._0_1_ = 2;
    iStack_44c = 0;
    iStack_450 = iStack_454;
    while (iVar1 = iStack_44c, iStack_44c < *(int *)(param_1 + 0xa18)) {
      FUN_10096770(auStack_4ac);
      iStack_41c._0_1_ = 3;
      pFVar5 = (FString *)FUN_100abd40(aFStack_440);
      iStack_41c._0_1_ = 4;
      FString::operator+=(aFStack_434,pFVar5);
      iStack_41c._0_1_ = 3;
      FString::~FString(aFStack_440);
      iStack_41c._0_1_ = 2;
      FUN_100abc50();
      FString::operator+=(aFStack_434,(ushort *)&DAT_10246d48);
      iStack_44c = iVar1 + 1;
    }
    iStack_41c._0_1_ = 1;
    FUN_10098d60();
    FString::Len(aFStack_434);
    pFVar5 = (FString *)FString::Left(aFStack_434,(int)aFStack_440);
    iStack_41c._0_1_ = 5;
    FString::operator=(aFStack_434,pFVar5);
    iStack_41c._0_1_ = 1;
    FString::~FString(aFStack_440);
  }
  uVar3 = 0xc;
  uVar2 = 0xee;
  puVar6 = auStack_418;
  puVar4 = FString::operator*(aFStack_434);
  FUN_100c72c0(puVar4,puVar6,uVar2,uVar3);
  FUN_100217a0(9,0x17d,0xffdcdcdc,auStack_418,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  iStack_41c = (uint)iStack_41c._1_3_ << 8;
  FString::~FString(aFStack_434);
  ExceptionList = pvStack_424;
  __security_check_cookie(uStack_8 ^ (uint)auStack_418);
  return;
}


// ==== 1009e4b0 FUN_1009e4b0 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10021df0@10021df0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 __security_check_cookie@101c16c2
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1009e4b0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 uStack_230;
  void *pvStack_21c;
  undefined *puStack_218;
  undefined4 uStack_214;
  ushort auStack_210 [260];
  uint uStack_8;
  
  puStack_218 = &UNK_101edfd0;
  pvStack_21c = ExceptionList;
  uStack_8 = DAT_103554c4 ^ (uint)auStack_210;
  ExceptionList = &pvStack_21c;
  uStack_214 = 0;
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  if (*(int *)(param_1 + 0x2e4) != 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(param_1 + 0x2e4),0xff,1);
  }
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x42614));
  appStrcpy(auStack_210,puVar3);
  uStack_230 = (undefined4)(longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_1023c288);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_210,uStack_230,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = pvStack_21c;
  __security_check_cookie(uStack_8 ^ (uint)auStack_210);
  return;
}


// ==== 1009ea20 FUN_1009ea20 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10021df0@10021df0 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 __security_check_cookie@101c16c2
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1009ea20(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined1 auStack_810 [4];
  longlong lStack_80c;
  ushort auStack_804 [1024];
  uint uStack_4;
  
  uStack_4 = DAT_103554c4 ^ (uint)auStack_810;
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
  iVar1 = *(int *)(param_1 + 0x2e8);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41924));
  appStrcpy(auStack_804,puVar4);
  lStack_80c = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_1023c288);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_804,(undefined4)lStack_80c,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  __security_check_cookie(uStack_4 ^ (uint)auStack_810);
  return;
}


// ==== 1009eec0 FUN_1009eec0 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10021df0@10021df0 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 __security_check_cookie@101c16c2
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1009eec0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined1 auStack_218 [4];
  longlong lStack_214;
  ushort auStack_20c [260];
  uint uStack_4;
  
  uStack_4 = DAT_103554c4 ^ (uint)auStack_218;
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
  iVar1 = *(int *)(param_1 + 0x330);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41980));
  appStrcpy(auStack_20c,puVar4);
  lStack_214 = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_1023c288);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_20c,(undefined4)lStack_214,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41a38));
  appStrcpy(auStack_20c,puVar4);
  lStack_214 = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_1023c288);
  FUN_100217a0(0xb,0x57,0xffdcdcdc,auStack_20c,(undefined4)lStack_214,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  __security_check_cookie(uStack_4 ^ (uint)auStack_218);
  return;
}


// ==== 1009fd20 FUN_1009fd20 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10021df0@10021df0 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 __security_check_cookie@101c16c2
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1009fd20(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined1 auStack_218 [4];
  longlong lStack_214;
  ushort auStack_20c [260];
  uint uStack_4;
  
  uStack_4 = DAT_103554c4 ^ (uint)auStack_218;
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
  iVar1 = *(int *)(param_1 + 0x32c);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41b4c));
  appStrcpy(auStack_20c,puVar4);
  lStack_214 = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_1023c288);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_20c,(undefined4)lStack_214,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  __security_check_cookie(uStack_4 ^ (uint)auStack_218);
  return;
}


// ==== 100a02d0 FUN_100a02d0 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10021df0@10021df0 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 __security_check_cookie@101c16c2
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a02d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined1 auStack_810 [4];
  longlong lStack_80c;
  ushort auStack_804 [1024];
  uint uStack_4;
  
  uStack_4 = DAT_103554c4 ^ (uint)auStack_810;
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
  iVar1 = *(int *)(param_1 + 0x2e8);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41ba8));
  appStrcpy(auStack_804,puVar4);
  lStack_80c = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_1023c288);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_804,(undefined4)lStack_80c,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  __security_check_cookie(uStack_4 ^ (uint)auStack_810);
  return;
}


// ==== 100a07f0 FUN_100a07f0 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10021df0@10021df0 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 __security_check_cookie@101c16c2
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a07f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined1 auStack_810 [4];
  longlong lStack_80c;
  ushort auStack_804 [1024];
  uint uStack_4;
  
  uStack_4 = DAT_103554c4 ^ (uint)auStack_810;
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
  iVar1 = *(int *)(param_1 + 0x2ec);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41c04));
  appStrcpy(auStack_804,puVar4);
  lStack_80c = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_10234f70);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_804,(undefined4)lStack_80c,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  __security_check_cookie(uStack_4 ^ (uint)auStack_810);
  return;
}


// ==== 100a0d40 FUN_100a0d40 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10021df0@10021df0 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 __security_check_cookie@101c16c2
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a0d40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined1 auStack_810 [4];
  longlong lStack_80c;
  ushort auStack_804 [1024];
  uint uStack_4;
  
  uStack_4 = DAT_103554c4 ^ (uint)auStack_810;
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
  iVar1 = *(int *)(param_1 + 0x2ec);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41c60));
  appStrcpy(auStack_804,puVar4);
  lStack_80c = (longlong)ROUND(*(float *)(param_1 + 0x88) - (float)_DAT_1023c288);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_804,(undefined4)lStack_80c,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  __security_check_cookie(uStack_4 ^ (uint)auStack_810);
  return;
}


// ==== 1017a1e0 FUN_1017a1e0 depth=0 from=raiz callees=FUN_10021df0@10021df0 FUN_10020bb0@10020bb0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_100212f0@100212f0 FUN_1014dd00@1014dd00 FUN_100133a0@100133a0 FUN_100212e0@100212e0 __security_check_cookie@101c16c2
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1017a1e0(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float10 extraout_ST0;
  float10 fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uStack_150;
  int aiStack_13c [3];
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 *puStack_118;
  void *pvStack_114;
  undefined *puStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [256];
  uint uStack_8;
  
  puStack_110 = &UNK_10213160;
  pvStack_114 = ExceptionList;
  uStack_150 = DAT_103554c4 ^ (uint)auStack_108;
  puStack_118 = (undefined1 *)&uStack_150;
  ExceptionList = &pvStack_114;
  uStack_10c = 0;
  uStack_8 = uStack_150;
  FUN_10002f40();
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  iStack_12c = FUN_1014dd00();
  if (iStack_12c == 0) goto LAB_1017a4f8;
  fStack_120 = (float)*(int *)(iStack_12c + 0x214) / (float)*(int *)(iStack_12c + 0x8c);
  fStack_11c = fStack_120 * (float)_DAT_10234778;
  if ((*(int *)(iStack_12c + 0x8c) == 0) || (iVar4 = FUN_101c19e0(), iStack_128 = iVar4, iVar4 < 1))
  {
    fVar6 = (float10)fStack_11c;
  }
  else {
    fVar6 = (float10)fStack_11c;
    if ((float10)_DAT_1028a190 < fVar6) {
      if (((float10)_DAT_1028a190 < fVar6) && (fVar6 <= (float10)_DAT_1028a188)) {
        uVar2 = *(undefined4 *)(param_1 + 0x1d0);
LAB_1017a383:
        uVar7 = CONCAT44(0xff,uVar2);
        goto LAB_1017a38b;
      }
      if (((float10)_DAT_1028a188 < fVar6) && (fVar6 <= (float10)_DAT_1028a184)) {
        uVar7 = CONCAT44(0xff,*(undefined4 *)(param_1 + 0x1d4));
        goto LAB_1017a38b;
      }
      if (((float10)_DAT_1028a184 < fVar6) &&
         ((!NAN(fVar6) && !NAN(extraout_ST0)) && fVar6 < extraout_ST0 != (fVar6 == extraout_ST0))) {
        uVar7 = CONCAT44(0xff,*(undefined4 *)(param_1 + 0x1d8));
        goto LAB_1017a38b;
      }
      if (extraout_ST0 < fVar6) {
        uVar2 = *(undefined4 *)(param_1 + 0x1dc);
        goto LAB_1017a383;
      }
    }
    else {
      uVar7 = CONCAT44(0xff,*(undefined4 *)(param_1 + 0x1cc));
LAB_1017a38b:
      FUN_10021a00(0,0,iVar4,0xc,0,0,iVar4,0xc,uVar7,1);
      fVar6 = (float10)fStack_11c;
    }
    iStack_130 = *(int *)(param_1 + 0x1e4);
    fVar1 = (float)iStack_130;
    fStack_120 = fVar1;
    if ((0.0 < fVar1) && (fVar6 < (float10)_DAT_10234778)) {
      fStack_120 = *(float *)(iStack_12c + 0x8c);
      fStack_124 = fVar1 / (float)(int)fStack_120;
      iVar5 = FUN_101c19e0();
      fStack_124 = (float)(iVar5 + iVar4);
      if (*(float *)(param_1 + 0x88) < (float)(int)fStack_124) {
        iVar5 = FUN_101c19e0();
      }
      if (*(int *)(iStack_12c + 0x214) + iStack_130 < (int)fStack_120) {
        FUN_10021a00(iVar4,0,iVar5,0xc,0,0,iVar5,0xc,*(undefined4 *)(param_1 + 0x1e0),0xff,1);
        fVar6 = (float10)fStack_11c;
      }
      else {
        FUN_10021a00(iVar4,0,iVar5,0xc,0,0,iVar5,0xc,*(undefined4 *)(param_1 + 0x1dc),0xff,1);
        fVar6 = (float10)fStack_11c;
      }
    }
  }
  FUN_100133a0(auStack_108,L"%.2f%s",(double)fVar6,&DAT_1024129c);
  FUN_10020bb0(aiStack_13c,auStack_108,0,0,0,0,0,0);
  uVar8 = 0xff;
  uVar7 = CONCAT44(auStack_108,0xffdcdcdc);
  uVar3 = 2;
  iStack_128 = aiStack_13c[0] / 2;
  uVar2 = FUN_101c19e0(2,0xffdcdcdc,auStack_108,0xff);
  FUN_100212f0(1,uVar2,uVar3,uVar7,uVar8);
LAB_1017a4f8:
  FUN_100212e0();
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  ExceptionList = pvStack_114;
  __security_check_cookie(uStack_8 ^ (uint)auStack_108);
  return;
}


// ==== 1017a700 FUN_1017a700 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10052970@10052970 FUN_10062ee0@10062ee0 FUN_100519c0@100519c0 FUN_1014dd00@1014dd00 __security_check_cookie@101c16c2 FUN_10021df0@10021df0 FUN_10020bb0@10020bb0 FUN_1002d0b0@1002d0b0 FUN_10002f40@10002f40 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_100676e0@100676e0 FUN_100212e0@100212e0
// strings: 

void __thiscall FUN_1017a700(int param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
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
  uint uStack_2c8;
  undefined1 auStack_2b4 [8];
  FString aFStack_2ac [16];
  undefined1 *puStack_29c;
  undefined1 *puStack_298;
  void *pvStack_294;
  undefined *puStack_290;
  uint uStack_28c;
  ushort auStack_288 [256];
  ushort auStack_88 [64];
  uint uStack_8;
  
  puStack_290 = &UNK_102131d2;
  pvStack_294 = ExceptionList;
  uStack_2c8 = DAT_103554c4 ^ (uint)auStack_288;
  puStack_298 = (undefined1 *)&uStack_2c8;
  ExceptionList = &pvStack_294;
  uStack_28c = 0;
  uStack_8 = uStack_2c8;
  FUN_10002f40();
  FUN_101c19e0();
  FUN_101c19e0();
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80));
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_10021a00(0,0x14,0x100,0x17d,0,0,0x100,0x17d);
  }
  FString::FString(aFStack_2ac);
  uStack_28c._0_1_ = 1;
  iVar1 = func_0x10179bf0();
  puVar2 = appItoa(iVar1);
  FString::operator=(aFStack_2ac,puVar2);
  FString::operator*(aFStack_2ac);
  FUN_10062ee0();
  FString::operator*(aFStack_2ac);
  FUN_100676e0();
  puStack_29c = &stack0xfffffd2c;
  FString::FString((FString *)&stack0xfffffd2c,auStack_288);
  uStack_28c = CONCAT31(uStack_28c._1_3_,1);
  FUN_10052970();
  FUN_100519c0();
  if (*(int *)(param_1 + 0x1e0) != 0) {
    FUN_10021a00(0x62,0x163,0x10,0xc,0,0,0x10,0xc);
  }
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_10021a00(0x62,0x174,0x10,0xc,0,0,0x10,0xc);
  }
  iVar1 = FUN_1014dd00();
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x2a8) != 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x224) + 0xfc))();
      if (iVar1 == 0) {
        (**(code **)(**(int **)(param_1 + 0x224) + 0x138))();
      }
    }
    puStack_29c = *(undefined1 **)(*(int *)(param_1 + 0x1f0) + 0x1d8);
    FUN_1002d0b0();
    FUN_1002d0b0();
    appSprintf(auStack_88,(ushort *)&UNK_1028a218);
  }
  FUN_10020bb0(auStack_2b4,auStack_88,0,0,0);
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  puVar2 = auStack_88;
  uVar5 = 0xffb09b79;
  uVar4 = 0xa2;
  uVar3 = FUN_101c19e0(0xa2,0xffb09b79,puVar2,0,0,0,0,0,0,0,0,0);
  FUN_100217a0(uVar3,uVar4,uVar5,puVar2,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  uStack_28c = uStack_28c & 0xffffff00;
  FString::~FString(aFStack_2ac);
  uStack_28c = 0xffffffff;
  ExceptionList = pvStack_294;
  __security_check_cookie(uStack_8 ^ (uint)auStack_288);
  return;
}


// ==== 1017e280 FUN_1017e280 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10021df0@10021df0 FUN_10020bb0@10020bb0 FUN_10002f40@10002f40 FUN_101460d0@101460d0 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_100212f0@100212f0 FUN_100133a0@100133a0 FUN_100212e0@100212e0 __security_check_cookie@101c16c2
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1017e280(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  uint uStack_c8;
  int iStack_b0;
  int iStack_ac;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined1 *puStack_98;
  void *pvStack_94;
  undefined *puStack_90;
  undefined4 uStack_8c;
  ushort auStack_88 [64];
  uint uStack_8;
  
  puStack_90 = &UNK_10213870;
  pvStack_94 = ExceptionList;
  uStack_c8 = DAT_103554c4 ^ (uint)auStack_88;
  puStack_98 = (undefined1 *)&uStack_c8;
  ExceptionList = &pvStack_94;
  uStack_8c = 0;
  uStack_8 = uStack_c8;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10002f40();
  if (*(int *)(param_1 + 0x1cc) != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,*(undefined4 *)(param_1 + 0x1cc),0xff,1);
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab34));
  FUN_100217a0(0xf,0x10,0xffa3a3a3,puVar4,uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
               uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6acfc));
  FUN_100217a0(0xf,0x27,0xffa3a3a3,puVar4,uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
               uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad98));
  FUN_100217a0(0x83,0x45,0xffdcdcdc,puVar4,uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
               uVar13,uVar14);
  if ((*(int *)(param_1 + 0x1774) < 0) || (*(int *)(param_1 + 6000) < 1)) goto LAB_1017ea39;
  iStack_ac = 0;
  iStack_b0 = 0;
  iStack_a4 = 0;
  iStack_9c = *(int *)(param_1 + 0x1774) * 0x314 + param_1;
  if (*(int *)(iStack_9c + 0x260) != 0) {
    iVar5 = *(int *)(param_1 + 0x1774) * 0x314 + param_1;
    iStack_ac = (*(int *)(iVar5 + 0x264) * 0x55) / *(int *)(iVar5 + 0x260);
  }
  if (*(int *)(iStack_9c + 0x268) != 0) {
    iVar5 = *(int *)(param_1 + 0x1774) * 0x314 + param_1;
    iStack_b0 = (*(int *)(iVar5 + 0x26c) * 0x55) / *(int *)(iVar5 + 0x268);
  }
  if (*(int *)(&UNK_1028b328 + *(int *)(iStack_9c + 0x23c) * 8) != 0 ||
      *(int *)(&UNK_1028b32c + *(int *)(iStack_9c + 0x23c) * 8) != 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1774) * 0x314 + param_1 + 0x23c);
    iStack_a0 = *(uint *)(&UNK_1028b328 + iVar5 * 8) -
                *(uint *)(L"NCLobbyStartWnd" + iVar5 * 4 + 0xe);
    iStack_9c = (*(int *)(&UNK_1028b32c + iVar5 * 8) - *(int *)(&UNK_1028b324 + iVar5 * 8)) -
                (uint)(*(uint *)(&UNK_1028b328 + iVar5 * 8) <
                      *(uint *)(L"NCLobbyStartWnd" + iVar5 * 4 + 0xe));
    iStack_a4 = FUN_101c19e0();
  }
  if (iStack_ac - 1U < 0x55) {
    uVar2 = *(undefined4 *)(param_1 + 0x1d0);
    uVar3 = 0xc;
LAB_1017e533:
    FUN_10021a00(0x23,0x37,iStack_ac,uVar3,0,0,8,0xc,CONCAT44(0xff,uVar2),1);
  }
  else if (0x54 < iStack_ac) {
    uVar2 = *(undefined4 *)(param_1 + 0x1d0);
    uVar3 = 10;
    iStack_ac = 0x55;
    goto LAB_1017e533;
  }
  if (iStack_b0 - 1U < 0x55) {
    uVar2 = *(undefined4 *)(param_1 + 0x1d4);
    uVar3 = 0xc;
LAB_1017e583:
    FUN_10021a00(0x23,0x45,iStack_b0,uVar3,0,0,8,0xc,CONCAT44(0xff,uVar2),1);
  }
  else if (0x54 < iStack_b0) {
    uVar2 = *(undefined4 *)(param_1 + 0x1d4);
    uVar3 = 10;
    iStack_b0 = 0x55;
    goto LAB_1017e583;
  }
  if (iStack_a4 < 1) {
    if (0xce < iStack_a4) goto LAB_1017e5be;
  }
  else {
    if (iStack_a4 < 0xcf) {
      uVar2 = *(undefined4 *)(param_1 + 0x1d8);
      uVar3 = 0xc;
    }
    else {
LAB_1017e5be:
      uVar2 = *(undefined4 *)(param_1 + 0x1d8);
      uVar3 = 10;
      iStack_a4 = 0xce;
    }
    FUN_10021a00(0x23,0x53,iStack_a4,uVar3,0,0,8,0xc,CONCAT44(0xff,uVar2),1);
  }
  iVar5 = *(int *)(param_1 + 0x1774) * 0x314 + param_1;
  iVar1 = *(int *)(iVar5 + 0x23c);
  FUN_100133a0(auStack_88,L"%.2f%s",
               ((double)CONCAT44((*(int *)(iVar5 + 0x244) - *(int *)(&UNK_1028b324 + iVar1 * 8)) -
                                 (uint)(*(uint *)(iVar5 + 0x240) <
                                       *(uint *)(L"NCLobbyStartWnd" + iVar1 * 4 + 0xe)),
                                 *(uint *)(iVar5 + 0x240) -
                                 *(uint *)(L"NCLobbyStartWnd" + iVar1 * 4 + 0xe)) * _DAT_10234778) /
               (double)CONCAT44((*(int *)(&UNK_1028b32c + iVar1 * 8) -
                                *(int *)(&UNK_1028b324 + iVar1 * 8)) -
                                (uint)(*(uint *)(&UNK_1028b328 + iVar1 * 8) <
                                      *(uint *)(L"NCLobbyStartWnd" + iVar1 * 4 + 0xe)),
                                *(uint *)(&UNK_1028b328 + iVar1 * 8) -
                                *(uint *)(L"NCLobbyStartWnd" + iVar1 * 4 + 0xe)),&DAT_1024129c);
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x8a - iStack_a0 / 2,0x55,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_1022dde0,&DAT_1023d810);
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x4d - iStack_a0 / 2,0x39,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_10233718,
             *(undefined4 *)(*(int *)(param_1 + 0x1774) * 0x314 + 0x264 + param_1));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x43 - iStack_a0,0x39,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_10233718,
             *(undefined4 *)(*(int *)(param_1 + 0x1774) * 0x314 + 0x260 + param_1));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x53,0x39,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_1022dde0,&DAT_1023d810);
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x4d - iStack_a0 / 2,0x47,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_10233718,
             *(undefined4 *)(*(int *)(param_1 + 0x1774) * 0x314 + 0x26c + param_1));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x43 - iStack_a0,0x47,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_10233718,
             *(undefined4 *)(*(int *)(param_1 + 0x1774) * 0x314 + 0x268 + param_1));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x53,0x47,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_10233718,
             *(undefined4 *)(*(int *)(param_1 + 0x1774) * 0x314 + 0x3fc + param_1));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100217a0(0xec - iStack_a0,0x38,0xffb09b79,auStack_88,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_101460d0(*(undefined4 *)(*(int *)(param_1 + 0x1774) * 0x314 + 0x4a4 + param_1));
  appSprintf(auStack_88,(ushort *)L"%d %s");
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100217a0(0x20,0x27,0xffb09b79,auStack_88,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  iVar5 = *(int *)(*(int *)(param_1 + 0x1774) * 0x314 + 0x37c + param_1);
  if (iVar5 < 999999) {
    puVar4 = (ushort *)&DAT_10233718;
  }
  else {
    puVar4 = (ushort *)&UNK_1028b878;
  }
  appSprintf(auStack_88,puVar4,iVar5);
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100217a0(0xec - iStack_a0,0x46,0xffb09b79,auStack_88,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
LAB_1017ea39:
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  uStack_8c = 0xffffffff;
  ExceptionList = pvStack_94;
  __security_check_cookie(uStack_8 ^ (uint)auStack_88);
  return;
}


// ==== 10181670 FUN_10181670 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10021df0@10021df0 FUN_10020bb0@10020bb0 FUN_10002f40@10002f40 FUN_10164030@10164030 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_10141090@10141090 FUN_100212e0@100212e0 __security_check_cookie@101c16c2
// strings: 

void __thiscall FUN_10181670(int param_1,int param_2)

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
  uint uStack_438;
  int aiStack_420 [2];
  undefined1 *puStack_418;
  void *pvStack_414;
  undefined *puStack_410;
  undefined4 uStack_40c;
  ushort auStack_408 [512];
  uint uStack_8;
  
  puStack_410 = &UNK_10213ea0;
  pvStack_414 = ExceptionList;
  uStack_438 = DAT_103554c4 ^ (uint)auStack_408;
  puStack_418 = (undefined1 *)&uStack_438;
  ExceptionList = &pvStack_414;
  uStack_40c = 0;
  uStack_8 = uStack_438;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  if (*(int *)(param_1 + 0x1dc) != 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(param_1 + 0x1dc),0xff,1);
  }
  if (*(int *)(param_1 + 0x1cc) == 0) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6afe4));
    if (puVar3 != (ushort *)0x0) {
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar2 = 0;
      uVar1 = 0;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6afe4));
      FUN_10020bb0(aiStack_420,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,uVar13);
      uVar14 = 0xffffffff;
      uVar12 = 0;
      uVar10 = 0;
      uVar8 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar2 = 0;
      uVar1 = 0;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6afe4));
      FUN_100217a0(0x4e - aiStack_420[0],0x17,0xffdcdcdc,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,
                   uVar13,uVar5,uVar6,uVar8,uVar10,uVar12,uVar14);
    }
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6aff0));
    if (puVar3 != (ushort *)0x0) {
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar2 = 0;
      uVar1 = 0;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6aff0));
      FUN_10020bb0(aiStack_420,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,uVar13);
      uVar14 = 0xffffffff;
      uVar12 = 0;
      uVar10 = 0;
      uVar8 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar2 = 0;
      uVar1 = 0;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6aff0));
      FUN_100217a0(0x4e - aiStack_420[0],0x2d,0xffdcdcdc,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,
                   uVar13,uVar5,uVar6,uVar8,uVar10,uVar12,uVar14);
    }
    iVar4 = FUN_10141090();
    if (iVar4 == 0) goto LAB_101818f6;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ede8));
    if (puVar3 == (ushort *)0x0) goto LAB_101818f6;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar2 = 0;
    uVar1 = 0;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ede8));
    FUN_10020bb0(aiStack_420,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,uVar13);
    uVar15 = 0xffffffff;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar2 = 0;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ede8));
    uVar1 = 0x43;
    aiStack_420[0] = 0x4e - aiStack_420[0];
  }
  else {
    if (*(int *)(param_1 + 0x1cc) != 1) goto LAB_101818f6;
    FUN_10164030(0x4d5,*(undefined4 *)(param_1 + 0x1d0),auStack_408);
    uVar15 = 0xffffffff;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar2 = 0;
    uVar1 = 0x17;
    aiStack_420[0] = 0x1e;
    puVar3 = auStack_408;
  }
  FUN_100217a0(aiStack_420[0],uVar1,0xffdcdcdc,puVar3,uVar2,uVar7,uVar9,uVar11,uVar13,uVar5,uVar6,
               uVar8,uVar10,uVar12,uVar14,uVar15);
LAB_101818f6:
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  uStack_40c = 0xffffffff;
  ExceptionList = pvStack_414;
  __security_check_cookie(uStack_8 ^ (uint)auStack_408);
  return;
}


// ==== 1018f360 FUN_1018f360 depth=0 from=raiz callees=
// strings: 

undefined4 FUN_1018f360(void)

{
  return 1;
}


// ==== 1019dcf0 FUN_1019dcf0 depth=0 from=raiz callees=FUN_10003dc0@10003dc0 FUN_100217a0@100217a0 FUN_10021df0@10021df0 FUN_10020bb0@10020bb0 _memset@101c3660 FUN_10002f40@10002f40 FUN_100218f0@100218f0 FUN_10021a00@10021a00 FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 __security_check_cookie@101c16c2
// strings: 

void __thiscall FUN_1019dcf0(int param_1,int param_2)

{
  APawn *this;
  undefined4 uVar1;
  undefined4 uVar2;
  FName *pFVar3;
  FName *this_00;
  int iVar4;
  float10 fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uStack_14c;
  FString aFStack_13c [16];
  undefined1 auStack_12c [4];
  int iStack_128;
  float fStack_120;
  float fStack_11c;
  undefined1 *puStack_118;
  void *pvStack_114;
  undefined *puStack_110;
  int iStack_10c;
  ushort uStack_108;
  undefined1 auStack_106 [254];
  uint uStack_8;
  
  puStack_110 = &UNK_102167e9;
  pvStack_114 = ExceptionList;
  uStack_14c = DAT_103554c4 ^ (uint)&uStack_108;
  puStack_118 = (undefined1 *)&uStack_14c;
  ExceptionList = &pvStack_114;
  iStack_10c = 0;
  uStack_8 = uStack_14c;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0();
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar4 = *(int *)(param_1 + 0x1ec);
  if (iVar4 != 0) {
    uVar7 = 0xff00000001;
    uVar1 = FUN_101c19e0();
    uVar6 = CONCAT44(iVar4,uVar1);
    uVar1 = FUN_101c19e0(uVar1,iVar4,uVar7);
    FUN_100218f0(0,0,uVar1,uVar6,uVar7);
  }
  iVar4 = *(int *)(param_1 + 0x1e8);
  if (iVar4 != 0) {
    uVar1 = FUN_101c19e0();
    FUN_10021a00(2,3,uVar1,0x14,0,0,uVar1,0x14,iVar4,0xff,1);
  }
  this = *(APawn **)
          (*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c) +
          0x3bc);
  pFVar3 = (FName *)APawn::GetCurWaitAnimName(this);
  this_00 = (FName *)APawn::GetCurAnimName(this,(int)&fStack_120);
  iVar4 = FName::operator==(this_00,pFVar3);
  if (iVar4 != 0) {
    FString::FString(aFStack_13c,(ushort *)&DAT_10293508);
    iStack_10c._0_1_ = 1;
    FUN_10003dc0();
    iStack_10c = (uint)iStack_10c._1_3_ << 8;
    FString::~FString(aFStack_13c);
  }
  fStack_120 = 0.0;
  fStack_11c = 0.0;
  if (*(int *)(this + 0x134) != 0) {
    iVar4 = **(int **)(this + 0x134);
    fStack_11c = (float)**(int **)(this + 0x134);
    APawn::GetCurAnimName(this,(int)&fStack_120);
    uVar1 = (**(code **)((int)fStack_11c + 0xb8))();
    fVar5 = (float10)(**(code **)(iVar4 + 200))(uVar1);
    fStack_120 = (float)fVar5;
    fStack_11c = *(float *)(*(int *)(*(int *)(this + 0x134) + 0x184) + 0x10);
  }
  uStack_108 = 0;
  _memset(auStack_106,0,0xfe);
  appSprintf(&uStack_108,(ushort *)&UNK_102934f0,(double)(fStack_120 * fStack_11c),
             (double)fStack_120);
  FUN_10020bb0(auStack_12c,&DAT_102468e4,0,0,0,0,0,0);
  FUN_100217a0(0x55,(0x10 - iStack_128) / 2 + 0x127,0xffdcdcdc,L"Frame:",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x7d,(0x10 - iStack_128) / 2 + 0x127,0xffdcdcdc,&uStack_108,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(10,(0x10 - iStack_128) / 2 + 0x127,0xffdcdcdc,&UNK_102934d8,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  iStack_10c = 0xffffffff;
  ExceptionList = pvStack_114;
  __security_check_cookie(uStack_8 ^ (uint)&uStack_108);
  return;
}


// ==== 101a07c0 FUN_101a07c0 depth=0 from=raiz callees=FUN_100217a0@100217a0 FUN_10059eb0@10059eb0 FUN_10021df0@10021df0 FUN_10020bb0@10020bb0 FUN_10002f40@10002f40 FUN_101c19e0@101c19e0 FUN_100212e0@100212e0 __security_check_cookie@101c16c2
// strings: 

void __thiscall FUN_101a07c0(int param_1,int param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uStack_b8;
  int iStack_a0;
  int iStack_9c;
  undefined1 *puStack_98;
  void *pvStack_94;
  undefined *puStack_90;
  undefined4 uStack_8c;
  ushort auStack_88 [64];
  uint uStack_8;
  
  puStack_90 = &UNK_10216ad0;
  pvStack_94 = ExceptionList;
  uStack_b8 = DAT_103554c4 ^ (uint)auStack_88;
  puStack_98 = (undefined1 *)&uStack_b8;
  ExceptionList = &pvStack_94;
  uStack_8c = 0;
  uStack_8 = uStack_b8;
  FUN_10059eb0(param_2);
  FUN_10002f40(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar3,uVar2);
  FUN_10020bb0(&iStack_a0,&UNK_1029388c,0,0,0,0,0,0);
  FUN_100217a0((0x28 - iStack_a0) / 2 + 0xf,(0x10 - iStack_9c) / 2 + 0x19,0xffdcdcdc,&UNK_1029388c,0
               ,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&iStack_a0,L"COLOR:",0,0,0,0,0,0);
  FUN_100217a0((0x37 - iStack_a0) / 2 + 0x5f,(0x10 - iStack_9c) / 2 + 0x19,0xffdcdcdc,L"COLOR:",0,0,
               0,0,0,0,0,0,0,0,0,0xffffffff);
  appSprintf(auStack_88,(ushort *)&UNK_1029386c,*(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x2e4));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100217a0((0x28 - iStack_a0) / 2 + 0xf,(0x10 - iStack_9c) / 2 + 0x2d,0xffdcdcdc,auStack_88,0,0,
               0,0,0,0,0,0,0,0,0,0xffffffff);
  appSprintf(auStack_88,(ushort *)&UNK_1029385c,*(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0x2e4));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100217a0((0x28 - iStack_a0) / 2 + 0xf,(0x10 - iStack_9c) / 2 + 0x55,0xffdcdcdc,auStack_88,0,0,
               0,0,0,0,0,0,0,0,0,0xffffffff);
  puVar1 = (ushort *)(param_1 + 0x28c);
  iVar4 = appStrlen(puVar1);
  if (0 < iVar4) {
    FUN_10020bb0(&iStack_a0,puVar1,0,0,0,0,0,0);
    FUN_100217a0((0xdc - iStack_a0) / 2 + 0xf,(0x10 - iStack_9c) / 2 + 0x41,0xff808000,puVar1,0,0,0,
                 0,0,0,0,0,0,0,0,0xffffffff);
  }
  puVar1 = (ushort *)(param_1 + 0x48c);
  iVar4 = appStrlen(puVar1);
  if (0 < iVar4) {
    FUN_10020bb0(&iStack_a0,puVar1,0,0,0,0,0,0);
    FUN_100217a0((0xdc - iStack_a0) / 2 + 0xf,(0x10 - iStack_9c) / 2 + 0x69,0xff808000,puVar1,0,0,0,
                 0,0,0,0,0,0,0,0,0xffffffff);
  }
  appSprintf(auStack_88,(ushort *)L"FACE(%d):",*(undefined4 *)(*(int *)(param_1 + 0x1dc) + 0x2e4));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100217a0((0x28 - iStack_a0) / 2 + 10,(0x10 - iStack_9c) / 2 + 0x7d,0xffdcdcdc,auStack_88,0,0,0
               ,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(0x14,(0x10 - iStack_9c) / 2 + 0x96,0xffdcdcdc,L"Hair Accessary",0,0,0,0,0,0,0,0,0,0,0
               ,0xffffffff);
  FUN_100217a0(0x14,(0x10 - iStack_9c) / 2 + 0xaa,0xffdcdcdc,&DAT_1024d1bc,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x14,(0x10 - iStack_9c) / 2 + 0xbe,0xffdcdcdc,&DAT_1024d1b8,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x14,(0x10 - iStack_9c) / 2 + 0xd2,0xffdcdcdc,&DAT_10284e14,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x78,(0x10 - iStack_9c) / 2 + 0xaa,0xffdcdcdc,L"Pitch",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x78,(0x10 - iStack_9c) / 2 + 0xbe,0xffdcdcdc,&UNK_10293814,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x78,(0x10 - iStack_9c) / 2 + 0xd2,0xffdcdcdc,&UNK_10293808,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_100212e0();
  uStack_8c = 0xffffffff;
  ExceptionList = pvStack_94;
  __security_check_cookie(uStack_8 ^ (uint)auStack_88);
  return;
}


// ==== 101aa930 FUN_101aa930 depth=0 from=raiz callees=
// strings: 

undefined4 FUN_101aa930(void)

{
  return 1;
}


// ==== 10021970 FUN_10021970 depth=1 from=FUN_10097220 callees=FUN_10021590@10021590
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


// ==== 100217a0 FUN_100217a0 depth=1 from=FUN_10097220 callees=FUN_10020bb0@10020bb0 FUN_10021590@10021590
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


// ==== 100c72c0 FUN_100c72c0 depth=1 from=FUN_10097220 callees=CORE.DLL::appStrcpy@EXTERNAL:000001c3 FUN_10020bb0@10020bb0 CORE.DLL::appStrlen@EXTERNAL:000001b4
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


// ==== 101c2730 __alloca_probe depth=1 from=FUN_10097220 callees=
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


// ==== 10021df0 FUN_10021df0 depth=1 from=FUN_10097220 callees=FUN_101c19e0@101c19e0
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


// ==== 10020bb0 FUN_10020bb0 depth=1 from=FUN_10097220 callees=
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


// ==== 10002f40 FUN_10002f40 depth=1 from=FUN_10097220 callees=
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


// ==== 10021a00 FUN_10021a00 depth=1 from=FUN_10097220 callees=FUN_10021590@10021590
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


// ==== 101c19e0 FUN_101c19e0 depth=1 from=FUN_10097220 callees=
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


// ==== 100212e0 FUN_100212e0 depth=1 from=FUN_10097220 callees=
// strings: 

void __fastcall FUN_100212e0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100212eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x34) + 0x94))();
  return;
}


// ==== 101c16c2 __security_check_cookie depth=1 from=FUN_10097220 callees=___report_gsfailure@101c6adc
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


// ==== 10098d60 FUN_10098d60 depth=1 from=FUN_100994d0 callees=FUN_10097a60@10097a60
// strings: 

void __fastcall FUN_10098d60(int *param_1)

{
  int iVar1;
  
  if (param_1[3] != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10)) {
      do {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) / 2;
      } while (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10));
    }
    FUN_10097a60();
    return;
  }
  return;
}


// ==== 10096770 FUN_10096770 depth=1 from=FUN_100994d0 callees=FUN_100abb60@100abb60
// strings: 

undefined4 __thiscall FUN_10096770(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec7c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100abb60(param_1 + 8);
  ExceptionList = local_c;
  return param_2;
}


// ==== 100abd40 FUN_100abd40 depth=1 from=FUN_100994d0 callees=CORE.DLL::appMemset@EXTERNAL:000001d0 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::FString@EXTERNAL:0000019e FUN_100c75a0@100c75a0 CORE.DLL::FString::operator=@EXTERNAL:000001a3 __security_check_cookie@101c16c2
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


// ==== 100abc50 FUN_100abc50 depth=1 from=FUN_100994d0 callees=CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 

void __fastcall FUN_100abc50(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f0ccc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 3;
  FString::~FString((FString *)(param_1 + 0x38));
  local_4._0_1_ = 2;
  FString::~FString((FString *)(param_1 + 0x2c));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(param_1 + 0x20));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(param_1 + 0x14));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(param_1 + 8));
  ExceptionList = local_c;
  return;
}


// ==== 100212f0 FUN_100212f0 depth=1 from=FUN_1017a1e0 callees=
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


// ==== 1014dd00 FUN_1014dd00 depth=1 from=FUN_1017a1e0 callees=FUN_10145910@10145910
// strings: 

undefined4 __fastcall FUN_1014dd00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bc00;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(param_1 + 0x50) + 0x54) + 0x38) + 0x3c) +
                  0x3bc);
  if (iVar1 != 0) {
    ExceptionList = &local_10;
    uVar2 = FUN_10145910(*(undefined4 *)(iVar1 + 0x60));
    ExceptionList = local_10;
    return uVar2;
  }
  return 0;
}


// ==== 100133a0 FUN_100133a0 depth=1 from=FUN_1017a1e0 callees=__vswprintf@101c1bbf
// strings: 

void FUN_100133a0(wchar_t *param_1,wchar_t *param_2)

{
  __vswprintf(param_1,param_2,&stack0x0000000c);
  return;
}


// ==== 10052970 FUN_10052970 depth=1 from=FUN_1017a700 callees=CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_100527a0@100527a0
// strings: 

void __fastcall FUN_10052970(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1059;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
  FString::operator=((FString *)(param_1 + 0x2e0),(FString *)&stack0x00000004);
  FUN_100527a0();
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 10062ee0 FUN_10062ee0 depth=1 from=FUN_1017a700 callees=
// strings: 

void FUN_10062ee0(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    psVar3 = param_2;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    iVar2 = (int)psVar3 - (int)(param_2 + 1) >> 1;
    iVar5 = iVar2 + -1;
    iVar2 = iVar5 / 3 + iVar2;
    *(undefined2 *)(param_1 + iVar2 * 2) = 0;
    for (; iVar4 = iVar2 + -1, -1 < iVar5; iVar5 = iVar5 + -1) {
      if (iVar6 == (iVar6 / 3) * 3) {
        psVar3 = param_2;
        do {
          sVar1 = *psVar3;
          psVar3 = psVar3 + 1;
        } while (sVar1 != 0);
        if (iVar5 < ((int)psVar3 - (int)(param_2 + 1) >> 1) + -1) {
          *(undefined2 *)(param_1 + iVar4 * 2) = 0x2c;
          iVar4 = iVar2 + -2;
        }
      }
      *(short *)(param_1 + iVar4 * 2) = param_2[iVar5];
      iVar6 = iVar6 + 1;
      iVar2 = iVar4;
    }
  }
  return;
}


// ==== 100519c0 FUN_100519c0 depth=1 from=FUN_1017a700 callees=CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10054cc0@10054cc0 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_101b8ab0@101b8ab0
// strings: 

void __thiscall FUN_100519c0(int param_1,ushort *param_2)

{
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e0e49;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10054cc0();
  if (param_2 != (ushort *)0x0) {
    FString::FString(local_28,param_2);
    local_8._0_1_ = 1;
    FUN_101b8ab0(local_28,param_1 + 0x30c,0);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1002d0b0 FUN_1002d0b0 depth=1 from=FUN_1017a700 callees=
// strings: 

undefined4 __fastcall FUN_1002d0b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x244);
}


// ==== 100676e0 FUN_100676e0 depth=1 from=FUN_1017a700 callees=CORE.DLL::appStrcpy@EXTERNAL:000001c3 FUN_10062ee0@10062ee0 CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::appStrcat@EXTERNAL:000001d4 CORE.DLL::appStrcmp@EXTERNAL:0000014d FUN_10052740@10052740 __security_check_cookie@101c16c2 CORE.DLL::FString::operator=@EXTERNAL:000001a3 CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::appStrlen@EXTERNAL:000001b4 FUN_101c19e0@101c19e0 CORE.DLL::appItoa@EXTERNAL:00000146 FUN_10051aa0@10051aa0 CORE.DLL::FString::ParseIntoArray@EXTERNAL:0000013a
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


// ==== 101460d0 FUN_101460d0 depth=1 from=FUN_1017e280 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f
// strings: 

void FUN_101460d0(uint param_1)

{
  if (param_1 < 0x58) {
    FString::operator*((FString *)(GL2GameData_exref + param_1 * 0xc + 0x6b470));
    return;
  }
  FString::operator*((FString *)(GL2GameData_exref + param_1 * 0xc + 0x6db10));
  return;
}


// ==== 10164030 FUN_10164030 depth=1 from=FUN_10181670 callees=FUN_101b88a0@101b88a0 FUN_1014f960@1014f960
// strings: 

void FUN_10164030(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10210030;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014f960(param_1,param_2,param_3);
  FUN_101b88a0(param_1,param_2,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 10141090 FUN_10141090 depth=1 from=FUN_10181670 callees=
// strings: 

undefined4 FUN_10141090(void)

{
  if (*(int *)GLanguageType_exref == 0) {
    return 1;
  }
  return 0;
}


// ==== 10003dc0 FUN_10003dc0 depth=1 from=FUN_1019dcf0 callees=CORE.DLL::FString::operator=@EXTERNAL:000001a2 CORE.DLL::FString::operator[]@EXTERNAL:000001a6 CORE.DLL::FString::operator_int@EXTERNAL:000001a1
// strings: 

void __thiscall FUN_10003dc0(int param_1,FString *param_2)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d71a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::operator_int(param_2);
  if (iVar1 != 0) {
    puVar2 = FString::operator[](param_2,0);
    if (*puVar2 != 0) {
      *(undefined4 *)(param_1 + 0x308) = 0xffffffff;
      FString::operator=((FString *)(param_1 + 0x2fc),param_2);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101c3660 _memset depth=1 from=FUN_1019dcf0 callees=__VEC_memzero@101caa47
// strings: 

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_103b56c8 != 0)) {
    pvVar2 = (void *)__VEC_memzero();
    return pvVar2;
  }
  puVar5 = _Dst;
  if (3 < _Size) {
    uVar3 = -(int)_Dst & 3;
    sVar4 = _Size;
    if (uVar3 != 0) {
      sVar4 = _Size - uVar3;
      do {
        *(char *)puVar5 = (char)_Val;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar4 & 3;
    uVar3 = sVar4 >> 2;
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar5 = (char)uVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


// ==== 100218f0 FUN_100218f0 depth=1 from=FUN_1019dcf0 callees=FUN_10021590@10021590
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


// ==== 10021590 FUN_10021590 depth=2 from=FUN_10021970 callees=
// strings: 

undefined4 __thiscall FUN_10021590(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined1 local_10 [12];
  undefined3 uVar2;
  
  uVar2 = (undefined3)((uint)local_10 >> 8);
  uVar1 = CONCAT31(uVar2,param_2);
  if (param_2 == -1) {
    uVar1 = CONCAT31(uVar2,*(byte *)(param_1 + 0x74));
    if (*(int *)(param_1 + 0x70) != 0) {
      uVar1 = CONCAT31(uVar2,*(byte *)(param_1 + 0x74) >> 1);
    }
  }
  return uVar1;
}


// ==== 101c6adc ___report_gsfailure depth=2 from=__security_check_cookie callees=KERNEL32.DLL::TerminateProcess@EXTERNAL:00000277 FUN_101c8ccb@101c8ccb KERNEL32.DLL::IsDebuggerPresent@EXTERNAL:00000223 KERNEL32.DLL::GetCurrentProcess@EXTERNAL:0000023b KERNEL32.DLL::SetUnhandledExceptionFilter@EXTERNAL:0000023e KERNEL32.DLL::UnhandledExceptionFilter@EXTERNAL:00000224
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_103b3ac0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_103b3ac4 = &stack0x00000004;
  _DAT_103b3a00 = 0x10001;
  _DAT_103b39a8 = 0xc0000409;
  _DAT_103b39ac = 1;
  local_32c = DAT_103554c4;
  local_328 = DAT_103554c8;
  _DAT_103b39b4 = unaff_retaddr;
  _DAT_103b3a8c = in_GS;
  _DAT_103b3a90 = in_FS;
  _DAT_103b3a94 = in_ES;
  _DAT_103b3a98 = in_DS;
  _DAT_103b3a9c = unaff_EDI;
  _DAT_103b3aa0 = unaff_ESI;
  _DAT_103b3aa4 = unaff_EBX;
  _DAT_103b3aa8 = in_EDX;
  _DAT_103b3aac = in_ECX;
  _DAT_103b3ab0 = in_EAX;
  _DAT_103b3ab4 = unaff_EBP;
  DAT_103b3ab8 = unaff_retaddr;
  _DAT_103b3abc = in_CS;
  _DAT_103b3ac8 = in_SS;
  DAT_103b39f8 = IsDebuggerPresent();
  FUN_101c8ccb(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1029a9c0);
  if (DAT_103b39f8 == 0) {
    FUN_101c8ccb(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


// ==== 10097a60 FUN_10097a60 depth=2 from=FUN_10098d60 callees=
// strings: 10232130=HashMapHash | 

void __fastcall FUN_10097a60(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    ((uint)((ulonglong)(uint)param_1[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)param_1[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar2 = 0;
  if (0 < param_1[4]) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[4]);
  }
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      uVar3 = *(uint *)(*param_1 + 4 + iVar4) & param_1[4] - 1U;
      *(undefined4 *)(*param_1 + iVar4) = *(undefined4 *)(iVar1 + uVar3 * 4);
      *(int *)(iVar1 + uVar3 * 4) = iVar2;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x54;
    } while (iVar2 < param_1[1]);
  }
  if (param_1[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(param_1[3]);
  }
  param_1[3] = iVar1;
  return;
}


// ==== 100abb60 FUN_100abb60 depth=2 from=FUN_10096770 callees=CORE.DLL::FString::operator=@EXTERNAL:000001a2 CORE.DLL::FString::FString@EXTERNAL:000001a4
// strings: 

int __thiscall FUN_100abb60(int param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f0c6c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(param_1 + 8));
  local_4 = 0;
  FString::FString((FString *)(param_1 + 0x14));
  local_4._0_1_ = 1;
  FString::FString((FString *)(param_1 + 0x20));
  local_4._0_1_ = 2;
  FString::FString((FString *)(param_1 + 0x2c));
  local_4._0_1_ = 3;
  FString::FString((FString *)(param_1 + 0x38));
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  FString::operator=((FString *)(param_1 + 0x14),(FString *)(param_2 + 0x14));
  FString::operator=((FString *)(param_1 + 8),(FString *)(param_2 + 8));
  FString::operator=((FString *)(param_1 + 0x20),(FString *)(param_2 + 0x20));
  FString::operator=((FString *)(param_1 + 0x2c),(FString *)(param_2 + 0x2c));
  FString::operator=((FString *)(param_1 + 0x38),(FString *)(param_2 + 0x38));
  ExceptionList = local_c;
  return param_1;
}


// ==== 100c75a0 FUN_100c75a0 depth=2 from=FUN_100abd40 callees=WININET.DLL::InternetCanonicalizeUrlW@EXTERNAL:00000218
// strings: 

void FUN_100c75a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = 0x104;
  InternetCanonicalizeUrlW(param_1,param_2,&local_4,0x30000000);
  return;
}


// ==== 10145910 FUN_10145910 depth=2 from=FUN_1014dd00 callees=
// strings: 

void __fastcall FUN_10145910(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1014591e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 0x50) + 0x60) + 0x94))();
  return;
}


// ==== 101c1bbf __vswprintf depth=2 from=FUN_100133a0 callees=__vswprintf_l@101c1b28
// strings: 

/* Library Function - Single Match
    __vswprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl __vswprintf(wchar_t *_Dest,wchar_t *_Format,va_list _Args)

{
  int iVar1;
  va_list unaff_retaddr;
  
  iVar1 = __vswprintf_l(_Dest,(size_t)_Format,(wchar_t *)0x0,(_locale_t)_Args,unaff_retaddr);
  return iVar1;
}


// ==== 100527a0 FUN_100527a0 depth=2 from=FUN_10052970 callees=FUN_100521d0@100521d0 CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::operator=@EXTERNAL:000001a2 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10052460@10052460 CORE.DLL::FString::operator_int@EXTERNAL:000001a1 FUN_10051af0@10051af0 CORE.DLL::FString::operator=@EXTERNAL:000001a3
// strings: 

void __fastcall FUN_100527a0(int param_1)

{
  ushort *puVar1;
  int iVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e1009;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(int *)(param_1 + 0x2d8) == -1) {
    if (*(int *)(param_1 + 0x2dc) == -1) {
      FString::operator=(local_28,(FString *)(param_1 + 0x2e0));
      goto LAB_10052840;
    }
    iVar2 = *(int *)(param_1 + 0x2dc) * 0x5c + 0x240ec;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2d8) * 0xc + 0x6a8dc;
  }
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + iVar2));
  FString::operator=(local_28,puVar1);
LAB_10052840:
  FUN_10052460();
  FUN_100521d0(local_28,local_28);
  FString::operator=((FString *)(param_1 + 0x2e0),local_28);
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_1 + 0x350);
  iVar2 = FString::operator_int((FString *)(param_1 + 0x2e0));
  if (iVar2 != 0) {
    FUN_10051af0();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10054cc0 FUN_10054cc0 depth=2 from=FUN_100519c0 callees=FUN_10012830@10012830 CORE.DLL::FArray::Empty@EXTERNAL:000001b3
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


// ==== 101b8ab0 FUN_101b8ab0 depth=2 from=FUN_100519c0 callees=CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_1003fff0@1003fff0 FUN_100542c0@100542c0 FUN_100541c0@100541c0 FUN_10040230@10040230 FUN_10054240@10054240 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_1003f970@1003f970 FUN_10054cc0@10054cc0 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_100d1790@100d1790 FUN_10054f20@10054f20 FUN_10005c30@10005c30 FUN_10040090@10040090
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


// ==== 10052740 FUN_10052740 depth=2 from=FUN_100676e0 callees=FUN_10052130@10052130 CORE.DLL::FArray::~FArray@EXTERNAL:00000183
// strings: 

void __fastcall FUN_10052740(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e0fd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10052130(0,*(undefined4 *)(param_1 + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10051aa0 FUN_10051aa0 depth=2 from=FUN_100676e0 callees=CORE.DLL::FArray::FArray@EXTERNAL:00000184
// strings: 

FArray * __fastcall FUN_10051aa0(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e0e79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 101b88a0 FUN_101b88a0 depth=2 from=FUN_10164030 callees=FUN_101b7af0@101b7af0 CORE.DLL::L2ParamStack::PushBack@EXTERNAL:000001b8 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:000001b7 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:000001b9 FUN_101b7cd0@101b7cd0
// strings: 

void FUN_101b88a0(void *param_1,void *param_2,undefined4 param_3)

{
  uint uStack_4c;
  L2ParamStack local_3c [16];
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1021a2b2;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_2c,(void *)0x1);
  L2ParamStack::PushBack(local_2c,param_2);
  FUN_101b7af0(local_2c);
  L2ParamStack::L2ParamStack(local_3c,10);
  local_8._0_1_ = 2;
  L2ParamStack::PushBack(local_3c,param_1);
  FUN_101b7cd0(local_3c,1,param_3,0);
  local_8._0_1_ = 1;
  L2ParamStack::~L2ParamStack(local_3c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1014f960 FUN_1014f960 depth=2 from=FUN_10164030 callees=FUN_1014ac40@1014ac40
// strings: 

int FUN_1014f960(void)

{
  if (DAT_1039ea64 == 0) {
    FUN_1014ac40();
  }
  return DAT_1039ea64;
}


// ==== 101caa47 __VEC_memzero depth=2 from=_memset callees=fastzero_I@101ca9f0 __VEC_memzero@101caa47
// strings: 

/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined1 * __VEC_memzero(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  uVar2 = (int)param_1 >> 0x1f;
  iVar3 = (((uint)param_1 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
  if (iVar3 == 0) {
    uVar2 = param_3 & 0x7f;
    if (param_3 != uVar2) {
      fastzero_I(param_1,param_3 - uVar2);
    }
    if (uVar2 != 0) {
      puVar4 = param_1 + (param_3 - uVar2);
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    iVar3 = 0x10 - iVar3;
    puVar4 = param_1;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    __VEC_memzero(param_1 + iVar3,0,param_3 - iVar3);
  }
  return param_1;
}


// ==== 101c8ccb FUN_101c8ccb depth=3 from=___report_gsfailure callees=
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c8ccb(void)

{
  _DAT_103b56c0 = 0;
  return;
}


// ==== 101c1b28 __vswprintf_l depth=3 from=__vswprintf callees=__flsbuf@101c80de FUN_101c8c22@101c8c22 FUN_101c2369@101c2369 FUN_101c82d7@101c82d7
// strings: 

/* Library Function - Single Match
    __vswprintf_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vswprintf_l(wchar_t *_String,size_t _Count,wchar_t *_Format,_locale_t _Plocinfo,va_list _Ap)

{
  undefined4 *puVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Count == 0) || (_String == (wchar_t *)0x0)) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    local_24._base = (char *)_String;
    local_24._ptr = (char *)_String;
    local_24._flag = 0x42;
    local_24._cnt = 0x7fffffff;
    iVar2 = FUN_101c82d7(&local_24,_Count,_Format,_Plocinfo);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = 0;
      local_24._ptr = (char *)((int)local_24._ptr + 1);
    }
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = 0;
    }
  }
  return iVar2;
}


// ==== 100521d0 FUN_100521d0 depth=3 from=FUN_100527a0 callees=CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::operator+=@EXTERNAL:000001bd FUN_100d9a30@100d9a30 CORE.DLL::FString::Left@EXTERNAL:000001c6 FUN_10083a80@10083a80 CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::operator+=@EXTERNAL:000001c5 CORE.DLL::FString::operator=@EXTERNAL:000001a2 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10020bb0@10020bb0 CORE.DLL::FString::Mid@EXTERNAL:000001b2 CORE.DLL::FString::FString@EXTERNAL:0000019e CORE.DLL::FString::InStr@EXTERNAL:000001e3
// strings: 

void FUN_100521d0(FString *param_1,FString *param_2)

{
  FString *this;
  int iVar1;
  int iVar2;
  FString *pFVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uStack_84;
  FString local_74 [12];
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [12];
  FString *local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  this = param_2;
  puStack_c = &LAB_101e0f4d;
  local_10 = ExceptionList;
  uStack_84 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_84;
  ExceptionList = &local_10;
  iVar6 = 0;
  local_8 = 0;
  FString::operator=(param_2,param_1);
  iVar1 = FString::Len(this);
  iVar2 = FString::InStr(param_1,(ushort *)&DAT_1024265c,0);
  *(int *)(local_18 + 0x358) = *(int *)(local_18 + 0x358) + 1;
  while (iVar2 != -1) {
    FString::FString(local_44,this);
    local_8._0_1_ = 1;
    pFVar3 = (FString *)FString::Left(local_44,(int)local_68);
    local_8._0_1_ = 2;
    FString::operator=(this,pFVar3);
    local_8._0_1_ = 1;
    FString::~FString(local_68);
    FString::operator+=(this,(ushort *)&DAT_1023d1c8);
    local_1c = iVar2 + 2;
    iVar5 = (iVar1 - iVar2) + -2;
    pFVar3 = (FString *)FString::Mid(local_44,(int)local_74,local_1c);
    local_8._0_1_ = 3;
    FString::operator+=(this,pFVar3);
    local_8._0_1_ = 1;
    FString::~FString(local_74);
    iVar2 = iVar2 - iVar6;
    FString::Mid(local_44,(int)local_5c,iVar6);
    iVar6 = local_18;
    local_8 = CONCAT31(local_8._1_3_,4);
    pFVar3 = (FString *)FUN_10083a80(0xc,local_18 + 0x360,iVar2,iVar5);
    if (pFVar3 != (FString *)0x0) {
      FString::FString(pFVar3,local_5c);
    }
    uVar12 = *(undefined4 *)(iVar6 + 0x2f0);
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    puVar4 = FString::operator*(local_5c);
    FUN_10020bb0(local_38,puVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    param_2 = local_38[0];
    FUN_100d9a30(&param_2);
    iVar6 = local_1c;
    iVar2 = FString::InStr(this,(ushort *)&DAT_1024265c,0);
    if (iVar2 == -1) {
      iVar5 = iVar1 - iVar6;
      FString::Mid(local_44,(int)local_50,iVar6);
      local_8 = CONCAT31(local_8._1_3_,5);
      pFVar3 = (FString *)FUN_10083a80(0xc,local_18 + 0x360,iVar5);
      if (pFVar3 != (FString *)0x0) {
        FString::FString(pFVar3,local_50);
      }
      uVar12 = *(undefined4 *)(local_18 + 0x2f0);
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      puVar4 = FString::operator*(local_50);
      FUN_10020bb0(&local_30,puVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
      local_20 = local_30;
      FUN_100d9a30(&local_20);
      *(undefined4 *)(local_18 + 0x35c) = local_2c;
      local_8 = CONCAT31(local_8._1_3_,4);
      FString::~FString(local_50);
    }
    *(int *)(local_18 + 0x358) = *(int *)(local_18 + 0x358) + 1;
    local_8._0_1_ = 1;
    FString::~FString(local_5c);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_44);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10052460 FUN_10052460 depth=3 from=FUN_100527a0 callees=FUN_100520c0@100520c0 CORE.DLL::FArray::Empty@EXTERNAL:000001b3
// strings: 

void __fastcall FUN_10052460(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0f70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  FUN_100520c0(0);
  FArray::Empty((FArray *)(param_1 + 0x36c),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 10051af0 FUN_10051af0 depth=3 from=FUN_100527a0 callees=CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_101c19e0@101c19e0 FUN_1005ee10@1005ee10
// strings: 

void __fastcall FUN_10051af0(int *param_1)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0ea0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar3 = *DAT_103663c0;
  piVar1 = param_1 + 0xc0;
  uVar11 = 0;
  uVar10 = 0;
  iVar9 = param_1[0xbc];
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  piVar5 = piVar1;
  puVar2 = FString::operator*((FString *)(param_1 + 0xb8));
  (**(code **)(iVar3 + 0xd0))(puVar2,piVar5,uVar6,uVar7,uVar8,iVar9,uVar10,uVar11);
  param_1[0xbf] = 0;
  *piVar1 = *piVar1 + 1;
  iVar3 = *piVar1;
  iVar9 = param_1[0xbb];
  if (param_1[0xd4] == 0) {
    if (iVar9 != 1) {
      if (iVar9 == 2) {
        uVar4 = FUN_101c19e0();
        param_1[0xbf] = uVar4 & ((int)uVar4 < 1) - 1;
        ExceptionList = local_10;
        return;
      }
      if (iVar9 != 3) {
        ExceptionList = local_10;
        return;
      }
      uVar4 = FUN_101c19e0();
      param_1[0xbf] = uVar4 & ((int)uVar4 < 1) - 1;
      ExceptionList = local_10;
      return;
    }
  }
  else {
    if (iVar9 == 1) {
      iVar3 = 0;
    }
    else if (iVar9 == 2) {
      iVar3 = FUN_101c19e0();
    }
    else if (iVar9 == 3) {
      iVar3 = FUN_101c19e0();
    }
    (**(code **)(*param_1 + 0x144))(param_1[0x20] + iVar3,param_1[0x21],0);
    FUN_1005ee10((float)*piVar1,(float)param_1[0xc1]);
  }
  param_1[0xbf] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10012830 FUN_10012830 depth=3 from=FUN_10054cc0 callees=FUN_100126a0@100126a0
// strings: 

undefined4 __thiscall FUN_10012830(undefined4 param_1,byte param_2)

{
  FUN_100126a0();
  if ((param_2 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  }
  return param_1;
}


// ==== 1003fff0 FUN_1003fff0 depth=3 from=FUN_101b8ab0 callees=CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_1003faa0@1003faa0
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


// ==== 100542c0 FUN_100542c0 depth=3 from=FUN_101b8ab0 callees=
// strings: 

void __thiscall FUN_100542c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}


// ==== 100541c0 FUN_100541c0 depth=3 from=FUN_101b8ab0 callees=
// strings: 

undefined4 __fastcall FUN_100541c0(undefined4 *param_1)

{
  return *param_1;
}


// ==== 10040230 FUN_10040230 depth=3 from=FUN_101b8ab0 callees=CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_1003fb30@1003fb30 CORE.DLL::FString::Printf@EXTERNAL:000001a7
// strings: 

void FUN_10040230(FString *param_1,FString *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de2a9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::Len(param_1);
  if (iVar1 != 0) {
    iVar1 = FString::Len(param_2);
    if (iVar1 != 0) {
      uVar2 = FString::Printf((ushort *)local_28,&DAT_1022dde0,*(undefined4 *)param_2,
                              *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
      local_8._0_1_ = 1;
      FUN_1003fb30(param_1,uVar2,1);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10054240 FUN_10054240 depth=3 from=FUN_101b8ab0 callees=
// strings: 

undefined4 __fastcall FUN_10054240(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}


// ==== 1003f970 FUN_1003f970 depth=3 from=FUN_101b8ab0 callees=CORE.DLL::FString::FString@EXTERNAL:000001a4
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


// ==== 100d1790 FUN_100d1790 depth=3 from=FUN_101b8ab0 callees=FUN_100d0a70@100d0a70 FUN_100d1000@100d1000 UUIScript::eventOnEvent@1007f210 FUN_100d04e0@100d04e0 FUN_100d01f0@100d01f0
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


// ==== 10054f20 FUN_10054f20 depth=3 from=FUN_101b8ab0 callees=FUN_10063240@10063240 FUN_100d9a30@100d9a30 FUN_10054cc0@10054cc0 FUN_10004ed0@10004ed0 FUN_100125d0@100125d0 FUN_10054120@10054120
// strings: 

void __thiscall FUN_10054f20(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uStack_38;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e16bb;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  FUN_10054cc0();
  *param_1 = 1;
  while( true ) {
    if (param_2[3] <= iVar3) break;
    iVar2 = iVar3 * 0x54 + param_2[2];
    if (iVar2 != 0) {
      iVar1 = FUN_10004ed0(0x58);
      local_8._0_1_ = 1;
      if (iVar1 == 0) {
        local_18 = 0;
      }
      else {
        local_18 = FUN_100125d0();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10063240(iVar2,local_18);
      FUN_100d9a30(&local_18);
    }
    iVar3 = iVar3 + 1;
  }
  if (0 < *param_2) {
    param_1[9] = *param_2;
  }
  if (0 < param_2[1]) {
    param_1[10] = param_2[1];
  }
  FUN_10054120();
  ExceptionList = local_10;
  return;
}


// ==== 10005c30 FUN_10005c30 depth=3 from=FUN_101b8ab0 callees=FUN_10005270@10005270
// strings: 

int FUN_10005c30(void)

{
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  return DAT_1035786c;
}


// ==== 10040090 FUN_10040090 depth=3 from=FUN_101b8ab0 callees=CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_1003fb30@1003fb30 CORE.DLL::FString::Printf@EXTERNAL:000001a7
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


// ==== 10052130 FUN_10052130 depth=3 from=FUN_10052740 callees=CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FArray::Remove@EXTERNAL:00000189 CORE.DLL::appFailAssert@EXTERNAL:0000018a
// strings: 1022e1f0=d:\work\interlude\2007_05_23\warfare2110\core\inc\UnTemplate.h | 1022e1e4=Index>=0 | 1022e1f0=d:\work\interlude\2007_05_23\warfare2110\core\inc\UnTemplate.h | 1022e1d4=Index<=ArrayNum | 1022e1f0=d:\work\interlude\2007_05_23\warfare2110\core\inc\UnTemplate.h | 1022e1bc=Index+Count<=ArrayNum | 

void __thiscall FUN_10052130(FArray *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(param_1 + 4) < param_2) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_3;
  if (*(int *)(param_1 + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_2 < iVar2) {
    iVar1 = param_2 * 0xc;
    iVar2 = iVar2 - param_2;
    do {
      FString::~FString((FString *)(*(int *)param_1 + iVar1));
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(param_1,param_2,param_3,0xc);
  return;
}


// ==== 101b7af0 FUN_101b7af0 depth=3 from=FUN_101b88a0 callees=FUN_101384d0@101384d0 FUN_101b74c0@101b74c0 ENGINE.DLL::FL2GameData::GetNpcName@EXTERNAL:00000075 FUN_10164900@10164900 FUN_10145f50@10145f50 CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::L2ParamStack::Top@EXTERNAL:00000149 FUN_101647b0@101647b0 FUN_101b3be0@101b3be0 FUN_101b7520@101b7520 FUN_10123cd0@10123cd0 FUN_101b7460@101b7460
// strings: 

void FUN_101b7af0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FString *pFVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint uStack_44;
  FString local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1021a1c9;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  local_28 = 0;
  local_24 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  switch(pvVar1) {
  case (void *)0x0:
  case (void *)0x7:
    pvVar1 = L2ParamStack::Top(param_1);
    FUN_101b7460(pvVar1);
    break;
  case (void *)0x1:
    pvVar1 = L2ParamStack::Top(param_1);
    FUN_101b74c0(pvVar1);
    break;
  case (void *)0x2:
    pvVar1 = L2ParamStack::Top(param_1);
    puVar5 = FL2GameData::GetNpcName((FL2GameData *)GL2GameData_exref,(int)pvVar1 + -1000000);
    FUN_101b7460(puVar5);
    break;
  case (void *)0x3:
    pvVar1 = L2ParamStack::Top(param_1);
    uVar6 = FUN_101647b0(pvVar1);
    FUN_101b7460(uVar6);
    break;
  case (void *)0x4:
    pvVar1 = L2ParamStack::Top(param_1);
    pvVar2 = L2ParamStack::Top(param_1);
    uVar6 = FUN_10164900(pvVar1,pvVar2);
    FUN_101b7460(uVar6);
    break;
  case (void *)0x5:
    pvVar1 = L2ParamStack::Top(param_1);
    uVar6 = FUN_10145f50(pvVar1);
    FUN_101b7460(uVar6);
    break;
  case (void *)0x6:
    pvVar1 = L2ParamStack::Top(param_1);
    FUN_101b7520(pvVar1,(int)pvVar1 >> 0x1f);
    break;
  case (void *)0x8:
    pvVar1 = L2ParamStack::Top(param_1);
    pvVar2 = L2ParamStack::Top(param_1);
    pvVar3 = L2ParamStack::Top(param_1);
    pFVar4 = local_34;
    FUN_10123cd0(pFVar4,pvVar1,pvVar2,pvVar3);
    pFVar4 = (FString *)FUN_101b3be0(pFVar4,pvVar1,pvVar2,pvVar3);
    local_8._0_1_ = 1;
    puVar5 = FString::operator*(pFVar4);
    FUN_101b7460(puVar5);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_34);
  }
  FUN_101384d0(&local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101b7cd0 FUN_101b7cd0 depth=3 from=FUN_101b88a0 callees=CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_1003fff0@1003fff0 CORE.DLL::FString::Printf@EXTERNAL:000001a7 FUN_10040230@10040230 CORE.DLL::FArray::Empty@EXTERNAL:000001b3 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_1000df10@1000df10 _memset@101c3660 CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::L2ParamStack::Top@EXTERNAL:00000149 FUN_101b6d00@101b6d00 FUN_1000ef40@1000ef40 CORE.DLL::appStrcpy@EXTERNAL:000001c3 FUN_10147e60@10147e60 FUN_101481d0@101481d0 CORE.DLL::appSprintf@EXTERNAL:000001ba FUN_1000de50@1000de50 FUN_100650f0@100650f0 __security_check_cookie@101c16c2 FUN_1016e1b0@1016e1b0 FUN_1000e440@1000e440 FUN_1003f970@1003f970 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_1013e640@1013e640 FUN_100d1790@100d1790 FUN_101b6de0@101b6de0 FUN_10005c30@10005c30 FUN_10040090@10040090 FUN_101b7430@101b7430
// strings: 1022fd1c=Index | 1029a3ec=Param%d | 

void __thiscall
FUN_101b7cd0(int param_1,L2ParamStack *param_2,int param_3,ushort *param_4,int param_5)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  L2ParamStack *this;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint uStack_c38;
  FString local_c24 [88];
  undefined4 local_bcc [2];
  undefined4 local_bc4;
  undefined4 local_bc0;
  undefined4 local_bbc;
  undefined4 local_b18 [3];
  undefined4 local_b0c;
  undefined4 local_b08;
  undefined4 local_afc;
  void *local_af8;
  FString local_a60 [12];
  undefined1 local_a54 [12];
  ushort *local_a48;
  int local_a40;
  L2ParamStack *local_a3c;
  ushort *local_a38;
  FString local_a34 [12];
  int local_a28;
  int local_a24;
  void *local_a20;
  int local_a1c;
  int local_a18;
  int local_a14;
  int local_a10;
  undefined1 *local_a0c;
  void *local_a08;
  undefined1 *puStack_a04;
  int local_a00;
  ushort local_9fc [250];
  ushort local_808;
  undefined1 local_806 [2046];
  uint local_8;
  
  puStack_a04 = &LAB_1021a234;
  local_a08 = ExceptionList;
  uStack_c38 = DAT_103554c4 ^ (uint)local_9fc;
  local_a0c = (undefined1 *)&uStack_c38;
  ExceptionList = &local_a08;
  local_a3c = param_2;
  local_a38 = param_4;
  iVar9 = 0;
  local_a00 = 0;
  local_a14 = param_1;
  local_8 = uStack_c38;
  pvVar4 = L2ParamStack::Top(param_2);
  local_808 = 0;
  local_a20 = pvVar4;
  _memset(local_806,0,0x7fe);
  local_a10 = 0;
  local_a1c = -1;
  local_a24 = *(int *)(param_1 + 8);
  if ((param_5 != 0) && (pvVar4 == (void *)0x0)) {
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50ac) + 0x228) + 0x13c))();
    goto LAB_101b7d89;
  }
  FUN_1003f970();
  local_a00._0_1_ = 1;
  FString::FString(local_a34,(ushort *)L"Index");
  local_a00._0_1_ = 2;
  FUN_10040090(local_a34,pvVar4);
  local_a00._0_1_ = 1;
  FString::~FString(local_a34);
  if ((*(int *)(GL2GameData_exref + (int)pvVar4 * 0x5c + 0x240e8) == 0) || ((void *)0xbb7 < pvVar4))
  {
    appSprintf(local_9fc,(ushort *)&DAT_1029a3a8,pvVar4);
    FUN_1013e640(local_9fc,0xffb09b79,0xffdcdcdc);
  }
  else {
    FUN_101b6d00(GL2GameData_exref + (int)pvVar4 * 0x5c + 0x240e8);
    local_a00 = CONCAT31(local_a00._1_3_,3);
    local_a48 = FString::operator*(local_c24);
    iVar8 = 0;
    puVar7 = local_a48;
LAB_101b7e31:
    local_a18 = iVar8;
    iVar5 = FString::Len(local_c24);
    this = local_a3c;
    if (iVar8 < iVar5) {
      uVar2 = puVar7[iVar8];
      if (((uVar2 == 0x24) || (uVar2 == 0x25)) &&
         (((uVar2 != 0x25 ||
           (((uVar3 = puVar7[iVar8 + 1], uVar3 == 0xc774 || (uVar3 == 0xc744)) || (uVar3 == 0xc740))
           )) || (uVar3 == 0xc640)))) {
        if (uVar2 != 0x24) {
          if (uVar2 == 0x25) {
            if (local_a1c < 0) {
              uVar2 = puVar7[iVar8 + 1];
              if (uVar2 == 0xc774) {
LAB_101b808c:
                *(undefined2 *)(local_806 + iVar9 * 2 + -2) = 0xc774;
                iVar9 = iVar9 + 1;
                iVar8 = iVar8 + 2;
                local_a10 = iVar9;
                goto LAB_101b7e31;
              }
              if (uVar2 == 0xc744) {
                *(undefined2 *)(local_806 + iVar9 * 2 + -2) = 0xb97c;
                iVar9 = iVar9 + 1;
                iVar8 = iVar8 + 2;
                local_a10 = iVar9;
                goto LAB_101b7e31;
              }
              if (uVar2 == 0xc740) {
                *(undefined2 *)(local_806 + iVar9 * 2 + -2) = 0xb294;
                iVar9 = iVar9 + 1;
                iVar8 = iVar8 + 2;
                local_a10 = iVar9;
                goto LAB_101b7e31;
              }
              if (uVar2 == 0xc640) {
LAB_101b80f8:
                *(undefined2 *)(local_806 + iVar9 * 2 + -2) = 0xc640;
                iVar9 = iVar9 + 1;
                local_a10 = iVar9;
              }
            }
            else {
              piVar1 = (int *)(*(int *)(local_a14 + 4) + local_a1c * 8);
              if (*piVar1 == 0) goto LAB_101b810e;
              iVar5 = FUN_100650f0(*(undefined2 *)
                                    (*(int *)(*(int *)(local_a14 + 4) + local_a1c * 8) + -2 +
                                    piVar1[1] * 2));
              uVar2 = puVar7[iVar8 + 1];
              if (uVar2 == 0xc774) {
                if (iVar5 == 0) goto LAB_101b808c;
                *(undefined2 *)(local_806 + iVar9 * 2 + -2) = 0xac00;
                iVar9 = iVar9 + 1;
                iVar8 = iVar8 + 2;
                local_a10 = iVar9;
                goto LAB_101b7e31;
              }
              if (uVar2 == 0xc744) {
                if (iVar5 == 0) {
                  *(undefined2 *)(local_806 + iVar9 * 2 + -2) = 0xc744;
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + 2;
                  local_a10 = iVar9;
                }
                else {
                  *(undefined2 *)(local_806 + iVar9 * 2 + -2) = 0xb97c;
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + 2;
                  local_a10 = iVar9;
                }
                goto LAB_101b7e31;
              }
              if (uVar2 == 0xc740) {
                if (iVar5 == 0) {
                  *(undefined2 *)(local_806 + iVar9 * 2 + -2) = 0xc740;
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + 2;
                  local_a10 = iVar9;
                }
                else {
                  *(undefined2 *)(local_806 + iVar9 * 2 + -2) = 0xb294;
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + 2;
                  local_a10 = iVar9;
                }
                goto LAB_101b7e31;
              }
              if (uVar2 == 0xc640) {
                if (iVar5 != 0) goto LAB_101b80f8;
                *(undefined2 *)(local_806 + iVar9 * 2 + -2) = 0xacfc;
                iVar9 = iVar9 + 1;
                iVar8 = iVar8 + 2;
                local_a10 = iVar9;
                goto LAB_101b7e31;
              }
            }
            iVar8 = iVar8 + 1;
          }
LAB_101b810e:
          iVar8 = iVar8 + 1;
          goto LAB_101b7e31;
        }
        uVar2 = puVar7[iVar8 + 2];
        iVar5 = uVar2 - 0x31;
        local_a18 = iVar8 + 2;
        if (iVar5 < local_a24) {
          iVar8 = iVar5 * 8;
          piVar1 = (int *)(*(int *)(local_a14 + 4) + iVar8);
          if (*piVar1 != 0) {
            appStrcpy((ushort *)(local_806 + iVar9 * 2 + -2),(ushort *)*piVar1);
            iVar9 = iVar9 + *(int *)(*(int *)(local_a14 + 4) + 4 + iVar8);
            local_a10 = iVar9;
            FString::Printf((ushort *)local_a60,L"Param%d",uVar2 - 0x30);
            local_a00._0_1_ = 4;
            FString::FString(local_a34,*(ushort **)(*(int *)(local_a14 + 4) + iVar8));
            local_a00._0_1_ = 5;
            FUN_10040230(local_a60,local_a34);
            local_a00._0_1_ = 4;
            FString::~FString(local_a34);
            local_a00 = CONCAT31(local_a00._1_3_,3);
            FString::~FString(local_a60);
          }
        }
        iVar8 = local_a18 + 1;
        puVar7 = local_a48;
        local_a1c = iVar5;
      }
      else {
        *(ushort *)(local_806 + iVar9 * 2 + -2) = uVar2;
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + 1;
        local_a10 = iVar9;
      }
      goto LAB_101b7e31;
    }
    *(undefined2 *)(local_806 + iVar9 * 2 + -2) = 0;
    if (param_5 == 0) {
      if (param_3 != 0) goto LAB_101b81cf;
      iVar9 = (int)local_a20 * 0x5c;
      if (*(int *)(GL2GameData_exref + iVar9 + 0x240f8) == 4) {
        FUN_1000ef40();
        local_a00._0_1_ = 7;
        local_bcc[0] = 0x1f;
        local_bc0 = 1;
        local_bbc = 0;
        local_bc4 = 0;
        FUN_1000de50(&local_808);
        FUN_1016e1b0(local_bcc);
        local_a00._0_1_ = 3;
        FUN_1000e440();
        local_a00._0_1_ = 1;
        FUN_101b6de0();
        param_1 = local_a14;
      }
      else {
        FUN_1013e640(&local_808,*(int *)(GL2GameData_exref + iVar9 + 0x240f8),
                     *(undefined4 *)(GL2GameData_exref + iVar9 + 0x240fc));
        puVar7 = FString::operator*((FString *)(GL2GameData_exref + iVar9 + 0x24100));
        FUN_10147e60(puVar7);
        puVar7 = FString::operator*((FString *)(GL2GameData_exref + iVar9 + 0x2410c));
        FUN_101481d0(puVar7);
        puVar11 = local_a54;
        uVar10 = 0x244;
        FUN_10005c30(0x244,puVar11);
        FUN_100d1790(uVar10,puVar11);
        local_a00._0_1_ = 1;
        FUN_101b6de0();
        param_1 = local_a14;
      }
    }
    else {
      pvVar4 = L2ParamStack::Top(local_a3c);
      pvVar6 = L2ParamStack::Top(this);
      FUN_1000ef40();
      local_a00._0_1_ = 6;
      local_b18[0] = 0x46;
      local_b0c = 1;
      local_b08 = 0;
      if (0 < (int)pvVar4) {
        local_afc = 1;
        local_af8 = pvVar4;
      }
      FUN_1000df10(local_a20,0xffffffff,pvVar6);
      FUN_1000de50(&local_808);
      FUN_1016e1b0(local_b18);
      local_a00 = CONCAT31(local_a00._1_3_,3);
      FUN_1000e440();
      if (param_3 != 0) {
LAB_101b81cf:
        if (local_a38 != (ushort *)0x0) {
          appStrcpy(local_a38,&local_808);
        }
      }
      local_a00._0_1_ = 1;
      FUN_101b6de0();
      param_1 = local_a14;
    }
  }
  for (iVar9 = 0; local_a40 = iVar9, iVar9 < local_a24; iVar9 = iVar9 + 1) {
    FUN_101b7430();
  }
  for (local_a28 = 0; local_a28 < *(int *)(param_1 + 8); local_a28 = local_a28 + 1) {
  }
  FArray::Empty((FArray *)(param_1 + 4),8,0);
  local_a00 = (uint)local_a00._1_3_ << 8;
  FUN_1003fff0();
  local_a00 = 0xffffffff;
LAB_101b7d89:
  ExceptionList = local_a08;
  __security_check_cookie(local_8 ^ (uint)local_9fc);
  return;
}


// ==== 1014ac40 FUN_1014ac40 depth=3 from=FUN_1014f960 callees=FUN_101b79d0@101b79d0
// strings: 

void FUN_1014ac40(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1020b61b;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_103554c4 ^ (uint)auStack_10);
  ExceptionList = &local_c;
  uVar3 = 0x10;
  iVar2 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
  local_c = (void *)0x0;
  if (iVar2 != 0) {
    FUN_101b79d0(uVar3,iVar2);
  }
  ExceptionList = pvVar1;
  return;
}


// ==== 101ca9f0 fastzero_I depth=3 from=__VEC_memzero callees=
// strings: 

/* Library Function - Single Match
    _fastzero_I
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2)

{
  param_2 = param_2 >> 7;
  do {
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    param_1[4] = (undefined1  [16])0x0;
    param_1[5] = (undefined1  [16])0x0;
    param_1[6] = (undefined1  [16])0x0;
    param_1[7] = (undefined1  [16])0x0;
    param_1 = param_1 + 8;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}


