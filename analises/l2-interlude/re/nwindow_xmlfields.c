// ==== 100ef8c0 FUN_100ef8c0 depth=0 from=raiz callees=FUN_100052e0@100052e0 CORE.DLL::appFailAssert@EXTERNAL:0000018a FUN_100cfd80@100cfd80 FUN_100cf690@100cf690 FUN_100cf8d0@100cf8d0 FUN_100cf4c0@100cf4c0 CORE.DLL::FArchive::IsSaving@EXTERNAL:000001ab FUN_10004ed0@10004ed0 CORE.DLL::operator<<@EXTERNAL:00000110 FUN_100cfbf0@100cfbf0
// strings: 10269c1c=.\XML\XMLUIData.cpp | 10269c14=m_pSize | 

void __thiscall FUN_100ef8c0(int param_1,FArchive *param_2)

{
  FArchive *this;
  int iVar1;
  undefined4 uVar2;
  uint uStack_38;
  int local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  this = param_2;
  puStack_c = &LAB_101fe1a1;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  operator<<(param_2,(FString *)(param_1 + 4));
  operator<<(this,(FString *)(param_1 + 0x10));
  FUN_100052e0(this,param_1 + 0x1c);
  FUN_100052e0(this,param_1 + 0x20);
  operator<<(this,(FString *)(param_1 + 0x24));
  operator<<(this,(FString *)(param_1 + 0x3c));
  operator<<(this,(FString *)(param_1 + 0x48));
  FUN_100052e0(this,param_1 + 0x54);
  iVar1 = FArchive::IsSaving(this);
  if (iVar1 == 0) {
    local_1c = 0;
    FUN_100052e0(this,&local_1c);
    if (local_1c != 0) {
      FUN_100052e0(this,&param_2);
      if (param_2 == (FArchive *)0x0) {
        local_18 = FUN_10004ed0(0x28);
        local_8 = CONCAT31(local_8._1_3_,2);
        if (local_18 == 0) goto LAB_100efa2b;
        iVar1 = FUN_100cf8d0();
      }
      else {
        local_18 = FUN_10004ed0(0x14);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_18 == 0) {
LAB_100efa2b:
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_100cf690();
        }
      }
      local_8 = local_8 & 0xffffff00;
      *(int *)(param_1 + 0x5c) = iVar1;
      if (iVar1 == 0) {
        appFailAssert("m_pSize",".\\XML\\XMLUIData.cpp",0x23e);
      }
      FUN_100cfd80(this,*(undefined4 *)(param_1 + 0x5c));
    }
    FUN_100052e0(this,&local_20);
    if (local_20 == 0) goto LAB_100efa9e;
    param_2 = (FArchive *)FUN_10004ed0(0x1c);
    local_8._0_1_ = 3;
    if (param_2 == (FArchive *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_100cfbf0();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  else {
    param_2 = (FArchive *)(uint)(*(int *)(param_1 + 0x5c) != 0);
    FUN_100052e0(this,&param_2);
    if (param_2 != (FArchive *)0x0) {
      local_20 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
      FUN_100052e0(this,&local_20);
      FUN_100cfd80(this,*(undefined4 *)(param_1 + 0x5c));
    }
    local_18 = (uint)(*(int *)(param_1 + 0x58) != 0);
    FUN_100052e0(this,&local_18);
    if (local_18 == 0) goto LAB_100efa9e;
    uVar2 = *(undefined4 *)(param_1 + 0x58);
  }
  FUN_100cf4c0(this,uVar2);
LAB_100efa9e:
  FUN_100052e0(this,param_1 + 0x60);
  FUN_100052e0(this,param_1 + 100);
  FUN_100052e0(this,param_1 + 0x68);
  operator<<(this,(FString *)(param_1 + 0x6c));
  FUN_100052e0(this,param_1 + 0x78);
  ExceptionList = local_10;
  return;
}


// ==== 100e07f0 FUN_100e07f0 depth=0 from=raiz callees=FUN_100cda90@100cda90 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::FString@EXTERNAL:0000019e CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_100c80b0@100c80b0 FUN_100efd60@100efd60 FUN_100cd4b0@100cd4b0 FUN_100c97c0@100c97c0 FUN_1014f980@1014f980 FUN_100cd980@100cd980 FUN_100d01f0@100d01f0 FUN_10005c30@10005c30
// strings: 102631e8=XMLListData(%s):default property processing failed!! | 10262e60=maxRow | 10262df8=showRow | 102631d0=useScroll | 102631b0=contentsHeight | 10263194=headerHeight | 1026317c=ListColumn | 10263118=XMLListCtrlData(%s):failed to get child node list | 1025dc94=string | 1025f5c0=width | 10263104=bNumber | 102630f4=bAscend | 102630d8=bClickEnable | 

undefined4 __thiscall FUN_100e07f0(int *param_1,undefined4 param_2)

{
  int iVar1;
  FString *pFVar2;
  undefined4 uStack_9c;
  FString *pFStack_98;
  uint local_90;
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [16];
  int local_2c;
  undefined1 *local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fb21d;
  local_10 = ExceptionList;
  local_90 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_90;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_20 = (undefined1 *)&uStack_9c;
  FString::FString((FString *)&uStack_9c,(FString *)&stack0x00000008);
  local_8._0_1_ = 1;
  iVar1 = FUN_100efd60(param_2);
  if (iVar1 == 0) {
    pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
    FString::operator*(pFVar2);
    pFStack_98 = (FString *)0x102631e8;
    uStack_9c = 0x100e086d;
    uStack_9c = FUN_10005c30();
    FUN_100d01f0();
  }
  else {
    pFStack_98 = (FString *)0x100e08aa;
    FString::FString(local_3c,(ushort *)L"maxRow");
    local_8._0_1_ = 3;
    pFStack_98 = (FString *)0x100e08b9;
    iVar1 = FUN_100cd980();
    param_1[0x22] = iVar1;
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    if (param_1[0x22] == -9999) {
      param_1[0x22] = 100;
    }
    pFStack_98 = (FString *)0x100e08f1;
    FString::FString(local_3c,(ushort *)L"showRow");
    local_8._0_1_ = 4;
    pFStack_98 = (FString *)0x100e0900;
    iVar1 = FUN_100cd980();
    param_1[0x23] = iVar1;
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    pFStack_98 = (FString *)0x100e0921;
    FString::FString(local_3c,(ushort *)L"useScroll");
    local_8._0_1_ = 5;
    pFStack_98 = (FString *)0x100e0930;
    iVar1 = FUN_100cda90();
    param_1[0x24] = iVar1;
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    if (param_1[0x24] == -1) {
      param_1[0x24] = 1;
    }
    pFStack_98 = (FString *)0x100e0964;
    FString::FString(local_3c,(ushort *)L"contentsHeight");
    local_8._0_1_ = 6;
    pFStack_98 = (FString *)0x100e0973;
    iVar1 = FUN_100cd980();
    param_1[0x25] = iVar1;
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    pFStack_98 = (FString *)0x100e0994;
    FString::FString(local_3c,(ushort *)L"headerHeight");
    local_8._0_1_ = 7;
    pFStack_98 = (FString *)0x100e09a3;
    iVar1 = FUN_100cd980();
    param_1[0x26] = iVar1;
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    if (param_1[0x26] == -9999) {
      param_1[0x26] = 0x13;
    }
    FUN_100c80b0();
    local_8._0_1_ = 8;
    pFStack_98 = (FString *)0x100e09e3;
    FString::FString(local_3c,(ushort *)L"ListColumn");
    local_8._0_1_ = 9;
    pFStack_98 = local_3c;
    uStack_9c = 0x100e09f6;
    iVar1 = FUN_100cd4b0();
    local_8._0_1_ = 8;
    FString::~FString(local_3c);
    if (iVar1 != 0) {
      for (local_18 = 0; local_18 < local_2c; local_18 = local_18 + 1) {
        pFStack_98 = (FString *)0x100e0a6d;
        FString::FString(local_3c,(ushort *)L"string");
        local_8._0_1_ = 10;
        pFStack_98 = (FString *)0x100e0a7c;
        FUN_100cd980();
        local_8._0_1_ = 8;
        FString::~FString(local_3c);
        pFStack_98 = (FString *)0x100e0a99;
        FString::FString(local_48,(ushort *)L"width");
        local_8._0_1_ = 0xb;
        pFStack_98 = (FString *)0x100e0aa8;
        FUN_100cd980();
        local_8._0_1_ = 8;
        FString::~FString(local_48);
        pFStack_98 = (FString *)0x100e0ac5;
        FString::FString(local_54,(ushort *)L"bNumber");
        local_8._0_1_ = 0xc;
        pFStack_98 = (FString *)0x100e0ad4;
        FUN_100cda90();
        local_8._0_1_ = 8;
        FString::~FString(local_54);
        pFStack_98 = (FString *)0x100e0af1;
        FString::FString(local_60,(ushort *)L"bAscend");
        local_8._0_1_ = 0xd;
        pFStack_98 = (FString *)0x100e0b00;
        FUN_100cda90();
        local_8._0_1_ = 8;
        FString::~FString(local_60);
        pFStack_98 = (FString *)0x100e0b1d;
        FString::FString(local_6c,(ushort *)L"bClickEnable");
        local_8._0_1_ = 0xe;
        pFStack_98 = (FString *)0x100e0b2c;
        FUN_100cda90();
        local_8._0_1_ = 8;
        FString::~FString(local_6c);
        pFStack_98 = (FString *)0x100e0b4a;
        FUN_1014f980();
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_100c97c0();
      local_8 = 0xffffffff;
      FString::~FString((FString *)&stack0x00000008);
      ExceptionList = local_10;
      return 1;
    }
    pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
    FString::operator*(pFVar2);
    pFStack_98 = (FString *)0x10263118;
    uStack_9c = 0x100e0a2a;
    uStack_9c = FUN_10005c30();
    FUN_100d01f0();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_100c97c0();
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 0;
}


// ==== 100e0460 FUN_100e0460 depth=0 from=raiz callees=FUN_1014f980@1014f980 CORE.DLL::appFailAssert@EXTERNAL:0000018a CORE.DLL::FArchive::IsSaving@EXTERNAL:000001ab FUN_100ef8c0@100ef8c0 FUN_100052e0@100052e0
// strings: 10263014=.\XML\XMLListData.cpp | 10262ffc=m_columnData.Num() == 0 | 

void __thiscall FUN_100e0460(int param_1,FArchive *param_2)

{
  FArchive *this;
  int iVar1;
  uint local_48;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [12];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = param_2;
  puStack_c = &LAB_101fb0d0;
  local_10 = ExceptionList;
  local_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef8c0(param_2);
  FUN_100052e0(this,param_1 + 0x88);
  FUN_100052e0(this,param_1 + 0x8c);
  FUN_100052e0(this,param_1 + 0x90);
  FUN_100052e0(this,param_1 + 0x94);
  FUN_100052e0(this,param_1 + 0x98);
  iVar1 = FArchive::IsSaving(this);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xa0) != 0) {
      appFailAssert("m_columnData.Num() == 0",".\\XML\\XMLListData.cpp",0x7d);
    }
    FUN_100052e0(this,&param_2);
    for (iVar1 = 0; iVar1 < (int)param_2; iVar1 = iVar1 + 1) {
      local_1c = iVar1;
      FUN_100052e0(this,local_38);
      FUN_100052e0(this,local_34);
      FUN_100052e0(this,local_30);
      FUN_100052e0(this,local_2c);
      FUN_100052e0(this,local_28);
      FUN_1014f980(local_38);
    }
  }
  else {
    param_2 = *(FArchive **)(param_1 + 0xa0);
    FUN_100052e0(this,&param_2);
    for (local_18 = 0; local_18 < (int)param_2; local_18 = local_18 + 1) {
      iVar1 = local_18 * 0x14;
      FUN_100052e0(this,*(int *)(param_1 + 0x9c) + iVar1);
      FUN_100052e0(this,*(int *)(param_1 + 0x9c) + 4 + iVar1);
      FUN_100052e0(this,*(int *)(param_1 + 0x9c) + 8 + iVar1);
      FUN_100052e0(this,*(int *)(param_1 + 0x9c) + 0xc + iVar1);
      FUN_100052e0(this,*(int *)(param_1 + 0x9c) + 0x10 + iVar1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100e1730 FUN_100e1730 depth=0 from=raiz callees=FUN_100efd60@100efd60 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::FString@EXTERNAL:0000019e FUN_100cd980@100cd980 FUN_100d01f0@100d01f0 FUN_10005c30@10005c30 CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::FString@EXTERNAL:000001b0
// strings: 10263768=XMLMultiEditData(%s):default property processing failed!! | 10262e60=maxRow | 10262df8=showRow | 

undefined4 __thiscall FUN_100e1730(int *param_1,undefined4 param_2)

{
  int iVar1;
  FString *this;
  undefined4 uStack_48;
  wchar_t *pwStack_44;
  uint uStack_3c;
  FString local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fb464;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1c = (undefined1 *)&uStack_48;
  FString::FString((FString *)&uStack_48,(FString *)&stack0x00000008);
  local_8._0_1_ = 1;
  iVar1 = FUN_100efd60(param_2);
  if (iVar1 == 0) {
    this = (FString *)(**(code **)(*param_1 + 0x44))();
    FString::operator*(this);
    pwStack_44 = L"XMLMultiEditData(%s):default property processing failed!!";
    uStack_48 = 0x100e17b0;
    uStack_48 = FUN_10005c30();
    FUN_100d01f0();
    local_8 = 0xffffffff;
    FString::~FString((FString *)&stack0x00000008);
    ExceptionList = local_10;
    return 0;
  }
  pwStack_44 = L"䗆ϼ䶍凘쾋蓨ﻁ觿袆";
  FString::FString(local_2c,(ushort *)L"maxRow");
  local_8._0_1_ = 3;
  pwStack_44 = L"蚉\x88";
  iVar1 = FUN_100cd980();
  param_1[0x22] = iVar1;
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  pwStack_44 = L"䗆Ӽ喍勘쾋嗨ﻁ觿貆";
  FString::FString(local_2c,(ushort *)L"showRow");
  local_8._0_1_ = 4;
  pwStack_44 = L"蚉\x8c";
  iVar1 = FUN_100cd980();
  param_1[0x23] = iVar1;
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_2c);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 1;
}


// ==== 100e1680 FUN_100e1680 depth=0 from=raiz callees=FUN_100ef8c0@100ef8c0 FUN_100052e0@100052e0
// strings: 

void __thiscall FUN_100e1680(int param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fb420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef8c0(param_2);
  FUN_100052e0(param_2,param_1 + 0x88);
  FUN_100052e0(param_2,param_1 + 0x8c);
  ExceptionList = local_10;
  return;
}


// ==== 100e69f0 FUN_100e69f0 depth=0 from=raiz callees=FUN_10004ed0@10004ed0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100cd860@100cd860 FUN_100e6080@100e6080 CORE.DLL::FString::FString@EXTERNAL:0000019e CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100c80b0@100c80b0 CORE.DLL::FString::operator=@EXTERNAL:000001a3 CORE.DLL::FString::operator==@EXTERNAL:000001c7 CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_100cd4b0@100cd4b0 FUN_100c97c0@100c97c0 CORE.DLL::appFailAssert@EXTERNAL:0000018a FUN_100d01f0@100d01f0 FUN_10005c30@10005c30 FUN_100d9a30@100d9a30 FUN_100ce960@100ce960
// strings: 10246ca8=name | 10265d00=state | 1024149c=undefined | 10265ce4=ShortcutItem | 10265c70=XMLShortcutData(%s):failed to get ShortcutItem elements!! | 10265960=.\XML\XMLShortcutData.cpp | 10265c5c=pShortcutItemNode | 10265be8=XMLShortcutData(%s):failed to create shortcut item data!! | 10265b88=XMLShortcutData(%s):key is not defined!! | 10265b74=command | 1024149c=undefined | 10265b18=XMLShortcutData(%s):command is not defined!! | 10265b08=subkey1 | 10265af8=subkey2 | 

undefined4 __fastcall FUN_100e69f0(int *param_1)

{
  undefined1 uVar1;
  FString *pFVar2;
  int iVar3;
  int *piVar4;
  FString *this;
  undefined4 uStack_90;
  uint uStack_80;
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  int local_34;
  int local_30;
  undefined1 *local_24;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101fc5aa;
  local_10 = ExceptionList;
  uStack_80 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = param_1;
  FString::FString(local_40,(ushort *)L"name");
  local_8._0_1_ = 1;
  pFVar2 = (FString *)FUN_100cd860();
  local_8._0_1_ = 2;
  FString::operator=((FString *)(param_1 + 1),pFVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_70);
  local_8._0_1_ = 0;
  FString::~FString(local_40);
  FString::FString(local_40,(ushort *)L"state");
  local_8._0_1_ = 3;
  pFVar2 = (FString *)FUN_100cd860();
  local_8._0_1_ = 4;
  this = (FString *)(param_1 + 4);
  FString::operator=(this,pFVar2);
  local_8._0_1_ = 3;
  FString::~FString(local_70);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_40);
  iVar3 = FString::operator==(this,(ushort *)L"undefined");
  if (iVar3 != 0) {
    FString::operator=(this,(ushort *)&DAT_1022f9f8);
  }
  FUN_100c80b0();
  local_8._0_1_ = 5;
  FString::FString(local_40,(ushort *)L"ShortcutItem");
  local_8._0_1_ = 6;
  iVar3 = FUN_100cd4b0();
  local_8._0_1_ = 5;
  FString::~FString(local_40);
  if (iVar3 == 0) {
    pFVar2 = (FString *)(**(code **)(*local_18 + 0x10))();
    local_8 = CONCAT31(local_8._1_3_,7);
    FString::operator*(pFVar2);
  }
  else {
    local_1c = 0;
    while( true ) {
      if (local_30 <= local_1c) {
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_100c97c0();
        ExceptionList = local_10;
        return 1;
      }
      if (*(int *)(local_34 + local_1c * 4) == 0) {
        uStack_90 = 0x100e6ba9;
        appFailAssert("pShortcutItemNode",".\\XML\\XMLShortcutData.cpp",0xbc);
      }
      local_24 = (undefined1 *)FUN_10004ed0();
      local_8._0_1_ = 8;
      if (local_24 == (undefined1 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_100e6080();
      }
      local_8._0_1_ = 5;
      uVar1 = (undefined1)local_8;
      local_8._0_1_ = 5;
      if (piVar4 == (int *)0x0) break;
      local_8._0_1_ = uVar1;
      FString::FString(local_4c,(ushort *)&DAT_10265bdc);
      local_8._0_1_ = 10;
      iVar3 = FUN_100ce960();
      local_8._0_1_ = 5;
      FString::~FString(local_4c);
      if (iVar3 == 0) {
        pFVar2 = (FString *)(**(code **)(*local_18 + 0x10))();
        local_8 = CONCAT31(local_8._1_3_,0xb);
        FString::operator*(pFVar2);
        goto LAB_100e6b3f;
      }
      (**(code **)*piVar4)();
      FString::FString(local_58,(ushort *)L"command");
      local_8._0_1_ = 0xc;
      uStack_90 = 0x100e6c7d;
      FUN_100cd860();
      local_8._0_1_ = 0xe;
      FString::~FString(local_58);
      iVar3 = FString::operator==(local_40,(ushort *)L"undefined");
      if (iVar3 != 0) {
        pFVar2 = (FString *)(**(code **)(*local_18 + 0x10))();
        local_8._0_1_ = 0xf;
        FString::operator*(pFVar2);
        uStack_90 = 0x100e6cc1;
        uStack_90 = FUN_10005c30();
        FUN_100d01f0();
        local_8._0_1_ = 0xe;
        FString::~FString(local_70);
        pFVar2 = local_40;
        goto LAB_100e6b54;
      }
      local_24 = (undefined1 *)&uStack_90;
      FString::FString((FString *)&uStack_90,local_40);
      local_8._0_1_ = 0xe;
      (**(code **)(*piVar4 + 0xc))();
      FString::FString(local_64,(ushort *)L"subkey1");
      local_8._0_1_ = 0x11;
      iVar3 = FUN_100ce960();
      local_8 = CONCAT31(local_8._1_3_,0xe);
      FString::~FString(local_64);
      if (iVar3 != 0) {
        (**(code **)(*piVar4 + 4))();
      }
      FString::FString(local_70,(ushort *)L"subkey2");
      local_8._0_1_ = 0x12;
      iVar3 = FUN_100ce960();
      local_8 = CONCAT31(local_8._1_3_,0xe);
      FString::~FString(local_70);
      if (iVar3 != 0) {
        (**(code **)(*piVar4 + 8))();
      }
      FUN_100d9a30();
      local_8._0_1_ = 5;
      FString::~FString(local_40);
      local_1c = local_1c + 1;
    }
    pFVar2 = (FString *)(**(code **)(*local_18 + 0x10))();
    local_8 = CONCAT31(local_8._1_3_,9);
    FString::operator*(pFVar2);
  }
LAB_100e6b3f:
  uStack_90 = 0x100e6b44;
  uStack_90 = FUN_10005c30();
  FUN_100d01f0();
  pFVar2 = local_70;
LAB_100e6b54:
  local_8._0_1_ = 5;
  FString::~FString(pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100c97c0();
  ExceptionList = local_10;
  return 0;
}


// ==== 100e6270 FUN_100e6270 depth=0 from=raiz callees=CORE.DLL::appFailAssert@EXTERNAL:0000018a CORE.DLL::FString::FString@EXTERNAL:0000019e FUN_100494f0@100494f0
// strings: 10265960=.\XML\XMLShortcutData.cpp | 1026594c=pShortcutItemData | 

undefined4 __fastcall FUN_100e6270(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_5c [12];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101fc392;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x20); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + iVar2 * 4);
    if (piVar1 == (int *)0x0) {
      appFailAssert("pShortcutItemData",".\\XML\\XMLShortcutData.cpp",0xec);
    }
    uStack_4c = 0x100e62e2;
    FString::FString((FString *)&stack0xffffffbc,(FString *)(param_1 + 0x10));
    local_8._0_1_ = 1;
    (**(code **)(*piVar1 + 0x18))();
    uStack_4c = 0x100e62f9;
    uStack_4c = (**(code **)(*piVar1 + 0x14))();
    uStack_50 = 0x100e6303;
    uStack_50 = (**(code **)(*piVar1 + 0x10))();
    (**(code **)(*piVar1 + 0x1c))(auStack_5c);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100494f0();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 100e6380 FUN_100e6380 depth=0 from=raiz callees=CORE.DLL::appFailAssert@EXTERNAL:0000018a CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_100494f0@100494f0
// strings: 10265960=.\XML\XMLShortcutData.cpp | 1026594c=pShortcutItemData | 

undefined4 __fastcall FUN_100e6380(int param_1)

{
  int *piVar1;
  int iVar2;
  FString aFStack_48 [12];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101fc3c2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + iVar2 * 4);
      if (piVar1 == (int *)0x0) {
        appFailAssert("pShortcutItemData",".\\XML\\XMLShortcutData.cpp",0xfb);
      }
      uStack_38 = 0x100e63e9;
      FString::FString((FString *)&stack0xffffffd0,(ushort *)&DAT_1022f9f8);
      local_4 = 0;
      (**(code **)(*piVar1 + 0x18))();
      uStack_38 = 0x100e6404;
      uStack_38 = (**(code **)(*piVar1 + 0x14))();
      uStack_3c = 0x100e640e;
      uStack_3c = (**(code **)(*piVar1 + 0x10))();
      FString::FString(aFStack_48,(ushort *)&DAT_1022f9f8);
      local_4 = 0xffffffff;
      FUN_100494f0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  ExceptionList = local_c;
  return 1;
}


// ==== 100e5f30 FUN_100e5f30 depth=0 from=raiz callees=CORE.DLL::FString::FString@EXTERNAL:0000019e
// strings: 

FString * __thiscall FUN_100e5f30(int param_1,FString *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fc2ba;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_2,(FString *)(param_1 + 4));
  ExceptionList = local_10;
  return param_2;
}


// ==== 100e7a40 FUN_100e7a40 depth=0 from=raiz callees=FUN_100efd60@100efd60 CORE.DLL::FString::operator==@EXTERNAL:000001c7 CORE.DLL::FString::operator=@EXTERNAL:000001a2 CORE.DLL::FString::Empty@EXTERNAL:000001a5 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::FString@EXTERNAL:0000019e FUN_100cd860@100cd860 FUN_100cd980@100cd980 FUN_100d01f0@100d01f0 FUN_10005c30@10005c30 CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::FString@EXTERNAL:000001b0
// strings: 10266950=XMLSliderCtrlData(%s):default property processing failed!! | 10266934=iNumOfTick | 102668d0=XMLSliderCtrlData(%s):iNumOfTick is not defined!! | 102668bc=iCurrTick | 10266858=XMLSliderCtrlData(%s):iCurrTick is not defined!! | 10266834=iThumbBtnWidth | 102667c8=XMLSliderCtrlData(%s):iThumbBtnWidth is not defined!! | 102667a8=iThumbBtnHeight | 10266738=XMLSliderCtrlData(%s):iThumbBtnHeight is not defined!! | 10266714=strBackTexture | 1024149c=undefined | 102666a8=XMLSliderCtrlData(%s):strBackTexture is not defined!! | 1026667c=strDisableBackTexture | 1024149c=undefined | 10266600=XMLSliderCtrlData(%s):strDisableBackTexture is not defined!! | 102665c8=strThumbBtnNormalTexture | 1024149c=undefined | 10266548=XMLSliderCtrlData(%s):strThumbBtnNormalTexture is not defined!! | 10266514=strThumbBtnDownTexture | 1024149c=undefined | 10266498=XMLSliderCtrlData(%s):strThumbBtnDownTexture is not defined!! | 10266478=iPushBtnWidth | 10266458=iPushBtnHeight | 10266430=iPushBtnAutoHitTime | 102663f8=strDecreaseBtnNormalTexture | 1024149c=undefined | 102663c4=strDecreaseBtnDownTexture | 1024149c=undefined | 1026638c=strIncreaseBtnNormalTexture | 1024149c=undefined | 10266358=strIncreaseBtnDownTexture | 1024149c=undefined | 10266338=strTickTexture | 1024149c=undefined | 

undefined4 __thiscall FUN_100e7a40(int *param_1,undefined4 param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *this;
  undefined4 uStack_54;
  FString *pFStack_50;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fc953;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1c = (undefined1 *)&uStack_54;
  FString::FString((FString *)&uStack_54,(FString *)&stack0x00000008);
  local_8._0_1_ = 1;
  iVar1 = FUN_100efd60(param_2);
  if (iVar1 == 0) {
    pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
    FString::operator*(pFVar2);
    pFStack_50 = (FString *)0x10266950;
  }
  else {
    pFStack_50 = (FString *)0x100e7afd;
    FString::FString(local_2c,(ushort *)L"iNumOfTick");
    local_8._0_1_ = 3;
    pFStack_50 = (FString *)0x100e7b0c;
    iVar1 = FUN_100cd980();
    param_1[0x24] = iVar1;
    local_8._0_1_ = 1;
    FString::~FString(local_2c);
    if (param_1[0x24] == -9999) {
      pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
      FString::operator*(pFVar2);
      pFStack_50 = (FString *)0x102668d0;
    }
    else {
      pFStack_50 = (FString *)0x100e7b54;
      FString::FString(local_2c,(ushort *)L"iCurrTick");
      local_8._0_1_ = 4;
      pFStack_50 = (FString *)0x100e7b63;
      iVar1 = FUN_100cd980();
      param_1[0x25] = iVar1;
      local_8._0_1_ = 1;
      FString::~FString(local_2c);
      if (param_1[0x25] == -9999) {
        pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
        FString::operator*(pFVar2);
        pFStack_50 = (FString *)0x10266858;
      }
      else {
        pFStack_50 = (FString *)0x100e7bab;
        FString::FString(local_2c,(ushort *)L"iThumbBtnWidth");
        local_8._0_1_ = 5;
        pFStack_50 = (FString *)0x100e7bba;
        iVar1 = FUN_100cd980();
        param_1[0x26] = iVar1;
        local_8._0_1_ = 1;
        FString::~FString(local_2c);
        if (param_1[0x26] == -9999) {
          pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
          FString::operator*(pFVar2);
          pFStack_50 = (FString *)0x102667c8;
        }
        else {
          pFStack_50 = (FString *)0x100e7c02;
          FString::FString(local_2c,(ushort *)L"iThumbBtnHeight");
          local_8._0_1_ = 6;
          pFStack_50 = (FString *)0x100e7c11;
          iVar1 = FUN_100cd980();
          param_1[0x27] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_2c);
          if (param_1[0x27] == -9999) {
            pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
            FString::operator*(pFVar2);
            pFStack_50 = (FString *)0x10266738;
          }
          else {
            pFStack_50 = (FString *)0x100e7c59;
            FString::FString(local_2c,(ushort *)L"strBackTexture");
            local_8._0_1_ = 7;
            pFStack_50 = local_38;
            uStack_54 = 0x100e7c6c;
            pFVar2 = (FString *)FUN_100cd860();
            local_8._0_1_ = 8;
            pFStack_50 = (FString *)0x100e7c7d;
            FString::operator=((FString *)(param_1 + 0x37),pFVar2);
            local_8._0_1_ = 7;
            FString::~FString(local_38);
            local_8._0_1_ = 1;
            FString::~FString(local_2c);
            pFStack_50 = (FString *)0x100e7ca7;
            iVar1 = FString::operator==((FString *)(param_1 + 0x37),(ushort *)L"undefined");
            if (iVar1 == 0) {
              pFStack_50 = (FString *)0x100e7cd5;
              FString::FString(local_2c,(ushort *)L"strDisableBackTexture");
              local_8._0_1_ = 9;
              pFStack_50 = local_38;
              uStack_54 = 0x100e7ce8;
              pFVar2 = (FString *)FUN_100cd860();
              local_8._0_1_ = 10;
              pFStack_50 = (FString *)0x100e7cf9;
              FString::operator=((FString *)(param_1 + 0x3a),pFVar2);
              local_8._0_1_ = 9;
              FString::~FString(local_38);
              local_8._0_1_ = 1;
              FString::~FString(local_2c);
              pFStack_50 = (FString *)0x100e7d23;
              iVar1 = FString::operator==((FString *)(param_1 + 0x3a),(ushort *)L"undefined");
              if (iVar1 == 0) {
                pFStack_50 = (FString *)0x100e7d51;
                FString::FString(local_2c,(ushort *)L"strThumbBtnNormalTexture");
                local_8._0_1_ = 0xb;
                pFStack_50 = local_38;
                uStack_54 = 0x100e7d64;
                pFVar2 = (FString *)FUN_100cd860();
                local_8._0_1_ = 0xc;
                pFStack_50 = (FString *)0x100e7d75;
                FString::operator=((FString *)(param_1 + 0x40),pFVar2);
                local_8._0_1_ = 0xb;
                FString::~FString(local_38);
                local_8._0_1_ = 1;
                FString::~FString(local_2c);
                pFStack_50 = (FString *)0x100e7d9f;
                iVar1 = FString::operator==((FString *)(param_1 + 0x40),(ushort *)L"undefined");
                if (iVar1 == 0) {
                  pFStack_50 = (FString *)0x100e7dcd;
                  FString::FString(local_2c,(ushort *)L"strThumbBtnDownTexture");
                  local_8._0_1_ = 0xd;
                  pFStack_50 = local_38;
                  uStack_54 = 0x100e7de0;
                  pFVar2 = (FString *)FUN_100cd860();
                  local_8._0_1_ = 0xe;
                  pFStack_50 = (FString *)0x100e7df1;
                  FString::operator=((FString *)(param_1 + 0x43),pFVar2);
                  local_8._0_1_ = 0xd;
                  FString::~FString(local_38);
                  local_8._0_1_ = 1;
                  FString::~FString(local_2c);
                  pFStack_50 = (FString *)0x100e7e1b;
                  iVar1 = FString::operator==((FString *)(param_1 + 0x43),(ushort *)L"undefined");
                  if (iVar1 == 0) {
                    pFStack_50 = (FString *)0x100e7e49;
                    FString::FString(local_2c,(ushort *)L"iPushBtnWidth");
                    local_8._0_1_ = 0xf;
                    pFStack_50 = (FString *)0x100e7e58;
                    iVar1 = FUN_100cd980();
                    param_1[0x28] = iVar1;
                    local_8._0_1_ = 1;
                    FString::~FString(local_2c);
                    if (param_1[0x28] == -9999) {
                      param_1[0x28] = -1;
                    }
                    pFStack_50 = (FString *)0x100e7e8e;
                    FString::FString(local_2c,(ushort *)L"iPushBtnHeight");
                    local_8._0_1_ = 0x10;
                    pFStack_50 = (FString *)0x100e7e9d;
                    iVar1 = FUN_100cd980();
                    param_1[0x29] = iVar1;
                    local_8._0_1_ = 1;
                    FString::~FString(local_2c);
                    if (param_1[0x29] == -9999) {
                      param_1[0x29] = -1;
                    }
                    pFStack_50 = (FString *)0x100e7ed3;
                    FString::FString(local_2c,(ushort *)L"iPushBtnAutoHitTime");
                    local_8._0_1_ = 0x11;
                    pFStack_50 = (FString *)0x100e7ee2;
                    iVar1 = FUN_100cd980();
                    param_1[0x2a] = iVar1;
                    local_8._0_1_ = 1;
                    FString::~FString(local_2c);
                    if (param_1[0x2a] == -9999) {
                      param_1[0x2a] = 300;
                    }
                    pFStack_50 = (FString *)0x100e7f18;
                    FString::FString(local_2c,(ushort *)L"strDecreaseBtnNormalTexture");
                    local_8._0_1_ = 0x12;
                    pFStack_50 = local_38;
                    uStack_54 = 0x100e7f2b;
                    pFVar2 = (FString *)FUN_100cd860();
                    local_8._0_1_ = 0x13;
                    pFStack_50 = (FString *)0x100e7f3c;
                    FString::operator=((FString *)(param_1 + 0x2b),pFVar2);
                    local_8._0_1_ = 0x12;
                    FString::~FString(local_38);
                    local_8 = CONCAT31(local_8._1_3_,1);
                    FString::~FString(local_2c);
                    pFStack_50 = (FString *)0x100e7f66;
                    iVar1 = FString::operator==((FString *)(param_1 + 0x2b),(ushort *)L"undefined");
                    if (iVar1 != 0) {
                      FString::Empty((FString *)(param_1 + 0x2b));
                    }
                    pFStack_50 = (FString *)0x100e7f84;
                    FString::FString(local_2c,(ushort *)L"strDecreaseBtnDownTexture");
                    local_8._0_1_ = 0x14;
                    pFStack_50 = local_38;
                    uStack_54 = 0x100e7f97;
                    pFVar2 = (FString *)FUN_100cd860();
                    local_8._0_1_ = 0x15;
                    pFStack_50 = (FString *)0x100e7fa8;
                    FString::operator=((FString *)(param_1 + 0x2e),pFVar2);
                    local_8._0_1_ = 0x14;
                    FString::~FString(local_38);
                    local_8 = CONCAT31(local_8._1_3_,1);
                    FString::~FString(local_2c);
                    pFStack_50 = (FString *)0x100e7fd2;
                    iVar1 = FString::operator==((FString *)(param_1 + 0x2e),(ushort *)L"undefined");
                    if (iVar1 != 0) {
                      FString::Empty((FString *)(param_1 + 0x2e));
                    }
                    pFStack_50 = (FString *)0x100e7ff0;
                    FString::FString(local_2c,(ushort *)L"strIncreaseBtnNormalTexture");
                    local_8._0_1_ = 0x16;
                    pFStack_50 = local_38;
                    uStack_54 = 0x100e8003;
                    pFVar2 = (FString *)FUN_100cd860();
                    local_8._0_1_ = 0x17;
                    pFStack_50 = (FString *)0x100e8014;
                    FString::operator=((FString *)(param_1 + 0x31),pFVar2);
                    local_8._0_1_ = 0x16;
                    FString::~FString(local_38);
                    local_8 = CONCAT31(local_8._1_3_,1);
                    FString::~FString(local_2c);
                    pFStack_50 = (FString *)0x100e803e;
                    iVar1 = FString::operator==((FString *)(param_1 + 0x31),(ushort *)L"undefined");
                    if (iVar1 != 0) {
                      FString::Empty((FString *)(param_1 + 0x31));
                    }
                    pFStack_50 = (FString *)0x100e805c;
                    FString::FString(local_2c,(ushort *)L"strIncreaseBtnDownTexture");
                    local_8._0_1_ = 0x18;
                    pFStack_50 = local_38;
                    uStack_54 = 0x100e806f;
                    pFVar2 = (FString *)FUN_100cd860();
                    local_8._0_1_ = 0x19;
                    pFStack_50 = (FString *)0x100e8080;
                    FString::operator=((FString *)(param_1 + 0x34),pFVar2);
                    local_8._0_1_ = 0x18;
                    FString::~FString(local_38);
                    local_8 = CONCAT31(local_8._1_3_,1);
                    FString::~FString(local_2c);
                    pFStack_50 = (FString *)0x100e80aa;
                    iVar1 = FString::operator==((FString *)(param_1 + 0x34),(ushort *)L"undefined");
                    if (iVar1 != 0) {
                      FString::Empty((FString *)(param_1 + 0x34));
                    }
                    pFStack_50 = (FString *)0x100e80c8;
                    FString::FString(local_2c,(ushort *)L"strTickTexture");
                    local_8._0_1_ = 0x1a;
                    pFStack_50 = local_38;
                    uStack_54 = 0x100e80db;
                    pFVar2 = (FString *)FUN_100cd860();
                    local_8._0_1_ = 0x1b;
                    this = (FString *)(param_1 + 0x3d);
                    pFStack_50 = (FString *)0x100e80ee;
                    FString::operator=(this,pFVar2);
                    local_8._0_1_ = 0x1a;
                    FString::~FString(local_38);
                    local_8 = CONCAT31(local_8._1_3_,1);
                    FString::~FString(local_2c);
                    pFStack_50 = (FString *)0x100e8114;
                    iVar1 = FString::operator==(this,(ushort *)L"undefined");
                    if (iVar1 != 0) {
                      FString::Empty(this);
                    }
                    local_8 = 0xffffffff;
                    FString::~FString((FString *)&stack0x00000008);
                    ExceptionList = local_10;
                    return 1;
                  }
                  pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
                  FString::operator*(pFVar2);
                  pFStack_50 = (FString *)0x10266498;
                }
                else {
                  pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
                  FString::operator*(pFVar2);
                  pFStack_50 = (FString *)0x10266548;
                }
              }
              else {
                pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
                FString::operator*(pFVar2);
                pFStack_50 = (FString *)0x10266600;
              }
            }
            else {
              pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
              FString::operator*(pFVar2);
              pFStack_50 = (FString *)0x102666a8;
            }
          }
        }
      }
    }
  }
  uStack_54 = 0x100e7ac0;
  uStack_54 = FUN_10005c30();
  FUN_100d01f0();
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 0;
}


// ==== 100e78c0 FUN_100e78c0 depth=0 from=raiz callees=CORE.DLL::operator<<@EXTERNAL:00000110 FUN_100ef8c0@100ef8c0 FUN_100052e0@100052e0
// strings: 

void __thiscall FUN_100e78c0(int param_1,FArchive *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fc840;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef8c0(param_2);
  FUN_100052e0(param_2,param_1 + 0x90);
  FUN_100052e0(param_2,param_1 + 0x94);
  FUN_100052e0(param_2,param_1 + 0x98);
  FUN_100052e0(param_2,param_1 + 0x9c);
  operator<<(param_2,(FString *)(param_1 + 0xdc));
  operator<<(param_2,(FString *)(param_1 + 0xe8));
  operator<<(param_2,(FString *)(param_1 + 0x100));
  operator<<(param_2,(FString *)(param_1 + 0x10c));
  FUN_100052e0(param_2,param_1 + 0xa0);
  FUN_100052e0(param_2,param_1 + 0xa4);
  FUN_100052e0(param_2,param_1 + 0xa8);
  operator<<(param_2,(FString *)(param_1 + 0xac));
  operator<<(param_2,(FString *)(param_1 + 0xb8));
  operator<<(param_2,(FString *)(param_1 + 0xc4));
  operator<<(param_2,(FString *)(param_1 + 0xd0));
  operator<<(param_2,(FString *)(param_1 + 0xf4));
  ExceptionList = local_10;
  return;
}


