// ==== 10589bf0 FUN_10589bf0

void FUN_10589bf0(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int *in_ECX;
  ushort local_420 [256];
  ushort local_220 [262];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081db60;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffbd4;
  local_8 = 0;
  if ((((in_ECX[0x6a] != 0) && (iVar1 = in_ECX[0x15], iVar1 != 0)) && (*(int *)(iVar1 + 0x3c) != 0))
     && (*(float *)(*(int *)(**(int **)(iVar1 + 0x38) + 0x3c) + 0x73c) <
         *(float *)(*(int *)(*(int *)(**(int **)(iVar1 + 0x38) + 0x3c) + 0xe0) + 0x4bc))) {
    if (*(int *)(in_ECX[0x6a] + 0xbc) == 0) {
      ExceptionList = &local_10;
      puVar2 = LocalizeProgress((ushort *)L"ConnectingText",(ushort *)L"Engine",(ushort *)0x0);
      appSprintf(local_420,puVar2);
      puVar2 = FString::operator*((FString *)(in_ECX[0x6a] + 0x94));
      puVar3 = FString::operator*((FString *)(in_ECX[0x6a] + 0x84));
      puVar4 = LocalizeProgress((ushort *)L"ConnectingURL",(ushort *)L"Engine",(ushort *)0x0);
      appSprintf(local_220,puVar4,puVar3,puVar2);
    }
    else {
      ExceptionList = &local_10;
      local_14 = &stack0xfffffbd4;
      appSprintf(local_420,(ushort *)&DAT_10853d94);
      puVar2 = FString::operator*((FString *)(in_ECX[0x6a] + 0x94));
      appSprintf(local_220,puVar2);
    }
    (**(code **)(*in_ECX + 0xac))(local_420,local_220,0x42700000);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10589d56 Catch@10589d56

void Catch_10589d56(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10589d6a Catch@10589d6a

void Catch_10589d6a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::UpdateConnectingMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10589df0 FUN_10589df0

void FUN_10589df0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = **(int **)(*(int *)(in_ECX + 0x54) + 0x38);
  if (*(int *)(iVar1 + 0x3c) != 0) {
    iVar1 = UObject::IsA(*(UObject **)(iVar1 + 0x3c),&ALineagePlayerController::PrivateStaticClass);
    if ((iVar1 != 0) &&
       ((*(uint *)(*(int *)(**(int **)(*(int *)(in_ECX + 0x54) + 0x38) + 0x3c) + 0x9b4) & 1) != 0))
    {
      *(undefined4 *)GL2PawnCR_exref = 0x40400000;
      *(undefined4 *)GL2AntiPortalCR_exref = 0x40400000;
      *(undefined4 *)GL2TerrainCR_exref = 0x41000000;
      *(undefined4 *)GL2StaticMeshCR_exref = 0x40800000;
      *(undefined4 *)GL2StaticMeshLodCR_exref = 0x40c00000;
      return;
    }
  }
  if (*(int *)GL2KeepMinFrameRate_exref != 0) {
    *(undefined4 *)GL2PawnCR_exref = 0x3f333333;
    *(undefined4 *)GL2AntiPortalCR_exref = 0x3f000000;
    *(undefined4 *)GL2TerrainCR_exref = 0x40800000;
    *(undefined4 *)GL2StaticMeshCR_exref = 0x40000000;
    *(undefined4 *)GL2StaticMeshLodCR_exref = 0x40800000;
    return;
  }
  *(undefined4 *)GL2PawnCR_exref = *(undefined4 *)GL2OriginPawnCR_exref;
  *(undefined4 *)GL2AntiPortalCR_exref = *(undefined4 *)GL2OriginPawnCR_exref;
  *(undefined4 *)GL2TerrainCR_exref = *(undefined4 *)GL2OriginTerrainCR_exref;
  *(undefined4 *)GL2StaticMeshCR_exref = *(undefined4 *)GL2OriginStaticMeshCR_exref;
  *(undefined4 *)GL2StaticMeshLodCR_exref = *(undefined4 *)GL2OriginStaticMeshLodCR_exref;
  return;
}


// ==== 10589f50 FUN_10589f50

void FUN_10589f50(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(in_ECX + 0x19c);
  iVar5 = 0;
  if (0 < *(int *)(iVar7 + 0x3c)) {
    do {
      piVar2 = *(int **)(*(int *)(iVar7 + 0x38) + iVar5 * 4);
      if (((piVar2 != (int *)0x0) && (piVar2[0x49] != 0)) && (iVar7 = 0, 0 < piVar2[0x49])) {
        do {
          piVar1 = (int *)(piVar2[0x48] + iVar7 * 8);
          iVar6 = piVar1[1];
          if ((iVar6 != 0) && (*piVar1 == param_1)) {
            if (iVar6 == 1) {
              pcVar4 = *(code **)(*piVar2 + 0xb4);
            }
            else {
              if (iVar6 != 2) goto LAB_10589fbd;
              pcVar4 = *(code **)(*piVar2 + 0xb8);
            }
            (*pcVar4)(param_2);
          }
LAB_10589fbd:
          iVar7 = iVar7 + 1;
        } while (iVar7 < piVar2[0x49]);
      }
      iVar7 = *(int *)(in_ECX + 0x19c);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar7 + 0x3c));
  }
  iVar7 = *(int *)(in_ECX + 0x19c);
  iVar5 = 0;
  if (0 < *(int *)(iVar7 + 0x11b4)) {
    do {
      iVar7 = *(int *)(*(int *)(iVar7 + 0x11b0) + iVar5 * 4);
      iVar6 = 0;
      if (0 < *(int *)(iVar7 + 0x3c)) {
        do {
          piVar2 = *(int **)(*(int *)(iVar7 + 0x38) + iVar6 * 4);
          if (((piVar2 != (int *)0x0) && (piVar2[0x49] != 0)) && (0 < piVar2[0x49])) {
            iVar7 = 0;
            do {
              iVar3 = *(int *)(piVar2[0x48] + 4 + iVar7 * 8);
              if ((iVar3 != 0) && (*(int *)(piVar2[0x48] + iVar7 * 8) == param_1)) {
                if (iVar3 == 1) {
                  pcVar4 = *(code **)(*piVar2 + 0xb4);
                }
                else {
                  if (iVar3 != 2) goto LAB_1058a05e;
                  pcVar4 = *(code **)(*piVar2 + 0xb8);
                }
                (*pcVar4)(param_2);
              }
LAB_1058a05e:
              iVar7 = iVar7 + 1;
            } while (iVar7 < piVar2[0x49]);
          }
          iVar7 = *(int *)(*(int *)(*(int *)(in_ECX + 0x19c) + 0x11b0) + iVar5 * 4);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar7 + 0x3c));
      }
      iVar7 = *(int *)(in_ECX + 0x19c);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar7 + 0x11b4));
  }
  return;
}


// ==== 1058a100 FUN_1058a100

void FUN_1058a100(FArchive *param_1)

{
  undefined4 uVar1;
  UEngine *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081db70;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UEngine::Serialize(in_ECX,param_1);
  uVar1 = thunk_FUN_10589790(param_1,in_ECX + 0x19c,in_ECX + 0x1a0,in_ECX + 0x1a4,in_ECX + 0x1a8);
  uVar1 = thunk_FUN_10589790(uVar1);
  uVar1 = thunk_FUN_10589790(uVar1);
  thunk_FUN_10587b80(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 1058a190 Catch@1058a190

void Catch_1058a190(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1058a1a4 Catch@1058a1a4

void Catch_1058a1a4(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::Serialize");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058a210 FUN_1058a210

void FUN_1058a210(int *param_1,undefined4 param_2)

{
  UObject *this;
  int iVar1;
  int in_ECX;
  FOutputDevice *this_00;
  int iVar2;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081db89;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x3c); iVar2 = iVar2 + 1) {
    local_18 = iVar2;
    FString::FString(local_2c);
    local_8 = CONCAT31(local_8._1_3_,1);
    this = *(UObject **)(*(int *)(in_ECX + 0x38) + iVar2 * 4);
    if (*(int *)GLog_exref != 0) {
      UObject::GetName(this);
      FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x2f8);
    }
    iVar1 = (**(code **)(*param_1 + 0xcc))(this,2,param_2,local_2c);
    if (iVar1 == 0) {
      FString::operator*(local_2c);
      FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref)
      ;
    }
    local_8 = local_8 & 0xffffff00;
    FString::~FString(local_2c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1058a2f0 Catch@1058a2f0

void Catch_1058a2f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1058a304 Catch@1058a304

void Catch_1058a304(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"MatchViewportsToActors");
  puVar1 = FString::operator*((FString *)(*(int *)(unaff_EBP + 8) + 0x94));
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058a390 FUN_1058a390

void FUN_1058a390(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081dba0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0x54) != 0) &&
     (ExceptionList = &local_10, *(int *)(*(int *)(in_ECX + 0x54) + 0x3c) != 0)) {
    iVar1 = 0;
    ExceptionList = &local_10;
    while( true ) {
      if (*(int *)(*(int *)(in_ECX + 0x54) + 0x3c) <= iVar1) break;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 0x38) + iVar1 * 4) + 0x128) = 0;
      iVar1 = iVar1 + 1;
    }
  }
  if (*(int *)(in_ECX + 0x58) != 0) {
    (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x58) + 0x34))
              (L"StopMusic",*(undefined4 *)GLog_exref);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1058a416 Catch@1058a416

void Catch_1058a416(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1058a42a Catch@1058a42a

void Catch_1058a42a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::NotifyLevelChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058a480 FUN_1058a480

undefined4 FUN_1058a480(int param_1,ushort *param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  ushort local_74 [8];
  ushort auStack_64 [8];
  ushort auStack_54 [16];
  undefined2 local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081dbb0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff80;
  local_8 = 0;
  local_1c = 0;
  for (iVar4 = 0x10; iVar4 < 0x20; iVar4 = iVar4 + 1) {
    local_74[iVar4] = *(ushort *)(param_1 + local_1c * 2);
    local_1c = local_1c + 1;
  }
  for (iVar4 = 8; iVar4 < 0x10; iVar4 = iVar4 + 1) {
    local_74[iVar4] = *(ushort *)(param_1 + local_1c * 2);
    local_1c = local_1c + 1;
  }
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    local_74[local_18] = *(ushort *)(param_1 + local_1c * 2);
    local_1c = local_1c + 1;
  }
  local_34 = 0;
  local_24 = 0;
  ExceptionList = &local_10;
  local_28 = in_ECX;
  while( true ) {
    iVar4 = local_24;
    if (*(int *)(local_28 + 0x20c) <= local_24) {
      ExceptionList = local_10;
      return 0;
    }
    iVar1 = *(int *)(*(int *)(local_28 + 0x208) + local_24 * 4);
    puVar2 = FString::operator*((FString *)(iVar1 + 0x34));
    iVar3 = appStricmp(local_74,puVar2);
    if (iVar3 == 0) break;
    local_24 = iVar4 + 1;
  }
  iVar4 = 0;
  while( true ) {
    if (*(int *)(iVar1 + 0x44) <= iVar4) {
      ExceptionList = local_10;
      return 0;
    }
    local_20 = iVar4;
    puVar2 = FString::operator*((FString *)(*(int *)(iVar1 + 0x40) + iVar4 * 0xc));
    iVar3 = appStricmp(param_2,puVar2);
    if (iVar3 == 0) break;
    iVar4 = iVar4 + 1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1058a5ac Catch@1058a5ac

void Catch_1058a5ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1058a5c0 Catch@1058a5c0

void Catch_1058a5c0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::ValidatePackage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058a640 FUN_1058a640

void FUN_1058a640(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar2 = -1;
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x20c); iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x208) + iVar3 * 4) + 0x50);
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
  }
  return;
}


// ==== 1058a695 Catch@1058a695

void Catch_1058a695(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1058a6a9 Catch@1058a6a9

void Catch_1058a6a9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::PackageRevisionLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058a700 FUN_1058a700

void FUN_1058a700(int *param_1,byte param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081dbd0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GIsEditor_exref != 0) {
    ExceptionList = &local_10;
    if ((((((param_2 & 8) == 0) ||
          (iVar1 = *(int *)(in_ECX + 0x54), ExceptionList = &local_10, iVar1 == 0)) ||
         (ExceptionList = &local_10, *(int *)(iVar1 + 0x3c) != 1)) ||
        ((ExceptionList = &local_10, *(int *)(in_ECX + 0x19c) == 0 ||
         (ExceptionList = &local_10,
         iVar1 = (**(code **)(*(int *)**(undefined4 **)(iVar1 + 0x38) + 0x7c))(), iVar1 != 0)))) ||
       ((iVar1 = (**(code **)(**(int **)(in_ECX + 0x19c) + 0x108))(), iVar1 != 0 ||
        ((*(byte *)(param_1 + 0x11) & 2) != 0)))) {
      if (((param_2 & 0x10) != 0) && (*(int *)(*(int *)(in_ECX + 0x54) + 0x44) == 0)) {
        (**(code **)(*param_1 + 0xa0))(0,0,0);
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(1,1,1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1058a7d2 Catch@1058a7d2

void Catch_1058a7d2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1058a7e6 Catch@1058a7e6

void Catch_1058a7e6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::MouseDelta");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058a850 FUN_1058a850

undefined4 FUN_1058a850(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  UGameEngine *in_ECX;
  int *piVar3;
  int *piVar4;
  ushort local_228 [10];
  undefined1 local_214 [500];
  int local_20;
  int local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081dbe0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdcc;
  local_8 = 0;
  DAT_10c5105c = 1;
  local_228[0] = 0x31;
  local_228[1] = 0x37;
  local_228[2] = 0x5f;
  local_228[3] = 0x32;
  local_228[4] = 0x35;
  local_228[5] = 0x2e;
  local_228[6] = 0x75;
  local_228[7] = 0x6e;
  local_228[8] = 0x72;
  local_228[9] = 0;
  ExceptionList = &local_10;
  _memset(local_214,0,0x1ec);
  piVar4 = local_1c;
  piVar3 = &local_20;
  iVar1 = FUN_107a6660();
  iVar2 = FUN_107a6660();
  UGameEngine::GetSWMapXY(in_ECX,iVar2,iVar1,piVar3,piVar4);
  appSprintf(local_228,(ushort *)L"%02d_%02d.unr",local_20,local_1c[0]);
  if (DAT_10c51054 != 0) {
    *(undefined4 *)GIsL2Seamless_exref = 1;
    DAT_10c51054 = 0;
  }
  DAT_10c51060 = param_1;
  DAT_10c51064 = param_2;
  DAT_10c51068 = param_3;
  iVar1 = *(int *)(in_ECX + 0x54);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != 0)) {
    (**(code **)(*(int *)in_ECX + 0xa0))(**(undefined4 **)(iVar1 + 0x38),local_228,0,1);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1058a993 Catch@1058a993

void Catch_1058a993(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1058a9a7 Catch@1058a9a7

void Catch_1058a9a7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::LoadSWMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058aa30 FUN_1058aa30

void FUN_1058aa30(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float *in_ECX;
  float fVar2;
  
  if (*param_2 == 0.0) {
    *param_2 = in_ECX[0xd];
  }
  fVar2 = (in_ECX[0xe] * *param_2 * 20.0) / param_3 + *param_1;
  *param_1 = fVar2;
  if (ABS(fVar2) <= in_ECX[0xc]) {
    fVar2 = appSRand();
    if (in_ECX[0xc] < ABS((fVar2 - 0.5) * in_ECX[0xc] + *param_1)) {
      *param_2 = *param_2 * -1.0;
    }
  }
  else {
    fVar1 = in_ECX[0xc];
    if (fVar2 <= 0.0) {
      fVar1 = -fVar1;
    }
    *param_1 = fVar1;
    *param_2 = *param_2 * -1.0;
  }
  if (0.0 < *in_ECX) {
    return;
  }
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}


// ==== 1058ac80 FUN_1058ac80

void FUN_1058ac80(int *param_1,float param_2,float param_3)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  fVar2 = (float10)param_3;
  fVar3 = ((float10)20.0 *
          (float10)*(float *)(in_ECX + 0x38) * (float10)*(float *)(in_ECX + 0x24) * (float10)param_2
          ) / fVar2;
  fVar4 = (float10)5461.0 / fVar2;
  if ((float10)ABS((float)(fVar2 * ((float10)(float)(((float10)*(float *)(in_ECX + 0x38) *
                                                      (float10)param_2 *
                                                      (float10)*(float *)(in_ECX + 0x20) *
                                                     (float10)20.0) / fVar2) + (float10)*param_1)))
      < fVar4) {
    iVar1 = FUN_107a6660();
    *param_1 = iVar1;
    fVar4 = extraout_ST0;
    fVar2 = extraout_ST1;
  }
  if (fVar4 <= (float10)ABS((float)(((float10)(float)fVar3 + (float10)param_1[2]) * fVar2))) {
    return;
  }
  iVar1 = FUN_107a6660();
  param_1[2] = iVar1;
  return;
}


// ==== 1058ad90 FUN_1058ad90

void FUN_1058ad90(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081dbf0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(**(int **)GFileManager_exref + 8))
                            (param_1,0,*(undefined4 *)GNull_exref);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x2c))();
    iVar3 = thunk_FUN_103ff730(uVar2);
    if (iVar3 != 0) {
      (**(code **)(*piVar1 + 4))(iVar3,uVar2);
      iVar4 = thunk_FUN_103717d0(0x118,in_ECX + 0x2f0);
      if (iVar4 != 0) {
        thunk_FUN_10588be0(in_ECX,iVar3,uVar2);
      }
      thunk_FUN_103254a0(iVar3);
    }
    (**(code **)*piVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1058ae56 Catch@1058ae56

void Catch_1058ae56(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1058ae6a Catch@1058ae6a

void Catch_1058ae6a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::StartCommandMacro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058aed0 FUN_1058aed0

void FUN_1058aed0(void)

{
  int iVar1;
  UClass *pUVar2;
  undefined4 uVar3;
  FName *this;
  int iVar4;
  FLandMark *in_ECX;
  float10 fVar5;
  undefined1 *puStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  FName *pFVar6;
  undefined1 local_20 [4];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081dc00;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  if (*(int *)(in_ECX + 4) == 0) {
    return;
  }
  if (*(int *)(in_ECX + 8) != 0) {
    ExceptionList = &local_10;
    fVar5 = (float10)thunk_FUN_10373830();
    if ((float10)30.0 <= fVar5) {
      APawn::GetCurWaitAnimName(*(APawn **)(in_ECX + 4));
      pFVar6 = (FName *)0x0;
      this = (FName *)APawn::GetCurAnimName(*(APawn **)(in_ECX + 4),(int)local_20);
      iVar4 = FName::operator==(this,pFVar6);
      if ((iVar4 != 0) && (*(float *)(*(int *)(in_ECX + 8) + 0xe8) < 29.0)) {
        FLandMark::DeleteLandMark(in_ECX,0);
      }
    }
    else if (*(int *)(in_ECX + 8) != 0) {
      local_4c = 0x1058af69;
      pUVar2 = UObject::StaticLoadClass
                         (&AEmitter::PrivateStaticClass,(UObject *)0x0,
                          (ushort *)L"Lineageeffect.e_u093_b",(ushort *)0x0,1,(UPackageMap *)0x0);
      if (pUVar2 != (UClass *)0x0) {
        iVar4 = **(int **)(DAT_10c51044 + 0x19c);
        iVar1 = *(int *)(in_ECX + 8);
        local_50 = *(undefined4 *)(iVar1 + 0x1c8);
        local_4c = *(undefined4 *)(iVar1 + 0x1cc);
        puStack_60 = (undefined1 *)&local_5c;
        local_5c = *(undefined4 *)(iVar1 + 0x1bc);
        local_58 = *(undefined4 *)(iVar1 + 0x1c0);
        local_54 = *(undefined4 *)(iVar1 + 0x1c4);
        local_1c = (undefined1 *)&puStack_60;
        FName::FName((FName *)&puStack_60,0);
        uVar3 = (**(code **)(iVar4 + 0xc0))(pUVar2);
        *(undefined4 *)(in_ECX + 0xc) = uVar3;
      }
      (**(code **)(**(int **)(DAT_10c51044 + 0x19c) + 0xac))();
      *(undefined4 *)(in_ECX + 8) = 0;
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1058b08a Catch@1058b08a

void Catch_1058b08a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1058b09e Catch@1058b09e

void Catch_1058b09e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FLandMark::Update");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058b140 FUN_1058b140

void FUN_1058b140(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 1058b170 FUN_1058b170

void FUN_1058b170(FString *param_1,FArray *param_2)

{
  FString *this;
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  puVar2 = FString::operator*(param_1);
  uVar3 = thunk_FUN_1032ff50(puVar2);
  for (iVar1 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4); iVar1 != -1;
      iVar1 = *(int *)(iVar1 + *in_ECX)) {
    iVar1 = iVar1 * 0x1c;
    iVar4 = FString::operator==((FString *)(*in_ECX + iVar1 + 4),param_1);
    if (iVar4 != 0) {
      iVar4 = FArray::Add(param_2,1,0xc);
      this = (FString *)(*(int *)param_2 + iVar4 * 0xc);
      if (this != (FString *)0x0) {
        FString::FString(this,(FString *)(iVar1 + 0x10 + *in_ECX));
      }
    }
  }
  return;
}


// ==== 1058b2c0 FUN_1058b2c0

UObject * FUN_1058b2c0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UHDREffect::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1058b2f0 FUN_1058b2f0

UObject * FUN_1058b2f0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UGlowEffect::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1058b320 FUN_1058b320

void FUN_1058b320(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UClient::PrivateStaticClass);
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


// ==== 1058b3a0 FUN_1058b3a0

void FUN_1058b3a0(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&URenderDevice::PrivateStaticClass);
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


// ==== 1058b420 FUN_1058b420

void FUN_1058b420(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UInteractionMaster::PrivateStaticClass);
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


// ==== 1058b4a0 FUN_1058b4a0

UObject * FUN_1058b4a0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UBaseGUIController::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1058b4d0 FUN_1058b4d0

void FUN_1058b4d0(UObject *param_1,ushort *param_2,ushort *param_3,ulong param_4,
                 UPackageMap *param_5)

{
  UObject::StaticLoadObject(&ULevel::PrivateStaticClass,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ==== 1058b510 FUN_1058b510

UObject * FUN_1058b510(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UViewport::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  UObject::GetName((UObject *)&UViewport::PrivateStaticClass);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  return param_1;
}


// ==== 1058b580 FUN_1058b580

UObject * FUN_1058b580(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&AInspector::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1058b5b0 FUN_1058b5b0

UObject * FUN_1058b5b0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ATerrainInfo::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1058b5e0 FUN_1058b5e0

UObject * FUN_1058b5e0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ALevelInfo::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1058b610 FUN_1058b610

void FUN_1058b610(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  if (param_1 != 0) {
    in_ECX[1] = *(int *)(param_1 + 0x48);
    thunk_FUN_10589890();
    return;
  }
  in_ECX[1] = 0;
  thunk_FUN_10589890();
  return;
}


// ==== 1058b670 FUN_1058b670

void FUN_1058b670(int param_1)

{
  APlayerController *this;
  UCameraEffect *pUVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  UHDREffect *pUVar5;
  UGlowEffect *this_00;
  APhysicsVolume *pAVar6;
  UUnderWaterEffect *this_01;
  UObject *this_02;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  float *pfVar9;
  float fVar10;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  undefined1 *puStack_154;
  int iStack_150;
  undefined1 local_114 [16];
  float local_104;
  float local_f0;
  undefined4 local_e4;
  undefined4 local_d8;
  undefined4 local_cc [3];
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_9c;
  int *local_8c;
  undefined1 *local_88;
  UClass *local_84;
  undefined1 *local_80;
  void *local_7c;
  undefined1 *puStack_78;
  undefined4 local_74;
  UClass *local_70;
  int *local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  UClass *local_58;
  int *local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  UHDREffect *local_1c;
  UGlowEffect *local_18;
  int local_14;
  UClass *local_10;
  int *local_c;
  UClass *local_8;
  
  puStack_78 = &LAB_1081dc10;
  local_7c = ExceptionList;
  local_80 = &stack0xfffffee0;
  local_74 = 0;
  if (*(int *)GIsEditor_exref == 0) {
    ExceptionList = &local_7c;
    puVar2 = &stack0xfffffee0;
    if ((((0 < *(int *)GL2PostProcessType_exref) &&
         (ExceptionList = &local_7c, puVar2 = &stack0xfffffee0,
         *(int *)GL2KeepMinFrameRate_exref == 0)) &&
        (iVar3 = *(int *)(param_1 + 4), ExceptionList = &local_7c, puVar2 = &stack0xfffffee0,
        iVar3 != 0)) &&
       ((ExceptionList = &local_7c, puVar2 = &stack0xfffffee0, *(int *)(iVar3 + 0x154) != 0 &&
        (ExceptionList = &local_7c, iVar3 = (**(code **)(**(int **)(iVar3 + 0x154) + 0xec))(),
        puVar2 = local_80, iVar3 != 0)))) {
      local_14 = 0;
      local_1c = (UHDREffect *)0x0;
      iVar3 = *(int *)(in_ECX + 0x364);
      while (iVar3 = iVar3 + -1, local_30 = iVar3, -1 < iVar3) {
        iVar4 = UObject::IsA(*(UObject **)(*(int *)(in_ECX + 0x360) + iVar3 * 4),
                             &UHDREffect::PrivateStaticClass);
        if (iVar4 != 0) {
          local_14 = 1;
          local_1c = (UHDREffect *)thunk_FUN_1058b2c0();
        }
      }
      if (local_14 == 0) {
        local_8 = (UClass *)&stack0xfffffed8;
        FName::FName((FName *)&stack0xfffffed8,0);
        UObject::GetTransientPackage();
        pUVar5 = UHDREffect::operator_new();
        if (pUVar5 == (UHDREffect *)0x0) {
          pUVar5 = (UHDREffect *)0x0;
        }
        else {
          pUVar5 = (UHDREffect *)UHDREffect::UHDREffect(pUVar5);
        }
        local_1c = pUVar5;
        FArray::Insert((FArray *)(in_ECX + 0x360),0,1,4);
        **(undefined4 **)(in_ECX + 0x360) = pUVar5;
      }
      else if (local_1c != (UHDREffect *)0x0) {
        UHDREffect::UpdateParams(local_1c);
      }
      local_14 = 0;
      local_18 = (UGlowEffect *)0x0;
      iVar3 = *(int *)(in_ECX + 0x364);
      while (iVar3 = iVar3 + -1, local_2c = iVar3, -1 < iVar3) {
        iVar4 = UObject::IsA(*(UObject **)(*(int *)(in_ECX + 0x360) + iVar3 * 4),
                             &UGlowEffect::PrivateStaticClass);
        if (iVar4 != 0) {
          local_14 = 1;
          local_18 = (UGlowEffect *)thunk_FUN_1058b2f0();
        }
      }
      if (local_14 == 0) {
        local_8 = (UClass *)&stack0xfffffed8;
        FName::FName((FName *)&stack0xfffffed8,0);
        UObject::GetTransientPackage();
        this_00 = UGlowEffect::operator_new();
        if (this_00 == (UGlowEffect *)0x0) {
          local_18 = (UGlowEffect *)0x0;
        }
        else {
          local_18 = (UGlowEffect *)UGlowEffect::UGlowEffect(this_00);
        }
        local_10 = (UClass *)local_18;
        thunk_FUN_1058b140();
        puVar2 = local_80;
      }
      else {
        puVar2 = local_80;
        if (local_18 != (UGlowEffect *)0x0) {
          UGlowEffect::UpdateGlowEffectParms(local_18);
          puVar2 = local_80;
        }
      }
    }
    local_80 = puVar2;
    if (*(int *)(in_ECX + 0x300) != 0) {
      this = *(APlayerController **)(*(int *)(param_1 + 4) + 0x3c);
      pAVar6 = ALevelInfo::L2GetPhysicsVolume(*(ALevelInfo **)(this + 0xe0));
      *(APhysicsVolume **)(this + 0x1b8) = pAVar6;
      if (*(int *)(in_ECX + 0x34c) == 0) {
        local_8 = (UClass *)&stack0xfffffec4;
        FName::FName((FName *)&stack0xfffffec4,0);
        UObject::GetTransientPackage();
        this_01 = UUnderWaterEffect::operator_new();
        if (this_01 == (UUnderWaterEffect *)0x0) {
          this_02 = (UObject *)0x0;
        }
        else {
          this_02 = (UObject *)UUnderWaterEffect::UUnderWaterEffect(this_01);
        }
        *(UObject **)(in_ECX + 0x34c) = this_02;
        if (this_02 != (UObject *)0x0) {
          UObject::SetFlags(this_02,0x4000000);
        }
      }
      pUVar1 = *(UCameraEffect **)(in_ECX + 0x34c);
      if (pUVar1 != (UCameraEffect *)0x0) {
        if ((pAVar6 == (APhysicsVolume *)0x0) || (((byte)pAVar6[0x4c0] & 1) == 0)) {
          if (*(int *)(in_ECX + 0x350) != 0) {
            APlayerController::eventRemoveCameraEffect(this,pUVar1);
            *(undefined4 *)(in_ECX + 0x350) = 0;
            UUnderWaterEffect::ClearSetting(*(UUnderWaterEffect **)(in_ECX + 0x34c));
            if (*(int *)(this + 0x840) != 0) {
              AEmitter::SetDisabled(*(AEmitter **)(this + 0x840),1,1,0);
            }
            if (*(int *)(this + 0x844) != 0) {
              (**(code **)(**(int **)(this + 0x844) + 0x328))();
              *(undefined4 *)(this + 0x844) = 0;
            }
          }
        }
        else {
          if (*(int *)(in_ECX + 0x350) == 0) {
            APlayerController::eventAddCameraEffect(this,pUVar1,1);
            *(undefined4 *)(in_ECX + 0x350) = 1;
            if (*(int *)(this + 0x840) == 0) {
              iStack_150 = 0x1058b999;
              local_10 = UObject::StaticLoadClass
                                   (&AActor::PrivateStaticClass,(UObject *)0x0,
                                    (ushort *)L"LineageEffect.e_u061_cam",(ushort *)0x0,0x2000,
                                    (UPackageMap *)0x0);
              if (local_10 != (UClass *)0x0) {
                local_c = *(int **)(this + 0xe4);
                iVar3 = *local_c;
                puStack_154 = *(undefined1 **)(this + 0x1c8);
                iStack_150 = *(int *)(this + 0x1cc);
                uStack_160 = *(undefined4 *)(this + 0x1bc);
                uStack_15c = *(undefined4 *)(this + 0x1c0);
                fStack_164 = *(float *)(this + 0x1c4);
                local_8 = (UClass *)&fStack_164;
                fStack_158 = fStack_164;
                FName::FName((FName *)&fStack_164,0);
                piVar7 = (int *)(**(code **)(iVar3 + 0xc0))(local_10);
                *(int **)(this + 0x840) = piVar7;
                if (piVar7 != (int *)0x0) {
                  local_28 = 0;
                  local_24 = 0;
                  local_20 = 0x3f800000;
                  (**(code **)(*piVar7 + 0x16c))();
                }
              }
            }
            else {
              AEmitter::SetDisabled(*(AEmitter **)(this + 0x840),0,1,0);
            }
            UUnderWaterEffect::SetPhysicsVolume(*(UUnderWaterEffect **)(in_ECX + 0x34c),pAVar6);
            UUnderWaterEffect::SetPlayerController(*(UUnderWaterEffect **)(in_ECX + 0x34c),this);
          }
          iVar3 = (**(code **)(*(int *)this + 0x340))();
          if (iVar3 != 0) {
            pfVar9 = (float *)(iVar3 + 0x1bc);
            local_8c = (int *)(*pfVar9 - *(float *)(this + 0x848));
            local_88 = (undefined1 *)(*(float *)(iVar3 + 0x1c0) - *(float *)(this + 0x84c));
            local_84 = (UClass *)(*(float *)(iVar3 + 0x1c4) - *(float *)(this + 0x850));
            local_10 = (UClass *)local_88;
            local_c = local_8c;
            local_8 = local_84;
            fVar10 = FVector::SizeSquared((FVector *)&local_8c);
            if (40000.0 < fVar10) {
              *(float *)(this + 0x848) = *pfVar9;
              *(undefined4 *)(this + 0x84c) = *(undefined4 *)(iVar3 + 0x1c0);
              *(undefined4 *)(this + 0x850) = *(undefined4 *)(iVar3 + 0x1c4);
              thunk_FUN_104419f0();
              if ((((*(int *)GL2KeepMinFrameRate_exref == 0) && (*(int *)GL2RenderDeco_exref != 0))
                  && (*(UL2NEnvManager **)(in_ECX + 0x6c) != (UL2NEnvManager *)0x0)) &&
                 ((iVar4 = UL2NEnvManager::IsDay(*(UL2NEnvManager **)(in_ECX + 0x6c)), iVar4 != 0 &&
                  (*(char *)(iVar3 + 0x34) == '\x03')))) {
                local_3c = 0;
                local_38 = 0;
                local_34 = 0;
                local_cc[0] = 0;
                local_58 = (UClass *)(*pfVar9 + 0.0);
                local_54 = (int *)(*(float *)(iVar3 + 0x1c0) + 0.0);
                local_50 = (undefined1 *)(*(float *)(iVar3 + 0x1c4) + 2000.0);
                puStack_154 = local_c0;
                fStack_158 = 4.274313e-29;
                iStack_150 = iVar3;
                local_10 = (UClass *)local_50;
                local_c = local_54;
                local_8 = local_58;
                (**(code **)(**(int **)(this + 0xe4) + 0xe4))();
                if ((local_9c < 1.0) && (0.0 < local_9c)) {
                  if (*(int *)(this + 0x844) == 0) {
                    iStack_150 = 0x1058bc0c;
                    local_8 = UObject::StaticLoadClass
                                        (&AActor::PrivateStaticClass,(UObject *)0x0,
                                         (ushort *)L"LineageEffect.e_u061_beam",(ushort *)0x0,0x2000
                                         ,(UPackageMap *)0x0);
                    if (local_8 != (UClass *)0x0) {
                      local_c = *(int **)(this + 0xe4);
                      iVar4 = *local_c;
                      piVar7 = (int *)FRotator::FRotator((FRotator *)local_cc,0,0x4000,0);
                      puStack_154 = (undefined1 *)*piVar7;
                      iStack_150 = piVar7[1];
                      uStack_160 = local_b8;
                      uStack_15c = local_b4;
                      fStack_158 = local_b0;
                      local_10 = (UClass *)&fStack_164;
                      fStack_164 = local_b0;
                      FName::FName((FName *)&fStack_164,0);
                      uVar8 = (**(code **)(iVar4 + 0xc0))(local_8);
                      *(undefined4 *)(this + 0x844) = uVar8;
                    }
                  }
                  else {
                    iStack_150 = *(int *)(this + 0x844);
                    puStack_154 = (undefined1 *)0x1058bcd7;
                    (**(code **)(**(int **)(this + 0xe4) + 0xa8))();
                  }
                  if (*(int *)(this + 0x844) == 0) {
                    ExceptionList = local_7c;
                    return;
                  }
                  thunk_FUN_104419f0();
                  local_4c = 0;
                  local_48 = 0;
                  local_44 = 0;
                  local_d8 = 0;
                  local_64 = *pfVar9 - 0.0;
                  local_60 = *(float *)(iVar3 + 0x1c0) - 0.0;
                  local_5c = *(float *)(iVar3 + 0x1c4) -
                             (200.0 - (local_b0 - *(float *)(iVar3 + 0x1c4)));
                  local_e4 = 0;
                  local_70 = (UClass *)(*pfVar9 - 0.0);
                  local_6c = (int *)(*(float *)(iVar3 + 0x1c0) - 0.0);
                  local_68 = *(float *)(iVar3 + 0x1c4) -
                             (2000.0 - (local_b0 - *(float *)(iVar3 + 0x1c4)));
                  iStack_150 = *(int *)(this + 0x844);
                  puStack_154 = local_114;
                  fStack_158 = 4.2744706e-29;
                  local_c = local_6c;
                  local_8 = local_70;
                  (**(code **)(**(int **)(this + 0xe4) + 0xe4))();
                  if ((local_f0 < 1.0) && (0.0 < local_f0)) {
                    iVar3 = thunk_FUN_104ec6c0();
                    if (iVar3 == 0) {
                      ExceptionList = local_7c;
                      return;
                    }
                    iVar4 = *(int *)(iVar3 + 0x4d8);
                    fVar10 = -(local_b0 - local_104);
                    *(float *)(iVar4 + 0x18) = fVar10;
                    *(float *)(iVar4 + 0x14) = fVar10;
                    iVar3 = *(int *)(iVar3 + 0x4d8);
                    fVar10 = (local_b0 - local_104) * 0.2;
                    *(float *)(iVar3 + 8) = fVar10;
                    *(float *)(iVar3 + 4) = fVar10;
                    ExceptionList = local_7c;
                    return;
                  }
                }
              }
              if (*(int *)(this + 0x844) != 0) {
                (**(code **)(**(int **)(this + 0x844) + 0x328))();
                *(undefined4 *)(this + 0x844) = 0;
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_7c;
  return;
}


// ==== 1058beee Catch@1058beee

void Catch_1058beee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x30) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x30,&DAT_10914c48);
}


// ==== 1058bf02 Catch@1058bf02

void Catch_1058bf02(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::RenderCameraEffect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058c150 FUN_1058c150

void FUN_1058c150(int param_1,UObject *param_2)

{
  ULinkerLoad *pUVar1;
  ushort *puVar2;
  int iVar3;
  ALevelInfo *pAVar4;
  UClass *pUVar5;
  int in_ECX;
  int iVar6;
  ulong uVar7;
  UPackageMap *pUVar8;
  FGuid *pFVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081dc20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == 0) {
    ExceptionList = &local_10;
    appFailAssert("NetDriver",".\\UnGame.cpp",0x166);
  }
  if (param_2 == (UObject *)0x0) {
    appFailAssert("InLevel",".\\UnGame.cpp",0x167);
  }
  UObject::BeginLoad();
  pUVar1 = UObject::GetLinker(param_2);
  if (pUVar1 == (ULinkerLoad *)0x0) {
    appFailAssert("InLevel->GetLinker()",".\\UnGame.cpp",0x16b);
  }
  iVar6 = **(int **)(param_1 + 0x4c);
  pUVar1 = UObject::GetLinker(param_2);
  (**(code **)(iVar6 + 0x7c))(pUVar1);
  for (iVar6 = 0; iVar6 < *(int *)(in_ECX + 0x200); iVar6 = iVar6 + 1) {
    if (*(int *)GLog_exref != 0) {
      FString::operator*((FString *)(*(int *)(in_ECX + 0x1fc) + iVar6 * 0xc));
      FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
    }
    pFVar9 = (FGuid *)0x0;
    pUVar8 = (UPackageMap *)0x0;
    uVar7 = 1;
    puVar2 = FString::operator*((FString *)(*(int *)(in_ECX + 0x1fc) + iVar6 * 0xc));
    pUVar1 = UObject::GetPackageLinker((UObject *)0x0,puVar2,uVar7,pUVar8,pFVar9);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))(pUVar1);
    if ((iVar3 == -1) && (*(int *)GLog_exref != 0)) {
      FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
    }
  }
  pAVar4 = ULevel::GetLevelInfo((ULevel *)param_2);
  if (pAVar4 == (ALevelInfo *)0x0) {
    appFailAssert("InLevel->GetLevelInfo()",".\\UnGame.cpp",0x178);
  }
  pAVar4 = ULevel::GetLevelInfo((ULevel *)param_2);
  if (*(int *)(pAVar4 + 0x614) == 0) {
    appFailAssert("InLevel->GetLevelInfo()->Game",".\\UnGame.cpp",0x179);
  }
  pAVar4 = ULevel::GetLevelInfo((ULevel *)param_2);
  pUVar5 = UObject::GetClass(*(UObject **)(pAVar4 + 0x614));
  pUVar1 = UObject::GetLinker((UObject *)pUVar5);
  if (pUVar1 == (ULinkerLoad *)0x0) {
    appFailAssert("InLevel->GetLevelInfo()->Game->GetClass()->GetLinker()",".\\UnGame.cpp",0x17a);
  }
  iVar6 = **(int **)(param_1 + 0x4c);
  pAVar4 = ULevel::GetLevelInfo((ULevel *)param_2);
  pUVar5 = UObject::GetClass(*(UObject **)(pAVar4 + 0x614));
  pUVar1 = UObject::GetLinker((UObject *)pUVar5);
  (**(code **)(iVar6 + 0x7c))(pUVar1);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x80))();
  UObject::EndLoad();
  ExceptionList = local_10;
  return;
}


// ==== 1058c367 Catch@1058c367

void Catch_1058c367(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1058c37b Catch@1058c37b

void Catch_1058c37b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::BuildServerMasterMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058c430 FUN_1058c430

void FUN_1058c430(ushort *param_1,ushort *param_2,float param_3)

{
  int iVar1;
  APlayerController *this;
  undefined1 *puVar2;
  int in_ECX;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081dc42;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x54);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != 0)) {
    this = *(APlayerController **)(**(int **)(iVar1 + 0x38) + 0x3c);
    ExceptionList = &local_10;
    puVar2 = &stack0xffffffcc;
    if ((param_3 == -1.0) &&
       (ExceptionList = &local_10, puVar2 = &stack0xffffffcc, *(int *)(this + 0x6b4) != 0)) {
      ExceptionList = &local_10;
      AHUD::eventShowUpgradeMenu(*(AHUD **)(this + 0x6b4));
      puVar2 = local_14;
    }
    local_14 = puVar2;
    FString::FString(local_28,param_1);
    local_8._0_1_ = 1;
    APlayerController::eventSetProgressMessage(this,0,local_28,0xffffffff);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_28,param_2);
    local_8._0_1_ = 2;
    APlayerController::eventSetProgressMessage(this,1,local_28,0xffffffff);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
    APlayerController::eventSetProgressTime(this,param_3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1058c53b Catch@1058c53b

void Catch_1058c53b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1058c54f Catch@1058c54f

void Catch_1058c54f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::SetProgress");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058c5c0 FUN_1058c5c0

void FUN_1058c5c0(ushort *param_1,FOutputDevice *param_2,FOutputDevice *param_3)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  FString *pFVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  FString local_34 [20];
  undefined1 *local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081dc69;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  iVar6 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  while( true ) {
    local_1c = iVar6;
    if (*(int *)(in_ECX + 0x20c) <= iVar6) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(param_2,*(ushort **)GLog_exref);
      }
      iVar6 = *(int *)(in_ECX + 0x20c);
      local_20 = &stack0xffffffbc;
      FName::FName((FName *)&stack0xffffffbc,0);
      local_20 = (undefined1 *)
                 thunk_FUN_105742d0(&UPackageCheckInfo::PrivateStaticClass,
                                    *(undefined4 *)(in_ECX + 0x214));
      piVar5 = (int *)(in_ECX + 0x208);
      thunk_FUN_10573f90();
      pFVar4 = (FString *)FString::Printf((ushort *)local_34);
      local_8._0_1_ = 1;
      iVar6 = iVar6 * 4;
      FString::operator=((FString *)(*(int *)(iVar6 + *piVar5) + 0x34),pFVar4);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_34);
      puVar2 = (ushort *)thunk_FUN_1032ad60();
      if (puVar2 != (ushort *)0x0) {
        FString::Printf(puVar2);
      }
      *(undefined4 *)(*(int *)(iVar6 + *piVar5) + 0x4c) = 1;
      *(FOutputDevice **)(*(int *)(iVar6 + *piVar5) + 0x50) = param_3;
      ExceptionList = local_10;
      return;
    }
    iVar1 = iVar6 * 4;
    puVar2 = FString::operator*((FString *)(*(int *)(*(int *)(in_ECX + 0x208) + iVar1) + 0x34));
    iVar3 = appStricmp(param_1,puVar2);
    if (iVar3 == 0) break;
    iVar6 = iVar6 + 1;
  }
  *(FOutputDevice **)(*(int *)(iVar1 + *(int *)(in_ECX + 0x208)) + 0x50) = param_3;
  for (iVar6 = 0; iVar3 = *(int *)(iVar1 + *(int *)(in_ECX + 0x208)), local_18 = iVar6,
      iVar6 < *(int *)(iVar3 + 0x44); iVar6 = iVar6 + 1) {
    puVar2 = FString::operator*((FString *)(*(int *)(iVar3 + 0x40) + iVar6 * 0xc));
    iVar3 = appStricmp((ushort *)param_2,puVar2);
    if (iVar3 == 0) {
      if (*(int *)GLog_exref == 0) {
        ExceptionList = local_10;
        return;
      }
      FOutputDevice::Logf2(param_3,*(ushort **)GLog_exref);
      ExceptionList = local_10;
      return;
    }
  }
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(param_2,*(ushort **)GLog_exref);
  }
  puVar2 = (ushort *)thunk_FUN_1032ad60();
  if (puVar2 == (ushort *)0x0) {
    ExceptionList = local_10;
    return;
  }
  FString::Printf(puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 1058c80b Catch@1058c80b

void Catch_1058c80b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1058c81f Catch@1058c81f

void Catch_1058c81f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"GameEngine::AddMD5");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058c8e0 FUN_1058c8e0

void FUN_1058c8e0(void)

{
  int *piVar1;
  ULinker *this;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  FString *pFVar6;
  int iVar7;
  int in_ECX;
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [16];
  int local_40;
  undefined1 *local_30;
  int local_2c;
  FString *local_28;
  int local_24;
  int local_20;
  int local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081dca3;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::GetLoaderList();
  local_8._0_1_ = 1;
  local_20 = 0;
  do {
    while( true ) {
      if (local_40 <= local_20) {
        local_8 = (uint)local_8._1_3_ << 8;
        thunk_FUN_10379100();
        ExceptionList = local_10;
        return;
      }
      this = (ULinker *)thunk_FUN_105896c0();
      iVar2 = (**(code **)(*(int *)this + 0x68))();
      if (iVar2 != 0) break;
LAB_1058cbab:
      local_20 = local_20 + 1;
    }
    local_1c = -1;
    for (iVar2 = 0; local_24 = iVar2, iVar7 = local_1c, iVar2 < *(int *)(in_ECX + 0x20c);
        iVar2 = iVar2 + 1) {
      puVar3 = FString::operator*((FString *)(*(int *)(*(int *)(in_ECX + 0x208) + iVar2 * 4) + 0x34)
                                 );
      puVar4 = FGuid::String((FGuid *)(this + 0x5c));
      iVar5 = appStricmp(puVar4,puVar3);
      iVar7 = iVar2;
      if (iVar5 == 0) break;
    }
    local_1c = iVar7;
    if (local_1c < 0) {
      local_1c = *(int *)(in_ECX + 0x20c);
      local_30 = &stack0xffffff80;
      FName::FName((FName *)&stack0xffffff80,0);
      local_30 = (undefined1 *)
                 thunk_FUN_105742d0(&UPackageCheckInfo::PrivateStaticClass,
                                    *(undefined4 *)(in_ECX + 0x214));
      piVar1 = (int *)(in_ECX + 0x208);
      thunk_FUN_10573f90();
      FGuid::String((FGuid *)(this + 0x5c));
      pFVar6 = (FString *)FString::Printf((ushort *)local_5c);
      local_8._0_1_ = 3;
      local_1c = local_1c * 4;
      FString::operator=((FString *)(*(int *)(*piVar1 + local_1c) + 0x34),pFVar6);
      local_8._0_1_ = 1;
      FString::~FString(local_5c);
      iVar2 = thunk_FUN_1032ad60();
      if (iVar2 != 0) {
        ULinker::QuickMD5(this);
      }
      *(undefined4 *)(*(int *)(*piVar1 + local_1c) + 0x4c) = 0;
      *(undefined4 *)(*(int *)(*piVar1 + local_1c) + 0x50) = 0;
      if (*(int *)GLog_exref != 0) {
        pFVar6 = (FString *)ULinker::QuickMD5(this);
        local_8._0_1_ = 4;
        FString::operator*(pFVar6);
        UObject::GetFullName(*(UObject **)(this + 0x34),(ushort *)0x0);
        FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
        local_8._0_1_ = 1;
        FString::~FString(local_68);
      }
      goto LAB_1058cbab;
    }
    for (iVar2 = 0; local_2c = iVar2,
        iVar2 < *(int *)(*(int *)(*(int *)(in_ECX + 0x208) + local_1c * 4) + 0x44);
        iVar2 = iVar2 + 1) {
      pFVar6 = (FString *)ULinker::QuickMD5(this);
      local_8._0_1_ = 2;
      local_28 = (FString *)
                 (*(int *)(*(int *)(*(int *)(in_ECX + 0x208) + local_1c * 4) + 0x40) + iVar2 * 0xc);
      puVar3 = FString::operator*(pFVar6);
      puVar4 = FString::operator*(local_28);
      iVar7 = appStricmp(puVar4,puVar3);
      local_15 = iVar7 == 0;
      local_8._0_1_ = 1;
      FString::~FString(local_50);
      if (local_15 != '\0') goto LAB_1058cbab;
    }
    if (local_1c < 0) goto LAB_1058cbab;
    iVar2 = thunk_FUN_1032ad60();
    if (iVar2 != 0) {
      ULinker::QuickMD5(this);
    }
    if (*(int *)GLog_exref == 0) goto LAB_1058cbab;
    UObject::GetFullName(*(UObject **)(this + 0x34),(ushort *)0x0);
    FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
    local_20 = local_20 + 1;
  } while( true );
}


// ==== 1058cbda Catch@1058cbda

void Catch_1058cbda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 1058cbee Catch@1058cbee

void Catch_1058cbee(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::ServerUpdateMD5");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058cce0 FUN_1058cce0

void FUN_1058cce0(void)

{
  undefined1 *puVar1;
  UClass *pUVar2;
  int iVar3;
  UObject *in_ECX;
  FOutputDevice *this;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this_00;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  FOutputDevice *extraout_ECX_02;
  FOutputDevice *extraout_ECX_03;
  FOutputDevice *pFVar4;
  FOutputDevice *extraout_ECX_04;
  FOutputDevice *in_EDX;
  undefined4 *unaff_FS_OFFSET;
  UObject *pUVar5;
  ushort *puVar6;
  undefined1 local_82c [2060];
  UObject *local_20;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081dcc0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xfffff7c8;
  local_8 = 0;
  puVar1 = &stack0xfffff7c8;
  if (*(int *)GLog_exref != 0) {
    puVar6 = (ushort *)0x0;
    pUVar5 = (UObject *)0x0;
    pUVar2 = UObject::GetClass(in_ECX);
    UObject::GetPathName((UObject *)pUVar2,pUVar5,puVar6);
    FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if (in_ECX == (UObject *)0x0) {
    appFailAssert("Actor",".\\UnGame.cpp",0xc52);
  }
  if ((*(uint *)(in_ECX + 0x2e4) & 0x400) != 0) {
    UObject::GetName(in_ECX);
    puVar6 = (ushort *)0x0;
    pUVar5 = (UObject *)0x0;
    pUVar2 = UObject::GetClass(in_ECX);
    UObject::GetPathName((UObject *)pUVar2,pUVar5,puVar6);
    FOutputDevice::Logf(this,(ushort *)in_EDX);
    UObject::GetClass(in_ECX);
    thunk_FUN_1058b610();
    pFVar4 = extraout_ECX;
    while (pUVar5 = local_20, local_20 != (UObject *)0x0) {
      for (local_18 = 0; local_18 < *(int *)(pUVar5 + 0x40); local_18 = local_18 + 1) {
        if ((*(uint *)(pUVar5 + 0x48) & 0x10000) != 0) {
          UObject::GetClass(in_ECX);
          iVar3 = (**(code **)(*(int *)pUVar5 + 0xa0))(local_18,local_82c);
          if (iVar3 != 0) {
            puVar6 = UObject::GetName(pUVar5);
            FOutputDevice::Log(in_EDX,puVar6);
            if (*(int *)(pUVar5 + 0x40) != 1) {
              FOutputDevice::Logf(this_00,(ushort *)in_EDX);
            }
            FOutputDevice::Log(in_EDX,(ushort *)&DAT_108bcc58);
            iVar3 = thunk_FUN_10589760();
            pFVar4 = extraout_ECX_00;
            if (iVar3 != 0) {
              iVar3 = UStruct::IsChildOf(*(UStruct **)(iVar3 + 0x78),
                                         (UStruct *)&AActor::PrivateStaticClass);
              pFVar4 = extraout_ECX_01;
              if (iVar3 != 0) {
                if (*(UObject **)
                     (in_ECX + *(int *)(pUVar5 + 0x44) * local_18 + *(int *)(pUVar5 + 0x54)) ==
                    (UObject *)0x0) {
                  pFVar4 = (FOutputDevice *)0x0;
                }
                else {
                  UObject::GetName(*(UObject **)
                                    (in_ECX + *(int *)(pUVar5 + 0x44) * local_18 +
                                              *(int *)(pUVar5 + 0x54)));
                  pFVar4 = extraout_ECX_02;
                }
                FOutputDevice::Logf(pFVar4,(ushort *)in_EDX);
                pFVar4 = extraout_ECX_03;
              }
            }
            FOutputDevice::Logf(pFVar4,(ushort *)in_EDX);
          }
        }
      }
      local_20 = *(UObject **)(pUVar5 + 0x38);
      thunk_FUN_10589890();
      pFVar4 = extraout_ECX_04;
    }
    FOutputDevice::Logf(pFVar4,(ushort *)in_EDX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 1058ceea Catch@1058ceea

void Catch_1058ceea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1058cefe Catch@1058cefe

void Catch_1058cefe(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExportTravel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058cfb0 FUN_1058cfb0

void FUN_1058cfb0(int param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081dcd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == 0) {
    ExceptionList = &local_10;
    appFailAssert("Player",".\\UnGame.cpp",0xc77);
  }
  iVar1 = thunk_FUN_1058b510(param_1);
  FStringNoInit::operator=((FStringNoInit *)(iVar1 + 0x134),param_2);
  *(undefined4 *)(iVar1 + 0x130) = param_4;
  *(undefined4 *)(iVar1 + 0x140) = param_3;
  ExceptionList = local_10;
  return;
}


// ==== 1058d03e Catch@1058d03e

void Catch_1058d03e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1058d052 Catch@1058d052

void Catch_1058d052(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::SetClientTravel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058d0a0 FUN_1058d0a0

float10 FUN_1058d0a0(void)

{
  ULevel *this;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ALevelInfo *pAVar4;
  int in_ECX;
  float10 fVar5;
  wchar_t *pwVar6;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081dcee;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((DAT_10c516b8 & 1) == 0) {
    DAT_10c516b8 = DAT_10c516b8 | 1;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    pwVar6 = L"lanplay";
    ExceptionList = &local_10;
    puVar3 = appCmdLine();
    DAT_10c516b4 = ParseParam(puVar3,(ushort *)pwVar6);
    local_8 = (uint)local_8._1_3_ << 8;
  }
  if (*(int *)(in_ECX + 0x348) != 0) {
    ExceptionList = local_10;
    return (float10)1;
  }
  this = *(ULevel **)(in_ECX + 0x19c);
  if (this != (ULevel *)0x0) {
    iVar1 = *(int *)(this + 0x70);
    if ((iVar1 != 0) && (*(int *)GIsClient_exref == 0)) {
      if (DAT_10c516b4 == 0) {
        local_18 = *(int *)(iVar1 + 0x74);
      }
      else {
        local_18 = *(int *)(iVar1 + 0x78);
      }
      if (local_18 < 10) {
        ExceptionList = local_10;
        return (float10)10;
      }
      if (0x77 < local_18) {
        local_18 = 0x78;
      }
      ExceptionList = local_10;
      return (float10)local_18;
    }
    if ((this != (ULevel *)0x0) &&
       ((*(int *)(this + 0x70) != 0 && (*(int *)(*(int *)(this + 0x70) + 0x44) != 0)))) {
      pAVar4 = ULevel::GetLevelInfo(this);
      if (((byte)pAVar4[0x55c] & 0x20) != 0) {
        fVar5 = (float10)thunk_FUN_104a4970(0x42b40000,
                                            (float)*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 
                                                  0x19c) + 0x70) + 0x44) + 0x50) * 0.015625);
        ExceptionList = local_10;
        return fVar5;
      }
    }
  }
  iVar1 = *(int *)(in_ECX + 0x19c);
  if (((iVar1 == 0) || (iVar2 = *(int *)(iVar1 + 0xbc), iVar2 == 0)) ||
     (*(int *)(iVar2 + 0x44) != 0)) {
    ExceptionList = local_10;
    return (float10)0;
  }
  if (DAT_10c516b4 == 0) {
    local_18 = *(int *)(iVar2 + 0x74);
  }
  else {
    local_18 = *(int *)(*(int *)(iVar1 + 0x70) + 0x78);
  }
  if (local_18 < 10) {
    ExceptionList = local_10;
    return (float10)10;
  }
  if (0x77 < local_18) {
    local_18 = 0x78;
  }
  ExceptionList = local_10;
  return (float10)local_18;
}


// ==== 1058d27d Catch@1058d27d

void Catch_1058d27d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1058d291 Catch@1058d291

void Catch_1058d291(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::GetMaxTickRate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058d340 FUN_1058d340

undefined4 FUN_1058d340(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int local_3c;
  int local_38;
  undefined4 local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081dd08;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::GetLoaderList();
  local_8._0_1_ = 1;
  local_18 = 0;
  if (*(int *)(in_ECX + 0x19c) != 0) {
    local_18 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x19c) + 0x70) + 0x44) + 0xc0);
  }
  local_20 = 0;
  iVar1 = 0;
  do {
    if (local_38 <= iVar1) {
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_10379100();
      ExceptionList = local_10;
      return local_20;
    }
    piVar2 = (int *)thunk_FUN_105896c0(*(undefined4 *)(local_3c + iVar1 * 4));
    iVar3 = (**(code **)(*piVar2 + 0x68))();
    if (iVar3 != 0) {
      for (iVar3 = 0; iVar3 < *(int *)(local_18 + 0x38); iVar3 = iVar3 + 1) {
        iVar4 = _AfxIsEqualGUID((_GUID *)(piVar2 + 0x17),
                                (_GUID *)(*(int *)(local_18 + 0x34) + iVar3 * 0x44 + 0x14));
        if (iVar4 != 0) goto LAB_1058d435;
      }
      if (*(int *)GLog_exref != 0) {
        UObject::GetName((UObject *)piVar2[0xd]);
        FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
      }
      local_20 = 1;
    }
LAB_1058d435:
    iVar1 = iVar1 + 1;
  } while( true );
}


// ==== 1058d460 Catch@1058d460

void Catch_1058d460(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1058d474 Catch@1058d474

void Catch_1058d474(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::CheckForRogues");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058d4f0 FUN_1058d4f0

void FUN_1058d4f0(int param_1)

{
  int *piVar1;
  int iVar2;
  ULinker *this;
  FString *this_00;
  FOutputDevice *this_01;
  int iVar3;
  int iVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  FString local_40 [12];
  int local_34;
  int local_30;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081dd31;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  iVar4 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::GetLoaderList();
  local_8 = CONCAT31(local_8._1_3_,1);
  FGuid::FGuid((FGuid *)&local_50);
  local_1c = 0;
  for (iVar3 = 0; local_20 = iVar3, iVar3 < local_30; iVar3 = iVar3 + 1) {
    piVar1 = (int *)thunk_FUN_105896c0(*(undefined4 *)(local_34 + iVar3 * 4));
    iVar2 = (**(code **)(*piVar1 + 0x68))();
    if (iVar2 != 0) {
      iVar4 = iVar4 + 1;
      local_1c = iVar4;
    }
  }
  FOutputDevice::Logf(*(FOutputDevice **)(param_1 + 0x70),
                      (ushort *)(*(int *)(*(FOutputDevice **)(param_1 + 0x70) + 0x44) + 0x34));
  for (local_18 = 0; local_18 < local_30; local_18 = local_18 + 1) {
    this = (ULinker *)thunk_FUN_105896c0();
    iVar3 = (**(code **)(*(int *)this + 0x68))();
    if (iVar3 != 0) {
      local_50 = *(undefined4 *)(this + 100);
      local_4c = *(undefined4 *)(this + 0x68);
      local_48 = *(undefined4 *)(this + 0x60);
      local_44 = *(undefined4 *)(this + 0x5c);
      this_00 = (FString *)ULinker::QuickMD5(this);
      local_8._0_1_ = 2;
      FString::operator*(this_00);
      FGuid::String((FGuid *)&local_50);
      this_01 = (FOutputDevice *)(*(int *)(*(int *)(param_1 + 0x70) + 0x44) + 0x34);
      FOutputDevice::Logf(this_01,(ushort *)this_01);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_40);
    }
  }
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_10379100();
  ExceptionList = local_10;
  return;
}


// ==== 1058d654 Catch@1058d654

void Catch_1058d654(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1058d668 Catch@1058d668

void Catch_1058d668(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::AuthorizeClient");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058d6f0 FUN_1058d6f0

void FUN_1058d6f0(undefined4 param_1)

{
  ushort *puVar1;
  ALevelInfo *pAVar2;
  UObject *pUVar3;
  int iVar4;
  int *in_ECX;
  UObject *this;
  ulong uVar5;
  FOutputDevice *pFVar6;
  ULinkerLoad *pUVar7;
  int iVar8;
  undefined4 uVar9;
  ushort local_634 [256];
  ushort local_434 [256];
  ushort local_234 [260];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081dd50;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff9c0;
  local_8 = 0;
  iVar8 = **(int **)GFileManager_exref;
  uVar9 = 0;
  ExceptionList = &local_10;
  puVar1 = FString::operator*((FString *)(*(int *)GSys_exref + 0x40));
  (**(code **)(iVar8 + 0x28))(puVar1,uVar9);
  uVar9 = param_1;
  puVar1 = FString::operator*((FString *)(*(int *)GSys_exref + 0x40));
  appSprintf(local_234,(ushort *)L"%s\\Save%i.usa",puVar1,uVar9);
  pAVar2 = ULevel::GetLevelInfo((ULevel *)in_ECX[0x67]);
  pAVar2[0x5cc] = (ALevelInfo)0x2;
  (**(code **)(*in_ECX + 0xd8))();
  iVar8 = **(int **)GWarn_exref;
  uVar9 = 1;
  puVar1 = LocalizeProgress((ushort *)L"Saving",(ushort *)L"Engine",(ushort *)0x0);
  (**(code **)(iVar8 + 0x10))(puVar1,uVar9);
  (**(code **)(*(int *)in_ECX[0x67] + 0xb4))(1);
  this = (UObject *)in_ECX[0x67];
  iVar8 = 0;
  pUVar7 = (ULinkerLoad *)0x0;
  pFVar6 = *(FOutputDevice **)GLog_exref;
  puVar1 = local_234;
  uVar5 = 0;
  pUVar3 = UObject::GetOuter(this);
  iVar8 = UObject::SavePackage(pUVar3,this,uVar5,puVar1,pFVar6,pUVar7,iVar8);
  if (iVar8 != 0) {
    iVar8 = 0;
    while( true ) {
      local_18 = iVar8;
      pAVar2 = ULevel::GetLevelInfo((ULevel *)in_ECX[0x67]);
      if (*(int *)(pAVar2 + 0x5c8) <= iVar8) break;
      iVar4 = iVar8;
      puVar1 = FString::operator*((FString *)(*(int *)GSys_exref + 0x40));
      appSprintf(local_634,(ushort *)L"%s\\Game%i.usa",puVar1,iVar4);
      uVar9 = param_1;
      iVar4 = iVar8;
      puVar1 = FString::operator*((FString *)(*(int *)GSys_exref + 0x40));
      appSprintf(local_434,(ushort *)L"%s\\Save%i%i.usa",puVar1,uVar9,iVar4);
      (**(code **)(**(int **)GFileManager_exref + 0x18))(local_634,local_434,1,0,0,0,0);
      iVar8 = iVar8 + 1;
    }
    while( true ) {
      uVar9 = param_1;
      iVar4 = iVar8;
      puVar1 = FString::operator*((FString *)(*(int *)GSys_exref + 0x40));
      appSprintf(local_234,(ushort *)L"%s\\Save%i%i.usa",puVar1,uVar9,iVar4);
      iVar8 = iVar8 + 1;
      local_18 = iVar8;
      iVar4 = (**(code **)(**(int **)GFileManager_exref + 0x10))(local_234);
      if (iVar4 < 1) break;
      (**(code **)(**(int **)GFileManager_exref + 0x14))(local_234,0,0);
    }
  }
  iVar8 = 0;
  while( true ) {
    local_1c = iVar8;
    if (*(int *)(in_ECX[0x67] + 0x3c) <= iVar8) break;
    iVar4 = thunk_FUN_10493fa0(*(undefined4 *)(*(int *)(in_ECX[0x67] + 0x38) + iVar8 * 4));
    if (iVar4 != 0) {
      local_2c = 0xbf800000;
      local_28 = 0xbf800000;
      local_24 = 0xbf800000;
      iVar4 = thunk_FUN_10493fa0(*(undefined4 *)(*(int *)(in_ECX[0x67] + 0x38) + iVar8 * 4));
      *(undefined4 *)(iVar4 + 0x598) = local_2c;
      *(undefined4 *)(iVar4 + 0x59c) = local_28;
      *(undefined4 *)(iVar4 + 0x5a0) = local_24;
    }
    iVar8 = iVar8 + 1;
  }
  (**(code **)(**(int **)GWarn_exref + 0x14))();
  pAVar2 = ULevel::GetLevelInfo((ULevel *)in_ECX[0x67]);
  pAVar2[0x5cc] = (ALevelInfo)0x0;
  FMemCache::Flush(&GCache,0,0xffffffff,0);
  ExceptionList = local_10;
  return;
}


// ==== 1058d9bd Catch@1058d9bd

void Catch_1058d9bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1058d9d1 Catch@1058d9d1

void Catch_1058d9d1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::SaveGame");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058dab0 FUN_1058dab0

void FUN_1058dab0(undefined4 param_1,FCameraSceneNode *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  int unaff_retaddr;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  HCoords local_54 [4];
  undefined4 uStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 local_34 [4];
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
  
  if (param_2 == (FCameraSceneNode *)0x0) {
    appFailAssert("Frame",".\\UnGame.cpp",0xfa9);
  }
  HCoords::HCoords(local_54,param_2);
  local_28 = 0;
  pfVar5 = &local_64;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_30 = 0;
  local_18 = 0;
  local_2c = 0;
  local_14 = 0;
  local_10 = 0;
  local_8 = 0xffffffff;
  local_c = 0x3f800000;
  local_4 = 0;
  FVector::GetNormalized((FVector *)&local_3c);
  iVar6 = *(int *)(unaff_retaddr + 0x3c);
  if (*(char *)(*(int *)(unaff_retaddr + 0x78) + 0xedc) == '\0') {
    piVar7 = *(int **)(iVar6 + 0xe4);
    local_68 = local_4c + local_40 * 0.0;
    local_64 = local_48 + local_3c * 0.0;
    local_60 = local_44 + local_38 * 0.0;
    local_74 = local_40 * 10000.0 + local_4c;
    local_70 = local_48 + local_3c * 10000.0;
    local_6c = local_44 + local_38 * 10000.0;
    if (*(int *)GL2ClientStandAlone_exref == 0) {
      pfVar5 = &local_68;
      uVar8 = 0x200bf;
      pfVar4 = &local_74;
      goto LAB_1058dd5f;
    }
    uVar9 = 0x3dcccccd;
    (**(code **)(*piVar7 + 0x10c))
              (local_34,0,&local_74,&local_68,0x200bf,0x3dcccccd,0x3dcccccd,0x3dcccccd,pfVar5);
  }
  else {
    piVar7 = *(int **)(iVar6 + 0xe4);
    pfVar5 = &local_74;
    uVar8 = 0x300bf;
    pfVar4 = &local_68;
    local_74 = local_4c + local_40 * 30.0;
    local_70 = local_48 + local_3c * 30.0;
    local_6c = local_44 + local_38 * 30.0;
    local_68 = local_40 * 10000.0 + local_4c;
    local_64 = local_48 + local_3c * 10000.0;
    local_60 = local_44 + local_38 * 10000.0;
LAB_1058dd5f:
    uVar9 = 0x3dcccccd;
    (**(code **)(*piVar7 + 0x10c))
              (local_34,iVar6,pfVar4,pfVar5,uVar8,0x3dcccccd,0x3dcccccd,0x3dcccccd);
  }
  *(float *)(in_ECX + 0x228) = local_4c;
  *(float *)(in_ECX + 0x22c) = local_48;
  *(float *)(in_ECX + 0x230) = local_44;
  *(float *)(in_ECX + 0x234) = local_40;
  *(float *)(in_ECX + 0x238) = local_3c;
  *(float *)(in_ECX + 0x23c) = local_38;
  *(float *)(in_ECX + 0x240) = local_38 * local_44 + local_40 * local_4c + local_3c * local_48;
  piVar7 = *(int **)(in_ECX + 0x244);
  if ((piVar7 != (int *)0x0) && (0 < piVar7[0x2e])) {
    (**(code **)(*piVar7 + 0x128))(0,1,0);
  }
  if (((local_4c == 0.0) && (local_48 == 0.0)) && (local_44 == 0.0)) {
    fVar10 = -local_60;
    fVar11 = -fStack_5c;
    FVector::GetNormalized((FVector *)&local_60);
    fVar12 = fVar11;
    pfVar5 = (float *)FVector::GetNormalized((FVector *)&local_64);
    fVar1 = *pfVar5;
    fVar2 = pfVar5[1];
    fVar3 = pfVar5[2];
    *(undefined4 *)(in_ECX + 0x234) = uVar9;
    *(float *)(in_ECX + 0x238) = fVar10;
    *(float *)(in_ECX + 0x23c) = fVar11;
    *(undefined4 *)(in_ECX + 0x244) = 0;
    *(float *)(in_ECX + 0x228) = fVar1 * 10000.0 + local_74;
    *(float *)(in_ECX + 0x240) = fVar12;
    *(float *)(in_ECX + 0x22c) = fVar2 * 10000.0 + local_70;
    *(float *)(in_ECX + 0x230) = fVar3 * 10000.0 + local_6c;
  }
  else {
    if (*(int **)(in_ECX + 0x68) != (int *)0x0) {
      iVar6 = **(int **)(in_ECX + 0x68);
      uVar8 = FUN_107a6660();
      uVar8 = FUN_107a6660(uVar8);
      iVar6 = (**(code **)(iVar6 + 0x7c))(uVar8);
      if (iVar6 != 0) {
        *(undefined4 *)(in_ECX + 0x244) = 0;
        goto LAB_1058dfb1;
      }
    }
    *(undefined4 *)(in_ECX + 0x244) = uStack_50;
  }
LAB_1058dfb1:
  piVar7 = *(int **)(in_ECX + 0x244);
  if ((piVar7 != (int *)0x0) && (0 < piVar7[0x2e])) {
    (**(code **)(*piVar7 + 0x128))(10,1,0);
  }
  return;
}


// ==== 1058e130 FUN_1058e130

void FUN_1058e130(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  FString *this;
  ushort *puVar4;
  int *in_ECX;
  FOutputDevice *this_00;
  int iVar5;
  int iVar6;
  FOutputDevice *pFVar7;
  char local_140 [256];
  FString local_40 [16];
  FString local_30 [12];
  undefined1 *local_24;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081dd72;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffeb4;
  local_8 = 0;
  iVar6 = 0;
  local_1c = 0;
  local_18 = 0;
  ExceptionList = &local_10;
  iVar5 = local_18;
  while( true ) {
    if ((in_ECX[1] == 0) || (iVar2 = in_ECX[4], in_ECX[3] <= iVar2)) goto LAB_1058e1b7;
    cVar1 = *(char *)(iVar2 + in_ECX[1]);
    in_ECX[4] = iVar2 + 1;
    if (cVar1 == '{') break;
    if (cVar1 == ';') {
      local_18 = 1;
      iVar5 = local_18;
    }
    else if ((cVar1 == '\n') || (cVar1 == '\r')) {
      if (0 < iVar6) {
LAB_1058e1b4:
        local_18 = 0;
LAB_1058e1b7:
        if (0 < iVar6) {
          local_140[iVar6] = '\0';
          if (*(int *)(*in_ECX + 0x68) == 0) {
            this = (FString *)FString::Printf((ushort *)local_40,&DAT_10851d80);
            local_8._0_1_ = 1;
            puVar4 = FString::operator*(this);
            FString::FString(local_30,puVar4);
            local_8._0_1_ = 2;
            piVar3 = *(int **)(*(int *)(*in_ECX + 0x54) + 0x38);
            local_24 = &stack0xfffffeb0;
            FName::FName((FName *)&stack0xfffffeb0,0);
            APlayerController::eventClientMessage(*(APlayerController **)(*piVar3 + 0x3c),local_30);
            local_8._0_1_ = 1;
            FString::~FString(local_30);
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_40);
            if (*(int *)GLog_exref == 0) {
              ExceptionList = local_10;
              return;
            }
            appFromAnsi(local_140,(ushort *)0x0);
            pFVar7 = *(FOutputDevice **)GLog_exref;
            this_00 = (FOutputDevice *)GLog_exref;
          }
          else {
            iVar5 = **(int **)(*in_ECX + 0x68);
            appFromAnsi(local_140,(ushort *)0x0);
            (**(code **)(iVar5 + 0x738))();
            if (*(int *)GLog_exref == 0) {
              ExceptionList = local_10;
              return;
            }
            appFromAnsi(local_140,(ushort *)0x0);
            pFVar7 = *(FOutputDevice **)GLog_exref;
            this_00 = pFVar7;
          }
          FOutputDevice::Logf2(this_00,(ushort *)pFVar7);
        }
        ExceptionList = local_10;
        return;
      }
    }
    else if (iVar5 == 0) {
      local_140[iVar6] = cVar1;
      iVar6 = iVar6 + 1;
      local_1c = iVar6;
    }
  }
  thunk_FUN_10588ea0();
  goto LAB_1058e1b4;
}


// ==== 1058e2d0 Catch@1058e2d0

void Catch_1058e2d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1058e2e4 Catch@1058e2e4

void Catch_1058e2e4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCommandMacro::RunCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058e380 FUN_1058e380

void FUN_1058e380(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081dd90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x2f4); iVar2 = iVar2 + 1) {
    iVar1 = thunk_FUN_10588fa0(param_1);
    if (iVar1 == 0) {
      thunk_FUN_1058e130();
      iVar1 = thunk_FUN_10589080();
      if (iVar1 != 0) {
        thunk_FUN_10388080(iVar2,1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1058e41a Catch@1058e41a

void Catch_1058e41a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1058e42e Catch@1058e42e

void Catch_1058e42e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::TickCommandMacro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058e480 FUN_1058e480

void FUN_1058e480(int param_1,int param_2)

{
  undefined4 uVar1;
  UObject *this;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar1 = *(undefined4 *)GIsL2WaterEffect_exref;
  *(undefined4 *)GIsL2WaterEffect_exref = 0;
  if (param_1 == 0) {
LAB_1058e5b6:
    *(undefined4 *)GIsL2WaterEffect_exref = uVar1;
    return;
  }
  if (param_2 != 1) {
LAB_1058e5c4:
    *(undefined4 *)GIsL2WaterEffect_exref = uVar1;
    return;
  }
  iVar3 = **(int **)(*(int *)(in_ECX + 0x54) + 0x38);
  uVar6 = *(undefined4 *)(in_ECX + 800);
  uVar7 = *(undefined4 *)(in_ECX + 0x324);
  uVar11 = 0;
  uVar10 = 1;
  uVar9 = 0;
  uVar8 = *(undefined4 *)(in_ECX + 0x328);
  uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x3c) + 0x3bc);
  UGameEngine::L2_Teleport();
  if ((*(int *)(in_ECX + 0x308) == 0) && (*(int *)(in_ECX + 0x310) == 0)) {
    *(undefined4 *)(in_ECX + 0x310) = 1;
    *(undefined4 *)(in_ECX + 0x304) = 0x447a0000;
    *(undefined4 *)(in_ECX + 0x318) = 0;
    *(undefined4 *)(in_ECX + 0x30c) = 0;
  }
  (**(code **)(**(int **)(in_ECX + 0x60) + 0xf0))(uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
  if (*(int *)(*(int *)(*(int *)(iVar3 + 0x3c) + 0x3bc) + 0x14d8) != 0) {
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar3 + 0x3c) + 0x3bc) + 0x14d8) + 0x328))();
    this = *(UObject **)(*(int *)(*(int *)(iVar3 + 0x3c) + 0x3bc) + 0x14d8);
    if (this != (UObject *)0x0) {
      iVar3 = UObject::IsA(this,&ALineagePlayerController::PrivateStaticClass);
      if (iVar3 != 0) {
        uVar2 = *(uint *)(in_ECX + 0x31c);
        uVar4 = (**(code **)(*(int *)this + 0x330))();
        if (uVar4 != uVar2) {
          *(uint *)(this + 0xa48) = *(uint *)(this + 0xa48) ^ (*(uint *)(this + 0xa48) ^ uVar2) & 1;
        }
        if (this[0x435] != (UObject)0x4) goto LAB_1058e5c4;
        this[0x435] = (UObject)0x0;
      }
      goto LAB_1058e5b6;
    }
  }
  *(undefined4 *)GIsL2WaterEffect_exref = uVar1;
  return;
}


// ==== 1058e640 FUN_1058e640

void FUN_1058e640(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 float param_5,float param_6,undefined4 *param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  UClass *pUVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined4 uStack_b4;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081dda0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  local_8 = 0;
  if (*(int *)(in_ECX + 4) == 0) {
    return;
  }
  if (param_7 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    local_14 = &stack0xffffff88;
    iVar2 = thunk_FUN_1058b5b0();
    param_7 = (undefined4 *)thunk_FUN_1045c8b0();
    iVar3 = thunk_FUN_1058b5e0();
    if (((iVar2 == 0) && (param_7 == (undefined4 *)0x0)) && (iVar3 == 0)) {
      ExceptionList = local_10;
      return;
    }
    local_54 = 0.0;
    param_7 = (undefined4 *)
              (*(float *)(DAT_10c51044 + 0x234) * 0.0 + *(float *)(DAT_10c51044 + 0x238) * 0.0 +
              *(float *)(DAT_10c51044 + 0x23c));
    if ((0.5 < (float)param_7) && ((float)param_7 <= 1.0)) {
      if (*(int *)(in_ECX + 8) != 0) {
        (**(code **)(**(int **)(DAT_10c51044 + 0x19c) + 0xac))();
        *(undefined4 *)(in_ECX + 8) = 0;
      }
      FRotator::FRotator((FRotator *)&local_3c,0,0,0);
      local_2c = local_38;
      local_28 = local_34;
      local_30 = 0;
      FRotator::Vector((FRotator *)&local_30);
      fVar1 = param_6 * local_4c + local_50 * param_5 + local_54 * param_4;
      param_7 = (undefined4 *)(local_54 - fVar1 * param_4);
      local_44 = local_50 - fVar1 * param_5;
      local_40 = local_4c - fVar1 * param_6;
      local_48 = (float)param_7;
      local_1c = local_40;
      local_18 = local_44;
      puVar4 = (undefined4 *)FVector::Rotation((FVector *)&local_48);
      local_3c = *puVar4;
      local_2c = puVar4[1];
      local_28 = puVar4[2];
      param_7 = (undefined4 *)(param_6 * local_44 - param_5 * local_40);
      local_5c = param_4 * local_40 - local_48 * param_6;
      local_58 = local_48 * param_5 - param_4 * local_44;
      local_60 = (float)param_7;
      local_30 = local_3c;
      local_1c = local_5c;
      local_18 = local_58;
      puVar4 = (undefined4 *)FVector::Rotation((FVector *)&local_60);
      local_34 = *puVar4;
      local_2c = puVar4[1];
      local_28 = puVar4[2];
      local_a0 = 0x1058e888;
      local_30 = local_34;
      pUVar5 = UObject::StaticLoadClass
                         (&AEmitter::PrivateStaticClass,(UObject *)0x0,
                          (ushort *)L"Lineageeffect.e_u093_a",(ushort *)0x0,1,(UPackageMap *)0x0);
      if (pUVar5 != (UClass *)0x0) {
        iVar2 = **(int **)(DAT_10c51044 + 0x19c);
        local_a4 = local_3c;
        local_a0 = local_38;
        uStack_ac = param_2;
        local_a8 = param_3;
        param_7 = &uStack_b4;
        uStack_b4 = param_2;
        FName::FName((FName *)&uStack_b4,0);
        uVar6 = (**(code **)(iVar2 + 0xc0))(pUVar5);
        *(undefined4 *)(in_ECX + 8) = uVar6;
        ExceptionList = local_10;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_10;
    pUVar5 = UObject::StaticLoadClass
                       (&AEmitter::PrivateStaticClass,(UObject *)0x0,
                        (ushort *)L"Lineageeffect.e_u093_b",(ushort *)0x0,1,(UPackageMap *)0x0);
    if (pUVar5 != (UClass *)0x0) {
      iVar2 = **(int **)(DAT_10c51044 + 0x19c);
      FVector::Rotation((FVector *)&param_4);
      local_a8 = param_1;
      local_a4 = param_2;
      local_a0 = param_3;
      param_7 = &uStack_ac;
      uStack_ac = param_3;
      uStack_b4 = 0x1058e998;
      FName::FName((FName *)&uStack_ac,0);
      uStack_b4 = 0x1058e9ad;
      uVar6 = (**(code **)(iVar2 + 0xc0))();
      *(undefined4 *)(in_ECX + 0xc) = uVar6;
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1058e9e8 Catch@1058e9e8

void Catch_1058e9e8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1058e9fc Catch@1058e9fc

void Catch_1058e9fc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FLandMark::AddLandMark");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058eb10 FUN_1058eb10

int FUN_1058eb10(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[1];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*in_ECX + iVar2 * 4) == *param_1) {
        thunk_FUN_10385a30(iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  return iVar1 - in_ECX[1];
}


// ==== 1058eb60 FUN_1058eb60

void FUN_1058eb60(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &UModifier::PrivateStaticClass;
  in_ECX[1] = 0xffffffff;
  thunk_FUN_103737b0();
  return;
}


// ==== 1058eb80 FUN_1058eb80

void FUN_1058eb80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &UCombiner::PrivateStaticClass;
  in_ECX[1] = 0xffffffff;
  thunk_FUN_103737b0();
  return;
}


// ==== 1058eba0 FUN_1058eba0

void FUN_1058eba0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &UShader::PrivateStaticClass;
  in_ECX[1] = 0xffffffff;
  thunk_FUN_103737b0();
  return;
}


// ==== 1058ebc0 FUN_1058ebc0

undefined4 * FUN_1058ebc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,0x1c);
  if (*(int *)in_ECX + iVar1 * 0x1c == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_10589610(param_1,param_2);
  }
  puVar3 = FString::operator*((FString *)(puVar2 + 1));
  uVar4 = thunk_FUN_1032ff50(puVar3);
  uVar4 = *(int *)(in_ECX + 0x10) - 1U & uVar4;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar4 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar4 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_10387760();
  }
  return puVar2 + 4;
}


// ==== 1058ec70 FUN_1058ec70

void FUN_1058ec70(void)

{
  int *piVar1;
  undefined1 *puVar2;
  UEngine *in_ECX;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this;
  int iVar3;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ddb0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  this = (FOutputDevice *)in_ECX;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffd0;
  if (*(int *)(in_ECX + 0x1a8) != 0) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)in_ECX + 0xd4))();
    this = extraout_ECX;
    puVar2 = local_14;
  }
  local_14 = puVar2;
  *(undefined4 *)(in_ECX + 0x19c) = 0;
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x2fb);
  }
  thunk_FUN_106768c0(*(undefined4 *)(in_ECX + 0x5c));
  FL2GameData::Clear(&GL2GameData);
  FNActorResourceLoader::ClearActorResourceArray(&GL2ActorResourceLoader);
  if (*(int **)(in_ECX + 0x34c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x34c) + 0xc))(1);
    *(undefined4 *)(in_ECX + 0x34c) = 0;
  }
  iVar3 = *(int *)(in_ECX + 0x364);
  if (iVar3 != 0) {
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x360) + iVar3 * 4);
      local_18 = piVar1;
      if (piVar1 != (int *)0x0) {
        thunk_FUN_1058eb10(&local_18);
        (**(code **)(*piVar1 + 0xc))(1);
      }
    }
  }
  if (*(undefined4 **)(in_ECX + 0x2fc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x2fc))(1);
  }
  UEngine::Destroy(in_ECX);
  DAT_10c51044 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1058ed80 Catch@1058ed80

void Catch_1058ed80(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1058ed94 Catch@1058ed94

void Catch_1058ed94(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1058ee10 FUN_1058ee10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058ee10(UViewport *param_1,int param_2,float param_3,FMatrix *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  float fVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  float *pfVar10;
  UGameEngine *in_ECX;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FMatrix *pFVar11;
  float *pfVar12;
  int iVar13;
  FMatrix *pFVar14;
  UGameEngine *this_01;
  double dVar15;
  float fStack_4fc;
  wchar_t *pwVar16;
  FPlayerSceneNode local_490 [500];
  FMatrix local_29c [68];
  float local_258 [10];
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  float local_220;
  undefined4 local_21c;
  float local_218 [6];
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  float local_1e0;
  undefined4 local_1dc;
  float local_1d8 [10];
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  undefined4 local_19c;
  float local_198 [5];
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  float local_160;
  undefined4 local_15c;
  float local_158 [5];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
  undefined4 local_11c;
  float local_118 [5];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8 [10];
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  float local_88;
  int local_84;
  int local_80;
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  uint local_70;
  int local_6c;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined8 local_50;
  int local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38;
  UGameEngine *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puStack_74 = &LAB_1081de9f;
  local_78 = ExceptionList;
  local_7c = &stack0xfffffb64;
  local_70 = 0;
  if (*(int *)GIsRunning_exref == 0) {
    return;
  }
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10ddd920 * 4);
  uVar3 = rdtsc();
  ExceptionList = &local_78;
  *piVar1 = *piVar1 - (int)uVar3;
  local_40 = *(int **)(param_1 + 0x3c);
  local_20 = (float)local_40[0x6f];
  local_1c = (float)local_40[0x70];
  local_18 = (float)local_40[0x71];
  local_2c = local_40[0x72];
  local_28 = local_40[0x73];
  local_24 = local_40[0x74];
  local_34 = in_ECX;
  (**(code **)(*local_40 + 0x36c))();
  UL2NEnvManager::SetOrigin(*(UL2NEnvManager **)(in_ECX + 0x6c));
  if (*(int *)(*(int *)(param_1 + 0x3c) + 0xe4) != *(int *)(in_ECX + 0x19c)) {
    ExceptionList = local_78;
    return;
  }
  (**(code **)(*(int *)in_ECX + 0xdc))();
  if (*(int *)(*(int *)(param_1 + 0x7c) + 0x7c) == 0) {
LAB_1058ef41:
    local_30 = 0;
  }
  else {
    pwVar16 = L"ut2-intro.mylevel";
    puVar5 = UObject::GetPathName
                       (*(UObject **)(*(int *)(param_1 + 0x3c) + 0xe4),(UObject *)0x0,(ushort *)0x0)
    ;
    iVar6 = appStricmp(puVar5,(ushort *)pwVar16);
    if (iVar6 != 0) goto LAB_1058ef41;
    local_30 = 1;
  }
  uVar2 = *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x5cc);
  if (*(int *)(*(int *)(param_1 + 0x7c) + 0x5c) != 0) {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x5cc) = 4;
  }
  if (((*(int *)GIsL2Seamless_exref == 0) || (*(int *)GIsEditor_exref != 0)) ||
     (*(int *)GIsL2NetLogin_exref == 0)) {
    if (((local_30 != 0) || (*(int *)(param_1 + 0x164) == 0)) ||
       (*(int *)(*(int *)(param_1 + 0x7c) + 0x5c) != 0)) goto LAB_1058efff;
    (**(code **)(*(int *)param_1 + 0x74))();
  }
  else {
    if (((local_30 != 0) || (*(int *)(param_1 + 0x164) == 0)) ||
       (*(int *)(*(int *)(param_1 + 0x7c) + 0x5c) != 0)) goto LAB_1058efff;
    if ((*(int *)(*(int *)(**(int **)(*(int *)(in_ECX + 0x54) + 0x38) + 0x3c) + 0x3bc) == 0) ||
       (DAT_10c516c4 == 0)) {
      if (*(int *)(in_ECX + 0x37c) != 0) {
        (**(code **)(*(int *)param_1 + 0x74))();
      }
      goto LAB_1058efff;
    }
    (**(code **)(*(int *)param_1 + 0x74))();
  }
  *(undefined4 *)(param_1 + 0x168) = 1;
LAB_1058efff:
  DAT_10c516c4 = *(int *)(*(int *)(**(int **)(*(int *)(local_34 + 0x54) + 0x38) + 0x3c) + 0x3bc);
  appFloor(*(float *)(param_1 + 0x48));
  uVar7 = thunk_FUN_10370460();
  *(undefined4 *)(param_1 + 0x170) = uVar7;
  appFloor(*(float *)(param_1 + 0x4c));
  uVar7 = thunk_FUN_10370460();
  *(undefined4 *)(param_1 + 0x174) = uVar7;
  appFloor(*(float *)(param_1 + 0x48));
  iVar6 = thunk_FUN_10370460();
  *(int *)(param_1 + 0x178) = iVar6 - *(int *)(param_1 + 0x170);
  appFloor(*(float *)(param_1 + 0x4c));
  iVar6 = thunk_FUN_10370460();
  *(int *)(param_1 + 0x17c) = iVar6 - *(int *)(param_1 + 0x174);
  if (*(int *)(*(int *)(param_1 + 0x7c) + 0x5c) == 0) {
    iVar6 = (**(code **)(*(int *)param_1 + 0x6c))();
    if (iVar6 != 0) {
      if ((*(uint *)(*(int *)(param_1 + 0x3c) + 0x564) & 0x800000) != 0) {
        pFVar11 = (FMatrix *)(*(int *)(param_1 + 0x3c) + 0x618);
        param_3 = -local_20;
        local_88 = -local_1c;
        local_8 = -local_18;
        local_50 = (double)CONCAT44(local_8,(undefined4)local_50);
        param_4 = pFVar11;
        local_10 = param_3;
        local_c = local_88;
        puVar9 = (undefined4 *)thunk_FUN_10326fb0();
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pFVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          pFVar11 = pFVar11 + 4;
        }
        local_70 = local_70 & 0xffffff00;
        thunk_FUN_103284c0();
        iVar6 = UViewport::IsOrtho(param_1);
        if (iVar6 == 0) {
          pfVar10 = (float *)thunk_FUN_10327040();
          pFVar11 = param_4;
          local_70 = local_70 & 0xffffff00;
          pfVar12 = pfVar10;
          pFVar14 = local_29c;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(float *)pFVar14 = *pfVar12;
            pfVar12 = pfVar12 + 1;
            pFVar14 = pFVar14 + 4;
          }
          pfVar12 = local_118;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar12 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar12 = pfVar12 + 1;
          }
          local_70._0_1_ = 5;
          pfVar10 = local_118;
          pfVar12 = &fStack_4fc;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar12 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar12 = pfVar12 + 1;
          }
          puVar9 = (undefined4 *)FMatrix::operator*(param_4,local_198);
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined4 *)pFVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            pFVar11 = pFVar11 + 4;
          }
          local_70._0_1_ = 5;
          FMatrix::~FMatrix((FMatrix *)local_198);
          local_70._0_1_ = 4;
          FMatrix::~FMatrix(local_29c);
          local_70 = (uint)local_70._1_3_ << 8;
          thunk_FUN_10328510();
        }
        iVar6 = *(int *)(*(int *)(param_1 + 0x3c) + 0x5b8);
        if (iVar6 == 0xd) {
          param_3 = *(float *)(param_1 + 0x9c);
          local_14 = param_3;
          local_218[0] = param_3;
          local_10 = 0.0;
          local_c = 0.0;
          local_8 = 0.0;
          local_218[1] = 0.0;
          local_218[2] = 0.0;
          local_218[3] = 0.0;
          local_218[4] = 0.0;
          local_200 = 0;
          local_1fc = 0;
          local_1f8 = 0;
          local_1f4 = 0;
          local_1ec = 0;
          local_1e8 = 0;
          local_1e4 = 0;
          local_218[5] = -*(float *)(param_1 + 0xa0);
          local_1f0 = 0xbf800000;
          local_1e0 = -local_18;
          local_1dc = 0x3f800000;
          local_70._0_1_ = 7;
          pfVar10 = local_218;
          pfVar12 = &fStack_4fc;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar12 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar12 = pfVar12 + 1;
          }
          puVar9 = (undefined4 *)FMatrix::operator*(param_4,local_29c);
          pFVar11 = param_4;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined4 *)pFVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            pFVar11 = pFVar11 + 4;
          }
          local_70._0_1_ = 7;
          FMatrix::~FMatrix(local_29c);
          local_70 = (uint)local_70._1_3_ << 8;
          pFVar11 = (FMatrix *)local_218;
        }
        else if (iVar6 == 0xe) {
          param_3 = *(float *)(param_1 + 0x9c);
          local_14 = param_3;
          local_258[0] = param_3;
          local_10 = 0.0;
          local_c = 0.0;
          local_8 = 0.0;
          local_258[1] = 0.0;
          local_258[2] = 0.0;
          local_258[3] = 0.0;
          local_258[4] = 0.0;
          local_258[5] = 0.0;
          local_258[7] = 0.0;
          local_258[8] = 0.0;
          local_230 = 0;
          local_22c = 0;
          local_228 = 0;
          local_224 = 0;
          local_258[6] = -1.0;
          local_258[9] = (float)*(undefined4 *)(param_1 + 0xa0);
          local_220 = -local_1c;
          local_21c = 0x3f800000;
          local_70._0_1_ = 9;
          pfVar10 = local_258;
          pfVar12 = &fStack_4fc;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar12 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar12 = pfVar12 + 1;
          }
          puVar9 = (undefined4 *)FMatrix::operator*(param_4,local_29c);
          pFVar11 = param_4;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined4 *)pFVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            pFVar11 = pFVar11 + 4;
          }
          local_70._0_1_ = 9;
          FMatrix::~FMatrix(local_29c);
          local_70 = (uint)local_70._1_3_ << 8;
          pFVar11 = (FMatrix *)local_258;
        }
        else if (iVar6 == 0xf) {
          param_3 = *(float *)(param_1 + 0x9c);
          local_14 = param_3;
          local_1d8[0] = param_3;
          local_10 = 0.0;
          local_c = 0.0;
          local_8 = 0.0;
          local_1d8[1] = 0.0;
          local_1d8[2] = 0.0;
          local_1d8[3] = 0.0;
          local_1d8[4] = 0.0;
          local_1d8[5] = 0.0;
          local_1d8[7] = 0.0;
          local_1d8[8] = 0.0;
          local_1b0 = 0;
          local_1ac = 0;
          local_1a8 = 0;
          local_1a4 = 0;
          local_1d8[6] = 1.0;
          local_19c = 0x3f800000;
          local_1d8[9] = (float)*(undefined4 *)(param_1 + 0xa0);
          local_1a0 = local_1c;
          local_70._0_1_ = 0xb;
          pfVar10 = local_1d8;
          pfVar12 = &fStack_4fc;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar12 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar12 = pfVar12 + 1;
          }
          puVar9 = (undefined4 *)FMatrix::operator*(param_4,local_29c);
          pFVar11 = param_4;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined4 *)pFVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            pFVar11 = pFVar11 + 4;
          }
          local_70._0_1_ = 0xb;
          FMatrix::~FMatrix(local_29c);
          local_70 = (uint)local_70._1_3_ << 8;
          pFVar11 = (FMatrix *)local_1d8;
        }
        else if (iVar6 == 0x10) {
          param_3 = *(float *)(param_1 + 0x9c);
          local_158[4] = param_3;
          local_14 = 0.0;
          local_10 = 0.0;
          local_8 = 0.0;
          local_158[0] = 0.0;
          local_158[1] = 0.0;
          local_158[3] = 0.0;
          local_144 = 0;
          local_140 = 0;
          local_13c = 0;
          local_138 = 0;
          local_130 = 0;
          local_12c = 0;
          local_128 = 0;
          local_124 = 0;
          local_c = 1.0;
          local_158[2] = 1.0;
          local_11c = 0x3f800000;
          local_134 = *(undefined4 *)(param_1 + 0xa0);
          local_120 = local_20;
          local_70._0_1_ = 0xd;
          pfVar10 = local_158;
          pfVar12 = &fStack_4fc;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar12 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar12 = pfVar12 + 1;
          }
          puVar9 = (undefined4 *)FMatrix::operator*(param_4,local_29c);
          pFVar11 = param_4;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined4 *)pFVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            pFVar11 = pFVar11 + 4;
          }
          local_70._0_1_ = 0xd;
          FMatrix::~FMatrix(local_29c);
          local_70 = (uint)local_70._1_3_ << 8;
          pFVar11 = (FMatrix *)local_158;
        }
        else if (iVar6 == 0x11) {
          param_3 = *(float *)(param_1 + 0x9c);
          local_14 = 0.0;
          local_10 = 0.0;
          local_c = -1.0;
          local_198[2] = -1.0;
          local_8 = 0.0;
          local_198[0] = 0.0;
          local_198[1] = 0.0;
          local_198[3] = 0.0;
          local_184 = 0;
          local_180 = 0;
          local_17c = 0;
          local_178 = 0;
          local_170 = 0;
          local_16c = 0;
          local_168 = 0;
          local_164 = 0;
          local_198[4] = param_3;
          local_174 = *(undefined4 *)(param_1 + 0xa0);
          local_160 = -local_20;
          local_15c = 0x3f800000;
          local_70._0_1_ = 0xf;
          pfVar10 = local_198;
          pfVar12 = &fStack_4fc;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar12 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar12 = pfVar12 + 1;
          }
          puVar9 = (undefined4 *)FMatrix::operator*(param_4,local_29c);
          pFVar11 = param_4;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined4 *)pFVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            pFVar11 = pFVar11 + 4;
          }
          local_70._0_1_ = 0xf;
          FMatrix::~FMatrix(local_29c);
          local_70 = (uint)local_70._1_3_ << 8;
          pFVar11 = (FMatrix *)local_198;
        }
        else {
          param_3 = *(float *)(param_1 + 0x9c);
          local_118[4] = param_3;
          local_14 = 0.0;
          local_10 = 0.0;
          local_8 = 0.0;
          local_118[0] = 0.0;
          local_118[1] = 0.0;
          local_118[3] = 0.0;
          local_104 = 0;
          local_100 = 0;
          local_fc = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_ec = 0;
          local_e8 = 0;
          local_e4 = 0;
          local_e0 = 0;
          local_c = 1.0;
          local_118[2] = 1.0;
          local_dc = 0x3f800000;
          local_f4 = *(undefined4 *)(param_1 + 0xa0);
          local_70._0_1_ = 0x11;
          pfVar10 = local_118;
          pfVar12 = &fStack_4fc;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar12 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar12 = pfVar12 + 1;
          }
          puVar9 = (undefined4 *)FMatrix::operator*(param_4,local_29c);
          pFVar11 = param_4;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined4 *)pFVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            pFVar11 = pFVar11 + 4;
          }
          local_70._0_1_ = 0x11;
          FMatrix::~FMatrix(local_29c);
          local_70 = (uint)local_70._1_3_ << 8;
          pFVar11 = (FMatrix *)local_118;
        }
        FMatrix::~FMatrix(pFVar11);
        iVar6 = *(int *)(param_1 + 0x3c);
        local_20 = *(float *)(iVar6 + 0x600);
        local_1c = *(float *)(iVar6 + 0x604);
        local_18 = *(float *)(iVar6 + 0x608);
        local_2c = *(int *)(iVar6 + 0x60c);
        local_28 = *(int *)(iVar6 + 0x610);
        local_24 = *(int *)(iVar6 + 0x614);
        param_4 = (FMatrix *)0xff000000;
        (**(code **)(**(int **)(param_1 + 0x154) + 0x10))(1,0xff000000,1,0x3f800000,1,0);
      }
      if (_DAT_10c516c0 == 0.0) {
        iVar6 = (**(code **)**(undefined4 **)GConfig_exref)();
        if (iVar6 == 0) {
          DAT_10c516bc = 0;
        }
        iVar6 = (**(code **)(**(int **)GConfig_exref + 8))();
        if (iVar6 == 0) {
          _DAT_10c516c0 = 1.334;
        }
      }
      param_4 = (FMatrix *)(float)*(int *)(param_1 + 0x94);
      if (DAT_10c516bc != 0) {
        uVar7 = FUN_107a6660();
        *(undefined4 *)(param_1 + 0x94) = uVar7;
      }
      FPlayerSceneNode::FPlayerSceneNode(local_490);
      local_70 = CONCAT31(local_70._1_3_,0x13);
      uVar7 = FUN_107a6660();
      *(undefined4 *)(param_1 + 0x94) = uVar7;
      *(FPlayerSceneNode **)(param_1 + 0x158) = local_490;
      param_3 = -1.7014118e+38;
      iVar6 = **(int **)(param_1 + 0x154);
      UViewport::IsDepthComplexity(param_1);
      fStack_4fc = 0.0;
      (**(code **)(iVar6 + 0x10))();
      this_01 = local_34;
      if (*(int *)(local_34 + 0x58) != 0) {
        piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddaec * 4);
        uVar3 = rdtsc();
        *piVar1 = *piVar1 - (int)uVar3;
        (**(code **)(**(int **)(local_34 + 0x58) + 0x74))(local_490);
        piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddaec * 4);
        uVar3 = rdtsc();
        *piVar1 = *piVar1 + (int)uVar3 + -0xc;
      }
      UGameEngine::RenderCameraEffect(this_01,(FCameraSceneNode *)local_490);
      if (*(int **)(param_1 + 0x74) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x74) + 0xf0))();
      }
      if (local_30 == 0) {
        FPlayerSceneNode::Render(local_490,*(FRenderInterface **)(param_1 + 0x154));
      }
      if (((*(int *)GIsL2Console_exref == 0) && (*(int *)(this_01 + 0xe4) == 0)) &&
         (*(UCanvas **)(param_1 + 0x74) != (UCanvas *)0x0)) {
        local_30 = -0x1000000;
        UCanvas::DrawRadarBack(*(UCanvas **)(param_1 + 0x74),0xff000000);
        UCanvas::DrawRadarEtc(*(UCanvas **)(param_1 + 0x74));
      }
      if ((*(FL2ReplayManager **)(this_01 + 0x198) != (FL2ReplayManager *)0x0) &&
         (iVar6 = FL2ReplayManager::GetState(*(FL2ReplayManager **)(this_01 + 0x198)), iVar6 == 2))
      {
        (**(code **)(**(int **)(param_1 + 0x74) + 0x148))();
      }
      (**(code **)(**(int **)(param_1 + 0x154) + 0xf0))();
      *(undefined4 *)(this_01 + 0xf0) = 0;
      uVar3 = rdtsc();
      *(int *)(this_01 + 0xf0) = *(int *)(this_01 + 0xf0) - (int)uVar3;
      if ((*(int *)GIsL2Console_exref != 0) && (*(int *)(this_01 + 0x68) != 0)) {
        fVar4 = _DAT_10ddd79c;
        if (_DAT_10ddd7a4 != 0.0) {
          fVar4 = _DAT_10ddd7a4 * 0.98 + _DAT_10ddd79c * 0.02;
        }
        _DAT_10ddd7a4 = fVar4;
        fVar4 = _DAT_10ddd7a0;
        if (_DAT_10ddd7a8 != 0.0) {
          fVar4 = _DAT_10ddd7a8 * 0.98 + _DAT_10ddd7a0 * 0.02;
        }
        _DAT_10ddd7a8 = fVar4;
        _DAT_10ddd79c = 0.0;
        _DAT_10ddd7a0 = 0.0;
        (**(code **)(**(int **)(this_01 + 0x68) + 0x5ac))(*(undefined4 *)(param_1 + 0x74));
      }
      (**(code **)(**(int **)(param_1 + 0x74) + 0x120))
                (0,0,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
      uVar3 = rdtsc();
      *(int *)(this_01 + 0xf0) = *(int *)(this_01 + 0xf0) + (int)uVar3 + -0xc;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x54) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x50) = 0;
      iVar6 = UObject::IsA(*(UObject **)(param_1 + 0x3c),
                           &ALineagePlayerController::PrivateStaticClass);
      if (iVar6 != 0) {
        iVar6 = *(int *)(param_1 + 0x3c);
        if (*(int *)(iVar6 + 0x3bc) != 0) {
          iVar6 = *(int *)(iVar6 + 0x3bc);
        }
        UGameEngine::GetSWMapXY
                  (this_01,*(undefined4 *)(iVar6 + 0x1bc),*(undefined4 *)(iVar6 + 0x1c0),
                   *(undefined4 *)(iVar6 + 0x1c4),&param_3,&param_4);
      }
      if (*(FCanvasUtil **)(*(int *)(param_1 + 0x74) + 0xa8) != (FCanvasUtil *)0x0) {
        FCanvasUtil::Flush(*(FCanvasUtil **)(*(int *)(param_1 + 0x74) + 0xa8));
      }
      *(undefined4 *)(param_1 + 0x160) = 1;
      for (local_44 = 0; local_44 < *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x650);
          local_44 = local_44 + 1) {
        iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x64c) + local_44 * 4)
        ;
        if (iVar6 != 0) {
          local_d8[0] = iVar6 + 0x6c;
          local_d8[1] = 0;
          local_d8[2] = 0;
          local_d8[3] = 0;
          local_d8[4] = 0;
          local_d8[5] = 0;
          local_d8[6] = 0;
          local_d8[7] = 0;
          local_d8[8] = 0;
          iVar13 = 1;
          local_38 = 1;
          if (*(int *)(iVar6 + 0x7c) != 0) {
            if (*(int *)(iVar6 + 0x188) == 0) {
              if (*(int *)(iVar6 + 0xb4) != 0) {
                local_d8[1] = iVar6 + 0xa4;
                goto LAB_105901f7;
              }
            }
            else if (*(int *)(iVar6 + 0x98) != 0) {
              local_d8[1] = iVar6 + 0x88;
LAB_105901f7:
              iVar13 = 2;
              local_38 = 2;
            }
            for (iVar8 = 0; iVar8 < *(int *)(iVar6 + 0xc4); iVar8 = iVar8 + 1) {
              local_d8[iVar13] = iVar8 * 0x20 + *(int *)(iVar6 + 0xc0);
              iVar13 = iVar13 + 1;
              local_38 = iVar13;
            }
            local_90 = iVar8;
            (**(code **)(**(int **)(param_1 + 0x154) + 0xa4))(0,local_d8,iVar13,0);
            (**(code **)(**(int **)(param_1 + 0x154) + 0xac))(iVar6 + 0x104,0);
            for (iVar13 = 0; local_84 = iVar13, iVar13 < *(int *)(iVar6 + 0x140);
                iVar13 = iVar13 + 1) {
              thunk_FUN_10493f70(*(int *)(iVar6 + 0x13c) + iVar13 * 0x14);
            }
          }
        }
        this_01 = local_34;
      }
      for (local_54 = 0; local_54 < *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x650);
          local_54 = local_54 + 1) {
      }
      FArray::Empty((FArray *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x64c),4,0);
      for (iVar6 = 0; local_8c = iVar6,
          iVar6 < *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x644); iVar6 = iVar6 + 1) {
        (**(code **)(**(int **)(param_1 + 0x154) + 0x44))
                  (*(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x640) + iVar6 * 4),0,0,0)
        ;
      }
      for (local_64 = 0; local_64 < *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x644);
          local_64 = local_64 + 1) {
      }
      FArray::Empty((FArray *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x640),4,0);
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      (**(code **)(*(int *)param_1 + 0x70))();
      *(uint *)(param_1 + 0x164) = (uint)(param_2 != 0);
      UGameEngine::FindMouseTargetObject(this_01,param_1,(FCameraSceneNode *)local_490);
      local_70 = local_70 & 0xffffff00;
      FPlayerSceneNode::~FPlayerSceneNode(local_490);
      local_34 = this_01;
    }
  }
  else {
    if (*(int *)GLog_exref != 0) {
      UObject::GetPathName
                (*(UObject **)(*(int *)(param_1 + 0x3c) + 0xe0),(UObject *)0x0,(ushort *)0x0);
      FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x5c) = 0;
    ALevelInfo::eventFillPrecacheMaterialsArray(*(ALevelInfo **)(*(int *)(param_1 + 0x3c) + 0xe0));
    ALevelInfo::eventFillPrecacheStaticMeshesArray
              (*(ALevelInfo **)(*(int *)(param_1 + 0x3c) + 0xe0));
    *(undefined4 *)(param_1 + 0x160) = 1;
    local_50 = appSecondsQPC();
    iVar6 = (**(code **)(*(int *)param_1 + 0x6c))();
    if (iVar6 != 0) {
      FPlayerSceneNode::FPlayerSceneNode(local_490);
      local_70 = CONCAT31(local_70._1_3_,1);
      *(FPlayerSceneNode **)(param_1 + 0x158) = local_490;
      (**(code **)(**(int **)(param_1 + 0x154) + 0x98))();
      if (local_30 == 0) {
        FPlayerSceneNode::Render(local_490,*(FRenderInterface **)(param_1 + 0x154));
      }
      for (local_48 = 0; local_48 < *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x650);
          local_48 = local_48 + 1) {
        iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x64c) + local_48 * 4)
        ;
        if (iVar6 != 0) {
          local_d8[9] = iVar6 + 0x6c;
          local_b0 = 0;
          local_ac = 0;
          local_a8 = 0;
          local_a4 = 0;
          local_a0 = 0;
          local_9c = 0;
          local_98 = 0;
          local_94 = 0;
          iVar13 = 1;
          local_3c = 1;
          if (*(int *)(iVar6 + 0x7c) != 0) {
            if (*(int *)(iVar6 + 0x188) == 0) {
              if (*(int *)(iVar6 + 0xb4) != 0) {
                local_b0 = iVar6 + 0xa4;
                iVar13 = 2;
                local_3c = 2;
              }
              if (*(int *)GL2Shader_exref != 0) {
                (**(code **)(**(int **)(param_1 + 0x154) + 0x54))();
              }
            }
            else {
              if (*(int *)(iVar6 + 0x98) != 0) {
                local_b0 = iVar6 + 0x88;
                iVar13 = 2;
                local_3c = 2;
              }
              if (*(int *)GL2Shader_exref != 0) {
                (**(code **)(**(int **)(param_1 + 0x154) + 0x54))();
              }
            }
            for (iVar8 = 0; iVar8 < *(int *)(iVar6 + 0xc4); iVar8 = iVar8 + 1) {
              local_d8[iVar13 + 9] = iVar8 * 0x20 + *(int *)(iVar6 + 0xc0);
              iVar13 = iVar13 + 1;
              local_3c = iVar13;
            }
            local_60 = iVar8;
            if (*(int *)GL2Shader_exref == 0) {
              fStack_4fc = 4.2785698e-29;
              (**(code **)(**(int **)(param_1 + 0x154) + 0xa4))();
            }
            else {
              (**(code **)(**(int **)(param_1 + 0x154) + 0x50))();
            }
            fStack_4fc = 4.2785774e-29;
            (**(code **)(**(int **)(param_1 + 0x154) + 0xac))();
            for (iVar13 = 0; local_6c = iVar13, iVar13 < *(int *)(iVar6 + 0x140);
                iVar13 = iVar13 + 1) {
              thunk_FUN_10493f70();
            }
          }
        }
      }
      for (local_80 = 0; local_80 < *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x650);
          local_80 = local_80 + 1) {
      }
      FArray::Empty((FArray *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x64c),4,0);
      *(undefined4 *)(param_1 + 0x158) = 0;
      (**(code **)(*(int *)param_1 + 0x70))();
      local_70 = local_70 & 0xffffff00;
      FPlayerSceneNode::~FPlayerSceneNode(local_490);
    }
    if (*(int *)GLog_exref != 0) {
      appSecondsQPC();
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    }
    local_50 = appSecondsQPC();
    iVar6 = (**(code **)(*(int *)param_1 + 0x6c))();
    if (iVar6 != 0) {
      FPlayerSceneNode::FPlayerSceneNode(local_490);
      local_70 = CONCAT31(local_70._1_3_,2);
      *(FPlayerSceneNode **)(param_1 + 0x158) = local_490;
      (**(code **)(**(int **)(param_1 + 0x154) + 0x98))();
      if (local_30 == 0) {
        FPlayerSceneNode::Render(local_490,*(FRenderInterface **)(param_1 + 0x154));
      }
      iVar6 = 0;
      while (local_58 = iVar6, iVar6 < *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x644))
      {
        if (*(int *)GL2Shader_exref == 0) {
          fStack_4fc = 0.0;
          (**(code **)(**(int **)(param_1 + 0x154) + 0x44))
                    (*(undefined4 *)
                      (*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x640) + iVar6 * 4));
          iVar6 = iVar6 + 1;
        }
        else {
          (**(code **)(**(int **)(param_1 + 0x154) + 0x4c))();
          iVar6 = iVar6 + 1;
        }
      }
      for (local_5c = 0; local_5c < *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x644);
          local_5c = local_5c + 1) {
      }
      fStack_4fc = 4.2787197e-29;
      FArray::Empty((FArray *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x640),4,0);
      *(undefined4 *)(param_1 + 0x158) = 0;
      (**(code **)(*(int *)param_1 + 0x70))();
      local_70 = local_70 & 0xffffff00;
      FPlayerSceneNode::~FPlayerSceneNode(local_490);
    }
    if (*(int *)GLog_exref != 0) {
      dVar15 = appSecondsQPC();
      param_4 = (FMatrix *)(float)((float10)dVar15 - (float10)local_50);
      FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x5cc) = uVar2;
  *(int *)(local_34 + 0x100) = 0;
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10ddd920 * 4);
  uVar3 = rdtsc();
  *piVar1 = *piVar1 + (int)uVar3 + -0xc;
  ExceptionList = local_78;
  return;
}


// ==== 10590368 Catch@10590368

void Catch_10590368(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 4) = *(undefined4 *)(unaff_EBP + -0x1f0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 4,&DAT_10914c48);
}


// ==== 1059037f Catch@1059037f

void Catch_1059037f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::Draw");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10590900 FUN_10590900

void FUN_10590900(float param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  UGameEngine *in_ECX;
  float unaff_EBX;
  float unaff_EBP;
  float10 fVar6;
  float10 fVar7;
  float unaff_retaddr;
  undefined4 *puVar8;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(in_ECX + 0x308);
  if ((((iVar1 != 0) || (*(int *)(in_ECX + 0x310) != 0)) && (*(int *)(in_ECX + 0x54) != 0)) &&
     ((piVar2 = *(int **)(*(int *)(in_ECX + 0x54) + 0x38), *piVar2 != 0 &&
      (iVar3 = *(int *)(*piVar2 + 0x3c), iVar3 != 0)))) {
    fVar5 = *(float *)(in_ECX + 0x30c) + param_1 * 1000.0;
    *(float *)(in_ECX + 0x30c) = fVar5;
    fVar6 = (float10)thunk_FUN_103704b0(fVar5 / *(float *)(in_ECX + 0x304),0x38d1b717,0x3f800000);
    if (iVar1 != 0) {
      puVar8 = &local_c;
      FColor::operator_class_FVector((FColor *)(in_ECX + 0x314));
      *(float *)(iVar3 + 0x664) = (float)fVar6;
      *(undefined4 *)(iVar3 + 0x668) = local_c;
      *(undefined4 *)(iVar3 + 0x66c) = local_8;
      *(float *)(iVar3 + 0x658) = 1.0 - unaff_EBX;
      if (!NAN(unaff_EBX) && 1.0 < unaff_EBX != (unaff_EBX == 1.0)) {
        iVar1 = *(int *)(in_ECX + 0x318);
        if (iVar1 == 2) {
          fVar5 = *(float *)(in_ECX + 0x340) - unaff_retaddr;
          *(float *)(in_ECX + 0x340) = fVar5;
          if (0.0 <= fVar5) {
            return;
          }
          *(float *)(in_ECX + 0x30c) = -fVar5;
          *(float *)(in_ECX + 0x304) = *(float *)(in_ECX + 0x344);
          fVar7 = (float10)thunk_FUN_103704b0(-fVar5 / *(float *)(in_ECX + 0x344),0x38d1b717,
                                              0x3f800000,puVar8);
          unaff_EBX = (float)fVar7;
          *(undefined4 *)(in_ECX + 0x310) = 1;
        }
        *(undefined4 *)(in_ECX + 0x308) = 0;
        UGameEngine::ScreenFadeDone(in_ECX,1,iVar1);
        *(undefined4 *)(in_ECX + 0x318) = 0;
      }
    }
    if (*(int *)(in_ECX + 0x310) != 0) {
      FColor::operator_class_FVector((FColor *)(in_ECX + 0x314));
      *(float *)(iVar3 + 0x658) = unaff_EBP;
      *(float *)(iVar3 + 0x664) = unaff_EBX;
      *(float *)(iVar3 + 0x668) = (float)fVar6;
      *(undefined4 *)(iVar3 + 0x66c) = local_c;
      if (!NAN(unaff_EBP) && 1.0 < unaff_EBP != (unaff_EBP == 1.0)) {
        *(undefined4 *)(in_ECX + 0x310) = 0;
        uVar4 = *(undefined4 *)GIsL2WaterEffect_exref;
        *(undefined4 *)GIsL2WaterEffect_exref = 0;
        *(undefined4 *)GIsL2WaterEffect_exref = uVar4;
        *(undefined4 *)(in_ECX + 0x318) = 0;
        return;
      }
    }
  }
  return;
}


// ==== 10590bb0 FUN_10590bb0

int FUN_10590bb0(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = thunk_FUN_1032ff50(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = thunk_FUN_1058ebc0(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x1c + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x1c + *in_ECX);
  }
  FString::operator=((FString *)(iVar3 * 0x1c + 0x10 + *in_ECX),param_2);
  return iVar3 * 0x1c + 0x10 + *in_ECX;
}


// ==== 10590c70 FUN_10590c70

void FUN_10590c70(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081df01;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10590cc0 FUN_10590cc0

void FUN_10590cc0(void)

{
  UEngine *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081dfef;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UEngine::UEngine(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UGameEngine::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UGameEngine::vftable_for_FExec_;
  FURL::FURL((FURL *)(in_ECX + 0x1ac),(ushort *)&DAT_10853d94);
  local_4._0_1_ = 1;
  FArray::FArray((FArray *)(in_ECX + 0x1f0),0);
  local_4._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 0x1fc),0);
  local_4._0_1_ = 7;
  FArray::FArray((FArray *)(in_ECX + 0x208));
  local_4._0_1_ = 9;
  FArray::FArray((FArray *)(in_ECX + 0x2d8));
  local_4._0_1_ = 0xb;
  FArray::FArray((FArray *)(in_ECX + 0x2e4));
  local_4._0_1_ = 0xd;
  FArray::FArray((FArray *)(in_ECX + 0x2f0));
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FArray::FArray((FArray *)(in_ECX + 0x360),0);
  *(undefined4 *)(in_ECX + 0x254) = 0;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0x300) = 1;
  ExceptionList = local_c;
  return;
}


// ==== 10590e30 FUN_10590e30

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10590e30(FL2ReplayManager *param_1)

{
  undefined1 uVar1;
  UClass *pUVar2;
  int iVar3;
  int *piVar4;
  UObject *pUVar5;
  FL2ReplayManager *this;
  int iVar6;
  FString *this_00;
  ATerrainInfo *pAVar7;
  undefined4 uVar8;
  UInteraction *pUVar9;
  UBaseGUIController *this_01;
  UInteraction *pUVar10;
  ushort *puVar11;
  FLandMark *this_02;
  UObject *in_ECX;
  FOutputDevice *this_03;
  wchar_t *pwStack_421c;
  int *piStack_4218;
  wchar_t *pwStack_420c;
  ETravelType EVar12;
  wchar_t *pwStack_41fc;
  FString *pFStack_41f8;
  ushort local_4194;
  undefined1 local_4192 [8190];
  ushort local_2194;
  undefined1 local_2192 [8190];
  ushort local_194 [30];
  FURL local_158 [68];
  FURL local_114 [72];
  FURL local_cc [64];
  int local_8c;
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  int local_7c;
  FString local_78 [12];
  int local_6c;
  int local_68;
  int local_60;
  int local_5c;
  ushort *local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  FString local_44 [12];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  FString local_24 [12];
  FString local_18 [12];
  undefined8 local_c;
  
  puStack_80 = &LAB_1081e10f;
  local_84 = ExceptionList;
  local_8c = 0x10590e58;
  local_88 = &stack0xffffbe60;
  local_7c._0_1_ = 0;
  local_7c._1_3_ = 0;
  ExceptionList = &local_84;
  pUVar2 = UObject::GetClass(in_ECX);
  iVar3 = (**(code **)(*(int *)pUVar2 + 0x78))();
  if (iVar3 != 0x380) {
    appFailAssert("sizeof(*this)==GetClass()->GetPropertiesSize()",".\\UnGame.cpp",0x20f);
  }
  if (param_1 != (FL2ReplayManager *)0x84) {
    appRequestExit(0);
  }
  UEngine::Init((UEngine *)in_ECX,(int)param_1);
  local_54 = 1;
  (**(code **)**(undefined4 **)GConfig_exref)();
  if ((local_54 == 0) && (1 < *(int *)GL2ClientOrder_exref)) {
    appRequestExit(0);
    ExceptionList = local_84;
    return;
  }
  UGameEngine::InitClick((UGameEngine *)in_ECX);
  iVar3 = UObject::CheckSafePackage((ushort *)L"..\\Systextures\\Crest.utx");
  if (iVar3 == 0) {
    (**(code **)(**(int **)GFileManager_exref + 0x14))();
  }
  if (*(int *)GIsL2NetLogin_exref == 0) {
    *(undefined4 *)(in_ECX + 0xe8) = 1;
  }
  *(undefined4 *)(in_ECX + 0x19c) = 0;
  appCleanFileCache();
  if (*(int *)GIsClient_exref != 0) {
    UObject::StaticLoadClass
              (&UClient::PrivateStaticClass,(UObject *)0x0,
               (ushort *)L"ini:Engine.Engine.ViewportManager",(ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe48,0);
    piVar4 = (int *)thunk_FUN_1058b320();
    *(int **)(in_ECX + 0x54) = piVar4;
    (**(code **)(*piVar4 + 0x68))();
    UObject::StaticLoadClass
              (&URenderDevice::PrivateStaticClass,(UObject *)0x0,
               (ushort *)L"ini:Engine.Engine.RenderDevice",(ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe44,0);
    piVar4 = (int *)thunk_FUN_1058b3a0();
    *(int **)(in_ECX + 0x5c) = piVar4;
    (**(code **)(*piVar4 + 0x6c))();
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x5c) + 0xc0))();
    if (*(int *)(iVar3 + 4) < 0xc) {
      *(undefined4 *)GIsL2WaterEffect_exref = 0;
    }
    UObject::StaticLoadClass
              (&UL2NetHandler::PrivateStaticClass,(UObject *)0x0,(ushort *)L"Engine.NetworkHandler",
               (ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe38,0);
    UObject::GetTransientPackage();
    pUVar5 = UObject::StaticConstructObject();
    *(UObject **)(in_ECX + 0x60) = pUVar5;
    UObject::AddToRoot(pUVar5);
    (**(code **)(**(int **)(in_ECX + 0x60) + 0x6c))();
    UObject::StaticLoadClass
              (&UL2OrcMove::PrivateStaticClass,(UObject *)0x0,(ushort *)L"Engine.OrcMove",
               (ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe30,0);
    UObject::GetTransientPackage();
    pUVar5 = UObject::StaticConstructObject();
    *(UObject **)(in_ECX + 0x70) = pUVar5;
    (**(code **)(*(int *)pUVar5 + 0x74))();
    *(undefined4 *)(in_ECX + 0x74) = 0;
  }
  uVar1 = (undefined1)local_7c;
  if (*(int *)GL2UseReplayManager_exref != 0) {
    param_1 = (FL2ReplayManager *)thunk_FUN_1032ffc0();
    local_7c._0_1_ = 1;
    if (param_1 == (FL2ReplayManager *)0x0) {
      this = (FL2ReplayManager *)0x0;
    }
    else {
      this = (FL2ReplayManager *)
             FL2ReplayManager::FL2ReplayManager(param_1,(uint)(*(int *)GL2ReplayMode_exref == 0));
    }
    local_7c._0_1_ = 0;
    uVar1 = (undefined1)local_7c;
    local_7c._0_1_ = 0;
    *(FL2ReplayManager **)(in_ECX + 0x198) = this;
    if ((*(int *)GL2ReplayMode_exref != 0) &&
       (uVar1 = (undefined1)local_7c, this != (FL2ReplayManager *)0x0)) {
      FL2ReplayManager::SetState(this,1);
      iVar3 = (**(code **)(**(int **)GConfig_exref + 8))();
      if (iVar3 == 0) {
        *(undefined4 *)GL2SeamlessMaginotLine_exref = 0x40800000;
      }
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        local_34 = 0;
      }
      *(int *)(*(int *)(in_ECX + 0x198) + 0x54e0) = local_34;
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        local_30 = 1;
      }
      if (local_34 != 0) {
        local_30 = 0;
      }
      FL2ReplayManager::SetCameraInstMode(*(FL2ReplayManager **)(in_ECX + 0x198),local_30);
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        local_48 = 1;
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x198) + 0x54e4) = local_48;
      FString::FString(local_44);
      local_7c._0_1_ = 2;
      pFStack_41f8 = local_44;
      pwStack_41fc = L"LoadingTexName";
      iVar3 = (**(code **)(**(int **)GConfig_exref + 0xc))();
      if (iVar3 != 0) {
        local_c = (double)CONCAT44(&pwStack_420c,(undefined4)local_c);
        FString::FString((FString *)&pwStack_420c,local_44);
        local_7c._0_1_ = 2;
        FL2ReplayManager::SetLoadingTexName(*(FL2ReplayManager **)(in_ECX + 0x198));
      }
      pwStack_420c = L"UseChatData";
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        local_2c = 0;
      }
      piStack_4218 = (int *)0x1059129f;
      FL2ReplayManager::SetUseChatData(*(FL2ReplayManager **)(in_ECX + 0x198),local_2c);
      piStack_4218 = &local_4c;
      pwStack_421c = L"DrawName";
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        local_4c = local_2c;
      }
      *(int *)(*(int *)(in_ECX + 0x198) + 0x5508) = local_4c;
      FString::FString(local_78);
      local_7c = CONCAT31(local_7c._1_3_,4);
      iVar3 = (**(code **)(**(int **)GConfig_exref + 4))();
      if (iVar3 == 0) {
        param_1 = (FL2ReplayManager *)0x0;
LAB_10591316:
        FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
      }
      else if (param_1 == (FL2ReplayManager *)0x0) goto LAB_10591316;
      local_68 = 0;
      while (iVar3 = local_68, local_68 < (int)param_1) {
        appSprintf(local_194,(ushort *)L"SceneName%d");
        iVar6 = (**(code **)(**(int **)GConfig_exref + 0xc))();
        if (iVar6 != 0) {
          appSprintf(local_194,(ushort *)L"AFTER_CG%d");
          iVar6 = (**(code **)**(undefined4 **)GConfig_exref)();
          if (iVar6 == 0) {
            local_50 = 0;
          }
          local_c = (double)CONCAT44(&stack0xffffbdb0,(undefined4)local_c);
          FString::FString((FString *)&stack0xffffbdb0,local_78);
          local_7c = CONCAT31((int3)((uint)local_7c >> 8),4);
          FL2ReplayManager::AddSceneName(*(FL2ReplayManager **)(in_ECX + 0x198));
        }
        local_68 = iVar3 + 1;
      }
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        local_38 = 0;
      }
      *(int *)(*(int *)(in_ECX + 0x198) + 0x54e8) = local_38;
      if (local_38 != 0) {
        FString::FString(local_24);
        local_7c._0_1_ = 6;
        for (iVar3 = 0; local_5c = iVar3, iVar3 < (int)param_1; iVar3 = iVar3 + 1) {
          appSprintf(local_194,(ushort *)L"BGM%d");
          iVar6 = (**(code **)(**(int **)GConfig_exref + 0xc))();
          if (iVar6 != 0) {
            local_c = (double)CONCAT44(&stack0xffffbdb4,(undefined4)local_c);
            FString::FString((FString *)&stack0xffffbdb4,local_24);
            local_7c._0_1_ = 6;
            FL2ReplayManager::SetBGM(*(FL2ReplayManager **)(in_ECX + 0x198));
          }
        }
        local_7c = CONCAT31(local_7c._1_3_,4);
        FString::~FString(local_24);
      }
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        *(undefined4 *)GL2ReplayLoadResource_exref = 0;
      }
      iVar3 = (**(code **)(**(int **)GConfig_exref + 4))
                        (L"PATHS",&DAT_108bfc64,&local_28,L"Replay.ini");
      if (iVar3 == 0) {
        local_28 = 0;
      }
      if ((*(int *)GL2ReplayLoadResource_exref != 0) && (0 < local_28)) {
        FString::FString(local_24);
        local_7c = CONCAT31(local_7c._1_3_,8);
        thunk_FUN_1032c1a0();
        for (iVar3 = 0; local_6c = iVar3, iVar3 < local_28; iVar3 = iVar3 + 1) {
          appSprintf(local_194,(ushort *)L"PATHS%d");
          iVar6 = (**(code **)(**(int **)GConfig_exref + 0xc))();
          if ((iVar6 != 0) && (this_00 = (FString *)thunk_FUN_1032ad60(), this_00 != (FString *)0x0)
             ) {
            FString::FString(this_00,local_24);
          }
        }
        local_7c = CONCAT31(local_7c._1_3_,4);
        FString::~FString(local_24);
      }
      FString::operator=(&FURL::DefaultLocalMap,(ushort *)L"Entry.unr");
      local_7c._0_1_ = 2;
      FString::~FString(local_78);
      local_7c._0_1_ = 0;
      FString::~FString(local_44);
      uVar1 = (undefined1)local_7c;
    }
  }
  local_7c._0_1_ = uVar1;
  FString::FString(local_18);
  local_7c._0_1_ = 9;
  uVar1 = (undefined1)local_7c;
  local_7c._0_1_ = 9;
  if (*(int *)(in_ECX + 0x54) != 0) {
    FURL::FURL(local_cc,(ushort *)L"Entry");
    local_7c._0_1_ = 10;
    iVar3 = (**(code **)(*(int *)in_ECX + 0xcc))();
    local_7c._0_1_ = 9;
    FURL::~FURL(local_cc);
    if (iVar3 == 0) {
      FString::operator*(local_18);
      LocalizeError((ushort *)L"FailedBrowse",(ushort *)L"Engine",(ushort *)0x0);
      FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref)
      ;
    }
    uVar8 = *(undefined4 *)(in_ECX + 0x19c);
    *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(in_ECX + 0x1a0);
    *(undefined4 *)(in_ECX + 0x1a0) = uVar8;
    uVar1 = (undefined1)local_7c;
  }
  local_7c._0_1_ = uVar1;
  if (((*(int *)GIsOnlyL2Console_exref == 0) &&
      (*(undefined4 *)(in_ECX + 0x1a4) = 0, *(int *)(in_ECX + 0x54) != 0)) &&
     (*(int *)GL2SharedSky_exref != 0)) {
    FURL::FURL(local_cc,(ushort *)L"SkyLevel");
    local_7c._0_1_ = 0xb;
    iVar3 = (**(code **)(*(int *)in_ECX + 0xcc))();
    local_7c._0_1_ = 9;
    FURL::~FURL(local_cc);
    if (iVar3 == 0) {
      FString::operator*(local_18);
      LocalizeError((ushort *)L"FailedBrowse",(ushort *)L"Engine",(ushort *)0x0);
      FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref)
      ;
    }
    uVar8 = *(undefined4 *)(in_ECX + 0x19c);
    *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(in_ECX + 0x1a4);
    *(undefined4 *)(in_ECX + 0x1a4) = uVar8;
  }
  FURL::FURL(local_114,(ushort *)0x0);
  local_7c._0_1_ = 0xc;
  FURL::LoadURLConfig(local_114,(ushort *)L"DefaultPlayer",(ushort *)L"User");
  if (*(int *)GIsL2Console_exref != 0) {
    FURL::FURL(local_cc,local_114,(ushort *)L"Entry",1);
    local_7c._0_1_ = 0xd;
    DAT_10c51050 = 1;
    if (*(int *)GIsL2Seamless_exref != 0) {
      *(undefined4 *)GIsL2Seamless_exref = 0;
      DAT_10c51054 = 1;
      *(uint *)GL2ThreadFilter_exref = *(uint *)GL2ThreadFilter_exref & 0xfffffffe;
    }
    if (*(int *)(in_ECX + 0x54) != 0) {
      iVar3 = (**(code **)(*(int *)in_ECX + 0xcc))();
      if (iVar3 == 0) {
        FString::operator*(local_18);
        LocalizeError((ushort *)L"FailedBrowse",(ushort *)L"Engine",(ushort *)0x0);
        FOutputDevice::Logf(*(FOutputDevice **)GError_exref,
                            (ushort *)*(FOutputDevice **)GError_exref);
      }
      *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(in_ECX + 0x19c);
    }
    goto LAB_10591b79;
  }
  (**(code **)**(undefined4 **)GConfig_exref)();
  if ((DAT_10c51050 != 0) && (*(int *)GIsL2Seamless_exref != 0)) {
    *(undefined4 *)GIsL2Seamless_exref = 0;
    DAT_10c51054 = 1;
    *(uint *)GL2ThreadFilter_exref = *(uint *)GL2ThreadFilter_exref & 0xfffffffe;
  }
  if (*(int *)(in_ECX + 0x54) != 0) {
    FURL::FURL(local_158,(ushort *)L"Entry");
    local_7c._0_1_ = 0xe;
    iVar3 = (**(code **)(*(int *)in_ECX + 0xcc))();
    local_7c._0_1_ = 0xc;
    FURL::~FURL(local_158);
    if (iVar3 == 0) {
      FString::operator*(local_18);
      LocalizeError((ushort *)L"FailedBrowse",(ushort *)L"Engine",(ushort *)0x0);
      FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref)
      ;
    }
    uVar8 = *(undefined4 *)(in_ECX + 0x19c);
    *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(in_ECX + 0x1a0);
    *(undefined4 *)(in_ECX + 0x1a0) = uVar8;
  }
  local_2194 = 0;
  _memset(local_2192,0,0x1ffe);
  local_58 = appCmdLine();
  iVar3 = ParseToken(&local_58,&local_2194,0x1000,0);
  if (((iVar3 == 0) ||
      ((iVar3 = appStricmp(&local_2194,(ushort *)L"SERVER"), iVar3 == 0 &&
       (iVar3 = ParseToken(&local_58,&local_2194,0x1000,0), iVar3 == 0)))) || (local_2194 == 0x2d))
  {
    puVar11 = FString::operator*(&FURL::DefaultLocalMap);
    appStrcpy(&local_2194,puVar11);
  }
  FURL::FURL(local_cc,local_114,&local_2194,1);
  local_7c._0_1_ = 0xf;
  if (local_8c == 0) {
    LocalizeError((ushort *)L"InvalidUrl",(ushort *)L"Engine",(ushort *)0x0);
    FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
  }
  FURL::FURL((FURL *)&pwStack_420c,local_cc);
  local_7c._0_1_ = 0xf;
  local_60 = (**(code **)(*(int *)in_ECX + 200))();
  if (local_60 == 0) {
    iVar3 = FString::operator==(local_18,(ushort *)&DAT_10853d94);
    if (iVar3 != 0) {
      puVar11 = FString::operator*(&FURL::DefaultLocalMap);
      iVar3 = appStricmp(&local_2194,puVar11);
      if (iVar3 != 0) {
        EVar12 = 1;
        puVar11 = FString::operator*(&FURL::DefaultLocalMap);
        pwStack_420c = L"䗆ᇼڋ젅";
        FURL::FURL((FURL *)&pwStack_41fc,local_114,puVar11,EVar12);
        local_7c._0_1_ = 0xf;
        local_60 = (**(code **)(*(int *)in_ECX + 200))();
        if (local_60 != 0) goto LAB_10591ae7;
      }
    }
    FString::operator*(local_18);
    LocalizeError((ushort *)L"FailedBrowse",(ushort *)L"Engine",(ushort *)0x0);
    FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
  }
LAB_10591ae7:
  if (((*(int *)GIsL2Seamless_exref != 0) && (*(ULevel **)(in_ECX + 0x19c) != (ULevel *)0x0)) &&
     (pAVar7 = ULevel::GetTerrainInfo(*(ULevel **)(in_ECX + 0x19c)), pAVar7 != (ATerrainInfo *)0x0))
  {
    DAT_10c596f4 = *(undefined4 *)(pAVar7 + 0x1bc);
    DAT_10c596f8 = *(FURL **)(pAVar7 + 0x1c0);
    _DAT_10c59708 = DAT_10c596fc;
    _DAT_10c59700 = DAT_10c596f4;
    _DAT_10c59704 = DAT_10c596f8;
    UGameEngine::GetSWMapXY();
    thunk_FUN_105897f0();
  }
LAB_10591b79:
  local_7c._0_1_ = 0xc;
  FURL::~FURL(local_cc);
  piVar4 = (int *)0x0;
  if (*(int *)(in_ECX + 0x54) != 0) {
    UInput::StaticInitInput();
    UObject::StaticLoadClass
              (&UInteractionMaster::PrivateStaticClass,(UObject *)0x0,
               (ushort *)L"engine.InteractionMaster",(ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe48,0);
    uVar8 = thunk_FUN_1058b420();
    *(undefined4 *)(*(int *)(in_ECX + 0x54) + 0xb4) = uVar8;
    *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 0xb4) + 0x34) = *(int *)(in_ECX + 0x54);
    UInteractionMaster::DisplayCopyright(*(UInteractionMaster **)(*(int *)(in_ECX + 0x54) + 0xb4));
    iVar3 = **(int **)(in_ECX + 0x54);
    FName::FName((FName *)&stack0xffffbe4c,0);
    piVar4 = (int *)(**(code **)(iVar3 + 0x88))();
    FString::FString(local_44,(ushort *)L"ini:Engine.Engine.GUIController");
    local_7c._0_1_ = 0x12;
    pUVar9 = UInteractionMaster::eventAddInteraction
                       (*(UInteractionMaster **)(*(int *)(in_ECX + 0x54) + 0xb4),local_44,
                        (UPlayer *)0x0);
    local_7c = CONCAT31(local_7c._1_3_,0xc);
    FString::~FString(local_44);
    if (pUVar9 == (UInteraction *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_03,*(ushort **)GLog_exref);
      }
    }
    else {
      iVar3 = thunk_FUN_1058b4a0();
      if (iVar3 != 0) {
        this_01 = (UBaseGUIController *)thunk_FUN_1058b4a0();
        UBaseGUIController::eventInitializeController(this_01);
        iVar3 = thunk_FUN_1058b4a0();
        piVar4[0x1c] = iVar3;
      }
    }
    FString::FString(local_44,(ushort *)L"ini:Engine.Engine.Console");
    local_7c._0_1_ = 0x13;
    pUVar10 = UInteractionMaster::eventAddInteraction
                        (*(UInteractionMaster **)(*(int *)(in_ECX + 0x54) + 0xb4),local_44,
                         (UPlayer *)0x0);
    local_7c._0_1_ = 0xc;
    FString::~FString(local_44);
    if (pUVar10 != (UInteraction *)0x0) {
      *(UInteraction **)(*(int *)(*(int *)(in_ECX + 0x54) + 0xb4) + 0x3c) = pUVar10;
    }
    *(int **)(pUVar9 + 0x38) = piVar4;
    *(int **)(pUVar10 + 0x38) = piVar4;
    piVar4[0x10] = **(int **)(*(int *)(*(int *)(in_ECX + 0x54) + 0xb4) + 0x40);
    local_c = appSecondsQPC();
    FOutputDevice::Logf((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    FL2GameData::Load(&GL2GameData,0);
    appSecondsQPC();
    FOutputDevice::Logf(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
    FString::FString(local_24);
    local_7c._0_1_ = 0x14;
    uVar1 = (undefined1)local_7c;
    local_7c._0_1_ = 0x14;
    if (*(int *)GIsL2Console_exref == 0) {
      local_4194 = 0;
      local_7c._0_1_ = uVar1;
      _memset(local_4192,0,0x1ffe);
      puVar11 = appCmdLine();
      local_c = (double)CONCAT44(puVar11,(undefined4)local_c);
      iVar3 = ParseToken((ushort **)((int)&local_c + 4),&local_4194,0x1000,0);
      if (((iVar3 == 0) ||
          ((iVar3 = appStricmp(&local_4194,(ushort *)L"SERVER"), iVar3 == 0 &&
           (iVar3 = ParseToken((ushort **)((int)&local_c + 4),&local_4194,0x1000,0), iVar3 == 0))))
         || (local_4194 == 0x2d)) {
        puVar11 = FString::operator*(&FURL::DefaultLocalMap);
        appStrcpy(&local_4194,puVar11);
      }
      FURL::FURL(local_cc,local_114,&local_4194,1);
      local_7c = CONCAT31(local_7c._1_3_,0x16);
    }
    else {
      FURL::FURL(local_cc,local_114,(ushort *)L"Entry",1);
      local_7c = CONCAT31(local_7c._1_3_,0x15);
    }
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x19c) + 0xcc))();
    if (iVar3 == 0) {
      FString::operator*(local_24);
      FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref)
      ;
    }
    local_7c = CONCAT31(local_7c._1_3_,0x14);
    FURL::~FURL(local_cc);
    if (*(int *)GIsOnlyL2Console_exref == 0) {
      UEngine::InitAudio((UEngine *)in_ECX);
      if (*(int **)(in_ECX + 0x58) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0x58) + 0x70))();
      }
    }
    (**(code **)(*(int *)piVar4[0x1e] + 0x6c))();
    if (*(int *)GIsL2Console_exref == 0) {
      (**(code **)(*piVar4 + 0x8c))();
      (**(code **)(**(int **)(in_ECX + 0x19c) + 0xf8))();
    }
    local_7c._0_1_ = 0xc;
    FString::~FString(local_24);
  }
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2
              (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2fa);
  }
  iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
  if (iVar3 == 0) {
    *(undefined4 *)GL2UnderWaterEffect_exref = 0;
  }
  iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
  if (iVar3 == 0) {
    *(undefined4 *)GL2UseCommand_exref = 0;
  }
  if (((*(int *)GIsEditor_exref == 0) && (*(int *)(in_ECX + 0x54) != 0)) &&
     ((*(int *)GIsL2Console_exref != 0 && (*(int *)GIsL2NetLogin_exref != 0)))) {
    if (*(int *)GIsOnlyL2Console_exref == 0) {
      local_c = appSecondsQPC();
      FURL::FURL(local_cc,local_114,(ushort *)L"Lobby",1);
      local_7c._0_1_ = 0x17;
      FURL::AddOption(local_cc,(ushort *)L"LogonMap");
      FURL::FURL((FURL *)&pwStack_421c,local_cc);
      local_7c = CONCAT31(local_7c._1_3_,0x17);
      iVar3 = (**(code **)(*(int *)in_ECX + 200))();
      if (iVar3 == 0) {
        FString::operator*(local_18);
        LocalizeError((ushort *)L"FailedBrowse",(ushort *)L"Engine",(ushort *)0x0);
        FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
      }
      if (*(int *)GLog_exref != 0) {
        appSecondsQPC();
        FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
      }
      local_7c._0_1_ = 0xc;
      FURL::~FURL(local_cc);
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x8c))();
      (**(code **)(**(int **)(in_ECX + 0x19c) + 0xf8))();
    }
    UObject::StaticLoadClass
              (&UL2ConsoleWnd::PrivateStaticClass,(UObject *)0x0,
               (ushort *)L"ini:Engine.Engine.L2Console",(ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe1c,0);
    UObject::GetTransientPackage();
    pUVar5 = UObject::StaticConstructObject();
    *(UObject **)(in_ECX + 0x68) = pUVar5;
    if (pUVar5 != (UObject *)0x0) {
      GL2Console = (UL2ConsoleWnd *)pUVar5;
      (**(code **)(**(int **)(in_ECX + 0x68) + 0x5a8))();
      if (*(int *)GIsOnlyL2Console_exref == 0) {
        (**(code **)(**(int **)(in_ECX + 0x68) + 0x600))();
      }
      (**(code **)(**(int **)(in_ECX + 0x68) + 0x65c))();
    }
  }
  if (*(int *)GL2ReplayMode_exref != 0) {
    UObject::StaticLoadClass
              (&UL2ConsoleWnd::PrivateStaticClass,(UObject *)0x0,
               (ushort *)L"ini:Engine.Engine.L2Console",(ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe1c,0);
    UObject::GetTransientPackage();
    pUVar5 = UObject::StaticConstructObject();
    *(UObject **)(in_ECX + 0x68) = pUVar5;
    if ((pUVar5 != (UObject *)0x0) &&
       (GL2Console = (UL2ConsoleWnd *)pUVar5,
       iVar3 = (**(code **)(**(int **)(in_ECX + 0x68) + 0x608))(), iVar3 != 0)) {
      *(undefined4 *)GIsL2Console_exref = 1;
    }
  }
  iVar3 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar3 == 0) {
    *(undefined4 *)(in_ECX + 0x338) = 0x42700000;
  }
  iVar3 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar3 == 0) {
    *(undefined4 *)(in_ECX + 0x33c) = 0x41f00000;
  }
  iVar3 = *(int *)(in_ECX + 0x54);
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x3c) != 0)) &&
      (iVar3 = *(int *)(**(int **)(iVar3 + 0x38) + 0x3c), iVar3 != 0)) &&
     ((*(int *)GIsL2Mark_exref == 2 && (*(int *)(iVar3 + 0x3bc) != 0)))) {
    pFStack_41f8 = (FString *)0x1059226c;
    this_02 = (FLandMark *)thunk_FUN_1032ffc0();
    local_7c._0_1_ = 0x19;
    if (this_02 == (FLandMark *)0x0) {
      uVar8 = 0;
    }
    else {
      pFStack_41f8 = (FString *)0x10592288;
      uVar8 = FLandMark::FLandMark(this_02,*(APawn **)(iVar3 + 0x3bc));
    }
    *(undefined4 *)(in_ECX + 0x2fc) = uVar8;
  }
  local_7c._0_1_ = 9;
  FURL::~FURL(local_114);
  local_7c = (uint)local_7c._1_3_ << 8;
  FString::~FString(local_18);
  ExceptionList = local_84;
  return;
}


// ==== 105922bf Catch@105922bf

void Catch_105922bf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 105922d3 Catch@105922d3

void Catch_105922d3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10592820 FUN_10592820

undefined4 FUN_10592820(FOutputDevice *param_1,FOutputDevice *param_2)

{
  int iVar1;
  ALevelInfo *pAVar2;
  FString *this;
  ushort *puVar3;
  UObject *this_00;
  int iVar4;
  UStruct *this_01;
  UEngine *in_ECX;
  FOutputDevice *extraout_ECX;
  FOutputDevice *pFVar5;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this_02;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  FURL aFStack_2b4 [48];
  undefined4 uStack_284;
  UObject *pUVar9;
  ulonglong uVar10;
  UObject *pUVar11;
  ushort local_25c [256];
  FString local_5c [16];
  undefined4 local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  FString local_24 [12];
  FOutputDevice *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081e1d1;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd98;
  local_8 = 0;
  local_18 = param_1;
  ExceptionList = &local_10;
  iVar1 = ParseCommand((ushort **)&local_18,(ushort *)L"OPEN");
  if (iVar1 == 0) {
    iVar1 = ParseCommand((ushort **)&local_18,(ushort *)L"START");
    if (iVar1 == 0) {
      iVar1 = ParseCommand((ushort **)&local_18,(ushort *)L"SERVERTRAVEL");
      if (iVar1 == 0) {
LAB_10592a27:
        if (((*(int *)GIsServer_exref != 0) && (*(int *)GIsClient_exref == 0)) &&
           (iVar1 = ParseCommand((ushort **)&local_18,(ushort *)&DAT_108a16fc), iVar1 != 0)) {
          FString::FString(local_24,(ushort *)local_18);
          local_8._0_1_ = 6;
          param_2 = (FOutputDevice *)&stack0xfffffd94;
          FName::FName((FName *)&stack0xfffffd94,0);
          pAVar2 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x168));
          AGameInfo::eventBroadcast(*(AGameInfo **)(pAVar2 + 0x614));
          goto LAB_105928f6;
        }
      }
      else if (*(int *)GIsServer_exref != 0) {
        if (*(int *)GIsClient_exref == 0) {
          FString::FString(local_24,(ushort *)local_18);
          local_8._0_1_ = 5;
          uVar10 = ZEXT48(local_24);
          pAVar2 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x168));
          ALevelInfo::eventServerTravel(pAVar2,(FString *)uVar10,(ulong)(uVar10 >> 0x20));
          goto LAB_105928f6;
        }
        goto LAB_10592a27;
      }
      iVar1 = ParseCommand((ushort **)&local_18,(ushort *)L"DISCONNECT");
      if (iVar1 == 0) {
        iVar1 = ParseCommand((ushort **)&local_18,(ushort *)L"RECONNECT");
        if (iVar1 == 0) {
          iVar1 = ParseCommand((ushort **)&param_1,(ushort *)L"EXIT");
          if ((iVar1 != 0) ||
             (iVar1 = ParseCommand((ushort **)&param_1,(ushort *)L"QUIT"), iVar1 != 0)) {
            iVar1 = *(int *)(in_ECX + 0x168);
            if (((iVar1 != 0) &&
                ((*(int *)(iVar1 + 0x70) != 0 &&
                 (iVar8 = *(int *)(*(int *)(iVar1 + 0x70) + 0x44), iVar8 != 0)))) &&
               (*(int *)(iVar8 + 0xeac) != 0)) {
              (**(code **)(**(int **)(*(int *)(*(int *)(iVar1 + 0x70) + 0x44) + 0xeac) + 0x70))();
              (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x168) + 0x70) + 0x44) + 0x84))();
            }
            iVar1 = *(int *)(in_ECX + 0x174);
            if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x70) != 0)) &&
                (iVar8 = *(int *)(*(int *)(iVar1 + 0x70) + 0x44), iVar8 != 0)) &&
               (*(int *)(iVar8 + 0xeac) != 0)) {
              (**(code **)(**(int **)(*(int *)(*(int *)(iVar1 + 0x70) + 0x44) + 0xeac) + 0x70))();
              (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x174) + 0x70) + 0x44) + 0x84))();
            }
            FOutputDevice::Log(param_2,(ushort *)L"Closing by request");
            appRequestExit(0);
            ExceptionList = local_10;
            return 1;
          }
          iVar1 = ParseCommand((ushort **)&local_18,(ushort *)L"GETCURRENTTICKRATE");
          if (iVar1 != 0) {
            FOutputDevice::Logf(this_02,(ushort *)param_2);
            ExceptionList = local_10;
            return 1;
          }
          iVar1 = ParseCommand((ushort **)&local_18,(ushort *)L"GETMAXTICKRATE");
          if (iVar1 != 0) {
            (**(code **)(*(int *)(in_ECX + -0x34) + 0xa8))();
            FOutputDevice::Logf(param_2,(ushort *)param_2);
            ExceptionList = local_10;
            return 1;
          }
          iVar1 = ParseCommand((ushort **)&local_18,(ushort *)L"GSPYLITE");
          if (iVar1 == 0) {
            iVar1 = ParseCommand((ushort **)&local_18,(ushort *)L"SAVEGAME");
            if (iVar1 != 0) {
              if ((ushort)(*(short *)local_18 - 0x30U) < 10) {
                iVar1 = *(int *)(in_ECX + -0x34);
                appAtoi((ushort *)local_18);
                (**(code **)(iVar1 + 0xd0))();
                ExceptionList = local_10;
                return 1;
              }
              ExceptionList = local_10;
              return 1;
            }
            iVar1 = ParseCommand((ushort **)&param_1,(ushort *)L"CANCEL");
            if (iVar1 != 0) {
              if (DAT_10c516c8 != 0) {
                ExceptionList = local_10;
                return 1;
              }
              DAT_10c516c8 = 1;
              if (*(int **)(in_ECX + 0x174) == (int *)0x0) {
                pcVar6 = *(code **)(*(int *)(in_ECX + -0x34) + 0xac);
              }
              else {
                iVar1 = (**(code **)(**(int **)(in_ECX + 0x174) + 0x74))();
                if (iVar1 != 0) {
                  DAT_10c516c8 = 0;
                  ExceptionList = local_10;
                  return 1;
                }
                iVar1 = *(int *)(in_ECX + -0x34);
                LocalizeProgress((ushort *)L"CancelledConnect",(ushort *)L"Engine",(ushort *)0x0);
                pcVar6 = *(code **)(iVar1 + 0xac);
              }
              (*pcVar6)();
              (**(code **)(*(int *)(in_ECX + -0x34) + 0xd4))();
              DAT_10c516c8 = 0;
              ExceptionList = local_10;
              return 1;
            }
            iVar1 = ParseCommand((ushort **)&param_1,(ushort *)L"SOUND_REBOOT");
            if (iVar1 != 0) {
              if (*(int **)(in_ECX + 0x24) == (int *)0x0) {
                ExceptionList = local_10;
                return 1;
              }
              (**(code **)(**(int **)(in_ECX + 0x24) + 0x100))();
              if (*(int **)(in_ECX + 0x24) != (int *)0x0) {
                (**(code **)(**(int **)(in_ECX + 0x24) + 0xc))();
              }
              UEngine::InitAudio(in_ECX + -0x34);
              if (*(int **)(in_ECX + 0x24) != (int *)0x0) {
                (**(code **)(**(int **)(in_ECX + 0x24) + 0x70))();
                ExceptionList = local_10;
                return 1;
              }
              ExceptionList = local_10;
              return 1;
            }
            iVar1 = ParseCommand((ushort **)&local_18,(ushort *)L"LazyMode");
            if (iVar1 != 0) {
              iVar1 = ParseCommand((ushort **)&local_18,(ushort *)&DAT_108c6ea8);
              if (iVar1 != 0) {
                *(undefined4 *)(in_ECX + 0x314) = 1;
                ExceptionList = local_10;
                return 1;
              }
              iVar1 = ParseCommand((ushort **)&local_18,(ushort *)&DAT_108c6e9c);
              if (iVar1 != 0) {
                *(undefined4 *)(in_ECX + 0x314) = 0;
                ExceptionList = local_10;
                return 1;
              }
              ExceptionList = local_10;
              return 1;
            }
            iVar1 = ParseCommand((ushort **)&local_18,(ushort *)L"SetAgit");
            pFVar5 = param_2;
            if (iVar1 == 0) {
              if ((*(int **)(in_ECX + 0x168) != (int *)0x0) &&
                 (iVar1 = (**(code **)(**(int **)(in_ECX + 0x168) + 0x8c))(), iVar1 != 0)) {
                ExceptionList = local_10;
                return 1;
              }
              if ((*(ULevel **)(in_ECX + 0x168) != (ULevel *)0x0) &&
                 (pAVar2 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x168)),
                 *(int *)(pAVar2 + 0x614) != 0)) {
                pAVar2 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x168));
                iVar1 = (**(code **)(**(int **)(pAVar2 + 0x614) + 0x4c))();
                if (iVar1 != 0) {
                  ExceptionList = local_10;
                  return 1;
                }
              }
              local_4c = 1;
              if ((*(ULevel **)(in_ECX + 0x168) != (ULevel *)0x0) &&
                 (pAVar2 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x168)),
                 pAVar2[0x5d4] == (ALevelInfo)0x3)) {
                param_2 = param_1;
                iVar1 = ParseCommand((ushort **)&param_2,(ushort *)&DAT_108c6e44);
                if (((iVar1 != 0) &&
                    (((iVar1 = ParseToken((ushort **)&param_2,local_25c,0x100,1), iVar1 != 0 &&
                      (this_01 = (UStruct *)thunk_FUN_10589690(), this_01 != (UStruct *)0x0)) &&
                     (iVar1 = UStruct::IsChildOf(this_01,(UStruct *)&AActor::PrivateStaticClass),
                     iVar1 != 0)))) &&
                   (iVar1 = UStruct::IsChildOf(this_01,(UStruct *)&AGameInfo::PrivateStaticClass),
                   iVar1 == 0)) {
                  ExceptionList = local_10;
                  return 0;
                }
              }
              iVar1 = UEngine::Exec(in_ECX,(ushort *)param_1,pFVar5);
              if (iVar1 == 0) {
                ExceptionList = local_10;
                return 0;
              }
              ExceptionList = local_10;
              return 1;
            }
            local_34 = 0;
            Parse((ushort *)local_18,(ushort *)&DAT_108c6e7c,(int *)&param_2);
            uStack_284 = 0x10592f7a;
            Parse((ushort *)local_18,(ushort *)L"obj=",&local_38);
            if ((int)param_2 < 0) {
              local_34 = 1;
            }
            uVar7 = (uint)((int)param_2 < 0);
            local_3c = 0;
            local_28 = (undefined1 *)0x0;
            local_30 = 0;
            FString::FString(local_24);
            local_8._0_1_ = 0xd;
            if ((uVar7 == 0) && (local_38 == 0)) {
              Parse((ushort *)local_18,(ushort *)L"value=",local_24);
              puVar3 = FString::operator*(local_24);
              this_00 = UObject::StaticFindObject
                                  (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar3,uVar7
                                  );
              if (this_00 == (UObject *)0x0) {
                pUVar9 = this_00;
                pUVar11 = this_00;
                puVar3 = FString::operator*(local_24);
                uStack_284 = 0x10592fff;
                this_00 = UObject::StaticLoadObject
                                    (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar3,
                                     (ushort *)this_00,(ulong)pUVar9,(UPackageMap *)pUVar11);
                if (this_00 == (UObject *)0x0) goto LAB_105928f6;
              }
              UObject::SetFlags(this_00,0x4000000);
              FL2GameData::SetAgitWallPaper(&GL2GameData,(int)param_2,(UMaterial *)this_00);
            }
            else {
              iVar1 = Parse((ushort *)local_18,(ushort *)L"value=",&local_3c);
              if (iVar1 == 0) {
                iVar1 = Parse((ushort *)local_18,(ushort *)L"depth=",(int *)&local_28);
                if (iVar1 != 0) {
                  local_30 = 2;
                }
              }
              else {
                local_30 = 1;
              }
              for (local_2c = 0; iVar1 = *(int *)(in_ECX + 0x168),
                  local_2c < *(int *)(iVar1 + 0x11b4) + 1; local_2c = local_2c + 1) {
                if (local_2c != 0) {
                  iVar1 = *(int *)(*(int *)(iVar1 + 0x11b0) + -4 + local_2c * 4);
                }
                for (iVar8 = 0; local_48 = iVar8, iVar8 < *(int *)(iVar1 + 0x3c); iVar8 = iVar8 + 1)
                {
                  if ((((*(int *)(*(int *)(iVar1 + 0x38) + iVar8 * 4) != 0) &&
                       (iVar4 = thunk_FUN_1045c8b0(), iVar4 != 0)) &&
                      ((*(byte *)(iVar4 + 0x3bc) & 1) != 0)) &&
                     ((local_34 != 0 ||
                      ((*(FOutputDevice **)(iVar4 + 0x3c0) == param_2 &&
                       (*(int *)(iVar4 + 0x3c4) == local_38)))))) {
                    if (local_30 == 1) {
                      *(int *)(iVar4 + 0x3cc) = local_3c;
                    }
                    else if (local_30 == 2) {
                      for (local_40 = 0; local_40 < *(int *)(iVar4 + 0x3d4); local_40 = local_40 + 1
                          ) {
                        if (*(undefined1 **)(*(int *)(iVar4 + 0x3d0) + local_40 * 8) == local_28) {
                          *(int *)(iVar4 + 0x3cc) = local_40 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            FString::FString(local_24);
            local_8._0_1_ = 0xc;
            appLaunchURL((ushort *)L"GSpyLite.exe",(ushort *)&DAT_10853d94,local_24);
          }
          goto LAB_105928f6;
        }
        FString::FString(local_24);
        local_8._0_1_ = 9;
        if ((*(int *)(in_ECX + 0x20) != 0) && (*(int *)(*(int *)(in_ECX + 0x20) + 0x3c) != 0)) {
          this = (FString *)FURL::String((FURL *)(in_ECX + 0x178),(int)local_5c);
          local_8._0_1_ = 10;
          iVar1 = *(int *)(in_ECX + -0x34);
          FString::operator*(this);
          (**(code **)(iVar1 + 0xa0))();
          local_8._0_1_ = 9;
          FString::~FString(local_5c);
          goto LAB_105928f6;
        }
        local_28 = aFStack_2b4;
        FURL::FURL(aFStack_2b4,(FURL *)(in_ECX + 0x178));
        local_8._0_1_ = 9;
        iVar1 = (**(code **)(*(int *)(in_ECX + -0x34) + 200))();
        if ((iVar1 != 0) ||
           (iVar1 = FString::operator!=(local_24,(ushort *)&DAT_10853d94), iVar1 == 0))
        goto LAB_105928f6;
        FString::operator*(local_24);
        pFVar5 = param_2;
      }
      else {
        FString::FString(local_24);
        local_8._0_1_ = 7;
        if ((*(int *)(in_ECX + 0x20) != 0) && (*(int *)(*(int *)(in_ECX + 0x20) + 0x3c) != 0)) {
          iVar1 = *(int *)(in_ECX + 0x168);
          if ((iVar1 != 0) &&
             (((*(int *)(iVar1 + 0x70) != 0 &&
               (iVar8 = *(int *)(*(int *)(iVar1 + 0x70) + 0x44), iVar8 != 0)) &&
              (*(int *)(iVar8 + 0xeac) != 0)))) {
            (**(code **)(**(int **)(*(int *)(*(int *)(iVar1 + 0x70) + 0x44) + 0xeac) + 0x70))();
            (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x168) + 0x70) + 0x44) + 0x84))();
          }
          iVar1 = *(int *)(in_ECX + 0x174);
          if (((iVar1 != 0) && (*(int *)(iVar1 + 0x70) != 0)) &&
             ((iVar8 = *(int *)(*(int *)(iVar1 + 0x70) + 0x44), iVar8 != 0 &&
              (*(int *)(iVar8 + 0xeac) != 0)))) {
            (**(code **)(**(int **)(*(int *)(*(int *)(iVar1 + 0x70) + 0x44) + 0xeac) + 0x70))();
            (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x174) + 0x70) + 0x44) + 0x84))();
          }
          (**(code **)(*(int *)(in_ECX + -0x34) + 0xa0))();
          goto LAB_105928f6;
        }
        local_28 = aFStack_2b4;
        FURL::FURL(aFStack_2b4,(FURL *)(in_ECX + 0x178),(ushort *)L"?failed",0);
        local_8._0_1_ = 7;
        iVar1 = (**(code **)(*(int *)(in_ECX + -0x34) + 200))();
        if ((iVar1 != 0) ||
           (iVar1 = FString::operator!=(local_24,(ushort *)&DAT_10853d94), iVar1 == 0))
        goto LAB_105928f6;
        FString::operator*(local_24);
        pFVar5 = param_2;
      }
    }
    else {
      FString::FString(local_24);
      local_8._0_1_ = 3;
      if ((*(int *)(in_ECX + 0x20) != 0) && (*(int *)(*(int *)(in_ECX + 0x20) + 0x3c) != 0))
      goto LAB_10592951;
      local_28 = aFStack_2b4;
      FURL::FURL(aFStack_2b4,(FURL *)(in_ECX + 0x178),(ushort *)local_18,0);
      local_8._0_1_ = 3;
      iVar1 = (**(code **)(*(int *)(in_ECX + -0x34) + 200))();
      if ((iVar1 != 0) ||
         (iVar1 = FString::operator!=(local_24,(ushort *)&DAT_10853d94), iVar1 == 0))
      goto LAB_105928f6;
      FString::operator*(local_24);
      pFVar5 = extraout_ECX_00;
    }
  }
  else {
    FString::FString(local_24);
    local_8._0_1_ = 1;
    if ((*(int *)(in_ECX + 0x20) != 0) && (*(int *)(*(int *)(in_ECX + 0x20) + 0x3c) != 0)) {
LAB_10592951:
      (**(code **)(*(int *)(in_ECX + -0x34) + 0xa0))();
      goto LAB_105928f6;
    }
    local_28 = aFStack_2b4;
    FURL::FURL(aFStack_2b4,(FURL *)(in_ECX + 0x178),(ushort *)local_18,1);
    local_8._0_1_ = 1;
    iVar1 = (**(code **)(*(int *)(in_ECX + -0x34) + 200))();
    if ((iVar1 != 0) || (iVar1 = FString::operator!=(local_24,(ushort *)&DAT_10853d94), iVar1 == 0))
    goto LAB_105928f6;
    FString::operator*(local_24);
    pFVar5 = extraout_ECX;
  }
  FOutputDevice::Logf(pFVar5,(ushort *)param_2);
LAB_105928f6:
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_24);
  ExceptionList = local_10;
  return 1;
}


// ==== 10593322 Catch@10593322

void Catch_10593322(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 10593336 Catch@10593336

void Catch_10593336(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::Exec");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10593620 FUN_10593620

void FUN_10593620(void)

{
  UPackage *pUVar1;
  int iVar2;
  FString *this;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  int local_34;
  int local_30;
  undefined1 *local_24;
  int local_1c;
  UGameEngine *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081e22c;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10368480();
  local_8._0_1_ = 1;
  (**(code **)(**(int **)GConfig_exref + 0x1c))();
  FString::FString(local_58,(ushort *)L"EditPackages");
  local_8._0_1_ = 2;
  thunk_FUN_1058b170();
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_58);
  local_24 = &stack0xffffff84;
  FName::FName((FName *)&stack0xffffff84,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = thunk_FUN_105897b0(0x1f8,pUVar1);
  if (iVar2 != 0) {
    thunk_FUN_10578030();
  }
  FString::FString(local_4c);
  local_8._0_1_ = 3;
  FString::FString(local_40);
  local_8._0_1_ = 4;
  for (iVar2 = 0; local_1c = iVar2, iVar2 < local_30; iVar2 = iVar2 + 1) {
    FString::operator*((FString *)(local_34 + iVar2 * 0xc));
    this = (FString *)FString::Printf((ushort *)local_58);
    local_8._0_1_ = 5;
    puVar3 = FString::operator*(this);
    iVar4 = thunk_FUN_105753c0(puVar3);
    local_8._0_1_ = 4;
    FString::~FString(local_58);
    if (iVar4 != 0) {
      iVar4 = 0;
      puVar3 = FString::operator*(local_4c);
      puVar5 = FString::operator*(local_40);
      UGameEngine::AddMD5(local_18,puVar5,puVar3,iVar4);
    }
  }
  local_8._0_1_ = 3;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_4c);
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_1032ce30();
  ExceptionList = local_10;
  return;
}


// ==== 105937ab Catch@105937ab

void Catch_105937ab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105937bf Catch@105937bf

void Catch_105937bf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"GameEngine::DefaultMD5");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10593850 FUN_10593850

bool FUN_10593850(void)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  FURL *pFVar5;
  FString *pFVar6;
  ALevelInfo *pAVar7;
  undefined4 uVar8;
  int iVar9;
  UPackage *pUVar10;
  FString *this;
  UObject *pUVar11;
  int *in_ECX;
  FOutputDevice *this_00;
  int in_stack_00000044;
  undefined4 in_stack_00000048;
  FString *in_stack_0000004c;
  wchar_t *pwVar12;
  ETravelType EVar13;
  ushort local_4dc [256];
  ushort local_2dc [256];
  FURL local_dc [112];
  FString local_6c [44];
  undefined1 *local_40;
  void *local_3c;
  undefined1 *puStack_38;
  undefined4 local_34;
  int local_24;
  FString local_20 [12];
  ushort *local_14;
  FString local_10 [12];
  
  puStack_38 = &LAB_1081e2ca;
  local_3c = ExceptionList;
  local_40 = &stack0xfffffb18;
  local_34 = 1;
  ExceptionList = &local_3c;
  FString::operator=(in_stack_0000004c,(ushort *)&DAT_10853d94);
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0xf0))();
  }
  pwVar12 = L".unreal";
  puVar1 = FString::operator*((FString *)&stack0x00000020);
  puVar1 = appStrstr(puVar1,(ushort *)pwVar12);
  puVar2 = FString::operator*((FString *)&stack0x00000020);
  puVar3 = FString::operator*((FString *)&stack0x00000020);
  local_14 = (ushort *)appStrlen(puVar3);
  iVar4 = appStrlen((ushort *)L".unreal");
  if ((int)puVar1 - (int)puVar2 >> 1 == (int)local_14 - iVar4) {
    if (*(int *)GLog_exref != 0) {
      FString::operator*((FString *)&stack0x00000020);
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    }
    FString::FString(local_10);
    local_34._0_1_ = 2;
    iVar4 = **(int **)GConfig_exref;
    FString::operator*((FString *)&stack0x00000020);
    iVar4 = (**(code **)(iVar4 + 0xc))(L"Link",L"Server");
    if (iVar4 != 0) {
      EVar13 = 0;
      puVar1 = FString::operator*(local_10);
      pFVar5 = (FURL *)FURL::FURL(local_dc,(FURL *)0x0,puVar1,EVar13);
      local_34._0_1_ = 3;
      FURL::operator=((FURL *)&stack0x00000004,pFVar5);
      local_34._0_1_ = 2;
      FURL::~FURL(local_dc);
      local_34 = CONCAT31(local_34._1_3_,1);
      FString::~FString(local_10);
      goto LAB_105939aa;
    }
    local_34._0_1_ = 4;
    FString::operator*((FString *)&stack0x00000020);
    LocalizeError((ushort *)L"InvalidLink",(ushort *)L"Engine",(ushort *)0x0);
    pFVar6 = (FString *)FString::Printf((ushort *)local_20);
    local_34._0_1_ = 5;
    FString::operator=(in_stack_0000004c,pFVar6);
    local_34 = CONCAT31(local_34._1_3_,4);
    FString::~FString(local_20);
    local_34 = 1;
    pFVar6 = local_10;
LAB_10593aca:
    FString::~FString(pFVar6);
    goto LAB_10593ad0;
  }
LAB_105939aa:
  if (*(int *)GLog_exref != 0) {
    pFVar6 = (FString *)FURL::String((FURL *)&stack0x00000004,(int)local_20);
    local_34._0_1_ = 7;
    FString::operator*(pFVar6);
    FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
    local_34 = CONCAT31(local_34._1_3_,1);
    FString::~FString(local_20);
  }
  if (in_stack_00000044 == 0) {
    local_34._0_1_ = 8;
    pFVar6 = (FString *)FURL::String((FURL *)&stack0x00000004,(int)local_10);
    local_34._0_1_ = 9;
    FString::operator*(pFVar6);
    puVar1 = LocalizeError((ushort *)L"InvalidUrl",(ushort *)L"Engine",(ushort *)0x0);
    pFVar6 = (FString *)FString::Printf((ushort *)local_20,puVar1);
    local_34._0_1_ = 10;
    FString::operator=(in_stack_0000004c,pFVar6);
    local_34._0_1_ = 9;
    FString::~FString(local_20);
    local_34 = CONCAT31(local_34._1_3_,8);
    FString::~FString(local_10);
    goto LAB_10593ad0;
  }
  iVar4 = FURL::HasOption((FURL *)&stack0x00000004,(ushort *)L"failed");
  if ((iVar4 != 0) ||
     (iVar4 = FURL::HasOption((FURL *)&stack0x00000004,(ushort *)L"entry"), iVar4 != 0)) {
    local_34 = CONCAT31(local_34._1_3_,0xc);
    if (*(int *)GLog_exref != 0) {
      LocalizeError((ushort *)L"AbortToEntry",(ushort *)L"Engine",(ushort *)0x0);
      FOutputDevice::Logf2
                (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2f8)
      ;
    }
    pUVar11 = (UObject *)in_ECX[0x67];
    if ((pUVar11 != (UObject *)0x0) && (pUVar11 != (UObject *)in_ECX[0x68])) {
      iVar9 = 0;
      iVar4 = 1;
      pUVar11 = UObject::GetOuter(pUVar11);
      UObject::ResetLoaders(pUVar11,iVar4,iVar9);
    }
    (**(code **)(*in_ECX + 0xe4))();
    in_ECX[0x67] = in_ECX[0x68];
    pAVar7 = ULevel::GetLevelInfo((ULevel *)in_ECX[0x68]);
    pAVar7[0x5cc] = (ALevelInfo)0x0;
    if ((in_ECX[0x15] == 0) || (*(int *)(in_ECX[0x15] + 0x3c) == 0)) {
      appFailAssert("Client && Client->Viewports.Num()",".\\UnGame.cpp",0x6a3);
    }
    FUN_1058a210();
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      iVar4 = *(int *)in_ECX[0x16];
      (**(code **)(iVar4 + 0x100))();
      (**(code **)(iVar4 + 0x70))();
    }
    iVar4 = FURL::HasOption((FURL *)&stack0x00000004,(ushort *)L"failed");
    if ((iVar4 != 0) && (in_ECX[0x6a] == 0)) {
      iVar4 = *in_ECX;
      puVar1 = LocalizeError((ushort *)L"ConnectionFailed",(ushort *)L"Engine",(ushort *)0x0);
      (**(code **)(iVar4 + 0xac))(puVar1);
    }
    local_34 = 0xffffffff;
    FURL::~FURL((FURL *)&stack0x00000004);
    ExceptionList = local_3c;
    return true;
  }
  iVar4 = FURL::HasOption((FURL *)&stack0x00000004,(ushort *)&DAT_108c73ac);
  if (iVar4 == 0) {
    iVar4 = FURL::HasOption((FURL *)&stack0x00000004,(ushort *)L"restart");
    if (iVar4 != 0) {
      local_34 = CONCAT31(local_34._1_3_,0x11);
      FURL::operator=((FURL *)&stack0x00000004,(FURL *)(in_ECX + 0x6b));
      goto code_r0x10593c41;
    }
    puVar1 = FURL::GetOption((FURL *)&stack0x00000004,(ushort *)L"load=",(ushort *)0x0);
    local_14 = puVar1;
    if (puVar1 != (ushort *)0x0) {
      local_34._0_1_ = 0x13;
      FString::FString(local_20);
      local_34._0_1_ = 0x14;
      appAtoi(puVar1);
      FString::operator*((FString *)(*(int *)GSys_exref + 0x40));
      FString::Printf((ushort *)local_10,L"%s\\Save%i.usa?load");
      local_34._0_1_ = 0x15;
      EVar13 = 1;
      puVar1 = FString::operator*(local_10);
      uVar8 = FURL::FURL(local_dc,(FURL *)(in_ECX + 0x6b),puVar1,EVar13);
      local_34._0_1_ = 0x16;
      iVar4 = (**(code **)(*in_ECX + 0xcc))(uVar8,0);
      local_34._0_1_ = 0x15;
      FURL::~FURL(local_dc);
      if (iVar4 != 0) {
        local_24 = 0;
        while (iVar4 = local_24, pAVar7 = ULevel::GetLevelInfo((ULevel *)in_ECX[0x67]),
              iVar4 < *(int *)(pAVar7 + 0x5c8)) {
          appAtoi(local_14);
          puVar1 = FString::operator*((FString *)(*(int *)GSys_exref + 0x40));
          appSprintf(local_2dc,(ushort *)L"%s\\Save%i%i.usa",puVar1);
          FString::operator*((FString *)(*(int *)GSys_exref + 0x40));
          appSprintf(local_4dc,(ushort *)L"%s\\Game%i.usa");
          (**(code **)(**(int **)GFileManager_exref + 0x18))(local_2dc,local_4dc,1,0,0);
          local_24 = iVar4 + 1;
        }
        while( true ) {
          FString::operator*((FString *)(*(int *)GSys_exref + 0x40));
          pFVar6 = (FString *)FString::Printf((ushort *)local_6c,L"%s\\Game%i.usa");
          local_34._0_1_ = 0x17;
          FString::operator=(local_10,pFVar6);
          iVar4 = iVar4 + 1;
          local_34._0_1_ = 0x15;
          local_24 = iVar4;
          FString::~FString(local_6c);
          iVar9 = **(int **)GFileManager_exref;
          FString::operator*(local_10);
          iVar9 = (**(code **)(iVar9 + 0x10))();
          if (iVar9 < 1) break;
          iVar9 = **(int **)GFileManager_exref;
          uVar8 = 0;
          puVar1 = FString::operator*(local_10);
          (**(code **)(iVar9 + 0x14))(puVar1,uVar8);
        }
        FURL::operator=((FURL *)(in_ECX + 0x6b),(FURL *)(in_ECX[0x67] + 0x78));
        local_34._0_1_ = 0x14;
        FString::~FString(local_10);
        local_34 = CONCAT31(local_34._1_3_,0x13);
        FString::~FString(local_20);
        local_34 = 0xffffffff;
        FURL::~FURL((FURL *)&stack0x00000004);
        ExceptionList = local_3c;
        return true;
      }
      local_34._0_1_ = 0x14;
      FString::~FString(local_10);
      local_34 = CONCAT31(local_34._1_3_,0x13);
      pFVar6 = local_20;
      goto LAB_10593aca;
    }
  }
  else {
    local_34._0_1_ = 0xe;
    if (((ULevel *)in_ECX[0x67] == (ULevel *)0x0) ||
       (pAVar7 = ULevel::GetLevelInfo((ULevel *)in_ECX[0x67]), *(int *)(pAVar7 + 0x5c8) < 1))
    goto LAB_10593ad0;
    ULevel::GetLevelInfo((ULevel *)in_ECX[0x67]);
    FString::operator*((FString *)(*(int *)GSys_exref + 0x40));
    appSprintf(local_2dc,(ushort *)L"%s\\Game%i.usa");
    puVar1 = FString::operator*((FString *)&stack0x00000038);
    appStrcpy(local_4dc,puVar1);
    pFVar5 = (FURL *)FURL::FURL(local_dc,(FURL *)&stack0x00000004,local_2dc,1);
    local_34._0_1_ = 0xf;
    FURL::operator=((FURL *)&stack0x00000004,pFVar5);
    local_34 = CONCAT31(local_34._1_3_,0xe);
    FURL::~FURL(local_dc);
    FString::operator=((FString *)&stack0x00000038,local_4dc);
code_r0x10593c41:
    local_34 = 1;
  }
  iVar4 = FURL::IsLocalInternal((FURL *)&stack0x00000004);
  if (iVar4 != 0) {
    local_34 = CONCAT31(local_34._1_3_,0x19);
    iVar4 = (**(code **)(*in_ECX + 0xcc))(&stack0x00000004,0);
    local_34 = 0xffffffff;
    FURL::~FURL((FURL *)&stack0x00000004);
    ExceptionList = local_3c;
    return iVar4 != 0;
  }
  iVar4 = FURL::IsInternal((FURL *)&stack0x00000004);
  if ((iVar4 == 0) || (*(int *)GIsClient_exref == 0)) {
    iVar4 = FURL::IsInternal((FURL *)&stack0x00000004);
    if (iVar4 == 0) {
      local_34._0_1_ = 0x1f;
      this = (FString *)FURL::String((FURL *)&stack0x00000004,(int)local_6c);
      local_34._0_1_ = 0x20;
      puVar2 = (ushort *)&DAT_10853d94;
      pFVar6 = in_stack_0000004c;
      puVar1 = FString::operator*(this);
      appLaunchURL(puVar1,puVar2,pFVar6);
      local_34 = CONCAT31(local_34._1_3_,0x1f);
      FString::~FString(local_6c);
    }
    else {
      local_34 = CONCAT31(local_34._1_3_,0x1d);
      puVar1 = LocalizeError((ushort *)L"ServerOpen",(ushort *)L"Engine",(ushort *)0x0);
      FString::operator=(in_stack_0000004c,puVar1);
    }
  }
  else {
    local_34 = CONCAT31(local_34._1_3_,0x1b);
    if (in_ECX[0x6a] != 0) {
      (**(code **)(*in_ECX + 0xd4))();
    }
    in_stack_0000004c = (FString *)&stack0xfffffb10;
    FName::FName((FName *)&stack0xfffffb10,0);
    pUVar10 = UObject::GetTransientPackage();
    iVar4 = thunk_FUN_10587bb0(0xdc,pUVar10);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = thunk_FUN_1076e450();
    }
    in_ECX[0x6a] = iVar4;
    if (*(int *)(iVar4 + 0x70) == 0) {
      iVar9 = *in_ECX;
      FString::operator*((FString *)(iVar4 + 0xd0));
      (**(code **)(iVar9 + 0xac))(L"Networking Failed");
      if ((int *)in_ECX[0x6a] != (int *)0x0) {
        (**(code **)(*(int *)in_ECX[0x6a] + 0xc))();
      }
      in_ECX[0x6a] = 0;
    }
  }
LAB_10593ad0:
  local_34 = 0xffffffff;
  FURL::~FURL((FURL *)&stack0x00000004);
  ExceptionList = local_3c;
  return false;
}


// ==== 10593af8 Catch@10593af8

void Catch_10593af8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 10593b0c Catch@10593b0c

void Catch_10593b0c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"InvalidLink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10593b28 Catch@10593b28

void Catch_10593b28(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 10593b3c Catch@10593b3c

void Catch_10593b3c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UnknownURL");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10593c95 Catch@10593c95

void Catch_10593c95(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10593ca9 Catch@10593ca9

void Catch_10593ca9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"PopURL");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10593cdd Catch@10593cdd

void Catch_10593cdd(void)

{
  undefined4 *unaff_EBP;
  
  *unaff_EBP = unaff_EBP[-0x17];
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP,&DAT_10914c48);
}


// ==== 10593cf1 Catch@10593cf1

void Catch_10593cf1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"RestartURL");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10593f59 Catch@10593f59

void Catch_10593f59(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10593f6d Catch@10593f6d

void Catch_10593f6d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"LoadURL");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10593f77 Catch@10593f77

void Catch_10593f77(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x60);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_10914c48);
}


// ==== 10593f8b Catch@10593f8b

void Catch_10593f8b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"LocalMapURL");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10594062 Catch@10594062

void Catch_10594062(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10594076 Catch@10594076

void Catch_10594076(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"NetworkURL");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105940bd Catch@105940bd

void Catch_105940bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 105940d1 Catch@105940d1

void Catch_105940d1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"InvalidURL");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10594127 Catch@10594127

void Catch_10594127(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 4) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 4,&DAT_10914c48);
}


// ==== 1059413b Catch@1059413b

void Catch_1059413b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExternalURL");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059428c Catch@1059428c

void Catch_1059428c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -100);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105942a0 Catch@105942a0

void Catch_105942a0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FailedURL");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105942aa Catch@105942aa

void Catch_105942aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105942be Catch@105942be

void Catch_105942be(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::Browse");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10594570 FUN_10594570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10594570(void)

{
  ATerrainInfo *this;
  undefined4 uVar1;
  UGameEngine *in_ECX;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081e316;
  local_10 = ExceptionList;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(int *)GIsL2Seamless_exref != 0) &&
     (ExceptionList = &local_10, *(ULevel **)(in_ECX + 0x19c) != (ULevel *)0x0)) {
    ExceptionList = &local_10;
    this = ULevel::GetTerrainInfo(*(ULevel **)(in_ECX + 0x19c));
    if (this != (ATerrainInfo *)0x0) {
      DAT_10c596f4 = *(undefined4 *)(this + 0x1bc);
      DAT_10c596f8 = *(undefined4 *)(this + 0x1c0);
      _DAT_10c59708 = DAT_10c596fc;
      _DAT_10c59700 = DAT_10c596f4;
      _DAT_10c59704 = DAT_10c596f8;
      thunk_FUN_1059a760(this,this);
      *(undefined4 *)(this + 0x215c) = *(undefined4 *)(this + 0x222c);
      *(undefined4 *)(this + 0x2160) = *(undefined4 *)(this + 0x2230);
      *(undefined4 *)(this + 0x2164) = *(undefined4 *)(this + 0x2234);
      DAT_10c516dc = 0;
      DAT_10c556e0 = 0;
      ATerrainInfo::CheckComputeDataOnLoad(this);
      UGameEngine::GetSWMapXY();
      for (; iVar3 < 100; iVar3 = iVar3 + 1) {
        for (iVar2 = 0; iVar2 < 100; iVar2 = iVar2 + 1) {
          thunk_FUN_105897f0(iVar2,iVar3,0);
        }
      }
      thunk_FUN_105897f0(local_24,local_20,*(undefined4 *)(in_ECX + 0x19c));
      *(undefined4 *)(*(int *)(in_ECX + 0x19c) + 0x11d0) = 1;
      *(undefined4 *)(*(int *)(in_ECX + 0x19c) + 0x11d4) = 1;
    }
    if (*(int *)(in_ECX + 0x18c) != 0) {
      thunk_FUN_1057b040(1);
    }
    iVar3 = thunk_FUN_1032ffc0(0x48);
    local_8._0_1_ = 1;
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = thunk_FUN_104447c0(in_ECX);
    }
    local_8._0_1_ = 0;
    *(undefined4 *)(in_ECX + 0x18c) = uVar1;
    if (*(int *)(in_ECX + 400) != 0) {
      thunk_FUN_103254a0(*(int *)(in_ECX + 400));
    }
    iVar3 = thunk_FUN_1032ffc0(0x1c);
    local_8._0_1_ = 2;
    if (iVar3 == 0) {
      local_8 = (uint)local_8._1_3_ << 8;
      *(undefined4 *)(in_ECX + 400) = 0;
    }
    else {
      uVar1 = thunk_FUN_10443480(in_ECX);
      local_8 = (uint)local_8._1_3_ << 8;
      *(undefined4 *)(in_ECX + 400) = uVar1;
    }
  }
  if (DAT_10c5105c != 0) {
    DAT_10c51050 = 0;
    UGameEngine::FinishLoadSWMap(in_ECX);
    DAT_10c5105c = 0;
    if (*(int *)GL2ReplayMode_exref == 0) {
      DAT_10c51058 = 1;
    }
  }
  iVar3 = *(int *)(in_ECX + 0x6c);
  if (iVar3 != 0) {
    *(float *)(iVar3 + 0x164) = *(float *)(iVar3 + 0x164) - 1000.0;
    *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x168) = 1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105947bf Catch@105947bf

void Catch_105947bf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105947d3 Catch@105947d3

void Catch_105947d3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngien::FinishLoadMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10594890 FUN_10594890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10594890(FURL *param_1,int *param_2,undefined4 *param_3,ALevelInfo *param_4)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  AActor *pAVar4;
  undefined4 uVar5;
  FString *pFVar6;
  ushort *puVar7;
  ALevelInfo *pAVar8;
  ULinkerLoad *pUVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  uint uVar12;
  UObject *pUVar13;
  UClass *this;
  undefined4 *puVar14;
  APhysicsVolume *pAVar15;
  FName *pFVar16;
  UObject *in_ECX;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  code *pcVar17;
  float10 fVar18;
  undefined8 uVar19;
  undefined4 uStack_1024;
  undefined4 uStack_1020;
  undefined4 uStack_101c;
  undefined4 uStack_1018;
  undefined4 uStack_1014;
  wchar_t *pwVar20;
  ulong uVar21;
  FName *pFVar22;
  uint *puVar23;
  int iVar24;
  UPackageMap *pUVar25;
  FOutputDevice *pFVar26;
  int iVar27;
  int iVar28;
  wchar_t *pwVar29;
  ushort local_fe0;
  undefined1 local_fde [2046];
  wchar_t local_7e0;
  undefined1 local_7de [510];
  ushort local_5e0 [32];
  uint auStack_5a0 [261];
  FString local_18c [80];
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e4;
  int local_dc;
  int local_d4;
  int local_d0;
  int local_c8;
  int local_c0;
  int local_b8;
  int local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_98;
  int local_90;
  int local_80;
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  uint local_70;
  int local_68;
  int local_60;
  UObject *local_4c;
  UObject *local_44 [2];
  UObject *local_3c;
  UObject *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  int local_18;
  UObject *local_14;
  int local_10;
  UPackageMap *local_c;
  UObject *local_8;
  
  puStack_74 = &LAB_1081e371;
  local_78 = ExceptionList;
  local_7c = &stack0xfffff014;
  local_70 = 0;
  ExceptionList = &local_78;
  local_8 = in_ECX;
  FString::operator=((FString *)param_4,(ushort *)&DAT_10853d94);
  if (*(int *)GLog_exref != 0) {
    pFVar6 = (FString *)FURL::String(param_1,(int)&local_30);
    local_70._0_1_ = 1;
    FString::operator*(pFVar6);
    FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x2f8);
    local_70 = (uint)local_70._1_3_ << 8;
    FString::~FString((FString *)&local_30);
  }
  GInitRunaway();
  iVar27 = 0x20;
  puVar7 = FString::operator*((FString *)(param_1 + 0x1c));
  appStrncpy(local_5e0,puVar7,iVar27);
  if (*(ULevel **)(in_ECX + 0x19c) == (ULevel *)0x0) {
    local_20 = 0;
  }
  else {
    pAVar8 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x19c));
    local_20 = *(uint *)(pAVar8 + 0x5c8);
  }
  local_c = (UPackageMap *)0x0;
  if (param_2 != (int *)0x0) {
    iVar27 = (**(code **)(*param_2 + 0x6c))();
    local_c = *(UPackageMap **)(*(int *)(iVar27 + 0x44) + 0xc0);
  }
  local_70 = CONCAT31(local_70._1_3_,2);
  if ((((*(int *)(in_ECX + 0x54) != 0) && (*(int *)(*(int *)(in_ECX + 0x54) + 0x3c) != 0)) &&
      (*(int *)(in_ECX + 0x19c) != 0)) &&
     (iVar27 = FURL::HasOption(param_1,(ushort *)L"quiet"), iVar27 == 0)) {
    pAVar8 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x19c));
    pAVar8[0x5cc] = (ALevelInfo)0x1;
    pAVar8 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x19c));
    *(undefined4 *)(pAVar8 + 0x530) = 0;
    piVar3 = (int *)**(int **)(*(int *)(in_ECX + 0x54) + 0x38);
    if (((piVar3 != (int *)0x0) && (piVar3[0x1d] != 0)) && (piVar3[0x55] != 0)) {
      (**(code **)(*(int *)piVar3[0x1d] + 0x6c))();
      local_24 = 0xff000000;
      (**(code **)(*(int *)piVar3[0x55] + 0x10))();
      if ((piVar3[0x59] != 0) && (*(int *)(piVar3[0x1f] + 0x5c) == 0)) {
        (**(code **)(*piVar3 + 0x74))();
      }
      iVar27 = (**(code **)(*piVar3 + 0x6c))();
      if (iVar27 != 0) {
        if ((*(int *)GIsL2Console_exref != 0) && (*(int **)(in_ECX + 0x68) != (int *)0x0)) {
          (**(code **)(**(int **)(in_ECX + 0x68) + 0x5ac))();
        }
        uStack_1014 = 0;
        uStack_1018 = 0;
        uStack_101c = 0x10594a99;
        (**(code **)(*(int *)piVar3[0x1d] + 0x120))();
        if (*(FCanvasUtil **)(piVar3[0x1d] + 0xa8) != (FCanvasUtil *)0x0) {
          uStack_101c = 0x10594aab;
          FCanvasUtil::Flush(*(FCanvasUtil **)(piVar3[0x1d] + 0xa8));
        }
        uStack_101c = 0x10594ab4;
        (**(code **)(*piVar3 + 0x70))();
      }
      (**(code **)(*piVar3 + 0x74))();
      UObject::SetLoadingProgress(in_ECX,(_func_void_float *)&LAB_10310aa5);
    }
    if (*(int **)(in_ECX + 0x58) != (int *)0x0) {
      iVar27 = **(int **)(in_ECX + 0x58);
      (**(code **)(iVar27 + 0x100))();
      (**(code **)(iVar27 + 0x70))();
    }
    pAVar8 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x19c));
    pAVar8[0x5cc] = (ALevelInfo)0x0;
  }
  local_70 = 0;
  if ((*(int *)GIsEditor_exref == 0) && ((*(int *)GIsL2Seamless_exref != 0 || (DAT_10c51054 != 0))))
  {
    UGameEngine::FinishRemain((UGameEngine *)in_ECX);
  }
  local_34 = 0;
  local_70 = CONCAT31((int3)(local_70 >> 8),5);
  UObject::BeginLoad();
  if (param_2 != (int *)0x0) {
    local_a4 = 0;
    while (iVar27 = local_a4, local_a4 < *(int *)(local_c + 0x38)) {
      iVar28 = *(int *)(local_c + 0x34) + local_a4 * 0x44;
      pUVar9 = UObject::GetPackageLinker
                         (*(UObject **)(iVar28 + 0x10),(ushort *)0x0,0x9a,(UPackageMap *)0x0,
                          (FGuid *)(iVar28 + 0x14));
      *(ULinkerLoad **)(iVar28 + 0xc) = pUVar9;
      local_a4 = iVar27 + 1;
    }
    local_114 = 0;
    while (iVar27 = local_114, local_114 < *(int *)(local_c + 0x38)) {
      UObject::VerifyLinker(*(ULinkerLoad **)(*(int *)(local_c + 0x34) + 0xc + local_114 * 0x44));
      local_114 = iVar27 + 1;
    }
    if (*(int *)(local_c + 0x38) != 0) {
      local_34 = *(undefined4 *)(*(int *)(local_c + 0x34) + 0x10);
    }
  }
  FString::operator*((FString *)(param_1 + 0x1c));
  thunk_FUN_1058b4d0();
  UObject::EndLoad();
  pUVar10 = local_8;
  local_70 = 8;
  if (*(int *)(local_8 + 0x19c) != 0) {
    (**(code **)(*(int *)local_8 + 0xe4))();
  }
  local_70 = 10;
  if (*(int *)(pUVar10 + 0x54) != 0) {
    for (iVar27 = 0; local_11c = iVar27, iVar27 < *(int *)(*(int *)(local_8 + 0x54) + 0x3c);
        iVar27 = iVar27 + 1) {
      iVar28 = *(int *)(*(int *)(*(int *)(*(int *)(local_8 + 0x54) + 0x38) + iVar27 * 4) + 0x3c);
      piVar3 = *(int **)(iVar28 + 0xe4);
      *(undefined4 *)(iVar28 + 0x560) = 0;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(local_8 + 0x54) + 0x38) + iVar27 * 4) + 0x3c) = 0;
      if (*(int *)(iVar28 + 0x3bc) != 0) {
        (**(code **)(*piVar3 + 0xac))();
      }
      (**(code **)(*piVar3 + 0xac))();
    }
  }
  local_38 = (UObject *)0x0;
  local_70 = 0xc;
  if (*(UObject **)(local_8 + 0x19c) != (UObject *)0x0) {
    iVar28 = 0;
    iVar27 = 1;
    pUVar10 = UObject::GetOuter(*(UObject **)(local_8 + 0x19c));
    UObject::ResetLoaders(pUVar10,iVar27,iVar28);
    pUVar10 = local_8;
    if (*(int **)(*(int *)(local_8 + 0x19c) + 0x70) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(local_8 + 0x19c) + 0x70) + 0xc))();
      *(undefined4 *)(*(int *)(pUVar10 + 0x19c) + 0x70) = 0;
    }
    if (*(int **)(*(int *)(pUVar10 + 0x19c) + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(pUVar10 + 0x19c) + 0xbc) + 0xc))();
      *(undefined4 *)(*(int *)(pUVar10 + 0x19c) + 0xbc) = 0;
    }
    iVar27 = FURL::HasOption(param_1,(ushort *)L"push");
    if (iVar27 != 0) {
      (**(code **)(**(int **)(pUVar10 + 0x19c) + 0xb4))();
      FString::operator*((FString *)(*(int *)GSys_exref + 0x40));
      appSprintf((ushort *)(auStack_5a0 + 0x80),(ushort *)L"%s\\Game%i.usa");
      pUVar13 = *(UObject **)(pUVar10 + 0x19c);
      iVar27 = 0;
      pUVar9 = (ULinkerLoad *)0x0;
      pFVar26 = *(FOutputDevice **)GLog_exref;
      puVar23 = auStack_5a0 + 0x80;
      uVar21 = 0;
      pUVar11 = UObject::GetOuter(pUVar13);
      UObject::SavePackage(pUVar11,pUVar13,uVar21,(ushort *)puVar23,pFVar26,pUVar9,iVar27);
    }
    local_38 = *(UObject **)(pUVar10 + 0x19c);
    *(int *)(pUVar10 + 0x19c) = 0;
  }
  local_70 = 0xe;
  FString::operator*((FString *)(param_1 + 0x1c));
  iVar27 = thunk_FUN_1058b4d0();
  pUVar25 = local_c;
  *(int *)(local_8 + 0x19c) = iVar27;
  local_70 = 0;
  pcVar17 = Logf_exref;
  if (param_2 != (int *)0x0) {
    if (param_2[0x32] != 0) {
      param_2 = (int *)0x0;
    }
    (**(code **)(*(int *)local_c + 0x80))();
    pcVar17 = Logf_exref;
    local_124 = 0;
    while (iVar27 = local_124, local_124 < *(int *)(pUVar25 + 0x38)) {
      iVar28 = *(int *)(pUVar25 + 0x34) + local_124 * 0x44;
      if (*(int *)(iVar28 + 0x38) != *(int *)(iVar28 + 0x3c)) {
        FGuid::String((FGuid *)(local_124 * 0x44 + *(int *)(pUVar25 + 0x34) + 0x14));
        iVar28 = (**(code **)(*param_2 + 0x6c))();
        FOutputDevice::Logf(this_01,(ushort *)(*(int *)(iVar28 + 0x44) + 0x34));
      }
      local_124 = iVar27 + 1;
    }
  }
  local_70 = CONCAT31(local_70._1_3_,0x10);
  UObject::GetOuter((UObject *)&AActor::PrivateStaticClass);
  thunk_FUN_10589730();
  thunk_FUN_1058b610();
  while (pUVar10 = local_14, local_14 != (UObject *)0x0) {
    pwVar29 = L"Owner";
    puVar7 = UObject::GetName(local_14);
    iVar27 = appStricmp(puVar7,(ushort *)pwVar29);
    if ((iVar27 == 0) && (*(int *)(pUVar10 + 0x54) != 0x3c)) {
      (*pcVar17)();
    }
    local_14 = *(UObject **)(pUVar10 + 0x38);
    thunk_FUN_10589890();
  }
  UObject::GetOuter((UObject *)&AActor::PrivateStaticClass);
  thunk_FUN_10589730();
  thunk_FUN_1058b610();
  while (pUVar10 = local_44[0], local_44[0] != (UObject *)0x0) {
    pwVar29 = L"TimerCounter";
    puVar7 = UObject::GetName(local_44[0]);
    iVar27 = appStricmp(puVar7,(ushort *)pwVar29);
    if ((iVar27 == 0) && (*(int *)(pUVar10 + 0x54) != 0x130)) {
      (*pcVar17)();
    }
    local_44[0] = *(UObject **)(pUVar10 + 0x38);
    thunk_FUN_10589890();
  }
  UObject::GetOuter((UObject *)&APlayerController::PrivateStaticClass);
  thunk_FUN_10589730();
  thunk_FUN_1058b610();
  while (pUVar10 = local_3c, local_3c != (UObject *)0x0) {
    pwVar29 = L"Player";
    puVar7 = UObject::GetName(local_3c);
    iVar27 = appStricmp(puVar7,(ushort *)pwVar29);
    if ((iVar27 == 0) && (*(int *)(pUVar10 + 0x54) != 0x560)) {
      (*pcVar17)();
    }
    local_3c = *(UObject **)(pUVar10 + 0x38);
    thunk_FUN_10589890();
  }
  UObject::GetOuter((UObject *)&APawn::PrivateStaticClass);
  thunk_FUN_10589730();
  thunk_FUN_1058b610();
  while (pUVar10 = local_4c, local_4c != (UObject *)0x0) {
    pwVar29 = L"Health";
    puVar7 = UObject::GetName(local_4c);
    iVar27 = appStricmp(puVar7,(ushort *)pwVar29);
    if ((iVar27 == 0) && (*(int *)(pUVar10 + 0x54) != 0x15c4)) {
      (*pcVar17)();
    }
    local_4c = *(UObject **)(pUVar10 + 0x38);
    thunk_FUN_10589890();
  }
  iVar27 = (**(code **)(_PrivateStaticClass + 0x78))();
  if (iVar27 != 0x1d0) {
    appFailAssert("sizeof(UCanvas)==UCanvas::StaticClass()->GetPropertiesSize()",".\\UnGame.cpp",
                  0x81f);
  }
  iVar27 = (**(code **)(_PrivateStaticClass + 0x78))();
  if (iVar27 != 0x628) {
    appFailAssert("sizeof(UCubemap)==UCubemap::StaticClass()->GetPropertiesSize()",".\\UnGame.cpp",
                  0x820);
  }
  iVar27 = (**(code **)(_PrivateStaticClass + 0x78))();
  if (iVar27 != 0x19c) {
    appFailAssert("sizeof(UEngine)==UEngine::StaticClass()->GetPropertiesSize()",".\\UnGame.cpp",
                  0x821);
  }
  iVar27 = (**(code **)(_PrivateStaticClass + 0x78))();
  if (iVar27 != 0x380) {
    appFailAssert("sizeof(UGameEngine)==UGameEngine::StaticClass()->GetPropertiesSize()",
                  ".\\UnGame.cpp",0x822);
  }
  iVar27 = (**(code **)(_PrivateStaticClass + 0x78))();
  if (iVar27 != 0x40) {
    appFailAssert("sizeof(UPalette)==UPalette::StaticClass()->GetPropertiesSize()",".\\UnGame.cpp",
                  0x823);
  }
  iVar27 = (**(code **)(_PrivateStaticClass + 0x78))();
  if (iVar27 != 0x74) {
    appFailAssert("sizeof(UPlayer)==UPlayer::StaticClass()->GetPropertiesSize()",".\\UnGame.cpp",
                  0x824);
  }
  iVar27 = (**(code **)(_PrivateStaticClass + 0x78))();
  if (iVar27 != 0x60c) {
    appFailAssert("sizeof(UTexture)==UTexture::StaticClass()->GetPropertiesSize()",".\\UnGame.cpp",
                  0x825);
  }
  pUVar10 = local_8;
  local_70 = 0;
  if (*(int *)(local_8 + 0x19c) == 0) {
    appFailAssert("GLevel",".\\UnGame.cpp",0x829);
  }
  pAVar8 = ULevel::GetLevelInfo(*(ULevel **)(pUVar10 + 0x19c));
  param_4 = pAVar8;
  puVar7 = appComputerName();
  FStringNoInit::operator=((FStringNoInit *)(pAVar8 + 0x5d8),puVar7);
  local_70 = CONCAT31(local_70._1_3_,0x12);
  iVar27 = FURL::HasOption(param_1,(ushort *)L"load");
  if (iVar27 == 0) {
    iVar27 = FURL::HasOption(param_1,(ushort *)L"push");
    if (iVar27 == 0) {
      iVar27 = FURL::HasOption(param_1,(ushort *)&DAT_108c73ac);
      if (iVar27 == 0) {
        iVar27 = FURL::HasOption(param_1,(ushort *)L"peer");
        uVar12 = -(uint)(iVar27 != 0) & local_20;
      }
      else {
        uVar12 = local_20 - 1;
        if ((int)uVar12 < 0) {
          uVar12 = 0;
        }
      }
    }
    else {
      uVar12 = local_20 + 1;
    }
  }
  else {
    uVar12 = *(uint *)(param_4 + 0x5c8);
  }
  *(uint *)(param_4 + 0x5c8) = uVar12;
  local_70 = 0x14;
  if (param_2 == (int *)0x0) {
    if (*(int *)(*(int *)(pUVar10 + 0x19c) + 0x70) != 0) {
      appFailAssert("!GLevel->NetDriver",".\\UnGame.cpp",0x84a);
    }
  }
  else {
    if (param_2 != *(int **)(pUVar10 + 0x1a8)) {
      appFailAssert("Pending==GPendingLevel",".\\UnGame.cpp",0x83b);
    }
    *(int *)(*(int *)(pUVar10 + 0x19c) + 0x70) = param_2[0x1c];
    iVar27 = *(int *)(pUVar10 + 0x19c);
    if (*(int *)(iVar27 + 0x70) != 0) {
      if (iVar27 == 0) {
        iVar28 = 0;
      }
      else {
        iVar28 = iVar27 + 0x34;
      }
      *(int *)(*(int *)(iVar27 + 0x70) + 0x48) = iVar28;
    }
    *(int *)(*(int *)(pUVar10 + 0x19c) + 0xbc) = param_2[0x2f];
    iVar27 = *(int *)(pUVar10 + 0x19c);
    if (*(int *)(iVar27 + 0xbc) != 0) {
      if (iVar27 == 0) {
        iVar28 = 0;
      }
      else {
        iVar28 = iVar27 + 0x34;
      }
      *(int *)(*(int *)(iVar27 + 0xbc) + 0x48) = iVar28;
    }
    pAVar8 = ULevel::GetLevelInfo(*(ULevel **)(pUVar10 + 0x19c));
    pAVar8[0x5d4] = (ALevelInfo)0x3;
  }
  local_70 = 0x16;
  puVar7 = FURL::GetOption(param_1,(ushort *)L"load",(ushort *)0x0);
  if (puVar7 == (ushort *)0x0) {
    FURL::operator=((FURL *)(*(int *)(local_8 + 0x19c) + 0x78),param_1);
  }
  pFVar6 = (FString *)FString::Printf((ushort *)&local_30);
  local_70._0_1_ = 0x17;
  FStringNoInit::operator=((FStringNoInit *)(param_4 + 0x5e4),pFVar6);
  local_70._0_1_ = 0x16;
  FString::~FString((FString *)&local_30);
  pFVar6 = (FString *)FString::Printf((ushort *)&local_30);
  local_70._0_1_ = 0x18;
  FStringNoInit::operator=((FStringNoInit *)(param_4 + 0x5f0),pFVar6);
  local_70 = CONCAT31(local_70._1_3_,0x16);
  FString::~FString((FString *)&local_30);
  *(UObject **)(*(int *)(local_8 + 0x19c) + 0x74) = local_8;
  if (param_3 != (undefined4 *)0x0) {
    thunk_FUN_103ee450();
  }
  local_70 = 0;
  iVar27 = *(int *)(*(int *)(*(int *)(local_8 + 0x19c) + 0x74) + 0x5c);
  if ((iVar27 != 0) && (*(int *)(iVar27 + 0x7c) != 0)) {
    thunk_FUN_1058eb60();
    while (pUVar10 = local_14, (int)local_14 < *(int *)(GObjObjects_exref + 4)) {
      iVar27 = *(int *)(*(int *)GObjObjects_exref + (int)local_14 * 4);
      if ((*(int *)(iVar27 + 0x578) != 0) &&
         (iVar27 = UObject::IsA(*(UObject **)(iVar27 + 0x578),&UCubemap::PrivateStaticClass),
         iVar27 != 0)) {
        *(undefined4 *)(*(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4) + 0x578) = 0;
      }
      thunk_FUN_103737b0();
    }
    thunk_FUN_1058eb80();
    while (pUVar10 = local_14, (int)local_14 < *(int *)(GObjObjects_exref + 4)) {
      iVar27 = *(int *)(*(int *)GObjObjects_exref + (int)local_14 * 4);
      if ((*(int *)(iVar27 + 0x57c) != 0) &&
         (iVar27 = UObject::IsA(*(UObject **)(iVar27 + 0x57c),&UCubemap::PrivateStaticClass),
         iVar27 != 0)) {
        iVar27 = *(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4);
        *(undefined4 *)(iVar27 + 0x57c) = *(undefined4 *)(iVar27 + 0x580);
        *(undefined4 *)(*(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4) + 0x580) = 0;
      }
      iVar27 = *(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4);
      if ((*(int *)(iVar27 + 0x580) != 0) &&
         (iVar27 = UObject::IsA(*(UObject **)(iVar27 + 0x580),&UCubemap::PrivateStaticClass),
         iVar27 != 0)) {
        *(undefined4 *)(*(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4) + 0x580) = 0;
      }
      thunk_FUN_103737b0();
    }
    thunk_FUN_1058eba0();
    while (pUVar10 = local_14, (int)local_14 < *(int *)(GObjObjects_exref + 4)) {
      iVar27 = *(int *)(*(int *)GObjObjects_exref + (int)local_14 * 4);
      if ((*(int *)(iVar27 + 0x578) != 0) &&
         (iVar27 = UObject::IsA(*(UObject **)(iVar27 + 0x578),&UCubemap::PrivateStaticClass),
         iVar27 != 0)) {
        *(undefined4 *)(*(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4) + 0x578) = 0;
      }
      iVar27 = *(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4);
      if ((*(int *)(iVar27 + 0x57c) != 0) &&
         (iVar27 = UObject::IsA(*(UObject **)(iVar27 + 0x57c),&UCubemap::PrivateStaticClass),
         iVar27 != 0)) {
        *(undefined4 *)(*(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4) + 0x57c) = 0;
      }
      iVar27 = *(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4);
      if ((*(int *)(iVar27 + 0x580) != 0) &&
         (iVar27 = UObject::IsA(*(UObject **)(iVar27 + 0x580),&UCubemap::PrivateStaticClass),
         iVar27 != 0)) {
        *(undefined4 *)(*(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4) + 0x580) = 0;
      }
      iVar27 = *(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4);
      if ((*(int *)(iVar27 + 0x584) != 0) &&
         (iVar27 = UObject::IsA(*(UObject **)(iVar27 + 0x584),&UCubemap::PrivateStaticClass),
         iVar27 != 0)) {
        *(undefined4 *)(*(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4) + 0x584) = 0;
      }
      iVar27 = *(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4);
      if ((*(int *)(iVar27 + 0x588) != 0) &&
         (iVar27 = UObject::IsA(*(UObject **)(iVar27 + 0x588),&UCubemap::PrivateStaticClass),
         iVar27 != 0)) {
        *(undefined4 *)(*(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4) + 0x588) = 0;
      }
      iVar27 = *(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4);
      if ((*(int *)(iVar27 + 0x58c) != 0) &&
         (iVar27 = UObject::IsA(*(UObject **)(iVar27 + 0x58c),&UCubemap::PrivateStaticClass),
         iVar27 != 0)) {
        *(undefined4 *)(*(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4) + 0x58c) = 0;
      }
      iVar27 = *(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4);
      if ((*(int *)(iVar27 + 0x590) != 0) &&
         (iVar27 = UObject::IsA(*(UObject **)(iVar27 + 0x590),&UCubemap::PrivateStaticClass),
         iVar27 != 0)) {
        *(undefined4 *)(*(int *)(*(int *)GObjObjects_exref + (int)pUVar10 * 4) + 0x590) = 0;
      }
      thunk_FUN_103737b0();
    }
  }
  pUVar10 = local_38;
  local_70 = CONCAT31(local_70._1_3_,0x1a);
  if ((*(int *)GL2DisableGCLobby_exref == 0) && (local_38 != (UObject *)0x0)) {
    pwVar29 = L"Entry";
    pUVar13 = UObject::GetOuter(*(UObject **)(local_8 + 0x19c));
    puVar7 = UObject::GetName(pUVar13);
    iVar27 = appStricmp(puVar7,(ushort *)pwVar29);
    if (iVar27 != 0) {
      pwVar29 = L"Entry";
      pUVar13 = UObject::GetOuter(pUVar10);
      puVar7 = UObject::GetName(pUVar13);
      iVar27 = appStricmp(puVar7,(ushort *)pwVar29);
      if (iVar27 != 0) {
        pwVar29 = L"SkyLevel";
        pUVar13 = UObject::GetOuter(pUVar10);
        puVar7 = UObject::GetName(pUVar13);
        iVar27 = appStricmp(puVar7,(ushort *)pwVar29);
        if (iVar27 != 0) {
          if (*(int *)GLog_exref != 0) {
            pUVar13 = UObject::GetOuter(pUVar10);
            UObject::GetName(pUVar13);
            pUVar13 = UObject::GetOuter(pUVar10);
            UObject::GetName(pUVar13);
            pUVar13 = UObject::GetOuter(*(UObject **)(local_8 + 0x19c));
            UObject::GetName(pUVar13);
            FOutputDevice::Logf2
                      (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
          }
          UGameEngine::DetachLevelWithAllSubLevel((UGameEngine *)local_8,(ULevel *)pUVar10);
        }
      }
    }
  }
  pUVar10 = local_8;
  local_70 = 0;
  if (*(int **)(local_8 + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(local_8 + 0x58) + 0x104))();
  }
  (**(code **)(**(int **)(pUVar10 + 0x19c) + 0x6c))();
  local_70 = CONCAT31(local_70._1_3_,0x1c);
  for (local_a0 = 0; local_a0 < 0x40; local_a0 = local_a0 + 1) {
    local_12c = 0;
    while (local_12c < 0x40) {
      iVar27 = *(int *)(local_8 + 0x19c);
      iVar28 = *(int *)(iVar27 + 0xc0);
      auStack_5a0[local_a0 * 2] = *(uint *)(iVar28 + 0x140 + local_a0 * 0x18);
      auStack_5a0[local_a0 * 2 + 1] = *(uint *)(iVar28 + 0x144 + local_a0 * 0x18);
      iVar28 = local_a0 * 0x40 + local_12c;
      if (local_a0 == local_12c) {
        *(undefined1 *)(iVar28 + 0x144 + iVar27) = 0;
        local_12c = local_12c + 1;
      }
      else {
        *(undefined1 *)(iVar28 + 0x144 + iVar27) = 0xff;
        local_12c = local_12c + 1;
      }
    }
  }
  for (param_3 = (undefined4 *)0x1; (int)param_3 < 0x40; param_3 = (undefined4 *)((int)param_3 + 1))
  {
    for (iVar27 = 0; local_60 = iVar27, iVar27 < 0x40; iVar27 = iVar27 + 1) {
      for (iVar28 = 0; local_d4 = iVar28, iVar28 < 0x40; iVar28 = iVar28 + 1) {
        pFVar22 = (FName *)(iVar27 * 0x40 + *(int *)(local_8 + 0x19c) + 0x144 + iVar28);
        if (((int)param_3 < (int)(uint)(byte)*pFVar22) &&
           (uVar19 = __allshl(),
           ((uint)uVar19 & auStack_5a0[iVar27 * 2]) != 0 ||
           ((uint)((ulonglong)uVar19 >> 0x20) & auStack_5a0[iVar27 * 2 + 1]) != 0)) {
          *pFVar22 = param_3._0_1_;
        }
      }
    }
    for (local_dc = 0; local_dc < 0x40; local_dc = local_dc + 1) {
      auStack_5a0[local_dc * 2 + 0x80] = 0;
      auStack_5a0[local_dc * 2 + 0x81] = 0;
    }
    for (iVar27 = 0; local_e4 = iVar27, iVar27 < 0x40; iVar27 = iVar27 + 1) {
      for (iVar28 = 0; local_68 = iVar28, iVar28 < 0x40; iVar28 = iVar28 + 1) {
        uVar19 = __allshl();
        if (((uint)uVar19 & auStack_5a0[iVar27 * 2]) != 0 ||
            ((uint)((ulonglong)uVar19 >> 0x20) & auStack_5a0[iVar27 * 2 + 1]) != 0) {
          auStack_5a0[iVar27 * 2 + 0x80] = auStack_5a0[iVar27 * 2 + 0x80] | auStack_5a0[iVar28 * 2];
          auStack_5a0[iVar27 * 2 + 0x81] =
               auStack_5a0[iVar27 * 2 + 0x81] | auStack_5a0[iVar28 * 2 + 1];
        }
      }
    }
    for (local_80 = 0; local_80 < 0x40; local_80 = local_80 + 1) {
      auStack_5a0[local_80 * 2] = auStack_5a0[local_80 * 2 + 0x80];
      auStack_5a0[local_80 * 2 + 1] = auStack_5a0[local_80 * 2 + 0x81];
    }
  }
  local_70 = 0;
  (**(code **)(**(int **)(local_8 + 0x19c) + 0x104))();
  local_fe0 = 0;
  _memset(local_fde,0,0x7fe);
  local_7e0 = L'\0';
  _memset(local_7de,0,0x1fe);
  FString::FString(local_18c,(ushort *)&DAT_10853d94);
  local_70 = CONCAT31((int3)(local_70 >> 8),0x1f);
  local_ec = 0;
  while (pUVar10 = local_8, iVar27 = local_ec, local_ec < *(int *)(param_1 + 0x2c)) {
    appStrcat(&local_fe0,(ushort *)&DAT_1085466c);
    iVar28 = iVar27 * 0xc;
    puVar7 = FString::operator*((FString *)(*(int *)(param_1 + 0x28) + iVar28));
    appStrcat(&local_fe0,puVar7);
    iVar24 = 0x100;
    pwVar29 = &local_7e0;
    pwVar20 = L"GAME=";
    puVar7 = FString::operator*((FString *)(*(int *)(param_1 + 0x28) + iVar28));
    Parse(puVar7,(ushort *)pwVar20,(ushort *)pwVar29,iVar24);
    local_ec = iVar27 + 1;
  }
  iVar27 = (**(code **)(**(int **)(local_8 + 0x19c) + 0xa0))();
  if ((iVar27 != 0) && (*(int *)(param_4 + 0x614) == 0)) {
    if (local_7e0 == L'\0') {
      pFVar6 = (FString *)(param_4 + 0x5fc);
      iVar27 = FString::Len(pFVar6);
      if (0 < iVar27) {
        uVar21 = 1;
        puVar7 = (ushort *)0x0;
        pUVar25 = local_c;
        pwVar29 = (wchar_t *)FString::operator*(pFVar6);
        goto LAB_10595aff;
      }
      pwVar29 = L"Entry";
      pUVar13 = UObject::GetOuter(*(UObject **)(pUVar10 + 0x19c));
      puVar7 = UObject::GetName(pUVar13);
      iVar27 = appStricmp(puVar7,(ushort *)pwVar29);
      if (iVar27 != 0) {
        pwVar29 = L"ini:Engine.Engine.DefaultGame";
        if (*(int *)(pUVar10 + 0x54) == 0) {
          pwVar29 = L"ini:Engine.Engine.DefaultServerGame";
        }
        uVar21 = 1;
        puVar7 = (ushort *)0x0;
        pUVar25 = local_c;
        goto LAB_10595aff;
      }
      this = &AGameInfo::PrivateStaticClass;
    }
    else {
      uVar21 = 1;
      puVar7 = (ushort *)0x0;
      pwVar29 = &local_7e0;
      pUVar25 = local_c;
LAB_10595aff:
      this = UObject::StaticLoadClass
                       (&AGameInfo::PrivateStaticClass,(UObject *)0x0,(ushort *)pwVar29,puVar7,
                        uVar21,pUVar25);
    }
    if (*(int *)GLog_exref != 0) {
      UObject::GetName((UObject *)this);
      FOutputDevice::Logf2
                (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2f8)
      ;
    }
    local_13c = 0;
    local_138 = 0;
    local_134 = 0;
    iVar27 = **(int **)(local_8 + 0x19c);
    puVar14 = (undefined4 *)FRotator::FRotator((FRotator *)&local_30,0,0,0);
    uStack_1014 = *puVar14;
    uStack_1020 = local_13c;
    uStack_101c = local_138;
    uStack_1018 = local_134;
    param_3 = &uStack_1024;
    uStack_1024 = local_134;
    FName::FName((FName *)&uStack_1024,0);
    iVar27 = (**(code **)(iVar27 + 0xc0))(this);
    *(int *)(param_4 + 0x614) = iVar27;
    if (iVar27 == 0) {
      appFailAssert("Info->Game!=NULL",".\\UnGame.cpp",0x8eb);
    }
  }
  pUVar10 = local_8;
  local_70._0_1_ = 0x21;
  local_70._1_3_ = 0;
  if ((*(int *)(local_8 + 0x54) == 0) ||
     (iVar27 = FURL::HasOption(param_1,(ushort *)L"Listen"), iVar27 != 0)) {
    if (*(int *)(pUVar10 + 0x1a8) != 0) {
      local_70 = CONCAT31(local_70._1_3_,0x22);
      if (param_2 != (int *)0x0) {
        appFailAssert("!Pending",".\\UnGame.cpp",0x8f6);
      }
      if (*(int **)(pUVar10 + 0x1a8) != (int *)0x0) {
        (**(code **)(**(int **)(pUVar10 + 0x1a8) + 0xc))();
      }
      *(undefined4 *)(pUVar10 + 0x1a8) = 0;
      local_70._0_1_ = 0x21;
      local_70._1_3_ = 0;
    }
    FString::FString((FString *)&local_30);
    local_70 = CONCAT31(local_70._1_3_,0x24);
    iVar27 = (**(code **)(**(int **)(pUVar10 + 0x19c) + 0x9c))();
    if (iVar27 == 0) {
      FString::operator*((FString *)&local_30);
      LocalizeError((ushort *)L"ServerListen",(ushort *)L"Engine",(ushort *)0x0);
      FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref)
      ;
    }
    local_70 = CONCAT31(local_70._1_3_,0x21);
    FString::~FString((FString *)&local_30);
  }
  pAVar8 = param_4;
  local_70 = 0x1e;
  param_4[0x558] = (ALevelInfo)0x2;
  iVar27 = *(int *)(pUVar10 + 0x54);
  if (((iVar27 != 0) && (*(int *)(iVar27 + 0x3c) != 0)) &&
     (iVar27 = *(int *)(**(int **)(iVar27 + 0x38) + 0x7c), iVar27 != 0)) {
    if (*(int *)(iVar27 + 0x54) == 0) {
      param_4[0x558] = (ALevelInfo)(*(int *)(iVar27 + 0x50) != 0);
    }
    else {
      param_4[0x558] = (ALevelInfo)0x2;
    }
  }
  if (GStatGraph != (FStatGraph *)0x0) {
    FStatGraph::Reset(GStatGraph);
  }
  local_70 = CONCAT31(local_70._1_3_,0x26);
  *(undefined4 *)(*(int *)(pUVar10 + 0x19c) + 0x138) = 0;
  if (((byte)pAVar8[0x554] & 2) != 0) {
    pAVar8 = ULevel::GetLevelInfo(*(ULevel **)(pUVar10 + 0x19c));
    *(double *)(*(int *)(pUVar10 + 0x19c) + 0x104) = (double)*(float *)(pAVar8 + 0x4bc);
    pUVar10 = local_8;
    goto code_r0x10596426;
  }
  UGameEngine::FixUpLevel((UGameEngine *)pUVar10);
  pAVar8 = ULevel::GetLevelInfo(*(ULevel **)(pUVar10 + 0x19c));
  if (((byte)pAVar8[0x55c] & 8) == 0) {
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(this_02,*(ushort **)GLog_exref);
      goto LAB_10595da6;
    }
  }
  else {
LAB_10595da6:
    if (*(int *)GLog_exref != 0) {
      fVar18 = (float10)(**(code **)(*(int *)pUVar10 + 0xa8))();
      appRound((float)fVar18);
      UObject::GetFullName(*(UObject **)(pUVar10 + 0x19c),(ushort *)0x0);
      uStack_1014 = 0x10595df1;
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x2f8);
    }
  }
  *(undefined8 *)(*(int *)(pUVar10 + 0x19c) + 0x104) = 0;
  pAVar8 = ULevel::GetLevelInfo(*(ULevel **)(pUVar10 + 0x19c));
  *(undefined4 *)(pAVar8 + 0x4bc) = 0;
  pAVar8 = ULevel::GetLevelInfo(*(ULevel **)(pUVar10 + 0x19c));
  pAVar15 = ALevelInfo::GetDefaultPhysicsVolume(pAVar8);
  *(uint *)(pAVar15 + 100) = *(uint *)(pAVar15 + 100) | 0x40;
  iVar27 = (**(code **)(**(int **)(pUVar10 + 0x19c) + 0xa0))();
  if (iVar27 == 0) {
    iVar27 = 0;
    while (piVar3 = *(int **)(pUVar10 + 0x19c), local_f4 = iVar27, iVar27 < piVar3[0xf]) {
      iVar28 = *(int *)(piVar3[0xe] + iVar27 * 4);
      if (iVar28 == 0) {
LAB_10595e8f:
        iVar27 = iVar27 + 1;
      }
      else {
        if ((*(byte *)(iVar28 + 100) & 0x50) != 0) {
          uVar2 = *(undefined1 *)(iVar28 + 0xc2);
          *(undefined1 *)(iVar28 + 0xc2) = *(undefined1 *)(iVar28 + 0xc1);
          *(undefined1 *)(iVar28 + 0xc1) = uVar2;
          goto LAB_10595e8f;
        }
        (**(code **)(*piVar3 + 0xac))();
        iVar27 = iVar27 + 1;
      }
    }
  }
  pAVar8 = ULevel::GetLevelInfo(*(ULevel **)(pUVar10 + 0x19c));
  if (((pAVar8 != (ALevelInfo *)0x0) && (*(int *)(pAVar8 + 0x1b8) != 0)) &&
     ((*(byte *)(*(int *)(pAVar8 + 0x1b8) + 100) & 0x80) != 0)) {
    *(undefined4 *)(pAVar8 + 0x1b8) = 0;
    ALevelInfo::GetDefaultPhysicsVolume(pAVar8);
  }
  pUVar10 = local_8;
  for (iVar27 = 0; local_fc = iVar27, iVar27 < *(int *)(*(int *)(pUVar10 + 0x19c) + 0x3c);
      iVar27 = iVar27 + 1) {
    piVar3 = (int *)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + iVar27 * 4);
    if (*piVar3 != 0) {
      *(undefined4 *)(*piVar3 + 0x108) = 0;
      iVar28 = *(int *)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + iVar27 * 4);
      for (local_90 = 0; local_90 < *(int *)(iVar28 + 0x160); local_90 = local_90 + 1) {
      }
      FArray::Empty((FArray *)(iVar28 + 0x15c),4,0);
      iVar28 = *(int *)(*(ULevel **)(pUVar10 + 0x19c) + 0x38);
      pAVar8 = ULevel::GetLevelInfo(*(ULevel **)(pUVar10 + 0x19c));
      pAVar15 = ALevelInfo::GetDefaultPhysicsVolume(pAVar8);
      *(APhysicsVolume **)(*(int *)(iVar28 + iVar27 * 4) + 0x1b8) = pAVar15;
    }
  }
  for (iVar27 = 0; pAVar8 = param_4, local_98 = iVar27,
      iVar27 < *(int *)(*(int *)(pUVar10 + 0x19c) + 0x3c); iVar27 = iVar27 + 1) {
    piVar3 = (int *)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + iVar27 * 4);
    if (*piVar3 != 0) {
      (**(code **)(*(int *)*piVar3 + 0x3c))();
    }
  }
  *(uint *)(param_4 + 0x554) = *(uint *)(param_4 + 0x554) | 2;
  *(uint *)(param_4 + 0x55c) = *(uint *)(param_4 + 0x55c) | 4;
  if (*(int *)(param_4 + 0x614) != 0) {
    FString::FString((FString *)&local_30,&local_fe0);
    local_70._0_1_ = 0x27;
    AGameInfo::eventInitGame(*(AGameInfo **)(pAVar8 + 0x614),(FString *)&local_30,local_18c);
    local_70 = CONCAT31(local_70._1_3_,0x26);
    FString::~FString((FString *)&local_30);
  }
  for (iVar27 = 0; local_104 = iVar27, iVar27 < *(int *)(*(int *)(pUVar10 + 0x19c) + 0x3c);
      iVar27 = iVar27 + 1) {
    piVar3 = (int *)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + iVar27 * 4);
    if ((*piVar3 != 0) && (pAVar4 = (AActor *)*piVar3, (*(uint *)(pAVar4 + 0x368) & 0x20000) == 0))
    {
      AActor::eventPreBeginPlay(pAVar4);
    }
  }
  for (iVar27 = 0; local_10c = iVar27, iVar27 < *(int *)(*(int *)(pUVar10 + 0x19c) + 0x3c);
      iVar27 = iVar27 + 1) {
    piVar3 = (int *)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + iVar27 * 4);
    if ((*piVar3 != 0) && (pAVar4 = (AActor *)*piVar3, (*(uint *)(pAVar4 + 0x368) & 0x20000) == 0))
    {
      AActor::eventBeginPlay(pAVar4);
    }
  }
  for (iVar27 = 0; local_110 = iVar27, iVar27 < *(int *)(*(int *)(pUVar10 + 0x19c) + 0x3c);
      iVar27 = iVar27 + 1) {
    piVar3 = (int *)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + iVar27 * 4);
    if ((*piVar3 != 0) && (piVar3 = (int *)*piVar3, (piVar3[0xda] & 0x20000U) == 0)) {
      (**(code **)(*piVar3 + 0x1bc))();
    }
  }
  for (iVar27 = 0; local_a8 = iVar27, iVar27 < *(int *)(*(int *)(pUVar10 + 0x19c) + 0x3c);
      iVar27 = iVar27 + 1) {
    piVar3 = (int *)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + iVar27 * 4);
    if ((*piVar3 != 0) && (piVar3 = (int *)*piVar3, (piVar3[0xda] & 0x20000U) == 0)) {
      (**(code **)(*piVar3 + 0x1c0))();
    }
  }
  for (iVar27 = 0; local_f0 = iVar27, iVar27 < *(int *)(*(int *)(pUVar10 + 0x19c) + 0x3c);
      iVar27 = iVar27 + 1) {
    piVar3 = (int *)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + iVar27 * 4);
    if ((*piVar3 != 0) && (pAVar4 = (AActor *)*piVar3, (*(uint *)(pAVar4 + 0x368) & 0x20000) == 0))
    {
      AActor::eventPostBeginPlay(pAVar4);
      piVar3 = (int *)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + iVar27 * 4);
      if (*piVar3 != 0) {
        (**(code **)(*(int *)*piVar3 + 0x1c4))();
      }
    }
  }
  for (iVar27 = 0; local_b0 = iVar27, iVar27 < *(int *)(*(int *)(pUVar10 + 0x19c) + 0x3c);
      iVar27 = iVar27 + 1) {
    piVar3 = (int *)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + iVar27 * 4);
    if ((*piVar3 != 0) && (pAVar4 = (AActor *)*piVar3, (*(uint *)(pAVar4 + 0x368) & 0x20000) == 0))
    {
      AActor::eventPostNetBeginPlay(pAVar4);
    }
  }
  for (iVar27 = 0; local_130 = iVar27, iVar27 < *(int *)(*(int *)(pUVar10 + 0x19c) + 0x3c);
      iVar27 = iVar27 + 1) {
    piVar3 = (int *)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + iVar27 * 4);
    if ((*piVar3 != 0) && (pAVar4 = (AActor *)*piVar3, (*(uint *)(pAVar4 + 0x368) & 0x20000) == 0))
    {
      AActor::eventSetInitialState(pAVar4);
    }
  }
  for (local_10 = 0; local_10 < *(int *)(*(int *)(pUVar10 + 0x19c) + 0x3c); local_10 = local_10 + 1)
  {
    iVar27 = local_10 * 4;
    if (*(int *)(iVar27 + *(int *)(*(int *)(pUVar10 + 0x19c) + 0x38)) != 0) {
      FName::FName((FName *)&param_3,0);
      pUVar10 = local_8;
      iVar28 = FName::operator!=((FName *)(*(int *)(*(int *)(*(int *)(local_8 + 0x19c) + 0x38) +
                                                   iVar27) + 0x1ec),(FName *)&param_3);
      if (iVar28 == 0) {
        pAVar4 = *(AActor **)(iVar27 + *(int *)(*(int *)(pUVar10 + 0x19c) + 0x38));
        if (((((byte)pAVar4[0x2f8] & 2) != 0) && ((*(uint *)(pAVar4 + 0x2e4) & 0x2000) != 0)) &&
           ((pAVar4[0x34] == (AActor)0x0 || (pAVar4[0x34] == (AActor)0x5)))) {
          AActor::FindBase(pAVar4);
        }
      }
      else {
        for (iVar27 = 0; local_b8 = iVar27, iVar27 < *(int *)(*(int *)(pUVar10 + 0x19c) + 0x3c);
            iVar27 = iVar27 + 1) {
          iVar28 = iVar27 * 4;
          iVar24 = *(int *)(*(int *)(pUVar10 + 0x19c) + 0x38);
          if (*(int *)(iVar24 + iVar28) != 0) {
            iVar1 = local_10 * 4;
            iVar24 = FName::operator==((FName *)(*(int *)(iVar24 + iVar28) + 0x10c),
                                       (FName *)(*(int *)(iVar24 + iVar1) + 0x1ec));
            if (iVar24 == 0) {
              pFVar22 = (FName *)&local_c;
              pFVar16 = (FName *)UObject::GetFName(*(UObject **)
                                                    (*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) +
                                                    iVar28));
              iVar28 = FName::operator==(pFVar16,pFVar22);
              if (iVar28 == 0) goto LAB_10596294;
            }
            local_30 = 0;
            local_2c = 0;
            local_28 = 0x3f800000;
            (**(code **)(**(int **)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + iVar1) + 0x16c))();
            pUVar10 = local_8;
            break;
          }
LAB_10596294:
        }
      }
      FName::FName((FName *)&local_24,0);
      pFVar22 = (FName *)&local_24;
      pFVar16 = (FName *)(**(code **)(**(int **)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) +
                                                local_10 * 4) + 0x310))();
      iVar27 = FName::operator!=(pFVar16,pFVar22);
      if (iVar27 != 0) {
        pUVar10 = local_8;
        for (iVar27 = 0; local_c0 = iVar27, iVar27 < *(int *)(*(int *)(pUVar10 + 0x19c) + 0x3c);
            iVar27 = iVar27 + 1) {
          for (iVar28 = 0; local_f8 = iVar28, iVar28 < 0xc; iVar28 = iVar28 + 1) {
            FName::FName((FName *)&local_20,0);
            pFVar22 = (FName *)&local_20;
            pFVar16 = (FName *)(**(code **)(**(int **)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) +
                                                      local_10 * 4) + 0x310))();
            iVar24 = FName::operator==(pFVar16,pFVar22);
            if (iVar24 != 0) break;
            iVar24 = *(int *)(*(int *)(pUVar10 + 0x19c) + 0x38);
            if (*(int *)(iVar24 + iVar27 * 4) != 0) {
              piVar3 = *(int **)(iVar24 + local_10 * 4);
              pFVar22 = (FName *)local_44;
              (**(code **)(**(int **)(iVar24 + iVar27 * 4) + 0x30c))();
              pFVar16 = (FName *)(**(code **)(*piVar3 + 0x310))();
              iVar24 = FName::operator==(pFVar16,pFVar22);
              pUVar10 = local_8;
              if (iVar24 != 0) {
                (**(code **)(**(int **)(*(int *)(*(int *)(local_8 + 0x19c) + 0x38) + local_10 * 4) +
                            0x314))();
                pUVar10 = local_8;
                break;
              }
            }
          }
        }
      }
    }
    pUVar10 = local_8;
  }
  *(uint *)(param_4 + 0x55c) = *(uint *)(param_4 + 0x55c) & 0xfffffffb;
code_r0x10596426:
  local_70._0_1_ = 0x29;
  local_70._1_3_ = 0;
  thunk_FUN_10369060();
  local_70 = CONCAT31(local_70._1_3_,0x2a);
  thunk_FUN_1037ae60();
  thunk_FUN_1037ae60();
  for (iVar27 = 2; iVar28 = *(int *)(pUVar10 + 0x19c), local_118 = iVar27,
      iVar27 < *(int *)(iVar28 + 0x3c); iVar27 = iVar27 + 1) {
    piVar3 = (int *)(*(int *)(iVar28 + 0x38) + iVar27 * 4);
    if (((*piVar3 != 0) && (iVar28 = *piVar3, (*(byte *)(iVar28 + 100) & 0x10) != 0)) &&
       ((*(uint *)(iVar28 + 0x74) & 0x1000) == 0)) {
      thunk_FUN_1037ae60();
    }
  }
  *(int *)(iVar28 + 0x13c) = local_18;
  for (iVar27 = 2; iVar28 = *(int *)(pUVar10 + 0x19c), local_c8 = iVar27,
      iVar27 < *(int *)(iVar28 + 0x3c); iVar27 = iVar27 + 1) {
    piVar3 = (int *)(*(int *)(iVar28 + 0x38) + iVar27 * 4);
    if (((*piVar3 != 0) && (iVar28 = *piVar3, (*(byte *)(iVar28 + 100) & 0x10) != 0)) &&
       ((*(uint *)(iVar28 + 0x74) & 0x1000) != 0)) {
      thunk_FUN_1037ae60();
    }
  }
  *(int *)(iVar28 + 0x138) = local_18;
  for (iVar27 = 2; local_100 = iVar27, iVar27 < *(int *)(*(int *)(pUVar10 + 0x19c) + 0x3c);
      iVar27 = iVar27 + 1) {
    piVar3 = (int *)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + iVar27 * 4);
    if ((*piVar3 != 0) && ((*(byte *)(*piVar3 + 100) & 0x10) == 0)) {
      thunk_FUN_1037ae60();
    }
  }
  thunk_FUN_1038ba40();
  thunk_FUN_103735f0();
  for (local_d0 = 0; local_d0 < local_18; local_d0 = local_d0 + 1) {
    *(undefined4 *)(*(int *)(*(int *)(pUVar10 + 0x19c) + 0x38) + local_d0 * 4) =
         *(undefined4 *)(local_1c + local_d0 * 4);
  }
  local_70 = CONCAT31(local_70._1_3_,0x29);
  thunk_FUN_10326630();
  local_70 = 0x2c;
  if (*(int *)(pUVar10 + 0x54) != 0) {
    (**(code **)(**(int **)(pUVar10 + 0x19c) + 0xa0))();
    FUN_1058a210();
    if (*(int **)(pUVar10 + 0x58) != (int *)0x0) {
      iVar27 = **(int **)(pUVar10 + 0x58);
      (**(code **)(iVar27 + 0x100))();
      (**(code **)(iVar27 + 0x70))();
    }
    for (iVar27 = 0; local_128 = iVar27, iVar27 < *(int *)(*(int *)(pUVar10 + 0x54) + 0x3c);
        iVar27 = iVar27 + 1) {
      iVar28 = *(int *)(*(int *)(*(int *)(pUVar10 + 0x54) + 0x38) + iVar27 * 4);
      (**(code **)(**(int **)(iVar28 + 0x78) + 0x80))();
      if (*(int *)(iVar28 + 0x7c) != 0) {
        (**(code **)(**(int **)(iVar28 + 0x7c) + 0x84))();
      }
    }
  }
  local_70 = 0x1e;
  (**(code **)(**(int **)(pUVar10 + 0x19c) + 0xf8))();
  local_70 = CONCAT31(local_70._1_3_,0x2e);
  FURL::operator=((FURL *)(pUVar10 + 0x1ac),param_1);
  local_70 = 0x1e;
  if (*(int *)GIsClient_exref != 0) {
    FURL::SaveURLConfig(param_1,(ushort *)L"DefaultPlayer",(ushort *)L"Name",(ushort *)L"User");
    FURL::SaveURLConfig(param_1,(ushort *)L"DefaultPlayer",(ushort *)L"Team",(ushort *)L"User");
    FURL::SaveURLConfig(param_1,(ushort *)L"DefaultPlayer",(ushort *)L"Class",(ushort *)L"User");
    FURL::SaveURLConfig(param_1,(ushort *)L"DefaultPlayer",(ushort *)L"Skin",(ushort *)L"User");
    FURL::SaveURLConfig(param_1,(ushort *)L"DefaultPlayer",(ushort *)L"Face",(ushort *)L"User");
    FURL::SaveURLConfig(param_1,(ushort *)L"DefaultPlayer",(ushort *)L"Voice",(ushort *)L"User");
    FURL::SaveURLConfig(param_1,(ushort *)L"DefaultPlayer",(ushort *)L"OverrideClass",
                        (ushort *)L"User");
  }
  UObject::DeleteLoadingProgress(pUVar10);
  UGameEngine::FinishLoadMap((UGameEngine *)pUVar10);
  uVar5 = *(undefined4 *)(pUVar10 + 0x19c);
  local_70 = local_70 & 0xffffff00;
  FString::~FString(local_18c);
  ExceptionList = local_78;
  return uVar5;
}


// ==== 10595d05 Catch@10595d05

void Catch_10595d05(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0xd4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10595d1c Catch@10595d1c

void Catch_10595d1c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CancelPendingForListen");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059673c Catch@1059673c

void Catch_1059673c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + -0x108);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x6c,&DAT_10914c48);
}


// ==== 10596753 Catch@10596753

void Catch_10596753(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"RememberURL");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059675d Catch@1059675d

void Catch_1059675d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x9c) = *(undefined4 *)(unaff_EBP + -0x110);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x9c,&DAT_10914c48);
}


// ==== 1059677a Catch@1059677a

void Catch_1059677a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ClientInit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10596784 Catch@10596784

void Catch_10596784(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0xdc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x74,&DAT_10914c48);
}


// ==== 1059679b Catch@1059679b

void Catch_1059679b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Rearrange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105967a5 Catch@105967a5

void Catch_105967a5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb4) = *(undefined4 *)(unaff_EBP + -0x130);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xb4,&DAT_10914c48);
}


// ==== 105967c2 Catch@105967c2

void Catch_105967c2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"BeginPlay");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105967cc Catch@105967cc

void Catch_105967cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x7c) = *(undefined4 *)(unaff_EBP + -0xe4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x7c,&DAT_10914c48);
}


// ==== 105967e3 Catch@105967e3

void Catch_105967e3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Listen");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105967ed Catch@105967ed

void Catch_105967ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x114);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 10596804 Catch@10596804

void Catch_10596804(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"InitGameInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059680e Catch@1059680e

void Catch_1059680e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + -0xec);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x18,&DAT_10914c48);
}


// ==== 10596825 Catch@10596825

void Catch_10596825(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SetupZoneTable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059682f Catch@1059682f

void Catch_1059682f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x128);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 10596846 Catch@10596846

void Catch_10596846(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Cleanup");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10596850 Catch@10596850

void Catch_10596850(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0xf4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_10914c48);
}


// ==== 10596867 Catch@10596867

void Catch_10596867(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"InitLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10596871 Catch@10596871

void Catch_10596871(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x124);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_10914c48);
}


// ==== 10596888 Catch@10596888

void Catch_10596888(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ActivatePending");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10596892 Catch@10596892

void Catch_10596892(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0xfc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x58,&DAT_10914c48);
}


// ==== 105968a9 Catch@105968a9

void Catch_105968a9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ProcessHubStack");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105968b3 Catch@105968b3

void Catch_105968b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + -300);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x60,&DAT_10914c48);
}


// ==== 105968ca Catch@105968ca

void Catch_105968ca(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"VerifyClasses");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105968d4 Catch@105968d4

void Catch_105968d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x104);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 105968eb Catch@105968eb

void Catch_105968eb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"LoadLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105968f5 Catch@105968f5

void Catch_105968f5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x134);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 1059690c Catch@1059690c

void Catch_1059690c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExitLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10596916 Catch@10596916

void Catch_10596916(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x10c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_10914c48);
}


// ==== 1059692d Catch@1059692d

void Catch_1059692d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DissociateViewports");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10596937 Catch@10596937

void Catch_10596937(void)

{
  undefined4 *unaff_EBP;
  
  *unaff_EBP = unaff_EBP[-0x36];
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP,&DAT_10914c48);
}


// ==== 1059694e Catch@1059694e

void Catch_1059694e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"NotifyLevelChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10596958 Catch@10596958

undefined * Catch_10596958(void)

{
  int iVar1;
  ushort *puVar2;
  int unaff_EBP;
  ushort *puVar3;
  undefined4 uVar4;
  
  UObject::EndLoad();
  puVar3 = *(ushort **)(unaff_EBP + -0xe0);
  FString::operator=(*(FString **)(unaff_EBP + 0x7c),puVar3);
  iVar1 = **(int **)(unaff_EBP + 100);
  uVar4 = 0x40c00000;
  puVar2 = LocalizeError((ushort *)L"UrlFailed",(ushort *)L"Core",(ushort *)0x0);
  (**(code **)(iVar1 + 0xac))(puVar2,puVar3,uVar4);
  *(undefined4 *)(unaff_EBP + -0xe8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  return &DAT_105969b7;
}


// ==== 105969be Catch@105969be

void Catch_105969be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0xf0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105969d5 Catch@105969d5

void Catch_105969d5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"VerifyPackages");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105969df Catch@105969df

void Catch_105969df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0xf8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105969f6 Catch@105969f6

void Catch_105969f6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"LoadingScreen");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10596a00 Catch@10596a00

void Catch_10596a00(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x100);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 10596a17 Catch@10596a17

void Catch_10596a17(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::LoadMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10597290 FUN_10597290

void FUN_10597290(float param_1)

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
  UGameEngine *in_ECX;
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
  pFVar8 = (FOutputDevice *)in_ECX;
  ExceptionList = &local_84;
  if (param_1 < 0.0) {
    ExceptionList = &local_84;
    FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
    pFVar8 = extraout_ECX;
  }
  if ((*(int *)(in_ECX + 0x54) != 0) && (*(int *)(*(int *)(in_ECX + 0x54) + 0x3c) == 0)) {
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(pFVar8,*(ushort **)GLog_exref);
    }
    appRequestExit(0);
    ExceptionList = local_84;
    return;
  }
  if (*(int *)(in_ECX + 0x32c) != 0) {
    iVar3 = FUN_107a6660();
    *(int *)(in_ECX + 0x334) = *(int *)(in_ECX + 0x334) + iVar3;
    if (*(int *)(in_ECX + 0x330) <= *(int *)(in_ECX + 0x334)) {
      L2ParamStack::L2ParamStack(local_1c,10);
      local_7c = CONCAT31(local_7c._1_3_,1);
      L2ParamStack::PushBack(local_1c,*(void **)(in_ECX + 0x330));
      L2ParamStack::PushBack(local_1c,*(void **)(in_ECX + 0x334));
      if ((*(int **)(in_ECX + 0x60) != (int *)0x0) &&
         (*(int *)(*(int *)(in_ECX + 0x68) + 0x38) == 5)) {
        (**(code **)(**(int **)(in_ECX + 0x60) + 0x40c))();
      }
      *(undefined4 *)(in_ECX + 0x32c) = 0;
      local_7c = local_7c & 0xffffff00;
      L2ParamStack::~L2ParamStack(local_1c);
    }
  }
  if (*(int *)(in_ECX + 0x60) != 0) {
    piVar6 = (int *)(DAT_10ddd7e0 + DAT_10dddadc * 4);
    uVar1 = rdtsc();
    *piVar6 = *piVar6 - (int)uVar1;
    (**(code **)(**(int **)(in_ECX + 0x60) + 0x68))();
    piVar6 = (int *)(DAT_10ddd7e0 + DAT_10dddadc * 4);
    uVar1 = rdtsc();
    *piVar6 = *piVar6 + (int)uVar1 + -0xc;
  }
  (**(code **)(**(int **)(in_ECX + 0x6c) + 0x68))();
  FNActorResourceLoader::LoadActorResourceArray(&GL2ActorResourceLoader,param_1);
  FNMonsterRaceMgr::Tick(&GL2MonsterRaceMgr,param_1);
  if (*(int *)GIsL2NetLogin_exref != 0) {
    UGameEngine::SetLastDeltaSeconds(in_ECX,param_1);
    fVar13 = UGameEngine::GetAverageDeltaSeconds(this_02);
    UGameEngine::ModifyGlobalClippingRange(in_ECX,fVar13);
  }
  UGameEngine::FadeUpdate(in_ECX,param_1);
  iVar3 = *(int *)(**(int **)(*(int *)(in_ECX + 0x54) + 0x38) + 0x3c);
  if (iVar3 != 0) {
    if (((*(int **)(in_ECX + 0x60) != (int *)0x0) && (*(int *)(iVar3 + 0x3bc) != 0)) &&
       (iVar3 = (**(code **)(**(int **)(in_ECX + 0x60) + 0x94))(), iVar3 != 0)) {
      local_c = param_1 * 1000.0;
      FL2ResueOrCast::Add((FL2ResueOrCast *)(iVar3 + 0x1d4),local_c);
      FL2ResueOrCast::Add((FL2ResueOrCast *)(iVar3 + 0x1e0),local_c);
      FL2ResueOrCast::Add((FL2ResueOrCast *)(iVar3 + 0x1ec),local_c);
      FL2ResueOrCast::Add((FL2ResueOrCast *)(iVar3 + 0x1f8),local_c);
    }
    local_7c = CONCAT31(local_7c._1_3_,2);
    if (((*(int *)GIsL2Seamless_exref != 0) && (DAT_10c51050 == 0)) &&
       (*(int *)GIsRequestingExit_exref == 0)) {
      local_24 = (double)CONCAT44((8.0 - *(float *)GL2SeamlessMaginotLine_exref) * 32768.0 * 0.0625,
                                  (undefined4)local_24);
      iVar3 = *(int *)(**(int **)(*(int *)(in_ECX + 0x54) + 0x38) + 0x3c);
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
      UGameEngine::CheckPurgeLevel();
      fStack_e8 = local_14;
      uStack_f0 = 0x105975c6;
      fStack_ec = fVar13;
      fStack_e4 = (float)uVar9;
      UGameEngine::GetSWMapXY();
      while (SVar4 = UGameEngine::AdjustTerrain(), SVar4 == 1) {
        local_8 = ABS(local_18 - DAT_10c596f4);
        if ((local_8 <= local_24._4_4_) &&
           (local_8 = ABS(local_14 - DAT_10c596f8), local_8 <= local_24._4_4_)) break;
        local_8 = (float)FUN_107a6660();
        local_c = (float)FUN_107a6660();
        if (local_8 != 0.0) {
          UGameEngine::LoadTeleportMap(in_ECX,(int)local_8 + local_34._4_4_,local_3c);
        }
        if (local_c != 0.0) {
          UGameEngine::LoadTeleportMap(in_ECX,local_34._4_4_,(int)local_c + local_3c);
        }
        if ((local_8 != 0.0) && (local_c != 0.0)) {
          UGameEngine::LoadTeleportMap(in_ECX,(int)local_8 + local_34._4_4_,(int)local_c + local_3c)
          ;
        }
      }
    }
    local_24 = (double)CONCAT44(**(int **)(*(int *)(in_ECX + 0x54) + 0x38),(undefined4)local_24);
    if (DAT_10c51058 != 0) {
      if (DAT_10c516cc == 0) {
        if (*(int *)GIsL2NetLogin_exref != 0) {
          fStack_e4 = *(float *)(**(int **)(*(int *)(in_ECX + 0x54) + 0x38) + 0x3c);
          fStack_e8 = 4.2887035e-29;
          (**(code **)(**(int **)(in_ECX + 0x19c) + 0xa8))();
        }
      }
      else if (DAT_10c516cc == 3) {
        if (*(int *)(in_ECX + 0x37c) == 0) {
          if (*(int *)GL2ReplayMode_exref == 0) {
            (**(code **)(*(int *)in_ECX + 0x2cc))();
          }
        }
        else {
          DAT_10c516cc = 2;
        }
      }
      else if (7 < DAT_10c516cc) {
        DAT_10c51058 = 0;
        local_38 = 0;
        if (*(int *)(in_ECX + 0x35c) != 0) {
          local_28 = 0;
          local_24 = 0.0;
          iVar3 = **(int **)(in_ECX + 0x19c);
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
            for (iVar3 = 0; local_68 = iVar3, iVar3 < *(int *)(in_ECX + 0x354); iVar3 = iVar3 + 1) {
              piVar6 = (int *)(iVar3 * 0x10 + *(int *)(in_ECX + 0x358));
              iVar10 = AInspector::eventInspection(this_00,*piVar6,piVar6[1],piVar6[2],piVar6[3]);
              *(int *)(local_38 + iVar3 * 4) = iVar10;
            }
          }
        }
        fStack_e4 = 4.288878e-29;
        (**(code **)(**(int **)(in_ECX + 0x60) + 0x180))();
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
      UGameEngine::FinishRemain(in_ECX);
    }
    local_7c = 0;
  }
  iVar3 = *(int *)(in_ECX + 0x54);
  if ((((iVar3 == 0) || (iVar10 = 1, *(int *)(iVar3 + 0x3c) != 1)) ||
      (*(int *)(in_ECX + 0x19c) == 0)) ||
     (iVar3 = (**(code **)(*(int *)**(undefined4 **)(iVar3 + 0x38) + 0x7c))(), iVar3 != 0)) {
    DAT_10b13f70 = 0;
    iVar10 = DAT_10b13f70;
  }
  else {
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x19c) + 0x108))();
    if (iVar3 == 0) {
      piVar6 = (int *)**(int **)(*(int *)(in_ECX + 0x54) + 0x38);
      if ((*(byte *)(piVar6 + 0x11) & 2) != 0) goto LAB_105979e6;
      iVar10 = 0;
      if ((DAT_10b13f70 == 0) || (*(int *)(*(int *)(in_ECX + 0x54) + 0x44) == 0)) goto LAB_10597a01;
    }
    else {
LAB_105979e6:
      if (DAT_10b13f70 != 0) goto LAB_10597a01;
      piVar6 = (int *)**(int **)(*(int *)(in_ECX + 0x54) + 0x38);
    }
    (**(code **)(*piVar6 + 0xa0))();
  }
LAB_10597a01:
  DAT_10b13f70 = iVar10;
  UObject::StaticTick();
  FMemCache::Tick(&GCache);
  local_7c = CONCAT31(local_7c._1_3_,4);
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  uVar1 = rdtsc();
  *(int *)(in_ECX + 0xc0) = *(int *)(in_ECX + 0xc0) - (int)uVar1;
  this = *(ULevel **)(in_ECX + 0x19c);
  if (this != (ULevel *)0x0) {
    if (*(int *)(in_ECX + 0x54) != 0) {
      local_24 = (double)param_1;
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
      local_34 = (double)param_1;
      local_24 = (double)CONCAT44(*(float *)(*(int *)(in_ECX + 0x54) + 0xa8) - 5.0,
                                  (undefined4)local_24);
      fVar12 = (float10)thunk_FUN_103704b0();
      if (((float10)local_34 <= (float10)1 / fVar12) || (*(int *)GIsBenchmarking_exref != 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x19c));
      pAVar7 = pAVar7 + 0x55c;
      *(uint *)pAVar7 = *(uint *)pAVar7 ^ (iVar3 * 2 ^ *(uint *)pAVar7) & 2;
      fVar13 = (float)*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4);
      if (*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4) < 0) {
        fVar13 = fVar13 + 4.2949673e+09;
      }
      fVar13 = fVar13 * (float)*(double *)GSecondsPerCycleQPF_exref;
      local_34 = (double)CONCAT44(fVar13,(undefined4)local_34);
      if (*(float *)(in_ECX + 0x254) == 0.0) {
        *(float *)(in_ECX + 0x254) = param_1;
      }
      else {
        if (*(float *)(in_ECX + 0x254) != 0.0) {
          fVar13 = *(float *)(in_ECX + 0x254) * 0.998 + fVar13 * 0.002;
        }
        *(float *)(in_ECX + 0x254) = fVar13;
      }
      *(float *)(in_ECX + 600) = param_1;
    }
    (**(code **)(**(int **)(in_ECX + 0x19c) + 0x70))();
  }
  piVar6 = *(int **)(in_ECX + 0x1a0);
  if ((piVar6 != (int *)0x0) && (piVar6 != *(int **)(in_ECX + 0x19c))) {
    (**(code **)(*piVar6 + 0x70))();
  }
  if (((*(int *)GL2SharedSky_exref != 0) &&
      (piVar6 = *(int **)(in_ECX + 0x1a4), piVar6 != (int *)0x0)) &&
     (piVar6 != *(int **)(in_ECX + 0x19c))) {
    (**(code **)(*piVar6 + 0x70))();
  }
  iVar3 = *(int *)(in_ECX + 0x54);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x3c) != 0)) &&
     (*(int *)(*(int *)(**(int **)(iVar3 + 0x38) + 0x3c) + 0xe4) != *(int *)(in_ECX + 0x19c))) {
    (**(code **)(**(int **)(*(int *)(**(int **)(iVar3 + 0x38) + 0x3c) + 0xe4) + 0x70))();
  }
  uVar1 = rdtsc();
  *(int *)(in_ECX + 0xc0) = *(int *)(in_ECX + 0xc0) + (int)uVar1 + -0xc;
  local_7c._0_1_ = 6;
  local_7c._1_3_ = 0;
  if (*(ULevel **)(in_ECX + 0x19c) != (ULevel *)0x0) {
    puVar15 = (ushort *)&DAT_10853d94;
    pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x19c));
    iVar3 = FString::operator!=((FString *)(pAVar7 + 0x628),puVar15);
    if (iVar3 != 0) {
      pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x19c));
      fVar13 = *(float *)(pAVar7 + 0x638) - param_1;
      local_24 = (double)CONCAT44(fVar13,(undefined4)local_24);
      *(float *)(pAVar7 + 0x638) = fVar13;
      if (fVar13 <= 0.0) {
        thunk_FUN_103f4170();
        local_7c = CONCAT31(local_7c._1_3_,7);
        pwVar16 = L"?RESTART";
        pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x19c));
        iVar3 = FString::operator==((FString *)(pAVar7 + 0x628),(ushort *)pwVar16);
        if (iVar3 == 0) {
          pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x19c));
          if (((byte)pAVar7[0x634] & 1) != 0) {
            thunk_FUN_103ee450();
            for (iVar3 = 0; local_44 = iVar3, iVar3 < *(int *)(*(int *)(in_ECX + 0x19c) + 0x3c);
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
          pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x19c));
          FString::operator*((FString *)(pAVar7 + 0x628));
          FOutputDevice::Logf2
                    (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
        }
        FString::FString((FString *)&local_18);
        local_7c._0_1_ = 9;
        EVar14 = 2;
        pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x19c));
        puVar15 = FString::operator*((FString *)(pAVar7 + 0x628));
        FURL::FURL(aFStack_114,(FURL *)(in_ECX + 0x1ac),puVar15,EVar14);
        local_7c._0_1_ = 9;
        (**(code **)(*(int *)in_ECX + 200))();
        puVar15 = (ushort *)&DAT_10853d94;
        pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x19c));
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
  iVar3 = *(int *)(in_ECX + 0x54);
  if (((iVar3 == 0) || (*(int *)(iVar3 + 0x3c) == 0)) ||
     (iVar3 = FString::operator!=((FString *)(**(int **)(iVar3 + 0x38) + 0x134),
                                  (ushort *)&DAT_10853d94), iVar3 == 0)) {
    local_7c._0_1_ = 0x12;
    local_7c._1_3_ = 0;
    if (*(int **)(in_ECX + 0x1a8) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x1a8) + 0x68))();
      iVar3 = FString::operator!=((FString *)(*(int *)(in_ECX + 0x1a8) + 0xd0),
                                  (ushort *)&DAT_10853d94);
      if (iVar3 == 0) {
        iVar3 = *(int *)(in_ECX + 0x1a8);
        if (((*(int *)(iVar3 + 0xc0) != 0) && (*(int *)(iVar3 + 0xcc) == 0)) &&
           (*(int *)(iVar3 + 0xc4) == 0)) {
          FString::FString((FString *)&local_18);
          local_7c = CONCAT31(local_7c._1_3_,0x17);
          (**(code **)(*(int *)in_ECX + 0xcc))();
          iVar3 = FString::operator!=((FString *)&local_18,(ushort *)&DAT_10853d94);
          if (iVar3 == 0) {
            if (*(int *)(*(int *)(in_ECX + 0x1a8) + 200) == 0) {
              UGameEngine::AuthorizeClient(in_ECX,*(ULevel **)(in_ECX + 0x19c));
              pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x19c));
              pAVar7[0x5cc] = (ALevelInfo)0x3;
              pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX + 0x1a0));
              pAVar7[0x5cc] = (ALevelInfo)0x3;
              if (*(int **)(in_ECX + 0x54) != (int *)0x0) {
                (**(code **)(**(int **)(in_ECX + 0x54) + 0x80))();
              }
              (**(code **)(**(int **)(in_ECX + 0x1a8) + 0x70))();
              *(undefined4 *)(*(int *)(in_ECX + 0x1a8) + 0x70) = 0;
              *(undefined4 *)(*(int *)(in_ECX + 0x1a8) + 0xbc) = 0;
            }
          }
          else {
            iVar3 = *(int *)in_ECX;
            FString::operator*((FString *)&local_18);
            LocalizeError((ushort *)L"ConnectionFailed",(ushort *)L"Engine",(ushort *)0x0);
            (**(code **)(iVar3 + 0xac))();
          }
          local_7c = 0x19;
          if (*(int **)(in_ECX + 0x1a8) != (int *)0x0) {
            (**(code **)(**(int **)(in_ECX + 0x1a8) + 0xc))();
          }
          *(undefined4 *)(in_ECX + 0x1a8) = 0;
          local_7c = 0x12;
          FString::~FString((FString *)&local_18);
        }
      }
      else {
        local_7c._0_1_ = 0x13;
        iVar3 = *(int *)in_ECX;
        FString::operator*((FString *)(*(int *)(in_ECX + 0x1a8) + 0xd0));
        LocalizeError((ushort *)L"ConnectionFailed",(ushort *)L"Engine",(ushort *)0x0);
        (**(code **)(iVar3 + 0xac))();
        if (*(int *)GLog_exref != 0) {
          this_01 = (FString *)
                    FURL::String((FURL *)(*(int *)(in_ECX + 0x1a8) + 0x78),(int)&local_18);
          local_7c._0_1_ = 0x14;
          FString::operator*((FString *)(*(int *)(in_ECX + 0x1a8) + 0xd0));
          FString::operator*(this_01);
          fStack_e4 = 4.2895524e-29;
          LocalizeError((ushort *)L"Pending",(ushort *)L"Engine",(ushort *)0x0);
          fStack_e4 = 4.2895597e-29;
          FOutputDevice::Logf2(this_04,*(EName *)GLog_exref,(ushort *)0x2f8);
          local_7c._0_1_ = 0x13;
          FString::~FString((FString *)&local_18);
        }
        if (*(int **)(in_ECX + 0x1a8) != (int *)0x0) {
          (**(code **)(**(int **)(in_ECX + 0x1a8) + 0xc))();
        }
        *(undefined4 *)(in_ECX + 0x1a8) = 0;
      }
    }
    local_7c = 0x1c;
    iVar3 = 0;
    if (*(int *)(in_ECX + 0x54) != 0) {
      uVar1 = rdtsc();
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x80))();
      uVar2 = rdtsc();
      iVar3 = (-0xc - (int)uVar1) + (int)uVar2;
    }
    *(int *)(in_ECX + 0xc4) = iVar3;
    local_7c = 0;
    uVar1 = rdtsc();
    *(undefined1 **)(in_ECX + 0xbc) = local_40 + (int)uVar1 + -0xc;
    uVar11 = *(uint *)GTicks_exref;
    *(int *)GTicks_exref = *(int *)GTicks_exref + 1;
    *(uint *)(GTicks_exref + 4) = *(int *)(GTicks_exref + 4) + (uint)(0xfffffffe < uVar11);
    if (*(int *)(*(int *)(in_ECX + 0x6c) + 0x144) == 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x168) = 0;
    }
    if ((*(int *)GIsL2Console_exref != 0) && (*(int **)(in_ECX + 0x68) != (int *)0x0)) {
      (**(code **)(**(int **)(in_ECX + 0x68) + 0x68))();
    }
    if ((*(int *)GL2UseReplayManager_exref != 0) &&
       (*(FL2ReplayManager **)(in_ECX + 0x198) != (FL2ReplayManager *)0x0)) {
      FL2ReplayManager::Tick(*(FL2ReplayManager **)(in_ECX + 0x198),param_1);
    }
    UGameEngine::TickCommandMacro(in_ECX,param_1);
    if (*(FLandMark **)(in_ECX + 0x2fc) == (FLandMark *)0x0) {
      ExceptionList = local_84;
      return;
    }
    FLandMark::Update(*(FLandMark **)(in_ECX + 0x2fc),param_1);
    ExceptionList = local_84;
    return;
  }
  iVar3 = **(int **)(*(int *)(in_ECX + 0x54) + 0x38);
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
  FURL::FURL(aFStack_114,(FURL *)(in_ECX + 0x1ac),puVar15,EVar14);
  local_7c._0_1_ = 0xf;
  (**(code **)(*(int *)in_ECX + 200))();
  FStringNoInit::operator=((FStringNoInit *)(iVar3 + 0x134),(ushort *)&DAT_10853d94);
  local_7c._0_1_ = 0xd;
  FString::~FString((FString *)&local_18);
  local_7c = CONCAT31(local_7c._1_3_,0xc);
LAB_10597da8:
  thunk_FUN_103f4120();
  ExceptionList = local_84;
  return;
}


// ==== 105979b6 Catch@105979b6

void Catch_105979b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x18,&DAT_10914c48);
}


// ==== 105979ca Catch@105979ca

void Catch_105979ca(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2Seamless");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105982b6 Catch@105982b6

void Catch_105982b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105982ca Catch@105982ca

void Catch_105982ca(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"PendingFailed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10598429 Catch@10598429

void Catch_10598429(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1059843d Catch@1059843d

void Catch_1059843d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"KillPending");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10598447 Catch@10598447

void Catch_10598447(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1059845b Catch@1059845b

void Catch_1059845b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AttemptLoadPending");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10598465 Catch@10598465

void Catch_10598465(void)

{
  undefined4 *unaff_EBP;
  
  *unaff_EBP = unaff_EBP[-0xe];
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP,&DAT_10914c48);
}


// ==== 10598479 Catch@10598479

void Catch_10598479(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ClientTick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10598483 Catch@10598483

void Catch_10598483(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_10914c48);
}


// ==== 10598497 Catch@10598497

void Catch_10598497(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TickPending");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105984a1 Catch@105984a1

void Catch_105984a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x1c,&DAT_10914c48);
}


// ==== 105984b5 Catch@105984b5

void Catch_105984b5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ClientTravel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105984bf Catch@105984bf

void Catch_105984bf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 105984d3 Catch@105984d3

void Catch_105984d3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ServerTravel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105984dd Catch@105984dd

void Catch_105984dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_10914c48);
}


// ==== 105984f1 Catch@105984f1

void Catch_105984f1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TickLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105984fb Catch@105984fb

void Catch_105984fb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 4) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 4,&DAT_10914c48);
}


// ==== 1059850f Catch@1059850f

void Catch_1059850f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105989c0 FUN_105989c0

void FUN_105989c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = param_1;
  *(undefined4 *)(in_ECX + 0xc) = param_2;
  *(undefined4 *)(in_ECX + 0x10) = param_3;
  *(undefined4 *)(in_ECX + 0x14) = param_4;
  *(undefined4 *)(in_ECX + 0x20) = param_7;
  *(undefined4 *)(in_ECX + 0x24) = param_8;
  *(undefined4 *)(in_ECX + 0x18) = param_5;
  *(undefined4 *)(in_ECX + 0x1c) = param_6;
  return;
}


// ==== 10598a10 FUN_10598a10

void FUN_10598a10(void)

{
  return;
}


// ==== 10598a30 FUN_10598a30

void FUN_10598a30(ULevel *param_1,ULevel *param_2,FVector *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081e410;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ULevel::AddSWLevel(param_1,param_2,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 10598a82 Catch@10598a82

void Catch_10598a82(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10598a96 Catch@10598a96

void Catch_10598a96(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::AttachLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10598ae0 FUN_10598ae0

void FUN_10598ae0(void)

{
  FArchive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081e429;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FArchive::~FArchive(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10598b30 FUN_10598b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10598b30(ULevel *param_1)

{
  int iVar1;
  ATerrainInfo *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081e440;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  do {
    iVar1 = ULevel::EndLoadSWLevel(param_1,0);
  } while (iVar1 != 0);
  this = ULevel::GetTerrainInfo(param_1);
  if (this == (ATerrainInfo *)0x0) {
    appFailAssert("pTInfo!=NULL",".\\UnGameSW.cpp",0x81a);
  }
  ATerrainInfo::SWUpdate(this,0.0,0,0,0,0,0);
  _DAT_10c596f0 = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10598bcc Catch@10598bcc

void Catch_10598bcc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10598be0 Catch@10598be0

void Catch_10598be0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::FinishLoadTeleportMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10598c30 FUN_10598c30

undefined4 FUN_10598c30(undefined4 param_1,undefined4 param_2)

{
  if ((DAT_10b13f74 == -1) && (DAT_10b13f7c == -1)) {
    DAT_10b13f78 = param_1;
    DAT_10b13f74 = param_1;
    DAT_10b13f80 = param_2;
    DAT_10b13f7c = param_2;
    return 1;
  }
  return 0;
}


// ==== 10598cc0 FUN_10598cc0

void FUN_10598cc0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081e459;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10598d90 FUN_10598d90

undefined4 FUN_10598d90(int param_1,int param_2)

{
  int in_ECX;
  
  if ((param_1 < 0) || (99 < param_1)) {
    appFailAssert("x >= 0 && x < MAX_X",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnGame.h",0x37d);
  }
  if ((param_2 < 0) || (99 < param_2)) {
    appFailAssert("y >= 0 && y < MAX_Y",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnGame.h",0x37e);
  }
  return *(undefined4 *)(in_ECX + (param_1 * 100 + param_2) * 4);
}


// ==== 10598e10 FUN_10598e10

void FUN_10598e10(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar4 = in_ECX[7] << 4;
  for (iVar1 = in_ECX[4] << 4; iVar1 < (in_ECX[5] + 1) * 0x10; iVar1 = iVar1 + 1) {
    for (iVar3 = 0xf; 3 < iVar3; iVar3 = iVar3 + -1) {
      iVar2 = iVar4 * 0x10 + iVar3;
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x2204) + iVar2 * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x2204) + -0x10 + iVar2 * 4);
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = in_ECX[7] << 4;
  for (iVar1 = in_ECX[4] << 4; iVar1 < (in_ECX[5] + 1) * 0x10; iVar1 = iVar1 + 1) {
    iVar3 = in_ECX[2];
    local_1c = 0;
    for (; iVar3 <= in_ECX[3]; iVar3 = iVar3 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x2204) + (iVar4 * 0x10 + local_1c) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x2208) + (iVar1 * 0x10 + iVar3) * 4);
      local_1c = local_1c + 1;
    }
    iVar4 = iVar4 + 1;
  }
  iVar1 = in_ECX[7];
  for (local_20 = in_ECX[4]; local_20 <= in_ECX[5]; local_20 = local_20 + 1) {
    for (iVar4 = 0xb; -1 < iVar4; iVar4 = iVar4 + -1) {
      iVar3 = iVar1 * 0x10 + iVar4;
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x20f4) + 0x10 + iVar3 * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x20f4) + iVar3 * 4);
    }
    iVar1 = iVar1 + 1;
  }
  local_18 = in_ECX[7];
  for (iVar1 = in_ECX[4]; iVar1 <= in_ECX[5]; iVar1 = iVar1 + 1) {
    iVar3 = 0;
    for (iVar4 = in_ECX[2]; iVar4 <= in_ECX[3]; iVar4 = iVar4 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x20f4) + (local_18 * 0x10 + iVar3) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x2220) + (iVar1 * 0x10 + iVar4) * 4);
      iVar3 = iVar3 + 1;
    }
    local_18 = local_18 + 1;
  }
  iVar4 = in_ECX[7] << 4;
  for (iVar1 = in_ECX[4] << 4; iVar1 < (in_ECX[5] + 1) * 0x10; iVar1 = iVar1 + 1) {
    for (iVar3 = 7; 1 < iVar3; iVar3 = iVar3 + -1) {
      iVar2 = iVar3 + iVar4 * 8;
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x219c) + iVar2 * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x219c) + -8 + iVar2 * 4);
    }
    iVar4 = iVar4 + 1;
  }
  local_18 = in_ECX[7] << 4;
  for (iVar1 = in_ECX[4] << 4; iVar1 < (in_ECX[5] + 1) * 0x10; iVar1 = iVar1 + 1) {
    iVar3 = 0;
    for (iVar4 = in_ECX[2] / 2; iVar4 <= in_ECX[3] / 2; iVar4 = iVar4 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x219c) + (iVar3 + local_18 * 8) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x225c) + (iVar4 + iVar1 * 8) * 4);
      iVar3 = iVar3 + 1;
    }
    local_18 = local_18 + 1;
  }
  iVar4 = in_ECX[7] << 4;
  for (iVar1 = in_ECX[4] << 4; iVar1 < (in_ECX[5] + 1) * 0x10; iVar1 = iVar1 + 1) {
    for (iVar3 = 7; 1 < iVar3; iVar3 = iVar3 + -1) {
      iVar2 = iVar3 + iVar4 * 8;
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x21a8) + iVar2 * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x21a8) + -8 + iVar2 * 4);
    }
    iVar4 = iVar4 + 1;
  }
  local_18 = in_ECX[7] << 4;
  for (iVar1 = in_ECX[4] << 4; iVar1 < (in_ECX[5] + 1) * 0x10; iVar1 = iVar1 + 1) {
    iVar3 = 0;
    for (iVar4 = in_ECX[2] / 2; iVar4 <= in_ECX[3] / 2; iVar4 = iVar4 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x21a8) + (iVar3 + local_18 * 8) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x2268) + (iVar4 + iVar1 * 8) * 4);
      iVar3 = iVar3 + 1;
    }
    local_18 = local_18 + 1;
  }
  return;
}


// ==== 10599163 Catch@10599163

void Catch_10599163(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 10599177 Catch@10599177

void Catch_10599177(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShiftTerrainXP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10599280 FUN_10599280

void FUN_10599280(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar4 = in_ECX[7] << 4;
  for (iVar1 = in_ECX[4] << 4; iVar1 < (in_ECX[5] + 1) * 0x10; iVar1 = iVar1 + 1) {
    for (iVar3 = 0; iVar3 < 0xc; iVar3 = iVar3 + 1) {
      iVar2 = iVar4 * 0x10 + iVar3;
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x2204) + iVar2 * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x2204) + 0x10 + iVar2 * 4);
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = in_ECX[7] << 4;
  for (iVar1 = in_ECX[4] << 4; iVar1 < (in_ECX[5] + 1) * 0x10; iVar1 = iVar1 + 1) {
    iVar3 = in_ECX[2];
    local_1c = 0xc;
    for (; iVar3 <= in_ECX[3]; iVar3 = iVar3 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x2204) + (iVar4 * 0x10 + local_1c) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x2208) + (iVar1 * 0x10 + iVar3) * 4);
      local_1c = local_1c + 1;
    }
    iVar4 = iVar4 + 1;
  }
  iVar1 = in_ECX[7];
  for (local_20 = in_ECX[4]; local_20 <= in_ECX[5]; local_20 = local_20 + 1) {
    for (iVar4 = 0; iVar4 < 0xc; iVar4 = iVar4 + 1) {
      iVar3 = iVar1 * 0x10 + iVar4;
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x20f4) + iVar3 * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x20f4) + 0x10 + iVar3 * 4);
    }
    iVar1 = iVar1 + 1;
  }
  local_18 = in_ECX[7];
  for (iVar1 = in_ECX[4]; iVar1 <= in_ECX[5]; iVar1 = iVar1 + 1) {
    iVar3 = 0xc;
    for (iVar4 = in_ECX[2]; iVar4 <= in_ECX[3]; iVar4 = iVar4 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x20f4) + (local_18 * 0x10 + iVar3) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x2220) + (iVar1 * 0x10 + iVar4) * 4);
      iVar3 = iVar3 + 1;
    }
    local_18 = local_18 + 1;
  }
  iVar4 = in_ECX[7] << 4;
  for (iVar1 = in_ECX[4] << 4; iVar1 < (in_ECX[5] + 1) * 0x10; iVar1 = iVar1 + 1) {
    for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
      iVar2 = iVar3 + iVar4 * 8;
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x219c) + iVar2 * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x219c) + 8 + iVar2 * 4);
    }
    iVar4 = iVar4 + 1;
  }
  local_18 = in_ECX[7] << 4;
  for (iVar1 = in_ECX[4] << 4; iVar1 < (in_ECX[5] + 1) * 0x10; iVar1 = iVar1 + 1) {
    iVar3 = 6;
    for (iVar4 = in_ECX[2] / 2; iVar4 <= in_ECX[3] / 2; iVar4 = iVar4 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x219c) + (iVar3 + local_18 * 8) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x225c) + (iVar4 + iVar1 * 8) * 4);
      iVar3 = iVar3 + 1;
    }
    local_18 = local_18 + 1;
  }
  iVar4 = in_ECX[7] << 4;
  for (iVar1 = in_ECX[4] << 4; iVar1 < (in_ECX[5] + 1) * 0x10; iVar1 = iVar1 + 1) {
    for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
      iVar2 = iVar3 + iVar4 * 8;
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x21a8) + iVar2 * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x21a8) + 8 + iVar2 * 4);
    }
    iVar4 = iVar4 + 1;
  }
  local_18 = in_ECX[7] << 4;
  for (iVar1 = in_ECX[4] << 4; iVar1 < (in_ECX[5] + 1) * 0x10; iVar1 = iVar1 + 1) {
    iVar3 = 6;
    for (iVar4 = in_ECX[2] / 2; iVar4 <= in_ECX[3] / 2; iVar4 = iVar4 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x21a8) + (iVar3 + local_18 * 8) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x2268) + (iVar4 + iVar1 * 8) * 4);
      iVar3 = iVar3 + 1;
    }
    local_18 = local_18 + 1;
  }
  return;
}


// ==== 105995d5 Catch@105995d5

void Catch_105995d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 105995e9 Catch@105995e9

void Catch_105995e9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShiftTerrainXM");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105996f0 FUN_105996f0

void FUN_105996f0(void)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  int local_20;
  int local_1c;
  int local_18;
  
  for (iVar2 = 0x100; 0x3f < iVar2; iVar2 = iVar2 + -1) {
    iVar1 = in_ECX[6];
    for (local_20 = in_ECX[2]; local_20 <= in_ECX[3]; local_20 = local_20 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x2204) + (iVar2 * 0x10 + iVar1) * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x2204) + ((iVar2 + -0x40) * 0x10 + iVar1) * 4);
      iVar1 = iVar1 + 1;
    }
  }
  local_1c = 0;
  for (iVar2 = in_ECX[4] << 4; iVar2 < (in_ECX[5] + 1) * 0x10; iVar2 = iVar2 + 1) {
    local_18 = in_ECX[6];
    for (iVar1 = in_ECX[2]; iVar1 <= in_ECX[3]; iVar1 = iVar1 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x2204) + (local_1c * 0x10 + local_18) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x2208) + (iVar2 * 0x10 + iVar1) * 4);
      local_18 = local_18 + 1;
    }
    local_1c = local_1c + 1;
  }
  for (iVar2 = 0xf; 3 < iVar2; iVar2 = iVar2 + -1) {
    iVar1 = in_ECX[6];
    for (local_20 = in_ECX[2]; local_20 <= in_ECX[3]; local_20 = local_20 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x20f4) + (iVar2 * 0x10 + iVar1) * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x20f4) + ((iVar2 + -4) * 0x10 + iVar1) * 4);
      iVar1 = iVar1 + 1;
    }
  }
  iVar2 = in_ECX[4];
  local_2c = 0;
  for (; iVar2 <= in_ECX[5]; iVar2 = iVar2 + 1) {
    iVar3 = in_ECX[6];
    for (iVar1 = in_ECX[2]; iVar1 <= in_ECX[3]; iVar1 = iVar1 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x20f4) + (local_2c * 0x10 + iVar3) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x2220) + (iVar2 * 0x10 + iVar1) * 4);
      iVar3 = iVar3 + 1;
    }
    local_2c = local_2c + 1;
  }
  for (iVar2 = 0xff; 0x3f < iVar2; iVar2 = iVar2 + -1) {
    iVar3 = in_ECX[6] / 2;
    for (iVar1 = in_ECX[2] / 2; iVar1 <= in_ECX[3] / 2; iVar1 = iVar1 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x219c) + (iVar3 + iVar2 * 8) * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x219c) + (iVar3 + -0x200 + iVar2 * 8) * 4);
      iVar3 = iVar3 + 1;
    }
  }
  local_1c = 0;
  for (iVar2 = in_ECX[4] << 4; iVar2 < (in_ECX[5] + 1) * 0x10; iVar2 = iVar2 + 1) {
    iVar3 = in_ECX[6] / 2;
    for (iVar1 = in_ECX[2] / 2; iVar1 <= in_ECX[3] / 2; iVar1 = iVar1 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x219c) + (iVar3 + local_1c * 8) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x225c) + (iVar1 + iVar2 * 8) * 4);
      iVar3 = iVar3 + 1;
    }
    local_1c = local_1c + 1;
  }
  for (iVar2 = 0xff; 0x3f < iVar2; iVar2 = iVar2 + -1) {
    iVar3 = in_ECX[6] / 2;
    for (iVar1 = in_ECX[2] / 2; iVar1 <= in_ECX[3] / 2; iVar1 = iVar1 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x21a8) + (iVar3 + iVar2 * 8) * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x21a8) + (iVar3 + -0x200 + iVar2 * 8) * 4);
      iVar3 = iVar3 + 1;
    }
  }
  local_1c = 0;
  for (iVar2 = in_ECX[4] << 4; iVar2 < (in_ECX[5] + 1) * 0x10; iVar2 = iVar2 + 1) {
    iVar3 = in_ECX[6] / 2;
    for (iVar1 = in_ECX[2] / 2; iVar1 <= in_ECX[3] / 2; iVar1 = iVar1 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x21a8) + (iVar3 + local_1c * 8) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x2268) + (iVar1 + iVar2 * 8) * 4);
      iVar3 = iVar3 + 1;
    }
    local_1c = local_1c + 1;
  }
  return;
}


// ==== 10599a73 Catch@10599a73

void Catch_10599a73(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 10599a87 Catch@10599a87

void Catch_10599a87(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShiftTerrainYP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10599ba0 FUN_10599ba0

void FUN_10599ba0(void)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  int local_20;
  int local_1c;
  int local_18;
  
  for (iVar2 = 0; iVar2 < 0xc0; iVar2 = iVar2 + 1) {
    iVar1 = in_ECX[6];
    for (local_20 = in_ECX[2]; local_20 <= in_ECX[3]; local_20 = local_20 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x2204) + (iVar2 * 0x10 + iVar1) * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x2204) + ((iVar2 + 0x40) * 0x10 + iVar1) * 4);
      iVar1 = iVar1 + 1;
    }
  }
  local_1c = 0xc0;
  for (iVar2 = in_ECX[4] << 4; iVar2 < (in_ECX[5] + 1) * 0x10; iVar2 = iVar2 + 1) {
    local_18 = in_ECX[6];
    for (iVar1 = in_ECX[2]; iVar1 <= in_ECX[3]; iVar1 = iVar1 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x2204) + (local_1c * 0x10 + local_18) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x2208) + (iVar2 * 0x10 + iVar1) * 4);
      local_18 = local_18 + 1;
    }
    local_1c = local_1c + 1;
  }
  for (iVar2 = 0; iVar2 < 0xc; iVar2 = iVar2 + 1) {
    iVar1 = in_ECX[6];
    for (local_20 = in_ECX[2]; local_20 <= in_ECX[3]; local_20 = local_20 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x20f4) + (iVar2 * 0x10 + iVar1) * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x20f4) + ((iVar2 + 4) * 0x10 + iVar1) * 4);
      iVar1 = iVar1 + 1;
    }
  }
  iVar2 = in_ECX[4];
  local_2c = 0xc;
  for (; iVar2 <= in_ECX[5]; iVar2 = iVar2 + 1) {
    iVar3 = in_ECX[6];
    for (iVar1 = in_ECX[2]; iVar1 <= in_ECX[3]; iVar1 = iVar1 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x20f4) + (local_2c * 0x10 + iVar3) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x2220) + (iVar2 * 0x10 + iVar1) * 4);
      iVar3 = iVar3 + 1;
    }
    local_2c = local_2c + 1;
  }
  for (iVar2 = 0; iVar2 < 0xc0; iVar2 = iVar2 + 1) {
    iVar3 = in_ECX[6] / 2;
    for (iVar1 = in_ECX[2] / 2; iVar1 <= in_ECX[3] / 2; iVar1 = iVar1 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x219c) + (iVar3 + iVar2 * 8) * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x219c) + (iVar3 + 0x200 + iVar2 * 8) * 4);
      iVar3 = iVar3 + 1;
    }
  }
  local_1c = 0xc0;
  for (iVar2 = in_ECX[4] << 4; iVar2 < (in_ECX[5] + 1) * 0x10; iVar2 = iVar2 + 1) {
    iVar3 = in_ECX[6] / 2;
    for (iVar1 = in_ECX[2] / 2; iVar1 <= in_ECX[3] / 2; iVar1 = iVar1 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x219c) + (iVar3 + local_1c * 8) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x225c) + (iVar1 + iVar2 * 8) * 4);
      iVar3 = iVar3 + 1;
    }
    local_1c = local_1c + 1;
  }
  for (iVar2 = 0; iVar2 < 0xc0; iVar2 = iVar2 + 1) {
    iVar3 = in_ECX[6] / 2;
    for (iVar1 = in_ECX[2] / 2; iVar1 <= in_ECX[3] / 2; iVar1 = iVar1 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x21a8) + (iVar3 + iVar2 * 8) * 4) =
           *(undefined4 *)(*(int *)(in_ECX[1] + 0x21a8) + (iVar3 + 0x200 + iVar2 * 8) * 4);
      iVar3 = iVar3 + 1;
    }
  }
  local_1c = 0xc0;
  for (iVar2 = in_ECX[4] << 4; iVar2 < (in_ECX[5] + 1) * 0x10; iVar2 = iVar2 + 1) {
    iVar3 = in_ECX[6] / 2;
    for (iVar1 = in_ECX[2] / 2; iVar1 <= in_ECX[3] / 2; iVar1 = iVar1 + 1) {
      *(undefined4 *)(*(int *)(in_ECX[1] + 0x21a8) + (iVar3 + local_1c * 8) * 4) =
           *(undefined4 *)(*(int *)(*in_ECX + 0x2268) + (iVar1 + iVar2 * 8) * 4);
      iVar3 = iVar3 + 1;
    }
    local_1c = local_1c + 1;
  }
  return;
}


// ==== 10599f23 Catch@10599f23

void Catch_10599f23(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 10599f37 Catch@10599f37

void Catch_10599f37(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShiftTerrainYM");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059a050 FUN_1059a050

void FUN_1059a050(void)

{
  int *piVar1;
  double dVar2;
  UObject *pUVar3;
  ulong uVar4;
  undefined4 *puVar5;
  int iVar6;
  FNameEntry *pFVar7;
  int in_ECX;
  int iVar8;
  float10 fVar9;
  undefined1 *puVar10;
  undefined1 local_58 [4];
  UObject *local_54;
  int local_38;
  int local_2c;
  UObject *local_28;
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081e4b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff84;
  local_8 = 0;
  if (*(int *)GL2NoGC_exref == 0) {
    if (*(int *)GL2GCState_exref == 0) {
      DAT_10c67280 = 4;
    }
    ExceptionList = &local_10;
    puVar10 = &stack0xffffff84;
    if ((DAT_10c6727c == 0) &&
       (ExceptionList = &local_10, puVar10 = &stack0xffffff84, DAT_10c67280 == 0)) {
      ExceptionList = &local_10;
      *(undefined4 *)GL2GCState_exref = 4;
      (**(code **)(**(int **)(in_ECX + 0x19c) + 0xb4))(1);
      puVar10 = local_14;
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,
                   (ushort *)0x2f8);
        puVar10 = local_14;
      }
    }
    local_14 = puVar10;
    fVar9 = (float10)thunk_FUN_104da1f0();
    dVar2 = (double)fVar9;
    switch(DAT_10c67280) {
    case 0:
      local_8 = CONCAT31(local_8._1_3_,1);
      for (iVar8 = 0; iVar8 < *(int *)(GObjObjects_exref + 4); iVar8 = iVar8 + 1) {
        piVar1 = (int *)(iVar8 * 4 + *(int *)GObjObjects_exref);
        if ((*piVar1 != 0) &&
           (local_1c = iVar8, uVar4 = UObject::GetFlags((UObject *)*piVar1), (uVar4 & 2) != 0)) {
          UObject::GetFlags(*(UObject **)(*(int *)GObjObjects_exref + iVar8 * 4));
        }
      }
      DAT_10c67280 = DAT_10c67280 + 1;
      DAT_10c6727c = 0;
      ExceptionList = local_10;
      return;
    case 1:
      local_8 = (uint)local_8._1_3_ << 8;
      while( true ) {
        if (*(int *)(GObjObjects_exref + 4) <= DAT_10c6727c) {
          DAT_10c67280 = DAT_10c67280 + 1;
          DAT_10c6727c = 0;
          ExceptionList = local_10;
          return;
        }
        pUVar3 = *(UObject **)(*(int *)GObjObjects_exref + DAT_10c6727c * 4);
        local_8 = CONCAT31(local_8._1_3_,4);
        DAT_10c67278 = DAT_10c67278 + (uint)(pUVar3 != (UObject *)0x0);
        local_2c = DAT_10c6727c;
        local_28 = pUVar3;
        if (((pUVar3 != (UObject *)0x0) && (uVar4 = UObject::GetFlags(pUVar3), (uVar4 & 2) != 0)) &&
           ((uVar4 = UObject::GetFlags(pUVar3), (uVar4 & 0x4000000) == 0 ||
            (*(int *)GExitPurge_exref != 0)))) {
          UObject::ConditionalDestroy(pUVar3);
          DAT_10c67274 = DAT_10c67274 + 1;
        }
        local_8 = 3;
        fVar9 = (float10)thunk_FUN_104da1f0();
        if ((float10)dVar2 + (float10)0.03333333333333333 < fVar9) break;
        DAT_10c6727c = DAT_10c6727c + 1;
      }
      break;
    case 2:
      FName::FName((FName *)&local_18,0);
      local_8 = local_8 & 0xffffff00;
      while( true ) {
        if (*(int *)(GObjObjects_exref + 4) <= DAT_10c6727c) {
          DAT_10c67280 = DAT_10c67280 + 1;
          DAT_10c6727c = 0;
          ExceptionList = local_10;
          return;
        }
        pUVar3 = *(UObject **)(*(int *)GObjObjects_exref + DAT_10c6727c * 4);
        local_8 = CONCAT31(local_8._1_3_,8);
        local_54 = pUVar3;
        local_38 = DAT_10c6727c;
        if (((pUVar3 != (UObject *)0x0) && (uVar4 = UObject::GetFlags(pUVar3), (uVar4 & 2) != 0)) &&
           (uVar4 = UObject::GetFlags(pUVar3), (uVar4 & 0x4000000) == 0)) {
          puVar10 = local_58;
          puVar5 = (undefined4 *)UObject::GetFName(pUVar3);
          local_18 = *puVar5;
          (**(code **)(*(int *)pUVar3 + 0xc))(1,puVar10);
          DAT_10c67270 = DAT_10c67270 + 1;
        }
        local_8 = 7;
        fVar9 = (float10)thunk_FUN_104da1f0();
        if ((float10)dVar2 + (float10)0.03333333333333333 < fVar9) break;
        DAT_10c6727c = DAT_10c6727c + 1;
      }
      break;
    case 3:
      local_8 = CONCAT31(local_8._1_3_,0xb);
      while( true ) {
        iVar6 = FName::GetMaxNames();
        iVar8 = DAT_10c6727c;
        if (iVar6 <= DAT_10c6727c) {
          DAT_10c67280 = DAT_10c67280 + 1;
          DAT_10c6727c = 0;
          ExceptionList = local_10;
          return;
        }
        pFVar7 = FName::GetEntry(DAT_10c6727c);
        if (((pFVar7 != (FNameEntry *)0x0) && ((*(uint *)(pFVar7 + 4) & 2) != 0)) &&
           ((*(uint *)(pFVar7 + 4) & 0x4000000) == 0)) {
          FOutputDevice::Logf(*(FOutputDevice **)GNull_exref,(EName)*(FOutputDevice **)GNull_exref,
                              (ushort *)0x30a);
          FName::DeleteEntry(iVar8);
          DAT_10c6726c = DAT_10c6726c + 1;
        }
        fVar9 = (float10)thunk_FUN_104da1f0();
        if ((float10)dVar2 + (float10)0.03333333333333333 < fVar9) break;
        DAT_10c6727c = DAT_10c6727c + 1;
      }
      break;
    case 4:
      *(undefined4 *)GL2GCState_exref = 0;
      DAT_10c67280 = 0;
      DAT_10c6727c = 0;
      DAT_10c596e8 = 0;
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2((FOutputDevice *)DAT_10c67278,*(ushort **)GLog_exref);
      }
      DAT_10c67278 = 0;
      DAT_10c67274 = 0;
      DAT_10c67270 = 0;
      DAT_10c6726c = 0;
    default:
      ExceptionList = local_10;
      return;
    }
  }
  else if (*(int *)GLog_exref != 0) {
    ExceptionList = &local_10;
    local_14 = &stack0xffffff84;
    FOutputDevice::Logf2
              (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2f8);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1059a19b Catch@1059a19b

void Catch_1059a19b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1059a1af Catch@1059a1af

void Catch_1059a1af(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DeleteFlag");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059a273 Catch@1059a273

void Catch_1059a273(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1059a287 Catch@1059a287

void Catch_1059a287(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"DispatchDestroy");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x24),(ushort *)0x0);
  appUnwindf((ushort *)L"(%i: %s)",*(undefined4 *)(unaff_EBP + -0x28),puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059a2ea Catch@1059a2ea

void Catch_1059a2ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 1059a2fe Catch@1059a2fe

void Catch_1059a2fe(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DispatchDestroys");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059a3b7 Catch@1059a3b7

void Catch_1059a3b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 1059a3cb Catch@1059a3cb

void Catch_1059a3cb(void)

{
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"DeleteObject");
  appUnwindf((ushort *)L"(%i)",*(undefined4 *)(unaff_EBP + -0x34));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059a41a Catch@1059a41a

void Catch_1059a41a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x5c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 1059a42e Catch@1059a42e

void Catch_1059a42e(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"DeleteGarbage");
  puVar1 = FName::operator*((FName *)(unaff_EBP + -0x14));
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059a513 Catch@1059a513

void Catch_1059a513(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x60);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 1059a527 Catch@1059a527

void Catch_1059a527(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Names");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059a5bd Catch@1059a5bd

void Catch_1059a5bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -100);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 1059a5d1 Catch@1059a5d1

void Catch_1059a5d1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::L2PurgeGarbage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059a760 FUN_1059a760

void FUN_1059a760(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  for (iVar3 = 0; iVar3 < 0x101; iVar3 = iVar3 + 1) {
    for (iVar2 = 0; iVar2 < 0x10; iVar2 = iVar2 + 1) {
      iVar1 = (iVar3 * 0x10 + iVar2) * 4;
      *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x2204)) =
           *(undefined4 *)(iVar1 + *(int *)(param_2 + 0x2208));
    }
  }
  for (iVar3 = 0; iVar2 = 0, iVar3 < 0x10; iVar3 = iVar3 + 1) {
    for (; iVar2 < 0x10; iVar2 = iVar2 + 1) {
      iVar1 = (iVar3 * 0x10 + iVar2) * 4;
      *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x20f4)) =
           *(undefined4 *)(*(int *)(param_2 + 0x2220) + iVar1);
    }
  }
  for (; iVar2 < *(int *)(param_2 + 0x2260); iVar2 = iVar2 + 1) {
    *(undefined4 *)(iVar2 * 4 + *(int *)(param_1 + 0x219c)) =
         *(undefined4 *)(*(int *)(param_2 + 0x225c) + iVar2 * 4);
  }
  for (iVar3 = 0; iVar3 < *(int *)(param_2 + 0x226c); iVar3 = iVar3 + 1) {
    *(undefined4 *)(iVar3 * 4 + *(int *)(param_1 + 0x21a8)) =
         *(undefined4 *)(*(int *)(param_2 + 0x2268) + iVar3 * 4);
  }
  DAT_10c516d4 = 1;
  return;
}


// ==== 1059a889 Catch@1059a889

void Catch_1059a889(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 1059a89d Catch@1059a89d

void Catch_1059a89d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DumpTerrain");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059a910 FUN_1059a910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1059a910(void)

{
  ATerrainInfo *pAVar1;
  int iVar2;
  int iVar3;
  UGameEngine *in_ECX;
  int *piVar4;
  int *piVar5;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081e4d0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  if ((*(int *)GIsL2Seamless_exref != 0) && (*(ULevel **)(in_ECX + 0x19c) != (ULevel *)0x0)) {
    ExceptionList = &local_10;
    pAVar1 = ULevel::GetTerrainInfo(*(ULevel **)(in_ECX + 0x19c));
    if (pAVar1 != (ATerrainInfo *)0x0) {
      DAT_10c596f4 = *(undefined4 *)(pAVar1 + 0x1bc);
      DAT_10c596f8 = *(undefined4 *)(pAVar1 + 0x1c0);
      _DAT_10c59708 = DAT_10c596fc;
      _DAT_10c59700 = DAT_10c596f4;
      _DAT_10c59704 = DAT_10c596f8;
      thunk_FUN_1059a760(pAVar1,pAVar1);
      *(undefined4 *)(pAVar1 + 0x215c) = *(undefined4 *)(pAVar1 + 0x222c);
      *(undefined4 *)(pAVar1 + 0x2160) = *(undefined4 *)(pAVar1 + 0x2230);
      *(undefined4 *)(pAVar1 + 0x2164) = *(undefined4 *)(pAVar1 + 0x2234);
      DAT_10c516dc = 0;
      DAT_10c556e0 = 0;
      DAT_10b13f74 = 0xffffffff;
      DAT_10b13f78 = 0xffffffff;
      DAT_10b13f7c = 0xffffffff;
      DAT_10b13f80 = 0xffffffff;
      piVar5 = &local_18;
      piVar4 = &local_1c;
      iVar2 = FUN_107a6660();
      iVar3 = FUN_107a6660();
      UGameEngine::GetSWMapXY(in_ECX,iVar3,iVar2,piVar4,piVar5);
      iVar2 = thunk_FUN_10598d90(local_1c,local_18);
      if (iVar2 == 0) {
        thunk_FUN_105897f0(local_1c,local_18,*(undefined4 *)(in_ECX + 0x19c));
      }
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x19c) + 0x11d0) = 1;
    *(undefined4 *)(*(int *)(in_ECX + 0x19c) + 0x11d4) = 1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1059aa70 Catch@1059aa70

void Catch_1059aa70(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1059aa84 Catch@1059aa84

void Catch_1059aa84(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::FinishLoadSWMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059ab10 FUN_1059ab10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059ab10(void)

{
  UObject *this;
  undefined1 *puVar1;
  ulong uVar2;
  int iVar3;
  UGameEngine *in_ECX;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081e4e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffcc;
  if ((0 < *(int *)(in_ECX + 0x2e8)) &&
     (ExceptionList = &local_10, puVar1 = &stack0xffffffcc, *(int *)GLog_exref != 0)) {
    ExceptionList = &local_10;
    FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if (((*(int *)(*(int *)(in_ECX + 0x54) + 0x3c) != 0) &&
      (iVar3 = **(int **)(*(int *)(in_ECX + 0x54) + 0x38), iVar3 != 0)) &&
     (*(int *)(iVar3 + 0x3c) != 0)) {
    iVar3 = *(int *)(iVar3 + 0x3c);
    if (*(int *)(iVar3 + 0x3bc) != 0) {
      iVar3 = *(int *)(iVar3 + 0x3bc);
    }
    local_28 = *(undefined4 *)(iVar3 + 0x1bc);
    local_24 = *(undefined4 *)(iVar3 + 0x1c0);
    local_20 = *(undefined4 *)(iVar3 + 0x1c4);
    while (0 < *(int *)(in_ECX + 0x2e8)) {
      this = (UObject *)**(undefined4 **)(in_ECX + 0x2e4);
      uVar2 = UObject::GetFlags(this);
      if (((uVar2 & 0x200) == 0) && (*(int *)(this + 0x1190) != 1)) {
        do {
          iVar3 = ULevel::EndLoadSWLevel((ULevel *)this,0);
        } while (iVar3 != 0);
        UGameEngine::AttachLevel
                  (in_ECX,*(ULevel **)(in_ECX + 0x19c),(ULevel *)this,(FVector *)&local_28);
      }
      else {
        ULevel::Load((ULevel *)this);
      }
      if (((byte)*GL2ThreadFilter_exref & 1) != 0) {
        UObject::FinishThreadLoad();
      }
    }
    DAT_10b13f80 = 0xffffffff;
    DAT_10b13f7c = 0xffffffff;
    DAT_10b13f78 = 0xffffffff;
    DAT_10b13f74 = 0xffffffff;
    _DAT_10c516d8 = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1059ac4f Catch@1059ac4f

void Catch_1059ac4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1059ac63 Catch@1059ac63

void Catch_1059ac63(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::FinishRemain");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059ace0 FUN_1059ace0

FArchive * FUN_1059ace0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081e4f0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      (**(code **)(*(int *)param_1 + 0x18))(*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_10370620(4,param_2);
      (**(code **)(*(int *)param_1 + 0x18))(uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1059ada4 Catch@1059ada4

void Catch_1059ada4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1059adb8 Catch@1059adb8

void Catch_1059adb8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059aea0 FUN_1059aea0

void FUN_1059aea0(int param_1,int param_2)

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


// ==== 1059af70 FUN_1059af70

UObject * FUN_1059af70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  ULinkerLoad *pUVar4;
  ushort *puVar5;
  UObject *in_ECX;
  FOutputDevice *this;
  ushort local_234;
  undefined1 local_232 [530];
  UObject *local_20;
  UObject *local_1c;
  UObject *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081e500;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdc0;
  local_8 = 0;
  local_1c = (UObject *)0x0;
  local_234 = 0;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  _memset(local_232,0,0x1fe);
  appSprintf(&local_234,(ushort *)L"%02d_%02d.unr",param_1,param_2);
  if (((*(int *)GL2UseReplayManager_exref != 0) &&
      (*(FL2ReplayManager **)(in_ECX + 0x198) != (FL2ReplayManager *)0x0)) &&
     (iVar1 = FL2ReplayManager::GetState(*(FL2ReplayManager **)(in_ECX + 0x198)), iVar1 == 2)) {
    FL2ReplayManager::AddMapName(*(FL2ReplayManager **)(in_ECX + 0x198),param_1,param_2);
  }
  iVar1 = (param_1 * 0x40 + param_2) * 4;
  if (*(int *)(&DAT_10c556e8 + iVar1) != 0) {
    *(undefined4 *)(&DAT_10c516e0 + iVar1) = 0;
    ExceptionList = local_10;
    return (UObject *)0x0;
  }
  iVar2 = thunk_FUN_10598d90();
  if (iVar2 != 0) {
    pUVar3 = (UObject *)thunk_FUN_10598d90();
    ExceptionList = local_10;
    return pUVar3;
  }
  local_8._0_1_ = 1;
  UObject::SWBeginLoad();
  local_8 = CONCAT31(local_8._1_3_,2);
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2((FOutputDevice *)&local_234,*(ushort **)GLog_exref);
  }
  pUVar4 = UObject::GetPackageLinker((UObject *)0x0,&local_234,0x29,(UPackageMap *)0x0,(FGuid *)0x0)
  ;
  if (pUVar4 != (ULinkerLoad *)0x0) {
    local_20 = (UObject *)&stack0xfffffdb8;
    FName::FName((FName *)&stack0xfffffdb8,(ushort *)L"MyLevel",1);
    pUVar3 = UObject::LinkerCreate(local_18,pUVar4,&ULevel::PrivateStaticClass);
    local_1c = pUVar3;
    if (pUVar3 != (UObject *)0x0) goto LAB_1059b171;
  }
  pUVar3 = UObject::StaticFindObject
                     (&ULevel::PrivateStaticClass,(UObject *)0x0,(ushort *)L"MyLevel",0);
  if (pUVar3 == (UObject *)0x0) {
    local_1c = pUVar3;
    UObject::GetName((UObject *)&ULevel::PrivateStaticClass);
    puVar5 = LocalizeError("ObjectNotFound",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar5);
    *(undefined4 *)(&DAT_10c556e8 + iVar1) = 1;
    *(undefined4 *)(&DAT_10c516e0 + iVar1) = 0;
    if (*(int *)GLog_exref == 0) {
      ExceptionList = local_10;
      return (UObject *)0x0;
    }
    FOutputDevice::Logf2((FOutputDevice *)&local_234,*(ushort **)GLog_exref);
    ExceptionList = local_10;
    return (UObject *)0x0;
  }
LAB_1059b171:
  local_20 = pUVar3;
  local_1c = pUVar3;
  thunk_FUN_105897f0();
  UObject::SetFlags(pUVar3,0x200);
  *(UObject **)(pUVar3 + 0x74) = local_18;
  thunk_FUN_103791c0();
  FArray::Empty((FArray *)GObjLoaded_exref,4,0);
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
  }
  thunk_FUN_104aed20();
  ExceptionList = local_10;
  return pUVar3;
}


// ==== 1059b20d Catch@1059b20d

undefined4 Catch_1059b20d(void)

{
  int iVar1;
  FOutputDevice *this;
  int unaff_EBP;
  
  iVar1 = (*(int *)(unaff_EBP + 8) * 0x40 + *(int *)(unaff_EBP + 0xc)) * 4;
  *(undefined4 *)(&DAT_10c556e8 + iVar1) = 1;
  *(undefined4 *)(&DAT_10c516e0 + iVar1) = 0;
  UObject::SWEndLoad();
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  return 0x1059b021;
}


// ==== 1059b260 Catch@1059b260

void Catch_1059b260(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1059b274 Catch@1059b274

void Catch_1059b274(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SWBeginLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059b290 Catch@1059b290

void Catch_1059b290(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1059b2a4 Catch@1059b2a4

void Catch_1059b2a4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::LoadLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059b380 FUN_1059b380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059b380(int param_1,int param_2)

{
  int iVar1;
  UObject *this;
  ulong uVar2;
  ushort local_224;
  undefined1 local_222 [522];
  UGameEngine *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081e510;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd0;
  local_8 = 0;
  _DAT_10c596f0 = 1;
  local_224 = 0;
  ExceptionList = &local_10;
  _memset(local_222,0,0x1fe);
  appSprintf(&local_224,(ushort *)L"%02d_%02d.unr",param_1,param_2);
  while( true ) {
    iVar1 = L2ThreadUtil::IsCurrentThread((L2ThreadUtil *)GThreadUtil_exref,1);
    if ((iVar1 != 0) || (*(int *)(&DAT_10c516e0 + (param_1 * 0x40 + param_2) * 4) == 0)) break;
    appSleep(1.0);
  }
  while( true ) {
    while( true ) {
      this = (UObject *)thunk_FUN_10598d90(param_1,param_2);
      if (this != (UObject *)0x0) break;
      UGameEngine::LoadLevel(local_18,param_1,param_2);
      iVar1 = thunk_FUN_10598d90(param_1,param_2);
      if (iVar1 == 0) {
        ExceptionList = local_10;
        return;
      }
    }
    uVar2 = UObject::GetFlags(this);
    if (((uVar2 & 0x200) == 0) && (*(int *)(this + 0x1190) != 1)) break;
    ULevel::Load((ULevel *)this);
  }
  UGameEngine::FinishLoadTeleportMap(local_18,(ULevel *)this);
  ExceptionList = local_10;
  return;
}


// ==== 1059b4a1 Catch@1059b4a1

void Catch_1059b4a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1059b4b5 Catch@1059b4b5

void Catch_1059b4b5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::LoadTeleportMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059b530 FUN_1059b530

ULevel * FUN_1059b530(int param_1,int param_2)

{
  void *_Src;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ULevel *pUVar4;
  ULinkerLoad *pUVar5;
  UObject *pUVar6;
  ushort *puVar7;
  ulong uVar8;
  int iVar9;
  UObject *in_ECX;
  code *pcVar10;
  ushort local_278;
  undefined1 local_276 [518];
  undefined1 *local_70;
  int local_4c;
  int local_48;
  int local_3c;
  int local_34;
  int local_28;
  int local_24;
  UObject *local_1c;
  UObject *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081e528;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd7c;
  local_18 = (UObject *)0x0;
  local_8 = 1;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  puVar1 = &stack0xfffffd7c;
  if (*(int *)GLog_exref != 0) {
    ExceptionList = &local_10;
    FOutputDevice::Logf2((FOutputDevice *)0x0,*(EName *)GLog_exref,(ushort *)0x2f8);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_278 = 0;
  _memset(local_276,0,0x1fe);
  appSprintf(&local_278,(ushort *)L"%02d_%02d.unr",param_1,param_2);
  if (((*(int *)GL2UseReplayManager_exref != 0) &&
      (*(FL2ReplayManager **)(in_ECX + 0x198) != (FL2ReplayManager *)0x0)) &&
     (iVar2 = FL2ReplayManager::GetState(*(FL2ReplayManager **)(in_ECX + 0x198)), iVar2 == 2)) {
    FL2ReplayManager::AddMapName(*(FL2ReplayManager **)(in_ECX + 0x198),param_1,param_2);
  }
  iVar2 = (param_1 * 0x40 + param_2) * 4;
  if (*(int *)(&DAT_10c556e8 + iVar2) != 0) {
    *(undefined4 *)(&DAT_10c516e0 + iVar2) = 0;
    ExceptionList = local_10;
    return (ULevel *)0x0;
  }
  iVar3 = thunk_FUN_10598d90();
  if (iVar3 != 0) {
    pUVar4 = (ULevel *)thunk_FUN_10598d90();
    ExceptionList = local_10;
    return pUVar4;
  }
  DAT_10c596ec = 1;
  UObject::SWBeginLoad();
  local_8 = CONCAT31(local_8._1_3_,2);
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2((FOutputDevice *)&local_278,*(ushort **)GLog_exref);
  }
  pUVar5 = UObject::GetPackageLinker((UObject *)0x0,&local_278,0x29,(UPackageMap *)0x0,(FGuid *)0x0)
  ;
  if (pUVar5 == (ULinkerLoad *)0x0) {
LAB_1059b6d4:
    pUVar6 = UObject::StaticFindObject
                       (&ULevel::PrivateStaticClass,(UObject *)0x0,(ushort *)L"MyLevel",0);
    if (pUVar6 == (UObject *)0x0) {
      UObject::GetName((UObject *)&ULevel::PrivateStaticClass);
      puVar7 = LocalizeError("ObjectNotFound",(ushort *)L"Core",(ushort *)0x0);
      appThrowf(puVar7);
      *(undefined4 *)(&DAT_10c556e8 + iVar2) = 1;
      *(undefined4 *)(&DAT_10c516e0 + iVar2) = 0;
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2((FOutputDevice *)&local_278,*(ushort **)GLog_exref);
      }
      goto code_r0x1059b7ba;
    }
  }
  else {
    local_70 = &stack0xfffffd78;
    FName::FName((FName *)&stack0xfffffd78,(ushort *)L"MyLevel",1);
    pUVar6 = UObject::LinkerCreate(local_1c,pUVar5,&ULevel::PrivateStaticClass);
    if (pUVar6 == (UObject *)0x0) goto LAB_1059b6d4;
  }
  local_18 = pUVar6;
  thunk_FUN_105897f0();
  UObject::SetFlags(pUVar6,0x200);
  *(UObject **)(pUVar6 + 0x74) = local_1c;
  *(undefined4 *)(pUVar6 + 0x11d8) = 1;
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2((FOutputDevice *)&local_278,*(ushort **)GLog_exref);
  }
  thunk_FUN_104aed20();
code_r0x1059b7ba:
  local_8 = 1;
  UObject::SWEndLoad();
  local_8._1_3_ = 0;
  local_8._0_1_ = 6;
  thunk_FUN_10368850();
  while( true ) {
    local_8._0_1_ = 7;
    iVar2 = *(int *)(GObjLoadedBuffer_exref + 4);
    if (iVar2 == 0) break;
    _Src = *(void **)GObjLoadedBuffer_exref;
    iVar3 = FArray::Add((FArray *)&local_28,iVar2,4);
    _memcpy((void *)(local_28 + iVar3 * 4),_Src,iVar2 * 4);
    FArray::Empty((FArray *)GObjLoadedBuffer_exref,4,0);
    local_8 = CONCAT31(local_8._1_3_,8);
    FOutputDevice::Logf(*(FOutputDevice **)GNull_exref,(EName)*(FOutputDevice **)GNull_exref,
                        (ushort *)0x308);
    for (iVar2 = 0; local_48 = iVar2, iVar2 < local_24; iVar2 = iVar2 + 1) {
      pUVar6 = *(UObject **)(local_28 + iVar2 * 4);
      uVar8 = UObject::GetFlags(pUVar6);
      if ((uVar8 & 0x200) != 0) {
        pUVar5 = UObject::GetLinker(pUVar6);
        if (pUVar5 == (ULinkerLoad *)0x0) {
          appFailAssert("Obj->GetLinker()",".\\UnGameSW.cpp",0x982);
        }
        pUVar5 = UObject::GetLinker(pUVar6);
        (**(code **)(*(int *)(pUVar5 + 0xc0) + 0x10))();
      }
    }
    local_8._1_3_ = 0;
    if (*(int *)(GObjLoadedBuffer_exref + 4) == 0) {
      local_8 = 10;
      local_34 = 0;
      while (iVar2 = local_34, local_34 < local_24) {
        UObject::ConditionalPostLoad(*(UObject **)(local_28 + local_34 * 4));
        local_34 = iVar2 + 1;
      }
      local_8._1_3_ = 0;
    }
  }
  local_8 = CONCAT31(local_8._1_3_,0xc);
  if (*(int *)GImportCount_exref != 0) {
    local_4c = 0;
    pcVar10 = GetLoader_exref;
    while (iVar2 = local_4c, local_4c < *(int *)(GObjLoaders_exref + 4)) {
      local_3c = 0;
      while (iVar3 = local_3c, iVar9 = (*pcVar10)(), iVar3 < *(int *)(iVar9 + 0x88)) {
        iVar9 = (*pcVar10)();
        iVar9 = *(int *)(iVar9 + 0x84) + iVar3 * 0x1c;
        if ((*(int *)(iVar9 + 0x10) != 0) &&
           (uVar8 = UObject::GetFlags(*(UObject **)(iVar9 + 0x10)), (uVar8 & 0x4000000) == 0)) {
          *(undefined4 *)(iVar9 + 0x10) = 0;
        }
        pcVar10 = GetLoader_exref;
        local_3c = iVar3 + 1;
      }
      local_4c = iVar2 + 1;
    }
  }
  *(undefined4 *)GImportCount_exref = 0;
  local_8 = 6;
  thunk_FUN_10379100();
  pUVar6 = local_18;
  local_8 = 0;
  while (iVar2 = ULevel::EndLoadSWLevel((ULevel *)pUVar6,0), iVar2 != 0) {
    appSleep(0.0);
  }
  *(undefined4 *)(&DAT_10c516e0 + (param_1 * 0x40 + param_2) * 4) = 0;
  *(undefined4 *)(pUVar6 + 0x11d8) = 0;
  DAT_10c596ec = 0;
  ExceptionList = local_10;
  return (ULevel *)pUVar6;
}


// ==== 1059b8f5 Catch@1059b8f5

void Catch_1059b8f5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_10914c48);
}


// ==== 1059b909 Catch@1059b909

void Catch_1059b909(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"PostLoadObjects");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059b925 Catch@1059b925

void Catch_1059b925(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 1059b939 Catch@1059b939

void Catch_1059b939(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"PreLoadObjects");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059ba1f Catch@1059ba1f

void Catch_1059ba1f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 1059ba33 Catch@1059ba33

void Catch_1059ba33(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DissociateImports");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059ba3d Catch@1059ba3d

undefined4 Catch_1059ba3d(void)

{
  int unaff_EBP;
  
  FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
  *(undefined4 *)(unaff_EBP + -4) = 5;
  return 0x1059b9f6;
}


// ==== 1059ba8f Catch@1059ba8f

void Catch_1059ba8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 1059baa3 Catch@1059baa3

void Catch_1059baa3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::LoadMapThread::ActorLoading");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059baad Catch@1059baad

undefined4 Catch_1059baad(void)

{
  int iVar1;
  FOutputDevice *this;
  int unaff_EBP;
  
  iVar1 = (*(int *)(unaff_EBP + 8) * 0x40 + *(int *)(unaff_EBP + 0xc)) * 4;
  *(undefined4 *)(&DAT_10c556e8 + iVar1) = 1;
  *(undefined4 *)(&DAT_10c516e0 + iVar1) = 0;
  DAT_10c596ec = 0;
  UObject::SWEndLoad();
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
  }
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  return 0x1059b609;
}


// ==== 1059bb06 Catch@1059bb06

void Catch_1059bb06(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x5c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 1059bb1a Catch@1059bb1a

void Catch_1059bb1a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::LoadMapThread::PreCreating");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059bb24 Catch@1059bb24

void Catch_1059bb24(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -100);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1059bb38 Catch@1059bb38

void Catch_1059bb38(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::LoadMapThread");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059bcd0 FUN_1059bcd0

int FUN_1059bcd0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[1];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*in_ECX + iVar2 * 4) == *param_1) {
        thunk_FUN_10387920(iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  return iVar1 - in_ECX[1];
}


// ==== 1059bd20 FUN_1059bd20

void FUN_1059bd20(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &AActor::PrivateStaticClass;
  in_ECX[1] = 0xffffffff;
  thunk_FUN_103737b0();
  return;
}


// ==== 1059bd40 FUN_1059bd40

void FUN_1059bd40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &ULevelObject::PrivateStaticClass;
  in_ECX[1] = 0xffffffff;
  thunk_FUN_103737b0();
  return;
}


// ==== 1059bd60 FUN_1059bd60

void FUN_1059bd60(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081e549;
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
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1059be20 FUN_1059be20

void FUN_1059be20(int *param_1)

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


// ==== 1059be70 FUN_1059be70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1059be70(float param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ATerrainInfo *pAVar4;
  ATerrainInfo *pAVar5;
  ULevel *pUVar6;
  ATerrainInfo *pAVar7;
  ATerrainInfo *pAVar8;
  UGameEngine *in_ECX;
  UObject *this;
  uint uVar9;
  UGameEngine *this_00;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  int iStack_9c;
  ATerrainInfo *local_84;
  ATerrainInfo *local_80;
  undefined1 *local_5c;
  void *pvStack_58;
  undefined1 *puStack_54;
  undefined4 local_50;
  ATerrainInfo *local_4c;
  ATerrainInfo *local_48;
  UGameEngine *local_24;
  ULevel *local_20;
  int local_1c;
  int local_18;
  UObject *local_14;
  ATerrainInfo *local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_54 = &LAB_1081e560;
  pvStack_58 = ExceptionList;
  local_5c = &stack0xfffffe54;
  local_50 = 0;
  local_c = 1;
  ExceptionList = &pvStack_58;
  local_24 = in_ECX;
  appSleep(0.0);
  if (*(int *)(in_ECX + 0x54) == 0) {
    ExceptionList = pvStack_58;
    return 0;
  }
  this = (UObject *)0x0;
  local_20 = (ULevel *)0x0;
  local_14 = (UObject *)0x0;
  piVar13 = &local_1c;
  piVar12 = &local_18;
  iVar1 = FUN_107a6660();
  iVar2 = FUN_107a6660();
  UGameEngine::GetSWMapXY(in_ECX,iVar2,iVar1,piVar12,piVar13);
  if (*(int *)GL2ThreadFilter_exref != 0) {
    appSleep(0.0);
  }
  if ((DAT_10b13f74 == -1) && (DAT_10b13f7c == -1)) {
    _DAT_10c516d8 = 0;
    if (param_1 < DAT_10c596f4 - 8192.0) {
      if (-1 < DAT_10c516dc) {
        local_18 = local_18 + -1;
      }
      DAT_10b13f80 = local_1c;
      if (0 < DAT_10c556e0) {
        DAT_10b13f74 = local_18;
        DAT_10b13f78 = local_18;
        DAT_10b13f7c = local_1c;
        DAT_10b13f80 = local_1c + -1;
        DAT_10c516d4 = 1;
        _DAT_10c516d8 = 1;
        DAT_10c556e4 = 0;
        ExceptionList = pvStack_58;
        return 1;
      }
      if (DAT_10c556e0 < 0) {
        DAT_10b13f80 = local_1c + 1;
      }
      DAT_10b13f74 = local_18;
      DAT_10b13f78 = local_18;
      DAT_10b13f7c = local_1c;
      DAT_10c516d4 = 1;
      _DAT_10c516d8 = 1;
      DAT_10c556e4 = 0;
      ExceptionList = pvStack_58;
      return 1;
    }
    if (DAT_10c596f4 + 8192.0 < param_1) {
      if (DAT_10c516dc < 1) {
        local_18 = local_18 + 1;
      }
      DAT_10b13f80 = local_1c;
      if (0 < DAT_10c556e0) {
        DAT_10b13f74 = local_18;
        DAT_10b13f78 = local_18;
        DAT_10b13f7c = local_1c;
        DAT_10b13f80 = local_1c + -1;
        DAT_10c516d4 = 1;
        _DAT_10c516d8 = 2;
        DAT_10c556e4 = 0;
        ExceptionList = pvStack_58;
        return 1;
      }
      if (DAT_10c556e0 < 0) {
        DAT_10b13f80 = local_1c + 1;
      }
      DAT_10b13f74 = local_18;
      DAT_10b13f78 = local_18;
      DAT_10b13f7c = local_1c;
      DAT_10c516d4 = 1;
      _DAT_10c516d8 = 2;
      DAT_10c556e4 = 0;
      ExceptionList = pvStack_58;
      return 1;
    }
    if (DAT_10c596f8 - 8192.0 <= param_2) {
      if (DAT_10c596f8 + 8192.0 < param_2) {
        if (DAT_10c556e0 < 1) {
          local_1c = local_1c + 1;
        }
        DAT_10b13f74 = local_18;
        DAT_10b13f78 = local_18;
        if (DAT_10c516dc < 1) {
          if (DAT_10c516dc < 0) {
            DAT_10b13f78 = local_18 + 1;
          }
        }
        else {
          DAT_10b13f78 = local_18 + -1;
        }
        _DAT_10c516d8 = 0x20;
        DAT_10b13f7c = local_1c;
        DAT_10b13f80 = local_1c;
      }
      DAT_10c516d4 = 1;
      DAT_10c556e4 = 0;
      ExceptionList = pvStack_58;
      return 1;
    }
    if (-1 < DAT_10c556e0) {
      local_1c = local_1c + -1;
    }
    DAT_10b13f78 = local_18;
    if (0 < DAT_10c516dc) {
      DAT_10b13f74 = local_18;
      DAT_10b13f78 = local_18 + -1;
      DAT_10b13f7c = local_1c;
      DAT_10b13f80 = local_1c;
      DAT_10c516d4 = 1;
      _DAT_10c516d8 = 0x10;
      DAT_10c556e4 = 0;
      ExceptionList = pvStack_58;
      return 1;
    }
    if (DAT_10c516dc < 0) {
      DAT_10b13f78 = local_18 + 1;
    }
    DAT_10b13f74 = local_18;
    DAT_10b13f7c = local_1c;
    DAT_10b13f80 = local_1c;
    DAT_10c516d4 = 1;
    _DAT_10c516d8 = 0x10;
    DAT_10c556e4 = 0;
    ExceptionList = pvStack_58;
    return 1;
  }
  local_50 = 3;
  if ((((byte)*GL2ThreadFilter_exref & 1) == 0) || (DAT_10c556e4 != 0)) {
    DAT_10c556e4 = 1;
    this = (UObject *)thunk_FUN_10598d90(DAT_10b13f74,DAT_10b13f7c);
    local_14 = (UObject *)0x0;
    local_20 = (ULevel *)this;
    if (this == (UObject *)0x0) {
      UGameEngine::LoadLevel(in_ECX,DAT_10b13f74,DAT_10b13f7c);
      iVar1 = thunk_FUN_10598d90(DAT_10b13f74,DAT_10b13f7c);
      if (iVar1 != 0) goto LAB_1059d4f0;
      local_c = 0;
    }
    else {
      uVar3 = UObject::GetFlags(this);
      if (((uVar3 & 0x200) != 0) || (*(int *)(this + 0x1190) == 1)) {
LAB_1059d4eb:
        ULevel::Load((ULevel *)this);
        goto LAB_1059d4f0;
      }
      if ((DAT_10b13f74 != DAT_10b13f78) || (this = (UObject *)0x0, DAT_10b13f7c != DAT_10b13f80)) {
        this = (UObject *)thunk_FUN_10598d90(DAT_10b13f78,DAT_10b13f80);
        local_14 = this;
        if (this == (UObject *)0x0) {
          UGameEngine::LoadLevel(in_ECX,DAT_10b13f78,DAT_10b13f80);
          iVar1 = thunk_FUN_10598d90(DAT_10b13f78,DAT_10b13f80);
          if (iVar1 == 0) {
            local_c = 0;
            goto LAB_1059d460;
          }
          goto LAB_1059d4f0;
        }
        uVar3 = UObject::GetFlags(this);
        if (((uVar3 & 0x200) != 0) || (*(int *)(this + 0x1190) == 1)) goto LAB_1059d4eb;
      }
code_r0x1059c3ed:
      if (DAT_10c516d4 != 0) {
        DAT_10c516d4 = 0;
        local_50 = 6;
        pAVar4 = ULevel::GetTerrainInfo(local_20);
        local_4c = pAVar4;
        pAVar5 = ULevel::GetTerrainInfo(*(ULevel **)(local_24 + 0x19c));
        local_80 = pAVar5;
        local_48 = pAVar5;
        pUVar6 = (ULevel *)thunk_FUN_10598d90(local_18,local_1c);
        if (pUVar6 == (ULevel *)0x0) goto LAB_1059c18c;
        local_10 = ULevel::GetTerrainInfo(pUVar6);
        if (((pAVar4 == (ATerrainInfo *)0x0) || (pAVar5 == (ATerrainInfo *)0x0)) ||
           (local_10 == (ATerrainInfo *)0x0)) {
          appFailAssert("st.pSrcTerrainInfo && st.pDesTerrainInfo && pDesTInfo",".\\UnGameSW.cpp",
                        0x24a);
        }
        iVar1 = DAT_10c556e0;
        local_50 = 5;
        if ((_DAT_10c516d8 & 1) != 0) {
          if (DAT_10c516dc < 0) {
            iVar2 = DAT_10c516dc * -4 + -1;
            local_8 = DAT_10c516dc * -4 + -4;
            if (DAT_10c556e0 < 0) {
              uVar9 = DAT_10c556e0 * -4 & 0xff;
              thunk_FUN_105989c0(local_8,iVar2,uVar9,0xf,0,0,0,0);
              iVar1 = iVar1 * 4 + 0x10;
              iVar11 = uVar9 - 1;
              uVar9 = 0;
            }
            else {
              uVar9 = (4 - DAT_10c556e0) * 4 & 0xff;
              thunk_FUN_105989c0(local_8,iVar2,0,uVar9 - 1,0,DAT_10c556e0 * 4,0,0);
              iVar1 = 0;
              iVar11 = 0xf;
            }
            thunk_FUN_105989c0(local_8,iVar2,uVar9,iVar11,0,iVar1,0,0);
            pAVar5 = local_10;
          }
          else {
            local_8 = DAT_10c516dc * -4 + 0xf;
            iVar2 = (3 - DAT_10c516dc) * 4;
            if (DAT_10c556e0 < 0) {
              uVar9 = DAT_10c556e0 * -4 & 0xff;
              thunk_FUN_105989c0(iVar2,local_8,uVar9,0xf,0,0,0,0);
              iVar1 = iVar1 * 4 + 0x10;
              iVar11 = uVar9 - 1;
              uVar9 = 0;
            }
            else {
              uVar9 = (4 - DAT_10c556e0) * 4 & 0xff;
              thunk_FUN_105989c0(iVar2,local_8,0,uVar9 - 1,0,DAT_10c556e0 * 4,0,0);
              iVar1 = 0;
              iVar11 = 0xf;
            }
            thunk_FUN_105989c0(iVar2,local_8,uVar9,iVar11,0,iVar1,0,0);
            pAVar5 = local_10;
            local_50 = CONCAT31(local_50._1_3_,8);
            ATerrainInfo::SetVertiEdge(local_4c,local_10);
            local_50 = 0;
          }
          local_50 = CONCAT31(local_50._1_3_,10);
          FUN_10598e10();
          local_50 = 5;
          if ((DAT_10c556e0 == 0) || (local_14 == (UObject *)0x0)) {
LAB_1059c75c:
            uVar9 = DAT_10c516dc + 2U & 0x80000003;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
            }
            DAT_10c516dc = uVar9 - 1;
            DAT_10c596f4 = DAT_10c596f4 - 8192.0;
            *(float *)(local_48 + 0x215c) = *(float *)(local_48 + 0x215c) - 8192.0;
            this = local_14;
            pAVar5 = local_48;
            goto LAB_1059c7ad;
          }
          pAVar4 = ULevel::GetTerrainInfo((ULevel *)local_14);
          local_84 = pAVar4;
          if (DAT_10c556e0 < 1) {
            pUVar6 = (ULevel *)
                     thunk_FUN_10598d90(*(undefined4 *)(pAVar5 + 0x220c),
                                        *(int *)(pAVar5 + 0x2210) + 1);
            pAVar7 = local_4c;
            if (pUVar6 != (ULevel *)0x0) {
              local_50 = CONCAT31(local_50._1_3_,0xe);
              ATerrainInfo::SetHoriEdge(local_4c,pAVar4);
              pAVar5 = ULevel::GetTerrainInfo(pUVar6);
              ATerrainInfo::SetVertiEdge(pAVar4,pAVar5);
              pAVar5 = ULevel::GetTerrainInfo(pUVar6);
              goto LAB_1059c73a;
            }
          }
          else {
            pUVar6 = (ULevel *)
                     thunk_FUN_10598d90(*(undefined4 *)(pAVar5 + 0x220c),
                                        *(int *)(pAVar5 + 0x2210) + -1);
            if (pUVar6 != (ULevel *)0x0) {
              local_50 = CONCAT31(local_50._1_3_,0xc);
              ATerrainInfo::SetHoriEdge(pAVar4,local_4c);
              pAVar7 = ULevel::GetTerrainInfo(pUVar6);
              ATerrainInfo::SetVertiEdge(pAVar4,pAVar7);
              pAVar7 = pAVar4;
LAB_1059c73a:
              ATerrainInfo::SetEndVertexZ(pAVar7,pAVar5);
              local_50 = 0x10;
              FUN_10598e10();
              goto LAB_1059c75c;
            }
          }
          goto LAB_1059c18c;
        }
LAB_1059c7ad:
        iVar1 = DAT_10c556e0;
        local_50 = 5;
        if ((_DAT_10c516d8 & 2) != 0) {
          if (DAT_10c516dc < 1) {
            if (DAT_10c556e0 < 0) {
              uVar9 = DAT_10c556e0 * -4 & 0xff;
              iVar11 = DAT_10c516dc * -4 + 3;
              local_8 = DAT_10c516dc * -4;
              thunk_FUN_105989c0(local_8,iVar11,uVar9,0xf,0xc,0,0,0);
              iVar1 = iVar1 * 4 + 0x10;
              iVar2 = uVar9 - 1;
              uVar9 = 0;
            }
            else {
              uVar9 = (4 - DAT_10c556e0) * 4 & 0xff;
              iVar11 = DAT_10c516dc * -4 + 3;
              local_8 = DAT_10c516dc * -4;
              thunk_FUN_105989c0(local_8,iVar11,0,uVar9 - 1,0xc,DAT_10c556e0 * 4,0,0);
              iVar1 = 0;
              iVar2 = 0xf;
            }
            thunk_FUN_105989c0(local_8,iVar11,uVar9,iVar2,0xc,iVar1,0,0);
            pAVar5 = local_10;
            local_50 = CONCAT31(local_50._1_3_,0x12);
            ATerrainInfo::SetVertiEdge(local_10,local_4c);
            local_50 = 0;
          }
          else {
            local_8 = DAT_10c516dc * -4 + 0x13;
            iVar2 = (4 - DAT_10c516dc) * 4;
            if (DAT_10c556e0 < 0) {
              uVar9 = DAT_10c556e0 * -4 & 0xff;
              thunk_FUN_105989c0(iVar2,local_8,uVar9,0xf,0xc,0,0,0);
              iVar1 = iVar1 * 4 + 0x10;
              iVar11 = uVar9 - 1;
              uVar9 = 0;
            }
            else {
              uVar9 = (4 - DAT_10c556e0) * 4 & 0xff;
              thunk_FUN_105989c0(iVar2,local_8,0,uVar9 - 1,0xc,DAT_10c556e0 * 4,0,0);
              iVar1 = 0;
              iVar11 = 0xf;
            }
            thunk_FUN_105989c0(iVar2,local_8,uVar9,iVar11,0xc,iVar1,0,0);
            pAVar5 = local_10;
          }
          local_50 = CONCAT31(local_50._1_3_,0x14);
          FUN_10599280();
          local_50 = 5;
          if ((DAT_10c556e0 == 0) || (local_14 == (UObject *)0x0)) {
LAB_1059caea:
            uVar9 = DAT_10c516dc - 3U & 0x80000003;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
            }
            DAT_10c516dc = uVar9 + 2;
            DAT_10c596f4 = DAT_10c596f4 + 8192.0;
            *(float *)(local_48 + 0x215c) = *(float *)(local_48 + 0x215c) + 8192.0;
            this = local_14;
            pAVar5 = local_48;
            goto LAB_1059cb3b;
          }
          pAVar4 = ULevel::GetTerrainInfo((ULevel *)local_14);
          local_84 = pAVar4;
          if (DAT_10c556e0 < 1) {
            pUVar6 = (ULevel *)
                     thunk_FUN_10598d90(*(undefined4 *)(pAVar5 + 0x220c),
                                        *(int *)(pAVar5 + 0x2210) + 1);
            if (pUVar6 != (ULevel *)0x0) {
              local_50 = CONCAT31(local_50._1_3_,0x18);
              ATerrainInfo::SetHoriEdge(local_4c,pAVar4);
              pAVar7 = pAVar4;
              pAVar8 = ULevel::GetTerrainInfo(pUVar6);
              ATerrainInfo::SetVertiEdge(pAVar8,pAVar7);
              goto LAB_1059cac8;
            }
          }
          else {
            pUVar6 = (ULevel *)
                     thunk_FUN_10598d90(*(undefined4 *)(pAVar5 + 0x220c),
                                        *(int *)(pAVar5 + 0x2210) + -1);
            pAVar7 = local_4c;
            if (pUVar6 != (ULevel *)0x0) {
              local_50 = CONCAT31(local_50._1_3_,0x16);
              ATerrainInfo::SetHoriEdge(pAVar4,local_4c);
              pAVar5 = ULevel::GetTerrainInfo(pUVar6);
              ATerrainInfo::SetVertiEdge(pAVar5,pAVar4);
              pAVar5 = ULevel::GetTerrainInfo(pUVar6);
              pAVar4 = pAVar7;
LAB_1059cac8:
              ATerrainInfo::SetEndVertexZ(pAVar5,pAVar4);
              local_50 = 0x1a;
              FUN_10599280();
              goto LAB_1059caea;
            }
          }
          goto LAB_1059c18c;
        }
LAB_1059cb3b:
        local_50 = 5;
        if ((_DAT_10c516d8 & 0x10) != 0) {
          if (DAT_10c556e0 < 0) {
            iVar2 = DAT_10c556e0 * -4 + -1;
            iVar1 = DAT_10c556e0 * -4 + -4;
            if (DAT_10c516dc < 0) {
              uVar9 = DAT_10c516dc * -4 & 0xff;
              thunk_FUN_105989c0(uVar9,0xf,iVar1,iVar2,0,0,0,0);
              iVar11 = DAT_10c516dc * 4 + 0x10;
              iVar10 = uVar9 - 1;
              uVar9 = 0;
            }
            else {
              uVar9 = (4 - DAT_10c516dc) * 4 & 0xff;
              thunk_FUN_105989c0(0,uVar9 - 1,iVar1,iVar2,DAT_10c516dc * 4,0,0,0);
              iVar11 = 0;
              iVar10 = 0xf;
            }
            thunk_FUN_105989c0(uVar9,iVar10,iVar1,iVar2,iVar11,0,0,0);
            pAVar5 = local_10;
          }
          else {
            iVar2 = DAT_10c556e0 * -4 + 0xf;
            iVar1 = (3 - DAT_10c556e0) * 4;
            if (DAT_10c516dc < 0) {
              uVar9 = DAT_10c516dc * -4 & 0xff;
              thunk_FUN_105989c0(uVar9,0xf,iVar1,iVar2,0,0,0,0);
              iVar11 = DAT_10c516dc * 4 + 0x10;
              iVar10 = uVar9 - 1;
              uVar9 = 0;
            }
            else {
              uVar9 = (4 - DAT_10c516dc) * 4 & 0xff;
              thunk_FUN_105989c0(0,uVar9 - 1,iVar1,iVar2,DAT_10c516dc * 4,0,0,0);
              iVar11 = 0;
              iVar10 = 0xf;
            }
            thunk_FUN_105989c0(uVar9,iVar10,iVar1,iVar2,iVar11,0,0,0);
            pAVar5 = local_10;
            local_50 = CONCAT31(local_50._1_3_,0x1c);
            ATerrainInfo::SetHoriEdge(local_4c,local_10);
            local_50 = 0;
          }
          local_50 = CONCAT31(local_50._1_3_,0x1e);
          FUN_105996f0();
          local_50 = 5;
          if ((DAT_10c516dc == 0) || (local_14 == (UObject *)0x0)) {
LAB_1059ce62:
            uVar9 = DAT_10c556e0 + 2U & 0x80000003;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
            }
            DAT_10c556e0 = uVar9 - 1;
            DAT_10c596f8 = DAT_10c596f8 - 8192.0;
            *(float *)(local_48 + 0x2160) = *(float *)(local_48 + 0x2160) - 8192.0;
            this = local_14;
            pAVar5 = local_48;
            goto LAB_1059ceb3;
          }
          pAVar4 = ULevel::GetTerrainInfo((ULevel *)local_14);
          local_84 = pAVar4;
          if (DAT_10c516dc < 1) {
            pUVar6 = (ULevel *)
                     thunk_FUN_10598d90(*(int *)(pAVar5 + 0x220c) + 1,
                                        *(undefined4 *)(pAVar5 + 0x2210));
            pAVar7 = local_4c;
            if (pUVar6 != (ULevel *)0x0) {
              local_50 = CONCAT31(local_50._1_3_,0x22);
              ATerrainInfo::SetVertiEdge(local_4c,pAVar4);
              pAVar5 = ULevel::GetTerrainInfo(pUVar6);
              ATerrainInfo::SetHoriEdge(pAVar4,pAVar5);
              pAVar5 = ULevel::GetTerrainInfo(pUVar6);
              goto LAB_1059ce40;
            }
          }
          else {
            pUVar6 = (ULevel *)
                     thunk_FUN_10598d90(*(int *)(pAVar5 + 0x220c) + -1,
                                        *(undefined4 *)(pAVar5 + 0x2210));
            if (pUVar6 != (ULevel *)0x0) {
              local_50 = CONCAT31(local_50._1_3_,0x20);
              ATerrainInfo::SetVertiEdge(pAVar4,local_4c);
              pAVar7 = ULevel::GetTerrainInfo(pUVar6);
              ATerrainInfo::SetHoriEdge(pAVar4,pAVar7);
              pAVar7 = pAVar4;
LAB_1059ce40:
              ATerrainInfo::SetEndVertexZ(pAVar7,pAVar5);
              local_50 = 0x24;
              FUN_105996f0();
              goto LAB_1059ce62;
            }
          }
          goto LAB_1059c18c;
        }
LAB_1059ceb3:
        iVar1 = DAT_10c516dc;
        local_50 = 5;
        if ((_DAT_10c516d8 & 0x20) != 0) {
          if (DAT_10c556e0 < 1) {
            if (DAT_10c516dc < 0) {
              iVar11 = DAT_10c556e0 * -4 + 3;
              local_8 = DAT_10c556e0 * -4;
              uVar9 = DAT_10c516dc * -4 & 0xff;
              thunk_FUN_105989c0(uVar9,0xf,local_8,iVar11,0,0xc,0,0);
              iVar1 = iVar1 * 4 + 0x10;
              iVar2 = uVar9 - 1;
              uVar9 = 0;
            }
            else {
              iVar11 = DAT_10c556e0 * -4 + 3;
              local_8 = DAT_10c556e0 * -4;
              uVar9 = (4 - DAT_10c516dc) * 4 & 0xff;
              thunk_FUN_105989c0(0,uVar9 - 1,local_8,iVar11,DAT_10c516dc * 4,0xc,0,0);
              iVar1 = 0;
              iVar2 = 0xf;
            }
            thunk_FUN_105989c0(uVar9,iVar2,local_8,iVar11,iVar1,0xc,0,0);
            pAVar5 = local_10;
            local_50 = CONCAT31(local_50._1_3_,0x26);
            ATerrainInfo::SetHoriEdge(local_10,local_4c);
            local_50 = 0;
          }
          else {
            local_8 = DAT_10c556e0 * -4 + 0x13;
            iVar2 = (4 - DAT_10c556e0) * 4;
            if (DAT_10c516dc < 0) {
              uVar9 = DAT_10c516dc * -4 & 0xff;
              thunk_FUN_105989c0(uVar9,0xf,iVar2,local_8,0,0xc,0,0);
              iVar1 = iVar1 * 4 + 0x10;
              iVar11 = uVar9 - 1;
              uVar9 = 0;
            }
            else {
              uVar9 = (4 - DAT_10c516dc) * 4 & 0xff;
              thunk_FUN_105989c0(0,uVar9 - 1,iVar2,local_8,DAT_10c516dc * 4,0xc,0,0);
              iVar1 = 0;
              iVar11 = 0xf;
            }
            thunk_FUN_105989c0(uVar9,iVar11,iVar2,local_8,iVar1,0xc,0,0);
            pAVar5 = local_10;
          }
          local_50 = CONCAT31(local_50._1_3_,0x28);
          FUN_10599ba0();
          local_50 = 5;
          if ((DAT_10c516dc != 0) && (local_14 != (UObject *)0x0)) {
            pAVar4 = ULevel::GetTerrainInfo((ULevel *)local_14);
            local_84 = pAVar4;
            if (DAT_10c516dc < 1) {
              pUVar6 = (ULevel *)
                       thunk_FUN_10598d90(*(int *)(pAVar5 + 0x220c) + 1,
                                          *(undefined4 *)(pAVar5 + 0x2210));
              if (pUVar6 != (ULevel *)0x0) {
                local_50 = CONCAT31(local_50._1_3_,0x2c);
                ATerrainInfo::SetVertiEdge(local_4c,pAVar4);
                pAVar7 = pAVar4;
                pAVar8 = ULevel::GetTerrainInfo(pUVar6);
                ATerrainInfo::SetHoriEdge(pAVar8,pAVar7);
                goto LAB_1059d1ce;
              }
            }
            else {
              pUVar6 = (ULevel *)
                       thunk_FUN_10598d90(*(int *)(pAVar5 + 0x220c) + -1,
                                          *(undefined4 *)(pAVar5 + 0x2210));
              pAVar7 = local_4c;
              if (pUVar6 != (ULevel *)0x0) {
                local_50 = CONCAT31(local_50._1_3_,0x2a);
                ATerrainInfo::SetVertiEdge(pAVar4,local_4c);
                pAVar5 = ULevel::GetTerrainInfo(pUVar6);
                ATerrainInfo::SetHoriEdge(pAVar5,pAVar4);
                pAVar5 = ULevel::GetTerrainInfo(pUVar6);
                pAVar4 = pAVar7;
LAB_1059d1ce:
                ATerrainInfo::SetEndVertexZ(pAVar5,pAVar4);
                local_50 = 0x2e;
                FUN_10599ba0();
                goto LAB_1059d1f0;
              }
            }
LAB_1059c18c:
            local_c = 0;
            goto LAB_1059d460;
          }
LAB_1059d1f0:
          uVar9 = DAT_10c556e0 - 3U & 0x80000003;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
          }
          DAT_10c556e0 = uVar9 + 2;
          DAT_10c596f8 = DAT_10c596f8 + 8192.0;
          *(float *)(local_48 + 0x2160) = *(float *)(local_48 + 0x2160) + 8192.0;
          this = local_14;
          pAVar5 = local_48;
        }
        for (iStack_9c = 0; iStack_9c < *(int *)(pAVar5 + 0x20f8); iStack_9c = iStack_9c + 1) {
          *(undefined4 *)(*(int *)(*(int *)(pAVar5 + 0x20f4) + iStack_9c * 4) + 0x138) = 1;
        }
      }
      pUVar6 = local_20;
      local_50 = 0x33;
      this_00 = local_24;
      if (local_20 != (ULevel *)0x0) {
        if (*(int *)(local_20 + 0x11d0) == 0) {
          iVar1 = ULevel::EndLoadSWLevel(local_20,1);
          this_00 = local_24;
          if (iVar1 != 0) goto LAB_1059d4f0;
        }
        else {
          iVar1 = thunk_FUN_1059bcd0(&local_20);
          if ((iVar1 != 0) && (*(int *)GLog_exref != 0)) {
            FOutputDevice::Logf2(*(FOutputDevice **)(pUVar6 + 0x11cc),*(ushort **)GLog_exref);
          }
        }
      }
      if (this != (UObject *)0x0) {
        if (*(int *)(this + 0x11d0) == 0) {
          iVar1 = ULevel::EndLoadSWLevel((ULevel *)this,1);
          if (iVar1 != 0) goto LAB_1059d4f0;
        }
        else {
          iVar1 = thunk_FUN_1059bcd0();
          if ((iVar1 != 0) && (*(int *)GLog_exref != 0)) {
            FOutputDevice::Logf2(*(FOutputDevice **)(this + 0x11c8),*(ushort **)GLog_exref);
          }
        }
      }
      local_50 = 0x35;
      fStack_104 = param_1;
      fStack_100 = param_2;
      uStack_fc = param_3;
      UGameEngine::AttachLevel(this_00,*(ULevel **)(this_00 + 0x19c),pUVar6,(FVector *)&fStack_104);
      if (this != (UObject *)0x0) {
        UGameEngine::AttachLevel
                  (this_00,*(ULevel **)(this_00 + 0x19c),(ULevel *)this,(FVector *)&fStack_104);
      }
    }
LAB_1059d460:
    DAT_10b13f80 = -1;
    DAT_10b13f7c = -1;
    DAT_10b13f78 = -1;
    DAT_10b13f74 = -1;
    _DAT_10c516d8 = 0;
  }
  else {
    local_20 = (ULevel *)thunk_FUN_10598d90(DAT_10b13f74,DAT_10b13f7c);
    iVar1 = (DAT_10b13f74 * 0x40 + DAT_10b13f7c) * 4;
    if (*(int *)(&DAT_10c556e8 + iVar1) != 0) goto LAB_1059c18c;
    if (local_20 == (ULevel *)0x0) {
      if (*(int *)(&DAT_10c516e0 + iVar1) != 0) goto LAB_1059d4f0;
      *(undefined4 *)(&DAT_10c516e0 + iVar1) = 1;
      thunk_FUN_104afc20();
    }
    if (*(int *)(&DAT_10c516e0 + iVar1) == 0) {
      if ((DAT_10b13f74 != DAT_10b13f78) || (DAT_10b13f7c != DAT_10b13f80)) {
        this = (UObject *)thunk_FUN_10598d90(DAT_10b13f78,DAT_10b13f80);
        iVar1 = (DAT_10b13f78 * 0x40 + DAT_10b13f80) * 4;
        if (*(int *)(&DAT_10c556e8 + iVar1) != 0) goto LAB_1059c18c;
        local_14 = this;
        if (this == (UObject *)0x0) {
          if (*(int *)(&DAT_10c516e0 + iVar1) != 0) goto LAB_1059d4f0;
          *(undefined4 *)(&DAT_10c516e0 + iVar1) = 1;
          thunk_FUN_104afc20();
        }
        if (*(int *)(&DAT_10c516e0 + iVar1) != 0) goto LAB_1059d4f0;
      }
      UObject::FinishThreadLoad();
      goto code_r0x1059c3ed;
    }
LAB_1059d4f0:
    local_c = 1;
  }
  ExceptionList = pvStack_58;
  return local_c;
}


// ==== 1059c566 Catch@1059c566

void Catch_1059c566(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x88) = *(undefined4 *)(unaff_EBP + -0x144);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x88,&DAT_10914c48);
}


// ==== 1059c583 Catch@1059c583

void Catch_1059c583(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TInfo1");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059c6c5 Catch@1059c6c5

void Catch_1059c6c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = *(undefined4 *)(unaff_EBP + -0x124);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xa8,&DAT_10914c48);
}


// ==== 1059c6e2 Catch@1059c6e2

void Catch_1059c6e2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TInfo2");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059c82b Catch@1059c82b

void Catch_1059c82b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x13c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_10914c48);
}


// ==== 1059c842 Catch@1059c842

void Catch_1059c842(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShiftTerrainXP1_2");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059c84c Catch@1059c84c

void Catch_1059c84c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x98) = *(undefined4 *)(unaff_EBP + -0xdc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x98,&DAT_10914c48);
}


// ==== 1059c869 Catch@1059c869

void Catch_1059c869(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TInfo3");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059c873 Catch@1059c873

void Catch_1059c873(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x9c) = *(undefined4 *)(unaff_EBP + -0x14c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x9c,&DAT_10914c48);
}


// ==== 1059c890 Catch@1059c890

void Catch_1059c890(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShiftTerrainXP1_1");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059c90c Catch@1059c90c

void Catch_1059c90c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x154);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_10914c48);
}


// ==== 1059c923 Catch@1059c923

void Catch_1059c923(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TInfo4");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059ca5c Catch@1059ca5c

void Catch_1059ca5c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x84) = *(undefined4 *)(unaff_EBP + -0x118);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x84,&DAT_10914c48);
}


// ==== 1059ca79 Catch@1059ca79

void Catch_1059ca79(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TInfo5");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059cbbf Catch@1059cbbf

void Catch_1059cbbf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0xe8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x54,&DAT_10914c48);
}


// ==== 1059cbd6 Catch@1059cbd6

void Catch_1059cbd6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShiftTerrainXM2_2");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059cbe0 Catch@1059cbe0

void Catch_1059cbe0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa4) = *(undefined4 *)(unaff_EBP + -0x148);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xa4,&DAT_10914c48);
}


// ==== 1059cbfd Catch@1059cbfd

void Catch_1059cbfd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TInfo6");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059cc07 Catch@1059cc07

void Catch_1059cc07(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0xf0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x5c,&DAT_10914c48);
}


// ==== 1059cc1e Catch@1059cc1e

void Catch_1059cc1e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShiftTerrainXM2_1");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059cc84 Catch@1059cc84

void Catch_1059cc84(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x8c) = *(undefined4 *)(unaff_EBP + -0x120);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x8c,&DAT_10914c48);
}


// ==== 1059cca1 Catch@1059cca1

void Catch_1059cca1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TInfo7");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059cdd1 Catch@1059cdd1

void Catch_1059cdd1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + -0xf8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -100,&DAT_10914c48);
}


// ==== 1059cde8 Catch@1059cde8

void Catch_1059cde8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TInfo8");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059cf36 Catch@1059cf36

void Catch_1059cf36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xac) = *(undefined4 *)(unaff_EBP + -0x140);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xac,&DAT_10914c48);
}


// ==== 1059cf53 Catch@1059cf53

void Catch_1059cf53(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShiftTerrainYP3_2");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059cf5d Catch@1059cf5d

void Catch_1059cf5d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + -0x100);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x6c,&DAT_10914c48);
}


// ==== 1059cf74 Catch@1059cf74

void Catch_1059cf74(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TInfo9");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059cf7e Catch@1059cf7e

void Catch_1059cf7e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x94) = *(undefined4 *)(unaff_EBP + -0x128);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x94,&DAT_10914c48);
}


// ==== 1059cf9b Catch@1059cf9b

void Catch_1059cf9b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShiftTerrainYP3_1");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059d015 Catch@1059d015

void Catch_1059d015(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0x108);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x74,&DAT_10914c48);
}


// ==== 1059d02c Catch@1059d02c

void Catch_1059d02c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TInfo10");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059d162 Catch@1059d162

void Catch_1059d162(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa0) = *(undefined4 *)(unaff_EBP + -0x150);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xa0,&DAT_10914c48);
}


// ==== 1059d17f Catch@1059d17f

void Catch_1059d17f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TInfo11");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059d26b Catch@1059d26b

void Catch_1059d26b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x7c) = *(undefined4 *)(unaff_EBP + -0x110);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x7c,&DAT_10914c48);
}


// ==== 1059d282 Catch@1059d282

void Catch_1059d282(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShiftTerrainYM4_2");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059d28c Catch@1059d28c

void Catch_1059d28c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x138);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 1059d2a3 Catch@1059d2a3

void Catch_1059d2a3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TInfo12");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059d2ad Catch@1059d2ad

void Catch_1059d2ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0xe0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_10914c48);
}


// ==== 1059d2c4 Catch@1059d2c4

void Catch_1059d2c4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShiftTerrainYM4_1");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059d336 Catch@1059d336

void Catch_1059d336(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0xe4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x58,&DAT_10914c48);
}


// ==== 1059d34d Catch@1059d34d

void Catch_1059d34d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UpdateTerrainShadow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059d357 Catch@1059d357

void Catch_1059d357(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + -0xec);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x60,&DAT_10914c48);
}


// ==== 1059d36e Catch@1059d36e

void Catch_1059d36e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"GetTerrainInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059d486 Catch@1059d486

void Catch_1059d486(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + -0xf4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x68,&DAT_10914c48);
}


// ==== 1059d49d Catch@1059d49d

void Catch_1059d49d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Shift_Actors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059d4a7 Catch@1059d4a7

void Catch_1059d4a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + -0xfc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x70,&DAT_10914c48);
}


// ==== 1059d4be Catch@1059d4be

void Catch_1059d4be(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ActorsInitialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059d4c8 Catch@1059d4c8

void Catch_1059d4c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + -0x104);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x78,&DAT_10914c48);
}


// ==== 1059d4df Catch@1059d4df

void Catch_1059d4df(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Shift_Terrain");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059d510 Catch@1059d510

void Catch_1059d510(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x80) = *(undefined4 *)(unaff_EBP + -0x10c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x80,&DAT_10914c48);
}


// ==== 1059d527 Catch@1059d527

void Catch_1059d527(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Load_Level");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059d531 Catch@1059d531

void Catch_1059d531(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x114);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 1059d548 Catch@1059d548

void Catch_1059d548(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Range_Check");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059d552 Catch@1059d552

void Catch_1059d552(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x90) = *(undefined4 *)(unaff_EBP + -0x11c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x90,&DAT_10914c48);
}


// ==== 1059d56f Catch@1059d56f

void Catch_1059d56f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::AdjustTerrain");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059db40 FUN_1059db40

void FUN_1059db40(void)

{
  UClass *pUVar1;
  int iVar2;
  FNameEntry *pFVar3;
  FArchive *in_ECX;
  int iVar4;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1081e579;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FArchive::FArchive(in_ECX);
  iVar4 = 0;
  *(undefined ***)in_ECX = FL2ArchiveTagUsed::vftable;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  local_8 = 1;
  DAT_10c516d0 = 0;
  pUVar1 = UObject::StaticClass();
  thunk_FUN_1038c9c0(pUVar1);
  while( true ) {
    if (*(int *)(GObjObjects_exref + 4) <= local_28) break;
    UObject::SetFlags(*(UObject **)(*(int *)GObjObjects_exref + local_28 * 4),0x42);
    thunk_FUN_103737b0();
  }
  while( true ) {
    iVar2 = FName::GetMaxNames();
    if (iVar2 <= iVar4) break;
    pFVar3 = FName::GetEntry(iVar4);
    if (pFVar3 != (FNameEntry *)0x0) {
      pFVar3 = FName::GetEntry(iVar4);
      *(uint *)(pFVar3 + 4) = *(uint *)(pFVar3 + 4) | 2;
    }
    iVar4 = iVar4 + 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1059dc03 Catch@1059dc03

void Catch_1059dc03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1059dc17 Catch@1059dc17

void Catch_1059dc17(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2ArchiveTagUsed::FL2ArchiveTagUsed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059dc80 FUN_1059dc80

void FUN_1059dc80(undefined4 *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  int in_ECX;
  UObject *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1081e590;
  local_10 = ExceptionList;
  DAT_10c516d0 = DAT_10c516d0 + 1;
  this = (UObject *)*param_1;
  if (this != (UObject *)0x0) {
    ExceptionList = &local_10;
    uVar2 = UObject::GetFlags(this);
    if ((uVar2 & 0x400) == 0) {
      uVar2 = UObject::GetFlags(this);
      if ((uVar2 & 2) != 0) {
        local_8 = 0;
        UObject::ClearFlags(this,0x40000002);
        uVar2 = UObject::GetFlags(this);
        if ((uVar2 & 0x40) == 0) {
          if (*(UObject **)(in_ECX + 0x38) != (UObject *)0x0) {
            UObject::GetFullName(*(UObject **)(in_ECX + 0x38),(ushort *)0x0);
          }
          UObject::GetFullName(this,(ushort *)0x0);
          FOutputDevice::Logf(*(FOutputDevice **)GNull_exref,(EName)*(FOutputDevice **)GNull_exref,
                              (ushort *)0x2f8);
        }
        else {
          uVar1 = *(undefined4 *)(in_ECX + 0x38);
          *(UObject **)(in_ECX + 0x38) = this;
          (**(code **)(*(int *)this + 0x2c))();
          uVar2 = UObject::GetFlags(this);
          if ((uVar2 & 0x40000000) == 0) {
            UObject::GetFullName(this,(ushort *)0x0);
            FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
          }
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


// ==== 1059dda3 Catch@1059dda3

void Catch_1059dda3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1059ddb7 Catch@1059ddb7

void Catch_1059ddb7(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"TestReach");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059de50 FUN_1059de50

void FUN_1059de50(FName *param_1)

{
  FName::ClearFlags(param_1,2);
  return;
}


// ==== 1059de70 FUN_1059de70

void FUN_1059de70(byte param_1)

{
  FArchive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081e5a9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FArchive::~FArchive(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1059dee0 FUN_1059dee0

void FUN_1059dee0(int *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  UClass *pUVar3;
  ulong uVar4;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  puStack_c = &LAB_1081e5c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1059ace0(param_1,GObjRoot_exref);
  pUVar3 = UObject::StaticClass();
  thunk_FUN_1038c9c0(pUVar3);
  uVar2 = param_3;
  while( true ) {
    if (*(int *)(GObjObjects_exref + 4) <= local_20) break;
    uVar4 = UObject::GetFlags(*(UObject **)(*(int *)GObjObjects_exref + local_20 * 4));
    if ((param_2 & uVar4) != 0) {
      uVar4 = UObject::GetFlags(*(UObject **)(*(int *)GObjObjects_exref + local_20 * 4));
      if ((uVar4 & uVar2) == uVar2) {
        param_1 = *(int **)(*(int *)GObjObjects_exref + local_20 * 4);
        (**(code **)(*piVar1 + 0x18))(&param_1);
      }
    }
    thunk_FUN_103737b0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1059dfa6 Catch@1059dfa6

void Catch_1059dfa6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1059dfba Catch@1059dfba

void Catch_1059dfba(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::L2SerializeRootSet");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059e020 FUN_1059e020

void FUN_1059e020(ulong param_1)

{
  undefined1 *puVar1;
  UGameEngine *in_ECX;
  FOutputDevice *this;
  float10 fVar2;
  FArchive local_60 [60];
  double local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081e5d8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff94;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffff94;
  if (*(int *)GLog_exref != 0) {
    ExceptionList = &local_10;
    FOutputDevice::Logf2((FOutputDevice *)in_ECX,*(EName *)GLog_exref,(ushort *)0x2f8);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  fVar2 = (float10)thunk_FUN_104da1f0();
  local_24 = (double)fVar2;
  *(undefined4 *)GL2GCState_exref = 2;
  thunk_FUN_1059db40();
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GL2GCState_exref = 3;
  UGameEngine::L2SerializeRootSet(in_ECX,local_60,param_1,0x40);
  thunk_FUN_104da1f0();
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
  }
  *(undefined4 *)GL2GCState_exref = 4;
  UObject::PurgeGarbage();
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_10598ae0();
  ExceptionList = local_10;
  return;
}


// ==== 1059e10d Catch@1059e10d

void Catch_1059e10d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1059e121 Catch@1059e121

void Catch_1059e121(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::L2CollectGarbage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059e190 FUN_1059e190

void FUN_1059e190(ulong param_1)

{
  undefined1 *puVar1;
  UGameEngine *in_ECX;
  FOutputDevice *this;
  float10 fVar2;
  FArchive local_60 [60];
  double local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081e5f8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff94;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffff94;
  if (*(int *)GLog_exref != 0) {
    ExceptionList = &local_10;
    FOutputDevice::Logf2((FOutputDevice *)in_ECX,*(EName *)GLog_exref,(ushort *)0x2f8);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  fVar2 = (float10)thunk_FUN_104da1f0();
  local_24 = (double)fVar2;
  *(undefined4 *)GL2GCState_exref = 2;
  thunk_FUN_1059db40();
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GL2GCState_exref = 3;
  UGameEngine::L2SerializeRootSet(in_ECX,local_60,param_1,0x40);
  thunk_FUN_104da1f0();
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
  }
  *(undefined4 *)GL2GCState_exref = 4;
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_10598ae0();
  ExceptionList = local_10;
  return;
}


// ==== 1059e277 Catch@1059e277

void Catch_1059e277(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1059e28b Catch@1059e28b

void Catch_1059e28b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::L2ThrCollectGarbage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059e2f0 FUN_1059e2f0

void FUN_1059e2f0(ULevel *param_1)

{
  int *piVar1;
  ULevel *pUVar2;
  UObject *pUVar3;
  int iVar4;
  ATerrainInfo *pAVar5;
  UObject *pUVar6;
  FOutputDevice *in_ECX;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  FOutputDevice *pFVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int local_78;
  int local_74;
  int local_6c;
  int local_68;
  int local_5c;
  int local_54;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081e620;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((DAT_10c596e8 == 0) && (param_1 != (ULevel *)0x0)) &&
     (param_1 != *(ULevel **)(in_ECX + 0x19c))) {
    ExceptionList = &local_10;
    if (*(int *)GLog_exref != 0) {
      ExceptionList = &local_10;
      FOutputDevice::Logf2(in_ECX,*(ushort **)GLog_exref);
    }
    thunk_FUN_103696f0();
    local_8 = CONCAT31(local_8._1_3_,1);
    for (iVar8 = 0; iVar8 < *(int *)(param_1 + 0x11b4); iVar8 = iVar8 + 1) {
      thunk_FUN_104aed20();
    }
    for (iVar8 = 0; iVar8 < *(int *)(param_1 + 0x11c0); iVar8 = iVar8 + 1) {
      thunk_FUN_104aed20();
    }
    thunk_FUN_104aed20();
    for (iVar8 = 0; iVar8 < *(int *)(param_1 + 0x11b4); iVar8 = iVar8 + 1) {
    }
    FArray::Empty((FArray *)(param_1 + 0x11b0),4,0);
    for (iVar8 = 0; iVar8 < *(int *)(param_1 + 0x11c0); iVar8 = iVar8 + 1) {
    }
    FArray::Empty((FArray *)(param_1 + 0x11bc),4,0);
    thunk_FUN_103696f0();
    local_8 = CONCAT31(local_8._1_3_,2);
    pFVar7 = in_ECX + 0x19c;
    if (*(int *)pFVar7 != 0) {
      iVar8 = 0;
      while( true ) {
        if (*(int *)(*(int *)pFVar7 + 0x11b4) <= iVar8) break;
        thunk_FUN_104aed20();
        iVar8 = iVar8 + 1;
      }
      iVar8 = 0;
      while( true ) {
        if (*(int *)(*(int *)pFVar7 + 0x11c0) <= iVar8) break;
        thunk_FUN_104aed20();
        iVar8 = iVar8 + 1;
      }
      thunk_FUN_104aed20();
      if (*(int *)(in_ECX + 0x1a4) != 0) {
        thunk_FUN_104aed20();
      }
      if (*(int *)(in_ECX + 0x1a0) != 0) {
        thunk_FUN_104aed20();
      }
    }
    pFVar7 = (FOutputDevice *)GL2GCState_exref;
    *(undefined4 *)GL2GCState_exref = 1;
    if (*(int *)GL2EnablePurgeLevel_exref == 0) {
      for (iVar8 = 0; iVar8 < local_74; iVar8 = iVar8 + 1) {
        pUVar2 = *(ULevel **)(local_78 + iVar8 * 4);
        pAVar5 = ULevel::GetTerrainInfo(pUVar2);
        if (pAVar5 != (ATerrainInfo *)0x0) {
          pAVar5 = ULevel::GetTerrainInfo(pUVar2);
          uVar10 = *(undefined4 *)(pAVar5 + 0x2210);
          pAVar5 = ULevel::GetTerrainInfo(pUVar2);
          thunk_FUN_105897f0(*(undefined4 *)(pAVar5 + 0x220c),uVar10);
        }
        pAVar5 = ULevel::GetTerrainInfo(pUVar2);
        pFVar7 = extraout_ECX;
        if (pAVar5 != (ATerrainInfo *)0x0) {
          ATerrainInfo::ClearTerrain(pAVar5);
          pFVar7 = extraout_ECX_00;
        }
      }
    }
    else {
      for (local_18 = 0; local_18 < local_74; local_18 = local_18 + 1) {
        pUVar2 = *(ULevel **)(local_78 + local_18 * 4);
        pAVar5 = ULevel::GetTerrainInfo(pUVar2);
        if (pAVar5 != (ATerrainInfo *)0x0) {
          pAVar5 = ULevel::GetTerrainInfo(pUVar2);
          uVar10 = *(undefined4 *)(pAVar5 + 0x2210);
          pAVar5 = ULevel::GetTerrainInfo(pUVar2);
          thunk_FUN_105897f0(*(undefined4 *)(pAVar5 + 0x220c),uVar10);
        }
        pAVar5 = ULevel::GetTerrainInfo(pUVar2);
        if (pAVar5 != (ATerrainInfo *)0x0) {
          ATerrainInfo::ClearTerrain(pAVar5);
        }
        if (pUVar2 == param_1) {
          for (iVar8 = *(int *)(param_1 + 0x138); iVar8 < *(int *)(param_1 + 0x3c);
              iVar8 = iVar8 + 1) {
            piVar1 = (int *)(*(int *)(param_1 + 0x38) + iVar8 * 4);
            if (*piVar1 != 0) {
              (**(code **)(*(int *)param_1 + 0xac))(*piVar1);
            }
          }
        }
        thunk_FUN_1059bd20();
        while( true ) {
          if (*(int *)(GObjObjects_exref + 4) <= local_54) break;
          pUVar3 = *(UObject **)(*(int *)GObjObjects_exref + local_54 * 4);
          pUVar6 = UObject::GetOuter((UObject *)pUVar2);
          iVar8 = UObject::IsIn(pUVar3,pUVar6);
          if (iVar8 != 0) {
            UObject::SetFlags(*(UObject **)(*(int *)GObjObjects_exref + local_54 * 4),0x400);
          }
          thunk_FUN_103737b0();
        }
        thunk_FUN_1059bd40();
        while( true ) {
          if (*(int *)(GObjObjects_exref + 4) <= local_5c) break;
          pUVar3 = *(UObject **)(*(int *)GObjObjects_exref + local_5c * 4);
          pUVar6 = UObject::GetOuter((UObject *)pUVar2);
          iVar8 = UObject::IsIn(pUVar3,pUVar6);
          if (iVar8 != 0) {
            UObject::SetFlags(*(UObject **)(*(int *)GObjObjects_exref + local_5c * 4),0x400);
          }
          thunk_FUN_103737b0();
        }
      }
      for (iVar8 = 0; iVar8 < local_68; iVar8 = iVar8 + 1) {
        iVar4 = *(int *)(local_6c + iVar8 * 4);
        for (iVar9 = 0; iVar9 < *(int *)(iVar4 + 0x3c); iVar9 = iVar9 + 1) {
          piVar1 = (int *)(*(int *)(iVar4 + 0x38) + iVar9 * 4);
          if (*piVar1 != 0) {
            UObject::ClearFlags((UObject *)*piVar1,0x400);
          }
        }
        for (iVar9 = 0; iVar9 < *(int *)(iVar4 + 0x4c); iVar9 = iVar9 + 1) {
          piVar1 = (int *)(*(int *)(iVar4 + 0x48) + iVar9 * 4);
          if (*piVar1 != 0) {
            UObject::ClearFlags((UObject *)*piVar1,0x400);
          }
        }
      }
      (**(code **)(*(int *)param_1 + 0xb4))();
      (**(code **)(**(int **)(in_ECX + 0x19c) + 0xb4))(1);
      UGameEngine::L2CollectGarbage((UGameEngine *)in_ECX,0x4000000);
      pFVar7 = extraout_ECX_01;
    }
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(pFVar7,*(ushort **)GLog_exref);
    }
    local_8._0_1_ = 1;
    thunk_FUN_103962b0();
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_103962b0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1059e733 Catch@1059e733

void Catch_1059e733(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_10914c48);
}


// ==== 1059e747 Catch@1059e747

void Catch_1059e747(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::DetachLevelWithAllSubLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059e890 FUN_1059e890

void FUN_1059e890(ULevel *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  UObject *pUVar2;
  ULevel *pUVar3;
  int iVar4;
  ULevel *this;
  ATerrainInfo *pAVar5;
  ATerrainInfo *pAVar6;
  UObject *pUVar7;
  UGameEngine *in_ECX;
  int iVar8;
  int local_50;
  int local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081e630;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 != (ULevel *)0x0) {
    ExceptionList = &local_10;
    if (((*(int *)GL2UseReplayManager_exref != 0) &&
        (ExceptionList = &local_10,
        *(FL2ReplayManager **)(in_ECX + 0x198) != (FL2ReplayManager *)0x0)) &&
       (ExceptionList = &local_10,
       iVar4 = FL2ReplayManager::GetState(*(FL2ReplayManager **)(in_ECX + 0x198)), iVar4 == 2)) {
      FL2ReplayManager::AddCurrentUsingPackageNames(*(FL2ReplayManager **)(in_ECX + 0x198));
    }
    this = (ULevel *)thunk_FUN_10598d90(param_2,param_3);
    if ((this != (ULevel *)0x0) && (DAT_10c596e8 == 0)) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
      }
      DAT_10c596e8 = 1;
      *(undefined4 *)GL2GCState_exref = 1;
      thunk_FUN_105897f0(param_2,param_3);
      thunk_FUN_1059bcd0();
      if (*(int *)GL2EnablePurgeLevel_exref == 0) {
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2((FOutputDevice *)GL2EnablePurgeLevel_exref,*(ushort **)GLog_exref);
        }
        pAVar5 = ULevel::GetTerrainInfo(this);
        ATerrainInfo::ClearTerrain(pAVar5);
      }
      else {
        pAVar5 = ULevel::GetTerrainInfo(this);
        pAVar6 = ULevel::GetTerrainInfo(param_1);
        if (pAVar5 != pAVar6) {
          iVar4 = *(int *)(pAVar6 + 0x20f8);
          while (iVar4 = iVar4 + -1, -1 < iVar4) {
            if (*(ATerrainInfo **)(*(int *)(*(int *)(pAVar6 + 0x20f4) + iVar4 * 4) + 0x4c) == pAVar5
               ) {
              thunk_FUN_10389d80(iVar4);
            }
          }
        }
        ATerrainInfo::ClearTerrain(pAVar5);
        if (this == param_1) {
          for (iVar4 = *(int *)(param_1 + 0x138); iVar4 < *(int *)(param_1 + 0x3c);
              iVar4 = iVar4 + 1) {
            piVar1 = (int *)(*(int *)(param_1 + 0x38) + iVar4 * 4);
            if (*piVar1 != 0) {
              (**(code **)(*(int *)param_1 + 0xac))(*piVar1);
            }
          }
        }
        thunk_FUN_1059bd20();
        while (local_50 < *(int *)(GObjObjects_exref + 4)) {
          pUVar2 = *(UObject **)(*(int *)GObjObjects_exref + local_50 * 4);
          pUVar7 = UObject::GetOuter((UObject *)this);
          iVar4 = UObject::IsIn(pUVar2,pUVar7);
          if (iVar4 == 0) {
            pUVar2 = *(UObject **)(*(int *)GObjObjects_exref + local_50 * 4);
            pUVar7 = UObject::GetOuter((UObject *)param_1);
            iVar4 = UObject::IsIn(pUVar2,pUVar7);
            if (iVar4 != 0) goto LAB_1059ea8a;
          }
          else {
LAB_1059ea8a:
            UObject::SetFlags(*(UObject **)(*(int *)GObjObjects_exref + local_50 * 4),0x400);
          }
          thunk_FUN_103737b0();
        }
        thunk_FUN_1059bd40();
        while (local_50 < *(int *)(GObjObjects_exref + 4)) {
          pUVar2 = *(UObject **)(*(int *)GObjObjects_exref + local_50 * 4);
          pUVar7 = UObject::GetOuter((UObject *)this);
          iVar4 = UObject::IsIn(pUVar2,pUVar7);
          if (iVar4 == 0) {
            pUVar2 = *(UObject **)(*(int *)GObjObjects_exref + local_50 * 4);
            pUVar7 = UObject::GetOuter((UObject *)param_1);
            iVar4 = UObject::IsIn(pUVar2,pUVar7);
            if (iVar4 != 0) goto LAB_1059eafa;
          }
          else {
LAB_1059eafa:
            UObject::SetFlags(*(UObject **)(*(int *)GObjObjects_exref + local_50 * 4),0x400);
          }
          thunk_FUN_103737b0();
        }
        for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x3c); iVar4 = iVar4 + 1) {
          piVar1 = (int *)(*(int *)(param_1 + 0x38) + iVar4 * 4);
          if (*piVar1 != 0) {
            UObject::ClearFlags((UObject *)*piVar1,0x400);
          }
        }
        for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x4c); iVar4 = iVar4 + 1) {
          piVar1 = (int *)(*(int *)(param_1 + 0x48) + iVar4 * 4);
          if (*piVar1 != 0) {
            UObject::ClearFlags((UObject *)*piVar1,0x400);
          }
        }
        for (local_1c = 0; local_1c < *(int *)(param_1 + 0x11b4); local_1c = local_1c + 1) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x11b0) + local_1c * 4);
          for (iVar8 = 0; iVar8 < *(int *)(iVar4 + 0x3c); iVar8 = iVar8 + 1) {
            piVar1 = (int *)(*(int *)(iVar4 + 0x38) + iVar8 * 4);
            if (*piVar1 != 0) {
              UObject::ClearFlags((UObject *)*piVar1,0x400);
            }
          }
          for (iVar8 = 0; iVar8 < *(int *)(iVar4 + 0x4c); iVar8 = iVar8 + 1) {
            piVar1 = (int *)(*(int *)(iVar4 + 0x48) + iVar8 * 4);
            if (*piVar1 != 0) {
              UObject::ClearFlags((UObject *)*piVar1,0x400);
            }
          }
        }
        for (local_20 = 0; local_20 < *(int *)(param_1 + 0x11c0); local_20 = local_20 + 1) {
          pUVar3 = *(ULevel **)(*(int *)(param_1 + 0x11bc) + local_20 * 4);
          if (pUVar3 != this) {
            for (iVar4 = 0; iVar4 < *(int *)(pUVar3 + 0x3c); iVar4 = iVar4 + 1) {
              piVar1 = (int *)(*(int *)(pUVar3 + 0x38) + iVar4 * 4);
              if (*piVar1 != 0) {
                UObject::ClearFlags((UObject *)*piVar1,0x400);
              }
            }
            for (iVar4 = 0; iVar4 < *(int *)(pUVar3 + 0x4c); iVar4 = iVar4 + 1) {
              piVar1 = (int *)(*(int *)(pUVar3 + 0x48) + iVar4 * 4);
              if (*piVar1 != 0) {
                UObject::ClearFlags((UObject *)*piVar1,0x400);
              }
            }
          }
        }
        (**(code **)(*(int *)param_1 + 0xb4))();
        UGameEngine::L2CollectGarbage(in_ECX,0x4000000);
      }
      DAT_10c596e8 = 0;
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1059ecaf Catch@1059ecaf

void Catch_1059ecaf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_10914c48);
}


// ==== 1059ecc3 Catch@1059ecc3

void Catch_1059ecc3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::DetachLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059ee00 FUN_1059ee00

void FUN_1059ee00(float param_1,float param_2,undefined4 param_3,int param_4)

{
  ATerrainInfo *pAVar1;
  ULevel *pUVar2;
  UGameEngine *in_ECX;
  int iVar3;
  float10 fVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081e640;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((DAT_10c556e4 == 0) && (DAT_10c596ec == 0)) &&
     ((*(int *)GL2UseReplayManager_exref == 0 ||
      ((*(int *)(in_ECX + 0x198) == 0 || (*(int *)GL2ReplayMode_exref == 0)))))) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x19c) + 0x11b4);
    ExceptionList = &local_10;
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      pUVar2 = *(ULevel **)(*(int *)(*(int *)(in_ECX + 0x19c) + 0x11b0) + iVar3 * 4);
      pAVar1 = ULevel::GetTerrainInfo(pUVar2);
      if ((pAVar1 != (ATerrainInfo *)0x0) &&
         ((fVar4 = (float10)thunk_FUN_10370480(param_1 - *(float *)(pAVar1 + 0x1bc)),
          (float10)35000.0 < fVar4 ||
          (fVar4 = (float10)thunk_FUN_10370480(param_2 - *(float *)(pAVar1 + 0x1c0)),
          (float10)35000.0 < fVar4)))) {
        FArray::Insert((FArray *)(*(int *)(in_ECX + 0x19c) + 0x11bc),0,1,4);
        **(undefined4 **)(*(int *)(in_ECX + 0x19c) + 0x11bc) = pUVar2;
        thunk_FUN_10387920(iVar3,1);
      }
    }
    do {
      if (DAT_10c596e8 == 0) {
        pUVar2 = ULevel::GetRemovalSWLevel(*(ULevel **)(in_ECX + 0x19c));
        if (pUVar2 == (ULevel *)0x0) {
          ExceptionList = local_10;
          return;
        }
        pAVar1 = ULevel::GetTerrainInfo(pUVar2);
        iVar3 = *(int *)(pAVar1 + 0x220c);
        pAVar1 = ULevel::GetTerrainInfo(pUVar2);
        UGameEngine::DetachLevel
                  (in_ECX,*(ULevel **)(in_ECX + 0x19c),iVar3,*(int *)(pAVar1 + 0x2210));
      }
      else if ((*(int *)GL2GCState_exref == 0) || (*(int *)GL2GCState_exref == 4)) {
        (**(code **)(**(int **)(in_ECX + 0x19c) + 0xb4))(1);
        UObject::PurgeGarbage();
        if (*(int *)GL2GCState_exref == 0) {
          DAT_10c596e8 = 0;
        }
      }
    } while (param_4 != 0);
    ExceptionList = local_10;
    return;
  }
  return;
}


// ==== 1059eff3 Catch@1059eff3

void Catch_1059eff3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1059f007 Catch@1059f007

void Catch_1059f007(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::CheckPurgeLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059f0b0 FUN_1059f0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059f0b0(AActor *param_1,float param_2,FOutputDevice *param_3,float param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ATerrainInfo *pAVar1;
  ATerrainInfo *pAVar2;
  int iVar3;
  int iVar4;
  SEAMLESS_RESULT SVar5;
  undefined4 *puVar6;
  UGameEngine *in_ECX;
  int iVar7;
  float fVar8;
  float10 fVar9;
  float fVar10;
  FOutputDevice *pFVar11;
  float *pfVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  FOutputDevice **ppFVar19;
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
  ppFVar19 = local_50;
  puVar18 = local_54;
  uVar15 = *(undefined4 *)(param_1 + 0x1bc);
  uVar16 = *(undefined4 *)(param_1 + 0x1c0);
  uVar17 = *(undefined4 *)(param_1 + 0x1c4);
  ExceptionList = &pvStack_70;
  UGameEngine::GetSWMapXY();
  piVar14 = &local_10;
  piVar13 = &local_c;
  fVar8 = param_2;
  pFVar11 = param_3;
  fVar10 = param_4;
  UGameEngine::GetSWMapXY();
  local_14 = **(float **)(*(int *)(in_ECX + 0x54) + 0x38);
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(local_50[0],*(ushort **)GLog_exref);
  }
  fVar9 = (float10)thunk_FUN_10373830(param_1 + 0x1bc,&param_2,fVar8,pFVar11,fVar10,piVar13,piVar14,
                                      uVar15,uVar16,uVar17,puVar18,ppFVar19);
  if ((float10)16384.0 < fVar9) {
    UGameEngine::FinishRemain(in_ECX);
    (**(code **)(*(int *)in_ECX + 0x74))(1);
    for (local_5c = 0; local_5c < *(int *)(*(int *)(in_ECX + 0x19c) + 0x68); local_5c = local_5c + 1
        ) {
    }
    FArray::Empty((FArray *)(*(int *)(in_ECX + 0x19c) + 100),4,0);
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
  UGameEngine::LoadTeleportMap(in_ECX,local_c,local_10);
  local_18 = (ULevel *)thunk_FUN_10598d90(local_c,local_10);
  if (local_18 != (ULevel *)0x0) {
    local_68 = CONCAT31((int3)((uint)local_68 >> 8),2);
    pAVar1 = ULevel::GetTerrainInfo(local_18);
    pAVar2 = ULevel::GetTerrainInfo(*(ULevel **)(in_ECX + 0x19c));
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
      *(ULevel **)(param_1 + 0x2cc) = local_18;
      local_34 = param_2;
      local_30 = param_3;
      local_2c = param_4;
      local_20 = (8.0 - *(float *)GL2SeamlessMaginotLine_exref) * 32768.0 * 0.0625;
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
        UGameEngine::LoadTeleportMap(in_ECX,iVar3 + local_c,local_10);
      }
      if (iVar4 != 0) {
        UGameEngine::LoadTeleportMap(in_ECX,local_c,iVar4 + local_10);
      }
      if ((iVar3 != 0) && (iVar4 != 0)) {
        UGameEngine::LoadTeleportMap(in_ECX,iVar3 + local_c,iVar4 + local_10);
      }
      do {
        SVar5 = UGameEngine::AdjustTerrain();
        if (SVar5 != 1) break;
        local_8 = ABS(local_34 - DAT_10c596f4);
      } while ((local_20 < local_8) ||
              (local_8 = ABS((float)local_30 - DAT_10c596f8), local_20 < local_8));
    }
    local_68 = 1;
    UGameEngine::AttachLevel(in_ECX,*(ULevel **)(in_ECX + 0x19c),local_18,(FVector *)&param_2);
    fVar8 = param_4;
    fVar10 = param_2;
    pFVar11 = param_3;
    if ((*(int *)(in_ECX + 0x31c) == 0) &&
       ((*(uint *)(*(int *)((int)local_14 + 0x3c) + 0x564) & 0x40000) == 0)) {
      thunk_FUN_104419f0(0x3f800000,0);
      local_28 = param_2;
      local_24 = param_3;
      local_20 = param_4;
      local_48 = param_2;
      local_44 = param_3;
      local_40 = param_4;
      for (local_1c = 0; local_1c < 0x1e; local_1c = local_1c + 1) {
        local_20 = local_20 + 30.0;
        local_40 = local_40 - 30.0;
        iVar3 = **(int **)(in_ECX + 0x19c);
        pfVar12 = &local_34;
        puVar6 = (undefined4 *)AActor::GetCylinderExtent(param_1);
        (**(code **)(iVar3 + 0xe4))
                  (local_ac,param_1,&local_48,&local_28,0x86,*puVar6,puVar6[1],puVar6[2],pfVar12);
        if (local_9c != 0.0) {
          local_14 = local_88 * 12.0;
          fVar8 = local_9c;
          fVar10 = local_a4;
          pFVar11 = local_a0;
          if (local_14 < 1.9) {
            local_9c = (2.15 - local_14) + local_9c;
            fVar8 = local_9c;
            fVar10 = local_a4;
            pFVar11 = local_a0;
          }
          goto LAB_1059f59a;
        }
      }
      local_a4 = param_2;
      local_a0 = param_3;
      local_9c = param_4;
      fVar8 = param_4;
      fVar10 = param_2;
      pFVar11 = param_3;
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(param_3,*(ushort **)GLog_exref);
        fVar8 = local_9c;
        fVar10 = local_a4;
        pFVar11 = local_a0;
      }
    }
LAB_1059f59a:
    (**(code **)(**(int **)(in_ECX + 0x19c) + 0xa8))
              (param_1,fVar10,pFVar11,fVar8,param_5,param_6,param_7);
    (**(code **)(*(int *)param_1 + 0x1c0))();
    UGameEngine::CheckPurgeLevel();
  }
  local_68 = 0;
  iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x19c) + 0x74) + 0x6c);
  *(float *)(iVar3 + 0x164) = *(float *)(iVar3 + 0x164) - 1000.0;
  iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x19c) + 0x74) + 0x18c);
  for (local_38 = 0; local_38 < *(int *)(iVar3 + 0x3c); local_38 = local_38 + 1) {
  }
  FArray::Empty((FArray *)(iVar3 + 0x38),4,0);
  thunk_FUN_10443020();
  ExceptionList = pvStack_70;
  return;
}


// ==== 1059f626 Catch@1059f626

void Catch_1059f626(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_10914c48);
}


// ==== 1059f63a Catch@1059f63a

void Catch_1059f63a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"MovingTerrain");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059f691 Catch@1059f691

void Catch_1059f691(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x28) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x28,&DAT_10914c48);
}


// ==== 1059f6a5 Catch@1059f6a5

void Catch_1059f6a5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Level_was_loaded");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059f6ac Catch@1059f6ac

void Catch_1059f6ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + -0x14);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x18,&DAT_10914c48);
}


// ==== 1059f6bd Catch@1059f6bd

void Catch_1059f6bd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UGameEngine::L2_Teleport");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059f850 FUN_1059f850

undefined4 FUN_1059f850(void)

{
  int iVar1;
  int in_ECX;
  UObject *this;
  float10 fVar2;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1081e679;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_10c67294 & 1) == 0) {
    DAT_10c67294 = DAT_10c67294 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    FArray::FArray((FArray *)&DAT_10c67284);
    local_4 = local_4 & 0xffffff00;
    _atexit((_func_4879 *)&LAB_1084d100);
  }
  local_4 = 0xffffffff;
  if (((((*(byte *)(in_ECX + 0x3c8) & 1) == 0) &&
       (iVar1 = **(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x54) + 0x38),
       iVar1 != 0)) && (iVar1 = *(int *)(iVar1 + 0x3c), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x3bc), iVar1 != 0)) {
    local_18 = *(undefined4 *)(iVar1 + 0x1bc);
    local_14 = *(undefined4 *)(iVar1 + 0x1c0);
    local_10 = *(undefined4 *)(iVar1 + 0x1c4);
    fVar2 = (float10)thunk_FUN_10373830(&local_18,in_ECX + 0x1bc);
    if (fVar2 < (float10)*(float *)(in_ECX + 0x3bc)) {
      thunk_FUN_1059be20(local_1c);
      *(uint *)(in_ECX + 0x3c8) = *(uint *)(in_ECX + 0x3c8) | 1;
    }
  }
  if (0 < DAT_10c67288) {
    this = *(UObject **)(*(int *)(in_ECX + 0xe4) + 0x74);
    if ((this == (UObject *)0x0) ||
       (iVar1 = UObject::IsA(this,&UGameEngine::PrivateStaticClass), iVar1 == 0)) {
      this = (UObject *)0x0;
    }
    iVar1 = *DAT_10c67284;
    if ((this == (UObject *)0x0) || (iVar1 == 0)) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
      }
    }
    else {
      iVar1 = UGameEngine::EventLoadSWMap
                        ((UGameEngine *)this,*(int *)(iVar1 + 0x3c0),*(int *)(iVar1 + 0x3c4));
      if (iVar1 != 0) {
        thunk_FUN_1059aea0(0,1);
      }
    }
  }
  ExceptionList = puStack_8;
  return 1;
}


// ==== 1059fa30 FUN_1059fa30

void FUN_1059fa30(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FConfigCache::vftable;
  return;
}


// ==== 1059fa50 FUN_1059fa50

void FUN_1059fa50(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081e699;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1059fbb0 FUN_1059fbb0

void FUN_1059fbb0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081e6b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1059fc20 FUN_1059fc20

void FUN_1059fc20(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081e6d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1059fc90 FUN_1059fc90

void FUN_1059fc90(byte param_1)

{
  FRegistryObjectInfo *in_ECX;
  
  FRegistryObjectInfo::~FRegistryObjectInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1059fd70 FUN_1059fd70

void FUN_1059fd70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FConfigCache::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1059fda0 FUN_1059fda0

void FUN_1059fda0(int param_1,FString *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081e6f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::operator=(param_2,(FString *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x1c8));
  ExceptionList = local_10;
  return;
}


// ==== 1059fe24 Catch@1059fe24

void Catch_1059fe24(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1059fe38 Catch@1059fe38

void Catch_1059fe38(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execGetURLMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1059fe90 FUN_1059fe90

int FUN_1059fe90(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  puVar2 = FString::operator*(param_1);
  uVar3 = thunk_FUN_1032ff50(puVar2);
  iVar1 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    iVar4 = FString::operator==((FString *)(*in_ECX + iVar1 * 0x1c + 4),param_1);
    if (iVar4 != 0) break;
    iVar1 = *(int *)(iVar1 * 0x1c + *in_ECX);
  }
  return *in_ECX + 0x10 + iVar1 * 0x1c;
}


// ==== 1059ff30 FUN_1059ff30

int FUN_1059ff30(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  puVar2 = FString::operator*(param_1);
  uVar3 = thunk_FUN_1032ff50(puVar2);
  iVar1 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    iVar4 = FString::operator==((FString *)(*in_ECX + iVar1 * 0x24 + 4),param_1);
    if (iVar4 != 0) break;
    iVar1 = *(int *)(iVar1 * 0x24 + *in_ECX);
  }
  return *in_ECX + 0x10 + iVar1 * 0x24;
}


// ==== 105a0040 FUN_105a0040

int FUN_105a0040(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  puVar2 = FString::operator*(param_1);
  uVar3 = thunk_FUN_1032ff50(puVar2);
  iVar1 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    iVar4 = FString::operator==((FString *)(*in_ECX + iVar1 * 0x30 + 4),param_1);
    if (iVar4 != 0) break;
    iVar1 = *(int *)(iVar1 * 0x30 + *in_ECX);
  }
  return iVar1 * 0x30 + 0x10 + *in_ECX;
}


// ==== 105a0110 FUN_105a0110

void FUN_105a0110(int param_1,int param_2)

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


// ==== 105a01e0 FUN_105a01e0

void FUN_105a01e0(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
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
      puVar3 = FString::operator*((FString *)(puVar6 + 1));
      uVar4 = thunk_FUN_1032ff50(puVar3);
      iVar2 = iVar2 + 0x24;
      uVar4 = in_ECX[4] - 1U & uVar4;
      *puVar6 = *(undefined4 *)(iVar1 + uVar4 * 4);
      *(int *)(iVar1 + uVar4 * 4) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 105a0310 FUN_105a0310

void FUN_105a0310(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
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
      puVar3 = FString::operator*((FString *)(puVar6 + 1));
      uVar4 = thunk_FUN_1032ff50(puVar3);
      iVar2 = iVar2 + 0x30;
      uVar4 = in_ECX[4] - 1U & uVar4;
      *puVar6 = *(undefined4 *)(iVar1 + uVar4 * 4);
      *(int *)(iVar1 + uVar4 * 4) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 105a0440 FUN_105a0440

void FUN_105a0440(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081e709;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_105a0110(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105a04b0 FUN_105a04b0

void FUN_105a04b0(void)

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
    thunk_FUN_105a01e0();
    return;
  }
  return;
}


// ==== 105a04f0 FUN_105a04f0

void FUN_105a04f0(void)

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
    thunk_FUN_105a0310();
    return;
  }
  return;
}


// ==== 105a0570 FUN_105a0570

void FUN_105a0570(int param_1,FString *param_2)

{
  byte bVar1;
  ushort *puVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  undefined4 uVar6;
  int iVar7;
  FString local_48 [12];
  FString local_3c [12];
  int local_30;
  int local_2c;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081e74b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  local_18 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_3c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_3c);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar6 = 0;
  puVar2 = FString::operator*(local_3c);
  pUVar3 = (UClass *)thunk_FUN_10589730(0xffffffff,puVar2,uVar6);
  thunk_FUN_1059fa50();
  local_8._0_1_ = 2;
  iVar7 = 0;
  pUVar4 = UClass::StaticClass();
  UObject::GetRegistryObjects((TArray<FRegistryObjectInfo> *)&local_30,pUVar4,pUVar3,iVar7);
  if (local_1c < local_2c) {
    pFVar5 = (FString *)(local_30 + local_1c * 0x3c);
  }
  else {
    pFVar5 = (FString *)FString::FString(local_48,(ushort *)&DAT_10853d94);
    local_8._0_1_ = 3;
    local_18 = 1;
  }
  FString::operator=(param_2,pFVar5);
  local_8 = 2;
  if ((local_18 & 1) != 0) {
    local_18 = local_18 & 0xfffffffe;
    FString::~FString(local_48);
  }
  local_8._0_1_ = 1;
  thunk_FUN_105a0440();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 105a06ca Catch@105a06ca

void Catch_105a06ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105a06de Catch@105a06de

void Catch_105a06de(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execGetNextInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a0760 FUN_105a0760

void FUN_105a0760(FString *param_1)

{
  byte bVar1;
  ushort *puVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  undefined4 uVar6;
  int iVar7;
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  int local_34;
  int local_30;
  FString *local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar7 = (int)param_1;
  puStack_c = &LAB_1081e7c7;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  local_18 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_58);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_58);
  local_1c = 0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  FString::FString(local_4c);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_4c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = local_4c;
  }
  else {
    param_1 = *(FString **)GPropAddr_exref;
  }
  FString::FString(local_40);
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(iVar7 + 0xc);
  *(byte **)(iVar7 + 0xc) = *(byte **)(iVar7 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(iVar7,local_40);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    local_20 = local_40;
  }
  else {
    local_20 = *(FString **)GPropAddr_exref;
  }
  *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + 1;
  if (**(char **)(iVar7 + 0xc) == 'B') {
    *(char **)(iVar7 + 0xc) = *(char **)(iVar7 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(iVar7,0);
  }
  uVar6 = 0;
  puVar2 = FString::operator*(local_58);
  pUVar3 = (UClass *)thunk_FUN_10589730(0xffffffff,puVar2,uVar6);
  thunk_FUN_1059fa50();
  local_8._0_1_ = 4;
  iVar7 = 0;
  pUVar4 = UClass::StaticClass();
  UObject::GetRegistryObjects((TArray<FRegistryObjectInfo> *)&local_34,pUVar4,pUVar3,iVar7);
  if (local_1c < local_30) {
    pFVar5 = (FString *)(local_34 + local_1c * 0x3c);
  }
  else {
    pFVar5 = (FString *)FString::FString(local_64,(ushort *)&DAT_10853d94);
    local_8._0_1_ = 5;
    local_18 = 1;
  }
  FString::operator=(param_1,pFVar5);
  local_8 = 4;
  if ((local_18 & 1) != 0) {
    local_18 = local_18 & 0xfffffffe;
    FString::~FString(local_64);
  }
  if (local_1c < local_30) {
    pFVar5 = (FString *)(local_34 + 0x24 + local_1c * 0x3c);
  }
  else {
    pFVar5 = (FString *)FString::FString(local_64,(ushort *)&DAT_10853d94);
    local_8 = CONCAT31(local_8._1_3_,6);
    local_18 = local_18 | 2;
  }
  FString::operator=(local_20,pFVar5);
  local_8 = 4;
  if ((local_18 & 2) != 0) {
    local_18 = local_18 & 0xfffffffd;
    FString::~FString(local_64);
  }
  local_8._0_1_ = 3;
  thunk_FUN_105a0440();
  local_8._0_1_ = 2;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_4c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_58);
  ExceptionList = local_10;
  return;
}


// ==== 105a09f0 Catch@105a09f0

void Catch_105a09f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105a0a04 Catch@105a0a04

void Catch_105a0a04(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execGetNextIntDesc");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a0ae0 FUN_105a0ae0

void FUN_105a0ae0(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  int iVar7;
  FString local_78 [12];
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  int local_48;
  int local_44;
  int local_34;
  int local_30;
  int local_2c;
  FString *local_28;
  FString *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081e81c;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff7c;
  iVar6 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_54);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_54);
  FString::FString(local_78);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_78);
  local_2c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_2c);
  FString::FString(local_6c);
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_6c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    local_24 = local_6c;
  }
  else {
    local_24 = *(FString **)GPropAddr_exref;
  }
  FString::FString(local_60);
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_60);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    local_28 = local_60;
  }
  else {
    local_28 = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  thunk_FUN_1059fa50();
  local_8 = CONCAT31(local_8._1_3_,5);
  UObject::GetRegistryObjects
            ((TArray<FRegistryObjectInfo> *)&local_48,&UTexture::PrivateStaticClass,(UClass *)0x0,0)
  ;
  param_1 = -1;
  local_1c = -1;
  local_20 = -1;
  local_18 = 0;
  puVar2 = FString::operator*(local_54);
  local_30 = appStrlen(puVar2);
  do {
    local_34 = iVar6;
    if (local_44 <= iVar6) {
      iVar6 = param_1;
      if (local_18 != 0) {
        param_1 = local_1c;
        iVar6 = param_1;
      }
LAB_105a0d68:
      param_1 = iVar6;
      if (param_1 == -1) {
        param_1 = local_20;
      }
      if ((param_1 < 0) || (local_44 <= param_1)) {
        FString::operator=(local_24,(ushort *)&DAT_10853d94);
        FString::operator=(local_28,(ushort *)&DAT_10853d94);
      }
      else {
        FString::operator=(local_24,(FString *)(param_1 * 0x3c + local_48));
        FString::operator=(local_28,(FString *)(param_1 * 0x3c + 0x24 + local_48));
      }
      local_8._0_1_ = 4;
      thunk_FUN_105a0440();
      local_8._0_1_ = 3;
      FString::~FString(local_60);
      local_8._0_1_ = 2;
      FString::~FString(local_6c);
      local_8._0_1_ = 1;
      FString::~FString(local_78);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_54);
      ExceptionList = local_10;
      return;
    }
    pFVar5 = (FString *)(iVar6 * 0x3c + local_48);
    iVar7 = local_30;
    puVar2 = FString::operator*(local_54);
    puVar3 = FString::operator*(pFVar5);
    iVar4 = appStrnicmp(puVar3,puVar2,iVar7);
    iVar7 = local_20;
    if (iVar4 == 0) {
      if (local_18 != 0) {
        local_18 = 0;
        goto LAB_105a0d68;
      }
      if (local_1c == -1) {
        local_1c = iVar6;
      }
      pFVar5 = (FString *)(iVar6 * 0x3c + local_48);
      puVar2 = FString::operator*(local_78);
      puVar3 = FString::operator*(pFVar5);
      iVar4 = appStricmp(puVar3,puVar2);
      iVar7 = iVar6;
      if (iVar4 == 0) {
        if (local_2c == -1) {
          param_1 = local_20;
          iVar6 = param_1;
          goto LAB_105a0d68;
        }
        if (local_2c == 0) goto LAB_105a0d68;
        local_18 = 1;
      }
    }
    local_20 = iVar7;
    iVar6 = iVar6 + 1;
  } while( true );
}


// ==== 105a0e22 Catch@105a0e22

void Catch_105a0e22(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 105a0e36 Catch@105a0e36

void Catch_105a0e36(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execGetNextSkin");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a0f30 FUN_105a0f30

void FUN_105a0f30(int param_1,FString *param_2)

{
  byte bVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  int iVar7;
  ushort local_478 [256];
  ushort local_278;
  undefined1 local_276 [518];
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  int local_4c;
  int local_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  FString *local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081e87d;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffb7c;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_64);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_64);
  FString::FString(local_70);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_70);
  local_30 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_30);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::operator=(param_2,(ushort *)&DAT_10853d94);
  thunk_FUN_10368480();
  local_8 = CONCAT31(local_8._1_3_,3);
  puVar2 = FString::operator*(&FURL::DefaultMapExt);
  appSprintf(local_478,(ushort *)L"*.%s",puVar2);
  local_24 = 0;
  do {
    if ((int)((*(short *)GCdPath_exref != 0) + 1) <= local_24) {
      FString::Printf((ushort *)local_58,&DAT_108a2398);
      local_8 = CONCAT31(local_8._1_3_,5);
      local_28 = 0;
      while (local_28 < local_1c) {
        while( true ) {
          iVar7 = local_28;
          iVar6 = local_28 * 0xc;
          iVar4 = FString::InStr(local_20 + iVar6,local_58,0);
          if (iVar4 < 0) break;
          FString::InStr(local_20 + iVar6,local_58,0);
          pFVar5 = local_20 + iVar6;
          FString::Len(pFVar5);
          pFVar5 = (FString *)FString::Right(pFVar5,(int)&local_3c);
          local_8._0_1_ = 6;
          FString::operator=(local_20 + iVar6,pFVar5);
          local_8 = CONCAT31(local_8._1_3_,5);
          FString::~FString((FString *)&local_3c);
        }
        local_28 = iVar7 + 1;
      }
      local_4c = 0;
      while( true ) {
        iVar6 = local_4c;
        if (local_1c <= local_4c) {
          if (local_1c < 1) {
            pFVar5 = (FString *)FString::FString((FString *)&local_3c,(ushort *)&DAT_10853d94);
            local_8._0_1_ = 7;
            FString::operator=(param_2,pFVar5);
            local_8 = CONCAT31(local_8._1_3_,5);
            FString::~FString((FString *)&local_3c);
          }
          else {
            FString::operator=(param_2,local_20);
          }
          local_8._0_1_ = 3;
          FString::~FString(local_58);
          local_8._0_1_ = 2;
          thunk_FUN_1032ce30();
          local_8._0_1_ = 1;
          FString::~FString(local_70);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_64);
          ExceptionList = local_10;
          return;
        }
        pFVar5 = local_20 + local_4c * 0xc;
        puVar2 = FString::operator*(local_70);
        puVar3 = FString::operator*(pFVar5);
        iVar7 = appStrcmp(puVar3,puVar2);
        if (iVar7 == 0) break;
        local_4c = iVar6 + 1;
      }
      iVar6 = iVar6 + local_30;
      if (iVar6 < 0) {
        iVar6 = local_1c + -1;
      }
      else if (local_1c <= iVar6) {
        iVar6 = 0;
      }
      FString::operator=(param_2,local_20 + iVar6 * 0xc);
      local_8._0_1_ = 3;
      FString::~FString(local_58);
      local_8._0_1_ = 2;
      thunk_FUN_1032ce30();
      local_8._0_1_ = 1;
      FString::~FString(local_70);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_64);
      ExceptionList = local_10;
      return;
    }
    for (iVar6 = 0; local_2c = iVar6, iVar6 < *(int *)(*(int *)GSys_exref + 0x68); iVar6 = iVar6 + 1
        ) {
      puVar2 = local_478;
      puVar3 = FString::operator*((FString *)(*(int *)(*(int *)GSys_exref + 100) + iVar6 * 0xc));
      puVar2 = appStrstr(puVar3,puVar2);
      if (puVar2 != (ushort *)0x0) {
        local_278 = 0;
        _memset(local_276,0,0x1fe);
        if (local_24 != 0) {
          appStrcat(&local_278,(ushort *)GCdPath_exref);
          appStrcat(&local_278,(ushort *)L"System\\");
        }
        puVar2 = FString::operator*((FString *)(*(int *)(*(int *)GSys_exref + 100) + iVar6 * 0xc));
        appStrcat(&local_278,puVar2);
        puVar2 = appStrstr(&local_278,local_478);
        *puVar2 = 0;
        puVar2 = FString::operator*(local_64);
        appStrcat(&local_278,puVar2);
        appStrcat(&local_278,local_478);
        (**(code **)(**(int **)GFileManager_exref + 0x30))(&local_3c,&local_278,1,0);
        local_8._0_1_ = 4;
        for (iVar6 = 0; local_44 = iVar6, iVar6 < local_38; iVar6 = iVar6 + 1) {
          for (iVar7 = 0; local_48 = iVar7, iVar7 < local_1c; iVar7 = iVar7 + 1) {
            pFVar5 = local_20 + iVar7 * 0xc;
            puVar2 = FString::operator*((FString *)(local_3c + iVar6 * 0xc));
            puVar3 = FString::operator*(pFVar5);
            iVar4 = appStricmp(puVar3,puVar2);
            if (iVar4 == 0) break;
          }
          if ((iVar7 == local_1c) &&
             (pFVar5 = (FString *)thunk_FUN_1032ad60(0xc,&local_20), pFVar5 != (FString *)0x0)) {
            FString::FString(pFVar5,(FString *)(local_3c + iVar6 * 0xc));
          }
        }
        local_8 = CONCAT31(local_8._1_3_,3);
        thunk_FUN_1032ce30();
        iVar6 = local_2c;
      }
    }
    local_24 = local_24 + 1;
  } while( true );
}


// ==== 105a13ce Catch@105a13ce

void Catch_105a13ce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 105a13e2 Catch@105a13e2

void Catch_105a13e2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execGetMapName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a1550 FUN_105a1550

void FUN_105a1550(void)

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
    thunk_FUN_10387760();
    return;
  }
  return;
}


// ==== 105a1590 FUN_105a1590

int FUN_105a1590(ushort *param_1)

{
  int iVar1;
  int *piVar2;
  ushort *puVar3;
  FString *pFVar4;
  ushort *puVar5;
  int *in_ECX;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  int local_58;
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081e8d4;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff84;
  local_8 = 0;
  if ((in_ECX[5] != 0) && (in_ECX[6] == 0)) {
    ExceptionList = &local_10;
    in_ECX[5] = 0;
    local_18 = in_ECX;
    FString::FString(local_2c);
    local_8._1_3_ = (uint3)((uint)local_8 >> 8);
    local_8._0_1_ = 2;
    for (local_58 = 0; local_58 < in_ECX[1]; local_58 = local_58 + 1) {
      puVar8 = &DAT_10851e60;
      puVar3 = FString::operator*((FString *)(*in_ECX + 4 + local_58 * 0x24));
      pFVar4 = (FString *)FString::Printf((ushort *)local_38,L"[%s]%s",puVar3,puVar8);
      local_8._0_1_ = 3;
      FString::operator+=(local_2c,pFVar4);
      local_8._0_1_ = 2;
      FString::~FString(local_38);
      piVar2 = (int *)(*in_ECX + 0x10 + local_58 * 0x24);
      local_8._0_1_ = 4;
      for (iVar7 = 0; iVar7 < piVar2[1]; iVar7 = iVar7 + 1) {
        puVar8 = &DAT_108c9760;
        if (local_18[7] == 0) {
          puVar8 = &DAT_10853d94;
          puVar6 = &DAT_10853d94;
        }
        else {
          puVar6 = &DAT_108c9760;
        }
        iVar1 = *piVar2 + iVar7 * 0x1c;
        puVar9 = &DAT_10851e60;
        puVar3 = FString::operator*((FString *)(iVar1 + 0x10));
        puVar5 = FString::operator*((FString *)(iVar1 + 4));
        pFVar4 = (FString *)
                 FString::Printf((ushort *)local_44,L"%s=%s%s%s%s",puVar5,puVar6,puVar3,puVar8,
                                 puVar9);
        local_8._0_1_ = 5;
        FString::operator+=(local_2c,pFVar4);
        local_8._0_1_ = 4;
        FString::~FString(local_44);
      }
      local_8._0_1_ = 2;
      thunk_FUN_105a1550();
      pFVar4 = (FString *)FString::Printf((ushort *)local_50,&DAT_10851e60);
      local_8._0_1_ = 6;
      FString::operator+=(local_2c,pFVar4);
      local_8._0_1_ = 2;
      FString::~FString(local_50);
    }
    local_8._0_1_ = 1;
    thunk_FUN_105a04b0();
    iVar7 = appSaveStringToFile(local_2c,param_1,*(FFileManager **)GFileManager_exref);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_2c);
    ExceptionList = local_10;
    return iVar7;
  }
  return 1;
}


// ==== 105a1790 Catch@105a1790

void Catch_105a1790(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105a17a4 Catch@105a17a4

void Catch_105a17a4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigFile::Write");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a1880 FUN_105a1880

void FUN_105a1880(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081e8f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103ee480();
  ExceptionList = local_c;
  return;
}


// ==== 105a18d0 FUN_105a18d0

void FUN_105a18d0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081e918;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103ee570();
  ExceptionList = local_c;
  return;
}


// ==== 105a1950 FUN_105a1950

void FUN_105a1950(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081e938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103ee4f0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 105a19b0 FUN_105a19b0

void FUN_105a19b0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  FString::operator=((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  thunk_FUN_1039e3f0(param_1 + 4);
  in_ECX[8] = param_1[8];
  thunk_FUN_10387760();
  return;
}


// ==== 105a1a00 FUN_105a1a00

void FUN_105a1a00(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081e960;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103ee480();
  ExceptionList = local_c;
  return;
}


// ==== 105a1a50 FUN_105a1a50

void FUN_105a1a50(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081e980;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103ee570();
  ExceptionList = local_c;
  return;
}


// ==== 105a1aa0 FUN_105a1aa0

void FUN_105a1aa0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081e9b7;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103ee570();
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 105a1b10 FUN_105a1b10

void FUN_105a1b10(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081e9e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103ee4f0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 105a1b70 FUN_105a1b70

void FUN_105a1b70(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081ea17;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  local_4 = 0;
  thunk_FUN_103ee4f0(param_1 + 4);
  ExceptionList = local_c;
  return;
}


// ==== 105a1c00 FUN_105a1c00

void FUN_105a1c00(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081ea39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x24);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x24);
      if (*(int *)in_ECX + iVar1 * 0x24 != 0) {
        thunk_FUN_105a1b70(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 105a1cc0 FUN_105a1cc0

void FUN_105a1cc0(byte param_1)

{
  thunk_FUN_105a1aa0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 105a1cf0 FUN_105a1cf0

void FUN_105a1cf0(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081ea77;
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
    iVar3 = param_1 * 0x24;
    iVar2 = iVar2 - param_1;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      thunk_FUN_103ee570();
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3 + 4));
      iVar3 = iVar3 + 0x24;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x24);
  ExceptionList = local_c;
  return;
}


// ==== 105a1e30 FUN_105a1e30

void FUN_105a1e30(ushort *param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081eab7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  local_4 = 0;
  thunk_FUN_103ee4f0(param_2);
  ExceptionList = local_c;
  return;
}


// ==== 105a1eb0 FUN_105a1eb0

undefined4 * FUN_105a1eb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,0x24);
  if (*(int *)in_ECX + iVar1 * 0x24 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_105a1e30(param_1,param_2);
  }
  puVar3 = FString::operator*((FString *)(puVar2 + 1));
  uVar4 = thunk_FUN_1032ff50(puVar3);
  uVar4 = *(int *)(in_ECX + 0x10) - 1U & uVar4;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar4 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar4 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_105a01e0();
  }
  return puVar2 + 4;
}


// ==== 105a1f50 FUN_105a1f50

void FUN_105a1f50(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081ead9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_105a1cf0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105a1fc0 FUN_105a1fc0

void FUN_105a1fc0(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081eb17;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar2 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      thunk_FUN_103ee570();
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar2 + 4));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x24;
    } while (iVar3 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x24,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 105a2070 FUN_105a2070

void FUN_105a2070(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081eb38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_105a1c00(param_1);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_105a01e0();
  ExceptionList = local_c;
  return;
}


// ==== 105a20f0 FUN_105a20f0

void FUN_105a20f0(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_105a1fc0(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x24);
      if (*(int *)in_ECX + iVar1 * 0x24 != 0) {
        thunk_FUN_105a1b70(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 105a2170 FUN_105a2170

void FUN_105a2170(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081eb61;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_105a01e0();
  ExceptionList = local_c;
  return;
}


// ==== 105a21e0 FUN_105a21e0

void FUN_105a21e0(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081eb88;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_105a1f50();
  ExceptionList = pvStack_c;
  return;
}


// ==== 105a2270 FUN_105a2270

void FUN_105a2270(void)

{
  int in_ECX;
  
  thunk_FUN_105a1fc0(0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_105a01e0();
  return;
}


// ==== 105a2290 FUN_105a2290

int FUN_105a2290(ushort *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = thunk_FUN_1032ff50(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = thunk_FUN_105a1eb0(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x24 + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x24 + *in_ECX);
  }
  iVar2 = *in_ECX;
  thunk_FUN_1039e3f0(param_2);
  *(undefined4 *)(iVar3 * 0x24 + iVar2 + 0x20) = *(undefined4 *)(param_2 + 0x10);
  thunk_FUN_10387760();
  return iVar3 * 0x24 + 0x10 + *in_ECX;
}


// ==== 105a2380 FUN_105a2380

void FUN_105a2380(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081eba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_105a2070(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 105a23e0 FUN_105a23e0

void FUN_105a23e0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  FString local_48 [12];
  FString local_3c [20];
  ushort *local_28;
  int local_20;
  ushort *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081ebda;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_105a2270();
  FString::FString(local_3c);
  local_8._0_1_ = 1;
  iVar2 = appLoadFileToString(local_3c,param_1,*(FFileManager **)GFileManager_exref);
  if (iVar2 != 0) {
    puVar3 = FString::operator*(local_3c);
    local_18 = 0;
    local_20 = 0;
    local_1c = puVar3;
    while (puVar6 = puVar3, local_20 == 0) {
      for (; (*puVar6 == 0xd || (puVar3 = puVar6, *puVar6 == 10)); puVar6 = puVar6 + 1) {
      }
      for (; uVar1 = *puVar3, uVar1 != 0; puVar3 = puVar3 + 1) {
        if ((uVar1 == 0xd) || (uVar1 == 10)) {
          if (*puVar3 != 0) goto LAB_105a24a9;
          break;
        }
      }
      local_20 = 1;
LAB_105a24a9:
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      local_1c = puVar3;
      if ((*puVar6 == 0x5b) && (iVar2 = appStrlen(puVar6), puVar6[iVar2 + -1] == 0x5d)) {
        puVar5 = puVar6 + 1;
        iVar2 = appStrlen(puVar5);
        puVar6[iVar2] = 0;
        FString::FString(local_48,puVar5);
        local_8._0_1_ = 2;
        iVar2 = thunk_FUN_1059ff30(local_48);
        local_8._0_1_ = 1;
        local_18 = iVar2;
        FString::~FString(local_48);
        if (iVar2 == 0) {
          uVar4 = thunk_FUN_105a1a00();
          local_8._0_1_ = 3;
          local_18 = thunk_FUN_105a2290(puVar5,uVar4);
          local_8._0_1_ = 1;
          thunk_FUN_105a1a50();
        }
      }
      else if (((local_18 != 0) && (*puVar6 != 0)) &&
              (puVar5 = appStrstr(puVar6,(ushort *)&DAT_108bcc58), local_28 = puVar5,
              puVar5 != (ushort *)0x0)) {
        *puVar5 = 0;
        puVar7 = puVar5 + 1;
        local_28 = puVar7;
        if ((*puVar7 == 0x22) && (iVar2 = appStrlen(puVar7), puVar5[iVar2] == 0x22)) {
          puVar7 = puVar5 + 2;
          local_28 = puVar7;
          iVar2 = appStrlen(puVar7);
          puVar5[iVar2 + 1] = 0;
        }
        thunk_FUN_1058ebc0(puVar6,puVar7);
      }
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 105a25eb Catch@105a25eb

void Catch_105a25eb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 105a25ff Catch@105a25ff

void Catch_105a25ff(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigFile::Read");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a26b0 FUN_105a26b0

void FUN_105a26b0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081ebf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_105a2170();
  ExceptionList = local_c;
  return;
}


// ==== 105a2700 FUN_105a2700

void FUN_105a2700(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081ec18;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_105a21e0();
  ExceptionList = local_c;
  return;
}


// ==== 105a2750 FUN_105a2750

void FUN_105a2750(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081ec40;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_105a21e0();
  ExceptionList = local_c;
  return;
}


// ==== 105a27d0 FUN_105a27d0

void FUN_105a27d0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081ec77;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_105a21e0();
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 105a2840 FUN_105a2840

void FUN_105a2840(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081eca0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_105a2070(param_1);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 105a28c0 FUN_105a28c0

void FUN_105a28c0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081ecc0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_105a2170();
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 105a2980 FUN_105a2980

void FUN_105a2980(byte param_1)

{
  thunk_FUN_105a27d0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 105a29b0 FUN_105a29b0

void FUN_105a29b0(ushort *param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081ece7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  local_4 = 0;
  thunk_FUN_105a2840(param_2);
  ExceptionList = local_c;
  return;
}


// ==== 105a2a30 FUN_105a2a30

undefined4 * FUN_105a2a30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,0x30);
  if (iVar1 * 0x30 + *(int *)in_ECX == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_105a29b0(param_1,param_2);
  }
  puVar3 = FString::operator*((FString *)(puVar2 + 1));
  uVar4 = thunk_FUN_1032ff50(puVar3);
  uVar4 = *(int *)(in_ECX + 0x10) - 1U & uVar4;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar4 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar4 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_105a0310();
  }
  return puVar2 + 4;
}


// ==== 105a2ad0 FUN_105a2ad0

void FUN_105a2ad0(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081ed27;
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
    iVar3 = param_1 * 0x30;
    iVar2 = iVar2 - param_1;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      thunk_FUN_105a21e0();
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3 + 4));
      iVar3 = iVar3 + 0x30;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x30);
  ExceptionList = local_c;
  return;
}


// ==== 105a2c00 FUN_105a2c00

void FUN_105a2c00(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081ed67;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar2 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      thunk_FUN_105a21e0();
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar2 + 4));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x30,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 105a2cb0 FUN_105a2cb0

void FUN_105a2cb0(void)

{
  int in_ECX;
  
  thunk_FUN_105a2c00(0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_105a0310();
  return;
}


// ==== 105a2cd0 FUN_105a2cd0

int FUN_105a2cd0(ushort *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = thunk_FUN_1032ff50(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = thunk_FUN_105a2a30(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x30 + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x30 + *in_ECX);
  }
  iVar2 = iVar3 * 0x30 + 0x10 + *in_ECX;
  thunk_FUN_105a20f0(param_2);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  thunk_FUN_105a01e0();
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  return iVar3 * 0x30 + 0x10 + *in_ECX;
}


// ==== 105a2da0 FUN_105a2da0

int FUN_105a2da0(ushort *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = in_ECX[1] + -1;
  if (-1 < iVar4) {
    iVar2 = iVar4 * 0x30;
    do {
      iVar1 = FString::operator==((FString *)(*in_ECX + iVar2 + 4),param_1);
      if (iVar1 != 0) {
        thunk_FUN_105a2ad0(iVar4,1);
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + -0x30;
    } while (-1 < iVar4);
    if (iVar3 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          iVar4 = in_ECX[4];
          in_ECX[4] = iVar4 / 2;
        } while (in_ECX[1] * 2 + 8 < iVar4 / 2);
      }
      thunk_FUN_105a0310();
    }
  }
  return iVar3;
}


// ==== 105a2e40 FUN_105a2e40

void FUN_105a2e40(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081ed89;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_105a2ad0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105a2eb0 FUN_105a2eb0

int FUN_105a2eb0(ushort *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int in_ECX;
  ushort local_24c [272];
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081edb1;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffda8;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xfffffda8;
  if (param_1 == (ushort *)0x0) {
    ExceptionList = &local_10;
    param_1 = FString::operator*((FString *)(in_ECX + 0x18));
    puVar1 = local_14;
  }
  local_14 = puVar1;
  appStrcpy(local_24c,param_1);
  iVar2 = appStrlen(local_24c);
  if ((iVar2 < 5) || ((local_24c[iVar2 + -4] != 0x2e && (local_24c[iVar2 + -5] != 0x2e)))) {
    appStrcat(local_24c,(ushort *)L".ini");
  }
  iVar2 = appStricmp(local_24c,(ushort *)L"User.ini");
  if (iVar2 == 0) {
    puVar3 = FString::operator*((FString *)(in_ECX + 0x24));
  }
  else {
    iVar2 = appStricmp(local_24c,(ushort *)L"System.ini");
    if (iVar2 != 0) goto LAB_105a2f99;
    puVar3 = FString::operator*((FString *)(in_ECX + 0x18));
  }
  appStrcpy(local_24c,puVar3);
LAB_105a2f99:
  FString::FString(local_2c,local_24c);
  local_8._0_1_ = 1;
  iVar2 = thunk_FUN_105a0040(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  local_18 = iVar2;
  FString::~FString(local_2c);
  if (iVar2 == 0) {
    if ((param_2 == 0) &&
       (iVar2 = (**(code **)(**(int **)GFileManager_exref + 0x10))(local_24c), iVar2 < 0)) {
      ExceptionList = local_10;
      return 0;
    }
    uVar4 = thunk_FUN_105a28c0();
    local_8._0_1_ = 2;
    iVar2 = thunk_FUN_105a2cd0(local_24c,uVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    local_18 = iVar2;
    thunk_FUN_105a2750();
    thunk_FUN_105a23e0(local_24c);
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 105a303e Catch@105a303e

void Catch_105a303e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105a3052 Catch@105a3052

void Catch_105a3052(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::Find");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a30e0 FUN_105a30e0

void FUN_105a30e0(int param_1,ushort *param_2)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081edd8;
  local_10 = ExceptionList;
  iVar3 = 0;
  if (in_ECX == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(in_ECX + 4);
  }
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  ExceptionList = &local_10;
  do {
    if (piVar4[1] <= iVar3) {
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_105a04f0();
      if (param_1 != 0) {
        if (param_2 == (ushort *)0x0) {
          thunk_FUN_105a2cb0();
        }
        else {
          thunk_FUN_105a2da0(param_2);
        }
      }
      ExceptionList = local_10;
      return;
    }
    if (param_2 == (ushort *)0x0) {
LAB_105a3149:
      puVar2 = FString::operator*((FString *)(iVar3 * 0x30 + *piVar4 + 4));
      thunk_FUN_105a1590(puVar2);
    }
    else {
      iVar1 = FString::operator==((FString *)(iVar3 * 0x30 + 4 + *piVar4),param_2);
      if (iVar1 != 0) goto LAB_105a3149;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== 105a31b5 Catch@105a31b5

void Catch_105a31b5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105a31c9 Catch@105a31c9

void Catch_105a31c9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::Flush");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a3230 FUN_105a3230

undefined4
FUN_105a3230(ushort *param_1,ushort *param_2,ushort *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  FString *this;
  ushort *puVar2;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081ee02;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_3 = 0;
  iVar1 = thunk_FUN_105a2eb0(param_5,0);
  if (iVar1 != 0) {
    FString::FString(local_28,param_1);
    local_8._0_1_ = 1;
    iVar1 = thunk_FUN_1059ff30(local_28);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    if (iVar1 != 0) {
      FString::FString(local_28,param_2);
      local_8._0_1_ = 2;
      this = (FString *)thunk_FUN_1059fe90(local_28);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
      if (this != (FString *)0x0) {
        puVar2 = FString::operator*(this);
        appStrncpy(param_3,puVar2,param_4);
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105a330c Catch@105a330c

void Catch_105a330c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a3320 Catch@105a3320

void Catch_105a3320(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::GetString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a3380 FUN_105a3380

int FUN_105a3380(ushort *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081ee31;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_105a2eb0(param_4,param_2);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  FString::FString(local_2c,param_1);
  local_8._0_1_ = 1;
  iVar2 = thunk_FUN_1059ff30(local_2c);
  local_8._0_1_ = 0;
  local_18 = iVar2;
  FString::~FString(local_2c);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    uVar3 = thunk_FUN_105a1a00();
    local_8._0_1_ = 2;
    iVar2 = thunk_FUN_105a2290(param_1,uVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    local_18 = iVar2;
    thunk_FUN_105a1a50();
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 0;
    }
  }
  if ((param_2 != 0) || (param_3 == 0)) {
    *(undefined4 *)(iVar1 + 0x14) = 1;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 105a3457 Catch@105a3457

void Catch_105a3457(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105a346b Catch@105a346b

void Catch_105a346b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::GetSectionPrivate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a34d0 FUN_105a34d0

void FUN_105a34d0(ushort *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  FString *this;
  ushort *puVar4;
  ushort *puVar5;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081ee6a;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_105a2eb0(param_4,1);
  FString::FString(local_28,param_1);
  local_8._0_1_ = 1;
  iVar2 = thunk_FUN_1059ff30(local_28);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  if (iVar2 == 0) {
    uVar3 = thunk_FUN_105a1a00();
    local_8._0_1_ = 2;
    thunk_FUN_105a2290(param_1,uVar3);
    local_8._0_1_ = 0;
    thunk_FUN_105a1a50();
  }
  FString::FString(local_28,param_2);
  local_8._0_1_ = 3;
  this = (FString *)thunk_FUN_1059fe90(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  if (this == (FString *)0x0) {
    thunk_FUN_1058ebc0(param_2,param_3);
    *(undefined4 *)(iVar1 + 0x14) = 1;
  }
  else {
    puVar5 = param_3;
    puVar4 = FString::operator*(this);
    iVar2 = appStricmp(puVar4,puVar5);
    if (iVar2 != 0) {
      puVar5 = param_3;
      puVar4 = FString::operator*(this);
      iVar2 = appStrcmp(puVar4,puVar5);
      *(uint *)(iVar1 + 0x14) = (uint)(iVar2 != 0);
      FString::operator=(this,param_3);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105a35f7 Catch@105a35f7

void Catch_105a35f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a360b Catch@105a360b

void Catch_105a360b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::SetString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a3680 FUN_105a3680

void FUN_105a3680(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081ee91;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_105a0310();
  ExceptionList = local_c;
  return;
}


// ==== 105a36f0 FUN_105a36f0

void FUN_105a36f0(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081eeb8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_105a2e40();
  ExceptionList = pvStack_c;
  return;
}


// ==== 105a3780 FUN_105a3780

void FUN_105a3780(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081eed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_105a3680();
  ExceptionList = local_c;
  return;
}


// ==== 105a37d0 FUN_105a37d0

void FUN_105a37d0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081eef8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_105a36f0();
  ExceptionList = local_c;
  return;
}


// ==== 105a3820 FUN_105a3820

void FUN_105a3820(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081ef43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FConfigCache::vftable;
  local_4 = 0;
  thunk_FUN_105a3680();
  local_4._0_1_ = 2;
  *in_ECX = FConfigCacheIni::vftable;
  FString::FString((FString *)(in_ECX + 6));
  local_4 = CONCAT31(local_4._1_3_,3);
  FString::FString((FString *)(in_ECX + 9));
  ExceptionList = local_c;
  return;
}


// ==== 105a38c0 FUN_105a38c0

void FUN_105a38c0(ushort *param_1,ushort *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ef60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::operator=((FString *)(in_ECX + 0x18),param_1);
  FString::operator=((FString *)(in_ECX + 0x24),param_2);
  ExceptionList = local_10;
  return;
}


// ==== 105a391e Catch@105a391e

void Catch_105a391e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a3932 Catch@105a3932

void Catch_105a3932(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a3980 FUN_105a3980

void FUN_105a3980(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ef70;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x34))(1,0);
  ExceptionList = local_10;
  return;
}


// ==== 105a39cb Catch@105a39cb

void Catch_105a39cb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a39df Catch@105a39df

void Catch_105a39df(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::Exit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a3a20 FUN_105a3a20

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_105a3a20(undefined4 param_1,undefined4 param_2,FString *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *in_ECX;
  ushort local_2020;
  undefined1 local_201e [8198];
  undefined4 uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ef80;
  local_10 = ExceptionList;
  uStack_18 = 0x105a3a43;
  local_14 = &stack0xffffdfd4;
  local_8 = 0;
  local_2020 = 0;
  ExceptionList = &local_10;
  _memset(local_201e,0,0x1ffe);
  uVar1 = (**(code **)(*in_ECX + 0x10))(param_1,param_2,&local_2020,0x1000,param_4);
  FString::operator=(param_3,&local_2020);
  ExceptionList = local_10;
  return uVar1;
}


// ==== 105a3ab9 Catch@105a3ab9

void Catch_105a3ab9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a3acd Catch@105a3acd

void Catch_105a3acd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::GetString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a3b20 FUN_105a3b20

ushort * FUN_105a3b20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort *puVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ef90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = appStaticString1024();
  (**(code **)(*in_ECX + 0x10))(param_1,param_2,puVar1,0x400,param_3);
  ExceptionList = local_10;
  return puVar1;
}


// ==== 105a3b82 Catch@105a3b82

void Catch_105a3b82(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a3b96 Catch@105a3b96

void Catch_105a3b96(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::GetStr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a3be0 FUN_105a3be0

undefined4 FUN_105a3be0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *in_ECX;
  ushort local_c0 [86];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081efa0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff34;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*in_ECX + 0x10))(param_1,param_2,local_c0,0x50,param_4);
  if (iVar1 != 0) {
    iVar1 = appAtoi(local_c0);
    *param_3 = iVar1;
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105a3c6d Catch@105a3c6d

void Catch_105a3c6d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a3c81 Catch@105a3c81

void Catch_105a3c81(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::GetInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a3cd0 FUN_105a3cd0

undefined4 FUN_105a3cd0(undefined4 param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  int *in_ECX;
  float fVar2;
  ushort local_c0 [86];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081efb0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff34;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*in_ECX + 0x10))(param_1,param_2,local_c0,0x50,param_4);
  if (iVar1 != 0) {
    fVar2 = appAtof(local_c0);
    *param_3 = fVar2;
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105a3d60 Catch@105a3d60

void Catch_105a3d60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a3d74 Catch@105a3d74

void Catch_105a3d74(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::GetFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a3dd0 FUN_105a3dd0

undefined4 FUN_105a3dd0(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  int *in_ECX;
  ushort local_c0 [86];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081efc0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff34;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*in_ECX + 0x10))(param_1,param_2,local_c0,0x50,param_4);
  if (iVar1 != 0) {
    iVar1 = appStricmp(local_c0,(ushort *)L"True");
    if (iVar1 == 0) {
      *param_3 = 1;
    }
    else {
      iVar1 = appAtoi(local_c0);
      *param_3 = (uint)(iVar1 == 1);
    }
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105a3e8b Catch@105a3e8b

void Catch_105a3e8b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a3e9f Catch@105a3e9f

void Catch_105a3e9f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::GetBool");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a3f00 FUN_105a3f00

void FUN_105a3f00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *in_ECX;
  ushort local_58 [34];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081efd0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  ExceptionList = &local_10;
  appSprintf(local_58,(ushort *)&DAT_1085d740,param_3);
  (**(code **)(*in_ECX + 0x30))(param_1,param_2,local_58,param_4);
  ExceptionList = local_10;
  return;
}


// ==== 105a3f73 Catch@105a3f73

void Catch_105a3f73(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a3f87 Catch@105a3f87

void Catch_105a3f87(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::SetInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a3fd0 FUN_105a3fd0

void FUN_105a3fd0(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  int *in_ECX;
  ushort local_58 [34];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081efe0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  ExceptionList = &local_10;
  appSprintf(local_58,(ushort *)&DAT_108c6f94,(double)param_3);
  (**(code **)(*in_ECX + 0x30))(param_1,param_2,local_58,param_4);
  ExceptionList = local_10;
  return;
}


// ==== 105a404a Catch@105a404a

void Catch_105a404a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a405e Catch@105a405e

void Catch_105a405e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::SetFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a40b0 FUN_105a40b0

void FUN_105a40b0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  wchar_t *pwVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081eff0;
  local_10 = ExceptionList;
  local_8 = 0;
  pwVar1 = L"True";
  if (param_3 == 0) {
    pwVar1 = L"False";
  }
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x30))(param_1,param_2,pwVar1,param_4);
  ExceptionList = local_10;
  return;
}


// ==== 105a4116 Catch@105a4116

void Catch_105a4116(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a412a Catch@105a412a

void Catch_105a412a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::SetBool");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a4170 FUN_105a4170

void FUN_105a4170(ushort *param_1)

{
  int iVar1;
  int *in_ECX;
  FOutputDevice *this;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f000;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Logf((FOutputDevice *)in_ECX[4],param_1);
  for (iVar2 = 0; iVar2 < in_ECX[4]; iVar2 = iVar2 + 1) {
    this = (FOutputDevice *)0x0;
    for (iVar1 = *(int *)(in_ECX[3] + iVar2 * 4); iVar1 != -1;
        iVar1 = *(int *)(iVar1 * 0x30 + *in_ECX)) {
      this = this + 1;
    }
    FOutputDevice::Logf(this,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105a420d Catch@105a420d

void Catch_105a420d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105a4221 Catch@105a4221

void Catch_105a4221(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TMapBase::Dump");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a4280 FUN_105a4280

void FUN_105a4280(FOutputDevice *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f010;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Log(param_1,(ushort *)L"Files map:");
  thunk_FUN_105a4170(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 105a42dd Catch@105a42dd

void Catch_105a42dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a42f1 Catch@105a42f1

void Catch_105a42f1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::Dump");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a4340 FUN_105a4340

void FUN_105a4340(void)

{
  int in_ECX;
  
  thunk_FUN_1038be70(0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_10387760();
  return;
}


// ==== 105a4360 FUN_105a4360

void FUN_105a4360(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f020;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_105a2eb0(param_1,1);
  if (iVar1 != 0) {
    thunk_FUN_105a2da0(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105a43bc Catch@105a43bc

void Catch_105a43bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a43d0 Catch@105a43d0

void Catch_105a43d0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::UnloadFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a4410 FUN_105a4410

void FUN_105a4410(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f030;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_105a2eb0(param_1,1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105a4468 Catch@105a4468

void Catch_105a4468(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a447c Catch@105a447c

void Catch_105a447c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::Detach");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a44c0 FUN_105a44c0

undefined4 FUN_105a44c0(ushort *param_1,ushort *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int *local_28;
  int local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081f051;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_2 = 0;
  iVar1 = thunk_FUN_105a2eb0(param_4,0);
  if (iVar1 != 0) {
    FString::FString((FString *)&local_28,param_1);
    local_8._0_1_ = 1;
    piVar2 = (int *)thunk_FUN_1059ff30(&local_28);
    local_8._0_1_ = 0;
    FString::~FString((FString *)&local_28);
    if (piVar2 != (int *)0x0) {
      local_20 = 0;
      local_8 = CONCAT31(local_8._1_3_,2);
      puVar6 = param_2;
      local_28 = piVar2;
      for (local_24 = 0; local_24 < piVar2[1]; local_24 = local_24 + 1) {
        iVar1 = local_24 * 0x1c;
        puVar3 = FString::operator*((FString *)(iVar1 + 4 + *piVar2));
        iVar4 = appStrlen(puVar3);
        if (param_3 <= iVar4 + 1 + ((int)puVar6 - (int)param_2 >> 1)) break;
        iVar1 = *piVar2 + iVar1;
        puVar3 = FString::operator*((FString *)(iVar1 + 0x10));
        puVar5 = FString::operator*((FString *)(iVar1 + 4));
        iVar1 = appSprintf(puVar6,(ushort *)L"%s=%s",puVar5,puVar3);
        puVar6 = puVar6 + iVar1 + 1;
      }
      local_8 = local_8 & 0xffffff00;
      thunk_FUN_105a1550();
      *puVar6 = 0;
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105a45ec Catch@105a45ec

void Catch_105a45ec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a4600 Catch@105a4600

void Catch_105a4600(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::GetSection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a4680 FUN_105a4680

void FUN_105a4680(ushort *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int local_2c [5];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081f092;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_18 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = thunk_FUN_105a2eb0(param_2,0);
  if (iVar2 == 0) {
    ExceptionList = local_10;
    return;
  }
  FString::FString((FString *)local_2c,param_1);
  local_8._0_1_ = 1;
  iVar3 = thunk_FUN_1059ff30(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)local_2c);
  if (iVar3 != 0) {
    local_2c[1] = 0;
    local_2c[2] = 0;
    local_18 = 1;
    bVar1 = true;
    local_2c[0] = iVar3;
    if (0 < *(int *)(iVar3 + 4)) goto LAB_105a4710;
  }
  bVar1 = false;
LAB_105a4710:
  local_8 = 0;
  if ((local_18 & 1) != 0) {
    local_18 = local_18 & 0xfffffffe;
    thunk_FUN_105a1550();
  }
  if (bVar1) {
    thunk_FUN_105a4340();
    *(undefined4 *)(iVar2 + 0x14) = 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105a4752 Catch@105a4752

void Catch_105a4752(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105a4766 Catch@105a4766

void Catch_105a4766(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::EmptySection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a47d0 FUN_105a47d0

void FUN_105a47d0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081f0ff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = FConfigCacheIni::vftable;
  local_8 = 4;
  thunk_FUN_105a30e0(1,0);
  thunk_FUN_105a2cb0();
  local_8 = 2;
  FString::~FString((FString *)(in_ECX + 9));
  local_8._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 6));
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_105a36f0();
  *in_ECX = FConfigCache::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 105a4867 Catch@105a4867

void Catch_105a4867(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a487b Catch@105a487b

void Catch_105a487b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FConfigCacheIni::~FConfigCacheIni");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a48d0 FUN_105a48d0

void FUN_105a48d0(byte param_1)

{
  thunk_FUN_105a47d0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 105a4900 FUN_105a4900

void FUN_105a4900(FString *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  ushort local_280 [282];
  FString local_4c [12];
  FString local_40 [12];
  int *local_34;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  int local_20;
  FString *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar3 = (int)param_1;
  puStack_c = &LAB_1081f142;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd74;
  local_8 = 0;
  local_20 = 0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  FString::FString(local_4c);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_4c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = local_4c;
  }
  else {
    param_1 = *(FString **)GPropAddr_exref;
  }
  FString::FString(local_40);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(iVar3 + 0xc);
  *(byte **)(iVar3 + 0xc) = *(byte **)(iVar3 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(iVar3,local_40);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    local_1c = local_40;
  }
  else {
    local_1c = *(FString **)GPropAddr_exref;
  }
  *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  if (**(char **)(iVar3 + 0xc) == 'B') {
    *(char **)(iVar3 + 0xc) = *(char **)(iVar3 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(iVar3,0);
  }
  FString::operator=(param_1,(ushort *)&DAT_10853d94);
  FString::operator=(local_1c,(ushort *)&DAT_10853d94);
  thunk_FUN_105a3820();
  local_8._0_1_ = 3;
  puVar4 = FString::operator*((FString *)(*(int *)GSys_exref + 0x4c));
  appSprintf(local_280,(ushort *)L"%s\\cache.ini",puVar4);
  piVar5 = (int *)thunk_FUN_105a3380(L"Cache",0,1,local_280);
  if (piVar5 != (int *)0x0) {
    local_18 = 0;
    local_28 = 0;
    local_8._0_1_ = 4;
    local_2c = 0;
    local_34 = piVar5;
    local_30 = piVar5;
    while (iVar3 = local_2c, local_2c < piVar5[1]) {
      iVar2 = local_2c * 0x1c;
      puVar4 = FString::operator*((FString *)(*piVar5 + 0x10 + iVar2));
      if (*puVar4 != 0) {
        if (local_18 == local_20) {
          puVar4 = FString::operator*((FString *)(*piVar5 + 4 + iVar2));
          FString::operator=(param_1,puVar4);
          puVar4 = FString::operator*((FString *)(*piVar5 + 0x10 + iVar2));
          FString::operator=(local_1c,puVar4);
          *param_2 = 1;
          local_8._0_1_ = 3;
          thunk_FUN_105a1550();
          local_8._0_1_ = 2;
          thunk_FUN_105a47d0();
          local_8._0_1_ = 1;
          FString::~FString(local_40);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_4c);
          ExceptionList = local_10;
          return;
        }
        local_18 = local_18 + 1;
      }
      local_2c = iVar3 + 1;
    }
    local_8._0_1_ = 3;
    thunk_FUN_105a1550();
  }
  *param_2 = 0;
  local_8._0_1_ = 2;
  thunk_FUN_105a47d0();
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_4c);
  ExceptionList = local_10;
  return;
}


// ==== 105a4bd4 Catch@105a4bd4

void Catch_105a4bd4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105a4be8 Catch@105a4be8

void Catch_105a4be8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execGetCacheEntry");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a4cd0 FUN_105a4cd0

void FUN_105a4cd0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  FString *pFVar7;
  int iVar8;
  ushort *puVar9;
  FString *pFVar10;
  FString *this;
  FOutputDevice *this_00;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  ushort local_4c0 [256];
  ushort local_2c0 [282];
  FString local_8c [12];
  undefined1 *local_80;
  void *local_7c;
  undefined1 *puStack_78;
  int local_74;
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [16];
  ushort *local_48;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [12];
  FString local_20 [12];
  FString local_14 [12];
  int local_8;
  
  puStack_78 = &LAB_1081f225;
  local_7c = ExceptionList;
  local_80 = &stack0xfffffb34;
  local_74 = 0;
  ExceptionList = &local_7c;
  FString::FString(local_38);
  local_74._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  FString::FString(local_14,(ushort *)&DAT_10853d94);
  local_74 = CONCAT31(local_74._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_14);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *param_2 = 0;
  thunk_FUN_105a3820();
  local_74 = CONCAT31(local_74._1_3_,3);
  puVar4 = FString::operator*((FString *)(*(int *)GSys_exref + 0x4c));
  appSprintf(local_2c0,(ushort *)L"%s\\cache.ini",puVar4);
  puVar4 = local_2c0;
  uVar13 = 0x100;
  puVar9 = local_4c0;
  puVar5 = FString::operator*(local_38);
  iVar6 = thunk_FUN_105a3230(L"Cache",puVar5,puVar9,uVar13,puVar4);
  if (iVar6 != 0) {
    puVar4 = FString::operator*(local_14);
    if (*puVar4 == 0) {
      FString::operator=(local_14,local_4c0);
    }
    while (local_8 = FString::InStr(local_14,(ushort *)&DAT_108a239c,0), local_8 != -1) {
      pFVar7 = (FString *)FString::Mid(local_14,(int)local_20,local_8 + 1);
      local_74._0_1_ = 4;
      FString::operator=(local_14,pFVar7);
      local_74 = CONCAT31(local_74._1_3_,3);
      FString::~FString(local_20);
    }
    local_8 = -1;
    while (local_8 = FString::InStr(local_14,(ushort *)&DAT_108a2398,0), local_8 != -1) {
      pFVar7 = (FString *)FString::Mid(local_14,(int)local_20,local_8 + 1);
      local_74._0_1_ = 5;
      FString::operator=(local_14,pFVar7);
      local_74 = CONCAT31(local_74._1_3_,3);
      FString::~FString(local_20);
    }
    local_8 = -1;
    while (local_8 = FString::InStr(local_14,(ushort *)&DAT_108c9f98,0), local_8 != -1) {
      pFVar7 = (FString *)FString::Mid(local_14,(int)local_20,local_8 + 1);
      local_74._0_1_ = 6;
      FString::operator=(local_14,pFVar7);
      local_74 = CONCAT31(local_74._1_3_,3);
      FString::~FString(local_20);
    }
    FString::FString(local_2c,local_14);
    local_74 = CONCAT31(local_74._1_3_,7);
    local_8 = FString::InStr(local_2c,(ushort *)&DAT_108a6c0c,0);
    if (local_8 == -1) {
      if (*(int *)GLog_exref != 0) {
        FString::operator*(local_14);
        FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
      }
    }
    else {
      while (local_8 != -1) {
        pFVar7 = (FString *)FString::Mid(local_2c,(int)local_20,local_8 + 1);
        local_74._0_1_ = 8;
        FString::operator=(local_2c,pFVar7);
        local_74 = CONCAT31(local_74._1_3_,7);
        FString::~FString(local_20);
        local_8 = FString::InStr(local_2c,(ushort *)&DAT_108a6c0c,0);
      }
      pFVar7 = (FString *)FString::FString(local_44,(ushort *)&DAT_108a6c0c);
      local_74._0_1_ = 9;
      pFVar7 = (FString *)FString::operator+(pFVar7,local_20);
      local_74._0_1_ = 10;
      FString::operator=(local_2c,pFVar7);
      local_74._0_1_ = 9;
      FString::~FString(local_20);
      local_74 = CONCAT31(local_74._1_3_,7);
      FString::~FString(local_44);
      iVar6 = 0;
      while( true ) {
        local_8 = iVar6;
        if (*(int *)(*(int *)GSys_exref + 0x68) <= iVar6) {
          local_74._0_1_ = 3;
          FString::~FString(local_2c);
          local_74._0_1_ = 2;
          thunk_FUN_105a47d0();
          local_74._0_1_ = 1;
          FString::~FString(local_14);
          local_74 = (uint)local_74._1_3_ << 8;
          FString::~FString(local_38);
          ExceptionList = local_7c;
          return;
        }
        iVar3 = iVar6 * 0xc;
        iVar8 = *(int *)(*(int *)GSys_exref + 100);
        FString::Len(local_2c);
        pFVar7 = (FString *)FString::Right((FString *)(iVar8 + iVar3),(int)local_44);
        local_74._0_1_ = 0xb;
        iVar8 = FString::operator==(pFVar7,local_2c);
        local_74 = CONCAT31(local_74._1_3_,7);
        FString::~FString(local_44);
        if (iVar8 != 0) break;
        iVar6 = iVar6 + 1;
      }
      pFVar7 = (FString *)(*(int *)(*(int *)GSys_exref + 100) + iVar3);
      iVar6 = FString::Len(pFVar7);
      puVar4 = FString::operator*(pFVar7);
      for (puVar4 = puVar4 + iVar6 + -1;
          (((local_48 = puVar4,
            puVar9 = FString::operator*((FString *)(*(int *)(*(int *)GSys_exref + 100) + iVar3)),
            puVar9 <= puVar4 && (uVar2 = *puVar4, uVar2 != 0x2f)) && (uVar2 != 0x5c)) &&
          (uVar2 != 0x3a)); puVar4 = puVar4 + -1) {
      }
      pFVar7 = (FString *)(iVar3 + *(int *)(*(int *)GSys_exref + 100));
      FString::operator*(pFVar7);
      FString::Left(pFVar7,(int)local_20);
      local_74._0_1_ = 0xc;
      if (*(int *)GLog_exref != 0) {
        pFVar7 = (FString *)FString::operator+(local_20,local_64);
        local_74._0_1_ = 0xd;
        FString::FString(local_8c,(ushort *)&DAT_108a2398);
        local_74._0_1_ = 0xe;
        pFVar10 = (FString *)FString::operator+((FString *)(*(int *)GSys_exref + 0x4c),local_70);
        local_74._0_1_ = 0xf;
        pFVar10 = (FString *)FString::operator+(pFVar10,local_58);
        local_74._0_1_ = 0x10;
        pFVar10 = (FString *)FString::operator+(pFVar10,local_44);
        local_74._0_1_ = 0x11;
        FString::operator*(pFVar7);
        FString::operator*(pFVar10);
        FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
        local_74._0_1_ = 0x10;
        FString::~FString(local_44);
        local_74._0_1_ = 0xf;
        FString::~FString(local_58);
        local_74._0_1_ = 0xe;
        FString::~FString(local_70);
        local_74._0_1_ = 0xd;
        FString::~FString(local_8c);
        local_74._0_1_ = 0xc;
        FString::~FString(local_64);
      }
      FString::FString(local_44,(ushort *)&DAT_108a2398);
      local_74._0_1_ = 0x12;
      pFVar7 = (FString *)FString::operator+((FString *)(*(int *)GSys_exref + 0x4c),local_58);
      local_74._0_1_ = 0x13;
      pFVar7 = (FString *)FString::operator+(pFVar7,local_70);
      local_74._0_1_ = 0x14;
      iVar8 = *(int *)GSys_exref + 0x58;
      pFVar10 = (FString *)FString::operator+(pFVar7,local_8c);
      local_74._0_1_ = 0x15;
      pFVar7 = local_14;
      this = (FString *)FString::operator+(local_20,local_64);
      local_74._0_1_ = 0x16;
      iVar6 = **(int **)GFileManager_exref;
      uVar12 = 0;
      uVar11 = 0;
      uVar13 = 1;
      puVar4 = FString::operator*(pFVar10);
      puVar9 = FString::operator*(this);
      iVar6 = (**(code **)(iVar6 + 0x1c))(puVar9,puVar4,uVar13,uVar11,uVar12,pFVar7,iVar8);
      local_74._0_1_ = 0x15;
      FString::~FString(local_64);
      local_74._0_1_ = 0x14;
      FString::~FString(local_8c);
      local_74._0_1_ = 0x13;
      FString::~FString(local_70);
      local_74._0_1_ = 0x12;
      FString::~FString(local_58);
      local_74 = CONCAT31(local_74._1_3_,0xc);
      FString::~FString(local_44);
      if (iVar6 != 0) {
        puVar4 = local_2c0;
        puVar14 = &DAT_10853d94;
        puVar9 = FString::operator*(local_38);
        thunk_FUN_105a34d0(L"Cache",puVar9,puVar14,puVar4);
        *param_2 = 1;
      }
      local_74 = CONCAT31(local_74._1_3_,7);
      FString::~FString(local_20);
    }
    local_74 = CONCAT31(local_74._1_3_,3);
    FString::~FString(local_2c);
  }
  local_74._0_1_ = 2;
  thunk_FUN_105a47d0();
  local_74._0_1_ = 1;
  FString::~FString(local_14);
  local_74 = (uint)local_74._1_3_ << 8;
  FString::~FString(local_38);
  ExceptionList = local_7c;
  return;
}


// ==== 105a5375 Catch@105a5375

void Catch_105a5375(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x24,&DAT_10914c48);
}


// ==== 105a5389 Catch@105a5389

void Catch_105a5389(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execMoveCacheEntry");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a5560 FUN_105a5560

void FUN_105a5560(void)

{
  undefined4 *in_ECX;
  
  in_ECX[6] = 0;
  in_ECX[5] = 0;
  *in_ECX = CGeoCellInfo::vftable;
  in_ECX[4] = 0;
  in_ECX[0xf] = 0;
  in_ECX[10] = 0;
  in_ECX[9] = 0;
  in_ECX[8] = 0;
  in_ECX[7] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0x11] = 0;
  return;
}


// ==== 105a55b0 FUN_105a55b0

void FUN_105a55b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  in_ECX[2] = param_2;
  in_ECX[3] = param_3;
  in_ECX[4] = param_4;
  in_ECX[5] = param_5;
  in_ECX[0x11] = param_7;
  *in_ECX = CGeoCellInfo::vftable;
  in_ECX[6] = param_6;
  in_ECX[0xf] = 0;
  in_ECX[10] = 0;
  in_ECX[9] = 0;
  in_ECX[8] = 0;
  in_ECX[7] = 0;
  return;
}


// ==== 105a5610 FUN_105a5610

void FUN_105a5610(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CGeoCellInfo::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xd] = *(undefined4 *)(param_1 + 0x34);
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x38);
  in_ECX[0xf] = *(undefined4 *)(param_1 + 0x3c);
  in_ECX[0x10] = *(undefined4 *)(param_1 + 0x40);
  in_ECX[0x11] = *(undefined4 *)(param_1 + 0x44);
  return;
}


// ==== 105a56b0 FUN_105a56b0

void FUN_105a56b0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  return;
}


// ==== 105a5740 FUN_105a5740

void FUN_105a5740(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  *in_ECX = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 105a5750 FUN_105a5750

undefined4 FUN_105a5750(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 8);
}


// ==== 105a5760 FUN_105a5760

void FUN_105a5760(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 105a5780 FUN_105a5780

void FUN_105a5780(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined4 *)(in_ECX + 0x200001c) = 0;
  *(undefined4 *)(in_ECX + 0x2000020) = 0;
  puVar2 = (undefined4 *)(in_ECX + 0x100001c);
  iVar1 = 0x800;
  do {
    iVar3 = 0x800;
    do {
      puVar2[-0x400000] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 105a57d0 FUN_105a57d0

void FUN_105a57d0(void)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(in_ECX + 0x1c);
  iVar1 = 0x800;
  do {
    iVar3 = 0x800;
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 105a5820 FUN_105a5820

int FUN_105a5820(int param_1)

{
  int *in_ECX;
  
  return (int)((param_1 - *in_ECX) + (param_1 - *in_ECX >> 0x1f & 0xfU)) >> 4;
}


// ==== 105a5840 FUN_105a5840

int FUN_105a5840(int param_1)

{
  int in_ECX;
  
  param_1 = param_1 - *(int *)(in_ECX + 8);
  return (int)(param_1 + (param_1 >> 0x1f & 0xfU)) >> 4;
}


// ==== 105a5860 FUN_105a5860

int FUN_105a5860(int param_1)

{
  return (int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3;
}


// ==== 105a5880 FUN_105a5880

int FUN_105a5880(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x10 + 8 + *in_ECX;
}


// ==== 105a58a0 FUN_105a58a0

int FUN_105a58a0(int param_1)

{
  int in_ECX;
  
  return param_1 * 0x10 + 8 + *(int *)(in_ECX + 8);
}


// ==== 105a58c0 FUN_105a58c0

int FUN_105a58c0(int param_1)

{
  return param_1 * 8;
}


// ==== 105a58d0 FUN_105a58d0

void FUN_105a58d0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  param_1[1] = *(undefined4 *)(param_2 + 0x14);
  param_1[2] = uVar1;
  return;
}


// ==== 105a5900 FUN_105a5900

int FUN_105a5900(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = in_ECX[((int)((param_2 - in_ECX[2]) + (param_2 - in_ECX[2] >> 0x1f & 0xfU)) >> 4) +
                 ((int)((param_1 - *in_ECX) + (param_1 - *in_ECX >> 0x1f & 0xfU)) >> 4) * 0x800 + 7]
  ;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xc) == (int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3) break;
    iVar1 = *(int *)(iVar1 + 0x3c);
  }
  return iVar1;
}


// ==== 105a5970 FUN_105a5970

void FUN_105a5970(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CGeoZoneInfo *in_ECX;
  
  iVar1 = FUN_107a6660();
  iVar2 = FUN_107a6660();
  iVar3 = FUN_107a6660();
  CGeoZoneInfo::FindCell(in_ECX,iVar3,iVar2,iVar1);
  return;
}


// ==== 105a59b0 FUN_105a59b0

void FUN_105a59b0(void *param_1)

{
  void *in_ECX;
  
  _memcpy(in_ECX,param_1,0x2000024);
  return;
}


// ==== 105a59e0 FUN_105a59e0

void FUN_105a59e0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}


// ==== 105a59f0 FUN_105a59f0

void FUN_105a59f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  return;
}


// ==== 105a5a20 FUN_105a5a20

void FUN_105a5a20(void)

{
  return;
}


// ==== 105a5a60 Catch@105a5a60

void Catch_105a5a60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a5a74 Catch@105a5a74

void Catch_105a5a74(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a5ab0 FUN_105a5ab0

void FUN_105a5ab0(undefined4 param_1,ushort *param_2)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  ushort local_420 [518];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_2;
  puStack_c = &LAB_1081f280;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffbd4;
  local_8 = 0;
  ExceptionList = &local_10;
  do {
    while( true ) {
      iVar2 = ParseLine((ushort **)&param_1,local_420,0x200,0);
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return;
      }
      param_2 = local_420;
      if (*(int *)(in_ECX + 0xec4) != 1) break;
LAB_105a5b49:
      (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0xeac) + 0x38))(param_2,puVar1);
    }
    if (*(int *)(in_ECX + 0xec4) == 3) {
      iVar2 = ParseCommand(&param_2,(ushort *)L"OnRelease");
      if (iVar2 != 0) goto LAB_105a5b49;
    }
    (*(code *)**(undefined4 **)(in_ECX + 0x34))(param_2,puVar1);
  } while( true );
}


// ==== 105a5b78 Catch@105a5b78

void Catch_105a5b78(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a5b8c Catch@105a5b8c

void Catch_105a5b8c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::ExecInputCommands");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a5bf0 FUN_105a5bf0

void FUN_105a5bf0(int param_1)

{
  int *in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f290;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  in_ECX[0x3ab] = param_1;
  (**(code **)(*in_ECX + 0x80))();
  if (*(int *)GLog_exref != 0) {
    UObject::GetName((UObject *)in_ECX[0x3ab]);
    FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x2fa);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105a5c7b Catch@105a5c7b

void Catch_105a5c7b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a5c8f Catch@105a5c8f

void Catch_105a5c8f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a5ce0 FUN_105a5ce0

void FUN_105a5ce0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 105a5d00 FUN_105a5d00

undefined4 FUN_105a5d00(int param_1,int param_2)

{
  double *pdVar1;
  int in_ECX;
  float10 fVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f2a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  fVar2 = (float10)thunk_FUN_104da1f0();
  if (param_2 == 1) {
    if (*(char *)(param_1 + 0xecc + in_ECX) != '\0') {
      ExceptionList = local_10;
      return 0;
    }
    *(undefined1 *)(param_1 + 0xecc + in_ECX) = 1;
    *(double *)(in_ECX + 0xfcc + param_1 * 8) = (double)fVar2;
  }
  else if (param_2 == 3) {
    if (param_1 == 0x2c) {
      *(undefined1 *)(in_ECX + 0xef8) = 0;
      *(undefined8 *)(in_ECX + 0x112c) = 0;
    }
    else {
      if (*(char *)(param_1 + 0xecc + in_ECX) == '\0') {
        ExceptionList = local_10;
        return 0;
      }
      *(undefined1 *)(param_1 + 0xecc + in_ECX) = 0;
      pdVar1 = (double *)(in_ECX + 0xfcc + param_1 * 8);
      *(double *)(in_ECX + 0x17c4 + param_1 * 8) = (double)(fVar2 - (float10)*pdVar1);
      *pdVar1 = 0.0;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105a5dce Catch@105a5dce

void Catch_105a5dce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a5de2 Catch@105a5de2

void Catch_105a5de2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::PreProcess");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a5e40 FUN_105a5e40

ushort * FUN_105a5e40(ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int *in_ECX;
  wchar_t *pwVar5;
  ushort *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f2b0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 < (ushort *)0xff) {
    ExceptionList = &local_10;
    puVar1 = appStaticString1024();
    if ((((((((param_1 == (ushort *)0x1) || (param_1 == (ushort *)0x2)) ||
            (param_1 == (ushort *)0x4)) ||
           ((param_1 == (ushort *)0x13 || (param_1 == (ushort *)0x14)))) ||
          ((param_1 == (ushort *)0x9 || ((param_1 == (ushort *)0xd || (param_1 == (ushort *)0x10))))
          )) || ((param_1 == (ushort *)0x90 ||
                 ((param_1 == (ushort *)0x1b || ((199 < (int)param_1 && ((int)param_1 < 0xd8))))))))
        || ((0xe3 < (int)param_1 && ((int)param_1 < 0xee)))) ||
       ((((0xef < (int)param_1 && ((int)param_1 < 0xf4)) ||
         ((0x5f < (int)param_1 && ((int)param_1 < 0x70)))) ||
        ((0x1f < (int)param_1 && ((int)param_1 < 0x30)))))) {
      puVar6 = (ushort *)0x0;
      iVar4 = 0;
      pwVar5 = L"Engine";
      puVar2 = param_1;
      puVar3 = (ushort *)(**(code **)(*in_ECX + 0x84))();
      puVar2 = Localize((ushort *)L"KeyNames",puVar3,puVar2,(ushort *)pwVar5,iVar4);
    }
    else {
      puVar6 = param_1;
      puVar2 = (ushort *)(**(code **)(*(int *)in_ECX[0x3ab] + 0xac))(param_1,0x400);
    }
    appStrncpy(puVar1,puVar2,(int)puVar6);
    iVar4 = appStrcmp(puVar1,(ushort *)L"UNKNOWN");
    if (iVar4 == 0) {
      iVar4 = 0x400;
      puVar2 = (ushort *)(**(code **)(*in_ECX + 0x84))(param_1);
      appStrncpy(puVar1,puVar2,iVar4);
    }
    puVar1 = appStrupr(puVar1);
    ExceptionList = local_10;
    return puVar1;
  }
  return (ushort *)&DAT_10853d94;
}


// ==== 105a5fc2 Catch@105a5fc2

void Catch_105a5fc2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a5fd6 Catch@105a5fd6

void Catch_105a5fd6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::GetLocalizedKeyName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a60a0 FUN_105a60a0

void FUN_105a60a0(void)

{
  UClass *pUVar1;
  int iVar2;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    while( true ) {
      iVar2 = in_ECX[1];
      while (iVar2 != 0) {
        pUVar1 = UByteProperty::StaticClass();
        iVar2 = UObject::IsA((UObject *)in_ECX[1],pUVar1);
        if (iVar2 != 0) {
          return;
        }
        iVar2 = *(int *)(in_ECX[1] + 0x38);
        in_ECX[1] = iVar2;
      }
      iVar2 = (**(code **)(*(int *)*in_ECX + 0x7c))();
      *in_ECX = iVar2;
      if (iVar2 == 0) break;
      in_ECX[1] = *(int *)(iVar2 + 0x48);
    }
  }
  return;
}


// ==== 105a6100 FUN_105a6100

void FUN_105a6100(void)

{
  UClass *pUVar1;
  int iVar2;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    while( true ) {
      iVar2 = in_ECX[1];
      while (iVar2 != 0) {
        pUVar1 = UFloatProperty::StaticClass();
        iVar2 = UObject::IsA((UObject *)in_ECX[1],pUVar1);
        if (iVar2 != 0) {
          return;
        }
        iVar2 = *(int *)(in_ECX[1] + 0x38);
        in_ECX[1] = iVar2;
      }
      iVar2 = (**(code **)(*(int *)*in_ECX + 0x7c))();
      *in_ECX = iVar2;
      if (iVar2 == 0) break;
      in_ECX[1] = *(int *)(iVar2 + 0x48);
    }
  }
  return;
}


// ==== 105a6160 FUN_105a6160

void FUN_105a6160(UObject *param_1,ushort *param_2,int param_3)

{
  UClass *pUVar1;
  
  pUVar1 = UEnum::StaticClass();
  UObject::StaticFindObjectChecked(pUVar1,param_1,param_2,param_3);
  return;
}


// ==== 105a6190 FUN_105a6190

UObject * FUN_105a6190(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UByteProperty::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105a61c0 FUN_105a61c0

UObject * FUN_105a61c0(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UFloatProperty::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105a61f0 FUN_105a61f0

void FUN_105a61f0(void)

{
  FName *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081f2cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FName::FName(in_ECX);
  FString::FString((FString *)(in_ECX + 4),0);
  ExceptionList = local_c;
  return;
}


// ==== 105a6250 FUN_105a6250

void FUN_105a6250(byte param_1)

{
  CGeoCellInfo *in_ECX;
  
  CGeoCellInfo::~CGeoCellInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 105a6280 FUN_105a6280

CGeoCellInfo * FUN_105a6280(byte param_1)

{
  CGeoCellInfo *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x48,*(int *)(in_ECX + -4),CGeoCellInfo::~CGeoCellInfo);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  CGeoCellInfo::~CGeoCellInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 105a6300 FUN_105a6300

undefined4
FUN_105a6300(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  void *pvVar1;
  int iVar2;
  CGeoCellInfo *pCVar3;
  int *in_ECX;
  int iVar4;
  void *unaff_EBX;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int unaff_retaddr;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081f30c;
  local_c = ExceptionList;
  iVar5 = (int)((param_1 - *in_ECX) + (param_1 - *in_ECX >> 0x1f & 0xfU)) >> 4;
  iVar4 = (int)((param_2 - in_ECX[2]) + (param_2 - in_ECX[2] >> 0x1f & 0xfU)) >> 4;
  iVar2 = iVar5 * 0x800 + iVar4;
  pvVar1 = (void *)in_ECX[iVar2 + 7];
  iVar7 = (int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3;
  if (pvVar1 == (void *)0x0) {
    ExceptionList = &local_c;
    pCVar3 = (CGeoCellInfo *)(**(code **)**(undefined4 **)GMalloc_exref)(0x48,&DAT_10853a28);
    if (pCVar3 == (CGeoCellInfo *)0x0) {
      iVar2 = 0;
    }
    else {
      local_c = pvVar1;
      iVar2 = CGeoCellInfo::CGeoCellInfo(pCVar3,iVar5,local_4,iVar7,iVar2,param_3,param_4,param_5);
    }
    in_ECX[unaff_retaddr + 7] = iVar2;
    in_ECX[0x800007] = in_ECX[0x800007] + 1;
    in_ECX[0x800008] = in_ECX[0x800008] + 1;
    in_ECX[unaff_retaddr + 0x400007] = in_ECX[unaff_retaddr + 0x400007] + 1;
    ExceptionList = unaff_EBX;
    return 1;
  }
  if (*(int *)((int)pvVar1 + 0xc) < iVar7) {
    ExceptionList = &local_c;
    pCVar3 = (CGeoCellInfo *)(**(code **)**(undefined4 **)GMalloc_exref)(0x48,&DAT_10853a28);
    local_c = (void *)0x1;
    if (pCVar3 == (CGeoCellInfo *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = CGeoCellInfo::CGeoCellInfo(pCVar3,iVar5,local_4,iVar7,iVar2,param_3,param_4,param_5);
    }
    in_ECX[unaff_retaddr + 7] = iVar2;
    *(void **)(iVar2 + 0x3c) = pvVar1;
    in_ECX[0x800008] = in_ECX[0x800008] + 1;
    in_ECX[unaff_retaddr + 0x400007] = in_ECX[unaff_retaddr + 0x400007] + 1;
    ExceptionList = unaff_EBX;
    return 1;
  }
  if (*(int *)((int)pvVar1 + 0xc) != iVar7) {
    do {
      pvVar6 = pvVar1;
      pvVar1 = *(void **)((int)pvVar6 + 0x3c);
      if (pvVar1 == (void *)0x0) {
        ExceptionList = &local_c;
        pCVar3 = (CGeoCellInfo *)(**(code **)**(undefined4 **)GMalloc_exref)(0x48,&DAT_10853a28);
        local_4 = 2;
        if (pCVar3 == (CGeoCellInfo *)0x0) {
          iVar4 = 0;
          uRam0000003c = 0;
        }
        else {
          iVar4 = CGeoCellInfo::CGeoCellInfo
                            (pCVar3,iVar5,iVar4,iVar7,param_4,param_5,param_6,param_7);
          *(undefined4 *)(iVar4 + 0x3c) = 0;
        }
        goto LAB_105a658e;
      }
    } while (iVar7 < *(int *)((int)pvVar1 + 0xc));
    if (*(int *)((int)pvVar1 + 0xc) != iVar7) {
      ExceptionList = &local_c;
      pCVar3 = (CGeoCellInfo *)thunk_FUN_1032ffc0(0x48);
      local_4 = 3;
      if (pCVar3 == (CGeoCellInfo *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = CGeoCellInfo::CGeoCellInfo(pCVar3,iVar5,iVar4,iVar7,param_4,param_5,param_6,param_7)
        ;
      }
      *(void **)(iVar4 + 0x3c) = pvVar1;
LAB_105a658e:
      *(int *)((int)pvVar6 + 0x3c) = iVar4;
      in_ECX[0x800008] = in_ECX[0x800008] + 1;
      in_ECX[iVar2 + 0x400007] = in_ECX[iVar2 + 0x400007] + 1;
      ExceptionList = local_c;
      return 1;
    }
  }
  return 0;
}


// ==== 105a6680 FUN_105a6680

void FUN_105a6680(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_107a6660(param_1,param_2,param_3,param_4);
  uVar1 = FUN_107a6660(uVar1);
  FUN_107a6660(uVar1);
  CGeoZoneInfo::AddCell();
  return;
}


// ==== 105a66e0 FUN_105a66e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a66e0(void)

{
  UStruct *this;
  UNameProperty *this_00;
  UStrProperty *pUVar1;
  UStructProperty *this_01;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  UObject *this_02;
  int iVar5;
  UClass *pUVar6;
  FArchive local_60 [60];
  undefined1 *local_24;
  int local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081f339;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff94;
  local_8 = 0;
  ExceptionList = &local_10;
  FArchive::FArchive(local_60);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_18 = &stack0xffffff8c;
  FName::FName((FName *)&stack0xffffff8c,(ushort *)L"Alias",1);
  this = UStruct::operator_new();
  if (this == (UStruct *)0x0) {
    this = (UStruct *)0x0;
  }
  else {
    UStruct::UStruct(this,(UStruct *)0x0);
    *(undefined ***)this = UStruct::vftable;
  }
  UStruct::SetPropertiesSize(this,0x10);
  local_18 = &stack0xffffff8c;
  FName::FName((FName *)&stack0xffffff8c,(ushort *)L"Alias",1);
  this_00 = UNameProperty::operator_new();
  if (this_00 != (UNameProperty *)0x0) {
    UNameProperty::UNameProperty(this_00,0,0,(ushort *)&DAT_10853d94,0x4000);
    *(undefined ***)this_00 = UNameProperty::vftable;
  }
  local_18 = &stack0xffffff8c;
  FName::FName((FName *)&stack0xffffff8c,(ushort *)L"Command",1);
  pUVar1 = UStrProperty::operator_new();
  if (pUVar1 != (UStrProperty *)0x0) {
    UStrProperty::UStrProperty(pUVar1,0,4,(ushort *)&DAT_10853d94,0x4000);
    *(undefined ***)pUVar1 = UStrProperty::vftable;
  }
  (**(code **)(*(int *)this + 0x80))();
  local_18 = &stack0xffffff84;
  FName::FName((FName *)&stack0xffffff84,(ushort *)L"Aliases",1);
  this_01 = UStructProperty::operator_new(0x7c,&UInput::PrivateStaticClass);
  if (this_01 == (UStructProperty *)0x0) {
    this_01 = (UStructProperty *)0x0;
  }
  else {
    UStructProperty::UStructProperty(this_01,0,0x38,(ushort *)L"Aliases",0x4000,this);
    *(undefined ***)this_01 = UStructProperty::vftable;
  }
  *(undefined4 *)(this_01 + 0x40) = 0x28;
  iVar2 = thunk_FUN_105a6160(&UInteractions::PrivateStaticClass);
  iVar5 = 0;
  while( true ) {
    local_1c = iVar5;
    if (0xfe < iVar5) break;
    FName::FName((FName *)&local_18,0);
    iVar3 = FName::operator!=((FName *)(*(int *)(iVar2 + 0x40) + iVar5 * 4),(FName *)&local_18);
    if (iVar3 != 0) {
      puVar4 = FName::operator*((FName *)(*(int *)(iVar2 + 0x40) + iVar5 * 4));
      local_24 = &stack0xffffff84;
      FName::FName((FName *)&stack0xffffff84,puVar4 + 3,1);
      pUVar1 = UStrProperty::operator_new(0x78,&UInput::PrivateStaticClass);
      if (pUVar1 != (UStrProperty *)0x0) {
        UStrProperty::UStrProperty(pUVar1,0,(iVar5 * 3 + 0xae) * 4,(ushort *)L"RawKeys",0x4000);
        *(undefined ***)pUVar1 = UStrProperty::vftable;
      }
    }
    iVar5 = iVar5 + 1;
  }
  (**(code **)(_PrivateStaticClass + 0x80))();
  puVar4 = (ushort *)0x0;
  pUVar6 = (UClass *)0x0;
  iVar2 = 1;
  this_02 = UClass::GetDefaultObject(&UInput::PrivateStaticClass);
  UObject::LoadConfig(this_02,iVar2,pUVar6,puVar4);
  local_8 = local_8 & 0xffffff00;
  FArchive::~FArchive(local_60);
  ExceptionList = local_10;
  return;
}


// ==== 105a6945 Catch@105a6945

void Catch_105a6945(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105a6959 Catch@105a6959

void Catch_105a6959(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::StaticInitInput");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a6a20 FUN_105a6a20

void FUN_105a6a20(byte param_1)

{
  UStruct *in_ECX;
  
  UStruct::~UStruct(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x8c);
  }
  return;
}


// ==== 105a6a50 FUN_105a6a50

void FUN_105a6a50(byte param_1)

{
  UNameProperty *in_ECX;
  
  UNameProperty::~UNameProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return;
}


// ==== 105a6a80 FUN_105a6a80

void FUN_105a6a80(byte param_1)

{
  UStructProperty *in_ECX;
  
  UStructProperty::~UStructProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 105a6ab0 FUN_105a6ab0

void FUN_105a6ab0(void)

{
  undefined4 uVar1;
  USubsystem *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1081f38c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  USubsystem::USubsystem(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = UInput::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UInput::vftable_for_FExec_;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x38,0x10,0x28,(_func_void_void_ptr *)&LAB_1030bf46,
             (_func_void_void_ptr *)&LAB_10310ae1);
  local_8._0_1_ = 1;
  _eh_vector_constructor_iterator_(in_ECX + 0x2b8,0xc,0xff,FStringNoInit_exref,~FStringNoInit_exref)
  ;
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar1 = thunk_FUN_105a6160(&UInteractions::PrivateStaticClass,L"EInputKey",0);
  *(undefined4 *)(in_ECX + 0xec0) = uVar1;
  *(undefined4 *)(in_ECX + 0xeb0) = 0;
  *(undefined4 *)(in_ECX + 0xeb4) = 0;
  *(undefined4 *)(in_ECX + 0xeb8) = 0;
  *(undefined4 *)(in_ECX + 0xebc) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 105a6b7d Catch@105a6b7d

void Catch_105a6b7d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a6b91 Catch@105a6b91

void Catch_105a6b91(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::UInput");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a6bf0 FUN_105a6bf0

void FUN_105a6bf0(FArchive *param_1)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f3b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  thunk_FUN_105a5ce0(param_1,in_ECX + 0xec0);
  ExceptionList = local_10;
  return;
}


// ==== 105a6c4e Catch@105a6c4e

void Catch_105a6c4e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a6c62 Catch@105a6c62

void Catch_105a6c62(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a6cb0 FUN_105a6cb0

undefined4 FUN_105a6cb0(undefined4 param_1,EInputKey param_2,EInputAction param_3,float param_4)

{
  double dVar1;
  float fVar2;
  int iVar3;
  ushort *puVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f3c0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((int)param_2 < 0) || (ExceptionList = &local_10, 0xfe < (int)param_2)) {
    ExceptionList = &local_10;
    appFailAssert("iKey>=0&&iKey<IK_MAX",".\\UnIn.cpp",0x1569);
  }
  iVar3 = FString::Len((FString *)(in_ECX + param_2 * 3 + 0xae));
  if (iVar3 != 0) {
    if ((param_3 == 3) && (param_4 == 0.0)) {
      dVar1 = *(double *)(in_ECX + param_2 * 2 + 0x5f1);
      in_ECX[0x3b1] = 3;
      fVar2 = (float)dVar1;
    }
    else {
      in_ECX[0x3b1] = param_3;
      fVar2 = param_4;
    }
    in_ECX[0x3b2] = (int)fVar2;
    iVar3 = *in_ECX;
    puVar4 = FString::operator*((FString *)(in_ECX + param_2 * 3 + 0xae));
    (**(code **)(iVar3 + 0x98))(puVar4,param_1);
    in_ECX[0x3b1] = 0;
    in_ECX[0x3b2] = 0;
    if (((*(int *)GIsEditor_exref == 0) && (*(int *)GL2UseReplayManager_exref != 0)) &&
       (*(int *)(DAT_10c51044 + 0x198) != 0)) {
      iVar3 = FL2ReplayManager::GetState(*(FL2ReplayManager **)(DAT_10c51044 + 0x198));
      if (iVar3 == 2) {
        FL2ReplayManager::AddCameraActionData
                  (*(FL2ReplayManager **)(DAT_10c51044 + 0x198),param_2,param_3,param_4);
      }
    }
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105a6dff Catch@105a6dff

void Catch_105a6dff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105a6e13 Catch@105a6e13

void Catch_105a6e13(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::Process");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a6e90 FUN_105a6e90

void FUN_105a6e90(int param_1,float param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  int *in_ECX;
  double dVar3;
  FString local_bc [12];
  FString local_b0 [12];
  FString local_a4 [12];
  FString local_98 [12];
  FString local_8c [64];
  void *local_4c;
  undefined1 *puStack_48;
  int local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_1081f3fd;
  local_4c = ExceptionList;
  if ((*(int *)(DAT_10c51044 + 0x68) == 0) || (*(int *)(*(int *)(DAT_10c51044 + 0x68) + 0x38) == 5))
  {
    ExceptionList = &local_4c;
    puVar1 = FString::operator*((FString *)(in_ECX + param_1 * 3 + 0xae));
    FString::FString(local_bc,puVar1);
    local_44 = 0;
    FString::FString(local_b0,local_bc);
    local_44._0_1_ = 1;
    FString::FString(local_a4,local_bc);
    local_44 = CONCAT31(local_44._1_3_,2);
    iVar2 = FString::Len(local_bc);
    while (iVar2 != 0) {
      FString::FString(local_98,(ushort *)&DAT_108bb164);
      local_44._0_1_ = 3;
      iVar2 = FString::Split(local_bc,local_98,local_b0,local_a4,0);
      local_44 = CONCAT31(local_44._1_3_,2);
      FString::~FString(local_98);
      if (iVar2 == 0) {
        FString::operator=(local_b0,local_bc);
        FString::operator=(local_bc,(ushort *)&DAT_10853d94);
      }
      else {
        FString::operator=(local_bc,local_a4);
      }
      dVar3 = (double)param_2;
      puVar1 = FString::operator*(local_b0);
      FString::Printf((ushort *)local_8c,L"%s Speed=%f",puVar1,dVar3);
      local_44._0_1_ = 4;
      iVar2 = *in_ECX;
      in_ECX[0x3b2] = param_3;
      in_ECX[0x3b1] = 2;
      puVar1 = FString::operator*(local_8c);
      (**(code **)(iVar2 + 0x98))(puVar1);
      in_ECX[0x3b2] = 0;
      in_ECX[0x3b1] = 0;
      local_44 = CONCAT31(local_44._1_3_,2);
      FString::~FString(local_8c);
      iVar2 = FString::Len(local_bc);
    }
    local_44._1_3_ = (uint3)((uint)local_44 >> 8);
    local_44._0_1_ = 1;
    FString::~FString(local_a4);
    local_44 = (uint)local_44._1_3_ << 8;
    FString::~FString(local_b0);
    local_44 = 0xffffffff;
    FString::~FString(local_bc);
  }
  ExceptionList = local_4c;
  return;
}


// ==== 105a7120 FUN_105a7120

ushort * FUN_105a7120(uint param_1)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f420;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 < 0xff) {
    ExceptionList = &local_10;
    puVar1 = FName::operator*((FName *)(*(int *)(*(int *)(in_ECX + 0xec0) + 0x40) + param_1 * 4));
    iVar2 = appStrlen(puVar1);
    if (3 < iVar2) {
      puVar1 = FName::operator*((FName *)(*(int *)(*(int *)(in_ECX + 0xec0) + 0x40) + param_1 * 4));
      ExceptionList = local_10;
      return puVar1 + 3;
    }
  }
  ExceptionList = local_10;
  return (ushort *)&DAT_10853d94;
}


// ==== 105a71ba Catch@105a71ba

void Catch_105a71ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a71ce Catch@105a71ce

void Catch_105a71ce(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::GetKeyName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a7220 FUN_105a7220

undefined4 FUN_105a7220(FName *param_1,int *param_2)

{
  int iVar1;
  int *in_ECX;
  
  *param_2 = 0;
  if (0 < in_ECX[1]) {
    do {
      iVar1 = FName::operator==((FName *)(*in_ECX + *param_2 * 4),param_1);
      if (iVar1 != 0) {
        return 1;
      }
      *param_2 = *param_2 + 1;
    } while (*param_2 < in_ECX[1]);
  }
  return 0;
}


// ==== 105a7290 FUN_105a7290

int FUN_105a7290(void)

{
  int in_ECX;
  
  return **(int **)(in_ECX + 4) + 4 + *(int *)(in_ECX + 8) * 0xc;
}


// ==== 105a72b0 FUN_105a72b0

int FUN_105a72b0(void)

{
  int in_ECX;
  
  return **(int **)(in_ECX + 4) + 4 + *(int *)(in_ECX + 8) * 0xc;
}


// ==== 105a72d0 FUN_105a72d0

void FUN_105a72d0(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  if (param_1 != 0) {
    in_ECX[1] = *(int *)(param_1 + 0x48);
    thunk_FUN_105a60a0();
    return;
  }
  in_ECX[1] = 0;
  thunk_FUN_105a60a0();
  return;
}


// ==== 105a7330 FUN_105a7330

void FUN_105a7330(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  if (param_1 != 0) {
    in_ECX[1] = *(int *)(param_1 + 0x48);
    thunk_FUN_105a6100();
    return;
  }
  in_ECX[1] = 0;
  thunk_FUN_105a6100();
  return;
}


// ==== 105a7390 FUN_105a7390

UObject * FUN_105a7390(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&APlayerStart::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105a73c0 FUN_105a73c0

UObject * FUN_105a73c0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&AZoneInfo::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105a73f0 FUN_105a73f0

int * FUN_105a73f0(UObject *param_1,FCacheItem **param_2)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int local_14;
  int local_c;
  
  if (param_1 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = UObject::GetCacheIndex(param_1);
  }
  lVar5 = __allmul(uVar1,0,0x100,0);
  piVar2 = (int *)FMemCache::Get(&GCache,lVar5 + 0x1f,param_2,8);
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
    if (param_1 == (UObject *)0x0) {
      local_14 = 0;
    }
    else {
      local_14 = *(int *)(param_1 + 0x48);
    }
    thunk_FUN_10589890();
    while (local_14 != 0) {
      if ((*(byte *)(local_14 + 0x48) & 4) != 0) {
        iVar3 = iVar3 + 1;
      }
      local_14 = *(int *)(local_14 + 0x38);
      thunk_FUN_10589890();
    }
    piVar2 = (int *)FMemCache::Create(&GCache,lVar5 + 0x1f,param_2,iVar3 * 4 + 4,8,0);
    *piVar2 = iVar3;
    if (param_1 == (UObject *)0x0) {
      local_c = 0;
    }
    else {
      local_c = *(int *)(param_1 + 0x48);
    }
    thunk_FUN_10589890();
    if (local_c != 0) {
      piVar4 = piVar2 + 1;
      do {
        if ((*(byte *)(local_c + 0x48) & 4) != 0) {
          *piVar4 = local_c;
          piVar4 = piVar4 + 1;
        }
        local_c = *(int *)(local_c + 0x38);
        thunk_FUN_10589890();
      } while (local_c != 0);
    }
  }
  return piVar2;
}


// ==== 105a7570 FUN_105a7570

UObject * FUN_105a7570(UObject *param_1,ushort *param_2)

{
  UObject *this;
  undefined1 *puVar1;
  int iVar2;
  UClass *pUVar3;
  int *piVar4;
  FName *this_00;
  int iVar5;
  int in_ECX;
  FName *pFVar6;
  undefined4 *puVar7;
  FName *pFVar8;
  FName local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f430;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffd0;
  if (*(int *)(in_ECX + 0xeac) == 0) {
    ExceptionList = &local_10;
    appFailAssert("Viewport",".\\UnIn.cpp",0xa0);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  this = param_1;
  if (param_1 == (UObject *)0x0) {
    appFailAssert("Actor",".\\UnIn.cpp",0xa1);
  }
  FName::FName(local_18,param_2,0);
  FName::FName((FName *)&param_1,0);
  iVar2 = FName::operator!=(local_18,(FName *)&param_1);
  if (iVar2 != 0) {
    puVar7 = &param_1;
    pUVar3 = UObject::GetClass(this);
    piVar4 = (int *)thunk_FUN_105a73f0(pUVar3,puVar7);
    for (iVar2 = 0; iVar2 < *piVar4; iVar2 = iVar2 + 1) {
      pFVar8 = local_18;
      pFVar6 = (FName *)&param_2;
      this_00 = (FName *)UObject::GetFName((UObject *)piVar4[iVar2 + 1]);
      iVar5 = FName::operator==(this_00,pFVar6);
      if (iVar5 != 0) {
        iVar5 = thunk_FUN_105a6190(piVar4[iVar2 + 1],pFVar8);
        if (iVar5 != 0) break;
      }
    }
    FMemCache::FCacheItem::Unlock((FCacheItem *)param_1);
    if (iVar2 < *piVar4) {
      ExceptionList = local_10;
      return this + *(int *)(piVar4[iVar2 + 1] + 0x54);
    }
  }
  ExceptionList = local_10;
  return (UObject *)0x0;
}


// ==== 105a7695 Catch@105a7695

void Catch_105a7695(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105a76a9 Catch@105a76a9

void Catch_105a76a9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::FindButtonName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a7720 FUN_105a7720

UObject * FUN_105a7720(UObject *param_1,ushort *param_2)

{
  UObject *this;
  undefined1 *puVar1;
  int iVar2;
  UClass *pUVar3;
  int *piVar4;
  FName *this_00;
  int iVar5;
  int in_ECX;
  FName *pFVar6;
  undefined4 *puVar7;
  FName *pFVar8;
  FName local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f440;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffd0;
  if (*(int *)(in_ECX + 0xeac) == 0) {
    ExceptionList = &local_10;
    appFailAssert("Viewport",".\\UnIn.cpp",0xbb);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  this = param_1;
  if (param_1 == (UObject *)0x0) {
    appFailAssert("Actor",".\\UnIn.cpp",0xbc);
  }
  FName::FName(local_18,param_2,0);
  FName::FName((FName *)&param_1,0);
  iVar2 = FName::operator!=(local_18,(FName *)&param_1);
  if (iVar2 != 0) {
    puVar7 = &param_1;
    pUVar3 = UObject::GetClass(this);
    piVar4 = (int *)thunk_FUN_105a73f0(pUVar3,puVar7);
    for (iVar2 = 0; iVar2 < *piVar4; iVar2 = iVar2 + 1) {
      pFVar8 = local_18;
      pFVar6 = (FName *)&param_2;
      this_00 = (FName *)UObject::GetFName((UObject *)piVar4[iVar2 + 1]);
      iVar5 = FName::operator==(this_00,pFVar6);
      if (iVar5 != 0) {
        iVar5 = thunk_FUN_105a61c0(piVar4[iVar2 + 1],pFVar8);
        if (iVar5 != 0) break;
      }
    }
    FMemCache::FCacheItem::Unlock((FCacheItem *)param_1);
    if (iVar2 < *piVar4) {
      ExceptionList = local_10;
      return this + *(int *)(piVar4[iVar2 + 1] + 0x54);
    }
  }
  ExceptionList = local_10;
  return (UObject *)0x0;
}


// ==== 105a7845 Catch@105a7845

void Catch_105a7845(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105a7859 Catch@105a7859

void Catch_105a7859(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::FindAxisName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a78d0 FUN_105a78d0

void FUN_105a78d0(float param_1)

{
  float *pfVar1;
  UClass *pUVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  FCacheItem **ppFVar6;
  FCacheItem *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f450;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar5 = 0;
  local_8 = 0;
  if (*(int *)GIsRunning_exref == 0) {
    return;
  }
  local_18 = (FCacheItem *)0x0;
  ppFVar6 = &local_18;
  ExceptionList = &local_10;
  pUVar2 = UObject::GetClass(*(UObject **)(in_ECX[0x3ab] + 0x3c));
  piVar3 = (int *)thunk_FUN_105a73f0(pUVar2,ppFVar6);
  if (param_1 != -1.0) {
    for (; iVar5 < 0xff; iVar5 = iVar5 + 1) {
      if (*(char *)(iVar5 + 0xecc + (int)in_ECX) != '\0') {
        (**(code **)(*in_ECX + 0x74))(*(undefined4 *)GLog_exref,iVar5,2,param_1);
      }
    }
    if (param_1 != -1.0) {
      param_1 = 20.0 / param_1;
      goto LAB_105a798c;
    }
  }
  param_1 = 0.0;
LAB_105a798c:
  for (iVar5 = 0; iVar5 < *piVar3; iVar5 = iVar5 + 1) {
    iVar4 = thunk_FUN_105a61c0(piVar3[iVar5 + 1]);
    if (iVar4 != 0) {
      pfVar1 = (float *)(*(int *)(in_ECX[0x3ab] + 0x3c) + *(int *)(piVar3[iVar5 + 1] + 0x54));
      *pfVar1 = *pfVar1 * param_1;
    }
  }
  FMemCache::FCacheItem::Unlock(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 105a79ec Catch@105a79ec

void Catch_105a79ec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105a7a00 Catch@105a7a00

void Catch_105a7a00(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::ReadInput");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a7a70 FUN_105a7a70

void FUN_105a7a70(void)

{
  int iVar1;
  UClass *pUVar2;
  int in_ECX;
  int local_2c;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f460;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0xeac) == 0) {
    ExceptionList = &local_10;
    appFailAssert("Viewport",".\\UnIn.cpp",0x15d3);
  }
  for (iVar1 = 0; iVar1 < 0xff; iVar1 = iVar1 + 1) {
    *(undefined1 *)(iVar1 + 0xecc + in_ECX) = 0;
  }
  pUVar2 = UObject::GetClass(*(UObject **)(*(int *)(in_ECX + 0xeac) + 0x3c));
  thunk_FUN_105a72d0(pUVar2);
  while (local_24 != 0) {
    if ((*(byte *)(local_24 + 0x48) & 4) != 0) {
      *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0xeac) + 0x3c) + *(int *)(local_24 + 0x54)) = 0;
    }
    local_24 = *(int *)(local_24 + 0x38);
    thunk_FUN_105a60a0();
  }
  pUVar2 = UObject::GetClass(*(UObject **)(*(int *)(in_ECX + 0xeac) + 0x3c));
  thunk_FUN_105a7330(pUVar2);
  while (local_2c != 0) {
    if ((*(byte *)(local_2c + 0x48) & 4) == 0) {
      local_2c = *(int *)(local_2c + 0x38);
      thunk_FUN_105a6100();
    }
    else {
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xeac) + 0x3c) + *(int *)(local_2c + 0x54)) = 0;
      local_2c = *(int *)(local_2c + 0x38);
      thunk_FUN_105a6100();
    }
  }
  *(undefined4 *)(in_ECX + 0xec4) = 0;
  *(undefined4 *)(in_ECX + 0xec8) = 0;
  (**(code **)(**(int **)(in_ECX + 0xeac) + 0x94))(1,0);
  ExceptionList = local_10;
  return;
}


// ==== 105a7bae Catch@105a7bae

void Catch_105a7bae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105a7bc2 Catch@105a7bc2

void Catch_105a7bc2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::ResetInput");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a7c40 FUN_105a7c40

undefined4 FUN_105a7c40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort local_224 [260];
  FName local_1c [8];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f470;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd0;
  local_8 = 0;
  ExceptionList = &local_10;
  appSprintf(local_224,(ushort *)L"IK_%s",param_1);
  FName::FName((FName *)&param_1,local_224,0);
  FName::FName(local_1c,0);
  iVar1 = FName::operator!=((FName *)&param_1,local_1c);
  if (iVar1 != 0) {
    uVar2 = thunk_FUN_105a7220(&param_1,param_2);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 105a7cf2 Catch@105a7cf2

void Catch_105a7cf2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105a7d06 Catch@105a7d06

void Catch_105a7d06(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::FindKeyName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105a7d60 FUN_105a7d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7d60(ushort *param_1)

{
  uint *puVar1;
  UObject *this;
  int iVar2;
  int iVar3;
  ALineagePlayerController *this_00;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int *in_ECX;
  float unaff_EBX;
  undefined4 unaff_EBP;
  int unaff_ESI;
  float *pfVar7;
  undefined4 unaff_EDI;
  bool bVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float local_330;
  float local_32c;
  float local_328;
  int local_324;
  int local_320;
  L2ParamStack aLStack_31c [16];
  ushort local_30c [128];
  ushort local_20c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1081f48c;
  local_c = ExceptionList;
  if ((DAT_10c51044[0x1a] != 0) && (*(int *)(DAT_10c51044[0x1a] + 0x38) != 5)) {
    return;
  }
  ExceptionList = &local_c;
  iVar3 = ParseCommand(&param_1,(ushort *)L"MOVE");
  if (iVar3 != 0) {
    if (*(int *)(in_ECX[0x3ab] + 0x3c) == 0) {
      ExceptionList = local_c;
      return;
    }
    if (*(int *)(*(int *)(in_ECX[0x3ab] + 0x3c) + 0x3bc) == 0) {
      ExceptionList = local_c;
      return;
    }
    iVar3 = ParseToken(&param_1,local_20c,0x100,0);
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    iVar3 = (**(code **)(*in_ECX + 0x94))(*(undefined4 *)(in_ECX[0x3ab] + 0x3c),local_20c);
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    local_330 = 0.0;
    Parse(param_1,(ushort *)L"SPEED=",&local_330);
    fVar9 = (float10)thunk_FUN_10370480(local_330);
    if (fVar9 < (float10)0) {
      local_330 = (float)(float10)0;
    }
    iVar3 = appStricmp(local_20c,(ushort *)L"aBaseX");
    if (iVar3 == 0) {
      _DAT_10c679e0 = local_330;
      ExceptionList = local_c;
      return;
    }
    iVar3 = appStricmp(local_20c,(ushort *)L"aBaseY");
    if (iVar3 != 0) {
      ExceptionList = local_c;
      return;
    }
    _DAT_10c679dc = local_330;
    this_00 = (ALineagePlayerController *)thunk_FUN_1040b460(*(undefined4 *)(in_ECX[0x3ab] + 0x3c));
    if (this_00 == (ALineagePlayerController *)0x0) {
      ExceptionList = local_c;
      return;
    }
    ALineagePlayerController::ResetJoypadMoving(this_00,_DAT_10c679e0,_DAT_10c679dc);
    ExceptionList = local_c;
    return;
  }
  iVar3 = ParseCommand(&param_1,(ushort *)&DAT_108a165c);
  if ((iVar3 != 0) && (*(int *)GIsEditor_exref == 0)) {
    iVar3 = in_ECX[0x3b1];
    if (iVar3 == 1) {
      in_ECX[0x3af] = 1;
      (**(code **)(*(int *)DAT_10c51044[0x1a] + 0x2c4))();
      ExceptionList = local_c;
      return;
    }
    if ((iVar3 != 3) && (iVar3 != 0)) {
      ExceptionList = local_c;
      return;
    }
    in_ECX[0x3af] = 0;
    (**(code **)(*(int *)DAT_10c51044[0x1a] + 0x2c8))();
    ExceptionList = local_c;
    return;
  }
  iVar3 = ParseCommand(&param_1,(ushort *)L"Extend1");
  if ((iVar3 != 0) && (*(int *)GIsEditor_exref == 0)) {
    iVar3 = in_ECX[0x3b1];
    if (iVar3 == 1) {
      in_ECX[0x3ac] = 1;
      pcVar6 = *(code **)(*(int *)DAT_10c51044[0x1a] + 0x62c);
      iVar3 = 1;
    }
    else {
      if ((iVar3 != 3) && (iVar3 != 0)) {
        ExceptionList = local_c;
        return;
      }
      in_ECX[0x3ac] = 0;
      pcVar6 = *(code **)(*(int *)DAT_10c51044[0x1a] + 0x62c);
      iVar3 = 0;
    }
LAB_105a90f6:
    (*pcVar6)(iVar3);
    ExceptionList = local_c;
    return;
  }
  iVar3 = ParseCommand(&param_1,(ushort *)L"Extend2");
  if ((iVar3 != 0) && (*(int *)GIsEditor_exref == 0)) {
    iVar3 = in_ECX[0x3b1];
    if (iVar3 == 1) {
      in_ECX[0x3ad] = 1;
      pcVar6 = *(code **)(*(int *)DAT_10c51044[0x1a] + 0x630);
      iVar3 = 1;
    }
    else {
      if ((iVar3 != 3) && (iVar3 != 0)) {
        ExceptionList = local_c;
        return;
      }
      in_ECX[0x3ad] = 0;
      pcVar6 = *(code **)(*(int *)DAT_10c51044[0x1a] + 0x630);
      iVar3 = 0;
    }
    goto LAB_105a90f6;
  }
  iVar3 = ParseCommand(&param_1,(ushort *)L"Extend3");
  if ((iVar3 != 0) && (*(int *)GIsEditor_exref == 0)) {
    iVar3 = in_ECX[0x3b1];
    if (iVar3 == 1) {
      in_ECX[0x3ae] = 1;
      pcVar6 = *(code **)(*(int *)DAT_10c51044[0x1a] + 0x634);
      iVar3 = 1;
    }
    else {
      if ((iVar3 != 3) && (iVar3 != 0)) {
        ExceptionList = local_c;
        return;
      }
      in_ECX[0x3ae] = 0;
      pcVar6 = *(code **)(*(int *)DAT_10c51044[0x1a] + 0x634);
      iVar3 = 0;
    }
    goto LAB_105a90f6;
  }
  iVar3 = ParseCommand(&param_1,(ushort *)L"INVENTORYOPEN");
  if ((iVar3 != 0) && (*(int *)GIsEditor_exref == 0)) {
    iVar4 = ParseCommand(&param_1,(ushort *)L"OnRelease");
    iVar3 = in_ECX[0x3b1];
    if (iVar4 == 0) {
      bVar8 = iVar3 == 1;
    }
    else {
      bVar8 = iVar3 == 3;
    }
    if ((!bVar8) && (iVar3 != 0)) {
      ExceptionList = local_c;
      return;
    }
    (**(code **)(*(int *)DAT_10c51044[0x1a] + 0x2ac))();
    ExceptionList = local_c;
    return;
  }
  iVar3 = ParseCommand(&param_1,(ushort *)L"StatusOpen");
  if ((iVar3 != 0) && (*(int *)GIsEditor_exref == 0)) {
    iVar4 = ParseCommand(&param_1,(ushort *)L"OnRelease");
    iVar3 = in_ECX[0x3b1];
    if (iVar4 == 0) {
      bVar8 = iVar3 == 1;
    }
    else {
      bVar8 = iVar3 == 3;
    }
    if ((!bVar8) && (iVar3 != 0)) {
      ExceptionList = local_c;
      return;
    }
    (**(code **)(*(int *)DAT_10c51044[0x1a] + 0x2b0))();
    ExceptionList = local_c;
    return;
  }
  iVar3 = ParseCommand(&param_1,(ushort *)L"SHORTCUTUSE");
  if ((iVar3 != 0) && (*(int *)GIsEditor_exref == 0)) {
    iVar4 = ParseCommand(&param_1,(ushort *)L"OnRelease");
    iVar3 = in_ECX[0x3b1];
    if (iVar4 == 0) {
      bVar8 = iVar3 == 1;
    }
    else {
      bVar8 = iVar3 == 3;
    }
    if ((!bVar8) && (iVar3 != 0)) {
      ExceptionList = local_c;
      return;
    }
    ParseToken(&param_1,local_30c,0x80,0);
    iVar3 = appStrcmp(local_30c,(ushort *)L"Extend1");
    if (iVar3 == 0) {
      iVar3 = in_ECX[0x3ac];
    }
    else {
      iVar3 = appStrcmp(local_30c,(ushort *)L"Extend2");
      if (iVar3 != 0) {
        if (in_ECX[0x3ac] != 0) {
          ExceptionList = local_c;
          return;
        }
        if (in_ECX[0x3ad] != 0) {
          ExceptionList = local_c;
          return;
        }
        iVar3 = Parse(local_30c,(ushort *)L"num=",(int *)&local_32c);
        if (iVar3 == 0) {
          ExceptionList = local_c;
          return;
        }
        pcVar6 = *(code **)(*(int *)DAT_10c51044[0x1a] + 0x2b4);
        iVar3 = (int)local_32c + -1;
        goto LAB_105a90f6;
      }
      iVar3 = in_ECX[0x3ad];
    }
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    iVar3 = Parse(param_1,(ushort *)L"num=",(int *)&local_32c);
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    (**(code **)(*(int *)DAT_10c51044[0x1a] + 0x2b4))((int)local_32c + -1);
    ExceptionList = local_c;
    return;
  }
  iVar3 = ParseCommand(&param_1,(ushort *)L"ShortcutUp");
  if ((iVar3 != 0) && (*(int *)GIsEditor_exref == 0)) {
    iVar4 = ParseCommand(&param_1,(ushort *)L"OnRelease");
    iVar3 = in_ECX[0x3b1];
    if (iVar4 == 0) {
      bVar8 = iVar3 == 1;
    }
    else {
      bVar8 = iVar3 == 3;
    }
    if ((!bVar8) && (iVar3 != 0)) {
      ExceptionList = local_c;
      return;
    }
    pcVar6 = *(code **)(*(int *)DAT_10c51044[0x1a] + 0x2b8);
    iVar3 = 1;
    goto LAB_105a90f6;
  }
  iVar3 = ParseCommand(&param_1,(ushort *)L"ShortcutDown");
  if ((iVar3 != 0) && (*(int *)GIsEditor_exref == 0)) {
    iVar4 = ParseCommand(&param_1,(ushort *)L"OnRelease");
    iVar3 = in_ECX[0x3b1];
    if (iVar4 == 0) {
      bVar8 = iVar3 == 1;
    }
    else {
      bVar8 = iVar3 == 3;
    }
    if ((!bVar8) && (iVar3 != 0)) {
      ExceptionList = local_c;
      return;
    }
    pcVar6 = *(code **)(*(int *)DAT_10c51044[0x1a] + 0x2b8);
    iVar3 = 0;
    goto LAB_105a90f6;
  }
  iVar3 = ParseCommand(&param_1,(ushort *)L"PartyTargetNext");
  if ((iVar3 != 0) && (*(int *)GIsEditor_exref == 0)) {
    iVar4 = ParseCommand(&param_1,(ushort *)L"OnRelease");
    iVar3 = in_ECX[0x3b1];
    if (iVar4 == 0) {
      bVar8 = iVar3 == 1;
    }
    else {
      bVar8 = iVar3 == 3;
    }
    if ((!bVar8) && (iVar3 != 0)) {
      ExceptionList = local_c;
      return;
    }
    if (in_ECX[0x3ac] == 0) {
      ExceptionList = local_c;
      return;
    }
    local_32c = 2.8026e-43;
    Parse(param_1,(ushort *)L"range=",(int *)&local_32c);
    iVar3 = (**(code **)(*(int *)DAT_10c51044[0x18] + 0x444))((float)(int)local_32c,1);
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    piVar5 = (int *)thunk_FUN_1040b460(*(undefined4 *)(in_ECX[0x3ab] + 0x3c));
    if (piVar5 == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    if (*(int *)(iVar3 + 0x204) == 0) {
      ExceptionList = local_c;
      return;
    }
    iVar4 = (**(code **)(*piVar5 + 0x35c))();
    if (*(int *)(iVar3 + 0x204) == iVar4) {
      ExceptionList = local_c;
      return;
    }
    iVar4 = piVar5[0xef];
    (**(code **)(*(int *)DAT_10c51044[0x18] + 0x100))
              (*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar4 + 0x1bc),
               *(undefined4 *)(iVar4 + 0x1c0),*(undefined4 *)(iVar4 + 0x1c4),
               *(undefined1 *)(*(int *)(in_ECX[0x3ab] + 0x78) + 0xedc));
    ExceptionList = local_c;
    return;
  }
  iVar3 = ParseCommand(&param_1,(ushort *)L"PartyTargetPrev");
  if ((iVar3 != 0) && (*(int *)GIsEditor_exref == 0)) {
    iVar4 = ParseCommand(&param_1,(ushort *)L"OnRelease");
    iVar3 = in_ECX[0x3b1];
    if (iVar4 == 0) {
      bVar8 = iVar3 == 1;
    }
    else {
      bVar8 = iVar3 == 3;
    }
    if ((!bVar8) && (iVar3 != 0)) {
      ExceptionList = local_c;
      return;
    }
    if (in_ECX[0x3ac] == 0) {
      ExceptionList = local_c;
      return;
    }
    local_32c = 2.8026e-43;
    Parse(param_1,(ushort *)L"range=",(int *)&local_32c);
    iVar3 = (**(code **)(*(int *)DAT_10c51044[0x18] + 0x444))((float)(int)local_32c,0);
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    piVar5 = (int *)thunk_FUN_1040b460(*(undefined4 *)(in_ECX[0x3ab] + 0x3c));
    if (piVar5 == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    if (*(int *)(iVar3 + 0x204) == 0) {
      ExceptionList = local_c;
      return;
    }
    iVar4 = (**(code **)(*piVar5 + 0x35c))();
    if (*(int *)(iVar3 + 0x204) == iVar4) {
      ExceptionList = local_c;
      return;
    }
    iVar4 = piVar5[0xef];
    (**(code **)(*(int *)DAT_10c51044[0x18] + 0x100))
              (*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar4 + 0x1bc),
               *(undefined4 *)(iVar4 + 0x1c0),*(undefined4 *)(iVar4 + 0x1c4),
               *(undefined1 *)(*(int *)(in_ECX[0x3ab] + 0x78) + 0xedc));
    ExceptionList = local_c;
    return;
  }
  iVar3 = ParseCommand(&param_1,(ushort *)L"TargetCancel");
  if ((iVar3 != 0) && (*(int *)GIsEditor_exref == 0)) {
    if (in_ECX[0x3ad] == 0) {
      ExceptionList = local_c;
      return;
    }
    iVar4 = ParseCommand(&param_1,(ushort *)L"OnRelease");
    iVar3 = in_ECX[0x3b1];
    if (iVar4 == 0) {
      bVar8 = iVar3 == 1;
    }
    else {
      bVar8 = iVar3 == 3;
    }
    if ((!bVar8) && (iVar3 != 0)) {
      ExceptionList = local_c;
      return;
    }
    piVar5 = (int *)thunk_FUN_1040b460(*(undefined4 *)(in_ECX[0x3ab] + 0x3c));
    if (piVar5 == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    iVar3 = (**(code **)(*piVar5 + 0x35c))();
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    L2ParamStack::L2ParamStack(aLStack_31c,10);
    uStack_4 = 0;
    (**(code **)(*(int *)DAT_10c51044[0x18] + 0x2a0))(aLStack_31c);
    uStack_4 = 0xffffffff;
    L2ParamStack::~L2ParamStack(aLStack_31c);
    ExceptionList = local_c;
    return;
  }
  iVar3 = ParseCommand(&param_1,(ushort *)L"NPCTargetPrev");
  if ((iVar3 == 0) || (*(int *)GIsEditor_exref != 0)) {
    iVar3 = ParseCommand(&param_1,(ushort *)L"NPCTargetNext");
    if ((iVar3 == 0) || (*(int *)GIsEditor_exref != 0)) {
      iVar3 = ParseCommand(&param_1,(ushort *)L"CAMERAPITCH");
      if ((iVar3 == 0) || (*(int *)GIsEditor_exref != 0)) {
        iVar3 = ParseCommand(&param_1,(ushort *)L"CAMERAYAW");
        if ((iVar3 != 0) && (*(int *)GIsEditor_exref == 0)) {
          if (*(UObject **)(in_ECX[0x3ab] + 0x3c) == (UObject *)0x0) {
            ExceptionList = local_c;
            return;
          }
          iVar3 = UObject::IsA(*(UObject **)(in_ECX[0x3ab] + 0x3c),
                               &ALineagePlayerController::PrivateStaticClass);
          if (iVar3 == 0) {
            ExceptionList = local_c;
            return;
          }
          local_330 = 0.0;
          local_328 = 1.0;
          local_32c = 0.1;
          pfVar7 = (float *)(*(int *)(in_ECX[0x3ab] + 0x3c) + 0x98c);
          local_324 = 1;
          Parse(param_1,(ushort *)L"SPEED=",&local_330);
          Parse(param_1,(ushort *)L"FACTOR=",&local_328);
          Parse(param_1,(ushort *)L"DEADZONE=",&local_32c);
          Parse(param_1,(ushort *)L"Direction=",&local_324);
          fVar9 = (float10)thunk_FUN_10370480(local_330);
          if (fVar9 < (float10)local_32c) {
            local_330 = 0.0;
          }
          local_328 = local_328 * local_330;
          if (in_ECX[0x3b1] == 4) {
            if ((*(byte *)(*(int *)(in_ECX[0x3ab] + 0x3c) + 0x960) & 2) == 0) {
              ExceptionList = local_c;
              return;
            }
            *pfVar7 = (float)in_ECX[0x3b2] * 0.01 * local_328 + *pfVar7;
            ExceptionList = local_c;
            return;
          }
          if (in_ECX[0x3b1] != 2) {
            ExceptionList = local_c;
            return;
          }
          if (local_324 == 1) {
            *pfVar7 = (float)in_ECX[0x3b2] * local_328 + *pfVar7;
            ExceptionList = local_c;
            return;
          }
          *pfVar7 = *pfVar7 - (float)in_ECX[0x3b2] * local_328;
          ExceptionList = local_c;
          return;
        }
        iVar3 = ParseCommand(&param_1,(ushort *)L"FIXEDDEFAULTCAMERA");
        if (iVar3 == 0) {
          ExceptionList = local_c;
          return;
        }
        if (*(int *)GIsEditor_exref != 0) {
          ExceptionList = local_c;
          return;
        }
        iVar4 = ParseCommand(&param_1,(ushort *)L"OnRelease");
        iVar3 = in_ECX[0x3b1];
        if (iVar4 == 0) {
          bVar8 = iVar3 == 1;
        }
        else {
          bVar8 = iVar3 == 3;
        }
        if ((!bVar8) && (iVar3 != 0)) {
          ExceptionList = local_c;
          return;
        }
        this = *(UObject **)(in_ECX[0x3ab] + 0x3c);
        if (this == (UObject *)0x0) {
          ExceptionList = local_c;
          return;
        }
        if (*(int *)(this + 0x3bc) == 0) {
          ExceptionList = local_c;
          return;
        }
        iVar3 = UObject::IsA(this,&ALineagePlayerController::PrivateStaticClass);
        if (iVar3 == 0) {
          ExceptionList = local_c;
          return;
        }
        iVar3 = *(int *)(in_ECX[0x3ab] + 0x3c);
        if ((*(byte *)(iVar3 + 0x9b4) & 3) != 0) {
          ExceptionList = local_c;
          return;
        }
        if (((in_ECX[0x3b1] == 3) &&
            (iVar4 = Parse(param_1,(ushort *)L"MAXPRESSEDTIME=",&local_32c), iVar4 != 0)) &&
           (local_32c < (float)in_ECX[0x3b2])) {
          ExceptionList = local_c;
          return;
        }
        iVar4 = ParseCommand(&param_1,(ushort *)&DAT_108ca69c);
        if (iVar4 == 0) {
          iVar4 = ParseCommand(&param_1,(ushort *)L"DOWN");
          if (iVar4 != 0) {
            *(int *)(iVar3 + 0x9a4) = *(int *)(iVar3 + 0x9a4) + 1;
          }
        }
        else {
          *(int *)(iVar3 + 0x9a4) = *(int *)(iVar3 + 0x9a4) + -1;
        }
        if (*(int *)(iVar3 + 0x9a4) < 0) {
          *(int *)(iVar3 + 0x9a4) = *(int *)(iVar3 + 0x868) + -1;
        }
        else if (*(int *)(iVar3 + 0x868) <= *(int *)(iVar3 + 0x9a4)) {
          *(undefined4 *)(iVar3 + 0x9a4) = 0;
        }
        *(uint *)(iVar3 + 0x960) = *(uint *)(iVar3 + 0x960) | 0x70;
        iVar4 = *(int *)(iVar3 + 0x9a4);
        *(undefined4 *)(iVar3 + 0x9ac) = *(undefined4 *)(iVar3 + 0x894 + iVar4 * 4);
        *(undefined4 *)(iVar3 + 0x9a8) = *(undefined4 *)(iVar3 + 0x86c + iVar4 * 4);
        *(undefined4 *)(iVar3 + 0x9b0) = *(undefined4 *)(iVar3 + 0x8bc + iVar4 * 4);
        *(undefined4 *)(iVar3 + 0x95c) = *(undefined4 *)(iVar3 + 0x8e4 + iVar4 * 4);
        iVar2 = *(int *)(iVar3 + 0x3bc);
        *(uint *)(iVar3 + 0x960) =
             (*(int *)(iVar3 + 0x934 + iVar4 * 4) << 7 ^ *(uint *)(iVar3 + 0x960)) & 0x80 ^
             *(uint *)(iVar3 + 0x960);
        if (iVar2 != 0) {
          *(uint *)(iVar2 + 100) =
               *(uint *)(iVar2 + 100) ^
               (*(int *)(iVar3 + 0x90c + iVar4 * 4) << 5 ^ *(uint *)(iVar2 + 100)) & 0x20;
          if (*(int *)(*(int *)(iVar3 + 0x3bc) + 0x718) != 0) {
            iVar4 = *(int *)(*(int *)(iVar3 + 0x3bc) + 0x718);
            puVar1 = (uint *)(iVar4 + 100);
            *puVar1 = *puVar1 ^ (*(int *)(iVar3 + 0x90c + *(int *)(iVar3 + 0x9a4) * 4) << 5 ^
                                *(uint *)(iVar4 + 100)) & 0x20;
          }
        }
        *(undefined4 *)(iVar3 + 0x9f8) = *(undefined4 *)(*(int *)(iVar3 + 0x3bc) + 0x1cc);
        *(undefined4 *)(iVar3 + 0x9fc) = *(undefined4 *)(*(int *)(iVar3 + 0x3bc) + 0x1c8);
        *(uint *)(iVar3 + 0x960) = *(uint *)(iVar3 + 0x960) & 0xfffffffd | 8;
        if (*(int *)GIsL2NetLogin_exref == 0) {
          ExceptionList = local_c;
          return;
        }
        pcVar6 = *(code **)(*DAT_10c51044 + 0x204);
        iVar3 = 8;
        goto LAB_105a90f6;
      }
      if (*(UObject **)(in_ECX[0x3ab] + 0x3c) == (UObject *)0x0) {
        ExceptionList = local_c;
        return;
      }
      iVar3 = UObject::IsA(*(UObject **)(in_ECX[0x3ab] + 0x3c),
                           &ALineagePlayerController::PrivateStaticClass);
      if (iVar3 == 0) {
        ExceptionList = local_c;
        return;
      }
      local_330 = 0.0;
      local_328 = 1.0;
      local_32c = 0.1;
      pfVar7 = (float *)(*(int *)(in_ECX[0x3ab] + 0x3c) + 0x990);
      local_324 = 1;
      Parse(param_1,(ushort *)L"SPEED=",&local_330);
      Parse(param_1,(ushort *)L"FACTOR=",&local_328);
      Parse(param_1,(ushort *)L"DEADZONE=",&local_32c);
      Parse(param_1,(ushort *)L"Direction=",&local_324);
      fVar9 = (float10)thunk_FUN_10370480(local_330);
      if (fVar9 < (float10)local_32c) {
        local_330 = 0.0;
      }
      if (in_ECX[0x3b1] == 4) {
        if ((*(byte *)(*(int *)(in_ECX[0x3ab] + 0x3c) + 0x960) & 2) == 0) goto LAB_105a8d10;
        fVar12 = (float)in_ECX[0x3b2] * 0.01;
LAB_105a8d08:
        fVar12 = fVar12 * local_328 * local_330 + *pfVar7;
      }
      else {
        if (in_ECX[0x3b1] != 2) goto LAB_105a8d10;
        if (local_324 != 1) {
          fVar12 = (float)in_ECX[0x3b2];
          goto LAB_105a8d08;
        }
        fVar12 = *pfVar7 - (float)in_ECX[0x3b2] * local_328 * local_330;
      }
      *pfVar7 = fVar12;
LAB_105a8d10:
      if (*pfVar7 < -15000.0) {
        *pfVar7 = -15000.0;
        ExceptionList = local_c;
        return;
      }
      if (*pfVar7 <= 15000.0) {
        ExceptionList = local_c;
        return;
      }
      *pfVar7 = 15000.0;
      ExceptionList = local_c;
      return;
    }
    iVar4 = ParseCommand(&param_1,(ushort *)L"OnRelease");
    iVar3 = in_ECX[0x3b1];
    if (iVar4 == 0) {
      bVar8 = iVar3 == 1;
    }
    else {
      bVar8 = iVar3 == 3;
    }
    if ((!bVar8) && (iVar3 != 0)) {
      ExceptionList = local_c;
      return;
    }
    if (in_ECX[0x3ac] != 0) {
      ExceptionList = local_c;
      return;
    }
    if (in_ECX[0x3ad] != 0) {
      ExceptionList = local_c;
      return;
    }
    piVar5 = (int *)thunk_FUN_1040b460(*(undefined4 *)(in_ECX[0x3ab] + 0x3c));
    if (piVar5 == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    local_32c = 2.8026e-43;
    Parse(param_1,(ushort *)L"range=",(int *)&local_32c);
    local_330 = 5.60519e-44;
    local_320 = 0x28;
    local_324 = 0x3c;
    local_328 = 8.40779e-44;
    Parse(param_1,(ushort *)L"ptx1=",(int *)&local_330);
    Parse(param_1,(ushort *)L"pty1=",&local_320);
    Parse(param_1,(ushort *)L"ptx2=",&local_324);
    Parse(param_1,(ushort *)L"pty2=",(int *)&local_328);
    local_330 = (float)((*(int *)GSEKScreenX_exref * (int)local_330) / 100);
    local_320 = (*(int *)GSEKScreenY_exref * local_320) / 100;
    local_324 = (*(int *)GSEKScreenX_exref * local_324) / 100;
    local_328 = (float)((*(int *)GSEKScreenY_exref * (int)local_328) / 100);
    (**(code **)(*(int *)DAT_10c51044[0x1a] + 0x2c0))(local_330,local_320,local_324,local_328);
    iVar3 = (**(code **)(*piVar5 + 0x35c))();
    if (iVar3 != 0) {
      iVar3 = *(int *)DAT_10c51044[0x1a];
      iVar4 = (**(code **)(*piVar5 + 0x35c))(1,unaff_EDI,local_330,unaff_EBX,unaff_EBP);
      iVar3 = (**(code **)(iVar3 + 700))((float)unaff_ESI,*(undefined4 *)(iVar4 + 0x60));
      goto LAB_105a891d;
    }
    uVar10 = 1;
    uVar11 = unaff_EDI;
    fVar12 = local_330;
  }
  else {
    iVar4 = ParseCommand(&param_1,(ushort *)L"OnRelease");
    iVar3 = in_ECX[0x3b1];
    if (iVar4 == 0) {
      bVar8 = iVar3 == 1;
    }
    else {
      bVar8 = iVar3 == 3;
    }
    if ((!bVar8) && (iVar3 != 0)) {
      ExceptionList = local_c;
      return;
    }
    if (in_ECX[0x3ac] != 0) {
      ExceptionList = local_c;
      return;
    }
    if (in_ECX[0x3ad] != 0) {
      ExceptionList = local_c;
      return;
    }
    piVar5 = (int *)thunk_FUN_1040b460(*(undefined4 *)(in_ECX[0x3ab] + 0x3c));
    if (piVar5 == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    local_32c = 2.8026e-43;
    Parse(param_1,(ushort *)L"range=",(int *)&local_32c);
    local_328 = 5.60519e-44;
    local_324 = 0x28;
    local_320 = 0x3c;
    local_330 = 8.40779e-44;
    Parse(param_1,(ushort *)L"ptx1=",(int *)&local_328);
    Parse(param_1,(ushort *)L"pty1=",&local_324);
    Parse(param_1,(ushort *)L"ptx2=",&local_320);
    Parse(param_1,(ushort *)L"pty2=",(int *)&local_330);
    local_328 = (float)((*(int *)GSEKScreenX_exref * (int)local_328) / 100);
    local_324 = (*(int *)GSEKScreenY_exref * local_324) / 100;
    local_320 = (*(int *)GSEKScreenX_exref * local_320) / 100;
    local_330 = (float)((*(int *)GSEKScreenY_exref * (int)local_330) / 100);
    (**(code **)(*(int *)DAT_10c51044[0x1a] + 0x2c0))(local_328,local_324,local_320,local_330);
    iVar3 = (**(code **)(*piVar5 + 0x35c))();
    if (iVar3 != 0) {
      iVar3 = *(int *)DAT_10c51044[0x1a];
      iVar4 = (**(code **)(*piVar5 + 0x35c))(0,unaff_EBP,unaff_EBX,local_330);
      iVar3 = (**(code **)(iVar3 + 700))((float)unaff_ESI,*(undefined4 *)(iVar4 + 0x60));
      goto LAB_105a891d;
    }
    uVar10 = 0;
    uVar11 = unaff_EBP;
    fVar12 = unaff_EBX;
    unaff_EBX = local_330;
    unaff_EBP = unaff_EDI;
  }
  iVar3 = (**(code **)(*(int *)DAT_10c51044[0x1a] + 700))
                    ((float)unaff_ESI,0,uVar10,uVar11,fVar12,unaff_EBX,unaff_EBP);
LAB_105a891d:
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(iVar3 + 0x204) == 0) {
    ExceptionList = local_c;
    return;
  }
  iVar4 = (**(code **)(*piVar5 + 0x35c))();
  if (*(int *)(iVar3 + 0x204) == iVar4) {
    ExceptionList = local_c;
    return;
  }
  iVar4 = piVar5[0xef];
  (**(code **)(*(int *)DAT_10c51044[0x18] + 0x100))
            (*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar4 + 0x1bc),
             *(undefined4 *)(iVar4 + 0x1c0),*(undefined4 *)(iVar4 + 0x1c4),1);
  ExceptionList = local_c;
  return;
}


// ==== 105a9600 FUN_105a9600 (decompilacao falhou: falhou:Exception while decompiling 105a9600: process: timeout )

// ==== 105aa6b7 Catch@105aa6b7

void Catch_105aa6b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x520) = *(undefined4 *)(unaff_EBP + -0x7c4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x520,&DAT_10914c48);
}


// ==== 105aa6d4 Catch@105aa6d4

void Catch_105aa6d4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::Exec::Teleport");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105aeb60 Catch@105aeb60

void Catch_105aeb60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c4) = *(undefined4 *)(unaff_EBP + -0x760);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c4,&DAT_10914c48);
}


// ==== 105aeb7d Catch@105aeb7d

void Catch_105aeb7d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UnIn::Crash");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105b5659 Catch@105b5659

void Catch_105b5659(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x508) = *(undefined4 *)(unaff_EBP + -0x79c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x508,&DAT_10914c48);
}


// ==== 105b5676 Catch@105b5676

void Catch_105b5676(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::Exec::C_Teleport");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105b7529 Catch@105b7529

void Catch_105b7529(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x478) = *(undefined4 *)(unaff_EBP + -0x7ac);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x478,&DAT_10914c48);
}


// ==== 105b7546 Catch@105b7546

void Catch_105b7546(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExecAlias");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105b7a2e Catch@105b7a2e

void Catch_105b7a2e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x488) = *(undefined4 *)(unaff_EBP + -0x7b4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x488,&DAT_10914c48);
}


// ==== 105b7a4b Catch@105b7a4b

void Catch_105b7a4b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInput::Exec");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bb370 FUN_105bb370

void FUN_105bb370(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081f719;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 105bb3c0 FUN_105bb3c0

undefined4 FUN_105bb3c0(void)

{
  return 0;
}


// ==== 105bb3d0 FUN_105bb3d0

undefined4 FUN_105bb3d0(void)

{
  return 0;
}


// ==== 105bb3e0 FUN_105bb3e0

void FUN_105bb3e0(void)

{
  return;
}


// ==== 105bb3f0 FUN_105bb3f0

void FUN_105bb3f0(void)

{
  return;
}


// ==== 105bb400 FUN_105bb400

void FUN_105bb400(void)

{
  return;
}


// ==== 105bb410 FUN_105bb410

void FUN_105bb410(int param_1)

{
  UInteraction *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f730;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(*(int *)in_ECX + 0x3c))();
  UInteraction::eventInitialized(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 105bb48c Catch@105bb48c

void Catch_105bb48c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105bb4a0 Catch@105bb4a0

void Catch_105bb4a0(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UInteraction::_Init");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bb530 FUN_105bb530

void FUN_105bb530(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  int in_ECX;
  FOutputDevice *pFVar4;
  int *unaff_retaddr;
  FString local_18 [4];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081f749;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x3c) == 0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
  }
  else if (*(int *)(in_ECX + 0x38) == 0) {
    iVar3 = **(int **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x34) + 0x38);
    if (iVar3 == 0) {
      pFVar4 = (FOutputDevice *)0x0;
    }
    else {
      pFVar4 = (FOutputDevice *)(iVar3 + 0x34);
    }
    puVar2 = FString::operator*((FString *)&stack0xffffffe0);
    iVar3 = UInteractionMaster::Exec(*(UInteractionMaster **)(in_ECX + 0x3c),puVar2,pFVar4);
    *unaff_retaddr = iVar3;
  }
  else {
    pFVar4 = (FOutputDevice *)(*(int *)(in_ECX + 0x38) + 0x34);
    puVar2 = FString::operator*((FString *)&stack0xffffffe0);
    iVar3 = UInteractionMaster::Exec(*(UInteractionMaster **)(in_ECX + 0x3c),puVar2,pFVar4);
    *unaff_retaddr = iVar3;
  }
  pvStack_c = (void *)0xffffffff;
  FString::~FString((FString *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 105bb680 FUN_105bb680

void FUN_105bb680(int param_1,float *param_2)

{
  byte bVar1;
  int *piVar2;
  float *pfVar3;
  int in_ECX;
  int iVar4;
  FCameraSceneNode local_308 [500];
  float local_114;
  FCanvasUtil local_104 [28];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined1 *local_5c;
  void *local_58;
  undefined1 *puStack_54;
  int local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_54 = &LAB_1081f776;
  local_58 = ExceptionList;
  local_5c = &stack0xfffffcec;
  local_50 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_58;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_44);
  iVar4 = *(int *)(in_ECX + 0x38);
  if (iVar4 == 0) {
    iVar4 = **(int **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x34) + 0x38);
  }
  piVar2 = *(int **)(iVar4 + 0x3c);
  local_10 = piVar2[0x6f];
  local_c = piVar2[0x70];
  local_8 = piVar2[0x71];
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_10);
  local_1c = piVar2[0x72];
  local_18 = piVar2[0x73];
  local_14 = piVar2[0x74];
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(*piVar2 + 0x36c))(0,&local_10,&local_1c);
  FCameraSceneNode::FCameraSceneNode
            (local_308,iVar4,(FRenderTarget *)(iVar4 + 0xdc),0,local_10,local_c,local_8,local_1c,
             local_18,local_14,piVar2[0xf2]);
  local_50._0_1_ = 1;
  FCanvasUtil::FCanvasUtil
            (local_104,(FRenderTarget *)(iVar4 + 0xdc),*(FRenderInterface **)(iVar4 + 0x154));
  local_50._0_1_ = 2;
  pfVar3 = (float *)FSceneNode::Project((FSceneNode *)local_308,&local_38,local_44,local_40,local_3c
                                       );
  local_114 = *pfVar3;
  local_20 = pfVar3[1];
  local_28 = pfVar3[2];
  local_38 = local_e8 * local_114 + local_20 * local_d8 + local_28 * local_c8 + local_b8;
  local_34 = local_c4 * local_28 + local_d4 * local_20 + local_e4 * local_114 + local_b4;
  local_30 = local_28 * local_c0 + local_20 * local_d0 + local_e0 * local_114 + local_b0;
  *param_2 = local_38;
  param_2[1] = local_34;
  param_2[2] = local_30;
  local_50._0_1_ = 1;
  FCanvasUtil::~FCanvasUtil(local_104);
  local_50 = (uint)local_50._1_3_ << 8;
  FCameraSceneNode::~FCameraSceneNode(local_308);
  ExceptionList = local_58;
  return;
}


// ==== 105bb8f0 Catch@105bb8f0

void Catch_105bb8f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x28) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x28,&DAT_10914c48);
}


// ==== 105bb904 Catch@105bb904

void Catch_105bb904(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInteraction::execWorldToScreen");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bb9d0 FUN_105bb9d0

void FUN_105bb9d0(int param_1,float *param_2)

{
  byte bVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  float fStack_394;
  float fStack_390;
  FCameraSceneNode local_32c [500];
  float local_138;
  FCanvasUtil local_128 [92];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 *local_80;
  void *local_7c;
  undefined1 *puStack_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puStack_78 = &LAB_1081f7a6;
  local_7c = ExceptionList;
  local_80 = &stack0xfffffcc8;
  local_74 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_7c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  iVar3 = *(int *)(in_ECX + 0x38);
  if (iVar3 == 0) {
    iVar3 = **(int **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x34) + 0x38);
  }
  piVar2 = *(int **)(iVar3 + 0x3c);
  local_10 = (float)piVar2[0x6f];
  local_c = (float)piVar2[0x70];
  local_8 = (float)piVar2[0x71];
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  local_2c = piVar2[0x72];
  local_28 = piVar2[0x73];
  local_24 = piVar2[0x74];
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))();
  }
  (**(code **)(*piVar2 + 0x36c))();
  FCameraSceneNode::FCameraSceneNode(local_32c);
  local_74._0_1_ = 1;
  fStack_390 = 4.333441e-29;
  FCanvasUtil::FCanvasUtil
            (local_128,(FRenderTarget *)(iVar3 + 0xdc),*(FRenderInterface **)(iVar3 + 0x154));
  local_74._0_1_ = 2;
  local_138 = local_5c;
  fStack_394 = local_cc * local_5c + local_58 * local_bc + local_54 * local_ac + local_9c;
  fStack_390 = local_a8 * local_54 + local_c8 * local_5c + local_b8 * local_58 + local_98;
  local_68 = local_54 * local_a4 + local_58 * local_b4 + local_c4 * local_5c + local_94;
  local_20 = (undefined1 *)&fStack_394;
  local_70 = fStack_394;
  local_6c = fStack_390;
  local_50 = fStack_394;
  local_4c = fStack_390;
  local_48 = local_68;
  FSceneNode::Deproject((FSceneNode *)local_32c,&local_1c);
  local_38 = local_1c - local_10;
  local_3c = local_18 - local_c;
  local_30 = local_14 - local_8;
  local_34 = local_3c;
  local_20 = (undefined1 *)local_30;
  local_1c = local_38;
  local_18 = local_3c;
  local_14 = local_30;
  FVector::SafeNormal((FVector *)&local_1c);
  *param_2 = local_1c;
  param_2[1] = local_18;
  param_2[2] = local_14;
  local_74._0_1_ = 1;
  FCanvasUtil::~FCanvasUtil(local_128);
  local_74 = (uint)local_74._1_3_ << 8;
  FCameraSceneNode::~FCameraSceneNode(local_32c);
  ExceptionList = local_7c;
  return;
}


// ==== 105bbc86 Catch@105bbc86

void Catch_105bbc86(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x30) = *(undefined4 *)(unaff_EBP + 0x10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x30,&DAT_10914c48);
}


// ==== 105bbc9a Catch@105bbc9a

void Catch_105bbc9a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInteraction::execWorldToScreen");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bbd70 FUN_105bbd70

void FUN_105bbd70(void)

{
  return;
}


// ==== 105bbdb0 Catch@105bbdb0

void Catch_105bbdb0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105bbdc4 Catch@105bbdc4

void Catch_105bbdc4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UninteractionMaster::DisplayCopyright");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bbe00 FUN_105bbe00

undefined4 FUN_105bbe00(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x34);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x105bbe1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)**(undefined4 **)(**(int **)(iVar1 + 0x38) + 0x38))();
    return uVar2;
  }
  return 0;
}


// ==== 105bbe30 FUN_105bbe30

void FUN_105bbe30(int param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  FString local_18 [4];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081f7d9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = *(int *)(in_ECX + 0x34);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x3c) != 0)) {
    FStringNoInit::operator=
              ((FStringNoInit *)(**(int **)(iVar2 + 0x38) + 0x134),(FString *)&stack0xffffffe0);
    *(undefined4 *)(**(int **)(*(int *)(in_ECX + 0x34) + 0x38) + 0x130) = 0;
    *(undefined4 *)(**(int **)(*(int *)(in_ECX + 0x34) + 0x38) + 0x140) = 0;
  }
  pvStack_c = (void *)0xffffffff;
  FString::~FString((FString *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 105bbf50 FUN_105bbf50

undefined4 FUN_105bbf50(undefined1 param_1)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined1 uStack00000007;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined1 auStack_54 [4];
  undefined4 uStack_50;
  FString local_34 [16];
  undefined1 *local_24;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081f812;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  uStack00000007 = param_1;
  uStack_50 = 0x105bbf94;
  ExceptionList = &local_10;
  FString::Printf((ushort *)local_34);
  local_8._0_1_ = 1;
  local_24 = auStack_54;
  thunk_FUN_1032c030();
  local_8._0_1_ = 1;
  uVar3 = UInteractionMaster::eventProcess_KeyType();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  if (uVar3 == 0) {
    for (iVar5 = 0; local_18 = iVar5, iVar5 < *(int *)(in_ECX + 0x44); iVar5 = iVar5 + 1) {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x40) + iVar5 * 4);
      uVar2 = piVar1[0xd];
      if ((((uVar2 & 8) != 0) && ((uVar2 & 1) != 0)) &&
         (iVar4 = (**(code **)(*piVar1 + 0x6c))(), iVar4 != 0)) {
        ExceptionList = local_10;
        return 1;
      }
    }
    iVar5 = 0;
    while( true ) {
      if (*(int *)(*(int *)(in_ECX + 0x34) + 0x3c) <= iVar5) {
        ExceptionList = local_10;
        return 0;
      }
      uStack_64 = 0x105bc03e;
      local_1c = iVar5;
      FString::Printf((ushort *)local_34);
      local_8._0_1_ = 3;
      local_24 = auStack_68;
      thunk_FUN_1032c030(*(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x38) + iVar5 * 4) + 100);
      local_8._0_1_ = 3;
      uVar3 = UInteractionMaster::eventProcess_KeyType();
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_34);
      if (uVar3 != 0) break;
      iVar5 = iVar5 + 1;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105bc0a6 Catch@105bc0a6

void Catch_105bc0a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105bc0ba Catch@105bc0ba

void Catch_105bc0ba(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInteractionMaster::MasterProcessKeyType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bc140 FUN_105bc140

undefined4 FUN_105bc140(undefined1 param_1,undefined1 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined1 uStack00000007;
  undefined1 auStack_64 [8];
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  int *piStack_50;
  undefined1 auStack_4c [12];
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_38;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081f840;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar5 = 0;
  local_8 = 0;
  local_15 = param_1;
  uStack00000007 = param_2;
  local_38 = param_3;
  puStack_3c = &stack0x00000007;
  puStack_40 = &local_15;
  _param_2 = auStack_4c;
  puStack_54 = (undefined1 *)0x105bc195;
  ExceptionList = &local_10;
  piStack_50 = (int *)(in_ECX + 0x40);
  thunk_FUN_1032c030();
  local_8 = local_8 & 0xffffff00;
  piStack_50 = (int *)0x105bc1a4;
  uVar3 = UInteractionMaster::eventProcess_KeyEvent();
  if (uVar3 == 0) {
    for (; iVar5 < *(int *)(in_ECX + 0x44); iVar5 = iVar5 + 1) {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x40) + iVar5 * 4);
      uVar2 = piVar1[0xd];
      if (((uVar2 & 8) != 0) && ((uVar2 & 1) != 0)) {
        piStack_50 = (int *)param_3;
        puStack_54 = &stack0x00000007;
        puStack_58 = &local_15;
        uStack_5c = 0x105bc1ef;
        iVar4 = (**(code **)(*piVar1 + 0x70))();
        if (iVar4 != 0) {
          ExceptionList = local_10;
          return 1;
        }
      }
    }
    iVar5 = 0;
    while( true ) {
      if (*(int *)(*(int *)(in_ECX + 0x34) + 0x3c) <= iVar5) {
        ExceptionList = local_10;
        return 0;
      }
      piStack_50 = (int *)param_3;
      puStack_54 = &stack0x00000007;
      puStack_58 = &local_15;
      _param_2 = auStack_64;
      thunk_FUN_1032c030(*(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x38) + iVar5 * 4) + 100);
      local_8 = local_8 & 0xffffff00;
      uVar3 = UInteractionMaster::eventProcess_KeyEvent();
      if (uVar3 != 0) break;
      iVar5 = iVar5 + 1;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105bc260 Catch@105bc260

void Catch_105bc260(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105bc274 Catch@105bc274

void Catch_105bc274(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInteractionMaster::MasterProcessKeyEvent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bc2f0 FUN_105bc2f0

void FUN_105bc2f0(void)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081f860;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1032c030();
  local_8 = local_8 & 0xffffff00;
  UInteractionMaster::eventProcess_Tick();
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x44); iVar3 = iVar3 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x40) + iVar3 * 4);
    uVar2 = piVar1[0xd];
    if (((uVar2 & 8) != 0) && ((uVar2 & 4) != 0)) {
      (**(code **)(*piVar1 + 0x74))();
    }
  }
  iVar3 = 0;
  while( true ) {
    if (*(int *)(*(int *)(in_ECX + 0x34) + 0x3c) <= iVar3) break;
    thunk_FUN_1032c030(*(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x38) + iVar3 * 4) + 100);
    local_8 = local_8 & 0xffffff00;
    UInteractionMaster::eventProcess_Tick();
    iVar3 = iVar3 + 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105bc3c8 Catch@105bc3c8

void Catch_105bc3c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105bc3dc Catch@105bc3dc

void Catch_105bc3dc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInteractionMaster::MasterProcessTick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bc440 FUN_105bc440

void FUN_105bc440(void)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081f880;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar3 = 0; iVar3 < *(int *)(*(int *)(in_ECX + 0x34) + 0x3c); iVar3 = iVar3 + 1) {
    thunk_FUN_1032c030(*(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x38) + iVar3 * 4) + 100);
    local_8 = local_8 & 0xffffff00;
    UInteractionMaster::eventProcess_PreRender();
  }
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x44); iVar3 = iVar3 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x40) + iVar3 * 4);
    uVar2 = piVar1[0xd];
    if (((uVar2 & 8) != 0) && ((uVar2 & 2) != 0)) {
      (**(code **)(*piVar1 + 0x78))();
    }
  }
  thunk_FUN_1032c030(in_ECX + 0x40);
  local_8 = local_8 & 0xffffff00;
  UInteractionMaster::eventProcess_PreRender();
  ExceptionList = local_10;
  return;
}


// ==== 105bc50c Catch@105bc50c

void Catch_105bc50c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105bc520 Catch@105bc520

void Catch_105bc520(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInteractionMaster::MasterProcessPreRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bc580 FUN_105bc580

void FUN_105bc580(void)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081f8a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar3 = 0; iVar3 < *(int *)(*(int *)(in_ECX + 0x34) + 0x3c); iVar3 = iVar3 + 1) {
    thunk_FUN_1032c030(*(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x38) + iVar3 * 4) + 100);
    local_8 = local_8 & 0xffffff00;
    UInteractionMaster::eventProcess_PostRender();
  }
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x44); iVar3 = iVar3 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x40) + iVar3 * 4);
    uVar2 = piVar1[0xd];
    if (((uVar2 & 8) != 0) && ((uVar2 & 2) != 0)) {
      (**(code **)(*piVar1 + 0x7c))();
    }
  }
  thunk_FUN_1032c030(in_ECX + 0x40);
  local_8 = local_8 & 0xffffff00;
  UInteractionMaster::eventProcess_PostRender();
  ExceptionList = local_10;
  return;
}


// ==== 105bc64c Catch@105bc64c

void Catch_105bc64c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105bc660 Catch@105bc660

void Catch_105bc660(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInteractionMaster::MasterProcessPostRender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bc6c0 FUN_105bc6c0

void FUN_105bc6c0(FString *param_1,undefined4 param_2)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int aiStack_58 [3];
  undefined4 uStack_4c;
  FString *pFStack_48;
  int local_44;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081f8c9;
  local_10 = ExceptionList;
  iVar2 = 0;
  local_8 = 0;
  local_44 = in_ECX + 0x40;
  pFStack_48 = (FString *)0x105bc6fa;
  ExceptionList = &local_10;
  thunk_FUN_1032c030();
  local_44 = param_2;
  pFStack_48 = param_1;
  local_8 = local_8 & 0xffffff00;
  uStack_4c = 0x105bc714;
  UInteractionMaster::eventProcess_Message();
  while( true ) {
    if (*(int *)(*(int *)(in_ECX + 0x34) + 0x3c) <= iVar2) break;
    aiStack_58[0] = *(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x38) + iVar2 * 4) + 100;
    thunk_FUN_1032c030();
    aiStack_58[0] = param_2;
    local_8 = local_8 & 0xffffff00;
    UInteractionMaster::eventProcess_Message();
    iVar2 = iVar2 + 1;
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x44); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x40) + iVar2 * 4);
    if ((*(byte *)(piVar1 + 0xd) & 8) != 0) {
      uStack_4c = param_2;
      FString::FString((FString *)aiStack_58,param_1);
      local_8 = local_8 & 0xffffff00;
      (**(code **)(*piVar1 + 0x68))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105bc7b6 Catch@105bc7b6

void Catch_105bc7b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105bc7ca Catch@105bc7ca

void Catch_105bc7ca(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UInteractionMaster::MasterProcessMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bc830 FUN_105bc830

undefined4 FUN_105bc830(ushort param_1)

{
  if ((((param_1 < 0x61) || (0x7a < param_1)) && ((param_1 < 0x41 || (0x5a < param_1)))) &&
     (9 < (ushort)(param_1 - 0x30))) {
    return 0;
  }
  return 1;
}


// ==== 105bc870 FUN_105bc870

void FUN_105bc870(int param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f8e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(int *)GIsEditor_exref == 0) && (ExceptionList = &local_10, param_1 == 0)) {
    ExceptionList = &local_10;
    (**(code **)(*in_ECX + 0x98))();
  }
  if (in_ECX[0x4a] != 0) {
    if (param_1 == 0) {
      iVar3 = 0;
      for (iVar2 = in_ECX[0x49]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1a8)) {
        iVar3 = iVar3 + 1;
      }
      if (iVar3 < 0x80) {
        ExceptionList = local_10;
        return;
      }
    }
    if (*(int *)GIsEditor_exref == 0) {
      local_8 = 3;
      while (in_ECX[0x4a] != 0) {
        if ((*(byte *)(in_ECX[0x4a] + 0x34) & 1) == 0) {
          appFailAssert("FirstDeletedObject->bDeleteMe",".\\UnLevAct.cpp",0x32c);
        }
        piVar1 = (int *)in_ECX[0x4a];
        in_ECX[0x4a] = piVar1[0x19];
        if ((*(byte *)(piVar1 + 0xd) & 1) == 0) {
          appFailAssert("LevelObjectToKill->bDeleteMe",".\\UnLevAct.cpp",0x32f);
        }
        (**(code **)(*piVar1 + 0xc))(1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105bc980 Catch@105bc980

void Catch_105bc980(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105bc994 Catch@105bc994

void Catch_105bc994(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FinishDestroyedLevelObjects");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bc9b0 Catch@105bc9b0

void Catch_105bc9b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105bc9c4 Catch@105bc9c4

void Catch_105bc9c4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CheckDeleted");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bc9cb Catch@105bc9cb

void Catch_105bc9cb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105bc9dc Catch@105bc9dc

void Catch_105bc9dc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::CleanupDestroyedLevelObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bca40 FUN_105bca40

undefined4
FUN_105bca40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 *puVar1;
  int *in_ECX;
  int iVar2;
  FMemMark local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f8f0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  FMemMark::FMemMark(local_28,(FMemStack *)GMem_exref);
  puVar1 = (undefined4 *)
           (**(code **)(*in_ECX + 0xf0))
                     (GMem_exref,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,1,1
                      ,1);
  if (puVar1 == (undefined4 *)0x0) {
    FMemMark::Pop(local_28);
    ExceptionList = local_10;
    return 0;
  }
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  FMemMark::Pop(local_28);
  ExceptionList = local_10;
  return 1;
}


// ==== 105bcb14 Catch@105bcb14

void Catch_105bcb14(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105bcb28 Catch@105bcb28

void Catch_105bcb28(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::EncroachingWorldGeometry");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bcb90 FUN_105bcb90

void FUN_105bcb90(void)

{
  return;
}


// ==== 105bcbd0 Catch@105bcbd0

void Catch_105bcbd0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105bcbe4 Catch@105bcbe4

void Catch_105bcbe4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AVolume::SetVolumes");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bcc20 FUN_105bcc20

void FUN_105bcc20(void)

{
  return;
}


// ==== 105bcc60 Catch@105bcc60

void Catch_105bcc60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105bcc74 Catch@105bcc74

void Catch_105bcc74(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALevelInfo::SetVolumes");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bccb0 FUN_105bccb0

void FUN_105bccb0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081f929;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105bcd20 FUN_105bcd20

void FUN_105bcd20(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081f949;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105bcde0 FUN_105bcde0

int FUN_105bcde0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x1c);
  return *(int *)param_2 + iVar1 * 0x1c;
}


// ==== 105bce70 FUN_105bce70

int FUN_105bce70(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  FRotator local_38 [12];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f960;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar2 = *in_ECX;
  uStack_54 = 0x105bceb7;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FRotator::FRotator(local_38,0,0,0);
  uStack_54 = 0;
  uStack_58 = 0;
  local_64 = *puVar1;
  local_60 = puVar1[1];
  local_5c = puVar1[2];
  local_70 = local_2c;
  local_6c = local_28;
  local_68 = local_24;
  local_1c = (undefined1 *)&uStack_74;
  uStack_74 = local_24;
  FName::FName((FName *)&uStack_74,0);
  iVar2 = (**(code **)(iVar2 + 0xc0))(&ABrush::PrivateStaticClass);
  if (iVar2 == 0) {
    appFailAssert("Result",".\\UnLevAct.cpp",0xf2);
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 105bcf3b Catch@105bcf3b

void Catch_105bcf3b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105bcf4f Catch@105bcf4f

void Catch_105bcf4f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::SpawnBrush");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bcfb0 FUN_105bcfb0

void FUN_105bcfb0(AActor *param_1)

{
  AActor *in_ECX;
  
  if (*(int *)GIsL2NetLogin_exref == 0) {
    AActor::eventBump(in_ECX,param_1);
    return;
  }
  return;
}


// ==== 105bcfd0 FUN_105bcfd0

void FUN_105bcfd0(AActor *param_1)

{
  ulong uVar1;
  AActor *in_ECX;
  
  if ((*(int *)GIsL2NetLogin_exref == 0) &&
     ((*(AController **)(in_ECX + 0x14d8) == (AController *)0x0 ||
      (uVar1 = AController::eventNotifyBump(*(AController **)(in_ECX + 0x14d8),param_1), uVar1 == 0)
      ))) {
    AActor::eventBump(in_ECX,param_1);
  }
  return;
}


// ==== 105bd010 FUN_105bd010

undefined4
FUN_105bd010(undefined4 *param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined8 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  FMemMark local_44 [12];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f970;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_8 = 0;
  ExceptionList = &local_10;
  FMemMark::FMemMark(local_44,(FMemStack *)GMem_exref);
  local_18 = (undefined4 *)
             (**(code **)(*in_ECX + 0xf0))
                       (GMem_exref,param_2,param_3,param_4,param_5,(undefined4)param_6,param_6._4_4_
                        ,param_7,param_8,param_9,0,0);
  if (local_18 == (undefined4 *)0x0) {
    FMemMark::Pop(local_44);
    ExceptionList = local_10;
    return 1;
  }
  puVar2 = local_18;
  puVar3 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (puVar2 = (undefined4 *)*local_18; local_18 = puVar2, puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    local_2c = (float)puVar2[2] - param_2;
    local_28 = (float)puVar2[3] - param_3;
    local_24 = (float)puVar2[4] - param_4;
    local_38 = (float)param_1[2] - param_2;
    local_34 = (float)param_1[3] - param_3;
    local_30 = (float)param_1[4] - param_4;
    fVar5 = FVector::SizeSquared((FVector *)&local_2c);
    fVar6 = FVector::SizeSquared((FVector *)&local_38);
    if (fVar5 < fVar6) {
      puVar3 = puVar2;
      puVar4 = param_1;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  FMemMark::Pop(local_44);
  ExceptionList = local_10;
  return 0;
}


// ==== 105bd19f Catch@105bd19f

void Catch_105bd19f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105bd1b3 Catch@105bd1b3

void Catch_105bd1b3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::SinglePointCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bd240 FUN_105bd240

void FUN_105bd240(int param_1,int param_2)

{
  AActor *in_ECX;
  AZoneInfo *local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f980;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  if (((byte)in_ECX[100] & 0x80) == 0) {
    ExceptionList = &local_10;
    if (param_2 != 0) {
      local_28 = *(AZoneInfo **)(in_ECX + 0xe0);
      local_20 = local_20 & 0xffffff00;
      ExceptionList = &local_10;
      *(AZoneInfo **)(in_ECX + 0xec) = local_28;
      *(undefined4 *)(in_ECX + 0xf0) = 0xffffffff;
      *(uint *)(in_ECX + 0xf4) = local_20;
    }
    UModel::PointRegion(*(UModel **)(*(int *)(in_ECX + 0xe4) + 0xc0),&local_28,
                        *(undefined4 *)(in_ECX + 0xe0),*(undefined4 *)(in_ECX + 0x1bc),
                        *(undefined4 *)(in_ECX + 0x1c0),*(undefined4 *)(in_ECX + 0x1c4));
    if (local_28 == *(AZoneInfo **)(in_ECX + 0xec)) {
      *(AZoneInfo **)(in_ECX + 0xec) = local_28;
      *(undefined4 *)(in_ECX + 0xf0) = local_24;
      *(uint *)(in_ECX + 0xf4) = local_20;
    }
    else {
      if (param_1 == 0) {
        AZoneInfo::eventActorLeaving(*(AZoneInfo **)(in_ECX + 0xec),in_ECX);
        AActor::eventZoneChange(in_ECX,local_28);
      }
      *(AZoneInfo **)(in_ECX + 0xec) = local_28;
      *(undefined4 *)(in_ECX + 0xf0) = local_24;
      *(uint *)(in_ECX + 0xf4) = local_20;
      if (param_1 == 0) {
        AZoneInfo::eventActorEntered(*(AZoneInfo **)(in_ECX + 0xec),in_ECX);
      }
    }
    *(AActor **)(in_ECX + 0x1b8) = in_ECX;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105bd364 Catch@105bd364

void Catch_105bd364(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105bd378 Catch@105bd378

void Catch_105bd378(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APhysicsVolume::SetZone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bd3f0 FUN_105bd3f0

void FUN_105bd3f0(int param_1)

{
  void **ppvVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_f4 [48];
  undefined4 local_c4;
  undefined4 local_b8;
  undefined1 local_ac [8];
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_88;
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_c;
  float local_8;
  
  puStack_74 = &LAB_1081f990;
  local_78 = ExceptionList;
  local_7c = &stack0xffffff00;
  local_70 = 0;
  if ((param_1 != 0) && (*(int *)GL2UseHitWateEffect_exref != 0)) {
    ppvVar1 = &local_78;
    if (param_1 != *(int *)(in_ECX + 0x15dc)) {
      if ((*(byte *)(param_1 + 0x4c0) & 1) == 0) {
        return;
      }
      ExceptionList = &local_78;
      *(undefined4 *)(in_ECX + 0x17a4) = 0;
      ppvVar1 = ExceptionList;
    }
    ExceptionList = ppvVar1;
    if (((*(byte *)(param_1 + 0x4c0) & 1) != 0) &&
       (thunk_FUN_104419f0(0x3f800000,0), *(int *)(param_1 + 0x278) != 0)) {
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_b8 = 0;
      local_60 = *(float *)(in_ECX + 0x1bc) + 0.0;
      local_5c = *(float *)(in_ECX + 0x1c0) + 0.0;
      local_58 = *(float *)(in_ECX + 0x1c4) + *(float *)(in_ECX + 0x2f4) + 20.0;
      local_c4 = 0;
      local_54 = *(float *)(in_ECX + 0x1bc) - 0.0;
      local_50 = *(float *)(in_ECX + 0x1c0) - 0.0;
      local_4c = *(float *)(in_ECX + 0x1c4) - *(float *)(in_ECX + 0x2f4);
      local_c = local_54;
      local_8 = local_50;
      (**(code **)(**(int **)(param_1 + 0x278) + 0x6c))
                (local_ac,param_1,local_54,local_50,local_4c,local_60,local_5c,local_58,0,0,0,0,0);
      if (local_88 == 0.0) {
        *(uint *)(in_ECX + 0x77c) = *(uint *)(in_ECX + 0x77c) & 0xfffffffd;
      }
      else {
        *(uint *)(in_ECX + 0x77c) = *(uint *)(in_ECX + 0x77c) | 2;
        if (local_9c - *(float *)(in_ECX + 0x1c4) < *(float *)(in_ECX + 0x2f4) * 0.85) {
          thunk_FUN_104419f0(0x3f800000,0);
          *(undefined4 *)(in_ECX + 0x1798) = local_a4;
          *(undefined4 *)(in_ECX + 0x179c) = local_a0;
          *(float *)(in_ECX + 0x17a0) = local_9c;
          local_24 = 0;
          local_20 = 0;
          local_1c = 0;
          iVar2 = (**(code **)(**(int **)(param_1 + 0x278) + 0x68))
                            (local_f4,param_1,local_a4,local_a0,local_9c,0,0,0,0);
          if (iVar2 != 0) {
            ExceptionList = local_78;
            return;
          }
        }
      }
      *(undefined4 *)(in_ECX + 0x1798) = 0;
      *(undefined4 *)(in_ECX + 0x179c) = 0;
      *(undefined4 *)(in_ECX + 0x17a0) = 0;
    }
  }
  ExceptionList = local_78;
  return;
}


// ==== 105bd69d Catch@105bd69d

void Catch_105bd69d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_10914c48);
}


// ==== 105bd6b1 Catch@105bd6b1

void Catch_105bd6b1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::UpdateWaterHitEffect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bd790 FUN_105bd790

void FUN_105bd790(void)

{
  int in_ECX;
  undefined4 local_20;
  
  if ((*(byte *)(in_ECX + 100) & 0x80) == 0) {
    local_20 = local_20 & 0xffffff00;
    *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(in_ECX + 0xe0);
    *(undefined4 *)(in_ECX + 0xf0) = 0xffffffff;
    *(uint *)(in_ECX + 0xf4) = local_20;
  }
  return;
}


// ==== 105bd7f9 Catch@105bd7f9

void Catch_105bd7f9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105bd80d Catch@105bd80d

void Catch_105bd80d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALevelInfo::SetZone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bd850 FUN_105bd850

void FUN_105bd850(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f9b0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar2 = 0;
  ExceptionList = &local_10;
LAB_105bd87c:
  do {
    if (in_ECX[0x49] <= iVar2) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = *(int *)(in_ECX[0x48] + 4 + iVar2 * 8);
    if (iVar1 == 1) {
      (**(code **)(*in_ECX + 0xb4))(0);
    }
    else if (iVar1 == 2) {
      (**(code **)(*in_ECX + 0xb8))(0);
      iVar2 = iVar2 + 1;
      goto LAB_105bd87c;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


// ==== 105bd8d9 Catch@105bd8d9

void Catch_105bd8d9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105bd8ed Catch@105bd8ed

void Catch_105bd8ed(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::PostBeginPlay");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bd940 FUN_105bd940

void FUN_105bd940(void)

{
  int in_ECX;
  
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  return;
}


// ==== 105bd990 FUN_105bd990

void FUN_105bd990(void)

{
  int in_ECX;
  
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  return;
}


// ==== 105bda80 FUN_105bda80

UObject * FUN_105bda80(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ACamera::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105bdab0 FUN_105bdab0

UObject * FUN_105bdab0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UPlayerInput::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105bdae0 FUN_105bdae0

UObject * FUN_105bdae0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&AVolume::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105bdb10 FUN_105bdb10

UObject * FUN_105bdb10(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&APhysicsVolume::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105bdb40 FUN_105bdb40

UObject * FUN_105bdb40(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&AMusicVolume::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105bdb70 FUN_105bdb70

UObject * FUN_105bdb70(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&AAirVolume::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105bdba0 FUN_105bdba0

UObject * FUN_105bdba0(UObject *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,ULevelObject *param_6)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  ALevelInfo *pAVar4;
  UObject *in_ECX;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this;
  FOutputDevice *extraout_ECX_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f9c0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == (UObject *)0x0) {
    if (*(int *)GLog_exref != 0) {
      ExceptionList = &local_10;
      FOutputDevice::Logf2((FOutputDevice *)in_ECX,*(EName *)GLog_exref,(ushort *)0x2ff);
    }
  }
  else {
    if (((byte)param_1[0x4a4] & 1) == 0) {
      ExceptionList = &local_10;
      iVar1 = UStruct::IsChildOf((UStruct *)param_1,(UStruct *)&ULevelObject::PrivateStaticClass);
      if (iVar1 != 0) {
        if ((param_6 == (ULevelObject *)0x0) &&
           (param_6 = UClass::GetDefaultLevelObject((UClass *)param_1),
           param_6 == (ULevelObject *)0x0)) {
          appFailAssert("Template!=NULL",".\\UnLevAct.cpp",0x34);
        }
        iVar2 = thunk_FUN_10373650(1);
        iVar1 = *(int *)(in_ECX + 0x48);
        uVar7 = 0;
        uVar6 = *(undefined4 *)GError_exref;
        uVar5 = 0;
        pUVar3 = UObject::GetOuter(in_ECX);
        pUVar3 = UObject::StaticConstructObject(param_1,pUVar3,param_2,uVar5,param_6,uVar6,uVar7);
        *(UObject **)(iVar1 + iVar2 * 4) = pUVar3;
        UObject::SetFlags(pUVar3,1);
        pAVar4 = ULevel::GetLevelInfo((ULevel *)in_ECX);
        local_20 = local_20 & 0xffffff00;
        *(ALevelInfo **)(pUVar3 + 0x50) = pAVar4;
        *(undefined4 *)(pUVar3 + 0x54) = 0xffffffff;
        *(uint *)(pUVar3 + 0x58) = local_20;
        *(UObject **)(pUVar3 + 0x60) = in_ECX;
        *(undefined4 *)(pUVar3 + 0x3c) = param_3;
        *(undefined4 *)(pUVar3 + 0x40) = param_4;
        *(undefined4 *)(pUVar3 + 0x44) = param_5;
        ExceptionList = local_10;
        return pUVar3;
      }
      if (*(int *)GLog_exref == 0) {
        ExceptionList = local_10;
        return (UObject *)0x0;
      }
      UObject::GetName(param_1);
      this = extraout_ECX_00;
    }
    else {
      if (*(int *)GLog_exref == 0) {
        return (UObject *)0x0;
      }
      ExceptionList = &local_10;
      UObject::GetName(param_1);
      this = extraout_ECX;
    }
    FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x2ff);
  }
  ExceptionList = local_10;
  return (UObject *)0x0;
}


// ==== 105bdd26 Catch@105bdd26

void Catch_105bdd26(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105bdd3a Catch@105bdd3a

void Catch_105bdd3a(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::SpawnLevelObject");
  puVar1 = UObject::GetName(*(UObject **)(unaff_EBP + 8));
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bdde0 FUN_105bdde0

UObject * FUN_105bdde0(UObject *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                      AActor *param_9,int param_10,int param_11,AActor *param_12,undefined4 param_13
                      )

{
  UObject UVar1;
  int iVar2;
  AActor *pAVar3;
  ALevelInfo *pAVar4;
  undefined4 *puVar5;
  UObject *pUVar6;
  undefined4 *puVar7;
  int iVar8;
  ULevel *in_ECX;
  undefined4 uVar9;
  undefined4 uVar10;
  ALevelInfo **ppAVar11;
  undefined4 uVar12;
  ALevelInfo *local_2c [2];
  uint local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f9d0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = FVector::operator==((FVector *)&param_3,(FVector *)&param_3);
  if (iVar2 == 0) {
    appFailAssert("Location == Location",".\\UnLevAct.cpp",0x5c);
  }
  if (param_1 == (UObject *)0x0) {
    if (*(int *)GLog_exref == 0) {
      ExceptionList = local_10;
      return (UObject *)0x0;
    }
    FOutputDevice::Logf2
              (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2ff);
    ExceptionList = local_10;
    return (UObject *)0x0;
  }
  if (((byte)param_1[0x4a4] & 1) == 0) {
    iVar2 = UStruct::IsChildOf((UStruct *)param_1,(UStruct *)&AActor::PrivateStaticClass);
    if (iVar2 != 0) {
      if (*(int *)GIsEditor_exref == 0) {
        pAVar3 = UClass::GetDefaultActor((UClass *)param_1);
        if ((((byte)pAVar3[100] & 0x10) != 0) ||
           (pAVar3 = UClass::GetDefaultActor((UClass *)param_1), ((byte)pAVar3[100] & 0x40) != 0)) {
          if (*(int *)GLog_exref == 0) {
            ExceptionList = local_10;
            return (UObject *)0x0;
          }
          UObject::GetName(param_1);
          FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x2ff);
          ExceptionList = local_10;
          return (UObject *)0x0;
        }
        if ((*(int *)GIsEditor_exref == 0) &&
           (pAVar3 = UClass::GetDefaultActor((UClass *)param_1),
           (*(uint *)(pAVar3 + 100) & 0x1000) != 0)) {
          pAVar4 = ULevel::GetLevelInfo(in_ECX);
          if (pAVar4[0x558] == (ALevelInfo)0x0) {
            ExceptionList = local_10;
            return (UObject *)0x0;
          }
          pAVar4 = ULevel::GetLevelInfo(in_ECX);
          if (((byte)pAVar4[0x55c] & 1) != 0) {
            ExceptionList = local_10;
            return (UObject *)0x0;
          }
          pAVar4 = ULevel::GetLevelInfo(in_ECX);
          if (pAVar4[0x5d4] == (ALevelInfo)0x1) {
            ExceptionList = local_10;
            return (UObject *)0x0;
          }
        }
      }
      pAVar3 = param_9;
      if ((param_9 == (AActor *)0x0) &&
         (pAVar3 = UClass::GetDefaultActor((UClass *)param_1), param_9 = pAVar3,
         pAVar3 == (AActor *)0x0)) {
        appFailAssert("Template!=NULL",".\\UnLevAct.cpp",0x80);
      }
      if (((((byte)pAVar3[0x2f8] & 2) != 0) ||
          (((*(uint *)(pAVar3 + 0x2e4) & 0x200) != 0 &&
           (pAVar4 = ULevel::GetLevelInfo(in_ECX), pAVar4[0x5d4] != (ALevelInfo)0x3)))) &&
         (param_10 == 0)) {
        ppAVar11 = local_2c;
        puVar5 = (undefined4 *)AActor::GetCylinderExtent(pAVar3);
        iVar2 = (**(code **)(*(int *)in_ECX + 0xd0))(*puVar5,puVar5[1],puVar5[2],&param_3,ppAVar11);
        if (iVar2 == 0) {
          ExceptionList = local_10;
          return (UObject *)0x0;
        }
      }
      local_18 = thunk_FUN_103735f0(1);
      iVar8 = *(int *)(in_ECX + 0x38);
      iVar2 = local_18 * 4;
      uVar12 = 0;
      uVar10 = *(undefined4 *)GError_exref;
      uVar9 = 0;
      pAVar3 = param_9;
      pUVar6 = UObject::GetOuter((UObject *)in_ECX);
      pUVar6 = UObject::StaticConstructObject(param_1,pUVar6,param_2,uVar9,pAVar3,uVar10,uVar12);
      *(UObject **)(iVar8 + iVar2) = pUVar6;
      UObject::SetFlags(pUVar6,1);
      puVar5 = &param_9;
      puVar7 = (undefined4 *)UObject::GetFName(param_1);
      *(undefined4 *)(pUVar6 + 0x10c) = *puVar7;
      local_2c[0] = ULevel::GetLevelInfo(in_ECX);
      local_24 = local_24 & 0xffffff00;
      *(ALevelInfo **)(pUVar6 + 0xec) = local_2c[0];
      *(undefined4 *)(pUVar6 + 0xf0) = 0xffffffff;
      *(uint *)(pUVar6 + 0xf4) = local_24;
      pAVar4 = ULevel::GetLevelInfo(in_ECX);
      *(ALevelInfo **)(pUVar6 + 0xe0) = pAVar4;
      *(uint *)(pUVar6 + 100) =
           *(uint *)(pUVar6 + 100) ^
           ((uint)(*(int *)(in_ECX + 0x134) == 0) << 8 ^ *(uint *)(pUVar6 + 100)) & 0x100;
      *(ULevel **)(pUVar6 + 0xe4) = in_ECX;
      if (pUVar6[0xc2] != (UObject)0x4) {
        appFailAssert("Actor->Role==ROLE_Authority",".\\UnLevAct.cpp",0x95);
      }
      iVar2 = param_11;
      if (param_11 != 0) {
        UVar1 = pUVar6[0xc2];
        pUVar6[0xc2] = pUVar6[0xc1];
        pUVar6[0xc1] = UVar1;
      }
      if (*(int *)(pUVar6 + 0x278) != 0) {
        *(undefined4 *)(pUVar6 + 0x278) = 0;
      }
      *(undefined4 *)(pUVar6 + 0x1bc) = param_3;
      *(undefined4 *)(pUVar6 + 0x1c0) = param_4;
      *(undefined4 *)(pUVar6 + 0x1c4) = param_5;
      *(undefined4 *)(pUVar6 + 0x1c8) = param_6;
      *(undefined4 *)(pUVar6 + 0x1cc) = param_7;
      *(undefined4 *)(pUVar6 + 0x1d0) = param_8;
      if ((((byte)pUVar6[0x2f8] & 1) != 0) && (*(int **)(in_ECX + 0x120) != (int *)0x0)) {
        (**(code **)(**(int **)(in_ECX + 0x120) + 8))(pUVar6,puVar5);
      }
      pAVar4 = ULevel::GetLevelInfo(in_ECX);
      *(undefined4 *)(pUVar6 + 0x1b8) = *(undefined4 *)(pAVar4 + 0x1b8);
      AActor::SetOwner((AActor *)pUVar6,param_12);
      *(undefined4 *)(pUVar6 + 0xd4) = param_13;
      (**(code **)(*(int *)pUVar6 + 0x3c))();
      (**(code **)(*(int *)pUVar6 + 0x9c))();
      AActor::eventPreBeginPlay((AActor *)pUVar6);
      if (((byte)pUVar6[100] & 0x80) != 0) {
        ExceptionList = local_10;
        return (UObject *)0x0;
      }
      AActor::eventBeginPlay((AActor *)pUVar6);
      if (((byte)pUVar6[100] & 0x80) != 0) {
        ExceptionList = local_10;
        return (UObject *)0x0;
      }
      (**(code **)(*(int *)pUVar6 + 0x1bc))(local_18 == 0,1);
      AActor::ClearRenderData((AActor *)pUVar6);
      if (param_10 == 0) {
        if ((((byte)pUVar6[0x2f8] & 1) != 0) && (*(int **)(in_ECX + 0x120) != (int *)0x0)) {
          (**(code **)(**(int **)(in_ECX + 0x120) + 0xc))(pUVar6);
        }
        iVar8 = (**(code **)(*(int *)in_ECX + 0xd8))
                          (pUVar6,*(undefined4 *)(pUVar6 + 0x1bc),*(undefined4 *)(pUVar6 + 0x1c0),
                           *(undefined4 *)(pUVar6 + 0x1c4),*(undefined4 *)(pUVar6 + 0x1c8),
                           *(undefined4 *)(pUVar6 + 0x1cc),*(undefined4 *)(pUVar6 + 0x1d0),1);
        if (iVar8 != 0) {
          (**(code **)(*(int *)in_ECX + 0xac))(pUVar6,0);
          ExceptionList = local_10;
          return (UObject *)0x0;
        }
        if ((((byte)pUVar6[0x2f8] & 1) != 0) && (*(int **)(in_ECX + 0x120) != (int *)0x0)) {
          (**(code **)(**(int **)(in_ECX + 0x120) + 8))(pUVar6);
        }
      }
      AActor::eventPostBeginPlay((AActor *)pUVar6);
      if (((byte)pUVar6[100] & 0x80) != 0) {
        ExceptionList = local_10;
        return (UObject *)0x0;
      }
      (**(code **)(*(int *)pUVar6 + 0x1c4))();
      AActor::eventSetInitialState((AActor *)pUVar6);
      if ((((*(int *)GIsEditor_exref == 0) && (*(int *)(pUVar6 + 0x40) == 0)) &&
          (((byte)pUVar6[0x2f8] & 2) != 0)) &&
         (((*(uint *)(pUVar6 + 0x2e4) & 0x2000) != 0 &&
          ((pUVar6[0x34] == (UObject)0x0 || (pUVar6[0x34] == (UObject)0x5)))))) {
        AActor::FindBase((AActor *)pUVar6);
      }
      if (*(int *)(in_ECX + 0x130) != 0) {
        puVar5 = (undefined4 *)thunk_FUN_10522300(8,&GEngineMem,1,8);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          uVar10 = *(undefined4 *)(in_ECX + 300);
          *puVar5 = pUVar6;
          puVar5[1] = uVar10;
        }
        *(undefined4 **)(in_ECX + 300) = puVar5;
      }
      if (iVar2 == 0) {
        AActor::eventPostNetBeginPlay((AActor *)pUVar6);
      }
      ExceptionList = local_10;
      return pUVar6;
    }
    if (*(int *)GLog_exref == 0) {
      ExceptionList = local_10;
      return (UObject *)0x0;
    }
    UObject::GetName(param_1);
  }
  else {
    if (*(int *)GLog_exref == 0) {
      ExceptionList = local_10;
      return (UObject *)0x0;
    }
    UObject::GetName(param_1);
  }
  FOutputDevice::Logf2
            (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2ff);
  ExceptionList = local_10;
  return (UObject *)0x0;
}


// ==== 105be346 Catch@105be346

void Catch_105be346(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105be35a Catch@105be35a

void Catch_105be35a(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::SpawnActor");
  puVar1 = UObject::GetName(*(UObject **)(unaff_EBP + 8));
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105be500 FUN_105be500

void FUN_105be500(UObject *param_1)

{
  int iVar1;
  ALevelInfo *pAVar2;
  ULevel *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f9e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("ThisActor",".\\UnLevAct.cpp",0xfe);
  }
  iVar1 = UObject::IsValid(param_1);
  if (iVar1 == 0) {
    appFailAssert("ThisActor->IsValid()",".\\UnLevAct.cpp",0xff);
  }
  if (((*(uint *)(param_1 + 0x368) & 0x8000) == 0) || (((byte)param_1[0x2f8] & 4) == 0)) {
    iVar1 = UObject::IsA(param_1,&ANavigationPoint::PrivateStaticClass);
    if (iVar1 == 0) {
      iVar1 = UObject::IsA(param_1,&APickup::PrivateStaticClass);
      if (iVar1 == 0) goto LAB_105be5b3;
    }
  }
  pAVar2 = ULevel::GetLevelInfo(in_ECX);
  *(uint *)(pAVar2 + 0x55c) = *(uint *)(pAVar2 + 0x55c) & 0xfffffff7;
LAB_105be5b3:
  (**(code **)(*(int *)in_ECX + 0xac))(param_1,0);
  ExceptionList = local_10;
  return;
}


// ==== 105be5d5 Catch@105be5d5

void Catch_105be5d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105be5e9 Catch@105be5e9

void Catch_105be5e9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::EditorDestroyActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105be650 FUN_105be650

undefined4 FUN_105be650(UObject *param_1)

{
  int iVar1;
  ULevel *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081f9f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("ThisObject",".\\UnLevAct.cpp",0x11c);
  }
  iVar1 = UObject::IsValid(param_1);
  if (iVar1 == 0) {
    appFailAssert("ThisObject->IsValid()",".\\UnLevAct.cpp",0x11d);
  }
  if ((*(int *)GIsEditor_exref != 0) || (((byte)param_1[0x34] & 1) == 0)) {
    iVar1 = ULevel::GetLevelObjectIndex(in_ECX,(ULevelObject *)param_1);
    thunk_FUN_105bd990(iVar1);
    (**(code **)(*(int *)param_1 + 0x20))();
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x80;
    if (((byte)param_1[0x34] & 1) == 0) {
      if (*(UObject **)(*(int *)(in_ECX + 0x48) + iVar1 * 4) != param_1) {
        appFailAssert("LevelObjects(iLevelObject)==ThisObject",".\\UnLevAct.cpp",0x12e);
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x48) + iVar1 * 4) = 0;
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1;
      if (*(int *)(*(int *)(in_ECX + 0x74) + 0x58) != 0) {
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x74) + 0x58) + 0xf8))(param_1);
      }
      UObject::ConditionalDestroy(param_1);
      if (*(int *)GIsEditor_exref == 0) {
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(in_ECX + 0x128);
        *(UObject **)(in_ECX + 0x128) = param_1;
      }
      else {
        (**(code **)(*(int *)in_ECX + 0xb4))(1);
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105be791 Catch@105be791

void Catch_105be791(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105be7a5 Catch@105be7a5

void Catch_105be7a5(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::DestroyLevelObject");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105be840 FUN_105be840

undefined4 FUN_105be840(UObject *param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  UObject *this;
  int iVar3;
  FStateFrame *pFVar4;
  int iVar5;
  ULevel *in_ECX;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = param_1;
  puStack_c = &LAB_1081fa00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("ThisActor",".\\UnLevAct.cpp",0x14f);
  }
  iVar3 = UObject::IsValid(this);
  if (iVar3 == 0) {
    appFailAssert("ThisActor->IsValid()",".\\UnLevAct.cpp",0x150);
  }
  if (*(int *)GIsEditor_exref == 0) {
    if ((*(uint *)(this + 100) & 0x50) != 0) {
      ExceptionList = local_10;
      return 0;
    }
    if ((char)*(uint *)(this + 100) < '\0') {
      ExceptionList = local_10;
      return 1;
    }
    if (((this[0xc2] != (UObject)0x4) && (param_2 == 0)) && ((*(uint *)(this + 0x74) & 0x200) == 0))
    {
      ExceptionList = local_10;
      return 0;
    }
    iVar3 = (**(code **)(*(int *)this + 0x2ec))();
    if (((iVar3 != 0) && (iVar3 = thunk_FUN_103285e0(this), iVar3 != 0)) &&
       ((iVar3 = thunk_FUN_1032aaf0(*(undefined4 *)(iVar3 + 0x560)), iVar3 != 0 &&
        ((*(int *)(iVar3 + 0xeac) != 0 && (*(int *)(iVar3 + 0x78) != 1)))))) {
      (**(code **)(**(int **)(iVar3 + 0xeac) + 0x70))();
      ExceptionList = local_10;
      return 0;
    }
  }
  if (*(int *)(this + 0x2c8) != 0) {
    (**(code **)(*(int *)in_ECX + 0xac))(*(undefined4 *)(this + 0x2c8),0);
    *(undefined4 *)(this + 0x2c8) = 0;
  }
  iVar3 = ULevel::GetActorIndex(in_ECX,(AActor *)this);
  thunk_FUN_105bd940(iVar3);
  (**(code **)(*(int *)this + 0x20))();
  *(uint *)(this + 0x2e4) = *(uint *)(this + 0x2e4) | 0x4000;
  pFVar4 = UObject::GetStateFrame(this);
  if (((pFVar4 == (FStateFrame *)0x0) ||
      (pFVar4 = UObject::GetStateFrame(this), *(int *)(pFVar4 + 0x1c) == 0)) ||
     (UObject::eventEndState(this), ((byte)this[100] & 0x80) == 0)) {
    AActor::eventDestroyed((AActor *)this);
    (**(code **)(*(int *)this + 0x15c))();
    if ((*(int *)(this + 0x40) == 0) ||
       ((**(code **)(*(int *)this + 0x16c))(0,0,0,0x3f800000,1), ((byte)this[100] & 0x80) == 0)) {
      iVar6 = *(int *)(this + 500);
      if (0 < iVar6) {
        while (iVar6 = iVar6 + -1, -1 < iVar6) {
          piVar1 = (int *)(*(int *)(this + 0x1f0) + iVar6 * 4);
          if (*piVar1 != 0) {
            (**(code **)(*(int *)*piVar1 + 0x16c))(0,0,0,0x3f800000,1);
          }
        }
      }
      if (((byte)this[100] & 0x80) == 0) {
        local_8._0_1_ = 1;
        param_2 = 0;
        piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddaf0 * 4);
        uVar2 = rdtsc();
        *piVar1 = *piVar1 - (int)uVar2;
        for (iVar6 = 0; iVar6 < *(int *)(this + 0x160); iVar6 = iVar6 + 1) {
          piVar1 = (int *)(*(int *)(this + 0x15c) + iVar6 * 4);
          if ((*piVar1 != 0) && (iVar5 = thunk_FUN_1052eab0(&param_1,&param_2), iVar5 != 0)) {
            AActor::EndTouch((AActor *)this,(AActor *)*piVar1,1);
            iVar6 = iVar6 + -1;
            if (((byte)this[100] & 0x80) != 0) {
              piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddaf0 * 4);
              uVar2 = rdtsc();
              *piVar1 = *piVar1 + (int)uVar2 + -0xc;
              ExceptionList = local_10;
              return 1;
            }
          }
        }
        local_8 = CONCAT31(local_8._1_3_,2);
        iVar6 = *(int *)(this + 0x154);
        while (iVar6 = iVar6 + -1, -1 < iVar6) {
          piVar1 = (int *)(*(int *)(this + 0x150) + iVar6 * 4);
          if (*piVar1 != 0) {
            AActor::SetOwner((AActor *)*piVar1,(AActor *)0x0);
          }
        }
        for (iVar6 = 0; iVar6 < *(int *)(this + 0x154); iVar6 = iVar6 + 1) {
        }
        FArray::Empty((FArray *)(this + 0x150),4,0);
        piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddaf0 * 4);
        uVar2 = rdtsc();
        *piVar1 = *piVar1 + (int)uVar2 + -0xc;
        local_8 = 0;
        if (*(int *)(this + 0x3c) != 0) {
          AActor::eventLostChild(*(AActor **)(this + 0x3c),(AActor *)this);
          (**(code **)(**(int **)(this + 0x3c) + 0xbc))(this);
          if (((byte)this[100] & 0x80) != 0) {
            ExceptionList = local_10;
            return 1;
          }
        }
        if (*(int **)(in_ECX + 0x70) != (int *)0x0) {
          (**(code **)(**(int **)(in_ECX + 0x70) + 0x88))(this);
        }
        piVar1 = *(int **)(in_ECX + 0xbc);
        if ((piVar1 != (int *)0x0) && (piVar1[0x11] == 0)) {
          (**(code **)(*piVar1 + 0x88))(this);
        }
        if ((*(int **)(in_ECX + 0x120) != (int *)0x0) && (((byte)this[0x2f8] & 1) != 0)) {
          (**(code **)(**(int **)(in_ECX + 0x120) + 0xc))(this);
        }
        AActor::ClearRenderData((AActor *)this);
        if (*(UObject **)(*(int *)(in_ECX + 0x38) + iVar3 * 4) != this) {
          appFailAssert("Actors(iActor)==ThisActor",".\\UnLevAct.cpp",0x205);
        }
        *(undefined4 *)(*(int *)(in_ECX + 0x38) + iVar3 * 4) = 0;
        *(uint *)(this + 100) = *(uint *)(this + 100) | 0x80;
        if (*(int *)(*(int *)(in_ECX + 0x74) + 0x58) != 0) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x74) + 0x58) + 0xfc))(this);
        }
        UObject::ConditionalDestroy(this);
        if (*(int *)GIsEditor_exref == 0) {
          *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(in_ECX + 0x124);
          *(UObject **)(in_ECX + 0x124) = this;
        }
        else {
          (**(code **)(*(int *)in_ECX + 0xb4))(1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105bec91 Catch@105bec91

void Catch_105bec91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 105beca5 Catch@105beca5

void Catch_105beca5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CleanupStandardRefs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105becc1 Catch@105becc1

void Catch_105becc1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 105becd5 Catch@105becd5

void Catch_105becd5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CleanupStandardRefs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105becdc Catch@105becdc

void Catch_105becdc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 105beced Catch@105beced

void Catch_105beced(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::DestroyActor");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bee50 FUN_105bee50

void FUN_105bee50(int param_1)

{
  UObject *pUVar1;
  int *piVar2;
  int *piVar3;
  UClass *pUVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fa10;
  local_10 = ExceptionList;
  iVar6 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0xb8))(param_1);
  if ((*(int *)GIsEditor_exref == 0) && (param_1 == 0)) {
    (**(code **)(*in_ECX + 0x94))();
  }
  if (in_ECX[0x49] != 0) {
    if (param_1 == 0) {
      iVar5 = 0;
      for (iVar7 = in_ECX[0x49]; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x1a8)) {
        iVar5 = iVar5 + 1;
      }
      if (iVar5 < 0x80) {
        ExceptionList = local_10;
        return;
      }
    }
    local_8 = 3;
    for (; iVar6 < in_ECX[0xf]; iVar6 = iVar6 + 1) {
      pUVar1 = *(UObject **)(in_ECX[0xe] + iVar6 * 4);
      if (pUVar1 != (UObject *)0x0) {
        pUVar4 = UObject::GetClass(pUVar1);
        (**(code **)(*(int *)pUVar4 + 0x8c))(pUVar1);
      }
    }
    for (local_18 = 0; local_18 < in_ECX[0x46d]; local_18 = local_18 + 1) {
      iVar6 = *(int *)(in_ECX[0x46c] + local_18 * 4);
      for (iVar7 = 0; iVar7 < *(int *)(iVar6 + 0x3c); iVar7 = iVar7 + 1) {
        pUVar1 = *(UObject **)(*(int *)(iVar6 + 0x38) + iVar7 * 4);
        if (pUVar1 != (UObject *)0x0) {
          pUVar4 = UObject::GetClass(pUVar1);
          (**(code **)(*(int *)pUVar4 + 0x8c))(pUVar1);
        }
      }
    }
    if (*(int *)GIsEditor_exref == 0) {
      local_8 = 5;
      while (in_ECX[0x49] != 0) {
        if ((*(byte *)(in_ECX[0x49] + 100) & 0x80) == 0) {
          appFailAssert("FirstDeleted->bDeleteMe",".\\UnLevAct.cpp",0x2c0);
        }
        piVar2 = (int *)in_ECX[0x49];
        in_ECX[0x49] = piVar2[0x6a];
        if ((*(byte *)(piVar2 + 0x19) & 0x80) == 0) {
          appFailAssert("ActorToKill->bDeleteMe",".\\UnLevAct.cpp",0x2c3);
        }
        local_8 = CONCAT31(local_8._1_3_,6);
        if (piVar2[0x4d] != 0) {
          if ((int *)piVar2[0x4d] != (int *)0x0) {
            (**(code **)(*(int *)piVar2[0x4d] + 0xc))(1);
          }
          piVar2[0x4d] = 0;
        }
        iVar6 = (**(code **)(*piVar2 + 0x74))();
        if (iVar6 != 0) {
          iVar6 = (**(code **)(*piVar2 + 0x74))();
          for (iVar7 = 0; iVar7 < 9; iVar7 = iVar7 + 1) {
            if (*(int *)(iVar6 + 0x3f8 + iVar7 * 4) != 0) {
              piVar3 = *(int **)(iVar6 + 0x3f8 + iVar7 * 4);
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar3 + 0xc))(1);
              }
              *(undefined4 *)(iVar6 + 0x3f8 + iVar7 * 4) = 0;
            }
          }
          if (*(int *)(iVar6 + 0x41c) != 0) {
            if (*(int **)(iVar6 + 0x41c) != (int *)0x0) {
              (**(code **)(**(int **)(iVar6 + 0x41c) + 0xc))(1);
            }
            *(undefined4 *)(iVar6 + 0x41c) = 0;
          }
          if (*(int *)(iVar6 + 0x420) != 0) {
            if (*(int **)(iVar6 + 0x420) != (int *)0x0) {
              (**(code **)(**(int **)(iVar6 + 0x420) + 0xc))(1);
            }
            *(undefined4 *)(iVar6 + 0x420) = 0;
          }
          if (*(int *)(iVar6 + 0x424) != 0) {
            if (*(int **)(iVar6 + 0x424) != (int *)0x0) {
              (**(code **)(**(int **)(iVar6 + 0x424) + 0xc))(1);
            }
            *(undefined4 *)(iVar6 + 0x424) = 0;
          }
          if (*(int *)(iVar6 + 0x428) != 0) {
            if (*(int **)(iVar6 + 0x428) != (int *)0x0) {
              (**(code **)(**(int **)(iVar6 + 0x428) + 0xc))(1);
            }
            *(undefined4 *)(iVar6 + 0x428) = 0;
          }
          if (*(int *)(iVar6 + 0x42c) != 0) {
            if (*(int **)(iVar6 + 0x42c) != (int *)0x0) {
              (**(code **)(**(int **)(iVar6 + 0x42c) + 0xc))(1);
            }
            *(undefined4 *)(iVar6 + 0x42c) = 0;
          }
          if (*(int *)(iVar6 + 0x430) != 0) {
            if (*(int **)(iVar6 + 0x430) != (int *)0x0) {
              (**(code **)(**(int **)(iVar6 + 0x430) + 0xc))(1);
            }
            *(undefined4 *)(iVar6 + 0x430) = 0;
          }
          iVar7 = *(int *)(iVar6 + 0x670);
          while (iVar7 = iVar7 + -1, -1 < iVar7) {
            piVar3 = *(int **)(*(int *)(iVar6 + 0x66c) + iVar7 * 4);
            if ((piVar3[0xf] != 0) && ((int *)piVar3[0xf] != (int *)0x0)) {
              (**(code **)(*(int *)piVar3[0xf] + 0xc))(1);
            }
            (**(code **)(*piVar3 + 0xc))(1);
            thunk_FUN_10384e80(iVar7,1);
          }
        }
        local_8 = 5;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))(1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105bf19b Catch@105bf19b

void Catch_105bf19b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 105bf1af Catch@105bf1af

void Catch_105bf1af(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ClearMeshInstance");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bf1ec Catch@105bf1ec

void Catch_105bf1ec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 105bf200 Catch@105bf200

void Catch_105bf200(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FinishDestroyedActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bf207 Catch@105bf207

void Catch_105bf207(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 105bf218 Catch@105bf218

void Catch_105bf218(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CleanupRefs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bf21f Catch@105bf21f

void Catch_105bf21f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 105bf230 Catch@105bf230

void Catch_105bf230(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CheckDeleted");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bf23a Catch@105bf23a

void Catch_105bf23a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_10914c48);
}


// ==== 105bf24e Catch@105bf24e

void Catch_105bf24e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::CleanupDestroyed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bf360 FUN_105bf360

void FUN_105bf360(UObject *param_1)

{
  UObject *this;
  undefined1 *puVar1;
  int iVar2;
  FName *this_00;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  UObject *local_7c;
  UClass *local_78;
  code *pcStack_70;
  undefined4 uStack_6c;
  FName *pFVar5;
  FRotator local_50 [12];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fa20;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffa4;
  if (*(int *)(in_ECX[0x1d] + 0x54) == 0) {
    uStack_6c = 0x105bf3a9;
    ExceptionList = &local_10;
    appFailAssert("Engine->Client",".\\UnLevAct.cpp",0x345);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  this = param_1;
  if (*(int *)(param_1 + 0x3c) != 0) {
    uStack_6c = 0x105bf3ca;
    appFailAssert("Viewport->Actor==NULL",".\\UnLevAct.cpp",0x346);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  local_18 = 0;
  do {
    if (in_ECX[0xf] <= local_18) {
code_r0x105bf42d:
      local_8 = 3;
      if (*(int *)(this + 0x3c) == 0) {
        local_44 = 0xc3fa0000;
        local_40 = 0xc3960000;
        local_3c = 0x43960000;
        iVar2 = *in_ECX;
        uStack_6c = 0x105bf475;
        puVar4 = (undefined4 *)FRotator::FRotator(local_50,0,0,0);
        uStack_6c = 1;
        pcStack_70 = (code *)0x0;
        local_7c = (UObject *)*puVar4;
        local_78 = (UClass *)puVar4[1];
        local_88 = local_44;
        local_84 = local_40;
        local_80 = local_3c;
        param_1 = (UObject *)&local_8c;
        local_8c = local_3c;
        FName::FName((FName *)&local_8c,0);
        iVar2 = (**(code **)(iVar2 + 0xc0))(&ACamera::PrivateStaticClass);
        *(int *)(this + 0x3c) = iVar2;
        if (iVar2 == 0) {
          appFailAssert("Viewport->Actor",".\\UnLevAct.cpp",0x35b);
        }
        *(int *)(*(int *)(this + 0x3c) + 0x5c0) = iVar2;
        puVar4 = (undefined4 *)UObject::GetFName(this);
        *(undefined4 *)(iVar2 + 0x10c) = *puVar4;
      }
      local_8 = 5;
      iVar2 = (**(code **)(**(int **)(this + 0x3c) + 0x378))();
      if (iVar2 == 0) {
        iVar2 = **(int **)(this + 0x3c);
        uStack_6c = 0;
        param_1 = (UObject *)&pcStack_70;
        pcStack_70 = GError_exref;
        local_78 = (UClass *)0x105bf54b;
        FName::FName((FName *)&pcStack_70,0);
        local_78 = &UPlayerInput::PrivateStaticClass;
        local_7c = (UObject *)0x105bf55a;
        local_7c = UObject::StaticConstructObject();
        local_80 = 0x105bf560;
        thunk_FUN_105bdab0();
        (**(code **)(iVar2 + 0x37c))();
      }
      UObject::SetFlags(*(UObject **)(this + 0x3c),0x300000);
      UObject::ClearFlags(*(UObject **)(this + 0x3c),1);
      *(UObject **)(*(int *)(this + 0x3c) + 0x560) = this;
      *(undefined4 *)(*(int *)(this + 0x3c) + 0x5ac) = 0x33c6844d;
      *(undefined4 *)(*(int *)(this + 0x3c) + 0x5b8) = 5;
      local_8 = 0;
      (**(code **)(**(int **)(this + 0x3c) + 0x1bc))();
      ExceptionList = local_10;
      return;
    }
    iVar2 = thunk_FUN_105bda80();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x560) == 0)) {
      pFVar5 = (FName *)&param_1;
      this_00 = (FName *)UObject::GetFName(this);
      iVar3 = FName::operator==(this_00,pFVar5);
      if (iVar3 != 0) {
        *(int *)(this + 0x3c) = iVar2;
        goto code_r0x105bf42d;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}


// ==== 105bf5e3 Catch@105bf5e3

void Catch_105bf5e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105bf5f7 Catch@105bf5f7

void Catch_105bf5f7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SetProperties");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bf613 Catch@105bf613

void Catch_105bf613(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105bf627 Catch@105bf627

void Catch_105bf627(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SpawnNew");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bf62e Catch@105bf62e

void Catch_105bf62e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105bf63f Catch@105bf63f

void Catch_105bf63f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FindExisting");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bf646 Catch@105bf646

void Catch_105bf646(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105bf657 Catch@105bf657

void Catch_105bf657(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::SpawnViewActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105bf720 FUN_105bf720

bool FUN_105bf720(float *param_1,float param_2,float param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  ALevelInfo *pAVar2;
  ULevel *in_ECX;
  float unaff_EBX;
  float unaff_ESI;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_a4;
  undefined1 *puStack_a0;
  float *pfStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float *pfStack_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  int iStack_54;
  float fStack_50;
  float local_34;
  float local_30 [8];
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30[2] = 0.0;
  local_30[3] = 0.0;
  local_30[4] = 0.0;
  local_30[5] = 0.0;
  local_30[6] = 0.0;
  local_30[7] = 0.0;
  local_c = 0x3f800000;
  local_34 = 1.0;
  *param_5 = 0;
  local_30[0] = 0.0;
  local_30[1] = 0.0;
  local_10 = (undefined4 *)0x0;
  local_8 = 0xffffffff;
  local_4 = 0;
  if (**(int **)(in_ECX + 0x38) == 0) {
    local_74 = 4.3380883e-29;
    appFailAssert("Actors(0)","d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnLevel.h"
                  ,0x203);
  }
  local_78 = param_2;
  local_74 = param_3;
  local_84 = *param_1;
  local_80 = param_1[1];
  local_7c = param_1[2];
  pfStack_88 = local_30;
  fStack_8c = 4.3381103e-29;
  iVar1 = (**(code **)(*(int *)in_ECX + 0xe0))();
  if (iVar1 != 0) {
    *local_10 = 1;
    return false;
  }
  fStack_94 = param_2;
  local_10 = (undefined4 *)0x0;
  fStack_90 = param_3;
  local_78 = 0.0;
  local_74 = 0.0;
  uStack_98 = 0x86;
  fVar3 = local_30[7] * 2.0;
  pfStack_9c = param_1;
  puStack_a0 = &stack0xffffff94;
  fStack_a4 = 0.0;
  fStack_8c = unaff_EBX;
  (**(code **)(*(int *)in_ECX + 0xe4))();
  if (fVar3 == 0.0) {
    local_80 = *param_1 - 0.0;
    local_7c = param_1[1] - 0.0;
    local_78 = param_1[2] - local_34;
  }
  else {
    if (fStack_50 <= 0.5) {
      fVar3 = (0.5 - fStack_50) + (0.5 - fStack_50);
      local_7c = fVar3 * 0.0;
      local_80 = *param_1 + local_7c;
      local_7c = local_7c + param_1[1];
      local_78 = local_34 * fVar3 + param_1[2];
      fStack_8c = local_80 + 0.0;
      *param_1 = fStack_8c;
      pfStack_88 = (float *)(local_7c + 0.0);
      param_1[1] = (float)pfStack_88;
      local_84 = local_78 + 1.0;
      param_1[2] = local_84;
      local_30[0] = *(float *)in_ECX;
      pAVar2 = ULevel::GetLevelInfo(in_ECX);
      fVar3 = param_2;
      fVar4 = param_3;
      iVar1 = (**(code **)((int)local_30[0] + 0xe0))
                        (&local_74,*param_1,param_1[1],param_1[2],param_2,param_3,local_34,0,pAVar2)
      ;
      if (iVar1 == 0) {
        return true;
      }
      fStack_a4 = unaff_ESI * fVar3;
      puStack_a0 = (undefined1 *)(fVar4 * unaff_ESI);
      pfStack_9c = (float *)(unaff_ESI * 0.0);
      *param_1 = *param_1 + fStack_a4;
      param_1[1] = (float)puStack_a0 + param_1[1];
      param_1[2] = (float)pfStack_9c + param_1[2];
      iStack_54 = *(int *)in_ECX;
      pAVar2 = ULevel::GetLevelInfo(in_ECX);
      iVar1 = (**(code **)(iStack_54 + 0xe0))
                        (&uStack_98,*param_1,param_1[1],param_1[2],param_2,param_3,unaff_EBX,0,
                         pAVar2);
      return iVar1 == 0;
    }
    fVar3 = (fStack_50 + fStack_50) - 1.0;
    local_30[0] = fVar3 * 0.0;
    fStack_8c = *param_1 - local_30[0];
    pfStack_88 = (float *)(param_1[1] - local_30[0]);
    local_84 = param_1[2] - local_34 * fVar3;
    local_80 = fStack_8c + 0.0;
    local_7c = (float)pfStack_88 + 0.0;
    local_78 = local_84 + 1.0;
  }
  *param_1 = local_80;
  param_1[1] = local_7c;
  param_1[2] = local_78;
  if (**(int **)(in_ECX + 0x38) == 0) {
    appFailAssert("Actors(0)","d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnLevel.h"
                  ,0x203);
  }
  fVar3 = **(float **)(in_ECX + 0x38);
  fVar7 = 0.0;
  fVar4 = param_2;
  fVar5 = param_3;
  fVar6 = local_34;
  iVar1 = (**(code **)(*(int *)in_ECX + 0xe0))(&local_74,*param_1,param_1[1],param_1[2]);
  if (iVar1 == 0) {
    fStack_a4 = *param_1 + 0.0;
    puStack_a0 = (undefined1 *)(param_1[1] + 0.0);
    pfStack_9c = (float *)(unaff_EBX + param_1[2]);
    (**(code **)(*(int *)in_ECX + 0xe4))
              (&uStack_98,0,&fStack_a4,param_1,0x86,param_2,param_3,unaff_EBX);
    if (fVar6 != 0.0) {
      *param_1 = fVar7;
      param_1[1] = fVar3;
      param_1[2] = (float)&iStack_54;
      return true;
    }
    *param_1 = *param_1 + 0.0;
    param_1[1] = param_1[1] + 0.0;
    param_1[2] = local_78 + param_1[2];
    return true;
  }
  fStack_a4 = unaff_ESI * fVar4;
  puStack_a0 = (undefined1 *)(fVar5 * unaff_ESI);
  pfStack_9c = (float *)(unaff_ESI * 0.0);
  *param_1 = *param_1 + fStack_a4;
  param_1[1] = (float)puStack_a0 + param_1[1];
  param_1[2] = (float)pfStack_9c + param_1[2];
  if (**(int **)(in_ECX + 0x38) == 0) {
    appFailAssert("Actors(0)","d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnLevel.h"
                  ,0x203);
  }
  iVar1 = (**(code **)(*(int *)in_ECX + 0xe0))
                    (&uStack_98,*param_1,param_1[1],param_1[2],param_2,param_3,unaff_EBX,0,
                     **(undefined4 **)(in_ECX + 0x38));
  return iVar1 == 0;
}


// ==== 105bfe50 FUN_105bfe50

undefined4 FUN_105bfe50(float param_1,float param_2,undefined4 param_3,float *param_4)

{
  float *pfVar1;
  ALevelInfo *pAVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  ULevel *in_ECX;
  float local_c0 [3];
  undefined1 local_b4 [4];
  int local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 *local_74;
  void *local_70;
  undefined1 *puStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puStack_6c = &LAB_1081fa30;
  local_70 = ExceptionList;
  local_74 = &stack0xffffff10;
  local_68 = 0;
  ExceptionList = &local_70;
  thunk_FUN_104419f0(0x3f800000,0);
  iVar3 = *(int *)in_ECX;
  pAVar2 = ULevel::GetLevelInfo(in_ECX);
  pfVar1 = param_4;
  iVar3 = (**(code **)(iVar3 + 0xe0))
                    (local_b4,*param_4,param_4[1],param_4[2],param_1,param_2,param_3,0,pAVar2);
  if (iVar3 == 0) {
LAB_105c021f:
    uVar4 = 1;
  }
  else {
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    iVar3 = FVector::operator==((FVector *)&param_1,(FVector *)&local_64);
    if (iVar3 == 0) {
      local_24 = *pfVar1;
      local_20 = pfVar1[1];
      local_1c = pfVar1[2];
      local_2c = 1;
      iVar3 = (**(code **)(*(int *)in_ECX + 0xd4))(pfVar1,param_1,param_2,param_3,&local_2c);
      if (iVar3 != 0) goto LAB_105c021f;
      if (local_2c == 0) {
        ExceptionList = local_70;
        return 0;
      }
      param_4 = (float *)(param_1 * 0.5);
      local_44 = param_2 * 0.5;
      local_40 = 0x3f800000;
      iVar3 = 0;
      local_48 = (float)param_4;
      local_28 = iVar3;
      local_10 = local_44;
      for (local_14 = -1; local_14 < 2; local_14 = local_14 + 2) {
        for (local_18 = -1; local_18 < 2; local_18 = local_18 + 2) {
          if (iVar3 < 2) {
            param_4 = (float *)((float)local_14 * param_1 * 0.55);
            local_10 = param_2 * 0.55 * (float)local_18;
            local_58 = (float)param_4 + local_24;
            local_54 = local_20 + local_10;
            local_50 = local_1c + 0.0;
            iVar3 = *(int *)in_ECX;
            local_3c = local_58;
            local_c = local_54;
            local_8 = local_50;
            pAVar2 = ULevel::GetLevelInfo(in_ECX);
            iVar3 = (**(code **)(iVar3 + 0xe0))
                              (local_b4,local_58,local_54,local_50,local_48,local_44,local_40,0,
                               pAVar2);
            if (iVar3 == 0) {
              local_28 = local_28 + 1;
              param_4 = (float *)((float)param_4 * 1.1);
              local_8 = local_10 * 1.1;
              local_c = 0.0;
              *pfVar1 = (float)param_4 + *pfVar1;
              pfVar1[1] = pfVar1[1] + local_8;
              pfVar1[2] = pfVar1[2] + 0.0;
              local_c0[0] = (float)param_4;
            }
          }
          iVar3 = local_28;
        }
      }
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          pfVar5 = (float *)thunk_FUN_103301a0(local_c0,0x40000000,pfVar1);
          param_4 = (float *)(*pfVar5 - local_24);
          local_34 = pfVar5[1] - local_20;
          local_30 = pfVar5[2] - local_1c;
          *pfVar1 = (float)param_4;
          pfVar1[1] = local_34;
          pfVar1[2] = local_30;
          local_38 = (float)param_4;
          local_c = local_30;
          local_8 = local_34;
        }
        iVar3 = *(int *)in_ECX;
        pAVar2 = ULevel::GetLevelInfo(in_ECX);
        iVar3 = (**(code **)(iVar3 + 0xe0))
                          (local_b4,*pfVar1,pfVar1[1],pfVar1[2],param_1,param_2,param_3,0,pAVar2);
        if (iVar3 == 0) {
          param_4 = (float *)((local_24 - *pfVar1) * 0.2 + local_24);
          local_7c = local_20 + (local_20 - pfVar1[1]) * 0.2;
          local_78 = local_1c + (local_1c - pfVar1[2]) * 0.2;
          local_80 = (float)param_4;
          local_c = local_78;
          local_8 = local_7c;
          (**(code **)(*(int *)in_ECX + 0xe4))
                    (local_b4,0,&local_80,pfVar1,0x86,param_1,param_2,param_3);
          if (local_b0 != 0) {
            *pfVar1 = local_ac;
            pfVar1[1] = local_a8;
            pfVar1[2] = local_a4;
          }
          goto LAB_105c021f;
        }
      }
    }
    uVar4 = 0;
  }
  ExceptionList = local_70;
  return uVar4;
}


// ==== 105c0229 Catch@105c0229

void Catch_105c0229(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x18,&DAT_10914c48);
}


// ==== 105c023d Catch@105c023d

void Catch_105c023d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::FindSpot");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c0360 FUN_105c0360

uint FUN_105c0360(AActor *param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                 float param_7)

{
  undefined1 *puVar1;
  int iVar2;
  ALevelInfo *pAVar3;
  undefined4 *puVar4;
  int iVar5;
  ULevel *in_ECX;
  uint uVar6;
  float *pfVar7;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  int local_20;
  uint local_1c;
  ULevel *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fa40;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff80;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  puVar1 = &stack0xffffff80;
  if (param_1 == (AActor *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("Actor!=NULL",".\\UnLevAct.cpp",0x4ca);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if (((((byte)param_1[100] & 0x10) != 0) || ((*(uint *)(param_1 + 0x2e4) & 0x800) == 0)) &&
     (*(int *)GIsEditor_exref == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  iVar2 = FVector::operator==((FVector *)&param_2,(FVector *)&param_2);
  if (iVar2 == 0) {
    appFailAssert("DestLocation == DestLocation",".\\UnLevAct.cpp",0x4ce);
  }
  iVar2 = thunk_FUN_104b42a0(param_1);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x678) = *(uint *)(iVar2 + 0x678) & 0xfffffffe;
  }
  if ((((byte)param_1[0x2f8] & 1) != 0) && (*(int **)(in_ECX + 0x120) != (int *)0x0)) {
    (**(code **)(**(int **)(in_ECX + 0x120) + 0xc))(param_1);
  }
  local_5c = *(undefined4 *)(param_1 + 0x1bc);
  local_58 = *(undefined4 *)(param_1 + 0x1c0);
  local_54 = *(undefined4 *)(param_1 + 0x1c4);
  local_38 = param_2;
  local_34 = param_3;
  local_30 = param_4;
  uVar6 = 1;
  local_1c = 1;
  if (param_6 == 0) {
    if (((byte)param_1[0x2f8] & 2) == 0) {
      if ((*(uint *)(param_1 + 0x2e4) & 0x200) != 0) {
        pAVar3 = ULevel::GetLevelInfo(local_18);
        if (pAVar3[0x5d4] != (ALevelInfo)0x3) goto LAB_105c0491;
      }
    }
    else {
LAB_105c0491:
      pfVar7 = &local_50;
      puVar4 = (undefined4 *)AActor::GetCylinderExtent(param_1);
      uVar6 = (**(code **)(*(int *)local_18 + 0xd0))(*puVar4,puVar4[1],puVar4[2],&local_38,pfVar7);
      local_1c = uVar6;
      if (uVar6 == 0) goto LAB_105c052b;
    }
  }
  if ((param_5 == 0) && (param_6 == 0)) {
    iVar2 = (**(code **)(*(int *)local_18 + 0xd8))
                      (param_1,local_38,local_34,local_30,*(undefined4 *)(param_1 + 0x1c8),
                       *(undefined4 *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x1d0),1);
    uVar6 = (uint)(iVar2 == 0);
    local_1c = uVar6;
  }
LAB_105c052b:
  iVar2 = FVector::operator!=((FVector *)&local_5c,(FVector *)(param_1 + 0x1bc));
  if ((iVar2 == 0) || (param_5 != 0)) {
    if (uVar6 != 0) {
      if (param_5 == 0) {
        *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) | 0x10000;
        if (param_7 == 0.0) {
          local_44 = 0;
          local_40 = 0;
          local_3c = 0x3f800000;
          (**(code **)(*(int *)param_1 + 0x16c))(0,0,0,0x3f800000,1);
        }
        for (local_20 = 0; local_20 < *(int *)(param_1 + 500); local_20 = local_20 + 1) {
          iVar2 = local_20 * 4;
          if (*(int *)(iVar2 + *(int *)(param_1 + 0x1f0)) != 0) {
            FName::FName((FName *)&param_6,0);
            iVar5 = FName::operator==((FName *)(*(int *)(*(int *)(param_1 + 0x1f0) + iVar2) + 0xd8),
                                      (FName *)&param_6);
            if (iVar5 != 0) {
              if (*(int *)(iVar2 + *(int *)(param_1 + 0x1f0)) != 0) {
                iVar5 = thunk_FUN_104b42a0(*(int *)(iVar2 + *(int *)(param_1 + 0x1f0)));
                if ((iVar5 != 0) && (*(int *)(iVar5 + 0x14d8) != 0)) {
                  iVar5 = thunk_FUN_1040b460(*(undefined4 *)(iVar5 + 0x14d8));
                  if (iVar5 != 0) {
                    *(uint *)(iVar5 + 0x834) = *(uint *)(iVar5 + 0x834) | 1;
                  }
                }
              }
              iVar5 = *(int *)(*(int *)(param_1 + 0x1f0) + iVar2);
              local_50 = (*(float *)(iVar5 + 0x1bc) + local_38) - *(float *)(param_1 + 0x1bc);
              param_7 = (*(float *)(iVar5 + 0x1c0) + local_34) - *(float *)(param_1 + 0x1c0);
              local_48 = (*(float *)(iVar5 + 0x1c4) + local_30) - *(float *)(param_1 + 0x1c4);
              local_4c = param_7;
              local_24 = local_48;
              (**(code **)(*(int *)local_18 + 0xa8))
                        (*(int *)(*(int *)(param_1 + 0x1f0) + iVar2),local_50,param_7,local_48,0,1,1
                        );
            }
          }
        }
      }
      if (0 < *(int *)(param_1 + 0x16c)) {
        (**(code **)(**(int **)(local_18 + 0x120) + 0xc))(param_1);
      }
      *(float *)(param_1 + 0x1bc) = local_38;
      *(float *)(param_1 + 0x1c0) = local_34;
      *(float *)(param_1 + 0x1c4) = local_30;
    }
    if ((((byte)param_1[0x2f8] & 1) != 0) && (*(int **)(local_18 + 0x120) != (int *)0x0)) {
      (**(code **)(**(int **)(local_18 + 0x120) + 8))(param_1);
    }
    if (uVar6 != 0) {
      (**(code **)(*(int *)param_1 + 0x1bc))(param_5,0);
    }
    if (param_5 == 0) {
      AActor::ClearRenderData(param_1);
    }
  }
  ExceptionList = local_10;
  return uVar6;
}


// ==== 105c0757 Catch@105c0757

void Catch_105c0757(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105c076b Catch@105c076b

void Catch_105c076b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::FarMoveActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c08a0 FUN_105c08a0

undefined4
FUN_105c08a0(AActor *param_1,AActor *param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,AActor *param_8,int param_9,AActor *param_10,
            AActor *param_11,AActor *param_12)

{
  FRotator *pFVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  ULevel *pUVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  float *pfVar12;
  FMatrix *pFVar13;
  FCoords *this;
  ulong uVar14;
  float fVar15;
  undefined4 *puVar16;
  FMatrix *pFVar17;
  AActor *pAVar18;
  ULevel *pUVar19;
  AActor **ppAVar20;
  AActor *pAStack_370;
  FMatrix *pFStack_36c;
  AActor *apAStack_368 [4];
  float local_358;
  AActor *local_354;
  AActor *local_350;
  AActor *local_34c;
  AActor *local_348;
  AActor *local_344;
  float local_340;
  FCoords local_30c [48];
  float local_2dc;
  float local_2d0;
  float local_2c4;
  float local_2b8;
  float local_2ac;
  FMatrix local_2a0 [64];
  FMatrix local_260 [48];
  float local_230;
  float local_22c;
  float local_228;
  AActor local_210 [48];
  FMatrix local_1e0 [16];
  AActor local_1d0 [48];
  FRotator local_1a0 [12];
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  FRotator local_16c [12];
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c [3];
  undefined4 *local_130;
  AActor *local_12c;
  float local_128;
  AActor *local_124;
  undefined4 *local_120;
  AActor *local_118;
  float local_114;
  AActor *local_110;
  int local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_f8;
  AActor *local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  AActor *local_e0;
  AActor *local_dc;
  float local_d8;
  AActor *local_d4;
  float local_d0;
  AActor *local_cc;
  AActor *local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  AActor *local_b4;
  int local_b0;
  undefined4 local_ac;
  AActor *local_a8;
  AActor *local_a4;
  float local_a0;
  int local_9c;
  AActor *local_98;
  AActor *local_94;
  AActor *local_90;
  AActor *local_8c;
  float local_88;
  float local_84;
  int local_80;
  undefined4 *local_7c;
  FMemMark local_78 [12];
  int local_6c;
  int local_68;
  int local_64;
  float local_60;
  undefined1 *local_5c;
  void *local_58;
  undefined1 *puStack_54;
  uint local_50;
  AActor *local_4c;
  AActor *local_48;
  float local_44;
  float local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  AActor *local_30;
  float local_2c;
  float local_28;
  AActor *local_24;
  float local_20;
  ULevel *local_1c;
  float local_18;
  float local_14;
  float local_10;
  AActor *local_c;
  byte local_5;
  
  puStack_54 = &LAB_1081fa8a;
  local_58 = ExceptionList;
  local_5c = &stack0xfffffcd8;
  local_50 = 0;
  ExceptionList = &local_58;
  puVar6 = &stack0xfffffcd8;
  if (param_1 == (AActor *)0x0) {
    ExceptionList = &local_58;
    appFailAssert("Actor!=NULL",".\\UnLevAct.cpp",0x554);
    puVar6 = local_5c;
  }
  local_5c = puVar6;
  if (((((((byte)param_1[100] & 0x10) == 0) && ((*(uint *)(param_1 + 0x2e4) & 0x800) != 0)) ||
       (*(int *)GIsEditor_exref != 0)) &&
      ((iVar7 = appIsNan((double)(float)param_2), iVar7 == 0 &&
       (iVar7 = appIsNan((double)param_3), iVar7 == 0)))) &&
     (iVar7 = appIsNan((double)param_4), iVar7 == 0)) {
    iVar7 = FVector::operator==((FVector *)&param_2,(FVector *)&param_2);
    if (iVar7 == 0) {
      appFailAssert("Delta == Delta",".\\UnLevAct.cpp",0x55a);
    }
    fVar15 = (float)0;
    if (*(int *)(param_1 + 500) != 0) {
      local_14 = 0.0;
      local_10c = 0;
      while (iVar7 = local_10c, fVar15 = local_14, local_10c < *(int *)(param_1 + 500)) {
        iVar8 = local_10c * 4;
        if (*(int *)(iVar8 + *(int *)(param_1 + 0x1f0)) != 0) {
          FName::FName((FName *)&local_10,0);
          iVar8 = FName::operator==((FName *)(*(int *)(*(int *)(param_1 + 0x1f0) + iVar8) + 0xd8),
                                    (FName *)&local_10);
          if (iVar8 != 0) {
            local_14 = 1.4013e-45;
            fVar15 = 1.4013e-45;
            break;
          }
        }
        local_10c = iVar7 + 1;
      }
    }
    iVar7 = FVector::IsZero((FVector *)&param_2);
    if (iVar7 == 0) {
      if (fVar15 == 0.0) {
LAB_105c0a97:
        iVar7 = param_9;
        if ((*(uint *)(param_1 + 0x2f8) & 3) == 0) {
          *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0x1bc) + (float)param_2;
          *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x1c0) + param_3;
          *(float *)(param_1 + 0x1c4) = *(float *)(param_1 + 0x1c4) + param_4;
          if (param_9 == 0) {
            AActor::ClearRenderData(param_1);
          }
          iVar8 = FRotator::operator==((FRotator *)&param_5,(FRotator *)(param_1 + 0x1c8));
          if (iVar8 == 0) {
            *(undefined4 *)(param_1 + 0x1c8) = param_5;
            *(undefined4 *)(param_1 + 0x1cc) = param_6;
            *(undefined4 *)(param_1 + 0x1d0) = param_7;
            if (iVar7 == 0) {
              AActor::UpdateRelativeRotation(param_1);
            }
          }
          goto LAB_105c0a62;
        }
      }
LAB_105c0b19:
      iVar7 = FVector::operator==((FVector *)&param_2,(FVector *)&param_2);
      if (iVar7 == 0) {
        appFailAssert("Delta == Delta",".\\UnLevAct.cpp",0x58b);
      }
      piVar9 = (int *)(DAT_10ddd7e0 + DAT_10dddb0c * 4);
      *piVar9 = *piVar9 + 1;
      piVar9 = (int *)(DAT_10ddd7e0 + DAT_10dddb08 * 4);
      uVar2 = rdtsc();
      *piVar9 = *piVar9 - (int)uVar2;
      FMemMark::FMemMark(local_78,(FMemStack *)GMem_exref);
      puVar11 = (undefined4 *)thunk_FUN_104419f0();
      pAVar18 = param_8;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)pAVar18 = *puVar11;
        puVar11 = puVar11 + 1;
        pAVar18 = pAVar18 + 4;
      }
      iVar7 = FVector::IsNearlyZero((FVector *)&param_2);
      if (iVar7 == 0) {
        local_40 = FVector::Size((FVector *)&param_2);
        if (local_40 == 0.0) goto LAB_105c0bc1;
        puVar11 = (undefined4 *)FVector::operator/((FVector *)&param_2,(float)&local_4c);
        local_8c = (AActor *)*puVar11;
        local_88 = (float)puVar11[1];
        local_84 = (float)puVar11[2];
      }
      else {
        local_40 = 0.0;
LAB_105c0bc1:
        local_8c = param_2;
        local_88 = param_3;
        local_84 = param_4;
      }
      local_10 = 2.0;
      pfVar12 = (float *)thunk_FUN_103301a0();
      local_bc = *pfVar12 + (float)param_2;
      local_b8 = pfVar12[1] + param_3;
      local_b4 = (AActor *)(pfVar12[2] + param_4);
      local_9c = 0;
      local_7c = (undefined4 *)0x0;
      local_ac = 1;
      pUVar19 = local_1c;
      local_18 = local_b8;
      local_14 = local_bc;
      local_c = local_b4;
      if (((((byte)param_1[0x2f8] & 3) != 0) &&
          (iVar7 = AActor::IsEncroacher(param_1), pUVar19 = local_1c, iVar7 == 0)) &&
         (local_40 != 0.0)) {
        local_ac = 0;
        local_5 = 0;
        if ((*(uint *)(param_1 + 0x2f8) & 1) != 0) {
          local_5 = param_10 == (AActor *)0x0 | 0x18;
        }
        if ((*(uint *)(param_1 + 0x2f8) >> 1 & 1) != 0) {
          local_5 = local_5 | 0x86;
          ULevel::GetLevelInfo(local_1c);
        }
        param_10 = (AActor *)(*(float *)(param_1 + 0x1bc) + local_14);
        local_128 = *(float *)(param_1 + 0x1c0) + local_18;
        local_124 = (AActor *)(*(float *)(param_1 + 0x1c4) + (float)local_c);
        local_12c = param_10;
        local_18 = local_128;
        local_c = local_124;
        piVar9 = (int *)AActor::GetCylinderExtent(param_1);
        local_344 = (AActor *)*piVar9;
        local_340 = (float)piVar9[1];
        local_350 = *(AActor **)(param_1 + 0x1bc);
        local_34c = *(AActor **)(param_1 + 0x1c0);
        local_348 = *(AActor **)(param_1 + 0x1c4);
        apAStack_368[3] = local_12c;
        local_358 = local_128;
        local_354 = local_124;
        apAStack_368[2] = (AActor *)GMem_exref;
        apAStack_368[1] = (AActor *)0x105c0d6e;
        puVar11 = (undefined4 *)(**(code **)(*(int *)pUVar19 + 0xf4))();
        local_7c = puVar11;
        if (((byte)param_1[0x2f8] & 0xe) != 0) {
LAB_105c0d7c:
          local_120 = puVar11;
          if (puVar11 != (undefined4 *)0x0) {
            if (((param_11 != (AActor *)0x0) &&
                (iVar7 = AActor::IsBasedOn(param_1,(AActor *)puVar11[1]), iVar7 != 0)) ||
               (iVar7 = AActor::IsBasedOn((AActor *)puVar11[1],param_1), iVar7 != 0))
            goto LAB_105c0e58;
            local_9c = 1;
            iVar7 = AActor::IsBlockedBy(param_1,(AActor *)puVar11[1]);
            if (iVar7 == 0) goto LAB_105c0e58;
            pAVar18 = param_8;
            for (iVar7 = 0xc; pUVar19 = local_1c, iVar7 != 0; iVar7 = iVar7 + -1) {
              *(undefined4 *)pAVar18 = *puVar11;
              puVar11 = puVar11 + 1;
              pAVar18 = pAVar18 + 4;
            }
          }
        }
      }
      pAVar18 = param_8;
      local_30 = param_2;
      local_2c = param_3;
      local_28 = param_4;
      if ((*(float *)(param_8 + 0x24) < 1.0) && (param_12 == (AActor *)0x0)) {
        local_c = (AActor *)((local_10 + local_40) * *(float *)(param_8 + 0x24));
        if ((float)local_c < local_10 == ((float)local_c == local_10)) {
          local_14 = *(float *)(param_8 + 0x24);
          param_10 = (AActor *)(local_14 * local_bc);
          local_18 = local_b8 * local_14;
          local_14 = local_14 * (float)local_b4;
          local_13c[0] = (float)param_10;
          pfVar12 = (float *)thunk_FUN_103301a0();
          param_10 = (AActor *)((float)param_10 - *pfVar12);
          local_c4 = local_18 - pfVar12[1];
          local_c0 = local_14 - pfVar12[2];
          fVar15 = ((float)local_c - local_10) / local_40;
          local_c8 = param_10;
          local_30 = param_10;
          local_2c = local_c4;
          local_28 = local_c0;
          local_18 = local_c4;
          local_14 = local_c0;
        }
        else {
          fVar15 = 0.0;
          local_104 = 0;
          local_100 = 0;
          local_fc = 0;
          local_30 = (AActor *)0x0;
          local_2c = 0.0;
          local_28 = 0.0;
        }
        *(float *)(pAVar18 + 0x24) = fVar15;
      }
      if (((param_9 == 0) && (param_12 == (AActor *)0x0)) &&
         (iVar7 = AActor::IsEncroacher(param_1), iVar7 != 0)) {
        param_10 = (AActor *)(*(float *)(param_1 + 0x1bc) + (float)local_30);
        local_340 = *(float *)(param_1 + 0x1c0) + local_2c;
        local_cc = (AActor *)(*(float *)(param_1 + 0x1c4) + local_28);
        local_348 = param_1;
        local_34c = (AActor *)0x105c0f8a;
        local_344 = param_10;
        local_d4 = param_10;
        local_d0 = local_340;
        local_10 = local_340;
        local_c = local_cc;
        iVar7 = (**(code **)(*(int *)pUVar19 + 0xd8))();
        if (iVar7 != 0) {
          piVar9 = (int *)(DAT_10ddd7e0 + DAT_10dddb08 * 4);
          uVar2 = rdtsc();
          *piVar9 = *piVar9 + (int)uVar2 + -0xc;
          FMemMark::Pop(local_78);
          goto LAB_105c0fac;
        }
      }
      if ((((byte)param_1[0x2f8] & 1) != 0) && (*(int **)(pUVar19 + 0x120) != (int *)0x0)) {
        (**(code **)(**(int **)(pUVar19 + 0x120) + 0xc))();
      }
      *(float *)(param_1 + 0x1bc) = (float)local_30 + *(float *)(param_1 + 0x1bc);
      *(float *)(param_1 + 0x1c0) = local_2c + *(float *)(param_1 + 0x1c0);
      *(float *)(param_1 + 0x1c4) = local_28 + *(float *)(param_1 + 0x1c4);
      pFVar1 = (FRotator *)(param_1 + 0x1c8);
      local_3c = *(uint *)pFVar1;
      local_38 = *(uint *)(param_1 + 0x1cc);
      local_34 = *(uint *)(param_1 + 0x1d0);
      *(undefined4 *)pFVar1 = param_5;
      *(undefined4 *)(param_1 + 0x1cc) = param_6;
      *(undefined4 *)(param_1 + 0x1d0) = param_7;
      if (*(int *)(param_1 + 500) < 1) {
LAB_105c18ff:
        if ((param_9 == 0) && ((*(uint *)(param_1 + 100) & 0x4000) == 0)) {
          if (*(int *)(param_1 + 0x40) != 0) {
            FName::FName((FName *)&param_12,0);
            iVar7 = FName::operator==((FName *)(param_1 + 0xd8),(FName *)&param_12);
            if (iVar7 != 0) {
              iVar7 = *(int *)(param_1 + 0x40);
              param_12 = (AActor *)(*(float *)(param_1 + 0x1bc) - *(float *)(iVar7 + 0x1bc));
              param_10 = (AActor *)(*(float *)(param_1 + 0x1c0) - *(float *)(iVar7 + 0x1c0));
              local_44 = *(float *)(param_1 + 0x1c4) - *(float *)(iVar7 + 0x1c4);
              *(AActor **)(param_1 + 0x1fc) = param_12;
              *(AActor **)(param_1 + 0x200) = param_10;
              *(float *)(param_1 + 0x204) = local_44;
              local_4c = param_12;
              local_48 = param_10;
              local_20 = local_44;
            }
          }
          iVar7 = FRotator::operator!=((FRotator *)&local_3c,(FRotator *)(param_1 + 0x1c8));
          if (iVar7 != 0) {
            AActor::UpdateRelativeRotation(param_1);
          }
        }
      }
      else if (param_9 == 0) {
        FRotator::FRotator((FRotator *)&local_6c,0,0,0);
        FCoords::operator/((FCoords *)(GMath_exref + 0x18),local_1a0);
        FCoords::operator/((FCoords *)(GMath_exref + 0x18),local_16c);
        iVar7 = FRotator::operator!=((FRotator *)&local_3c,pFVar1);
        if (iVar7 != 0) {
          param_10 = (AActor *)(local_38 & 0xfffc);
          local_340 = 4.3400344e-29;
          piVar9 = (int *)FRotator::FRotator((FRotator *)local_13c,
                                             (*(uint *)pFVar1 & 0xfffc) - (local_3c & 0xfffc),
                                             (*(uint *)(param_1 + 0x1cc) & 0xfffc) - (int)param_10,
                                             (*(uint *)(param_1 + 0x1d0) & 0xfffc) -
                                             (local_34 & 0xfffc));
          local_6c = *piVar9;
          local_68 = piVar9[1];
          local_64 = piVar9[2];
        }
        local_340 = 4.340052e-29;
        puVar11 = (undefined4 *)thunk_FUN_10326fb0();
        local_50 = local_50 & 0xffffff00;
        puVar16 = puVar11;
        pFVar17 = local_1e0;
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pFVar17 = *puVar16;
          puVar16 = puVar16 + 1;
          pFVar17 = pFVar17 + 4;
        }
        pFVar17 = local_260;
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pFVar17 = *puVar11;
          puVar11 = puVar11 + 1;
          pFVar17 = pFVar17 + 4;
        }
        local_50._0_1_ = 2;
        local_340 = 4.3400762e-29;
        pFVar13 = (FMatrix *)thunk_FUN_105263f0();
        local_50._0_1_ = 3;
        pFVar17 = local_260;
        ppAVar20 = &pAStack_370;
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *ppAVar20 = (AActor *)*(undefined4 *)pFVar17;
          pFVar17 = pFVar17 + 4;
          ppAVar20 = ppAVar20 + 1;
        }
        FMatrix::operator*(pFVar13,local_2a0);
        local_50._0_1_ = 5;
        thunk_FUN_10526040();
        local_50._0_1_ = 6;
        FMatrix::~FMatrix(local_1e0);
        local_50 = CONCAT31(local_50._1_3_,7);
        thunk_FUN_103284c0();
        for (local_80 = 0; local_80 < *(int *)(param_1 + 500); local_80 = local_80 + 1) {
          pAVar18 = *(AActor **)(*(int *)(param_1 + 0x1f0) + local_80 * 4);
          param_10 = pAVar18;
          if (pAVar18 != (AActor *)0x0) {
            local_a8 = (AActor *)0x0;
            local_a4 = (AActor *)0x0;
            local_a0 = 0.0;
            thunk_FUN_104419f0();
            iVar7 = thunk_FUN_104b42a0();
            if ((iVar7 != 0) && (*(int *)(iVar7 + 0x14d8) != 0)) {
              iVar8 = thunk_FUN_1040b460();
              if ((iVar8 == 0) || (*(AActor **)(iVar8 + 0x5c0) == param_1)) {
                FRotator::operator+=
                          ((FRotator *)(*(int *)(iVar7 + 0x14d8) + 0x1c8),(FRotator *)local_13c);
              }
              else {
                *(float *)(iVar8 + 0x838) = (float)local_68;
                *(float *)(iVar8 + 0x83c) = (float)local_6c;
                *(uint *)(iVar8 + 0x834) = *(uint *)(iVar8 + 0x834) | 1;
              }
            }
            if ((((byte)pAVar18[0x214] & 1) == 0) || (((byte)pAVar18[0x2f8] & 0xc) != 0)) {
              FName::FName((FName *)&local_14,0);
              iVar8 = FName::operator==((FName *)(pAVar18 + 0xd8),(FName *)&local_14);
              if (iVar8 != 0) {
                FRotator::operator+((FRotator *)(pAVar18 + 0x1c8),(FRotator *)&local_98);
                iVar8 = FRotator::operator!=((FRotator *)&local_3c,(FRotator *)(param_1 + 0x1c8));
                if (iVar8 != 0) {
                  fVar15 = *(float *)(pAVar18 + 0x204) * local_174 +
                           local_17c * *(float *)(pAVar18 + 0x1fc) +
                           *(float *)(pAVar18 + 0x200) * local_178;
                  local_2dc = fVar15 * local_148;
                  fVar3 = *(float *)(pAVar18 + 0x204) * local_180 +
                          *(float *)(pAVar18 + 0x1fc) * local_188 +
                          *(float *)(pAVar18 + 0x200) * local_184;
                  local_2ac = fVar3 * local_154;
                  local_c = (AActor *)(local_150 * fVar3);
                  fVar4 = *(float *)(pAVar18 + 0x204) * local_18c +
                          *(float *)(pAVar18 + 0x1fc) * local_194 +
                          *(float *)(pAVar18 + 0x200) * local_190;
                  local_2d0 = fVar4 * local_160;
                  local_18 = fVar4 * local_158;
                  local_2c4 = local_2d0 + local_2ac;
                  local_10 = local_15c * fVar4 + (float)local_c;
                  local_60 = local_18 + fVar3 * local_14c;
                  local_2b8 = local_2c4 + local_2dc;
                  param_10 = (AActor *)(local_2b8 - *(float *)(pAVar18 + 0x1fc));
                  local_dc = (AActor *)
                             ((local_10 + local_144 * fVar15) - *(float *)(pAVar18 + 0x200));
                  local_d8 = (local_60 + fVar15 * local_140) - *(float *)(pAVar18 + 0x204);
                  local_e0 = param_10;
                  local_a8 = param_10;
                  local_a4 = local_dc;
                  local_a0 = local_d8;
                  local_24 = local_dc;
                  local_20 = local_d8;
                }
                if (iVar7 != 0) {
                  *(float *)(iVar7 + 0x173c) = (float)local_68 + *(float *)(iVar7 + 0x173c);
                  FRotator::operator+=((FRotator *)(iVar7 + 0x32c),(FRotator *)&local_d4);
                }
                param_10 = (AActor *)((float)local_a8 + (float)local_30);
                local_358 = (float)local_a4 + local_2c;
                local_354 = (AActor *)(local_a0 + local_28);
                local_340 = 0.0;
                local_344 = local_210;
                local_350 = local_98;
                local_34c = local_94;
                local_348 = local_90;
                apAStack_368[1] = (AActor *)0x105c1677;
                apAStack_368[2] = pAVar18;
                apAStack_368[3] = param_10;
                local_118 = param_10;
                local_114 = local_358;
                local_110 = local_354;
                local_24 = local_354;
                local_20 = local_358;
                (**(code **)(*(int *)local_1c + 0xa4))();
              }
            }
            else {
              pFVar17 = local_2a0;
              ppAVar20 = apAStack_368;
              for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                *ppAVar20 = *(AActor **)pFVar17;
                pFVar17 = pFVar17 + 4;
                ppAVar20 = ppAVar20 + 1;
              }
              pFStack_36c = local_260;
              pAStack_370 = (AActor *)0x105c12be;
              FMatrix::operator*((FMatrix *)(param_10 + 0x218));
              local_50._0_1_ = 8;
              local_ec = local_230;
              local_e8 = local_22c;
              local_e4 = local_228;
              pAVar18 = local_1d0;
              pAStack_370 = (AActor *)&local_4c;
              uVar10 = FMatrix::Coords(local_260);
              this = (FCoords *)FCoords::operator*((FCoords *)(GMath_exref + 0x18),local_30c);
              FCoords::OrthoRotation(this);
              local_f8 = local_ec - *(float *)(param_10 + 0x1bc);
              local_f4 = (AActor *)(local_e8 - *(float *)(param_10 + 0x1c0));
              local_f0 = local_e4 - *(float *)(param_10 + 0x1c4);
              local_18 = local_f0;
              local_10 = local_f8;
              local_c = local_f4;
              (**(code **)(*(int *)local_1c + 0xa4))
                        (param_10,local_f8,local_f4,local_f0,local_4c,local_48,local_44,local_210,0,
                         0,1,0,uVar10,pAVar18);
              local_50 = CONCAT31(local_50._1_3_,7);
              FMatrix::~FMatrix(local_260);
              pAVar18 = param_10;
            }
            if ((param_12 == (AActor *)0x0) &&
               (iVar7 = AActor::IsBlockedBy(pAVar18,param_1), iVar7 != 0)) {
              thunk_FUN_104419f0();
              iVar7 = AActor::IsVolumeBrush(pAVar18);
              if (iVar7 == 0) {
                param_10 = (AActor *)(**(code **)(*(int *)param_1 + 0x164))();
                iVar7 = *(int *)param_10;
                AActor::GetCylinderExtent(pAVar18);
                local_348 = *(AActor **)(pAVar18 + 0x1bc);
                local_344 = *(AActor **)(pAVar18 + 0x1c0);
                local_340 = *(float *)(pAVar18 + 0x1c4);
                local_34c = param_1;
              }
              else {
                param_10 = (AActor *)(**(code **)(*(int *)pAVar18 + 0x164))();
                iVar7 = *(int *)param_10;
                AActor::GetCylinderExtent(param_1);
                local_348 = *(AActor **)(param_1 + 0x1bc);
                local_344 = *(AActor **)(param_1 + 0x1c0);
                local_340 = *(float *)(param_1 + 0x1c4);
                local_34c = pAVar18;
              }
              local_350 = local_1d0;
              local_354 = (AActor *)0x105c176e;
              iVar7 = (**(code **)(iVar7 + 0x68))();
              if ((iVar7 == 0) &&
                 (uVar14 = AActor::eventEncroachingOn(param_1,pAVar18), pUVar19 = local_1c,
                 uVar14 != 0)) {
                *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0x1bc) - (float)local_30;
                *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x1c0) - local_2c;
                *(float *)(param_1 + 0x1c4) = *(float *)(param_1 + 0x1c4) - local_28;
                *(uint *)(param_1 + 0x1c8) = local_3c;
                *(uint *)(param_1 + 0x1cc) = local_38;
                *(uint *)(param_1 + 0x1d0) = local_34;
                if ((((byte)param_1[0x2f8] & 1) != 0) && (*(int **)(local_1c + 0x120) != (int *)0x0)
                   ) {
                  (**(code **)(**(int **)(local_1c + 0x120) + 8))();
                }
                for (local_b0 = 0; pUVar5 = local_1c, local_b0 < *(int *)(param_1 + 500);
                    local_b0 = local_b0 + 1) {
                  pfVar12 = (float *)(*(int *)(param_1 + 0x1f0) + local_b0 * 4);
                  if (*pfVar12 != 0.0) {
                    param_8 = (AActor *)((float)local_30 * -1.0);
                    param_12 = (AActor *)(local_2c * -1.0);
                    param_11 = (AActor *)(local_28 * -1.0);
                    fVar15 = *pfVar12;
                    local_348 = *(AActor **)((int)fVar15 + 0x1c8);
                    local_344 = *(AActor **)((int)fVar15 + 0x1cc);
                    local_340 = *(float *)((int)fVar15 + 0x1d0);
                    local_358 = *pfVar12;
                    apAStack_368[3] = (AActor *)0x105c1897;
                    local_354 = param_8;
                    local_350 = param_12;
                    local_34c = param_11;
                    local_98 = param_8;
                    local_94 = param_12;
                    local_90 = param_11;
                    (**(code **)(*(int *)pUVar19 + 0xa4))();
                    pUVar19 = pUVar5;
                  }
                }
                FMemMark::Pop(local_78);
                piVar9 = (int *)(DAT_10ddd7e0 + DAT_10dddb08 * 4);
                uVar2 = rdtsc();
                *piVar9 = *piVar9 + (int)uVar2 + -0xc;
                local_50 = local_50 & 0xffffff00;
                FMatrix::~FMatrix(local_2a0);
                ExceptionList = local_58;
                return 0;
              }
            }
          }
        }
        local_50 = local_50 & 0xffffff00;
        FMatrix::~FMatrix(local_2a0);
        pUVar19 = local_1c;
        goto LAB_105c18ff;
      }
      if ((((byte)param_1[0x2f8] & 1) != 0) && (*(int **)(pUVar19 + 0x120) != (int *)0x0)) {
        (**(code **)(**(int **)(pUVar19 + 0x120) + 8))();
      }
      if (param_9 == 0) {
        pAVar18 = *(AActor **)(param_8 + 4);
        if (((pAVar18 != (AActor *)0x0) && (((byte)pAVar18[0x74] & 2) == 0)) &&
           (iVar7 = AActor::IsBasedOn(param_1,pAVar18), iVar7 == 0)) {
          (**(code **)(**(int **)(param_8 + 4) + 0x168))();
          (**(code **)(*(int *)param_1 + 0x168))();
        }
        puVar11 = local_7c;
        if (((local_9c != 0) || ((*(uint *)(param_1 + 0x2f8) & 4) == 0)) ||
           ((*(uint *)(param_1 + 0x2f8) & 8) == 0)) {
          for (; (local_130 = puVar11, puVar11 != (undefined4 *)0x0 &&
                 ((float)puVar11[9] < *(float *)(param_8 + 0x24))); puVar11 = (undefined4 *)*puVar11
              ) {
            if (((param_11 == (AActor *)0x0) ||
                (iVar7 = AActor::IsJoinedTo(param_1,(AActor *)puVar11[1]), iVar7 == 0)) &&
               ((iVar7 = AActor::IsBlockedBy(param_1,(AActor *)puVar11[1]), iVar7 == 0 &&
                (param_1 != (AActor *)puVar11[1])))) {
              AActor::BeginTouch(param_1,(AActor *)puVar11[1]);
            }
          }
        }
        local_108 = 0;
        iVar7 = local_108;
        while (iVar7 < *(int *)(param_1 + 0x160)) {
          piVar9 = (int *)(*(int *)(param_1 + 0x15c) + iVar7 * 4);
          if ((*piVar9 == 0) ||
             (iVar8 = AActor::IsOverlapping(param_1,(AActor *)*piVar9,(FCheckResult *)0x0),
             iVar8 != 0)) {
            local_108 = iVar7 + 1;
            iVar7 = local_108;
          }
          else {
            AActor::EndTouch(param_1,*(AActor **)(*(int *)(param_1 + 0x15c) + iVar7 * 4),0);
          }
        }
      }
      iVar7 = param_9;
      (**(code **)(*(int *)param_1 + 0x1bc))();
      FMemMark::Pop(local_78);
      if (iVar7 == 0) {
        AActor::ClearRenderData(param_1);
      }
      piVar9 = (int *)(DAT_10ddd7e0 + DAT_10dddb08 * 4);
      uVar2 = rdtsc();
      *piVar9 = *piVar9 + (int)uVar2 + -0xc;
      if (*(float *)(param_8 + 0x24) <= 0.0) goto LAB_105c0fac;
    }
    else {
      iVar7 = FRotator::operator==((FRotator *)&param_5,(FRotator *)(param_1 + 0x1c8));
      if (iVar7 == 0) {
        if (fVar15 != 0.0) goto LAB_105c0b19;
        piVar9 = (int *)(**(code **)(*(int *)param_1 + 0x164))();
        iVar7 = (**(code **)(*piVar9 + 0x7c))();
        if (iVar7 == 0) goto LAB_105c0a97;
        *(undefined4 *)(param_1 + 0x1c8) = param_5;
        *(undefined4 *)(param_1 + 0x1cc) = param_6;
        *(undefined4 *)(param_1 + 0x1d0) = param_7;
        if (param_9 == 0) {
          AActor::UpdateRelativeRotation(param_1);
          AActor::ClearRenderData(param_1);
        }
      }
    }
LAB_105c0a62:
    uVar10 = 1;
  }
  else {
LAB_105c0fac:
    uVar10 = 0;
  }
  ExceptionList = local_58;
  return uVar10;
LAB_105c0e58:
  puVar11 = (undefined4 *)*puVar11;
  goto LAB_105c0d7c;
}


// ==== 105c1b16 Catch@105c1b16

void Catch_105c1b16(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xd0) = *(undefined4 *)(unaff_EBP + -0x124);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xd0,&DAT_10914c48);
}


// ==== 105c1b33 Catch@105c1b33

void Catch_105c1b33(void)

{
  UObject *this;
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  int unaff_EBP;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::MoveActor");
  this = *(UObject **)(unaff_EBP + 0x50);
  uVar1 = (uint)(byte)this[0x34];
  uVar3 = (uint)(*(int *)(unaff_EBP + 0x70) != 0);
  uVar18 = *(undefined4 *)(unaff_EBP + 0x68);
  uVar17 = *(undefined4 *)(unaff_EBP + 0x60);
  uVar16 = *(undefined4 *)(unaff_EBP + 100);
  dVar15 = (double)*(float *)(unaff_EBP + 0x5c);
  dVar14 = (double)*(float *)(unaff_EBP + 0x58);
  dVar13 = (double)*(float *)(unaff_EBP + 0x54);
  dVar12 = (double)*(float *)(this + 0x1dc);
  dVar11 = (double)*(float *)(this + 0x1d8);
  dVar10 = (double)*(float *)(this + 0x1d4);
  dVar9 = (double)*(float *)(this + 0x1e8);
  dVar8 = (double)*(float *)(this + 0x1e4);
  dVar7 = (double)*(float *)(this + 0x1e0);
  dVar6 = (double)*(float *)(this + 0x1c4);
  dVar5 = (double)*(float *)(this + 0x1c0);
  dVar4 = (double)*(float *)(this + 0x1bc);
  puVar2 = UObject::GetFullName(this,(ushort *)0x0);
  appUnwindf((ushort *)
             L"Actor(%s), Loc(%9.2f,%9.2f,%9.2f), Acc(%f,%f,%f), Vel(%f,%f,%f), Delta(%9.2f,%9.2f,%9.2f), NewRot(%d,%d,%d) bTest(%d), Phys(%d)"
             ,puVar2,dVar4,dVar5,dVar6,dVar7,dVar8,dVar9,dVar10,dVar11,dVar12,dVar13,dVar14,dVar15,
             uVar16,uVar17,uVar18,uVar3,uVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c20d0 FUN_105c20d0

undefined4
FUN_105c20d0(AActor *param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,int param_8)

{
  AActor *pAVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  AActor *this;
  int iVar5;
  float *pfVar6;
  ALevelInfo *pAVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  undefined4 *puVar13;
  AActor *pAVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 *puVar21;
  undefined1 local_1ac [12];
  float local_1a0;
  undefined1 local_194 [12];
  float local_188;
  int *local_17c;
  FMatrix local_170 [16];
  undefined1 local_160 [48];
  float local_130 [4];
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0 [4];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  FMemMark local_94 [12];
  undefined4 *local_88;
  undefined4 *local_80;
  int local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 *local_6c;
  void *local_68;
  undefined1 *puStack_64;
  int local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  uint local_3c;
  float local_38;
  float local_34;
  int *local_30;
  undefined4 *local_2c;
  float local_28;
  ULevel *local_24;
  float local_20;
  float local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  float local_10;
  undefined4 *local_c;
  int *local_8;
  
  this = param_1;
  puStack_64 = &LAB_1081fae0;
  local_68 = ExceptionList;
  local_6c = &stack0xfffffe28;
  local_60 = 0;
  ExceptionList = &local_68;
  puVar21 = &stack0xfffffe28;
  if (param_1 == (AActor *)0x0) {
    ExceptionList = &local_68;
    appFailAssert("Actor",".\\UnLevAct.cpp",0x6f0);
    puVar21 = local_6c;
  }
  local_6c = puVar21;
  if ((((byte)param_1[0x2f8] & 0xd) == 0) && (iVar5 = AActor::IsEncroacher(param_1), iVar5 == 0)) {
    ExceptionList = local_68;
    return 0;
  }
  local_60._0_1_ = 2;
  iVar5 = AActor::IsEncroacher(param_1);
  if (iVar5 != 0) {
    pfVar6 = (float *)(**(code **)(*(int *)param_1 + 0x150))(local_170);
    local_60 = (uint)local_60._1_3_ << 8;
    pfVar12 = local_130;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar12 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar12 = pfVar12 + 1;
    }
    local_60._0_1_ = 2;
    FMatrix::~FMatrix(local_170);
    local_20 = *(float *)(param_1 + 0x1bc);
    local_1c = *(float *)(param_1 + 0x1c0);
    local_18 = *(undefined4 **)(param_1 + 0x1c4);
    local_30 = *(int **)(param_1 + 0x1c8);
    local_2c = *(undefined4 **)(param_1 + 0x1cc);
    local_28 = *(float *)(param_1 + 0x1d0);
    *(float *)(param_1 + 0x1bc) = param_2;
    *(float *)(param_1 + 0x1c0) = param_3;
    *(float *)(param_1 + 0x1c4) = param_4;
    *(undefined4 *)(param_1 + 0x1c8) = param_5;
    *(undefined4 *)(param_1 + 0x1cc) = param_6;
    *(undefined4 *)(param_1 + 0x1d0) = param_7;
    pfVar6 = (float *)(**(code **)(*(int *)param_1 + 0x148))(local_170);
    local_60 = (uint)local_60._1_3_ << 8;
    pfVar12 = local_f0;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar12 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar12 = pfVar12 + 1;
    }
    local_60._0_1_ = 2;
    FMatrix::~FMatrix(local_170);
    *(float *)(param_1 + 0x1bc) = local_20;
    *(float *)(param_1 + 0x1c0) = local_1c;
    *(undefined4 **)(param_1 + 0x1c4) = local_18;
    *(int **)(param_1 + 0x1c8) = local_30;
    *(undefined4 **)(param_1 + 0x1cc) = local_2c;
    *(float *)(param_1 + 0x1d0) = local_28;
  }
  FMemMark::FMemMark(local_94,(FMemStack *)GMem_exref);
  if (*(int **)(local_24 + 0x120) == (int *)0x0) {
    param_1 = (AActor *)0x0;
    puVar13 = (undefined4 *)param_1;
  }
  else {
    param_1 = (AActor *)
              (**(code **)(**(int **)(local_24 + 0x120) + 0x1c))
                        (GMem_exref,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0x9f,0);
    puVar13 = (undefined4 *)param_1;
  }
  for (; iVar5 = param_8, puVar13 != (undefined4 *)0x0; puVar13 = (undefined4 *)*puVar13) {
    if (((((AActor *)puVar13[1] != this) &&
         (local_88 = puVar13, pAVar7 = ULevel::GetLevelInfo(local_24),
         (ALevelInfo *)puVar13[1] != pAVar7)) &&
        (iVar5 = AActor::IsJoinedTo((AActor *)puVar13[1],this), iVar5 == 0)) &&
       (iVar5 = AActor::IsBlockedBy(this,(AActor *)puVar13[1]), iVar5 != 0)) {
      local_3c = 1;
      iVar5 = AActor::IsEncroacher(this);
      if ((iVar5 != 0) && (iVar5 = AActor::IsEncroacher((AActor *)puVar13[1]), iVar5 == 0)) {
        pAVar1 = this + 0x1bc;
        local_38 = param_2 - *(float *)pAVar1;
        local_34 = param_3 - *(float *)(this + 0x1c0);
        local_18 = (undefined4 *)(param_4 - *(float *)(this + 0x1c4));
        local_188 = local_38 + *(float *)(puVar13[1] + 0x1bc);
        local_20 = local_38;
        local_1c = local_34;
        local_14 = local_18;
        local_10 = local_188;
        iVar5 = FRotator::operator!=((FRotator *)&param_5,(FRotator *)(this + 0x1c8));
        if (iVar5 != 0) {
          iVar5 = puVar13[1];
          fVar15 = *(float *)(iVar5 + 0x1bc);
          fVar3 = *(float *)(iVar5 + 0x1c0);
          fVar4 = *(float *)(iVar5 + 0x1c4);
          local_b0 = local_130[0] * fVar15 + fVar3 * local_120 + fVar4 * local_110 + local_100;
          local_ac = local_10c * fVar4 + local_11c * fVar3 + local_130[1] * fVar15 + local_fc;
          local_a8 = fVar4 * local_108 + fVar3 * local_118 + local_130[2] * fVar15 + local_f8;
          local_a0 = local_f0[0] * local_b0 + local_ac * local_e0 + local_a8 * local_d0 + local_c0;
          local_9c = local_cc * local_a8 + local_dc * local_ac + local_f0[1] * local_b0 + local_bc;
          local_98 = local_f0[2] * local_b0 + local_d8 * local_ac + local_c8 * local_a8 + local_b8;
          local_1a0 = local_a0 - *(float *)(iVar5 + 0x1bc);
          local_17c = (int *)(local_1a0 * 1.5);
          local_c = (undefined4 *)((local_9c - *(float *)(iVar5 + 0x1c0)) * 1.5);
          local_10 = (local_98 - *(float *)(iVar5 + 0x1c4)) * 1.5;
          local_20 = (float)local_17c + local_38;
          local_1c = (float)local_c + local_34;
          local_18 = (undefined4 *)(local_10 + (float)local_14);
          local_5c = local_b0;
          local_58 = local_ac;
          local_54 = local_a8;
          local_4c = local_a0;
          local_48 = local_9c;
          local_44 = local_98;
          local_8 = local_17c;
        }
        AActor::moveSmooth((AActor *)puVar13[1],local_20,local_1c,local_18);
        thunk_FUN_10522250(&param_2,pAVar1);
        thunk_FUN_10522290(&param_5,this + 0x1c8);
        thunk_FUN_104419f0(0x3f800000,0);
        iVar5 = AActor::IsVolumeBrush((AActor *)puVar13[1]);
        if (iVar5 == 0) {
          local_8 = (int *)(**(code **)(*(int *)this + 0x164))();
          local_c = (undefined4 *)(*local_8 + 0x68);
          puVar21 = local_1ac;
          puVar8 = (undefined4 *)AActor::GetCylinderExtent((AActor *)puVar13[1]);
          uVar18 = *puVar8;
          uVar19 = puVar8[1];
          uVar20 = puVar8[2];
          iVar5 = puVar13[1];
          fVar15 = *(float *)(iVar5 + 0x1bc);
          uVar16 = *(undefined4 *)(iVar5 + 0x1c0);
          uVar17 = *(undefined4 *)(iVar5 + 0x1c4);
          pAVar14 = this;
        }
        else {
          local_8 = (int *)(**(code **)(*(int *)puVar13[1] + 0x164))();
          local_c = (undefined4 *)(*local_8 + 0x68);
          puVar21 = local_194;
          puVar8 = (undefined4 *)AActor::GetCylinderExtent(this);
          uVar18 = *puVar8;
          uVar19 = puVar8[1];
          uVar20 = puVar8[2];
          fVar15 = *(float *)pAVar1;
          uVar16 = *(undefined4 *)(this + 0x1c0);
          uVar17 = *(undefined4 *)(this + 0x1c4);
          pAVar14 = (AActor *)puVar13[1];
        }
        iVar5 = (*(code *)*local_c)(local_160,pAVar14,fVar15,uVar16,uVar17,uVar18,uVar19,uVar20,0,
                                    puVar21);
        local_3c = (uint)(iVar5 == 0);
        thunk_FUN_10522250(&param_2,pAVar1);
        thunk_FUN_10522290(&param_5,this + 0x1c8);
        if (local_3c == 0) {
          local_78 = *(float *)pAVar1;
          local_74 = *(undefined4 *)(this + 0x1c0);
          local_70 = *(undefined4 *)(this + 0x1c4);
          *(float *)pAVar1 = param_2;
          *(float *)(this + 0x1c0) = param_3;
          *(float *)(this + 0x1c4) = param_4;
          local_30 = (int *)(local_20 * -1.0);
          local_2c = (undefined4 *)(local_1c * -1.0);
          local_28 = (float)local_18 * -1.0;
          iVar5 = puVar13[1];
          local_14 = (undefined4 *)(iVar5 + 0x1c8);
          local_10 = local_28;
          local_c = local_2c;
          local_8 = local_30;
          (**(code **)(*(int *)local_24 + 0xa4))
                    (puVar13[1],local_30,local_2c,local_28,*local_14,*(undefined4 *)(iVar5 + 0x1cc),
                     *(undefined4 *)(iVar5 + 0x1d0),local_160,0,0,0,0);
          *(float *)pAVar1 = local_78;
          *(undefined4 *)(this + 0x1c0) = local_74;
          *(undefined4 *)(this + 0x1c4) = local_70;
          goto LAB_105c2751;
        }
      }
      uVar9 = AActor::eventEncroachingOn(this,(AActor *)puVar13[1]);
      if (uVar9 != 0) {
        FMemMark::Pop(local_94);
        local_60._0_1_ = 1;
        FMatrix::~FMatrix((FMatrix *)local_f0);
        local_60 = (uint)local_60._1_3_ << 8;
        FMatrix::~FMatrix((FMatrix *)local_130);
        ExceptionList = local_68;
        return 1;
      }
    }
LAB_105c2751:
  }
  local_88 = (undefined4 *)0x0;
  if (param_8 != 0) {
    local_7c = 0;
    iVar11 = local_7c;
    while (iVar11 < *(int *)(this + 0x160)) {
      piVar2 = (int *)(*(int *)(this + 0x15c) + iVar11 * 4);
      if ((*piVar2 == 0) ||
         (iVar10 = AActor::IsOverlapping(this,(AActor *)*piVar2,(FCheckResult *)0x0), iVar10 != 0))
      {
        local_7c = iVar11 + 1;
        iVar11 = local_7c;
      }
      else {
        AActor::EndTouch(this,*(AActor **)(*(int *)(this + 0x15c) + iVar11 * 4),0);
      }
    }
  }
  do {
    while( true ) {
      local_80 = (undefined4 *)param_1;
      if (param_1 == (AActor *)0x0) {
        FMemMark::Pop(local_94);
        local_60._0_1_ = 1;
        FMatrix::~FMatrix((FMatrix *)local_f0);
        local_60 = (uint)local_60._1_3_ << 8;
        FMatrix::~FMatrix((FMatrix *)local_130);
        ExceptionList = local_68;
        return 0;
      }
      if (((*(AActor **)((int)param_1 + 4) != this) &&
          (iVar11 = AActor::IsJoinedTo(*(AActor **)((int)param_1 + 4),this), iVar11 == 0)) &&
         (pAVar7 = ULevel::GetLevelInfo(local_24), *(ALevelInfo **)((int)param_1 + 4) != pAVar7))
      break;
LAB_105c284b:
      param_1 = *(AActor **)param_1;
    }
    iVar11 = AActor::IsBlockedBy(this,*(AActor **)((int)param_1 + 4));
    if (iVar11 == 0) {
      if (iVar5 != 0) {
        AActor::BeginTouch(this,*(AActor **)((int)param_1 + 4));
      }
      goto LAB_105c284b;
    }
    AActor::eventEncroachedBy(*(AActor **)((int)param_1 + 4),this);
    param_1 = *(AActor **)param_1;
  } while( true );
}


// ==== 105c287f Catch@105c287f

void Catch_105c287f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 105c2893 Catch@105c2893

void Catch_105c2893(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::CheckEncroachment");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c2ab0 FUN_105c2ab0

bool FUN_105c2ab0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 uint param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  ULevel *this;
  ALevelInfo *pAVar1;
  undefined4 *puVar2;
  ULevel *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  FMemMark local_30 [20];
  undefined4 *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fb00;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  FMemMark::FMemMark(local_30,(FMemStack *)GMem_exref);
  if ((param_5 & 4) == 0) {
    pAVar1 = (ALevelInfo *)0x0;
  }
  else {
    pAVar1 = ULevel::GetLevelInfo(in_ECX);
  }
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)in_ECX + 0x110))
                     (GMem_exref,*param_3,param_3[1],param_3[2],*param_4,param_4[1],param_4[2],
                      param_6,param_7,param_8,pAVar1,param_5 | 0x400,param_2);
  do {
    local_1c = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
LAB_105c2c71:
      param_1[9] = 0x3f800000;
      param_1[1] = 0;
LAB_105c2c80:
      FMemMark::Pop(local_30);
      ExceptionList = local_10;
      return puVar2 == (undefined4 *)0x0;
    }
    pAVar1 = ULevel::GetLevelInfo(in_ECX);
    if ((((ALevelInfo *)puVar2[1] != pAVar1) || ((param_5 & 0x100) == 0)) ||
       ((*(byte *)(*(int *)(*(int *)(in_ECX + 0xc0) + 0xa4) + 4 +
                  *(int *)(*(int *)(*(int *)(in_ECX + 0xc0) + 100) + puVar2[10] * 0x78 + 0x1c) *
                  0x44) & 0x80) == 0)) {
      local_18 = 0;
      while( true ) {
        if (*(int *)(in_ECX + 0x11b4) <= local_18) {
          if (puVar2 != (undefined4 *)0x0) {
            puVar4 = puVar2;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *param_1 = *puVar4;
              puVar4 = puVar4 + 1;
              param_1 = param_1 + 1;
            }
            goto LAB_105c2c80;
          }
          goto LAB_105c2c71;
        }
        this = *(ULevel **)(local_18 * 4 + *(int *)(in_ECX + 0x11b0));
        iVar3 = *(int *)(this + 0xc0);
        pAVar1 = ULevel::GetLevelInfo(this);
        if (((((ALevelInfo *)puVar2[1] == pAVar1) && ((param_5 & 0x100) != 0)) &&
            ((*(byte *)(*(int *)(iVar3 + 0xa4) + 4 +
                       *(int *)(*(int *)(iVar3 + 100) + puVar2[10] * 0x78 + 0x1c) * 0x44) & 0x80) !=
             0)) || (((pAVar1 = ULevel::GetLevelInfo
                                          (*(ULevel **)(*(int *)(in_ECX + 0x11b0) + local_18 * 4)),
                      (ALevelInfo *)puVar2[1] != pAVar1 && ((*(byte *)(puVar2[1] + 0x2e4) & 2) == 0)
                      ) && ((param_5 & 0x100) != 0)))) break;
        local_18 = local_18 + 1;
      }
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}


// ==== 105c2ca4 Catch@105c2ca4

void Catch_105c2ca4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105c2cb8 Catch@105c2cb8

void Catch_105c2cb8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::L2SingleLineCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c2d60 FUN_105c2d60

bool FUN_105c2d60(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 uint param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  ULevel *this;
  ALevelInfo *pAVar1;
  undefined4 *puVar2;
  ULevel *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  FMemMark local_30 [20];
  undefined4 *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fb10;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  FMemMark::FMemMark(local_30,(FMemStack *)GMem_exref);
  if ((param_5 & 4) == 0) {
    pAVar1 = (ALevelInfo *)0x0;
  }
  else {
    pAVar1 = ULevel::GetLevelInfo(in_ECX);
  }
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)in_ECX + 0xf4))
                     (GMem_exref,*param_3,param_3[1],param_3[2],*param_4,param_4[1],param_4[2],
                      param_6,param_7,param_8,pAVar1,param_5 | 0x400,param_2);
  do {
    local_1c = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
LAB_105c2f21:
      param_1[9] = 0x3f800000;
      param_1[1] = 0;
LAB_105c2f30:
      FMemMark::Pop(local_30);
      ExceptionList = local_10;
      return puVar2 == (undefined4 *)0x0;
    }
    pAVar1 = ULevel::GetLevelInfo(in_ECX);
    if ((((ALevelInfo *)puVar2[1] != pAVar1) || ((param_5 & 0x100) == 0)) ||
       ((*(byte *)(*(int *)(*(int *)(in_ECX + 0xc0) + 0xa4) + 4 +
                  *(int *)(*(int *)(*(int *)(in_ECX + 0xc0) + 100) + puVar2[10] * 0x78 + 0x1c) *
                  0x44) & 0x80) == 0)) {
      local_18 = 0;
      while( true ) {
        if (*(int *)(in_ECX + 0x11b4) <= local_18) {
          if (puVar2 != (undefined4 *)0x0) {
            puVar4 = puVar2;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *param_1 = *puVar4;
              puVar4 = puVar4 + 1;
              param_1 = param_1 + 1;
            }
            goto LAB_105c2f30;
          }
          goto LAB_105c2f21;
        }
        this = *(ULevel **)(local_18 * 4 + *(int *)(in_ECX + 0x11b0));
        iVar3 = *(int *)(this + 0xc0);
        pAVar1 = ULevel::GetLevelInfo(this);
        if (((((ALevelInfo *)puVar2[1] == pAVar1) && ((param_5 & 0x100) != 0)) &&
            ((*(byte *)(*(int *)(iVar3 + 0xa4) + 4 +
                       *(int *)(*(int *)(iVar3 + 100) + puVar2[10] * 0x78 + 0x1c) * 0x44) & 0x80) !=
             0)) || (((pAVar1 = ULevel::GetLevelInfo
                                          (*(ULevel **)(*(int *)(in_ECX + 0x11b0) + local_18 * 4)),
                      (ALevelInfo *)puVar2[1] != pAVar1 && ((*(byte *)(puVar2[1] + 0x2e4) & 2) == 0)
                      ) && ((param_5 & 0x100) != 0)))) break;
        local_18 = local_18 + 1;
      }
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}


// ==== 105c2f54 Catch@105c2f54

void Catch_105c2f54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105c2f68 Catch@105c2f68

void Catch_105c2f68(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::SingleLineCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c3010 FUN_105c3010

int FUN_105c3010(FMemStack *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ALevelInfo *pAVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  ULevel *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_c34 [768];
  FMemMark local_34 [16];
  int local_24;
  int local_20;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fb20;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff3c0;
  local_8 = 0;
  ExceptionList = &local_10;
  FMemMark::FMemMark(local_34,param_1);
  *(undefined4 *)(in_ECX + 0x1188) = 1;
  iVar5 = *(int *)in_ECX;
  uVar7 = 5;
  pAVar1 = ULevel::GetLevelInfo(in_ECX);
  puVar2 = (undefined4 *)
           (**(code **)(iVar5 + 0xf4))
                     (param_1,*param_3,param_3[1],param_3[2],*param_4,param_4[1],param_4[2],param_5,
                      param_6,param_7,pAVar1,uVar7,param_2);
  iVar5 = 0;
  *(undefined4 *)(in_ECX + 0x1188) = 0;
  _vector_constructor_iterator_(local_c34,0x30,0x40,(_func_void_ptr_void_ptr *)&LAB_10305fbf);
  local_24 = 0;
  local_18 = puVar2;
  while (puVar2 = local_18, local_18 != (undefined4 *)0x0) {
    iVar3 = UObject::IsA((UObject *)local_18[1],&APawn::PrivateStaticClass);
    if (iVar3 == 0) {
      iVar3 = UObject::IsA((UObject *)puVar2[1],&ALevelInfo::PrivateStaticClass);
      if (iVar3 != 0) break;
      iVar3 = UObject::IsA((UObject *)puVar2[1],&ATerrainInfo::PrivateStaticClass);
      if (iVar3 != 0) break;
      local_18 = (undefined4 *)*puVar2;
    }
    else {
      puVar6 = local_c34 + iVar5 * 0xc;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar5 = iVar5 + 1;
      local_18 = (undefined4 *)*local_18;
      local_24 = iVar5;
    }
  }
  FMemMark::Pop(local_34);
  iVar3 = 0;
  if (iVar5 != 0) {
    param_1 = (FMemStack *)thunk_FUN_10522300(0x30,param_1,iVar5,8);
    if (param_1 == (FMemStack *)0x0) {
      param_1 = (FMemStack *)0x0;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x2c) = 0;
    }
    local_20 = 0;
    while( true ) {
      iVar3 = (int)param_1;
      if (iVar5 <= local_20) break;
      puVar4 = (undefined4 *)((int)param_1 + local_20 * 0x30);
      puVar2 = local_c34 + local_20 * 0xc;
      puVar6 = puVar4;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      local_20 = local_20 + 1;
      if (local_20 < iVar5) {
        *puVar4 = puVar4 + 0xc;
      }
      else {
        *puVar4 = 0;
      }
    }
  }
  ExceptionList = local_10;
  return iVar3;
}


// ==== 105c31bc Catch@105c31bc

void Catch_105c31bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105c31d0 Catch@105c31d0

void Catch_105c31d0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::SingleLineCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c3280 FUN_105c3280

void FUN_105c3280(void)

{
  AVolume *pAVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  AVolume *local_2c;
  undefined1 local_28 [4];
  int local_24;
  AVolume *local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fb30;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  while( true ) {
    local_24 = iVar3;
    if (*(int *)(*(int *)(in_ECX + 0xe4) + 0x3c) <= iVar3) break;
    pAVar1 = (AVolume *)
             thunk_FUN_105bdae0(*(undefined4 *)
                                 (*(int *)(*(int *)(in_ECX + 0xe4) + 0x38) + iVar3 * 4));
    if (pAVar1 != (AVolume *)0x0) {
      iVar2 = AVolume::Encompasses
                        (pAVar1,*(undefined4 *)(in_ECX + 0x1bc),*(undefined4 *)(in_ECX + 0x1c0),
                         *(undefined4 *)(in_ECX + 0x1c4));
      if (iVar2 != 0) {
        if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) && (((byte)pAVar1[0x2f8] & 1) != 0)) {
          thunk_FUN_1037ae60(local_1c);
          local_20 = pAVar1;
          thunk_FUN_1037ae60(&local_20);
        }
        iVar2 = thunk_FUN_105bdb10(pAVar1);
        if ((iVar2 != 0) && (*(int *)(*(int *)(in_ECX + 0x1b8) + 0x460) < *(int *)(iVar2 + 0x460)))
        {
          *(int *)(in_ECX + 0x1b8) = iVar2;
        }
      }
    }
    iVar3 = iVar3 + 1;
  }
  for (local_18 = 0; local_18 < *(int *)(*(int *)(in_ECX + 0xe4) + 0x11b4); local_18 = local_18 + 1)
  {
    iVar3 = 0;
    while( true ) {
      if (*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x11b0) + local_18 * 4) + 0x3c) <=
          iVar3) break;
      pAVar1 = (AVolume *)
               thunk_FUN_105bdae0(*(undefined4 *)
                                   (*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x11b0) +
                                                     local_18 * 4) + 0x38) + iVar3 * 4));
      if (pAVar1 != (AVolume *)0x0) {
        iVar2 = AVolume::Encompasses
                          (pAVar1,*(undefined4 *)(in_ECX + 0x1bc),*(undefined4 *)(in_ECX + 0x1c0),
                           *(undefined4 *)(in_ECX + 0x1c4));
        if (iVar2 != 0) {
          if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) && (((byte)pAVar1[0x2f8] & 1) != 0)) {
            thunk_FUN_1037ae60(local_28);
            local_2c = pAVar1;
            thunk_FUN_1037ae60(&local_2c);
          }
          iVar2 = thunk_FUN_105bdb10(pAVar1);
          if ((iVar2 != 0) && (*(int *)(*(int *)(in_ECX + 0x1b8) + 0x460) < *(int *)(iVar2 + 0x460))
             ) {
            *(int *)(in_ECX + 0x1b8) = iVar2;
          }
        }
      }
      iVar3 = iVar3 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105c347a Catch@105c347a

void Catch_105c347a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 105c348e Catch@105c348e

void Catch_105c348e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::SetVolumes");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c3540 FUN_105c3540

void FUN_105c3540(void)

{
  AVolume *pAVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  AVolume *local_1c;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fb40;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  while( true ) {
    if (*(int *)(*(int *)(in_ECX + 0xe4) + 0x3c) <= iVar3) break;
    pAVar1 = (AVolume *)
             thunk_FUN_105bdae0(*(undefined4 *)
                                 (*(int *)(*(int *)(in_ECX + 0xe4) + 0x38) + iVar3 * 4));
    if (pAVar1 != (AVolume *)0x0) {
      iVar2 = AVolume::Encompasses
                        (pAVar1,*(undefined4 *)(in_ECX + 0x1bc),*(undefined4 *)(in_ECX + 0x1c0),
                         *(undefined4 *)(in_ECX + 0x1c4));
      if (iVar2 != 0) {
        if (((*(byte *)(in_ECX + 0x2f8) & 1) != 0) && (((byte)pAVar1[0x2f8] & 1) != 0)) {
          thunk_FUN_1037ae60(local_18);
          local_1c = pAVar1;
          thunk_FUN_1037ae60(&local_1c);
        }
        iVar2 = thunk_FUN_105bdb10(pAVar1);
        if ((iVar2 != 0) && (*(int *)(*(int *)(in_ECX + 0x1b8) + 0x460) < *(int *)(iVar2 + 0x460)))
        {
          *(int *)(in_ECX + 0x1b8) = iVar2;
        }
      }
    }
    iVar3 = iVar3 + 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105c363c Catch@105c363c

void Catch_105c363c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105c3650 Catch@105c3650

void Catch_105c3650(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::SetVolumes");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c36c0 FUN_105c36c0

undefined4 FUN_105c36c0(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  FRotator local_38 [12];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fb50;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1b8) == 0) {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    iVar4 = **(int **)(in_ECX + 0xe4);
    uStack_54 = 0x105c3720;
    ExceptionList = &local_10;
    puVar2 = (undefined4 *)FRotator::FRotator(local_38,0,0,0);
    uStack_54 = 0;
    uStack_58 = 0;
    local_64 = *puVar2;
    local_60 = puVar2[1];
    local_5c = puVar2[2];
    local_70 = local_2c;
    local_6c = local_28;
    local_68 = local_24;
    local_1c = (undefined1 *)&uStack_74;
    uStack_74 = local_24;
    FName::FName((FName *)&uStack_74,0);
    uVar3 = (**(code **)(iVar4 + 0xc0))(&ADefaultPhysicsVolume::PrivateStaticClass);
    iVar4 = thunk_FUN_105bdb10(uVar3);
    *(int *)(in_ECX + 0x1b8) = iVar4;
    if (iVar4 == 0) {
      appFailAssert("PhysicsVolume",".\\UnLevAct.cpp",0xc11);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x1b8) + 0x460) = 0xfff0bdc0;
    puVar1 = (uint *)(*(int *)(in_ECX + 0x1b8) + 100);
    *puVar1 = *puVar1 | 0x40;
  }
  ExceptionList = local_10;
  return *(undefined4 *)(in_ECX + 0x1b8);
}


// ==== 105c37cb Catch@105c37cb

void Catch_105c37cb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c37df Catch@105c37df

void Catch_105c37df(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALevelInfo::GetDefaultPhysicsVolume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c3850 FUN_105c3850

APhysicsVolume *
FUN_105c3850(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  ALevelInfo *this;
  int iVar3;
  AVolume *pAVar4;
  undefined4 *puVar5;
  APhysicsVolume *pAVar6;
  int in_ECX;
  int iVar7;
  FMemMark local_40 [12];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_20;
  int local_1c;
  APhysicsVolume *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fb60;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  iVar7 = 0;
  local_8 = 0;
  local_18 = (APhysicsVolume *)0x0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffb4;
  if (((DAT_10c51044 == 0) ||
      (ExceptionList = &local_10, puVar2 = &stack0xffffffb4, *(int *)(DAT_10c51044 + 0x19c) == 0))
     || (ExceptionList = &local_10, this = ULevel::GetLevelInfo(*(ULevel **)(DAT_10c51044 + 0x19c)),
        puVar2 = local_14, this == (ALevelInfo *)0x0)) {
    local_14 = puVar2;
    this = *(ALevelInfo **)(in_ECX + 0xe0);
  }
  local_18 = ALevelInfo::GetDefaultPhysicsVolume(this);
  iVar1 = param_4;
  if (*(int *)(param_4 + 0x40) != 0) {
    FName::FName((FName *)&param_4,0);
    iVar3 = FName::operator!=((FName *)(iVar1 + 0xd8),(FName *)&param_4);
    if ((iVar3 != 0) &&
       (iVar3 = thunk_FUN_104b4270(*(undefined4 *)(*(int *)(iVar1 + 0x40) + 0x104)), iVar3 != 0)) {
      pAVar6 = *(APhysicsVolume **)(*(int *)(iVar1 + 0x40) + 0x1b8);
      if (pAVar6 == (APhysicsVolume *)0x0) {
        ExceptionList = local_10;
        return local_18;
      }
      ExceptionList = local_10;
      return pAVar6;
    }
  }
  if (param_5 == 0) {
    if (*(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0) {
      FMemMark::FMemMark(local_40,(FMemStack *)GMem_exref);
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      for (puVar5 = (undefined4 *)
                    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 0x14))
                              (GMem_exref,param_1,param_2,param_3,0,0,0,8,0,0); local_20 = puVar5,
          puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
        pAVar6 = (APhysicsVolume *)thunk_FUN_105bdb10(puVar5[1]);
        if ((pAVar6 != (APhysicsVolume *)0x0) &&
           (*(int *)(local_18 + 0x460) < *(int *)(pAVar6 + 0x460))) {
          local_18 = pAVar6;
        }
      }
      FMemMark::Pop(local_40);
    }
  }
  else {
    for (; iVar7 < *(int *)(iVar1 + 0x160); iVar7 = iVar7 + 1) {
      local_1c = iVar7;
      pAVar4 = (AVolume *)thunk_FUN_105bdb10(*(undefined4 *)(*(int *)(iVar1 + 0x15c) + iVar7 * 4));
      if (((pAVar4 != (AVolume *)0x0) && (*(int *)(local_18 + 0x460) < *(int *)(pAVar4 + 0x460))) &&
         (iVar3 = AVolume::Encompasses(pAVar4,param_1,param_2,param_3), iVar3 != 0)) {
        local_18 = (APhysicsVolume *)pAVar4;
      }
    }
  }
  ExceptionList = local_10;
  return local_18;
}


// ==== 105c3a24 Catch@105c3a24

void Catch_105c3a24(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105c3a38 Catch@105c3a38

void Catch_105c3a38(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALevelInfo::GetPhysicsVolume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c3ae0 FUN_105c3ae0

AVolume * FUN_105c3ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                      int param_5)

{
  undefined1 *puVar1;
  AVolume *pAVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  FMemMark local_40 [12];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_20;
  int local_1c;
  AVolume *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fb70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  iVar5 = 0;
  local_8 = 0;
  local_18 = (AVolume *)0x0;
  if ((param_5 == 0) || (ExceptionList = &local_10, puVar1 = &stack0xffffffb4, param_4 == 0)) {
    if (*(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0) {
      ExceptionList = &local_10;
      FMemMark::FMemMark(local_40,(FMemStack *)GMem_exref);
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      for (puVar4 = (undefined4 *)
                    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 0x14))
                              (GMem_exref,param_1,param_2,param_3,0,0,0,8,0,0); local_20 = puVar4,
          puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4) {
        pAVar2 = (AVolume *)thunk_FUN_105bdb40(puVar4[1]);
        if ((pAVar2 != (AVolume *)0x0) &&
           ((local_18 == (AVolume *)0x0 || (((byte)pAVar2[0x438] & 1) != 0)))) {
          local_18 = pAVar2;
        }
      }
      FMemMark::Pop(local_40);
    }
  }
  else {
    for (; local_14 = puVar1, iVar5 < *(int *)(param_4 + 0x160); iVar5 = iVar5 + 1) {
      local_1c = iVar5;
      pAVar2 = (AVolume *)thunk_FUN_105bdb40(*(undefined4 *)(*(int *)(param_4 + 0x15c) + iVar5 * 4))
      ;
      if (pAVar2 != (AVolume *)0x0) {
        iVar3 = AVolume::Encompasses(pAVar2,param_1,param_2,param_3);
        if (iVar3 != 0) {
          local_18 = pAVar2;
        }
      }
      puVar1 = local_14;
    }
  }
  ExceptionList = local_10;
  return local_18;
}


// ==== 105c3c2d Catch@105c3c2d

void Catch_105c3c2d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105c3c41 Catch@105c3c41

void Catch_105c3c41(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALevelInfo::GetMusicVolume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c3cc0 FUN_105c3cc0

void FUN_105c3cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  int iVar1;
  ULevel *pUVar2;
  
  iVar1 = param_4;
  pUVar2 = ULevel::GetCurrentSWLevel(*(ULevel **)(param_4 + 0xe4),(FVector *)&param_1);
  if (pUVar2 != (ULevel *)0x0) {
    if (**(int **)(pUVar2 + 0x38) == 0) {
      appFailAssert("Actors(0)",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnLevel.h",0x203);
    }
    ALevelInfo::GetMusicVolume
              ((ALevelInfo *)**(undefined4 **)(pUVar2 + 0x38),param_1,param_2,param_3,iVar1,param_5)
    ;
    return;
  }
  ALevelInfo::GetMusicVolume();
  return;
}


// ==== 105c3d80 FUN_105c3d80

void FUN_105c3d80(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int in_ECX;
  
  if (param_1 != 0) {
    iVar5 = FArray::Add((FArray *)(in_ECX + 0x1f0),1,4);
    fVar1 = *(float *)(param_1 + 0x1bc);
    fVar2 = *(float *)(in_ECX + 0x1bc);
    *(int *)(*(int *)(in_ECX + 0x1f0) + iVar5 * 4) = param_1;
    fVar3 = *(float *)(in_ECX + 0x1c0);
    fVar4 = *(float *)(in_ECX + 0x1c4);
    *(float *)(param_1 + 0x1fc) = fVar1 - fVar2;
    *(float *)(param_1 + 0x200) = *(float *)(param_1 + 0x1c0) - fVar3;
    *(float *)(param_1 + 0x204) = *(float *)(param_1 + 0x1c4) - fVar4;
  }
  return;
}


// ==== 105c3e20 FUN_105c3e20

AVolume * FUN_105c3e20(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                      int param_5)

{
  undefined1 *puVar1;
  AVolume *pAVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  FMemMark local_40 [12];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_20;
  int local_1c;
  AVolume *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fb80;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  iVar5 = 0;
  local_8 = 0;
  local_18 = (AVolume *)0x0;
  if ((param_5 == 0) || (ExceptionList = &local_10, puVar1 = &stack0xffffffb4, param_4 == 0)) {
    if (*(int *)(*(int *)(in_ECX + 0xe4) + 0x120) != 0) {
      ExceptionList = &local_10;
      FMemMark::FMemMark(local_40,(FMemStack *)GMem_exref);
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      for (puVar4 = (undefined4 *)
                    (**(code **)(**(int **)(*(int *)(in_ECX + 0xe4) + 0x120) + 0x14))
                              (GMem_exref,param_1,param_2,param_3,0,0,0,8,0,0); local_20 = puVar4,
          puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4) {
        pAVar2 = (AVolume *)thunk_FUN_105bdb70(puVar4[1]);
        if (pAVar2 != (AVolume *)0x0) {
          local_18 = pAVar2;
        }
      }
      FMemMark::Pop(local_40);
    }
  }
  else {
    for (; local_14 = puVar1, iVar5 < *(int *)(param_4 + 0x160); iVar5 = iVar5 + 1) {
      local_1c = iVar5;
      pAVar2 = (AVolume *)thunk_FUN_105bdb70(*(undefined4 *)(*(int *)(param_4 + 0x15c) + iVar5 * 4))
      ;
      if (pAVar2 != (AVolume *)0x0) {
        iVar3 = AVolume::Encompasses(pAVar2,param_1,param_2,param_3);
        if (iVar3 != 0) {
          local_18 = pAVar2;
        }
      }
      puVar1 = local_14;
    }
  }
  ExceptionList = local_10;
  return local_18;
}


// ==== 105c3f5f Catch@105c3f5f

void Catch_105c3f5f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105c3f73 Catch@105c3f73

void Catch_105c3f73(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALevelInfo::GetAirVolume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c3ff0 FUN_105c3ff0

void FUN_105c3ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  int iVar1;
  ULevel *pUVar2;
  
  iVar1 = param_4;
  pUVar2 = ULevel::GetCurrentSWLevel(*(ULevel **)(param_4 + 0xe4),(FVector *)&param_1);
  if (pUVar2 != (ULevel *)0x0) {
    if (**(int **)(pUVar2 + 0x38) == 0) {
      appFailAssert("Actors(0)",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnLevel.h",0x203);
    }
    ALevelInfo::GetAirVolume
              ((ALevelInfo *)**(undefined4 **)(pUVar2 + 0x38),param_1,param_2,param_3,iVar1,param_5)
    ;
    return;
  }
  ALevelInfo::GetAirVolume();
  return;
}


// ==== 105c40b0 FUN_105c40b0

void FUN_105c40b0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  thunk_FUN_10326200(param_1,param_2);
  return;
}


// ==== 105c4110 FUN_105c4110

void FUN_105c4110(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  thunk_FUN_1032c2b0(param_1,param_2);
  return;
}


// ==== 105c4170 FUN_105c4170

void FUN_105c4170(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081fb99;
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
  FArray::Remove(in_ECX,0,iVar1,0x30);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105c4230 FUN_105c4230

void FUN_105c4230(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fbb0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar3 = *(int *)(in_ECX + 0x138);
  iVar4 = iVar3;
  ExceptionList = &local_10;
LAB_105c4266:
  do {
    if (*(int *)(in_ECX + 0x3c) <= iVar3) {
      if (iVar4 != *(int *)(in_ECX + 0x3c)) {
        thunk_FUN_105c40b0(iVar4,*(int *)(in_ECX + 0x3c) - iVar4);
      }
      ExceptionList = local_10;
      return;
    }
    piVar1 = (int *)(*(int *)(in_ECX + 0x38) + iVar3 * 4);
    if (*piVar1 != 0) {
      if ((*(byte *)(*piVar1 + 100) & 0x80) == 0) {
        if (iVar4 != iVar3) {
          thunk_FUN_105bd940(iVar4);
        }
        iVar2 = *(int *)(in_ECX + 0x38);
        *(undefined4 *)(iVar2 + iVar4 * 4) = *(undefined4 *)(iVar2 + iVar3 * 4);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 1;
        goto LAB_105c4266;
      }
      if (*(int *)GLog_exref != 0) {
        UObject::GetFullName((UObject *)*piVar1,(ushort *)0x0);
        FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== 105c4304 Catch@105c4304

void Catch_105c4304(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105c4318 Catch@105c4318

void Catch_105c4318(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::CompactActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c4380 FUN_105c4380

void FUN_105c4380(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fbc0;
  local_10 = ExceptionList;
  iVar4 = 0;
  local_8 = 0;
  iVar3 = 0;
  ExceptionList = &local_10;
LAB_105c43ae:
  do {
    if (*(int *)(in_ECX + 0x4c) <= iVar4) {
      if (iVar3 != *(int *)(in_ECX + 0x4c)) {
        thunk_FUN_105c4110(iVar3,*(int *)(in_ECX + 0x4c) - iVar3);
      }
      ExceptionList = local_10;
      return;
    }
    piVar1 = (int *)(*(int *)(in_ECX + 0x48) + iVar4 * 4);
    if (*piVar1 != 0) {
      if ((*(byte *)(*piVar1 + 0x34) & 1) == 0) {
        if (iVar3 != iVar4) {
          thunk_FUN_105bd990(iVar3);
        }
        iVar2 = *(int *)(in_ECX + 0x48);
        *(undefined4 *)(iVar2 + iVar3 * 4) = *(undefined4 *)(iVar2 + iVar4 * 4);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 1;
        goto LAB_105c43ae;
      }
      if (*(int *)GLog_exref != 0) {
        UObject::GetFullName((UObject *)*piVar1,(ushort *)0x0);
        FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


// ==== 105c444c Catch@105c444c

void Catch_105c444c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105c4460 Catch@105c4460

void Catch_105c4460(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::CompactLevelObjects");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c44c0 FUN_105c44c0

void FUN_105c44c0(undefined4 param_1,ushort *param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081fbf0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = param_1;
  FString::FString((FString *)(in_ECX + 1),param_2);
  local_4 = 0;
  FArray::FArray((FArray *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 105c4540 FUN_105c4540

undefined8
FUN_105c4540(float param_1,float param_2,ALevelInfo *param_3,AZoneInfo **param_4,ALevelInfo *param_5
            ,float param_6,float param_7,undefined4 param_8,int param_9,int param_10,int param_11,
            int param_12)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  AZoneInfo *pAVar4;
  ULevel *in_ECX;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  ULevel *pUVar8;
  int iVar9;
  int **ppiVar10;
  ALevelInfo **ppAVar11;
  int *piVar12;
  ALevelInfo *pAStack_ec;
  AZoneInfo **ppAStack_e8;
  ALevelInfo *pAStack_e4;
  AZoneInfo **ppAStack_e0;
  ALevelInfo *pAStack_dc;
  float fStack_d8;
  int local_c0 [12];
  int *local_90 [2];
  float local_88;
  FBox local_7c [32];
  undefined1 *local_5c;
  void *local_58;
  undefined1 *puStack_54;
  undefined4 local_50;
  float local_44;
  float local_40;
  float local_3c;
  AZoneInfo *local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  AZoneInfo *local_14;
  ULevel *local_10;
  int *local_c;
  int local_8;
  
  puStack_54 = &LAB_1081fc10;
  local_58 = ExceptionList;
  local_5c = &stack0xffffff34;
  local_50 = 0;
  local_c = (int *)0x0;
  ExceptionList = &local_58;
  puVar2 = &stack0xffffff34;
  local_10 = in_ECX;
  if ((*(int *)(in_ECX + 0x118c) != 0) &&
     (ExceptionList = &local_58, puVar2 = &stack0xffffff34,
     GTempLineBatcher != (FTempLineBatcher *)0x0)) {
    local_8 = 0xff0080ff;
    local_44 = (float)param_5 + param_2;
    local_40 = param_6 + (float)param_3;
    local_3c = param_7 + (float)param_4;
    local_30 = (AZoneInfo *)(param_2 - (float)param_5);
    local_2c = (float)param_3 - param_6;
    local_28 = (float)param_4 - param_7;
    fStack_d8 = 4.3441345e-29;
    ExceptionList = &local_58;
    local_1c = local_28;
    local_18 = local_2c;
    local_14 = local_30;
    puVar3 = (undefined4 *)FBox::FBox(local_7c,(FVector *)&local_30,(FVector *)&local_44);
    ppAVar11 = &pAStack_ec;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppAVar11 = (ALevelInfo *)*puVar3;
      puVar3 = puVar3 + 1;
      ppAVar11 = ppAVar11 + 1;
    }
    FTempLineBatcher::AddBox(GTempLineBatcher);
    puVar2 = local_5c;
  }
  local_5c = puVar2;
  pUVar8 = local_10;
  uVar1 = rdtsc();
  local_8 = (int)uVar1;
  if (param_9 != 0) {
    fStack_d8 = 4.3441538e-29;
    thunk_FUN_104419f0();
    pAStack_dc = param_5;
    fStack_d8 = param_6;
    ppAStack_e8 = (AZoneInfo **)param_2;
    pAStack_e4 = param_3;
    ppAStack_e0 = param_4;
    pAStack_ec = (ALevelInfo *)0x0;
    iVar5 = (**(code **)(**(int **)(*(int *)(param_9 + 0xe4) + 0xc0) + 0x68))(local_c0);
    if (iVar5 == 0) {
      fStack_d8 = param_1;
      pAStack_dc = (ALevelInfo *)0x30;
      ppAStack_e0 = (AZoneInfo **)0x105c46b4;
      local_c0[0] = iVar5;
      local_c = (int *)thunk_FUN_10522300();
      if (local_c == (int *)0x0) {
        local_c = (int *)0x0;
      }
      else {
        piVar6 = local_c0;
        piVar12 = local_c;
        for (iVar5 = 0xc; pUVar8 = local_10, iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar12 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar12 = piVar12 + 1;
        }
      }
      local_c[1] = param_9;
      if (param_12 != 0) {
        piVar6 = (int *)(DAT_10ddd7e0 + DAT_10dddb14 * 4);
        uVar1 = rdtsc();
        uVar7 = (undefined4)((ulonglong)uVar1 >> 0x20);
        iVar5 = (int)uVar1;
        goto LAB_105c46eb;
      }
    }
  }
  local_50 = CONCAT31(local_50._1_3_,1);
  for (iVar5 = 0; local_20 = iVar5, iVar5 < 0x40; iVar5 = iVar5 + 1) {
    pAVar4 = ULevel::GetZoneActor(pUVar8,iVar5);
    if ((pAVar4 != (AZoneInfo *)0x0) && (((byte)pAVar4[0x3d8] & 4) != 0)) {
      for (iVar9 = 0; iVar5 = local_20, local_24 = iVar9, iVar9 < *(int *)(pAVar4 + 0x3e0);
          iVar9 = iVar9 + 1) {
        fStack_d8 = 4.3442332e-29;
        thunk_FUN_104419f0();
        pAStack_dc = param_5;
        fStack_d8 = param_6;
        ppAStack_e8 = (AZoneInfo **)param_2;
        pAStack_e4 = param_3;
        ppAStack_e0 = param_4;
        pAStack_ec = (ALevelInfo *)local_90;
        iVar5 = ATerrainInfo::PointCheck(*(ATerrainInfo **)(*(int *)(pAVar4 + 0x3dc) + iVar9 * 4));
        pUVar8 = local_10;
        if (iVar5 == 0) {
          fStack_d8 = local_88;
          pAStack_dc = (ALevelInfo *)0x105c47cf;
          pAStack_dc = ULevel::GetLevelInfo(local_10);
          ppAStack_e0 = &local_30;
          pAStack_e4 = (ALevelInfo *)0x105c47df;
          UModel::PointRegion(*(UModel **)(pUVar8 + 0xc0));
          if (local_30 == pAVar4) {
            local_90[0] = local_c;
            fStack_d8 = param_1;
            pAStack_dc = (ALevelInfo *)0x30;
            ppAStack_e0 = (AZoneInfo **)0x105c47f9;
            local_c = (int *)thunk_FUN_10522300();
            if (local_c == (int *)0x0) {
              local_c = (int *)0x0;
              local_24 = iVar9;
            }
            else {
              ppiVar10 = local_90;
              piVar6 = local_c;
              for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
                *piVar6 = (int)*ppiVar10;
                ppiVar10 = ppiVar10 + 1;
                piVar6 = piVar6 + 1;
              }
            }
            local_c[1] = *(int *)(*(int *)(pAVar4 + 0x3dc) + local_24 * 4);
            iVar9 = local_24;
            if (param_12 != 0) {
              piVar6 = (int *)(DAT_10ddd7e0 + DAT_10dddb14 * 4);
              uVar1 = rdtsc();
              uVar7 = (undefined4)((ulonglong)uVar1 >> 0x20);
              *piVar6 = *piVar6 + ((int)uVar1 - local_8);
              goto code_r0x105c46f4;
            }
          }
        }
      }
    }
    pUVar8 = local_10;
  }
  local_50 = 0;
  if ((param_10 != 0) && (*(int *)(pUVar8 + 0x120) != 0)) {
    fStack_d8 = (float)((-(uint)(param_11 != 0) & 0xffffffe7) + 0x9f);
    pAStack_e4 = param_5;
    ppAStack_e0 = (AZoneInfo **)param_6;
    pAStack_dc = (ALevelInfo *)param_7;
    pAStack_ec = param_3;
    ppAStack_e8 = param_4;
    local_c = (int *)(**(code **)(**(int **)(pUVar8 + 0x120) + 0x14))(param_1,param_2);
  }
  piVar6 = (int *)(DAT_10ddd7e0 + DAT_10dddb14 * 4);
  uVar1 = rdtsc();
  uVar7 = (undefined4)((ulonglong)uVar1 >> 0x20);
  iVar5 = (int)uVar1;
LAB_105c46eb:
  *piVar6 = *piVar6 + (iVar5 - local_8);
code_r0x105c46f4:
  ExceptionList = local_58;
  return CONCAT44(uVar7,local_c);
}


// ==== 105c48e0 Catch@105c48e0

void Catch_105c48e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x14);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 105c48f4 Catch@105c48f4

void Catch_105c48f4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CheckWithTerrain");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c4910 Catch@105c4910

void Catch_105c4910(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x18,&DAT_10914c48);
}


// ==== 105c4924 Catch@105c4924

void Catch_105c4924(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::MultiPointCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c4a30 FUN_105c4a30

undefined8
FUN_105c4a30(AZoneInfo **param_1,AZoneInfo **param_2,AZoneInfo **param_3,AZoneInfo **param_4,
            float param_5,float param_6,float param_7,float param_8,float param_9,float param_10,
            AZoneInfo *param_11,uint param_12,undefined4 param_13)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined3 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  ALevelInfo *pAVar7;
  ULevel *in_ECX;
  uint uVar8;
  AZoneInfo **ppAVar9;
  AZoneInfo ***pppAVar10;
  uint uVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float fVar14;
  AZoneInfo **appAStackY_db0 [5];
  AZoneInfo **ppAStackY_d9c;
  AZoneInfo *local_d68 [2];
  float local_d60 [7];
  float local_d44 [759];
  FBox local_168 [28];
  float local_14c;
  float local_140;
  float local_134;
  float local_128;
  float local_11c;
  float local_110;
  float local_ec;
  float local_e8;
  float local_e4;
  AZoneInfo **local_e0;
  AZoneInfo **local_dc;
  AZoneInfo **local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  AZoneInfo **local_bc;
  AZoneInfo **local_b8;
  AZoneInfo **local_b4;
  AZoneInfo **local_ac;
  AZoneInfo **local_a8;
  AZoneInfo **local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  AZoneInfo *local_90;
  float local_8c;
  float local_88;
  AZoneInfo **local_84;
  AZoneInfo **local_80;
  AZoneInfo **local_7c;
  int local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  void *local_54;
  undefined1 *puStack_50;
  undefined4 local_4c;
  int local_48;
  undefined4 *local_44;
  int local_3c;
  int local_38;
  AZoneInfo **local_34;
  AZoneInfo **local_30;
  AZoneInfo **local_2c;
  int local_28;
  uint local_24;
  int local_20;
  ULevel *local_1c;
  float local_18;
  AZoneInfo *local_14;
  AZoneInfo **local_10;
  AZoneInfo **local_c;
  AZoneInfo *local_8;
  
  puStack_50 = &LAB_1081fc20;
  local_54 = ExceptionList;
  local_58 = &stack0xfffff28c;
  uVar8 = 0;
  local_4c = 0;
  local_24 = 0;
  ExceptionList = &local_54;
  local_1c = in_ECX;
  _vector_constructor_iterator_(local_d68,0x30,0x40,(_func_void_ptr_void_ptr *)&LAB_10305fbf);
  if (((*(int *)(in_ECX + 0x1184) == 0) ||
      (iVar4 = FVector::IsZero((FVector *)&param_8), iVar4 == 0)) ||
     (GTempLineBatcher == (FTempLineBatcher *)0x0)) {
    if (((*(int *)(in_ECX + 0x1188) != 0) &&
        (iVar4 = FVector::IsZero((FVector *)&param_8), iVar4 == 0)) &&
       (GTempLineBatcher != (FTempLineBatcher *)0x0)) {
      local_c = (AZoneInfo **)0xff00ffff;
      FTempLineBatcher::AddLine();
      local_14 = (AZoneInfo *)0xff00ffff;
      local_ec = (float)param_2 + param_8;
      local_e8 = param_9 + (float)param_3;
      local_e4 = param_10 + (float)param_4;
      local_e0 = (AZoneInfo **)((float)param_2 - param_8);
      local_dc = (AZoneInfo **)((float)param_3 - param_9);
      local_d8 = (AZoneInfo **)((float)param_4 - param_10);
      ppAStackY_d9c = (AZoneInfo **)0x105c4bf8;
      local_10 = local_d8;
      local_c = local_dc;
      local_8 = (AZoneInfo *)local_e0;
      puVar5 = (undefined4 *)FBox::FBox(local_168,(FVector *)&local_e0,(FVector *)&local_ec);
      pppAVar10 = appAStackY_db0;
      for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pppAVar10 = (AZoneInfo **)*puVar5;
        puVar5 = puVar5 + 1;
        pppAVar10 = pppAVar10 + 1;
      }
      FTempLineBatcher::AddBox(GTempLineBatcher);
    }
  }
  else {
    local_10 = (AZoneInfo **)0xff00ff80;
    FTempLineBatcher::AddLine();
  }
  uVar11 = param_12;
  uVar2 = rdtsc();
  local_6c = (int)uVar2;
  local_18 = 1.0;
  local_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  local_4c._0_1_ = 1;
  local_14 = (AZoneInfo *)(param_12 & 4);
  if ((local_14 != (AZoneInfo *)0x0) && (param_11 != (AZoneInfo *)0x0)) {
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    appAStackY_db0[4] = param_2;
    ppAStackY_d9c = param_3;
    appAStackY_db0[3] = (AZoneInfo **)0x0;
    appAStackY_db0[2] = local_d68;
    appAStackY_db0[1] = (AZoneInfo **)0x105c4cbe;
    iVar4 = (**(code **)(**(int **)(*(int *)(param_11 + 0xe4) + 0xc0) + 0x6c))();
    if (iVar4 == 0) {
      local_d68[1] = param_11;
      local_d4 = local_d60[0] - param_5;
      local_d0 = local_d60[1] - param_6;
      local_cc = local_d60[2] - param_7;
      local_10 = (AZoneInfo **)local_cc;
      local_c = (AZoneInfo **)local_d0;
      local_8 = (AZoneInfo *)local_d4;
      fVar14 = FVector::Size((FVector *)&local_d4);
      local_8 = (AZoneInfo *)(((fVar14 + 5.0) * local_d44[0]) / (fVar14 + 0.0001));
      fVar13 = (float10)thunk_FUN_104a4970();
      local_18 = (float)fVar13;
      local_128 = (float)param_2 - param_5;
      local_110 = local_18 * local_128;
      param_2 = (AZoneInfo **)(local_110 + param_5);
      param_3 = (AZoneInfo **)(param_6 + ((float)param_3 - param_6) * local_18);
      param_4 = (AZoneInfo **)(param_7 + local_18 * ((float)param_4 - param_7));
      uVar8 = 1;
      local_24 = 1;
      local_84 = param_2;
      local_80 = param_3;
      local_7c = param_4;
      local_10 = param_4;
      local_c = param_3;
      local_8 = (AZoneInfo *)param_2;
    }
  }
  local_4c = CONCAT31(local_4c._1_3_,2);
  if (*(int *)GIsL2Seamless_exref != 0) {
    for (local_20 = 0; local_20 < *(int *)(local_1c + 0x11b4); local_20 = local_20 + 1) {
      if (((local_14 != (AZoneInfo *)0x0) &&
          (piVar6 = (int *)(local_20 * 4 + *(int *)(local_1c + 0x11b0)), *piVar6 != 0)) &&
         (piVar6 = *(int **)(*piVar6 + 0xc0), piVar6 != (int *)0x0)) {
        local_9c = 0;
        local_98 = 0;
        local_94 = 0;
        appAStackY_db0[4] = param_2;
        ppAStackY_d9c = param_3;
        appAStackY_db0[3] = (AZoneInfo **)0x0;
        appAStackY_db0[2] = local_d68 + uVar8 * 0xc;
        appAStackY_db0[1] = (AZoneInfo **)0x105c4ec1;
        iVar4 = (**(code **)(*piVar6 + 0x6c))();
        uVar11 = param_12;
        if (iVar4 == 0) {
          pAVar7 = ULevel::GetLevelInfo(*(ULevel **)(*(int *)(local_1c + 0x11b0) + local_20 * 4));
          local_d68[uVar8 * 0xc + 1] = (AZoneInfo *)pAVar7;
          local_90 = (AZoneInfo *)(local_d60[uVar8 * 0xc] - param_5);
          local_8 = local_90;
          local_8c = local_d60[uVar8 * 0xc + 1] - param_6;
          local_c = (AZoneInfo **)local_8c;
          local_88 = local_d60[uVar8 * 0xc + 2] - param_7;
          local_10 = (AZoneInfo **)local_88;
          local_c = (AZoneInfo **)FVector::Size((FVector *)&local_90);
          fVar14 = local_d44[uVar8 * 0xc] * local_18;
          local_d44[uVar8 * 0xc] = fVar14;
          local_8 = (AZoneInfo *)((((float)local_c + 5.0) * fVar14) / ((float)local_c + 0.0001));
          fVar13 = (float10)thunk_FUN_104a4970();
          local_18 = (float)fVar13;
          local_14c = (float)local_34 - param_5;
          local_140 = local_18 * local_14c;
          param_2 = (AZoneInfo **)(local_140 + param_5);
          param_3 = (AZoneInfo **)(param_6 + ((float)local_30 - param_6) * local_18);
          param_4 = (AZoneInfo **)(param_7 + local_18 * ((float)local_2c - param_7));
          uVar8 = uVar8 + 1;
          uVar11 = param_12;
          local_ac = param_2;
          local_a8 = param_3;
          local_a4 = param_4;
          local_24 = uVar8;
          local_10 = param_4;
          local_c = param_3;
          local_8 = (AZoneInfo *)param_2;
        }
      }
    }
  }
  if ((uVar8 == 0) || ((uVar11 & 0x200) == 0)) {
    local_4c = 5;
    if ((local_14 != (AZoneInfo *)0x0) && ((uVar11 & 0x100) == 0)) {
      for (iVar4 = 0; local_3c = iVar4, iVar4 < 0x40; iVar4 = iVar4 + 1) {
        local_14 = ULevel::GetZoneActor(local_1c,iVar4);
        if ((local_14 != (AZoneInfo *)0x0) && (((byte)local_14[0x3d8] & 4) != 0)) {
          for (local_28 = 0; iVar4 = local_3c, local_28 < *(int *)(local_14 + 0x3e0);
              local_28 = local_28 + 1) {
            appAStackY_db0[4] = param_2;
            ppAStackY_d9c = param_3;
            appAStackY_db0[3] = local_d68 + uVar8 * 0xc;
            appAStackY_db0[2] = (AZoneInfo **)0x105c5107;
            iVar4 = ATerrainInfo::LineCheck
                              (*(ATerrainInfo **)(*(int *)(local_14 + 0x3dc) + local_28 * 4));
            if (iVar4 == 0) {
              ULevel::GetLevelInfo(local_1c);
              UModel::PointRegion(*(UModel **)(local_1c + 0xc0));
              if ((local_90 == local_14) || (local_90 == param_11)) {
                local_d68[uVar8 * 0xc + 1] =
                     *(AZoneInfo **)(local_28 * 4 + *(int *)(local_14 + 0x3dc));
                pfVar1 = local_d44 + uVar8 * 0xc;
                *pfVar1 = *pfVar1 * local_18;
                local_c8 = local_d60[uVar8 * 0xc] - param_5;
                local_8 = (AZoneInfo *)local_c8;
                local_c4 = local_d60[uVar8 * 0xc + 1] - param_6;
                local_c = (AZoneInfo **)local_c4;
                local_c0 = local_d60[uVar8 * 0xc + 2] - param_7;
                local_10 = (AZoneInfo **)local_c0;
                local_8 = (AZoneInfo *)FVector::Size((FVector *)&local_c8);
                local_8 = (AZoneInfo *)
                          ((((float)local_8 + 20.0) * *pfVar1) / ((float)local_8 + 0.0001));
                fVar13 = (float10)thunk_FUN_104a4970();
                local_18 = (float)fVar13;
                local_11c = (float)local_34 - param_5;
                local_134 = local_18 * local_11c;
                param_2 = (AZoneInfo **)(local_134 + param_5);
                param_3 = (AZoneInfo **)(param_6 + ((float)local_30 - param_6) * local_18);
                param_4 = (AZoneInfo **)(param_7 + local_18 * ((float)local_2c - param_7));
                uVar8 = uVar8 + 1;
                local_bc = param_2;
                local_b8 = param_3;
                local_b4 = param_4;
                local_24 = uVar8;
                local_10 = param_4;
                local_c = param_3;
                local_8 = (AZoneInfo *)param_2;
              }
            }
            uVar11 = param_12;
          }
        }
      }
    }
    if ((uVar8 == 0) || ((uVar11 & 0x200) == 0)) {
      local_4c._1_3_ = 0;
      uVar3 = local_4c._1_3_;
      local_4c._0_1_ = 7;
      local_4c._1_3_ = 0;
      if (((uVar11 & 0x4009b) != 0) &&
         (uVar3 = local_4c._1_3_, *(int **)(local_1c + 0x120) != (int *)0x0)) {
        appAStackY_db0[3] = param_2;
        appAStackY_db0[4] = param_3;
        ppAStackY_d9c = param_4;
        appAStackY_db0[2] = param_1;
        appAStackY_db0[1] = (AZoneInfo **)0x105c532c;
        local_68 = (undefined4 *)(**(code **)(**(int **)(local_1c + 0x120) + 0x10))();
        fVar14 = local_18;
        while ((uVar3 = local_4c._1_3_, local_68 != (undefined4 *)0x0 && (uVar8 < 0x40))) {
          local_68[9] = (float)local_68[9] * fVar14;
          puVar5 = local_68;
          ppAVar9 = local_d68 + uVar8 * 0xc;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *ppAVar9 = (AZoneInfo *)*puVar5;
            puVar5 = puVar5 + 1;
            ppAVar9 = ppAVar9 + 1;
          }
          local_68 = (undefined4 *)*local_68;
          uVar8 = uVar8 + 1;
          uVar11 = param_12;
          local_24 = uVar8;
        }
      }
      local_4c._1_3_ = uVar3;
      local_4c = CONCAT31(local_4c._1_3_,8);
      if (*(int *)GIsL2Seamless_exref != 0) {
        for (local_38 = 0; local_38 < *(int *)(local_1c + 0x11b4); local_38 = local_38 + 1) {
          piVar6 = (int *)(*(int *)(local_1c + 0x11b0) + local_38 * 4);
          if (((*piVar6 != 0) && (piVar6 = *(int **)(*piVar6 + 0x120), (uVar11 & 0x4009b) != 0)) &&
             (piVar6 != (int *)0x0)) {
            appAStackY_db0[3] = param_2;
            appAStackY_db0[4] = param_3;
            ppAStackY_d9c = param_4;
            appAStackY_db0[2] = param_1;
            appAStackY_db0[1] = (AZoneInfo **)0x105c5416;
            local_44 = (undefined4 *)(**(code **)(*piVar6 + 0x10))();
            fVar14 = local_18;
            while ((local_44 != (undefined4 *)0x0 && (uVar8 < 0x40))) {
              local_44[9] = (float)local_44[9] * fVar14;
              puVar5 = local_44;
              ppAVar9 = local_d68 + uVar8 * 0xc;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *ppAVar9 = (AZoneInfo *)*puVar5;
                puVar5 = puVar5 + 1;
                ppAVar9 = ppAVar9 + 1;
              }
              local_44 = (undefined4 *)*local_44;
              uVar8 = uVar8 + 1;
              uVar11 = param_12;
              local_24 = uVar8;
            }
          }
        }
      }
    }
  }
  local_4c = 0;
  iVar4 = 0;
  if (uVar8 != 0) {
    appQsort(local_d68,uVar8,0x30,(_func_int_void_ptr_void_ptr *)&LAB_10310947);
    param_12 = thunk_FUN_10522300();
    local_48 = 0;
    if (param_12 == 0) {
      param_12 = 0;
    }
    else {
      *(undefined4 *)(param_12 + 0x2c) = 0;
    }
    while (iVar4 = param_12, local_48 < (int)uVar8) {
      puVar5 = (undefined4 *)(local_48 * 0x30 + param_12);
      ppAVar9 = local_d68 + local_48 * 0xc;
      puVar12 = puVar5;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar12 = *ppAVar9;
        ppAVar9 = ppAVar9 + 1;
        puVar12 = puVar12 + 1;
      }
      local_48 = local_48 + 1;
      if (local_48 < (int)uVar8) {
        *puVar5 = puVar5 + 0xc;
      }
      else {
        *puVar5 = 0;
      }
    }
  }
  piVar6 = (int *)(DAT_10ddd7e0 + DAT_10dddb10 * 4);
  uVar2 = rdtsc();
  *piVar6 = *piVar6 + ((int)uVar2 - local_6c);
  ExceptionList = local_54;
  return CONCAT44((int)((ulonglong)uVar2 >> 0x20),iVar4);
}


// ==== 105c5523 Catch@105c5523

void Catch_105c5523(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0xbc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_10914c48);
}


// ==== 105c553a Catch@105c553a

void Catch_105c553a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SWCheckWithActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c5556 Catch@105c5556

void Catch_105c5556(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0xa8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 105c556d Catch@105c556d

void Catch_105c556d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CheckWithActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c5574 Catch@105c5574

void Catch_105c5574(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0xb0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 105c5588 Catch@105c5588

void Catch_105c5588(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CheckWithTerrain");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c558f Catch@105c558f

void Catch_105c558f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + -0xb8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x68,&DAT_10914c48);
}


// ==== 105c55a3 Catch@105c55a3

void Catch_105c55a3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SWCheckWithLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c55aa Catch@105c55aa

void Catch_105c55aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0xac);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 105c55be Catch@105c55be

void Catch_105c55be(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CheckWithLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c55c8 Catch@105c55c8

void Catch_105c55c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0xb4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x58,&DAT_10914c48);
}


// ==== 105c55df Catch@105c55df

void Catch_105c55df(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::L2MultiLineCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c58e0 FUN_105c58e0

undefined8
FUN_105c58e0(AZoneInfo **param_1,AZoneInfo **param_2,AZoneInfo **param_3,AZoneInfo **param_4,
            float param_5,float param_6,float param_7,float param_8,float param_9,float param_10,
            AZoneInfo *param_11,uint param_12,undefined4 param_13)

{
  int *piVar1;
  float *pfVar2;
  undefined8 uVar3;
  AZoneInfo *pAVar4;
  undefined3 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  ALevelInfo *pAVar9;
  ULevel *in_ECX;
  AZoneInfo **ppAVar10;
  AZoneInfo ***pppAVar11;
  uint uVar12;
  undefined4 *puVar13;
  float10 fVar14;
  float fVar15;
  AZoneInfo **appAStack_e0c [5];
  AZoneInfo **ppAStack_df8;
  AZoneInfo *local_dc4 [2];
  float local_dbc [7];
  float local_da0 [759];
  FBox local_1c4 [28];
  float local_1a8;
  float local_19c;
  float local_190;
  float local_184;
  float local_178;
  float local_16c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  AZoneInfo **local_118;
  AZoneInfo **local_114;
  AZoneInfo **local_110;
  float local_10c;
  float local_108;
  float local_104;
  AZoneInfo **local_100;
  AZoneInfo **local_fc;
  AZoneInfo **local_f8;
  undefined4 *local_f4;
  AZoneInfo **local_f0;
  AZoneInfo **local_ec;
  AZoneInfo **local_e8;
  int local_e4;
  AZoneInfo **local_e0;
  AZoneInfo **local_dc;
  AZoneInfo **local_d8;
  AZoneInfo *local_d4;
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
  undefined4 *local_a4;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_64;
  AZoneInfo **local_60;
  AZoneInfo **local_5c;
  AZoneInfo **local_58;
  undefined1 *local_54;
  void *local_50;
  undefined1 *puStack_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  ULevel *local_20;
  float local_1c;
  uint local_18;
  AZoneInfo *local_14;
  AZoneInfo **local_10;
  AZoneInfo **local_c;
  AZoneInfo *local_8;
  
  puStack_4c = &LAB_1081fc30;
  local_50 = ExceptionList;
  local_54 = &stack0xfffff230;
  local_48 = 0;
  local_18 = 0;
  ExceptionList = &local_50;
  local_20 = in_ECX;
  _vector_constructor_iterator_(local_dc4,0x30,0x40,(_func_void_ptr_void_ptr *)&LAB_10305fbf);
  if (((*(int *)(in_ECX + 0x1184) == 0) ||
      (iVar6 = FVector::IsZero((FVector *)&param_8), iVar6 == 0)) ||
     (GTempLineBatcher == (FTempLineBatcher *)0x0)) {
    if (((*(int *)(in_ECX + 0x1188) != 0) &&
        (iVar6 = FVector::IsZero((FVector *)&param_8), iVar6 == 0)) &&
       (GTempLineBatcher != (FTempLineBatcher *)0x0)) {
      local_3c = 0xffff0000;
      FTempLineBatcher::AddLine();
      local_24 = 0xffff0000;
      local_148 = param_8 + (float)param_2;
      local_144 = param_9 + (float)param_3;
      local_140 = param_10 + (float)param_4;
      local_13c = (float)param_2 - param_8;
      local_138 = (float)param_3 - param_9;
      local_134 = (float)param_4 - param_10;
      ppAStack_df8 = (AZoneInfo **)0x105c5aa7;
      local_14 = (AZoneInfo *)local_13c;
      local_c = (AZoneInfo **)local_134;
      local_8 = (AZoneInfo *)local_138;
      puVar7 = (undefined4 *)FBox::FBox(local_1c4,(FVector *)&local_13c,(FVector *)&local_148);
      pppAVar11 = appAStack_e0c;
      for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pppAVar11 = (AZoneInfo **)*puVar7;
        puVar7 = puVar7 + 1;
        pppAVar11 = pppAVar11 + 1;
      }
      FTempLineBatcher::AddBox(GTempLineBatcher);
      local_30 = param_8;
      local_2c = -param_9;
      local_28 = param_10;
      local_10 = (AZoneInfo **)0xffff0000;
      local_bc = (float)param_2 + param_8;
      local_b8 = (float)param_3 + param_9;
      local_b4 = (float)param_4 + param_10;
      local_10c = param_5 + param_8;
      local_108 = param_6 + local_2c;
      local_104 = param_10 + param_7;
      local_14 = (AZoneInfo *)local_10c;
      local_c = (AZoneInfo **)local_104;
      local_8 = (AZoneInfo *)local_108;
      FTempLineBatcher::AddLine
                (GTempLineBatcher,local_10c,local_108,local_104,local_bc,local_b8,local_b4,
                 0xffff0000);
      local_c = (AZoneInfo **)0xff00ff00;
      local_74 = (float)param_2 - local_30;
      local_70 = (float)param_3 - local_2c;
      local_6c = (float)param_4 - local_28;
      local_80 = param_5 - local_30;
      local_7c = param_6 - local_2c;
      local_78 = param_7 - local_28;
      local_14 = (AZoneInfo *)local_80;
      local_10 = (AZoneInfo **)local_78;
      local_8 = (AZoneInfo *)local_7c;
      FTempLineBatcher::AddLine
                (GTempLineBatcher,local_80,local_7c,local_78,local_74,local_70,local_6c,0xff00ff00);
      local_30 = -param_8;
      local_2c = -param_9;
      local_28 = param_10;
      local_8 = (AZoneInfo *)0xff0000ff;
      local_90 = (float)param_2 - local_30;
      local_8c = (float)param_3 - local_2c;
      local_88 = (float)param_4 - param_10;
      local_b0 = param_5 - local_30;
      local_ac = param_6 - local_2c;
      local_a8 = param_7 - param_10;
      local_14 = (AZoneInfo *)local_b0;
      local_10 = (AZoneInfo **)local_a8;
      local_c = (AZoneInfo **)local_ac;
      FTempLineBatcher::AddLine
                (GTempLineBatcher,local_b0,local_ac,local_a8,local_90,local_8c,local_88,0xff0000ff);
      local_30 = -param_8;
      local_2c = param_9;
      local_28 = param_10;
      local_14 = (AZoneInfo *)0xffffffff;
      local_c8 = local_30 + (float)param_2;
      local_c4 = (float)param_3 + param_9;
      local_c0 = (float)param_4 + param_10;
      local_e0 = (AZoneInfo **)(local_30 + param_5);
      local_dc = (AZoneInfo **)(param_6 + param_9);
      local_d8 = (AZoneInfo **)(param_10 + param_7);
      local_10 = local_d8;
      local_c = local_dc;
      local_8 = (AZoneInfo *)local_e0;
      FTempLineBatcher::AddLine
                (GTempLineBatcher,local_e0,local_dc,local_d8,local_c8,local_c4,local_c0,0xffffffff);
    }
  }
  else {
    local_38 = 0xff00ff80;
    FTempLineBatcher::AddLine();
  }
  pAVar4 = param_11;
  uVar3 = rdtsc();
  local_24 = (int)uVar3;
  local_1c = 1.0;
  local_60 = param_2;
  local_5c = param_3;
  local_58 = param_4;
  local_48._0_1_ = 1;
  local_14 = (AZoneInfo *)(param_12 & 4);
  if ((local_14 != (AZoneInfo *)0x0) && (param_11 != (AZoneInfo *)0x0)) {
    appAStack_e0c[4] = param_2;
    ppAStack_df8 = param_3;
    appAStack_e0c[3] = (AZoneInfo **)0x0;
    appAStack_e0c[2] = local_dc4;
    appAStack_e0c[1] = (AZoneInfo **)0x105c5e63;
    iVar6 = (**(code **)(**(int **)(*(int *)(param_11 + 0xe4) + 0xc0) + 0x6c))();
    if (iVar6 == 0) {
      local_dc4[1] = pAVar4;
      local_130 = local_dbc[0] - param_5;
      local_12c = local_dbc[1] - param_6;
      local_128 = local_dbc[2] - param_7;
      local_10 = (AZoneInfo **)local_128;
      local_c = (AZoneInfo **)local_12c;
      local_8 = (AZoneInfo *)local_130;
      fVar15 = FVector::Size((FVector *)&local_130);
      local_8 = (AZoneInfo *)(((fVar15 + 5.0) * local_da0[0]) / (fVar15 + 0.0001));
      fVar14 = (float10)thunk_FUN_104a4970();
      local_1c = (float)fVar14;
      local_184 = (float)param_2 - param_5;
      local_16c = local_1c * local_184;
      param_2 = (AZoneInfo **)(local_16c + param_5);
      param_3 = (AZoneInfo **)(param_6 + ((float)param_3 - param_6) * local_1c);
      param_4 = (AZoneInfo **)(param_7 + local_1c * ((float)param_4 - param_7));
      local_18 = 1;
      local_f0 = param_2;
      local_ec = param_3;
      local_e8 = param_4;
      local_10 = param_4;
      local_c = param_3;
      local_8 = (AZoneInfo *)param_2;
    }
  }
  local_48 = CONCAT31(local_48._1_3_,2);
  ppAVar10 = param_2;
  if (*(int *)GIsL2Seamless_exref != 0) {
    for (iVar6 = 0; uVar12 = local_18, local_40 = iVar6, iVar6 < *(int *)(local_20 + 0x11b4);
        iVar6 = iVar6 + 1) {
      if (((local_14 != (AZoneInfo *)0x0) &&
          (piVar1 = (int *)(*(int *)(local_20 + 0x11b0) + iVar6 * 4), *piVar1 != 0)) &&
         (piVar1 = *(int **)(*piVar1 + 0xc0), piVar1 != (int *)0x0)) {
        ppAStack_df8 = param_3;
        appAStack_e0c[3] = (AZoneInfo **)0x0;
        appAStack_e0c[2] = local_dc4 + local_18 * 0xc;
        appAStack_e0c[1] = (AZoneInfo **)0x105c6064;
        appAStack_e0c[4] = ppAVar10;
        iVar8 = (**(code **)(*piVar1 + 0x6c))();
        iVar6 = local_40;
        if (iVar8 == 0) {
          pAVar9 = ULevel::GetLevelInfo(*(ULevel **)(*(int *)(local_20 + 0x11b0) + local_40 * 4));
          local_dc4[uVar12 * 0xc + 1] = (AZoneInfo *)pAVar9;
          local_d4 = (AZoneInfo *)(local_dbc[uVar12 * 0xc] - param_5);
          local_8 = local_d4;
          local_d0 = local_dbc[uVar12 * 0xc + 1] - param_6;
          local_c = (AZoneInfo **)local_d0;
          local_cc = local_dbc[uVar12 * 0xc + 2] - param_7;
          local_10 = (AZoneInfo **)local_cc;
          local_c = (AZoneInfo **)FVector::Size((FVector *)&local_d4);
          fVar15 = local_da0[uVar12 * 0xc] * local_1c;
          local_da0[uVar12 * 0xc] = fVar15;
          local_8 = (AZoneInfo *)((((float)local_c + 5.0) * fVar15) / ((float)local_c + 0.0001));
          fVar14 = (float10)thunk_FUN_104a4970();
          local_1c = (float)fVar14;
          local_1a8 = (float)local_60 - param_5;
          local_19c = local_1c * local_1a8;
          ppAVar10 = (AZoneInfo **)(local_19c + param_5);
          param_3 = (AZoneInfo **)(param_6 + ((float)local_5c - param_6) * local_1c);
          param_4 = (AZoneInfo **)(param_7 + local_1c * ((float)local_58 - param_7));
          local_18 = local_18 + 1;
          param_2 = ppAVar10;
          local_100 = ppAVar10;
          local_fc = param_3;
          local_f8 = param_4;
          local_10 = param_4;
          local_c = param_3;
          local_8 = (AZoneInfo *)ppAVar10;
        }
      }
    }
  }
  iVar6 = 0;
  if ((local_18 == 0) || ((param_12 & 0x200) == 0)) {
    local_48 = 5;
    if ((local_14 != (AZoneInfo *)0x0) && ((param_12 & 0x100) == 0)) {
      for (; local_44 = iVar6, iVar6 < 0x40; iVar6 = iVar6 + 1) {
        local_14 = ULevel::GetZoneActor(local_20,iVar6);
        if ((local_14 != (AZoneInfo *)0x0) && (((byte)local_14[0x3d8] & 4) != 0)) {
          for (local_34 = 0; uVar12 = local_18, iVar6 = local_44,
              local_34 < *(int *)(local_14 + 0x3e0); local_34 = local_34 + 1) {
            ppAStack_df8 = param_3;
            appAStack_e0c[3] = local_dc4 + local_18 * 0xc;
            appAStack_e0c[2] = (AZoneInfo **)0x105c62bb;
            appAStack_e0c[4] = ppAVar10;
            iVar6 = ATerrainInfo::LineCheck
                              (*(ATerrainInfo **)(*(int *)(local_14 + 0x3dc) + local_34 * 4));
            if (iVar6 == 0) {
              ULevel::GetLevelInfo(local_20);
              UModel::PointRegion(*(UModel **)(local_20 + 0xc0));
              if ((local_d4 == local_14) || (local_d4 == param_11)) {
                local_dc4[uVar12 * 0xc + 1] =
                     *(AZoneInfo **)(local_34 * 4 + *(int *)(local_14 + 0x3dc));
                pfVar2 = local_da0 + uVar12 * 0xc;
                *pfVar2 = *pfVar2 * local_1c;
                local_124 = local_dbc[uVar12 * 0xc] - param_5;
                local_8 = (AZoneInfo *)local_124;
                local_120 = local_dbc[uVar12 * 0xc + 1] - param_6;
                local_c = (AZoneInfo **)local_120;
                local_11c = local_dbc[uVar12 * 0xc + 2] - param_7;
                local_10 = (AZoneInfo **)local_11c;
                local_8 = (AZoneInfo *)FVector::Size((FVector *)&local_124);
                local_8 = (AZoneInfo *)
                          ((((float)local_8 + 20.0) * *pfVar2) / ((float)local_8 + 0.0001));
                fVar14 = (float10)thunk_FUN_104a4970();
                local_1c = (float)fVar14;
                local_178 = (float)local_60 - param_5;
                local_190 = local_1c * local_178;
                ppAVar10 = (AZoneInfo **)(local_190 + param_5);
                param_3 = (AZoneInfo **)(param_6 + ((float)local_5c - param_6) * local_1c);
                param_4 = (AZoneInfo **)(param_7 + local_1c * ((float)local_58 - param_7));
                local_18 = local_18 + 1;
                param_2 = ppAVar10;
                local_118 = ppAVar10;
                local_114 = param_3;
                local_110 = param_4;
                local_10 = param_4;
                local_c = param_3;
                local_8 = (AZoneInfo *)ppAVar10;
              }
            }
          }
        }
      }
    }
    if ((local_18 == 0) || ((param_12 & 0x200) == 0)) {
      local_48._1_3_ = 0;
      uVar5 = local_48._1_3_;
      local_48._0_1_ = 7;
      local_48._1_3_ = 0;
      if (((param_12 & 0x4009b) != 0) && (*(int **)(local_20 + 0x120) != (int *)0x0)) {
        appAStack_e0c[4] = param_3;
        ppAStack_df8 = param_4;
        appAStack_e0c[2] = param_1;
        appAStack_e0c[1] = (AZoneInfo **)0x105c6503;
        appAStack_e0c[3] = ppAVar10;
        local_f4 = (undefined4 *)(**(code **)(**(int **)(local_20 + 0x120) + 0x10))();
        fVar15 = local_1c;
        for (; (uVar5 = local_48._1_3_, local_f4 != (undefined4 *)0x0 && (local_18 < 0x40));
            local_18 = local_18 + 1) {
          local_f4[9] = (float)local_f4[9] * fVar15;
          puVar7 = local_f4;
          ppAVar10 = local_dc4 + local_18 * 0xc;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *ppAVar10 = (AZoneInfo *)*puVar7;
            puVar7 = puVar7 + 1;
            ppAVar10 = ppAVar10 + 1;
          }
          local_f4 = (undefined4 *)*local_f4;
          ppAVar10 = param_2;
        }
      }
      local_48._1_3_ = uVar5;
      local_48 = CONCAT31(local_48._1_3_,8);
      if (*(int *)GIsL2Seamless_exref != 0) {
        for (local_64 = 0; local_64 < *(int *)(local_20 + 0x11b4); local_64 = local_64 + 1) {
          piVar1 = (int *)(*(int *)(local_20 + 0x11b0) + local_64 * 4);
          if (((*piVar1 != 0) && (piVar1 = *(int **)(*piVar1 + 0x120), (param_12 & 0x4009b) != 0))
             && (piVar1 != (int *)0x0)) {
            appAStack_e0c[4] = param_3;
            ppAStack_df8 = param_4;
            appAStack_e0c[2] = param_1;
            appAStack_e0c[1] = (AZoneInfo **)0x105c65f8;
            appAStack_e0c[3] = ppAVar10;
            local_a4 = (undefined4 *)(**(code **)(*piVar1 + 0x10))();
            fVar15 = local_1c;
            for (; (local_a4 != (undefined4 *)0x0 && (local_18 < 0x40)); local_18 = local_18 + 1) {
              local_a4[9] = fVar15 * (float)local_a4[9];
              puVar7 = local_a4;
              ppAVar10 = local_dc4 + local_18 * 0xc;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                *ppAVar10 = (AZoneInfo *)*puVar7;
                puVar7 = puVar7 + 1;
                ppAVar10 = ppAVar10 + 1;
              }
              local_a4 = (undefined4 *)*local_a4;
              ppAVar10 = param_2;
            }
          }
        }
      }
    }
  }
  uVar12 = local_18;
  local_48 = 0;
  iVar6 = 0;
  if (local_18 != 0) {
    appQsort(local_dc4,local_18,0x30,(_func_int_void_ptr_void_ptr *)&LAB_10310947);
    param_12 = thunk_FUN_10522300();
    iVar8 = 0;
    if (param_12 == 0) {
      param_12 = 0;
    }
    else {
      *(undefined4 *)(param_12 + 0x2c) = 0;
    }
    local_e4 = 0;
    while (iVar6 = param_12, iVar8 < (int)uVar12) {
      puVar7 = (undefined4 *)(iVar8 * 0x30 + param_12);
      ppAVar10 = local_dc4 + iVar8 * 0xc;
      puVar13 = puVar7;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar13 = *ppAVar10;
        ppAVar10 = ppAVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      iVar8 = iVar8 + 1;
      uVar12 = local_18;
      if (iVar8 < (int)local_18) {
        *puVar7 = puVar7 + 0xc;
        local_e4 = iVar8;
      }
      else {
        *puVar7 = 0;
        local_e4 = iVar8;
      }
    }
  }
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10dddb10 * 4);
  uVar3 = rdtsc();
  *piVar1 = *piVar1 + ((int)uVar3 - local_24);
  ExceptionList = local_50;
  return CONCAT44((int)((ulonglong)uVar3 >> 0x20),iVar6);
}


// ==== 105c671a Catch@105c671a

void Catch_105c671a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x110);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_10914c48);
}


// ==== 105c6731 Catch@105c6731

void Catch_105c6731(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SWCheckWithActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c674d Catch@105c674d

void Catch_105c674d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x10c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_10914c48);
}


// ==== 105c6764 Catch@105c6764

void Catch_105c6764(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CheckWithActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c676b Catch@105c676b

void Catch_105c676b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x114);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x54,&DAT_10914c48);
}


// ==== 105c677f Catch@105c677f

void Catch_105c677f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CheckWithTerrain");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c6786 Catch@105c6786

void Catch_105c6786(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x11c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105c679a Catch@105c679a

void Catch_105c679a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SWCheckWithLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c67a1 Catch@105c67a1

void Catch_105c67a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x108);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x5c,&DAT_10914c48);
}


// ==== 105c67b5 Catch@105c67b5

void Catch_105c67b5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CheckWithLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c67bf Catch@105c67bf

void Catch_105c67bf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0x118);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x58,&DAT_10914c48);
}


// ==== 105c67d6 Catch@105c67d6

void Catch_105c67d6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::MultiLineCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c6ba0 FUN_105c6ba0

int * FUN_105c6ba0(FMemStack *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  FMemStackFrame *this_00;
  int *piVar6;
  int *in_ECX;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 unaff_EBX;
  float unaff_EBP;
  float unaff_ESI;
  float unaff_EDI;
  int *piVar10;
  float fVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int *local_3dc;
  float local_3b0;
  undefined1 auStack_3ac [12];
  void *local_3a0;
  float fStack_39c;
  float fStack_398;
  undefined1 auStack_394 [16];
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  float fStack_364;
  float fStack_360;
  undefined4 uStack_35c;
  UObject *local_358;
  float local_348;
  float local_344;
  float local_33c;
  float local_338;
  FCanvasUtil aFStack_334 [4];
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_308;
  float afStack_304 [3];
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2b8;
  float fStack_2b4;
  undefined1 auStack_288 [56];
  undefined1 auStack_250 [16];
  FSceneNode aFStack_240 [16];
  FSceneNode aFStack_230 [48];
  FCameraSceneNode local_200 [376];
  FVector aFStack_88 [8];
  FVector aFStack_80 [76];
  undefined1 uStack_34;
  undefined1 uStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081fc61;
  local_c = ExceptionList;
  local_348 = (float)param_2;
  local_344 = (float)param_3;
  local_33c = (float)param_4;
  iVar7 = **(int **)(*(int *)(in_ECX[0x1d] + 0x54) + 0x38);
  local_358 = *(UObject **)(*(int *)(iVar7 + 0x3c) + 0x3bc);
  local_338 = (float)param_5;
  if ((iVar7 == 0) || (local_358 == (UObject *)0x0)) {
    local_3dc = (int *)0x0;
  }
  else {
    ExceptionList = &local_c;
    thunk_FUN_105bcd20();
    local_4 = 0;
    local_3dc = (int *)0x0;
    local_3b0 = 0.0;
    fVar11 = (float)local_3dc;
    if (0 < in_ECX[0xf]) {
      do {
        this = *(UObject **)(in_ECX[0xe] + (int)local_3b0 * 4);
        if ((((this != (UObject *)0x0) &&
             (iVar4 = UObject::IsA(this,&APawn::PrivateStaticClass), iVar4 != 0)) &&
            (((byte)this[0x54] & 1) != 0)) &&
           ((iVar4 = UObject::IsA(this,&APawn::PrivateStaticClass), iVar4 != 0 &&
            (local_358 != this)))) {
          iVar4 = *(int *)(iVar7 + 0x3c);
          FCameraSceneNode::FCameraSceneNode
                    (local_200,iVar7,(FRenderTarget *)(iVar7 + 0xdc),iVar4,
                     *(undefined4 *)(iVar4 + 0x1bc),*(undefined4 *)(iVar4 + 0x1c0),
                     *(undefined4 *)(iVar4 + 0x1c4),*(undefined4 *)(iVar4 + 0x1c8),
                     *(undefined4 *)(iVar4 + 0x1cc),*(undefined4 *)(iVar4 + 0x1d0),
                     *(undefined4 *)(iVar4 + 0x3c8));
          uStack_2c = 1;
          puVar13 = &stack0xfffffc18;
          FVector::SafeNormal(aFStack_88);
          puVar12 = auStack_288;
          FVector::SafeNormal(aFStack_80);
          fVar11 = *(float *)(this + 0x2f0);
          fStack_398 = *(float *)(this + 0x1c4);
          local_3a0 = *(void **)(this + 0x1bc);
          fStack_39c = *(float *)(this + 0x1c0);
          unaff_EDI = fVar11 * unaff_EDI;
          unaff_ESI = unaff_ESI * fVar11;
          unaff_EBP = fVar11 * unaff_EBP;
          fVar11 = (float)local_3a0 + unaff_EDI;
          fVar2 = fStack_39c + unaff_ESI;
          fVar3 = unaff_EBP + (fStack_398 - *(float *)(this + 0x2f4));
          local_3dc = (int *)((float)local_3a0 - unaff_EDI);
          fVar1 = fStack_39c - unaff_ESI;
          local_3b0 = (*(float *)(this + 0x2f4) + fStack_398) - unaff_EBP;
          fStack_384 = fVar11;
          fStack_380 = fVar2;
          fStack_37c = fVar3;
          FCanvasUtil::FCanvasUtil
                    (aFStack_334,(FRenderTarget *)(iVar7 + 0xdc),
                     *(FRenderInterface **)(iVar7 + 0x154));
          uStack_34 = 2;
          pfVar5 = (float *)FSceneNode::Project(aFStack_230,auStack_250,fVar11,fVar2,fVar3,puVar12,
                                                puVar13);
          fStack_364 = *pfVar5 * fStack_328 + pfVar5[1] * fStack_318 + pfVar5[2] * fStack_308 +
                       fStack_2f8;
          fStack_360 = pfVar5[2] * afStack_304[0] + fStack_324 * *pfVar5 + fStack_314 * pfVar5[1] +
                       fStack_2f4;
          pfVar5 = (float *)FSceneNode::Project(aFStack_240,auStack_250,unaff_ESI,unaff_EBP,
                                                unaff_EBX);
          fStack_314 = *pfVar5 * fStack_2e8 + pfVar5[1] * fStack_2d8 + pfVar5[2] * fStack_2c8 +
                       fStack_2b8;
          fStack_310 = pfVar5[2] * fStack_2c4 + fStack_2e4 * *pfVar5 + fStack_2d4 * pfVar5[1] +
                       fStack_2b4;
          if (((fStack_314 <= local_33c) && ((local_348 <= fStack_324 && (fStack_310 <= local_338)))
              ) && (local_344 <= fStack_320)) {
            iVar4 = *(int *)(iVar7 + 0x3c);
            fStack_330 = *(float *)(this + 0x1bc) - *(float *)(iVar4 + 0x1bc);
            fStack_32c = *(float *)(this + 0x1c0) - *(float *)(iVar4 + 0x1c0);
            fStack_328 = *(float *)(this + 0x1c4) - *(float *)(iVar4 + 0x1c4);
            fVar11 = FVector::Size((FVector *)&fStack_330);
            if (fVar11 < (float)param_6) {
              thunk_FUN_104419f0(0x3f800000,0);
              fStack_37c = 0.0;
              uStack_378 = 0;
              uStack_374 = 0;
              iVar4 = (**(code **)(*in_ECX + 0xe4))
                                (auStack_250,this,auStack_394,*(int *)(iVar7 + 0x3c) + 0x1bc,0x84,0,
                                 0,0);
              if (iVar4 == 0) {
                fStack_364 = 0.0;
                fStack_360 = 0.0;
                uStack_35c = 0;
                iVar4 = (**(code **)(*in_ECX + 0xe4))
                                  (auStack_250,this,auStack_3ac,*(int *)(iVar7 + 0x3c) + 0x1bc,0x84,
                                   0,0,0);
                if (iVar4 == 0) goto LAB_105c71e3;
              }
              FArray::Add((FArray *)&local_3a0,1,0x30);
              local_3dc = (int *)((int)local_3dc + 1);
              *(UObject **)((int)fVar1 + 4 + (int)local_3a0) = this;
              *(float *)((int)fVar1 + 0x24 + (int)local_3a0) = fVar11;
            }
          }
LAB_105c71e3:
          local_4._0_1_ = 1;
          FCanvasUtil::~FCanvasUtil((FCanvasUtil *)afStack_304);
          local_4 = (uint)local_4._1_3_ << 8;
          FCameraSceneNode::~FCameraSceneNode(local_200);
        }
        local_3b0 = (float)((int)local_3b0 + 1);
        fVar11 = (float)local_3dc;
      } while ((int)local_3b0 < in_ECX[0xf]);
    }
    local_3dc = (int *)0x0;
    if (fVar11 != 0.0) {
      appQsort(local_3a0,(int)fVar11,0x30,(_func_int_void_ptr_void_ptr *)&LAB_10310947);
      iVar7 = (int)fVar11 * 0x30;
      iVar4 = 8;
      this_00 = FMemStack::GetThreadSafeMemStack(param_1);
      local_3dc = (int *)FMemStackFrame::PushBytes(this_00,iVar7,iVar4);
      if (local_3dc == (int *)0x0) {
        local_3dc = (int *)0x0;
      }
      else {
        local_3dc[0xb] = 0;
      }
      iVar7 = 0;
      if (0 < (int)fVar11) {
        iVar4 = 0;
        piVar6 = local_3dc;
        do {
          iVar7 = iVar7 + 1;
          piVar9 = (int *)(iVar4 + (int)local_3a0);
          piVar10 = piVar6;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar10 = *piVar9;
            piVar9 = piVar9 + 1;
            piVar10 = piVar10 + 1;
          }
          if (iVar7 < (int)fVar11) {
            piVar9 = piVar6 + 0xc;
          }
          else {
            piVar9 = (int *)0x0;
          }
          *piVar6 = (int)piVar9;
          iVar4 = iVar4 + 0x30;
          piVar6 = piVar6 + 0xc;
        } while (iVar7 < (int)fVar11);
      }
    }
    local_4 = 0xffffffff;
    thunk_FUN_105c4170();
  }
  ExceptionList = local_c;
  return local_3dc;
}


// ==== 105c74c0 FUN_105c74c0

void FUN_105c74c0(int param_1,int param_2)

{
  AZoneInfo *this;
  APhysicsVolume *this_00;
  APhysicsVolume *this_01;
  AActor *in_ECX;
  AZoneInfo *local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fc80;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  if (((byte)in_ECX[100] & 0x80) == 0) {
    ExceptionList = &local_10;
    if (param_2 != 0) {
      local_28 = *(AZoneInfo **)(in_ECX + 0xe0);
      local_20 = local_20 & 0xffffff00;
      ExceptionList = &local_10;
      *(AZoneInfo **)(in_ECX + 0xec) = local_28;
      *(undefined4 *)(in_ECX + 0xf0) = 0xffffffff;
      *(uint *)(in_ECX + 0xf4) = local_20;
    }
    UModel::PointRegion(*(UModel **)(*(int *)(in_ECX + 0xe4) + 0xc0),&local_28,
                        *(undefined4 *)(in_ECX + 0xe0),*(undefined4 *)(in_ECX + 0x1bc),
                        *(undefined4 *)(in_ECX + 0x1c0),*(undefined4 *)(in_ECX + 0x1c4));
    this = *(AZoneInfo **)(in_ECX + 0xec);
    if (local_28 == this) {
      *(AZoneInfo **)(in_ECX + 0xec) = local_28;
      *(undefined4 *)(in_ECX + 0xf0) = local_24;
      *(uint *)(in_ECX + 0xf4) = local_20;
    }
    else {
      if ((this != (AZoneInfo *)0x0) && (param_1 == 0)) {
        AZoneInfo::eventActorLeaving(this,in_ECX);
        AActor::eventZoneChange(in_ECX,local_28);
      }
      *(AZoneInfo **)(in_ECX + 0xec) = local_28;
      *(undefined4 *)(in_ECX + 0xf0) = local_24;
      *(uint *)(in_ECX + 0xf4) = local_20;
      if (param_1 == 0) {
        AZoneInfo::eventActorEntered(*(AZoneInfo **)(in_ECX + 0xec),in_ECX);
      }
    }
    this_01 = ALevelInfo::GetPhysicsVolume
                        (*(ALevelInfo **)(in_ECX + 0xe0),*(undefined4 *)(in_ECX + 0x1bc),
                         *(undefined4 *)(in_ECX + 0x1c0),*(undefined4 *)(in_ECX + 0x1c4));
    if (param_1 == 0) {
      this_00 = *(APhysicsVolume **)(in_ECX + 0x1b8);
      if (this_01 != this_00) {
        if (this_00 != (APhysicsVolume *)0x0) {
          APhysicsVolume::eventActorLeavingVolume(this_00,in_ECX);
          AActor::eventPhysicsVolumeChange(in_ECX,this_01);
        }
        *(APhysicsVolume **)(in_ECX + 0x1b8) = this_01;
        APhysicsVolume::eventActorEnteredVolume(this_01,in_ECX);
      }
    }
    else {
      *(APhysicsVolume **)(in_ECX + 0x1b8) = this_01;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105c765e Catch@105c765e

void Catch_105c765e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c7672 Catch@105c7672

void Catch_105c7672(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::SetZone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c7710 FUN_105c7710

void FUN_105c7710(int param_1,int param_2)

{
  APhysicsVolume *pAVar1;
  APhysicsVolume *this;
  APhysicsVolume *pAVar2;
  ulong uVar3;
  AActor *in_ECX;
  AZoneInfo *local_34;
  undefined4 local_30;
  uint local_2c;
  float local_20;
  float local_1c;
  APhysicsVolume *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fc90;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  local_8 = 0;
  if (((byte)in_ECX[100] & 0x80) != 0) {
    return;
  }
  ExceptionList = &local_10;
  if (param_2 != 0) {
    local_34 = *(AZoneInfo **)(in_ECX + 0xe0);
    local_2c = local_2c & 0xffffff00;
    ExceptionList = &local_10;
    *(AZoneInfo **)(in_ECX + 0xec) = local_34;
    *(undefined4 *)(in_ECX + 0xf0) = 0xffffffff;
    *(uint *)(in_ECX + 0xf4) = local_2c;
  }
  UModel::PointRegion(*(UModel **)(*(int *)(in_ECX + 0xe4) + 0xc0),&local_34,
                      *(undefined4 *)(in_ECX + 0xe0),*(undefined4 *)(in_ECX + 0x1bc),
                      *(undefined4 *)(in_ECX + 0x1c0),*(undefined4 *)(in_ECX + 0x1c4));
  if (local_34 == *(AZoneInfo **)(in_ECX + 0xec)) {
    *(AZoneInfo **)(in_ECX + 0xec) = local_34;
    *(undefined4 *)(in_ECX + 0xf0) = local_30;
    *(uint *)(in_ECX + 0xf4) = local_2c;
  }
  else {
    if (param_1 == 0) {
      AZoneInfo::eventActorLeaving(*(AZoneInfo **)(in_ECX + 0xec),in_ECX);
      AActor::eventZoneChange(in_ECX,local_34);
    }
    *(AZoneInfo **)(in_ECX + 0xec) = local_34;
    *(undefined4 *)(in_ECX + 0xf0) = local_30;
    *(uint *)(in_ECX + 0xf4) = local_2c;
    if (param_1 == 0) {
      AZoneInfo::eventActorEntered(*(AZoneInfo **)(in_ECX + 0xec),in_ECX);
    }
  }
  this = ALevelInfo::GetPhysicsVolume
                   (*(ALevelInfo **)(in_ECX + 0xe0),*(undefined4 *)(in_ECX + 0x1bc),
                    *(undefined4 *)(in_ECX + 0x1c0),*(undefined4 *)(in_ECX + 0x1c4));
  local_18 = (APhysicsVolume *)(*(float *)(in_ECX + 0x1bc) + 0.0);
  local_1c = *(float *)(in_ECX + 0x1c0) + 0.0;
  local_20 = *(float *)(in_ECX + 0x1c4) + 13.0;
  local_18 = ALevelInfo::GetPhysicsVolume
                       (*(ALevelInfo **)(in_ECX + 0xe0),local_18,local_1c,local_20);
  local_20 = *(float *)(in_ECX + 0x1bc) + 0.0;
  local_1c = *(float *)(in_ECX + 0x1c0) + 0.0;
  pAVar2 = ALevelInfo::GetPhysicsVolume
                     (*(ALevelInfo **)(in_ECX + 0xe0),local_20,local_1c,
                      *(float *)(in_ECX + 0x1c4) + -*(float *)(in_ECX + 0x2f4));
  pAVar1 = *(APhysicsVolume **)(in_ECX + 0x1b8);
  if (this != pAVar1) {
    if (param_1 == 0) {
      if (pAVar1 != (APhysicsVolume *)0x0) {
        APhysicsVolume::eventPawnLeavingVolume(pAVar1,(APawn *)in_ECX);
        AActor::eventPhysicsVolumeChange(in_ECX,this);
      }
      if (*(AController **)(in_ECX + 0x14d8) != (AController *)0x0) {
        AController::eventNotifyPhysicsVolumeChange(*(AController **)(in_ECX + 0x14d8),this);
      }
    }
    *(APhysicsVolume **)(in_ECX + 0x1b8) = this;
    if (param_1 == 0) {
      APhysicsVolume::eventPawnEnteredVolume(this,(APawn *)in_ECX);
    }
  }
  pAVar1 = local_18;
  if (local_18 != *(APhysicsVolume **)(in_ECX + 0x15c0)) {
    if ((param_1 == 0) &&
       ((*(AController **)(in_ECX + 0x14d8) == (AController *)0x0 ||
        (uVar3 = AController::eventNotifyHeadVolumeChange
                           (*(AController **)(in_ECX + 0x14d8),local_18), uVar3 == 0)))) {
      APawn::eventHeadVolumeChange((APawn *)in_ECX,pAVar1);
    }
    *(APhysicsVolume **)(in_ECX + 0x15c0) = pAVar1;
  }
  APawn::UpdateWaterHitEffect((APawn *)in_ECX,pAVar2);
  if (pAVar2 != *(APhysicsVolume **)(in_ECX + 0x15dc)) {
    *(APhysicsVolume **)(in_ECX + 0x15dc) = pAVar2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105c7a20 Catch@105c7a20

void Catch_105c7a20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105c7a34 Catch@105c7a34

void Catch_105c7a34(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"APawn::SetZone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c7b30 FUN_105c7b30

void FUN_105c7b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  ULevel *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fca0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(ULevel **)(param_4 + 0xe4) != (ULevel *)0x0) &&
     (ExceptionList = &local_10,
     this = ULevel::GetCurrentSWLevel(*(ULevel **)(param_4 + 0xe4),(FVector *)&param_1),
     this != (ULevel *)0x0)) {
    ULevel::GetLevelInfo(this);
  }
  ALevelInfo::GetPhysicsVolume();
  ExceptionList = local_10;
  return;
}


// ==== 105c7bd5 Catch@105c7bd5

void Catch_105c7bd5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c7be9 Catch@105c7be9

void Catch_105c7be9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ALevelInfo::L2GetPhysicsVolume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c7c40 FUN_105c7c40

void FUN_105c7c40(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081fcc7;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1032ce30();
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 105c7cb0 FUN_105c7cb0

void FUN_105c7cb0(byte param_1)

{
  thunk_FUN_105c7c40();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 105c7ce0 FUN_105c7ce0

void FUN_105c7ce0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081fd00;
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
  local_18 = param_1 + param_2;
  if (*(int *)(in_ECX + 4) < local_18) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < local_18) {
    iVar1 = param_1 * 0x1c;
    local_18 = local_18 - param_1;
    do {
      iVar2 = *(int *)in_ECX + iVar1;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      thunk_FUN_1032c0e0(0,*(undefined4 *)(iVar2 + 0x14));
      local_4 = (uint)local_4._1_3_ << 8;
      FArray::~FArray((FArray *)(iVar2 + 0x10));
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar2 + 4));
      iVar1 = iVar1 + 0x1c;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 105c7e30 FUN_105c7e30

void FUN_105c7e30(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081fd29;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_105c7ce0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105c7ea0 FUN_105c7ea0

APlayerController *
FUN_105c7ea0(UObject *param_1,APlayerController param_2,FURL *param_3,FString *param_4)

{
  ushort uVar1;
  int iVar2;
  UObject *pUVar3;
  ULevel *this;
  int iVar4;
  ushort *puVar5;
  ALevelInfo *pAVar6;
  APlayerController *this_00;
  FString *pFVar7;
  UClass *this_01;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  FOutputDevice *this_02;
  FOutputDevice *this_03;
  undefined1 *puStack_eac;
  undefined4 uStack_ea8;
  undefined4 uStack_ea4;
  undefined4 uStack_ea0;
  FString *pFVar12;
  FString *pFVar13;
  APlayerController *pAVar14;
  APawn *pAVar15;
  ushort local_e74;
  undefined1 local_e72 [2046];
  ushort local_674 [256];
  FOutputDevice local_474 [512];
  ushort local_274 [260];
  ULevel *local_6c;
  ULevel *local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_50;
  ushort *local_4c;
  UPackageMap *local_48;
  int local_44;
  int local_40;
  FString local_3c [8];
  UObject *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  ushort *local_1c;
  ULevel *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081fd7d;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff180;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::operator=(param_4,(ushort *)&DAT_10853d94);
  local_48 = (UPackageMap *)0x0;
  iVar4 = thunk_FUN_1032aaf0();
  if (iVar4 != 0) {
    local_48 = *(UPackageMap **)(iVar4 + 0xc0);
  }
  local_e74 = 0;
  _memset(local_e72,0,0x7fe);
  local_50 = 0;
  while (iVar4 = local_50, local_50 < *(int *)(param_3 + 0x2c)) {
    appStrcat(&local_e74,(ushort *)&DAT_1085466c);
    puVar5 = FString::operator*((FString *)(*(int *)(param_3 + 0x28) + iVar4 * 0xc));
    appStrcat(&local_e74,puVar5);
    local_50 = iVar4 + 1;
  }
  iVar4 = *(int *)(local_18 + 0x3c);
  if ((*(int *)GIsL2NetLogin_exref == 0) && (*(int *)GL2ReplayMode_exref == 0)) {
    FString::FString(local_3c,&local_e74);
    local_8._0_1_ = 3;
    puVar5 = FString::operator*((FString *)(param_3 + 0x34));
    FString::FString((FString *)&local_28,puVar5);
    local_8._0_1_ = 4;
    pFVar7 = local_3c;
    pFVar12 = (FString *)&local_28;
    pFVar13 = param_4;
    pAVar6 = ULevel::GetLevelInfo(local_18);
    this_00 = AGameInfo::eventLogin(*(AGameInfo **)(pAVar6 + 0x614),pFVar12,pFVar7,pFVar13);
    local_8._0_1_ = 3;
  }
  else {
    FString::FString(local_3c,&local_e74);
    local_8._0_1_ = 1;
    puVar5 = FString::operator*((FString *)(param_3 + 0x34));
    FString::FString((FString *)&local_28,puVar5);
    local_8._0_1_ = 2;
    pFVar7 = local_3c;
    pFVar12 = (FString *)&local_28;
    pFVar13 = param_4;
    pAVar6 = ULevel::GetLevelInfo(local_18);
    this_00 = AGameInfo::eventL2NetLogin(*(AGameInfo **)(pAVar6 + 0x614),pFVar12,pFVar7,pFVar13);
    local_8._0_1_ = 1;
  }
  FString::~FString((FString *)&local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  APlayerController::eventAddCheatManager(this_00);
  if (this_00 == (APlayerController *)0x0) {
    if (*(int *)GLog_exref != 0) {
      FString::operator*(param_4);
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x2ff);
    }
    ExceptionList = local_10;
    return (APlayerController *)0x0;
  }
  local_34 = (UObject *)(uint)(iVar4 != *(int *)(local_18 + 0x3c));
  APlayerController::SetPlayer(this_00,(UPlayer *)param_1);
  if (*(int *)GLog_exref != 0) {
    UObject::GetName(param_1);
    UObject::GetName((UObject *)this_00);
    FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
  }
  this = local_18;
  this_00[0xc2] = (APlayerController)0x4;
  this_00[0xc1] = param_2;
  *(undefined4 *)(this_00 + 0x5ac) = 0x334cc80c;
  *(undefined4 *)(this_00 + 0x5b8) = 5;
  if (*(int *)GIsL2NetLogin_exref == 0) {
    pAVar14 = this_00;
    pAVar6 = ULevel::GetLevelInfo(local_18);
    AGameInfo::eventPostLogin(*(AGameInfo **)(pAVar6 + 0x614),pAVar14);
  }
  else {
    pAVar14 = this_00;
    pAVar6 = ULevel::GetLevelInfo(local_18);
    AGameInfo::eventL2NetPostLogin(*(AGameInfo **)(pAVar6 + 0x614),pAVar14);
  }
  if (*(int *)GIsL2NetLogin_exref == 0) {
    if (*(int *)(this_00 + 0x3bc) != 0) goto LAB_105c81a7;
    if (*(int *)GL2ReplayMode_exref == 0) {
      pAVar14 = this_00;
      pAVar6 = ULevel::GetLevelInfo(*(ULevel **)(this_00 + 0xe4));
      AGameInfo::eventSpawnDefaultPlayerPawn(*(AGameInfo **)(pAVar6 + 0x614),(AController *)pAVar14)
      ;
      if (*(int *)(this_00 + 0x3bc) == 0) {
        ExceptionList = local_10;
        return this_00;
      }
      iVar4 = UObject::IsA((UObject *)this_00,&ALineagePlayerController::PrivateStaticClass);
      if (iVar4 != 0) {
        (**(code **)(*(int *)this_00 + 0x390))();
        *(uint *)(*(int *)(this_00 + 0x3bc) + 0x18d4) =
             *(uint *)(*(int *)(this_00 + 0x3bc) + 0x18d4) & 0xfffffffe;
      }
    }
  }
  if (*(int *)(this_00 + 0x3bc) == 0) {
    ExceptionList = local_10;
    return this_00;
  }
LAB_105c81a7:
  AActor::eventTravelPreAccept((AActor *)this_00);
  AActor::eventTravelPreAccept(*(AActor **)(this_00 + 0x3bc));
  param_4 = (FString *)0x0;
  if (local_34 != (UObject *)0x0) {
    puVar5 = FString::operator*(&FURL::DefaultName);
    puVar5 = FURL::GetOption(param_3,(ushort *)L"NAME=",puVar5);
    if (puVar5 != (ushort *)0x0) {
      FString::FString(local_3c,puVar5);
      local_8._0_1_ = 5;
      pFVar7 = (FString *)thunk_FUN_1059fe90();
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_3c);
      if (pFVar7 != (FString *)0x0) {
        param_4 = (FString *)FString::operator*(pFVar7);
      }
    }
    if ((param_4 == (FString *)0x0) &&
       (pAVar6 = ULevel::GetLevelInfo(this), pAVar6[0x5d4] == (ALevelInfo)0x0)) {
      local_6c = this + 0x10c;
      local_64 = 0;
      local_60 = 0;
      local_8._0_1_ = 6;
      local_68 = local_6c;
      if (0 < *(int *)(this + 0x110)) {
        param_4 = (FString *)FString::operator*((FString *)(*(int *)local_6c + 0x10));
      }
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_105a1550();
    }
  }
  thunk_FUN_105bccb0();
  local_8 = CONCAT31(local_8._1_3_,7);
  do {
    if (((param_4 == (FString *)0x0) ||
        (iVar4 = Parse((ushort *)param_4,(ushort *)L"CLASS=",(ushort *)local_474,0x100), iVar4 == 0)
        ) || (iVar4 = Parse((ushort *)param_4,(ushort *)L"NAME=",local_674,0x100), iVar4 == 0)) {
      local_30 = 0;
      do {
        iVar4 = local_24;
        if (local_24 <= local_30) {
          while (iVar4 = iVar4 + -1, local_5c = iVar4, -1 < iVar4) {
            AActor::eventTravelPreAccept(*(AActor **)(local_28 + iVar4 * 0x1c));
          }
          pAVar15 = *(APawn **)(this_00 + 0x3bc);
          pAVar6 = ULevel::GetLevelInfo(local_18);
          AGameInfo::eventAcceptInventory(*(AGameInfo **)(pAVar6 + 0x614),pAVar15);
          while (local_24 = local_24 + -1, local_58 = local_24, -1 < local_24) {
            AActor::eventTravelPostAccept(*(AActor **)(local_28 + local_24 * 0x1c));
          }
          AActor::eventTravelPostAccept((AActor *)this_00);
          local_8 = local_8 & 0xffffff00;
          thunk_FUN_105c7e30();
          ExceptionList = local_10;
          return this_00;
        }
        for (local_44 = 0; iVar4 = local_28 + local_30 * 0x1c, local_44 < *(int *)(iVar4 + 0x14);
            local_44 = local_44 + 1) {
          for (puVar5 = FString::operator*((FString *)(*(int *)(iVar4 + 0x10) + local_44 * 0xc));
              *puVar5 == 0x20; puVar5 = puVar5 + 1) {
          }
          puVar9 = local_274;
          while( true ) {
            uVar1 = *puVar5;
            local_4c = puVar9;
            local_1c = puVar5;
            iVar4 = thunk_FUN_105bc830();
            if ((iVar4 == 0) && (uVar1 != 0x5f)) break;
            *puVar9 = uVar1;
            puVar9 = puVar9 + 1;
            puVar5 = puVar5 + 1;
          }
          *puVar9 = 0;
          param_1 = (UObject *)0x0;
          if (*puVar5 == 0x5b) {
            puVar9 = puVar5 + 1;
            local_1c = puVar9;
            param_1 = (UObject *)appAtoi(puVar9);
            for (; (ushort)(*puVar9 - 0x30) < 10; puVar9 = puVar9 + 1) {
            }
            puVar5 = puVar9 + 1;
            local_1c = puVar5;
            if (*puVar9 == 0x5d) goto LAB_105c85c7;
          }
          else {
LAB_105c85c7:
            local_1c = puVar5 + 1;
            if (*puVar5 == 0x3d) {
              UObject::GetClass(*(UObject **)(local_28 + local_30 * 0x1c));
              thunk_FUN_1058b610();
LAB_105c8600:
              pUVar3 = local_34;
              if (local_34 != (UObject *)0x0) {
                if ((*(uint *)(local_34 + 0x48) & 0x10000) != 0) {
                  puVar5 = local_274;
                  puVar9 = UObject::GetName(local_34);
                  iVar4 = appStricmp(puVar9,puVar5);
                  if ((iVar4 == 0) && ((int)param_1 < *(int *)(pUVar3 + 0x40))) {
                    iVar4 = *(int *)(pUVar3 + 0x44);
                    iVar8 = *(int *)(pUVar3 + 0x54);
                    iVar2 = *(int *)(local_28 + local_30 * 0x1c);
                    iVar10 = thunk_FUN_10589760();
                    if ((iVar10 == 0) ||
                       (iVar10 = UStruct::IsChildOf(*(UStruct **)(iVar10 + 0x78),
                                                    (UStruct *)&AActor::PrivateStaticClass),
                       iVar10 == 0)) {
                      (**(code **)(*(int *)pUVar3 + 0x9c))();
                    }
                    else {
                      for (local_2c = 0; local_2c < local_24; local_2c = local_2c + 1) {
                        iVar10 = local_2c * 0x1c;
                        iVar11 = FString::operator==((FString *)(iVar10 + 4 + local_28),local_1c);
                        if (iVar11 != 0) {
                          *(undefined4 *)(iVar4 * (int)param_1 + iVar8 + iVar2) =
                               *(undefined4 *)(iVar10 + local_28);
                          local_34 = *(UObject **)(pUVar3 + 0x38);
                          thunk_FUN_10589890();
                          goto LAB_105c8600;
                        }
                      }
                    }
                  }
                }
                local_34 = *(UObject **)(pUVar3 + 0x38);
                thunk_FUN_10589890();
                goto LAB_105c8600;
              }
            }
          }
        }
        local_30 = local_30 + 1;
      } while( true );
    }
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(local_474,*(ushort **)GLog_exref);
    }
    local_40 = 0;
    this_01 = UObject::StaticLoadClass
                        (&AActor::PrivateStaticClass,(UObject *)0x0,(ushort *)local_474,
                         (ushort *)0x0,0x22,local_48);
    if (this_01 == (UClass *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_02,*(EName *)GLog_exref,(ushort *)0x2f8);
      }
    }
    else {
      iVar4 = UStruct::IsChildOf((UStruct *)this_01,(UStruct *)&APawn::PrivateStaticClass);
      if (iVar4 == 0) {
        iVar4 = *(int *)local_18;
        iVar8 = *(int *)(this_00 + 0x3bc);
        puStack_eac = (undefined1 *)&uStack_ea8;
        uStack_ea8 = *(undefined4 *)(iVar8 + 0x1bc);
        uStack_ea4 = *(undefined4 *)(iVar8 + 0x1c0);
        uStack_ea0 = *(undefined4 *)(iVar8 + 0x1c4);
        FName::FName((FName *)&puStack_eac,0);
        iVar4 = (**(code **)(iVar4 + 0xc0))(this_01);
        if (iVar4 == 0) {
          if (*(int *)GLog_exref != 0) {
            FOutputDevice::Logf2(local_474,*(EName *)GLog_exref,(ushort *)0x2f8);
          }
        }
        else {
          if (*(int *)GLog_exref != 0) {
            FOutputDevice::Logf2(this_03,*(EName *)GLog_exref,(ushort *)0x2f8);
          }
          iVar4 = thunk_FUN_105bcde0();
          if (iVar4 == 0) goto LAB_105c8461;
          local_40 = thunk_FUN_105c44c0();
        }
      }
      else {
        iVar4 = thunk_FUN_105bcde0();
        if (iVar4 == 0) {
LAB_105c8461:
          local_40 = 0;
        }
        else {
          local_40 = thunk_FUN_105c44c0();
        }
      }
    }
    ParseLine((ushort **)&param_4,local_274,0x100,1);
    uStack_ea0 = 0x105c8494;
    ParseLine((ushort **)&param_4,local_274,0x100,1);
    iVar4 = local_40;
    while ((iVar8 = ParseLine((ushort **)&param_4,local_274,0x100,1), iVar8 != 0 &&
           (iVar8 = appStrcmp(local_274,(ushort *)&DAT_108cf3e0), iVar8 != 0))) {
      if ((iVar4 != 0) && (pFVar7 = (FString *)thunk_FUN_1032ad60(), pFVar7 != (FString *)0x0)) {
        FString::FString(pFVar7,local_274);
      }
    }
  } while( true );
}


// ==== 105c87bd Catch@105c87bd

void Catch_105c87bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x6c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_10914c48);
}


// ==== 105c87d1 Catch@105c87d1

void Catch_105c87d1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::SpawnPlayActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c8a50 FUN_105c8a50

void FUN_105c8a50(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 105c8a70 FUN_105c8a70

void FUN_105c8a70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fda0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x40) + 0xac))(param_1,param_2,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 105c8ad0 Catch@105c8ad0

void Catch_105c8ad0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c8ae4 Catch@105c8ae4

void Catch_105c8ae4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevelBase::NotifyProgress");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c8b30 FUN_105c8b30

void FUN_105c8b30(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fdb0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UModel::ShrinkModel(*(UModel **)(in_ECX + 0xc0));
  ExceptionList = local_10;
  return;
}


// ==== 105c8b7b Catch@105c8b7b

void Catch_105c8b7b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c8b8f Catch@105c8b8f

void Catch_105c8b8f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::Shrink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c8bd0 FUN_105c8bd0

void FUN_105c8bd0(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fdc0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Modify(in_ECX);
  UModel::Modify(*(UModel **)(in_ECX + 0xc0),0);
  ExceptionList = local_10;
  return;
}


// ==== 105c8c27 Catch@105c8c27

void Catch_105c8c27(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c8c3b Catch@105c8c3b

void Catch_105c8c3b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::Modify");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c8c80 FUN_105c8c80

undefined4 FUN_105c8c80(ushort *param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fdd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0x70) != 0) &&
     (ExceptionList = &local_10,
     iVar1 = (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x70) + 0x34))(param_1,param_2),
     iVar1 != 0)) {
    ExceptionList = local_10;
    return 1;
  }
  if ((*(int *)(in_ECX + 0xbc) != 0) &&
     (iVar1 = (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0xbc) + 0x34))(param_1,param_2),
     iVar1 != 0)) {
    ExceptionList = local_10;
    return 1;
  }
  iVar1 = ParseCommand(&param_1,(ushort *)L"SHOWEXTENTLINECHECK");
  if (iVar1 == 0) {
    iVar1 = ParseCommand(&param_1,(ushort *)L"SHOWLINECHECK");
    if (iVar1 == 0) {
      iVar1 = ParseCommand(&param_1,(ushort *)L"SHOWPOINTCHECK");
      if (iVar1 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      *(uint *)(in_ECX + 0x118c) = (uint)(*(int *)(in_ECX + 0x118c) == 0);
    }
    else {
      *(uint *)(in_ECX + 0x1184) = (uint)(*(int *)(in_ECX + 0x1184) == 0);
    }
  }
  else {
    *(uint *)(in_ECX + 0x1188) = (uint)(*(int *)(in_ECX + 0x1188) == 0);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105c8d85 Catch@105c8d85

void Catch_105c8d85(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c8d99 Catch@105c8d99

void Catch_105c8d99(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::Exec");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c8e10 FUN_105c8e10

undefined4 FUN_105c8e10(void)

{
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x70) == 0) || (*(int *)(*(int *)(in_ECX + 0x70) + 0x44) == 0)) &&
     ((*(int *)(in_ECX + 0xbc) == 0 || (*(int *)(*(int *)(in_ECX + 0xbc) + 0x44) == 0)))) {
    return 1;
  }
  return 0;
}


// ==== 105c8e40 FUN_105c8e40

void FUN_105c8e40(int *param_1)

{
  undefined1 *puVar1;
  FString *this;
  int in_ECX;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081fde9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffcc;
  if (*(int *)(in_ECX + 0x3c) == 0) {
    ExceptionList = &local_10;
    appFailAssert("NetDriver!=NULL",".\\UnLevel.cpp",0x3ab);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if (*(int *)(*(int *)(in_ECX + 0x3c) + 0x44) != 0) {
    appFailAssert("NetDriver->ServerConnection==NULL",".\\UnLevel.cpp",0x3ac);
  }
  if (*(int *)GLog_exref != 0) {
    this = (FString *)(**(code **)(*param_1 + 0x6c))(local_28);
    local_8._0_1_ = 1;
    FString::operator*(this);
    appTimestamp();
    UObject::GetName((UObject *)(in_ECX + -0x34));
    FOutputDevice::Logf2
              (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x313);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 105c8f22 Catch@105c8f22

void Catch_105c8f22(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c8f36 Catch@105c8f36

void Catch_105c8f36(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::NotifyAcceptedConnection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c8fa0 FUN_105c8fa0

undefined4 FUN_105c8fa0(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fe00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == 0) {
    ExceptionList = &local_10;
    appFailAssert("Channel",".\\UnLevel.cpp",0x3b9);
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    appFailAssert("Channel->Connection",".\\UnLevel.cpp",0x3ba);
  }
  if (*(int *)(*(int *)(param_1 + 0x34) + 0x74) == 0) {
    appFailAssert("Channel->Connection->Driver",".\\UnLevel.cpp",0x3bb);
  }
  if (*(int *)(*(int *)(*(FOutputDevice **)(param_1 + 0x34) + 0x74) + 0x44) == 0) {
    if ((*(int *)(param_1 + 0x40) == 0) && (*(int *)(param_1 + 0x50) == 1)) {
      if (*(int *)GLog_exref != 0) {
        UObject::GetFullName((UObject *)(in_ECX + -0x34),(ushort *)0x0);
        FOutputDevice::Logf2
                  (*(FOutputDevice **)(param_1 + 0x40),*(EName *)GLog_exref,(ushort *)0x304);
      }
    }
    else {
      if (*(int *)(param_1 + 0x50) != 3) {
        if (*(int *)GLog_exref == 0) {
          ExceptionList = local_10;
          return 0;
        }
        UObject::GetFullName((UObject *)(in_ECX + -0x34),(ushort *)0x0);
        FOutputDevice::Logf2
                  (*(FOutputDevice **)(param_1 + 0x50),*(EName *)GLog_exref,(ushort *)0x304);
        ExceptionList = local_10;
        return 0;
      }
      if (*(int *)GLog_exref != 0) {
        UObject::GetFullName((UObject *)(in_ECX + -0x34),(ushort *)0x0);
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,
                   (ushort *)0x304);
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  else if (*(int *)(param_1 + 0x50) != 2) {
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(*(FOutputDevice **)(param_1 + 0x34),*(EName *)GLog_exref,(ushort *)0x304)
      ;
    }
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105c915e Catch@105c915e

void Catch_105c915e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c9172 Catch@105c9172

void Catch_105c9172(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::NotifyAcceptingChannel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c9210 FUN_105c9210

void FUN_105c9210(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 105c9230 FUN_105c9230

void FUN_105c9230(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fe10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  ExceptionList = local_10;
  return;
}


// ==== 105c9288 Catch@105c9288

void Catch_105c9288(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c929c Catch@105c929c

void Catch_105c929c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::NotifyReceivingFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c92e0 FUN_105c92e0

undefined4 FUN_105c92e0(void)

{
  FOutputDevice *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fe20;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(*(int *)(in_ECX + 0x3c) + 0x44) != 0) {
    if (*(int *)GLog_exref != 0) {
      ExceptionList = &local_10;
      FOutputDevice::Logf2
                (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x304)
      ;
    }
    ExceptionList = local_10;
    return 0;
  }
  if (*(int *)GLog_exref != 0) {
    ExceptionList = &local_10;
    FOutputDevice::Logf2(in_ECX,*(EName *)GLog_exref,(ushort *)0x304);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105c9379 Catch@105c9379

void Catch_105c9379(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c938d Catch@105c938d

void Catch_105c938d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::NotifySendingFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c93e0 FUN_105c93e0

void FUN_105c93e0(int param_1)

{
  appSystemTime((int *)(param_1 + 0x4c0),(int *)(param_1 + 0x4c4),(int *)(param_1 + 0x4cc),
                (int *)(param_1 + 0x4c8),(int *)(param_1 + 0x4d0),(int *)(param_1 + 0x4d4),
                (int *)(param_1 + 0x4d8),(int *)(param_1 + 0x4dc));
  return;
}


// ==== 105c9440 FUN_105c9440

float10 FUN_105c9440(int param_1,int param_2)

{
  uint uVar1;
  int in_ECX;
  double dVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fe30;
  local_10 = ExceptionList;
  local_8 = 0;
  uVar1 = (uint)*(byte *)(param_1 * 0x40 + param_2 + 0x144 + in_ECX);
  ExceptionList = &local_10;
  dVar2 = appPow(0.85,(double)(uVar1 * uVar1));
  ExceptionList = local_10;
  return (float10)(float)dVar2;
}


// ==== 105c94b8 Catch@105c94b8

void Catch_105c94b8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c94cc Catch@105c94cc

void Catch_105c94cc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::CalculateRadiusMultiplier");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c9520 FUN_105c9520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_105c9520(int param_1)

{
  UObject *in_ECX;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fe40;
  local_10 = ExceptionList;
  iVar1 = 0;
  local_8 = 0;
  if (*(int *)GImportCount_exref != 0) {
    ExceptionList = &local_10;
    fVar2 = (float10)thunk_FUN_104da1f0();
    do {
      if (*(int *)(GObjLoaders_exref + 4) <= param_1) {
        *(undefined4 *)(in_ECX + 0x1190) = 5;
        UObject::ClearFlags(in_ECX,0x200);
        *(undefined4 *)GImportCount_exref = 0;
        ExceptionList = local_10;
        return 0;
      }
      param_1 = param_1 + 1;
      iVar1 = iVar1 + 1;
      fVar3 = (float10)thunk_FUN_104da1f0();
    } while ((fVar3 <= (float10)_DAT_10b14160 + (float10)(double)fVar2) || (iVar1 < 2));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105c95e7 Catch@105c95e7

void Catch_105c95e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105c95fb Catch@105c95fb

void Catch_105c95fb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::LoadActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c96a0 FUN_105c96a0

void FUN_105c96a0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081fe59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 105c97a0 FUN_105c97a0

void FUN_105c97a0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081fe88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0x10));
  ExceptionList = local_c;
  return;
}


// ==== 105c9810 FUN_105c9810

void FUN_105c9810(FArchive *param_1,int param_2)

{
  FArchive *pFVar1;
  FString *pFVar2;
  
  pFVar2 = (FString *)(param_2 + 0x10);
  pFVar1 = operator<<(param_1,(FString *)(param_2 + 4));
  operator<<(pFVar1,pFVar2);
  return;
}


// ==== 105c9850 FUN_105c9850

void FUN_105c9850(double param_1,double param_2,double param_3)

{
  if ((param_2 <= param_1) && (param_3 <= param_1)) {
    return;
  }
  return;
}


// ==== 105c9880 FUN_105c9880

int FUN_105c9880(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x2c);
  return iVar1 * 0x2c + *(int *)param_2;
}


// ==== 105c98a0 FUN_105c98a0

void FUN_105c98a0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 105c98c0 FUN_105c98c0

undefined4 FUN_105c98c0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fea0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_10330040(param_1,param_2,param_2 + 4,param_2 + 8);
  uVar1 = thunk_FUN_1033e5e0(uVar1);
  thunk_FUN_1033e5e0(uVar1);
  uVar1 = thunk_FUN_10330040(param_1,param_2 + 0xc,param_2 + 0x10);
  thunk_FUN_10330040(uVar1);
  uVar1 = thunk_FUN_10330040(param_1,param_2 + 0x14,param_2 + 0x1c);
  thunk_FUN_1032ffe0(uVar1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 105c9959 Catch@105c9959

void Catch_105c9959(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c996d Catch@105c996d

void Catch_105c996d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FReachSpec<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c99c0 FUN_105c99c0

void FUN_105c99c0(byte param_1)

{
  FPackageInfo *in_ECX;
  
  FPackageInfo::~FPackageInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 105c9a00 FUN_105c9a00

void FUN_105c9a00(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(*(int *)(in_ECX + 0x74) + 0x54) != 0) {
    iVar3 = 0;
    while( true ) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x74) + 0x54);
      if (*(int *)(iVar1 + 0x3c) <= iVar3) break;
      iVar1 = *(int *)(*(int *)(iVar1 + 0x38) + iVar3 * 4);
      iVar2 = *(int *)(iVar1 + 0x3c);
      if (*(int *)(iVar2 + 0xe4) == in_ECX) {
        *(undefined4 *)(iVar1 + 0x18c) = *(undefined4 *)(iVar2 + 0x5bc);
        *(undefined4 *)(iVar1 + 400) = *(undefined4 *)(iVar2 + 0x3c8);
        *(undefined4 *)(iVar1 + 0x194) = *(undefined4 *)(iVar2 + 0x5ac);
        *(undefined4 *)(iVar1 + 0x198) = *(undefined4 *)(*(int *)(iVar1 + 0x3c) + 0x5b8);
        *(undefined4 *)(iVar1 + 0x19c) = *(undefined4 *)(*(int *)(iVar1 + 0x3c) + 0x5b0);
        *(undefined4 *)(iVar1 + 0x1a0) = *(undefined4 *)(*(int *)(iVar1 + 0x3c) + 0x5b4);
        *(undefined4 *)(iVar1 + 0x3c) = 0;
      }
      iVar3 = iVar3 + 1;
    }
  }
  return;
}


// ==== 105c9ac2 Catch@105c9ac2

void Catch_105c9ac2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105c9ad6 Catch@105c9ad6

void Catch_105c9ad6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::RememberActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c9b30 FUN_105c9b30

uint FUN_105c9b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  byte bVar1;
  uint uVar2;
  int *in_ECX;
  undefined1 local_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fec0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  local_2c = 0;
  if ((param_8 != 0) && (param_8 != 2)) {
    if (param_8 != 3) {
      return 1;
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &local_10;
    local_14 = &stack0xffffff9c;
    uVar2 = (**(code **)(*in_ECX + 0xe4))(local_58,param_7,&param_1,&param_4,0x286,0,0,0);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = &local_10;
  bVar1 = UModel::FastLineCheck
                    ((UModel *)in_ECX[0x30],param_1,param_2,param_3,param_4,param_5,param_6);
  ExceptionList = local_10;
  return (uint)bVar1;
}


// ==== 105c9c2d Catch@105c9c2d

void Catch_105c9c2d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105c9c41 Catch@105c9c41

void Catch_105c9c41(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::IsAudibleAt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c9cb0 FUN_105c9cb0

int FUN_105c9cb0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x3c) <= iVar3) {
      return 0;
    }
    piVar1 = (int *)(*(int *)(in_ECX + 0x38) + iVar3 * 4);
    if ((*piVar1 != 0) && (iVar2 = *piVar1, *(int *)(iVar2 + 0x60) == param_1)) break;
    iVar3 = iVar3 + 1;
  }
  return iVar2;
}


// ==== 105c9d11 Catch@105c9d11

void Catch_105c9d11(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105c9d25 Catch@105c9d25

void Catch_105c9d25(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::FindActorWithCreatureID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c9d70 FUN_105c9d70

void FUN_105c9d70(void)

{
  uint *puVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 2;
  if (2 < *(int *)(in_ECX + 0x3c)) {
    do {
      if ((*(int *)(*(int *)(in_ECX + 0x38) + iVar3 * 4) != 0) &&
         ((*(byte *)(*(int *)(*(int *)(in_ECX + 0x38) + iVar3 * 4) + 100) & 0x80) == 0)) {
        puVar1 = (uint *)(*(int *)(*(int *)(in_ECX + 0x38) + iVar3 * 4) + 0x5c);
        *puVar1 = *puVar1 | 0x40;
        iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x38) + iVar3 * 4) + 0x78))();
        if ((iVar2 != 0) &&
           ((iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x38) + iVar3 * 4) + 0x78))(),
            *(char *)(iVar2 + 0x3bc) != '\0' &&
            (iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x38) + iVar3 * 4) + 0x78))(),
            (*(byte *)(iVar2 + 0x3d0) & 1) != 0)))) {
          AActor::ClearRenderData(*(AActor **)(*(int *)(in_ECX + 0x38) + iVar3 * 4));
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x3c));
  }
  return;
}


// ==== 105c9e20 FUN_105c9e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_105c9e20(int param_1)

{
  FArray *this;
  UObject *this_00;
  int iVar1;
  void *_Src;
  ulong uVar2;
  ULinkerLoad *pUVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  float10 fVar6;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fee0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  fVar5 = (float10)thunk_FUN_104da1f0();
  local_18 = 0;
  do {
    if (*(int *)(in_ECX + 0x119c) <= param_1) {
      *(undefined4 *)(in_ECX + 0x1190) = 2;
      ExceptionList = local_10;
      return 0;
    }
    this = (FArray *)(in_ECX + 0x1198);
    this_00 = *(UObject **)(*(int *)this + param_1 * 4);
    uVar2 = UObject::GetFlags(this_00);
    if ((uVar2 & 0x200) != 0) {
      pUVar3 = UObject::GetLinker(this_00);
      if (pUVar3 == (ULinkerLoad *)0x0) {
        appFailAssert("Obj->GetLinker()",".\\UnLevel.cpp",0x55f);
      }
      pUVar3 = UObject::GetLinker(this_00);
      (**(code **)(*(int *)(pUVar3 + 0xc0) + 0x10))(this_00);
      iVar1 = *(int *)(GObjLoaded_exref + 4);
      _Src = *(void **)GObjLoaded_exref;
      iVar4 = FArray::Add(this,iVar1,4);
      _memcpy((void *)(*(int *)this + iVar4 * 4),_Src,iVar1 * 4);
      FArray::Empty((FArray *)GObjLoaded_exref,4,0);
    }
    param_1 = param_1 + 1;
    local_18 = local_18 + 1;
    fVar6 = (float10)thunk_FUN_104da1f0();
  } while ((fVar6 <= (float10)_DAT_10b14160 + (float10)(double)fVar5) || (local_18 < 1));
  ExceptionList = local_10;
  return param_1;
}


// ==== 105c9f5a Catch@105c9f5a

void Catch_105c9f5a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105c9f6e Catch@105c9f6e

void Catch_105c9f6e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::PreloadObjects");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105c9ff0 FUN_105c9ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_105c9ff0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081fef0;
  local_10 = ExceptionList;
  iVar2 = 0;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x119c);
  ExceptionList = &local_10;
  fVar3 = (float10)thunk_FUN_104da1f0();
  do {
    if (*(int *)(in_ECX + 0x119c) <= param_1) {
      if (*(int *)(in_ECX + 0x119c) != iVar1) {
        appFailAssert("arrayObjectLoaded.Num()==OriginalNum",".\\UnLevel.cpp",0x57a);
      }
      FArray::Empty((FArray *)(in_ECX + 0x1198),4,0);
      *(undefined4 *)(in_ECX + 0x1190) = 3;
      ExceptionList = local_10;
      return 0;
    }
    UObject::ConditionalPostLoad(*(UObject **)(*(int *)(in_ECX + 0x1198) + param_1 * 4));
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    fVar4 = (float10)thunk_FUN_104da1f0();
  } while ((fVar4 <= (float10)_DAT_10b14160 + (float10)(double)fVar3) || (iVar2 < 1));
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ca0c5 Catch@105ca0c5

void Catch_105ca0c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105ca0d9 Catch@105ca0d9

void Catch_105ca0d9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::PostloadObjects");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ca140 FUN_105ca140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_105ca140(int param_1)

{
  int iVar1;
  ULinkerLoad *pUVar2;
  ulong uVar3;
  UObject *in_ECX;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ff00;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GImportCount_exref != 0) {
    ExceptionList = &local_10;
    fVar5 = (float10)thunk_FUN_104da1f0();
    local_18 = 0;
    do {
      if (*(int *)(GObjLoaders_exref + 4) <= param_1) {
        *(undefined4 *)(in_ECX + 0x1190) = 0;
        UObject::ClearFlags(in_ECX,0x200);
        *(undefined4 *)GImportCount_exref = 0;
        ExceptionList = local_10;
        return 0;
      }
      for (iVar4 = 0; pUVar2 = UObject::GetLoader(param_1), iVar4 < *(int *)(pUVar2 + 0x88);
          iVar4 = iVar4 + 1) {
        pUVar2 = UObject::GetLoader(param_1);
        iVar1 = *(int *)(pUVar2 + 0x84) + iVar4 * 0x1c;
        if ((*(int *)(iVar1 + 0x10) != 0) &&
           (uVar3 = UObject::GetFlags(*(UObject **)(iVar1 + 0x10)), (uVar3 & 0x4000000) == 0)) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
      }
      param_1 = param_1 + 1;
      local_18 = local_18 + 1;
      fVar6 = (float10)thunk_FUN_104da1f0();
    } while ((fVar6 <= (float10)_DAT_10b14160 + (float10)(double)fVar5) || (local_18 < 2));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ca269 Catch@105ca269

void Catch_105ca269(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105ca27d Catch@105ca27d

void Catch_105ca27d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::LoadCleanup");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ca2f0 FUN_105ca2f0

undefined4 FUN_105ca2f0(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(*(int *)(in_ECX + 0xc0) + 0x138);
  while ((*piVar2 == 0 || (*(int *)(*piVar2 + 0x3e0) < 1))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 6;
    if (0x3f < iVar1) {
      return 0;
    }
  }
  return **(undefined4 **)(*(int *)(*(int *)(in_ECX + 0xc0) + (iVar1 * 3 + 0x27) * 8) + 0x3dc);
}


// ==== 105ca340 FUN_105ca340

undefined4 FUN_105ca340(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x11c0)) {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x11bc) + -4 + *(int *)(in_ECX + 0x11c0) * 4);
  }
  return uVar1;
}


// ==== 105ca390 Catch@105ca390

void Catch_105ca390(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105ca3a4 Catch@105ca3a4

void Catch_105ca3a4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::GetRemovalSWLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ca3f0 FUN_105ca3f0

void FUN_105ca3f0(undefined4 *param_1)

{
  int in_ECX;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_4 [4];
  
  puVar2 = local_4;
  uVar1 = param_1[1];
  UGameEngine::GetSWMapXY
            (*(UGameEngine **)(in_ECX + 0x74),*param_1,uVar1,param_1[2],puVar2,&param_1);
  thunk_FUN_10598d90(uVar1,puVar2);
  return;
}


// ==== 105ca470 FUN_105ca470

ATerrainInfo * FUN_105ca470(FVector *param_1)

{
  ULevel *this;
  ATerrainInfo *pAVar1;
  ULevel *in_ECX;
  
  this = ULevel::GetCurrentSWLevel(in_ECX,param_1);
  if (this != (ULevel *)0x0) {
    pAVar1 = ULevel::GetTerrainInfo(this);
    return pAVar1;
  }
  return (ATerrainInfo *)0x0;
}


// ==== 105ca4a0 FUN_105ca4a0

int FUN_105ca4a0(int *param_1)

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


// ==== 105ca4d0 FUN_105ca4d0

undefined4 FUN_105ca4d0(int *param_1,int *param_2)

{
  int *in_ECX;
  int iVar1;
  
  *param_2 = 0;
  if (0 < in_ECX[1]) {
    do {
      if (*(int *)(*in_ECX + *param_2 * 4) == *param_1) {
        return 1;
      }
      iVar1 = *param_2 + 1;
      *param_2 = iVar1;
    } while (iVar1 < in_ECX[1]);
  }
  return 0;
}


// ==== 105ca550 FUN_105ca550

FArchive * FUN_105ca550(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ff20;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_10354a70(param_1,*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_10371590(4,param_2);
      thunk_FUN_10354a70(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 105ca620 Catch@105ca620

void Catch_105ca620(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105ca634 Catch@105ca634

void Catch_105ca634(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ca760 FUN_105ca760

UObject * FUN_105ca760(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ADefaultPhysicsVolume::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 105ca790 FUN_105ca790

void FUN_105ca790(int param_1,int param_2)

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
    iVar1 = param_1 * 0x44;
    iVar2 = iVar2 - param_1;
    do {
      FPackageInfo::~FPackageInfo((FPackageInfo *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x44;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x44);
  return;
}


// ==== 105ca860 FUN_105ca860

void FUN_105ca860(void)

{
  int iVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ff30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int **)(in_ECX + 0x70) != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x70) + 0xc))(1);
    *(undefined4 *)(in_ECX + 0x70) = 0;
  }
  if (*(int **)(in_ECX + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xbc) + 0xc))(1);
    *(undefined4 *)(in_ECX + 0xbc) = 0;
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x5c); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x58),4,0);
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x68); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 100),4,0);
  UObject::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 105ca90a Catch@105ca90a

void Catch_105ca90a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105ca91e Catch@105ca91e

void Catch_105ca91e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevelBase::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105ca980 FUN_105ca980

void FUN_105ca980(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 != 0) {
    iVar1 = FArray::Add((FArray *)(in_ECX + 0x58),1,4);
    *(int *)(*(int *)(in_ECX + 0x58) + iVar1 * 4) = param_1;
  }
  return;
}


// ==== 105ca9b0 FUN_105ca9b0

void FUN_105ca9b0(int param_1)

{
  FArray *this;
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  if (param_1 != 0) {
    this = (FArray *)(in_ECX + 100);
    iVar1 = 0;
    if (0 < *(int *)(in_ECX + 0x68)) {
      piVar2 = *(int **)this;
      do {
        if (*piVar2 == param_1) {
          if (iVar1 != -1) {
            return;
          }
          break;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < *(int *)(in_ECX + 0x68));
    }
    iVar1 = FArray::Add(this,1,4);
    *(int *)(*(int *)this + iVar1 * 4) = param_1;
  }
  return;
}


// ==== 105caa10 FUN_105caa10

void FUN_105caa10(ALevelInfo param_1)

{
  int *piVar1;
  ALevelInfo *pAVar2;
  ULevel *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ff40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1064f8c0();
  pAVar2 = ULevel::GetLevelInfo(in_ECX);
  pAVar2[0x558] = param_1;
  pAVar2 = ULevel::GetLevelInfo(in_ECX);
  if (*(int *)(pAVar2 + 0x614) != 0) {
    pAVar2 = ULevel::GetLevelInfo(in_ECX);
    AGameInfo::eventDetailChange(*(AGameInfo **)(pAVar2 + 0x614));
  }
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x3c); iVar3 = iVar3 + 1) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x38) + iVar3 * 4);
    if (*piVar1 != 0) {
      *(undefined1 *)(*piVar1 + 0x50) = 0;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105caaab Catch@105caaab

void Catch_105caaab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 105caabf Catch@105caabf

void Catch_105caabf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::DetailChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cab10 FUN_105cab10

void FUN_105cab10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  APhysicsVolume *pAVar3;
  ALevelInfo *this;
  APhysicsVolume *pAVar4;
  FCollisionHashBase *pFVar5;
  ULevel *in_ECX;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ff50;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)GIsEditor_exref != 0) {
    ExceptionList = &local_10;
    for (iVar6 = 0; iVar6 < *(int *)(in_ECX + 0x3c); iVar6 = iVar6 + 1) {
      pAVar3 = (APhysicsVolume *)
               thunk_FUN_105ca760(*(undefined4 *)(*(int *)(in_ECX + 0x38) + iVar6 * 4));
      if (pAVar3 != (APhysicsVolume *)0x0) {
        this = ULevel::GetLevelInfo(in_ECX);
        pAVar4 = ALevelInfo::GetDefaultPhysicsVolume(this);
        if (pAVar3 != pAVar4) {
          (**(code **)(*(int *)in_ECX + 0xac))(pAVar3,0);
        }
      }
    }
  }
  if (param_1 == 0) {
    if (*(int *)(in_ECX + 0x120) == 0) {
      ExceptionList = local_10;
      return;
    }
  }
  else if (*(int *)(in_ECX + 0x120) == 0) {
    local_8 = CONCAT31(local_8._1_3_,1);
    pFVar5 = GNewCollisionHash();
    *(FCollisionHashBase **)(in_ECX + 0x120) = pFVar5;
    for (iVar6 = 0; iVar6 < *(int *)(in_ECX + 0x3c); iVar6 = iVar6 + 1) {
      piVar1 = (int *)(*(int *)(in_ECX + 0x38) + iVar6 * 4);
      if ((*piVar1 != 0) && (iVar2 = *piVar1, (*(byte *)(iVar2 + 0x2f8) & 1) != 0)) {
        (**(code **)(**(int **)(in_ECX + 0x120) + 8))(iVar2);
      }
    }
    ExceptionList = local_10;
    return;
  }
  if (param_1 == 0) {
    local_8 = CONCAT31(local_8._1_3_,3);
    if (param_2 == 0) {
      for (iVar6 = 0; iVar6 < *(int *)(in_ECX + 0x3c); iVar6 = iVar6 + 1) {
        piVar1 = (int *)(*(int *)(in_ECX + 0x38) + iVar6 * 4);
        if ((*piVar1 != 0) && (iVar2 = *piVar1, (*(byte *)(iVar2 + 0x2f8) & 1) != 0)) {
          (**(code **)(**(int **)(in_ECX + 0x120) + 0xc))(iVar2);
        }
      }
    }
    if (*(undefined4 **)(in_ECX + 0x120) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x120))(1);
    }
    *(undefined4 *)(in_ECX + 0x120) = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105cabe0 Catch@105cabe0

void Catch_105cabe0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 105cabf4 Catch@105cabf4

void Catch_105cabf4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"StartCollision");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cac8e Catch@105cac8e

void Catch_105cac8e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 105caca2 Catch@105caca2

void Catch_105caca2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"EndCollision");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cacac Catch@105cacac

void Catch_105cacac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 105cacc0 Catch@105cacc0

void Catch_105cacc0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::SetActorCollision");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cad40 FUN_105cad40

void FUN_105cad40(void)

{
  int *piVar1;
  UObject *this;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  UObject *pUVar5;
  int *in_ECX;
  int iVar6;
  int local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ff60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)GIsEditor_exref == 0) {
    ExceptionList = &local_10;
    appFailAssert("GIsEditor",".\\UnLevel.cpp",0x235);
  }
  thunk_FUN_1064f8c0();
  for (iVar6 = 0; iVar6 < in_ECX[0xf]; iVar6 = iVar6 + 1) {
    piVar1 = (int *)(in_ECX[0xe] + iVar6 * 4);
    if (*piVar1 != 0) {
      iVar2 = (**(code **)(*(int *)*piVar1 + 0x2ec))();
      if ((iVar2 != 0) && (iVar2 = *(int *)(in_ECX[0xe] + iVar6 * 4), *(int *)(iVar2 + 0x560) != 0))
      {
        *(undefined4 *)(iVar2 + 0x560) = 0;
      }
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  for (local_1c = 0; local_1c < *(int *)(*(int *)(in_ECX[0x1d] + 0x54) + 0x3c);
      local_1c = local_1c + 1) {
    pUVar5 = *(UObject **)(*(int *)(*(int *)(in_ECX[0x1d] + 0x54) + 0x38) + local_1c * 4);
    if (*(int *)(pUVar5 + 0x3c) == 0) {
      for (iVar6 = 0; iVar6 < in_ECX[0xf]; iVar6 = iVar6 + 1) {
        this = *(UObject **)(in_ECX[0xe] + iVar6 * 4);
        if (this != (UObject *)0x0) {
          iVar2 = UObject::IsA(this,&ACamera::PrivateStaticClass);
          if (iVar2 != 0) {
            puVar3 = UObject::GetName(pUVar5);
            puVar4 = FName::operator*((FName *)(this + 0x10c));
            iVar2 = appStricmp(puVar4,puVar3);
            if (iVar2 == 0) {
              if (*(int *)GLog_exref != 0) {
                UObject::GetName(pUVar5);
                FOutputDevice::Logf2
                          (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,
                           (ushort *)0x2f8);
              }
              *(UObject **)(pUVar5 + 0x3c) = this;
              *(UObject **)(this + 0x560) = pUVar5;
              break;
            }
          }
        }
      }
    }
  }
  local_8 = 3;
  iVar6 = 0;
  while( true ) {
    if (*(int *)(*(int *)(in_ECX[0x1d] + 0x54) + 0x3c) <= iVar6) break;
    iVar2 = *(int *)(*(int *)(*(int *)(in_ECX[0x1d] + 0x54) + 0x38) + iVar6 * 4);
    if (*(int *)(iVar2 + 0x3c) == 0) {
      (**(code **)(*in_ECX + 200))(iVar2);
    }
    iVar6 = iVar6 + 1;
  }
  local_8 = 5;
  local_20 = 0;
LAB_105caee4:
  do {
    if (in_ECX[0xf] <= local_20) {
      ExceptionList = local_10;
      return;
    }
    pUVar5 = (UObject *)thunk_FUN_105bda80(*(undefined4 *)(in_ECX[0xe] + local_20 * 4));
    if (pUVar5 != (UObject *)0x0) {
      iVar6 = thunk_FUN_1032bbf0(*(undefined4 *)(pUVar5 + 0x560));
      if (iVar6 != 0) {
        UObject::ClearFlags(pUVar5,1);
        *(undefined4 *)(*(int *)(iVar6 + 0x3c) + 0x5bc) = *(undefined4 *)(iVar6 + 0x18c);
        *(undefined4 *)(*(int *)(iVar6 + 0x3c) + 0x3c8) = *(undefined4 *)(iVar6 + 400);
        *(undefined4 *)(*(int *)(iVar6 + 0x3c) + 0x5ac) = *(undefined4 *)(iVar6 + 0x194);
        *(undefined4 *)(*(int *)(iVar6 + 0x3c) + 0x5b8) = *(undefined4 *)(iVar6 + 0x198);
        *(undefined4 *)(*(int *)(iVar6 + 0x3c) + 0x5b0) = *(undefined4 *)(iVar6 + 0x19c);
        *(undefined4 *)(*(int *)(iVar6 + 0x3c) + 0x5b4) = *(undefined4 *)(iVar6 + 0x1a0);
        local_20 = local_20 + 1;
        goto LAB_105caee4;
      }
      (**(code **)(*in_ECX + 0xac))(pUVar5,0);
    }
    local_20 = local_20 + 1;
  } while( true );
}


// ==== 105cafcb Catch@105cafcb

void Catch_105cafcb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 105cafdf Catch@105cafdf

void Catch_105cafdf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"KillViews");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105caffb Catch@105caffb

void Catch_105caffb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 105cb00f Catch@105cb00f

void Catch_105cb00f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"MatchEditorOther");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cb016 Catch@105cb016

void Catch_105cb016(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 105cb027 Catch@105cb027

void Catch_105cb027(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"MatchIdentical");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cb02e Catch@105cb02e

void Catch_105cb02e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 105cb03f Catch@105cb03f

void Catch_105cb03f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::ReconcileActors");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cb110 FUN_105cb110

undefined4 FUN_105cb110(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FBox *this;
  ALevelInfo *pAVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ULevel *in_ECX;
  FRotator local_d8 [12];
  undefined4 local_cc;
  undefined4 local_c0;
  undefined1 local_b4 [20];
  undefined1 local_a0 [12];
  undefined1 local_94 [4];
  undefined4 local_90;
  undefined4 local_84 [3];
  undefined1 *local_78;
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [4];
  ALevelInfo *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  FVector local_54 [32];
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
  puStack_70 = &LAB_1081ff70;
  local_74 = ExceptionList;
  local_78 = &stack0xffffff1c;
  local_6c = 0;
  ExceptionList = &local_74;
  puVar2 = &stack0xffffff1c;
  if (param_1 == 0) {
    ExceptionList = &local_74;
    appFailAssert("InActor",".\\UnLevel.cpp",0x305);
    puVar2 = local_78;
  }
  local_78 = puVar2;
  local_cc = 0;
  FRotator::FRotator(local_d8,0,0,0);
  local_84[0] = 0;
  local_14 = *(undefined4 *)(param_1 + 0x2f0);
  local_18 = *(float *)(param_1 + 0x2f0);
  local_c = *(undefined4 *)(param_1 + 0x2f4);
  local_10 = local_18;
  local_8 = (float)local_c;
  iVar3 = FVector::IsZero((FVector *)&local_14);
  if (((iVar3 != 0) && (*(char *)(param_1 + 0x35) == '\b')) &&
     (piVar1 = *(int **)(param_1 + 0x38), piVar1 != (int *)0x0)) {
    this = (FBox *)(**(code **)(*piVar1 + 0x70))(local_a0,0,local_84);
    iVar3 = FBox::GetExtent(this);
    local_8 = *(float *)(iVar3 + 8);
    iVar3 = (**(code **)(*piVar1 + 0x74))(local_94,0);
    local_28 = *(undefined4 *)(iVar3 + 0xc);
    local_20 = local_8;
    local_c = local_8;
    local_24 = local_28;
    local_14 = local_28;
    local_10 = local_28;
  }
  thunk_FUN_104419f0(0x3f800000,0);
  local_c0 = 0;
  local_90 = 0;
  local_34 = *(float *)(param_1 + 0x1bc) + 0.0;
  local_30 = *(float *)(param_1 + 0x1c0) + 0.0;
  local_2c = *(float *)(param_1 + 0x1c4) - 720896.0;
  local_18 = local_2c;
  local_8 = local_30;
  iVar3 = (**(code **)(*(int *)in_ECX + 0xe4))
                    (local_68,param_1,&local_34,(float *)(param_1 + 0x1bc),0x86,local_14,local_10,
                     local_c);
  if (iVar3 == 0) {
    pAVar4 = ULevel::GetLevelInfo(in_ECX);
    if (local_64 == pAVar4) {
      thunk_FUN_104419f0(0x3f800000,0);
      iVar3 = (**(code **)(**(int **)(*(int *)(local_64 + 0xe4) + 0xc0) + 0x68))
                        (local_b4,0,local_60,local_5c,local_58,local_14,local_10,local_c,0);
      if (iVar3 == 0) goto LAB_105cb32a;
    }
    (**(code **)(*(int *)in_ECX + 0xa8))(param_1,local_60,local_5c,local_58,0,0,0);
    if (param_2 != 0) {
      puVar6 = (undefined4 *)FVector::Rotation(local_54);
      *(undefined4 *)(param_1 + 0x1c8) = *puVar6;
      *(undefined4 *)(param_1 + 0x1cc) = puVar6[1];
      *(undefined4 *)(param_1 + 0x1d0) = puVar6[2];
      *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + -0x4000;
    }
    uVar5 = 1;
  }
  else {
LAB_105cb32a:
    uVar5 = 0;
  }
  ExceptionList = local_74;
  return uVar5;
}


// ==== 105cb3aa Catch@105cb3aa

void Catch_105cb3aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x4c) = *(undefined4 *)(unaff_EBP + 0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x4c,&DAT_10914c48);
}


// ==== 105cb3be Catch@105cb3be

void Catch_105cb3be(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::ToFloor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cb490 FUN_105cb490

undefined4 FUN_105cb490(FString *param_1)

{
  FString *this;
  UObject *pUVar1;
  ushort *puVar2;
  ULinkerLoad *pUVar3;
  UObject *pUVar4;
  int iVar5;
  int *piVar6;
  UClass *pUVar7;
  undefined4 *puVar8;
  ALevelInfo *pAVar9;
  UObject *in_ECX;
  int iVar10;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  FOutputDevice *pFVar11;
  wchar_t *pwVar12;
  FOutputDevice local_228 [480];
  FRotator local_48 [20];
  UObject *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_20;
  int *local_1c;
  UObject *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ff80;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdcc;
  iVar10 = 0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x70) == 0) {
    ExceptionList = &local_10;
    pUVar3 = UObject::GetLinker(in_ECX);
    if (pUVar3 != (ULinkerLoad *)0x0) {
      UObject::StaticLoadClass
                (&UNetDriver::PrivateStaticClass,(UObject *)0x0,
                 (ushort *)L"ini:Engine.Engine.NetworkDevice",(ushort *)0x0,1,(UPackageMap *)0x0);
      local_1c = (int *)&stack0xfffffdb8;
      FName::FName((FName *)&stack0xfffffdb8,0);
      UObject::GetTransientPackage();
      pUVar4 = UObject::StaticConstructObject();
      this = param_1;
      *(UObject **)(in_ECX + 0x70) = pUVar4;
      iVar5 = (**(code **)(*(int *)pUVar4 + 0x7c))();
      if (iVar5 == 0) {
        if (*(int *)GLog_exref != 0) {
          FString::operator*(this);
          FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
        }
        if (*(int **)(in_ECX + 0x70) != (int *)0x0) {
          (**(code **)(**(int **)(in_ECX + 0x70) + 0xc))();
        }
        *(undefined4 *)(in_ECX + 0x70) = 0;
        ExceptionList = local_10;
        return 0;
      }
      piVar6 = (int *)thunk_FUN_1056b1d0();
      local_1c = piVar6;
      (**(code **)(*piVar6 + 0xe0))();
      for (; local_20 = iVar10, iVar10 < piVar6[0x7d]; iVar10 = iVar10 + 1) {
        param_1 = (FString *)FString::operator*((FString *)(piVar6[0x7c] + iVar10 * 0xc));
        iVar5 = ParseToken((ushort **)&param_1,(ushort *)local_228,0xf0,1);
        if (iVar5 != 0) {
          if (*(int *)GLog_exref != 0) {
            FOutputDevice::Logf2(local_228,*(ushort **)GLog_exref);
          }
          uStack_264 = 0x105cb652;
          pUVar7 = UObject::StaticLoadClass
                             (&AActor::PrivateStaticClass,(UObject *)0x0,(ushort *)local_228,
                              (ushort *)0x0,1,(UPackageMap *)0x0);
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          iVar10 = *(int *)in_ECX;
          puVar8 = (undefined4 *)FRotator::FRotator(local_48,0,0,0);
          uStack_268 = *puVar8;
          uStack_264 = puVar8[1];
          uStack_274 = local_30;
          uStack_270 = local_2c;
          uStack_26c = local_28;
          local_18 = (UObject *)&uStack_278;
          uStack_278 = local_28;
          FName::FName((FName *)&uStack_278,0);
          local_18 = (UObject *)(**(code **)(iVar10 + 0xc0))(pUVar7);
          pUVar4 = local_18;
          while ((iVar10 = local_20, piVar6 = local_1c, pUVar4 != (UObject *)0x0 &&
                 (iVar5 = ParseToken((ushort **)&param_1,(ushort *)local_228,0xf0,1),
                 iVar10 = local_20, piVar6 = local_1c, iVar5 != 0))) {
            puVar2 = appStrchr((ushort *)local_228,0x3d);
            if (puVar2 != (ushort *)0x0) {
              *puVar2 = 0;
              UObject::GetClass(pUVar4);
              thunk_FUN_1058b610();
              while (pUVar1 = local_34, pUVar4 = local_18, local_34 != (UObject *)0x0) {
                pFVar11 = local_228;
                puVar2 = UObject::GetName(local_34);
                iVar10 = appStricmp(puVar2,(ushort *)pFVar11);
                if ((iVar10 == 0) && ((*(uint *)(pUVar1 + 0x48) & 0x4000) != 0)) {
                  (**(code **)(*(int *)pUVar1 + 0x9c))();
                }
                local_34 = *(UObject **)(pUVar1 + 0x38);
                thunk_FUN_10589890();
              }
            }
          }
        }
      }
      param_1 = (FString *)((*(int *)(*(int *)(in_ECX + 0x74) + 0x54) != 0) + 1);
      pAVar9 = ULevel::GetLevelInfo((ULevel *)in_ECX);
      pAVar9[0x5d4] = param_1._0_1_;
      iVar10 = *(int *)(in_ECX + 0x70);
      pAVar9 = ULevel::GetLevelInfo((ULevel *)in_ECX);
      *(undefined4 *)(pAVar9 + 0x638) = *(undefined4 *)(iVar10 + 0x6c);
      ExceptionList = local_10;
      return 1;
    }
    pwVar12 = L"NetListen";
  }
  else {
    pwVar12 = L"NetAlready";
    ExceptionList = &local_10;
    local_14 = &stack0xfffffdcc;
  }
  puVar2 = LocalizeError((ushort *)pwVar12,(ushort *)L"Engine",(ushort *)0x0);
  FString::operator=(param_1,puVar2);
  ExceptionList = local_10;
  return 0;
}


// ==== 105cb7db Catch@105cb7db

void Catch_105cb7db(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 105cb7ef Catch@105cb7ef

void Catch_105cb7ef(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::Listen");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cb8f0 FUN_105cb8f0

undefined4 FUN_105cb8f0(void)

{
  ALevelInfo *pAVar1;
  int iVar2;
  int in_ECX;
  ULevel *this;
  ushort *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ff90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x3c) == 0) {
    ExceptionList = &local_10;
    appFailAssert("NetDriver",".\\UnLevel.cpp",0x38f);
  }
  if (*(int *)(*(int *)(in_ECX + 0x3c) + 0x44) != 0) {
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2
                (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x304)
      ;
    }
    ExceptionList = local_10;
    return 0;
  }
  this = (ULevel *)(in_ECX + -0x34);
  puVar3 = (ushort *)&DAT_10853d94;
  pAVar1 = ULevel::GetLevelInfo(this);
  iVar2 = FString::operator!=((FString *)(pAVar1 + 0x628),puVar3);
  if (iVar2 != 0) {
    if (*(int *)GLog_exref != 0) {
      UObject::GetName((UObject *)this);
      FOutputDevice::Logf2
                (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x304)
      ;
    }
    ExceptionList = local_10;
    return 2;
  }
  if (*(int *)GLog_exref != 0) {
    UObject::GetName((UObject *)this);
    FOutputDevice::Logf2
              (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x304);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 105cba19 Catch@105cba19

void Catch_105cba19(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105cba2d Catch@105cba2d

void Catch_105cba2d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::NotifyAcceptingConnection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cbaa0 FUN_105cbaa0

void FUN_105cbaa0(UNetConnection *param_1,short *param_2)

{
  UObject *pUVar1;
  ULevel *in_ECX;
  FOutputDevice *this;
  FOutputDevice *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ffa0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UPackageMap::Copy(*(UPackageMap **)(param_1 + 0xc0),
                    *(UPackageMap **)(*(int *)(param_1 + 0x74) + 0x4c));
  UNetConnection::SendPackageMap(param_1);
  if (*param_2 == 0) {
    ULevel::GetLevelInfo(in_ECX);
    pUVar1 = UObject::GetOuter((UObject *)in_ECX);
    UObject::GetName(pUVar1);
    FOutputDevice::Logf(this_00,(ushort *)(param_1 + 0x34));
  }
  else {
    ULevel::GetLevelInfo(in_ECX);
    pUVar1 = UObject::GetOuter((UObject *)in_ECX);
    UObject::GetName(pUVar1);
    FOutputDevice::Logf(this,(ushort *)(param_1 + 0x34));
  }
  (**(code **)(*(int *)param_1 + 0x84))();
  ExceptionList = local_10;
  return;
}


// ==== 105cbb7f Catch@105cbb7f

void Catch_105cbb7f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105cbb93 Catch@105cbb93

void Catch_105cbb93(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::WelcomePlayer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cbc00 FUN_105cbc00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbc00(void)

{
  int iVar1;
  ULevel *in_ECX;
  float10 fVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ffb0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  fVar2 = (float10)thunk_FUN_105c9850((double)(*(float *)(*(int *)(in_ECX + 0x74) + 600) * 0.1),
                                      0x3f91111111111111,0x3fa1111111111111);
  _DAT_10b14160 = (double)fVar2;
  switch(*(undefined4 *)(in_ECX + 0x1190)) {
  case 0:
    *(undefined4 *)(in_ECX + 0x1194) = 0;
    *(undefined4 *)(in_ECX + 0x1190) = 1;
  case 1:
    iVar1 = ULevel::PreloadObjects(in_ECX,*(int *)(in_ECX + 0x1194));
    goto LAB_105cbc9a;
  case 2:
    iVar1 = ULevel::PostloadObjects(in_ECX,*(int *)(in_ECX + 0x1194));
LAB_105cbc9a:
    *(int *)(in_ECX + 0x1194) = iVar1;
    UObject::SetFlags((UObject *)in_ECX,0x200);
    break;
  case 3:
    iVar1 = ULevel::LoadCleanup(in_ECX,*(int *)(in_ECX + 0x1194));
    *(int *)(in_ECX + 0x1194) = iVar1;
    UObject::ClearFlags((UObject *)in_ECX,0x200);
    break;
  case 4:
    iVar1 = ULevel::LoadActors(in_ECX,*(int *)(in_ECX + 0x1194));
    *(int *)(in_ECX + 0x1194) = iVar1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 105cbd0f Catch@105cbd0f

void Catch_105cbd0f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105cbd23 Catch@105cbd23

void Catch_105cbd23(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::Load");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cbdb0 FUN_105cbdb0

void FUN_105cbdb0(UObject *param_1)

{
  undefined4 uVar1;
  ALevelInfo *pAVar2;
  undefined4 *puVar3;
  ULevel *in_ECX;
  uint local_2c;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081ffc0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 != (UObject *)0x0) {
    ExceptionList = &local_10;
    UObject::SetFlags(param_1,1);
    pAVar2 = ULevel::GetLevelInfo(in_ECX);
    local_20 = local_20 & 0xffffff00;
    *(ALevelInfo **)(param_1 + 0xec) = pAVar2;
    *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
    *(uint *)(param_1 + 0xf4) = local_20;
    pAVar2 = ULevel::GetLevelInfo(in_ECX);
    *(ALevelInfo **)(param_1 + 0xe0) = pAVar2;
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffffeff;
    *(ULevel **)(param_1 + 0xe4) = in_ECX;
    if (*(int *)(param_1 + 0x278) != 0) {
      *(undefined4 *)(param_1 + 0x278) = 0;
    }
    if ((((byte)param_1[0x2f8] & 1) != 0) && (*(int **)(in_ECX + 0x120) != (int *)0x0)) {
      (**(code **)(**(int **)(in_ECX + 0x120) + 8))(param_1);
    }
    pAVar2 = ULevel::GetLevelInfo(in_ECX);
    local_2c = local_2c & 0xffffff00;
    *(ALevelInfo **)(param_1 + 0xec) = pAVar2;
    *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
    *(uint *)(param_1 + 0xf4) = local_2c;
    pAVar2 = ULevel::GetLevelInfo(in_ECX);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(pAVar2 + 0x1b8);
    (**(code **)(*(int *)param_1 + 0x3c))();
    (**(code **)(*(int *)param_1 + 0x9c))();
    AActor::eventPreBeginPlay((AActor *)param_1);
    AActor::eventBeginPlay((AActor *)param_1);
    if (((byte)param_1[100] & 0x80) == 0) {
      (**(code **)(*(int *)param_1 + 0x1bc))(0,1);
      AActor::eventPostBeginPlay((AActor *)param_1);
      AActor::eventSetInitialState((AActor *)param_1);
      if ((((*(int *)GIsEditor_exref == 0) && (*(int *)(param_1 + 0x40) == 0)) &&
          (((byte)param_1[0x2f8] & 2) != 0)) &&
         (((*(uint *)(param_1 + 0x2e4) & 0x2000) != 0 &&
          ((param_1[0x34] == (UObject)0x0 || (param_1[0x34] == (UObject)0x5)))))) {
        AActor::FindBase((AActor *)param_1);
      }
      if (*(int *)(in_ECX + 0x130) != 0) {
        puVar3 = (undefined4 *)thunk_FUN_10522300(8,&GEngineMem,1,8);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          uVar1 = *(undefined4 *)(in_ECX + 300);
          *puVar3 = param_1;
          puVar3[1] = uVar1;
        }
        *(undefined4 **)(in_ECX + 300) = puVar3;
      }
      pAVar2 = ULevel::GetLevelInfo(in_ECX);
      if (pAVar2[0x5d4] != (ALevelInfo)0x3) {
        AActor::eventPostNetBeginPlay((AActor *)param_1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 105cbf71 Catch@105cbf71

void Catch_105cbf71(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 105cbf85 Catch@105cbf85

void Catch_105cbf85(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::SpawnActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cc020 FUN_105cc020

undefined4 FUN_105cc020(UObject *param_1)

{
  UObject UVar1;
  AActor *this;
  int *piVar2;
  UObject *this_00;
  int iVar3;
  FStateFrame *pFVar4;
  int iVar5;
  ULevel *in_ECX;
  ULevel *pUVar6;
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_50;
  int local_48;
  int local_40;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14 [3];
  ULevel *local_8;
  
  this_00 = param_1;
  puStack_80 = &LAB_1081ffd0;
  local_84 = ExceptionList;
  local_7c = 0;
  ExceptionList = &local_84;
  local_8 = in_ECX;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &local_84;
    appFailAssert("pActor",".\\UnLevel.cpp",0x646);
  }
  iVar3 = UObject::IsValid(this_00);
  if (iVar3 == 0) {
    appFailAssert("pActor->IsValid()",".\\UnLevel.cpp",0x647);
  }
  if (*(int *)GIsEditor_exref == 0) {
    if ((*(uint *)(this_00 + 100) & 0x50) != 0) {
      ExceptionList = local_84;
      return 0;
    }
    if ((char)*(uint *)(this_00 + 100) < '\0') {
      ExceptionList = local_84;
      return 1;
    }
  }
  local_7c = 0;
  local_50 = ULevel::GetActorIndex(in_ECX,(AActor *)this_00);
  local_7c = CONCAT31(local_7c._1_3_,3);
  thunk_FUN_105bd940(local_50);
  (**(code **)(*(int *)this_00 + 0x20))();
  local_7c = 5;
  pFVar4 = UObject::GetStateFrame(this_00);
  if (((pFVar4 == (FStateFrame *)0x0) ||
      (pFVar4 = UObject::GetStateFrame(this_00), *(int *)(pFVar4 + 0x1c) == 0)) ||
     (UObject::eventEndState(this_00), ((byte)this_00[100] & 0x80) == 0)) {
    local_7c = 7;
    if (*(int *)(this_00 + 0x40) != 0) {
      local_60 = 0;
      local_5c = 0;
      local_58 = 0x3f800000;
      (**(code **)(*(int *)this_00 + 0x16c))(0,0,0,0x3f800000,1);
      if (((byte)this_00[100] & 0x80) != 0) {
        ExceptionList = local_84;
        return 1;
      }
    }
    if (0 < *(int *)(this_00 + 500)) {
      for (iVar3 = 0; local_40 = iVar3, iVar3 < *(int *)(this_00 + 500); iVar3 = iVar3 + 1) {
        local_24 = 0;
        local_20 = 0;
        local_1c = 0x3f800000;
        (**(code **)(**(int **)(*(int *)(this_00 + 0x1f0) + iVar3 * 4) + 0x16c))(0,0,0,0x3f800000,1)
        ;
      }
    }
    local_7c = 9;
    AActor::eventDestroyed((AActor *)this_00);
    if (((byte)this_00[100] & 0x80) == 0) {
      local_7c = 0xb;
      local_14[0] = 0;
      pUVar6 = local_8;
      for (iVar3 = 0; local_48 = iVar3, iVar3 < *(int *)(pUVar6 + 0x3c); iVar3 = iVar3 + 1) {
        this = *(AActor **)(*(int *)(pUVar6 + 0x38) + iVar3 * 4);
        if (this != (AActor *)0x0) {
          if (*(UObject **)(this + 0x3c) == this_00) {
            AActor::SetOwner(this,(AActor *)0x0);
            UVar1 = this_00[100];
          }
          else {
            iVar5 = thunk_FUN_1052eab0(&param_1,local_14);
            pUVar6 = local_8;
            if (iVar5 == 0) goto LAB_105cc24c;
            AActor::EndTouch((AActor *)this_00,this,1);
            UVar1 = this_00[100];
          }
          pUVar6 = local_8;
          if (((byte)UVar1 & 0x80) != 0) {
            ExceptionList = local_84;
            return 1;
          }
        }
LAB_105cc24c:
      }
      local_7c = 0xd;
      if ((*(int *)(this_00 + 0x3c) == 0) ||
         (AActor::eventLostChild(*(AActor **)(this_00 + 0x3c),(AActor *)this_00),
         ((byte)this_00[100] & 0x80) == 0)) {
        local_7c = 0;
        if (*(int **)(local_8 + 0x70) != (int *)0x0) {
          (**(code **)(**(int **)(local_8 + 0x70) + 0x88))(this_00);
        }
        piVar2 = *(int **)(local_8 + 0xbc);
        if ((piVar2 != (int *)0x0) && (piVar2[0x11] == 0)) {
          (**(code **)(*piVar2 + 0x88))(this_00);
        }
        local_7c = CONCAT31(local_7c._1_3_,0xf);
        if (*(int **)(local_8 + 0x120) != (int *)0x0) {
          if (((byte)this_00[0x2f8] & 1) != 0) {
            (**(code **)(**(int **)(local_8 + 0x120) + 0xc))(this_00);
          }
          (**(code **)(**(int **)(local_8 + 0x120) + 0x24))(this_00);
        }
        iVar3 = local_50;
        local_7c = 0x11;
        if (*(UObject **)(*(int *)(local_8 + 0x38) + local_50 * 4) != this_00) {
          appFailAssert("Actors(iActor)==pActor",".\\UnLevel.cpp",0x6ca);
        }
        *(undefined4 *)(*(int *)(local_8 + 0x38) + iVar3 * 4) = 0;
        *(uint *)(this_00 + 100) = *(uint *)(this_00 + 100) | 0x80;
        local_7c = 0x13;
        if (*(int *)(*(int *)(local_8 + 0x74) + 0x58) != 0) {
          (**(code **)(**(int **)(*(int *)(local_8 + 0x74) + 0x58) + 0xfc))(this_00);
        }
        UObject::ConditionalDestroy(this_00);
        local_7c = 0x15;
        if (*(int *)GIsEditor_exref == 0) {
          *(int *)(this_00 + 0x1a8) = *(int *)(local_8 + 0x124);
          *(UObject **)(local_8 + 0x124) = this_00;
        }
        else {
          (**(code **)(*(int *)local_8 + 0xb4))(1);
        }
      }
    }
  }
  ExceptionList = local_84;
  return 1;
}


// ==== 105cc384 Catch@105cc384

void Catch_105cc384(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x2c) = *(undefined4 *)(unaff_EBP + 0x14);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x2c,&DAT_10914c48);
}


// ==== 105cc398 Catch@105cc398

void Catch_105cc398(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Cleanup");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cc3b4 Catch@105cc3b4

void Catch_105cc3b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x4c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x4c,&DAT_10914c48);
}


// ==== 105cc3c8 Catch@105cc3c8

void Catch_105cc3c8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShutupSound");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cc3cf Catch@105cc3cf

void Catch_105cc3cf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x34) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x34,&DAT_10914c48);
}


// ==== 105cc3e0 Catch@105cc3e0

void Catch_105cc3e0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Unlist");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cc3e7 Catch@105cc3e7

void Catch_105cc3e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x44) = *(undefined4 *)(unaff_EBP + 0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x44,&DAT_10914c48);
}


// ==== 105cc3f8 Catch@105cc3f8

void Catch_105cc3f8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Unhash");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cc3ff Catch@105cc3ff

void Catch_105cc3ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x24,&DAT_10914c48);
}


// ==== 105cc410 Catch@105cc410

void Catch_105cc410(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Disown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cc417 Catch@105cc417

void Catch_105cc417(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x3c) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x3c,&DAT_10914c48);
}


// ==== 105cc428 Catch@105cc428

void Catch_105cc428(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CleanupStandardRefs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cc432 Catch@105cc432

void Catch_105cc432(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x60) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x60,&DAT_10914c48);
}


// ==== 105cc446 Catch@105cc446

void Catch_105cc446(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ProcessDestroyed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cc450 Catch@105cc450

void Catch_105cc450(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x50) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x50,&DAT_10914c48);
}


// ==== 105cc464 Catch@105cc464

void Catch_105cc464(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Debase");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cc46e Catch@105cc46e

void Catch_105cc46e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x48) = *(undefined4 *)(unaff_EBP + 0x10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x48,&DAT_10914c48);
}


// ==== 105cc482 Catch@105cc482

void Catch_105cc482(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"EndState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cc48c Catch@105cc48c

void Catch_105cc48c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x40) = *(undefined4 *)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x40,&DAT_10914c48);
}


// ==== 105cc4a0 Catch@105cc4a0

void Catch_105cc4a0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ModifyActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 105cc4aa Catch@105cc4aa

void Catch_105cc4aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x6c) = *(undefined4 *)(unaff_EBP + -0x14);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x6c,&DAT_10914c48);
}


// ==== 105cc4be Catch@105cc4be

void Catch_105cc4be(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DestroyRules");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


