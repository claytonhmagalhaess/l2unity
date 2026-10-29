// ==== 105cc4c8 Catch@105cc4c8

void Catch_105cc4c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x68) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x68,&DAT_10914c48);
}


// ==== 105cc4dc Catch@105cc4dc

void Catch_105cc4dc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::_L2_DestroyActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cc620 FUN_105cc620

void FUN_105cc620(ULevel *param_1,float *param_2)

{
  FArray *this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  ULevel *this_00;
  float fVar4;
  int iVar5;
  ATerrainInfo *pAVar6;
  ULevel *in_ECX;
  FArray *this_01;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  ULevel *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = param_1;
  puStack_c = &LAB_1081ffe0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  if (param_1 != in_ECX) {
    this = (FArray *)(in_ECX + 0x11b0);
    ExceptionList = &local_10;
    local_18 = in_ECX;
    iVar5 = thunk_FUN_105ca4d0(&param_1,&local_28);
    if (iVar5 == 0) {
      pAVar6 = ULevel::GetTerrainInfo(this_00);
      local_28 = *(float *)(pAVar6 + 0x1bc);
      pAVar6 = ULevel::GetTerrainInfo(this_00);
      local_24 = *(float *)(pAVar6 + 0x1c0);
      local_1c = *param_2;
      param_2 = (float *)param_2[1];
      fVar7 = (float10)(float)param_2;
      local_28 = (float)(((float10)local_1c - (float10)local_28) *
                         ((float10)local_1c - (float10)local_28) +
                        (fVar7 - (float10)local_24) * (fVar7 - (float10)local_24));
      for (iVar5 = 0; iVar5 < *(int *)(in_ECX + 0x11b4) + -1; iVar5 = iVar5 + 1) {
        puVar1 = (undefined4 *)(*(int *)this + iVar5 * 4);
        pAVar6 = ULevel::GetTerrainInfo((ULevel *)*puVar1);
        local_1c = *(float *)(pAVar6 + 0x1bc);
        pAVar6 = ULevel::GetTerrainInfo((ULevel *)*puVar1);
        param_2 = (float *)(float)(((float10)local_1c - extraout_ST0) *
                                   ((float10)local_1c - extraout_ST0) +
                                  ((float10)*(float *)(pAVar6 + 0x1c0) - extraout_ST1) *
                                  ((float10)*(float *)(pAVar6 + 0x1c0) - extraout_ST1));
        fVar7 = extraout_ST1;
        local_20 = iVar5;
        while (local_20 = local_20 + 1, local_20 < *(int *)(local_18 + 0x11b4)) {
          puVar1 = (undefined4 *)(*(int *)this + local_20 * 4);
          pAVar6 = ULevel::GetTerrainInfo((ULevel *)*puVar1);
          local_1c = *(float *)(pAVar6 + 0x1bc);
          pAVar6 = ULevel::GetTerrainInfo((ULevel *)*puVar1);
          param_2 = (float *)(float)(((float10)local_1c - extraout_ST1_00) *
                                     ((float10)local_1c - extraout_ST1_00) +
                                    ((float10)*(float *)(pAVar6 + 0x1c0) - fVar7) *
                                    ((float10)*(float *)(pAVar6 + 0x1c0) - fVar7));
          if ((float10)(float)param_2 < extraout_ST0_00) {
            iVar2 = *(int *)this;
            uVar3 = *(undefined4 *)(iVar2 + iVar5 * 4);
            *(undefined4 *)(iVar2 + iVar5 * 4) = *(undefined4 *)(iVar2 + local_20 * 4);
            *(undefined4 *)(*(int *)this + local_20 * 4) = uVar3;
          }
        }
        in_ECX = local_18;
      }
      local_24 = 0.0;
      for (iVar5 = 0; fVar4 = local_24, iVar5 < *(int *)(in_ECX + 0x11b4); iVar5 = iVar5 + 1) {
        puVar1 = (undefined4 *)(*(int *)this + iVar5 * 4);
        pAVar6 = ULevel::GetTerrainInfo((ULevel *)*puVar1);
        local_1c = *(float *)(pAVar6 + 0x1bc);
        pAVar6 = ULevel::GetTerrainInfo((ULevel *)*puVar1);
        param_2 = (float *)(float)(((float10)local_1c - extraout_ST1_01) *
                                   ((float10)local_1c - extraout_ST1_01) +
                                  ((float10)*(float *)(pAVar6 + 0x1c0) - fVar7) *
                                  ((float10)*(float *)(pAVar6 + 0x1c0) - fVar7));
        in_ECX = local_18;
        fVar4 = (float)iVar5;
        if (extraout_ST0_01 < (float10)(float)param_2) break;
      }
      local_24 = fVar4;
      FArray::Insert(this,(int)local_24,1,4);
      *(ULevel **)(*(int *)this + (int)local_24 * 4) = param_1;
      *(undefined4 *)(param_1 + 0x11d4) = 1;
      while (4 < *(int *)(in_ECX + 0x11b4)) {
        iVar5 = *(int *)(in_ECX + 0x11b4) + -1;
        uVar3 = *(undefined4 *)(*(int *)this + iVar5 * 4);
        param_1 = (ULevel *)uVar3;
        thunk_FUN_10387920(iVar5,1);
        this_01 = (FArray *)(local_18 + 0x11bc);
        iVar5 = thunk_FUN_105ca4d0(&param_1,&param_2);
        in_ECX = local_18;
        if (iVar5 == 0) {
          FArray::Insert(this_01,0,1,4);
          **(undefined4 **)this_01 = uVar3;
          in_ECX = local_18;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105cc899 Catch@105cc899

void Catch_105cc899(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 105cc8ad Catch@105cc8ad

void Catch_105cc8ad(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::AddSWLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cc980 FUN_105cc980

undefined4 FUN_105cc980(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fff0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  for (iVar3 = 0; local_24 = iVar3, iVar3 < *(int *)(in_ECX + 0x11b4); iVar3 = iVar3 + 1) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x11b0) + iVar3 * 4);
    if (iVar2 != 0) {
      for (iVar4 = 0; local_20 = iVar4, iVar4 < *(int *)(iVar2 + 0x3c); iVar4 = iVar4 + 1) {
        local_1c = *(int *)(*(int *)(iVar2 + 0x38) + iVar4 * 4);
        if (local_1c != 0) {
          iVar1 = FName::operator==((FName *)(local_1c + 0x10c),(FName *)&stack0x00000004);
          if (iVar1 != 0) {
            thunk_FUN_1037ae60(&local_1c);
          }
        }
        in_ECX = local_18;
      }
    }
  }
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x3c); iVar3 = iVar3 + 1) {
    local_28 = *(int *)(*(int *)(in_ECX + 0x38) + iVar3 * 4);
    if (local_28 != 0) {
      iVar2 = FName::operator==((FName *)(local_28 + 0x10c),(FName *)&stack0x00000004);
      if (iVar2 != 0) {
        thunk_FUN_1037ae60(&local_28);
      }
    }
    in_ECX = local_18;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105cca5c Catch@105cca5c

void Catch_105cca5c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 105cca70 Catch@105cca70

void Catch_105cca70(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::FindL2EventActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ccad0 FUN_105ccad0

void FUN_105ccad0(void)

{
  int in_ECX;
  
  FArray::Empty((FArray *)(in_ECX + 0x11dc),4,0);
  return;
}


// ==== 105ccaf0 FUN_105ccaf0

void FUN_105ccaf0(void)

{
  int iVar1;
  void **ppvVar2;
  int iVar3;
  ushort *puVar4;
  int in_ECX;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float in_stack_00000018;
  wchar_t *pwVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820000;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  iVar5 = 0;
  local_8 = 0;
  ppvVar2 = &local_10;
  if (*(int *)(in_ECX + 0x11e0) == 0) {
    return;
  }
  do {
    while( true ) {
      ExceptionList = ppvVar2;
      if (*(int *)(in_ECX + 0x11e0) <= iVar5) {
        ExceptionList = local_10;
        return;
      }
      iVar1 = iVar5 * 4;
      local_24 = iVar5;
      iVar3 = FName::operator==((FName *)(*(int *)(*(int *)(in_ECX + 0x11dc) + iVar1) + 0x10c),
                                (FName *)&stack0x00000004);
      if (iVar3 != 0) break;
LAB_105ccc69:
      iVar5 = iVar5 + 1;
      ppvVar2 = ExceptionList;
    }
    pwVar8 = L"antarascave_smoke";
    puVar4 = FName::operator*((FName *)&stack0x00000004);
    iVar3 = appStricmp(puVar4,(ushort *)pwVar8);
    if ((iVar3 != 0) || (in_stack_00000018 == 0.0)) {
      AActor::eventTrigger
                (*(AActor **)(*(int *)(in_ECX + 0x11dc) + iVar1),(AActor *)0x0,(APawn *)0x0);
      goto LAB_105ccc69;
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    iVar3 = FVector::operator!=((FVector *)&stack0x00000008,(FVector *)&local_38);
    if (iVar3 == 0) goto LAB_105ccc69;
    fVar6 = (float10)thunk_FUN_10373830(*(int *)(*(int *)(in_ECX + 0x11dc) + iVar1) + 0x1bc,
                                        &stack0x00000008);
    local_18 = (float)(fVar6 / (float10)in_stack_00000018);
    fVar6 = (float10)FUN_107a7cfc();
    local_20 = (float)fVar6;
    local_1c = local_20;
    fVar6 = (float10)FUN_107a7cfc();
    local_1c = (float)fVar6;
    local_20 = 2.0 / (local_1c + local_20);
    fVar7 = appFrand();
    if ((local_20 <= fVar7) ||
       (iVar3 = thunk_FUN_104bc470(*(undefined4 *)(*(int *)(in_ECX + 0x11dc) + iVar1)), iVar3 == 0))
    goto LAB_105ccc69;
    *(uint *)(iVar3 + 0x478) = *(uint *)(iVar3 + 0x478) & 0xfffffffe;
    AActor::eventTrigger(*(AActor **)(*(int *)(in_ECX + 0x11dc) + iVar1),(AActor *)0x0,(APawn *)0x0)
    ;
    iVar5 = iVar5 + 1;
    ppvVar2 = ExceptionList;
  } while( true );
}


// ==== 105ccc8c Catch@105ccc8c

void Catch_105ccc8c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105ccca0 Catch@105ccca0

void Catch_105ccca0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::ExecL2EventActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ccd30 FUN_105ccd30

FArchive * FUN_105ccd30(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820010;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0xc);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      operator<<(param_1,(FString *)(*(int *)param_2 + iVar3 * 0xc));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_1032c1a0(local_18);
    while (iVar3 < local_18) {
      pFVar2 = (FString *)thunk_FUN_1032ad60(0xc,param_2);
      if (pFVar2 == (FString *)0x0) {
        operator<<(param_1,(FString *)0x0);
        iVar3 = iVar3 + 1;
      }
      else {
        pFVar2 = (FString *)FString::FString(pFVar2);
        operator<<(param_1,pFVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105cce0e Catch@105cce0e

void Catch_105cce0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105cce22 Catch@105cce22

void Catch_105cce22(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cce90 FUN_105cce90

void FUN_105cce90(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    piVar2 = *(int **)in_ECX;
    do {
      if (*piVar2 == *param_1) {
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  iVar1 = FArray::Add(in_ECX,1,4);
  *(int *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 105ccee0 FUN_105ccee0

FArchive * FUN_105ccee0(FArchive *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820020;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FArchive::IsTrans(param_1);
  if (iVar1 == 0) {
    thunk_FUN_105ca550(param_1,param_2);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ccf37 Catch@105ccf37

void Catch_105ccf37(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105ccf4b Catch@105ccf4b

void Catch_105ccf4b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TTransArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ccf90 FUN_105ccf90

FArchive * FUN_105ccf90(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820030;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_10589790(param_1,*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_10371670(4,param_2);
      thunk_FUN_10589790(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105cd060 Catch@105cd060

void Catch_105cd060(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105cd074 Catch@105cd074

void Catch_105cd074(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cd0e0 FUN_105cd0e0

void FUN_105cd0e0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10820049;
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
  FArray::Remove(in_ECX,0,iVar1,0x2c);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105cd1a0 FUN_105cd1a0

FArchive * FUN_105cd1a0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820060;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x2c);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_105c98c0(param_1,iVar1 * 0x2c + *(int *)param_2);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0x2c,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_105c9880(0x2c,param_2);
      thunk_FUN_105c98c0(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105cd272 Catch@105cd272

void Catch_105cd272(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105cd286 Catch@105cd286

void Catch_105cd286(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cd2f0 FUN_105cd2f0

FArchive * FUN_105cd2f0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820070;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_1033e5e0(param_1,*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_1032add0(4,param_2);
      thunk_FUN_1033e5e0(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105cd3c0 Catch@105cd3c0

void Catch_105cd3c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105cd3d4 Catch@105cd3d4

void Catch_105cd3d4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cd440 FUN_105cd440

FArchive * FUN_105cd440(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820080;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x1c);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      thunk_FUN_105c9810(param_1,*(int *)param_2 + iVar3 * 0x1c);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_1038be70(local_18);
    while (iVar3 < local_18) {
      iVar1 = thunk_FUN_10372270(0x1c,param_2);
      if (iVar1 == 0) {
        thunk_FUN_105c9810(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = thunk_FUN_105c97a0();
        thunk_FUN_105c9810(param_1,uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105cd520 Catch@105cd520

void Catch_105cd520(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105cd534 Catch@105cd534

void Catch_105cd534(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cd5a0 FUN_105cd5a0

void FUN_105cd5a0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_104e9650(&param_1);
  }
  return;
}


// ==== 105cd5c0 FUN_105cd5c0

void FUN_105cd5c0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_104e9650(&param_1);
  }
  return;
}


// ==== 105cd5e0 FUN_105cd5e0

void FUN_105cd5e0(void)

{
  UObject *pUVar1;
  UObject *pUVar2;
  int iVar3;
  UObject *pUVar4;
  int iVar5;
  ATerrainInfo *pAVar6;
  undefined4 uVar7;
  UObject *in_ECX;
  int local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820090;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::PostLoad(in_ECX);
  thunk_FUN_1059bd20();
  while( true ) {
    if (*(int *)(GObjObjects_exref + 4) <= local_2c) break;
    pUVar1 = UObject::GetOuter(*(UObject **)(*(int *)GObjObjects_exref + local_2c * 4));
    pUVar2 = UObject::GetOuter(in_ECX);
    if (pUVar1 == pUVar2) {
      iVar3 = thunk_FUN_103285e0(*(undefined4 *)(*(int *)GObjObjects_exref + local_2c * 4));
      if ((iVar3 == 0) || ((*(uint *)(iVar3 + 0x5ac) & 0x100) == 0)) {
        *(UObject **)(*(int *)(*(int *)GObjObjects_exref + local_2c * 4) + 0xe4) = in_ECX;
        *(undefined4 *)(*(int *)(*(int *)GObjObjects_exref + local_2c * 4) + 0x2cc) = 0;
      }
    }
    thunk_FUN_103737b0();
  }
  iVar3 = 0;
  while( true ) {
    if (*(int *)(GObjObjectsBuffer_exref + 4) <= iVar3) break;
    pUVar1 = (UObject *)
             thunk_FUN_104eee90(*(undefined4 *)(*(int *)GObjObjectsBuffer_exref + iVar3 * 4));
    if (pUVar1 != (UObject *)0x0) {
      pUVar2 = UObject::GetOuter(pUVar1);
      pUVar4 = UObject::GetOuter(in_ECX);
      if (pUVar2 == pUVar4) {
        iVar5 = thunk_FUN_103285e0(pUVar1);
        if ((iVar5 == 0) || ((*(uint *)(iVar5 + 0x5ac) & 0x100) == 0)) {
          *(UObject **)(pUVar1 + 0xe4) = in_ECX;
          *(undefined4 *)(pUVar1 + 0x2cc) = 0;
        }
      }
    }
    iVar3 = iVar3 + 1;
  }
  UModel::BuildRenderData(*(UModel **)(in_ECX + 0xc0));
  pAVar6 = ULevel::GetTerrainInfo((ULevel *)in_ECX);
  if (pAVar6 != (ATerrainInfo *)0x0) {
    uVar7 = FUN_107a6660();
    *(undefined4 *)(in_ECX + 0x11c8) = uVar7;
    uVar7 = FUN_107a6660();
    *(undefined4 *)(in_ECX + 0x11cc) = uVar7;
  }
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x11b4); iVar3 = iVar3 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x11b0),4,0);
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x11c0); iVar3 = iVar3 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x11bc),4,0);
  *(undefined4 *)(in_ECX + 0x11a4) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 105cd7c4 Catch@105cd7c4

void Catch_105cd7c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105cd7d8 Catch@105cd7d8

void Catch_105cd7d8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::PostLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cd880 FUN_105cd880

void FUN_105cd880(void)

{
  int *piVar1;
  ULevelBase *in_ECX;
  int iVar2;
  int iVar3;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108200a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  ExceptionList = &local_10;
  for (local_18 = 0; local_18 < *(int *)(in_ECX + 0x11b4); local_18 = local_18 + 1) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x11b0) + local_18 * 4);
    if (iVar2 != 0) {
      for (iVar3 = 0; local_1c = iVar3, iVar3 < *(int *)(iVar2 + 0x116c); iVar3 = iVar3 + 1) {
        piVar1 = *(int **)(*(int *)(iVar2 + 0x1168) + iVar3 * 4);
        if (*piVar1 != 0) {
          (**(code **)(*(int *)*piVar1 + 0x324))(1);
        }
        thunk_FUN_1052ebb0();
      }
      for (local_20 = 0; local_20 < *(int *)(iVar2 + 0x116c); local_20 = local_20 + 1) {
      }
      FArray::Empty((FArray *)(iVar2 + 0x1168),4,0);
    }
  }
  iVar2 = 0;
  thunk_FUN_105897f0(*(undefined4 *)(in_ECX + 0x11c8),*(undefined4 *)(in_ECX + 0x11cc),0);
  if ((*(int *)(*(int *)(in_ECX + 0x74) + 0x19c) != 0) &&
     (*(int *)(*(int *)(*(int *)(in_ECX + 0x74) + 0x19c) + 0x11c0) != 0)) {
    thunk_FUN_1059bcd0(local_24);
  }
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x11c0); iVar3 = iVar3 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x11bc),4,0);
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x11b4); iVar3 = iVar3 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x11b0),4,0);
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x11e0); iVar3 = iVar3 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x11dc),4,0);
  if (*(undefined4 **)(in_ECX + 0x120) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x120))(1);
    *(undefined4 *)(in_ECX + 0x120) = 0;
  }
  for (; iVar2 < *(int *)(in_ECX + 0x116c); iVar2 = iVar2 + 1) {
    thunk_FUN_1052ebb0();
  }
  thunk_FUN_1064f8c0();
  ULevelBase::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 105cda20 Catch@105cda20

void Catch_105cda20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 105cda34 Catch@105cda34

void Catch_105cda34(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cdad0 FUN_105cdad0

void FUN_105cdad0(void)

{
  UObject *this;
  int iVar1;
  ALevelInfo *pAVar2;
  ULevel *in_ECX;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108200b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  iVar3 = 0;
  if (*(int *)(in_ECX + 0xc0) != 0) {
    local_8 = 1;
    ExceptionList = &local_10;
    for (iVar4 = 0; local_1c = iVar4, iVar4 < 0x40; iVar4 = iVar4 + 1) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0xc0) + (iVar4 * 3 + 0x27) * 8);
      if (iVar1 != 0) {
        for (local_18 = 0; local_18 < *(int *)(iVar1 + 0x3e0); local_18 = local_18 + 1) {
        }
        FArray::Empty((FArray *)(iVar1 + 0x3dc),4,0);
      }
    }
    local_8 = 3;
    for (; iVar3 < *(int *)(in_ECX + 0x3c); iVar3 = iVar3 + 1) {
      iVar4 = iVar3 * 4;
      if ((*(int *)(*(int *)(in_ECX + 0x38) + iVar4) != 0) &&
         (this = *(UObject **)(*(int *)(in_ECX + 0x38) + iVar4), ((byte)this[100] & 0x80) == 0)) {
        iVar1 = UObject::IsA(this,&ATerrainInfo::PrivateStaticClass);
        if (iVar1 != 0) {
          (**(code **)(**(int **)(iVar4 + *(int *)(in_ECX + 0x38)) + 0x1bc))(1,0);
          local_20 = thunk_FUN_1058b5b0(*(undefined4 *)(*(int *)(in_ECX + 0x38) + iVar4));
          thunk_FUN_105cce90(&local_20);
        }
      }
    }
    local_8 = 0;
    if (*(int *)GIsEditor_exref != 0) {
      pAVar2 = ULevel::GetLevelInfo(in_ECX);
      if (pAVar2 != (ALevelInfo *)0x0) {
        for (iVar3 = 0; iVar3 < *(int *)(pAVar2 + 0x3e0); iVar3 = iVar3 + 1) {
        }
        FArray::Empty((FArray *)(pAVar2 + 0x3dc),4,0);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105cdc1b Catch@105cdc1b

void Catch_105cdc1b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 105cdc2f Catch@105cdc2f

void Catch_105cdc2f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::UpdateTerrainArrays::AddTerrains");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cdc4b Catch@105cdc4b

void Catch_105cdc4b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 105cdc5f Catch@105cdc5f

void Catch_105cdc5f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::UpdateTerrainArrays::ClearTerrains");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cdc66 Catch@105cdc66

void Catch_105cdc66(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 105cdc77 Catch@105cdc77

void Catch_105cdc77(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::UpdateTerrainArrays");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cdcf0 FUN_105cdcf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105cdcf0(int param_1)

{
  ULevel *pUVar1;
  int *piVar2;
  int iVar3;
  AActor *pAVar4;
  int iVar5;
  undefined4 uVar6;
  FCollisionHashBase *pFVar7;
  APhysicsVolume *pAVar8;
  FName *pFVar9;
  ALevelInfo *pAVar10;
  int iVar11;
  ULevel *in_ECX;
  float10 fVar12;
  undefined8 uVar13;
  FString *pFVar14;
  FString *pFVar15;
  FName *pFVar16;
  ushort local_d04;
  undefined1 local_d02 [2046];
  uint auStack_504 [256];
  FName local_104 [12];
  FString local_f8 [12];
  undefined1 local_ec [4];
  undefined1 local_e8 [4];
  undefined1 local_e4 [8];
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_9c;
  int local_94;
  int local_8c;
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  FName local_48 [4];
  int local_44;
  int local_40;
  FName local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  FName local_24 [4];
  int local_20;
  int local_1c;
  ULevel *local_18;
  int local_14;
  double local_10;
  int local_8;
  
  puStack_80 = &LAB_108200da;
  local_84 = ExceptionList;
  local_88 = &stack0xfffff2f0;
  local_7c = 0;
  iVar11 = *(int *)(in_ECX + 0x74);
  ExceptionList = &local_84;
  while ((iVar5 = L2ThreadUtil::IsCurrentThread((L2ThreadUtil *)GThreadUtil_exref,1), iVar5 == 0 &&
         (*(int *)(in_ECX + 0x11d8) != 0))) {
    appSleep(0.0);
  }
  if ((((*(int *)GIsL2Seamless_exref == 0) || (*(int *)GIsEditor_exref != 0)) ||
      (*(int *)(in_ECX + 0x11d0) != 0)) || (in_ECX == *(ULevel **)(iVar11 + 0x19c))) {
    iVar11 = thunk_FUN_1059bcd0(local_24);
    if ((iVar11 != 0) && (*(int *)GLog_exref != 0)) {
      FOutputDevice::Logf2(*(FOutputDevice **)(in_ECX + 0x11cc),*(ushort **)GLog_exref);
    }
LAB_105cddfd:
    uVar6 = 0;
  }
  else {
    fVar12 = (float10)thunk_FUN_104da1f0();
    local_10 = (double)fVar12;
    iVar11 = *(int *)(in_ECX + 0x11a4);
    if (iVar11 == 0) {
      *(undefined4 *)(in_ECX + 0x11a4) = 1;
      *(undefined4 *)(in_ECX + 0x11a8) = 0;
    }
    else {
      if (iVar11 == 1) {
        switch(*(undefined4 *)(in_ECX + 0x11ac)) {
        case 0:
          if (*(int *)GLog_exref != 0) {
            FOutputDevice::Logf2(*(FOutputDevice **)(in_ECX + 0x11c8),*(ushort **)GLog_exref);
          }
          if (*(int *)(in_ECX + 0x120) == 0) {
            pFVar7 = GNewCollisionHash();
            *(FCollisionHashBase **)(in_ECX + 0x120) = pFVar7;
          }
          break;
        case 1:
          iVar5 = 0;
          for (iVar11 = *(int *)(in_ECX + 0x11a8); iVar11 < *(int *)(in_ECX + 0x3c);
              iVar11 = iVar11 + 1) {
            local_9c = iVar11;
            local_50 = iVar5;
            if (((*(int **)(in_ECX + 0x120) != (int *)0x0) &&
                (piVar2 = (int *)(*(int *)(in_ECX + 0x38) + iVar11 * 4), *piVar2 != 0)) &&
               (iVar3 = *piVar2, (*(byte *)(iVar3 + 0x2f8) & 1) != 0)) {
              (**(code **)(**(int **)(in_ECX + 0x120) + 8))(iVar3);
            }
            *(int *)(in_ECX + 0x11a8) = *(int *)(in_ECX + 0x11a8) + 1;
            if (((param_1 != 0) &&
                (fVar12 = (float10)thunk_FUN_104da1f0(),
                (float10)_DAT_10b14160 + (float10)local_10 < fVar12)) && (-1 < iVar5))
            goto LAB_105ce905;
            iVar5 = iVar5 + 1;
          }
          break;
        case 2:
          local_7c = CONCAT31(local_7c._1_3_,1);
          if (*(int *)(in_ECX + 0xc0) != 0) {
            for (local_d0 = 0; local_d0 < 0x40; local_d0 = local_d0 + 1) {
              local_dc = 0;
              while (local_dc < 0x40) {
                iVar11 = *(int *)(in_ECX + 0xc0);
                auStack_504[local_d0 * 2 + 0x80] = *(uint *)(iVar11 + 0x140 + local_d0 * 0x18);
                auStack_504[local_d0 * 2 + 0x81] = *(uint *)(iVar11 + 0x144 + local_d0 * 0x18);
                iVar11 = local_d0 * 0x40 + local_dc;
                if (local_d0 == local_dc) {
                  in_ECX[iVar11 + 0x144] = (ULevel)0x0;
                  local_dc = local_dc + 1;
                }
                else {
                  in_ECX[iVar11 + 0x144] = (ULevel)0xff;
                  local_dc = local_dc + 1;
                }
              }
            }
            for (param_1 = 1; param_1 < 0x40; param_1 = param_1 + 1) {
              for (iVar11 = 0; local_44 = iVar11, iVar11 < 0x40; iVar11 = iVar11 + 1) {
                for (iVar5 = 0; local_d4 = iVar5, iVar5 < 0x40; iVar5 = iVar5 + 1) {
                  local_18 = in_ECX + iVar11 * 0x40 + iVar5 + 0x144;
                  if ((param_1 < (int)(uint)(byte)*local_18) &&
                     (uVar13 = __allshl(),
                     ((uint)uVar13 & auStack_504[iVar11 * 2 + 0x80]) != 0 ||
                     ((uint)((ulonglong)uVar13 >> 0x20) & auStack_504[iVar11 * 2 + 0x81]) != 0)) {
                    *local_18 = param_1._0_1_;
                  }
                }
              }
              for (local_b0 = 0; local_b0 < 0x40; local_b0 = local_b0 + 1) {
                auStack_504[local_b0 * 2] = 0;
                auStack_504[local_b0 * 2 + 1] = 0;
              }
              for (iVar11 = 0; local_c8 = iVar11, iVar11 < 0x40; iVar11 = iVar11 + 1) {
                for (iVar5 = 0; local_4c = iVar5, iVar5 < 0x40; iVar5 = iVar5 + 1) {
                  uVar13 = __allshl();
                  if (((uint)uVar13 & auStack_504[iVar11 * 2 + 0x80]) != 0 ||
                      ((uint)((ulonglong)uVar13 >> 0x20) & auStack_504[iVar11 * 2 + 0x81]) != 0) {
                    auStack_504[iVar11 * 2] =
                         auStack_504[iVar11 * 2] | auStack_504[iVar5 * 2 + 0x80];
                    auStack_504[iVar11 * 2 + 1] =
                         auStack_504[iVar11 * 2 + 1] | auStack_504[iVar5 * 2 + 0x81];
                  }
                }
              }
              for (local_54 = 0; local_54 < 0x40; local_54 = local_54 + 1) {
                auStack_504[local_54 * 2 + 0x80] = auStack_504[local_54 * 2];
                auStack_504[local_54 * 2 + 0x81] = auStack_504[local_54 * 2 + 1];
              }
            }
          }
          break;
        case 3:
          pAVar10 = ULevel::GetLevelInfo(in_ECX);
          if (((pAVar10 != (ALevelInfo *)0x0) && (*(int *)(pAVar10 + 0x1b8) != 0)) &&
             ((*(byte *)(*(int *)(pAVar10 + 0x1b8) + 100) & 0x80) != 0)) {
            *(undefined4 *)(pAVar10 + 0x1b8) = 0;
            ALevelInfo::GetDefaultPhysicsVolume(pAVar10);
          }
          iVar11 = *(int *)(in_ECX + 0x11a8);
          local_28 = 0;
          for (; iVar11 < *(int *)(in_ECX + 0x3c); iVar11 = iVar11 + 1) {
            piVar2 = (int *)(*(int *)(in_ECX + 0x38) + iVar11 * 4);
            local_d8 = iVar11;
            if (*piVar2 != 0) {
              *(undefined4 *)(*piVar2 + 0x108) = 0;
              iVar5 = *(int *)(*(int *)(in_ECX + 0x38) + iVar11 * 4);
              for (local_5c = 0; local_5c < *(int *)(iVar5 + 0x160); local_5c = local_5c + 1) {
              }
              FArray::Empty((FArray *)(iVar5 + 0x15c),4,0);
              iVar5 = *(int *)(in_ECX + 0x38);
              pAVar10 = ULevel::GetLevelInfo(in_ECX);
              pAVar8 = ALevelInfo::GetDefaultPhysicsVolume(pAVar10);
              *(APhysicsVolume **)(*(int *)(iVar5 + iVar11 * 4) + 0x1b8) = pAVar8;
            }
            *(int *)(in_ECX + 0x11a8) = *(int *)(in_ECX + 0x11a8) + 1;
            if (((param_1 != 0) &&
                (fVar12 = (float10)thunk_FUN_104da1f0(),
                (float10)_DAT_10b14160 + (float10)local_10 < fVar12)) && (-1 < local_28))
            goto LAB_105ce905;
            local_28 = local_28 + 1;
          }
          break;
        case 4:
          iVar5 = 0;
          for (iVar11 = *(int *)(in_ECX + 0x11a8); iVar11 < *(int *)(in_ECX + 0x3c);
              iVar11 = iVar11 + 1) {
            piVar2 = (int *)(*(int *)(in_ECX + 0x38) + iVar11 * 4);
            local_c0 = iVar5;
            local_64 = iVar11;
            if (*piVar2 != 0) {
              (**(code **)(*(int *)*piVar2 + 0x3c))();
            }
            *(int *)(in_ECX + 0x11a8) = *(int *)(in_ECX + 0x11a8) + 1;
            if (((param_1 != 0) &&
                (fVar12 = (float10)thunk_FUN_104da1f0(),
                (float10)_DAT_10b14160 + (float10)local_10 < fVar12)) && (-1 < iVar5))
            goto LAB_105ce905;
            iVar5 = iVar5 + 1;
          }
          break;
        case 5:
          pAVar10 = ULevel::GetLevelInfo(in_ECX);
          *(uint *)(pAVar10 + 0x554) = *(uint *)(pAVar10 + 0x554) | 2;
          pAVar10 = ULevel::GetLevelInfo(in_ECX);
          *(uint *)(pAVar10 + 0x55c) = *(uint *)(pAVar10 + 0x55c) | 4;
          pAVar10 = ULevel::GetLevelInfo(in_ECX);
          if (*(int *)(pAVar10 + 0x614) != 0) {
            local_d04 = 0;
            _memset(local_d02,0,0x7fe);
            FString::FString((FString *)&local_34,(ushort *)&DAT_10853d94);
            local_7c._0_1_ = 3;
            FString::FString(local_f8,&local_d04);
            local_7c._0_1_ = 4;
            pFVar15 = (FString *)&local_34;
            pFVar14 = local_f8;
            pAVar10 = ULevel::GetLevelInfo(in_ECX);
            AGameInfo::eventInitGame(*(AGameInfo **)(pAVar10 + 0x614),pFVar14,pFVar15);
            local_7c._0_1_ = 3;
            FString::~FString(local_f8);
            local_7c = (uint)local_7c._1_3_ << 8;
            FString::~FString((FString *)&local_34);
          }
          break;
        case 6:
          iVar5 = 0;
          for (iVar11 = *(int *)(in_ECX + 0x11a8); iVar11 < *(int *)(in_ECX + 0x3c);
              iVar11 = iVar11 + 1) {
            piVar2 = (int *)(*(int *)(in_ECX + 0x38) + iVar11 * 4);
            local_a8 = iVar5;
            local_6c = iVar11;
            if ((*piVar2 != 0) &&
               (pAVar4 = (AActor *)*piVar2, (*(uint *)(pAVar4 + 0x368) & 0x20000) == 0)) {
              AActor::eventPreBeginPlay(pAVar4);
            }
            *(int *)(in_ECX + 0x11a8) = *(int *)(in_ECX + 0x11a8) + 1;
            if (((param_1 != 0) &&
                (fVar12 = (float10)thunk_FUN_104da1f0(),
                (float10)_DAT_10b14160 + (float10)local_10 < fVar12)) && (-1 < iVar5))
            goto LAB_105ce905;
            iVar5 = iVar5 + 1;
          }
          break;
        case 7:
          iVar5 = 0;
          for (iVar11 = *(int *)(in_ECX + 0x11a8); iVar11 < *(int *)(in_ECX + 0x3c);
              iVar11 = iVar11 + 1) {
            piVar2 = (int *)(*(int *)(in_ECX + 0x38) + iVar11 * 4);
            local_ac = iVar5;
            local_74 = iVar11;
            if ((*piVar2 != 0) &&
               (pAVar4 = (AActor *)*piVar2, (*(uint *)(pAVar4 + 0x368) & 0x20000) == 0)) {
              AActor::eventBeginPlay(pAVar4);
            }
            *(int *)(in_ECX + 0x11a8) = *(int *)(in_ECX + 0x11a8) + 1;
            if (((param_1 != 0) &&
                (fVar12 = (float10)thunk_FUN_104da1f0(),
                (float10)_DAT_10b14160 + (float10)local_10 < fVar12)) && (-1 < iVar5))
            goto LAB_105ce905;
            iVar5 = iVar5 + 1;
          }
          break;
        case 8:
          iVar5 = 0;
          for (iVar11 = *(int *)(in_ECX + 0x11a8); iVar11 < *(int *)(in_ECX + 0x3c);
              iVar11 = iVar11 + 1) {
            piVar2 = (int *)(*(int *)(in_ECX + 0x38) + iVar11 * 4);
            local_b4 = iVar5;
            local_8c = iVar11;
            if ((*piVar2 != 0) && (piVar2 = (int *)*piVar2, (piVar2[0xda] & 0x20000U) == 0)) {
              (**(code **)(*piVar2 + 0x1bc))(1,1);
            }
            *(int *)(in_ECX + 0x11a8) = *(int *)(in_ECX + 0x11a8) + 1;
            if (((param_1 != 0) &&
                (fVar12 = (float10)thunk_FUN_104da1f0(),
                (float10)_DAT_10b14160 + (float10)local_10 < fVar12)) && (-1 < iVar5))
            goto LAB_105ce905;
            iVar5 = iVar5 + 1;
          }
          break;
        case 9:
          iVar5 = 0;
          for (iVar11 = *(int *)(in_ECX + 0x11a8); iVar11 < *(int *)(in_ECX + 0x3c);
              iVar11 = iVar11 + 1) {
            piVar2 = (int *)(*(int *)(in_ECX + 0x38) + iVar11 * 4);
            local_bc = iVar5;
            local_94 = iVar11;
            if ((*piVar2 != 0) && (piVar2 = (int *)*piVar2, (piVar2[0xda] & 0x20000U) == 0)) {
              (**(code **)(*piVar2 + 0x1c0))();
            }
            *(int *)(in_ECX + 0x11a8) = *(int *)(in_ECX + 0x11a8) + 1;
            if (((param_1 != 0) &&
                (fVar12 = (float10)thunk_FUN_104da1f0(),
                (float10)_DAT_10b14160 + (float10)local_10 < fVar12)) && (-1 < iVar5))
            goto LAB_105ce905;
            iVar5 = iVar5 + 1;
          }
          break;
        case 10:
          iVar5 = 0;
          for (iVar11 = *(int *)(in_ECX + 0x11a8); iVar11 < *(int *)(in_ECX + 0x3c);
              iVar11 = iVar11 + 1) {
            piVar2 = (int *)(*(int *)(in_ECX + 0x38) + iVar11 * 4);
            local_c4 = iVar5;
            local_38 = iVar11;
            if ((*piVar2 != 0) &&
               (pAVar4 = (AActor *)*piVar2, (*(uint *)(pAVar4 + 0x368) & 0x20000) == 0)) {
              AActor::eventPostBeginPlay(pAVar4);
              piVar2 = (int *)(*(int *)(in_ECX + 0x38) + iVar11 * 4);
              if (*piVar2 != 0) {
                (**(code **)(*(int *)*piVar2 + 0x1c4))();
              }
            }
            *(int *)(in_ECX + 0x11a8) = *(int *)(in_ECX + 0x11a8) + 1;
            if (((param_1 != 0) &&
                (fVar12 = (float10)thunk_FUN_104da1f0(),
                (float10)_DAT_10b14160 + (float10)local_10 < fVar12)) && (-1 < iVar5))
            goto LAB_105ce905;
            iVar5 = iVar5 + 1;
          }
          break;
        case 0xb:
          iVar5 = 0;
          for (iVar11 = *(int *)(in_ECX + 0x11a8); iVar11 < *(int *)(in_ECX + 0x3c);
              iVar11 = iVar11 + 1) {
            piVar2 = (int *)(*(int *)(in_ECX + 0x38) + iVar11 * 4);
            local_cc = iVar5;
            local_a4 = iVar11;
            if ((*piVar2 != 0) &&
               (pAVar4 = (AActor *)*piVar2, (*(uint *)(pAVar4 + 0x368) & 0x20000) == 0)) {
              AActor::eventSetInitialState(pAVar4);
            }
            *(int *)(in_ECX + 0x11a8) = *(int *)(in_ECX + 0x11a8) + 1;
            if (((param_1 != 0) &&
                (fVar12 = (float10)thunk_FUN_104da1f0(),
                (float10)_DAT_10b14160 + (float10)local_10 < fVar12)) && (-1 < iVar5))
            goto LAB_105ce905;
            iVar5 = iVar5 + 1;
          }
          break;
        case 0xc:
          local_8 = *(int *)(in_ECX + 0x11a8);
          local_1c = 0;
          for (; local_8 < *(int *)(in_ECX + 0x3c); local_8 = local_8 + 1) {
            iVar11 = local_8 * 4;
            if (*(int *)(iVar11 + *(int *)(in_ECX + 0x38)) != 0) {
              FName::FName(local_3c,0);
              iVar5 = FName::operator!=((FName *)(*(int *)(*(int *)(in_ECX + 0x38) + iVar11) + 0x1ec
                                                 ),local_3c);
              if (iVar5 == 0) {
                pAVar4 = *(AActor **)(iVar11 + *(int *)(in_ECX + 0x38));
                if (((((byte)pAVar4[0x2f8] & 2) != 0) && ((*(uint *)(pAVar4 + 0x2e4) & 0x2000) != 0)
                    ) && ((pAVar4[0x34] == (AActor)0x0 || (pAVar4[0x34] == (AActor)0x5)))) {
                  AActor::FindBase(pAVar4);
                }
              }
              else {
                for (iVar11 = 0; local_40 = iVar11, iVar11 < *(int *)(in_ECX + 0x3c);
                    iVar11 = iVar11 + 1) {
                  iVar5 = *(int *)(in_ECX + 0x38);
                  if (*(int *)(iVar5 + iVar11 * 4) != 0) {
                    iVar3 = local_8 * 4;
                    iVar5 = FName::operator==((FName *)(*(int *)(iVar5 + iVar11 * 4) + 0x10c),
                                              (FName *)(*(int *)(iVar3 + iVar5) + 0x1ec));
                    if (iVar5 != 0) {
                      local_18 = *(ULevel **)(iVar3 + *(int *)(in_ECX + 0x38));
                      local_34 = 0;
                      local_30 = 0;
                      local_2c = 0x3f800000;
                      (**(code **)(*(int *)local_18 + 0x16c))
                                (*(undefined4 *)(*(int *)(in_ECX + 0x38) + iVar11 * 4),0,0,
                                 0x3f800000,0);
                      break;
                    }
                  }
                }
              }
              FName::FName(local_48,0);
              pFVar16 = local_48;
              pFVar9 = (FName *)(**(code **)(**(int **)(*(int *)(in_ECX + 0x38) + local_8 * 4) +
                                            0x310))(local_e4,0);
              iVar11 = FName::operator!=(pFVar9,pFVar16);
              if (iVar11 != 0) {
                for (iVar11 = 0; local_58 = iVar11, iVar11 < *(int *)(in_ECX + 0x3c);
                    iVar11 = iVar11 + 1) {
                  iVar5 = 0;
                  while (local_20 = iVar5, iVar5 < 0xc) {
                    FName::FName(local_24,0);
                    pFVar16 = local_24;
                    pFVar9 = (FName *)(**(code **)(**(int **)(*(int *)(in_ECX + 0x38) + local_8 * 4)
                                                  + 0x310))(local_e8,iVar5);
                    iVar5 = FName::operator==(pFVar9,pFVar16);
                    if (iVar5 != 0) break;
                    iVar5 = *(int *)(in_ECX + 0x38);
                    if (*(int *)(iVar5 + iVar11 * 4) != 0) {
                      piVar2 = *(int **)(iVar5 + local_8 * 4);
                      pFVar16 = local_104;
                      uVar6 = (**(code **)(**(int **)(iVar5 + iVar11 * 4) + 0x30c))();
                      pFVar9 = (FName *)(**(code **)(*piVar2 + 0x310))(local_ec,local_20,uVar6);
                      iVar5 = FName::operator==(pFVar9,pFVar16);
                      if (iVar5 != 0) {
                        (**(code **)(**(int **)(*(int *)(in_ECX + 0x38) + local_8 * 4) + 0x314))
                                  (*(undefined4 *)(*(int *)(in_ECX + 0x38) + iVar11 * 4));
                      }
                    }
                    iVar5 = local_20 + 1;
                  }
                }
              }
            }
            *(int *)(in_ECX + 0x11a8) = *(int *)(in_ECX + 0x11a8) + 1;
            if (((param_1 != 0) &&
                (fVar12 = (float10)thunk_FUN_104da1f0(),
                (float10)_DAT_10b14160 + (float10)local_10 < fVar12)) && (-1 < local_1c))
            goto LAB_105ce905;
            local_1c = local_1c + 1;
          }
          pAVar10 = ULevel::GetLevelInfo(in_ECX);
          *(uint *)(pAVar10 + 0x55c) = *(uint *)(pAVar10 + 0x55c) & 0xfffffffb;
          break;
        case 0xd:
          local_7c._0_1_ = 5;
          thunk_FUN_10369060();
          local_7c = CONCAT31(local_7c._1_3_,6);
          pUVar1 = in_ECX + 0x38;
          thunk_FUN_1037ae60(*(int *)pUVar1);
          thunk_FUN_1037ae60(*(int *)pUVar1 + 4);
          for (iVar11 = 2; local_60 = iVar11, iVar11 < *(int *)(in_ECX + 0x3c); iVar11 = iVar11 + 1)
          {
            piVar2 = (int *)(*(int *)pUVar1 + iVar11 * 4);
            if (((*piVar2 != 0) && ((*(byte *)(*piVar2 + 100) & 0x10) != 0)) &&
               ((*(uint *)(*piVar2 + 0x74) & 0x1000) == 0)) {
              thunk_FUN_1037ae60(piVar2);
            }
          }
          *(int *)(in_ECX + 0x13c) = local_10._0_4_;
          for (iVar11 = 2; local_68 = iVar11, iVar11 < *(int *)(in_ECX + 0x3c); iVar11 = iVar11 + 1)
          {
            piVar2 = (int *)(*(int *)pUVar1 + iVar11 * 4);
            if (((*piVar2 != 0) && ((*(byte *)(*piVar2 + 100) & 0x10) != 0)) &&
               ((*(uint *)(*piVar2 + 0x74) & 0x1000) != 0)) {
              thunk_FUN_1037ae60(piVar2);
            }
          }
          *(int *)(in_ECX + 0x138) = local_10._0_4_;
          for (iVar11 = 2; local_70 = iVar11, iVar11 < *(int *)(in_ECX + 0x3c); iVar11 = iVar11 + 1)
          {
            piVar2 = (int *)(*(int *)pUVar1 + iVar11 * 4);
            if ((*piVar2 != 0) && ((*(byte *)(*piVar2 + 100) & 0x10) == 0)) {
              thunk_FUN_1037ae60(piVar2);
            }
          }
          thunk_FUN_1038ba40(0);
          thunk_FUN_103735f0(local_10._0_4_);
          for (local_78 = 0; local_78 < local_10._0_4_; local_78 = local_78 + 1) {
            *(undefined4 *)(*(int *)pUVar1 + local_78 * 4) =
                 *(undefined4 *)(local_14 + local_78 * 4);
          }
          local_7c = CONCAT31(local_7c._1_3_,5);
          thunk_FUN_10326630();
          break;
        case 0xe:
        case 100:
          *(undefined4 *)(in_ECX + 0x11a4) = 2;
        }
        *(undefined4 *)(in_ECX + 0x11a8) = 0;
        *(int *)(in_ECX + 0x11ac) = *(int *)(in_ECX + 0x11ac) + 1;
        ExceptionList = local_84;
        return *(undefined4 *)(in_ECX + 0x11a4);
      }
      if (iVar11 == 2) {
        *(undefined4 *)(in_ECX + 0x11d0) = 1;
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2(*(FOutputDevice **)(in_ECX + 0x11c8),*(ushort **)GLog_exref);
        }
        thunk_FUN_1059bcd0();
        UObject::SWEndLoad();
        goto LAB_105cddfd;
      }
    }
LAB_105ce905:
    uVar6 = *(undefined4 *)(in_ECX + 0x11a4);
  }
  ExceptionList = local_84;
  return uVar6;
}


// ==== 105ce07d Catch@105ce07d

void Catch_105ce07d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 105ce091 Catch@105ce091

void Catch_105ce091(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SetupZoneTable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ce8ae Catch@105ce8ae

void Catch_105ce8ae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x88);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105ce8c5 Catch@105ce8c5

void Catch_105ce8c5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Rearrange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ce95c Catch@105ce95c

void Catch_105ce95c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x84);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105ce973 Catch@105ce973

void Catch_105ce973(void)

{
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::EndLoadSWLevel");
  appUnwindf((ushort *)L"CurrProcess=%d",*(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x11ac));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ceda0 FUN_105ceda0

undefined4 FUN_105ceda0(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108200f0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 != 0) {
    ExceptionList = &local_10;
    iVar1 = thunk_FUN_104e9650(&param_1);
    if (iVar1 != 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105cee0e Catch@105cee0e

void Catch_105cee0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105cee22 Catch@105cee22

void Catch_105cee22(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::DeleteL2EventActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cee70 FUN_105cee70

int FUN_105cee70(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[1];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*in_ECX + iVar2 * 4) == *param_1) {
        if (*(int *)GUndo_exref != 0) {
          (**(code **)(**(int **)GUndo_exref + 4))(in_ECX[3]);
        }
        thunk_FUN_10326200(iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  return iVar1 - in_ECX[1];
}


// ==== 105ceef0 FUN_105ceef0

FArchive * FUN_105ceef0(FArchive *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820100;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FArchive::IsTrans(param_1);
  if (iVar1 == 0) {
    thunk_FUN_105cd2f0(param_1,param_2);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105cef47 Catch@105cef47

void Catch_105cef47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105cef5b Catch@105cef5b

void Catch_105cef5b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TTransArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cefa0 FUN_105cefa0

FArchive * FUN_105cefa0(FArchive *param_1,int param_2)

{
  int iVar1;
  
  thunk_FUN_105cd440(param_1,param_2);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x10) * 2 + 8 < *(int *)(param_2 + 4)) {
      do {
        iVar1 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar1 * 2;
      } while (iVar1 * 4 + 8 < *(int *)(param_2 + 4));
    }
    thunk_FUN_10387760();
  }
  return param_1;
}


// ==== 105cf010 FUN_105cf010

void FUN_105cf010(undefined4 param_1,FURL *param_2)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10820162;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)(in_ECX + 0x34) = FNetworkNotify::vftable;
  *(undefined ***)in_ECX = ULevelBase::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = ULevelBase::vftable_for_FNetworkNotify_;
  thunk_FUN_103960e0(in_ECX,0);
  local_4._0_1_ = 1;
  thunk_FUN_103b15c0(in_ECX,0);
  local_4._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0x58));
  local_4._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 100));
  local_4 = CONCAT31(local_4._1_3_,6);
  *(undefined4 *)(in_ECX + 0x74) = param_1;
  FURL::FURL((FURL *)(in_ECX + 0x78),param_2);
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 105cf110 FUN_105cf110

void FUN_105cf110(FArchive *param_1)

{
  FArchive *this;
  int iVar1;
  undefined4 uVar2;
  UObject *in_ECX;
  undefined4 local_24;
  int local_20;
  FArchive *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = param_1;
  puStack_c = &LAB_10820190;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  iVar1 = FArchive::LicenseeVer(this);
  if (0x16 < iVar1) {
    iVar1 = FArchive::IsTrans(this);
    if (iVar1 == 0) {
      param_1 = *(FArchive **)(in_ECX + 0x4c);
      local_1c = param_1;
      FArray::CountBytes((FArray *)(in_ECX + 0x48),this,4);
      uVar2 = thunk_FUN_10330040(this,&param_1,&local_1c);
      thunk_FUN_10330040(uVar2);
      iVar1 = FArchive::IsLoading(this);
      if (iVar1 != 0) {
        thunk_FUN_1038baa0(param_1);
        thunk_FUN_10373650(param_1);
      }
      for (iVar1 = 0; local_20 = iVar1, iVar1 < *(int *)(in_ECX + 0x4c); iVar1 = iVar1 + 1) {
        thunk_FUN_10354a70(this,*(int *)(in_ECX + 0x48) + iVar1 * 4);
      }
    }
    else {
      thunk_FUN_105ccee0(this,in_ECX + 0x48);
    }
  }
  iVar1 = FArchive::IsTrans(this);
  if (iVar1 == 0) {
    local_24 = *(undefined4 *)(in_ECX + 0x3c);
    local_18 = local_24;
    FArray::CountBytes((FArray *)(in_ECX + 0x38),this,4);
    uVar2 = thunk_FUN_10330040(this,&local_18,&local_24);
    thunk_FUN_10330040(uVar2);
    iVar1 = FArchive::IsLoading(this);
    if (iVar1 != 0) {
      thunk_FUN_1038ba40(local_18);
      thunk_FUN_103735f0(local_18);
    }
    for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x3c); iVar1 = iVar1 + 1) {
      thunk_FUN_1033e5e0(this,*(int *)(in_ECX + 0x38) + iVar1 * 4);
    }
  }
  else {
    thunk_FUN_105ceef0(this,in_ECX + 0x38);
  }
  operator<<(this,(FURL *)(in_ECX + 0x78));
  iVar1 = FArchive::IsLoading(this);
  if (iVar1 == 0) {
    iVar1 = FArchive::IsSaving(this);
    if (iVar1 == 0) {
      thunk_FUN_105c8a50(this,in_ECX + 0x70);
      thunk_FUN_105c8a50(this,in_ECX + 0xbc);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105cf2d0 Catch@105cf2d0

void Catch_105cf2d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 105cf2e4 Catch@105cf2e4

void Catch_105cf2e4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevelBase::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cf380 FUN_105cf380

void FUN_105cf380(void)

{
  AActor *this;
  AZoneInfo *pAVar1;
  undefined4 *puVar2;
  FLeafRenderInfo *this_00;
  FZoneRenderInfo *this_01;
  ULevel *in_ECX;
  int iVar3;
  undefined1 local_50 [24];
  FOutputDevice *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  AActor *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108201a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  local_8 = 0;
  ExceptionList = &local_10;
  ULevel::UpdateTerrainArrays(in_ECX);
  for (iVar3 = 0; local_1c = iVar3, iVar3 < *(int *)(*(int *)(in_ECX + 0xc0) + 0x134);
      iVar3 = iVar3 + 1) {
    pAVar1 = ULevel::GetZoneActor(in_ECX,iVar3);
    puVar2 = (undefined4 *)FGetHSV((uchar)local_50,(uchar)pAVar1[0x3f5],(uchar)pAVar1[0x3f6]);
    *(undefined4 *)(pAVar1 + 1000) = *puVar2;
    *(undefined4 *)(pAVar1 + 0x3ec) = puVar2[1];
    *(undefined4 *)(pAVar1 + 0x3f0) = puVar2[2];
  }
  if (*(int *)GIsEditor_exref == 0) {
    for (iVar3 = 0; local_20 = iVar3, iVar3 < *(int *)(*(int *)(in_ECX + 0xc0) + 0xd0);
        iVar3 = iVar3 + 1) {
      this_00 = (FLeafRenderInfo *)thunk_FUN_10371610(0xc,in_ECX + 0x1150);
      if (this_00 != (FLeafRenderInfo *)0x0) {
        FLeafRenderInfo::FLeafRenderInfo(this_00);
      }
    }
    for (local_18 = 0; local_18 < *(int *)(in_ECX + 0x3c); local_18 = local_18 + 1) {
      this = *(AActor **)(*(int *)(in_ECX + 0x38) + local_18 * 4);
      local_24 = this;
      if ((this != (AActor *)0x0) && (((byte)this[100] & 0x10) != 0)) {
        AActor::GetActorRenderData(this);
        for (iVar3 = 0; local_28 = iVar3, iVar3 < *(int *)(this + 0x114); iVar3 = iVar3 + 1) {
          thunk_FUN_1037ae60(&local_24);
        }
      }
    }
    for (iVar3 = 0; local_2c = iVar3, iVar3 < *(int *)(*(int *)(in_ECX + 0xc0) + 0x134);
        iVar3 = iVar3 + 1) {
      this_01 = (FZoneRenderInfo *)thunk_FUN_10371640(0xc,in_ECX + 0x115c);
      if (this_01 != (FZoneRenderInfo *)0x0) {
        FZoneRenderInfo::FZoneRenderInfo(this_01);
      }
    }
    local_30 = 0;
    local_34 = 0;
    for (local_38 = (FOutputDevice *)0x0; (int)local_38 < *(int *)(in_ECX + 0x1148);
        local_38 = local_38 + 1) {
      iVar3 = (int)local_38 * 0x50 + *(int *)(in_ECX + 0x1144);
      *(int *)(iVar3 + 0x24) = iVar3;
      *(int *)(iVar3 + 0x48) = iVar3;
      local_30 = local_30 + *(int *)(iVar3 + 0x28);
      local_34 = local_34 + *(int *)(iVar3 + 0x4c);
    }
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(local_38,*(ushort **)GLog_exref);
    }
  }
  *(undefined4 *)(in_ECX + 0x1180) = 1;
  ExceptionList = local_10;
  return;
}


// ==== 105cf555 Catch@105cf555

void Catch_105cf555(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 105cf569 Catch@105cf569

void Catch_105cf569(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::BuildRenderData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cf610 FUN_105cf610

void FUN_105cf610(int *param_1,FOutputDevice *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  ALevelInfo *pAVar7;
  ushort *puVar8;
  UGameEngine *this;
  int in_ECX;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FOutputDevice *this_03;
  FOutputDevice *this_04;
  FOutputDevice *this_05;
  FOutputDevice *this_06;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this_07;
  int iVar9;
  FString *pFVar10;
  FString *pFVar11;
  FString *pFVar12;
  ETravelType EVar13;
  ushort local_8ec;
  undefined1 local_8ea [2046];
  FOutputDevice local_ec [68];
  FURL local_a8 [68];
  undefined1 *local_64;
  void *local_60;
  undefined1 *puStack_5c;
  uint local_58;
  FString local_54 [20];
  int local_40;
  FGuid local_3c [4];
  FString local_38 [12];
  ushort *local_2c;
  FString local_28 [4];
  int *local_24;
  uint local_1c;
  FString local_18 [12];
  int local_c;
  int local_8;
  
  puStack_5c = &LAB_108201e5;
  local_60 = ExceptionList;
  local_64 = &stack0xfffff708;
  iVar9 = 0;
  local_58 = 0;
  ExceptionList = &local_60;
  local_8 = in_ECX;
  iVar2 = ParseCommand((ushort **)&param_2,(ushort *)L"USERFLAG");
  if (iVar2 == 0) {
    if (*(int *)(*(int *)(in_ECX + 0x3c) + 0x44) == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(param_2,*(EName *)GLog_exref,(ushort *)0x304);
      }
      iVar2 = ParseCommand((ushort **)&param_2,(ushort *)L"HELLO");
      if (iVar2 == 0) {
        iVar2 = ParseCommand((ushort **)&param_2,(ushort *)L"NETSPEED");
        if (iVar2 != 0) {
          iVar2 = appAtoi((ushort *)param_2);
          if (499 < iVar2) {
            iVar2 = thunk_FUN_10370460(iVar2);
            param_1[0x14] = iVar2;
          }
          if (*(int *)GLog_exref == 0) {
            ExceptionList = local_60;
            return;
          }
          FOutputDevice::Logf2((FOutputDevice *)param_1[0x14],*(ushort **)GLog_exref);
          ExceptionList = local_60;
          return;
        }
        iVar2 = ParseCommand((ushort **)&param_2,(ushort *)L"HAVE");
        if (iVar2 != 0) {
          FGuid::FGuid(local_3c,0,0,0,0);
          Parse((ushort *)param_2,(ushort *)L"GUID=",local_3c);
          iVar2 = param_1[0x30];
          piVar3 = (int *)(iVar2 + 0x34);
          local_24 = piVar3;
          for (; iVar9 < *(int *)(iVar2 + 0x38); iVar9 = iVar9 + 1) {
            iVar5 = *piVar3 + iVar9 * 0x44;
            iVar4 = _AfxIsEqualGUID((_GUID *)(iVar5 + 0x14),(_GUID *)local_3c);
            if (iVar4 != 0) {
              Parse((ushort *)param_2,(ushort *)L"GEN=",(int *)(iVar5 + 0x3c));
            }
          }
          ExceptionList = local_60;
          return;
        }
        iVar2 = ParseCommand((ushort **)&param_2,(ushort *)L"SKIP");
        if (iVar2 != 0) {
          FGuid::FGuid(local_3c,0,0,0,0);
          Parse((ushort *)param_2,(ushort *)L"GUID=",local_3c);
          iVar2 = param_1[0x30];
          if (iVar2 == 0) {
            ExceptionList = local_60;
            return;
          }
          iVar9 = 0;
          while( true ) {
            if (*(int *)(iVar2 + 0x38) <= iVar9) {
              ExceptionList = local_60;
              return;
            }
            pFVar12 = (FString *)(*(int *)(iVar2 + 0x34) + iVar9 * 0x44);
            local_40 = iVar9;
            iVar5 = _AfxIsEqualGUID((_GUID *)(pFVar12 + 0x14),(_GUID *)local_3c);
            if (iVar5 != 0) break;
            iVar9 = iVar9 + 1;
          }
          if (*(int *)GLog_exref != 0) {
            FString::operator*(pFVar12);
            FOutputDevice::Logf2
                      (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
          }
          thunk_FUN_105ca790();
          ExceptionList = local_60;
          return;
        }
        iVar2 = ParseCommand((ushort **)&param_2,(ushort *)L"LOGIN");
        if (iVar2 == 0) {
          iVar2 = ParseCommand((ushort **)&param_2,(ushort *)L"JOIN");
          if ((iVar2 == 0) || (param_1[0xf] != 0)) {
            iVar2 = ParseCommand((ushort **)&param_2,(ushort *)L"CRITOBJCNT");
            if (iVar2 != 0) {
              iVar2 = appAtoi((ushort *)param_2);
              param_1[0xfbe] = 0;
              param_1[0xfbf] = iVar2;
              ExceptionList = local_60;
              return;
            }
            iVar2 = ParseCommand((ushort **)&param_2,(ushort *)L"GAMESTATE");
            if (iVar2 == 0) {
              ExceptionList = local_60;
              return;
            }
            appStrncpy((ushort *)local_a8,(ushort *)param_2,0x21);
            appStrncpy((ushort *)local_ec,(ushort *)(param_2 + 0x40),0x21);
            this = (UGameEngine *)thunk_FUN_1056b1d0(*(undefined4 *)(in_ECX + 0x40));
            iVar2 = UGameEngine::ValidatePackage(this,(ushort *)local_a8,(ushort *)local_ec);
            if (iVar2 != 0) {
              param_1[0xfbe] = param_1[0xfbe] + 1;
              ExceptionList = local_60;
              return;
            }
            if (*(int *)GLog_exref != 0) {
              FOutputDevice::Logf2(local_ec,*(ushort **)GLog_exref);
            }
            FOutputDevice::Logf((FOutputDevice *)(param_1 + 0xd),(ushort *)(param_1 + 0xd));
            (**(code **)(*param_1 + 0x84))();
            param_1[0x1e] = 1;
            ExceptionList = local_60;
            return;
          }
          if ((param_1[0xfbf] != 0) && (param_1[0xfbf] == param_1[0xfbe])) {
            param_1[0xfbd] = 1;
            (**(code **)(*(int *)param_1[0x30] + 0x80))();
            FString::FString(local_18);
            local_58._0_1_ = 5;
            if (*(int *)GLog_exref != 0) {
              FString::operator*((FString *)(param_1 + 0x38));
              FOutputDevice::Logf2(this_05,*(EName *)GLog_exref,(ushort *)0x304);
            }
            EVar13 = 0;
            puVar8 = FString::operator*((FString *)(param_1 + 0x38));
            FURL::FURL(local_a8,(FURL *)0x0,puVar8,EVar13);
            local_58._0_1_ = 6;
            iVar2 = (**(code **)(*(int *)(local_8 + -0x34) + 0xcc))(param_1,3);
            local_58 = CONCAT31(local_58._1_3_,5);
            FURL::~FURL(local_a8);
            if (iVar2 == 0) {
              if (*(int *)GLog_exref != 0) {
                FString::operator*(local_18);
                FOutputDevice::Logf2(this_06,*(EName *)GLog_exref,(ushort *)0x304);
              }
              FString::operator*(local_18);
              FOutputDevice::Logf((FOutputDevice *)(param_1 + 0xd),(ushort *)(param_1 + 0xd));
              (**(code **)(*param_1 + 0x84))();
              param_1[0x1e] = 1;
              local_58 = local_58 & 0xffffff00;
              FString::~FString(local_18);
              ExceptionList = local_60;
              return;
            }
            if (*(int *)GLog_exref != 0) {
              FString::operator*((FString *)(*(int *)(param_1[0xf] + 0x4f4) + 0x3d8));
              FOutputDevice::Logf2
                        (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,
                         (ushort *)0x304);
            }
            local_58 = local_58 & 0xffffff00;
            FString::~FString(local_18);
            ExceptionList = local_60;
            return;
          }
          this_07 = this_04;
          if (*(int *)GLog_exref != 0) {
            FOutputDevice::Logf2(this_04,*(ushort **)GLog_exref);
            this_07 = extraout_ECX;
          }
          FOutputDevice::Logf(this_07,(ushort *)(param_1 + 0xd));
        }
        else {
          local_1c = 0;
          iVar2 = Parse((ushort *)param_2,(ushort *)L"RESPONSE=",(int *)&local_1c);
          if ((iVar2 != 0) &&
             (iVar2 = (**(code **)(**(int **)(in_ECX + 0x40) + 0xa4))(), (iVar2 == 0) != local_1c))
          {
            local_8ec = 0;
            _memset(local_8ea,0,0x7fe);
            FString::FString(local_18);
            local_58._0_1_ = 1;
            FString::FString(local_28);
            local_58 = CONCAT31(local_58._1_3_,2);
            Parse((ushort *)param_2,(ushort *)L"URL=",&local_8ec,0x400);
            FStringNoInit::operator=((FStringNoInit *)(param_1 + 0x38),&local_8ec);
            if (*(int *)GLog_exref != 0) {
              FString::operator*((FString *)(param_1 + 0x38));
              FOutputDevice::Logf2
                        (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,
                         (ushort *)0x304);
            }
            local_2c = &local_8ec;
            while( true ) {
              if ((*local_2c == 0) || (*local_2c == 0x3f)) break;
              local_2c = local_2c + 1;
            }
            FString::FString(local_54,local_2c);
            local_58._0_1_ = 3;
            pFVar6 = (FString *)(**(code **)(*param_1 + 0x6c))();
            local_58._0_1_ = 4;
            pFVar12 = local_28;
            pFVar11 = local_18;
            pFVar10 = local_54;
            pAVar7 = ULevel::GetLevelInfo((ULevel *)(local_8 + -0x34));
            AGameInfo::eventPreLogin(*(AGameInfo **)(pAVar7 + 0x614),pFVar10,pFVar6,pFVar11,pFVar12)
            ;
            local_58._0_1_ = 3;
            FString::~FString(local_38);
            local_58._0_1_ = 2;
            FString::~FString(local_54);
            iVar2 = FString::operator!=(local_18,(ushort *)&DAT_10853d94);
            if (iVar2 != 0) {
              if (*(int *)GLog_exref != 0) {
                FString::operator*(local_28);
                FString::operator*(local_18);
                FOutputDevice::Logf2(this_01,*(EName *)GLog_exref,(ushort *)0x304);
              }
              FString::operator*(local_18);
              FOutputDevice::Logf(this_02,(ushort *)(param_1 + 0xd));
              puVar8 = FString::operator*(local_28);
              if (*puVar8 != 0) {
                FString::operator*(local_28);
                FOutputDevice::Logf(this_03,(ushort *)(param_1 + 0xd));
              }
              (**(code **)(*param_1 + 0x84))();
              param_1[0x1e] = 1;
              local_58._0_1_ = 1;
              FString::~FString(local_28);
              local_58 = (uint)local_58._1_3_ << 8;
              FString::~FString(local_18);
              ExceptionList = local_60;
              return;
            }
            (**(code **)(*(int *)(local_8 + -0x34) + 0x11c))(param_1);
            local_58._0_1_ = 1;
            FString::~FString(local_28);
            local_58 = (uint)local_58._1_3_ << 8;
            FString::~FString(local_18);
            ExceptionList = local_60;
            return;
          }
          FOutputDevice::Logf((FOutputDevice *)(param_1 + 0xd),(ushort *)(param_1 + 0xd));
        }
      }
      else {
        local_c = 0xdb;
        local_8 = 0xdb;
        Parse((ushort *)param_2,(ushort *)L"MINVER=",&local_c);
        Parse((ushort *)param_2,(ushort *)L"VER=",&local_8);
        if ((1999 < local_8) && (local_c < 0x83f)) {
          iVar2 = local_8;
          if (0x83e < local_8) {
            iVar2 = 0x83e;
          }
          param_1[0x36] = iVar2;
          ULevel::GetLevelInfo((ULevel *)(in_ECX + -0x34));
          uVar1 = rdtsc();
          param_1[0x35] = (int)uVar1;
          FOutputDevice::Logf((FOutputDevice *)(param_1 + 0xd),(ushort *)(param_1 + 0xd));
          (**(code **)(*param_1 + 0x84))();
          ExceptionList = local_60;
          return;
        }
        FOutputDevice::Logf((FOutputDevice *)(param_1 + 0xd),(ushort *)(param_1 + 0xd));
      }
      (**(code **)(*param_1 + 0x84))();
      param_1[0x1e] = 1;
    }
    else {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(param_2,*(EName *)GLog_exref,(ushort *)0x304);
      }
      iVar2 = ParseCommand((ushort **)&param_2,(ushort *)L"FAILURE");
      if (iVar2 == 0) {
        iVar2 = ParseCommand((ushort **)&param_2,(ushort *)L"BRAWL");
        if (iVar2 != 0) {
          if (*(int *)GLog_exref != 0) {
            FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
          }
          (**(code **)(**(int **)(in_ECX + 0x40) + 0xa0))
                    (**(undefined4 **)((*(int **)(in_ECX + 0x40))[0x15] + 0x38),L"?failed");
        }
      }
      else {
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x40) + 0x54) + 0x3c) == 0) {
          appFailAssert("Engine->Client->Viewports.Num()",".\\UnLevel.cpp",0x40f);
        }
        (**(code **)(**(int **)(in_ECX + 0x40) + 0xa0))
                  (**(undefined4 **)((*(int **)(in_ECX + 0x40))[0x15] + 0x38),L"?failed");
      }
    }
  }
  else {
    iVar2 = appAtoi((ushort *)param_2);
    param_1[0x37] = iVar2;
  }
  ExceptionList = local_60;
  return;
}


// ==== 105cffb2 Catch@105cffb2

void Catch_105cffb2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 105cffc6 Catch@105cffc6

void Catch_105cffc6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::NotifyReceivedText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d0260 FUN_105d0260

void FUN_105d0260(UObject *param_1)

{
  UObject *this;
  ULevel *this_00;
  ATerrainInfo *pAVar1;
  int iVar2;
  ULevel *in_ECX;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = (ULevel *)param_1;
  puStack_c = &LAB_10820200;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  if (param_1 != (UObject *)in_ECX) {
    ExceptionList = &local_10;
    pAVar1 = ULevel::GetTerrainInfo((ULevel *)param_1);
    local_18 = 0;
    if ((*(int *)(pAVar1 + 0x220c) != 0) || (*(int *)(pAVar1 + 0x2210) != 0)) {
      local_20 = 0;
    }
    iVar2 = thunk_FUN_105ca4d0(&param_1,&local_20);
    if (iVar2 != 0) {
      thunk_FUN_1059bcd0(&param_1);
      local_1c = *(int *)(this_00 + 0x3c);
      while (local_1c = local_1c + -1, -1 < local_1c) {
        this = *(UObject **)(*(int *)(this_00 + 0x38) + local_1c * 4);
        param_1 = this;
        if (this != (UObject *)0x0) {
          if ((((byte)this[0x2f8] & 1) != 0) && (*(int *)(in_ECX + 0x120) != 0)) {
            (**(code **)(**(int **)(in_ECX + 0x120) + 0xc))(this);
          }
          UObject::SetFlags(this,2);
          thunk_FUN_105cee70(&param_1);
          ULevel::_L2_DestroyActor(this_00,(AActor *)this);
          local_18 = local_18 + 1;
        }
      }
      UObject::PurgeGarbage();
      if (*(int *)(this_00 + 0xc0) != 0) {
        UObject::ConditionalDestroy(*(UObject **)(this_00 + 0xc0));
      }
      UObject::ConditionalDestroy((UObject *)this_00);
      (**(code **)(*(int *)this_00 + 0xc))(1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105d0388 Catch@105d0388

void Catch_105d0388(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105d039c Catch@105d039c

void Catch_105d039c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::DeleteSWLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d0410 FUN_105d0410

void FUN_105d0410(UEngine *param_1,int param_2)

{
  FURL *pFVar1;
  UModel *pUVar2;
  UObject *pUVar3;
  undefined4 *puVar4;
  ALevelInfo *pAVar5;
  ABrush *this;
  undefined4 uVar6;
  ULevelBase *in_ECX;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  FURL local_7c [68];
  FRotator local_38 [12];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10820305;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff78;
  ExceptionList = &local_10;
  pFVar1 = (FURL *)FURL::FURL(local_7c,(ushort *)0x0);
  local_8 = 0;
  ULevelBase::ULevelBase(in_ECX,param_1,pFVar1);
  local_8._0_1_ = 2;
  FURL::~FURL(local_7c);
  *(undefined ***)in_ECX = ULevel::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = ULevel::vftable_for_FNetworkNotify_;
  thunk_FUN_103ee480();
  local_8._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 0x1144));
  local_8._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0x1150));
  local_8._0_1_ = 8;
  FArray::FArray((FArray *)(in_ECX + 0x115c));
  local_8._0_1_ = 10;
  FArray::FArray((FArray *)(in_ECX + 0x1168));
  local_8._0_1_ = 0xc;
  FArray::FArray((FArray *)(in_ECX + 0x1174));
  local_8._0_1_ = 0xe;
  FArray::FArray((FArray *)(in_ECX + 0x1198));
  local_8._0_1_ = 0x10;
  FArray::FArray((FArray *)(in_ECX + 0x11b0));
  local_8._0_1_ = 0x12;
  FArray::FArray((FArray *)(in_ECX + 0x11bc));
  local_8._0_1_ = 0x14;
  FArray::FArray((FArray *)(in_ECX + 0x11dc));
  local_8 = CONCAT31(local_8._1_3_,0x17);
  UObject::SetFlags((UObject *)in_ECX,1);
  uStack_98 = 0x105d0543;
  FName::FName((FName *)&stack0xffffff70,0);
  UObject::GetOuter((UObject *)in_ECX);
  uStack_98 = 0x738;
  uStack_9c = 0x105d0556;
  pUVar2 = UModel::operator_new();
  if (pUVar2 == (UModel *)0x0) {
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar3 = (UObject *)UModel::UModel(pUVar2,(ABrush *)0x0,param_2);
  }
  *(UObject **)(in_ECX + 0xc0) = pUVar3;
  UObject::SetFlags(pUVar3,1);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  uStack_98 = 0x105d0594;
  puVar4 = (undefined4 *)FRotator::FRotator(local_38,0,0,0);
  uStack_98 = 0;
  uStack_9c = 0;
  local_a8 = *puVar4;
  local_a4 = puVar4[1];
  local_a0 = puVar4[2];
  local_b4 = local_2c;
  local_b0 = local_28;
  local_ac = local_24;
  uStack_b8 = local_24;
  FName::FName((FName *)&uStack_b8,0);
  ULevel::SpawnActor();
  pAVar5 = ULevel::GetLevelInfo((ULevel *)in_ECX);
  if (pAVar5 == (ALevelInfo *)0x0) {
    appFailAssert("GetLevelInfo()",".\\UnLevel.cpp",0xa1);
  }
  this = ULevel::SpawnBrush((ULevel *)in_ECX);
  if (this != *(ABrush **)(*(int *)(in_ECX + 0x38) + 4)) {
    appFailAssert("Temp==Actors(1)",".\\UnLevel.cpp",0xa5);
  }
  FName::FName((FName *)&stack0xffffff3c,(ushort *)L"Brush",1);
  pUVar3 = UObject::GetOuter((UObject *)in_ECX);
  pUVar2 = UModel::operator_new(0x738,pUVar3);
  if (pUVar2 == (UModel *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = UModel::UModel(pUVar2,this,1);
  }
  *(undefined4 *)(this + 0x278) = uVar6;
  UObject::SetFlags((UObject *)this,0x300001);
  UObject::SetFlags(*(UObject **)(this + 0x278),0x300001);
  pAVar5 = ULevel::GetLevelInfo((ULevel *)in_ECX);
  ALevelInfo::GetDefaultPhysicsVolume(pAVar5);
  *(undefined4 *)GScriptCycles_exref = 0;
  *(undefined4 *)GScriptEntryTag_exref = 0;
  *(undefined4 *)(in_ECX + 0x1190) = 0;
  *(undefined4 *)(in_ECX + 0x1194) = 0;
  *(undefined4 *)(in_ECX + 0x11c8) = 0;
  *(undefined4 *)(in_ECX + 0x11cc) = 0;
  *(undefined4 *)(in_ECX + 0x11d0) = 0;
  *(undefined4 *)(in_ECX + 0x11d4) = 0;
  *(undefined4 *)(in_ECX + 0x11a4) = 0;
  *(undefined4 *)(in_ECX + 0x11ac) = 0;
  *(undefined4 *)(in_ECX + 0x11d8) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 105d06f9 Catch@105d06f9

void Catch_105d06f9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105d070d Catch@105d070d

void Catch_105d070d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::ULevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d07f0 FUN_105d07f0

void FUN_105d07f0(FArchive *param_1)

{
  FString *this;
  FArchive *this_00;
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 uVar4;
  ULevelBase *in_ECX;
  int iVar5;
  int local_40 [3];
  int local_34;
  int local_30;
  int local_20;
  int local_1c;
  ULevelBase *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  this_00 = param_1;
  puStack_c = &LAB_10820370;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  iVar5 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  ULevelBase::Serialize(in_ECX,param_1);
  param_1 = (FArchive *)(float)*(double *)(in_ECX + 0x104);
  thunk_FUN_105c98a0(this_00,in_ECX + 0xc0);
  iVar1 = FArchive::Ver(this_00);
  if (iVar1 < 0x62) {
    thunk_FUN_105c96a0();
    local_8._0_1_ = 1;
    thunk_FUN_105cd1a0(this_00,local_40);
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_105cd0e0();
  }
  thunk_FUN_10330060(this_00,&param_1);
  thunk_FUN_1033e5e0(this_00,in_ECX + 0x124);
  for (; local_1c = iVar5, iVar5 < 0x10; iVar5 = iVar5 + 1) {
    thunk_FUN_105c9210(this_00,in_ECX + iVar5 * 4 + 0xc4);
  }
  iVar1 = FArchive::Ver(this_00);
  if (iVar1 < 0x3f) {
    iVar1 = FArchive::Ver(this_00);
    if (0x3c < iVar1) {
      thunk_FUN_10368480();
      local_8._0_1_ = 2;
      thunk_FUN_10368480();
      local_8._0_1_ = 3;
      uVar4 = thunk_FUN_105ccd30(this_00,&local_34,local_40);
      thunk_FUN_105ccd30(uVar4);
      uVar4 = thunk_FUN_103f4170();
      local_8._0_1_ = 4;
      thunk_FUN_103ee450(uVar4);
      local_8 = CONCAT31(local_8._1_3_,3);
      thunk_FUN_103f4120();
      for (iVar1 = 0; local_20 = iVar1, iVar1 < local_30; iVar1 = iVar1 + 1) {
        this = (FString *)(iVar1 * 0xc + local_34);
        puVar2 = FString::operator*((FString *)(iVar1 * 0xc + local_40[0]));
        puVar3 = FString::operator*(this);
        thunk_FUN_10590bb0(puVar3,puVar2);
        in_ECX = local_18;
      }
      local_8._0_1_ = 2;
      thunk_FUN_1032ce30();
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_1032ce30();
    }
  }
  else {
    thunk_FUN_105cefa0(this_00,in_ECX + 0x10c);
  }
  if (*(int *)(in_ECX + 0xc0) != 0) {
    iVar1 = FArchive::IsTrans(this_00);
    if (iVar1 == 0) {
      (**(code **)(*(int *)this_00 + 0x10))(*(undefined4 *)(in_ECX + 0xc0));
    }
  }
  iVar1 = FArchive::IsLoading(this_00);
  if (iVar1 == 0) {
    iVar1 = FArchive::IsSaving(this_00);
    if (iVar1 == 0) {
      uVar4 = thunk_FUN_105ccf90(this_00,in_ECX + 0x11b0,in_ECX + 0x11bc);
      thunk_FUN_105ccf90(uVar4);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105d0a04 Catch@105d0a04

void Catch_105d0a04(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105d0a18 Catch@105d0a18

void Catch_105d0a18(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d0b10 FUN_105d0b10

void FUN_105d0b10(undefined4 param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x184))(param_1);
  return;
}


// ==== 105d0b30 FUN_105d0b30

void FUN_105d0b30(void)

{
  return;
}


// ==== 105d0b40 FUN_105d0b40

undefined4 FUN_105d0b40(void)

{
  return 0;
}


// ==== 105d0b50 APawn::IsLocallyControlled thunk -> 103121b1

// ==== 105d0b60 FUN_105d0b60

void FUN_105d0b60(ushort *param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (param_1 != (ushort *)0x0) {
    *(uint *)(in_ECX + 0xa64) = *(uint *)(in_ECX + 0xa64) | 2;
    FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0xa78),param_1);
    *(undefined4 *)(in_ECX + 0xa6c) = param_2;
  }
  return;
}


// ==== 105d0ba0 FUN_105d0ba0

void FUN_105d0ba0(ushort *param_1,undefined4 param_2,int param_3)

{
  int in_ECX;
  
  if (param_1 != (ushort *)0x0) {
    *(uint *)(in_ECX + 0xa68) = 2 - (uint)(param_3 != 0);
    FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0xa84),param_1);
    *(undefined4 *)(in_ECX + 0xa70) = param_2;
  }
  return;
}


// ==== 105d0bf0 FUN_105d0bf0

void FUN_105d0bf0(void)

{
  ALineagePlayerController::m_pPrevZoneNameInfo = (void *)0x0;
  return;
}


// ==== 105d0c00 FUN_105d0c00

bool FUN_105d0c00(int param_1)

{
  int in_ECX;
  
  return in_ECX == param_1;
}


// ==== 105d0c10 FUN_105d0c10

void FUN_105d0c10(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(uint *)(in_ECX + 0x14ec) =
       *(uint *)(in_ECX + 0x14ec) ^ (param_1 << 0x10 ^ *(uint *)(in_ECX + 0x14ec)) & 0x10000;
  uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0xe0) + 0x4bc);
  *(undefined4 *)(in_ECX + 0x14e0) = param_2;
  *(undefined4 *)(in_ECX + 0x14dc) = uVar1;
  *(undefined4 *)(in_ECX + 0x14e4) = param_3;
  return;
}


// ==== 105d0c70 FUN_105d0c70

void FUN_105d0c70(int param_1,float param_2)

{
  float fVar1;
  
  for (fVar1 = *(float *)(param_1 + 0x3d8); fVar1 < *(float *)(param_1 + 0x3d4);
      fVar1 = fVar1 + 24.0) {
  }
  for (; param_2 < *(float *)(param_1 + 0x3d4); param_2 = param_2 + 24.0) {
  }
  if (fVar1 <= param_2) {
    if (*(char *)(param_1 + 0x3bc) != '\x06') {
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xffffffdb;
      *(undefined4 *)(param_1 + 0x3e0) = 0;
      *(undefined1 *)(param_1 + 0x3bc) = 6;
    }
    *(float *)(param_1 + 0x3e0) =
         *(float *)(param_1 + 0x3e0) - (param_2 - *(float *)(param_1 + 0x3dc));
    *(float *)(param_1 + 0x3dc) = param_2;
    return;
  }
  if (*(char *)(param_1 + 0x3bc) == '\x01') {
    return;
  }
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x24;
  *(undefined1 *)(param_1 + 0x3bc) = 1;
  *(float *)(param_1 + 0x3e0) = fVar1 - param_2;
  *(float *)(param_1 + 0x3dc) = param_2;
  return;
}


// ==== 105d0e00 FUN_105d0e00

void FUN_105d0e00(undefined4 param_1)

{
  undefined4 *in_ECX;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  
  *in_ECX = param_1;
  FBox::FBox((FBox *)(in_ECX + 1),(FVector *)&stack0x00000008,(FVector *)&stack0x00000014);
  in_ECX[0xb] = in_stack_0000002c;
  in_ECX[0xc] = in_stack_00000030;
  in_ECX[8] = in_stack_00000020;
  in_ECX[0xd] = in_stack_00000034;
  in_ECX[9] = in_stack_00000024;
  in_ECX[10] = in_stack_00000028;
  in_ECX[0xe] = 0;
  return;
}


// ==== 105d0e70 FUN_105d0e70

void FUN_105d0e70(float *param_1,float *param_2,int param_3,int param_4,AActor *param_5)

{
  AActor *pAVar1;
  AActor *this;
  int iVar2;
  int *in_ECX;
  undefined4 uVar3;
  float10 fVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = param_5;
  puStack_c = &LAB_10820390;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  in_ECX[1] = (int)param_5;
  in_ECX[2] = param_4;
  if (param_4 == 0) {
    fVar4 = (float10)*(float *)(*(int *)(param_3 + 0x74) + 0x68);
  }
  else {
    fVar4 = (float10)*(double *)(*(int *)(param_3 + 0x74) + 0x50) -
            (float10)*(double *)(param_4 + 0x84);
  }
  param_5 = (AActor *)0x0;
  if ((*(uint *)(this + 0x74) & 0x1000) != 0) {
    param_5 = (AActor *)0x0;
    goto LAB_105d0f71;
  }
  pAVar1 = *(AActor **)(*(int *)(param_3 + 0x3c) + 0x3bc);
  if ((pAVar1 == (AActor *)0x0) || (iVar2 = AActor::IsOwnedBy(this,pAVar1), iVar2 == 0)) {
    if (((byte)this[0xc1] < 2) && (this[0x34] != (AActor)0x0)) goto LAB_105d0f71;
    if (param_2[2] * (*(float *)(this + 0x1c4) - param_1[2]) +
        param_2[1] * (*(float *)(this + 0x1c0) - param_1[1]) +
        *param_2 * (*(float *)(this + 0x1bc) - *param_1) < 0.0) {
      param_5 = (AActor *)0xbf800000;
      goto LAB_105d0f71;
    }
  }
  param_5 = (AActor *)0x3f800000;
LAB_105d0f71:
  if ((param_4 == 0) || (*(int *)(param_4 + 0xa8) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_4 + 0xa4);
  }
  fVar4 = (float10)(**(code **)(*(int *)this + 0x80))
                             (uVar3,(float)fVar4,*(undefined4 *)(param_3 + 0x1f0));
  iVar2 = appRound((float)(((float10)(float)param_5 + (float10)3.0) * (float10)65536.0 * fVar4));
  *in_ECX = iVar2;
  ExceptionList = local_10;
  return;
}


// ==== 105d0fee Catch@105d0fee

void Catch_105d0fee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105d1002 Catch@105d1002

void Catch_105d1002(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FActorPriority::FActorPriority");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d1090 FUN_105d1090

undefined4 FUN_105d1090(void)

{
  FMemStackFrame *this;
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(in_ECX + 0x3c) != 0) &&
     ((*(uint *)(*(int *)(in_ECX + 0x3c) + 100) >> 8 & 1) !=
      *(uint *)(*(int *)(in_ECX + 0xe4) + 0x134))) {
    iVar3 = 8;
    iVar2 = 8;
    this = FMemStack::GetThreadSafeMemStack(&GEngineMem);
    piVar1 = (int *)FMemStackFrame::PushBytes(this,iVar2,iVar3);
    if (piVar1 != (int *)0x0) {
      iVar2 = *(int *)(*(int *)(in_ECX + 0xe4) + 300);
      *piVar1 = in_ECX;
      piVar1[1] = iVar2;
      *(int **)(*(int *)(in_ECX + 0xe4) + 300) = piVar1;
      return 0;
    }
    *(undefined4 *)(*(int *)(in_ECX + 0xe4) + 300) = 0;
    return 0;
  }
  return 1;
}


// ==== 105d1130 FUN_105d1130

undefined4 FUN_105d1130(void)

{
  FMemStackFrame *pFVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(in_ECX + 0x3c) != 0) &&
     ((*(uint *)(*(int *)(in_ECX + 0x3c) + 100) >> 8 & 1) !=
      *(uint *)(*(int *)(in_ECX + 0xe4) + 0x134))) {
    iVar4 = 8;
    iVar3 = 8;
    pFVar1 = FMemStack::GetThreadSafeMemStack(&GEngineMem);
    piVar2 = (int *)FMemStackFrame::PushBytes(pFVar1,iVar3,iVar4);
    if (piVar2 != (int *)0x0) {
      iVar3 = *(int *)(*(int *)(in_ECX + 0xe4) + 300);
      *piVar2 = in_ECX;
      piVar2[1] = iVar3;
      *(int **)(*(int *)(in_ECX + 0xe4) + 300) = piVar2;
      return 0;
    }
    *(undefined4 *)(*(int *)(in_ECX + 0xe4) + 300) = 0;
    return 0;
  }
  if ((*(int *)(in_ECX + 0x14d8) != 0) &&
     ((*(uint *)(*(int *)(in_ECX + 0x14d8) + 100) >> 8 & 1) !=
      *(uint *)(*(int *)(in_ECX + 0xe4) + 0x134))) {
    iVar4 = 8;
    iVar3 = 8;
    pFVar1 = FMemStack::GetThreadSafeMemStack(&GEngineMem);
    piVar2 = (int *)FMemStackFrame::PushBytes(pFVar1,iVar3,iVar4);
    if (piVar2 != (int *)0x0) {
      iVar3 = *(int *)(*(int *)(in_ECX + 0xe4) + 300);
      *piVar2 = in_ECX;
      piVar2[1] = iVar3;
      *(int **)(*(int *)(in_ECX + 0xe4) + 300) = piVar2;
      return 0;
    }
    *(undefined4 *)(*(int *)(in_ECX + 0xe4) + 300) = 0;
    return 0;
  }
  return 1;
}


// ==== 105d1250 FUN_105d1250

void FUN_105d1250(void)

{
  FVector *this;
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  APawn *in_ECX;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_c;
  
  this = (FVector *)(in_ECX + 0x1d4);
  puVar3 = (undefined4 *)FVector::SafeNormal(this);
  *(undefined4 *)(in_ECX + 0x1e0) = *puVar3;
  *(undefined4 *)(in_ECX + 0x1e4) = puVar3[1];
  *(undefined4 *)(in_ECX + 0x1e8) = puVar3[2];
  if (((byte)(*(UObject **)(in_ECX + 0x1b8))[0x490] & 0x20) == 0) {
    if (((*(uint *)(in_ECX + 0x14e8) & 0x8000) == 0) ||
       (iVar4 = UObject::IsA(*(UObject **)(in_ECX + 0x1b8),&ALadderVolume::PrivateStaticClass),
       iVar4 == 0)) {
      if ((*(uint *)(in_ECX + 0x14e8) & 0x400000) == 0) {
        in_ECX[0x34] = (APawn)0x4;
      }
      else {
        in_ECX[0x34] = (APawn)0x1;
      }
    }
    else {
      in_ECX[0x34] = (APawn)0xb;
    }
  }
  else {
    in_ECX[0x34] = (APawn)0x3;
  }
  AActor::moveSmooth();
  if (((*(uint *)(in_ECX + 0x14e8) & 0x400000) == 0) ||
     ((*(uint *)(in_ECX + 0x14e8) & 0x40000000) != 0)) goto LAB_105d14c9;
  uStack_40 = 0;
  uStack_38 = 0;
  local_3c = 0;
  uStack_34 = 0;
  uStack_20 = 0;
  uStack_30 = 0;
  uStack_18 = 0xffffffff;
  uStack_2c = 0;
  uStack_14 = 0;
  uStack_28 = 0;
  fStack_24 = 0.0;
  fStack_1c = 1.0;
  if (*(float *)(in_ECX + 0x1dc) == 0.0) {
    (**(code **)(**(int **)(in_ECX + 0xe4) + 0xe4))(&uStack_40);
LAB_105d149d:
    if ((fStack_1c != 1.0) && (0.7 <= fStack_24)) {
      *(undefined4 *)(in_ECX + 0x1dc) = 0;
      goto LAB_105d14c9;
    }
  }
  else if (*(float *)(in_ECX + 0x1dc) < 0.0) {
    (**(code **)(**(int **)(in_ECX + 0xe4) + 0xe4))(&uStack_40);
    goto LAB_105d149d;
  }
  if (*(float *)(in_ECX + 0x1dc) == 0.0) {
    *(float *)(in_ECX + 0x1dc) = *(float *)(*(int *)(in_ECX + 0x1b8) + 0x44c) * 0.15;
  }
  iVar4 = *(int *)(in_ECX + 0x1b8);
  fVar1 = *(float *)(iVar4 + 0x448);
  fVar2 = *(float *)(iVar4 + 0x44c);
  *(float *)this = *(float *)this + fStack_c * *(float *)(iVar4 + 0x444) * 0.5;
  *(float *)(in_ECX + 0x1d8) = *(float *)(in_ECX + 0x1d8) + fVar1 * 0.5 * fStack_c;
  *(float *)(in_ECX + 0x1dc) = *(float *)(in_ECX + 0x1dc) + fVar2 * 0.5 * fStack_c;
  in_ECX[0x34] = (APawn)0x2;
LAB_105d14c9:
  if ((((byte)in_ECX[0x1734] & 1) != 0) && (*(int *)(in_ECX + 0x104) != 0)) {
    APawn::UpdateMovementAnimation(in_ECX,fStack_c);
  }
  AActor::eventTick((AActor *)in_ECX,fStack_c);
  return;
}


// ==== 105d1680 FUN_105d1680

void FUN_105d1680(float param_1)

{
  float *pfVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108203a0;
  local_10 = ExceptionList;
  local_8 = 0;
  pfVar1 = (float *)(in_ECX + 0xaa);
  if (in_ECX[0xa9] == 0) {
    if (*pfVar1 == 0.0) {
      ExceptionList = &local_10;
      in_ECX[0xa9] = 0;
      in_ECX[0xab] = -0x1000000;
      (**(code **)(*in_ECX + 0xfc))();
      ExceptionList = local_10;
      return;
    }
    if (pfVar1 == (float *)0x0) {
      return;
    }
    if (*pfVar1 <= 0.0) {
      param_1 = *pfVar1 + param_1;
      ExceptionList = &local_10;
      *pfVar1 = param_1;
      if (param_1 < 0.0) goto LAB_105d17b5;
LAB_105d179d:
      *pfVar1 = 0.0;
    }
    else {
      param_1 = *pfVar1 - param_1;
      ExceptionList = &local_10;
      *pfVar1 = param_1;
      if (param_1 < 0.0 != (param_1 == 0.0)) goto LAB_105d179d;
LAB_105d17b5:
      if (*pfVar1 != 0.0) goto LAB_105d172b;
    }
    in_ECX[0xa9] = 0;
    goto LAB_105d17d8;
  }
  if (*pfVar1 == 0.0) {
    return;
  }
  if (pfVar1 == (float *)0x0) {
    return;
  }
  if (*pfVar1 <= 0.0) {
    param_1 = *pfVar1 + param_1;
    ExceptionList = &local_10;
    *pfVar1 = param_1;
    if (param_1 < 0.0) goto LAB_105d1707;
LAB_105d16ef:
    *pfVar1 = 0.0;
  }
  else {
    param_1 = *pfVar1 - param_1;
    ExceptionList = &local_10;
    *pfVar1 = param_1;
    if (param_1 < 0.0 != (param_1 == 0.0)) goto LAB_105d16ef;
LAB_105d1707:
    if (*pfVar1 != 0.0) {
LAB_105d172b:
      (**(code **)(*in_ECX + 0x108))(0xff,0xff,0xff,2);
      ExceptionList = local_10;
      return;
    }
  }
  in_ECX[0xa9] = 0;
LAB_105d17d8:
  in_ECX[0xab] = -0x1000000;
  (**(code **)(*in_ECX + 0xfc))();
  ExceptionList = local_10;
  return;
}


// ==== 105d1807 Catch@105d1807

void Catch_105d1807(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105d181b Catch@105d181b

void Catch_105d181b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::UpdateOverlay");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d18b0 FUN_105d18b0

void FUN_105d18b0(void)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined4 *puVar4;
  undefined1 local_40 [12];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108203b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX[0x39] + 0x74) + 0x60) + 0xa4))(in_ECX[0x21]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    local_28 = (float)in_ECX[0x1e];
    local_24 = (float)in_ECX[0x1f];
    local_20 = (float)in_ECX[0x20];
    local_34 = 0;
    local_30 = 0;
    local_2c = 0x3f800000;
    puVar4 = &local_34;
    pfVar2 = (float *)FVector::RotateAngleAxis
                                ((FVector *)&local_28,(int)local_40,
                                 (FVector *)(*(uint *)(*(int *)(iVar1 + 4) + 0x1cc) & 0xffff));
    iVar1 = *(int *)(iVar1 + 4);
    local_28 = *(float *)(iVar1 + 0x1bc) + *pfVar2;
    local_24 = *(float *)(iVar1 + 0x1c0) + pfVar2[1];
    local_20 = *(float *)(iVar1 + 0x1c4) + pfVar2[2];
    if (((in_ECX[0x22] & 2U) != 0) &&
       (((in_ECX[0x536] != 0 && ((in_ECX[0x22] & 4U) != 0)) &&
        (iVar1 = (**(code **)(*(int *)in_ECX[0x536] + 0x35c))(puVar4), iVar1 != 0)))) {
      uVar3 = (**(code **)(*(int *)in_ECX[0x536] + 0x35c))(0x3f800000);
      AController::MoveTo((AController *)in_ECX[0x536],local_28,local_24,local_20,uVar3);
      ExceptionList = local_10;
      return;
    }
    (**(code **)(*in_ECX + 0x32c))
              (local_28,local_24,local_20,in_ECX[0x6f],in_ECX[0x70],in_ECX[0x71]);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105d1a43 Catch@105d1a43

void Catch_105d1a43(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105d1a57 Catch@105d1a57

void Catch_105d1a57(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::TickMoveInVehicle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d1af0 FUN_105d1af0

void FUN_105d1af0(float param_1,float param_2,float param_3,undefined8 param_4)

{
  uint *puVar1;
  float fVar2;
  APawn *in_ECX;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [8];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  if (*(int *)(in_ECX + 0x14d8) == 0) {
    return;
  }
  APawn::NActionStop(in_ECX);
  if ((*(byte *)(*(int *)(in_ECX + 0x14d8) + 0x41c) & 1) != 0) {
    return;
  }
  *(uint *)(in_ECX + 0x6dc) = *(uint *)(in_ECX + 0x6dc) & 0xfffffffe;
  fVar7 = *(float *)(in_ECX + 0x1c4);
  puVar1 = (uint *)(*(int *)(in_ECX + 0x14d8) + 0x41c);
  *puVar1 = *puVar1 & 0xfffffffb;
  if (in_ECX == *(APawn **)
                 (*(int *)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x54) +
                                     0x38) + 0x3c) + 0x3bc)) goto LAB_105d1f95;
  iVar3 = *(int *)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x54) + 0x38) +
                  0x3c);
  fVar6 = *(float *)(iVar3 + 0x1bc);
  fVar2 = *(float *)GL2PawnCR_exref * 32768.0 * 0.0625;
  fVar8 = *(float *)(iVar3 + 0x1c0);
  local_48 = *(float *)(in_ECX + 0x1bc);
  local_3c = fVar6 - param_1;
  local_44 = *(float *)(in_ECX + 0x1c0);
  local_40 = *(float *)(in_ECX + 0x1c4);
  local_38 = fVar8 - param_2;
  local_34 = param_3 - param_3;
  fVar5 = FVector::Size((FVector *)&local_3c);
  if (fVar2 < fVar5) {
    local_3c = fVar6 - local_48;
    local_38 = fVar8 - local_44;
    local_34 = param_3 - param_3;
    fVar5 = FVector::Size((FVector *)&local_3c);
    if (fVar2 < fVar5) {
      return;
    }
  }
  local_3c = fVar6 - local_48;
  local_38 = fVar8 - local_44;
  local_34 = param_3 - param_3;
  fVar6 = FVector::Size((FVector *)&local_3c);
  if (fVar6 <= fVar2) {
    local_3c = local_48 - (float)param_4;
    local_38 = local_44 - param_4._4_4_;
    local_34 = param_3 - fVar7;
    fVar6 = FVector::Size((FVector *)&local_3c);
    if (200.0 < fVar6) {
      piVar4 = *(int **)(*(int *)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) +
                                                     0x54) + 0x38) + 0x3c) + 0xe4);
      thunk_FUN_104419f0(0x3f800000,0);
      local_48 = (float)param_4;
      local_44 = param_4._4_4_;
      iVar3 = 0;
      local_40 = fVar7;
      do {
        local_40 = local_40 + 30.0;
        local_3c = *(float *)(in_ECX + 0x2f0);
        local_38 = *(float *)(in_ECX + 0x2f0);
        local_34 = *(float *)(in_ECX + 0x2f4);
        (**(code **)(*piVar4 + 0xe4))(local_30);
        if (fStack_20 != 0.0) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x1e);
      goto LAB_105d1e89;
    }
  }
  else {
    piVar4 = *(int **)(*(int *)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x54)
                                          + 0x38) + 0x3c) + 0xe4);
    thunk_FUN_104419f0(0x3f800000,0);
    local_3c = (float)param_4;
    local_38 = param_4._4_4_;
    iVar3 = 0;
    local_34 = fVar7;
    do {
      local_34 = local_34 - 30.0;
      local_48 = *(float *)(in_ECX + 0x2f0);
      local_44 = *(float *)(in_ECX + 0x2f0);
      local_40 = *(float *)(in_ECX + 0x2f4);
      (**(code **)(*piVar4 + 0xe4))(local_30);
      if (fStack_20 != 0.0) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1e);
LAB_105d1e89:
    if (iVar3 == 0x1e) {
      fStack_28 = (float)param_4;
      fStack_24 = param_4._4_4_;
      fStack_20 = fVar7;
    }
    (**(code **)(*piVar4 + 0xa8))();
  }
  fVar6 = APawn::GetCurSpeed(in_ECX,-1);
  local_3c = param_1 - *(float *)(in_ECX + 0x1bc);
  local_38 = param_2 - *(float *)(in_ECX + 0x1c0);
  local_34 = param_3 - *(float *)(in_ECX + 0x1c4);
  local_48 = param_1 - (float)param_4;
  local_44 = param_2 - param_4._4_4_;
  local_40 = param_3 - fVar7;
  fVar7 = FVector::Size((FVector *)&local_3c);
  fVar8 = FVector::Size((FVector *)&local_48);
  *(undefined4 *)(in_ECX + 0x6d0) = 0x40400000;
  fVar7 = (fVar7 - fVar8) / 3.0 + *(float *)(in_ECX + 0x6b4) * fVar6;
  if (*(int *)(in_ECX + 0x778) == 2) {
    *(float *)(in_ECX + 0x1558) = fVar7;
  }
  else if (*(int *)(in_ECX + 0x778) == 1) {
    *(float *)(in_ECX + 0x1554) = fVar7;
  }
  else {
    *(float *)(in_ECX + 0x1550) = fVar7;
  }
LAB_105d1f95:
  AController::MoveTo(*(AController **)(in_ECX + 0x14d8),param_1,param_2,param_3,0,0x3f800000);
  return;
}


// ==== 105d2110 FUN_105d2110

undefined4 FUN_105d2110(float param_1,int param_2)

{
  APawn *pAVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  AController *in_ECX;
  uint extraout_ECX;
  float fVar5;
  float local_60;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108203c0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  local_8 = 0;
  local_60 = *(float *)(in_ECX + 100);
  if (((((uint)local_60 & 0x8000) != 0) || (param_2 == 1)) ||
     (((iVar4 = *(int *)(in_ECX + 0x3bc), iVar4 != 0 && ((*(uint *)(iVar4 + 100) & 0x8000) != 0)) &&
      ((((*(char *)(iVar4 + 0x34) == '\0' || (*(char *)(iVar4 + 0x34) == '\x05')) &&
        (5.0 < (float)*(double *)(*(int *)(in_ECX + 0xe4) + 0x104) - *(float *)(iVar4 + 0x108))) &&
       (*(char *)(*(int *)(in_ECX + 0xe0) + 0x5d4) == '\0')))))) {
    *(uint *)(in_ECX + 100) =
         (*(int *)(*(int *)(in_ECX + 0xe4) + 0x134) << 8 ^ (uint)local_60) & 0x100 ^ (uint)local_60;
  }
  else {
    ExceptionList = &local_10;
    *(uint *)(in_ECX + 100) =
         (*(int *)(*(int *)(in_ECX + 0xe4) + 0x134) << 8 ^ (uint)local_60) & 0x100 ^ (uint)local_60;
    puVar3 = &stack0xffffffa4;
    if (1 < (byte)in_ECX[0xc2]) {
      local_60 = param_1;
      (**(code **)(*(int *)in_ECX + 0x184))();
      local_60 = (float)extraout_ECX;
      puVar3 = local_14;
    }
    local_14 = puVar3;
    if ((in_ECX[0xc2] == (AController)0x4) && (param_2 == 2)) {
      if (*(float *)(in_ECX + 0x3c4) < 0.0) {
        FName::FName((FName *)&local_60,0x155);
        iVar4 = UObject::IsProbing();
        if (iVar4 == 0) {
          local_60 = 4.3610932e-29;
          fVar5 = appFrand();
          fVar5 = fVar5 * 0.1 + 0.15 + *(float *)(in_ECX + 0x3c4);
        }
        else {
          local_60 = 4.3610854e-29;
          AController::CheckEnemyVisible(in_ECX);
          local_60 = 4.3610872e-29;
          fVar5 = appFrand();
          fVar5 = fVar5 * 0.1 + 0.05;
        }
        *(float *)(in_ECX + 0x3c4) = fVar5;
      }
      *(float *)(in_ECX + 0x3c4) = *(float *)(in_ECX + 0x3c4) - param_1;
    }
    pAVar1 = *(APawn **)(in_ECX + 0x3bc);
    iVar4 = 0;
    if (pAVar1 != (APawn *)0x0) {
      if ((*(uint *)(pAVar1 + 0x2f8) & 0x4000) != 0) {
        local_60 = *(float *)(in_ECX + 0x408);
        APawn::rotateToward(pAVar1,*(undefined4 *)(in_ECX + 0x40c),*(undefined4 *)(in_ECX + 0x400),
                            *(undefined4 *)(in_ECX + 0x404));
      }
      iVar4 = *(int *)(in_ECX + 0x3bc);
      *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(iVar4 + 0x1c8);
      *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(iVar4 + 0x1cc);
      *(undefined4 *)(in_ECX + 0x1d0) = *(undefined4 *)(iVar4 + 0x1d0);
    }
    iVar2 = *(int *)(in_ECX + 0x538);
    if (iVar2 != 0) {
      if (((iVar4 != 0) && ((*(byte *)(iVar2 + 100) & 0x80) == 0)) &&
         (*(int *)(iVar2 + 0x14d8) != 0)) {
        local_2c = *(float *)(iVar2 + 0x1bc) - *(float *)(iVar4 + 0x1bc);
        local_28 = *(float *)(iVar2 + 0x1c0) - *(float *)(iVar4 + 0x1c0);
        local_24 = *(float *)(iVar2 + 0x1c4) - *(float *)(iVar4 + 0x1c4);
        local_60 = 4.3611724e-29;
        local_18 = local_24;
        fVar5 = FVector::SizeSquared((FVector *)&local_2c);
        if (fVar5 <= *(float *)(in_ECX + 0x53c)) {
          iVar4 = *(int *)(in_ECX + 0x538);
          local_38 = *(float *)(iVar4 + 0x1bc) - *(float *)(in_ECX + 0x52c);
          local_34 = *(float *)(iVar4 + 0x1c0) - *(float *)(in_ECX + 0x530);
          local_30 = *(float *)(iVar4 + 0x1c4) - *(float *)(in_ECX + 0x534);
          local_60 = 4.3612e-29;
          local_18 = local_30;
          fVar5 = FVector::SizeSquared((FVector *)&local_38);
          if (fVar5 <= *(float *)(in_ECX + 0x53c) * 0.25) {
            iVar4 = *(int *)(in_ECX + 0x538);
            local_60 = 4.3612136e-29;
            fVar5 = FVector::SizeSquared((FVector *)(iVar4 + 0x1d4));
            if (fVar5 <= *(float *)(iVar4 + 0x1550) * 0.6) {
              ExceptionList = local_10;
              return 1;
            }
            iVar2 = *(int *)(in_ECX + 0x3bc);
            if (*(float *)(iVar4 + 0x1dc) * (*(float *)(in_ECX + 0x534) - *(float *)(iVar2 + 0x1c4))
                + *(float *)(iVar4 + 0x1d8) *
                  (*(float *)(in_ECX + 0x530) - *(float *)(iVar2 + 0x1c0)) +
                  *(float *)(iVar4 + 0x1d4) *
                  (*(float *)(in_ECX + 0x52c) - *(float *)(iVar2 + 0x1bc)) <= 0.0) {
              ExceptionList = local_10;
              return 1;
            }
            local_44 = *(float *)(iVar4 + 0x1bc) - *(float *)(iVar2 + 0x1bc);
            local_40 = *(float *)(iVar4 + 0x1c0) - *(float *)(iVar2 + 0x1c0);
            local_3c = *(float *)(iVar4 + 0x1c4) - *(float *)(iVar2 + 0x1c4);
            local_60 = 4.3612747e-29;
            local_18 = local_3c;
            fVar5 = FVector::SizeSquared((FVector *)&local_44);
            if (fVar5 <= *(float *)(in_ECX + 0x53c) * 0.25) {
              ExceptionList = local_10;
              return 1;
            }
          }
        }
      }
      local_60 = 4.361283e-29;
      AController::eventMonitoredPawnAlert(in_ECX);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105d24e7 Catch@105d24e7

void Catch_105d24e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105d24fb Catch@105d24fb

void Catch_105d24fb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AController::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d2620 FUN_105d2620

void FUN_105d2620(float param_1)

{
  int iVar1;
  AActor *in_ECX;
  float10 extraout_ST0;
  
  if (0.0 < *(float *)(in_ECX + 0x100)) {
    param_1 = param_1 + *(float *)(in_ECX + 0x130);
    *(float *)(in_ECX + 0x130) = param_1;
    if (*(float *)(in_ECX + 0x100) < param_1 != (*(float *)(in_ECX + 0x100) == param_1)) {
      if (0.0 < *(float *)(in_ECX + 0x100)) {
        iVar1 = FUN_107a6660();
        *(float *)(in_ECX + 0x130) =
             *(float *)(in_ECX + 0x130) - (float)iVar1 * *(float *)(in_ECX + 0x100);
        if ((iVar1 != 0) && ((*(uint *)(in_ECX + 100) & 0x400) == 0)) {
          *(float *)(in_ECX + 0x100) = (float)extraout_ST0;
          AActor::eventTimer(in_ECX);
          return;
        }
      }
      AActor::eventTimer(in_ECX);
      return;
    }
  }
  return;
}


// ==== 105d2700 FUN_105d2700

void FUN_105d2700(void)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108203d0;
  local_10 = ExceptionList;
  local_8 = 0;
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddaf8 * 4);
  uVar3 = rdtsc();
  ExceptionList = &local_10;
  *piVar1 = *piVar1 - (int)uVar3;
  iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x70) + 0x44) + 0x78);
  if ((iVar2 != 3) && (iVar2 == 1)) {
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0x74) + 0x54) + 0x3c) == 0) {
      appFailAssert("Engine->Client->Viewports.Num()",".\\UnLevTic.cpp",0x9d5);
    }
    (**(code **)(**(int **)(in_ECX + 0x74) + 0xa0))
              (**(undefined4 **)((*(int **)(in_ECX + 0x74))[0x15] + 0x38),L"?closed",0,0);
  }
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddaf8 * 4);
  uVar3 = rdtsc();
  *piVar1 = *piVar1 + (int)uVar3 + -0xc;
  ExceptionList = local_10;
  return;
}


// ==== 105d27c2 Catch@105d27c2

void Catch_105d27c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105d27d6 Catch@105d27d6

void Catch_105d27d6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::TickNetClient");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d2830 FUN_105d2830

uint FUN_105d2830(APlayerController *param_1,AActor *param_2,float param_3,float param_4,
                 float param_5)

{
  APawn *pAVar1;
  float fVar2;
  undefined4 uVar3;
  APlayerController *pAVar4;
  AActor *pAVar5;
  uchar uVar6;
  APawn *pAVar7;
  APawn *pAVar8;
  uint uVar9;
  APawn *in_ECX;
  float fVar10;
  float local_c;
  float local_8;
  float local_4;
  
  if (((*(float *)(*(int *)(in_ECX + 0xe0) + 0x4bc) == *(float *)(in_ECX + 0x14dc)) &&
      (param_1 == *(APlayerController **)(in_ECX + 0x14e0))) &&
     (param_2 == *(AActor **)(in_ECX + 0x14e4))) {
    return (byte)in_ECX[0x14ee] & 1;
  }
  pAVar7 = in_ECX;
  if ((*(uint *)(in_ECX + 0x74) & 0x1000) == 0) {
    do {
      if (pAVar7 == (APawn *)param_2) goto LAB_105d2a2b;
      pAVar1 = pAVar7 + 0x3c;
      pAVar8 = in_ECX;
      pAVar7 = *(APawn **)pAVar1;
    } while (*(APawn **)pAVar1 != (APawn *)0x0);
    do {
      if (pAVar8 == (APawn *)param_1) goto LAB_105d2a2b;
      pAVar7 = pAVar8 + 0x3c;
      pAVar8 = *(APawn **)pAVar7;
    } while (*(APawn **)pAVar7 != (APawn *)0x0);
    if ((in_ECX != (APawn *)param_2) && (param_2 != *(AActor **)(in_ECX + 0xd4))) {
      if ((*(byte *)(*(int *)(in_ECX + 0xec) + 0x3d8) & 2) != 0) {
        local_c = *(float *)(in_ECX + 0x1bc) - param_3;
        local_8 = *(float *)(in_ECX + 0x1c0) - param_4;
        local_4 = *(float *)(in_ECX + 0x1c4) - param_5;
        fVar2 = *(float *)(*(int *)(in_ECX + 0xec) + 0x400);
        fVar10 = FVector::SizeSquared((FVector *)&local_c);
        if (fVar2 * fVar2 < fVar10) {
          uVar9 = APawn::CacheNetRelevancy(in_ECX,0,param_1,param_2);
          return uVar9;
        }
      }
      local_4 = *(float *)(in_ECX + 0x2f4);
      pAVar4 = (APlayerController *)(*(float *)(in_ECX + 0x1c0) + 0.0);
      pAVar5 = (AActor *)(*(float *)(in_ECX + 0x1c4) + local_4);
      uVar6 = UModel::FastLineCheck
                        (*(UModel **)(*(int *)(in_ECX + 0xe4) + 0xc0),
                         *(float *)(in_ECX + 0x1bc) + 0.0,pAVar4,pAVar5,param_3,param_4,param_5);
      if ((uVar6 == '\0') &&
         (uVar6 = UModel::FastLineCheck
                            (*(UModel **)(*(int *)(in_ECX + 0xe4) + 0xc0),
                             *(undefined4 *)(in_ECX + 0x1bc),*(undefined4 *)(in_ECX + 0x1c0),
                             *(undefined4 *)(in_ECX + 0x1c4),param_3,param_4,param_5), uVar6 == '\0'
         )) {
        uVar9 = APawn::CacheNetRelevancy(in_ECX,0,pAVar4,pAVar5);
        return uVar9;
      }
      uVar9 = APawn::CacheNetRelevancy(in_ECX,1,pAVar4,pAVar5);
      return uVar9;
    }
  }
LAB_105d2a2b:
  *(uint *)(in_ECX + 0x14ec) = *(uint *)(in_ECX + 0x14ec) | 0x10000;
  uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xe0) + 0x4bc);
  *(AActor **)(in_ECX + 0x14e4) = param_2;
  *(undefined4 *)(in_ECX + 0x14dc) = uVar3;
  *(APlayerController **)(in_ECX + 0x14e0) = param_1;
  return 1;
}


// ==== 105d2b00 FUN_105d2b00

undefined4 FUN_105d2b00(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  
  if ((UObject *)*param_1 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = UObject::GetIndex((UObject *)*param_1);
  }
  iVar3 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar2) * 4);
  if (iVar3 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(int *)(iVar1 + 4 + iVar3 * 0xc) == *param_1) {
        return *(undefined4 *)(iVar1 + 8 + iVar3 * 0xc);
      }
      iVar3 = *(int *)(iVar1 + iVar3 * 0xc);
    } while (iVar3 != -1);
  }
  return 0;
}


// ==== 105d2bd0 FUN_105d2bd0

UObject * FUN_105d2bd0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&AAirEmitter::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105d2c00 FUN_105d2c00

UObject * FUN_105d2c00(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ASkyZoneInfo::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105d2c30 FUN_105d2c30

void FUN_105d2c30(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_13c [2];
  undefined1 local_134 [256];
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_20;
  undefined4 *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108203e0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffeb8;
  local_8 = 0;
  if (param_2 < 2) {
    return;
  }
  local_13c[0] = param_1;
  local_13c[1] = param_1 + -4 + param_2 * 4;
  ExceptionList = &local_10;
  _memset(local_134,0,0xf8);
  local_18 = local_13c;
LAB_105d2c96:
  if (local_18 < local_13c) {
    ExceptionList = local_10;
    return;
  }
  puVar5 = (undefined4 *)*local_18;
  local_20 = puVar5;
  puVar6 = (undefined4 *)local_18[1];
LAB_105d2caf:
  local_1c = puVar6;
LAB_105d2cb2:
  iVar2 = ((int)puVar6 - (int)puVar5 >> 2) + 1;
  if (8 < iVar2) {
    uVar1 = puVar5[iVar2 / 2];
    puVar5[iVar2 / 2] = *puVar5;
    *puVar5 = uVar1;
    puVar3 = puVar6 + 1;
    local_34 = puVar5;
LAB_105d2d20:
    local_34 = local_34 + 1;
    if (local_34 <= puVar6) goto code_r0x105d2d2a;
    goto LAB_105d2d36;
  }
  while (puVar5 < puVar6) {
    local_2c = puVar5;
    puVar3 = puVar5;
    local_28 = puVar5;
    while( true ) {
      local_28 = local_28 + 1;
      if (puVar6 < local_28) break;
      if (*(int *)*puVar3 != *(int *)*local_28 && -1 < *(int *)*puVar3 - *(int *)*local_28) {
        local_2c = local_28;
        puVar3 = local_28;
      }
    }
    uVar1 = *puVar3;
    *puVar3 = *puVar6;
    *puVar6 = uVar1;
    puVar6 = puVar6 + -1;
    local_1c = puVar6;
  }
  goto LAB_105d2db2;
code_r0x105d2d2a:
  if (*(int *)*puVar5 == *(int *)*local_34 || *(int *)*puVar5 - *(int *)*local_34 < 0)
  goto LAB_105d2d20;
LAB_105d2d36:
  do {
    puVar4 = puVar3;
    puVar3 = puVar4 + -1;
    local_30 = puVar3;
    if (puVar3 <= puVar5) break;
  } while (-1 < *(int *)*puVar5 - *(int *)*puVar3);
  if (local_34 <= puVar3) {
    uVar1 = *local_34;
    *local_34 = *puVar3;
    *puVar3 = uVar1;
    goto LAB_105d2d20;
  }
  uVar1 = *puVar5;
  *puVar5 = *puVar3;
  *puVar3 = uVar1;
  if ((int)((int)puVar3 + (-4 - (int)puVar5) & 0xfffffffcU) <
      (int)((int)puVar6 - (int)local_34 & 0xfffffffcU)) goto LAB_105d2d91;
  if (puVar5 + 1 < puVar3) {
    *local_18 = (int)puVar5;
    local_18[1] = (int)(puVar4 + -2);
    local_18 = local_18 + 2;
  }
  if (puVar6 <= local_34) goto LAB_105d2db2;
  local_20 = local_34;
  puVar5 = local_34;
  goto LAB_105d2cb2;
LAB_105d2d91:
  if (local_34 < puVar6) {
    *local_18 = (int)local_34;
    local_18[1] = (int)puVar6;
    local_18 = local_18 + 2;
  }
  if (puVar3 <= puVar5 + 1) goto LAB_105d2db2;
  puVar6 = puVar4 + -2;
  goto LAB_105d2caf;
LAB_105d2db2:
  local_18 = local_18 + -2;
  goto LAB_105d2c96;
}


// ==== 105d2de0 Catch@105d2de0

void Catch_105d2de0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105d2df4 Catch@105d2df4

void Catch_105d2df4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Sort");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d2e90 FUN_105d2e90

void FUN_105d2e90(float param_1)

{
  float fVar1;
  AActor *in_ECX;
  float unaff_retaddr;
  
  AActor::eventTick(in_ECX,param_1);
  (**(code **)(*(int *)in_ECX + 0x18))(param_1);
  AActor::UpdateTimers(in_ECX,unaff_retaddr);
  if (*(float *)(in_ECX + 0xe8) != 0.0) {
    fVar1 = *(float *)(in_ECX + 0xe8) - unaff_retaddr;
    *(float *)(in_ECX + 0xe8) = fVar1;
    if (!NAN(fVar1) && fVar1 < 0.0001 != (fVar1 == 0.0001)) {
      (**(code **)(**(int **)(in_ECX + 0xe4) + 0xac))();
      return;
    }
  }
  if (((((byte)in_ECX[100] & 0x80) == 0) && (in_ECX[0x34] != (AActor)0x0)) &&
     (in_ECX[0xc2] != (AActor)0x3)) {
    (**(code **)(*(int *)in_ECX + 0x1cc))(unaff_retaddr);
  }
  return;
}


// ==== 105d2f70 FUN_105d2f70

void FUN_105d2f70(float param_1)

{
  undefined1 *puVar1;
  int iVar2;
  UObject *this;
  USubSkeletalMeshInstance *this_00;
  USkeletalMeshInstance *pUVar3;
  APawn *in_ECX;
  float fVar4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined1 *local_70;
  void *local_6c;
  undefined1 *puStack_68;
  undefined4 local_64;
  float local_58;
  undefined1 *local_54;
  float local_50;
  float local_4c;
  undefined1 *local_48;
  float local_44;
  int local_40;
  int local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  undefined1 *local_c;
  float local_8;
  
  local_64 = 0xffffffff;
  puStack_68 = &LAB_108203f0;
  local_6c = ExceptionList;
  local_70 = &stack0xffffff54;
  ExceptionList = &local_6c;
  puVar1 = &stack0xffffff54;
  if ((((*(uint *)(in_ECX + 0x2f8) & 0x8000) == 0) &&
      (ExceptionList = &local_6c, puVar1 = &stack0xffffff54, ((byte)in_ECX[0x1734] & 1) != 0)) &&
     (ExceptionList = &local_6c, puVar1 = &stack0xffffff54, *(int *)(in_ECX + 0x104) != 0)) {
    ExceptionList = &local_6c;
    APawn::UpdateMovementAnimation(in_ECX,param_1);
    puVar1 = local_70;
  }
  local_70 = puVar1;
  APawn::NActionProcess(in_ECX,param_1);
  APawn::SpineRotation(in_ECX,param_1);
  APawn::UpdateWaistRotation(in_ECX,param_1);
  local_64 = 0;
  if (((*(int *)(in_ECX + 0x14d8) != 0) && (*(int *)GL2KeepMinFrameRate_exref == 0)) &&
     (iVar2 = APawn::IsEnableFaceRotation(in_ECX), iVar2 != 0)) {
    this = *(UObject **)(in_ECX + 0x63c);
    if (this == (UObject *)0x0) {
      this = (UObject *)(**(code **)(**(int **)(in_ECX + 0x14d8) + 0x35c))();
    }
    if ((((*(byte *)(*(int *)(in_ECX + 0x14d8) + 0x41c) & 1) == 0) && (this != (UObject *)0x0)) &&
       ((iVar2 = UObject::IsA(this,&APawn::PrivateStaticClass), iVar2 != 0 &&
        (this != (UObject *)in_ECX)))) {
      local_58 = *(float *)(this + 0x1bc) - *(float *)(in_ECX + 0x1bc);
      local_54 = (undefined1 *)(*(float *)(this + 0x1c0) - *(float *)(in_ECX + 0x1c0));
      local_50 = *(float *)(this + 0x1c4) - *(float *)(in_ECX + 0x1c4);
      local_18 = local_58;
      local_c = local_54;
      local_8 = local_50;
      fVar4 = FVector::Size((FVector *)&local_58);
      if (fVar4 < 2048.0) {
        local_24 = *(float *)(in_ECX + 0x1bc);
        local_20 = *(float *)(in_ECX + 0x1c0);
        local_1c = *(float *)(in_ECX + 0x1c4);
        local_30 = *(float *)(this + 0x1bc);
        local_2c = *(float *)(this + 0x1c0);
        local_28 = *(float *)(this + 0x1c4);
        if ((*(UObject **)(in_ECX + 0x134) != (UObject *)0x0) &&
           (iVar2 = UObject::IsA(*(UObject **)(in_ECX + 0x134),
                                 &USkeletalMeshInstance::PrivateStaticClass), iVar2 != 0)) {
          this_00 = (USubSkeletalMeshInstance *)thunk_FUN_104b4240();
          local_c = &stack0xffffff50;
          FName::FName((FName *)&stack0xffffff50,(ushort *)L"e_bone",1);
          USkeletalMeshInstance::GetAliasesTagBoneName((USkeletalMeshInstance *)this_00,&local_8);
          iVar2 = USubSkeletalMeshInstance::MatchRefBone(this_00,local_8);
          if (-1 < iVar2) {
            USubSkeletalMeshInstance::GetBoneCoords(this_00,(ulong)&local_a0);
            local_24 = local_a0;
            local_20 = local_9c;
            local_1c = local_98;
          }
        }
        if ((*(int *)(this + 0x134) != 0) &&
           (iVar2 = UObject::IsA(*(UObject **)(this + 0x134),
                                 &USkeletalMeshInstance::PrivateStaticClass), iVar2 != 0)) {
          pUVar3 = (USkeletalMeshInstance *)thunk_FUN_104b4240();
          local_c = &stack0xffffff50;
          FName::FName((FName *)&stack0xffffff50,(ushort *)L"e_bone",1);
          USkeletalMeshInstance::GetAliasesTagBoneName(pUVar3,&local_8);
          iVar2 = USubSkeletalMeshInstance::MatchRefBone((USubSkeletalMeshInstance *)pUVar3,local_8)
          ;
          if ((-1 < iVar2) && ((*(int *)(pUVar3 + 200) != 0 && (iVar2 < *(int *)(pUVar3 + 200))))) {
            FCoords::operator*((FCoords *)(iVar2 * 0x30 + *(int *)(pUVar3 + 0xc4)),
                               (FCoords *)&local_a0);
            local_30 = local_a0;
            local_2c = local_9c;
            local_28 = local_98;
          }
        }
        local_4c = local_30 - local_24;
        local_48 = (undefined1 *)(local_2c - local_20);
        local_44 = local_28 - local_1c;
        local_18 = local_44;
        local_c = local_48;
        local_8 = local_4c;
        FVector::Rotation((FVector *)&local_4c);
        for (local_14 = local_3c - *(int *)(in_ECX + 0x1cc); local_14 < -0x7fff;
            local_14 = local_14 + 0x10000) {
        }
        for (; 0x8000 < local_14; local_14 = local_14 + -0x10000) {
        }
        if (local_14 < -0x4000) {
          local_14 = -0x4000;
        }
        else if (0x4000 < local_14) {
          local_14 = 0x4000;
        }
        local_3c = *(int *)(in_ECX + 0x1cc) + local_14;
        for (local_40 = local_40 - *(int *)(in_ECX + 0x1780); local_40 < -0x7fff;
            local_40 = local_40 + 0x10000) {
        }
        for (; 0x8000 < local_40; local_40 = local_40 + -0x10000) {
        }
        if (local_40 < -5000) {
          local_40 = -5000;
          local_10 = local_40;
        }
        else {
          local_10 = local_40;
          if (5000 < local_40) {
            local_40 = 5000;
            local_10 = local_40;
          }
        }
      }
    }
    APawn::FaceRotation();
  }
  local_64 = 0xffffffff;
  if ((*(int *)GL2KeepMinFrameRate_exref != 0) && (*(int *)(in_ECX + 0x104) != 0)) {
    pUVar3 = (USkeletalMeshInstance *)(**(code **)(**(int **)(in_ECX + 0x104) + 0x98))();
    USkeletalMeshInstance::ClearBoneDirection(pUVar3);
    pUVar3 = (USkeletalMeshInstance *)(**(code **)(**(int **)(in_ECX + 0x104) + 0x98))();
    USkeletalMeshInstance::ClearBoneDirection(pUVar3);
  }
  ExceptionList = local_6c;
  return;
}


// ==== 105d33ca Catch@105d33ca

void Catch_105d33ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x2c) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x2c,&DAT_10914c48);
}


// ==== 105d33de Catch@105d33de

void Catch_105d33de(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FaceRotation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d3520 FUN_105d3520

undefined4 FUN_105d3520(float param_1,int param_2)

{
  AActor AVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uVar7;
  AActor *in_ECX;
  undefined2 in_FPUControlWord;
  float10 fVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820400;
  local_10 = ExceptionList;
  local_8 = 0;
  uVar2 = *(uint *)(in_ECX + 100);
  if (((uVar2 & 0x8000) != 0) &&
     ((((in_ECX[0x34] == (AActor)0x0 || (in_ECX[0x34] == (AActor)0x5)) &&
       (5.0 < (float)*(double *)(*(int *)(in_ECX + 0xe4) + 0x104) - *(float *)(in_ECX + 0x108))) &&
      (*(char *)(*(int *)(in_ECX + 0xe0) + 0x5d4) == '\0')))) {
    *(uint *)(in_ECX + 100) =
         (*(int *)(*(int *)(in_ECX + 0xe4) + 0x134) << 8 ^ uVar2) & 0x100 ^ uVar2;
    return 1;
  }
  ExceptionList = &local_10;
  iVar4 = (**(code **)(*(int *)in_ECX + 0x180))();
  if (iVar4 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  *(uint *)(in_ECX + 100) =
       *(uint *)(in_ECX + 100) ^
       (*(int *)(*(int *)(in_ECX + 0xe4) + 0x134) << 8 ^ *(uint *)(in_ECX + 100)) & 0x100;
  (**(code **)(*(int *)in_ECX + 0xf0))();
  (**(code **)(*(int *)in_ECX + 0x174))(param_1);
  if ((param_2 == 1) && (iVar4 = (**(code **)(*(int *)in_ECX + 400))(), iVar4 == 0)) {
    ExceptionList = local_10;
    return 1;
  }
  if (in_ECX[0xc1] == (AActor)0x3) {
    piVar5 = (int *)(**(code **)(*(int *)in_ECX + 0x31c))();
    if (((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 0x350))(), iVar4 != 0)) ||
       (in_ECX[0x34] == (AActor)0xd)) {
      pcVar6 = *(code **)(*(int *)in_ECX + 0x184);
      goto LAB_105d3787;
    }
    AActor::eventTick(in_ECX,param_1);
    (**(code **)(*(int *)in_ECX + 0x18))(param_1);
    AActor::UpdateTimers(in_ECX,param_1);
    if (((byte)in_ECX[100] & 0x80) != 0) {
      ExceptionList = local_10;
      return 1;
    }
    if (((in_ECX[0x34] != (AActor)0x0) && (piVar5 != (int *)0x0)) &&
       (((float)piVar5[0x15c] * 0.5 <
         *(float *)(*(int *)(in_ECX + 0xe0) + 0x4bc) - (float)piVar5[0x1b9] &&
        ((float)piVar5[0x1b9] != 0.0)))) {
      iVar4 = FVector::IsZero((FVector *)(in_ECX + 0x1d4));
      if (iVar4 == 0) {
        (**(code **)(*(int *)in_ECX + 0x1cc))
                  (*(float *)(*(int *)(in_ECX + 0xe0) + 0x4bc) - (float)piVar5[0x1b9]);
      }
      piVar5[0x1b9] = *(int *)(*(int *)(in_ECX + 0xe0) + 0x4bc);
    }
  }
  else {
    if ((byte)in_ECX[0xc2] < 3) {
      if (in_ECX[0xc2] == (AActor)0x2) {
        pcVar6 = *(code **)(*(int *)in_ECX + 0x188);
      }
      else {
        if (((byte)in_ECX[100] & 0x80) != 0) {
          ExceptionList = local_10;
          return 1;
        }
        if ((in_ECX[0x34] != (AActor)0x2) && (in_ECX[0x34] != (AActor)0x5)) goto LAB_105d3792;
        pcVar6 = *(code **)(*(int *)in_ECX + 0x1cc);
      }
    }
    else {
      pcVar6 = *(code **)(*(int *)in_ECX + 0x184);
    }
LAB_105d3787:
    (*pcVar6)(param_1);
  }
LAB_105d3792:
  if (((byte)in_ECX[100] & 0x80) != 0) {
    ExceptionList = local_10;
    return 1;
  }
  (**(code **)(*(int *)in_ECX + 0x18c))(param_1);
  AVar1 = in_ECX[0x9c];
  if (AVar1 == (AActor)0x2) {
    param_1 = *(float *)(in_ECX + 0xa4) + param_1;
    *(float *)(in_ECX + 0xa4) = param_1;
    if (param_1 < *(float *)(in_ECX + 0xa0)) {
      fVar3 = (param_1 * 255.0) / *(float *)(in_ECX + 0xa0);
      fVar8 = (float10)thunk_FUN_103704b0(fVar3,0,0x437f0000);
      param_1._0_2_ = SUB42(fVar3,0);
      param_1 = (float)CONCAT22(in_FPUControlWord,param_1._0_2_);
      param_2._0_1_ = (undefined1)(int)ROUND(fVar8);
      param_1 = (float)CONCAT31(param_1._1_3_,(undefined1)param_2);
LAB_105d3c62:
      (**(code **)(*(int *)in_ECX + 0x100))(param_1);
      goto LAB_105d3c94;
    }
LAB_105d3c77:
    (**(code **)(*(int *)in_ECX + 0xfc))();
    in_ECX[0x9c] = (AActor)0x1;
LAB_105d3c8c:
    *(undefined4 *)(in_ECX + 0xa4) = 0;
  }
  else {
    if (AVar1 == (AActor)0x4) {
      param_1 = *(float *)(in_ECX + 0xa4) + param_1;
      *(float *)(in_ECX + 0xa4) = param_1;
      if (*(float *)(in_ECX + 0xa0) <= param_1) {
        (**(code **)(*(int *)in_ECX + 0xfc))();
        in_ECX[0x9c] = (AActor)0x3;
        goto LAB_105d3c8c;
      }
      fVar3 = 255.0 - (255.0 / *(float *)(in_ECX + 0xa0)) * param_1;
      fVar8 = (float10)thunk_FUN_103704b0(fVar3,0,0x437f0000);
      param_1._0_2_ = SUB42(fVar3,0);
      param_1 = (float)CONCAT22(in_FPUControlWord,param_1._0_2_);
      param_2._0_1_ = (undefined1)(int)ROUND(fVar8);
    }
    else if (AVar1 == (AActor)0x5) {
      param_1 = *(float *)(in_ECX + 0xa4) + param_1;
      *(float *)(in_ECX + 0xa4) = param_1;
      if (*(float *)(in_ECX + 0xa0) <= param_1) {
        (**(code **)(*(int *)in_ECX + 0xfc))();
        in_ECX[0x9c] = (AActor)0x0;
        goto LAB_105d3c8c;
      }
      fVar3 = (param_1 * 255.0) / *(float *)(in_ECX + 0xa0);
      fVar8 = (float10)thunk_FUN_103704b0(fVar3,0,0x437f0000);
      param_1._0_2_ = SUB42(fVar3,0);
      param_1 = (float)CONCAT22(in_FPUControlWord,param_1._0_2_);
      param_2._0_1_ = (undefined1)(int)ROUND(fVar8);
    }
    else if (AVar1 == (AActor)0xb) {
      param_1 = *(float *)(in_ECX + 0xa4) + param_1;
      *(float *)(in_ECX + 0xa4) = param_1;
      if (*(float *)(in_ECX + 0xa0) <= param_1) {
        (**(code **)(*(int *)in_ECX + 0xfc))();
        in_ECX[0x9c] = (AActor)0x0;
        *(undefined4 *)(in_ECX + 0xa4) = 0;
        *(uint *)(in_ECX + 100) = *(uint *)(in_ECX + 100) | 4;
        goto LAB_105d3c94;
      }
      fVar3 = 255.0 - (255.0 / *(float *)(in_ECX + 0xa0)) * param_1;
      fVar8 = (float10)thunk_FUN_103704b0(fVar3,0,0x437f0000);
      param_1._0_2_ = SUB42(fVar3,0);
      param_1 = (float)CONCAT22(in_FPUControlWord,param_1._0_2_);
      param_2._0_1_ = (undefined1)(int)ROUND(fVar8);
    }
    else if (in_ECX[0xa8] == (AActor)0x3) {
      param_1 = *(float *)(in_ECX + 0xb0) + param_1;
      *(float *)(in_ECX + 0xb0) = param_1;
      if (*(float *)(in_ECX + 0xac) <= param_1) {
LAB_105d3b24:
        (**(code **)(*(int *)in_ECX + 0xfc))();
        *(undefined4 *)(in_ECX + 0xb0) = 0;
        in_ECX[0xa8] = (AActor)0x1;
        goto LAB_105d3c94;
      }
      fVar3 = (param_1 * 255.0) / *(float *)(in_ECX + 0xac);
      fVar8 = (float10)thunk_FUN_103704b0(fVar3,0,0x437f0000);
      param_1._0_2_ = SUB42(fVar3,0);
      param_1 = (float)CONCAT22(in_FPUControlWord,param_1._0_2_);
      param_2._0_1_ = (undefined1)(int)ROUND(fVar8);
    }
    else if (in_ECX[0xa8] == (AActor)0x2) {
      param_1 = *(float *)(in_ECX + 0xb0) + param_1;
      *(float *)(in_ECX + 0xb0) = param_1;
      if (*(float *)(in_ECX + 0xac) <= param_1) goto LAB_105d3b24;
      fVar3 = (param_1 * 255.0) / *(float *)(in_ECX + 0xac);
      fVar8 = (float10)thunk_FUN_103704b0(fVar3,0,0x437f0000);
      param_1._0_2_ = SUB42(fVar3,0);
      param_1 = (float)CONCAT22(in_FPUControlWord,param_1._0_2_);
      param_2._0_1_ = (undefined1)(int)ROUND(fVar8);
    }
    else {
      if (AVar1 != (AActor)0x7) {
        if (AVar1 != (AActor)0x8) goto LAB_105d3c94;
        param_1 = *(float *)(in_ECX + 0xa4) + param_1;
        *(float *)(in_ECX + 0xa4) = param_1;
        if (param_1 < *(float *)(in_ECX + 0xa0)) {
          fVar3 = (param_1 * 255.0) / *(float *)(in_ECX + 0xa0);
          fVar8 = (float10)thunk_FUN_103704b0(fVar3,0,0x437f0000);
          param_1._0_2_ = SUB42(fVar3,0);
          param_1 = (float)CONCAT22(in_FPUControlWord,param_1._0_2_);
          param_2._0_1_ = (undefined1)(int)ROUND(fVar8);
          param_1 = (float)CONCAT31(param_1._1_3_,(undefined1)param_2);
          goto LAB_105d3c62;
        }
        goto LAB_105d3c77;
      }
      param_1 = *(float *)(in_ECX + 0xa4) + param_1;
      *(float *)(in_ECX + 0xa4) = param_1;
      if (*(float *)(in_ECX + 0xa0) <= param_1) {
        (**(code **)(*(int *)in_ECX + 0xfc))();
        *(undefined4 *)(in_ECX + 0xa4) = 0;
        *(uint *)(in_ECX + 100) = *(uint *)(in_ECX + 100) | 0x20;
        goto LAB_105d3c94;
      }
      fVar3 = 255.0 - (255.0 / *(float *)(in_ECX + 0xa0)) * param_1;
      fVar8 = (float10)thunk_FUN_103704b0(fVar3,0,0x437f0000);
      param_1._0_2_ = SUB42(fVar3,0);
      param_1 = (float)CONCAT22(in_FPUControlWord,param_1._0_2_);
      param_2._0_1_ = (undefined1)(int)ROUND(fVar8);
    }
    param_1 = (float)CONCAT31(param_1._1_3_,(undefined1)param_2);
    (**(code **)(*(int *)in_ECX + 0x100))(param_1);
  }
LAB_105d3c94:
  iVar4 = (**(code **)(*(int *)in_ECX + 0x78))();
  if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x3d0) & 2) != 0)) {
    uVar7 = (**(code **)(*(int *)in_ECX + 0x78))
                      ((float)*(double *)
                               (*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c) + 0x134));
    thunk_FUN_105d0c70(uVar7);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105d3ce5 Catch@105d3ce5

void Catch_105d3ce5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105d3cf9 Catch@105d3cf9

void Catch_105d3cf9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d3f20 FUN_105d3f20

int FUN_105d3f20(float param_1,ELevelTick param_2)

{
  UObject *pUVar1;
  undefined4 *puVar2;
  FNPawnLight *this;
  int *piVar3;
  int iVar4;
  int iVar5;
  FStateFrame *pFVar6;
  undefined4 uVar7;
  int iVar8;
  AActor *in_ECX;
  float fVar9;
  
  iVar4 = AActor::Tick(in_ECX,param_1,param_2);
  if (*(int **)(in_ECX + 0x3f0) != (int *)0x0) {
    iVar5 = (**(code **)(**(int **)(in_ECX + 0x3f0) + 0xb4))();
    if (*(int *)(iVar5 + 0x138) != 0) {
      *(float *)(*(int *)(iVar5 + 0x138) + 0x728) = param_1;
    }
  }
  pUVar1 = *(UObject **)(in_ECX + 0x3cc);
  if ((pUVar1 != (UObject *)0x0) &&
     (iVar5 = UObject::IsA(pUVar1,&USkeletalMesh::PrivateStaticClass),
     *(int *)((-(uint)(iVar5 != 0) & (uint)pUVar1) + 0x14c) != 0)) {
    iVar5 = (**(code **)(**(int **)(in_ECX + 0x3cc) + 0x9c))();
    if (*(int *)(iVar5 + 0x134) != 0) {
      *(float *)(*(int *)(iVar5 + 0x134) + 0x728) = param_1;
    }
  }
  pUVar1 = *(UObject **)(in_ECX + 0x3d0);
  if ((pUVar1 != (UObject *)0x0) &&
     (iVar5 = UObject::IsA(pUVar1,&USkeletalMesh::PrivateStaticClass),
     *(int *)((-(uint)(iVar5 != 0) & (uint)pUVar1) + 0x14c) != 0)) {
    iVar5 = (**(code **)(**(int **)(in_ECX + 0x3d0) + 0x9c))();
    if (*(int *)(iVar5 + 0x134) != 0) {
      *(float *)(*(int *)(iVar5 + 0x134) + 0x728) = param_1;
    }
  }
  if ((*(int *)GIsL2NetLogin_exref != 0) && (((byte)in_ECX[0x88] & 1) != 0)) {
    (**(code **)(*(int *)in_ECX + 0x330))(param_1);
  }
  if ((*(int *)GL2UseHitWateEffect_exref != 0) && (*(int *)GIsEditor_exref == 0)) {
    APawn::UpdateWaterHitEffectMovement((APawn *)in_ECX,param_1);
  }
  if (((*(int *)GIsL2NetLogin_exref != 0) && (*(int *)(in_ECX + 0x14d8) != 0)) &&
     (*(float *)(in_ECX + 0x6d0) != 0.0)) {
    fVar9 = *(float *)(in_ECX + 0x6d0) - param_1;
    *(float *)(in_ECX + 0x6d0) = fVar9;
    if (fVar9 < 0.0 != (fVar9 == 0.0)) {
      *(undefined4 *)(in_ECX + 0x6d4) = 0;
      *(undefined4 *)(in_ECX + 0x6d0) = 0;
    }
  }
  fVar9 = APawn::GetCurSpeed((APawn *)in_ECX,0);
  *(float *)(in_ECX + 0x1550) = fVar9 * *(float *)(in_ECX + 0x6b4) + *(float *)(in_ECX + 0x6d4);
  fVar9 = APawn::GetCurSpeed((APawn *)in_ECX,1);
  *(float *)(in_ECX + 0x1554) = fVar9 * *(float *)(in_ECX + 0x6b4) + *(float *)(in_ECX + 0x6d4);
  fVar9 = APawn::GetCurSpeed((APawn *)in_ECX,2);
  *(float *)(in_ECX + 0x1558) = fVar9 * *(float *)(in_ECX + 0x6b4) + *(float *)(in_ECX + 0x6d4);
  if (((((byte)in_ECX[0x6dc] & 2) == 0) || (*(UObject **)(in_ECX + 0x14d8) == (UObject *)0x0)) ||
     (pFVar6 = UObject::GetStateFrame(*(UObject **)(in_ECX + 0x14d8)), *(int *)(pFVar6 + 0x28) != 0)
     ) {
    if (((*(int *)GIsL2NetLogin_exref != 0) && (((byte)in_ECX[0x6dc] & 1) != 0)) &&
       ((*(UObject **)(in_ECX + 0x14d8) != (UObject *)0x0 &&
        ((pFVar6 = UObject::GetStateFrame(*(UObject **)(in_ECX + 0x14d8)),
         *(int *)(pFVar6 + 0x28) == 0 && (*(int *)(in_ECX + 0x62c) == 0)))))) {
      iVar8 = *(int *)(in_ECX + 0x1cc);
      iVar5 = *(int *)(in_ECX + 0x6d8);
      *(int *)(in_ECX + 0x330) = iVar8;
      while (iVar5 < -0x7fff) {
        *(int *)(in_ECX + 0x6d8) = *(int *)(in_ECX + 0x6d8) + 0x10000;
        iVar5 = *(int *)(in_ECX + 0x6d8);
      }
      iVar5 = *(int *)(in_ECX + 0x6d8);
      while (0x8000 < iVar5) {
        *(int *)(in_ECX + 0x6d8) = *(int *)(in_ECX + 0x6d8) + -0x10000;
        iVar5 = *(int *)(in_ECX + 0x6d8);
      }
      while (iVar8 < -0x7fff) {
        *(int *)(in_ECX + 0x1cc) = *(int *)(in_ECX + 0x1cc) + 0x10000;
        iVar8 = *(int *)(in_ECX + 0x1cc);
      }
      iVar5 = *(int *)(in_ECX + 0x1cc);
      while (0x8000 < iVar5) {
        *(int *)(in_ECX + 0x1cc) = *(int *)(in_ECX + 0x1cc) + -0x10000;
        iVar5 = *(int *)(in_ECX + 0x1cc);
      }
      iVar5 = *(int *)(in_ECX + 0x6d8);
      iVar8 = *(int *)(in_ECX + 0x1cc);
      if (((iVar5 < iVar8) &&
          ((float)iVar8 < (float)*(int *)(in_ECX + 0x314) * param_1 + (float)iVar5)) ||
         (((float)iVar5 - param_1 * (float)*(int *)(in_ECX + 0x314) < (float)iVar8 &&
          (iVar8 < iVar5)))) {
        *(uint *)(in_ECX + 0x6dc) = *(uint *)(in_ECX + 0x6dc) & 0xfffffffe;
        *(int *)(in_ECX + 0x330) = iVar5;
        *(undefined4 *)(in_ECX + 0x31c) = 0;
      }
      else {
        uVar7 = FUN_107a6660();
        *(undefined4 *)(in_ECX + 0x330) = uVar7;
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x32c) = *(undefined4 *)(in_ECX + 0x1c8);
    *(undefined4 *)(in_ECX + 0x330) = *(undefined4 *)(in_ECX + 0x1cc);
    *(undefined4 *)(in_ECX + 0x334) = *(undefined4 *)(in_ECX + 0x1d0);
    uVar7 = FUN_107a6660();
    *(undefined4 *)(in_ECX + 0x330) = uVar7;
    iVar5 = UObject::IsA(*(UObject **)(in_ECX + 0x14d8),
                         &ALineagePlayerController::PrivateStaticClass);
    if (iVar5 != 0) {
      *(float *)(*(int *)(in_ECX + 0x14d8) + 0x98c) =
           (float)*(int *)(in_ECX + 0x314) * param_1 * (float)*(int *)(in_ECX + 0x6e0) +
           *(float *)(*(int *)(in_ECX + 0x14d8) + 0x98c);
    }
  }
  iVar5 = *(int *)(in_ECX + 0x65c) + -1;
  if (-1 < iVar5) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x658) + iVar5 * 4);
      if ((puVar2 != (undefined4 *)0x0) && (iVar8 = (**(code **)*puVar2)(), iVar8 == 0)) {
        thunk_FUN_10384d70(iVar5,1);
        (**(code **)(**(int **)GMalloc_exref + 8))(puVar2);
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = *(int *)(in_ECX + 0x1654) + -1;
  if (-1 < iVar5) {
    do {
      this = *(FNPawnLight **)(*(int *)(in_ECX + 0x1650) + iVar5 * 4);
      if ((this != (FNPawnLight *)0x0) && (iVar8 = FNPawnLight::Update(this,param_1), iVar8 == 0)) {
        thunk_FUN_10384f90(iVar5,1);
        (*(code *)**(undefined4 **)this)(1);
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  APawn::UpdateAbnormalState((APawn *)in_ECX,param_1);
  if (*(int *)GIsL2Projector_exref == 0) {
    *(uint *)(in_ECX + 0x5c) = *(uint *)(in_ECX + 0x5c) & 0xfffffffd;
  }
  else if (*(int *)GL2KeepMinFrameRate_exref == 0) {
    if ((byte)in_ECX[0x16c4] < 2) {
      *(uint *)(in_ECX + 0x5c) = *(uint *)(in_ECX + 0x5c) | 2;
    }
    else {
      *(uint *)(in_ECX + 0x5c) = *(uint *)(in_ECX + 0x5c) & 0xfffffffd;
    }
  }
  else {
    *(uint *)(in_ECX + 0x5c) = *(uint *)(in_ECX + 0x5c) & 0xfffffffd;
  }
  if (((*(uint *)(in_ECX + 0x5c) & 2) == 0) || ((char)*(uint *)(in_ECX + 0x5c) < '\0')) {
    piVar3 = *(int **)(in_ECX + 0x1648);
    if ((piVar3 != (int *)0x0) &&
       (((AActor *)piVar3[0x153] != (AActor *)0x0 && ((AActor *)piVar3[0x153] == in_ECX)))) {
      (**(code **)(*piVar3 + 0x324))(1);
    }
  }
  else {
    piVar3 = *(int **)(in_ECX + 0x1648);
    if (((piVar3 != (int *)0x0) && ((AActor *)piVar3[0x153] != (AActor *)0x0)) &&
       ((AActor *)piVar3[0x153] == in_ECX)) {
      (**(code **)(*piVar3 + 0x88))(param_1,param_2);
    }
  }
  fVar9 = *(float *)(in_ECX + 0x1800);
  *(float *)(in_ECX + 0x1800) = param_1 + fVar9;
  if (0.2 < param_1 + fVar9) {
    *(undefined4 *)(in_ECX + 0x1800) = 0;
    *(uint *)(in_ECX + 0x17fc) = *(uint *)(in_ECX + 0x17fc) ^ 2;
  }
  if (*(float *)(in_ECX + 0x18cc) <= 0.0) {
    *(undefined4 *)(in_ECX + 0x18cc) = 0;
    return iVar4;
  }
  *(float *)(in_ECX + 0x18cc) = *(float *)(in_ECX + 0x18cc) - param_1;
  return iVar4;
}


// ==== 105d4650 FUN_105d4650

int FUN_105d4650(float param_1,ELevelTick param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FRotator *pFVar4;
  UClass *pUVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  AActor *in_ECX;
  float10 fVar9;
  float10 extraout_ST0;
  float10 fVar10;
  float10 extraout_ST0_00;
  int unaff_retaddr;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_1c;
  int iStack_18;
  FRotator aFStack_14 [8];
  undefined1 auStack_c [12];
  
  iVar2 = AActor::Tick(in_ECX,param_1,param_2);
  if (*(int **)(in_ECX + 0x2c8) == (int *)0x0) {
    return iVar2;
  }
  *(undefined2 *)(in_ECX + 0x3be) = 0;
  *(undefined2 *)(in_ECX + 0x3c2) = 0;
  *(undefined2 *)(in_ECX + 0x3c6) = 0;
  *(undefined2 *)(in_ECX + 0x1ca) = 0;
  *(undefined2 *)(in_ECX + 0x1ce) = 0;
  *(undefined2 *)(in_ECX + 0x1d2) = 0;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x2c8) + 0x338))();
  if (iVar3 != 0) {
    iVar3 = FRotator::operator==((FRotator *)(in_ECX + 0x1c8),(FRotator *)(in_ECX + 0x3bc));
    if (iVar3 != 0) {
LAB_105d46f6:
      (**(code **)(**(int **)(in_ECX + 0xe4) + 0xac))();
      *(undefined4 *)(in_ECX + 0x2c8) = 0;
      if ((*(int *)(in_ECX + 0x3d4) != 0) && (USound::Audio != (UAudioSubsystem *)0x0)) {
        uStack_58 = *(undefined4 *)(in_ECX + 0x1bc);
        uStack_54 = *(undefined4 *)(in_ECX + 0x1c0);
        uStack_50 = *(undefined4 *)(in_ECX + 0x1c4);
        uStack_60 = 0;
        iStack_5c = *(int *)(in_ECX + 0x3d4);
        (**(code **)(*(int *)USound::Audio + 0x80))();
      }
      if (((byte)in_ECX[0x3e0] & 1) != 0) {
        uStack_50 = 0x105d4797;
        pUVar5 = UObject::StaticLoadClass
                           (&AActor::PrivateStaticClass,(UObject *)0x0,
                            (ushort *)L"LineageEffect.e_u056_b",(ushort *)0x0,1,(UPackageMap *)0x0);
        iVar2 = **(int **)(in_ECX + 0xe4);
        puVar6 = (undefined4 *)FRotator::FRotator(aFStack_14,0,0,0);
        uStack_54 = *puVar6;
        uStack_50 = puVar6[1];
        iStack_5c = *(int *)(in_ECX + 1000);
        uStack_60 = *(undefined4 *)(in_ECX + 0x3e4);
        uStack_64 = *(undefined4 *)(in_ECX + 0x3ec);
        uStack_58 = uStack_64;
        FName::FName((FName *)&uStack_64,0);
        iVar2 = (**(code **)(iVar2 + 0xc0))(pUVar5);
        if (iVar2 != 0) {
          iVar3 = 0;
          *(int *)(in_ECX + 0x3dc) = iVar2;
          if (0 < *(int *)(iVar2 + 0x3c0)) {
            do {
              iVar1 = *(int *)(iVar2 + 0x3bc);
              if (*(int *)(iVar1 + iVar3 * 4) != 0) {
                puVar6 = (undefined4 *)
                         FRange::FRange((FRange *)&stack0xffffffe0,*(float *)(in_ECX + 0x2f0),
                                        *(float *)(in_ECX + 0x2f0));
                iVar1 = *(int *)(iVar1 + iVar3 * 4);
                *(undefined4 *)(iVar1 + 400) = *puVar6;
                *(undefined4 *)(iVar1 + 0x194) = puVar6[1];
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(iVar2 + 0x3c0));
          }
        }
      }
      return unaff_retaddr;
    }
    pFVar4 = (FRotator *)FRotator::FRotator((FRotator *)&iStack_18,0,0,0);
    iVar3 = FRotator::operator==((FRotator *)(in_ECX + 0x3c8),pFVar4);
    if (iVar3 != 0) goto LAB_105d46f6;
  }
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x2c8) + 0x338))();
  if (iVar3 == 0) {
    FRotator::operator*((FRotator *)(in_ECX + 0x3c8),(float)auStack_c);
    FRotator::operator+=((FRotator *)(in_ECX + 0x1c8),(FRotator *)&iStack_1c);
    return iVar2;
  }
  iStack_18 = *(int *)(in_ECX + 0x1c8);
  iStack_1c = *(int *)(in_ECX + 0x3c8);
  uVar7 = *(int *)(in_ECX + 0x3bc) - iStack_18 & 0xffff;
  fVar9 = (float10)param_1;
  if (iStack_1c < 0) {
    if (fVar9 * (float10)iStack_1c < (float10)(int)(uVar7 - 0x10000)) goto LAB_105d49c3;
LAB_105d48e8:
    uVar8 = FUN_107a6660();
    *(undefined4 *)(in_ECX + 0x1c8) = uVar8;
    fVar9 = extraout_ST0;
  }
  else {
    if (fVar9 * (float10)iStack_1c <= (float10)uVar7) goto LAB_105d48e8;
LAB_105d49c3:
    *(int *)(in_ECX + 0x1c8) = *(int *)(in_ECX + 0x3bc);
  }
  iStack_18 = *(int *)(in_ECX + 0x1cc);
  uVar7 = *(int *)(in_ECX + 0x3c0) - iStack_18 & 0xffff;
  fVar10 = (float10)*(int *)(in_ECX + 0x3cc) * fVar9;
  if (*(int *)(in_ECX + 0x3cc) < 0) {
    if (fVar10 < (float10)(int)(uVar7 - 0x10000)) goto LAB_105d49e1;
LAB_105d494a:
    uVar8 = FUN_107a6660();
    *(undefined4 *)(in_ECX + 0x1cc) = uVar8;
    fVar9 = extraout_ST0_00;
  }
  else {
    if (fVar10 <= (float10)uVar7) goto LAB_105d494a;
LAB_105d49e1:
    *(int *)(in_ECX + 0x1cc) = *(int *)(in_ECX + 0x3c0);
  }
  iStack_18 = *(int *)(in_ECX + 0x1d0);
  uVar7 = *(int *)(in_ECX + 0x3c4) - iStack_18 & 0xffff;
  fVar9 = fVar9 * (float10)*(int *)(in_ECX + 0x3d0);
  if (*(int *)(in_ECX + 0x3d0) < 0) {
    if ((float10)(int)(uVar7 - 0x10000) <= fVar9) {
LAB_105d49fb:
      uVar8 = FUN_107a6660();
      *(undefined4 *)(in_ECX + 0x1d0) = uVar8;
      return iVar2;
    }
  }
  else if (fVar9 <= (float10)uVar7) goto LAB_105d49fb;
  *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x3c4);
  return iVar2;
}


// ==== 105d4b50 FUN_105d4b50

int FUN_105d4b50(float param_1,ELevelTick param_2)

{
  FRotator *this;
  int iVar1;
  FRotator *pFVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  AActor *in_ECX;
  float10 fVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST0_00;
  FRotator local_40 [12];
  FRotator local_34 [20];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820410;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = AActor::Tick(in_ECX,param_1,param_2);
  pFVar2 = (FRotator *)(in_ECX + 0x3bc);
  *(uint *)pFVar2 = *(uint *)pFVar2 & 0xffff;
  *(uint *)(in_ECX + 0x3c0) = *(uint *)(in_ECX + 0x3c0) & 0xffff;
  *(uint *)(in_ECX + 0x3c4) = *(uint *)(in_ECX + 0x3c4) & 0xffff;
  this = (FRotator *)(in_ECX + 0x1c8);
  *(uint *)this = *(uint *)this & 0xffff;
  *(uint *)(in_ECX + 0x1cc) = *(uint *)(in_ECX + 0x1cc) & 0xffff;
  *(uint *)(in_ECX + 0x1d0) = *(uint *)(in_ECX + 0x1d0) & 0xffff;
  if ((*(int **)(in_ECX + 0x2c8) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0x2c8) + 0x338))(), iVar1 == 0)) {
    FRotator::operator*((FRotator *)(in_ECX + 0x3c8),(float)local_34);
    FRotator::operator+=(this,local_40);
    ExceptionList = local_10;
    return local_20;
  }
  iVar1 = FRotator::operator==(this,pFVar2);
  if (iVar1 == 0) {
    pFVar2 = (FRotator *)FRotator::FRotator(local_34,0,0,0);
    iVar1 = FRotator::operator==((FRotator *)(in_ECX + 0x3c8),pFVar2);
    if (iVar1 != 0) goto LAB_105d4c03;
  }
  else {
LAB_105d4c03:
    if (*(int *)(in_ECX + 0x2c8) != 0) {
      (**(code **)(**(int **)(in_ECX + 0xe4) + 0xac))(*(int *)(in_ECX + 0x2c8),0);
      *(undefined4 *)(in_ECX + 0x2c8) = 0;
    }
    puVar3 = (undefined4 *)FRotator::FRotator(local_34,0,0,0);
    *(undefined4 *)(in_ECX + 0x3c8) = *puVar3;
    *(undefined4 *)(in_ECX + 0x3cc) = puVar3[1];
    *(undefined4 *)(in_ECX + 0x3d0) = puVar3[2];
  }
  if (((byte)in_ECX[1000] & 1) == 0) {
LAB_105d4c95:
    puVar3 = (undefined4 *)thunk_FUN_103ff710(0xc,L"DeleteDiceAction");
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x3e4) = 0;
      *(uint *)(in_ECX + 1000) = *(uint *)(in_ECX + 1000) | 1;
    }
    else {
      *puVar3 = FNAction::vftable;
      puVar3[1] = 0;
      *puVar3 = FNDeleteDiceAction::vftable;
      puVar3[2] = 0;
      *(undefined4 **)(in_ECX + 0x3e4) = puVar3;
      *(uint *)(in_ECX + 1000) = *(uint *)(in_ECX + 1000) | 1;
    }
    ExceptionList = local_10;
    return local_20;
  }
  if ((*(int *)(in_ECX + 0x3e4) != 0) && (iVar1 = thunk_FUN_104bdb00(in_ECX,param_1), iVar1 == 0)) {
    thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 0x3e4));
    *(undefined4 *)(in_ECX + 0x3e4) = 0;
  }
  if (((byte)in_ECX[1000] & 1) == 0) goto LAB_105d4c95;
  local_1c = *(int *)this;
  uVar4 = *(int *)(in_ECX + 0x3bc) - local_1c & 0xffff;
  local_18 = *(int *)(in_ECX + 0x3c8);
  fVar6 = (float10)param_1;
  if (local_18 < 0) {
    if (fVar6 * (float10)local_18 < (float10)(int)(uVar4 - 0x10000)) goto LAB_105d4de6;
LAB_105d4d2c:
    uVar5 = FUN_107a6660();
    *(undefined4 *)this = uVar5;
    fVar6 = extraout_ST0;
  }
  else {
    if (fVar6 * (float10)local_18 <= (float10)uVar4) goto LAB_105d4d2c;
LAB_105d4de6:
    *(int *)this = *(int *)(in_ECX + 0x3bc);
  }
  local_1c = *(int *)(in_ECX + 0x1cc);
  uVar4 = *(int *)(in_ECX + 0x3c0) - local_1c & 0xffff;
  fVar7 = (float10)*(int *)(in_ECX + 0x3cc) * fVar6;
  if (*(int *)(in_ECX + 0x3cc) < 0) {
    if (fVar7 < (float10)(int)(uVar4 - 0x10000)) goto LAB_105d4dfb;
LAB_105d4d7f:
    uVar5 = FUN_107a6660();
    *(undefined4 *)(in_ECX + 0x1cc) = uVar5;
    fVar6 = extraout_ST0_00;
  }
  else {
    if (fVar7 <= (float10)uVar4) goto LAB_105d4d7f;
LAB_105d4dfb:
    *(int *)(in_ECX + 0x1cc) = *(int *)(in_ECX + 0x3c0);
  }
  local_1c = *(int *)(in_ECX + 0x1d0);
  uVar4 = *(int *)(in_ECX + 0x3c4) - local_1c & 0xffff;
  fVar6 = fVar6 * (float10)*(int *)(in_ECX + 0x3d0);
  if (*(int *)(in_ECX + 0x3d0) < 0) {
    if ((float10)(int)(uVar4 - 0x10000) <= fVar6) {
LAB_105d4e11:
      uVar5 = FUN_107a6660();
      *(undefined4 *)(in_ECX + 0x1d0) = uVar5;
      ExceptionList = local_10;
      return local_20;
    }
  }
  else if (fVar6 <= (float10)uVar4) goto LAB_105d4e11;
  *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x3c4);
  ExceptionList = local_10;
  return local_20;
}


// ==== 105d4e5c Catch@105d4e5c

void Catch_105d4e5c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105d4e70 Catch@105d4e70

void Catch_105d4e70(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AL2Dice::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d4f60 FUN_105d4f60

undefined4 FUN_105d4f60(float param_1)

{
  int *piVar1;
  int iVar2;
  FStateFrame *pFVar3;
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820420;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(uint *)(in_ECX + 100) =
       *(uint *)(in_ECX + 100) ^
       (*(int *)(*(int *)(in_ECX + 0xe4) + 0x134) << 8 ^ *(uint *)(in_ECX + 100)) & 0x100;
  *(float *)(in_ECX + 0x690) = *(float *)(in_ECX + 0x690) + param_1;
  (**(code **)(*(int *)in_ECX + 0x340))();
  if ((in_ECX[0xc1] == (AActor)0x3) && (iVar2 = (**(code **)(*(int *)in_ECX + 0x350))(), iVar2 == 0)
     ) {
    piVar1 = *(int **)(in_ECX + 0x5c0);
    if ((((piVar1 != *(int **)(in_ECX + 0x3bc)) && (piVar1 != (int *)0x0)) &&
        (iVar2 = (**(code **)(*piVar1 + 0x2f0))(), iVar2 != 0)) &&
       (iVar2 = thunk_FUN_104b42a0(*(undefined4 *)(in_ECX + 0x5c0)), iVar2 != 0)) {
      *(undefined4 *)(in_ECX + 0x698) = *(undefined4 *)(in_ECX + 0x1c8);
      *(undefined4 *)(in_ECX + 0x69c) = *(undefined4 *)(in_ECX + 0x1cc);
      *(undefined4 *)(in_ECX + 0x6a0) = *(undefined4 *)(in_ECX + 0x1d0);
      *(undefined4 *)(in_ECX + 0x6a4) = *(undefined4 *)(iVar2 + 0x15a0);
      if (*(int *)(iVar2 + 0x1590) != 0) {
        iVar2 = *(int *)(iVar2 + 0x1590);
        *(undefined4 *)(in_ECX + 0x6a8) = *(undefined4 *)(iVar2 + 0x3cc);
        *(undefined4 *)(in_ECX + 0x6ac) = *(undefined4 *)(iVar2 + 0x3d0);
        *(undefined4 *)(in_ECX + 0x6b0) = *(undefined4 *)(iVar2 + 0x3d4);
      }
    }
    (**(code **)(*(int *)in_ECX + 0x18))(param_1);
    AActor::UpdateTimers(in_ECX,param_1);
  }
  else if (1 < (byte)in_ECX[0xc2]) {
    iVar2 = UObject::IsA((UObject *)in_ECX,&ACamera::PrivateStaticClass);
    if ((iVar2 != 0) && ((*(uint *)(in_ECX + 0x5ac) & 0x800) == 0)) {
      ExceptionList = local_10;
      return 1;
    }
    if ((*(int *)(in_ECX + 0x560) != 0) &&
       ((*(int *)(in_ECX + 0x7f8) != 0 ||
        (APlayerController::eventInitInputSystem((APlayerController *)in_ECX),
        *(int *)(in_ECX + 0x7f8) != 0)))) {
      (**(code **)(**(int **)(in_ECX + 0x560) + 0x68))(param_1);
      APlayerController::eventPlayerTick((APlayerController *)in_ECX,param_1);
      (**(code **)(**(int **)(in_ECX + 0x560) + 0x68))(0xbf800000);
    }
    (**(code **)(*(int *)in_ECX + 0x18))(param_1);
    AActor::UpdateTimers(in_ECX,param_1);
    if (((byte)in_ECX[100] & 0x80) != 0) {
      ExceptionList = local_10;
      return 1;
    }
    if ((in_ECX[0x34] != (AActor)0x0) && (in_ECX[0xc2] != (AActor)0x3)) {
      (**(code **)(*(int *)in_ECX + 0x1cc))(param_1);
    }
  }
  if (((((*(int *)(*(int *)(in_ECX + 0xe4) + 0xbc) != 0) &&
        (*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0xbc) + 0x44) != 0)) &&
       ((in_ECX[0xc2] == (AActor)0x4 &&
        ((((byte)in_ECX[0x564] & 0x20) == 0 && (*(int **)(in_ECX + 0x5c0) != (int *)0x0)))))) &&
      (iVar2 = (**(code **)(**(int **)(in_ECX + 0x5c0) + 0x2f0))(), iVar2 != 0)) &&
     (iVar2 = thunk_FUN_104b42a0(*(undefined4 *)(in_ECX + 0x5c0)), iVar2 != 0)) {
    *(undefined4 *)(in_ECX + 0x698) = *(undefined4 *)(in_ECX + 0x1c8);
    *(undefined4 *)(in_ECX + 0x69c) = *(undefined4 *)(in_ECX + 0x1cc);
    *(undefined4 *)(in_ECX + 0x6a0) = *(undefined4 *)(in_ECX + 0x1d0);
    *(undefined4 *)(in_ECX + 0x6a4) = *(undefined4 *)(iVar2 + 0x15a0);
    if (*(int *)(iVar2 + 0x1590) != 0) {
      iVar2 = *(int *)(iVar2 + 0x1590);
      *(undefined4 *)(in_ECX + 0x6a8) = *(undefined4 *)(iVar2 + 0x3cc);
      *(undefined4 *)(in_ECX + 0x6ac) = *(undefined4 *)(iVar2 + 0x3d0);
      *(undefined4 *)(in_ECX + 0x6b0) = *(undefined4 *)(iVar2 + 0x3d4);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if (((*(int *)(in_ECX + 0x3bc) != 0) &&
      (pFVar3 = UObject::GetStateFrame((UObject *)in_ECX), *(int *)(pFVar3 + 0x28) != 0)) &&
     (((*(uint *)(*(APawn **)(in_ECX + 0x3bc) + 0x2f8) & 0x4000) != 0 ||
      ((*(uint *)(in_ECX + 0x2f8) & 0x4000) != 0)))) {
    iVar2 = *(int *)(in_ECX + 0x40c);
    if (iVar2 != 0) {
      *(undefined4 *)(in_ECX + 0x400) = *(undefined4 *)(iVar2 + 0x1bc);
      *(undefined4 *)(in_ECX + 0x404) = *(undefined4 *)(iVar2 + 0x1c0);
      *(undefined4 *)(in_ECX + 0x408) = *(undefined4 *)(iVar2 + 0x1c4);
    }
    APawn::rotateToward(*(APawn **)(in_ECX + 0x3bc),iVar2,*(undefined4 *)(in_ECX + 0x400),
                        *(undefined4 *)(in_ECX + 0x404),*(undefined4 *)(in_ECX + 0x408));
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105d52d7 Catch@105d52d7

void Catch_105d52d7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105d52eb Catch@105d52eb

void Catch_105d52eb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Rotate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d5307 Catch@105d5307

void Catch_105d5307(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105d531b Catch@105d531b

void Catch_105d531b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APlayerController::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d5420 FUN_105d5420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105d5420(UClass *param_1,undefined4 *param_2)

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
  APlayerController *in_ECX;
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
  APlayerController::Tick(in_ECX,(float)param_1,(ELevelTick)param_2);
  local_78 = CONCAT31(local_78._1_3_,1);
  ALineagePlayerController::UpdateShakeState((ALineagePlayerController *)in_ECX,(float)param_1);
  ALineagePlayerController::SpecialViewTick((ALineagePlayerController *)in_ECX,(float)param_1);
  local_78 = 3;
  if (((*(int *)GIsL2NetLogin_exref != 0) && (*(int *)(in_ECX + 0x3bc) != 0)) &&
     (fVar20 = FVector::Size((FVector *)(*(int *)(in_ECX + 0x3bc) + 0x1d4)), fVar20 != 0.0)) {
    iVar5 = FVector::operator==((FVector *)(*(int *)(in_ECX + 0x3bc) + 0x1d4),
                                (FVector *)(*(int *)(in_ECX + 0x3bc) + 0x1d4));
    if (iVar5 == 0) {
      appFailAssert("Pawn->Velocity==Pawn->Velocity",".\\UnLevTic.cpp",0x652);
    }
    param_2 = (undefined4 *)(*(float *)(in_ECX + 0xa00) - (float)param_1);
    *(undefined4 **)(in_ECX + 0xa00) = param_2;
    if ((float)param_2 <= 0.0) {
      *(float *)(in_ECX + 0xa00) = (float)param_2 + 1.2;
      if ((*(byte *)(*(int *)(in_ECX + 0x3bc) + 0x6ac) & 1) == 0) {
        (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x60) + 0x128))();
      }
      else {
        iVar5 = thunk_FUN_1040b560();
        if (iVar5 != 0) {
          iVar9 = *(int *)(in_ECX + 0x3bc);
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
          (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x60) + 0x128))();
        }
      }
    }
  }
  local_78 = 5;
  if ((((byte)in_ECX[0xa18] & 1) != 0) && (iVar5 = *(int *)(in_ECX + 0x3bc), iVar5 != 0)) {
    if ((*(byte *)(iVar5 + 0x6dc) & 2) == 0) {
      pFVar7 = (FRotator *)FRotator::FRotator((FRotator *)&local_5c,0,*(int *)(in_ECX + 0xa1c),0);
      FRotator::Vector(pFVar7);
      param_2 = (undefined4 *)(*(float *)(iVar5 + 0x1550) * 5.0);
      pfVar6 = (float *)thunk_FUN_103301a0();
      param_2 = (undefined4 *)(*pfVar6 + *(float *)(iVar5 + 0x1bc));
      local_c4 = (UTexture *)(pfVar6[1] + *(float *)(iVar5 + 0x1c0));
      local_c0 = pfVar6[2] + *(float *)(iVar5 + 0x1c4);
      local_c8 = (float)param_2;
      local_10 = local_c4;
      local_c = local_c0;
    }
    else {
      pFVar7 = (FRotator *)FRotator::FRotator((FRotator *)&local_5c,0,*(int *)(in_ECX + 0xa1c),0);
      FRotator::Vector(pFVar7);
      param_2 = (undefined4 *)(*(float *)(iVar5 + 0x1550) * 5.0);
      pfVar6 = (float *)thunk_FUN_103301a0();
      param_2 = (undefined4 *)(*(float *)(iVar5 + 0x1bc) + *pfVar6);
      local_b4 = (UTexture *)(*(float *)(iVar5 + 0x1c0) + pfVar6[1]);
      local_b0 = *(float *)(iVar5 + 0x1c4) + pfVar6[2];
      *(uint *)(iVar5 + 0x6dc) = *(uint *)(iVar5 + 0x6dc) & 0xfffffffd;
      local_b8 = (float)param_2;
      local_10 = local_b4;
      local_c = local_b0;
    }
    local_1c = (float)param_2;
    local_18 = local_10;
    local_14 = local_c;
    if (*(int *)GIsL2NetLogin_exref == 0) {
      AController::MoveTo();
    }
    else {
      pFVar8 = UObject::GetStateFrame((UObject *)in_ECX);
      if (*(int *)(pFVar8 + 0x28) == 0) {
        piVar18 = *(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x60);
      }
      else {
        param_2 = (undefined4 *)(*(float *)(in_ECX + 0xa20) + (float)param_1);
        *(undefined4 **)(in_ECX + 0xa20) = param_2;
        if ((float)param_2 <= 2.0) goto code_r0x105d585a;
        *(float *)(in_ECX + 0xa20) = (float)param_2 - 2.0;
        piVar18 = *(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x60);
      }
      (**(code **)(*piVar18 + 0xe4))();
    }
  }
code_r0x105d585a:
  local_78 = 7;
  if ((((byte)in_ECX[0xa08] & 3) != 0) && (iVar5 = *(int *)(in_ECX + 0x3bc), iVar5 != 0)) {
    if ((*(byte *)(iVar5 + 0x6dc) & 2) == 0) {
      iVar5 = *(int *)(in_ECX + 0x3bc);
      pFVar7 = (FRotator *)FRotator::FRotator((FRotator *)&local_5c,0,*(int *)(in_ECX + 0xa0c),0);
      FRotator::Vector(pFVar7);
      param_2 = (undefined4 *)(*(float *)(iVar5 + 0x1550) * 5.0);
      pfVar6 = (float *)thunk_FUN_103301a0();
      param_2 = (undefined4 *)(*pfVar6 + *(float *)(iVar5 + 0x1bc));
      local_3c = (UTexture *)(pfVar6[1] + *(float *)(iVar5 + 0x1c0));
      local_38 = pfVar6[2] + *(float *)(iVar5 + 0x1c4);
      local_40 = (float)param_2;
      local_10 = local_3c;
      local_c = local_38;
      if (*(int *)GIsL2NetLogin_exref == 0) {
        AController::MoveTo();
      }
      else {
        pFVar8 = UObject::GetStateFrame((UObject *)in_ECX);
        if (*(int *)(pFVar8 + 0x28) == 0) {
          (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x60) + 0xe4))();
        }
        else {
          param_2 = (undefined4 *)(*(float *)(in_ECX + 0xa14) + (float)param_1);
          *(undefined4 **)(in_ECX + 0xa14) = param_2;
          if (3.0 < (float)param_2) {
            *(float *)(in_ECX + 0xa14) = (float)param_2 - 3.0;
            (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x60) + 0xe4))();
          }
        }
      }
    }
    else {
      *(float *)(in_ECX + 0x98c) =
           *(float *)(in_ECX + 0x98c) +
           (float)*(int *)(iVar5 + 0x6e0) * (float)param_1 * (float)*(int *)(iVar5 + 0x314);
      *(undefined4 *)(iVar5 + 0x32c) = *(undefined4 *)(iVar5 + 0x1c8);
      *(undefined4 *)(iVar5 + 0x330) = *(undefined4 *)(iVar5 + 0x1cc);
      *(undefined4 *)(iVar5 + 0x334) = *(undefined4 *)(iVar5 + 0x1d0);
      if (((byte)in_ECX[0xa24] & 1) == 0) {
        iVar5 = *(int *)(in_ECX + 0x3bc);
        uVar12 = FUN_107a6660();
        *(undefined4 *)(iVar5 + 0x330) = uVar12;
        *(undefined4 *)(in_ECX + 0xa0c) = *(undefined4 *)(*(int *)(in_ECX + 0x3bc) + 0x330);
      }
      else {
        while (*(int *)(in_ECX + 0xa0c) - *(int *)(*(int *)(in_ECX + 0x3bc) + 0x1cc) < -0x7fff) {
          *(int *)(in_ECX + 0xa0c) = *(int *)(in_ECX + 0xa0c) + 0x10000;
        }
        while (0x8000 < *(int *)(in_ECX + 0xa0c) - *(int *)(*(int *)(in_ECX + 0x3bc) + 0x1cc)) {
          *(int *)(in_ECX + 0xa0c) = *(int *)(in_ECX + 0xa0c) + -0x10000;
        }
        iVar5 = *(int *)(in_ECX + 0xa0c);
        iVar9 = *(int *)(*(int *)(in_ECX + 0x3bc) + 0x1cc);
        if ((iVar5 + -100 < iVar9) && (iVar9 < iVar5 + 100)) {
          *(uint *)(in_ECX + 0xa24) = *(uint *)(in_ECX + 0xa24) & 0xfffffffe;
        }
        *(int *)(*(int *)(in_ECX + 0x3bc) + 0x330) = iVar5;
      }
      iVar5 = *(int *)(in_ECX + 0x3bc);
      pFVar7 = (FRotator *)FRotator::FRotator((FRotator *)&local_5c,0,*(int *)(iVar5 + 0x330),0);
      FRotator::Vector(pFVar7);
      param_2 = (undefined4 *)(*(float *)(iVar5 + 0x1550) * 5.0);
      pfVar6 = (float *)thunk_FUN_103301a0();
      param_2 = (undefined4 *)(*pfVar6 + *(float *)(iVar5 + 0x1bc));
      local_30 = (UTexture *)(pfVar6[1] + *(float *)(iVar5 + 0x1c0));
      local_2c = pfVar6[2] + *(float *)(iVar5 + 0x1c4);
      local_34 = (float)param_2;
      local_10 = local_30;
      local_c = local_2c;
      if (*(int *)GIsL2NetLogin_exref == 0) {
        AController::MoveTo();
      }
      else {
        pFVar8 = UObject::GetStateFrame((UObject *)in_ECX);
        if (*(int *)(pFVar8 + 0x28) == 0) {
          (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x60) + 0xe4))();
        }
        else {
          param_2 = (undefined4 *)(*(float *)(in_ECX + 0xa14) + (float)param_1);
          *(undefined4 **)(in_ECX + 0xa14) = param_2;
          if (0.1 < (float)param_2) {
            *(float *)(in_ECX + 0xa14) = (float)param_2 - 0.1;
            (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x60) + 0xe4))();
          }
        }
      }
    }
  }
  local_78 = 9;
  if (*(int *)(in_ECX + 0x3bc) != 0) {
    *(undefined4 *)(DAT_10ddd810 + DAT_10dddb80 * 4) =
         *(undefined4 *)(*(int *)(in_ECX + 0x3bc) + 0x1bc);
    *(undefined4 *)(DAT_10ddd810 + DAT_10dddb84 * 4) =
         *(undefined4 *)(*(int *)(in_ECX + 0x3bc) + 0x1c0);
    *(undefined4 *)(DAT_10ddd810 + DAT_10dddb88 * 4) =
         *(undefined4 *)(*(int *)(in_ECX + 0x3bc) + 0x1c4);
    *(undefined4 *)(DAT_10ddd810 + DAT_10dddb94 * 4) =
         *(undefined4 *)(*(int *)(in_ECX + 0x3bc) + 0x1550);
    iVar5 = (**(code **)(*(int *)in_ECX + 0x35c))();
    if (iVar5 == 0) {
      *(undefined4 *)(DAT_10ddd810 + DAT_10dddbb0 * 4) = 0;
      *(undefined4 *)(DAT_10ddd810 + DAT_10dddbb4 * 4) = 0;
      *(undefined4 *)(DAT_10ddd810 + DAT_10dddbb8 * 4) = 0;
    }
    else {
      puVar1 = (undefined4 *)(DAT_10ddd810 + DAT_10dddbb0 * 4);
      iVar5 = (**(code **)(*(int *)in_ECX + 0x35c))();
      *puVar1 = *(undefined4 *)(iVar5 + 0x1bc);
      puVar1 = (undefined4 *)(DAT_10ddd810 + DAT_10dddbb4 * 4);
      iVar5 = (**(code **)(*(int *)in_ECX + 0x35c))();
      *puVar1 = *(undefined4 *)(iVar5 + 0x1c0);
      puVar1 = (undefined4 *)(DAT_10ddd810 + DAT_10dddbb8 * 4);
      iVar5 = (**(code **)(*(int *)in_ECX + 0x35c))();
      *puVar1 = *(undefined4 *)(iVar5 + 0x1c4);
    }
    if (*(int *)GIsEditor_exref == 0) {
      UGameEngine::GetSWMapXY(*(UGameEngine **)(*(int *)(in_ECX + 0xe4) + 0x74));
      *(undefined4 **)(DAT_10ddd7e0 + DAT_10dddb8c * 4) = param_2;
      *(UTexture **)(DAT_10ddd7e0 + DAT_10dddb90 * 4) = local_10;
    }
  }
  local_78 = 0;
  piVar18 = *(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x58);
  param_2 = (undefined4 *)0x0;
  if ((*(int *)(in_ECX + 0x3bc) != 0) &&
     (((*(byte *)(*(int *)(in_ECX + 0x3bc) + 0x6ac) & 1) == 0 ||
      (param_2 = (undefined4 *)0x1, ((byte)in_ECX[0xa64] & 1) == 0)))) {
    param_2 = (undefined4 *)0x0;
  }
  if ((((piVar18 != (int *)0x0) && (iVar5 = (**(code **)(*piVar18 + 0xc4))(), iVar5 != 0)) &&
      (iVar5 = (**(code **)(*piVar18 + 0xb8))(), iVar5 != 0)) && (0 < *(int *)(in_ECX + 0xa5c))) {
    (**(code **)(*piVar18 + 0x98))();
  }
  local_78 = CONCAT31(local_78._1_3_,0xb);
  if ((*(int *)(in_ECX + 0xa68) != 0) && (piVar18 != (int *)0x0)) {
    local_c = (float)(**(code **)(*piVar18 + 0xbc))();
    iVar5 = (**(code **)(*piVar18 + 0xc0))();
    local_10 = (UTexture *)(**(code **)(*piVar18 + 0xb8))();
    if ((*(int *)(in_ECX + 0xa68) == 1) &&
       ((iVar5 != 0 || local_c != 0.0 && (0 < *(int *)(in_ECX + 0xa60))))) {
LAB_105d5f9e:
      (**(code **)(*piVar18 + 0xd4))();
      *(undefined4 *)(in_ECX + 0xa60) = 0xffffffff;
    }
    else if (*(int *)(in_ECX + 0xa68) == 2) {
      if (((iVar5 != 0) && (local_c == 0.0)) && (0 < *(int *)(in_ECX + 0xa60))) goto LAB_105d5f9e;
      if (local_c != 0.0) {
        *(undefined4 *)(in_ECX + 0xa70) = 0;
        *(undefined4 *)(in_ECX + 0xa68) = 0;
        FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0xa84),(ushort *)&DAT_10853d94);
      }
    }
    if (*(float *)(in_ECX + 0xa70) <= 0.0) {
      this = (FString *)(in_ECX + 0xa84);
      iVar5 = FString::operator!=(this,(ushort *)&DAT_10853d94);
      if (iVar5 != 0) {
        *(undefined4 *)(in_ECX + 0xa70) = 0;
        if (*(int *)(in_ECX + 0xa68) == 1) {
          local_20 = &stack0xfffffcd0;
          FString::FString((FString *)&stack0xfffffcd0,this);
          local_78 = CONCAT31((int3)((uint)local_78 >> 8),0xb);
          uVar12 = (**(code **)(*piVar18 + 0xdc))();
          *(undefined4 *)(in_ECX + 0xa60) = uVar12;
        }
        else if (*(int *)(in_ECX + 0xa68) == 2) {
          local_20 = &stack0xfffffcd0;
          FString::FString((FString *)&stack0xfffffcd0,this);
          local_78 = CONCAT31((int3)((uint)local_78 >> 8),0xb);
          uVar12 = (**(code **)(*piVar18 + 0xdc))();
          *(undefined4 *)(in_ECX + 0xa60) = uVar12;
        }
        *(undefined4 *)(in_ECX + 0xa68) = 0;
        if (0 < *(int *)(in_ECX + 0xa60)) {
          if ((local_10 != (UTexture *)0x0) && (0 < *(int *)(in_ECX + 0xa5c))) {
            (**(code **)(*piVar18 + 0x98))();
          }
          *(uint *)(in_ECX + 0xa74) = *(uint *)(in_ECX + 0xa74) | 1;
        }
      }
    }
    else {
      *(float *)(in_ECX + 0xa70) = *(float *)(in_ECX + 0xa70) - (float)param_1;
    }
  }
  local_78 = 0xf;
  if ((((byte)in_ECX[0xa64] & 2) != 0) && (piVar18 != (int *)0x0)) {
    iVar5 = (**(code **)(*piVar18 + 0xc0))();
    iVar9 = (**(code **)(*piVar18 + 0xbc))();
    iVar10 = (**(code **)(*piVar18 + 0xb8))();
    if ((iVar10 != 0) && (0 < *(int *)(in_ECX + 0xa5c))) {
      (**(code **)(*piVar18 + 0xd4))();
      *(undefined4 *)(in_ECX + 0xa5c) = 0xffffffff;
    }
    if (*(float *)(in_ECX + 0xa6c) <= 0.0) {
      *(undefined4 *)(in_ECX + 0xa6c) = 0;
      if ((iVar5 == 0 && iVar9 == 0) || (*(int *)(in_ECX + 0xa60) < 1)) {
        local_20 = &stack0xfffffcc8;
        FString::FString((FString *)&stack0xfffffcc8,(FString *)(in_ECX + 0xa78));
      }
      else {
        local_20 = &stack0xfffffcc8;
        FString::FString((FString *)&stack0xfffffcc8,(FString *)(in_ECX + 0xa78));
      }
      local_78 = CONCAT31((int3)((uint)local_78 >> 8),0xf);
      iVar5 = (**(code **)(*piVar18 + 0xd0))();
      *(int *)(in_ECX + 0xa5c) = iVar5;
      *(uint *)(in_ECX + 0xa64) = *(uint *)(in_ECX + 0xa64) & 0xfffffffd;
      if (0 < iVar5) {
        *(uint *)(in_ECX + 0xa74) = *(uint *)(in_ECX + 0xa74) | 1;
      }
    }
    else {
      *(float *)(in_ECX + 0xa6c) = *(float *)(in_ECX + 0xa6c) - (float)param_1;
    }
  }
  local_78._0_1_ = 0x13;
  local_78._1_3_ = 0;
  if ((((*(int *)(in_ECX + 0x3bc) != 0) && (piVar18 != (int *)0x0)) &&
      (((byte)in_ECX[0xa74] & 1) == 0)) && (param_2 != (undefined4 *)0x0)) {
    iVar5 = (**(code **)(*piVar18 + 0xb8))();
    if ((iVar5 == 0) &&
       (puVar11 = FL2GameData::GetMusicName(&GL2GameData,0), puVar11 != (ushort *)0x0)) {
      local_20 = &stack0xfffffcc8;
      FString::FString((FString *)&stack0xfffffcc8,puVar11);
      local_78 = CONCAT31(local_78._1_3_,0x13);
      uVar12 = (**(code **)(*piVar18 + 0xd0))();
      *(undefined4 *)(in_ECX + 0xa5c) = uVar12;
    }
    if ((*(uint *)(in_ECX + 0xa50) & 1) == 0) {
      *(uint *)(in_ECX + 0xa50) = *(uint *)(in_ECX + 0xa50) | 1;
    }
  }
  local_78._1_3_ = 0;
  uVar4 = local_78._1_3_;
  local_78._0_1_ = 0x16;
  local_78._1_3_ = 0;
  uVar3 = uVar4;
  if (((*(int *)(in_ECX + 0x3bc) == 0) || (uVar3 = local_78._1_3_, piVar18 == (int *)0x0)) ||
     (param_2 != (undefined4 *)0x0)) {
LAB_105d65ca:
    local_78._1_3_ = uVar3;
    uVar4 = local_78._1_3_;
    if (((byte)in_ECX[0xa74] & 1) != 0) goto LAB_105d65d3;
  }
  else {
    if (((byte)in_ECX[0xa74] & 1) == 0) {
      param_2 = (undefined4 *)(**(code **)(*piVar18 + 0xb8))();
      if (DAT_10c51044 == (UGameEngine *)0x0) {
        local_c = 60.0;
        local_10 = (UTexture *)0x41f00000;
      }
      else {
        local_c = *(float *)(DAT_10c51044 + 0x338);
        local_10 = *(UTexture **)(DAT_10c51044 + 0x33c);
      }
      pAVar13 = ALevelInfo::L2GetMusicVolume(*(ALevelInfo **)(*(int *)(in_ECX + 0x3bc) + 0xe0));
      if (param_2 == (undefined4 *)0x0) {
        if (((pAVar13 == (AMusicVolume *)0x0) || (((byte)pAVar13[0x438] & 2) == 0)) ||
           ((*(uint *)(in_ECX + 0xa50) & 1) != 0)) {
          if ((*(uint *)(in_ECX + 0xa50) & 1) == 0) {
            local_8 = (undefined1 *)(*(float *)(in_ECX + 0xa54) + (float)param_1);
            *(undefined1 **)(in_ECX + 0xa54) = local_8;
            if (local_c < (float)local_8 != (local_c == (float)local_8)) {
              *(uint *)(in_ECX + 0xa50) = *(uint *)(in_ECX + 0xa50) | 1;
              goto LAB_105d63cc;
            }
          }
        }
        else {
          *(uint *)(in_ECX + 0xa50) = *(uint *)(in_ECX + 0xa50) | 1;
LAB_105d63cc:
          *(undefined4 *)(in_ECX + 0xa54) = 0;
        }
      }
      if (pAVar13 != (AMusicVolume *)0x0) {
        if (pAVar13 == *(AMusicVolume **)(in_ECX + 0xa4c)) {
          if (((((byte)in_ECX[0xa50] & 1) != 0) && (param_2 == (undefined4 *)0x0)) &&
             (puVar11 = FL2GameData::GetMusicName(&GL2GameData,*(int *)(pAVar13 + 0x434)),
             puVar11 != (ushort *)0x0)) {
            local_20 = &stack0xfffffcc8;
            FString::FString((FString *)&stack0xfffffcc8,puVar11);
            goto LAB_105d64a0;
          }
        }
        else {
          if ((param_2 != (undefined4 *)0x0) && (0 < *(int *)(in_ECX + 0xa5c))) {
            (**(code **)(*piVar18 + 0xd4))();
            *(undefined4 *)(in_ECX + 0xa5c) = 0xffffffff;
          }
          puVar11 = FL2GameData::GetMusicName(&GL2GameData,*(int *)(pAVar13 + 0x434));
          if (puVar11 != (ushort *)0x0) {
            local_20 = &stack0xfffffcc8;
            FString::FString((FString *)&stack0xfffffcc8,puVar11);
LAB_105d64a0:
            local_78._0_1_ = 0x16;
            uVar12 = (**(code **)(*piVar18 + 0xd0))();
            *(undefined4 *)(in_ECX + 0xa5c) = uVar12;
            *(uint *)(in_ECX + 0xa50) = *(uint *)(in_ECX + 0xa50) & 0xfffffffe;
          }
        }
      }
      *(AMusicVolume **)(in_ECX + 0xa4c) = pAVar13;
      uVar3 = local_78._1_3_;
      if (pAVar13 == (AMusicVolume *)0x0) {
        if (param_2 == (undefined4 *)0x0) {
          param_2 = (undefined4 *)(*(float *)(in_ECX + 0xa58) + (float)param_1);
          *(undefined4 **)(in_ECX + 0xa58) = param_2;
          if ((float)local_10 < (float)param_2 != ((float)local_10 == (float)param_2)) {
            *(undefined4 *)(in_ECX + 0xa58) = 0;
            param_2 = (undefined4 *)FUN_107a6660();
            iVar5 = FUN_107a6660();
            appPow(10.0,2.0);
            iVar9 = FUN_107a6660();
            puVar11 = FL2GameData::GetMusicName(&GL2GameData,iVar9 + iVar5);
            uVar3 = local_78._1_3_;
            if (puVar11 != (ushort *)0x0) {
              param_2 = (undefined4 *)&stack0xfffffcc8;
              FString::FString((FString *)&stack0xfffffcc8,puVar11);
              local_78._0_1_ = 0x16;
              uVar12 = (**(code **)(*piVar18 + 0xd0))();
              *(undefined4 *)(in_ECX + 0xa5c) = uVar12;
              *(uint *)(in_ECX + 0xa50) = *(uint *)(in_ECX + 0xa50) & 0xfffffffe;
              uVar3 = local_78._1_3_;
            }
          }
        }
      }
      else {
        *(undefined4 *)(in_ECX + 0xa58) = 0;
      }
      goto LAB_105d65ca;
    }
LAB_105d65d3:
    local_78._1_3_ = uVar4;
    iVar5 = (**(code **)(*piVar18 + 0xb8))();
    if (iVar5 == 0) {
      *(uint *)(in_ECX + 0xa74) = *(uint *)(in_ECX + 0xa74) & 0xfffffffe;
    }
  }
  local_78 = 0x1b;
  iVar5 = *(int *)(in_ECX + 0x3bc);
  if (iVar5 != 0) {
    iVar10 = 6000;
    local_98 = 6000;
    iVar9 = 3000;
    local_a0 = 3000;
    local_28[0] = CONCAT31(local_28[0]._1_3_,0xff);
    param_2 = (undefined4 *)(*(float *)(in_ECX + 0x1bc) - *(float *)(iVar5 + 0x1bc));
    local_64 = *(float *)(in_ECX + 0x1c0) - *(float *)(iVar5 + 0x1c0);
    local_60 = (UTexture *)(*(float *)(in_ECX + 0x1c4) - *(float *)(iVar5 + 0x1c4));
    local_68 = (undefined1 *)param_2;
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
    if ((120.0 <= local_c) || ((int)*(uint *)(in_ECX + 0x1c8) <= iVar9)) {
      (**(code **)(**(int **)(in_ECX + 0x3bc) + 0x128))();
      iVar5 = *(int *)(in_ECX + 0x3bc);
      iVar9 = *(int *)(iVar5 + 0x718);
    }
    else {
      param_2 = (undefined4 *)
                (((float)(int)(iVar10 - (*(uint *)(in_ECX + 0x1c8) & 0xffff)) * 255.0) /
                (float)(iVar10 - iVar9));
      fVar19 = (float10)thunk_FUN_103704b0();
      local_8 = (undefined1 *)(int)ROUND(fVar19);
      bVar2 = (byte)local_8;
      param_2 = (undefined4 *)(((local_c - 10.0) * 255.0) / 20.0);
      fVar19 = (float10)thunk_FUN_103704b0();
      param_2 = (undefined4 *)CONCAT22(in_FPUControlWord,param_2._0_2_);
      local_8 = (undefined1 *)(int)ROUND(fVar19);
      local_28[0] = CONCAT31((int3)((uint)local_28[0] >> 8),bVar2);
      if (80.0 < local_c) {
        param_2 = (undefined4 *)(((local_c - 80.0) * 255.0) / 40.0);
        fVar19 = (float10)thunk_FUN_103704b0();
        param_2 = (undefined4 *)CONCAT22(in_FPUControlWord,param_2._0_2_);
        local_8 = (undefined1 *)(int)ROUND(fVar19);
        if (bVar2 < (byte)local_8) {
          local_28[0] = CONCAT31(local_28[0]._1_3_,(byte)local_8);
        }
      }
      (**(code **)(**(int **)(in_ECX + 0x3bc) + 0x128))();
      iVar5 = *(int *)(in_ECX + 0x3bc);
      iVar9 = *(int *)(iVar5 + 0x718);
    }
    if (iVar9 != 0) {
      (**(code **)(**(int **)(iVar5 + 0x718) + 0x128))();
    }
  }
  local_78._0_1_ = 0x1d;
  local_78._1_3_ = 0;
  if (*(int *)GIsEditor_exref != 0) goto code_r0x105d6b8a;
  _DAT_10c6a5c4 = (float)param_1 + _DAT_10c6a5c4;
  _DAT_10c6a5c0 = (float)param_1 + _DAT_10c6a5c0;
  if (DAT_10c6a5bc != 0) {
    iVar5 = *(int *)(*(int *)(in_ECX + 0xe4) + 0x74);
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
  if (_DAT_10c6a5c4 <= 2.0) goto code_r0x105d6b8a;
  _DAT_10c6a5c4 = 0.0;
  iVar5 = **(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x54) + 0x38);
  iVar9 = *(int *)(*(int *)(iVar5 + 0x3c) + 0x3bc);
  if (iVar9 == 0) goto code_r0x105d6b8a;
  UGameEngine::GetSWMapXY();
  local_10 = FL2GameData::GetZoneNameTexture(&GL2GameData,(int)param_2,(int)param_1);
  if ((((local_10 == (UTexture *)0x0) || (*(int *)(iVar5 + 0x164) == 0)) ||
      (*(int *)(*(int *)(iVar5 + 0x7c) + 0x5c) != 0)) || (*(int *)(iVar5 + 0x168) == 0))
  goto code_r0x105d6b8a;
  local_8 = (undefined1 *)((int)param_2 + -0x14);
  local_44 = FUN_107a6660();
  local_8 = (undefined1 *)((int)param_1 + -0x12);
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
                       (int)param_2,(int)param_1,*(float *)(iVar9 + 0x1c4));
  pvVar14 = ALineagePlayerController::m_pPrevZoneNameInfo;
  if (((pFVar15 != (FZoneNameInfo *)0x0) &&
      (ALineagePlayerController::m_pPrevZoneNameInfo != pFVar15)) && (8.0 < _DAT_10c6a5c0)) {
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
  pAVar17 = ALevelInfo::L2GetAirVolume(*(ALevelInfo **)(in_ECX + 0xe0));
  if (*(AAirEmitter **)(in_ECX + 0xa9c) != (AAirEmitter *)0x0) {
    AAirEmitter::eventSetAirVolume(*(AAirEmitter **)(in_ECX + 0xa9c),pAVar17);
  }
  if ((*(int *)GL2RenderDeco_exref != 0) && (pAVar17 != (AAirVolume *)0x0)) {
    FName::FName((FName *)&param_1,0);
    iVar5 = FName::operator!=((FName *)(pAVar17 + 0x434),(FName *)&param_1);
    if ((iVar5 != 0) && (*(int *)(in_ECX + 0xa9c) == 0)) {
      pUVar22 = (UPackageMap *)0x0;
      uVar21 = 0x2000;
      puVar16 = (ushort *)0x0;
      puVar11 = FName::operator*((FName *)(pAVar17 + 0x434));
      uStack_348 = 0x105d6c3d;
      param_1 = UObject::StaticLoadClass
                          (&AActor::PrivateStaticClass,(UObject *)0x0,puVar11,puVar16,uVar21,pUVar22
                          );
      if (param_1 != (UClass *)0x0) {
        iVar5 = **(int **)(in_ECX + 0xe4);
        uStack_34c = *(undefined4 *)(in_ECX + 0x1c8);
        uStack_348 = *(undefined4 *)(in_ECX + 0x1cc);
        uStack_358 = *(undefined4 *)(in_ECX + 0x1bc);
        uStack_35c = *(undefined4 *)(in_ECX + 0x1c0);
        uStack_350 = *(undefined4 *)(in_ECX + 0x1c4);
        param_2 = &uStack_35c;
        uStack_354 = uStack_35c;
        FName::FName((FName *)&uStack_35c,0);
        uVar12 = (**(code **)(iVar5 + 0xc0))(param_1);
        this_00 = (UObject *)thunk_FUN_105d2bd0(uVar12);
        *(UObject **)(in_ECX + 0xa9c) = this_00;
        if (this_00 != (UObject *)0x0) {
          UObject::SetFlags(this_00,0x4000000);
          if ((*(byte *)(*(int **)(in_ECX + 0xa9c) + 0x137) & 1) == 0) {
            local_50 = 0;
            local_4c = 0;
            local_48 = 0x3f800000;
            (**(code **)(**(int **)(in_ECX + 0xa9c) + 0x16c))();
          }
        }
      }
    }
  }
  ExceptionList = local_80;
  return 1;
}


// ==== 105d6d3b Catch@105d6d3b

void Catch_105d6d3b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x84);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 105d6d52 Catch@105d6d52

void Catch_105d6d52(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108d15d4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d6d6e Catch@105d6d6e

void Catch_105d6d6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x80);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x5c,&DAT_10914c48);
}


// ==== 105d6d82 Catch@105d6d82

void Catch_105d6d82(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108d15cc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d6d89 Catch@105d6d89

void Catch_105d6d89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + -0x90);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -100,&DAT_10914c48);
}


// ==== 105d6d9d Catch@105d6d9d

void Catch_105d6d9d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108d15c8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d6da4 Catch@105d6da4

void Catch_105d6da4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x6c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105d6db5 Catch@105d6db5

void Catch_105d6db5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALineagePlayerController::Tick_MapMusic");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d6dbc Catch@105d6dbc

void Catch_105d6dbc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x74);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105d6dcd Catch@105d6dcd

void Catch_105d6dcd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALineagePlayerController::Tick_VehicleMusic");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d6dd4 Catch@105d6dd4

void Catch_105d6dd4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x7c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 105d6de5 Catch@105d6de5

void Catch_105d6de5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALineagePlayerController::Tick_ServerMusic");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d6def Catch@105d6def

void Catch_105d6def(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105d6e03 Catch@105d6e03

void Catch_105d6e03(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALineagePlayerController::Tick_ServerVoice");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d6e0d Catch@105d6e0d

void Catch_105d6e0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0x8c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x58,&DAT_10914c48);
}


// ==== 105d6e24 Catch@105d6e24

void Catch_105d6e24(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108d1420);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d6e2e Catch@105d6e2e

void Catch_105d6e2e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x94);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 105d6e45 Catch@105d6e45

void Catch_105d6e45(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108d141c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d6e4f Catch@105d6e4f

void Catch_105d6e4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_10914c48);
}


// ==== 105d6e63 Catch@105d6e63

void Catch_105d6e63(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108d1418);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d6e6d Catch@105d6e6d

void Catch_105d6e6d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x88);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 105d6e84 Catch@105d6e84

void Catch_105d6e84(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108d1414);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d6e8e Catch@105d6e8e

void Catch_105d6e8e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + -0x78);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x60,&DAT_10914c48);
}


// ==== 105d6ea2 Catch@105d6ea2

void Catch_105d6ea2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,&DAT_108d1410);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d6eac Catch@105d6eac

void Catch_105d6eac(void)

{
  undefined4 *unaff_EBP;
  
  *unaff_EBP = unaff_EBP[-0x26];
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP,&DAT_10914c48);
}


// ==== 105d6ec3 Catch@105d6ec3

void Catch_105d6ec3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALineagePlayerController::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d7580 FUN_105d7580

undefined4 FUN_105d7580(float param_1,ELevelTick param_2)

{
  UL2NEnvManager *this;
  int *piVar1;
  float fVar2;
  undefined1 *puVar3;
  int iVar4;
  AZoneInfo *pAVar5;
  float *pfVar6;
  undefined4 *puVar7;
  AActor *in_ECX;
  int iVar8;
  double dVar9;
  FRotator local_70 [12];
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_38;
  float local_34;
  undefined8 local_30;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108204a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff6c;
  iVar8 = 0;
  local_8 = 0;
  iVar4 = **(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x54) + 0x38);
  ExceptionList = &local_10;
  puVar3 = &stack0xffffff6c;
  if (*(int *)(iVar4 + 0x3c) != 0) {
    ExceptionList = &local_10;
    iVar4 = UObject::IsA(*(UObject **)(iVar4 + 0x3c),&ALineagePlayerController::PrivateStaticClass);
    puVar3 = local_14;
    if ((iVar4 != 0) && (*(int *)GIsEditor_exref == 0)) {
      local_28 = *(float *)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x54) +
                                      0x38) + 0x3c);
      local_20 = 0.0;
      local_18 = 1.0;
      this = *(UL2NEnvManager **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c);
      local_1c = (float)*(double *)(this + 0x134);
      UL2NEnvManager::GetSunModifierInfo
                (this,local_1c,(float *)(in_ECX + 0x3c0),(float *)(in_ECX + 0x3c4),&local_20);
      piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c);
      local_1c = (float)*(double *)(piVar1 + 0x4d);
      (**(code **)(*piVar1 + 0xec))(local_1c,&local_18);
      if (*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c) + 0x130) == 3) {
        (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c) + 0xec))();
      }
      iVar4 = 0;
      while( true ) {
        local_24 = iVar8;
        if (*(int *)(*(int *)(*(ULevel **)(in_ECX + 0xe4) + 0xc0) + 0x134) <= iVar8) break;
        pAVar5 = ULevel::GetZoneActor(*(ULevel **)(in_ECX + 0xe4),iVar8);
        if (*(int *)(pAVar5 + 0x3bc) != 0) {
          iVar4 = thunk_FUN_105d2c00();
          break;
        }
        iVar8 = iVar8 + 1;
      }
      if (iVar4 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      *(undefined4 *)(in_ECX + 0x3c8) = 0x428c0000;
      *(undefined4 *)(in_ECX + 0x27c) = 0x3f800000;
      local_38 = *(float *)(in_ECX + 0x3cc) * local_18 * 8.0;
      local_30 = appSin((double)*(float *)(in_ECX + 0x3c0));
      local_30 = local_30 * (double)*(float *)(in_ECX + 0x3bc);
      dVar9 = appCos((double)*(float *)(in_ECX + 0x3c4));
      local_4c = (float)((float10)dVar9 * (float10)local_30);
      local_30 = appSin((double)*(float *)(in_ECX + 0x3c0));
      local_30 = local_30 * (double)*(float *)(in_ECX + 0x3bc);
      dVar9 = appSin((double)*(float *)(in_ECX + 0x3c4));
      local_48 = (float)((float10)dVar9 * (float10)local_30);
      dVar9 = appCos((double)*(float *)(in_ECX + 0x3c0));
      local_44 = (float)dVar9 * *(float *)(in_ECX + 0x3bc);
      local_1c = *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c) + 0x174);
      if (DAT_10c51050 != 0) {
        local_1c = local_1c * -1.0;
      }
      local_58 = 0x3f800000;
      local_54 = 0;
      local_50 = 0;
      iVar8 = FUN_107a6660();
      pfVar6 = (float *)FVector::RotateAngleAxis
                                  ((FVector *)&local_4c,(int)&local_64,
                                   (FVector *)((iVar8 * 0x8000) / 0xb4 & 0xffff));
      local_4c = *pfVar6;
      local_48 = pfVar6[1];
      local_44 = pfVar6[2];
      local_1c = *(float *)GL2StaticMeshCR_exref * 32768.0 * 0.0625;
      local_30 = appSin((double)*(float *)(in_ECX + 0x3c0));
      local_30 = local_30 * (double)local_1c;
      dVar9 = appCos((double)*(float *)(in_ECX + 0x3c4));
      fVar2 = local_28;
      *(float *)(in_ECX + 0x3d4) =
           (float)((float10)dVar9 * (float10)local_30 + (float10)*(float *)((int)local_28 + 0x1bc));
      local_30 = appSin((double)*(float *)(in_ECX + 0x3c0));
      local_30 = local_30 * (double)local_1c;
      dVar9 = appSin((double)*(float *)(in_ECX + 0x3c4));
      *(float *)(in_ECX + 0x3d8) =
           (float)((float10)dVar9 * (float10)local_30 + (float10)*(float *)((int)fVar2 + 0x1c0));
      dVar9 = appCos((double)*(float *)(in_ECX + 0x3c0));
      *(float *)(in_ECX + 0x3dc) = (float)dVar9 * local_1c + *(float *)((int)fVar2 + 0x1c4);
      FVector::Rotation((FVector *)&local_4c);
      FRotator::Vector((FRotator *)(in_ECX + 0x1c8));
      FRotator::Vector(local_70);
      *(float *)(in_ECX + 0x1bc) = local_4c;
      *(float *)(in_ECX + 0x1c0) = local_48;
      *(float *)(in_ECX + 0x1c4) = local_44;
      *(float *)(in_ECX + 0x1bc) = *(float *)(iVar4 + 0x1bc) + *(float *)(in_ECX + 0x1bc);
      *(float *)(in_ECX + 0x1c0) = *(float *)(iVar4 + 0x1c0) + *(float *)(in_ECX + 0x1c0);
      *(float *)(in_ECX + 0x1c4) = *(float *)(iVar4 + 0x1c4) + *(float *)(in_ECX + 0x1c4);
      local_64 = local_4c * -1.0;
      local_60 = local_48 * -1.0;
      local_5c = local_44 * -1.0;
      local_30 = (double)CONCAT44(local_5c,(undefined4)local_30);
      local_28 = local_64;
      local_1c = local_60;
      puVar7 = (undefined4 *)FVector::Rotation((FVector *)&local_64);
      *(undefined4 *)(in_ECX + 0x1c8) = *puVar7;
      *(undefined4 *)(in_ECX + 0x1cc) = puVar7[1];
      *(undefined4 *)(in_ECX + 0x1d0) = puVar7[2];
      FVector::Normalize((FVector *)&local_4c);
      local_34 = local_4c * -1.0;
      local_28 = local_48 * -1.0;
      local_1c = local_44 * -1.0;
      local_30 = (double)CONCAT44(local_1c,local_28);
      iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c);
      *(float *)(iVar4 + 0x148) = local_34;
      *(float *)(iVar4 + 0x14c) = local_28;
      *(float *)(iVar4 + 0x150) = local_1c;
      *(float *)(in_ECX + 0x27c) = *(float *)(in_ECX + 0x27c) * local_38;
      puVar3 = local_14;
    }
  }
  local_14 = puVar3;
  AActor::Tick(in_ECX,param_1,param_2);
  ExceptionList = local_10;
  return 1;
}


// ==== 105d7a0b Catch@105d7a0b

void Catch_105d7a0b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 105d7a1f Catch@105d7a1f

void Catch_105d7a1f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANSun::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d7b70 FUN_105d7b70

undefined4 FUN_105d7b70(float param_1,ELevelTick param_2)

{
  UL2NEnvManager *this;
  int *piVar1;
  float fVar2;
  undefined1 *puVar3;
  int iVar4;
  AZoneInfo *pAVar5;
  float *pfVar6;
  undefined4 *puVar7;
  AActor *in_ECX;
  int iVar8;
  double dVar9;
  FRotator local_70 [12];
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c [2];
  float local_34;
  float local_30;
  undefined8 local_2c;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108204b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff6c;
  iVar8 = 0;
  local_8 = 0;
  iVar4 = **(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x54) + 0x38);
  ExceptionList = &local_10;
  puVar3 = &stack0xffffff6c;
  if (*(int *)(iVar4 + 0x3c) != 0) {
    ExceptionList = &local_10;
    iVar4 = UObject::IsA(*(UObject **)(iVar4 + 0x3c),&ALineagePlayerController::PrivateStaticClass);
    puVar3 = local_14;
    if ((iVar4 != 0) && (*(int *)GIsEditor_exref == 0)) {
      local_24 = *(float *)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x54) +
                                      0x38) + 0x3c);
      local_18 = 1.0;
      this = *(UL2NEnvManager **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c);
      local_1c = (float)*(double *)(this + 0x134);
      UL2NEnvManager::GetMoonModifierInfo
                (this,local_1c,(float *)(in_ECX + 0x3c0),(float *)(in_ECX + 0x3c4),local_3c);
      piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c);
      local_1c = (float)*(double *)(piVar1 + 0x4d);
      (**(code **)(*piVar1 + 0xf0))(local_1c,&local_18);
      if (*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c) + 0x130) != 3) {
        (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c) + 0xf0))();
      }
      iVar4 = 0;
      while( true ) {
        local_20 = iVar8;
        if (*(int *)(*(int *)(*(ULevel **)(in_ECX + 0xe4) + 0xc0) + 0x134) <= iVar8) break;
        pAVar5 = ULevel::GetZoneActor(*(ULevel **)(in_ECX + 0xe4),iVar8);
        if (*(int *)(pAVar5 + 0x3bc) != 0) {
          iVar4 = thunk_FUN_105d2c00();
          break;
        }
        iVar8 = iVar8 + 1;
      }
      if (iVar4 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      *(undefined4 *)(in_ECX + 0x3c8) = 0x428c0000;
      *(undefined4 *)(in_ECX + 0x27c) = 0x3f800000;
      local_34 = *(float *)(in_ECX + 0x3cc) * local_18;
      local_2c = appSin((double)*(float *)(in_ECX + 0x3c0));
      local_2c = local_2c * (double)*(float *)(in_ECX + 0x3bc);
      dVar9 = appCos((double)*(float *)(in_ECX + 0x3c4));
      local_4c = (float)((float10)dVar9 * (float10)local_2c);
      local_2c = appSin((double)*(float *)(in_ECX + 0x3c0));
      local_2c = local_2c * (double)*(float *)(in_ECX + 0x3bc);
      dVar9 = appSin((double)*(float *)(in_ECX + 0x3c4));
      local_48 = (float)((float10)dVar9 * (float10)local_2c);
      dVar9 = appCos((double)*(float *)(in_ECX + 0x3c0));
      local_44 = (float)dVar9 * *(float *)(in_ECX + 0x3bc);
      local_1c = *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c) + 0x174);
      if (DAT_10c51050 != 0) {
        local_1c = local_1c * -1.0;
      }
      local_58 = 0x3f800000;
      local_54 = 0;
      local_50 = 0;
      iVar8 = FUN_107a6660();
      pfVar6 = (float *)FVector::RotateAngleAxis
                                  ((FVector *)&local_4c,(int)&local_64,
                                   (FVector *)((iVar8 * 0x8000) / 0xb4 & 0xffff));
      local_4c = *pfVar6;
      local_48 = pfVar6[1];
      local_44 = pfVar6[2];
      local_1c = *(float *)GL2StaticMeshCR_exref * 32768.0 * 0.0625;
      local_2c = appSin((double)*(float *)(in_ECX + 0x3c0));
      local_2c = local_2c * (double)local_1c;
      dVar9 = appCos((double)*(float *)(in_ECX + 0x3c4));
      fVar2 = local_24;
      *(float *)(in_ECX + 0x3d4) =
           (float)((float10)dVar9 * (float10)local_2c + (float10)*(float *)((int)local_24 + 0x1bc));
      local_2c = appSin((double)*(float *)(in_ECX + 0x3c0));
      local_2c = local_2c * (double)local_1c;
      dVar9 = appSin((double)*(float *)(in_ECX + 0x3c4));
      *(float *)(in_ECX + 0x3d8) =
           (float)((float10)dVar9 * (float10)local_2c + (float10)*(float *)((int)fVar2 + 0x1c0));
      dVar9 = appCos((double)*(float *)(in_ECX + 0x3c0));
      *(float *)(in_ECX + 0x3dc) = (float)dVar9 * local_1c + *(float *)((int)fVar2 + 0x1c4);
      FVector::Rotation((FVector *)&local_4c);
      FRotator::Vector((FRotator *)(in_ECX + 0x1c8));
      FRotator::Vector(local_70);
      *(float *)(in_ECX + 0x1bc) = local_4c;
      *(float *)(in_ECX + 0x1c0) = local_48;
      *(float *)(in_ECX + 0x1c4) = local_44;
      *(float *)(in_ECX + 0x1bc) = *(float *)(iVar4 + 0x1bc) + *(float *)(in_ECX + 0x1bc);
      *(float *)(in_ECX + 0x1c0) = *(float *)(iVar4 + 0x1c0) + *(float *)(in_ECX + 0x1c0);
      *(float *)(in_ECX + 0x1c4) = *(float *)(iVar4 + 0x1c4) + *(float *)(in_ECX + 0x1c4);
      local_64 = local_4c * -1.0;
      local_60 = local_48 * -1.0;
      local_5c = local_44 * -1.0;
      local_2c = (double)CONCAT44(local_5c,(undefined4)local_2c);
      local_24 = local_64;
      local_1c = local_60;
      puVar7 = (undefined4 *)FVector::Rotation((FVector *)&local_64);
      *(undefined4 *)(in_ECX + 0x1c8) = *puVar7;
      *(undefined4 *)(in_ECX + 0x1cc) = puVar7[1];
      *(undefined4 *)(in_ECX + 0x1d0) = puVar7[2];
      FVector::Normalize((FVector *)&local_4c);
      local_30 = local_4c * -1.0;
      local_24 = local_48 * -1.0;
      local_1c = local_44 * -1.0;
      local_2c = (double)CONCAT44(local_1c,local_24);
      iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c);
      *(float *)(iVar4 + 0x154) = local_30;
      *(float *)(iVar4 + 0x158) = local_24;
      *(float *)(iVar4 + 0x15c) = local_1c;
      *(float *)(in_ECX + 0x27c) = *(float *)(in_ECX + 0x27c) * local_34;
      puVar3 = local_14;
    }
  }
  local_14 = puVar3;
  AActor::Tick(in_ECX,param_1,param_2);
  ExceptionList = local_10;
  return 1;
}


// ==== 105d7fec Catch@105d7fec

void Catch_105d7fec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 105d8000 Catch@105d8000

void Catch_105d8000(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANMoon::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d8150 FUN_105d8150

undefined4 FUN_105d8150(float param_1,ELevelTick param_2)

{
  UL2NEnvManager *this;
  float fVar1;
  AZoneInfo *pAVar2;
  float *pfVar3;
  undefined4 *puVar4;
  AActor *in_ECX;
  int iVar5;
  double dVar6;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_38;
  undefined8 local_34;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108204c0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  this = *(UL2NEnvManager **)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c);
  fVar1 = (float)*(double *)(this + 0x134);
  if (*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c) + 0x130) == 3) {
    ExceptionList = &local_10;
    local_24 = fVar1;
    UL2NEnvManager::GetMoonModifierInfo(this,fVar1,&local_18,&local_1c,&local_24);
  }
  else {
    ExceptionList = &local_10;
    local_20 = fVar1;
    local_14 = &stack0xffffff9c;
    UL2NEnvManager::GetSunModifierInfo(this,fVar1,&local_18,&local_1c,&local_24);
  }
  iVar5 = 0;
  do {
    local_28 = iVar5;
    if (*(int *)(*(int *)(*(ULevel **)(in_ECX + 0xe4) + 0xc0) + 0x134) <= iVar5) {
LAB_105d8201:
      local_34 = appSin((double)local_18);
      dVar6 = appCos((double)local_1c);
      local_4c = (float)((float10)dVar6 * (float10)local_34);
      local_34 = appSin((double)local_18);
      dVar6 = appSin((double)local_1c);
      local_48 = (float)((float10)dVar6 * (float10)local_34);
      dVar6 = appCos((double)local_18);
      local_44 = (float)dVar6;
      local_20 = *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x6c) + 0x174);
      if (DAT_10c51050 != 0) {
        local_20 = local_20 * -1.0;
      }
      local_38 = 0x3f800000;
      local_34 = 0.0;
      iVar5 = FUN_107a6660();
      pfVar3 = (float *)FVector::RotateAngleAxis
                                  ((FVector *)&local_4c,(int)&local_58,
                                   (FVector *)((iVar5 * 0x8000) / 0xb4 & 0xffff));
      local_4c = *pfVar3;
      local_48 = pfVar3[1];
      local_44 = pfVar3[2];
      local_58 = local_4c * -1.0;
      local_54 = local_48 * -1.0;
      local_50 = local_44 * -1.0;
      local_34 = (double)CONCAT44(local_50,(undefined4)local_34);
      local_2c = local_54;
      local_20 = local_58;
      puVar4 = (undefined4 *)FVector::Rotation((FVector *)&local_58);
      *(undefined4 *)(in_ECX + 0x1c8) = *puVar4;
      *(undefined4 *)(in_ECX + 0x1cc) = puVar4[1];
      *(undefined4 *)(in_ECX + 0x1d0) = puVar4[2];
      AActor::Tick(in_ECX,param_1,param_2);
      ExceptionList = local_10;
      return 1;
    }
    pAVar2 = ULevel::GetZoneActor(*(ULevel **)(in_ECX + 0xe4),iVar5);
    if (*(int *)(pAVar2 + 0x3bc) != 0) {
      thunk_FUN_105d2c00();
      goto LAB_105d8201;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


// ==== 105d8361 Catch@105d8361

void Catch_105d8361(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 105d8375 Catch@105d8375

void Catch_105d8375(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANMovableSunLight::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d8430 FUN_105d8430

undefined4 FUN_105d8430(AActor *param_1,AActor *param_2,float param_3,float param_4,float param_5)

{
  AActor *pAVar1;
  uchar uVar2;
  int iVar3;
  undefined4 uVar4;
  AActor *in_ECX;
  float fVar5;
  AActor *local_30;
  float local_2c;
  float local_28;
  double local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pAVar1 = param_2;
  puStack_c = &LAB_108204d0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  if ((*(uint *)(in_ECX + 0x74) & 0x1000) == 0) {
    ExceptionList = &local_10;
    iVar3 = AActor::IsOwnedBy(in_ECX,param_2);
    if (iVar3 != 0) {
      ExceptionList = local_10;
      return 1;
    }
    iVar3 = AActor::IsOwnedBy(in_ECX,param_1);
    if (iVar3 != 0) {
      ExceptionList = local_10;
      return 1;
    }
    if (in_ECX == pAVar1) {
      ExceptionList = local_10;
      return 1;
    }
    if (pAVar1 == *(AActor **)(in_ECX + 0xd4)) {
      ExceptionList = local_10;
      return 1;
    }
    if (((*(int *)(in_ECX + 0x3c) != 0) && (*(int *)(in_ECX + 0x40) == *(int *)(in_ECX + 0x3c))) &&
       ((*(uint *)(in_ECX + 100) & 0x800) == 0)) {
LAB_105d84f0:
      uVar4 = (**(code **)(**(int **)(in_ECX + 0x40) + 0x194))
                        (param_1,pAVar1,param_3,param_4,param_5);
      ExceptionList = local_10;
      return uVar4;
    }
    if (*(int *)(in_ECX + 0x40) != 0) {
      FName::FName((FName *)&param_2,0);
      iVar3 = FName::operator!=((FName *)(in_ECX + 0xd8),(FName *)&param_2);
      if ((iVar3 != 0) &&
         (iVar3 = thunk_FUN_104b4270(*(undefined4 *)(*(int *)(in_ECX + 0x40) + 0x104)), iVar3 != 0))
      goto LAB_105d84f0;
    }
    if ((*(byte *)(*(int *)(in_ECX + 0xec) + 0x3d8) & 2) != 0) {
      param_2 = (AActor *)(*(float *)(in_ECX + 0x1bc) - param_3);
      local_2c = *(float *)(in_ECX + 0x1c0) - param_4;
      local_28 = *(float *)(in_ECX + 0x1c4) - param_5;
      local_1c = (double)*(float *)(*(int *)(in_ECX + 0xec) + 0x400);
      local_30 = param_2;
      fVar5 = FVector::SizeSquared((FVector *)&local_30);
      if (local_1c * local_1c < (double)fVar5) {
        ExceptionList = local_10;
        return 0;
      }
    }
    uVar2 = UModel::FastLineCheck
                      (*(UModel **)(*(int *)(in_ECX + 0xe4) + 0xc0),*(undefined4 *)(in_ECX + 0x1bc),
                       *(undefined4 *)(in_ECX + 0x1c0),*(undefined4 *)(in_ECX + 0x1c4),param_3,
                       param_4,param_5);
    if (uVar2 == '\0') {
      ExceptionList = local_10;
      return 0;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105d8605 Catch@105d8605

void Catch_105d8605(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105d8619 Catch@105d8619

void Catch_105d8619(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::IsNetRelevantFor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d86c0 FUN_105d86c0

int FUN_105d86c0(UNetConnection *param_1)

{
  FRotator *this;
  UObject *this_00;
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 *puVar5;
  float fVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  UClass *pUVar10;
  UChannel *this_01;
  int in_ECX;
  float10 fVar11;
  undefined1 *puVar12;
  undefined1 local_118 [8];
  float local_110;
  float local_10c;
  float local_108;
  int local_cc;
  UChannel *local_c8;
  int local_b8;
  int local_b4;
  int local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  double local_90;
  FMemMark local_88 [12];
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  double local_6c;
  undefined1 local_64 [12];
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int *local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 *local_14;
  float local_10;
  int local_c;
  float local_8;
  
  puStack_74 = &LAB_108204e0;
  local_78 = ExceptionList;
  local_7c = &stack0xfffffedc;
  local_70 = 0;
  ExceptionList = &local_78;
  puVar12 = &stack0xfffffedc;
  local_c = in_ECX;
  if (param_1 == (UNetConnection *)0x0) {
    ExceptionList = &local_78;
    appFailAssert("Connection",".\\UnLevTic.cpp",0xa73);
    puVar12 = local_7c;
  }
  local_7c = puVar12;
  iVar1 = *(int *)(param_1 + 0x78);
  if (((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 1)) {
    appFailAssert("Connection->State==USOCK_Pending || Connection->State==USOCK_Open || Connection->State==USOCK_Closed"
                  ,".\\UnLevTic.cpp",0xa74);
  }
  local_48 = 0;
  if (((*(int *)(param_1 + 0x3c) != 0) &&
      (iVar1 = (**(code **)(*(int *)param_1 + 0x8c))(0), iVar1 != 0)) &&
     ((*(int *)(param_1 + 0x78) == 3 &&
      (*(double *)(*(int *)(param_1 + 0x74) + 0x50) - *(double *)(param_1 + 0x104) < 1.5)))) {
    rdtsc();
    FMemMark::FMemMark(local_88,(FMemStack *)GMem_exref);
    *(int *)(in_ECX + 0x140) = *(int *)(in_ECX + 0x140) + 1;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
    for (local_cc = 0; local_cc < *(int *)(param_1 + 0x3ec8); local_cc = local_cc + 1) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3ec4) + local_cc * 4) + 0xc4) =
           *(undefined4 *)(in_ECX + 0x140);
    }
    local_70 = 0;
    local_28 = (int *)(**(code **)(**(int **)(param_1 + 0x3c) + 0x340))();
    local_40 = *(int **)(param_1 + 0x3c);
    local_20 = (float)local_28[0x6f];
    local_1c = (float)local_28[0x70];
    local_18 = (float)local_28[0x71];
    this = (FRotator *)(local_40 + 0x72);
    local_54 = *(undefined4 *)this;
    local_50 = local_40[0x73];
    local_4c = local_40[0x74];
    (**(code **)(*local_40 + 0x36c))(local_28,&local_20,&local_54);
    piVar9 = local_28;
    local_3c = 0.0;
    if ((*(uint *)(param_1 + 0x128) & 1) != 0) {
      if ((*(uint *)(param_1 + 0x128) & 2) == 0) {
        local_14 = (undefined4 *)0x3f666666;
      }
      else {
        local_14 = (undefined4 *)0x3ecccccd;
      }
      pfVar2 = (float *)thunk_FUN_103301a0(&local_b8,local_14,local_28 + 0x75);
      local_3c = *pfVar2;
      local_38 = pfVar2[1];
      local_34 = pfVar2[2];
      if (piVar9[0x10] != 0) {
        pfVar2 = (float *)thunk_FUN_103301a0(&local_b8,local_14,piVar9[0x10] + 0x1d4);
        local_3c = *pfVar2 + local_3c;
        local_38 = pfVar2[1] + local_38;
        local_34 = pfVar2[2] + local_34;
      }
      thunk_FUN_104419f0(0x3f800000,0);
      local_110 = local_20 + local_3c;
      local_10c = local_1c + local_38;
      local_108 = local_18 + local_34;
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      local_ac = local_110;
      local_a8 = local_10c;
      local_a4 = local_108;
      local_14 = (undefined4 *)local_110;
      local_10 = local_10c;
      local_8 = local_108;
      (**(code **)(**(int **)(local_28[0x39] + 0xc0) + 0x6c))
                (local_118,0,local_110,local_10c,local_108,local_20,local_1c,local_18,0,0,0,4,0);
      local_20 = local_110;
      local_1c = local_10c;
      local_18 = local_108;
      in_ECX = local_c;
    }
    local_24 = 0;
    local_14 = (undefined4 *)
               thunk_FUN_10522300(0xc,GMem_exref,
                                  (*(int *)(in_ECX + 0x3c) - *(int *)(in_ECX + 0x13c)) + 2,8);
    puVar3 = (undefined4 *)
             thunk_FUN_10522300(4,GMem_exref,
                                (*(int *)(in_ECX + 0x3c) - *(int *)(in_ECX + 0x13c)) + 2,8);
    local_b8 = local_28[0x6f];
    local_b4 = local_28[0x70];
    local_b0 = local_28[0x71];
    puVar12 = local_64;
    FRotator::Vector(this);
    local_90 = *(double *)(param_1 + 0x11c);
    local_6c = *(double *)(*(int *)(param_1 + 0x74) + 0x50);
    local_70 = CONCAT31(local_70._1_3_,3);
    fVar6 = **(float **)(in_ECX + 0x38);
    local_10 = fVar6;
    if (((fVar6 != 0.0) && (*(char *)((int)fVar6 + 0xc1) != '\0')) &&
       (*(int *)((int)fVar6 + 0xc4) != *(int *)(in_ECX + 0x140))) {
      local_8 = (float)local_90 * *(float *)((int)fVar6 + 0xcc);
      local_8 = (float)appRound(local_8);
      fVar4 = (float)appRound(*(float *)((int)fVar6 + 0xcc) * (float)local_6c);
      in_ECX = local_c;
      if (local_8 != fVar4) {
        iVar1 = thunk_FUN_105d2b00(&local_10);
        in_ECX = local_c;
        if (((((*(uint *)((int)fVar6 + 0x74) & 0x40000) == 0) || (iVar1 == 0)) ||
            (*(int *)(iVar1 + 0xa8) == 0)) ||
           ((*(int *)(iVar1 + 0xc0) != 0 || (*(int *)(iVar1 + 0x98) != 0)))) {
          *(undefined4 *)((int)fVar6 + 0xc4) = *(undefined4 *)(local_c + 0x140);
          puVar5 = (undefined4 *)thunk_FUN_105d0e70(&local_b8,local_64,param_1,iVar1,fVar6);
          *local_14 = *puVar5;
          local_14[1] = puVar5[1];
          local_14[2] = puVar5[2];
          *puVar3 = local_14;
          local_24 = 1;
        }
        else {
          *(undefined8 *)(iVar1 + 0x7c) = *(undefined8 *)(*(int *)(local_c + 0x70) + 0x50);
        }
      }
      local_90 = local_90 + 0.023000000044703484;
      local_6c = local_6c + 0.023000000044703484;
    }
    fVar11 = (float10)(**(code **)(**(int **)(in_ECX + 0x74) + 0xa8))(puVar12);
    local_8 = (float)fVar11;
    fVar11 = (float10)local_90;
    for (local_30 = *(int *)(in_ECX + 0x13c); local_30 < *(int *)(in_ECX + 0x3c);
        local_30 = local_30 + 1) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x38) + local_30 * 4);
      local_58 = iVar1;
      if ((((iVar1 != 0) && (*(char *)(iVar1 + 0xc1) != '\0')) &&
          (*(int *)(iVar1 + 0xc4) != *(int *)(in_ECX + 0x140))) &&
         (((((*(uint *)(iVar1 + 0x74) & 0x1000) != 0 || ((*(uint *)(iVar1 + 0x74) & 0x400) == 0)) ||
           (*(int **)(iVar1 + 0x3c) == local_28)) || (*(int **)(iVar1 + 0x3c) == local_40)))) {
        if (local_8 < *(float *)(iVar1 + 0xcc) == (local_8 == *(float *)(iVar1 + 0xcc))) {
          local_10 = (float)(fVar11 * (float10)*(float *)(iVar1 + 0xcc));
          local_10 = (float)appRound(local_10);
          fVar6 = (float)appRound(*(float *)(iVar1 + 0xcc) * (float)local_6c);
          in_ECX = local_c;
          if (local_10 != fVar6) goto LAB_105d8c24;
        }
        else {
LAB_105d8c24:
          iVar7 = thunk_FUN_105d2b00(&local_58);
          if ((((*(uint *)(iVar1 + 0x74) & 0x40000) == 0) || (iVar7 == 0)) ||
             ((*(int *)(iVar7 + 0xa8) == 0 ||
              ((*(int *)(iVar7 + 0xc0) != 0 || (*(int *)(iVar7 + 0x98) != 0)))))) {
            *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(in_ECX + 0x140);
            puVar8 = (undefined4 *)thunk_FUN_105d0e70(&local_b8,local_64,param_1,iVar7,iVar1);
            puVar5 = local_14 + local_24 * 3;
            *puVar5 = *puVar8;
            puVar5[1] = puVar8[1];
            puVar5[2] = puVar8[2];
            puVar3[local_24] = puVar5;
            local_24 = local_24 + 1;
          }
          else {
            *(undefined8 *)(iVar7 + 0x7c) = *(undefined8 *)(*(int *)(in_ECX + 0x70) + 0x50);
          }
        }
        fVar11 = (float10)local_90 + (float10)0.023000000044703484;
        local_90 = (double)fVar11;
        local_6c = (double)((float10)local_6c + (float10)0.023000000044703484);
      }
    }
    *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(*(int *)(param_1 + 0x74) + 0x50);
    rdtsc();
    rdtsc();
    local_70 = 5;
    thunk_FUN_105d2c30(puVar3,local_24);
    local_70 = 7;
    for (local_44 = 0; local_44 < local_24; local_44 = local_44 + 1) {
      this_01 = *(UChannel **)(puVar3[local_44] + 8);
      local_c8 = this_01;
      if ((this_01 == (UChannel *)0x0) || (*(int *)(this_01 + 0x74) != 0)) {
        this_00 = *(UObject **)(puVar3[local_44] + 4);
        local_94 = 0;
        if (((*(uint *)(this_00 + 0x74) & 0x20000) != 0) ||
           (((this_01 != (UChannel *)0x0 &&
             (*(double *)(*(int *)(local_c + 0x70) + 0x50) - *(double *)(this_01 + 0x7c) <= 1.0)) ||
            (local_94 = (**(code **)(*(int *)this_00 + 0x194))
                                  (local_40,local_28,local_20,local_1c,local_18), local_94 == 0))))
        {
          if (this_01 != (UChannel *)0x0) {
            if (*(double *)(*(int *)(local_c + 0x70) + 0x50) - *(double *)(this_01 + 0x7c) <
                (double)*(float *)(*(int *)(local_c + 0x70) + 100)) goto LAB_105d8e6f;
            (**(code **)(*(int *)this_01 + 0x70))();
            iVar1 = thunk_FUN_104b4270(*(undefined4 *)(this_00 + 0x104));
            if (iVar1 != 0) {
              for (local_2c = 0; local_2c < *(int *)(this_00 + 500); local_2c = local_2c + 1) {
                iVar1 = local_2c * 4;
                if ((*(int *)(*(int *)(this_00 + 0x1f0) + iVar1) != 0) &&
                   ((*(uint *)(*(int *)(*(int *)(this_00 + 0x1f0) + iVar1) + 0x74) & 0x1000) == 0))
                {
                  FName::FName((FName *)&local_58,0);
                  iVar7 = FName::operator!=((FName *)(*(int *)(*(int *)(this_00 + 0x1f0) + iVar1) +
                                                     0xd8),(FName *)&local_58);
                  if ((iVar7 != 0) &&
                     (piVar9 = (int *)thunk_FUN_105d2b00(*(int *)(this_00 + 0x1f0) + iVar1),
                     piVar9 != (int *)0x0)) {
                    (**(code **)(*piVar9 + 0x70))();
                  }
                }
              }
            }
          }
        }
        else {
LAB_105d8e6f:
          piVar9 = (int *)(DAT_10ddd7e0 + DAT_10dddb7c * 4);
          *piVar9 = *piVar9 + 1;
          if (this_01 == (UChannel *)0x0) {
            iVar1 = **(int **)(param_1 + 0xc0);
            pUVar10 = UObject::GetClass(this_00);
            iVar1 = (**(code **)(iVar1 + 0x74))(pUVar10);
            if ((iVar1 == -1) ||
               (this_01 = UNetConnection::CreateChannel(param_1,2,1,-1), local_c8 = this_01,
               this_01 == (UChannel *)0x0)) goto LAB_105d8f1d;
            UActorChannel::SetChannelActor((UActorChannel *)this_01,(AActor *)this_00);
          }
          iVar1 = (**(code **)(*(int *)param_1 + 0x8c))(0);
          if (iVar1 == 0) break;
          if (local_94 != 0) {
            fVar6 = appFrand();
            *(double *)(this_01 + 0x7c) =
                 (double)(fVar6 * 0.5 + (float)*(double *)(*(int *)(local_c + 0x70) + 0x50));
          }
          iVar1 = UChannel::IsNetReady(this_01,0);
          if (iVar1 != 0) {
            UActorChannel::ReplicateActor((UActorChannel *)this_01);
            local_48 = local_48 + 1;
          }
          iVar1 = (**(code **)(*(int *)param_1 + 0x8c))(0);
          if (iVar1 == 0) break;
        }
      }
LAB_105d8f1d:
    }
    local_70 = 0;
    FMemMark::Pop(local_88);
    rdtsc();
  }
  ExceptionList = local_78;
  return local_48;
}


// ==== 105d8f56 Catch@105d8f56

void Catch_105d8f56(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + -0x6c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x68,&DAT_10914c48);
}


// ==== 105d8f6a Catch@105d8f6a

void Catch_105d8f6a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UpdateRelevant");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d8f86 Catch@105d8f86

void Catch_105d8f86(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + -0x7c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -100,&DAT_10914c48);
}


// ==== 105d8f9a Catch@105d8f9a

void Catch_105d8f9a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SortConsiderList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d8fa1 Catch@105d8fa1

void Catch_105d8fa1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_10914c48);
}


// ==== 105d8fb2 Catch@105d8fb2

void Catch_105d8fb2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"MakeConsiderList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d8fb9 Catch@105d8fb9

void Catch_105d8fb9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x78);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x54,&DAT_10914c48);
}


// ==== 105d8fca Catch@105d8fca

void Catch_105d8fca(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SkipSentTemporaries");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d8fd1 Catch@105d8fd1

void Catch_105d8fd1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0x74);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x58,&DAT_10914c48);
}


// ==== 105d8fe2 Catch@105d8fe2

void Catch_105d8fe2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::ServerTickClient");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d9240 FUN_105d9240

void FUN_105d9240(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x3c) != 0) && (*(int *)(in_ECX + 0x78) == 3)) {
    iVar1 = thunk_FUN_105d2b00(&stack0x00000004);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x98) = 1;
    }
  }
  return;
}


// ==== 105d9280 FUN_105d9280

void FUN_105d9280(void)

{
  int *piVar1;
  AActor *pAVar2;
  uint uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined1 *puVar7;
  int iVar8;
  ALevelInfo *pAVar9;
  ushort *puVar10;
  ULevel *in_ECX;
  int iVar11;
  float10 fVar12;
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [16];
  undefined1 *local_3c;
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
  
  puStack_c = &LAB_10820514;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff84;
  local_8 = 0;
  local_18 = 0;
  pAVar2 = (AActor *)**(undefined4 **)(in_ECX + 0x38);
  ExceptionList = &local_10;
  puVar7 = &stack0xffffff84;
  if ((pAVar2 != (AActor *)0x0) &&
     (ExceptionList = &local_10, puVar7 = &stack0xffffff84, (*(uint *)(pAVar2 + 0x74) & 0x800) != 0)
     ) {
    iVar11 = *(int *)(*(int *)(in_ECX + 0x70) + 0x3c);
    ExceptionList = &local_10;
    while( true ) {
      iVar11 = iVar11 + -1;
      local_28 = iVar11;
      if (iVar11 < 0) break;
      UNetConnection::SetActorDirty
                (*(UNetConnection **)(*(int *)(*(int *)(in_ECX + 0x70) + 0x38) + iVar11 * 4),pAVar2)
      ;
    }
    *(uint *)(pAVar2 + 0x74) = *(uint *)(pAVar2 + 0x74) & 0xfffff7ff;
    puVar7 = local_14;
  }
  local_14 = puVar7;
  for (local_20 = *(int *)(in_ECX + 0x13c); local_20 < *(int *)(in_ECX + 0x3c);
      local_20 = local_20 + 1) {
    pAVar2 = *(AActor **)(*(int *)(in_ECX + 0x38) + local_20 * 4);
    if ((pAVar2 != (AActor *)0x0) && ((*(uint *)(pAVar2 + 0x74) & 0x800) != 0)) {
      iVar11 = *(int *)(*(int *)(in_ECX + 0x70) + 0x3c);
      while( true ) {
        iVar11 = iVar11 + -1;
        local_2c = iVar11;
        if (iVar11 < 0) break;
        UNetConnection::SetActorDirty
                  (*(UNetConnection **)(*(int *)(*(int *)(in_ECX + 0x70) + 0x38) + iVar11 * 4),
                   pAVar2);
      }
      *(uint *)(pAVar2 + 0x74) = *(uint *)(pAVar2 + 0x74) & 0xfffff7ff;
    }
  }
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddaf8 * 4);
  uVar4 = rdtsc();
  *piVar1 = *piVar1 - (int)uVar4;
  iVar11 = *(int *)(*(int *)(in_ECX + 0x70) + 0x3c);
  while( true ) {
    iVar11 = iVar11 + -1;
    local_30 = iVar11;
    if (iVar11 < 0) break;
    iVar8 = (**(code **)(*(int *)in_ECX + 0x80))
                      (*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x70) + 0x38) + iVar11 * 4));
    local_18 = local_18 + iVar8;
  }
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddaf8 * 4);
  uVar4 = rdtsc();
  *piVar1 = *piVar1 + (int)uVar4 + -0xc;
  iVar11 = FUN_107a6660();
  iVar8 = FUN_107a6660();
  if ((iVar11 != iVar8) && (*(int *)GLog_exref != 0)) {
    FString::operator*((FString *)(in_ECX + 0x94));
    pAVar9 = ULevel::GetLevelInfo(in_ECX);
    FString::operator*((FString *)(pAVar9 + 0x500));
    LocalizeProgress((ushort *)L"RunningNet",(ushort *)L"Engine",(ushort *)0x0);
    FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x314);
  }
  if (local_18 != 0) {
    iVar11 = 0;
    while( true ) {
      if (*(int *)(*(int *)(in_ECX + 0x70) + 0x3c) <= iVar11) break;
      iVar8 = *(int *)(*(int *)(*(int *)(in_ECX + 0x70) + 0x38) + iVar11 * 4);
      if ((*(int *)(iVar8 + 0x3c) != 0) && (*(int *)(iVar8 + 0x78) == 3)) {
        local_24 = iVar11;
        if ((*(byte *)(iVar8 + 0xdc) & 1) != 0) {
          local_1c = 0;
          for (local_34 = 0; local_34 < *(int *)(in_ECX + 0x3c); local_34 = local_34 + 1) {
            local_1c = local_1c + (uint)(*(int *)(*(int *)(in_ECX + 0x38) + local_34 * 4) != 0);
          }
          uVar3 = *(uint *)(*(int *)(in_ECX + 0x70) + 0x3c);
          dVar6 = (double)*(int *)(DAT_10ddd7e0 + DAT_10dddaf8 * 4);
          if (*(int *)(DAT_10ddd7e0 + DAT_10dddaf8 * 4) < 0) {
            dVar6 = dVar6 + 4294967296.0;
          }
          dVar5 = (double)*(int *)(DAT_10ddd7e0 + DAT_10dddacc * 4);
          if (*(int *)(DAT_10ddd7e0 + DAT_10dddacc * 4) < 0) {
            dVar5 = dVar5 + 4294967296.0;
          }
          fVar12 = (float10)(**(code **)(**(int **)(in_ECX + 0x74) + 0xa8))
                                      (uVar3,dVar5 * *(double *)GSecondsPerCycle_exref * 1000.0,
                                       local_1c,dVar6 * *(double *)GSecondsPerCycle_exref * 1000.0,
                                       *(uint *)(DAT_10ddd7e0 + DAT_10dddb7c * 4) / uVar3,
                                       *(uint *)(DAT_10ddd7e0 + DAT_10dddb74 * 4) / uVar3);
          iVar11 = appRound((float)fVar12);
          FString::Printf((ushort *)local_58,
                          L"r=%i cli=%i act=%03.1f (%i) net=%03.1f pv/c=%i rep/c=%i rpc/c=%i",iVar11
                         );
          local_8._0_1_ = 1;
          puVar10 = FString::operator*(local_58);
          FString::FString(local_4c,puVar10);
          local_8._0_1_ = 2;
          local_3c = &stack0xffffff80;
          FName::FName((FName *)&stack0xffffff80,0);
          APlayerController::eventClientMessage(*(APlayerController **)(iVar8 + 0x3c),local_4c);
          local_8._0_1_ = 1;
          FString::~FString(local_4c);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_58);
        }
        iVar11 = local_24;
        if ((*(byte *)(iVar8 + 0xdc) & 2) != 0) {
          dVar6 = *(double *)GSecondsPerCycle_exref * 1000.0 *
                  (double)*(int *)(*(int *)(iVar8 + 0x74) + 0x8c);
          FString::Printf((ushort *)local_70,L"snd=%02.1f recv=%02.1f",SUB84(dVar6,0),
                          (int)((ulonglong)dVar6 >> 0x20),
                          (double)*(int *)(*(int *)(iVar8 + 0x74) + 0x90) *
                          *(double *)GSecondsPerCycle_exref * 1000.0);
          local_8._0_1_ = 3;
          puVar10 = FString::operator*(local_70);
          FString::FString(local_64,puVar10);
          local_8._0_1_ = 4;
          FName::FName((FName *)&stack0xffffff80,0);
          APlayerController::eventClientMessage(*(APlayerController **)(iVar8 + 0x3c),local_64);
          local_8._0_1_ = 3;
          FString::~FString(local_64);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_70);
        }
      }
      iVar11 = iVar11 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105d9647 Catch@105d9647

void Catch_105d9647(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 105d965b Catch@105d965b

void Catch_105d965b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::TickNetServer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d9780 FUN_105d9780

undefined4 FUN_105d9780(void)

{
  UObject UVar1;
  UNetConnection *this;
  UObject *this_00;
  ALevelInfo *pAVar2;
  int iVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  UChannel *this_01;
  ULevel *in_ECX;
  uint uVar6;
  UObject *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820530;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  this = (UNetConnection *)**(undefined4 **)(*(int *)(in_ECX + 0xbc) + 0x38);
  local_18 = 0;
  ExceptionList = &local_10;
  do {
    if (*(int *)(in_ECX + 0x3c) <= local_18) {
      ExceptionList = local_10;
      return 1;
    }
    this_00 = *(UObject **)(*(int *)(in_ECX + 0x38) + local_18 * 4);
    local_1c = this_00;
    pAVar2 = ULevel::GetLevelInfo(in_ECX);
    uVar6 = (uint)(pAVar2[0x5d4] == (ALevelInfo)0x3);
    if (((this_00 != (UObject *)0x0) &&
        (((this_00[0xc1] != (UObject)0x0 ||
          (((uVar6 != 0 && (this_00[0xc2] != (UObject)0x0)) && (this_00[0xc2] != (UObject)0x4)))) &&
         ((*(int *)(in_ECX + 0x138) <= local_18 ||
          (iVar3 = UObject::IsA(this_00,&AZoneInfo::PrivateStaticClass), iVar3 != 0)))))) &&
       (((*(uint *)(this_00 + 0x74) & 0x200) == 0 ||
        (iVar3 = thunk_FUN_105ca4a0(&local_1c), iVar3 == -1)))) {
      if (((byte)this_00[100] & 0x10) == 0) {
        pUVar4 = UObject::GetClass(this_00);
        pAVar5 = UClass::GetDefaultActor(pUVar4);
        if (((byte)pAVar5[100] & 0x10) != 0) goto LAB_105d999e;
      }
      this_01 = (UChannel *)thunk_FUN_105d2b00(&local_1c);
      if (this_01 == (UChannel *)0x0) {
        iVar3 = **(int **)(this + 0xc0);
        pUVar4 = UObject::GetClass(this_00);
        iVar3 = (**(code **)(iVar3 + 0x74))(pUVar4);
        if (iVar3 != -1) {
          this_01 = UNetConnection::CreateChannel(this,2,1,-1);
          if (this_01 == (UChannel *)0x0) {
            appFailAssert("Channel",".\\UnLevTic.cpp",0xbb5);
          }
          UActorChannel::SetChannelActor((UActorChannel *)this_01,(AActor *)this_00);
          if (this_01 != (UChannel *)0x0) goto LAB_105d98f7;
        }
      }
      else {
LAB_105d98f7:
        if (*(int *)(this_01 + 0x3c) != 0) {
          appFailAssert("!Channel->Closing",".\\UnLevTic.cpp",0xbbb);
        }
        iVar3 = UChannel::IsNetReady(this_01,0);
        if (iVar3 != 0) {
          *(uint *)(this_00 + 0x368) = *(uint *)(this_00 + 0x368) | 8;
          *(uint *)(this_00 + 0x368) =
               (uVar6 << 4 ^ *(uint *)(this_00 + 0x368)) & 0x10 ^ *(uint *)(this_00 + 0x368);
          if (uVar6 != 0) {
            UVar1 = this_00[0xc1];
            this_00[0xc1] = this_00[0xc2];
            this_00[0xc2] = UVar1;
          }
          UActorChannel::ReplicateActor((UActorChannel *)this_01);
          if (uVar6 != 0) {
            UVar1 = this_00[0xc1];
            this_00[0xc1] = this_00[0xc2];
            this_00[0xc2] = UVar1;
          }
          *(uint *)(this_00 + 0x368) = *(uint *)(this_00 + 0x368) & 0xfffffff7;
          *(uint *)(this_00 + 0x368) = *(uint *)(this_00 + 0x368) & 0xffffffef;
        }
      }
    }
LAB_105d999e:
    local_18 = local_18 + 1;
  } while( true );
}


// ==== 105d99c2 Catch@105d99c2

void Catch_105d99c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 105d99d6 Catch@105d99d6

void Catch_105d99d6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::TickDemo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d9a90 FUN_105d9a90

undefined4 FUN_105d9a90(void)

{
  ALevelInfo *pAVar1;
  ULevel *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820540;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pAVar1 = ULevel::GetLevelInfo(in_ECX);
  if ((pAVar1[0x5cc] == (ALevelInfo)0x3) &&
     (*(int *)(*(int *)(*(int *)(in_ECX + 0xbc) + 0x44) + 0x78) != 2)) {
    pAVar1 = ULevel::GetLevelInfo(in_ECX);
    pAVar1[0x5cc] = (ALevelInfo)0x0;
    (**(code **)(**(int **)(in_ECX + 0x74) + 0xac))(&DAT_10853d94,&DAT_10853d94,0);
  }
  if (*(int *)(*(int *)(*(int *)(in_ECX + 0xbc) + 0x44) + 0x78) == 1) {
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0x74) + 0x54) + 0x3c) == 0) {
      appFailAssert("Engine->Client->Viewports.Num()",".\\UnLevTic.cpp",0xbdb);
    }
    (**(code **)(**(int **)(in_ECX + 0x74) + 0xa0))
              (**(undefined4 **)((*(int **)(in_ECX + 0x74))[0x15] + 0x38),L"?entry",0,0);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105d9b6e Catch@105d9b6e

void Catch_105d9b6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105d9b82 Catch@105d9b82

void Catch_105d9b82(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::TickDemoPlayback");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105d9bf0 FUN_105d9bf0

undefined4 FUN_105d9bf0(void)

{
  float fVar1;
  int in_ECX;
  
  if (**(int **)(in_ECX + 0x38) == 0) {
    appFailAssert("Actors(0)","d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnLevel.h"
                  ,0x203);
  }
  if (*(int *)(**(int **)(in_ECX + 0x38) + 0x530) != 0) {
    if (**(int **)(in_ECX + 0x38) == 0) {
      appFailAssert("Actors(0)",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnLevel.h",0x203);
    }
    fVar1 = *(float *)(**(int **)(in_ECX + 0x38) + 0x4e0);
    if (fVar1 < (float)*(double *)(in_ECX + 0x104) != (fVar1 == (float)*(double *)(in_ECX + 0x104)))
    {
      return 1;
    }
  }
  return 0;
}


// ==== 105d9c80 FUN_105d9c80

uint FUN_105d9c80(int param_1,float param_2)

{
  UInteractionMaster *this;
  int *piVar1;
  undefined8 uVar2;
  ALevelInfo *pAVar3;
  int iVar4;
  ALevelInfo *pAVar5;
  ULevel *pUVar6;
  UObject *pUVar7;
  UPlayerInput *this_00;
  uint uVar8;
  User *this_01;
  uint uVar9;
  FName *this_02;
  ushort *puVar10;
  int *piVar11;
  ULevel *in_ECX;
  User *pUVar12;
  int iVar13;
  float10 fVar14;
  float fStack_a50;
  float fStack_a4c;
  float fStack_a48;
  float fStack_a44;
  undefined1 *puStack_a40;
  int iStack_a3c;
  User **ppUVar15;
  ulong uVar16;
  UPackageMap *pUVar17;
  int iVar18;
  float fVar19;
  ushort local_9d4 [1024];
  undefined1 local_1d4 [16];
  float local_1c4;
  float local_1b0;
  undefined4 local_16c [12];
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int local_118;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e0;
  int local_dc;
  int local_d4;
  int local_cc;
  int local_c4;
  int local_b8;
  User *local_ac;
  int local_a8;
  int local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  int local_88;
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  float local_74;
  float local_70 [2];
  float local_68;
  float local_64 [2];
  float local_5c;
  float local_58 [2];
  FMemMark local_50 [12];
  FMemMark local_44 [12];
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  User *local_14;
  int local_10;
  User *local_c;
  ULevel *local_8;
  
  puStack_7c = &LAB_1082055b;
  local_80 = ExceptionList;
  local_84 = &stack0xfffff620;
  iVar13 = 0;
  local_78 = 0;
  ExceptionList = &local_80;
  pAVar3 = ULevel::GetLevelInfo(in_ECX);
  FMemMark::FMemMark(local_50,(FMemStack *)GMem_exref);
  FMemMark::FMemMark(local_44,&GEngineMem);
  GInitRunaway();
  *(undefined4 *)(in_ECX + 0x130) = 1;
  local_78 = CONCAT31(local_78._1_3_,1);
  if ((*(int **)(in_ECX + 0x70) != (int *)0x0) &&
     ((**(code **)(**(int **)(in_ECX + 0x70) + 0x84))(),
     *(int *)(*(int *)(in_ECX + 0x70) + 0x44) != 0)) {
    (**(code **)(*(int *)in_ECX + 0x78))();
  }
  local_78 = 3;
  if ((*(int **)(in_ECX + 0xbc) != (int *)0x0) &&
     ((**(code **)(**(int **)(in_ECX + 0xbc) + 0x84))(),
     *(int *)(*(int *)(in_ECX + 0xbc) + 0x44) != 0)) {
    (**(code **)(*(int *)in_ECX + 0x100))();
  }
  local_78 = 5;
  if (*(int **)(in_ECX + 0x120) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x120) + 4))();
  }
  local_78 = 7;
  if (*(int *)GIsBenchmarking_exref == 0) {
    param_2 = *(float *)(pAVar3 + 0x4b8) * param_2;
  }
  iVar4 = (**(code **)(*(int *)in_ECX + 0x108))();
  if (iVar4 == 0) {
    *(double *)(in_ECX + 0x104) = (double)(param_2 + (float)*(double *)(in_ECX + 0x104));
  }
  *(float *)(pAVar3 + 0x4bc) = (float)*(double *)(in_ECX + 0x104);
  if ((*(int *)GIsL2Seamless_exref != 0) && (*(int *)GIsEditor_exref == 0)) {
    for (; local_130 = iVar13, iVar13 < *(int *)(in_ECX + 0x11b4); iVar13 = iVar13 + 1) {
      *(undefined8 *)(*(int *)(iVar13 * 4 + *(int *)(in_ECX + 0x11b0)) + 0x104) =
           *(undefined8 *)(in_ECX + 0x104);
      local_1c = (float)*(double *)(in_ECX + 0x104);
      pAVar5 = ULevel::GetLevelInfo(*(ULevel **)(*(int *)(in_ECX + 0x11b0) + iVar13 * 4));
      *(float *)(pAVar5 + 0x4bc) = local_1c;
    }
  }
  (**(code **)(*(int *)in_ECX + 0x104))();
  if (((byte)pAVar3[0x554] & 4) != 0) {
    param_1 = 1;
  }
  local_78 = 0;
  fVar14 = (float10)thunk_FUN_103704b0();
  piVar11 = (int *)(DAT_10ddd7e0 + DAT_10dddad8 * 4);
  uVar2 = rdtsc();
  *piVar11 = *piVar11 - (int)uVar2;
  if (((param_1 == 0) || (iVar13 = (**(code **)(*(int *)in_ECX + 0x108))(), iVar13 != 0)) ||
     ((*(int *)(in_ECX + 0x70) != 0 &&
      ((iVar13 = *(int *)(*(int *)(in_ECX + 0x70) + 0x44), iVar13 != 0 &&
       (*(int *)(iVar13 + 0x78) != 3)))))) {
    iVar13 = (**(code **)(*(int *)in_ECX + 0x108))();
    if (iVar13 != 0) {
      local_78 = CONCAT31(local_78._1_3_,0x11);
      *(undefined4 *)(in_ECX + 300) = 0;
      local_18 = 1;
      local_20 = *(int *)(in_ECX + 0x138);
LAB_105da780:
      do {
        if (*(int *)(in_ECX + 0x3c) <= local_20) goto LAB_105da8a0;
        iVar13 = local_20 * 4;
        pUVar7 = (UObject *)thunk_FUN_103285e0();
        if ((pUVar7 == (UObject *)0x0) || (iVar4 = thunk_FUN_1032bbf0(), iVar4 == 0)) {
          piVar11 = (int *)(iVar13 + *(int *)(in_ECX + 0x38));
          if (*piVar11 != 0) {
            piVar11 = (int *)*piVar11;
            if (((piVar11[0xb9] & 0x100000U) != 0) && ((*(byte *)(piVar11 + 0x19) & 0x80) == 0)) {
              (**(code **)(*piVar11 + 0x88))();
              local_20 = local_20 + 1;
              goto LAB_105da780;
            }
            piVar11[0x19] = piVar11[0x19] ^ (*(int *)(in_ECX + 0x134) << 8 ^ piVar11[0x19]) & 0x100U
            ;
          }
          local_20 = local_20 + 1;
          goto LAB_105da780;
        }
        fVar19 = (float)fVar14;
        (**(code **)(**(int **)(pUVar7 + 0x560) + 0x68))();
        this_00 = (UPlayerInput *)(**(code **)(*(int *)pUVar7 + 0x378))();
        UPlayerInput::eventPlayerInput(this_00,fVar19);
        UObject::GetClass(pUVar7);
        thunk_FUN_105a7330();
        while (local_e0 != 0) {
          if ((*(byte *)(local_e0 + 0x48) & 4) != 0) {
            *(undefined4 *)(pUVar7 + *(int *)(local_e0 + 0x54)) = 0;
          }
          local_e0 = *(int *)(local_e0 + 0x38);
          thunk_FUN_105a6100();
        }
        *(uint *)(pUVar7 + 100) =
             *(uint *)(pUVar7 + 100) ^
             (*(int *)(in_ECX + 0x134) << 8 ^ *(uint *)(pUVar7 + 100)) & 0x100;
        local_20 = local_20 + 1;
      } while( true );
    }
    goto LAB_105da55b;
  }
  local_78 = CONCAT31(local_78._1_3_,9);
  *(undefined4 *)(in_ECX + 300) = 0;
  local_10 = 0;
  for (iVar13 = 0; local_d4 = iVar13, iVar13 < *(int *)(in_ECX + 0x5c); iVar13 = iVar13 + 1) {
    iVar4 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x58) + iVar13 * 4) + 100))();
    if (iVar4 != 0) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x58) + iVar13 * 4) + 0x318))();
      iVar4 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x58) + iVar13 * 4) + 0x88))();
      local_10 = local_10 + iVar4;
    }
  }
  for (iVar13 = 0; local_108 = iVar13, iVar13 < *(int *)(in_ECX + 0x68); iVar13 = iVar13 + 1) {
    iVar4 = (**(code **)(**(int **)(*(int *)(in_ECX + 100) + iVar13 * 4) + 100))();
    if (iVar4 != 0) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 100) + iVar13 * 4) + 0x318))();
      iVar4 = (**(code **)(**(int **)(*(int *)(in_ECX + 100) + iVar13 * 4) + 0x88))();
      local_10 = local_10 + iVar4;
    }
  }
  for (local_f0 = 0; local_f0 < *(int *)(in_ECX + 0x68); local_f0 = local_f0 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 100),4,0);
  for (iVar13 = *(int *)(in_ECX + 0x138); local_ec = iVar13, iVar13 < *(int *)(in_ECX + 0x3c);
      iVar13 = iVar13 + 1) {
    piVar11 = *(int **)(*(int *)(in_ECX + 0x38) + iVar13 * 4);
    if ((((piVar11 != (int *)0x0) && (-1 < (char)piVar11[0x19])) &&
        ((*(byte *)(piVar11 + 0x26) & 1) != 0)) &&
       (((piVar11[0x19] & 0x10U) == 0 && (iVar4 = (**(code **)(*piVar11 + 100))(), iVar4 != 0)))) {
      (**(code **)(*piVar11 + 0x318))();
      iVar4 = (**(code **)(*piVar11 + 0x88))();
      local_10 = local_10 + iVar4;
    }
  }
  while ((piVar11 = *(int **)(in_ECX + 300), piVar11 != (int *)0x0 && (local_10 != 0))) {
    *(undefined4 *)(in_ECX + 300) = 0;
    local_10 = 0;
    for (; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
      uVar8 = ((int *)*piVar11)[0x19];
      if ((((uVar8 >> 8 & 1) != *(uint *)(in_ECX + 0x134)) && (-1 < (char)uVar8)) &&
         (iVar13 = (**(code **)(*(int *)*piVar11 + 100))(), iVar13 != 0)) {
        (**(code **)(*(int *)*piVar11 + 0x318))();
        iVar13 = (**(code **)(*(int *)*piVar11 + 0x88))();
        local_10 = local_10 + iVar13;
      }
    }
  }
  iVar13 = *(int *)(in_ECX + 0x3c);
  while (iVar13 = iVar13 + -1, local_f4 = iVar13, *(int *)(in_ECX + 0x138) <= iVar13) {
    piVar11 = *(int **)(*(int *)(in_ECX + 0x38) + iVar13 * 4);
    if (((piVar11 != (int *)0x0) && (-1 < (char)piVar11[0x19])) &&
       (((piVar11[0x19] & 4U) != 0 && (iVar4 = (**(code **)(*piVar11 + 100))(), iVar4 != 0)))) {
      (**(code **)(*(int *)in_ECX + 0xac))();
    }
  }
  local_78 = CONCAT31(local_78._1_3_,10);
  if ((*(int *)GIsL2Seamless_exref != 0) && (*(int *)GIsEditor_exref == 0)) {
    for (local_88 = 0; local_88 < *(int *)(in_ECX + 0x11b4); local_88 = local_88 + 1) {
      local_8 = *(ULevel **)(*(int *)(in_ECX + 0x11b0) + local_88 * 4);
      local_24 = 0;
      *(undefined4 *)(local_8 + 300) = 0;
      pUVar6 = local_8;
      if (local_8 != in_ECX) {
        for (iVar13 = *(int *)(local_8 + 0x138); pUVar6 = local_8, local_fc = iVar13,
            iVar13 < *(int *)(local_8 + 0x3c); iVar13 = iVar13 + 1) {
          piVar11 = *(int **)(*(int *)(local_8 + 0x38) + iVar13 * 4);
          if (((piVar11 != (int *)0x0) && ((*(byte *)(piVar11 + 0x19) & 0x90) == 0)) &&
             (iVar4 = (**(code **)(*piVar11 + 100))(), iVar4 != 0)) {
            (**(code **)(*piVar11 + 0x318))();
            iVar4 = (**(code **)(*piVar11 + 0x88))();
            local_24 = local_24 + iVar4;
          }
        }
      }
      while ((*(int *)(pUVar6 + 300) != 0 && (local_24 != 0))) {
        piVar11 = *(int **)(pUVar6 + 300);
        *(undefined4 *)(pUVar6 + 300) = 0;
        local_24 = 0;
        for (; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
          uVar8 = ((int *)*piVar11)[0x19];
          if (((((uVar8 >> 8 & 1) != *(uint *)(in_ECX + 0x134)) && (-1 < (char)uVar8)) &&
              ((uVar8 & 0x10) != 0)) &&
             (iVar13 = (**(code **)(*(int *)*piVar11 + 100))(), iVar13 != 0)) {
            (**(code **)(*(int *)*piVar11 + 0x318))();
            iVar13 = (**(code **)(*(int *)*piVar11 + 0x88))();
            local_10 = local_10 + iVar13;
          }
          pUVar6 = local_8;
        }
      }
    }
  }
  local_78 = 0xc;
  if (*(int *)(*(int *)(*(int *)(in_ECX + 0x74) + 0x6c) + 0x168) != 0) {
    (**(code **)(*(int *)in_ECX + 0x118))();
    for (iVar13 = 0; local_104 = iVar13, iVar13 < *(int *)(in_ECX + 0x11b4); iVar13 = iVar13 + 1) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x11b0) + iVar13 * 4) + 0x118))();
    }
  }
  local_78 = 0xe;
  if (*(int *)GIsEditor_exref == 0) {
    if (*(int *)(*(int *)(in_ECX + 0x74) + 0x2dc) < 1) {
      iVar13 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar13 == 0) {
        local_14 = (User *)0x1;
      }
      else if (local_14 == (User *)0x0) goto LAB_105da4d5;
      iVar13 = (**(code **)(**(int **)GConfig_exref + 0x10))();
      if (iVar13 == 0) {
        local_64[0] = 0.0;
        local_68 = 0.0;
        local_70[0] = 0.0;
        local_74 = 0.0;
      }
      else {
        iVar13 = Parse(local_9d4,(ushort *)&DAT_108d1c7c,&local_74);
        if (iVar13 == 0) {
          local_74 = 0.0;
        }
        iVar13 = Parse(local_9d4,(ushort *)&DAT_108d1c70,local_70);
        if (iVar13 == 0) {
          local_70[0] = 0.0;
        }
        iVar13 = Parse(local_9d4,(ushort *)&DAT_108d1c64,&local_68);
        if (iVar13 == 0) {
          local_68 = 0.0;
        }
        iVar13 = Parse(local_9d4,(ushort *)&DAT_108d1c58,local_64);
        if (iVar13 == 0) {
          local_64[0] = 0.0;
        }
      }
      iVar13 = (**(code **)(**(int **)GConfig_exref + 0x10))();
      if (iVar13 == 0) {
        local_12c = 0;
        local_128 = 0x3f800000;
        local_124 = 0;
        local_5c = 0.0;
        local_58[0] = 1.0;
        local_58[1] = 0.0;
      }
      else {
        iVar13 = Parse(local_9d4,(ushort *)&DAT_10891960,&local_5c);
        if (iVar13 == 0) {
          local_5c = 0.0;
        }
        iVar13 = Parse(local_9d4,(ushort *)&DAT_10891958,local_58);
        if (iVar13 == 0) {
          local_58[0] = 1.0;
        }
      }
      iVar13 = (**(code **)(**(int **)GConfig_exref + 8))();
      if (iVar13 == 0) {
        local_1c = 48.0;
      }
      iVar13 = (**(code **)(**(int **)GConfig_exref + 8))();
      if (iVar13 == 0) {
        local_8 = (ULevel *)0x40800000;
      }
      iVar13 = thunk_FUN_103717a0();
      if (iVar13 != 0) {
        thunk_FUN_105d0e00();
      }
    }
LAB_105da4d5:
    if (*(int *)GIsEditor_exref == 0) {
      local_8 = *(ULevel **)(in_ECX + 0x74);
      for (iVar13 = 0; local_10c = iVar13, iVar13 < *(int *)(local_8 + 0x2dc); iVar13 = iVar13 + 1)
      {
        thunk_FUN_10588950();
        if (*(float *)(iVar13 * 0x3c + *(int *)(local_8 + 0x2d8)) < 0.0) {
          thunk_FUN_10387fc0();
        }
      }
    }
  }
  goto LAB_105da559;
LAB_105da8a0:
  while ((piVar11 = *(int **)(in_ECX + 300), piVar11 != (int *)0x0 && (local_18 != 0))) {
    *(undefined4 *)(in_ECX + 300) = 0;
    local_18 = 0;
    while (piVar11 != (int *)0x0) {
      piVar1 = (int *)*piVar11;
      uVar8 = piVar1[0x19];
      if (((uVar8 >> 8 & 1) == *(uint *)(in_ECX + 0x134)) || ((char)uVar8 < '\0')) {
LAB_105da915:
        piVar11 = (int *)piVar11[1];
      }
      else {
        if ((piVar1[0xb9] & 0x100000U) == 0) {
          piVar1[0x19] = piVar1[0x19] ^ (*(uint *)(in_ECX + 0x134) << 8 ^ uVar8) & 0x100;
          goto LAB_105da915;
        }
        iVar13 = (**(code **)(*piVar1 + 0x88))();
        local_18 = local_18 + iVar13;
        piVar11 = (int *)piVar11[1];
      }
    }
  }
LAB_105da559:
  local_78 = 0;
LAB_105da55b:
  piVar11 = (int *)(DAT_10ddd7e0 + DAT_10dddad8 * 4);
  uVar2 = rdtsc();
  *piVar11 = *piVar11 + (int)uVar2 + -0xc;
  if ((*(int *)(*(int *)(in_ECX + 0x74) + 0x54) != 0) &&
     (this = *(UInteractionMaster **)(*(int *)(*(int *)(in_ECX + 0x74) + 0x54) + 0xb4),
     this != (UInteractionMaster *)0x0)) {
    UInteractionMaster::MasterProcessTick(this,(float)fVar14);
  }
  local_78 = CONCAT31(local_78._1_3_,0x13);
  if (*(int *)(in_ECX + 0x70) != 0) {
    if (*(int *)(*(int *)(in_ECX + 0x70) + 0x44) == 0) {
      (**(code **)(*(int *)in_ECX + 0x7c))();
    }
    (**(code **)(**(int **)(in_ECX + 0x70) + 0x80))();
  }
  local_78 = 0x15;
  if (*(int *)(in_ECX + 0xbc) != 0) {
    if (*(int *)(*(int *)(in_ECX + 0xbc) + 0x44) == 0) {
      (**(code **)(*(int *)in_ECX + 0xfc))();
    }
    (**(code **)(**(int **)(in_ECX + 0xbc) + 0x80))();
  }
  local_78 = 0;
  *(uint *)(in_ECX + 0x134) = (uint)(*(int *)(in_ECX + 0x134) == 0);
  *(undefined4 *)(in_ECX + 0x130) = 0;
  FMemMark::Pop(local_50);
  FMemMark::Pop(local_44);
  piVar11 = (int *)(DAT_10ddd7e0 + DAT_10dddaf0 * 4);
  uVar2 = rdtsc();
  *piVar11 = *piVar11 - (int)uVar2;
  (**(code **)(*(int *)in_ECX + 0xb4))();
  piVar11 = (int *)(DAT_10ddd7e0 + DAT_10dddaf0 * 4);
  uVar2 = rdtsc();
  *piVar11 = *piVar11 + (int)uVar2 + -0xc;
  local_78 = CONCAT31(local_78._1_3_,0x17);
  for (iVar13 = *(int *)(in_ECX + 0x138); uVar8 = *(uint *)(in_ECX + 0x3c), local_b8 = iVar13,
      iVar13 < (int)uVar8; iVar13 = iVar13 + 1) {
    piVar11 = (int *)(*(int *)(in_ECX + 0x38) + iVar13 * 4);
    if (*piVar11 != 0) {
      piVar11 = (int *)*piVar11;
      uVar8 = piVar11[0x19];
      if ((((uVar8 & 0x10) == 0) && ((uVar8 & 4) == 0)) &&
         ((-1 < (char)uVar8 && (piVar11[0x6e] == 0)))) {
        (**(code **)(*piVar11 + 0x1bc))();
      }
    }
  }
  local_78 = 0x19;
  if (DAT_10c6a594 != 0) {
    iVar13 = appRand();
    uVar8 = iVar13 / 2000;
    if (iVar13 % 2000 == 0) {
      for (iVar13 = 0; uVar8 = *(uint *)(in_ECX + 0x3c), local_118 = iVar13, iVar13 < (int)uVar8;
          iVar13 = iVar13 + 1) {
        piVar11 = (int *)(*(int *)(in_ECX + 0x38) + iVar13 * 4);
        if ((((*piVar11 != 0) && (pUVar7 = (UObject *)*piVar11, ((byte)pUVar7[100] & 0x80) == 0)) &&
            (iVar4 = UObject::IsA(pUVar7,&APawn::PrivateStaticClass), iVar4 != 0)) &&
           ((iVar4 = *(int *)(*(int *)(in_ECX + 0x38) + iVar13 * 4), *(int *)(iVar4 + 0x14d8) == 0
            || (iVar4 = UObject::IsA(*(UObject **)(iVar4 + 0x14d8),
                                     &ALineagePlayerController::PrivateStaticClass), iVar4 == 0))))
        {
          (**(code **)(*(int *)in_ECX + 0xac))();
        }
      }
    }
    if (DAT_10c6a594 != 0) {
      uVar8 = appRand();
      uVar8 = uVar8 & 0x80000001;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      if (uVar8 == 0) {
        local_16c[0] = 0;
        local_16c[1] = 10;
        local_16c[2] = 0x12;
        local_16c[3] = 0x19;
        local_16c[4] = 0x1f;
        local_16c[5] = 0x26;
        local_16c[6] = 0x2c;
        local_16c[7] = 0x31;
        local_16c[8] = 0x35;
        local_16c[9] = 0x35;
        local_c = (User *)thunk_FUN_1032ffc0();
        local_78._0_1_ = 0x1a;
        if (local_c == (User *)0x0) {
          this_01 = (User *)0x0;
        }
        else {
          this_01 = (User *)User::User(local_c);
        }
        local_78 = CONCAT31(local_78._1_3_,0x19);
        local_14 = this_01;
        uVar8 = appRand();
        uVar8 = uVar8 & 0x80000001;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
        }
        iVar13 = appRand();
        *(int *)(this_01 + 0x4c) = iVar13 % 5;
        uVar9 = appRand();
        uVar9 = uVar9 & 0x80000001;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
        }
        *(uint *)(this_01 + 0x50) = uVar9;
        *(undefined4 *)(this_01 + 0x54) = local_16c[*(int *)(this_01 + 0x4c) + uVar8 * 2];
        *(undefined4 *)(this_01 + 0xb4) = 0;
        while (*(int *)(this_01 + 0xb4) == 0) {
          iVar13 = *(int *)(DAT_10b3e0a4 + 4);
          iVar4 = appRand();
          iVar4 = iVar4 % iVar13;
          local_c4 = iVar4;
          iVar13 = thunk_FUN_10422ee0();
          if (((iVar13 != 0) && (*(int *)(iVar13 + 4) == 0)) && (*(int *)(iVar13 + 0xd4) == 7)) {
            *(int *)(this_01 + 0xb4) = iVar4;
          }
        }
        *(undefined4 *)(this_01 + 0xb8) = 0;
        while (*(int *)(this_01 + 0xb8) == 0) {
          iVar13 = *(int *)(DAT_10b3e0a4 + 4);
          iVar4 = appRand();
          iVar4 = iVar4 % iVar13;
          local_100 = iVar4;
          iVar13 = thunk_FUN_10422ee0();
          if (((iVar13 != 0) && (*(int *)(iVar13 + 4) == 0)) && (*(int *)(iVar13 + 0xd4) == 8)) {
            *(int *)(this_01 + 0xb8) = iVar4;
          }
        }
        *(undefined4 *)(this_01 + 0xc0) = 0;
        while (*(int *)(this_01 + 0xc0) == 0) {
          iVar13 = *(int *)(DAT_10b3e0a4 + 4);
          iVar4 = appRand();
          iVar4 = iVar4 % iVar13;
          local_cc = iVar4;
          iVar13 = thunk_FUN_10422ee0();
          if (((iVar13 != 0) && (*(int *)(iVar13 + 4) == 1)) && (*(int *)(iVar13 + 0xd4) == 10)) {
            *(int *)(this_01 + 0xc0) = iVar4;
          }
        }
        *(undefined4 *)(this_01 + 0xc4) = 0;
        while (*(int *)(this_01 + 0xc4) == 0) {
          iVar13 = *(int *)(DAT_10b3e0a4 + 4);
          iVar4 = appRand();
          iVar4 = iVar4 % iVar13;
          local_38 = iVar4;
          iVar13 = thunk_FUN_10422ee0();
          if (((iVar13 != 0) && (*(int *)(iVar13 + 4) == 1)) && (*(int *)(iVar13 + 0xd4) == 0xb)) {
            *(int *)(this_01 + 0xc4) = iVar4;
          }
        }
        *(undefined4 *)(this_01 + 0xbc) = 0;
        while (*(int *)(this_01 + 0xbc) == 0) {
          iVar13 = *(int *)(DAT_10b3e0a4 + 4);
          iVar4 = appRand();
          iVar4 = iVar4 % iVar13;
          local_34 = iVar4;
          iVar13 = thunk_FUN_10422ee0();
          if (((iVar13 != 0) && (*(int *)(iVar13 + 4) == 1)) && (*(int *)(iVar13 + 0xd4) == 9)) {
            *(int *)(this_01 + 0xbc) = iVar4;
          }
        }
        *(undefined4 *)(this_01 + 200) = 0;
        while (*(int *)(this_01 + 200) == 0) {
          iVar13 = *(int *)(DAT_10b3e0a4 + 4);
          iVar4 = appRand();
          pUVar12 = (User *)(iVar4 % iVar13);
          local_c = pUVar12;
          iVar13 = thunk_FUN_10422ee0();
          if (((iVar13 != 0) && (*(int *)(iVar13 + 4) == 1)) && (*(int *)(iVar13 + 0xd4) == 0xc)) {
            *(User **)(this_01 + 200) = pUVar12;
          }
        }
        piVar11 = *(int **)(*(int *)(*(int *)(in_ECX + 0x74) + 0x54) + 0x38);
        iVar13 = appRand();
        local_c = (User *)(iVar13 % 1000);
        local_30 = (*(float *)(*(int *)(*(int *)(*piVar11 + 0x3c) + 0x3bc) + 0x1bc) - 500.0) +
                   (float)(int)local_c;
        piVar11 = *(int **)(*(int *)(*(int *)(in_ECX + 0x74) + 0x54) + 0x38);
        iVar13 = appRand();
        local_c = (User *)(iVar13 % 1000);
        local_2c = (*(float *)(*(int *)(*(int *)(*piVar11 + 0x3c) + 0x3bc) + 0x1c0) - 500.0) +
                   (float)(int)local_c;
        local_28 = *(float *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x74) + 0x54)
                                                          + 0x38) + 0x3c) + 0x3bc) + 0x1c4);
        local_8 = (ULevel *)
                  UObject::StaticLoadClass
                            (&AController::PrivateStaticClass,(UObject *)0x0,
                             (ushort *)L"Engine.PlayerController",(ushort *)0x0,1,(UPackageMap *)0x0
                            );
        iVar13 = *(int *)in_ECX;
        FRotator::FRotator((FRotator *)&local_94,0,0,0);
        local_c = (User *)&stack0xfffff5e8;
        FName::FName((FName *)&stack0xfffff5e8,0);
        iVar13 = (**(code **)(iVar13 + 0xc0))();
        pUVar17 = (UPackageMap *)0x0;
        uVar16 = 0;
        ppUVar15 = &local_c;
        this_02 = (FName *)User::GetClassNameW(this_01);
        puVar10 = FName::operator*(this_02);
        iStack_a3c = 0x105dae13;
        local_8 = (ULevel *)
                  UObject::StaticLoadClass
                            (&APawn::PrivateStaticClass,(UObject *)0x0,puVar10,(ushort *)ppUVar15,
                             uVar16,pUVar17);
        if (local_8 != (ULevel *)0x0) {
          iVar4 = *(int *)in_ECX;
          iVar18 = 0;
          uVar8 = appRand();
          uVar8 = uVar8 & 0x8000ffff;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xffff0000) + 1;
          }
          piVar11 = (int *)FRotator::FRotator((FRotator *)&local_ac,0,uVar8,iVar18);
          puStack_a40 = (undefined1 *)*piVar11;
          iStack_a3c = piVar11[1];
          fStack_a4c = local_30;
          fStack_a48 = local_2c;
          fStack_a44 = local_28;
          local_c = (User *)&fStack_a50;
          fStack_a50 = local_28;
          FName::FName((FName *)&fStack_a50,0);
          iVar4 = (**(code **)(iVar4 + 0xc0))(local_8);
          *(int *)(iVar13 + 0x3bc) = iVar4;
          *(int *)(iVar4 + 0x14d8) = iVar13;
          *(undefined1 *)(iVar13 + 0xc2) = 4;
          *(undefined1 *)(*(int *)(iVar13 + 0x3bc) + 0xc2) = 4;
          local_13c = 0;
          local_138 = 0;
          local_134 = 0x3f800000;
          (**(code **)(**(int **)(iVar13 + 0x3bc) + 0x1c8))(1,0,0,0,0x3f800000);
          *(undefined4 *)(local_14 + 0x204) = *(undefined4 *)(iVar13 + 0x3bc);
          User::SetPawnResource(local_14);
          local_a0 = local_30;
          local_9c = local_2c;
          local_94 = local_30;
          local_90 = local_2c;
          local_8c = local_28;
          local_98 = local_28 + 50.0;
          for (iVar4 = 0; local_dc = iVar4, iVar4 < 0x1e; iVar4 = iVar4 + 1) {
            thunk_FUN_104419f0();
            local_98 = local_98 + 30.0;
            local_8c = local_8c - 30.0;
            iVar18 = *(int *)(iVar13 + 0x3bc);
            local_ac = *(User **)(iVar18 + 0x2f0);
            local_a8 = *(int *)(iVar18 + 0x2f0);
            local_a4 = *(int *)(iVar18 + 0x2f4);
            iStack_a3c = *(int *)(iVar13 + 0x3bc);
            puStack_a40 = local_1d4;
            fStack_a44 = 4.3720066e-29;
            local_38 = local_a4;
            local_34 = local_a8;
            local_c = local_ac;
            (**(code **)(*(int *)in_ECX + 0xe4))();
            if (local_1c4 != 0.0) {
              local_c = (User *)(local_1b0 * 12.0);
              if ((float)local_c < 1.9) {
                local_1c4 = (2.15 - (float)local_c) + local_1c4;
              }
              iStack_a3c = *(int *)(iVar13 + 0x3bc);
              puStack_a40 = (undefined1 *)0x105db066;
              (**(code **)(*(int *)in_ECX + 0xa8))();
              break;
            }
          }
        }
        uVar8 = thunk_FUN_103254a0();
      }
    }
  }
  ExceptionList = local_80;
  return uVar8;
}


// ==== 105da6ae Catch@105da6ae

void Catch_105da6ae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa0) = *(undefined4 *)(unaff_EBP + -0x124);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xa0,&DAT_10914c48);
}


// ==== 105da6cb Catch@105da6cb

void Catch_105da6cb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2_ACTOR_TICK");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105da6e7 Catch@105da6e7

void Catch_105da6e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = *(undefined4 *)(unaff_EBP + -0x104);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xa8,&DAT_10914c48);
}


// ==== 105da704 Catch@105da704

void Catch_105da704(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2_SHADOW_TICK");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105da70b Catch@105da70b

void Catch_105da70b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xd0) = *(undefined4 *)(unaff_EBP + -300);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xd0,&DAT_10914c48);
}


// ==== 105da725 Catch@105da725

void Catch_105da725(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ACTORS_TICK_SW_LEVEL");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105da72c Catch@105da72c

void Catch_105da72c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x10c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_10914c48);
}


// ==== 105da740 Catch@105da740

void Catch_105da740(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TickAllActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105da923 Catch@105da923

void Catch_105da923(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + -0xfc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -100,&DAT_10914c48);
}


// ==== 105da93a Catch@105da93a

void Catch_105da93a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AbsorbedPaused");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105db0a2 Catch@105db0a2

void Catch_105db0a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xac) = *(undefined4 *)(unaff_EBP + -0x114);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xac,&DAT_10914c48);
}


// ==== 105db0bf Catch@105db0bf

void Catch_105db0bf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"bAutoSpawn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105db0c9 Catch@105db0c9

void Catch_105db0c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0x130);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x74,&DAT_10914c48);
}


// ==== 105db0e0 Catch@105db0e0

void Catch_105db0e0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"GetPhysicsVolume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105db0ea Catch@105db0ea

void Catch_105db0ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x9c) = *(undefined4 *)(unaff_EBP + -0x11c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x9c,&DAT_10914c48);
}


// ==== 105db107 Catch@105db107

void Catch_105db107(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UpdatePostDemoRec");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105db111 Catch@105db111

void Catch_105db111(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x100);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 105db128 Catch@105db128

void Catch_105db128(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UpdateNetServer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105db132 Catch@105db132

void Catch_105db132(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xcc) = *(undefined4 *)(unaff_EBP + -0x108);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xcc,&DAT_10914c48);
}


// ==== 105db14f Catch@105db14f

void Catch_105db14f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UpdateTime");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105db159 Catch@105db159

void Catch_105db159(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x84) = *(undefined4 *)(unaff_EBP + -0x110);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x84,&DAT_10914c48);
}


// ==== 105db176 Catch@105db176

void Catch_105db176(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UpdateCollision");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105db180 Catch@105db180

void Catch_105db180(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x118);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 105db197 Catch@105db197

void Catch_105db197(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UpdatePreDemoRec");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105db1a1 Catch@105db1a1

void Catch_105db1a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x120);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_10914c48);
}


// ==== 105db1b8 Catch@105db1b8

void Catch_105db1b8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UpdatePreNet");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105db1c2 Catch@105db1c2

void Catch_105db1c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x128);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x54,&DAT_10914c48);
}


// ==== 105db1d9 Catch@105db1d9

void Catch_105db1d9(void)

{
  ALevelInfo *pAVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::Tick");
  pAVar1 = ULevel::GetLevelInfo(*(ULevel **)(unaff_EBP + -0x5c));
  appUnwindf((ushort *)L"(NetMode=%i)",(uint)(byte)pAVar1[0x5d4]);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105db770 FUN_105db770

void FUN_105db770(float param_1,ELevelTick param_2)

{
  AActor *in_ECX;
  
  AActor::Tick(in_ECX,param_1,param_2);
  *(int *)(in_ECX + 0x1cc) = *(int *)(in_ECX + 0x1cc) + 500;
  return;
}


// ==== 105db7a0 FUN_105db7a0

int FUN_105db7a0(float param_1,ELevelTick param_2)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  UClass *pUVar5;
  AActor *in_ECX;
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
  local_38 = AActor::Tick(in_ECX,param_1,param_2);
  if ((*(int *)(in_ECX + 0x104) != 0) && (*(int *)(in_ECX + 0x3f0) != 0)) {
    piVar3 = (int *)thunk_FUN_104b4240();
    if (piVar3 == (int *)0x0) {
      iVar4 = *(int *)(in_ECX + 0x3f0);
      *(undefined4 *)(iVar4 + 0x1bc) = *(undefined4 *)(in_ECX + 0x1bc);
      *(undefined4 *)(iVar4 + 0x1c0) = *(undefined4 *)(in_ECX + 0x1c0);
      *(undefined4 *)(iVar4 + 0x1c4) = *(undefined4 *)(in_ECX + 0x1c4);
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
      local_34 = local_50 * 3.0 + local_24;
      local_30 = local_20 + local_4c * 3.0;
      local_2c = local_1c + local_48 * 3.0;
      iVar4 = *(int *)(in_ECX + 0x3f0);
      *(float *)(iVar4 + 0x1bc) = local_34;
      *(float *)(iVar4 + 0x1c0) = local_30;
      *(float *)(iVar4 + 0x1c4) = local_2c;
      local_18 = local_2c;
      local_8 = (undefined1 *)local_30;
    }
  }
  if ((*(int **)(in_ECX + 0x104) != (int *)0x0) && (in_ECX[0x3bc] == (AActor)0x2)) {
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x104) + 0x98))();
    iVar4 = (**(code **)(*piVar3 + 0xe0))();
    if (iVar4 == 0) {
      iVar4 = *(int *)in_ECX;
      AL2Float::GetCurAnimName((AL2Float *)in_ECX);
      (**(code **)(iVar4 + 0x2cc))();
    }
    fVar1 = param_1 + *(float *)(in_ECX + 0x3dc);
    *(float *)(in_ECX + 0x3dc) = fVar1;
    iVar4 = *(int *)(in_ECX + 0x3e0);
    if (iVar4 == 0) {
      fVar1 = fVar1 * 20.0;
      local_8 = (undefined1 *)(*(float *)(in_ECX + 0x3ec) - *(float *)(in_ECX + 0x1c4));
      if ((float)local_8 != 0.0) {
        if ((float)local_8 <= 0.0) {
          if (-fVar1 <= (float)local_8) goto LAB_105dba87;
          *(float *)(in_ECX + 0x1c4) = *(float *)(in_ECX + 0x1c4) - fVar1;
        }
        else if ((float)local_8 <= fVar1) {
LAB_105dba87:
          *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(in_ECX + 0x3ec);
        }
        else {
          *(float *)(in_ECX + 0x1c4) = fVar1 + *(float *)(in_ECX + 0x1c4);
        }
      }
    }
    else if (iVar4 == 1) {
      if (0.5 <= fVar1) {
LAB_105dba21:
        *(undefined4 *)(in_ECX + 0x3dc) = 0;
        *(undefined4 *)(in_ECX + 0x3e0) = 0;
      }
      else {
        *(float *)(in_ECX + 0x1c4) =
             *(float *)(in_ECX + 0x3ec) -
             (fVar1 * 40.0 - fVar1 * 160.0 * *(float *)(in_ECX + 0x3dc));
      }
    }
    else if (iVar4 == 2) {
      if (0.5 <= fVar1) goto LAB_105dba21;
      *(float *)(in_ECX + 0x1c4) =
           *(float *)(in_ECX + 0x3ec) + (fVar1 * 20.0 - fVar1 * 80.0 * *(float *)(in_ECX + 0x3dc));
    }
  }
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x134) + 0x150))();
  if (iVar4 == 0) {
    ExceptionList = local_78;
    return local_38;
  }
  thunk_FUN_104419f0();
  local_6c = local_14 + 0.0;
  local_68 = (undefined1 *)(local_10 + 0.0);
  local_64 = local_c + 50.0;
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
  if ((0.0 < *(float *)(in_ECX + 0x3c8)) || (*(int *)(in_ECX + 0x134) == 0)) goto LAB_105dbdac;
  if (in_ECX[0x3bc] == (AActor)0x1) {
    pUVar5 = UObject::StaticLoadClass
                       (&AActor::PrivateStaticClass,(UObject *)0x0,
                        (ushort *)L"LineageEffect.e_u075_w",(ushort *)0x0,1,(UPackageMap *)0x0);
    if (pUVar5 == (UClass *)0x0) goto LAB_105dbdac;
    iVar4 = **(int **)(in_ECX + 0xe4);
    fStack_128 = *(float *)(in_ECX + 0x1c8);
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
    AEmitter::SetSizeScale(this,0.5);
    AEmitter::SetSpeedScale(this,1.0);
    uVar2 = 0x3f800000;
  }
  else {
    local_44 = local_14 - *(float *)(in_ECX + 0x3d0);
    local_40 = (undefined1 *)(local_10 - *(float *)(in_ECX + 0x3d4));
    local_3c = local_c - *(float *)(in_ECX + 0x3d8);
    local_18 = local_3c;
    local_8 = local_40;
    FVector::Rotation((FVector *)&local_44);
    fStack_128 = 4.3730093e-29;
    pUVar5 = UObject::StaticLoadClass
                       (&AActor::PrivateStaticClass,(UObject *)0x0,
                        (ushort *)L"LineageEffect.e_u075_w",(ushort *)0x0,1,(UPackageMap *)0x0);
    if (pUVar5 == (UClass *)0x0) goto LAB_105dbdac;
    iVar4 = **(int **)(in_ECX + 0xe4);
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
    AEmitter::SetSizeScale(this,0.5);
    AEmitter::SetSpeedScale(this,2.0);
    uVar2 = 0x3d4ccccd;
  }
  *(undefined4 *)(in_ECX + 0x3c8) = uVar2;
  *(float *)(in_ECX + 0x3d0) = local_14;
  *(float *)(in_ECX + 0x3d4) = local_10;
  *(float *)(in_ECX + 0x3d8) = local_c;
LAB_105dbdac:
  *(float *)(in_ECX + 0x3c8) = *(float *)(in_ECX + 0x3c8) - param_1;
  if (((*(float *)(in_ECX + 0x3cc) < 0.0) && (*(int *)(in_ECX + 0x134) != 0)) &&
     (((byte)in_ECX[0x3c4] & 2) != 0)) {
    pUVar5 = UObject::StaticLoadClass
                       (&AActor::PrivateStaticClass,(UObject *)0x0,
                        (ushort *)L"LineageEffect.etc_fish_gura_skill",(ushort *)0x0,1,
                        (UPackageMap *)0x0);
    if (pUVar5 != (UClass *)0x0) {
      iVar4 = **(int **)(in_ECX + 0xe4);
      fStack_128 = *(float *)(in_ECX + 0x1c8);
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
      AEmitter::SetSizeScale(this,0.5);
      AEmitter::SetSpeedScale(this,1.0);
      *(undefined4 *)(in_ECX + 0x3cc) = 0x3e4ccccd;
      *(float *)(in_ECX + 0x3d0) = local_14;
      *(float *)(in_ECX + 0x3d4) = local_10;
      *(float *)(in_ECX + 0x3d8) = local_c;
    }
  }
  *(float *)(in_ECX + 0x3cc) = *(float *)(in_ECX + 0x3cc) - param_1;
  ExceptionList = local_78;
  return local_38;
}


// ==== 105dbeee Catch@105dbeee

void Catch_105dbeee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_10914c48);
}


// ==== 105dbf02 Catch@105dbf02

void Catch_105dbf02(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AL2Float::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105dc100 FUN_105dc100

void FUN_105dc100(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[3] != 0) {
    iVar1 = *in_ECX;
    if (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10)) {
      do {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) / 2;
      } while (*(int *)(iVar1 + 4) * 2 + 8 < *(int *)(iVar1 + 0x10));
    }
    thunk_FUN_1032b7e0();
    return;
  }
  return;
}


// ==== 105dc140 FUN_105dc140

void FUN_105dc140(float param_1)

{
  double dVar1;
  UObject *this;
  int iVar2;
  int iVar3;
  float *pfVar4;
  AActor *in_ECX;
  APlayerController *pAVar5;
  float fVar6;
  int iStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_40 [60];
  
  AActor::TickAuthoritative(in_ECX,param_1);
  if (((((*(uint *)(in_ECX + 0x3c4) & 1) != 0) && ((*(uint *)(in_ECX + 0x3c4) & 2) == 0)) &&
      (*(int *)(in_ECX + 0x3cc) != 0)) &&
     (fVar6 = *(float *)(*(int *)(in_ECX + 0x3cc) + 0x108),
     *(float *)(in_ECX + 0x3c0) < fVar6 != (*(float *)(in_ECX + 0x3c0) == fVar6))) {
    for (this = *(UObject **)(*(int *)(in_ECX + 0xe0) + 0x620); this != (UObject *)0x0;
        this = *(UObject **)(this + 0x3e4)) {
      iVar3 = (**(code **)(*(int *)this + 0x350))();
      if (iVar3 != 0) {
        iVar3 = UObject::IsA(this,&APlayerController::PrivateStaticClass);
        pAVar5 = (APlayerController *)(-(uint)(iVar3 != 0) & (uint)this);
        iVar3 = (**(code **)(*(int *)pAVar5 + 0x340))();
        fStack_4c = *(float *)(iVar3 + 0x1c0) - *(float *)(in_ECX + 0x1c0);
        fStack_48 = *(float *)(iVar3 + 0x1c4) - *(float *)(in_ECX + 0x1c4);
        fStack_50 = *(float *)(iVar3 + 0x1bc) - *(float *)(in_ECX + 0x1bc);
        dVar1 = (double)*(float *)(in_ECX + 0x3bc);
        fVar6 = FVector::SizeSquared((FVector *)&fStack_50);
        if ((double)fVar6 < dVar1 * dVar1) {
          iVar3 = *(int *)(in_ECX + 0x3cc);
          iVar2 = *(int *)(pAVar5 + 0x5c0);
          fStack_4c = *(float *)(iVar3 + 0x1c0) - *(float *)(iVar2 + 0x1c0);
          iStack_5c = (int)((ulonglong)dVar1 >> 0x20);
          fStack_48 = *(float *)(iVar3 + 0x1c4) - *(float *)(iVar2 + 0x1c4);
          fStack_50 = *(float *)(iVar3 + 0x1bc) - *(float *)(iVar2 + 0x1bc);
          FVector::SafeNormal((FVector *)&fStack_50);
          pfVar4 = (float *)FRotator::Vector((FRotator *)(pAVar5 + 0x1c8));
          if (*(float *)(in_ECX + 0x3d4) <
              pfVar4[2] * fStack_44 + *pfVar4 * fStack_4c + pfVar4[1] * fStack_48) {
            thunk_FUN_104419f0(0x3f800000,0);
            (**(code **)(**(int **)(in_ECX + 0xe4) + 0xe4))(auStack_40);
            if (iStack_5c == 0) {
              ALineOfSightTrigger::eventPlayerSeesMe((ALineOfSightTrigger *)in_ECX,pAVar5);
            }
          }
          break;
        }
      }
    }
  }
  *(undefined4 *)(in_ECX + 0x3c0) = *(undefined4 *)(*(int *)(in_ECX + 0xe0) + 0x4bc);
  return;
}


// ==== 105dc420 FUN_105dc420

void FUN_105dc420(void)

{
  int iVar1;
  UActorChannel *this;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820588;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x70) + 0x44);
  if (*(int *)(iVar1 + 0x78) == 3) {
    ExceptionList = &local_10;
    for (iVar3 = 0; iVar3 < *(int *)(iVar1 + 0x3ed4); iVar3 = iVar3 + 1) {
      local_8 = 2;
      this = *(UActorChannel **)(*(int *)(iVar1 + 0x3ed0) + 8 + iVar3 * 0xc);
      iVar2 = thunk_FUN_104b42a0(*(undefined4 *)(this + 0x74));
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x14d8) != 0)) {
        iVar2 = thunk_FUN_103285e0(*(undefined4 *)(iVar2 + 0x14d8));
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x560) != 0)) {
          UActorChannel::ReplicateActor(this);
        }
      }
    }
    local_8 = 0;
    thunk_FUN_105dc100();
  }
  else if (*(int *)(iVar1 + 0x78) == 1) {
    ExceptionList = &local_10;
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0x74) + 0x54) + 0x3c) == 0) {
      ExceptionList = &local_10;
      appFailAssert("Engine->Client->Viewports.Num()",".\\UnLevTic.cpp",0xe3a);
    }
    (**(code **)(**(int **)(in_ECX + 0x74) + 0xa0))
              (**(undefined4 **)((*(int **)(in_ECX + 0x74))[0x15] + 0x38),L"?failed",0,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105dc4d4 Catch@105dc4d4

void Catch_105dc4d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105dc4e8 Catch@105dc4e8

void Catch_105dc4e8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UpdateLocalActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105dc571 Catch@105dc571

void Catch_105dc571(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105dc585 Catch@105dc585

void Catch_105dc585(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::TickNetClient");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105dc5f0 FUN_105dc5f0

FBox * FUN_105dc5f0(FBox *param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)(in_ECX + 0x1bc);
  local_8 = *(float *)(in_ECX + 0x1c0);
  local_4 = *(float *)(in_ECX + 0x1c4);
  local_18 = *(float *)(in_ECX + 0x1bc);
  local_14 = *(float *)(in_ECX + 0x1c0);
  local_10 = *(float *)(in_ECX + 0x1c4);
  iVar1 = *(int *)(in_ECX + 0x3bc);
  if ((iVar1 != 0) && (iVar3 = 0, *(int *)(iVar1 + 0x48) != -1 && -1 < *(int *)(iVar1 + 0x48) + 1))
  {
    iVar2 = 0;
    do {
      if (*(float *)(*(int *)(iVar1 + 0x40) + iVar2) < local_c) {
        local_c = *(float *)(*(int *)(iVar1 + 0x40) + iVar2);
      }
      if (*(float *)(*(int *)(iVar1 + 0x40) + 4 + iVar2) < local_8) {
        local_8 = *(float *)(*(int *)(iVar1 + 0x40) + 4 + iVar2);
      }
      if (*(float *)(*(int *)(iVar1 + 0x40) + 8 + iVar2) < local_4) {
        local_4 = *(float *)(*(int *)(iVar1 + 0x40) + 8 + iVar2);
      }
      if (local_18 < *(float *)(*(int *)(iVar1 + 0x40) + iVar2)) {
        local_18 = *(float *)(*(int *)(iVar1 + 0x40) + iVar2);
      }
      if (local_14 < *(float *)(*(int *)(iVar1 + 0x40) + 4 + iVar2)) {
        local_14 = *(float *)(*(int *)(iVar1 + 0x40) + 4 + iVar2);
      }
      if (local_10 < *(float *)(*(int *)(iVar1 + 0x40) + 8 + iVar2)) {
        local_10 = *(float *)(*(int *)(iVar1 + 0x40) + 8 + iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(int *)(iVar1 + 0x48) + 1);
  }
  FBox::FBox(param_1,(FVector *)&local_c,(FVector *)&local_18);
  return param_1;
}


// ==== 105dc7b0 FUN_105dc7b0

void FUN_105dc7b0(byte param_1)

{
  NCSpringSimul *in_ECX;
  
  NCSpringSimul::~NCSpringSimul(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 105dc7e0 FUN_105dc7e0

undefined4 FUN_105dc7e0(void)

{
  int iVar1;
  int in_ECX;
  uint uStack00000004;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108205a0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(byte *)(in_ECX + 0x3c0) != 0xff) {
    uStack00000004 = (uint)*(byte *)(in_ECX + 0x3c0);
    ExceptionList = &local_10;
    iVar1 = FUN_107a6660();
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    *(char *)(in_ECX + 0x3c0) = (char)iVar1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105dc867 Catch@105dc867

void Catch_105dc867(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105dc87b Catch@105dc87b

void Catch_105dc87b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANLine::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105dc8d0 FUN_105dc8d0

undefined4 FUN_105dc8d0(void)

{
  NCSpringSimul *pNVar1;
  int iVar2;
  int in_ECX;
  void *unaff_EDI;
  int unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  APawn *pAStack_4;
  
  pAStack_4 = (APawn *)0xffffffff;
  puStack_8 = &LAB_108205bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pNVar1 = (NCSpringSimul *)(**(code **)**(undefined4 **)GMalloc_exref)(0x50,&DAT_10853a28);
  pvStack_c = (void *)0x0;
  if (pNVar1 == (NCSpringSimul *)0x0) {
    pNVar1 = (NCSpringSimul *)0x0;
  }
  else {
    pNVar1 = (NCSpringSimul *)NCSpringSimul::NCSpringSimul(pNVar1);
  }
  pvStack_c = (void *)0xffffffff;
  *(NCSpringSimul **)(in_ECX + 0x3bc) = pNVar1;
  iVar2 = NCSpringSimul::Init(pNVar1,pAStack_4,unaff_retaddr);
  if (iVar2 == 0) {
    pNVar1 = *(NCSpringSimul **)(in_ECX + 0x3bc);
    if (pNVar1 != (NCSpringSimul *)0x0) {
      NCSpringSimul::~NCSpringSimul(pNVar1);
      (**(code **)(**(int **)GMalloc_exref + 8))(pNVar1);
    }
    *(undefined4 *)(in_ECX + 0x3bc) = 0;
    ExceptionList = unaff_EDI;
    return 0;
  }
  ExceptionList = unaff_EDI;
  return 1;
}


// ==== 105dc9d0 FUN_105dc9d0

void FUN_105dc9d0(void)

{
  AActor *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108205d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x3bc) != 0) {
    ExceptionList = &local_10;
    thunk_FUN_105dc7b0(1);
    *(undefined4 *)(in_ECX + 0x3bc) = 0;
  }
  AActor::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 105dca34 Catch@105dca34

void Catch_105dca34(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105dca48 Catch@105dca48

void Catch_105dca48(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANLine::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105dca90 FUN_105dca90

void FUN_105dca90(undefined4 param_1,float param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  ushort uVar6;
  int in_ECX;
  float fVar7;
  FSphere aFStack_13c [12];
  undefined4 uStack_130;
  int iStack_12c;
  UClass *pUStack_128;
  FRawIndexBuffer local_100 [12];
  TArray<unsigned_short> local_f4 [12];
  int local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined1 local_d4 [12];
  float *local_c8;
  int local_c4;
  int local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  int local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  void *local_74;
  undefined1 *puStack_70;
  int local_6c;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float *local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ushort *local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puStack_70 = &LAB_10820601;
  local_74 = ExceptionList;
  local_78 = &stack0xfffffee8;
  local_6c = 0;
  if (((*(byte *)(in_ECX + 100) & 0x20) == 0) && (*(int *)(in_ECX + 0x3bc) != 0)) {
    local_40 = *(float *)((int)param_2 + 0x194);
    local_3c = *(float *)((int)param_2 + 0x198);
    local_38 = *(float *)((int)param_2 + 0x19c);
    local_b8 = local_40 - *(float *)(in_ECX + 0x1bc);
    local_b4 = local_3c - *(float *)(in_ECX + 0x1c0);
    local_b0 = local_38 - *(float *)(in_ECX + 0x1c4);
    ExceptionList = &local_74;
    local_24 = local_b0;
    local_8 = local_b4;
    fVar7 = FVector::Size((FVector *)&local_b8);
    if (fVar7 <= 700.0) {
      iVar3 = NCSpringSimul::CalcPosition(*(NCSpringSimul **)(in_ECX + 0x3bc));
      if (iVar3 != 0) {
        thunk_FUN_105139a0();
        local_6c._0_1_ = 1;
        FRawIndexBuffer::FRawIndexBuffer(local_100);
        local_6c = CONCAT31(local_6c._1_3_,2);
        FArray::Add((FArray *)&local_c8,*(int *)(*(int *)(in_ECX + 0x3bc) + 0x48) * 2 + 2,0x10);
        local_34 = local_c8;
        for (local_2c = 0; pfVar2 = local_34, iVar3 = *(int *)(in_ECX + 0x3bc),
            local_2c < *(int *)(iVar3 + 0x48); local_2c = local_2c + 1) {
          iVar1 = local_2c * 0xc;
          pfVar4 = (float *)(*(int *)(iVar3 + 0x40) + iVar1);
          local_e0 = pfVar4[3] - *pfVar4;
          local_dc = pfVar4[4] - pfVar4[1];
          local_d8 = pfVar4[5] - pfVar4[2];
          pfVar4 = (float *)(*(int *)(iVar3 + 0x40) + iVar1);
          local_90 = (pfVar4[2] - local_38) * local_dc - (pfVar4[1] - local_3c) * local_d8;
          local_8c = (*pfVar4 - local_40) * local_d8 - (pfVar4[2] - local_38) * local_e0;
          local_88 = (pfVar4[1] - local_3c) * local_e0 - (*pfVar4 - local_40) * local_dc;
          local_4c = local_e0;
          local_48 = local_dc;
          local_44 = local_d8;
          local_1c = local_90;
          local_18 = local_8c;
          local_14 = local_88;
          local_10 = local_8c;
          local_c = local_90;
          local_8 = local_88;
          FVector::Normalize((FVector *)&local_1c);
          local_1c = local_1c * 0.1;
          local_18 = local_18 * 0.1;
          local_14 = local_14 * 0.1;
          pfVar4 = (float *)(*(int *)(*(int *)(in_ECX + 0x3bc) + 0x40) + iVar1);
          local_ac = *pfVar4 + local_1c;
          local_a8 = pfVar4[1] + local_18;
          local_a4 = pfVar4[2] + local_14;
          *pfVar2 = local_ac;
          pfVar2[1] = local_a8;
          pfVar2[2] = local_a4;
          param_2 = (float)CONCAT13(*(undefined1 *)(in_ECX + 0x3c0),0xc8c8c8);
          pfVar2[3] = param_2;
          pfVar4 = (float *)(*(int *)(*(int *)(in_ECX + 0x3bc) + 0x40) + iVar1);
          local_a0 = *pfVar4 - local_1c;
          local_9c = pfVar4[1] - local_18;
          local_98 = pfVar4[2] - local_14;
          pfVar2[4] = local_a0;
          pfVar2[5] = local_9c;
          pfVar2[6] = local_98;
          local_30 = (float)CONCAT13(*(undefined1 *)(in_ECX + 0x3c0),0xc8c8c8);
          pfVar2[7] = local_30;
          local_34 = pfVar2 + 8;
          local_10 = local_9c;
          local_c = local_a0;
          local_8 = local_98;
          if (local_2c == *(int *)(*(int *)(in_ECX + 0x3bc) + 0x48) + -1) {
            pfVar4 = (float *)(*(int *)(*(int *)(in_ECX + 0x3bc) + 0x40) + 0xc + iVar1);
            local_58 = *pfVar4 + local_1c;
            local_54 = pfVar4[1] + local_18;
            local_50 = pfVar4[2] + local_14;
            *local_34 = local_58;
            pfVar2[9] = local_54;
            pfVar2[10] = local_50;
            local_28 = (float)CONCAT13(*(undefined1 *)(in_ECX + 0x3c0),0xc8c8c8);
            pfVar2[0xb] = local_28;
            pfVar4 = (float *)(*(int *)(*(int *)(in_ECX + 0x3bc) + 0x40) + 0xc + iVar1);
            local_64 = *pfVar4 - local_1c;
            local_60 = pfVar4[1] - local_18;
            local_5c = pfVar4[2] - local_14;
            pfVar2[0xc] = local_64;
            pfVar2[0xd] = local_60;
            pfVar2[0xe] = local_5c;
            local_24 = (float)CONCAT13(*(undefined1 *)(in_ECX + 0x3c0),0xc8c8c8);
            pfVar2[0xf] = local_24;
            local_34 = pfVar2 + 0x10;
            local_10 = local_60;
            local_c = local_64;
            local_8 = local_5c;
          }
        }
        local_bc = local_bc + 1;
        TArray<unsigned_short>::Add(local_f4,*(int *)(iVar3 + 0x48) * 6);
        local_20 = TArray<unsigned_short>::operator()(local_f4,0);
        local_94 = 0;
        while( true ) {
          if (*(int *)(*(int *)(in_ECX + 0x3bc) + 0x48) <= local_94) break;
          uVar6 = (short)local_94 * 2;
          *local_20 = uVar6;
          local_20[1] = uVar6 + 1;
          local_20[2] = uVar6 + 2;
          local_20[3] = uVar6 + 2;
          local_20[4] = uVar6 + 1;
          local_20[5] = uVar6 + 3;
          local_20 = local_20 + 6;
          local_94 = local_94 + 1;
        }
        local_e8 = local_e8 + 1;
        if ((DAT_10c6a5e8 & 1) == 0) {
          DAT_10c6a5e8 = DAT_10c6a5e8 | 1;
          local_6c._0_1_ = 3;
          local_8 = -NAN;
          FSolidColorTexture::FSolidColorTexture((FSolidColorTexture *)&DAT_10c6a5d0);
          _atexit((_func_4879 *)&LAB_1084d190);
          local_6c = CONCAT31(local_6c._1_3_,2);
        }
        if (DAT_10c6a5cc == (UProxyBitmapMaterial *)0x0) {
          pUStack_128 = (UClass *)0x105dcf50;
          FName::FName((FName *)&stack0xfffffee0,0);
          pUStack_128 = &UProxyBitmapMaterial::PrivateStaticClass;
          iStack_12c = 0x105dcf5c;
          DAT_10c6a5cc = (UProxyBitmapMaterial *)thunk_FUN_1053d270();
          thunk_FUN_10530420();
          UProxyBitmapMaterial::SetTextureInterface(DAT_10c6a5cc,(FBaseTexture *)&DAT_10c6a5d0);
        }
        if (DAT_10c6a5c8 == 0) {
          pUStack_128 = (UClass *)0x105dcfa1;
          FName::FName((FName *)&stack0xfffffee0,0);
          pUStack_128 = &UFinalBlend::PrivateStaticClass;
          iStack_12c = 0x105dcfad;
          DAT_10c6a5c8 = thunk_FUN_1053d3f0();
          thunk_FUN_10530420();
          *(undefined1 *)(DAT_10c6a5c8 + 0x57c) = 2;
          *(UProxyBitmapMaterial **)(DAT_10c6a5c8 + 0x578) = DAT_10c6a5cc;
          *(uint *)(DAT_10c6a5c8 + 0x580) = *(uint *)(DAT_10c6a5c8 + 0x580) | 2;
          *(uint *)(DAT_10c6a5c8 + 0x580) = *(uint *)(DAT_10c6a5c8 + 0x580) | 1;
          *(uint *)(DAT_10c6a5c8 + 0x580) = *(uint *)(DAT_10c6a5c8 + 0x580) | 4;
          *(undefined1 *)(DAT_10c6a5c8 + 0x584) = 0;
          *(uint *)(DAT_10c6a5c8 + 0x580) = *(uint *)(DAT_10c6a5c8 + 0x580) | 8;
        }
        (**(code **)*param_4)();
        (**(code **)(*param_4 + 0x1c))();
        pUStack_128 = (UClass *)0x0;
        iStack_12c = DAT_10c6a5c8;
        uStack_130 = 0x105dd049;
        (**(code **)(*param_4 + 0x44))();
        local_84 = 0;
        local_80 = 0;
        local_7c = 0;
        iVar3 = *param_4;
        FSphere::FSphere(aFStack_13c,0,0,0,0);
        (**(code **)(iVar3 + 0x24))(0,1,0,0,0);
        uVar5 = (**(code **)(*param_4 + 0xa8))(0,local_d4);
        uVar5 = (**(code **)(*param_4 + 0xb0))(local_100,uVar5);
        (**(code **)(*param_4 + 0xb4))
                  (0,uVar5,*(int *)(*(int *)(in_ECX + 0x3bc) + 0x48) * 2,0,local_c4 + -1);
        (**(code **)(*param_4 + 4))();
        local_6c._0_1_ = 1;
        FRawIndexBuffer::~FRawIndexBuffer(local_100);
        local_6c = (uint)local_6c._1_3_ << 8;
        thunk_FUN_103abe00();
      }
    }
  }
  ExceptionList = local_74;
  return;
}


// ==== 105dd10c Catch@105dd10c

void Catch_105dd10c(void)

{
  undefined4 *unaff_EBP;
  
  *unaff_EBP = unaff_EBP[-0x1f];
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP,&DAT_10914c48);
}


// ==== 105dd120 Catch@105dd120

void Catch_105dd120(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANLine::Render");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105dd2f0 FUN_105dd2f0

void FUN_105dd2f0(FArchive *param_1)

{
  UPrimitive *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820660;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UPrimitive::Serialize(in_ECX,param_1);
  FArchive::IsPersistent(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 105dd346 Catch@105dd346

void Catch_105dd346(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105dd35a Catch@105dd35a

void Catch_105dd35a(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"ULodMeshInstance::Serialize");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105dd3c0 FUN_105dd3c0

void FUN_105dd3c0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10820679;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105dd4c0 FUN_105dd4c0

int FUN_105dd4c0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x28);
  return *(int *)param_2 + iVar1 * 0x28;
}


// ==== 105dd4f0 FUN_105dd4f0

FArchive * FUN_105dd4f0(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  return param_1;
}


// ==== 105dd550 FUN_105dd550

FArchive * FUN_105dd550(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  return param_1;
}


// ==== 105dd570 FUN_105dd570

FArchive * FUN_105dd570(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,2);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 2),2);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),2);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0xc),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x10),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x14),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x18),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x1c),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x20),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x24),4);
  return param_1;
}


// ==== 105dd650 FUN_105dd650

FArchive * FUN_105dd650(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  return param_1;
}


// ==== 105dd690 FUN_105dd690

int * FUN_105dd690(int *param_1,int param_2)

{
  FArchive *this;
  
  this = (FArchive *)(**(code **)(*param_1 + 0x18))(param_2);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x1c),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x20),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x24),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x10),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x14),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x18),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 4),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 8),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0xc),4);
  (**(code **)(*(int *)this + 4))(param_2 + 0x2a,1);
  (**(code **)(*(int *)this + 4))(param_2 + 0x29,1);
  (**(code **)(*(int *)this + 4))(param_2 + 0x28,1);
  (**(code **)(*(int *)this + 4))(param_2 + 0x2b,1);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x2c),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x30),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x34),4);
  return param_1;
}


// ==== 105dd8a0 FUN_105dd8a0

FArchive * FUN_105dd8a0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820690;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_10333320(param_1,*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_10370df0(4,param_2);
      thunk_FUN_10333320(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105dd970 Catch@105dd970

void Catch_105dd970(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105dd984 Catch@105dd984

void Catch_105dd984(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105dd9f0 FUN_105dd9f0

FArchive * FUN_105dd9f0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108206a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_105dd550(param_1,*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_103718a0(4,param_2);
      thunk_FUN_105dd550(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ddac0 Catch@105ddac0

void Catch_105ddac0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105ddad4 Catch@105ddad4

void Catch_105ddad4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ddb40 FUN_105ddb40

FArchive * FUN_105ddb40(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108206b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,8);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_105dd650(param_1,*(int *)param_2 + iVar1 * 8);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,8,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_10371910(8,param_2);
      thunk_FUN_105dd650(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ddc10 Catch@105ddc10

void Catch_105ddc10(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105ddc24 Catch@105ddc24

void Catch_105ddc24(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ddc90 FUN_105ddc90

void FUN_105ddc90(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108206c9;
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
  FArray::Remove(in_ECX,0,iVar1,0x28);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105ddd50 FUN_105ddd50

FArchive * FUN_105ddd50(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108206e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x28);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_105dd570(param_1,*(int *)param_2 + iVar1 * 0x28);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0x28,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_105dd4c0(0x28,param_2);
      thunk_FUN_105dd570(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105dde23 Catch@105dde23

void Catch_105dde23(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105dde37 Catch@105dde37

void Catch_105dde37(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ddea0 FUN_105ddea0

void FUN_105ddea0(FArchive *param_1)

{
  UMesh *pUVar1;
  int iVar2;
  undefined4 uVar3;
  UMesh *in_ECX;
  TArray<unsigned_short> local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10820701;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  UMesh::Serialize(in_ECX,param_1);
  iVar2 = FArchive::IsSaving(param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(in_ECX + 100) = 5;
  }
  pUVar1 = in_ECX + 100;
  thunk_FUN_10330040(param_1,pUVar1);
  thunk_FUN_10330040(param_1,in_ECX + 0x68);
  thunk_FUN_105dd9f0(param_1,in_ECX + 0x6c);
  if (*(int *)pUVar1 < 2) {
    thunk_FUN_105dd3c0();
    local_8._0_1_ = 1;
    thunk_FUN_105ddd50(param_1,local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_105ddc90();
  }
  thunk_FUN_105dd8a0(param_1,in_ECX + 0x78);
  uVar3 = thunk_FUN_103301d0(param_1,in_ECX + 0x84,in_ECX + 0x90,in_ECX + 0x9c);
  uVar3 = thunk_FUN_103301d0(uVar3);
  thunk_FUN_105dd4f0(uVar3);
  if (*(int *)pUVar1 < 2) {
    TArray<unsigned_short>::TArray<unsigned_short>(local_2c);
    local_8._0_1_ = 2;
    thunk_FUN_10378da0(param_1,local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    TArray<unsigned_short>::~TArray<unsigned_short>(local_2c);
  }
  thunk_FUN_10378da0(param_1,in_ECX + 0xa8);
  thunk_FUN_1039d240(param_1,in_ECX + 0xb4);
  thunk_FUN_10378da0(param_1,in_ECX + 0xc0);
  thunk_FUN_1039d390(param_1,in_ECX + 0xcc);
  thunk_FUN_105ddb40(param_1,in_ECX + 0xd8);
  thunk_FUN_10330060(param_1,in_ECX + 0xe4);
  uVar3 = thunk_FUN_10330060(param_1,in_ECX + 0xf8,in_ECX + 0xe8,in_ECX + 0xec,in_ECX + 0xf0,
                             in_ECX + 0xf4);
  uVar3 = thunk_FUN_10330060(uVar3);
  uVar3 = thunk_FUN_10330040(uVar3);
  uVar3 = thunk_FUN_10330060(uVar3);
  thunk_FUN_10330060(uVar3);
  if (2 < *(int *)pUVar1) {
    thunk_FUN_10330040(param_1,in_ECX + 0x104);
    thunk_FUN_105dd690(param_1,in_ECX + 0x108);
  }
  if (3 < *(int *)pUVar1) {
    thunk_FUN_10330060(param_1,in_ECX + 0x140);
  }
  if (4 < *(int *)pUVar1) {
    thunk_FUN_10330040(param_1,in_ECX + 0x100);
  }
  iVar2 = FArchive::IsLoading(param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(in_ECX + 0xfc) = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105de0ba Catch@105de0ba

void Catch_105de0ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105de0ce Catch@105de0ce

void Catch_105de0ce(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"ULodMesh::Serialize");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105de1a0 FUN_105de1a0

void FUN_105de1a0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820720;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x34) != 0) && ((*(byte *)(in_ECX + 0x3c) & 1) != 0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x34) + 0xa0))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 105de1f6 Catch@105de1f6

void Catch_105de1f6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105de20a Catch@105de20a

void Catch_105de20a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMaterial::CheckFallback");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105de250 FUN_105de250

undefined4 FUN_105de250(void)

{
  int iVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820730;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((byte)*GL2ThreadFilter_exref & 4) != 0) {
    ExceptionList = &local_10;
    iVar1 = UObject::IsLoaded(in_ECX);
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x34) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x34) + 100))(), iVar1 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x38) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x38) + 100))(), iVar1 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105de2e1 Catch@105de2e1

void Catch_105de2e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105de2f5 Catch@105de2f5

void Catch_105de2f5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMaterial::IsLoaded");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105de350 FUN_105de350

void FUN_105de350(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820740;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::PostEditChange(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 105de396 Catch@105de396

void Catch_105de396(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105de3aa Catch@105de3aa

void Catch_105de3aa(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UShader::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105de3f0 FUN_105de3f0

byte FUN_105de3f0(void)

{
  byte bVar1;
  byte bVar2;
  int in_ECX;
  
  bVar1 = 1;
  if (*(int *)(in_ECX + 0x578) != 0) {
    bVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x98))();
    bVar1 = bVar1 | 1;
  }
  if (*(int *)(in_ECX + 0x57c) != 0) {
    bVar2 = (**(code **)(**(int **)(in_ECX + 0x57c) + 0x98))();
    bVar1 = bVar1 | bVar2;
  }
  if (*(int *)(in_ECX + 0x580) != 0) {
    bVar2 = (**(code **)(**(int **)(in_ECX + 0x580) + 0x98))();
    bVar1 = bVar1 | bVar2;
  }
  if (*(int *)(in_ECX + 0x584) != 0) {
    bVar2 = (**(code **)(**(int **)(in_ECX + 0x584) + 0x98))();
    bVar1 = bVar1 | bVar2;
  }
  if (*(int *)(in_ECX + 0x588) != 0) {
    bVar2 = (**(code **)(**(int **)(in_ECX + 0x588) + 0x98))();
    bVar1 = bVar1 | bVar2;
  }
  if (*(int *)(in_ECX + 0x58c) != 0) {
    bVar2 = (**(code **)(**(int **)(in_ECX + 0x58c) + 0x98))();
    bVar1 = bVar1 | bVar2;
  }
  if (*(int *)(in_ECX + 0x590) != 0) {
    bVar2 = (**(code **)(**(int **)(in_ECX + 0x590) + 0x98))();
    bVar1 = bVar1 | bVar2;
  }
  if (*(int *)(in_ECX + 0x5a4) != 0) {
    bVar2 = (**(code **)(**(int **)(in_ECX + 0x5a4) + 0x98))();
    bVar1 = bVar1 | bVar2;
  }
  return bVar1;
}


// ==== 105de510 FUN_105de510

undefined4 FUN_105de510(void)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = *(char *)(in_ECX + 0x598);
  if ((((cVar1 != '\0') || (*(int *)(in_ECX + 0x57c) == 0)) && (cVar1 != '\x02')) &&
     (((cVar1 != '\x05' && (cVar1 != '\x06')) && (cVar1 != '\x03')))) {
    return 0;
  }
  return 1;
}


// ==== 105de550 FUN_105de550

byte FUN_105de550(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x88))();
  return -(iVar1 != 0) & 2;
}


// ==== 105de570 FUN_105de570

undefined4 FUN_105de570(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x578) != 0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x9c))(), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(in_ECX + 0x57c) != 0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0x57c) + 0x9c))(), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(in_ECX + 0x580) != 0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0x580) + 0x9c))(), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(in_ECX + 0x584) != 0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0x584) + 0x9c))(), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(in_ECX + 0x588) != 0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0x588) + 0x9c))(), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(in_ECX + 0x58c) != 0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0x58c) + 0x9c))(), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(in_ECX + 0x590) != 0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0x590) + 0x9c))(), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(in_ECX + 0x5a4) != 0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0x5a4) + 0x9c))(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


// ==== 105de6c0 FUN_105de6c0

void FUN_105de6c0(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105de6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x88))();
  return;
}


// ==== 105de6d0 FUN_105de6d0

undefined4 FUN_105de6d0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105de6e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x80))();
    return uVar1;
  }
  if (*(int *)(in_ECX + 0x588) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105de700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x588) + 0x80))();
    return uVar1;
  }
  return 0;
}


// ==== 105de720 FUN_105de720

undefined4 FUN_105de720(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105de737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x84))();
    return uVar1;
  }
  if (*(int *)(in_ECX + 0x588) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105de750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x588) + 0x84))();
    return uVar1;
  }
  return 0;
}


// ==== 105de770 FUN_105de770

undefined4 FUN_105de770(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105de784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x78))();
    return uVar1;
  }
  if (*(int *)(in_ECX + 0x588) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105de79a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x588) + 0x78))();
    return uVar1;
  }
  return 0;
}


// ==== 105de7b0 FUN_105de7b0

undefined4 FUN_105de7b0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105de7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x7c))();
    return uVar1;
  }
  if (*(int *)(in_ECX + 0x588) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105de7da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x588) + 0x7c))();
    return uVar1;
  }
  return 0;
}


// ==== 105de7f0 FUN_105de7f0

void FUN_105de7f0(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  int iVar3;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820750;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UMaterial::PostEditChange((UMaterial *)in_ECX);
  while( true ) {
    pUVar1 = UObject::GetOuter(in_ECX);
    if (pUVar1 == (UObject *)0x0) break;
    in_ECX = UObject::GetOuter(in_ECX);
  }
  if (in_ECX != (UObject *)0x0) {
    pUVar2 = UPackage::StaticClass();
    iVar3 = UObject::IsA(in_ECX,pUVar2);
    if (iVar3 != 0) {
      *(undefined4 *)(in_ECX + 0x40) = 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105de86e Catch@105de86e

void Catch_105de86e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105de882 Catch@105de882

void Catch_105de882(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UShader::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105de8d0 FUN_105de8d0

undefined4 FUN_105de8d0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x34) == 0) && (*(int *)(in_ECX + 0x578) == 0)) {
    return 0;
  }
  return 1;
}


// ==== 105de8f0 FUN_105de8f0

int FUN_105de8f0(void)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820760;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(byte *)(in_ECX + 0x3c) & 1) != 0) {
    if (*(int *)(in_ECX + 0x34) == 0) {
      if (*(int *)(in_ECX + 0x578) == 0) {
        return 0;
      }
      piVar1 = *(int **)(in_ECX + 0x578);
    }
    else {
      piVar1 = *(int **)(in_ECX + 0x34);
    }
    ExceptionList = &local_10;
    in_ECX = (**(code **)(*piVar1 + 0xa0))();
  }
  ExceptionList = local_10;
  return in_ECX;
}


// ==== 105de96a Catch@105de96a

void Catch_105de96a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105de97e Catch@105de97e

void Catch_105de97e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UShader::CheckFallback");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105de9d0 FUN_105de9d0

void FUN_105de9d0(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820770;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x578) != 0) {
    ExceptionList = &local_10;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x578) + 0xa0))();
    (**(code **)(*piVar1 + 0x74))(param_1);
  }
  if (*(int *)(in_ECX + 0x57c) != 0) {
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x57c) + 0xa0))();
    (**(code **)(*piVar1 + 0x74))(param_1);
  }
  if (*(int *)(in_ECX + 0x580) != 0) {
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x580) + 0xa0))();
    (**(code **)(*piVar1 + 0x74))(param_1);
  }
  if (*(int *)(in_ECX + 0x584) != 0) {
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x584) + 0xa0))();
    (**(code **)(*piVar1 + 0x74))(param_1);
  }
  if (*(int *)(in_ECX + 0x588) != 0) {
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x588) + 0xa0))();
    (**(code **)(*piVar1 + 0x74))(param_1);
  }
  if (*(int *)(in_ECX + 0x58c) != 0) {
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x58c) + 0xa0))();
    (**(code **)(*piVar1 + 0x74))(param_1);
  }
  if (*(int *)(in_ECX + 0x590) != 0) {
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x590) + 0xa0))();
    (**(code **)(*piVar1 + 0x74))(param_1);
  }
  if (*(int *)(in_ECX + 0x5a4) != 0) {
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x5a4) + 0xa0))();
    (**(code **)(*piVar1 + 0x74))(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105deb5e Catch@105deb5e

void Catch_105deb5e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105deb72 Catch@105deb72

void Catch_105deb72(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UShader::PreSetMaterial");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105dec00 FUN_105dec00

undefined4 FUN_105dec00(void)

{
  int iVar1;
  UMaterial *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820780;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((byte)*GL2ThreadFilter_exref & 4) != 0) {
    ExceptionList = &local_10;
    iVar1 = UMaterial::IsLoaded(in_ECX);
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x578) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 100))(), iVar1 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x57c) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x57c) + 100))(), iVar1 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x580) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x580) + 100))(), iVar1 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x584) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x584) + 100))(), iVar1 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x588) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x588) + 100))(), iVar1 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x590) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x590) + 100))(), iVar1 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x5a4) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x5a4) + 100))(), iVar1 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105ded32 Catch@105ded32

void Catch_105ded32(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105ded46 Catch@105ded46

void Catch_105ded46(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UShader::IsLoaded");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105dedc0 FUN_105dedc0

void FUN_105dedc0(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  int iVar3;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820790;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UMaterial::PostEditChange((UMaterial *)in_ECX);
  while( true ) {
    pUVar1 = UObject::GetOuter(in_ECX);
    if (pUVar1 == (UObject *)0x0) break;
    in_ECX = UObject::GetOuter(in_ECX);
  }
  if (in_ECX != (UObject *)0x0) {
    pUVar2 = UPackage::StaticClass();
    iVar3 = UObject::IsA(in_ECX,pUVar2);
    if (iVar3 != 0) {
      *(undefined4 *)(in_ECX + 0x40) = 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105dee3e Catch@105dee3e

void Catch_105dee3e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105dee52 Catch@105dee52

void Catch_105dee52(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UCombiner::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105deea0 FUN_105deea0

void FUN_105deea0(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108207a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x57c) != 0) {
    ExceptionList = &local_10;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x57c) + 0xa0))();
    (**(code **)(*piVar1 + 0x74))(param_1);
  }
  if (*(int *)(in_ECX + 0x580) != 0) {
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x580) + 0xa0))();
    (**(code **)(*piVar1 + 0x74))(param_1);
  }
  piVar1 = *(int **)(in_ECX + 0x584);
  if (((piVar1 != (int *)0x0) && (piVar1 != *(int **)(in_ECX + 0x57c))) &&
     (piVar1 != *(int **)(in_ECX + 0x580))) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0xa0))();
    (**(code **)(*piVar1 + 0x74))(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105def6e Catch@105def6e

void Catch_105def6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105def82 Catch@105def82

void Catch_105def82(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UCombiner::PreSetMaterial");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105defe0 FUN_105defe0

undefined4 FUN_105defe0(void)

{
  int iVar1;
  UMaterial *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108207b0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((byte)*GL2ThreadFilter_exref & 4) != 0) {
    ExceptionList = &local_10;
    iVar1 = UMaterial::IsLoaded(in_ECX);
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x57c) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x57c) + 100))(), iVar1 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x580) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x580) + 100))(), iVar1 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x584) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x584) + 100))(), iVar1 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105df096 Catch@105df096

void Catch_105df096(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105df0aa Catch@105df0aa

void Catch_105df0aa(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UCombiner::IsLoaded");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105df100 FUN_105df100

void FUN_105df100(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  int iVar3;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108207c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UMaterial::PostEditChange((UMaterial *)in_ECX);
  while( true ) {
    pUVar1 = UObject::GetOuter(in_ECX);
    if (pUVar1 == (UObject *)0x0) break;
    in_ECX = UObject::GetOuter(in_ECX);
  }
  if (in_ECX != (UObject *)0x0) {
    pUVar2 = UPackage::StaticClass();
    iVar3 = UObject::IsA(in_ECX,pUVar2);
    if (iVar3 != 0) {
      *(undefined4 *)(in_ECX + 0x40) = 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105df17e Catch@105df17e

void Catch_105df17e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105df192 Catch@105df192

void Catch_105df192(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModifier::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105df1e0 FUN_105df1e0

undefined4 FUN_105df1e0(void)

{
  int iVar1;
  UMaterial *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108207d0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((byte)*GL2ThreadFilter_exref & 4) != 0) {
    ExceptionList = &local_10;
    iVar1 = UMaterial::IsLoaded(in_ECX);
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    if ((*(int *)(in_ECX + 0x578) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 100))(), iVar1 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105df262 Catch@105df262

void Catch_105df262(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105df276 Catch@105df276

void Catch_105df276(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModifier::IsLoaded");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105df2c0 FUN_105df2c0

void FUN_105df2c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105df2d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x578) + 0x78))();
    return;
  }
  return;
}


// ==== 105df2e0 FUN_105df2e0

void FUN_105df2e0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105df2f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x578) + 0x7c))();
    return;
  }
  return;
}


// ==== 105df300 FUN_105df300

uint FUN_105df300(void)

{
  uint uVar1;
  int in_ECX;
  
  if (7 < *(byte *)(in_ECX + 0x57c)) {
    if (*(int *)(in_ECX + 0x578) != 0) {
      uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x98))();
      return uVar1 & 0xff;
    }
    return 1;
  }
  if (*(int *)(in_ECX + 0x578) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x98))();
    return 1 << (*(byte *)(in_ECX + 0x57c) & 0x1f) | uVar1 & 0xff;
  }
  return 1 << (*(byte *)(in_ECX + 0x57c) & 0x1f) | 1;
}


// ==== 105df390 FUN_105df390

undefined4 FUN_105df390(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105df3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x6c))();
    return uVar1;
  }
  return 1;
}


// ==== 105df3c0 FUN_105df3c0

void FUN_105df3c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105df3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x578) + 0x70))();
    return;
  }
  return;
}


// ==== 105df3e0 FUN_105df3e0

float * FUN_105df3e0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  float *pfVar5;
  float *pfVar6;
  float unaff_retaddr;
  float local_5c;
  float local_58;
  float local_50 [9];
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_108207e9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FRotator::Vector((FRotator *)(in_ECX + 0x584));
  fVar1 = *(float *)(in_ECX + 0x590) * unaff_retaddr;
  fVar2 = local_5c * fVar1 * 0.0009765625;
  fVar1 = local_58 * fVar1 * 0.0009765625;
  iVar3 = appFloor(fVar2);
  iVar4 = appFloor(fVar1);
  local_50[0] = 1.0;
  local_50[1] = 0.0;
  local_50[2] = 0.0;
  local_50[3] = 0.0;
  local_50[4] = 0.0;
  local_50[6] = 0.0;
  local_50[7] = 0.0;
  local_50[5] = 1.0;
  local_50[8] = (fVar2 - (float)iVar3) * 1024.0;
  local_2c = (fVar1 - (float)iVar4) * 1024.0;
  local_28 = 0x3f800000;
  local_14 = 0x3f800000;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_8 = (undefined1 *)0x0;
  pfVar5 = local_50;
  pfVar6 = (float *)(in_ECX + 0x594);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  local_8 = (undefined1 *)0xffffffff;
  FMatrix::~FMatrix((FMatrix *)local_50);
  ExceptionList = local_10;
  return (float *)(in_ECX + 0x594);
}


// ==== 105df570 FUN_105df570

float * FUN_105df570(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  float *pfVar5;
  float *pfVar6;
  float afStack_4c [6];
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10820809;
  pvStack_c = ExceptionList;
  fVar1 = (float)in_ECX[0x164];
  ExceptionList = &pvStack_c;
  iVar3 = (**(code **)(*in_ECX + 0x7c))();
  fVar2 = (float)in_ECX[0x163];
  iVar4 = (**(code **)(*in_ECX + 0x78))();
  afStack_4c[0] = 1.0 / (float)in_ECX[0x161];
  afStack_4c[1] = 0.0;
  afStack_4c[2] = 0.0;
  afStack_4c[3] = 0.0;
  afStack_4c[4] = 0.0;
  afStack_4c[5] = 1.0 / (float)in_ECX[0x162];
  uStack_34 = 0;
  uStack_30 = 0;
  fStack_2c = fVar2 / (float)iVar4;
  fStack_28 = fVar1 / (float)iVar3;
  uStack_24 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_4 = 0;
  pfVar5 = afStack_4c;
  pfVar6 = (float *)(in_ECX + 0x165);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  uStack_4 = 0xffffffff;
  FMatrix::~FMatrix((FMatrix *)afStack_4c);
  ExceptionList = pvStack_c;
  return (float *)(in_ECX + 0x165);
}


// ==== 105df6d0 FUN_105df6d0

void FUN_105df6d0(void)

{
  UModifier *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820820;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UModifier::PostEditChange(in_ECX);
  *(undefined4 *)(in_ECX + 0x5ac) = 0;
  *(undefined4 *)(in_ECX + 0x5a8) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 105df727 Catch@105df727

void Catch_105df727(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105df73b Catch@105df73b

void Catch_105df73b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTexOscillator::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105df780 FUN_105df780

float * FUN_105df780(float param_1)

{
  int iVar1;
  FMatrix *pFVar2;
  float *pfVar3;
  int *in_ECX;
  int iVar4;
  float *pfVar5;
  float **ppfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined4 auStack_244 [15];
  undefined4 uStack_208;
  undefined1 *puStack_204;
  float afStack_200 [13];
  undefined4 uStack_1cc;
  FMatrix aFStack_188 [4];
  float *local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  float fStack_160;
  float fStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  void *pvStack_d4;
  int iStack_cc;
  undefined1 auStack_c0 [56];
  undefined1 uStack_88;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_1082085d;
  local_4c = ExceptionList;
  iVar1 = in_ECX[0x167];
  fVar10 = param_1 * (float)in_ECX[0x161];
  local_184 = (float *)(in_ECX + 0x16e);
  param_1 = param_1 * (float)in_ECX[0x162];
  pfVar5 = (float *)Identity_exref;
  pfVar3 = local_184;
  ExceptionList = &local_4c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar3 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar3 = pfVar3 + 1;
  }
  switch((char)iVar1) {
  case '\0':
    iVar1 = appFloor(fVar10);
    uStack_1cc = 0x105df8cd;
    dVar11 = appSin((double)(float)in_ECX[0x163] * 6.283185307179586 +
                    ((double)fVar10 - (double)iVar1) * 6.283185307179586);
    in_ECX[0x176] = (int)((float)dVar11 * (float)in_ECX[0x165]);
    break;
  case '\x01':
    iVar1 = appFloor(fVar10);
    uStack_1cc = 0x105df91a;
    dVar11 = appSin((double)(float)in_ECX[0x163] * 6.283185307179586 +
                    ((double)fVar10 - (double)iVar1) * 6.283185307179586);
    *local_184 = (float)dVar11 * (float)in_ECX[0x165] + 1.0;
    break;
  case '\x02':
    iVar1 = appFloor(fVar10);
    uStack_1cc = 0x105df96e;
    dVar11 = appSin((double)(float)in_ECX[0x163] * 6.283185307179586 +
                    ((double)fVar10 - (double)iVar1) * 1.5707963267948966);
    *local_184 = (float)dVar11 * (float)in_ECX[0x165] + 1.0;
    break;
  case '\x03':
    if (((float)in_ECX[0x16a] < 1.0) || (fVar10 + 1.0 < (float)in_ECX[0x16a])) {
      iVar1 = appFloor(fVar10);
      in_ECX[0x16a] = (int)((float)iVar1 + (float)in_ECX[0x163]);
    }
    if (1.0 < fVar10 - (float)in_ECX[0x16a]) {
      fVar9 = appFrand();
      in_ECX[0x16c] = (int)(fVar9 * (float)in_ECX[0x165]);
      iVar1 = appFloor(fVar10);
      in_ECX[0x16a] = (int)((float)iVar1 + (float)in_ECX[0x163]);
    }
    in_ECX[0x176] = in_ECX[0x16c];
  }
  switch(*(undefined1 *)((int)in_ECX + 0x59d)) {
  case 0:
    iVar1 = appFloor(param_1);
    uStack_1cc = 0x105dfa78;
    dVar11 = appSin((double)(float)in_ECX[0x164] * 6.283185307179586 +
                    ((double)param_1 - (double)iVar1) * 6.283185307179586);
    in_ECX[0x177] = (int)((float)dVar11 * (float)in_ECX[0x166]);
    break;
  case 1:
    iVar1 = appFloor(param_1);
    dVar11 = ((double)param_1 - (double)iVar1) * 6.283185307179586;
    fVar10 = (float)in_ECX[0x164];
    goto LAB_105dfae4;
  case 2:
    iVar1 = appFloor(param_1);
    dVar11 = ((double)param_1 - (double)iVar1) * 1.5707963267948966;
    fVar10 = (float)in_ECX[0x164];
LAB_105dfae4:
    uStack_1cc = 0x105dfaf0;
    dVar11 = appSin((double)fVar10 * 6.283185307179586 + dVar11);
    in_ECX[0x173] = (int)((float)dVar11 * (float)in_ECX[0x166] + 1.0);
    break;
  case 3:
    if (((float)in_ECX[0x16b] < 1.0) || (param_1 + 1.0 < (float)in_ECX[0x16a])) {
      iVar1 = appFloor(param_1);
      in_ECX[0x16b] = (int)((float)iVar1 + (float)in_ECX[0x164]);
    }
    if (1.0 < param_1 - (float)in_ECX[0x16b]) {
      fVar10 = appFrand();
      in_ECX[0x16d] = (int)(fVar10 * (float)in_ECX[0x166]);
      iVar1 = appFloor(param_1);
      in_ECX[0x16b] = (int)((float)iVar1 + (float)in_ECX[0x164]);
    }
    in_ECX[0x177] = in_ECX[0x16d];
  }
  if (((float)in_ECX[0x168] == 0.0) && ((float)in_ECX[0x169] == 0.0)) {
    ExceptionList = local_4c;
    return local_184;
  }
  fVar10 = (float)in_ECX[0x168];
  iVar1 = (**(code **)(*in_ECX + 0x78))();
  fVar9 = (float)in_ECX[0x169];
  iVar4 = (**(code **)(*in_ECX + 0x7c))();
  pfVar5 = local_184;
  fStack_11c = fVar9 / (float)iVar4;
  uStack_140 = 0x3f800000;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_12c = 0x3f800000;
  uStack_118 = 0x3f800000;
  uStack_104 = 0x3f800000;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  fStack_160 = -(fVar10 / (float)iVar1);
  fStack_15c = -fStack_11c;
  uStack_180 = 0x3f800000;
  uStack_16c = 0x3f800000;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_158 = 0x3f800000;
  uStack_144 = 0x3f800000;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_44 = 1;
  pfVar3 = local_184;
  pfVar8 = afStack_200;
  fStack_120 = fVar10 / (float)iVar1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar8 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar8 = pfVar8 + 1;
  }
  puStack_204 = auStack_c0;
  uStack_208 = 0x105dfca6;
  pFVar2 = (FMatrix *)FMatrix::operator*((FMatrix *)&uStack_180);
  uStack_88 = 2;
  ppfVar6 = &local_184;
  puVar7 = auStack_244;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = *ppfVar6;
    ppfVar6 = ppfVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  pfVar3 = (float *)FMatrix::operator*(pFVar2,&uStack_144);
  iStack_cc._1_3_ = (uint3)((uint)iStack_cc >> 8);
  pfVar8 = pfVar5;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar8 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar8 = pfVar8 + 1;
  }
  iStack_cc._0_1_ = 2;
  FMatrix::~FMatrix(aFStack_188);
  iStack_cc._0_1_ = 1;
  FMatrix::~FMatrix((FMatrix *)&uStack_148);
  iStack_cc = (uint)iStack_cc._1_3_ << 8;
  FMatrix::~FMatrix((FMatrix *)&uStack_208);
  iStack_cc = 0xffffffff;
  FMatrix::~FMatrix((FMatrix *)&stack0xfffffe38);
  ExceptionList = pvStack_d4;
  return pfVar5;
}


// ==== 105dff00 FUN_105dff00

undefined4 FUN_105dff00(void)

{
  int in_ECX;
  
  switch(*(undefined1 *)(in_ECX + 0x584)) {
  case 0:
    *(undefined1 *)(in_ECX + 0x57c) = 10;
    return 0;
  case 1:
    *(undefined1 *)(in_ECX + 0x57c) = 0xb;
    return 0;
  case 2:
    *(undefined1 *)(in_ECX + 0x57c) = 0xd;
    return 0;
  case 3:
    *(undefined1 *)(in_ECX + 0x57c) = 0xe;
  }
  return 0;
}


// ==== 105dff70 FUN_105dff70

undefined4 FUN_105dff70(void)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = *(char *)(in_ECX + 0x57c);
  if ((((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x03')) &&
     (((cVar1 != '\x04' && (cVar1 != '\x05')) && (cVar1 != '\x06')))) {
    return 0;
  }
  return 1;
}


// ==== 105dffa0 FUN_105dffa0

int FUN_105dffa0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x88))();
  if (iVar1 != 0) {
    return 2 - (uint)((*(byte *)(in_ECX + 0x160) & 1) != 0);
  }
  return 0;
}


// ==== 105dffd0 FUN_105dffd0

void FUN_105dffd0(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105dffd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x88))();
  return;
}


// ==== 105dffe0 FUN_105dffe0

void FUN_105dffe0(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  int iVar3;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820880;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UModifier::PostEditChange((UModifier *)in_ECX);
  while( true ) {
    pUVar1 = UObject::GetOuter(in_ECX);
    if (pUVar1 == (UObject *)0x0) break;
    in_ECX = UObject::GetOuter(in_ECX);
  }
  if (in_ECX != (UObject *)0x0) {
    pUVar2 = UPackage::StaticClass();
    iVar3 = UObject::IsA(in_ECX,pUVar2);
    if (iVar3 != 0) {
      *(undefined4 *)(in_ECX + 0x40) = 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105e005e Catch@105e005e

void Catch_105e005e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e0072 Catch@105e0072

void Catch_105e0072(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UFinalBlend::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e00c0 FUN_105e00c0

undefined4 FUN_105e00c0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105e00d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x6c))();
    return uVar1;
  }
  return 1;
}


// ==== 105e00f0 FUN_105e00f0

void FUN_105e00f0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105e0104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x578) + 0x70))();
    return;
  }
  return;
}


// ==== 105e0110 FUN_105e0110

void FUN_105e0110(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x590) = 0;
  *(undefined4 *)(in_ECX + 0x594) = 0;
  return;
}


// ==== 105e0130 FUN_105e0130

void FUN_105e0130(void)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = *(char *)(in_ECX + 0x588);
  if (cVar1 == '\x01') {
    *(undefined4 *)(in_ECX + 0x590) = 0;
    *(undefined4 *)(in_ECX + 0x594) = 0;
  }
  else {
    if (cVar1 == '\x02') {
      *(uint *)(in_ECX + 0x58c) = *(uint *)(in_ECX + 0x58c) ^ 2;
      return;
    }
    if (cVar1 == '\x03') {
      *(uint *)(in_ECX + 0x58c) = *(uint *)(in_ECX + 0x58c) | 2;
      return;
    }
  }
  return;
}


// ==== 105e0190 FUN_105e0190

void FUN_105e0190(void)

{
  UObject *in_ECX;
  
  UObject::Destroy(in_ECX);
  if (*(undefined4 **)(in_ECX + 0x588) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x588))(1);
  }
  if (*(int *)(in_ECX + 0x584) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0x584));
  }
  return;
}


// ==== 105e01e0 FUN_105e01e0

undefined4 FUN_105e01e0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105e01f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x78))();
    return uVar1;
  }
  return 0;
}


// ==== 105e0200 FUN_105e0200

undefined4 FUN_105e0200(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105e0214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x7c))();
    return uVar1;
  }
  return 0;
}


// ==== 105e0220 FUN_105e0220

undefined4 FUN_105e0220(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105e0237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x80))();
    return uVar1;
  }
  return 0;
}


// ==== 105e0250 FUN_105e0250

undefined4 FUN_105e0250(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105e0267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x84))();
    return uVar1;
  }
  return 0;
}


// ==== 105e0280 FUN_105e0280

undefined4 FUN_105e0280(char *param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int in_ECX;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *local_28;
  int local_24;
  int local_20;
  char *local_1c;
  char *local_18;
  
  if ((*(int *)(in_ECX + 0x584) != 0) && (param_4 == '\x05')) {
    local_28 = *(char **)(in_ECX + 0x584);
    pcVar6 = param_1;
    for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
      local_1c = param_1;
      if (local_20 != param_3 + -1) {
        local_1c = pcVar6 + param_2 * 4;
      }
      pcVar7 = param_1 + (param_3 + -1) * param_2 * 4;
      if (local_20 != 0) {
        pcVar7 = pcVar6 + param_2 * -4;
      }
      pcVar5 = local_28;
      local_18 = pcVar6;
      for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
        if (local_24 == param_2 + -1) {
          cVar1 = *pcVar6;
        }
        else {
          cVar1 = local_18[4];
        }
        if (local_24 == 0) {
          cVar2 = pcVar6[param_2 * 4 + -4];
        }
        else {
          cVar2 = local_18[-4];
        }
        cVar3 = *local_1c;
        cVar4 = *pcVar7;
        *pcVar5 = cVar2 - cVar1;
        pcVar5[1] = cVar4 - cVar3;
        pcVar5 = pcVar5 + 2;
        local_18 = local_18 + 4;
        local_1c = local_1c + 4;
        pcVar7 = pcVar7 + 4;
      }
      pcVar6 = pcVar6 + param_2 * 4;
      local_28 = local_28 + param_2 * 2;
    }
    return 1;
  }
  return 0xffffffff;
}


// ==== 105e03dd Catch@105e03dd

void Catch_105e03dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 105e03f1 Catch@105e03f1

void Catch_105e03f1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TEXF_RGBA8");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e042e Catch@105e042e

void Catch_105e042e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 105e0442 Catch@105e0442

void Catch_105e0442(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TEXF_P8");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e0449 Catch@105e0449

void Catch_105e0449(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 105e045a Catch@105e045a

void Catch_105e045a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UBumpShader::MakeBumpRawData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e04e0 FUN_105e04e0

void FUN_105e04e0(void)

{
  UObject *in_ECX;
  
  UObject::Destroy(in_ECX);
  if (*(int *)(in_ECX + 0x580) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0x580));
    *(undefined4 *)(in_ECX + 0x580) = 0;
  }
  if (*(undefined4 **)(in_ECX + 0x57c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x57c))(1);
    *(undefined4 *)(in_ECX + 0x57c) = 0;
  }
  return;
}


// ==== 105e0540 FUN_105e0540

undefined4 FUN_105e0540(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x580);
}


// ==== 105e0550 FUN_105e0550

undefined4 FUN_105e0550(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105e0564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x78))();
    return uVar1;
  }
  return 0;
}


// ==== 105e0570 FUN_105e0570

undefined4 FUN_105e0570(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105e0584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x7c))();
    return uVar1;
  }
  return 0;
}


// ==== 105e0590 FUN_105e0590

undefined4 FUN_105e0590(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105e05a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x80))();
    return uVar1;
  }
  return 0;
}


// ==== 105e05c0 FUN_105e05c0

undefined4 FUN_105e05c0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x105e05d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x84))();
    return uVar1;
  }
  return 0;
}


// ==== 105e05f0 FUN_105e05f0

void FUN_105e05f0(int param_1)

{
  int *in_ECX;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc4) = 2;
    *(int *)(param_1 + 0xbc) = in_ECX[0x15f];
  }
  (**(code **)(*in_ECX + 0x88))();
  return;
}


// ==== 105e06d0 FUN_105e06d0

FArchive * FUN_105e06d0(FArchive *param_1,int param_2)

{
  (**(code **)(*(int *)param_1 + 4))(param_2 + 2,1);
  (**(code **)(*(int *)param_1 + 4))(param_2 + 1,1);
  (**(code **)(*(int *)param_1 + 4))(param_2,1);
  (**(code **)(*(int *)param_1 + 4))(param_2 + 3,1);
  (**(code **)(*(int *)param_1 + 4))(param_2 + 6,1);
  (**(code **)(*(int *)param_1 + 4))(param_2 + 5,1);
  (**(code **)(*(int *)param_1 + 4))(param_2 + 4,1);
  (**(code **)(*(int *)param_1 + 4))(param_2 + 7,1);
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 8),4);
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0xc),4);
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x10),4);
  return param_1;
}


// ==== 105e07b0 FUN_105e07b0

FArchive * FUN_105e07b0(FArchive *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  
  (**(code **)(*(int *)param_1 + 4))(param_2,1);
  (**(code **)(*(int *)param_1 + 4))(param_2 + 1,1);
  (**(code **)(*(int *)param_1 + 4))(param_2 + 2,1);
  (**(code **)(*(int *)param_1 + 4))(param_2 + 3,1);
  (**(code **)(*(int *)param_1 + 4))(param_2 + 4,1);
  (**(code **)(*(int *)param_1 + 4))(param_2 + 5,1);
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 8),4);
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0xc),4);
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x10),4);
  iVar1 = param_2 + 0x16;
  iVar4 = 8;
  do {
    (**(code **)(*(int *)param_1 + 4))(iVar1 + -2,1);
    (**(code **)(*(int *)param_1 + 4))(iVar1 + -1,1);
    iVar2 = 0;
    do {
      (**(code **)(*(int *)param_1 + 4))(iVar1 + iVar2,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x7e);
    iVar1 = iVar1 + 0x80;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  thunk_FUN_105e06d0(param_1,param_2 + 0x414);
  pFVar3 = (FString *)(param_2 + 0x468);
  iVar1 = 0x10;
  do {
    operator<<(param_1,pFVar3);
    pFVar3 = pFVar3 + 0xc;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return param_1;
}


// ==== 105e0910 FUN_105e0910

void FUN_105e0910(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108208c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UMaterial::vftable;
  FMaterialProperty::FMaterialProperty((FMaterialProperty *)(in_ECX + 0x44));
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString((FString *)(in_ECX + 0x56c));
  ExceptionList = local_c;
  return;
}


// ==== 105e0990 FUN_105e0990

void FUN_105e0990(FArchive *param_1)

{
  int iVar1;
  UObject *in_ECX;
  
  if (((byte)*GUglyHackFlags_exref & 8) == 0) {
    UObject::Serialize(in_ECX,param_1);
  }
  iVar1 = FArchive::Ver(param_1);
  if (0x7a < iVar1) {
    iVar1 = FArchive::LicenseeVer(param_1);
    if (0xf < iVar1) {
      FArchive::ByteOrderSerialize(param_1,in_ECX + 0x40,4);
    }
  }
  iVar1 = FArchive::Ver(param_1);
  if (0x7a < iVar1) {
    iVar1 = FArchive::LicenseeVer(param_1);
    if (0x1d < iVar1) {
      *(undefined4 *)(in_ECX + 0x46c) = 0;
      *(undefined4 *)(in_ECX + 0x470) = 0;
      *(undefined4 *)(in_ECX + 0x474) = 0;
      *(undefined4 *)(in_ECX + 0x478) = 0;
      *(undefined4 *)(in_ECX + 0x47c) = 0;
      *(undefined4 *)(in_ECX + 0x480) = 0;
      *(undefined4 *)(in_ECX + 0x484) = 0;
      *(undefined4 *)(in_ECX + 0x488) = 0;
      *(undefined4 *)(in_ECX + 0x48c) = 0;
      *(undefined4 *)(in_ECX + 0x490) = 0;
      *(undefined4 *)(in_ECX + 0x494) = 0;
      *(undefined4 *)(in_ECX + 0x498) = 0;
      *(undefined4 *)(in_ECX + 0x49c) = 0;
      *(undefined4 *)(in_ECX + 0x4a0) = 0;
      *(undefined4 *)(in_ECX + 0x4a4) = 0;
      *(undefined4 *)(in_ECX + 0x4a8) = 0;
      thunk_FUN_105e07b0(param_1,in_ECX + 0x44);
      operator<<(param_1,(FString *)(in_ECX + 0x56c));
    }
  }
  return;
}


// ==== 105e0ab0 FUN_105e0ab0

void FUN_105e0ab0(float param_1)

{
  float fVar1;
  UTexPanner *in_ECX;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108208e0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (0.0 <= *(float *)(in_ECX + 0x5dc)) {
    local_18 = *(float *)(in_ECX + 0x5d8) / *(float *)(in_ECX + 0x590);
    if (((byte)in_ECX[0x5e0] & 1) == 0) {
      fVar1 = param_1 - *(float *)(in_ECX + 0x5dc);
      if (local_18 < param_1 - *(float *)(in_ECX + 0x5dc)) goto LAB_105e0b4b;
    }
    else {
      fVar1 = local_18 - (param_1 - *(float *)(in_ECX + 0x5dc));
      if (fVar1 < 0.0) {
        local_18 = 0.0;
        goto LAB_105e0b4b;
      }
    }
    local_18 = fVar1;
  }
  else {
    local_18 = 0.0;
  }
LAB_105e0b4b:
  if (*(int *)GIsEditor_exref != 0) {
    local_18 = param_1;
  }
  ExceptionList = &local_10;
  UTexPanner::GetMatrix(in_ECX,local_18);
  ExceptionList = local_10;
  return;
}


// ==== 105e0b80 Catch@105e0b80

void Catch_105e0b80(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105e0b94 Catch@105e0b94

void Catch_105e0b94(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTexPannerTriggered::GetMatrix");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e0c00 FUN_105e0c00

int * FUN_105e0c00(float param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  FMatrix *pFVar5;
  int *piVar6;
  int *in_ECX;
  int iVar7;
  int **ppiVar8;
  undefined4 *puVar9;
  int *piVar10;
  double dVar11;
  undefined4 auStack_288 [15];
  undefined4 uStack_24c;
  undefined1 *puStack_248;
  int aiStack_244 [11];
  FMatrix aFStack_218 [4];
  undefined4 uStack_214;
  uint local_210;
  FMatrix aFStack_1d8 [4];
  int *apiStack_1d4 [4];
  int *local_1c4;
  undefined1 local_1c0 [8];
  undefined8 local_1b8;
  float fStack_1ac;
  undefined8 local_1a8;
  float local_1a0 [4];
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  float fStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  FRotator local_10c [8];
  FMatrix local_104 [44];
  void *pvStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_c4 [56];
  undefined1 uStack_8c;
  void *pvStack_50;
  void *local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  local_48 = &LAB_10820962;
  local_4c = ExceptionList;
  if ((char)in_ECX[0x161] == '\x01') {
    ExceptionList = &local_4c;
    FRotator::operator*((FRotator *)(in_ECX + 0x162),(float)&local_1b8);
    local_210 = local_1c0._4_4_ & 0xffff;
    local_1b8._0_4_ = (uint)local_1b8 & 0xffff;
    local_1b8._4_4_ = local_1b8._4_4_ & 0xffff;
    uStack_214 = 0x105e0e7a;
    local_1c0._4_4_ = local_210;
    piVar1 = (int *)thunk_FUN_105263f0();
    apiStack_1d4[3] = in_ECX + 0x171;
    piVar6 = apiStack_1d4[3];
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar6 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar6 = piVar6 + 1;
    }
    local_48 = (undefined1 *)0xffffffff;
    pFVar5 = local_104;
  }
  else if ((char)in_ECX[0x161] == '\x02') {
    local_1c4 = (int *)(((float)in_ECX[0x168] * param_1) / 65535.0);
    local_1c0 = (undefined1  [8])(double)(float)local_1c4;
    ExceptionList = &local_4c;
    local_1c4 = (int *)appFloor((float)local_1c4);
    dVar11 = appSin((((double)local_1c0 - (double)(int)local_1c4) + (double)in_ECX[0x16e]) *
                    6.283185307179586);
    local_1c0._0_4_ = (float)dVar11 * (float)in_ECX[0x16b];
    local_1c4 = (int *)(((float)in_ECX[0x169] * param_1) / 65535.0);
    local_1a8 = (double)(float)local_1c4;
    local_1c4 = (int *)appFloor((float)local_1c4);
    dVar11 = appSin(((local_1a8 - (double)(int)local_1c4) + (double)in_ECX[0x16f]) *
                    6.283185307179586);
    local_1a8 = (double)CONCAT44(local_1a8._4_4_,(float)dVar11 * (float)in_ECX[0x16c]);
    local_1c4 = (int *)(((float)in_ECX[0x16a] * param_1) / 65535.0);
    local_1b8 = (double)(float)local_1c4;
    local_1c4 = (int *)appFloor((float)local_1c4);
    dVar11 = appSin(((local_1b8 - (double)(int)local_1c4) + (double)in_ECX[0x170]) *
                    6.283185307179586);
    local_1c4 = (int *)((float)dVar11 * (float)in_ECX[0x16d]);
    iVar7 = FUN_107a6660();
    iVar2 = FUN_107a6660();
    iVar3 = FUN_107a6660();
    local_210 = 0x105e0db7;
    FRotator::FRotator(local_10c,iVar3,iVar2,iVar7);
    puVar4 = (uint *)FRotator::operator+((FRotator *)(in_ECX + 0x162),(FRotator *)local_1a0);
    local_210 = *puVar4;
    uStack_214 = 0x105e0dea;
    piVar1 = (int *)thunk_FUN_105263f0();
    apiStack_1d4[3] = in_ECX + 0x171;
    piVar6 = apiStack_1d4[3];
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar6 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar6 = piVar6 + 1;
    }
    local_48 = (undefined1 *)0xffffffff;
    pFVar5 = (FMatrix *)&local_150;
  }
  else {
    local_210 = 0x105e0c66;
    ExceptionList = &local_4c;
    piVar1 = (int *)thunk_FUN_105263f0();
    local_1c4 = in_ECX + 0x171;
    piVar6 = local_1c4;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar6 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar6 = piVar6 + 1;
    }
    local_44 = 0xffffffff;
    pFVar5 = (FMatrix *)&local_18c;
  }
  FMatrix::~FMatrix(pFVar5);
  if (((float)in_ECX[0x166] == 0.0) && ((float)in_ECX[0x167] == 0.0)) {
    ExceptionList = pvStack_50;
    return apiStack_1d4[3];
  }
  unique0x0000aa00 = (double)(float)in_ECX[0x166];
  local_1c4 = (int *)(**(code **)(*in_ECX + 0x78))();
  fStack_1ac = (float)stack0xfffffe44 / (float)(int)local_1c4;
  unique0x0000aa00 = (double)(float)in_ECX[0x167];
  iVar7 = (**(code **)(*in_ECX + 0x7c))();
  piVar1 = apiStack_1d4[3];
  local_1c4 = (int *)((float)stack0xfffffe44 / (float)iVar7);
  uStack_190 = 0x3f800000;
  local_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_17c = 0x3f800000;
  fStack_170 = fStack_1ac;
  uStack_168 = 0x3f800000;
  uStack_154 = 0x3f800000;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  fStack_130 = -fStack_1ac;
  local_1a8 = (double)CONCAT44(fStack_130,(undefined4)local_1a8);
  local_1a0[0] = -(float)local_1c4;
  local_150 = 0x3f800000;
  uStack_13c = 0x3f800000;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_128 = 0x3f800000;
  uStack_114 = 0x3f800000;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  local_48 = (undefined1 *)0x7;
  piVar6 = apiStack_1d4[3];
  piVar10 = aiStack_244;
  fStack_16c = (float)local_1c4;
  fStack_12c = local_1a0[0];
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar10 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar10 = piVar10 + 1;
  }
  puStack_248 = auStack_c4;
  uStack_24c = 0x105e1070;
  pFVar5 = (FMatrix *)FMatrix::operator*((FMatrix *)&local_150);
  uStack_8c = 8;
  ppiVar8 = apiStack_1d4;
  puVar9 = auStack_288;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *ppiVar8;
    ppiVar8 = ppiVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  piVar6 = (int *)FMatrix::operator*(pFVar5,&uStack_148);
  uStack_d0._1_3_ = (undefined3)((uint)uStack_d0 >> 8);
  piVar10 = piVar1;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar10 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar10 = piVar10 + 1;
  }
  uStack_d0._0_1_ = 8;
  FMatrix::~FMatrix((FMatrix *)&local_18c);
  uStack_d0._0_1_ = 7;
  FMatrix::~FMatrix((FMatrix *)&uStack_14c);
  uStack_d0 = CONCAT31(uStack_d0._1_3_,6);
  FMatrix::~FMatrix(aFStack_1d8);
  uStack_d0 = 0xffffffff;
  FMatrix::~FMatrix(aFStack_218);
  ExceptionList = pvStack_d8;
  return piVar1;
}


// ==== 105e1270 FUN_105e1270

void FUN_105e1270(float param_1)

{
  float fVar1;
  UTexOscillator *in_ECX;
  float10 fVar2;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820990;
  local_10 = ExceptionList;
  local_8 = 0;
  if (0.0 <= *(float *)(in_ECX + 0x600)) {
    fVar1 = *(float *)(in_ECX + 0x5fc);
    ExceptionList = &local_10;
    fVar2 = (float10)thunk_FUN_104a4940(*(undefined4 *)(in_ECX + 0x584),
                                        *(undefined4 *)(in_ECX + 0x588));
    local_18 = (float)((float10)fVar1 / fVar2);
    if (((byte)in_ECX[0x604] & 1) == 0) {
      fVar1 = param_1 - *(float *)(in_ECX + 0x600);
      if (local_18 < param_1 - *(float *)(in_ECX + 0x600)) goto LAB_105e132d;
    }
    else {
      fVar1 = local_18 - (param_1 - *(float *)(in_ECX + 0x600));
      if (fVar1 < 0.0) {
        local_18 = 0.0;
        goto LAB_105e132d;
      }
    }
    local_18 = fVar1;
  }
  else {
    local_18 = 0.0;
    ExceptionList = &local_10;
  }
LAB_105e132d:
  if (*(int *)GIsEditor_exref != 0) {
    local_18 = param_1;
  }
  UTexOscillator::GetMatrix(in_ECX,local_18);
  ExceptionList = local_10;
  return;
}


// ==== 105e1364 Catch@105e1364

void Catch_105e1364(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105e1378 Catch@105e1378

void Catch_105e1378(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTexOscillatorTriggered::GetMatrix");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e13e0 FUN_105e13e0

void FUN_105e13e0(void)

{
  int iVar1;
  UModifier *in_ECX;
  
  UModifier::PostEditChange(in_ECX);
  iVar1 = *(int *)(in_ECX + 0x584);
  if (iVar1 < 0) {
    *(undefined4 *)(in_ECX + 0x584) = 0;
    in_ECX[0x57c] = (UModifier)0x0;
    return;
  }
  if (6 < iVar1) {
    iVar1 = 7;
  }
  *(int *)(in_ECX + 0x584) = iVar1;
  in_ECX[0x57c] = SUB41(iVar1,0);
  return;
}


// ==== 105e1430 FUN_105e1430

void FUN_105e1430(void)

{
  int iVar1;
  undefined4 uVar2;
  UModifier *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108209a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UModifier::PostEditChange(in_ECX);
  iVar1 = *(int *)(in_ECX + 0x57c);
  if ((iVar1 < 0) || (*(int *)(in_ECX + 0x584) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x580) + iVar1 * 4);
  }
  *(undefined4 *)(in_ECX + 0x578) = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 105e149c Catch@105e149c

void Catch_105e149c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e14b0 Catch@105e14b0

void Catch_105e14b0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMaterialSwitch::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e1500 FUN_105e1500

void FUN_105e1500(void)

{
  float fVar1;
  int iVar2;
  UModifier *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108209b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UModifier::PostEditChange(in_ECX);
  fVar1 = 0.0;
  *(undefined4 *)(in_ECX + 0x590) = 0;
  *(undefined4 *)(in_ECX + 0x594) = 0;
  iVar2 = 0;
  while( true ) {
    *(float *)(in_ECX + 0x598) = fVar1;
    if (*(int *)(in_ECX + 0x580) <= iVar2) break;
    fVar1 = *(float *)(*(int *)(in_ECX + 0x57c) + 4 + iVar2 * 0xc) + *(float *)(in_ECX + 0x598);
    iVar2 = iVar2 + 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105e1582 Catch@105e1582

void Catch_105e1582(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105e1596 Catch@105e1596

void Catch_105e1596(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMaterialSequence::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e15e0 FUN_105e15e0

void FUN_105e15e0(FArchive *param_1)

{
  int iVar1;
  UMaterial *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108209c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FArchive::IsSaving(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(in_ECX + 0x578) = 0;
  }
  UMaterial::Serialize(in_ECX,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 105e1645 Catch@105e1645

void Catch_105e1645(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e1659 Catch@105e1659

void Catch_105e1659(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMaterialSequence::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e16a0 FUN_105e16a0

void FUN_105e16a0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  void *unaff_EBP;
  undefined2 in_FPUControlWord;
  float10 fVar7;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_108209db;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  *(int *)(in_ECX + 0x584) = param_1;
  *(int *)(in_ECX + 0x588) = param_2;
  if (*(int *)(in_ECX + 0x580) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0x580));
  }
  uVar5 = (**(code **)**(undefined4 **)GMalloc_exref)(param_1 * param_2 * 2,&DAT_10853a28);
  *(undefined4 *)(in_ECX + 0x580) = uVar5;
  if (*(undefined4 **)(in_ECX + 0x57c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x57c))(1);
  }
  uStack_c = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(0x1c,&DAT_10853a28);
  if (uStack_c == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = thunk_FUN_10682830(*(undefined4 *)(in_ECX + 0x584),*(undefined4 *)(in_ECX + 0x588),0xe);
  }
  iVar6 = *(int *)(in_ECX + 0x580);
  *(undefined4 *)(in_ECX + 0x57c) = uVar5;
  puStack_8 = (undefined1 *)0x0;
  if (0 < *(int *)(in_ECX + 0x588)) {
    do {
      puVar4 = puStack_8;
      uStack_c = (void *)0x0;
      if (0 < *(int *)(in_ECX + 0x584)) {
        fVar1 = (float)(int)puStack_8;
        do {
          iVar3 = (int)uStack_c;
          fVar2 = (float)(int)uStack_c;
          uStack_c = (void *)(fVar1 / (float)*(int *)(in_ECX + 0x588) - 0.5);
          puStack_8 = (undefined1 *)
                      (((float)uStack_c + (fVar2 / (float)*(int *)(in_ECX + 0x584) - 0.5)) * 4.0 *
                      3.1415927);
          fVar7 = (float10)FUN_107a8270();
          uStack_c = (void *)CONCAT22((short)((uint)(float)fVar7 >> 0x10),in_FPUControlWord);
          *(char *)(iVar6 + iVar3 * 2) = (char)(int)ROUND((float)fVar7 * 2.5);
          fVar7 = (float10)FUN_107a83a0();
          uStack_c = (void *)(iVar3 + 1);
          puStack_8._0_1_ = (undefined1)(int)ROUND((float)fVar7 * 2.5);
          *(undefined1 *)(iVar6 + -1 + (int)uStack_c * 2) = puStack_8._0_1_;
        } while ((int)uStack_c < *(int *)(in_ECX + 0x584));
      }
      puStack_8 = (undefined1 *)((int)puVar4 + 1);
      iVar6 = iVar6 + *(int *)(in_ECX + 0x584) * 2;
    } while ((int)puStack_8 < *(int *)(in_ECX + 0x588));
  }
  ExceptionList = unaff_EBP;
  return;
}


// ==== 105e1920 FUN_105e1920

void FUN_105e1920(int *param_1)

{
  int iVar1;
  int iVar2;
  UUnderWaterShader *in_ECX;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x78))();
    if ((*(int *)(in_ECX + 0x584) != iVar1) ||
       (iVar1 = (**(code **)(*param_1 + 0x7c))(), *(int *)(in_ECX + 0x588) != iVar1)) {
      iVar1 = (**(code **)(*param_1 + 0x7c))();
      iVar2 = (**(code **)(*param_1 + 0x78))();
      UUnderWaterShader::MakeUnderWaterData(in_ECX,iVar2,iVar1);
    }
    *(int **)(in_ECX + 0x578) = param_1;
    return;
  }
  return;
}


// ==== 105e1990 FUN_105e1990

int FUN_105e1990(int *param_1)

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


// ==== 105e19c0 FUN_105e19c0

void FUN_105e19c0(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UConstantColor::PrivateStaticClass);
  if (iVar1 == 0) {
    appFailAssert("Class->IsChildOf(T::StaticClass())",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
  }
  if (param_2 == (UPackage *)0xffffffff) {
    param_2 = UObject::GetTransientPackage();
  }
  UObject::StaticConstructObject(param_1,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0);
  return;
}


// ==== 105e1a40 FUN_105e1a40

void FUN_105e1a40(UObject *param_1,ushort *param_2,int param_3)

{
  UObject::StaticFindObject(&UShader::PrivateStaticClass,param_1,param_2,param_3);
  return;
}


// ==== 105e1a70 FUN_105e1a70

void FUN_105e1a70(UObject *param_1,ushort *param_2,int param_3)

{
  UObject::StaticFindObject(&UTexEnvMap::PrivateStaticClass,param_1,param_2,param_3);
  return;
}


// ==== 105e1aa0 FUN_105e1aa0

void FUN_105e1aa0(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UTexEnvMap::PrivateStaticClass);
  if (iVar1 == 0) {
    appFailAssert("Class->IsChildOf(T::StaticClass())",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
  }
  if (param_2 == (UPackage *)0xffffffff) {
    param_2 = UObject::GetTransientPackage();
  }
  UObject::StaticConstructObject(param_1,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0);
  return;
}


// ==== 105e1b20 FUN_105e1b20

undefined4 FUN_105e1b20(FArray *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108209f0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_105e1990(local_18);
  if (iVar1 != -1) {
    ExceptionList = local_10;
    return 0;
  }
  if (*(int *)(in_ECX + 0x34) != 0) {
    iVar1 = FArray::Add(param_1,1,4);
    *(int *)(*(int *)param_1 + iVar1 * 4) = in_ECX;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x68))(param_1);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    thunk_FUN_103263e0(iVar1,1);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105e1bbf Catch@105e1bbf

void Catch_105e1bbf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105e1bd3 Catch@105e1bd3

void Catch_105e1bd3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMaterial::CheckCircularReferences");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e1c30 FUN_105e1c30

undefined4 FUN_105e1c30(FArray *param_1)

{
  int iVar1;
  int iVar2;
  UMaterial *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820a00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = UMaterial::CheckCircularReferences(in_ECX,(TArray<UMaterial*> *)param_1);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar1 = FArray::Add(param_1,1,4);
  *(UMaterial **)(*(int *)param_1 + iVar1 * 4) = in_ECX;
  if ((*(int *)(in_ECX + 0x578) != 0) &&
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x68))(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if ((*(int *)(in_ECX + 0x57c) != 0) &&
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x57c) + 0x68))(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if ((*(int *)(in_ECX + 0x580) != 0) &&
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x580) + 0x68))(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if ((*(int *)(in_ECX + 0x584) != 0) &&
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x584) + 0x68))(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if ((*(int *)(in_ECX + 0x588) != 0) &&
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x588) + 0x68))(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if ((*(int *)(in_ECX + 0x58c) != 0) &&
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x58c) + 0x68))(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if ((*(int *)(in_ECX + 0x590) != 0) &&
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x590) + 0x68))(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if ((*(int *)(in_ECX + 0x5a4) != 0) &&
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x5a4) + 0x68))(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  thunk_FUN_103263e0(iVar1,1);
  ExceptionList = local_10;
  return 1;
}


// ==== 105e1d9d Catch@105e1d9d

void Catch_105e1d9d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e1db1 Catch@105e1db1

void Catch_105e1db1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UShader::CheckCircularReferences");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e1e40 FUN_105e1e40

undefined4 FUN_105e1e40(FArray *param_1)

{
  int iVar1;
  int iVar2;
  UMaterial *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820a10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = UMaterial::CheckCircularReferences(in_ECX,(TArray<UMaterial*> *)param_1);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar1 = FArray::Add(param_1,1,4);
  *(UMaterial **)(*(int *)param_1 + iVar1 * 4) = in_ECX;
  if ((*(int *)(in_ECX + 0x57c) != 0) &&
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x57c) + 0x68))(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if ((*(int *)(in_ECX + 0x580) != 0) &&
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x580) + 0x68))(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if ((*(int *)(in_ECX + 0x584) != 0) &&
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x584) + 0x68))(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  thunk_FUN_103263e0(iVar1,1);
  ExceptionList = local_10;
  return 1;
}


// ==== 105e1f12 Catch@105e1f12

void Catch_105e1f12(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e1f26 Catch@105e1f26

void Catch_105e1f26(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UCombiner::CheckCircularReferences");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e1f90 FUN_105e1f90

FColor * FUN_105e1f90(FColor *param_1,float param_2)

{
  float fVar1;
  FPlane *pFVar2;
  FPlane *pFVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  bool bVar6;
  double dVar7;
  undefined1 *puVar8;
  undefined1 local_70 [16];
  FPlane local_60 [32];
  FPlane local_40 [16];
  undefined1 local_30 [24];
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820a20;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff84;
  local_8 = 0;
  fVar1 = (*(float *)(in_ECX + 0x584) + param_2) / *(float *)(in_ECX + 0x580);
  if (*(char *)(in_ECX + 0x588) == '\x01') {
    ExceptionList = &local_10;
    local_14 = &stack0xffffff84;
    dVar7 = appCos((double)(fVar1 * 3.1415927 * 0.5));
    local_18 = 1.0 - (float)((float10)0.5 + (float10)dVar7 * (float10)0.5);
    pFVar3 = local_40;
    pFVar2 = (FPlane *)FColor::Plane((FColor *)(in_ECX + 0x57c));
    FPlane::operator*(pFVar2,(float)pFVar3);
    pFVar3 = local_60;
    puVar8 = local_70;
  }
  else {
    if (*(char *)(in_ECX + 0x588) != '\0') {
      *(undefined4 *)param_1 = *(undefined4 *)(in_ECX + 0x578);
      return param_1;
    }
    ExceptionList = &local_10;
    uVar4 = appFloor(fVar1);
    uVar5 = uVar4 & 0x80000001;
    bVar6 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar6 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
    }
    fVar1 = fVar1 - (float)(int)uVar4;
    if (bVar6) {
      fVar1 = 1.0 - fVar1;
    }
    local_18 = 1.0 - fVar1;
    pFVar3 = local_60;
    pFVar2 = (FPlane *)FColor::Plane((FColor *)(in_ECX + 0x57c));
    FPlane::operator*(pFVar2,(float)pFVar3);
    pFVar3 = local_40;
    puVar8 = local_30;
  }
  pFVar2 = (FPlane *)FColor::Plane((FColor *)(in_ECX + 0x578));
  pFVar2 = (FPlane *)FPlane::operator*(pFVar2,(float)puVar8);
  pFVar3 = (FPlane *)FPlane::operator+(pFVar2,pFVar3);
  FColor::FColor(param_1,pFVar3);
  ExceptionList = local_10;
  return param_1;
}


// ==== 105e2117 Catch@105e2117

void Catch_105e2117(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105e212b Catch@105e212b

void Catch_105e212b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UFadeColor::GetColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e21c0 FUN_105e21c0

undefined4 FUN_105e21c0(FArray *param_1)

{
  int iVar1;
  int iVar2;
  UMaterial *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820a30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = UMaterial::CheckCircularReferences(in_ECX,(TArray<UMaterial*> *)param_1);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar1 = FArray::Add(param_1,1,4);
  *(UMaterial **)(*(int *)param_1 + iVar1 * 4) = in_ECX;
  if ((*(int *)(in_ECX + 0x578) != 0) &&
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x68))(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  thunk_FUN_103263e0(iVar1,1);
  ExceptionList = local_10;
  return 1;
}


// ==== 105e225c Catch@105e225c

void Catch_105e225c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e2270 Catch@105e2270

void Catch_105e2270(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModifier::CheckCircularReferences");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e22c0 FUN_105e22c0

undefined4 FUN_105e22c0(FArray *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UModifier *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820a40;
  local_10 = ExceptionList;
  iVar4 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = UModifier::CheckCircularReferences(in_ECX,(TArray<UMaterial*> *)param_1);
  if (iVar2 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar2 = FArray::Add(param_1,1,4);
  *(UModifier **)(*(int *)param_1 + iVar2 * 4) = in_ECX;
  while( true ) {
    if (*(int *)(in_ECX + 0x584) <= iVar4) {
      thunk_FUN_103263e0(iVar2,1);
      ExceptionList = local_10;
      return 1;
    }
    piVar1 = (int *)(*(int *)(in_ECX + 0x580) + iVar4 * 4);
    if ((*piVar1 != 0) && (iVar3 = (**(code **)(*(int *)*piVar1 + 0x68))(param_1), iVar3 == 0))
    break;
    iVar4 = iVar4 + 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105e2371 Catch@105e2371

void Catch_105e2371(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105e2385 Catch@105e2385

void Catch_105e2385(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMaterialSwitch::CheckCircularReferences");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e23e0 FUN_105e23e0

undefined4 FUN_105e23e0(FArray *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UModifier *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820a50;
  local_10 = ExceptionList;
  iVar4 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = UModifier::CheckCircularReferences(in_ECX,(TArray<UMaterial*> *)param_1);
  if (iVar2 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar2 = FArray::Add(param_1,1,4);
  *(UModifier **)(*(int *)param_1 + iVar2 * 4) = in_ECX;
  while( true ) {
    if (*(int *)(in_ECX + 0x580) <= iVar4) {
      thunk_FUN_103263e0(iVar2,1);
      ExceptionList = local_10;
      return 1;
    }
    piVar1 = *(int **)(*(int *)(in_ECX + 0x57c) + iVar4 * 0xc);
    if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 0x68))(param_1), iVar3 == 0))
    break;
    iVar4 = iVar4 + 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105e248f Catch@105e248f

void Catch_105e248f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105e24a3 Catch@105e24a3

void Catch_105e24a3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMaterialSequence::CheckCircularReferences");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e2500 FUN_105e2500

UObject * FUN_105e2500(UObject *param_1,uint param_2)

{
  UObject *pUVar1;
  wchar_t *pwVar2;
  ushort *puVar3;
  UObject *pUVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  EFindName EVar8;
  undefined4 uVar9;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [16];
  FName local_1c [8];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10820ab1;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_8 = 0;
  ExceptionList = &local_10;
  pUVar1 = (UObject *)thunk_FUN_1040b4c0(param_1);
  uVar6 = param_2;
  if ((pUVar1 != (UObject *)0x0) && (*(int *)(pUVar1 + 0x5b4) != 0)) {
    uVar6 = param_2 & 0x1000;
    pwVar2 = L"Const";
    if (uVar6 == 0) {
      pwVar2 = L"";
    }
    puVar3 = UObject::GetName(pUVar1);
    FString::Printf((ushort *)local_44,L"%s_%sShiny",puVar3,pwVar2);
    local_8._0_1_ = 1;
    FString::FString(local_38,local_44);
    local_8._0_1_ = 2;
    if (uVar6 != 0) {
      FString::operator+=(local_38,(ushort *)L"_Alpha");
    }
    uVar7 = 0;
    puVar3 = FString::operator*(local_38);
    pUVar4 = (UObject *)thunk_FUN_105e1a40(0xffffffff,puVar3,uVar7);
    if (pUVar4 == (UObject *)0x0) {
      puVar3 = UObject::GetName(*(UObject **)(pUVar1 + 0x5b4));
      FString::Printf((ushort *)local_2c,L"%s_EnvMapCoords",puVar3);
      local_8 = CONCAT31(local_8._1_3_,3);
      puVar3 = FString::operator*(local_2c);
      param_2 = thunk_FUN_105e1a70(0xffffffff,puVar3,pUVar4);
      if (param_2 == 0) {
        EVar8 = 1;
        puVar3 = FString::operator*(local_2c);
        puVar5 = (undefined4 *)FName::FName((FName *)&param_2,puVar3,EVar8);
        uVar9 = 0x80004;
        uVar7 = *puVar5;
        pUVar4 = UObject::GetOuter(*(UObject **)(pUVar1 + 0x5b4));
        param_2 = thunk_FUN_105e1aa0(&UTexEnvMap::PrivateStaticClass,pUVar4,uVar7,uVar9);
        if (pUVar1[0x5b8] == (UObject)0x0) {
          *(undefined1 *)(param_2 + 0x584) = 1;
        }
        else if (pUVar1[0x5b8] == (UObject)0x1) {
          *(undefined1 *)(param_2 + 0x584) = 0;
        }
        *(undefined4 *)(param_2 + 0x578) = *(undefined4 *)(pUVar1 + 0x5b4);
      }
      EVar8 = 1;
      puVar3 = FString::operator*(local_44);
      puVar5 = (undefined4 *)FName::FName(local_1c,puVar3,EVar8);
      uVar9 = 0x80004;
      uVar7 = *puVar5;
      pUVar4 = UObject::GetOuter(param_1);
      pUVar4 = (UObject *)thunk_FUN_1053d370(&UShader::PrivateStaticClass,pUVar4,uVar7,uVar9);
      *(UObject **)(pUVar4 + 0x578) = pUVar1;
      *(uint *)(pUVar4 + 0x580) = param_2;
      if (uVar6 == 0) {
        *(UObject **)(pUVar4 + 0x584) = pUVar1;
      }
      else {
        *(UObject **)(pUVar4 + 0x57c) = pUVar1;
      }
      local_8._0_1_ = 2;
      FString::~FString(local_2c);
    }
    local_8._0_1_ = 1;
    FString::~FString(local_38);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_44);
    ExceptionList = local_10;
    return pUVar4;
  }
  if ((param_2 & 0x400000) == 0) {
    if ((param_2 & 0x1000) == 0) {
      if ((param_2 & 2) == 0) {
        if ((param_2 & 0x40) == 0) {
          if ((param_2 & 4) == 0) {
            if ((param_2 & 0x100) == 0) {
              ExceptionList = local_10;
              return param_1;
            }
            puVar3 = UObject::GetName(param_1);
            FString::Printf((ushort *)local_44,L"%s_TwoTwoSided",puVar3);
            local_8 = CONCAT31(local_8._1_3_,9);
            uVar7 = 0;
            puVar3 = FString::operator*(local_44);
            pUVar1 = (UObject *)thunk_FUN_105e1a40(0xffffffff,puVar3,uVar7);
            if (pUVar1 == (UObject *)0x0) {
              EVar8 = 1;
              puVar3 = FString::operator*(local_44);
              puVar5 = (undefined4 *)FName::FName((FName *)&param_2,puVar3,EVar8);
              uVar9 = 0x80004;
              uVar7 = *puVar5;
              pUVar1 = UObject::GetOuter(param_1);
              pUVar1 = (UObject *)
                       thunk_FUN_1053d370(&UShader::PrivateStaticClass,pUVar1,uVar7,uVar9);
              *(uint *)(pUVar1 + 0x59c) =
                   *(uint *)(pUVar1 + 0x59c) ^ (uVar6 >> 8 ^ *(uint *)(pUVar1 + 0x59c)) & 1;
              *(UObject **)(pUVar1 + 0x578) = param_1;
            }
          }
          else {
            pwVar2 = L"TwoSided";
            if ((param_2 & 0x100) == 0) {
              pwVar2 = L"";
            }
            puVar3 = UObject::GetName(param_1);
            FString::Printf((ushort *)local_44,L"%s_Translucent%s",puVar3,pwVar2);
            local_8 = CONCAT31(local_8._1_3_,8);
            uVar7 = 0;
            puVar3 = FString::operator*(local_44);
            pUVar1 = (UObject *)thunk_FUN_105e1a40(0xffffffff,puVar3,uVar7);
            if (pUVar1 == (UObject *)0x0) {
              EVar8 = 1;
              puVar3 = FString::operator*(local_44);
              puVar5 = (undefined4 *)FName::FName((FName *)&param_2,puVar3,EVar8);
              uVar9 = 0x80004;
              uVar7 = *puVar5;
              pUVar1 = UObject::GetOuter(param_1);
              pUVar1 = (UObject *)
                       thunk_FUN_1053d370(&UShader::PrivateStaticClass,pUVar1,uVar7,uVar9);
              *(uint *)(pUVar1 + 0x59c) =
                   *(uint *)(pUVar1 + 0x59c) ^ (uVar6 >> 8 ^ *(uint *)(pUVar1 + 0x59c)) & 1;
              *(UObject **)(pUVar1 + 0x578) = param_1;
              pUVar1[0x598] = (UObject)0x3;
            }
          }
        }
        else {
          pwVar2 = L"TwoSided";
          if ((param_2 & 0x100) == 0) {
            pwVar2 = L"";
          }
          puVar3 = UObject::GetName(param_1);
          FString::Printf((ushort *)local_44,L"%s_Modulated%s",puVar3,pwVar2);
          local_8 = CONCAT31(local_8._1_3_,7);
          uVar7 = 0;
          puVar3 = FString::operator*(local_44);
          pUVar1 = (UObject *)thunk_FUN_105e1a40(0xffffffff,puVar3,uVar7);
          if (pUVar1 == (UObject *)0x0) {
            EVar8 = 1;
            puVar3 = FString::operator*(local_44);
            puVar5 = (undefined4 *)FName::FName((FName *)&param_2,puVar3,EVar8);
            uVar9 = 0x80004;
            uVar7 = *puVar5;
            pUVar1 = UObject::GetOuter(param_1);
            pUVar1 = (UObject *)thunk_FUN_1053d370(&UShader::PrivateStaticClass,pUVar1,uVar7,uVar9);
            *(uint *)(pUVar1 + 0x59c) =
                 *(uint *)(pUVar1 + 0x59c) ^ (uVar6 >> 8 ^ *(uint *)(pUVar1 + 0x59c)) & 1;
            *(UObject **)(pUVar1 + 0x578) = param_1;
            pUVar1[0x598] = (UObject)0x2;
          }
        }
      }
      else {
        pwVar2 = L"TwoSided";
        if ((param_2 & 0x100) == 0) {
          pwVar2 = L"";
        }
        puVar3 = UObject::GetName(param_1);
        FString::Printf((ushort *)local_44,L"%s_Masked%s",puVar3,pwVar2);
        local_8 = CONCAT31(local_8._1_3_,6);
        uVar7 = 0;
        puVar3 = FString::operator*(local_44);
        pUVar1 = (UObject *)thunk_FUN_105e1a40(0xffffffff,puVar3,uVar7);
        if (pUVar1 == (UObject *)0x0) {
          EVar8 = 1;
          puVar3 = FString::operator*(local_44);
          puVar5 = (undefined4 *)FName::FName((FName *)&param_2,puVar3,EVar8);
          uVar9 = 0x80004;
          uVar7 = *puVar5;
          pUVar1 = UObject::GetOuter(param_1);
          pUVar1 = (UObject *)thunk_FUN_1053d370(&UShader::PrivateStaticClass,pUVar1,uVar7,uVar9);
          *(uint *)(pUVar1 + 0x59c) =
               *(uint *)(pUVar1 + 0x59c) ^ (uVar6 >> 8 ^ *(uint *)(pUVar1 + 0x59c)) & 1;
          *(UObject **)(pUVar1 + 0x578) = param_1;
          *(UObject **)(pUVar1 + 0x57c) = param_1;
          pUVar1[0x598] = (UObject)0x1;
        }
      }
    }
    else {
      pwVar2 = L"TwoSided";
      if ((param_2 & 0x100) == 0) {
        pwVar2 = L"";
      }
      puVar3 = UObject::GetName(param_1);
      FString::Printf((ushort *)local_44,L"%s_Alpha%s",puVar3,pwVar2);
      local_8 = CONCAT31(local_8._1_3_,5);
      uVar7 = 0;
      puVar3 = FString::operator*(local_44);
      pUVar1 = (UObject *)thunk_FUN_105e1a40(0xffffffff,puVar3,uVar7);
      if (pUVar1 == (UObject *)0x0) {
        EVar8 = 1;
        puVar3 = FString::operator*(local_44);
        puVar5 = (undefined4 *)FName::FName((FName *)&param_2,puVar3,EVar8);
        uVar9 = 0x80004;
        uVar7 = *puVar5;
        pUVar1 = UObject::GetOuter(param_1);
        pUVar1 = (UObject *)thunk_FUN_1053d370(&UShader::PrivateStaticClass,pUVar1,uVar7,uVar9);
        *(uint *)(pUVar1 + 0x59c) =
             *(uint *)(pUVar1 + 0x59c) ^ (uVar6 >> 8 ^ *(uint *)(pUVar1 + 0x59c)) & 1;
        *(UObject **)(pUVar1 + 0x578) = param_1;
        *(UObject **)(pUVar1 + 0x57c) = param_1;
      }
    }
  }
  else {
    pwVar2 = L"TwoSided";
    if ((param_2 & 0x100) == 0) {
      pwVar2 = L"";
    }
    puVar3 = UObject::GetName(param_1);
    FString::Printf((ushort *)local_44,L"%s_Unlit%s",puVar3,pwVar2);
    local_8 = CONCAT31(local_8._1_3_,4);
    uVar7 = 0;
    puVar3 = FString::operator*(local_44);
    pUVar1 = (UObject *)thunk_FUN_105e1a40(0xffffffff,puVar3,uVar7);
    if (pUVar1 == (UObject *)0x0) {
      EVar8 = 1;
      puVar3 = FString::operator*(local_44);
      puVar5 = (undefined4 *)FName::FName((FName *)&param_2,puVar3,EVar8);
      uVar9 = 0x80004;
      uVar7 = *puVar5;
      pUVar1 = UObject::GetOuter(param_1);
      pUVar1 = (UObject *)thunk_FUN_1053d370(&UShader::PrivateStaticClass,pUVar1,uVar7,uVar9);
      *(uint *)(pUVar1 + 0x59c) =
           *(uint *)(pUVar1 + 0x59c) ^ (uVar6 >> 8 ^ *(uint *)(pUVar1 + 0x59c)) & 1;
      *(UObject **)(pUVar1 + 0x588) = param_1;
    }
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_44);
  ExceptionList = local_10;
  return pUVar1;
}


// ==== 105e2b50 Catch@105e2b50

void Catch_105e2b50(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e2b64 Catch@105e2b64

void Catch_105e2b64(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMaterial::ConvertPolyFlagsToMaterial");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e2d30 FUN_105e2d30

void FUN_105e2d30(void)

{
  UMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10820af0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMaterial::UMaterial(in_ECX);
  *(undefined ***)in_ECX = URenderedMaterial::vftable;
  *(undefined ***)in_ECX = UBumpShader::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 105e2da0 FUN_105e2da0

void FUN_105e2da0(void)

{
  UObject *this;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uchar *puVar5;
  UBumpShader *in_ECX;
  FStaticTexture aFStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10820b13;
  local_c = ExceptionList;
  if (*(int *)(in_ECX + 0x57c) != *(int *)(in_ECX + 0x580)) {
    ExceptionList = &local_c;
    if (*(int *)(in_ECX + 0x584) != 0) {
      ExceptionList = &local_c;
      (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0x584));
      *(undefined4 *)(in_ECX + 0x584) = 0;
    }
    if (*(undefined4 **)(in_ECX + 0x588) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x588))(1);
      *(undefined4 *)(in_ECX + 0x588) = 0;
    }
    this = *(UObject **)(in_ECX + 0x57c);
    if ((this != (UObject *)0x0) &&
       (iVar1 = UObject::IsA(this,&UTexture::PrivateStaticClass), iVar1 != 0)) {
      iVar2 = (**(code **)(*(int *)this + 0x78))();
      iVar3 = (**(code **)(*(int *)this + 0x7c))();
      iVar1 = iVar3 * iVar2 * 2;
      if (iVar1 == 0) {
        ExceptionList = local_c;
        return;
      }
      uVar4 = (**(code **)**(undefined4 **)GMalloc_exref)(iVar1,&DAT_10853a28);
      *(undefined4 *)(in_ECX + 0x584) = uVar4;
      FStaticTexture::FStaticTexture(aFStack_20,(UTexture *)this);
      uStack_4 = 0;
      puVar5 = FStaticTexture::GetRawTextureData(aFStack_20,0);
      iVar1 = UBumpShader::MakeBumpRawData(in_ECX,puVar5,iVar2,iVar3,(uchar)this[0x578]);
      if (iVar1 != 0) {
        iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x1c,&DAT_10853a28);
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        if (iVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = thunk_FUN_10682830(iVar2,iVar3,0xe);
        }
        *(undefined4 *)(in_ECX + 0x588) = uVar4;
      }
      uStack_4 = 0xffffffff;
      FStaticTexture::~FStaticTexture(aFStack_20);
    }
    *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(in_ECX + 0x57c);
  }
  ExceptionList = local_c;
  return;
}


// ==== 105e2f60 FUN_105e2f60

void FUN_105e2f60(void)

{
  UObject *in_ECX;
  
  UObject::PostLoad(in_ECX);
  *(undefined4 *)(in_ECX + 0x580) = 0;
  if (*(int *)(in_ECX + 0x57c) != 0) {
    UBumpShader::RefreshBumpRawData((UBumpShader *)in_ECX);
    *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(in_ECX + 0x57c);
  }
  return;
}


// ==== 105e2fa0 FUN_105e2fa0

void FUN_105e2fa0(void)

{
  UObject *in_ECX;
  
  UObject::Modify(in_ECX);
  UBumpShader::RefreshBumpRawData((UBumpShader *)in_ECX);
  return;
}


// ==== 105e2fc0 FUN_105e2fc0

void FUN_105e2fc0(void)

{
  UMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10820b40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMaterial::UMaterial(in_ECX);
  *(undefined ***)in_ECX = URenderedMaterial::vftable;
  *(undefined ***)in_ECX = UUnderWaterShader::vftable;
  *(undefined4 *)(in_ECX + 0x578) = 0;
  *(undefined4 *)(in_ECX + 0x57c) = 0;
  *(undefined4 *)(in_ECX + 0x580) = 0;
  *(undefined4 *)(in_ECX + 0x584) = 0;
  *(undefined4 *)(in_ECX + 0x588) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 105e3080 FUN_105e3080

void FUN_105e3080(float param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  UModifier *in_ECX;
  undefined4 *extraout_ECX;
  int iVar4;
  undefined4 *puStack_40;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820b50;
  local_10 = ExceptionList;
  iVar4 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(uint *)(in_ECX + 0x58c) & 2) == 0) {
    if (*(float *)(in_ECX + 0x594) <= param_1) {
      ExceptionList = &local_10;
      if (0.0 < *(float *)(in_ECX + 0x594)) {
        ExceptionList = &local_10;
        *(float *)(in_ECX + 0x590) =
             (param_1 - *(float *)(in_ECX + 0x594)) + *(float *)(in_ECX + 0x590);
      }
    }
    else {
      ExceptionList = &local_10;
      *(undefined4 *)(in_ECX + 0x594) = 0;
      *(undefined4 *)(in_ECX + 0x590) = 0;
    }
    *(float *)(in_ECX + 0x594) = param_1;
    fVar1 = 0.0;
    if ((((*(uint *)(in_ECX + 0x58c) & 1) != 0) && (fVar1 = 0.0, 0.0 < *(float *)(in_ECX + 0x598)))
       && (fVar1 = 0.0, *(float *)(in_ECX + 0x598) < *(float *)(in_ECX + 0x590))) {
      fVar1 = *(float *)(in_ECX + 0x590);
      puStack_40 = (undefined4 *)0x105e3151;
      iVar2 = appFloor(fVar1 / *(float *)(in_ECX + 0x598));
      fVar1 = fVar1 - (float)iVar2 * *(float *)(in_ECX + 0x598);
      while (*(float *)(in_ECX + 0x590) = fVar1,
            *(float *)(in_ECX + 0x598) < *(float *)(in_ECX + 0x590)) {
        fVar1 = *(float *)(in_ECX + 0x590) - *(float *)(in_ECX + 0x598);
      }
      fVar1 = 0.0;
    }
    for (; iVar4 < *(int *)(in_ECX + 0x580); iVar4 = iVar4 + 1) {
      if (fVar1 < *(float *)(in_ECX + 0x590) != (fVar1 == *(float *)(in_ECX + 0x590))) {
        iVar2 = iVar4 * 0xc;
        puStack_40 = (undefined4 *)(*(int *)(in_ECX + 0x57c) + iVar2);
        if ((*(float *)(in_ECX + 0x590) < (float)puStack_40[1] + fVar1) ||
           ((((byte)in_ECX[0x58c] & 1) == 0 && (iVar4 == *(int *)(in_ECX + 0x580) + -1)))) {
          if (*(char *)(puStack_40 + 2) == '\0') {
            *(undefined4 *)(in_ECX + 0x578) = *puStack_40;
          }
          else if (*(char *)(puStack_40 + 2) == '\x01') {
            if (*(float *)(in_ECX + 0x590) < (float)puStack_40[1] + fVar1) {
              if (DAT_10c6b264 == 0) {
                FName::FName((FName *)&puStack_40,0);
                DAT_10c6b264 = thunk_FUN_105e19c0(&UConstantColor::PrivateStaticClass,0xffffffff);
                puStack_40 = (undefined4 *)0x105e3267;
                thunk_FUN_10530420();
                puStack_40 = extraout_ECX;
              }
              if (DAT_10c6b260 == 0) {
                FName::FName((FName *)&puStack_40,0);
                DAT_10c6b260 = thunk_FUN_1053d4f0(&UCombiner::PrivateStaticClass,0xffffffff);
                puStack_40 = (undefined4 *)0x105e32a9;
                thunk_FUN_10530420();
                *(int *)(DAT_10c6b260 + 0x584) = DAT_10c6b264;
                *(undefined1 *)(DAT_10c6b260 + 0x578) = 5;
              }
              puStack_40 = (undefined4 *)0x105e32f1;
              iVar3 = appRound(((*(float *)(in_ECX + 0x590) - fVar1) /
                               *(float *)(*(int *)(in_ECX + 0x57c) + iVar2 + 4)) * 255.0);
              if (iVar3 < 0) {
                iVar3 = 0;
              }
              else if (0xfe < iVar3) {
                iVar3 = 0xff;
              }
              local_18 = CONCAT13((char)iVar3,0xffffff);
              *(undefined4 *)(DAT_10c6b264 + 0x578) = local_18;
              iVar4 = iVar4 + -1;
              if (iVar4 < 0) {
                iVar4 = *(int *)(in_ECX + 0x580) + -1;
              }
              *(undefined4 *)(DAT_10c6b260 + 0x57c) =
                   *(undefined4 *)(*(int *)(in_ECX + 0x57c) + iVar4 * 0xc);
              *(undefined4 *)(DAT_10c6b260 + 0x580) =
                   *(undefined4 *)(iVar2 + *(int *)(in_ECX + 0x57c));
              *(int *)(in_ECX + 0x578) = DAT_10c6b260;
            }
            else {
              *(undefined4 *)(in_ECX + 0x578) = *puStack_40;
            }
          }
          break;
        }
      }
      fVar1 = fVar1 + *(float *)(*(int *)(in_ECX + 0x57c) + 4 + iVar4 * 0xc);
    }
  }
  puStack_40 = (undefined4 *)0x105e3387;
  UModifier::PreSetMaterial(in_ECX,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 105e33b9 Catch@105e33b9

void Catch_105e33b9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105e33cd Catch@105e33cd

void Catch_105e33cd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMaterialSequence::PreSetMaterial");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e34d0 FUN_105e34d0

void FUN_105e34d0(void)

{
  uint *puVar1;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820b60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104a9880();
  while( true ) {
    if (*(int *)(GObjObjects_exref + 4) <= local_20) break;
    puVar1 = (uint *)(*(int *)(*(int *)GObjObjects_exref + local_20 * 4) + 0x3c);
    *puVar1 = *puVar1 & 0xfffffffe;
    puVar1 = (uint *)(*(int *)(*(int *)GObjObjects_exref + local_20 * 4) + 0x3c);
    *puVar1 = *puVar1 & 0xfffffffd;
    thunk_FUN_103737b0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 105e3557 Catch@105e3557

void Catch_105e3557(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e356b Catch@105e356b

void Catch_105e356b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMaterial::ClearFallbacks");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e35c0 FUN_105e35c0

FString * FUN_105e35c0(FString *param_1,int param_2)

{
  wchar_t *pwVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10820b8a;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::FString(param_1);
  local_4 = 0;
  if (param_2 == 1) {
    pwVar1 = L"Look at Actor";
  }
  else if (param_2 == 2) {
    pwVar1 = L"Face Path";
  }
  else if (param_2 == 3) {
    pwVar1 = L"Interpolation";
  }
  else if (param_2 == 4) {
    pwVar1 = L"Dolly";
  }
  else {
    pwVar1 = L"None";
  }
  FString::operator=(param_1,(ushort *)pwVar1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 105e3680 FUN_105e3680

void FUN_105e3680(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10820ba9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105e36d0 FUN_105e36d0

int FUN_105e36d0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x3c0); iVar1 = iVar1 + 1) {
      if (*(int *)(*(int *)(param_1 + 0x3bc) + iVar1 * 4) == param_2) {
        return iVar1;
      }
    }
  }
  return -1;
}


// ==== 105e3735 Catch@105e3735

void Catch_105e3735(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105e3749 Catch@105e3749

void Catch_105e3749(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMatineeTools::GetActionIdx");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e3790 FUN_105e3790

int FUN_105e3790(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x5c);
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < *(int *)(iVar1 + 0x4c); iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(iVar1 + 0x48) + iVar2 * 4) == param_1) {
        return iVar2;
      }
    }
  }
  return -1;
}


// ==== 105e37ef Catch@105e37ef

void Catch_105e37ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105e3803 Catch@105e3803

void Catch_105e3803(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMatineeTools::GetSubActionIdx");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e3850 FUN_105e3850

undefined4 FUN_105e3850(ASceneManager *param_1,UMatAction *param_2)

{
  int iVar1;
  FMatineeTools *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820be0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == (ASceneManager *)0x0) {
    return 0;
  }
  ExceptionList = &local_10;
  iVar1 = FMatineeTools::GetActionIdx(in_ECX,param_1,param_2);
  if (iVar1 < *(int *)(param_1 + 0x3c0) + -1) {
    ExceptionList = local_10;
    return *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 4 + iVar1 * 4);
  }
  ExceptionList = local_10;
  return **(undefined4 **)(param_1 + 0x3bc);
}


// ==== 105e38e3 Catch@105e38e3

void Catch_105e38e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e38f7 Catch@105e38f7

void Catch_105e38f7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMatineeTools::GetNextAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e3950 FUN_105e3950

undefined4 FUN_105e3950(ASceneManager *param_1,UMatAction *param_2)

{
  int iVar1;
  FMatineeTools *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820bf0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == (ASceneManager *)0x0) {
    return 0;
  }
  ExceptionList = &local_10;
  iVar1 = FMatineeTools::GetActionIdx(in_ECX,param_1,param_2);
  if (0 < iVar1) {
    ExceptionList = local_10;
    return *(undefined4 *)(*(int *)(param_1 + 0x3bc) + -4 + iVar1 * 4);
  }
  ExceptionList = local_10;
  return *(undefined4 *)(*(int *)(param_1 + 0x3bc) + -4 + *(int *)(param_1 + 0x3c0) * 4);
}


// ==== 105e39e2 Catch@105e39e2

void Catch_105e39e2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e39f6 Catch@105e39f6

void Catch_105e39f6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMatineeTools::GetPrevAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e3a50 FUN_105e3a50

UObject * FUN_105e3a50(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ASceneManager::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105e3ab0 FUN_105e3ab0

UObject * FUN_105e3ab0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UActionMoveCamera::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105e3ae0 FUN_105e3ae0

void FUN_105e3ae0(void)

{
  UObject *pUVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820c00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pUVar1 = UObject::StaticFindObject
                     (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                      (ushort *)L"Engine.S_MatineeIP",0);
  iVar2 = thunk_FUN_1040b4c0(pUVar1);
  *(int *)(in_ECX + 4) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("IntPoint",".\\UnMatineeTools.cpp",0x23);
  }
  pUVar1 = UObject::StaticFindObject
                     (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                      (ushort *)L"Engine.S_MatineeIPSel",0);
  iVar2 = thunk_FUN_1040b4c0(pUVar1);
  *(int *)(in_ECX + 8) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("IntPointSel",".\\UnMatineeTools.cpp",0x24);
  }
  pUVar1 = UObject::StaticFindObject
                     (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                      (ushort *)L"Engine.S_MatineeTimeMarker",0);
  iVar2 = thunk_FUN_1040b4c0(pUVar1);
  *(int *)(in_ECX + 0xc) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("TimeMarker",".\\UnMatineeTools.cpp",0x25);
  }
  pUVar1 = UObject::StaticFindObject
                     (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                      (ushort *)L"Engine.S_ActionCamMove",0);
  iVar2 = thunk_FUN_1040b4c0(pUVar1);
  *(int *)(in_ECX + 0x10) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("ActionCamMove",".\\UnMatineeTools.cpp",0x26);
  }
  pUVar1 = UObject::StaticFindObject
                     (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                      (ushort *)L"Engine.S_ActionCamPause",0);
  iVar2 = thunk_FUN_1040b4c0(pUVar1);
  *(int *)(in_ECX + 0x14) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("ActionCamPause",".\\UnMatineeTools.cpp",0x27);
  }
  pUVar1 = UObject::StaticFindObject
                     (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                      (ushort *)L"Engine.S_PathLinear",0);
  iVar2 = thunk_FUN_1040b4c0(pUVar1);
  *(int *)(in_ECX + 0x18) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("PathLinear",".\\UnMatineeTools.cpp",0x28);
  }
  pUVar1 = UObject::StaticFindObject
                     (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                      (ushort *)L"Engine.S_PathBezier",0);
  iVar2 = thunk_FUN_1040b4c0(pUVar1);
  *(int *)(in_ECX + 0x1c) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("PathBezier",".\\UnMatineeTools.cpp",0x29);
  }
  pUVar1 = UObject::StaticFindObject
                     (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                      (ushort *)L"Engine.S_BezierHandle",0);
  iVar2 = thunk_FUN_1040b4c0(pUVar1);
  *(int *)(in_ECX + 0x20) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("BezierHandle",".\\UnMatineeTools.cpp",0x2a);
  }
  pUVar1 = UObject::StaticFindObject
                     (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                      (ushort *)L"Engine.SubActionIndicator",0);
  iVar2 = thunk_FUN_1040b4c0(pUVar1);
  *(int *)(in_ECX + 0x24) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("SubActionIndicator",".\\UnMatineeTools.cpp",0x2b);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105e3ce7 Catch@105e3ce7

void Catch_105e3ce7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e3cfb Catch@105e3cfb

void Catch_105e3cfb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMatineeTools::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e3db0 FUN_105e3db0

undefined4 FUN_105e3db0(int *param_1,undefined4 param_2,int param_3)

{
  FMatineeTools *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820c10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(in_ECX + 0x40) = param_3;
  if ((param_3 == 0) || (*(int *)(param_3 + 0x3c0) == 0)) {
    *(undefined4 *)(in_ECX + 0x5c) = 0;
    *(undefined4 *)(in_ECX + 0x60) = 0;
  }
  else {
    FMatineeTools::SetCurrentAction(in_ECX,(UMatAction *)**(undefined4 **)(param_3 + 0x3bc));
  }
  (**(code **)(*param_1 + 0xc4))(0x37,1,0x400);
  ExceptionList = local_10;
  return *(undefined4 *)(in_ECX + 0x40);
}


// ==== 105e3e2e Catch@105e3e2e

void Catch_105e3e2e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e3e42 Catch@105e3e42

void Catch_105e3e42(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMatineeTools::SetCurrent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e3e90 FUN_105e3e90

UObject FUN_105e3e90(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UActionPause::PrivateStaticClass);
    if (iVar1 != 0) {
      return (UObject)0x0;
    }
    iVar1 = UObject::IsA(param_1,&UActionMoveCamera::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1[0x94];
    }
  }
  return uRam00000094;
}


// ==== 105e3ef0 FUN_105e3ef0

UMatAction * FUN_105e3ef0(ASceneManager *param_1,UMatAction *param_2)

{
  void **ppvVar1;
  UMatAction *pUVar2;
  int iVar3;
  FMatineeTools *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820c20;
  local_10 = ExceptionList;
  local_8 = 0;
  ppvVar1 = &local_10;
  if (param_1 != (ASceneManager *)0x0) {
    do {
      ExceptionList = ppvVar1;
      pUVar2 = FMatineeTools::GetNextAction(in_ECX,param_1,param_2);
      iVar3 = thunk_FUN_105e3ab0(pUVar2);
      ppvVar1 = ExceptionList;
    } while (iVar3 == 0);
    ExceptionList = local_10;
    return pUVar2;
  }
  return (UMatAction *)0x0;
}


// ==== 105e3f6a Catch@105e3f6a

void Catch_105e3f6a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105e3f7e Catch@105e3f7e

void Catch_105e3f7e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMatineeTools::GetNextMovementAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e3fd0 FUN_105e3fd0

ASceneManager * FUN_105e3fd0(UEngine *param_1,ULevel *param_2)

{
  ASceneManager *pAVar1;
  ushort *puVar2;
  int iVar3;
  FMatineeTools *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820c39;
  local_10 = ExceptionList;
  iVar4 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  do {
    if (*(int *)(param_2 + 0x3c) <= iVar4) {
      local_8 = 0xffffffff;
      FString::~FString((FString *)&stack0x0000000c);
      ExceptionList = local_10;
      return (ASceneManager *)0x0;
    }
    pAVar1 = (ASceneManager *)
             thunk_FUN_105e3a50(*(undefined4 *)(*(int *)(param_2 + 0x38) + iVar4 * 4));
    if (pAVar1 != (ASceneManager *)0x0) {
      puVar2 = FName::operator*((FName *)(pAVar1 + 0x10c));
      iVar3 = FString::operator==((FString *)&stack0x0000000c,puVar2);
      if (iVar3 != 0) {
        *(ASceneManager **)(in_ECX + 0x40) = pAVar1;
        pAVar1 = FMatineeTools::SetCurrent(in_ECX,param_1,param_2,pAVar1);
        local_8 = 0xffffffff;
        FString::~FString((FString *)&stack0x0000000c);
        ExceptionList = local_10;
        return pAVar1;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


// ==== 105e409e Catch@105e409e

void Catch_105e409e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105e40b2 Catch@105e40b2

void Catch_105e40b2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMatineeTools::SetCurrent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e4110 FUN_105e4110

void FUN_105e4110(ASceneManager *param_1,undefined **param_2,TArray<FVector> *param_3)

{
  UMatAction *pUVar1;
  UMatAction *pUVar2;
  int iVar3;
  FMatineeTools *in_ECX;
  float fVar4;
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pUVar1 = (UMatAction *)param_2;
  puStack_70 = &LAB_10820c58;
  local_74 = ExceptionList;
  local_6c = 0;
  ExceptionList = &local_74;
  pUVar2 = FMatineeTools::GetNextAction(in_ECX,param_1,(UMatAction *)param_2);
  if ((((pUVar1 != (UMatAction *)0x0) && (pUVar2 != (UMatAction *)0x0)) && (pUVar1 != pUVar2)) &&
     ((*(int *)(pUVar1 + 0x34) != 0 && (*(int *)(pUVar2 + 0x34) != 0)))) {
    _vector_constructor_iterator_(&local_44,0xc,4,FVector_exref);
    iVar3 = *(int *)(pUVar1 + 0x34);
    local_44 = *(float *)(iVar3 + 0x1bc);
    local_40 = *(float *)(iVar3 + 0x1c0);
    local_3c = *(float *)(iVar3 + 0x1c4);
    iVar3 = *(int *)(pUVar2 + 0x34);
    local_20 = *(float *)(iVar3 + 0x1bc);
    local_1c = *(float *)(iVar3 + 0x1c0);
    local_18 = *(float *)(iVar3 + 0x1c4);
    iVar3 = FMatineeTools::GetPathStyle(in_ECX,pUVar2);
    if (iVar3 == 0) {
      param_2 = (undefined **)(local_20 - local_44);
      local_10 = local_1c - local_40;
      local_c = local_18 - local_3c;
      local_14 = (float)param_2;
      local_8 = local_c;
      param_2 = (undefined **)FVector::Size((FVector *)&local_14);
      FVector::Normalize((FVector *)&local_14);
      fVar4 = (float)param_2 / 3.0;
      local_68 = fVar4 * local_14 + local_44;
      local_64 = local_40 + local_10 * fVar4;
      local_60 = local_3c + local_c * fVar4;
      local_2c = local_20 - fVar4 * local_14;
      local_28 = local_1c - fVar4 * local_10;
      local_48 = local_18 - fVar4 * local_c;
      local_50 = local_2c;
      local_4c = local_28;
      local_38 = local_68;
      local_34 = local_64;
      local_30 = local_60;
      local_8 = local_48;
    }
    else {
      iVar3 = *(int *)(pUVar1 + 0x34);
      local_38 = *(float *)(iVar3 + 0x1bc) + *(float *)(pUVar1 + 0x58);
      local_34 = *(float *)(pUVar1 + 0x5c) + *(float *)(iVar3 + 0x1c0);
      local_30 = *(float *)(pUVar1 + 0x60) + *(float *)(iVar3 + 0x1c4);
      iVar3 = *(int *)(pUVar2 + 0x34);
      local_2c = *(float *)(iVar3 + 0x1bc) + *(float *)(pUVar2 + 100);
      local_28 = *(float *)(pUVar2 + 0x68) + *(float *)(iVar3 + 0x1c0);
      local_54 = *(float *)(pUVar2 + 0x6c) + *(float *)(iVar3 + 0x1c4);
      local_5c = local_2c;
      local_58 = local_28;
      local_8 = local_54;
    }
    param_2 = FBezier::vftable;
    local_6c = CONCAT31(local_6c._1_3_,1);
    local_24 = local_8;
    fVar4 = FBezier::Evaluate((FBezier *)&param_2,(FVector *)&local_44,100,param_3);
    *(float *)(pUVar2 + 0x78) = fVar4;
  }
  ExceptionList = local_74;
  return;
}


// ==== 105e43bd Catch@105e43bd

void Catch_105e43bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105e43d1 Catch@105e43d1

void Catch_105e43d1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMatineeTools::GetSamples");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e44b0 FUN_105e44b0

void FUN_105e44b0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10820c84;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}


// ==== 105e4510 FUN_105e4510

void FUN_105e4510(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10820cbf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FMatineeTools::vftable;
  FArray::FArray((FArray *)(in_ECX + 0xd));
  in_ECX[0x10] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x11] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 105e45b0 FUN_105e45b0

void FUN_105e45b0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10820cf6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FMatineeTools::vftable;
  local_4 = 0xffffffff;
  thunk_FUN_103f6fa0(in_ECX + 10);
  ExceptionList = local_c;
  return;
}


// ==== 105e46b0 FUN_105e46b0

void FUN_105e46b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  FName::FName((FName *)(in_ECX + 1),0);
  in_ECX[2] = 0;
  return;
}


// ==== 105e4760 FUN_105e4760

void FUN_105e4760(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10820d19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105e47b0 FUN_105e47b0

void FUN_105e47b0(FArchive *param_1)

{
  int iVar1;
  UPrimitive *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820d30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UPrimitive::Serialize(in_ECX,param_1);
  iVar1 = FArchive::IsPersistent(param_1);
  if (iVar1 == 0) {
    thunk_FUN_103602b0(param_1,in_ECX + 0x60);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105e4819 Catch@105e4819

void Catch_105e4819(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e482d Catch@105e482d

void Catch_105e482d(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UMesh::Serialize");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e4890 FUN_105e4890

int FUN_105e4890(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  UClass *this;
  UObject *pUVar4;
  UObject *in_ECX;
  code *pcVar5;
  UObject *pUVar6;
  FName aFStack_24 [4];
  undefined4 uStack_20;
  UObject *pUStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  if (param_1 == 0) {
    iVar2 = *(int *)(in_ECX + 0x60);
joined_r0x105e48bc:
    pUVar6 = in_ECX + 0x60;
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else {
    if ((*(byte *)(param_1 + 100) & 0x80) != 0) {
      iVar2 = *(int *)(in_ECX + 0x60);
      goto joined_r0x105e48bc;
    }
    pUVar6 = (UObject *)(param_1 + 0x134);
    if (*(int *)(param_1 + 0x134) != 0) {
      uStack_14 = 0x105e48df;
      iVar2 = (**(code **)(**(int **)pUVar6 + 0x8c))();
      if (iVar2 == param_1) {
        uStack_14 = 0x105e48ef;
        pUVar4 = (UObject *)(**(code **)(**(int **)pUVar6 + 0x94))();
        if (pUVar4 == in_ECX) goto LAB_105e498b;
      }
      uStack_14 = 0x105e4903;
      uVar3 = (**(code **)(**(int **)pUVar6 + 0xa4))();
      piVar1 = *(int **)pUVar6;
      if ((uVar3 & 1) == 0) {
        if (piVar1 == (int *)0x0) goto LAB_105e4922;
        pcVar5 = *(code **)(*piVar1 + 0xc);
        uStack_14 = 1;
      }
      else {
        pcVar5 = *(code **)(*piVar1 + 0xa0);
        uStack_14 = 2;
      }
      iStack_18 = 0x105e4922;
      (*pcVar5)();
    }
  }
LAB_105e4922:
  uStack_14 = 0x105e492e;
  this = (UClass *)(**(code **)(*(int *)in_ECX + 0x8c))();
  if (this == (UClass *)0x0) {
    this = &UMeshInstance::PrivateStaticClass;
  }
  iStack_18 = *(int *)GError_exref;
  uStack_14 = 0;
  pUStack_1c = (UObject *)0x105e494b;
  pUStack_1c = UClass::GetDefaultObject(this);
  uStack_20 = 0x84004;
  FName::FName(aFStack_24,0);
  pUVar4 = UObject::GetOuter(in_ECX);
  pUVar4 = UObject::StaticConstructObject(this,pUVar4);
  *(UObject **)pUVar6 = pUVar4;
  iStack_18 = 0x105e497e;
  (**(code **)(*(int *)pUVar4 + 0x98))();
  iStack_18 = param_1;
  pUStack_1c = (UObject *)0x105e498b;
  (**(code **)(**(int **)pUVar6 + 0x90))();
LAB_105e498b:
  return *(int *)pUVar6;
}


// ==== 105e49e0 FUN_105e49e0

int FUN_105e49e0(int *param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  UClass *this;
  UObject *pUVar4;
  undefined4 *puVar5;
  UObject *in_ECX;
  code *pcVar6;
  undefined4 unaff_EBP;
  int *piVar7;
  FName aFStack_28 [4];
  undefined4 uStack_24;
  
  iVar2 = (**(code **)(*(int *)in_ECX + 100))();
  if (((iVar2 == 0) ||
      (((param_4 != (int *)0x0 && (iVar2 = (**(code **)(*param_4 + 100))(), iVar2 == 0)) ||
       (param_1 == (int *)0x0)))) ||
     ((((*(byte *)(param_1 + 0x19) & 0x80) != 0 ||
       (piVar3 = (int *)(**(code **)(*param_1 + 0x74))(), piVar3 == (int *)0x0)) ||
      (piVar3[0x19c] <= param_2)))) {
    return 0;
  }
  iVar2 = *(int *)(piVar3[0x19b] + param_2 * 4);
  iVar1 = *(int *)(iVar2 + 0x3c);
  piVar7 = (int *)(iVar2 + 0x3c);
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 0x350) != param_4) {
      *(int **)(iVar1 + 0x350) = param_4;
      return iVar1;
    }
    return iVar1;
  }
  if (piVar7 == (int *)0x0) {
    return 0;
  }
  this = (UClass *)(**(code **)(*(int *)in_ECX + 0x94))();
  if (this == (UClass *)0x0) {
    this = &UMeshInstance::PrivateStaticClass;
  }
  UClass::GetDefaultObject(this);
  uStack_24 = 0x84004;
  FName::FName(aFStack_28,0);
  pUVar4 = UObject::GetOuter(in_ECX);
  pUVar4 = UObject::StaticConstructObject(this,pUVar4);
  *piVar7 = (int)pUVar4;
  (**(code **)(*(int *)pUVar4 + 0x98))();
  (**(code **)(*(int *)*piVar7 + 0x90))();
  *(int *)(*piVar7 + 0x350) = param_2;
  uStack_24 = 0x105e4b04;
  FName::FName((FName *)&stack0xfffffff4,0);
  switch(param_1) {
  case (int *)0x0:
  case (int *)0x2:
  case (int *)0x3:
  case (int *)0x4:
  case (int *)0x5:
  case (int *)0x6:
  case (int *)0x7:
  case (int *)0x8:
  case (int *)0xe:
  case (int *)0xf:
    *(undefined4 *)(*piVar7 + 0x348) = 0;
    break;
  case (int *)0x1:
    uStack_24 = 0x105e4b89;
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x234))();
    unaff_EBP = *puVar5;
    *(undefined4 *)(*piVar7 + 0x348) = 0;
    break;
  case (int *)0xa:
    pcVar6 = *(code **)(*piVar3 + 0x21c);
    goto LAB_105e4b35;
  case (int *)0xb:
    pcVar6 = *(code **)(*piVar3 + 0x220);
    goto LAB_105e4b35;
  case (int *)0xc:
    pcVar6 = *(code **)(*piVar3 + 0x224);
LAB_105e4b35:
    uStack_24 = 0x105e4b3a;
    puVar5 = (undefined4 *)(*pcVar6)();
    unaff_EBP = *puVar5;
    *(undefined4 *)(*piVar7 + 0x348) = 1;
    break;
  case (int *)0xd:
    *(undefined4 *)(*piVar7 + 0x348) = 1;
  }
  *(int **)(*piVar7 + 0x13c) = param_1;
  *(undefined4 *)(*piVar7 + 0x34c) = unaff_EBP;
  return *piVar7;
}


// ==== 105e4c70 FUN_105e4c70

int FUN_105e4c70(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  UClass *this;
  UObject *pUVar5;
  UObject *in_ECX;
  code *pcVar6;
  UObject *pUVar7;
  FName aFStack_24 [4];
  undefined4 uStack_20;
  UObject *pUStack_1c;
  int *piStack_18;
  undefined4 uStack_14;
  
  if (param_1 == (int *)0x0) {
    iVar2 = *(int *)(in_ECX + 0x60);
joined_r0x105e4c9f:
    pUVar7 = in_ECX + 0x60;
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x19) & 0x80) != 0) {
      iVar2 = *(int *)(in_ECX + 0x60);
      goto joined_r0x105e4c9f;
    }
    uStack_14 = 0x105e4cb1;
    iVar2 = (**(code **)(*param_1 + 0x74))();
    if (iVar2 == 0) {
      return 0;
    }
    uStack_14 = 0x105e4cc3;
    iVar2 = (**(code **)(*param_1 + 0x74))();
    pUVar7 = (UObject *)(iVar2 + 0x41c);
    if (*(int *)(iVar2 + 0x41c) != 0) {
      uStack_14 = 0x105e4ce0;
      iVar3 = (**(code **)(**(int **)pUVar7 + 0x8c))();
      if (iVar3 == iVar2) {
        uStack_14 = 0x105e4cf0;
        pUVar5 = (UObject *)(**(code **)(**(int **)pUVar7 + 0x94))();
        if (pUVar5 == in_ECX) goto LAB_105e4d8c;
      }
      uStack_14 = 0x105e4d04;
      uVar4 = (**(code **)(**(int **)pUVar7 + 0xa4))();
      piVar1 = *(int **)pUVar7;
      if ((uVar4 & 1) == 0) {
        if (piVar1 == (int *)0x0) goto LAB_105e4d23;
        pcVar6 = *(code **)(*piVar1 + 0xc);
        uStack_14 = 1;
      }
      else {
        pcVar6 = *(code **)(*piVar1 + 0xa0);
        uStack_14 = 2;
      }
      piStack_18 = (int *)0x105e4d23;
      (*pcVar6)();
    }
  }
LAB_105e4d23:
  uStack_14 = 0x105e4d2f;
  this = (UClass *)(**(code **)(*(int *)in_ECX + 0x90))();
  if (this == (UClass *)0x0) {
    this = &UMeshInstance::PrivateStaticClass;
  }
  piStack_18 = *(int **)GError_exref;
  uStack_14 = 0;
  pUStack_1c = (UObject *)0x105e4d4c;
  pUStack_1c = UClass::GetDefaultObject(this);
  uStack_20 = 0x84004;
  FName::FName(aFStack_24,0);
  pUVar5 = UObject::GetOuter(in_ECX);
  pUVar5 = UObject::StaticConstructObject(this,pUVar5);
  *(UObject **)pUVar7 = pUVar5;
  piStack_18 = (int *)0x105e4d7f;
  (**(code **)(*(int *)pUVar5 + 0x98))();
  piStack_18 = param_1;
  pUStack_1c = (UObject *)0x105e4d8c;
  (**(code **)(**(int **)pUVar7 + 0x90))();
LAB_105e4d8c:
  return *(int *)pUVar7;
}


// ==== 105e4df0 FUN_105e4df0

int FUN_105e4df0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  UClass *this;
  UObject *pUVar5;
  UObject *in_ECX;
  code *pcVar6;
  UObject *pUVar7;
  FName aFStack_24 [4];
  undefined4 uStack_20;
  UObject *pUStack_1c;
  int *piStack_18;
  undefined4 uStack_14;
  
  if (param_1 == (int *)0x0) {
    iVar2 = *(int *)(in_ECX + 0x60);
joined_r0x105e4e1f:
    pUVar7 = in_ECX + 0x60;
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x19) & 0x80) != 0) {
      iVar2 = *(int *)(in_ECX + 0x60);
      goto joined_r0x105e4e1f;
    }
    uStack_14 = 0x105e4e31;
    iVar2 = (**(code **)(*param_1 + 0x74))();
    if (iVar2 == 0) {
      return 0;
    }
    uStack_14 = 0x105e4e43;
    iVar2 = (**(code **)(*param_1 + 0x74))();
    pUVar7 = (UObject *)(iVar2 + 0x420);
    if (*(int *)(iVar2 + 0x420) != 0) {
      uStack_14 = 0x105e4e60;
      iVar3 = (**(code **)(**(int **)pUVar7 + 0x8c))();
      if (iVar3 == iVar2) {
        uStack_14 = 0x105e4e70;
        pUVar5 = (UObject *)(**(code **)(**(int **)pUVar7 + 0x94))();
        if (pUVar5 == in_ECX) goto LAB_105e4f0c;
      }
      uStack_14 = 0x105e4e84;
      uVar4 = (**(code **)(**(int **)pUVar7 + 0xa4))();
      piVar1 = *(int **)pUVar7;
      if ((uVar4 & 1) == 0) {
        if (piVar1 == (int *)0x0) goto LAB_105e4ea3;
        pcVar6 = *(code **)(*piVar1 + 0xc);
        uStack_14 = 1;
      }
      else {
        pcVar6 = *(code **)(*piVar1 + 0xa0);
        uStack_14 = 2;
      }
      piStack_18 = (int *)0x105e4ea3;
      (*pcVar6)();
    }
  }
LAB_105e4ea3:
  uStack_14 = 0x105e4eaf;
  this = (UClass *)(**(code **)(*(int *)in_ECX + 0x90))();
  if (this == (UClass *)0x0) {
    this = &UMeshInstance::PrivateStaticClass;
  }
  piStack_18 = *(int **)GError_exref;
  uStack_14 = 0;
  pUStack_1c = (UObject *)0x105e4ecc;
  pUStack_1c = UClass::GetDefaultObject(this);
  uStack_20 = 0x84004;
  FName::FName(aFStack_24,0);
  pUVar5 = UObject::GetOuter(in_ECX);
  pUVar5 = UObject::StaticConstructObject(this,pUVar5);
  *(UObject **)pUVar7 = pUVar5;
  piStack_18 = (int *)0x105e4eff;
  (**(code **)(*(int *)pUVar5 + 0x98))();
  piStack_18 = param_1;
  pUStack_1c = (UObject *)0x105e4f0c;
  (**(code **)(**(int **)pUVar7 + 0x90))();
LAB_105e4f0c:
  return *(int *)pUVar7;
}


// ==== 105e4f70 FUN_105e4f70

int FUN_105e4f70(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  UClass *this;
  UObject *pUVar5;
  UObject *in_ECX;
  code *pcVar6;
  UObject *pUVar7;
  FName aFStack_24 [4];
  undefined4 uStack_20;
  UObject *pUStack_1c;
  int *piStack_18;
  undefined4 uStack_14;
  
  if (param_1 == (int *)0x0) {
    iVar2 = *(int *)(in_ECX + 0x60);
joined_r0x105e4f9f:
    pUVar7 = in_ECX + 0x60;
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x19) & 0x80) != 0) {
      iVar2 = *(int *)(in_ECX + 0x60);
      goto joined_r0x105e4f9f;
    }
    uStack_14 = 0x105e4fb1;
    iVar2 = (**(code **)(*param_1 + 0x74))();
    if (iVar2 == 0) {
      return 0;
    }
    uStack_14 = 0x105e4fc3;
    iVar2 = (**(code **)(*param_1 + 0x74))();
    pUVar7 = (UObject *)(iVar2 + 0x424);
    if (*(int *)(iVar2 + 0x424) != 0) {
      uStack_14 = 0x105e4fe0;
      iVar3 = (**(code **)(**(int **)pUVar7 + 0x8c))();
      if (iVar3 == iVar2) {
        uStack_14 = 0x105e4ff0;
        pUVar5 = (UObject *)(**(code **)(**(int **)pUVar7 + 0x94))();
        if (pUVar5 == in_ECX) goto LAB_105e508c;
      }
      uStack_14 = 0x105e5004;
      uVar4 = (**(code **)(**(int **)pUVar7 + 0xa4))();
      piVar1 = *(int **)pUVar7;
      if ((uVar4 & 1) == 0) {
        if (piVar1 == (int *)0x0) goto LAB_105e5023;
        pcVar6 = *(code **)(*piVar1 + 0xc);
        uStack_14 = 1;
      }
      else {
        pcVar6 = *(code **)(*piVar1 + 0xa0);
        uStack_14 = 2;
      }
      piStack_18 = (int *)0x105e5023;
      (*pcVar6)();
    }
  }
LAB_105e5023:
  uStack_14 = 0x105e502f;
  this = (UClass *)(**(code **)(*(int *)in_ECX + 0x90))();
  if (this == (UClass *)0x0) {
    this = &UMeshInstance::PrivateStaticClass;
  }
  piStack_18 = *(int **)GError_exref;
  uStack_14 = 0;
  pUStack_1c = (UObject *)0x105e504c;
  pUStack_1c = UClass::GetDefaultObject(this);
  uStack_20 = 0x84004;
  FName::FName(aFStack_24,0);
  pUVar5 = UObject::GetOuter(in_ECX);
  pUVar5 = UObject::StaticConstructObject(this,pUVar5);
  *(UObject **)pUVar7 = pUVar5;
  piStack_18 = (int *)0x105e507f;
  (**(code **)(*(int *)pUVar5 + 0x98))();
  piStack_18 = param_1;
  pUStack_1c = (UObject *)0x105e508c;
  (**(code **)(**(int **)pUVar7 + 0x90))();
LAB_105e508c:
  return *(int *)pUVar7;
}


// ==== 105e50f0 FUN_105e50f0

int FUN_105e50f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  UClass *this;
  UObject *pUVar5;
  UObject *in_ECX;
  code *pcVar6;
  UObject *pUVar7;
  FName aFStack_24 [4];
  undefined4 uStack_20;
  UObject *pUStack_1c;
  int *piStack_18;
  undefined4 uStack_14;
  
  if (param_1 == (int *)0x0) {
    iVar2 = *(int *)(in_ECX + 0x60);
joined_r0x105e511f:
    pUVar7 = in_ECX + 0x60;
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x19) & 0x80) != 0) {
      iVar2 = *(int *)(in_ECX + 0x60);
      goto joined_r0x105e511f;
    }
    uStack_14 = 0x105e5131;
    iVar2 = (**(code **)(*param_1 + 0x74))();
    if (iVar2 == 0) {
      return 0;
    }
    uStack_14 = 0x105e5143;
    iVar2 = (**(code **)(*param_1 + 0x74))();
    pUVar7 = (UObject *)(iVar2 + 0x428);
    if (*(int *)(iVar2 + 0x428) != 0) {
      uStack_14 = 0x105e5160;
      iVar3 = (**(code **)(**(int **)pUVar7 + 0x8c))();
      if (iVar3 == iVar2) {
        uStack_14 = 0x105e5170;
        pUVar5 = (UObject *)(**(code **)(**(int **)pUVar7 + 0x94))();
        if (pUVar5 == in_ECX) goto LAB_105e520c;
      }
      uStack_14 = 0x105e5184;
      uVar4 = (**(code **)(**(int **)pUVar7 + 0xa4))();
      piVar1 = *(int **)pUVar7;
      if ((uVar4 & 1) == 0) {
        if (piVar1 == (int *)0x0) goto LAB_105e51a3;
        pcVar6 = *(code **)(*piVar1 + 0xc);
        uStack_14 = 1;
      }
      else {
        pcVar6 = *(code **)(*piVar1 + 0xa0);
        uStack_14 = 2;
      }
      piStack_18 = (int *)0x105e51a3;
      (*pcVar6)();
    }
  }
LAB_105e51a3:
  uStack_14 = 0x105e51af;
  this = (UClass *)(**(code **)(*(int *)in_ECX + 0x90))();
  if (this == (UClass *)0x0) {
    this = &UMeshInstance::PrivateStaticClass;
  }
  piStack_18 = *(int **)GError_exref;
  uStack_14 = 0;
  pUStack_1c = (UObject *)0x105e51cc;
  pUStack_1c = UClass::GetDefaultObject(this);
  uStack_20 = 0x84004;
  FName::FName(aFStack_24,0);
  pUVar5 = UObject::GetOuter(in_ECX);
  pUVar5 = UObject::StaticConstructObject(this,pUVar5);
  *(UObject **)pUVar7 = pUVar5;
  piStack_18 = (int *)0x105e51ff;
  (**(code **)(*(int *)pUVar5 + 0x98))();
  piStack_18 = param_1;
  pUStack_1c = (UObject *)0x105e520c;
  (**(code **)(**(int **)pUVar7 + 0x90))();
LAB_105e520c:
  return *(int *)pUVar7;
}


// ==== 105e5270 FUN_105e5270

int FUN_105e5270(int *param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  UClass *this;
  UObject *pUVar6;
  UObject *in_ECX;
  code *pcVar7;
  UObject *pUVar8;
  FName aFStack_40 [4];
  undefined4 uStack_3c;
  UObject *pUStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820d40;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == (int *)0x0) {
    iVar3 = *(int *)(in_ECX + 0x60);
joined_r0x105e52ce:
    pUVar8 = in_ECX + 0x60;
    ppvVar2 = &local_10;
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x19) & 0x80) != 0) {
      iVar3 = *(int *)(in_ECX + 0x60);
      goto joined_r0x105e52ce;
    }
    uStack_30 = 0x105e52db;
    ExceptionList = &local_10;
    iVar3 = (**(code **)(*param_1 + 0x74))();
    if (iVar3 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    uStack_30 = 0x105e52ec;
    iVar3 = (**(code **)(*param_1 + 0x74))();
    pUVar8 = (UObject *)(iVar3 + 0x430);
    ppvVar2 = ExceptionList;
    if (*(int *)pUVar8 != 0) {
      uStack_30 = 0x105e5305;
      iVar4 = (**(code **)(**(int **)pUVar8 + 0x8c))();
      if (iVar4 == iVar3) {
        uStack_30 = 0x105e5315;
        pUVar6 = (UObject *)(**(code **)(**(int **)pUVar8 + 0x94))();
        if (pUVar6 == in_ECX) goto LAB_105e53b7;
      }
      uStack_30 = 0x105e5329;
      uVar5 = (**(code **)(**(int **)pUVar8 + 0xa4))();
      piVar1 = *(int **)pUVar8;
      if ((uVar5 & 1) == 0) {
        ppvVar2 = ExceptionList;
        if (piVar1 == (int *)0x0) goto LAB_105e5348;
        uStack_30 = 1;
        pcVar7 = *(code **)(*piVar1 + 0xc);
      }
      else {
        uStack_30 = 2;
        pcVar7 = *(code **)(*piVar1 + 0xa0);
      }
      piStack_34 = (int *)0x105e5348;
      (*pcVar7)();
      ppvVar2 = ExceptionList;
    }
  }
LAB_105e5348:
  ExceptionList = ppvVar2;
  uStack_30 = 0x105e5354;
  this = (UClass *)(**(code **)(*(int *)in_ECX + 0x90))();
  if (this == (UClass *)0x0) {
    this = &UMeshInstance::PrivateStaticClass;
  }
  uStack_30 = 0;
  piStack_34 = *(int **)GError_exref;
  pUStack_38 = (UObject *)0x105e5371;
  pUStack_38 = UClass::GetDefaultObject(this);
  uStack_3c = 0x84004;
  FName::FName(aFStack_40,0);
  pUVar6 = UObject::GetOuter(in_ECX);
  pUVar6 = UObject::StaticConstructObject(this,pUVar6);
  *(UObject **)pUVar8 = pUVar6;
  piStack_34 = (int *)0x105e53a7;
  (**(code **)(*(int *)pUVar6 + 0x98))();
  piStack_34 = param_1;
  pUStack_38 = (UObject *)0x105e53b7;
  (**(code **)(**(int **)pUVar8 + 0x90))();
LAB_105e53b7:
  ExceptionList = local_10;
  return *(int *)pUVar8;
}


// ==== 105e53e1 Catch@105e53e1

void Catch_105e53e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e53f5 Catch@105e53f5

void Catch_105e53f5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMesh::CloakCoverMeshGetInstance");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e5480 FUN_105e5480

void FUN_105e5480(FArchive *param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FArchive::Ver(param_1);
  if (iVar1 < 0x70) {
    *(undefined4 *)((int)param_2 + 8) = 0;
    FArchive::ByteOrderSerialize(param_1,param_2,4);
    (**(code **)(*(int *)param_1 + 0x1c))((int)param_2 + 4);
    return;
  }
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  piVar2 = (int *)(**(code **)(*(int *)param_1 + 0x1c))((int)param_2 + 4);
  (**(code **)(*piVar2 + 0x18))((int)param_2 + 8);
  return;
}


// ==== 105e5500 FUN_105e5500

FArchive * FUN_105e5500(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  return param_1;
}


// ==== 105e5540 FUN_105e5540

FArchive * FUN_105e5540(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  return param_1;
}


// ==== 105e5580 FUN_105e5580

FArchive * FUN_105e5580(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FName *this;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820d50;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      (**(code **)(*(int *)param_1 + 0x1c))(*(int *)param_2 + iVar3 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    FArray::Empty(param_2,4,local_18);
    while (iVar3 < local_18) {
      this = (FName *)thunk_FUN_10370640(4,param_2);
      if (this == (FName *)0x0) {
        (**(code **)(*(int *)param_1 + 0x1c))(0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = FName::FName(this);
        (**(code **)(*(int *)param_1 + 0x1c))(uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105e565b Catch@105e565b

void Catch_105e565b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105e566f Catch@105e566f

void Catch_105e566f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e56d0 FUN_105e56d0

void FUN_105e56d0(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UAnimNotify_Script::PrivateStaticClass);
  if (iVar1 == 0) {
    appFailAssert("Class->IsChildOf(T::StaticClass())",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
  }
  if (param_2 == (UPackage *)0xffffffff) {
    param_2 = UObject::GetTransientPackage();
  }
  UObject::StaticConstructObject(param_1,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0);
  return;
}


// ==== 105e5750 FUN_105e5750

int FUN_105e5750(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  UClass *this;
  UObject *pUVar3;
  int iVar4;
  uint uVar5;
  NCBoneSimul *this_00;
  undefined4 uVar6;
  UObject *in_ECX;
  code *pcVar7;
  UObject *pUVar8;
  FName aFStack_30 [4];
  undefined4 uStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10820d6b;
  local_c = ExceptionList;
  if ((param_2 < 0) || (ExceptionList = &local_c, 8 < param_2)) {
    uStack_2c = 0x105e578a;
    ExceptionList = &local_c;
    appFailAssert("0 <= SubNo && SubNo < MAX_SUBMESHES",".\\UnMesh.cpp",0x70);
  }
  if (param_1 == (int *)0x0) {
    iVar4 = *(int *)(in_ECX + 0x60);
joined_r0x105e57b6:
    pUVar8 = in_ECX + 0x60;
    if (iVar4 != 0) {
      ExceptionList = local_c;
      return iVar4;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x19) & 0x80) != 0) {
      iVar4 = *(int *)(in_ECX + 0x60);
      goto joined_r0x105e57b6;
    }
    iVar4 = (**(code **)(*param_1 + 0x74))();
    if (iVar4 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar4 = (**(code **)(*param_1 + 0x74))();
    pUVar8 = (UObject *)(iVar4 + 0x3f8 + param_2 * 4);
    if (*(int *)(iVar4 + 0x3f8 + param_2 * 4) != 0) {
      iVar2 = (**(code **)(**(int **)pUVar8 + 0x8c))();
      if ((iVar2 == iVar4) &&
         (pUVar3 = (UObject *)(**(code **)(**(int **)pUVar8 + 0x94))(), pUVar3 == in_ECX))
      goto LAB_105e5930;
      uVar5 = (**(code **)(**(int **)pUVar8 + 0xa4))();
      piVar1 = *(int **)pUVar8;
      if ((uVar5 & 1) == 0) {
        if (piVar1 == (int *)0x0) goto LAB_105e583a;
        pcVar7 = *(code **)(*piVar1 + 0xc);
      }
      else {
        pcVar7 = *(code **)(*piVar1 + 0xa0);
      }
      (*pcVar7)();
    }
  }
LAB_105e583a:
  this = (UClass *)(**(code **)(*(int *)in_ECX + 0x90))();
  if (this == (UClass *)0x0) {
    this = &UMeshInstance::PrivateStaticClass;
  }
  UClass::GetDefaultObject(this);
  uStack_2c = 0x84004;
  FName::FName(aFStack_30,0);
  pUVar3 = UObject::GetOuter(in_ECX);
  pUVar3 = UObject::StaticConstructObject(this,pUVar3);
  *(UObject **)pUVar8 = pUVar3;
  (**(code **)(*(int *)pUVar3 + 0x98))();
  (**(code **)(**(int **)pUVar8 + 0x90))();
  uStack_2c = 0x105e58b8;
  (**(code **)(**(int **)pUVar8 + 0x9c))();
  iVar4 = UObject::IsA(in_ECX,&USkeletalMesh::PrivateStaticClass);
  uVar5 = -(uint)(iVar4 != 0) & (uint)in_ECX;
  if ((((param_2 == 4) || (param_2 == 5)) && (uVar5 != 0)) &&
     ((*(int *)(uVar5 + 0x14c) != 0 && (*(int *)(*(int *)pUVar8 + 0x134) == 0)))) {
    this_00 = (NCBoneSimul *)(**(code **)**(undefined4 **)GMalloc_exref)();
    uStack_4 = 0;
    if (this_00 == (NCBoneSimul *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = NCBoneSimul::NCBoneSimul(this_00);
    }
    *(undefined4 *)(*(int *)pUVar8 + 0x134) = uVar6;
  }
LAB_105e5930:
  ExceptionList = local_c;
  return *(int *)pUVar8;
}


// ==== 105e59f0 FUN_105e59f0

int FUN_105e59f0(int *param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  uint uVar4;
  UClass *this;
  UObject *pUVar5;
  int iVar6;
  NCCloakSimul *this_00;
  undefined4 uVar7;
  UObject *in_ECX;
  code *pcVar8;
  UObject *pUVar9;
  FName aFStack_40 [4];
  undefined4 uStack_3c;
  UObject *pUStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820d8b;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == (int *)0x0) {
    iVar6 = *(int *)(in_ECX + 0x60);
joined_r0x105e5a4e:
    pUVar9 = in_ECX + 0x60;
    ppvVar2 = &local_10;
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x19) & 0x80) != 0) {
      iVar6 = *(int *)(in_ECX + 0x60);
      goto joined_r0x105e5a4e;
    }
    uStack_30 = 0x105e5a5b;
    ExceptionList = &local_10;
    iVar6 = (**(code **)(*param_1 + 0x74))();
    if (iVar6 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    uStack_30 = 0x105e5a6c;
    iVar6 = (**(code **)(*param_1 + 0x74))();
    pUVar9 = (UObject *)(iVar6 + 0x42c);
    ppvVar2 = ExceptionList;
    if (*(int *)pUVar9 != 0) {
      uStack_30 = 0x105e5a85;
      iVar3 = (**(code **)(**(int **)pUVar9 + 0x8c))();
      if (iVar3 == iVar6) {
        uStack_30 = 0x105e5a95;
        pUVar5 = (UObject *)(**(code **)(**(int **)pUVar9 + 0x94))();
        if (pUVar5 == in_ECX) goto LAB_105e5ba5;
      }
      uStack_30 = 0x105e5aa9;
      uVar4 = (**(code **)(**(int **)pUVar9 + 0xa4))();
      piVar1 = *(int **)pUVar9;
      if ((uVar4 & 1) == 0) {
        ppvVar2 = ExceptionList;
        if (piVar1 == (int *)0x0) goto LAB_105e5ac8;
        uStack_30 = 1;
        pcVar8 = *(code **)(*piVar1 + 0xc);
      }
      else {
        uStack_30 = 2;
        pcVar8 = *(code **)(*piVar1 + 0xa0);
      }
      piStack_34 = (int *)0x105e5ac8;
      (*pcVar8)();
      ppvVar2 = ExceptionList;
    }
  }
LAB_105e5ac8:
  ExceptionList = ppvVar2;
  uStack_30 = 0x105e5ad4;
  this = (UClass *)(**(code **)(*(int *)in_ECX + 0x90))();
  if (this == (UClass *)0x0) {
    this = &UMeshInstance::PrivateStaticClass;
  }
  uStack_30 = 0;
  piStack_34 = *(int **)GError_exref;
  pUStack_38 = (UObject *)0x105e5af1;
  pUStack_38 = UClass::GetDefaultObject(this);
  uStack_3c = 0x84004;
  FName::FName(aFStack_40,0);
  pUVar5 = UObject::GetOuter(in_ECX);
  pUVar5 = UObject::StaticConstructObject(this,pUVar5);
  *(UObject **)pUVar9 = pUVar5;
  piStack_34 = (int *)0x105e5b27;
  (**(code **)(*(int *)pUVar5 + 0x98))();
  piStack_34 = param_1;
  pUStack_38 = (UObject *)0x105e5b37;
  (**(code **)(**(int **)pUVar9 + 0x90))();
  uStack_3c = 0x105e5b3d;
  iVar6 = thunk_FUN_104b4270();
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x14c) != 0)) && (*(int *)(*(int *)pUVar9 + 0x138) == 0)) {
    pUStack_38 = (UObject *)0x8e0;
    uStack_3c = 0x105e5b62;
    this_00 = (NCCloakSimul *)thunk_FUN_1032ffc0();
    local_8 = CONCAT31(local_8._1_3_,1);
    if (this_00 != (NCCloakSimul *)0x0) {
      pUStack_38 = (UObject *)0x105e5b77;
      uVar7 = NCCloakSimul::NCCloakSimul(this_00);
      *(undefined4 *)(*(int *)pUVar9 + 0x138) = uVar7;
      ExceptionList = local_10;
      return *(int *)pUVar9;
    }
    *(undefined4 *)(*(int *)pUVar9 + 0x138) = 0;
  }
LAB_105e5ba5:
  ExceptionList = local_10;
  return *(int *)pUVar9;
}


// ==== 105e5bcf Catch@105e5bcf

void Catch_105e5bcf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e5be3 Catch@105e5be3

void Catch_105e5be3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMesh::CloakMeshGetInstance");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e5c90 FUN_105e5c90

void FUN_105e5c90(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 uStack_40;
  undefined4 local_1c;
  FName local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820da0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x20); iVar3 = iVar3 + 1) {
    uStack_40 = 0x105e5ccb;
    FName::FName(local_18,0);
    iVar1 = iVar3 * 0xc;
    uStack_40 = 0x105e5ce4;
    iVar2 = FName::operator!=((FName *)(*(int *)(in_ECX + 0x1c) + iVar1 + 4),local_18);
    if (iVar2 != 0) {
      FName::FName((FName *)&uStack_40,0);
      iVar2 = thunk_FUN_105e56d0(&UAnimNotify_Script::PrivateStaticClass,param_1);
      *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 4 + iVar1);
      *(int *)(*(int *)(in_ECX + 0x1c) + 8 + iVar1) = iVar2;
      uStack_40 = 0x105e5d25;
      FName::FName((FName *)&local_1c,0);
      *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 4 + iVar1) = local_1c;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105e5d4e Catch@105e5d4e

void Catch_105e5d4e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105e5d62 Catch@105e5d62

void Catch_105e5d62(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMeshAnimSeq::UpdateOldNotifies");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e5dc0 FUN_105e5dc0

FArchive * FUN_105e5dc0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820db0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,8);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_105e5500(param_1,*(int *)param_2 + iVar1 * 8);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,8,local_18);
    while (iVar3 < local_18) {
      puVar2 = (undefined4 *)thunk_FUN_10370c40(8,param_2);
      if (puVar2 == (undefined4 *)0x0) {
        thunk_FUN_105e5500(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        thunk_FUN_105e5500(param_1,puVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105e5eb4 Catch@105e5eb4

void Catch_105e5eb4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105e5ec8 Catch@105e5ec8

void Catch_105e5ec8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e5f30 FUN_105e5f30

FArchive * FUN_105e5f30(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820dc0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,8);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_105e5540(param_1,*(int *)param_2 + iVar1 * 8);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,8,local_18);
    while (iVar3 < local_18) {
      puVar2 = (undefined4 *)thunk_FUN_10370c60(8,param_2);
      if (puVar2 == (undefined4 *)0x0) {
        thunk_FUN_105e5540(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        thunk_FUN_105e5540(param_1,puVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105e6024 Catch@105e6024

void Catch_105e6024(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105e6038 Catch@105e6038

void Catch_105e6038(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e60a0 FUN_105e60a0

FArchive * FUN_105e60a0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820dd0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0xc);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_105e5480(param_1,*(int *)param_2 + iVar1 * 0xc);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0xc,local_18);
    while (iVar3 < local_18) {
      iVar1 = thunk_FUN_10370ca0(0xc,param_2);
      if (iVar1 == 0) {
        thunk_FUN_105e5480(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = thunk_FUN_105e46b0();
        thunk_FUN_105e5480(param_1,uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105e6193 Catch@105e6193

void Catch_105e6193(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105e61a7 Catch@105e61a7

void Catch_105e61a7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e6210 FUN_105e6210

void FUN_105e6210(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  thunk_FUN_105e5dc0(param_1,(int)param_2 + 4);
  return;
}


// ==== 105e6280 FUN_105e6280

void FUN_105e6280(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10820df4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  FArray::FArray((FArray *)(in_ECX + 1));
  ExceptionList = local_c;
  return;
}


// ==== 105e62e0 FUN_105e62e0

FArchive * FUN_105e62e0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820e10;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x10);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      thunk_FUN_105e6210(param_1,iVar3 * 0x10 + *(int *)param_2);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_103ee0d0(local_18);
    while (iVar3 < local_18) {
      iVar1 = thunk_FUN_10370c80(0x10,param_2);
      if (iVar1 == 0) {
        thunk_FUN_105e6210(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = thunk_FUN_105e6280();
        thunk_FUN_105e6210(param_1,uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105e63b9 Catch@105e63b9

void Catch_105e63b9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105e63cd Catch@105e63cd

void Catch_105e63cd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e6430 FUN_105e6430

FArchive * FUN_105e6430(FArchive *param_1,undefined1 *param_2)

{
  int iVar1;
  FArchive *pFVar2;
  undefined4 uVar3;
  
  iVar1 = FArchive::LicenseeVer(param_1);
  if (iVar1 == 0x1a) {
    iVar1 = FArchive::IsLoading(param_1);
    if (iVar1 != 0) {
      *param_2 = 0;
      pFVar2 = (FArchive *)thunk_FUN_105e5f30(param_1,param_2 + 4);
      return pFVar2;
    }
  }
  else {
    iVar1 = FArchive::LicenseeVer(param_1);
    if (0x1a < iVar1) {
      (**(code **)(*(int *)param_1 + 4))(param_2,1);
      uVar3 = thunk_FUN_105e5f30(param_1,param_2 + 4,param_2 + 0x10);
      pFVar2 = (FArchive *)thunk_FUN_105e62e0(uVar3);
      FArchive::ByteOrderSerialize(pFVar2,param_2 + 0x1c,4);
      FArchive::ByteOrderSerialize(pFVar2,param_2 + 0x20,4);
      pFVar2 = (FArchive *)thunk_FUN_105e5dc0(pFVar2,param_2 + 0x24);
      return pFVar2;
    }
  }
  return param_1;
}


// ==== 105e6500 FUN_105e6500

FArchive * FUN_105e6500(FArchive *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  FArchive *pFVar3;
  void *pvVar4;
  
  iVar1 = FArchive::Ver(param_1);
  if (iVar1 < 0x73) {
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  else {
    FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x28),4);
  }
  iVar1 = FArchive::LicenseeVer(param_1);
  if (iVar1 == 1) {
    uVar2 = (**(code **)(*(int *)param_1 + 0x1c))(param_2,param_2 + 4);
    pFVar3 = (FArchive *)thunk_FUN_105e5580(uVar2);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x10),4);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x14),4);
    pFVar3 = (FArchive *)thunk_FUN_105e60a0(pFVar3,param_2 + 0x1c);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x18),4);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x2c),4);
    pvVar4 = (void *)(param_2 + 0x30);
LAB_105e659f:
    FArchive::ByteOrderSerialize(pFVar3,pvVar4,4);
    pFVar3 = (FArchive *)(**(code **)(*(int *)pFVar3 + 0x18))(param_2 + 0x38);
    return pFVar3;
  }
  iVar1 = FArchive::LicenseeVer(param_1);
  if (1 < iVar1) {
    iVar1 = FArchive::LicenseeVer(param_1);
    if (iVar1 < 0x14) {
      uVar2 = (**(code **)(*(int *)param_1 + 0x1c))(param_2,param_2 + 4);
      pFVar3 = (FArchive *)thunk_FUN_105e5580(uVar2);
      FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x10),4);
      FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x14),4);
      pFVar3 = (FArchive *)thunk_FUN_105e60a0(pFVar3,param_2 + 0x1c);
      FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x18),4);
      FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x2c),4);
      FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x30),4);
      pvVar4 = (void *)(param_2 + 0x34);
      goto LAB_105e659f;
    }
  }
  iVar1 = FArchive::LicenseeVer(param_1);
  if (0x13 < iVar1) {
    iVar1 = FArchive::LicenseeVer(param_1);
    if (iVar1 < 0x19) {
      uVar2 = (**(code **)(*(int *)param_1 + 0x1c))(param_2,param_2 + 4);
      pFVar3 = (FArchive *)thunk_FUN_105e5580(uVar2);
      FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x10),4);
      FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x14),4);
      pFVar3 = (FArchive *)thunk_FUN_105e60a0(pFVar3,param_2 + 0x1c);
      FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x18),4);
      FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x2c),4);
      FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x30),4);
      FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x34),4);
      pFVar3 = (FArchive *)(**(code **)(*(int *)pFVar3 + 0x18))(param_2 + 0x38);
      FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x3c),4);
      return pFVar3;
    }
  }
  iVar1 = FArchive::LicenseeVer(param_1);
  if (iVar1 == 0x19) {
    uVar2 = (**(code **)(*(int *)param_1 + 0x1c))(param_2,param_2 + 4);
    pFVar3 = (FArchive *)thunk_FUN_105e5580(uVar2);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x10),4);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x14),4);
    pFVar3 = (FArchive *)thunk_FUN_105e60a0(pFVar3,param_2 + 0x1c);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x18),4);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x2c),4);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x30),4);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x34),4);
    pFVar3 = (FArchive *)(**(code **)(*(int *)pFVar3 + 0x18))(param_2 + 0x38);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x3c),4);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x40),4);
    return pFVar3;
  }
  iVar1 = FArchive::LicenseeVer(param_1);
  if (0x19 < iVar1) {
    uVar2 = (**(code **)(*(int *)param_1 + 0x1c))(param_2,param_2 + 4);
    pFVar3 = (FArchive *)thunk_FUN_105e5580(uVar2);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x10),4);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x14),4);
    pFVar3 = (FArchive *)thunk_FUN_105e60a0(pFVar3,param_2 + 0x1c);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x18),4);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x2c),4);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x30),4);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x34),4);
    pFVar3 = (FArchive *)(**(code **)(*(int *)pFVar3 + 0x18))(param_2 + 0x38);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x3c),4);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x40),4);
    pFVar3 = (FArchive *)thunk_FUN_105e6430(pFVar3,param_2 + 0x44);
    return pFVar3;
  }
  uVar2 = (**(code **)(*(int *)param_1 + 0x1c))(param_2,param_2 + 4);
  pFVar3 = (FArchive *)thunk_FUN_105e5580(uVar2);
  FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x10),4);
  FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x14),4);
  pFVar3 = (FArchive *)thunk_FUN_105e60a0(pFVar3,param_2 + 0x1c);
  FArchive::ByteOrderSerialize(pFVar3,(void *)(param_2 + 0x18),4);
  return pFVar3;
}


// ==== 105e69f0 FUN_105e69f0

void FUN_105e69f0(void)

{
  UParticleEmitter *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820e20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UParticleEmitter::PostEditChange(in_ECX);
  (**(code **)(*(int *)in_ECX + 0x6c))();
  (**(code **)(*(int *)in_ECX + 0x68))(*(undefined4 *)(in_ECX + 0x10c));
  ExceptionList = local_10;
  return;
}


// ==== 105e6a50 Catch@105e6a50

void Catch_105e6a50(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e6a64 Catch@105e6a64

void Catch_105e6a64(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMeshEmitter::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e6ab0 FUN_105e6ab0

void FUN_105e6ab0(int param_1)

{
  int iVar1;
  float *pfVar2;
  UParticleEmitter *in_ECX;
  float10 fVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820e30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UParticleEmitter::Initialize(in_ECX,param_1);
  iVar1 = *(int *)(in_ECX + 0x4d0);
  if (iVar1 != 0) {
    fVar3 = (float10)thunk_FUN_104a4940(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x40))
    ;
    *(float *)(in_ECX + 0x4d8) = (float)fVar3;
    fVar3 = (float10)thunk_FUN_104a4940(*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x44))
    ;
    *(float *)(in_ECX + 0x4dc) = (float)fVar3;
    fVar3 = (float10)thunk_FUN_104a4940(*(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(iVar1 + 0x48))
    ;
    *(float *)(in_ECX + 0x4e0) = (float)fVar3;
    pfVar2 = (float *)FBox::GetCenter((FBox *)(iVar1 + 0x34));
    *(float *)(in_ECX + 0x4d8) = *(float *)(in_ECX + 0x4d8) - *pfVar2;
    *(float *)(in_ECX + 0x4dc) = *(float *)(in_ECX + 0x4dc) - pfVar2[1];
    *(float *)(in_ECX + 0x4e0) = *(float *)(in_ECX + 0x4e0) - pfVar2[2];
  }
  *(float *)(in_ECX + 0x460) = *(float *)(in_ECX + 0x4d8) * *(float *)(in_ECX + 0x44);
  *(float *)(in_ECX + 0x464) = *(float *)(in_ECX + 0x4dc) * *(float *)(in_ECX + 0x48);
  *(float *)(in_ECX + 0x468) = *(float *)(in_ECX + 0x4e0) * *(float *)(in_ECX + 0x4c);
  ExceptionList = local_10;
  return;
}


// ==== 105e6be6 Catch@105e6be6

void Catch_105e6be6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105e6bfa Catch@105e6bfa

void Catch_105e6bfa(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMeshEmitter::Initialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e6c70 FUN_105e6c70

int FUN_105e6c70(float param_1)

{
  FRange *this;
  float fVar1;
  int iVar2;
  float *pfVar3;
  FBox *pFVar4;
  undefined4 *puVar5;
  UParticleEmitter *in_ECX;
  int iVar6;
  FBox *this_00;
  FBox local_ec [28];
  float local_d0;
  float local_c4;
  float local_b8;
  float local_ac;
  float local_a0;
  float local_94;
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  float local_78;
  float local_6c;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puStack_80 = &LAB_10820e40;
  local_84 = ExceptionList;
  local_88 = &stack0xffffff08;
  local_7c = 0;
  ExceptionList = &local_84;
  iVar2 = UParticleEmitter::UpdateParticles(in_ECX,param_1);
  fVar1 = *(float *)(in_ECX + 0x49c);
  if (((byte)in_ECX[0x2e4] & 1) == 0) {
    local_8 = FRange::GetMax((FRange *)(in_ECX + 0x2cc));
    local_c = FRange::GetMax((FRange *)(in_ECX + 0x2d4));
    local_14 = FRange::GetMax((FRange *)(in_ECX + 0x2dc));
    local_6c = local_8;
    local_1c = fVar1 * local_8;
    local_28 = local_c * fVar1;
    local_14 = fVar1 * local_14;
    local_2c = local_1c;
    local_24 = local_14;
    local_10 = local_14;
    local_c = local_28;
    local_8 = local_1c;
  }
  else {
    this = (FRange *)(in_ECX + 0x2cc);
    local_10 = FRange::GetMax(this);
    local_c = FRange::GetMax(this);
    local_14 = FRange::GetMax(this);
    local_d0 = local_10;
    local_1c = fVar1 * local_10;
    local_34 = local_c * fVar1;
    local_14 = fVar1 * local_14;
    local_38 = local_1c;
    local_30 = local_14;
    local_10 = local_1c;
    local_c = local_34;
    local_8 = local_14;
  }
  local_18 = local_c;
  if (*(int *)(in_ECX + 0x4d0) != 0) {
    pfVar3 = (float *)FBox::GetCenter((FBox *)(*(int *)(in_ECX + 0x4d0) + 0x34));
    local_44 = *pfVar3;
    local_40 = pfVar3[1];
    local_3c = pfVar3[2];
    local_a0 = local_1c * local_44;
    *(float *)(in_ECX + 0x444) = local_a0 + *(float *)(in_ECX + 0x444);
    *(float *)(in_ECX + 0x448) = *(float *)(in_ECX + 0x448) + local_40 * local_18;
    *(float *)(in_ECX + 0x44c) = *(float *)(in_ECX + 0x44c) + local_3c * local_14;
    *(float *)(in_ECX + 0x450) = local_a0 + *(float *)(in_ECX + 0x450);
    *(float *)(in_ECX + 0x454) = *(float *)(in_ECX + 0x454) + local_40 * local_18;
    *(float *)(in_ECX + 0x458) = *(float *)(in_ECX + 0x458) + local_3c * local_14;
    local_78 = local_a0;
  }
  local_b8 = local_1c * 1.1;
  local_94 = local_b8 * *(float *)(in_ECX + 0x4d8);
  local_50 = local_94 + *(float *)(in_ECX + 0x450);
  local_4c = *(float *)(in_ECX + 0x454) + *(float *)(in_ECX + 0x4dc) * local_18 * 1.1;
  local_48 = *(float *)(in_ECX + 0x458) + *(float *)(in_ECX + 0x4e0) * local_14 * 1.1;
  local_c4 = local_b8 * *(float *)(in_ECX + 0x4d8);
  this_00 = (FBox *)(in_ECX + 0x444);
  local_5c = *(float *)this_00 - local_c4;
  local_58 = *(float *)(in_ECX + 0x448) - *(float *)(in_ECX + 0x4dc) * local_18 * 1.1;
  local_54 = *(float *)(in_ECX + 0x44c) - *(float *)(in_ECX + 0x4e0) * local_14 * 1.1;
  local_ac = local_b8;
  local_10 = local_54;
  local_c = local_58;
  local_8 = local_5c;
  pFVar4 = (FBox *)FBox::FBox(local_ec,(FVector *)&local_5c,(FVector *)&local_50);
  FBox::operator+=(this_00,pFVar4);
  if (*(int *)(in_ECX + 0x420) != 0) {
    FVector::Size((FVector *)(*(int *)(in_ECX + 0x420) + 0x28c));
    puVar5 = (undefined4 *)FBox::ExpandBy(this_00,(float)local_ec);
    for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)this_00 = *puVar5;
      puVar5 = puVar5 + 1;
      this_00 = this_00 + 4;
    }
  }
  ExceptionList = local_84;
  return iVar2;
}


// ==== 105e6fc1 Catch@105e6fc1

void Catch_105e6fc1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x58) = *(undefined4 *)(unaff_EBP + 0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x58,&DAT_10914c48);
}


// ==== 105e6fd5 Catch@105e6fd5

void Catch_105e6fd5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMeshEmitter::UpdateParticles");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e70e0 FUN_105e70e0

UObject * FUN_105e70e0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UBitmapMaterial::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105e7110 FUN_105e7110

void FUN_105e7110(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UColorModifier::PrivateStaticClass);
  if (iVar1 == 0) {
    appFailAssert("Class->IsChildOf(T::StaticClass())",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
  }
  if (param_2 == (UPackage *)0xffffffff) {
    param_2 = UObject::GetTransientPackage();
  }
  UObject::StaticConstructObject(param_1,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0);
  return;
}


// ==== 105e7190 FUN_105e7190

void FUN_105e7190(void)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  UObject *pUVar4;
  int iVar5;
  UParticleEmitter *in_ECX;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10820e50;
  local_10 = ExceptionList;
  iVar6 = 0;
  local_8 = 0;
  ppvVar2 = &local_10;
  if ((*(int *)(in_ECX + 0x4d0) != 0) &&
     (ExceptionList = &local_10, ppvVar2 = &local_10, *(int *)(in_ECX + 0x420) != 0)) {
    while( true ) {
      iVar5 = *(int *)(in_ECX + 0x4d0);
      ppvVar2 = ExceptionList;
      if (*(int *)(iVar5 + 100) <= iVar6) break;
      piVar1 = *(int **)(in_ECX + 0x420);
      iVar3 = (**(code **)(*piVar1 + 0xac))(iVar6);
      if ((iVar3 == 0) && (iVar3 = *(int *)(*(int *)(iVar5 + 0x13c) + iVar6 * 0x14), iVar3 == 0)) {
        pUVar4 = UClass::GetDefaultObject(&UMaterial::PrivateStaticClass);
        iVar5 = thunk_FUN_10370560(pUVar4);
        iVar3 = *(int *)(iVar5 + 0x38);
        if (iVar3 != 0) goto LAB_105e722d;
LAB_105e7250:
        iVar5 = iVar3;
      }
      else {
LAB_105e722d:
        if ((*(byte *)(piVar1 + 0xe8) & 1) == 0) goto LAB_105e7250;
        iVar5 = (**(code **)(*piVar1 + 0x124))();
        if ((iVar5 == 0) || (*(int *)(iVar5 + 0x578) = iVar3, iVar3 == 0)) goto LAB_105e7250;
      }
      thunk_FUN_1040b4c0(iVar5);
      iVar6 = iVar6 + 1;
    }
  }
  ExceptionList = ppvVar2;
  UParticleEmitter::Reset(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 105e7283 Catch@105e7283

void Catch_105e7283(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105e7297 Catch@105e7297

void Catch_105e7297(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMeshEmitter::Reset");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e7300 FUN_105e7300

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int FUN_105e7300(FDynamicActor *param_1,FLevelSceneNode *param_2,wchar_t *param_3,
                FRenderInterface *param_4)

{
  uint *puVar1;
  int *piVar2;
  UViewport *this;
  int iVar3;
  int iVar4;
  UObject *this_00;
  ushort *puVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  FMatrix *pFVar9;
  UParticleEmitter *in_ECX;
  wchar_t *extraout_ECX;
  wchar_t *extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  wchar_t *extraout_ECX_02;
  wchar_t *pwVar10;
  uint extraout_ECX_03;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  FMatrix *pFVar14;
  undefined4 auStack_1a04 [5];
  undefined4 uStack_19f0;
  uint uStack_19ec;
  uint uStack_19e8;
  uint uStack_19e4;
  uint uStack_19e0;
  uint uStack_19dc;
  wchar_t *pwStack_19d8;
  float *pfStack_19d4;
  undefined4 uStack_19d0;
  wchar_t *pwStack_19cc;
  FMatrix *pFStack_19c8;
  undefined4 uStack_19c4;
  FMatrix *pFStack_19c0;
  undefined4 auStack_19bc [15];
  undefined4 uStack_1980;
  FMatrix *pFStack_197c;
  undefined4 auStack_1978 [15];
  undefined4 uStack_193c;
  FMatrix *pFStack_1938;
  undefined4 auStack_1934 [15];
  undefined4 uStack_18f8;
  FMatrix *pFStack_18f4;
  undefined4 auStack_18f0 [15];
  undefined4 uStack_18b4;
  FMatrix *pFStack_18b0;
  undefined4 auStack_18ac [9];
  undefined4 uStack_1888;
  wchar_t *pwStack_1884;
  undefined4 uStack_1880;
  wchar_t *pwStack_1874;
  FMatrix local_182c [64];
  undefined4 local_17ec [32];
  FMatrix local_176c [320];
  FMatrix local_162c [64];
  undefined4 local_15ec [16];
  FMatrix local_15ac [128];
  undefined4 local_152c [16];
  undefined4 local_14ec [16];
  undefined4 local_14ac [16];
  FMatrix local_146c [128];
  FMatrix local_13ec [128];
  undefined4 local_136c [64];
  FMatrix local_126c [64];
  FMatrix local_122c [64];
  undefined4 local_11ec [16];
  FMatrix local_11ac [128];
  FMatrix local_112c [64];
  undefined4 local_10ec [16];
  undefined4 local_10ac [16];
  FMatrix local_106c [64];
  undefined4 local_102c [16];
  undefined4 local_fec [16];
  undefined4 local_fac [16];
  FMatrix local_f6c [128];
  undefined4 local_eec [32];
  undefined4 local_e6c [80];
  FMatrix local_d2c [64];
  FMatrix local_cec [64];
  FMatrix local_cac [64];
  FMatrix local_c6c [64];
  FMatrix local_c2c [64];
  undefined4 local_bec [16];
  undefined4 local_bac [16];
  undefined4 local_b6c [16];
  undefined4 local_b2c [32];
  undefined4 local_aac [80];
  FMatrix local_96c [128];
  FMatrix local_8ec [128];
  FMatrix local_86c [128];
  undefined4 local_7ec [16];
  FMatrix local_7ac [64];
  undefined4 local_76c [16];
  FMatrix local_72c [128];
  FMatrix local_6ac [64];
  FMatrix local_66c [64];
  FMatrix local_62c [64];
  FMatrix local_5ec [64];
  FMatrix local_5ac [64];
  FMatrix local_56c [64];
  FMatrix local_52c [64];
  FMatrix local_4ec [64];
  FMatrix local_4ac [64];
  FMatrix local_46c [64];
  FMatrix local_42c [64];
  FMatrix local_3ec [64];
  FMatrix local_3ac [64];
  FMatrix local_36c [64];
  FMatrix local_32c [64];
  FMatrix local_2ec [64];
  FMatrix local_2ac [64];
  FMatrix local_26c [64];
  FMatrix local_22c [64];
  FMatrix local_1ec [64];
  FMatrix local_1ac [64];
  FMatrix local_16c [64];
  FMatrix local_12c [64];
  FSphere local_ec [20];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  int local_c8 [9];
  float local_a4;
  wchar_t *local_a0;
  int *local_9c;
  float local_98;
  wchar_t *local_94;
  int *local_90;
  float local_8c;
  wchar_t *local_88;
  int *local_84;
  float local_80;
  wchar_t *local_7c;
  int *local_78;
  undefined1 *local_74;
  void *local_70;
  undefined1 *puStack_6c;
  int local_68;
  float local_64;
  wchar_t *local_60;
  int *local_5c;
  int local_58;
  int local_54;
  float local_50;
  wchar_t *local_4c;
  int *local_48;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  byte local_13;
  byte local_12;
  byte local_11;
  undefined4 *local_10;
  wchar_t *local_c;
  undefined4 local_8;
  
  puStack_6c = &LAB_108211a5;
  local_70 = ExceptionList;
  local_78 = (int *)0x105e7328;
  local_74 = &stack0xffffe7c8;
  local_68 = 0;
  ExceptionList = &local_70;
  UParticleEmitter::RenderParticles(in_ECX,param_1,param_2,(TList<FDynamicLight*> *)param_3,param_4)
  ;
  if ((*(int *)(in_ECX + 0x4d0) == 0) || (in_ECX[0x45c] == (UParticleEmitter)0x0)) {
    ExceptionList = local_70;
    return 0;
  }
  if ((((byte)in_ECX[0x4d4] & 1) != 0) &&
     (iVar3 = UViewport::IsWire(*(UViewport **)(param_2 + 4)), iVar3 == 0)) {
    iVar3 = UViewport::IsLit(*(UViewport **)(param_2 + 4));
    local_8 = (int *)0x1;
    if (iVar3 != 0) goto LAB_105e73a9;
  }
  local_8 = (int *)0x0;
LAB_105e73a9:
  FSphere::FSphere(local_ec,(FVector *)(in_ECX + 0x444),2);
  iVar3 = *(int *)param_4;
  local_c = (wchar_t *)&stack0xffffe7b8;
  FSphere::FSphere((FSphere *)&stack0xffffe7b8,local_ec);
  (**(code **)(iVar3 + 0x24))();
  if (local_8 != (int *)0x0) {
    *(uint *)(*(int *)(in_ECX + 0x420) + 0x2e4) =
         *(uint *)(*(int *)(in_ECX + 0x420) + 0x2e4) & 0xfffffffe;
    if (((*(byte *)(*(int *)(in_ECX + 0x420) + 0x13c) & 1) == 0) ||
       (*(int *)(*(int *)(*(int *)(param_2 + 0x1cc) + 0x74) + 0x6c) == 0)) {
      (**(code **)(*(int *)param_4 + 0x20))();
    }
    else {
      local_13 = 0;
      local_11 = 0;
      local_12 = 0;
      piVar2 = *(int **)(*(int *)(*(int *)(param_2 + 0x1cc) + 0x74) + 0x6c);
      local_28 = (float)*(double *)(piVar2 + 0x4d);
      _pwStack_1874 = (double)CONCAT44(0x105e746f,pwStack_1874);
      (**(code **)(*piVar2 + 0xcc))();
      local_8 = (int *)CONCAT13(0xff,CONCAT12(local_13 >> 1,CONCAT11(local_11 >> 1,local_12 >> 1)));
      _pwStack_1874 = (double)CONCAT44(local_8,0x105e7498);
      (**(code **)(*(int *)param_4 + 0x20))();
    }
    local_3c = 0;
    for (; (TList<FDynamicLight*> *)param_3 != (TList<FDynamicLight*> *)0x0;
        param_3 = *(wchar_t **)((int)param_3 + 4)) {
      _pwStack_1874 = (double)CONCAT44(0x105e74d3,pwStack_1874);
      (**(code **)(*(int *)param_4 + 0x28))();
      local_3c = local_3c + 1;
    }
  }
  iVar3 = *(int *)(in_ECX + 0x4d0);
  local_c8[0] = iVar3 + 0x6c;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[8] = 0;
  iVar11 = 1;
  for (iVar4 = 0; iVar4 < *(int *)(iVar3 + 0xc4); iVar4 = iVar4 + 1) {
    local_c8[iVar11] = iVar4 * 0x20 + *(int *)(iVar3 + 0xc0);
    iVar11 = iVar11 + 1;
  }
  local_58 = iVar11;
  local_54 = iVar4;
  if (*(int *)GL2Shader_exref == 0) {
    _pwStack_1874 = (double)CONCAT44(0x105e7556,pwStack_1874);
    (**(code **)(*(int *)param_4 + 0xa4))();
  }
  else {
    (**(code **)(*(int *)param_4 + 0x50))();
  }
  _pwStack_1874 = (double)CONCAT44(0x105e7570,pwStack_1874);
  (**(code **)(*(int *)param_4 + 0xac))();
  local_40 = 0;
  local_24 = 0;
  do {
    local_c = *(wchar_t **)(in_ECX + 0x4d0);
    if (*(int *)(local_c + 0x32) <= local_24) {
      ExceptionList = local_70;
      return local_40;
    }
    iVar3 = local_24 * 0x14;
    local_28 = (float)(*(int *)(local_c + 0x30) + iVar3);
    local_8 = *(int **)(in_ECX + 0x420);
    _pwStack_1874 = (double)CONCAT44(local_24,0x105e75bd);
    param_3 = (wchar_t *)(**(code **)(*local_8 + 0xac))();
    pwVar10 = extraout_ECX;
    if ((param_3 == (wchar_t *)0x0) &&
       (param_3 = *(wchar_t **)(iVar3 + *(int *)(local_c + 0x9e)), pwVar10 = local_c,
       param_3 == (wchar_t *)0x0)) {
      _pwStack_1874 = (double)CONCAT44(0x105e75e2,pwStack_1874);
      this_00 = UClass::GetDefaultObject(&UMaterial::PrivateStaticClass);
      if (this_00 == (UObject *)0x0) {
        param_3 = L"NULL";
LAB_105e760e:
        _pwStack_1874 = (double)CONCAT44(0x105e7619,pwStack_1874);
        puVar5 = UObject::GetName((UObject *)&UMaterial::PrivateStaticClass);
        _pwStack_1874 = (double)CONCAT44(puVar5,param_3);
        uStack_1880 = 0x105e7632;
        FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
        pwVar10 = extraout_ECX_01;
      }
      else {
        _pwStack_1874 = 7.485138535371737e-228;
        iVar3 = UObject::IsA(this_00,&UMaterial::PrivateStaticClass);
        pwVar10 = extraout_ECX_00;
        if (iVar3 == 0) {
          _pwStack_1874 = 1.3568329675808e-315;
          param_3 = (wchar_t *)UObject::GetFullName(this_00,(ushort *)0x0);
          goto LAB_105e760e;
        }
      }
      param_3 = *(wchar_t **)(this_00 + 0x38);
      if (param_3 != (wchar_t *)0x0) goto LAB_105e763f;
LAB_105e766d:
      pwVar6 = param_3;
    }
    else {
LAB_105e763f:
      if ((*(byte *)(local_8 + 0xe8) & 1) == 0) goto LAB_105e766d;
      _pwStack_1874 = (double)CONCAT44(0x105e7657,pwStack_1874);
      pwVar6 = (wchar_t *)(**(code **)(*local_8 + 0x124))();
      pwVar10 = extraout_ECX_02;
      if ((pwVar6 == (wchar_t *)0x0) ||
         (*(wchar_t **)(pwVar6 + 700) = param_3, pwVar10 = param_3, param_3 == (wchar_t *)0x0))
      goto LAB_105e766d;
    }
    param_3 = pwVar6;
    puVar8 = *(undefined4 **)(in_ECX + 0x42c);
    local_10 = puVar8;
    if (*(short *)((int)local_28 + 0x10) != 0) {
      if (((byte)in_ECX[0x4d4] & 1) == 0) {
        *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x578) = (uint)(byte)in_ECX[0x344];
        if (*(int *)(*(int *)(*(int *)(param_2 + 4) + 0x3c) + 0x5b8) == 7) {
          *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x588) = 0;
        }
        else {
          _pwStack_1874 = (double)CONCAT44(param_3,0x105e76e3);
          uVar7 = thunk_FUN_105e70e0();
          *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x588) = uVar7;
        }
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x57c) = 0;
        *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x580) =
             *(uint *)(in_ECX + 0x4d4) >> 1 & 1;
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x584) = 1;
        *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x598) =
             *(uint *)(in_ECX + 0x1f8) & 1;
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x59c) =
             *(undefined4 *)(in_ECX + 500);
        puVar1 = (uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5ac);
        *puVar1 = *puVar1 ^ (*(uint *)(in_ECX + 0x1f8) >> 1 ^
                            *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5ac)) & 1;
        *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5a0) =
             *(uint *)(in_ECX + 0x1f8) >> 2 & 1;
        *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5a4) =
             *(uint *)(in_ECX + 0x1f8) >> 3 & 1;
        _pwStack_1874 = (double)CONCAT44(0x105e77de,pwStack_1874);
        iVar3 = UViewport::IsWire(*(UViewport **)(param_2 + 4));
        *(int *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5a8) = iVar3;
        _pwStack_1874 = (double)*(float *)(in_ECX + 0x4c8);
        (**(code **)(*(int *)param_4 + 0x78))();
        (**(code **)(*(int *)param_4 + 0x7c))();
        if (*(int *)GL2Shader_exref == 0) {
          uStack_1880 = 0;
          pwStack_1884 = *(wchar_t **)(*(int *)(in_ECX + 0x420) + 0x46c);
          uStack_1888 = 0x105e7866;
          (**(code **)(*(int *)param_4 + 0x44))();
          uStack_1888 = 0x105e7872;
          (**(code **)(*(int *)param_4 + 0x80))();
        }
        else {
          (**(code **)(*(int *)param_4 + 0x54))();
          uStack_1880 = 0x105e7839;
          (**(code **)(*(int *)param_4 + 0x4c))();
          uStack_1880 = 0x105e7845;
          (**(code **)(*(int *)param_4 + 0x80))();
        }
      }
      else {
        if (DAT_10c78c44 == (wchar_t *)0x0) {
          local_c = (wchar_t *)&pwStack_1874;
          _pwStack_1874 = (double)ZEXT48(pwVar10);
          FName::FName((FName *)&pwStack_1874,0);
          uStack_1880 = 0x105e789c;
          DAT_10c78c44 = (wchar_t *)thunk_FUN_105e7110();
          _pwStack_1874 = 7.76579146441785e-228;
          thunk_FUN_10530420();
        }
        _pwStack_1874 = (double)CONCAT44(0x105e78bf,pwStack_1874);
        iVar3 = UViewport::IsWire(*(UViewport **)(param_2 + 4));
        if (iVar3 == 0) {
          if (((byte)in_ECX[0x4d4] & 4) == 0) {
            _pwStack_1874 = (double)*(float *)(in_ECX + 0x4c8);
            (**(code **)(*(int *)param_4 + 0x78))();
            (**(code **)(*(int *)param_4 + 0x7c))();
            if (*(int *)GL2Shader_exref == 0) goto LAB_105e79b6;
            (**(code **)(*(int *)param_4 + 0x4c))();
          }
          else {
            *(wchar_t **)(DAT_10c78c44 + 700) = param_3;
            _pwStack_1874 = (double)*(float *)(in_ECX + 0x4c8);
            (**(code **)(*(int *)param_4 + 0x78))();
            (**(code **)(*(int *)param_4 + 0x7c))();
            param_3 = DAT_10c78c44;
            if (*(int *)GL2Shader_exref == 0) {
LAB_105e79b6:
              uStack_1880 = 0;
              uStack_1888 = 0x105e79c6;
              pwStack_1884 = param_3;
              (**(code **)(*(int *)param_4 + 0x44))();
            }
            else {
              (**(code **)(*(int *)param_4 + 0x4c))();
            }
          }
          (**(code **)(*(int *)param_4 + 0x80))();
        }
        else {
          if (DAT_10c78c40 == (UClass *)0x0) {
            _pwStack_1874 = (double)(ulonglong)extraout_ECX_03;
            FName::FName((FName *)&pwStack_1874,0);
            uStack_1880 = 0x105e78e8;
            DAT_10c78c40 = (UClass *)thunk_FUN_1053d370();
            _pwStack_1874 = 7.765771335828035e-228;
            thunk_FUN_10530420();
            *(uint *)(DAT_10c78c40 + 0x59c) = *(uint *)(DAT_10c78c40 + 0x59c) | 2;
          }
          _pwStack_1874 = 0.0;
          uStack_1880 = 0x105e7921;
          (**(code **)(*(int *)param_4 + 0x44))();
        }
      }
      local_38 = 0;
      while (local_38 < *(int *)(in_ECX + 0x43c)) {
        if ((*(byte *)(puVar8 + 0x2f) & 1) == 0) {
          puVar8 = puVar8 + 0x38;
          local_38 = local_38 + 1;
          local_10 = puVar8;
        }
        else {
          local_40 = local_40 + 1;
          local_68 = CONCAT31(local_68._1_3_,1);
          local_20 = *puVar8;
          local_1c = puVar8[1];
          local_18 = puVar8[2];
          _pwStack_1874 = (double)CONCAT44(0x105e7a29,pwStack_1874);
          FRotator::FRotator((FRotator *)&local_34);
          uVar12 = *(uint *)(in_ECX + 0x244) & 1;
          if (uVar12 != 0) {
            _pwStack_1874 = (double)CONCAT44(0x105e7a45,pwStack_1874);
            local_30 = FUN_107a6660();
            _pwStack_1874 = (double)CONCAT44(0x105e7a59,pwStack_1874);
            local_34 = FUN_107a6660();
            _pwStack_1874 = (double)CONCAT44(0x105e7a6d,pwStack_1874);
            local_2c = FUN_107a6660();
          }
          if (in_ECX[0x108] == (UParticleEmitter)0x1) {
            _pwStack_1874 = *(double *)(*(int *)(in_ECX + 0x420) + 0x1c0);
            if (uVar12 == 0) {
              puVar8 = (undefined4 *)thunk_FUN_10326fb0();
              local_68._0_1_ = 0x12;
              pFVar9 = local_3ec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = *(double *)(*(int *)(in_ECX + 0x420) + 0x1cc);
              puVar8 = (undefined4 *)thunk_FUN_105263f0();
              local_68._0_1_ = 0x13;
              pFVar9 = local_5ec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = (double)CONCAT44(local_18,local_1c);
              puVar8 = (undefined4 *)thunk_FUN_10326fb0();
              local_68._0_1_ = 0x14;
              pFVar9 = local_36c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = *(double *)(local_10 + 0x1c);
              puVar8 = (undefined4 *)thunk_FUN_103274a0();
              local_68 = CONCAT31(local_68._1_3_,0x15);
              pFVar9 = local_4ec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              pFVar9 = local_3ec;
              puVar8 = local_bec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68 = CONCAT31(local_68._1_3_,0x16);
              pFVar9 = local_5ec;
              puVar8 = local_11ec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 0x17;
              pFVar9 = local_36c;
              puVar8 = local_b6c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68 = CONCAT31(local_68._1_3_,0x18);
              pFVar9 = local_4ec;
              puVar8 = local_14ec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 0x19;
              iVar3 = *(int *)(in_ECX + 0x420);
              local_a4 = -*(float *)(iVar3 + 0x28c);
              local_a0 = (wchar_t *)-*(float *)(iVar3 + 0x290);
              local_9c = (int *)-*(float *)(iVar3 + 0x294);
              _pwStack_1874 = (double)CONCAT44(local_9c,local_a0);
              local_c = local_a0;
              local_8 = local_9c;
              pFVar9 = (FMatrix *)thunk_FUN_10326fb0();
              local_68._0_1_ = 0x1a;
              puVar8 = local_14ec;
              puVar13 = auStack_18ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_18b0 = local_cec;
              uStack_18b4 = 0x105e7fd0;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0x1b;
              puVar8 = local_b6c;
              puVar13 = auStack_18f0;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_18f4 = local_126c;
              uStack_18f8 = 0x105e7ff5;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0x1c;
              puVar8 = local_11ec;
              puVar13 = auStack_1934;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_1938 = local_c6c;
              uStack_193c = 0x105e801a;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0x1d;
              puVar8 = local_bec;
              puVar13 = auStack_1978;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_197c = local_176c;
              uStack_1980 = 0x105e803f;
              puVar8 = (undefined4 *)FMatrix::operator*(pFVar9);
              local_68 = (uint)local_68._1_3_ << 8;
              pFVar9 = local_12c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              local_68._0_1_ = 0x1d;
              uStack_19c4 = 0x105e8062;
              FMatrix::~FMatrix(local_176c);
              local_68._0_1_ = 0x1c;
              uStack_19c4 = 0x105e8072;
              FMatrix::~FMatrix(local_c6c);
              local_68._0_1_ = 0x1b;
              uStack_19c4 = 0x105e8082;
              FMatrix::~FMatrix(local_126c);
              local_68._0_1_ = 0x1a;
              uStack_19c4 = 0x105e8092;
              FMatrix::~FMatrix(local_cec);
              local_68._0_1_ = 0x19;
              uStack_19c4 = 0x105e80a1;
              thunk_FUN_103284c0();
              local_68._0_1_ = 0x18;
              uStack_19c4 = 0x105e80b1;
              FMatrix::~FMatrix(local_4ec);
              local_68._0_1_ = 0x17;
              uStack_19c4 = 0x105e80c1;
              FMatrix::~FMatrix(local_36c);
              local_68._0_1_ = 0x16;
              uStack_19c4 = 0x105e80d1;
              FMatrix::~FMatrix(local_5ec);
              local_68._0_1_ = 0x15;
              uStack_19c4 = 0x105e80e1;
              FMatrix::~FMatrix(local_3ec);
              local_68._0_1_ = 0x14;
              uStack_19c4 = 0x105e80f0;
              thunk_FUN_10328560();
              local_68._0_1_ = 0x13;
              uStack_19c4 = 0x105e80ff;
              thunk_FUN_103284c0();
              local_68._0_1_ = 0x12;
              uStack_19c4 = 0x105e810e;
              thunk_FUN_10526040();
              local_68 = CONCAT31(local_68._1_3_,1);
            }
            else {
              puVar8 = (undefined4 *)thunk_FUN_10326fb0();
              local_68._0_1_ = 2;
              pFVar9 = local_2ec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = *(double *)(*(int *)(in_ECX + 0x420) + 0x1cc);
              puVar8 = (undefined4 *)thunk_FUN_105263f0();
              local_68._0_1_ = 3;
              pFVar9 = local_66c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = (double)CONCAT44(local_18,local_1c);
              puVar8 = (undefined4 *)thunk_FUN_10326fb0();
              local_68._0_1_ = 4;
              pFVar9 = local_26c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = (double)CONCAT44(local_2c,local_30);
              puVar8 = (undefined4 *)thunk_FUN_105263f0();
              local_68._0_1_ = 5;
              pFVar9 = local_46c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = *(double *)(local_10 + 0x1c);
              puVar8 = (undefined4 *)thunk_FUN_103274a0();
              local_68._0_1_ = 6;
              pFVar9 = local_56c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              pFVar9 = local_2ec;
              puVar8 = local_17ec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 7;
              pFVar9 = local_66c;
              puVar8 = local_7ec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 8;
              pFVar9 = local_26c;
              puVar8 = local_fec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 9;
              pFVar9 = local_46c;
              puVar8 = local_76c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68 = CONCAT31(local_68._1_3_,10);
              pFVar9 = local_56c;
              puVar8 = local_10ec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 0xb;
              iVar3 = *(int *)(in_ECX + 0x420);
              local_80 = -*(float *)(iVar3 + 0x28c);
              local_7c = (wchar_t *)-*(float *)(iVar3 + 0x290);
              local_78 = (int *)-*(float *)(iVar3 + 0x294);
              _pwStack_1874 = (double)CONCAT44(local_78,local_7c);
              local_c = local_7c;
              local_8 = local_78;
              pFVar9 = (FMatrix *)thunk_FUN_10326fb0();
              local_68._0_1_ = 0xc;
              puVar8 = local_10ec;
              puVar13 = auStack_18ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_18b0 = local_96c;
              uStack_18b4 = 0x105e7c90;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0xd;
              puVar8 = local_76c;
              puVar13 = auStack_18f0;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_18f4 = local_146c;
              uStack_18f8 = 0x105e7cb5;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0xe;
              puVar8 = local_fec;
              puVar13 = auStack_1934;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_1938 = local_8ec;
              uStack_193c = 0x105e7cda;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0xf;
              puVar8 = local_7ec;
              puVar13 = auStack_1978;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_197c = local_106c;
              uStack_1980 = 0x105e7cff;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0x10;
              puVar8 = local_17ec;
              puVar13 = auStack_19bc;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_19c0 = local_86c;
              uStack_19c4 = 0x105e7d24;
              puVar8 = (undefined4 *)FMatrix::operator*(pFVar9);
              local_68 = (uint)local_68._1_3_ << 8;
              pFVar9 = local_12c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              local_68._0_1_ = 0x10;
              uStack_19c4 = 0x105e7d47;
              FMatrix::~FMatrix(local_86c);
              local_68._0_1_ = 0xf;
              uStack_19c4 = 0x105e7d57;
              FMatrix::~FMatrix(local_106c);
              local_68._0_1_ = 0xe;
              uStack_19c4 = 0x105e7d67;
              FMatrix::~FMatrix(local_8ec);
              local_68._0_1_ = 0xd;
              uStack_19c4 = 0x105e7d77;
              FMatrix::~FMatrix(local_146c);
              local_68._0_1_ = 0xc;
              uStack_19c4 = 0x105e7d87;
              FMatrix::~FMatrix(local_96c);
              local_68._0_1_ = 0xb;
              uStack_19c4 = 0x105e7d96;
              thunk_FUN_103284c0();
              local_68._0_1_ = 10;
              uStack_19c4 = 0x105e7da6;
              FMatrix::~FMatrix(local_56c);
              local_68._0_1_ = 9;
              uStack_19c4 = 0x105e7db6;
              FMatrix::~FMatrix(local_46c);
              local_68._0_1_ = 8;
              uStack_19c4 = 0x105e7dc6;
              FMatrix::~FMatrix(local_26c);
              local_68._0_1_ = 7;
              uStack_19c4 = 0x105e7dd6;
              FMatrix::~FMatrix(local_66c);
              local_68._0_1_ = 6;
              uStack_19c4 = 0x105e7de6;
              FMatrix::~FMatrix(local_2ec);
              local_68._0_1_ = 5;
              uStack_19c4 = 0x105e7df5;
              thunk_FUN_10328560();
              local_68._0_1_ = 4;
              uStack_19c4 = 0x105e7e04;
              thunk_FUN_10526040();
              local_68._0_1_ = 3;
              uStack_19c4 = 0x105e7e13;
              thunk_FUN_103284c0();
              local_68._0_1_ = 2;
              uStack_19c4 = 0x105e7e22;
              thunk_FUN_10526040();
              local_68 = CONCAT31(local_68._1_3_,1);
            }
          }
          else if (in_ECX[0x108] == (UParticleEmitter)0x4) {
            _pwStack_1874 = (double)CONCAT44(local_18,local_1c);
            if (uVar12 == 0) {
              puVar8 = (undefined4 *)thunk_FUN_10326fb0();
              local_68._0_1_ = 0x2c;
              pFVar9 = local_42c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = *(double *)(local_10 + 0x33);
              puVar8 = (undefined4 *)thunk_FUN_105263f0();
              local_68._0_1_ = 0x2d;
              pFVar9 = local_3ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = *(double *)(local_10 + 0x1c);
              puVar8 = (undefined4 *)thunk_FUN_103274a0();
              local_68 = CONCAT31(local_68._1_3_,0x2e);
              pFVar9 = local_32c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              pFVar9 = local_42c;
              puVar8 = local_bac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 0x2f;
              pFVar9 = local_3ac;
              puVar8 = local_b2c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 0x30;
              pFVar9 = local_32c;
              puVar8 = local_aac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 0x31;
              iVar3 = *(int *)(in_ECX + 0x420);
              local_64 = -*(float *)(iVar3 + 0x28c);
              local_60 = (wchar_t *)-*(float *)(iVar3 + 0x290);
              local_5c = (int *)-*(float *)(iVar3 + 0x294);
              _pwStack_1874 = (double)CONCAT44(local_5c,local_60);
              local_c = local_60;
              local_8 = local_5c;
              pFVar9 = (FMatrix *)thunk_FUN_10326fb0();
              local_68._0_1_ = 0x32;
              puVar8 = local_aac;
              puVar13 = auStack_18ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_18b0 = local_d2c;
              uStack_18b4 = 0x105e857a;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0x33;
              puVar8 = local_b2c;
              puVar13 = auStack_18f0;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_18f4 = local_cac;
              uStack_18f8 = 0x105e859f;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0x34;
              puVar8 = local_bac;
              puVar13 = auStack_1934;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_1938 = local_c2c;
              uStack_193c = 0x105e85c4;
              puVar8 = (undefined4 *)FMatrix::operator*(pFVar9);
              local_68 = (uint)local_68._1_3_ << 8;
              pFVar9 = local_12c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              local_68._0_1_ = 0x34;
              uStack_19c4 = 0x105e85e7;
              FMatrix::~FMatrix(local_c2c);
              local_68._0_1_ = 0x33;
              uStack_19c4 = 0x105e85f7;
              FMatrix::~FMatrix(local_cac);
              local_68._0_1_ = 0x32;
              uStack_19c4 = 0x105e8607;
              FMatrix::~FMatrix(local_d2c);
              local_68._0_1_ = 0x31;
              uStack_19c4 = 0x105e8616;
              thunk_FUN_103284c0();
              local_68._0_1_ = 0x30;
              uStack_19c4 = 0x105e8626;
              FMatrix::~FMatrix(local_32c);
              local_68._0_1_ = 0x2f;
              uStack_19c4 = 0x105e8636;
              FMatrix::~FMatrix(local_3ac);
              local_68._0_1_ = 0x2e;
              uStack_19c4 = 0x105e8646;
              FMatrix::~FMatrix(local_42c);
              local_68._0_1_ = 0x2d;
              uStack_19c4 = 0x105e8655;
              thunk_FUN_10328560();
              local_68._0_1_ = 0x2c;
              uStack_19c4 = 0x105e8664;
              thunk_FUN_10526040();
              local_68 = CONCAT31(local_68._1_3_,1);
            }
            else {
              puVar8 = (undefined4 *)thunk_FUN_10326fb0();
              local_68._0_1_ = 0x1f;
              pFVar9 = local_2ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = (double)CONCAT44(local_2c,local_30);
              puVar8 = (undefined4 *)thunk_FUN_105263f0();
              local_68._0_1_ = 0x20;
              pFVar9 = local_22c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = *(double *)(local_10 + 0x33);
              puVar8 = (undefined4 *)thunk_FUN_105263f0();
              local_68._0_1_ = 0x21;
              pFVar9 = local_1ec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = *(double *)(local_10 + 0x1c);
              puVar8 = (undefined4 *)thunk_FUN_103274a0();
              local_68._0_1_ = 0x22;
              pFVar9 = local_1ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              pFVar9 = local_2ac;
              puVar8 = local_15ec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 0x23;
              pFVar9 = local_22c;
              puVar8 = local_eec;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68 = CONCAT31(local_68._1_3_,0x24);
              pFVar9 = local_1ec;
              puVar8 = local_136c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 0x25;
              pFVar9 = local_1ac;
              puVar8 = local_e6c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 0x26;
              iVar3 = *(int *)(in_ECX + 0x420);
              local_50 = -*(float *)(iVar3 + 0x28c);
              local_4c = (wchar_t *)-*(float *)(iVar3 + 0x290);
              local_48 = (int *)-*(float *)(iVar3 + 0x294);
              _pwStack_1874 = (double)CONCAT44(local_48,local_4c);
              local_c = local_4c;
              local_8 = local_48;
              pFVar9 = (FMatrix *)thunk_FUN_10326fb0();
              local_68._0_1_ = 0x27;
              puVar8 = local_e6c;
              puVar13 = auStack_18ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_18b0 = local_7ac;
              uStack_18b4 = 0x105e82dc;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0x28;
              puVar8 = local_136c;
              puVar13 = auStack_18f0;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_18f4 = local_72c;
              uStack_18f8 = 0x105e8301;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0x29;
              puVar8 = local_eec;
              puVar13 = auStack_1934;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_1938 = local_13ec;
              uStack_193c = 0x105e8326;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0x2a;
              puVar8 = local_15ec;
              puVar13 = auStack_1978;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_197c = local_f6c;
              uStack_1980 = 0x105e834b;
              puVar8 = (undefined4 *)FMatrix::operator*(pFVar9);
              local_68 = (uint)local_68._1_3_ << 8;
              pFVar9 = local_12c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              local_68._0_1_ = 0x2a;
              uStack_19c4 = 0x105e836e;
              FMatrix::~FMatrix(local_f6c);
              local_68._0_1_ = 0x29;
              uStack_19c4 = 0x105e837e;
              FMatrix::~FMatrix(local_13ec);
              local_68._0_1_ = 0x28;
              uStack_19c4 = 0x105e838e;
              FMatrix::~FMatrix(local_72c);
              local_68._0_1_ = 0x27;
              uStack_19c4 = 0x105e839e;
              FMatrix::~FMatrix(local_7ac);
              local_68._0_1_ = 0x26;
              uStack_19c4 = 0x105e83ad;
              thunk_FUN_103284c0();
              local_68._0_1_ = 0x25;
              uStack_19c4 = 0x105e83bd;
              FMatrix::~FMatrix(local_1ac);
              local_68._0_1_ = 0x24;
              uStack_19c4 = 0x105e83cd;
              FMatrix::~FMatrix(local_1ec);
              local_68._0_1_ = 0x23;
              uStack_19c4 = 0x105e83dd;
              FMatrix::~FMatrix(local_22c);
              local_68._0_1_ = 0x22;
              uStack_19c4 = 0x105e83ed;
              FMatrix::~FMatrix(local_2ac);
              local_68._0_1_ = 0x21;
              uStack_19c4 = 0x105e83fc;
              thunk_FUN_10328560();
              local_68._0_1_ = 0x20;
              uStack_19c4 = 0x105e840b;
              thunk_FUN_10526040();
              local_68._0_1_ = 0x1f;
              uStack_19c4 = 0x105e841a;
              thunk_FUN_10526040();
              local_68 = CONCAT31(local_68._1_3_,1);
            }
          }
          else {
            _pwStack_1874 = (double)CONCAT44(local_18,local_1c);
            if (uVar12 == 0) {
              puVar8 = (undefined4 *)thunk_FUN_10326fb0();
              local_68._0_1_ = 0x40;
              pFVar9 = local_6ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = *(double *)(local_10 + 0x1c);
              puVar8 = (undefined4 *)thunk_FUN_103274a0();
              local_68._0_1_ = 0x41;
              pFVar9 = local_62c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              pFVar9 = local_6ac;
              puVar8 = local_152c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68 = CONCAT31(local_68._1_3_,0x42);
              pFVar9 = local_62c;
              puVar8 = local_14ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 0x43;
              iVar3 = *(int *)(in_ECX + 0x420);
              local_98 = -*(float *)(iVar3 + 0x28c);
              local_94 = (wchar_t *)-*(float *)(iVar3 + 0x290);
              local_90 = (int *)-*(float *)(iVar3 + 0x294);
              _pwStack_1874 = (double)CONCAT44(local_90,local_94);
              local_c = local_94;
              local_8 = local_90;
              pFVar9 = (FMatrix *)thunk_FUN_10326fb0();
              local_68._0_1_ = 0x44;
              puVar8 = local_14ac;
              puVar13 = auStack_18ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_18b0 = local_162c;
              uStack_18b4 = 0x105e89ce;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0x45;
              puVar8 = local_152c;
              puVar13 = auStack_18f0;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_18f4 = local_15ac;
              uStack_18f8 = 0x105e89f3;
              puVar8 = (undefined4 *)FMatrix::operator*(pFVar9);
              local_68 = (uint)local_68._1_3_ << 8;
              pFVar9 = local_12c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              local_68._0_1_ = 0x45;
              uStack_19c4 = 0x105e8a16;
              FMatrix::~FMatrix(local_15ac);
              local_68._0_1_ = 0x44;
              uStack_19c4 = 0x105e8a26;
              FMatrix::~FMatrix(local_162c);
              local_68._0_1_ = 0x43;
              uStack_19c4 = 0x105e8a35;
              thunk_FUN_103284c0();
              local_68._0_1_ = 0x42;
              uStack_19c4 = 0x105e8a45;
              FMatrix::~FMatrix(local_62c);
              local_68._0_1_ = 0x41;
              uStack_19c4 = 0x105e8a55;
              FMatrix::~FMatrix(local_6ac);
              local_68._0_1_ = 0x40;
              uStack_19c4 = 0x105e8a64;
              thunk_FUN_10328560();
              local_68 = CONCAT31(local_68._1_3_,1);
            }
            else {
              puVar8 = (undefined4 *)thunk_FUN_10326fb0();
              local_68._0_1_ = 0x36;
              pFVar9 = local_5ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = (double)CONCAT44(local_2c,local_30);
              puVar8 = (undefined4 *)thunk_FUN_105263f0();
              local_68._0_1_ = 0x37;
              pFVar9 = local_52c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              _pwStack_1874 = *(double *)(local_10 + 0x1c);
              puVar8 = (undefined4 *)thunk_FUN_103274a0();
              local_68._0_1_ = 0x38;
              pFVar9 = local_4ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              pFVar9 = local_5ac;
              puVar8 = local_10ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 0x39;
              pFVar9 = local_52c;
              puVar8 = local_102c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 0x3a;
              pFVar9 = local_4ac;
              puVar8 = local_fac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pFVar9;
                pFVar9 = pFVar9 + 4;
                puVar8 = puVar8 + 1;
              }
              local_68._0_1_ = 0x3b;
              iVar3 = *(int *)(in_ECX + 0x420);
              local_8c = -*(float *)(iVar3 + 0x28c);
              local_88 = (wchar_t *)-*(float *)(iVar3 + 0x290);
              local_84 = (int *)-*(float *)(iVar3 + 0x294);
              _pwStack_1874 = (double)CONCAT44(local_84,local_88);
              local_c = local_88;
              local_8 = local_84;
              pFVar9 = (FMatrix *)thunk_FUN_10326fb0();
              local_68._0_1_ = 0x3c;
              puVar8 = local_fac;
              puVar13 = auStack_18ac;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_18b0 = local_122c;
              uStack_18b4 = 0x105e87d6;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0x3d;
              puVar8 = local_102c;
              puVar13 = auStack_18f0;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_18f4 = local_11ac;
              uStack_18f8 = 0x105e87fb;
              pFVar9 = (FMatrix *)FMatrix::operator*(pFVar9);
              local_68._0_1_ = 0x3e;
              puVar8 = local_10ac;
              puVar13 = auStack_1934;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
              }
              pFStack_1938 = local_112c;
              uStack_193c = 0x105e8820;
              puVar8 = (undefined4 *)FMatrix::operator*(pFVar9);
              local_68 = (uint)local_68._1_3_ << 8;
              pFVar9 = local_12c;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pFVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                pFVar9 = pFVar9 + 4;
              }
              local_68._0_1_ = 0x3e;
              uStack_19c4 = 0x105e8843;
              FMatrix::~FMatrix(local_112c);
              local_68._0_1_ = 0x3d;
              uStack_19c4 = 0x105e8853;
              FMatrix::~FMatrix(local_11ac);
              local_68._0_1_ = 0x3c;
              uStack_19c4 = 0x105e8863;
              FMatrix::~FMatrix(local_122c);
              local_68._0_1_ = 0x3b;
              uStack_19c4 = 0x105e8872;
              thunk_FUN_103284c0();
              local_68._0_1_ = 0x3a;
              uStack_19c4 = 0x105e8882;
              FMatrix::~FMatrix(local_4ac);
              local_68._0_1_ = 0x39;
              uStack_19c4 = 0x105e8892;
              FMatrix::~FMatrix(local_52c);
              local_68._0_1_ = 0x38;
              uStack_19c4 = 0x105e88a2;
              FMatrix::~FMatrix(local_5ac);
              local_68._0_1_ = 0x37;
              uStack_19c4 = 0x105e88b1;
              thunk_FUN_10328560();
              local_68._0_1_ = 0x36;
              uStack_19c4 = 0x105e88c0;
              thunk_FUN_10526040();
              local_68 = CONCAT31(local_68._1_3_,1);
            }
          }
          uStack_19c4 = 0x105e8a73;
          thunk_FUN_103284c0();
          pFVar9 = local_12c;
          pFVar14 = local_16c;
          for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pFVar14 = *(undefined4 *)pFVar9;
            pFVar9 = pFVar9 + 4;
            pFVar14 = pFVar14 + 4;
          }
          local_68._0_1_ = 0x47;
          this = *(UViewport **)(param_2 + 4);
          uStack_19c4 = 0x105e8a97;
          iVar3 = UViewport::IsOrtho(this);
          if (((iVar3 != 0) && (param_1 != (FDynamicActor *)0x0)) &&
             (*(int **)param_1 != (int *)0x0)) {
            iVar3 = **(int **)param_1;
            uStack_19c4 = *(undefined4 *)(*(int *)(this + 0x3c) + 0x5b8);
            pFVar9 = local_16c;
            puVar8 = auStack_1a04;
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *(undefined4 *)pFVar9;
              pFVar9 = pFVar9 + 4;
              puVar8 = puVar8 + 1;
            }
            puVar8 = (undefined4 *)(**(code **)(iVar3 + 0x138))(local_182c);
            local_68 = (uint)local_68._1_3_ << 8;
            pFVar9 = local_16c;
            for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)pFVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              pFVar9 = pFVar9 + 4;
            }
            local_68._0_1_ = 0x47;
            uStack_19c4 = 0x105e8afa;
            FMatrix::~FMatrix(local_182c);
          }
          if (*(int *)GL2Shader_exref == 0) {
            iVar3 = *(int *)param_4;
            pFVar9 = local_16c;
            puVar8 = auStack_1a04 + 1;
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *(undefined4 *)pFVar9;
              pFVar9 = pFVar9 + 4;
              puVar8 = puVar8 + 1;
            }
            auStack_1a04[0] = 0;
            (**(code **)(iVar3 + 0x40))();
            (**(code **)(*(int *)param_4 + 0x3c))(local_10[0x2a]);
            puVar8 = local_10;
          }
          else {
            uStack_19c4 = 4;
            pFStack_19c8 = local_16c;
            pwStack_19cc = L"world_mat";
            uStack_19d0 = 0x105e8b22;
            (**(code **)(*(int *)param_4 + 0x6c))();
            puVar8 = local_10;
            local_d8 = (float)*(byte *)((int)local_10 + 0xaa) / 255.0;
            local_d4 = (float)*(byte *)((int)local_10 + 0xa9) / 255.0;
            local_d0 = (float)*(byte *)(local_10 + 0x2a) / 255.0;
            local_cc = (float)*(byte *)((int)local_10 + 0xab) / 255.0;
            uStack_19d0 = 1;
            pfStack_19d4 = &local_d8;
            pwStack_19d8 = L"tFactor";
            uStack_19dc = 0x105e8b89;
            (**(code **)(*(int *)param_4 + 0x70))();
          }
          uStack_19dc = (uint)*(ushort *)((int)local_28 + 0xc);
          uStack_19e0 = (uint)*(ushort *)((int)local_28 + 10);
          uStack_19e4 = (uint)*(ushort *)((int)local_28 + 0x10);
          uStack_19e8 = (uint)*(ushort *)((int)local_28 + 8);
          uStack_19ec = (uint)(*(int *)((int)local_28 + 4) != 0);
          uStack_19f0 = 0x105e8bf1;
          (**(code **)(*(int *)param_4 + 0xb4))();
          puVar8 = puVar8 + 0x38;
          local_68._0_1_ = 1;
          _pwStack_1874 = (double)CONCAT44(0x105e8c0a,pwStack_1874);
          local_10 = puVar8;
          FMatrix::~FMatrix(local_16c);
          local_68 = (uint)local_68._1_3_ << 8;
          _pwStack_1874 = (double)CONCAT44(0x105e8c1a,pwStack_1874);
          FMatrix::~FMatrix(local_12c);
          local_38 = local_38 + 1;
        }
      }
    }
    local_24 = local_24 + 1;
  } while( true );
}


// ==== 105e8c37 Catch@105e8c37

void Catch_105e8c37(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + -0x78);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_10914c48);
}


// ==== 105e8c4b Catch@105e8c4b

void Catch_105e8c4b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMeshEmitter::RenderParticles");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e92d0 FUN_105e92d0

void FUN_105e92d0(ushort *param_1,UObject *param_2)

{
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  ushort *puVar4;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821290;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((param_2 != (UObject *)0x0) &&
     (ExceptionList = &local_10, *(UObject **)(in_ECX + 0x60) != (UObject *)0x0)) {
    ExceptionList = &local_10;
    pUVar2 = UObject::GetOuter(*(UObject **)(in_ECX + 0x60));
    pUVar3 = UObject::GetOuter(in_ECX);
    if (pUVar2 == pUVar3) {
      iVar1 = *(int *)*(UObject **)(in_ECX + 0x60);
      pUVar2 = param_2;
      puVar4 = UObject::GetName(*(UObject **)(in_ECX + 0x60));
      (**(code **)(iVar1 + 0x5c))(puVar4,pUVar2);
    }
  }
  UObject::Rename(in_ECX,param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 105e935a Catch@105e935a

void Catch_105e935a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e936e Catch@105e936e

void Catch_105e936e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::Rename");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e93c0 FUN_105e93c0

void FUN_105e93c0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108212a0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x60) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x60) + 0x20))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 105e9412 Catch@105e9412

void Catch_105e9412(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e9426 Catch@105e9426

void Catch_105e9426(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::Modify");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e9470 FUN_105e9470

undefined4 FUN_105e9470(void)

{
  return 1;
}


// ==== 105e94a0 FUN_105e94a0

void FUN_105e94a0(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108212b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,4);
  ExceptionList = local_c;
  return;
}


// ==== 105e95d0 FUN_105e95d0

void FUN_105e95d0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108212d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105e9620 FUN_105e9620

void FUN_105e9620(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108212f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105e9730 FUN_105e9730

void FUN_105e9730(FArchive *param_1)

{
  FArray *in_ECX;
  
  FArray::CountBytes(in_ECX,param_1,0xac);
  return;
}


// ==== 105e9770 FUN_105e9770

void FUN_105e9770(FArchive *param_1)

{
  FArray *in_ECX;
  
  FArray::CountBytes(in_ECX,param_1,0xc0);
  return;
}


// ==== 105e9850 FUN_105e9850

int FUN_105e9850(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc0);
  return iVar1 * 0xc0 + *(int *)param_2;
}


// ==== 105e9880 FUN_105e9880

int FUN_105e9880(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x1c);
  return *(int *)param_2 + iVar1 * 0x1c;
}


// ==== 105e98b0 FUN_105e98b0

FArchive * FUN_105e98b0(FArchive *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = FArchive::Ver(param_1);
  if (iVar1 < 0x3e) {
    FArchive::ByteOrderSerialize(param_1,param_2,4);
    FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
    FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
    return param_1;
  }
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0xc),4);
  return param_1;
}


// ==== 105e9950 FUN_105e9950

float10 FUN_105e9950(float *param_1,float *param_2)

{
  return (float10)(ABS(param_1[1] * param_2[1]) + ABS(*param_1 * *param_2) +
                  ABS(param_1[2] * param_2[2]));
}


// ==== 105e99b0 FUN_105e99b0

void FUN_105e99b0(int *param_1,int param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821310;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(*param_1 + 0x18))(param_2,param_2 + 8,param_2 + 0x10,param_2 + 4);
  uVar1 = thunk_FUN_10330080(uVar1);
  uVar1 = thunk_FUN_10330080(uVar1);
  thunk_FUN_10330060(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 105e9a1e Catch@105e9a1e

void Catch_105e9a1e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e9a32 Catch@105e9a32

void Catch_105e9a32(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FZoneProperties<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e9a90 FUN_105e9a90

void FUN_105e9a90(FArchive *param_1,FCompactIndex *param_2)

{
  FArchive *pFVar1;
  FCompactIndex *pFVar2;
  FCompactIndex *pFVar3;
  FCompactIndex *pFVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821320;
  local_10 = ExceptionList;
  local_8 = 0;
  pFVar4 = param_2 + 0xc;
  pFVar3 = param_2 + 8;
  pFVar2 = param_2 + 4;
  ExceptionList = &local_10;
  pFVar1 = operator<<(param_1,param_2);
  pFVar1 = operator<<(pFVar1,pFVar2);
  pFVar1 = operator<<(pFVar1,pFVar3);
  thunk_FUN_10330080(pFVar1,pFVar4);
  ExceptionList = local_10;
  return;
}


// ==== 105e9afd Catch@105e9afd

void Catch_105e9afd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105e9b11 Catch@105e9b11

void Catch_105e9b11(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FLeaf<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e9b60 FUN_105e9b60

FArchive * FUN_105e9b60(FArchive *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  FArchive *pFVar3;
  FCompactIndex *pFVar4;
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_54 [3];
  undefined1 local_48 [4];
  undefined1 local_44 [8];
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_8;
  
  puStack_74 = &LAB_10821330;
  local_78 = ExceptionList;
  local_70 = 0;
  ExceptionList = &local_78;
  iVar1 = FArchive::Ver(param_1);
  if (iVar1 < 0x5c) {
    thunk_FUN_10330040(param_1,&local_8);
    thunk_FUN_103301d0(param_1,local_54);
  }
  else {
    uVar2 = thunk_FUN_10330040(param_1,param_2,param_2 + 4);
    thunk_FUN_10330040(uVar2);
    uVar2 = thunk_FUN_10330350(param_1,param_2 + 8,param_2 + 0x48);
    thunk_FUN_10330350(uVar2);
    uVar2 = thunk_FUN_1032ffe0(param_1,param_2 + 0xac,param_2 + 0xad);
    thunk_FUN_1032ffe0(uVar2);
  }
  iVar1 = FArchive::Ver(param_1);
  if (iVar1 < 0x60) {
    iVar1 = FArchive::IsLoading(param_1);
    if (iVar1 != 0) {
      local_54[0] = 0;
      local_3c = *(float *)(param_2 + 0x78) +
                 *(float *)(param_2 + 0x68) * 0.0 +
                 *(float *)(param_2 + 0x48) * 0.0 + *(float *)(param_2 + 0x58) * 0.0;
      local_38 = *(float *)(param_2 + 0x6c) * 0.0 +
                 *(float *)(param_2 + 0x4c) * 0.0 + *(float *)(param_2 + 0x5c) * 0.0 +
                 *(float *)(param_2 + 0x7c);
      local_34 = *(float *)(param_2 + 0x70) * 0.0 +
                 *(float *)(param_2 + 0x50) * 0.0 + *(float *)(param_2 + 0x60) * 0.0 +
                 *(float *)(param_2 + 0x80);
      *(float *)(param_2 + 0x88) = local_3c;
      *(float *)(param_2 + 0x8c) = local_38;
      *(float *)(param_2 + 0x90) = local_34;
      local_60 = 0x3f800000;
      local_2c = *(float *)(param_2 + 0x78) * 0.0 +
                 *(float *)(param_2 + 0x68) * 0.0 +
                 *(float *)(param_2 + 0x58) * 0.0 + *(float *)(param_2 + 0x48);
      local_28 = *(float *)(param_2 + 0x7c) * 0.0 +
                 *(float *)(param_2 + 0x6c) * 0.0 +
                 *(float *)(param_2 + 0x5c) * 0.0 + *(float *)(param_2 + 0x4c);
      local_24 = *(float *)(param_2 + 0x80) * 0.0 +
                 *(float *)(param_2 + 0x70) * 0.0 +
                 *(float *)(param_2 + 0x60) * 0.0 + *(float *)(param_2 + 0x50);
      *(float *)(param_2 + 0x94) = local_2c;
      *(float *)(param_2 + 0x98) = local_28;
      *(float *)(param_2 + 0x9c) = local_24;
      local_6c = 0;
      local_1c = *(float *)(param_2 + 0x78) * 0.0 +
                 *(float *)(param_2 + 0x68) * 0.0 +
                 *(float *)(param_2 + 0x48) * 0.0 + *(float *)(param_2 + 0x58);
      local_18 = *(float *)(param_2 + 0x7c) * 0.0 +
                 *(float *)(param_2 + 0x6c) * 0.0 +
                 *(float *)(param_2 + 0x4c) * 0.0 + *(float *)(param_2 + 0x5c);
      local_14 = *(float *)(param_2 + 0x70) * 0.0 +
                 *(float *)(param_2 + 0x50) * 0.0 + *(float *)(param_2 + 0x60) +
                 *(float *)(param_2 + 0x80) * 0.0;
      *(float *)(param_2 + 0xa0) = local_1c;
      *(float *)(param_2 + 0xa4) = local_18;
      *(float *)(param_2 + 0xa8) = local_14;
    }
  }
  else {
    uVar2 = thunk_FUN_103301d0(param_1,param_2 + 0x88,param_2 + 0x94,param_2 + 0xa0);
    uVar2 = thunk_FUN_103301d0(uVar2);
    thunk_FUN_103301d0(uVar2);
  }
  pFVar4 = (FCompactIndex *)(param_2 + 0xb4);
  pFVar3 = operator<<(param_1,(FCompactIndex *)(param_2 + 0xb0));
  operator<<(pFVar3,pFVar4);
  iVar1 = FArchive::Ver(param_1);
  if (iVar1 < 0x5c) {
    local_8 = 0;
    uVar2 = thunk_FUN_10330060(param_1,local_48,local_44,&local_8);
    uVar2 = thunk_FUN_10330060(uVar2);
    thunk_FUN_10330040(uVar2);
  }
  else {
    pFVar4 = (FCompactIndex *)(param_2 + 0xbc);
    pFVar3 = operator<<(param_1,(FCompactIndex *)(param_2 + 0xb8));
    operator<<(pFVar3,pFVar4);
  }
  ExceptionList = local_78;
  return param_1;
}


// ==== 105e9e44 Catch@105e9e44

void Catch_105e9e44(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x60) = *(undefined4 *)(unaff_EBP + 0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x60,&DAT_10914c48);
}


// ==== 105e9e58 Catch@105e9e58

void Catch_105e9e58(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FLightMapIndex<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105e9f40 FUN_105e9f40

void FUN_105e9f40(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 105e9f60 FUN_105e9f60

void FUN_105e9f60(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 105e9f80 FUN_105e9f80

void FUN_105e9f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  in_ECX[4] = param_2;
  in_ECX[3] = param_1;
  in_ECX[5] = param_3;
  *in_ECX = HBrushVertex::vftable;
  in_ECX[6] = param_4;
  return;
}


// ==== 105e9fb0 FUN_105e9fb0

wchar_t * FUN_105e9fb0(void)

{
  return L"HBrushVertex";
}


// ==== 105e9fc0 FUN_105e9fc0

undefined4 FUN_105e9fc0(ushort *param_1)

{
  int iVar1;
  
  iVar1 = appStricmp((ushort *)L"HBrushVertex",param_1);
  if (iVar1 != 0) {
    iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 105ea020 FUN_105ea020

FArchive * FUN_105ea020(FArchive *param_1,int param_2)

{
  FArchive *pFVar1;
  int iVar2;
  undefined4 uVar3;
  FCompactIndex *pFVar4;
  FCompactIndex *pFVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821340;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10333320(param_1,param_2);
  pFVar5 = (FCompactIndex *)(param_2 + 0xc);
  pFVar4 = (FCompactIndex *)(param_2 + 8);
  pFVar1 = (FArchive *)thunk_FUN_10330020(param_1,param_2 + 4);
  pFVar1 = operator<<(pFVar1,pFVar4);
  operator<<(pFVar1,pFVar5);
  pFVar5 = (FCompactIndex *)(param_2 + 0x14);
  pFVar1 = operator<<(param_1,(FCompactIndex *)(param_2 + 0x10));
  operator<<(pFVar1,pFVar5);
  iVar2 = FArchive::Ver(param_1);
  if (iVar2 < 0x65) {
    local_18 = 0xffffffff;
    operator<<(param_1,(FCompactIndex *)&local_18);
  }
  operator<<(param_1,(FCompactIndex *)(param_2 + 0x18));
  iVar2 = FArchive::Ver(param_1);
  if (iVar2 < 0x4e) {
    local_20 = 0;
    local_1c = 0;
    uVar3 = thunk_FUN_104a1e00(param_1,&local_20,&local_1c);
    thunk_FUN_104a1e00(uVar3);
  }
  thunk_FUN_105e9f60(param_1,param_2 + 0x1c);
  iVar2 = FArchive::Ver(param_1);
  if (0x56 < iVar2) {
    thunk_FUN_10330260(param_1,param_2 + 0x2c);
  }
  iVar2 = FArchive::Ver(param_1);
  if (iVar2 < 0x6a) {
    iVar2 = FArchive::IsLoading(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_2 + 0x3c) = 0x42000000;
    }
  }
  else {
    thunk_FUN_10330060(param_1,param_2 + 0x3c);
  }
  iVar2 = FArchive::LicenseeVer(param_1);
  if (0x14 < iVar2) {
    thunk_FUN_10330040(param_1,param_2 + 0x40);
    ExceptionList = local_10;
    return param_1;
  }
  iVar2 = FArchive::IsLoading(param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ea198 Catch@105ea198

void Catch_105ea198(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105ea1ac Catch@105ea1ac

void Catch_105ea1ac(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FBspSurf<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ea240 FUN_105ea240

FArchive * FUN_105ea240(FArchive *param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  FArchive *pFVar4;
  float *pfVar5;
  int iVar6;
  FCompactIndex *pFVar7;
  float local_40 [5];
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821350;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  local_8 = 0;
  ExceptionList = &local_10;
  operator<<(param_1,(FCompactIndex *)(param_2 + 0x40));
  uVar2 = thunk_FUN_103301d0(param_1,param_2,param_2 + 3,param_2 + 6,param_2 + 9);
  uVar2 = thunk_FUN_103301d0(uVar2);
  uVar2 = thunk_FUN_103301d0(uVar2);
  thunk_FUN_103301d0(uVar2);
  for (iVar6 = 0; local_20 = iVar6, iVar6 < (int)param_2[0x40]; iVar6 = iVar6 + 1) {
    thunk_FUN_103301d0(param_1,param_2 + iVar6 * 3 + 0xc);
  }
  thunk_FUN_10330020(param_1,param_2 + 0x3c);
  uVar2 = thunk_FUN_105e9f60(param_1,param_2 + 0x3d,param_2 + 0x3e);
  piVar3 = (int *)thunk_FUN_10333320(uVar2);
  (**(code **)(*piVar3 + 0x1c))(param_2 + 0x3f);
  pFVar7 = (FCompactIndex *)(param_2 + 0x42);
  pFVar4 = operator<<(param_1,(FCompactIndex *)(param_2 + 0x41));
  operator<<(pFVar4,pFVar7);
  iVar6 = FArchive::Ver(param_1);
  if (iVar6 < 0x4e) {
    local_18 = 0;
    local_1c = 0;
    uVar2 = thunk_FUN_104a1e00(param_1,&local_18,&local_1c);
    thunk_FUN_104a1e00(uVar2);
    iVar6 = FArchive::IsLoading(param_1);
    if (iVar6 != 0) {
      local_24 = (float)(int)(short)local_18;
      FVector::SizeSquared((FVector *)(param_2 + 6));
      pfVar5 = (float *)FVector::operator/((FVector *)(param_2 + 6),(float)local_40);
      local_40[0] = local_24 * *pfVar5;
      local_28 = pfVar5[1] * local_24;
      fVar1 = pfVar5[2];
      *param_2 = *param_2 - local_40[0];
      param_2[1] = param_2[1] - local_28;
      param_2[2] = param_2[2] - local_24 * fVar1;
      local_2c = (float)(int)(short)local_1c;
      local_24 = local_40[0];
      FVector::SizeSquared((FVector *)(param_2 + 9));
      pfVar5 = (float *)FVector::operator/((FVector *)(param_2 + 9),(float)local_40);
      fVar1 = *pfVar5;
      local_28 = pfVar5[1] * local_2c;
      local_24 = local_2c * pfVar5[2];
      *param_2 = *param_2 - local_2c * fVar1;
      param_2[1] = param_2[1] - local_28;
      param_2[2] = param_2[2] - local_24;
      local_2c = local_2c * fVar1;
    }
  }
  iVar6 = FArchive::Ver(param_1);
  if (iVar6 < 0x6a) {
    iVar6 = FArchive::IsLoading(param_1);
    if (iVar6 != 0) {
      param_2[0x51] = 32.0;
    }
  }
  else {
    thunk_FUN_10330060(param_1,param_2 + 0x51);
  }
  iVar6 = FArchive::LicenseeVer(param_1);
  if (0x15 < iVar6) {
    thunk_FUN_10330040(param_1,param_2 + 0x52);
    ExceptionList = local_10;
    return param_1;
  }
  iVar6 = FArchive::IsLoading(param_1);
  if (iVar6 != 0) {
    param_2[0x52] = -NAN;
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ea4c5 Catch@105ea4c5

void Catch_105ea4c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 105ea4d9 Catch@105ea4d9

void Catch_105ea4d9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FPoly<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ea5b0 FUN_105ea5b0

void FUN_105ea5b0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821360;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::Shrink((FArray *)(in_ECX + 0x84),0xc);
  FArray::Shrink((FArray *)(in_ECX + 0x94),0xc);
  FArray::Shrink((FArray *)(in_ECX + 0x74),8);
  FArray::Shrink((FArray *)(in_ECX + 100),0x78);
  FArray::Shrink((FArray *)(in_ECX + 0xa4),0x44);
  if (*(int *)(in_ECX + 0x60) != 0) {
    FArray::Shrink((FArray *)(*(int *)(in_ECX + 0x60) + 0x34),0x14c);
  }
  FArray::Shrink((FArray *)(in_ECX + 0xb4),0x1c);
  FArray::Shrink((FArray *)(in_ECX + 0xc0),4);
  ExceptionList = local_10;
  return;
}


// ==== 105ea663 Catch@105ea663

void Catch_105ea663(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105ea677 Catch@105ea677

void Catch_105ea677(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::ShrinkModel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ea6d0 FUN_105ea6d0

void FUN_105ea6d0(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 105ea700 FUN_105ea700

FArchive * FUN_105ea700(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821370;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,8);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_10331190(param_1,*(int *)param_2 + iVar1 * 8);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,8,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_10370b20(8,param_2);
      thunk_FUN_10331190(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ea7d0 Catch@105ea7d0

void Catch_105ea7d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105ea7e4 Catch@105ea7e4

void Catch_105ea7e4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ea850 FUN_105ea850

void FUN_105ea850(int param_1,int param_2)

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
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x1c;
    iVar2 = iVar2 - param_1;
    do {
      (*(code *)**(undefined4 **)(*(int *)in_ECX + iVar1))(0);
      iVar1 = iVar1 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x1c);
  return;
}


// ==== 105ea920 FUN_105ea920

void FUN_105ea920(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      (*(code *)**(undefined4 **)(iVar1 + *(int *)in_ECX))(0);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x1c;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x1c,param_1);
  return;
}


// ==== 105ea970 FUN_105ea970

void FUN_105ea970(byte param_1)

{
  FLightMapIndex *in_ECX;
  
  FLightMapIndex::~FLightMapIndex(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 105ea9a0 FUN_105ea9a0

UObject * FUN_105ea9a0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ABrush::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105ea9d0 FUN_105ea9d0

UObject * FUN_105ea9d0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UShader::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105eaa00 FUN_105eaa00

UObject * FUN_105eaa00(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UFinalBlend::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105eaa30 FUN_105eaa30

undefined4 FUN_105eaa30(double param_1)

{
  int *piVar1;
  int in_ECX;
  
  if ((*(double *)(in_ECX + 0x10) != 0.0) &&
     (((*(int *)(UTexture::__Client + 0x50) == 0 || (*(int *)(UTexture::__Client + 100) == 0)) ||
      (*(int *)(*(int *)(*(int *)(UTexture::__Client + 0x34) + 0x5c) + 100) == 0)))) {
    piVar1 = (int *)(in_ECX + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_FUN_105266d0();
      (**(code **)(**(int **)GMalloc_exref + 8))();
    }
    return 0;
  }
  if ((*(double *)(in_ECX + 0x10) != 0.0) &&
     ((*(double *)(in_ECX + 0x10) <= param_1 ||
      ((*(double *)(in_ECX + 8) != 0.0 && (1.0 < param_1 - *(double *)(in_ECX + 8))))))) {
    piVar1 = (int *)(in_ECX + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_FUN_105266d0();
      (**(code **)(**(int **)GMalloc_exref + 8))();
    }
    return 0;
  }
  *(double *)(in_ECX + 8) = param_1;
  return 1;
}


// ==== 105eab20 FUN_105eab20

void FUN_105eab20(void)

{
  UObject *in_ECX;
  int iVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821380;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar1 = 0; local_18 = iVar1, iVar1 < *(int *)(in_ECX + 0x68); iVar1 = iVar1 + 1) {
    thunk_FUN_104225e0(&local_18);
  }
  UObject::PostLoad(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 105eaba3 Catch@105eaba3

void Catch_105eaba3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105eabb7 Catch@105eabb7

void Catch_105eabb7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::PostLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105eac10 FUN_105eac10

void FUN_105eac10(int param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,FArray *param_9,undefined4 param_10,
                 int param_11)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  FName local_18 [4];
  FName local_14 [4];
  FName local_10 [4];
  FName local_c [4];
  FName local_8 [4];
  FName local_4 [4];
  
  if (DAT_10c79284 < *(int *)(param_1 + 0x68)) {
    FArray::Add((FArray *)&DAT_10c79280,*(int *)(param_1 + 0x68) - DAT_10c79284,4);
  }
  puVar5 = DAT_10c79280;
  iVar6 = 0;
  *DAT_10c79280 = param_2;
  do {
    pfVar1 = (float *)(*(int *)(param_1 + 100) + puVar5[iVar6] * 0x78);
    iVar7 = iVar6 + -1;
    fVar3 = ABS(pfVar1[1] * param_7) +
            ABS(*(float *)(*(int *)(param_1 + 100) + puVar5[iVar6] * 0x78) * param_6) +
            ABS(pfVar1[2] * param_8);
    fVar4 = (pfVar1[2] * param_5 + pfVar1[1] * param_4 + *pfVar1 * param_3) - pfVar1[3];
    if (fVar4 < fVar3) {
      if (pfVar1[8] == -NAN) {
        if (pfVar1[0x16] != -NAN) {
          FName::FName(local_18,0);
          iVar6 = FName::operator==((FName *)&param_10,local_18);
          if ((iVar6 == 0) || (param_11 != 0)) {
            FName::FName(local_14,0);
            iVar6 = FName::operator!=((FName *)&param_10,local_14);
            if ((iVar6 != 0) &&
               (piVar2 = (int *)(*(int *)(param_1 + 0xcc) + (int)pfVar1[0x16] * 0x14),
               *(int *)(param_1 + (*piVar2 + 0xd) * 0x18) != 0)) {
              iVar6 = FName::operator==((FName *)&param_10,
                                        (FName *)(*(int *)(param_1 + (*piVar2 + 0xd) * 0x18) + 0x3c0
                                                 ));
              if (iVar6 != 0) goto LAB_105eadad;
            }
            FName::FName(local_10,0);
            iVar6 = FName::operator==((FName *)&param_10,local_10);
            if (((iVar6 == 0) || (param_11 == 0)) ||
               (*(int *)(*(int *)(param_1 + 0xcc) + (int)pfVar1[0x16] * 0x14) != param_11))
            goto LAB_105eadc7;
          }
LAB_105eadad:
          iVar6 = FArray::Add(param_9,1,4);
          *(float *)(*(int *)param_9 + iVar6 * 4) = pfVar1[0x16];
        }
      }
      else {
        puVar5[iVar6] = pfVar1[8];
        iVar7 = iVar6;
      }
    }
LAB_105eadc7:
    iVar6 = iVar7;
    if (-fVar4 < fVar3) {
      if (pfVar1[9] == -NAN) {
        if (pfVar1[0x17] != -NAN) {
          FName::FName(local_c,0);
          iVar7 = FName::operator==((FName *)&param_10,local_c);
          if ((iVar7 == 0) || (param_11 != 0)) {
            FName::FName(local_8,0);
            iVar7 = FName::operator!=((FName *)&param_10,local_8);
            if ((iVar7 != 0) &&
               (*(int *)(param_1 +
                        (*(int *)(*(int *)(param_1 + 0xcc) + (int)pfVar1[0x17] * 0x14) + 0xd) * 0x18
                        ) != 0)) {
              iVar7 = FName::operator==((FName *)&param_10,
                                        (FName *)(*(int *)(param_1 +
                                                          (*(int *)(*(int *)(param_1 + 0xcc) +
                                                                   (int)pfVar1[0x17] * 0x14) + 0xd)
                                                          * 0x18) + 0x3c0));
              if (iVar7 != 0) goto LAB_105eaebb;
            }
            FName::FName(local_4,0);
            iVar7 = FName::operator==((FName *)&param_10,local_4);
            if (((iVar7 == 0) || (param_11 == 0)) ||
               (*(int *)(*(int *)(param_1 + 0xcc) + (int)pfVar1[0x17] * 0x14) != param_11))
            goto LAB_105eaed5;
          }
LAB_105eaebb:
          iVar7 = FArray::Add(param_9,1,4);
          *(float *)(*(int *)param_9 + iVar7 * 4) = pfVar1[0x17];
        }
      }
      else {
        iVar6 = iVar6 + 1;
        puVar5[iVar6] = pfVar1[9];
      }
    }
LAB_105eaed5:
    if (iVar6 < 0) {
      return;
    }
  } while( true );
}


// ==== 105eafa0 FUN_105eafa0

undefined4 FUN_105eafa0(undefined4 param_1)

{
  int in_ECX;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  FVector local_3c [12];
  FVector local_30 [24];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108213a9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_18 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  thunk_FUN_10368430();
  local_18 = 1;
  FBox::GetCenterAndExtents((FBox *)&stack0x00000008,local_3c,local_30);
  if (*(int *)(in_ECX + 0x68) != 0) {
    thunk_FUN_105eac10();
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105eb051 Catch@105eb051

void Catch_105eb051(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105eb065 Catch@105eb065

void Catch_105eb065(void)

{
  ushort *puVar1;
  int unaff_EBP;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  appUnwindf((ushort *)&DAT_10851d80);
  dVar7 = (double)*(float *)(unaff_EBP + 0x20);
  dVar6 = (double)*(float *)(unaff_EBP + 0x1c);
  dVar5 = (double)*(float *)(unaff_EBP + 0x18);
  dVar4 = (double)*(float *)(unaff_EBP + 0x14);
  dVar3 = (double)*(float *)(unaff_EBP + 0x10);
  dVar2 = (double)*(float *)(unaff_EBP + 0xc);
  puVar1 = UObject::GetPathName(*(UObject **)(unaff_EBP + -0x1c),(UObject *)0x0,(ushort *)0x0);
  appUnwindf((ushort *)L"%s (%f %f %f) (%f %f %f)",puVar1,dVar2,dVar3,dVar4,dVar5,dVar6,dVar7);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105eb110 FUN_105eb110

undefined4 FUN_105eb110(void)

{
  int iVar1;
  FLightMapTexture *this;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  iVar1 = FArray::Add((FArray *)(in_ECX + 4),1,0x6c);
  this = (FLightMapTexture *)(iVar1 * 0x6c + *(int *)(in_ECX + 4));
  if (this != (FLightMapTexture *)0x0) {
    uVar2 = FLightMapTexture::FLightMapTexture(this,(ULevel *)*in_ECX);
    thunk_FUN_1032bcd0(in_ECX + 1);
    return uVar2;
  }
  thunk_FUN_1032bcd0(in_ECX + 1);
  return 0;
}


// ==== 105eb170 FUN_105eb170

void FUN_105eb170(undefined4 param_1)

{
  FArray *this;
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar1 = FArray::Add((FArray *)(in_ECX + 4),1,4);
  iVar3 = 0;
  *(undefined4 *)(*(int *)(in_ECX + 4) + iVar1 * 4) = param_1;
  if (0 < *(int *)(in_ECX + 0x14)) {
    iVar1 = 0;
    do {
      this = (FArray *)(*(int *)(in_ECX + 0x10) + 0x10 + iVar1);
      iVar2 = FArray::Add(this,1,4);
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)this + iVar2 * 4) = param_1;
      iVar1 = iVar1 + 0x6c;
    } while (iVar3 < *(int *)(in_ECX + 0x14));
  }
  return;
}


// ==== 105eb1e0 FUN_105eb1e0

void FUN_105eb1e0(void)

{
  int in_ECX;
  
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  return;
}


// ==== 105eb230 FUN_105eb230

void FUN_105eb230(void)

{
  int in_ECX;
  
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  return;
}


// ==== 105eb280 FUN_105eb280

FArchive * FUN_105eb280(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FBox *this;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108213c0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x1c);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_103302c0(param_1,*(int *)param_2 + iVar1 * 0x1c);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0x1c,local_18);
    while (iVar3 < local_18) {
      this = (FBox *)thunk_FUN_10370990(0x1c,param_2);
      if (this == (FBox *)0x0) {
        thunk_FUN_103302c0(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = FBox::FBox(this);
        thunk_FUN_103302c0(param_1,uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105eb37a Catch@105eb37a

void Catch_105eb37a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105eb38e Catch@105eb38e

void Catch_105eb38e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105eb400 FUN_105eb400

FArchive * FUN_105eb400(FArchive *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108213d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FArchive::IsTrans(param_1);
  if (iVar1 == 0) {
    thunk_FUN_105ea700(param_1,param_2);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105eb457 Catch@105eb457

void Catch_105eb457(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105eb46b Catch@105eb46b

void Catch_105eb46b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TTransArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105eb4b0 FUN_105eb4b0

FArchive * FUN_105eb4b0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108213e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x14);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_105e9a90(param_1,*(int *)param_2 + iVar1 * 0x14);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0x14,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_10370b70(0x14,param_2);
      thunk_FUN_105e9a90(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105eb583 Catch@105eb583

void Catch_105eb583(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105eb597 Catch@105eb597

void Catch_105eb597(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105eb600 FUN_105eb600

FArchive * FUN_105eb600(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108213f0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_103430f0(param_1,*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_10370ba0(4,param_2);
      thunk_FUN_103430f0(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105eb6d0 Catch@105eb6d0

void Catch_105eb6d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105eb6e4 Catch@105eb6e4

void Catch_105eb6e4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105eb750 FUN_105eb750

void FUN_105eb750(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10821409;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_105ea850(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105eb7c0 FUN_105eb7c0

void FUN_105eb7c0(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821438;
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
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar3 = param_1 * 0xc0;
    iVar2 = iVar2 - param_1;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      FMatrix::~FMatrix((FMatrix *)(iVar1 + iVar3 + 0x48));
      local_4 = 0xffffffff;
      FMatrix::~FMatrix((FMatrix *)(iVar1 + iVar3 + 8));
      iVar3 = iVar3 + 0xc0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0xc0);
  ExceptionList = local_c;
  return;
}


// ==== 105eb8e0 FUN_105eb8e0

void FUN_105eb8e0(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821468;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar3 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      FMatrix::~FMatrix((FMatrix *)(iVar1 + iVar3 + 0x48));
      local_4 = 0xffffffff;
      FMatrix::~FMatrix((FMatrix *)(iVar1 + iVar3 + 8));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc0;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0xc0,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 105eb990 FUN_105eb990

void FUN_105eb990(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821494;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 0x20));
  *(undefined4 *)(in_ECX + 0x40) = 0xffffffff;
  ExceptionList = local_c;
  return;
}


// ==== 105eba00 FUN_105eba00

FArchive * FUN_105eba00(FArchive *param_1,int param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  FArchive *pFVar3;
  int iVar4;
  FCompactIndex *pFVar5;
  FCompactIndex *pFVar6;
  undefined4 *puVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108214b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  pbVar1 = (byte *)(param_2 + 0x57);
  pFVar6 = (FCompactIndex *)(param_2 + 0x1c);
  pFVar5 = (FCompactIndex *)(param_2 + 0x18);
  ExceptionList = &local_10;
  uVar2 = thunk_FUN_10330260(param_1,param_2,param_2 + 0x10,pbVar1);
  uVar2 = thunk_FUN_10330080(uVar2);
  pFVar3 = (FArchive *)thunk_FUN_1032ffe0(uVar2);
  pFVar3 = operator<<(pFVar3,pFVar5);
  operator<<(pFVar3,pFVar6);
  pFVar6 = (FCompactIndex *)(param_2 + 0x28);
  pFVar5 = (FCompactIndex *)(param_2 + 0x24);
  pFVar3 = operator<<(param_1,(FCompactIndex *)(param_2 + 0x20));
  pFVar3 = operator<<(pFVar3,pFVar5);
  operator<<(pFVar3,pFVar6);
  pFVar6 = (FCompactIndex *)(param_2 + 0x50);
  pFVar3 = operator<<(param_1,(FCompactIndex *)(param_2 + 0x4c));
  operator<<(pFVar3,pFVar6);
  iVar4 = FArchive::Ver(param_1);
  if (0x45 < iVar4) {
    uVar2 = thunk_FUN_105e98b0(param_1,param_2 + 0x2c,param_2 + 0x3c);
    thunk_FUN_105e98b0(uVar2);
  }
  uVar2 = thunk_FUN_1032ffe0(param_1,param_2 + 0x54,param_2 + 0x55);
  thunk_FUN_1032ffe0(uVar2);
  thunk_FUN_1032ffe0(param_1,param_2 + 0x56);
  uVar2 = thunk_FUN_10330040(param_1,param_2 + 0x58,param_2 + 0x5c);
  thunk_FUN_10330040(uVar2);
  iVar4 = FArchive::Ver(param_1);
  if (iVar4 < 0x5c) {
    *(undefined4 *)(param_2 + 0x68) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x60) = 0xffffffff;
    *(undefined4 *)(param_2 + 100) = 0xffffffff;
  }
  else {
    iVar4 = FArchive::Ver(param_1);
    if (iVar4 < 0x5d) {
      local_18 = 0xffffffff;
      puVar7 = &local_18;
      pFVar3 = param_1;
    }
    else {
      iVar4 = FArchive::Ver(param_1);
      if (100 < iVar4) {
        uVar2 = thunk_FUN_10330040(param_1,param_2 + 0x60,param_2 + 100,
                                   (undefined4 *)(param_2 + 0x68));
        uVar2 = thunk_FUN_10330040(uVar2);
        thunk_FUN_10330040(uVar2);
        iVar4 = FArchive::IsLoading(param_1);
        if (iVar4 != 0) {
          iVar4 = FArchive::Ver(param_1);
          if (iVar4 < 0x6c) {
            *(undefined4 *)(param_2 + 0x68) = 0xffffffff;
          }
        }
        goto LAB_105ebbbf;
      }
      local_20 = 0xffffffff;
      local_1c = 0xffffffff;
      puVar7 = &local_1c;
      pFVar3 = (FArchive *)thunk_FUN_10330040(param_1,&local_20,puVar7);
    }
    thunk_FUN_10330040(pFVar3,puVar7);
    *(undefined4 *)(param_2 + 0x68) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x60) = 0xffffffff;
    *(undefined4 *)(param_2 + 100) = 0xffffffff;
  }
LAB_105ebbbf:
  iVar4 = FArchive::IsSaving(param_1);
  if (iVar4 == 0) {
    iVar4 = FArchive::IsLoading(param_1);
    if (iVar4 == 0) {
      thunk_FUN_10530180(param_1,param_2 + 0x6c);
    }
  }
  iVar4 = FArchive::IsLoading(param_1);
  if (iVar4 != 0) {
    *pbVar1 = *pbVar1 & 0x1f;
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ebc0d Catch@105ebc0d

void Catch_105ebc0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105ebc21 Catch@105ebc21

void Catch_105ebc21(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FBspNode<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ebcd0 FUN_105ebcd0

void FUN_105ebcd0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  FBox local_4c [12];
  FSphere local_40 [16];
  FVector *local_30;
  int local_2c;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_108214c8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  iVar4 = 0;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x60) == 0) || (*(int *)(*(int *)(in_ECX + 0x60) + 0x38) == 0)) {
    ExceptionList = &local_10;
    puVar2 = (undefined4 *)FBox::FBox(local_4c,0);
    puVar5 = (undefined4 *)(in_ECX + 0x34);
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffa8;
    thunk_FUN_10368910();
    local_8._0_1_ = 1;
    for (; local_1c = iVar4, iVar4 < *(int *)(*(int *)(in_ECX + 0x60) + 0x38); iVar4 = iVar4 + 1) {
      iVar3 = 0;
      while( true ) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x60) + 0x34);
        local_18 = iVar3;
        if (*(int *)(iVar1 + 0x100 + iVar4 * 0x14c) <= iVar3) break;
        thunk_FUN_10379630(iVar1 + (iVar3 * 3 + 0xc) * 4 + iVar4 * 0x14c);
        iVar3 = iVar3 + 1;
      }
    }
    puVar2 = (undefined4 *)FBox::FBox(local_4c,local_30,local_2c);
    puVar5 = (undefined4 *)(in_ECX + 0x34);
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined4 *)FSphere::FSphere(local_40,local_30,local_2c);
    *(undefined4 *)(in_ECX + 0x50) = *puVar2;
    *(undefined4 *)(in_ECX + 0x54) = puVar2[1];
    *(undefined4 *)(in_ECX + 0x58) = puVar2[2];
    *(undefined4 *)(in_ECX + 0x5c) = puVar2[3];
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_1038fad0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 105ebddc Catch@105ebddc

void Catch_105ebddc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105ebdf0 Catch@105ebdf0

void Catch_105ebdf0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::BuildBound");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ebe60 FUN_105ebe60

void FUN_105ebe60(ABrush *param_1)

{
  undefined1 *puVar1;
  int in_ECX;
  int iVar2;
  float fVar3;
  FModelCoords local_80 [104];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108214e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff74;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffff74;
  if (param_1 == (ABrush *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("Owner",".\\UnModel.cpp",0x1e5);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  thunk_FUN_105eb230();
  FModelCoords::FModelCoords(local_80);
  fVar3 = ABrush::BuildCoords(param_1,local_80,(FModelCoords *)0x0);
  iVar2 = 0;
  while( true ) {
    if (*(int *)(*(int *)(in_ECX + 0x60) + 0x38) <= iVar2) break;
    local_18 = iVar2;
    FPoly::Transform((FPoly *)(iVar2 * 0x14c + *(int *)(*(int *)(in_ECX + 0x60) + 0x34)),local_80,
                     (FVector *)(param_1 + 0x28c),(FVector *)(param_1 + 0x1bc),fVar3);
    iVar2 = iVar2 + 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105ebf24 Catch@105ebf24

void Catch_105ebf24(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105ebf38 Catch@105ebf38

void Catch_105ebf38(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::Transform");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ebfa0 FUN_105ebfa0

void FUN_105ebfa0(int *param_1,FSceneNode *param_2,FRenderInterface *param_3,int param_4,
                 float param_5)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  ULevel *this;
  uint uVar4;
  UViewport *this_00;
  float fVar5;
  AActor *pAVar6;
  ABrush *pAVar7;
  UObject *pUVar8;
  FPlane *pFVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float *pfVar12;
  HHitProxy *pHVar13;
  int iVar14;
  int iVar15;
  FMatrix *pFVar16;
  int iVar17;
  FSphere aFStack_310 [8];
  undefined4 uStack_308;
  FMatrix *pFStack_304;
  undefined4 auStack_300 [16];
  undefined4 uStack_2c0;
  FMatrix local_29c [64];
  float local_25c;
  float local_24c;
  float local_23c;
  FMatrix local_22c [76];
  float local_1e0;
  FLineBatcher local_1d0 [32];
  float local_1b0 [4];
  FCanvasUtil local_1a0 [28];
  float local_184;
  float local_180;
  float local_17c;
  float local_174;
  float local_170;
  float local_16c;
  float local_164;
  float local_160;
  float local_15c;
  float local_154;
  float local_150;
  float local_14c;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined **local_e4 [3];
  AActor *local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  int local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_9c [4];
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 *local_5c;
  void *local_58;
  undefined1 *puStack_54;
  uint local_50;
  int local_4c;
  int local_48;
  float local_44;
  undefined8 local_40;
  float local_38;
  undefined8 local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  AActor *local_c;
  float local_8;
  
  puStack_54 = &LAB_10821527;
  local_58 = ExceptionList;
  local_5c = &stack0xfffffd58;
  local_50 = 0;
  ExceptionList = &local_58;
  pAVar6 = (AActor *)thunk_FUN_105ea9a0();
  this = *(ULevel **)(*(int *)(*(int *)(param_2 + 4) + 0x3c) + 0xe4);
  local_40 = (double)CONCAT44(this,(undefined4)local_40);
  local_34 = (double)CONCAT44(*(undefined4 *)(pAVar6 + 0x278),(undefined4)local_34);
  local_c = pAVar6;
  if ((*(int *)GIsEditor_exref == 0) || (pAVar7 = ULevel::Brush(this), pAVar6 != (AActor *)pAVar7))
  {
    iVar14 = AActor::IsStaticBrush(pAVar6);
    if ((iVar14 != 0) &&
       ((iVar14 = UViewport::IsWire(*(UViewport **)(param_2 + 4)), iVar14 == 0 &&
        ((*(uint *)(pAVar6 + 0x368) & 0x400) == 0)))) {
      ExceptionList = local_58;
      return;
    }
  }
  else if ((~(*(uint *)(*(int *)(*(int *)(param_2 + 4) + 0x3c) + 0x5ac) >> 6) & 1) != 0) {
    ExceptionList = local_58;
    return;
  }
  pUVar8 = UObject::GetOuter(*(UObject **)(param_2 + 4));
  iVar14 = *(int *)(pUVar8 + 0x34);
  if (*(int *)GIsEditor_exref == 0) {
LAB_105ec092:
    iVar15 = AActor::IsStaticBrush(pAVar6);
    if (iVar15 == 0) {
      iVar15 = AActor::IsVolumeBrush(pAVar6);
      if (iVar15 != 0) {
        local_8 = *(float *)(iVar14 + 0x17c);
      }
    }
    else if (((byte)pAVar6[0x414] & 1) == 0) {
      if (pAVar6[0x3bc] == (AActor)0x2) {
        local_8 = *(float *)(iVar14 + 0x128);
      }
      else if (pAVar6[0x3bc] == (AActor)0x1) {
        uVar4 = *(uint *)(pAVar6 + 0x410);
        if ((uVar4 & 0x4000000) == 0) {
          if ((uVar4 & 8) == 0) {
            pfVar10 = (float *)(iVar14 + 0x168);
            if ((uVar4 & 0x20) == 0) {
              pfVar10 = (float *)(iVar14 + 0x124);
            }
            local_8 = *pfVar10;
          }
          else {
            local_8 = *(float *)(iVar14 + 0x154);
          }
        }
        else {
          local_8 = *(float *)(iVar14 + 0x150);
        }
      }
      else {
        local_8 = *(float *)(iVar14 + 300);
      }
    }
    else {
      local_8 = *(float *)(pAVar6 + 0x40c);
    }
  }
  else {
    pAVar7 = ULevel::Brush(local_40._4_4_);
    if (pAVar6 != (AActor *)pAVar7) goto LAB_105ec092;
    local_8 = *(float *)(iVar14 + 0x114);
  }
  if (param_4 != 0) {
    local_8 = param_5;
  }
  if (((*(uint *)(pAVar6 + 0x368) & 0x400) == 0) ||
     ((*(uint *)(*(int *)(*(int *)(param_2 + 4) + 0x3c) + 0x5ac) & 0x20000) == 0)) {
    pfVar10 = &local_d4;
    pFVar9 = (FPlane *)FColor::Plane((FColor *)&local_8);
    pFVar9 = (FPlane *)FPlane::operator*(pFVar9,(float)pfVar10);
    pfVar10 = (float *)FColor::FColor((FColor *)&param_4,pFVar9);
    local_8 = *pfVar10;
  }
  pfVar10 = &local_d4;
  uStack_2c0 = 0x105ec1b5;
  pFVar9 = (FPlane *)FColor::Plane((FColor *)&local_8);
  uStack_2c0 = 0x105ec1bd;
  pFVar9 = (FPlane *)FPlane::operator*(pFVar9,(float)pfVar10);
  uStack_2c0 = 0x105ec1c6;
  puVar11 = (undefined4 *)FColor::FColor((FColor *)&param_4,pFVar9);
  param_4 = *puVar11;
  uStack_2c0 = 0x105ec1dc;
  (**(code **)(*(int *)local_c + 0x148))();
  local_50._0_1_ = 1;
  pfVar10 = local_9c;
  pFVar16 = local_22c;
  for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
    *(float *)pFVar16 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pFVar16 = pFVar16 + 4;
  }
  local_50 = CONCAT31(local_50._1_3_,2);
  this_00 = *(UViewport **)(param_2 + 4);
  uStack_2c0 = 0x105ec1fe;
  iVar14 = UViewport::IsOrtho(this_00);
  if ((iVar14 != 0) && ((int *)*param_1 != (int *)0x0)) {
    iVar14 = *(int *)*param_1;
    uStack_2c0 = *(undefined4 *)(*(int *)(this_00 + 0x3c) + 0x5b8);
    pFVar16 = local_22c;
    puVar11 = auStack_300;
    for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar11 = *(undefined4 *)pFVar16;
      pFVar16 = pFVar16 + 4;
      puVar11 = puVar11 + 1;
    }
    pFStack_304 = local_29c;
    uStack_308 = 0x105ec23a;
    puVar11 = (undefined4 *)(**(code **)(iVar14 + 0x138))();
    local_50 = local_50 & 0xffffff00;
    pFVar16 = local_22c;
    for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
      *(undefined4 *)pFVar16 = *puVar11;
      puVar11 = puVar11 + 1;
      pFVar16 = pFVar16 + 4;
    }
    local_50 = CONCAT31(local_50._1_3_,2);
    uStack_2c0 = 0x105ec25d;
    FMatrix::~FMatrix(local_29c);
  }
  iVar14 = *(int *)param_3;
  pFVar16 = local_22c;
  puVar11 = auStack_300 + 1;
  for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar11 = *(undefined4 *)pFVar16;
    pFVar16 = pFVar16 + 4;
    puVar11 = puVar11 + 1;
  }
  auStack_300[0] = 0;
  pFStack_304 = (FMatrix *)0x105ec27d;
  (**(code **)(iVar14 + 0x40))();
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  iVar14 = *(int *)param_3;
  FSphere::FSphere(aFStack_310);
  (**(code **)(iVar14 + 0x24))();
  FLineBatcher::FLineBatcher(local_1d0,param_3,0);
  local_50 = CONCAT31(local_50._1_3_,4);
  if (*(int *)(*(UViewport **)(param_2 + 4) + 0x16c) != 0) {
    local_e4[0] = HActor::vftable;
    local_d8 = local_c;
    UViewport::PushHit(*(UViewport **)(param_2 + 4),(HHitProxy *)local_e4,0x10);
  }
  local_48 = 0;
  while( true ) {
    if (*(int *)(*(int *)(local_34._4_4_ + 0x60) + 0x38) <= local_48) break;
    iVar14 = local_48 * 0x14c + *(int *)(*(int *)(local_34._4_4_ + 0x60) + 0x34);
    local_c4 = 0;
    while (local_c4 < *(int *)(iVar14 + 0x100)) {
      iVar15 = local_c4 + 1;
      puVar11 = (undefined4 *)(iVar14 + (iVar15 % *(int *)(iVar14 + 0x100) + 4) * 0xc);
      puVar1 = (undefined4 *)(iVar14 + (local_c4 * 3 + 0xc) * 4);
      FLineBatcher::DrawLine(local_1d0,*puVar1,puVar1[1],puVar1[2],*puVar11,puVar11[1]);
      local_c4 = iVar15;
    }
    local_48 = local_48 + 1;
  }
  FLineBatcher::Flush(local_1d0,0);
  if (*(int *)(*(UViewport **)(param_2 + 4) + 0x16c) != 0) {
    UViewport::PopHit(*(UViewport **)(param_2 + 4),0);
  }
  if (*(int *)GIsEditor_exref == 0) {
LAB_105ec3db:
    if ((*(uint *)(local_c + 0x368) & 0x400) == 0) goto LAB_105ecba2;
  }
  else {
    pAVar7 = ULevel::Brush(local_40._4_4_);
    if (local_c != (AActor *)pAVar7) goto LAB_105ec3db;
  }
  if (DAT_10c7927c == (int *)0x0) {
    FName::FName((FName *)&stack0xfffffcc4,0);
    DAT_10c7927c = (int *)thunk_FUN_1053d3f0(&UFinalBlend::PrivateStaticClass,0xffffffff);
    thunk_FUN_10530420();
  }
  pUVar8 = UObject::StaticFindObject
                     (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,
                      (ushort *)L"Engine.LargeVertex",0);
  iVar14 = thunk_FUN_1040b4c0(pUVar8);
  DAT_10c7927c[0x15e] = iVar14;
  if (DAT_10c7927c[0x15e] == 0) {
    appFailAssert("VertexBlend->Material",".\\UnModel.cpp",0x301);
  }
  DAT_10c7927c[0x160] = DAT_10c7927c[0x160] & 0xfffffff7;
  DAT_10c7927c[0x160] = DAT_10c7927c[0x160] & 0xfffffffd;
  FCanvasUtil::FCanvasUtil(local_1a0,(FRenderTarget *)(*(int *)(param_2 + 4) + 0xdc),param_3);
  local_50 = CONCAT31(local_50._1_3_,5);
  local_4c = 0;
  while( true ) {
    if (*(int *)(*(int *)(local_34._4_4_ + 0x60) + 0x38) <= local_4c) break;
    iVar14 = local_4c * 0x14c + *(int *)(*(int *)(local_34._4_4_ + 0x60) + 0x34);
    local_b0 = 0;
    while (iVar15 = local_b0, local_b0 < *(int *)(iVar14 + 0x100)) {
      pfVar10 = (float *)(iVar14 + (local_b0 * 3 + 0xc) * 4);
      local_25c = *pfVar10;
      fVar2 = pfVar10[1];
      param_5 = pfVar10[2];
      local_f4 = local_9c[0] * local_25c + fVar2 * local_8c + param_5 * local_7c + local_6c;
      local_f0 = local_78 * param_5 + local_88 * fVar2 + local_9c[1] * local_25c + local_68;
      local_ec = param_5 * local_74 + fVar2 * local_84 + local_9c[2] * local_25c + local_64;
      pfVar12 = (float *)FSceneNode::Project(param_2,local_e4,local_f4);
      local_23c = *pfVar12;
      fVar2 = pfVar12[1];
      param_5 = pfVar12[2];
      local_44 = local_184 * local_23c + fVar2 * local_174 + param_5 * local_164 + local_154;
      local_18 = local_160 * param_5 + local_170 * fVar2 + local_180 * local_23c + local_150;
      local_14 = param_5 * local_15c + fVar2 * local_16c + local_17c * local_23c + local_14c;
      local_40 = (double)CONCAT44(local_14,local_18);
      local_1c = local_44;
      if (*(int *)(*(int *)(param_2 + 4) + 0x16c) != 0) {
        local_24c = *pfVar10;
        fVar2 = pfVar10[1];
        param_5 = pfVar10[2];
        local_d4 = local_24c * local_9c[0] + fVar2 * local_8c + param_5 * local_7c + local_6c;
        local_d0 = local_78 * param_5 + local_88 * fVar2 + local_9c[1] * local_24c + local_68;
        local_cc = param_5 * local_74 + fVar2 * local_84 + local_9c[2] * local_24c + local_64;
        iVar17 = 0x1c;
        pHVar13 = (HHitProxy *)thunk_FUN_105e9f80(local_c,local_d4,local_d0,local_cc);
        UViewport::PushHit(*(UViewport **)(param_2 + 4),pHVar13,iVar17);
      }
      if ((*(int *)(*(int *)(param_2 + 4) + 0x110) == 0) ||
         ((*(uint *)(local_c + 0x368) & 0x400) == 0)) {
        FCanvasUtil::DrawPoint
                  (local_1a0,local_1c - 1.0,local_18 - 1.0,local_1c + 1.0,local_18 + 1.0,local_14,
                   param_4);
      }
      else {
        iVar17 = (**(code **)(*DAT_10c7927c + 0x7c))(local_14,DAT_10c7927c,param_4);
        iVar17 = (**(code **)(*DAT_10c7927c + 0x78))((float)iVar17);
        iVar17 = (**(code **)(*DAT_10c7927c + 0x7c))(0,0,(float)iVar17);
        iVar17 = (**(code **)(*DAT_10c7927c + 0x78))((float)(iVar17 / 2) + local_18);
        local_40 = (double)local_18;
        iVar17 = (**(code **)(*DAT_10c7927c + 0x7c))((float)(iVar17 / 2) + local_1c);
        fVar2 = (float)local_40;
        local_40 = (double)local_1c;
        iVar17 = (**(code **)(*DAT_10c7927c + 0x78))(fVar2 - (float)(iVar17 / 2));
        FCanvasUtil::DrawTile(local_1a0,(float)local_40 - (float)(iVar17 / 2));
      }
      if (*(int *)(*(int *)(param_2 + 4) + 0x16c) != 0) {
        FCanvasUtil::Flush(local_1a0);
      }
      if (*(int *)(*(UViewport **)(param_2 + 4) + 0x16c) != 0) {
        UViewport::PopHit(*(UViewport **)(param_2 + 4),0);
      }
      local_b0 = iVar15 + 1;
    }
    local_4c = local_4c + 1;
  }
  FCanvasUtil::Flush(local_1a0);
  pAVar6 = local_c;
  local_1b0[0] = *(float *)(local_c + 0x28c);
  fVar2 = *(float *)(local_c + 0x290);
  fVar3 = *(float *)(local_c + 0x294);
  fVar5 = local_1b0[0] * local_9c[0] + fVar2 * local_8c + fVar3 * local_7c + local_6c;
  local_a8 = local_78 * fVar3 + local_88 * fVar2 + local_9c[1] * local_1b0[0] + local_68;
  local_a4 = fVar3 * local_74 + fVar2 * local_84 + local_9c[2] * local_1b0[0] + local_64;
  local_ac = fVar5;
  pfVar10 = (float *)FSceneNode::Project(param_2,local_1b0,fVar5);
  local_1e0 = *pfVar10;
  fVar2 = pfVar10[1];
  fVar3 = pfVar10[2];
  local_38 = local_1e0 * local_184 + fVar2 * local_174 + fVar3 * local_164 + local_154;
  local_28 = local_160 * fVar3 + local_170 * fVar2 + local_180 * local_1e0 + local_150;
  local_24 = fVar3 * local_15c + fVar2 * local_16c + local_17c * local_1e0 + local_14c;
  local_34 = (double)CONCAT44(local_24,local_28);
  local_2c = local_38;
  if (*(int *)(*(int *)(param_2 + 4) + 0x16c) != 0) {
    iVar14 = 0x1c;
    pHVar13 = (HHitProxy *)thunk_FUN_105e9f80(pAVar6,fVar5,local_a8,local_a4);
    UViewport::PushHit(*(UViewport **)(param_2 + 4),pHVar13,iVar14);
  }
  if (*(int *)(*(int *)(param_2 + 4) + 0x110) == 0) {
    FCanvasUtil::DrawPoint
              (local_1a0,local_2c - 1.0,local_28 - 1.0,local_2c + 1.0,local_28 + 1.0,local_24,
               local_8);
  }
  else {
    iVar14 = (**(code **)(*DAT_10c7927c + 0x7c))(local_24,DAT_10c7927c,param_4);
    iVar14 = (**(code **)(*DAT_10c7927c + 0x78))((float)iVar14);
    iVar14 = (**(code **)(*DAT_10c7927c + 0x7c))(0,0,(float)iVar14);
    iVar14 = (**(code **)(*DAT_10c7927c + 0x78))((float)(iVar14 / 2) + local_28);
    local_34 = (double)local_28;
    iVar14 = (**(code **)(*DAT_10c7927c + 0x7c))((float)(iVar14 / 2) + local_2c);
    fVar2 = (float)local_34;
    local_34 = (double)local_2c;
    iVar14 = (**(code **)(*DAT_10c7927c + 0x78))(fVar2 - (float)(iVar14 / 2));
    FCanvasUtil::DrawTile(local_1a0,(float)local_34 - (float)(iVar14 / 2));
  }
  FCanvasUtil::Flush(local_1a0);
  if (*(int *)(*(UViewport **)(param_2 + 4) + 0x16c) != 0) {
    UViewport::PopHit(*(UViewport **)(param_2 + 4),0);
  }
  local_50 = CONCAT31(local_50._1_3_,4);
  FCanvasUtil::~FCanvasUtil(local_1a0);
LAB_105ecba2:
  local_50._0_1_ = 2;
  FLineBatcher::~FLineBatcher(local_1d0);
  local_50._0_1_ = 1;
  FMatrix::~FMatrix(local_22c);
  local_50 = (uint)local_50._1_3_ << 8;
  FMatrix::~FMatrix((FMatrix *)local_9c);
  ExceptionList = local_58;
  return;
}


// ==== 105ecbdb Catch@105ecbdb

void Catch_105ecbdb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0xac);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x74,&DAT_10914c48);
}


// ==== 105ecbf2 Catch@105ecbf2

void Catch_105ecbf2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::Render");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ecf30 FUN_105ecf30

FArchive * FUN_105ecf30(FArchive *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821550;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FArchive::IsTrans(param_1);
  if (iVar1 == 0) {
    thunk_FUN_1038fb90(param_1,param_2);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ecf87 Catch@105ecf87

void Catch_105ecf87(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105ecf9b Catch@105ecf9b

void Catch_105ecf9b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TTransArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ecfe0 FUN_105ecfe0

void FUN_105ecfe0(void)

{
  int in_ECX;
  
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  return;
}


// ==== 105ed030 FUN_105ed030

void FUN_105ed030(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10821569;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_105eb7c0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105ed0a0 FUN_105ed0a0

FArchive * FUN_105ed0a0(FArchive *param_1,int *param_2)

{
  int iVar1;
  FLightMapIndex *this;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821580;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_105e9770(param_1);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 1));
    for (; iVar3 < param_2[1]; iVar3 = iVar3 + 1) {
      thunk_FUN_105e9b60(param_1,iVar3 * 0xc0 + *param_2);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_105eb8e0(local_18);
    while (iVar3 < local_18) {
      this = (FLightMapIndex *)thunk_FUN_105e9850(0xc0,param_2);
      if (this == (FLightMapIndex *)0x0) {
        thunk_FUN_105e9b60(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = FLightMapIndex::FLightMapIndex(this);
        thunk_FUN_105e9b60(param_1,uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ed17a Catch@105ed17a

void Catch_105ed17a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105ed18e Catch@105ed18e

void Catch_105ed18e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ed1f0 FUN_105ed1f0

FArchive * FUN_105ed1f0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FBspSurf *pFVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821590;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x44);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      operator<<(param_1,(FBspSurf *)(*(int *)param_2 + iVar3 * 0x44));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_1039e650(local_18);
    while (iVar3 < local_18) {
      iVar1 = thunk_FUN_10370b40(0x44,param_2);
      if (iVar1 == 0) {
        operator<<(param_1,(FBspSurf *)0x0);
        iVar3 = iVar3 + 1;
      }
      else {
        pFVar2 = (FBspSurf *)thunk_FUN_105eb990();
        operator<<(param_1,pFVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ed2ce Catch@105ed2ce

void Catch_105ed2ce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105ed2e2 Catch@105ed2e2

void Catch_105ed2e2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ed350 FUN_105ed350

void FUN_105ed350(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108215b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FSphere::FSphere((FSphere *)(in_ECX + 0x2c));
  FSphere::FSphere((FSphere *)(in_ECX + 0x3c));
  FArray::FArray((FArray *)(in_ECX + 0x6c));
  ExceptionList = local_c;
  return;
}


// ==== 105ed3c0 FUN_105ed3c0

void FUN_105ed3c0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108215d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_105ecfe0(param_1);
  iVar1 = *(int *)(in_ECX + 0xa4) + param_1 * 0x44;
  if ((param_2 != 0) && (*(int *)(iVar1 + 0x1c) != 0)) {
    thunk_FUN_105eb1e0(*(undefined4 *)(iVar1 + 0x18));
  }
  ExceptionList = local_10;
  return;
}


// ==== 105ed443 Catch@105ed443

void Catch_105ed443(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105ed457 Catch@105ed457

void Catch_105ed457(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::ModifySurf");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ed4b0 FUN_105ed4b0

void FUN_105ed4b0(int param_1)

{
  UModel *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108215e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0xa8); iVar1 = iVar1 + 1) {
    UModel::ModifySurf(in_ECX,iVar1,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105ed512 Catch@105ed512

void Catch_105ed512(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105ed526 Catch@105ed526

void Catch_105ed526(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::ModifyAllSurfs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ed570 FUN_105ed570

void FUN_105ed570(int param_1)

{
  UModel *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108215f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0xa8); iVar1 = iVar1 + 1) {
    if ((*(uint *)(*(int *)(in_ECX + 0xa4) + 4 + iVar1 * 0x44) & 0x2000000) != 0) {
      UModel::ModifySurf(in_ECX,iVar1,param_1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105ed5e9 Catch@105ed5e9

void Catch_105ed5e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105ed5fd Catch@105ed5fd

void Catch_105ed5fd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::ModifySelectedSurfs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ed650 FUN_105ed650

void FUN_105ed650(float param_1,int *param_2,int param_3)

{
  FArray *pFVar1;
  undefined4 uVar2;
  int iVar3;
  FStaticProjectorInfo *this;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  int in_ECX;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  float10 fVar10;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 *local_84;
  undefined1 *local_80;
  void *local_7c;
  undefined1 *puStack_78;
  uint local_74;
  int local_70;
  int local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float *local_18;
  undefined4 *local_14;
  float local_10;
  float local_c;
  FVector *local_8;
  
  puStack_78 = &LAB_10821608;
  local_7c = ExceptionList;
  local_80 = &stack0xffffff10;
  local_74 = 0;
  local_18 = (float *)(*(int *)(in_ECX + 100) + (int)param_1 * 0x78);
  puVar8 = (undefined4 *)(*(int *)(in_ECX + 0xa4) + (int)local_18[7] * 0x44);
  pfVar6 = &local_50;
  ExceptionList = &local_7c;
  local_14 = puVar8;
  FRotator::Vector((FRotator *)(*param_2 + 0x1c8));
  local_8 = (FVector *)(1.0 / (float)*(int *)(*param_2 + 0x3c8));
  local_44 = 0;
  while (iVar7 = local_44, local_44 < (int)local_18[0x1c]) {
    pfVar5 = local_18 + 0x1b;
    iVar3 = thunk_FUN_105eaa30((double)*(float *)(*(int *)(*param_2 + 0xe0) + 0x4bc));
    if (iVar3 == 0) {
      if (*(int *)((int)*pfVar5 + iVar7 * 4) != 0) {
        thunk_FUN_10531bb0();
      }
      thunk_FUN_10326160(iVar7,1);
      iVar7 = iVar7 + -1;
    }
    puVar8 = local_14;
    local_44 = iVar7 + 1;
  }
  if ((puVar8[1] & 0x8000) == 0) {
    this = (FStaticProjectorInfo *)thunk_FUN_103ff710(0x30,L"BSP FStaticProjectorInfo",pfVar6);
    if (this == (FStaticProjectorInfo *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FStaticProjectorInfo::FStaticProjectorInfo(this);
    }
    local_84 = puVar4;
    for (local_20 = 0; local_20 < (int)(uint)*(byte *)((int)local_18 + 0x56);
        local_20 = local_20 + 1) {
      pfVar5 = (float *)thunk_FUN_10371820(0x10);
      pfVar6 = (float *)(*(int *)(in_ECX + 0x94) +
                        *(int *)(*(int *)(in_ECX + 0x74) + -8 +
                                (((int)local_18[6] + (uint)*(byte *)((int)local_18 + 0x56)) -
                                local_20) * 8) * 0xc);
      *pfVar5 = *pfVar6;
      pfVar5[1] = pfVar6[1];
      pfVar5[2] = pfVar6[2];
      local_1c = 1.0;
      if ((*(byte *)(param_2 + 0x57) & 0x10) == 0) {
        local_a4 = -local_50;
        local_1c = -local_4c;
        local_10 = -local_48;
        fVar10 = (float10)thunk_FUN_104a4940(local_18[2] * local_10 +
                                             local_18[1] * local_1c + *local_18 * local_a4);
        local_1c = (float)fVar10;
      }
      param_1 = 1.0;
      if ((*(byte *)(param_2 + 0x57) & 4) != 0) {
        iVar7 = *param_2;
        local_10 = pfVar5[1] - *(float *)(iVar7 + 0x1c0);
        local_c = pfVar5[2] - *(float *)(iVar7 + 0x1c4);
        fVar10 = (float10)thunk_FUN_103704b0(1.0 - (local_48 * local_c +
                                                   local_4c * local_10 +
                                                   local_50 * (*pfVar5 - *(float *)(iVar7 + 0x1bc)))
                                                   * (float)local_8,0);
        param_1 = (float)fVar10;
      }
      pfVar5[3] = param_1 * local_1c;
      puVar8 = local_14;
    }
    puVar4[1] = 0;
    puVar4[0xb] = 0;
    if ((char)param_2[8] == '\0') {
      uVar2 = *puVar8;
      local_c = (float)thunk_FUN_105ea9d0();
      local_8 = (FVector *)thunk_FUN_1040b4c0(uVar2);
      iVar7 = thunk_FUN_105eaa00(uVar2);
      if ((local_8 == (FVector *)0x0) || (((byte)local_8[0x5c0] & 3) == 0)) {
        if (local_c == 0.0) {
          if ((iVar7 != 0) && (*(char *)(iVar7 + 0x57c) == '\x02')) {
            puVar4[1] = uVar2;
            puVar4[0xb] = *(uint *)(iVar7 + 0x580) >> 3 & 1;
          }
        }
        else {
          if (*(int *)((int)local_c + 0x57c) != 0) {
            puVar4[1] = uVar2;
          }
          puVar4[0xb] = *(uint *)((int)local_c + 0x59c) & 1;
        }
      }
      else {
        puVar4[1] = uVar2;
      }
    }
    else {
      puVar4[1] = *puVar8;
    }
    if (puVar4[1] != 0) {
      pfVar6 = (float *)(*(int *)(in_ECX + 0x94) + puVar8[2] * 0xc);
      local_2c = *pfVar6;
      local_28 = pfVar6[1];
      local_24 = pfVar6[2];
      local_8 = (FVector *)(*(int *)(in_ECX + 0x84) + puVar8[4] * 0xc);
      (**(code **)(*(int *)puVar4[1] + 0x78))();
      FVector::operator/(local_8,(float)&local_3c);
      iVar7 = puVar8[5];
      iVar3 = *(int *)(in_ECX + 0x84);
      (**(code **)(*(int *)puVar4[1] + 0x7c))();
      FVector::operator/((FVector *)(iVar3 + iVar7 * 0xc),(float)&local_a4);
      pFVar1 = (FArray *)(puVar4 + 5);
      FArray::Add(pFVar1,puVar4[3],8);
      for (local_6c = 0; local_6c < (int)puVar4[3]; local_6c = local_6c + 1) {
        pfVar6 = (float *)(puVar4[2] + local_6c * 0x10);
        *(float *)(*(int *)pFVar1 + local_6c * 8) =
             local_34 * (pfVar6[2] - local_24) +
             local_38 * (pfVar6[1] - local_28) + (*pfVar6 - local_2c) * local_3c;
        pfVar6 = (float *)(puVar4[2] + local_6c * 0x10);
        local_8 = (FVector *)(pfVar6[1] - local_28);
        local_c = pfVar6[2] - local_24;
        *(float *)(*(int *)pFVar1 + 4 + local_6c * 8) =
             local_9c * local_c + local_a0 * (float)local_8 + (*pfVar6 - local_2c) * local_a4;
      }
    }
    if (param_3 != 0) {
      for (local_30 = 0; iVar7 = local_30, local_30 < 6; local_30 = local_30 + 1) {
        thunk_FUN_105e94a0();
        local_74 = CONCAT31(local_74._1_3_,1);
        for (local_70 = 0; local_70 < (int)puVar4[3]; local_70 = local_70 + 1) {
          pfVar5 = (float *)(local_70 * 0x10 + puVar4[2]);
          pfVar6 = (float *)(iVar7 * 0x10 + param_3);
          *(float *)((int)local_2c + local_70 * 4) =
               (pfVar5[2] * pfVar6[2] + *pfVar5 * *pfVar6 + pfVar5[1] * pfVar6[1]) - pfVar6[3];
        }
        iVar7 = 0;
        param_1 = (float)(puVar4[3] + -1);
        while (iVar3 = iVar7, local_40 = iVar3, iVar3 < (int)puVar4[3]) {
          iVar7 = *(int *)(puVar4 + 2);
          pfVar6 = (float *)((int)param_1 * 0x10 + iVar7);
          local_68 = *pfVar6;
          local_64 = pfVar6[1];
          local_60 = pfVar6[2];
          local_5c = pfVar6[3];
          iVar9 = iVar3 * 0x10;
          local_98 = *(float *)(iVar9 + iVar7);
          local_94 = *(float *)(iVar9 + 4 + iVar7);
          local_90 = *(float *)(iVar9 + 8 + iVar7);
          local_8c = *(float *)(iVar9 + 0xc + iVar7);
          local_c = *(float *)((int)local_2c + iVar3 * 4);
          local_8 = *(FVector **)((int)local_2c + (int)param_1 * 4);
          if (0.0 <= local_c * (float)local_8) {
            iVar7 = iVar3 + 1;
            param_1 = (float)iVar3;
          }
          else {
            local_14 = (undefined4 *)(-(float)local_8 / (local_c - (float)local_8));
            FArray::Insert((FArray *)(puVar4 + 2),iVar3,1,0x10);
            local_3c = (float)local_14 * (local_98 - local_68) + local_68;
            local_38 = (local_94 - local_64) * (float)local_14 + local_64;
            local_34 = local_60 + (local_90 - local_60) * (float)local_14;
            pfVar6 = (float *)(puVar4[2] + iVar9);
            *pfVar6 = local_3c;
            pfVar6[1] = local_38;
            pfVar6[2] = local_34;
            local_8 = (FVector *)(local_5c + (local_8c - local_5c) * (float)local_14);
            *(FVector **)(iVar9 + 0xc + puVar4[2]) = local_8;
            local_10 = local_34;
            local_c = local_38;
            if (puVar4[1] != 0) {
              pFVar1 = (FArray *)(puVar4 + 5);
              FArray::Insert(pFVar1,iVar3,1,8);
              iVar7 = *(int *)pFVar1;
              *(float *)(iVar7 + iVar3 * 8) =
                   *(float *)(iVar7 + iVar3 * 8) +
                   (float)local_14 *
                   (*(float *)(iVar7 + iVar3 * 8) - *(float *)((int)param_1 * 8 + iVar7));
              iVar7 = *(int *)pFVar1;
              *(float *)(iVar7 + 4 + iVar3 * 8) =
                   (*(float *)(iVar7 + 4 + iVar3 * 8) - *(float *)((int)param_1 * 8 + 4 + iVar7)) *
                   (float)local_14 + *(float *)(iVar7 + 4 + iVar3 * 8);
            }
            FArray::Insert((FArray *)&local_2c,iVar3,1,4);
            *(undefined4 *)((int)local_2c + iVar3 * 4) = 0;
            iVar7 = iVar3 + 2;
            param_1 = (float)(iVar3 + 1);
          }
        }
        iVar7 = 0;
        local_58 = 0;
        iVar3 = 0;
        while (local_54 = iVar3, iVar3 < (int)local_28) {
          if (0.0 <= *(float *)((int)local_2c + iVar3 * 4)) {
            iVar7 = iVar7 + 1;
            iVar3 = iVar3 + 1;
            local_58 = iVar7;
          }
          else {
            thunk_FUN_10388260(iVar7,1);
            iVar3 = iVar3 + 1;
          }
        }
        local_74 = local_74 & 0xffffff00;
        thunk_FUN_1038fce0();
      }
    }
    if ((int)puVar4[3] < 1) {
      thunk_FUN_10531bb0();
    }
    else {
      param_2[1] = param_2[1] + 1;
      *puVar4 = param_2;
      thunk_FUN_105ea6d0();
    }
  }
  else {
    thunk_FUN_1052ebb0();
  }
  ExceptionList = local_7c;
  return;
}


// ==== 105edd9a Catch@105edd9a

void Catch_105edd9a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105eddae Catch@105eddae

void Catch_105eddae(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::AttachProjector");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105edfb0 FUN_105edfb0

FArchive * FUN_105edfb0(FArchive *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821620;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FArchive::IsTrans(param_1);
  if (iVar1 == 0) {
    thunk_FUN_105ed1f0(param_1,param_2);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ee007 Catch@105ee007

void Catch_105ee007(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105ee01b Catch@105ee01b

void Catch_105ee01b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TTransArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ee060 FUN_105ee060

FArchive * FUN_105ee060(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FBspVertexStream *pFVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821630;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x1c);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      operator<<(param_1,(FBspVertexStream *)(*(int *)param_2 + iVar3 * 0x1c));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_105ea920(local_18);
    while (iVar3 < local_18) {
      pFVar2 = (FBspVertexStream *)thunk_FUN_105e9880(0x1c,param_2);
      if (pFVar2 == (FBspVertexStream *)0x0) {
        operator<<(param_1,(FBspVertexStream *)0x0);
        iVar3 = iVar3 + 1;
      }
      else {
        pFVar2 = (FBspVertexStream *)FBspVertexStream::FBspVertexStream(pFVar2);
        operator<<(param_1,pFVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ee140 Catch@105ee140

void Catch_105ee140(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105ee154 Catch@105ee154

void Catch_105ee154(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ee1c0 FUN_105ee1c0

FArchive * FUN_105ee1c0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FBspNode *pFVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821640;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x78);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      operator<<(param_1,(FBspNode *)(*(int *)param_2 + iVar3 * 0x78));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_103b4cd0(local_18);
    while (iVar3 < local_18) {
      iVar1 = thunk_FUN_10370af0(0x78,param_2);
      if (iVar1 == 0) {
        operator<<(param_1,(FBspNode *)0x0);
        iVar3 = iVar3 + 1;
      }
      else {
        pFVar2 = (FBspNode *)thunk_FUN_105ed350();
        operator<<(param_1,pFVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ee29e Catch@105ee29e

void Catch_105ee29e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105ee2b2 Catch@105ee2b2

void Catch_105ee2b2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ee320 FUN_105ee320

void FUN_105ee320(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821650;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x68); iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(in_ECX + 100) + iVar3 * 0x78;
    while (iVar2 = *(int *)(iVar1 + 0x70), 0 < iVar2) {
      thunk_FUN_1052ebb0();
      if (*(int *)(*(int *)(iVar1 + 0x6c) + -4 + iVar2 * 4) != 0) {
        thunk_FUN_10531bb0(1);
      }
      thunk_FUN_10326160(iVar2 + -1,1);
    }
  }
  FArray::Empty((FArray *)&DAT_10c79280,4,0);
  UObject::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 105ee3d5 Catch@105ee3d5

void Catch_105ee3d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105ee3e9 Catch@105ee3e9

void Catch_105ee3e9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ee440 FUN_105ee440

void FUN_105ee440(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  UPolys *this;
  undefined4 uVar4;
  UObject *in_ECX;
  int iVar5;
  undefined8 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821660;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x68); iVar2 = iVar2 + 1) {
    iVar5 = *(int *)(in_ECX + 100) + iVar2 * 0x78;
    while (iVar1 = *(int *)(iVar5 + 0x70), 0 < iVar1) {
      thunk_FUN_1052ebb0();
      if (*(int *)(*(int *)(iVar5 + 0x6c) + -4 + iVar1 * 4) != 0) {
        thunk_FUN_10531bb0();
      }
      thunk_FUN_10326160();
    }
  }
  iVar5 = 0;
  thunk_FUN_103f0c40();
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0xb8); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0xb4),0x1c,0);
  FArray::Empty((FArray *)(in_ECX + 0xc0),4,0);
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0xd0); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0xcc),0x14,0);
  thunk_FUN_1038b860();
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0xdc); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0xd8),4,0);
  thunk_FUN_103834f0();
  FArray::Empty((FArray *)(in_ECX + 0x118),4,0);
  if (*(int *)(in_ECX + 0xfc) == 0) {
    thunk_FUN_103831b0();
  }
  else {
    thunk_FUN_103efe50();
  }
  thunk_FUN_103efc60();
  if (param_1 != 0) {
    thunk_FUN_1038b8c0();
    thunk_FUN_1038b8c0();
    thunk_FUN_103b4b30();
  }
  if (param_2 != 0) {
    FName::FName((FName *)&stack0xffffffb8,0);
    pUVar3 = UObject::GetOuter(in_ECX);
    this = UPolys::operator_new(0x44,pUVar3);
    if (this == (UPolys *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = UPolys::UPolys(this);
    }
    *(undefined4 *)(in_ECX + 0x60) = uVar4;
  }
  *(undefined4 *)(in_ECX + 0x134) = 0;
  *(undefined4 *)(in_ECX + 0x130) = 4;
  *(undefined4 *)(in_ECX + 0x134) = 0;
  for (; iVar5 < 0x40; iVar5 = iVar5 + 1) {
    *(undefined4 *)(in_ECX + (iVar5 * 3 + 0x27) * 8) = 0;
    uVar6 = __allshl();
    *(undefined8 *)(in_ECX + iVar5 * 0x18 + 0x140) = uVar6;
    *(undefined4 *)(in_ECX + iVar5 * 0x18 + 0x148) = 0xffffffff;
    *(undefined4 *)(in_ECX + iVar5 * 0x18 + 0x14c) = 0xffffffff;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105ee660 Catch@105ee660

void Catch_105ee660(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 105ee674 Catch@105ee674

void Catch_105ee674(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::EmptyModel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ee730 FUN_105ee730

void FUN_105ee730(int *param_1)

{
  void **ppvVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821670;
  local_10 = ExceptionList;
  iVar2 = 0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xe8) != 0) {
    ExceptionList = &local_10;
    ppvVar1 = &local_10;
    if (param_1 != (int *)0x0) {
      for (; ppvVar1 = ExceptionList, iVar2 < *(int *)(in_ECX + 0xe8); iVar2 = iVar2 + 1) {
        (**(code **)(*param_1 + 0x88))
                  (*(undefined4 *)(*(int *)(in_ECX + 0xe4) + 4 + iVar2 * 0x34),
                   *(undefined4 *)(*(int *)(in_ECX + 0xe4) + 8 + iVar2 * 0x34));
      }
    }
    ExceptionList = ppvVar1;
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x68); iVar2 = iVar2 + 1) {
      *(undefined4 *)(*(int *)(in_ECX + 100) + 0x60 + iVar2 * 0x78) = 0xffffffff;
      *(undefined4 *)(*(int *)(in_ECX + 100) + 100 + iVar2 * 0x78) = 0xffffffff;
    }
    thunk_FUN_103efc60(0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105ee7f0 Catch@105ee7f0

void Catch_105ee7f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105ee804 Catch@105ee804

void Catch_105ee804(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::ClearRenderData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ee860 FUN_105ee860

void FUN_105ee860(void)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  FVector *pFVar4;
  float fVar5;
  UObject *pUVar6;
  int iVar7;
  FBspSection *this;
  float fVar8;
  UModel *in_ECX;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  FCoords local_128 [48];
  float local_f8;
  float local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  undefined1 *local_8c;
  void *local_88;
  undefined1 *puStack_84;
  int local_80;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  FVector *local_14;
  int local_10;
  FVector *local_c;
  float local_8;
  
  puStack_84 = &LAB_10821689;
  local_88 = ExceptionList;
  local_8c = &stack0xfffffecc;
  local_80 = 0;
  ExceptionList = &local_88;
  UModel::ClearRenderData(in_ECX,(URenderDevice *)0x0);
  for (local_2c = 0; local_2c < *(int *)(in_ECX + 0x68); local_2c = local_2c + 1) {
    pfVar3 = (float *)(*(int *)(in_ECX + 100) + local_2c * 0x78);
    local_14 = (FVector *)(*(int *)(in_ECX + 0xa4) + (int)pfVar3[7] * 0x44);
    if (pfVar3[0x1a] == -NAN) {
      local_28 = 0;
    }
    else {
      local_28 = (int)pfVar3[0x1a] * 0xac + *(int *)(in_ECX + 0x10c);
    }
    if (*(int *)local_14 == 0) {
      pUVar6 = UClass::GetDefaultObject(&UMaterial::PrivateStaticClass);
      iVar9 = thunk_FUN_10370560(pUVar6);
      piVar10 = *(int **)(iVar9 + 0x38);
    }
    else {
      piVar10 = *(int **)local_14;
    }
    local_1c = (float)(*(uint *)((int)local_14 + 4) & 0x2400100);
    iVar9 = 0;
    if (local_28 == 0) {
      local_18 = -NAN;
    }
    else {
      local_18 = *(float *)(local_28 + 0x10);
    }
    if (*(char *)((int)pfVar3 + 0x56) != '\0') {
      local_10 = 0;
      while ((iVar7 = local_10, iVar9 < *(int *)(in_ECX + 0xe8) &&
             ((((iVar7 = *(int *)(in_ECX + 0xe4) + iVar9 * 0x34, *(int **)(iVar7 + 0x20) != piVar10
                || (*(float *)(iVar7 + 0x24) != local_1c)) || (*(float *)(iVar7 + 0x28) != local_18)
               ) || (local_c = *(FVector **)(iVar7 + 0x10),
                    0xfffe < (int)((uint)*(byte *)((int)pfVar3 + 0x56) + (int)local_c)))))) {
        iVar9 = iVar9 + 1;
      }
      local_10 = iVar7;
      local_40 = iVar9;
      if (local_10 == 0) {
        this = (FBspSection *)thunk_FUN_10370bc0(0x34,in_ECX + 0xe4);
        if (this == (FBspSection *)0x0) {
          local_10 = 0;
        }
        else {
          local_10 = FBspSection::FBspSection(this);
        }
        *(int **)(local_10 + 0x20) = piVar10;
        *(float *)(local_10 + 0x24) = local_1c;
        *(float *)(local_10 + 0x28) = local_18;
      }
      pfVar3[0x18] = (float)((local_10 - *(int *)(in_ECX + 0xe4)) / 0x34);
      fVar8 = (float)FArray::Add((FArray *)(local_10 + 0xc),(uint)*(byte *)((int)pfVar3 + 0x56),0x28
                                );
      pfVar3[0x19] = fVar8;
      iVar9 = *(int *)(in_ECX + 0x84);
      local_c = (FVector *)(iVar9 + *(int *)((int)local_14 + 0xc) * 0xc);
      pFVar4 = (FVector *)(iVar9 + *(int *)((int)local_14 + 0x14) * 0xc);
      piVar1 = (int *)((int)local_14 + 0x10);
      piVar2 = (int *)((int)local_14 + 8);
      local_14 = pFVar4;
      FCoords::FCoords(local_128,(FVector *)(*(int *)(in_ECX + 0x94) + *piVar2 * 0xc),
                       (FVector *)(iVar9 + *piVar1 * 0xc),pFVar4,local_c);
      pfVar11 = &local_d8;
      FCoords::Matrix(local_128);
      local_80._0_1_ = 1;
      local_c = (FVector *)(**(code **)(*piVar10 + 0x80))(pfVar11);
      local_20 = (float)(int)local_c;
      iVar9 = (**(code **)(*piVar10 + 0x84))();
      fVar8 = local_20;
      local_c = (FVector *)(float)iVar9;
      local_14 = (FVector *)(*(int *)(local_10 + 0xc) + (int)pfVar3[0x19] * 0x28);
      local_18 = 0.0;
      local_1c = 0.0;
      for (local_3c = 0; local_3c < (int)(uint)*(byte *)((int)pfVar3 + 0x56);
          local_3c = local_3c + 1) {
        pfVar11 = (float *)(*(int *)(in_ECX + 0x94) +
                           *(int *)(*(int *)(in_ECX + 0x74) + ((int)pfVar3[6] + local_3c) * 8) * 0xc
                           );
        local_e8 = *pfVar11;
        local_34 = pfVar11[1];
        local_30 = pfVar11[2];
        local_98 = local_d8 * local_e8 + local_34 * local_c8 + local_30 * local_b8 + local_a8;
        local_94 = local_b4 * local_30 + local_d4 * local_e8 + local_c4 * local_34 + local_a4;
        local_90 = local_30 * local_b0 + local_34 * local_c0 + local_d0 * local_e8 + local_a0;
        pfVar11 = (float *)((int)local_14 + local_3c * 0x28);
        *pfVar11 = local_e8;
        pfVar11[1] = local_34;
        pfVar11[2] = local_30;
        pfVar11[6] = local_98 / fVar8;
        local_20 = local_94 / (float)local_c;
        pfVar11[7] = local_20;
        local_18 = local_18 + pfVar11[6];
        local_1c = local_20 + local_1c;
        if (local_28 != 0) {
          local_f8 = *pfVar11;
          local_24 = pfVar11[1];
          fVar5 = pfVar11[2];
          local_74 = *(float *)(local_28 + 0x30) * local_f8 + local_24 * *(float *)(local_28 + 0x40)
                     + fVar5 * *(float *)(local_28 + 0x50) + *(float *)(local_28 + 0x60);
          local_70 = *(float *)(local_28 + 0x54) * fVar5 +
                     *(float *)(local_28 + 0x44) * local_24 + *(float *)(local_28 + 0x34) * local_f8
                     + *(float *)(local_28 + 100);
          local_6c = fVar5 * *(float *)(local_28 + 0x58) +
                     local_24 * *(float *)(local_28 + 0x48) + *(float *)(local_28 + 0x38) * local_f8
                     + *(float *)(local_28 + 0x68);
          pfVar11[8] = ((float)*(int *)(local_28 + 0x1c) + local_74) * 0.001953125;
          pfVar11[9] = ((float)*(int *)(local_28 + 0x20) + local_70) * 0.001953125;
          local_50 = local_74;
          local_4c = local_70;
          local_48 = local_6c;
          local_20 = local_f8;
        }
        pfVar11[3] = *pfVar3;
        pfVar11[4] = pfVar3[1];
        pfVar11[5] = pfVar3[2];
        local_68 = local_98;
        local_64 = local_94;
        local_60 = local_90;
        local_38 = local_e8;
      }
      local_8 = local_18 / (float)*(byte *)((int)pfVar3 + 0x56);
      iVar9 = appRound(local_8);
      local_24 = (float)iVar9;
      local_8 = local_1c / (float)*(byte *)((int)pfVar3 + 0x56);
      iVar9 = appRound(local_8);
      local_8 = (float)iVar9;
      for (local_54 = 0; local_54 < (int)(uint)*(byte *)((int)pfVar3 + 0x56);
          local_54 = local_54 + 1) {
        iVar9 = (int)local_14 + local_54 * 0x28;
        *(float *)(iVar9 + 0x18) = *(float *)(iVar9 + 0x18) - local_24;
        *(float *)(iVar9 + 0x1c) = *(float *)(iVar9 + 0x1c) - local_8;
      }
      *(int *)(local_10 + 0x1c) = *(int *)(local_10 + 0x1c) + 1;
      *(int *)(local_10 + 0x18) = *(int *)(local_10 + 0x18) + 1;
      local_80 = (uint)local_80._1_3_ << 8;
      FMatrix::~FMatrix((FMatrix *)&local_d8);
    }
  }
  ExceptionList = local_88;
  return;
}


// ==== 105eed1b Catch@105eed1b

void Catch_105eed1b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x24,&DAT_10914c48);
}


// ==== 105eed2f Catch@105eed2f

void Catch_105eed2f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::BuildRenderData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105eee90 FUN_105eee90

FArchive * FUN_105eee90(FArchive *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108216a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FArchive::IsTrans(param_1);
  if (iVar1 == 0) {
    thunk_FUN_105ee1c0(param_1,param_2);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105eeee7 Catch@105eeee7

void Catch_105eeee7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105eeefb Catch@105eeefb

void Catch_105eeefb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TTransArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105eef40 FUN_105eef40

FArchive * FUN_105eef40(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FBspSection *pFVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108216b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x34);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      operator<<(param_1,(FBspSection *)(iVar3 * 0x34 + *(int *)param_2));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_103efc60(local_18);
    while (iVar3 < local_18) {
      pFVar2 = (FBspSection *)thunk_FUN_10370bc0(0x34,param_2);
      if (pFVar2 == (FBspSection *)0x0) {
        operator<<(param_1,(FBspSection *)0x0);
        iVar3 = iVar3 + 1;
      }
      else {
        pFVar2 = (FBspSection *)FBspSection::FBspSection(pFVar2);
        operator<<(param_1,pFVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ef019 Catch@105ef019

void Catch_105ef019(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105ef02d Catch@105ef02d

void Catch_105ef02d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ef090 FUN_105ef090

FArchive * FUN_105ef090(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FMultiLightMapTexture *pFVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108216c0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x1c);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      operator<<(param_1,(FMultiLightMapTexture *)(*(int *)param_2 + iVar3 * 0x1c));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_103efe50(local_18);
    while (iVar3 < local_18) {
      pFVar2 = (FMultiLightMapTexture *)thunk_FUN_10370be0(0x1c,param_2);
      if (pFVar2 == (FMultiLightMapTexture *)0x0) {
        operator<<(param_1,(FMultiLightMapTexture *)0x0);
        iVar3 = iVar3 + 1;
      }
      else {
        pFVar2 = (FMultiLightMapTexture *)FMultiLightMapTexture::FMultiLightMapTexture(pFVar2);
        operator<<(param_1,pFVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ef170 Catch@105ef170

void Catch_105ef170(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105ef184 Catch@105ef184

void Catch_105ef184(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ef1f0 FUN_105ef1f0

FArchive * FUN_105ef1f0(FArchive *param_1,int *param_2)

{
  int iVar1;
  FLightMap *pFVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108216d0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_105e9730(param_1);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 1));
    for (; iVar3 < param_2[1]; iVar3 = iVar3 + 1) {
      operator<<(param_1,(FLightMap *)(iVar3 * 0xac + *param_2));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_103834f0(local_18);
    while (iVar3 < local_18) {
      pFVar2 = (FLightMap *)thunk_FUN_10370c10(0xac,param_2);
      if (pFVar2 == (FLightMap *)0x0) {
        operator<<(param_1,(FLightMap *)0x0);
        iVar3 = iVar3 + 1;
      }
      else {
        pFVar2 = (FLightMap *)FLightMap::FLightMap(pFVar2);
        operator<<(param_1,pFVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ef2cc Catch@105ef2cc

void Catch_105ef2cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105ef2e0 Catch@105ef2e0

void Catch_105ef2e0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ef340 FUN_105ef340

void FUN_105ef340(FArchive *param_1)

{
  UPrimitive *pUVar1;
  FArchive *this;
  undefined4 uVar2;
  UPrimitive *in_ECX;
  int iVar3;
  FBspVertexStream local_54 [28];
  undefined1 local_38 [12];
  TArray<unsigned_char> local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  this = param_1;
  puStack_c = &LAB_10821718;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  local_8 = 0;
  ExceptionList = &local_10;
  UPrimitive::Serialize(in_ECX,param_1);
  uVar2 = thunk_FUN_105ecf30(this,in_ECX + 0x84,in_ECX + 0x94,in_ECX + 100,in_ECX + 0xa4,
                             in_ECX + 0x74,in_ECX + 0x130,in_ECX + 0x134);
  uVar2 = thunk_FUN_105ecf30(uVar2);
  uVar2 = thunk_FUN_105eee90(uVar2);
  uVar2 = thunk_FUN_105edfb0(uVar2);
  uVar2 = thunk_FUN_105eb400(uVar2);
  uVar2 = thunk_FUN_10330040(uVar2);
  thunk_FUN_10330040(uVar2);
  for (iVar3 = 0; local_18 = iVar3, iVar3 < *(int *)(in_ECX + 0x134); iVar3 = iVar3 + 1) {
    thunk_FUN_105e99b0(this,in_ECX + (iVar3 * 3 + 0x27) * 8);
  }
  pUVar1 = in_ECX + 0x60;
  thunk_FUN_105e9f40(this,pUVar1);
  if (*(int *)pUVar1 != 0) {
    iVar3 = FArchive::IsTrans(this);
    if (iVar3 == 0) {
      (**(code **)(*(int *)this + 0x10))(*(int *)pUVar1);
    }
  }
  iVar3 = FArchive::Ver(this);
  if (iVar3 < 0x5c) {
    thunk_FUN_105e95d0();
    local_8._0_1_ = 1;
    TArray<unsigned_char>::TArray<unsigned_char>(local_2c);
    local_8._0_1_ = 2;
    uVar2 = thunk_FUN_105ed0a0(this,local_38,local_2c);
    thunk_FUN_10378f20(uVar2);
    local_8._0_1_ = 1;
    TArray<unsigned_char>::~TArray<unsigned_char>(local_2c);
  }
  else {
    iVar3 = FArchive::Ver(this);
    if (0x68 < iVar3) goto LAB_105ef4d1;
    thunk_FUN_105e95d0();
    local_8._0_1_ = 3;
    thunk_FUN_10369010();
    local_8._0_1_ = 4;
    uVar2 = thunk_FUN_105ed0a0(this,local_2c,local_38);
    thunk_FUN_103ede00(uVar2);
    local_8._0_1_ = 3;
    thunk_FUN_103edd90();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_105ed030();
LAB_105ef4d1:
  uVar2 = thunk_FUN_105eb280(this,in_ECX + 0xb4,in_ECX + 0xc0,in_ECX + 0xcc,in_ECX + 0xd8);
  uVar2 = thunk_FUN_1038f880(uVar2);
  uVar2 = thunk_FUN_105eb4b0(uVar2);
  thunk_FUN_105eb600(uVar2);
  uVar2 = thunk_FUN_10330040(this,in_ECX + 0x124,in_ECX + 0x128);
  thunk_FUN_10330040(uVar2);
  iVar3 = FArchive::Ver(this);
  if (0x5b < iVar3) {
    iVar3 = FArchive::Ver(this);
    if (iVar3 < 0x5d) {
      FBspVertexStream::FBspVertexStream(local_54);
      local_8._0_1_ = 5;
      operator<<(this,local_54);
      local_8 = (uint)local_8._1_3_ << 8;
      FBspVertexStream::~FBspVertexStream(local_54);
    }
    else {
      iVar3 = FArchive::Ver(this);
      if (iVar3 < 0x69) {
        thunk_FUN_105e9620();
        local_8._0_1_ = 6;
        thunk_FUN_105ee060(this,local_38);
        local_8 = (uint)local_8._1_3_ << 8;
        thunk_FUN_105eb750();
      }
      else {
        thunk_FUN_105eef40(this,in_ECX + 0xe4);
      }
    }
  }
  iVar3 = FArchive::Ver(this);
  if (0x68 < iVar3) {
    iVar3 = FArchive::Ver(this);
    if (iVar3 < 0x6b) {
      thunk_FUN_10583790();
      local_8._0_1_ = 7;
      thunk_FUN_10583e50(this,local_38);
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_10391be0();
    }
  }
  iVar3 = FArchive::Ver(this);
  if (0x68 < iVar3) {
    thunk_FUN_105ef1f0(this,in_ECX + 0x10c);
    iVar3 = FArchive::Ver(this);
    if (iVar3 < 0x6b) {
      iVar3 = FArchive::IsLoading(this);
      if (iVar3 != 0) {
        thunk_FUN_103834f0(0);
      }
    }
  }
  iVar3 = FArchive::Ver(this);
  if (0x6a < iVar3) {
    iVar3 = FArchive::Ver(this);
    if (iVar3 < 0x6e) {
      param_1 = (FArchive *)0x0;
      thunk_FUN_10330040(this,&param_1);
    }
  }
  iVar3 = FArchive::LicenseeVer(this);
  if (iVar3 < 9) {
    iVar3 = FArchive::Ver(this);
    if (0x6d < iVar3) {
      thunk_FUN_103b0010(this,in_ECX + 0x100);
      iVar3 = FArchive::IsLoading(this);
      if (iVar3 != 0) {
        *(undefined4 *)(in_ECX + 0xfc) = 0;
      }
      FArchive::IsLoading(this);
    }
  }
  else {
    thunk_FUN_105ef090(this,in_ECX + 0xf0);
    iVar3 = FArchive::IsLoading(this);
    if (iVar3 != 0) {
      *(undefined4 *)(in_ECX + 0xfc) = 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105ef6ec Catch@105ef6ec

void Catch_105ef6ec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105ef700 Catch@105ef700

void Catch_105ef700(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ef820 FUN_105ef820

void FUN_105ef820(int *param_1,undefined4 param_2)

{
  UPrimitive *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10821857;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UPrimitive::UPrimitive(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = UModel::vftable;
  thunk_FUN_103f90b0(in_ECX,0);
  local_8._0_1_ = 1;
  thunk_FUN_103b0220(in_ECX,0);
  local_8._0_1_ = 2;
  thunk_FUN_10392300(in_ECX,0);
  local_8._0_1_ = 3;
  thunk_FUN_10392300(in_ECX,0);
  local_8._0_1_ = 4;
  thunk_FUN_103f6370(in_ECX,0);
  local_8._0_1_ = 5;
  FArray::FArray((FArray *)(in_ECX + 0xb4));
  local_8._0_1_ = 7;
  FArray::FArray((FArray *)(in_ECX + 0xc0));
  local_8._0_1_ = 9;
  FArray::FArray((FArray *)(in_ECX + 0xcc));
  local_8._0_1_ = 0xb;
  FArray::FArray((FArray *)(in_ECX + 0xd8));
  local_8._0_1_ = 0xd;
  FArray::FArray((FArray *)(in_ECX + 0xe4));
  local_8._0_1_ = 0xf;
  FArray::FArray((FArray *)(in_ECX + 0xf0));
  local_8._0_1_ = 0x11;
  FArray::FArray((FArray *)(in_ECX + 0x100));
  local_8._0_1_ = 0x13;
  FArray::FArray((FArray *)(in_ECX + 0x10c));
  local_8._0_1_ = 0x15;
  FArray::FArray((FArray *)(in_ECX + 0x118));
  *(undefined4 *)(in_ECX + 0x124) = param_2;
  local_8 = CONCAT31(local_8._1_3_,0x18);
  UObject::SetFlags((UObject *)in_ECX,1);
  UModel::EmptyModel((UModel *)in_ECX,1,1);
  if (param_1 != (int *)0x0) {
    param_1[0x9e] = (int)in_ECX;
    (**(code **)(*param_1 + 0x324))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 105ef9ac Catch@105ef9ac

void Catch_105ef9ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105ef9c0 Catch@105ef9c0

void Catch_105ef9c0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::UModel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105efa50 FUN_105efa50

float FUN_105efa50(float param_1)

{
  FVector::SizeSquared((FVector *)&stack0x00000008);
  FVector::operator/((FVector *)&stack0x00000008,param_1);
  return param_1;
}


// ==== 105efa80 FUN_105efa80

void FUN_105efa80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FProxyRI::vftable;
                    /* WARNING: Could not recover jumptable at 0x105efa8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)in_ECX[1] + 4))();
  return;
}


// ==== 105efaa0 FUN_105efaa0

void FUN_105efaa0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efaa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(in_ECX + 4))();
  return;
}


// ==== 105efab0 FUN_105efab0

void FUN_105efab0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 4))();
  return;
}


// ==== 105efac0 FUN_105efac0

void FUN_105efac0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 8))();
  return;
}


// ==== 105efad0 FUN_105efad0

void FUN_105efad0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0xc))();
  return;
}


// ==== 105efae0 FUN_105efae0

void FUN_105efae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 4) + 0x10))(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ==== 105efb20 FUN_105efb20

void FUN_105efb20(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0x14))();
  return;
}


// ==== 105efb30 FUN_105efb30

void FUN_105efb30(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0x18))();
  return;
}


// ==== 105efb40 FUN_105efb40

void FUN_105efb40(void)

{
  return;
}


// ==== 105efb50 FUN_105efb50

void FUN_105efb50(void)

{
  return;
}


// ==== 105efb60 FUN_105efb60

void FUN_105efb60(void)

{
  return;
}


// ==== 105efb70 FUN_105efb70

void FUN_105efb70(void)

{
  return;
}


// ==== 105efb80 FUN_105efb80

void FUN_105efb80(void)

{
  return;
}


// ==== 105efb90 FUN_105efb90

void FUN_105efb90(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efb9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0x84))();
  return;
}


// ==== 105efba0 FUN_105efba0

void FUN_105efba0(void)

{
  return;
}


// ==== 105efbb0 FUN_105efbb0

void FUN_105efbb0(void)

{
  return;
}


// ==== 105efbc0 FUN_105efbc0

void FUN_105efbc0(void)

{
  return;
}


// ==== 105efbd0 FUN_105efbd0

void FUN_105efbd0(undefined4 param_1)

{
  code *pcVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  void *apvStack_54 [6];
  FMatrix aFStack_3c [40];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108218d9;
  pvStack_c = ExceptionList;
  local_4 = 0;
  pcVar1 = *(code **)(**(int **)(in_ECX + 4) + 0x40);
  puVar3 = (undefined4 *)&stack0x00000008;
  ppvVar4 = apvStack_54;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppvVar4 = (void *)*puVar3;
    puVar3 = puVar3 + 1;
    ppvVar4 = ppvVar4 + 1;
  }
  ExceptionList = &pvStack_c;
  (*pcVar1)(param_1);
  apvStack_54[3] = (void *)0xffffffff;
  FMatrix::~FMatrix(aFStack_3c);
  ExceptionList = apvStack_54[1];
  return;
}


// ==== 105efc50 FUN_105efc50

void FUN_105efc50(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 4) + 0x9c))(param_1);
  return;
}


// ==== 105efc70 FUN_105efc70

void FUN_105efc70(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 4) + 0xa0))(param_1);
  return;
}


// ==== 105efc90 FUN_105efc90

void FUN_105efc90(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efc9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0x94))();
  return;
}


// ==== 105efca0 FUN_105efca0

void FUN_105efca0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efcab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0x98))();
  return;
}


// ==== 105efcb0 FUN_105efcb0

void FUN_105efcb0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
  return;
}


// ==== 105efcc0 FUN_105efcc0

void FUN_105efcc0(void)

{
  int in_ECX;
  undefined4 uStack00000010;
  
  uStack00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x105efcd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0xa4))();
  return;
}


// ==== 105efce0 FUN_105efce0

void FUN_105efce0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0xa8))();
  return;
}


// ==== 105efcf0 FUN_105efcf0

void FUN_105efcf0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efcfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0xac))();
  return;
}


// ==== 105efd00 FUN_105efd00

void FUN_105efd00(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efd0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0xb0))();
  return;
}


// ==== 105efd10 FUN_105efd10

void FUN_105efd10(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x105efd1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0xb4))();
  return;
}


// ==== 105efd20 FUN_105efd20

void FUN_105efd20(void)

{
  return;
}


// ==== 105efd30 FUN_105efd30

undefined4 FUN_105efd30(void)

{
  return 0;
}


// ==== 105efd40 FUN_105efd40

void FUN_105efd40(UViewport *param_1,int param_2,undefined4 param_3)

{
  FLevelSceneNode *in_ECX;
  void *unaff_ESI;
  byte unaff_DI;
  undefined1 local_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108218f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FLevelSceneNode::FLevelSceneNode(in_ECX,param_1,(FRenderTarget *)(param_1 + 0xdc));
  local_4 = 0;
  *(undefined ***)in_ECX = FLightMapSceneNode::vftable;
  *(undefined4 *)(in_ECX + 0x1e4) = param_3;
  UModel::PointRegion(*(UModel **)(in_ECX + 0x1d0),local_18,*(undefined4 *)(param_2 + 0xe0),
                      *(undefined4 *)(param_2 + 0x1bc),*(undefined4 *)(param_2 + 0x1c0),
                      *(undefined4 *)(param_2 + 0x1c4));
  *(int *)(in_ECX + 0x1d4) = param_2;
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(in_ECX + 0x198) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(param_2 + 0x1c4);
  *(uint *)(in_ECX + 0x1d8) = (uint)unaff_DI;
  ExceptionList = unaff_ESI;
  return;
}


// ==== 105efe50 FUN_105efe50

void FUN_105efe50(void)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10821918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FLightMapSceneNode::vftable;
  local_4 = 0xffffffff;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105efea0 FUN_105efea0

void FUN_105efea0(void)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10821940;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FLightMapSceneNode::vftable;
  local_4 = 0xffffffff;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105efef0 FUN_105efef0

void FUN_105efef0(void)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10821960;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FLightMapSceneNode::vftable;
  local_4 = 0xffffffff;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105eff40 FUN_105eff40

void FUN_105eff40(void)

{
  FMatrix *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10821979;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105efff0 FUN_105efff0

void FUN_105efff0(void)

{
  undefined4 *in_ECX;
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  in_ECX[0x15] = 0x3f800000;
  in_ECX[0x16] = 0x3f800000;
  *in_ECX = 0x46;
  in_ECX[0xe] = 0x45800000;
  in_ECX[0x13] = 0;
  in_ECX[0xf] = 0x45800000;
  in_ECX[0x14] = 4;
  in_ECX[0x11] = 0x45800000;
  *(undefined1 *)((int)in_ECX + 0x35) = 0;
  in_ECX[0x12] = 0x45800000;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  in_ECX[0x17] = 0x1e;
  in_ECX[2] = 0x3e9e00d2;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 2;
  in_ECX[3] = 0x3f1c01a3;
  *(undefined1 *)(in_ECX + 0x1a) = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  in_ECX[4] = 0x3da7ef9e;
  *(undefined1 *)((int)in_ECX + 0x71) = 0;
  *(undefined1 *)((int)in_ECX + 0x72) = 0;
  in_ECX[0x54] = 0x400ccccd;
  *(undefined1 *)((int)in_ECX + 0x73) = 0;
  *(undefined1 *)(in_ECX + 0x1d) = 0;
  *(undefined1 *)((int)in_ECX + 0x75) = 0;
  in_ECX[0x55] = 0x3f800000;
  *(undefined1 *)((int)in_ECX + 0x76) = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x57] = 0x41200000;
  *(undefined1 *)(in_ECX + 0x1f) = 0;
  *(undefined1 *)((int)in_ECX + 0x7d) = 0;
  *(undefined1 *)(in_ECX + 0x20) = 0;
  local_60 = 0;
  *(undefined1 *)((int)in_ECX + 0x81) = 0;
  local_5c = 0;
  *(undefined1 *)((int)in_ECX + 0x82) = 0;
  local_58 = 0;
  *(undefined1 *)((int)in_ECX + 0x83) = 0;
  local_54 = 0;
  in_ECX[0x21] = 0;
  local_50 = 0;
  in_ECX[0x22] = 0;
  local_4c = 0;
  in_ECX[0x1b] = 0x80;
  *(undefined1 *)(in_ECX + 0x23) = 0;
  local_48 = 0xc0000000;
  *(undefined1 *)((int)in_ECX + 0x8d) = 0;
  local_38 = 0xc0000000;
  *(undefined1 *)((int)in_ECX + 0x8e) = 0;
  in_ECX[0x52] = 0;
  local_44 = 0;
  *(undefined1 *)(in_ECX + 0x53) = 0;
  local_40 = 0;
  in_ECX[1] = 0;
  local_3c = 0;
  *(undefined1 *)(in_ECX + 0xd) = 0;
  *(undefined1 *)((int)in_ECX + 0x14d) = 0;
  local_34 = 0x41300000;
  *(undefined1 *)(in_ECX + 0x56) = 0;
  in_ECX[0x58] = 0;
  local_30 = 0xc0000000;
  in_ECX[0x59] = 0;
  local_20 = 0xc0000000;
  *(undefined1 *)(in_ECX + 0x5a) = 0;
  in_ECX[0x17c] = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar4 = 5;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  puVar1 = &local_60;
  puVar3 = in_ECX + 0x25;
  do {
    puVar3[-1] = puVar1[-1];
    iVar4 = iVar4 + -1;
    *puVar3 = *puVar1;
    puVar3[1] = puVar1[1];
    puVar3[2] = puVar1[2];
    puVar3[3] = puVar1[3];
    puVar1 = puVar1 + 5;
    puVar3 = puVar3 + 5;
  } while (iVar4 != 0);
  in_ECX[0x3d] = 0x40400000;
  in_ECX[0x44] = 0;
  iVar4 = 0x100;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0x40a00000;
  in_ECX[0x40] = 0x3f000000;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0x437f0000;
  in_ECX[0x43] = 0x437f0000;
  in_ECX[0x45] = 1;
  in_ECX[0x46] = 1;
  in_ECX[0x47] = 1;
  in_ECX[0x48] = 1;
  in_ECX[0x49] = 1;
  in_ECX[0x4a] = 1;
  in_ECX[0x4b] = 1;
  in_ECX[0x4c] = 1;
  in_ECX[0x4d] = 1;
  in_ECX[0x4e] = 1;
  in_ECX[0x4f] = 1;
  in_ECX[0x50] = 1;
  in_ECX[0x51] = 1;
  *(undefined1 *)((int)in_ECX + 0x169) = 0;
  *(undefined1 *)((int)in_ECX + 0x16a) = 0;
  in_ECX[0x69] = 0;
  puVar2 = (undefined1 *)((int)in_ECX + 0x1a9);
  do {
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  in_ECX[0x16b] = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x16a) = 0;
  in_ECX[0x16c] = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x17b) = 0;
  in_ECX[0x16d] = 0x3f800000;
  in_ECX[0x16e] = 0x3f800000;
  in_ECX[0x173] = 0x3f800000;
  in_ECX[0x174] = 0x3f800000;
  in_ECX[0x175] = 0x3f800000;
  in_ECX[0x176] = 0x3f800000;
  in_ECX[0x16f] = 0;
  in_ECX[0x170] = 0;
  in_ECX[0x171] = 0;
  in_ECX[0x172] = 0;
  in_ECX[0x177] = 0;
  in_ECX[0x178] = 0;
  in_ECX[0x179] = 0;
  in_ECX[0x17a] = 0;
  return;
}


// ==== 105f03d0 FUN_105f03d0

void FUN_105f03d0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821999;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105f0480 FUN_105f0480

void FUN_105f0480(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
                 float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  void *local_64;
  undefined1 *puStack_60;
  undefined4 local_5c;
  float local_48;
  float local_44;
  float local_40;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  
  puStack_60 = &LAB_108219b0;
  local_64 = ExceptionList;
  local_5c = 0;
  local_48 = param_2[1] * param_3[2] - param_2[2] * param_3[1];
  local_44 = param_2[2] * *param_3 - *param_2 * param_3[2];
  local_40 = *param_2 * param_3[1] - *param_3 * param_2[1];
  ExceptionList = &local_64;
  local_14 = local_48;
  local_10 = local_44;
  local_8 = local_40;
  FVector::SafeNormal((FVector *)&local_48);
  fVar2 = 1.0 / (local_18 * param_6 + param_5 * local_1c + local_20 * param_4);
  param_7 = (param_6 * param_1[2] + *param_1 * param_4 + param_1[1] * param_5) - param_7;
  *param_1 = *param_1 - fVar2 * param_7 * local_20;
  param_1[1] = param_1[1] - local_1c * param_7 * fVar2;
  param_1[2] = param_1[2] - param_7 * local_18 * fVar2;
  fVar1 = param_2[2] * param_6 + param_5 * param_2[1] + *param_2 * param_4;
  *param_2 = *param_2 - fVar1 * local_20 * fVar2;
  param_2[1] = param_2[1] - local_1c * fVar1 * fVar2;
  param_2[2] = param_2[2] - local_18 * fVar1 * fVar2;
  fVar1 = param_6 * param_3[2] + param_3[1] * param_5 + *param_3 * param_4;
  *param_3 = *param_3 - fVar1 * local_20 * fVar2;
  param_3[1] = param_3[1] - fVar1 * local_1c * fVar2;
  param_3[2] = param_3[2] - fVar2 * local_18 * fVar1;
  ExceptionList = local_64;
  return;
}


// ==== 105f0702 Catch@105f0702

void Catch_105f0702(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x28) = *(undefined4 *)(unaff_EBP + 0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x28,&DAT_10914c48);
}


// ==== 105f0716 Catch@105f0716

void Catch_105f0716(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FTexCoordsProjectToPlane");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f07e0 FUN_105f07e0

void FUN_105f07e0(float param_1,float param_2,float param_3,float param_4)

{
  float *in_ECX;
  
  *in_ECX = 1.0 / param_1;
  in_ECX[1] = 0.0;
  in_ECX[2] = 0.0;
  in_ECX[3] = 0.0;
  in_ECX[4] = 0.0;
  in_ECX[5] = 1.0 / param_2;
  in_ECX[6] = 0.0;
  in_ECX[7] = 0.0;
  in_ECX[8] = 0.0;
  in_ECX[9] = 0.0;
  in_ECX[0xb] = 0.0;
  in_ECX[0xc] = 0.0;
  in_ECX[0xd] = 0.0;
  in_ECX[10] = param_3;
  in_ECX[0xe] = param_3 * param_4;
  in_ECX[0xf] = 1.0;
  return;
}


// ==== 105f08a0 FUN_105f08a0

void FUN_105f08a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  FSphere aFStack_24 [12];
  undefined4 uStack_18;
  
  *in_ECX = FProxyRI::vftable;
  in_ECX[1] = param_1;
  uStack_18 = 0x105f08ba;
  (**(code **)*param_1)();
  iVar1 = *(int *)in_ECX[1];
  FSphere::FSphere(aFStack_24,0,0,0,0);
  (**(code **)(iVar1 + 0x24))(1,0,0,0,0);
  (**(code **)(*(int *)in_ECX[1] + 0x20))(0xff000000);
  return;
}


// ==== 105f0960 FUN_105f0960

byte FUN_105f0960(int param_1)

{
  if (((*(byte *)(DAT_10b221f0 + 0x10) & 0x10) != 0) &&
     (((char)*(uint *)(param_1 + 0x368) < '\0' || ((*(uint *)(param_1 + 0x368) & 0x100) != 0)))) {
    return 0;
  }
  return *(byte *)(param_1 + 0x2e4) >> 1 & 1;
}


// ==== 105f09b0 FUN_105f09b0

void FUN_105f09b0(int *param_1)

{
  byte bVar1;
  FLevelSceneNode *in_ECX;
  undefined **ppuStack_2c;
  int *local_28;
  void *pvStack_24;
  uint uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_108219e8;
  pvStack_c = ExceptionList;
  if ((*(int *)(*(int *)(in_ECX + 4) + 0x3c) == 0) ||
     (*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x3c) + 0x5b8) != 8)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  uStack_20 = ~(-(uint)bVar1 & 0xf);
  pvStack_24 = (void *)0x1;
  local_28 = (int *)0x3f7fff00;
  ppuStack_2c = (undefined **)0x1;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x10))(1,0xffffffff);
  thunk_FUN_105f08a0(param_1);
  FLevelSceneNode::Render(in_ECX,(FRenderInterface *)&ppuStack_2c);
  ppuStack_2c = FProxyRI::vftable;
  (**(code **)(*local_28 + 4))();
  ExceptionList = pvStack_24;
  return;
}


// ==== 105f0ab0 FUN_105f0ab0

void FUN_105f0ab0(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FLevelSceneNode::FLevelSceneNode(in_ECX,param_1);
  *(undefined ***)in_ECX = FLightMapSceneNode::vftable;
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  ExceptionList = local_c;
  return;
}


// ==== 105f0b30 FUN_105f0b30

void FUN_105f0b30(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  
  FLevelSceneNode::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  return;
}


// ==== 105f0b60 FUN_105f0b60

void FUN_105f0b60(byte param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10821a28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FLightMapSceneNode::vftable;
  local_4 = 0xffffffff;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 105f0bd0 FUN_105f0bd0

FLevelSceneNode * FUN_105f0bd0(byte param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821a48;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x1e8,*(int *)(in_ECX + -4),FLightMapSceneNode::~FLightMapSceneNode);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FLightMapSceneNode::vftable;
  local_4 = 0xffffffff;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 105f0cb0 FUN_105f0cb0

FLightMapSceneNode *
FUN_105f0cb0(UViewport *param_1,AActor *param_2,int param_3,FLightMap *param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  float *pfVar1;
  undefined4 *puVar2;
  FVector *pFVar3;
  FVector *pFVar4;
  FVector *pFVar5;
  FCoords *this;
  FMatrix *pFVar6;
  FLightMapSceneNode *in_ECX;
  int iVar7;
  FMatrix *this_00;
  float *pfVar8;
  code *pcVar9;
  FLightMapSceneNode *pFVar10;
  undefined4 *puVar11;
  FMatrix *pFVar12;
  float fVar13;
  undefined4 auStack_554 [15];
  undefined4 uStack_518;
  FMatrix *pFStack_514;
  undefined4 auStack_510 [15];
  undefined4 uStack_4d4;
  FMatrix *pFStack_4d0;
  FMatrix *pFStack_4cc;
  float afStack_4c8 [15];
  undefined4 uStack_48c;
  FMatrix *pFStack_488;
  float afStack_484 [15];
  undefined4 uStack_448;
  FMatrix *pFStack_444;
  float afStack_440 [15];
  undefined4 uStack_404;
  FMatrix *pFStack_400;
  FMatrix *pFStack_3fc;
  undefined4 auStack_3f8 [9];
  undefined4 uStack_3d4;
  undefined4 *puStack_3d0;
  float *pfStack_3cc;
  float afStack_3b0 [8];
  undefined4 uStack_390;
  float *pfStack_38c;
  float *pfStack_388;
  float *pfStack_384;
  undefined4 local_380;
  float local_37c;
  float local_378;
  FMatrix local_35c [64];
  FMatrix local_31c [64];
  float local_2dc;
  float local_2cc;
  float local_2bc;
  float local_2ac;
  float local_29c;
  float local_28c;
  float local_27c;
  undefined4 local_26c [5];
  float local_258 [11];
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  float local_220;
  undefined4 local_21c;
  float local_218 [9];
  float local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  FMatrix local_1d8 [64];
  float local_198 [4];
  undefined4 local_188;
  float local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  float local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_124;
  float local_120;
  float local_11c;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  void *local_64;
  undefined1 *puStack_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  undefined8 local_2c;
  float local_24;
  float local_20;
  float fStack_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  FLightMapSceneNode *local_8;
  
  local_5c = 0xffffffff;
  puStack_60 = &LAB_10821b27;
  local_64 = ExceptionList;
  local_68 = &stack0xfffffc98;
  local_378 = 4.3988965e-29;
  ExceptionList = &local_64;
  local_8 = in_ECX;
  FLightMapSceneNode::FLightMapSceneNode(in_ECX,param_1,param_2,param_4);
  *(undefined ***)in_ECX = FPointLightMapSceneNode::vftable;
  local_5c._0_1_ = 1;
  local_5c._1_3_ = 0;
  FMatrix::Inverse((FMatrix *)(*(int *)(in_ECX + 0x1e4) + 0x30));
  local_5c._0_1_ = 2;
  local_29c = (float)((param_7 - param_5) + 1);
  local_2ac = (float)param_5 + (local_29c + 1.0) * 0.5;
  local_70 = (float)((param_8 - param_6) + 1);
  local_110 = (local_70 + 1.0) * 0.5 + (float)param_6;
  local_e8 = local_e8 * 0.0;
  local_134 = local_110 * local_f8 + local_108 * local_2ac + local_e8 + local_d8;
  local_e4 = local_e4 * 0.0;
  local_130 = local_d4 + local_104 * local_2ac + local_f4 * local_110 + local_e4;
  local_e0 = local_e0 * 0.0;
  local_12c = local_d0 + local_110 * local_f0 + local_100 * local_2ac + local_e0;
  local_29c = local_29c * 0.5;
  local_40 = local_d8 * 0.0;
  local_2c = (double)local_40;
  local_124 = local_f8 * 0.0 + local_108 * local_29c + local_e8 + local_40;
  local_120 = local_f4 * 0.0 + local_104 * local_29c + local_e4 + local_d4 * 0.0;
  local_11c = local_f0 * 0.0 + local_100 * local_29c + local_e0 + local_d0 * 0.0;
  local_74 = 0;
  local_70 = local_70 * 0.5;
  local_26c[0] = 0;
  local_40 = local_108 * 0.0 + local_70 * local_f8 + local_e8 + local_40;
  local_3c = local_104 * 0.0 + local_70 * local_f4 + local_e4 + local_d4 * 0.0;
  local_38 = local_100 * 0.0 + local_f0 * local_70 + local_e0 + local_d0 * 0.0;
  _local_20 = CONCAT44(local_38,local_3c);
  local_378 = 4.399096e-29;
  local_114 = local_2ac;
  local_b4 = local_29c;
  local_58 = local_134;
  local_54 = local_130;
  local_50 = local_12c;
  local_4c = local_124;
  local_48 = local_120;
  local_44 = local_11c;
  local_24 = local_40;
  pfVar1 = (float *)FPlane::operator*((FPlane *)(param_3 + 0x2c),(float)local_26c);
  local_30 = *pfVar1;
  local_2c = *(double *)(pfVar1 + 1);
  local_380 = *(undefined4 *)(param_3 + 0x2c);
  local_37c = *(float *)(param_3 + 0x30);
  local_378 = *(float *)(param_3 + 0x34);
  pfStack_384 = &local_24;
  pfStack_388 = &local_4c;
  uStack_390 = 0x105f0fc8;
  pfStack_38c = &local_58;
  thunk_FUN_105f0480();
  this_00 = (FMatrix *)(in_ECX + 0x14);
  pcVar9 = Identity_exref;
  pFVar12 = this_00;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pFVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pFVar12 = pFVar12 + 4;
  }
  local_37c = -*(float *)(local_8 + 0x194);
  local_378 = -*(float *)(local_8 + 0x198);
  local_bc = -*(float *)(local_8 + 0x19c);
  local_380 = 0x105f1031;
  local_c4 = local_37c;
  local_c0 = local_378;
  pfVar1 = (float *)thunk_FUN_10326fb0();
  local_5c = (uint)local_5c._1_3_ << 8;
  pfVar8 = pfVar1;
  pFVar12 = local_31c;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(float *)pFVar12 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pFVar12 = pFVar12 + 4;
  }
  pfVar8 = local_198;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar8 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar8 = pfVar8 + 1;
  }
  local_5c._0_1_ = 4;
  pfVar1 = local_198;
  pfVar8 = afStack_3b0;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar8 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar8 = pfVar8 + 1;
  }
  puVar2 = (undefined4 *)FMatrix::operator*(this_00);
  pFVar12 = this_00;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pFVar12 = *puVar2;
    puVar2 = puVar2 + 1;
    pFVar12 = pFVar12 + 4;
  }
  local_5c._0_1_ = 4;
  FMatrix::~FMatrix(local_35c);
  local_5c._0_1_ = 3;
  FMatrix::~FMatrix(local_31c);
  local_5c._0_1_ = 2;
  thunk_FUN_103284c0();
  local_158 = 0;
  local_154 = 0;
  local_150 = 0;
  pfStack_3cc = (float *)0x105f10f0;
  pFVar3 = (FVector *)thunk_FUN_105efa50();
  pfStack_3cc = &local_84;
  puStack_3d0 = (undefined4 *)0x105f1113;
  pFVar4 = (FVector *)thunk_FUN_105efa50();
  pfStack_3cc = (float *)local_4c;
  puStack_3d0 = &local_74;
  uStack_3d4 = 0x105f1136;
  pFVar5 = (FVector *)thunk_FUN_105efa50();
  pfStack_3cc = (float *)0x105f114d;
  this = (FCoords *)
         FCoords::FCoords((FCoords *)&local_188,(FVector *)&local_158,pFVar5,pFVar4,pFVar3);
  puVar2 = (undefined4 *)FCoords::Matrix(this);
  local_5c._0_1_ = 6;
  puVar11 = auStack_3f8;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar11 = puVar11 + 1;
  }
  pFStack_3fc = local_1d8;
  pFStack_400 = (FMatrix *)0x105f1176;
  puVar2 = (undefined4 *)FMatrix::operator*(this_00);
  pFVar12 = this_00;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pFVar12 = *puVar2;
    puVar2 = puVar2 + 1;
    pFVar12 = pFVar12 + 4;
  }
  local_5c._0_1_ = 6;
  pFStack_400 = (FMatrix *)0x105f1195;
  FMatrix::~FMatrix(local_1d8);
  local_5c._0_1_ = 2;
  pFStack_400 = (FMatrix *)0x105f11a5;
  FMatrix::~FMatrix(local_31c);
  pFVar10 = local_8;
  *(float *)(local_8 + 0x1e8) = local_58;
  *(float *)(local_8 + 0x1ec) = local_54;
  *(float *)(local_8 + 0x1f0) = local_50;
  pFStack_400 = local_1d8;
  uStack_404 = 0x105f11d2;
  puVar2 = (undefined4 *)FMatrix::Inverse(this_00);
  pFVar10 = pFVar10 + 0x54;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pFVar10 = *puVar2;
    puVar2 = puVar2 + 1;
    pFVar10 = pFVar10 + 4;
  }
  local_5c._0_1_ = 2;
  uStack_404 = 0x105f11f2;
  FMatrix::~FMatrix(local_1d8);
  local_2bc = local_58;
  local_98 = local_58 * *(float *)this_00 + local_54 * *(float *)(in_ECX + 0x24) +
             local_50 * *(float *)(in_ECX + 0x34) + *(float *)(in_ECX + 0x44);
  local_94 = *(float *)(in_ECX + 0x38) * local_50 +
             *(float *)(in_ECX + 0x18) * local_58 + *(float *)(in_ECX + 0x28) * local_54 +
             *(float *)(in_ECX + 0x48);
  local_90 = local_50 * *(float *)(in_ECX + 0x3c) +
             local_54 * *(float *)(in_ECX + 0x2c) + *(float *)(in_ECX + 0x1c) * local_58 +
             *(float *)(in_ECX + 0x4c);
  local_84 = local_98;
  local_80 = local_94;
  local_7c = local_90;
  local_28c = local_4c;
  local_a8 = local_4c * *(float *)this_00 + local_48 * *(float *)(in_ECX + 0x24) +
             local_44 * *(float *)(in_ECX + 0x34) + *(float *)(in_ECX + 0x44) * 0.0;
  local_a4 = *(float *)(in_ECX + 0x48) * 0.0 +
             *(float *)(in_ECX + 0x38) * local_44 +
             *(float *)(in_ECX + 0x28) * local_48 + *(float *)(in_ECX + 0x18) * local_4c;
  local_a0 = *(float *)(in_ECX + 0x4c) * 0.0 +
             *(float *)(in_ECX + 0x1c) * local_4c + *(float *)(in_ECX + 0x2c) * local_48 +
             *(float *)(in_ECX + 0x3c) * local_44;
  local_14c = local_a8;
  local_148 = local_a4;
  local_144 = local_a0;
  local_27c = local_24;
  local_140 = *(float *)(in_ECX + 0x44) * 0.0 +
              local_24 * *(float *)this_00 + local_20 * *(float *)(in_ECX + 0x24) +
              fStack_1c * *(float *)(in_ECX + 0x34);
  local_13c = *(float *)(in_ECX + 0x48) * 0.0 +
              *(float *)(in_ECX + 0x38) * fStack_1c +
              *(float *)(in_ECX + 0x28) * local_20 + *(float *)(in_ECX + 0x18) * local_24;
  local_138 = *(float *)(in_ECX + 0x4c) * 0.0 +
              fStack_1c * *(float *)(in_ECX + 0x3c) +
              local_20 * *(float *)(in_ECX + 0x2c) + *(float *)(in_ECX + 0x1c) * local_24;
  local_2dc = local_30;
  local_2cc = *(float *)(in_ECX + 0x34) * local_2c._4_4_ +
              *(float *)(in_ECX + 0x24) * (float)local_2c + *(float *)this_00 * local_30 +
              *(float *)(in_ECX + 0x44) * 0.0;
  pFVar6 = (FMatrix *)(local_8 + 0x94);
  pcVar9 = Identity_exref;
  pFVar12 = pFVar6;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pFVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pFVar12 = pFVar12 + 4;
  }
  local_1f4 = -local_94 / local_90;
  local_18 = 1.0;
  local_218[0] = 1.0;
  local_218[5] = 1.0;
  local_1f0 = 0x3f800000;
  local_1dc = 0x3f800000;
  local_14 = 0;
  local_10 = 0.0;
  local_c = 0;
  local_218[1] = 0.0;
  local_218[2] = 0.0;
  local_218[3] = 0.0;
  local_218[4] = 0.0;
  local_218[6] = 0.0;
  local_218[7] = 0.0;
  local_1ec = 0;
  local_1e8 = 0;
  local_1e4 = 0;
  local_1e0 = 0;
  local_218[8] = -local_98 / local_90;
  local_5c._0_1_ = 9;
  pfVar1 = local_218;
  pfVar8 = afStack_440;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar8 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar8 = pfVar8 + 1;
  }
  pFStack_444 = local_1d8;
  uStack_448 = 0x105f1490;
  puVar2 = (undefined4 *)FMatrix::operator*(pFVar6);
  pFVar10 = local_8 + 0x94;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pFVar10 = *puVar2;
    puVar2 = puVar2 + 1;
    pFVar10 = pFVar10 + 4;
  }
  local_5c._0_1_ = 9;
  uStack_448 = 0x105f14b6;
  FMatrix::~FMatrix(local_1d8);
  local_5c._0_1_ = 2;
  uStack_448 = 0x105f14c6;
  FMatrix::~FMatrix((FMatrix *)local_218);
  local_78 = 0;
  local_74 = 0;
  local_70 = 0.0;
  local_6c = 0x3f800000;
  local_80 = 1.0;
  local_88 = 0;
  local_84 = 0.0;
  local_7c = 0.0;
  uStack_448 = 0x105f14ee;
  local_b4 = FVector::Size((FVector *)&local_140);
  local_b4 = local_b4 * local_90;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  uStack_448 = 0x105f1511;
  fVar13 = FVector::Size((FVector *)&local_14c);
  local_18 = fVar13 * local_90;
  local_14 = 0;
  local_10 = 0.0;
  local_c = 0;
  local_198[1] = 0.0;
  local_198[2] = 0.0;
  local_198[3] = 0.0;
  local_198[0] = fVar13 * local_90;
  local_188 = local_b8;
  local_184 = local_b4;
  local_180 = local_b0;
  local_17c = local_ac;
  local_178 = local_88;
  local_174 = local_84;
  local_170 = local_80;
  local_16c = local_7c;
  local_168 = local_78;
  local_164 = local_74;
  local_160 = local_70;
  local_15c = local_6c;
  local_5c._0_1_ = 0xb;
  pfVar1 = local_198;
  pfVar8 = afStack_484;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar8 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar8 = pfVar8 + 1;
  }
  pFStack_488 = local_1d8;
  pFVar12 = (FMatrix *)(local_8 + 0x94);
  uStack_48c = 0x105f15da;
  puVar2 = (undefined4 *)FMatrix::operator*(pFVar12);
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pFVar12 = *puVar2;
    puVar2 = puVar2 + 1;
    pFVar12 = pFVar12 + 4;
  }
  local_5c._0_1_ = 0xb;
  uStack_48c = 0x105f15f7;
  FMatrix::~FMatrix(local_1d8);
  local_5c._0_1_ = 2;
  uStack_48c = 0x105f1607;
  FMatrix::~FMatrix((FMatrix *)local_198);
  local_a8 = 0.0;
  local_a4 = 0.0;
  local_10 = local_90 / (local_90 - 1.0);
  local_a0 = local_10 * -1.0;
  local_9c = 0;
  local_18 = 0.0;
  local_14 = 0;
  local_c = 0x3f800000;
  local_258[5] = -1.0;
  local_3c = 0.0;
  local_38 = 0.0;
  local_34 = 0;
  local_258[1] = 0.0;
  local_258[2] = 0.0;
  local_258[3] = 0.0;
  local_258[4] = 0.0;
  local_258[6] = 0.0;
  local_258[7] = 0.0;
  local_258[8] = 0.0;
  local_258[9] = 0.0;
  local_40 = 1.0;
  local_258[0] = 1.0;
  local_258[10] = local_10;
  local_22c = 0x3f800000;
  local_228 = 0;
  local_224 = 0;
  local_220 = local_10 * -1.0;
  local_21c = 0;
  local_5c._0_1_ = 0xd;
  pfVar1 = local_258;
  pfVar8 = afStack_4c8;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar8 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar8 = pfVar8 + 1;
  }
  pFStack_4cc = local_1d8;
  pFVar12 = (FMatrix *)(local_8 + 0x94);
  pFStack_4d0 = (FMatrix *)0x105f16f2;
  puVar2 = (undefined4 *)FMatrix::operator*(pFVar12);
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pFVar12 = *puVar2;
    puVar2 = puVar2 + 1;
    pFVar12 = pFVar12 + 4;
  }
  local_5c._0_1_ = 0xd;
  pFStack_4d0 = (FMatrix *)0x105f170f;
  FMatrix::~FMatrix(local_1d8);
  local_5c._0_1_ = 2;
  pFStack_4d0 = (FMatrix *)0x105f171f;
  FMatrix::~FMatrix((FMatrix *)local_258);
  pFStack_4d0 = local_1d8;
  uStack_4d4 = 0x105f1735;
  puVar2 = (undefined4 *)FMatrix::Inverse((FMatrix *)(local_8 + 0x94));
  pFVar10 = local_8 + 0xd4;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pFVar10 = *puVar2;
    puVar2 = puVar2 + 1;
    pFVar10 = pFVar10 + 4;
  }
  local_5c = CONCAT31(local_5c._1_3_,2);
  uStack_4d4 = 0x105f175b;
  FMatrix::~FMatrix(local_1d8);
  pFVar10 = local_8 + 0x94;
  puVar2 = auStack_510;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar2 = *(undefined4 *)pFVar10;
    pFVar10 = pFVar10 + 4;
    puVar2 = puVar2 + 1;
  }
  pFStack_514 = local_1d8;
  uStack_518 = 0x105f177f;
  puVar2 = (undefined4 *)FMatrix::operator*(this_00);
  pFVar10 = local_8 + 0x114;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pFVar10 = *puVar2;
    puVar2 = puVar2 + 1;
    pFVar10 = pFVar10 + 4;
  }
  local_5c = CONCAT31((int3)((uint)local_5c >> 8),2);
  uStack_518 = 0x105f17a5;
  FMatrix::~FMatrix(local_1d8);
  pFVar10 = local_8 + 0x54;
  puVar2 = auStack_554;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar2 = *(undefined4 *)pFVar10;
    pFVar10 = pFVar10 + 4;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)FMatrix::operator*((FMatrix *)(local_8 + 0xd4),local_1d8);
  local_5c._1_3_ = (uint3)((uint)local_5c >> 8);
  pFVar10 = local_8 + 0x154;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pFVar10 = *puVar2;
    puVar2 = puVar2 + 1;
    pFVar10 = pFVar10 + 4;
  }
  local_5c._0_1_ = 2;
  FMatrix::~FMatrix(local_1d8);
  local_5c = CONCAT31(local_5c._1_3_,1);
  FMatrix::~FMatrix((FMatrix *)&local_108);
  ExceptionList = local_64;
  return local_8;
}


// ==== 105f181a Catch@105f181a

void Catch_105f181a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + -0x204);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x70,&DAT_10914c48);
}


// ==== 105f1831 Catch@105f1831

void Catch_105f1831(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FPointLightMapSceneNode::FPointLightMapSceneNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f1b40 FUN_105f1b40

void FUN_105f1b40(FLightMapSceneNode *param_1)

{
  FLightMapSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FLightMapSceneNode::FLightMapSceneNode(in_ECX,param_1);
  *(undefined ***)in_ECX = FPointLightMapSceneNode::vftable;
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  ExceptionList = local_c;
  return;
}


// ==== 105f1bd0 FUN_105f1bd0

void FUN_105f1bd0(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  
  FLevelSceneNode::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  return;
}


// ==== 105f1c30 FUN_105f1c30

void FUN_105f1c30(byte param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10821ba0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FLightMapSceneNode::vftable;
  local_4 = 0xffffffff;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 105f1cb0 FUN_105f1cb0

FLevelSceneNode * FUN_105f1cb0(byte param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821bc0;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,500,*(int *)(in_ECX + -4),FPointLightMapSceneNode::~FPointLightMapSceneNode);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FLightMapSceneNode::vftable;
  local_4 = 0xffffffff;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 105f1d90 FUN_105f1d90

FLightMapSceneNode * FUN_105f1d90(UViewport *param_1,AActor *param_2,int param_3,FLightMap *param_4)

{
  float fVar1;
  float fVar2;
  FVector *pFVar3;
  float *pfVar4;
  undefined4 *puVar5;
  FVector *pFVar6;
  FVector *pFVar7;
  FCoords *this;
  FMatrix *pFVar8;
  FLightMapSceneNode *in_ECX;
  int iVar9;
  FMatrix *this_00;
  FPlane *this_01;
  float *pfVar10;
  code *pcVar11;
  undefined4 *puVar12;
  FLightMapSceneNode *pFVar13;
  FMatrix *pFVar14;
  float fVar15;
  undefined4 auStack_554 [15];
  undefined4 uStack_518;
  FMatrix *pFStack_514;
  undefined4 auStack_510 [15];
  undefined4 uStack_4d4;
  FMatrix *pFStack_4d0;
  FMatrix *pFStack_4cc;
  undefined4 auStack_4c8 [11];
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  float fStack_490;
  undefined4 uStack_48c;
  FMatrix *pFStack_488;
  float afStack_484 [15];
  undefined4 uStack_448;
  FMatrix *pFStack_444;
  float afStack_440 [15];
  undefined4 uStack_404;
  FMatrix *pFStack_400;
  FMatrix *pFStack_3fc;
  undefined4 auStack_3f8 [9];
  undefined4 uStack_3d4;
  float *pfStack_3d0;
  float *pfStack_3cc;
  float afStack_3b0 [8];
  undefined4 uStack_390;
  float *pfStack_38c;
  float *pfStack_388;
  float *pfStack_384;
  undefined4 local_380;
  float local_37c;
  float local_378;
  FMatrix local_314 [64];
  float local_2d4;
  float local_2c4;
  float local_2b4;
  undefined4 local_2a4;
  float local_298;
  float local_28c;
  float local_280;
  FMatrix local_274 [64];
  undefined4 local_234 [5];
  FMatrix local_220 [64];
  float local_1e0 [9];
  float local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  float local_1a0 [4];
  undefined4 local_190;
  float local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  float local_16c;
  undefined4 local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_12c;
  float local_128;
  float local_124;
  float local_11c;
  float local_118;
  float local_114;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  int local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined8 local_30;
  float local_28;
  float local_24;
  undefined8 local_20;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  FLightMapSceneNode *local_8;
  
  local_70 = 0xffffffff;
  puStack_74 = &LAB_10821ca2;
  local_78 = ExceptionList;
  local_7c = &stack0xfffffca0;
  ExceptionList = &local_78;
  local_8 = in_ECX;
  FLightMapSceneNode::FLightMapSceneNode(in_ECX,param_1,param_2,param_4);
  *(undefined ***)in_ECX = FDirectionalLightMapSceneNode::vftable;
  local_70._0_1_ = 1;
  local_70._1_3_ = 0;
  FMatrix::Inverse((FMatrix *)(*(int *)(in_ECX + 0x1e4) + 0x30));
  local_70._0_1_ = 2;
  pFVar3 = (FVector *)FRotator::Vector((FRotator *)(param_2 + 0x1c8));
  pfVar4 = (float *)FVector::SafeNormal(pFVar3);
  local_88 = -*pfVar4;
  fVar15 = -pfVar4[1];
  fVar1 = -pfVar4[2];
  this_01 = (FPlane *)(param_3 + 0x2c);
  if (*(float *)(param_3 + 0x34) * fVar1 +
      *(float *)(param_3 + 0x30) * fVar15 + *(float *)this_01 * local_88 <= 0.0) {
    local_28 = -1.0;
  }
  else {
    local_28 = 1.0;
  }
  local_2b4 = (float)*(int *)(*(int *)(in_ECX + 0x1e4) + 0x24);
  local_28c = (local_2b4 + 1.0) * 0.5;
  local_5c = (float)*(int *)(*(int *)(in_ECX + 0x1e4) + 0x28);
  fVar2 = (local_5c + 1.0) * 0.5;
  local_d0 = local_d0 * 0.0;
  local_13c = local_f0 * local_28c + fVar2 * local_e0 + local_d0 + local_c0;
  local_cc = local_cc * 0.0;
  local_138 = local_bc + local_ec * local_28c + local_dc * fVar2 + local_cc;
  local_c8 = local_c8 * 0.0;
  local_134 = local_b8 + local_d8 * fVar2 + local_e8 * local_28c + local_c8;
  local_2b4 = local_2b4 * 0.5;
  local_11c = local_c0 * 0.0;
  local_30 = (double)local_11c;
  local_12c = local_e0 * 0.0 + local_f0 * local_2b4 + local_d0 + local_11c;
  local_118 = local_bc * 0.0;
  local_20 = (double)local_118;
  local_128 = local_dc * 0.0 + local_ec * local_2b4 + local_cc + local_118;
  local_124 = local_d8 * 0.0 + local_e8 * local_2b4 + local_c8 + local_b8 * 0.0;
  fVar2 = local_5c * 0.5;
  local_2a4 = 0;
  local_234[0] = 0;
  local_11c = local_f0 * 0.0 + fVar2 * local_e0 + local_d0 + local_11c;
  local_118 = local_ec * 0.0 + local_dc * fVar2 + local_cc + local_118;
  local_114 = local_e8 * 0.0 + local_d8 * fVar2 + local_c8 + local_b8 * 0.0;
  local_378 = 4.4003945e-29;
  local_298 = local_2b4;
  local_280 = local_88;
  local_58 = local_13c;
  local_54 = local_138;
  local_50 = local_134;
  local_4c = local_11c;
  local_48 = local_118;
  local_44 = local_114;
  local_40 = local_12c;
  local_3c = local_128;
  local_38 = local_124;
  pfVar4 = (float *)FPlane::operator*(this_01,(float)local_234);
  local_24 = *pfVar4;
  local_20 = *(double *)(pfVar4 + 1);
  local_a8 = -local_24;
  local_28 = -pfVar4[2];
  fVar2 = 65536.0 / (local_28 * fVar1 + -pfVar4[1] * fVar15 + local_a8 * local_88);
  local_30 = (double)CONCAT44(&local_380,(undefined4)local_30);
  local_380 = *(undefined4 *)this_01;
  local_37c = *(float *)(param_3 + 0x30);
  local_378 = *(float *)(param_3 + 0x34);
  pfStack_384 = &local_4c;
  pfStack_388 = &local_40;
  pfStack_38c = &local_58;
  uStack_390 = 0x105f20e3;
  thunk_FUN_105f0480();
  this_00 = (FMatrix *)(in_ECX + 0x14);
  pcVar11 = Identity_exref;
  pFVar14 = this_00;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pFVar14 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pFVar14 = pFVar14 + 4;
  }
  local_88 = fVar2 * local_88;
  local_68 = local_88 + local_58;
  local_37c = -local_68;
  local_378 = -(local_54 + fVar15 * fVar2);
  local_30 = (double)CONCAT44(-(local_50 + fVar2 * fVar1),local_378);
  local_380 = 0x105f217e;
  local_34 = local_37c;
  pfVar4 = (float *)thunk_FUN_10326fb0();
  local_70 = (uint)local_70._1_3_ << 8;
  pfVar10 = pfVar4;
  pFVar14 = local_274;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(float *)pFVar14 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pFVar14 = pFVar14 + 4;
  }
  pfVar10 = local_1a0;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar10 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar10 = pfVar10 + 1;
  }
  local_70._0_1_ = 4;
  pfVar4 = local_1a0;
  pfVar10 = afStack_3b0;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar10 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar10 = pfVar10 + 1;
  }
  puVar5 = (undefined4 *)FMatrix::operator*(this_00);
  pFVar14 = this_00;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pFVar14 = *puVar5;
    puVar5 = puVar5 + 1;
    pFVar14 = pFVar14 + 4;
  }
  local_70._0_1_ = 4;
  FMatrix::~FMatrix(local_314);
  local_70._0_1_ = 3;
  FMatrix::~FMatrix(local_274);
  local_70._0_1_ = 2;
  thunk_FUN_103284c0();
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  pfStack_3cc = (float *)0x105f223d;
  pFVar3 = (FVector *)thunk_FUN_105efa50();
  pfStack_3cc = &local_88;
  pfStack_3d0 = (float *)0x105f2260;
  pFVar6 = (FVector *)thunk_FUN_105efa50();
  pfStack_3cc = (float *)local_40;
  pfStack_3d0 = &local_a8;
  uStack_3d4 = 0x105f2283;
  pFVar7 = (FVector *)thunk_FUN_105efa50();
  pfStack_3cc = (float *)0x105f229a;
  this = (FCoords *)
         FCoords::FCoords((FCoords *)&local_190,(FVector *)&local_fc,pFVar7,pFVar6,pFVar3);
  puVar5 = (undefined4 *)FCoords::Matrix(this);
  local_70._0_1_ = 6;
  puVar12 = auStack_3f8;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar12 = puVar12 + 1;
  }
  pFStack_3fc = local_220;
  pFStack_400 = (FMatrix *)0x105f22c3;
  puVar5 = (undefined4 *)FMatrix::operator*(this_00);
  pFVar14 = this_00;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pFVar14 = *puVar5;
    puVar5 = puVar5 + 1;
    pFVar14 = pFVar14 + 4;
  }
  local_70._0_1_ = 6;
  pFStack_400 = (FMatrix *)0x105f22e2;
  FMatrix::~FMatrix(local_220);
  local_70._0_1_ = 2;
  pFStack_400 = (FMatrix *)0x105f22f2;
  FMatrix::~FMatrix(local_274);
  pFStack_400 = local_220;
  uStack_404 = 0x105f2301;
  puVar5 = (undefined4 *)FMatrix::Inverse(this_00);
  pFVar13 = local_8 + 0x54;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pFVar13 = *puVar5;
    puVar5 = puVar5 + 1;
    pFVar13 = pFVar13 + 4;
  }
  local_70._0_1_ = 2;
  uStack_404 = 0x105f2324;
  FMatrix::~FMatrix(local_220);
  local_9c = local_58 * *(float *)this_00 + local_54 * *(float *)(in_ECX + 0x24) +
             local_50 * *(float *)(in_ECX + 0x34) + *(float *)(in_ECX + 0x44);
  local_98 = *(float *)(in_ECX + 0x38) * local_50 +
             *(float *)(in_ECX + 0x28) * local_54 + *(float *)(in_ECX + 0x18) * local_58 +
             *(float *)(in_ECX + 0x48);
  local_94 = local_50 * *(float *)(in_ECX + 0x3c) +
             local_54 * *(float *)(in_ECX + 0x2c) + *(float *)(in_ECX + 0x1c) * local_58 +
             *(float *)(in_ECX + 0x4c);
  local_154 = local_9c;
  local_150 = local_98;
  local_14c = local_94;
  local_2c4 = local_40;
  local_10c = *(float *)this_00 * local_40 + local_3c * *(float *)(in_ECX + 0x24) +
              local_38 * *(float *)(in_ECX + 0x34) + *(float *)(in_ECX + 0x44) * 0.0;
  local_108 = *(float *)(in_ECX + 0x48) * 0.0 +
              *(float *)(in_ECX + 0x38) * local_38 +
              *(float *)(in_ECX + 0x28) * local_3c + *(float *)(in_ECX + 0x18) * local_40;
  local_104 = *(float *)(in_ECX + 0x4c) * 0.0 +
              *(float *)(in_ECX + 0x1c) * local_40 + *(float *)(in_ECX + 0x2c) * local_3c +
              *(float *)(in_ECX + 0x3c) * local_38;
  local_148 = local_10c;
  local_144 = local_108;
  local_140 = local_104;
  local_160 = *(float *)(in_ECX + 0x44) * 0.0 +
              local_4c * *(float *)this_00 + local_48 * *(float *)(in_ECX + 0x24) +
              local_44 * *(float *)(in_ECX + 0x34);
  local_15c = *(float *)(in_ECX + 0x48) * 0.0 +
              *(float *)(in_ECX + 0x38) * local_44 +
              *(float *)(in_ECX + 0x28) * local_48 + *(float *)(in_ECX + 0x18) * local_4c;
  local_158 = *(float *)(in_ECX + 0x4c) * 0.0 +
              local_44 * *(float *)(in_ECX + 0x3c) +
              local_48 * *(float *)(in_ECX + 0x2c) + *(float *)(in_ECX + 0x1c) * local_4c;
  local_2d4 = *(float *)(in_ECX + 0x34) * local_20._4_4_ +
              *(float *)(in_ECX + 0x24) * (float)local_20 + *(float *)this_00 * local_24 +
              *(float *)(in_ECX + 0x44) * 0.0;
  pFVar8 = (FMatrix *)(local_8 + 0x94);
  pcVar11 = Identity_exref;
  pFVar14 = pFVar8;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pFVar14 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pFVar14 = pFVar14 + 4;
  }
  local_1bc = -local_98 / local_94;
  local_18 = 1.0;
  local_1e0[0] = 1.0;
  local_1e0[5] = 1.0;
  local_1b8 = 0x3f800000;
  local_1a4 = 0x3f800000;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_1e0[1] = 0.0;
  local_1e0[2] = 0.0;
  local_1e0[3] = 0.0;
  local_1e0[4] = 0.0;
  local_1e0[6] = 0.0;
  local_1e0[7] = 0.0;
  local_1b4 = 0;
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  local_1e0[8] = -local_9c / local_94;
  local_70._0_1_ = 9;
  pfVar4 = local_1e0;
  pfVar10 = afStack_440;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar10 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar10 = pfVar10 + 1;
  }
  pFStack_444 = local_220;
  uStack_448 = 0x105f25dd;
  puVar5 = (undefined4 *)FMatrix::operator*(pFVar8);
  pFVar13 = local_8 + 0x94;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pFVar13 = *puVar5;
    puVar5 = puVar5 + 1;
    pFVar13 = pFVar13 + 4;
  }
  local_70._0_1_ = 9;
  uStack_448 = 0x105f2603;
  FMatrix::~FMatrix(local_220);
  local_70._0_1_ = 2;
  uStack_448 = 0x105f2613;
  FMatrix::~FMatrix((FMatrix *)local_1e0);
  local_ac = 0;
  local_a8 = 0.0;
  local_a4 = 0;
  local_a0 = 0x3f800000;
  local_84 = 0x3f800000;
  local_8c = 0;
  local_88 = 0.0;
  local_80 = 0;
  uStack_448 = 0x105f263b;
  local_68 = FVector::Size((FVector *)&local_160);
  local_68 = 1.0 / local_68;
  local_6c = 0;
  local_64 = 0;
  local_60 = 0;
  uStack_448 = 0x105f265f;
  fVar15 = FVector::Size((FVector *)&local_148);
  local_18 = 1.0 / fVar15;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_1a0[1] = 0.0;
  local_1a0[2] = 0.0;
  local_1a0[3] = 0.0;
  local_1a0[0] = 1.0 / fVar15;
  local_190 = local_6c;
  local_18c = local_68;
  local_188 = local_64;
  local_184 = local_60;
  local_180 = local_8c;
  local_17c = local_88;
  local_178 = local_84;
  local_174 = local_80;
  local_170 = local_ac;
  local_16c = local_a8;
  local_168 = local_a4;
  local_164 = local_a0;
  local_70._0_1_ = 0xb;
  pfVar4 = local_1a0;
  pfVar10 = afStack_484;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar10 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar10 = pfVar10 + 1;
  }
  pFStack_488 = local_220;
  pFVar14 = (FMatrix *)(local_8 + 0x94);
  uStack_48c = 0x105f2729;
  puVar5 = (undefined4 *)FMatrix::operator*(pFVar14);
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pFVar14 = *puVar5;
    puVar5 = puVar5 + 1;
    pFVar14 = pFVar14 + 4;
  }
  local_70._0_1_ = 0xb;
  uStack_48c = 0x105f2746;
  FMatrix::~FMatrix(local_220);
  local_70._0_1_ = 2;
  uStack_48c = 0x105f2756;
  FMatrix::~FMatrix((FMatrix *)local_1a0);
  uStack_48c = 0xbf800000;
  fStack_490 = 1.0 / (local_94 - 1.0);
  uStack_494 = 0xbf800000;
  uStack_498 = 0x3f800000;
  uStack_49c = 0x105f278a;
  puVar5 = (undefined4 *)thunk_FUN_105f07e0();
  local_70 = (uint)local_70._1_3_ << 8;
  puVar12 = puVar5;
  pFVar14 = local_314;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pFVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    pFVar14 = pFVar14 + 4;
  }
  pFVar14 = local_220;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pFVar14 = *puVar5;
    puVar5 = puVar5 + 1;
    pFVar14 = pFVar14 + 4;
  }
  local_70._0_1_ = 0xe;
  pFVar14 = local_220;
  puVar5 = auStack_4c8;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar5 = *(undefined4 *)pFVar14;
    pFVar14 = pFVar14 + 4;
    puVar5 = puVar5 + 1;
  }
  pFStack_4cc = local_274;
  pFVar14 = (FMatrix *)(local_8 + 0x94);
  pFStack_4d0 = (FMatrix *)0x105f27da;
  puVar5 = (undefined4 *)FMatrix::operator*(pFVar14);
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pFVar14 = *puVar5;
    puVar5 = puVar5 + 1;
    pFVar14 = pFVar14 + 4;
  }
  local_70._0_1_ = 0xe;
  pFStack_4d0 = (FMatrix *)0x105f27f7;
  FMatrix::~FMatrix(local_274);
  local_70._0_1_ = 0xd;
  pFStack_4d0 = (FMatrix *)0x105f2807;
  FMatrix::~FMatrix(local_314);
  local_70._0_1_ = 2;
  pFStack_4d0 = (FMatrix *)0x105f2816;
  thunk_FUN_105eff40();
  pFStack_4d0 = local_220;
  uStack_4d4 = 0x105f282c;
  puVar5 = (undefined4 *)FMatrix::Inverse((FMatrix *)(local_8 + 0x94));
  pFVar13 = local_8 + 0xd4;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pFVar13 = *puVar5;
    puVar5 = puVar5 + 1;
    pFVar13 = pFVar13 + 4;
  }
  local_70 = CONCAT31(local_70._1_3_,2);
  uStack_4d4 = 0x105f2852;
  FMatrix::~FMatrix(local_220);
  pFVar13 = local_8 + 0x94;
  puVar5 = auStack_510;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar5 = *(undefined4 *)pFVar13;
    pFVar13 = pFVar13 + 4;
    puVar5 = puVar5 + 1;
  }
  pFStack_514 = local_220;
  uStack_518 = 0x105f2876;
  puVar5 = (undefined4 *)FMatrix::operator*(this_00);
  pFVar13 = local_8 + 0x114;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pFVar13 = *puVar5;
    puVar5 = puVar5 + 1;
    pFVar13 = pFVar13 + 4;
  }
  local_70 = CONCAT31((int3)((uint)local_70 >> 8),2);
  uStack_518 = 0x105f289c;
  FMatrix::~FMatrix(local_220);
  pFVar13 = local_8 + 0x54;
  puVar5 = auStack_554;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar5 = *(undefined4 *)pFVar13;
    pFVar13 = pFVar13 + 4;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined4 *)FMatrix::operator*((FMatrix *)(local_8 + 0xd4),local_220);
  local_70._1_3_ = (uint3)((uint)local_70 >> 8);
  pFVar13 = local_8 + 0x154;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pFVar13 = *puVar5;
    puVar5 = puVar5 + 1;
    pFVar13 = pFVar13 + 4;
  }
  local_70._0_1_ = 2;
  FMatrix::~FMatrix(local_220);
  *(undefined4 *)(local_8 + 0x1d8) = 0;
  local_70 = CONCAT31(local_70._1_3_,1);
  FMatrix::~FMatrix((FMatrix *)&local_f0);
  ExceptionList = local_78;
  return local_8;
}


// ==== 105f291b Catch@105f291b

void Catch_105f291b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x1b8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_10914c48);
}


// ==== 105f2932 Catch@105f2932

void Catch_105f2932(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FDirectionalLightMapSceneNode::FDirectionalLightMapSceneNode"
            );
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f2c40 FUN_105f2c40

void FUN_105f2c40(FLightMapSceneNode *param_1)

{
  FLightMapSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FLightMapSceneNode::FLightMapSceneNode(in_ECX,param_1);
  *(undefined ***)in_ECX = FDirectionalLightMapSceneNode::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 105f2cb0 FUN_105f2cb0

void FUN_105f2cb0(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  
  FLevelSceneNode::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  return;
}


// ==== 105f2ce0 FUN_105f2ce0

void FUN_105f2ce0(byte param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10821d20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FLightMapSceneNode::vftable;
  local_4 = 0xffffffff;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 105f2d60 FUN_105f2d60

FLevelSceneNode * FUN_105f2d60(byte param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821d40;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x1e8,*(int *)(in_ECX + -4),
               FDirectionalLightMapSceneNode::~FDirectionalLightMapSceneNode);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FLightMapSceneNode::vftable;
  local_4 = 0xffffffff;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 105f2e40 FUN_105f2e40

undefined4 FUN_105f2e40(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar3 = 0;
  iVar4 = *in_ECX;
  local_20 = in_ECX[1];
  local_28 = local_20 * iVar4;
  local_1c = iVar4;
  while( true ) {
    if (in_ECX[1] - param_4 <= iVar3) break;
    iVar2 = 0;
    local_18 = 0;
    for (iVar4 = 0; iVar4 < param_4; iVar4 = iVar4 + 1) {
      iVar1 = *(int *)(in_ECX[2] + (iVar4 + iVar3) * 4);
      if (iVar2 <= iVar1) {
        iVar2 = iVar1;
      }
    }
    for (iVar4 = 0; iVar4 < param_4; iVar4 = iVar4 + 1) {
      local_18 = local_18 + (iVar2 - *(int *)(in_ECX[2] + (iVar4 + iVar3) * 4));
    }
    iVar4 = *in_ECX;
    if ((iVar2 <= iVar4 - param_3) && (local_18 < local_28)) {
      local_28 = local_18;
      local_20 = iVar3;
      local_1c = iVar2;
    }
    iVar3 = iVar3 + 1;
  }
  if ((local_1c <= iVar4 - param_3) && (local_20 <= in_ECX[1] - param_4)) {
    *param_1 = local_1c;
    *param_2 = local_20;
    for (iVar4 = 0; iVar4 < param_4; iVar4 = iVar4 + 1) {
      *(int *)(in_ECX[2] + (local_20 + iVar4) * 4) = local_1c + param_3;
    }
    return 1;
  }
  return 0;
}


// ==== 105f2f5b Catch@105f2f5b

void Catch_105f2f5b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 105f2f6f Catch@105f2f6f

void Catch_105f2f6f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FSurfaceLayout::AddSurface");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f2fe0 FUN_105f2fe0

void FUN_105f2fe0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c) = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0x411;
  *(undefined4 *)(in_ECX + 0x24) = 0x3f2;
  *(undefined4 *)(in_ECX + 0x28) = 0x409;
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  *(undefined1 *)(in_ECX + 0x2d) = 0;
  *(undefined1 *)(in_ECX + 0x2e) = 0;
  *(undefined1 *)(in_ECX + 0x2f) = 0;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  thunk_FUN_105efff0();
  return;
}


// ==== 105f3090 FUN_105f3090

void FUN_105f3090(void)

{
  ulong *puVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_634 [92];
  undefined4 local_5d8;
  undefined1 local_5a8;
  undefined1 local_5a7;
  undefined1 local_4e7;
  undefined4 local_4e4;
  undefined4 local_4d4;
  uint local_4d0;
  int local_44;
  ulong *local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulong *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10821d6b;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff9c0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  (**(code **)(**(int **)GWarn_exref + 0x10))(L"Compressing lightmaps...",1);
  local_24 = 0;
LAB_105f30d8:
  if (*(int *)(in_ECX + 0xf4) <= local_24) {
    (**(code **)(**(int **)GWarn_exref + 0x14))();
    ExceptionList = local_10;
    return;
  }
  iVar4 = local_24 * 0x1c;
  iVar6 = *(int *)(*(int *)(in_ECX + 0xf0) + iVar4 + 0x14);
  local_1c = 0;
  local_2c = iVar6;
  local_28 = iVar4;
LAB_105f3110:
  do {
    if (iVar6 <= local_1c) break;
    iVar5 = local_1c * 0x6c + *(int *)(*(int *)(in_ECX + 0xf0) + iVar4 + 0x10);
    if (*(int *)(iVar5 + 100) != *(int *)(iVar5 + 0x68)) {
      if (*(int *)(DAT_10b221f0 + 0x1c) == 5) {
        FArray::Empty((FArray *)(iVar5 + 0x34),1,0);
        FArray::Empty((FArray *)(iVar5 + 0x4c),1,0);
        local_1c = local_1c + 1;
        in_ECX = local_20;
        goto LAB_105f3110;
      }
      puVar1 = (ulong *)thunk_FUN_103ff730(0x100000);
      local_8._0_1_ = 1;
      local_38 = puVar1;
      if (puVar1 == (ulong *)0x0) {
        puVar1 = (ulong *)0x0;
      }
      else {
        _vector_constructor_iterator_(puVar1,4,0x40000,FColor::FColor);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_18 = puVar1;
      (**(code **)(**(int **)GWarn_exref + 0x18))
                (*(int **)GWarn_exref,iVar6 * local_24 + local_1c,*(int *)(local_20 + 0xf4) * iVar6,
                 L"Compressing lightmaps...");
      local_34 = 0;
      while( true ) {
        iVar4 = local_34;
        iVar6 = DAT_10b221f0;
        iVar2 = local_28 + *(int *)(local_20 + 0xf0);
        if (*(int *)(iVar2 + 8) <= local_34) break;
        piVar3 = (int *)(*(int *)(*(int *)(iVar2 + 4) + local_34 * 4) * 0xac +
                        *(int *)(local_20 + 0x10c));
        (**(code **)(*piVar3 + 0x54))
                  (0,puVar1 + piVar3[8] * 0x200 + piVar3[7],0x800,5,0,local_1c,local_2c);
        local_34 = iVar4 + 1;
        puVar1 = local_18;
      }
      local_18 = (ulong *)(uint)(*(int *)(DAT_10b221f0 + 0x1c) == 7);
      thunk_FUN_105f2fe0();
      if (*(int *)(iVar6 + 0x24) != 0) {
        appCreateBitmap((ushort *)&DAT_108d4204,0x200,0x200,puVar1,
                        *(FFileManager **)GFileManager_exref,0);
      }
      local_5d8 = 0x1e;
      local_4d4 = 0;
      local_4d0 = -(uint)(local_18 != (ulong *)0x0) & 2;
      local_44 = iVar5 + 0x1c;
      local_4e7 = 1;
      local_4e4 = 0x400ccccd;
      local_5a8 = *(int *)(iVar6 + 0x20) != 0;
      local_5a7 = *(int *)(iVar6 + 0x20) != 0;
      FUN_10776110(puVar1,0x200,0x200,0x800,local_634,4,&LAB_105f3030,0,0);
      *(undefined4 *)(iVar5 + 0x5c) = 0x200;
      *(undefined4 *)(iVar5 + 0x60) = 0x200;
      *(char *)(iVar5 + 0x58) = (local_18 != (ulong *)0x0) * '\x04' + '\x03';
      *(undefined4 *)(iVar5 + 100) = *(undefined4 *)(iVar5 + 0x68);
      thunk_FUN_103254c0(puVar1);
      iVar4 = local_28;
      iVar6 = local_2c;
    }
    local_1c = local_1c + 1;
    in_ECX = local_20;
  } while( true );
  local_24 = local_24 + 1;
  goto LAB_105f30d8;
}


// ==== 105f336e Catch@105f336e

void Catch_105f336e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 105f3382 Catch@105f3382

void Catch_105f3382(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::CompressLightmaps");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f3470 FUN_105f3470

void FUN_105f3470(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 105f34a0 FUN_105f34a0

void FUN_105f34a0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    piVar2 = *(int **)in_ECX;
    do {
      if (*piVar2 == *param_1) {
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  iVar1 = FArray::Add(in_ECX,1,4);
  *(int *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 105f35e0 FUN_105f35e0

FConvexVolume * FUN_105f35e0(FConvexVolume *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  FVector *this;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 *puStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 *puStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 *puStack_c;
  
  local_78 = 0x105f35f4;
  FConvexVolume::FConvexVolume(param_1);
  this = (FVector *)&local_30;
  iVar5 = 3;
  do {
    local_78 = 0x105f3608;
    FVector::FVector(this);
    this = this + 0xc;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  local_80 = *(undefined4 *)(in_ECX + 0x1e8);
  local_7c = *(undefined4 *)(in_ECX + 0x1ec);
  local_58 = 0xbf800000;
  local_54 = 0x3f800000;
  local_78 = *(undefined4 *)(in_ECX + 0x1f0);
  puStack_84 = &local_40;
  uStack_88 = 0x105f364b;
  FSceneNode::Project();
  puVar2 = &local_40;
  puStack_c = (undefined4 *)&stack0xffffff98;
  iVar5 = 2;
  do {
    iVar6 = 0;
    do {
      uVar4 = uStack_44;
      uVar3 = uStack_48;
      puStack_98 = &uStack_60;
      uStack_94 = *puStack_c;
      uStack_90 = *(undefined4 *)(&stack0xffffff98 + iVar6 * 4);
      uStack_8c = uStack_48;
      uStack_88 = uStack_44;
      uStack_9c = 0x105f36a0;
      puVar1 = (undefined4 *)FSceneNode::Deproject();
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      iVar6 = iVar6 + 1;
      puVar2 = puVar2 + 3;
    } while (iVar6 < 2);
    puStack_c = puStack_c + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uStack_88 = 0x105f36d3;
  fVar7 = FMatrix::Determinant((FMatrix *)(in_ECX + 0x114));
  if (0.0 <= fVar7) {
    uStack_90 = uStack_34;
    uStack_8c = local_30;
    uStack_88 = uStack_2c;
    uStack_9c = local_40;
    puStack_98 = (undefined4 *)uStack_3c;
    uStack_a8 = *(undefined4 *)(in_ECX + 0x194);
    uStack_94 = uStack_38;
    uStack_a4 = *(undefined4 *)(in_ECX + 0x198);
    uStack_a0 = *(undefined4 *)(in_ECX + 0x19c);
    uStack_ac = 0x105f3935;
    puVar2 = (undefined4 *)FPlane::FPlane((FPlane *)&uStack_60);
    *(undefined4 *)param_1 = *puVar2;
    *(undefined4 *)(param_1 + 4) = puVar2[1];
    *(undefined4 *)(param_1 + 8) = puVar2[2];
    *(undefined4 *)(param_1 + 0xc) = puVar2[3];
    uStack_b4 = uStack_64;
    uStack_b0 = uStack_60;
    uStack_ac = uStack_5c;
    uStack_c0 = uStack_4c;
    uStack_bc = uStack_48;
    uStack_cc = *(undefined4 *)(in_ECX + 0x194);
    uStack_b8 = uStack_44;
    uStack_c8 = *(undefined4 *)(in_ECX + 0x198);
    uStack_c4 = *(undefined4 *)(in_ECX + 0x19c);
    uStack_d0 = 0x105f39a6;
    puVar2 = (undefined4 *)FPlane::FPlane((FPlane *)&puStack_84);
    *(undefined4 *)(param_1 + 0x10) = *puVar2;
    *(undefined4 *)(param_1 + 0x14) = puVar2[1];
    *(undefined4 *)(param_1 + 0x18) = puVar2[2];
    *(undefined4 *)(param_1 + 0x1c) = puVar2[3];
    uStack_d8 = uVar3;
    uStack_d4 = uVar4;
    uStack_e4 = uStack_64;
    uStack_e0 = uStack_60;
    uStack_f0 = *(undefined4 *)(in_ECX + 0x194);
    uStack_dc = uStack_5c;
    uStack_ec = *(undefined4 *)(in_ECX + 0x198);
    uStack_e8 = *(undefined4 *)(in_ECX + 0x19c);
    uStack_d0 = unaff_EBX;
    puVar2 = (undefined4 *)FPlane::FPlane((FPlane *)&uStack_a8);
    *(undefined4 *)(param_1 + 0x20) = *puVar2;
    *(undefined4 *)(param_1 + 0x24) = puVar2[1];
    *(undefined4 *)(param_1 + 0x28) = puVar2[2];
    *(undefined4 *)(param_1 + 0x2c) = puVar2[3];
    puVar2 = (undefined4 *)
             FPlane::FPlane((FPlane *)&uStack_cc,*(undefined4 *)(in_ECX + 0x194),
                            *(undefined4 *)(in_ECX + 0x198),*(undefined4 *)(in_ECX + 0x19c),
                            uStack_a0,uStack_9c,puStack_98,uStack_88,puStack_84,local_80);
    *(undefined4 *)(param_1 + 0x30) = *puVar2;
    *(undefined4 *)(param_1 + 0x34) = puVar2[1];
    *(undefined4 *)(param_1 + 0x38) = puVar2[2];
    *(undefined4 *)(param_1 + 0x3c) = puVar2[3];
    uVar3 = uStack_b4;
    uVar4 = uStack_b0;
    uVar8 = uStack_b8;
    uVar9 = uStack_c4;
    uVar10 = uStack_c0;
    uVar11 = uStack_bc;
  }
  else {
    uStack_90 = local_40;
    uStack_8c = uStack_3c;
    uStack_88 = uStack_38;
    uStack_9c = uStack_34;
    puStack_98 = (undefined4 *)local_30;
    uStack_a8 = *(undefined4 *)(in_ECX + 0x194);
    uStack_94 = uStack_2c;
    uStack_a4 = *(undefined4 *)(in_ECX + 0x198);
    uStack_a0 = *(undefined4 *)(in_ECX + 0x19c);
    uStack_ac = 0x105f373f;
    puVar2 = (undefined4 *)FPlane::FPlane((FPlane *)&uStack_60);
    *(undefined4 *)param_1 = *puVar2;
    *(undefined4 *)(param_1 + 4) = puVar2[1];
    *(undefined4 *)(param_1 + 8) = puVar2[2];
    *(undefined4 *)(param_1 + 0xc) = puVar2[3];
    uStack_b4 = uStack_4c;
    uStack_b0 = uStack_48;
    uStack_ac = uStack_44;
    uStack_c0 = uStack_64;
    uStack_bc = uStack_60;
    uStack_cc = *(undefined4 *)(in_ECX + 0x194);
    uStack_b8 = uStack_5c;
    uStack_c8 = *(undefined4 *)(in_ECX + 0x198);
    uStack_c4 = *(undefined4 *)(in_ECX + 0x19c);
    uStack_d0 = 0x105f37b0;
    puVar2 = (undefined4 *)FPlane::FPlane((FPlane *)&puStack_84);
    *(undefined4 *)(param_1 + 0x10) = *puVar2;
    *(undefined4 *)(param_1 + 0x14) = puVar2[1];
    *(undefined4 *)(param_1 + 0x18) = puVar2[2];
    *(undefined4 *)(param_1 + 0x1c) = puVar2[3];
    uStack_d8 = uStack_64;
    uStack_d4 = uStack_60;
    uStack_d0 = uStack_5c;
    uStack_e4 = uVar3;
    uStack_e0 = uVar4;
    uStack_f0 = *(undefined4 *)(in_ECX + 0x194);
    uStack_ec = *(undefined4 *)(in_ECX + 0x198);
    uStack_e8 = *(undefined4 *)(in_ECX + 0x19c);
    uStack_dc = unaff_EBX;
    puVar2 = (undefined4 *)FPlane::FPlane((FPlane *)&uStack_a8);
    *(undefined4 *)(param_1 + 0x20) = *puVar2;
    *(undefined4 *)(param_1 + 0x24) = puVar2[1];
    *(undefined4 *)(param_1 + 0x28) = puVar2[2];
    *(undefined4 *)(param_1 + 0x2c) = puVar2[3];
    puVar2 = (undefined4 *)
             FPlane::FPlane((FPlane *)&uStack_cc,*(undefined4 *)(in_ECX + 0x194),
                            *(undefined4 *)(in_ECX + 0x198),*(undefined4 *)(in_ECX + 0x19c),
                            uStack_88,puStack_84,local_80,uStack_a0,uStack_9c,puStack_98);
    *(undefined4 *)(param_1 + 0x30) = *puVar2;
    *(undefined4 *)(param_1 + 0x34) = puVar2[1];
    *(undefined4 *)(param_1 + 0x38) = puVar2[2];
    *(undefined4 *)(param_1 + 0x3c) = puVar2[3];
    uVar3 = uStack_c0;
    uVar4 = uStack_bc;
    uVar8 = uStack_c4;
    uVar9 = uStack_b8;
    uVar10 = uStack_b4;
    uVar11 = uStack_b0;
  }
  puVar2 = (undefined4 *)
           FPlane::FPlane((FPlane *)&uStack_f0,uStack_d0,uStack_cc,uStack_c8,uVar8,uVar3,uVar4,uVar9
                          ,uVar10,uVar11);
  *(undefined4 *)(param_1 + 0x40) = *puVar2;
  *(undefined4 *)(param_1 + 0x44) = puVar2[1];
  *(undefined4 *)(param_1 + 0x48) = puVar2[2];
  *(undefined4 *)(param_1 + 0x4c) = puVar2[3];
  *(undefined4 *)(param_1 + 0x200) = 5;
  return param_1;
}


// ==== 105f3c80 FUN_105f3c80

FConvexVolume * FUN_105f3c80(FConvexVolume *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  FPlane *pFVar4;
  int iVar5;
  FVector *this;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  FPlane *pFStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_88 [4];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  FPlane local_28 [16];
  FSceneNode *local_18;
  undefined4 local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 local_8 [2];
  
  local_9c = 0x105f3c9c;
  FConvexVolume::FConvexVolume(param_1);
  this = (FVector *)local_88;
  iVar5 = 7;
  do {
    local_9c = 0x105f3cad;
    FVector::FVector(this);
    this = this + 0xc;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iVar5 = 0;
  local_8[0] = 0xbf800000;
  local_8[1] = 0x3f800000;
  do {
    local_c = (undefined4 *)((int)local_8 + iVar5);
    puVar3 = local_8;
    local_10 = 2;
    iVar6 = 0;
    while( true ) {
      do {
        if (iVar6 == 0) {
          local_14 = 0;
        }
        else {
          local_14 = 0x3f800000;
        }
        local_a8 = *local_c;
        pFStack_ac = local_28;
        local_a4 = *puVar3;
        local_a0 = local_14;
        local_9c = 0x3f800000;
        uStack_b0 = 0x105f3d4f;
        puVar2 = (undefined4 *)FSceneNode::Deproject(local_18);
        iVar1 = iVar5 + iVar6;
        local_88[iVar1 * 3] = *puVar2;
        local_88[iVar1 * 3 + 1] = puVar2[1];
        iVar6 = iVar6 + 1;
        local_88[iVar1 * 3 + 2] = puVar2[2];
      } while (iVar6 < 2);
      iVar5 = iVar5 + 2;
      puVar3 = puVar3 + 1;
      local_10 = local_10 + -1;
      if (local_10 == 0) break;
      iVar6 = 0;
    }
  } while (iVar5 < 8);
  local_9c = 0x105f3da1;
  fVar7 = FMatrix::Determinant((FMatrix *)(local_18 + 0x114));
  if (0.0 <= fVar7) {
    local_a4 = local_88[3];
    local_a0 = uStack_78;
    local_9c = uStack_74;
    uStack_b0 = uStack_4c;
    pFStack_ac = (FPlane *)uStack_48;
    local_a8 = uStack_44;
    uStack_bc = local_88[0];
    uStack_b8 = local_88[1];
    uStack_b4 = local_88[2];
    uStack_c0 = 0x105f4069;
    puVar3 = (undefined4 *)FPlane::FPlane(local_28);
    *(undefined4 *)param_1 = *puVar3;
    *(undefined4 *)(param_1 + 4) = puVar3[1];
    *(undefined4 *)(param_1 + 8) = puVar3[2];
    *(undefined4 *)(param_1 + 0xc) = puVar3[3];
    uStack_c8 = uStack_70;
    uStack_c4 = uStack_6c;
    uStack_c0 = uStack_68;
    uStack_d4 = uStack_58;
    uStack_d0 = uStack_54;
    uStack_cc = uStack_50;
    uStack_dc = uStack_78;
    uStack_d8 = uStack_74;
    uVar14 = local_88[3];
    puVar3 = (undefined4 *)FPlane::FPlane((FPlane *)&uStack_4c,local_88[3]);
    *(undefined4 *)(param_1 + 0x10) = *puVar3;
    *(undefined4 *)(param_1 + 0x14) = puVar3[1];
    *(undefined4 *)(param_1 + 0x18) = puVar3[2];
    *(undefined4 *)(param_1 + 0x1c) = puVar3[3];
    pFVar4 = pFStack_ac;
    uVar13 = uStack_74;
    puVar3 = (undefined4 *)
             FPlane::FPlane((FPlane *)&uStack_70,local_88[0],local_88[1],local_88[2],pFStack_ac,
                            local_a8,local_a4,local_88[3],uStack_78,uStack_74);
    *(undefined4 *)(param_1 + 0x20) = *puVar3;
    *(undefined4 *)(param_1 + 0x24) = puVar3[1];
    *(undefined4 *)(param_1 + 0x28) = puVar3[2];
    *(undefined4 *)(param_1 + 0x2c) = puVar3[3];
    uVar11 = uStack_dc;
    uVar12 = uStack_d0;
    uVar9 = uVar13;
    uVar10 = uVar14;
    puVar3 = (undefined4 *)
             FPlane::FPlane((FPlane *)&stack0xffffff6c,uStack_dc,uStack_d8,uStack_d4,uStack_78,
                            uVar13,uVar14,uStack_d0,uStack_cc,uStack_c8);
    *(undefined4 *)(param_1 + 0x30) = *puVar3;
    *(undefined4 *)(param_1 + 0x34) = puVar3[1];
    *(undefined4 *)(param_1 + 0x38) = puVar3[2];
    *(undefined4 *)(param_1 + 0x3c) = puVar3[3];
    uVar8 = uVar9;
    local_88[3] = uVar10;
    puVar3 = (undefined4 *)
             FPlane::FPlane((FPlane *)&uStack_b8,uVar13,uVar14,uVar12,uStack_d0,uStack_cc,uStack_c8,
                            uStack_78,uVar9,uVar10);
    *(undefined4 *)(param_1 + 0x40) = *puVar3;
    *(undefined4 *)(param_1 + 0x44) = puVar3[1];
    *(undefined4 *)(param_1 + 0x48) = puVar3[2];
    *(undefined4 *)(param_1 + 0x4c) = puVar3[3];
  }
  else {
    local_a4 = uStack_4c;
    local_a0 = uStack_48;
    local_9c = uStack_44;
    uStack_b0 = local_88[3];
    pFStack_ac = (FPlane *)uStack_78;
    local_a8 = uStack_74;
    uStack_bc = local_88[0];
    uStack_b8 = local_88[1];
    uStack_b4 = local_88[2];
    uStack_c0 = 0x105f3e0a;
    puVar3 = (undefined4 *)FPlane::FPlane(local_28);
    *(undefined4 *)param_1 = *puVar3;
    *(undefined4 *)(param_1 + 4) = puVar3[1];
    *(undefined4 *)(param_1 + 8) = puVar3[2];
    *(undefined4 *)(param_1 + 0xc) = puVar3[3];
    uStack_c8 = uStack_58;
    uStack_c4 = uStack_54;
    uStack_c0 = uStack_50;
    uStack_d4 = uStack_70;
    uStack_d0 = uStack_6c;
    uStack_cc = uStack_68;
    uStack_dc = uStack_78;
    uStack_d8 = uStack_74;
    pFVar4 = (FPlane *)local_88[3];
    puVar3 = (undefined4 *)FPlane::FPlane((FPlane *)&uStack_4c,local_88[3]);
    *(undefined4 *)(param_1 + 0x10) = *puVar3;
    *(undefined4 *)(param_1 + 0x14) = puVar3[1];
    *(undefined4 *)(param_1 + 0x18) = puVar3[2];
    *(undefined4 *)(param_1 + 0x1c) = puVar3[3];
    uVar14 = local_a8;
    uVar16 = local_a4;
    puVar3 = (undefined4 *)
             FPlane::FPlane((FPlane *)&uStack_70,local_88[0],local_88[1],local_88[2],local_88[3],
                            uStack_78,uStack_74,pFStack_ac,local_a8,local_a4);
    *(undefined4 *)(param_1 + 0x20) = *puVar3;
    *(undefined4 *)(param_1 + 0x24) = puVar3[1];
    *(undefined4 *)(param_1 + 0x28) = puVar3[2];
    *(undefined4 *)(param_1 + 0x2c) = puVar3[3];
    uVar11 = uStack_dc;
    uVar12 = uStack_cc;
    uVar13 = uStack_c8;
    uVar15 = uVar14;
    puVar3 = (undefined4 *)
             FPlane::FPlane((FPlane *)&stack0xffffff6c,uStack_dc,uStack_d8,uStack_d4,uStack_d0,
                            uStack_cc,uStack_c8,uVar14,uVar16,pFVar4);
    *(undefined4 *)(param_1 + 0x30) = *puVar3;
    *(undefined4 *)(param_1 + 0x34) = puVar3[1];
    *(undefined4 *)(param_1 + 0x38) = puVar3[2];
    *(undefined4 *)(param_1 + 0x3c) = puVar3[3];
    uVar9 = uStack_cc;
    uVar10 = uStack_c8;
    uStack_78 = local_88[1];
    uVar8 = local_88[2];
    local_88[1] = uVar15;
    local_88[2] = uVar16;
    puVar3 = (undefined4 *)
             FPlane::FPlane((FPlane *)&uStack_b8,uVar12,uVar13,uVar14,uVar15,uVar16,pFVar4,uStack_d0
                            ,uStack_cc,uStack_c8);
    *(undefined4 *)(param_1 + 0x40) = *puVar3;
    *(undefined4 *)(param_1 + 0x44) = puVar3[1];
    *(undefined4 *)(param_1 + 0x48) = puVar3[2];
    *(undefined4 *)(param_1 + 0x4c) = puVar3[3];
  }
  puVar3 = (undefined4 *)
           FPlane::FPlane((FPlane *)&uStack_dc,uVar9,uVar10,uVar11,local_88[1],local_88[2],pFVar4,
                          uStack_78,uVar8,local_88[3]);
  *(undefined4 *)(param_1 + 0x50) = *puVar3;
  *(undefined4 *)(param_1 + 0x54) = puVar3[1];
  *(undefined4 *)(param_1 + 0x58) = puVar3[2];
  *(undefined4 *)(param_1 + 0x5c) = puVar3[3];
  *(undefined4 *)(param_1 + 0x200) = 6;
  return param_1;
}


// ==== 105f4460 FUN_105f4460

void FUN_105f4460(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821d94;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 8));
  ExceptionList = local_c;
  return;
}


// ==== 105f44c0 FUN_105f44c0

void FUN_105f44c0(undefined4 param_1,int param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821dc4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 2));
  local_4 = 1;
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  FArray::AddZeroed((FArray *)(in_ECX + 2),4,param_2);
  ExceptionList = local_c;
  return;
}


// ==== 105f4550 FUN_105f4550

void FUN_105f4550(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10821deb;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10325f90();
  ExceptionList = local_c;
  return;
}


// ==== 105f45a0 FUN_105f45a0

void FUN_105f45a0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  thunk_FUN_1032bcd0(param_1 + 2);
  return;
}


// ==== 105f45d0 FUN_105f45d0

void FUN_105f45d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821e00;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0xcc) + param_2 * 0x14 + 4);
  ExceptionList = &local_10;
  if (iVar2 != -1) {
    for (; piVar1 = (int *)(*(int *)(param_1 + 0xd8) + iVar2 * 4), *piVar1 != 0; iVar2 = iVar2 + 1)
    {
      local_18 = *piVar1;
      if ((-1 < (char)*(uint *)(local_18 + 100)) && ((*(uint *)(local_18 + 100) & 0x200) == 0)) {
        thunk_FUN_105f3470(&local_18);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105f4663 Catch@105f4663

void Catch_105f4663(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105f4677 Catch@105f4677

void Catch_105f4677(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CalculateLeafLights");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f46d0 FUN_105f46d0

void FUN_105f46d0(int param_1,int param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  float fVar8;
  float local_48;
  float local_44;
  float local_40;
  float local_34;
  undefined8 local_30;
  float local_28;
  float local_24;
  int local_20;
  int *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10821e10;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  local_8 = 0;
  pfVar1 = (float *)(*(int *)(param_1 + 100) + param_2 * 0x78);
  local_18 = *(int *)(param_1 + 0xa4) + (int)pfVar1[7] * 0x44;
  uVar3 = *(uint *)(local_18 + 4);
  local_20 = 0;
  ExceptionList = &local_10;
  do {
    if (param_3[1] <= local_20) {
      ExceptionList = local_10;
      return;
    }
    piVar4 = *(int **)(*param_3 + local_20 * 4);
    if ((piVar4[0x17] & 1U) == (uVar3 >> 0x14 & 1)) {
      local_1c = piVar4;
      if (*(char *)((int)piVar4 + 0x3bd) == '\x13') {
        iVar5 = thunk_FUN_105d2c00(piVar4[0x3b]);
        if ((iVar5 != 0) || (*(char *)((int)pfVar1 + 0x55) == (char)piVar4[0x3d])) {
          pfVar6 = (float *)FRotator::Vector((FRotator *)(piVar4 + 0x72));
          local_24 = -*pfVar6;
          local_28 = -pfVar6[1];
          fVar2 = pfVar1[2] * -pfVar6[2] + pfVar1[1] * local_28 + *pfVar1 * local_24;
          local_30 = (double)CONCAT44(fVar2,(undefined4)local_30);
          if (0.0 < fVar2) goto LAB_105f490f;
        }
        iVar5 = thunk_FUN_105d2c00(piVar4[0x3b]);
        if ((iVar5 != 0) || (*(char *)(pfVar1 + 0x15) == (char)piVar4[0x3d])) {
          pfVar6 = (float *)FRotator::Vector((FRotator *)(piVar4 + 0x72));
          local_34 = -*pfVar6;
          local_28 = -pfVar6[1];
          local_24 = -pfVar6[2];
          fVar2 = pfVar1[2] * local_24 + pfVar1[1] * local_28 + *pfVar1 * local_34;
          local_30 = (double)CONCAT44(fVar2,(undefined4)local_30);
          if ((fVar2 < 0.0) && ((*(uint *)(local_18 + 4) & 0x100) != 0)) goto LAB_105f490f;
        }
      }
      else {
        local_48 = (float)piVar4[0x6f] - pfVar1[0xb];
        local_30 = (double)CONCAT44(local_48,(undefined4)local_30);
        local_44 = (float)piVar4[0x70] - pfVar1[0xc];
        local_40 = (float)piVar4[0x71] - pfVar1[0xd];
        local_28 = local_44;
        local_24 = local_40;
        fVar7 = (float10)(**(code **)(*piVar4 + 0x84))();
        local_30 = (double)(float)(fVar7 + (float10)pfVar1[0xe]);
        fVar8 = FVector::SizeSquared((FVector *)&local_48);
        fVar2 = (float)((float10)local_30 * (float10)local_30);
        local_30 = (double)CONCAT44(fVar2,(undefined4)local_30);
        if ((fVar8 < fVar2) &&
           (((*(uint *)(local_18 + 4) & 0x100) != 0 ||
            (fVar2 = ((float)piVar4[0x71] * pfVar1[2] +
                     *pfVar1 * (float)piVar4[0x6f] + (float)piVar4[0x70] * pfVar1[1]) - pfVar1[3],
            local_30 = (double)CONCAT44(fVar2,(undefined4)local_30), 0.0 < fVar2)))) {
LAB_105f490f:
          thunk_FUN_105f34a0(&local_1c);
        }
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}


// ==== 105f4948 Catch@105f4948

void Catch_105f4948(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 105f495c Catch@105f495c

void Catch_105f495c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CalculateSurfaceLights");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f4a30 FUN_105f4a30

void FUN_105f4a30(byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10821e2b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10325f90();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 105f4aa0 FUN_105f4aa0

void FUN_105f4aa0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10821e49;
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
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105f4b60 FUN_105f4b60

void FUN_105f4b60(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  undefined4 *in_ECX;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821e74;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 1));
  local_4 = 1;
  in_ECX[8] = param_4;
  iVar1 = (param_4 - param_2) + 1;
  *in_ECX = param_1;
  in_ECX[9] = param_5;
  in_ECX[6] = param_2;
  in_ECX[7] = param_3;
  in_ECX[4] = iVar1;
  in_ECX[5] = (param_5 - param_3) + 1;
  iVar1 = appCeil((float)iVar1 * 0.125);
  in_ECX[0xd] = param_6;
  in_ECX[0xc] = iVar1;
  FArray::AddZeroed((FArray *)(in_ECX + 1),1,in_ECX[5] * iVar1);
  ExceptionList = local_c;
  return;
}


// ==== 105f4c60 FUN_105f4c60

void FUN_105f4c60(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10821ea0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 100) + param_2 * 0x78;
  ExceptionList = &local_10;
  thunk_FUN_10369160();
  local_8._0_1_ = 1;
  thunk_FUN_10369160();
  local_8 = CONCAT31(local_8._1_3_,2);
  if (*(int *)(iVar1 + 0x5c) == -1) {
    if (*(int *)(iVar1 + 0x24) != -1) {
      thunk_FUN_105f4c60(param_1,*(int *)(iVar1 + 0x24),&local_3c,param_4);
    }
  }
  else {
    thunk_FUN_105f45d0(param_1,*(int *)(iVar1 + 0x5c),&local_3c);
  }
  if (*(int *)(iVar1 + 0x58) == -1) {
    if (*(int *)(iVar1 + 0x20) != -1) {
      thunk_FUN_105f4c60(param_1,*(int *)(iVar1 + 0x20),&local_30,param_4);
    }
  }
  else {
    thunk_FUN_105f45d0(param_1,*(int *)(iVar1 + 0x58),&local_30);
  }
  for (; param_2 != -1; param_2 = *(int *)(*(int *)(param_1 + 100) + 0x28 + param_2 * 0x78)) {
    thunk_FUN_105f46d0(param_1,param_2,&local_3c,param_4);
    if ((*(uint *)(*(int *)(param_1 + 0xa4) + 4 +
                  *(int *)(*(int *)(param_1 + 100) + param_2 * 0x78 + 0x1c) * 0x44) & 0x100) != 0) {
      thunk_FUN_105f46d0(param_1,param_2,&local_30,param_4);
    }
  }
  for (iVar1 = 0; local_18 = iVar1, iVar1 < local_38; iVar1 = iVar1 + 1) {
    thunk_FUN_105f34a0(local_3c + iVar1 * 4);
  }
  for (iVar1 = 0; local_1c = iVar1, iVar1 < local_2c; iVar1 = iVar1 + 1) {
    thunk_FUN_105f34a0(local_30 + iVar1 * 4);
  }
  local_8._0_1_ = 1;
  thunk_FUN_10392590();
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_10392590();
  ExceptionList = local_10;
  return;
}


// ==== 105f4de2 Catch@105f4de2

void Catch_105f4de2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105f4df6 Catch@105f4df6

void Catch_105f4df6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CalculateNodeLights");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f4e80 FUN_105f4e80

void FUN_105f4e80(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821ec4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 3));
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = 0;
  in_ECX[6] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 105f4f00 FUN_105f4f00

void FUN_105f4f00(void)

{
  int *piVar1;
  float *pfVar2;
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
  char *pcVar19;
  int iVar20;
  int *in_ECX;
  byte bVar21;
  int iVar22;
  byte *pbVar23;
  int iStack_a8;
  int iStack_a0;
  int iStack_94;
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10821efc;
  pvStack_c = ExceptionList;
  iVar20 = in_ECX[6];
  ExceptionList = &pvStack_c;
  if (iVar20 != 0) {
    local_4 = 0xffffffff;
    ExceptionList = &pvStack_c;
    thunk_FUN_10325f90();
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar20);
    in_ECX[6] = 0;
  }
  if (in_ECX[2] != 0) {
    (**(code **)(*(int *)in_ECX[1] + 0x70))();
    in_ECX[2] = 0;
    if ((DAT_10dacbfc & 1) == 0) {
      DAT_10dacbfc = DAT_10dacbfc | 1;
      local_4 = 0xffffffff;
    }
    (**(code **)(**(int **)(in_ECX[1] + 0x7c) + 0xa4))(in_ECX[1],&DAT_10c798c8);
    iStack_94 = 0;
    if (0 < in_ECX[4]) {
      do {
        iVar20 = *in_ECX;
        iVar22 = *(int *)(in_ECX[3] + iStack_94 * 8) * 0xac + *(int *)(iVar20 + 0x10c);
        piVar1 = (int *)(*(int *)(iVar22 + 0x94) + *(int *)(in_ECX[3] + iStack_94 * 8 + 4) * 0x38);
        pfVar2 = (float *)(*(int *)(iVar20 + 0x84) +
                          *(int *)(*(int *)(iVar20 + 0xa4) + 0xc + *(int *)(iVar22 + 0x14) * 0x44) *
                          0xc);
        fVar3 = *pfVar2;
        fVar4 = pfVar2[1];
        fVar5 = pfVar2[2];
        fVar15 = (float)piVar1[7];
        fVar6 = *(float *)(iVar22 + 0x88);
        fVar7 = *(float *)(iVar22 + 0x8c);
        fVar8 = *(float *)(iVar22 + 0x90);
        fVar16 = (float)piVar1[6];
        fVar9 = *(float *)(iVar22 + 0x7c);
        iStack_a8 = 0;
        fVar10 = *(float *)(iVar22 + 0x80);
        fVar11 = *(float *)(iVar22 + 0x84);
        fVar12 = *(float *)(iVar22 + 0x70);
        fVar13 = *(float *)(iVar22 + 0x74);
        fVar14 = *(float *)(iVar22 + 0x78);
        if (0 < piVar1[5]) {
          do {
            pbVar23 = (byte *)(piVar1[0xc] * iStack_a8 + piVar1[1]);
            bVar21 = 1;
            iStack_a0 = 0;
            if (0 < piVar1[4]) {
              pcVar19 = &DAT_10c798c9 + ((piVar1[0xb] + iStack_a8) * 0x200 + piVar1[10]) * 4;
              do {
                if (((pcVar19[1] == -1) && (*pcVar19 == -1)) && (pcVar19[-1] == -1)) {
                  if (*(char *)(*piVar1 + 0x3bd) == '\x13') {
                    fVar17 = (float)iStack_a8;
                    fVar18 = (float)iStack_a0;
                    iVar20 = UModel::PointRegion((UModel *)*in_ECX,auStack_18,
                                                 *(undefined4 *)(*(int *)(in_ECX[1] + 0x3c) + 0xe0),
                                                 fVar18 * *(float *)(iVar22 + 0x7c) +
                                                 fVar16 * fVar9 + fVar12 + fVar15 * fVar6 + fVar3 +
                                                 fVar17 * *(float *)(iVar22 + 0x88),
                                                 *(float *)(iVar22 + 0x80) * fVar18 +
                                                 fVar13 + fVar10 * fVar16 + fVar7 * fVar15 + fVar4 +
                                                 *(float *)(iVar22 + 0x8c) * fVar17,
                                                 fVar18 * *(float *)(iVar22 + 0x84) +
                                                 fVar14 + fVar16 * fVar11 + fVar15 * fVar8 + fVar5 +
                                                 fVar17 * *(float *)(iVar22 + 0x90));
                    if (*(char *)(iVar20 + 8) == '\0') {
                      *pbVar23 = *pbVar23 & ~bVar21;
                    }
                    else {
                      *pbVar23 = *pbVar23 | bVar21;
                    }
                  }
                  else {
                    *pbVar23 = *pbVar23 | bVar21;
                  }
                }
                else {
                  *pbVar23 = *pbVar23 & ~bVar21;
                }
                bVar21 = bVar21 * '\x02';
                if (bVar21 == 0) {
                  pbVar23 = pbVar23 + 1;
                  bVar21 = 1;
                }
                iStack_a0 = iStack_a0 + 1;
                pcVar19 = pcVar19 + 4;
              } while (iStack_a0 < piVar1[4]);
            }
            iStack_a8 = iStack_a8 + 1;
          } while (iStack_a8 < piVar1[5]);
        }
        iStack_94 = iStack_94 + 1;
      } while (iStack_94 < in_ECX[4]);
    }
    FArray::Empty((FArray *)(in_ECX + 3),8,0);
  }
  ExceptionList = pvStack_c;
  return;
}


// ==== 105f5400 FUN_105f5400

void FUN_105f5400(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10821f1b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_105f4f00();
  local_4 = 0xffffffff;
  thunk_FUN_105f4aa0();
  ExceptionList = local_c;
  return;
}


// ==== 105f5460 FUN_105f5460

void FUN_105f5460(int param_1,int param_2)

{
  int *piVar1;
  FBspSurf *pFVar2;
  uint *puVar3;
  AActor *pAVar4;
  undefined3 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *in_ECX;
  int unaff_EBP;
  FLightMap *pFVar9;
  int unaff_EDI;
  int aiStack_210 [124];
  void *pvStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10821fa5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (in_ECX[6] == 0) {
    ExceptionList = &pvStack_c;
    aiStack_210[0] = (**(code **)**(undefined4 **)GMalloc_exref)();
    uStack_4 = 0;
    if (aiStack_210[0] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = thunk_FUN_105f44c0();
    }
    in_ECX[6] = iVar6;
  }
  uStack_4 = 0xffffffff;
  pFVar9 = (FLightMap *)(param_1 * 0xac + *(int *)(*in_ECX + 0x10c));
  piVar1 = (int *)(*(int *)(pFVar9 + 0x94) + param_2 * 0x38);
  piVar8 = piVar1 + 0xb;
  iVar6 = thunk_FUN_105f2e40(piVar1 + 10,piVar8,piVar1[4],
                             *(undefined4 *)(*(int *)(pFVar9 + 0x94) + 0x14 + param_2 * 0x38));
  if (iVar6 == 0) {
    thunk_FUN_105f4f00();
    aiStack_210[0] = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_10853a28);
    uStack_4 = 1;
    if (aiStack_210[0] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = thunk_FUN_105f44c0(0x200,0x200);
    }
    uStack_4 = 0xffffffff;
    in_ECX[6] = iVar6;
    iVar6 = thunk_FUN_105f2e40(piVar1 + 10,piVar8,piVar1[4],piVar1[5]);
    if (iVar6 == 0) {
      appFailAssert("Layout->AddSurface(&LightBitmap->OffsetX,&LightBitmap->OffsetY,LightBitmap->SizeX,LightBitmap->SizeY)"
                    ,".\\UnModelLight.cpp",0x3fd);
    }
  }
  if (in_ECX[2] == 0) {
    iVar6 = (**(code **)(*(int *)in_ECX[1] + 0x6c))(0,0);
    while (iVar6 == 0) {
      appSleep(0.1);
      iVar6 = (**(code **)(*(int *)in_ECX[1] + 0x6c))(0,0);
    }
    in_ECX[2] = *(int *)(in_ECX[1] + 0x154);
  }
  (*(code *)**(undefined4 **)in_ECX[2])();
  (**(code **)(*(int *)in_ECX[2] + 0xc))(piVar1[10],*piVar8,piVar1[4],piVar1[5]);
  FArray::FArray((FArray *)&stack0xfffffde4);
  uStack_14 = 3;
  if ((*(char *)(*piVar1 + 0x3bd) == '\x13') && (iVar6 = 0, 0 < *(int *)(*in_ECX + 0xa8))) {
    unaff_EDI = 0;
    do {
      puVar3 = (uint *)(*(int *)(*in_ECX + 0xa4) + 4 + unaff_EDI);
      if (((char)*puVar3 < '\0') && ((*puVar3 & 1) == 0)) {
        *puVar3 = *puVar3 | 1;
        iVar7 = FArray::Add((FArray *)&stack0xfffffde4,1,4);
        *(int *)(unaff_EBP + iVar7 * 4) = iVar6;
      }
      unaff_EDI = unaff_EDI + 0x44;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(*in_ECX + 0xa8));
  }
  pAVar4 = (AActor *)*piVar1;
  pFVar2 = (FBspSurf *)(*(int *)(*in_ECX + 0xa4) + *(int *)(pFVar9 + 0x14) * 0x44);
  if (pAVar4[0x3bd] == (AActor)0x13) {
    piVar8 = (int *)FDirectionalLightMapSceneNode::FDirectionalLightMapSceneNode
                              ((FDirectionalLightMapSceneNode *)aiStack_210,(UViewport *)in_ECX[1],
                               pAVar4,pFVar2,pFVar9);
    uStack_14 = CONCAT31(uStack_14._1_3_,4);
    (**(code **)(*piVar8 + 8))(*(undefined4 *)(in_ECX[1] + 0x154));
    uVar5 = (undefined3)((uint)uStack_18 >> 8);
  }
  else {
    piVar8 = (int *)FPointLightMapSceneNode::FPointLightMapSceneNode
                              ((FPointLightMapSceneNode *)aiStack_210,(UViewport *)in_ECX[1],pAVar4,
                               pFVar2,pFVar9,piVar1[6],piVar1[7],piVar1[8],piVar1[9]);
    uStack_14 = CONCAT31(uStack_14._1_3_,7);
    (**(code **)(*piVar8 + 8))(*(undefined4 *)(in_ECX[1] + 0x154));
    uVar5 = (undefined3)((uint)uStack_18 >> 8);
  }
  uStack_18 = CONCAT31(uVar5,3);
  FLevelSceneNode::~FLevelSceneNode((FLevelSceneNode *)&stack0xfffffdec);
  iVar6 = 0;
  if (0 < unaff_EBP) {
    do {
      puVar3 = (uint *)(*(int *)(*in_ECX + 0xa4) + 4 + *(int *)(unaff_EDI + iVar6 * 4) * 0x44);
      *puVar3 = *puVar3 & 0xfffffffe;
      iVar6 = iVar6 + 1;
    } while (iVar6 < unaff_EBP);
  }
  (**(code **)(*(int *)in_ECX[2] + 4))();
  iVar7 = FArray::Add((FArray *)(in_ECX + 3),1,8);
  iVar6 = in_ECX[3];
  *(undefined4 *)(iVar6 + iVar7 * 8) = uStack_10;
  *(void **)(iVar6 + 4 + iVar7 * 8) = pvStack_c;
  uStack_18 = 0xffffffff;
  thunk_FUN_10325f90();
  ExceptionList = pvStack_20;
  return;
}


// ==== 105f58d0 FUN_105f58d0

void * FUN_105f58d0(byte param_1)

{
  void *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0xc,*(int *)((int)in_ECX + -4),thunk_FUN_10392590);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((void *)((int)in_ECX + -4));
    }
    return (void *)((int)in_ECX + -4);
  }
  thunk_FUN_10392590();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 105f5950 FUN_105f5950

void FUN_105f5950(ULevel *param_1)

{
  int iVar1;
  undefined4 uVar2;
  FMultiLightMapTexture *pFVar3;
  FLightMapTexture *pFVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10821fd8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar2 = thunk_FUN_105f44c0(0x200,0x200);
  local_8._0_1_ = 1;
  thunk_FUN_105f45a0(uVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_105f4550();
  iVar1 = *(int *)(param_1 + 0xc0);
  if (*(int *)(iVar1 + 0xfc) == 0) {
    pFVar4 = (FLightMapTexture *)thunk_FUN_10370ad0(0x6c,iVar1 + 0x100);
    if (pFVar4 == (FLightMapTexture *)0x0) {
      pFVar4 = (FLightMapTexture *)0x0;
    }
    else {
      pFVar4 = (FLightMapTexture *)FLightMapTexture::FLightMapTexture(pFVar4,param_1);
    }
  }
  else {
    pFVar3 = (FMultiLightMapTexture *)thunk_FUN_10370be0(0x1c,iVar1 + 0xf0);
    if (pFVar3 == (FMultiLightMapTexture *)0x0) {
      pFVar4 = FMultiLightMapTexture::AddLightMapTexture((FMultiLightMapTexture *)0x0);
    }
    else {
      pFVar3 = (FMultiLightMapTexture *)FMultiLightMapTexture::FMultiLightMapTexture(pFVar3,param_1)
      ;
      pFVar4 = FMultiLightMapTexture::AddLightMapTexture(pFVar3);
    }
  }
  *(int *)(pFVar4 + 0x68) = *(int *)(pFVar4 + 0x68) + 1;
  ExceptionList = local_10;
  return;
}


// ==== 105f5a26 Catch@105f5a26

void Catch_105f5a26(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105f5a3a Catch@105f5a3a

void Catch_105f5a3a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CreateLightMapTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f5aa0 FUN_105f5aa0

int FUN_105f5aa0(ULevel *param_1,int param_2,int param_3)

{
  int *piVar1;
  float *pfVar2;
  FLightMap *this;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  FMatrix *pFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  float *pfStack_434;
  FMatrix *pFStack_430;
  undefined4 auStack_42c [15];
  undefined4 uStack_3f0;
  FMatrix *pFStack_3ec;
  undefined4 auStack_3e8 [11];
  undefined4 uStack_3bc;
  int iStack_3b8;
  undefined4 local_35c [32];
  undefined4 local_2dc [16];
  FMatrix local_29c [64];
  FMatrix local_25c [64];
  FMatrix local_21c [64];
  FMatrix local_1dc [64];
  undefined4 local_19c;
  undefined4 local_18c;
  undefined4 local_17c;
  undefined4 local_16c;
  undefined4 local_160;
  undefined4 local_154;
  float local_148;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  int local_cc;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  int local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_94;
  float local_90;
  float local_8c;
  float local_84;
  float local_80;
  float local_7c;
  undefined1 *local_74;
  void *local_70;
  undefined1 *puStack_6c;
  int local_68;
  float local_64;
  undefined8 local_60;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined1 *local_8;
  
  puStack_6c = &LAB_1082204b;
  local_70 = ExceptionList;
  local_74 = &stack0xfffffc58;
  local_cc = 0;
  local_68 = 0;
  iVar8 = *(int *)(param_1 + 0xc0);
  local_3c = *(int *)(iVar8 + 0xa4) + param_2 * 0x44;
  while( true ) {
    if (*(int *)(iVar8 + 0x110) <= local_cc) {
      ExceptionList = &local_70;
      FVector::FindBestAxisVectors
                ((FVector *)(*(int *)(iVar8 + 0x84) + *(int *)(local_3c + 0xc) * 0xc),
                 (FVector *)&local_48,(FVector *)&local_54);
      local_30 = 1e+07;
      local_2c = 1e+07;
      local_34 = -1e+07;
      local_38 = -1e+07;
      for (local_58 = 0; local_58 < *(int *)(iVar8 + 0x68); local_58 = local_58 + 1) {
        iVar7 = *(int *)(iVar8 + 100) + local_58 * 0x78;
        if (*(int *)(iVar7 + 0x1c) == param_2) {
          local_b8 = 0;
          while (iVar10 = local_b8, local_b8 < (int)(uint)*(byte *)(iVar7 + 0x56)) {
            piVar1 = (int *)(*(int *)(iVar8 + 0x74) + (*(int *)(iVar7 + 0x18) + local_b8) * 8);
            pfVar2 = (float *)(*(int *)(iVar8 + 0x94) + *piVar1 * 0xc);
            local_18 = pfVar2[2] * local_40 + local_48 * *pfVar2 + pfVar2[1] * local_44;
            pfVar2 = (float *)(*(int *)(iVar8 + 0x94) + *piVar1 * 0xc);
            local_c = pfVar2[2] * local_4c + *pfVar2 * local_54 + pfVar2[1] * local_50;
            fVar12 = (float10)thunk_FUN_104a4970();
            local_30 = (float)fVar12;
            fVar12 = (float10)thunk_FUN_104a4940();
            local_34 = (float)fVar12;
            fVar12 = (float10)thunk_FUN_104a4970();
            local_2c = (float)fVar12;
            fVar12 = (float10)thunk_FUN_104a4940();
            local_38 = (float)fVar12;
            local_b8 = iVar10 + 1;
          }
        }
      }
      this = (FLightMap *)thunk_FUN_10370c10();
      if (this == (FLightMap *)0x0) {
        iVar7 = 0;
      }
      else {
        iStack_3b8 = 0x105f5c78;
        iVar7 = FLightMap::FLightMap(this,param_1,param_2,param_3);
      }
      local_18 = (float)((iVar7 - *(int *)(iVar8 + 0x10c)) / 0xac);
      *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 1;
      local_10 = *(float *)(local_3c + 0x3c);
      local_c = *(float *)(local_3c + 0x3c);
      local_d8 = 0.0;
      uVar9 = -(uint)(*(int *)(DAT_10b221f0 + 0x1c) != 5) & 7;
      iVar10 = uVar9 + 1;
      while( true ) {
        local_14 = (float)~uVar9;
        local_8 = (undefined1 *)((local_34 - local_30) / local_10);
        iVar3 = appCeil((float)local_8);
        uVar4 = iVar3 + 1 + iVar10 & (uint)local_14;
        *(uint *)(iVar7 + 0x24) = uVar4;
        if ((int)uVar4 < 0x101) break;
        local_10 = local_10 * 2.0;
        local_c = local_c * 2.0;
      }
      while( true ) {
        local_60 = (double)(local_38 - local_2c);
        local_8 = (undefined1 *)((local_38 - local_2c) / local_c);
        iVar3 = appCeil((float)local_8);
        uVar9 = iVar3 + 1 + iVar10 & (uint)local_14;
        *(uint *)(iVar7 + 0x28) = uVar9;
        if ((int)uVar9 < 0x101) break;
        local_10 = local_10 * 2.0;
        local_c = local_c * 2.0;
      }
      local_10 = (local_34 - local_30) / ((float)*(int *)(iVar7 + 0x24) - 2.0);
      local_8 = *(undefined1 **)(iVar7 + 0x28);
      local_c = (float)local_60 / ((float)(int)local_8 - 2.0);
      local_d8 = local_30 - local_10;
      local_d4 = local_2c - local_c;
      iStack_3b8 = iVar7 + 0x1c;
      uStack_3bc = 0x105f5d97;
      iVar10 = thunk_FUN_105f2e40();
      if (iVar10 == 0) {
        thunk_FUN_105f5950();
        iStack_3b8 = iVar7 + 0x1c;
        uStack_3bc = 0x105f5dbe;
        iVar10 = thunk_FUN_105f2e40();
        if (iVar10 == 0) {
          iStack_3b8 = 0x105f5dd7;
          appFailAssert("LightMapLayout.AddSurface(&LightMap->OffsetX,&LightMap->OffsetY,LightMap->SizeX,LightMap->SizeY)"
                        ,".\\UnModelLight.cpp",0x2d8);
        }
      }
      if (*(int *)(*(int *)(param_1 + 0xc0) + 0xfc) == 0) {
        *(int *)(iVar7 + 0x10) = *(int *)(iVar8 + 0x104) + -1;
        thunk_FUN_104225e0();
      }
      else {
        iVar10 = *(int *)(iVar8 + 0xf4) + -1;
        *(int *)(iVar7 + 0x10) = iVar10;
        FMultiLightMapTexture::AddLightMapIndex
                  ((FMultiLightMapTexture *)(*(int *)(iVar8 + 0xf0) + iVar10 * 0x1c),(int)local_18);
      }
      local_64 = 1.0 / local_10;
      local_60 = (double)CONCAT44(0x3f800000,1.0 / local_c);
      iStack_3b8 = 0x105f5e71;
      puVar5 = (undefined4 *)thunk_FUN_103274a0();
      local_68._0_1_ = 1;
      pFVar6 = local_21c;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pFVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        pFVar6 = pFVar6 + 4;
      }
      local_148 = local_d8;
      local_c8 = -local_d8;
      local_c4 = -local_d4;
      local_c0 = 0x80000000;
      iStack_3b8 = 0x105f5ed0;
      local_14 = local_c4;
      local_8 = (undefined1 *)local_c8;
      puVar5 = (undefined4 *)thunk_FUN_10326fb0();
      local_68 = CONCAT31(local_68._1_3_,2);
      pFVar6 = local_1dc;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pFVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        pFVar6 = pFVar6 + 4;
      }
      pFVar6 = local_21c;
      puVar5 = local_2dc;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar5 = *(undefined4 *)pFVar6;
        pFVar6 = pFVar6 + 4;
        puVar5 = puVar5 + 1;
      }
      local_68._0_1_ = 3;
      pFVar6 = local_1dc;
      puVar5 = local_35c;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar5 = *(undefined4 *)pFVar6;
        pFVar6 = pFVar6 + 4;
        puVar5 = puVar5 + 1;
      }
      local_c = local_48 * local_50 - local_44 * local_54;
      local_14 = local_54 * local_40 - local_48 * local_4c;
      local_8 = (undefined1 *)(local_4c * local_44 - local_40 * local_50);
      local_28 = local_48;
      local_24 = local_54;
      local_20 = (float)local_8;
      local_130 = (float)local_8;
      local_1c = 0;
      local_12c = 0;
      local_138 = local_48;
      local_134 = local_54;
      local_128 = local_44;
      local_124 = local_50;
      local_120 = local_14;
      local_11c = 0;
      local_118 = local_40;
      local_114 = local_4c;
      local_110 = local_c;
      local_10c = 0;
      local_108 = 0;
      local_104 = 0;
      local_100 = 0;
      local_fc = 0x3f800000;
      local_68._0_1_ = 5;
      puVar5 = local_35c;
      puVar11 = auStack_3e8;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar11 = puVar11 + 1;
      }
      pFStack_3ec = local_29c;
      uStack_3f0 = 0x105f603e;
      pFVar6 = (FMatrix *)FMatrix::operator*((FMatrix *)&local_138);
      local_68._0_1_ = 6;
      puVar5 = local_2dc;
      puVar11 = auStack_42c;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar11 = puVar11 + 1;
      }
      pFStack_430 = local_25c;
      pfStack_434 = (float *)0x105f6063;
      puVar5 = (undefined4 *)FMatrix::operator*(pFVar6);
      puVar11 = (undefined4 *)(iVar7 + 0x30);
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar11 = puVar11 + 1;
      }
      local_68._0_1_ = 6;
      pfStack_434 = (float *)0x105f6083;
      FMatrix::~FMatrix(local_25c);
      local_68._0_1_ = 5;
      pfStack_434 = (float *)0x105f6093;
      FMatrix::~FMatrix(local_29c);
      local_68._0_1_ = 4;
      pfStack_434 = (float *)0x105f60a3;
      FMatrix::~FMatrix((FMatrix *)&local_138);
      local_68._0_1_ = 3;
      pfStack_434 = (float *)0x105f60b3;
      FMatrix::~FMatrix(local_1dc);
      local_68._0_1_ = 2;
      pfStack_434 = (float *)0x105f60c3;
      FMatrix::~FMatrix(local_21c);
      local_68._0_1_ = 1;
      pfStack_434 = (float *)0x105f60d2;
      thunk_FUN_103284c0();
      local_68._0_1_ = 0;
      pfStack_434 = (float *)0x105f60e1;
      thunk_FUN_10328560();
      pfStack_434 = &local_b4;
      uStack_438 = 0x105f60ee;
      FMatrix::Inverse((FMatrix *)(iVar7 + 0x30));
      local_68._0_1_ = 8;
      local_16c = 0;
      local_18c = 0;
      local_e8 = local_84 + local_94 * 0.0 + local_b4 * 0.0 + local_a4 * 0.0;
      local_e4 = local_90 * 0.0 + local_b0 * 0.0 + local_a0 * 0.0 + local_80;
      local_e0 = local_8c * 0.0 + local_ac * 0.0 + local_9c * 0.0 + local_7c;
      *(float *)(iVar7 + 0x70) = local_e8;
      *(float *)(iVar7 + 0x74) = local_e4;
      *(float *)(iVar7 + 0x78) = local_e0;
      local_154 = 0x3f800000;
      local_17c = 0x3f800000;
      local_f8 = local_84 * 0.0 + local_94 * 0.0 + local_a4 * 0.0 + local_b4;
      local_f4 = local_80 * 0.0 + local_90 * 0.0 + local_a0 * 0.0 + local_b0;
      local_f0 = local_7c * 0.0 + local_8c * 0.0 + local_9c * 0.0 + local_ac;
      *(float *)(iVar7 + 0x7c) = local_f8;
      *(float *)(iVar7 + 0x80) = local_f4;
      *(float *)(iVar7 + 0x84) = local_f0;
      local_160 = 0;
      local_19c = 0;
      local_28 = local_84 * 0.0 + local_94 * 0.0 + local_b4 * 0.0 + local_a4;
      local_24 = local_80 * 0.0 + local_90 * 0.0 + local_b0 * 0.0 + local_a0;
      local_20 = local_8c * 0.0 + local_ac * 0.0 + local_9c + local_7c * 0.0;
      *(float *)(iVar7 + 0x88) = local_28;
      *(float *)(iVar7 + 0x8c) = local_24;
      *(float *)(iVar7 + 0x90) = local_20;
      local_8 = (undefined1 *)&uStack_444;
      uStack_444 = *(undefined4 *)(local_3c + 0x2c);
      uStack_440 = *(undefined4 *)(local_3c + 0x30);
      uStack_43c = *(undefined4 *)(local_3c + 0x34);
      uStack_438 = *(undefined4 *)(local_3c + 0x38);
      thunk_FUN_105f0480((float *)(iVar7 + 0x70),(float *)(iVar7 + 0x7c),(float *)(iVar7 + 0x88));
      local_68 = (uint)local_68._1_3_ << 8;
      uStack_438 = 0x105f6294;
      FMatrix::~FMatrix((FMatrix *)&local_b4);
      ExceptionList = local_70;
      return (int)local_18;
    }
    iVar7 = local_cc * 0xac + *(int *)(iVar8 + 0x10c);
    if ((*(int *)(iVar7 + 0x14) == param_2) && (*(int *)(iVar7 + 0x18) == param_3)) break;
    local_cc = local_cc + 1;
  }
  return local_cc;
}


// ==== 105f62e2 Catch@105f62e2

void Catch_105f62e2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0xd8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x58,&DAT_10914c48);
}


// ==== 105f62f9 Catch@105f62f9

void Catch_105f62f9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SetupSurfaceLightMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f6540 FUN_105f6540

void FUN_105f6540(int param_1,int param_2)

{
  ULevel *pUVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  float *pfVar8;
  FVector *this;
  int *piVar9;
  int iVar10;
  UModel *in_ECX;
  uint uVar11;
  FOutputDevice *this_00;
  FPlane *this_01;
  int iVar12;
  float10 fVar13;
  double dVar14;
  float fVar15;
  undefined1 local_120 [16];
  undefined1 local_110 [12];
  float local_104;
  undefined1 local_f8 [56];
  double local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_54;
  ULevel *local_50;
  int local_4c;
  int local_48;
  float local_44;
  undefined8 local_40;
  int *local_38;
  int local_34;
  AZoneInfo *local_30;
  AZoneInfo *local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  UModel *local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puStack_7c = &LAB_1082208b;
  local_80 = ExceptionList;
  local_84 = &stack0xfffffec4;
  local_78 = 0;
  pUVar1 = *(ULevel **)(param_1 + 0xe4);
  if ((in_ECX == *(UModel **)(pUVar1 + 0xc0)) && (0 < *(int *)(in_ECX + 0x68))) {
    ExceptionList = &local_80;
    local_50 = pUVar1;
    local_18 = in_ECX;
    fVar13 = (float10)thunk_FUN_104da1f0();
    local_c0 = (double)fVar13;
    (**(code **)(**(int **)GWarn_exref + 0x10))(L"Illuminating BSP",1);
    iVar5 = **(int **)(*(int *)(pUVar1 + 0x74) + 0x54);
    puVar3 = (undefined4 *)
             FName::FName((FName *)((int)&local_40 + 4),(ushort *)L"LightingViewport",1);
    piVar4 = (int *)(**(code **)(iVar5 + 0x88))(*puVar3);
    local_38 = piVar4;
    (**(code **)(*(int *)pUVar1 + 200))(piVar4);
    (**(code **)(*(int *)piVar4[0x1e] + 0x6c))(piVar4);
    (**(code **)(*piVar4 + 0x8c))(0,0,0x80,0x80,0x40,0x40);
    *(undefined4 *)(piVar4[0xf] + 0x5b8) = 6;
    *(uint *)(piVar4[0xf] + 0x5ac) = *(uint *)(piVar4[0xf] + 0x5ac) & 0xfffffffb | 0x800;
    iVar5 = (**(code **)(*piVar4 + 0x6c))(0,0);
    if (iVar5 != 0) {
      local_c = -1.7014118e+38;
      (**(code **)(*(int *)piVar4[0x55] + 0x10))(1,0xff000000,1,0x3f800000,1,0);
      (**(code **)(*piVar4 + 0x70))();
      (**(code **)(*piVar4 + 0x74))();
    }
    piVar4[0x25] = 0x200;
    piVar4[0x26] = 0x200;
    FArray::Empty((FArray *)(in_ECX + 0x118),4,0);
    if (param_2 == 0) {
      thunk_FUN_103834f0(0);
      if (*(int *)(in_ECX + 0xfc) == 0) {
        thunk_FUN_103831b0(0);
        *(undefined4 *)(in_ECX + 0xfc) = 1;
      }
      else {
        thunk_FUN_103efe50(0);
      }
      for (local_8c = 0; local_8c < *(int *)(in_ECX + 0x68); local_8c = local_8c + 1) {
        *(undefined4 *)(*(int *)(in_ECX + 100) + 0x68 + local_8c * 0x78) = 0xffffffff;
      }
      for (local_a4 = 0; local_a4 < *(int *)(in_ECX + 0xe8); local_a4 = local_a4 + 1) {
        *(undefined4 *)(*(int *)(in_ECX + 0xe4) + 0x28 + local_a4 * 0x34) = 0xffffffff;
      }
      thunk_FUN_105f5950(pUVar1);
      for (local_28 = 0; local_28 < *(int *)(in_ECX + 0xe8); local_28 = local_28 + 1) {
        for (local_24 = 0; (int)local_24 < *(int *)(in_ECX + 0x134); local_24 = local_24 + 1) {
          local_a8 = 0;
          while (iVar5 = local_a8, local_a8 < *(int *)(in_ECX + 0x68)) {
            iVar12 = *(int *)(in_ECX + 100) + local_a8 * 0x78;
            if (((*(byte *)(iVar12 + 0x55) == local_24) && (*(int *)(iVar12 + 0x60) == local_28)) &&
               ((*(uint *)(*(int *)(in_ECX + 0xa4) + *(int *)(iVar12 + 0x1c) * 0x44 + 4) & 0x400091)
                == 0)) {
              uVar6 = thunk_FUN_105f5aa0(local_50,*(int *)(iVar12 + 0x1c),
                                         *(undefined1 *)(iVar12 + 0x55));
              *(undefined4 *)(iVar12 + 0x68) = uVar6;
            }
            piVar4 = local_38;
            local_a8 = iVar5 + 1;
          }
        }
      }
    }
    thunk_FUN_10369160();
    local_78._0_1_ = 1;
    uVar2 = *(uint *)(in_ECX + 0xa8);
    uVar11 = -(uint)((int)((ulonglong)uVar2 * 0xc >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 0xc);
    puVar7 = (uint *)thunk_FUN_103ff730(-(uint)(0xfffffffb < uVar11) | uVar11 + 4);
    local_40 = (double)CONCAT44(puVar7,(undefined4)local_40);
    local_78._0_1_ = 2;
    if (puVar7 == (uint *)0x0) {
      local_30 = (AZoneInfo *)0x0;
    }
    else {
      *puVar7 = uVar2;
      local_2c = (AZoneInfo *)(puVar7 + 1);
      _eh_vector_constructor_iterator_(local_2c,0xc,uVar2,thunk_FUN_10369160,thunk_FUN_10392590);
      local_30 = local_2c;
    }
    local_78._0_1_ = 1;
    thunk_FUN_105f4c60();
    thunk_FUN_105f4e80(in_ECX,piVar4);
    local_78 = CONCAT31(local_78._1_3_,3);
    iVar5 = (**(code **)(**(int **)GConfig_exref + 4))
                      (L"BSPSunLight",&DAT_10891990,&local_34,L"Env.INT");
    if (iVar5 == 0) {
      local_34 = 0;
    }
    for (local_1c = 0; iVar5 = local_1c, local_1c < *(int *)(in_ECX + 0x110);
        local_1c = local_1c + 1) {
      iVar12 = local_1c * 0xac + *(int *)(in_ECX + 0x10c);
      local_94 = *(int *)(in_ECX + 0xa4) + *(int *)(iVar12 + 0x14) * 0x44;
      local_2c = ULevel::GetZoneActor(local_50,*(int *)(iVar12 + 0x18));
      (**(code **)(**(int **)GWarn_exref + 0x18))
                (*(int **)GWarn_exref,iVar5,*(undefined4 *)(in_ECX + 0x110),L"Illuminating BSP");
      for (local_74 = 0; local_74 < *(int *)(iVar12 + 0xa4); local_74 = local_74 + 1) {
      }
      FArray::Empty((FArray *)(iVar12 + 0xa0),4,0);
      if ((((byte)local_2c[0x13c] & 1) != 0) && (*(int *)(in_ECX + 0xfc) != 0)) {
        local_10 = *(float *)(*(int *)(in_ECX + 0xf0) + *(int *)(iVar12 + 0x10) * 0x1c + 0x14);
        for (iVar5 = 0; local_a0 = iVar5, iVar5 < local_34 - (int)local_10; iVar5 = iVar5 + 1) {
          FMultiLightMapTexture::AddLightMapTexture
                    ((FMultiLightMapTexture *)
                     (*(int *)(in_ECX + 0xf0) + *(int *)(iVar12 + 0x10) * 0x1c));
        }
      }
      if (param_2 != 0) {
        for (iVar5 = 0; local_4c = iVar5, iVar5 < *(int *)(iVar12 + 0x98); iVar5 = iVar5 + 1) {
          iVar10 = *(int *)(*(int *)(iVar12 + 0x94) + iVar5 * 0x38);
          if (((*(byte *)(iVar10 + 0x5c) & 0x20) != 0) || ((*(byte *)(iVar10 + 100) & 0x80) != 0)) {
            thunk_FUN_103b3460(iVar5,1);
            iVar5 = iVar5 + -1;
            *(int *)(iVar12 + 0x2c) = *(int *)(iVar12 + 0x2c) + 1;
            if (*(int *)(in_ECX + 0xfc) == 0) {
              piVar4 = (int *)(*(int *)(iVar12 + 0x10) * 0x6c + 0x68 + *(int *)(in_ECX + 0x100));
              *piVar4 = *piVar4 + 1;
            }
            else {
              for (local_ac = 0; iVar10 = *(int *)(in_ECX + 0xf0) + *(int *)(iVar12 + 0x10) * 0x1c,
                  local_ac < *(int *)(iVar10 + 0x14); local_ac = local_ac + 1) {
                piVar4 = (int *)(*(int *)(iVar10 + 0x10) + 0x68 + local_ac * 0x6c);
                *piVar4 = *piVar4 + 1;
              }
            }
          }
        }
      }
      for (local_48 = 0; local_48 < *(int *)(local_30 + *(int *)(iVar12 + 0x14) * 0xc + 4);
          local_48 = local_48 + 1) {
        piVar4 = *(int **)(*(int *)(local_30 + *(int *)(iVar12 + 0x14) * 0xc) + local_48 * 4);
        if ((param_2 == 0) || ((*(byte *)(piVar4 + 0x17) & 0x20) != 0)) {
          if (*(char *)((int)piVar4 + 0x3bd) == '\x13') {
            local_10 = 0.0;
            local_8 = 0.0;
            local_14 = (float)(*(int *)(iVar12 + 0x24) + -1);
            local_c = (float)(*(int *)(iVar12 + 0x28) + -1);
          }
          else {
            this_01 = (FPlane *)(local_94 + 0x2c);
            local_10 = (*(float *)(local_94 + 0x34) * (float)piVar4[0x71] +
                       *(float *)this_01 * (float)piVar4[0x6f] +
                       *(float *)(local_94 + 0x30) * (float)piVar4[0x70]) -
                       *(float *)(local_94 + 0x38);
            fVar13 = (float10)(**(code **)(*piVar4 + 0x84))();
            local_8 = (float)fVar13 * (float)fVar13 * 1.05 - local_10 * local_10;
            fVar13 = (float10)thunk_FUN_104a4940(local_8,0);
            dVar14 = appSqrt((double)fVar13);
            local_8 = (float)dVar14;
            pfVar8 = (float *)FPlane::operator*(this_01,(float)local_120);
            local_104 = (float)piVar4[0x6f] - *pfVar8;
            local_14 = (float)piVar4[0x70] - pfVar8[1];
            local_c = (float)piVar4[0x71] - pfVar8[2];
            local_64 = *(float *)(iVar12 + 0x30) * local_104 + local_14 * *(float *)(iVar12 + 0x40)
                       + local_c * *(float *)(iVar12 + 0x50) + *(float *)(iVar12 + 0x60);
            local_60 = *(float *)(iVar12 + 0x54) * local_c +
                       *(float *)(iVar12 + 0x44) * local_14 + *(float *)(iVar12 + 0x34) * local_104
                       + *(float *)(iVar12 + 100);
            local_5c = local_c * *(float *)(iVar12 + 0x58) +
                       local_14 * *(float *)(iVar12 + 0x48) + *(float *)(iVar12 + 0x38) * local_104
                       + *(float *)(iVar12 + 0x68);
            local_40 = (double)local_8;
            fVar15 = local_10;
            local_44 = local_64;
            local_10 = local_104;
            local_14 = FVector::Size((FVector *)(iVar12 + 0x7c));
            local_14 = (float)local_40 / local_14;
            local_40 = (double)local_8;
            local_c = FVector::Size((FVector *)(iVar12 + 0x88));
            local_c = (float)local_40 / local_c;
            iVar5 = *(int *)(iVar12 + 0x24) + -1;
            uVar6 = FUN_107a6660(0,iVar5,fVar15);
            local_10 = (float)thunk_FUN_10370460(uVar6);
            uVar6 = FUN_107a6660(0,iVar5);
            local_14 = (float)thunk_FUN_10370460(uVar6);
            iVar5 = *(int *)(iVar12 + 0x28) + -1;
            uVar6 = FUN_107a6660(0,iVar5);
            local_8 = (float)thunk_FUN_10370460(uVar6);
            uVar6 = FUN_107a6660(0,iVar5);
            local_c = (float)thunk_FUN_10370460(uVar6);
            in_ECX = local_18;
          }
          if ((((byte)local_2c[0x13c] & 1) == 0) || (*(int *)(in_ECX + 0xfc) == 0)) {
            iVar5 = thunk_FUN_10370aa0(0x38,iVar12 + 0x94);
            if (iVar5 != 0) {
              thunk_FUN_105f4b60(piVar4,local_10,local_8,local_14,local_c,0);
            }
            thunk_FUN_105f5460(local_1c,*(int *)(iVar12 + 0x98) + -1);
          }
          else {
            local_40 = (double)CONCAT44(*(undefined4 *)
                                         (*(int *)(local_18 + 0xf0) + *(int *)(iVar12 + 0x10) * 0x1c
                                         + 0x14),(undefined4)local_40);
            FRotator::FRotator((FRotator *)&local_b8);
            FRotator::FRotator((FRotator *)&local_70);
            for (iVar5 = 0; local_9c = iVar5, iVar5 < local_40._4_4_; iVar5 = iVar5 + 1) {
              if (*(char *)((int)piVar4 + 0x3bd) == '\x13') {
                this = (FVector *)
                       thunk_FUN_106f41a0(local_f8,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x74),
                                          iVar5,local_34,local_110);
                piVar9 = (int *)FVector::Rotation(this);
                local_b8 = *piVar9;
                local_b4 = piVar9[1];
                local_b0 = piVar9[2];
                local_70 = piVar4[0x72];
                local_6c = piVar4[0x73];
                local_68 = piVar4[0x74];
                piVar4[0x72] = local_b8;
                piVar4[0x73] = local_b4;
                piVar4[0x74] = local_b0;
              }
              iVar10 = thunk_FUN_10370aa0(0x38,iVar12 + 0x94);
              if (iVar10 != 0) {
                thunk_FUN_105f4b60(piVar4,local_10,local_8,local_14,local_c,iVar5);
              }
              thunk_FUN_105f5460(local_1c,*(int *)(iVar12 + 0x98) + -1);
              if (*(char *)((int)piVar4 + 0x3bd) == '\x13') {
                piVar4[0x72] = local_70;
                piVar4[0x73] = local_6c;
                piVar4[0x74] = local_68;
              }
            }
          }
          *(int *)(iVar12 + 0x2c) = *(int *)(iVar12 + 0x2c) + 1;
          if (*(int *)(local_18 + 0xfc) == 0) {
            piVar4 = (int *)(*(int *)(iVar12 + 0x10) * 0x6c + 0x68 + *(int *)(local_18 + 0x100));
            *piVar4 = *piVar4 + 1;
          }
          else {
            for (local_88 = 0; iVar5 = *(int *)(local_18 + 0xf0) + *(int *)(iVar12 + 0x10) * 0x1c,
                local_88 < *(int *)(iVar5 + 0x14); local_88 = local_88 + 1) {
              piVar4 = (int *)(*(int *)(iVar5 + 0x10) + 0x68 + local_88 * 0x6c);
              *piVar4 = *piVar4 + 1;
            }
          }
        }
        in_ECX = local_18;
      }
      piVar4 = local_38;
    }
    thunk_FUN_105f4f00();
    for (local_20 = 0; local_20 < *(int *)(in_ECX + 0x110); local_20 = local_20 + 1) {
      iVar5 = local_20 * 0xac + *(int *)(in_ECX + 0x10c);
      for (iVar12 = 0; local_54 = iVar12, iVar12 < *(int *)(iVar5 + 0x98); iVar12 = iVar12 + 1) {
        iVar10 = *(int *)(iVar5 + 0x94) + iVar12 * 0x38;
        for (local_90 = 0; local_90 < *(int *)(iVar10 + 8); local_90 = local_90 + 1) {
          if (*(char *)(local_90 + *(int *)(iVar10 + 4)) != '\0') goto LAB_105f6ed8;
        }
        thunk_FUN_103b3460(iVar12,1);
        iVar12 = iVar12 + -1;
LAB_105f6ed8:
      }
      piVar4 = local_38;
    }
    if (local_30 != (AZoneInfo *)0x0) {
      thunk_FUN_105f58d0(3);
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(1);
    }
    if (param_2 == 0) {
      UModel::ClearRenderData(in_ECX,(URenderDevice *)0x0);
    }
    (**(code **)(**(int **)GWarn_exref + 0x14))();
    if (*(int *)GLog_exref != 0) {
      thunk_FUN_104da1f0();
      FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
    }
    local_78._0_1_ = 1;
    thunk_FUN_105f5400();
    local_78 = (uint)local_78._1_3_ << 8;
    thunk_FUN_10392590();
  }
  ExceptionList = local_80;
  return;
}


// ==== 105f6f89 Catch@105f6f89

void Catch_105f6f89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x5c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105f6f9d Catch@105f6f9d

void Catch_105f6f9d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::Illuminate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f7260 FUN_105f7260

uint FUN_105f7260(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x3bc) & 1;
}


// ==== 105f7270 FUN_105f7270

undefined4 FUN_105f7270(void)

{
  return 0;
}


// ==== 105f7280 FUN_105f7280

undefined4 FUN_105f7280(void)

{
  return 0;
}


// ==== 105f7290 FUN_105f7290

undefined4 FUN_105f7290(void)

{
  return 0;
}


// ==== 105f72a0 FUN_105f72a0

undefined4 FUN_105f72a0(void)

{
  return 0;
}


// ==== 105f72b0 FUN_105f72b0

void FUN_105f72b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108220f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 105f7310 FUN_105f7310

undefined4 FUN_105f7310(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x434) == 0) {
    return 0;
  }
  *param_1 = 0x43480000;
  *param_2 = 0x437f0000;
  iVar1 = *(int *)(in_ECX + 0x434);
  iVar2 = appRand();
  return *(undefined4 *)(*(int *)(in_ECX + 0x430) + (iVar2 % iVar1) * 4);
}


// ==== 105f7370 FUN_105f7370

undefined4 FUN_105f7370(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x440) == 0) {
    return 0;
  }
  *param_1 = 0x43fa0000;
  *param_2 = 0x437f0000;
  iVar1 = *(int *)(in_ECX + 0x440);
  iVar2 = appRand();
  return *(undefined4 *)(*(int *)(in_ECX + 0x43c) + (iVar2 % iVar1) * 4);
}


// ==== 105f73d0 FUN_105f73d0

void FUN_105f73d0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x574) = *(undefined4 *)(in_ECX + 0x1bc);
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(in_ECX + 0x1c0);
  *(undefined4 *)(in_ECX + 0x57c) = *(undefined4 *)(in_ECX + 0x1c4);
  *(undefined4 *)(in_ECX + 0x5a4) = *(undefined4 *)(in_ECX + 0x1c8);
  *(undefined4 *)(in_ECX + 0x5a8) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x5ac) = *(undefined4 *)(in_ECX + 0x1d0);
  return;
}


// ==== 105f7450 Catch@105f7450

void Catch_105f7450(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105f7464 Catch@105f7464

void Catch_105f7464(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::Spawned");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f74b0 FUN_105f74b0

void FUN_105f74b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  AActor *in_ECX;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822120;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  AActor::PostLoad(in_ECX);
  local_2c = 0xc640e400;
  local_28 = 0xc640e400;
  local_24 = 0xc640e400;
  *(undefined4 *)(in_ECX + 0x598) = 0xc640e400;
  *(undefined4 *)(in_ECX + 0x59c) = 0xc640e400;
  *(undefined4 *)(in_ECX + 0x5a0) = 0xc640e400;
  puVar1 = (undefined4 *)FRotator::FRotator((FRotator *)&local_2c,0x7b,0x1c8,0x315);
  *(undefined4 *)(in_ECX + 0x5bc) = *puVar1;
  *(undefined4 *)(in_ECX + 0x5c0) = puVar1[1];
  *(undefined4 *)(in_ECX + 0x5c4) = puVar1[2];
  if ((*(int *)(in_ECX + 0x278) != 0) && (*(int *)(*(int *)(in_ECX + 0x278) + 0x60) != 0)) {
    iVar2 = 0;
    while( true ) {
      if (*(int *)(*(int *)(*(int *)(in_ECX + 0x278) + 0x60) + 0x38) <= iVar2) break;
      *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x278) + 0x60) + 0x34) + 0x104 + iVar2 * 0x14c) =
           iVar2;
      iVar2 = iVar2 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105f758c Catch@105f758c

void Catch_105f758c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105f75a0 Catch@105f75a0

void Catch_105f75a0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::PostLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f7600 FUN_105f7600

void FUN_105f7600(void)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_ECX;
  float local_58 [3];
  FRotator local_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822130;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  if (*(byte *)(in_ECX + 1099) == 0) {
    local_34 = *(float *)(in_ECX + 0x1bc) - *(float *)(in_ECX + 0x580);
    local_30 = *(float *)(in_ECX + 0x1c0) - *(float *)(in_ECX + 0x584);
    local_2c = *(float *)(in_ECX + 0x1c4) - *(float *)(in_ECX + 0x588);
    ExceptionList = &local_10;
    *(float *)(in_ECX + 0x574) = local_34;
    *(float *)(in_ECX + 0x578) = local_30;
    *(float *)(in_ECX + 0x57c) = local_2c;
    local_20 = local_2c;
    local_1c = local_30;
    local_18 = local_34;
    local_14 = &stack0xffffff9c;
    puVar5 = (undefined4 *)FRotator::operator-((FRotator *)(in_ECX + 0x1c8),local_4c);
    *(undefined4 *)(in_ECX + 0x5a4) = *puVar5;
    *(undefined4 *)(in_ECX + 0x5a8) = puVar5[1];
    *(undefined4 *)(in_ECX + 0x5ac) = puVar5[2];
  }
  else {
    local_58[0] = *(float *)(in_ECX + 0x4b4) + *(float *)(in_ECX + 0x574);
    local_40 = *(float *)(in_ECX + 0x1bc) - local_58[0];
    local_3c = *(float *)(in_ECX + 0x1c0) -
               (*(float *)(in_ECX + 0x4b8) + *(float *)(in_ECX + 0x578));
    local_38 = *(float *)(in_ECX + 0x1c4) -
               (*(float *)(in_ECX + 0x4bc) + *(float *)(in_ECX + 0x57c));
    pfVar2 = (float *)(in_ECX + 0x4b4 + (uint)*(byte *)(in_ECX + 1099) * 0xc);
    ExceptionList = &local_10;
    *pfVar2 = local_40;
    pfVar2[1] = local_3c;
    pfVar2[2] = local_38;
    local_20 = local_40;
    local_1c = local_3c;
    local_18 = local_38;
    FRotator::operator+((FRotator *)(in_ECX + 0x5a4),(FRotator *)local_58);
    puVar6 = (undefined4 *)FRotator::operator-((FRotator *)(in_ECX + 0x1c8),local_4c);
    puVar5 = (undefined4 *)(in_ECX + 0x514 + (uint)*(byte *)(in_ECX + 1099) * 0xc);
    *puVar5 = *puVar6;
    puVar5[1] = puVar6[1];
    puVar5[2] = puVar6[2];
    iVar1 = in_ECX + (uint)*(byte *)(in_ECX + 1099) * 0xc;
    *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(iVar1 + 0x4b4);
    *(undefined4 *)(in_ECX + 0x584) = *(undefined4 *)(iVar1 + 0x4b8);
    *(undefined4 *)(in_ECX + 0x588) = *(undefined4 *)(iVar1 + 0x4bc);
    *(undefined4 *)(in_ECX + 0x5b0) = *(undefined4 *)(iVar1 + 0x514);
    *(undefined4 *)(in_ECX + 0x5b4) = *(undefined4 *)(iVar1 + 0x518);
    *(undefined4 *)(in_ECX + 0x5b8) = *(undefined4 *)(iVar1 + 0x51c);
  }
  pfVar2 = (float *)(in_ECX + 0x4b4 + (uint)*(byte *)(in_ECX + 1099) * 0xc);
  fVar3 = pfVar2[1];
  fVar4 = pfVar2[2];
  *(float *)(in_ECX + 0x1bc) = *(float *)(in_ECX + 0x574) + *pfVar2;
  *(float *)(in_ECX + 0x1c0) = fVar3 + *(float *)(in_ECX + 0x578);
  *(float *)(in_ECX + 0x1c4) = fVar4 + *(float *)(in_ECX + 0x57c);
  ExceptionList = local_10;
  return;
}


// ==== 105f785e Catch@105f785e

void Catch_105f785e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105f7872 Catch@105f7872

void Catch_105f7872(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::PostEditMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f7940 FUN_105f7940

/* WARNING: Removing unreachable block (ram,0x105f797a) */

void FUN_105f7940(void)

{
  AActor AVar1;
  undefined4 *puVar2;
  AActor *in_ECX;
  AActor *pAVar3;
  AActor *pAVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822140;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  ExceptionList = &local_10;
  AActor::PostEditChange(in_ECX);
  AVar1 = in_ECX[1099];
  if (6 < (byte)AVar1) {
    AVar1 = (AActor)0x7;
  }
  in_ECX[1099] = AVar1;
  local_34 = *(float *)(in_ECX + 0x1bc) - *(float *)(in_ECX + 0x580);
  local_30 = *(float *)(in_ECX + 0x1c0) - *(float *)(in_ECX + 0x584);
  local_2c = *(float *)(in_ECX + 0x1c4) - *(float *)(in_ECX + 0x588);
  *(float *)(in_ECX + 0x574) = local_34;
  *(float *)(in_ECX + 0x578) = local_30;
  *(float *)(in_ECX + 0x57c) = local_2c;
  pAVar3 = in_ECX + 0x5b0;
  pAVar4 = pAVar3;
  local_20 = local_2c;
  local_1c = local_30;
  local_18 = local_34;
  puVar2 = (undefined4 *)FRotator::operator-((FRotator *)(in_ECX + 0x1c8),(FRotator *)&local_40);
  *(undefined4 *)(in_ECX + 0x5a4) = *puVar2;
  *(undefined4 *)(in_ECX + 0x5a8) = puVar2[1];
  *(undefined4 *)(in_ECX + 0x5ac) = puVar2[2];
  AVar1 = in_ECX[1099];
  *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(in_ECX + (uint)(byte)AVar1 * 0xc + 0x4b4);
  *(undefined4 *)(in_ECX + 0x584) = *(undefined4 *)(in_ECX + (uint)(byte)AVar1 * 0xc + 0x4b8);
  *(undefined4 *)(in_ECX + 0x588) = *(undefined4 *)(in_ECX + (uint)(byte)AVar1 * 0xc + 0x4bc);
  *(undefined4 *)pAVar3 = *(undefined4 *)(in_ECX + (uint)(byte)AVar1 * 0xc + 0x514);
  *(undefined4 *)(in_ECX + 0x5b4) = *(undefined4 *)(in_ECX + (uint)(byte)AVar1 * 0xc + 0x518);
  *(undefined4 *)(in_ECX + 0x5b8) = *(undefined4 *)(in_ECX + (uint)(byte)AVar1 * 0xc + 0x51c);
  local_40 = *(float *)(in_ECX + 0x580) + *(float *)(in_ECX + 0x574);
  local_3c = *(float *)(in_ECX + 0x584) + *(float *)(in_ECX + 0x578);
  local_38 = *(float *)(in_ECX + 0x588) + *(float *)(in_ECX + 0x57c);
  *(float *)(in_ECX + 0x1bc) = local_40;
  *(float *)(in_ECX + 0x1c0) = local_3c;
  *(float *)(in_ECX + 0x1c4) = local_38;
  local_20 = local_40;
  local_1c = local_3c;
  local_18 = local_38;
  puVar2 = (undefined4 *)FRotator::operator+((FRotator *)(in_ECX + 0x5a4),(FRotator *)&local_40);
  *(undefined4 *)(in_ECX + 0x1c8) = *puVar2;
  *(undefined4 *)(in_ECX + 0x1cc) = puVar2[1];
  *(undefined4 *)(in_ECX + 0x1d0) = puVar2[2];
  (**(code **)(*(int *)in_ECX + 0x8c))(pAVar3,pAVar4);
  ExceptionList = local_10;
  return;
}


// ==== 105f7afb Catch@105f7afb

void Catch_105f7afb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105f7b0f Catch@105f7b0f

void Catch_105f7b0f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f7bb0 FUN_105f7bb0

void FUN_105f7bb0(void)

{
  int *piVar1;
  int *in_ECX;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822150;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &local_10;
  in_ECX[0x166] = 0;
  in_ECX[0x167] = 0;
  in_ECX[0x168] = 0;
  piVar1 = (int *)FRotator::FRotator((FRotator *)&local_28,0,0,0);
  in_ECX[0x16f] = *piVar1;
  in_ECX[0x170] = piVar1[1];
  in_ECX[0x171] = piVar1[2];
  (**(code **)(*in_ECX + 800))();
  ExceptionList = local_10;
  return;
}


// ==== 105f7c4f Catch@105f7c4f

void Catch_105f7c4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105f7c63 Catch@105f7c63

void Catch_105f7c63(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::PreRaytrace");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f7cc0 FUN_105f7cc0

/* WARNING: Removing unreachable block (ram,0x105f7cff) */

void FUN_105f7cc0(void)

{
  int iVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  int in_ECX;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822160;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  bVar3 = *(byte *)(in_ECX + 0x44e);
  if (bVar3 != 0xff) {
    if (6 < bVar3) {
      bVar3 = 7;
    }
    ExceptionList = &local_10;
    *(byte *)(in_ECX + 0x44e) = bVar3;
    puVar2 = &stack0xffffffc0;
    if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) &&
       (puVar2 = &stack0xffffffc0, *(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 0xc))();
      puVar2 = local_14;
    }
    local_14 = puVar2;
    iVar1 = in_ECX + (uint)*(byte *)(in_ECX + 0x44e) * 0xc;
    local_34 = *(float *)(iVar1 + 0x4b4) + *(float *)(in_ECX + 0x574);
    local_30 = *(float *)(iVar1 + 0x4b8) + *(float *)(in_ECX + 0x578);
    local_2c = *(float *)(iVar1 + 0x4bc) + *(float *)(in_ECX + 0x57c);
    *(float *)(in_ECX + 0x1bc) = local_34;
    *(float *)(in_ECX + 0x1c0) = local_30;
    *(float *)(in_ECX + 0x1c4) = local_2c;
    local_20 = local_2c;
    local_1c = local_30;
    local_18 = local_34;
    puVar4 = (undefined4 *)FRotator::operator+((FRotator *)(in_ECX + 0x5a4),(FRotator *)&local_34);
    *(undefined4 *)(in_ECX + 0x1c8) = *puVar4;
    *(undefined4 *)(in_ECX + 0x1cc) = puVar4[1];
    *(undefined4 *)(in_ECX + 0x1d0) = puVar4[2];
    if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) && (*(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0))
    {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 8))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105f7e0e Catch@105f7e0e

void Catch_105f7e0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105f7e22 Catch@105f7e22

void Catch_105f7e22(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::SetWorldRaytraceKey");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f7ea0 FUN_105f7ea0

/* WARNING: Removing unreachable block (ram,0x105f7ed5) */

void FUN_105f7ea0(void)

{
  int iVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  int in_ECX;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822170;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  bVar3 = *(byte *)(in_ECX + 0x44f);
  if (6 < bVar3) {
    bVar3 = 7;
  }
  ExceptionList = &local_10;
  *(byte *)(in_ECX + 0x44f) = bVar3;
  puVar2 = &stack0xffffffc0;
  if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) &&
     (puVar2 = &stack0xffffffc0, *(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 0xc))();
    puVar2 = local_14;
  }
  local_14 = puVar2;
  iVar1 = in_ECX + (uint)*(byte *)(in_ECX + 0x44f) * 0xc;
  local_34 = *(float *)(iVar1 + 0x4b4) + *(float *)(in_ECX + 0x574);
  local_30 = *(float *)(iVar1 + 0x4b8) + *(float *)(in_ECX + 0x578);
  local_2c = *(float *)(iVar1 + 0x4bc) + *(float *)(in_ECX + 0x57c);
  *(float *)(in_ECX + 0x1bc) = local_34;
  *(float *)(in_ECX + 0x1c0) = local_30;
  *(float *)(in_ECX + 0x1c4) = local_2c;
  local_20 = local_2c;
  local_1c = local_30;
  local_18 = local_34;
  puVar4 = (undefined4 *)FRotator::operator+((FRotator *)(in_ECX + 0x5a4),(FRotator *)&local_34);
  *(undefined4 *)(in_ECX + 0x1c8) = *puVar4;
  *(undefined4 *)(in_ECX + 0x1cc) = puVar4[1];
  *(undefined4 *)(in_ECX + 0x1d0) = puVar4[2];
  if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) && (*(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 8))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 105f7fe4 Catch@105f7fe4

void Catch_105f7fe4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105f7ff8 Catch@105f7ff8

void Catch_105f7ff8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::SetBrushRaytraceKey");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f8080 FUN_105f8080

void FUN_105f8080(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822180;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffb4;
  if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) &&
     (ExceptionList = &local_10, puVar2 = &stack0xffffffb4,
     *(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 0xc))();
    puVar2 = local_14;
  }
  local_14 = puVar2;
  iVar1 = in_ECX + (uint)*(byte *)(in_ECX + 1099) * 0xc;
  local_34 = *(float *)(iVar1 + 0x4b4) + *(float *)(in_ECX + 0x574);
  local_30 = *(float *)(iVar1 + 0x4b8) + *(float *)(in_ECX + 0x578);
  local_2c = *(float *)(iVar1 + 0x4bc) + *(float *)(in_ECX + 0x57c);
  *(float *)(in_ECX + 0x1bc) = local_34;
  *(float *)(in_ECX + 0x1c0) = local_30;
  *(float *)(in_ECX + 0x1c4) = local_2c;
  local_20 = local_2c;
  local_1c = local_30;
  local_18 = local_34;
  puVar3 = (undefined4 *)FRotator::operator+((FRotator *)(in_ECX + 0x5a4),(FRotator *)&local_40);
  *(undefined4 *)(in_ECX + 0x1c8) = *puVar3;
  *(undefined4 *)(in_ECX + 0x1cc) = puVar3[1];
  *(undefined4 *)(in_ECX + 0x1d0) = puVar3[2];
  if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) && (*(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0)) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 8))();
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  *(undefined4 *)(in_ECX + 0x598) = 0;
  *(undefined4 *)(in_ECX + 0x59c) = 0;
  *(undefined4 *)(in_ECX + 0x5a0) = 0;
  puVar3 = (undefined4 *)FRotator::FRotator((FRotator *)&local_40,0,0,0);
  *(undefined4 *)(in_ECX + 0x5bc) = *puVar3;
  *(undefined4 *)(in_ECX + 0x5c0) = puVar3[1];
  *(undefined4 *)(in_ECX + 0x5c4) = puVar3[2];
  ExceptionList = local_10;
  return;
}


// ==== 105f81f6 Catch@105f81f6

void Catch_105f81f6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105f820a Catch@105f820a

void Catch_105f820a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::PostRaytrace");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f8290 FUN_105f8290

void FUN_105f8290(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  UClass *pUVar4;
  int in_ECX;
  float fVar5;
  float10 fVar6;
  float fVar7;
  undefined4 uStack_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  FRotator local_a4 [52];
  float local_70;
  float local_6c;
  float local_68;
  float local_64 [5];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  UClass *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822190;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff50;
  local_8 = 0;
  ExceptionList = &local_10;
  FRotator::FRotator((FRotator *)&local_20);
  local_24 = UObject::StaticLoadClass
                       (&AActor::PrivateStaticClass,(UObject *)0x0,
                        (ushort *)L"Lineageeffect.p_u002_a",(ushort *)0x0,0x2000,(UPackageMap *)0x0)
  ;
  if (param_1 == 0) {
    local_20 = *(undefined4 *)(in_ECX + 0x1c8);
    local_1c = *(undefined4 *)(in_ECX + 0x1cc);
    local_18 = *(undefined4 *)(in_ECX + 0x1d0);
    fVar7 = *(float *)(in_ECX + 0x1bc);
    fVar5 = *(float *)(in_ECX + 0x1c0);
    local_28 = *(float *)(in_ECX + 0x1c4);
  }
  else {
    local_70 = *(float *)(in_ECX + 0x1bc) - *(float *)(param_1 + 0x1bc);
    local_6c = *(float *)(in_ECX + 0x1c0) - *(float *)(param_1 + 0x1c0);
    local_68 = *(float *)(in_ECX + 0x1c4) - *(float *)(param_1 + 0x1c4);
    local_38 = *(float *)(in_ECX + 0x2f0) * 0.5;
    local_64[3] = local_6c;
    local_44 = local_70;
    local_40 = local_6c;
    local_3c = local_68;
    local_34 = local_68;
    fVar7 = FVector::Size((FVector *)&local_70);
    if (((param_9 == 0) && (param_3 == 0)) && (100.0 < fVar7)) {
      fVar6 = (float10)thunk_FUN_103704b0();
      local_38 = (float)fVar6;
    }
    puVar2 = (undefined4 *)FVector::Rotation((FVector *)&local_70);
    local_20 = *puVar2;
    local_1c = puVar2[1];
    local_18 = puVar2[2];
    local_64[0] = local_38;
    local_64[1] = 0.0;
    local_64[2] = 0.0;
    FCoords::operator*((FCoords *)(GMath_exref + 0x18),local_a4);
    pfVar3 = (float *)FVector::TransformVectorBy((FVector *)local_64,(FCoords *)&local_30);
    local_50 = *pfVar3;
    local_4c = pfVar3[1];
    local_48 = pfVar3[2];
    fVar7 = *(float *)(in_ECX + 0x1bc) - local_50;
    fVar5 = *(float *)(in_ECX + 0x1c0) - local_4c;
    local_34 = *(float *)(in_ECX + 0x1c4) - local_48;
    local_30 = fVar7;
    local_2c = fVar5;
    local_28 = local_34;
  }
  local_d8 = local_1c;
  if ((param_7 == 0) || (param_6 != 0)) {
    if ((local_24 == (UClass *)0x0) || ((param_9 != 0 || (param_10 == 0)))) goto LAB_105f8602;
    iVar1 = **(int **)(in_ECX + 0xe4);
    local_e0 = local_28;
    uStack_ec = local_18;
    local_e8 = fVar7;
    local_e4 = fVar5;
    local_dc = local_20;
    FName::FName((FName *)&uStack_ec,0);
    pUVar4 = local_24;
  }
  else {
    if ((local_24 != (UClass *)0x0) && (param_9 == 0)) {
      if (param_10 == 0) goto LAB_105f8602;
      iVar1 = **(int **)(in_ECX + 0xe4);
      local_e0 = local_28;
      uStack_ec = local_18;
      local_e8 = fVar7;
      local_e4 = fVar5;
      local_dc = local_20;
      FName::FName((FName *)&uStack_ec,0);
      (**(code **)(iVar1 + 0xc0))(local_24);
    }
    if (param_10 == 0) goto LAB_105f8602;
    local_d8 = 0x105f853a;
    pUVar4 = UObject::StaticLoadClass
                       (&AActor::PrivateStaticClass,(UObject *)0x0,
                        (ushort *)L"Lineageeffect.p_u004_a",(ushort *)0x0,0x2000,(UPackageMap *)0x0)
    ;
    iVar1 = **(int **)(in_ECX + 0xe4);
    local_dc = local_20;
    local_d8 = local_1c;
    local_e0 = local_28;
    uStack_ec = local_18;
    local_e8 = fVar7;
    local_e4 = fVar5;
    FName::FName((FName *)&uStack_ec,0);
  }
  (**(code **)(iVar1 + 0xc0))(pUVar4);
LAB_105f8602:
  if ((param_8 != 0) && (param_10 != 0)) {
    local_d8 = 0x105f862d;
    pUVar4 = UObject::StaticLoadClass
                       (&AActor::PrivateStaticClass,(UObject *)0x0,
                        (ushort *)L"Lineageeffect.e_u028_c",(ushort *)0x0,0x2000,(UPackageMap *)0x0)
    ;
    iVar1 = **(int **)(in_ECX + 0xe4);
    local_dc = local_20;
    local_d8 = local_1c;
    local_e0 = local_28;
    uStack_ec = local_18;
    local_e8 = fVar7;
    local_e4 = fVar5;
    FName::FName((FName *)&uStack_ec,0);
    (**(code **)(iVar1 + 0xc0))(pUVar4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105f86ac Catch@105f86ac

void Catch_105f86ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_10914c48);
}


// ==== 105f86c0 Catch@105f86c0

void Catch_105f86c0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::AssociateAttackedNotify");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f87f0 FUN_105f87f0

UObject * FUN_105f87f0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ULodMesh::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105f8820 FUN_105f8820

void FUN_105f8820(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  UClass *pUVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  float fVar6;
  undefined1 *puStack_164;
  float fStack_160;
  undefined1 *puStack_15c;
  float fStack_158;
  int iStack_154;
  int iStack_150;
  float local_128;
  undefined4 local_124;
  FRotator local_ec [48];
  float local_bc [4];
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 *local_78;
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  undefined1 *local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  UClass *local_28;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  undefined1 *local_c;
  float local_8;
  
  puStack_70 = &LAB_108221a0;
  local_74 = ExceptionList;
  local_78 = &stack0xffffff08;
  local_6c = 0;
  ExceptionList = &local_74;
  FRotator::FRotator((FRotator *)&local_20);
  pUVar1 = UObject::StaticLoadClass
                     (&AActor::PrivateStaticClass,(UObject *)0x0,(ushort *)L"Lineageeffect.p_u002_a"
                      ,(ushort *)0x0,0x2000,(UPackageMap *)0x0);
  local_28 = pUVar1;
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 4) {
        ExceptionList = local_74;
        return;
      }
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
      if (param_5 == 0) {
        ExceptionList = local_74;
        return;
      }
      UObject::StaticLoadClass
                (&AActor::PrivateStaticClass,(UObject *)0x0,(ushort *)L"\'LineageEffect.e_u020_d\'",
                 (ushort *)0x0,0x2000,(UPackageMap *)0x0);
      iVar4 = **(int **)(in_ECX + 0xe4);
      local_124 = local_68;
      local_128 = (float)local_64;
      FName::FName((FName *)&local_128,0);
      piVar5 = (int *)(**(code **)(iVar4 + 0xc0))();
      if (piVar5 == (int *)0x0) {
        ExceptionList = local_74;
        return;
      }
      iVar4 = (**(code **)(*piVar5 + 0x7c))();
      if (iVar4 == 0) {
        ExceptionList = local_74;
        return;
      }
      fVar6 = *(float *)(in_ECX + 0x2f4);
      iVar4 = (**(code **)(*piVar5 + 0x7c))();
      *(float *)(iVar4 + 0x484) = fVar6 * -1.0;
      ExceptionList = local_74;
      return;
    }
    local_38 = 0;
    if ((param_1 == 0) || (*(int *)(param_1 + 0x62c) == 7)) {
      if (*(char *)((int)param_2 + 0x35) == '\x02') {
        param_2[0x3a] = 0x40000000;
      }
      else {
        local_38 = 1;
      }
    }
    else {
      param_2[0x3a] = 0x41800000;
    }
    local_88 = 0x3f800000;
    local_84 = 0;
    local_80 = 0;
    FCoords::operator*((FCoords *)(GMath_exref + 0x18),local_ec);
    pfVar3 = (float *)FVector::TransformVectorBy((FVector *)&local_88,(FCoords *)&local_44);
    local_10 = *pfVar3;
    local_c = (undefined1 *)pfVar3[1];
    local_8 = pfVar3[2];
    iVar4 = thunk_FUN_105f87f0();
    fVar6 = local_8;
    if (iVar4 != 0) {
      fVar6 = (float)param_2[0x9f];
      pfVar3 = (float *)thunk_FUN_103301a0();
      local_bc[0] = fVar6 * *pfVar3;
      local_44 = local_bc[0] * local_10;
      local_40 = (float)local_c * pfVar3[1] * fVar6;
      local_3c = local_8 * fVar6 * pfVar3[2];
      local_24 = (undefined1 *)local_3c;
      local_14 = local_40;
      pfVar3 = (float *)FVector::operator/((FVector *)&local_44,(float)local_bc);
      local_50 = (float)param_2[0x6f] - *pfVar3;
      local_4c = (undefined1 *)((float)param_2[0x70] - pfVar3[1]);
      local_48 = (float)param_2[0x71] - pfVar3[2];
      fVar6 = local_48;
      local_24 = local_4c;
      local_14 = local_48;
      local_10 = local_50;
      local_c = local_4c;
    }
    local_20 = param_2[0x72];
    local_1c = param_2[0x73];
    local_18 = param_2[0x74];
    local_5c = 0;
    local_58 = 0;
    local_54 = 0x3f800000;
    (**(code **)(*param_2 + 0x1c8))();
    local_124 = 0;
    local_128 = fVar6;
    (**(code **)(**(int **)(in_ECX + 0xe4) + 0xa8))();
    if (((param_1 == 0) || ((*(uint *)(param_1 + 0x634) & 2) == 0)) ||
       ((*(uint *)(param_1 + 0x634) & 4) != 0)) {
      if (((local_28 != (UClass *)0x0) && (param_4 == 0)) && (param_5 != 0)) {
        iVar4 = **(int **)(in_ECX + 0xe4);
        iStack_154 = local_20;
        iStack_150 = local_1c;
        fStack_160 = local_10;
        puStack_15c = local_c;
        local_24 = (undefined1 *)&puStack_164;
        puStack_164 = local_c;
        fStack_158 = fVar6;
        FName::FName((FName *)&puStack_164,0);
        (**(code **)(iVar4 + 0xc0))(local_28);
      }
    }
    else {
      if ((local_28 != (UClass *)0x0) && (param_4 == 0)) {
        if (param_5 == 0) goto LAB_105f8fac;
        iVar4 = **(int **)(in_ECX + 0xe4);
        iStack_154 = local_20;
        iStack_150 = local_1c;
        fStack_160 = local_10;
        puStack_15c = local_c;
        local_24 = (undefined1 *)&puStack_164;
        puStack_164 = local_c;
        fStack_158 = fVar6;
        FName::FName((FName *)&puStack_164,0);
        (**(code **)(iVar4 + 0xc0))(local_28);
      }
      if (param_5 != 0) {
        iStack_150 = 0x105f8ed2;
        pUVar1 = UObject::StaticLoadClass
                           (&AActor::PrivateStaticClass,(UObject *)0x0,
                            (ushort *)L"Lineageeffect.p_u004_a",(ushort *)0x0,0x2000,
                            (UPackageMap *)0x0);
        iVar4 = **(int **)(in_ECX + 0xe4);
        iStack_154 = local_20;
        iStack_150 = local_1c;
        fStack_160 = local_10;
        puStack_15c = local_c;
        local_24 = (undefined1 *)&puStack_164;
        puStack_164 = local_c;
        fStack_158 = fVar6;
        FName::FName((FName *)&puStack_164,0);
        (**(code **)(iVar4 + 0xc0))(pUVar1);
      }
    }
LAB_105f8fac:
    if (((param_1 != 0) && ((*(byte *)(param_1 + 0x634) & 8) != 0)) && (param_5 != 0)) {
      iStack_150 = 0x105f8fe9;
      pUVar1 = UObject::StaticLoadClass
                         (&AActor::PrivateStaticClass,(UObject *)0x0,
                          (ushort *)L"Lineageeffect.e_u028_c",(ushort *)0x0,0x2000,
                          (UPackageMap *)0x0);
      iVar4 = **(int **)(in_ECX + 0xe4);
      iStack_154 = local_20;
      iStack_150 = local_1c;
      fStack_160 = local_10;
      puStack_15c = local_c;
      puStack_164 = local_c;
      fStack_158 = fVar6;
      FName::FName((FName *)&puStack_164,0);
      (**(code **)(iVar4 + 0xc0))(pUVar1);
    }
    if (local_38 == 0) {
      ExceptionList = local_74;
      return;
    }
    (**(code **)(**(int **)(in_ECX + 0xe4) + 0xac))();
    ExceptionList = local_74;
    return;
  }
  if (param_1 == 0) {
    local_20 = *(undefined4 *)(in_ECX + 0x1c8);
    local_1c = *(undefined4 *)(in_ECX + 0x1cc);
    local_18 = *(undefined4 *)(in_ECX + 0x1d0);
    local_10 = *(float *)(in_ECX + 0x1bc);
    local_c = *(undefined1 **)(in_ECX + 0x1c0);
    local_8 = *(float *)(in_ECX + 0x1c4);
LAB_105f8b08:
    if ((pUVar1 == (UClass *)0x0) || ((param_4 != 0 || (param_5 == 0)))) goto LAB_105f8b76;
    iVar4 = **(int **)(in_ECX + 0xe4);
    local_128 = (float)local_20;
    local_124 = local_1c;
    FName::FName((FName *)&stack0xfffffec8,0);
  }
  else {
    local_ac = *(float *)(in_ECX + 0x1bc) - *(float *)(param_1 + 0x1bc);
    local_a8 = *(float *)(in_ECX + 0x1c0) - *(float *)(param_1 + 0x1c0);
    local_a4 = *(float *)(in_ECX + 0x1c4) - *(float *)(param_1 + 0x1c4);
    local_14 = local_a4;
    puVar2 = (undefined4 *)FVector::Rotation((FVector *)&local_ac);
    local_20 = *puVar2;
    local_1c = puVar2[1];
    local_18 = puVar2[2];
    local_94 = 0x3f800000;
    local_90 = 0;
    local_8c = 0;
    FCoords::operator*((FCoords *)(GMath_exref + 0x18),local_ec);
    pfVar3 = (float *)FVector::TransformVectorBy((FVector *)&local_94,(FCoords *)&local_44);
    local_10 = *pfVar3;
    local_c = (undefined1 *)pfVar3[1];
    local_8 = pfVar3[2];
    local_98 = *(float *)(in_ECX + 0x2f0);
    local_a0 = local_98 * local_10;
    local_9c = (float)local_c * local_98;
    local_98 = local_98 * local_8;
    local_14 = local_98;
    pfVar3 = (float *)FVector::operator/((FVector *)&local_a0,(float)&local_44);
    local_34 = *(float *)(in_ECX + 0x1bc) - *pfVar3;
    local_30 = *(float *)(in_ECX + 0x1c0) - pfVar3[1];
    local_2c = *(float *)(in_ECX + 0x1c4) - pfVar3[2];
    local_14 = local_2c;
    local_10 = local_34;
    local_c = (undefined1 *)local_30;
    local_8 = local_2c;
    if (((*(uint *)(param_1 + 0x634) & 2) == 0) || ((*(uint *)(param_1 + 0x634) & 4) != 0))
    goto LAB_105f8b08;
    if ((pUVar1 != (UClass *)0x0) && (param_4 == 0)) {
      if (param_5 == 0) goto LAB_105f8b76;
      iVar4 = **(int **)(in_ECX + 0xe4);
      local_128 = (float)local_20;
      local_124 = local_1c;
      FName::FName((FName *)&stack0xfffffec8,0);
      (**(code **)(iVar4 + 0xc0))();
    }
    if (param_5 == 0) goto LAB_105f8b76;
    local_124 = 0x105f8a73;
    UObject::StaticLoadClass
              (&AActor::PrivateStaticClass,(UObject *)0x0,(ushort *)L"Lineageeffect.p_u004_a",
               (ushort *)0x0,0x2000,(UPackageMap *)0x0);
    iVar4 = **(int **)(in_ECX + 0xe4);
    local_128 = (float)local_20;
    local_124 = local_1c;
    FName::FName((FName *)&stack0xfffffec8,0);
  }
  (**(code **)(iVar4 + 0xc0))();
LAB_105f8b76:
  if (((param_1 != 0) && ((*(byte *)(param_1 + 0x634) & 8) != 0)) && (param_5 != 0)) {
    local_124 = 0x105f8bb0;
    UObject::StaticLoadClass
              (&AActor::PrivateStaticClass,(UObject *)0x0,(ushort *)L"Lineageeffect.e_u028_c",
               (ushort *)0x0,0x2000,(UPackageMap *)0x0);
    iVar4 = **(int **)(in_ECX + 0xe4);
    local_128 = (float)local_20;
    local_124 = local_1c;
    FName::FName((FName *)&stack0xfffffec8,0);
    (**(code **)(iVar4 + 0xc0))();
  }
  ExceptionList = local_74;
  return;
}


// ==== 105f9163 Catch@105f9163

void Catch_105f9163(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105f9177 Catch@105f9177

void Catch_105f9177(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::AttackedNotify");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f9400 FUN_105f9400

void FUN_105f9400(void)

{
  float fVar1;
  FVector *pFVar2;
  int iVar3;
  float *pfVar4;
  AActor *in_ECX;
  int iVar5;
  float10 fVar6;
  FVector *in_stack_00000010;
  undefined1 local_c0 [12];
  float local_b4;
  float local_9c;
  undefined4 local_90;
  float local_84;
  undefined1 *local_78;
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  AActor *local_38;
  float local_34;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pFVar2 = in_stack_00000010;
  puStack_70 = &LAB_108221b0;
  local_74 = ExceptionList;
  local_78 = &stack0xffffff34;
  local_6c = 0;
  ExceptionList = &local_74;
  AActor::eventGetEffTargetLocation(in_ECX,in_stack_00000010);
  local_2c = 0;
  do {
    iVar3 = local_2c;
    if (3 < local_2c) {
      ExceptionList = local_74;
      return;
    }
    local_3c = local_2c + 1;
    iVar5 = local_3c;
    if (local_2c == 3) {
      iVar5 = 0;
    }
    local_9c = *(float *)(in_ECX + 0x1bc) + *(float *)(in_ECX + local_2c * 0xc + 0x3f4);
    local_38 = in_ECX + iVar5 * 0xc;
    local_84 = *(float *)(local_38 + 0x3f4) + *(float *)(in_ECX + 0x1bc);
    local_34 = *(float *)(local_38 + 0x3f8) + *(float *)(in_ECX + 0x1c0);
    local_b4 = local_84 - local_9c;
    local_10 = local_34 - (*(float *)(in_ECX + 0x1c0) + *(float *)(in_ECX + local_2c * 0xc + 0x3f8))
    ;
    local_90 = 0;
    local_18 = ((*(float *)(local_38 + 0x3fc) + *(float *)(in_ECX + 0x1c4)) -
               (*(float *)(in_ECX + 0x1c4) + *(float *)(in_ECX + local_2c * 0xc + 0x3fc))) * 0.0;
    in_stack_00000010 = (FVector *)(local_10 - local_18);
    local_18 = local_18 - local_b4;
    local_14 = local_b4 * 0.0 - local_10 * 0.0;
    local_1c = (float)in_stack_00000010;
    local_c = local_14;
    local_8 = local_18;
    pfVar4 = (float *)FVector::SafeNormal((FVector *)&local_1c);
    local_1c = *pfVar4;
    local_18 = pfVar4[1];
    local_14 = pfVar4[2];
    local_28 = *(float *)pFVar2;
    local_24 = *(float *)(pFVar2 + 4);
    local_20 = *(float *)(pFVar2 + 8);
    in_stack_00000010 =
         (FVector *)(*(float *)(in_ECX + iVar3 * 0xc + 0x3f4) + *(float *)(in_ECX + 0x1bc));
    local_44 = *(float *)(in_ECX + 0x1c0) + *(float *)(in_ECX + iVar3 * 0xc + 0x3f8);
    local_40 = *(float *)(in_ECX + 0x1c4) + *(float *)(in_ECX + iVar3 * 0xc + 0x3fc);
    local_48 = (float)in_stack_00000010;
    local_c = local_40;
    local_8 = local_44;
    fVar6 = (float10)thunk_FUN_10585a20(&stack0x00000004,&local_48,&local_1c);
    local_10 = (float)fVar6;
    in_stack_00000010 =
         (FVector *)(*(float *)(in_ECX + 0x1bc) + *(float *)(in_ECX + iVar3 * 0xc + 0x3f4));
    local_50 = *(float *)(in_ECX + iVar3 * 0xc + 0x3f8) + *(float *)(in_ECX + 0x1c0);
    local_4c = *(float *)(in_ECX + iVar3 * 0xc + 0x3fc) + *(float *)(in_ECX + 0x1c4);
    local_54 = (float)in_stack_00000010;
    local_c = local_4c;
    local_8 = local_50;
    fVar6 = (float10)thunk_FUN_10585a20(pFVar2,&local_54,&local_1c);
    if (((local_10 < 0.0) && (0.0 < (float)fVar6)) || ((0.0 < local_10 && ((float)fVar6 < 0.0)))) {
      in_stack_00000010 =
           (FVector *)(*(float *)(in_ECX + 0x1bc) + *(float *)(in_ECX + iVar3 * 0xc + 0x3f4));
      local_5c = *(float *)(in_ECX + iVar3 * 0xc + 0x3f8) + *(float *)(in_ECX + 0x1c0);
      local_58 = *(float *)(in_ECX + iVar3 * 0xc + 0x3fc) + *(float *)(in_ECX + 0x1c4);
      local_60 = (float)in_stack_00000010;
      local_c = local_58;
      local_8 = local_5c;
      pfVar4 = (float *)thunk_FUN_10585a80(local_c0,&stack0x00000004,pFVar2,&local_60,&local_1c);
      local_28 = *pfVar4;
      local_24 = pfVar4[1];
      local_20 = pfVar4[2];
      fVar1 = *(float *)(in_ECX + 0x1bc) + *(float *)(local_38 + 0x3f4);
      if ((((local_28 < fVar1 != (local_28 == fVar1)) &&
           (*(float *)(in_ECX + iVar3 * 0xc + 0x3f4) + *(float *)(in_ECX + 0x1bc) < local_28 !=
            (*(float *)(in_ECX + iVar3 * 0xc + 0x3f4) + *(float *)(in_ECX + 0x1bc) == local_28))) ||
          ((local_28 <= *(float *)(in_ECX + iVar3 * 0xc + 0x3f4) + *(float *)(in_ECX + 0x1bc) &&
           (fVar1 <= local_28)))) &&
         (((fVar1 = *(float *)(local_38 + 0x3f8) + *(float *)(in_ECX + 0x1c0),
           local_24 < fVar1 != (local_24 == fVar1) &&
           (*(float *)(in_ECX + iVar3 * 0xc + 0x3f8) + *(float *)(in_ECX + 0x1c0) < local_24 !=
            (*(float *)(in_ECX + iVar3 * 0xc + 0x3f8) + *(float *)(in_ECX + 0x1c0) == local_24))) ||
          ((local_24 <= *(float *)(in_ECX + iVar3 * 0xc + 0x3f8) + *(float *)(in_ECX + 0x1c0) &&
           (fVar1 <= local_24)))))) {
        *(float *)pFVar2 = local_28;
        *(float *)(pFVar2 + 4) = local_24;
        *(float *)(pFVar2 + 8) = local_20;
        *(float *)(in_ECX + 0x424) = local_1c;
        *(float *)(in_ECX + 0x428) = local_18;
        *(float *)(in_ECX + 0x42c) = local_14;
        ExceptionList = local_74;
        return;
      }
    }
    local_2c = local_3c;
  } while( true );
}


// ==== 105f97ad Catch@105f97ad

void Catch_105f97ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x38) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x38,&DAT_10914c48);
}


// ==== 105f97c1 Catch@105f97c1

void Catch_105f97c1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AMover::GetTargetLocation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f98e0 FUN_105f98e0

void FUN_105f98e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108221d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 105f9930 FUN_105f9930

void FUN_105f9930(void)

{
  AActor *in_ECX;
  int iVar1;
  AActor *pAVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10822264;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AActor::AActor(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = AMover::vftable;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x3c4));
  local_4._0_1_ = 1;
  pAVar2 = in_ECX + 0x3f4;
  iVar1 = 3;
  do {
    FVector::FVector((FVector *)pAVar2);
    pAVar2 = pAVar2 + 0xc;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FArray::FArray((FArray *)(in_ECX + 0x430),0);
  local_4._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 0x43c),0);
  local_4 = CONCAT31(local_4._1_3_,7);
  FName::FName((FName *)(in_ECX + 0x464));
  FName::FName((FName *)(in_ECX + 0x468));
  FName::FName((FName *)(in_ECX + 0x480));
  FName::FName((FName *)(in_ECX + 0x4a0));
  FName::FName((FName *)(in_ECX + 0x4a4));
  FName::FName((FName *)(in_ECX + 0x4a8));
  FName::FName((FName *)(in_ECX + 0x4ac));
  FName::FName((FName *)(in_ECX + 0x4b0));
  pAVar2 = in_ECX + 0x4b4;
  iVar1 = 7;
  do {
    FVector::FVector((FVector *)pAVar2);
    pAVar2 = pAVar2 + 0xc;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pAVar2 = in_ECX + 0x514;
  iVar1 = 7;
  do {
    FRotator::FRotator((FRotator *)pAVar2);
    pAVar2 = pAVar2 + 0xc;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FRotator::FRotator((FRotator *)(in_ECX + 0x5a4));
  FRotator::FRotator((FRotator *)(in_ECX + 0x5b0));
  FRotator::FRotator((FRotator *)(in_ECX + 0x5bc));
  FRotator::FRotator((FRotator *)(in_ECX + 0x608));
  FArray::FArray((FArray *)(in_ECX + 0x618),0);
  local_4 = CONCAT31(local_4._1_3_,10);
  FName::FName((FName *)(in_ECX + 0x624));
  ExceptionList = local_c;
  return;
}


// ==== 105f9b40 FUN_105f9b40

void FUN_105f9b40(void)

{
  return;
}


// ==== 105f9b83 Catch@105f9b83

void Catch_105f9b83(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105f9b97 Catch@105f9b97

void Catch_105f9b97(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::AssociatedLevelGeometry");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f9be0 FUN_105f9be0

undefined4 FUN_105f9be0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x420);
}


// ==== 105f9c1f Catch@105f9c1f

void Catch_105f9c1f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105f9c33 Catch@105f9c33

void Catch_105f9c33(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ADoor::AssociatedLevelGeometry");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f9c70 FUN_105f9c70

undefined4 FUN_105f9c70(int param_1)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x74) & 2) != 0) && (param_1 == in_ECX)) {
    return 1;
  }
  return 0;
}


// ==== 105f9cd0 Catch@105f9cd0

void Catch_105f9cd0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105f9ce4 Catch@105f9ce4

void Catch_105f9ce4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::HasAssociatedLevelGeometry");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f9d30 FUN_105f9d30

undefined4 FUN_105f9d30(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 != 0) {
    for (iVar1 = *(int *)(in_ECX + 0x420); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x47c)) {
      if (iVar1 == param_1) {
        return 1;
      }
    }
  }
  return 0;
}


// ==== 105f9da8 Catch@105f9da8

void Catch_105f9da8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105f9dbc Catch@105f9dbc

void Catch_105f9dbc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ADoor::HasAssociatedLevelGeometry");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f9e10 FUN_105f9e10

void FUN_105f9e10(void)

{
  uint *puVar1;
  int in_ECX;
  
  puVar1 = (uint *)(*(int *)(in_ECX + 0xe0) + 0x55c);
  *puVar1 = *puVar1 & 0xfffffff7;
  *(uint *)(in_ECX + 0x410) = *(uint *)(in_ECX + 0x410) | 0x2000;
  return;
}


// ==== 105f9e67 Catch@105f9e67

void Catch_105f9e67(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105f9e7b Catch@105f9e7b

void Catch_105f9e7b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::PostEditMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f9ec0 FUN_105f9ec0

void FUN_105f9ec0(void)

{
  uint *puVar1;
  int in_ECX;
  
  puVar1 = (uint *)(*(int *)(in_ECX + 0xe0) + 0x55c);
  *puVar1 = *puVar1 & 0xfffffff7;
  *(uint *)(in_ECX + 0x410) = *(uint *)(in_ECX + 0x410) | 0x2000;
  return;
}


// ==== 105f9f17 Catch@105f9f17

void Catch_105f9f17(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105f9f2b Catch@105f9f2b

void Catch_105f9f2b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::Spawned");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105f9f70 FUN_105f9f70

undefined4 FUN_105f9f70(int *param_1)

{
  float fVar1;
  undefined1 *puVar2;
  float *pfVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  float fVar6;
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
  
  puStack_c = &LAB_108222f0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffb4;
  if ((*(byte *)(in_ECX + 0x410) & 0x20) != 0) {
    fVar6 = (float)param_1[0x6f];
    fVar1 = *(float *)(in_ECX + 0x1bc);
    local_18 = (float)param_1[0x70] - *(float *)(in_ECX + 0x1c0);
    local_1c = (float)param_1[0x71] - *(float *)(in_ECX + 0x1c4);
    ExceptionList = &local_10;
    pfVar3 = (float *)FRotator::Vector((FRotator *)(in_ECX + 0x1c8));
    fVar6 = pfVar3[2] * local_1c + *pfVar3 * (fVar6 - fVar1) + pfVar3[1] * local_18;
    puVar2 = local_14;
    if (fVar6 < 0.0 != (fVar6 == 0.0)) {
      ExceptionList = local_10;
      return 1;
    }
  }
  local_14 = puVar2;
  local_34 = *(float *)(in_ECX + 0x1bc) - (float)param_1[0x6f];
  local_30 = *(float *)(in_ECX + 0x1c0) - (float)param_1[0x70];
  local_2c = *(float *)(in_ECX + 0x1c4) - (float)param_1[0x71];
  local_1c = local_30;
  local_18 = local_2c;
  fVar6 = FVector::SizeSquared((FVector *)&local_34);
  if (1.0737418e+09 < fVar6) {
    ExceptionList = local_10;
    return 1;
  }
  iVar5 = 0;
  while( true ) {
    if (3 < iVar5) {
      ExceptionList = local_10;
      return 0;
    }
    local_20 = iVar5;
    iVar4 = (**(code **)(*param_1 + 0x33c))(*(undefined4 *)(in_ECX + 0x3c8 + iVar5 * 4));
    if (iVar4 != 0) break;
    iVar5 = iVar5 + 1;
  }
  ExceptionList = local_10;
  return 2;
}


// ==== 105fa0d6 Catch@105fa0d6

void Catch_105fa0d6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105fa0ea Catch@105fa0ea

void Catch_105fa0ea(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::ProscribedPathTo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fa170 FUN_105fa170

void FUN_105fa170(void)

{
  FName *pFVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822300;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pFVar1 = (FName *)UObject::GetFName(in_ECX);
  FName::operator==((FName *)&stack0x00000004,pFVar1);
  ExceptionList = local_10;
  return;
}


// ==== 105fa1bf Catch@105fa1bf

void Catch_105fa1bf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fa1d3 Catch@105fa1d3

void Catch_105fa1d3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::IsIdentifiedAs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fa210 FUN_105fa210

undefined4 FUN_105fa210(void)

{
  FName *pFVar1;
  int iVar2;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822310;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pFVar1 = (FName *)UObject::GetFName(in_ECX);
  iVar2 = FName::operator==((FName *)&stack0x00000004,pFVar1);
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (*(UObject **)(in_ECX + 0x41c) != (UObject *)0x0) {
    pFVar1 = (FName *)UObject::GetFName(*(UObject **)(in_ECX + 0x41c));
    iVar2 = FName::operator==((FName *)&stack0x00000004,pFVar1);
    if (iVar2 != 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105fa2a1 Catch@105fa2a1

void Catch_105fa2a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fa2b5 Catch@105fa2b5

void Catch_105fa2b5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AInventorySpot::IsIdentifiedAs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fa310 FUN_105fa310

undefined4 FUN_105fa310(void)

{
  FName *pFVar1;
  int iVar2;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822320;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pFVar1 = (FName *)UObject::GetFName(in_ECX);
  iVar2 = FName::operator==((FName *)&stack0x00000004,pFVar1);
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (*(UObject **)(in_ECX + 0x41c) != (UObject *)0x0) {
    pFVar1 = (FName *)UObject::GetFName(*(UObject **)(in_ECX + 0x41c));
    iVar2 = FName::operator==((FName *)&stack0x00000004,pFVar1);
    if (iVar2 != 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105fa3a1 Catch@105fa3a1

void Catch_105fa3a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fa3b5 Catch@105fa3b5

void Catch_105fa3b5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AAutoLadder::IsIdentifiedAs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fa410 FUN_105fa410

undefined4 FUN_105fa410(void)

{
  FName *pFVar1;
  int iVar2;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822330;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pFVar1 = (FName *)UObject::GetFName(in_ECX);
  iVar2 = FName::operator==((FName *)&stack0x00000004,pFVar1);
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (*(UObject **)(in_ECX + 0x420) != (UObject *)0x0) {
    pFVar1 = (FName *)UObject::GetFName(*(UObject **)(in_ECX + 0x420));
    iVar2 = FName::operator==((FName *)&stack0x00000004,pFVar1);
    if (iVar2 != 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105fa4a1 Catch@105fa4a1

void Catch_105fa4a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fa4b5 Catch@105fa4b5

void Catch_105fa4b5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ADoor::IsIdentifiedAs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fa510 FUN_105fa510

undefined4 FUN_105fa510(void)

{
  FName *pFVar1;
  int iVar2;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822340;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pFVar1 = (FName *)UObject::GetFName(in_ECX);
  iVar2 = FName::operator==((FName *)&stack0x00000004,pFVar1);
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (*(UObject **)(in_ECX + 0x41c) != (UObject *)0x0) {
    pFVar1 = (FName *)UObject::GetFName(*(UObject **)(in_ECX + 0x41c));
    iVar2 = FName::operator==((FName *)&stack0x00000004,pFVar1);
    if (iVar2 != 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105fa5a1 Catch@105fa5a1

void Catch_105fa5a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fa5b5 Catch@105fa5b5

void Catch_105fa5b5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AAIMarker::IsIdentifiedAs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fa610 FUN_105fa610

undefined4 FUN_105fa610(void)

{
  FName *pFVar1;
  int iVar2;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822350;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pFVar1 = (FName *)UObject::GetFName(in_ECX);
  iVar2 = FName::operator==((FName *)&stack0x00000004,pFVar1);
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (*(UObject **)(in_ECX + 0x41c) != (UObject *)0x0) {
    pFVar1 = (FName *)UObject::GetFName(*(UObject **)(in_ECX + 0x41c));
    iVar2 = FName::operator==((FName *)&stack0x00000004,pFVar1);
    if (iVar2 != 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105fa6a1 Catch@105fa6a1

void Catch_105fa6a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fa6b5 Catch@105fa6b5

void Catch_105fa6b5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AWarpZoneMarker::IsIdentifiedAs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fa710 FUN_105fa710

undefined4 FUN_105fa710(void)

{
  int in_ECX;
  
  if (((*(byte *)(*(int *)(in_ECX + 0x1b8) + 0x490) & 0x20) == 0) &&
     ((*(uint *)(in_ECX + 0x410) & 0x1000) == 0)) {
    return 1;
  }
  return 0;
}


// ==== 105fa740 FUN_105fa740

void FUN_105fa740(void)

{
  uint uVar1;
  int in_ECX;
  AActor *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822360;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (this = *(AActor **)(in_ECX + 0x420); this != (AActor *)0x0; this = *(AActor **)(this + 0x47c)
      ) {
    uVar1 = *(uint *)(this + 0x2f8);
    if (((uVar1 & 4) != 0) && ((uVar1 & 1) != 0)) {
      AActor::SetCollision(this,0,uVar1 >> 2 & 1,uVar1 >> 3 & 1);
      *(uint *)(in_ECX + 0x42c) = *(uint *)(in_ECX + 0x42c) | 8;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105fa7c6 Catch@105fa7c6

void Catch_105fa7c6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fa7da Catch@105fa7da

void Catch_105fa7da(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ADoor::PrePath");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fa830 FUN_105fa830

void FUN_105fa830(void)

{
  int in_ECX;
  AActor *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822370;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(byte *)(in_ECX + 0x42c) & 8) != 0) {
    ExceptionList = &local_10;
    for (this = *(AActor **)(in_ECX + 0x420); this != (AActor *)0x0;
        this = *(AActor **)(this + 0x47c)) {
      AActor::SetCollision(this,1,*(uint *)(this + 0x2f8) >> 2 & 1,*(uint *)(this + 0x2f8) >> 3 & 1)
      ;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105fa8aa Catch@105fa8aa

void Catch_105fa8aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fa8be Catch@105fa8be

void Catch_105fa8be(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ADoor::PostPath");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fa910 FUN_105fa910

void FUN_105fa910(void)

{
  uint uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 1000) = 10000000;
  *(undefined4 *)(in_ECX + 0x3f4) = 0;
  *(undefined4 *)(in_ECX + 0x3f8) = 0;
  *(undefined4 *)(in_ECX + 0x3fc) = 0;
  uVar1 = *(uint *)(in_ECX + 0x410);
  uVar1 = (uVar1 >> 1 ^ uVar1) & 1 ^ uVar1;
  *(uint *)(in_ECX + 0x410) = uVar1;
  *(uint *)(in_ECX + 0x410) = uVar1 & 0xfffffffd;
  *(int *)(in_ECX + 0x400) =
       *(int *)(in_ECX + 0x40c) + *(int *)(in_ECX + 0x404) + *(int *)(in_ECX + 0x408);
  *(undefined4 *)(in_ECX + 0x408) = 0;
  return;
}


// ==== 105fa9a8 Catch@105fa9a8

void Catch_105fa9a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fa9bc Catch@105fa9bc

void Catch_105fa9bc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::ClearForPathFinding");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105faa40 FUN_105faa40

undefined4 FUN_105faa40(ANavigationPoint *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  ushort *puVar4;
  FString *this;
  int iVar5;
  UObject *in_ECX;
  int iVar6;
  float10 extraout_ST0;
  float10 fVar7;
  FString local_30 [20];
  int local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10822399;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  iVar6 = 0;
  local_8 = 0;
  if (in_ECX == (UObject *)param_1) {
    return 1;
  }
  if (param_2 < (float)*(int *)(in_ECX + 1000) == (param_2 == (float)*(int *)(in_ECX + 1000))) {
    ExceptionList = &local_10;
    uVar3 = FUN_107a6660();
    *(undefined4 *)(in_ECX + 1000) = uVar3;
    fVar7 = extraout_ST0;
    if ((float10)0 < extraout_ST0) {
      do {
        while( true ) {
          if (*(int *)(in_ECX + 0x3c0) <= iVar6) {
            ExceptionList = local_10;
            return 0;
          }
          piVar1 = (int *)(*(int *)(in_ECX + 0x3bc) + iVar6 * 4);
          if ((*(byte *)(*piVar1 + 0x48) & 0x80) == 0) break;
LAB_105fabcd:
          iVar6 = iVar6 + 1;
          fVar7 = (float10)param_2;
        }
        fVar2 = (float)*(int *)(*piVar1 + 0x34);
        local_1c = iVar6;
        if (fVar2 < 1.0 == (fVar2 == 1.0)) {
          local_18 = (float)(fVar7 - (float10)*(int *)(*piVar1 + 0x34));
          iVar5 = ANavigationPoint::CanReach
                            (*(ANavigationPoint **)(*piVar1 + 0x3c),param_1,local_18);
          if (iVar5 != 0) {
            ExceptionList = local_10;
            return 1;
          }
          goto LAB_105fabcd;
        }
        if (*(int *)GLog_exref != 0) {
          UObject::GetName(*(UObject **)(*piVar1 + 0x3c));
          UObject::GetName(in_ECX);
          FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
        }
        puVar4 = UObject::GetName(*(UObject **)
                                   (*(int *)(*(int *)(in_ECX + 0x3bc) + iVar6 * 4) + 0x3c));
        this = (FString *)
               FString::Printf((ushort *)local_30,L"negative or zero distance to %s!",puVar4);
        local_8._0_1_ = 1;
        iVar5 = **(int **)GWarn_exref;
        FString::operator*(this);
        (**(code **)(iVar5 + 0x30))(0);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_30);
        iVar6 = iVar6 + 1;
        fVar7 = (float10)param_2;
      } while( true );
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105fabd8 Catch@105fabd8

void Catch_105fabd8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105fabec Catch@105fabec

void Catch_105fabec(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::CanReach");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fac80 FUN_105fac80

undefined4 FUN_105fac80(void)

{
  int iVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  FString *pFVar4;
  UObject *in_ECX;
  ANavigationPoint *this;
  int iVar5;
  float10 fVar6;
  FString local_34 [20];
  int local_20;
  float local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_108223c2;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  iVar5 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffc0;
  if ((*(uint *)(in_ECX + 0x410) & 0x20000) != 0) {
    ExceptionList = &local_10;
    for (this = *(ANavigationPoint **)(*(int *)(in_ECX + 0xe0) + 0x61c); iVar5 = 0,
        puVar2 = local_14, this != (ANavigationPoint *)0x0;
        this = *(ANavigationPoint **)(this + 0x3f0)) {
      for (iVar5 = *(int *)(*(int *)(in_ECX + 0xe0) + 0x61c); iVar5 != 0;
          iVar5 = *(int *)(iVar5 + 0x3f0)) {
        *(undefined4 *)(iVar5 + 1000) = 0;
      }
      iVar5 = ANavigationPoint::CanReach(this,(ANavigationPoint *)in_ECX,1e+07);
      if (iVar5 == 0) {
        puVar3 = UObject::GetName(in_ECX);
        pFVar4 = (FString *)
                 FString::Printf((ushort *)local_34,L"Cannot reach %s from this node!",puVar3);
        local_8._0_1_ = 1;
        iVar5 = **(int **)GWarn_exref;
        puVar3 = FString::operator*(pFVar4);
        (**(code **)(iVar5 + 0x30))(0,this,puVar3);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_34);
      }
    }
  }
  do {
    local_14 = puVar2;
    if (*(int *)(in_ECX + 0x3c0) <= iVar5) {
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = *(int *)(*(int *)(in_ECX + 0x3bc) + iVar5 * 4);
    local_18 = iVar5;
    if (((*(uint *)(iVar1 + 0x48) & 0x188) == 0) && (1000.0 < (double)*(int *)(iVar1 + 0x34))) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x3bc) + iVar5 * 4);
      local_1c = *(float *)(*(int *)(iVar1 + 0x38) + 0x1c4) -
                 *(float *)(*(int *)(iVar1 + 0x3c) + 0x1c4);
      fVar6 = (float10)thunk_FUN_10370480(local_1c);
      if (fVar6 < (float10)500.0) {
        local_20 = 0;
        while (iVar1 = local_20, local_20 < *(int *)(in_ECX + 0x3c0)) {
          iVar5 = *(int *)(in_ECX + 0x3bc);
          if ((float)*(int *)(*(int *)(iVar5 + local_20 * 4) + 0x34) < 700.0) {
            local_1c = (float)(*(int *)(*(int *)(iVar5 + local_18 * 4) + 0x34) -
                              *(int *)(*(int *)(iVar5 + local_20 * 4) + 0x34)) * 1.25;
            fVar6 = (float10)thunk_FUN_104a4940(local_1c,0x442f0000);
            iVar5 = ANavigationPoint::CanReach
                              (*(ANavigationPoint **)(*(int *)(iVar5 + iVar1 * 4) + 0x3c),
                               *(ANavigationPoint **)(*(int *)(iVar5 + local_18 * 4) + 0x3c),
                               (float)fVar6);
            if (iVar5 != 0) goto LAB_105faecb;
          }
          iVar5 = local_18;
          local_20 = iVar1 + 1;
        }
        puVar3 = UObject::GetName(*(UObject **)
                                   (*(int *)(*(int *)(in_ECX + 0x3bc) + iVar5 * 4) + 0x3c));
        pFVar4 = (FString *)
                 FString::Printf((ushort *)local_34,
                                 L"Path to %s is very long - add a pathnode in between.",puVar3);
        local_8._0_1_ = 2;
        iVar5 = **(int **)GWarn_exref;
        FString::operator*(pFVar4);
        (**(code **)(iVar5 + 0x30))(1);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_34);
      }
    }
LAB_105faecb:
    iVar5 = local_18 + 1;
    puVar2 = local_14;
  } while( true );
}


// ==== 105faeef Catch@105faeef

void Catch_105faeef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105faf03 Catch@105faf03

void Catch_105faf03(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::ReviewPath");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fafd0 FUN_105fafd0

undefined4 FUN_105fafd0(APawn *param_1)

{
  int iVar1;
  bool bVar2;
  ANavigationPoint *in_ECX;
  int iVar3;
  ANavigationPoint *pAVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108223e0;
  local_10 = ExceptionList;
  bVar2 = false;
  local_8 = 0;
  ExceptionList = &local_10;
  if (((byte)in_ECX[0x41c] & 1) == 0) {
    for (pAVar4 = *(ANavigationPoint **)(*(int *)(in_ECX + 0xe0) + 0x61c);
        pAVar4 != (ANavigationPoint *)0x0; pAVar4 = *(ANavigationPoint **)(pAVar4 + 0x3f0)) {
      if (pAVar4 != in_ECX) {
        for (iVar3 = 0; iVar3 < *(int *)(pAVar4 + 0x3c0); iVar3 = iVar3 + 1) {
          iVar1 = *(int *)(*(int *)(pAVar4 + 0x3bc) + iVar3 * 4);
          if ((*(ANavigationPoint **)(iVar1 + 0x3c) == in_ECX) &&
             ((*(uint *)(iVar1 + 0x48) & 0x100) != 0)) {
            bVar2 = true;
            break;
          }
        }
      }
    }
    ExceptionList = &local_10;
    if (!bVar2) {
      ExceptionList = &local_10;
      (**(code **)(**(int **)GWarn_exref + 0x30))(1);
    }
  }
  ANavigationPoint::ReviewPath(in_ECX,param_1);
  ExceptionList = local_10;
  return 1;
}


// ==== 105fb090 Catch@105fb090

void Catch_105fb090(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105fb0a4 Catch@105fb0a4

void Catch_105fb0a4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AJumpDest::ReviewPath");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fb100 FUN_105fb100

undefined4 FUN_105fb100(APawn *param_1)

{
  int iVar1;
  ANavigationPoint *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108223f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x3c0); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x3bc) + iVar2 * 4);
    if ((*(byte *)(iVar1 + 0x48) & 0x80) == 0) {
      (**(code **)(**(int **)(iVar1 + 0x3c) + 0x344))();
    }
  }
  ANavigationPoint::ReviewPath(in_ECX,param_1);
  ExceptionList = local_10;
  return 1;
}


// ==== 105fb17f Catch@105fb17f

void Catch_105fb17f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105fb193 Catch@105fb193

void Catch_105fb193(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APathNode::ReviewPath");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fb1e0 FUN_105fb1e0

void FUN_105fb1e0(ANavigationPoint *param_1)

{
  int iVar1;
  ushort *puVar2;
  FString *this;
  ANavigationPoint *in_ECX;
  float fVar3;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10822409;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  for (local_18 = 0; local_18 < *(int *)(in_ECX + 0x3c0); local_18 = local_18 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x3bc) + local_18 * 4);
    if ((*(ANavigationPoint **)(iVar1 + 0x3c) == param_1) && ((*(byte *)(iVar1 + 0x48) & 0x80) == 0)
       ) {
      return;
    }
  }
  local_34 = *(float *)(in_ECX + 0x1bc) - *(float *)(param_1 + 0x1bc);
  local_30 = *(float *)(in_ECX + 0x1c0) - *(float *)(param_1 + 0x1c0);
  local_2c = *(float *)(in_ECX + 0x1c4) - *(float *)(param_1 + 0x1c4);
  ExceptionList = &local_10;
  local_20 = local_2c;
  local_1c = local_30;
  fVar3 = FVector::Size((FVector *)&local_34);
  for (iVar1 = *(int *)(*(int *)(in_ECX + 0xe0) + 0x61c); iVar1 != 0;
      iVar1 = *(int *)(iVar1 + 0x3f0)) {
    *(undefined4 *)(iVar1 + 1000) = 0;
  }
  iVar1 = ANavigationPoint::CanReach(in_ECX,param_1,fVar3 * 1.5 * 1.2);
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return;
  }
  puVar2 = UObject::GetName((UObject *)in_ECX);
  this = (FString *)FString::Printf((ushort *)&local_34,L"Should be JumpDest for %s!",puVar2);
  local_8._0_1_ = 1;
  iVar1 = **(int **)GWarn_exref;
  puVar2 = FString::operator*(this);
  (**(code **)(iVar1 + 0x30))(0,param_1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)&local_34);
  ExceptionList = local_10;
  return;
}


// ==== 105fb345 Catch@105fb345

void Catch_105fb345(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105fb359 Catch@105fb359

void Catch_105fb359(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APathNode::CheckSymmetry");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fb3e0 FUN_105fb3e0

int FUN_105fb3e0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x3c0) <= iVar2) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)(in_ECX + 0x3bc) + iVar2 * 4);
    if (*(int *)(iVar1 + 0x3c) == param_1) break;
    iVar2 = iVar2 + 1;
  }
  return iVar1;
}


// ==== 105fb440 Catch@105fb440

void Catch_105fb440(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105fb454 Catch@105fb454

void Catch_105fb454(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::GetReachSpecTo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fb4a0 FUN_105fb4a0

void FUN_105fb4a0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x3c0); iVar3 = iVar3 + 1) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x3bc) + iVar3 * 4);
    *(uint *)(*piVar1 + 0x48) = *(uint *)(*piVar1 + 0x48) | 0x10;
  }
  for (iVar3 = *(int *)(*(int *)(in_ECX + 0xe0) + 0x61c); iVar3 != 0;
      iVar3 = *(int *)(iVar3 + 0x3f0)) {
    for (iVar2 = 0; iVar2 < *(int *)(iVar3 + 0x3c0); iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(*(int *)(iVar3 + 0x3bc) + iVar2 * 4) + 0x3c) == in_ECX) {
        piVar1 = (int *)(*(int *)(iVar3 + 0x3bc) + iVar2 * 4);
        *(uint *)(*piVar1 + 0x48) = *(uint *)(*piVar1 + 0x48) | 0x10;
      }
    }
  }
  return;
}


// ==== 105fb55c Catch@105fb55c

void Catch_105fb55c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105fb570 Catch@105fb570

void Catch_105fb570(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ADoor::addReachspecs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fb5d0 FUN_105fb5d0

void FUN_105fb5d0(AActor *param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822440;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  if (7 < *(int *)(in_ECX + 0x420)) {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffcc;
    (**(code **)(**(int **)GWarn_exref + 0x30))(0);
    ExceptionList = local_10;
    return;
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0x41300000;
  puVar1 = (undefined4 *)(in_ECX + (*(int *)(in_ECX + 0x420) * 3 + 0x111) * 4);
  ExceptionList = &local_10;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0x41300000;
  *(undefined4 *)(param_1 + 0x1564) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x1550) = 0x42f00000;
  AActor::SetCollisionSize(param_1,9.0,23.0);
  iVar3 = *(int *)(param_2 + 0x38);
  iVar3 = (**(code **)(**(int **)(in_ECX + 0xe4) + 0xa8))
                    (param_1,*(undefined4 *)(iVar3 + 0x1bc),*(undefined4 *)(iVar3 + 0x1c0),
                     *(undefined4 *)(iVar3 + 0x1c4),0,0,0);
  if (iVar3 != 0) {
    *(undefined4 *)(in_ECX + 0x4a4 + *(int *)(in_ECX + 0x420) * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x1b8) + 0x44c);
    puVar4 = (undefined4 *)
             APawn::SuggestJumpVelocity
                       ((APawn *)param_1,&local_28,*(undefined4 *)(in_ECX + 0x1bc),
                        *(undefined4 *)(in_ECX + 0x1c0),*(undefined4 *)(in_ECX + 0x1c4),0x42f00000,0
                       );
    puVar1 = (undefined4 *)(in_ECX + (*(int *)(in_ECX + 0x420) + 0x5b) * 0xc);
    *puVar1 = *puVar4;
    puVar1[1] = puVar4[1];
    puVar1[2] = puVar4[2];
  }
  *(undefined4 *)(param_1 + 0x1564) = 0x41200000;
  *(int *)(in_ECX + 0x424 + *(int *)(in_ECX + 0x420) * 4) = param_2;
  *(int *)(in_ECX + 0x420) = *(int *)(in_ECX + 0x420) + 1;
  if (*(float *)(in_ECX + 0x1c4) < *(float *)(*(int *)(param_2 + 0x38) + 0x1c4)) {
    fVar2 = *(float *)(in_ECX + 0x1c4) - *(float *)(*(int *)(param_2 + 0x38) + 0x1c4);
    appSqrt((double)((fVar2 + fVar2) / *(float *)(*(int *)(in_ECX + 0x1b8) + 0x44c)));
    uVar5 = FUN_107a6660();
    *(undefined4 *)(param_2 + 0x4c) = uVar5;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105fb7e2 Catch@105fb7e2

void Catch_105fb7e2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fb7f6 Catch@105fb7f6

void Catch_105fb7f6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AJumpDest::SetupForcedPath");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fb8b0 FUN_105fb8b0

void FUN_105fb8b0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822450;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x3f0) = 0;
  *(undefined4 *)(in_ECX + 0x3f4) = 0;
  *(undefined4 *)(in_ECX + 0x3f8) = 0;
  *(undefined4 *)(in_ECX + 0x3fc) = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x3c0); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x3bc),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 105fb924 Catch@105fb924

void Catch_105fb924(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105fb938 Catch@105fb938

void Catch_105fb938(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::ClearPaths");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fb980 FUN_105fb980

void FUN_105fb980(void)

{
  ANavigationPoint *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822460;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ANavigationPoint::ClearPaths(in_ECX);
  *(undefined4 *)(in_ECX + 0x420) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 105fb9d1 Catch@105fb9d1

void Catch_105fb9d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fb9e5 Catch@105fb9e5

void Catch_105fb9e5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::ClearPaths");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fba30 FUN_105fba30

void FUN_105fba30(void)

{
  ANavigationPoint *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822470;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ANavigationPoint::ClearPaths(in_ECX);
  if (*(int *)(in_ECX + 0x41c) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x41c) + 0x4f4) = 0;
  }
  *(undefined4 *)(in_ECX + 0x420) = 0;
  *(undefined4 *)(in_ECX + 0x41c) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 105fba91 Catch@105fba91

void Catch_105fba91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fbaa5 Catch@105fbaa5

void Catch_105fbaa5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALadder::ClearPaths");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fbaf0 FUN_105fbaf0

void FUN_105fbaf0(void)

{
  int iVar1;
  ANavigationPoint *in_ECX;
  void *local_88;
  undefined1 *puStack_84;
  undefined4 local_80;
  undefined1 local_74 [4];
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puStack_84 = &LAB_10822480;
  local_88 = ExceptionList;
  local_80 = 0;
  if (*(int *)GIsEditor_exref != 0) {
    ExceptionList = &local_88;
    (**(code **)(*(int *)in_ECX + 0x1bc))(1,1);
    iVar1 = ANavigationPoint::ShouldBeBased(in_ECX);
    if ((iVar1 != 0) && (in_ECX[0xf4] != (ANavigationPoint)0x0)) {
      thunk_FUN_104419f0(0x3f800000,0);
      local_1c = 0x41100000;
      local_18 = 0x41100000;
      if (*(float *)(in_ECX + 0x2f0) < 9.0) {
        local_38 = *(undefined4 *)(in_ECX + 0x2f0);
        local_34 = *(undefined4 *)(in_ECX + 0x2f0);
        local_30 = 0x3f800000;
        local_18 = local_34;
      }
      local_14 = 0x3f800000;
      local_44 = *(float *)(in_ECX + 0x1bc) - 0.0;
      local_40 = *(float *)(in_ECX + 0x1c0) - 0.0;
      local_3c = *(float *)(in_ECX + 0x1c4) -
                 (*(float *)(in_ECX + 0x2f4) + *(float *)(in_ECX + 0x2f4));
      local_10 = local_40;
      local_c = local_44;
      local_8 = local_3c;
      (**(code **)(**(int **)(in_ECX + 0xe4) + 0xe4))(local_74);
      if (local_70 != 0) {
        if (local_58 <= 0.7) {
          local_70 = 0;
        }
        else {
          local_28 = local_6c + 0.0;
          local_24 = local_68 + 0.0;
          local_20 = local_64 + (*(float *)(in_ECX + 0x2f4) - 1.0);
          local_10 = local_20;
          local_c = local_24;
          local_8 = local_28;
          (**(code **)(**(int **)(in_ECX + 0xe4) + 0xa8))();
        }
      }
      (**(code **)(*(int *)in_ECX + 0x16c))(local_70,local_60,local_5c,local_58,1);
    }
    ExceptionList = local_88;
    return;
  }
  return;
}


// ==== 105fbd1b Catch@105fbd1b

void Catch_105fbd1b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x50) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x50,&DAT_10914c48);
}


// ==== 105fbd2f Catch@105fbd2f

void Catch_105fbd2f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::FindBase");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fbdf0 FUN_105fbdf0

void FUN_105fbdf0(void)

{
  ANavigationPoint *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822490;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GIsEditor_exref != 0) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)in_ECX + 0x2d4))();
    ANavigationPoint::FindBase(in_ECX);
    (**(code **)(*(int *)in_ECX + 0x2d8))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 105fbe59 Catch@105fbe59

void Catch_105fbe59(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fbe6d Catch@105fbe6d

void Catch_105fbe6d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ADoor::FindBase");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fbeb0 FUN_105fbeb0

undefined4 FUN_105fbeb0(UReachSpec *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108224a0;
  local_10 = ExceptionList;
  iVar7 = 0;
  local_8 = 0;
  iVar5 = *(int *)(param_1 + 0x38);
  iVar6 = *(int *)(param_1 + 0x3c);
  fVar2 = *(float *)(iVar6 + 0x1bc) - *(float *)(iVar5 + 0x1bc);
  fVar3 = *(float *)(iVar6 + 0x1c0) - *(float *)(iVar5 + 0x1c0);
  fVar4 = *(float *)(iVar6 + 0x1c4) - *(float *)(iVar5 + 0x1c4);
  while( true ) {
    if (*(int *)(in_ECX + 0x3c0) <= iVar7) {
      iVar5 = 0;
      ExceptionList = &local_10;
      while( true ) {
        if (*(int *)(in_ECX + 0x3c0) <= iVar5) {
          ExceptionList = local_10;
          return 0;
        }
        piVar1 = (int *)(*(int *)(in_ECX + 0x3bc) + iVar5 * 4);
        iVar6 = *piVar1;
        if (((((*(char *)(iVar6 + 0x50) == '\0') &&
              (iVar6 = *(int *)(iVar6 + 0x34), 0.0 < (float)iVar6)) &&
             ((double)(iVar6 + param_2) < (double)*(int *)(param_1 + 0x34) * 1.2000000476837158)) &&
            ((iVar6 = UReachSpec::operator<=((UReachSpec *)*piVar1,param_1), iVar6 != 0 &&
             (iVar6 = *(int *)(*(int *)(in_ECX + 0x3bc) + iVar5 * 4),
             *(int *)(iVar6 + 0x3c) != *(int *)(param_1 + 0x38))))) &&
           ((iVar6 = *(int *)(iVar6 + 0x3c),
            0.0 < fVar4 * (*(float *)(iVar6 + 0x1c4) - *(float *)(in_ECX + 0x1c4)) +
                  fVar3 * (*(float *)(iVar6 + 0x1c0) - *(float *)(in_ECX + 0x1c0)) +
                  fVar2 * (*(float *)(iVar6 + 0x1bc) - *(float *)(in_ECX + 0x1bc)) &&
            (iVar6 = *(int *)(*(int *)(in_ECX + 0x3bc) + iVar5 * 4),
            iVar6 = ANavigationPoint::FindAlternatePath
                              (*(ANavigationPoint **)(iVar6 + 0x3c),param_1,
                               *(int *)(iVar6 + 0x34) + param_2), iVar6 != 0)))) break;
        iVar5 = iVar5 + 1;
      }
      ExceptionList = local_10;
      return 1;
    }
    piVar1 = (int *)(*(int *)(in_ECX + 0x3bc) + iVar7 * 4);
    iVar5 = *piVar1;
    if (((*(char *)(iVar5 + 0x50) == '\0') &&
        (iVar6 = *(int *)(param_1 + 0x3c), *(int *)(iVar5 + 0x3c) == iVar6)) &&
       (0.0 <= fVar4 * (*(float *)(iVar6 + 0x1c4) - *(float *)(in_ECX + 0x1c4)) +
               fVar3 * (*(float *)(iVar6 + 0x1c0) - *(float *)(in_ECX + 0x1c0)) +
               fVar2 * (*(float *)(iVar6 + 0x1bc) - *(float *)(in_ECX + 0x1bc)))) break;
    iVar7 = iVar7 + 1;
  }
  if ((double)(*(int *)(iVar5 + 0x34) + param_2) <
      (double)*(int *)(param_1 + 0x34) * 1.2000000476837158) {
    ExceptionList = &local_10;
    iVar5 = UReachSpec::operator<=((UReachSpec *)*piVar1,param_1);
    if (iVar5 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}


// ==== 105fc11f Catch@105fc11f

void Catch_105fc11f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105fc133 Catch@105fc133

void Catch_105fc133(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::FindAlternatePath");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fc200 FUN_105fc200

void FUN_105fc200(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 105fc230 FUN_105fc230

UObject * FUN_105fc230(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ALadder::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105fc260 FUN_105fc260

void FUN_105fc260(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UReachSpec::PrivateStaticClass);
  if (iVar1 == 0) {
    appFailAssert("Class->IsChildOf(T::StaticClass())",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
  }
  if (param_2 == (UPackage *)0xffffffff) {
    param_2 = UObject::GetTransientPackage();
  }
  UObject::StaticConstructObject(param_1,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0);
  return;
}


// ==== 105fc2e0 FUN_105fc2e0

UObject * FUN_105fc2e0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ALiftExit::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105fc310 FUN_105fc310

UObject * FUN_105fc310(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ATeleporter::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105fc340 FUN_105fc340

UObject * FUN_105fc340(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ALadderVolume::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105fc370 FUN_105fc370

UObject * FUN_105fc370(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&AWarpZoneMarker::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105fc3a0 FUN_105fc3a0

void FUN_105fc3a0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108224b0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar2 = *(int *)(in_ECX + 0x3c0);
  ExceptionList = &local_10;
  while( true ) {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) break;
    piVar1 = (int *)(*(int *)(in_ECX + 0x3bc) + iVar2 * 4);
    if ((*piVar1 != 0) && (*(char *)(*piVar1 + 0x50) != '\0')) {
      thunk_FUN_10385c50(iVar2,1);
    }
  }
  FArray::Shrink((FArray *)(in_ECX + 0x3bc),4);
  ExceptionList = local_10;
  return;
}


// ==== 105fc41f Catch@105fc41f

void Catch_105fc41f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105fc433 Catch@105fc433

void Catch_105fc433(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::CleanUpPruned");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fc480 FUN_105fc480

int FUN_105fc480(ANavigationPoint *param_1)

{
  int iVar1;
  ANavigationPoint *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108224c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_105fc230(param_1);
  if ((iVar1 != 0) && (*(int *)(in_ECX + 0x41c) == *(int *)(iVar1 + 0x41c))) {
    ExceptionList = local_10;
    return 1;
  }
  iVar1 = ANavigationPoint::ProscribedPathTo(in_ECX,param_1);
  ExceptionList = local_10;
  return iVar1;
}


// ==== 105fc4fb Catch@105fc4fb

void Catch_105fc4fb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fc50f Catch@105fc50f

void Catch_105fc50f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALadder::ProscribedPathTo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fc560 FUN_105fc560

void FUN_105fc560(APawn *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  UObject *pUVar3;
  UReachSpec *this;
  UClass *pUVar4;
  FString *this_00;
  FName *this_01;
  undefined4 uVar5;
  ANavigationPoint *in_ECX;
  UObject *this_02;
  FOutputDevice *this_03;
  float fVar6;
  FName *pFVar7;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  FName local_34 [8];
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_108224d9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  local_8 = 0;
  uVar1 = *(uint *)(in_ECX + 0x410);
  if (((uVar1 & 0x2000) == 0) && (param_2 != 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  ExceptionList = &local_10;
  *(uint *)(in_ECX + 0x410) = (iVar2 << 0xd ^ uVar1) & 0x2000 ^ uVar1;
  pUVar3 = *(UObject **)(in_ECX + 0xe4);
  FName::FName((FName *)&stack0xffffff9c,0);
  pUVar3 = UObject::GetOuter(pUVar3);
  this = (UReachSpec *)thunk_FUN_105fc260(&UReachSpec::PrivateStaticClass,pUVar3);
  if (*(int *)(in_ECX + 0x40) == 0) {
    iVar2 = ANavigationPoint::ShouldBeBased(in_ECX);
    if (iVar2 != 0) {
      pUVar4 = UObject::GetClass(this_02);
      if ((*(uint *)(pUVar4 + 0x4a4) & 0x200) != 0) {
        (**(code **)(**(int **)GWarn_exref + 0x30))(0);
      }
    }
  }
  pUVar3 = *(UObject **)(in_ECX + 0x40);
  if ((pUVar3 != (UObject *)0x0) && ((*(uint *)(pUVar3 + 0x368) & 0x8000) != 0)) {
    UObject::GetName(pUVar3);
    this_00 = (FString *)FString::Printf((ushort *)&local_50);
    local_8._0_1_ = 1;
    iVar2 = **(int **)GWarn_exref;
    FString::operator*(this_00);
    (**(code **)(iVar2 + 0x30))(0);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString((FString *)&local_50);
  }
  if (in_ECX[0xf4] == (ANavigationPoint)0x0) {
    (**(code **)(**(int **)GWarn_exref + 0x30))(0);
  }
  local_1c = 0;
  do {
    if (*(int *)(*(int *)(in_ECX + 0xe4) + 0x3c) <= local_1c) {
      ExceptionList = local_10;
      return;
    }
    pUVar3 = (UObject *)thunk_FUN_1056b270();
    if (((((pUVar3 != (UObject *)0x0) && (((byte)pUVar3[100] & 0x80) == 0)) &&
         ((*(uint *)(pUVar3 + 0x410) & 0x8800) == 0)) && (pUVar3 != (UObject *)in_ECX)) &&
       (((*(uint *)(in_ECX + 0x410) & 0x2000) != 0 || ((*(uint *)(pUVar3 + 0x410) & 0x2000) != 0))))
    {
      local_44 = *(float *)(pUVar3 + 0x1bc) - *(float *)(in_ECX + 0x1bc);
      local_40 = *(float *)(pUVar3 + 0x1c0) - *(float *)(in_ECX + 0x1c0);
      local_3c = *(float *)(pUVar3 + 0x1c4) - *(float *)(in_ECX + 0x1c4);
      local_2c = local_3c;
      local_28 = local_40;
      local_24 = local_44;
      fVar6 = FVector::SizeSquared((FVector *)&local_44);
      if (fVar6 < 18.0) {
        pUVar4 = UObject::GetClass(pUVar3);
        if ((*(uint *)(pUVar4 + 0x4a4) & 0x200) != 0) {
          (**(code **)(**(int **)GWarn_exref + 0x30))(1);
        }
      }
      local_24 = (float)(**(code **)(*(int *)in_ECX + 800))();
      UReachSpec::Init(this);
      if (local_24 == 2.8026e-45) {
        *(undefined4 *)(this + 0x48) = 0x80;
        *(ANavigationPoint **)(this + 0x38) = in_ECX;
        *(UObject **)(this + 0x3c) = pUVar3;
LAB_105fc906:
        thunk_FUN_105fc200();
      }
      else {
        local_20 = 0;
        for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
          pFVar7 = local_34;
          this_01 = (FName *)UObject::GetFName(pUVar3);
          iVar2 = FName::operator==(this_01,pFVar7);
          if (iVar2 != 0) {
            local_20 = 1;
          }
        }
        if (local_20 == 0) {
          if (((*(uint *)(in_ECX + 0x410) & 0x4000) == 0) && (local_24 == 0.0)) {
            iVar2 = UReachSpec::defineFor(this,in_ECX,(ANavigationPoint *)pUVar3,param_1);
            if (iVar2 != 0) {
              if (*(int *)GLog_exref != 0) {
                UObject::GetName(pUVar3);
                UObject::GetName((UObject *)in_ECX);
                FOutputDevice::Logf2(this_03,*(ushort **)GLog_exref);
              }
              goto LAB_105fc906;
            }
          }
          goto LAB_105fc946;
        }
        UReachSpec::Init(this);
        *(undefined4 *)(this + 0x40) = 0x12;
        *(undefined4 *)(this + 0x44) = 0x1e;
        *(undefined4 *)(this + 0x48) = 0x100;
        *(ANavigationPoint **)(this + 0x38) = in_ECX;
        *(UObject **)(this + 0x3c) = pUVar3;
        local_50 = *(float *)(in_ECX + 0x1bc) - *(float *)(pUVar3 + 0x1bc);
        local_4c = *(float *)(in_ECX + 0x1c0) - *(float *)(pUVar3 + 0x1c0);
        local_48 = *(float *)(in_ECX + 0x1c4) - *(float *)(pUVar3 + 0x1c4);
        local_2c = local_50;
        local_28 = local_4c;
        local_24 = local_48;
        FVector::Size((FVector *)&local_50);
        uVar5 = FUN_107a6660();
        *(undefined4 *)(this + 0x34) = uVar5;
        *(uint *)(this + 0x54) = *(uint *)(this + 0x54) | 1;
        thunk_FUN_105fc200();
        (**(code **)(*(int *)pUVar3 + 0x330))();
      }
      pUVar3 = *(UObject **)(in_ECX + 0xe4);
      FName::FName((FName *)&stack0xffffff9c,0);
      pUVar3 = UObject::GetOuter(pUVar3);
      this = (UReachSpec *)thunk_FUN_105fc260(&UReachSpec::PrivateStaticClass,pUVar3);
    }
LAB_105fc946:
    local_1c = local_1c + 1;
  } while( true );
}


// ==== 105fc96d Catch@105fc96d

void Catch_105fc96d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 105fc981 Catch@105fc981

void Catch_105fc981(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::addReachspecs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fcab0 FUN_105fcab0

void FUN_105fcab0(undefined4 param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  AActor *pAVar3;
  UObject *pUVar4;
  UReachSpec *pUVar5;
  int iVar6;
  uint uVar7;
  int *in_ECX;
  float10 fVar8;
  int *piStack_b4;
  undefined1 local_a0 [36];
  float local_7c;
  undefined1 *local_70;
  void *local_6c;
  undefined1 *puStack_68;
  undefined4 local_64;
  float local_60;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puStack_68 = &LAB_108224f0;
  local_6c = ExceptionList;
  local_70 = &stack0xffffff54;
  local_64 = 0;
  uVar7 = in_ECX[0x104];
  if (((uVar7 & 0x2000) == 0) && (param_2 != 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  ExceptionList = &local_6c;
  in_ECX[0x104] = (iVar2 << 0xd ^ uVar7) & 0x2000 ^ uVar7;
  (**(code **)(*in_ECX + 0x338))();
  piStack_b4 = (int *)0x105fcb21;
  iVar2 = thunk_FUN_10493fa0();
  in_ECX[0x108] = iVar2;
  if (iVar2 == 0) {
    piStack_b4 = in_ECX;
    (**(code **)(**(int **)GWarn_exref + 0x30))(1);
  }
  if (in_ECX[0x108] != 0) {
    piStack_b4 = (int *)0x105fcb61;
    iVar2 = FName::operator!=((FName *)(in_ECX + 0x107),(FName *)(in_ECX[0x108] + 0x10c));
    if (iVar2 != 0) {
      piStack_b4 = in_ECX;
      (**(code **)(**(int **)GWarn_exref + 0x30))(1);
    }
  }
  if (in_ECX[0x108] != 0) {
    pAVar3 = UClass::GetDefaultActor(&AMover::PrivateStaticClass);
    piStack_b4 = (int *)0x105fcba7;
    iVar2 = FName::operator==((FName *)(in_ECX[0x108] + 0x148),(FName *)(pAVar3 + 0x148));
    if (iVar2 != 0) {
      (**(code **)(**(int **)GWarn_exref + 0x30))(0);
    }
  }
  pUVar4 = (UObject *)in_ECX[0x39];
  FName::FName((FName *)&piStack_b4,0);
  pUVar4 = UObject::GetOuter(pUVar4);
  pUVar5 = (UReachSpec *)thunk_FUN_105fc260(&UReachSpec::PrivateStaticClass,pUVar4);
  local_18 = 0;
  local_1c = 0;
LAB_105fcc00:
  do {
    if (*(int *)(in_ECX[0x39] + 0x3c) <= local_1c) {
      if (local_18 == 0) {
        (**(code **)(**(int **)GWarn_exref + 0x30))(0);
      }
      ExceptionList = local_6c;
      return;
    }
    piStack_b4 = (int *)0x105fcc1d;
    iVar2 = thunk_FUN_105fc2e0();
    if (iVar2 != 0) {
      piStack_b4 = (int *)0x105fcc3d;
      iVar6 = FName::operator==((FName *)(iVar2 + 0x41c),(FName *)(in_ECX + 0x107));
      if ((iVar6 != 0) &&
         (((in_ECX[0x104] & 0x2000U) != 0 || ((*(uint *)(iVar2 + 0x410) & 0x2000) != 0)))) {
        local_18 = local_18 + 1;
        *(int *)(iVar2 + 0x420) = in_ECX[0x108];
        UReachSpec::Init(pUVar5);
        *(undefined4 *)(pUVar5 + 0x40) = 0x12;
        *(undefined4 *)(pUVar5 + 0x44) = 0x1e;
        *(undefined4 *)(pUVar5 + 0x48) = 0x20;
        *(int **)(pUVar5 + 0x38) = in_ECX;
        *(int *)(pUVar5 + 0x3c) = iVar2;
        *(undefined4 *)(pUVar5 + 0x34) = 500;
        piStack_b4 = (int *)0x105fcca6;
        thunk_FUN_105fc200();
        pUVar4 = (UObject *)in_ECX[0x39];
        FName::FName((FName *)&piStack_b4,0);
        pUVar4 = UObject::GetOuter(pUVar4);
        pUVar5 = (UReachSpec *)thunk_FUN_105fc260(&UReachSpec::PrivateStaticClass,pUVar4);
        UReachSpec::Init(pUVar5);
        *(undefined4 *)(pUVar5 + 0x40) = 0x12;
        *(undefined4 *)(pUVar5 + 0x44) = 0x1e;
        *(undefined4 *)(pUVar5 + 0x48) = 0x20;
        *(int *)(pUVar5 + 0x38) = iVar2;
        *(int **)(pUVar5 + 0x3c) = in_ECX;
        *(undefined4 *)(pUVar5 + 0x34) = 500;
        piStack_b4 = (int *)0x105fcd0f;
        thunk_FUN_105fc200();
        pUVar4 = (UObject *)in_ECX[0x39];
        FName::FName((FName *)&piStack_b4,0);
        pUVar4 = UObject::GetOuter(pUVar4);
        pUVar5 = (UReachSpec *)thunk_FUN_105fc260(&UReachSpec::PrivateStaticClass,pUVar4);
        uVar7 = (uint)*(byte *)(iVar2 + 0x424);
        if (*(byte *)(iVar2 + 0x424) == 0xff) {
          if (in_ECX[0x108] == 0) goto LAB_105fcf31;
          local_20 = 0xffffffff;
          local_28 = 1e+06;
          piStack_b4 = (int *)0x3f800000;
          thunk_FUN_104419f0();
          for (local_14 = 0; iVar6 = in_ECX[0x108],
              (int)local_14 < (int)(uint)*(byte *)(iVar6 + 0x44d); local_14 = local_14 + 1) {
            pfVar1 = (float *)(iVar6 + 0x4b4 + local_14 * 0xc);
            local_60 = *pfVar1 + *(float *)(iVar6 + 0x1bc);
            local_50 = local_60 + (float)in_ECX[0x10c];
            local_4c = (float)in_ECX[0x10d] + pfVar1[1] + *(float *)(iVar6 + 0x1c0);
            local_48 = (float)in_ECX[0x10e] + pfVar1[2] + *(float *)(iVar6 + 0x1c4);
            local_10 = local_48 - *(float *)(iVar2 + 0x1c4);
            piStack_b4 = (int *)0x105fce10;
            local_24 = local_50;
            local_c = local_4c;
            local_8 = local_48;
            fVar8 = (float10)thunk_FUN_10370480();
            if (fVar8 < (float10)10.0) {
              local_44 = local_24 - *(float *)(iVar2 + 0x1bc);
              local_40 = local_c - *(float *)(iVar2 + 0x1c0);
              local_3c = local_8 - *(float *)(iVar2 + 0x1c4);
              local_10 = local_44;
              local_c = local_40;
              local_8 = local_3c;
              local_8 = FVector::Size2D((FVector *)&local_44);
              if (local_8 < local_28) {
                local_34 = (float)in_ECX[0xbc];
                piStack_b4 = (int *)in_ECX[0xbc];
                local_2c = 0x3f800000;
                local_30 = (float)piStack_b4;
                local_10 = local_34;
                local_c = (float)piStack_b4;
                (**(code **)(*(int *)in_ECX[0x39] + 0xe4))
                          (local_a0,iVar2,&local_50,iVar2 + 0x1bc,0x86,local_34);
                if (local_7c == 1.0) {
                  local_20 = local_14;
                  local_28 = local_8;
                }
              }
            }
          }
          uVar7 = local_20;
          if ((int)local_20 < 0) {
            piStack_b4 = (int *)iVar2;
            (**(code **)(**(int **)GWarn_exref + 0x30))(1);
            local_1c = local_1c + 1;
            goto LAB_105fcc00;
          }
        }
        *(char *)(iVar2 + 0x425) = (char)uVar7;
      }
    }
LAB_105fcf31:
    local_1c = local_1c + 1;
  } while( true );
}


// ==== 105fcf78 Catch@105fcf78

void Catch_105fcf78(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x28) = *(undefined4 *)(unaff_EBP + 0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x28,&DAT_10914c48);
}


// ==== 105fcf8c Catch@105fcf8c

void Catch_105fcf8c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALiftCenter::addReachspecs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fd0f0 FUN_105fd0f0

void FUN_105fd0f0(APawn *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  UObject *pUVar4;
  UReachSpec *this;
  int iVar5;
  ANavigationPoint *pAVar6;
  undefined4 uVar7;
  ANavigationPoint *in_ECX;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 *local_28;
  float local_24;
  float local_20;
  UReachSpec *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822500;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  pUVar4 = *(UObject **)(in_ECX + 0xe4);
  local_28 = &stack0xffffffac;
  ExceptionList = &local_10;
  FName::FName((FName *)&stack0xffffffac,0);
  pUVar4 = UObject::GetOuter(pUVar4);
  this = (UReachSpec *)thunk_FUN_105fc260(&UReachSpec::PrivateStaticClass,pUVar4);
  uVar2 = *(uint *)(in_ECX + 0x410);
  if (((uVar2 & 0x2000) == 0) && (param_2 != 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
  }
  *(uint *)(in_ECX + 0x410) = (iVar5 << 0xd ^ uVar2) & 0x2000 ^ uVar2;
  local_1c = this;
  if (*(int *)(in_ECX + 0x41c) != 0) {
    for (local_18 = 0; local_18 < *(int *)(*(int *)(in_ECX + 0xe4) + 0x3c); local_18 = local_18 + 1)
    {
      pAVar6 = (ANavigationPoint *)thunk_FUN_105fc230();
      if (((pAVar6 != (ANavigationPoint *)0x0) && (pAVar6 != in_ECX)) &&
         ((*(int *)(pAVar6 + 0x41c) == *(int *)(in_ECX + 0x41c) &&
          (((*(uint *)(in_ECX + 0x410) & 0x2000) != 0 || ((*(uint *)(pAVar6 + 0x410) & 0x2000) != 0)
           ))))) {
        UReachSpec::Init(this);
        *(undefined4 *)(this + 0x40) = 0x12;
        *(undefined4 *)(this + 0x44) = 0x1e;
        *(undefined4 *)(this + 0x48) = 0x40;
        *(ANavigationPoint **)(this + 0x38) = in_ECX;
        *(ANavigationPoint **)(this + 0x3c) = pAVar6;
        local_40 = *(float *)(in_ECX + 0x1bc) - *(float *)(pAVar6 + 0x1bc);
        local_3c = *(float *)(in_ECX + 0x1c0) - *(float *)(pAVar6 + 0x1c0);
        local_38 = *(float *)(in_ECX + 0x1c4) - *(float *)(pAVar6 + 0x1c4);
        local_28 = (undefined1 *)local_38;
        local_24 = local_3c;
        local_20 = local_40;
        FVector::Size((FVector *)&local_40);
        uVar7 = FUN_107a6660();
        *(undefined4 *)(this + 0x34) = uVar7;
        thunk_FUN_105fc200();
        pUVar4 = *(UObject **)(in_ECX + 0xe4);
        local_28 = &stack0xffffffac;
        FName::FName((FName *)&stack0xffffffac,0);
        pUVar4 = UObject::GetOuter(pUVar4);
        this = (UReachSpec *)thunk_FUN_105fc260(&UReachSpec::PrivateStaticClass,pUVar4);
        local_1c = this;
      }
    }
  }
  ANavigationPoint::addReachSpecs(in_ECX,param_1,param_2);
  for (iVar5 = 0; iVar5 < *(int *)(in_ECX + 0x3c0); iVar5 = iVar5 + 1) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x3bc) + iVar5 * 4);
    if (((*piVar1 != 0) && (iVar3 = *piVar1, (*(byte *)(iVar3 + 0x48) & 8) != 0)) &&
       (*(float *)(*(int *)(iVar3 + 0x3c) + 0x1c4) <
        *(float *)(*(int *)(iVar3 + 0x38) + 0x1c4) - *(float *)(*(int *)(iVar3 + 0x38) + 0x2f4))) {
      *(undefined1 *)(iVar3 + 0x50) = 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105fd32a Catch@105fd32a

void Catch_105fd32a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 105fd33e Catch@105fd33e

void Catch_105fd33e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALadder::addReachspecs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fd400 FUN_105fd400

void FUN_105fd400(APawn *param_1,int param_2)

{
  uint uVar1;
  UObject *pUVar2;
  UReachSpec *this;
  int iVar3;
  ANavigationPoint *pAVar4;
  ushort *puVar5;
  ANavigationPoint *in_ECX;
  undefined1 *local_20;
  UReachSpec *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822510;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  pUVar2 = *(UObject **)(in_ECX + 0xe4);
  local_20 = &stack0xffffffc4;
  ExceptionList = &local_10;
  FName::FName((FName *)&stack0xffffffc4,0);
  pUVar2 = UObject::GetOuter(pUVar2);
  this = (UReachSpec *)thunk_FUN_105fc260(&UReachSpec::PrivateStaticClass,pUVar2);
  uVar1 = *(uint *)(in_ECX + 0x410);
  if (((uVar1 & 0x2000) == 0) && (param_2 != 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  *(uint *)(in_ECX + 0x410) = (iVar3 << 0xd ^ uVar1) & 0x2000 ^ uVar1;
  local_18 = 0;
  local_1c = this;
  do {
    if (*(int *)(*(int *)(in_ECX + 0xe4) + 0x3c) <= local_18) {
LAB_105fd583:
      ANavigationPoint::addReachSpecs(in_ECX,param_1,param_2);
      ExceptionList = local_10;
      return;
    }
    pAVar4 = (ANavigationPoint *)thunk_FUN_105fc310();
    if ((pAVar4 != (ANavigationPoint *)0x0) && (pAVar4 != in_ECX)) {
      FName::FName((FName *)&local_20,0);
      iVar3 = FName::operator!=((FName *)(pAVar4 + 0x10c),(FName *)&local_20);
      if (iVar3 != 0) {
        puVar5 = FName::operator*((FName *)(pAVar4 + 0x10c));
        iVar3 = FString::operator==((FString *)(in_ECX + 0x41c),puVar5);
        if ((iVar3 != 0) &&
           (((*(uint *)(in_ECX + 0x410) & 0x2000) != 0 ||
            ((*(uint *)(pAVar4 + 0x410) & 0x2000) != 0)))) {
          UReachSpec::Init(this);
          *(undefined4 *)(this + 0x40) = 0x1e;
          *(undefined4 *)(this + 0x44) = 0x1e;
          *(undefined4 *)(this + 0x48) = 0x20;
          *(ANavigationPoint **)(this + 0x38) = in_ECX;
          *(ANavigationPoint **)(this + 0x3c) = pAVar4;
          *(undefined4 *)(this + 0x34) = 100;
          thunk_FUN_105fc200();
          pUVar2 = *(UObject **)(in_ECX + 0xe4);
          local_20 = &stack0xffffffc4;
          FName::FName((FName *)&stack0xffffffc4,0);
          pUVar2 = UObject::GetOuter(pUVar2);
          local_1c = (UReachSpec *)thunk_FUN_105fc260(&UReachSpec::PrivateStaticClass,pUVar2);
          goto LAB_105fd583;
        }
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}


// ==== 105fd5b8 Catch@105fd5b8

void Catch_105fd5b8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105fd5cc Catch@105fd5cc

void Catch_105fd5cc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ATeleporter::addReachspecs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fd670 FUN_105fd670

void FUN_105fd670(AActor *param_1,int param_2)

{
  int iVar1;
  ANavigationPoint *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822520;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ANavigationPoint::addReachSpecs(in_ECX,(APawn *)param_1,param_2);
  AActor::SetCollisionSize(param_1,9.0,23.0);
  iVar1 = (**(code **)(**(int **)(in_ECX + 0xe4) + 0xa8))
                    (param_1,*(undefined4 *)(in_ECX + 0x1bc),*(undefined4 *)(in_ECX + 0x1c0),
                     *(undefined4 *)(in_ECX + 0x1c4),1,0,0);
  if (iVar1 == 0) {
    (**(code **)(**(int **)GWarn_exref + 0x30))(0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105fd730 Catch@105fd730

void Catch_105fd730(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fd744 Catch@105fd744

void Catch_105fd744(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APlayerStart::addReachspecs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fd7a0 FUN_105fd7a0

void FUN_105fd7a0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  FName local_1c [4];
  FName local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822530;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FName::FName(local_18,0);
  iVar1 = FName::operator!=((FName *)(in_ECX + 0x41c),local_18);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(in_ECX + 0x420) = 0;
  do {
    while( true ) {
      if (*(int *)(*(int *)(in_ECX + 0xe4) + 0x3c) <= iVar3) {
        if (*(int *)(in_ECX + 0x420) != 0) {
          ExceptionList = local_10;
          return;
        }
        (**(code **)(**(int **)GWarn_exref + 0x30))(1);
        ExceptionList = local_10;
        return;
      }
      iVar1 = thunk_FUN_10493fa0(*(undefined4 *)
                                  (*(int *)(*(int *)(in_ECX + 0xe4) + 0x38) + iVar3 * 4));
      if (iVar1 != 0) break;
LAB_105fd960:
      iVar3 = iVar3 + 1;
    }
    iVar2 = FName::operator==((FName *)(iVar1 + 0x10c),(FName *)(in_ECX + 0x41c));
    if (iVar2 == 0) {
      if (*(int *)(in_ECX + 0x420) != 0) {
        FName::FName(local_18,0);
        iVar2 = FName::operator!=((FName *)(*(int *)(in_ECX + 0x420) + 0x480),local_18);
        if ((iVar2 != 0) &&
           (iVar2 = FName::operator==((FName *)(iVar1 + 0x480),
                                      (FName *)(*(int *)(in_ECX + 0x420) + 0x480)), iVar2 != 0))
        goto LAB_105fd889;
      }
      goto LAB_105fd960;
    }
LAB_105fd889:
    if (*(int *)(in_ECX + 0x420) != 0) {
      FName::FName(local_1c,0);
      iVar2 = FName::operator==((FName *)(*(int *)(in_ECX + 0x420) + 0x480),local_1c);
      if ((iVar2 != 0) ||
         (iVar2 = FName::operator!=((FName *)(iVar1 + 0x480),
                                    (FName *)(*(int *)(in_ECX + 0x420) + 0x480)), iVar2 != 0)) {
        (**(code **)(**(int **)GWarn_exref + 0x30))
                  (0,*(undefined4 *)(in_ECX + 0x420),L"Door has same tag as another door");
        (**(code **)(**(int **)GWarn_exref + 0x30))(0,iVar1,L"Door has same tag as another door");
      }
    }
    *(int *)(iVar1 + 0x5d0) = in_ECX;
    if (*(int *)(in_ECX + 0x420) == 0) {
      *(int *)(in_ECX + 0x420) = iVar1;
      *(int *)(iVar1 + 0x478) = iVar1;
      *(undefined4 *)(*(int *)(in_ECX + 0x420) + 0x47c) = 0;
      goto LAB_105fd960;
    }
    *(int *)(iVar1 + 0x478) = *(int *)(in_ECX + 0x420);
    *(undefined4 *)(iVar1 + 0x47c) = *(undefined4 *)(*(int *)(in_ECX + 0x420) + 0x47c);
    *(int *)(*(int *)(in_ECX + 0x420) + 0x47c) = iVar1;
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== 105fd9a0 Catch@105fd9a0

void Catch_105fd9a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105fd9b4 Catch@105fd9b4

void Catch_105fd9b4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ADoor::InitForPathFinding()");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fda60 FUN_105fda60

void FUN_105fda60(void)

{
  AVolume *pAVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822540;
  local_10 = ExceptionList;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x41c) = 0;
  do {
    if (*(int *)(*(int *)(in_ECX + 0xe4) + 0x3c) <= iVar3) {
LAB_105fdb51:
      iVar3 = *(int *)(in_ECX + 0x41c);
      if (iVar3 == 0) {
        (**(code **)(**(int **)GWarn_exref + 0x30))(1);
        ExceptionList = local_10;
        return;
      }
      *(undefined4 *)(in_ECX + 0x420) = *(undefined4 *)(iVar3 + 0x4f4);
      *(int *)(iVar3 + 0x4f4) = in_ECX;
      ExceptionList = local_10;
      return;
    }
    pAVar1 = (AVolume *)
             thunk_FUN_105fc340(*(undefined4 *)
                                 (*(int *)(*(int *)(in_ECX + 0xe4) + 0x38) + iVar3 * 4));
    if (pAVar1 != (AVolume *)0x0) {
      iVar2 = AVolume::Encompasses
                        (pAVar1,*(undefined4 *)(in_ECX + 0x1bc),*(undefined4 *)(in_ECX + 0x1c0),
                         *(undefined4 *)(in_ECX + 0x1c4));
      if (iVar2 == 0) {
        iVar2 = AVolume::Encompasses
                          (pAVar1,*(float *)(in_ECX + 0x1bc) - 0.0,*(float *)(in_ECX + 0x1c0) - 0.0,
                           *(float *)(in_ECX + 0x1c4) - *(float *)(in_ECX + 0x2f4));
        if (iVar2 == 0) goto LAB_105fdb84;
      }
      *(AVolume **)(in_ECX + 0x41c) = pAVar1;
      goto LAB_105fdb51;
    }
LAB_105fdb84:
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== 105fdbb7 Catch@105fdbb7

void Catch_105fdbb7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105fdbcb Catch@105fdbcb

void Catch_105fdbcb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALadder::InitForPathFinding()");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fdc50 FUN_105fdc50

void FUN_105fdc50(APawn *param_1,int param_2)

{
  UObject *pUVar1;
  UReachSpec *this;
  ANavigationPoint *pAVar2;
  ushort *puVar3;
  int iVar4;
  ANavigationPoint *in_ECX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822550;
  local_10 = ExceptionList;
  local_8 = 0;
  pUVar1 = *(UObject **)(in_ECX + 0xe4);
  ExceptionList = &local_10;
  FName::FName((FName *)&stack0xffffffc8,0);
  pUVar1 = UObject::GetOuter(pUVar1);
  this = (UReachSpec *)thunk_FUN_105fc260(&UReachSpec::PrivateStaticClass,pUVar1);
  local_18 = 0;
  do {
    if (*(int *)(*(int *)(in_ECX + 0xe4) + 0x3c) <= local_18) {
LAB_105fdd8c:
      ANavigationPoint::addReachSpecs(in_ECX,param_1,param_2);
      ExceptionList = local_10;
      return;
    }
    pAVar2 = (ANavigationPoint *)thunk_FUN_105fc370();
    if ((pAVar2 != (ANavigationPoint *)0x0) && (pAVar2 != in_ECX)) {
      puVar3 = FName::operator*((FName *)(*(int *)(pAVar2 + 0x41c) + 0x4c4));
      iVar4 = FString::operator==((FString *)(*(int *)(in_ECX + 0x41c) + 0x4b8),puVar3);
      if ((iVar4 != 0) &&
         (((*(uint *)(in_ECX + 0x410) & 0x2000) != 0 || ((*(uint *)(pAVar2 + 0x410) & 0x2000) != 0))
         )) {
        UReachSpec::Init(this);
        *(undefined4 *)(this + 0x40) = 0x1e;
        *(undefined4 *)(this + 0x44) = 0x1e;
        *(undefined4 *)(this + 0x48) = 0x20;
        *(ANavigationPoint **)(this + 0x38) = in_ECX;
        *(ANavigationPoint **)(this + 0x3c) = pAVar2;
        *(undefined4 *)(this + 0x34) = 100;
        thunk_FUN_105fc200();
        pUVar1 = *(UObject **)(in_ECX + 0xe4);
        FName::FName((FName *)&stack0xffffffc8,0);
        pUVar1 = UObject::GetOuter(pUVar1);
        thunk_FUN_105fc260(&UReachSpec::PrivateStaticClass,pUVar1);
        goto LAB_105fdd8c;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}


// ==== 105fddc1 Catch@105fddc1

void Catch_105fddc1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105fddd5 Catch@105fddd5

void Catch_105fddd5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AWarpZoneMarker::addReachspecs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fde60 FUN_105fde60

void FUN_105fde60(AActor *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  ANavigationPoint *in_ECX;
  float10 fVar5;
  double dVar6;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_2c [20];
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822560;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  ExceptionList = &local_10;
  ANavigationPoint::addReachSpecs(in_ECX,(APawn *)param_1,param_2);
  *(undefined4 *)(param_1 + 0x1564) = 0x461c4000;
  AActor::SetCollisionSize(param_1,9.0,23.0);
  if (0 < *(int *)(in_ECX + 0x3c0)) {
    iVar3 = (**(code **)(**(int **)(in_ECX + 0xe4) + 0xa8))
                      (param_1,*(undefined4 *)(in_ECX + 0x1bc),*(undefined4 *)(in_ECX + 0x1c0),
                       *(undefined4 *)(in_ECX + 0x1c4),0,0,0);
    if (iVar3 != 0) {
      iVar3 = *(int *)(**(int **)(in_ECX + 0x3bc) + 0x3c);
      *(int *)(in_ECX + 0x428) = iVar3;
      local_38 = *(float *)(iVar3 + 0x1bc) - *(float *)(in_ECX + 0x1bc);
      local_34 = *(float *)(iVar3 + 0x1c0) - *(float *)(in_ECX + 0x1c0);
      fVar1 = *(float *)(iVar3 + 0x1c4) - *(float *)(in_ECX + 0x1c4);
      local_30 = fVar1;
      local_18 = local_34;
      fVar5 = (float10)thunk_FUN_10370480();
      dVar6 = appSqrt((double)fVar5);
      fVar2 = *(float *)(in_ECX + 0x42c) * 2.5 * (float)dVar6;
      puVar4 = (undefined4 *)FVector::operator/((FVector *)&local_38,(float)local_2c);
      *(undefined4 *)(in_ECX + 0x41c) = *puVar4;
      *(undefined4 *)(in_ECX + 0x420) = puVar4[1];
      *(undefined4 *)(in_ECX + 0x424) = puVar4[2];
      *(float *)(in_ECX + 0x424) =
           fVar1 / fVar2 - *(float *)(*(int *)(in_ECX + 0x1b8) + 0x44c) * 0.5 * fVar2;
      goto LAB_105fe02d;
    }
  }
  (**(code **)(**(int **)GWarn_exref + 0x30))(0);
  *(undefined4 *)(in_ECX + 0x41c) = 0;
  *(undefined4 *)(in_ECX + 0x420) = 0;
  *(undefined4 *)(in_ECX + 0x424) = 0x41f00000;
LAB_105fe02d:
  *(undefined4 *)(param_1 + 0x1564) = 0x41200000;
  ExceptionList = local_10;
  return;
}


// ==== 105fe054 Catch@105fe054

void Catch_105fe054(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105fe068 Catch@105fe068

void Catch_105fe068(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AJumpPad::addReachspecs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fe110 FUN_105fe110

void FUN_105fe110(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822570;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  iVar5 = 0;
  local_8 = 0;
  if (*(int *)GIsEditor_exref == 0) {
    return;
  }
  ExceptionList = &local_10;
  FName::FName((FName *)&local_18,0);
  iVar3 = FName::operator!=((FName *)(in_ECX + 0x107),(FName *)&local_18);
  if (iVar3 != 0) {
    in_ECX[0x108] = 0;
    for (; iVar5 < *(int *)(in_ECX[0x39] + 0x3c); iVar5 = iVar5 + 1) {
      iVar3 = iVar5 * 4;
      iVar4 = *(int *)(in_ECX[0x39] + 0x38);
      if (((*(int *)(iVar3 + iVar4) != 0) &&
          (iVar4 = FName::operator==((FName *)(*(int *)(iVar4 + iVar3) + 0x10c),
                                     (FName *)(in_ECX + 0x107)), iVar4 != 0)) &&
         (iVar3 = thunk_FUN_10493fa0(*(undefined4 *)(*(int *)(in_ECX[0x39] + 0x38) + iVar3)),
         iVar3 != 0)) {
        if (in_ECX[0x108] != 0) {
          (**(code **)(**(int **)GWarn_exref + 0x30))
                    (0,in_ECX[0x108],L"Lift has same tag as another lift");
          (**(code **)(**(int **)GWarn_exref + 0x30))(0,iVar3,L"Lift has same tag as another lift");
          ExceptionList = local_10;
          return;
        }
        in_ECX[0x108] = iVar3;
        *(int **)(iVar3 + 0x5d0) = in_ECX;
        (**(code **)(*in_ECX + 0x16c))(in_ECX[0x108],0,0,0x3f800000,1);
        iVar3 = in_ECX[0x108];
        local_18 = (float)in_ECX[0x6f] - *(float *)(iVar3 + 0x1bc);
        fVar1 = *(float *)(iVar3 + 0x1c0);
        fVar2 = *(float *)(iVar3 + 0x1c4);
        in_ECX[0x10c] = (int)local_18;
        in_ECX[0x10d] = (int)((float)in_ECX[0x70] - fVar1);
        in_ECX[0x10e] = (int)((float)in_ECX[0x71] - fVar2);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105fe2df Catch@105fe2df

void Catch_105fe2df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105fe2f3 Catch@105fe2f3

void Catch_105fe2f3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALiftCenter::FindBase");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fe390 FUN_105fe390

int FUN_105fe390(void)

{
  int iVar1;
  UObject *in_ECX;
  int iVar2;
  int iVar3;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822580;
  local_10 = ExceptionList;
  iVar2 = 0;
  local_8 = 0;
  local_18 = 0;
  ExceptionList = &local_10;
  if (*(int *)GLog_exref != 0) {
    ExceptionList = &local_10;
    UObject::GetName(in_ECX);
    FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
  }
  for (; iVar2 < *(int *)(in_ECX + 0x3c0); iVar2 = iVar2 + 1) {
    for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x3c0); iVar3 = iVar3 + 1) {
      if ((iVar2 != iVar3) &&
         (iVar1 = *(int *)(in_ECX + 0x3bc), *(char *)(*(int *)(iVar1 + iVar3 * 4) + 0x50) == '\0'))
      {
        iVar1 = UReachSpec::operator<=
                          (*(UReachSpec **)(iVar1 + iVar3 * 4),*(UReachSpec **)(iVar1 + iVar2 * 4));
        if (iVar1 != 0) {
          iVar1 = *(int *)(in_ECX + 0x3bc);
          iVar1 = ANavigationPoint::FindAlternatePath
                            (*(ANavigationPoint **)(*(int *)(iVar1 + iVar3 * 4) + 0x3c),
                             *(UReachSpec **)(iVar1 + iVar2 * 4),
                             *(int *)(*(int *)(iVar1 + iVar3 * 4) + 0x34));
          if (iVar1 != 0) {
            *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x3bc) + iVar2 * 4) + 0x50) = 1;
            iVar3 = *(int *)(in_ECX + 0x3c0);
            local_18 = local_18 + 1;
          }
        }
      }
    }
  }
  ANavigationPoint::CleanUpPruned((ANavigationPoint *)in_ECX);
  ExceptionList = local_10;
  return local_18;
}


// ==== 105fe47c Catch@105fe47c

void Catch_105fe47c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105fe490 Catch@105fe490

void Catch_105fe490(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::PrunePaths");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fe500 FUN_105fe500

void FUN_105fe500(void)

{
  int *piVar1;
  int iVar2;
  ANavigationPoint *this;
  AActor *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822590;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  AActor::Destroy(in_ECX);
  if (*(int *)GIsEditor_exref != 0) {
    *(uint *)(*(int *)(in_ECX + 0xe0) + 0x55c) =
         *(uint *)(*(int *)(in_ECX + 0xe0) + 0x55c) & 0xfffffff7;
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x3c0); iVar2 = iVar2 + 1) {
      piVar1 = (int *)(*(int *)(in_ECX + 0x3bc) + iVar2 * 4);
      if (*piVar1 != 0) {
        *(undefined4 *)(*piVar1 + 0x38) = 0;
      }
    }
    iVar2 = 0;
    while( true ) {
      if (*(int *)(*(int *)(in_ECX + 0xe4) + 0x3c) <= iVar2) break;
      this = (ANavigationPoint *)
             thunk_FUN_1056b270(*(undefined4 *)
                                 (*(int *)(*(int *)(in_ECX + 0xe4) + 0x38) + iVar2 * 4));
      if (this != (ANavigationPoint *)0x0) {
        for (iVar3 = 0; iVar3 < *(int *)(this + 0x3c0); iVar3 = iVar3 + 1) {
          piVar1 = (int *)(*(int *)(this + 0x3bc) + iVar3 * 4);
          if ((*piVar1 != 0) && (*(AActor **)(*piVar1 + 0x3c) == in_ECX)) {
            *(undefined1 *)(*(int *)(*(int *)(this + 0x3bc) + iVar3 * 4) + 0x50) = 1;
            *(undefined4 *)(*(int *)(*(int *)(this + 0x3bc) + iVar3 * 4) + 0x3c) = 0;
          }
        }
        ANavigationPoint::CleanUpPruned(this);
      }
      iVar2 = iVar2 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105fe5f3 Catch@105fe5f3

void Catch_105fe5f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105fe607 Catch@105fe607

void Catch_105fe607(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ANavigationPoint::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fe670 FUN_105fe670

undefined4 FUN_105fe670(void)

{
  float *in_ECX;
  float *in_EDX;
  
  if ((((*in_EDX <= in_ECX[3]) && (*in_ECX <= in_EDX[3])) && (in_EDX[1] <= in_ECX[4])) &&
     (((in_ECX[1] <= in_EDX[4] && (in_EDX[2] <= in_ECX[5])) && (in_ECX[2] <= in_EDX[5])))) {
    return 1;
  }
  return 0;
}


// ==== 105fe6f0 FUN_105fe6f0

void FUN_105fe6f0(void)

{
  undefined4 *puVar1;
  FPlane *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = *(undefined4 *)(unaff_ESI + 0xc);
  local_1c = *(undefined4 *)(unaff_ESI + 0xc);
  local_18 = *(undefined4 *)(unaff_ESI + 0xc);
  local_24 = &local_10;
  local_4 = 0;
  local_10 = local_20;
  local_c = local_1c;
  local_8 = local_18;
  puVar1 = (undefined4 *)FPlane::operator-(unaff_ESI,(FPlane *)&local_20);
  *unaff_EDI = *puVar1;
  unaff_EDI[1] = puVar1[1];
  unaff_EDI[2] = puVar1[2];
  local_24 = *(undefined4 **)(unaff_ESI + 0xc);
  local_20 = *(undefined4 *)(unaff_ESI + 0xc);
  local_1c = *(undefined4 *)(unaff_ESI + 0xc);
  local_8 = 0;
  local_14 = local_24;
  local_10 = local_20;
  local_c = local_1c;
  puVar1 = (undefined4 *)FPlane::operator+(unaff_ESI,(FPlane *)&local_24);
  unaff_EDI[3] = *puVar1;
  unaff_EDI[4] = puVar1[1];
  unaff_EDI[5] = puVar1[2];
  *(undefined1 *)(unaff_EDI + 6) = 1;
  return;
}


// ==== 105fe7d0 FUN_105fe7d0

void FUN_105fe7d0(void)

{
  float fVar1;
  float *in_EAX;
  uint in_ECX;
  float *in_EDX;
  
  fVar1 = in_EDX[3];
  in_EAX[3] = fVar1 * 0.5;
  *in_EAX = fVar1 * 0.5 * (float)(int)(((int)in_ECX >> 1 & 2U) - 1) + *in_EDX;
  in_EAX[1] = (float)(int)((in_ECX & 2) - 1) * in_EAX[3] + in_EDX[1];
  in_EAX[2] = (float)(int)((in_ECX & 1) * 2 + -1) * in_EAX[3] + in_EDX[2];
  return;
}


// ==== 105fe850 FUN_105fe850

undefined4 FUN_105fe850(void)

{
  float *in_ECX;
  float *in_EDX;
  
  if ((((*in_EDX <= *in_ECX - in_ECX[3]) && (in_ECX[3] + *in_ECX <= in_EDX[3])) &&
      (in_EDX[1] <= in_ECX[1] - in_ECX[3])) &&
     (((in_ECX[3] + in_ECX[1] <= in_EDX[4] && (in_EDX[2] <= in_ECX[2] - in_ECX[3])) &&
      (in_ECX[3] + in_ECX[2] <= in_EDX[5])))) {
    return 1;
  }
  return 0;
}


// ==== 105fe8e0 FUN_105fe8e0

uint FUN_105fe8e0(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *in_EDX;
  float *unaff_ESI;
  undefined4 *unaff_EDI;
  
  uVar3 = 0;
  if (*unaff_ESI < in_EDX[3]) {
    if (unaff_ESI[1] < in_EDX[4]) {
      fVar1 = in_EDX[5];
      fVar2 = unaff_ESI[2];
      if (fVar2 < fVar1) {
        *unaff_EDI = 7;
      }
      uVar3 = (uint)(fVar2 < fVar1);
      if (in_EDX[2] < unaff_ESI[2]) {
        unaff_EDI[uVar3] = 6;
        uVar3 = uVar3 + 1;
      }
    }
    if (in_EDX[1] < unaff_ESI[1]) {
      if (unaff_ESI[2] < in_EDX[5]) {
        unaff_EDI[uVar3] = 5;
        uVar3 = uVar3 + 1;
      }
      if (in_EDX[2] < unaff_ESI[2]) {
        unaff_EDI[uVar3] = 4;
        uVar3 = uVar3 + 1;
      }
    }
  }
  if (*in_EDX < *unaff_ESI) {
    if (unaff_ESI[1] < in_EDX[4]) {
      if (unaff_ESI[2] < in_EDX[5]) {
        unaff_EDI[uVar3] = 3;
        uVar3 = uVar3 + 1;
      }
      if (in_EDX[2] < unaff_ESI[2]) {
        unaff_EDI[uVar3] = 2;
        uVar3 = uVar3 + 1;
      }
    }
    if (in_EDX[1] < unaff_ESI[1]) {
      if (unaff_ESI[2] < in_EDX[5]) {
        unaff_EDI[uVar3] = 1;
        uVar3 = uVar3 + 1;
      }
      if (in_EDX[2] < unaff_ESI[2]) {
        unaff_EDI[uVar3] = 0;
        uVar3 = uVar3 + 1;
      }
    }
  }
  return uVar3;
}


// ==== 105fea60 FUN_105fea60

uint FUN_105fea60(void)

{
  float *in_ECX;
  float *in_EDX;
  uint uVar1;
  
  uVar1 = 0;
  if (*in_ECX <= *in_EDX) {
    if (*in_EDX < in_ECX[3]) {
      return 0xffffffff;
    }
  }
  else {
    uVar1 = 4;
  }
  if (in_ECX[1] <= in_EDX[1]) {
    if (in_EDX[1] < in_ECX[4]) {
      return 0xffffffff;
    }
  }
  else {
    uVar1 = uVar1 | 2;
  }
  if (in_ECX[2] <= in_EDX[2]) {
    if (in_EDX[2] < in_ECX[5]) {
      return 0xffffffff;
    }
    return uVar1;
  }
  return uVar1 | 1;
}


// ==== 105feb00 FUN_105feb00

void FUN_105feb00(AActor *param_1,FCollisionOctree *param_2,FPlane *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  FPlane *pFVar4;
  FOctreeNode *in_ECX;
  int iVar5;
  int local_54 [14];
  int local_1c;
  FOctreeNode *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108225a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffa0;
  if ((*(int *)(in_ECX + 0xc) != 0) &&
     (ExceptionList = &local_10, local_18 = in_ECX, iVar3 = FUN_105fe850(), puVar2 = local_14,
     iVar3 == 0)) {
    iVar3 = FUN_105fe8e0();
    for (iVar5 = 0; local_1c = iVar5, iVar5 < iVar3; iVar5 = iVar5 + 1) {
      iVar1 = local_54[iVar5];
      pFVar4 = (FPlane *)FUN_105fe7d0();
      FOctreeNode::MultiNodeFilter
                ((FOctreeNode *)(iVar1 * 0x10 + *(int *)(local_18 + 0xc)),param_1,param_2,pFVar4);
    }
    ExceptionList = local_10;
    return;
  }
  local_14 = puVar2;
  FOctreeNode::StoreActor(in_ECX,param_1,param_2,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 105febb9 Catch@105febb9

void Catch_105febb9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105febcd Catch@105febcd

void Catch_105febcd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FOctreeNode::MultiNodeFilter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fec30 FUN_105fec30

uint FUN_105fec30(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 <= param_2) {
    if (param_2 <= param_3) goto LAB_105fec9e;
    param_1 = param_2;
    if (param_4 < param_2) {
      uVar1 = 4;
    }
  }
  else {
    if (param_1 <= param_3) {
LAB_105fec9e:
      if (param_4 < param_3) {
        uVar1 = 4;
      }
      if (param_3 <= param_5) {
        return uVar1;
      }
      return uVar1 | 2;
    }
    if (param_5 < param_1) {
      uVar1 = 2;
    }
  }
  if (param_1 <= param_6) {
    return uVar1;
  }
  return uVar1 | 1;
}


// ==== 105fecf0 FUN_105fecf0

undefined4
FUN_105fecf0(float param_1,undefined4 param_2,float param_3,undefined4 param_4,float param_5)

{
  undefined4 in_ECX;
  
  if (param_3 <= param_1) {
    if (param_3 < param_5) {
      return param_4;
    }
  }
  else if (param_1 < param_5) {
    return param_2;
  }
  return in_ECX;
}


// ==== 105fed40 FUN_105fed40

float10 FUN_105fed40(float param_1)

{
  if (0.0 < param_1) {
    return (float10)3.4028235e+38;
  }
  return (float10)-3.4028235e+38;
}


// ==== 105fed70 FUN_105fed70

void FUN_105fed70(void)

{
  return;
}


// ==== 105fedb2 Catch@105fedb2

void Catch_105fedb2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105fedc6 Catch@105fedc6

void Catch_105fedc6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCollisionOctree::CheckActorNotReferenced");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105fee00 FUN_105fee00

void FUN_105fee00(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108225c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105fee90 FUN_105fee90

undefined4 FUN_105fee90(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *in_EAX;
  float *in_ECX;
  float *unaff_ESI;
  float *unaff_EDI;
  float local_18;
  
  pfVar5 = param_1;
  param_1 = (float *)0x0;
  local_18 = 1.0;
  fVar1 = in_EAX[1] - pfVar5[1];
  fVar3 = in_EAX[2] - pfVar5[2];
  if (*unaff_EDI == 0.0) {
    if (*unaff_ESI < ABS(*in_EAX - *pfVar5)) {
      return 0;
    }
    local_18 = 1.0;
    param_1 = (float *)0x0;
  }
  else {
    fVar2 = *in_ECX * (*in_EAX - *pfVar5);
    fVar4 = -fVar2 - ABS(*in_ECX) * *unaff_ESI;
    fVar2 = ABS(*in_ECX) * *unaff_ESI - fVar2;
    if (0.0 < fVar4) {
      param_1 = (float *)fVar4;
    }
    if (fVar2 < 1.0) {
      local_18 = fVar2;
    }
    if (local_18 < (float)param_1) {
      return 0;
    }
  }
  if (unaff_EDI[1] == 0.0) {
    if (fVar1 < 0.0) {
      fVar1 = -fVar1;
    }
    if (unaff_ESI[1] < fVar1) {
      return 0;
    }
  }
  else {
    fVar2 = -(fVar1 * in_ECX[1]) - ABS(in_ECX[1]) * unaff_ESI[1];
    fVar1 = ABS(in_ECX[1]) * unaff_ESI[1] - in_ECX[1] * fVar1;
    if ((float)param_1 < fVar2) {
      param_1 = (float *)fVar2;
    }
    if (fVar1 < local_18) {
      local_18 = fVar1;
    }
    if (local_18 < (float)param_1) {
      return 0;
    }
  }
  if (unaff_EDI[2] == 0.0) {
    if (unaff_ESI[2] < ABS(fVar3)) {
      return 0;
    }
  }
  else {
    fVar1 = -(fVar3 * in_ECX[2]) - ABS(in_ECX[2]) * unaff_ESI[2];
    fVar3 = ABS(in_ECX[2]) * unaff_ESI[2] - in_ECX[2] * fVar3;
    if ((float)param_1 < fVar1) {
      param_1 = (float *)fVar1;
    }
    if (fVar3 < local_18) {
      local_18 = fVar3;
    }
    if (local_18 < (float)param_1) {
      return 0;
    }
  }
  return 1;
}


// ==== 105ff170 FUN_105ff170

undefined4 * FUN_105ff170(undefined4 *param_1)

{
  undefined4 *puVar1;
  float local_18;
  
  puVar1 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    local_18 = 3.4028235e+38;
    for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)*param_1) {
      if ((float)param_1[9] < local_18) {
        local_18 = (float)param_1[9];
        puVar1 = param_1;
      }
    }
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
  }
  return puVar1;
}


// ==== 105ff1f1 Catch@105ff1f1

void Catch_105ff1f1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105ff205 Catch@105ff205

void Catch_105ff205(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FindChildren");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ff250 FUN_105ff250

FOctreeNode * FUN_105ff250(byte param_1)

{
  FOctreeNode *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x10,*(int *)(in_ECX + -4),FOctreeNode::~FOctreeNode);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FOctreeNode::~FOctreeNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 105ff2d0 FUN_105ff2d0

void FUN_105ff2d0(void)

{
  int *in_ECX;
  FOutputDevice *this;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108225f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar1 = 0; iVar1 < in_ECX[1]; iVar1 = iVar1 + 1) {
    if (*(int *)GLog_exref != 0) {
      UObject::GetName(*(UObject **)(*in_ECX + iVar1 * 4));
      FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
    }
  }
  if (in_ECX[3] != 0) {
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      FOctreeNode::CheckIsEmpty((FOctreeNode *)(iVar1 * 0x10 + in_ECX[3]));
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105ff373 Catch@105ff373

void Catch_105ff373(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105ff387 Catch@105ff387

void Catch_105ff387(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FOctreeNode::CheckIsEmpty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ff3e0 FUN_105ff3e0

void FUN_105ff3e0(AActor *param_1)

{
  int *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822600;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar1 = 0; iVar1 < in_ECX[1]; iVar1 = iVar1 + 1) {
    UObject::GetName(*(UObject **)(*in_ECX + iVar1 * 4));
    FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
  }
  if (in_ECX[3] != 0) {
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      FOctreeNode::CheckActorNotReferenced((FOctreeNode *)(iVar1 * 0x10 + in_ECX[3]),param_1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105ff47f Catch@105ff47f

void Catch_105ff47f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105ff493 Catch@105ff493

void Catch_105ff493(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FOctreeNode::CheckActorNotReferenced");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ff4f0 FUN_105ff4f0

void FUN_105ff4f0(FCollisionOctree *param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float *param_8)

{
  float fVar1;
  AActor *pAVar2;
  AActor *this;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *in_ECX;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 local_74 [12];
  FPlane local_44 [24];
  int local_2c;
  int local_28;
  int *local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822610;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff80;
  local_8 = 0;
  if (((0.0 <= param_5) && (0.0 <= param_6)) && (0.0 <= param_7)) {
    if (((*(uint *)(param_1 + 0x5c) & 0x400) == 0) || (*(int *)(param_1 + 0x8c) == 0)) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = *(float *)(*(int *)(param_1 + 0x8c) + 0x24);
    }
    if (((param_2 <= fVar1) && (param_3 <= fVar1)) && (param_4 <= fVar1)) {
      ExceptionList = &local_10;
      local_24 = in_ECX;
      for (local_2c = 0; local_2c < in_ECX[1]; local_2c = local_2c + 1) {
        pAVar2 = *(AActor **)(*in_ECX + local_2c * 4);
        if (((((*(int *)(pAVar2 + 0x1b0) != *(int *)(param_1 + 8)) &&
              (*(int *)(pAVar2 + 0x1b0) = *(int *)(param_1 + 8), ((byte)pAVar2[0x2f8] & 0x20) != 0))
             && (this = *(AActor **)(param_1 + 100), pAVar2 != this)) &&
            ((iVar4 = AActor::IsOwnedBy(this,pAVar2), in_ECX = local_24, iVar4 == 0 &&
             (iVar4 = (**(code **)(*(int *)pAVar2 + 0x160))(this,*(undefined4 *)(param_1 + 0x5c)),
             in_ECX = local_24, iVar4 != 0)))) &&
           (iVar4 = FUN_105fee90(pAVar2 + 400), in_ECX = local_24, iVar4 != 0)) {
          thunk_FUN_104419f0(0,0);
          piVar5 = (int *)(**(code **)(*(int *)pAVar2 + 0x164))();
          iVar4 = (**(code **)(*piVar5 + 0x6c))
                            (local_74,pAVar2,*(undefined4 *)(param_1 + 0x14),
                             *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                             *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x50),
                             *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                             *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x5c));
          in_ECX = local_24;
          if (iVar4 == 0) {
            puVar6 = (undefined4 *)thunk_FUN_10522300(0x30,*(undefined4 *)(param_1 + 0x10),1,8);
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar7 = local_74;
              puVar8 = puVar6;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
            }
            *puVar6 = *(undefined4 *)(param_1 + 0xc);
            *(undefined4 **)(param_1 + 0xc) = puVar6;
            if ((*(int *)(param_1 + 0x8c) == 0) ||
               ((float)puVar6[9] < *(float *)(*(int *)(param_1 + 0x8c) + 0x24))) {
              *(undefined4 **)(param_1 + 0x8c) = puVar6;
            }
            in_ECX = local_24;
            if ((*(uint *)(param_1 + 0x5c) & 0x200) != 0) {
              ExceptionList = local_10;
              return;
            }
          }
        }
      }
      if (in_ECX[3] != 0) {
        local_20 = (param_2 + param_5) * 0.5;
        local_1c = (param_3 + param_6) * 0.5;
        local_18 = (param_4 + param_7) * 0.5;
        uVar3 = *(uint *)(param_1 + 0x9c);
        if (uVar3 != 0) {
          if ((uVar3 & 4) != 0) {
            if (*param_8 <= *(float *)(param_1 + 0x90)) {
              local_20 = -3.4028235e+38;
            }
            else {
              local_20 = 3.4028235e+38;
            }
          }
          if ((uVar3 & 2) != 0) {
            if (param_8[1] <= *(float *)(param_1 + 0x94)) {
              local_1c = -3.4028235e+38;
            }
            else {
              local_1c = 3.4028235e+38;
            }
          }
          if ((uVar3 & 1) != 0) {
            if (param_8[2] <= *(float *)(param_1 + 0x98)) {
              local_18 = -3.4028235e+38;
            }
            else {
              local_18 = 3.4028235e+38;
            }
          }
        }
        iVar4 = FUN_105fec30(param_2,param_3,param_4,local_20,local_1c,local_18);
        local_28 = iVar4;
        do {
          uVar3 = *(uint *)(param_1 + 0xa0);
          FUN_105fe7d0();
          fVar1 = param_5;
          fVar10 = param_6;
          fVar12 = param_7;
          switch(iVar4) {
          case 0:
            FOctreeNode::ActorZeroExtentLineCheck
                      ((FOctreeNode *)(uVar3 * 0x10 + local_24[3]),param_1,param_2,param_3,param_4,
                       local_20,local_1c,local_18,local_44);
            uVar11 = 2;
            uVar9 = 4;
            fVar1 = local_20;
            fVar10 = local_1c;
            fVar12 = local_18;
            break;
          case 1:
            FOctreeNode::ActorZeroExtentLineCheck
                      ((FOctreeNode *)((uVar3 ^ 1) * 0x10 + local_24[3]),param_1,param_2,param_3,
                       local_18,local_20,local_1c,param_7,local_44);
            uVar11 = 3;
            uVar9 = 5;
            fVar1 = local_20;
            fVar10 = local_1c;
            break;
          case 2:
            FOctreeNode::ActorZeroExtentLineCheck
                      ((FOctreeNode *)((uVar3 ^ 2) * 0x10 + local_24[3]),param_1,param_2,local_1c,
                       param_4,local_20,param_6,local_18,local_44);
            uVar11 = 8;
            uVar9 = 6;
            fVar1 = local_20;
            fVar12 = local_18;
            break;
          case 3:
            FOctreeNode::ActorZeroExtentLineCheck
                      ((FOctreeNode *)((uVar3 ^ 3) * 0x10 + local_24[3]),param_1,param_2,local_1c,
                       local_18,local_20,param_6,param_7,local_44);
            uVar11 = 8;
            uVar9 = 7;
            fVar1 = local_20;
            break;
          case 4:
            FOctreeNode::ActorZeroExtentLineCheck
                      ((FOctreeNode *)((uVar3 ^ 4) * 0x10 + local_24[3]),param_1,local_20,param_3,
                       param_4,param_5,local_1c,local_18,local_44);
            uVar11 = 6;
            uVar9 = 8;
            fVar10 = local_1c;
            fVar12 = local_18;
            break;
          case 5:
            FOctreeNode::ActorZeroExtentLineCheck
                      ((FOctreeNode *)((uVar3 ^ 5) * 0x10 + local_24[3]),param_1,local_20,param_3,
                       local_18,param_5,local_1c,param_7,local_44);
            uVar11 = 7;
            uVar9 = 8;
            fVar10 = local_1c;
            break;
          case 6:
            FOctreeNode::ActorZeroExtentLineCheck
                      ((FOctreeNode *)((uVar3 ^ 6) * 0x10 + local_24[3]),param_1,local_20,local_1c,
                       param_4,param_5,param_6,local_18,local_44);
            uVar11 = 8;
            uVar9 = 8;
            fVar12 = local_18;
            break;
          case 7:
            FOctreeNode::ActorZeroExtentLineCheck
                      ((FOctreeNode *)((uVar3 ^ 7) * 0x10 + local_24[3]),param_1,local_20,local_1c,
                       local_18,param_5,param_6,param_7,local_44);
            ExceptionList = local_10;
            return;
          default:
            goto switchD_105ff848_default;
          }
          iVar4 = FUN_105fecf0(fVar1,uVar9,fVar10,uVar11,fVar12);
          local_28 = iVar4;
switchD_105ff848_default:
        } while (iVar4 < 8);
      }
      ExceptionList = local_10;
      return;
    }
  }
  return;
}


// ==== 105ffb8f Catch@105ffb8f

void Catch_105ffb8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 105ffba3 Catch@105ffba3

void Catch_105ffba3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FOctreeNode::ActorZeroExtentLineCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ffda0 FUN_105ffda0

void FUN_105ffda0(FCollisionOctree *param_1)

{
  AActor *pAVar1;
  AActor *this;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_80 [4];
  int local_70 [8];
  AActor *local_50;
  float local_4c;
  float local_48;
  FPlane local_44 [4];
  float local_40;
  float local_3c;
  float local_38;
  AActor *local_2c;
  float local_28;
  float local_24;
  int *local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822620;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff74;
  local_8 = 0;
  local_1c = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  do {
    if (local_20[1] <= local_1c) {
      if (local_20[3] != 0) {
        iVar2 = FUN_105fe8e0();
        for (local_18 = 0; local_18 < iVar2; local_18 = local_18 + 1) {
          FUN_105fe7d0();
          local_50 = (AActor *)(local_38 + *(float *)(param_1 + 0x50));
          local_4c = *(float *)(param_1 + 0x54) + local_38;
          local_48 = local_38 + *(float *)(param_1 + 0x58);
          local_2c = local_50;
          local_28 = local_4c;
          local_24 = local_48;
          iVar5 = FUN_105fee90(local_44);
          if (((iVar5 != 0) &&
              (FOctreeNode::ActorNonZeroExtentLineCheck
                         ((FOctreeNode *)(local_70[local_18] * 0x10 + local_20[3]),param_1,local_44)
              , *(int *)(param_1 + 0xc) != 0)) && ((*(uint *)(param_1 + 0x5c) & 0x200) != 0)) {
            ExceptionList = local_10;
            return;
          }
        }
      }
      ExceptionList = local_10;
      return;
    }
    pAVar1 = *(AActor **)(*local_20 + local_1c * 4);
    local_2c = pAVar1;
    if ((((*(int *)(pAVar1 + 0x1b0) != *(int *)(param_1 + 8)) &&
         (*(int *)(pAVar1 + 0x1b0) = *(int *)(param_1 + 8), ((byte)pAVar1[0x2f8] & 0x40) != 0)) &&
        (this = *(AActor **)(param_1 + 100), pAVar1 != this)) &&
       ((iVar2 = AActor::IsOwnedBy(this,pAVar1), iVar2 == 0 &&
        (iVar2 = (**(code **)(*(int *)pAVar1 + 0x160))(this,*(undefined4 *)(param_1 + 0x5c)),
        iVar2 != 0)))) {
      local_40 = *(float *)(param_1 + 0x50) + *(float *)(pAVar1 + 0x19c);
      local_3c = *(float *)(pAVar1 + 0x1a0) + *(float *)(param_1 + 0x54);
      local_38 = *(float *)(pAVar1 + 0x1a4) + *(float *)(param_1 + 0x58);
      local_28 = local_38;
      local_24 = local_3c;
      iVar2 = FUN_105fee90(pAVar1 + 400);
      if (iVar2 != 0) {
        thunk_FUN_104419f0(0,0);
        pAVar1 = local_2c;
        piVar3 = (int *)(**(code **)(*(int *)local_2c + 0x164))();
        iVar2 = (**(code **)(*piVar3 + 0x6c))
                          (local_80,pAVar1,*(undefined4 *)(param_1 + 0x14),
                           *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                           *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x50),
                           *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                           *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x5c));
        if (iVar2 == 0) {
          puVar4 = (undefined4 *)thunk_FUN_10522300(0x30,*(undefined4 *)(param_1 + 0x10),1,8);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar6 = local_80;
            puVar7 = puVar4;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          *puVar4 = *(undefined4 *)(param_1 + 0xc);
          *(undefined4 **)(param_1 + 0xc) = puVar4;
          if ((*(uint *)(param_1 + 0x5c) & 0x200) != 0) {
            ExceptionList = local_10;
            return;
          }
        }
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}


// ==== 10600047 Catch@10600047

void Catch_10600047(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 1060005b Catch@1060005b

void Catch_1060005b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FOctreeNode::ActorNonZeroExtentLineCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10600130 FUN_10600130

void FUN_10600130(FCollisionOctree *param_1)

{
  AActor *this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  FPlane *pFVar4;
  int *in_ECX;
  int iVar5;
  FCheckResult *pFVar6;
  undefined4 *puVar7;
  FCheckResult local_68 [4];
  AActor *local_64;
  int local_58 [4];
  undefined4 local_48;
  int local_20;
  int *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822630;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  local_8 = 0;
  local_18 = 0;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  while (iVar5 = local_18, local_18 < local_1c[1]) {
    this = *(AActor **)(*local_1c + local_18 * 4);
    if ((((*(int *)(this + 0x1b0) != *(int *)(param_1 + 8)) &&
         (iVar2 = AActor::IsJoinedTo(this,*(AActor **)(param_1 + 100)), iVar2 == 0)) &&
        (iVar2 = (**(code **)(*(int *)this + 0x160))
                           (*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x5c)),
        iVar2 != 0)) &&
       ((iVar2 = AActor::IsEncroacher(*(AActor **)(param_1 + 100)), iVar2 == 0 ||
        (((byte)this[0x74] & 2) == 0)))) {
      *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(param_1 + 8);
      iVar2 = FUN_105fe670();
      if (iVar2 != 0) {
        thunk_FUN_104419f0(0x3f800000,0);
        iVar2 = AActor::IsOverlapping(*(AActor **)(param_1 + 100),this,local_68);
        if (iVar2 != 0) {
          local_48 = 0;
          local_64 = this;
          puVar3 = (undefined4 *)thunk_FUN_10522300(0x30,*(undefined4 *)(param_1 + 0x10),1,8);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
            local_18 = iVar5;
          }
          else {
            pFVar6 = local_68;
            puVar7 = puVar3;
            for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar7 = *(undefined4 *)pFVar6;
              pFVar6 = pFVar6 + 4;
              puVar7 = puVar7 + 1;
            }
          }
          *puVar3 = *(undefined4 *)(param_1 + 0xc);
          *(undefined4 **)(param_1 + 0xc) = puVar3;
          iVar5 = local_18;
        }
      }
    }
    local_18 = iVar5 + 1;
  }
  if (local_1c[3] != 0) {
    iVar5 = FUN_105fe8e0();
    for (iVar2 = 0; local_20 = iVar2, iVar2 < iVar5; iVar2 = iVar2 + 1) {
      iVar1 = local_58[iVar2];
      pFVar4 = (FPlane *)FUN_105fe7d0();
      FOctreeNode::ActorEncroachmentCheck
                ((FOctreeNode *)(iVar1 * 0x10 + local_1c[3]),param_1,pFVar4);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 106002a9 Catch@106002a9

void Catch_106002a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 106002bd Catch@106002bd

void Catch_106002bd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FOctreeNode::ActorEncroachmentCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10600350 FUN_10600350

void FUN_10600350(FCollisionOctree *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  FPlane *pFVar6;
  int *in_ECX;
  int **ppiVar7;
  int iVar8;
  undefined4 *puVar9;
  int *local_68 [4];
  int local_58 [14];
  int local_20;
  int *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10822640;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  local_8 = 0;
  local_18 = 0;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  do {
    iVar4 = local_18;
    if (local_1c[1] <= local_18) {
      if (local_1c[3] != 0) {
        iVar4 = FUN_105fe8e0();
        for (iVar8 = 0; local_20 = iVar8, iVar8 < iVar4; iVar8 = iVar8 + 1) {
          iVar2 = local_58[iVar8];
          pFVar6 = (FPlane *)FUN_105fe7d0();
          FOctreeNode::ActorPointCheck((FOctreeNode *)(iVar2 * 0x10 + local_1c[3]),param_1,pFVar6);
        }
      }
      ExceptionList = local_10;
      return;
    }
    piVar1 = *(int **)(*local_1c + local_18 * 4);
    iVar8 = iVar4;
    if ((((*(byte *)(piVar1 + 0xbe) & 0x40) != 0) && (piVar1[0x6c] != *(int *)(param_1 + 8))) &&
       (iVar2 = (**(code **)(*piVar1 + 0x160))(0,*(undefined4 *)(param_1 + 0x5c)), iVar8 = local_18,
       iVar2 != 0)) {
      piVar1[0x6c] = *(int *)(param_1 + 8);
      iVar2 = FUN_105fe670();
      iVar8 = iVar4;
      if (iVar2 != 0) {
        thunk_FUN_104419f0(0x3f800000,0);
        piVar3 = (int *)(**(code **)(*piVar1 + 0x164))();
        iVar4 = (**(code **)(*piVar3 + 0x68))
                          (local_68,piVar1,*(undefined4 *)(param_1 + 0x20),
                           *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                           *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                           *(undefined4 *)(param_1 + 0x58),0);
        iVar8 = local_18;
        if (iVar4 == 0) {
          if (local_68[1] != piVar1) {
            appFailAssert("TestHit.Actor == testActor",".\\UnOctree.cpp",0x4bf);
          }
          puVar5 = (undefined4 *)thunk_FUN_10522300(0x30,*(undefined4 *)(param_1 + 0x10),1,8);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            ppiVar7 = local_68;
            puVar9 = puVar5;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar9 = *ppiVar7;
              ppiVar7 = ppiVar7 + 1;
              puVar9 = puVar9 + 1;
            }
          }
          *puVar5 = *(undefined4 *)(param_1 + 0xc);
          *(undefined4 **)(param_1 + 0xc) = puVar5;
          iVar8 = local_18;
          if ((*(uint *)(param_1 + 0x5c) & 0x200) != 0) {
            ExceptionList = local_10;
            return;
          }
        }
      }
    }
    local_18 = iVar8 + 1;
  } while( true );
}


// ==== 1060051c Catch@1060051c

void Catch_1060051c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10600530 Catch@10600530

void Catch_10600530(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FOctreeNode::ActorPointCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


