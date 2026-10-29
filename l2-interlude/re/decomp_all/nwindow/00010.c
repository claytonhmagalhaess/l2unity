// ==== 101214f2 Catch@101214f2

void Catch_101214f2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_CLAN::execGetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10121510 UUIDATA_CLAN::execGetAllianceName

/* public: void __thiscall UUIDATA_CLAN::execGetAllianceName(struct FFrame &,void * const) */

void __thiscall UUIDATA_CLAN::execGetAllianceName(UUIDATA_CLAN *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x121510  1159  ?execGetAllianceName@UUIDATA_CLAN@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205c09;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = FUN_10145a60(local_18);
  if (iVar2 != 0) {
    FString::operator=(local_2c,(ushort *)(iVar2 + 0x9c));
  }
  FString::operator=(param_2,local_2c);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 101215f0 Catch@101215f0

void Catch_101215f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10121604 Catch@10121604

void Catch_10121604(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_CLAN::execGetAllianceName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10121630 UUIDATA_CLAN::execGetCrestTexture

/* public: void __thiscall UUIDATA_CLAN::execGetCrestTexture(struct FFrame &,void * const) */

void __thiscall UUIDATA_CLAN::execGetCrestTexture(UUIDATA_CLAN *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  FFrame **ppFVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x121630  1182  ?execGetCrestTexture@UUIDATA_CLAN@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205c30;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    ppFVar3 = &param_1;
  }
  else {
    ppFVar3 = *(FFrame ***)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  pFVar2 = (FFrame *)FUN_10145a90(local_18);
  if (pFVar2 == (FFrame *)0x0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    *ppFVar3 = pFVar2;
    *(undefined4 *)param_2 = 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012173d Catch@1012173d

void Catch_1012173d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10121751 Catch@10121751

void Catch_10121751(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_CLAN::execGetCrestTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10121770 UUIDATA_CLAN::execGetAllianceCrestTexture

/* public: void __thiscall UUIDATA_CLAN::execGetAllianceCrestTexture(struct FFrame &,void * const)
    */

void __thiscall
UUIDATA_CLAN::execGetAllianceCrestTexture(UUIDATA_CLAN *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  FFrame **ppFVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x121770  1158
                       ?execGetAllianceCrestTexture@UUIDATA_CLAN@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205c50;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    ppFVar3 = &param_1;
  }
  else {
    ppFVar3 = *(FFrame ***)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  pFVar2 = (FFrame *)FUN_10145aa0(local_18);
  if (pFVar2 == (FFrame *)0x0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    *ppFVar3 = pFVar2;
    *(undefined4 *)param_2 = 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012187d Catch@1012187d

void Catch_1012187d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10121891 Catch@10121891

void Catch_10121891(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_CLAN::execGetAllianceCrestTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101218b0 UUIDATA_CLAN::execGetNameValue

/* public: void __thiscall UUIDATA_CLAN::execGetNameValue(struct FFrame &,void * const) */

void __thiscall UUIDATA_CLAN::execGetNameValue(UUIDATA_CLAN *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  void *pvVar3;
  int iVar4;
  FFrame **ppFVar5;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1218b0  1267  ?execGetNameValue@UUIDATA_CLAN@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205c70;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    ppFVar5 = &param_1;
  }
  else {
    ppFVar5 = *(FFrame ***)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  pvVar3 = param_2;
  *(undefined4 *)param_2 = 0;
  iVar4 = FUN_10145a60(local_18);
  if (iVar4 != 0) {
    *ppFVar5 = *(FFrame **)(iVar4 + 0x74);
    *(undefined4 *)pvVar3 = 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101219bb Catch@101219bb

void Catch_101219bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101219cf Catch@101219cf

void Catch_101219cf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_CLAN::execGetNameValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101219f0 FUN_101219f0

UObject * FUN_101219f0(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UTexture::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10121a20 UUIDATA_CLAN::execGetEmblemTexture

/* public: void __thiscall UUIDATA_CLAN::execGetEmblemTexture(struct FFrame &,void * const) */

void __thiscall UUIDATA_CLAN::execGetEmblemTexture(UUIDATA_CLAN *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  FString *this_00;
  ushort *puVar5;
  UClass *pUVar6;
  FFrame *pFVar7;
  FFrame **ppFVar8;
  UObject *pUVar9;
  ushort *puVar10;
  ulong uVar11;
  UPackageMap *pUVar12;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar7 = param_1;
                    /* 0x121a20  1193  ?execGetEmblemTexture@UUIDATA_CLAN@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205cab;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar7 + 0xc);
  *(byte **)(pFVar7 + 0xc) = *(byte **)(pFVar7 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar7,&param_1);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    ppFVar8 = &param_1;
  }
  else {
    ppFVar8 = *(FFrame ***)GPropAddr_exref;
  }
  *(int *)(pFVar7 + 0xc) = *(int *)(pFVar7 + 0xc) + 1;
  if (**(char **)(pFVar7 + 0xc) == 'B') {
    *(char **)(pFVar7 + 0xc) = *(char **)(pFVar7 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar7,0);
  }
  pvVar2 = param_2;
  *(undefined4 *)param_2 = 0;
  iVar3 = FUN_10145a60(local_18);
  if (iVar3 == 0) {
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(iVar3 + 0xdc) < 1) {
    ExceptionList = local_10;
    return;
  }
  uVar4 = FUN_101458c0(*(undefined4 *)(iVar3 + 0xdc));
  FString::Printf((ushort *)local_2c,L"crest_%d_%d_l",uVar4);
  local_8._0_1_ = 1;
  this_00 = (FString *)FString::FString(local_44,(ushort *)L"crest.");
  local_8._0_1_ = 2;
  FString::operator+(this_00,local_38);
  local_8 = CONCAT31(local_8._1_3_,4);
  FString::~FString(local_44);
  iVar3 = 0;
  puVar5 = FString::operator*(local_2c);
  pUVar9 = (UObject *)0xffffffff;
  pUVar6 = UTexture::StaticClass();
  pUVar9 = UObject::StaticFindObject(pUVar6,pUVar9,puVar5,iVar3);
  pFVar7 = (FFrame *)FUN_101219f0(pUVar9);
  if (pFVar7 == (FFrame *)0x0) {
    pUVar12 = (UPackageMap *)0x0;
    uVar11 = 0x2002;
    puVar10 = (ushort *)0x0;
    puVar5 = FString::operator*(local_38);
    pUVar9 = (UObject *)0x0;
    pUVar6 = UTexture::StaticClass();
    pUVar9 = UObject::StaticLoadObject(pUVar6,pUVar9,puVar5,puVar10,uVar11,pUVar12);
    pFVar7 = (FFrame *)FUN_101219f0(pUVar9);
    if (pFVar7 == (FFrame *)0x0) goto LAB_10121bc8;
  }
  *ppFVar8 = pFVar7;
  *(undefined4 *)pvVar2 = 1;
LAB_10121bc8:
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10121bfc Catch@10121bfc

void Catch_10121bfc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10121c10 Catch@10121c10

void Catch_10121c10(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_CLAN::execGetEmblemTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10121c30 UUIDATA_GAMETIP::execGetDataCount

/* public: void __thiscall UUIDATA_GAMETIP::execGetDataCount(struct FFrame &,void * const) */

void __thiscall
UUIDATA_GAMETIP::execGetDataCount(UUIDATA_GAMETIP *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x121c30  1188  ?execGetDataCount@UUIDATA_GAMETIP@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205cd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FL2GameData::GetGameTipDataCount((FL2GameData *)GL2GameData_exref);
  *(int *)param_2 = iVar1;
  ExceptionList = local_10;
  return;
}


// ==== 10121cb6 Catch@10121cb6

void Catch_10121cb6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10121cca Catch@10121cca

void Catch_10121cca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_GAMETIP::execGetDataCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10121cf0 UUIDATA_GAMETIP::execGetDataByIndex

/* public: void __thiscall UUIDATA_GAMETIP::execGetDataByIndex(struct FFrame &,void * const) */

void __thiscall
UUIDATA_GAMETIP::execGetDataByIndex(UUIDATA_GAMETIP *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2GameTipData *pFVar2;
  FGameTipData *pFVar3;
  uint uStack_4c;
  FGameTipData local_3c [36];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x121cf0  1187  ?execGetDataByIndex@UUIDATA_GAMETIP@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205cf8;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FGameTipData::FGameTipData(local_3c);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_3c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar3 = local_3c;
  }
  else {
    pFVar3 = *(FGameTipData **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetGameTipData((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar2 == (FL2GameTipData *)0x0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    *(undefined4 *)pFVar3 = *(undefined4 *)pFVar2;
    *(undefined4 *)(pFVar3 + 4) = *(undefined4 *)(pFVar2 + 4);
    *(undefined4 *)(pFVar3 + 8) = *(undefined4 *)(pFVar2 + 8);
    *(uint *)(pFVar3 + 0xc) =
         *(uint *)(pFVar3 + 0xc) ^ (*(uint *)(pFVar2 + 0xc) ^ *(uint *)(pFVar3 + 0xc)) & 1;
    FStringNoInit::operator=((FStringNoInit *)(pFVar3 + 0x10),(FString *)(pFVar2 + 0x10));
    *(undefined4 *)param_2 = 1;
  }
  local_8 = local_8 & 0xffffff00;
  FGameTipData::~FGameTipData(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 10121e39 Catch@10121e39

void Catch_10121e39(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10121e4d Catch@10121e4d

void Catch_10121e4d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_GAMETIP::execGetDataByIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10121e70 UUIDATA_HENNA::execGetItemName

/* public: void __thiscall UUIDATA_HENNA::execGetItemName(struct FFrame &,void * const) */

void __thiscall UUIDATA_HENNA::execGetItemName(UUIDATA_HENNA *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FString *this_00;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x121e70  1238  ?execGetItemName@UUIDATA_HENNA@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205d29;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_2c;
  }
  else {
    this_00 = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10187a60(&local_18);
  if (iVar2 == 0) {
    FString::operator=(this_00,(ushort *)&DAT_1022f9f8);
    *(undefined4 *)param_2 = 0;
  }
  FString::operator=(this_00,(FString *)(iVar2 + 8));
  *(undefined4 *)param_2 = 1;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10121fb0 Catch@10121fb0

void Catch_10121fb0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10121fc4 Catch@10121fc4

void Catch_10121fc4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_HENNA::execGetItemName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10121ff0 UUIDATA_HENNA::execGetDescription

/* public: void __thiscall UUIDATA_HENNA::execGetDescription(struct FFrame &,void * const) */

void __thiscall UUIDATA_HENNA::execGetDescription(UUIDATA_HENNA *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FString *this_00;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x121ff0  1191  ?execGetDescription@UUIDATA_HENNA@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205d59;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_2c;
  }
  else {
    this_00 = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10187a60(&local_18);
  if (iVar2 == 0) {
    FString::operator=(this_00,(ushort *)&DAT_1022f9f8);
    *(undefined4 *)param_2 = 0;
  }
  FString::operator=(this_00,(FString *)(iVar2 + 0x20));
  *(undefined4 *)param_2 = 1;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10122130 Catch@10122130

void Catch_10122130(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10122144 Catch@10122144

void Catch_10122144(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_HENNA::execGetDescription");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10122170 UUIDATA_HENNA::execGetIconTex

/* public: void __thiscall UUIDATA_HENNA::execGetIconTex(struct FFrame &,void * const) */

void __thiscall UUIDATA_HENNA::execGetIconTex(UUIDATA_HENNA *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FString *this_00;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x122170  1221  ?execGetIconTex@UUIDATA_HENNA@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205d89;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_2c;
  }
  else {
    this_00 = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10187a60(&local_18);
  if (iVar2 == 0) {
    FString::operator=(this_00,(ushort *)&DAT_1022f9f8);
    *(undefined4 *)param_2 = 0;
  }
  FString::operator=(this_00,(FString *)(iVar2 + 0x14));
  *(undefined4 *)param_2 = 1;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 101222b0 Catch@101222b0

void Catch_101222b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101222c4 Catch@101222c4

void Catch_101222c4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_HENNA::execGetIconTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101222f0 UUIDATA_HUNTINGZONE::execGetHuntingDescription

/* public: void __thiscall UUIDATA_HUNTINGZONE::execGetHuntingDescription(struct FFrame &,void *
   const) */

void __thiscall
UUIDATA_HUNTINGZONE::execGetHuntingDescription
          (UUIDATA_HUNTINGZONE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2HuntingZoneData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1222f0  1211
                       ?execGetHuntingDescription@UUIDATA_HUNTINGZONE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205db0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetHuntingZoneData((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar2 != (FL2HuntingZoneData *)0x0) {
    FString::operator=(param_2,(FString *)(pFVar2 + 0x1c));
  }
  ExceptionList = local_10;
  return;
}


// ==== 101223ab Catch@101223ab

void Catch_101223ab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101223bf Catch@101223bf

void Catch_101223bf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_HUNTINGZONE::execGetHuntingDescription");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101223e0 UUIDATA_HUNTINGZONE::execGetHuntingZone

/* public: void __thiscall UUIDATA_HUNTINGZONE::execGetHuntingZone(struct FFrame &,void * const) */

void __thiscall
UUIDATA_HUNTINGZONE::execGetHuntingZone(UUIDATA_HUNTINGZONE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2HuntingZoneData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1223e0  1212  ?execGetHuntingZone@UUIDATA_HUNTINGZONE@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10205dd0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetHuntingZoneData((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar2 != (FL2HuntingZoneData *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)(pFVar2 + 0x34);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10122496 Catch@10122496

void Catch_10122496(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101224aa Catch@101224aa

void Catch_101224aa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_HUNTINGZONE::execGetHuntingZone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101224d0 UUIDATA_HUNTINGZONE::execGetHuntingZoneLoc

/* public: void __thiscall UUIDATA_HUNTINGZONE::execGetHuntingZoneLoc(struct FFrame &,void * const)
    */

void __thiscall
UUIDATA_HUNTINGZONE::execGetHuntingZoneLoc(UUIDATA_HUNTINGZONE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2HuntingZoneData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1224d0  1213
                       ?execGetHuntingZoneLoc@UUIDATA_HUNTINGZONE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205df0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetHuntingZoneData((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar2 != (FL2HuntingZoneData *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)(pFVar2 + 0x10);
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(pFVar2 + 0x14);
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)(pFVar2 + 0x18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10122592 Catch@10122592

void Catch_10122592(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101225a6 Catch@101225a6

void Catch_101225a6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_HUNTINGZONE::execGetHuntingZoneLoc");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101225d0 UUIDATA_HUNTINGZONE::execGetMaxLevel

/* public: void __thiscall UUIDATA_HUNTINGZONE::execGetMaxLevel(struct FFrame &,void * const) */

void __thiscall
UUIDATA_HUNTINGZONE::execGetMaxLevel(UUIDATA_HUNTINGZONE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2HuntingZoneData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1225d0  1255  ?execGetMaxLevel@UUIDATA_HUNTINGZONE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205e10;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetHuntingZoneData((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar2 != (FL2HuntingZoneData *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)(pFVar2 + 0xc);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10122686 Catch@10122686

void Catch_10122686(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012269a Catch@1012269a

void Catch_1012269a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_HUNTINGZONE::execGetMaxLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101226c0 UUIDATA_HUNTINGZONE::execGetMinLevel

/* public: void __thiscall UUIDATA_HUNTINGZONE::execGetMinLevel(struct FFrame &,void * const) */

void __thiscall
UUIDATA_HUNTINGZONE::execGetMinLevel(UUIDATA_HUNTINGZONE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2HuntingZoneData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1226c0  1258  ?execGetMinLevel@UUIDATA_HUNTINGZONE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205e30;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetHuntingZoneData((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar2 != (FL2HuntingZoneData *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)(pFVar2 + 8);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10122776 Catch@10122776

void Catch_10122776(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012278a Catch@1012278a

void Catch_1012278a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_HUNTINGZONE::execGetMinLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101227b0 UUIDATA_HUNTINGZONE::execGetHuntingZoneType

/* public: void __thiscall UUIDATA_HUNTINGZONE::execGetHuntingZoneType(struct FFrame &,void * const)
    */

void __thiscall
UUIDATA_HUNTINGZONE::execGetHuntingZoneType(UUIDATA_HUNTINGZONE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2HuntingZoneData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1227b0  1215
                       ?execGetHuntingZoneType@UUIDATA_HUNTINGZONE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205e50;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetHuntingZoneData((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar2 != (FL2HuntingZoneData *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)(pFVar2 + 4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10122866 Catch@10122866

void Catch_10122866(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012287a Catch@1012287a

void Catch_1012287a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_HUNTINGZONE::execGetHuntingZoneType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101228a0 UUIDATA_HUNTINGZONE::execGetHuntingZoneName

/* public: void __thiscall UUIDATA_HUNTINGZONE::execGetHuntingZoneName(struct FFrame &,void * const)
    */

void __thiscall
UUIDATA_HUNTINGZONE::execGetHuntingZoneName(UUIDATA_HUNTINGZONE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2HuntingZoneData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1228a0  1214
                       ?execGetHuntingZoneName@UUIDATA_HUNTINGZONE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205e70;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetHuntingZoneData((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar2 != (FL2HuntingZoneData *)0x0) {
    FString::operator=(param_2,(FString *)(pFVar2 + 0x28));
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012295b Catch@1012295b

void Catch_1012295b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012296f Catch@1012296f

void Catch_1012296f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_HUNTINGZONE::execGetHuntingZoneName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10122990 UUIDATA_HUNTINGZONE::execIsValidData

/* public: void __thiscall UUIDATA_HUNTINGZONE::execIsValidData(struct FFrame &,void * const) */

void __thiscall
UUIDATA_HUNTINGZONE::execIsValidData(UUIDATA_HUNTINGZONE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2HuntingZoneData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x122990  1508  ?execIsValidData@UUIDATA_HUNTINGZONE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205e90;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetHuntingZoneData((FL2GameData *)GL2GameData_exref,local_18);
  if ((pFVar2 == (FL2HuntingZoneData *)0x0) || (*(int *)pFVar2 < 1)) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    *(undefined4 *)param_2 = 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10122a57 Catch@10122a57

void Catch_10122a57(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10122a6b Catch@10122a6b

void Catch_10122a6b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_HUNTINGZONE::execIsValidData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10122a90 UUIDATA_ITEM::execGetFirstID

/* public: void __thiscall UUIDATA_ITEM::execGetFirstID(struct FFrame &,void * const) */

void __thiscall UUIDATA_ITEM::execGetFirstID(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x122a90  1201  ?execGetFirstID@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205eb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = FUN_101af840();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 10122b1a Catch@10122b1a

void Catch_10122b1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10122b2e Catch@10122b2e

void Catch_10122b2e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetFirstID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10122b50 UUIDATA_ITEM::execGetNextID

/* public: void __thiscall UUIDATA_ITEM::execGetNextID(struct FFrame &,void * const) */

void __thiscall UUIDATA_ITEM::execGetNextID(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x122b50  1268  ?execGetNextID@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205ed0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = FUN_101af950();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 10122bda Catch@10122bda

void Catch_10122bda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10122bee Catch@10122bee

void Catch_10122bee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetNextID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10122c10 UUIDATA_ITEM::execGetSetItemEnchantValue

/* public: void __thiscall UUIDATA_ITEM::execGetSetItemEnchantValue(struct FFrame &,void * const) */

void __thiscall
UUIDATA_ITEM::execGetSetItemEnchantValue(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x122c10  1388
                       ?execGetSetItemEnchantValue@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205ef0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FL2GameData::GetItemSetEnchantCount((FL2GameData *)GL2GameData_exref,local_18);
  *(int *)param_2 = iVar2;
  ExceptionList = local_10;
  return;
}


// ==== 10122cbf Catch@10122cbf

void Catch_10122cbf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10122cd3 Catch@10122cd3

void Catch_10122cd3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetSetItemEnchantValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10122cf0 UUIDATA_ITEM::execGetSetItemEffectDescription

/* public: void __thiscall UUIDATA_ITEM::execGetSetItemEffectDescription(struct FFrame &,void *
   const) */

void __thiscall
UUIDATA_ITEM::execGetSetItemEffectDescription(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  ushort *puVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x122cf0  1386
                       ?execGetSetItemEffectDescription@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205f10;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  if ((0 < local_18) && (param_1 < (FFrame *)0x3)) {
    puVar3 = FL2GameData::GetItemSetEffect((FL2GameData *)GL2GameData_exref,local_18,(int)param_1);
    FString::operator=(param_2,puVar3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10122dcc Catch@10122dcc

void Catch_10122dcc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10122de0 Catch@10122de0

void Catch_10122de0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetSetItemEffectDescription");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10122e00 UUIDATA_ITEM::execGetSetItemEnchantEffectDescription

/* public: void __thiscall UUIDATA_ITEM::execGetSetItemEnchantEffectDescription(struct FFrame &,void
   * const) */

void __thiscall
UUIDATA_ITEM::execGetSetItemEnchantEffectDescription
          (UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x122e00  1387
                       ?execGetSetItemEnchantEffectDescription@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205f30;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FL2GameData::GetItemSetEnchantEffect((FL2GameData *)GL2GameData_exref,local_18);
  FString::operator=(param_2,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 10122eb4 Catch@10122eb4

void Catch_10122eb4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10122ec8 Catch@10122ec8

void Catch_10122ec8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetSetItemEnchantEffectDescription");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10122ef0 UUIDATA_ITEM::execGetDataCount

/* public: void __thiscall UUIDATA_ITEM::execGetDataCount(struct FFrame &,void * const) */

void __thiscall UUIDATA_ITEM::execGetDataCount(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x122ef0  1189  ?execGetDataCount@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205f50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = *(undefined4 *)(*(int *)(GL2GameData_exref + 0x1834) + 4);
  ExceptionList = local_10;
  return;
}


// ==== 10122f78 Catch@10122f78

void Catch_10122f78(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10122f8c Catch@10122f8c

void Catch_10122f8c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetDataCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10122fb0 FUN_10122fb0

void FUN_10122fb0(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10205f7b;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_103554c4 ^ (uint)auStack_10);
  ExceptionList = &local_c;
  uVar3 = 4;
  iVar2 = (**(code **)**(undefined4 **)GMalloc_exref)(4,&DAT_1022f8a0);
  local_c = (void *)0x0;
  if (iVar2 != 0) {
    FUN_101b3770(uVar3,iVar2);
  }
  ExceptionList = pvVar1;
  return;
}


// ==== 10123020 UUIDATA_ITEM::execGetItemTextureName

/* public: void __thiscall UUIDATA_ITEM::execGetItemTextureName(struct FFrame &,void * const) */

void __thiscall
UUIDATA_ITEM::execGetItemTextureName(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x123020  1242  ?execGetItemTextureName@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205fa0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10187a60(&local_18);
  if (iVar2 == 0) {
    puVar3 = (ushort *)&DAT_1022f9f8;
  }
  else {
    puVar3 = L2FName::operator*((L2FName *)(iVar2 + 0x3c));
  }
  FString::operator=(param_2,puVar3);
  ExceptionList = local_10;
  return;
}


// ==== 101230ed Catch@101230ed

void Catch_101230ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10123101 Catch@10123101

void Catch_10123101(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetItemTextureName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10123120 UUIDATA_ITEM::execGetItemName

/* public: void __thiscall UUIDATA_ITEM::execGetItemName(struct FFrame &,void * const) */

void __thiscall UUIDATA_ITEM::execGetItemName(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x123120  1239  ?execGetItemName@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205fc0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10187a60(&local_18);
  if (iVar2 == 0) {
    puVar3 = (ushort *)&DAT_1022f9f8;
  }
  else {
    puVar3 = L2FName::operator*((L2FName *)(iVar2 + 0x50));
  }
  FString::operator=(param_2,puVar3);
  ExceptionList = local_10;
  return;
}


// ==== 101231ed Catch@101231ed

void Catch_101231ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10123201 Catch@10123201

void Catch_10123201(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetItemName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10123220 UUIDATA_ITEM::execGetItemAdditionalName

/* public: void __thiscall UUIDATA_ITEM::execGetItemAdditionalName(struct FFrame &,void * const) */

void __thiscall
UUIDATA_ITEM::execGetItemAdditionalName(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x123220  1231  ?execGetItemAdditionalName@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10205fe0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10187a60(&local_18);
  if (iVar2 == 0) {
    puVar3 = (ushort *)&DAT_1022f9f8;
  }
  else {
    puVar3 = L2FName::operator*((L2FName *)(iVar2 + 0x54));
  }
  FString::operator=(param_2,puVar3);
  ExceptionList = local_10;
  return;
}


// ==== 101232ed Catch@101232ed

void Catch_101232ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10123301 Catch@10123301

void Catch_10123301(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetItemAdditionalName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10123320 UUIDATA_ITEM::execGetItemClassID

/* public: void __thiscall UUIDATA_ITEM::execGetItemClassID(struct FFrame &,void * const) */

void __thiscall UUIDATA_ITEM::execGetItemClassID(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x123320  1232  ?execGetItemClassID@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206000;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10187a60(&local_18);
  if (iVar2 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0xc);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101233e6 Catch@101233e6

void Catch_101233e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101233fa Catch@101233fa

void Catch_101233fa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetItemClassID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10123420 UUIDATA_ITEM::execGetItemDescription

/* public: void __thiscall UUIDATA_ITEM::execGetItemDescription(struct FFrame &,void * const) */

void __thiscall
UUIDATA_ITEM::execGetItemDescription(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x123420  1235  ?execGetItemDescription@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206020;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10187a60(&local_18);
  if (iVar2 == 0) {
    puVar3 = (ushort *)&DAT_1022f9f8;
  }
  else {
    puVar3 = FString::operator*((FString *)(iVar2 + 0x58));
  }
  FString::operator=(param_2,puVar3);
  ExceptionList = local_10;
  return;
}


// ==== 101234ed Catch@101234ed

void Catch_101234ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10123501 Catch@10123501

void Catch_10123501(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetItemDescription");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10123520 UUIDATA_ITEM::execGetItemWeight

/* public: void __thiscall UUIDATA_ITEM::execGetItemWeight(struct FFrame &,void * const) */

void __thiscall UUIDATA_ITEM::execGetItemWeight(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x123520  1243  ?execGetItemWeight@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206040;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10187a60(&local_18);
  if (iVar2 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0xc4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101235e9 Catch@101235e9

void Catch_101235e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101235fd Catch@101235fd

void Catch_101235fd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetItemWeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10123620 UUIDATA_ITEM::execGetItemDataType

/* public: void __thiscall UUIDATA_ITEM::execGetItemDataType(struct FFrame &,void * const) */

void __thiscall UUIDATA_ITEM::execGetItemDataType(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x123620  1234  ?execGetItemDataType@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206060;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10187a60(&local_18);
  if (iVar2 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101236e6 Catch@101236e6

void Catch_101236e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101236fa Catch@101236fa

void Catch_101236fa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetItemDataType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10123720 UUIDATA_ITEM::execGetItemCrystalType

/* public: void __thiscall UUIDATA_ITEM::execGetItemCrystalType(struct FFrame &,void * const) */

void __thiscall
UUIDATA_ITEM::execGetItemCrystalType(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x123720  1233  ?execGetItemCrystalType@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206080;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 0;
  iVar3 = FUN_10187a60(&local_18);
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 4);
    if (iVar2 == 0) {
      *(undefined4 *)param_2 = *(undefined4 *)(iVar3 + 0x134);
    }
    else if (iVar2 == 1) {
      *(undefined4 *)param_2 = *(undefined4 *)(iVar3 + 0x5e8);
    }
    else if (iVar2 == 2) {
      *(undefined4 *)param_2 = *(undefined4 *)(iVar3 + 0x104);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10123809 Catch@10123809

void Catch_10123809(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012381d Catch@1012381d

void Catch_1012381d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetItemCrystalType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10123840 UUIDATA_ITEM::execIsCrystallizable

/* public: void __thiscall UUIDATA_ITEM::execIsCrystallizable(struct FFrame &,void * const) */

void __thiscall UUIDATA_ITEM::execIsCrystallizable(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x123840  1474  ?execIsCrystallizable@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102060a0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 0;
  iVar2 = FUN_10187a60(&local_18);
  if (iVar2 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0xcc);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10123904 Catch@10123904

void Catch_10123904(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10123918 Catch@10123918

void Catch_10123918(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execIsCrystallizable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10123940 UUIDATA_ITEM::execGetItemInfo

/* public: void __thiscall UUIDATA_ITEM::execGetItemInfo(struct FFrame &,void * const) */

void __thiscall UUIDATA_ITEM::execGetItemInfo(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  FItemInfo *this_00;
  uint uStack_168;
  FItemInfo local_158 [320];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x123940  1237  ?execGetItemInfo@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102060cb;
  local_10 = ExceptionList;
  uStack_168 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_168;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FItemInfo::FItemInfo(local_158);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_158);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_158;
  }
  else {
    this_00 = *(FItemInfo **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 0;
  iVar3 = FUN_10187a60(&local_18);
  if ((-1 < local_18) && (iVar3 != 0)) {
    iVar2 = *(int *)(iVar3 + 4);
    puVar4 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,local_18);
    FStringNoInit::operator=((FStringNoInit *)this_00,puVar4);
    puVar4 = L2FName::operator*((L2FName *)(iVar3 + 0x54));
    FStringNoInit::operator=((FStringNoInit *)(this_00 + 0xc),puVar4);
    puVar4 = L2FName::operator*((L2FName *)(iVar3 + 0x3c));
    FStringNoInit::operator=((FStringNoInit *)(this_00 + 0x18),puVar4);
    puVar4 = FL2GameData::GetItemDescription((FL2GameData *)GL2GameData_exref,local_18);
    FStringNoInit::operator=((FStringNoInit *)(this_00 + 0x60),puVar4);
    *(int *)(this_00 + 0x94) = local_18;
    *(undefined4 *)(this_00 + 0x88) = 0;
    *(undefined4 *)(this_00 + 0x98) = 0;
    *(undefined4 *)(this_00 + 0xa4) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)(this_00 + 0xa8) = *(undefined4 *)(iVar3 + 0xc4);
      *(undefined4 *)(this_00 + 0xac) = *(undefined4 *)(iVar3 + 200);
      *(undefined4 *)(this_00 + 0xb0) = *(undefined4 *)(iVar3 + 0x130);
      *(undefined4 *)(this_00 + 0xb4) = *(undefined4 *)(iVar3 + 0x128);
      *(undefined4 *)(this_00 + 0xb8) = *(undefined4 *)(iVar3 + 300);
      *(undefined4 *)(this_00 + 0xc4) = *(undefined4 *)(iVar3 + 0x144);
      *(undefined4 *)(this_00 + 200) = *(undefined4 *)(iVar3 + 0x148);
      *(undefined4 *)(this_00 + 0xcc) = *(undefined4 *)(iVar3 + 0xc0);
      *(undefined4 *)(this_00 + 0x114) = 0xffffffff;
      *(undefined4 *)(this_00 + 0xd0) = *(undefined4 *)(iVar3 + 0x134);
      *(undefined4 *)(this_00 + 0xd4) = *(undefined4 *)(iVar3 + 0x124);
      *(undefined4 *)(this_00 + 0xd8) = *(undefined4 *)(iVar3 + 0x138);
      *(undefined4 *)(this_00 + 0xdc) = *(undefined4 *)(iVar3 + 0x13c);
      *(undefined4 *)(this_00 + 0xe0) = *(undefined4 *)(iVar3 + 0x14c);
      *(undefined4 *)(this_00 + 0xe4) = *(undefined4 *)(iVar3 + 0x150);
      *(undefined4 *)(this_00 + 0xec) = *(undefined4 *)(iVar3 + 0x140);
      *(undefined4 *)(this_00 + 0xfc) = *(undefined4 *)(iVar3 + 0x154);
      *(undefined4 *)(this_00 + 0x100) = *(undefined4 *)(iVar3 + 0x158);
    }
    else if (iVar2 == 1) {
      *(undefined4 *)(this_00 + 0xa8) = *(undefined4 *)(iVar3 + 0xc4);
      *(undefined4 *)(this_00 + 0xac) = *(undefined4 *)(iVar3 + 200);
      *(undefined4 *)(this_00 + 0xcc) = *(undefined4 *)(iVar3 + 0xc0);
      *(undefined4 *)(this_00 + 0xd0) = *(undefined4 *)(iVar3 + 0x5e8);
      *(undefined4 *)(this_00 + 0xe8) = *(undefined4 *)(iVar3 + 0x5e4);
      *(undefined4 *)(this_00 + 0xec) = *(undefined4 *)(iVar3 + 0x5ec);
      *(undefined4 *)(this_00 + 0xbc) = *(undefined4 *)(iVar3 + 0x5f0);
      *(undefined4 *)(this_00 + 0xc0) = *(undefined4 *)(iVar3 + 0x5f4);
    }
    else if (iVar2 == 2) {
      *(undefined4 *)(this_00 + 0xa8) = *(undefined4 *)(iVar3 + 0xc4);
      *(undefined4 *)(this_00 + 0xac) = *(undefined4 *)(iVar3 + 200);
      *(undefined4 *)(this_00 + 0xcc) = *(undefined4 *)(iVar3 + 0xc0);
      *(undefined4 *)(this_00 + 0xd0) = *(undefined4 *)(iVar3 + 0x104);
      *(undefined4 *)(this_00 + 0x120) = *(undefined4 *)(iVar3 + 0xfc);
      *(undefined4 *)(this_00 + 0x8c) = *(undefined4 *)(iVar3 + 0x100);
    }
    *(undefined4 *)param_2 = 1;
  }
  local_8 = local_8 & 0xffffff00;
  FItemInfo::~FItemInfo(local_158);
  ExceptionList = local_10;
  return;
}


// ==== 10123c91 Catch@10123c91

void Catch_10123c91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10123ca5 Catch@10123ca5

void Catch_10123ca5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetItemInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10123cd0 FUN_10123cd0

int FUN_10123cd0(void)

{
  if (DAT_10392424 == 0) {
    FUN_10122fb0();
  }
  return DAT_10392424;
}


// ==== 10123cf0 UUIDATA_ITEM::execGetRefineryItemName

/* public: void __thiscall UUIDATA_ITEM::execGetRefineryItemName(struct FFrame &,void * const) */

void __thiscall
UUIDATA_ITEM::execGetRefineryItemName(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString *pFVar2;
  FString *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x123cf0  1353  ?execGetRefineryItemName@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10206102;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = local_30;
  pFVar3 = local_3c;
  uVar4 = local_1c;
  uVar5 = local_18;
  FUN_10123cd0(pFVar3,pFVar2,local_1c,local_18);
  pFVar2 = (FString *)FUN_101b3a80(pFVar3,pFVar2,uVar4,uVar5);
  local_8._0_1_ = 2;
  FString::operator=(param_2,pFVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_3c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10123e12 Catch@10123e12

void Catch_10123e12(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10123e26 Catch@10123e26

void Catch_10123e26(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetRefineryItemName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10123e50 UUIDATA_ITEM::execGetSetItemIDList

/* public: void __thiscall UUIDATA_ITEM::execGetSetItemIDList(struct FFrame &,void * const) */

void __thiscall UUIDATA_ITEM::execGetSetItemIDList(UUIDATA_ITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  ushort *puVar3;
  int iVar4;
  uint uStack_c58;
  FFrame local_c48 [3080];
  FString local_40 [12];
  int local_34;
  int local_30;
  int local_28;
  int local_24 [2];
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pFVar2 = param_1;
                    /* 0x123e50  1389  ?execGetSetItemIDList@UUIDATA_ITEM@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020614a;
  local_10 = ExceptionList;
  uStack_c58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_c58;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  _eh_vector_constructor_iterator_(local_c48,0xc,0x100,FUN_10038f80,FUN_10039be0);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_c48);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = local_c48;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  FArray::Empty((FArray *)param_1,4,0);
  if ((0 < local_18) && (local_1c < 3)) {
    puVar3 = FL2GameData::GetItemSetListID((FL2GameData *)GL2GameData_exref,local_18,local_1c);
    FString::FString(local_40,puVar3);
    local_8._0_1_ = 2;
    iVar4 = FString::Len(local_40);
    if (0 < iVar4) {
      FUN_10051aa0();
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_100520c0(0);
      FString::ParseIntoArray(local_40,(ushort *)&DAT_10246d48,(TArray<FString> *)&local_34);
      local_28 = 0;
      while (iVar4 = local_28, local_28 < local_30) {
        puVar3 = FString::operator*((FString *)(local_34 + local_28 * 0xc));
        local_24[0] = appAtoi(puVar3);
        FUN_100d9a30(local_24);
        local_28 = iVar4 + 1;
      }
      local_8._0_1_ = 2;
      FUN_10052740();
      local_8._0_1_ = 1;
      FString::~FString(local_40);
      local_8 = (uint)local_8._1_3_ << 8;
      _eh_vector_destructor_iterator_(local_c48,0xc,0x100,FUN_10039be0);
      ExceptionList = local_10;
      return;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_40);
  }
  local_8 = local_8 & 0xffffff00;
  _eh_vector_destructor_iterator_(local_c48,0xc,0x100,FUN_10039be0);
  ExceptionList = local_10;
  return;
}


// ==== 101240a1 Catch@101240a1

void Catch_101240a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101240b5 Catch@101240b5

void Catch_101240b5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_ITEM::execGetSetItemIDList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101240e0 UUIDATA_MACRO::execGetMacroCount

/* public: void __thiscall UUIDATA_MACRO::execGetMacroCount(struct FFrame &,void * const) */

void __thiscall UUIDATA_MACRO::execGetMacroCount(UUIDATA_MACRO *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1240e0  1247  ?execGetMacroCount@UUIDATA_MACRO@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = FUN_101acf70();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 1012416a Catch@1012416a

void Catch_1012416a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012417e Catch@1012417e

void Catch_1012417e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_MACRO::execGetMacroCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101241a0 UUIDATA_MACRO::execGetMacroInfo

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: void __thiscall UUIDATA_MACRO::execGetMacroInfo(struct FFrame &,void * const) */

void __thiscall UUIDATA_MACRO::execGetMacroInfo(UUIDATA_MACRO *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FMacroInfo *pFVar8;
  wchar_t *pwVar9;
  uint uStack_1904;
  FMacroInfo local_18f4 [204];
  undefined4 local_1828;
  undefined4 *local_1824;
  undefined4 local_1820;
  int local_181c;
  undefined1 *local_1818;
  void *local_1814;
  undefined1 *puStack_1810;
  uint local_180c;
  ushort local_1808 [3072];
  uint local_8;
  
                    /* 0x1241a0  1248  ?execGetMacroInfo@UUIDATA_MACRO@@QAEXAAUFFrame@@QAX@Z */
  puStack_1810 = &LAB_1020619b;
  local_1814 = ExceptionList;
  uStack_1904 = DAT_103554c4 ^ (uint)local_1808;
  local_1818 = (undefined1 *)&uStack_1904;
  ExceptionList = &local_1814;
  local_1824 = param_2;
  local_180c = 0;
  local_1820 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_8 = uStack_1904;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1820);
  FMacroInfo::FMacroInfo(local_18f4);
  local_180c = CONCAT31(local_180c._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_18f4);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar8 = local_18f4;
  }
  else {
    pFVar8 = *(FMacroInfo **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_101ade70(local_1820);
  uVar3 = 0;
  if (iVar2 != 0) {
    local_1828 = 1;
    uVar3 = FUN_101b3e00();
    *(undefined4 *)pFVar8 = uVar3;
    puVar4 = (ushort *)FUN_101b3e80();
    FStringNoInit::operator=((FStringNoInit *)(pFVar8 + 4),puVar4);
    puVar4 = (ushort *)FUN_101b3f10();
    FStringNoInit::operator=((FStringNoInit *)(pFVar8 + 0x10),puVar4);
    puVar4 = (ushort *)FUN_101b3fa0();
    FStringNoInit::operator=((FStringNoInit *)(pFVar8 + 0x1c),puVar4);
    puVar4 = (ushort *)FUN_101b4030();
    FStringNoInit::operator=((FStringNoInit *)(pFVar8 + 0x28),puVar4);
    for (local_181c = 0; uVar3 = local_1828, local_181c < 0xc; local_181c = local_181c + 1) {
      appMemset(local_1808,0,0x1800);
      iVar5 = local_181c * 0x70 + iVar2;
      iVar6 = *(int *)(iVar5 + 0x3c);
      if (iVar6 == 1) {
        uVar3 = FUN_10164900(*(undefined4 *)(iVar5 + 0x44),*(undefined4 *)(iVar5 + 0x4c));
        puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x736a8));
        pwVar9 = L"%s%s %s";
LAB_1012443a:
        appSprintf(local_1808,(ushort *)pwVar9,PTR_DAT_10350cec,puVar4,uVar3);
      }
      else if (iVar6 == 2) {
        uVar3 = FUN_1014e120(*(undefined4 *)(iVar5 + 0x44));
        appSprintf(local_1808,(ushort *)L"%s%s",PTR_DAT_10350cec,uVar3);
      }
      else if (iVar6 == 4) {
        iVar7 = *(int *)(iVar5 + 0x44) + 1;
        iVar6 = *(int *)(iVar5 + 0x48) + 1;
        puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x736cc));
        appSprintf(local_1808,(ushort *)L"%s%s %d %d",PTR_DAT_10350cec,puVar4,iVar6,iVar7);
      }
      else if (iVar6 == 3) {
        appSprintf(local_1808,(ushort *)&DAT_1022dde0,iVar5 + 0x68);
      }
      else if (iVar6 == 6) {
        uVar3 = *(undefined4 *)(iVar5 + 0x48);
        puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x73918));
        pwVar9 = L"%s%s %d";
        goto LAB_1012443a;
      }
      FStringNoInit::operator=((FStringNoInit *)(pFVar8 + (local_181c * 3 + 0xd) * 4),local_1808);
    }
  }
  *local_1824 = uVar3;
  local_180c = local_180c & 0xffffff00;
  FMacroInfo::~FMacroInfo(local_18f4);
  local_180c = 0xffffffff;
  ExceptionList = local_1814;
  __security_check_cookie(local_8 ^ (uint)local_1808);
  return;
}


// ==== 101244a1 Catch@101244a1

void Catch_101244a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 101244b5 Catch@101244b5

void Catch_101244b5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_MACRO::execGetMacroInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101244e0 UUIDATA_NPC::execGetFirstID

/* public: void __thiscall UUIDATA_NPC::execGetFirstID(struct FFrame &,void * const) */

void __thiscall UUIDATA_NPC::execGetFirstID(UUIDATA_NPC *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1244e0  1202  ?execGetFirstID@UUIDATA_NPC@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102061d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = FUN_101af4a0();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 1012456a Catch@1012456a

void Catch_1012456a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012457e Catch@1012457e

void Catch_1012457e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_NPC::execGetFirstID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101245a0 UUIDATA_NPC::execGetNextID

/* public: void __thiscall UUIDATA_NPC::execGetNextID(struct FFrame &,void * const) */

void __thiscall UUIDATA_NPC::execGetNextID(UUIDATA_NPC *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1245a0  1269  ?execGetNextID@UUIDATA_NPC@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102061f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = FUN_101af5b0();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 1012462a Catch@1012462a

void Catch_1012462a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012463e Catch@1012463e

void Catch_1012463e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_NPC::execGetNextID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10124660 UUIDATA_NPC::execGetNPCName

/* public: void __thiscall UUIDATA_NPC::execGetNPCName(struct FFrame &,void * const) */

void __thiscall UUIDATA_NPC::execGetNPCName(UUIDATA_NPC *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x124660  1262  ?execGetNPCName@UUIDATA_NPC@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206210;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FL2GameData::GetNpcName((FL2GameData *)GL2GameData_exref,local_18);
  FString::operator=(param_2,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 10124714 Catch@10124714

void Catch_10124714(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10124728 Catch@10124728

void Catch_10124728(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_NPC::execGetNPCName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10124750 UUIDATA_NPC::execIsValidData

/* public: void __thiscall UUIDATA_NPC::execIsValidData(struct FFrame &,void * const) */

void __thiscall UUIDATA_NPC::execIsValidData(UUIDATA_NPC *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x124750  1509  ?execIsValidData@UUIDATA_NPC@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206230;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10187a60(&local_18);
  *(uint *)param_2 = (uint)(iVar2 != 0);
  ExceptionList = local_10;
  return;
}


// ==== 1012480b Catch@1012480b

void Catch_1012480b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012481f Catch@1012481f

void Catch_1012481f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_NPC::execIsValidData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10124840 UUIDATA_NPC::execGetNpcProperty

/* public: void __thiscall UUIDATA_NPC::execGetNpcProperty(struct FFrame &,void * const) */

void __thiscall UUIDATA_NPC::execGetNpcProperty(UUIDATA_NPC *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FArray *this_00;
  int iVar3;
  uint uStack_c38;
  FArray local_c28 [3080];
  int local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x124840  1272  ?execGetNpcProperty@UUIDATA_NPC@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206269;
  local_10 = ExceptionList;
  uStack_c38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_c38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  _eh_vector_constructor_iterator_(local_c28,0xc,0x100,FUN_10038f80,FUN_10039be0);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_c28);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_c28;
  }
  else {
    this_00 = *(FArray **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10187a60(&local_18);
  if (iVar2 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    FArray::Empty(this_00,4,0);
    for (iVar3 = 0; local_20 = iVar3, iVar3 < *(int *)(iVar2 + 0x50); iVar3 = iVar3 + 1) {
      FUN_100d9a30(*(int *)(iVar2 + 0x4c) + iVar3 * 4);
    }
    *(undefined4 *)param_2 = 1;
  }
  local_8 = local_8 & 0xffffff00;
  _eh_vector_destructor_iterator_(local_c28,0xc,0x100,FUN_10039be0);
  ExceptionList = local_10;
  return;
}


// ==== 101249c4 Catch@101249c4

void Catch_101249c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101249d8 Catch@101249d8

void Catch_101249d8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_NPC::execGetNpcProperty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10124a00 UUIDATA_PARTY::execGetMemberName

/* public: void __thiscall UUIDATA_PARTY::execGetMemberName(struct FFrame &,void * const) */

void __thiscall UUIDATA_PARTY::execGetMemberName(UUIDATA_PARTY *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FString *pFVar3;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x124a00  1257  ?execGetMemberName@UUIDATA_PARTY@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102062a2;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    iVar2 = FUN_101ae990(local_18);
    if (iVar2 != 0) {
      pFVar3 = (FString *)FUN_101b5c90(local_38);
      local_8._0_1_ = 2;
      FString::operator=(local_2c,pFVar3);
      local_8._0_1_ = 1;
      FString::~FString(local_38);
    }
  }
  FString::operator=(param_2,local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10124b04 Catch@10124b04

void Catch_10124b04(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10124b18 Catch@10124b18

void Catch_10124b18(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PARTY::execGetMemberName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10124b40 UUIDATA_PET::execGetPetID

/* public: void __thiscall UUIDATA_PET::execGetPetID(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetID(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uStack_f0;
  undefined1 local_e0 [204];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x124b40  1296  ?execGetPetID@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102062c0;
  local_10 = ExceptionList;
  uStack_f0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f0;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_101458e0(local_e0);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 4);
  ExceptionList = local_10;
  return;
}


// ==== 10124bd2 Catch@10124bd2

void Catch_10124bd2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10124be6 Catch@10124be6

void Catch_10124be6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10124c10 UUIDATA_PET::execGetPetHP

/* public: void __thiscall UUIDATA_PET::execGetPetHP(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetHP(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uStack_f0;
  undefined1 local_e0 [204];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x124c10  1295  ?execGetPetHP@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102062e0;
  local_10 = ExceptionList;
  uStack_f0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f0;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_101458e0(local_e0);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x44);
  ExceptionList = local_10;
  return;
}


// ==== 10124ca2 Catch@10124ca2

void Catch_10124ca2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10124cb6 Catch@10124cb6

void Catch_10124cb6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetHP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10124ce0 UUIDATA_PET::execGetPetMP

/* public: void __thiscall UUIDATA_PET::execGetPetMP(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetMP(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uStack_f0;
  undefined1 local_e0 [204];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x124ce0  1299  ?execGetPetMP@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206300;
  local_10 = ExceptionList;
  uStack_f0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f0;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_101458e0(local_e0);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x4c);
  ExceptionList = local_10;
  return;
}


// ==== 10124d72 Catch@10124d72

void Catch_10124d72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10124d86 Catch@10124d86

void Catch_10124d86(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetMP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10124db0 UUIDATA_PET::execGetPetFatigue

/* public: void __thiscall UUIDATA_PET::execGetPetFatigue(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetFatigue(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uStack_f0;
  undefined1 local_e0 [204];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x124db0  1294  ?execGetPetFatigue@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206320;
  local_10 = ExceptionList;
  uStack_f0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f0;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_101458e0(local_e0);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x74);
  ExceptionList = local_10;
  return;
}


// ==== 10124e42 Catch@10124e42

void Catch_10124e42(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10124e56 Catch@10124e56

void Catch_10124e56(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetFatigue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10124e80 UUIDATA_PET::execGetPetMaxHP

/* public: void __thiscall UUIDATA_PET::execGetPetMaxHP(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetMaxHP(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uStack_f0;
  undefined1 local_e0 [204];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x124e80  1302  ?execGetPetMaxHP@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206340;
  local_10 = ExceptionList;
  uStack_f0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f0;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_101458e0(local_e0);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x48);
  ExceptionList = local_10;
  return;
}


// ==== 10124f12 Catch@10124f12

void Catch_10124f12(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10124f26 Catch@10124f26

void Catch_10124f26(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetMaxHP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10124f50 UUIDATA_PET::execGetPetMaxMP

/* public: void __thiscall UUIDATA_PET::execGetPetMaxMP(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetMaxMP(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uStack_f0;
  undefined1 local_e0 [204];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x124f50  1303  ?execGetPetMaxMP@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206360;
  local_10 = ExceptionList;
  uStack_f0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f0;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_101458e0(local_e0);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x50);
  ExceptionList = local_10;
  return;
}


// ==== 10124fe2 Catch@10124fe2

void Catch_10124fe2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10124ff6 Catch@10124ff6

void Catch_10124ff6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetMaxMP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10125020 UUIDATA_PET::execGetPetMaxFatigue

/* public: void __thiscall UUIDATA_PET::execGetPetMaxFatigue(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetMaxFatigue(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uStack_f0;
  undefined1 local_e0 [204];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x125020  1301  ?execGetPetMaxFatigue@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206380;
  local_10 = ExceptionList;
  uStack_f0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f0;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_101458e0(local_e0);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x78);
  ExceptionList = local_10;
  return;
}


// ==== 101250b2 Catch@101250b2

void Catch_101250b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101250c6 Catch@101250c6

void Catch_101250c6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetMaxFatigue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101250f0 UUIDATA_PET::execGetIsPetOrSummoned

/* public: void __thiscall UUIDATA_PET::execGetIsPetOrSummoned(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetIsPetOrSummoned(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uStack_f0;
  undefined1 local_e0 [204];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1250f0  1226  ?execGetIsPetOrSummoned@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102063a0;
  local_10 = ExceptionList;
  uStack_f0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f0;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  puVar2 = (undefined4 *)FUN_101458e0(local_e0);
  *(undefined4 *)param_2 = *puVar2;
  ExceptionList = local_10;
  return;
}


// ==== 10125181 Catch@10125181

void Catch_10125181(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10125195 Catch@10125195

void Catch_10125195(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetIsPetOrSummoned");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101251c0 UUIDATA_PET::execGetPetCarryWeight

/* public: void __thiscall UUIDATA_PET::execGetPetCarryWeight(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetCarryWeight(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uStack_f0;
  undefined1 local_e0 [204];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1251c0  1291  ?execGetPetCarryWeight@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102063c0;
  local_10 = ExceptionList;
  uStack_f0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f0;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_101458e0(local_e0);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x80);
  ExceptionList = local_10;
  return;
}


// ==== 10125255 Catch@10125255

void Catch_10125255(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10125269 Catch@10125269

void Catch_10125269(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetCarryWeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10125290 UUIDATA_PET::execGetPetCarringWeight

/* public: void __thiscall UUIDATA_PET::execGetPetCarringWeight(struct FFrame &,void * const) */

void __thiscall
UUIDATA_PET::execGetPetCarringWeight(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uStack_f0;
  undefined1 local_e0 [204];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x125290  1290  ?execGetPetCarringWeight@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102063e0;
  local_10 = ExceptionList;
  uStack_f0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f0;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_101458e0(local_e0);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x7c);
  ExceptionList = local_10;
  return;
}


// ==== 10125322 Catch@10125322

void Catch_10125322(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10125336 Catch@10125336

void Catch_10125336(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetCarringWeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10125360 UUIDATA_PET::execGetPetLevel

/* public: void __thiscall UUIDATA_PET::execGetPetLevel(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetLevel(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uStack_f0;
  undefined1 local_e0 [204];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x125360  1298  ?execGetPetLevel@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206400;
  local_10 = ExceptionList;
  uStack_f0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f0;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_101458e0(local_e0);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x58);
  ExceptionList = local_10;
  return;
}


// ==== 101253f2 Catch@101253f2

void Catch_101253f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10125406 Catch@10125406

void Catch_10125406(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10125430 UUIDATA_PET::execGetPetSP

/* public: void __thiscall UUIDATA_PET::execGetPetSP(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetSP(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uStack_f0;
  undefined1 local_e0 [204];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x125430  1306  ?execGetPetSP@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206420;
  local_10 = ExceptionList;
  uStack_f0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f0;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_101458e0(local_e0);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x54);
  ExceptionList = local_10;
  return;
}


// ==== 101254c2 Catch@101254c2

void Catch_101254c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101254d6 Catch@101254d6

void Catch_101254d6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetSP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10125500 UUIDATA_PET::execGetPetEXP

/* public: void __thiscall UUIDATA_PET::execGetPetEXP(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetEXP(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uStack_f8;
  undefined1 local_e8 [200];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x125500  1292  ?execGetPetEXP@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206440;
  local_10 = ExceptionList;
  uStack_f8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f8;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f8;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  puVar3 = &local_20;
  iVar2 = FUN_101458e0(local_e8);
  FUN_100631b0(*(undefined4 *)(iVar2 + 0x5c),*(undefined4 *)(iVar2 + 0x60),puVar3);
  *(undefined4 *)param_2 = local_20;
  *(undefined4 *)((int)param_2 + 4) = local_1c;
  ExceptionList = local_10;
  return;
}


// ==== 101255ac Catch@101255ac

void Catch_101255ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101255c0 Catch@101255c0

void Catch_101255c0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetEXP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101255e0 UUIDATA_PET::execGetPetMinEXP

/* public: void __thiscall UUIDATA_PET::execGetPetMinEXP(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetMinEXP(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uStack_f8;
  undefined1 local_e8 [200];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1255e0  1304  ?execGetPetMinEXP@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206460;
  local_10 = ExceptionList;
  uStack_f8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f8;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f8;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  puVar3 = &local_20;
  iVar2 = FUN_101458e0(local_e8);
  FUN_100631b0(*(undefined4 *)(iVar2 + 100),*(undefined4 *)(iVar2 + 0x68),puVar3);
  *(undefined4 *)param_2 = local_20;
  *(undefined4 *)((int)param_2 + 4) = local_1c;
  ExceptionList = local_10;
  return;
}


// ==== 1012568c Catch@1012568c

void Catch_1012568c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101256a0 Catch@101256a0

void Catch_101256a0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetMinEXP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101256c0 UUIDATA_PET::execGetPetMaxEXP

/* public: void __thiscall UUIDATA_PET::execGetPetMaxEXP(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetMaxEXP(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uStack_f8;
  undefined1 local_e8 [200];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1256c0  1300  ?execGetPetMaxEXP@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206480;
  local_10 = ExceptionList;
  uStack_f8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f8;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f8;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  puVar3 = &local_20;
  iVar2 = FUN_101458e0(local_e8);
  FUN_100631b0(*(undefined4 *)(iVar2 + 0x6c),*(undefined4 *)(iVar2 + 0x70),puVar3);
  *(undefined4 *)param_2 = local_20;
  *(undefined4 *)((int)param_2 + 4) = local_1c;
  ExceptionList = local_10;
  return;
}


// ==== 1012576c Catch@1012576c

void Catch_1012576c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10125780 Catch@10125780

void Catch_10125780(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetMaxEXP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101257a0 UUIDATA_PET::execGetPetEXPRate

/* public: void __thiscall UUIDATA_PET::execGetPetEXPRate(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetEXPRate(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uStack_100;
  undefined1 local_f0 [216];
  int iStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1257a0  1293  ?execGetPetEXPRate@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102064a0;
  local_10 = ExceptionList;
  uStack_100 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_100;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar5 = &uStack_100;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar5 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar5;
  param_1 = (FFrame *)0x0;
  iVar6 = FUN_101458e0(local_f0);
  uVar1 = *(uint *)(iVar6 + 0x5c);
  iStack_18 = *(int *)(iVar6 + 0x60);
  iVar6 = FUN_101458e0(local_f0);
  uVar2 = *(uint *)(iVar6 + 100);
  iVar6 = *(int *)(iVar6 + 0x68);
  iVar7 = FUN_101458e0(local_f0);
  iVar9 = *(uint *)(iVar7 + 0x6c) - uVar2;
  uVar3 = (uint)(*(uint *)(iVar7 + 0x6c) < uVar2);
  iVar4 = *(int *)(iVar7 + 0x70) - iVar6;
  iVar8 = iVar4 - uVar3;
  if ((-1 < iVar8) &&
     ((iVar8 != 0 && SBORROW4(*(int *)(iVar7 + 0x70),iVar6) == SBORROW4(iVar4,uVar3) || (iVar9 != 0)
      ))) {
    param_1 = (FFrame *)
              (float)(((float10)CONCAT44((iStack_18 - iVar6) - (uint)(uVar1 < uVar2),uVar1 - uVar2)
                      * (float10)100.0) / (float10)CONCAT44(iVar8,iVar9));
  }
  *(FFrame **)param_2 = param_1;
  ExceptionList = local_10;
  return;
}


// ==== 101258a2 Catch@101258a2

void Catch_101258a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101258b6 Catch@101258b6

void Catch_101258b6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetEXPRate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101258e0 FUN_101258e0

short * FUN_101258e0(void)

{
  short *psVar1;
  int in_ECX;
  
  psVar1 = (short *)(in_ECX + 8);
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    psVar1 = (short *)0x0;
  }
  return psVar1;
}


// ==== 101258f0 UUIDATA_PET::execGetPetName

/* public: void __thiscall UUIDATA_PET::execGetPetName(struct FFrame &,void * const) */

void __thiscall UUIDATA_PET::execGetPetName(UUIDATA_PET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  ushort *puVar2;
  uint uStack_f0;
  undefined1 local_e0 [204];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1258f0  1305  ?execGetPetName@UUIDATA_PET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102064c0;
  local_10 = ExceptionList;
  uStack_f0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f0;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_f0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FUN_101458e0(local_e0);
  puVar2 = (ushort *)FUN_101258e0();
  FString::operator=(param_2,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 1012598b Catch@1012598b

void Catch_1012598b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012599f Catch@1012599f

void Catch_1012599f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PET::execGetPetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101259c0 UUIDATA_PLAYER::execIsHero

/* public: void __thiscall UUIDATA_PLAYER::execIsHero(struct FFrame &,void * const) */

void __thiscall UUIDATA_PLAYER::execIsHero(UUIDATA_PLAYER *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1259c0  1487  ?execIsHero@UUIDATA_PLAYER@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102064e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_1014dd00();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x2fc);
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 10125a51 Catch@10125a51

void Catch_10125a51(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10125a65 Catch@10125a65

void Catch_10125a65(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PLAYER::execIsHero");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10125a90 UUIDATA_PLAYER::execGetPlayerID

/* public: void __thiscall UUIDATA_PLAYER::execGetPlayerID(struct FFrame &,void * const) */

void __thiscall UUIDATA_PLAYER::execGetPlayerID(UUIDATA_PLAYER *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x125a90  1311  ?execGetPlayerID@UUIDATA_PLAYER@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206500;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_1014dd00();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x18);
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 10125b1e Catch@10125b1e

void Catch_10125b1e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10125b32 Catch@10125b32

void Catch_10125b32(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PLAYER::execGetPlayerID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10125b50 UUIDATA_PLAYER::execGetRecipeShopMsg

/* public: void __thiscall UUIDATA_PLAYER::execGetRecipeShopMsg(struct FFrame &,void * const) */

void __thiscall
UUIDATA_PLAYER::execGetRecipeShopMsg(UUIDATA_PLAYER *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  ushort *puVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x125b50  1345  ?execGetRecipeShopMsg@UUIDATA_PLAYER@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206529;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_38;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_1014dd00();
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x204) != 0)) {
    puVar3 = FString::operator*((FString *)(*(int *)(iVar2 + 0x204) + 0x17c4));
    FString::operator=(local_28,puVar3);
  }
  FString::operator=(param_2,local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10125c29 Catch@10125c29

void Catch_10125c29(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10125c3d Catch@10125c3d

void Catch_10125c3d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PLAYER::execGetRecipeShopMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10125c60 UUIDATA_PLAYER::execGetPlayerEXPRate

/* public: void __thiscall UUIDATA_PLAYER::execGetPlayerEXPRate(struct FFrame &,void * const) */

void __thiscall
UUIDATA_PLAYER::execGetPlayerEXPRate(UUIDATA_PLAYER *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x125c60  1309  ?execGetPlayerEXPRate@UUIDATA_PLAYER@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  local_18 = 0.0;
  iVar2 = FUN_1014dd00();
  if ((iVar2 != 0) &&
     (iVar1 = *(int *)(iVar2 + 0x58),
     *(int *)(&DAT_10276d18 + iVar1 * 8) != 0 || *(int *)(&DAT_10276d1c + iVar1 * 8) != 0)) {
    fVar3 = (float10)FUN_10064f90(*(undefined4 *)(iVar2 + 0x5c),*(undefined4 *)(iVar2 + 0x60),iVar1)
    ;
    local_18 = (float)fVar3;
  }
  *(float *)param_2 = local_18;
  ExceptionList = local_10;
  return;
}


// ==== 10125d1a Catch@10125d1a

void Catch_10125d1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10125d2e Catch@10125d2e

void Catch_10125d2e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PLAYER::execGetPlayerEXPRate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10125d50 UUIDATA_PLAYER::execGetPlayerMoveType

/* public: void __thiscall UUIDATA_PLAYER::execGetPlayerMoveType(struct FFrame &,void * const) */

void __thiscall
UUIDATA_PLAYER::execGetPlayerMoveType(UUIDATA_PLAYER *this,FFrame *param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x125d50  1313  ?execGetPlayerMoveType@UUIDATA_PLAYER@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10206570;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = 0;
  iVar2 = FUN_1014dd00();
  if (iVar2 != 0) {
    cVar1 = *(char *)(*(int *)(*(int *)(iVar2 + 0x204) + 0x14d8) + 0x434);
    if (cVar1 == '\0') {
      uVar3 = 1;
    }
    else if (cVar1 == '\x01') {
      uVar3 = 2;
    }
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10125e03 Catch@10125e03

void Catch_10125e03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10125e17 Catch@10125e17

void Catch_10125e17(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PLAYER::execGetPlayerMoveType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10125e40 UUIDATA_PLAYER::execGetPlayerEnvironment

/* public: void __thiscall UUIDATA_PLAYER::execGetPlayerEnvironment(struct FFrame &,void * const) */

void __thiscall
UUIDATA_PLAYER::execGetPlayerEnvironment(UUIDATA_PLAYER *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x125e40  1310
                       ?execGetPlayerEnvironment@UUIDATA_PLAYER@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206590;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1014dd00();
  if (iVar1 != 0) {
    switch(*(undefined4 *)(*(int *)(iVar1 + 0x204) + 0x778)) {
    case 0:
      uVar2 = 1;
      break;
    case 1:
      uVar2 = 2;
      break;
    case 2:
      uVar2 = 3;
      break;
    case 3:
      uVar2 = 4;
      break;
    default:
      uVar2 = 0;
    }
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 10125f01 Catch@10125f01

void Catch_10125f01(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10125f15 Catch@10125f15

void Catch_10125f15(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PLAYER::execGetPlayerEnvironment");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10125f50 UUIDATA_PLAYER::execHasCrystallizeAbility

/* public: void __thiscall UUIDATA_PLAYER::execHasCrystallizeAbility(struct FFrame &,void * const)
    */

void __thiscall
UUIDATA_PLAYER::execHasCrystallizeAbility(UUIDATA_PLAYER *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x125f50  1446
                       ?execHasCrystallizeAbility@UUIDATA_PLAYER@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102065b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 0;
  iVar1 = FUN_1014dd00();
  if (iVar1 != 0) {
    iVar1 = FUN_1014dd00();
    if (*(int *)(iVar1 + 0x2a8) != 0) {
      *(undefined4 *)param_2 = 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10125ff7 Catch@10125ff7

void Catch_10125ff7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012600b Catch@1012600b

void Catch_1012600b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PLAYER::execHasCrystallizeAbility");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126030 UUIDATA_PLAYER::execGetInventoryLimit

/* public: void __thiscall UUIDATA_PLAYER::execGetInventoryLimit(struct FFrame &,void * const) */

void __thiscall
UUIDATA_PLAYER::execGetInventoryLimit(UUIDATA_PLAYER *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x126030  1225  ?execGetInventoryLimit@UUIDATA_PLAYER@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102065d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 0;
  iVar1 = FUN_1014dd00();
  if (iVar1 != 0) {
    *(int *)param_2 = (int)*(short *)(iVar1 + 0x2e4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101260c6 Catch@101260c6

void Catch_101260c6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101260da Catch@101260da

void Catch_101260da(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_PLAYER::execGetInventoryLimit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126100 UUIDATA_QUEST::execGetQuestDescription

/* public: void __thiscall UUIDATA_QUEST::execGetQuestDescription(struct FFrame &,void * const) */

void __thiscall
UUIDATA_QUEST::execGetQuestDescription(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  ushort *puVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x126100  1318  ?execGetQuestDescription@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102065f0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  puVar3 = (ushort *)FUN_10143790(local_18,param_1);
  FString::operator=(param_2,puVar3);
  ExceptionList = local_10;
  return;
}


// ==== 101261d1 Catch@101261d1

void Catch_101261d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101261e5 Catch@101261e5

void Catch_101261e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetQuestDescription");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126210 UUIDATA_QUEST::execIsShowableJournalQuest

/* public: void __thiscall UUIDATA_QUEST::execIsShowableJournalQuest(struct FFrame &,void * const)
    */

void __thiscall
UUIDATA_QUEST::execIsShowableJournalQuest(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x126210  1505
                       ?execIsShowableJournalQuest@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206610;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  uVar3 = FUN_10143630(local_18,param_1);
  *(uint *)param_2 = uVar3 & 0xff;
  ExceptionList = local_10;
  return;
}


// ==== 101262df Catch@101262df

void Catch_101262df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101262f3 Catch@101262f3

void Catch_101262f3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execIsShowableJournalQuest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126310 UUIDATA_QUEST::execIsShowableItemNumQuest

/* public: void __thiscall UUIDATA_QUEST::execIsShowableItemNumQuest(struct FFrame &,void * const)
    */

void __thiscall
UUIDATA_QUEST::execIsShowableItemNumQuest(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x126310  1504
                       ?execIsShowableItemNumQuest@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206630;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  uVar3 = FUN_101436e0(local_18,param_1);
  *(uint *)param_2 = uVar3 & 0xff;
  ExceptionList = local_10;
  return;
}


// ==== 101263df Catch@101263df

void Catch_101263df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101263f3 Catch@101263f3

void Catch_101263f3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execIsShowableItemNumQuest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126410 FUN_10126410

void FUN_10126410(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1020665b;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_103554c4 ^ (uint)auStack_10);
  ExceptionList = &local_c;
  uVar3 = 0xc;
  iVar2 = (**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  local_c = (void *)0x0;
  if (iVar2 != 0) {
    FUN_101b6a20(uVar3,iVar2);
  }
  ExceptionList = pvVar1;
  return;
}


// ==== 10126480 FUN_10126480

int FUN_10126480(void)

{
  if (DAT_10394344 == 0) {
    FUN_10126410();
  }
  return DAT_10394344;
}


// ==== 101264a0 UUIDATA_QUEST::execGetFirstID

/* public: void __thiscall UUIDATA_QUEST::execGetFirstID(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetFirstID(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1264a0  1203  ?execGetFirstID@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206680;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10126480();
  uVar1 = FUN_101b6b30();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 10126526 Catch@10126526

void Catch_10126526(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012653a Catch@1012653a

void Catch_1012653a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetFirstID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126560 UUIDATA_QUEST::execGetNextID

/* public: void __thiscall UUIDATA_QUEST::execGetNextID(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetNextID(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x126560  1270  ?execGetNextID@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102066a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10126480();
  uVar1 = FUN_101b6c30();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 101265e6 Catch@101265e6

void Catch_101265e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101265fa Catch@101265fa

void Catch_101265fa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetNextID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126620 UUIDATA_QUEST::execGetClearedQuest

/* public: void __thiscall UUIDATA_QUEST::execGetClearedQuest(struct FFrame &,void * const) */

void __thiscall
UUIDATA_QUEST::execGetClearedQuest(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  FFrame *pFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar4 = param_1;
                    /* 0x126620  1174  ?execGetClearedQuest@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102066c0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar4 + 0xc);
  *(byte **)(pFVar4 + 0xc) = *(byte **)(pFVar4 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar4,&param_1);
  *(int *)(pFVar4 + 0xc) = *(int *)(pFVar4 + 0xc) + 1;
  if (**(char **)(pFVar4 + 0xc) == 'B') {
    *(char **)(pFVar4 + 0xc) = *(char **)(pFVar4 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar4,0);
  }
  uVar3 = local_18;
  pFVar4 = param_1;
  FUN_10126480(local_18,param_1);
  iVar2 = FUN_101b6910(uVar3,pFVar4);
  if (iVar2 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0xbc);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101266f7 Catch@101266f7

void Catch_101266f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012670b Catch@1012670b

void Catch_1012670b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetClearedQuest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126730 UUIDATA_QUEST::execGetQuestType

/* public: void __thiscall UUIDATA_QUEST::execGetQuestType(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetQuestType(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  FFrame *pFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar4 = param_1;
                    /* 0x126730  1323  ?execGetQuestType@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102066e0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar4 + 0xc);
  *(byte **)(pFVar4 + 0xc) = *(byte **)(pFVar4 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar4,&param_1);
  *(int *)(pFVar4 + 0xc) = *(int *)(pFVar4 + 0xc) + 1;
  if (**(char **)(pFVar4 + 0xc) == 'B') {
    *(char **)(pFVar4 + 0xc) = *(char **)(pFVar4 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar4,0);
  }
  uVar3 = local_18;
  pFVar4 = param_1;
  FUN_10126480(local_18,param_1);
  iVar2 = FUN_101b6910(uVar3,pFVar4);
  if (iVar2 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 100);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10126804 Catch@10126804

void Catch_10126804(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10126818 Catch@10126818

void Catch_10126818(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetQuestType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126840 UUIDATA_QUEST::execGetMaxLevel

/* public: void __thiscall UUIDATA_QUEST::execGetMaxLevel(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetMaxLevel(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  FFrame *pFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar4 = param_1;
                    /* 0x126840  1256  ?execGetMaxLevel@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206700;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar4 + 0xc);
  *(byte **)(pFVar4 + 0xc) = *(byte **)(pFVar4 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar4,&param_1);
  *(int *)(pFVar4 + 0xc) = *(int *)(pFVar4 + 0xc) + 1;
  if (**(char **)(pFVar4 + 0xc) == 'B') {
    *(char **)(pFVar4 + 0xc) = *(char **)(pFVar4 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar4,0);
  }
  uVar3 = local_18;
  pFVar4 = param_1;
  FUN_10126480(local_18,param_1);
  iVar2 = FUN_101b6910(uVar3,pFVar4);
  if (iVar2 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x60);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10126914 Catch@10126914

void Catch_10126914(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10126928 Catch@10126928

void Catch_10126928(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetMaxLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126950 UUIDATA_QUEST::execGetMinLevel

/* public: void __thiscall UUIDATA_QUEST::execGetMinLevel(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetMinLevel(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  FFrame *pFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar4 = param_1;
                    /* 0x126950  1259  ?execGetMinLevel@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206720;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar4 + 0xc);
  *(byte **)(pFVar4 + 0xc) = *(byte **)(pFVar4 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar4,&param_1);
  *(int *)(pFVar4 + 0xc) = *(int *)(pFVar4 + 0xc) + 1;
  if (**(char **)(pFVar4 + 0xc) == 'B') {
    *(char **)(pFVar4 + 0xc) = *(char **)(pFVar4 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar4,0);
  }
  uVar3 = local_18;
  pFVar4 = param_1;
  FUN_10126480(local_18,param_1);
  iVar2 = FUN_101b6910(uVar3,pFVar4);
  if (iVar2 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x5c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10126a24 Catch@10126a24

void Catch_10126a24(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10126a38 Catch@10126a38

void Catch_10126a38(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetMinLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126a60 UUIDATA_QUEST::execGetIntro

/* public: void __thiscall UUIDATA_QUEST::execGetIntro(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetIntro(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  FFrame *pFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar4 = param_1;
                    /* 0x126a60  1223  ?execGetIntro@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206740;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar4 + 0xc);
  *(byte **)(pFVar4 + 0xc) = *(byte **)(pFVar4 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar4,&param_1);
  *(int *)(pFVar4 + 0xc) = *(int *)(pFVar4 + 0xc) + 1;
  if (**(char **)(pFVar4 + 0xc) == 'B') {
    *(char **)(pFVar4 + 0xc) = *(char **)(pFVar4 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar4,0);
  }
  uVar3 = local_18;
  pFVar4 = param_1;
  FUN_10126480(local_18,param_1);
  iVar2 = FUN_101b6910(uVar3,pFVar4);
  if (iVar2 != 0) {
    FString::operator=(param_2,(FString *)(iVar2 + 0x94));
  }
  ExceptionList = local_10;
  return;
}


// ==== 10126b3b Catch@10126b3b

void Catch_10126b3b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10126b4f Catch@10126b4f

void Catch_10126b4f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetIntro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126b70 UUIDATA_QUEST::execGetRequirement

/* public: void __thiscall UUIDATA_QUEST::execGetRequirement(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetRequirement(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  FFrame *pFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar4 = param_1;
                    /* 0x126b70  1355  ?execGetRequirement@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206760;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar4 + 0xc);
  *(byte **)(pFVar4 + 0xc) = *(byte **)(pFVar4 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar4,&param_1);
  *(int *)(pFVar4 + 0xc) = *(int *)(pFVar4 + 0xc) + 1;
  if (**(char **)(pFVar4 + 0xc) == 'B') {
    *(char **)(pFVar4 + 0xc) = *(char **)(pFVar4 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar4,0);
  }
  uVar3 = local_18;
  pFVar4 = param_1;
  FUN_10126480(local_18,param_1);
  iVar2 = FUN_101b6910(uVar3,pFVar4);
  if (iVar2 != 0) {
    FString::operator=(param_2,(FString *)(iVar2 + 0x88));
  }
  ExceptionList = local_10;
  return;
}


// ==== 10126c4b Catch@10126c4b

void Catch_10126c4b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10126c5f Catch@10126c5f

void Catch_10126c5f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetRequirement");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126c80 UUIDATA_QUEST::execGetStartNPCID

/* public: void __thiscall UUIDATA_QUEST::execGetStartNPCID(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetStartNPCID(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  FFrame *pFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar4 = param_1;
                    /* 0x126c80  1394  ?execGetStartNPCID@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206780;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar4 + 0xc);
  *(byte **)(pFVar4 + 0xc) = *(byte **)(pFVar4 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar4,&param_1);
  *(int *)(pFVar4 + 0xc) = *(int *)(pFVar4 + 0xc) + 1;
  if (**(char **)(pFVar4 + 0xc) == 'B') {
    *(char **)(pFVar4 + 0xc) = *(char **)(pFVar4 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar4,0);
  }
  uVar3 = local_18;
  pFVar4 = param_1;
  FUN_10126480(local_18,param_1);
  iVar2 = FUN_101b6910(uVar3,pFVar4);
  if (iVar2 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x78);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10126d54 Catch@10126d54

void Catch_10126d54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10126d68 Catch@10126d68

void Catch_10126d68(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetStartNPCID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126d90 UUIDATA_QUEST::execGetStartNPCLoc

/* public: void __thiscall UUIDATA_QUEST::execGetStartNPCLoc(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetStartNPCLoc(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  FFrame *pFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar4 = param_1;
                    /* 0x126d90  1395  ?execGetStartNPCLoc@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102067a0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar4 + 0xc);
  *(byte **)(pFVar4 + 0xc) = *(byte **)(pFVar4 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar4,&param_1);
  *(int *)(pFVar4 + 0xc) = *(int *)(pFVar4 + 0xc) + 1;
  if (**(char **)(pFVar4 + 0xc) == 'B') {
    *(char **)(pFVar4 + 0xc) = *(char **)(pFVar4 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar4,0);
  }
  uVar3 = local_18;
  pFVar4 = param_1;
  FUN_10126480(local_18,param_1);
  iVar2 = FUN_101b6910(uVar3,pFVar4);
  if (iVar2 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x7c);
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(iVar2 + 0x80);
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)(iVar2 + 0x84);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10126e76 Catch@10126e76

void Catch_10126e76(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10126e8a Catch@10126e8a

void Catch_10126e8a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetStartNPCLoc");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126eb0 UUIDATA_QUEST::execGetTargetName

/* public: void __thiscall UUIDATA_QUEST::execGetTargetName(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetTargetName(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  FFrame *pFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar4 = param_1;
                    /* 0x126eb0  1414  ?execGetTargetName@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102067c0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar4 + 0xc);
  *(byte **)(pFVar4 + 0xc) = *(byte **)(pFVar4 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar4,&param_1);
  *(int *)(pFVar4 + 0xc) = *(int *)(pFVar4 + 0xc) + 1;
  if (**(char **)(pFVar4 + 0xc) == 'B') {
    *(char **)(pFVar4 + 0xc) = *(char **)(pFVar4 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar4,0);
  }
  uVar3 = local_18;
  pFVar4 = param_1;
  FUN_10126480(local_18,param_1);
  iVar2 = FUN_101b6910(uVar3,pFVar4);
  if (iVar2 != 0) {
    FString::operator=(param_2,(FString *)(iVar2 + 0x68));
  }
  ExceptionList = local_10;
  return;
}


// ==== 10126f89 Catch@10126f89

void Catch_10126f89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10126f9d Catch@10126f9d

void Catch_10126f9d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetTargetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10126fc0 UUIDATA_QUEST::execGetTargetLoc

/* public: void __thiscall UUIDATA_QUEST::execGetTargetLoc(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetTargetLoc(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  FFrame *pFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar4 = param_1;
                    /* 0x126fc0  1410  ?execGetTargetLoc@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102067e0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar4 + 0xc);
  *(byte **)(pFVar4 + 0xc) = *(byte **)(pFVar4 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar4,&param_1);
  *(int *)(pFVar4 + 0xc) = *(int *)(pFVar4 + 0xc) + 1;
  if (**(char **)(pFVar4 + 0xc) == 'B') {
    *(char **)(pFVar4 + 0xc) = *(char **)(pFVar4 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar4,0);
  }
  uVar3 = local_18;
  pFVar4 = param_1;
  FUN_10126480(local_18,param_1);
  iVar2 = FUN_101b6910(uVar3,pFVar4);
  if (iVar2 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x50);
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)(iVar2 + 0x58);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101270a0 Catch@101270a0

void Catch_101270a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101270b4 Catch@101270b4

void Catch_101270b4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetTargetLoc");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101270e0 UUIDATA_QUEST::execGetQuestItem

/* public: void __thiscall UUIDATA_QUEST::execGetQuestItem(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetQuestItem(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  FFrame *pFVar5;
  uint uStack_58;
  FString local_48 [12];
  FString local_3c [12];
  FString local_30 [20];
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar5 = param_1;
                    /* 0x1270e0  1319  ?execGetQuestItem@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206823;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar5 + 0xc);
  *(byte **)(pFVar5 + 0xc) = *(byte **)(pFVar5 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar5,&param_1);
  *(int *)(pFVar5 + 0xc) = *(int *)(pFVar5 + 0xc) + 1;
  if (**(char **)(pFVar5 + 0xc) == 'B') {
    *(char **)(pFVar5 + 0xc) = *(char **)(pFVar5 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar5,0);
  }
  uVar4 = local_18;
  pFVar5 = param_1;
  FUN_10126480(local_18,param_1);
  iVar3 = FUN_101b6910(uVar4,pFVar5);
  FUN_1003f970();
  local_8._0_1_ = 1;
  if (iVar3 != 0) {
    FString::FString(local_3c,(ushort *)&DAT_10274940);
    local_8._0_1_ = 2;
    FUN_10040090(local_3c,*(undefined4 *)(iVar3 + 0x38));
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    local_1c = 0;
    while (iVar2 = local_1c, local_1c < *(int *)(iVar3 + 0x38)) {
      uVar4 = FString::Printf((ushort *)local_3c,L"ItemID_%d",local_1c);
      local_8._0_1_ = 3;
      FUN_10040090(uVar4,*(undefined4 *)(*(int *)(iVar3 + 0x34) + iVar2 * 4));
      local_8._0_1_ = 1;
      FString::~FString(local_3c);
      uVar4 = FString::Printf((ushort *)local_48,L"ItemNum_%d",iVar2);
      local_8._0_1_ = 4;
      FUN_10040090(uVar4,*(undefined4 *)(*(int *)(iVar3 + 0x40) + iVar2 * 4));
      local_8._0_1_ = 1;
      FString::~FString(local_48);
      local_1c = iVar2 + 1;
    }
    FString::operator=(param_2,local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 10127281 Catch@10127281

void Catch_10127281(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10127295 Catch@10127295

void Catch_10127295(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetQuestItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101272c0 UUIDATA_QUEST::execGetQuestJournalName

/* public: void __thiscall UUIDATA_QUEST::execGetQuestJournalName(struct FFrame &,void * const) */

void __thiscall
UUIDATA_QUEST::execGetQuestJournalName(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  FFrame *pFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar4 = param_1;
                    /* 0x1272c0  1320  ?execGetQuestJournalName@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10206840;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar4 + 0xc);
  *(byte **)(pFVar4 + 0xc) = *(byte **)(pFVar4 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar4,&param_1);
  *(int *)(pFVar4 + 0xc) = *(int *)(pFVar4 + 0xc) + 1;
  if (**(char **)(pFVar4 + 0xc) == 'B') {
    *(char **)(pFVar4 + 0xc) = *(char **)(pFVar4 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar4,0);
  }
  uVar3 = local_18;
  pFVar4 = param_1;
  FUN_10126480(local_18,param_1);
  iVar2 = FUN_101b6910(uVar3,pFVar4);
  if (iVar2 != 0) {
    FString::operator=(param_2,(FString *)(iVar2 + 0x18));
  }
  ExceptionList = local_10;
  return;
}


// ==== 10127399 Catch@10127399

void Catch_10127399(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101273ad Catch@101273ad

void Catch_101273ad(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetQuestJournalName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101273d0 UUIDATA_QUEST::execGetQuestName

/* public: void __thiscall UUIDATA_QUEST::execGetQuestName(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetQuestName(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1273d0  1322  ?execGetQuestName@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206860;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar4 = 1;
  uVar3 = local_18;
  FUN_10126480(local_18,1);
  iVar2 = FUN_101b6910(uVar3,uVar4);
  if (iVar2 == 0) {
    FString::operator=(param_2,(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::operator=(param_2,(FString *)(iVar2 + 0xc));
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012749a Catch@1012749a

void Catch_1012749a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101274ae Catch@101274ae

void Catch_101274ae(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetQuestName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101274d0 UUIDATA_QUEST::execGetQuestZone

/* public: void __thiscall UUIDATA_QUEST::execGetQuestZone(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execGetQuestZone(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  FFrame *pFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar4 = param_1;
                    /* 0x1274d0  1324  ?execGetQuestZone@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206880;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar4 + 0xc);
  *(byte **)(pFVar4 + 0xc) = *(byte **)(pFVar4 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar4,&param_1);
  *(int *)(pFVar4 + 0xc) = *(int *)(pFVar4 + 0xc) + 1;
  if (**(char **)(pFVar4 + 0xc) == 'B') {
    *(char **)(pFVar4 + 0xc) = *(char **)(pFVar4 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar4,0);
  }
  uVar3 = local_18;
  pFVar4 = param_1;
  FUN_10126480(local_18,param_1);
  iVar2 = FUN_101b6910(uVar3,pFVar4);
  if (iVar2 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0xc4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101275a7 Catch@101275a7

void Catch_101275a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101275bb Catch@101275bb

void Catch_101275bb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execGetQuestZone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101275e0 UUIDATA_QUEST::execIsValidData

/* public: void __thiscall UUIDATA_QUEST::execIsValidData(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execIsValidData(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1275e0  1510  ?execIsValidData@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102068a0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar4 = 1;
  uVar3 = local_18;
  FUN_10126480(local_18,1);
  piVar2 = (int *)FUN_101b6910(uVar3,uVar4);
  if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    *(undefined4 *)param_2 = 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101276a9 Catch@101276a9

void Catch_101276a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101276bd Catch@101276bd

void Catch_101276bd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execIsValidData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101276e0 UUIDATA_QUEST::execIsMinimapOnly

/* public: void __thiscall UUIDATA_QUEST::execIsMinimapOnly(struct FFrame &,void * const) */

void __thiscall UUIDATA_QUEST::execIsMinimapOnly(UUIDATA_QUEST *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  FFrame *pFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar4 = param_1;
                    /* 0x1276e0  1490  ?execIsMinimapOnly@UUIDATA_QUEST@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102068c0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar4 + 0xc);
  *(byte **)(pFVar4 + 0xc) = *(byte **)(pFVar4 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar4,&param_1);
  *(int *)(pFVar4 + 0xc) = *(int *)(pFVar4 + 0xc) + 1;
  if (**(char **)(pFVar4 + 0xc) == 'B') {
    *(char **)(pFVar4 + 0xc) = *(char **)(pFVar4 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar4,0);
  }
  uVar3 = local_18;
  pFVar4 = param_1;
  FUN_10126480(local_18,param_1);
  iVar2 = FUN_101b6910(uVar3,pFVar4);
  if (iVar2 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x74);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101277bb Catch@101277bb

void Catch_101277bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101277cf Catch@101277cf

void Catch_101277cf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_QUEST::execIsMinimapOnly");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101277f0 UUIDATA_RAID::execGetRaidDescription

/* public: void __thiscall UUIDATA_RAID::execGetRaidDescription(struct FFrame &,void * const) */

void __thiscall
UUIDATA_RAID::execGetRaidDescription(UUIDATA_RAID *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RaidData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1277f0  1326  ?execGetRaidDescription@UUIDATA_RAID@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102068e0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRaidData((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar2 != (FL2RaidData *)0x0) {
    FString::operator=(param_2,(FString *)(pFVar2 + 0x1c));
  }
  ExceptionList = local_10;
  return;
}


// ==== 101278ab Catch@101278ab

void Catch_101278ab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101278bf Catch@101278bf

void Catch_101278bf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RAID::execGetRaidDescription");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101278e0 UUIDATA_RAID::execGetRaidMonsterZone

/* public: void __thiscall UUIDATA_RAID::execGetRaidMonsterZone(struct FFrame &,void * const) */

void __thiscall
UUIDATA_RAID::execGetRaidMonsterZone(UUIDATA_RAID *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RaidData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1278e0  1330  ?execGetRaidMonsterZone@UUIDATA_RAID@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206900;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRaidData((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar2 != (FL2RaidData *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)(pFVar2 + 0xc);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10127996 Catch@10127996

void Catch_10127996(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101279aa Catch@101279aa

void Catch_101279aa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RAID::execGetRaidMonsterZone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101279d0 UUIDATA_RAID::execGetRaidMonsterLevel

/* public: void __thiscall UUIDATA_RAID::execGetRaidMonsterLevel(struct FFrame &,void * const) */

void __thiscall
UUIDATA_RAID::execGetRaidMonsterLevel(UUIDATA_RAID *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RaidData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1279d0  1329  ?execGetRaidMonsterLevel@UUIDATA_RAID@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10206920;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRaidData((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar2 != (FL2RaidData *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)(pFVar2 + 8);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10127a86 Catch@10127a86

void Catch_10127a86(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10127a9a Catch@10127a9a

void Catch_10127a9a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RAID::execGetRaidMonsterLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10127ac0 UUIDATA_RAID::execGetRaidMonsterID

/* public: void __thiscall UUIDATA_RAID::execGetRaidMonsterID(struct FFrame &,void * const) */

void __thiscall UUIDATA_RAID::execGetRaidMonsterID(UUIDATA_RAID *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RaidData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x127ac0  1328  ?execGetRaidMonsterID@UUIDATA_RAID@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206940;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRaidData((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar2 != (FL2RaidData *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)(pFVar2 + 4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10127b76 Catch@10127b76

void Catch_10127b76(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10127b8a Catch@10127b8a

void Catch_10127b8a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RAID::execGetRaidMonsterID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10127bb0 UUIDATA_RAID::execIsValidData

/* public: void __thiscall UUIDATA_RAID::execIsValidData(struct FFrame &,void * const) */

void __thiscall UUIDATA_RAID::execIsValidData(UUIDATA_RAID *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RaidData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x127bb0  1511  ?execIsValidData@UUIDATA_RAID@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206960;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRaidData((FL2GameData *)GL2GameData_exref,local_18);
  if ((pFVar2 == (FL2RaidData *)0x0) || (*(int *)pFVar2 < 1)) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    *(undefined4 *)param_2 = 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10127c77 Catch@10127c77

void Catch_10127c77(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10127c8b Catch@10127c8b

void Catch_10127c8b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RAID::execIsValidData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10127cb0 UUIDATA_RAID::execGetRaidLoc

/* public: void __thiscall UUIDATA_RAID::execGetRaidLoc(struct FFrame &,void * const) */

void __thiscall UUIDATA_RAID::execGetRaidLoc(UUIDATA_RAID *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RaidData *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x127cb0  1327  ?execGetRaidLoc@UUIDATA_RAID@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206980;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRaidData((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar2 != (FL2RaidData *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)(pFVar2 + 0x10);
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(pFVar2 + 0x14);
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)(pFVar2 + 0x18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10127d72 Catch@10127d72

void Catch_10127d72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10127d86 Catch@10127d86

void Catch_10127d86(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RAID::execGetRaidLoc");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10127db0 UUIDATA_RECIPE::execGetRecipeIconName

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeIconName(struct FFrame &,void * const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeIconName(UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RecipeData *pFVar2;
  ushort *puVar3;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x127db0  1335  ?execGetRecipeIconName@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102069a9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRecipeDataByIndex((FL2GameData *)GL2GameData_exref,local_18);
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  if (pFVar2 != (FL2RecipeData *)0x0) {
    puVar3 = L2FName::operator*((L2FName *)(*(int *)pFVar2 + 0x3c));
    FString::operator=(local_2c,puVar3);
  }
  FString::operator=(param_2,local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10127e99 Catch@10127e99

void Catch_10127e99(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10127ead Catch@10127ead

void Catch_10127ead(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeIconName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10127ed0 UUIDATA_RECIPE::execGetRecipeProductID

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeProductID(struct FFrame &,void * const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeProductID(UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RecipeData *pFVar2;
  undefined4 uVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x127ed0  1343  ?execGetRecipeProductID@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102069d0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRecipeDataByIndex((FL2GameData *)GL2GameData_exref,local_18);
  uVar3 = 0xffffffff;
  if (pFVar2 != (FL2RecipeData *)0x0) {
    uVar3 = *(undefined4 *)(pFVar2 + 0x28);
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10127f89 Catch@10127f89

void Catch_10127f89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10127f9d Catch@10127f9d

void Catch_10127f9d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeProductID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10127fc0 UUIDATA_RECIPE::execGetRecipeProductNum

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeProductNum(struct FFrame &,void * const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeProductNum(UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RecipeData *pFVar2;
  undefined4 uVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x127fc0  1344  ?execGetRecipeProductNum@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102069f0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRecipeDataByIndex((FL2GameData *)GL2GameData_exref,local_18);
  uVar3 = 0xffffffff;
  if (pFVar2 != (FL2RecipeData *)0x0) {
    uVar3 = *(undefined4 *)(pFVar2 + 0x2c);
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10128079 Catch@10128079

void Catch_10128079(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012808d Catch@1012808d

void Catch_1012808d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeProductNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101280b0 UUIDATA_RECIPE::execGetRecipeCrystalType

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeCrystalType(struct FFrame &,void * const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeCrystalType(UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  FL2RecipeData *pFVar4;
  undefined4 uVar5;
  uint uStack_34;
  int local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1280b0  1332
                       ?execGetRecipeCrystalType@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206a10;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c[0] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_1c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar4 = FL2GameData::GetRecipeDataByIndex((FL2GameData *)GL2GameData_exref,local_1c[0]);
  uVar5 = 0xffffffff;
  if (pFVar4 != (FL2RecipeData *)0x0) {
    iVar2 = *(int *)pFVar4;
    iVar3 = *(int *)(iVar2 + 4);
    if (iVar3 == 0) {
      uVar5 = *(undefined4 *)(iVar2 + 0x134);
    }
    else if (iVar3 == 1) {
      uVar5 = *(undefined4 *)(iVar2 + 0x5e8);
    }
    else if (iVar3 == 2) {
      uVar5 = *(undefined4 *)(iVar2 + 0x104);
    }
  }
  *(undefined4 *)param_2 = uVar5;
  ExceptionList = local_10;
  return;
}


// ==== 10128195 Catch@10128195

void Catch_10128195(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101281a9 Catch@101281a9

void Catch_101281a9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeCrystalType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101281d0 UUIDATA_RECIPE::execGetRecipeMpConsume

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeMpConsume(struct FFrame &,void * const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeMpConsume(UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RecipeData *pFVar2;
  undefined4 uVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1281d0  1341  ?execGetRecipeMpConsume@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10206a30;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRecipeDataByIndex((FL2GameData *)GL2GameData_exref,local_18);
  uVar3 = 0xffffffff;
  if (pFVar2 != (FL2RecipeData *)0x0) {
    uVar3 = *(undefined4 *)(pFVar2 + 0x30);
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10128289 Catch@10128289

void Catch_10128289(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012829d Catch@1012829d

void Catch_1012829d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeMpConsume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101282c0 UUIDATA_RECIPE::execGetRecipeLevel

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeLevel(struct FFrame &,void * const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeLevel(UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RecipeData *pFVar2;
  undefined4 uVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1282c0  1338  ?execGetRecipeLevel@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206a50;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRecipeDataByIndex((FL2GameData *)GL2GameData_exref,local_18);
  uVar3 = 0xffffffff;
  if (pFVar2 != (FL2RecipeData *)0x0) {
    uVar3 = *(undefined4 *)(pFVar2 + 0x24);
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10128379 Catch@10128379

void Catch_10128379(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012838d Catch@1012838d

void Catch_1012838d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101283b0 UUIDATA_RECIPE::execGetRecipeIndex

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeIndex(struct FFrame &,void * const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeIndex(UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RecipeData *pFVar2;
  undefined4 uVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1283b0  1337  ?execGetRecipeIndex@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206a70;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRecipeDataByIndex((FL2GameData *)GL2GameData_exref,local_18);
  uVar3 = 0xffffffff;
  if (pFVar2 != (FL2RecipeData *)0x0) {
    uVar3 = *(undefined4 *)(pFVar2 + 0x1c);
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10128469 Catch@10128469

void Catch_10128469(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012847d Catch@1012847d

void Catch_1012847d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101284a0 UUIDATA_RECIPE::execGetRecipeClassID

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeClassID(struct FFrame &,void * const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeClassID(UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RecipeData *pFVar2;
  undefined4 uVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1284a0  1331  ?execGetRecipeClassID@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206a90;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRecipeDataByIndex((FL2GameData *)GL2GameData_exref,local_18);
  uVar3 = 0xffffffff;
  if (pFVar2 != (FL2RecipeData *)0x0) {
    uVar3 = *(undefined4 *)(pFVar2 + 0x20);
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10128559 Catch@10128559

void Catch_10128559(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012856d Catch@1012856d

void Catch_1012856d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeClassID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10128590 UUIDATA_RECIPE::execGetRecipeDescription

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeDescription(struct FFrame &,void * const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeDescription(UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RecipeData *pFVar2;
  ushort *puVar3;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x128590  1333
                       ?execGetRecipeDescription@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206ab9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRecipeDataByIndex((FL2GameData *)GL2GameData_exref,local_18);
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  if (pFVar2 != (FL2RecipeData *)0x0) {
    puVar3 = FString::operator*((FString *)(*(int *)pFVar2 + 0x58));
    FString::operator=(local_2c,puVar3);
  }
  FString::operator=(param_2,local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10128679 Catch@10128679

void Catch_10128679(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012868d Catch@1012868d

void Catch_1012868d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeDescription");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101286b0 UUIDATA_RECIPE::execGetRecipeSuccessRate

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeSuccessRate(struct FFrame &,void * const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeSuccessRate(UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2RecipeData *pFVar2;
  undefined4 uVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1286b0  1346
                       ?execGetRecipeSuccessRate@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206ae0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = FL2GameData::GetRecipeDataByIndex((FL2GameData *)GL2GameData_exref,local_18);
  uVar3 = 0xffffffff;
  if (pFVar2 != (FL2RecipeData *)0x0) {
    uVar3 = *(undefined4 *)(pFVar2 + 0x34);
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10128769 Catch@10128769

void Catch_10128769(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012877d Catch@1012877d

void Catch_1012877d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeSuccessRate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101287a0 UUIDATA_RECIPE::execGetRecipeNameBy2Condition

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeNameBy2Condition(struct FFrame &,void *
   const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeNameBy2Condition(UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  FL2RecipeData *pFVar3;
  ushort *puVar4;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x1287a0  1342
                       ?execGetRecipeNameBy2Condition@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206b09;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  pFVar3 = FL2GameData::GetRecipeDataBy2Condition
                     ((FL2GameData *)GL2GameData_exref,local_18,(int)param_1);
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  if ((pFVar3 != (FL2RecipeData *)0x0) && (*(int *)pFVar3 != 0)) {
    puVar4 = L2FName::operator*((L2FName *)(*(int *)pFVar3 + 0x50));
    FString::operator=(local_2c,puVar4);
  }
  FString::operator=(param_2,local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 101288b2 Catch@101288b2

void Catch_101288b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101288c6 Catch@101288c6

void Catch_101288c6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeNameBy2Condition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101288f0 UUIDATA_RECIPE::execGetRecipeIconNameBy2Condition

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeIconNameBy2Condition(struct FFrame &,void *
   const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeIconNameBy2Condition
          (UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  FL2RecipeData *pFVar3;
  ushort *puVar4;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x1288f0  1336
                       ?execGetRecipeIconNameBy2Condition@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206b39;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  pFVar3 = FL2GameData::GetRecipeDataBy2Condition
                     ((FL2GameData *)GL2GameData_exref,local_18,(int)param_1);
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  if ((pFVar3 != (FL2RecipeData *)0x0) && (*(int *)pFVar3 != 0)) {
    puVar4 = L2FName::operator*((L2FName *)(*(int *)pFVar3 + 0x3c));
    FString::operator=(local_2c,puVar4);
  }
  FString::operator=(param_2,local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10128a02 Catch@10128a02

void Catch_10128a02(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10128a16 Catch@10128a16

void Catch_10128a16(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeIconNameBy2Condition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10128a40 UUIDATA_RECIPE::execGetRecipeDescriptionBy2Condition

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeDescriptionBy2Condition(struct FFrame &,void
   * const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeDescriptionBy2Condition
          (UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  FL2RecipeData *pFVar3;
  ushort *puVar4;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x128a40  1334
                       ?execGetRecipeDescriptionBy2Condition@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206b69;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  pFVar3 = FL2GameData::GetRecipeDataBy2Condition
                     ((FL2GameData *)GL2GameData_exref,local_18,(int)param_1);
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  if ((pFVar3 != (FL2RecipeData *)0x0) && (*(int *)pFVar3 != 0)) {
    puVar4 = FString::operator*((FString *)(*(int *)pFVar3 + 0x58));
    FString::operator=(local_2c,puVar4);
  }
  FString::operator=(param_2,local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10128b52 Catch@10128b52

void Catch_10128b52(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10128b66 Catch@10128b66

void Catch_10128b66(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeDescriptionBy2Condition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10128b90 UUIDATA_RECIPE::execGetRecipeMaterialItem

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeMaterialItem(struct FFrame &,void * const)
    */

void __thiscall
UUIDATA_RECIPE::execGetRecipeMaterialItem(UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  FL2RecipeData *pFVar3;
  int iVar4;
  uint uStack_34;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x128b90  1339
                       ?execGetRecipeMaterialItem@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206b90;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  iVar4 = 0;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar3 = FL2GameData::GetRecipeDataByIndex((FL2GameData *)GL2GameData_exref,local_18);
  if (pFVar3 != (FL2RecipeData *)0x0) {
    L2ParamStack::Clear(DAT_103663d4);
    L2ParamStack::PushBack(DAT_103663d4,*(void **)(pFVar3 + 8));
    for (; iVar4 < *(int *)(pFVar3 + 8); iVar4 = iVar4 + 1) {
      puVar2 = *(undefined4 **)(*(int *)(pFVar3 + 4) + iVar4 * 4);
      L2ParamStack::PushBack(DAT_103663d4,(void *)*puVar2);
      L2ParamStack::PushBack(DAT_103663d4,(void *)puVar2[1]);
    }
    *(undefined4 *)param_2 = DAT_103663d0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10128c92 Catch@10128c92

void Catch_10128c92(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10128ca6 Catch@10128ca6

void Catch_10128ca6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeMaterialItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10128cd0 UUIDATA_RECIPE::execGetRecipeMaterialItemBy2Condition

/* public: void __thiscall UUIDATA_RECIPE::execGetRecipeMaterialItemBy2Condition(struct FFrame
   &,void * const) */

void __thiscall
UUIDATA_RECIPE::execGetRecipeMaterialItemBy2Condition
          (UUIDATA_RECIPE *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  FFrame *pFVar3;
  FL2RecipeData *pFVar4;
  int iVar5;
  uint uStack_38;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar3 = param_1;
                    /* 0x128cd0  1340
                       ?execGetRecipeMaterialItemBy2Condition@UUIDATA_RECIPE@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10206bb0;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  iVar5 = 0;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar3 + 0xc);
  *(byte **)(pFVar3 + 0xc) = *(byte **)(pFVar3 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar3,&param_1);
  *(int *)(pFVar3 + 0xc) = *(int *)(pFVar3 + 0xc) + 1;
  if (**(char **)(pFVar3 + 0xc) == 'B') {
    *(char **)(pFVar3 + 0xc) = *(char **)(pFVar3 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar3,0);
  }
  pFVar4 = FL2GameData::GetRecipeDataBy2Condition
                     ((FL2GameData *)GL2GameData_exref,local_18,(int)param_1);
  if ((pFVar4 != (FL2RecipeData *)0x0) && (*(int *)pFVar4 != 0)) {
    L2ParamStack::Clear(DAT_103663d4);
    L2ParamStack::PushBack(DAT_103663d4,*(void **)(pFVar4 + 8));
    for (; iVar5 < *(int *)(pFVar4 + 8); iVar5 = iVar5 + 1) {
      puVar2 = *(undefined4 **)(*(int *)(pFVar4 + 4) + iVar5 * 4);
      L2ParamStack::PushBack(DAT_103663d4,(void *)*puVar2);
      L2ParamStack::PushBack(DAT_103663d4,(void *)0x64);
      L2ParamStack::PushBack(DAT_103663d4,(void *)puVar2[1]);
    }
    *(undefined4 *)param_2 = DAT_103663d0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10128e0c Catch@10128e0c

void Catch_10128e0c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10128e20 Catch@10128e20

void Catch_10128e20(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_RECIPE::execGetRecipeMaterialItemBy2Condition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10128e40 UUIDATA_REFINERYOPTION::execGetQuality

/* public: void __thiscall UUIDATA_REFINERYOPTION::execGetQuality(struct FFrame &,void * const) */

void __thiscall
UUIDATA_REFINERYOPTION::execGetQuality(UUIDATA_REFINERYOPTION *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x128e40  1317  ?execGetQuality@UUIDATA_REFINERYOPTION@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10206bd0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10187a60(&local_18);
  if (iVar2 == 0) {
    *(undefined4 *)param_2 = 0xffffffff;
  }
  else {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10128f06 Catch@10128f06

void Catch_10128f06(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10128f1a Catch@10128f1a

void Catch_10128f1a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_REFINERYOPTION::execGetQuality");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10128f40 UUIDATA_REFINERYOPTION::execGetOptionDescription

/* public: void __thiscall UUIDATA_REFINERYOPTION::execGetOptionDescription(struct FFrame &,void *
   const) */

void __thiscall
UUIDATA_REFINERYOPTION::execGetOptionDescription
          (UUIDATA_REFINERYOPTION *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  FString *this_00;
  uint uStack_58;
  FString local_48 [12];
  FString local_3c [12];
  FString local_30 [20];
  FString *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x128f40  1278
                       ?execGetOptionDescription@UUIDATA_REFINERYOPTION@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206c0b;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_48);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_48);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = (FFrame *)local_48;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  FString::FString(local_3c);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,local_3c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    local_1c = local_3c;
  }
  else {
    local_1c = *(FString **)GPropAddr_exref;
  }
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,local_30);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_30;
  }
  else {
    this_00 = *(FString **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_10187a60(&local_18);
  if (iVar3 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    FString::operator=((FString *)param_1,(FString *)(iVar3 + 0xc));
    FString::operator=(local_1c,(FString *)(iVar3 + 0x18));
    FString::operator=(this_00,(FString *)(iVar3 + 0x24));
    *(undefined4 *)param_2 = 1;
  }
  local_8._0_1_ = 2;
  FString::~FString(local_30);
  local_8._0_1_ = 1;
  FString::~FString(local_3c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_48);
  ExceptionList = local_10;
  return;
}


// ==== 10129175 Catch@10129175

void Catch_10129175(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10129189 Catch@10129189

void Catch_10129189(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_REFINERYOPTION::execGetOptionDescription");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101291b0 UUIDATA_SKILL::execGetFirstID

/* public: void __thiscall UUIDATA_SKILL::execGetFirstID(struct FFrame &,void * const) */

void __thiscall UUIDATA_SKILL::execGetFirstID(UUIDATA_SKILL *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1291b0  1204  ?execGetFirstID@UUIDATA_SKILL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206c30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = FUN_101af670();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 1012923a Catch@1012923a

void Catch_1012923a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012924e Catch@1012924e

void Catch_1012924e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_SKILL::execGetFirstID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129270 UUIDATA_SKILL::execGetNextID

/* public: void __thiscall UUIDATA_SKILL::execGetNextID(struct FFrame &,void * const) */

void __thiscall UUIDATA_SKILL::execGetNextID(UUIDATA_SKILL *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x129270  1271  ?execGetNextID@UUIDATA_SKILL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206c50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = FUN_101af780();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 101292fa Catch@101292fa

void Catch_101292fa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012930e Catch@1012930e

void Catch_1012930e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_SKILL::execGetNextID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129330 UUIDATA_SKILL::execGetName

/* public: void __thiscall UUIDATA_SKILL::execGetName(struct FFrame &,void * const) */

void __thiscall UUIDATA_SKILL::execGetName(UUIDATA_SKILL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  void *this_00;
  ushort *puVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x129330  1266  ?execGetName@UUIDATA_SKILL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206c70;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  this_00 = param_2;
  FString::operator=(param_2,(ushort *)&DAT_1022f9f8);
  if (DAT_103663bc != 0) {
    puVar3 = (ushort *)FUN_10164900(local_18,param_1);
    FString::operator=(this_00,puVar3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10129414 Catch@10129414

void Catch_10129414(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10129428 Catch@10129428

void Catch_10129428(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_SKILL::execGetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129450 UUIDATA_SKILL::execGetIconName

/* public: void __thiscall UUIDATA_SKILL::execGetIconName(struct FFrame &,void * const) */

void __thiscall UUIDATA_SKILL::execGetIconName(UUIDATA_SKILL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  void *this_00;
  ushort *puVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x129450  1220  ?execGetIconName@UUIDATA_SKILL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206c90;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  this_00 = param_2;
  FString::operator=(param_2,(ushort *)&DAT_1022f9f8);
  if (DAT_103663bc != 0) {
    puVar3 = (ushort *)FUN_10164870(local_18,param_1);
    FString::operator=(this_00,puVar3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10129534 Catch@10129534

void Catch_10129534(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10129548 Catch@10129548

void Catch_10129548(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_SKILL::execGetIconName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129570 UUIDATA_SKILL::execGetDescription

/* public: void __thiscall UUIDATA_SKILL::execGetDescription(struct FFrame &,void * const) */

void __thiscall UUIDATA_SKILL::execGetDescription(UUIDATA_SKILL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  void *this_00;
  ushort *puVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x129570  1192  ?execGetDescription@UUIDATA_SKILL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206cb0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  this_00 = param_2;
  FString::operator=(param_2,(ushort *)&DAT_1022f9f8);
  if (DAT_103663bc != 0) {
    puVar3 = (ushort *)FUN_10164990(local_18,param_1);
    FString::operator=(this_00,puVar3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10129654 Catch@10129654

void Catch_10129654(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10129668 Catch@10129668

void Catch_10129668(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_SKILL::execGetDescription");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129690 UUIDATA_SKILL::execGetEnchantName

/* public: void __thiscall UUIDATA_SKILL::execGetEnchantName(struct FFrame &,void * const) */

void __thiscall UUIDATA_SKILL::execGetEnchantName(UUIDATA_SKILL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  void *this_00;
  FL2MagicSkillData *pFVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x129690  1194  ?execGetEnchantName@UUIDATA_SKILL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206cd0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  this_00 = param_2;
  FString::operator=(param_2,(ushort *)&DAT_1022f9f8);
  pFVar3 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,local_18,(int)param_1);
  if ((pFVar3 != (FL2MagicSkillData *)0x0) && (*(int *)(pFVar3 + 0x68) != 0)) {
    FString::operator=(this_00,(FString *)(pFVar3 + 0x50));
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012977d Catch@1012977d

void Catch_1012977d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10129791 Catch@10129791

void Catch_10129791(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_SKILL::execGetEnchantName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101297b0 UUIDATA_SKILL::execGetEnchantSkillLevel

/* public: void __thiscall UUIDATA_SKILL::execGetEnchantSkillLevel(struct FFrame &,void * const) */

void __thiscall
UUIDATA_SKILL::execGetEnchantSkillLevel(UUIDATA_SKILL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  void *pvVar3;
  FL2MagicSkillData *pFVar4;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1297b0  1195  ?execGetEnchantSkillLevel@UUIDATA_SKILL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10206cf0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  pvVar3 = param_2;
  *(undefined4 *)param_2 = 0;
  pFVar4 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,local_18,(int)param_1);
  if ((pFVar4 != (FL2MagicSkillData *)0x0) && (*(int *)(pFVar4 + 0x68) != 0)) {
    *(undefined4 *)pvVar3 = *(undefined4 *)(pFVar4 + 0x6c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012988b Catch@1012988b

void Catch_1012988b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012989f Catch@1012989f

void Catch_1012989f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_SKILL::execGetEnchantSkillLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101298c0 UUIDATA_SKILL::execGetOperateType

/* public: void __thiscall UUIDATA_SKILL::execGetOperateType(struct FFrame &,void * const) */

void __thiscall UUIDATA_SKILL::execGetOperateType(UUIDATA_SKILL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  ushort *puVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1298c0  1276  ?execGetOperateType@UUIDATA_SKILL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206d10;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  puVar3 = (ushort *)FUN_10164b40(local_18,param_1);
  FString::operator=(param_2,puVar3);
  ExceptionList = local_10;
  return;
}


// ==== 10129991 Catch@10129991

void Catch_10129991(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101299a5 Catch@101299a5

void Catch_101299a5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_SKILL::execGetOperateType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101299d0 UUIDATA_SKILL::execGetHpConsume

/* public: void __thiscall UUIDATA_SKILL::execGetHpConsume(struct FFrame &,void * const) */

void __thiscall UUIDATA_SKILL::execGetHpConsume(UUIDATA_SKILL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1299d0  1210  ?execGetHpConsume@UUIDATA_SKILL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206d30;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  uVar3 = FUN_10164bd0(local_18,param_1);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10129a9c Catch@10129a9c

void Catch_10129a9c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10129ab0 Catch@10129ab0

void Catch_10129ab0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_SKILL::execGetHpConsume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129ad0 UUIDATA_SKILL::execGetMpConsume

/* public: void __thiscall UUIDATA_SKILL::execGetMpConsume(struct FFrame &,void * const) */

void __thiscall UUIDATA_SKILL::execGetMpConsume(UUIDATA_SKILL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x129ad0  1260  ?execGetMpConsume@UUIDATA_SKILL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206d50;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  uVar3 = FUN_10164c60(local_18,param_1);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10129b9c Catch@10129b9c

void Catch_10129b9c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10129bb0 Catch@10129bb0

void Catch_10129bb0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_SKILL::execGetMpConsume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129bd0 UUIDATA_SKILL::execGetCastRange

/* public: void __thiscall UUIDATA_SKILL::execGetCastRange(struct FFrame &,void * const) */

void __thiscall UUIDATA_SKILL::execGetCastRange(UUIDATA_SKILL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x129bd0  1163  ?execGetCastRange@UUIDATA_SKILL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206d70;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  uVar3 = FUN_10164cf0(local_18,param_1);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10129c9c Catch@10129c9c

void Catch_10129c9c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10129cb0 Catch@10129cb0

void Catch_10129cb0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_SKILL::execGetCastRange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129cd0 UUIDATA_SKILL::execGetDataCount

/* public: void __thiscall UUIDATA_SKILL::execGetDataCount(struct FFrame &,void * const) */

void __thiscall UUIDATA_SKILL::execGetDataCount(UUIDATA_SKILL *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x129cd0  1190  ?execGetDataCount@UUIDATA_SKILL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206d90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = *(undefined4 *)(*(int *)(GL2GameData_exref + 0x3d08) + 4);
  ExceptionList = local_10;
  return;
}


// ==== 10129d58 Catch@10129d58

void Catch_10129d58(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10129d6c Catch@10129d6c

void Catch_10129d6c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_SKILL::execGetDataCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129d90 UUIDATA_STATICOBJECT::execGetServerObjectNameID

/* public: void __thiscall UUIDATA_STATICOBJECT::execGetServerObjectNameID(struct FFrame &,void *
   const) */

void __thiscall
UUIDATA_STATICOBJECT::execGetServerObjectNameID
          (UUIDATA_STATICOBJECT *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x129d90  1383
                       ?execGetServerObjectNameID@UUIDATA_STATICOBJECT@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206db0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = 0;
  iVar2 = FUN_10145920(local_18);
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10129e47 Catch@10129e47

void Catch_10129e47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10129e5b Catch@10129e5b

void Catch_10129e5b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_STATICOBJECT::execGetServerObjectNameID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129e80 UUIDATA_STATICOBJECT::execGetServerObjectType

/* public: void __thiscall UUIDATA_STATICOBJECT::execGetServerObjectType(struct FFrame &,void *
   const) */

void __thiscall
UUIDATA_STATICOBJECT::execGetServerObjectType
          (UUIDATA_STATICOBJECT *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x129e80  1384
                       ?execGetServerObjectType@UUIDATA_STATICOBJECT@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206dd0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar3 = 0;
  piVar2 = (int *)FUN_10145920(local_18);
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2 + 1;
  }
  *(int *)param_2 = iVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10129f39 Catch@10129f39

void Catch_10129f39(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10129f4d Catch@10129f4d

void Catch_10129f4d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_STATICOBJECT::execGetServerObjectType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129f70 UUIDATA_STATICOBJECT::execGetServerObjectMaxHP

/* public: void __thiscall UUIDATA_STATICOBJECT::execGetServerObjectMaxHP(struct FFrame &,void *
   const) */

void __thiscall
UUIDATA_STATICOBJECT::execGetServerObjectMaxHP
          (UUIDATA_STATICOBJECT *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x129f70  1382
                       ?execGetServerObjectMaxHP@UUIDATA_STATICOBJECT@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206df0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = 0;
  iVar2 = FUN_10145920(local_18);
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0x10);
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 1012a027 Catch@1012a027

void Catch_1012a027(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012a03b Catch@1012a03b

void Catch_1012a03b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_STATICOBJECT::execGetServerObjectMaxHP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012a060 UUIDATA_STATICOBJECT::execGetServerObjectHP

/* public: void __thiscall UUIDATA_STATICOBJECT::execGetServerObjectHP(struct FFrame &,void * const)
    */

void __thiscall
UUIDATA_STATICOBJECT::execGetServerObjectHP
          (UUIDATA_STATICOBJECT *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12a060  1381
                       ?execGetServerObjectHP@UUIDATA_STATICOBJECT@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206e10;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = 0;
  iVar2 = FUN_10145920(local_18);
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 1012a117 Catch@1012a117

void Catch_1012a117(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012a12b Catch@1012a12b

void Catch_1012a12b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_STATICOBJECT::execGetServerObjectHP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012a150 UUIDATA_STATICOBJECT::execGetStaticObjectName

/* public: void __thiscall UUIDATA_STATICOBJECT::execGetStaticObjectName(struct FFrame &,void *
   const) */

void __thiscall
UUIDATA_STATICOBJECT::execGetStaticObjectName
          (UUIDATA_STATICOBJECT *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x12a150  1396
                       ?execGetStaticObjectName@UUIDATA_STATICOBJECT@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206e39;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FL2GameData::GetStaticObjectName((FL2GameData *)GL2GameData_exref,local_18);
  FString::FString(local_2c,puVar2);
  local_8._0_1_ = 1;
  FString::operator=(param_2,local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1012a21a Catch@1012a21a

void Catch_1012a21a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012a22e Catch@1012a22e

void Catch_1012a22e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_STATICOBJECT::execGetStaticObjectName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012a250 UUIDATA_STATICOBJECT::execGetStaticObjectShowHP

/* public: void __thiscall UUIDATA_STATICOBJECT::execGetStaticObjectShowHP(struct FFrame &,void *
   const) */

void __thiscall
UUIDATA_STATICOBJECT::execGetStaticObjectShowHP
          (UUIDATA_STATICOBJECT *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12a250  1397
                       ?execGetStaticObjectShowHP@UUIDATA_STATICOBJECT@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206e60;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 0;
  iVar2 = FUN_10145920(local_18);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x14) == 1)) {
    *(undefined4 *)param_2 = 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012a310 Catch@1012a310

void Catch_1012a310(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012a324 Catch@1012a324

void Catch_1012a324(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_STATICOBJECT::execGetStaticObjectShowHP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012a350 UUIDATA_TARGET::execGetTargetID

/* public: void __thiscall UUIDATA_TARGET::execGetTargetID(struct FFrame &,void * const) */

void __thiscall UUIDATA_TARGET::execGetTargetID(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12a350  1408  ?execGetTargetID@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206e80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_1014ddd0();
  iVar2 = FUN_1014df70();
  iVar3 = FUN_1014deb0();
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x18);
    if (*(int *)(iVar1 + 0x18) != 0) goto LAB_1012a3f7;
  }
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + 0x60);
    if (*(int *)(iVar2 + 0x60) != 0) goto LAB_1012a3f7;
  }
  iVar4 = iVar3;
LAB_1012a3f7:
  *(int *)param_2 = iVar4;
  ExceptionList = local_10;
  return;
}


// ==== 1012a417 Catch@1012a417

void Catch_1012a417(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012a42b Catch@1012a42b

void Catch_1012a42b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execGetTargetID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012a450 UUIDATA_TARGET::execGetTargetUserRank

/* public: void __thiscall UUIDATA_TARGET::execGetTargetUserRank(struct FFrame &,void * const) */

void __thiscall
UUIDATA_TARGET::execGetTargetUserRank(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12a450  1418  ?execGetTargetUserRank@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10206ea0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1014ddd0();
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x30c);
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1012a4e1 Catch@1012a4e1

void Catch_1012a4e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012a4f5 Catch@1012a4f5

void Catch_1012a4f5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execGetTargetUserRank");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012a520 UUIDATA_TARGET::execGetTargetName

/* public: void __thiscall UUIDATA_TARGET::execGetTargetName(struct FFrame &,void * const) */

void __thiscall
UUIDATA_TARGET::execGetTargetName(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  User *this_00;
  ushort *puVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12a520  1415  ?execGetTargetName@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206ec9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_38;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8 = CONCAT31(local_8._1_3_,1);
  this_00 = (User *)FUN_1014ddd0();
  if (this_00 != (User *)0x0) {
    puVar2 = User::GetName(this_00);
    FString::operator=(local_28,puVar2);
  }
  FString::operator=(param_2,local_28);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1012a5e4 Catch@1012a5e4

void Catch_1012a5e4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012a5f8 Catch@1012a5f8

void Catch_1012a5f8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execGetTargetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012a620 UUIDATA_TARGET::execGetTargetMaxHP

/* public: void __thiscall UUIDATA_TARGET::execGetTargetMaxHP(struct FFrame &,void * const) */

void __thiscall
UUIDATA_TARGET::execGetTargetMaxHP(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12a620  1412  ?execGetTargetMaxHP@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206ef0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1014ddd0();
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x7c);
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1012a6ae Catch@1012a6ae

void Catch_1012a6ae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012a6c2 Catch@1012a6c2

void Catch_1012a6c2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execGetTargetMaxHP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012a6e0 UUIDATA_TARGET::execGetTargetHP

/* public: void __thiscall UUIDATA_TARGET::execGetTargetHP(struct FFrame &,void * const) */

void __thiscall UUIDATA_TARGET::execGetTargetHP(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12a6e0  1407  ?execGetTargetHP@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206f10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1014ddd0();
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x80);
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1012a771 Catch@1012a771

void Catch_1012a771(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012a785 Catch@1012a785

void Catch_1012a785(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execGetTargetHP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012a7b0 UUIDATA_TARGET::execGetTargetMaxMP

/* public: void __thiscall UUIDATA_TARGET::execGetTargetMaxMP(struct FFrame &,void * const) */

void __thiscall
UUIDATA_TARGET::execGetTargetMaxMP(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12a7b0  1413  ?execGetTargetMaxMP@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206f30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1014ddd0();
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x84);
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1012a841 Catch@1012a841

void Catch_1012a841(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012a855 Catch@1012a855

void Catch_1012a855(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execGetTargetMaxMP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012a880 UUIDATA_TARGET::execGetTargetMP

/* public: void __thiscall UUIDATA_TARGET::execGetTargetMP(struct FFrame &,void * const) */

void __thiscall UUIDATA_TARGET::execGetTargetMP(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12a880  1411  ?execGetTargetMP@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206f50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1014ddd0();
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x88);
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1012a911 Catch@1012a911

void Catch_1012a911(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012a925 Catch@1012a925

void Catch_1012a925(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execGetTargetMP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012a950 UUIDATA_TARGET::execGetTargetNameColor

/* public: void __thiscall UUIDATA_TARGET::execGetTargetNameColor(struct FFrame &,void * const) */

void __thiscall
UUIDATA_TARGET::execGetTargetNameColor(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  ulong uVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x12a950  1416  ?execGetTargetNameColor@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10206f70;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  if (local_18 < -8) {
    uVar3 = 0xffff0000;
  }
  else if (local_18 < -5) {
    uVar3 = 0xffff9191;
  }
  else if (local_18 < -2) {
    uVar3 = 0xfffafe91;
  }
  else if (local_18 < 3) {
    uVar3 = 0xffdcdcdc;
  }
  else if (local_18 < 6) {
    uVar3 = 0xffa2ffab;
  }
  else {
    uVar3 = ((8 < local_18) - 1 & 0xa2a7fd) - 0xffff01;
  }
  FColor::FColor((FColor *)&param_1,uVar3);
  *(FFrame **)param_2 = param_1;
  ExceptionList = local_10;
  return;
}


// ==== 1012aa54 Catch@1012aa54

void Catch_1012aa54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012aa68 Catch@1012aa68

void Catch_1012aa68(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execGetTargetNameColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012aa90 UUIDATA_TARGET::execGetTargetPledgeID

/* public: void __thiscall UUIDATA_TARGET::execGetTargetPledgeID(struct FFrame &,void * const) */

void __thiscall
UUIDATA_TARGET::execGetTargetPledgeID(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  User *this_00;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12aa90  1417  ?execGetTargetPledgeID@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10206f90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = 0;
  this_00 = (User *)FUN_1014ddd0();
  if (this_00 != (User *)0x0) {
    iVar1 = User::GetPledgeID(this_00);
  }
  *(int *)param_2 = iVar1;
  ExceptionList = local_10;
  return;
}


// ==== 1012ab25 Catch@1012ab25

void Catch_1012ab25(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012ab39 Catch@1012ab39

void Catch_1012ab39(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execGetTargetPledgeID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ab60 UUIDATA_TARGET::execGetTargetClassID

/* public: void __thiscall UUIDATA_TARGET::execGetTargetClassID(struct FFrame &,void * const) */

void __thiscall
UUIDATA_TARGET::execGetTargetClassID(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12ab60  1406  ?execGetTargetClassID@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206fb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1014ddd0();
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1012abee Catch@1012abee

void Catch_1012abee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012ac02 Catch@1012ac02

void Catch_1012ac02(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execGetTargetClassID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ac20 UUIDATA_TARGET::execIsServerObject

/* public: void __thiscall UUIDATA_TARGET::execIsServerObject(struct FFrame &,void * const) */

void __thiscall
UUIDATA_TARGET::execIsServerObject(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12ac20  1501  ?execIsServerObject@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206fd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = 0;
  iVar1 = FUN_1014ddd0();
  iVar2 = FUN_1014df70();
  if ((iVar1 == 0) && (iVar2 != 0)) {
    iVar1 = FUN_10145920(*(undefined4 *)(iVar2 + 0x60));
    if (iVar1 != 0) {
      uVar3 = 1;
    }
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 1012acda Catch@1012acda

void Catch_1012acda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012acee Catch@1012acee

void Catch_1012acee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execIsServerObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ad10 UUIDATA_TARGET::execIsNpc

/* public: void __thiscall UUIDATA_TARGET::execIsNpc(struct FFrame &,void * const) */

void __thiscall UUIDATA_TARGET::execIsNpc(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12ad10  1494  ?execIsNpc@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10206ff0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1014ddd0();
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1012ad9e Catch@1012ad9e

void Catch_1012ad9e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012adb2 Catch@1012adb2

void Catch_1012adb2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execIsNpc");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012add0 UUIDATA_TARGET::execIsPet

/* public: void __thiscall UUIDATA_TARGET::execIsPet(struct FFrame &,void * const) */

void __thiscall UUIDATA_TARGET::execIsPet(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12add0  1499  ?execIsPet@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207010;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1014ddd0();
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1012ae5e Catch@1012ae5e

void Catch_1012ae5e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012ae72 Catch@1012ae72

void Catch_1012ae72(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execIsPet");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ae90 UUIDATA_TARGET::execIsCanBeAttacked

/* public: void __thiscall UUIDATA_TARGET::execIsCanBeAttacked(struct FFrame &,void * const) */

void __thiscall
UUIDATA_TARGET::execIsCanBeAttacked(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12ae90  1469  ?execIsCanBeAttacked@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207030;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1014ddd0();
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1012af1e Catch@1012af1e

void Catch_1012af1e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012af32 Catch@1012af32

void Catch_1012af32(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execIsCanBeAttacked");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012af50 UUIDATA_TARGET::execIsHPShowableNPC

/* public: void __thiscall UUIDATA_TARGET::execIsHPShowableNPC(struct FFrame &,void * const) */

void __thiscall
UUIDATA_TARGET::execIsHPShowableNPC(UUIDATA_TARGET *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12af50  1486  ?execIsHPShowableNPC@UUIDATA_TARGET@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207050;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1014ddd0();
  if (iVar1 != 0) {
    uVar2 = FUN_10164e50(*(undefined4 *)(iVar1 + 0x14));
    uVar2 = uVar2 & 0xff;
  }
  *(uint *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1012afed Catch@1012afed

void Catch_1012afed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012b001 Catch@1012b001

void Catch_1012b001(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_TARGET::execIsHPShowableNPC");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012b020 UUIDATA_USER::execGetUserName

/* public: void __thiscall UUIDATA_USER::execGetUserName(struct FFrame &,void * const) */

void __thiscall UUIDATA_USER::execGetUserName(UUIDATA_USER *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  User *this_00;
  ushort *puVar2;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12b020  1435  ?execGetUserName@UUIDATA_USER@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207079;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8 = CONCAT31(local_8._1_3_,1);
  this_00 = (User *)FUN_10145910(local_18);
  if (this_00 != (User *)0x0) {
    puVar2 = User::GetName(this_00);
    if (puVar2 != (ushort *)0x0) {
      puVar2 = User::GetName(this_00);
      FString::operator=(local_2c,puVar2);
    }
  }
  FString::operator=(param_2,local_2c);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1012b10f Catch@1012b10f

void Catch_1012b10f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012b123 Catch@1012b123

void Catch_1012b123(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_USER::execGetUserName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012b140 UUIDATA_USER::execGetClanType

/* public: void __thiscall UUIDATA_USER::execGetClanType(struct FFrame &,void * const) */

void __thiscall UUIDATA_USER::execGetClanType(UUIDATA_USER *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  void *pvVar3;
  User *this_00;
  int iVar4;
  uint uStack_34;
  FFrame **local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x12b140  1169  ?execGetClanType@UUIDATA_USER@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102070a0;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    local_1c = &param_1;
  }
  else {
    local_1c = *(FFrame ***)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  pvVar3 = param_2;
  *(undefined4 *)param_2 = 0;
  this_00 = (User *)FUN_10145910(local_18);
  if (this_00 != (User *)0x0) {
    iVar4 = User::GetPledgeID(this_00);
    if (0 < iVar4) {
      *local_1c = *(FFrame **)(this_00 + 0x310);
      *(undefined4 *)pvVar3 = 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012b266 Catch@1012b266

void Catch_1012b266(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1012b27a Catch@1012b27a

void Catch_1012b27a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIDATA_USER::execGetClanType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012b2a0 FUN_1012b2a0

UObject * FUN_1012b2a0(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UParamStack::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1012b2d0 UUIDataManager::Initialize

/* public: virtual void __thiscall UUIDataManager::Initialize(void) */

void __thiscall UUIDataManager::Initialize(UUIDataManager *this)

{
  UClass *pUVar1;
  UPackage *pUVar2;
  L2ParamStack *this_00;
  void *unaff_ESI;
  UObject *pUVar3;
  wchar_t *pwVar4;
  ushort *puVar5;
  ulong uVar6;
  UPackageMap *pUVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x12b2d0  693  ?Initialize@UUIDataManager@@UAEXXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_102070cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pUVar7 = (UPackageMap *)0x0;
  uVar6 = 0x4000000;
  puVar5 = (ushort *)0x0;
  pwVar4 = L"Core.ParamStack";
  pUVar3 = (UObject *)0x0;
  pUVar1 = UParamStack::StaticClass();
  pUVar1 = UObject::StaticLoadClass(pUVar1,pUVar3,(ushort *)pwVar4,puVar5,uVar6,pUVar7);
  if (pUVar1 == (UClass *)0x0) {
    appFailAssert("pParamStackClass",".\\UIScript\\UIDATANatve.cpp",10);
    ExceptionList = local_c;
    return;
  }
  FName::FName((FName *)&stack0xffffffd4,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticConstructObject(pUVar1,pUVar2);
  DAT_103663d0 = FUN_1012b2a0(pUVar3);
  UObject::AddToRoot((UObject *)DAT_103663d0);
  this_00 = (L2ParamStack *)(**(code **)**(undefined4 **)GMalloc_exref)();
  local_c = (void *)0x0;
  if (this_00 == (L2ParamStack *)0x0) {
    DAT_103663d4 = 0;
  }
  else {
    DAT_103663d4 = L2ParamStack::L2ParamStack(this_00,100);
  }
  if ((DAT_103663d0 != 0) && (DAT_103663d4 != 0)) {
    *(int *)(DAT_103663d0 + 0x34) = DAT_103663d4;
  }
  ExceptionList = unaff_ESI;
  return;
}


// ==== 1012b3f0 UUIDataManager::UIDataManagerDestroy

/* public: void __thiscall UUIDataManager::UIDataManagerDestroy(void) */

void __thiscall UUIDataManager::UIDataManagerDestroy(UUIDataManager *this)

{
  int iVar1;
  
                    /* 0x12b3f0  1008  ?UIDataManagerDestroy@UUIDataManager@@QAEXXZ */
  if (DAT_103663d4 != 0) {
    L2ParamStack::Clear((L2ParamStack *)DAT_103663d4);
    iVar1 = DAT_103663d4;
    if (DAT_103663d4 != 0) {
      L2ParamStack::~L2ParamStack((L2ParamStack *)DAT_103663d4);
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
    }
    DAT_103663d4 = 0;
  }
  return;
}


// ==== 1012b430 FUN_1012b430

UObject * FUN_1012b430(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10356e10);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1012b460 UAnimTextureHandle::execSetLoopCount

/* public: void __thiscall UAnimTextureHandle::execSetLoopCount(struct FFrame &,void * const) */

void __thiscall
UAnimTextureHandle::execSetLoopCount(UAnimTextureHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12b460  1757  ?execSetLoopCount@UAnimTextureHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102070f0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1012b430(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_10001e30(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012b517 Catch@1012b517

void Catch_1012b517(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012b52b Catch@1012b52b

void Catch_1012b52b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UAnimTextureHandle::execSetLoopCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012b550 UAnimTextureHandle::execPlay

/* public: void __thiscall UAnimTextureHandle::execPlay(struct FFrame &,void * const) */

void __thiscall UAnimTextureHandle::execPlay(UAnimTextureHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12b550  1545  ?execPlay@UAnimTextureHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207110;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_1012b430(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    FUN_10001c70();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012b5de Catch@1012b5de

void Catch_1012b5de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012b5f2 Catch@1012b5f2

void Catch_1012b5f2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UAnimTextureHandle::execPlay");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012b610 UAnimTextureHandle::execPause

/* public: void __thiscall UAnimTextureHandle::execPause(struct FFrame &,void * const) */

void __thiscall
UAnimTextureHandle::execPause(UAnimTextureHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12b610  1544  ?execPause@UAnimTextureHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207130;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_1012b430(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    FUN_10001d10();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012b69e Catch@1012b69e

void Catch_1012b69e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012b6b2 Catch@1012b6b2

void Catch_1012b6b2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UAnimTextureHandle::execPause");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012b6d0 UAnimTextureHandle::execStop

/* public: void __thiscall UAnimTextureHandle::execStop(struct FFrame &,void * const) */

void __thiscall UAnimTextureHandle::execStop(UAnimTextureHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12b6d0  1861  ?execStop@UAnimTextureHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207150;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_1012b430(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    FUN_10001da0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012b75e Catch@1012b75e

void Catch_1012b75e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012b772 Catch@1012b772

void Catch_1012b772(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UAnimTextureHandle::execStop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012b790 UBarHandle::execSetValue

/* public: void __thiscall UBarHandle::execSetValue(struct FFrame &,void * const) */

void __thiscall UBarHandle::execSetValue(UBarHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x12b790  1838  ?execSetValue@UBarHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207170;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_1010a710(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_10002d70(local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012b865 Catch@1012b865

void Catch_1012b865(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012b879 Catch@1012b879

void Catch_1012b879(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UBarHandle::execSetValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012b8a0 UBarHandle::execGetValue

/* public: void __thiscall UBarHandle::execGetValue(struct FFrame &,void * const) */

void __thiscall UBarHandle::execGetValue(UBarHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uStack_38;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x12b8a0  1437  ?execGetValue@UBarHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207190;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = (FFrame *)&local_18;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  local_1c = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar4 = &local_1c;
  }
  else {
    puVar4 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_1010a710(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_10002e00(param_1,puVar4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012b9df Catch@1012b9df

void Catch_1012b9df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1012b9f3 Catch@1012b9f3

void Catch_1012b9f3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UBarHandle::execGetValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ba10 UBarHandle::execClear

/* public: void __thiscall UBarHandle::execClear(struct FFrame &,void * const) */

void __thiscall UBarHandle::execClear(UBarHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12ba10  1088  ?execClear@UBarHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102071b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_1010a710(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x174))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012baa3 Catch@1012baa3

void Catch_1012baa3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012bab7 Catch@1012bab7

void Catch_1012bab7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UBarHandle::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012bae0 UButtonHandle::execGetButtonName

/* public: void __thiscall UButtonHandle::execGetButtonName(struct FFrame &,void * const) */

void __thiscall UButtonHandle::execGetButtonName(UButtonHandle *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  FString *pFVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x12bae0  1162  ?execGetButtonName@UButtonHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102071d9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_38;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_10115d90(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    pFVar3 = (FString *)FUN_10003c50(local_28);
    local_8._0_1_ = 1;
    FString::operator=(param_2,pFVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012bb8f Catch@1012bb8f

void Catch_1012bb8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012bba3 Catch@1012bba3

void Catch_1012bba3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UButtonHandle::execGetButtonName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012bbc0 UButtonHandle::execSetButtonName

/* public: void __thiscall UButtonHandle::execSetButtonName(struct FFrame &,void * const) */

void __thiscall UButtonHandle::execSetButtonName(UButtonHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12bbc0  1717  ?execSetButtonName@UButtonHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207200;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115d90(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_10003cf0(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012bc77 Catch@1012bc77

void Catch_1012bc77(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012bc8b Catch@1012bc8b

void Catch_1012bc8b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UButtonHandle::execSetButtonName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012bcb0 UButtonHandle::execSetTexture

/* public: void __thiscall UButtonHandle::execSetTexture(struct FFrame &,void * const) */

void __thiscall UButtonHandle::execSetTexture(UButtonHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x12bcb0  1811  ?execSetTexture@UButtonHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020723b;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_40);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_40);
  FString::FString(local_34);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115d90(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    iVar2 = FString::Len(local_40);
    if (0 < iVar2) {
      FUN_10003e80(local_40);
    }
    iVar2 = FString::Len(local_34);
    if (0 < iVar2) {
      FUN_10003f50(local_34);
    }
    iVar2 = FString::Len(local_28);
    if (0 < iVar2) {
      FUN_10004010(local_28);
    }
  }
  local_8._0_1_ = 2;
  FString::~FString(local_28);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_40);
  ExceptionList = local_10;
  return;
}


// ==== 1012be27 Catch@1012be27

void Catch_1012be27(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012be3b Catch@1012be3b

void Catch_1012be3b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UButtonHandle::execSetTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012be60 FUN_1012be60

UObject * FUN_1012be60(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1039d590);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1012be90 UChatWindowHandle::execEnableTexture

/* public: void __thiscall UChatWindowHandle::execEnableTexture(struct FFrame &,void * const) */

void __thiscall
UChatWindowHandle::execEnableTexture(UChatWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12be90  1140  ?execEnableTexture@UChatWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207260;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1012be60(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_10137420(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012bf47 Catch@1012bf47

void Catch_1012bf47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012bf5b Catch@1012bf5b

void Catch_1012bf5b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UChatWindowHandle::execEnableTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012bf80 UChatWindowHandle::execSetScrollBarPosition

/* public: void __thiscall UChatWindowHandle::execSetScrollBarPosition(struct FFrame &,void * const)
    */

void __thiscall
UChatWindowHandle::execSetScrollBarPosition(UChatWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int *piVar3;
  uint uStack_34;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x12bf80  1790
                       ?execSetScrollBarPosition@UChatWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207280;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  piVar3 = (int *)FUN_1012be60(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x20c))(local_1c,local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012c07f Catch@1012c07f

void Catch_1012c07f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1012c093 Catch@1012c093

void Catch_1012c093(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UChatWindowHandle::execSetScrollBarPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012c0b0 UCheckBoxHandle::execSetTitle

/* public: void __thiscall UCheckBoxHandle::execSetTitle(struct FFrame &,void * const) */

void __thiscall UCheckBoxHandle::execSetTitle(UCheckBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uStack_38;
  FFrame *pFStack_34;
  undefined4 uStack_30;
  FFrame *pFStack_2c;
  FString *pFStack_28;
  uint uStack_24;
  FString local_18 [4];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 *local_4;
  
                    /* 0x12c0b0  1823  ?execSetTitle@UCheckBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  local_4 = (undefined1 *)0xffffffff;
  puStack_8 = &LAB_102072b2;
  local_c = ExceptionList;
  uStack_24 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  pFStack_28 = (FString *)0x1012c0e1;
  FString::FString(local_18);
  local_4 = (undefined1 *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_28 = local_18;
  pFStack_2c = param_1;
  uStack_30 = 0x1012c10c;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_30 = 0;
    pFStack_34 = param_1;
    uStack_38 = 0x1012c131;
    (**(code **)(GNatives_exref + 0x108))();
  }
  uStack_30 = *(undefined4 *)(this + 0x34);
  pFStack_34 = (FFrame *)0x1012c13a;
  iVar2 = FUN_10115e20();
  if (iVar2 != 0) {
    local_4 = (undefined1 *)&uStack_38;
    FString::FString((FString *)&uStack_38,(FString *)&stack0xffffffe0);
    local_c = (void *)((uint)local_c & 0xffffff00);
    FUN_10115d30();
  }
  local_c = (void *)0xffffffff;
  uStack_30 = 0x1012c17a;
  FString::~FString((FString *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 1012c190 UCheckBoxHandle::execSetCheck

/* public: void __thiscall UCheckBoxHandle::execSetCheck(struct FFrame &,void * const) */

void __thiscall UCheckBoxHandle::execSetCheck(UCheckBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 local_4;
  
                    /* 0x12c190  1720  ?execSetCheck@UCheckBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115e20(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x2fc) = unaff_EDI;
  }
  return;
}


// ==== 1012c210 UCheckBoxHandle::execIsChecked

/* public: void __thiscall UCheckBoxHandle::execIsChecked(struct FFrame &,void * const) */

void __thiscall UCheckBoxHandle::execIsChecked(UCheckBoxHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  
                    /* 0x12c210  1471  ?execIsChecked@UCheckBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_10115e20(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar1 + 0x2fc);
  }
  return;
}


// ==== 1012c260 UCheckBoxHandle::execIsDisable

/* public: void __thiscall UCheckBoxHandle::execIsDisable(struct FFrame &,void * const) */

void __thiscall UCheckBoxHandle::execIsDisable(UCheckBoxHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  
                    /* 0x12c260  1476  ?execIsDisable@UCheckBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_10115e20(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar1 + 0x300);
  }
  return;
}


// ==== 1012c2b0 UCheckBoxHandle::execSetDisable

/* public: void __thiscall UCheckBoxHandle::execSetDisable(struct FFrame &,void * const) */

void __thiscall UCheckBoxHandle::execSetDisable(UCheckBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 local_4;
  
                    /* 0x12c2b0  1725  ?execSetDisable@UCheckBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115e20(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x300) = unaff_EDI;
  }
  return;
}


// ==== 1012c330 UCheckBoxHandle::execToggleDisable

/* public: void __thiscall UCheckBoxHandle::execToggleDisable(struct FFrame &,void * const) */

void __thiscall
UCheckBoxHandle::execToggleDisable(UCheckBoxHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  
                    /* 0x12c330  1867  ?execToggleDisable@UCheckBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_10115e20(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x300) = (uint)(*(int *)(iVar1 + 0x300) == 0);
  }
  return;
}


// ==== 1012c390 UComboBoxHandle::execAddString

/* public: void __thiscall UComboBoxHandle::execAddString(struct FFrame &,void * const) */

void __thiscall UComboBoxHandle::execAddString(UComboBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12c390  1063  ?execAddString@UComboBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102072d9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115df0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    puVar3 = FString::operator*(local_28);
    FUN_1000b3d0(puVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1012c463 Catch@1012c463

void Catch_1012c463(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012c477 Catch@1012c477

void Catch_1012c477(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UComboBoxHandle::execAddString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012c4a0 UComboBoxHandle::execSYS_AddString

/* public: void __thiscall UComboBoxHandle::execSYS_AddString(struct FFrame &,void * const) */

void __thiscall
UComboBoxHandle::execSYS_AddString(UComboBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12c4a0  1703  ?execSYS_AddString@UComboBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207300;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115df0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_1000b110(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012c557 Catch@1012c557

void Catch_1012c557(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012c56b Catch@1012c56b

void Catch_1012c56b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UComboBoxHandle::execSYS_AddString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012c590 UComboBoxHandle::execAddStringWithReserved

/* public: void __thiscall UComboBoxHandle::execAddStringWithReserved(struct FFrame &,void * const)
    */

void __thiscall
UComboBoxHandle::execAddStringWithReserved(UComboBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  uint uStack_40;
  FString local_30 [20];
  UComboBoxHandle *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12c590  1070
                       ?execAddStringWithReserved@UComboBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207329;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = this;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115df0(*(undefined4 *)(local_1c + 0x34));
  if (iVar2 != 0) {
    uVar4 = local_18;
    puVar3 = FString::operator*(local_30);
    FUN_1000b480(puVar3,uVar4);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1012c688 Catch@1012c688

void Catch_1012c688(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1012c69c Catch@1012c69c

void Catch_1012c69c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UComboBoxHandle::execAddStringWithReserved");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012c6c0 UComboBoxHandle::execSYS_AddStringWithReserved

/* public: void __thiscall UComboBoxHandle::execSYS_AddStringWithReserved(struct FFrame &,void *
   const) */

void __thiscall
UComboBoxHandle::execSYS_AddStringWithReserved(UComboBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x12c6c0  1705
                       ?execSYS_AddStringWithReserved@UComboBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207350;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_10115df0(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_1000b1c0(local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012c795 Catch@1012c795

void Catch_1012c795(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012c7a9 Catch@1012c7a9

void Catch_1012c7a9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UComboBoxHandle::execSYS_AddStringWithReserved");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012c7d0 UComboBoxHandle::execGetString

/* public: void __thiscall UComboBoxHandle::execGetString(struct FFrame &,void * const) */

void __thiscall UComboBoxHandle::execGetString(UComboBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12c7d0  1398  ?execGetString@UComboBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207370;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115df0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    puVar3 = (ushort *)FUN_1000ac40(local_18);
    FString::operator=(param_2,puVar3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012c891 Catch@1012c891

void Catch_1012c891(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012c8a5 Catch@1012c8a5

void Catch_1012c8a5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UComboBoxHandle::execGetString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012c8d0 UComboBoxHandle::execGetReserved

/* public: void __thiscall UComboBoxHandle::execGetReserved(struct FFrame &,void * const) */

void __thiscall
UComboBoxHandle::execGetReserved(UComboBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12c8d0  1356  ?execGetReserved@UComboBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207390;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115df0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    uVar3 = FUN_1000ac70(local_18);
    *(undefined4 *)param_2 = uVar3;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012c98c Catch@1012c98c

void Catch_1012c98c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012c9a0 Catch@1012c9a0

void Catch_1012c9a0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UComboBoxHandle::execGetReserved");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012c9c0 UComboBoxHandle::execGetSelectedNum

/* public: void __thiscall UComboBoxHandle::execGetSelectedNum(struct FFrame &,void * const) */

void __thiscall
UComboBoxHandle::execGetSelectedNum(UComboBoxHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12c9c0  1372  ?execGetSelectedNum@UComboBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102073b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_10115df0(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar1 + 0x324);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012ca52 Catch@1012ca52

void Catch_1012ca52(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012ca66 Catch@1012ca66

void Catch_1012ca66(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UComboBoxHandle::execGetSelectedNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ca90 UComboBoxHandle::execSetSelectedNum

/* public: void __thiscall UComboBoxHandle::execSetSelectedNum(struct FFrame &,void * const) */

void __thiscall
UComboBoxHandle::execSetSelectedNum(UComboBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12ca90  1794  ?execSetSelectedNum@UComboBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102073d0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115df0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_10009f70(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012cb47 Catch@1012cb47

void Catch_1012cb47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012cb5b Catch@1012cb5b

void Catch_1012cb5b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UComboBoxHandle::execSetSelectedNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012cb80 UComboBoxHandle::execClear

/* public: void __thiscall UComboBoxHandle::execClear(struct FFrame &,void * const) */

void __thiscall UComboBoxHandle::execClear(UComboBoxHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12cb80  1089  ?execClear@UComboBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102073f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10115df0(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x174))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012cc13 Catch@1012cc13

void Catch_1012cc13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012cc27 Catch@1012cc27

void Catch_1012cc27(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UComboBoxHandle::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012cc50 FUN_1012cc50

UObject * FUN_1012cc50(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1035d0a0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1012cc80 UDrawPanelHandle::execInsertDrawItem

/* public: void __thiscall UDrawPanelHandle::execInsertDrawItem(struct FFrame &,void * const) */

void __thiscall
UDrawPanelHandle::execInsertDrawItem(UDrawPanelHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_80;
  FDrawItemInfo local_70 [92];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12cc80  1456  ?execInsertDrawItem@UDrawPanelHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207418;
  local_10 = ExceptionList;
  uStack_80 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  local_8 = 0;
  FDrawItemInfo::FDrawItemInfo(local_70);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_70);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1012cc50(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_10012af0(local_70);
  }
  local_8 = local_8 & 0xffffff00;
  FDrawItemInfo::~FDrawItemInfo(local_70);
  ExceptionList = local_10;
  return;
}


// ==== 1012cd49 Catch@1012cd49

void Catch_1012cd49(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012cd5d Catch@1012cd5d

void Catch_1012cd5d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UDrawPanelHandle::execInsertDrawItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012cd80 UDrawPanelHandle::execClear

/* public: void __thiscall UDrawPanelHandle::execClear(struct FFrame &,void * const) */

void __thiscall UDrawPanelHandle::execClear(UDrawPanelHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12cd80  1090  ?execClear@UDrawPanelHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207440;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_1012cc50(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x174))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012ce13 Catch@1012ce13

void Catch_1012ce13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012ce27 Catch@1012ce27

void Catch_1012ce27(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UDrawPanelHandle::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ce50 UDrawPanelHandle::execPreCheckPanelSize

/* public: void __thiscall UDrawPanelHandle::execPreCheckPanelSize(struct FFrame &,void * const) */

void __thiscall
UDrawPanelHandle::execPreCheckPanelSize(UDrawPanelHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uStack_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  UDrawPanelHandle *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x12ce50  1550  ?execPreCheckPanelSize@UDrawPanelHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10207460;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_20 = this;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = (FFrame *)&local_18;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  local_1c = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar5 = &local_1c;
  }
  else {
    puVar5 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_1012cc50(*(undefined4 *)(local_20 + 0x34));
  local_34 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  if (iVar3 != 0) {
    FUN_10012950(&local_38);
  }
  uVar4 = FUN_101c19e0();
  *(undefined4 *)param_1 = uVar4;
  uVar4 = FUN_101c19e0();
  *puVar5 = uVar4;
  ExceptionList = local_10;
  return;
}


// ==== 1012cfb5 Catch@1012cfb5

void Catch_1012cfb5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1012cfc9 Catch@1012cfc9

void Catch_1012cfc9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UDrawPanelHandle::execPreCheckPanelSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012cff0 UEditBoxHandle::execGetString

/* public: void __thiscall UEditBoxHandle::execGetString(struct FFrame &,void * const) */

void __thiscall UEditBoxHandle::execGetString(UEditBoxHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12cff0  1399  ?execGetString@UEditBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207480;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10115dc0(*(undefined4 *)(this + 0x34));
  if ((piVar1 == (int *)0x0) ||
     (puVar2 = (ushort *)(**(code **)(*piVar1 + 0x1f8))(), puVar2 == (ushort *)0x0)) {
    puVar2 = (ushort *)&DAT_1022f9f8;
  }
  FString::operator=(param_2,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 1012d098 Catch@1012d098

void Catch_1012d098(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012d0ac Catch@1012d0ac

void Catch_1012d0ac(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEditBoxHandle::execGetString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012d0d0 UEditBoxHandle::execSetString

/* public: void __thiscall UEditBoxHandle::execSetString(struct FFrame &,void * const) */

void __thiscall UEditBoxHandle::execSetString(UEditBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  ushort *puVar3;
  undefined4 uVar4;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12d0d0  1802  ?execSetString@UEditBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102074a9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar2 = (int *)FUN_10115dc0(*(undefined4 *)(this + 0x34));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x174))();
    uVar4 = 1;
    puVar3 = FString::operator*(local_28);
    FUN_10016ea0(puVar3,uVar4);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1012d1b0 Catch@1012d1b0

void Catch_1012d1b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012d1c4 Catch@1012d1c4

void Catch_1012d1c4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEditBoxHandle::execSetString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012d1f0 UEditBoxHandle::execAddString

/* public: void __thiscall UEditBoxHandle::execAddString(struct FFrame &,void * const) */

void __thiscall UEditBoxHandle::execAddString(UEditBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12d1f0  1064  ?execAddString@UEditBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102074d9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115dc0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    uVar4 = 1;
    puVar3 = FString::operator*(local_28);
    FUN_10016ea0(puVar3,uVar4);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1012d2c4 Catch@1012d2c4

void Catch_1012d2c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012d2d8 Catch@1012d2d8

void Catch_1012d2d8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEditBoxHandle::execAddString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012d300 UEditBoxHandle::execClear

/* public: void __thiscall UEditBoxHandle::execClear(struct FFrame &,void * const) */

void __thiscall UEditBoxHandle::execClear(UEditBoxHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12d300  1091  ?execClear@UEditBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207500;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10115dc0(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x174))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012d393 Catch@1012d393

void Catch_1012d393(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012d3a7 Catch@1012d3a7

void Catch_1012d3a7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEditBoxHandle::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012d3d0 UEditBoxHandle::execSetEditType

/* public: void __thiscall UEditBoxHandle::execSetEditType(struct FFrame &,void * const) */

void __thiscall UEditBoxHandle::execSetEditType(UEditBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FString *pFVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x12d3d0  1731  ?execSetEditType@UEditBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207544;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115dc0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    pFVar3 = (FString *)FString::FString(local_34,(ushort *)L"normal");
    local_8._0_1_ = 2;
    iVar2 = FString::operator==(local_28,pFVar3);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    if (iVar2 == 0) {
      pFVar3 = (FString *)FString::FString(local_34,(ushort *)L"number");
      local_8._0_1_ = 3;
      iVar2 = FString::operator==(local_28,pFVar3);
      local_8._0_1_ = 1;
      FString::~FString(local_34);
      if (iVar2 == 0) {
        pFVar3 = (FString *)FString::FString(local_34,(ushort *)L"password");
        local_8._0_1_ = 4;
        iVar2 = FString::operator==(local_28,pFVar3);
        local_8._0_1_ = 1;
        FString::~FString(local_34);
        if (iVar2 == 0) {
          appFailAssert("false",".\\UIScript\\EditBoxHandle.cpp",0x58);
        }
        else {
          FUN_10014b00(2);
        }
      }
      else {
        FUN_10014b00(3);
      }
    }
    else {
      FUN_10014b00(0);
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1012d559 Catch@1012d559

void Catch_1012d559(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012d56d Catch@1012d56d

void Catch_1012d56d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEditBoxHandle::execSetEditType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012d590 UEditBoxHandle::execSetHighLight

/* public: void __thiscall UEditBoxHandle::execSetHighLight(struct FFrame &,void * const) */

void __thiscall UEditBoxHandle::execSetHighLight(UEditBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12d590  1741  ?execSetHighLight@UEditBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207560;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115dc0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_10014390(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012d647 Catch@1012d647

void Catch_1012d647(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012d65b Catch@1012d65b

void Catch_1012d65b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEditBoxHandle::execSetHighLight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012d680 UEditBoxHandle::execSimulateBackspace

/* public: void __thiscall UEditBoxHandle::execSimulateBackspace(struct FFrame &,void * const) */

void __thiscall
UEditBoxHandle::execSimulateBackspace(UEditBoxHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12d680  1858  ?execSimulateBackspace@UEditBoxHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10207580;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10115dc0(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x68))(0x100,8,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012d719 Catch@1012d719

void Catch_1012d719(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012d72d Catch@1012d72d

void Catch_1012d72d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEditBoxHandle::execSimulateBackspace");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012d750 UEditBoxHandle::execSetMaxLength

/* public: void __thiscall UEditBoxHandle::execSetMaxLength(struct FFrame &,void * const) */

void __thiscall UEditBoxHandle::execSetMaxLength(UEditBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12d750  1758  ?execSetMaxLength@UEditBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102075a0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115dc0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_100131e0(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012d807 Catch@1012d807

void Catch_1012d807(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012d81b Catch@1012d81b

void Catch_1012d81b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEditBoxHandle::execSetMaxLength");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012d840 UEditBoxHandle::execGetMaxLength

/* public: void __thiscall UEditBoxHandle::execGetMaxLength(struct FFrame &,void * const) */

void __thiscall UEditBoxHandle::execGetMaxLength(UEditBoxHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12d840  1254  ?execGetMaxLength@UEditBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102075c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 0;
  iVar1 = FUN_10115dc0(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar1 + 0x374);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012d8d8 Catch@1012d8d8

void Catch_1012d8d8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012d8ec Catch@1012d8ec

void Catch_1012d8ec(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEditBoxHandle::execGetMaxLength");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012d910 UHtmlHandle::execLoadHtml

/* public: void __thiscall UHtmlHandle::execLoadHtml(struct FFrame &,void * const) */

void __thiscall UHtmlHandle::execLoadHtml(UHtmlHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UObject *this_00;
  int iVar2;
  ushort *puVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12d910  1514  ?execLoadHtml@UHtmlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102075e9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = (UObject *)FUN_1010acf0(*(undefined4 *)(this + 0x34));
  if (this_00 != (UObject *)0x0) {
    iVar2 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    if (iVar2 == 0) {
      puVar3 = FString::operator*(local_28);
      FUN_1010acf0(this_00,puVar3);
    }
    else {
      puVar3 = FString::operator*(local_28);
      FUN_1010acc0(this_00,puVar3);
    }
    FUN_10088300(puVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1012da0c Catch@1012da0c

void Catch_1012da0c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012da20 Catch@1012da20

void Catch_1012da20(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UHtmlHandle::execLoadHtml");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012da40 UHtmlHandle::execLoadHtmlFromString

/* public: void __thiscall UHtmlHandle::execLoadHtmlFromString(struct FFrame &,void * const) */

void __thiscall UHtmlHandle::execLoadHtmlFromString(UHtmlHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UObject *this_00;
  int iVar2;
  ushort *puVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12da40  1516  ?execLoadHtmlFromString@UHtmlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207619;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = (UObject *)FUN_1010acf0(*(undefined4 *)(this + 0x34));
  if (this_00 != (UObject *)0x0) {
    iVar2 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    if (iVar2 == 0) {
      puVar3 = FString::operator*(local_28);
      FUN_1010acf0(this_00,puVar3);
      FUN_10088440(puVar3);
    }
    else {
      puVar3 = FString::operator*(local_28);
      FUN_1010acc0(this_00,puVar3);
      FUN_10088c30(puVar3);
    }
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1012db46 Catch@1012db46

void Catch_1012db46(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012db5a Catch@1012db5a

void Catch_1012db5a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UHtmlHandle::execLoadHtmlFromString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012db80 UHtmlHandle::execClear

/* public: void __thiscall UHtmlHandle::execClear(struct FFrame &,void * const) */

void __thiscall UHtmlHandle::execClear(UHtmlHandle *this,FFrame *param_1,void *param_2)

{
  UObject *this_00;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12db80  1092  ?execClear@UHtmlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207640;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = (UObject *)FUN_1010acf0(*(undefined4 *)(this + 0x34));
  if (this_00 != (UObject *)0x0) {
    iVar1 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    if (iVar1 == 0) {
      FUN_1010acf0(this_00);
    }
    else {
      FUN_1010acc0();
    }
    FUN_100867e0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012dc31 Catch@1012dc31

void Catch_1012dc31(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012dc45 Catch@1012dc45

void Catch_1012dc45(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UHtmlHandle::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012dc70 UHtmlHandle::execGetFrameMaxHeight

/* public: void __thiscall UHtmlHandle::execGetFrameMaxHeight(struct FFrame &,void * const) */

void __thiscall UHtmlHandle::execGetFrameMaxHeight(UHtmlHandle *this,FFrame *param_1,void *param_2)

{
  UObject *this_00;
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12dc70  1205  ?execGetFrameMaxHeight@UHtmlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207660;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  this_00 = (UObject *)FUN_1010acf0(*(undefined4 *)(this + 0x34));
  if (this_00 != (UObject *)0x0) {
    iVar1 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    if (iVar1 == 0) {
      FUN_1010acf0(this_00);
    }
    else {
      FUN_1010acc0();
    }
    uVar2 = FUN_100835e0();
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1012dd2a Catch@1012dd2a

void Catch_1012dd2a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012dd3e Catch@1012dd3e

void Catch_1012dd3e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UHtmlHandle::execGetFrameMaxHeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012dd60 UHtmlHandle::execControllerExecution

/* public: void __thiscall UHtmlHandle::execControllerExecution(struct FFrame &,void * const) */

void __thiscall
UHtmlHandle::execControllerExecution(UHtmlHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12dd60  1116  ?execControllerExecution@UHtmlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207689;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar3 = FUN_1010acf0(*(undefined4 *)(this + 0x34));
  if (iVar3 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    iVar2 = *DAT_103663bc;
    puVar4 = FString::operator*(local_28);
    uVar5 = (**(code **)(iVar2 + 0x7f0))(puVar4,iVar3);
    *(undefined4 *)param_2 = uVar5;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1012de51 Catch@1012de51

void Catch_1012de51(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012de65 Catch@1012de65

void Catch_1012de65(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UHtmlHandle::execControllerExecution");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012de90 UHtmlHandle::execSetHtmlBuffData

/* public: void __thiscall UHtmlHandle::execSetHtmlBuffData(struct FFrame &,void * const) */

void __thiscall UHtmlHandle::execSetHtmlBuffData(UHtmlHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UObject *this_00;
  int iVar2;
  ushort *puVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12de90  1743  ?execSetHtmlBuffData@UHtmlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102076b9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = (UObject *)FUN_1010acf0(*(undefined4 *)(this + 0x34));
  if (this_00 != (UObject *)0x0) {
    iVar2 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    if (iVar2 == 0) {
      local_8 = local_8 & 0xffffff00;
      FString::~FString(local_28);
      ExceptionList = local_10;
      return;
    }
    puVar3 = FString::operator*(local_28);
    FUN_1010acc0(this_00,puVar3);
    FUN_1008b0b0(puVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1012df9e Catch@1012df9e

void Catch_1012df9e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012dfb2 Catch@1012dfb2

void Catch_1012dfb2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UHtmlHandle::execSetHtmlBuffData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012dfd0 UHtmlHandle::execSetPageLock

/* public: void __thiscall UHtmlHandle::execSetPageLock(struct FFrame &,void * const) */

void __thiscall UHtmlHandle::execSetPageLock(UHtmlHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  UObject *this_00;
  int iVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12dfd0  1772  ?execSetPageLock@UHtmlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102076e0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = (UObject *)FUN_1010acf0(*(undefined4 *)(this + 0x34));
  if (this_00 != (UObject *)0x0) {
    iVar3 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    uVar2 = local_18;
    if (iVar3 != 0) {
      iVar3 = FUN_1010acc0(this_00);
      *(undefined4 *)(iVar3 + 0x25c) = uVar2;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012e0a1 Catch@1012e0a1

void Catch_1012e0a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012e0b5 Catch@1012e0b5

void Catch_1012e0b5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UHtmlHandle::execSetPageLock");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012e0e0 UHtmlHandle::execIsPageLock

/* public: void __thiscall UHtmlHandle::execIsPageLock(struct FFrame &,void * const) */

void __thiscall UHtmlHandle::execIsPageLock(UHtmlHandle *this,FFrame *param_1,void *param_2)

{
  UObject *this_00;
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12e0e0  1497  ?execIsPageLock@UHtmlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207700;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  this_00 = (UObject *)FUN_1010acf0(*(undefined4 *)(this + 0x34));
  if (this_00 != (UObject *)0x0) {
    iVar1 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    if (iVar1 != 0) {
      iVar1 = FUN_1010acc0(this_00);
      uVar2 = *(undefined4 *)(iVar1 + 0x25c);
    }
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1012e196 Catch@1012e196

void Catch_1012e196(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012e1aa Catch@1012e1aa

void Catch_1012e1aa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UHtmlHandle::execIsPageLock");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012e1d0 UItemWindowHandle::execGetSelectedNum

/* public: void __thiscall UItemWindowHandle::execGetSelectedNum(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execGetSelectedNum(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12e1d0  1373  ?execGetSelectedNum@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10207720;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    uVar2 = FUN_1002d090();
    *(undefined4 *)param_2 = uVar2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012e263 Catch@1012e263

void Catch_1012e263(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012e277 Catch@1012e277

void Catch_1012e277(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execGetSelectedNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012e2a0 UItemWindowHandle::execGetItemNum

/* public: void __thiscall UItemWindowHandle::execGetItemNum(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execGetItemNum(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12e2a0  1240  ?execGetItemNum@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207740;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    uVar2 = FUN_1002d0b0();
    *(undefined4 *)param_2 = uVar2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012e333 Catch@1012e333

void Catch_1012e333(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012e347 Catch@1012e347

void Catch_1012e347(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execGetItemNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012e370 UItemWindowHandle::execClearSelect

/* public: void __thiscall UItemWindowHandle::execClearSelect(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execClearSelect(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12e370  1110  ?execClearSelect@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207760;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x234))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012e403 Catch@1012e403

void Catch_1012e403(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012e417 Catch@1012e417

void Catch_1012e417(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execClearSelect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012e440 UItemWindowHandle::execAddItem

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: void __thiscall UItemWindowHandle::execAddItem(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execAddItem(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  uint uStack_1e4c;
  FItemInfo local_1e3c [320];
  undefined1 local_1cfc [7396];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12e440  1059  ?execAddItem@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020778b;
  local_10 = ExceptionList;
  uStack_1e4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_1e4c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_1e4c;
  FItemInfo::FItemInfo(local_1e3c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_1e3c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar2 = (int *)FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (piVar2 != (int *)0x0) {
    FUN_1002c0b0(local_1e3c);
    (**(code **)(*piVar2 + 0x204))(local_1cfc);
  }
  local_8 = local_8 & 0xffffff00;
  FItemInfo::~FItemInfo(local_1e3c);
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1012e543 Catch@1012e543

void Catch_1012e543(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1cfc) = *(undefined4 *)(unaff_EBP + -0x1d00);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1cfc,&DAT_102a47f0);
}


// ==== 1012e560 Catch@1012e560

void Catch_1012e560(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execAddItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012e580 UItemWindowHandle::execDeleteItem

/* public: void __thiscall UItemWindowHandle::execDeleteItem(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execDeleteItem(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12e580  1129  ?execDeleteItem@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102077c0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar2 = (int *)FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x208))(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012e63c Catch@1012e63c

void Catch_1012e63c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012e650 Catch@1012e650

void Catch_1012e650(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execDeleteItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012e670 UItemWindowHandle::execSetItem

/* public: void __thiscall UItemWindowHandle::execSetItem(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execSetItem(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uStack_16c;
  FItemInfo local_15c [316];
  UItemWindowHandle *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12e670  1752  ?execSetItem@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102077eb;
  local_10 = ExceptionList;
  uStack_16c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_16c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_20 = this;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FItemInfo::FItemInfo(local_15c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_15c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 0;
  piVar2 = (int *)FUN_1010bb80(*(undefined4 *)(local_20 + 0x34));
  if (piVar2 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar2 + 0x20c))(local_18,local_15c);
    *(undefined4 *)param_2 = uVar3;
  }
  local_8 = local_8 & 0xffffff00;
  FItemInfo::~FItemInfo(local_15c);
  ExceptionList = local_10;
  return;
}


// ==== 1012e77a Catch@1012e77a

void Catch_1012e77a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012e78e Catch@1012e78e

void Catch_1012e78e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execSetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012e7b0 UItemWindowHandle::execGetSelectedItem

/* public: void __thiscall UItemWindowHandle::execGetSelectedItem(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execGetSelectedItem(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  FItemInfo *pFVar4;
  uint uStack_168;
  FItemInfo local_158 [316];
  UItemWindowHandle *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12e7b0  1368  ?execGetSelectedItem@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_1020781b;
  local_10 = ExceptionList;
  uStack_168 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_168;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = this;
  FItemInfo::FItemInfo(local_158);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_158);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar4 = local_158;
  }
  else {
    pFVar4 = *(FItemInfo **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar2 = (int *)FUN_1010bb80(*(undefined4 *)(local_1c + 0x34));
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x210))(pFVar4);
    *(bool *)param_2 = iVar3 != 0;
  }
  local_8 = local_8 & 0xffffff00;
  FItemInfo::~FItemInfo(local_158);
  ExceptionList = local_10;
  return;
}


// ==== 1012e8d3 Catch@1012e8d3

void Catch_1012e8d3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012e8e7 Catch@1012e8e7

void Catch_1012e8e7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execGetSelectedItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012e910 UItemWindowHandle::execGetItem

/* public: void __thiscall UItemWindowHandle::execGetItem(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execGetItem(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  FItemInfo *pFVar4;
  uint uStack_16c;
  FItemInfo local_15c [316];
  UItemWindowHandle *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12e910  1227  ?execGetItem@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020784b;
  local_10 = ExceptionList;
  uStack_16c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_16c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_20 = this;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FItemInfo::FItemInfo(local_15c);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_15c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar4 = local_15c;
  }
  else {
    pFVar4 = *(FItemInfo **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar2 = (int *)FUN_1010bb80(*(undefined4 *)(local_20 + 0x34));
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x21c))(local_18,pFVar4);
    *(bool *)param_2 = iVar3 != 0;
  }
  local_8 = local_8 & 0xffffff00;
  FItemInfo::~FItemInfo(local_15c);
  ExceptionList = local_10;
  return;
}


// ==== 1012ea4c Catch@1012ea4c

void Catch_1012ea4c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012ea60 Catch@1012ea60

void Catch_1012ea60(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execGetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ea80 UItemWindowHandle::execClear

/* public: void __thiscall UItemWindowHandle::execClear(struct FFrame &,void * const) */

void __thiscall UItemWindowHandle::execClear(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12ea80  1093  ?execClear@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207870;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x174))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012eb13 Catch@1012eb13

void Catch_1012eb13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012eb27 Catch@1012eb27

void Catch_1012eb27(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012eb50 UItemWindowHandle::execGetSelectedItemID

/* public: void __thiscall UItemWindowHandle::execGetSelectedItemID(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execGetSelectedItemID(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uStack_164;
  FItemInfo local_154 [148];
  undefined4 local_c0;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12eb50  1370
                       ?execGetSelectedItemID@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020789b;
  local_10 = ExceptionList;
  uStack_164 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_164;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_164;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  piVar2 = (int *)FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (piVar2 != (int *)0x0) {
    FItemInfo::FItemInfo(local_154);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar3 = (**(code **)(*piVar2 + 0x210))(local_154);
    if (iVar3 == 0) {
      *(undefined4 *)param_2 = 0xffffffff;
    }
    else {
      *(undefined4 *)param_2 = local_c0;
    }
    local_8 = local_8 & 0xffffff00;
    FItemInfo::~FItemInfo(local_154);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012ec29 Catch@1012ec29

void Catch_1012ec29(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012ec3d Catch@1012ec3d

void Catch_1012ec3d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execGetSelectedItemID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ec60 UItemWindowHandle::execFindItemWithServerID

/* public: void __thiscall UItemWindowHandle::execFindItemWithServerID(struct FFrame &,void * const)
    */

void __thiscall
UItemWindowHandle::execFindItemWithServerID(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uStack_34;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12ec60  1152
                       ?execFindItemWithServerID@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102078c0;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar2 = (int *)FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)param_2 = 0xffffffff;
    iVar3 = FUN_1002d0b0();
    for (iVar5 = 0; iVar5 < iVar3; iVar5 = iVar5 + 1) {
      iVar4 = (**(code **)(*piVar2 + 0x214))(iVar5);
      if (*(int *)(iVar4 + 0x1e58) == local_18) {
        *(int *)param_2 = iVar5;
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012ed44 Catch@1012ed44

void Catch_1012ed44(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1012ed58 Catch@1012ed58

void Catch_1012ed58(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execFindItemWithServerID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ed80 UItemWindowHandle::execFindItemWithClassID

/* public: void __thiscall UItemWindowHandle::execFindItemWithClassID(struct FFrame &,void * const)
    */

void __thiscall
UItemWindowHandle::execFindItemWithClassID(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uStack_34;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12ed80  1150
                       ?execFindItemWithClassID@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102078e0;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar2 = (int *)FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)param_2 = 0xffffffff;
    iVar3 = FUN_1002d0b0();
    for (iVar5 = 0; iVar5 < iVar3; iVar5 = iVar5 + 1) {
      iVar4 = (**(code **)(*piVar2 + 0x214))(iVar5);
      if (*(int *)(iVar4 + 0x1e5c) == local_18) {
        *(int *)param_2 = iVar5;
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012ee64 Catch@1012ee64

void Catch_1012ee64(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1012ee78 Catch@1012ee78

void Catch_1012ee78(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execFindItemWithClassID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012eea0 UItemWindowHandle::execSetFaded

/* public: void __thiscall UItemWindowHandle::execSetFaded(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execSetFaded(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12eea0  1734  ?execSetFaded@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207900;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x2ac) = local_18;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012ef55 Catch@1012ef55

void Catch_1012ef55(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012ef69 Catch@1012ef69

void Catch_1012ef69(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execSetFaded");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ef90 UItemWindowHandle::execShowScrollBar

/* public: void __thiscall UItemWindowHandle::execShowScrollBar(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execShowScrollBar(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12ef90  1851  ?execShowScrollBar@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207920;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_10043c10(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012f047 Catch@1012f047

void Catch_1012f047(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012f05b Catch@1012f05b

void Catch_1012f05b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execShowScrollBar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f080 UItemWindowHandle::execSwapItems

/* public: void __thiscall UItemWindowHandle::execSwapItems(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execSwapItems(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x12f080  1866  ?execSwapItems@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207940;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_1002e8a0(local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012f155 Catch@1012f155

void Catch_1012f155(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012f169 Catch@1012f169

void Catch_1012f169(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execSwapItems");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f190 UItemWindowHandle::execGetIndexAt

/* public: void __thiscall UItemWindowHandle::execGetIndexAt(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execGetIndexAt(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  undefined4 uVar4;
  uint uStack_38;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x12f190  1222  ?execGetIndexAt@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207960;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    uVar4 = FUN_1002cfe0(local_20,local_1c,local_18,param_1);
    *(undefined4 *)param_2 = uVar4;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012f2b4 Catch@1012f2b4

void Catch_1012f2b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1012f2c8 Catch@1012f2c8

void Catch_1012f2c8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execGetIndexAt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f2f0 UItemWindowHandle::execSetDisableTex

/* public: void __thiscall UItemWindowHandle::execSetDisableTex(struct FFrame &,void * const) */

void __thiscall
UItemWindowHandle::execSetDisableTex(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12f2f0  1729  ?execSetDisableTex@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207989;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_1002d8d0(local_28);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1012f3bb Catch@1012f3bb

void Catch_1012f3bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012f3cf Catch@1012f3cf

void Catch_1012f3cf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execSetDisableTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f3f0 UItemWindowHandle::execSetRow

/* public: void __thiscall UItemWindowHandle::execSetRow(struct FFrame &,void * const) */

void __thiscall UItemWindowHandle::execSetRow(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12f3f0  1788  ?execSetRow@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102079b0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_1002d6b0(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012f4a7 Catch@1012f4a7

void Catch_1012f4a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012f4bb Catch@1012f4bb

void Catch_1012f4bb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execSetRow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f4e0 UItemWindowHandle::execSetCol

/* public: void __thiscall UItemWindowHandle::execSetCol(struct FFrame &,void * const) */

void __thiscall UItemWindowHandle::execSetCol(UItemWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12f4e0  1722  ?execSetCol@UItemWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102079d0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1010bb80(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_1002d6c0(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012f597 Catch@1012f597

void Catch_1012f597(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012f5ab Catch@1012f5ab

void Catch_1012f5ab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UItemWindowHandle::execSetCol");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f5d0 UListCtrlHandle::execGetSelectedRecord

/* public: void __thiscall UListCtrlHandle::execGetSelectedRecord(struct FFrame &,void * const) */

void __thiscall
UListCtrlHandle::execGetSelectedRecord(UListCtrlHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12f5d0  1377  ?execGetSelectedRecord@UListCtrlHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102079f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_10115eb0(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    FUN_10037540(param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012f662 Catch@1012f662

void Catch_1012f662(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012f676 Catch@1012f676

void Catch_1012f676(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UListCtrlHandle::execGetSelectedRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f6a0 UListCtrlHandle::execGetRecord

/* public: void __thiscall UListCtrlHandle::execGetRecord(struct FFrame &,void * const) */

void __thiscall UListCtrlHandle::execGetRecord(UListCtrlHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12f6a0  1347  ?execGetRecord@UListCtrlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207a10;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115eb0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_10037260(local_18,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012f75b Catch@1012f75b

void Catch_1012f75b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012f76f Catch@1012f76f

void Catch_1012f76f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UListCtrlHandle::execGetRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f790 UListCtrlHandle::execDeleteAllItem

/* public: void __thiscall UListCtrlHandle::execDeleteAllItem(struct FFrame &,void * const) */

void __thiscall
UListCtrlHandle::execDeleteAllItem(UListCtrlHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12f790  1125  ?execDeleteAllItem@UListCtrlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207a30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_10115eb0(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    FUN_100364c0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012f81e Catch@1012f81e

void Catch_1012f81e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012f832 Catch@1012f832

void Catch_1012f832(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UListCtrlHandle::execDeleteAllItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f850 UListCtrlHandle::execDeleteRecord

/* public: void __thiscall UListCtrlHandle::execDeleteRecord(struct FFrame &,void * const) */

void __thiscall
UListCtrlHandle::execDeleteRecord(UListCtrlHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12f850  1132  ?execDeleteRecord@UListCtrlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207a50;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115eb0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_100364a0(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012f907 Catch@1012f907

void Catch_1012f907(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012f91b Catch@1012f91b

void Catch_1012f91b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UListCtrlHandle::execDeleteRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f940 UListCtrlHandle::execGetRecordCount

/* public: void __thiscall UListCtrlHandle::execGetRecordCount(struct FFrame &,void * const) */

void __thiscall
UListCtrlHandle::execGetRecordCount(UListCtrlHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12f940  1349  ?execGetRecordCount@UListCtrlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207a70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_10115eb0(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    uVar2 = FUN_10034fa0();
    *(undefined4 *)param_2 = uVar2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012f9d3 Catch@1012f9d3

void Catch_1012f9d3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012f9e7 Catch@1012f9e7

void Catch_1012f9e7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UListCtrlHandle::execGetRecordCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012fa10 UListCtrlHandle::execGetSelectedIndex

/* public: void __thiscall UListCtrlHandle::execGetSelectedIndex(struct FFrame &,void * const) */

void __thiscall
UListCtrlHandle::execGetSelectedIndex(UListCtrlHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12fa10  1366  ?execGetSelectedIndex@UListCtrlHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10207a90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_10115eb0(*(undefined4 *)(this + 0x34));
  *(undefined4 *)param_2 = 0xffffffff;
  if (iVar1 != 0) {
    uVar2 = FUN_10034d80();
    *(undefined4 *)param_2 = uVar2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012faa9 Catch@1012faa9

void Catch_1012faa9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012fabd Catch@1012fabd

void Catch_1012fabd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UListCtrlHandle::execGetSelectedIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012fae0 UListCtrlHandle::execSetSelectedIndex

/* public: void __thiscall UListCtrlHandle::execSetSelectedIndex(struct FFrame &,void * const) */

void __thiscall
UListCtrlHandle::execSetSelectedIndex(UListCtrlHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x12fae0  1792  ?execSetSelectedIndex@UListCtrlHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10207ab0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_10115eb0(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_10034fb0(local_18,param_1 != (FFrame *)0x0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012fbb8 Catch@1012fbb8

void Catch_1012fbb8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012fbcc Catch@1012fbcc

void Catch_1012fbcc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UListCtrlHandle::execSetSelectedIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012fbf0 UListCtrlHandle::execShowScrollBar

/* public: void __thiscall UListCtrlHandle::execShowScrollBar(struct FFrame &,void * const) */

void __thiscall
UListCtrlHandle::execShowScrollBar(UListCtrlHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12fbf0  1852  ?execShowScrollBar@UListCtrlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207ad0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115eb0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    if (local_18 == 0) {
      (**(code **)(**(int **)(iVar2 + 0x314) + 0x13c))();
      (**(code **)(**(int **)(iVar2 + 0x318) + 0x13c))();
      pcVar3 = *(code **)(**(int **)(iVar2 + 0x31c) + 0x13c);
    }
    else {
      (**(code **)(**(int **)(iVar2 + 0x314) + 0x138))();
      (**(code **)(**(int **)(iVar2 + 0x318) + 0x138))();
      pcVar3 = *(code **)(**(int **)(iVar2 + 0x31c) + 0x138);
    }
    (*pcVar3)();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012fcfc Catch@1012fcfc

void Catch_1012fcfc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012fd10 Catch@1012fd10

void Catch_1012fd10(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UListCtrlHandle::execShowScrollBar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012fd30 UListCtrlHandle::execInsertRecord

/* public: void __thiscall UListCtrlHandle::execInsertRecord(struct FFrame &,void * const) */

void __thiscall
UListCtrlHandle::execInsertRecord(UListCtrlHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_50;
  FLVDataRecord local_40 [44];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12fd30  1459  ?execInsertRecord@UListCtrlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207af8;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FLVDataRecord::FLVDataRecord(local_40);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_40);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115eb0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_10036fe0(local_40);
  }
  local_8 = local_8 & 0xffffff00;
  FLVDataRecord::~FLVDataRecord(local_40);
  ExceptionList = local_10;
  return;
}


// ==== 1012fdf9 Catch@1012fdf9

void Catch_1012fdf9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1012fe0d Catch@1012fe0d

void Catch_1012fe0d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UListCtrlHandle::execInsertRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012fe30 UListCtrlHandle::execModifyRecord

/* public: void __thiscall UListCtrlHandle::execModifyRecord(struct FFrame &,void * const) */

void __thiscall
UListCtrlHandle::execModifyRecord(UListCtrlHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_54;
  FLVDataRecord local_44 [44];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12fe30  1526  ?execModifyRecord@UListCtrlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207b28;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FLVDataRecord::FLVDataRecord(local_44);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_44);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115eb0(*(undefined4 *)(this + 0x34));
  if (iVar2 == 0) {
    *(undefined4 *)param_2 = 0;
    local_8 = local_8 & 0xffffff00;
    FLVDataRecord::~FLVDataRecord(local_44);
    ExceptionList = local_10;
    return;
  }
  uVar3 = FUN_100373b0(local_18,local_44);
  *(undefined4 *)param_2 = uVar3;
  local_8 = local_8 & 0xffffff00;
  FLVDataRecord::~FLVDataRecord(local_44);
  ExceptionList = local_10;
  return;
}


// ==== 1012ff42 Catch@1012ff42

void Catch_1012ff42(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012ff56 Catch@1012ff56

void Catch_1012ff56(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UListCtrlHandle::execModifyRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ff80 UNameCtrlHandle::execSetName

/* public: void __thiscall UNameCtrlHandle::execSetName(struct FFrame &,void * const) */

void __thiscall UNameCtrlHandle::execSetName(UNameCtrlHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12ff80  1762  ?execSetName@UNameCtrlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207b59;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115f10(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    uVar6 = 0xffdcdcdc;
    uVar4 = local_1c;
    uVar5 = local_18;
    puVar3 = FString::operator*(local_30);
    FUN_1004a630(puVar3,uVar4,uVar5,uVar6);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1013009d Catch@1013009d

void Catch_1013009d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101300b1 Catch@101300b1

void Catch_101300b1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UNameCtrlHandle::execSetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101300d0 UNameCtrlHandle::execSetNameWithColor

/* public: void __thiscall UNameCtrlHandle::execSetNameWithColor(struct FFrame &,void * const) */

void __thiscall
UNameCtrlHandle::execSetNameWithColor(UNameCtrlHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uStack_44;
  FString local_34 [20];
  undefined4 local_20;
  undefined4 local_1c;
  FColor local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1300d0  1764  ?execSetNameWithColor@UNameCtrlHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10207b89;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  FColor::FColor(local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10115f10(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    uVar3 = FColor::operator_unsigned_long(local_18);
    uVar5 = local_20;
    uVar6 = local_1c;
    puVar4 = FString::operator*(local_34);
    FUN_1004a630(puVar4,uVar5,uVar6,uVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10130219 Catch@10130219

void Catch_10130219(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1013022d Catch@1013022d

void Catch_1013022d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UNameCtrlHandle::execSetNameWithColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130250 UNameCtrlHandle::execGetName

/* public: void __thiscall UNameCtrlHandle::execGetName(struct FFrame &,void * const) */

void __thiscall UNameCtrlHandle::execGetName(UNameCtrlHandle *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x130250  1263  ?execGetName@UNameCtrlHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207bb9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_38;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = FUN_10115f10(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FString::operator=(local_28,(FString *)(iVar2 + 0x2e0));
  }
  FString::operator=(param_2,local_28);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10130314 Catch@10130314

void Catch_10130314(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10130328 Catch@10130328

void Catch_10130328(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UNameCtrlHandle::execGetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130350 UStatusIconHandle::execAddRow

/* public: void __thiscall UStatusIconHandle::execAddRow(struct FFrame &,void * const) */

void __thiscall UStatusIconHandle::execAddRow(UStatusIconHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x130350  1061  ?execAddRow@UStatusIconHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207be0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_1010ef50(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    FUN_1004ec30(0xffffffff);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101303e0 Catch@101303e0

void Catch_101303e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101303f4 Catch@101303f4

void Catch_101303f4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UStatusIconHandle::execAddRow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130420 UStatusIconHandle::execAddCol

/* public: void __thiscall UStatusIconHandle::execAddCol(struct FFrame &,void * const) */

void __thiscall UStatusIconHandle::execAddCol(UStatusIconHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_78;
  FStatusIconInfo local_68 [76];
  UStatusIconHandle *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x130420  1056  ?execAddCol@UStatusIconHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207c08;
  local_10 = ExceptionList;
  uStack_78 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_78;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_1c = this;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FStatusIconInfo::FStatusIconInfo(local_68);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_68);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1010ef50(*(undefined4 *)(local_1c + 0x34));
  if (iVar2 != 0) {
    FUN_1004ecc0(local_18,local_68);
  }
  local_8 = local_8 & 0xffffff00;
  FStatusIconInfo::~FStatusIconInfo(local_68);
  ExceptionList = local_10;
  return;
}


// ==== 1013050f Catch@1013050f

void Catch_1013050f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10130523 Catch@10130523

void Catch_10130523(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UStatusIconHandle::execAddCol");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130540 UStatusIconHandle::execInsertRow

/* public: void __thiscall UStatusIconHandle::execInsertRow(struct FFrame &,void * const) */

void __thiscall
UStatusIconHandle::execInsertRow(UStatusIconHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x130540  1461  ?execInsertRow@UStatusIconHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207c30;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1010ef50(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_1004ec30(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101305f7 Catch@101305f7

void Catch_101305f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1013060b Catch@1013060b

void Catch_1013060b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UStatusIconHandle::execInsertRow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130630 UStatusIconHandle::execInsertCol

/* public: void __thiscall UStatusIconHandle::execInsertCol(struct FFrame &,void * const) */

void __thiscall
UStatusIconHandle::execInsertCol(UStatusIconHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  uint uStack_74;
  FStatusIconInfo local_64 [76];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pFVar2 = param_1;
                    /* 0x130630  1454  ?execInsertCol@UStatusIconHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207c58;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  FStatusIconInfo::FStatusIconInfo(local_64);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,local_64);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_1010ef50(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_1004e370(local_18,param_1,local_64);
  }
  local_8 = local_8 & 0xffffff00;
  FStatusIconInfo::~FStatusIconInfo(local_64);
  ExceptionList = local_10;
  return;
}


// ==== 1013073e Catch@1013073e

void Catch_1013073e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10130752 Catch@10130752

void Catch_10130752(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UStatusIconHandle::execInsertCol");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130770 UStatusIconHandle::execGetRowCount

/* public: void __thiscall UStatusIconHandle::execGetRowCount(struct FFrame &,void * const) */

void __thiscall
UStatusIconHandle::execGetRowCount(UStatusIconHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x130770  1361  ?execGetRowCount@UStatusIconHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207c80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1010ef50(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    uVar2 = FUN_1004d3f0();
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 10130807 Catch@10130807

void Catch_10130807(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013081b Catch@1013081b

void Catch_1013081b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UStatusIconHandle::execGetRowCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130840 UStatusIconHandle::execGetColCount

/* public: void __thiscall UStatusIconHandle::execGetColCount(struct FFrame &,void * const) */

void __thiscall
UStatusIconHandle::execGetColCount(UStatusIconHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x130840  1176  ?execGetColCount@UStatusIconHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207ca0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = 0;
  iVar2 = FUN_1010ef50(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    uVar3 = FUN_1004e450(local_18);
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10130900 Catch@10130900

void Catch_10130900(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10130914 Catch@10130914

void Catch_10130914(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UStatusIconHandle::execGetColCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130940 UStatusIconHandle::execGetItem

/* public: void __thiscall UStatusIconHandle::execGetItem(struct FFrame &,void * const) */

void __thiscall
UStatusIconHandle::execGetItem(UStatusIconHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  FStatusIconInfo *pFVar4;
  uint uStack_78;
  FStatusIconInfo local_68 [76];
  UStatusIconHandle *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pFVar2 = param_1;
                    /* 0x130940  1228  ?execGetItem@UStatusIconHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207cc8;
  local_10 = ExceptionList;
  uStack_78 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_78;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_1c = this;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  FStatusIconInfo::FStatusIconInfo(local_68);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,local_68);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar4 = local_68;
  }
  else {
    pFVar4 = *(FStatusIconInfo **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_1010ef50(*(undefined4 *)(local_1c + 0x34));
  if (iVar3 != 0) {
    FUN_1004e4e0(local_18,param_1,pFVar4);
  }
  local_8 = local_8 & 0xffffff00;
  FStatusIconInfo::~FStatusIconInfo(local_68);
  ExceptionList = local_10;
  return;
}


// ==== 10130a83 Catch@10130a83

void Catch_10130a83(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10130a97 Catch@10130a97

void Catch_10130a97(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UStatusIconHandle::execGetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130ac0 UStatusIconHandle::execSetItem

/* public: void __thiscall UStatusIconHandle::execSetItem(struct FFrame &,void * const) */

void __thiscall
UStatusIconHandle::execSetItem(UStatusIconHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  uint uStack_74;
  FStatusIconInfo local_64 [76];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pFVar2 = param_1;
                    /* 0x130ac0  1753  ?execSetItem@UStatusIconHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207cf8;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  FStatusIconInfo::FStatusIconInfo(local_64);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,local_64);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_1010ef50(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_1004e640(local_18,param_1,local_64);
  }
  local_8 = local_8 & 0xffffff00;
  FStatusIconInfo::~FStatusIconInfo(local_64);
  ExceptionList = local_10;
  return;
}


// ==== 10130bce Catch@10130bce

void Catch_10130bce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10130be2 Catch@10130be2

void Catch_10130be2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UStatusIconHandle::execSetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130c00 UStatusIconHandle::execDelItem

/* public: void __thiscall UStatusIconHandle::execDelItem(struct FFrame &,void * const) */

void __thiscall
UStatusIconHandle::execDelItem(UStatusIconHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x130c00  1122  ?execDelItem@UStatusIconHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207d20;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_1010ef50(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_1004f210(local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10130cd5 Catch@10130cd5

void Catch_10130cd5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10130ce9 Catch@10130ce9

void Catch_10130ce9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UStatusIconHandle::execDelItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130d10 UStatusIconHandle::execClear

/* public: void __thiscall UStatusIconHandle::execClear(struct FFrame &,void * const) */

void __thiscall UStatusIconHandle::execClear(UStatusIconHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x130d10  1094  ?execClear@UStatusIconHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207d40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_1010ef50(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x174))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10130da3 Catch@10130da3

void Catch_10130da3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10130db7 Catch@10130db7

void Catch_10130db7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UStatusIconHandle::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130de0 UStatusIconHandle::execSetIconSize

/* public: void __thiscall UStatusIconHandle::execSetIconSize(struct FFrame &,void * const) */

void __thiscall
UStatusIconHandle::execSetIconSize(UStatusIconHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x130de0  1749  ?execSetIconSize@UStatusIconHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207d60;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1010ef50(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_1004e6f0(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10130e97 Catch@10130e97

void Catch_10130e97(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10130eab Catch@10130eab

void Catch_10130eab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UStatusIconHandle::execSetIconSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130ed0 UTabHandle::execInitTabCtrl

/* public: void __thiscall UTabHandle::execInitTabCtrl(struct FFrame &,void * const) */

void __thiscall UTabHandle::execInitTabCtrl(UTabHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x130ed0  1452  ?execInitTabCtrl@UTabHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207d80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_10005ce0(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    FUN_10050ec0(0,1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10130f62 Catch@10130f62

void Catch_10130f62(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10130f76 Catch@10130f76

void Catch_10130f76(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTabHandle::execInitTabCtrl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130fa0 UTabHandle::execSetTopOrder

/* public: void __thiscall UTabHandle::execSetTopOrder(struct FFrame &,void * const) */

void __thiscall UTabHandle::execSetTopOrder(UTabHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x130fa0  1832  ?execSetTopOrder@UTabHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207da0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_10005ce0(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_10050ec0(local_18,param_1 != (FFrame *)0x0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10131078 Catch@10131078

void Catch_10131078(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1013108c Catch@1013108c

void Catch_1013108c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTabHandle::execSetTopOrder");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101310b0 UTabHandle::execGetTopIndex

/* public: void __thiscall UTabHandle::execGetTopIndex(struct FFrame &,void * const) */

void __thiscall UTabHandle::execGetTopIndex(UTabHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1310b0  1430  ?execGetTopIndex@UTabHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207dc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_10005ce0(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar1 + 0x308);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10131142 Catch@10131142

void Catch_10131142(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10131156 Catch@10131156

void Catch_10131156(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTabHandle::execGetTopIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131180 UTabHandle::execSetDisable

/* public: void __thiscall UTabHandle::execSetDisable(struct FFrame &,void * const) */

void __thiscall UTabHandle::execSetDisable(UTabHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x131180  1726  ?execSetDisable@UTabHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207de0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_10005ce0(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_1004fc20(local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10131255 Catch@10131255

void Catch_10131255(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10131269 Catch@10131269

void Catch_10131269(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTabHandle::execSetDisable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131290 UTabHandle::execMergeTab

/* public: void __thiscall UTabHandle::execMergeTab(struct FFrame &,void * const) */

void __thiscall UTabHandle::execMergeTab(UTabHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x131290  1524  ?execMergeTab@UTabHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207e00;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10005ce0(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_10050d50(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10131347 Catch@10131347

void Catch_10131347(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1013135b Catch@1013135b

void Catch_1013135b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTabHandle::execMergeTab");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131380 UTextBoxHandle::execGetText

/* public: void __thiscall UTextBoxHandle::execGetText(struct FFrame &,void * const) */

void __thiscall UTextBoxHandle::execGetText(UTextBoxHandle *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  FString *pFVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x131380  1420  ?execGetText@UTextBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207e29;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_38;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_1010fc10(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    pFVar3 = (FString *)FUN_1010fba0(local_28);
    local_8._0_1_ = 1;
    FString::operator=(param_2,pFVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013142f Catch@1013142f

void Catch_1013142f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10131443 Catch@10131443

void Catch_10131443(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextBoxHandle::execGetText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131460 UTextBoxHandle::execSetText

/* public: void __thiscall UTextBoxHandle::execSetText(struct FFrame &,void * const) */

void __thiscall UTextBoxHandle::execSetText(UTextBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uStack_4c;
  FFrame *pFStack_48;
  undefined4 uStack_44;
  FFrame *pFStack_40;
  FString *pFStack_3c;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x131460  1807  ?execSetText@UTextBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207e62;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_3c = (FString *)0x1013149d;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_3c = local_28;
  pFStack_40 = param_1;
  uStack_44 = 0x101314c5;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_44 = 0;
    pFStack_48 = param_1;
    uStack_4c = 0x101314e8;
    (**(code **)(GNatives_exref + 0x108))();
  }
  uStack_44 = *(undefined4 *)(this + 0x34);
  pFStack_48 = (FFrame *)0x101314f1;
  iVar2 = FUN_1010fc10();
  if (iVar2 != 0) {
    FString::FString((FString *)&uStack_4c,local_28);
    local_8 = CONCAT31((int3)(local_8 >> 8),1);
    FUN_10052970();
  }
  local_8 = local_8 & 0xffffff00;
  uStack_44 = 0x10131527;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10131542 Catch@10131542

void Catch_10131542(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10131556 Catch@10131556

void Catch_10131556(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextBoxHandle::execSetText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131580 UTextBoxHandle::execSetTextColor

/* public: void __thiscall UTextBoxHandle::execSetTextColor(struct FFrame &,void * const) */

void __thiscall UTextBoxHandle::execSetTextColor(UTextBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x131580  1809  ?execSetTextColor@UTextBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207e80;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  FColor::FColor((FColor *)&local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1010fc10(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x348) =
         ((local_18 >> 0x10 & 0xff | 0xffffff00) << 8 | local_18 >> 8 & 0xff) << 8 | local_18 & 0xff
    ;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10131651 Catch@10131651

void Catch_10131651(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10131665 Catch@10131665

void Catch_10131665(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextBoxHandle::execSetTextColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131690 UTextBoxHandle::execGetTextColor

/* public: void __thiscall UTextBoxHandle::execGetTextColor(struct FFrame &,void * const) */

void __thiscall UTextBoxHandle::execGetTextColor(UTextBoxHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x131690  1422  ?execGetTextColor@UTextBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207ea0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_1010fc10(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    uVar2 = FUN_10051650();
    puVar3 = (undefined4 *)FColor::FColor((FColor *)&param_1,uVar2);
    *(undefined4 *)param_2 = *puVar3;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013172f Catch@1013172f

void Catch_1013172f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10131743 Catch@10131743

void Catch_10131743(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextBoxHandle::execGetTextColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131760 UTextBoxHandle::execSetAlign

/* public: void __thiscall UTextBoxHandle::execSetAlign(struct FFrame &,void * const) */

void __thiscall UTextBoxHandle::execSetAlign(UTextBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x131760  1709  ?execSetAlign@UTextBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207ec0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1010fc10(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x2ec) = local_18;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10131815 Catch@10131815

void Catch_10131815(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10131829 Catch@10131829

void Catch_10131829(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextBoxHandle::execSetAlign");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131850 UTextBoxHandle::execSetInt

/* public: void __thiscall UTextBoxHandle::execSetInt(struct FFrame &,void * const) */

void __thiscall UTextBoxHandle::execSetInt(UTextBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uStack_50;
  FFrame *pFStack_4c;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x131850  1750  ?execSetInt@UTextBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207ef2;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    pFStack_4c = param_1;
    uStack_50 = 0x101318ca;
    (**(code **)(GNatives_exref + 0x108))();
  }
  pFStack_4c = (FFrame *)0x101318d4;
  puVar2 = appItoa(local_18);
  pFStack_4c = (FFrame *)0x101318e1;
  FString::FString(local_2c,puVar2);
  local_8._0_1_ = 1;
  pFStack_4c = (FFrame *)0x101318ee;
  iVar3 = FUN_1010fc10();
  if (iVar3 != 0) {
    FString::FString((FString *)&uStack_50,local_2c);
    local_8._0_1_ = 1;
    FUN_10052970();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1013193f Catch@1013193f

void Catch_1013193f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10131953 Catch@10131953

void Catch_10131953(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextBoxHandle::execSetInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131970 UTextBoxHandle::execSetTooltipString

/* public: void __thiscall UTextBoxHandle::execSetTooltipString(struct FFrame &,void * const) */

void __thiscall
UTextBoxHandle::execSetTooltipString(UTextBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x131970  1826  ?execSetTooltipString@UTextBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207f19;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_1010fc10(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    puVar3 = FString::operator*(local_28);
    FUN_100519c0(puVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10131a43 Catch@10131a43

void Catch_10131a43(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10131a57 Catch@10131a57

void Catch_10131a57(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextBoxHandle::execSetTooltipString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131a80 UTextListBoxHandle::execAddString

/* public: void __thiscall UTextListBoxHandle::execAddString(struct FFrame &,void * const) */

void __thiscall
UTextListBoxHandle::execAddString(UTextListBoxHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uStack_3c;
  FString local_2c [20];
  FColor local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x131a80  1065  ?execAddString@UTextListBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207f49;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  FColor::FColor(local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar3 = (int *)FUN_10115f70(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    uVar7 = 0xc;
    uVar6 = 0xffffffff;
    uVar4 = FColor::operator_unsigned_long(local_18);
    puVar5 = FString::operator*(local_2c);
    (**(code **)(iVar2 + 0x210))(puVar5,uVar4,uVar6,uVar7);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10131b8c Catch@10131b8c

void Catch_10131b8c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10131ba0 Catch@10131ba0

void Catch_10131ba0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextListBoxHandle::execAddString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131bc0 UTextListBoxHandle::execClear

/* public: void __thiscall UTextListBoxHandle::execClear(struct FFrame &,void * const) */

void __thiscall
UTextListBoxHandle::execClear(UTextListBoxHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x131bc0  1095  ?execClear@UTextListBoxHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207f70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10115f70(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x174))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10131c53 Catch@10131c53

void Catch_10131c53(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10131c67 Catch@10131c67

void Catch_10131c67(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextListBoxHandle::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131c90 UTextureHandle::execSetTexture

/* public: void __thiscall UTextureHandle::execSetTexture(struct FFrame &,void * const) */

void __thiscall UTextureHandle::execSetTexture(UTextureHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uStack_4c;
  FFrame *pFStack_48;
  undefined4 uStack_44;
  FFrame *pFStack_40;
  FString *pFStack_3c;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x131c90  1812  ?execSetTexture@UTextureHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207fa2;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_3c = (FString *)0x10131ccd;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_3c = local_28;
  pFStack_40 = param_1;
  uStack_44 = 0x10131cf5;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_44 = 0;
    pFStack_48 = param_1;
    uStack_4c = 0x10131d18;
    (**(code **)(GNatives_exref + 0x108))();
  }
  uStack_44 = *(undefined4 *)(this + 0x34);
  pFStack_48 = (FFrame *)0x10131d21;
  iVar2 = FUN_10110410();
  if (iVar2 != 0) {
    FString::FString((FString *)&uStack_4c,local_28);
    local_8 = CONCAT31((int3)(local_8 >> 8),1);
    FUN_10052e50();
  }
  local_8 = local_8 & 0xffffff00;
  uStack_44 = 0x10131d57;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10131d72 Catch@10131d72

void Catch_10131d72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10131d86 Catch@10131d86

void Catch_10131d86(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextureHandle::execSetTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131db0 UTextureHandle::execSetUV

/* public: void __thiscall UTextureHandle::execSetUV(struct FFrame &,void * const) */

void __thiscall UTextureHandle::execSetUV(UTextureHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x131db0  1836  ?execSetUV@UTextureHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207fc0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_10110410(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_100532f0(local_18);
    FUN_10053380(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10131e8e Catch@10131e8e

void Catch_10131e8e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10131ea2 Catch@10131ea2

void Catch_10131ea2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextureHandle::execSetUV");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131ec0 UTextureHandle::execSetTextureSize

/* public: void __thiscall UTextureHandle::execSetTextureSize(struct FFrame &,void * const) */

void __thiscall
UTextureHandle::execSetTextureSize(UTextureHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x131ec0  1817  ?execSetTextureSize@UTextureHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10207fe0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_10110410(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_10053410(local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10131f95 Catch@10131f95

void Catch_10131f95(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10131fa9 Catch@10131fa9

void Catch_10131fa9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextureHandle::execSetTextureSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131fd0 UTextureHandle::execSetTextureWithObject

/* public: void __thiscall UTextureHandle::execSetTextureWithObject(struct FFrame &,void * const) */

void __thiscall
UTextureHandle::execSetTextureWithObject(UTextureHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x131fd0  1820
                       ?execSetTextureWithObject@UTextureHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208000;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10110410(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_10052f30(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10132087 Catch@10132087

void Catch_10132087(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1013209b Catch@1013209b

void Catch_1013209b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextureHandle::execSetTextureWithObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101320c0 UTextureHandle::execSetTextureCtrlType

/* public: void __thiscall UTextureHandle::execSetTextureCtrlType(struct FFrame &,void * const) */

void __thiscall
UTextureHandle::execSetTextureCtrlType(UTextureHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1320c0  1814  ?execSetTextureCtrlType@UTextureHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10208020;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10110410(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_100531e0(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10132177 Catch@10132177

void Catch_10132177(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1013218b Catch@1013218b

void Catch_1013218b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextureHandle::execSetTextureCtrlType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101321b0 UTextureHandle::execSetTextureWithClanCrest

/* public: void __thiscall UTextureHandle::execSetTextureWithClanCrest(struct FFrame &,void * const)
    */

void __thiscall
UTextureHandle::execSetTextureWithClanCrest(UTextureHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1321b0  1818
                       ?execSetTextureWithClanCrest@UTextureHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208040;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10110410(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_10052fc0(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10132267 Catch@10132267

void Catch_10132267(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1013227b Catch@1013227b

void Catch_1013227b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextureHandle::execSetTextureWithClanCrest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101322a0 UTextureHandle::execGetTextureName

/* public: void __thiscall UTextureHandle::execGetTextureName(struct FFrame &,void * const) */

void __thiscall
UTextureHandle::execGetTextureName(UTextureHandle *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int *piVar2;
  UObject *this_00;
  ushort *puVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1322a0  1424  ?execGetTextureName@UTextureHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208069;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_38;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar2 = (int *)FUN_10110410(*(undefined4 *)(this + 0x34));
  if (piVar2 != (int *)0x0) {
    this_00 = (UObject *)(**(code **)(*piVar2 + 0x1f8))();
    if (this_00 != (UObject *)0x0) {
      puVar3 = UObject::GetName(this_00);
      FString::operator=(local_28,puVar3);
    }
  }
  FString::operator=(param_2,local_28);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10132377 Catch@10132377

void Catch_10132377(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013238b Catch@1013238b

void Catch_1013238b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UTextureHandle::execGetTextureName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101323b0 UWindowHandle::SetTargetWnd

/* public: void __thiscall UWindowHandle::SetTargetWnd(class NCWnd *) */

void __thiscall UWindowHandle::SetTargetWnd(UWindowHandle *this,NCWnd *param_1)

{
                    /* 0x1323b0  920  ?SetTargetWnd@UWindowHandle@@QAEXPAVNCWnd@@@Z */
  *(NCWnd **)(this + 0x34) = param_1;
  return;
}


// ==== 10132403 Catch@10132403

void Catch_10132403(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10132417 Catch@10132417

void Catch_10132417(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::SetTargetWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132440 FUN_10132440

UObject * FUN_10132440(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10367370);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10132470 UWindowHandle::execSetWindowTitle

/* public: void __thiscall UWindowHandle::execSetWindowTitle(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execSetWindowTitle(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x132470  1849  ?execSetWindowTitle@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102080b9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar3 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    puVar4 = FString::operator*(local_28);
    (**(code **)(iVar2 + 0x168))(puVar4);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10132548 Catch@10132548

void Catch_10132548(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013255c Catch@1013255c

void Catch_1013255c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetWindowTitle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132580 UWindowHandle::execShowWindow

/* public: void __thiscall UWindowHandle::execShowWindow(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execShowWindow(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x132580  1857  ?execShowWindow@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102080e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x138))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10132613 Catch@10132613

void Catch_10132613(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10132627 Catch@10132627

void Catch_10132627(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132650 UWindowHandle::execHideWindow

/* public: void __thiscall UWindowHandle::execHideWindow(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execHideWindow(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x132650  1448  ?execHideWindow@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208100;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x13c))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 101326e3 Catch@101326e3

void Catch_101326e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101326f7 Catch@101326f7

void Catch_101326f7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execHideWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132720 UWindowHandle::execIsShowWindow

/* public: void __thiscall UWindowHandle::execIsShowWindow(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execIsShowWindow(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x132720  1503  ?execIsShowWindow@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208120;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0xfc))(0);
    *(undefined4 *)param_2 = uVar2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101327c5 Catch@101327c5

void Catch_101327c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101327d9 Catch@101327d9

void Catch_101327d9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execIsShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132800 UWindowHandle::execIsMinimizedWindow

/* public: void __thiscall UWindowHandle::execIsMinimizedWindow(struct FFrame &,void * const) */

void __thiscall
UWindowHandle::execIsMinimizedWindow(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x132800  1492  ?execIsMinimizedWindow@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208140;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_10010290(*(undefined4 *)(this + 0x34));
  if (iVar1 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    uVar2 = FUN_1005e820();
    *(undefined4 *)param_2 = uVar2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013289e Catch@1013289e

void Catch_1013289e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101328b2 Catch@101328b2

void Catch_101328b2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execIsMinimizedWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101328d0 UWindowHandle::execSetTimer

/* public: void __thiscall UWindowHandle::execSetTimer(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execSetTimer(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1328d0  1822  ?execSetTimer@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208160;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_10010290(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_10150550(local_18,param_1,iVar3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101329aa Catch@101329aa

void Catch_101329aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101329be Catch@101329be

void Catch_101329be(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101329e0 UWindowHandle::execKillTimer

/* public: void __thiscall UWindowHandle::execKillTimer(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execKillTimer(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1329e0  1512  ?execKillTimer@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208180;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10010290(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    FUN_1014b5f0(local_18,iVar2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10132a9c Catch@10132a9c

void Catch_10132a9c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10132ab0 Catch@10132ab0

void Catch_10132ab0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execKillTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132ad0 UWindowHandle::execGetWindowName

/* public: void __thiscall UWindowHandle::execGetWindowName(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execGetWindowName(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  FString *pFVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x132ad0  1440  ?execGetWindowName@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102081a9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_38;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_10010290(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    pFVar3 = (FString *)FUN_10057590(local_28);
    local_8._0_1_ = 1;
    FString::operator=(param_2,pFVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10132b7f Catch@10132b7f

void Catch_10132b7f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10132b93 Catch@10132b93

void Catch_10132b93(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execGetWindowName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132bb0 UWindowHandle::execGetParentWindowName

/* public: void __thiscall UWindowHandle::execGetParentWindowName(struct FFrame &,void * const) */

void __thiscall
UWindowHandle::execGetParentWindowName(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  FString *pFVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x132bb0  1284  ?execGetParentWindowName@UWindowHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102081d9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_38;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_10010290(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    iVar2 = FUN_10058f70();
    if (iVar2 != 0) {
      pFVar3 = (FString *)FUN_10057590(local_28);
      local_8._0_1_ = 1;
      FString::operator=(param_2,pFVar3);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
      ExceptionList = local_10;
      return;
    }
  }
  FString::operator=(param_2,(ushort *)&DAT_1022f9f8);
  ExceptionList = local_10;
  return;
}


// ==== 10132c8c Catch@10132c8c

void Catch_10132c8c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10132ca0 Catch@10132ca0

void Catch_10132ca0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execGetParentWindowName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132cc0 UWindowHandle::execIsChildOf

/* public: void __thiscall UWindowHandle::execIsChildOf(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execIsChildOf(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x132cc0  1473  ?execIsChildOf@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208200;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10010290(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    while( true ) {
      iVar2 = FUN_10058f70();
      if (iVar2 == 0) break;
      if (iVar2 == *(int *)(local_18 + 0x34)) {
        *(undefined4 *)param_2 = 1;
        ExceptionList = local_10;
        return;
      }
    }
  }
  *(undefined4 *)param_2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10132da5 Catch@10132da5

void Catch_10132da5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10132db9 Catch@10132db9

void Catch_10132db9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execIsChildOf");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132de0 UWindowHandle::execGetAlpha

/* public: void __thiscall UWindowHandle::execGetAlpha(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execGetAlpha(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x132de0  1160  ?execGetAlpha@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208220;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0xec))();
    *(uint *)param_2 = uVar2 & 0xff;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10132e7b Catch@10132e7b

void Catch_10132e7b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10132e8f Catch@10132e8f

void Catch_10132e8f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execGetAlpha");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132eb0 UWindowHandle::execSetAlpha

/* public: void __thiscall UWindowHandle::execSetAlpha(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execSetAlpha(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int *piVar3;
  int iVar4;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x132eb0  1712  ?execSetAlpha@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208240;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  piVar3 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    if (local_18 < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = local_18;
      if (0xfe < local_18) {
        iVar4 = 0xff;
      }
    }
    (**(code **)(*piVar3 + 0xe8))(iVar4,param_1,1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10132faf Catch@10132faf

void Catch_10132faf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10132fc3 Catch@10132fc3

void Catch_10132fc3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetAlpha");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132fe0 UWindowHandle::execSetWindowSizeRel43

/* public: void __thiscall UWindowHandle::execSetWindowSizeRel43(struct FFrame &,void * const) */

void __thiscall
UWindowHandle::execSetWindowSizeRel43(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int *piVar3;
  uint uStack_38;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x132fe0  1845  ?execSetWindowSizeRel43@UWindowHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10208260;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  piVar3 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x134))(local_20,local_1c,local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133112 Catch@10133112

void Catch_10133112(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10133126 Catch@10133126

void Catch_10133126(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetWindowSizeRel43");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133150 UWindowHandle::execSetWindowSize

/* public: void __thiscall UWindowHandle::execSetWindowSize(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execSetWindowSize(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int *piVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x133150  1843  ?execSetWindowSize@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208280;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  piVar3 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x128))((float)local_18,(float)(int)param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133234 Catch@10133234

void Catch_10133234(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10133248 Catch@10133248

void Catch_10133248(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetWindowSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133270 UWindowHandle::execGetWindowSize

/* public: void __thiscall UWindowHandle::execGetWindowSize(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execGetWindowSize(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uStack_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  UWindowHandle *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x133270  1441  ?execGetWindowSize@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102082a0;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_20 = this;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = (FFrame *)&local_18;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  local_1c = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar5 = &local_1c;
  }
  else {
    puVar5 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_10010290(*(undefined4 *)(local_20 + 0x34));
  if (iVar3 != 0) {
    local_34 = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    FUN_10058770(&local_38);
    uVar4 = FUN_101c19e0();
    *(undefined4 *)param_1 = uVar4;
    uVar4 = FUN_101c19e0();
    *puVar5 = uVar4;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101333d5 Catch@101333d5

void Catch_101333d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 101333e9 Catch@101333e9

void Catch_101333e9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execGetWindowSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133410 UWindowHandle::execSetWindowSizeRel

/* public: void __thiscall UWindowHandle::execSetWindowSizeRel(struct FFrame &,void * const) */

void __thiscall
UWindowHandle::execSetWindowSizeRel(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int *piVar3;
  uint uStack_38;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x133410  1847  ?execSetWindowSizeRel@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102082c0;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  piVar3 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x130))(local_20,local_1c,local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133542 Catch@10133542

void Catch_10133542(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10133556 Catch@10133556

void Catch_10133556(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetWindowSizeRel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133580 UWindowHandle::execClearAnchor

/* public: void __thiscall UWindowHandle::execClearAnchor(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execClearAnchor(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133580  1109  ?execClearAnchor@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102082e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xe4))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133613 Catch@10133613

void Catch_10133613(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10133627 Catch@10133627

void Catch_10133627(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execClearAnchor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133650 UWindowHandle::execIsAnchored

/* public: void __thiscall UWindowHandle::execIsAnchored(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execIsAnchored(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133650  1468  ?execIsAnchored@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208300;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_10010290(*(undefined4 *)(this + 0x34));
  if (iVar1 != 0) {
    uVar2 = FUN_1005a330();
    *(undefined4 *)param_2 = uVar2;
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)param_2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10133700 Catch@10133700

void Catch_10133700(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10133714 Catch@10133714

void Catch_10133714(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execIsAnchored");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133740 UWindowHandle::execGetRect

/* public: void __thiscall UWindowHandle::execGetRect(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execGetRect(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_50;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  UWindowHandle *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133740  1352  ?execGetRect@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208320;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  local_18 = this;
  puVar1 = &uStack_50;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  uVar5 = 0;
  uVar3 = 0;
  local_34 = 0;
  iVar2 = FUN_10010290(*(undefined4 *)(local_18 + 0x34));
  if (iVar2 != 0) {
    local_2c = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    FUN_10058770(&local_30);
    uVar5 = local_2c;
    uVar4 = local_30;
    uVar3 = FUN_101c19e0();
    local_34 = FUN_101c19e0();
  }
  *(undefined4 *)param_2 = uVar4;
  *(undefined4 *)((int)param_2 + 4) = uVar5;
  *(undefined4 *)((int)param_2 + 8) = uVar3;
  *(undefined4 *)((int)param_2 + 0xc) = local_34;
  ExceptionList = local_10;
  return;
}


// ==== 1013382a Catch@1013382a

void Catch_1013382a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1013383e Catch@1013383e

void Catch_1013383e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execGetRect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133860 UWindowHandle::execIsDraggable

/* public: void __thiscall UWindowHandle::execIsDraggable(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execIsDraggable(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133860  1478  ?execIsDraggable@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208340;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x84))();
    if ((uVar2 & 0x400000) != 0) {
      *(undefined4 *)param_2 = 1;
      ExceptionList = local_10;
      return;
    }
  }
  *(undefined4 *)param_2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10133920 Catch@10133920

void Catch_10133920(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10133934 Catch@10133934

void Catch_10133934(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execIsDraggable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133960 UWindowHandle::execSetDraggable

/* public: void __thiscall UWindowHandle::execSetDraggable(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execSetDraggable(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133960  1730  ?execSetDraggable@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208360;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar4 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    pcVar3 = *(code **)(iVar2 + 0x84);
    if (local_18 == 0) {
      uVar5 = (*pcVar3)();
      uVar5 = uVar5 & 0xffbfffff;
    }
    else {
      uVar5 = (*pcVar3)();
      uVar5 = uVar5 | 0x400000;
    }
    (**(code **)(iVar2 + 0x80))(uVar5);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133a39 Catch@10133a39

void Catch_10133a39(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10133a4d Catch@10133a4d

void Catch_10133a4d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetDraggable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133a70 UWindowHandle::execEnableWindow

/* public: void __thiscall UWindowHandle::execEnableWindow(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execEnableWindow(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133a70  1142  ?execEnableWindow@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208380;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x118))(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133b05 Catch@10133b05

void Catch_10133b05(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10133b19 Catch@10133b19

void Catch_10133b19(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execEnableWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133b40 UWindowHandle::execDisableWindow

/* public: void __thiscall UWindowHandle::execDisableWindow(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execDisableWindow(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133b40  1137  ?execDisableWindow@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102083a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x118))(0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133bd5 Catch@10133bd5

void Catch_10133bd5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10133be9 Catch@10133be9

void Catch_10133be9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execDisableWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133c10 UWindowHandle::execIsEnableWindow

/* public: void __thiscall UWindowHandle::execIsEnableWindow(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execIsEnableWindow(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133c10  1482  ?execIsEnableWindow@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102083c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x6c))();
    *(undefined4 *)param_2 = uVar2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133cb0 Catch@10133cb0

void Catch_10133cb0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10133cc4 Catch@10133cc4

void Catch_10133cc4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execIsEnableWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133cf0 UWindowHandle::execSetFocus

/* public: void __thiscall UWindowHandle::execSetFocus(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execSetFocus(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133cf0  1737  ?execSetFocus@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102083e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x78))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133d80 Catch@10133d80

void Catch_10133d80(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10133d94 Catch@10133d94

void Catch_10133d94(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetFocus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133dc0 UWindowHandle::execReleaseFocus

/* public: void __thiscall UWindowHandle::execReleaseFocus(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execReleaseFocus(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133dc0  1560  ?execReleaseFocus@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208400;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x7c))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133e50 Catch@10133e50

void Catch_10133e50(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10133e64 Catch@10133e64

void Catch_10133e64(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execReleaseFocus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133e90 UWindowHandle::execIsFocused

/* public: void __thiscall UWindowHandle::execIsFocused(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execIsFocused(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133e90  1485  ?execIsFocused@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x74))();
    *(undefined4 *)param_2 = uVar2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133f30 Catch@10133f30

void Catch_10133f30(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10133f44 Catch@10133f44

void Catch_10133f44(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execIsFocused");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133f70 UWindowHandle::execGetScript

/* public: void __thiscall UWindowHandle::execGetScript(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execGetScript(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133f70  1365  ?execGetScript@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208440;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0xc4))();
    *(undefined4 *)param_2 = uVar2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10134013 Catch@10134013

void Catch_10134013(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10134027 Catch@10134027

void Catch_10134027(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execGetScript");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134050 UWindowHandle::execSetTooltipText

/* public: void __thiscall UWindowHandle::execSetTooltipText(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execSetTooltipText(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uStack_4c;
  FFrame *pFStack_48;
  undefined4 uStack_44;
  FFrame *pFStack_40;
  FString *pFStack_3c;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x134050  1829  ?execSetTooltipText@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208472;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_3c = (FString *)0x1013408d;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_3c = local_28;
  pFStack_40 = param_1;
  uStack_44 = 0x101340b5;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_44 = 0;
    pFStack_48 = param_1;
    uStack_4c = 0x101340d8;
    (**(code **)(GNatives_exref + 0x108))();
  }
  uStack_44 = *(undefined4 *)(this + 0x34);
  pFStack_48 = (FFrame *)0x101340e1;
  piVar2 = (int *)FUN_10010290();
  if (piVar2 != (int *)0x0) {
    FString::FString((FString *)&uStack_4c,local_28);
    local_8 = CONCAT31((int3)(local_8 >> 8),1);
    (**(code **)(*piVar2 + 0xb0))();
  }
  local_8 = local_8 & 0xffffff00;
  uStack_44 = 0x1013411c;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10134137 Catch@10134137

void Catch_10134137(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013414b Catch@1013414b

void Catch_1013414b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetTooltipText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134170 UWindowHandle::execGetTooltipText

/* public: void __thiscall UWindowHandle::execGetTooltipText(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execGetTooltipText(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int *piVar2;
  FString *pFVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x134170  1429  ?execGetTooltipText@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102084a2;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_44;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  piVar2 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar2 != (int *)0x0) {
    pFVar3 = (FString *)(**(code **)(*piVar2 + 0xb8))(local_34);
    local_8._0_1_ = 2;
    FString::operator=(local_28,pFVar3);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
  }
  FString::operator=(param_2,local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1013424f Catch@1013424f

void Catch_1013424f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10134263 Catch@10134263

void Catch_10134263(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execGetTooltipText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134280 UWindowHandle::execSetTooltipType

/* public: void __thiscall UWindowHandle::execSetTooltipType(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execSetTooltipType(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x134280  1831  ?execSetTooltipType@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102084c9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar2 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xac))(local_28);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10134350 Catch@10134350

void Catch_10134350(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10134364 Catch@10134364

void Catch_10134364(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetTooltipType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134390 UWindowHandle::execSetFrameSize

/* public: void __thiscall UWindowHandle::execSetFrameSize(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execSetFrameSize(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int *piVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x134390  1739  ?execSetFrameSize@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102084f0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  piVar3 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xa8))((float)local_18,(float)(int)param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10134474 Catch@10134474

void Catch_10134474(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10134488 Catch@10134488

void Catch_10134488(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetFrameSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101344b0 UWindowHandle::execSetResizeFrameSize

/* public: void __thiscall UWindowHandle::execSetResizeFrameSize(struct FFrame &,void * const) */

void __thiscall
UWindowHandle::execSetResizeFrameSize(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  uint uStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1344b0  1786  ?execSetResizeFrameSize@UWindowHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10208510;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_10010290(*(undefined4 *)(this + 0x34));
  if (iVar3 != 0) {
    FUN_10057f80(&local_30);
    local_28 = (float)local_18;
    local_24 = (float)(int)param_1;
    FUN_1005c050(local_30,local_2c,local_28,local_24);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101345b4 Catch@101345b4

void Catch_101345b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101345c8 Catch@101345c8

void Catch_101345c8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetResizeFrameSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101345f0 UWindowHandle::execMoveTo

/* public: void __thiscall UWindowHandle::execMoveTo(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execMoveTo(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int *piVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1345f0  1535  ?execMoveTo@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208530;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  piVar3 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x144))(local_18,param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101346d2 Catch@101346d2

void Catch_101346d2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101346e6 Catch@101346e6

void Catch_101346e6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execMoveTo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134710 UWindowHandle::execMoveEx

/* public: void __thiscall UWindowHandle::execMoveEx(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execMoveEx(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int *piVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x134710  1531  ?execMoveEx@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208550;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  piVar3 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x14c))(local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101347ea Catch@101347ea

void Catch_101347ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101347fe Catch@101347fe

void Catch_101347fe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execMoveEx");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134820 UWindowHandle::execNotifyAlarm

/* public: void __thiscall UWindowHandle::execNotifyAlarm(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execNotifyAlarm(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x134820  1537  ?execNotifyAlarm@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208570;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x17c))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 101348b3 Catch@101348b3

void Catch_101348b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101348c7 Catch@101348c7

void Catch_101348c7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execNotifyAlarm");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101348f0 UWindowHandle::execSetScrollPosition

/* public: void __thiscall UWindowHandle::execSetScrollPosition(struct FFrame &,void * const) */

void __thiscall
UWindowHandle::execSetScrollPosition(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1348f0  1791  ?execSetScrollPosition@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208590;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = UObject::IsA(*(UObject **)(this + 0x34),(UClass *)&DAT_10367370);
  if (iVar2 != 0) {
    iVar2 = FUN_10132440(*(undefined4 *)(this + 0x34));
    if (iVar2 != 0) {
      FUN_10043f70(local_18);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101349b9 Catch@101349b9

void Catch_101349b9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101349cd Catch@101349cd

void Catch_101349cd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetScrollPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101349f0 UWindowHandle::execSetSettledWnd

/* public: void __thiscall UWindowHandle::execSetSettledWnd(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execSetSettledWnd(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  code *pcVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1349f0  1797  ?execSetSettledWnd@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102085b0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar2 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar2 != (int *)0x0) {
    if (local_18 == 0) {
      pcVar3 = *(code **)(*piVar2 + 0x124);
    }
    else {
      pcVar3 = *(code **)(*piVar2 + 0x120);
    }
    (*pcVar3)(0x80000);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10134abb Catch@10134abb

void Catch_10134abb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10134acf Catch@10134acf

void Catch_10134acf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetSettledWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134af0 UWindowHandle::execGetParentWindowHandle

/* public: void __thiscall UWindowHandle::execGetParentWindowHandle(struct FFrame &,void * const) */

void __thiscall
UWindowHandle::execGetParentWindowHandle(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x134af0  1283
                       ?execGetParentWindowHandle@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102085d9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_38;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = FUN_10010290(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    iVar2 = FUN_10058f70();
    if (iVar2 != 0) {
      uVar3 = FUN_100580a0();
      *(undefined4 *)param_2 = uVar3;
      ExceptionList = local_10;
      return;
    }
  }
  puVar4 = (undefined4 *)FUN_10057590(local_28);
  local_8._0_1_ = 1;
  uVar3 = FUN_10005c30(L"Failed to find window handle(%s)",*puVar4,puVar4[1],puVar4[2]);
  FUN_100d01f0(uVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10134bea Catch@10134bea

void Catch_10134bea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10134bfe Catch@10134bfe

void Catch_10134bfe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execGetParentWindowHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134c20 UWindowHandle::execSetAnchor

/* public: void __thiscall UWindowHandle::execSetAnchor(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execSetAnchor(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  FString *pFVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uStack_74;
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [20];
  int *local_2c;
  FString local_28 [4];
  undefined4 local_24;
  UWindowHandle *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x134c20  1715  ?execSetAnchor@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102086bd;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = this;
  FString::FString(local_58);
  local_8._0_1_ = 1;
  bVar4 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar4 * 4))(param_1,local_58);
  FString::FString(local_4c);
  local_8._0_1_ = 2;
  bVar4 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar4 * 4))(param_1,local_4c);
  FString::FString(local_40);
  local_8._0_1_ = 3;
  bVar4 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar4 * 4))(param_1,local_40);
  local_18 = 0;
  bVar4 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar4 * 4))(param_1,&local_18);
  local_1c = 0;
  bVar4 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar4 * 4))(param_1,&local_1c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(local_20 + 0x34));
  local_2c = piVar1;
  iVar2 = FString::Len(local_58);
  if (iVar2 == 0) {
    param_1 = *(FFrame **)(DAT_103663bc + 0x50ac);
  }
  else {
    uVar6 = 0;
    pFVar3 = local_58;
    FUN_10005c30(pFVar3,0);
    param_1 = (FFrame *)FUN_100d0cb0(pFVar3,uVar6);
  }
  if ((piVar1 != (int *)0x0) && (param_1 != (FFrame *)0x0)) {
    pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"TopLeft");
    local_8._0_1_ = 4;
    iVar2 = FString::operator==(local_4c,pFVar3);
    local_8._0_1_ = 3;
    FString::~FString(local_28);
    if (iVar2 == 0) {
      pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"TopCenter");
      local_8._0_1_ = 5;
      iVar2 = FString::operator==(local_4c,pFVar3);
      local_8._0_1_ = 3;
      FString::~FString(local_28);
      if (iVar2 == 0) {
        pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"TopRight");
        local_8._0_1_ = 6;
        iVar2 = FString::operator==(local_4c,pFVar3);
        local_8._0_1_ = 3;
        FString::~FString(local_28);
        if (iVar2 == 0) {
          pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"CenterLeft");
          local_8._0_1_ = 7;
          iVar2 = FString::operator==(local_4c,pFVar3);
          local_8._0_1_ = 3;
          FString::~FString(local_28);
          if (iVar2 == 0) {
            pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"CenterCenter");
            local_8._0_1_ = 8;
            iVar2 = FString::operator==(local_4c,pFVar3);
            local_8._0_1_ = 3;
            FString::~FString(local_28);
            if (iVar2 == 0) {
              pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"CenterRight");
              local_8._0_1_ = 9;
              iVar2 = FString::operator==(local_4c,pFVar3);
              local_8._0_1_ = 3;
              FString::~FString(local_28);
              if (iVar2 == 0) {
                pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"BottomLeft");
                local_8._0_1_ = 10;
                iVar2 = FString::operator==(local_4c,pFVar3);
                local_8._0_1_ = 3;
                FString::~FString(local_28);
                if (iVar2 == 0) {
                  pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"BottomCenter");
                  local_8._0_1_ = 0xb;
                  iVar2 = FString::operator==(local_4c,pFVar3);
                  local_8._0_1_ = 3;
                  FString::~FString(local_28);
                  if (iVar2 == 0) {
                    pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"BottomRight");
                    local_8._0_1_ = 0xc;
                    iVar2 = FString::operator==(local_4c,pFVar3);
                    local_8._0_1_ = 3;
                    FString::~FString(local_28);
                    bVar4 = -(iVar2 != 0) & 9;
                  }
                  else {
                    bVar4 = 8;
                  }
                }
                else {
                  bVar4 = 7;
                }
              }
              else {
                bVar4 = 6;
              }
            }
            else {
              bVar4 = 5;
            }
          }
          else {
            bVar4 = 4;
          }
        }
        else {
          bVar4 = 3;
        }
      }
      else {
        bVar4 = 2;
      }
    }
    else {
      bVar4 = 1;
    }
    pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"TopLeft");
    local_8._0_1_ = 0xd;
    local_20 = (UWindowHandle *)FString::operator==(local_40,pFVar3);
    local_8._0_1_ = 3;
    FString::~FString(local_64);
    if (local_20 == (UWindowHandle *)0x0) {
      pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"TopCenter");
      local_8._0_1_ = 0xe;
      local_20 = (UWindowHandle *)FString::operator==(local_40,pFVar3);
      local_8._0_1_ = 3;
      FString::~FString(local_64);
      if (local_20 == (UWindowHandle *)0x0) {
        pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"TopRight");
        local_8._0_1_ = 0xf;
        local_20 = (UWindowHandle *)FString::operator==(local_40,pFVar3);
        local_8._0_1_ = 3;
        FString::~FString(local_64);
        if (local_20 == (UWindowHandle *)0x0) {
          pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"CenterLeft");
          local_8._0_1_ = 0x10;
          iVar2 = FString::operator==(local_40,pFVar3);
          local_8._0_1_ = 3;
          FString::~FString(local_64);
          if (iVar2 == 0) {
            pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"CenterCenter");
            local_8._0_1_ = 0x11;
            iVar2 = FString::operator==(local_40,pFVar3);
            local_8._0_1_ = 3;
            FString::~FString(local_64);
            if (iVar2 == 0) {
              pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"CenterRight");
              local_8._0_1_ = 0x12;
              iVar2 = FString::operator==(local_40,pFVar3);
              local_8._0_1_ = 3;
              FString::~FString(local_64);
              if (iVar2 == 0) {
                pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"BottomLeft");
                local_8._0_1_ = 0x13;
                iVar2 = FString::operator==(local_40,pFVar3);
                local_8._0_1_ = 3;
                FString::~FString(local_64);
                if (iVar2 == 0) {
                  pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"BottomCenter");
                  local_8._0_1_ = 0x14;
                  iVar2 = FString::operator==(local_40,pFVar3);
                  local_8._0_1_ = 3;
                  FString::~FString(local_64);
                  if (iVar2 == 0) {
                    pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"BottomRight");
                    local_8._0_1_ = 0x15;
                    iVar2 = FString::operator==(local_40,pFVar3);
                    local_8._0_1_ = 3;
                    FString::~FString(local_64);
                    bVar5 = -(iVar2 != 0) & 9;
                  }
                  else {
                    bVar5 = 8;
                  }
                }
                else {
                  bVar5 = 7;
                }
              }
              else {
                bVar5 = 6;
              }
            }
            else {
              bVar5 = 5;
            }
          }
          else {
            bVar5 = 4;
          }
        }
        else {
          bVar5 = 3;
        }
      }
      else {
        bVar5 = 2;
      }
    }
    else {
      bVar5 = 1;
    }
    local_24 = local_18;
    (**(code **)(*local_2c + 0xd4))(bVar5,bVar4,param_1,local_18,local_1c,0);
  }
  local_8._0_1_ = 2;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_4c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_58);
  ExceptionList = local_10;
  return;
}


// ==== 101351d5 Catch@101351d5

void Catch_101351d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 101351e9 Catch@101351e9

void Catch_101351e9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetAnchor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135210 UWindowHandle::execMoveShake

/* public: void __thiscall UWindowHandle::execMoveShake(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execMoveShake(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int *piVar3;
  int iVar4;
  FString *this_00;
  ushort *puVar5;
  undefined4 uVar6;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x135210  1533  ?execMoveShake@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102086e9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  piVar3 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    iVar4 = FUN_1005a330();
    if (iVar4 != 0) {
      this_00 = (FString *)FUN_10057590(local_30);
      local_8._0_1_ = 1;
      puVar5 = FString::operator*(this_00);
      uVar6 = FUN_10005c30(L"Cannot move anchored window(%s)",puVar5);
      FUN_100d01f0(uVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_30);
    }
    (**(code **)(*piVar3 + 0x150))(local_1c,local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013535a Catch@1013535a

void Catch_1013535a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1013536e Catch@1013536e

void Catch_1013536e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execMoveShake");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135390 UWindowHandle::execMove

/* public: void __thiscall UWindowHandle::execMove(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execMove(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int *piVar3;
  int iVar4;
  FString *this_00;
  ushort *puVar5;
  undefined4 uVar6;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x135390  1529  ?execMove@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208719;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  piVar3 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    iVar4 = FUN_1005a330();
    if (iVar4 != 0) {
      this_00 = (FString *)FUN_10057590(local_30);
      local_8._0_1_ = 1;
      puVar5 = FString::operator*(this_00);
      uVar6 = FUN_10005c30(L"Cannot move anchored window(%s)",puVar5);
      FUN_100d01f0(uVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_30);
    }
    (**(code **)(*piVar3 + 0x148))(local_1c,local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101354da Catch@101354da

void Catch_101354da(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101354ee Catch@101354ee

void Catch_101354ee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135510 UWindowHandle::execSetTooltipCustomType

/* public: void __thiscall UWindowHandle::execSetTooltipCustomType(struct FFrame &,void * const) */

void __thiscall
UWindowHandle::execSetTooltipCustomType(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_40;
  FCustomTooltip local_30 [28];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x135510  1825  ?execSetTooltipCustomType@UWindowHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10208748;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FCustomTooltip::FCustomTooltip(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10010290(*(undefined4 *)(this + 0x34));
  if (iVar2 != 0) {
    iVar2 = FUN_10058120();
    if (iVar2 != 0) {
      FUN_10054f20(local_30);
    }
  }
  local_8 = local_8 & 0xffffff00;
  FCustomTooltip::~FCustomTooltip(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 101355e5 Catch@101355e5

void Catch_101355e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101355f9 Catch@101355f9

void Catch_101355f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execSetTooltipCustomType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135620 UWindowHandle::execGetTooltipCustomType

/* public: void __thiscall UWindowHandle::execGetTooltipCustomType(struct FFrame &,void * const) */

void __thiscall
UWindowHandle::execGetTooltipCustomType(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FCustomTooltip *pFVar3;
  uint uStack_44;
  FCustomTooltip local_34 [28];
  UWindowHandle *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x135620  1427  ?execGetTooltipCustomType@UWindowHandle@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10208778;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  FCustomTooltip::FCustomTooltip(local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar3 = local_34;
  }
  else {
    pFVar3 = *(FCustomTooltip **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10010290(*(undefined4 *)(local_18 + 0x34));
  if (iVar2 != 0) {
    iVar2 = FUN_10058120();
    if (iVar2 != 0) {
      FUN_10054450(pFVar3);
    }
  }
  local_8 = local_8 & 0xffffff00;
  FCustomTooltip::~FCustomTooltip(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10135731 Catch@10135731

void Catch_10135731(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10135745 Catch@10135745

void Catch_10135745(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UWindowHandle::execGetTooltipCustomType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135770 FUN_10135770

void FUN_10135770(void)

{
  FParser *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_102087a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FParser::FParser(in_ECX);
  local_8 = 1;
  FParser::SetSperator(in_ECX,(ushort *)u___10350d84);
  ExceptionList = local_10;
  return;
}


// ==== 101357d9 Catch@101357d9

void Catch_101357d9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101357ed Catch@101357ed

void Catch_101357ed(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleCmdParser::NConsoleCmdParser");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135810 FUN_10135810

void FUN_10135810(void)

{
  FParser *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102087d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  FParser::~FParser(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10135868 Catch@10135868

void Catch_10135868(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013587c Catch@1013587c

void Catch_1013587c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleCmdParser::~NConsoleCmdParser");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101358a0 FUN_101358a0

int FUN_101358a0(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  FParser *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208800;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == (ushort *)0x0) {
    return -1;
  }
  if ((*param_1 != *(ushort *)PTR_DAT_10350dbc) && (*param_1 != *(ushort *)PTR_DAT_10350dc0)) {
    return 0x20000000;
  }
  ExceptionList = &local_10;
  puVar1 = FParser::SetString(in_ECX,param_1);
  iVar2 = FL2GameData::GetCommandType((FL2GameData *)GL2GameData_exref,puVar1);
  ExceptionList = local_10;
  return iVar2;
}


// ==== 1013594a Catch@1013594a

void Catch_1013594a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013595e Catch@1013595e

void Catch_1013595e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleCmdParser::GetCommandType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135980 FUN_10135980

void FUN_10135980(void)

{
  FParser *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FParser::GetNextToken(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 101359ca Catch@101359ca

void Catch_101359ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101359de Catch@101359de

void Catch_101359de(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleCmdParser::GetNextToken");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135a00 FUN_10135a00

void FUN_10135a00(void)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 4) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  return;
}


// ==== 10135a20 FUN_10135a20

void FUN_10135a20(ushort *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  int iVar4;
  FString *pFVar5;
  undefined4 *puVar6;
  uint uStack_220;
  undefined1 local_210 [192];
  FString local_150 [12];
  FString local_144 [12];
  FString local_138 [12];
  FString local_12c [12];
  FString local_120 [12];
  FString local_114 [12];
  FString local_108 [12];
  FString local_fc [20];
  int local_e8;
  FString local_e4 [12];
  undefined1 *local_d8;
  void *local_d4;
  undefined1 *puStack_d0;
  int local_cc;
  undefined4 local_c8 [2];
  ushort local_c0 [92];
  uint local_8;
  
  puStack_d0 = &LAB_10208894;
  local_d4 = ExceptionList;
  uStack_220 = DAT_103554c4 ^ (uint)local_c8;
  local_d8 = (undefined1 *)&uStack_220;
  ExceptionList = &local_d4;
  local_cc = 0;
  local_8 = uStack_220;
  if (param_1 == (ushort *)0x0) goto LAB_10135af7;
  local_e8 = 0;
  local_d8 = (undefined1 *)&uStack_220;
  while ((iVar4 = local_e8, local_e8 < 0xb &&
         (iVar1 = appStricmp((ushort *)(&PTR_u__target_10350d90)[local_e8],param_1), iVar1 != 0))) {
    local_e8 = iVar4 + 1;
  }
  FUN_10135a00();
  FString::FString(local_e4);
  local_cc._0_1_ = 1;
  switch(iVar4) {
  case 0:
    iVar4 = FUN_1014ddd0();
    goto LAB_10135acf;
  case 1:
    iVar4 = FUN_1014dd00();
LAB_10135acf:
    if (iVar4 == 0) goto switchD_10135abd_default;
    puVar3 = (ushort *)(iVar4 + 0x1c);
LAB_10135ada:
    appStrcpy(param_1,puVar3);
    goto LAB_10135ae5;
  case 2:
    puVar2 = (undefined4 *)FUN_101458e0(local_210);
    puVar6 = local_c8;
    for (iVar4 = 0x30; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar4 = appStrlen(local_c0);
    if (iVar4 == 0) goto switchD_10135abd_default;
    puVar3 = local_c0;
    goto LAB_10135ada;
  case 3:
    pFVar5 = (FString *)FUN_10142840(local_138,0);
    local_cc._0_1_ = 2;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_138;
    break;
  case 4:
    pFVar5 = (FString *)FUN_10142840(local_144,1);
    local_cc._0_1_ = 3;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_144;
    break;
  case 5:
    pFVar5 = (FString *)FUN_10142840(local_fc,2);
    local_cc._0_1_ = 4;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_fc;
    break;
  case 6:
    pFVar5 = (FString *)FUN_10142840(local_120,3);
    local_cc._0_1_ = 5;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_120;
    break;
  case 7:
    pFVar5 = (FString *)FUN_10142840(local_150,4);
    local_cc._0_1_ = 6;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_150;
    break;
  case 8:
    pFVar5 = (FString *)FUN_10142840(local_108,5);
    local_cc._0_1_ = 7;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_108;
    break;
  case 9:
    pFVar5 = (FString *)FUN_10142840(local_114,6);
    local_cc._0_1_ = 8;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_114;
    break;
  case 10:
    pFVar5 = (FString *)FUN_10142840(local_12c,7);
    local_cc._0_1_ = 9;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_12c;
    break;
  default:
    goto switchD_10135abd_default;
  }
  local_cc._0_1_ = 1;
  FString::~FString(pFVar5);
  puVar3 = FString::operator*(local_e4);
  appStrcpy(param_1,puVar3);
  iVar4 = FString::operator_int(local_e4);
  if (iVar4 == 0) {
switchD_10135abd_default:
    local_cc = (uint)local_cc._1_3_ << 8;
    FString::~FString(local_e4);
  }
  else {
LAB_10135ae5:
    local_cc = (uint)local_cc._1_3_ << 8;
    FString::~FString(local_e4);
  }
LAB_10135af7:
  ExceptionList = local_d4;
  __security_check_cookie(local_8 ^ (uint)local_c8);
  return;
}


// ==== 10135cf7 Catch@10135cf7

void Catch_10135cf7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10135d0b Catch@10135d0b

void Catch_10135d0b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleCmdParser::ReplacePredefinedVar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135d60 FUN_10135d60

void FUN_10135d60(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  return;
}


// ==== 10135db3 Catch@10135db3

void Catch_10135db3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10135dc7 Catch@10135dc7

void Catch_10135dc7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"CL2NPKCrypt::CL2NPKCrypt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135df0 FUN_10135df0

int FUN_10135df0(void)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102088e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = 1;
  if (0 < *in_ECX) {
    iVar1 = Ordinal_2(*in_ECX);
    if (iVar1 != 0) {
      *in_ECX = 0;
      ExceptionList = local_10;
      return iVar1;
    }
    *in_ECX = *in_ECX;
    iVar1 = 0;
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 10135e66 Catch@10135e66

void Catch_10135e66(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10135e7a Catch@10135e7a

void Catch_10135e7a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"CL2NPKCrypt::CloseKeyCrypt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135ea0 FUN_10135ea0

void FUN_10135ea0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208900;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  Ordinal_16(*in_ECX,DAT_103663b8,0x50d);
  ExceptionList = local_10;
  return;
}


// ==== 10135ef8 Catch@10135ef8

void Catch_10135ef8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10135f0c Catch@10135f0c

void Catch_10135f0c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"CL2NPKCrypt::RegCryptMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135f30 FUN_10135f30

void FUN_10135f30(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  Ordinal_26(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10135f87 Catch@10135f87

void Catch_10135f87(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10135f9b Catch@10135f9b

void Catch_10135f9b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"CL2NPKCrypt::LoadAtStartup");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135fc0 FUN_10135fc0

void FUN_10135fc0(void)

{
  LSTATUS LVar1;
  uint uStack_3c;
  DWORD local_24;
  DWORD local_20;
  HKEY local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208940;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = 4;
  LVar1 = RegOpenKeyW((HKEY)0x80000002,L"Software\\INCAInternet\\npkcx",&local_1c);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExW(local_1c,L"protect",(LPDWORD)0x0,&local_24,(LPBYTE)&local_18,&local_20)
    ;
    if ((LVar1 != 0) || (local_18 == 0)) {
      local_18 = 1;
      RegSetValueExW(local_1c,L"protect",0,local_24,(BYTE *)&local_18,local_20);
    }
    RegCloseKey(local_1c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013607e Catch@1013607e

void Catch_1013607e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10136092 Catch@10136092

void Catch_10136092(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"CL2NPKCrypt::CheckRegistry");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101360b0 FUN_101360b0

void FUN_101360b0(void)

{
  HANDLE ProcessHandle;
  uint *puVar1;
  BOOL BVar2;
  uint uVar3;
  DWORD DesiredAccess;
  HANDLE *TokenHandle;
  uint uStack_48;
  PSID local_2c;
  DWORD local_28;
  HANDLE local_24;
  _SID_IDENTIFIER_AUTHORITY local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208960;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  uVar3 = 0;
  local_8 = 0;
  local_18 = uStack_48;
  puVar1 = &uStack_48;
  if (*(int *)GUnicodeOS_exref != 0) {
    local_20.Value[0] = '\0';
    local_20.Value[1] = '\0';
    local_20.Value[2] = '\0';
    local_20.Value[3] = '\0';
    local_20.Value[4] = '\0';
    local_20.Value[5] = '\x05';
    local_2c = (PSID)0x0;
    AllocateAndInitializeSid(&local_20,'\x02',0x20,0x220,0,0,0,0,0,0,&local_2c);
    local_24 = (HANDLE)0x0;
    TokenHandle = &local_24;
    DesiredAccess = 8;
    ProcessHandle = GetCurrentProcess();
    OpenProcessToken(ProcessHandle,DesiredAccess,TokenHandle);
    local_28 = 0;
    GetTokenInformation(local_24,TokenGroups,(LPVOID)0x0,0,&local_28);
    puVar1 = _malloc(local_28);
    GetTokenInformation(local_24,TokenGroups,puVar1,local_28,&local_28);
    while ((uVar3 < *puVar1 && (BVar2 = EqualSid(local_2c,(PSID)puVar1[uVar3 * 2 + 1]), BVar2 == 0))
          ) {
      uVar3 = uVar3 + 1;
    }
    _free(puVar1);
    CloseHandle(local_24);
    FreeSid(local_2c);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101361dd Catch@101361dd

void Catch_101361dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_102a47f0);
}


// ==== 101361f1 Catch@101361f1

void Catch_101361f1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"CL2NPKCrypt::IsAdminAuthority");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136210 FUN_10136210

void FUN_10136210(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208990;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  Ordinal_41();
  ExceptionList = local_10;
  return;
}


// ==== 1013625a Catch@1013625a

void Catch_1013625a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013626e Catch@1013626e

void Catch_1013626e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"CL2NPKCrypt::GetLoadStartup");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136290 FUN_10136290

void FUN_10136290(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102089b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10135df0();
  ExceptionList = local_10;
  return;
}


// ==== 101362e0 Catch@101362e0

void Catch_101362e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101362f4 Catch@101362f4

void Catch_101362f4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"CL2NPKCrypt::~CL2NPKCrypt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136320 FUN_10136320

void FUN_10136320(void)

{
  undefined1 *puVar1;
  FString *this;
  ushort *puVar2;
  int iVar3;
  FOutputDevice *in_ECX;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FString local_544 [20];
  FOutputDevice *local_530;
  undefined1 *local_52c;
  void *local_528;
  undefined1 *puStack_524;
  int local_520;
  CHAR local_51c [260];
  FOutputDevice local_418 [520];
  ushort local_210 [260];
  uint local_8;
  
  puStack_524 = &LAB_102089d9;
  local_528 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_51c;
  local_52c = &stack0xfffffaac;
  ExceptionList = &local_528;
  local_520 = 0;
  local_530 = in_ECX;
  puVar1 = &stack0xfffffaac;
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(in_ECX,*(EName *)GLog_exref,(ushort *)0x2f8);
    puVar1 = local_52c;
  }
  local_52c = puVar1;
  FUN_10135df0();
  this = (FString *)(**(code **)(**(int **)GFileManager_exref + 0x38))();
  local_520._0_1_ = 1;
  puVar2 = FString::operator*(this);
  appStrcpy(local_210,puVar2);
  local_520 = (uint)local_520._1_3_ << 8;
  FString::~FString(local_544);
  appStrcat(local_210,(ushort *)L"\\L2.exe");
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x2f8);
  }
  iVar3 = Ordinal_36();
  if (iVar3 == -1) {
    puVar2 = appStrrchr(local_210,0x5c);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = appStrrchr(local_210,0x5c);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = 0;
    }
    appSprintf((ushort *)local_418,(ushort *)&DAT_1027ba3c,local_210);
    appStrcat((ushort *)local_418,(ushort *)L"LineageII.exe");
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(local_418,*(EName *)GLog_exref,(ushort *)0x2f8);
    }
    iVar3 = Ordinal_36(local_418);
    if (iVar3 == -1) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_01,*(EName *)GLog_exref,(ushort *)0x2f8);
      }
      FUN_10135fc0();
      GetCurrentDirectoryA(0x104,local_51c);
      Ordinal_25(local_51c);
      iVar3 = Ordinal_1();
      *(int *)local_530 = iVar3;
      if (iVar3 < 1) {
        GetLastError();
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x2f8);
        }
      }
      else if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_02,*(EName *)GLog_exref,(ushort *)0x2f8);
      }
    }
    else {
      Ordinal_37(local_418,0xffffffff);
    }
  }
  else {
    Ordinal_37(local_210,0xffffffff);
    puVar2 = appStrrchr(local_210,0x5c);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = appStrrchr(local_210,0x5c);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = 0;
    }
    appSprintf((ushort *)local_418,(ushort *)&DAT_1027ba3c,local_210);
    appStrcat((ushort *)local_418,(ushort *)L"LineageII.exe");
    iVar3 = Ordinal_36(local_418);
    if (iVar3 != -1) {
      Ordinal_37(local_418,0xffffffff);
    }
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2
                (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2f8)
      ;
    }
  }
  ExceptionList = local_528;
  __security_check_cookie(local_8 ^ (uint)local_51c);
  return;
}


// ==== 1013662e Catch@1013662e

void Catch_1013662e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10136642 Catch@10136642

void Catch_10136642(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"CL2NPKCrypt::OpenKeyCrypt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136660 FUN_10136660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10136660(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208a10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_1003f630(L"Default.BlackTexture",1);
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  uVar1 = FUN_101c19e0();
  *(undefined4 *)(in_ECX + 0x1dc) = uVar1;
  uVar1 = FUN_101c19e0();
  *(undefined4 *)(in_ECX + 0x1e0) = uVar1;
  iVar2 = (**(code **)(**(int **)GConfig_exref + 0x10))
                    (L"AutoLogOn",L"L2ID",&DAT_1039cfd8,0x40,L"AutoLog.txt");
  if (iVar2 == 0) {
    appSprintf((ushort *)&DAT_1039cfd8,(ushort *)L"zodiac");
  }
  iVar2 = (**(code **)(**(int **)GConfig_exref + 0x10))
                    (L"AutoLogOn",L"L2Passwd",&DAT_1039cf58,0x40,L"AutoLog.txt");
  if (iVar2 == 0) {
    appSprintf((ushort *)&DAT_1039cf58,(ushort *)L"zodiac");
  }
  iVar2 = (**(code **)(**(int **)GConfig_exref + 4))
                    (L"AutoLogOn",L"L2Slot",&DAT_1039d058,L"AutoLog.txt");
  if (iVar2 == 0) {
    _DAT_1039d058 = 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10136796 Catch@10136796

void Catch_10136796(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101367aa Catch@101367aa

void Catch_101367aa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAutoLogWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101367d0 FUN_101367d0

undefined4 FUN_101367d0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208a30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1013681e Catch@1013681e

void Catch_1013681e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10136832 Catch@10136832

void Catch_10136832(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAutoLogWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136850 FUN_10136850

undefined4 FUN_10136850(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
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
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar4 = *(int *)(in_ECX + 0x1cc);
  if (iVar4 != 0) {
    uVar6 = 0xff;
    uVar5 = 1;
    uVar1 = FUN_101c19e0(iVar4,1,0xff);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_100218f0(0,0,uVar2,uVar1,iVar4,uVar5,uVar6);
  }
  if (*(int *)(in_ECX + 0x1d8) < 3) {
    for (iVar4 = 0; iVar4 < *(int *)(in_ECX + 0x1d8) + 1; iVar4 = iVar4 + 1) {
      FUN_100217a0(*(undefined4 *)(in_ECX + 0x1dc),*(int *)(in_ECX + 0x1e0) + iVar3,0xffdcdcdc,
                   (&PTR_u_1_Authorizing_____10350ddc)[iVar4],0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      iVar3 = iVar3 + 0xc;
    }
  }
  else if (*(int *)(in_ECX + 0x1d8) == 3) {
    FUN_100217a0(*(undefined4 *)(in_ECX + 0x1dc),*(undefined4 *)(in_ECX + 0x1e0),0xffdcdcdc,
                 PTR_u_Can_not_connect_to_server_10350de8,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  if ((*(int *)(in_ECX + 0x1d0) == 0) &&
     (iVar4 = FUN_10141a90(&DAT_1039cfd8,&DAT_1039cf58,0), iVar4 != 0)) {
    *(undefined4 *)(in_ECX + 0x1d0) = 1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 101369ed Catch@101369ed

void Catch_101369ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10136a01 Catch@10136a01

void Catch_10136a01(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAutoLogWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136a20 FUN_10136a20

void FUN_10136a20(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10208a78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10061fa0();
  *in_ECX = NCAutoLogWnd::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10136a97 Catch@10136a97

void Catch_10136a97(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10136aab Catch@10136aab

void Catch_10136aab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAutoLogWnd::NCAutoLogWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136ad0 FUN_10136ad0

void FUN_10136ad0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10208aa8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCAutoLogWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10136b30 FUN_10136b30

void FUN_10136b30(byte param_1)

{
  void *in_ECX;
  
  FUN_10136ad0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e4);
  }
  return;
}


// ==== 10136b70 FUN_10136b70

void FUN_10136b70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 20000;
  in_ECX[1] = 10000;
  in_ECX[2] = 100000;
  in_ECX[3] = 200;
  in_ECX[4] = 0x3c;
  in_ECX[5] = 100;
  in_ECX[6] = 2000;
  in_ECX[7] = 0x3dcccccd;
  return;
}


// ==== 10136bf8 Catch@10136bf8

void Catch_10136bf8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10136c0c Catch@10136c0c

void Catch_10136c0c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatLimit::NCChatLimit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136c30 FUN_10136c30

bool FUN_10136c30(int param_1)

{
  int *in_ECX;
  
  return *in_ECX < param_1;
}


// ==== 10136c80 Catch@10136c80

void Catch_10136c80(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10136c94 Catch@10136c94

void Catch_10136c94(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatLimit::IsMarkOver");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136cc0 FUN_10136cc0

bool FUN_10136cc0(int param_1)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 4) < param_1;
}


// ==== 10136d11 Catch@10136d11

void Catch_10136d11(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10136d25 Catch@10136d25

void Catch_10136d25(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatLimit::IsChatLimit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136d50 FUN_10136d50

void FUN_10136d50(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208b30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101c19e0();
  ExceptionList = local_10;
  return;
}


// ==== 10136db5 Catch@10136db5

void Catch_10136db5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10136dc9 Catch@10136dc9

void Catch_10136dc9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatLimit::GetSpeedMark");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136df0 FUN_10136df0

void FUN_10136df0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208b50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101c19e0();
  ExceptionList = local_10;
  return;
}


// ==== 10136e46 Catch@10136e46

void Catch_10136e46(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10136e5a Catch@10136e5a

void Catch_10136e5a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatLimit::GetSentence");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136e80 FUN_10136e80

void FUN_10136e80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}


// ==== 10136eda Catch@10136eda

void Catch_10136eda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10136eee Catch@10136eee

void Catch_10136eee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatData::NCChatData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136f10 FUN_10136f10

undefined4 FUN_10136f10(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 10136f57 Catch@10136f57

void Catch_10136f57(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10136f6b Catch@10136f6b

void Catch_10136f6b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMark::GetChatLimit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136f90 FUN_10136f90

void FUN_10136f90(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10208bbc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FString::FString((FString *)(in_ECX + 2));
  local_8 = 1;
  *in_ECX = 0;
  in_ECX[1] = 0;
  FString::operator=((FString *)(in_ECX + 2),(ushort *)&DAT_1022f9f8);
  ExceptionList = local_10;
  return;
}


// ==== 1013700b Catch@1013700b

void Catch_1013700b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013701f Catch@1013701f

void Catch_1013701f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMsgInfo::NCChatMsgInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137040 FUN_10137040

void FUN_10137040(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208bec;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 8),(ushort *)&DAT_1022f9f8);
  local_8 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 8));
  ExceptionList = local_10;
  return;
}


// ==== 101370aa Catch@101370aa

void Catch_101370aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101370be Catch@101370be

void Catch_101370be(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMsgInfo::~NCChatMsgInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101370e0 FUN_101370e0

void FUN_101370e0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  return;
}


// ==== 10137132 Catch@10137132

void Catch_10137132(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


