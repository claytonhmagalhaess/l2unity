// ==== 1014bab0 FUN_1014bab0

void FUN_1014bab0(undefined4 param_1,ushort *param_2)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bbab0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = ULinker::vftable;
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  FPackageFileSummary::FPackageFileSummary((FPackageFileSummary *)(in_ECX + 0x38));
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  local_4._0_1_ = 7;
  *(undefined4 *)(in_ECX + 0x9c) = 0x1e240;
  FString::FString((FString *)(in_ECX + 0xa0),param_2);
  local_4 = CONCAT31(local_4._1_3_,8);
  *(undefined4 *)(in_ECX + 0xac) = 0;
  if (*(int *)(in_ECX + 0x34) == 0) {
    appFailAssert("LinkerRoot",".\\UnLinker.cpp",0x54);
  }
  if (param_2 == (ushort *)0x0) {
    appFailAssert("InFilename",".\\UnLinker.cpp",0x55);
  }
  if (GIsEditor != 0) {
    *(uint *)(in_ECX + 0xac) = *(uint *)(in_ECX + 0xac) | 0x40000;
  }
  if (GIsClient != 0) {
    *(uint *)(in_ECX + 0xac) = *(uint *)(in_ECX + 0xac) | 0x10000;
  }
  if (GIsServer != 0) {
    *(uint *)(in_ECX + 0xac) = *(uint *)(in_ECX + 0xac) | 0x20000;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1014bc30 FUN_1014bc30

void FUN_1014bc30(undefined4 param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bbb50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = ULinker::vftable;
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  FPackageFileSummary::FPackageFileSummary((FPackageFileSummary *)(in_ECX + 0x38));
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0x1e240;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),10);
  *(undefined4 *)(in_ECX + 0xac) = 0;
  if (*(int *)(in_ECX + 0x34) == 0) {
    appFailAssert("LinkerRoot",".\\UnLinker.cpp",100);
  }
  if (GIsEditor != 0) {
    *(uint *)(in_ECX + 0xac) = *(uint *)(in_ECX + 0xac) | 0x40000;
  }
  if (GIsClient != 0) {
    *(uint *)(in_ECX + 0xac) = *(uint *)(in_ECX + 0xac) | 0x10000;
  }
  if (GIsServer != 0) {
    *(uint *)(in_ECX + 0xac) = *(uint *)(in_ECX + 0xac) | 0x20000;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1014bd90 FUN_1014bd90

void FUN_1014bd90(void)

{
  undefined4 uVar1;
  int iVar2;
  ULinkerLoad *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbb80;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xfc) == 0) {
    uVar1 = *(undefined4 *)(in_ECX + 0x34);
    ExceptionList = &pvStack_10;
    iVar2 = thunk_FUN_101495a0(uVar1);
    if (iVar2 != 0) {
      iVar2 = thunk_FUN_101495a0(uVar1);
      *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffff7;
    }
    local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x54); iVar2 = iVar2 + 1) {
      ULinkerLoad::VerifyImport(in_ECX,iVar2);
    }
  }
  *(undefined4 *)(in_ECX + 0xfc) = 1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1014be17 Catch@1014be17

void Catch_1014be17(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1014be2b Catch@1014be2b

void Catch_1014be2b(void)

{
  appUnwindf((ushort *)&DAT_101d4acc,L"ValidateImports");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014be46 Catch@1014be46

void Catch_1014be46(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x1c);
  thunk_FUN_10149350(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1014be91 Catch@1014be91

void Catch_1014be91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 1014bea5 Catch@1014bea5

void Catch_1014bea5(void)

{
  appUnwindf((ushort *)&DAT_101d4ad4,L"ULinkerLoad::Verify");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014bf10 FUN_1014bf10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1014bf10(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  UObject *pUVar2;
  int iVar3;
  ULinkerLoad *in_ECX;
  int iVar4;
  FName local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [8];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbb90;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  while( true ) {
    iVar4 = *(int *)(in_ECX + (param_1 * 7 + param_2 * 0x1f + param_3 & 0xffU) * 4 + 0x100);
    while (iVar4 != -1) {
      iVar3 = *(int *)(in_ECX + 0x90) + iVar4 * 0x24;
      if (((*(int *)(iVar3 + 0xc) == param_3) &&
          (((*(int *)(iVar3 + 8) == param_4 || (param_4 == -1)) &&
           (piVar1 = (int *)ULinkerLoad::GetExportClassPackage(in_ECX,(int)local_20),
           *piVar1 == param_2)))) &&
         (piVar1 = (int *)ULinkerLoad::GetExportClassName(in_ECX,(int)local_24), *piVar1 == param_1)
         ) {
        ExceptionList = local_10;
        return iVar4;
      }
      iVar4 = *(int *)(iVar3 + 0x20);
    }
    for (iVar4 = 0; local_18 = iVar4, iVar4 < *(int *)(in_ECX + 0x94); iVar4 = iVar4 + 1) {
      piVar1 = (int *)(*(int *)(in_ECX + 0x90) + iVar4 * 0x24);
      if ((piVar1[3] == param_3) && ((param_4 == -1 || (piVar1[2] == param_4)))) {
        pUVar2 = ULinkerLoad::IndexToObject(in_ECX,*piVar1);
        for (iVar3 = thunk_FUN_10149630(pUVar2); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x34)) {
          if (*(int *)(iVar3 + 0x20) == param_1) {
            ExceptionList = local_10;
            return iVar4;
          }
        }
      }
    }
    iVar4 = appStricmp((ushort *)(*(int *)(_Names + param_1 * 4) + 0xc),(ushort *)L"Mesh");
    if (iVar4 != 0) break;
    piVar1 = (int *)FName::FName(local_28,(ushort *)L"LodMesh",1);
    param_1 = *piVar1;
  }
  ExceptionList = local_10;
  return -1;
}


// ==== 1014c076 Catch@1014c076

void Catch_1014c076(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1014c08a Catch@1014c08a

void Catch_1014c08a(void)

{
  appUnwindf((ushort *)&DAT_101d4cd4,L"ULinkerLoad::FindExportIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014c110 FUN_1014c110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * FUN_1014c110(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  UObject *pUVar2;
  ushort *puVar3;
  ULinkerLoad *in_ECX;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbba0;
  local_10 = ExceptionList;
  local_8 = 0;
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar8 = 0xffffffff;
  ExceptionList = &local_10;
  iVar7 = param_2;
  iVar1 = ULinkerLoad::FindExportIndex();
  if (iVar1 == -1) {
    if (param_4 != 0) {
      iVar1 = *(int *)(_Names + param_2 * 4) + 0xc;
      iVar4 = *(int *)(_Names + *(int *)(param_1 + 0x20) * 4) + 0xc;
      puVar3 = LocalizeError((ushort *)L"FailedCreate",(ushort *)L"Core",(ushort *)0x0);
      appThrowf(puVar3,iVar4,iVar1,uVar5,uVar6,iVar7,uVar8);
    }
    ExceptionList = local_10;
    return (UObject *)0x0;
  }
  if ((param_3 & 0x10) != 0) {
    ExceptionList = local_10;
    return (UObject *)0xffffffff;
  }
  pUVar2 = ULinkerLoad::CreateExport(in_ECX,iVar1,param_3);
  ExceptionList = local_10;
  return pUVar2;
}


// ==== 1014c1e3 Catch@1014c1e3

void Catch_1014c1e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1014c1f7 Catch@1014c1f7

void Catch_1014c1f7(void)

{
  appUnwindf((ushort *)&DAT_101d4d04,L"ULinkerLoad::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014c260 FUN_1014c260

int FUN_1014c260(int param_1,undefined4 param_2)

{
  int iVar1;
  ULinkerLoad *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbbb0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = ULinkerLoad::FindExportIndex
                    (in_ECX,*(undefined4 *)(param_1 + 0x20),
                     *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x20),param_2,0xffffffff);
  ExceptionList = local_10;
  return iVar1;
}


// ==== 1014c2bb Catch@1014c2bb

void Catch_1014c2bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1014c2cf Catch@1014c2cf

void Catch_1014c2cf(void)

{
  appUnwindf((ushort *)&DAT_101d4d0c,L"ULinkerLoad::Check");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014c310 FUN_1014c310

void FUN_1014c310(UObject *param_1,ushort *param_2)

{
  int iVar1;
  ushort *puVar2;
  UClass *pUVar3;
  ULinker *in_ECX;
  void *unaff_EBP;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bbc02;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  ULinker::ULinker(in_ECX,param_1,param_2);
  uVar4 = 0;
  *(undefined ***)(in_ECX + 0xc0) = FArchive::vftable;
  *(undefined4 *)(in_ECX + 0xc4) = 0x7b;
  *(undefined4 *)(in_ECX + 200) = 2000;
  *(undefined4 *)(in_ECX + 0xcc) = 0x1e;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 1;
  *(undefined4 *)(in_ECX + 0xe4) = 1;
  *(undefined4 *)(in_ECX + 0xe8) = 1;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0xffffffff;
  *(undefined ***)in_ECX = ULinkerSave::vftable;
  *(undefined ***)(in_ECX + 0xc0) = ULinkerSave::vftable;
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  *(undefined4 *)(in_ECX + 0x104) = 0;
  *(undefined4 *)(in_ECX + 0x108) = 0;
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  *(undefined4 *)(in_ECX + 0x110) = 0;
  local_4 = 5;
  iVar1 = (**(code **)(*(int *)GFileManager + 0xc))(param_2,0,GThrow);
  *(int *)(in_ECX + 0xf8) = iVar1;
  if (iVar1 == 0) {
    puVar2 = LocalizeError((ushort *)L"OpenFailed",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar2);
  }
  *(undefined4 *)(in_ECX + 0x38) = 0x9e2a83c1;
  *(uint *)(in_ECX + 0x3c) = (-(uint)(*(int *)(GSys + 0x38) != 0) & 0x1e0000) + 0x7b;
  iVar1 = *(int *)(in_ECX + 0x34);
  if (iVar1 != 0) {
    for (pUVar3 = *(UClass **)(iVar1 + 0x24); pUVar3 != (UClass *)0x0;
        pUVar3 = *(UClass **)(pUVar3 + 0x34)) {
      if (pUVar3 == &UPackage::PrivateStaticClass) {
        if ((iVar1 == 0) || (pUVar3 = *(UClass **)(iVar1 + 0x24), pUVar3 == (UClass *)0x0))
        goto LAB_1014c48e;
        goto LAB_1014c480;
      }
    }
  }
  goto LAB_1014c493;
  while (pUVar3 = *(UClass **)(pUVar3 + 0x34), pUVar3 != (UClass *)0x0) {
LAB_1014c480:
    if (pUVar3 == &UPackage::PrivateStaticClass) goto LAB_1014c490;
  }
LAB_1014c48e:
  iVar1 = 0;
LAB_1014c490:
  uVar4 = *(undefined4 *)(iVar1 + 0x3c);
LAB_1014c493:
  *(undefined4 *)(in_ECX + 0x40) = uVar4;
  *(undefined4 *)(in_ECX + 0xd4) = 1;
  *(undefined4 *)(in_ECX + 0xdc) = 1;
  *(int *)(in_ECX + 0xe0) = GIsEditor;
  *(undefined4 *)(in_ECX + 0xe4) = 1;
  *(undefined4 *)(in_ECX + 0xe8) = 1;
  FArray::AddZeroed((FArray *)(in_ECX + 0xfc),4,DAT_1033088c);
  FArray::AddZeroed((FArray *)(in_ECX + 0x108),4,DAT_10327ae4);
  *(undefined4 *)(in_ECX + 0x9c) = 1;
  ExceptionList = unaff_EBP;
  return;
}


// ==== 1014c590 FUN_1014c590

void FUN_1014c590(void)

{
  thunk_FUN_1014c6e0();
  return;
}


// ==== 1014c5a0 FUN_1014c5a0

void FUN_1014c5a0(int *param_1)

{
  uint in_ECX;
  
  param_1 = *(int **)(*(int *)(in_ECX + 0x48) + *param_1 * 4);
  operator<<((FArchive *)(-(uint)(in_ECX != 0xc0) & in_ECX),(FCompactIndex *)&param_1);
  return;
}


// ==== 1014c5e0 FUN_1014c5e0

void FUN_1014c5e0(int *param_1)

{
  uint in_ECX;
  
  if (*param_1 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = *(int **)(*(int *)(in_ECX + 0x3c) + *(int *)(*param_1 + 4) * 4);
  }
  operator<<((FArchive *)(-(uint)(in_ECX != 0xc0) & in_ECX),(FCompactIndex *)&param_1);
  return;
}


// ==== 1014c630 FUN_1014c630

void FUN_1014c630(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bbc6d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ULinkerSave::vftable;
  *(undefined ***)(in_ECX + 0xc0) = ULinkerSave::vftable;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 2;
  thunk_FUN_101181d0();
  local_4 = CONCAT31(local_4._1_3_,1);
  thunk_FUN_101181d0();
  *(undefined ***)(in_ECX + 0xc0) = FArchive::vftable;
  local_4 = 0xffffffff;
  ULinker::~ULinker((ULinker *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1014c6e0 FUN_1014c6e0

void FUN_1014c6e0(byte param_1)

{
  void *in_ECX;
  
  thunk_FUN_1014c630();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x114);
  }
  return;
}


// ==== 1014c710 FUN_1014c710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c710(void)

{
  FString *this;
  ULinkerLoad *pUVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  ULinkerLoad *in_ECX;
  FOutputDevice *this_00;
  int iVar8;
  FNameEntry local_110 [4];
  uint local_10c;
  ushort local_104 [82];
  undefined1 local_60 [4];
  int local_5c;
  int local_54;
  int local_4c;
  ushort *local_40;
  int local_3c;
  uint local_38;
  int local_30;
  ushort *local_28 [3];
  int local_1c;
  FName local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbc90;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffee4;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar8 = 0; local_3c = iVar8, iVar8 < DAT_103308a4; iVar8 = iVar8 + 1) {
    iVar2 = *(int *)(in_ECX + 0x34);
    pUVar1 = UObject::GetLoader(iVar8);
    if (*(int *)(pUVar1 + 0x34) == iVar2) {
      iVar2 = *(int *)(_Names + *(int *)(iVar2 + 0x20) * 4) + 0xc;
      puVar3 = LocalizeError((ushort *)L"LinkerExists",(ushort *)L"Core",(ushort *)0x0);
      appThrowf(puVar3,iVar2);
    }
  }
  iVar8 = *(int *)GWarn;
  this = (FString *)(in_ECX + 0xa0);
  puVar3 = FString::operator*(this);
  puVar4 = LocalizeProgress((ushort *)L"Loading",(ushort *)L"Core",(ushort *)0x0);
  (**(code **)(iVar8 + 0x18))(GWarn,0,0,puVar4,puVar3);
  *(undefined4 *)(in_ECX + 0xc4) = 0x7b;
  *(undefined4 *)(in_ECX + 0xcc) = 0x1e;
  *(undefined4 *)(in_ECX + 0xdc) = 1;
  *(undefined4 *)(in_ECX + 0xd0) = 1;
  *(int *)(in_ECX + 0xe0) = GIsEditor;
  *(undefined4 *)(in_ECX + 0xe4) = 1;
  *(undefined4 *)(in_ECX + 0xe8) = 1;
  local_8 = 3;
  thunk_FUN_1014b850(in_ECX + 0xc0,in_ECX + 0x38);
  *(uint *)(in_ECX + 0xc4) = *(uint *)(in_ECX + 0x3c) & 0xffff;
  *(uint *)(in_ECX + 0xcc) = (int)*(uint *)(in_ECX + 0x3c) >> 0x10 & 0xffff;
  uVar5 = *(undefined4 *)(in_ECX + 0x34);
  iVar8 = thunk_FUN_101495a0(uVar5);
  if (iVar8 != 0) {
    iVar8 = thunk_FUN_101495a0(uVar5);
    *(undefined4 *)(iVar8 + 0x3c) = *(undefined4 *)(in_ECX + 0x40);
  }
  local_8 = 5;
  if (*(int *)(in_ECX + 0x38) != -0x61d57c3f) {
    FString::operator*(this);
    LocalizeError((ushort *)L"BinaryFormat",(ushort *)L"Core",(ushort *)0x0);
    FOutputDevice::Logf(this_00,(ushort *)GWarn);
    local_28[0] = LocalizeError((ushort *)L"Aborted",(ushort *)L"Core",(ushort *)0x0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28);
  }
  local_8 = 7;
  if ((*(uint *)(in_ECX + 0x3c) & 0xffff) < 0x3c) {
    iVar8 = *(int *)GWarn;
    puVar3 = FString::operator*(this);
    puVar4 = LocalizeQuery((ushort *)L"OldVersion",(ushort *)L"Core",(ushort *)0x0);
    iVar8 = (**(code **)(iVar8 + 0xc))(GWarn,puVar4,puVar3);
    if (iVar8 == 0) {
      local_40 = LocalizeError((ushort *)L"Aborted",(ushort *)L"Core",(ushort *)0x0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_40,&DAT_101f8198);
    }
  }
  local_8 = 0;
  thunk_FUN_1011a4d0(*(undefined4 *)(in_ECX + 0x54));
  thunk_FUN_1011a5a0(*(undefined4 *)(in_ECX + 0x4c));
  thunk_FUN_10114240(*(undefined4 *)(in_ECX + 0x44));
  local_8 = CONCAT31(local_8._1_3_,9);
  if (0 < *(int *)(in_ECX + 0x44)) {
    (**(code **)(*(int *)(in_ECX + 0xc0) + 0x3c))(*(undefined4 *)(in_ECX + 0x48));
    iVar8 = 0;
    while (local_4c = iVar8, iVar8 < *(int *)(in_ECX + 0x44)) {
      operator<<((FArchive *)(in_ECX + 0xc0),local_110);
      if ((*(uint *)(in_ECX + 0xac) & local_10c) == 0) {
        local_1c = 0;
        thunk_FUN_101493a0(&local_1c);
        iVar8 = iVar8 + 1;
      }
      else {
        uVar5 = FName::FName(local_18,local_104,1);
        thunk_FUN_101493a0(uVar5);
        iVar8 = iVar8 + 1;
      }
    }
  }
  iVar8 = 0;
  local_8 = 0xb;
  if (0 < *(int *)(in_ECX + 0x54)) {
    (**(code **)(*(int *)(in_ECX + 0xc0) + 0x3c))(*(undefined4 *)(in_ECX + 0x58));
    for (; local_30 = iVar8, iVar8 < *(int *)(in_ECX + 0x54); iVar8 = iVar8 + 1) {
      uVar5 = thunk_FUN_10114cb0(0x1c,in_ECX + 0x84);
      thunk_FUN_10148720(in_ECX + 0xc0,uVar5);
    }
  }
  iVar8 = 0;
  local_8 = 0xd;
  if (0 < *(int *)(in_ECX + 0x4c)) {
    pUVar1 = in_ECX + 0xc0;
    (**(code **)(*(int *)pUVar1 + 0x3c))(*(undefined4 *)(in_ECX + 0x50));
    while (local_54 = iVar8, iVar8 < *(int *)(in_ECX + 0x4c)) {
      iVar2 = thunk_FUN_10114d10(0x24,in_ECX + 0x90);
      if (iVar2 == 0) {
        thunk_FUN_10148620(pUVar1,0);
        iVar8 = iVar8 + 1;
      }
      else {
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0xffffffff;
        thunk_FUN_10148620(pUVar1,iVar2);
        iVar8 = iVar8 + 1;
      }
    }
  }
  iVar8 = 0;
  local_8 = 0;
  for (local_38 = 0; local_38 < 0x100; local_38 = local_38 + 1) {
    *(undefined4 *)(in_ECX + local_38 * 4 + 0x100) = 0xffffffff;
  }
  for (; local_5c = iVar8, iVar8 < *(int *)(in_ECX + 0x94); iVar8 = iVar8 + 1) {
    iVar2 = *(int *)(in_ECX + 0x90) + iVar8 * 0x24;
    piVar6 = (int *)ULinkerLoad::GetExportClassPackage(in_ECX,(int)local_18);
    local_1c = *piVar6;
    piVar6 = (int *)ULinkerLoad::GetExportClassName(in_ECX,(int)local_60);
    uVar7 = local_1c * 0x1f + *piVar6 * 7 + *(int *)(iVar2 + 0xc) & 0xff;
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(in_ECX + uVar7 * 4 + 0x100);
    *(int *)(in_ECX + uVar7 * 4 + 0x100) = iVar8;
  }
  thunk_FUN_101287a0(local_18);
  if (((byte)in_ECX[0xf8] & 0x80) == 0) {
    ULinkerLoad::Verify(in_ECX);
  }
  *(undefined4 *)(in_ECX + 0x9c) = 1;
  ExceptionList = local_10;
  return;
}


// ==== 1014cb64 Catch@1014cb64

void Catch_1014cb64(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -100);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_101f843c);
}


// ==== 1014cb78 Catch@1014cb78

void Catch_1014cb78(void)

{
  appUnwindf((ushort *)&DAT_101d4abc,L"LoadExportMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014cb93 Catch@1014cb93

void Catch_1014cb93(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x74);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_101f843c);
}


// ==== 1014cba7 Catch@1014cba7

void Catch_1014cba7(void)

{
  appUnwindf((ushort *)&DAT_101d4ab4,L"LoadImportMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014cbc2 Catch@1014cbc2

void Catch_1014cbc2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x6c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x54,&DAT_101f843c);
}


// ==== 1014cbd6 Catch@1014cbd6

void Catch_1014cbd6(void)

{
  appUnwindf((ushort *)&DAT_101d4aac,L"LoadNames");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014cbf1 Catch@1014cbf1

void Catch_1014cbf1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x7c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1014cc05 Catch@1014cc05

void Catch_1014cc05(void)

{
  appUnwindf((ushort *)&DAT_101d4aa4,L"CheckVersion");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014cc20 Catch@1014cc20

void Catch_1014cc20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x60);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_101f843c);
}


// ==== 1014cc34 Catch@1014cc34

void Catch_1014cc34(void)

{
  appUnwindf((ushort *)&DAT_101d4a5c,L"CheckTag");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014cc4f Catch@1014cc4f

void Catch_1014cc4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1014cc63 Catch@1014cc63

void Catch_1014cc63(void)

{
  appUnwindf((ushort *)&DAT_101d4a10,L"LoadSummary");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014cc7e Catch@1014cc7e

void Catch_1014cc7e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_101f843c);
}


// ==== 1014cc92 Catch@1014cc92

void Catch_1014cc92(void)

{
  appUnwindf((ushort *)&DAT_101d4a08,L"InitAr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014ccad Catch@1014ccad

void Catch_1014ccad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x78);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_101f843c);
}


// ==== 1014ccc1 Catch@1014ccc1

void Catch_1014ccc1(void)

{
  appUnwindf((ushort *)&DAT_101d4ac4,L"ULinkerLoad::Load");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014ce50 FUN_1014ce50

void FUN_1014ce50(UObject *param_1,ushort *param_2,undefined4 param_3)

{
  int iVar1;
  ushort *puVar2;
  ULinker *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101bbce2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ULinker::ULinker(in_ECX,param_1,param_2);
  *(undefined ***)(in_ECX + 0xc0) = FArchive::vftable;
  *(undefined4 *)(in_ECX + 0xc4) = 0x7b;
  *(undefined4 *)(in_ECX + 200) = 2000;
  *(undefined4 *)(in_ECX + 0xcc) = 0x1e;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 1;
  *(undefined4 *)(in_ECX + 0xe4) = 1;
  *(undefined4 *)(in_ECX + 0xe8) = 1;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0xffffffff;
  *(undefined ***)in_ECX = ULinkerLoad::vftable_for_ULinker_;
  *(undefined ***)(in_ECX + 0xc0) = ULinkerLoad::vftable_for_FArchive_;
  *(undefined4 *)(in_ECX + 0xf8) = param_3;
  *(undefined4 *)(in_ECX + 0x500) = 0;
  *(undefined4 *)(in_ECX + 0x504) = 0;
  *(undefined4 *)(in_ECX + 0x508) = 0;
  *(undefined4 *)(in_ECX + 0x50c) = 0;
  *(undefined4 *)(in_ECX + 0x510) = 0;
  *(undefined4 *)(in_ECX + 0x514) = 0;
  local_8 = 6;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = (**(code **)(*(int *)GFileManager + 8))(param_2,0,GError);
    *(int *)(in_ECX + iVar3 * 4 + 0x518) = iVar1;
    if (iVar1 == 0) {
      puVar2 = LocalizeError((ushort *)L"OpenFailed",(ushort *)L"Core",(ushort *)0x0);
      appThrowf(puVar2);
    }
  }
  ULinkerLoad::LoadObject((ULinkerLoad *)in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1014cfb0 Catch@1014cfb0

void Catch_1014cfb0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1014cfc4 Catch@1014cfc4

void Catch_1014cfc4(void)

{
  appUnwindf((ushort *)&DAT_101d4990,L"ULinkerLoad::ULinkerLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014d050 FUN_1014d050

void FUN_1014d050(UObject *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort *puVar2;
  ULinker *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101bbd42;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ULinker::ULinker(in_ECX,param_1);
  *(undefined ***)(in_ECX + 0xc0) = FArchive::vftable;
  *(undefined4 *)(in_ECX + 0xc4) = 0x7b;
  *(undefined4 *)(in_ECX + 200) = 2000;
  *(undefined4 *)(in_ECX + 0xcc) = 0x1e;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 1;
  *(undefined4 *)(in_ECX + 0xe4) = 1;
  *(undefined4 *)(in_ECX + 0xe8) = 1;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0xffffffff;
  *(undefined ***)in_ECX = ULinkerLoad::vftable_for_ULinker_;
  *(undefined ***)(in_ECX + 0xc0) = ULinkerLoad::vftable_for_FArchive_;
  *(undefined4 *)(in_ECX + 0xf8) = param_4;
  *(undefined4 *)(in_ECX + 0x500) = 0;
  *(undefined4 *)(in_ECX + 0x504) = 0;
  *(undefined4 *)(in_ECX + 0x508) = 0;
  *(undefined4 *)(in_ECX + 0x50c) = 0;
  *(undefined4 *)(in_ECX + 0x510) = 0;
  *(undefined4 *)(in_ECX + 0x514) = 0;
  local_8 = 6;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = (**(code **)(*(int *)GFileManager + 4))(param_2,param_3);
    *(int *)(in_ECX + iVar3 * 4 + 0x518) = iVar1;
    if (iVar1 == 0) {
      puVar2 = LocalizeError((ushort *)L"OpenFailed",(ushort *)L"Core",(ushort *)0x0);
      appThrowf(puVar2);
    }
  }
  ULinkerLoad::LoadObject((ULinkerLoad *)in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1014d1a6 Catch@1014d1a6

void Catch_1014d1a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1014d1ba Catch@1014d1ba

void Catch_1014d1ba(void)

{
  appUnwindf((ushort *)&DAT_101d49bc,L"ULinkerLoad::ULinkerLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014d240 FUN_1014d240

undefined4 FUN_1014d240(float *param_1,float *param_2)

{
  float *in_ECX;
  
  if (0.0 < (param_1[1] * *in_ECX + *param_2 * in_ECX[1] + *param_1 * param_2[1]) -
            (*in_ECX * param_2[1] + *param_1 * in_ECX[1] + param_1[1] * *param_2)) {
    return 1;
  }
  return 0;
}


// ==== 1014d2a0 FUN_1014d2a0

float10 FUN_1014d2a0(float *param_1,float *param_2,float param_3)

{
  return (float10)((*param_2 - *param_1) * param_3 + *param_1);
}


// ==== 1014d330 FUN_1014d330

void FUN_1014d330(void)

{
  undefined4 *in_ECX;
  float *pfVar1;
  double dVar2;
  int local_74;
  
  *in_ECX = 0xc6ff7800;
  in_ECX[1] = 0xc6ff7800;
  in_ECX[2] = 0xc6ff7800;
  in_ECX[3] = 0x46ff7800;
  in_ECX[4] = 0x46ff7800;
  in_ECX[5] = 0x46ff7800;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[9] = 0x3f800000;
  in_ECX[8] = 0;
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xd] = 0x3f800000;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0x3f800000;
  in_ECX[0x15] = 0;
  in_ECX[0x12] = 0x3f800000;
  in_ECX[0x13] = 0x3f800000;
  in_ECX[0x14] = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x16) = 5;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0x3f800000;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0xbf800000;
  in_ECX[0x20] = 0x3f800000;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  local_74 = 0;
  pfVar1 = (float *)(in_ECX + 0x23);
  do {
    dVar2 = appSin(((double)local_74 + (double)local_74) * 3.141592653589793 * 6.103515625e-05);
    local_74 = local_74 + 1;
    *pfVar1 = (float)dVar2;
    pfVar1 = pfVar1 + 1;
  } while (local_74 < 0x4000);
  local_74 = 0;
  pfVar1 = (float *)(in_ECX + 0x4023);
  do {
    dVar2 = appSqrt((double)local_74 * 6.103515625e-05);
    local_74 = local_74 + 1;
    *pfVar1 = (float)dVar2;
    pfVar1 = pfVar1 + 1;
  } while (local_74 < 0x4000);
  return;
}


// ==== 1014d5c0 FUN_1014d5c0

undefined4 * FUN_1014d5c0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float *in_ECX;
  double dVar4;
  
  appAtan2((double)in_ECX[1],(double)*in_ECX);
  uVar3 = FUN_1017b700();
  fVar1 = in_ECX[1];
  fVar2 = *in_ECX;
  param_1[1] = uVar3;
  dVar4 = appSqrt((double)(fVar2 * fVar2 + fVar1 * fVar1));
  appAtan2((double)in_ECX[2],dVar4);
  uVar3 = FUN_1017b700();
  *param_1 = uVar3;
  param_1[2] = 0;
  return param_1;
}


// ==== 1014d660 FUN_1014d660

void FUN_1014d660(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int in_ECX;
  float local_40;
  float local_c;
  float local_8;
  float local_4;
  
  local_40 = (*(float *)(in_ECX + 0x18) * *(float *)(in_ECX + 0x28) -
             *(float *)(in_ECX + 0x1c) * *(float *)(in_ECX + 0x24)) * *(float *)(in_ECX + 0x14) +
             (*(float *)(in_ECX + 0x1c) * *(float *)(in_ECX + 0x2c) -
             *(float *)(in_ECX + 0x20) * *(float *)(in_ECX + 0x28)) * *(float *)(in_ECX + 0xc) +
             (*(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 0x20) -
             *(float *)(in_ECX + 0x2c) * *(float *)(in_ECX + 0x18)) * *(float *)(in_ECX + 0x10);
  if (local_40 == 0.0) {
    local_40 = 1.0;
  }
  local_40 = 1.0 / local_40;
  fVar1 = *(float *)(in_ECX + 0x28);
  fVar2 = *(float *)(in_ECX + 0x18);
  fVar3 = *(float *)(in_ECX + 0x1c);
  fVar4 = *(float *)(in_ECX + 0x24);
  fVar5 = *(float *)(in_ECX + 0x10);
  fVar6 = *(float *)(in_ECX + 0x24);
  fVar7 = *(float *)(in_ECX + 0x28);
  fVar8 = *(float *)(in_ECX + 0xc);
  fVar9 = *(float *)(in_ECX + 0xc);
  fVar10 = *(float *)(in_ECX + 0x1c);
  fVar11 = *(float *)(in_ECX + 0x18);
  fVar12 = *(float *)(in_ECX + 0x10);
  fVar13 = *(float *)(in_ECX + 0x24);
  fVar14 = *(float *)(in_ECX + 0x20);
  fVar15 = *(float *)(in_ECX + 0x2c);
  fVar16 = *(float *)(in_ECX + 0x18);
  fVar17 = *(float *)(in_ECX + 0xc);
  fVar18 = *(float *)(in_ECX + 0x2c);
  fVar19 = *(float *)(in_ECX + 0x14);
  fVar20 = *(float *)(in_ECX + 0x24);
  fVar21 = *(float *)(in_ECX + 0x14);
  fVar22 = *(float *)(in_ECX + 0x18);
  fVar23 = *(float *)(in_ECX + 0xc);
  fVar24 = *(float *)(in_ECX + 0x20);
  fVar25 = *(float *)(in_ECX + 0x2c);
  fVar26 = *(float *)(in_ECX + 0x1c);
  fVar27 = *(float *)(in_ECX + 0x28);
  fVar28 = *(float *)(in_ECX + 0x20);
  fVar29 = *(float *)(in_ECX + 0x28);
  fVar30 = *(float *)(in_ECX + 0x14);
  fVar31 = *(float *)(in_ECX + 0x2c);
  fVar32 = *(float *)(in_ECX + 0x10);
  fVar33 = *(float *)(in_ECX + 0x10);
  fVar34 = *(float *)(in_ECX + 0x20);
  fVar35 = *(float *)(in_ECX + 0x14);
  fVar36 = *(float *)(in_ECX + 0x1c);
  thunk_FUN_1010f5b0();
  *param_1 = -local_c;
  param_1[1] = -local_8;
  param_1[3] = (fVar25 * fVar26 - fVar27 * fVar28) * local_40;
  param_1[2] = -local_4;
  param_1[4] = (fVar29 * fVar30 - fVar31 * fVar32) * local_40;
  param_1[5] = local_40 * (fVar33 * fVar34 - fVar35 * fVar36);
  param_1[6] = (fVar13 * fVar14 - fVar15 * fVar16) * local_40;
  param_1[7] = (fVar17 * fVar18 - fVar19 * fVar20) * local_40;
  param_1[9] = local_40 * (fVar1 * fVar2 - fVar3 * fVar4);
  param_1[8] = (fVar21 * fVar22 - fVar23 * fVar24) * local_40;
  param_1[10] = (fVar5 * fVar6 - fVar7 * fVar8) * local_40;
  param_1[0xb] = (fVar9 * fVar10 - fVar11 * fVar12) * local_40;
  return;
}


// ==== 1014d8c0 FUN_1014d8c0

float * FUN_1014d8c0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_1010f5b0(param_2);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = *param_2 + local_c;
  param_1[1] = fVar1 + local_8;
  param_1[2] = fVar2 + local_4;
  thunk_FUN_1010f5b0();
  param_1[3] = local_c;
  param_1[4] = local_8;
  param_1[5] = local_4;
  thunk_FUN_1010f5b0();
  param_1[6] = local_c;
  param_1[7] = local_8;
  param_1[8] = local_4;
  thunk_FUN_1010f5b0();
  param_1[9] = local_c;
  param_1[10] = local_8;
  param_1[0xb] = local_4;
  return param_1;
}


// ==== 1014d9c0 FUN_1014d9c0

float * FUN_1014d9c0(float *param_1,float *param_2)

{
  float fVar1;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  thunk_FUN_1010f5b0(param_2);
  fVar1 = *param_2 + local_18;
  local_20 = param_2[1] + local_14;
  local_1c = param_2[2];
  *param_1 = fVar1;
  local_1c = local_1c + local_10;
  param_1[1] = local_20;
  param_1[2] = local_1c;
  local_18 = param_2[3];
  local_14 = param_2[4];
  local_10 = param_2[5];
  FVector::GetNormalized((FVector *)&local_18);
  thunk_FUN_1010f5b0();
  param_1[3] = unaff_EBX;
  param_1[4] = fVar1;
  param_1[5] = local_20;
  local_1c = param_2[6];
  local_18 = param_2[7];
  local_14 = param_2[8];
  FVector::GetNormalized((FVector *)&local_1c);
  thunk_FUN_1010f5b0();
  param_1[6] = unaff_ESI;
  param_1[7] = unaff_EBX;
  param_1[8] = fVar1;
  local_20 = param_2[9];
  local_18 = param_2[0xb];
  local_1c = param_2[10];
  FVector::GetNormalized((FVector *)&local_20);
  thunk_FUN_1010f5b0();
  param_1[9] = unaff_EDI;
  param_1[10] = unaff_ESI;
  param_1[0xb] = unaff_EBX;
  return param_1;
}


// ==== 1014db40 FUN_1014db40

float * FUN_1014db40(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *in_ECX;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = 1.0 / ((in_ECX[6] * in_ECX[10] - in_ECX[7] * in_ECX[9]) * in_ECX[5] +
                   (in_ECX[7] * in_ECX[0xb] - in_ECX[8] * in_ECX[10]) * in_ECX[3] +
                   (in_ECX[9] * in_ECX[8] - in_ECX[0xb] * in_ECX[6]) * in_ECX[4]);
  fVar1 = in_ECX[10];
  fVar2 = in_ECX[5];
  fVar3 = in_ECX[4];
  fVar4 = in_ECX[0xb];
  fVar5 = in_ECX[4];
  fVar6 = in_ECX[8];
  fVar7 = in_ECX[5];
  fVar8 = in_ECX[7];
  param_1[3] = local_10 * (in_ECX[0xb] * in_ECX[7] - in_ECX[10] * in_ECX[8]);
  param_1[4] = (fVar1 * fVar2 - fVar3 * fVar4) * local_10;
  param_1[5] = (fVar5 * fVar6 - fVar7 * fVar8) * local_10;
  fVar1 = in_ECX[3];
  fVar2 = in_ECX[0xb];
  fVar3 = in_ECX[5];
  fVar4 = in_ECX[9];
  fVar5 = in_ECX[5];
  fVar6 = in_ECX[6];
  fVar7 = in_ECX[8];
  fVar8 = in_ECX[3];
  param_1[6] = (in_ECX[8] * in_ECX[9] - in_ECX[0xb] * in_ECX[6]) * local_10;
  param_1[7] = (fVar1 * fVar2 - fVar3 * fVar4) * local_10;
  param_1[8] = (fVar5 * fVar6 - fVar7 * fVar8) * local_10;
  fVar1 = in_ECX[4];
  fVar2 = in_ECX[9];
  fVar3 = in_ECX[10];
  fVar4 = in_ECX[3];
  fVar5 = in_ECX[3];
  fVar6 = in_ECX[7];
  fVar7 = in_ECX[4];
  fVar8 = in_ECX[6];
  local_18 = (in_ECX[10] * in_ECX[6] - in_ECX[7] * in_ECX[9]) * local_10;
  param_1[9] = local_18;
  local_14 = (fVar1 * fVar2 - fVar3 * fVar4) * local_10;
  param_1[10] = local_14;
  local_10 = local_10 * (fVar5 * fVar6 - fVar7 * fVar8);
  param_1[0xb] = local_10;
  local_c = -*in_ECX;
  local_8 = -in_ECX[1];
  local_4 = -in_ECX[2];
  thunk_FUN_1010f5b0(param_1,&local_c,&local_18);
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  return param_1;
}


// ==== 1014dd90 FUN_1014dd90

FRotator * FUN_1014dd90(FRotator *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FCoords *pFVar5;
  int in_ECX;
  int iVar6;
  undefined4 *puVar7;
  double dVar8;
  undefined4 local_a0 [6];
  float local_88;
  float local_84;
  float local_80;
  FCoords local_70 [108];
  
  fVar1 = *(float *)(in_ECX + 0xc);
  fVar2 = *(float *)(in_ECX + 0x10);
  appAtan2((double)*(float *)(in_ECX + 0x10),(double)*(float *)(in_ECX + 0xc));
  uVar3 = FUN_1017b700();
  dVar8 = appSqrt((double)(fVar1 * fVar1 + fVar2 * fVar2));
  appAtan2((double)*(float *)(in_ECX + 0x14),dVar8);
  uVar4 = FUN_1017b700();
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)param_1 = uVar4;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar7 = &DAT_1023ff60;
  pFVar5 = local_70;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pFVar5 = *puVar7;
    puVar7 = puVar7 + 1;
    pFVar5 = pFVar5 + 4;
  }
  pFVar5 = FCoords::operator/=(local_70,param_1);
  fVar1 = *(float *)(in_ECX + 0x1c);
  puVar7 = local_a0;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *(undefined4 *)pFVar5;
    pFVar5 = pFVar5 + 4;
    puVar7 = puVar7 + 1;
  }
  appAtan2((double)(local_80 * *(float *)(in_ECX + 0x2c) +
                   *(float *)(in_ECX + 0x28) * local_84 + *(float *)(in_ECX + 0x24) * local_88),
           (double)(local_84 * fVar1 + local_88 * *(float *)(in_ECX + 0x18) +
                   local_80 * *(float *)(in_ECX + 0x20)));
  uVar3 = FUN_1017b700();
  *(undefined4 *)(param_1 + 8) = uVar3;
  return param_1;
}


// ==== 1014df30 FUN_1014df30

void FUN_1014df30(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  *param_1 = in_ECX[3];
  param_1[1] = in_ECX[6];
  param_1[2] = in_ECX[9];
  param_1[3] = 0.0;
  param_1[4] = in_ECX[4];
  param_1[5] = in_ECX[7];
  param_1[6] = in_ECX[10];
  param_1[7] = 0.0;
  param_1[8] = in_ECX[5];
  param_1[9] = in_ECX[8];
  param_1[10] = in_ECX[0xb];
  param_1[0xb] = 0.0;
  fVar1 = -*in_ECX;
  fVar2 = -in_ECX[1];
  fVar3 = -in_ECX[2];
  param_1[0xc] = in_ECX[5] * fVar3 + fVar1 * in_ECX[3] + in_ECX[4] * fVar2;
  param_1[0xd] = in_ECX[8] * fVar3 + in_ECX[6] * fVar1 + in_ECX[7] * fVar2;
  param_1[0xe] = in_ECX[0xb] * fVar3 + in_ECX[9] * fVar1 + in_ECX[10] * fVar2;
  param_1[0xf] = 1.0;
  return;
}


// ==== 1014e070 FUN_1014e070

void FUN_1014e070(float *param_1)

{
  float fVar1;
  float *in_ECX;
  double dVar2;
  
  fVar1 = in_ECX[2] * in_ECX[2] + *in_ECX * *in_ECX + in_ECX[1] * in_ECX[1];
  if (fVar1 < 1e-08) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return;
  }
  dVar2 = appSqrt((double)fVar1);
  fVar1 = 1.0 / (float)dVar2;
  *param_1 = fVar1 * *in_ECX;
  param_1[1] = fVar1 * in_ECX[1];
  param_1[2] = fVar1 * in_ECX[2];
  return;
}


// ==== 1014e120 FUN_1014e120

undefined4
FUN_1014e120(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            undefined4 *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  float *pfVar15;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  
  pfVar15 = local_38;
  for (iVar14 = 7; iVar14 != 0; iVar14 = iVar14 + -1) {
    *pfVar15 = *param_1;
    param_1 = param_1 + 1;
    pfVar15 = pfVar15 + 1;
  }
  fVar4 = *param_4 + local_38[3];
  fVar5 = local_28 + param_4[1];
  fVar6 = param_4[2] + local_24;
  fVar7 = local_38[0] - *param_4;
  fVar8 = local_38[1] - param_4[1];
  fVar9 = local_38[2] - param_4[2];
  fVar10 = *param_3 - *param_2;
  fVar11 = param_3[1] - param_2[1];
  fVar12 = param_3[2] - param_2[2];
  bVar13 = true;
  local_44 = 0x3f800000;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  if (fVar7 <= *param_2) {
    if (*param_2 <= fVar4) {
      local_1c = 0.0;
    }
    else {
      if (!NAN(fVar10) && 0.0 < fVar10 != (fVar10 == 0.0)) {
        return 0;
      }
      bVar13 = false;
      local_1c = (fVar4 - *param_2) / fVar10;
    }
  }
  else {
    if (fVar10 <= 0.0) {
      return 0;
    }
    bVar13 = false;
    local_44 = 0xbf800000;
    local_1c = (fVar7 - *param_2) / fVar10;
  }
  if (fVar8 <= param_2[1]) {
    if (param_2[1] <= fVar5) {
      local_18 = 0.0;
    }
    else {
      if (0.0 <= fVar11) {
        return 0;
      }
      bVar13 = false;
      local_18 = (fVar5 - param_2[1]) / fVar11;
    }
  }
  else {
    if (fVar11 < 0.0 != (fVar11 == 0.0)) {
      return 0;
    }
    bVar13 = false;
    local_40 = 0xbf800000;
    local_18 = (fVar8 - param_2[1]) / fVar11;
  }
  if (fVar9 <= param_2[2]) {
    if (param_2[2] <= fVar6) {
      local_14 = 0.0;
      if (bVar13) {
        *param_5 = *param_2;
        param_5[1] = param_2[1];
        param_5[2] = param_2[2];
        *param_6 = 0;
        param_6[1] = 0;
        param_6[2] = 0x3f800000;
        *param_7 = 0.0;
        return 1;
      }
      goto LAB_1014e382;
    }
    fVar1 = fVar6;
    if (0.0 <= fVar12) {
      return 0;
    }
  }
  else {
    if (fVar12 < 0.0 != (fVar12 == 0.0)) {
      return 0;
    }
    local_3c = 0xbf800000;
    fVar1 = fVar9;
  }
  local_14 = (fVar1 - param_2[2]) / fVar12;
LAB_1014e382:
  if (local_18 <= local_14) {
    *param_7 = local_14;
    *param_6 = 0;
    param_6[1] = 0;
  }
  else {
    *param_7 = local_18;
    *param_6 = 0;
    param_6[1] = local_40;
    local_3c = 0;
  }
  param_6[2] = local_3c;
  if (*param_7 < local_1c) {
    *param_7 = local_1c;
    *param_6 = local_44;
    param_6[1] = 0;
    param_6[2] = 0;
  }
  if ((0.0 < *param_7 != (*param_7 == 0.0)) && (*param_7 <= 1.0)) {
    fVar1 = *param_7;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    *param_5 = fVar1 * fVar10 + *param_2;
    param_5[1] = fVar2 + fVar11 * fVar1;
    param_5[2] = fVar3 + fVar12 * fVar1;
    if (((fVar7 - 0.1 < *param_5) &&
        (((*param_5 < fVar4 + 0.1 && (fVar8 - 0.1 < param_5[1])) && (param_5[1] < fVar5 + 0.1)))) &&
       ((fVar9 - 0.1 < param_5[2] && (param_5[2] < fVar6 + 0.1)))) {
      return 1;
    }
  }
  return 0;
}


// ==== 1014e51c Catch@1014e51c

void Catch_1014e51c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_101f843c);
}


// ==== 1014e530 Catch@1014e530

void Catch_1014e530(void)

{
  appUnwindf((ushort *)&DAT_101d5de0,L"FLineExtentBoxIntersection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014e660 FUN_1014e660

float10 FUN_1014e660(float param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int *in_ECX;
  int iVar4;
  float10 fVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbd70;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = in_ECX[1];
  if (((1 < iVar1) && (pfVar2 = (float *)*in_ECX, *pfVar2 <= param_1)) &&
     (param_1 <= pfVar2[iVar1 * 2 + -2])) {
    for (iVar4 = 1; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      if (param_1 <= pfVar2[iVar4 * 2]) {
        fVar3 = (param_1 - pfVar2[iVar4 * 2 + -2]) / (pfVar2[iVar4 * 2] - pfVar2[iVar4 * 2 + -2]);
        if ((fVar3 < 0.0) || (ExceptionList = &local_10, 1.0 < fVar3)) {
          ExceptionList = &local_10;
          appFailAssert("Alpha >= 0 && Alpha <= 1",".\\UnMath.cpp",0x20d);
        }
        iVar1 = *in_ECX + iVar4 * 8;
        fVar5 = (float10)thunk_FUN_1014d2a0(iVar1 + -4,iVar1 + 4,fVar3);
        ExceptionList = local_10;
        return fVar5;
      }
    }
  }
  return (float10)0;
}


// ==== 1014e76c Catch@1014e76c

void Catch_1014e76c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1014e780 Catch@1014e780

void Catch_1014e780(void)

{
  appUnwindf((ushort *)&DAT_101d5e1c,L"FInterpCurve::Eval");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014e7f0 FUN_1014e7f0

void FUN_1014e7f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1014e860 FUN_1014e860

float10 FUN_1014e860(float *param_1,float *param_2)

{
  return (float10)((param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
                   (*param_2 - *param_1) * (*param_2 - *param_1) +
                  (param_2[2] - param_1[2]) * (param_2[2] - param_1[2]));
}


// ==== 1014e8e0 FUN_1014e8e0

void FUN_1014e8e0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *in_ECX;
  float fVar9;
  float10 fVar10;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbda0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  local_8 = 0;
  ExceptionList = &local_10;
  fVar10 = (float10)thunk_FUN_101147e0(*in_ECX);
  local_1c = (float)fVar10;
  fVar10 = (float10)thunk_FUN_101147e0(in_ECX[1]);
  local_20 = (float)fVar10;
  fVar10 = (float10)thunk_FUN_101147e0(in_ECX[2]);
  local_18 = (float)fVar10;
  if ((local_18 <= local_1c) || (local_18 <= local_20)) {
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x3f800000;
    fVar7 = 0.0;
    fVar9 = 1.0;
  }
  else {
    local_34 = 0x3f800000;
    local_30 = 0;
    local_2c = 0;
    fVar7 = 1.0;
    fVar9 = 0.0;
  }
  *param_1 = fVar7;
  param_1[1] = 0.0;
  param_1[2] = fVar9;
  fVar7 = in_ECX[2] * param_1[2] + param_1[1] * in_ECX[1] + *param_1 * *in_ECX;
  local_58 = *param_1 - fVar7 * *in_ECX;
  local_54 = param_1[1] - in_ECX[1] * fVar7;
  local_50 = param_1[2] - fVar7 * in_ECX[2];
  local_20 = local_54;
  local_1c = local_50;
  pfVar8 = (float *)FVector::SafeNormal((FVector *)&local_58);
  *param_1 = *pfVar8;
  param_1[1] = pfVar8[1];
  param_1[2] = pfVar8[2];
  fVar7 = param_1[2];
  fVar9 = *in_ECX;
  fVar1 = in_ECX[2];
  fVar2 = *param_1;
  fVar3 = in_ECX[1];
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar6 = *in_ECX;
  *param_2 = param_1[1] * in_ECX[2] - in_ECX[1] * param_1[2];
  param_2[1] = fVar7 * fVar9 - fVar1 * fVar2;
  param_2[2] = fVar3 * fVar4 - fVar5 * fVar6;
  ExceptionList = local_10;
  return;
}


// ==== 1014ea7c Catch@1014ea7c

void Catch_1014ea7c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1014ea90 Catch@1014ea90

void Catch_1014ea90(void)

{
  appUnwindf((ushort *)&DAT_101d5dc8,L"FindBestAxisVectors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014eb20 FUN_1014eb20

void FUN_1014eb20(int param_1,int param_2)

{
  FBox *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbdb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  in_ECX[0x18] = (FBox)0x0;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    FBox::operator+=(in_ECX,(FVector *)(param_1 + iVar1 * 0xc));
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014eb9f Catch@1014eb9f

void Catch_1014eb9f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1014ebb3 Catch@1014ebb3

void Catch_1014ebb3(void)

{
  appUnwindf((ushort *)&DAT_101d5dd8,L"FBox::FBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014ec00 FUN_1014ec00

void FUN_1014ec00(float param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbdc0;
  local_10 = ExceptionList;
  local_8 = 0;
  for (iVar4 = 0;
      (iVar4 < *(int *)(in_ECX + 4) && (*(float *)(*(int *)in_ECX + iVar4 * 8) < param_1));
      iVar4 = iVar4 + 1) {
  }
  iVar3 = *(int *)(in_ECX + 4);
  iVar1 = iVar3 + 1;
  ExceptionList = &local_10;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,8);
  }
  pvVar2 = (void *)(*(int *)in_ECX + iVar4 * 8);
  appMemmove((void *)((int)pvVar2 + 8),pvVar2,(iVar3 - iVar4) * 8);
  iVar1 = *(int *)in_ECX;
  *(float *)(iVar1 + iVar4 * 8) = param_1;
  *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = param_2;
  ExceptionList = local_10;
  return;
}


// ==== 1014ecc7 Catch@1014ecc7

void Catch_1014ecc7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1014ecdb Catch@1014ecdb

void Catch_1014ecdb(void)

{
  appUnwindf((ushort *)&DAT_101d5de8,L"FInterpCurve::AddPoint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014ed40 FUN_1014ed40

void FUN_1014ed40(FVector *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int iVar4;
  float10 fVar5;
  double dVar6;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbdd0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  local_8 = 0;
  if (param_2 != 0) {
    FBox::FBox((FBox *)&local_50,param_1,param_2);
    local_34 = local_50 + local_44;
    local_30 = local_4c + local_40;
    local_2c = local_48 + local_3c;
    local_1c = local_2c;
    local_18 = local_30;
    puVar3 = (undefined4 *)FVector::operator/((FVector *)&local_34,(float)&local_40);
    uVar1 = puVar3[1];
    uVar2 = puVar3[2];
    local_38 = 0;
    *in_ECX = *puVar3;
    in_ECX[1] = uVar1;
    in_ECX[2] = uVar2;
    in_ECX[3] = 0;
    iVar4 = 0;
    while (local_20 = iVar4, iVar4 < param_2) {
      fVar5 = (float10)thunk_FUN_1014e860(param_1 + iVar4 * 0xc);
      if ((float)fVar5 <= (float)in_ECX[3]) {
        iVar4 = iVar4 + 1;
      }
      else {
        in_ECX[3] = (float)fVar5;
        iVar4 = iVar4 + 1;
      }
    }
    dVar6 = appSqrt((double)(float)in_ECX[3]);
    in_ECX[3] = (float)((float10)dVar6 * (float10)1.0010000467300415);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014ee60 Catch@1014ee60

void Catch_1014ee60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1014ee74 Catch@1014ee74

void Catch_1014ee74(void)

{
  appUnwindf((ushort *)&DAT_101d5dd0,L"FSphere::FSphere");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014eef0 FUN_1014eef0

void FUN_1014eef0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1014ef40 FUN_1014ef40

int FUN_1014ef40(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = L2ThreadUtil::GetCurrentThreadIndex(&GThreadUtil);
  return iVar1 * 0x10 + in_ECX;
}


// ==== 1014ef60 FUN_1014ef60

void FUN_1014ef60(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = param_1;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  *in_ECX = 0;
  return;
}


// ==== 1014efae Catch@1014efae

void Catch_1014efae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1014efc2 Catch@1014efc2

void Catch_1014efc2(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FMemStack::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f000 FUN_1014f000

void FUN_1014f000(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbe10;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &local_10;
    appFailAssert("TopChunk==NULL",".\\UnMem.cpp",0x67);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014f05a Catch@1014f05a

void Catch_1014f05a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1014f06e Catch@1014f06e

void Catch_1014f06e(void)

{
  appUnwindf((ushort *)&DAT_101d5fc4,L"FMemStack::InitStack");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f0b0 FUN_1014f0b0

void FUN_1014f0b0(void)

{
  FTaggedMemory *pFVar1;
  FMemStackFrame *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbe20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FMemStackFrame::Tick(in_ECX);
  while (pFVar1 = FMemStackFrame::UnusedChunks, FMemStackFrame::UnusedChunks != (FTaggedMemory *)0x0
        ) {
    FMemStackFrame::UnusedChunks = *(FTaggedMemory **)FMemStackFrame::UnusedChunks;
    (**(code **)(*(int *)GMalloc + 8))(pFVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014f119 Catch@1014f119

void Catch_1014f119(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1014f12d Catch@1014f12d

void Catch_1014f12d(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FMemStack::Exit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f170 FUN_1014f170

void FUN_1014f170(void)

{
  int in_ECX;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  while (puVar1 != (undefined4 *)0x0) {
    if (puVar1 == *(undefined4 **)(in_ECX + 0xc)) {
      puVar1 = (undefined4 *)*puVar1;
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  return;
}


// ==== 1014f1c6 Catch@1014f1c6

void Catch_1014f1c6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1014f1da Catch@1014f1da

void Catch_1014f1da(void)

{
  appUnwindf((ushort *)&DAT_101d5fcc,L"FMemStack::GetByteCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f230 FUN_1014f230

void FUN_1014f230(FTaggedMemory *param_1)

{
  FTaggedMemory *pFVar1;
  int *in_ECX;
  FScopeCriticalSection local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bbe48;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  FScopeCriticalSection::FScopeCriticalSection(local_18,FMemStackFrame::MemStackCS);
  while (pFVar1 = (FTaggedMemory *)in_ECX[3], pFVar1 != param_1) {
    in_ECX[3] = *(int *)pFVar1;
    *(FTaggedMemory **)pFVar1 = FMemStackFrame::UnusedChunks;
    FMemStackFrame::UnusedChunks = pFVar1;
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  if (pFVar1 != (FTaggedMemory *)0x0) {
    *in_ECX = (int)(pFVar1 + 8);
    in_ECX[1] = (int)(pFVar1 + 8 + *(int *)(pFVar1 + 4));
  }
  local_8 = local_8 & 0xffffff00;
  FScopeCriticalSection::~FScopeCriticalSection(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 1014f2c6 Catch@1014f2c6

void Catch_1014f2c6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1014f2da Catch@1014f2da

void Catch_1014f2da(void)

{
  appUnwindf((ushort *)&DAT_101d5ff0,L"FMemStack::FreeChunks");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f330 FUN_1014f330

void FUN_1014f330(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  return;
}


// ==== 1014f340 FUN_1014f340

void FUN_1014f340(void)

{
  FMemStackFrame *in_ECX;
  int iVar1;
  
  iVar1 = 8;
  do {
    FMemStackFrame::Exit(in_ECX);
    in_ECX = in_ECX + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 1014f370 FUN_1014f370

void FUN_1014f370(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = L2ThreadUtil::GetCurrentThreadIndex(&GThreadUtil);
  FMemStackFrame::Tick((FMemStackFrame *)(iVar1 * 0x10 + in_ECX));
  return;
}


// ==== 1014f390 FUN_1014f390

void FUN_1014f390(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = L2ThreadUtil::GetCurrentThreadIndex(&GThreadUtil);
  FMemStackFrame::GetByteCount((FMemStackFrame *)(iVar1 * 0x10 + in_ECX));
  return;
}


// ==== 1014f3b0 FUN_1014f3b0

FTaggedMemory * FUN_1014f3b0(int param_1)

{
  FTaggedMemory *pFVar1;
  FTaggedMemory *pFVar2;
  int *in_ECX;
  FScopeCriticalSection local_1c [4];
  FTaggedMemory *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bbe68;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_10;
  FScopeCriticalSection::FScopeCriticalSection(local_1c,FMemStackFrame::MemStackCS);
  local_8._0_1_ = 1;
  pFVar2 = (FTaggedMemory *)&FMemStackFrame::UnusedChunks;
  do {
    local_18 = pFVar2;
    pFVar2 = (FTaggedMemory *)0x0;
    if (*(FTaggedMemory **)local_18 == (FTaggedMemory *)0x0) goto LAB_1014f40a;
    pFVar2 = *(FTaggedMemory **)local_18;
  } while (*(int *)(pFVar2 + 4) < param_1);
  *(int *)local_18 = *(int *)pFVar2;
LAB_1014f40a:
  if (pFVar2 == (FTaggedMemory *)0x0) {
    if (param_1 < in_ECX[2] + -0xc) {
      param_1 = in_ECX[2] + -0xc;
    }
    pFVar2 = (FTaggedMemory *)(*(code *)**(undefined4 **)GMalloc)(param_1 + 0xc,L"MemChunk");
    *(int *)(pFVar2 + 4) = param_1;
  }
  *(int *)pFVar2 = in_ECX[3];
  in_ECX[3] = (int)pFVar2;
  pFVar1 = pFVar2 + 8;
  *in_ECX = (int)pFVar1;
  in_ECX[1] = (int)(pFVar1 + *(int *)(pFVar2 + 4));
  local_8 = (uint)local_8._1_3_ << 8;
  FScopeCriticalSection::~FScopeCriticalSection(local_1c);
  ExceptionList = local_10;
  return pFVar1;
}


// ==== 1014f46c Catch@1014f46c

void Catch_1014f46c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1014f480 Catch@1014f480

void Catch_1014f480(void)

{
  appUnwindf((ushort *)&DAT_101d5fe8,L"FMemStack::AllocateNewChunk");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014f4e0 FUN_1014f4e0

void FUN_1014f4e0(int param_1)

{
  FCriticalSection *this;
  FMemStackFrame *in_ECX;
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bbe8b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (FMemStackFrame::MemStackCS == (FCriticalSection *)0x0) {
    ExceptionList = &pvStack_c;
    this = (FCriticalSection *)(*(code *)**(undefined4 **)GMalloc)(4,&DAT_101cd5d8);
    uStack_4 = 0;
    if (this == (FCriticalSection *)0x0) {
      FMemStackFrame::MemStackCS = (FCriticalSection *)0x0;
    }
    else {
      FMemStackFrame::MemStackCS = (FCriticalSection *)FCriticalSection::FCriticalSection(this);
    }
  }
  uStack_4 = 0xffffffff;
  iVar1 = 8;
  do {
    FMemStackFrame::Init(in_ECX,param_1);
    in_ECX = in_ECX + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1014f590 FUN_1014f590

void FUN_1014f590(void)

{
  FCriticalSection *pFVar1;
  
  pFVar1 = FMemStackFrame::MemStackCS;
  if (FMemStackFrame::MemStackCS != (FCriticalSection *)0x0) {
    FCriticalSection::~FCriticalSection(FMemStackFrame::MemStackCS);
    (**(code **)(*(int *)GMalloc + 8))(pFVar1);
    FMemStackFrame::MemStackCS = (FCriticalSection *)0x0;
  }
  return;
}


// ==== 1014f5d0 FUN_1014f5d0

void FUN_1014f5d0(int param_1,int param_2)

{
  uint uVar1;
  FMemStackFrame *in_ECX;
  
  uVar1 = (*(int *)in_ECX + -1 + param_2 & ~(param_2 - 1U)) + param_1;
  *(uint *)in_ECX = uVar1;
  if (*(uint *)(in_ECX + 4) < uVar1) {
    FMemStackFrame::AllocateNewChunk(in_ECX,param_2 + param_1);
    *(uint *)in_ECX = (*(int *)in_ECX + -1 + param_2 & ~(param_2 - 1U)) + param_1;
  }
  return;
}


// ==== 1014f630 FUN_1014f630

void FUN_1014f630(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  FMemStackFrame *this;
  
  iVar2 = L2ThreadUtil::GetCurrentThreadIndex(&GThreadUtil);
  this = (FMemStackFrame *)(iVar2 * 0x10 + in_ECX);
  uVar1 = (*(int *)(iVar2 * 0x10 + in_ECX) + -1 + param_2 & ~(param_2 - 1U)) + param_1;
  *(uint *)this = uVar1;
  if (*(uint *)(this + 4) < uVar1) {
    FMemStackFrame::AllocateNewChunk(this,param_2 + param_1);
    *(uint *)this = (*(int *)this + -1 + param_2 & ~(param_2 - 1U)) + param_1;
  }
  return;
}


// ==== 1014f6f0 FUN_1014f6f0

undefined4 FUN_1014f6f0(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  while( true ) {
    if (uVar1 == 0) {
      return 1;
    }
    if (0xff < uVar1) break;
    uVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return 0;
}


// ==== 1014f730 FUN_1014f730

uint FUN_1014f730(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = 0;
  param_3 = ~param_3;
  if (0 < param_2) {
    do {
      param_3 = param_3 << 8 ^
                (uint)(&GCRCTable)[(uint)*(byte *)(iVar1 + param_1) ^ param_3 >> 0x18];
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return ~param_3;
}


// ==== 1014f780 FUN_1014f780

uint FUN_1014f780(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = appStrlen(param_1);
  uVar3 = 0xffffffff;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      puVar1 = param_1 + iVar4;
      uVar3 = uVar3 << 8 ^ (uint)(&GCRCTable)[uVar3 >> 0x18 ^ *puVar1 & 0xff];
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 << 8 ^ (uint)(&GCRCTable)[(uVar3 >> 0x10 ^ (uint)*puVar1) >> 8];
    } while (iVar4 < iVar2);
  }
  return ~uVar3;
}


// ==== 1014f800 FUN_1014f800

int FUN_1014f800(int param_1)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0xffffffff) {
    return -0x100;
  }
  if (uVar1 < 0x10001) {
    bVar2 = -(0x100 < uVar1) & 8;
    return (uint)(byte)(&DAT_10284b68)[uVar1 >> bVar2] + (uint)bVar2;
  }
  bVar2 = (0x1000000 < uVar1) * '\b' + 0x10;
  return (uint)(byte)(&DAT_10284b68)[uVar1 >> bVar2] + (uint)bVar2;
}


// ==== 1014f870 FUN_1014f870

void FUN_1014f870(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = &DAT_10325476;
  return;
}


// ==== 1014f8d0 FUN_1014f8d0

ushort FUN_1014f8d0(ushort param_1)

{
  if (0xff < param_1) {
    param_1 = 0x7f;
  }
  return param_1;
}


// ==== 1014f900 FUN_1014f900

void FUN_1014f900(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined1 *)(param_1 + 1);
    puVar1 = (undefined1 *)(param_2 + 2);
    iVar3 = (param_3 - 1U >> 2) + 1;
    do {
      puVar2[-1] = puVar1[-2];
      *puVar2 = puVar1[-1];
      puVar2[1] = *puVar1;
      puVar2[2] = puVar1[1];
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


// ==== 1014f960 FUN_1014f960

void FUN_1014f960(undefined4 *param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  int iVar2;
  
  if (0 < param_3) {
    iVar2 = (param_3 - 1U >> 2) + 1;
    puVar1 = (undefined2 *)(param_2 + 2);
    do {
      iVar2 = iVar2 + -1;
      *param_1 = CONCAT31(CONCAT21(*puVar1,*(undefined1 *)((int)puVar1 + -1)),
                          *(undefined1 *)(puVar1 + -1));
      puVar1 = puVar1 + 2;
      param_1 = param_1 + 1;
    } while (iVar2 != 0);
  }
  return;
}


// ==== 1014f9c0 FUN_1014f9c0

void FUN_1014f9c0(void)

{
  undefined *local_4;
  
  appGetVarArgs((ushort *)&DAT_102877f8,0x1000,(ushort **)&stack0x00000004);
  local_4 = &DAT_102877f8;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_4,&DAT_101f843c);
}


// ==== 1014fa20 FUN_1014fa20

undefined4 FUN_1014fa20(ushort param_1)

{
  if ((((param_1 < 0x61) || (0x7a < param_1)) && ((param_1 < 0x41 || (0x5a < param_1)))) &&
     (9 < (ushort)(param_1 - 0x30))) {
    return 0;
  }
  return 1;
}


// ==== 1014fa60 FUN_1014fa60

void FUN_1014fa60(short *param_1)

{
  short *psVar1;
  short sVar2;
  
  sVar2 = *param_1;
  while (sVar2 != 0) {
    psVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    sVar2 = *psVar1;
  }
  return;
}


// ==== 1014fad0 FUN_1014fad0

void FUN_1014fad0(undefined4 param_1)

{
  (*(code *)**(undefined4 **)GMalloc)(param_1,&DAT_101cd5d8);
  return;
}


// ==== 1014fb00 FUN_1014fb00

undefined4 FUN_1014fb00(ushort *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 unaff_EBX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_retaddr;
  int *in_stack_00000014;
  int in_stack_00000018;
  int iVar7;
  int iVar8;
  undefined2 uStack_c4;
  int iStack_c2;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  ushort local_80 [54];
  int iStack_14;
  int iStack_c;
  int iStack_4;
  
  uStack_c4 = (undefined2)unaff_EBX;
  iStack_c2._0_2_ = (undefined2)((uint)unaff_EBX >> 0x10);
  iVar5 = DAT_10289e60;
  if (DAT_10289e60 == 0) {
    iVar6 = 1;
    do {
      appSprintf(local_80,(ushort *)L"%s%05i.bmp",param_1,iVar6);
      iVar1 = (**(code **)(*in_stack_00000014 + 0x10))(local_80);
      iVar5 = iVar6;
      if (iVar1 < 0) break;
      iVar6 = iVar6 + 1;
      iVar5 = DAT_10289e60;
    } while (iVar6 < 0x10000);
  }
  DAT_10289e60 = iVar5;
  iVar5 = DAT_10289e60;
  if (DAT_10289e60 < 0x10000) {
    while( true ) {
      iVar6 = DAT_10289e60;
      DAT_10289e60 = DAT_10289e60 + 1;
      appSprintf(local_80,(ushort *)L"%s%05i.bmp",param_1,iVar6);
      if (in_stack_00000018 != 0) {
        iVar6 = appStrlen(param_1);
        appStrncpy(local_80,param_1,iVar6 + 2);
      }
      iVar6 = (**(code **)(*in_stack_00000014 + 0x10))(local_80);
      if (iVar6 < 0) break;
      iVar5 = iVar5 + 1;
      if (0xffff < iVar5) {
        return 1;
      }
    }
    piVar2 = (int *)(**(code **)(*in_stack_00000014 + 0xc))(local_80,0,GNull);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iStack_c2 = iStack_4 * unaff_retaddr * 3 + 0x36;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_c4 = 0x4d42;
    uStack_ba = 0x36;
    uStack_b8 = 0;
    (**(code **)(*piVar2 + 4))(&uStack_c4,0xe);
    uStack_ac = 0;
    iStack_a8 = iStack_4 * unaff_retaddr * 3;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_bc = 0x28;
    uStack_ba = 0;
    uStack_b8 = (undefined2)iStack_4;
    uStack_b6 = (undefined2)((uint)iStack_4 >> 0x10);
    uStack_b0 = 1;
    uStack_ae = 0x18;
    (**(code **)(*piVar2 + 4))(&uStack_bc,0x28);
    iVar5 = unaff_retaddr + -1;
    if (-1 < iVar5) {
      iVar1 = iStack_14 * -4;
      iVar6 = iStack_c + iVar5 * iStack_14 * 4;
      iVar4 = iStack_14;
      iVar8 = iVar1;
      do {
        iVar3 = iVar4;
        iVar7 = iVar6;
        if (0 < iVar4) {
          do {
            iVar1 = iVar8;
            (**(code **)(*piVar2 + 4))(iVar6,3);
            iVar6 = iVar6 + 4;
            iVar3 = iVar3 + -1;
            iVar4 = iStack_14;
            iVar8 = iVar1;
          } while (iVar3 != 0);
        }
        iVar5 = iVar5 + -1;
        iVar6 = iVar7 + iVar1;
      } while (-1 < iVar5);
    }
    (**(code **)*piVar2)(1);
  }
  return 1;
}


// ==== 1014fdb0 FUN_1014fdb0

void FUN_1014fdb0(byte param_1)

{
  thunk_FUN_101279c0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return;
}


// ==== 1014fde0 FUN_1014fde0

FFileStream * FUN_1014fde0(void)

{
  FCriticalSection *this;
  uint uVar1;
  int iVar2;
  FStream *pFVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bbeb6;
  local_c = ExceptionList;
  if (FFileStream::Instance == (FFileStream *)0x0) {
    ExceptionList = &local_c;
    FFileStream::Instance = (FFileStream *)(*(code *)**(undefined4 **)GMalloc)(1,&DAT_101cd5d8);
    uVar1 = uStack_4;
    local_c = (void *)0xffffffff;
    FFileStream::Streams =
         (FStream *)
         (*(code *)**(undefined4 **)GMalloc)
                   ((uint)((ulonglong)uStack_4 * 0x24) |
                    -(uint)((int)((ulonglong)uStack_4 * 0x24 >> 0x20) != 0),&DAT_101cd5d8);
    this = (FCriticalSection *)(*(code *)**(undefined4 **)GMalloc)(4,&DAT_101cd5d8);
    uStack_4 = 1;
    if (this == (FCriticalSection *)0x0) {
      FFileStream::CriticalSection = (FCriticalSection *)0x0;
    }
    else {
      FFileStream::CriticalSection = (FCriticalSection *)FCriticalSection::FCriticalSection(this);
    }
    FFileStream::MaxStreams = uVar1;
    iVar2 = 0;
    pFVar3 = FFileStream::Streams;
    for (uVar1 = uVar1 * 0x24 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)pFVar3 = 0;
      pFVar3 = pFVar3 + 4;
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pFVar3 = (FStream)0x0;
      pFVar3 = pFVar3 + 1;
    }
  }
  ExceptionList = local_c;
  return FFileStream::Instance;
}


// ==== 1014ff50 FUN_1014ff50

int FUN_1014ff50(ushort *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  FFileStream *in_ECX;
  FStream *pFVar2;
  FScopeCriticalSection local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bbed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FScopeCriticalSection::FScopeCriticalSection(local_10,FFileStream::CriticalSection);
  local_4 = 0;
  *(undefined4 *)(FFileStream::Streams + FFileStream::StreamIndex * 0x24 + 0x20) = param_5;
  *(undefined4 *)(FFileStream::Streams + FFileStream::StreamIndex * 0x24 + 8) = param_6;
  iVar1 = FFileStream::Create(in_ECX,FFileStream::StreamIndex,param_1);
  if (iVar1 == 0) {
    pFVar2 = FFileStream::Streams + FFileStream::StreamIndex * 0x24;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pFVar2 = 0;
      pFVar2 = pFVar2 + 4;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pFVar2 = (FStream)0x0;
      pFVar2 = pFVar2 + 1;
    }
    local_4 = 0xffffffff;
    FScopeCriticalSection::~FScopeCriticalSection(local_10);
    ExceptionList = local_c;
    return -1;
  }
  *(undefined4 *)(FFileStream::Streams + FFileStream::StreamIndex * 0x24) = param_4;
  *(int *)(FFileStream::Streams + FFileStream::StreamIndex * 0x24 + 0x10) = param_2;
  *(undefined4 *)(FFileStream::Streams + FFileStream::StreamIndex * 0x24 + 0x14) = 0;
  *(undefined4 *)(FFileStream::Streams + FFileStream::StreamIndex * 0x24 + 0x1c) = 0;
  *(undefined4 *)(FFileStream::Streams + FFileStream::StreamIndex * 0x24 + 0x18) = 1;
  FFileStream::Read(in_ECX,FFileStream::StreamIndex,param_2 * param_3);
  iVar1 = FFileStream::StreamIndex;
  FFileStream::StreamIndex = (FFileStream::StreamIndex + 1) % FFileStream::MaxStreams;
  local_4 = 0xffffffff;
  FScopeCriticalSection::~FScopeCriticalSection(local_10);
  ExceptionList = local_c;
  return iVar1;
}


// ==== 10150120 FUN_10150120

void FUN_10150120(int param_1,int param_2)

{
  FFileStream *in_ECX;
  FScopeCriticalSection local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bbef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FScopeCriticalSection::FScopeCriticalSection(local_10,FFileStream::CriticalSection);
  local_4 = 0;
  if (*(int *)(FFileStream::Streams + param_1 * 0x24 + 0x18) != 0) {
    if (param_2 != 0) {
      FFileStream::Read(in_ECX,param_1,
                        *(int *)(FFileStream::Streams + param_1 * 0x24 + 0x14) *
                        *(int *)(FFileStream::Streams + param_1 * 0x24 + 0x10));
    }
    FFileStream::Destroy(in_ECX,param_1);
  }
  local_4 = 0xffffffff;
  FScopeCriticalSection::~FScopeCriticalSection(local_10);
  ExceptionList = local_c;
  return;
}


// ==== 101501d0 FUN_101501d0

void FUN_101501d0(int param_1,int param_2,undefined4 param_3)

{
  FScopeCriticalSection local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bbf18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FScopeCriticalSection::FScopeCriticalSection(local_10,FFileStream::CriticalSection);
  *(int *)(FFileStream::Streams + param_1 * 0x24 + 0x14) =
       *(int *)(FFileStream::Streams + param_1 * 0x24 + 0x14) + param_2;
  *(undefined4 *)(FFileStream::Streams + param_1 * 0x24) = param_3;
  local_4 = 0xffffffff;
  FScopeCriticalSection::~FScopeCriticalSection(local_10);
  ExceptionList = local_c;
  return;
}


// ==== 10150270 FUN_10150270

undefined4 FUN_10150270(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  FScopeCriticalSection local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bbf38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FScopeCriticalSection::FScopeCriticalSection(local_10,FFileStream::CriticalSection);
  uVar1 = 0;
  param_1 = param_1 * 0x24;
  *param_2 = *(undefined4 *)(FFileStream::Streams + param_1 + 0x14);
  if ((*(int *)(FFileStream::Streams + param_1 + 0x1c) == 0) &&
     (*(int *)(FFileStream::Streams + param_1 + 0x18) != 0)) {
    uVar1 = 1;
  }
  local_4 = 0xffffffff;
  FScopeCriticalSection::~FScopeCriticalSection(local_10);
  ExceptionList = local_c;
  return uVar1;
}


// ==== 10150320 FUN_10150320

undefined * FUN_10150320(void)

{
  return &DAT_10285088;
}


// ==== 10150330 FUN_10150330

undefined4 FUN_10150330(undefined4 param_1)

{
  return param_1;
}


// ==== 10150340 FUN_10150340

undefined4 FUN_10150340(undefined4 param_1)

{
  return param_1;
}


// ==== 10150350 FUN_10150350

void FUN_10150350(void)

{
  return;
}


// ==== 10150360 FUN_10150360

void FUN_10150360(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0x12;
  puVar1 = in_ECX;
  do {
    *puVar1 = *(undefined4 *)(((int)&DAT_102390b0 - (int)in_ECX) + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = &DAT_102394f8;
  puVar1 = in_ECX + 0x112;
  do {
    puVar1[-0x100] = puVar2[-0x100];
    *puVar1 = *puVar2;
    puVar1[0x100] = *(undefined4 *)(((int)&DAT_102394b0 - (int)in_ECX) + (int)puVar1);
    puVar1[0x200] = *(undefined4 *)(((int)&DAT_102398b0 - (int)in_ECX) + (int)puVar1);
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  } while ((int)puVar2 < 0x102398f8);
  return;
}


// ==== 101503f0 FUN_101503f0

void FUN_101503f0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  uint uVar3;
  
  uVar3 = *param_1 ^ *in_ECX;
  uVar2 = (in_ECX[(uVar3 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar3 >> 0x18) + 0x12] ^
          in_ECX[(uVar3 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar3 & 0xff) + 0x312] ^ in_ECX[1] ^
          *param_2;
  uVar3 = uVar3 ^ (in_ECX[(uVar2 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar2 >> 0x18) + 0x12] ^
                  in_ECX[(uVar2 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar2 & 0xff) + 0x312] ^ in_ECX[2];
  uVar2 = uVar2 ^ (in_ECX[(uVar3 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar3 >> 0x18) + 0x12] ^
                  in_ECX[(uVar3 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar3 & 0xff) + 0x312] ^ in_ECX[3];
  uVar3 = uVar3 ^ (in_ECX[(uVar2 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar2 >> 0x18) + 0x12] ^
                  in_ECX[(uVar2 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar2 & 0xff) + 0x312] ^ in_ECX[4];
  uVar2 = uVar2 ^ (in_ECX[(uVar3 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar3 >> 0x18) + 0x12] ^
                  in_ECX[(uVar3 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar3 & 0xff) + 0x312] ^ in_ECX[5];
  uVar3 = uVar3 ^ (in_ECX[(uVar2 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar2 >> 0x18) + 0x12] ^
                  in_ECX[(uVar2 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar2 & 0xff) + 0x312] ^ in_ECX[6];
  uVar2 = uVar2 ^ (in_ECX[(uVar3 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar3 >> 0x18) + 0x12] ^
                  in_ECX[(uVar3 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar3 & 0xff) + 0x312] ^ in_ECX[7];
  uVar3 = uVar3 ^ (in_ECX[(uVar2 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar2 >> 0x18) + 0x12] ^
                  in_ECX[(uVar2 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar2 & 0xff) + 0x312] ^ in_ECX[8];
  uVar2 = uVar2 ^ (in_ECX[(uVar3 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar3 >> 0x18) + 0x12] ^
                  in_ECX[(uVar3 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar3 & 0xff) + 0x312] ^ in_ECX[9];
  uVar3 = uVar3 ^ (in_ECX[(uVar2 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar2 >> 0x18) + 0x12] ^
                  in_ECX[(uVar2 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar2 & 0xff) + 0x312] ^ in_ECX[10]
  ;
  uVar2 = uVar2 ^ (in_ECX[(uVar3 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar3 >> 0x18) + 0x12] ^
                  in_ECX[(uVar3 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar3 & 0xff) + 0x312] ^
                  in_ECX[0xb];
  uVar3 = uVar3 ^ (in_ECX[(uVar2 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar2 >> 0x18) + 0x12] ^
                  in_ECX[(uVar2 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar2 & 0xff) + 0x312] ^
                  in_ECX[0xc];
  uVar2 = uVar2 ^ (in_ECX[(uVar3 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar3 >> 0x18) + 0x12] ^
                  in_ECX[(uVar3 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar3 & 0xff) + 0x312] ^
                  in_ECX[0xd];
  uVar3 = uVar3 ^ (in_ECX[(uVar2 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar2 >> 0x18) + 0x12] ^
                  in_ECX[(uVar2 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar2 & 0xff) + 0x312] ^
                  in_ECX[0xe];
  uVar2 = uVar2 ^ (in_ECX[(uVar3 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar3 >> 0x18) + 0x12] ^
                  in_ECX[(uVar3 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar3 & 0xff) + 0x312] ^
                  in_ECX[0xf];
  uVar1 = in_ECX[0x11];
  *param_2 = uVar3 ^ (in_ECX[(uVar2 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar2 >> 0x18) + 0x12] ^
                     in_ECX[(uVar2 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar2 & 0xff) + 0x312] ^
                     in_ECX[0x10];
  *param_1 = uVar2 ^ uVar1;
  return;
}


// ==== 10150890 FUN_10150890

void FUN_10150890(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *in_ECX;
  uint uVar7;
  
  uVar7 = in_ECX[0x11] ^ *param_1;
  uVar6 = (in_ECX[(uVar7 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar7 >> 0x18) + 0x12] ^
          in_ECX[(uVar7 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar7 & 0xff) + 0x312] ^ in_ECX[0x10] ^
          *param_2;
  uVar7 = uVar7 ^ (in_ECX[(uVar6 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar6 >> 0x18) + 0x12] ^
                  in_ECX[(uVar6 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar6 & 0xff) + 0x312] ^
                  in_ECX[0xf];
  uVar6 = uVar6 ^ (in_ECX[(uVar7 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar7 >> 0x18) + 0x12] ^
                  in_ECX[(uVar7 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar7 & 0xff) + 0x312] ^
                  in_ECX[0xe];
  uVar7 = uVar7 ^ (in_ECX[(uVar6 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar6 >> 0x18) + 0x12] ^
                  in_ECX[(uVar6 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar6 & 0xff) + 0x312] ^
                  in_ECX[0xd];
  uVar6 = uVar6 ^ (in_ECX[(uVar7 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar7 >> 0x18) + 0x12] ^
                  in_ECX[(uVar7 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar7 & 0xff) + 0x312] ^
                  in_ECX[0xc];
  uVar7 = uVar7 ^ (in_ECX[(uVar6 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar6 >> 0x18) + 0x12] ^
                  in_ECX[(uVar6 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar6 & 0xff) + 0x312] ^
                  in_ECX[0xb];
  uVar6 = uVar6 ^ (in_ECX[(uVar7 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar7 >> 0x18) + 0x12] ^
                  in_ECX[(uVar7 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar7 & 0xff) + 0x312] ^ in_ECX[10]
  ;
  uVar7 = uVar7 ^ (in_ECX[(uVar6 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar6 >> 0x18) + 0x12] ^
                  in_ECX[(uVar6 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar6 & 0xff) + 0x312] ^ in_ECX[9];
  uVar6 = uVar6 ^ (in_ECX[(uVar7 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar7 >> 0x18) + 0x12] ^
                  in_ECX[(uVar7 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar7 & 0xff) + 0x312] ^ in_ECX[8];
  uVar7 = uVar7 ^ (in_ECX[(uVar6 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar6 >> 0x18) + 0x12] ^
                  in_ECX[(uVar6 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar6 & 0xff) + 0x312] ^ in_ECX[7];
  uVar6 = uVar6 ^ (in_ECX[(uVar7 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar7 >> 0x18) + 0x12] ^
                  in_ECX[(uVar7 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar7 & 0xff) + 0x312] ^ in_ECX[6];
  uVar7 = uVar7 ^ (in_ECX[(uVar6 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar6 >> 0x18) + 0x12] ^
                  in_ECX[(uVar6 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar6 & 0xff) + 0x312] ^ in_ECX[5];
  uVar6 = uVar6 ^ (in_ECX[(uVar7 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar7 >> 0x18) + 0x12] ^
                  in_ECX[(uVar7 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar7 & 0xff) + 0x312] ^ in_ECX[4];
  uVar7 = uVar7 ^ (in_ECX[(uVar6 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar6 >> 0x18) + 0x12] ^
                  in_ECX[(uVar6 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar6 & 0xff) + 0x312] ^ in_ECX[3];
  uVar6 = uVar6 ^ (in_ECX[(uVar7 >> 0x10 & 0xff) + 0x112] + in_ECX[(uVar7 >> 0x18) + 0x12] ^
                  in_ECX[(uVar7 >> 8 & 0xff) + 0x212]) + in_ECX[(uVar7 & 0xff) + 0x312] ^ in_ECX[2];
  uVar1 = in_ECX[(uVar6 >> 0x10 & 0xff) + 0x112];
  uVar2 = in_ECX[(uVar6 >> 0x18) + 0x12];
  uVar3 = in_ECX[(uVar6 >> 8 & 0xff) + 0x212];
  uVar4 = in_ECX[(uVar6 & 0xff) + 0x312];
  uVar5 = in_ECX[1];
  *param_1 = *in_ECX ^ uVar6;
  *param_2 = uVar7 ^ (uVar1 + uVar2 ^ uVar3) + uVar4 ^ uVar5;
  return;
}


// ==== 10150d30 FUN_10150d30

void FUN_10150d30(ulong *param_1,int param_2)

{
  FBlowFish *in_ECX;
  
  param_2 = param_2 >> 3;
  if (0 < param_2) {
    do {
      FBlowFish::Blowfish_decipher(in_ECX,param_1,param_1 + 1);
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


// ==== 10150d70 FUN_10150d70

void FUN_10150d70(ulong *param_1,int param_2)

{
  FBlowFish *in_ECX;
  FBlowFish *extraout_ECX;
  
  param_2 = param_2 >> 3;
  if (0 < param_2) {
    do {
      FBlowFish::Blowfish_encipher(in_ECX,param_1,param_1 + 1);
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
      in_ECX = extraout_ECX;
    } while (param_2 != 0);
  }
  return;
}


// ==== 10150db0 FUN_10150db0

uint FUN_10150db0(ulong param_1,ulong param_2)

{
  uint uVar1;
  FBlowFish *in_ECX;
  FBlowFish *extraout_ECX;
  FBlowFish *this;
  FBlowFish *extraout_ECX_00;
  int iVar2;
  FBlowFish *pFVar3;
  int iVar4;
  
  FBlowFish::ResetMemberVariable(in_ECX);
  iVar4 = (int)(short)param_2;
  uVar1 = 0;
  param_2 = 0x12;
  pFVar3 = in_ECX;
  do {
    iVar2 = (int)(short)uVar1;
    *(uint *)pFVar3 =
         *(uint *)pFVar3 ^
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + param_1),
                                    *(undefined1 *)((iVar2 + 1) % iVar4 + param_1)),
                           *(undefined1 *)((iVar2 + 2) % iVar4 + param_1)),
                  *(undefined1 *)((iVar2 + 3) % iVar4 + param_1));
    param_2 = param_2 - 1;
    uVar1 = (iVar2 + 4) % iVar4 & 0xffff;
    pFVar3 = pFVar3 + 4;
  } while (param_2 != 0);
  param_2 = 0;
  param_1 = 0;
  pFVar3 = in_ECX;
  iVar4 = 9;
  do {
    iVar2 = iVar4;
    FBlowFish::Blowfish_encipher(in_ECX,&param_2,&param_1);
    *(ulong *)pFVar3 = param_2;
    *(ulong *)(pFVar3 + 4) = param_1;
    pFVar3 = pFVar3 + 8;
    iVar4 = iVar2 + -1;
    in_ECX = extraout_ECX;
  } while (iVar4 != 0);
  pFVar3 = extraout_ECX + 0x4c;
  iVar2 = iVar2 + 3;
  this = extraout_ECX;
  do {
    iVar4 = 0x80;
    do {
      FBlowFish::Blowfish_encipher(this,&param_2,&param_1);
      *(ulong *)(pFVar3 + -4) = param_2;
      *(ulong *)pFVar3 = param_1;
      pFVar3 = pFVar3 + 8;
      iVar4 = iVar4 + -1;
      this = extraout_ECX_00;
    } while (iVar4 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_2 & 0xffff0000;
}


// ==== 10150f10 FUN_10150f10

void FUN_10150f10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10289e64;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  __itow(param_1,(wchar_t *)&DAT_10289e64,10);
  return;
}


// ==== 10150f50 FUN_10150f50

void FUN_10150f50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10289e94;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  __i64tow(CONCAT44(param_2,param_1),(wchar_t *)&DAT_10289e94,10);
  return;
}


// ==== 10150fa0 FUN_10150fa0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_10150fa0(void *param_1,void *param_2,size_t param_3)

{
  undefined1 *_Dst;
  
  if (param_3 == 0) {
    _Dst = (undefined1 *)0x0;
  }
  else {
    _Dst = &stack0xfffffff0;
  }
  _memcpy(_Dst,param_1,param_3);
  _memcpy(param_1,param_2,param_3);
  _memcpy(param_2,_Dst,param_3);
  return;
}


// ==== 10151000 FUN_10151000

uint FUN_10151000(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  
  iVar1 = appStrlen(param_1);
  uVar2 = 0xffffffff;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = param_1[iVar4];
      if ((ushort)(uVar3 - 0x61) < 0x1a) {
        uVar3 = uVar3 - 0x20;
      }
      uVar2 = uVar2 << 8 ^ (uint)(&GCRCTable)[uVar2 >> 0x18 ^ uVar3 & 0xff];
      iVar4 = iVar4 + 1;
      uVar2 = uVar2 << 8 ^ (uint)(&GCRCTable)[(uVar2 >> 0x10 ^ (uint)uVar3) >> 8];
    } while (iVar4 < iVar1);
  }
  return ~uVar2;
}


// ==== 10151090 FUN_10151090

void FUN_10151090(int *param_1,int param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int local_40 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar7 = 0x10;
  puVar2 = (undefined2 *)(param_2 + 2);
  piVar5 = local_40;
  do {
    iVar7 = iVar7 + -1;
    *piVar5 = CONCAT31(CONCAT21(*puVar2,*(undefined1 *)((int)puVar2 + -1)),
                       *(undefined1 *)(puVar2 + -1));
    puVar2 = puVar2 + 2;
    piVar5 = piVar5 + 1;
  } while (iVar7 != 0);
  uVar6 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = (~uVar6 & param_1[3] | uVar4 & uVar6) + local_40[0] + -0x28955b88 + *param_1;
  uVar1 = (uVar3 * 0x80 | uVar3 >> 0x19) + uVar6;
  uVar3 = (~uVar1 & uVar4 | uVar6 & uVar1) + local_40[1] + -0x173848aa + param_1[3];
  uVar3 = (uVar3 * 0x1000 | uVar3 >> 0x14) + uVar1;
  uVar4 = (~uVar3 & uVar6 | uVar3 & uVar1) + local_40[2] + 0x242070db + uVar4;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar3;
  uVar6 = (~uVar4 & uVar1 | uVar3 & uVar4) + local_40[3] + -0x3e423112 + uVar6;
  uVar6 = (uVar6 >> 10 | uVar6 * 0x400000) + uVar4;
  uVar1 = (~uVar6 & uVar3 | uVar4 & uVar6) + local_30 + -0xa83f051 + uVar1;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar6;
  uVar3 = (~uVar1 & uVar4 | uVar6 & uVar1) + local_2c + 0x4787c62a + uVar3;
  uVar3 = (uVar3 * 0x1000 | uVar3 >> 0x14) + uVar1;
  uVar4 = (~uVar3 & uVar6 | uVar3 & uVar1) + local_28 + -0x57cfb9ed + uVar4;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar3;
  uVar6 = (~uVar4 & uVar1 | uVar3 & uVar4) + local_24 + -0x2b96aff + uVar6;
  uVar6 = (uVar6 >> 10 | uVar6 * 0x400000) + uVar4;
  uVar1 = (~uVar6 & uVar3 | uVar4 & uVar6) + local_20 + 0x698098d8 + uVar1;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar6;
  uVar3 = (~uVar1 & uVar4 | uVar6 & uVar1) + local_1c + -0x74bb0851 + uVar3;
  uVar3 = (uVar3 * 0x1000 | uVar3 >> 0x14) + uVar1;
  uVar4 = (~uVar3 & uVar6 | uVar3 & uVar1) + local_18 + -0xa44f + uVar4;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar3;
  uVar6 = (~uVar4 & uVar1 | uVar3 & uVar4) + local_14 + -0x76a32842 + uVar6;
  uVar6 = (uVar6 >> 10 | uVar6 * 0x400000) + uVar4;
  uVar1 = (~uVar6 & uVar3 | uVar4 & uVar6) + local_10 + 0x6b901122 + uVar1;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar6;
  uVar3 = (~uVar1 & uVar4 | uVar6 & uVar1) + local_c + -0x2678e6d + uVar3;
  uVar3 = (uVar3 * 0x1000 | uVar3 >> 0x14) + uVar1;
  uVar4 = (~uVar3 & uVar6 | uVar3 & uVar1) + local_8 + -0x5986bc72 + uVar4;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar3;
  uVar6 = (~uVar4 & uVar1 | uVar3 & uVar4) + local_4 + 0x49b40821 + uVar6;
  uVar6 = (uVar6 >> 10 | uVar6 * 0x400000) + uVar4;
  uVar1 = (~uVar3 & uVar4 | uVar3 & uVar6) + local_40[1] + -0x9e1da9e + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar6;
  uVar3 = (~uVar4 & uVar6 | uVar4 & uVar1) + local_28 + -0x3fbf4cc0 + uVar3;
  uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) + uVar1;
  uVar4 = (~uVar6 & uVar1 | uVar3 & uVar6) + local_14 + 0x265e5a51 + uVar4;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar3;
  uVar6 = (~uVar1 & uVar3 | uVar4 & uVar1) + local_40[0] + -0x16493856 + uVar6;
  uVar6 = (uVar6 >> 0xc | uVar6 * 0x100000) + uVar4;
  uVar1 = (~uVar3 & uVar4 | uVar3 & uVar6) + local_2c + -0x29d0efa3 + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar6;
  uVar3 = (~uVar4 & uVar6 | uVar4 & uVar1) + local_18 + 0x2441453 + uVar3;
  uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) + uVar1;
  uVar4 = (~uVar6 & uVar1 | uVar3 & uVar6) + local_4 + -0x275e197f + uVar4;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar3;
  uVar6 = (~uVar1 & uVar3 | uVar4 & uVar1) + local_30 + -0x182c0438 + uVar6;
  uVar6 = (uVar6 >> 0xc | uVar6 * 0x100000) + uVar4;
  uVar1 = (~uVar3 & uVar4 | uVar3 & uVar6) + local_1c + 0x21e1cde6 + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar6;
  uVar3 = (~uVar4 & uVar6 | uVar4 & uVar1) + local_8 + -0x3cc8f82a + uVar3;
  uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) + uVar1;
  uVar4 = (~uVar6 & uVar1 | uVar3 & uVar6) + local_40[3] + -0xb2af279 + uVar4;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar3;
  uVar6 = (~uVar1 & uVar3 | uVar4 & uVar1) + local_20 + 0x455a14ed + uVar6;
  uVar6 = (uVar6 >> 0xc | uVar6 * 0x100000) + uVar4;
  uVar1 = (~uVar3 & uVar4 | uVar3 & uVar6) + local_c + -0x561c16fb + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar6;
  uVar3 = (~uVar4 & uVar6 | uVar4 & uVar1) + local_40[2] + -0x3105c08 + uVar3;
  uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) + uVar1;
  uVar4 = (~uVar6 & uVar1 | uVar3 & uVar6) + local_24 + 0x676f02d9 + uVar4;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar3;
  uVar6 = (~uVar1 & uVar3 | uVar4 & uVar1) + local_10 + -0x72d5b376 + uVar6;
  uVar6 = (uVar6 >> 0xc | uVar6 * 0x100000) + uVar4;
  uVar1 = (uVar3 ^ uVar4 ^ uVar6) + local_2c + -0x5c6be + uVar1;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar6;
  uVar3 = (uVar4 ^ uVar6 ^ uVar1) + local_20 + -0x788e097f + uVar3;
  uVar3 = (uVar3 * 0x800 | uVar3 >> 0x15) + uVar1;
  uVar4 = (uVar3 ^ uVar6 ^ uVar1) + local_14 + 0x6d9d6122 + uVar4;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar3;
  uVar6 = (uVar3 ^ uVar4 ^ uVar1) + local_8 + -0x21ac7f4 + uVar6;
  uVar6 = (uVar6 >> 9 | uVar6 * 0x800000) + uVar4;
  uVar1 = (uVar3 ^ uVar4 ^ uVar6) + local_40[1] + -0x5b4115bc + uVar1;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar6;
  uVar3 = (uVar4 ^ uVar6 ^ uVar1) + local_30 + 0x4bdecfa9 + uVar3;
  uVar3 = (uVar3 * 0x800 | uVar3 >> 0x15) + uVar1;
  uVar4 = (uVar3 ^ uVar6 ^ uVar1) + local_24 + -0x944b4a0 + uVar4;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar3;
  uVar6 = (uVar3 ^ uVar4 ^ uVar1) + local_18 + -0x41404390 + uVar6;
  uVar6 = (uVar6 >> 9 | uVar6 * 0x800000) + uVar4;
  uVar1 = (uVar3 ^ uVar4 ^ uVar6) + local_c + 0x289b7ec6 + uVar1;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar6;
  uVar3 = (uVar4 ^ uVar6 ^ uVar1) + local_40[0] + -0x155ed806 + uVar3;
  uVar3 = (uVar3 * 0x800 | uVar3 >> 0x15) + uVar1;
  uVar4 = (uVar3 ^ uVar6 ^ uVar1) + local_40[3] + -0x2b10cf7b + uVar4;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar3;
  uVar6 = (uVar3 ^ uVar4 ^ uVar1) + local_28 + 0x4881d05 + uVar6;
  uVar6 = (uVar6 >> 9 | uVar6 * 0x800000) + uVar4;
  uVar1 = (uVar3 ^ uVar4 ^ uVar6) + local_1c + -0x262b2fc7 + uVar1;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar6;
  uVar3 = (uVar4 ^ uVar6 ^ uVar1) + local_10 + -0x1924661b + uVar3;
  uVar3 = (uVar3 * 0x800 | uVar3 >> 0x15) + uVar1;
  uVar4 = (uVar3 ^ uVar6 ^ uVar1) + local_4 + 0x1fa27cf8 + uVar4;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar3;
  uVar6 = (uVar3 ^ uVar4 ^ uVar1) + local_40[2] + -0x3b53a99b + uVar6;
  uVar6 = (uVar6 >> 9 | uVar6 * 0x800000) + uVar4;
  uVar1 = ((~uVar3 | uVar6) ^ uVar4) + local_40[0] + -0xbd6ddbc + uVar1;
  uVar1 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar6;
  uVar3 = ((~uVar4 | uVar1) ^ uVar6) + local_24 + 0x432aff97 + uVar3;
  uVar3 = (uVar3 * 0x400 | uVar3 >> 0x16) + uVar1;
  uVar4 = ((~uVar6 | uVar3) ^ uVar1) + local_8 + -0x546bdc59 + uVar4;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar3;
  uVar6 = ((~uVar1 | uVar4) ^ uVar3) + local_2c + -0x36c5fc7 + uVar6;
  uVar6 = (uVar6 >> 0xb | uVar6 * 0x200000) + uVar4;
  uVar1 = ((~uVar3 | uVar6) ^ uVar4) + local_10 + 0x655b59c3 + uVar1;
  uVar1 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar6;
  uVar3 = ((~uVar4 | uVar1) ^ uVar6) + local_40[3] + -0x70f3336e + uVar3;
  uVar3 = (uVar3 * 0x400 | uVar3 >> 0x16) + uVar1;
  uVar4 = ((~uVar6 | uVar3) ^ uVar1) + local_18 + -0x100b83 + uVar4;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar3;
  uVar6 = ((~uVar1 | uVar4) ^ uVar3) + local_40[1] + -0x7a7ba22f + uVar6;
  uVar6 = (uVar6 >> 0xb | uVar6 * 0x200000) + uVar4;
  uVar1 = ((~uVar3 | uVar6) ^ uVar4) + local_20 + 0x6fa87e4f + uVar1;
  uVar1 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar6;
  uVar3 = ((~uVar4 | uVar1) ^ uVar6) + local_4 + -0x1d31920 + uVar3;
  uVar3 = (uVar3 * 0x400 | uVar3 >> 0x16) + uVar1;
  uVar4 = ((~uVar6 | uVar3) ^ uVar1) + local_28 + -0x5cfebcec + uVar4;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar3;
  uVar6 = ((~uVar1 | uVar4) ^ uVar3) + local_c + 0x4e0811a1 + uVar6;
  uVar6 = (uVar6 >> 0xb | uVar6 * 0x200000) + uVar4;
  uVar1 = ((~uVar3 | uVar6) ^ uVar4) + local_30 + -0x8ac817e + uVar1;
  uVar1 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar6;
  uVar3 = ((~uVar4 | uVar1) ^ uVar6) + local_14 + -0x42c50dcb + uVar3;
  uVar3 = (uVar3 * 0x400 | uVar3 >> 0x16) + uVar1;
  uVar4 = ((~uVar6 | uVar3) ^ uVar1) + local_40[2] + 0x2ad7d2bb + uVar4;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar3;
  *param_1 = *param_1 + uVar1;
  uVar6 = ((~uVar1 | uVar4) ^ uVar3) + local_1c + -0x14792c6f + uVar6;
  param_1[1] = (uVar6 >> 0xb | uVar6 * 0x200000) + param_1[1] + uVar4;
  param_1[2] = param_1[2] + uVar4;
  param_1[3] = param_1[3] + uVar3;
  appMemset(local_40,0,0x40);
  return;
}


// ==== 10151930 FUN_10151930

undefined4
FUN_10151930(undefined2 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int *piVar4;
  void *in_ECX;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 *unaff_EBP;
  int iVar7;
  int unaff_retaddr;
  undefined *puVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bbf5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*param_5 + 0x10))(param_1);
  if ((iVar1 < 0) && (iVar1 = (**(code **)(*param_5 + 0xc))(param_1,0,GNull), iVar1 != 0)) {
    puVar8 = &DAT_101d6434;
    iVar7 = 0;
    iVar2 = (*(code *)**(undefined4 **)GMalloc)((int)param_1 * param_2 * 3);
    puVar6 = param_1;
    iVar1 = param_2;
    if (0 < param_2) {
      do {
        puVar3 = puVar6;
        puVar5 = param_1;
        if (0 < (int)param_1) {
          do {
            *(undefined2 *)(iVar2 + iVar7) = *puVar3;
            *(undefined1 *)(iVar2 + 2 + iVar7) = *(undefined1 *)(puVar3 + 1);
            iVar7 = iVar7 + 3;
            puVar5 = (undefined2 *)((int)puVar5 + -1);
            puVar3 = puVar3 + 2;
            iVar1 = unaff_retaddr;
          } while (puVar5 != (undefined2 *)0x0);
        }
        param_2 = param_2 + -1;
        puVar6 = puVar6 + (int)param_1 * 2;
      } while (param_2 != 0);
    }
    piVar4 = (int *)(*(code *)**(undefined4 **)GMalloc)(0x3048,&DAT_101cd5d8);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *(short *)((int)piVar4 + 6) = (short)iVar1;
      *(short *)((int)piVar4 + 10) = (short)iVar1;
      *(short *)(piVar4 + 1) = (short)param_1;
      *(short *)(piVar4 + 2) = (short)param_1;
      *piVar4 = iVar2;
      piVar4[3] = (int)unaff_EBP;
      thunk_FUN_10127d40(param_1);
    }
    thunk_FUN_10127f40();
    (**(code **)(*(int *)GMalloc + 8))(iVar2);
    if (piVar4 != (int *)0x0) {
      thunk_FUN_101279c0();
      (**(code **)(*(int *)GMalloc + 8))(piVar4);
    }
    (**(code **)*unaff_EBP)(1);
    ExceptionList = puVar8;
    return 1;
  }
  ExceptionList = in_ECX;
  return 0;
}


// ==== 10151b50 FUN_10151b50

int FUN_10151b50(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  int *in_ECX;
  ushort *puVar7;
  
  if (param_1[1] == 0) {
    puVar3 = &DAT_101cdd44;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  uVar4 = thunk_FUN_1014fa60(puVar3);
  iVar2 = *(int *)(in_ECX[3] + (uVar4 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar2 == -1) {
      return 0;
    }
    puVar1 = (undefined4 *)(iVar2 * 0x1c + 4 + *in_ECX);
    if (param_1[1] == 0) {
      puVar7 = &DAT_101cdd44;
    }
    else {
      puVar7 = (ushort *)*param_1;
    }
    if (puVar1[1] == 0) {
      puVar5 = &DAT_101cdd44;
    }
    else {
      puVar5 = (ushort *)*puVar1;
    }
    iVar6 = appStricmp(puVar5,puVar7);
    if (iVar6 == 0) break;
    iVar2 = *(int *)(iVar2 * 0x1c + *in_ECX);
  }
  return *in_ECX + 0x10 + iVar2 * 0x1c;
}


// ==== 10151c30 FUN_10151c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151c30(int param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + param_1 * 4) + 4) & 0x1000) == 0))
  {
    (**(code **)*in_ECX)(param_2,param_1);
  }
  return;
}


// ==== 10151c70 FUN_10151c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151c70(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + 0xbe0) + 4) & 0x1000) == 0)) {
    (**(code **)*in_ECX)(param_1,0x2f8);
  }
  return;
}


// ==== 10151cb0 FUN_10151cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151cb0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + 0xbe0) + 4) & 0x1000) == 0)) {
    if (param_1[1] != 0) {
      (**(code **)*in_ECX)(*param_1,0x2f8);
      return;
    }
    (**(code **)*in_ECX)(&DAT_101cdd44,0x2f8);
  }
  return;
}


// ==== 10151d10 FUN_10151d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151d10(int param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + param_1 * 4) + 4) & 0x1000) == 0))
  {
    if (param_2[1] != 0) {
      (**(code **)*in_ECX)(*param_2,param_1);
      return;
    }
    (**(code **)*in_ECX)(&DAT_101cdd44,param_1);
  }
  return;
}


// ==== 10151d70 FUN_10151d70

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151d70(undefined4 *param_1,int param_2)

{
  ushort local_2000 [4094];
  undefined4 uStack_4;
  
  uStack_4 = 0x10151d7a;
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + param_2 * 4) + 4) & 0x1000) == 0))
  {
    appGetVarArgs(local_2000,0x1000,(ushort **)&stack0x0000000c);
    (**(code **)*param_1)(local_2000,param_2);
  }
  return;
}


// ==== 10151df0 FUN_10151df0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151df0(undefined4 *param_1)

{
  ushort local_2000 [4094];
  undefined4 uStack_4;
  
  uStack_4 = 0x10151dfa;
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + 0xbe0) + 4) & 0x1000) == 0)) {
    appGetVarArgs(local_2000,0x1000,(ushort **)&stack0x00000008);
    (**(code **)*param_1)(local_2000,0x2f8);
  }
  return;
}


// ==== 10151e70 FUN_10151e70

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151e70(undefined4 *param_1)

{
  ushort local_2000 [4094];
  undefined4 uStack_4;
  
  uStack_4 = 0x10151e7a;
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + 0xbe0) + 4) & 0x1000) == 0)) {
    appGetVarArgs(local_2000,0x1000,(ushort **)&stack0x00000008);
    (**(code **)*param_1)(local_2000,0x2f8);
  }
  return;
}


// ==== 10151ef0 FUN_10151ef0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151ef0(undefined4 *param_1,int param_2)

{
  ushort local_2000 [4094];
  undefined4 uStack_4;
  
  uStack_4 = 0x10151efa;
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + param_2 * 4) + 4) & 0x1000) == 0))
  {
    appGetVarArgs(local_2000,0x1000,(ushort **)&stack0x0000000c);
    (**(code **)*param_1)(local_2000,param_2);
  }
  return;
}


// ==== 10151f70 FUN_10151f70

void FUN_10151f70(ulong *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  size_t _Size;
  int iVar3;
  
  uVar1 = param_1[4] + param_3 * 8;
  uVar2 = param_1[4] >> 3 & 0x3f;
  param_1[4] = uVar1;
  if (uVar1 < param_3 * 8) {
    param_1[5] = param_1[5] + 1;
  }
  param_1[5] = param_1[5] + (param_3 >> 0x1d);
  _Size = -uVar2 + 0x40;
  if ((int)param_3 < (int)_Size) {
    _Size = 0;
  }
  else {
    _memcpy((void *)(uVar2 + 0x18 + (int)param_1),param_2,_Size);
    appMD5Transform(param_1,(uchar *)(param_1 + 6));
    for (iVar3 = -uVar2 + 0x7f; iVar3 < (int)param_3; iVar3 = iVar3 + 0x40) {
      appMD5Transform(param_1,(uchar *)((int)param_2 + iVar3 + -0x3f));
      _Size = _Size + 0x40;
    }
    uVar2 = 0;
  }
  _memcpy((void *)(uVar2 + 0x18 + (int)param_1),(void *)(_Size + (int)param_2),param_3 - _Size);
  return;
}


// ==== 10152040 FUN_10152040

void FUN_10152040(int param_1,FMD5Context *param_2)

{
  FMD5Context *pFVar1;
  int iVar2;
  uint uVar3;
  FMD5Context *pFVar4;
  FMD5Context local_8 [8];
  
  iVar2 = 0;
  pFVar1 = param_2 + 0x12;
  do {
    local_8[iVar2] = pFVar1[-2];
    local_8[iVar2 + 1] = pFVar1[-1];
    local_8[iVar2 + 2] = *pFVar1;
    local_8[iVar2 + 3] = pFVar1[1];
    iVar2 = iVar2 + 4;
    pFVar1 = pFVar1 + 4;
  } while (iVar2 < 8);
  uVar3 = *(uint *)(param_2 + 0x10) >> 3 & 0x3f;
  iVar2 = 0x38;
  if (0x37 < uVar3) {
    iVar2 = 0x78;
  }
  appMD5Update(param_2,&DAT_10239070,iVar2 - uVar3);
  appMD5Update(param_2,(uchar *)local_8,8);
  pFVar4 = (FMD5Context *)(param_1 + 1);
  pFVar1 = param_2 + 2;
  iVar2 = 4;
  do {
    pFVar4[-1] = pFVar1[-2];
    *pFVar4 = pFVar1[-1];
    pFVar4[1] = *pFVar1;
    pFVar4[2] = pFVar1[1];
    pFVar1 = pFVar1 + 4;
    pFVar4 = pFVar4 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  appMemset(param_2,0,0x58);
  return;
}


// ==== 10152130 FUN_10152130

void FUN_10152130(void)

{
  FCriticalSection *pFVar1;
  FOutputDevice *in_ECX;
  
  if ((FFileStream::Instance != (FFileStream *)0x0) && (FFileStream::Destroyed == 0)) {
    FFileStream::Destroyed = 1;
    if (GLog == (undefined *)0x0) goto LAB_10152175;
    FOutputDevice::Logf2(in_ECX,(ushort *)GLog);
    while (FFileStream::Destroyed == 1) {
LAB_10152175:
      appSleep(1.0);
    }
    if (FFileStream::Streams != (FStream *)0x0) {
      (**(code **)(*(int *)GMalloc + 8))(FFileStream::Streams);
      FFileStream::Streams = (FStream *)0x0;
    }
    pFVar1 = FFileStream::CriticalSection;
    if (FFileStream::CriticalSection != (FCriticalSection *)0x0) {
      FCriticalSection::~FCriticalSection(FFileStream::CriticalSection);
      (**(code **)(*(int *)GMalloc + 8))(pFVar1);
    }
    if (FFileStream::Instance != (FFileStream *)0x0) {
      (**(code **)(*(int *)GMalloc + 8))();
    }
    FFileStream::Instance = (FFileStream *)0x0;
  }
  return;
}


// ==== 10152220 FUN_10152220

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10152220(void)

{
  int iVar1;
  bool bVar2;
  FOutputDevice local_2000 [8188];
  undefined4 uStack_4;
  
  uStack_4 = 0x1015222a;
  GIsCriticalError = 1;
  appGetVarArgs((ushort *)local_2000,0x1000,(ushort **)&stack0x00000004);
  iVar1 = DAT_10289ec4 + 1;
  bVar2 = DAT_10289ec4 != 0;
  DAT_10289ec4 = iVar1;
  if (bVar2) {
    appStrncat((ushort *)&GErrorHist,(ushort *)L" <- ",0x1000);
  }
  appStrncat((ushort *)&GErrorHist,(ushort *)local_2000,0x1000);
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(local_2000,(EName)GLog,(ushort *)0x2f9);
  }
  return;
}


// ==== 101522e0 FUN_101522e0

void FUN_101522e0(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbf70;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(*(int *)GMalloc + 4))(*in_ECX,in_ECX[2] * param_1,L"FArray");
  *in_ECX = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 10152346 Catch@10152346

void Catch_10152346(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015235a Catch@1015235a

void Catch_1015235a(void)

{
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d6150,L"FArray::Realloc");
  appUnwindf((ushort *)L"%i*%i",*(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 8),
             *(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101523c0 FUN_101523c0

void FUN_101523c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  if (param_2 != 0) {
    appMemmove((void *)(param_1 * param_3 + *(int *)in_ECX),
               (void *)((param_1 + param_2) * param_3 + *(int *)in_ECX),
               ((*(int *)(in_ECX + 4) - param_1) - param_2) * param_3);
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) - param_2;
    iVar1 = *(int *)(in_ECX + 4);
    iVar2 = *(int *)(in_ECX + 8);
    if (((iVar1 * 3 < iVar2 * 2) || (0x3fff < (iVar2 - iVar1) * param_3)) &&
       ((0x40 < iVar2 - iVar1 || (iVar1 == 0)))) {
      *(int *)(in_ECX + 8) = iVar1;
      FArray::Realloc(in_ECX,param_3);
    }
  }
  return;
}


// ==== 10152460 FUN_10152460

ushort * FUN_10152460(ushort *param_1)

{
  ushort *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbf80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = appStrstr(param_1,(ushort *)&DAT_101d61c4);
  if (puVar1 == (ushort *)0x0) goto LAB_101524b0;
  puVar1 = (ushort *)&DAT_101d61c8;
  while( true ) {
    param_1 = appStrstr(param_1,puVar1);
    param_1 = param_1 + 1;
LAB_101524b0:
    puVar1 = appStrstr(param_1,(ushort *)&DAT_101d61cc);
    if (puVar1 == (ushort *)0x0) break;
    puVar1 = (ushort *)&DAT_101d61d0;
  }
  while( true ) {
    puVar1 = appStrstr(param_1,(ushort *)&DAT_101d61d4);
    if (puVar1 == (ushort *)0x0) break;
    param_1 = appStrstr(param_1,(ushort *)&DAT_101d61d8);
    param_1 = param_1 + 1;
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1015250a Catch@1015250a

void Catch_1015250a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015251e Catch@1015251e

void Catch_1015251e(void)

{
  appUnwindf((ushort *)&DAT_101d61dc,L"appFExt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152570 FUN_10152570

void FUN_10152570(void)

{
  uint uVar1;
  
  uVar1 = DAT_10323864 & 0xff;
  DAT_10323864 = DAT_10323864 + 1;
  *(undefined2 *)(&DAT_10289ec8 + uVar1 * 0x800) = 0;
  return;
}


// ==== 101525cc Catch@101525cc

void Catch_101525cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101525e0 Catch@101525e0

void Catch_101525e0(void)

{
  appUnwindf((ushort *)&DAT_101d61e4,L"appStaticString1024");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152620 appStaticString1024 thunk -> 10103d6e

// ==== 10152630 FUN_10152630

ushort * FUN_10152630(ushort *param_1,ushort *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbfa0;
  local_10 = ExceptionList;
  local_8 = 0;
  bVar1 = false;
  local_1c = *param_2;
  if ((0x60 < local_1c) && (local_1c < 0x7b)) {
    local_1c = local_1c - 0x20;
  }
  ExceptionList = &local_10;
  iVar2 = appStrlen(param_2);
  while( true ) {
    uVar4 = *param_1;
    puVar5 = param_1 + 1;
    if (uVar4 == 0) {
      ExceptionList = local_10;
      return (ushort *)0x0;
    }
    if ((ushort)(uVar4 - 0x61) < 0x1a) {
      uVar4 = uVar4 - 0x20;
    }
    if (((!bVar1) && (uVar4 == local_1c)) &&
       (iVar3 = appStrnicmp(puVar5,param_2 + 1,iVar2 + -1), iVar3 == 0)) break;
    param_1 = puVar5;
    if (((uVar4 < 0x41) || (0x5a < uVar4)) && (9 < (ushort)(uVar4 - 0x30))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10152722 Catch@10152722

void Catch_10152722(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10152736 Catch@10152736

void Catch_10152736(void)

{
  appUnwindf((ushort *)&DAT_101d61ec,L"appStrfind");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101527a0 FUN_101527a0

undefined2 * FUN_101527a0(int param_1)

{
  if (param_1 != DAT_1023a4c4) {
    for (DAT_1023a4c4 = 0; DAT_1023a4c4 < param_1; DAT_1023a4c4 = DAT_1023a4c4 + 1) {
      (&DAT_10323868)[DAT_1023a4c4] = 0x20;
    }
    (&DAT_10323868)[param_1] = 0;
  }
  return &DAT_10323868;
}


// ==== 1015280e Catch@1015280e

void Catch_1015280e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10152822 Catch@10152822

void Catch_10152822(void)

{
  appUnwindf((ushort *)&DAT_101d61f4,&DAT_101d6a3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152870 FUN_10152870

void FUN_10152870(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; (*(char *)(iVar1 + param_1) != '\0' && (iVar1 < 0x400)); iVar1 = iVar1 + 1) {
  }
  if (iVar1 < 1) goto LAB_101528c0;
  while( true ) {
    iVar1 = iVar1 + -1;
LAB_101528c0:
    if ((*(char *)(iVar1 + param_1) != ' ') || (iVar1 < 1)) break;
    *(undefined1 *)(iVar1 + param_1) = 0;
  }
  return;
}


// ==== 101528e8 Catch@101528e8

void Catch_101528e8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 101528fc Catch@101528fc

void Catch_101528fc(void)

{
  appUnwindf((ushort *)&DAT_101d61fc,L"appTrimSpaces");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152950 FUN_10152950

undefined4 FUN_10152950(ushort *param_1,ushort *param_2,ushort *param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbfd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    iVar2 = appStrlen(param_2);
    puVar1 = puVar1 + iVar2;
    if (*puVar1 == 0x22) {
      appStrncpy(param_3,puVar1 + 1,param_4);
      param_3[param_4 + -1] = 0;
      puVar1 = appStrstr(param_3,(ushort *)&DAT_101d6204);
    }
    else {
      appStrncpy(param_3,puVar1,param_4);
      param_3[param_4 + -1] = 0;
      puVar1 = appStrstr(param_3,(ushort *)&DAT_101d6208);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = 0;
      }
      puVar1 = appStrstr(param_3,(ushort *)&DAT_101d620c);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = 0;
      }
      puVar1 = appStrstr(param_3,(ushort *)&DAT_101d6210);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = 0;
      }
      puVar1 = appStrstr(param_3,(ushort *)&DAT_101d6214);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = 0;
      }
      puVar1 = appStrstr(param_3,(ushort *)&DAT_101d6218);
    }
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = 0;
    }
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10152a66 Catch@10152a66

void Catch_10152a66(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10152a7a Catch@10152a7a

void Catch_10152a7a(void)

{
  appUnwindf((ushort *)&DAT_101d621c,L"ParseString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152af0 FUN_10152af0

undefined4 FUN_10152af0(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbfe0;
  local_10 = ExceptionList;
  local_8 = 0;
  puVar1 = param_1;
  ExceptionList = &local_10;
  if (*param_1 != 0) {
    while( true ) {
      puVar1 = appStrfind(puVar1 + 1,param_2);
      if (puVar1 == (ushort *)0x0) break;
      if ((param_1 < puVar1) && ((puVar1[-1] == 0x2d || (puVar1[-1] == 0x2f)))) {
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10152b74 Catch@10152b74

void Catch_10152b74(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10152b88 Catch@10152b88

void Catch_10152b88(void)

{
  appUnwindf((ushort *)&DAT_101d6224,L"GetParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152be0 FUN_10152be0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_10152be0(ushort *param_1,ushort *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  undefined8 uVar5;
  ushort local_202c;
  undefined1 local_202a [8198];
  int local_24;
  uint local_1c;
  ushort *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bbff0;
  local_10 = ExceptionList;
  local_18 = (ushort *)0x10152c03;
  local_14 = &stack0xffffdfc8;
  local_8 = 0;
  local_202c = 0;
  ExceptionList = &local_10;
  _memset(local_202a,0,0x1ffe);
  local_18 = &local_202c;
  iVar2 = Parse(param_1,param_2,local_18,0x1000);
  if (iVar2 != 0) {
    *param_3 = 0;
    param_3[1] = 0;
    local_1c = (uint)(local_202c == 0x2d);
    puVar4 = (ushort *)(local_202a + local_1c * 2 + -2);
    while( true ) {
      uVar1 = *puVar4;
      if ((uVar1 < 0x30) || (0x39 < uVar1)) break;
      local_18 = puVar4;
      uVar5 = __allmul(*param_3,param_3[1],10,0);
      local_24 = (int)((ulonglong)uVar5 >> 0x20);
      uVar3 = (uint)uVar5 + (uint)uVar1;
      *param_3 = uVar3 - 0x30;
      param_3[1] = (local_24 + (uint)CARRY4((uint)uVar5,(uint)uVar1)) - (uint)(uVar3 < 0x30);
      puVar4 = puVar4 + 1;
    }
    if (local_1c != 0) {
      iVar2 = *param_3;
      *param_3 = -iVar2;
      param_3[1] = -(param_3[1] + (uint)(iVar2 != 0));
    }
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10152cf3 Catch@10152cf3

void Catch_10152cf3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 10152d07 Catch@10152d07

void Catch_10152d07(void)

{
  appUnwindf((ushort *)&DAT_101d6244,L"ParseSQWORD");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152d80 FUN_10152d80

undefined4
FUN_10152d80(ushort *param_1,ushort *param_2,UClass *param_3,undefined4 *param_4,UObject *param_5)

{
  int iVar1;
  UObject *pUVar2;
  ushort local_220 [262];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc000;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd4;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = Parse(param_1,param_2,local_220,0x40);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar1 = appStricmp(local_220,(ushort *)L"NONE");
  if (iVar1 == 0) {
    *param_4 = 0;
  }
  else {
    pUVar2 = UObject::StaticFindObject(param_3,param_5,local_220,0);
    if (pUVar2 == (UObject *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    *param_4 = pUVar2;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10152e32 Catch@10152e32

void Catch_10152e32(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10152e46 Catch@10152e46

void Catch_10152e46(void)

{
  appUnwindf((ushort *)&DAT_101d6258,L"ParseUObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152ea0 FUN_10152ea0

undefined4 FUN_10152ea0(ushort *param_1,ushort *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ushort local_a4 [68];
  FName local_1c [8];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc010;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff50;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = Parse(param_1,param_2,local_a4,0x40);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  puVar2 = (undefined4 *)FName::FName(local_1c,local_a4,1);
  *param_3 = *puVar2;
  ExceptionList = local_10;
  return 1;
}


// ==== 10152f27 Catch@10152f27

void Catch_10152f27(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10152f3b Catch@10152f3b

void Catch_10152f3b(void)

{
  appUnwindf((ushort *)&DAT_101d6260,L"ParseFName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10152f90 FUN_10152f90

undefined4 FUN_10152f90(ushort *param_1,ushort *param_2,int *param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort **ppuVar3;
  int iVar4;
  ushort *local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc020;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 == (ushort *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar4 = 10;
  ppuVar3 = local_1c;
  iVar2 = appStrlen(param_2);
  iVar2 = appStrtoi(puVar1 + iVar2,ppuVar3,iVar4);
  *param_3 = iVar2;
  ExceptionList = local_10;
  return 1;
}


// ==== 10153015 Catch@10153015

void Catch_10153015(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10153029 Catch@10153029

void Catch_10153029(void)

{
  appUnwindf((ushort *)&DAT_101d6268,L"ParseDWORD");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153080 FUN_10153080

undefined4 FUN_10153080(ushort *param_1,ushort *param_2,char *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc030;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    iVar2 = appStrlen(param_2);
    iVar3 = appAtoi(puVar1 + iVar2);
    *param_3 = (char)iVar3;
    if (((char)iVar3 != '\0') || ((ushort)(puVar1[iVar2] - 0x30) < 10)) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1015310e Catch@1015310e

void Catch_1015310e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10153122 Catch@10153122

void Catch_10153122(void)

{
  appUnwindf((ushort *)&DAT_101d6270,L"ParseBYTE");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153170 FUN_10153170

undefined4 FUN_10153170(ushort *param_1,ushort *param_2,char *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc040;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    iVar2 = appStrlen(param_2);
    iVar3 = appAtoi(puVar1 + iVar2);
    *param_3 = (char)iVar3;
    if (((char)iVar3 != '\0') || ((ushort)(puVar1[iVar2] - 0x30) < 10)) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101531fe Catch@101531fe

void Catch_101531fe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10153212 Catch@10153212

void Catch_10153212(void)

{
  appUnwindf((ushort *)&DAT_101d6278,L"ParseCHAR");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153260 FUN_10153260

undefined4 FUN_10153260(ushort *param_1,ushort *param_2,short *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc050;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    iVar2 = appStrlen(param_2);
    iVar3 = appAtoi(puVar1 + iVar2);
    *param_3 = (short)iVar3;
    if (((short)iVar3 != 0) || ((ushort)(puVar1[iVar2] - 0x30) < 10)) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101532f0 Catch@101532f0

void Catch_101532f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10153304 Catch@10153304

void Catch_10153304(void)

{
  appUnwindf((ushort *)&DAT_101d6280,L"ParseWORD");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153350 FUN_10153350

undefined4 FUN_10153350(ushort *param_1,ushort *param_2,short *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc060;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    iVar2 = appStrlen(param_2);
    iVar3 = appAtoi(puVar1 + iVar2);
    *param_3 = (short)iVar3;
    if (((short)iVar3 != 0) || ((ushort)(puVar1[iVar2] - 0x30) < 10)) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101533e0 Catch@101533e0

void Catch_101533e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101533f4 Catch@101533f4

void Catch_101533f4(void)

{
  appUnwindf((ushort *)&DAT_101d6288,L"ParseSWORD");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153440 FUN_10153440

undefined4 FUN_10153440(ushort *param_1,ushort *param_2,float *param_3)

{
  ushort *puVar1;
  int iVar2;
  float fVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc070;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 == (ushort *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar2 = appStrlen(param_2);
  fVar3 = appAtof(puVar1 + iVar2);
  *param_3 = fVar3;
  ExceptionList = local_10;
  return 1;
}


// ==== 101534bf Catch@101534bf

void Catch_101534bf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101534d3 Catch@101534d3

void Catch_101534d3(void)

{
  appUnwindf((ushort *)&DAT_101d6290,L"ParseFLOAT");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153520 FUN_10153520

undefined4 FUN_10153520(ushort *param_1,ushort *param_2,int *param_3)

{
  ushort *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc080;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 == (ushort *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar2 = appStrlen(param_2);
  iVar2 = appAtoi(puVar1 + iVar2);
  *param_3 = iVar2;
  ExceptionList = local_10;
  return 1;
}


// ==== 1015359c Catch@1015359c

void Catch_1015359c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101535b0 Catch@101535b0

void Catch_101535b0(void)

{
  appUnwindf((ushort *)&DAT_101d6298,L"ParseINT");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153600 FUN_10153600

undefined4 FUN_10153600(ushort *param_1,ushort *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ushort local_3c [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc090;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = Parse(param_1,param_2,local_3c,0x10);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar1 = appStricmp(local_3c,(ushort *)&DAT_101d62a0);
  if (iVar1 != 0) {
    iVar1 = appStricmp(local_3c,(ushort *)L"True");
    if (iVar1 != 0) {
      iVar1 = appStricmp(local_3c,(ushort *)GTrue);
      if (iVar1 != 0) {
        iVar1 = appStricmp(local_3c,(ushort *)&DAT_101d62b4);
        if (iVar1 != 0) {
          uVar2 = 0;
          goto LAB_1015369f;
        }
      }
    }
  }
  uVar2 = 1;
LAB_1015369f:
  *param_3 = uVar2;
  ExceptionList = local_10;
  return 1;
}


// ==== 101536cd Catch@101536cd

void Catch_101536cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101536e1 Catch@101536e1

void Catch_101536e1(void)

{
  appUnwindf((ushort *)&DAT_101d62b8,L"ParseUBOOL");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153740 FUN_10153740

undefined4 FUN_10153740(ushort *param_1,ushort *param_2,int *param_3)

{
  int iVar1;
  ushort local_224 [8];
  ushort local_214 [8];
  ushort local_204 [8];
  ushort local_1f4 [238];
  ushort *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc0a0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd0;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = Parse(param_1,param_2,local_224,0x100);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  iVar1 = appStrlen(local_224);
  if (iVar1 == 0x20) {
    iVar1 = appStrtoi(local_1f4,&local_18,0x10);
    param_3[3] = iVar1;
    local_1f4[0] = 0;
    iVar1 = appStrtoi(local_204,&local_18,0x10);
    param_3[2] = iVar1;
    local_204[0] = 0;
    iVar1 = appStrtoi(local_214,&local_18,0x10);
    param_3[1] = iVar1;
    local_214[0] = 0;
    iVar1 = appStrtoi(local_224,&local_18,0x10);
    *param_3 = iVar1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10153844 Catch@10153844

void Catch_10153844(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10153858 Catch@10153858

void Catch_10153858(void)

{
  appUnwindf((ushort *)&DAT_101d62c0,L"ParseGUID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101538d0 FUN_101538d0

undefined4 FUN_101538d0(int *param_1,ushort *param_2)

{
  short sVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc0b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  while( true ) {
    sVar1 = *(short *)*param_1;
    if ((sVar1 != 0x20) && (sVar1 != 9)) break;
    *param_1 = (int)((short *)*param_1 + 1);
  }
  iVar2 = appStrlen(param_2);
  iVar2 = appStrnicmp((ushort *)*param_1,param_2,iVar2);
  if (iVar2 == 0) {
    iVar2 = appStrlen(param_2);
    *param_1 = *param_1 + iVar2 * 2;
    iVar2 = thunk_FUN_1014fa20(*(undefined2 *)*param_1);
    if (iVar2 == 0) {
      while( true ) {
        sVar1 = *(short *)*param_1;
        if ((sVar1 != 0x20) && (sVar1 != 9)) break;
        *param_1 = (int)((short *)*param_1 + 1);
      }
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = appStrlen(param_2);
    *param_1 = *param_1 + iVar2 * -2;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101539aa Catch@101539aa

void Catch_101539aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101539be Catch@101539be

void Catch_101539be(void)

{
  appUnwindf((ushort *)&DAT_101d62c8,L"ParseCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153a20 FUN_10153a20

void FUN_10153a20(undefined4 *param_1)

{
  short sVar1;
  
  while( true ) {
    while( true ) {
      sVar1 = *(short *)*param_1;
      if ((((sVar1 != 0x20) && (sVar1 != 9)) && (sVar1 != 0xd)) && (sVar1 != 10)) break;
      *param_1 = (short *)*param_1 + 1;
    }
    if (sVar1 != 0x3b) break;
    while( true ) {
      sVar1 = *(short *)*param_1;
      if (((sVar1 == 0) || (sVar1 == 10)) || (sVar1 == 0xd)) break;
      *param_1 = (short *)*param_1 + 1;
    }
  }
  return;
}


// ==== 10153aaf Catch@10153aaf

void Catch_10153aaf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10153ac3 Catch@10153ac3

void Catch_10153ac3(void)

{
  appUnwindf((ushort *)&DAT_101d62d0,L"ParseNext");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153b10 FUN_10153b10

bool FUN_10153b10(int *param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    psVar1 = (short *)*param_1;
    sVar2 = *psVar1;
    if ((sVar2 != 0x20) && (sVar2 != 9)) break;
    *param_1 = (int)(psVar1 + 1);
  }
  if (sVar2 == 0x22) {
    *param_1 = (int)(psVar1 + 1);
    while( true ) {
      psVar1 = (short *)*param_1;
      sVar2 = *psVar1;
      if (((sVar2 == 0) || (sVar2 == 0x22)) || (param_3 <= iVar3 + 1)) break;
      *param_1 = (int)(psVar1 + 1);
      if ((sVar2 == 0x5c) && (param_4 != 0)) {
        sVar2 = psVar1[1];
        *param_1 = (int)(psVar1 + 2);
        if (sVar2 == 0) break;
      }
      *(short *)(param_2 + iVar3 * 2) = sVar2;
      iVar3 = iVar3 + 1;
    }
    if (*(short *)*param_1 == 0x22) {
      *param_1 = (int)((short *)*param_1 + 1);
    }
  }
  else {
    while (((sVar2 = *(short *)*param_1, sVar2 != 0 && (sVar2 != 0x20)) && (sVar2 != 9))) {
      if (iVar3 + 1 < param_3) {
        *(short *)(param_2 + iVar3 * 2) = sVar2;
        iVar3 = iVar3 + 1;
      }
      *param_1 = *param_1 + 2;
    }
  }
  *(undefined2 *)(param_2 + iVar3 * 2) = 0;
  return iVar3 != 0;
}


// ==== 10153c15 Catch@10153c15

void Catch_10153c15(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 10153c29 Catch@10153c29

void Catch_10153c29(void)

{
  appUnwindf((ushort *)&DAT_101d62d8,L"ParseToken");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153ca0 FUN_10153ca0

undefined4 FUN_10153ca0(int *param_1,short *param_2,int param_3,int param_4)

{
  short sVar1;
  short *psVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = false;
  bVar3 = false;
  bVar4 = false;
  *param_2 = 0;
  while( true ) {
    psVar2 = (short *)*param_1;
    sVar1 = *psVar2;
    if ((((sVar1 == 0) || (sVar1 == 10)) || (sVar1 == 0xd)) || (param_3 = param_3 + -1, param_3 < 1)
       ) break;
    if ((!bVar3) && (param_4 == 0)) {
      if ((sVar1 == 0x2f) && (psVar2[1] == 0x2f)) {
        bVar4 = true;
      }
      if (sVar1 == 0x7c) goto LAB_10153d80;
    }
    bVar3 = (bool)(bVar3 ^ sVar1 == 0x22);
    bVar5 = true;
    if (bVar4) {
      *param_1 = (int)(psVar2 + 1);
    }
    else {
      *param_2 = sVar1;
      param_2 = param_2 + 1;
      *param_1 = *param_1 + 2;
    }
  }
  if (param_4 == 0) {
LAB_10153d80:
    while( true ) {
      sVar1 = *(short *)*param_1;
      if (((sVar1 != 10) && (sVar1 != 0xd)) && (sVar1 != 0x7c)) break;
      *param_1 = (int)((short *)*param_1 + 1);
    }
  }
  else {
    if (*psVar2 == 0xd) {
      *param_1 = (int)(psVar2 + 1);
    }
    if (*(short *)*param_1 == 10) {
      *param_1 = (int)((short *)*param_1 + 1);
    }
  }
  *param_2 = 0;
  if ((*(short *)*param_1 == 0) && (!bVar5)) {
    return 0;
  }
  return 1;
}


// ==== 10153ddd Catch@10153ddd

void Catch_10153ddd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10153df1 Catch@10153df1

void Catch_10153df1(void)

{
  appUnwindf((ushort *)&DAT_101d62e4,L"ParseLine");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10153e70 FUN_10153e70

ushort * FUN_10153e70(FOutputDevice *param_1,ushort *param_2,undefined4 param_3,ushort *param_4,
                     int param_5)

{
  ushort *puVar1;
  int iVar2;
  ushort local_224 [262];
  ushort *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc0f0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = appStaticString1024();
  local_18 = puVar1;
  if ((GIsStarted == 0) || (GConfig == (FConfigCache *)0x0)) {
    appStrcpy(puVar1,param_2);
    ExceptionList = local_10;
    return puVar1;
  }
  if (param_4 == (ushort *)0x0) {
    param_4 = UObject::GetLanguage();
  }
  while( true ) {
    appSprintf(local_224,(ushort *)L"%s.%s",param_3,param_4);
    iVar2 = (**(code **)(*(int *)GConfig + 0x10))(param_1,param_2,local_18,0x400,local_224);
    if (iVar2 != 0) {
      ExceptionList = local_10;
      return local_18;
    }
    iVar2 = appStricmp(param_4,(ushort *)&DAT_101d6324);
    if (iVar2 == 0) break;
    param_4 = (ushort *)&DAT_101d632c;
  }
  if (param_5 != 0) {
    ExceptionList = local_10;
    return local_18;
  }
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(param_1,(EName)GLog,(ushort *)0x311);
  }
  appSprintf(local_18,(ushort *)L"<?%s?%s.%s.%s?>",param_4,param_3,param_1,param_2);
  ExceptionList = local_10;
  return local_18;
}


// ==== 10153f9d Catch@10153f9d

void Catch_10153f9d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10153fb1 Catch@10153fb1

void Catch_10153fb1(void)

{
  appUnwindf((ushort *)&DAT_101d6394,L"Localize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10154030 FUN_10154030

void FUN_10154030(ushort *param_1,ushort *param_2,ushort *param_3)

{
  Localize((ushort *)L"Errors",param_1,param_2,param_3,0);
  return;
}


// ==== 10154060 FUN_10154060

void FUN_10154060(ushort *param_1,ushort *param_2,ushort *param_3)

{
  Localize((ushort *)L"Progress",param_1,param_2,param_3,0);
  return;
}


// ==== 10154090 FUN_10154090

void FUN_10154090(ushort *param_1,ushort *param_2,ushort *param_3)

{
  Localize((ushort *)L"Query",param_1,param_2,param_3,0);
  return;
}


// ==== 101540c0 FUN_101540c0

void FUN_101540c0(ushort *param_1,ushort *param_2,ushort *param_3)

{
  Localize((ushort *)L"General",param_1,param_2,param_3,0);
  return;
}


// ==== 101540f0 FUN_101540f0

undefined4 FUN_101540f0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc100;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)(**(code **)(*(int *)GFileManager + 0xc))(param_1,0x10,GNull);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10154169 Catch@10154169

void Catch_10154169(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015417d Catch@1015417d

void Catch_1015417d(void)

{
  appUnwindf((ushort *)&DAT_101d63dc,L"appUpdateFileModTime");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101541d0 FUN_101541d0

undefined4 FUN_101541d0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc110;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*param_3 + 0xc))(param_2,0,GNull);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  (**(code **)(*piVar1 + 4))(*param_1,param_1[1]);
  (**(code **)*piVar1)(1);
  ExceptionList = local_10;
  return 1;
}


// ==== 10154259 Catch@10154259

void Catch_10154259(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015426d Catch@1015426d

void Catch_1015426d(void)

{
  appUnwindf((ushort *)&DAT_101d63f4,L"appSaveArrayToFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101542c0 FUN_101542c0

void FUN_101542c0(undefined4 param_1,ushort *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc120;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  do {
    iVar1 = DAT_10323ad0;
    DAT_10323ad0 = DAT_10323ad0 + 1;
    appSprintf(param_2,(ushort *)L"%s%04X.tmp",param_1,iVar1);
    iVar1 = (**(code **)(*(int *)GFileManager + 0x10))(param_2);
  } while (0 < iVar1);
  ExceptionList = local_10;
  return;
}


// ==== 10154339 Catch@10154339

void Catch_10154339(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015434d Catch@1015434d

void Catch_1015434d(void)

{
  appUnwindf((ushort *)&DAT_101d650c,L"appCreateTempFilename");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101543a0 FUN_101543a0

void FUN_101543a0(void)

{
  FOutputDevice *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc130;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (GLog != (undefined *)0x0) {
    ExceptionList = &local_10;
    FOutputDevice::Logf2(in_ECX,(EName)GLog,(ushort *)0x2fb);
  }
  thunk_FUN_10178490();
  FMemStack::Exit(&GMem);
  UObject::StaticExit();
  ExceptionList = local_10;
  return;
}


// ==== 10154410 Catch@10154410

void Catch_10154410(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10154424 Catch@10154424

void Catch_10154424(void)

{
  appUnwindf((ushort *)&DAT_101d6820,L"appPreExit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10154470 FUN_10154470

void FUN_10154470(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc140;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FFileStream::Destroy();
  if (GConfig != (FConfigCache *)0x0) {
    (**(code **)(*(int *)GConfig + 0x44))();
    if (GConfig != (FConfigCache *)0x0) {
      (**(code **)(*(int *)GConfig + 0x4c))(1);
    }
    GConfig = (FConfigCache *)0x0;
  }
  FName::StaticExit();
  if (GIsCriticalError == 0) {
    (**(code **)(*(int *)GMalloc + 0xc))();
  }
  thunk_FUN_10178560();
  ExceptionList = local_10;
  return;
}


// ==== 10154503 Catch@10154503

void Catch_10154503(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10154517 Catch@10154517

void Catch_10154517(void)

{
  appUnwindf((ushort *)&DAT_101d6828,L"appExit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10154570 FUN_10154570

ushort * FUN_10154570(int param_1,ushort *param_2)

{
  short sVar1;
  undefined1 uVar2;
  ushort *puVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc150;
  local_10 = ExceptionList;
  iVar4 = 0;
  local_8 = 0;
  if (param_1 == 0) {
    return (ushort *)0x0;
  }
  puVar3 = param_2;
  ExceptionList = &local_10;
  if (param_2 == (ushort *)0x0) {
    ExceptionList = &local_10;
    puVar3 = appStaticString1024();
  }
  for (; ((param_2 != (ushort *)0x0 || (iVar4 < 0x3ff)) &&
         (sVar1 = *(short *)(param_1 + iVar4 * 2), sVar1 != 0)); iVar4 = iVar4 + 1) {
    uVar2 = thunk_FUN_1014f8d0(sVar1);
    *(undefined1 *)(iVar4 + (int)puVar3) = uVar2;
  }
  *(undefined1 *)(iVar4 + (int)puVar3) = 0;
  ExceptionList = local_10;
  return puVar3;
}


// ==== 10154603 Catch@10154603

void Catch_10154603(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 10154617 Catch@10154617

void Catch_10154617(void)

{
  appUnwindf((ushort *)&DAT_101d6830,L"appToAnsi");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10154670 FUN_10154670

LPWSTR FUN_10154670(LPCSTR param_1,LPWSTR param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc160;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == (LPCSTR)0x0) {
    return (LPWSTR)0x0;
  }
  ExceptionList = &local_10;
  if (param_2 == (LPWSTR)0x0) {
    ExceptionList = &local_10;
    param_2 = (LPWSTR)appStaticString1024();
  }
  MultiByteToWideChar(0,0,param_1,-1,param_2,0x400);
  ExceptionList = local_10;
  return param_2;
}


// ==== 101546e6 Catch@101546e6

void Catch_101546e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101546fa Catch@101546fa

void Catch_101546fa(void)

{
  appUnwindf((ushort *)&DAT_101d6838,L"appFromAnsi");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10154740 FUN_10154740

void FUN_10154740(undefined4 param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bc178;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,1);
  ExceptionList = local_c;
  return;
}


// ==== 101547b0 FUN_101547b0

void FUN_101547b0(char *param_1,char *param_2)

{
  FOutputDevice *this;
  
  appFromAnsi(param_2,(ushort *)0x0);
  appFromAnsi(param_1,(ushort *)0x0);
  FOutputDevice::Logf(this,(ushort *)GError);
  return;
}


// ==== 10154800 FUN_10154800

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_10154800(ushort *param_1,ushort *param_2,FString *param_3)

{
  int iVar1;
  ushort local_2020;
  undefined1 local_201e [8198];
  undefined4 uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc190;
  local_10 = ExceptionList;
  uStack_18 = 0x10154823;
  local_14 = &stack0xffffdfd4;
  local_8 = 0;
  local_2020 = 0;
  ExceptionList = &local_10;
  _memset(local_201e,0,0x1ffe);
  iVar1 = Parse(param_1,param_2,&local_2020,0x1000);
  if (iVar1 != 0) {
    FString::operator=(param_3,&local_2020);
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101548a4 Catch@101548a4

void Catch_101548a4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101548b8 Catch@101548b8

void Catch_101548b8(void)

{
  appUnwindf((ushort *)&DAT_101d6230,L"FString::Parse");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10154910 FUN_10154910

void FUN_10154910(ushort *param_1,ushort *param_2,__int64 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc1a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  Parse(param_1,param_2,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 1015495d Catch@1015495d

void Catch_1015495d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10154971 Catch@10154971

void Catch_10154971(void)

{
  appUnwindf((ushort *)&DAT_101d6238,L"ParseQWORD");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101549b0 FUN_101549b0

undefined4 FUN_101549b0(ushort **param_1,FString *param_2,int param_3)

{
  int iVar1;
  ushort local_800 [1024];
  
  iVar1 = ParseToken(param_1,local_800,0x400,param_3);
  if (iVar1 != 0) {
    FString::operator=(param_2,local_800);
    return 1;
  }
  return 0;
}


// ==== 10154a10 FUN_10154a10

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int FUN_10154a10(ushort **param_1,FString *param_2,int param_3)

{
  int iVar1;
  ushort local_2020;
  undefined1 local_201e [8198];
  undefined4 uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc1b0;
  local_10 = ExceptionList;
  uStack_18 = 0x10154a33;
  local_14 = &stack0xffffdfd4;
  local_8 = 0;
  local_2020 = 0;
  ExceptionList = &local_10;
  _memset(local_201e,0,0x1ffe);
  iVar1 = ParseLine(param_1,&local_2020,0x1000,param_3);
  FString::operator=(param_2,&local_2020);
  ExceptionList = local_10;
  return iVar1;
}


// ==== 10154a9c Catch@10154a9c

void Catch_10154a9c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10154ab0 Catch@10154ab0

void Catch_10154ab0(void)

{
  appUnwindf((ushort *)&DAT_101d62f0,L"ParseLine");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10154b00 FUN_10154b00

void FUN_10154b00(char *param_1,char *param_2,ushort *param_3,ushort *param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = appFromAnsi(param_2,(ushort *)0x0);
  puVar2 = appFromAnsi(param_1,(ushort *)0x0);
  Localize(puVar2,puVar1,param_3,param_4,param_5);
  return;
}


// ==== 10154b50 FUN_10154b50

void FUN_10154b50(char *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
  puVar1 = appFromAnsi(param_1,(ushort *)0x0);
  Localize((ushort *)L"Errors",puVar1,param_2,param_3,0);
  return;
}


// ==== 10154b80 FUN_10154b80

void FUN_10154b80(char *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
  puVar1 = appFromAnsi(param_1,(ushort *)0x0);
  Localize((ushort *)L"Progress",puVar1,param_2,param_3,0);
  return;
}


// ==== 10154bb0 FUN_10154bb0

void FUN_10154bb0(char *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
  puVar1 = appFromAnsi(param_1,(ushort *)0x0);
  Localize((ushort *)L"Query",puVar1,param_2,param_3,0);
  return;
}


// ==== 10154be0 FUN_10154be0

void FUN_10154be0(char *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
  puVar1 = appFromAnsi(param_1,(ushort *)0x0);
  Localize((ushort *)L"General",puVar1,param_2,param_3,0);
  return;
}


// ==== 10154c10 FUN_10154c10

undefined4 FUN_10154c10(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc1c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*param_3 + 8))(param_2,0,GNull);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  thunk_FUN_10113f60(0);
  uVar2 = (**(code **)(*piVar1 + 0x2c))();
  thunk_FUN_1012aa10(uVar2);
  (**(code **)(*piVar1 + 4))(*param_1,param_1[1]);
  uVar2 = (**(code **)(*piVar1 + 0x58))();
  (**(code **)*piVar1)(1);
  ExceptionList = local_10;
  return uVar2;
}


// ==== 10154cbb Catch@10154cbb

void Catch_10154cbb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10154ccf Catch@10154ccf

void Catch_10154ccf(void)

{
  appUnwindf((ushort *)&DAT_101d63e4,L"appLoadFileToArray");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10154d30 FUN_10154d30

void FUN_10154d30(undefined4 param_1,ushort *param_2,int *param_3,undefined *param_4,
                 undefined *param_5,FFeedbackContext *param_6,undefined *param_7,code *param_8,
                 int param_9,undefined *param_10)

{
  ulong *puVar1;
  ushort *puVar2;
  byte bVar3;
  uint uVar4;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc1d0;
  local_10 = ExceptionList;
  local_8 = 0;
  GFileManager = param_7;
  GL2CurrentTxtCodec = param_10;
  ExceptionList = &local_10;
  for (uVar4 = 0; uVar4 < 0x100; uVar4 = uVar4 + 1) {
    puVar1 = (ulong *)(uVar4 << 0x18);
    iVar5 = 8;
    while (iVar5 != 0) {
      if ((int)puVar1 < 0) {
        puVar1 = (ulong *)((int)puVar1 * 2 ^ 0x4c11db7);
        (&GCRCTable)[uVar4] = puVar1;
        iVar5 = iVar5 + -1;
      }
      else {
        puVar1 = (ulong *)((int)puVar1 * 2);
        (&GCRCTable)[uVar4] = puVar1;
        iVar5 = iVar5 + -1;
      }
    }
  }
  bVar3 = 0xff;
  iVar6 = 0;
  for (iVar5 = 0; iVar5 < 0x101; iVar5 = iVar5 + 1) {
    (&DAT_10284b68)[iVar5] = bVar3 + 1;
    if (iVar5 == 0) {
LAB_10154de9:
      iVar6 = 0;
      bVar3 = bVar3 + 1;
    }
    else {
      iVar6 = iVar6 + 1;
      if (1 << (bVar3 & 0x1f) <= iVar6) goto LAB_10154de9;
    }
  }
  if (*param_2 != 0x22) goto LAB_10154e24;
  do {
    param_2 = param_2 + 1;
    if (*param_2 == 0) goto LAB_10154e3e;
  } while (*param_2 != 0x22);
  if (*param_2 == 0) goto LAB_10154e24;
  do {
    param_2 = param_2 + 1;
LAB_10154e24:
    if (*param_2 == 0) goto LAB_10154e3e;
  } while (*param_2 != 0x20);
  if (*param_2 != 0) {
    param_2 = param_2 + 1;
  }
LAB_10154e3e:
  appStrcpy((ushort *)&DAT_10285088,param_2);
  appStrcpy((ushort *)&GErrorHist,(ushort *)L"General protection fault!\r\n\r\nHistory: ");
  GLog = param_4;
  GError = param_5;
  GWarn = param_6;
  GMalloc = (undefined *)param_3;
  (**(code **)(*param_3 + 0x14))();
  FName::StaticInit();
  thunk_FUN_101779f0();
  (*(code *)**(undefined4 **)GFileManager)(1);
  iVar5 = *(int *)GFileManager;
  puVar2 = appBaseDir();
  (**(code **)(iVar5 + 0x34))(puVar2);
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this,(EName)GLog,(ushort *)0x2fa);
    if (GLog != (undefined *)0x0) {
      appFromAnsi("19:56:18",(ushort *)0x0);
      puVar2 = appFromAnsi("Sep  3 2007",(ushort *)0x0);
      FOutputDevice::Logf2(this_00,(EName)GLog,(ushort *)0x2fa);
      if (GLog != (undefined *)0x0) {
        puVar2 = (ushort *)GLog;
        FOutputDevice::Logf2(this_01,(EName)GLog,(ushort *)0x2fa);
        if (GLog != (undefined *)0x0) {
          appBaseDir();
          FOutputDevice::Logf2((FOutputDevice *)GLog,(EName)GLog,(ushort *)0x2fa);
          if (GLog != (undefined *)0x0) {
            FOutputDevice::Logf2(this_02,(EName)GLog,(ushort *)0x2fa);
          }
        }
      }
    }
  }
  GIsStrict = ParseParam((ushort *)&DAT_10285088,(ushort *)L"STRICT");
  iVar5 = Parse((ushort *)&DAT_10285088,(ushort *)L"INI=",(ushort *)&GIni,0x400);
  if (iVar5 == 0) {
    appSprintf((ushort *)&GIni,(ushort *)L"%s.ini",param_1,puVar2);
  }
  iVar5 = (**(code **)(*(int *)GFileManager + 0x10))(&GIni);
  if ((iVar5 < 0) && (param_9 != 0)) {
    appMsgf(0,(ushort *)L"Files are corrupted !!!! Please, full check");
    appRequestExit(0);
  }
  iVar5 = Parse((ushort *)&DAT_10285088,(ushort *)L"USERINI=",(ushort *)&GUserIni,0x400);
  if (iVar5 == 0) {
    appStrcpy((ushort *)&GUserIni,(ushort *)L"User.ini");
  }
  iVar5 = (**(code **)(*(int *)GFileManager + 0x10))(&GUserIni);
  if ((iVar5 < 0) && (param_9 != 0)) {
    appMsgf(0,(ushort *)L"Files are corrupted !!!!! Please, full check");
    appRequestExit(0);
  }
  GConfig = (FConfigCache *)(*param_8)();
  (**(code **)(*(int *)GConfig + 0x40))(&GIni,&GUserIni,param_9);
  iVar5 = (**(code **)(*(int *)GConfig + 0x10))
                    (L"Engine.Engine",L"Language",&stack0xfffffdcc,0x100,0);
  if (iVar5 != 0) {
    UObject::SetLanguage((ushort *)&stack0xfffffdcc);
  }
  UObject::StaticInit();
  FMemStack::Init(&GMem,0x10000);
  GFileStream = FFileStream::Init(0x10);
  thunk_FUN_10179a00();
  (**(code **)(*(int *)GFileManager + 0x2c))(L"..\\Crest",0,1);
  ExceptionList = local_10;
  return;
}


// ==== 10155115 Catch@10155115

void Catch_10155115(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10155129 Catch@10155129

void Catch_10155129(void)

{
  appUnwindf((ushort *)&DAT_101d67f0,L"appInit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10155250 FUN_10155250

void FUN_10155250(int param_1,undefined4 param_2,int param_3)

{
  FArray *in_ECX;
  FOutputDevice *this;
  FOutputDevice *this_00;
  
  if (param_1 < 0) {
    appFromAnsi("d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",
                (ushort *)0x0);
    appFromAnsi("Index>=0",(ushort *)0x0);
    FOutputDevice::Logf(this,(ushort *)GError);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFromAnsi("d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",
                (ushort *)0x0);
    appFromAnsi("Index<=ArrayNum",(ushort *)0x0);
    FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_3) {
    appFromAnsi("d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",
                (ushort *)0x0);
    appFromAnsi("Index+Count<=ArrayNum",(ushort *)0x0);
    FOutputDevice::Logf(this_00,(ushort *)GError);
  }
  FArray::Remove(in_ECX,param_1,param_3,1);
  return;
}


// ==== 10155360 FUN_10155360

FArchive * FUN_10155360(FArchive *param_1,TArray<unsigned_short> *param_2)

{
  undefined1 uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined2 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc1e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  iVar4 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  TArray<unsigned_short>::CountBytes(param_2,param_1);
  puVar2 = FString::operator*((FString *)param_2);
  iVar3 = appIsPureAnsi(puVar2);
  local_1c = *(int *)(param_2 + 4);
  if (iVar3 == 0) {
    local_1c = -local_1c;
  }
  operator<<(param_1,(FCompactIndex *)&local_1c);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (local_1c < 0) {
      for (; iVar4 < *(int *)(param_2 + 4); iVar4 = iVar4 + 1) {
        local_2c = (uint)*(ushort *)(*(int *)param_2 + iVar4 * 2);
        thunk_FUN_10130800(param_1,&local_2c);
      }
    }
    else {
      for (; iVar4 < *(int *)(param_2 + 4); iVar4 = iVar4 + 1) {
        local_28 = iVar4;
        uVar1 = thunk_FUN_1014f8d0(*(undefined2 *)(*(int *)param_2 + iVar4 * 2));
        local_18 = CONCAT11(uVar1,(undefined1)local_18);
        thunk_FUN_101307e0(param_1,(int)&local_18 + 1);
      }
    }
  }
  else {
    iVar3 = local_1c;
    if (local_1c < 0) {
      iVar3 = -local_1c;
    }
    *(int *)(param_2 + 4) = iVar3;
    *(int *)(param_2 + 8) = iVar3;
    FArray::Realloc((FArray *)param_2,2);
    if (local_1c < 0) {
      for (; local_24 = iVar4, iVar4 < *(int *)(param_2 + 4); iVar4 = iVar4 + 1) {
        thunk_FUN_10130800(param_1,&local_18);
        *(ushort *)(*(int *)param_2 + iVar4 * 2) = local_18;
      }
    }
    else {
      for (; local_20 = iVar4, iVar4 < *(int *)(param_2 + 4); iVar4 = iVar4 + 1) {
        thunk_FUN_101307e0(param_1,(int)&local_18 + 1);
        *(ushort *)(*(int *)param_2 + iVar4 * 2) = local_18 >> 8;
      }
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_2 + 4) == 1)) {
      FString::Empty((FString *)param_2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 101554a9 Catch@101554a9

void Catch_101554a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_101f843c);
}


// ==== 101554bd Catch@101554bd

void Catch_101554bd(void)

{
  appUnwindf((ushort *)&DAT_101d6164,L"FString<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10155540 FUN_10155540

void FUN_10155540(void)

{
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bc1f8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10155250(0,in_ECX[1]);
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*in_ECX);
  }
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101555d0 FUN_101555d0

void FUN_101555d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10155620 FUN_10155620

void FUN_10155620(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10155670 FUN_10155670

void FUN_10155670(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 101556c0 FUN_101556c0

void FUN_101556c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10155710 FUN_10155710

void FUN_10155710(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10155760 FUN_10155760

void FUN_10155760(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 101557b0 FUN_101557b0

void FUN_101557b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10155800 FUN_10155800

void FUN_10155800(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10155850 FUN_10155850

undefined4 FUN_10155850(TArray<unsigned_short> *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  char *local_38;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bc318;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*param_3 + 8))(param_2,0,GNull);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  uVar2 = (**(code **)(*piVar1 + 0x2c))();
  thunk_FUN_10154740(uVar2 + 2);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*piVar1 + 4))(local_38,uVar2);
  uVar3 = (**(code **)(*piVar1 + 0x58))();
  (**(code **)*piVar1)(1);
  local_38[uVar2] = '\0';
  local_38[uVar2 + 1] = '\0';
  TArray<unsigned_short>::Empty(param_1,0);
  if (1 < (int)uVar2) {
    if ((((uVar2 & 1) == 0) && (*local_38 == -1)) && (local_38[1] == -2)) {
      TArray<unsigned_short>::Add(param_1,uVar2 >> 1);
      for (iVar4 = 0; iVar4 < *(int *)(param_1 + 4) + -1; iVar4 = iVar4 + 1) {
        *(ushort *)(*(int *)param_1 + iVar4 * 2) =
             (ushort)(byte)local_38[iVar4 * 2 + 3] * 0x100 + (ushort)(byte)local_38[iVar4 * 2 + 2];
      }
      goto LAB_101559d7;
    }
    if ((((uVar2 & 1) == 0) && (*local_38 == -2)) && (local_38[1] == -1)) {
      TArray<unsigned_short>::Add(param_1,uVar2 >> 1);
      for (iVar4 = 0; iVar4 < *(int *)(param_1 + 4) + -1; iVar4 = iVar4 + 1) {
        *(ushort *)(*(int *)param_1 + iVar4 * 2) =
             (ushort)(byte)local_38[iVar4 * 2 + 2] * 0x100 + (ushort)(byte)local_38[iVar4 * 2 + 3];
      }
      goto LAB_101559d7;
    }
  }
  TArray<unsigned_short>::Add(param_1,uVar2 + 1);
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 4) + -1; iVar4 = iVar4 + 1) {
    *(ushort *)(*(int *)param_1 + iVar4 * 2) = (ushort)(byte)local_38[iVar4];
  }
LAB_101559d7:
  puVar5 = TArray<unsigned_short>::Last(param_1,0);
  *puVar5 = 0;
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_10155540();
  ExceptionList = local_10;
  return uVar3;
}


// ==== 10155a01 Catch@10155a01

void Catch_10155a01(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 10155a15 Catch@10155a15

void Catch_10155a15(void)

{
  appUnwindf((ushort *)&DAT_101d63ec,L"appLoadFileToString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10155ab0 FUN_10155ab0

/* WARNING: Removing unreachable block (ram,0x10155c36) */

undefined4 FUN_10155ab0(FString *param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  int iVar6;
  int local_38;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bc338;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  iVar6 = 0;
  local_8 = 0;
  if (((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == 1)) ||
     (ExceptionList = &local_10, local_18 = (int *)(**(code **)(*param_3 + 0xc))(param_2,0,GNull),
     local_18 == (int *)0x0)) {
    ExceptionList = local_10;
    return 0;
  }
  while( true ) {
    piVar5 = local_18;
    if (*(int *)(param_1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 4) + -1;
    }
    if (iVar3 <= iVar6) break;
    puVar4 = FString::operator*(param_1);
    bVar1 = thunk_FUN_1014f8d0(puVar4[iVar6]);
    puVar4 = FString::operator*(param_1);
    piVar5 = local_18;
    if (puVar4[iVar6] != (ushort)bVar1) {
      local_1c = 0xfeff;
      (**(code **)(*local_18 + 4))(&local_1c,2);
      if (*(int *)(param_1 + 4) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 4) + -1;
      }
      iVar3 = *piVar5;
      iVar6 = iVar6 * 2;
      puVar4 = FString::operator*(param_1);
      (**(code **)(iVar3 + 4))(puVar4,iVar6);
LAB_10155c23:
      (**(code **)*piVar5)(1);
      ExceptionList = local_10;
      return 1;
    }
    iVar6 = iVar6 + 1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 4) + -1;
  }
  thunk_FUN_10154740(iVar6);
  local_8._0_1_ = 1;
  iVar6 = 0;
  while( true ) {
    if (*(int *)(param_1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 4) + -1;
    }
    if (iVar3 <= iVar6) break;
    puVar4 = FString::operator*(param_1);
    uVar2 = thunk_FUN_1014f8d0(puVar4[iVar6]);
    *(undefined1 *)(local_38 + iVar6) = uVar2;
    iVar6 = iVar6 + 1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 4) + -1;
  }
  (**(code **)(*piVar5 + 4))(local_38,iVar6);
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_10155540();
  goto LAB_10155c23;
}


// ==== 10155c5c Catch@10155c5c

void Catch_10155c5c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 10155c70 Catch@10155c70

void Catch_10155c70(void)

{
  appUnwindf((ushort *)&DAT_101d63fc,L"appSaveStringToFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10155d10 FUN_10155d10

FString * FUN_10155d10(FString *param_1,ushort param_2)

{
  undefined2 uStack0000000a;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bc369;
  local_c = ExceptionList;
  uStack0000000a = 0;
  ExceptionList = &local_c;
  FString::FString(param_1,&param_2);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10155d90 FUN_10155d90

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

FString * FUN_10155d90(FString *param_1,int param_2)

{
  int iVar1;
  FString *this;
  FString *in_ECX;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  FString local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101bc3a9;
  local_10 = ExceptionList;
  local_14 = 0;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 4) + -1;
  }
  uVar5 = param_2 - iVar1;
  if ((int)uVar5 < 1) {
    ExceptionList = &local_10;
    FString::FString(param_1,in_ECX);
  }
  else {
    if ((uVar5 & 0x7fffffff) == 0x7fffffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)&stack0xffffffd0;
    }
    uVar2 = 0;
    if (0 < (int)uVar5) {
      puVar6 = puVar4;
      for (uVar2 = uVar5 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        puVar6[0] = 0x20;
        puVar6[1] = 0x20;
        puVar6 = puVar6 + 2;
      }
      for (uVar3 = (uint)((uVar5 & 1) != 0); uVar2 = uVar5, uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = 0x20;
        puVar6 = puVar6 + 1;
      }
    }
    puVar4[uVar2] = 0;
    ExceptionList = &local_10;
    this = (FString *)FString::FString(local_24,puVar4);
    local_8 = 1;
    FString::operator+(this,param_1);
    local_14 = 1;
    local_8 = 2;
    local_20 = 0;
    local_1c = 0;
    FArray::Realloc((FArray *)local_24,2);
    local_8 = local_8 & 0xffffff00;
    TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)local_24);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10155ec0 FUN_10155ec0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

FString * FUN_10155ec0(FString *param_1,int param_2)

{
  int iVar1;
  FString *in_ECX;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  FString local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  FString *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101bc3e9;
  local_10 = ExceptionList;
  local_14 = 0;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 4) + -1;
  }
  uVar5 = param_2 - iVar1;
  if ((int)uVar5 < 1) {
    ExceptionList = &local_10;
    FString::FString(param_1,in_ECX);
  }
  else {
    if ((uVar5 & 0x7fffffff) == 0x7fffffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)&stack0xffffffd0;
    }
    uVar2 = 0;
    if (0 < (int)uVar5) {
      puVar6 = puVar4;
      local_18 = in_ECX;
      for (uVar2 = uVar5 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        puVar6[0] = 0x20;
        puVar6[1] = 0x20;
        puVar6 = puVar6 + 2;
      }
      for (uVar3 = (uint)((uVar5 & 1) != 0); uVar2 = uVar5, in_ECX = local_18, uVar3 != 0;
          uVar3 = uVar3 - 1) {
        *puVar6 = 0x20;
        puVar6 = puVar6 + 1;
      }
    }
    puVar4[uVar2] = 0;
    ExceptionList = &local_10;
    FString::FString(local_24,puVar4);
    local_8 = 1;
    FString::operator+(in_ECX,param_1);
    local_14 = 1;
    local_8 = 2;
    local_20 = 0;
    local_1c = 0;
    FArray::Realloc((FArray *)local_24,2);
    local_8 = local_8 & 0xffffff00;
    TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)local_24);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10155ff0 FUN_10155ff0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

FString * FUN_10155ff0(FString *param_1)

{
  ushort local_200c [4094];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bc41f;
  local_c = ExceptionList;
  uStack_10 = 0x1015600f;
  ExceptionList = &local_c;
  appGetVarArgs(local_200c,0x1000,(ushort **)&stack0x00000008);
  FString::FString(param_1,local_200c);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10156090 FUN_10156090

FString * FUN_10156090(FString *param_1,ushort **param_2,int param_3)

{
  int iVar1;
  ushort local_80c [1024];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bc45f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = ParseToken(param_2,local_80c,0x400,param_3);
  if (iVar1 == 0) {
    FString::FString(param_1,(ushort *)&DAT_101d62e0);
  }
  else {
    FString::FString(param_1,local_80c);
  }
  ExceptionList = local_c;
  return param_1;
}


// ==== 10156150 FUN_10156150

FString * FUN_10156150(FString *param_1,undefined4 param_2,int param_3)

{
  FString *pFVar1;
  int iVar2;
  int iVar3;
  FString local_94 [12];
  FString local_88 [12];
  FString local_7c [12];
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [20];
  int local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bc4ef;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff60;
  local_1c = 0;
  local_8 = 2;
  ExceptionList = &local_10;
  FString::FString(param_1);
  local_1c = 1;
  local_18 = 0;
  do {
    local_20 = FString::InStr((FString *)&param_2,(ushort *)&DAT_101d62f8,0);
    iVar3 = local_20;
    if (local_20 < 0) {
      if (param_3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_3 + -1;
      }
    }
    FString::Left((FString *)&param_2,(int)local_34);
    local_8._0_1_ = 3;
    if (local_18 == 0) {
      pFVar1 = local_34;
LAB_101562ff:
      FString::operator+=(param_1,pFVar1);
    }
    else {
      pFVar1 = (FString *)thunk_FUN_10151b50(local_34);
      if (pFVar1 != (FString *)0x0) goto LAB_101562ff;
      if (param_3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_3 + -1;
      }
      if (iVar3 == iVar2) {
        pFVar1 = (FString *)FString::FString(local_88,(ushort *)&DAT_101d6308);
        local_8._0_1_ = 8;
        pFVar1 = (FString *)FString::operator+(pFVar1,(ushort *)local_7c);
        local_8._0_1_ = 9;
        pFVar1 = (FString *)FString::operator+(pFVar1,local_70);
        local_8._0_1_ = 10;
        FString::operator+=(param_1,pFVar1);
        local_8._0_1_ = 9;
        FString::~FString(local_70);
        local_8._0_1_ = 8;
        FString::~FString(local_7c);
        local_8._0_1_ = 3;
        FString::~FString(local_88);
      }
      else {
        pFVar1 = (FString *)FString::FString(local_64,(ushort *)&DAT_101d62fc);
        local_8._0_1_ = 4;
        pFVar1 = (FString *)FString::operator+(pFVar1,(ushort *)local_58);
        local_8._0_1_ = 5;
        pFVar1 = (FString *)FString::operator+(pFVar1,local_4c);
        local_8._0_1_ = 6;
        pFVar1 = (FString *)FString::operator+(pFVar1,(ushort *)local_40);
        local_8._0_1_ = 7;
        FString::operator+=(param_1,pFVar1);
        local_8._0_1_ = 6;
        FString::~FString(local_40);
        local_8._0_1_ = 5;
        FString::~FString(local_4c);
        local_8._0_1_ = 4;
        FString::~FString(local_58);
        local_8._0_1_ = 3;
        FString::~FString(local_64);
      }
    }
    pFVar1 = (FString *)FString::Mid((FString *)&param_2,(int)local_94,iVar3 + 1);
    local_8._0_1_ = 0xb;
    FString::operator=((FString *)&param_2,pFVar1);
    local_8._0_1_ = 3;
    FString::~FString(local_94);
    if (local_20 < 0) {
      local_8._0_1_ = 2;
      FString::~FString(local_34);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString((FString *)&param_2);
      ExceptionList = local_10;
      return param_1;
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    FString::~FString(local_34);
    local_18 = local_18 ^ 1;
  } while( true );
}


// ==== 10156380 Catch@10156380

void Catch_10156380(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10156394 Catch@10156394

void Catch_10156394(void)

{
  appUnwindf((ushort *)&DAT_101d6310,L"appFormat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10156450 FUN_10156450

undefined4 FUN_10156450(ushort *param_1,FGuid *param_2,ushort *param_3)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  USystem *pUVar4;
  undefined4 uVar5;
  int iVar6;
  FOutputDevice *this;
  wchar_t *pwVar7;
  ushort *puVar8;
  ushort local_65c [256];
  ushort local_45c [256];
  ushort local_25c [256];
  undefined1 local_5c [20];
  int local_48;
  ushort *local_44;
  int local_40;
  ushort *local_3c;
  int local_38 [3];
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bc530;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff998;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = appStrlen(param_1);
  iVar2 = appStrlen((ushort *)L".dll");
  if (iVar2 < iVar1) {
    pwVar7 = L".dll";
    iVar1 = appStrlen(param_1);
    iVar2 = appStrlen((ushort *)L".dll");
    iVar1 = appStricmp(param_1 + (iVar1 - iVar2),(ushort *)pwVar7);
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return 0;
    }
  }
  puVar8 = (ushort *)&DAT_101d645c;
  puVar3 = UObject::GetLanguage();
  iVar1 = appStricmp(puVar3,puVar8);
  local_24 = (uint)(iVar1 != 0);
  appStrcpy(param_3,param_1);
  iVar1 = (**(code **)(*(int *)GFileManager + 0x10))(param_3);
  if (-1 < iVar1) {
    ExceptionList = local_10;
    return 1;
  }
  pUVar4 = GSys;
  for (local_18 = 0; iVar1 = local_18, local_18 < (int)(((short)GCdPath != 0) + 1);
      local_18 = local_18 + 1) {
    for (; local_40 = iVar1,
        iVar1 < (int)((uint)(param_2 != (FGuid *)0x0) + *(int *)(pUVar4 + 0x68)); iVar1 = iVar1 + 1)
    {
      for (local_1c = 0; (int)local_1c < (int)(local_24 + 1); local_1c = local_1c + 1) {
        local_25c[0] = 0;
        if (local_18 != 0) {
          appStrcat(local_25c,(ushort *)&GCdPath);
          appStrcat(local_25c,(ushort *)L"System");
          appStrcat(local_25c,(ushort *)&DAT_101d6474);
          pUVar4 = GSys;
        }
        if (iVar1 < *(int *)(pUVar4 + 0x68)) {
          puVar3 = FString::operator*((FString *)(*(int *)(pUVar4 + 100) + iVar1 * 0xc));
          appStrcat(local_25c,puVar3);
          puVar3 = appStrstr(local_25c,(ushort *)&DAT_101d6478);
          if (puVar3 != (ushort *)0x0) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          local_44 = puVar3;
          appStrcpy(param_3,local_25c);
          appStrcat(param_3,param_1);
        }
        else {
          puVar3 = FString::operator*((FString *)(pUVar4 + 0x4c));
          appStrcat(local_25c,puVar3);
          appStrcat(local_25c,(ushort *)&DAT_101d647c);
          puVar3 = FString::operator*((FString *)(GSys + 0x58));
          appStrcpy(param_3,local_25c);
          puVar8 = FGuid::String(param_2);
          appStrcat(param_3,puVar8);
        }
        local_2c = 0;
        iVar2 = (**(code **)(*(int *)GFileManager + 0x10))(param_3);
        local_2c = (uint)(-1 < iVar2);
        if (local_2c != 0) {
LAB_101566f2:
          if (iVar1 != *(int *)(GSys + 0x68)) {
            ExceptionList = local_10;
            return 1;
          }
          appUpdateFileModTime(param_3);
          ExceptionList = local_10;
          return 1;
        }
        if (puVar3 != (ushort *)0x0) {
          appStrcat(param_3,(ushort *)&DAT_101d6480);
          if (local_24 != local_1c) {
            puVar8 = UObject::GetLanguage();
            appStrcat(param_3,puVar8);
            appStrcat(param_3,(ushort *)&DAT_101d6484);
          }
          appStrcat(param_3,puVar3 + 1);
          iVar2 = (**(code **)(*(int *)GFileManager + 0x10))(param_3);
          local_2c = (uint)(-1 < iVar2);
        }
        if (local_2c != 0) goto LAB_101566f2;
        local_2c = 0;
        pUVar4 = GSys;
      }
    }
  }
  local_18 = 0;
  do {
    if ((int)(((short)GCdPath != 0) + 1) <= local_18) {
      ExceptionList = local_10;
      return 0;
    }
    for (local_20 = 0; iVar1 = local_20,
        local_20 < (int)((uint)(param_2 != (FGuid *)0x0) + *(int *)(pUVar4 + 0x68));
        local_20 = local_20 + 1) {
      iVar2 = 0;
      local_25c[0] = 0;
      if (local_18 != 0) {
        appStrcat(local_25c,(ushort *)&GCdPath);
        appStrcat(local_25c,(ushort *)L"System");
        appStrcat(local_25c,(ushort *)&DAT_101d6498);
        pUVar4 = GSys;
      }
      if (iVar1 < *(int *)(pUVar4 + 0x68)) {
        puVar3 = FString::operator*((FString *)(*(int *)(pUVar4 + 100) + iVar1 * 0xc));
        appStrcat(local_25c,puVar3);
        puVar3 = appStrstr(local_25c,(ushort *)&DAT_101d649c);
        if (puVar3 != (ushort *)0x0) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        local_3c = puVar3;
        appStrcpy(param_3,local_25c);
        appStrcat(param_3,param_1);
      }
      else {
        puVar3 = FString::operator*((FString *)(pUVar4 + 0x4c));
        appStrcat(local_25c,puVar3);
        appStrcat(local_25c,(ushort *)&DAT_101d64a0);
        puVar3 = FString::operator*((FString *)(GSys + 0x58));
        appStrcpy(param_3,local_25c);
        puVar8 = FGuid::String(param_2);
        appStrcat(param_3,puVar8);
      }
      local_45c[0] = 0;
      thunk_FUN_101098b0();
      local_8 = CONCAT31(local_8._1_3_,1);
      appStrcpy(local_45c,local_25c);
      appStrcat(local_45c,(ushort *)&DAT_101d64a4);
      if (puVar3 != (ushort *)0x0) {
        appStrcat(local_45c,puVar3);
      }
      uVar5 = (**(code **)(*(int *)GFileManager + 0x30))(local_5c,local_45c,1,0);
      local_8._0_1_ = 2;
      thunk_FUN_10124a90(uVar5);
      local_8 = CONCAT31(local_8._1_3_,1);
      thunk_FUN_10124a00();
      local_28 = 0;
      local_65c[0] = 0;
      if (puVar3 != (ushort *)0x0) {
        appStrcpy(local_65c,param_1);
        appStrcat(local_65c,puVar3);
      }
      while (local_48 = iVar2, iVar1 = FArray::IsValidIndex((FArray *)local_38,iVar2), iVar1 != 0) {
        iVar1 = iVar2 * 0xc;
        puVar3 = param_1;
        puVar8 = FString::operator*((FString *)(local_38[0] + iVar1));
        iVar6 = appStricmp(puVar8,puVar3);
        if (iVar6 == 0) {
LAB_1015697f:
          appStrcpy(param_3,local_25c);
          puVar3 = FString::operator*((FString *)(local_38[0] + iVar1));
          appStrcat(param_3,puVar3);
          iVar1 = (**(code **)(*(int *)GFileManager + 0x10))(param_3);
          local_28 = (uint)(-1 < iVar1);
        }
        else {
          puVar3 = local_65c;
          puVar8 = FString::operator*((FString *)(iVar1 + local_38[0]));
          iVar6 = appStricmp(puVar8,puVar3);
          if (iVar6 == 0) goto LAB_1015697f;
        }
        iVar2 = iVar2 + 1;
      }
      if (local_28 != 0) {
        if (GLog != (undefined *)0x0) {
          FOutputDevice::Logf2(this,(ushort *)GLog);
        }
        if (local_20 == *(int *)(GSys + 0x68)) {
          appUpdateFileModTime(param_3);
        }
        local_8 = local_8 & 0xffffff00;
        thunk_FUN_10124a00();
        ExceptionList = local_10;
        return 1;
      }
      local_8 = local_8 & 0xffffff00;
      thunk_FUN_10124a00();
      pUVar4 = GSys;
    }
    local_18 = local_18 + 1;
  } while( true );
}


// ==== 10156a34 Catch@10156a34

void Catch_10156a34(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_101f843c);
}


// ==== 10156a48 Catch@10156a48

void Catch_10156a48(void)

{
  appUnwindf((ushort *)&DAT_101d64ec,L"appFindPackageFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10156bf0 FUN_10156bf0

void FUN_10156bf0(ushort *param_1)

{
  FNameEntry *pFVar1;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc540;
  local_10 = ExceptionList;
  local_8 = 0;
  for (this = (FOutputDevice *)0x0; this < (FOutputDevice *)0x1000; this = this + 1) {
    pFVar1 = (FNameEntry *)(&FName::NameHash)[(int)this];
    if (pFVar1 != (FNameEntry *)0x0) {
      for (; pFVar1 != (FNameEntry *)0x0; pFVar1 = *(FNameEntry **)(pFVar1 + 8)) {
      }
    }
  }
  ExceptionList = &local_10;
  FOutputDevice::Logf(this,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10156c84 Catch@10156c84

void Catch_10156c84(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10156c98 Catch@10156c98

void Catch_10156c98(void)

{
  appUnwindf((ushort *)&DAT_101d8818,L"FName::DisplayHash");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10156cf0 FUN_10156cf0

undefined4 * FUN_10156cf0(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc550;
  local_10 = ExceptionList;
  local_8 = 0;
  puVar2 = *(undefined4 **)GMalloc;
  pwVar3 = L"NameEntry";
  ExceptionList = &local_10;
  iVar1 = appStrlen(param_1);
  puVar2 = (undefined4 *)(*(code *)*puVar2)(iVar1 * 2 + 0xe,pwVar3);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2[2] = param_4;
  appStrcpy((ushort *)(puVar2 + 3),param_1);
  ExceptionList = local_10;
  return puVar2;
}


// ==== 10156d72 Catch@10156d72

void Catch_10156d72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10156d86 Catch@10156d86

void Catch_10156d86(void)

{
  appUnwindf((ushort *)&DAT_101d88d8,L"AllocateNameEntry");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10156de0 FUN_10156de0

void FUN_10156de0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10156e30 FUN_10156e30

int FUN_10156e30(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  param_1 = iVar1 + param_1;
  *(int *)(in_ECX + 4) = param_1;
  if (*(int *)(in_ECX + 8) < param_1) {
    *(int *)(in_ECX + 8) = ((int)(param_1 * 3 + (param_1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + param_1;
    FArray::Realloc(in_ECX,4);
  }
  return iVar1;
}


// ==== 10156e80 FUN_10156e80

void FUN_10156e80(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,4);
  return;
}


// ==== 10156eb0 FUN_10156eb0

int FUN_10156eb0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,4);
  }
  *(undefined4 *)(*(int *)in_ECX + iVar2 * 4) = *param_1;
  return iVar2;
}


// ==== 10156f00 FUN_10156f00

void FUN_10156f00(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10156fa0 FUN_10156fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10156fa0(FNameEntry **param_1)

{
  uint uVar1;
  int iVar2;
  FScopeCriticalSection local_20 [4];
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bc588;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  FScopeCriticalSection::FScopeCriticalSection(local_20,FName::NameCS);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar1 = thunk_FUN_1014fa60(param_1 + 3);
  param_1[2] = (FNameEntry *)(&FName::NameHash)[uVar1 & 0xfff];
  (&FName::NameHash)[uVar1 & 0xfff] = param_1;
  for (iVar2 = DAT_10327ae4; local_1c = iVar2, iVar2 <= (int)*param_1; iVar2 = iVar2 + 1) {
    local_18 = 0;
    thunk_FUN_10156eb0(&local_18);
  }
  if (*(int *)(_Names + (int)*param_1 * 4) != 0) {
    FOutputDevice::Logf(_Names,(ushort *)GError);
  }
  *(FNameEntry ***)(_Names + (int)*param_1 * 4) = param_1;
  local_8 = local_8 & 0xffffff00;
  FScopeCriticalSection::~FScopeCriticalSection(local_20);
  ExceptionList = local_10;
  return;
}


// ==== 10157070 Catch@10157070

void Catch_10157070(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10157084 Catch@10157084

void Catch_10157084(void)

{
  appUnwindf((ushort *)&DAT_101d6f04,L"FName::Hardcode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101570e0 FUN_101570e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101570e0(ushort *param_1,int param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  FNameEntry *pFVar6;
  FOutputDevice *in_ECX;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this;
  FScopeCriticalSection local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bc5a8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  this = in_ECX;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffd4;
  if (param_1 == (ushort *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("Name",".\\UnName.cpp",0x5a);
    this = extraout_ECX;
    puVar2 = local_14;
  }
  local_14 = puVar2;
  if (FName::Initialized == 0) {
    FOutputDevice::Logf(this,(ushort *)GError);
  }
  if (*param_1 == 0) {
    *(ulong *)in_ECX = 0;
  }
  else {
    FScopeCriticalSection::FScopeCriticalSection(local_18,FName::NameCS);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar3 = thunk_FUN_1014fa60();
    uVar3 = uVar3 & 0xfff;
    for (pFVar6 = (FNameEntry *)(&FName::NameHash)[uVar3]; pFVar6 != (FNameEntry *)0x0;
        pFVar6 = *(FNameEntry **)(pFVar6 + 8)) {
      iVar4 = appStricmp(param_1,(ushort *)(pFVar6 + 0xc));
      if (iVar4 == 0) {
        *(FNameEntry **)in_ECX = *(FNameEntry **)pFVar6;
        goto LAB_1015722b;
      }
    }
    if (param_2 == 0) {
      *(ulong *)in_ECX = 0;
    }
    else {
      if (DAT_10327af0 == 0) {
        uVar5 = thunk_FUN_10156e30();
        *(ulong *)in_ECX = uVar5;
      }
      else {
        *(ulong *)in_ECX = *(ulong *)(_Available + -4 + DAT_10327af0 * 4);
        thunk_FUN_10113dd0(DAT_10327af0 + -1);
      }
      pFVar6 = AllocateNameEntry(param_1,*(ulong *)in_ECX,0,(FNameEntry *)(&FName::NameHash)[uVar3])
      ;
      (&FName::NameHash)[uVar3] = (FNameEntry **)pFVar6;
      *(FNameEntry **)(_Names + *(ulong *)in_ECX * 4) = pFVar6;
      if (param_2 == 2) {
        puVar1 = (uint *)(*(int *)(_Names + *(ulong *)in_ECX * 4) + 4);
        *puVar1 = *puVar1 | 0x4000000;
      }
    }
LAB_1015722b:
    local_8 = local_8 & 0xffffff00;
    FScopeCriticalSection::~FScopeCriticalSection(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10157253 Catch@10157253

void Catch_10157253(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10157267 Catch@10157267

void Catch_10157267(void)

{
  appUnwindf((ushort *)&DAT_101d6f80,L"FName::FName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101572f0 FUN_101572f0

void FUN_101572f0(void)

{
  FCriticalSection *this;
  uint uVar1;
  FNameEntry *pFVar2;
  int iVar3;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  FOutputDevice *this_00;
  FNameEntry *pFVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bc5cb;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (FName::Initialized != 0) {
    ExceptionList = &local_10;
    appFailAssert("Initialized==0",".\\UnName.cpp",0xa4);
  }
  FName::Initialized = 1;
  if (FName::NameCS != (FCriticalSection *)0x0) {
    thunk_FUN_101286e0(1);
  }
  this = (FCriticalSection *)thunk_FUN_101088a0(4);
  local_8._0_1_ = 1;
  if (this == (FCriticalSection *)0x0) {
    FName::NameCS = (FCriticalSection *)0x0;
  }
  else {
    FName::NameCS = (FCriticalSection *)FCriticalSection::FCriticalSection(this);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  for (uVar1 = 0; uVar1 < 0x1000; uVar1 = uVar1 + 1) {
    (&FName::NameHash)[uVar1] = (FNameEntry **)0x0;
  }
  pFVar2 = AllocateNameEntry((ushort *)L"None",0,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ByteProperty",1,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"IntProperty",2,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"BoolProperty",3,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"FloatProperty",4,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ObjectProperty",5,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NameProperty",6,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DelegateProperty",7,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ClassProperty",8,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ArrayProperty",9,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"StructProperty",10,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"VectorProperty",0xb,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"RotatorProperty",0xc,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"StrProperty",0xd,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"MapProperty",0xe,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"FixedArrayProperty",0xf,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Core",0x14,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Engine",0x15,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Editor",0x16,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Gameplay",0x17,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Byte",0x50,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7204,0x51,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Bool",0x52,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Float",0x53,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Name",0x54,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"String",0x55,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Struct",0x56,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Vector",0x57,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Rotator",0x58,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Color",0x5a,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Plane",0x5b,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Button",0x5c,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"CompressedPosition",0x5d,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Begin",100,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"State",0x66,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Function",0x67,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Self",0x68,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"True",0x69,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"False",0x6a,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Transient",0x6b,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Enum",0x75,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Replication",0x77,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Reliable",0x78,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Unreliable",0x79,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Always",0x7a,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Field",0x96,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Object",0x97,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"TextBuffer",0x98,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Linker",0x99,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"LinkerLoad",0x9a,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"LinkerSave",0x9b,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Subsystem",0x9c,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Factory",0x9d,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"TextBufferFactory",0x9e,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Exporter",0x9f,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"StackNode",0xa0,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Property",0xa1,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Camera",0xa2,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PlayerInput",0xa3,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Vect",600,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d74b0,0x259,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ArrayCount",0x25d,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EnumCount",0x25e,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d74e4,0x25f,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Else",0x26c,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d74f8,0x26d,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Goto",0x26e,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Stop",0x26f,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Until",0x271,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"While",0x272,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7530,0x273,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Break",0x274,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7544,0x275,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ForEach",0x276,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Assert",0x277,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Switch",0x278,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Case",0x279,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Default",0x27a,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Continue",0x27b,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Private",0x280,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Const",0x281,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d75c8,0x282,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Export",0x283,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EdFindable",0x284,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Skip",0x286,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Coerce",0x287,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Optional",0x288,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Input",0x289,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Config",0x28a,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Travel",0x28c,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EditConst",0x28d,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Localized",0x28e,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"GlobalConfig",0x28f,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SafeReplace",0x290,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d76b0,0x291,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Protected",0x292,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Public",0x293,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EditInline",0x294,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EditInlineUse",0x295,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Deprecated",0x296,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EditConstArray",0x297,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EditInlineNotify",0x298,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Constructive",0x299,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Intrinsic",0x29f,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Within",0x2a0,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Abstract",0x2a1,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Package",0x2a2,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Guid",0x2a3,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Parent",0x2a4,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Class",0x2a5,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Extends",0x2a6,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NoExport",0x2a7,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Placeable",0x2a8,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PerObjectConfig",0x2a9,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NativeReplication",0x2aa,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotPlaceable",0x2ab,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EditInlineNew",0x2ac,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotEditInlineNew",0x2ad,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"HideCategories",0x2ae,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ShowCategories",0x2af,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"CollapseCategories",0x2b0,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DontCollapseCategories",0x2b1,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DependsOn",0x2ba,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DynamicRecompile",699,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Auto",0x2b2,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Ignores",0x2b3,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Instanced",0x2b4,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Global",0x2b7,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Super",0x2b8,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Outer",0x2b9,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Operator",700,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PreOperator",0x2bd,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PostOperator",0x2be,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Final",0x2bf,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Iterator",0x2c0,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Latent",0x2c1,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Return",0x2c2,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Singular",0x2c3,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Simulated",0x2c4,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Exec",0x2c5,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Event",0x2c6,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Static",0x2c7,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Native",0x2c8,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Invariant",0x2c9,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Delegate",0x2ca,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7b08,0x2d0,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Local",0x2d1,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Import",0x2d2,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"From",0x2d3,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Spawn",0x2da,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Array",0x2db,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7b50,0x2dc,0x4000400,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7b58,0x2e4,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Role",0x2e6,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"RemoteRole",0x2e7,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"System",0x2e8,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"User",0x2e9,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7ba0,0x2f8,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Critical",0x2f9,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Init",0x2fa,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Exit",0x2fb,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7bd4,0x2fc,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Play",0x2fd,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Console",0x2fe,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Warning",0x2ff,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ExecWarning",0x300,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ScriptWarning",0x301,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ScriptLog",0x302,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7c50,0x303,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevNet",0x304,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevPath",0x305,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevNetTraffic",0x306,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevAudio",0x307,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevLoad",0x308,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevSave",0x309,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevGarbage",0x30a,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevKill",0x30b,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevReplace",0x30c,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevMusic",0x30d,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevSound",0x30e,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevCompile",0x30f,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevBind",0x310,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Localization",0x311,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Compatibility",0x312,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NetComeGo",0x313,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Title",0x314,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Error",0x315,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Heading",0x316,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SubHeading",0x317,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"FriendlyError",0x318,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Progress",0x319,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"UserPrompt",0x31a,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"White",800,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Black",0x321,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7e44,0x322,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Green",0x323,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Blue",0x324,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Cyan",0x325,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Magenta",0x326,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Yellow",0x327,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DefaultColor",0x328,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"KeyType",0x334,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"KeyEvent",0x335,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Write",0x336,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Message",0x337,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"InitialState",0x338,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Texture",0x339,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Sound",0x33a,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"FireTexture",0x33b,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"IceTexture",0x33c,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"WaterTexture",0x33d,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"WaveTexture",0x33e,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"WetTexture",0x33f,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Main",0x340,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyLevelChange",0x341,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"VideoChange",0x342,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SendText",0x343,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SendBinary",0x344,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ConnectFailure",0x345,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Length",0x346,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Insert",0x347,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Remove",0x348,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Spawned",300,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Destroyed",0x12d,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"GainedChild",0x12e,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"LostChild",0x12f,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Probe4",0x130,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Probe5",0x131,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Trigger",0x132,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"UnTrigger",0x133,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Timer",0x134,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"HitWall",0x135,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Falling",0x136,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Landed",0x137,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PhysicsVolumeChange",0x138,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Touch",0x139,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"UnTouch",0x13a,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Bump",0x13b,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"BeginState",0x13c,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EndState",0x13d,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"BaseChange",0x13e,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Attach",0x13f,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Detach",0x140,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ActorEntered",0x141,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ActorLeaving",0x142,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ZoneChange",0x143,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"AnimEnd",0x144,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EndedRotation",0x145,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"InterpolateEnd",0x146,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EncroachingOn",0x147,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EncroachedBy",0x148,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyTurningInPlace",0x149,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"HeadVolumeChange",0x14a,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PostTouch",0x14b,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PawnEnteredVolume",0x14c,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"MayFall",0x14d,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"CheckDirectionChange",0x14e,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PawnLeavingVolume",0x14f,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PhysicsChangedFor",0x167,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ActorEnteredVolume",0x168,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ActorLeavingVolume",0x169,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Tick",0x150,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PlayerTick",0x151,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ModifyVelocity",0x152,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"CheckMovementTransition",0x153,0x4000000,(FNameEntry *)0x0)
  ;
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SeePlayer",0x154,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EnemyNotVisible",0x155,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"HearNoise",0x156,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"UpdateEyeHeight",0x157,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SeeMonster",0x158,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SeeFriend",0x159,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SpecialHandling",0x15a,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"BotDesireability",0x15b,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyBump",0x15c,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyPhysicsVolumeChange",0x15d,0x4000000,
                             (FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"AIHearSound",0x15e,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyHeadVolumeChange",0x15f,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyLanded",0x160,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyHitWall",0x161,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PostNetReceive",0x162,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PreBeginPlay",0x163,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"BeginPlay",0x164,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PostBeginPlay",0x165,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Probe58",0x166,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PrepareForMove",0x16a,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d86cc,0x16b,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SceneStarted",0x16c,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SceneEnded",0x16d,0x4000000,(FNameEntry *)0x0);
  FName::Hardcode(pFVar2);
  this_00 = extraout_ECX;
  for (uVar1 = 0; uVar1 < 0x1000; uVar1 = uVar1 + 1) {
    for (pFVar2 = (FNameEntry *)(&FName::NameHash)[uVar1]; pFVar2 != (FNameEntry *)0x0;
        pFVar2 = *(FNameEntry **)(pFVar2 + 8)) {
      for (pFVar4 = *(FNameEntry **)(pFVar2 + 8); pFVar4 != (FNameEntry *)0x0;
          pFVar4 = *(FNameEntry **)(pFVar4 + 8)) {
        iVar3 = appStricmp((ushort *)(pFVar2 + 0xc),(ushort *)(pFVar4 + 0xc));
        this_00 = extraout_ECX_00;
        if (iVar3 == 0) {
          FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
          this_00 = extraout_ECX_01;
        }
      }
    }
  }
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this_00,(EName)GLog,(ushort *)0x2fa);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015941a Catch@1015941a

void Catch_1015941a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1015942e Catch@1015942e

void Catch_1015942e(void)

{
  appUnwindf((ushort *)&DAT_101d8774,L"FName::StaticInit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10159ca0 FUN_10159ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10159ca0(void)

{
  int iVar1;
  FOutputDevice *this;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc5e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (FName::Initialized == 0) {
    ExceptionList = &local_10;
    appFailAssert("Initialized",".\\UnName.cpp",0xca);
  }
  if (FName::NameCS != (FCriticalSection *)0x0) {
    thunk_FUN_101286e0(1);
    FName::NameCS = (FCriticalSection *)0x0;
  }
  iVar1 = _Names;
  for (iVar2 = 0; iVar2 < DAT_10327ae4; iVar2 = iVar2 + 1) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      thunk_FUN_101088c0(*(undefined4 *)(iVar1 + iVar2 * 4));
      iVar1 = _Names;
    }
  }
  thunk_FUN_10156e80(0);
  thunk_FUN_10113560(0);
  FName::Initialized = 0;
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this,(EName)GLog,(ushort *)0x2fb);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10159d7c Catch@10159d7c

void Catch_10159d7c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10159d90 Catch@10159d90

void Catch_10159d90(void)

{
  appUnwindf((ushort *)&DAT_101d87cc,L"FName::StaticExit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10159df0 FUN_10159df0

void FUN_10159df0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bc5f8;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10159ed0 FUN_10159ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10159ed0(int param_1)

{
  FNameEntry *pFVar1;
  FNameEntry *pFVar2;
  uint uVar3;
  FNameEntry *pFVar4;
  FScopeCriticalSection local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bc618;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  FScopeCriticalSection::FScopeCriticalSection(local_18,FName::NameCS);
  local_8 = CONCAT31(local_8._1_3_,1);
  pFVar1 = *(FNameEntry **)(_Names + param_1 * 4);
  if (pFVar1 == (FNameEntry *)0x0) {
    appFailAssert("NameEntry",".\\UnName.cpp",0x102);
  }
  if (((uint)*(FNameEntry **)(pFVar1 + 4) & 0x4000000) != 0) {
    appFailAssert("!(NameEntry->Flags & RF_Native)",".\\UnName.cpp",0x103);
  }
  uVar3 = thunk_FUN_1014fa60(pFVar1 + 0xc);
  pFVar4 = (FNameEntry *)(&FName::NameHash + (uVar3 & 0xfff));
  do {
    pFVar2 = *(FNameEntry **)pFVar4;
    if (pFVar2 == (FNameEntry *)0x0) {
LAB_10159f85:
      FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
LAB_10159f9d:
      *(FNameEntry **)pFVar4 = *(FNameEntry **)(*(FNameEntry **)pFVar4 + 8);
      thunk_FUN_101088c0();
      *(undefined4 *)(_Names + param_1 * 4) = 0;
      thunk_FUN_101492e0();
      local_8 = local_8 & 0xffffff00;
      FScopeCriticalSection::~FScopeCriticalSection(local_18);
      ExceptionList = local_10;
      return;
    }
    if (pFVar2 == pFVar1) {
      if (pFVar2 != (FNameEntry *)0x0) goto LAB_10159f9d;
      goto LAB_10159f85;
    }
    pFVar4 = pFVar2 + 8;
  } while( true );
}


// ==== 10159fec Catch@10159fec

void Catch_10159fec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1015a000 Catch@1015a000

void Catch_1015a000(void)

{
  appUnwindf((ushort *)&DAT_101d8894,L"FName::DeleteEntry");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015a070 FUN_1015a070

void FUN_1015a070(FArchive *param_1,int param_2)

{
  FString *this;
  ushort *puVar1;
  int iVar2;
  FString local_3c [12];
  FString local_30 [20];
  int local_1c;
  byte local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bc640;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  iVar2 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 4) < 0x40) {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb8;
    if (*(int *)(param_1 + 0x10) == 0) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffb8;
      appFailAssert("Ar.IsLoading()",".\\UnName.cpp",0x11c);
    }
    while( true ) {
      local_1c = iVar2;
      thunk_FUN_101307e0(param_1,&local_15);
      *(ushort *)(param_2 + 0xc + iVar2 * 2) = (ushort)local_15;
      if (local_15 == 0) break;
      iVar2 = iVar2 + 1;
    }
    *(undefined2 *)(param_2 + 0xc + iVar2 * 2) = 0;
  }
  else {
    ExceptionList = &local_10;
    FString::FString(local_30,(ushort *)(param_2 + 0xc));
    local_8._0_1_ = 1;
    operator<<(param_1,local_30);
    this = (FString *)FString::Left(local_30,(int)local_3c);
    local_8._0_1_ = 2;
    puVar1 = FString::operator*(this);
    appStrcpy((ushort *)(param_2 + 0xc),puVar1);
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_30);
  }
  thunk_FUN_10108c50(param_1,param_2 + 4);
  ExceptionList = local_10;
  return;
}


// ==== 1015a165 Catch@1015a165

void Catch_1015a165(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1015a179 Catch@1015a179

void Catch_1015a179(void)

{
  appUnwindf((ushort *)&DAT_101d88bc,L"FNameEntry<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015a1e0 FUN_1015a1e0

void FUN_1015a1e0(void)

{
  return;
}


// ==== 1015a220 Catch@1015a220

void Catch_1015a220(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015a234 Catch@1015a234

void Catch_1015a234(void)

{
  appUnwindf((ushort *)&DAT_101d919c,L"UObject::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015a270 FUN_1015a270

void FUN_1015a270(void)

{
  return;
}


// ==== 1015a2b0 Catch@1015a2b0

void Catch_1015a2b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015a2c4 Catch@1015a2c4

void Catch_1015a2c4(void)

{
  appUnwindf((ushort *)&DAT_101d91dc,L"UObject::ShutdownAfterError");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015a300 FUN_1015a300

void FUN_1015a300(undefined4 param_1,undefined4 param_2)

{
  (*(code *)**(undefined4 **)GMalloc)(param_1,param_2);
  return;
}


// ==== 1015a320 FUN_1015a320

void FUN_1015a320(void)

{
  undefined4 *in_ECX;
  
  in_ECX[8] = 1;
  in_ECX[9] = 1;
  in_ECX[10] = 1;
  *in_ECX = FArchive::vftable;
  in_ECX[1] = 0x7b;
  in_ECX[2] = 2000;
  in_ECX[3] = 0x1e;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0xffffffff;
  *in_ECX = FL2ArchiveTagReused::vftable;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  return;
}


// ==== 1015a3d0 FUN_1015a3d0

void FUN_1015a3d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  return;
}


// ==== 1015a4b0 FUN_1015a4b0

void FUN_1015a4b0(void)

{
  FOutputDevice *in_ECX;
  FOutputDevice *extraout_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc6f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  while (UObject::GObjBeginLoadCount != 0) {
    appSleep(0.0);
    in_ECX = extraout_ECX;
  }
  if (GNativeDuplicate != 0) {
    FOutputDevice::Logf(in_ECX,(ushort *)GError);
  }
  if (GCastDuplicate != 0) {
    FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015a54d Catch@1015a54d

void Catch_1015a54d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015a561 Catch@1015a561

void Catch_1015a561(void)

{
  appUnwindf((ushort *)&DAT_101d9ec4,L"UObject::StaticTick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015a5b0 FUN_1015a5b0

void FUN_1015a5b0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bc708;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = FArchive::vftable;
  in_ECX[1] = 0x7b;
  in_ECX[2] = 2000;
  in_ECX[3] = 0x1e;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 1;
  in_ECX[9] = 1;
  in_ECX[10] = 1;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0xffffffff;
  local_4 = 0;
  in_ECX[0xe] = 0;
  in_ECX[0x10] = param_2;
  in_ECX[0x12] = param_4;
  *in_ECX = FArchiveShowReferences::vftable;
  in_ECX[0xf] = param_1;
  in_ECX[0x11] = param_3;
  (**(code **)(*param_3 + 0x2c))();
  ExceptionList = in_ECX;
  return;
}


// ==== 1015a690 FUN_1015a690

void FUN_1015a690(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  return;
}


// ==== 1015a6e0 FUN_1015a6e0

void FUN_1015a6e0(undefined4 param_1,int *param_2)

{
  undefined4 *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bc748;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = FArchive::vftable;
  in_ECX[1] = 0x7b;
  in_ECX[2] = 2000;
  in_ECX[3] = 0x1e;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 1;
  in_ECX[9] = 1;
  in_ECX[10] = 1;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0xffffffff;
  local_4 = 0;
  in_ECX[0xe] = param_1;
  in_ECX[0xf] = 0;
  *in_ECX = FArchiveFindCulprit::vftable;
  (**(code **)(*param_2 + 0x2c))();
  ExceptionList = in_ECX;
  return;
}


// ==== 1015a7c0 FUN_1015a7c0

void FUN_1015a7c0(int *param_1)

{
  int in_ECX;
  
  if (*param_1 == *(int *)(in_ECX + 0x38)) {
    *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + 1;
  }
  return;
}


// ==== 1015a7e0 FUN_1015a7e0

void FUN_1015a7e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  return;
}


// ==== 1015a830 FUN_1015a830

void FUN_1015a830(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  return;
}


// ==== 1015a910 FUN_1015a910

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1015a910(uint param_1)

{
  FOutputDevice *this;
  FOutputDevice local_2020 [8200];
  undefined4 uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101bc7a0;
  local_10 = ExceptionList;
  uStack_18 = 0x1015a933;
  local_14 = &stack0xffffdfd4;
  ExceptionList = &local_10;
  appGetVarArgs((ushort *)local_2020,0x1000,(ushort **)&stack0x0000000c);
  local_8 = 0;
  if (((param_1 & 0x2000) == 0) && (GLog != (undefined *)0x0)) {
    FOutputDevice::Logf2(this,(EName)GLog,(ushort *)0x2ff);
  }
  if ((param_1 & 8) != 0) {
    appThrowf((ushort *)&DAT_101da6a0);
  }
  if ((param_1 & 1) != 0) {
    FOutputDevice::Logf(local_2020,(ushort *)GError);
  }
  if ((param_1 & 2) == 0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn,(ushort *)GWarn);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015a9ef Catch@1015a9ef

void Catch_1015a9ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015aa03 Catch@1015aa03

void Catch_1015aa03(void)

{
  appUnwindf((ushort *)&DAT_101da6b8,L"UObject::SafeLoadError");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015aa70 FUN_1015aa70

undefined4 FUN_1015aa70(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 0;
  }
  return 1;
}


// ==== 1015aab0 FUN_1015aab0

undefined1 FUN_1015aab0(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_28 [4];
  int iStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  
  puStack_14 = GError;
  uStack_18 = 0;
  uStack_1c = param_1;
  piVar3 = (int *)(**(code **)(*(int *)GFileManager + 8))();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar4 = *piVar3;
  iStack_24 = 0x1015aae4;
  iStack_24 = (**(code **)(iVar4 + 0x2c))();
  iStack_24 = iStack_24 + -0xc;
  acStack_28[0] = -0x11;
  acStack_28[1] = -0x56;
  acStack_28[2] = '\x15';
  acStack_28[3] = '\x10';
  (**(code **)(iVar4 + 0x3c))();
  acStack_28[0] = '\f';
  acStack_28[1] = '\0';
  acStack_28[2] = '\0';
  acStack_28[3] = '\0';
  (**(code **)(*piVar3 + 4))(&uStack_1c);
  (**(code **)*piVar3)(1);
  iVar4 = 0xc;
  pcVar5 = acStack_28;
  pcVar6 = "SafePackage";
  do {
    if (iVar4 == 0) {
      return 1;
    }
    iVar4 = iVar4 + -1;
    cVar2 = *pcVar6;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 == cVar2);
  return 0;
}


// ==== 1015ab50 FUN_1015ab50

void FUN_1015ab50(ULinkerLoad *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc7b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ULinkerLoad::Verify(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1015ab98 Catch@1015ab98

void Catch_1015ab98(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015abac Catch@1015abac

void Catch_1015abac(void)

{
  appUnwindf((ushort *)&DAT_101dae2c,L"UObject::VerifyLinker");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015abf0 FUN_1015abf0

void FUN_1015abf0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc7c0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (UObject::GSWObjBeginLoadCount < 1) {
    ExceptionList = &local_10;
    appFailAssert("GSWObjBeginLoadCount>0",".\\UnObj.cpp",0xcaa);
  }
  UObject::GSWObjBeginLoadCount = UObject::GSWObjBeginLoadCount + -1;
  ExceptionList = local_10;
  return;
}


// ==== 1015ac57 Catch@1015ac57

void Catch_1015ac57(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015ac6b Catch@1015ac6b

void Catch_1015ac6b(void)

{
  appUnwindf((ushort *)&DAT_101daf74,L"UObject::SWEndLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015acb0 FUN_1015acb0

void FUN_1015acb0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  in_ECX[1] = 0x7b;
  in_ECX[2] = 2000;
  in_ECX[3] = 0x1e;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 1;
  in_ECX[9] = 1;
  in_ECX[10] = 1;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0xffffffff;
  *in_ECX = FArchiveSaveTagExports::vftable;
  in_ECX[0xe] = param_1;
  in_ECX[7] = 1;
  in_ECX[5] = 1;
  return;
}


// ==== 1015ad70 FUN_1015ad70

void FUN_1015ad70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  return;
}


// ==== 1015aeb0 FUN_1015aeb0

void FUN_1015aeb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  in_ECX[1] = 0x7b;
  in_ECX[2] = 2000;
  in_ECX[3] = 0x1e;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 1;
  in_ECX[9] = 1;
  in_ECX[10] = 1;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0xffffffff;
  in_ECX[0xe] = param_2;
  *in_ECX = FArchiveSaveTagImports::vftable;
  in_ECX[0xf] = param_1;
  in_ECX[7] = 1;
  in_ECX[5] = 1;
  return;
}


// ==== 1015af70 FUN_1015af70

void FUN_1015af70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  return;
}


// ==== 1015afc0 FUN_1015afc0

int FUN_1015afc0(void)

{
  return UObject::GObjInitialized;
}


// ==== 1015afd0 FUN_1015afd0

UPackage * FUN_1015afd0(void)

{
  return UObject::GObjTransientPkg;
}


// ==== 1015afe0 FUN_1015afe0

void FUN_1015afe0(void)

{
  UObject **in_ECX;
  
  in_ECX[2] = (UObject *)(&UObject::GObjHash)[(uint)in_ECX[8] & 0xfff];
  (&UObject::GObjHash)[(uint)in_ECX[8] & 0xfff] = in_ECX;
  return;
}


// ==== 1015b039 Catch@1015b039

void Catch_1015b039(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015b04d Catch@1015b04d

void Catch_1015b04d(void)

{
  appUnwindf((ushort *)&DAT_101db3b0,L"UObject::HashObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b090 FUN_1015b090

void FUN_1015b090(void)

{
  UObject *pUVar1;
  void *pvVar2;
  UObject *pUVar3;
  UObject *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  puStack_c = &LAB_101bc860;
  local_10 = ExceptionList;
  local_8 = 0;
  pUVar3 = (UObject *)(&UObject::GObjHash + ((uint)*(UObject **)(in_ECX + 0x20) & 0xfff));
  iVar4 = 0;
  ExceptionList = &local_10;
  while (pUVar1 = *(UObject **)pUVar3, pUVar1 != (UObject *)0x0) {
    if (pUVar1 == in_ECX) {
      *(UObject **)pUVar3 = *(UObject **)(pUVar1 + 8);
      iVar4 = iVar4 + 1;
    }
    else {
      pUVar3 = pUVar1 + 8;
    }
  }
  if (iVar4 == 0) {
    appFailAssert("Removed!=0",".\\UnObj.cpp",0xf38);
  }
  else if (iVar4 == 1) {
    ExceptionList = pvVar2;
    return;
  }
  appFailAssert("Removed==1",".\\UnObj.cpp",0xf39);
  ExceptionList = local_10;
  return;
}


// ==== 1015b141 Catch@1015b141

void Catch_1015b141(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1015b155 Catch@1015b155

void Catch_1015b155(void)

{
  appUnwindf((ushort *)&DAT_101db3e8,L"UObject::UnhashObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b1b0 FUN_1015b1b0

void FUN_1015b1b0(void)

{
  UObject **in_ECX;
  
  in_ECX[2] = (UObject *)(&UObject::GObjHashBuffer)[(uint)in_ECX[8] & 0xfff];
  (&UObject::GObjHashBuffer)[(uint)in_ECX[8] & 0xfff] = in_ECX;
  return;
}


// ==== 1015b209 Catch@1015b209

void Catch_1015b209(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015b21d Catch@1015b21d

void Catch_1015b21d(void)

{
  appUnwindf((ushort *)&DAT_101db3f0,L"UObject::HashObjectBuffer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b260 FUN_1015b260

void FUN_1015b260(void)

{
  UObject *pUVar1;
  void *pvVar2;
  UObject **ppUVar3;
  UObject *pUVar4;
  UObject *in_ECX;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  puStack_c = &LAB_101bc880;
  local_10 = ExceptionList;
  local_8 = 0;
  pUVar4 = *(UObject **)(in_ECX + 0x20);
  ppUVar3 = (UObject **)(&UObject::GObjHash + ((uint)pUVar4 & 0xfff));
  iVar6 = 0;
  ExceptionList = &local_10;
  while (pUVar1 = *ppUVar3, pUVar1 != (UObject *)0x0) {
    if (pUVar1 == in_ECX) {
      *ppUVar3 = *(UObject **)(pUVar1 + 8);
      iVar6 = iVar6 + 1;
    }
    else {
      ppUVar3 = (UObject **)(pUVar1 + 8);
    }
  }
  pUVar4 = (UObject *)(&UObject::GObjHashBuffer + ((uint)pUVar4 & 0xfff));
  iVar5 = 0;
  while (pUVar1 = *(UObject **)pUVar4, pUVar1 != (UObject *)0x0) {
    if (pUVar1 == in_ECX) {
      *(UObject **)pUVar4 = *(UObject **)(pUVar1 + 0x2c);
      iVar5 = iVar5 + 1;
    }
    else {
      pUVar4 = pUVar1 + 0x2c;
    }
  }
  if (iVar6 == 0) {
    if (iVar5 == 0) {
      appFailAssert("Removed1!=0 || Removed2!=0",".\\UnObj.cpp",0xf70);
      goto LAB_1015b319;
    }
  }
  else if (iVar6 == 1) {
    ExceptionList = pvVar2;
    return;
  }
  if (iVar5 == 1) {
    ExceptionList = pvVar2;
    return;
  }
LAB_1015b319:
  appFailAssert("Removed1==1 || Removed2==1",".\\UnObj.cpp",0xf71);
  ExceptionList = local_10;
  return;
}


// ==== 1015b34a Catch@1015b34a

void Catch_1015b34a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1015b35e Catch@1015b35e

void Catch_1015b35e(void)

{
  appUnwindf((ushort *)&DAT_101db448,L"UObject::UnhashObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b3c0 FUN_1015b3c0

void FUN_1015b3c0(void)

{
  int iVar1;
  UObject ***pppUVar2;
  
  pppUVar2 = &UObject::GObjHashBuffer;
  for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pppUVar2 = (UObject **)0x0;
    pppUVar2 = pppUVar2 + 1;
  }
  return;
}


// ==== 1015b3e0 FUN_1015b3e0

void FUN_1015b3e0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 1015b400 FUN_1015b400

void FUN_1015b400(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  return;
}


// ==== 1015b450 FUN_1015b450

void FUN_1015b450(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc8b0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*in_ECX != 0) {
    ExceptionList = &local_10;
    thunk_FUN_10108900(*in_ECX);
    *in_ECX = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015b4a7 Catch@1015b4a7

void Catch_1015b4a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015b4bb Catch@1015b4bb

void Catch_1015b4bb(void)

{
  appUnwindf((ushort *)&DAT_101dbd38,L"L2ParamStack::~L2ParamStack");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b500 FUN_1015b500

int FUN_1015b500(undefined4 param_1)

{
  int *in_ECX;
  
  if (in_ECX[2] < in_ECX[3]) {
    *(undefined4 *)(*in_ECX + in_ECX[2] * 4) = param_1;
    in_ECX[2] = in_ECX[2] + 1;
    return in_ECX[2];
  }
  return -1;
}


// ==== 1015b568 Catch@1015b568

void Catch_1015b568(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015b57c Catch@1015b57c

void Catch_1015b57c(void)

{
  appUnwindf((ushort *)&DAT_101dbd40,L"L2ParamStack::PushBack");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b5c0 FUN_1015b5c0

undefined4 FUN_1015b5c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  iVar1 = in_ECX[1];
  if (iVar1 < in_ECX[2]) {
    uVar2 = *(undefined4 *)(*in_ECX + iVar1 * 4);
    in_ECX[1] = iVar1 + 1;
    return uVar2;
  }
  return 0;
}


// ==== 1015b61f Catch@1015b61f

void Catch_1015b61f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015b633 Catch@1015b633

void Catch_1015b633(void)

{
  appUnwindf((ushort *)&DAT_101dbd48,L"L2ParamStack::Top");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b680 FUN_1015b680

void FUN_1015b680(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}


// ==== 1015b6c4 Catch@1015b6c4

void Catch_1015b6c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015b6d8 Catch@1015b6d8

void Catch_1015b6d8(void)

{
  appUnwindf((ushort *)&DAT_101dbd50,L"L2ParamStack::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b720 FUN_1015b720

void FUN_1015b720(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}


// ==== 1015b767 Catch@1015b767

void Catch_1015b767(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015b77b Catch@1015b77b

void Catch_1015b77b(void)

{
  appUnwindf((ushort *)&DAT_101dbd58,L"L2ParamStack::Restart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b7c0 FUN_1015b7c0

int FUN_1015b7c0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4);
}


// ==== 1015b7ff Catch@1015b7ff

void Catch_1015b7ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015b813 Catch@1015b813

void Catch_1015b813(void)

{
  appUnwindf((ushort *)&DAT_101dbd60,L"L2ParamStack::GetBufferSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b850 FUN_1015b850

void FUN_1015b850(undefined4 *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *_Dst;
  L2ParamStack *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bc910;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)in_ECX != 0) {
    ExceptionList = &local_10;
    thunk_FUN_10108900(*(int *)in_ECX);
    *(undefined4 *)in_ECX = 0;
    L2ParamStack::Clear(in_ECX);
  }
  uVar1 = param_1[3];
  lVar2 = (ulonglong)uVar1 * 4;
  _Dst = (void *)thunk_FUN_1014fad0(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  *(void **)in_ECX = _Dst;
  _memcpy(_Dst,(void *)*param_1,uVar1 * 4);
  *(undefined4 *)(in_ECX + 4) = param_1[1];
  *(undefined4 *)(in_ECX + 8) = param_1[2];
  ExceptionList = local_10;
  return;
}


// ==== 1015b8eb Catch@1015b8eb

void Catch_1015b8eb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015b8ff Catch@1015b8ff

void Catch_1015b8ff(void)

{
  appUnwindf((ushort *)&DAT_101dbd68,L"L2ParamStack::operator =");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b950 FUN_1015b950

void FUN_1015b950(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  return;
}


// ==== 1015b998 Catch@1015b998

void Catch_1015b998(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015b9ac Catch@1015b9ac

void Catch_1015b9ac(void)

{
  appUnwindf((ushort *)&DAT_101dbd70,L"UParamStack::SetParamStack");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015b9f0 FUN_1015b9f0

ushort ** FUN_1015b9f0(void)

{
  return &UObject::GLanguage;
}


// ==== 1015ba2e Catch@1015ba2e

void Catch_1015ba2e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015ba42 Catch@1015ba42

void Catch_1015ba42(void)

{
  appUnwindf((ushort *)&DAT_101dbdb8,L"UObject::GetLanguage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015ba80 FUN_1015ba80

void FUN_1015ba80(ULinkerLoad *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ULinkerLoad::Create(param_1,param_2,param_3,param_4,param_5);
  return;
}


// ==== 1015bab0 FUN_1015bab0

int FUN_1015bab0(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[1] <= param_1) {
    appFailAssert("c<ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x198);
  }
  return *in_ECX + -4 + (in_ECX[1] - param_1) * 4;
}


// ==== 1015bb40 FUN_1015bb40

void FUN_1015bb40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1015bba0 FUN_1015bba0

void FUN_1015bba0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1015bc10 FUN_1015bc10

int FUN_1015bc10(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[1] <= param_1) {
    appFailAssert("c<ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x198);
  }
  return *in_ECX + -4 + (in_ECX[1] - param_1) * 4;
}


// ==== 1015bc70 FUN_1015bc70

int FUN_1015bc70(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[1] <= param_1) {
    appFailAssert("c<ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x198);
  }
  return *in_ECX + -8 + (in_ECX[1] - param_1) * 8;
}


// ==== 1015bcc0 FUN_1015bcc0

int FUN_1015bcc0(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[1] <= param_1) {
    appFailAssert("c<ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x198);
  }
  return *in_ECX + ((in_ECX[1] - param_1) + -1) * 0x24;
}


// ==== 1015bd10 FUN_1015bd10

void FUN_1015bd10(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1015bd70 FUN_1015bd70

void FUN_1015bd70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1015bde0 FUN_1015bde0

void FUN_1015bde0(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(int *)(in_ECX + 4) * 4,*(int *)(in_ECX + 8) * 4);
  return;
}


// ==== 1015be30 FUN_1015be30

void FUN_1015be30(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1015bea0 FUN_1015bea0

void FUN_1015bea0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1015bf50 FUN_1015bf50

void FUN_1015bf50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1015c0a0 FUN_1015c0a0

int FUN_1015c0a0(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UMapProperty::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 1015c160 FUN_1015c160

void FUN_1015c160(ushort *param_1,ushort *param_2,UObject **param_3,UObject *param_4)

{
  ParseObject(param_1,param_2,&UClass::PrivateStaticClass,param_3,param_4);
  return;
}


// ==== 1015c190 FUN_1015c190

void FUN_1015c190(ushort *param_1,ushort *param_2,UObject **param_3,UObject *param_4)

{
  ParseObject(param_1,param_2,&UPackage::PrivateStaticClass,param_3,param_4);
  return;
}


// ==== 1015c1c0 FUN_1015c1c0

int FUN_1015c1c0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,0xc);
  }
  return *(int *)param_2 + iVar2 * 0xc;
}


// ==== 1015c210 FUN_1015c210

void FUN_1015c210(UObject *param_1,ushort *param_2,int param_3)

{
  UObject::StaticFindObject(&UObject::PrivateStaticClass,param_1,param_2,param_3);
  return;
}


// ==== 1015c260 FUN_1015c260

int FUN_1015c260(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,0x3c);
  }
  return *(int *)param_2 + iVar2 * 0x3c;
}


// ==== 1015c2b0 FUN_1015c2b0

int FUN_1015c2b0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,0x2c);
  }
  return iVar2 * 0x2c + *(int *)param_2;
}


// ==== 1015c420 FUN_1015c420

void FUN_1015c420(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = UObject::vftable;
  UObject::GObjNewCount = UObject::GObjNewCount + 1;
  UObject::GObjCurCount = UObject::GObjCurCount + 1;
  if (UObject::GObjPeakCount < UObject::GObjCurCount) {
    UObject::GObjPeakCount = UObject::GObjCurCount;
  }
  return;
}


// ==== 1015c460 FUN_1015c460

void FUN_1015c460(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  UObject *in_ECX;
  
  *(undefined ***)in_ECX = UObject::vftable;
  *(undefined4 *)(in_ECX + 4) = 0xffffffff;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(uint *)(in_ECX + 0x1c) = param_4 | 0x4000000;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  UObject::GObjCurCount = UObject::GObjCurCount + 1;
  UObject::GObjNewCount = UObject::GObjNewCount + 1;
  if (UObject::GObjPeakCount < UObject::GObjCurCount) {
    UObject::GObjPeakCount = UObject::GObjCurCount;
  }
  *(undefined4 *)(in_ECX + 0x28) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = param_2;
  *(undefined4 *)(in_ECX + 0x18) = param_3;
  if (UObject::GObjInitialized == 0) {
    *(UObject **)(in_ECX + 0x14) = UObject::GAutoRegister;
    UObject::GAutoRegister = in_ECX;
  }
  return;
}


// ==== 1015c514 Catch@1015c514

void Catch_1015c514(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015c528 Catch@1015c528

void Catch_1015c528(void)

{
  appUnwindf((ushort *)&DAT_101d9130,L"UObject::UObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015c580 FUN_1015c580

int FUN_1015c580(uint param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0xc) != 0) &&
      (iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + 0x1c), iVar1 != 0)) && (param_2 == 0)) {
    for (iVar1 = *(int *)(iVar1 + 0xa4 + (param_1 & 0xff) * 4); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x3c)) {
      if (*(uint *)(iVar1 + 0x20) == param_1) {
        return iVar1;
      }
    }
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + 0xa4 + (param_1 & 0xff) * 4);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(uint *)(iVar1 + 0x20) == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x3c);
  }
  return iVar1;
}


// ==== 1015c600 FUN_1015c600

UField * FUN_1015c600(undefined4 param_1,undefined4 param_2)

{
  UField *pUVar1;
  UObject *in_ECX;
  
  pUVar1 = UObject::FindObjectField(in_ECX,param_1,param_2);
  if ((pUVar1 == (UField *)0x0) || ((*(uint *)(*(int *)(pUVar1 + 0x24) + 0x4a4) & 0x80000) == 0)) {
    pUVar1 = (UField *)0x0;
  }
  return pUVar1;
}


// ==== 1015c630 FUN_1015c630

int FUN_1015c630(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + 0xa4 + (param_1 & 0xff) * 4);
  if (iVar1 != 0) {
    while (*(uint *)(iVar1 + 0x20) != param_1) {
      iVar1 = *(int *)(iVar1 + 0x3c);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((*(uint *)(*(int *)(iVar1 + 0x24) + 0x4a4) & 0x40000) != 0) {
      return iVar1;
    }
  }
  return 0;
}


// ==== 1015c690 FUN_1015c690

void FUN_1015c690(int *param_1,ushort *param_2,undefined4 param_3)

{
  int iVar1;
  ushort *puVar2;
  ushort *in_ECX;
  ushort *in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bca30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_101329a0(param_1);
  if (iVar1 == 0) {
    if ((param_1[0x12] & 0x8000U) != 0) {
      puVar2 = Localize(in_EDX,in_ECX,param_2,(ushort *)0x0,1);
      if (*puVar2 != 0) {
        (**(code **)(*param_1 + 0x9c))(puVar2,param_3,0);
      }
      ExceptionList = local_10;
      return;
    }
  }
  else {
    FUN_1015f460(*(undefined4 *)(iVar1 + 0x78),param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015c73f Catch@1015c73f

void Catch_1015c73f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015c753 Catch@1015c753

void Catch_1015c753(void)

{
  appUnwindf((ushort *)&DAT_101d980c,L"LoadLocalizedProp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015c7b0 FUN_1015c7b0

void FUN_1015c7b0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bca48;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1015c820 FUN_1015c820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1015c820(int param_1)

{
  if ((-1 < param_1) && (param_1 < DAT_1033088c)) {
    return *(undefined4 *)(_GObjObjects + param_1 * 4);
  }
  return 0;
}


// ==== 1015c850 FUN_1015c850

void FUN_1015c850(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bca60;
  local_10 = ExceptionList;
  if ((in_ECX[7] & 0x10000000U) == 0) {
    ExceptionList = &local_10;
    in_ECX[7] = in_ECX[7] | 0x10000000;
    local_8 = 0;
    (**(code **)(*in_ECX + 0x40))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015c8a7 Catch@1015c8a7

undefined4 Catch_1015c8a7(void)

{
  FOutputDevice *in_ECX;
  int unaff_EBP;
  
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(in_ECX,(EName)GLog,(ushort *)0x2fb);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x1015c896;
}


// ==== 1015c8f0 FUN_1015c8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015c8f0(void)

{
  int iVar1;
  FOutputDevice *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bca70;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((UObject::GObjInitialized != 0) && (DAT_10336d7c == 0)) {
    DAT_10336d7c = 1;
    ExceptionList = &local_10;
    if (GLog != (undefined *)0x0) {
      ExceptionList = &local_10;
      FOutputDevice::Logf2(in_ECX,(EName)GLog,(ushort *)0x2fb);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar1 = _GObjObjects;
    for (iVar2 = 0; iVar2 < DAT_1033088c; iVar2 = iVar2 + 1) {
      if (*(int *)(iVar1 + iVar2 * 4) != 0) {
        UObject::ConditionalShutdownAfterError(*(UObject **)(iVar1 + iVar2 * 4));
        iVar1 = _GObjObjects;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015c9a1 Catch@1015c9a1

undefined4 Catch_1015c9a1(void)

{
  FOutputDevice *in_ECX;
  int unaff_EBP;
  
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(in_ECX,(EName)GLog,(ushort *)0x2fb);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return 0x1015c989;
}


// ==== 1015c9ca Catch@1015c9ca

void Catch_1015c9ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1015c9de Catch@1015c9de

void Catch_1015c9de(void)

{
  appUnwindf((ushort *)&DAT_101d9fec,L"UObject::StaticShutdownAfterError");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015ca40 FUN_1015ca40

byte FUN_1015ca40(void)

{
  int in_ECX;
  
  if (((byte)GL2ThreadFilter & 4) == 0) {
    return 1;
  }
  return ~*(byte *)(in_ECX + 0x1f) & 1;
}


// ==== 1015ca60 FUN_1015ca60

void FUN_1015ca60(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bca88;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1015cad0 FUN_1015cad0

void FUN_1015cad0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bcaa8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1015cb60 FUN_1015cb60

void FUN_1015cb60(int *param_1)

{
  uint *puVar1;
  UObject *this;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  puStack_c = &LAB_101bcac0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  this = (UObject *)*param_1;
  if (this != (UObject *)0x0) {
    ExceptionList = &local_10;
    iVar3 = UObject::IsIn(this,(UObject *)in_ECX[0xe]);
    if ((iVar3 != 0) && ((*(uint *)(this + 0x1c) & 0x4010) == 0)) {
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 0x10;
      if ((*(uint *)(*piVar2 + 0x1c) & 0x400000) == 0) {
        puVar1 = (uint *)(*piVar2 + 0x1c);
        *puVar1 = *puVar1 | 0x40000;
      }
      if ((*(uint *)(*piVar2 + 0x1c) & 0x100000) == 0) {
        puVar1 = (uint *)(*piVar2 + 0x1c);
        *puVar1 = *puVar1 | 0x10000;
      }
      if ((*(uint *)(*piVar2 + 0x1c) & 0x200000) == 0) {
        puVar1 = (uint *)(*piVar2 + 0x1c);
        *puVar1 = *puVar1 | 0x20000;
      }
      param_1 = *(int **)(*piVar2 + 0x24);
      local_18 = *(undefined4 *)(*piVar2 + 0x18);
      piVar4 = (int *)(**(code **)(*in_ECX + 0x18))(&param_1);
      (**(code **)(*piVar4 + 0x18))(&local_18);
      (**(code **)(*(int *)*piVar2 + 0x2c))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015cc30 Catch@1015cc30

void Catch_1015cc30(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1015cc44 Catch@1015cc44

void Catch_1015cc44(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FArchiveSaveTagExports<<Obj");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015cca0 FUN_1015cca0

void FUN_1015cca0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bcad8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1015cd10 FUN_1015cd10

void FUN_1015cd10(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  puStack_c = &LAB_101bcaf0;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((int *)*param_1 != (int *)0x0) {
    ExceptionList = &local_10;
    iVar5 = (**(code **)(*(int *)*param_1 + 0x30))();
    if (iVar5 == 0) {
      uVar3 = *(uint *)(*piVar4 + 0x1c);
      if (((uVar3 & 0x4000) == 0) || ((uVar3 & 4) != 0)) {
        piVar2 = (int *)(*(int *)(in_ECX[0xf] + 0xfc) + *(int *)(*piVar4 + 4) * 4);
        *piVar2 = *piVar2 + 1;
        if ((*(byte *)(*piVar4 + 0x1c) & 0x10) == 0) {
          puVar1 = (uint *)(*piVar4 + 0x1c);
          *puVar1 = *puVar1 | 8;
          if ((*(uint *)(*piVar4 + 0x1c) & 0x400000) == 0) {
            puVar1 = (uint *)(*piVar4 + 0x1c);
            *puVar1 = *puVar1 | 0x40000;
          }
          if ((*(uint *)(*piVar4 + 0x1c) & 0x100000) == 0) {
            puVar1 = (uint *)(*piVar4 + 0x1c);
            *puVar1 = *puVar1 | 0x10000;
          }
          if ((*(uint *)(*piVar4 + 0x1c) & 0x200000) == 0) {
            puVar1 = (uint *)(*piVar4 + 0x1c);
            *puVar1 = *puVar1 | 0x20000;
          }
          param_1 = *(int **)(*piVar4 + 0x18);
          if (param_1 != (int *)0x0) {
            (**(code **)(*in_ECX + 0x18))(&param_1);
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015cde6 Catch@1015cde6

void Catch_1015cde6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015cdfa Catch@1015cdfa

void Catch_1015cdfa(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FArchiveSaveTagImports<<Obj");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015ce60 FUN_1015ce60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015ce60(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int in_ECX;
  
  puVar1 = (uint *)(*(int *)(_Names + *param_1 * 4) + 4);
  *puVar1 = *puVar1 | *(uint *)(in_ECX + 0x38) | 0x10;
  piVar2 = (int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x108) + *param_1 * 4);
  *piVar2 = *piVar2 + 1;
  return;
}


// ==== 1015cec5 Catch@1015cec5

void Catch_1015cec5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015ced9 Catch@1015ced9

void Catch_1015ced9(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FArchiveSaveTagImports<<Name");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015cf20 FUN_1015cf20

void FUN_1015cf20(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bcb18;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1015cf90 FUN_1015cf90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1015cf90(int param_1)

{
  return *(undefined4 *)(_GObjLoaders + param_1 * 4);
}


// ==== 1015cfb0 FUN_1015cfb0

int FUN_1015cfb0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  FOutputDevice *this;
  uint uVar3;
  byte local_19;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcb30;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffc8;
    thunk_FUN_10130820(param_1,param_2);
    ExceptionList = local_10;
    return param_1;
  }
  uVar1 = *param_2;
  uVar3 = uVar1;
  if ((int)uVar1 < 0) {
    uVar3 = -uVar1;
  }
  uVar2 = uVar3;
  if (0x3f < uVar3) {
    uVar2 = (uVar3 & 0x3f) + 0x40;
  }
  local_18 = ((-1 < (int)uVar1) - 1U & 0x80) + (char)uVar2;
  ExceptionList = &local_10;
  *param_2 = 0;
  thunk_FUN_101307e0(param_1,&local_18);
  if ((local_18 & 0x40) != 0) {
    local_17 = (byte)(uVar3 >> 6);
    if (0x7f < uVar3 >> 6) {
      local_17 = (local_17 & 0x7f) + 0x80;
    }
    thunk_FUN_101307e0(param_1,&local_17);
    if ((char)local_17 < '\0') {
      local_16 = (byte)(uVar3 >> 0xd);
      if (0x7f < uVar3 >> 0xd) {
        local_16 = (local_16 & 0x7f) + 0x80;
      }
      thunk_FUN_101307e0(param_1,&local_16);
      if ((char)local_16 < '\0') {
        local_15 = (byte)(uVar3 >> 0x14);
        if (0x7f < uVar3 >> 0x14) {
          local_15 = (local_15 & 0x7f) + 0x80;
        }
        thunk_FUN_101307e0(param_1,&local_15);
        if ((char)local_15 < '\0') {
          local_19 = (byte)(uVar3 >> 0x1b);
          thunk_FUN_101307e0(param_1,&local_19);
          *param_2 = (uint)local_19;
        }
        *param_2 = (local_15 & 0x7f) + *param_2 * 0x80;
      }
      *param_2 = (local_16 & 0x7f) + *param_2 * 0x80;
    }
    *param_2 = (local_17 & 0x7f) + *param_2 * 0x80;
  }
  this = (FOutputDevice *)((local_18 & 0x3f) + *param_2 * 0x40);
  *param_2 = (uint)this;
  if ((char)local_18 < '\0') {
    this = (FOutputDevice *)-(int)this;
    *param_2 = (uint)this;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*param_2 != uVar1) {
      FOutputDevice::Logf(this,(ushort *)GError);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1015d18d Catch@1015d18d

void Catch_1015d18d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 1015d1a1 Catch@1015d1a1

void Catch_1015d1a1(void)

{
  appUnwindf((ushort *)&DAT_101dbb68,L"FCompactIndex<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015d240 FUN_1015d240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_1015d240(ushort *param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  FOutputDevice *this;
  FOutputDevice *this_00;
  void *pvVar3;
  wchar_t *pwVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcb40;
  local_10 = ExceptionList;
  pvVar3 = (void *)0x0;
  local_8 = 0;
  if (*(void **)(in_ECX + 0x34) == (void *)0x0) {
    if (param_2 != 0) {
      pwVar4 = L"nobind";
      ExceptionList = &local_10;
      puVar1 = appCmdLine();
      iVar2 = ParseParam(puVar1,(ushort *)pwVar4);
      if (iVar2 == 0) {
        LocalizeError((ushort *)L"NotDll",(ushort *)L"Core",(ushort *)0x0);
        FOutputDevice::Logf(this,(ushort *)GError);
      }
    }
  }
  else {
    ExceptionList = &local_10;
    pvVar3 = appGetDllExport(*(void **)(in_ECX + 0x34),param_1);
    if (pvVar3 == (void *)0x0) {
      if (param_2 != 0) {
        pwVar4 = L"nobind";
        puVar1 = appCmdLine();
        iVar2 = ParseParam(puVar1,(ushort *)pwVar4);
        if (iVar2 == 0) {
          LocalizeError((ushort *)L"NotInDll",(ushort *)L"Core",(ushort *)0x0);
          FOutputDevice::Logf(this_00,(ushort *)GError);
        }
      }
    }
    else {
      FOutputDevice::Logf((FOutputDevice *)GNull,(EName)GNull,(ushort *)0x310);
    }
  }
  ExceptionList = local_10;
  return pvVar3;
}


// ==== 1015d374 Catch@1015d374

void Catch_1015d374(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1015d388 Catch@1015d388

void Catch_1015d388(void)

{
  appUnwindf((ushort *)&DAT_101dbcb8,L"UPackage::GetDllExport");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015d400 FUN_1015d400

void FUN_1015d400(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  L2ParamStack *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcb50;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)in_ECX = 0;
  lVar1 = (ulonglong)(param_1 + 1U) * 4;
  uVar2 = thunk_FUN_1014fad0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  *(undefined4 *)in_ECX = uVar2;
  *(uint *)(in_ECX + 0xc) = param_1 + 1U;
  L2ParamStack::Clear(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1015d479 Catch@1015d479

void Catch_1015d479(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015d48d Catch@1015d48d

void Catch_1015d48d(void)

{
  appUnwindf((ushort *)&DAT_101dbd30,L"L2ParamStack::L2ParamStack");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015d4e0 FUN_1015d4e0

void FUN_1015d4e0(int param_1,FString *param_2)

{
  ushort *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcb60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (*(L2ParamStack **)(in_ECX + 0x34) != (L2ParamStack *)0x0) {
    puVar1 = L2ParamStack::Top(*(L2ParamStack **)(in_ECX + 0x34));
    FString::operator=(param_2,puVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015d55a Catch@1015d55a

void Catch_1015d55a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015d56e Catch@1015d56e

void Catch_1015d56e(void)

{
  appUnwindf((ushort *)&DAT_101dbd78,L"UParamStack::execGetString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015d5c0 FUN_1015d5c0

void FUN_1015d5c0(int param_1,undefined4 *param_2)

{
  void *pvVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcb70;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (*(L2ParamStack **)(in_ECX + 0x34) != (L2ParamStack *)0x0) {
    pvVar1 = L2ParamStack::Top(*(L2ParamStack **)(in_ECX + 0x34));
    *param_2 = pvVar1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015d636 Catch@1015d636

void Catch_1015d636(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015d64a Catch@1015d64a

void Catch_1015d64a(void)

{
  appUnwindf((ushort *)&DAT_101dbd80,L"UParamStack::execGetInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015d690 FUN_1015d690

void FUN_1015d690(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcb80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (*(L2ParamStack **)(in_ECX + 0x34) != (L2ParamStack *)0x0) {
    puVar1 = L2ParamStack::Top(*(L2ParamStack **)(in_ECX + 0x34));
    *param_2 = *puVar1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015d70a Catch@1015d70a

void Catch_1015d70a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015d71e Catch@1015d71e

void Catch_1015d71e(void)

{
  appUnwindf((ushort *)&DAT_101dbd88,L"UParamStack::execGetFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015d770 FUN_1015d770

void FUN_1015d770(int param_1)

{
  byte bVar1;
  int in_ECX;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcb90;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (*(L2ParamStack **)(in_ECX + 0x34) != (L2ParamStack *)0x0) {
    L2ParamStack::PushBack(*(L2ParamStack **)(in_ECX + 0x34),local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015d809 Catch@1015d809

void Catch_1015d809(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1015d81d Catch@1015d81d

void Catch_1015d81d(void)

{
  appUnwindf((ushort *)&DAT_101dbd90,L"UParamStack::execPushInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015d870 FUN_1015d870

undefined4 FUN_1015d870(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (in_ECX[1] < 1) {
    appFailAssert("ArrayNum>0",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x18e);
  }
  uVar1 = *(undefined4 *)(*in_ECX + -4 + in_ECX[1] * 4);
  thunk_FUN_10113dd0(in_ECX[1] + -1,1);
  return uVar1;
}


// ==== 1015d8c0 FUN_1015d8c0

int FUN_1015d8c0(int *param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < (int)in_ECX[1]) {
    piVar2 = (int *)*in_ECX;
    do {
      if (*piVar2 == *param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < (int)in_ECX[1]);
  }
  return -1;
}


// ==== 1015d900 FUN_1015d900

void FUN_1015d900(uint *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  for (iVar3 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4); iVar3 != -1;
      iVar3 = *(int *)(iVar3 + *in_ECX)) {
    iVar3 = iVar3 * 0xc;
    if (*(uint *)(iVar3 + 4 + *in_ECX) == *param_1) {
      iVar4 = *(int *)(param_2 + 4);
      iVar1 = iVar4 + 1;
      *(int *)(param_2 + 4) = iVar1;
      if (*(int *)(param_2 + 8) < iVar1) {
        *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
        FArray::Realloc(param_2,4);
      }
      puVar2 = (undefined4 *)(*(int *)param_2 + iVar4 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *(undefined4 *)(iVar3 + 8 + *in_ECX);
      }
    }
  }
  return;
}


// ==== 1015d9b0 FUN_1015d9b0

int FUN_1015d9b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 4);
  }
  iVar3 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar2) * 4);
  if (iVar3 != -1) {
    do {
      piVar4 = (int *)(iVar3 * 0x10 + *in_ECX);
      if (piVar4[1] == iVar1) {
        return iVar3 * 0x10 + 8 + *in_ECX;
      }
      iVar3 = *piVar4;
    } while (iVar3 != -1);
  }
  return 0;
}


// ==== 1015da10 FUN_1015da10

int FUN_1015da10(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,0x10);
  }
  puVar3 = (undefined4 *)(iVar2 * 0x10 + *(int *)in_ECX);
  *puVar3 = *param_1;
  puVar3[1] = param_1[1];
  puVar3[2] = param_1[2];
  puVar3[3] = param_1[3];
  return iVar2;
}


// ==== 1015da90 FUN_1015da90

int FUN_1015da90(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  int *in_ECX;
  ushort *puVar7;
  
  if (param_1[1] == 0) {
    puVar3 = &DAT_101cdd44;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  uVar4 = thunk_FUN_1014fa60(puVar3);
  iVar2 = *(int *)(in_ECX[3] + (uVar4 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar2 == -1) {
      return 0;
    }
    puVar1 = (undefined4 *)(iVar2 * 0x14 + 4 + *in_ECX);
    if (param_1[1] == 0) {
      puVar7 = &DAT_101cdd44;
    }
    else {
      puVar7 = (ushort *)*param_1;
    }
    if (puVar1[1] == 0) {
      puVar5 = &DAT_101cdd44;
    }
    else {
      puVar5 = (ushort *)*puVar1;
    }
    iVar6 = appStricmp(puVar5,puVar7);
    if (iVar6 == 0) break;
    iVar2 = *(int *)(iVar2 * 0x14 + *in_ECX);
  }
  return *in_ECX + 0x10 + iVar2 * 0x14;
}


// ==== 1015db50 FUN_1015db50

void FUN_1015db50(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  
  iVar1 = (*(code *)**(undefined4 **)GMalloc)
                    ((uint)((ulonglong)(uint)in_ECX[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar2 = 0;
  if (0 < in_ECX[4]) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[4]);
  }
  iVar2 = 0;
  if (0 < in_ECX[1]) {
    iVar4 = 0;
    do {
      uVar3 = in_ECX[4] - 1U & *(uint *)(*in_ECX + 4 + iVar4);
      *(undefined4 *)(*in_ECX + iVar4) = *(undefined4 *)(iVar1 + uVar3 * 4);
      *(int *)(iVar1 + uVar3 * 4) = iVar2;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(*(int *)GMalloc + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 1015dc10 FUN_1015dc10

undefined4 * FUN_1015dc10(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,0xc);
  }
  puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = *param_1;
    puVar4[2] = *param_2;
  }
  uVar3 = *(int *)(in_ECX + 0x10) - 1U & puVar4[1];
  *puVar4 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar3 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar3 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_1015db50();
  }
  return puVar4 + 2;
}


// ==== 1015dcd0 FUN_1015dcd0

void FUN_1015dcd0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  
  iVar2 = (*(code *)**(undefined4 **)GMalloc)
                    ((uint)((ulonglong)(uint)in_ECX[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar3 = 0;
  if (0 < in_ECX[4]) {
    do {
      *(undefined4 *)(iVar2 + iVar3 * 4) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_ECX[4]);
  }
  iVar3 = 0;
  if (0 < in_ECX[1]) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*in_ECX + 4 + iVar5);
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar1 + 4);
      }
      uVar4 = in_ECX[4] - 1U & uVar4;
      *(undefined4 *)(*in_ECX + iVar5) = *(undefined4 *)(iVar2 + uVar4 * 4);
      *(int *)(iVar2 + uVar4 * 4) = iVar3;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar3 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(*(int *)GMalloc + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar2;
  return;
}


// ==== 1015dda0 FUN_1015dda0

void FUN_1015dda0(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x10);
  return;
}


// ==== 1015de40 FUN_1015de40

void FUN_1015de40(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,0xc);
  return;
}


// ==== 1015dee0 FUN_1015dee0

void FUN_1015dee0(void)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = (*(code *)**(undefined4 **)GMalloc)
                    ((uint)((ulonglong)(uint)in_ECX[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar2 = 0;
  if (0 < in_ECX[4]) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[4]);
  }
  if (0 < in_ECX[1]) {
    iVar2 = 0;
    iVar5 = 0;
    do {
      puVar6 = (undefined4 *)(*in_ECX + iVar2);
      if (puVar6[2] == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = (undefined2 *)puVar6[1];
      }
      uVar4 = thunk_FUN_1014fa60(puVar3);
      iVar2 = iVar2 + 0x14;
      uVar4 = uVar4 & in_ECX[4] - 1U;
      *puVar6 = *(undefined4 *)(iVar1 + uVar4 * 4);
      *(int *)(iVar1 + uVar4 * 4) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(*(int *)GMalloc + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 1015dfd0 FUN_1015dfd0

void FUN_1015dfd0(void)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = (*(code *)**(undefined4 **)GMalloc)
                    ((uint)((ulonglong)(uint)in_ECX[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar2 = 0;
  if (0 < in_ECX[4]) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[4]);
  }
  if (0 < in_ECX[1]) {
    iVar2 = 0;
    iVar5 = 0;
    do {
      puVar6 = (undefined4 *)(*in_ECX + iVar2);
      if (puVar6[2] == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = (undefined2 *)puVar6[1];
      }
      uVar4 = thunk_FUN_1014fa60(puVar3);
      iVar2 = iVar2 + 0x1c;
      uVar4 = uVar4 & in_ECX[4] - 1U;
      *puVar6 = *(undefined4 *)(iVar1 + uVar4 * 4);
      *(int *)(iVar1 + uVar4 * 4) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(*(int *)GMalloc + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 1015e0c0 FUN_1015e0c0

void FUN_1015e0c0(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,0xc);
  return;
}


// ==== 1015e160 FUN_1015e160

void FUN_1015e160(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x10);
  return;
}


// ==== 1015e200 FUN_1015e200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_1015e200(UObject *param_1,ushort *param_2)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcba0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_2 == (ushort *)0x0) {
    ExceptionList = &local_10;
    param_2 = appStaticString1024();
  }
  if (in_ECX == param_1) {
    appSprintf(param_2,(ushort *)L"None");
  }
  else {
    *param_2 = 0;
    if (*(UObject **)(in_ECX + 0x18) != param_1) {
      UObject::GetPathName(*(UObject **)(in_ECX + 0x18),param_1,param_2);
      appStrcat(param_2,(ushort *)&DAT_101d93d0);
    }
    appStrcat(param_2,(ushort *)(*(int *)(_Names + *(int *)(in_ECX + 0x20) * 4) + 0xc));
  }
  ExceptionList = local_10;
  return param_2;
}


// ==== 1015e29b Catch@1015e29b

void Catch_1015e29b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015e2af Catch@1015e2af

void Catch_1015e2af(void)

{
  appUnwindf((ushort *)&DAT_101d93e0,L"UObject::GetPathName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015e300 FUN_1015e300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_1015e300(ushort *param_1)

{
  int iVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcbb0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == (ushort *)0x0) {
    ExceptionList = &local_10;
    param_1 = appStaticString1024();
  }
  if (in_ECX == (UObject *)0x0) {
    appStrcpy(param_1,(ushort *)L"None");
  }
  else {
    appSprintf(param_1,(ushort *)&DAT_101d93e8,
               *(int *)(_Names + *(int *)(*(int *)(in_ECX + 0x24) + 0x20) * 4) + 0xc);
    iVar1 = appStrlen(param_1);
    UObject::GetPathName(in_ECX,(UObject *)0x0,param_1 + iVar1);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1015e395 Catch@1015e395

void Catch_1015e395(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015e3a9 Catch@1015e3a9

void Catch_1015e3a9(void)

{
  appUnwindf((ushort *)&DAT_101d93fc,L"UObject::GetFullName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015e400 FUN_1015e400

undefined4 FUN_1015e400(void)

{
  uint uVar1;
  UObject *in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcbc0;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(int *)(in_ECX + 4) != -1) && (uVar1 = *(uint *)(in_ECX + 0x1c), (uVar1 & 0x800000) == 0)) {
    ExceptionList = &local_10;
    *(uint *)(in_ECX + 0x1c) = uVar1 | 0x800000;
    *(uint *)(in_ECX + 0x1c) = uVar1 & 0x7fffffff | 0x800000;
    (**(code **)(*(int *)in_ECX + 0x28))();
    if ((*(uint *)(in_ECX + 0x1c) & 0x80000000) == 0) {
      UObject::GetFullName(in_ECX,(ushort *)0x0);
      FOutputDevice::Logf(this,(ushort *)GError);
    }
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}


// ==== 1015e4a3 Catch@1015e4a3

void Catch_1015e4a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015e4b7 Catch@1015e4b7

void Catch_1015e4b7(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d943c,L"UObject::ConditionalDestroy");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015e530 FUN_1015e530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015e530(void)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcbd0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (in_ECX[1] == -1) {
    for (iVar1 = 0; (iVar1 < DAT_103308bc && (*(int **)(_GObjRegistrants + iVar1 * 4) != in_ECX));
        iVar1 = iVar1 + 1) {
    }
    ExceptionList = &local_10;
    if (iVar1 == DAT_103308bc) {
      ExceptionList = &local_10;
      appFailAssert("i!=GObjRegistrants.Num()",".\\UnObj.cpp",0x1bd);
    }
    (**(code **)(*in_ECX + 0x50))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015e5c3 Catch@1015e5c3

void Catch_1015e5c3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1015e5d7 Catch@1015e5d7

void Catch_1015e5d7(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d9478,L"UObject::ConditionalRegister");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x1c),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015e650 FUN_1015e650

void FUN_1015e650(void)

{
  UObject *in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcbe0;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(uint *)(in_ECX + 0x1c) & 0x1000000) != 0) {
    ExceptionList = &local_10;
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xdeffffff;
    (**(code **)(*(int *)in_ECX + 0x24))();
    if ((*(uint *)(in_ECX + 0x1c) & 0x20000000) == 0) {
      UObject::GetFullName(in_ECX,(ushort *)0x0);
      FOutputDevice::Logf(this,(ushort *)GError);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015e6d4 Catch@1015e6d4

void Catch_1015e6d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015e6e8 Catch@1015e6e8

void Catch_1015e6e8(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d94c4,L"UObject::ConditionalPostLoad");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015e750 FUN_1015e750

void FUN_1015e750(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcbf0;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((GUndo != (FTransactionBase *)0x0) && ((*(byte *)(in_ECX + 0x1c) & 1) != 0)) {
    ExceptionList = &local_10;
    (*(code *)**(undefined4 **)GUndo)();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015e7ab Catch@1015e7ab

void Catch_1015e7ab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015e7bf Catch@1015e7bf

void Catch_1015e7bf(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d953c,L"UObject::Modify");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015e820 FUN_1015e820

void FUN_1015e820(FArchive *param_1)

{
  UObject *pUVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  UClass *pUVar5;
  FArchive *pFVar6;
  int *piVar7;
  undefined4 uVar8;
  FStateFrame *this;
  code *pcVar9;
  UObject *in_ECX;
  FOutputDevice *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar6 = param_1;
  puStack_c = &LAB_101bcc00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x40000000;
  pUVar1 = in_ECX + 0x24;
  if (*(UClass **)pUVar1 != &UClass::PrivateStaticClass) {
    (**(code **)(*(int *)param_1 + 0x10))(*(UClass **)pUVar1);
  }
  if (*(int *)(pFVar6 + 0x10) == 0) {
    if (*(int *)(pFVar6 + 0x14) == 0) {
      piVar7 = (int *)(**(code **)(*(int *)pFVar6 + 0x1c))(in_ECX + 0x20);
      uVar8 = (**(code **)(*piVar7 + 0x18))(in_ECX + 0x18,pUVar1);
      thunk_FUN_1012a9f0(uVar8);
    }
    if ((*(int *)(pFVar6 + 0x10) == 0) && (*(int *)(pFVar6 + 0x14) == 0)) {
      thunk_FUN_10136a80(pFVar6,in_ECX + 0x10);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(int *)(pFVar6 + 0x18) == 0) {
    if ((*(uint *)(in_ECX + 0x1c) & 0x2000000) == 0) {
      if (*(int *)(in_ECX + 0xc) != 0) {
        thunk_FUN_101088c0(*(int *)(in_ECX + 0xc));
        *(undefined4 *)(in_ECX + 0xc) = 0;
      }
    }
    else {
      if (*(int *)(in_ECX + 0xc) == 0) {
        this = (FStateFrame *)thunk_FUN_1015a300(0x2c,L"ObjectStateFrame");
        if (this == (FStateFrame *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FStateFrame::FStateFrame(this,in_ECX);
        }
        *(undefined4 *)(in_ECX + 0xc) = uVar8;
      }
      uVar8 = thunk_FUN_10130ef0(pFVar6,*(int *)(in_ECX + 0xc) + 4,*(int *)(in_ECX + 0xc) + 0x1c);
      thunk_FUN_1015b3e0(uVar8);
      thunk_FUN_10130860(pFVar6,*(int *)(in_ECX + 0xc) + 0x20);
      thunk_FUN_10130820(pFVar6,*(int *)(in_ECX + 0xc) + 0x28);
      iVar2 = *(int *)(in_ECX + 0xc);
      if (*(int *)(iVar2 + 4) == 0) {
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
      else {
        (**(code **)(*(int *)pFVar6 + 0x10))(*(undefined4 *)(iVar2 + 4));
        if (*(int *)(pFVar6 + 0x14) != 0) {
          uVar3 = *(uint *)(*(int *)(in_ECX + 0xc) + 0xc);
          if (uVar3 != 0) {
            iVar2 = *(int *)(*(int *)(in_ECX + 0xc) + 4);
            uVar4 = *(uint *)(iVar2 + 0x54);
            if ((uVar3 < uVar4) || (uVar4 + *(int *)(iVar2 + 0x58) <= uVar3)) {
              appFailAssert("StateFrame->Code>=&StateFrame->Node->Script(0) && StateFrame->Code<&StateFrame->Node->Script(StateFrame->Node->Script.Num())"
                            ,".\\UnObj.cpp",0x26d);
            }
          }
        }
        iVar2 = *(int *)(*(int *)(in_ECX + 0xc) + 0xc);
        if (iVar2 == 0) {
          param_1 = (FArchive *)0xffffffff;
        }
        else {
          param_1 = (FArchive *)(iVar2 - *(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 4) + 0x54));
        }
        operator<<(pFVar6,(FCompactIndex *)&param_1);
        if (param_1 != (FArchive *)0xffffffff) {
          if (((int)param_1 < 0) ||
             (*(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 4) + 0x58) <= (int)param_1)) {
            UObject::GetFullName(in_ECX,(ushort *)0x0);
            FOutputDevice::Logf(this_00,(ushort *)GError);
          }
          if (param_1 != (FArchive *)0xffffffff) {
            *(FArchive **)(*(int *)(in_ECX + 0xc) + 0xc) =
                 param_1 + *(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 4) + 0x54);
            goto LAB_1015ea27;
          }
        }
        *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0xc) = 0;
      }
    }
  }
LAB_1015ea27:
  local_8 = 0;
  pUVar5 = *(UClass **)pUVar1;
  if (pUVar5 != &UClass::PrivateStaticClass) {
    if (((*(int *)(pFVar6 + 0x10) == 0) && (*(int *)(pFVar6 + 0x14) == 0)) ||
       (*(int *)(pFVar6 + 0x18) != 0)) {
      pcVar9 = *(code **)(*(int *)pUVar5 + 0x84);
    }
    else {
      pcVar9 = *(code **)(*(int *)pUVar5 + 0x88);
    }
    (*pcVar9)(pFVar6);
  }
  uVar8 = (**(code **)(**(int **)pUVar1 + 0x78))();
  (**(code **)(*(int *)pFVar6 + 0x14))(uVar8,uVar8);
  ExceptionList = local_10;
  return;
}


// ==== 1015ea8f Catch@1015ea8f

void Catch_1015ea8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1015eaa3 Catch@1015eaa3

void Catch_1015eaa3(void)

{
  appUnwindf((ushort *)&DAT_101d9638,L"SerializeStack");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015eabe Catch@1015eabe

void Catch_1015eabe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1015ead2 Catch@1015ead2

void Catch_1015ead2(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d9640,L"UObject::Serialize");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x20),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015ebc0 FUN_1015ebc0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015ebc0(FOutputDevice *param_1,int param_2,int param_3,int param_4,UStruct *param_5,
                 undefined4 param_6)

{
  UObject *pUVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  UObject *this_02;
  int *piVar6;
  undefined1 local_203c [8204];
  UObject *local_30;
  int local_2c;
  wchar_t *local_28;
  int local_24;
  UStruct *local_20;
  UObject *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcc10;
  local_10 = ExceptionList;
  local_18 = 0x1015ebe3;
  local_14 = &stack0xffffdfb8;
  local_28 = L"(none)";
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffdfb8;
  if (param_2 == 0) {
    ExceptionList = &local_10;
    appFailAssert("ObjectClass!=NULL",".\\UnObj.cpp",0x29d);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  thunk_FUN_10119210(param_2);
  do {
    this_02 = local_1c;
    if (local_1c == (UObject *)0x0) {
      ExceptionList = local_10;
      return;
    }
    iVar3 = (**(code **)(*(int *)local_1c + 0xb0))();
    if (iVar3 != 0) {
      local_28 = (wchar_t *)(*(int *)(_Names + *(int *)(this_02 + 0x20) * 4) + 0xc);
      iVar3 = 0;
      while (local_18 = iVar3, iVar3 < *(int *)(this_02 + 0x40)) {
        iVar4 = UObject::IsA(this_02,&UArrayProperty::PrivateStaticClass);
        if (iVar4 == 0) {
          if ((param_5 == (UStruct *)0x0) ||
             (iVar4 = UStruct::IsChildOf(param_5,local_20), uVar5 = param_6, iVar4 == 0)) {
            uVar5 = 0;
          }
          iVar4 = (**(code **)(*(int *)this_02 + 0xa0))(iVar3,local_203c,param_3,uVar5,2);
          if (iVar4 == 0) goto LAB_1015ee61;
          iVar4 = UObject::IsA(this_02,&UObjectProperty::PrivateStaticClass);
          if ((((iVar4 != 0) && (((byte)this_02[0x48] & 8) != 0)) &&
              (pUVar1 = *(UObject **)
                         (*(int *)(this_02 + 0x44) * iVar3 + *(int *)(this_02 + 0x54) + param_3),
              pUVar1 != (UObject *)0x0)) && (((byte)pUVar1[0x1c] & 8) == 0)) {
            UExporter::ExportToOutputDevice
                      (pUVar1,(UExporter *)0x0,param_1,(ushort *)&DAT_101d96ac,param_4 + 1);
            *(uint *)(pUVar1 + 0x1c) = *(uint *)(pUVar1 + 0x1c) | 8;
          }
          if (*(int *)(this_02 + 0x40) != 1) {
            appSpc(param_4);
            FOutputDevice::Logf(this_01,(ushort *)param_1);
            iVar3 = local_18;
            goto LAB_1015ee61;
          }
          appSpc(param_4);
          FOutputDevice::Logf(this_00,(ushort *)param_1);
          iVar3 = local_18 + 1;
        }
        else {
          iVar4 = thunk_FUN_10132a60(this_02);
          local_30 = *(UObject **)(iVar4 + 0x78);
          if (((byte)this_02[0x48] & 8) == 0) {
LAB_1015ec9f:
            local_24 = 0;
          }
          else {
            iVar4 = UObject::IsA(local_30,&UObjectProperty::PrivateStaticClass);
            local_24 = 1;
            if (iVar4 == 0) goto LAB_1015ec9f;
          }
          piVar6 = (int *)(*(int *)(this_02 + 0x44) * iVar3 + *(int *)(this_02 + 0x54) + param_3);
          for (iVar4 = 0; iVar3 = local_18, local_2c = iVar4, iVar4 < piVar6[1]; iVar4 = iVar4 + 1)
          {
            iVar3 = (**(code **)(*(int *)local_30 + 0xa0))(iVar4,local_203c,*piVar6,0,2);
            if (iVar3 != 0) {
              if (((local_24 != 0) &&
                  (pUVar1 = *(UObject **)(*piVar6 + iVar4 * 4), this_02 = local_1c,
                  pUVar1 != (UObject *)0x0)) && (((byte)pUVar1[0x1c] & 8) == 0)) {
                UExporter::ExportToOutputDevice
                          (pUVar1,(UExporter *)0x0,param_1,(ushort *)&DAT_101d9684,param_4 + 1);
                *(uint *)(pUVar1 + 0x1c) = *(uint *)(pUVar1 + 0x1c) | 8;
                this_02 = local_1c;
              }
              appSpc(param_4);
              FOutputDevice::Logf(this,(ushort *)param_1);
            }
          }
LAB_1015ee61:
          iVar3 = iVar3 + 1;
        }
      }
    }
    local_1c = *(UObject **)(this_02 + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 1015ee94 Catch@1015ee94

void Catch_1015ee94(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_101f843c);
}


// ==== 1015eea8 Catch@1015eea8

void Catch_1015eea8(void)

{
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d96ec,L"UObject::ExportProperties");
  appUnwindf((ushort *)L"(%s)",*(undefined4 *)(unaff_EBP + -0x24));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015efa0 FUN_1015efa0

void FUN_1015efa0(void)

{
  FStateFrame *this;
  undefined4 uVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcc20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x24) == 0) {
    ExceptionList = &local_10;
    appFailAssert("GetClass()!=NULL",".\\UnObj.cpp",0x2e4);
  }
  if (*(int *)(in_ECX + 0xc) != 0) {
    thunk_FUN_101088c0(*(int *)(in_ECX + 0xc));
  }
  this = (FStateFrame *)thunk_FUN_1015a300(0x2c,L"ObjectStateFrame");
  if (this == (FStateFrame *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FStateFrame::FStateFrame(this,in_ECX);
  }
  *(undefined4 *)(in_ECX + 0xc) = uVar1;
  *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x2000000;
  ExceptionList = local_10;
  return;
}


// ==== 1015f03b Catch@1015f03b

void Catch_1015f03b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015f04f Catch@1015f04f

void Catch_1015f04f(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d9744,L"UObject::InitExecution");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015f0c0 FUN_1015f0c0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1015f0c0(ushort *param_1,ushort *param_2,UObject *param_3)

{
  int *piVar1;
  int iVar2;
  FOutputDevice *this;
  int iVar3;
  undefined1 *puVar4;
  ushort local_c0 [72];
  int *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int *local_1c;
  UFunction *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcc30;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff34;
  iVar3 = 0;
  local_8 = 0;
  if ((GIsScriptable != 0) &&
     (ExceptionList = &local_10, iVar2 = ParseToken(&param_1,local_c0,0x40,1), iVar2 != 0)) {
    local_1c = (int *)FName::FName((FName *)&local_1c,local_c0,0);
    local_1c = (int *)*local_1c;
    if ((local_1c != (int *)0x0) &&
       ((local_18 = UObject::FindFunction(), local_18 != (UFunction *)0x0 &&
        ((*(uint *)(local_18 + 0x8c) & 0x200) != 0)))) {
      if (*(short *)(local_18 + 0x96) == 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        local_14 = &stack0xffffff2c;
        puVar4 = &stack0xffffff2c;
      }
      thunk_FUN_10108420(puVar4,*(short *)(local_18 + 0x96));
      local_24 = 0;
      local_2c = 0;
      thunk_FUN_10119210(local_18);
      do {
        piVar1 = local_30;
        if ((local_30 == (int *)0x0) || ((local_30[0x12] & 0x480U) != 0x80)) goto LAB_1015f27d;
        if ((iVar3 == 0) &&
           (((param_3 != (UObject *)0x0 && (iVar2 = thunk_FUN_10132a30(local_30), iVar2 != 0)) &&
            (iVar2 = UObject::IsA(param_3,*(UClass **)(iVar2 + 0x78)), iVar2 != 0)))) {
          *(UObject **)(puVar4 + piVar1[0x15]) = param_3;
        }
        else {
          ParseNext(&param_1);
          param_1 = (ushort *)(**(code **)(*piVar1 + 0x9c))(param_1,puVar4 + piVar1[0x15],1);
          if (param_1 == (ushort *)0x0) {
            if ((*(byte *)(piVar1 + 0x12) & 0x10) == 0) {
              LocalizeError((ushort *)L"BadProperty",(ushort *)L"Core",(ushort *)0x0);
              FOutputDevice::Logf(this,param_2);
              local_24 = 1;
              goto LAB_1015f294;
            }
LAB_1015f27d:
            if (local_24 == 0) {
              (**(code **)(*local_28 + 0x10))(local_18,puVar4,0);
            }
LAB_1015f294:
            thunk_FUN_10119210(local_18);
            while ((piVar1 = local_1c, local_1c != (int *)0x0 && ((local_1c[0x12] & 0x480U) == 0x80)
                   )) {
              (**(code **)(*local_1c + 0xac))(puVar4 + local_1c[0x15]);
              local_1c = (int *)piVar1[0xe];
              thunk_FUN_10114340();
            }
            ExceptionList = local_10;
            return 1;
          }
        }
        local_30 = (int *)piVar1[0xe];
        thunk_FUN_10114340();
        iVar3 = iVar3 + 1;
        local_2c = iVar3;
      } while( true );
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1015f2e4 Catch@1015f2e4

void Catch_1015f2e4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_101f843c);
}


// ==== 1015f2f8 Catch@1015f2f8

void Catch_1015f2f8(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d977c,L"UObject::ScriptConsoleExec");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x24),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015f3d0 FUN_1015f3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UField * FUN_1015f3d0(undefined4 param_1,undefined4 param_2)

{
  UField *pUVar1;
  UObject *in_ECX;
  UObject *this;
  
  if (GIsScriptable == 0) {
    return (UField *)0x0;
  }
  pUVar1 = UObject::FindObjectField(in_ECX,param_1,param_2);
  if ((pUVar1 != (UField *)0x0) && ((*(uint *)(*(int *)(pUVar1 + 0x24) + 0x4a4) & 0x80000) != 0)) {
    return pUVar1;
  }
  UObject::GetFullName(this,(ushort *)0x0);
  FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
  return (UField *)0x0;
}


// ==== 1015f460 FUN_1015f460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015f460(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcc40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10119210(param_1);
  while (local_24 != 0) {
    for (iVar3 = 0; iVar3 < *(int *)(local_24 + 0x40); iVar3 = iVar3 + 1) {
      puVar1 = appStaticString1024();
      *puVar1 = 0;
      if (param_4 != 0) {
        appSprintf(puVar1,(ushort *)&DAT_101d9814,param_4);
      }
      iVar2 = *(int *)(_Names + *(int *)(local_24 + 0x20) * 4) + 0xc;
      if (*(int *)(local_24 + 0x40) < 2) {
        appSprintf(puVar1,(ushort *)L"%s%s",puVar1,iVar2);
      }
      else {
        appSprintf(puVar1,(ushort *)L"%s%s[%d]",puVar1,iVar2,iVar3);
      }
      FUN_1015c690(local_24,param_2,
                   *(int *)(local_24 + 0x44) * iVar3 + *(int *)(local_24 + 0x54) + param_5);
    }
    local_24 = *(int *)(local_24 + 0x38);
    thunk_FUN_10114340();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015f559 Catch@1015f559

void Catch_1015f559(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1015f56d Catch@1015f56d

void Catch_1015f56d(void)

{
  appUnwindf((ushort *)&DAT_101d983c,L"LoadLocalizedStruct");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015f5e0 FUN_1015f5e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015f5e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcc50;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x24);
  if ((*(byte *)(iVar1 + 0x4a4) & 0x20) == 0) {
    return;
  }
  if (GIsEditor != 0) {
    return;
  }
  iVar4 = *(int *)(in_ECX + 4);
  if (iVar4 == -1) {
LAB_1015f674:
    iVar3 = *(int *)(iVar1 + 0x18);
  }
  else {
    if (((*(uint *)(in_ECX + 0x1c) & 0x100) != 0) && (*(int *)(*(int *)(in_ECX + 0x18) + 0x18) != 0)
       ) {
      iVar2 = *(int *)(_Names + *(int *)(in_ECX + 0x20) * 4) + 0xc;
      iVar4 = *(int *)(_Names + *(int *)(*(int *)(in_ECX + 0x18) + 0x20) * 4);
      iVar3 = *(int *)(_Names + *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x18) + 0x20) * 4);
      goto LAB_1015f6a3;
    }
    if (iVar4 == -1) goto LAB_1015f674;
    iVar3 = *(int *)(in_ECX + 0x18);
  }
  iVar3 = *(int *)(_Names + *(int *)(iVar3 + 0x20) * 4);
  if (iVar4 == -1) {
    iVar4 = *(int *)(iVar1 + 0x20);
  }
  else {
    iVar4 = *(int *)(in_ECX + 0x20);
  }
  iVar4 = *(int *)(_Names + iVar4 * 4);
  iVar2 = 0;
LAB_1015f6a3:
  ExceptionList = &local_10;
  FUN_1015f460(iVar1,iVar3 + 0xc,iVar4 + 0xc,iVar2);
  ExceptionList = local_10;
  return;
}


// ==== 1015f6c4 Catch@1015f6c4

void Catch_1015f6c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015f6d8 Catch@1015f6d8

void Catch_1015f6d8(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d9844,L"UObject::LoadLocalized");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015f760 FUN_1015f760

undefined4 FUN_1015f760(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  return 0;
}


// ==== 1015f7a6 Catch@1015f7a6

void Catch_1015f7a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015f7ba Catch@1015f7ba

void Catch_1015f7ba(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d98e0,L"UObject::QueryInterface");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015f820 FUN_1015f820

undefined4 FUN_1015f820(void)

{
  return 0;
}


// ==== 1015f85d Catch@1015f85d

void Catch_1015f85d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015f871 Catch@1015f871

void Catch_1015f871(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d98f4,L"UObject::AddRef");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015f8d0 FUN_1015f8d0

undefined4 FUN_1015f8d0(void)

{
  return 0;
}


// ==== 1015f90d Catch@1015f90d

void Catch_1015f90d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015f921 Catch@1015f921

void Catch_1015f921(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d9908,L"UObject::Release");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015f980 FUN_1015f980

void FUN_1015f980(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  UObject *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcc90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + 1;
  this = (UObject *)*param_1;
  if (this != (UObject *)0x0) {
    if ((*(uint *)(this + 0x1c) & 0x400) == 0) {
      if ((*(uint *)(this + 0x1c) & 2) != 0) {
        local_8 = 0;
        *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) & 0xbffffffd;
        if (((byte)this[0x1c] & 0x40) == 0) {
          if (*(UObject **)(in_ECX + 0x38) != (UObject *)0x0) {
            UObject::GetFullName(*(UObject **)(in_ECX + 0x38),(ushort *)0x0);
          }
          UObject::GetFullName(this,(ushort *)0x0);
          FOutputDevice::Logf((FOutputDevice *)GNull,(EName)GNull,(ushort *)0x2f8);
        }
        else {
          uVar1 = *(undefined4 *)(in_ECX + 0x38);
          *(UObject **)(in_ECX + 0x38) = this;
          (**(code **)(*(int *)this + 0x2c))();
          *(undefined4 *)(in_ECX + 0x38) = uVar1;
        }
      }
    }
    else {
      this = (UObject *)0x0;
    }
  }
  *param_1 = this;
  ExceptionList = local_10;
  return;
}


// ==== 1015fa4f Catch@1015fa4f

void Catch_1015fa4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015fa63 Catch@1015fa63

void Catch_1015fa63(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101cdb60,L"TestReach");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015fae0 FUN_1015fae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015fae0(int *param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)(_Names + *param_1 * 4) + 4);
  *puVar1 = *puVar1 & 0xfffffffd;
  return;
}


// ==== 1015fb00 FUN_1015fb00

void FUN_1015fb00(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int *piVar2;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcca0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_2 < 0x34) {
    ExceptionList = &local_10;
    appFailAssert("DataCount>=sizeof(UObject)",".\\UnObj.cpp",0x57a);
  }
  iVar1 = 0x34;
  if (param_4 == 0) {
    if ((param_3 == 0) || (*(int *)(param_3 + 0x4f8) == 0)) goto LAB_1015fb7d;
    param_4 = *(int *)(param_3 + 0x4f4);
    param_5 = *(int *)(param_3 + 0x4f8);
    if (param_4 == 0) goto LAB_1015fb7d;
  }
  _memcpy((void *)(param_1 + 0x34),(void *)(param_4 + 0x34),param_5 - 0x34);
  iVar1 = param_5;
LAB_1015fb7d:
  if (iVar1 < (int)param_2) {
    thunk_FUN_10108420(iVar1 + param_1,param_2 - iVar1);
  }
  if (param_7 != 0) {
    iVar1 = *(int *)(param_3 + 0x4f4);
    thunk_FUN_10119210(*(undefined4 *)(param_6 + 0x24));
    while (local_20 != 0) {
      if ((*(uint *)(local_20 + 0x48) & 0x2000) != 0) {
        _memcpy((void *)(*(int *)(local_20 + 0x54) + param_1),
                (void *)(*(int *)(local_20 + 0x54) + iVar1),
                *(int *)(local_20 + 0x44) * *(int *)(local_20 + 0x40));
      }
      local_20 = *(int *)(local_20 + 0x38);
      thunk_FUN_10114340();
    }
  }
  if (param_3 != 0) {
    for (piVar2 = *(int **)(param_3 + 0x78); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x18]) {
      if (piVar2[0x15] < param_5) {
        thunk_FUN_10108420(piVar2[0x15] + param_1,piVar2[0x11] * piVar2[0x10]);
        iVar1 = param_7;
        if (param_7 == 0) {
          iVar1 = param_6;
        }
        (**(code **)(*piVar2 + 0xa8))(piVar2[0x15] + param_1,param_4 + piVar2[0x15],iVar1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015fc7a Catch@1015fc7a

void Catch_1015fc7a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015fc8e Catch@1015fc8e

void Catch_1015fc8e(void)

{
  appUnwindf((ushort *)&DAT_101d9994,L"UObject::InitProperties");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015fd20 FUN_1015fd20

void FUN_1015fd20(int param_1,int param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bccb0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (piVar1 = *(int **)(param_2 + 0x78); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x18]) {
    (**(code **)(*piVar1 + 0xac))(piVar1[0x15] + param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1015fd8e Catch@1015fd8e

void Catch_1015fd8e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1015fda2 Catch@1015fda2

void Catch_1015fda2(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d999c,L"UObject::ExitProperties");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x14),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015fe10 FUN_1015fe10

void FUN_1015fe10(int *param_1,int param_2)

{
  UObject *pUVar1;
  int iVar2;
  int *in_ECX;
  UClass *pUVar3;
  uchar *puVar4;
  int iVar5;
  UObject *pUVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bccc0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  appMemset(in_ECX,0,0x34);
  *in_ECX = *param_1;
  in_ECX[9] = (int)param_1;
  in_ECX[1] = -1;
  in_ECX[10] = -1;
  if (param_2 != 0) {
    in_ECX[6] = param_1[6];
  }
  pUVar3 = (UClass *)param_1[0xd];
  pUVar6 = (UObject *)0x0;
  pUVar1 = (UObject *)(-(uint)(param_2 != 0) & (uint)in_ECX);
  iVar5 = 0;
  puVar4 = (uchar *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x78))();
  UObject::InitProperties((uchar *)in_ECX,iVar2,pUVar3,puVar4,iVar5,pUVar1,pUVar6);
  ExceptionList = local_10;
  return;
}


// ==== 1015fe9f Catch@1015fe9f

void Catch_1015fe9f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015feb3 Catch@1015feb3

void Catch_1015feb3(void)

{
  appUnwindf((ushort *)&DAT_101d99b0,L"UObject::InitClassDefaultObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015ff00 FUN_1015ff00

void FUN_1015ff00(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bccd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::LoadLocalized(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1015ff45 Catch@1015ff45

void Catch_1015ff45(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1015ff59 Catch@1015ff59

void Catch_1015ff59(void)

{
  appUnwindf((ushort *)&DAT_101d9af0,L"UObject::LanguageChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1015ffa0 FUN_1015ffa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015ffa0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcce0;
  local_10 = ExceptionList;
  local_8 = 0;
  UObject::GObjRegisterCount = UObject::GObjRegisterCount + 1;
  ExceptionList = &local_10;
  if (UObject::GObjRegisterCount == 1) {
    for (; UObject::GAutoRegister != (UObject *)0x0;
        UObject::GAutoRegister = *(UObject **)(UObject::GAutoRegister + 0x14)) {
      thunk_FUN_101287a0(&UObject::GAutoRegister);
    }
    for (iVar1 = 0; iVar1 < DAT_103308bc; iVar1 = iVar1 + 1) {
      UObject::ConditionalRegister(*(UObject **)(_GObjRegistrants + iVar1 * 4));
    }
    thunk_FUN_10128110(0);
    if (UObject::GAutoRegister != (UObject *)0x0) {
      appFailAssert("!GAutoRegister",".\\UnObj.cpp",0x689);
    }
  }
  UObject::GObjRegisterCount = UObject::GObjRegisterCount + -1;
  ExceptionList = local_10;
  return;
}


// ==== 10160073 Catch@10160073

void Catch_10160073(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10160087 Catch@10160087

void Catch_10160087(void)

{
  appUnwindf((ushort *)&DAT_101d9d64,L"UObject::ProcessRegistrants");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101600f0 FUN_101600f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101600f0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  void *pvVar3;
  ushort local_220 [262];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bccf0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd4;
  local_8 = 0;
  if (((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 0x18) == 0)) &&
     (*(int *)(param_1 + 0x38) == 0)) {
    iVar1 = *(int *)(_Names + *(int *)(param_1 + 0x20) * 4) + 0xc;
    ExceptionList = &local_10;
    puVar2 = appBaseDir();
    appSprintf(local_220,(ushort *)L"%s%s",puVar2,iVar1);
    *(undefined4 *)(param_1 + 0x38) = 1;
    UObject::GObjNoRegister = 0;
    pvVar3 = appGetDllHandle(local_220);
    *(void **)(param_1 + 0x34) = pvVar3;
    UObject::GObjNoRegister = 1;
    if (*(int *)(param_1 + 0x34) != 0) {
      if (GLog != (undefined *)0x0) {
        FOutputDevice::Logf2
                  ((FOutputDevice *)(*(int *)(_Names + *(int *)(param_1 + 0x20) * 4) + 0xc),
                   (EName)GLog,(ushort *)0x2f8);
      }
      UObject::ProcessRegistrants();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101601e1 Catch@101601e1

void Catch_101601e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101601f5 Catch@101601f5

void Catch_101601f5(void)

{
  appUnwindf((ushort *)&DAT_101da01c,L"UPackage::BindPackage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10160260 FUN_10160260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10160260(ushort *param_1,int param_2,undefined4 param_3,int *param_4,undefined4 *param_5)

{
  UClass *pUVar1;
  ushort *puVar2;
  int iVar3;
  int in_ECX;
  ushort *puVar4;
  int local_1c;
  ushort *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101bcd30;
  local_c = ExceptionList;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x24) == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(*(int *)(in_ECX + 0x24) + 0x48);
  }
  ExceptionList = &local_c;
  thunk_FUN_10114340();
  do {
    if (local_1c == 0) {
      local_4 = 5;
      param_2 = 0;
      param_3 = 0;
      FArray::Realloc((FArray *)&param_1,2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
      ExceptionList = local_c;
      return 0;
    }
    for (pUVar1 = *(UClass **)(local_1c + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UArrayProperty::PrivateStaticClass) {
        FString::FString((FString *)&local_18,
                         (ushort *)(*(int *)(_Names + *(int *)(local_1c + 0x20) * 4) + 0xc));
        local_4._0_1_ = 1;
        puVar4 = param_1;
        if (param_2 == 0) {
          puVar4 = &DAT_101cdd44;
        }
        puVar2 = local_18;
        if (local_14 == 0) {
          puVar2 = &DAT_101cdd44;
        }
        iVar3 = appStricmp(puVar2,puVar4);
        if (iVar3 == 0) {
          *param_4 = *(int *)(local_1c + 0x54) + in_ECX;
          *param_5 = *(undefined4 *)(*(int *)(local_1c + 0x78) + 0x44);
          local_4._0_1_ = 2;
          local_14 = 0;
          local_10 = 0;
          FArray::Realloc((FArray *)&local_18,2);
          local_4 = (uint)local_4._1_3_ << 8;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
          local_4 = 3;
          param_2 = 0;
          param_3 = 0;
          FArray::Realloc((FArray *)&param_1,2);
          local_4 = 0xffffffff;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
          ExceptionList = local_c;
          return 1;
        }
        local_4._0_1_ = 4;
        local_14 = 0;
        local_10 = 0;
        FArray::Realloc((FArray *)&local_18,2);
        local_4 = (uint)local_4._1_3_ << 8;
        TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
        break;
      }
    }
    local_1c = *(int *)(local_1c + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 101604a0 FUN_101604a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101604a0(ushort *param_1,int param_2,undefined4 param_3,int *param_4)

{
  UClass *pUVar1;
  ushort *puVar2;
  int iVar3;
  int in_ECX;
  ushort *puVar4;
  int local_1c;
  ushort *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101bcd80;
  local_c = ExceptionList;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x24) == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(*(int *)(in_ECX + 0x24) + 0x48);
  }
  ExceptionList = &local_c;
  thunk_FUN_10114340();
  do {
    if (local_1c == 0) {
      local_4 = 5;
      param_2 = 0;
      param_3 = 0;
      FArray::Realloc((FArray *)&param_1,2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
      ExceptionList = local_c;
      return 0;
    }
    for (pUVar1 = *(UClass **)(local_1c + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UObjectProperty::PrivateStaticClass) {
        FString::FString((FString *)&local_18,
                         (ushort *)(*(int *)(_Names + *(int *)(local_1c + 0x20) * 4) + 0xc));
        local_4._0_1_ = 1;
        puVar4 = param_1;
        if (param_2 == 0) {
          puVar4 = &DAT_101cdd44;
        }
        puVar2 = local_18;
        if (local_14 == 0) {
          puVar2 = &DAT_101cdd44;
        }
        iVar3 = appStricmp(puVar2,puVar4);
        if (iVar3 == 0) {
          *param_4 = *(int *)(local_1c + 0x54) + in_ECX;
          local_4._0_1_ = 2;
          local_14 = 0;
          local_10 = 0;
          FArray::Realloc((FArray *)&local_18,2);
          local_4 = (uint)local_4._1_3_ << 8;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
          local_4 = 3;
          param_2 = 0;
          param_3 = 0;
          FArray::Realloc((FArray *)&param_1,2);
          local_4 = 0xffffffff;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
          ExceptionList = local_c;
          return 1;
        }
        local_4._0_1_ = 4;
        local_14 = 0;
        local_10 = 0;
        FArray::Realloc((FArray *)&local_18,2);
        local_4 = (uint)local_4._1_3_ << 8;
        TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
        break;
      }
    }
    local_1c = *(int *)(local_1c + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 101606d0 FUN_101606d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101606d0(ushort *param_1,int param_2,undefined4 param_3,int *param_4)

{
  UClass *pUVar1;
  ushort *puVar2;
  int iVar3;
  int in_ECX;
  ushort *puVar4;
  int local_1c;
  ushort *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101bcdd0;
  local_c = ExceptionList;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x24) == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(*(int *)(in_ECX + 0x24) + 0x48);
  }
  ExceptionList = &local_c;
  thunk_FUN_10114340();
  do {
    if (local_1c == 0) {
      local_4 = 5;
      param_2 = 0;
      param_3 = 0;
      FArray::Realloc((FArray *)&param_1,2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
      ExceptionList = local_c;
      return 0;
    }
    for (pUVar1 = *(UClass **)(local_1c + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UStructProperty::PrivateStaticClass) {
        FString::FString((FString *)&local_18,
                         (ushort *)(*(int *)(_Names + *(int *)(local_1c + 0x20) * 4) + 0xc));
        local_4._0_1_ = 1;
        puVar4 = param_1;
        if (param_2 == 0) {
          puVar4 = &DAT_101cdd44;
        }
        puVar2 = local_18;
        if (local_14 == 0) {
          puVar2 = &DAT_101cdd44;
        }
        iVar3 = appStricmp(puVar2,puVar4);
        if (iVar3 == 0) {
          *param_4 = *(int *)(local_1c + 0x54) + in_ECX;
          local_4._0_1_ = 2;
          local_14 = 0;
          local_10 = 0;
          FArray::Realloc((FArray *)&local_18,2);
          local_4 = (uint)local_4._1_3_ << 8;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
          local_4 = 3;
          param_2 = 0;
          param_3 = 0;
          FArray::Realloc((FArray *)&param_1,2);
          local_4 = 0xffffffff;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
          ExceptionList = local_c;
          return 1;
        }
        local_4._0_1_ = 4;
        local_14 = 0;
        local_10 = 0;
        FArray::Realloc((FArray *)&local_18,2);
        local_4 = (uint)local_4._1_3_ << 8;
        TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
        break;
      }
    }
    local_1c = *(int *)(local_1c + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 10160900 FUN_10160900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10160900(ushort *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  UClass *pUVar1;
  ushort *puVar2;
  int iVar3;
  int in_ECX;
  ushort *puVar4;
  int local_1c;
  ushort *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101bce20;
  local_c = ExceptionList;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x24) == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(*(int *)(in_ECX + 0x24) + 0x48);
  }
  ExceptionList = &local_c;
  thunk_FUN_10114340();
  do {
    if (local_1c == 0) {
      local_4 = 5;
      param_2 = 0;
      param_3 = 0;
      FArray::Realloc((FArray *)&param_1,2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
      ExceptionList = local_c;
      return 0;
    }
    for (pUVar1 = *(UClass **)(local_1c + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UFloatProperty::PrivateStaticClass) {
        FString::FString((FString *)&local_18,
                         (ushort *)(*(int *)(_Names + *(int *)(local_1c + 0x20) * 4) + 0xc));
        local_4._0_1_ = 1;
        puVar4 = param_1;
        if (param_2 == 0) {
          puVar4 = &DAT_101cdd44;
        }
        puVar2 = local_18;
        if (local_14 == 0) {
          puVar2 = &DAT_101cdd44;
        }
        iVar3 = appStricmp(puVar2,puVar4);
        if (iVar3 == 0) {
          *param_4 = *(undefined4 *)(in_ECX + *(int *)(local_1c + 0x54));
          local_4._0_1_ = 2;
          local_14 = 0;
          local_10 = 0;
          FArray::Realloc((FArray *)&local_18,2);
          local_4 = (uint)local_4._1_3_ << 8;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
          local_4 = 3;
          param_2 = 0;
          param_3 = 0;
          FArray::Realloc((FArray *)&param_1,2);
          local_4 = 0xffffffff;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
          ExceptionList = local_c;
          return 1;
        }
        local_4._0_1_ = 4;
        local_14 = 0;
        local_10 = 0;
        FArray::Realloc((FArray *)&local_18,2);
        local_4 = (uint)local_4._1_3_ << 8;
        TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
        break;
      }
    }
    local_1c = *(int *)(local_1c + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 10160b30 FUN_10160b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10160b30(ushort *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  UClass *pUVar1;
  ushort *puVar2;
  int iVar3;
  int in_ECX;
  ushort *puVar4;
  int local_1c;
  ushort *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101bce70;
  local_c = ExceptionList;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x24) == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(*(int *)(in_ECX + 0x24) + 0x48);
  }
  ExceptionList = &local_c;
  thunk_FUN_10114340();
  do {
    if (local_1c == 0) {
      local_4 = 5;
      param_2 = 0;
      param_3 = 0;
      FArray::Realloc((FArray *)&param_1,2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
      ExceptionList = local_c;
      return 0;
    }
    for (pUVar1 = *(UClass **)(local_1c + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UIntProperty::PrivateStaticClass) {
        FString::FString((FString *)&local_18,
                         (ushort *)(*(int *)(_Names + *(int *)(local_1c + 0x20) * 4) + 0xc));
        local_4._0_1_ = 1;
        puVar4 = param_1;
        if (param_2 == 0) {
          puVar4 = &DAT_101cdd44;
        }
        puVar2 = local_18;
        if (local_14 == 0) {
          puVar2 = &DAT_101cdd44;
        }
        iVar3 = appStricmp(puVar2,puVar4);
        if (iVar3 == 0) {
          *param_4 = *(undefined4 *)(in_ECX + *(int *)(local_1c + 0x54));
          local_4._0_1_ = 2;
          local_14 = 0;
          local_10 = 0;
          FArray::Realloc((FArray *)&local_18,2);
          local_4 = (uint)local_4._1_3_ << 8;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
          local_4 = 3;
          param_2 = 0;
          param_3 = 0;
          FArray::Realloc((FArray *)&param_1,2);
          local_4 = 0xffffffff;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
          ExceptionList = local_c;
          return 1;
        }
        local_4._0_1_ = 4;
        local_14 = 0;
        local_10 = 0;
        FArray::Realloc((FArray *)&local_18,2);
        local_4 = (uint)local_4._1_3_ << 8;
        TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
        break;
      }
    }
    local_1c = *(int *)(local_1c + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 10160d60 FUN_10160d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10160d60(ushort *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  UClass *pUVar1;
  ushort *puVar2;
  int iVar3;
  int in_ECX;
  ushort *puVar4;
  int local_1c;
  ushort *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101bcec0;
  local_c = ExceptionList;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x24) == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(*(int *)(in_ECX + 0x24) + 0x48);
  }
  ExceptionList = &local_c;
  thunk_FUN_10114340();
  do {
    if (local_1c == 0) {
      local_4 = 5;
      param_2 = 0;
      param_3 = 0;
      FArray::Realloc((FArray *)&param_1,2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
      ExceptionList = local_c;
      return 0;
    }
    for (pUVar1 = *(UClass **)(local_1c + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UBoolProperty::PrivateStaticClass) {
        FString::FString((FString *)&local_18,
                         (ushort *)(*(int *)(_Names + *(int *)(local_1c + 0x20) * 4) + 0xc));
        local_4._0_1_ = 1;
        puVar4 = param_1;
        if (param_2 == 0) {
          puVar4 = &DAT_101cdd44;
        }
        puVar2 = local_18;
        if (local_14 == 0) {
          puVar2 = &DAT_101cdd44;
        }
        iVar3 = appStricmp(puVar2,puVar4);
        if (iVar3 == 0) {
          *param_4 = *(undefined4 *)(in_ECX + *(int *)(local_1c + 0x54));
          local_4._0_1_ = 2;
          local_14 = 0;
          local_10 = 0;
          FArray::Realloc((FArray *)&local_18,2);
          local_4 = (uint)local_4._1_3_ << 8;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
          local_4 = 3;
          param_2 = 0;
          param_3 = 0;
          FArray::Realloc((FArray *)&param_1,2);
          local_4 = 0xffffffff;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
          ExceptionList = local_c;
          return 1;
        }
        local_4._0_1_ = 4;
        local_14 = 0;
        local_10 = 0;
        FArray::Realloc((FArray *)&local_18,2);
        local_4 = (uint)local_4._1_3_ << 8;
        TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
        break;
      }
    }
    local_1c = *(int *)(local_1c + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 10160f90 FUN_10160f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10160f90(ushort *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  UClass *pUVar1;
  ushort *puVar2;
  int iVar3;
  int in_ECX;
  ushort *puVar4;
  int local_1c;
  ushort *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101bcf10;
  local_c = ExceptionList;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x24) == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(*(int *)(in_ECX + 0x24) + 0x48);
  }
  ExceptionList = &local_c;
  thunk_FUN_10114340();
  do {
    if (local_1c == 0) {
      local_4 = 5;
      param_2 = 0;
      param_3 = 0;
      FArray::Realloc((FArray *)&param_1,2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
      ExceptionList = local_c;
      return 0;
    }
    for (pUVar1 = *(UClass **)(local_1c + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UNameProperty::PrivateStaticClass) {
        FString::FString((FString *)&local_18,
                         (ushort *)(*(int *)(_Names + *(int *)(local_1c + 0x20) * 4) + 0xc));
        local_4._0_1_ = 1;
        puVar4 = param_1;
        if (param_2 == 0) {
          puVar4 = &DAT_101cdd44;
        }
        puVar2 = local_18;
        if (local_14 == 0) {
          puVar2 = &DAT_101cdd44;
        }
        iVar3 = appStricmp(puVar2,puVar4);
        if (iVar3 == 0) {
          *param_4 = *(undefined4 *)(in_ECX + *(int *)(local_1c + 0x54));
          local_4._0_1_ = 2;
          local_14 = 0;
          local_10 = 0;
          FArray::Realloc((FArray *)&local_18,2);
          local_4 = (uint)local_4._1_3_ << 8;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
          local_4 = 3;
          param_2 = 0;
          param_3 = 0;
          FArray::Realloc((FArray *)&param_1,2);
          local_4 = 0xffffffff;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_1);
          ExceptionList = local_c;
          return 1;
        }
        local_4._0_1_ = 4;
        local_14 = 0;
        local_10 = 0;
        FArray::Realloc((FArray *)&local_18,2);
        local_4 = (uint)local_4._1_3_ << 8;
        TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_18);
        break;
      }
    }
    local_1c = *(int *)(local_1c + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 101611c0 FUN_101611c0

void FUN_101611c0(undefined4 *param_1)

{
  UObject *this;
  int iVar1;
  int in_ECX;
  FOutputDevice *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcf30;
  local_10 = ExceptionList;
  iVar1 = 0;
  local_8 = 0;
  this = (UObject *)*param_1;
  if ((this != (UObject *)0x0) && (*(int *)(this + 0x18) != *(int *)(in_ECX + 0x40))) {
    while( true ) {
      if (((*(int **)(in_ECX + 0x48))[1] <= iVar1) ||
         (*(int *)(**(int **)(in_ECX + 0x48) + iVar1 * 4) == *(int *)(this + 0x18))) break;
      iVar1 = iVar1 + 1;
    }
    if (iVar1 == *(int *)(*(int *)(in_ECX + 0x48) + 4)) {
      ExceptionList = &local_10;
      if (*(int *)(in_ECX + 0x38) == 0) {
        ExceptionList = &local_10;
        UObject::GetFullName(this,(ushort *)0x0);
        FOutputDevice::Logf(this_00,*(ushort **)(in_ECX + 0x3c));
      }
      UObject::GetFullName((UObject *)*param_1,(ushort *)0x0);
      FOutputDevice::Logf(*(FOutputDevice **)(in_ECX + 0x3c),
                          (ushort *)*(FOutputDevice **)(in_ECX + 0x3c));
      *(undefined4 *)(in_ECX + 0x38) = 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10161270 Catch@10161270

void Catch_10161270(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10161284 Catch@10161284

void Catch_10161284(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FArchiveShowReferences<<Obj");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101612e0 FUN_101612e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101612e0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcf40;
  local_10 = ExceptionList;
  local_8 = 0;
  UObject::GObjBeginLoadCount = UObject::GObjBeginLoadCount + 1;
  if (UObject::GObjBeginLoadCount == 1) {
    ExceptionList = &local_10;
    if (UObject::GAutoRegister != (UObject *)0x0) {
      ExceptionList = &local_10;
      appFailAssert("!GAutoRegister",".\\UnObj.cpp",0xc0a);
    }
    for (iVar1 = 0; iVar1 < DAT_103308a4; iVar1 = iVar1 + 1) {
      if (*(int *)(*(int *)(_GObjLoaders + iVar1 * 4) + 0x9c) == 0) {
        appFailAssert("GetLoader(i)->Success",".\\UnObj.cpp",0xc0c);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1016138c Catch@1016138c

void Catch_1016138c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 101613a0 Catch@101613a0

void Catch_101613a0(void)

{
  appUnwindf((ushort *)&DAT_101dae74,L"UObject::BeginLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161400 FUN_10161400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10161400(void)

{
  int iVar1;
  FScopeCriticalSection local_20 [4];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bcf58;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  FScopeCriticalSection::FScopeCriticalSection(local_20,UObject::GDissociateImportsCS);
  if (UObject::GImportCount != 0) {
    for (local_1c = 0; local_1c < DAT_103308a4; local_1c = local_1c + 1) {
      local_18 = 0;
      while( true ) {
        iVar1 = *(int *)(_GObjLoaders + local_1c * 4);
        if (*(int *)(iVar1 + 0x88) <= local_18) break;
        iVar1 = *(int *)(iVar1 + 0x84) + local_18 * 0x1c;
        if ((*(int *)(iVar1 + 0x10) != 0) &&
           ((*(uint *)(*(int *)(iVar1 + 0x10) + 0x1c) & 0x4000000) == 0)) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        local_18 = local_18 + 1;
      }
    }
  }
  UObject::GImportCount = 0;
  local_8 = local_8 & 0xffffff00;
  FScopeCriticalSection::~FScopeCriticalSection(local_20);
  ExceptionList = local_10;
  return;
}


// ==== 101614bb Catch@101614bb

void Catch_101614bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 101614cf Catch@101614cf

void Catch_101614cf(void)

{
  appUnwindf((ushort *)&DAT_101daf00,L"UObject::DissociateImports");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161530 FUN_10161530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10161530(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcf70;
  local_10 = ExceptionList;
  local_8 = 0;
  UObject::GSWObjBeginLoadCount = UObject::GSWObjBeginLoadCount + 2;
  if (UObject::GSWObjBeginLoadCount == 1) {
    ExceptionList = &local_10;
    if (UObject::GAutoRegister != (UObject *)0x0) {
      ExceptionList = &local_10;
      appFailAssert("!GAutoRegister",".\\UnObj.cpp",0xc9d);
    }
    for (iVar1 = 0; iVar1 < DAT_103308a4; iVar1 = iVar1 + 1) {
      if (*(int *)(*(int *)(_GObjLoaders + iVar1 * 4) + 0x9c) == 0) {
        appFailAssert("GetLoader(i)->Success",".\\UnObj.cpp",0xc9f);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101615e4 Catch@101615e4

void Catch_101615e4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 101615f8 Catch@101615f8

void Catch_101615f8(void)

{
  appUnwindf((ushort *)&DAT_101daf48,L"UObject::SWBeginLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161650 FUN_10161650

void FUN_10161650(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcf80;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_101287a0(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 101616a1 Catch@101616a1

void Catch_101616a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 101616b5 Catch@101616b5

void Catch_101616b5(void)

{
  appUnwindf((ushort *)&DAT_101db37c,L"UObject::AddToRoot");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161700 FUN_10161700

void FUN_10161700(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcf90;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10149350(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 10161751 Catch@10161751

void Catch_10161751(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10161765 Catch@10161765

void Catch_10161765(void)

{
  appUnwindf((ushort *)&DAT_101db384,L"UObject::RemoveFromRoot");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101617b0 FUN_101617b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101617b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  UObject *in_ECX;
  bool bVar3;
  FScopeCriticalSection local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bcfa8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = L2ThreadUtil::IsCurrentThread(&GThreadUtil,1);
  if (iVar1 == 0) {
    FScopeCriticalSection::FScopeCriticalSection(local_18,UObject::GLoadingCS);
    local_8._0_1_ = 1;
    iVar1 = param_1;
    if (param_1 == -1) {
      if (DAT_10330898 == 0) {
        iVar1 = thunk_FUN_10128230(1);
      }
      else {
        iVar1 = thunk_FUN_1015d870();
        if (*(int *)(_GObjObjects + iVar1 * 4) != 0) {
          appFailAssert("GObjObjects(InIndex)==NULL",".\\UnObj.cpp",0xfa7);
        }
      }
    }
    *(UObject **)(_GObjObjects + iVar1 * 4) = in_ECX;
    *(int *)(in_ECX + 4) = iVar1;
    if (*(int *)(in_ECX + 0x28) == -1) {
      *(uint *)(in_ECX + 0x28) = (uint)GMakeCacheIDIndex;
      bVar3 = 0xfffffffe < (uint)GMakeCacheIDIndex;
      GMakeCacheIDIndex._0_4_ = (uint)GMakeCacheIDIndex + 1;
      GMakeCacheIDIndex._4_4_ = GMakeCacheIDIndex._4_4_ + (uint)bVar3;
    }
    UObject::HashObject(in_ECX);
    local_8 = (uint)local_8._1_3_ << 8;
    FScopeCriticalSection::~FScopeCriticalSection(local_18);
  }
  else if (param_1 == -1) {
    uVar2 = thunk_FUN_101287a0(&param_1);
    *(undefined4 *)(in_ECX + 0x30) = uVar2;
    if (*(int *)(in_ECX + 0x28) == -1) {
      *(uint *)(in_ECX + 0x28) = (uint)GMakeCacheIDIndex;
      bVar3 = 0xfffffffe < (uint)GMakeCacheIDIndex;
      GMakeCacheIDIndex._0_4_ = (uint)GMakeCacheIDIndex + 1;
      GMakeCacheIDIndex._4_4_ = GMakeCacheIDIndex._4_4_ + (uint)bVar3;
    }
    UObject::HashObjectBuffer(in_ECX);
  }
  else {
    *(UObject **)(_GObjObjects + param_1 * 4) = in_ECX;
    *(int *)(in_ECX + 4) = param_1;
    if (*(int *)(in_ECX + 0x28) == -1) {
      *(uint *)(in_ECX + 0x28) = (uint)GMakeCacheIDIndex;
      bVar3 = 0xfffffffe < (uint)GMakeCacheIDIndex;
      GMakeCacheIDIndex._0_4_ = (uint)GMakeCacheIDIndex + 1;
      GMakeCacheIDIndex._4_4_ = GMakeCacheIDIndex._4_4_ + (uint)bVar3;
    }
    UObject::HashObject(in_ECX);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10161914 Catch@10161914

void Catch_10161914(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10161928 Catch@10161928

void Catch_10161928(void)

{
  appUnwindf((ushort *)&DAT_101db478,L"UObject::AddObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101619b0 FUN_101619b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101619b0(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bcfc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = FArchive::vftable;
  in_ECX[1] = 0x7b;
  in_ECX[2] = 2000;
  in_ECX[3] = 0x1e;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 1;
  in_ECX[9] = 1;
  in_ECX[10] = 1;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0xffffffff;
  *in_ECX = FArchiveTagUsed::vftable;
  in_ECX[0xe] = 0;
  local_8 = 1;
  DAT_10330868 = 0;
  thunk_FUN_1012b3e0(&UObject::PrivateStaticClass);
  while (local_28 < DAT_1033088c) {
    puVar1 = (uint *)(*(int *)(_GObjObjects + local_28 * 4) + 0x1c);
    *puVar1 = *puVar1 | 0x42;
    thunk_FUN_1012ae60();
  }
  for (iVar3 = 0; iVar3 < DAT_10327ae4; iVar3 = iVar3 + 1) {
    iVar2 = *(int *)(_Names + iVar3 * 4);
    if (iVar2 != 0) {
      puVar1 = (uint *)(iVar2 + 4);
      *puVar1 = *puVar1 | 2;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10161a9f Catch@10161a9f

void Catch_10161a9f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10161ab3 Catch@10161ab3

void Catch_10161ab3(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FArchiveTagUsed::FArchiveTagUsed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161b20 FUN_10161b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10161b20(int *param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)(_Names + *param_1 * 4) + 4);
  *puVar1 = *puVar1 & 0xfffffffd;
  return;
}


// ==== 10161b40 FUN_10161b40

void FUN_10161b40(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bcfe8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10161bb0 FUN_10161bb0

void FUN_10161bb0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  FOutputDevice *this;
  UObject *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd000;
  local_10 = ExceptionList;
  DAT_10330868 = DAT_10330868 + 1;
  this_00 = (UObject *)*param_1;
  if (this_00 != (UObject *)0x0) {
    if ((*(uint *)(this_00 + 0x1c) & 0x400) == 0) {
      if ((*(uint *)(this_00 + 0x1c) & 2) != 0) {
        local_8 = 0;
        ExceptionList = &local_10;
        *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) & 0xbffffffd;
        if (((byte)this_00[0x1c] & 0x40) == 0) {
          if (*(UObject **)(in_ECX + 0x38) != (UObject *)0x0) {
            UObject::GetFullName(*(UObject **)(in_ECX + 0x38),(ushort *)0x0);
          }
          UObject::GetFullName(this_00,(ushort *)0x0);
          FOutputDevice::Logf(this,(EName)GNull,(ushort *)0x2f8);
        }
        else {
          uVar1 = *(undefined4 *)(in_ECX + 0x38);
          *(UObject **)(in_ECX + 0x38) = this_00;
          (**(code **)(*(int *)this_00 + 0x2c))();
          if ((*(uint *)(this_00 + 0x1c) & 0x40000000) == 0) {
            UObject::GetFullName(this_00,(ushort *)0x0);
            FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
          }
          *(undefined4 *)(in_ECX + 0x38) = uVar1;
        }
      }
    }
    else {
      this_00 = (UObject *)0x0;
    }
  }
  *param_1 = this_00;
  ExceptionList = local_10;
  return;
}


// ==== 10161ca9 Catch@10161ca9

void Catch_10161ca9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10161cbd Catch@10161cbd

void Catch_10161cbd(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101cdb60,L"TestReach");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161d50 FUN_10161d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10161d50(void)

{
  UObject *this;
  uint uVar1;
  int *piVar2;
  FOutputDevice *this_00;
  int iVar3;
  FOutputDevice *in_ECX;
  FOutputDevice *this_01;
  int iVar4;
  FOutputDevice *local_24;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bd010;
  local_10 = ExceptionList;
  local_8 = 0;
  local_24 = (FOutputDevice *)0x0;
  if (DAT_1023fe50 != 0) {
    if (GLog != (undefined *)0x0) {
      ExceptionList = &local_10;
      FOutputDevice::Logf2(in_ECX,(EName)GLog,(ushort *)0x2f8);
    }
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  if (GLog != (undefined *)0x0) {
    ExceptionList = &local_10;
    FOutputDevice::Logf2(in_ECX,(EName)GLog,(ushort *)0x2f8);
  }
  thunk_FUN_101482e0();
  local_8 = local_8 & 0xffffff00;
  for (iVar4 = 0; iVar4 < DAT_1033088c; iVar4 = iVar4 + 1) {
    this = *(UObject **)(_GObjObjects + iVar4 * 4);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_24 = local_24 + (this != (UObject *)0x0);
    if (((this != (UObject *)0x0) && (uVar1 = *(uint *)(this + 0x1c), (uVar1 & 2) != 0)) &&
       ((((uVar1 & 0x4000000) == 0 && ((uVar1 & 0x800000) == 0)) || (GExitPurge != 0)))) {
      iVar3 = (**(code **)(*(int *)this + 100))();
      if (iVar3 != 0) {
        UObject::ConditionalDestroy(this);
      }
    }
    local_8 = 0;
  }
  for (iVar4 = 0; iVar4 < DAT_1033088c; iVar4 = iVar4 + 1) {
    local_8 = 6;
    piVar2 = *(int **)(_GObjObjects + iVar4 * 4);
    if (((piVar2 != (int *)0x0) && ((piVar2[7] & 2U) != 0)) && ((piVar2[7] & 0x4000000U) == 0)) {
      (**(code **)(*piVar2 + 0xc))();
    }
  }
  local_8 = 9;
  iVar4 = 0;
  while( true ) {
    if (DAT_10327ae4 <= iVar4) break;
    iVar3 = *(int *)(_Names + iVar4 * 4);
    if (((iVar3 != 0) && (this_00 = *(FOutputDevice **)(iVar3 + 4), ((uint)this_00 & 2) != 0)) &&
       (((uint)this_00 & 0x4000000) == 0)) {
      FOutputDevice::Logf(this_00,(EName)GNull,(ushort *)0x30a);
      FName::DeleteEntry(iVar4);
    }
    iVar4 = iVar4 + 1;
  }
  local_8 = 0;
  GL2GCState = 0;
  if (GLog != (undefined *)0x0) {
    thunk_FUN_101482e0();
    FOutputDevice::Logf2(this_01,(ushort *)GLog);
    if (GLog != (undefined *)0x0) {
      FOutputDevice::Logf2(local_24,(ushort *)GLog);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10161e4e Catch@10161e4e

void Catch_10161e4e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_101f843c);
}


// ==== 10161e62 Catch@10161e62

void Catch_10161e62(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101db734,L"DispatchDestroy");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x34),(ushort *)0x0);
  appUnwindf((ushort *)L"(%i: %s)",*(undefined4 *)(unaff_EBP + -0x24),puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10161ef4 Catch@10161ef4

void Catch_10161ef4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_101f843c);
}


// ==== 10161f08 Catch@10161f08

void Catch_10161f08(void)

{
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101db758,L"DeleteObject");
  appUnwindf((ushort *)L"(%i)",*(undefined4 *)(unaff_EBP + -0x28));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016200b Catch@1016200b

void Catch_1016200b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_101f843c);
}


// ==== 1016201f Catch@1016201f

void Catch_1016201f(void)

{
  appUnwindf((ushort *)&DAT_101db7bc,L"Names");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016203a Catch@1016203a

void Catch_1016203a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x5c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_101f843c);
}


// ==== 1016204e Catch@1016204e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Catch_1016204e(void)

{
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101db76c,L"DeleteGarbage");
  appUnwindf((ushort *)L"(%s)",*(int *)(_Names + *(int *)(unaff_EBP + -0x2c) * 4) + 0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10162083 Catch@10162083

void Catch_10162083(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x60);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_101f843c);
}


// ==== 10162097 Catch@10162097

void Catch_10162097(void)

{
  appUnwindf((ushort *)&DAT_101db750,L"DispatchDestroys");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101620b2 Catch@101620b2

void Catch_101620b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -100);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_101f843c);
}


// ==== 101620c6 Catch@101620c6

void Catch_101620c6(void)

{
  appUnwindf((ushort *)&DAT_101db88c,L"UObject::PurgeGarbage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101621d0 FUN_101621d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101621d0(ushort *param_1)

{
  int *piVar1;
  FString *pFVar2;
  FString *this;
  ushort *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int in_ECX;
  FString local_4c [12];
  FString local_40 [12];
  undefined2 *local_34;
  int local_30;
  int *local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bd038;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  local_8 = 0;
  if (param_1 != (ushort *)0x0) {
    ExceptionList = &local_10;
    local_18 = in_ECX;
    thunk_FUN_10119210(*(undefined4 *)(in_ECX + 0x24));
    while (piVar1 = local_24, local_24 != (int *)0x0) {
      if ((UClass *)local_24[6] != &UObject::PrivateStaticClass) {
        FString::FString((FString *)&local_34);
        local_8._0_1_ = 1;
        pFVar2 = (FString *)
                 FString::FString(local_4c,(ushort *)(*(int *)(_Names + piVar1[8] * 4) + 0xc));
        local_8._0_1_ = 2;
        this = (FString *)FString::operator+(pFVar2,(ushort *)local_40);
        local_8._0_1_ = 3;
        pFVar2 = (FString *)&local_34;
        puVar3 = FString::operator*(this);
        iVar4 = Parse(param_1,puVar3,pFVar2);
        local_8._0_1_ = 2;
        FString::~FString(local_40);
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_4c);
        if (iVar4 != 0) {
          puVar5 = local_34;
          if (local_30 == 0) {
            puVar5 = &DAT_101cdd44;
          }
          (**(code **)(*piVar1 + 0x9c))(puVar5,piVar1[0x15] + local_18,1);
        }
        local_8 = local_8 & 0xffffff00;
        FString::~FString((FString *)&local_34);
      }
      local_24 = (int *)piVar1[0xe];
      thunk_FUN_10114340();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10162304 Catch@10162304

void Catch_10162304(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10162318 Catch@10162318

void Catch_10162318(void)

{
  appUnwindf((ushort *)&DAT_101db8d4,L"ParseObjectParms");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10162390 FUN_10162390

void FUN_10162390(ushort *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd050;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::operator+=((FString *)(in_ECX + 0xc),param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101623e1 Catch@101623e1

void Catch_101623e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101623f5 Catch@101623f5

void Catch_101623f5(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101dbae0,L"UTextBuffer::Serialize");
  puVar1 = UObject::GetFullName((UObject *)(*(int *)(unaff_EBP + -0x18) + -0x34),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10162460 FUN_10162460

void FUN_10162460(FArchive *param_1)

{
  undefined4 uVar1;
  FArchive *pFVar2;
  UObject *in_ECX;
  UObject *pUVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd060;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  pUVar3 = in_ECX + 0x40;
  uVar1 = thunk_FUN_10130820(param_1,in_ECX + 0x38,in_ECX + 0x3c);
  pFVar2 = (FArchive *)thunk_FUN_10130820(uVar1);
  operator<<(pFVar2,(FString *)pUVar3);
  ExceptionList = local_10;
  return;
}


// ==== 101624d7 Catch@101624d7

void Catch_101624d7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101624eb Catch@101624eb

void Catch_101624eb(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101dbaf4,L"UTextBuffer::Serialize");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10162550 FUN_10162550

void FUN_10162550(FArchive *param_1)

{
  UField *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd070;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UField::Serialize(in_ECX,param_1);
  thunk_FUN_10132470(param_1,in_ECX + 0x40);
  ExceptionList = local_10;
  return;
}


// ==== 101625ad Catch@101625ad

void Catch_101625ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101625c1 Catch@101625c1

void Catch_101625c1(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101dbb20,L"UEnum::Serialize");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10162620 FUN_10162620

void FUN_10162620(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *in_ECX;
  int unaff_EBX;
  undefined2 *unaff_ESI;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  puStack_8 = &LAB_101bd0a0;
  pvStack_c = ExceptionList;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = (undefined4 *)0x2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (unaff_EBX == 0) {
    unaff_ESI = &DAT_101cdd44;
  }
  uVar2 = (**(code **)(*in_ECX + 0x68))(unaff_ESI);
  *local_4 = uVar2;
  local_10 = 3;
  FArray::Realloc((FArray *)&stack0xffffffdc,2);
  local_10 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffdc);
  ExceptionList = local_18;
  return;
}


// ==== 10162730 FUN_10162730

void FUN_10162730(FArchive *param_1)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd0c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1016277b Catch@1016277b

void Catch_1016277b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016278f Catch@1016278f

void Catch_1016278f(void)

{
  appUnwindf((ushort *)&DAT_101dbbf0,L"UPackage::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101627d0 FUN_101627d0

void FUN_101627d0(void)

{
  FString *this;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd0d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(UClass **)(in_ECX + 0x34) = &UTextBuffer::PrivateStaticClass;
  *(uint *)(in_ECX + 0x6c) = *(uint *)(in_ECX + 0x6c) & 0xfffffffe;
  *(uint *)(in_ECX + 0x6c) = *(uint *)(in_ECX + 0x6c) | 8;
  this = (FString *)thunk_FUN_101146f0(0xc,in_ECX + 0x60);
  if (this != (FString *)0x0) {
    FString::FString(this,(ushort *)L"txt;Text files");
  }
  ExceptionList = local_10;
  return;
}


// ==== 10162842 Catch@10162842

void Catch_10162842(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10162856 Catch@10162856

void Catch_10162856(void)

{
  appUnwindf((ushort *)&DAT_101dbcf4,L"UTextBufferFactory::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101628a0 FUN_101628a0

void FUN_101628a0(int param_1)

{
  byte bVar1;
  int in_ECX;
  undefined2 *local_28;
  int local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bd0e8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString((FString *)&local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (*(L2ParamStack **)(in_ECX + 0x34) != (L2ParamStack *)0x0) {
    if (local_24 == 0) {
      local_28 = &DAT_101cdd44;
    }
    L2ParamStack::PushBack(*(L2ParamStack **)(in_ECX + 0x34),local_28);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString((FString *)&local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10162956 Catch@10162956

void Catch_10162956(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016296a Catch@1016296a

void Catch_1016296a(void)

{
  appUnwindf((ushort *)&DAT_101dbd98,L"UParamStack::execPushString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101629c0 FUN_101629c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101629c0(ushort *param_1)

{
  int iVar1;
  ushort *puVar2;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd100;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = appStricmp(param_1,(ushort *)&UObject::GLanguage);
  if (iVar1 != 0) {
    appStrcpy((ushort *)&UObject::GLanguage,param_1);
    puVar2 = LocalizeGeneral((ushort *)L"None",(ushort *)L"Core",(ushort *)0x0);
    appStrcpy((ushort *)GNone,puVar2);
    puVar2 = LocalizeGeneral((ushort *)L"True",(ushort *)L"Core",(ushort *)0x0);
    appStrcpy((ushort *)GTrue,puVar2);
    puVar2 = LocalizeGeneral((ushort *)L"False",(ushort *)L"Core",(ushort *)0x0);
    appStrcpy((ushort *)GFalse,puVar2);
    puVar2 = LocalizeGeneral((ushort *)&DAT_101dbe14,(ushort *)L"Core",(ushort *)0x0);
    appStrcpy((ushort *)&GYes,puVar2);
    puVar2 = LocalizeGeneral((ushort *)&DAT_101dbe28,(ushort *)L"Core",(ushort *)0x0);
    appStrcpy((ushort *)&GNo,puVar2);
    thunk_FUN_1012b3e0(&UObject::PrivateStaticClass);
    while (local_20 < DAT_1033088c) {
      (**(code **)(**(int **)(_GObjObjects + local_20 * 4) + 0x54))();
      thunk_FUN_1012ae60();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10162aed Catch@10162aed

void Catch_10162aed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10162b01 Catch@10162b01

void Catch_10162b01(void)

{
  appUnwindf((ushort *)&DAT_101dbe30,L"UObject::SetLanguage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10162b80 FUN_10162b80

FArchive * FUN_10162b80(FArchive *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd110;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1015bde0(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 1));
    for (iVar2 = 0; iVar2 < param_2[1]; iVar2 = iVar2 + 1) {
      (**(code **)(*(int *)param_1 + 0x18))(*param_2 + iVar2 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_10128110(local_18);
    for (iVar2 = 0; iVar2 < local_18; iVar2 = iVar2 + 1) {
      uVar1 = thunk_FUN_10114a30(4,param_2);
      (**(code **)(*(int *)param_1 + 0x18))(uVar1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10162c36 Catch@10162c36

void Catch_10162c36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10162c4a Catch@10162c4a

void Catch_10162c4a(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10162ca0 FUN_10162ca0

void FUN_10162ca0(undefined4 *param_1,FArray *param_2)

{
  FString *this;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  int *in_ECX;
  ushort *puVar8;
  
  if (param_1[1] == 0) {
    puVar4 = &DAT_101cdd44;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
  }
  uVar5 = thunk_FUN_1014fa60(puVar4);
  for (iVar2 = *(int *)(in_ECX[3] + (uVar5 & in_ECX[4] - 1U) * 4); iVar2 != -1;
      iVar2 = *(int *)(iVar2 + *in_ECX)) {
    iVar2 = iVar2 * 0x1c;
    puVar1 = (undefined4 *)(iVar2 + 4 + *in_ECX);
    if (param_1[1] == 0) {
      puVar8 = &DAT_101cdd44;
    }
    else {
      puVar8 = (ushort *)*param_1;
    }
    if (puVar1[1] == 0) {
      puVar6 = &DAT_101cdd44;
    }
    else {
      puVar6 = (ushort *)*puVar1;
    }
    iVar7 = appStricmp(puVar6,puVar8);
    if (iVar7 == 0) {
      iVar3 = *(int *)(param_2 + 4);
      iVar7 = iVar3 + 1;
      *(int *)(param_2 + 4) = iVar7;
      if (*(int *)(param_2 + 8) < iVar7) {
        *(int *)(param_2 + 8) = ((int)(iVar7 * 3 + (iVar7 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar7;
        FArray::Realloc(param_2,0xc);
      }
      this = (FString *)(*(int *)param_2 + iVar3 * 0xc);
      if (this != (FString *)0x0) {
        FString::FString(this,(FString *)(iVar2 + 0x10 + *in_ECX));
      }
    }
  }
  return;
}


// ==== 10162dc0 FUN_10162dc0

void FUN_10162dc0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &UObject::PrivateStaticClass;
  in_ECX[1] = 0xffffffff;
  thunk_FUN_1012ae60();
  return;
}


// ==== 10162df0 FUN_10162df0

void FUN_10162df0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd128;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10162ed0 FUN_10162ed0

void FUN_10162ed0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd148;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10162fb0 FUN_10162fb0

void FUN_10162fb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &UState::PrivateStaticClass;
  in_ECX[1] = 0xffffffff;
  thunk_FUN_1012ae60();
  return;
}


// ==== 10162fd0 FUN_10162fd0

void FUN_10162fd0(byte param_1)

{
  FPreferencesInfo *in_ECX;
  
  FPreferencesInfo::~FPreferencesInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return;
}


// ==== 10163000 FUN_10163000

void FUN_10163000(byte param_1)

{
  FRegistryObjectInfo *in_ECX;
  
  FRegistryObjectInfo::~FRegistryObjectInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return;
}


// ==== 10163030 FUN_10163030

void FUN_10163030(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  FArray *this;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bd196;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  local_1c = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < local_1c) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < local_1c) {
    iVar1 = param_1 * 0x2c;
    local_1c = local_1c - param_1;
    do {
      this = (FArray *)(*(int *)in_ECX + iVar1);
      local_4._0_1_ = 3;
      local_4._1_3_ = 0;
      *(undefined4 *)(this + 0x1c) = 0;
      *(undefined4 *)(this + 0x20) = 0;
      FArray::Realloc(this + 0x18,2);
      local_4._0_1_ = 1;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(this + 0x18));
      local_4._0_1_ = 4;
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0x14) = 0;
      FArray::Realloc(this + 0xc,2);
      local_4 = (uint)local_4._1_3_ << 8;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(this + 0xc));
      local_4 = 5;
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 *)(this + 8) = 0;
      FArray::Realloc(this,2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)this);
      iVar1 = iVar1 + 0x2c;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x2c);
  ExceptionList = local_c;
  return;
}


// ==== 101631e0 FUN_101631e0

void FUN_101631e0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_1 + param_2;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x3c;
    iVar2 = iVar2 - param_1;
    do {
      FRegistryObjectInfo::~FRegistryObjectInfo((FRegistryObjectInfo *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x3c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x3c);
  return;
}


// ==== 101632f0 FUN_101632f0

void FUN_101632f0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd1b8;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101633d0 FUN_101633d0

void FUN_101633d0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd1d8;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101634b0 FUN_101634b0

void FUN_101634b0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd206;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x10));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10163510 FUN_10163510

void FUN_10163510(ushort *param_1,ushort *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bd236;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0x10),param_2);
  ExceptionList = local_c;
  return;
}


// ==== 10163590 FUN_10163590

void FUN_10163590(ushort *param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bd25b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  *(undefined4 *)(in_ECX + 0x10) = *param_2;
  ExceptionList = local_c;
  return;
}


// ==== 10163600 FUN_10163600

void FUN_10163600(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd27b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10163650 FUN_10163650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * FUN_10163650(UObject *param_1)

{
  UClass *pUVar1;
  
  if (param_1 != (UObject *)0x0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &ULinkerLoad::PrivateStaticClass) {
        return param_1;
      }
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  FOutputDevice::Logf((FOutputDevice *)(*(int *)(_Names + DAT_10331dd8 * 4) + 0xc),(ushort *)GError)
  ;
  return param_1;
}


// ==== 101636c0 FUN_101636c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * FUN_101636c0(UObject *param_1)

{
  UClass *pUVar1;
  
  if (param_1 != (UObject *)0x0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &ULinkerLoad::PrivateStaticClass) {
        return param_1;
      }
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  FOutputDevice::Logf((FOutputDevice *)(*(int *)(_Names + DAT_10331dd8 * 4) + 0xc),(ushort *)GError)
  ;
  return param_1;
}


// ==== 10163730 FUN_10163730

void FUN_10163730(UObject *param_1)

{
  UObject *in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd290;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)in_ECX = UObject::vftable;
  local_8 = 0;
  UObject::GObjCurCount = UObject::GObjCurCount + 1;
  UObject::GObjNewCount = UObject::GObjNewCount + 1;
  if (UObject::GObjPeakCount < UObject::GObjCurCount) {
    UObject::GObjPeakCount = UObject::GObjCurCount;
  }
  if (param_1 == (UObject *)0x0) {
    appFailAssert("&Src",".\\UnObj.cpp",0x51);
  }
  if (*(int *)(param_1 + 0x24) != *(int *)(in_ECX + 0x24)) {
    UObject::GetFullName(param_1,(ushort *)0x0);
    UObject::GetFullName(in_ECX,(ushort *)0x0);
    FOutputDevice::Logf(this,(ushort *)GError);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101637e7 Catch@101637e7

void Catch_101637e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101637fb Catch@101637fb

void Catch_101637fb(void)

{
  appUnwindf((ushort *)&DAT_101d8fcc,L"UObject::UObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10163850 FUN_10163850

void FUN_10163850(UObject *param_1)

{
  UObject *in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd2a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("&Src",".\\UnObj.cpp",0xbb);
  }
  if (*(int *)(param_1 + 0x24) != *(int *)(in_ECX + 0x24)) {
    UObject::GetFullName(param_1,(ushort *)0x0);
    UObject::GetFullName(in_ECX,(ushort *)0x0);
    FOutputDevice::Logf(this,(ushort *)GError);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101638df Catch@101638df

void Catch_101638df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101638f3 Catch@101638f3

void Catch_101638f3(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d9188,L"UObject::operator=");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10163960 FUN_10163960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10163960(void)

{
  int iVar1;
  int iVar2;
  UObject *in_ECX;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd2b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = L2ThreadUtil::IsCurrentThread(&GThreadUtil,1);
  if (iVar1 == 0) {
    if (in_ECX != (UObject *)0x0) {
      iVar1 = *(int *)(in_ECX + 4);
      iVar2 = FArray::IsValidIndex((FArray *)&UObject::GObjObjects,iVar1);
      if (iVar2 == 0) {
        if (GLog == (undefined *)0x0) {
          ExceptionList = local_10;
          return 0;
        }
        FOutputDevice::Logf2(this_00,(EName)GLog,(ushort *)0x2ff);
        if (GLog == (undefined *)0x0) {
          ExceptionList = local_10;
          return 0;
        }
        UObject::GetFullName(in_ECX,(ushort *)0x0);
        FOutputDevice::Logf2(this_01,(EName)GLog,(ushort *)0x2ff);
        ExceptionList = local_10;
        return 0;
      }
      if (*(int *)(_GObjObjects + iVar1 * 4) == 0) {
        if (GLog == (undefined *)0x0) {
          ExceptionList = local_10;
          return 0;
        }
        FOutputDevice::Logf2(this_00,(EName)GLog,(ushort *)0x2ff);
        if (GLog == (undefined *)0x0) {
          ExceptionList = local_10;
          return 0;
        }
        UObject::GetFullName(in_ECX,(ushort *)0x0);
        FOutputDevice::Logf2((FOutputDevice *)GLog,(EName)GLog,(ushort *)0x2ff);
        ExceptionList = local_10;
        return 0;
      }
      if (*(UObject **)(_GObjObjects + iVar1 * 4) == in_ECX) {
        ExceptionList = local_10;
        return 1;
      }
      if (GLog == (undefined *)0x0) {
        ExceptionList = local_10;
        return 0;
      }
      FOutputDevice::Logf2(this_00,(EName)GLog,(ushort *)0x2ff);
      if (GLog == (undefined *)0x0) {
        ExceptionList = local_10;
        return 0;
      }
      UObject::GetFullName(in_ECX,(ushort *)0x0);
      FOutputDevice::Logf2(this_02,(EName)GLog,(ushort *)0x2ff);
      if (GLog == (undefined *)0x0) {
        ExceptionList = local_10;
        return 0;
      }
      UObject::GetFullName(*(UObject **)(_GObjObjects + *(int *)(in_ECX + 4) * 4),(ushort *)0x0);
      FOutputDevice::Logf2((FOutputDevice *)GLog,(EName)GLog,(ushort *)0x2ff);
      ExceptionList = local_10;
      return 0;
    }
  }
  else if (in_ECX != (UObject *)0x0) {
    ExceptionList = local_10;
    return 1;
  }
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this,(EName)GLog,(ushort *)0x2ff);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10163b7a Catch@10163b7a

void Catch_10163b7a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10163b8e Catch@10163b8e

void Catch_10163b8e(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d92f4,L"UObject::IsValid");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10163c60 FUN_10163c60

void FUN_10163c60(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd2c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x20000000;
  if ((*(uint *)(in_ECX + 0x1c) & 0x100) != 0) {
    UObject::LoadLocalized(in_ECX);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10163cb8 Catch@10163cb8

void Catch_10163cb8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10163ccc Catch@10163ccc

void Catch_10163ccc(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d9308,L"UObject::PostLoad");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10163d30 FUN_10163d30

void FUN_10163d30(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd2d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x20))();
  ExceptionList = local_10;
  return;
}


// ==== 10163d7a Catch@10163d7a

void Catch_10163d7a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10163d8e Catch@10163d8e

void Catch_10163d8e(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d931c,L"UObject::PostEditChange");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10163df0 FUN_10163df0

void FUN_10163df0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd2e0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x10) != 0) {
    ExceptionList = &local_10;
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0x10) + 0x90) + 0x1c + *(int *)(in_ECX + 0x14) * 0x24)
        == 0) {
      ExceptionList = &local_10;
      appFailAssert("_Linker->ExportMap(_LinkerIndex)._Object!=NULL",".\\UnObj.cpp",0x15e);
    }
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0x10) + 0x90) + 0x1c + *(int *)(in_ECX + 0x14) * 0x24)
        != in_ECX) {
      appFailAssert("_Linker->ExportMap(_LinkerIndex)._Object==this",".\\UnObj.cpp",0x15f);
    }
    *(undefined4 *)
     (*(int *)(*(int *)(in_ECX + 0x10) + 0x90) + 0x1c + *(int *)(in_ECX + 0x14) * 0x24) = 0;
  }
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  *(undefined4 *)(in_ECX + 0x14) = param_2;
  ExceptionList = local_10;
  return;
}


// ==== 10163eb7 Catch@10163eb7

void Catch_10163eb7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10163ecb Catch@10163ecb

void Catch_10163ecb(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d93bc,L"UObject::SetLinker");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10163f50 FUN_10163f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10163f50(void)

{
  UObject *pUVar1;
  int iVar2;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd2f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)in_ECX = UObject::vftable;
  local_8 = 0;
  pUVar1 = in_ECX + 4;
  if (((*(int *)pUVar1 != -1) && (UObject::GObjInitialized != 0)) && (GIsCriticalError == 0)) {
    iVar2 = UObject::IsValid(in_ECX);
    if (iVar2 == 0) {
      appFailAssert("IsValid()",".\\UnObj.cpp",0x1e1);
    }
    UObject::ConditionalDestroy(in_ECX);
    iVar2 = L2ThreadUtil::IsCurrentThread(&GThreadUtil,1);
    if (iVar2 == 0) {
      UObject::UnhashObject(in_ECX,*(int *)(in_ECX + 0x14));
      *(undefined4 *)(_GObjObjects + *(int *)pUVar1 * 4) = 0;
    }
    else {
      if (in_ECX != *(UObject **)(_GObjObjects + *(int *)pUVar1 * 4)) {
        if (in_ECX == *(UObject **)(_GObjObjectsBuffer + *(int *)(in_ECX + 0x30) * 4)) {
          UObject::UnhashObjectBuffer(in_ECX,*(int *)(in_ECX + 0x14));
          *(undefined4 *)(_GObjObjectsBuffer + *(int *)(in_ECX + 0x30) * 4) = 0;
        }
        else if (GLog != (undefined *)0x0) {
          FOutputDevice::Logf2(_GObjObjects,(ushort *)GLog);
        }
        goto LAB_1016406c;
      }
      UObject::UnhashObject(in_ECX,*(int *)(in_ECX + 0x14));
      *(undefined4 *)(_GObjObjects + *(int *)pUVar1 * 4) = 0;
    }
    thunk_FUN_101492e0(pUVar1);
  }
LAB_1016406c:
  if (*(int *)(in_ECX + 0xc) != 0) {
    thunk_FUN_101088c0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10164094 Catch@10164094

void Catch_10164094(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101640a8 Catch@101640a8

void Catch_101640a8(void)

{
  appUnwindf((ushort *)&DAT_101d9534,L"UObject::~UObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164130 FUN_10164130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10164130(int param_1,ushort *param_2,int param_3)

{
  FOutputDevice *this;
  
  appSpc(param_3);
  FOutputDevice::Logf(this,param_2);
  thunk_FUN_1012ae60();
  while (-1 < DAT_1033088c) {
    if (*(int *)(*(int *)(_GObjObjects + -4) + 0x34) == param_1) {
      FUN_10164130(*(int *)(_GObjObjects + -4),param_2,param_3 + 2);
    }
    thunk_FUN_1012ae60();
  }
  return;
}


// ==== 101641f0 FUN_101641f0

void FUN_101641f0(byte param_1)

{
  UObject *in_ECX;
  
  UObject::~UObject(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return;
}


// ==== 10164220 FUN_10164220

UObject * FUN_10164220(byte param_1)

{
  UObject *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UObject::~UObject);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UObject::~UObject(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10164290 FUN_10164290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10164290(void)

{
  void *_Src;
  int iVar1;
  FOutputDevice *this;
  int iVar2;
  int local_44;
  int local_40;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd308;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  if (UObject::GObjBeginLoadCount < 1) {
    ExceptionList = &pvStack_10;
    appFailAssert("GObjBeginLoadCount>0",".\\UnObj.cpp",0xc17);
  }
  UObject::GObjBeginLoadCount = UObject::GObjBeginLoadCount + -1;
  if (UObject::GObjBeginLoadCount == 0) {
    local_8._0_1_ = 1;
    thunk_FUN_101281e0();
    while (local_8._0_1_ = 2, DAT_10330880 != 0) {
      do {
        iVar2 = DAT_10330880;
        _Src = _GObjLoaded;
        iVar1 = thunk_FUN_10128230(DAT_10330880);
        _memcpy((void *)(local_44 + iVar1 * 4),_Src,iVar2 * 4);
        thunk_FUN_10128110(0);
        local_8 = CONCAT31(local_8._1_3_,3);
        FOutputDevice::Logf(this,(EName)GNull,(ushort *)0x308);
        for (iVar2 = 0; iVar2 < local_40; iVar2 = iVar2 + 1) {
          iVar1 = *(int *)(local_44 + iVar2 * 4);
          if ((*(uint *)(iVar1 + 0x1c) & 0x200) != 0) {
            if (*(int *)(iVar1 + 0x10) == 0) {
              appFailAssert("Obj->GetLinker()",".\\UnObj.cpp",0xc41);
            }
            (**(code **)(*(int *)(*(int *)(iVar1 + 0x10) + 0xc0) + 0x10))(iVar1);
          }
        }
        local_8._0_1_ = 2;
        local_8._1_3_ = 0;
        if (UObject::LoadingProgress != (_func_void_float *)0x0) {
          (*UObject::LoadingProgress)(0.0);
        }
      } while (DAT_10330880 != 0);
      local_8 = CONCAT31(local_8._1_3_,5);
      for (iVar2 = 0; iVar2 < local_40; iVar2 = iVar2 + 1) {
        UObject::ConditionalPostLoad(*(UObject **)(local_44 + iVar2 * 4));
      }
      local_8._1_3_ = 0;
    }
    UObject::DissociateImports();
    local_8 = CONCAT31(local_8._1_3_,1);
    thunk_FUN_10118970();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101643f7 Catch@101643f7

void Catch_101643f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1016440b Catch@1016440b

void Catch_1016440b(void)

{
  appUnwindf((ushort *)&DAT_101daef0,L"PostLoadObjects");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164426 Catch@10164426

void Catch_10164426(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1016443a Catch@1016443a

void Catch_1016443a(void)

{
  appUnwindf((ushort *)&DAT_101daee8,L"PreLoadObjects");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164486 Catch@10164486

undefined1 * Catch_10164486(void)

{
  int unaff_EBP;
  
  FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return &LAB_1016446d;
}


// ==== 101644a6 Catch@101644a6

void Catch_101644a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 101644ba Catch@101644ba

void Catch_101644ba(void)

{
  appUnwindf((ushort *)&DAT_101daef8,L"UObject::EndLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164570 FUN_10164570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10164570(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ULinkerLoad *this;
  int *piVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd320;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar3 = DAT_103308a4;
  ExceptionList = &local_10;
  while (iVar3 = iVar3 + -1, iVar5 = DAT_103308a4, -1 < iVar3) {
    this = (ULinkerLoad *)thunk_FUN_101636c0(*(undefined4 *)(_GObjLoaders + iVar3 * 4));
    if ((param_1 == 0) || (*(int *)(this + 0x34) == param_1)) {
      if (param_2 == 0) {
        if (param_3 != 0) {
          ULinkerLoad::DetachAllLazyLoaders(this,1);
        }
      }
      else {
        for (iVar5 = 0; iVar5 < *(int *)(this + 0x94); iVar5 = iVar5 + 1) {
          piVar4 = (int *)(*(int *)(this + 0x90) + 0x1c + iVar5 * 0x24);
          if ((*piVar4 != 0) && ((*(byte *)(*(int *)(*piVar4 + 0x24) + 0x4a4) & 0x80) == 0)) {
            ULinkerLoad::DetachExport(this,iVar5);
          }
        }
      }
    }
    else {
      for (iVar5 = 0; iVar5 < *(int *)(this + 0x88); iVar5 = iVar5 + 1) {
        iVar2 = iVar5 * 0x1c;
        iVar1 = *(int *)(*(int *)(this + 0x84) + 0x14 + iVar2);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x34) == param_1)) {
          *(undefined4 *)(*(int *)(this + 0x84) + 0x14 + iVar2) = 0;
          *(undefined4 *)(*(int *)(this + 0x84) + 0x18 + iVar2) = 0xffffffff;
        }
      }
    }
  }
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    piVar4 = (int *)thunk_FUN_101636c0(*(undefined4 *)(_GObjLoaders + iVar5 * 4));
    if ((((param_1 == 0) || (piVar4[0xd] == param_1)) && (param_2 == 0)) && (piVar4 != (int *)0x0))
    {
      (**(code **)(*piVar4 + 0xc))(1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101646cf Catch@101646cf

void Catch_101646cf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 101646e3 Catch@101646e3

void Catch_101646e3(void)

{
  appUnwindf((ushort *)&DAT_101daf7c,L"UObject::ResetLoaders");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164770 FUN_10164770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10164770(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int local_24;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd330;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10162b80(param_1,&UObject::GObjRoot);
  thunk_FUN_1012b3e0(&UObject::PrivateStaticClass);
  iVar2 = _GObjObjects;
  while (local_24 < DAT_1033088c) {
    iVar1 = *(int *)(iVar2 + local_24 * 4);
    if (((*(uint *)(iVar1 + 0x1c) & param_2) != 0) &&
       ((*(uint *)(iVar1 + 0x1c) & param_3) == param_3)) {
      local_18 = *(undefined4 *)(iVar2 + local_24 * 4);
      (**(code **)(*param_1 + 0x18))(&local_18);
      iVar2 = _GObjObjects;
    }
    thunk_FUN_1012ae60();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1016481a Catch@1016481a

void Catch_1016481a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1016482e Catch@1016482e

void Catch_1016482e(void)

{
  appUnwindf((ushort *)&DAT_101db6e4,L"UObject::SerializeRootSet");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164880 FUN_10164880

void FUN_10164880(ulong param_1)

{
  undefined1 *puVar1;
  FOutputDevice *in_ECX;
  FArchive local_58 [68];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bd348;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffff9c;
  if (GLog != (undefined *)0x0) {
    ExceptionList = &local_10;
    FOutputDevice::Logf2(in_ECX,(EName)GLog,(ushort *)0x2f8);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  thunk_FUN_101619b0();
  local_8._0_1_ = 1;
  UObject::SerializeRootSet(local_58,param_1,0x40);
  UObject::PurgeGarbage();
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_1015b400();
  ExceptionList = local_10;
  return;
}


// ==== 1016490b Catch@1016490b

void Catch_1016490b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016491f Catch@1016491f

void Catch_1016491f(void)

{
  appUnwindf((ushort *)&DAT_101db8bc,L"UObject::CollectGarbage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164970 FUN_10164970

uint FUN_10164970(int *param_1,ulong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  FArchive local_58 [68];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bd368;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  iVar1 = *param_1;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    ExceptionList = &local_10;
    *param_1 = 0;
  }
  thunk_FUN_101619b0();
  local_8._0_1_ = 1;
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xffffffbf;
  UObject::SerializeRootSet(local_58,param_2,0x40);
  *param_1 = iVar1;
  uVar2 = *(uint *)(iVar1 + 0x1c);
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_1015b400();
  ExceptionList = local_10;
  return ~(uVar2 >> 1) & 1;
}


// ==== 101649f8 Catch@101649f8

void Catch_101649f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10164a0c Catch@10164a0c

void Catch_10164a0c(void)

{
  appUnwindf((ushort *)&DAT_101db8c4,L"UObject::RefCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164a60 FUN_10164a60

undefined4 FUN_10164a60(UObject **param_1,ulong param_2,int param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd380;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(uint *)(*param_1 + 0x1c) & 0x4000000) == 0) {
    ExceptionList = &local_10;
    iVar1 = UObject::IsReferenced(param_1,param_2,param_3);
    if (iVar1 == 0) {
      UObject::PurgeGarbage();
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10164ad9 Catch@10164ad9

void Catch_10164ad9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10164aed Catch@10164aed

void Catch_10164aed(void)

{
  appUnwindf((ushort *)&DAT_101db8cc,L"UObject::AttemptDelete");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164b40 FUN_10164b40

void FUN_10164b40(ushort *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd3a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = UObject::vftable;
  UObject::GObjNewCount = UObject::GObjNewCount + 1;
  UObject::GObjCurCount = UObject::GObjCurCount + 1;
  if (UObject::GObjPeakCount < UObject::GObjCurCount) {
    UObject::GObjPeakCount = UObject::GObjCurCount;
  }
  local_4 = 0;
  in_ECX[0xd] = FOutputDevice::vftable;
  *in_ECX = UTextBuffer::vftable_for_UObject_;
  in_ECX[0xd] = UTextBuffer::vftable_for_FOutputDevice_;
  FString::FString((FString *)(in_ECX + 0x10),param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10164bf0 FUN_10164bf0

void FUN_10164bf0(UField *param_1)

{
  UField *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bd3db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UField::UField(in_ECX,param_1);
  *(undefined ***)in_ECX = UEnum::vftable;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10164c70 FUN_10164c70

void FUN_10164c70(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_101bd492;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = UObject::vftable;
  UObject::GObjNewCount = UObject::GObjNewCount + 1;
  UObject::GObjCurCount = UObject::GObjCurCount + 1;
  if (UObject::GObjPeakCount < UObject::GObjCurCount) {
    UObject::GObjPeakCount = UObject::GObjCurCount;
  }
  *in_ECX = UCommandlet::vftable;
  uStack_3 = 0;
  local_4 = 0xc;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x19,0xc,0x10,FStringNoInit::FStringNoInit,FStringNoInit::~FStringNoInit);
  _local_4 = CONCAT31(uStack_3,0xd);
  _eh_vector_constructor_iterator_
            (in_ECX + 0x49,0xc,0x10,FStringNoInit::FStringNoInit,FStringNoInit::~FStringNoInit);
  ExceptionList = local_c;
  return;
}


// ==== 10164d80 FUN_10164d80

int FUN_10164d80(ushort *param_1)

{
  int iVar1;
  UCommandlet *in_ECX;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bd4d8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_28,param_1);
  local_8._0_1_ = 1;
  iVar1 = UCommandlet::eventMain(in_ECX,local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return iVar1;
}


// ==== 10164de8 Catch@10164de8

void Catch_10164de8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10164dfc Catch@10164dfc

void Catch_10164dfc(void)

{
  appUnwindf((ushort *)&DAT_101dbbc8,L"UCommandlet::Main");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164e40 FUN_10164e40

void FUN_10164e40(void)

{
  UPackage *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd4f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)in_ECX = UObject::vftable;
  UObject::GObjCurCount = UObject::GObjCurCount + 1;
  UObject::GObjNewCount = UObject::GObjNewCount + 1;
  if (UObject::GObjPeakCount < UObject::GObjCurCount) {
    UObject::GObjPeakCount = UObject::GObjCurCount;
  }
  *(undefined ***)in_ECX = UPackage::vftable;
  local_8 = 1;
  UObject::BindPackage(in_ECX);
  *(undefined4 *)(in_ECX + 0x40) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10164eca Catch@10164eca

void Catch_10164eca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10164ede Catch@10164ede

void Catch_10164ede(void)

{
  appUnwindf((ushort *)&DAT_101dbbe8,L"UPackage::UPackage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10164f30 FUN_10164f30

void FUN_10164f30(void)

{
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd518;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10163030(0,in_ECX[1]);
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*in_ECX);
  }
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10164fc0 FUN_10164fc0

void FUN_10164fc0(undefined4 param_1)

{
  FArray *in_ECX;
  FArray *this;
  int local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bd566;
  local_c = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    local_1c = 0;
    ExceptionList = &local_c;
    do {
      this = (FArray *)(*(int *)in_ECX + local_1c);
      local_4._0_1_ = 3;
      local_4._1_3_ = 0;
      *(undefined4 *)(this + 0x1c) = 0;
      *(undefined4 *)(this + 0x20) = 0;
      FArray::Realloc(this + 0x18,2);
      local_4._0_1_ = 1;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(this + 0x18));
      local_4._0_1_ = 4;
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0x14) = 0;
      FArray::Realloc(this + 0xc,2);
      local_4 = (uint)local_4._1_3_ << 8;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(this + 0xc));
      local_4 = 5;
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 *)(this + 8) = 0;
      FArray::Realloc(this,2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)this);
      local_1c = local_1c + 0x2c;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,0x2c);
  ExceptionList = local_c;
  return;
}


// ==== 10165100 FUN_10165100

void FUN_10165100(void)

{
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd588;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_101631e0(0,in_ECX[1]);
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*in_ECX);
  }
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10165190 FUN_10165190

void FUN_10165190(undefined4 param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      FRegistryObjectInfo::~FRegistryObjectInfo((FRegistryObjectInfo *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x3c;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,0x3c);
  return;
}


// ==== 101651f0 FUN_101651f0

void FUN_101651f0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd5b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_1015db50();
  ExceptionList = local_c;
  return;
}


// ==== 10165260 FUN_10165260

void FUN_10165260(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd5c8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)GMalloc + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_101632f0();
  ExceptionList = pvStack_c;
  return;
}


// ==== 101652e0 FUN_101652e0

void FUN_101652e0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd5f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_1015dcd0();
  ExceptionList = local_c;
  return;
}


// ==== 10165350 FUN_10165350

void FUN_10165350(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd608;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)GMalloc + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_101633d0();
  ExceptionList = pvStack_c;
  return;
}


// ==== 101653d0 FUN_101653d0

undefined4 * FUN_101653d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,0x1c);
  }
  if (*(int *)in_ECX + iVar2 * 0x1c == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)thunk_FUN_10163510(param_1,param_2);
  }
  if (puVar3[2] == 0) {
    puVar4 = &DAT_101cdd44;
  }
  else {
    puVar4 = (undefined2 *)puVar3[1];
  }
  uVar5 = thunk_FUN_1014fa60(puVar4);
  uVar5 = uVar5 & *(int *)(in_ECX + 0x10) - 1U;
  *puVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar5 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar5 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_1015dfd0();
  }
  return puVar3 + 4;
}


// ==== 101654b0 FUN_101654b0

undefined4 * FUN_101654b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,0x14);
  }
  if (*(int *)in_ECX + iVar2 * 0x14 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)thunk_FUN_10163590(param_1,param_2);
  }
  if (puVar3[2] == 0) {
    puVar4 = &DAT_101cdd44;
  }
  else {
    puVar4 = (undefined2 *)puVar3[1];
  }
  uVar5 = thunk_FUN_1014fa60(puVar4);
  uVar5 = uVar5 & *(int *)(in_ECX + 0x10) - 1U;
  *puVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar5 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar5 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_1015dee0();
  }
  return puVar3 + 4;
}


// ==== 10165580 FUN_10165580

void FUN_10165580(byte param_1)

{
  thunk_FUN_101634b0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return;
}


// ==== 101655b0 FUN_101655b0

void FUN_101655b0(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd62b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10165620 FUN_10165620

void FUN_10165620(void)

{
  ULinker *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bd682;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULinker::ULinker(in_ECX);
  *(undefined ***)(in_ECX + 0xc0) = FArchive::vftable;
  *(undefined4 *)(in_ECX + 0xc4) = 0x7b;
  *(undefined4 *)(in_ECX + 200) = 2000;
  *(undefined4 *)(in_ECX + 0xcc) = 0x1e;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 1;
  *(undefined4 *)(in_ECX + 0xe4) = 1;
  *(undefined4 *)(in_ECX + 0xe8) = 1;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0xffffffff;
  *(undefined ***)in_ECX = ULinkerSave::vftable;
  *(undefined ***)(in_ECX + 0xc0) = ULinkerSave::vftable;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  *(undefined4 *)(in_ECX + 0x104) = 0;
  *(undefined4 *)(in_ECX + 0x108) = 0;
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  *(undefined4 *)(in_ECX + 0x110) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10165750 FUN_10165750

void FUN_10165750(void)

{
  undefined4 uVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd6a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x80000000;
  UObject::ExitProperties((uchar *)in_ECX,*(UClass **)(in_ECX + 0x24));
  UObject::SetLinker(in_ECX,(ULinkerLoad *)0x0,-1);
  if (*(int *)(in_ECX + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x18) + 4);
  }
  *(undefined4 *)(in_ECX + 0x14) = uVar1;
  UObject::GObjCurCount = UObject::GObjCurCount + -1;
  ExceptionList = local_10;
  return;
}


// ==== 101657cc Catch@101657cc

void Catch_101657cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101657e0 Catch@101657e0

void Catch_101657e0(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d9330,L"UObject::Destroy");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10165850 FUN_10165850

void FUN_10165850(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bd6b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_101651f0();
  ExceptionList = local_c;
  return;
}


// ==== 101658a0 FUN_101658a0

void FUN_101658a0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd6d8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10165260();
  ExceptionList = local_c;
  return;
}


// ==== 101658f0 FUN_101658f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101658f0(undefined4 param_1)

{
  uint *puVar1;
  FArchive *in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_101bd6f8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined ***)in_ECX = FArchive::vftable;
  *(undefined4 *)(in_ECX + 4) = 0x7b;
  *(undefined4 *)(in_ECX + 8) = 2000;
  *(undefined4 *)(in_ECX + 0xc) = 0x1e;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 1;
  *(undefined4 *)(in_ECX + 0x24) = 1;
  *(undefined4 *)(in_ECX + 0x28) = 1;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0xffffffff;
  local_c = 0;
  *(undefined ***)in_ECX = FArchiveTraceRoute::vftable;
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  thunk_FUN_1012ae60();
  while (-1 < DAT_1033088c) {
    puVar1 = (uint *)(*(int *)(_GObjObjects + -4) + 0x1c);
    *puVar1 = *puVar1 | 0x10;
    thunk_FUN_1012ae60();
  }
  UObject::SerializeRootSet(in_ECX,0x4000000,0);
  thunk_FUN_1012ae60();
  while (-1 < DAT_1033088c) {
    puVar1 = (uint *)(*(int *)(_GObjObjects + -4) + 0x1c);
    *puVar1 = *puVar1 & 0xffffffef;
    thunk_FUN_1012ae60();
  }
  ExceptionList = local_14;
  return;
}


// ==== 10165aa0 FUN_10165aa0

void FUN_10165aa0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd718;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10165b90 FUN_10165b90

undefined4 * FUN_10165b90(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,0x10);
  }
  puVar4 = (undefined4 *)(iVar2 * 0x10 + *(int *)in_ECX);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = *param_1;
    puVar4[2] = *param_2;
    puVar4[3] = param_2[1];
  }
  if (puVar4[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(puVar4[1] + 4);
  }
  uVar3 = *(int *)(in_ECX + 0x10) - 1U & uVar3;
  *puVar4 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar3 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar3 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_1015dcd0();
  }
  return puVar4 + 2;
}


// ==== 10165c60 FUN_10165c60

int FUN_10165c60(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar3 + 4);
  }
  iVar4 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar2) * 4);
  if (iVar4 != -1) {
    iVar1 = *in_ECX;
    do {
      piVar5 = (int *)(iVar4 * 0x10 + iVar1);
      if (piVar5[1] == iVar3) {
        iVar4 = iVar4 * 0x10;
        *(undefined4 *)(iVar1 + 8 + iVar4) = *param_2;
        *(undefined4 *)(iVar1 + 0xc + iVar4) = param_2[1];
        return iVar4 + 8 + *in_ECX;
      }
      iVar4 = *piVar5;
    } while (iVar4 != -1);
  }
  iVar3 = thunk_FUN_10165b90(param_1,param_2);
  return iVar3;
}


// ==== 10165d00 FUN_10165d00

void FUN_10165d00(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*param_1 != 0) {
    piVar3 = (int *)thunk_FUN_1015d9b0(param_1);
    if ((piVar3 == (int *)0x0) || (*(int *)(in_ECX + 0x3c) < *piVar3)) {
      local_8 = *(undefined4 *)(in_ECX + 0x3c);
      local_4 = *(undefined4 *)(in_ECX + 0x40);
      thunk_FUN_10165c60(param_1,&local_8);
    }
    iVar1 = *param_1;
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x1c) & 0x10) != 0)) {
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xffffffef;
      iVar1 = *param_1;
      uVar2 = *(undefined4 *)(in_ECX + 0x40);
      *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + 1;
      *(int *)(in_ECX + 0x40) = iVar1;
      (**(code **)(*(int *)*param_1 + 0x2c))();
      *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + -1;
      *(undefined4 *)(in_ECX + 0x40) = uVar2;
    }
    return;
  }
  return;
}


// ==== 10165db0 FUN_10165db0

void FUN_10165db0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bd738;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_101652e0();
  ExceptionList = local_c;
  return;
}


// ==== 10165e00 FUN_10165e00

void FUN_10165e00(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd758;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10165350();
  ExceptionList = local_c;
  return;
}


// ==== 10165e50 FUN_10165e50

int FUN_10165e50(UObject *param_1,ushort *param_2)

{
  int iVar1;
  UObject *this;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd770;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::ResolveName(&param_1,&param_2,1,0);
  iVar1 = thunk_FUN_101495d0(param_1,param_2,0);
  if (iVar1 == 0) {
    FName::FName((FName *)&local_18,param_2,1);
    this = UObject::StaticAllocateObject
                     (&UPackage::PrivateStaticClass,param_1,local_18,4,0,GError,0,0);
    if (this == (UObject *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    iVar1 = UPackage::UPackage((UPackage *)this);
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 10165f00 Catch@10165f00

void Catch_10165f00(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10165f14 Catch@10165f14

void Catch_10165f14(void)

{
  appUnwindf((ushort *)&DAT_101da9d8,L"UObject::CreatePackage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10165f70 FUN_10165f70

undefined4 FUN_10165f70(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  UPackage *pUVar6;
  wchar_t *pwVar7;
  ushort local_224 [260];
  ushort *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd780;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xfffffdd0;
  if (*param_2 == 0) {
    ExceptionList = &local_10;
    appFailAssert("InName",".\\UnObj.cpp",0xa92);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  iVar2 = appStrnicmp((ushort *)*param_2,(ushort *)L"ini:",4);
  iVar3 = appStrnicmp((ushort *)*param_2,(ushort *)L"usr:",4);
  if ((((iVar2 == 0) || (iVar3 == 0)) && (iVar3 = appStrlen((ushort *)*param_2), iVar3 < 0x400)) &&
     (puVar4 = appStrstr((ushort *)*param_2,(ushort *)&DAT_101daa0c), puVar4 != (ushort *)0x0)) {
    appStrcpy(local_224,(ushort *)(*param_2 + 8));
    puVar4 = local_224;
    while (puVar5 = appStrstr(puVar4,(ushort *)&DAT_101daa10), puVar5 != (ushort *)0x0) {
      puVar4 = appStrstr(puVar4,(ushort *)&DAT_101daa14);
      puVar4 = puVar4 + 1;
    }
    if (puVar4 == local_224) {
      appFailAssert("Key!=Section",".\\UnObj.cpp",0xa9f);
    }
    puVar4[-1] = 0;
    local_1c = appStaticString1024();
    pwVar7 = L"System";
    if (iVar2 != 0) {
      pwVar7 = L"User";
    }
    iVar2 = (**(code **)(*(int *)GConfig + 0x10))(local_224,puVar4,local_1c,0x400,pwVar7);
    if (iVar2 == 0) {
      if (param_4 != 0) {
        iVar2 = *param_2;
        puVar4 = LocalizeError((ushort *)L"ConfigNotFound",(ushort *)L"Core",(ushort *)0x0);
        appThrowf(puVar4,iVar2);
      }
      ExceptionList = local_10;
      return 0;
    }
    *param_2 = (int)local_1c;
  }
  do {
    puVar4 = appStrstr((ushort *)*param_2,(ushort *)&DAT_101daa7c);
    if (puVar4 == (ushort *)0x0) {
      ExceptionList = local_10;
      return 1;
    }
    appStrcpy(local_224,(ushort *)*param_2);
    puVar4 = appStrstr(local_224,(ushort *)&DAT_101daa80);
    *puVar4 = 0;
    if (param_3 == 0) {
      pUVar6 = (UPackage *)thunk_FUN_101495d0(*param_1,local_224,0);
      if ((pUVar6 == (UPackage *)0x0) &&
         (pUVar6 = (UPackage *)thunk_FUN_1015c210(*param_1,local_224,0), pUVar6 == (UPackage *)0x0))
      {
        ExceptionList = local_10;
        return 0;
      }
    }
    else {
      pUVar6 = UObject::CreatePackage((UObject *)*param_1,local_224);
    }
    *param_1 = pUVar6;
    puVar4 = appStrstr((ushort *)*param_2,(ushort *)&DAT_101daa84);
    *param_2 = (int)(puVar4 + 1);
  } while( true );
}


// ==== 101661c3 Catch@101661c3

void Catch_101661c3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101661d7 Catch@101661d7

void Catch_101661d7(void)

{
  appUnwindf((ushort *)&DAT_101daa88,L"UObject::ResolveName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101662a0 FUN_101662a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101662a0(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd790;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0x34) != 0) && (ExceptionList = &local_10, GLog != (undefined *)0x0)) {
    ExceptionList = &local_10;
    FOutputDevice::Logf2
              ((FOutputDevice *)(*(int *)(_Names + *(int *)(in_ECX + 0x20) * 4) + 0xc),(EName)GLog,
               (ushort *)0x2f8);
  }
  UObject::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10166320 Catch@10166320

void Catch_10166320(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10166334 Catch@10166334

void Catch_10166334(void)

{
  appUnwindf((ushort *)&DAT_101dbc24,L"UPackage::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10166390 FUN_10166390

int FUN_10166390(ushort *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  
  uVar2 = thunk_FUN_1014fa60(param_1);
  iVar5 = *(int *)(in_ECX[3] + (uVar2 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar5 == -1) {
      iVar5 = thunk_FUN_101654b0(param_1,param_2);
      return iVar5;
    }
    iVar1 = iVar5 * 0x14;
    if (*(int *)(iVar1 + 8 + *in_ECX) == 0) {
      puVar3 = &DAT_101cdd44;
    }
    else {
      puVar3 = *(ushort **)(iVar1 + 4 + *in_ECX);
    }
    iVar4 = appStricmp(puVar3,param_1);
    if (iVar4 == 0) break;
    iVar5 = *(int *)(iVar1 + *in_ECX);
  }
  *(undefined4 *)(iVar5 * 0x14 + 0x10 + *in_ECX) = *param_2;
  return iVar5 * 0x14 + 0x10 + *in_ECX;
}


// ==== 10166450 FUN_10166450

void FUN_10166450(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bd7c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  local_1c = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < local_1c) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < local_1c) {
    iVar1 = param_1 * 0x1c;
    local_1c = local_1c - param_1;
    do {
      iVar2 = *(int *)in_ECX + iVar1;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      FArray::Realloc((FArray *)(iVar2 + 0x10),2);
      local_4 = (uint)local_4._1_3_ << 8;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(iVar2 + 0x10));
      local_4 = 3;
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      FArray::Realloc((FArray *)(iVar2 + 4),2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(iVar2 + 4));
      iVar1 = iVar1 + 0x1c;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 101665e0 FUN_101665e0

void FUN_101665e0(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bd7f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_1 + param_2;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar3 = param_1 * 0x14;
    iVar2 = iVar2 - param_1;
    do {
      iVar1 = *(int *)in_ECX + iVar3;
      local_4 = 1;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      FArray::Realloc((FArray *)(iVar1 + 4),2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(iVar1 + 4));
      iVar3 = iVar3 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  ExceptionList = local_c;
  return;
}


// ==== 10166740 FUN_10166740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10166740(ushort *param_1,UObject *param_2,ushort *param_3)

{
  undefined1 *puVar1;
  UObject *this;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  UObject *in_ECX;
  int iVar5;
  FArray *this_00;
  int *piVar6;
  ushort *puVar7;
  int iVar8;
  undefined2 local_a70;
  undefined1 local_a6e [2046];
  ushort local_270 [256];
  FString local_70 [12];
  undefined1 local_64 [16];
  FString local_54 [12];
  int local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_24;
  int local_20;
  int local_1c;
  UObject *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bd830;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff584;
  local_8 = 0;
  if (param_2 == (UObject *)0x0) {
    param_2 = *(UObject **)(in_ECX + 0x24);
  }
  if (((byte)param_2[0x4a4] & 4) != 0) {
    ExceptionList = &local_10;
    local_18 = in_ECX;
    puVar1 = &stack0xfffff584;
    if ((param_1 != (ushort *)0x0) &&
       (ExceptionList = &local_10, puVar1 = &stack0xfffff584,
       *(UClass **)(param_2 + 0x34) != (UClass *)0x0)) {
      ExceptionList = &local_10;
      UObject::LoadConfig(in_ECX,(int)param_1,*(UClass **)(param_2 + 0x34),param_3);
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (((*(uint *)(*(int *)(in_ECX + 0x24) + 0x4a4) & 0x400) == 0) ||
       (local_1c = 1, *(int *)(in_ECX + 4) == -1)) {
      local_1c = 0;
    }
    if (param_3 == (ushort *)0x0) {
      if ((local_1c == 0) || (*(UPackage **)(in_ECX + 0x18) == UObject::GObjTransientPkg)) {
        iVar3 = *(int *)(_Names + *(int *)(*(int *)(in_ECX + 0x24) + 0x4c0) * 4);
      }
      else {
        iVar3 = *(int *)(_Names + *(int *)(*(UPackage **)(in_ECX + 0x18) + 0x20) * 4);
      }
      param_3 = (ushort *)(iVar3 + 0xc);
    }
    thunk_FUN_10119210(param_2);
    while (piVar6 = local_24, local_24 != (int *)0x0) {
      if ((local_24[0x12] & 0x4000U) != 0) {
        local_a70 = 0;
        _memset(local_a6e,0,0x7fe);
        this = param_2;
        if ((piVar6[0x12] & 0x40000U) != 0) {
          this = (UObject *)(**(code **)(*piVar6 + 0x74))();
        }
        if (local_1c == 0) {
          puVar7 = UObject::GetPathName(this,(UObject *)0x0,(ushort *)0x0);
        }
        else {
          puVar7 = (ushort *)(*(int *)(_Names + *(int *)(in_ECX + 0x20) * 4) + 0xc);
        }
        if (piVar6[0x10] == 1) {
          param_1 = (ushort *)(*(int *)(_Names + piVar6[8] * 4) + 0xc);
        }
        else {
          param_1 = local_270;
        }
        piVar2 = (int *)thunk_FUN_10132a60(piVar6);
        local_44 = piVar2;
        iVar3 = thunk_FUN_1015c0a0(piVar6);
        if (piVar2 == (int *)0x0) {
          if (iVar3 == 0) {
            for (iVar3 = 0; local_48 = iVar3, iVar3 < piVar6[0x10]; iVar3 = iVar3 + 1) {
              if (piVar6[0x10] != 1) {
                appSprintf(local_270,(ushort *)L"%s[%i]",*(int *)(_Names + piVar6[8] * 4) + 0xc,
                           iVar3);
              }
              iVar8 = (**(code **)(*(int *)GConfig + 0x10))(puVar7,param_1,&local_a70,0x400,param_3)
              ;
              if (iVar8 != 0) {
                (**(code **)(*piVar6 + 0x9c))
                          (&local_a70,local_18 + piVar6[0x11] * iVar3 + piVar6[0x15],0);
              }
            }
          }
          else {
            iVar3 = (**(code **)(*(int *)GConfig + 0x1c))(puVar7,0,1,param_3);
            if (iVar3 != 0) {
              thunk_FUN_101098b0();
              local_8._0_1_ = 3;
              FString::FString(local_54,param_1);
              local_8._0_1_ = 4;
              thunk_FUN_10162ca0(local_54,local_64);
              local_8._0_1_ = 3;
              FString::~FString(local_54);
              local_8 = (uint)local_8._1_3_ << 8;
              thunk_FUN_10124a00();
            }
          }
        }
        else {
          iVar3 = (**(code **)(*(int *)GConfig + 0x1c))(puVar7,0,1,param_3);
          if (iVar3 != 0) {
            thunk_FUN_101098b0();
            local_8._0_1_ = 1;
            uVar4 = FString::FString(local_70,param_1);
            local_8._0_1_ = 2;
            thunk_FUN_10162ca0(uVar4,&local_38);
            local_8 = CONCAT31(local_8._1_3_,1);
            FString::~FString(local_70);
            this_00 = (FArray *)(local_18 + piVar6[0x15]);
            iVar3 = *(int *)(piVar2[0x1e] + 0x44);
            (**(code **)(*piVar2 + 0xac))(this_00);
            FArray::AddZeroed(this_00,iVar3,local_34);
            local_20 = 0;
            iVar8 = local_34;
            while (iVar8 = iVar8 + -1, local_3c = iVar8, -1 < iVar8) {
              local_40 = *(int *)piVar2[0x1e];
              uVar4 = 0;
              iVar5 = local_20 * iVar3 + *(int *)this_00;
              puVar7 = FString::operator*((FString *)(local_38 + iVar8 * 0xc));
              piVar2 = local_44;
              (**(code **)(local_40 + 0x9c))(puVar7,iVar5,uVar4);
              local_20 = local_20 + 1;
            }
            local_8 = local_8 & 0xffffff00;
            thunk_FUN_10124a00();
            piVar6 = local_24;
          }
        }
      }
      local_24 = (int *)piVar6[0xe];
      thunk_FUN_10114340();
      in_ECX = local_18;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10166ad7 Catch@10166ad7

void Catch_10166ad7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_101f843c);
}


// ==== 10166aeb Catch@10166aeb

void Catch_10166aeb(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d97f8,L"UObject::LoadConfig");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x14),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10166c20 FUN_10166c20

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10166c20(UObject *param_1)

{
  UStruct *this;
  wchar_t *pwVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  UObject *pUVar6;
  int iVar7;
  UClass *pUVar8;
  undefined4 uVar9;
  ushort local_fa28 [32008];
  ushort *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd850;
  local_10 = ExceptionList;
  local_18 = (ushort *)0x10166c43;
  local_14 = &stack0xffff05cc;
  local_8 = 0;
  if (*(int *)(param_1 + 0x4c0) == 0x2e8) {
    pwVar1 = L"Default.ini";
  }
  else {
    if (*(int *)(param_1 + 0x4c0) != 0x2e9) {
      return;
    }
    pwVar1 = L"DefUser.ini";
  }
  iVar3 = *(int *)GConfig;
  uVar9 = 32000;
  puVar5 = local_fa28;
  ExceptionList = &local_10;
  puVar2 = UObject::GetPathName(param_1,(UObject *)0x0,(ushort *)0x0);
  iVar3 = (**(code **)(iVar3 + 0x18))(puVar2,puVar5,uVar9,pwVar1);
  if (iVar3 != 0) {
    puVar5 = local_fa28;
    while (puVar2 = puVar5, *puVar2 != 0) {
      iVar3 = appStrlen(puVar2);
      local_18 = puVar2 + iVar3 + 1;
      puVar4 = appStrstr(puVar2,(ushort *)&DAT_101d98d4);
      puVar5 = local_18;
      if (puVar4 != (ushort *)0x0) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
        iVar7 = *(int *)(_Names + *(int *)(param_1 + 0x4c0) * 4) + 0xc;
        iVar3 = *(int *)GConfig;
        puVar5 = UObject::GetPathName(param_1,(UObject *)0x0,(ushort *)0x0);
        (**(code **)(iVar3 + 0x30))(puVar5,puVar2,puVar4,iVar7);
        puVar5 = local_18;
      }
    }
  }
  thunk_FUN_1012b800();
  while ((int)local_18 < DAT_1033088c) {
    this = *(UStruct **)(_GObjObjects + (int)local_18 * 4);
    iVar3 = UStruct::IsChildOf(this,(UStruct *)param_1);
    if (iVar3 != 0) {
      puVar5 = (ushort *)0x0;
      pUVar8 = (UClass *)0x0;
      iVar3 = 1;
      pUVar6 = UClass::GetDefaultObject((UClass *)this);
      UObject::LoadConfig(pUVar6,iVar3,pUVar8,puVar5);
    }
    thunk_FUN_1012ae60();
  }
  thunk_FUN_10162dc0();
  while (puVar5 = local_18, (int)local_18 < DAT_1033088c) {
    pUVar6 = *(UObject **)(_GObjObjects + (int)local_18 * 4);
    iVar3 = UObject::IsA(pUVar6,(UClass *)param_1);
    if (iVar3 != 0) {
      UObject::LoadConfig(pUVar6,1,(UClass *)0x0,(ushort *)0x0);
      (**(code **)(**(int **)(_GObjObjects + (int)puVar5 * 4) + 0x44))();
    }
    thunk_FUN_1012ae60();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10166dce Catch@10166dce

void Catch_10166dce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 10166de2 Catch@10166de2

void Catch_10166de2(void)

{
  appUnwindf((ushort *)&DAT_101d98d8,L"UObject::ResetConfig");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10166e80 FUN_10166e80

UObject * FUN_10166e80(UClass *param_1,uint param_2,ushort *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  UObject *pUVar3;
  uint uVar4;
  int local_68;
  UObject *local_20;
  uint local_1c;
  UObject *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bd868;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  local_8 = 0;
  local_20 = (UObject *)(-(uint)(param_2 != 0xffffffff) & param_2);
  ExceptionList = &local_10;
  iVar1 = UObject::ResolveName(&local_20,&param_3,0,0);
  if ((iVar1 != 0) && (FName::FName((FName *)&local_1c,param_3,0), local_1c != 0)) {
    uVar4 = local_1c & 0xfff;
    for (pUVar3 = (UObject *)(&UObject::GObjHash)[uVar4]; local_18 = pUVar3,
        pUVar3 != (UObject *)0x0; pUVar3 = *(UObject **)(pUVar3 + 8)) {
      if ((*(uint *)(pUVar3 + 0x20) == local_1c) &&
         ((((local_20 == (UObject *)0x0 && (param_2 == 0xffffffff)) ||
           (*(UObject **)(pUVar3 + 0x18) == local_20)) ||
          (((param_2 == 0xffffffff && (local_20 != (UObject *)0x0)) &&
           (iVar1 = UObject::IsIn(pUVar3,local_20), iVar1 != 0)))))) {
        if (param_1 == (UClass *)0x0) {
LAB_10166f80:
          while (GL2GCState == 2) {
            appSleep(0.0);
            pUVar3 = local_18;
          }
          if ((GL2GCState == 3) && (((byte)pUVar3[0x1c] & 2) != 0)) {
            thunk_FUN_1015a320();
            local_8._0_1_ = 1;
            (**(code **)(local_68 + 0x18))(&local_18);
            local_8 = (uint)local_8._1_3_ << 8;
            thunk_FUN_1015a3d0();
            pUVar3 = local_18;
          }
          ExceptionList = local_10;
          return pUVar3;
        }
        if (param_4 == 0) {
          uVar2 = UObject::IsA(pUVar3,param_1);
        }
        else {
          uVar2 = (uint)(*(UClass **)(pUVar3 + 0x24) == param_1);
        }
        if (uVar2 != 0) goto LAB_10166f80;
      }
    }
    iVar1 = L2ThreadUtil::IsCurrentThread(&GThreadUtil,1);
    if (iVar1 != 0) {
      for (pUVar3 = (UObject *)(&UObject::GObjHashBuffer)[uVar4]; pUVar3 != (UObject *)0x0;
          pUVar3 = *(UObject **)(pUVar3 + 0x2c)) {
        if ((*(uint *)(pUVar3 + 0x20) == local_1c) &&
           ((((local_20 == (UObject *)0x0 && (param_2 == 0xffffffff)) ||
             (*(UObject **)(pUVar3 + 0x18) == local_20)) ||
            (((param_2 == 0xffffffff && (local_20 != (UObject *)0x0)) &&
             (iVar1 = UObject::IsIn(pUVar3,local_20), iVar1 != 0)))))) {
          if (param_1 == (UClass *)0x0) {
            ExceptionList = local_10;
            return pUVar3;
          }
          if (param_4 == 0) {
            uVar4 = UObject::IsA(pUVar3,param_1);
          }
          else {
            uVar4 = (uint)(*(UClass **)(pUVar3 + 0x24) == param_1);
          }
          if (uVar4 != 0) {
            ExceptionList = local_10;
            return pUVar3;
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return (UObject *)0x0;
}


// ==== 10167074 Catch@10167074

void Catch_10167074(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10167088 Catch@10167088

void Catch_10167088(void)

{
  appUnwindf((ushort *)&DAT_101d991c,L"UObject::StaticFindObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167130 FUN_10167130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * FUN_10167130(UClass *param_1,UObject *param_2,ushort *param_3,int param_4)

{
  UObject *pUVar1;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd880;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pUVar1 = UObject::StaticFindObject(param_1,param_2,param_3,param_4);
  if (pUVar1 == (UObject *)0x0) {
    LocalizeError((ushort *)L"ObjectNotFound",(ushort *)L"Core",(ushort *)0x0);
    FOutputDevice::Logf(this,(ushort *)GError);
  }
  ExceptionList = local_10;
  return pUVar1;
}


// ==== 101671e6 Catch@101671e6

void Catch_101671e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 101671fa Catch@101671fa

void Catch_101671fa(void)

{
  appUnwindf((ushort *)&DAT_101d9964,L"UObject::StaticFindObjectChecked");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167250 FUN_10167250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167250(void)

{
  ushort *puVar1;
  undefined1 *puVar2;
  UPackage *pUVar3;
  UObject *pUVar4;
  UObject *in_ECX;
  FOutputDevice *this;
  FOutputDevice *this_00;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd890;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffd4;
  if (UObject::GObjInitialized == 0) {
    ExceptionList = &local_10;
    appFailAssert("GObjInitialized",".\\UnObj.cpp",0x5fe);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  puVar1 = *(ushort **)(in_ECX + 0x20);
  pUVar3 = UObject::CreatePackage((UObject *)0x0,*(ushort **)(in_ECX + 0x18));
  *(UPackage **)(in_ECX + 0x18) = pUVar3;
  FName::FName((FName *)&local_18,puVar1,1);
  *(undefined4 *)(in_ECX + 0x20) = local_18;
  *(undefined4 *)(in_ECX + 0x14) = 0xffffffff;
  if (*(int *)(in_ECX + 0x18) == 0) {
    UObject::GetFullName(in_ECX,(ushort *)0x0);
    FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    UObject::GetFullName(in_ECX,(ushort *)0x0);
    FOutputDevice::Logf(this,(ushort *)GError);
  }
  pUVar4 = UObject::StaticFindObject
                     ((UClass *)0x0,*(UObject **)(in_ECX + 0x18),
                      (ushort *)(*(int *)(_Names + *(int *)(in_ECX + 0x20) * 4) + 0xc),0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::GetFullName(in_ECX,(ushort *)0x0);
    FOutputDevice::Logf(this_00,(ushort *)GError);
  }
  UObject::AddObject(in_ECX,-1);
  ExceptionList = local_10;
  return;
}


// ==== 1016736b Catch@1016736b

void Catch_1016736b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1016737f Catch@1016737f

void Catch_1016737f(void)

{
  appUnwindf((ushort *)&DAT_101d9ae8,L"UObject::Register");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101673f0 FUN_101673f0

void FUN_101673f0(byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd8a8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10165260();
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10167460 FUN_10167460

FArray * FUN_10167460(FArray *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_34 [28];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd8e9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff7c;
  local_18 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  thunk_FUN_10165db0();
  local_8._0_1_ = 2;
  thunk_FUN_101658f0(local_34);
  local_8 = CONCAT31(local_8._1_3_,3);
  thunk_FUN_101281e0();
  local_18 = 1;
  iVar3 = thunk_FUN_1015d9b0(&param_2);
  if (iVar3 != 0) {
    thunk_FUN_101287a0(&param_2);
    while( true ) {
      piVar4 = (int *)thunk_FUN_1015d9b0(&param_2);
      if (*piVar4 == 0) break;
      iVar1 = piVar4[1];
      iVar2 = *(int *)(param_1 + 4);
      iVar3 = iVar2 + 1;
      *(int *)(param_1 + 4) = iVar3;
      param_2 = iVar1;
      if (*(int *)(param_1 + 8) < iVar3) {
        *(int *)(param_1 + 8) = ((int)(iVar3 * 3 + (iVar3 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar3;
        FArray::Realloc(param_1,4);
      }
      appMemmove((void *)((int)*(void **)param_1 + 4),*(void **)param_1,iVar2 * 4);
      **(int **)param_1 = iVar1;
    }
  }
  local_8._0_1_ = 2;
  thunk_FUN_1015a830();
  local_8 = CONCAT31(local_8._1_3_,1);
  thunk_FUN_10165e00();
  ExceptionList = local_10;
  return param_1;
}


// ==== 1016755e Catch@1016755e

void Catch_1016755e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10167572 Catch@10167572

void Catch_10167572(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FArchiveTraceRoute::FindShortestRootPath");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101675e0 FUN_101675e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FName * FUN_101675e0(FName *param_1,UObject *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  UObject *pUVar3;
  ushort local_1a4 [64];
  ushort local_124 [64];
  ushort local_a4 [70];
  ushort *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd900;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe50;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xfffffe50;
  if (param_3 == 0) {
    ExceptionList = &local_10;
    appFailAssert("Class",".\\UnObj.cpp",0xef9);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  appStrcpy(local_a4,(ushort *)(*(int *)(_Names + *(int *)(param_3 + 0x20) * 4) + 0xc));
  iVar2 = appStrlen(local_a4);
  for (local_18 = local_a4 + iVar2; (local_a4 < local_18 && ((ushort)(local_18[-1] - 0x30) < 10));
      local_18 = local_18 + -1) {
  }
  *local_18 = 0;
  do {
    iVar2 = *(int *)(param_3 + 0x4a8);
    *(int *)(param_3 + 0x4a8) = iVar2 + 1;
    appSprintf(local_1a4,(ushort *)&DAT_101db3a0,iVar2);
    iVar2 = appStrlen(local_1a4);
    appStrncpy(local_124,local_a4,0x3f - iVar2);
    appStrcat(local_124,local_1a4);
    pUVar3 = UObject::StaticFindObject((UClass *)0x0,param_2,local_124,0);
  } while (pUVar3 != (UObject *)0x0);
  FName::FName(param_1,local_124,1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 10167729 Catch@10167729

void Catch_10167729(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1016773d Catch@1016773d

void Catch_1016773d(void)

{
  appUnwindf((ushort *)&DAT_101db3a8,L"UObject::MakeUniqueObjectName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101677c0 FUN_101677c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * FUN_101677c0(UClass *param_1,UObject *param_2,uint param_3,uint param_4,uchar *param_5,
                      ushort *param_6,UObject *param_7,UObject *param_8)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint *puVar4;
  UObject *pUVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  wchar_t *pwVar9;
  UClass *pUVar10;
  wchar_t *pwVar11;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd910;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffc4;
  if (param_6 == (ushort *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("Error",".\\UnObj.cpp",0xfcd);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  if (param_1 != (UClass *)0x0) {
    if (*(int *)(param_1 + 0x4bc) == 0) {
      appFailAssert("!InClass || InClass->ClassWithin",".\\UnObj.cpp",0xfce);
    }
    if (*(int *)(param_1 + 0x518) == 0) {
      appFailAssert("!InClass || InClass->ClassConstructor",".\\UnObj.cpp",0xfcf);
    }
    iVar3 = L2ThreadUtil::IsCurrentThread(&GThreadUtil,1);
    if (((iVar3 != 0) || (*(int *)(param_1 + 4) != -1)) || (UObject::GObjRegisterCount != 0)) {
      if (((byte)param_1[0x4a4] & 1) != 0) {
        pwVar11 = L"Core";
        pwVar9 = L"Abstract";
LAB_101678e9:
        LocalizeError((ushort *)pwVar9,(ushort *)pwVar11,(ushort *)0x0);
        FOutputDevice::Logf(this,param_6);
        ExceptionList = local_10;
        return (UObject *)0x0;
      }
      if (param_2 == (UObject *)0x0) {
        if (param_1 != &UPackage::PrivateStaticClass) {
          pwVar11 = L"Core";
          pwVar9 = L"NotPackaged";
          goto LAB_101678e9;
        }
      }
      else {
        iVar3 = UObject::IsA(param_2,*(UClass **)(param_1 + 0x4bc));
        if (iVar3 == 0) {
          LocalizeError((ushort *)L"NotWithin",(ushort *)L"Core",(ushort *)0x0);
          FOutputDevice::Logf(this_00,param_6);
          ExceptionList = local_10;
          return (UObject *)0x0;
        }
      }
      if (param_3 == 0) {
        puVar4 = (uint *)UObject::MakeUniqueObjectName((UObject *)&local_1c,(UClass *)param_2);
        param_3 = *puVar4;
      }
      if ((DAT_1023fe54 != 0) && (param_3 != 0)) {
        for (pUVar5 = (UObject *)(&UObject::GObjHash)[param_3 & 0xfff]; pUVar5 != (UObject *)0x0;
            pUVar5 = *(UObject **)(pUVar5 + 8)) {
          if (((*(uint *)(pUVar5 + 0x20) == param_3) && (*(UObject **)(pUVar5 + 0x18) == param_2))
             && ((*(UClass **)(pUVar5 + 0x24) != param_1 && (GLog != (undefined *)0x0)))) {
            UObject::GetFullName(pUVar5,(ushort *)0x0);
            FOutputDevice::Logf2(this_01,(EName)GLog,(ushort *)0x2f8);
          }
        }
      }
      pUVar5 = UObject::StaticFindObject
                         (param_1,param_2,(ushort *)(*(int *)(_Names + param_3 * 4) + 0xc),0);
      local_1c = thunk_FUN_10149630(pUVar5);
      local_18 = -1;
      local_20 = 0;
      local_24 = 0;
      local_28 = 0;
      if (pUVar5 == (UObject *)0x0) {
        if (param_7 == (UObject *)0x0) {
          puVar1 = *(undefined4 **)GMalloc;
          uVar6 = (**(code **)(*(int *)param_1 + 0x78))(*(int *)(_Names + param_3 * 4) + 0xc);
          param_7 = (UObject *)(*(code *)*puVar1)(uVar6);
        }
      }
      else {
        if ((param_7 != (UObject *)0x0) && (param_7 != pUVar5)) {
          appFailAssert("!Ptr || Ptr==Obj",".\\UnObj.cpp",0x100e);
        }
        FOutputDevice::Logf(_Names,(EName)GNull,(ushort *)0x30c);
        if (*(UClass **)(pUVar5 + 0x24) != param_1) {
          UObject::GetFullName(pUVar5,(ushort *)0x0);
          LocalizeError((ushort *)L"NoReplace",(ushort *)L"Engine",(ushort *)0x0);
          FOutputDevice::Logf(this_02,(ushort *)GError);
        }
        param_4 = param_4 | *(uint *)(pUVar5 + 0x1c) & 0xc000100;
        local_18 = *(int *)(pUVar5 + 4);
        if (local_1c != 0) {
          local_20 = *(undefined4 *)(local_1c + 0x4bc);
          local_24 = *(uint *)(local_1c + 0x4a4) & 1;
          local_28 = *(undefined4 *)(local_1c + 0x518);
        }
        (**(code **)(*(int *)pUVar5 + 0xc))();
        if ((DAT_10330898 == 0) || (piVar7 = (int *)thunk_FUN_1015bab0(0), *piVar7 != local_18)) {
          appFailAssert("GObjAvailable.Num() && GObjAvailable.Last()==Index",".\\UnObj.cpp",0x1021);
        }
        thunk_FUN_1015d870();
        param_7 = pUVar5;
      }
      if (((byte)param_1[0x4a4] & 8) != 0) {
        param_4 = param_4 | 0x4000;
      }
      *(undefined4 *)(param_7 + 4) = 0xffffffff;
      *(undefined4 *)(param_7 + 8) = 0;
      *(undefined4 *)(param_7 + 0xc) = 0;
      *(undefined4 *)(param_7 + 0x10) = 0;
      *(undefined4 *)(param_7 + 0x14) = 0xffffffff;
      *(UObject **)(param_7 + 0x18) = param_2;
      *(uint *)(param_7 + 0x1c) = param_4;
      *(uint *)(param_7 + 0x20) = param_3;
      *(UClass **)(param_7 + 0x24) = param_1;
      *(undefined4 *)(param_7 + 0x28) = 0xffffffff;
      *(undefined4 *)(param_7 + 0x2c) = 0;
      *(undefined4 *)(param_7 + 0x30) = 0xffffffe1;
      pUVar5 = (UObject *)(~-(uint)((param_4 & 0x200) != 0) & (uint)param_7);
      iVar3 = (**(code **)(*(int *)param_1 + 0x78))();
      pUVar10 = param_1;
      iVar8 = (**(code **)(*(int *)param_1 + 0x78))();
      UObject::InitProperties((uchar *)param_7,iVar8,pUVar10,param_5,iVar3,pUVar5,param_8);
      UObject::AddObject(param_7,local_18);
      iVar3 = UObject::IsValid(param_7);
      if (iVar3 == 0) {
        appFailAssert("Obj->IsValid()",".\\UnObj.cpp",0x103e);
      }
      if ((*(uint *)(param_1 + 0x4a4) & 0x400) != 0) {
        UObject::LoadConfig(param_7,0,(UClass *)0x0,(ushort *)0x0);
        UObject::LoadLocalized(param_7);
      }
      if (local_1c != 0) {
        *(undefined4 *)(local_1c + 0x4bc) = local_20;
        *(uint *)(local_1c + 0x4a4) = *(uint *)(local_1c + 0x4a4) | local_24;
        *(undefined4 *)(local_1c + 0x518) = local_28;
      }
      ExceptionList = local_10;
      return param_7;
    }
  }
  FOutputDevice::Logf(_Names,param_6);
  ExceptionList = local_10;
  return (UObject *)0x0;
}


// ==== 10167ce0 Catch@10167ce0

void Catch_10167ce0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_101f843c);
}


// ==== 10167cf4 Catch@10167cf4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Catch_10167cf4(void)

{
  wchar_t *pwVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101db6a4,L"UObject::StaticAllocateObject");
  if (*(int *)(unaff_EBP + 8) == 0) {
    pwVar1 = L"NULL";
  }
  else {
    pwVar1 = (wchar_t *)(*(int *)(_Names + *(int *)(*(int *)(unaff_EBP + 8) + 0x20) * 4) + 0xc);
  }
  appUnwindf((ushort *)L"(%s %s)",pwVar1,*(int *)(_Names + *(int *)(unaff_EBP + 0x10) * 4) + 0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167eb0 FUN_10167eb0

UObject * FUN_10167eb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,int param_6,undefined4 param_7)

{
  UObject *pUVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd920;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_6 == 0) {
    ExceptionList = &local_10;
    appFailAssert("Error",".\\UnObj.cpp",0x1063);
  }
  pUVar1 = UObject::StaticAllocateObject(param_1,param_2,param_3,param_4,param_5,param_6,0,param_7);
  if (pUVar1 != (UObject *)0x0) {
    (**(code **)(param_1 + 0x518))(pUVar1);
  }
  ExceptionList = local_10;
  return pUVar1;
}


// ==== 10167f3e Catch@10167f3e

void Catch_10167f3e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10167f52 Catch@10167f52

void Catch_10167f52(void)

{
  appUnwindf((ushort *)&DAT_101db6dc,L"UObject::StaticConstructObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10167fa0 FUN_10167fa0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167fa0(int param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  FRegistryObjectInfo *pFVar8;
  FString *pFVar9;
  FPreferencesInfo *this;
  int iVar10;
  ushort *puVar11;
  ushort local_f888 [31500];
  ushort local_270 [256];
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [16];
  int local_48;
  int local_44;
  int local_3c;
  ushort *local_38;
  ushort *local_30;
  ushort *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bd960;
  local_10 = ExceptionList;
  uStack_18 = 0x10167fc3;
  local_14 = &stack0xffff076c;
  iVar10 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffff076c;
  if (param_1 == 0) {
    ExceptionList = &local_10;
    puVar3 = UObject::GetLanguage();
    iVar4 = appStricmp((ushort *)&UObject::GObjCachedLanguage,puVar3);
    puVar2 = local_14;
    if (iVar4 == 0) {
      ExceptionList = local_10;
      return;
    }
  }
  local_14 = puVar2;
  puVar3 = UObject::GetLanguage();
  appStrcpy((ushort *)&UObject::GObjCachedLanguage,puVar3);
  thunk_FUN_10164fc0(0);
  thunk_FUN_10165190(0);
  do {
    local_28 = iVar10;
    if (*(int *)(GSys + 0x68) <= iVar10) {
      (**(code **)(*(int *)GFileManager + 0x30))(&local_48,L"Core.*",1,0);
      local_8._0_1_ = 2;
      for (iVar10 = 0; local_3c = iVar10, iVar10 < local_44; iVar10 = iVar10 + 1) {
        FString::FString((FString *)&local_20);
        local_8._0_1_ = 3;
        pFVar9 = (FString *)FString::FString(local_64,(ushort *)&DAT_101dba40);
        local_8._0_1_ = 4;
        iVar4 = FString::Split((FString *)(local_48 + iVar10 * 0xc),pFVar9,(FString *)0x0,
                               (FString *)&local_20,1);
        local_8._0_1_ = 3;
        FString::~FString(local_64);
        if (iVar4 != 0) {
          pFVar9 = (FString *)FString::FString(local_58,(ushort *)&DAT_101dba44);
          local_8._0_1_ = 5;
          pFVar9 = (FString *)FString::operator+(pFVar9,local_70);
          local_8._0_1_ = 6;
          FString::operator=((FString *)&local_20,pFVar9);
          local_8._0_1_ = 5;
          FString::~FString(local_70);
          local_8._0_1_ = 3;
          FString::~FString(local_58);
          iVar4 = FString::operator!=((FString *)&local_20,(ushort *)L".dll");
          if (((iVar4 != 0) &&
              (iVar4 = FString::operator!=((FString *)&local_20,(ushort *)&DAT_101dba54), iVar4 != 0
              )) && (iVar4 = FString::operator!=((FString *)&local_20,(ushort *)L".ilk"), iVar4 != 0
                    )) {
            pFVar8 = (FRegistryObjectInfo *)thunk_FUN_1015c260(0x3c,&UObject::GObjDrivers);
            if (pFVar8 == (FRegistryObjectInfo *)0x0) {
              pFVar9 = (FString *)0x0;
            }
            else {
              pFVar9 = (FString *)FRegistryObjectInfo::FRegistryObjectInfo(pFVar8);
            }
            puVar5 = (ushort *)&DAT_101dba68;
            puVar3 = FString::operator*((FString *)(iVar10 * 0xc + local_48));
            puVar3 = appStrstr(puVar3,puVar5);
            FString::operator=(pFVar9,puVar3 + 1);
            FString::operator=(pFVar9 + 0xc,(ushort *)L"Class");
            puVar3 = UObject::GetPathName
                               ((UObject *)&ULanguage::PrivateStaticClass,(UObject *)0x0,
                                (ushort *)0x0);
            FString::operator=(pFVar9 + 0x18,puVar3);
          }
        }
        local_8._0_1_ = 2;
        FString::~FString((FString *)&local_20);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_10124a00();
      ExceptionList = local_10;
      return;
    }
    puVar3 = FString::operator*((FString *)(*(int *)(GSys + 100) + iVar10 * 0xc));
    puVar5 = appBaseDir();
    appSprintf(local_270,(ushort *)L"%s%s",puVar5,puVar3);
    puVar3 = appStrstr(local_270,(ushort *)&DAT_101db8e8);
    local_38 = puVar3;
    if (puVar3 != (ushort *)0x0) {
      appSprintf(puVar3,(ushort *)L"*.int");
      (**(code **)(*(int *)GFileManager + 0x30))(&local_20,local_270,1,0);
      local_8._0_1_ = 1;
      local_24 = 0;
      while (iVar4 = local_24, local_24 < local_1c) {
        puVar5 = FString::operator*((FString *)(local_20 + local_24 * 0xc));
        puVar6 = appBaseDir();
        appSprintf(puVar3,(ushort *)L"%s%s",puVar6,puVar5);
        iVar10 = appStrlen(puVar3);
        puVar5 = UObject::GetLanguage();
        appSprintf(puVar3 + iVar10 + -4,(ushort *)&DAT_101db908,puVar5);
        iVar7 = (**(code **)(*(int *)GConfig + 0x18))(L"Public",local_f888,0x7b0c,puVar3);
        if (iVar7 == 0) {
          appSprintf(puVar3 + iVar10 + -4,(ushort *)L".int");
          iVar10 = (**(code **)(*(int *)GConfig + 0x18))(L"Public",local_f888,0x7b0c,puVar3);
          if (iVar10 != 0) goto LAB_10168141;
        }
        else {
LAB_10168141:
          puVar5 = local_f888;
          while (puVar6 = puVar5, iVar4 = local_24, *puVar6 != 0) {
            iVar10 = appStrlen(puVar6);
            local_30 = puVar6 + iVar10 + 1;
            local_2c = appStrstr(puVar6,(ushort *)&DAT_101db93c);
            puVar5 = local_30;
            if (local_2c != (ushort *)0x0) {
              *local_2c = 0;
              puVar11 = local_2c + 1;
              if (*puVar11 == 0x28) {
                *puVar11 = 0;
                puVar11 = local_2c + 2;
              }
              local_2c = puVar11;
              if ((*puVar11 != 0) && (iVar10 = appStrlen(puVar11), puVar11[iVar10 + -1] == 0x29)) {
                iVar10 = appStrlen(puVar11);
                puVar11[iVar10 + -1] = 0;
              }
              iVar10 = appStricmp(puVar6,(ushort *)L"Object");
              if (iVar10 == 0) {
                pFVar8 = (FRegistryObjectInfo *)thunk_FUN_1015c260(0x3c,&UObject::GObjDrivers);
                if (pFVar8 == (FRegistryObjectInfo *)0x0) {
                  pFVar9 = (FString *)0x0;
                }
                else {
                  pFVar9 = (FString *)FRegistryObjectInfo::FRegistryObjectInfo(pFVar8);
                }
                Parse(puVar11,(ushort *)L"Name=",pFVar9);
                Parse(puVar11,(ushort *)L"Class=",pFVar9 + 0xc);
                Parse(puVar11,(ushort *)L"MetaClass=",pFVar9 + 0x18);
                Parse(puVar11,(ushort *)L"Description=",pFVar9 + 0x24);
                Parse(puVar11,(ushort *)L"Autodetect=",pFVar9 + 0x30);
                puVar5 = local_30;
              }
              else {
                iVar10 = appStricmp(puVar6,(ushort *)L"Preferences");
                puVar5 = local_30;
                if (iVar10 == 0) {
                  this = (FPreferencesInfo *)thunk_FUN_1015c2b0(0x2c,&UObject::GObjPreferences);
                  if (this == (FPreferencesInfo *)0x0) {
                    pFVar9 = (FString *)0x0;
                  }
                  else {
                    pFVar9 = (FString *)FPreferencesInfo::FPreferencesInfo(this);
                  }
                  Parse(puVar11,(ushort *)L"Caption=",pFVar9);
                  Parse(puVar11,(ushort *)L"Parent=",pFVar9 + 0xc);
                  Parse(puVar11,(ushort *)L"Class=",pFVar9 + 0x18);
                  Parse(puVar11,(ushort *)L"Category=",(FName *)(pFVar9 + 0x24));
                  ParseUBOOL(puVar11,(ushort *)L"Immediate=",(int *)(pFVar9 + 0x28));
                  puVar1 = (uint *)(*(int *)(_Names + *(int *)(pFVar9 + 0x24) * 4) + 4);
                  *puVar1 = *puVar1 | 0x4000000;
                  puVar3 = local_38;
                  puVar5 = local_30;
                }
              }
            }
          }
        }
        iVar10 = local_28;
        local_24 = iVar4 + 1;
      }
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_10124a00();
    }
    iVar10 = iVar10 + 1;
  } while( true );
}


// ==== 101684a2 Catch@101684a2

void Catch_101684a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_101f843c);
}


// ==== 101684b6 Catch@101684b6

void Catch_101684b6(void)

{
  appUnwindf((ushort *)&DAT_101dba78,L"UObject::CacheDrivers");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10168620 FUN_10168620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168620(undefined4 param_1,UClass *param_2,UObject *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  FRegistryObjectInfo *this;
  int iVar5;
  ushort *puVar6;
  ushort *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd980;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_2 == (UClass *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("Class",".\\UnObj.cpp",0x124f);
  }
  if ((param_2 == &UClass::PrivateStaticClass) && (param_3 == (UObject *)0x0)) {
    appFailAssert("Class!=UClass::StaticClass() || MetaClass",".\\UnObj.cpp",0x1250);
  }
  UObject::CacheDrivers(param_4);
  iVar1 = *(int *)(_Names + *(int *)(param_2 + 0x20) * 4);
  if (param_3 == (UObject *)0x0) {
    local_18 = (ushort *)&DAT_101dbacc;
  }
  else {
    local_18 = UObject::GetPathName(param_3,(UObject *)0x0,(ushort *)0x0);
  }
  for (iVar5 = 0; iVar5 < DAT_103308d4; iVar5 = iVar5 + 1) {
    iVar2 = iVar5 * 0x3c;
    puVar6 = (ushort *)(iVar1 + 0xc);
    puVar3 = FString::operator*((FString *)(iVar2 + 0xc + _GObjDrivers));
    iVar4 = appStricmp(puVar3,puVar6);
    if (iVar4 == 0) {
      puVar6 = local_18;
      puVar3 = FString::operator*((FString *)(iVar2 + 0x18 + _GObjDrivers));
      iVar4 = appStricmp(puVar3,puVar6);
      if (iVar4 == 0) {
        this = (FRegistryObjectInfo *)thunk_FUN_1015c260(0x3c,param_1);
        if (this != (FRegistryObjectInfo *)0x0) {
          FRegistryObjectInfo::FRegistryObjectInfo
                    (this,(FRegistryObjectInfo *)(_GObjDrivers + iVar2));
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10168755 Catch@10168755

void Catch_10168755(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 10168769 Catch@10168769

void Catch_10168769(void)

{
  appUnwindf((ushort *)&DAT_101dbad0,L"UObject::GetDriverClasses");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101687e0 FUN_101687e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101687e0(undefined4 param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  FPreferencesInfo *this;
  int iVar3;
  ushort *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd990;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::CacheDrivers(param_3);
  thunk_FUN_10164fc0(0);
  for (iVar3 = 0; iVar3 < DAT_103308c8; iVar3 = iVar3 + 1) {
    puVar4 = param_2;
    puVar1 = FString::operator*((FString *)(iVar3 * 0x2c + 0xc + _GObjPreferences));
    iVar2 = appStricmp(puVar1,puVar4);
    if (iVar2 == 0) {
      this = (FPreferencesInfo *)thunk_FUN_1015c2b0(0x2c,param_1);
      if (this != (FPreferencesInfo *)0x0) {
        FPreferencesInfo::FPreferencesInfo
                  (this,(FPreferencesInfo *)(_GObjPreferences + iVar3 * 0x2c));
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10168889 Catch@10168889

void Catch_10168889(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1016889d Catch@1016889d

void Catch_1016889d(void)

{
  appUnwindf((ushort *)&DAT_101dbad8,L"UObject::GetPreferences");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101688f0 FUN_101688f0

int FUN_101688f0(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = in_ECX[1] + -1;
  if (-1 < iVar5) {
    iVar3 = iVar5 * 0x1c;
    do {
      if (*(int *)(iVar3 + 8 + *in_ECX) == 0) {
        puVar1 = &DAT_101cdd44;
      }
      else {
        puVar1 = *(ushort **)(iVar3 + 4 + *in_ECX);
      }
      iVar2 = appStricmp(puVar1,param_1);
      if (iVar2 == 0) {
        thunk_FUN_10166450(iVar5,1);
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + -1;
      iVar3 = iVar3 + -0x1c;
    } while (-1 < iVar5);
    if (iVar4 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          iVar5 = in_ECX[4];
          in_ECX[4] = iVar5 / 2;
        } while (in_ECX[1] * 2 + 8 < iVar5 / 2);
      }
      thunk_FUN_1015dfd0();
    }
  }
  return iVar4;
}


// ==== 101689b0 FUN_101689b0

void FUN_101689b0(void)

{
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bd9a8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_101665e0(0,in_ECX[1]);
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*in_ECX);
  }
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10168a40 FUN_10168a40

void FUN_10168a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&DAT_103322e8,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 10168a80 FUN_10168a80

void FUN_10168a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd9c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = UObject::vftable;
  local_8 = 0;
  UObject::GObjCurCount = UObject::GObjCurCount + 1;
  UObject::GObjNewCount = UObject::GObjNewCount + 1;
  if (UObject::GObjPeakCount < UObject::GObjCurCount) {
    UObject::GObjPeakCount = UObject::GObjCurCount;
  }
  UObject::StaticAllocateObject(param_2,param_3,param_4,param_5,0,GError);
  ExceptionList = local_10;
  return;
}


// ==== 10168b10 Catch@10168b10

void Catch_10168b10(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10168b24 Catch@10168b24

void Catch_10168b24(void)

{
  appUnwindf((ushort *)&DAT_101d8fd4,L"UObject::UObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10168b70 FUN_10168b70

void FUN_10168b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd9d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)in_ECX = UObject::vftable;
  *(undefined4 *)(in_ECX + 4) = 0xffffffff;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(uint *)(in_ECX + 0x1c) = param_5 | 0x4000000;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = param_2;
  local_8 = 0;
  UObject::GObjCurCount = UObject::GObjCurCount + 1;
  UObject::GObjNewCount = UObject::GObjNewCount + 1;
  if (UObject::GObjPeakCount < UObject::GObjCurCount) {
    UObject::GObjPeakCount = UObject::GObjCurCount;
  }
  *(undefined4 *)(in_ECX + 0x28) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  if (UObject::GObjNoRegister != 0) {
    appFailAssert("!GObjNoRegister",".\\UnObj.cpp",0x76);
  }
  *(undefined4 *)(in_ECX + 0x20) = param_3;
  *(undefined4 *)(in_ECX + 0x18) = param_4;
  *(UObject **)(in_ECX + 0x14) = UObject::GAutoRegister;
  UObject::GAutoRegister = in_ECX;
  if ((UObject::GObjInitialized != 0) &&
     (*(UClass **)(in_ECX + 0x24) == &UObject::PrivateStaticClass)) {
    UObject::Register(in_ECX);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10168c55 Catch@10168c55

void Catch_10168c55(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10168c69 Catch@10168c69

void Catch_10168c69(void)

{
  appUnwindf((ushort *)&DAT_101d9090,L"UObject::UObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10168cd0 FUN_10168cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168cd0(ushort *param_1,UClass *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  UObject *in_ECX;
  UClass *pUVar4;
  UClass *pUVar5;
  UObject local_20 [12];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pUVar5 = param_2;
  puStack_c = &LAB_101bd9e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  if (param_1 == (ushort *)0x0) {
    pUVar4 = param_2;
    if (param_2 == (UClass *)0x0) {
      pUVar4 = *(UClass **)(in_ECX + 0x18);
    }
    ExceptionList = &local_10;
    puVar2 = (undefined4 *)UObject::MakeUniqueObjectName(local_20,pUVar4);
  }
  else {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffd0;
    puVar2 = (undefined4 *)FName::FName((FName *)&param_1,param_1,1);
    pUVar5 = param_2;
  }
  uVar1 = *puVar2;
  if (*(int *)(in_ECX + 0x18) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x18) + 4);
  }
  UObject::UnhashObject(in_ECX,iVar3);
  FOutputDevice::Logf((FOutputDevice *)GNull,(ushort *)GNull);
  *(undefined4 *)(in_ECX + 0x20) = uVar1;
  if (pUVar5 != (UClass *)0x0) {
    *(UClass **)(in_ECX + 0x18) = pUVar5;
  }
  UObject::HashObject(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10168d9f Catch@10168d9f

void Catch_10168d9f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10168db3 Catch@10168db3

void Catch_10168db3(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d91c8,L"UObject::Rename");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10168e30 FUN_10168e30

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168e30(uint param_1,int param_2)

{
  UStruct *pUVar1;
  int *piVar2;
  int iVar3;
  UObject *this;
  int iVar4;
  int in_ECX;
  ushort *puVar5;
  ushort *puVar6;
  int *piVar7;
  UStruct *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  undefined2 local_1248;
  undefined1 local_1246 [2046];
  undefined2 local_a48;
  undefined1 local_a46 [2046];
  ushort local_248 [262];
  int local_3c;
  int local_38;
  ushort *local_34;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bd9f0;
  local_10 = ExceptionList;
  local_18 = (ushort *)0x10168e53;
  local_14 = &stack0xffffedac;
  local_8 = 0;
  iVar4 = *(int *)(in_ECX + 0x24);
  if (((*(uint *)(iVar4 + 0x4a4) & 0x400) == 0) || (local_28 = 1, *(int *)(in_ECX + 4) == -1)) {
    local_28 = 0;
  }
  if (param_2 == 0) {
    if ((local_28 == 0) || (*(UPackage **)(in_ECX + 0x18) == UObject::GObjTransientPkg)) {
      iVar3 = *(int *)(iVar4 + 0x4c0);
    }
    else {
      iVar3 = *(int *)(*(UPackage **)(in_ECX + 0x18) + 0x20);
    }
    param_2 = *(int *)(_Names + iVar3 * 4) + 0xc;
  }
  ExceptionList = &local_10;
  local_1c = in_ECX;
  thunk_FUN_10119210(iVar4);
  while (piVar2 = local_2c, local_2c != (int *)0x0) {
    if ((local_2c[0x12] & param_1) == param_1) {
      local_1248 = 0;
      _memset(local_1246,0,0x7fe);
      puVar5 = (ushort *)(*(int *)(_Names + piVar2[8] * 4) + 0xc);
      local_34 = puVar5;
      if (local_28 == 0) {
        puVar6 = (ushort *)0x0;
        pUVar10 = (UObject *)0x0;
        if ((piVar2[0x12] & 0x40000U) == 0) {
          this = *(UObject **)(in_ECX + 0x24);
        }
        else {
          this = (UObject *)(**(code **)(*piVar2 + 0x74))();
        }
        puVar6 = UObject::GetPathName(this,pUVar10,puVar6);
      }
      else {
        puVar6 = (ushort *)(*(int *)(_Names + *(int *)(in_ECX + 0x20) * 4) + 0xc);
      }
      local_18 = puVar6;
      local_24 = thunk_FUN_10132a60(piVar2);
      iVar4 = thunk_FUN_1015c0a0(piVar2);
      if (local_24 == 0) {
        if (iVar4 == 0) {
          for (iVar4 = 0; in_ECX = local_1c, local_3c = iVar4, iVar4 < piVar2[0x10];
              iVar4 = iVar4 + 1) {
            if (piVar2[0x10] != 1) {
              appSprintf(local_248,(ushort *)L"%s[%i]",*(int *)(_Names + piVar2[8] * 4) + 0xc,iVar4)
              ;
              puVar5 = local_248;
              local_34 = puVar5;
            }
            (**(code **)(*piVar2 + 0xa0))(iVar4,&local_1248,local_1c,local_1c,0);
            (**(code **)(*(int *)GConfig + 0x30))(local_18,puVar5,&local_1248,param_2);
          }
        }
        else {
          iVar4 = (**(code **)(*(int *)GConfig + 0x1c))(puVar6,1,0,param_2);
          if (iVar4 == 0) {
            appFailAssert("Sec",".\\UnObj.cpp",0x445);
          }
          thunk_FUN_101688f0(puVar5);
          in_ECX = local_1c;
        }
      }
      else {
        local_38 = (**(code **)(*(int *)GConfig + 0x1c))(puVar6,1,0,param_2);
        if (local_38 == 0) {
          appFailAssert("Sec",".\\UnObj.cpp",0x436);
        }
        thunk_FUN_101688f0(puVar5);
        piVar7 = (int *)(piVar2[0x15] + local_1c);
        local_18 = *(ushort **)(*(int *)(local_24 + 0x78) + 0x44);
        for (local_20 = 0; in_ECX = local_1c, local_20 < piVar7[1]; local_20 = local_20 + 1) {
          local_a48 = 0;
          _memset(local_a46,0,0x7fe);
          iVar4 = local_20 * (int)local_18 + *piVar7;
          (**(code **)(**(int **)(local_24 + 0x78) + 0x98))(&local_a48,iVar4,iVar4,0);
          thunk_FUN_101653d0(puVar5,&local_a48);
        }
      }
    }
    local_2c = (int *)piVar2[0xe];
    thunk_FUN_10114340();
  }
  (**(code **)(*(int *)GConfig + 0x34))(0,0);
  pUVar1 = *(UStruct **)(in_ECX + 0x24);
  do {
    pUVar8 = pUVar1;
    pUVar1 = *(UStruct **)(pUVar8 + 0x34);
    if (pUVar1 == (UStruct *)0x0) break;
  } while (((byte)pUVar1[0x4a4] & 4) != 0);
  thunk_FUN_1012b800();
  while ((int)local_2c < DAT_1033088c) {
    pUVar1 = *(UStruct **)(_GObjObjects + (int)local_2c * 4);
    iVar4 = UStruct::IsChildOf(pUVar1,pUVar8);
    if (iVar4 != 0) {
      puVar5 = (ushort *)0x0;
      pUVar9 = (UClass *)0x0;
      iVar4 = 1;
      pUVar10 = UClass::GetDefaultObject((UClass *)pUVar1);
      UObject::LoadConfig(pUVar10,iVar4,pUVar9,puVar5);
    }
    thunk_FUN_1012ae60();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10169188 Catch@10169188

void Catch_10169188(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_101f843c);
}


// ==== 1016919c Catch@1016919c

void Catch_1016919c(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d9890,L"UObject::SaveConfig");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101692c0 FUN_101692c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101692c0(undefined4 param_1,UClass *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  UObject *pUVar2;
  ulong uVar3;
  ushort *puVar4;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bda00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_5 != 0) {
    ExceptionList = &local_10;
    thunk_FUN_1012b3e0(&UObject::PrivateStaticClass);
    while (local_20 < DAT_1033088c) {
      pUVar2 = *(UObject **)(_GObjObjects + local_20 * 4);
      iVar1 = UObject::IsA(pUVar2,param_2);
      if (iVar1 != 0) {
        (**(code **)(*param_3 + 0x9c))(param_1,pUVar2 + param_4,1);
        (**(code **)(**(int **)(_GObjObjects + local_20 * 4) + 0x44))();
      }
      thunk_FUN_1012ae60();
    }
  }
  (**(code **)(*param_3 + 0x9c))(param_1,*(int *)(param_2 + 0x4f4) + param_4,1);
  puVar4 = (ushort *)0x0;
  uVar3 = 0x4000;
  pUVar2 = UClass::GetDefaultObject(param_2);
  UObject::SaveConfig(pUVar2,uVar3,puVar4);
  ExceptionList = local_10;
  return;
}


// ==== 101693a2 Catch@101693a2

void Catch_101693a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101693b6 Catch@101693b6

void Catch_101693b6(void)

{
  appUnwindf((ushort *)&DAT_101d99b8,L"UObject::GlobalSetProperty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10169420 FUN_10169420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169420(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bda10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (DAT_10330880 != 0) {
    ExceptionList = &local_10;
    appFailAssert("GObjLoaded.Num()==0",".\\UnObj.cpp",0x69f);
  }
  if (DAT_103308bc != 0) {
    appFailAssert("GObjRegistrants.Num()==0",".\\UnObj.cpp",0x6a0);
  }
  if (UObject::GAutoRegister != (UObject *)0x0) {
    appFailAssert("!GAutoRegister",".\\UnObj.cpp",0x6a1);
  }
  UObject::RemoveFromRoot((UObject *)UObject::GObjTransientPkg);
  thunk_FUN_1012b3e0(&UObject::PrivateStaticClass);
  while (local_24 < DAT_1033088c) {
    puVar1 = (uint *)(*(int *)(_GObjObjects + local_24 * 4) + 0x1c);
    *puVar1 = *puVar1 | 0x42;
    thunk_FUN_1012ae60();
  }
  for (iVar3 = 0; iVar3 < DAT_10327ae4; iVar3 = iVar3 + 1) {
    iVar2 = *(int *)(_Names + iVar3 * 4);
    if (iVar2 != 0) {
      puVar1 = (uint *)(iVar2 + 4);
      *puVar1 = *puVar1 | 2;
    }
  }
  GExitPurge = 1;
  UObject::PurgeGarbage();
  thunk_FUN_10128110(0);
  thunk_FUN_10128110(0);
  thunk_FUN_10128110(0);
  thunk_FUN_10113560(0);
  thunk_FUN_10128110(0);
  thunk_FUN_10128110(0);
  thunk_FUN_10128110(0);
  thunk_FUN_10164fc0(0);
  thunk_FUN_10165190(0);
  this = (FOutputDevice *)0x0;
  if (UObject::GObjPackageRemap != (TMultiMap<FName,FName> *)0x0) {
    thunk_FUN_101673f0(1);
    this = extraout_ECX;
  }
  UObject::GObjInitialized = 0;
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this,(EName)GLog,(ushort *)0x2fb);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101695d4 Catch@101695d4

void Catch_101695d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 101695e8 Catch@101695e8

void Catch_101695e8(void)

{
  appUnwindf((ushort *)&DAT_101d9e1c,L"UObject::StaticExit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10169680 FUN_10169680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10169680(ushort *param_1,FOutputDevice *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  UPackage *pUVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  UClass *pUVar7;
  UProperty *pUVar8;
  ushort *puVar9;
  UObject *pUVar10;
  undefined4 *puVar11;
  int iVar12;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  FOutputDevice *extraout_ECX_02;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FOutputDevice *this_03;
  FOutputDevice *extraout_ECX_03;
  FOutputDevice *this_04;
  FOutputDevice *extraout_ECX_04;
  FOutputDevice *this_05;
  FOutputDevice *extraout_ECX_05;
  FOutputDevice *this_06;
  FOutputDevice *extraout_ECX_06;
  FOutputDevice *extraout_ECX_07;
  FOutputDevice *pFVar13;
  FOutputDevice *this_07;
  FOutputDevice *this_08;
  FOutputDevice *this_09;
  FOutputDevice *this_10;
  FOutputDevice *this_11;
  FOutputDevice *this_12;
  FOutputDevice *this_13;
  FOutputDevice *this_14;
  uint uVar14;
  int iVar15;
  wchar_t *pwVar16;
  ushort uStack_6f4;
  undefined1 auStack_6f2 [510];
  FOutputDevice local_4f4 [512];
  ushort local_2f4 [262];
  FArchiveCountMem local_e8 [56];
  int local_b0;
  int local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_90;
  int local_88;
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  uint local_78;
  int local_74;
  int local_70;
  FOutputDevice *local_6c;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  FOutputDevice *local_3c;
  void *local_38;
  int local_34;
  int local_2c;
  int *local_28;
  int local_24;
  UClass *local_1c;
  UClass *local_18 [2];
  UPackage *local_10;
  UObject *local_c;
  ushort *local_8;
  
  puStack_7c = &LAB_101bda58;
  local_80 = ExceptionList;
  local_84 = &stack0xfffff900;
  local_78 = 0;
  local_8 = param_1;
  ExceptionList = &local_80;
  iVar4 = ParseCommand(&local_8,(ushort *)&DAT_101da030);
  if (iVar4 == 0) {
    iVar4 = ParseCommand(&local_8,(ushort *)L"DUMPNATIVES");
    if (iVar4 == 0) {
      iVar4 = ParseCommand(&local_8,(ushort *)&DAT_101da08c);
      pFVar13 = param_2;
      if (iVar4 == 0) {
        iVar4 = ParseCommand(&local_8,(ushort *)&DAT_101da0f8);
        if (iVar4 == 0) {
          iVar4 = ParseCommand(&local_8,(ushort *)&DAT_101da160);
          if (iVar4 == 0) {
            iVar4 = ParseCommand(&local_8,(ushort *)L"GTIME");
            if (iVar4 == 0) {
              ExceptionList = local_80;
              return 0;
            }
            if (GLog == (undefined *)0x0) {
              ExceptionList = local_80;
              return 1;
            }
            FOutputDevice::Logf2(this_14,(ushort *)GLog);
            ExceptionList = local_80;
            return 1;
          }
          iVar4 = ParseCommand(&local_8,(ushort *)L"GARBAGE");
          uVar2 = DAT_1023fe50;
          if (iVar4 != 0) {
            DAT_1023fe50 = 0;
            UObject::CollectGarbage(-(uint)(GIsEditor != 0) & 0x80000 | 0x4000000);
            DAT_1023fe50 = uVar2;
            ExceptionList = local_80;
            return 1;
          }
          iVar4 = ParseCommand(&local_8,(ushort *)L"MARK");
          if (iVar4 != 0) {
            if (GLog != (undefined *)0x0) {
              FOutputDevice::Logf2(this,(ushort *)GLog);
            }
            thunk_FUN_1012b3e0();
            while ((int)local_10 < DAT_1033088c) {
              puVar1 = (uint *)(*(int *)(_GObjObjects + (int)local_10 * 4) + 0x1c);
              *puVar1 = *puVar1 | 0x8000000;
              thunk_FUN_1012ae60();
            }
            ExceptionList = local_80;
            return 1;
          }
          iVar4 = ParseCommand(&local_8,(ushort *)L"MARKCHECK");
          if (iVar4 != 0) {
            if (GLog != (undefined *)0x0) {
              FOutputDevice::Logf2(this_00,(ushort *)GLog);
            }
            thunk_FUN_1012b3e0();
            while ((int)local_10 < DAT_1033088c) {
              pUVar10 = *(UObject **)(_GObjObjects + (int)local_10 * 4);
              if (((*(uint *)(pUVar10 + 0x1c) & 0x8000000) == 0) && (GLog != (undefined *)0x0)) {
                UObject::GetFullName(pUVar10,(ushort *)0x0);
                FOutputDevice::Logf2(this_01,(ushort *)GLog);
              }
              thunk_FUN_1012ae60();
            }
            ExceptionList = local_80;
            return 1;
          }
          iVar4 = ParseCommand(&local_8,(ushort *)L"REFS");
          if (iVar4 == 0) {
            iVar4 = ParseCommand(&local_8,(ushort *)L"HASH");
            if (iVar4 != 0) {
              FName::DisplayHash(param_2);
              local_4c = 0;
              local_50 = 0;
              thunk_FUN_1012b3e0(&UObject::PrivateStaticClass);
              iVar4 = DAT_1033088c;
              while ((int)local_10 < iVar4) {
                local_4c = local_4c + 1;
                thunk_FUN_1012ae60();
              }
              for (uVar14 = 0; uVar14 < 0x1000; uVar14 = uVar14 + 1) {
                for (pUVar10 = (UObject *)(&UObject::GObjHash)[uVar14]; pUVar10 != (UObject *)0x0;
                    pUVar10 = *(UObject **)(pUVar10 + 8)) {
                }
              }
              ExceptionList = local_80;
              return 1;
            }
            iVar4 = ParseCommand(&local_8,(ushort *)L"CLASSES");
            if (iVar4 != 0) {
              FUN_10164130(&UObject::PrivateStaticClass,param_2,0);
              ExceptionList = local_80;
              return 1;
            }
            iVar4 = ParseCommand(&local_8,(ushort *)L"DEPENDENCIES");
            if (iVar4 == 0) {
              iVar4 = ParseCommand(&local_8,(ushort *)L"LIST");
              if (iVar4 != 0) {
                FOutputDevice::Log(param_2,(ushort *)L"Objects:");
                FOutputDevice::Log(param_2,(ushort *)&DAT_101da3c8);
                local_1c = (UClass *)0x0;
                local_18[0] = (UClass *)0x0;
                local_c = (UObject *)0x0;
                thunk_FUN_1015c160(local_8,L"CLASS=",&local_1c,0xffffffff);
                thunk_FUN_1015c190(local_8,L"PACKAGE=",local_18,0);
                thunk_FUN_1015c190(local_8,L"INSIDE=",&local_c,0);
                thunk_FUN_1015bd10();
                local_78._0_1_ = 5;
                thunk_FUN_1015bd70();
                local_78 = CONCAT31(local_78._1_3_,6);
                local_48 = 0;
                local_44 = 0;
                local_40 = 0;
                local_3c = (FOutputDevice *)0x0;
                thunk_FUN_1012b3e0(&UObject::PrivateStaticClass);
                pUVar7 = local_18[0];
                iVar4 = _GObjObjects;
                while (pUVar3 = local_10, (int)local_10 < DAT_1033088c) {
                  if (((((local_1c != (UClass *)0x0) &&
                        (iVar5 = UObject::IsA(*(UObject **)(iVar4 + (int)local_10 * 4),local_1c),
                        iVar5 != 0)) ||
                       ((pUVar7 != (UClass *)0x0 &&
                        (*(UClass **)(*(int *)(iVar4 + (int)pUVar3 * 4) + 0x18) == pUVar7)))) ||
                      ((local_c != (UObject *)0x0 &&
                       (iVar5 = UObject::IsIn(*(UObject **)(iVar4 + (int)pUVar3 * 4),local_c),
                       iVar5 != 0)))) ||
                     ((local_1c == (UClass *)0x0 &&
                      ((pUVar7 == (UClass *)0x0 && (local_c == (UObject *)0x0)))))) {
                    FArchiveCountMem::FArchiveCountMem
                              (local_e8,*(UObject **)(iVar4 + (int)pUVar3 * 4));
                    local_78 = CONCAT31(local_78._1_3_,7);
                    for (local_54 = 0;
                        (local_54 < local_34 &&
                        (*(int *)(local_54 * 0x10 + (int)local_38) !=
                         *(int *)(*(int *)(_GObjObjects + (int)pUVar3 * 4) + 0x24)));
                        local_54 = local_54 + 1) {
                    }
                    if (local_54 == local_34) {
                      local_a4 = *(undefined4 *)(*(int *)(_GObjObjects + (int)pUVar3 * 4) + 0x24);
                      local_a0 = 0;
                      local_9c = 0;
                      local_98 = 0;
                      local_54 = thunk_FUN_1015da10(&local_a4);
                    }
                    iVar4 = local_54;
                    if ((((local_1c != (UClass *)0x0) || (local_18[0] != (UClass *)0x0)) ||
                        (local_c != (UObject *)0x0)) &&
                       (puVar11 = (undefined4 *)thunk_FUN_1015c1c0(0xc,&local_28),
                       puVar11 != (undefined4 *)0x0)) {
                      *puVar11 = *(undefined4 *)(_GObjObjects + (int)pUVar3 * 4);
                      puVar11[1] = local_b0;
                      puVar11[2] = local_ac;
                    }
                    piVar6 = (int *)((int)local_38 + iVar4 * 0x10 + 4);
                    *piVar6 = *piVar6 + 1;
                    piVar6 = (int *)((int)local_38 + iVar4 * 0x10 + 8);
                    *piVar6 = *piVar6 + local_b0;
                    piVar6 = (int *)((int)local_38 + iVar4 * 0x10 + 0xc);
                    *piVar6 = *piVar6 + local_ac;
                    local_44 = local_44 + 1;
                    local_40 = local_40 + local_b0;
                    local_3c = local_3c + local_ac;
                    local_78 = CONCAT31(local_78._1_3_,6);
                    FArchiveCountMem::~FArchiveCountMem(local_e8);
                    pUVar7 = local_18[0];
                    iVar4 = _GObjObjects;
                  }
                  thunk_FUN_1012ae60();
                }
                if (local_24 != 0) {
                  appQsort(local_28,local_24,0xc,(_func_int_void_ptr_void_ptr *)&LAB_1015a8c0);
                  FOutputDevice::Logf(this_08,(ushort *)param_2);
                  for (iVar4 = 0; local_58 = iVar4, iVar4 < local_24; iVar4 = iVar4 + 1) {
                    UObject::GetFullName((UObject *)local_28[iVar4 * 3],(ushort *)0x0);
                    FOutputDevice::Logf(this_09,(ushort *)param_2);
                  }
                  FOutputDevice::Log(param_2,(ushort *)&DAT_101da480);
                }
                if (local_34 != 0) {
                  appQsort(local_38,local_34,0x10,(_func_int_void_ptr_void_ptr *)&LAB_1015a8e0);
                  FOutputDevice::Logf(this_10,(ushort *)param_2);
                  for (iVar4 = 0; local_74 = iVar4, iVar4 < local_34; iVar4 = iVar4 + 1) {
                    FOutputDevice::Logf(*(FOutputDevice **)
                                         (*(int *)(iVar4 * 0x10 + (int)local_38) + 0x20),
                                        (ushort *)param_2);
                  }
                  FOutputDevice::Log(param_2,(ushort *)&DAT_101da52c);
                }
                FOutputDevice::Logf(local_3c,(ushort *)param_2);
                local_78._0_1_ = 5;
                thunk_FUN_10162ed0();
                local_78 = (uint)local_78._1_3_ << 8;
                thunk_FUN_10162df0();
                ExceptionList = local_80;
                return 1;
              }
              iVar4 = ParseCommand(&local_8,(ushort *)L"VFHASH");
              if (iVar4 != 0) {
                FOutputDevice::Logf(this_11,(ushort *)param_2);
                thunk_FUN_10162fb0();
                while (pUVar3 = local_10, (int)local_10 < DAT_1033088c) {
                  FOutputDevice::Logf(_Names,(ushort *)param_2);
                  for (iVar4 = 0; local_90 = iVar4, iVar4 < 0x100; iVar4 = iVar4 + 1) {
                    local_6c = (FOutputDevice *)0x0;
                    for (iVar5 = *(int *)(*(int *)(_GObjObjects + (int)pUVar3 * 4) + 0xa4 +
                                         iVar4 * 4); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x3c)) {
                      local_6c = local_6c + 1;
                    }
                    FOutputDevice::Logf(local_6c,(ushort *)param_2);
                  }
                  thunk_FUN_1012ae60();
                }
                ExceptionList = local_80;
                return 1;
              }
              iVar4 = ParseCommand(&local_8,(ushort *)L"LINKERS");
              if (iVar4 != 0) {
                FOutputDevice::Logf(this_12,(ushort *)param_2);
                for (local_2c = 0; local_2c < DAT_103308a4; local_2c = local_2c + 1) {
                  iVar5 = thunk_FUN_10163650();
                  iVar4 = 0;
                  local_5c = 0;
                  for (iVar15 = 0; local_60 = iVar15, iVar15 < *(int *)(iVar5 + 0x7c);
                      iVar15 = iVar15 + 1) {
                    piVar6 = (int *)(*(int *)(iVar5 + 0x78) + iVar15 * 4);
                    if (*piVar6 != 0) {
                      iVar12 = appStrlen((ushort *)(*(int *)(_Names + *piVar6 * 4) + 0xc));
                      iVar4 = iVar4 + 0xe + iVar12 * 2;
                      local_5c = iVar4;
                    }
                  }
                  UObject::GetFullName(*(UObject **)(iVar5 + 0x34),(ushort *)0x0);
                  FString::operator*((FString *)(iVar5 + 0xa0));
                  FOutputDevice::Logf(this_13,(ushort *)param_2);
                }
                ExceptionList = local_80;
                return 1;
              }
              ExceptionList = local_80;
              return 0;
            }
            iVar4 = thunk_FUN_1015c190(local_8,L"PACKAGE=",local_18,0);
            if (iVar4 == 0) {
              ExceptionList = local_80;
              return 1;
            }
            thunk_FUN_101281e0();
            local_78 = CONCAT31(local_78._1_3_,3);
            for (iVar4 = 0; local_70 = iVar4, iVar4 < 0x10; iVar4 = iVar4 + 1) {
              appSprintf((ushort *)local_e8,(ushort *)L"EXCLUDE%i=",iVar4);
              iVar5 = Parse(local_8,(ushort *)local_e8,(FName *)&local_c);
              if (iVar5 != 0) {
                local_10 = UObject::CreatePackage
                                     ((UObject *)0x0,
                                      (ushort *)(*(int *)(_Names + (int)local_c * 4) + 0xc));
                thunk_FUN_101287a0(&local_10);
              }
            }
            UObject::GetPathName((UObject *)local_18[0],(UObject *)0x0,(ushort *)0x0);
            FOutputDevice::Logf(this_07,(ushort *)param_2);
            thunk_FUN_1012b3e0();
            pUVar10 = (UObject *)local_18[0];
            iVar4 = _GObjObjects;
            while ((int)local_10 < DAT_1033088c) {
              iVar5 = *(int *)(iVar4 + (int)local_10 * 4);
              if (*(UObject **)(iVar5 + 0x18) == pUVar10) {
                thunk_FUN_1015a5b0(param_2,pUVar10,iVar5);
                local_78 = CONCAT31(local_78._1_3_,3);
                thunk_FUN_1015a690();
                pUVar10 = (UObject *)local_18[0];
                iVar4 = _GObjObjects;
              }
              thunk_FUN_1012ae60();
            }
          }
          else {
            iVar4 = thunk_FUN_1015c160(local_8,L"CLASS=",local_18,0xffffffff);
            if (iVar4 == 0) {
              ExceptionList = local_80;
              return 1;
            }
            iVar4 = ParseObject(local_8,(ushort *)L"NAME=",local_18[0],&local_c,
                                (UObject *)0xffffffff);
            if (iVar4 == 0) {
              ExceptionList = local_80;
              return 1;
            }
            FOutputDevice::Logf(this_02,(ushort *)param_2);
            UObject::GetFullName(local_c,(ushort *)0x0);
            FOutputDevice::Logf(this_03,(ushort *)param_2);
            thunk_FUN_1012b3e0();
            pFVar13 = extraout_ECX_03;
            while (pUVar3 = local_10, (int)local_10 < DAT_1033088c) {
              thunk_FUN_1015a6e0(local_c,*(undefined4 *)(_GObjObjects + (int)local_10 * 4));
              local_78._0_1_ = 1;
              if (local_ac != 0) {
                UObject::GetFullName(*(UObject **)(_GObjObjects + (int)pUVar3 * 4),(ushort *)0x0);
                FOutputDevice::Logf(this_04,(ushort *)param_2);
              }
              local_78 = (uint)local_78._1_3_ << 8;
              thunk_FUN_1015a7e0();
              thunk_FUN_1012ae60();
              pFVar13 = extraout_ECX_04;
            }
            FOutputDevice::Logf(pFVar13,(ushort *)param_2);
            puVar9 = UObject::GetFullName(local_c,(ushort *)0x0);
            pwVar16 = L"Shortest reachability from root to %s:";
            FOutputDevice::Logf(this_05,(ushort *)param_2);
            thunk_FUN_10167460(&local_28,local_c,pwVar16,puVar9);
            local_78 = CONCAT31(local_78._1_3_,2);
            pFVar13 = extraout_ECX_05;
            for (iVar4 = 0; local_64 = iVar4, iVar4 < local_24; iVar4 = iVar4 + 1) {
              UObject::GetFullName((UObject *)local_28[iVar4],(ushort *)0x0);
              FOutputDevice::Logf(this_06,(ushort *)param_2);
              pFVar13 = extraout_ECX_06;
            }
            if (local_24 == 0) {
              FOutputDevice::Logf(pFVar13,(ushort *)param_2);
              pFVar13 = extraout_ECX_07;
            }
            FOutputDevice::Logf(pFVar13,(ushort *)param_2);
          }
          local_78 = local_78 & 0xffffff00;
          thunk_FUN_10118970();
          ExceptionList = local_80;
          return 1;
        }
        iVar4 = ParseToken(&local_8,(ushort *)local_4f4,0x100,1);
        pFVar13 = extraout_ECX_01;
        if (((iVar4 != 0) &&
            (pUVar7 = (UClass *)thunk_FUN_10149600(0xffffffff,local_4f4,0),
            pFVar13 = extraout_ECX_02, pUVar7 != (UClass *)0x0)) &&
           ((iVar4 = ParseToken(&local_8,local_2f4,0x100,1), pFVar13 = param_2, iVar4 != 0 &&
            (pUVar8 = (UProperty *)thunk_FUN_10147830(pUVar7,local_2f4), pUVar8 != (UProperty *)0x0)
            ))) {
          for (; *local_8 == 0x20; local_8 = local_8 + 1) {
          }
          UObject::GlobalSetProperty(local_8,pUVar7,pUVar8,*(int *)(pUVar8 + 0x54),1);
          ExceptionList = local_80;
          return 1;
        }
      }
      else {
        iVar4 = ParseToken(&local_8,local_2f4,0x100,1);
        if ((iVar4 != 0) && (iVar4 = thunk_FUN_10149600(0xffffffff,local_2f4,0), iVar4 != 0)) {
          iVar5 = ParseToken(&local_8,(ushort *)local_4f4,0x100,1);
          if ((iVar5 != 0) &&
             (piVar6 = (int *)thunk_FUN_10147830(iVar4,local_4f4), piVar6 != (int *)0x0)) {
            uStack_6f4 = 0;
            _memset(auStack_6f2,0,0x1fe);
            if (*(int *)(iVar4 + 0x4f8) != 0) {
              (**(code **)(*piVar6 + 0xa0))
                        (0,&uStack_6f4,*(undefined4 *)(iVar4 + 0x4f4),*(undefined4 *)(iVar4 + 0x4f4)
                         ,1);
            }
            FOutputDevice::Log(param_2,&uStack_6f4);
            ExceptionList = local_80;
            return 1;
          }
          pFVar13 = local_4f4;
        }
      }
      FOutputDevice::Logf(pFVar13,(EName)param_2,(ushort *)0x300);
    }
    else {
      local_88 = 0;
      puVar9 = (ushort *)GLog;
      pFVar13 = extraout_ECX;
      while (iVar4 = local_88, local_88 < 0x1000) {
        if (((&GNatives)[local_88] == (_func_void_FFrame_ptr_void_ptr **)UObject::execUndefined) &&
           (puVar9 != (ushort *)0x0)) {
          FOutputDevice::Logf2(pFVar13,puVar9);
          puVar9 = (ushort *)GLog;
          pFVar13 = extraout_ECX_00;
        }
        local_88 = iVar4 + 1;
      }
    }
  }
  else {
    (**(code **)(*(int *)GMalloc + 0xc))();
  }
  ExceptionList = local_80;
  return 1;
}


// ==== 1016a3ca Catch@1016a3ca

void Catch_1016a3ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_101f843c);
}


// ==== 1016a3de Catch@1016a3de

void Catch_1016a3de(void)

{
  appUnwindf((ushort *)&DAT_101da698,L"UObject::StaticExec");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016a760 FUN_1016a760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1016a760(UObject *param_1,ushort *param_2,uint param_3,int *param_4,FGuid *param_5)

{
  int iVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  UPackage *this;
  ushort *puVar4;
  ULinkerLoad *this_00;
  FOutputDevice *this_01;
  int iVar5;
  ushort local_434 [256];
  ushort local_234;
  undefined1 local_232 [518];
  undefined1 *local_2c;
  int local_28;
  int local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bda80;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffbc0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xfffffbc0;
  if ((UObject::GObjBeginLoadCount == 0) &&
     (ExceptionList = &local_10, puVar2 = &stack0xfffffbc0, UObject::GSWObjBeginLoadCount == 0)) {
    ExceptionList = &local_10;
    appFailAssert("GObjBeginLoadCount || GSWObjBeginLoadCount",".\\UnObj.cpp",0x9d4);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  iVar5 = 0;
  local_18 = 0;
  if (param_1 != (UObject *)0x0) {
    local_28 = 0;
    while ((local_28 < DAT_103308a4 && (iVar5 == 0))) {
      iVar1 = *(int *)(_GObjLoaders + local_28 * 4);
      if (*(UObject **)(iVar1 + 0x34) == param_1) {
        iVar5 = iVar1;
        local_18 = iVar1;
      }
      local_28 = local_28 + 1;
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  local_234 = 0;
  _memset(local_232,0,0x1fe);
  if (iVar5 == 0) {
    if (param_2 == (ushort *)0x0) {
      if (param_1 == (UObject *)0x0) {
        puVar4 = LocalizeError((ushort *)L"PackageResolveFailed",(ushort *)L"Core",(ushort *)0x0);
        appThrowf(puVar4);
      }
      iVar5 = appFindPackageFile((ushort *)(*(int *)(_Names + *(int *)(param_1 + 0x20) * 4) + 0xc),
                                 param_5,&local_234);
      if (iVar5 == 0) {
        if ((GIsUCC == 0) ||
           ((((param_3 & 0x20) != 0 &&
             (iVar5 = UObject::IsA(param_1,&UPackage::PrivateStaticClass), iVar5 != 0)) &&
            (*(int *)(param_1 + 0x34) != 0)))) {
          ExceptionList = local_10;
          return 0;
        }
        puVar4 = LocalizeError((ushort *)L"PackageNotFound",(ushort *)L"Core",(ushort *)0x0);
        appThrowf(puVar4);
      }
    }
    else {
      iVar5 = appFindPackageFile(param_2,param_5,&local_234);
      if (iVar5 == 0) {
        puVar4 = LocalizeError((ushort *)L"FileNotFound",(ushort *)L"Core",(ushort *)0x0);
        appThrowf(puVar4);
      }
      puVar4 = local_434;
      appStrcpy(puVar4,param_2);
      while( true ) {
        while( true ) {
          while (puVar3 = appStrstr(puVar4,(ushort *)&DAT_101da78c), puVar3 != (ushort *)0x0) {
            puVar4 = appStrstr(puVar4,(ushort *)&DAT_101da790);
            iVar5 = appStrlen((ushort *)&DAT_101da794);
            puVar4 = puVar4 + iVar5;
          }
          puVar3 = appStrstr(puVar4,(ushort *)&DAT_101da798);
          if (puVar3 == (ushort *)0x0) break;
          puVar4 = appStrstr(puVar4,(ushort *)&DAT_101da79c);
          puVar4 = puVar4 + 1;
        }
        puVar3 = appStrstr(puVar4,(ushort *)&DAT_101da7a0);
        if (puVar3 == (ushort *)0x0) break;
        puVar4 = appStrstr(puVar4,(ushort *)&DAT_101da7a4);
        puVar4 = puVar4 + 1;
      }
      puVar3 = appStrstr(puVar4,(ushort *)&DAT_101da7a8);
      if (puVar3 != (ushort *)0x0) {
        puVar3 = appStrstr(puVar4,(ushort *)&DAT_101da7ac);
        *puVar3 = 0;
      }
      this = UObject::CreatePackage((UObject *)0x0,puVar4);
      if (param_1 == (UObject *)0x0) {
        if (this == (UPackage *)0x0) {
          puVar4 = LocalizeError((ushort *)L"FilenameToPackage",(ushort *)L"Core",(ushort *)0x0);
          appThrowf(puVar4);
        }
        local_24 = 0;
        while ((param_1 = (UObject *)this, local_24 < DAT_103308a4 && (local_18 == 0))) {
          iVar5 = *(int *)(_GObjLoaders + local_24 * 4);
          if (*(UPackage **)(iVar5 + 0x34) == this) {
            local_18 = iVar5;
          }
          local_24 = local_24 + 1;
        }
      }
      else if (param_1 != (UObject *)this) {
        if (GLog != (undefined *)0x0) {
          UObject::GetFullName((UObject *)this,(ushort *)0x0);
          UObject::GetFullName(param_1,(ushort *)0x0);
          FOutputDevice::Logf2(this_01,(ushort *)GLog);
        }
        UObject::ResetLoaders(param_1,0,1);
      }
    }
  }
  else {
    appStrcpy(&local_234,(ushort *)&DAT_101da6fc);
  }
  if ((param_4 != (int *)0x0) && (iVar5 = (**(code **)(*param_4 + 0x8c))(), iVar5 == 0)) {
    puVar4 = LocalizeError((ushort *)L"Sandbox",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar4);
  }
  if (local_18 == 0) {
    local_2c = &stack0xfffffbbc;
    this_00 = ULinkerLoad::operator_new(0x52c,UObject::GObjTransientPkg);
    if (this_00 == (ULinkerLoad *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = ULinkerLoad::ULinkerLoad(this_00,param_1,&local_234,param_3);
    }
  }
  if ((param_5 != (FGuid *)0x0) && (iVar5 = thunk_FUN_1015aa70(), iVar5 != 0)) {
    puVar4 = LocalizeError((ushort *)L"PackageVersion",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar4);
  }
  ExceptionList = local_10;
  return local_18;
}


// ==== 1016ab66 Catch@1016ab66

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Catch_1016ab66(void)

{
  ushort *puVar1;
  wchar_t *pwVar2;
  ushort *puVar3;
  FOutputDevice *this;
  int unaff_EBP;
  ushort *puVar4;
  
  if ((GIsEditor == 0) || (GIsUCC != 0)) {
    pwVar2 = *(wchar_t **)(unaff_EBP + 0xc);
    if (pwVar2 == (wchar_t *)0x0) {
      if (*(int *)(unaff_EBP + 8) == 0) {
        pwVar2 = L"NULL";
      }
      else {
        pwVar2 = (wchar_t *)(*(int *)(_Names + *(int *)(*(int *)(unaff_EBP + 8) + 0x20) * 4) + 0xc);
      }
    }
    puVar1 = *(ushort **)(unaff_EBP + -0x1c);
    puVar4 = puVar1;
    puVar3 = LocalizeError((ushort *)L"FailedLoad",(ushort *)L"Core",(ushort *)0x0);
    UObject::SafeLoadError(*(ulong *)(unaff_EBP + 0x10),puVar1,puVar3,pwVar2,puVar4);
  }
  else {
    pwVar2 = *(wchar_t **)(unaff_EBP + 0xc);
    if (pwVar2 == (wchar_t *)0x0) {
      if (*(UObject **)(unaff_EBP + 8) == (UObject *)0x0) {
        pwVar2 = L"NULL";
      }
      else {
        pwVar2 = (wchar_t *)
                 UObject::GetPathName(*(UObject **)(unaff_EBP + 8),(UObject *)0x0,(ushort *)0x0);
      }
    }
    EdLoadErrorf(0,(ushort *)pwVar2);
    if (GLog != (undefined *)0x0) {
      LocalizeError((ushort *)L"FailedLoad",(ushort *)L"Core",(ushort *)0x0);
      FOutputDevice::Logf2(this,(ushort *)GLog);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return 0x1016ab52;
}


// ==== 1016ac60 Catch@1016ac60

void Catch_1016ac60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1016ac74 Catch@1016ac74

void Catch_1016ac74(void)

{
  appUnwindf((ushort *)&DAT_101da8dc,L"UObject::GetPackageLinker");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016ade0 FUN_1016ade0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1016ade0(UObject *param_1,ulong param_2,int *param_3,int param_4,void *param_5,int param_6)

{
  int iVar1;
  ushort *puVar2;
  ULinkerLoad *this;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bda90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((UObject::GObjBeginLoadCount == 0) &&
     (ExceptionList = &local_10, UObject::GSWObjBeginLoadCount == 0)) {
    ExceptionList = &local_10;
    appFailAssert("GObjBeginLoadCount || GSWObjBeginLoadCount",".\\UnObj.cpp",0xa4f);
  }
  iVar4 = 0;
  if (param_1 != (UObject *)0x0) {
    iVar3 = 0;
    iVar4 = 0;
    while ((iVar3 < DAT_103308a4 && (iVar4 == 0))) {
      iVar1 = *(int *)(_GObjLoaders + iVar3 * 4);
      if (*(UObject **)(iVar1 + 0x34) == param_1) {
        iVar4 = iVar1;
      }
      iVar3 = iVar3 + 1;
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((param_3 != (int *)0x0) && (iVar3 = (**(code **)(*param_3 + 0x8c))(), iVar3 == 0)) {
    puVar2 = LocalizeError((ushort *)L"Sandbox",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar2);
  }
  if (iVar4 == 0) {
    this = ULinkerLoad::operator_new(0x52c,UObject::GObjTransientPkg);
    if (this == (ULinkerLoad *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = ULinkerLoad::ULinkerLoad(this,param_1,param_5,param_6,param_2);
    }
  }
  if ((param_4 != 0) && (iVar3 = thunk_FUN_1015aa70(), iVar3 != 0)) {
    puVar2 = LocalizeError((ushort *)L"PackageVersion",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar2);
  }
  ExceptionList = local_10;
  return iVar4;
}


// ==== 1016af55 Catch@1016af55

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * Catch_1016af55(void)

{
  ushort *puVar1;
  wchar_t *pwVar2;
  ushort *puVar3;
  FOutputDevice *this;
  int unaff_EBP;
  ushort *puVar4;
  
  if ((GIsEditor == 0) || (GIsUCC != 0)) {
    if (*(int *)(unaff_EBP + 8) == 0) {
      pwVar2 = L"NULL";
    }
    else {
      pwVar2 = (wchar_t *)(*(int *)(_Names + *(int *)(*(int *)(unaff_EBP + 8) + 0x20) * 4) + 0xc);
    }
    puVar1 = *(ushort **)(unaff_EBP + -0x1c);
    puVar4 = puVar1;
    puVar3 = LocalizeError((ushort *)L"FailedLoad",(ushort *)L"Core",(ushort *)0x0);
    UObject::SafeLoadError(*(ulong *)(unaff_EBP + 0xc),puVar1,puVar3,pwVar2,puVar4);
  }
  else {
    if (*(UObject **)(unaff_EBP + 8) == (UObject *)0x0) {
      pwVar2 = L"NULL";
    }
    else {
      pwVar2 = (wchar_t *)
               UObject::GetPathName(*(UObject **)(unaff_EBP + 8),(UObject *)0x0,(ushort *)0x0);
    }
    EdLoadErrorf(0,(ushort *)pwVar2);
    if (GLog != (undefined *)0x0) {
      LocalizeError((ushort *)L"FailedLoad",(ushort *)L"Core",(ushort *)0x0);
      FOutputDevice::Logf2(this,(ushort *)GLog);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return &LAB_1016b02d;
}


// ==== 1016b043 Catch@1016b043

void Catch_1016b043(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1016b057 Catch@1016b057

void Catch_1016b057(void)

{
  appUnwindf((ushort *)&DAT_101da9d0,L"UObject::GetPackageLinker");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016b120 FUN_1016b120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * FUN_1016b120(UClass *param_1,UObject *param_2,ushort *param_3,ushort *param_4,uint param_5
                      ,UPackageMap *param_6)

{
  uint uVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  ushort *puVar4;
  ULinkerLoad *pUVar5;
  int local_7c;
  UObject *local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bdab0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == (UClass *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("ObjectClass",".\\UnObj.cpp",0xace);
  }
  if (param_3 == (ushort *)0x0) {
    appFailAssert("InName",".\\UnObj.cpp",0xacf);
  }
  local_18 = (UObject *)0x0;
  UObject::BeginLoad();
  local_8 = CONCAT31(local_8._1_3_,1);
  pUVar5 = (ULinkerLoad *)0x0;
  UObject::ResolveName(&param_2,&param_3,1,1);
  uVar1 = param_5;
  pUVar2 = param_2;
  do {
    pUVar3 = pUVar2;
    if (pUVar3 == (UObject *)0x0) break;
    pUVar2 = *(UObject **)(pUVar3 + 0x18);
  } while (*(UObject **)(pUVar3 + 0x18) != (UObject *)0x0);
  if ((param_5 & 0x40) == 0) {
    pUVar5 = UObject::GetPackageLinker(pUVar3,param_4,param_5 | 0x28,param_6,(FGuid *)0x0);
  }
  puVar4 = param_3;
  if (pUVar5 != (ULinkerLoad *)0x0) {
    FName::FName((FName *)&stack0xffffff6c,param_3,1);
    local_18 = ULinkerLoad::Create(pUVar5,param_1);
  }
  pUVar2 = param_2;
  if ((local_18 == (UObject *)0x0) &&
     (local_18 = UObject::StaticFindObject(param_1,param_2,puVar4,0), local_18 == (UObject *)0x0)) {
    if (pUVar2 != (UObject *)0x0) {
      UObject::GetPathName(pUVar2,(UObject *)0x0,(ushort *)0x0);
    }
    puVar4 = LocalizeError((ushort *)L"ObjectNotFound",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar4);
  }
  if ((((byte)GL2ThreadFilter & 4) == 0) || ((uVar1 & 0x8000) == 0)) {
    UObject::EndLoad();
  }
  else {
    if (UObject::GObjBeginLoadCount < 1) {
      appFailAssert("GObjBeginLoadCount>0",".\\UnObj.cpp",0xaed);
    }
    UObject::GObjBeginLoadCount = UObject::GObjBeginLoadCount + -1;
  }
  local_8 = 0;
  while (GL2GCState == 2) {
    appSleep(0.0);
  }
  if ((GL2GCState == 3) && (((byte)local_18[0x1c] & 2) != 0)) {
    thunk_FUN_1015a320();
    local_8._0_1_ = 4;
    (**(code **)(local_7c + 0x18))();
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_1015a3d0();
  }
  ExceptionList = local_10;
  return local_18;
}


// ==== 1016b2ce Catch@1016b2ce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * Catch_1016b2ce(void)

{
  uint uVar1;
  ushort *puVar2;
  UPackage *this;
  UObject *pUVar3;
  wchar_t *pwVar4;
  ushort *puVar5;
  int unaff_EBP;
  int iVar6;
  undefined4 uVar7;
  ushort *puVar8;
  
  UObject::EndLoad();
  this = *(UPackage **)(unaff_EBP + 0xc);
  uVar1 = *(uint *)(unaff_EBP + 0x18);
  if (this != (UPackage *)0x0) {
    if (((uVar1 & 0x4000) == 0) && (*(int *)(unaff_EBP + 0x14) == 0)) {
      thunk_FUN_10113ba0();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(this + 0x20);
      thunk_FUN_1015d900(unaff_EBP + -0x18,unaff_EBP + -0x38);
      for (iVar6 = 0; *(int *)(unaff_EBP + -0x20) = iVar6, iVar6 < *(int *)(unaff_EBP + -0x34);
          iVar6 = iVar6 + 1) {
        this = UObject::CreatePackage
                         ((UObject *)0x0,
                          (ushort *)
                          (*(int *)(_Names + *(int *)(*(int *)(unaff_EBP + -0x38) + iVar6 * 4) * 4)
                          + 0xc));
        *(UPackage **)(unaff_EBP + 0xc) = this;
        pUVar3 = UObject::StaticLoadObject
                           (*(UClass **)(unaff_EBP + 8),(UObject *)this,
                            *(ushort **)(unaff_EBP + 0x10),*(ushort **)(unaff_EBP + 0x14),
                            uVar1 | 0x4000,*(UPackageMap **)(unaff_EBP + 0x1c));
        *(UObject **)(unaff_EBP + -0x14) = pUVar3;
        if (pUVar3 != (UObject *)0x0) {
          *(UObject **)(unaff_EBP + -0x1c) = pUVar3;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          thunk_FUN_10118d50();
          *(undefined4 *)(unaff_EBP + -4) = 0;
          return &LAB_1016b38e;
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      thunk_FUN_10118d50();
    }
    if (this != (UPackage *)0x0) {
      pwVar4 = (wchar_t *)UObject::GetPathName((UObject *)this,(UObject *)0x0,(ushort *)0x0);
      goto LAB_1016b3cd;
    }
  }
  pwVar4 = L"None";
LAB_1016b3cd:
  iVar6 = *(int *)(_Names + *(int *)(*(int *)(unaff_EBP + 8) + 0x20) * 4) + 0xc;
  puVar2 = *(ushort **)(unaff_EBP + -0x28);
  uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
  puVar8 = puVar2;
  puVar5 = LocalizeError((ushort *)L"FailedLoadObject",(ushort *)L"Core",(ushort *)0x0);
  UObject::SafeLoadError(uVar1,puVar2,puVar5,iVar6,pwVar4,uVar7,puVar8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return (undefined1 *)0x1016b2b0;
}


// ==== 1016b45f Catch@1016b45f

void Catch_1016b45f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 1016b473 Catch@1016b473

void Catch_1016b473(void)

{
  wchar_t *pwVar1;
  ushort *puVar2;
  int unaff_EBP;
  wchar_t *pwVar3;
  undefined4 uVar4;
  
  appUnwindf((ushort *)&DAT_101dab54,L"UObject::StaticLoadObject");
  pwVar3 = *(wchar_t **)(unaff_EBP + 0x14);
  if (pwVar3 == (wchar_t *)0x0) {
    pwVar3 = L"NULL";
  }
  if (*(UObject **)(unaff_EBP + 0xc) == (UObject *)0x0) {
    pwVar1 = L"None";
  }
  else {
    pwVar1 = (wchar_t *)
             UObject::GetPathName(*(UObject **)(unaff_EBP + 0xc),(UObject *)0x0,(ushort *)0x0);
  }
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  puVar2 = UObject::GetPathName(*(UObject **)(unaff_EBP + 8),(UObject *)0x0,(ushort *)0x0);
  appUnwindf((ushort *)L"(%s %s.%s %s)",puVar2,pwVar1,uVar4,pwVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016b5d0 FUN_1016b5d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * FUN_1016b5d0(UClass *param_1,UObject *param_2,ushort *param_3,void *param_4,int param_5,
                      uint param_6,UPackageMap *param_7)

{
  UObject *pUVar1;
  UObject *pUVar2;
  ushort *puVar3;
  ULinkerLoad *pUVar4;
  int local_68;
  UObject *local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bdac8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == (UClass *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("ObjectClass",".\\UnObj.cpp",0xb1e);
  }
  if (param_3 == (ushort *)0x0) {
    appFailAssert("InName",".\\UnObj.cpp",0xb1f);
  }
  local_18 = (UObject *)0x0;
  UObject::BeginLoad();
  local_8 = CONCAT31(local_8._1_3_,1);
  pUVar4 = (ULinkerLoad *)0x0;
  UObject::ResolveName(&param_2,&param_3,1,1);
  pUVar1 = param_2;
  do {
    pUVar2 = pUVar1;
    if (pUVar2 == (UObject *)0x0) break;
    pUVar1 = *(UObject **)(pUVar2 + 0x18);
  } while (*(UObject **)(pUVar2 + 0x18) != (UObject *)0x0);
  if ((param_6 & 0x40) == 0) {
    pUVar4 = UObject::GetMemPackageLinker
                       (pUVar2,param_6 | 0x28,param_7,(FGuid *)0x0,param_4,param_5);
  }
  puVar3 = param_3;
  if (pUVar4 != (ULinkerLoad *)0x0) {
    FName::FName((FName *)&stack0xffffff80,param_3,1);
    local_18 = ULinkerLoad::Create(pUVar4,param_1);
  }
  pUVar1 = param_2;
  if ((local_18 == (UObject *)0x0) &&
     (local_18 = UObject::StaticFindObject(param_1,param_2,puVar3,0), local_18 == (UObject *)0x0)) {
    if (pUVar1 != (UObject *)0x0) {
      UObject::GetPathName(pUVar1,(UObject *)0x0,(ushort *)0x0);
    }
    puVar3 = LocalizeError((ushort *)L"ObjectNotFound",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar3);
  }
  UObject::EndLoad();
  local_8 = 0;
  while (GL2GCState == 2) {
    appSleep(0.0);
  }
  if ((GL2GCState == 3) && (((byte)local_18[0x1c] & 2) != 0)) {
    thunk_FUN_1015a320();
    local_8._0_1_ = 3;
    (**(code **)(local_68 + 0x18))();
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_1015a3d0();
  }
  ExceptionList = local_10;
  return local_18;
}


// ==== 1016b73e Catch@1016b73e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Catch_1016b73e(void)

{
  ushort *puVar1;
  wchar_t *pwVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 uVar5;
  ushort *puVar6;
  
  UObject::EndLoad();
  if (*(UObject **)(unaff_EBP + 0xc) == (UObject *)0x0) {
    pwVar2 = L"None";
  }
  else {
    pwVar2 = (wchar_t *)
             UObject::GetPathName(*(UObject **)(unaff_EBP + 0xc),(UObject *)0x0,(ushort *)0x0);
  }
  iVar4 = *(int *)(_Names + *(int *)(*(int *)(unaff_EBP + 8) + 0x20) * 4) + 0xc;
  puVar1 = *(ushort **)(unaff_EBP + -0x20);
  uVar5 = *(undefined4 *)(unaff_EBP + 0x10);
  puVar6 = puVar1;
  puVar3 = LocalizeError((ushort *)L"FailedLoadObject",(ushort *)L"Core",(ushort *)0x0);
  UObject::SafeLoadError(*(ulong *)(unaff_EBP + 0x1c),puVar1,puVar3,iVar4,pwVar2,uVar5,puVar6);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return 0x1016b724;
}


// ==== 1016b7ef Catch@1016b7ef

void Catch_1016b7ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1016b803 Catch@1016b803

void Catch_1016b803(void)

{
  wchar_t *pwVar1;
  ushort *puVar2;
  int unaff_EBP;
  undefined4 uVar3;
  wchar_t *pwVar4;
  
  appUnwindf((ushort *)&DAT_101dac30,L"UObject::StaticLoadObject");
  if (*(UObject **)(unaff_EBP + 0xc) == (UObject *)0x0) {
    pwVar1 = L"None";
  }
  else {
    pwVar1 = (wchar_t *)
             UObject::GetPathName(*(UObject **)(unaff_EBP + 0xc),(UObject *)0x0,(ushort *)0x0);
  }
  pwVar4 = L"NULL";
  uVar3 = *(undefined4 *)(unaff_EBP + 0x10);
  puVar2 = UObject::GetPathName(*(UObject **)(unaff_EBP + 8),(UObject *)0x0,(ushort *)0x0);
  appUnwindf((ushort *)L"(%s %s.%s %s)",puVar2,pwVar1,uVar3,pwVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016b900 FUN_1016b900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1016b900(UClass *param_1,UObject *param_2,ushort *param_3,ushort *param_4,uint param_5,
                UPackageMap *param_6)

{
  UObject *pUVar1;
  UObject *pUVar2;
  ushort *puVar3;
  ULinkerLoad *pUVar4;
  int iVar5;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bdae8;
  local_10 = ExceptionList;
  pUVar4 = (ULinkerLoad *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == (UClass *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("ObjectClass",".\\UnObj.cpp",0xb59);
  }
  if (param_3 == (ushort *)0x0) {
    appFailAssert("InName",".\\UnObj.cpp",0xb5a);
  }
  local_18 = 0;
  UObject::BeginLoad();
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar5 = -1;
  UObject::ResolveName(&param_2,&param_3,1,1);
  pUVar2 = param_2;
  do {
    pUVar1 = pUVar2;
    if (pUVar1 == (UObject *)0x0) break;
    pUVar2 = *(UObject **)(pUVar1 + 0x18);
  } while (*(UObject **)(pUVar1 + 0x18) != (UObject *)0x0);
  if ((param_5 & 0x40) == 0) {
    pUVar4 = UObject::GetPackageLinker(pUVar1,param_4,param_5 | 0x28,param_6,(FGuid *)0x0);
  }
  puVar3 = param_3;
  if (pUVar4 == (ULinkerLoad *)0x0) {
LAB_1016b9fb:
    if (iVar5 == -1) goto LAB_1016ba00;
    pUVar2 = (UObject *)0x0;
LAB_1016ba26:
    if (pUVar2 != (UObject *)0x0) goto LAB_1016ba79;
  }
  else {
    FName::FName((FName *)&stack0xffffffa4,param_3,1);
    iVar5 = ULinkerLoad::Check(pUVar4,param_1);
    if (iVar5 != -1) {
      local_18 = 1;
      goto LAB_1016b9fb;
    }
LAB_1016ba00:
    pUVar2 = UObject::StaticFindObject(param_1,param_2,puVar3,0);
    if (pUVar2 != (UObject *)0x0) {
      local_18 = 1;
      goto LAB_1016ba26;
    }
  }
  if (local_18 == 0) {
    if (param_2 != (UObject *)0x0) {
      UObject::GetPathName(param_2,(UObject *)0x0,(ushort *)0x0);
    }
    puVar3 = LocalizeError((ushort *)L"ObjectNotFound",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar3);
  }
LAB_1016ba79:
  UObject::EndLoad();
  ExceptionList = local_10;
  return local_18;
}


// ==== 1016ba99 Catch@1016ba99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Catch_1016ba99(void)

{
  uint uVar1;
  ushort *puVar2;
  UPackage *this;
  int iVar3;
  wchar_t *pwVar4;
  ushort *puVar5;
  int unaff_EBP;
  int iVar6;
  undefined4 uVar7;
  ushort *puVar8;
  
  UObject::EndLoad();
  this = *(UPackage **)(unaff_EBP + 0xc);
  uVar1 = *(uint *)(unaff_EBP + 0x18);
  if (this != (UPackage *)0x0) {
    if (((uVar1 & 0x4000) == 0) && (*(int *)(unaff_EBP + 0x14) == 0)) {
      thunk_FUN_10113ba0();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(this + 0x20);
      thunk_FUN_1015d900(unaff_EBP + -0x20,unaff_EBP + -0x40);
      for (iVar6 = 0; *(int *)(unaff_EBP + -0x24) = iVar6, iVar6 < *(int *)(unaff_EBP + -0x3c);
          iVar6 = iVar6 + 1) {
        this = UObject::CreatePackage
                         ((UObject *)0x0,
                          (ushort *)
                          (*(int *)(_Names + *(int *)(*(int *)(unaff_EBP + -0x40) + iVar6 * 4) * 4)
                          + 0xc));
        *(UPackage **)(unaff_EBP + 0xc) = this;
        iVar3 = UObject::ObjectChecked
                          (*(UClass **)(unaff_EBP + 8),(UObject *)this,
                           *(ushort **)(unaff_EBP + 0x10),*(ushort **)(unaff_EBP + 0x14),
                           uVar1 | 0x4000,*(UPackageMap **)(unaff_EBP + 0x1c));
        *(int *)(unaff_EBP + -0x14) = iVar3;
        if (iVar3 != 0) {
          *(int *)(unaff_EBP + -0x2c) = iVar3;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          thunk_FUN_10118d50();
          *(undefined4 *)(unaff_EBP + -4) = 0;
          return 0x1016ba85;
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      thunk_FUN_10118d50();
    }
    if (this != (UPackage *)0x0) {
      pwVar4 = (wchar_t *)UObject::GetPathName((UObject *)this,(UObject *)0x0,(ushort *)0x0);
      goto LAB_1016bb7b;
    }
  }
  pwVar4 = L"None";
LAB_1016bb7b:
  iVar6 = *(int *)(_Names + *(int *)(*(int *)(unaff_EBP + 8) + 0x20) * 4) + 0xc;
  puVar2 = *(ushort **)(unaff_EBP + -0x30);
  uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
  puVar8 = puVar2;
  puVar5 = LocalizeError((ushort *)L"FailedLoadObject",(ushort *)L"Core",(ushort *)0x0);
  UObject::SafeLoadError(uVar1,puVar2,puVar5,iVar6,pwVar4,uVar7,puVar8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return 0x1016ba85;
}


// ==== 1016bbc3 Catch@1016bbc3

void Catch_1016bbc3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_101f843c);
}


// ==== 1016bbd7 Catch@1016bbd7

void Catch_1016bbd7(void)

{
  wchar_t *pwVar1;
  ushort *puVar2;
  int unaff_EBP;
  wchar_t *pwVar3;
  undefined4 uVar4;
  
  appUnwindf((ushort *)&DAT_101dad0c,L"UObject::ObjectChecked");
  pwVar3 = *(wchar_t **)(unaff_EBP + 0x14);
  if (pwVar3 == (wchar_t *)0x0) {
    pwVar3 = L"NULL";
  }
  if (*(UObject **)(unaff_EBP + 0xc) == (UObject *)0x0) {
    pwVar1 = L"None";
  }
  else {
    pwVar1 = (wchar_t *)
             UObject::GetPathName(*(UObject **)(unaff_EBP + 0xc),(UObject *)0x0,(ushort *)0x0);
  }
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  puVar2 = UObject::GetPathName(*(UObject **)(unaff_EBP + 8),(UObject *)0x0,(ushort *)0x0);
  appUnwindf((ushort *)L"(%s %s.%s %s)",puVar2,pwVar1,uVar4,pwVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016bd10 FUN_1016bd10

undefined4 FUN_1016bd10(UObject *param_1,ushort *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  ULinkerLoad *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bdb00;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*param_2 != 0) {
    ExceptionList = &local_10;
    if ((param_4 != 0) &&
       (ExceptionList = &local_10, iVar2 = UObject::CheckSafePackage(param_2), iVar2 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
    UObject::BeginLoad();
    local_8 = CONCAT31(local_8._1_3_,1);
    this = UObject::GetPackageLinker(param_1,param_2,param_3 | 8,(UPackageMap *)0x0,(FGuid *)0x0);
    if (this != (ULinkerLoad *)0x0) {
      if ((param_3 & 0x10) == 0) {
        ULinkerLoad::LoadAllObjects(this);
      }
      uVar1 = *(undefined4 *)(this + 0x34);
      UObject::EndLoad();
      ExceptionList = local_10;
      return uVar1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1016bdb8 Catch@1016bdb8

undefined4 Catch_1016bdb8(void)

{
  ushort *puVar1;
  ushort *puVar2;
  int unaff_EBP;
  ushort *puVar3;
  
  UObject::EndLoad();
  puVar1 = *(ushort **)(unaff_EBP + -0x1c);
  puVar3 = puVar1;
  puVar2 = LocalizeError((ushort *)L"FailedLoadPackage",(ushort *)L"Core",(ushort *)0x0);
  UObject::SafeLoadError(*(ulong *)(unaff_EBP + 0x10),puVar1,puVar2,puVar3);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return 0x1016bda4;
}


// ==== 1016bdf0 Catch@1016bdf0

void Catch_1016bdf0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1016be04 Catch@1016be04

void Catch_1016be04(void)

{
  appUnwindf((ushort *)&DAT_101dae18,L"UObject::LoadPackage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016be70 FUN_1016be70

void FUN_1016be70(void)

{
  UFactory *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bdb18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UFactory::UFactory(in_ECX);
  *(undefined ***)in_ECX = UTextBufferFactory::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1016bed0 FUN_1016bed0

int FUN_1016bed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  UTextBuffer *this;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bdb30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  this = UTextBuffer::operator_new(0x4c,param_3,param_4,param_5);
  if (this == (UTextBuffer *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = UTextBuffer::UTextBuffer(this,(ushort *)&DAT_101dbcfc);
  }
  FString::operator=((FString *)(iVar1 + 0x40),(ushort *)*param_8);
  ExceptionList = local_10;
  return iVar1;
}


// ==== 1016bf47 Catch@1016bf47

void Catch_1016bf47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016bf5b Catch@1016bf5b

void Catch_1016bf5b(void)

{
  appUnwindf((ushort *)&DAT_101dbd00,L"UTextBufferFactory::FactoryCreateText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016bfa0 FUN_1016bfa0

void FUN_1016bfa0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bdb50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_1015dee0();
  ExceptionList = local_c;
  return;
}


// ==== 1016c010 FUN_1016c010

void FUN_1016c010(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bdb68;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)GMalloc + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_101689b0();
  ExceptionList = pvStack_c;
  return;
}


// ==== 1016c090 FUN_1016c090

void FUN_1016c090(UObject *param_1,ushort *param_2,ushort *param_3,ulong param_4,
                 UPackageMap *param_5)

{
  UObject::StaticLoadObject(&UClass::PrivateStaticClass,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ==== 1016c0c0 FUN_1016c0c0

void FUN_1016c0c0(UObject *param_1,ushort *param_2,void *param_3,int param_4,ulong param_5,
                 UPackageMap *param_6)

{
  UObject::StaticMemLoadObject
            (&UClass::PrivateStaticClass,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ==== 1016c100 FUN_1016c100

void FUN_1016c100(void)

{
  undefined1 *puVar1;
  ushort *puVar2;
  UPackage *this;
  FOutputDevice *this_00;
  wchar_t *pwVar3;
  FCriticalSection *local_24;
  FName local_20 [4];
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bdbac;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  UObject::GObjNoRegister = 1;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffc8;
  if (UObject::GLoadingCS == (FCriticalSection *)0x0) {
    ExceptionList = &local_10;
    local_24 = (FCriticalSection *)thunk_FUN_101088a0();
    local_8._0_1_ = 1;
    if (local_24 == (FCriticalSection *)0x0) {
      UObject::GLoadingCS = (FCriticalSection *)0x0;
      puVar1 = local_14;
    }
    else {
      UObject::GLoadingCS = (FCriticalSection *)FCriticalSection::FCriticalSection(local_24);
      puVar1 = local_14;
    }
  }
  local_14 = puVar1;
  local_8._0_1_ = 0;
  if (UObject::GDissociateImportsCS == (FCriticalSection *)0x0) {
    local_24 = (FCriticalSection *)thunk_FUN_101088a0();
    local_8._0_1_ = 2;
    if (local_24 == (FCriticalSection *)0x0) {
      UObject::GDissociateImportsCS = (FCriticalSection *)0x0;
    }
    else {
      UObject::GDissociateImportsCS =
           (FCriticalSection *)FCriticalSection::FCriticalSection(local_24);
    }
  }
  local_8._0_1_ = 0;
  if (UObject::GScriptingCS == (FCriticalSection *)0x0) {
    local_24 = (FCriticalSection *)thunk_FUN_101088a0();
    local_8._0_1_ = 3;
    if (local_24 == (FCriticalSection *)0x0) {
      UObject::GScriptingCS = (FCriticalSection *)0x0;
    }
    else {
      UObject::GScriptingCS = (FCriticalSection *)FCriticalSection::FCriticalSection(local_24);
    }
  }
  local_8._0_1_ = 0;
  pwVar3 = L"CONFLICTS";
  puVar2 = appCmdLine();
  DAT_1023fe54 = ParseParam(puVar2,(ushort *)pwVar3);
  pwVar3 = L"NOGC";
  puVar2 = appCmdLine();
  DAT_1023fe50 = ParseParam(puVar2,(ushort *)pwVar3);
  for (local_18 = 0; local_18 < 0x1000; local_18 = local_18 + 1) {
    (&UObject::GObjHash)[local_18] = (UObject **)0x0;
  }
  for (local_1c = 0; local_1c < 0x1000; local_1c = local_1c + 1) {
    (&UObject::GObjHashBuffer)[local_1c] = (UObject **)0x0;
  }
  UObject::GObjInitialized = 1;
  UObject::ProcessRegistrants();
  local_24 = (FCriticalSection *)&stack0xffffffc0;
  FName::FName((FName *)&stack0xffffffc0,(ushort *)L"Transient",1);
  this = UPackage::operator_new(0x44,0);
  if (this == (UPackage *)0x0) {
    UObject::GObjTransientPkg = (UPackage *)0x0;
  }
  else {
    UObject::GObjTransientPkg = (UPackage *)UPackage::UPackage(this);
  }
  UObject::AddToRoot((UObject *)UObject::GObjTransientPkg);
  local_24 = (FCriticalSection *)thunk_FUN_101088a0();
  local_8._0_1_ = 4;
  if (local_24 == (FCriticalSection *)0x0) {
    UObject::GObjPackageRemap = (TMultiMap<FName,FName> *)0x0;
  }
  else {
    UObject::GObjPackageRemap = (TMultiMap<FName,FName> *)thunk_FUN_10165850();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FName::FName(local_20,(ushort *)L"UnrealShare",1);
  FName::FName((FName *)&local_24,(ushort *)L"UnrealI",1);
  thunk_FUN_1015dc10();
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this_00,(EName)GLog,(ushort *)0x2fa);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1016c2ee Catch@1016c2ee

void Catch_1016c2ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 1016c302 Catch@1016c302

void Catch_1016c302(void)

{
  appUnwindf((ushort *)&DAT_101d9d40,L"UObject::StaticInit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016c3b0 FUN_1016c3b0

UStruct * FUN_1016c3b0(UObject *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      uint param_5,undefined4 param_6)

{
  UStruct *this;
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bdbd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("BaseClass",".\\UnObj.cpp",0xb98);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  this = (UStruct *)thunk_FUN_1016c090(param_2,param_3,param_4,param_5 | 8,param_6);
  if (this != (UStruct *)0x0) {
    iVar1 = UStruct::IsChildOf(this,(UStruct *)param_1);
    if (iVar1 == 0) {
      puVar2 = UObject::GetFullName(param_1,(ushort *)0x0);
      puVar3 = UObject::GetFullName((UObject *)this,(ushort *)0x0);
      puVar4 = LocalizeError((ushort *)L"LoadClassMismatch",(ushort *)L"Core",(ushort *)0x0);
      appThrowf(puVar4,puVar3,puVar2);
    }
  }
  ExceptionList = local_10;
  return this;
}


// ==== 1016c46e Catch@1016c46e

undefined1 * Catch_1016c46e(void)

{
  int unaff_EBP;
  
  UObject::SafeLoadError
            (*(ulong *)(unaff_EBP + 0x18),*(ushort **)(unaff_EBP + -0x18),
             *(ushort **)(unaff_EBP + -0x18));
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return &LAB_1016c493;
}


// ==== 1016c4a6 Catch@1016c4a6

void Catch_1016c4a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016c4ba Catch@1016c4ba

void Catch_1016c4ba(void)

{
  appUnwindf((ushort *)&DAT_101dad90,L"UObject::StaticLoadClass");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016c520 FUN_1016c520

UStruct * FUN_1016c520(UObject *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,uint param_6,undefined4 param_7)

{
  UStruct *this;
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bdbe0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("BaseClass",".\\UnObj.cpp",0xbaf);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  this = (UStruct *)thunk_FUN_1016c0c0(param_2,param_3,param_4,param_5,param_6 | 8,param_7);
  if (this != (UStruct *)0x0) {
    iVar1 = UStruct::IsChildOf(this,(UStruct *)param_1);
    if (iVar1 == 0) {
      puVar2 = UObject::GetFullName(param_1,(ushort *)0x0);
      puVar3 = UObject::GetFullName((UObject *)this,(ushort *)0x0);
      puVar4 = LocalizeError((ushort *)L"LoadClassMismatch",(ushort *)L"Core",(ushort *)0x0);
      appThrowf(puVar4,puVar3,puVar2);
    }
  }
  ExceptionList = local_10;
  return this;
}


// ==== 1016c5e2 Catch@1016c5e2

undefined1 * Catch_1016c5e2(void)

{
  int unaff_EBP;
  
  UObject::SafeLoadError
            (*(ulong *)(unaff_EBP + 0x1c),*(ushort **)(unaff_EBP + -0x18),
             *(ushort **)(unaff_EBP + -0x18));
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return &LAB_1016c607;
}


// ==== 1016c61a Catch@1016c61a

void Catch_1016c61a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016c62e Catch@1016c62e

void Catch_1016c62e(void)

{
  appUnwindf((ushort *)&DAT_101dade0,L"UObject::StaticArLoadClass");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016c6a0 FUN_1016c6a0

void FUN_1016c6a0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bdbf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1016bfa0();
  ExceptionList = local_c;
  return;
}


// ==== 1016c6f0 FUN_1016c6f0

void FUN_1016c6f0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bdc18;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1016c010();
  ExceptionList = local_c;
  return;
}


// ==== 1016c740 FUN_1016c740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c740(UObject *param_1,int param_2,uint param_3,ushort *param_4,undefined4 param_5,
                 ULinker *param_6,int param_7)

{
  uint *puVar1;
  int *piVar2;
  FArchive *pFVar3;
  ushort uVar4;
  UObject *pUVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined3 uVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  FGenerationInfo *this;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  FObjectImport *this_00;
  FObjectExport *pFVar15;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FOutputDevice *this_03;
  FOutputDevice *this_04;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  int *piVar20;
  ushort local_370 [256];
  int local_170;
  int local_16c;
  int local_134;
  int local_d0;
  int local_cc;
  int local_c4;
  int local_c0;
  undefined1 *local_bc;
  int local_a8;
  undefined4 local_8c;
  int local_80;
  int local_78;
  undefined1 *local_70;
  void *pvStack_6c;
  undefined1 *puStack_68;
  undefined4 local_64;
  undefined4 local_54;
  FString local_50 [8];
  uint local_48;
  int local_44;
  int local_40;
  ushort *local_3c;
  int local_38;
  int local_30;
  uint local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_8;
  
  puStack_68 = &LAB_101bdc84;
  pvStack_6c = ExceptionList;
  local_70 = &stack0xfffffc84;
  local_64 = 0;
  ExceptionList = &pvStack_6c;
  puVar19 = &stack0xfffffc84;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &pvStack_6c;
    appFailAssert("InOuter",".\\UnObj.cpp",0xd56);
    puVar19 = local_70;
  }
  local_70 = puVar19;
  if (param_4 == (ushort *)0x0) {
    appFailAssert("Filename",".\\UnObj.cpp",0xd57);
  }
  uVar6 = rdtsc();
  local_40 = -(int)uVar6;
  iVar9 = thunk_FUN_101495a0();
  if (iVar9 != 0) {
    iVar9 = thunk_FUN_101495a0();
    *(uint *)(iVar9 + 0x3c) = *(uint *)(iVar9 + 0x3c) | 1;
  }
  appStrcpy(local_370,param_4);
  for (local_d0 = appStrlen(local_370);
      (((0 < local_d0 && (uVar4 = local_370[local_d0 + -1], uVar4 != 0x5c)) && (uVar4 != 0x2f)) &&
      (uVar4 != 0x3a)); local_d0 = local_d0 + -1) {
  }
  local_370[local_d0] = 0;
  appStrcat(local_370,(ushort *)L"Save.tmp");
  iVar9 = *(int *)GWarn;
  LocalizeProgress((ushort *)L"Saving",(ushort *)L"Core",(ushort *)0x0);
  (**(code **)(iVar9 + 0x18))(GWarn,0,0);
  local_54 = 0;
  UObject::ResetLoaders(param_1,0,1);
  local_64 = CONCAT31(local_64._1_3_,1);
  thunk_FUN_1012b3e0();
  while ((int)local_8 < DAT_1033088c) {
    puVar1 = (uint *)(*(int *)(_GObjObjects + (int)local_8 * 4) + 0x1c);
    *puVar1 = *puVar1 & 0xfff8ffe7;
    thunk_FUN_1012ae60();
  }
  for (local_cc = 0; local_cc < DAT_10327ae4; local_cc = local_cc + 1) {
    iVar9 = *(int *)(_Names + local_cc * 4);
    if (iVar9 != 0) {
      puVar1 = (uint *)(iVar9 + 4);
      *puVar1 = *puVar1 & 0xfff8ffe7;
    }
  }
  local_64._0_1_ = 3;
  local_64._1_3_ = 0;
  thunk_FUN_1015acb0();
  local_64 = CONCAT31(local_64._1_3_,4);
  if (param_2 != 0) {
    (**(code **)(local_16c + 0x18))();
  }
  thunk_FUN_1012b3e0();
  iVar9 = _GObjObjects;
  while (puVar14 = local_8, (int)local_8 < DAT_1033088c) {
    pUVar5 = *(UObject **)(iVar9 + (int)local_8 * 4);
    if (((param_3 & *(uint *)(pUVar5 + 0x1c)) != 0) &&
       (iVar10 = UObject::IsIn(pUVar5,param_1), iVar10 != 0)) {
      local_8c = *(undefined4 *)(iVar9 + (int)puVar14 * 4);
      (**(code **)(local_16c + 0x18))();
      iVar9 = _GObjObjects;
    }
    thunk_FUN_1012ae60();
  }
  local_64 = CONCAT31(local_64._1_3_,3);
  thunk_FUN_1015ad70();
  local_10 = 0;
  local_64 = 6;
  local_8 = (undefined4 *)&stack0xfffffc7c;
  iVar9 = thunk_FUN_10168a40(0x114,UObject::GObjTransientPkg);
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = thunk_FUN_1014c310();
  }
  local_64 = CONCAT31(local_64._1_3_,7);
  local_10 = iVar9;
  thunk_FUN_1012b3e0();
  iVar10 = _GObjObjects;
  while (puVar14 = local_8, (int)local_8 < DAT_1033088c) {
    if ((*(uint *)(*(int *)(iVar10 + (int)local_8 * 4) + 0x1c) & 0x10) != 0) {
      thunk_FUN_1015aeb0();
      local_64 = CONCAT31(local_64._1_3_,8);
      (**(code **)(**(int **)(_GObjObjects + (int)puVar14 * 4) + 0x2c))();
      local_48 = *(uint *)(*(int *)(_GObjObjects + (int)puVar14 * 4) + 0x24);
      (**(code **)(local_170 + 0x18))();
      pUVar5 = *(UObject **)(_GObjObjects + (int)puVar14 * 4);
      iVar10 = UObject::IsIn(pUVar5,(UObject *)UObject::GObjTransientPkg);
      if (iVar10 != 0) {
        UObject::GetFullName(pUVar5,(ushort *)0x0);
        LocalizeError((ushort *)L"TransientImport",(ushort *)L"Core",(ushort *)0x0);
        FOutputDevice::Logf(this_01,(ushort *)GError);
      }
      local_64 = CONCAT31(local_64._1_3_,7);
      thunk_FUN_1015af70();
      iVar10 = _GObjObjects;
    }
    thunk_FUN_1012ae60();
  }
  local_64 = 10;
  thunk_FUN_1012b3e0();
  do {
    while( true ) {
      uVar16 = local_48;
      puVar7 = GLog;
      if (DAT_1033088c <= (int)local_48) {
        local_64._0_1_ = 0xd;
        local_64._1_3_ = 0;
        if (param_6 == (ULinker *)0x0) {
          puVar14 = (undefined4 *)appCreateGuid();
          *(undefined4 *)(iVar9 + 0x5c) = *puVar14;
          *(undefined4 *)(iVar9 + 0x60) = puVar14[1];
          *(undefined4 *)(iVar9 + 100) = puVar14[2];
          *(undefined4 *)(iVar9 + 0x68) = puVar14[3];
          thunk_FUN_101493f0();
          local_64._0_1_ = 0xe;
          thunk_FUN_10119480();
          local_64._0_1_ = 0xd;
          thunk_FUN_101211b0();
        }
        else {
          if (GLog != (undefined *)0x0) {
            FString::operator*((FString *)(param_6 + 0xa0));
            FOutputDevice::Logf2(this_04,(ushort *)puVar7);
          }
          *(undefined4 *)(iVar9 + 0x5c) = *(undefined4 *)(param_6 + 0x5c);
          *(undefined4 *)(iVar9 + 0x60) = *(undefined4 *)(param_6 + 0x60);
          *(undefined4 *)(iVar9 + 100) = *(undefined4 *)(param_6 + 100);
          *(undefined4 *)(iVar9 + 0x68) = *(undefined4 *)(param_6 + 0x68);
          thunk_FUN_10119480();
        }
        this = (FGenerationInfo *)thunk_FUN_101148f0();
        if (this != (FGenerationInfo *)0x0) {
          FGenerationInfo::FGenerationInfo(this,0,0);
        }
        thunk_FUN_1014b850();
        local_64 = 0x10;
        uVar12 = (**(code **)(*(int *)(iVar9 + 0xc0) + 0x28))();
        *(undefined4 *)(iVar9 + 0x48) = uVar12;
        for (puVar19 = (undefined1 *)0x0; local_bc = puVar19, (int)puVar19 < DAT_10327ae4;
            puVar19 = puVar19 + 1) {
          iVar10 = *(int *)(_Names + (int)puVar19 * 4);
          if ((iVar10 != 0) &&
             (local_8 = (undefined4 *)puVar19, (*(uint *)(iVar10 + 4) & 0x10) != 0)) {
            thunk_FUN_101493a0();
          }
        }
        local_64 = 0x12;
        iVar10 = 0;
        DAT_103287d0 = iVar9;
        if (param_6 != (ULinker *)0x0) {
          for (local_18 = 0; iVar10 = *(int *)(param_6 + 0x7c), local_18 < iVar10;
              local_18 = local_18 + 1) {
            iVar10 = local_18 * 4;
            iVar9 = *(int *)(param_6 + 0x78);
            piVar20 = (int *)(local_10 + 0x78);
            iVar13 = thunk_FUN_1015d8c0();
            if ((*(int *)(iVar10 + iVar9) == 0) || (iVar13 == -1)) {
              thunk_FUN_10148530();
              uVar12 = *(undefined4 *)(*piVar20 + iVar10);
              puVar14 = (undefined4 *)thunk_FUN_1015bc10();
              *puVar14 = uVar12;
            }
            else {
              iVar9 = *piVar20;
              uVar12 = *(undefined4 *)(iVar9 + iVar10);
              *(undefined4 *)(iVar9 + iVar10) = *(undefined4 *)(iVar9 + iVar13 * 4);
              *(undefined4 *)(iVar9 + iVar13 * 4) = uVar12;
            }
            *(undefined4 *)(iVar10 + *piVar20) = *(undefined4 *)(*(int *)(param_6 + 0x78) + iVar10);
            iVar9 = local_10;
          }
        }
        appQsort((void *)(*(int *)(iVar9 + 0x78) + iVar10 * 4),*(int *)(iVar9 + 0x7c) - iVar10,4,
                 (_func_int_void_ptr_void_ptr *)&LAB_101023ec);
        local_64 = 0x14;
        *(undefined4 *)(iVar9 + 0x44) = *(undefined4 *)(iVar9 + 0x7c);
        for (iVar10 = 0; local_c4 = iVar10, iVar10 < *(int *)(iVar9 + 0x7c); iVar10 = iVar10 + 1) {
          operator<<((FArchive *)(iVar9 + 0xc0),
                     *(FNameEntry **)(_Names + *(int *)(*(int *)(iVar9 + 0x78) + iVar10 * 4) * 4));
          *(int *)(*(int *)(iVar9 + 0x108) + *(int *)(*(int *)(iVar9 + 0x78) + iVar10 * 4) * 4) =
               iVar10;
        }
        local_64 = 0x16;
        thunk_FUN_1012b3e0();
        while (puVar14 = local_8, (int)local_8 < DAT_1033088c) {
          if (((*(uint *)(*(int *)(_GObjObjects + (int)local_8 * 4) + 0x1c) & 8) != 0) &&
             (this_00 = (FObjectImport *)thunk_FUN_10114cb0(), this_00 != (FObjectImport *)0x0)) {
            FObjectImport::FObjectImport(this_00,*(UObject **)(_GObjObjects + (int)puVar14 * 4));
          }
          thunk_FUN_1012ae60();
        }
        *(undefined4 *)(iVar9 + 0x54) = *(undefined4 *)(iVar9 + 0x88);
        local_64 = 0x18;
        DAT_103287d0 = iVar9;
        appQsort(*(void **)(iVar9 + 0x84),*(int *)(iVar9 + 0x88),0x1c,
                 (_func_int_void_ptr_void_ptr *)&LAB_101021d5);
        local_64 = 0x1a;
        thunk_FUN_1012b3e0();
        while (puVar14 = local_8, (int)local_8 < DAT_1033088c) {
          if (((*(uint *)(*(int *)(_GObjObjects + (int)local_8 * 4) + 0x1c) & 0x10) != 0) &&
             (pFVar15 = (FObjectExport *)thunk_FUN_10114d10(), pFVar15 != (FObjectExport *)0x0)) {
            FObjectExport::FObjectExport(pFVar15,*(UObject **)(_GObjObjects + (int)puVar14 * 4));
          }
          thunk_FUN_1012ae60();
        }
        local_64._1_3_ = 0;
        uVar8 = local_64._1_3_;
        local_64._0_1_ = 0x1c;
        local_64._1_3_ = 0;
        puVar14 = (undefined4 *)(undefined1 *)0x0;
        if (param_6 != (ULinker *)0x0) {
          thunk_FUN_10119640();
          local_64._0_1_ = 0x1d;
          thunk_FUN_1011a5a0();
          thunk_FUN_10113aa0();
          iVar10 = local_20;
          uVar16 = local_2c;
          local_64._0_1_ = 0x1e;
          local_20 = local_20 + local_2c;
          if (local_1c < local_20) {
            local_1c = ((int)(local_20 * 3 + (local_20 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + local_20;
            FArray::Realloc((FArray *)&local_24,1);
          }
          local_48 = uVar16;
          local_8 = (undefined4 *)(iVar10 + local_24);
          uVar17 = uVar16 & 3;
          puVar14 = local_8;
          for (uVar16 = uVar16 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
          }
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined1 *)puVar14 = 0;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          thunk_FUN_1016c6a0();
          local_64 = CONCAT31(local_64._1_3_,0x1f);
          for (iVar10 = 0; local_44 = iVar10, iVar10 < (int)local_2c; iVar10 = iVar10 + 1) {
            UObject::GetFullName(*(UObject **)(local_30 + iVar10 * 0x24 + 0x1c),(ushort *)0x0);
            thunk_FUN_10166390();
          }
          puVar11 = (ushort *)0x0;
          while (local_3c = puVar11, (int)puVar11 < (int)*(undefined1 **)(param_6 + 0x94)) {
            UObject::GetPathName(*(UObject **)(iVar9 + 0x34),(UObject *)0x0,(ushort *)0x0);
            ULinker::GetExportFullName(param_6,(int)local_50,puVar11);
            local_64._0_1_ = 0x20;
            piVar20 = (int *)thunk_FUN_1015da90();
            local_64 = CONCAT31(local_64._1_3_,0x1f);
            FString::~FString(local_50);
            if (piVar20 == (int *)0x0) {
              pFVar15 = (FObjectExport *)thunk_FUN_10114d10(0x24);
              if (pFVar15 != (FObjectExport *)0x0) {
                FObjectExport::FObjectExport(pFVar15,(UObject *)0x0);
              }
              puVar11 = (ushort *)((int)puVar11 + 1);
            }
            else {
              local_8 = (undefined4 *)(iVar9 + 0x90);
              puVar14 = (undefined4 *)thunk_FUN_10114d10(0x24);
              if (puVar14 != (undefined4 *)0x0) {
                puVar18 = (undefined4 *)(local_30 + *piVar20 * 0x24);
                for (iVar10 = 9; iVar9 = local_10, iVar10 != 0; iVar10 = iVar10 + -1) {
                  *puVar14 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar14 = puVar14 + 1;
                }
              }
              local_8 = (undefined4 *)(local_30 + *piVar20 * 0x24);
              iVar10 = thunk_FUN_1015bcc0();
              if (*(int *)(iVar10 + 0x1c) != local_8[7]) {
                appFailAssert("Linker->ExportMap.Last()._Object == Orig(*Find)._Object",
                              ".\\UnObj.cpp",0xe2d);
              }
              *(undefined1 *)(local_24 + *piVar20) = 1;
              puVar11 = (ushort *)((int)local_3c + 1);
            }
          }
          local_8 = (undefined4 *)*(undefined1 **)(param_6 + 0x94);
          for (iVar10 = 0; local_78 = iVar10, iVar10 < local_20; iVar10 = iVar10 + 1) {
            if ((*(char *)(local_24 + iVar10) == '\0') &&
               (puVar14 = (undefined4 *)thunk_FUN_10114d10(), puVar14 != (undefined4 *)0x0)) {
              puVar18 = (undefined4 *)(local_30 + iVar10 * 0x24);
              for (iVar13 = 9; iVar9 = local_10, iVar13 != 0; iVar13 = iVar13 + -1) {
                *puVar14 = *puVar18;
                puVar18 = puVar18 + 1;
                puVar14 = puVar14 + 1;
              }
            }
          }
          local_64._0_1_ = 0x1e;
          thunk_FUN_1016c6f0();
          local_64._0_1_ = 0x1d;
          thunk_FUN_10118750();
          local_64._0_1_ = 0x1c;
          thunk_FUN_10121450();
          puVar14 = local_8;
          uVar8 = local_64._1_3_;
        }
        local_64._1_3_ = uVar8;
        appQsort((void *)(*(int *)(iVar9 + 0x90) + (int)puVar14 * 0x24),
                 *(int *)(iVar9 + 0x94) - (int)puVar14,0x24,
                 (_func_int_void_ptr_void_ptr *)&LAB_1010330f);
        *(undefined4 *)(iVar9 + 0x4c) = *(undefined4 *)(iVar9 + 0x94);
        for (local_a8 = 0; local_a8 < *(int *)(iVar9 + 0x94); local_a8 = local_a8 + 1) {
          iVar10 = *(int *)(iVar9 + 0x90) + local_a8 * 0x24;
          if (*(int *)(iVar10 + 0x1c) != 0) {
            *(int *)(*(int *)(iVar9 + 0xfc) + *(int *)(*(int *)(iVar10 + 0x1c) + 4) * 4) =
                 local_a8 + 1;
          }
        }
        for (local_80 = 0; local_80 < *(int *)(iVar9 + 0x88); local_80 = local_80 + 1) {
          *(int *)(*(int *)(iVar9 + 0xfc) +
                  *(int *)(*(int *)(*(int *)(iVar9 + 0x84) + local_80 * 0x1c + 0x10) + 4) * 4) =
               -1 - local_80;
        }
        local_64 = 0x24;
        for (local_38 = 0; local_38 < *(int *)(iVar9 + 0x94); local_38 = local_38 + 1) {
          local_8 = (undefined4 *)(local_38 * 0x24);
          piVar20 = (int *)((int)local_8 + *(int *)(iVar9 + 0x90));
          if (piVar20[7] != 0) {
            pUVar5 = (UObject *)piVar20[7];
            iVar10 = UObject::IsA(pUVar5,&UClass::PrivateStaticClass);
            if ((iVar10 == 0) &&
               (iVar10 = *(int *)(*(int *)(iVar9 + 0xfc) + *(int *)(*(int *)(pUVar5 + 0x24) + 4) * 4
                                 ), *piVar20 = iVar10, iVar10 == 0)) {
              appFailAssert("Export.ClassIndex!=0",".\\UnObj.cpp",0xe59);
            }
            pUVar5 = (UObject *)piVar20[7];
            iVar10 = UObject::IsA(pUVar5,&UStruct::PrivateStaticClass);
            if (((iVar10 != 0) && (*(int *)(pUVar5 + 0x34) != 0)) &&
               (iVar10 = *(int *)(*(int *)(iVar9 + 0xfc) + *(int *)(*(int *)(pUVar5 + 0x34) + 4) * 4
                                 ), piVar20[1] = iVar10, iVar10 == 0)) {
              appFailAssert("Export.SuperIndex!=0",".\\UnObj.cpp",0xe61);
            }
            if (*(UObject **)(piVar20[7] + 0x18) != param_1) {
              iVar10 = UObject::IsIn(*(UObject **)(piVar20[7] + 0x18),param_1);
              if (iVar10 == 0) {
                appFailAssert("Export._Object->GetOuter()->IsIn(InOuter)",".\\UnObj.cpp",0xe68);
              }
              iVar9 = *(int *)(*(int *)(iVar9 + 0xfc) +
                              *(int *)(*(int *)(piVar20[7] + 0x18) + 4) * 4);
              piVar20[2] = iVar9;
              if (iVar9 < 1) {
                appFailAssert("Export.PackageIndex>0",".\\UnObj.cpp",0xe6a);
              }
            }
            iVar9 = local_10;
            piVar2 = (int *)(local_10 + 0xc0);
            iVar10 = (**(code **)(*piVar2 + 0x28))();
            piVar20[6] = iVar10;
            (**(code **)(*(int *)piVar20[7] + 0x2c))();
            puVar14 = local_8;
            iVar9 = *(int *)(iVar9 + 0x90);
            iVar10 = (**(code **)(*piVar2 + 0x28))();
            piVar20[5] = iVar10 - *(int *)((int)puVar14 + iVar9 + 0x18);
            iVar9 = local_10;
          }
        }
        local_64 = 0x26;
        pFVar3 = (FArchive *)(iVar9 + 0xc0);
        uVar12 = (**(code **)(*(int *)pFVar3 + 0x28))();
        *(undefined4 *)(iVar9 + 0x58) = uVar12;
        for (local_14 = 0; local_14 < *(int *)(iVar9 + 0x88); local_14 = local_14 + 1) {
          iVar10 = *(int *)(iVar9 + 0x84) + local_14 * 0x1c;
          pUVar5 = *(UObject **)(*(int *)(iVar10 + 0x10) + 0x18);
          if (pUVar5 != (UObject *)0x0) {
            iVar13 = UObject::IsIn(pUVar5,param_1);
            if (iVar13 != 0) {
              appFailAssert("!Import.XObject->GetOuter()->IsIn(InOuter)",".\\UnObj.cpp",0xe7f);
            }
            iVar13 = *(int *)(*(int *)(iVar9 + 0xfc) +
                             *(int *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x18) + 4) * 4);
            *(int *)(iVar10 + 8) = iVar13;
            if (-1 < iVar13) {
              appFailAssert("Import.PackageIndex<0",".\\UnObj.cpp",0xe81);
            }
          }
          thunk_FUN_10148720();
        }
        local_64 = 0x28;
        uVar12 = (**(code **)(*(int *)pFVar3 + 0x28))();
        *(undefined4 *)(iVar9 + 0x50) = uVar12;
        for (iVar10 = 0; local_c0 = iVar10, iVar10 < *(int *)(iVar9 + 0x94); iVar10 = iVar10 + 1) {
          thunk_FUN_10148620();
        }
        local_64 = 6;
        if (param_7 != 0) {
          FString::FString((FString *)&local_30,(ushort *)L"SafePackage");
          local_64._0_1_ = 0x2a;
          operator<<(pFVar3,(FString *)&local_30);
          local_64 = CONCAT31(local_64._1_3_,6);
          FString::~FString((FString *)&local_30);
        }
        local_64 = CONCAT31(local_64._1_3_,0x2b);
        iVar10 = *(int *)GWarn;
        puVar11 = LocalizeProgress((ushort *)L"Closing",(ushort *)L"Core",(ushort *)0x0);
        (**(code **)(iVar10 + 0x18))(GWarn,0,0,puVar11);
        puVar14 = (undefined4 *)thunk_FUN_1015bc70();
        *puVar14 = *(undefined4 *)(iVar9 + 0x4c);
        iVar10 = thunk_FUN_1015bc70();
        *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar9 + 0x44);
        (**(code **)(*(int *)pFVar3 + 0x3c))();
        thunk_FUN_1014b850(pFVar3);
        local_54 = 1;
        local_64 = 0;
        FUN_1016d94c();
        return;
      }
      iVar10 = *(int *)(_GObjObjects + local_48 * 4);
      if ((*(uint *)(iVar10 + 0x1c) & 0x18) != 0) break;
LAB_1016ccb1:
      thunk_FUN_1012ae60();
    }
    puVar1 = (uint *)(*(int *)(_Names + *(int *)(iVar10 + 0x20) * 4) + 4);
    *puVar1 = *puVar1 | 0x70010;
    iVar10 = *(int *)(*(int *)(_GObjObjects + local_48 * 4) + 0x18);
    if (iVar10 != 0) {
      puVar1 = (uint *)(*(int *)(_Names + *(int *)(iVar10 + 0x20) * 4) + 4);
      *puVar1 = *puVar1 | 0x70010;
    }
    pUVar5 = *(UObject **)(_GObjObjects + local_48 * 4);
    if ((*(uint *)(pUVar5 + 0x1c) & 8) == 0) {
      UObject::GetFullName(pUVar5,(ushort *)0x0);
      FOutputDevice::Logf(this_03,(EName)GNull,(ushort *)0x309);
      goto LAB_1016ccb1;
    }
    puVar1 = (uint *)(*(int *)(_Names + *(int *)(*(int *)(pUVar5 + 0x24) + 0x20) * 4) + 4);
    *puVar1 = *puVar1 | 0x70010;
    if (*(int *)(*(int *)(*(int *)(_GObjObjects + local_48 * 4) + 0x24) + 0x18) == 0) {
      appFailAssert("It->Class->GetOuter()",".\\UnObj.cpp",0xdaa);
    }
    puVar1 = (uint *)(*(int *)(_Names + *(int *)(*(int *)(*(int *)(*(int *)(_GObjObjects +
                                                                           uVar16 * 4) + 0x24) +
                                                         0x18) + 0x20) * 4) + 4);
    *puVar1 = *puVar1 | 0x70010;
    pUVar5 = *(UObject **)(_GObjObjects + uVar16 * 4);
    if ((*(uint *)(pUVar5 + 0x1c) & 4) != 0) goto LAB_1016ccb1;
    UObject::GetFullName(pUVar5,(ushort *)0x0);
    FOutputDevice::Logf((FOutputDevice *)GWarn,(ushort *)GWarn);
    thunk_FUN_1012b3e0();
    while (puVar14 = local_8, (int)local_8 < DAT_1033088c) {
      thunk_FUN_1015a6e0();
      local_64._0_1_ = 0xb;
      if (local_134 != 0) {
        UObject::GetFullName(*(UObject **)(_GObjObjects + (int)puVar14 * 4),(ushort *)0x0);
        FOutputDevice::Logf(this_02,(ushort *)GWarn);
      }
      local_64 = CONCAT31(local_64._1_3_,10);
      thunk_FUN_1015a7e0();
      thunk_FUN_1012ae60();
    }
    UObject::GetFullName(*(UObject **)(_GObjObjects + uVar16 * 4),(ushort *)0x0);
    puVar11 = LocalizeError((ushort *)L"FailedSavePrivate",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar11);
    thunk_FUN_1012ae60();
  } while( true );
}


// ==== 1016d619 Catch@1016d619

void Catch_1016d619(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x88);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_101f843c);
}


// ==== 1016d630 Catch@1016d630

void Catch_1016d630(void)

{
  appUnwindf((ushort *)&DAT_101db308,L"RewriteSummary");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d64b Catch@1016d64b

void Catch_1016d64b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0xb8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_101f843c);
}


// ==== 1016d662 Catch@1016d662

void Catch_1016d662(void)

{
  appUnwindf((ushort *)&DAT_101db2cc,L"SaveExportMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d67d Catch@1016d67d

void Catch_1016d67d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0xc0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_101f843c);
}


// ==== 1016d694 Catch@1016d694

void Catch_1016d694(void)

{
  appUnwindf((ushort *)&DAT_101db2c4,L"SaveImportMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d6af Catch@1016d6af

void Catch_1016d6af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + -200);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x68,&DAT_101f843c);
}


// ==== 1016d6c6 Catch@1016d6c6

void Catch_1016d6c6(void)

{
  appUnwindf((ushort *)&DAT_101db260,L"SaveExports");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d6e1 Catch@1016d6e1

void Catch_1016d6e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0xb4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_101f843c);
}


// ==== 1016d6f8 Catch@1016d6f8

void Catch_1016d6f8(void)

{
  appUnwindf((ushort *)&DAT_101db1b4,L"SetLinkerMappings");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d713 Catch@1016d713

void Catch_1016d713(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0x94);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x58,&DAT_101f843c);
}


// ==== 1016d72a Catch@1016d72a

void Catch_1016d72a(void)

{
  appUnwindf((ushort *)&DAT_101db1ac,L"SortExports");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d745 Catch@1016d745

void Catch_1016d745(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0xd0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_101f843c);
}


// ==== 1016d75c Catch@1016d75c

void Catch_1016d75c(void)

{
  appUnwindf((ushort *)&DAT_101db160,L"BuildExports");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d777 Catch@1016d777

void Catch_1016d777(void)

{
  undefined4 *unaff_EBP;
  
  *unaff_EBP = unaff_EBP[-0x27];
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP,&DAT_101f843c);
}


// ==== 1016d78e Catch@1016d78e

void Catch_1016d78e(void)

{
  appUnwindf((ushort *)&DAT_101db158,L"SortImports");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d7a9 Catch@1016d7a9

void Catch_1016d7a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0xbc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016d7c0 Catch@1016d7c0

void Catch_1016d7c0(void)

{
  appUnwindf((ushort *)&DAT_101db150,L"BuildImportMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d7db Catch@1016d7db

void Catch_1016d7db(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0xa4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1016d7f2 Catch@1016d7f2

void Catch_1016d7f2(void)

{
  appUnwindf((ushort *)&DAT_101db148,L"SaveNames");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d80d Catch@1016d80d

void Catch_1016d80d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0xcc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 1016d824 Catch@1016d824

void Catch_1016d824(void)

{
  appUnwindf((ushort *)&DAT_101db140,L"SortNames");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d83f Catch@1016d83f

void Catch_1016d83f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0xac);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_101f843c);
}


// ==== 1016d856 Catch@1016d856

void Catch_1016d856(void)

{
  appUnwindf((ushort *)&DAT_101db138,L"BuildNameMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d871 Catch@1016d871

void Catch_1016d871(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0xc4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_101f843c);
}


// ==== 1016d888 Catch@1016d888

void Catch_1016d888(void)

{
  appUnwindf((ushort *)&DAT_101db130,L"SaveSummary");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d8a3 Catch@1016d8a3

void Catch_1016d8a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x8c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_101f843c);
}


// ==== 1016d8ba Catch@1016d8ba

void Catch_1016d8ba(void)

{
  appUnwindf((ushort *)&DAT_101db0c4,L"ExportNames");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d8d5 Catch@1016d8d5

void Catch_1016d8d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x90);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_101f843c);
}


// ==== 1016d8ec Catch@1016d8ec

void Catch_1016d8ec(void)

{
  appUnwindf((ushort *)&DAT_101db020,L"TagImports");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016d907 Catch@1016d907

undefined * Catch_1016d907(void)

{
  int unaff_EBP;
  
  (**(code **)(*(int *)GFileManager + 0x14))(unaff_EBP + -0x310,0,0);
  FOutputDevice::Logf(*(FOutputDevice **)(unaff_EBP + 0x74),
                      (EName)*(FOutputDevice **)(unaff_EBP + 0x74),(ushort *)0x2ff);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return &DAT_1016d949;
}


// ==== 1016d94c FUN_1016d94c

int FUN_1016d94c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this;
  FOutputDevice *this_00;
  int unaff_EBP;
  int unaff_EDI;
  
  uVar1 = *(undefined4 *)(unaff_EBP + 0x70);
  if (*(int **)(unaff_EBP + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 0x50) + 0xc))();
  }
  puVar3 = GLog;
  uVar2 = rdtsc();
  this = (FOutputDevice *)(*(int *)(unaff_EBP + 0x20) + -0xc + (int)uVar2);
  if (GLog != (undefined *)0x0) {
    *(FOutputDevice **)(unaff_EBP + 0x58) = this;
    FOutputDevice::Logf2(this,(EName)puVar3,(ushort *)0x2f8);
    this = extraout_ECX;
  }
  if (unaff_EDI != 0) {
    if (GLog != (undefined *)0x0) {
      FOutputDevice::Logf2(this,(EName)GLog,(ushort *)0x2f8);
    }
    iVar4 = (**(code **)(*(int *)GFileManager + 0x1c))(uVar1,unaff_EBP + -0x310,1,0,0);
    if (iVar4 == 0) {
      (**(code **)(*(int *)GFileManager + 0x14))(unaff_EBP + -0x310,0,0);
      LocalizeError((ushort *)L"SaveWarning",(ushort *)L"Core",(ushort *)0x0);
      FOutputDevice::Logf(this_00,(ushort *)GWarn);
      unaff_EDI = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return unaff_EDI;
}


// ==== 1016da42 Catch@1016da42

void Catch_1016da42(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0xa0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_101f843c);
}


// ==== 1016da59 Catch@1016da59

void Catch_1016da59(void)

{
  appUnwindf((ushort *)&DAT_101dafec,L"TagExports");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016da74 Catch@1016da74

void Catch_1016da74(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0xa8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x54,&DAT_101f843c);
}


// ==== 1016da8b Catch@1016da8b

void Catch_1016da8b(void)

{
  appUnwindf((ushort *)&DAT_101dafe4,L"Untag");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016daa6 Catch@1016daa6

void Catch_1016daa6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 4) = *(undefined4 *)(unaff_EBP + -0xb0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 4,&DAT_101f843c);
}


// ==== 1016dabd Catch@1016dabd

void Catch_1016dabd(void)

{
  appUnwindf((ushort *)&DAT_101db374,L"UObject::SavePackage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016dfc0 FUN_1016dfc0

int FUN_1016dfc0(void)

{
  ushort in_AX;
  
  if ((ushort)(in_AX - 0x30) < 10) {
    return in_AX - 0x30;
  }
  if ((ushort)(in_AX - 0x61) < 6) {
    return in_AX - 0x57;
  }
  if ((ushort)(in_AX - 0x41) < 6) {
    return in_AX - 0x37;
  }
  return 0;
}


// ==== 1016e000 FUN_1016e000

void FUN_1016e000(void)

{
  return;
}


// ==== 1016e010 FUN_1016e010

void FUN_1016e010(void)

{
  return;
}


// ==== 1016e020 FUN_1016e020

undefined4 FUN_1016e020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x90))(param_1,param_3,0);
  return 1;
}


// ==== 1016e050 FUN_1016e050

void FUN_1016e050(int param_1,int param_2,undefined4 param_3)

{
  int *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < in_ECX[0x10]) {
    do {
      (**(code **)(*in_ECX + 0xa4))
                (in_ECX[0x11] * iVar1 + param_1,in_ECX[0x11] * iVar1 + param_2,param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_ECX[0x10]);
  }
  return;
}


// ==== 1016e0b0 FUN_1016e0b0

void FUN_1016e0b0(void)

{
  return;
}


// ==== 1016e0c0 FUN_1016e0c0

void FUN_1016e0c0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}


// ==== 1016e0e0 FUN_1016e0e0

bool FUN_1016e0e0(char *param_1,char *param_2)

{
  if (param_2 != (char *)0x0) {
    return *param_1 == *param_2;
  }
  return *param_1 == '\0';
}


// ==== 1016e120 FUN_1016e120

void FUN_1016e120(FOutputDevice *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bddf0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Log(param_1,(ushort *)L"BYTE");
  ExceptionList = local_10;
  return;
}


// ==== 1016e172 Catch@1016e172

void Catch_1016e172(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016e186 Catch@1016e186

void Catch_1016e186(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101ded10,L"UByteProperty::ExportCppItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016e1e0 FUN_1016e1e0

void FUN_1016e1e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}


// ==== 1016e200 FUN_1016e200

void FUN_1016e200(undefined4 *param_1,undefined4 *param_2)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  if (*(int *)(in_ECX + 0x40) != 1) {
    iVar1 = 0;
    if (0 < *(int *)(in_ECX + 0x40)) {
      iVar2 = (int)param_2 - (int)param_1;
      do {
        *param_1 = *(undefined4 *)(iVar2 + (int)param_1);
        iVar1 = iVar1 + 1;
        param_1 = param_1 + 1;
      } while (iVar1 < *(int *)(in_ECX + 0x40));
    }
    return;
  }
  *param_1 = *param_2;
  return;
}


// ==== 1016e260 FUN_1016e260

bool FUN_1016e260(int *param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    return *param_1 == *param_2;
  }
  return *param_1 == 0;
}


// ==== 1016e2a0 FUN_1016e2a0

void FUN_1016e2a0(FOutputDevice *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bde00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Log(param_1,(ushort *)&DAT_101deda0);
  ExceptionList = local_10;
  return;
}


// ==== 1016e2f2 Catch@1016e2f2

void Catch_1016e2f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016e306 Catch@1016e306

void Catch_1016e306(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101deda8,L"UIntProperty::ExportCppItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016e360 FUN_1016e360

void FUN_1016e360(ushort *param_1,undefined4 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bde10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  appSprintf(param_1,(ushort *)&DAT_101dedbc,*param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1016e3bc Catch@1016e3bc

void Catch_1016e3bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016e3d0 Catch@1016e3d0

void Catch_1016e3d0(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101dedc4,L"UIntProperty::ExportTextItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016e430 FUN_1016e430

ushort * FUN_1016e430(ushort *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bde20;
  local_10 = ExceptionList;
  local_8 = 0;
  uVar1 = *param_1;
  if ((uVar1 == 0x2d) || ((0x2f < uVar1 && (uVar1 < 0x3a)))) {
    ExceptionList = &local_10;
    iVar2 = appAtoi(param_1);
    *param_2 = iVar2;
  }
  for (; (uVar1 = *param_1, uVar1 == 0x2d || ((0x2f < uVar1 && (uVar1 < 0x3a))));
      param_1 = param_1 + 1) {
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1016e4b3 Catch@1016e4b3

void Catch_1016e4b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016e4c7 Catch@1016e4c7

void Catch_1016e4c7(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101dedd8,L"UIntProperty::ImportText");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016e530 FUN_1016e530

void FUN_1016e530(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}


// ==== 1016e550 FUN_1016e550

void FUN_1016e550(FOutputDevice *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bde30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Log(param_1,(ushort *)L"FScriptDelegate");
  ExceptionList = local_10;
  return;
}


// ==== 1016e5a2 Catch@1016e5a2

void Catch_1016e5a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016e5b6 Catch@1016e5b6

void Catch_1016e5b6(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101dee3c,L"UDelegateProperty::ExportCppItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016e610 FUN_1016e610

void FUN_1016e610(FOutputDevice *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bde40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Log(param_1,(ushort *)L"BITFIELD");
  ExceptionList = local_10;
  return;
}


// ==== 1016e662 Catch@1016e662

void Catch_1016e662(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016e676 Catch@1016e676

void Catch_1016e676(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101def80,L"UBoolProperty::ExportCppItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016e6d0 FUN_1016e6d0

void FUN_1016e6d0(ushort *param_1,uint *param_2,undefined4 param_3,byte param_4)

{
  wchar_t *pwVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bde50;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((param_4 & 1) == 0) {
    pwVar1 = L"True";
    if ((*param_2 & *(uint *)(in_ECX + 0x78)) == 0) {
      pwVar1 = L"False";
    }
  }
  else if ((*param_2 & *(uint *)(in_ECX + 0x78)) == 0) {
    pwVar1 = GFalse;
  }
  else {
    pwVar1 = GTrue;
  }
  ExceptionList = &local_10;
  appSprintf(param_1,(ushort *)&DAT_101defac,pwVar1);
  ExceptionList = local_10;
  return;
}


// ==== 1016e759 Catch@1016e759

void Catch_1016e759(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016e76d Catch@1016e76d

void Catch_1016e76d(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101defb4,L"UBoolProperty::ExportTextItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016e7e0 FUN_1016e7e0

bool FUN_1016e7e0(uint *param_1,uint *param_2)

{
  int in_ECX;
  
  if (param_2 != (uint *)0x0) {
    return ((*param_1 ^ *param_2) & *(uint *)(in_ECX + 0x78)) == 0;
  }
  return (*param_1 & *(uint *)(in_ECX + 0x78)) == 0;
}


// ==== 1016e830 FUN_1016e830

undefined4 FUN_1016e830(int *param_1,undefined4 param_2,uint *param_3)

{
  uint *puVar1;
  int in_ECX;
  
  puVar1 = param_3;
  param_3 = (uint *)CONCAT31(param_3._1_3_,(*(uint *)(in_ECX + 0x78) & *param_3) != 0);
  (**(code **)(*param_1 + 8))(&param_3,1);
  if ((char)param_1 != '\0') {
    *puVar1 = *puVar1 | *(uint *)(in_ECX + 0x78);
    return 1;
  }
  *puVar1 = *puVar1 & ~*(uint *)(in_ECX + 0x78);
  return 1;
}


// ==== 1016e890 FUN_1016e890

void FUN_1016e890(uint *param_1,uint *param_2)

{
  int in_ECX;
  
  *param_1 = ~*(uint *)(in_ECX + 0x78) & *param_1 | *param_2 & *(uint *)(in_ECX + 0x78);
  return;
}


// ==== 1016e8c0 FUN_1016e8c0

void FUN_1016e8c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}


// ==== 1016e8e0 FUN_1016e8e0

void FUN_1016e8e0(undefined4 *param_1,undefined4 *param_2)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  if (*(int *)(in_ECX + 0x40) != 1) {
    iVar1 = 0;
    if (0 < *(int *)(in_ECX + 0x40)) {
      iVar2 = (int)param_2 - (int)param_1;
      do {
        iVar1 = iVar1 + 1;
        *param_1 = *(undefined4 *)(iVar2 + (int)param_1);
        param_1 = param_1 + 1;
      } while (iVar1 < *(int *)(in_ECX + 0x40));
    }
    return;
  }
  *param_1 = *param_2;
  return;
}


// ==== 1016e930 FUN_1016e930

undefined4 FUN_1016e930(float *param_1,float *param_2)

{
  float fVar1;
  
  if (param_2 == (float *)0x0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = *param_2;
  }
  if (fVar1 == *param_1) {
    return 1;
  }
  return 0;
}


// ==== 1016e970 FUN_1016e970

void FUN_1016e970(FOutputDevice *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bde60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Log(param_1,(ushort *)L"FLOAT");
  ExceptionList = local_10;
  return;
}


// ==== 1016e9c2 Catch@1016e9c2

void Catch_1016e9c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016e9d6 Catch@1016e9d6

void Catch_1016e9d6(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101df038,L"UFloatProperty::ExportCppItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016ea30 FUN_1016ea30

void FUN_1016ea30(ushort *param_1,float *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bde70;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  appSprintf(param_1,(ushort *)&DAT_101df04c,(double)*param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1016ea93 Catch@1016ea93

void Catch_1016ea93(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016eaa7 Catch@1016eaa7

void Catch_1016eaa7(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101df054,L"UFloatProperty::ExportTextItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016eb10 FUN_1016eb10

ushort * FUN_1016eb10(ushort *param_1,float *param_2)

{
  ushort uVar1;
  float fVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bde80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  fVar2 = appAtof(param_1);
  *param_2 = fVar2;
  for (; (((uVar1 = *param_1, uVar1 != 0 && (uVar1 != 0x2c)) && (uVar1 != 0x29)) &&
         ((uVar1 != 0xd && (uVar1 != 10)))); param_1 = param_1 + 1) {
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1016eb8e Catch@1016eb8e

void Catch_1016eb8e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016eba2 Catch@1016eba2

void Catch_1016eba2(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101df068,L"UFloatProperty::ImportText");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016ec10 FUN_1016ec10

void FUN_1016ec10(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bde90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x40); iVar3 = iVar3 + 1) {
    piVar2 = (int *)(*(int *)(in_ECX + 0x44) * iVar3 + param_1);
    if (*piVar2 != 0) {
      iVar1 = UObject::IsValid((UObject *)*piVar2);
      if (iVar1 == 0) {
        appFailAssert("Obj->IsValid()",".\\UnProp.cpp",0x338);
      }
      iVar1 = (**(code **)(*(int *)*piVar2 + 0x30))();
      if (iVar1 != 0) {
        (**(code **)(*(int *)*piVar2 + 0x20))();
        *piVar2 = 0;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1016ecae Catch@1016ecae

void Catch_1016ecae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1016ecc2 Catch@1016ecc2

void Catch_1016ecc2(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101df0bc,L"UObjectProperty::CleanupDestroyed");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x1c),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016ed30 FUN_1016ed30

void FUN_1016ed30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}


// ==== 1016ed50 FUN_1016ed50

bool FUN_1016ed50(int *param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    return *param_1 == *param_2;
  }
  return *param_1 == 0;
}


// ==== 1016ed90 FUN_1016ed90

void FUN_1016ed90(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 1016edb0 FUN_1016edb0

void FUN_1016edb0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int in_ECX;
  
  (**(code **)(*param_2 + 0x6c))(param_1,*(undefined4 *)(in_ECX + 0x78),param_3);
  return;
}


// ==== 1016ede0 FUN_1016ede0

void FUN_1016ede0(ushort *param_1)

{
  int in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bdea0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x78) + 0x94))();
  FOutputDevice::Logf(this,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1016ee44 Catch@1016ee44

void Catch_1016ee44(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016ee58 Catch@1016ee58

void Catch_1016ee58(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101df10c,L"UObjectProperty::ExportCppItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016eee0 FUN_1016eee0

void FUN_1016eee0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}


// ==== 1016ef00 FUN_1016ef00

void FUN_1016ef00(undefined4 *param_1,undefined4 *param_2)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  if (*(int *)(in_ECX + 0x40) != 1) {
    iVar1 = 0;
    if (0 < *(int *)(in_ECX + 0x40)) {
      iVar2 = (int)param_2 - (int)param_1;
      do {
        *param_1 = *(undefined4 *)(iVar2 + (int)param_1);
        iVar1 = iVar1 + 1;
        param_1 = param_1 + 1;
      } while (iVar1 < *(int *)(in_ECX + 0x40));
    }
    return;
  }
  *param_1 = *param_2;
  return;
}


// ==== 1016ef60 FUN_1016ef60

void FUN_1016ef60(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x1c))(param_2);
  return;
}


// ==== 1016ef80 FUN_1016ef80

void FUN_1016ef80(FOutputDevice *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bdeb0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Log(param_1,(ushort *)L"FName");
  ExceptionList = local_10;
  return;
}


// ==== 1016efd2 Catch@1016efd2

void Catch_1016efd2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016efe6 Catch@1016efe6

void Catch_1016efe6(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101df2f8,L"UNameProperty::ExportCppItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016f040 FUN_1016f040

void FUN_1016f040(FArchive *param_1,FString *param_2)

{
  operator<<(param_1,param_2);
  return;
}


// ==== 1016f060 FUN_1016f060

void FUN_1016f060(FOutputDevice *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bdec0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Log(param_1,(ushort *)L"FString");
  ExceptionList = local_10;
  return;
}


// ==== 1016f0b2 Catch@1016f0b2

void Catch_1016f0b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016f0c6 Catch@1016f0c6

void Catch_1016f0c6(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101df398,L"UStrProperty::ExportCppItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016f120 FUN_1016f120

undefined4 FUN_1016f120(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x7c)) {
    do {
      if (param_2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 0x44) * iVar2 + param_2;
      }
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x78) + 0x84))
                        ((*(int **)(in_ECX + 0x78))[0x11] * iVar2 + param_1,iVar1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x7c));
  }
  return 1;
}


// ==== 1016f1a0 FUN_1016f1a0

void FUN_1016f1a0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x7c);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (param_3 < 1) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_3 / iVar1;
      }
      (**(code **)(**(int **)(in_ECX + 0x78) + 0x90))
                (param_1,(*(int **)(in_ECX + 0x78))[0x11] * iVar2 + param_2,iVar1);
      iVar1 = *(int *)(in_ECX + 0x7c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}


// ==== 1016f210 FUN_1016f210

undefined4 FUN_1016f210(void)

{
  return 1;
}


// ==== 1016f220 FUN_1016f220

void FUN_1016f220(ushort *param_1)

{
  int in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bded0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x78) + 0x8c))(param_1,0);
  FOutputDevice::Logf(this,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1016f28c Catch@1016f28c

void Catch_1016f28c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016f2a0 Catch@1016f2a0

void Catch_1016f2a0(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101df444,L"UFixedArrayProperty::ExportCppItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016f310 FUN_1016f310

void FUN_1016f310(undefined2 *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int in_ECX;
  ushort *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bdee0;
  local_10 = ExceptionList;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = 0x28;
  puVar2 = param_1 + 1;
  while( true ) {
    if (*(int *)(in_ECX + 0x7c) <= iVar3) break;
    if (0 < iVar3) {
      *puVar2 = 0x2c;
      puVar2 = puVar2 + 1;
    }
    if (param_3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 0x44) * iVar3 + param_3;
    }
    (**(code **)(**(int **)(in_ECX + 0x78) + 0x98))
              (puVar2,(*(int **)(in_ECX + 0x78))[0x11] * iVar3 + param_2,iVar1,param_4 | 2);
    iVar1 = appStrlen(puVar2);
    puVar2 = puVar2 + iVar1;
    iVar3 = iVar3 + 1;
  }
  *puVar2 = 0x29;
  puVar2[1] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1016f3d8 Catch@1016f3d8

void Catch_1016f3d8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1016f3ec Catch@1016f3ec

void Catch_1016f3ec(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101df458,L"UFixedArrayProperty::ExportTextItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x14),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016f470 FUN_1016f470

short * FUN_1016f470(short *param_1,int param_2,uint param_3)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bdef0;
  local_10 = ExceptionList;
  iVar1 = 0;
  local_8 = 0;
  if (*param_1 == 0x28) {
    ExceptionList = &local_10;
    thunk_FUN_10108420(param_2,*(undefined4 *)(in_ECX + 0x44));
    for (; iVar1 < *(int *)(in_ECX + 0x7c); iVar1 = iVar1 + 1) {
      param_1 = (short *)(**(code **)(**(int **)(in_ECX + 0x78) + 0x9c))
                                   (param_1 + 1,(*(int **)(in_ECX + 0x78))[0x11] * iVar1 + param_2,
                                    param_3 | 2);
      if (param_1 == (short *)0x0) {
        ExceptionList = local_10;
        return (short *)0x0;
      }
      if ((*param_1 != 0x2c) && (iVar1 != *(int *)(in_ECX + 0x7c) + -1)) {
        ExceptionList = local_10;
        return (short *)0x0;
      }
    }
    if (param_1[1] == 0x29) {
      ExceptionList = local_10;
      return param_1 + 2;
    }
  }
  ExceptionList = local_10;
  return (short *)0x0;
}


// ==== 1016f535 Catch@1016f535

void Catch_1016f535(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1016f549 Catch@1016f549

void Catch_1016f549(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101df46c,L"UFixedArrayProperty::ImportText");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x1c),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016f5c0 FUN_1016f5c0

void FUN_1016f5c0(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bdf00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x78) != 0) {
    ExceptionList = &local_10;
    appFailAssert("!Inner",".\\UnProp.cpp",0x4f1);
  }
  if (param_1 == 0) {
    appFailAssert("Property",".\\UnProp.cpp",0x4f2);
  }
  if (param_2 < 1) {
    appFailAssert("InCount>0",".\\UnProp.cpp",0x4f3);
  }
  *(int *)(in_ECX + 0x78) = param_1;
  *(int *)(in_ECX + 0x7c) = param_2;
  ExceptionList = local_10;
  return;
}


// ==== 1016f666 Catch@1016f666

void Catch_1016f666(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016f67a Catch@1016f67a

void Catch_1016f67a(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101df4d0,L"UFixedArrayProperty::AddCppProperty");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016f6f0 FUN_1016f6f0

void FUN_1016f6f0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x7c)) {
    do {
      if (param_2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 0x44) * iVar2 + param_2;
      }
      (**(code **)(**(int **)(in_ECX + 0x78) + 0xa8))
                ((*(int **)(in_ECX + 0x78))[0x11] * iVar2 + param_1,iVar1,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x7c));
  }
  return;
}


// ==== 1016f760 FUN_1016f760

void FUN_1016f760(int param_1)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x7c)) {
    do {
      (**(code **)(**(int **)(in_ECX + 0x78) + 0xac))
                ((*(int **)(in_ECX + 0x78))[0x11] * iVar1 + param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x7c));
  }
  return;
}


// ==== 1016f7b0 FUN_1016f7b0

undefined4 FUN_1016f7b0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  if (param_2 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_2[1];
  }
  if (iVar1 == iVar4) {
    iVar4 = *(int *)(*(int *)(in_ECX + 0x78) + 0x44);
    iVar5 = *param_1;
    iVar6 = 0;
    if (param_2 == (int *)0x0) {
      if (0 < iVar1) {
        do {
          iVar2 = (**(code **)(**(int **)(in_ECX + 0x78) + 0x84))(iVar5,0);
          if (iVar2 == 0) {
            return 0;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + iVar4;
        } while (iVar6 < iVar1);
        return 1;
      }
    }
    else if (0 < iVar1) {
      iVar2 = *param_2 - iVar5;
      do {
        iVar3 = (**(code **)(**(int **)(in_ECX + 0x78) + 0x84))(iVar5,iVar2 + iVar5);
        if (iVar3 == 0) {
          return 0;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + iVar4;
      } while (iVar6 < iVar1);
    }
    return 1;
  }
  return 0;
}


// ==== 1016f8b0 FUN_1016f8b0

void FUN_1016f8b0(FArchive *param_1,FArray *param_2,int param_3)

{
  int iVar1;
  FArray *this;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  this = param_2;
  param_2 = *(FArray **)(param_2 + 4);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 0x44);
  operator<<(param_1,(FCompactIndex *)&param_2);
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    FArray::Realloc(this,iVar1);
    FArray::AddZeroed(this,iVar1,(int)param_2);
  }
  iVar4 = *(int *)this;
  iVar3 = 0;
  if (0 < (int)param_2) {
    do {
      if (param_3 < 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_3 / (int)param_2;
      }
      (**(code **)(**(int **)(in_ECX + 0x78) + 0x90))(param_1,iVar4,iVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + iVar1;
    } while (iVar3 < (int)param_2);
  }
  return;
}


// ==== 1016f970 FUN_1016f970

undefined4 FUN_1016f970(void)

{
  return 1;
}


// ==== 1016f980 FUN_1016f980

void FUN_1016f980(FOutputDevice *param_1,int param_2)

{
  int in_ECX;
  wchar_t *pwVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bdf10;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_2 == 0) {
    pwVar1 = L"TArrayNoInit<";
  }
  else {
    pwVar1 = L"TArray<";
  }
  ExceptionList = &local_10;
  FOutputDevice::Log(param_1,(ushort *)pwVar1);
  (**(code **)(**(int **)(in_ECX + 0x78) + 0x8c))(param_1,0);
  FOutputDevice::Log(param_1,(ushort *)&DAT_101df574);
  ExceptionList = local_10;
  return;
}


// ==== 1016f9ff Catch@1016f9ff

void Catch_1016f9ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1016fa13 Catch@1016fa13

void Catch_1016fa13(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101df578,L"UArrayProperty::ExportCppItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1016fa80 FUN_1016fa80

void FUN_1016fa80(undefined2 *param_1,int *param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  ushort *puVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bdf20;
  local_10 = ExceptionList;
  iVar4 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = 0x28;
  puVar3 = param_1 + 1;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 0x44);
  while( true ) {
    if (param_2[1] <= iVar4) break;
    if (0 < iVar4) {
      *puVar3 = 0x2c;
      puVar3 = puVar3 + 1;
    }
    if ((param_3 == (int *)0x0) || (param_3[1] < iVar4)) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar4 * iVar1 + *param_3;
    }
    (**(code **)(**(int **)(in_ECX + 0x78) + 0x98))
              (puVar3,iVar4 * iVar1 + *param_2,iVar2,param_4 | 2);
    iVar2 = appStrlen(puVar3);
    puVar3 = puVar3 + iVar2;
    iVar4 = iVar4 + 1;
  }
  *puVar3 = 0x29;
  puVar3[1] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1016fb60 Catch@1016fb60

void Catch_1016fb60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 1016fb74 Catch@1016fb74

void Catch_1016fb74(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101df58c,L"UArrayProperty::ExportTextItem");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


