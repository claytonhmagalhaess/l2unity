// ==== 1003c0f0 FUN_1003c0f0

void FUN_1003c0f0(ushort param_1)

{
  undefined1 uVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  ushort *puVar5;
  int iVar6;
  int *in_ECX;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uStack_284;
  FString local_270 [12];
  FString local_264 [12];
  FString local_258 [4];
  int local_254 [2];
  FString local_24c [12];
  FString local_240 [16];
  FString local_230 [12];
  undefined4 local_224;
  undefined1 *local_220;
  void *local_21c;
  undefined1 *puStack_218;
  int local_214;
  ushort local_210 [260];
  uint local_8;
  
  puStack_218 = &LAB_101ddb8a;
  local_21c = ExceptionList;
  uStack_284 = DAT_103554c4 ^ (uint)local_210;
  local_220 = (undefined1 *)&uStack_284;
  ExceptionList = &local_21c;
  local_214 = 0;
  local_8 = uStack_284;
  FString::FString(local_270);
  local_214._0_1_ = 1;
  FString::FString(local_264);
  local_214._0_1_ = 2;
  appSprintf(local_210,(ushort *)&DAT_10235064,(uint)param_1);
  FString::FString(local_24c,local_210);
  local_214._0_1_ = 3;
  uVar1 = (undefined1)local_214;
  local_214._0_1_ = 3;
  if (param_1 == 10) {
    FUN_1003be30(in_ECX[0xda] + 1);
    iVar2 = FUN_10039a70(in_ECX[0xda] + 1);
    if (iVar2 != 0) {
      iVar2 = FUN_10039a70(in_ECX[0xda]);
      if (iVar2 != 0) {
        pFVar3 = (FString *)FUN_10039a70(in_ECX[0xda]);
        FString::Len(pFVar3);
        pFVar3 = local_258;
        pFVar4 = (FString *)FUN_10039a70(in_ECX[0xda]);
        pFVar3 = (FString *)FString::Right(pFVar4,(int)pFVar3);
        local_214._0_1_ = 4;
        pFVar4 = (FString *)FUN_10039a70(in_ECX[0xda] + 1);
        FString::operator=(pFVar4,pFVar3);
        local_214._0_1_ = 3;
        FString::~FString(local_258);
        pFVar3 = local_240;
        pFVar4 = (FString *)FUN_10039a70(in_ECX[0xda]);
        pFVar3 = (FString *)FString::Left(pFVar4,(int)pFVar3);
        local_214._0_1_ = 5;
        pFVar3 = (FString *)FString::operator+(pFVar3,local_230);
        local_214._0_1_ = 6;
        pFVar4 = (FString *)FUN_10039a70(in_ECX[0xda]);
        FString::operator=(pFVar4,pFVar3);
        local_214._0_1_ = 5;
        FString::~FString(local_230);
        local_214._0_1_ = 3;
        FString::~FString(local_240);
      }
    }
    in_ECX[0xda] = in_ECX[0xda] + 1;
    uVar7 = FUN_100abe10();
    iVar2 = (int)((ulonglong)uVar7 >> 0x20);
    in_ECX[0xdf] = (int)uVar7;
    in_ECX[0xdb] = 0;
    in_ECX[0xe1] = 0;
    in_ECX[0xe0] = in_ECX[0xe0] + iVar2;
    in_ECX[0xf6] = in_ECX[0xf6] + iVar2;
  }
  else {
    local_214._0_1_ = uVar1;
    local_224 = FUN_10039c80(in_ECX[0xda],1);
    iVar2 = FUN_10039a70(in_ECX[0xda]);
    if (iVar2 != 0) {
      pFVar3 = local_240;
      pFVar4 = (FString *)FUN_10039a70(in_ECX[0xda]);
      pFVar3 = (FString *)FString::Left(pFVar4,(int)pFVar3);
      local_214._0_1_ = 7;
      FString::operator=(local_264,pFVar3);
      local_214._0_1_ = 3;
      FString::~FString(local_240);
      pFVar3 = (FString *)FUN_10039a70(in_ECX[0xda]);
      FString::Len(pFVar3);
      pFVar3 = local_230;
      pFVar4 = (FString *)FUN_10039a70(in_ECX[0xda]);
      pFVar3 = (FString *)FString::Right(pFVar4,(int)pFVar3);
      local_214._0_1_ = 8;
      FString::operator=(local_270,pFVar3);
      local_214._0_1_ = 3;
      FString::~FString(local_230);
      pFVar3 = (FString *)FString::operator+(local_264,local_230);
      local_214._0_1_ = 9;
      pFVar3 = (FString *)FString::operator+(pFVar3,local_240);
      local_214._0_1_ = 10;
      pFVar4 = (FString *)FUN_10039a70(in_ECX[0xda]);
      FString::operator=(pFVar4,pFVar3);
      local_214._0_1_ = 9;
      FString::~FString(local_240);
      local_214._0_1_ = 3;
      FString::~FString(local_230);
    }
    in_ECX[0xdb] = in_ECX[0xdb] + 1;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    puVar5 = FString::operator*(local_24c);
    FUN_10020bb0(local_254,puVar5,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
    in_ECX[0xe1] = in_ECX[0xe1] + local_254[0];
    iVar2 = in_ECX[0xe1];
    iVar6 = FUN_101c19e0();
    if (iVar6 + -0x24 < iVar2) {
      in_ECX[0xe1] = local_254[0];
      in_ECX[0xe0] = in_ECX[0xe0] + 1;
    }
    FUN_10039ec0(in_ECX[0xda],local_224,0);
  }
  FUN_10037c70();
  (**(code **)(*in_ECX + 0x1f8))();
  local_214._0_1_ = 2;
  FString::~FString(local_24c);
  local_214._0_1_ = 1;
  FString::~FString(local_264);
  local_214 = (uint)local_214._1_3_ << 8;
  FString::~FString(local_270);
  local_214 = 0xffffffff;
  ExceptionList = local_21c;
  __security_check_cookie(local_8 ^ (uint)local_210);
  return;
}


// ==== 1003c4b2 Catch@1003c4b2

void Catch_1003c4b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -100);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1003c4c6 Catch@1003c4c6

void Catch_1003c4c6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMultiEdit::InsertCharacter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003c4f0 FUN_1003c4f0

void FUN_1003c4f0(short *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  iVar3 = (int)psVar2 - (int)(param_1 + 1) >> 1;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      FUN_1003c0f0(param_1[iVar4]);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  FUN_10037c70();
  (**(code **)(*in_ECX + 0x1f8))();
  return;
}


// ==== 1003c550 FUN_1003c550

undefined4 FUN_1003c550(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ddbc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x368) = 0;
  *(undefined4 *)(in_ECX + 0x36c) = 0;
  FUN_1003c0c0();
  if (*(int *)(in_ECX + 0x310) != 0) {
    FUN_10024ca0(*(int *)(in_ECX + 0x310));
    *(undefined4 *)(in_ECX + 0x310) = 0;
  }
  if (*(int *)(in_ECX + 0x364) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0x364));
    *(undefined4 *)(in_ECX + 0x364) = 0;
  }
  if (*(int *)(in_ECX + 0x39c) != 0) {
    *(undefined4 *)(in_ECX + 0x39c) = 0;
  }
  if (*(int *)(in_ECX + 0x3a0) != 0) {
    *(undefined4 *)(in_ECX + 0x3a0) = 0;
  }
  if (*(int *)(in_ECX + 0x3a4) != 0) {
    *(undefined4 *)(in_ECX + 0x3a4) = 0;
  }
  if (*(int *)(in_ECX + 0x2d8) != 0) {
    *(undefined4 *)(in_ECX + 0x2d8) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1003c620 Catch@1003c620

void Catch_1003c620(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003c634 Catch@1003c634

void Catch_1003c634(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMultiEdit::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003c660 FUN_1003c660

void FUN_1003c660(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x368) = 0;
  *(undefined4 *)(in_ECX + 0x36c) = 0;
  FUN_1003c0c0();
  FUN_1003be30(0xffffffff);
  *(undefined4 *)(in_ECX + 0x37c) = 1;
  *(undefined4 *)(in_ECX + 0x3d8) = 1;
  *(undefined4 *)(in_ECX + 0x368) = 0;
  *(undefined4 *)(in_ECX + 0x36c) = 0;
  *(undefined4 *)(in_ECX + 0x378) = 0;
  *(undefined4 *)(in_ECX + 900) = 0;
  *(undefined4 *)(in_ECX + 0x380) = 0;
  *(undefined4 *)(in_ECX + 0x388) = 0;
  *(undefined4 *)(in_ECX + 0x3b0) = 0;
  if (*(int *)(in_ECX + 0x310) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0x310));
    *(undefined4 *)(in_ECX + 0x310) = 0;
  }
  return;
}


// ==== 1003c6f0 FUN_1003c6f0

undefined4 FUN_1003c6f0(int param_1)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  ushort *puVar4;
  FString *pFVar5;
  int *piVar6;
  int *in_ECX;
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
  
  iVar1 = param_1;
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
  iVar7 = in_ECX[0xd8];
  local_8 = 0;
  local_30 = iVar7;
  FString::FString(local_20);
  local_74._0_1_ = 1;
  local_24 = 0;
  param_1 = FUN_1003b100();
  local_c = FUN_1003b890();
  local_14 = in_ECX[0xde];
  do {
    if ((in_ECX[0xdd] + in_ECX[0xde] <= local_14) || (in_ECX[0xf6] <= local_14)) {
      FUN_100212e0();
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      local_74 = (uint)local_74._1_3_ << 8;
      FString::~FString(local_20);
      ExceptionList = local_7c;
      return 1;
    }
    if (in_ECX[0xe2] == 0) {
      if (local_14 == in_ECX[0xe0]) {
        local_8 = 0;
        if ((in_ECX[0xe1] != 0) && (iVar3 = FUN_10039a70(), iVar3 != 0)) {
          pFVar2 = local_8c;
          iStack_164 = 0x1003cdbc;
          pFVar5 = (FString *)FUN_10039a70();
          pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,param_1);
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
          local_8 = FUN_100217a0(in_ECX[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
        }
        iVar3 = FUN_10025df0();
        if (iVar3 == 0) {
          local_10 = FUN_1003b4a0();
          if (in_ECX[0xe2] == 0) {
            local_28 = 0;
            iVar3 = *(int *)GLanguageType_exref;
            if (iVar3 == 2) {
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*((FString *)(in_ECX + 0xc1));
              local_28 = FUN_100217a0(in_ECX[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11);
              iStack_164 = local_8;
              iStack_168 = 0;
              FString::FString((FString *)&uStack_174,(FString *)(in_ECX + 0xc1));
              local_74._0_1_ = 1;
              FUN_10037e10();
            }
            else if (iVar3 == 3) {
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*((FString *)(in_ECX + 0xc1));
              local_28 = FUN_100217a0(in_ECX[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11);
              iStack_164 = local_8;
              iStack_168 = 0;
              FString::FString((FString *)&uStack_174,(FString *)(in_ECX + 0xc1));
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
                puVar4 = FString::operator*((FString *)(in_ECX + 0xc1));
                local_28 = FUN_100217a0(in_ECX[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11
                                       );
              }
              iStack_164 = local_8;
              iStack_168 = 0;
              FString::FString((FString *)&uStack_174,(FString *)(in_ECX + 0xc1));
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
                puVar4 = FString::operator*((FString *)(in_ECX + 0xc1));
                local_28 = FUN_100217a0(in_ECX[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11
                                       );
                FString::FString((FString *)&iStack_168,(FString *)(in_ECX + 0xc1));
                local_74._0_1_ = 1;
                FUN_10038aa0();
              }
              else {
                puVar4 = FString::operator*((FString *)(in_ECX + 0xc1));
                local_28 = FUN_100217a0(in_ECX[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11
                                       );
              }
            }
            local_8 = local_8 + local_28;
            iVar3 = FUN_10039a70();
            if (iVar3 != 0) {
              if (local_10 < 1) {
                iVar3 = in_ECX[0xdb];
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
                iVar3 = in_ECX[0xdb];
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
                FUN_100217a0(in_ECX[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
              }
            }
          }
          else {
            iVar3 = *(int *)GLanguageType_exref;
            if (iVar3 == 2) {
              pFVar2 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_40,0);
              local_74._0_1_ = 0xf;
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*(pFVar2);
              FUN_100217a0(in_ECX[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
              local_74._0_1_ = 1;
              FString::~FString(local_40);
              iStack_168 = local_8;
              iVar3 = local_10;
              iStack_164 = iVar7;
              FString::Mid((FString *)(in_ECX + 0xc1),(int)&stack0xfffffe88,0);
              local_74._0_1_ = 1;
              FUN_10037e10(iVar3);
            }
            else if (iVar3 == 3) {
              pFVar2 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_a4,0);
              local_74._0_1_ = 0x11;
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*(pFVar2);
              FUN_100217a0(in_ECX[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
              local_74._0_1_ = 1;
              FString::~FString(local_a4);
              iStack_168 = local_8;
              iVar3 = local_10;
              iStack_164 = iVar7;
              FString::Mid((FString *)(in_ECX + 0xc1),(int)&stack0xfffffe88,0);
              local_74._0_1_ = 1;
              FUN_10038320(iVar3);
            }
            else if (iVar3 == 4) {
              iStack_164 = local_8;
              iStack_168 = 0;
              FString::Mid((FString *)(in_ECX + 0xc1),(int)&uStack_174,0);
              local_74._0_1_ = 1;
              FUN_10038fd0();
            }
            else {
              pFVar2 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_11c,0);
              local_74._0_1_ = 0x14;
              iStack_164 = 0;
              iStack_168 = 0;
              uStack_174 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar4 = FString::operator*(pFVar2);
              FUN_100217a0(in_ECX[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
              local_74._0_1_ = 1;
              FString::~FString(local_11c);
            }
          }
          iVar3 = (**(code **)(*in_ECX + 0x74))();
          if (((iVar3 != 0) && (in_ECX[0xdc] != 0)) && (*(int *)GLanguageType_exref == 2)) {
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar4 = (ushort *)&DAT_10230ff8;
            iVar3 = in_ECX[0xd8] + in_ECX[0xe1];
LAB_1003db1f:
            FUN_100217a0(iVar3,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
          }
        }
        else {
          iVar3 = FUN_10141550();
          if (((((iVar3 == 10) || (iVar3 = FUN_10141550(), iVar3 == 9)) ||
               ((iVar3 = FUN_10141550(), iVar3 == 0xb ||
                ((iVar3 = FUN_10141550(), iVar3 == 8 || (iVar3 = FUN_10141550(), iVar3 == 0xc))))))
              && (in_ECX[0xb6] != 0)) && (iVar3 = FUN_10024670(), iVar3 != 0)) {
            piVar6 = (int *)FUN_10024670();
            piVar6 = (int *)(**(code **)(*piVar6 + 0x200))();
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 0x13c))();
            }
          }
          iVar3 = (**(code **)(*in_ECX + 0x74))();
          if ((iVar3 != 0) && (in_ECX[0xdc] != 0)) {
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            FUN_100217a0(in_ECX[0xd8] + -3 + local_8,iVar7,0xffdcdcdc,&DAT_10230ff8,0,0);
          }
          local_10 = FUN_1003b4a0();
          iVar3 = FUN_10039a70();
          if (iVar3 != 0) {
            if (local_14 + 1 < in_ECX[0xf6]) {
              if (local_10 == 0) {
                iVar3 = in_ECX[0xdb];
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
                iVar3 = in_ECX[0xdb];
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
              iVar3 = in_ECX[0xdb];
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
              iVar3 = in_ECX[0xd8] + local_8;
              goto LAB_1003db1f;
            }
          }
        }
      }
      else if (local_14 + 1 < in_ECX[0xf6]) {
        local_10 = FUN_1003b4a0();
        if (in_ECX[0xe2] == 0) {
          iVar3 = FUN_10039a70();
          if (iVar3 != 0) {
            if (local_10 == 0) {
              pFVar2 = (FString *)FUN_10039a70();
              FString::Len(pFVar2);
              pFVar2 = local_128;
              iStack_164 = 0x1003d9f3;
              pFVar5 = (FString *)FUN_10039a70();
              pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,param_1);
              local_74._0_1_ = 0x26;
              FString::operator=(local_20,pFVar2);
              pFVar2 = local_128;
            }
            else {
              pFVar2 = local_110;
              iStack_164 = 0x1003d99b;
              pFVar5 = (FString *)FUN_10039a70();
              pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,param_1);
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
              local_8 = FUN_100217a0(in_ECX[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
            }
          }
        }
        else {
          iVar3 = FUN_10039a70();
          if (iVar3 != 0) {
            if (in_ECX[0xdb] < 1) {
              pFVar2 = (FString *)FUN_10039a70();
              FString::Len(pFVar2);
              pFVar2 = local_b0;
              iStack_164 = 0x1003d72f;
              pFVar5 = (FString *)FUN_10039a70();
              pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,param_1);
              local_74._0_1_ = 0x1f;
              FString::operator=(local_20,pFVar2);
              pFVar2 = local_b0;
            }
            else {
              pFVar2 = local_98;
              iStack_164 = 0x1003d6dd;
              pFVar5 = (FString *)FUN_10039a70();
              pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,param_1);
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
              local_8 = FUN_100217a0(in_ECX[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
            }
          }
          if (*(int *)GLanguageType_exref == 2) {
            pFVar2 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_c8,0);
            local_74._0_1_ = 0x20;
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar4 = FString::operator*(pFVar2);
            FUN_100217a0(in_ECX[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
            local_74._0_1_ = 1;
            FString::~FString(local_c8);
            iStack_168 = local_8;
            iVar3 = local_10;
            iStack_164 = iVar7;
            FString::Mid((FString *)(in_ECX + 0xc1),(int)&stack0xfffffe88,0);
            local_74._0_1_ = 1;
            FUN_10037e10(iVar3);
          }
          else if (*(int *)GLanguageType_exref == 3) {
            pFVar2 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_e0,0);
            local_74._0_1_ = 0x22;
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar4 = FString::operator*(pFVar2);
            FUN_100217a0(in_ECX[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
            local_74._0_1_ = 1;
            FString::~FString(local_e0);
            iStack_168 = local_8;
            iVar3 = local_10;
            iStack_164 = iVar7;
            FString::Mid((FString *)(in_ECX + 0xc1),(int)&stack0xfffffe88,0);
            local_74._0_1_ = 1;
            FUN_10038320(iVar3);
          }
          else {
            pFVar2 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_f8,0);
            local_74._0_1_ = 0x24;
            iStack_164 = 0;
            iStack_168 = 0;
            uStack_174 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar4 = FString::operator*(pFVar2);
            FUN_100217a0(in_ECX[0xd8] + local_8,iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
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
          pFVar2 = (FString *)FString::Mid(pFVar5,(int)pFVar2,param_1);
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
            iVar3 = in_ECX[0xd8];
            goto LAB_1003db1f;
          }
        }
      }
    }
    else {
      local_10 = FUN_1003b4a0();
      if (in_ECX[0xe2] == 0) {
        FString::Len((FString *)(in_ECX + 0xc1));
        pFVar2 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_d4,param_1);
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
          local_8 = FUN_100217a0(in_ECX[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
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
          local_8 = FUN_100217a0(in_ECX[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
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
            local_8 = FUN_100217a0(in_ECX[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
            uStack_174 = 0x1003cbd6;
            FString::FString((FString *)&stack0xfffffe94,local_20);
            local_74._0_1_ = 1;
            FUN_10038aa0();
          }
          else {
            puVar4 = FString::operator*(local_20);
            local_8 = FUN_100217a0(in_ECX[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
          }
        }
        iVar3 = FUN_10039a70();
        if (iVar3 != 0) {
          if (local_10 < 1) {
            iVar3 = in_ECX[0xdb];
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
            iVar3 = in_ECX[0xdb];
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
        pFVar2 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_ec,param_1);
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
            FUN_100217a0(in_ECX[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
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
            FUN_100217a0(in_ECX[0xd8],iVar7,0xffdcdcdc,puVar4,uVar10,uVar11,uVar12);
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
              iVar3 = in_ECX[0xd8];
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
      if (((local_14 == in_ECX[0xe0]) && (in_ECX[0xdc] != 0)) && (*(int *)GLanguageType_exref == 2))
      {
        iStack_164 = 0;
        iStack_168 = 0;
        uStack_174 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = (ushort *)&DAT_10230ff8;
        iVar3 = in_ECX[0xe1] + -3 + in_ECX[0xd8];
        goto LAB_1003db1f;
      }
    }
    iVar7 = iVar7 + in_ECX[0xd7] + in_ECX[0xd8];
    param_1 = local_10;
    if ((local_10 == 0) && ((in_ECX[0xe2] == 0 || (in_ECX[0xdb] == 0)))) {
      local_c = local_c + 1;
    }
    local_14 = local_14 + 1;
    local_30 = iVar7;
  } while( true );
}


// ==== 1003db96 Catch@1003db96

void Catch_1003db96(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x44) = *(undefined4 *)(unaff_EBP + 0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x44,&DAT_102a47f0);
}


// ==== 1003dbaa Catch@1003dbaa

void Catch_1003dbaa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMultiEdit::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003dbd0 FUN_1003dbd0

void FUN_1003dbd0(uint param_1)

{
  int iVar1;
  ushort local_2c [20];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_2c;
  if ((param_1 < 0x20) || (0x7e < param_1)) {
    iVar1 = FUN_10141550();
    if ((iVar1 != 9) || (param_1 < 0x82)) {
      iVar1 = FUN_10141550();
      if (iVar1 != 0xd) goto LAB_1003dc40;
      iVar1 = FUN_1003ac60(param_1);
      if (iVar1 == 0) goto LAB_1003dc40;
    }
  }
  appSprintf(local_2c,(ushort *)&DAT_10235064,param_1);
  FUN_1003c0f0(param_1);
LAB_1003dc40:
  __security_check_cookie(local_4 ^ (uint)local_2c);
  return;
}


// ==== 1003dc60 FUN_1003dc60

void FUN_1003dc60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  undefined4 uVar6;
  int in_ECX;
  int unaff_EBX;
  undefined1 *puVar7;
  int local_34;
  FArray local_30 [12];
  int local_24;
  FString local_20 [4];
  FString local_1c [4];
  undefined1 local_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_101dddf3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)&local_24);
  local_4 = 1;
  FArray::FArray(local_30);
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar1 = FUN_10039a70();
  if ((iVar1 == 0) || (*(int *)(in_ECX + 0x3d8) + -1 <= *(int *)(in_ECX + 0x380)))
  goto LAB_1003dfc5;
  iVar2 = FUN_1003b100();
  iVar3 = FUN_1003b4a0();
  iVar1 = FUN_1003b4a0();
  if (*(int *)GLanguageType_exref == 5) {
    puVar7 = local_18;
    pFVar4 = (FString *)FUN_10039a70();
    pFVar4 = (FString *)FString::Mid(pFVar4,(int)puVar7,iVar2);
    local_8._0_1_ = 4;
    FString::operator*(pFVar4);
    FUN_10021620();
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,3);
    FString::~FString(local_1c);
    iVar1 = unaff_EBX;
    iVar2 = local_24;
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x36c) - iVar2;
  }
  if (iVar3 == 0) {
    *(int *)(in_ECX + 0x368) = *(int *)(in_ECX + 0x368) + 1;
  }
  if (*(int *)(in_ECX + 0x3d8) + -3 < *(int *)(in_ECX + 0x380)) {
    if (*(int *)GLanguageType_exref == 5) {
      pFVar4 = (FString *)FUN_10039a70();
      FString::FString((FString *)&stack0xffffff9c,pFVar4);
      local_8 = (undefined1 *)CONCAT31((int3)((uint)local_8 >> 8),3);
      FUN_10038bd0();
      pFVar4 = local_1c;
      iVar1 = iVar3;
      pFVar5 = (FString *)FUN_10039a70(*(undefined4 *)(in_ECX + 0x368));
      pFVar4 = (FString *)FString::Mid(pFVar5,(int)pFVar4,iVar1);
      local_c._0_1_ = 10;
      goto LAB_1003de2f;
    }
    pFVar4 = (FString *)FUN_10039a70();
    FString::FString((FString *)&stack0xffffffa4,pFVar4);
LAB_1003df0e:
    local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,3);
    iVar1 = FUN_10038bd0();
    local_34 = iVar1 - iVar3;
  }
  else if (*(int *)GLanguageType_exref == 5) {
    if (iVar1 == 0) {
      pFVar4 = (FString *)FUN_10039a70();
      FString::FString((FString *)&stack0xffffff9c,pFVar4);
      local_8 = (undefined1 *)CONCAT31((int3)((uint)local_8 >> 8),3);
      FUN_10038bd0();
      pFVar4 = local_1c;
      iVar1 = iVar3;
      pFVar5 = (FString *)FUN_10039a70(*(undefined4 *)(in_ECX + 0x368));
      pFVar4 = (FString *)FString::Mid(pFVar5,(int)pFVar4,iVar1);
      local_c._0_1_ = 7;
    }
    else {
      pFVar4 = local_1c;
      iVar1 = iVar3;
      pFVar5 = (FString *)FUN_10039a70();
      pFVar4 = (FString *)FString::Mid(pFVar5,(int)pFVar4,iVar1);
      local_c._0_1_ = 5;
    }
LAB_1003de2f:
    FString::operator*(pFVar4);
    FUN_10021620();
    local_c = (void *)CONCAT31(local_c._1_3_,3);
    FString::~FString(local_20);
  }
  else {
    if (iVar1 == 0) {
      pFVar4 = (FString *)FUN_10039a70();
      FString::FString((FString *)&stack0xffffffa4,pFVar4);
      goto LAB_1003df0e;
    }
    local_34 = iVar1 - iVar3;
    unaff_EBX = iVar1;
  }
  *(int *)(in_ECX + 0x380) = *(int *)(in_ECX + 0x380) + 1;
  if (local_34 < iVar2) {
    if (unaff_EBX == 0) {
      pFVar4 = (FString *)FUN_10039a70();
      FString::FString((FString *)&stack0xffffffa4,pFVar4);
      local_8 = (undefined1 *)CONCAT31((int3)((uint)local_8 >> 8),3);
      uVar6 = FUN_10038bd0();
      *(undefined4 *)(in_ECX + 0x36c) = uVar6;
    }
    else {
      *(int *)(in_ECX + 0x36c) = unaff_EBX;
    }
  }
  else if (*(int *)GLanguageType_exref == 5) {
    *(int *)(in_ECX + 0x36c) = iVar3;
    if (0 < iVar2) {
      do {
        iVar1 = FUN_10015ac0();
        *(int *)(in_ECX + 0x36c) = *(int *)(in_ECX + 0x36c) + iVar1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    *(int *)(in_ECX + 0x36c) = iVar2 + iVar3;
  }
  if (0 < *(int *)(in_ECX + 900)) {
    FUN_1003afb0();
  }
LAB_1003dfc5:
  local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
  FUN_10019740();
  local_8 = (undefined1 *)0xffffffff;
  FUN_10019740();
  ExceptionList = pvStack_10;
  return;
}


// ==== 1003e000 FUN_1003e000

void FUN_1003e000(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  FUN_1003c0c0();
  iVar1 = in_ECX[2];
  if (iVar1 != 0) {
    FUN_10038f20();
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
  }
  return;
}


// ==== 1003e040 FUN_1003e040

undefined4 FUN_1003e040(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  ushort *puVar6;
  int *in_ECX;
  int iVar7;
  int unaff_EBX;
  int unaff_EBP;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_108;
  FString local_104 [8];
  int local_fc;
  int local_f8 [2];
  undefined1 local_f0 [4];
  int local_ec;
  FArray local_e8 [4];
  FString local_e4 [4];
  FString local_e0 [4];
  FString local_dc [4];
  FString local_d8 [4];
  FString local_d4 [4];
  FString local_d0 [4];
  FString aFStack_cc [4];
  undefined1 local_c8 [4];
  undefined1 *local_c4;
  FString local_b8 [4];
  undefined1 local_b4 [4];
  FString local_b0 [4];
  undefined1 local_ac [12];
  FString local_a0 [4];
  undefined1 local_9c [8];
  FString local_94 [4];
  FString local_90 [4];
  undefined1 local_8c [12];
  FString local_80 [4];
  undefined1 local_7c [8];
  FString local_74 [4];
  undefined1 local_70 [4];
  FString local_6c [4];
  FString local_68 [16];
  FString local_58 [4];
  undefined1 local_54 [8];
  FString local_4c [4];
  undefined1 local_48 [4];
  FString aFStack_44 [4];
  undefined1 local_40 [8];
  FString local_38 [4];
  FString local_34 [12];
  FString local_28 [4];
  FString local_24 [4];
  undefined1 auStack_20 [16];
  undefined1 local_10;
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_101ddf07;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_10141550();
  FString::FString((FString *)&local_fc);
  local_4 = 0;
  FString::Empty((FString *)&local_fc);
  FArray::FArray((FArray *)&local_108);
  local_4._0_1_ = 2;
  FArray::FArray(local_e8);
  local_4._0_1_ = 4;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 4;
  switch(param_1) {
  case 8:
    if ((iVar2 == 0x12) || (iVar2 = FUN_10025df0(), iVar2 == 1)) {
      pFVar5 = (FString *)(in_ECX + 0xc1);
      iVar2 = FString::Len(pFVar5);
      if (iVar2 != 0) {
        iVar2 = FString::Len(pFVar5);
        FString::Delete(pFVar5,0,iVar2);
      }
      FString::FString(local_d0);
      local_4._0_1_ = 0xe;
      FString::FString(local_dc);
      local_4._0_1_ = 0xf;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 0xf;
      if (in_ECX[0xdb] < 1) {
        if ((((in_ECX[0xdb] == 0) && (uVar1 = (undefined1)local_4, 0 < in_ECX[0xda])) &&
            (iVar2 = FUN_10039a70(), uVar1 = (undefined1)local_4, iVar2 != 0)) &&
           (iVar2 = FUN_10039a70(), uVar1 = (undefined1)local_4, iVar2 != 0)) {
          pFVar5 = (FString *)FUN_10039a70();
          local_c4 = &stack0xfffffed8;
          FString::FString((FString *)&stack0xfffffed8,pFVar5);
          local_4._0_1_ = 0xf;
          iVar2 = FUN_10038bd0();
          in_ECX[0xdb] = iVar2;
          pFVar5 = (FString *)FUN_10039a70();
          FString::Len(pFVar5);
          puVar13 = local_48;
          pFVar5 = (FString *)FUN_10039a70();
          pFVar5 = (FString *)FString::Left(pFVar5,(int)puVar13);
          local_8._0_1_ = 0x14;
          FString::operator=(local_d4,pFVar5);
          local_8 = (undefined1 *)CONCAT31(local_8._1_3_,0xf);
          FString::~FString(local_4c);
          pFVar5 = (FString *)FUN_10039a70();
          FString::operator=(local_e0,pFVar5);
          pFVar5 = (FString *)FString::operator+(local_d4,local_34);
          local_c._0_1_ = 0x15;
          pFVar4 = (FString *)FUN_10039a70(in_ECX[0xda] + -1);
          FString::operator=(pFVar4,pFVar5);
          local_c = (void *)CONCAT31(local_c._1_3_,0xf);
          FString::~FString(local_38);
          FUN_1003bff0();
          in_ECX[0xda] = in_ECX[0xda] + -1;
          in_ECX[0xdf] = in_ECX[0xdf] + -1;
          uVar1 = (undefined1)local_4;
        }
      }
      else {
        iVar2 = FUN_10039a70();
        if (iVar2 != 0) {
          pFVar5 = local_90;
          pFVar4 = (FString *)FUN_10039a70();
          pFVar5 = (FString *)FString::Left(pFVar4,(int)pFVar5);
          local_8._0_1_ = 0x10;
          FString::operator=(local_d4,pFVar5);
          local_8 = (undefined1 *)CONCAT31(local_8._1_3_,0xf);
          FString::~FString(local_94);
          pFVar5 = (FString *)FUN_10039a70();
          FString::Len(pFVar5);
          puVar13 = local_7c;
          pFVar5 = (FString *)FUN_10039a70(in_ECX[0xda]);
          pFVar5 = (FString *)FString::Right(pFVar5,(int)puVar13);
          local_c._0_1_ = 0x11;
          FString::operator=(local_e4,pFVar5);
          local_c = (void *)CONCAT31(local_c._1_3_,0xf);
          FString::~FString(local_80);
          pFVar5 = (FString *)FString::operator+(local_d8,local_68);
          local_10 = 0x12;
          pFVar4 = (FString *)FUN_10039a70(in_ECX[0xda]);
          FString::operator=(pFVar4,pFVar5);
          local_10 = 0xf;
          FString::~FString(local_6c);
        }
        in_ECX[0xdb] = in_ECX[0xdb] + -1;
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      FUN_10039f60();
      local_c._0_1_ = 0xe;
      FString::~FString(local_e4);
      local_c = (void *)CONCAT31(local_c._1_3_,4);
      FString::~FString(local_d8);
    }
    iVar2 = FUN_100abe10();
    in_ECX[0xdf] = iVar2;
    goto LAB_1003e5ac;
  case 0xd:
    if (iVar2 == 0x12) {
      iVar2 = FString::Len((FString *)(in_ECX + 0xc1));
      if (iVar2 != 0) {
        FString::operator*((FString *)(in_ECX + 0xc1));
        FUN_1003a470();
      }
      FUN_1003c4f0();
    }
    else {
      iVar2 = FUN_10025df0();
      if (iVar2 == 1) {
        FUN_1003c4f0();
      }
    }
    break;
  case 0x23:
    if (((((iVar2 == 0x12) || (iVar3 = FUN_10025df0(), iVar3 == 1)) || (iVar2 == 9)) ||
        ((iVar2 == 0xb || (iVar2 == 10)))) || (iVar2 == 0xc)) {
      iVar3 = FString::Len((FString *)(in_ECX + 0xc1));
      if ((iVar3 != 0) && (iVar2 == 0x12)) {
        FString::operator*((FString *)(in_ECX + 0xc1));
        FUN_1003a470();
      }
      iVar2 = FUN_10039a70();
      if (iVar2 != 0) {
        if (in_ECX[0xe0] + 1 < in_ECX[0xf6]) {
          iVar2 = FUN_1003b100();
          if (iVar2 == 0) {
            pFVar5 = (FString *)FUN_10039a70();
            iVar2 = FString::Len(pFVar5);
            iVar2 = iVar2 + -1;
          }
          else {
            iVar2 = FUN_1003b100();
          }
        }
        else {
          pFVar5 = (FString *)FUN_10039a70();
          iVar2 = FString::Len(pFVar5);
        }
        in_ECX[0xdb] = iVar2;
      }
    }
    FUN_1003afb0();
    break;
  case 0x24:
    if ((((iVar2 == 0x12) || (iVar3 = FUN_10025df0(), iVar3 == 1)) || (iVar2 == 9)) ||
       (((iVar2 == 0xb || (iVar2 == 10)) || (iVar2 == 0xc)))) {
      iVar3 = FString::Len((FString *)(in_ECX + 0xc1));
      if ((iVar3 != 0) && (iVar2 == 0x12)) {
        FString::operator*((FString *)(in_ECX + 0xc1));
        FUN_1003a470();
      }
      iVar2 = FUN_1003b100();
      in_ECX[0xdb] = iVar2;
    }
    in_ECX[0xe1] = 0;
    break;
  case 0x25:
    if (((((iVar2 == 0x12) || (iVar3 = FUN_10025df0(), iVar3 == 1)) || (iVar2 == 9)) ||
        ((iVar2 == 0xb || (iVar2 == 10)))) || (iVar2 == 0xc)) {
      iVar3 = FString::Len((FString *)(in_ECX + 0xc1));
      if ((iVar3 == 0) || (iVar2 != 0x12)) {
        if (*(int *)GLanguageType_exref == 5) {
          iVar2 = 0;
          puVar13 = local_54;
          pFVar5 = (FString *)FUN_10039a70(in_ECX[0xda]);
          pFVar5 = (FString *)FString::Mid(pFVar5,(int)puVar13,iVar2);
          local_8._0_1_ = 5;
          puVar6 = FString::operator*(pFVar5);
          FUN_10021620(puVar6);
          local_8 = (undefined1 *)CONCAT31(local_8._1_3_,4);
          FString::~FString(local_58);
          if (local_108 < 1) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_10015ac0();
          }
        }
        else {
          iVar3 = 1;
        }
      }
      else {
        FString::operator*((FString *)(in_ECX + 0xc1));
        FUN_1003a470();
      }
      if (in_ECX[0xdb] < 1) {
        if (0 < in_ECX[0xda]) {
          in_ECX[0xda] = in_ECX[0xda] + -1;
          iVar2 = FUN_10039a70();
          if (iVar2 != 0) {
            pFVar5 = (FString *)FUN_10039a70();
            iVar2 = FString::Len(pFVar5);
            in_ECX[0xdb] = iVar2 + -1;
          }
        }
        if (0 < in_ECX[0xe0]) {
          in_ECX[0xe0] = in_ECX[0xe0] + -1;
        }
      }
      else {
        iVar2 = in_ECX[0xdb] - iVar3;
        puVar13 = local_40;
        pFVar5 = (FString *)FUN_10039a70(in_ECX[0xda]);
        pFVar5 = (FString *)FString::Mid(pFVar5,(int)puVar13,iVar2);
        local_c._0_1_ = 6;
        FString::operator=(local_104,pFVar5);
        local_c = (void *)CONCAT31(local_c._1_3_,4);
        FString::~FString(aFStack_44);
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar15 = 0;
        puVar6 = FString::operator*(local_104);
        FUN_10020bb0(local_f8,puVar6,uVar15,uVar9,uVar10,uVar11,uVar12);
        in_ECX[0xdb] = in_ECX[0xdb] - iVar3;
        if (0 < in_ECX[0xe1]) {
          in_ECX[0xe1] = in_ECX[0xe1] - local_f8[0];
          goto LAB_1003e344;
        }
        in_ECX[0xe0] = in_ECX[0xe0] + -1;
      }
      FUN_1003afb0();
    }
    goto LAB_1003e344;
  case 0x26:
    if ((iVar2 == 0x12) || (iVar2 = FUN_10025df0(), iVar2 == 1)) {
      iVar2 = FString::Len((FString *)(in_ECX + 0xc1));
      if (iVar2 != 0) {
        FString::operator*((FString *)(in_ECX + 0xc1));
        FUN_1003a470();
      }
      iVar2 = FUN_10039a70();
      if (iVar2 == 0) break;
      if (0 < in_ECX[0xe0]) {
        iVar2 = FUN_1003b100();
        iVar3 = FUN_1003b100();
        if (iVar2 == 0) {
          if (*(int *)GLanguageType_exref == 5) {
            pFVar5 = local_24;
            pFVar4 = (FString *)FUN_10039a70(in_ECX[0xda]);
            pFVar5 = (FString *)FString::Mid(pFVar4,(int)pFVar5,iVar2);
            local_8._0_1_ = 10;
            puVar6 = FString::operator*(pFVar5);
            FUN_10021620(puVar6);
            local_8 = (undefined1 *)CONCAT31(local_8._1_3_,4);
            FString::~FString(local_28);
            pFVar5 = (FString *)FUN_10039a70();
            FString::Len(pFVar5);
            puVar13 = local_70;
            iVar2 = iVar3;
            pFVar5 = (FString *)FUN_10039a70(in_ECX[0xda] + -1);
            pFVar5 = (FString *)FString::Mid(pFVar5,(int)puVar13,iVar2);
            local_c._0_1_ = 0xb;
            puVar13 = local_f0;
            puVar6 = FString::operator*(pFVar5);
            FUN_10021620(puVar6,puVar13);
            local_c = (void *)CONCAT31(local_c._1_3_,4);
            FString::~FString(local_74);
            if (local_ec < unaff_EBX) {
              pFVar5 = (FString *)FUN_10039a70();
              iVar2 = FString::Len(pFVar5);
              if (iVar2 < 1) goto LAB_1003e74e;
LAB_1003e7da:
              pFVar5 = (FString *)FUN_10039a70();
              iVar2 = FString::Len(pFVar5);
              in_ECX[0xda] = in_ECX[0xda] + -1;
              in_ECX[0xdb] = iVar2 + -1;
            }
            else {
              in_ECX[0xdb] = iVar3;
              if (unaff_EBX < 1) goto LAB_1003e758;
              do {
                iVar2 = FUN_10015ac0();
                in_ECX[0xdb] = in_ECX[0xdb] + iVar2;
                unaff_EBX = unaff_EBX + -1;
              } while (unaff_EBX != 0);
              in_ECX[0xda] = in_ECX[0xda] + -1;
            }
          }
          else {
            pFVar5 = (FString *)FUN_10039a70();
            iVar2 = FString::Len(pFVar5);
            if (iVar2 == 0) {
LAB_1003e74e:
              in_ECX[0xdb] = 0;
LAB_1003e758:
              in_ECX[0xda] = in_ECX[0xda] + -1;
            }
            else {
              iVar2 = in_ECX[0xdb];
              pFVar5 = (FString *)FUN_10039a70();
              iVar7 = FString::Len(pFVar5);
              if ((iVar7 - iVar3) + -1 < iVar2) goto LAB_1003e7da;
              in_ECX[0xda] = in_ECX[0xda] + -1;
              in_ECX[0xdb] = iVar2 + iVar3;
            }
          }
        }
        else if (*(int *)GLanguageType_exref == 5) {
          puVar13 = local_b4;
          iVar7 = iVar2;
          pFVar5 = (FString *)FUN_10039a70(in_ECX[0xda]);
          pFVar5 = (FString *)FString::Mid(pFVar5,(int)puVar13,iVar7);
          local_8._0_1_ = 0xc;
          puVar6 = FString::operator*(pFVar5);
          FUN_10021620(puVar6);
          local_8 = (undefined1 *)CONCAT31(local_8._1_3_,4);
          FString::~FString(local_b8);
          puVar13 = local_ac;
          iVar7 = iVar3;
          pFVar5 = (FString *)FUN_10039a70(in_ECX[0xda]);
          pFVar5 = (FString *)FString::Mid(pFVar5,(int)puVar13,iVar7);
          local_c._0_1_ = 0xd;
          puVar13 = local_f0;
          puVar6 = FString::operator*(pFVar5);
          FUN_10021620(puVar6,puVar13);
          local_c = (void *)CONCAT31(local_c._1_3_,4);
          FString::~FString(local_b0);
          if (local_ec < unaff_EBX) {
LAB_1003e919:
            in_ECX[0xdb] = iVar2;
          }
          else {
            in_ECX[0xdb] = iVar3;
            if (0 < unaff_EBX) {
              do {
                iVar2 = FUN_10015ac0();
                in_ECX[0xdb] = in_ECX[0xdb] + iVar2;
                unaff_EBX = unaff_EBX + -1;
              } while (unaff_EBX != 0);
            }
          }
        }
        else {
          if (iVar2 - iVar3 <= in_ECX[0xdb] - iVar2) goto LAB_1003e919;
          in_ECX[0xdb] = (in_ECX[0xdb] - iVar2) + iVar3;
        }
        in_ECX[0xe0] = in_ECX[0xe0] + -1;
        if (0 < in_ECX[0xe1]) {
          FUN_1003afb0(in_ECX[0xda]);
        }
      }
    }
    goto LAB_1003e5ac;
  case 0x27:
    if ((((iVar2 == 0x12) || (iVar3 = FUN_10025df0(), iVar3 == 1)) || (iVar2 == 9)) ||
       (((iVar2 == 0xb || (iVar2 == 10)) || (iVar2 == 0xc)))) {
      iVar3 = FString::Len((FString *)(in_ECX + 0xc1));
      if ((iVar3 != 0) && (iVar2 == 0x12)) {
        FString::operator*((FString *)(in_ECX + 0xc1));
        FUN_1003a470();
      }
      iVar2 = FUN_10039a70();
      if (iVar2 != 0) {
        if (*(int *)GLanguageType_exref == 5) {
          pFVar5 = (FString *)FUN_10039a70();
          FString::Len(pFVar5);
          puVar13 = local_9c;
          pFVar5 = (FString *)FUN_10039a70();
          pFVar5 = (FString *)FString::Right(pFVar5,(int)puVar13);
          local_8._0_1_ = 7;
          puVar6 = FString::operator*(pFVar5);
          FUN_10021620(puVar6);
          local_8 = (undefined1 *)CONCAT31(local_8._1_3_,4);
          FString::~FString(local_a0);
          if (local_108 < 1) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_10015ac0();
          }
        }
        else {
          iVar2 = 1;
        }
        iVar3 = in_ECX[0xdb];
        if (in_ECX[0xda] + 1 < in_ECX[0xdf]) {
          pFVar5 = (FString *)FUN_10039a70();
          iVar7 = FString::Len(pFVar5);
          if (iVar3 < iVar7 + -1) {
            puVar13 = local_c8;
            pFVar5 = (FString *)FUN_10039a70(in_ECX[0xda]);
            pFVar5 = (FString *)FString::Mid(pFVar5,(int)puVar13,iVar3);
            local_10 = 8;
            FString::operator=((FString *)&local_108,pFVar5);
            pFVar5 = aFStack_cc;
LAB_1003e54d:
            local_10 = 4;
            FString::~FString(pFVar5);
            uVar14 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar15 = 0;
            puVar6 = FString::operator*((FString *)&local_108);
            FUN_10020bb0(&local_fc,puVar6,uVar15,uVar9,uVar10,uVar11,uVar12,uVar14);
            in_ECX[0xe1] = in_ECX[0xe1] + local_fc;
            iVar3 = in_ECX[0xe1];
            iVar7 = FUN_101c19e0();
            if (iVar7 + -0x24 < iVar3) {
              in_ECX[0xe0] = in_ECX[0xe0] + 1;
              in_ECX[0xe1] = local_fc;
            }
            in_ECX[0xdb] = in_ECX[0xdb] + iVar2;
          }
          else {
            in_ECX[0xda] = in_ECX[0xda] + 1;
            in_ECX[0xe0] = in_ECX[0xe0] + 1;
            in_ECX[0xdb] = 0;
            in_ECX[0xe1] = 0;
          }
        }
        else {
          pFVar5 = (FString *)FUN_10039a70();
          iVar7 = FString::Len(pFVar5);
          if (iVar3 < iVar7) {
            puVar13 = local_8c;
            pFVar5 = (FString *)FUN_10039a70(in_ECX[0xda]);
            pFVar5 = (FString *)FString::Mid(pFVar5,(int)puVar13,iVar3);
            local_10 = 9;
            FString::operator=((FString *)&local_108,pFVar5);
            pFVar5 = local_90;
            goto LAB_1003e54d;
          }
        }
      }
    }
    goto LAB_1003e5ac;
  case 0x28:
    if ((iVar2 == 0x12) || (iVar2 = FUN_10025df0(), iVar2 == 1)) {
      iVar2 = FString::Len((FString *)(in_ECX + 0xc1));
      if (iVar2 != 0) {
        FString::operator*((FString *)(in_ECX + 0xc1));
        FUN_1003a470();
      }
      FUN_1003dc60();
    }
LAB_1003e5ac:
    FUN_10037c70();
    (**(code **)(*in_ECX + 0x1f8))();
    break;
  case 0x2e:
    local_4._0_1_ = uVar1;
    if (((iVar2 == 0x12) || (iVar2 = FUN_10025df0(), iVar2 == 1)) &&
       (iVar2 = FUN_10039a70(), iVar2 != 0)) {
      uVar8 = FUN_100abe10();
      if ((int)uVar8 + -1 <= (int)((ulonglong)uVar8 >> 0x20)) {
        pFVar5 = (FString *)FUN_10039a70();
        iVar2 = FString::Len(pFVar5);
        if (iVar2 <= in_ECX[0xdb]) goto LAB_1003efa9;
      }
      (**(code **)(*in_ECX + 0x198))();
      if (*(int *)GLanguageType_exref == 5) {
        if ((in_ECX[0xdb] == 0) && (0 < in_ECX[0xda])) {
          (**(code **)(*in_ECX + 0x198))(8);
        }
        else {
          puVar13 = auStack_20;
          pFVar5 = (FString *)FUN_10039a70(in_ECX[0xda]);
          pFVar5 = (FString *)FString::Left(pFVar5,(int)puVar13);
          local_10 = 0x16;
          uVar15 = 0;
          puVar13 = &stack0xfffffeec;
          puVar6 = FString::operator*(pFVar5);
          FUN_10021620(puVar6,puVar13,uVar15);
          local_10 = 4;
          FString::~FString(local_24);
          if (unaff_EBP == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_10015ac0();
          }
          iVar7 = in_ECX[0xdb] - iVar2;
          iVar3 = iVar2;
          pFVar5 = (FString *)FUN_10039a70(in_ECX[0xda]);
          FString::Delete(pFVar5,iVar7,iVar3);
          in_ECX[0xdb] = in_ECX[0xdb] - iVar2;
          FUN_10039f60(0);
          iVar2 = FUN_100abe10();
          in_ECX[0xdf] = iVar2;
          FUN_10037c70();
          (**(code **)(*in_ECX + 0x1f8))();
        }
      }
      else {
        (**(code **)(*in_ECX + 0x198))(8);
      }
    }
LAB_1003efa9:
    iVar2 = FUN_100abe10();
    in_ECX[0xdf] = iVar2;
LAB_1003e344:
    FUN_10037c70();
    (**(code **)(*in_ECX + 0x1f8))();
    break;
  case 0xe5:
    if (iVar2 == 10) {
      if (param_2 == 0x14b0001) {
        local_4._0_1_ = uVar1;
        iVar2 = FUN_100246a0();
        if (iVar2 != 0) {
          FUN_10007ae0();
        }
      }
      else if ((param_2 == 0x14d0001) && (local_4._0_1_ = uVar1, iVar2 = FUN_100246a0(), iVar2 != 0)
              ) {
        FUN_10008540();
      }
    }
  }
  local_4._0_1_ = 2;
  FUN_10019740();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10019740();
  local_4 = 0xffffffff;
  FString::~FString((FString *)&local_fc);
  ExceptionList = local_c;
  return 1;
}


// ==== 1003f170 FUN_1003f170

void FUN_1003f170(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101ddf7b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100031f0();
  local_8 = 0;
  *in_ECX = NCMultiEdit::vftable;
  in_ECX[0xb7] = 0;
  FUN_10039970();
  local_8._0_1_ = 1;
  FArray::FArray((FArray *)(in_ECX + 0xbe));
  local_8._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0xc1));
  local_8 = CONCAT31(local_8._1_3_,4);
  in_ECX[0xc4] = 0;
  in_ECX[0xd9] = 0;
  in_ECX[0xda] = 0;
  in_ECX[0xdb] = 0;
  in_ECX[0xdc] = 0;
  in_ECX[0xdd] = 0;
  in_ECX[0xde] = 0;
  in_ECX[0xdf] = 1;
  in_ECX[0xe0] = 0;
  in_ECX[0xe1] = 0;
  in_ECX[0xe2] = 0;
  in_ECX[0xe6] = 0;
  in_ECX[0xe7] = 0;
  in_ECX[0xe8] = 0;
  in_ECX[0xe9] = 0;
  in_ECX[0xec] = 0;
  FString::FString((FString *)(in_ECX + 0xed));
  in_ECX[0xf6] = 1;
  *(undefined2 *)(in_ECX + 0xe3) = 0;
  *(undefined2 *)((int)in_ECX + 0x38e) = 0;
  in_ECX[0xf2] = param_1;
  in_ECX[0xf1] = param_2;
  in_ECX[0xf3] = 0;
  in_ECX[0xf4] = 0;
  in_ECX[0xf5] = param_3;
  in_ECX[0xea] = 0;
  in_ECX[0xeb] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1003f2c4 Catch@1003f2c4

void Catch_1003f2c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003f2d8 Catch@1003f2d8

void Catch_1003f2d8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMultiEdit::NCMultiEdit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003f300 FUN_1003f300

void FUN_1003f300(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101ddfe2;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCMultiEdit::vftable;
  local_4 = 4;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 3;
  FString::~FString((FString *)(in_ECX + 0x3b4));
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x304));
  local_4._0_1_ = 1;
  FUN_10039be0(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1003e000();
  local_4 = 0xffffffff;
  FUN_10002a70();
  ExceptionList = local_c;
  return;
}


// ==== 1003f3a0 FUN_1003f3a0

void FUN_1003f3a0(byte param_1)

{
  void *in_ECX;
  
  FUN_1003f300();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3dc);
  }
  return;
}


// ==== 1003f3f0 FUN_1003f3f0

undefined4 FUN_1003f3f0(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) {
    return 1;
  }
  return 0;
}


// ==== 1003f462 Catch@1003f462

void Catch_1003f462(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003f476 Catch@1003f476

void Catch_1003f476(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPoint::operator==");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003f4a0 FUN_1003f4a0

undefined4 FUN_1003f4a0(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de020;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1003f3f0(param_1);
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1003f50e Catch@1003f50e

void Catch_1003f50e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003f522 Catch@1003f522

void Catch_1003f522(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPoint::operator==");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003f540 FUN_1003f540

void FUN_1003f540(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101de049;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = NCObject::vftable;
  UObject::SetFlags(in_ECX,0x4000000);
  ExceptionList = local_c;
  return;
}


// ==== 1003f5b0 FUN_1003f5b0

void FUN_1003f5b0(void)

{
  UObject *in_ECX;
  
  UObject::ClearFlags(in_ECX,0x4000000);
                    /* WARNING: Could not recover jumptable at 0x1003f5c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::Destroy(in_ECX);
  return;
}


// ==== 1003f5d0 FUN_1003f5d0

void FUN_1003f5d0(void)

{
  ImmGetContext(DAT_103663b8);
  return;
}


// ==== 1003f5e0 FUN_1003f5e0

void FUN_1003f5e0(HIMC param_1)

{
  ImmReleaseContext(DAT_103663b8,param_1);
  return;
}


// ==== 1003f600 FUN_1003f600

void FUN_1003f600(void)

{
  FUN_10150550();
  return;
}


// ==== 1003f610 FUN_1003f610

void FUN_1003f610(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_1014b5f0(param_1,in_ECX);
  return;
}


// ==== 1003f630 FUN_1003f630

UObject * FUN_1003f630(ushort *param_1,int param_2)

{
  UClass *pUVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  ushort *puVar4;
  UObject *pUVar5;
  int iVar6;
  UObject *pUVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de070;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == (ushort *)0x0) {
    return (UObject *)0x0;
  }
  iVar6 = 0;
  pUVar2 = (UObject *)0xffffffff;
  ExceptionList = &local_10;
  puVar4 = param_1;
  pUVar1 = UTexture::StaticClass();
  pUVar2 = UObject::StaticFindObject(pUVar1,pUVar2,puVar4,iVar6);
  if (pUVar2 == (UObject *)0x0) {
    pUVar3 = pUVar2;
    pUVar5 = pUVar2;
    pUVar7 = pUVar2;
    pUVar1 = UTexture::StaticClass();
    pUVar2 = UObject::StaticLoadObject
                       (pUVar1,pUVar2,param_1,(ushort *)pUVar3,(ulong)pUVar5,(UPackageMap *)pUVar7);
    if (pUVar2 == (UObject *)0x0) {
      if (param_2 == 0) {
        ExceptionList = local_10;
        return (UObject *)0x0;
      }
      FUN_10002030();
      pUVar2 = (UObject *)FUN_1003f630(L"Default.BlackTexture",1);
      if (pUVar2 == (UObject *)0x0) {
        ExceptionList = local_10;
        return (UObject *)0x0;
      }
    }
  }
  UObject::SetFlags(pUVar2,0x4000000);
  ExceptionList = local_10;
  return pUVar2;
}


// ==== 1003f709 Catch@1003f709

void Catch_1003f709(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1003f71d Catch@1003f71d

void Catch_1003f71d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCObject::LoadTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003f740 FUN_1003f740

void FUN_1003f740(FString *param_1,undefined4 param_2)

{
  ushort *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de090;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = FString::operator*(param_1);
  FUN_1003f630(puVar1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1003f79d Catch@1003f79d

void Catch_1003f79d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003f7b1 Catch@1003f7b1

void Catch_1003f7b1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCObject::LoadTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003f7d0 FUN_1003f7d0

UObject * FUN_1003f7d0(ushort *param_1)

{
  int iVar1;
  ULevel *pUVar2;
  UClass *pUVar3;
  undefined4 *puVar4;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  UObject *pUVar5;
  ushort *puVar6;
  ulong uVar7;
  UPackageMap *pUVar8;
  FRotator local_c [12];
  
  pUVar2 = AActor::GetLevel(*(AActor **)(*(int *)(DAT_103663c0 + 0xa4) + 0x3c));
  pUVar8 = (UPackageMap *)0x0;
  uVar7 = 0;
  puVar6 = (ushort *)0x0;
  pUVar5 = (UObject *)0x0;
  pUVar3 = AActor::StaticClass();
  local_40 = 0x1003f806;
  pUVar3 = UObject::StaticLoadClass(pUVar3,pUVar5,param_1,puVar6,uVar7,pUVar8);
  iVar1 = *(int *)pUVar2;
  puVar4 = (undefined4 *)FRotator::FRotator(local_c,0,0,0);
  local_44 = *puVar4;
  local_40 = puVar4[1];
  local_50 = 0;
  uStack_54 = 0;
  local_4c = 0;
  local_48 = 0;
  FName::FName((FName *)&uStack_54,0);
  pUVar5 = (UObject *)(**(code **)(iVar1 + 0xc0))(pUVar3);
  if (pUVar5 != (UObject *)0x0) {
    UObject::SetFlags(pUVar5,0x4000000);
  }
  return pUVar5;
}


// ==== 1003f8a0 FUN_1003f8a0

float10 FUN_1003f8a0(void)

{
  return (float10)*(float *)(DAT_103663bc + 0x50f4);
}


// ==== 1003f8b0 FUN_1003f8b0

void FUN_1003f8b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de0b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101455d0(param_1,param_2,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 1003f914 Catch@1003f914

void Catch_1003f914(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003f928 Catch@1003f928

void Catch_1003f928(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCObject::SetL2Cursor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003f950 FUN_1003f950

void FUN_1003f950(void)

{
  FUN_10145680();
  return;
}


// ==== 1003f960 FUN_1003f960

void FUN_1003f960(void)

{
  FUN_10145690();
  return;
}


// ==== 1003f970 FUN_1003f970

void FUN_1003f970(void)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101de0d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FString::FString(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1003f9cc Catch@1003f9cc

void Catch_1003f9cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003f9e0 Catch@1003f9e0

void Catch_1003f9e0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::NCParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003fa00 FUN_1003fa00

void FUN_1003fa00(FString *param_1)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101de109;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FString::FString(in_ECX);
  local_8 = 1;
  FString::operator=(in_ECX,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1003fa6a Catch@1003fa6a

void Catch_1003fa6a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003fa7e Catch@1003fa7e

void Catch_1003fa7e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::NCParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003faa0 FUN_1003faa0

void FUN_1003faa0(void)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de130;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::Empty(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1003faf1 Catch@1003faf1

void Catch_1003faf1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003fb05 Catch@1003fb05

void Catch_1003fb05(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003fb30 FUN_1003fb30

void FUN_1003fb30(FString *param_1,FString *param_2,int param_3)

{
  int iVar1;
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de150;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::operator_int(in_ECX);
  if (iVar1 != 0) {
    FString::operator+=(in_ECX,&DAT_1023d5d0);
  }
  FString::operator+=(in_ECX,param_1);
  FString::operator+=(in_ECX,(ushort *)&DAT_1023d5cc);
  if (param_3 == 0) {
    FString::operator+=(in_ECX,param_2);
  }
  else {
    FString::operator+=(in_ECX,0x7f);
    FString::operator+=(in_ECX,param_2);
    FString::operator+=(in_ECX,0x7f);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1003fbe1 Catch@1003fbe1

void Catch_1003fbe1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003fbf5 Catch@1003fbf5

void Catch_1003fbf5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::Add");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003fc20 FUN_1003fc20

undefined4 FUN_1003fc20(ushort *param_1,ushort *param_2,FString *param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = appStrfind(param_1,param_2);
  iVar2 = appStrlen(param_2);
  if (puVar1 == (ushort *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  while (puVar1 = puVar1 + iVar2, *puVar1 != 0x3d) {
    puVar1 = appStrfind(puVar1,param_2);
    if (puVar1 == (ushort *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
  }
  puVar3 = puVar1 + 1;
  if (*puVar3 == 0x7f) {
    puVar3 = puVar1 + 2;
    param_2._0_2_ = 0x7f;
  }
  else {
    param_2._0_2_ = 0x20;
  }
  FString::Empty(param_3);
  for (iVar2 = 0; (iVar2 < 0x1000 && (puVar3[iVar2] != (ushort)param_2)); iVar2 = iVar2 + 1) {
    FString::operator+=(param_3,puVar3[iVar2]);
    if (puVar3[iVar2] == 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1003fd1c Catch@1003fd1c

void Catch_1003fd1c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1003fd30 Catch@1003fd30

void Catch_1003fd30(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::Parse");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003fd50 FUN_1003fd50

undefined4 FUN_1003fd50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de190;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1003f4a0(in_ECX);
  if (((iVar1 == 0) && (*(float *)(in_ECX + 8) == *(float *)(param_1 + 8))) &&
     (*(float *)(in_ECX + 0xc) == *(float *)(param_1 + 0xc))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  ExceptionList = local_10;
  return uVar2;
}


// ==== 1003fdd0 Catch@1003fdd0

void Catch_1003fdd0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003fde4 Catch@1003fde4

void Catch_1003fde4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRect::operator ==");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003fe10 FUN_1003fe10

undefined4 FUN_1003fe10(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de1b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1003fd50(param_1);
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1003fe7e Catch@1003fe7e

void Catch_1003fe7e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003fe92 Catch@1003fe92

void Catch_1003fe92(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRect::operator !=");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003feb0 FUN_1003feb0

undefined4 FUN_1003feb0(undefined4 param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de1d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100052e0(param_1,param_2);
  FUN_100052e0(param_1,param_2 + 4);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1003ff10 Catch@1003ff10

void Catch_1003ff10(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003ff24 Catch@1003ff24

void Catch_1003ff24(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPoint::operator<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003ff50 FUN_1003ff50

undefined4 FUN_1003ff50(undefined4 param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de1f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003feb0(param_1,param_2);
  FUN_100052e0(param_1,param_2 + 8);
  FUN_100052e0(param_1,param_2 + 0xc);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1003ffba Catch@1003ffba

void Catch_1003ffba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1003ffce Catch@1003ffce

void Catch_1003ffce(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRect::operator<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1003fff0 FUN_1003fff0

void FUN_1003fff0(void)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de219;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_1003faa0();
  local_8 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10040051 Catch@10040051

void Catch_10040051(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10040065 Catch@10040065

void Catch_10040065(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::~NCParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10040090 FUN_10040090

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


// ==== 10040120 Catch@10040120

void Catch_10040120(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10040134 Catch@10040134

void Catch_10040134(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::AddParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10040160 FUN_10040160

void FUN_10040160(FString *param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de279;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::Len(param_1);
  if (iVar1 != 0) {
    uVar2 = FString::Printf((ushort *)local_28,&DAT_1023d700,(double)param_2);
    local_8._0_1_ = 1;
    FUN_1003fb30(param_1,uVar2,0);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100401f7 Catch@100401f7

void Catch_100401f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004020b Catch@1004020b

void Catch_1004020b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::AddParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10040230 FUN_10040230

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


// ==== 100402e0 Catch@100402e0

void Catch_100402e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100402f4 Catch@100402f4

void Catch_100402f4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::AddParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10040320 FUN_10040320

void FUN_10040320(FString *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de2d9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::Len(param_1);
  if (iVar1 != 0) {
    uVar2 = FString::Printf((ushort *)local_28,L"%d/%d",*param_2,param_2[1]);
    local_8._0_1_ = 1;
    FUN_1003fb30(param_1,uVar2,1);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100403b6 Catch@100403b6

void Catch_100403b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100403ca Catch@100403ca

void Catch_100403ca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::AddParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100403f0 FUN_100403f0

void FUN_100403f0(FString *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de309;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100631b0(param_2,param_3,&param_2);
  iVar1 = FString::Len(param_1);
  if (iVar1 != 0) {
    uVar2 = FString::Printf((ushort *)local_28,L"%d/%d",param_2,param_3);
    local_8._0_1_ = 1;
    FUN_1003fb30(param_1,uVar2,1);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10040498 Catch@10040498

void Catch_10040498(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100404ac Catch@100404ac

void Catch_100404ac(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::AddParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100404d0 FUN_100404d0

undefined4 FUN_100404d0(FString *param_1,int *param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  FString *in_ECX;
  FString *pFVar4;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de339;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8._0_1_ = 1;
  iVar1 = FString::Len(param_1);
  if (iVar1 != 0) {
    iVar1 = FString::Len(in_ECX);
    if (iVar1 != 0) {
      pFVar4 = local_28;
      puVar2 = FString::operator*(param_1);
      puVar3 = FString::operator*(in_ECX);
      iVar1 = FUN_1003fc20(puVar3,puVar2,pFVar4);
      if (iVar1 != 0) {
        puVar2 = FString::operator*(local_28);
        iVar1 = appAtoi(puVar2);
        *param_2 = iVar1;
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_28);
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return 0;
}


// ==== 100405a8 Catch@100405a8

void Catch_100405a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100405bc Catch@100405bc

void Catch_100405bc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::GetValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100405e0 FUN_100405e0

undefined4 FUN_100405e0(FString *param_1,float *param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  FString *in_ECX;
  float fVar4;
  FString *pFVar5;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de369;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8._0_1_ = 1;
  iVar1 = FString::Len(param_1);
  if ((iVar1 != 0) && (iVar1 = FString::Len(in_ECX), iVar1 != 0)) {
    pFVar5 = local_28;
    puVar2 = FString::operator*(param_1);
    puVar3 = FString::operator*(in_ECX);
    iVar1 = FUN_1003fc20(puVar3,puVar2,pFVar5);
    if (iVar1 != 0) {
      puVar2 = FString::operator*(local_28);
      fVar4 = appAtof(puVar2);
      *param_2 = fVar4;
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
      ExceptionList = local_10;
      return 1;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return 0;
}


// ==== 100406a8 Catch@100406a8

void Catch_100406a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100406bc Catch@100406bc

void Catch_100406bc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::GetValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100406e0 FUN_100406e0

undefined4 FUN_100406e0(FString *param_1,undefined4 param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de390;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::Len(param_1);
  if (iVar1 != 0) {
    iVar1 = FString::Len(in_ECX);
    if (iVar1 != 0) {
      puVar2 = FString::operator*(param_1);
      puVar3 = FString::operator*(in_ECX);
      iVar1 = FUN_1003fc20(puVar3,puVar2,param_2);
      if (iVar1 != 0) {
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1004077f Catch@1004077f

void Catch_1004077f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10040793 Catch@10040793

void Catch_10040793(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::GetValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100407b0 FUN_100407b0

undefined4 FUN_100407b0(FString *param_1,int *param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  FString *pFVar4;
  int iVar5;
  FString *in_ECX;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de3cb;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8._0_1_ = 1;
  iVar1 = FString::Len(param_1);
  if (iVar1 != 0) {
    iVar1 = FString::Len(in_ECX);
    if (iVar1 != 0) {
      pFVar4 = local_28;
      puVar2 = FString::operator*(param_1);
      puVar3 = FString::operator*(in_ECX);
      iVar1 = FUN_1003fc20(puVar3,puVar2,pFVar4);
      if (iVar1 != 0) {
        iVar1 = FString::InStr(local_28,&DAT_1023d810,0);
        pFVar4 = (FString *)FString::Left(local_28,(int)local_34);
        local_8._0_1_ = 2;
        puVar2 = FString::operator*(pFVar4);
        iVar5 = appAtoi(puVar2);
        *param_2 = iVar5;
        local_8._0_1_ = 1;
        FString::~FString(local_34);
        pFVar4 = (FString *)FString::Mid(local_28,(int)local_34,iVar1 + 1);
        local_8._0_1_ = 3;
        puVar2 = FString::operator*(pFVar4);
        iVar1 = appAtoi(puVar2);
        param_2[1] = iVar1;
        local_8._0_1_ = 1;
        FString::~FString(local_34);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_28);
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return 0;
}


// ==== 10040904 Catch@10040904

void Catch_10040904(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10040918 Catch@10040918

void Catch_10040918(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCParam::GetValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10040940 FUN_10040940

void FUN_10040940(void)

{
  int iVar1;
  undefined4 uVar2;
  ALineagePlayerController *this;
  int iVar3;
  int in_stack_0000001c;
  FString *pFVar4;
  FString *pFVar5;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de414;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  pFVar5 = local_34;
  FString::Caps((FString *)&stack0x00000004);
  local_8._0_1_ = 3;
  pFVar4 = local_28;
  FString::Caps((FString *)&stack0x00000010);
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar1 = FString::operator==(local_34,(ushort *)L"VIDEO");
  if (iVar1 == 0) {
    iVar1 = FString::operator==(local_34,(ushort *)L"L2WATEREFFECT");
    if (iVar1 == 0) {
      iVar1 = FString::operator==(local_34,(ushort *)L"GAME");
      if (iVar1 == 0) goto LAB_10040dd4;
      iVar1 = FString::operator==(local_28,(ushort *)L"ISNATIVE");
      if (iVar1 == 0) {
        iVar1 = FString::operator==(local_28,(ushort *)L"MYNAME");
        if (iVar1 == 0) {
          iVar1 = FString::operator==(local_28,(ushort *)L"NPCNAME");
          if (iVar1 == 0) {
            iVar1 = FString::operator==(local_28,(ushort *)L"OTHERPCNAME");
            if (iVar1 == 0) {
              iVar1 = FString::operator==(local_28,(ushort *)L"PLEDGEMEMBERNAME");
              if (iVar1 == 0) {
                iVar1 = FString::operator==(local_28,(ushort *)L"PARTYMEMBERNAME");
                if (iVar1 == 0) {
                  iVar1 = FString::operator==(local_28,(ushort *)L"GROUPNAME");
                  if (iVar1 == 0) {
                    iVar1 = FString::operator==(local_28,(ushort *)L"TRANSPARENCYMODE");
                    if (iVar1 == 0) {
                      iVar1 = FString::operator==(local_28,(ushort *)L"ARROWMODE");
                      if (iVar1 == 0) {
                        iVar1 = FString::operator==(local_28,(ushort *)L"AUTOTRACKINGPAWN");
                        if (iVar1 == 0) {
                          iVar3 = FString::operator==(local_28,(ushort *)L"ENTERCHATTING");
                          iVar1 = in_stack_0000001c;
                          if (iVar3 == 0) {
                            iVar1 = FString::operator==(local_28,(ushort *)L"OLDCHATTING");
                            if (iVar1 == 0) {
                              iVar1 = FString::operator==(local_28,(ushort *)L"USEJOYSTICK");
                              if (iVar1 == 0) {
                                iVar1 = FString::operator==(local_28,(ushort *)L"HIDEDROPITEM");
                                if (iVar1 == 0) {
                                  iVar1 = FString::operator==(local_28,(ushort *)L"ISREJECTINGDUEL")
                                  ;
                                  if (iVar1 == 0) goto LAB_10040dd4;
                                  *(int *)GIsRejectingDuel_exref = in_stack_0000001c;
                                }
                                else {
                                  *(int *)GL2HideDropMesh_exref = in_stack_0000001c;
                                }
                              }
                              else {
                                *(int *)GL2UsingJoystick_exref = in_stack_0000001c;
                                (**(code **)(*DAT_103663bc + 0x2cc))();
                              }
                            }
                            else {
                              *(int *)GIsOldChat_exref = in_stack_0000001c;
                            }
                          }
                          else {
                            if (*(int *)GIsEnterChatting_exref != in_stack_0000001c) {
                              if (in_stack_0000001c != 0) {
                                FUN_10024ac0();
                                *(int *)GIsEnterChatting_exref = iVar1;
                                goto LAB_10040a01;
                              }
                              FUN_1002a8e0();
                            }
                            *(int *)GIsEnterChatting_exref = iVar1;
                          }
                        }
                        else {
                          *(int *)GL2UseAutoTrackingPawn_exref = in_stack_0000001c;
                        }
                      }
                      else {
                        *(int *)GIsArrowMode_exref = in_stack_0000001c;
                      }
                    }
                    else {
                      *(int *)GIsTransparencyMode_exref = in_stack_0000001c;
                    }
                  }
                  else {
                    *(int *)GL2ShowGroupName_exref = in_stack_0000001c;
                  }
                }
                else {
                  *(int *)GL2ShowPartyMemberName_exref = in_stack_0000001c;
                }
              }
              else {
                *(int *)GL2ShowPledgeMemberName_exref = in_stack_0000001c;
              }
            }
            else {
              *(int *)GL2ShowOtherPCName_exref = in_stack_0000001c;
            }
          }
          else {
            *(int *)GL2ShowNPCName_exref = in_stack_0000001c;
          }
        }
        else {
          *(int *)GL2ShowMyName_exref = in_stack_0000001c;
        }
      }
      else if (*(int *)GIsNative_exref != in_stack_0000001c) {
        *(int *)GIsNative_exref = in_stack_0000001c;
        FL2GameData::Clear((FL2GameData *)GL2GameData_exref);
        FL2GameData::Load((FL2GameData *)GL2GameData_exref,0);
        this = (ALineagePlayerController *)FUN_1014b8c0();
        ALineagePlayerController::InvalidateZoneName(this);
        FUN_10164610();
      }
    }
    else {
      iVar1 = FString::operator==(local_28,(ushort *)L"ISUSEEFFECT");
      if (iVar1 == 0) {
LAB_10040dd4:
        local_8._0_1_ = 3;
        FString::~FString(local_28);
        local_8 = CONCAT31(local_8._1_3_,2);
        FString::~FString(local_34);
        local_8 = 0;
        goto LAB_10040a1e;
      }
      *(int *)GIsL2WaterEffect_exref = in_stack_0000001c;
    }
  }
  else {
    iVar1 = FString::operator==(local_28,(ushort *)L"ISKEEPMINFRAMERATE");
    if (iVar1 == 0) {
      iVar1 = FString::operator==(local_28,(ushort *)L"USETRILINEAR");
      if (iVar1 == 0) {
        iVar1 = FString::operator==(local_28,(ushort *)L"USECOLORCURSOR");
        if (iVar1 == 0) {
          iVar1 = FString::operator==(local_28,(ushort *)L"GPUANIMATION");
          if (iVar1 == 0) goto LAB_10040dd4;
          *(int *)GL2GPUSkinning_exref = in_stack_0000001c;
        }
        else {
          *(int *)GL2UseColorCursor_exref = in_stack_0000001c;
          if (in_stack_0000001c == 0) {
            FUN_101455d0(0,0,0);
            FUN_10145680();
          }
        }
      }
      else {
        uVar2 = (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x5c) + 0xb0))(pFVar4);
        *(undefined4 *)GL2UseTrilinear_exref = uVar2;
        if (*(int *)GL2UseTrilinear_exref != in_stack_0000001c) {
          *(int *)GL2UseTrilinear_exref = in_stack_0000001c;
          (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x5c) + 0xb4))
                    (*(undefined4 *)GL2UseTrilinear_exref);
        }
      }
    }
    else if (*(int *)GL2KeepMinFrameRate_exref != in_stack_0000001c) {
      *(int *)GL2KeepMinFrameRate_exref = in_stack_0000001c;
      FUN_10147060(pFVar4,pFVar5);
      if (*(int *)GL2TextureDetail_exref != 2) {
        (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x5c) + 0xac))();
      }
    }
  }
LAB_10040a01:
  local_8._0_1_ = 3;
  FString::~FString(local_28);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
LAB_10040a1e:
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return;
}


// ==== 10040df9 Catch@10040df9

void Catch_10040df9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10040e0d Catch@10040e0d

void Catch_10040e0d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::SetOptionBoolToGlobal");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10040e30 FUN_10040e30

void FUN_10040e30(void)

{
  int iVar1;
  float *pfVar2;
  float in_stack_0000001c;
  FString *pFVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de454;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FString::Caps((FString *)&stack0x00000004);
  local_8._0_1_ = 3;
  pFVar3 = local_28;
  FString::Caps((FString *)&stack0x00000010);
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar1 = FString::operator==(local_34,(ushort *)L"CLIPPINGRANGE");
  if (iVar1 == 0) {
    iVar1 = FString::operator==(local_34,(ushort *)L"VIDEO");
    if (iVar1 == 0) {
      iVar1 = FString::operator==(local_34,(ushort *)L"AUDIO");
      if (iVar1 == 0) goto LAB_100411f1;
      iVar1 = FString::operator==(local_28,(ushort *)L"SOUNDVOLUME");
      if (iVar1 == 0) {
        iVar1 = FString::operator==(local_28,(ushort *)L"MUSICVOLUME");
        if (iVar1 == 0) {
          iVar1 = FString::operator==(local_28,(ushort *)L"WAVVOICEVOLUME");
          if (iVar1 == 0) {
            iVar1 = FString::operator==(local_28,(ushort *)L"OGGVOICEVOLUME");
            if (iVar1 == 0) goto LAB_100411f1;
            if ((*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0) &&
               ((**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xa0))
                          (in_stack_0000001c), in_stack_0000001c == 0.0)) {
              (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xe0))(0,1);
            }
          }
          else if ((*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0) &&
                  ((**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xa4))
                             (in_stack_0000001c), in_stack_0000001c == 0.0)) {
            (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xe0))(0,0);
          }
        }
        else if ((*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0) &&
                ((**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0x9c))
                           (in_stack_0000001c), in_stack_0000001c == 0.0)) {
          (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xd8))(0,0);
        }
      }
      else if ((*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0) &&
              ((**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0x94))
                         (in_stack_0000001c), in_stack_0000001c == 0.0)) {
        (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0x88))(0,0);
      }
    }
    else {
      iVar1 = FString::operator==(local_28,(ushort *)L"GAMMA");
      if (iVar1 == 0) {
LAB_100411f1:
        local_8._0_1_ = 3;
        FString::~FString(local_28);
        local_8 = CONCAT31(local_8._1_3_,2);
        FString::~FString(local_34);
        local_8 = 0;
        FString::~FString((FString *)&stack0x00000004);
        local_8 = 0xffffffff;
        FString::~FString((FString *)&stack0x00000010);
        ExceptionList = local_10;
        return;
      }
      iVar1 = *(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54);
      if ((iVar1 != 0) && (in_stack_0000001c != *(float *)(iVar1 + 0x84))) {
        *(float *)(iVar1 + 0x84) = in_stack_0000001c;
        (**(code **)(**(int **)(DAT_103663bc + 0x50) + 0x78))(pFVar3);
      }
    }
    goto LAB_10040ebd;
  }
  iVar1 = FString::operator==(local_28,(ushort *)L"PAWN");
  pfVar2 = (float *)GL2OriginPawnCR_exref;
  if (iVar1 == 0) {
    iVar1 = FString::operator==(local_28,(ushort *)L"TERRAIN");
    if (iVar1 != 0) {
      if (in_stack_0000001c != *(float *)GL2OriginTerrainCR_exref) {
        *(float *)GL2OriginTerrainCR_exref = in_stack_0000001c;
        FUN_10147060();
      }
      goto LAB_10040ebd;
    }
    iVar1 = FString::operator==(local_28,(ushort *)L"ACTOR");
    if (iVar1 != 0) {
      *(float *)GL2ActorCR_exref = in_stack_0000001c;
      goto LAB_10040ebd;
    }
    iVar1 = FString::operator==(local_28,(ushort *)L"STATICMESH");
    if (iVar1 != 0) {
      *(float *)GL2OriginStaticMeshCR_exref = in_stack_0000001c;
      goto LAB_10040ebd;
    }
    iVar1 = FString::operator==(local_28,(ushort *)L"STATICMESHLOD");
    pfVar2 = (float *)GL2OriginStaticMeshLodCR_exref;
    if (iVar1 == 0) goto LAB_100411f1;
  }
  *pfVar2 = in_stack_0000001c;
LAB_10040ebd:
  local_8._0_1_ = 3;
  FString::~FString(local_28);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return;
}


// ==== 1004123f Catch@1004123f

void Catch_1004123f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10041253 Catch@10041253

void Catch_10041253(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::SetOptionFloatToGlobal");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10041270 FUN_10041270

void FUN_10041270(void)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101de48b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = local_8 & 0xffffff00;
  FString::~FString((FString *)&stack0x00000010);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x0000001c);
  ExceptionList = local_10;
  return;
}


// ==== 100412e7 Catch@100412e7

void Catch_100412e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100412fb Catch@100412fb

void Catch_100412fb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::SetOptionStringToGlobal");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10041320 FUN_10041320

undefined4 FUN_10041320(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 *in_stack_0000001c;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de4d4;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FString::Caps((FString *)&stack0x00000004);
  local_8._0_1_ = 3;
  FString::Caps((FString *)&stack0x00000010);
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar1 = FString::operator==(local_34,(ushort *)L"VIDEO");
  if (iVar1 == 0) {
    iVar1 = FString::operator==(local_34,(ushort *)L"GAME");
    if (iVar1 == 0) {
      iVar1 = FString::operator==(local_34,(ushort *)L"L2WATEREFFECT");
      if (iVar1 == 0) goto LAB_10041646;
      iVar1 = FString::operator==(local_28,(ushort *)L"ISUSEEFFECT");
      pcVar2 = GIsL2WaterEffect_exref;
    }
    else {
      iVar1 = FString::operator==(local_28,(ushort *)L"TRANSPARENCYMODE");
      pcVar2 = GIsTransparencyMode_exref;
      if (((((iVar1 != 0) ||
            (iVar1 = FString::operator==(local_28,(ushort *)L"MYNAME"), pcVar2 = GL2ShowMyName_exref
            , iVar1 != 0)) ||
           (iVar1 = FString::operator==(local_28,(ushort *)L"NPCNAME"),
           pcVar2 = GL2ShowNPCName_exref, iVar1 != 0)) ||
          ((iVar1 = FString::operator==(local_28,(ushort *)L"OTHERPCNAME"),
           pcVar2 = GL2ShowOtherPCName_exref, iVar1 != 0 ||
           (iVar1 = FString::operator==(local_28,(ushort *)L"PLEDGEMEMBERNAME"),
           pcVar2 = GL2ShowPledgeMemberName_exref, iVar1 != 0)))) ||
         ((((iVar1 = FString::operator==(local_28,(ushort *)L"PARTYMEMBERNAME"),
            pcVar2 = GL2ShowPartyMemberName_exref, iVar1 != 0 ||
            ((iVar1 = FString::operator==(local_28,(ushort *)L"GROUPNAME"),
             pcVar2 = GL2ShowGroupName_exref, iVar1 != 0 ||
             (iVar1 = FString::operator==(local_28,(ushort *)L"ENTERCHATTING"),
             pcVar2 = GIsEnterChatting_exref, iVar1 != 0)))) ||
           (iVar1 = FString::operator==(local_28,(ushort *)L"OLDCHATTING"),
           pcVar2 = GIsOldChat_exref, iVar1 != 0)) ||
          ((((iVar1 = FString::operator==(local_28,(ushort *)L"USEJOYSTICK"),
             pcVar2 = GL2UsingJoystick_exref, iVar1 != 0 ||
             (iVar1 = FString::operator==(local_28,(ushort *)L"AUTOTRACKINGPAWN"),
             pcVar2 = GL2UseAutoTrackingPawn_exref, iVar1 != 0)) ||
            (iVar1 = FString::operator==(local_28,(ushort *)L"USECOLORCURSOR"),
            pcVar2 = GL2UseColorCursor_exref, iVar1 != 0)) ||
           ((iVar1 = FString::operator==(local_28,(ushort *)L"ARROWMODE"),
            pcVar2 = GIsArrowMode_exref, iVar1 != 0 ||
            (iVar1 = FString::operator==(local_28,(ushort *)L"ISNATIVE"), pcVar2 = GIsNative_exref,
            iVar1 != 0)))))))) goto LAB_100413a7;
      iVar1 = FString::operator==(local_28,(ushort *)L"HIDEDROPITEM");
      pcVar2 = GL2HideDropMesh_exref;
    }
  }
  else {
    iVar1 = FString::operator==(local_28,(ushort *)L"USECOLORCURSOR");
    pcVar2 = GL2UseColorCursor_exref;
    if (((iVar1 != 0) ||
        (iVar1 = FString::operator==(local_28,(ushort *)L"USETRILINEAR"),
        pcVar2 = GL2UseTrilinear_exref, iVar1 != 0)) ||
       (iVar1 = FString::operator==(local_28,(ushort *)L"ISKEEPMINFRAMERATE"),
       pcVar2 = GL2KeepMinFrameRate_exref, iVar1 != 0)) goto LAB_100413a7;
    iVar1 = FString::operator==(local_28,(ushort *)L"GPUANIMATION");
    pcVar2 = GL2GPUSkinning_exref;
  }
  if (iVar1 == 0) {
LAB_10041646:
    local_8._0_1_ = 3;
    FString::~FString(local_28);
    local_8._0_1_ = 2;
    FString::~FString(local_34);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString((FString *)&stack0x00000004);
    local_8 = 0xffffffff;
    FString::~FString((FString *)&stack0x00000010);
    ExceptionList = local_10;
    return 0;
  }
LAB_100413a7:
  *in_stack_0000001c = *(undefined4 *)pcVar2;
  local_8._0_1_ = 3;
  FString::~FString(local_28);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return 1;
}


// ==== 10041692 Catch@10041692

void Catch_10041692(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100416a6 Catch@100416a6

void Catch_100416a6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::GetOptionBoolFromGlobal");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100416d0 FUN_100416d0

undefined4 FUN_100416d0(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 *in_stack_0000001c;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de514;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FString::Caps((FString *)&stack0x00000004);
  local_8._0_1_ = 3;
  FString::Caps((FString *)&stack0x00000010);
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar1 = FString::operator==(local_34,(ushort *)L"VIDEO");
  if (iVar1 == 0) {
    iVar1 = FString::operator==(local_34,(ushort *)L"GAME");
    if (iVar1 == 0) goto LAB_1004184d;
    iVar1 = FString::operator==(local_28,(ushort *)L"PARTYLOOTING");
    pcVar2 = GL2PartyLooting_exref;
    if (iVar1 != 0) goto LAB_10041757;
    iVar1 = FString::operator==(local_28,(ushort *)L"SCREENSHOTQUALITY");
    pcVar2 = GL2ScreenShotQuality_exref;
  }
  else {
    iVar1 = FString::operator==(local_28,(ushort *)L"ANTIALIASING");
    pcVar2 = GL2Antialiasing_exref;
    if (((iVar1 != 0) ||
        (iVar1 = FString::operator==(local_28,(ushort *)L"RENDERACTORLIMITED"),
        pcVar2 = GL2RenderActorLimitOpt_exref, iVar1 != 0)) ||
       (iVar1 = FString::operator==(local_28,(ushort *)L"REFRESHRATE"), pcVar2 = GRefreshRate_exref,
       iVar1 != 0)) goto LAB_10041757;
    iVar1 = FString::operator==(local_28,(ushort *)L"TEXTUREDETAIL");
    pcVar2 = GL2TextureDetail_exref;
  }
  if (iVar1 == 0) {
LAB_1004184d:
    local_8._0_1_ = 3;
    FString::~FString(local_28);
    local_8._0_1_ = 2;
    FString::~FString(local_34);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString((FString *)&stack0x00000004);
    local_8 = 0xffffffff;
    FString::~FString((FString *)&stack0x00000010);
    ExceptionList = local_10;
    return 0;
  }
LAB_10041757:
  *in_stack_0000001c = *(undefined4 *)pcVar2;
  local_8._0_1_ = 3;
  FString::~FString(local_28);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return 1;
}


// ==== 10041899 Catch@10041899

void Catch_10041899(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100418ad Catch@100418ad

void Catch_100418ad(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::GetOptionIntFromGlobal");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100418d0 FUN_100418d0

undefined4 FUN_100418d0(void)

{
  int iVar1;
  undefined4 *in_stack_0000001c;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de554;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FString::Caps((FString *)&stack0x00000004);
  local_8._0_1_ = 3;
  FString::Caps((FString *)&stack0x00000010);
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar1 = FString::operator==(local_34,(ushort *)L"VIDEO");
  if (iVar1 == 0) {
    iVar1 = FString::operator==(local_34,(ushort *)L"CLIPPINGRANGE");
    if (iVar1 != 0) {
      iVar1 = FString::operator==(local_28,(ushort *)L"PAWN");
      if (iVar1 == 0) {
        iVar1 = FString::operator==(local_28,(ushort *)L"TERRAIN");
        if (iVar1 == 0) goto LAB_10041a12;
        *in_stack_0000001c = *(undefined4 *)GL2OriginTerrainCR_exref;
      }
      else {
        *in_stack_0000001c = *(undefined4 *)GL2OriginPawnCR_exref;
      }
LAB_10041969:
      local_8._0_1_ = 3;
      FString::~FString(local_28);
      local_8._0_1_ = 2;
      FString::~FString(local_34);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString((FString *)&stack0x00000004);
      local_8 = 0xffffffff;
      FString::~FString((FString *)&stack0x00000010);
      ExceptionList = local_10;
      return 1;
    }
  }
  else {
    iVar1 = FString::operator==(local_28,(ushort *)L"GAMMA");
    if (iVar1 != 0) {
      *in_stack_0000001c = *(undefined4 *)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x84);
      goto LAB_10041969;
    }
  }
LAB_10041a12:
  local_8._0_1_ = 3;
  FString::~FString(local_28);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return 0;
}


// ==== 10041a4f Catch@10041a4f

void Catch_10041a4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10041a63 Catch@10041a63

void Catch_10041a63(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::GetOptionFloatFromGlobal");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10041a80 FUN_10041a80

undefined4 FUN_10041a80(void)

{
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de594;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FString::Caps((FString *)&stack0x00000004);
  local_8._0_1_ = 3;
  FString::Caps((FString *)&stack0x00000010);
  local_8._0_1_ = 3;
  FString::~FString(local_28);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return 0;
}


// ==== 10041b21 Catch@10041b21

void Catch_10041b21(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10041b35 Catch@10041b35

void Catch_10041b35(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::GetOptionStringFromGlobal");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10041b60 FUN_10041b60

void FUN_10041b60(void)

{
  return;
}


// ==== 10041bab Catch@10041bab

void Catch_10041bab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10041bbf Catch@10041bbf

void Catch_10041bbf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10041be0 FUN_10041be0

void FUN_10041be0(void)

{
  return;
}


// ==== 10041c2b Catch@10041c2b

void Catch_10041c2b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10041c3f Catch@10041c3f

void Catch_10041c3f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10041c60 FUN_10041c60

void FUN_10041c60(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de5f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10041b60();
  ExceptionList = local_10;
  return;
}


// ==== 10041cb4 Catch@10041cb4

void Catch_10041cb4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10041cc8 Catch@10041cc8

void Catch_10041cc8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::NCOptionManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10041cf0 FUN_10041cf0

void FUN_10041cf0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10041be0();
  ExceptionList = local_10;
  return;
}


// ==== 10041d40 Catch@10041d40

void Catch_10041d40(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10041d54 Catch@10041d54

void Catch_10041d54(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::~NCOptionManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10041d80 FUN_10041d80

void FUN_10041d80(void)

{
  int iVar1;
  undefined4 uVar2;
  ushort **in_stack_0000001c;
  FString aFStack_4c [4];
  undefined4 uStack_48;
  ushort *puStack_40;
  ushort *puStack_3c;
  undefined4 uStack_38;
  wchar_t *pwStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = in_stack_0000001c;
  puStack_c = &LAB_101de654;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  pwStack_34 = (wchar_t *)in_stack_0000001c;
  in_stack_0000001c = &puStack_40;
  uStack_48 = 0x10041dcf;
  FString::FString((FString *)&puStack_40,(FString *)&stack0x00000010);
  local_8._0_1_ = 3;
  FString::FString(aFStack_4c,(FString *)&stack0x00000004);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_10040940();
  iVar1 = **(int **)GConfig_exref;
  pwStack_34 = L"Option.ini";
  uStack_38 = uVar2;
  puStack_3c = (ushort *)0x10041e0b;
  puStack_3c = FString::operator*((FString *)&stack0x00000010);
  puStack_40 = (ushort *)0x10041e15;
  puStack_40 = FString::operator*((FString *)&stack0x00000004);
  (**(code **)(iVar1 + 0x24))();
  local_8 = 0;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return;
}


// ==== 10041e57 Catch@10041e57

void Catch_10041e57(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10041e6b Catch@10041e6b

void Catch_10041e6b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::SetOptionBool");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10041e90 FUN_10041e90

void FUN_10041e90(void)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  FString aFStack_50 [4];
  undefined4 uStack_4c;
  ushort *puStack_44;
  ushort *puStack_40;
  undefined4 local_3c;
  wchar_t *local_38;
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de694;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  local_38 = (wchar_t *)in_stack_0000001c;
  uStack_4c = 0x10041ee3;
  FString::FString((FString *)&puStack_44,(FString *)&stack0x00000010);
  local_8._0_1_ = 3;
  FString::FString(aFStack_50,(FString *)&stack0x00000004);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_10040e30();
  iVar1 = **(int **)GConfig_exref;
  local_38 = L"Option.ini";
  local_3c = in_stack_0000001c;
  puStack_40 = (ushort *)0x10041f25;
  puStack_40 = FString::operator*((FString *)&stack0x00000010);
  puStack_44 = (ushort *)0x10041f2f;
  puStack_44 = FString::operator*((FString *)&stack0x00000004);
  (**(code **)(iVar1 + 0x2c))();
  local_8 = 0;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return;
}


// ==== 10041f72 Catch@10041f72

void Catch_10041f72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10041f86 Catch@10041f86

void Catch_10041f86(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::SetOptionFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10041fb0 FUN_10041fb0

void FUN_10041fb0(void)

{
  int iVar1;
  FString aFStack_5c [4];
  undefined4 uStack_58;
  FString aFStack_50 [4];
  undefined4 uStack_4c;
  ushort *puStack_44;
  ushort *puStack_40;
  wchar_t *pwStack_3c;
  uint uStack_38;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101de6e6;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  uStack_4c = 0x10041ffb;
  FString::FString((FString *)&puStack_44,(FString *)&stack0x0000001c);
  local_8._0_1_ = 4;
  uStack_58 = 0x10042011;
  FString::FString(aFStack_50,(FString *)&stack0x00000010);
  local_8._0_1_ = 5;
  FString::FString(aFStack_5c,(FString *)&stack0x00000004);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_10041270();
  iVar1 = **(int **)GConfig_exref;
  pwStack_3c = L"Option.ini";
  puStack_40 = (ushort *)0x1004204d;
  puStack_40 = FString::operator*((FString *)&stack0x0000001c);
  puStack_44 = (ushort *)0x10042057;
  puStack_44 = FString::operator*((FString *)&stack0x00000010);
  FString::operator*((FString *)&stack0x00000004);
  uStack_4c = 0x1004206e;
  (**(code **)(iVar1 + 0x30))();
  local_8 = 1;
  uStack_4c = 0x1004207e;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = local_8 & 0xffffff00;
  uStack_4c = 0x1004208b;
  FString::~FString((FString *)&stack0x00000010);
  local_8 = 0xffffffff;
  uStack_4c = 0x1004209b;
  FString::~FString((FString *)&stack0x0000001c);
  ExceptionList = local_10;
  return;
}


// ==== 100420af Catch@100420af

void Catch_100420af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100420c3 Catch@100420c3

void Catch_100420c3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::SetOptionString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100420e0 FUN_100420e0

void FUN_100420e0(void)

{
  int iVar1;
  int in_stack_0000001c;
  FString *pFVar2;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [16];
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de734;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FString::Caps((FString *)&stack0x00000004);
  local_8._0_1_ = 3;
  pFVar2 = local_38;
  FString::Caps((FString *)&stack0x00000010);
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar1 = FString::operator==(local_44,(ushort *)L"VIDEO");
  if (iVar1 == 0) {
    iVar1 = FString::operator==(local_44,(ushort *)L"GAME");
    if (iVar1 == 0) {
LAB_100422f7:
      local_8._0_1_ = 3;
      FString::~FString(local_38);
      local_8 = CONCAT31(local_8._1_3_,2);
      FString::~FString(local_44);
      local_8 = 0;
      goto LAB_100421f4;
    }
    iVar1 = FString::operator==(local_38,(ushort *)L"SCREENSHOTQUALITY");
    if (iVar1 == 0) {
      iVar1 = FString::operator==(local_38,(ushort *)L"PARTYLOOTING");
      if (iVar1 == 0) goto LAB_100422f7;
      *(int *)GL2PartyLooting_exref = in_stack_0000001c;
    }
    else {
      *(int *)GL2ScreenShotQuality_exref = in_stack_0000001c;
    }
  }
  else {
    iVar1 = FString::operator==(local_38,(ushort *)L"RENDERACTORLIMITED");
    if (iVar1 == 0) {
      iVar1 = FString::operator==(local_38,(ushort *)L"ANTIALIASING");
      if (iVar1 == 0) goto LAB_100422f7;
      if (*(int *)GL2Antialiasing_exref != in_stack_0000001c) {
        *(int *)GL2Antialiasing_exref = in_stack_0000001c;
        (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x5c) + 200))
                  (&stack0x0000001c,&local_20,&local_1c,local_28,&local_18,pFVar2);
        (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x5c) + 0x74))
                  (**(undefined4 **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38),local_20
                   ,local_1c,local_18,in_stack_0000001c,1);
      }
    }
    else {
      *(int *)GL2RenderActorLimitOpt_exref = in_stack_0000001c;
      switch(*(undefined4 *)GL2RenderActorLimitOpt_exref) {
      case 1:
        *(undefined4 *)GL2RenderActorLimit_exref = 0x32;
        break;
      case 2:
        *(undefined4 *)GL2RenderActorLimit_exref = 100;
        break;
      case 3:
        *(undefined4 *)GL2RenderActorLimit_exref = 200;
        break;
      case 4:
        *(undefined4 *)GL2RenderActorLimit_exref = 300;
        break;
      case 5:
        *(undefined4 *)GL2RenderActorLimit_exref = 400;
        break;
      case 6:
        *(undefined4 *)GL2RenderActorLimit_exref = 10000;
      }
    }
  }
  local_8._0_1_ = 3;
  FString::~FString(local_38);
  local_8._0_1_ = 2;
  FString::~FString(local_44);
  local_8 = (uint)local_8._1_3_ << 8;
LAB_100421f4:
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return;
}


// ==== 1004231c Catch@1004231c

void Catch_1004231c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10042330 Catch@10042330

void Catch_10042330(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::SetOptionIntToGlobal");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10042370 FUN_10042370

undefined4 FUN_10042370(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ushort *puVar4;
  FString *in_stack_0000001c;
  FString aFStack_5c [4];
  undefined4 uStack_58;
  FString aFStack_50 [8];
  undefined4 uStack_48;
  undefined1 *puStack_44;
  ushort *puStack_40;
  ushort *puStack_3c;
  undefined1 *puStack_38;
  wchar_t *pwStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puVar2 = in_stack_0000001c;
  puStack_c = &LAB_101de774;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  puVar1 = (undefined4 *)**(undefined4 **)GConfig_exref;
  pwStack_34 = L"Option.ini";
  puStack_38 = in_stack_0000001c;
  puStack_3c = (ushort *)0x100423c3;
  puStack_3c = FString::operator*((FString *)&stack0x00000010);
  puStack_40 = (ushort *)0x100423cd;
  puStack_40 = FString::operator*((FString *)&stack0x00000004);
  puStack_44 = (undefined1 *)0x100423da;
  iVar3 = (*(code *)*puVar1)();
  if (iVar3 == 0) {
    puStack_44 = puVar2;
    uStack_48 = 0x1004241e;
    puVar4 = FString::operator*((FString *)&stack0x00000010);
    in_stack_0000001c = aFStack_50;
    uStack_58 = 0x1004242d;
    FString::FString(aFStack_50,puVar4);
    local_8._0_1_ = 3;
    puVar4 = FString::operator*((FString *)&stack0x00000004);
    FString::FString(aFStack_5c,puVar4);
    local_8._0_1_ = 2;
    iVar3 = FUN_10041320();
    if (iVar3 == 0) {
      local_8 = (uint)local_8._1_3_ << 8;
      puStack_44 = (undefined1 *)0x10042468;
      FString::~FString((FString *)&stack0x00000004);
      local_8 = 0xffffffff;
      puStack_44 = (undefined1 *)0x10042478;
      FString::~FString((FString *)&stack0x00000010);
      ExceptionList = local_10;
      return 0;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  puStack_44 = (undefined1 *)0x100423eb;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  puStack_44 = (undefined1 *)0x100423fb;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return 1;
}


// ==== 1004248e Catch@1004248e

void Catch_1004248e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100424a2 Catch@100424a2

void Catch_100424a2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::GetOptionBool");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100424c0 FUN_100424c0

undefined4 FUN_100424c0(void)

{
  undefined1 *puVar1;
  int iVar2;
  ushort *puVar3;
  FString *in_stack_0000001c;
  FString aFStack_5c [4];
  undefined4 uStack_58;
  FString aFStack_50 [8];
  undefined4 uStack_48;
  undefined1 *puStack_44;
  ushort *puStack_40;
  ushort *puStack_3c;
  undefined1 *puStack_38;
  wchar_t *pwStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puVar1 = in_stack_0000001c;
  puStack_c = &LAB_101de7b4;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  iVar2 = **(int **)GConfig_exref;
  pwStack_34 = L"Option.ini";
  puStack_38 = in_stack_0000001c;
  puStack_3c = (ushort *)0x10042513;
  puStack_3c = FString::operator*((FString *)&stack0x00000010);
  puStack_40 = (ushort *)0x1004251d;
  puStack_40 = FString::operator*((FString *)&stack0x00000004);
  puStack_44 = (undefined1 *)0x1004252b;
  iVar2 = (**(code **)(iVar2 + 4))();
  if (iVar2 == 0) {
    puStack_44 = puVar1;
    uStack_48 = 0x1004256f;
    puVar3 = FString::operator*((FString *)&stack0x00000010);
    in_stack_0000001c = aFStack_50;
    uStack_58 = 0x1004257e;
    FString::FString(aFStack_50,puVar3);
    local_8._0_1_ = 3;
    puVar3 = FString::operator*((FString *)&stack0x00000004);
    FString::FString(aFStack_5c,puVar3);
    local_8._0_1_ = 2;
    iVar2 = FUN_100416d0();
    if (iVar2 == 0) {
      local_8 = (uint)local_8._1_3_ << 8;
      puStack_44 = (undefined1 *)0x100425b9;
      FString::~FString((FString *)&stack0x00000004);
      local_8 = 0xffffffff;
      puStack_44 = (undefined1 *)0x100425c9;
      FString::~FString((FString *)&stack0x00000010);
      ExceptionList = local_10;
      return 0;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  puStack_44 = (undefined1 *)0x1004253c;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  puStack_44 = (undefined1 *)0x1004254c;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return 1;
}


// ==== 100425df Catch@100425df

void Catch_100425df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100425f3 Catch@100425f3

void Catch_100425f3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::GetOptionInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10042610 FUN_10042610

undefined4 FUN_10042610(void)

{
  undefined1 *puVar1;
  int iVar2;
  ushort *puVar3;
  FString *in_stack_0000001c;
  FString aFStack_5c [4];
  undefined4 uStack_58;
  FString aFStack_50 [8];
  undefined4 uStack_48;
  undefined1 *puStack_44;
  ushort *puStack_40;
  ushort *puStack_3c;
  undefined1 *puStack_38;
  wchar_t *pwStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puVar1 = in_stack_0000001c;
  puStack_c = &LAB_101de7f4;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  iVar2 = **(int **)GConfig_exref;
  pwStack_34 = L"Option.ini";
  puStack_38 = in_stack_0000001c;
  puStack_3c = (ushort *)0x10042663;
  puStack_3c = FString::operator*((FString *)&stack0x00000010);
  puStack_40 = (ushort *)0x1004266d;
  puStack_40 = FString::operator*((FString *)&stack0x00000004);
  puStack_44 = (undefined1 *)0x1004267b;
  iVar2 = (**(code **)(iVar2 + 8))();
  if (iVar2 == 0) {
    puStack_44 = puVar1;
    uStack_48 = 0x100426bf;
    puVar3 = FString::operator*((FString *)&stack0x00000010);
    in_stack_0000001c = aFStack_50;
    uStack_58 = 0x100426ce;
    FString::FString(aFStack_50,puVar3);
    local_8._0_1_ = 3;
    puVar3 = FString::operator*((FString *)&stack0x00000004);
    FString::FString(aFStack_5c,puVar3);
    local_8._0_1_ = 2;
    iVar2 = FUN_100418d0();
    if (iVar2 == 0) {
      local_8 = (uint)local_8._1_3_ << 8;
      puStack_44 = (undefined1 *)0x10042709;
      FString::~FString((FString *)&stack0x00000004);
      local_8 = 0xffffffff;
      puStack_44 = (undefined1 *)0x10042719;
      FString::~FString((FString *)&stack0x00000010);
      ExceptionList = local_10;
      return 0;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  puStack_44 = (undefined1 *)0x1004268c;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  puStack_44 = (undefined1 *)0x1004269c;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return 1;
}


// ==== 1004272f Catch@1004272f

void Catch_1004272f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10042743 Catch@10042743

void Catch_10042743(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::GetOptionFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10042760 FUN_10042760

undefined4 FUN_10042760(void)

{
  undefined1 *puVar1;
  int iVar2;
  ushort *puVar3;
  FString *in_stack_0000001c;
  FString *in_stack_00000020;
  FString aFStack_5c [4];
  undefined4 uStack_58;
  FString aFStack_50 [8];
  undefined4 uStack_48;
  undefined1 *puStack_44;
  ushort *puStack_40;
  ushort *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  wchar_t *pwStack_30;
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puVar1 = in_stack_0000001c;
  puStack_c = &LAB_101de834;
  local_10 = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  iVar2 = **(int **)GConfig_exref;
  pwStack_30 = L"Option.ini";
  puStack_34 = in_stack_00000020;
  puStack_38 = in_stack_0000001c;
  puStack_3c = (ushort *)0x100427b7;
  puStack_3c = FString::operator*((FString *)&stack0x00000010);
  puStack_40 = (ushort *)0x100427c1;
  puStack_40 = FString::operator*((FString *)&stack0x00000004);
  puStack_44 = (undefined1 *)0x100427ce;
  iVar2 = (**(code **)(iVar2 + 0x10))();
  if (iVar2 == 0) {
    puStack_44 = puVar1;
    uStack_48 = 0x10042812;
    puVar3 = FString::operator*((FString *)&stack0x00000010);
    in_stack_00000020 = aFStack_50;
    uStack_58 = 0x10042821;
    FString::FString(aFStack_50,puVar3);
    local_8._0_1_ = 3;
    puVar3 = FString::operator*((FString *)&stack0x00000004);
    in_stack_0000001c = aFStack_5c;
    FString::FString(aFStack_5c,puVar3);
    local_8._0_1_ = 2;
    iVar2 = FUN_10041a80();
    if (iVar2 == 0) {
      local_8 = (uint)local_8._1_3_ << 8;
      puStack_44 = (undefined1 *)0x1004285c;
      FString::~FString((FString *)&stack0x00000004);
      local_8 = 0xffffffff;
      puStack_44 = (undefined1 *)0x1004286c;
      FString::~FString((FString *)&stack0x00000010);
      ExceptionList = local_10;
      return 0;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  puStack_44 = (undefined1 *)0x100427df;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  puStack_44 = (undefined1 *)0x100427ef;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return 1;
}


// ==== 10042882 Catch@10042882

void Catch_10042882(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10042896 Catch@10042896

void Catch_10042896(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::GetOptionString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100428c0 FUN_100428c0

void FUN_100428c0(void)

{
  int iVar1;
  undefined4 uVar2;
  ushort **in_stack_0000001c;
  FString aFStack_4c [4];
  undefined4 uStack_48;
  ushort *puStack_40;
  ushort *puStack_3c;
  undefined4 uStack_38;
  wchar_t *pwStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = in_stack_0000001c;
  puStack_c = &LAB_101de874;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  pwStack_34 = (wchar_t *)in_stack_0000001c;
  in_stack_0000001c = &puStack_40;
  uStack_48 = 0x1004290f;
  FString::FString((FString *)&puStack_40,(FString *)&stack0x00000010);
  local_8._0_1_ = 3;
  FString::FString(aFStack_4c,(FString *)&stack0x00000004);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_100420e0();
  iVar1 = **(int **)GConfig_exref;
  pwStack_34 = L"Option.ini";
  uStack_38 = uVar2;
  puStack_3c = (ushort *)0x1004294b;
  puStack_3c = FString::operator*((FString *)&stack0x00000010);
  puStack_40 = (ushort *)0x10042955;
  puStack_40 = FString::operator*((FString *)&stack0x00000004);
  (**(code **)(iVar1 + 0x28))();
  local_8 = 0;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return;
}


// ==== 10042997 Catch@10042997

void Catch_10042997(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100429ab Catch@100429ab

void Catch_100429ab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCOptionManager::SetOptionInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100429d0 FUN_100429d0

undefined4 FUN_100429d0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de890;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061b40();
  ExceptionList = local_10;
  return 1;
}


// ==== 10042a1e Catch@10042a1e

void Catch_10042a1e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10042a32 Catch@10042a32

void Catch_10042a32(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadarWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10042a50 FUN_10042a50

void FUN_10042a50(uint param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uStack_3c;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de8b0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = &uStack_3c;
  if (*(int *)(in_ECX + 0x200) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0x200));
    *(undefined4 *)(in_ECX + 0x200) = 0;
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  uVar2 = FUN_1003f600(0xfe000001,100,0);
  *(undefined4 *)(in_ECX + 0x200) = uVar2;
  uVar2 = FUN_101c19e0();
  *(undefined4 *)(in_ECX + 0x1d8) = uVar2;
  *(float *)(in_ECX + 0x1e8) = (float)(param_1 >> 0x10 & 0xff);
  *(float *)(in_ECX + 0x1ec) = (float)(param_1 >> 8 & 0xff);
  *(float *)(in_ECX + 0x1f0) = (float)(param_1 & 0xff);
  local_2c = *(float *)(in_ECX + 0x1e8) - *(float *)(in_ECX + 0x1dc);
  local_28 = *(float *)(in_ECX + 0x1ec) - *(float *)(in_ECX + 0x1e0);
  local_24 = *(float *)(in_ECX + 0x1f0) - *(float *)(in_ECX + 0x1e4);
  *(float *)(in_ECX + 500) = local_2c;
  *(float *)(in_ECX + 0x1f8) = local_28;
  *(float *)(in_ECX + 0x1fc) = local_24;
  local_18 = local_24;
  FVector::operator/=((FVector *)(in_ECX + 500),(float)&local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10042b93 Catch@10042b93

void Catch_10042b93(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10042ba7 Catch@10042ba7

void Catch_10042ba7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadarWnd::SetRadarColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10042bd0 FUN_10042bd0

undefined4 FUN_10042bd0(int param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined3 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
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
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar4 = FUN_101c19e0();
  uVar5 = FUN_101c19e0(uVar4);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar5,uVar4);
  FColor::FColor((FColor *)&local_18);
  local_1c = (undefined1)(int)ROUND(*(float *)(in_ECX + 0x1dc));
  uVar2 = CONCAT11(local_18._3_1_,local_1c);
  local_1c = (undefined1)(int)ROUND(*(float *)(in_ECX + 0x1e0));
  uVar3 = CONCAT21(uVar2,local_1c);
  local_1c = (undefined1)(int)ROUND(*(float *)(in_ECX + 0x1e4));
  local_18 = CONCAT31(uVar3,local_1c);
  FUN_10020e50(local_18);
  for (iVar6 = 0; iVar6 < *(int *)(in_ECX + 0x1d0); iVar6 = iVar6 + 1) {
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x1cc) + iVar6 * 0xc);
    FUN_10020e70(*puVar1,puVar1[1]);
  }
  FUN_10020e60();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10042d28 Catch@10042d28

void Catch_10042d28(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10042d3c Catch@10042d3c

void Catch_10042d3c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadarWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10042d60 FUN_10042d60

void FUN_10042d60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = FArray::Add(in_ECX,1,0xc);
  puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  return;
}


// ==== 10042d90 FUN_10042d90

void FUN_10042d90(int param_1,int param_2)

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


// ==== 10042e10 FUN_10042e10

undefined4 FUN_10042e10(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de8f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x1d0); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x1cc),0xc,0);
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 10042e81 Catch@10042e81

void Catch_10042e81(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10042e95 Catch@10042e95

void Catch_10042e95(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadarWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10042ec0 FUN_10042ec0

void FUN_10042ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uStack_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de910;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  FUN_10042d60(&local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10042f2e Catch@10042f2e

void Catch_10042f2e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10042f42 Catch@10042f42

void Catch_10042f42(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadarWnd::AddTargetLoc");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10042f60 FUN_10042f60

void FUN_10042f60(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x1d0); iVar2 = iVar2 + 1) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x1cc) + iVar2 * 0xc);
    if (((*piVar1 == param_1) && (piVar1[1] == param_2)) && (piVar1[2] == param_3)) {
      FUN_10042d90(iVar2,1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10042fee Catch@10042fee

void Catch_10042fee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10043002 Catch@10043002

void Catch_10043002(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadarWnd::DeleteTargetLoc");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10043020 FUN_10043020

void FUN_10043020(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de950;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x1d0); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x1cc),0xc,0);
  ExceptionList = local_10;
  return;
}


// ==== 1004308a Catch@1004308a

void Catch_1004308a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1004309e Catch@1004309e

void Catch_1004309e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadarWnd::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100430c0 FUN_100430c0

void FUN_100430c0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101de979;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 < 0) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10043160 FUN_10043160

undefined4 FUN_10043160(int param_1)

{
  FColor *this;
  int in_ECX;
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de9a9;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == -0x1ffffff) {
    *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) + -100;
    if (*(int *)(in_ECX + 0x1d8) < 1) {
      *(undefined4 *)(in_ECX + 0x1dc) = *(undefined4 *)(in_ECX + 0x1e8);
      *(undefined4 *)(in_ECX + 0x1e0) = *(undefined4 *)(in_ECX + 0x1ec);
      *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(in_ECX + 0x1f0);
      this = (FColor *)FColor::FColor((FColor *)&param_1,'\0','\0','\0',0xff);
      FColor::operator_class_FVector(this);
      *(undefined4 *)(in_ECX + 0x1e8) = local_28;
      *(undefined4 *)(in_ECX + 0x1ec) = local_24;
      *(undefined4 *)(in_ECX + 0x1f0) = local_20;
      *(undefined4 *)(in_ECX + 0x1d8) = 0;
      if (*(int *)(in_ECX + 0x200) != 0) {
        FUN_1003f610(*(int *)(in_ECX + 0x200));
        *(undefined4 *)(in_ECX + 0x200) = 0;
        FString::FString(local_34,(ushort *)&DAT_1022f9f8);
        local_8._0_1_ = 1;
        pFVar2 = local_34;
        uVar1 = 0x50;
        FUN_10005c30(0x50,pFVar2);
        FUN_100d1790(uVar1,pFVar2);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_34);
      }
    }
    else {
      *(float *)(in_ECX + 0x1dc) = *(float *)(in_ECX + 500) + *(float *)(in_ECX + 0x1dc);
      *(float *)(in_ECX + 0x1e0) = *(float *)(in_ECX + 0x1f8) + *(float *)(in_ECX + 0x1e0);
      *(float *)(in_ECX + 0x1e4) = *(float *)(in_ECX + 0x1fc) + *(float *)(in_ECX + 0x1e4);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 100432ac Catch@100432ac

void Catch_100432ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100432c0 Catch@100432c0

void Catch_100432c0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadarWnd::OnTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100432e0 FUN_100432e0

void FUN_100432e0(void)

{
  FColor *this;
  undefined4 *in_ECX;
  uint uStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  FArray *local_20 [3];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101de9ef;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  FUN_10061fa0();
  local_8 = 0;
  *in_ECX = NCRadarWnd::vftable;
  local_20[0] = (FArray *)(in_ECX + 0x73);
  FArray::FArray(local_20[0]);
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),3);
  this = (FColor *)FColor::FColor((FColor *)local_20,'\0','\0','\0',0xff);
  FColor::operator_class_FVector(this);
  in_ECX[0x77] = local_30;
  in_ECX[0x78] = local_2c;
  in_ECX[0x79] = local_28;
  in_ECX[0x76] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10043399 Catch@10043399

void Catch_10043399(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100433ad Catch@100433ad

void Catch_100433ad(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadarWnd::NCRadarWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100433d0 FUN_100433d0

void FUN_100433d0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101dea26;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCRadarWnd::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_100430c0(uVar1);
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 10043440 FUN_10043440

void FUN_10043440(byte param_1)

{
  void *in_ECX;
  
  FUN_100433d0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x204);
  }
  return;
}


// ==== 10043480 FUN_10043480

undefined4 FUN_10043480(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x314);
}


// ==== 100434ca Catch@100434ca

void Catch_100434ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100434de Catch@100434de

void Catch_100434de(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadioButton::GetRadioGroupID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10043500 FUN_10043500

undefined4 FUN_10043500(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dea70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10008dd0();
  FUN_10008e60(L"L2UI_CH3.RadioCtrl.RadioButton2",L"L2UI_CH3.RadioCtrl.RadioButton1",0,0);
  ExceptionList = local_10;
  return 1;
}


// ==== 10043565 Catch@10043565

void Catch_10043565(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10043579 Catch@10043579

void Catch_10043579(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadioButton::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100435a0 FUN_100435a0

void FUN_100435a0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dea90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x2fc) = param_1;
  FUN_1000cb20(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 100435fc Catch@100435fc

void Catch_100435fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10043610 Catch@10043610

void Catch_10043610(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadioButton::SetCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10043630 FUN_10043630

undefined4 FUN_10043630(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101deab0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x300) == 0) {
    FUN_100435a0(1);
    iVar1 = FUN_10058f70();
    for (piVar4 = *(int **)(iVar1 + 0x48); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
      iVar1 = FUN_1001ef10(*(undefined4 *)(*piVar4 + 4));
      if (iVar1 != 0) {
        iVar2 = FUN_10043480();
        iVar3 = FUN_10043480();
        if ((iVar2 == iVar3) && (iVar1 != in_ECX)) {
          FUN_100435a0(0);
        }
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 100436df Catch@100436df

void Catch_100436df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100436f3 Catch@100436f3

void Catch_100436f3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadioButton::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10043710 FUN_10043710

void FUN_10043710(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101dead8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100097b0(L"default",0,0,0);
  *in_ECX = NCRadioButton::vftable;
  in_ECX[0xc5] = 0xffffffff;
  ExceptionList = local_10;
  return;
}


// ==== 10043781 Catch@10043781

void Catch_10043781(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10043795 Catch@10043795

void Catch_10043795(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadioButton::NCRadioButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100437c0 FUN_100437c0

void FUN_100437c0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101deb08;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCRadioButton::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10009890(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10043820 FUN_10043820

void FUN_10043820(byte param_1)

{
  void *in_ECX;
  
  FUN_100437c0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x318);
  }
  return;
}


// ==== 10043850 FUN_10043850

void FUN_10043850(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101deb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10009930(param_1,0,0,0);
  *in_ECX = NCRadioButton::vftable;
  in_ECX[0xc5] = param_3;
  in_ECX[0xbf] = param_2;
  ExceptionList = local_10;
  return;
}


// ==== 100438cf Catch@100438cf

void Catch_100438cf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100438e3 Catch@100438e3

void Catch_100438e3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRadioButton::NCRadioButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10043910 FUN_10043910

bool FUN_10043910(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (in_ECX[0x7d] == param_2) {
      iVar1 = (**(code **)(*in_ECX + 500))();
      return iVar1 != 0;
    }
    if (in_ECX[0x7e] == param_2) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
    if (in_ECX[0x80] == param_2) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))(param_3);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 100439b0 FUN_100439b0

void FUN_100439b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101deb60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005ee10(param_1,param_2);
  local_24 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x88) - 15.0);
  (**(code **)(**(int **)(in_ECX + 0x1ec) + 0xc0))(local_24,0,0,0,0,0,3);
  local_24 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c) - 15.0);
  uVar1 = local_24;
  local_24 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x88) - 15.0);
  (**(code **)(**(int **)(in_ECX + 0x1f0) + 0xc0))(local_24,uVar1,0,0,0,0,3);
  local_24 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c) - 30.0);
  uVar1 = local_24;
  local_24 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x88) - 15.0);
  (**(code **)(**(int **)(in_ECX + 0x1fc) + 0xc0))(local_24,0xf,0xf,uVar1,0,0,3);
  ExceptionList = local_10;
  return;
}


// ==== 10043b2c Catch@10043b2c

void Catch_10043b2c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10043b40 Catch@10043b40

void Catch_10043b40(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::SetWindowSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10043b60 FUN_10043b60

undefined4 FUN_10043b60(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101deb80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1ec) != 0) {
    *(undefined4 *)(in_ECX + 0x1ec) = 0;
  }
  if (*(int *)(in_ECX + 0x1f0) != 0) {
    *(undefined4 *)(in_ECX + 0x1f0) = 0;
  }
  if (*(int *)(in_ECX + 0x1fc) != 0) {
    *(undefined4 *)(in_ECX + 0x1fc) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 10043bd6 Catch@10043bd6

void Catch_10043bd6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10043bea Catch@10043bea

void Catch_10043bea(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10043c10 FUN_10043c10

void FUN_10043c10(int param_1)

{
  int in_ECX;
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101deba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    (**(code **)(**(int **)(in_ECX + 0x1fc) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x13c))();
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x1f0) + 0x13c);
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x1fc) + 0x138))();
    (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x138))();
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x1f0) + 0x138);
  }
  (*pcVar1)();
  *(int *)(in_ECX + 0x1e8) = param_1;
  ExceptionList = local_10;
  return;
}


// ==== 10043cc4 Catch@10043cc4

void Catch_10043cc4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10043cd8 Catch@10043cd8

void Catch_10043cd8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::ShowScrollBar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10043d00 FUN_10043d00

void FUN_10043d00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101debc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101c19e0();
  if (iVar1 < param_1) {
    uVar2 = FUN_101c19e0();
    *(undefined4 *)(in_ECX + 0x1e4) = uVar2;
  }
  else {
    *(undefined4 *)(in_ECX + 0x1e4) = 0;
    param_1 = 0;
  }
  thunk_FUN_10049a00(param_1,iVar1);
  ExceptionList = local_10;
  return;
}


// ==== 10043d95 Catch@10043d95

void Catch_10043d95(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10043da9 Catch@10043da9

void Catch_10043da9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::SetMaxHeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10043dd0 FUN_10043dd0

void FUN_10043dd0(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101debe0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x7f];
  iVar1 = FUN_101c19e0();
  if (iVar1 + -0x1e < *(int *)(iVar2 + 0x2dc) + *(int *)(iVar2 + 0x2d8)) {
    (**(code **)(*in_ECX + 0x1fc))(0);
    in_ECX[0x79] = 0;
    thunk_FUN_10049b50(0);
  }
  else {
    if (iVar1 < param_1) {
      iVar2 = FUN_101c19e0();
      in_ECX[0x79] = iVar2;
    }
    else {
      in_ECX[0x79] = 0;
    }
    thunk_FUN_10049a00(param_1,iVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10043ea3 Catch@10043ea3

void Catch_10043ea3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10043eb7 Catch@10043eb7

void Catch_10043eb7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::SetMaxHeight2");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10043ee0 FUN_10043ee0

void FUN_10043ee0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x208) = param_1;
  return;
}


// ==== 10043f36 Catch@10043f36

void Catch_10043f36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10043f4a Catch@10043f4a

void Catch_10043f4a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::SetBaseClip");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10043f70 FUN_10043f70

void FUN_10043f70(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dec20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10049b50(param_1);
  FUN_1000cb20(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10043fda Catch@10043fda

void Catch_10043fda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10043fee Catch@10043fee

void Catch_10043fee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::SetScrollPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10044010 FUN_10044010

void FUN_10044010(undefined4 param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x1ec) != 0) && (*(int *)(in_ECX + 0x1f0) != 0)) {
    *(undefined4 *)(*(int *)(in_ECX + 0x1ec) + 0x340) = param_1;
    *(undefined4 *)(*(int *)(in_ECX + 0x1f0) + 0x340) = param_1;
  }
  return;
}


// ==== 10044085 Catch@10044085

void Catch_10044085(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10044099 Catch@10044099

void Catch_10044099(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::SetScrollButtonTime");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100440c0 FUN_100440c0

undefined4 FUN_100440c0(void)

{
  int iVar1;
  undefined4 uVar2;
  UPackage *pUVar3;
  int in_ECX;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  uint uVar4;
  wchar_t *pwStack_9c;
  wchar_t *pwStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  FString *pFStack_80;
  FString *pFStack_64;
  uint uStack_5c;
  FString local_3c [20];
  FString local_28 [4];
  undefined8 local_24;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101decc8;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_1c = 0;
  local_8 = 0;
  FUN_10061b40();
  pFStack_64 = (FString *)0x10044114;
  FUN_1005d0a0();
  local_24 = CONCAT44(&pFStack_64,(undefined4)local_24);
  pFStack_64 = extraout_ECX;
  FName::FName((FName *)&pFStack_64,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000d030();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    pFStack_64 = (FString *)0x1004414a;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.ScrollBar.ScrollBarUpOnBtn");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = 1;
    pFStack_64 = (FString *)0x10044163;
    FString::FString(local_28,(ushort *)L"L2UI_CH3.ScrollBar.ScrollBarUpBtn");
    local_8 = 2;
    uVar4 = 3;
    local_1c = 3;
    pFStack_64 = local_28;
    uVar2 = FUN_10007150();
  }
  *(undefined4 *)(in_ECX + 0x1ec) = uVar2;
  local_8 = 1;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    local_1c = uVar4;
    FString::~FString(local_28);
  }
  local_8 = 0;
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffe;
    local_1c = uVar4;
    FString::~FString(local_3c);
  }
  *(int *)(in_ECX + 500) = DAT_1034c7b4;
  DAT_1034c7b4 = DAT_1034c7b4 + 1;
  *(undefined4 *)(*(int *)(in_ECX + 0x1ec) + 0x1cc) = *(undefined4 *)(in_ECX + 500);
  pFStack_64 = (FString *)0x0;
  local_24 = 0xfffffffffffffff1;
  (**(code **)(**(int **)(in_ECX + 0x1ec) + 0xc0))();
  pFStack_80 = *(FString **)(in_ECX + 0x1ec);
  FUN_10060d40();
  pFStack_80 = (FString *)0x10044243;
  FUN_1005c1e0();
  local_24 = CONCAT44(&pFStack_80,(undefined4)local_24);
  uStack_88 = 0x10044253;
  pFStack_80 = extraout_ECX_00;
  FName::FName((FName *)&pFStack_80,0);
  UObject::GetTransientPackage();
  uStack_88 = 0x348;
  uStack_8c = 0x10044264;
  iVar1 = FUN_1000d030();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    pFStack_80 = (FString *)0x1004427b;
    FString::FString(local_28,(ushort *)L"L2UI_CH3.ScrollBar.ScrollBarDownOnBtn");
    local_8 = CONCAT31(local_8._1_3_,3);
    local_1c = uVar4 | 4;
    pFStack_80 = (FString *)0x10044293;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.ScrollBar.ScrollBarDownBtn");
    local_8 = 4;
    uVar4 = uVar4 | 0xc;
    pFStack_80 = local_3c;
    local_1c = uVar4;
    uVar2 = FUN_10007150();
  }
  *(undefined4 *)(in_ECX + 0x1f0) = uVar2;
  local_8 = 3;
  if ((uVar4 & 8) != 0) {
    uVar4 = uVar4 & 0xfffffff7;
    local_1c = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 4) != 0) {
    local_1c = uVar4 & 0xfffffffb;
    FString::~FString(local_28);
  }
  *(int *)(in_ECX + 0x1f8) = DAT_1034c7b4;
  DAT_1034c7b4 = DAT_1034c7b4 + 1;
  *(undefined4 *)(*(int *)(in_ECX + 0x1f0) + 0x1cc) = *(undefined4 *)(in_ECX + 0x1f8);
  pFStack_80 = (FString *)0x0;
  uStack_88 = 0xf;
  uStack_8c = 0xf;
  uStack_90 = 0xfffffff1;
  local_24 = 0xfffffffffffffff1;
  uStack_94 = 0xfffffff1;
  pwStack_98 = L"ɪ蚋ǰ";
  (**(code **)(**(int **)(in_ECX + 0x1f0) + 0xc0))();
  pwStack_98 = (wchar_t *)0x2;
  pwStack_9c = *(wchar_t **)(in_ECX + 0x1f0);
  pwStack_98 = (wchar_t *)FUN_10060d40();
  pwStack_9c = L"j譑觌\xe465jᗿ쏘ဢᗿ쏔ဢ桐̄";
  FUN_1005c1e0();
  pwStack_98 = (wchar_t *)0x0;
  local_24 = CONCAT44(&pwStack_9c,(undefined4)local_24);
  FName::FName((FName *)&pwStack_9c,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar1 = FUN_10032590(0x304,pUVar3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pwStack_98 = L"L2UI_CH3.ScrollBar.SliderBarBottom";
    pwStack_9c = L"L2UI_CH3.ScrollBar.SliderBarCenter";
    iVar1 = FUN_1004a180(L"L2UI_CH3.ScrollBar.SliderBarTop");
  }
  *(int *)(in_ECX + 0x1fc) = iVar1;
  *(int *)(in_ECX + 0x200) = DAT_1034c7b4;
  DAT_1034c7b4 = DAT_1034c7b4 + 1;
  *(undefined4 *)(iVar1 + 0x1cc) = *(undefined4 *)(in_ECX + 0x200);
  pwStack_98 = (wchar_t *)0x3;
  pwStack_9c = (wchar_t *)0x0;
  local_24 = 0xfffffffffffffff1;
  (**(code **)(**(int **)(in_ECX + 0x1fc) + 0xc0))(0xfffffff1,0xf,0xf,0xffffffe2,0);
  uVar2 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1fc),2);
  FUN_1005c1e0(uVar2);
  ExceptionList = local_10;
  return 1;
}


// ==== 10044493 Catch@10044493

void Catch_10044493(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 100444a7 Catch@100444a7

void Catch_100444a7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100444d0 FUN_100444d0

void FUN_100444d0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101decf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005fe50();
  if (*(int *)(in_ECX + 0x1e8) == 0) {
    FUN_10043c10(0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10044534 Catch@10044534

void Catch_10044534(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10044548 Catch@10044548

void Catch_10044548(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10044570 FUN_10044570

void FUN_10044570(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ded10;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x208) == 0) {
    *unaff_FS_OFFSET = local_10;
    return;
  }
  iVar2 = FUN_10049ad0();
  iVar1 = *(int *)(in_ECX + 0x20c);
  *(int *)(in_ECX + 0x20c) = iVar2;
  for (piVar4 = *(int **)(in_ECX + 0x48); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
    piVar3 = (int *)FUN_10010290(*(undefined4 *)(*piVar4 + 4));
    if ((((piVar3 != (int *)0x0) && (piVar3 != *(int **)(in_ECX + 0x1fc))) &&
        (piVar3 != *(int **)(in_ECX + 0x1ec))) && (piVar3 != *(int **)(in_ECX + 0x1f0))) {
      (**(code **)(*piVar3 + 0x148))(0,iVar1 - iVar2,0);
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 10044642 Catch@10044642

void Catch_10044642(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10044656 Catch@10044656

void Catch_10044656(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::RearrangeChildWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10044680 FUN_10044680

undefined4 FUN_10044680(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ded30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x208) == 0) {
    FUN_10059eb0(param_1);
  }
  else {
    FUN_10021be0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),
                 *(undefined4 *)(in_ECX + 0x88),*(undefined4 *)(in_ECX + 0x8c),0);
    FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
    FUN_100220e0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),
                 *(undefined4 *)(in_ECX + 0x88),*(undefined4 *)(in_ECX + 0x8c));
    if (*(int *)(in_ECX + 0x210) == 0) {
      *(undefined4 *)(in_ECX + 0x210) = 1;
      FUN_10044570();
    }
    FUN_100212e0();
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10044781 Catch@10044781

void Catch_10044781(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10044795 Catch@10044795

void Catch_10044795(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100447c0 FUN_100447c0

undefined4 FUN_100447c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ded50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar5 = 0;
  local_8 = 0;
  iVar3 = *(int *)(in_ECX + 0x1d0);
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(int *)(in_ECX + 0x1d8) = iVar3;
  switch(param_1) {
  case 0x21:
    iVar1 = *(int *)(in_ECX + 0x1d0);
    if (iVar1 < 0) {
      iVar2 = *(int *)(in_ECX + 0x1dc);
LAB_10044853:
      *(int *)(in_ECX + 0x1d0) = iVar1 + iVar2;
      if (0 < iVar1 + iVar2) {
        *(undefined4 *)(in_ECX + 0x1d0) = 0;
      }
    }
    break;
  case 0x22:
    iVar1 = *(int *)(in_ECX + 0x1e4);
    if (iVar1 < *(int *)(in_ECX + 0x1d0)) {
      iVar2 = *(int *)(in_ECX + 0x1d0) - *(int *)(in_ECX + 0x1dc);
LAB_1004488f:
      *(int *)(in_ECX + 0x1d0) = iVar2;
      if (iVar2 < iVar1) {
        *(int *)(in_ECX + 0x1d0) = iVar1;
      }
    }
    break;
  default:
    goto switchD_10044824_caseD_23;
  case 0x26:
    iVar1 = *(int *)(in_ECX + 0x1d0);
    if (iVar1 < 0) {
      iVar2 = *(int *)(in_ECX + 0x1e0);
      goto LAB_10044853;
    }
    break;
  case 0x28:
    iVar1 = *(int *)(in_ECX + 0x1e4);
    if (iVar1 < *(int *)(in_ECX + 0x1d0)) {
      iVar2 = *(int *)(in_ECX + 0x1d0) - *(int *)(in_ECX + 0x1e0);
      goto LAB_1004488f;
    }
  }
  uVar5 = 1;
switchD_10044824_caseD_23:
  if (*(int *)(in_ECX + 0x1d0) != iVar3) {
    thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
  }
  *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
  *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
  FUN_10044570();
  FUN_1005f3a0(param_1,param_2);
  iVar3 = FUN_1005f3a0(param_1,param_2);
  uVar4 = 1;
  if (iVar3 == 0) {
    uVar4 = uVar5;
  }
  ExceptionList = local_10;
  return uVar4;
}


// ==== 1004491e Catch@1004491e

void Catch_1004491e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10044932 Catch@10044932

void Catch_10044932(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::OnKeyDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10044970 FUN_10044970

undefined4 FUN_10044970(void)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ded70;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1d0) < 0) {
    *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
    *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
    *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1d0) + *(int *)(in_ECX + 0x1e0);
    if (0 < *(int *)(in_ECX + 0x1d0)) {
      *(undefined4 *)(in_ECX + 0x1d0) = 0;
    }
    thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
    *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
    *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
  }
  else {
    *(undefined4 *)(in_ECX + 0x1d8) = 0;
  }
  FUN_10044570();
  *unaff_FS_OFFSET = local_10;
  return 1;
}


// ==== 10044a3a Catch@10044a3a

void Catch_10044a3a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10044a4e Catch@10044a4e

void Catch_10044a4e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::OnUpBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10044a70 FUN_10044a70

undefined4 FUN_10044a70(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ded90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1e4) < *(int *)(in_ECX + 0x1d0)) {
    *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
    *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
    *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1d0) - *(int *)(in_ECX + 0x1e0);
    if (*(int *)(in_ECX + 0x1d0) < *(int *)(in_ECX + 0x1e4)) {
      *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1e4);
    }
    thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
    *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
    *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
  }
  else {
    *(undefined4 *)(in_ECX + 0x1d8) = 0;
  }
  FUN_10044570();
  ExceptionList = local_10;
  return 1;
}


// ==== 10044b4e Catch@10044b4e

void Catch_10044b4e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10044b62 Catch@10044b62

void Catch_10044b62(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::OnDownBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10044b80 FUN_10044b80

undefined4 FUN_10044b80(int param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dedb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
  iVar1 = *(int *)(in_ECX + 0x1e0);
  iVar1 = -(((iVar1 + -1 + param_1) / iVar1) * iVar1);
  *(int *)(in_ECX + 0x1d0) = iVar1;
  if (0 < iVar1) {
    *(undefined4 *)(in_ECX + 0x1d0) = 0;
  }
  if (*(int *)(in_ECX + 0x1d0) < *(int *)(in_ECX + 0x1e4)) {
    *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1e4);
  }
  *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
  *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
  FUN_10044570();
  ExceptionList = local_10;
  return 1;
}


// ==== 10044c49 Catch@10044c49

void Catch_10044c49(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10044c5d Catch@10044c5d

void Catch_10044c5d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::OnScrollMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10044c80 FUN_10044c80

undefined4 FUN_10044c80(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dedd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  sVar3 = (short)((uint)param_1 >> 0x10) / 0x78;
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
  if (sVar3 < 1) {
    iVar1 = *(int *)(in_ECX + 0x1e4);
    if (*(int *)(in_ECX + 0x1d0) <= iVar1) goto LAB_10044d68;
    iVar2 = *(int *)(in_ECX + 0x1d0) + (int)sVar3 * *(int *)(in_ECX + 0x1e0) * 3;
    *(int *)(in_ECX + 0x1d0) = iVar2;
    if (iVar2 < iVar1) {
      *(int *)(in_ECX + 0x1d0) = iVar1;
    }
  }
  else {
    if (-1 < *(int *)(in_ECX + 0x1d0)) goto LAB_10044d68;
    iVar1 = *(int *)(in_ECX + 0x1d0) + (int)sVar3 * *(int *)(in_ECX + 0x1e0) * 3;
    *(int *)(in_ECX + 0x1d0) = iVar1;
    if (0 < iVar1) {
      *(undefined4 *)(in_ECX + 0x1d0) = 0;
    }
  }
  thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
LAB_10044d68:
  *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
  *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
  FUN_10044570();
  ExceptionList = local_10;
  return 1;
}


// ==== 10044da6 Catch@10044da6

void Catch_10044da6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10044dba Catch@10044dba

void Catch_10044dba(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCScrollWnd::OnMouseWheel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10044de0 FUN_10044de0

void FUN_10044de0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101dedf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCScrollWnd::vftable;
  in_ECX[0x74] = 0;
  in_ECX[0x73] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x77] = 100;
  in_ECX[0x78] = 0xf;
  in_ECX[0x81] = 0xf;
  in_ECX[0x7a] = 1;
  in_ECX[0x82] = 0;
  in_ECX[0x83] = 0;
  in_ECX[0x84] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10044ea0 FUN_10044ea0

void FUN_10044ea0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  return;
}


// ==== 10044ef3 Catch@10044ef3

void Catch_10044ef3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10044f07 Catch@10044f07

void Catch_10044f07(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FDelayInfo::SetMaxTime");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10044f30 FUN_10044f30

void FUN_10044f30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dee40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10031550(param_1);
  iVar1 = FUN_1002c970();
  if (iVar1 != 0) {
    uVar2 = FUN_1002c970();
    *(undefined4 *)(in_ECX + 0x34) = uVar2;
  }
  iVar1 = FUN_1002c9c0();
  if (iVar1 != 0) {
    puVar3 = (ushort *)FUN_1002c9c0();
    appStrcpy((ushort *)(in_ECX + 0x4c),puVar3);
  }
  *(undefined4 *)(in_ECX + 0x1e50) = *(undefined4 *)(param_1 + 0x1e50);
  *(undefined4 *)(in_ECX + 0x1e58) = *(undefined4 *)(param_1 + 0x1e58);
  *(undefined4 *)(in_ECX + 0x1e5c) = *(undefined4 *)(param_1 + 0x1e5c);
  *(undefined4 *)(in_ECX + 0x1e64) = *(undefined4 *)(param_1 + 0x1e64);
  *(undefined4 *)(in_ECX + 0x1e60) = *(undefined4 *)(param_1 + 0x1e60);
  *(undefined4 *)(in_ECX + 0x1e80) = *(undefined4 *)(param_1 + 0x1e80);
  *(undefined4 *)(in_ECX + 0x1e88) = *(undefined4 *)(param_1 + 0x1e88);
  *(undefined4 *)(in_ECX + 0x1e7c) = *(undefined4 *)(param_1 + 0x1e7c);
  *(undefined4 *)(in_ECX + 0x1f60) = *(undefined4 *)(param_1 + 0x1f60);
  *(undefined4 *)(in_ECX + 0x1ea0) = *(undefined4 *)(param_1 + 0x1ea0);
  *(undefined4 *)(in_ECX + 0x1f64) = *(undefined4 *)(param_1 + 0x1f64);
  *(undefined4 *)(in_ECX + 0x1f5c) = *(undefined4 *)(param_1 + 0x1f5c);
  *(undefined4 *)(in_ECX + 0x1e54) = *(undefined4 *)(param_1 + 0x1e54);
  *(undefined4 *)(in_ECX + 0x1f68) = *(undefined4 *)(param_1 + 0x1f68);
  *(undefined4 *)(in_ECX + 0x1f7c) = 0;
  *(undefined4 *)(in_ECX + 0x1f80) = 0;
  *(undefined4 *)(in_ECX + 0x1f08) = *(undefined4 *)(param_1 + 0x1f08);
  ExceptionList = local_10;
  return;
}


// ==== 1004507b Catch@1004507b

void Catch_1004507b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004508f Catch@1004508f

void Catch_1004508f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortCutItem::CopyItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100450b0 FUN_100450b0

void FUN_100450b0(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dee60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1002e310(param_1);
  *(undefined4 *)(in_ECX + 0x1f5c) = *(undefined4 *)(param_1 + 0x1cbc);
  *(undefined4 *)(in_ECX + 0x1f60) = *(undefined4 *)(param_1 + 0x1c78);
  *(undefined4 *)(in_ECX + 0x1f64) = 0;
  *(undefined4 *)(in_ECX + 0x1f68) = 0;
  *(undefined4 *)(in_ECX + 0x1f7c) = 0;
  *(undefined4 *)(in_ECX + 0x1f80) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10045136 Catch@10045136

void Catch_10045136(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004514a Catch@1004514a

void Catch_1004514a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortCutItem::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045170 FUN_10045170

void FUN_10045170(void)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dee80;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  FUN_1002cd30();
  *(undefined4 *)(in_ECX + 0x1f60) = 0;
  *(undefined4 *)(in_ECX + 0x1f64) = 0;
  *(undefined4 *)(in_ECX + 0x1f68) = 0;
  *(undefined4 *)(in_ECX + 0x1f7c) = 0;
  *(undefined4 *)(in_ECX + 0x1f80) = 0;
  *(undefined4 *)(in_ECX + 0x1f08) = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 100451e4 Catch@100451e4

void Catch_100451e4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100451f8 Catch@100451f8

void Catch_100451f8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortCutItem::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045220 FUN_10045220

undefined4 FUN_10045220(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1f64);
}


// ==== 1004526a Catch@1004526a

void Catch_1004526a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004527e Catch@1004527e

void Catch_1004527e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortCutItem::IsUsed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100452a0 FUN_100452a0

void FUN_100452a0(void)

{
  UObject *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101deec0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  UObject::Destroy(in_ECX);
  UObject::ClearFlags(in_ECX,0x4000000);
  for (iVar1 = 0; iVar1 < 0x78; iVar1 = iVar1 + 1) {
    if (*(int **)(in_ECX + iVar1 * 4 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + iVar1 * 4 + 0x34) + 0xc))(1);
    }
    *(undefined4 *)(in_ECX + iVar1 * 4 + 0x34) = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10045322 Catch@10045322

void Catch_10045322(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10045336 Catch@10045336

void Catch_10045336(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045360 FUN_10045360

undefined4 FUN_10045360(uint param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101deee0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 < 0x78) {
    ExceptionList = &local_10;
    if (*(int *)(*(int *)(in_ECX + 0x34 + param_1 * 4) + 0x48) == 0) {
      appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x1cb);
    }
    FUN_10045170();
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}


// ==== 100453f3 Catch@100453f3

void Catch_100453f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10045407 Catch@10045407

void Catch_10045407(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::ClearShortcutItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045430 FUN_10045430

undefined4 FUN_10045430(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((param_1 < 0x78) && (iVar1 = *(int *)(in_ECX + 0x34 + param_1 * 4), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x48);
  }
  return 0;
}


// ==== 1004549f Catch@1004549f

void Catch_1004549f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100454b3 Catch@100454b3

void Catch_100454b3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::GetShortcutItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100454d0 FUN_100454d0

int FUN_100454d0(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((param_1 < 0x78) && (iVar1 = *(int *)(in_ECX + 0x34 + param_1 * 4), iVar1 != 0)) {
    return iVar1 + 0x34;
  }
  return 0;
}


// ==== 1004553f Catch@1004553f

void Catch_1004553f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10045553 Catch@10045553

void Catch_10045553(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::GetShortcutDelay");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045570 FUN_10045570

undefined4 FUN_10045570(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101def40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar3 = 0; iVar3 < 0x78; iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x34 + iVar3 * 4) + 0x48);
    if (iVar1 == 0) {
      appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x1fb);
    }
    iVar2 = FUN_10045220();
    if ((iVar2 != 0) &&
       ((*(int *)(iVar1 + 0x1e5c) == param_1 || ((param_1 == 0 && (param_2 == 0)))))) {
      *(int *)(iVar1 + 0x1f68) = param_2;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10045616 Catch@10045616

void Catch_10045616(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1004562a Catch@1004562a

void Catch_1004562a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::SetAutoSoulShot");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045650 FUN_10045650

void FUN_10045650(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101def60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar3 = 0; iVar3 < 0x78; iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x34 + iVar3 * 4) + 0x48);
    if (iVar1 == 0) {
      appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x293);
    }
    iVar2 = FUN_10045220();
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x1e54) == 2)) &&
       (*(int *)(iVar1 + 0x1e5c) == *(int *)(param_1 + 0x1c28))) {
      *(undefined4 *)(iVar1 + 0x1e60) = *(undefined4 *)(param_1 + 0x1c34);
      *(undefined4 *)(iVar1 + 0x1f08) = *(undefined4 *)(param_1 + 0x1ccc);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004570e Catch@1004570e

void Catch_1004570e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10045722 Catch@10045722

void Catch_10045722(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::UpdateSkill");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045740 FUN_10045740

undefined4 FUN_10045740(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x214);
}


// ==== 1004578a Catch@1004578a

void Catch_1004578a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004579e Catch@1004579e

void Catch_1004579e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::GetShortcutPage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100457c0 FUN_100457c0

void FUN_100457c0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101defa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < 0x78; iVar1 = iVar1 + 1) {
    FUN_10045360(iVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10045824 Catch@10045824

void Catch_10045824(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10045838 Catch@10045838

void Catch_10045838(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045860 FUN_10045860

undefined4 FUN_10045860(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101defc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  while( true ) {
    if (0x77 < iVar3) {
      ExceptionList = local_10;
      return 0;
    }
    iVar1 = *(int *)(*(int *)(in_ECX + 0x34 + iVar3 * 4) + 0x48);
    if (iVar1 == 0) {
      appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x3ad);
    }
    iVar2 = FUN_10045220();
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x1e5c) == param_1)) && (*(int *)(iVar1 + 0x1f68) != 0))
    break;
    iVar3 = iVar3 + 1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1004591d Catch@1004591d

void Catch_1004591d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10045931 Catch@10045931

void Catch_10045931(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::IsAutoEquipItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045950 FUN_10045950

void FUN_10045950(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x10) != 0) && (*(int *)(in_ECX + 8) == 0)) {
    *(undefined4 *)(in_ECX + 8) = 1;
  }
  return;
}


// ==== 10045970 FUN_10045970

void FUN_10045970(void)

{
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0xc) != 0) && (*(int *)(in_ECX + 8) == 0)) ||
     ((*(int *)(in_ECX + 0x10) != 0 && (*(int *)(in_ECX + 8) == 0)))) {
    *(undefined4 *)(in_ECX + 8) = 1;
  }
  return;
}


// ==== 10045990 FUN_10045990

undefined4 FUN_10045990(int param_1)

{
  uint *in_ECX;
  
  if ((((in_ECX[3] == 0) && (in_ECX[4] == 0)) && (in_ECX[2] == 0)) &&
     (*in_ECX = *in_ECX + param_1, in_ECX[1] < *in_ECX)) {
    *in_ECX = 0;
    in_ECX[2] = 1;
  }
  return 1;
}


// ==== 100459d0 FUN_100459d0

void FUN_100459d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103678a0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10045a00 FUN_10045a00

void FUN_10045a00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10367dd0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10045a30 FUN_10045a30

void FUN_10045a30(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101defe8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_1002ddc0();
  *in_ECX = NCShortCutItem::vftable;
  in_ECX[0x7d9] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10045a9b Catch@10045a9b

void Catch_10045a9b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10045aaf Catch@10045aaf

void Catch_10045aaf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortCutItem::NCShortCutItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045ad0 FUN_10045ad0

void FUN_10045ad0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101df018;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCShortCutItem::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_1002de40(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10045b30 FUN_10045b30

void FUN_10045b30(byte param_1)

{
  void *in_ECX;
  
  FUN_10045ad0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1f84);
  }
  return;
}


// ==== 10045b60 FUN_10045b60

void FUN_10045b60(void)

{
  UPackage *pUVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df040;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FName::FName((FName *)&stack0xffffffc8,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_100459d0(0x1f84,pUVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_10045a30();
  }
  *(int *)(in_ECX + 0x48) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("m_pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0xa4);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 0x48));
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 1;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  FUN_10045170();
  ExceptionList = local_10;
  return;
}


// ==== 10045c1f Catch@10045c1f

void Catch_10045c1f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10045c33 Catch@10045c33

void Catch_10045c33(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FShortcutItemInfo::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045c50 FUN_10045c50

void FUN_10045c50(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df060;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 1;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  if (*(int **)(in_ECX + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x48) + 0xc))(1);
  }
  *(undefined4 *)(in_ECX + 0x48) = 0;
  UObject::Destroy(in_ECX);
  UObject::ClearFlags(in_ECX,0x4000000);
  ExceptionList = local_10;
  return;
}


// ==== 10045cd6 Catch@10045cd6

void Catch_10045cd6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10045cea Catch@10045cea

void Catch_10045cea(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FShortcutItemInfo::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045d10 FUN_10045d10

void FUN_10045d10(float param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined2 in_FPUControlWord;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df080;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  fVar2 = param_1 * 1000.0;
  param_1 = (float)CONCAT22(in_FPUControlWord,param_1._0_2_);
  local_1c = (undefined4)(longlong)ROUND(fVar2);
  iVar4 = 0;
LAB_10045d6c:
  do {
    if (0x77 < iVar4) {
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(in_ECX + 0x34 + iVar4 * 4) != 0) {
      iVar3 = *(int *)(in_ECX + 0x34 + iVar4 * 4);
      iVar1 = *(int *)(iVar3 + 0x48);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x1e5c))) {
        if (*(int *)(iVar3 + 0x44) == 0) {
          FUN_10045990(local_1c);
        }
        else {
          param_1 = 0.0;
          iVar3 = FUN_101ad480(*(undefined4 *)(iVar1 + 0x1e5c),*(undefined4 *)(iVar1 + 0x1e54),
                               &param_1);
          if ((iVar3 != 0) && (param_1 != 0.0)) {
            iVar3 = FUN_1002da20();
            if (iVar3 != 0) {
              FUN_10045950();
              iVar4 = iVar4 + 1;
              goto LAB_10045d6c;
            }
          }
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


// ==== 10045e0d Catch@10045e0d

void Catch_10045e0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10045e21 Catch@10045e21

void Catch_10045e21(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045e50 FUN_10045e50

void FUN_10045e50(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101df0a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = FShortcutItemInfo::vftable;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 1;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  local_8 = 1;
  UObject::SetFlags(in_ECX,0x4000000);
  ExceptionList = local_10;
  return;
}


// ==== 10045ed0 Catch@10045ed0

void Catch_10045ed0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10045ee4 Catch@10045ee4

void Catch_10045ee4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FShortcutItemInfo::FShortcutItemInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10045f10 FUN_10045f10

void FUN_10045f10(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101df0d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FShortcutItemInfo::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10045f70 FUN_10045f70

void FUN_10045f70(byte param_1)

{
  void *in_ECX;
  
  FUN_10045f10();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return;
}


// ==== 10045fa0 FUN_10045fa0

void FUN_10045fa0(void)

{
  UPackage *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  FName aFStack_3c [4];
  undefined4 uStack_38;
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df100;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar4 = 0; iVar4 < 0x78; iVar4 = iVar4 + 1) {
    uStack_38 = 0;
    FName::FName(aFStack_3c,0);
    pUVar1 = UObject::GetTransientPackage();
    iVar2 = FUN_10045a00(0x4c,pUVar1);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uStack_38 = 0x1004600d;
      uVar3 = FUN_10045e50();
    }
    *(undefined4 *)(in_ECX + 0x34 + iVar4 * 4) = uVar3;
    uStack_38 = 0x1004601c;
    FUN_10045b60();
  }
  *(undefined4 *)(in_ECX + 0x214) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10046047 Catch@10046047

void Catch_10046047(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1004605b Catch@1004605b

void Catch_1004605b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10046090 FUN_10046090

void FUN_10046090(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101df129;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = NCShortcutItemManager::vftable;
  local_8 = 1;
  UObject::SetFlags(in_ECX,0x4000000);
  FUN_10045fa0();
  ExceptionList = local_10;
  return;
}


// ==== 10046106 Catch@10046106

void Catch_10046106(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004611a Catch@1004611a

void Catch_1004611a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::NCShortcutItemManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10046140 FUN_10046140

void FUN_10046140(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101df159;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCShortcutItemManager::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100461a0 FUN_100461a0

void FUN_100461a0(byte param_1)

{
  void *in_ECX;
  
  FUN_10046140();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x218);
  }
  return;
}


// ==== 100461d0 FUN_100461d0

undefined4 FUN_100461d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  FL2MagicSkillData *pFVar7;
  int iVar8;
  int in_ECX;
  undefined4 uVar9;
  wchar_t *pwVar10;
  undefined1 *puVar11;
  uint uStack_50;
  L2ParamStack local_40 [4];
  FString local_3c [12];
  undefined1 local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df19a;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  local_8 = 0;
  iVar8 = *(int *)(param_1 + 0x1cb8);
  if ((iVar8 < 0) || (0x77 < iVar8)) {
    return 0;
  }
  iVar8 = *(int *)(in_ECX + 0x34 + iVar8 * 4);
  ExceptionList = &local_10;
  local_1c = in_ECX;
  puVar3 = &uStack_50;
  if (iVar8 == 0) {
    appFailAssert("pShortcutItemInfo",".\\Src\\NShortcutItemManager.cpp",0xe0);
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  piVar2 = *(int **)(iVar8 + 0x48);
  if (piVar2 == (int *)0x0) {
    appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0xe3);
  }
  if (iVar8 == -0x34) {
    appFailAssert("pShortcutDelay",".\\Src\\NShortcutItemManager.cpp",0xe6);
  }
  FUN_1002f440(0);
  if (*(int *)(param_1 + 0x1c04) == 0) {
    if (*(int *)(param_1 + 0x1c20) == 4) {
      pwVar10 = L"L2UI.MacroWnd.Macro_Icon1";
    }
    else {
      pwVar10 = L"Default.BlackTexture";
    }
    iVar4 = FUN_1003f630(pwVar10,1);
    *(int *)(param_1 + 0x1c04) = iVar4;
    if (iVar4 == 0) {
      appFailAssert("a_ItemInfo.m_pIconTex",".\\Src\\NShortcutItemManager.cpp",0xf4);
    }
  }
  iVar4 = FUN_10149ee0(piVar2[0x797]);
  if (iVar4 != 0) {
    for (local_18 = 0; local_18 < 0x78; local_18 = local_18 + 1) {
      iVar4 = *(int *)(*(int *)(local_1c + 0x34 + local_18 * 4) + 0x48);
      if (iVar4 == 0) {
        appFailAssert("pItem",".\\Src\\NShortcutItemManager.cpp",0xfd);
      }
      iVar5 = FUN_10045220();
      if ((((iVar5 != 0) && (local_18 != *(int *)(param_1 + 0x1cb8))) &&
          (*(int *)(iVar4 + 0x1e5c) == piVar2[0x797])) && (*(int *)(iVar4 + 0x1f68) != 0))
      goto LAB_100463b8;
    }
    L2ParamStack::L2ParamStack(local_40,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_40,(void *)piVar2[0x797]);
    L2ParamStack::PushBack(local_40,(void *)0x0);
    FUN_10149ed0(local_40);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_40);
  }
LAB_100463b8:
  (**(code **)(*piVar2 + 0x6c))(param_1);
  piVar2[0x7d9] = 1;
  piVar1 = piVar2 + 0x797;
  FUN_101ad1f0(*piVar1,piVar2[0x795],piVar2[0x7c4]);
  iVar5 = piVar2[0x79f] % 0xc + 1;
  iVar4 = piVar2[0x79f] / 0xc + 1;
  puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x736cc));
  appSprintf((ushort *)(piVar2 + 0x754),(ushort *)L"%s%s %d %d",PTR_DAT_1034c7bc,puVar6,iVar4,iVar5)
  ;
  switch(*(undefined4 *)(param_1 + 0x1c20)) {
  case 1:
    FUN_10187a60(piVar1);
    *(undefined4 *)(iVar8 + 0x40) = 0;
    *(undefined4 *)(iVar8 + 0x44) = 0;
    iVar4 = FUN_10146ca0(*piVar1);
    if (iVar4 != 0) {
      FUN_10044ea0(200);
      iVar8 = FUN_10149ee0(*piVar1);
      if ((iVar8 != 0) && (iVar8 = FUN_10045860(*piVar1), iVar8 != 0)) {
        piVar2[0x7da] = 1;
      }
      goto switchD_1004644e_default;
    }
    break;
  case 2:
    *(undefined4 *)(iVar8 + 0x40) = 0;
    *(undefined4 *)(iVar8 + 0x44) = 0;
    iVar4 = FUN_10164ab0(*piVar1,piVar2[0x798]);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar8 + 0x44) = 1;
      FUN_10045970();
    }
    else {
      FUN_10044ea0(1000);
    }
    pFVar7 = FL2GameData::GetMSData
                       ((FL2GameData *)GL2GameData_exref,*(int *)(param_1 + 0x1c28),
                        *(int *)(param_1 + 0x1c34));
    if ((pFVar7 != (FL2MagicSkillData *)0x0) && (*(int *)(pFVar7 + 0x68) != 0)) {
      puVar6 = FString::operator*((FString *)(pFVar7 + 0x50));
      appStrcpy((ushort *)(piVar2 + 0x93),puVar6);
    }
    local_1c = 0;
    iVar8 = FUN_101ad480(*(undefined4 *)(param_1 + 0x1c28),2,&local_1c);
    if (((iVar8 != 0) && (local_1c != 0)) && (*(double *)(local_1c + 0x4c) != 0.0)) {
      FUN_1002ee30(local_1c);
    }
    goto switchD_1004644e_default;
  case 3:
    *(undefined4 *)(iVar8 + 0x40) = 0;
    *(undefined4 *)(iVar8 + 0x44) = 0;
    if (*piVar1 == 2) {
      FUN_10044ea0(200);
      goto switchD_1004644e_default;
    }
    if (*piVar1 == 5) {
      FUN_10044ea0(500);
      goto switchD_1004644e_default;
    }
    break;
  case 4:
  case 5:
    *(undefined4 *)(iVar8 + 0x44) = 0;
    break;
  default:
    goto switchD_1004644e_default;
  }
  *(undefined4 *)(iVar8 + 0x40) = 1;
  FUN_10045970();
switchD_1004644e_default:
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_3c,(ushort *)L"ShortcutID");
  local_8._0_1_ = 3;
  FUN_10040090(local_3c,*(undefined4 *)(param_1 + 0x1cb8));
  local_8._0_1_ = 2;
  FString::~FString(local_3c);
  puVar11 = local_30;
  uVar9 = 0x276;
  FUN_10005c30(0x276,puVar11);
  FUN_100d1790(uVar9,puVar11);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1004664b Catch@1004664b

void Catch_1004664b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1004665f Catch@1004665f

void Catch_1004665f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::AddShortcutItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10046690 FUN_10046690

undefined4 FUN_10046690(uint param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  code *pcVar3;
  int *unaff_FS_OFFSET;
  FString aFStack_80 [4];
  undefined4 uStack_7c;
  undefined4 uStack_74;
  uint uStack_64;
  L2ParamStack local_54 [16];
  L2ParamStack local_44 [4];
  FString local_40 [28];
  undefined1 *local_24;
  undefined1 *local_20;
  uint local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df1f5;
  local_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (0x77 < param_1) {
    *unaff_FS_OFFSET = local_10;
    return 0;
  }
  local_20 = (undefined1 *)&uStack_74;
  uStack_7c = 0x100466e8;
  FString::FString((FString *)&uStack_74,(ushort *)L"IsLockShortcutWnd");
  local_8._0_1_ = 1;
  local_24 = aFStack_80;
  FString::FString(aFStack_80,(ushort *)L"Game");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10042370();
  iVar1 = *(int *)(*(int *)(in_ECX + 0x34 + param_1 * 4) + 0x48);
  if (iVar1 == 0) {
    uStack_74 = 0x10046741;
    appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x193);
  }
  iVar2 = FUN_10149ee0();
  pcVar3 = PushBack_exref;
  if (iVar2 != 0) {
    for (local_18 = 0; (int)local_18 < 0x78; local_18 = local_18 + 1) {
      if ((local_18 != param_1) &&
         (*(int *)(*(int *)(*(int *)(in_ECX + 0x34 + local_18 * 4) + 0x48) + 0x1e5c) ==
          *(int *)(iVar1 + 0x1e5c))) goto LAB_100467dc;
    }
    if (*(int *)(iVar1 + 0x1f68) != 0) {
      L2ParamStack::L2ParamStack(local_44,10);
      pcVar3 = PushBack_exref;
      local_8._0_1_ = 3;
      L2ParamStack::PushBack(local_44,*(void **)(iVar1 + 0x1e5c));
      L2ParamStack::PushBack(local_44,(void *)0x0);
      FUN_10149ed0();
      local_8 = (uint)local_8._1_3_ << 8;
      L2ParamStack::~L2ParamStack(local_44);
    }
  }
LAB_100467dc:
  L2ParamStack::L2ParamStack(local_54,10);
  local_8._0_1_ = 4;
  (*pcVar3)();
  FUN_10143d50();
  FUN_10045170();
  FUN_1003f970();
  local_8._0_1_ = 5;
  FString::FString(local_40,(ushort *)L"ShortcutID");
  local_8._0_1_ = 6;
  uStack_74 = 0x10046838;
  FUN_10040090();
  local_8._0_1_ = 5;
  FString::~FString(local_40);
  uStack_74 = 0x10046852;
  FUN_10005c30();
  uStack_74 = 0x10046859;
  FUN_100d1790();
  local_8._0_1_ = 4;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_54);
  *unaff_FS_OFFSET = local_10;
  return 1;
}


// ==== 100468a1 Catch@100468a1

void Catch_100468a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100468b5 Catch@100468b5

void Catch_100468b5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::DeleteShortcutItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100468e0 FUN_100468e0

undefined4 FUN_100468e0(int param_1)

{
  int iVar1;
  int iVar2;
  UPackage *pUVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  uint uStack_8c;
  FString local_40 [28];
  undefined1 *local_24;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df221;
  local_10 = ExceptionList;
  uStack_8c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_8c;
  ExceptionList = &local_10;
  iVar5 = 0;
  local_8 = 0;
  local_1c = in_ECX;
  do {
    if (0x77 < iVar5) {
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = *(int *)(*(int *)(local_1c + 0x34 + iVar5 * 4) + 0x48);
    local_18 = iVar5;
    if (iVar1 == 0) {
      appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x210);
    }
    iVar2 = FUN_10045220();
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x1e54) != 0)) && (*(int *)(iVar1 + 0x1e58) == param_1))
    {
      FUN_1000eea0();
      iVar5 = FUN_101b2b20();
      if (iVar5 == -1) {
        iVar5 = FUN_101b2b30();
        if (iVar5 != -1) {
          FUN_101b2720();
          goto LAB_100469dd;
        }
        FUN_10045170();
      }
      else {
        FUN_101b25a0();
LAB_100469dd:
        local_24 = &stack0xffffff6c;
        FName::FName((FName *)&stack0xffffff6c,0);
        pUVar3 = UObject::GetTransientPackage();
        iVar5 = FUN_1002dd90(0x1f5c,pUVar3);
        if (iVar5 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_1002f690();
        }
        if (piVar4[0x7a0] < 1) {
          iVar5 = FUN_1002cc80();
          if (iVar5 != 0) {
            *(int *)(iVar1 + 0x1e64) = piVar4[0x799];
          }
          (**(code **)(*piVar4 + 0xc))();
        }
        else {
          *(int *)(iVar1 + 0x1e80) = piVar4[0x7a0];
          (**(code **)(*piVar4 + 0xc))();
        }
      }
      FUN_1003f970();
      local_8._0_1_ = 1;
      FString::FString(local_40,(ushort *)L"ShortcutID");
      local_8._0_1_ = 2;
      FUN_10040090();
      local_8._0_1_ = 1;
      FString::~FString(local_40);
      FUN_10005c30();
      FUN_100d1790();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
      iVar5 = local_18;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


// ==== 10046adb Catch@10046adb

void Catch_10046adb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10046aef Catch@10046aef

void Catch_10046aef(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::UpdateItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10046b10 FUN_10046b10

undefined4 FUN_10046b10(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uStack_4c;
  FString local_3c [12];
  undefined1 local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df251;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = in_ECX;
  for (iVar3 = 0; iVar3 < 0x78; iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(*(int *)(local_1c + 0x34 + iVar3 * 4) + 0x48);
    local_18 = iVar3;
    if (iVar1 == 0) {
      appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x256);
    }
    iVar2 = FUN_10045220();
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x1e54) != 0)) && (*(int *)(iVar1 + 0x1e58) == param_1))
    {
      uVar4 = *(undefined4 *)(iVar1 + 0x1e7c);
      iVar3 = FUN_101ae490(param_1);
      if (iVar3 == 0) {
        FUN_10045170();
      }
      else if (*(int *)(iVar3 + 0x1e80) < 1) {
        iVar2 = FUN_1002cc80();
        if (iVar2 != 0) {
          *(undefined4 *)(iVar1 + 0x1e64) = *(undefined4 *)(iVar3 + 0x1e64);
        }
      }
      else {
        *(int *)(iVar1 + 0x1e80) = *(int *)(iVar3 + 0x1e80);
      }
      FUN_1003f970();
      local_8._0_1_ = 1;
      FString::FString(local_3c,(ushort *)L"ShortcutID");
      local_8._0_1_ = 2;
      FUN_10040090(local_3c,uVar4);
      local_8._0_1_ = 1;
      FString::~FString(local_3c);
      puVar5 = local_30;
      uVar4 = 0x276;
      FUN_10005c30(0x276,puVar5);
      FUN_100d1790(uVar4,puVar5);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
      iVar3 = local_18;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10046c6d Catch@10046c6d

void Catch_10046c6d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10046c81 Catch@10046c81

void Catch_10046c81(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::UpdatePetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10046ca0 FUN_10046ca0

undefined4 FUN_10046ca0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *pvVar4;
  undefined1 *puVar5;
  uint uStack_50;
  L2ParamStack local_40 [4];
  FString local_3c [12];
  undefined1 local_30 [20];
  void *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df28a;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  pvVar4 = (void *)0x0;
  local_8 = 0;
  local_18 = in_ECX;
  while( true ) {
    if (0x77 < (int)pvVar4) {
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = *(int *)(*(int *)(local_18 + 0x34 + (int)pvVar4 * 4) + 0x48);
    local_1c = pvVar4;
    if (iVar1 == 0) {
      appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x2ac);
    }
    iVar2 = FUN_10045220();
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x1e54) == 4)) && (*(int *)(iVar1 + 0x1e5c) == param_1))
    break;
    pvVar4 = (void *)((int)pvVar4 + 1);
  }
  local_18 = *(undefined4 *)(iVar1 + 0x1e7c);
  if (param_2 == 2) {
    iVar2 = FUN_101ade70(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_101aee70(param_1);
      appSprintf((ushort *)(iVar1 + 0x44c),(ushort *)L"L2UI.MacroWnd.Macro_Icon%d",iVar2 + 1);
      uVar3 = FUN_1003f630((ushort *)(iVar1 + 0x44c),1);
      *(undefined4 *)(iVar1 + 0x34) = uVar3;
      uVar3 = FUN_101aef20(param_1);
      appSprintf((ushort *)(iVar1 + 0x4c),(ushort *)&DAT_1022dde0,uVar3);
    }
  }
  else if (param_2 == 0) {
    L2ParamStack::L2ParamStack(local_40,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_40,pvVar4);
    FUN_10143d50(local_40);
    FUN_10045170();
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_40);
  }
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_3c,(ushort *)L"ShortcutID");
  local_8._0_1_ = 3;
  FUN_10040090(local_3c,local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_3c);
  puVar5 = local_30;
  uVar3 = 0x276;
  FUN_10005c30(0x276,puVar5);
  FUN_100d1790(uVar3,puVar5);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10046e76 Catch@10046e76

void Catch_10046e76(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10046e8a Catch@10046e8a

void Catch_10046e8a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::UpdateMacro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10046eb0 FUN_10046eb0

void FUN_10046eb0(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int in_ECX;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_4c;
  FString local_3c [12];
  undefined1 local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df2c1;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar4 = 0;
  local_18 = in_ECX;
  do {
    if (0x77 < iVar4) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = *(int *)(*(int *)(local_18 + 0x34 + iVar4 * 4) + 0x48);
    local_1c = iVar4;
    if (iVar1 == 0) {
      appFailAssert("pShortcutItem",".\\Src\\NShortcutItemManager.cpp",0x322);
    }
    iVar2 = FUN_10045220();
    if (iVar2 != 0) {
      switch(*(undefined4 *)(iVar1 + 0x1e54)) {
      case 1:
        puVar3 = (ushort *)FUN_101647b0(*(undefined4 *)(iVar1 + 0x1e5c));
        break;
      case 2:
        puVar3 = (ushort *)
                 FUN_10164900(*(undefined4 *)(iVar1 + 0x1e5c),*(undefined4 *)(iVar1 + 0x1e60));
        break;
      case 3:
        puVar3 = (ushort *)FUN_1014e120(*(undefined4 *)(iVar1 + 0x1e5c));
        break;
      case 4:
        puVar3 = (ushort *)FUN_101aef20(*(undefined4 *)(iVar1 + 0x1e5c));
        break;
      default:
        goto switchD_10046f38_default;
      }
      if (puVar3 != (ushort *)0x0) {
        appStrcpy((ushort *)(iVar1 + 0x4c),puVar3);
      }
      FUN_1003f970();
      local_8._0_1_ = 1;
      FString::FString(local_3c,(ushort *)L"ShortcutID");
      local_8._0_1_ = 2;
      FUN_10040090(local_3c,*(undefined4 *)(iVar1 + 0x1e7c));
      local_8._0_1_ = 1;
      FString::~FString(local_3c);
      puVar6 = local_30;
      uVar5 = 0x276;
      FUN_10005c30(0x276,puVar6);
      FUN_100d1790(uVar5,puVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
    }
switchD_10046f38_default:
    iVar4 = iVar4 + 1;
  } while( true );
}


// ==== 1004702b Catch@1004702b

void Catch_1004702b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1004703f Catch@1004703f

void Catch_1004703f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::ResetItemLanguage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10047070 FUN_10047070

undefined4 FUN_10047070(uint param_1)

{
  int in_ECX;
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df2f1;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  local_8 = 0;
  if (param_1 < 10) {
    ExceptionList = &local_10;
    *(uint *)(in_ECX + 0x214) = param_1;
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,(ushort *)L"ShortcutPage");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,*(undefined4 *)(in_ECX + 0x214));
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    puVar2 = local_28;
    uVar1 = 0x280;
    FUN_10005c30(0x280,puVar2);
    FUN_100d1790(uVar1,puVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}


// ==== 10047140 Catch@10047140

void Catch_10047140(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10047154 Catch@10047154

void Catch_10047154(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::SetShortcutPage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10047190 FUN_10047190

void FUN_10047190(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df310;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x214) == 0) {
    iVar1 = 9;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x214) + -1;
  }
  FUN_10047070(iVar1);
  ExceptionList = local_10;
  return;
}


// ==== 100471ee Catch@100471ee

void Catch_100471ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10047202 Catch@10047202

void Catch_10047202(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::ShortcutPageUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10047220 FUN_10047220

void FUN_10047220(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df330;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10047070((*(int *)(in_ECX + 0x214) + 1) % 10);
  ExceptionList = local_10;
  return;
}


// ==== 1004727b Catch@1004727b

void Catch_1004727b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004728f Catch@1004728f

void Catch_1004728f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemManager::ShortcutPageDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100472b0 FUN_100472b0

void FUN_100472b0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x350) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x340) = 0;
  *(undefined4 *)(in_ECX + 0x33c) = 0;
  if (*(int *)(in_ECX + 0xd4) != 0) {
    FUN_10054cc0();
    return;
  }
  return;
}


// ==== 100472e0 FUN_100472e0

undefined4 FUN_100472e0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df350;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x350) == -1) {
    return 0;
  }
  ExceptionList = &local_10;
  FUN_10046690(*(int *)(in_ECX + 0x350));
  FUN_10054cc0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10047369 Catch@10047369

void Catch_10047369(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004737d Catch@1004737d

void Catch_1004737d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemWnd::DeleteItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100473a0 FUN_100473a0

undefined4 FUN_100473a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x350);
}


// ==== 100473ea Catch@100473ea

void Catch_100473ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100473fe Catch@100473fe

void Catch_100473fe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemWnd::GetShortcutID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10047420 FUN_10047420

undefined4 FUN_10047420(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x354) = param_1;
  return 1;
}


// ==== 10047474 Catch@10047474

void Catch_10047474(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10047488 Catch@10047488

void Catch_10047488(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemWnd::SetAlwaysShowOutline");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100474b0 FUN_100474b0

void FUN_100474b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df3c2;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x328) = 1;
  *(undefined4 *)(in_ECX + 0x340) = 0;
  *(undefined4 *)(in_ECX + 0x33c) = 0;
  iVar1 = FUN_1003f630(L"L2UI_CH3.Etc.menu_outline",1);
  *(int *)(in_ECX + 0x344) = iVar1;
  if (iVar1 == 0) {
    appFailAssert("m_pIconFront",".\\Src\\NShortcutItemWnd.cpp",0x67);
  }
  iVar1 = FUN_1003f630(L"L2_SkillTime.ToggleEffect.ToggleEffect001",1);
  *(int *)(in_ECX + 0x348) = iVar1;
  if (iVar1 == 0) {
    appFailAssert("m_pIconToggle",".\\Src\\NShortcutItemWnd.cpp",0x6a);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x348) + 0x5e4) = 0x41100000;
  uVar2 = FUN_1003f630(L"L2UI_ch3.ShortcutWnd.shortcut_recipeicon",1);
  *(undefined4 *)(in_ECX + 0x34c) = uVar2;
  FString::FString(local_28,(ushort *)L"L2UI_CH3.Etc.menu_outline");
  local_8._0_1_ = 1;
  FUN_10003e80(local_28);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"L2UI_CH3.Etc.menu_outline_down");
  local_8._0_1_ = 2;
  FUN_10003f50(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  FUN_10061b40();
  ExceptionList = local_10;
  return;
}


// ==== 100475e3 Catch@100475e3

void Catch_100475e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100475f7 Catch@100475f7

void Catch_100475f7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10047620 FUN_10047620

void FUN_10047620(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df3e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x340) = 0;
  *(undefined4 *)(in_ECX + 0x33c) = 0;
  FUN_10003a70();
  ExceptionList = local_10;
  return;
}


// ==== 10047673 Catch@10047673

void Catch_10047673(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10047687 Catch@10047687

void Catch_10047687(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100476b0 FUN_100476b0

void FUN_100476b0(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  FString *this;
  ushort *puVar4;
  int in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df409;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = &uStack_38;
  if ((*(int *)(in_ECX + 0xb0) != 0) && (puVar1 = &uStack_38, *(int *)(in_ECX + 0x340) != 0)) {
    iVar2 = FUN_10045220();
    puVar1 = (uint *)local_14;
    if (iVar2 != 0) {
      iVar2 = FUN_10147a60(0,0);
      puVar1 = (uint *)local_14;
      if (iVar2 == 0) {
        uVar3 = FUN_100473a0();
        *(undefined4 *)(*(int *)(in_ECX + 0x340) + 0x1d4c) = uVar3;
        this = (FString *)FUN_10057590(local_28);
        local_8._0_1_ = 1;
        puVar4 = FString::operator*(this);
        appStrcpy((ushort *)(*(int *)(in_ECX + 0x340) + 0x1c4c),puVar4);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_28);
        iVar2 = in_ECX;
        uVar3 = FUN_1002c970();
        FUN_10147950(1,*(undefined4 *)(in_ECX + 0x340),uVar3,iVar2);
        puVar1 = (uint *)local_14;
      }
    }
  }
  local_14 = (undefined1 *)puVar1;
  FUN_100056f0(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 100477b0 Catch@100477b0

void Catch_100477b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100477c4 Catch@100477c4

void Catch_100477c4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortCutWnd::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100477f0 FUN_100477f0

undefined4 FUN_100477f0(void)

{
  int iVar1;
  int in_ECX;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df439;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x340) != 0) {
    iVar1 = FUN_10149ee0(*(undefined4 *)(*(int *)(in_ECX + 0x340) + 0x1e5c));
    if (iVar1 != 0) {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8._0_1_ = 1;
      L2ParamStack::PushBack(local_2c,*(void **)(*(int *)(in_ECX + 0x340) + 0x1e5c));
      L2ParamStack::PushBack
                (local_2c,(void *)(uint)(*(int *)(*(int *)(in_ECX + 0x340) + 0x1f68) == 0));
      FUN_10149ed0(local_2c);
      local_8 = (uint)local_8._1_3_ << 8;
      L2ParamStack::~L2ParamStack(local_2c);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 100478b7 Catch@100478b7

void Catch_100478b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100478cb Catch@100478cb

void Catch_100478cb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemWnd::OnRButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100478f0 FUN_100478f0

undefined4 FUN_100478f0(int param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  FString aFStack_54 [4];
  undefined4 uStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 *puStack_3c;
  uint uStack_38;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df472;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  puStack_3c = &local_18;
  uStack_50 = 0x1004793d;
  FString::FString((FString *)&iStack_48,(ushort *)L"IsLockShortcutWnd");
  local_8._0_1_ = 1;
  FString::FString(aFStack_54,(ushort *)L"Game");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10042370();
  puStack_3c = (undefined4 *)param_2;
  iStack_40 = param_1;
  iStack_44 = 0x1004797c;
  iVar1 = FUN_10059330();
  if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) {
    if (param_1 < in_ECX[0x20]) {
      param_1 = param_1 + 0x1e;
    }
    else if ((float)in_ECX[0x22] + (float)in_ECX[0x20] < (float)param_1) {
      param_1 = param_1 + -0x1e;
    }
    if (param_2 < in_ECX[0x21]) {
      param_2 = param_2 + 0x1e;
    }
    else if ((float)in_ECX[0x23] + (float)in_ECX[0x21] < (float)param_2) {
      param_2 = param_2 + -0x1e;
    }
    iStack_48 = param_1;
    iStack_44 = param_2;
    iVar1 = (**(code **)(*in_ECX + 0x70))();
    if (iVar1 == 0) {
      FUN_100472e0();
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10047a0a Catch@10047a0a

void Catch_10047a0a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10047a1e Catch@10047a1e

void Catch_10047a1e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemWnd::OnDragButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10047a40 FUN_10047a40

undefined4 FUN_10047a40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df490;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x350) = param_1;
  iVar1 = FUN_10045430(param_1);
  *(int *)(in_ECX + 0x340) = iVar1;
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  uVar2 = FUN_100454d0(param_1);
  *(undefined4 *)(in_ECX + 0x33c) = uVar2;
  FUN_1002fa80();
  FUN_10054cc0();
  iVar1 = FUN_10045220();
  *(uint *)(in_ECX + 0x324) = (uint)(iVar1 != 0);
  ExceptionList = local_10;
  return 1;
}


// ==== 10047b0d Catch@10047b0d

void Catch_10047b0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10047b21 Catch@10047b21

void Catch_10047b21(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemWnd::SetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10047b40 FUN_10047b40

undefined4 FUN_10047b40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  puStack_c = &LAB_101df4b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  if (*(int *)(in_ECX + 0x340) != 0) {
    iVar4 = FUN_10045220();
    if (iVar4 != 0) {
      uVar2 = FUN_101c19e0();
      uVar3 = FUN_101c19e0();
      uVar7 = 1;
      uVar6 = 0xff;
      uVar5 = FUN_1002c970(0xff,1);
      FUN_10021a00(1,1,uVar3,uVar2,*(undefined4 *)(in_ECX + 0x104),*(undefined4 *)(in_ECX + 0x108),
                   uVar3,uVar2,uVar5,uVar6,uVar7);
      FUN_100034b0(iVar1);
      if (*(int *)(*(int *)(in_ECX + 0x340) + 0x1e54) == 4) {
        iVar4 = FUN_101ade70(*(undefined4 *)(*(int *)(in_ECX + 0x340) + 0x1e5c));
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
        if (*(int *)(*(int *)(in_ECX + 0x340) + 0x1f68) != 0) goto LAB_10047cb8;
      }
      else {
        iVar4 = FUN_10146830(*(undefined4 *)(*(int *)(in_ECX + 0x340) + 0x1e5c));
        if (iVar4 == 0) goto LAB_10047ca9;
LAB_10047cb8:
        FUN_10021a00(1,1,0x21,0x21,0,0,0x20,0x20,*(undefined4 *)(in_ECX + 0x348),0xff,1);
      }
      if (*(int *)(*(int *)(in_ECX + 0x340) + 0x1e54) == 5) {
        FUN_10021a00(1,1,0x21,0x21,0,0,0x20,0x20,*(undefined4 *)(in_ECX + 0x34c),0xff,1);
      }
      param_1 = 0;
      iVar4 = FUN_101ad480(*(undefined4 *)(*(int *)(in_ECX + 0x340) + 0x1e5c),
                           *(undefined4 *)(*(int *)(in_ECX + 0x340) + 0x1e54),&param_1);
      if ((iVar4 != 0) && (param_1 != 0)) {
        if (*(int *)(param_1 + 0x38) != 0) {
          uVar3 = 0xff008080;
          uVar2 = FUN_1002f110(0xff008080);
          FUN_10020dc0(1,1,0x21,0x21,0,0,0x20,0x20,uVar2,uVar3);
          if (*(int *)(param_1 + 0x3c) != 0) {
            FUN_1014ed50(9);
            *(undefined4 *)(param_1 + 0x3c) = 0;
          }
        }
        if (*(int *)(param_1 + 0x34) != 0) {
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
  if (*(int *)(in_ECX + 0x354) != 0) {
    uVar2 = *(undefined4 *)(in_ECX + 0x2d8);
    *(undefined4 *)(in_ECX + 0x2d8) = 0;
    FUN_100034b0(iVar1);
    *(undefined4 *)(in_ECX + 0x2d8) = uVar2;
  }
LAB_10047e0a:
  FUN_100212e0();
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10047e33 Catch@10047e33

void Catch_10047e33(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10047e47 Catch@10047e47

void Catch_10047e47(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10047e70 FUN_10047e70

undefined4 FUN_10047e70(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df4d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100060d0();
  if (*(int *)(in_ECX + 0x340) != 0) {
    iVar1 = FUN_10045220();
    if (iVar1 != 0) {
      FUN_10171290(*(undefined4 *)(in_ECX + 0x340),0,0);
      *(undefined4 *)(*(int *)(in_ECX + 0x33c) + 8) = 0;
      FUN_10045970();
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10047f01 Catch@10047f01

void Catch_10047f01(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10047f15 Catch@10047f15

void Catch_10047f15(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemWnd::OnClickButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10047f40 FUN_10047f40

UObject * FUN_10047f40(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10363f50);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10047f70 FUN_10047f70

undefined4 FUN_10047f70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df4f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x2dc) != 0) {
    iVar3 = *(int *)(in_ECX + 0xd4) + 0x24;
    iVar4 = in_ECX + 0x164;
    uVar1 = FUN_10047f40(*(undefined4 *)(in_ECX + 0x340),iVar4,iVar3);
    FUN_101b8f10(uVar1,iVar4,iVar3);
    if (*(int *)(in_ECX + 0xd4) != 0) {
      FUN_10054680(param_1,*(int *)(in_ECX + 0xd4) + 0x24,0,0,*(undefined4 *)(in_ECX + 0x80),
                   *(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x88),
                   *(undefined4 *)(in_ECX + 0x8c));
    }
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1004808b Catch@1004808b

void Catch_1004808b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004809f Catch@1004809f

void Catch_1004809f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemWnd::OnPostPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100480c0 FUN_100480c0

undefined4 FUN_100480c0(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  ushort *puVar5;
  int in_ECX;
  int *piVar6;
  code *pcVar7;
  undefined4 uStack_70;
  UObject *pUStack_6c;
  undefined4 uStack_64;
  uint uStack_54;
  L2ParamStack local_44 [20];
  undefined1 *local_30;
  undefined1 *local_2c;
  int local_20;
  UObject *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101df558;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  piVar6 = (int *)0x0;
  local_8 = 0;
  local_20 = 0;
  local_2c = (undefined1 *)&uStack_64;
  pUStack_6c = (UObject *)0x1004810f;
  FString::FString((FString *)&uStack_64,(ushort *)L"IsLockShortcutWnd");
  local_8._0_1_ = 1;
  local_30 = (undefined1 *)&uStack_70;
  FString::FString((FString *)&uStack_70,(ushort *)L"Game");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10042370();
  FUN_1005f6e0();
  local_1c = (UObject *)0x0;
  FUN_10147a60();
  if (local_18 == 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (local_20 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  iVar1 = UObject::IsA(local_1c,(UClass *)&DAT_10368830);
  if (iVar1 != 0) {
    uStack_64 = 0;
    pUStack_6c = (UObject *)0x100481a1;
    iVar1 = FUN_101c1ed6();
    pUStack_6c = local_1c;
    uStack_70 = 0x100481ac;
    iVar2 = FUN_100181a0();
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    uStack_64 = 0x100481d0;
    FName::FName((FName *)&stack0xffffffa4,0);
    UObject::GetTransientPackage();
    uStack_64 = 0x1f84;
    iVar2 = FUN_100459d0();
    if (iVar2 != 0) {
      piVar6 = (int *)FUN_10045a30();
    }
    if (*(int *)(in_ECX + 0x340) != 0) {
      FUN_10044f30();
    }
    pvVar3 = (void *)FUN_1002ca60();
    L2ParamStack::L2ParamStack(local_44,10);
    local_8 = CONCAT31(local_8._1_3_,3);
    L2ParamStack::PushBack(local_44,*(void **)(iVar1 + 0x1e54));
    pvVar4 = (void *)FUN_100473a0();
    L2ParamStack::PushBack(local_44,pvVar4);
    if ((*(int *)(iVar1 + 0x1e54) == 1) || (*(int *)(iVar1 + 0x1e54) == 5)) {
      pvVar4 = *(void **)(iVar1 + 0x1e58);
    }
    else {
      pvVar4 = *(void **)(iVar1 + 0x1e5c);
    }
    L2ParamStack::PushBack(local_44,pvVar4);
    L2ParamStack::PushBack(local_44,(void *)0x1);
    FUN_1015a3b0();
    if (*(int *)(iVar1 + 0x1f68) != 0) {
      L2ParamStack::Clear(local_44);
      L2ParamStack::PushBack(local_44,*(void **)(iVar1 + 0x1e5c));
      L2ParamStack::PushBack(local_44,(void *)0x1);
      FUN_10149ed0();
    }
    iVar1 = FUN_10045220();
    if (iVar1 == 0) {
      FUN_100472e0();
    }
    else {
      L2ParamStack::Clear(local_44);
      L2ParamStack::PushBack(local_44,(void *)piVar6[0x795]);
      L2ParamStack::PushBack(local_44,pvVar3);
      if ((piVar6[0x795] == 1) || (piVar6[0x795] == 5)) {
        pvVar3 = (void *)piVar6[0x796];
      }
      else {
        pvVar3 = (void *)piVar6[0x797];
      }
      L2ParamStack::PushBack(local_44,pvVar3);
      L2ParamStack::PushBack(local_44,(void *)0x1);
      FUN_1015a3b0();
      if (piVar6[0x7da] != 0) {
        L2ParamStack::Clear(local_44);
        L2ParamStack::PushBack(local_44,(void *)piVar6[0x797]);
        L2ParamStack::PushBack(local_44,(void *)0x1);
        FUN_10149ed0();
      }
    }
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))();
    }
    goto LAB_10048675;
  }
  if ((ushort *)(local_18 + 0x1c4c) == (ushort *)0x0) {
    ExceptionList = local_10;
    return 1;
  }
  iVar1 = appStrcmp((ushort *)(local_18 + 0x1c4c),(ushort *)L"InventoryItem");
  if ((iVar1 == 0) ||
     (puVar5 = appStrstr((ushort *)(local_18 + 0x1c4c),(ushort *)L"EquipItem"),
     puVar5 != (ushort *)0x0)) {
    if (*(int *)(local_18 + 0x1e50) == -1) {
      ExceptionList = local_10;
      return 1;
    }
    if (*(int *)(local_18 + 0x1e58) < 1) {
      ExceptionList = local_10;
      return 1;
    }
    L2ParamStack::L2ParamStack(local_44,10);
    pcVar7 = PushBack_exref;
    local_8 = CONCAT31(local_8._1_3_,4);
    L2ParamStack::PushBack(local_44,(void *)0x1);
    pvVar3 = (void *)FUN_100473a0();
    L2ParamStack::PushBack(local_44,pvVar3);
LAB_10048659:
    (*pcVar7)();
    (*pcVar7)();
  }
  else {
    iVar1 = appStrcmp((ushort *)(local_18 + 0x1c4c),(ushort *)L"PetInvenWnd");
    if (iVar1 == 0) {
      if (*(int *)(local_18 + 0x1e50) == -1) {
        ExceptionList = local_10;
        return 1;
      }
      if (*(int *)(local_18 + 0x1e58) < 1) {
        ExceptionList = local_10;
        return 1;
      }
      L2ParamStack::L2ParamStack(local_44,10);
      local_8 = CONCAT31(local_8._1_3_,5);
      L2ParamStack::PushBack(local_44,(void *)0x1);
      pvVar3 = (void *)FUN_100473a0();
      L2ParamStack::PushBack(local_44,pvVar3);
      L2ParamStack::PushBack(local_44,*(void **)(local_18 + 0x1e58));
      L2ParamStack::PushBack(local_44,(void *)0x2);
    }
    else {
      iVar1 = appStrcmp((ushort *)(local_18 + 0x1c4c),(ushort *)L"MacroItem");
      if ((iVar1 == 0) ||
         (iVar1 = appStrcmp((ushort *)(local_18 + 0x1c4c),(ushort *)L"SkillItem"), iVar1 == 0)) {
        L2ParamStack::L2ParamStack(local_44,10);
        pcVar7 = PushBack_exref;
        local_8 = CONCAT31(local_8._1_3_,6);
        L2ParamStack::PushBack(local_44,*(void **)(local_18 + 0x1e54));
        pvVar3 = (void *)FUN_100473a0();
        L2ParamStack::PushBack(local_44,pvVar3);
        goto LAB_10048659;
      }
      iVar1 = appStrcmp((ushort *)(local_18 + 0x1c4c),(ushort *)L"ActionBasicItem");
      if ((((iVar1 == 0) ||
           (iVar1 = appStrcmp((ushort *)(local_18 + 0x1c4c),(ushort *)L"ActionPartyItem"),
           iVar1 == 0)) ||
          (iVar1 = appStrcmp((ushort *)(local_18 + 0x1c4c),(ushort *)L"ActionSocialItem"),
          iVar1 == 0)) ||
         ((iVar1 = appStrcmp((ushort *)(local_18 + 0x1c4c),(ushort *)L"PetActionWnd"), iVar1 == 0 ||
          (iVar1 = appStrcmp((ushort *)(local_18 + 0x1c4c),(ushort *)L"SummonedActionWnd"),
          iVar1 == 0)))) {
        L2ParamStack::L2ParamStack(local_44,10);
        local_8 = CONCAT31(local_8._1_3_,7);
        L2ParamStack::PushBack(local_44,*(void **)(local_18 + 0x1e54));
        pvVar3 = (void *)FUN_100473a0();
        L2ParamStack::PushBack(local_44,pvVar3);
        L2ParamStack::PushBack(local_44,*(void **)(local_18 + 0x1e5c));
        iVar1 = *(int *)(local_18 + 0x1e5c);
        if ((iVar1 < 0) || (0xe < iVar1)) {
          if ((0xe < iVar1) && (iVar1 < 0x1c)) {
            L2ParamStack::PushBack(local_44,(void *)0x2);
          }
        }
        else {
          L2ParamStack::PushBack(local_44,(void *)0x1);
        }
      }
      else {
        iVar1 = appStrcmp((ushort *)(local_18 + 0x1c4c),(ushort *)L"RecipeItem");
        if (iVar1 != 0) {
          ExceptionList = local_10;
          return 1;
        }
        if (*(int *)(local_18 + 0x1e58) < 1) {
          ExceptionList = local_10;
          return 1;
        }
        L2ParamStack::L2ParamStack(local_44,10);
        local_8 = CONCAT31(local_8._1_3_,8);
        L2ParamStack::PushBack(local_44,(void *)0x5);
        pvVar3 = (void *)FUN_100473a0();
        L2ParamStack::PushBack(local_44,pvVar3);
        L2ParamStack::PushBack(local_44,*(void **)(local_18 + 0x1e58));
        L2ParamStack::PushBack(local_44,(void *)0x1);
      }
    }
  }
  FUN_1015a3b0();
LAB_10048675:
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_44);
  ExceptionList = local_10;
  return 1;
}


// ==== 1004869b Catch@1004869b

void Catch_1004869b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 100486af Catch@100486af

void Catch_100486af(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemWnd::OnDropItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100486d0 FUN_100486d0

void FUN_100486d0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101df588;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10006830();
  *in_ECX = NCShortcutItemWnd::vftable;
  in_ECX[0xd4] = 0xffffffff;
  in_ECX[0xd0] = 0;
  in_ECX[0xcf] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10048740 Catch@10048740

void Catch_10048740(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10048754 Catch@10048754

void Catch_10048754(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutItemWnd::NCShortcutItemWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10048780 FUN_10048780

void FUN_10048780(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101df5b8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCShortcutItemWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10006780(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100487e0 FUN_100487e0

void FUN_100487e0(byte param_1)

{
  void *in_ECX;
  
  FUN_10048780();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x358);
  }
  return;
}


// ==== 10048820 FUN_10048820

void FUN_10048820(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101df5f5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 10048880 FUN_10048880

void FUN_10048880(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101df625;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100488e0 FUN_100488e0

void FUN_100488e0(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101df655;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  local_4 = 0;
  FString::FString(in_ECX + 0xc,param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 10048950 FUN_10048950

undefined4 FUN_10048950(int param_1)

{
  if ((((((0xb < param_1 - 0x70U) && (9 < param_1 - 0x30U)) && (0x19 < param_1 - 0x41U)) &&
       ((6 < param_1 - 0xbaU && (param_1 != 0x1b)))) &&
      ((param_1 != 0xd && ((param_1 != 9 && (0xe < param_1 - 0x20U)))))) && (3 < param_1 - 0xdbU)) {
    return 0;
  }
  return 1;
}


// ==== 100489f8 Catch@100489f8

void Catch_100489f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10048a0c Catch@10048a0c

void Catch_10048a0c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutManager::IsValidKey");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10048a30 FUN_10048a30

undefined4 FUN_10048a30(int param_1)

{
  if ((((param_1 != 0) && (param_1 != 0x10)) && (param_1 != 0x11)) && (param_1 != 0x12)) {
    return 0;
  }
  return 1;
}


// ==== 10048aa7 Catch@10048aa7

void Catch_10048aa7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10048abb Catch@10048abb

void Catch_10048abb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutManager::IsValidSubkey");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10048ae0 FUN_10048ae0

void FUN_10048ae0(void)

{
  return;
}


// ==== 10048b2b Catch@10048b2b

void Catch_10048b2b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10048b3f Catch@10048b3f

void Catch_10048b3f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutManager::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10048b60 FUN_10048b60

void FUN_10048b60(FString *param_1)

{
  FString *in_ECX;
  
  FString::operator=(in_ECX,param_1);
  FString::operator=(in_ECX + 0xc,param_1 + 0xc);
  return;
}


// ==== 10048b90 FUN_10048b90

void FUN_10048b90(ushort *param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101df6e7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  local_4 = 0;
  FUN_100488e0(param_2);
  ExceptionList = local_c;
  return;
}


// ==== 10048c00 FUN_10048c00

int FUN_10048c00(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x28);
  return *(int *)param_2 + iVar1 * 0x28;
}


// ==== 10048c20 FUN_10048c20

void FUN_10048c20(short *param_1)

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


// ==== 10048c80 FUN_10048c80

FString * FUN_10048c80(FString *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  FString *pFVar2;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df74e;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FUN_10048950(param_2);
  if (iVar1 == 0) {
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    iVar1 = FUN_10048a30(param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_10048a30(param_4);
      if (iVar1 == 0) {
        FString::FString(param_1,(ushort *)&DAT_1022f9f8);
        ExceptionList = local_10;
        return param_1;
      }
      FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
      local_8._0_1_ = 2;
      pFVar2 = (FString *)FUN_10065430(local_38,param_2);
      local_8._0_1_ = 3;
      FString::operator+=(local_2c,pFVar2);
      local_8._0_1_ = 2;
      FString::~FString(local_38);
      FString::operator+=(local_2c,&DAT_102401a8);
      pFVar2 = (FString *)FUN_10065430(local_38,param_3);
      local_8._0_1_ = 4;
      FString::operator+=(local_2c,pFVar2);
      local_8._0_1_ = 2;
      FString::~FString(local_38);
      FString::operator+=(local_2c,&DAT_102401a8);
      pFVar2 = (FString *)FUN_10065430(local_38,param_4);
      local_8._0_1_ = 5;
      FString::operator+=(local_2c,pFVar2);
      local_8._0_1_ = 2;
      FString::~FString(local_38);
      FString::FString(param_1,local_2c);
      local_18 = 1;
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_2c);
      ExceptionList = local_10;
      return param_1;
    }
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10048e2a Catch@10048e2a

void Catch_10048e2a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10048e3e Catch@10048e3e

void Catch_10048e3e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutManager::GetKeyString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10048e60 FUN_10048e60

int FUN_10048e60(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  puVar2 = FString::operator*(param_1);
  uVar3 = FUN_10048c20(puVar2);
  iVar1 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    iVar4 = FString::operator==((FString *)(*in_ECX + iVar1 * 0x28 + 4),param_1);
    if (iVar4 != 0) break;
    iVar1 = *(int *)(iVar1 * 0x28 + *in_ECX);
  }
  return *in_ECX + 0x10 + iVar1 * 0x28;
}


// ==== 10048ed0 FUN_10048ed0

void FUN_10048ed0(void)

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
      uVar4 = FUN_10048c20(puVar3);
      iVar2 = iVar2 + 0x28;
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


// ==== 10048f90 FUN_10048f90

undefined4 * FUN_10048f90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  int in_ECX;
  
  iVar1 = FUN_10048c00(0x28);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_10048b90(param_1,param_2);
  }
  puVar3 = FString::operator*((FString *)(puVar2 + 1));
  uVar4 = FUN_10048c20(puVar3);
  uVar4 = *(int *)(in_ECX + 0x10) - 1U & uVar4;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar4 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar4 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    FUN_10048ed0();
  }
  return puVar2 + 4;
}


// ==== 10049010 FUN_10049010

void FUN_10049010(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101df79c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
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
    iVar1 = param_1 * 0x28;
    local_18 = local_18 - param_1;
    do {
      iVar2 = *(int *)in_ECX + iVar1;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      FString::~FString((FString *)(iVar2 + 0x1c));
      local_4 = (uint)local_4._1_3_ << 8;
      FString::~FString((FString *)(iVar2 + 0x10));
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar2 + 4));
      iVar1 = iVar1 + 0x28;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x28);
  ExceptionList = local_c;
  return;
}


// ==== 10049120 FUN_10049120

undefined4 FUN_10049120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  FString *pFVar2;
  ushort *puVar3;
  uint uStack_60;
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101df820;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FUN_10048c80(local_38,param_2,param_3,param_4);
  local_8._0_1_ = 3;
  FString::FString(local_2c,(FString *)&stack0x00000014);
  local_8._0_1_ = 4;
  iVar1 = FString::operator!=(local_2c,(ushort *)&DAT_1022f9f8);
  if (iVar1 != 0) {
    pFVar2 = (FString *)FString::Caps(local_2c);
    local_8._0_1_ = 5;
    FString::operator=(local_2c,pFVar2);
    local_8._0_1_ = 4;
    FString::~FString(local_44);
    pFVar2 = (FString *)FString::Right(local_2c,(int)local_44);
    local_8._0_1_ = 6;
    iVar1 = FString::operator!=(pFVar2,(ushort *)L"STATE");
    local_8 = CONCAT31(local_8._1_3_,4);
    FString::~FString(local_44);
    if (iVar1 != 0) {
      FString::operator+=(local_2c,(ushort *)L"STATE");
    }
    puVar3 = FString::operator*(local_2c);
    pFVar2 = (FString *)FString::Printf((ushort *)local_44,L"+STATE=%s",puVar3);
    local_8._0_1_ = 7;
    FString::operator+=(local_38,pFVar2);
    local_8._0_1_ = 4;
    FString::~FString(local_44);
  }
  puVar3 = FString::operator*(local_38);
  FString::FString(local_44,puVar3);
  local_8._0_1_ = 8;
  iVar1 = FUN_10048e60(local_44);
  local_8._0_1_ = 4;
  FString::~FString(local_44);
  if (iVar1 == 0) {
    FUN_10048820();
    local_8._0_1_ = 9;
    FString::operator=(local_50,(ushort *)&DAT_1022f9f8);
    FString::operator=(local_44,(ushort *)&DAT_1022f9f8);
    FUN_100488e0(local_50);
    local_18 = 1;
    local_8._0_1_ = 4;
    FUN_10048880();
  }
  else {
    FUN_100488e0(iVar1);
    local_18 = 1;
  }
  local_8._0_1_ = 3;
  FString::~FString(local_2c);
  local_8._0_1_ = 2;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000014);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1004930f Catch@1004930f

void Catch_1004930f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10049323 Catch@10049323

void Catch_10049323(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutManager::GetCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10049340 FUN_10049340

int FUN_10049340(ushort *param_1,FString *param_2)

{
  FString *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = FUN_10048c20(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = FUN_10048f90(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x28 + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x28 + *in_ECX);
  }
  this = (FString *)(iVar3 * 0x28 + 0x10 + *in_ECX);
  FString::operator=(this,param_2);
  FString::operator=(this + 0xc,param_2 + 0xc);
  return iVar3 * 0x28 + 0x10 + *in_ECX;
}


// ==== 100493e0 FUN_100493e0

void FUN_100493e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101df849;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10049010(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10049440 FUN_10049440

void FUN_10049440(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101df89c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    local_18 = 0;
    do {
      iVar2 = *(int *)in_ECX + local_18;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      FString::~FString((FString *)(iVar2 + 0x1c));
      local_4 = (uint)local_4._1_3_ << 8;
      FString::~FString((FString *)(iVar2 + 0x10));
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar2 + 4));
      local_18 = local_18 + 0x28;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x28,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 100494f0 FUN_100494f0

void FUN_100494f0(void)

{
  int iVar1;
  FString *pFVar2;
  ushort *puVar3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  uint uStack_68;
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df907;
  local_10 = ExceptionList;
  uStack_68 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FUN_10048c80(local_34,in_stack_00000010,in_stack_00000014,in_stack_00000018);
  local_8._0_1_ = 3;
  FString::FString(local_28,(FString *)&stack0x0000001c);
  local_8._0_1_ = 4;
  iVar1 = FString::operator!=(local_28,(ushort *)&DAT_1022f9f8);
  if (iVar1 != 0) {
    pFVar2 = (FString *)FString::Caps(local_28);
    local_8._0_1_ = 5;
    FString::operator=(local_28,pFVar2);
    local_8._0_1_ = 4;
    FString::~FString(local_40);
    pFVar2 = (FString *)FString::Right(local_28,(int)local_40);
    local_8._0_1_ = 6;
    iVar1 = FString::operator!=(pFVar2,(ushort *)L"STATE");
    local_8 = CONCAT31(local_8._1_3_,4);
    FString::~FString(local_40);
    if (iVar1 != 0) {
      FString::operator+=(local_28,(ushort *)L"STATE");
    }
    puVar3 = FString::operator*(local_28);
    pFVar2 = (FString *)FString::Printf((ushort *)local_40,L"+STATE=%s",puVar3);
    local_8._0_1_ = 7;
    FString::operator+=(local_34,pFVar2);
    local_8._0_1_ = 4;
    FString::~FString(local_40);
  }
  FUN_10048820();
  local_8._0_1_ = 8;
  FString::operator=(local_4c,(FString *)&stack0x00000004);
  FString::operator=(local_58,local_28);
  pFVar2 = local_58;
  puVar3 = FString::operator*(local_34);
  FUN_10049340(puVar3,pFVar2);
  local_8._0_1_ = 4;
  FUN_10048880();
  local_8._0_1_ = 3;
  FString::~FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  FString::~FString(local_34);
  local_8 = 0;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x0000001c);
  ExceptionList = local_10;
  return;
}


// ==== 1004969c Catch@1004969c

void Catch_1004969c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100496b0 Catch@100496b0

void Catch_100496b0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutManager::SetCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100496d0 FUN_100496d0

void FUN_100496d0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101df941;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_10048ed0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10049740 FUN_10049740

void FUN_10049740(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101df968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))
              (*(int *)(in_ECX + 0xc),DAT_103554c4 ^ (uint)&stack0xffffffec);
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  FUN_100493e0();
  ExceptionList = local_c;
  return;
}


// ==== 100497c0 FUN_100497c0

void FUN_100497c0(void)

{
  int in_ECX;
  
  FUN_10049440(0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_10048ed0();
  return;
}


// ==== 100497e0 FUN_100497e0

void FUN_100497e0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101df998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_10049740(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 10049830 FUN_10049830

void FUN_10049830(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df9d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_10048ae0();
  local_8 = 0xffffffff;
  FUN_10049740();
  ExceptionList = local_10;
  return;
}


// ==== 10049890 Catch@10049890

void Catch_10049890(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100498a4 Catch@100498a4

void Catch_100498a4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutManager::~NCShortcutManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100498d0 FUN_100498d0

void FUN_100498d0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101df9f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100497c0();
  ExceptionList = local_10;
  return;
}


// ==== 10049920 Catch@10049920

void Catch_10049920(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10049934 Catch@10049934

void Catch_10049934(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutManager::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10049960 FUN_10049960

void FUN_10049960(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101dfa20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100496d0();
  local_8 = 2;
  FUN_100498d0();
  ExceptionList = local_10;
  return;
}


// ==== 100499c2 Catch@100499c2

void Catch_100499c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100499d6 Catch@100499d6

void Catch_100499d6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCShortcutManager::NCShortcutManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10049a00 FUN_10049a00

void FUN_10049a00(int param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  code *pcVar2;
  
  in_ECX[0xb9] = param_1;
  in_ECX[0xbc] = param_2;
  if (param_2 < param_1) {
    iVar1 = FUN_101c19e0();
    in_ECX[0xb6] = iVar1;
    if (*(int *)(*(int *)(in_ECX[0x2e] + 0xc) + 4) == 0) goto LAB_10049a99;
    iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX[0x2e] + 0xc) + 4) + 0xfc))(0);
    if (iVar1 == 0) goto LAB_10049a99;
    iVar1 = (**(code **)(*in_ECX + 0xfc))(0);
    if (iVar1 != 0) goto LAB_10049a99;
    pcVar2 = *(code **)(*in_ECX + 0x138);
  }
  else {
    iVar1 = FUN_101c19e0();
    in_ECX[0xb6] = iVar1;
    pcVar2 = *(code **)(*in_ECX + 0x13c);
  }
  (*pcVar2)();
LAB_10049a99:
  if (in_ECX[0xb6] < 0xf) {
    in_ECX[0xb6] = 0xf;
  }
  iVar1 = FUN_101c19e0();
  in_ECX[0xba] = iVar1;
  return;
}


// ==== 10049ad0 FUN_10049ad0

undefined4 FUN_10049ad0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_10;
  uVar2 = *(undefined4 *)(in_ECX + 0x2ec);
  *unaff_FS_OFFSET = iVar1;
  return uVar2;
}


// ==== 10049b1a Catch@10049b1a

void Catch_10049b1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10049b2e Catch@10049b2e

void Catch_10049b2e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderBar::GetCurrentPos");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10049b50 FUN_10049b50

void FUN_10049b50(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x2e4);
  if ((*(int *)(in_ECX + 0x2ec) <= iVar1) && (-1 < *(int *)(in_ECX + 0x2ec))) {
    *(int *)(in_ECX + 0x2ec) = param_1;
    if (*(int *)(in_ECX + 0x2f0) < iVar1) {
      *(int *)(in_ECX + 0x2dc) =
           (*(int *)(in_ECX + 0x2e8) * param_1) / (iVar1 - *(int *)(in_ECX + 0x2f0));
      return;
    }
    *(undefined4 *)(in_ECX + 0x2dc) = 0;
    return;
  }
  *(undefined4 *)(in_ECX + 0x2ec) = 0;
  return;
}


// ==== 10049bb0 FUN_10049bb0

undefined4 FUN_10049bb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dfa60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d6f0(param_1,param_2);
  iVar2 = (int)(short)((uint)param_2 >> 0x10) - *(int *)(in_ECX + 0x84);
  iVar1 = *(int *)(in_ECX + 0x2dc);
  if ((iVar1 <= iVar2) && (iVar2 <= *(int *)(in_ECX + 0x2d8) + iVar1)) {
    if (*(int *)(in_ECX + 0x2f0) < *(int *)(in_ECX + 0x2e4)) {
      *(undefined4 *)(in_ECX + 0x2f4) = 1;
    }
    *(int *)(in_ECX + 0x2e0) = iVar2 - iVar1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10049c4c Catch@10049c4c

void Catch_10049c4c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10049c60 Catch@10049c60

void Catch_10049c60(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderBar::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10049c80 FUN_10049c80

undefined4 FUN_10049c80(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dfa80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d800(param_1,param_2);
  *(undefined4 *)(in_ECX + 0x2f4) = 0;
  *(undefined4 *)(in_ECX + 0x2e0) = 0;
  FUN_1000cbf0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10049ceb Catch@10049ceb

void Catch_10049ceb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10049cff Catch@10049cff

void Catch_10049cff(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderBar::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10049d20 FUN_10049d20

undefined4 FUN_10049d20(byte param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  if ((param_1 & 1) == 0) {
    return 1;
  }
  if (*(int *)(in_ECX + 0x2f4) == 0) {
    return 1;
  }
  iVar3 = *(int *)(in_ECX + 0x2e0);
  iVar4 = (int)(short)((uint)param_2 >> 0x10) - *(int *)(in_ECX + 0x84);
  iVar2 = (iVar4 - iVar3) - *(int *)(in_ECX + 0x2dc);
  if (iVar2 != 0) {
    iVar1 = *(int *)(in_ECX + 0x2dc);
    if (iVar1 < 1) {
      if (iVar4 < iVar3) {
        return 1;
      }
    }
    else if ((*(int *)(in_ECX + 0x2e8) <= iVar1) && (iVar1 + iVar3 < iVar4)) {
      return 1;
    }
  }
  if (0 < iVar2) {
    iVar3 = *(int *)(in_ECX + 0x2e8);
    if (*(int *)(in_ECX + 0x2dc) < iVar3) {
      iVar2 = iVar2 + *(int *)(in_ECX + 0x2dc);
      *(int *)(in_ECX + 0x2dc) = iVar2;
      if (iVar3 < iVar2) {
        *(int *)(in_ECX + 0x2dc) = iVar3;
      }
      iVar3 = ((*(int *)(in_ECX + 0x2e4) - *(int *)(in_ECX + 0x2f0)) * *(int *)(in_ECX + 0x2dc)) /
              iVar3;
      goto LAB_10049e00;
    }
  }
  if (-1 < iVar2) {
    return 1;
  }
  if (*(int *)(in_ECX + 0x2dc) < 1) {
    return 1;
  }
  iVar2 = iVar2 + *(int *)(in_ECX + 0x2dc);
  *(int *)(in_ECX + 0x2dc) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(in_ECX + 0x2dc) = 0;
  }
  iVar3 = ((*(int *)(in_ECX + 0x2e4) - *(int *)(in_ECX + 0x2f0)) * *(int *)(in_ECX + 0x2dc)) /
          *(int *)(in_ECX + 0x2e8);
LAB_10049e00:
  *(int *)(in_ECX + 0x2ec) = iVar3;
  FUN_1000cb20(iVar3);
  return 1;
}


// ==== 10049e20 FUN_10049e20

void FUN_10049e20(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2dc) = 0;
  *(undefined4 *)(in_ECX + 0x2ec) = 0;
  *(undefined4 *)(in_ECX + 0x2f0) = 0;
  *(undefined4 *)(in_ECX + 0x2d8) = 0;
  *(undefined4 *)(in_ECX + 0x2e0) = 0;
  *(undefined4 *)(in_ECX + 0x2f4) = 0;
  return;
}


// ==== 10049e8d Catch@10049e8d

void Catch_10049e8d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10049ea1 Catch@10049ea1

void Catch_10049ea1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderBar::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10049ec0 FUN_10049ec0

undefined4 FUN_10049ec0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dfac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (0 < *(int *)(in_ECX + 0x2d8)) {
    if (*(int *)(in_ECX + 0x2f8) != 0) {
      FUN_10021a00(0,*(undefined4 *)(in_ECX + 0x2dc),0xf,8,0,0,0xf,8,*(int *)(in_ECX + 0x2f8),0xff,1
                  );
    }
    if (*(int *)(in_ECX + 0x300) != 0) {
      FUN_10021a00(0,*(int *)(in_ECX + 0x2dc) + -8 + *(int *)(in_ECX + 0x2d8),0xf,8,0,0,0xf,8,
                   *(int *)(in_ECX + 0x300),0xff,1);
    }
    if (*(int *)(in_ECX + 0x2fc) != 0) {
      FUN_10021970(0,*(int *)(in_ECX + 0x2dc) + 8,0xf,*(int *)(in_ECX + 0x2d8) + -0x10,0,0,0xf,8,
                   *(int *)(in_ECX + 0x2fc),0xff);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1004a006 Catch@1004a006

void Catch_1004a006(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004a01a Catch@1004a01a

void Catch_1004a01a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderBar::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004a040 thunk_FUN_10049a00 thunk -> 10049a00

// ==== 1004a050 thunk_FUN_10049b50 thunk -> 10049b50

// ==== 1004a060 FUN_1004a060

void FUN_1004a060(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101dfae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCSliderBar::vftable;
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 0;
  in_ECX[0xbb] = 0;
  in_ECX[0xbc] = 0;
  in_ECX[0xbd] = 0;
  in_ECX[0xbe] = 0;
  in_ECX[0xbf] = 0;
  in_ECX[0xc0] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1004a0f0 FUN_1004a0f0

void FUN_1004a0f0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101dfb18;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCSliderBar::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1004a150 FUN_1004a150

void FUN_1004a150(byte param_1)

{
  void *in_ECX;
  
  FUN_1004a0f0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x304);
  }
  return;
}


// ==== 1004a180 FUN_1004a180

void FUN_1004a180(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101dfb48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 0;
  in_ECX[0xbb] = 0;
  in_ECX[0xbc] = 0;
  in_ECX[0xbd] = 0;
  *in_ECX = NCSliderBar::vftable;
  uVar1 = FUN_1003f630(param_1,1);
  in_ECX[0xbe] = uVar1;
  uVar1 = FUN_1003f630(param_2,1);
  in_ECX[0xbf] = uVar1;
  uVar1 = FUN_1003f630(param_3,1);
  in_ECX[0xc0] = uVar1;
  ExceptionList = local_c;
  return;
}


// ==== 1004a250 FUN_1004a250

bool FUN_1004a250(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100b1c70(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == -0xf0febeb) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == -0xf0febea) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
    if (param_2 == -0xf0febe9) {
      iVar1 = (**(code **)(*in_ECX + 0x200))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1004a2f0 FUN_1004a2f0

void FUN_1004a2f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  FString::operator=((FString *)(in_ECX + 9),(FString *)(param_1 + 9));
  FString::operator=((FString *)(in_ECX + 0xc),(FString *)(param_1 + 0xc));
  FString::operator=((FString *)(in_ECX + 0xf),(FString *)(param_1 + 0xf));
  FString::operator=((FString *)(in_ECX + 0x12),(FString *)(param_1 + 0x12));
  FString::operator=((FString *)(in_ECX + 0x15),(FString *)(param_1 + 0x15));
  FString::operator=((FString *)(in_ECX + 0x18),(FString *)(param_1 + 0x18));
  FString::operator=((FString *)(in_ECX + 0x1b),(FString *)(param_1 + 0x1b));
  FString::operator=((FString *)(in_ECX + 0x1e),(FString *)(param_1 + 0x1e));
  FString::operator=((FString *)(in_ECX + 0x21),(FString *)(param_1 + 0x21));
  return;
}


// ==== 1004a3b0 FUN_1004a3b0

void FUN_1004a3b0(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dfb70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x1a4))(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1004a408 Catch@1004a408

void Catch_1004a408(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004a41c Catch@1004a41c

void Catch_1004a41c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderCtrl::OnLButtonDblClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004a440 FUN_1004a440

void FUN_1004a440(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dfb90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101c19e0();
  ExceptionList = local_10;
  return;
}


// ==== 1004a4e4 Catch@1004a4e4

void Catch_1004a4e4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1004a4f8 Catch@1004a4f8

void Catch_1004a4f8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderCtrl::GetThumbPositionX");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004a520 FUN_1004a520

void FUN_1004a520(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dfbb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101c19e0();
  ExceptionList = local_10;
  return;
}


// ==== 1004a57d Catch@1004a57d

void Catch_1004a57d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004a591 Catch@1004a591

void Catch_1004a591(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderCtrl::GetThumbPositionY");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004a5b0 FUN_1004a5b0

undefined4 FUN_1004a5b0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x2fc);
}


// ==== 1004a5fa Catch@1004a5fa

void Catch_1004a5fa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004a60e Catch@1004a60e

void Catch_1004a60e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderCtrl::GetCurrentTick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004a630 FUN_1004a630

void FUN_1004a630(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dfbf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10054cc0();
  *(undefined4 *)(in_ECX + 0x2d8) = param_2;
  *(undefined4 *)(in_ECX + 0x2dc) = param_3;
  FString::operator=((FString *)(in_ECX + 0x2e0),param_1);
  FUN_101b8ab0((FString *)(in_ECX + 0x2e0),in_ECX + 0x304,0);
  *(undefined4 *)(in_ECX + 0x300) = param_4;
  ExceptionList = local_10;
  return;
}


// ==== 1004a6cd Catch@1004a6cd

void Catch_1004a6cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004a6e1 Catch@1004a6e1

void Catch_1004a6e1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNameCtrl::SetNameData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004a700 FUN_1004a700

void FUN_1004a700(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x344) = param_1;
  return;
}


// ==== 1004a756 Catch@1004a756

void Catch_1004a756(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004a76a Catch@1004a76a

void Catch_1004a76a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNameCtrl::SetShowStackNumber");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004a790 FUN_1004a790

void FUN_1004a790(undefined4 param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
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
  local_a20 = param_1;
  local_a0c = 0;
  local_a40 = *(undefined4 *)(in_ECX + 0x2ec);
  local_8 = uStack_a6c;
  puVar1 = FString::operator*((FString *)(in_ECX + 0x2e0));
  appStrcpy(local_808,puVar1);
  iVar2 = *(int *)(in_ECX + 0x2f0);
  iVar7 = *(int *)(in_ECX + 0x2f4);
  local_a34 = *(uint *)(in_ECX + 0x2f8);
  local_a38 = *(int *)(in_ECX + 0x2fc);
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
  if ((*(int *)(in_ECX + 0x344) != 0) && (0 < local_a38)) {
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


// ==== 1004ab84 Catch@1004ab84

void Catch_1004ab84(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_102a47f0);
}


// ==== 1004ab98 Catch@1004ab98

void Catch_1004ab98(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNameCtrl::DrawItemName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004abc0 FUN_1004abc0

void FUN_1004abc0(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
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
  local_21c = param_1;
  local_20c = 0;
  local_8 = uStack_250;
  puVar1 = FString::operator*((FString *)(in_ECX + 0x2e0));
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
  if (*(int *)(in_ECX + 0x2dc) == 1) {
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
    uVar7 = *(undefined4 *)(in_ECX + 0x300);
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    if (*(int *)(in_ECX + 0x2dc) != 2) goto code_r0x1004ad7d;
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
    uVar7 = *(undefined4 *)(in_ECX + 0x300);
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


// ==== 1004adab Catch@1004adab

void Catch_1004adab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1004adbf Catch@1004adbf

void Catch_1004adbf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNameCtrl::DrawName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004ade0 UNameCtrlHandle::StaticClass

/* public: static class UClass * __cdecl UNameCtrlHandle::StaticClass(void) */

UClass * __cdecl UNameCtrlHandle::StaticClass(void)

{
                    /* 0x4ade0  942  ?StaticClass@UNameCtrlHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1004adf0 FUN_1004adf0

void FUN_1004adf0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101dfc99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1004ae40 FUN_1004ae40

void FUN_1004ae40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103582d0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1004ae70 FUN_1004ae70

void FUN_1004ae70(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101dfd2f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 9));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0xc));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0xf));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x12));
  local_4._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0x15));
  local_4._0_1_ = 4;
  FString::FString((FString *)(in_ECX + 0x18));
  local_4._0_1_ = 5;
  FString::FString((FString *)(in_ECX + 0x1b));
  local_4._0_1_ = 6;
  FString::FString((FString *)(in_ECX + 0x1e));
  local_4._0_1_ = 7;
  FString::FString((FString *)(in_ECX + 0x21));
  local_4 = CONCAT31(local_4._1_3_,8);
  *in_ECX = 0xffffffff;
  in_ECX[1] = 0xffffffff;
  in_ECX[2] = 0xffffffff;
  in_ECX[3] = 0xffffffff;
  in_ECX[4] = 0xffffffff;
  in_ECX[5] = 0xffffffff;
  in_ECX[8] = 500;
  FString::Empty((FString *)(in_ECX + 0x15));
  FString::Empty((FString *)(in_ECX + 0x18));
  FString::Empty((FString *)(in_ECX + 0x1b));
  FString::Empty((FString *)(in_ECX + 0x1e));
  FString::Empty((FString *)(in_ECX + 0x21));
  in_ECX[6] = 0xffffffff;
  in_ECX[7] = 0xffffffff;
  FString::Empty((FString *)(in_ECX + 9));
  FString::Empty((FString *)(in_ECX + 0xc));
  FString::Empty((FString *)(in_ECX + 0xf));
  FString::Empty((FString *)(in_ECX + 0x12));
  ExceptionList = local_c;
  return;
}


// ==== 1004afb0 FUN_1004afb0

void FUN_1004afb0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101dfdbf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 7;
  FString::~FString((FString *)(in_ECX + 0x84));
  local_4._0_1_ = 6;
  FString::~FString((FString *)(in_ECX + 0x78));
  local_4._0_1_ = 5;
  FString::~FString((FString *)(in_ECX + 0x6c));
  local_4._0_1_ = 4;
  FString::~FString((FString *)(in_ECX + 0x60));
  local_4._0_1_ = 3;
  FString::~FString((FString *)(in_ECX + 0x54));
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x48));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x3c));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x30));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0x24));
  ExceptionList = local_c;
  return;
}


// ==== 1004b070 FUN_1004b070

undefined4 FUN_1004b070(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0xbc) == 0) {
    iVar3 = *(int *)(in_ECX + 0x2dc);
  }
  else {
    iVar3 = *(int *)(in_ECX + 0x2d8);
  }
  if (iVar3 != 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,iVar3,0xff,1);
  }
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x2f4)) {
    do {
      FUN_10021a00(*(int *)(in_ECX + 0x2f8) * iVar3 + -4,0,8,0x10,0,0,8,0x10,
                   *(undefined4 *)(in_ECX + 0x2e0),0xff,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x2f4));
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 1004b190 FUN_1004b190

undefined4 FUN_1004b190(int param_1)

{
  int iVar1;
  int *in_ECX;
  code *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dfde0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1004a440();
  if (in_ECX[0xbe] / 2 + iVar1 < param_1 - in_ECX[0x20]) {
    pcVar2 = *(code **)(*in_ECX + 0x200);
  }
  else {
    if (iVar1 - in_ECX[0xbe] / 2 < param_1 - in_ECX[0x20]) {
      ExceptionList = local_10;
      return 1;
    }
    pcVar2 = *(code **)(*in_ECX + 0x1fc);
  }
  (*pcVar2)();
  ExceptionList = local_10;
  return 1;
}


// ==== 1004b21b Catch@1004b21b

void Catch_1004b21b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004b22f Catch@1004b22f

void Catch_1004b22f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderCtrl::OnScrollMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004b250 FUN_1004b250

undefined4 FUN_1004b250(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dfe00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d6f0(param_1,param_2);
  iVar1 = in_ECX[0x20];
  iVar2 = FUN_1004a440();
  if ((short)param_2 - iVar1 < iVar2) {
    pcVar3 = *(code **)(*in_ECX + 0x1fc);
  }
  else {
    pcVar3 = *(code **)(*in_ECX + 0x200);
  }
  (*pcVar3)();
  ExceptionList = local_10;
  return 1;
}


// ==== 1004b2d2 Catch@1004b2d2

void Catch_1004b2d2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004b2e6 Catch@1004b2e6

void Catch_1004b2e6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderCtrl::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004b310 FUN_1004b310

void FUN_1004b310(L2ParamStack *param_1,undefined4 param_2,undefined4 param_3)

{
  FString *this;
  ushort *puVar1;
  void *pvVar2;
  UPackage *pUVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101dfe29;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x2d8) = param_2;
  *(undefined4 *)(in_ECX + 0x2dc) = param_3;
  this = (FString *)(in_ECX + 0x2e0);
  puVar1 = L2ParamStack::Top(param_1);
  FString::operator=(this,puVar1);
  if (*(int *)(in_ECX + 0x2d8) == 0) {
    FUN_10054cc0();
    FUN_101b8ab0(this);
  }
  else if (*(int *)(in_ECX + 0x2d8) == 1) {
    pvVar2 = L2ParamStack::Top(param_1);
    *(void **)(in_ECX + 0x2ec) = pvVar2;
    pvVar2 = L2ParamStack::Top(param_1);
    *(void **)(in_ECX + 0x2f0) = pvVar2;
    pvVar2 = L2ParamStack::Top(param_1);
    *(void **)(in_ECX + 0x2f4) = pvVar2;
    pvVar2 = L2ParamStack::Top(param_1);
    *(void **)(in_ECX + 0x2f8) = pvVar2;
    pvVar2 = L2ParamStack::Top(param_1);
    *(void **)(in_ECX + 0x2fc) = pvVar2;
    FName::FName((FName *)&stack0xffffffc0,0);
    pUVar3 = UObject::GetTransientPackage();
    iVar4 = FUN_1002dd90(0x1f5c,pUVar3);
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_1002ddc0();
    }
    puVar1 = FString::operator*(this);
    appStrcpy((ushort *)(piVar5 + 0x13),puVar1);
    piVar5[0x797] = *(int *)(in_ECX + 0x2ec);
    piVar5[0x794] = *(int *)(in_ECX + 0x2f0);
    piVar5[0x7a0] = *(int *)(in_ECX + 0x2f4);
    piVar5[0x7a8] = *(int *)(in_ECX + 0x2f8);
    piVar5[0x799] = *(int *)(in_ECX + 0x2fc);
    FString::FString(local_28,(ushort *)L"Inventory");
    local_8._0_1_ = 1;
    FUN_101b8f10(piVar5);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
    (**(code **)(*piVar5 + 0xc))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004b4d1 Catch@1004b4d1

void Catch_1004b4d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004b4e5 Catch@1004b4e5

void Catch_1004b4e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNameCtrl::SetNameData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004b510 FUN_1004b510

undefined4 FUN_1004b510(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  local_8 = 0;
  local_4 = 0;
  local_c = 0;
  local_10 = 0;
  FUN_10058770(&local_10);
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(local_10,local_c,uVar2,uVar1);
  if (*(int *)(in_ECX + 0x2d8) == 0) {
    FUN_1004abc0(param_1);
  }
  else if (*(int *)(in_ECX + 0x2d8) == 1) {
    FUN_1004a790(param_1);
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 1004b600 FUN_1004b600

undefined4 FUN_1004b600(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x340) != 0) {
    local_8 = 0;
    local_4 = 0;
    local_c = 0;
    local_10 = 0;
    FUN_1005d0a0(&local_10);
    if (*(int *)(in_ECX + 0xd4) != 0) {
      FUN_100549b0(param_1,in_ECX + 0x304,0,0,*(undefined4 *)(in_ECX + 0x80),
                   *(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x88),
                   *(undefined4 *)(in_ECX + 0x8c));
    }
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 1004b6f0 FUN_1004b6f0

UObject * FUN_1004b6f0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UNameCtrlHandle::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1004b720 UUIScript::eventOnModifyCurrentTickSliderCtrl

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnModifyCurrentTickSliderCtrl(class FString const &,int)
    */

void __thiscall
UUIScript::eventOnModifyCurrentTickSliderCtrl(UUIScript *this,FString *param_1,int param_2)

{
  int iVar1;
  UFunction *pUVar2;
  void *unaff_ESI;
  FString *pFStack_30;
  FString local_1c [4];
  undefined4 uStack_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4b720  1040
                       ?eventOnModifyCurrentTickSliderCtrl@UUIScript@@QAEXABVFString@@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101dfe6a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(local_1c);
  local_4 = 1;
  pFStack_30 = (FString *)0x1004b768;
  FString::operator=(local_1c,param_1);
  iVar1 = *(int *)this;
  pFStack_30 = local_1c;
  local_10 = param_2;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnModifyCurrentTickSliderCtrl,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  uStack_18 = 0xffffffff;
  FString::~FString((FString *)&pFStack_30);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 1004b7c0 FUN_1004b7c0

void FUN_1004b7c0(void)

{
  int iVar1;
  undefined4 uVar2;
  UPackage *pUVar3;
  int *piVar4;
  int in_ECX;
  undefined2 in_FPUControlWord;
  int *piStack_94;
  int **ppiStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ushort *puStack_5c;
  undefined4 *puStack_58;
  uint uStack_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_2c;
  ulonglong local_24;
  int *local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dfe90;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x30c) < 2) {
    *(undefined4 *)(in_ECX + 0x2f4) = 2;
  }
  else {
    *(int *)(in_ECX + 0x2f4) = *(int *)(in_ECX + 0x30c);
  }
  *(undefined4 *)(in_ECX + 0x2fc) = *(undefined4 *)(in_ECX + 0x310);
  if (*(int *)(in_ECX + 0x31c) == -1) {
    puStack_58 = (undefined4 *)0x1004b848;
    iVar1 = FUN_101c19e0();
  }
  else {
    local_1c[0] = (int *)(*(int *)(in_ECX + 0x31c) * 2);
    puStack_58 = (undefined4 *)0x1004b83b;
    local_14 = (undefined1 *)&uStack_54;
    iVar1 = FUN_101c19e0();
  }
  *(int *)(in_ECX + 0x300) = iVar1;
  *(int *)(in_ECX + 0x2f8) = iVar1 / (*(int *)(in_ECX + 0x2f4) + -1);
  puStack_58 = (undefined4 *)0x1;
  puStack_5c = (ushort *)0x1004b86e;
  puStack_5c = FString::operator*((FString *)(in_ECX + 0x358));
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x2d8) = uVar2;
  puStack_58 = (undefined4 *)0x1;
  puStack_5c = (ushort *)0x1004b88a;
  puStack_5c = FString::operator*((FString *)(in_ECX + 0x364));
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x2dc) = uVar2;
  puStack_58 = (undefined4 *)0x1;
  puStack_5c = (ushort *)0x1004b8a6;
  puStack_5c = FString::operator*((FString *)(in_ECX + 0x370));
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x2e0) = uVar2;
  local_40 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  puStack_58 = &local_44;
  puStack_5c = (ushort *)0x1004b8cd;
  FUN_1005d0a0();
  puStack_58 = (undefined4 *)0x0;
  local_2c = CONCAT44(&puStack_5c,(undefined4)local_2c);
  uStack_64 = 0x1004b8db;
  FName::FName((FName *)&puStack_5c,0);
  UObject::GetTransientPackage();
  uStack_64 = 0x33c;
  uStack_68 = 0x1004b8ee;
  iVar1 = FUN_1004ae40();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    puStack_58 = (undefined4 *)0x0;
    puStack_5c = (ushort *)(in_ECX + 0x388);
    uStack_64 = 0x1004b90b;
    iVar1 = FUN_10006f60();
  }
  *(int *)(in_ECX + 0x2e4) = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf0f01415;
  iVar1 = **(int **)(in_ECX + 0x2e4);
  puStack_58 = (undefined4 *)0x3;
  puStack_5c = (ushort *)0x0;
  uStack_64 = *(undefined4 *)(in_ECX + 0x318);
  uStack_68 = *(undefined4 *)(in_ECX + 0x314);
  uStack_6c = 0x1004b942;
  uStack_6c = FUN_1004a520();
  uStack_70 = 0x1004b94a;
  uStack_70 = FUN_1004a440();
  iStack_74 = 0x1004b959;
  (**(code **)(iVar1 + 0xc0))();
  iStack_74 = 2;
  iStack_78 = *(int *)(in_ECX + 0x2e4);
  iStack_74 = FUN_10060d40();
  iStack_78 = 0x1004b975;
  FUN_1005c1e0();
  if (*(int *)(in_ECX + 0x31c) != -1) {
    iStack_74 = 0;
    local_2c = CONCAT44(&iStack_78,(undefined4)local_2c);
    uStack_80 = 0x1004b992;
    FName::FName((FName *)&iStack_78,0);
    UObject::GetTransientPackage();
    uStack_80 = 0x348;
    uStack_84 = 0x1004b99f;
    iVar1 = FUN_1000d030();
    if (iVar1 == 0) {
      piStack_94 = (int *)0x0;
    }
    else {
      iStack_74 = in_ECX + 0x334;
      iStack_78 = in_ECX + 0x328;
      piStack_94 = (int *)FUN_10007150();
    }
    piStack_94[0xd1] = 1;
    piStack_94[0xd0] = *(int *)(in_ECX + 0x324);
    piStack_94[0x73] = -0xf0febea;
    uStack_84 = *(undefined4 *)(in_ECX + 0x31c);
    iStack_74 = 3;
    iStack_78 = 0;
    local_24 = (ulonglong)CONCAT24(in_FPUControlWord,(undefined4)local_24) | 0xc0000000000;
    local_2c = (longlong)ROUND((*(float *)(in_ECX + 0x8c) - (float)*(int *)(in_ECX + 800)) * 0.5);
    uStack_88 = (undefined4)local_2c;
    uStack_8c = 0;
    ppiStack_90 = (int **)0x1004ba2e;
    uStack_80 = uStack_84;
    local_1c[0] = piStack_94;
    (**(code **)(*piStack_94 + 0xc0))();
    ppiStack_90 = (int **)0x2;
    ppiStack_90 = (int **)FUN_10060d40();
    piStack_94 = (int *)0x1004ba40;
    FUN_1005c1e0();
    ppiStack_90 = local_1c;
    piStack_94 = (int *)0x1004ba51;
    FUN_100d9a30();
    local_1c[0] = (int *)0x0;
    ppiStack_90 = (int **)0x0;
    local_2c = CONCAT44(&piStack_94,(undefined4)local_2c);
    FName::FName((FName *)&piStack_94,0);
    pUVar3 = UObject::GetTransientPackage();
    iVar1 = FUN_1000d030(0x348,pUVar3);
    if (iVar1 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      ppiStack_90 = (int **)(in_ECX + 0x34c);
      piStack_94 = (int *)(in_ECX + 0x340);
      piVar4 = (int *)FUN_10007150();
    }
    piVar4[0xd1] = 1;
    piVar4[0xd0] = *(int *)(in_ECX + 0x324);
    piVar4[0x73] = -0xf0febe9;
    ppiStack_90 = (int **)0x3;
    piStack_94 = (int *)0x0;
    local_24 = (ulonglong)ROUND((*(float *)(in_ECX + 0x8c) - (float)*(int *)(in_ECX + 800)) * 0.5);
    local_2c = (longlong)ROUND(*(float *)(in_ECX + 0x88) - (float)*(int *)(in_ECX + 0x31c));
    local_1c[0] = piVar4;
    (**(code **)(*piVar4 + 0xc0))
              ((undefined4)local_2c,(undefined4)local_24,*(int *)(in_ECX + 0x31c),
               *(int *)(in_ECX + 800),0);
    uVar2 = FUN_10060d40(piVar4,2);
    FUN_1005c1e0(uVar2);
    FUN_100d9a30(local_1c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004bb6b Catch@1004bb6b

void Catch_1004bb6b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 1004bb7f Catch@1004bb7f

void Catch_1004bb7f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderCtrl::create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004bba0 FUN_1004bba0

undefined4 FUN_1004bba0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dfeb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x2ec); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x2e8),4,0);
  if (*(int *)(in_ECX + 0x2e4) != 0) {
    *(undefined4 *)(in_ECX + 0x2e4) = 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1004bc22 Catch@1004bc22

void Catch_1004bc22(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1004bc36 Catch@1004bc36

void Catch_1004bc36(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderCtrl::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004bc60 FUN_1004bc60

void FUN_1004bc60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UUIScript *this;
  FString *pFVar3;
  int *in_ECX;
  uint uStack_38;
  FString local_28 [4];
  undefined4 local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101dfed9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_1004a440();
  uVar2 = FUN_1004a520();
  local_24 = uVar1;
  (**(code **)(*(int *)in_ECX[0xb9] + 0xd0))(1,uVar1,uVar2);
  this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if (this != (UUIScript *)0x0) {
    pFVar3 = (FString *)FUN_10057590(local_28);
    local_8._0_1_ = 1;
    UUIScript::eventOnModifyCurrentTickSliderCtrl(this,pFVar3,in_ECX[0xbf]);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004bd0f Catch@1004bd0f

void Catch_1004bd0f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004bd23 Catch@1004bd23

void Catch_1004bd23(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderCtrl::repositionCurrentTick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004bd40 FUN_1004bd40

void FUN_1004bd40(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dff00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005ee10(param_1,param_2);
  if (*(int *)(in_ECX + 0x2d8) == 0) {
    FUN_1004b7c0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004bdb6 Catch@1004bdb6

void Catch_1004bdb6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004bdca Catch@1004bdca

void Catch_1004bdca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderCtrl::SetWindowSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004bdf0 FUN_1004bdf0

void FUN_1004bdf0(void)

{
  UPackage *pUVar1;
  UObject *pUVar2;
  int iVar3;
  NCWnd *in_ECX;
  undefined4 uStack_44;
  undefined4 uStack_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dff20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UNameCtrlHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_1004b6f0(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x1004be7a;
    appFailAssert("m_pScriptHandle",".\\Src\\NSliderCtrl.cpp",0x25e);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1004beae Catch@1004beae

void Catch_1004beae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004bec2 Catch@1004bec2

void Catch_1004bec2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNameCtrl::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004bee0 FUN_1004bee0

void FUN_1004bee0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101dff49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 < 0) {
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


// ==== 1004bf80 FUN_1004bf80

undefined4 FUN_1004bf80(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dff70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x2fc) != 0) && (*(int *)(in_ECX + 0xbc) != 0)) {
    *(int *)(in_ECX + 0x2fc) = *(int *)(in_ECX + 0x2fc) + -1;
    FUN_1004bc60();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1004bfea Catch@1004bfea

void Catch_1004bfea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004bffe Catch@1004bffe

void Catch_1004bffe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderCtrl::OnClickDecrease");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004c020 FUN_1004c020

undefined4 FUN_1004c020(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dff90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x2fc) != *(int *)(in_ECX + 0x2f4) + -1) && (*(int *)(in_ECX + 0xbc) != 0))
  {
    *(int *)(in_ECX + 0x2fc) = *(int *)(in_ECX + 0x2fc) + 1;
    FUN_1004bc60();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1004c093 Catch@1004c093

void Catch_1004c093(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004c0a7 Catch@1004c0a7

void Catch_1004c0a7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderCtrl::OnClickIncrease");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004c0d0 FUN_1004c0d0

void FUN_1004c0d0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101dffb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x2fc) = param_1;
  FUN_1004bc60();
  ExceptionList = local_10;
  return;
}


// ==== 1004c12b Catch@1004c12b

void Catch_1004c12b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004c13f Catch@1004c13f

void Catch_1004c13f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSliderCtrl::SetCurrentTick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004c160 FUN_1004c160

void FUN_1004c160(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101dfffd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = NCSliderCtrl::vftable;
  FArray::FArray((FArray *)(in_ECX + 0xba));
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_1004ae70();
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1004c1f0 FUN_1004c1f0

void FUN_1004c1f0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101e0044;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCSliderCtrl::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 1;
  FUN_1004afb0(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1004bee0();
  local_4 = 0xffffffff;
  FUN_10002a70();
  ExceptionList = local_c;
  return;
}


// ==== 1004c270 FUN_1004c270

void FUN_1004c270(byte param_1)

{
  void *in_ECX;
  
  FUN_1004c1f0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x394);
  }
  return;
}


// ==== 1004c2a0 FUN_1004c2a0

void FUN_1004c2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e0095;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe0);
  local_4._0_1_ = 1;
  *in_ECX = NCSliderCtrl::vftable;
  FArray::FArray((FArray *)(in_ECX + 0xba));
  local_4._0_1_ = 3;
  FUN_1004ae70();
  local_4 = CONCAT31(local_4._1_3_,4);
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 0;
  FUN_1005e8f0(param_1,param_2,param_3,param_4,0,0,3);
  FUN_1004a2f0(&param_3);
  local_4 = 0xffffffff;
  FUN_1004afb0();
  ExceptionList = local_c;
  return;
}


// ==== 1004c370 FUN_1004c370

void FUN_1004c370(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e00d5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100031f0();
  local_8 = 0;
  *in_ECX = NCNameCtrl::vftable;
  FString::FString((FString *)(in_ECX + 0xb8));
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_10054da0();
  in_ECX[0xd0] = 1;
  in_ECX[0xd1] = 1;
  ExceptionList = local_10;
  return;
}


// ==== 1004c400 Catch@1004c400

void Catch_1004c400(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004c414 Catch@1004c414

void Catch_1004c414(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNameCtrl::NCNameCtrl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004c440 FUN_1004c440

void FUN_1004c440(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101e0115;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCNameCtrl::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 1;
  FUN_10054e80(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x2e0));
  local_4 = 0xffffffff;
  FUN_10002a70();
  ExceptionList = local_c;
  return;
}


// ==== 1004c4c0 FUN_1004c4c0

void FUN_1004c4c0(byte param_1)

{
  void *in_ECX;
  
  FUN_1004c440();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x348);
  }
  return;
}


// ==== 1004c510 FUN_1004c510

void FUN_1004c510(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x318) = 0;
  *(undefined8 *)(in_ECX + 0x310) = 0;
  *(undefined8 *)(in_ECX + 0x31c) = 0;
  *(undefined8 *)(in_ECX + 0x324) = 0;
  return;
}


// ==== 1004c530 FUN_1004c530

undefined4 FUN_1004c530(int param_1)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  int in_ECX;
  undefined8 uVar4;
  
  if (param_1 == 0xfff001) {
    dVar3 = *(double *)(in_ECX + 0x310) - (double)*(int *)(in_ECX + 0x318) * 0.666;
    *(double *)(in_ECX + 0x310) = dVar3;
    *(double *)(in_ECX + 0x324) = *(double *)(in_ECX + 0x324) - *(double *)(in_ECX + 0x31c);
    if (dVar3 <= 0.0) {
      FUN_1003f610(*(undefined4 *)(in_ECX + 0x348));
      *(undefined8 *)(in_ECX + 0x324) = 0;
      *(undefined4 *)(in_ECX + 0x348) = 0;
    }
    return 1;
  }
  if (param_1 != 0xfff002) {
    return 1;
  }
  iVar1 = *(int *)(in_ECX + 0x304);
  uVar2 = *(uint *)(in_ECX + 0x300);
  if (*(int *)(in_ECX + 0x344) == 0) {
    uVar4 = FUN_101c1a16();
    *(undefined8 *)(in_ECX + 0x2f8) = uVar4;
  }
  else {
    *(uint *)(in_ECX + 0x2f8) = uVar2;
    *(int *)(in_ECX + 0x2fc) = iVar1;
  }
  if (*(int *)(in_ECX + 0x340) != 0) {
    if ((iVar1 < *(int *)(in_ECX + 0x2fc)) ||
       ((iVar1 <= *(int *)(in_ECX + 0x2fc) && (uVar2 <= *(uint *)(in_ECX + 0x2f8)))))
    goto LAB_1004c672;
    if (*(int *)(in_ECX + 0x340) != 0) {
      return 1;
    }
  }
  if ((iVar1 < *(int *)(in_ECX + 0x2fc)) ||
     ((iVar1 <= *(int *)(in_ECX + 0x2fc) && (uVar2 < *(uint *)(in_ECX + 0x2f8))))) {
    return 1;
  }
LAB_1004c672:
  *(uint *)(in_ECX + 0x2f8) = uVar2;
  *(int *)(in_ECX + 0x2fc) = iVar1;
  FUN_1003f610(*(undefined4 *)(in_ECX + 0x34c));
  *(undefined4 *)(in_ECX + 0x34c) = 0;
  *(undefined4 *)(in_ECX + 0x344) = 1;
  return 1;
}


// ==== 1004c6c0 FUN_1004c6c0

void FUN_1004c6c0(int param_1,int param_2,double param_3)

{
  int in_ECX;
  double dVar1;
  
  *(int *)(in_ECX + 0x318) = param_2;
  dVar1 = (double)param_1 - (double)(param_2 / 2) * 0.666;
  *(double *)(in_ECX + 0x310) = dVar1;
  *(double *)(in_ECX + 0x324) = (dVar1 / ((double)param_2 * 0.666)) * param_3;
  *(double *)(in_ECX + 0x31c) = param_3;
  dVar1 = appSecondsQPC();
  *(double *)(in_ECX + 0x330) = dVar1;
  return;
}


// ==== 1004c720 FUN_1004c720

void FUN_1004c720(void)

{
  double dVar1;
  double dVar2;
  int in_ECX;
  double dVar3;
  
  if ((*(double *)(in_ECX + 0x310) <= 0.0) || (*(double *)(in_ECX + 0x324) < 0.0)) {
    return;
  }
  dVar3 = appSecondsQPC();
  dVar1 = dVar3 - *(double *)(in_ECX + 0x330);
  dVar2 = *(double *)(in_ECX + 0x310) - dVar1;
  *(double *)(in_ECX + 0x310) = dVar2;
  dVar1 = *(double *)(in_ECX + 0x324) -
          ((*(double *)(in_ECX + 0x31c) / (double)*(int *)(in_ECX + 0x318)) / 0.666) * dVar1;
  *(double *)(in_ECX + 0x324) = dVar1;
  if ((0.0 < dVar2) && (0.0 <= dVar1)) {
    *(double *)(in_ECX + 0x330) = dVar3;
    return;
  }
  *(undefined8 *)(in_ECX + 0x310) = 0;
  *(undefined8 *)(in_ECX + 0x324) = 0;
  *(double *)(in_ECX + 0x330) = dVar3;
  return;
}


// ==== 1004c7c0 FUN_1004c7c0

void FUN_1004c7c0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int in_ECX;
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
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10002f40();
  uVar11 = 1;
  uVar10 = CONCAT44(0xff,*(undefined4 *)(in_ECX + 0x2dc));
  uVar2 = *(undefined4 *)(in_ECX + 0x2ec);
  uVar3 = *(undefined4 *)(in_ECX + 0x2e8);
  uVar9 = 0;
  uVar8 = 0;
  uVar4 = FUN_101c19e0(0,0,uVar3,uVar2,*(undefined4 *)(in_ECX + 0x2dc),0xff,1);
  uVar5 = FUN_101c19e0(uVar4);
  FUN_10021a00(0,0,uVar5,uVar4,uVar8,uVar9,uVar3,uVar2,uVar10,uVar11);
  local_120 = *(int *)(in_ECX + 0x2f8);
  iStack_11c = *(int *)(in_ECX + 0x2fc);
  if (local_120 != 0 || iStack_11c != 0) {
    if (*(int *)(in_ECX + 0x35c) != 0) {
      if (*(int *)(in_ECX + 0x35c) != 1) goto LAB_1004c90a;
      local_120 = *(uint *)(in_ECX + 0x2f0) - *(uint *)(in_ECX + 0x308);
      iStack_11c = (*(int *)(in_ECX + 0x2f4) - *(int *)(in_ECX + 0x30c)) -
                   (uint)(*(uint *)(in_ECX + 0x2f0) < *(uint *)(in_ECX + 0x308));
    }
    uVar7 = FUN_101c19e0();
  }
LAB_1004c90a:
  uVar9 = 1;
  uVar10 = CONCAT44(0xff,*(undefined4 *)(in_ECX + 0x2d8));
  uVar2 = *(undefined4 *)(in_ECX + 0x2ec);
  uVar3 = *(undefined4 *)(in_ECX + 0x2e8);
  uVar8 = 0;
  uVar5 = 0;
  uVar4 = FUN_101c19e0(0,0,uVar3,uVar2,*(undefined4 *)(in_ECX + 0x2d8),0xff,1);
  FUN_10021a00(0,0,uVar7,uVar4,uVar5,uVar8,uVar3,uVar2,uVar10,uVar9);
  if (*(int *)(in_ECX + 0x33c) != 0) {
    local_124 = 0;
    if (*(double *)(in_ECX + 0x324) != 0.0) {
      local_124 = FUN_101c19e0();
    }
    uVar9 = 1;
    uVar10 = CONCAT44(0x80,*(undefined4 *)(in_ECX + 0x2e0));
    uVar2 = *(undefined4 *)(in_ECX + 0x2ec);
    uVar3 = *(undefined4 *)(in_ECX + 0x2e8);
    uVar8 = 0;
    uVar5 = 0;
    uVar4 = FUN_101c19e0(0,0,uVar3,uVar2,*(undefined4 *)(in_ECX + 0x2e0),0x80,1);
    FUN_10021a00(uVar7,0,local_124,uVar4,uVar5,uVar8,uVar3,uVar2,uVar10,uVar9);
  }
  if (*(int *)(in_ECX + 0x338) != 0) {
    uVar9 = 1;
    uVar10 = CONCAT44(0xff,*(undefined4 *)(in_ECX + 0x2e4));
    uVar2 = *(undefined4 *)(in_ECX + 0x2ec);
    uVar3 = *(undefined4 *)(in_ECX + 0x2e8);
    uVar8 = 0;
    uVar5 = 0;
    uVar4 = FUN_101c19e0(0,0,uVar3,uVar2,*(undefined4 *)(in_ECX + 0x2e4),0xff,1);
    FUN_10021a00(0,0,uVar7,uVar4,uVar5,uVar8,uVar3,uVar2,uVar10,uVar9);
  }
  if (*(int *)(in_ECX + 0x35c) == 0) {
    uVar2 = 0xff;
    puVar6 = FString::operator*((FString *)(in_ECX + 0x350));
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
    if (*(int *)(in_ECX + 0x35c) != 1) goto LAB_1004cc1c;
    uVar1 = *(uint *)(in_ECX + 0x308);
    local_120 = *(uint *)(in_ECX + 0x2f0) - uVar1;
    iStack_11c = (*(int *)(in_ECX + 0x2f4) - *(int *)(in_ECX + 0x30c)) -
                 (uint)(*(uint *)(in_ECX + 0x2f0) < uVar1);
    FUN_100133a0(local_108,L"%.2f%s",
                 ((double)CONCAT44((*(int *)(in_ECX + 0x2fc) - *(int *)(in_ECX + 0x30c)) -
                                   (uint)(*(uint *)(in_ECX + 0x2f8) < uVar1),
                                   *(uint *)(in_ECX + 0x2f8) - uVar1) * 100.0) /
                 (double)CONCAT44(iStack_11c,local_120),&DAT_1024129c);
    FUN_10020bb0(&local_120,local_108,0,0,0,0,0,0);
  }
  uVar4 = 0xff;
  uVar10 = CONCAT44(local_108,0xffdcdcdc);
  uVar3 = 2;
  uVar2 = FUN_101c19e0(2,0xffdcdcdc,local_108,0xff);
  FUN_100212f0(1,uVar2,uVar3,uVar10,uVar4);
LAB_1004cc1c:
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_114;
  __security_check_cookie(local_8 ^ (uint)local_108);
  return;
}


// ==== 1004cc58 Catch@1004cc58

void Catch_1004cc58(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1004cc6c Catch@1004cc6c

void Catch_1004cc6c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusBarCtrl::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004cc90 FUN_1004cc90

void FUN_1004cc90(undefined4 param_1,undefined4 param_2,float param_3)

{
  FUN_1004c6c0(param_1,param_2,(double)param_3);
  return;
}


// ==== 1004ccb0 FUN_1004ccb0

/* WARNING: Removing unreachable block (ram,0x1004cce8) */

void FUN_1004ccb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int in_ECX;
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined4 *)(in_ECX + 0x35c) = 1;
  uVar1 = __alldiv(param_5,param_6,10,0);
  lVar2 = __allmul(uVar1,3,0);
  if (CONCAT44(param_2,param_1) < lVar2) {
    *(undefined4 *)(in_ECX + 0x338) = 1;
  }
  else {
    *(undefined4 *)(in_ECX + 0x338) = 0;
  }
  if ((param_1 != *(int *)(in_ECX + 0x2f8)) || (param_2 != *(int *)(in_ECX + 0x2fc))) {
    FUN_1004c720();
  }
  *(int *)(in_ECX + 0x2f8) = param_1;
  *(int *)(in_ECX + 0x2fc) = param_2;
  *(undefined4 *)(in_ECX + 0x2f0) = param_5;
  *(undefined4 *)(in_ECX + 0x2f4) = param_6;
  *(undefined4 *)(in_ECX + 0x308) = param_3;
  *(undefined4 *)(in_ECX + 0x30c) = param_4;
  if ((param_2 < 1) && ((param_2 < 0 || (param_1 == 0)))) {
    FUN_1004c510();
  }
  return;
}


// ==== 1004cd70 FUN_1004cd70

/* WARNING: Removing unreachable block (ram,0x1004cda8) */

void FUN_1004cd70(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined4 *)(in_ECX + 0x35c) = 0;
  uVar1 = __alldiv(param_3,param_4,10,0);
  lVar2 = __allmul(uVar1,3,0);
  if (CONCAT44(param_2,param_1) < lVar2) {
    *(undefined4 *)(in_ECX + 0x338) = 1;
  }
  else {
    *(undefined4 *)(in_ECX + 0x338) = 0;
  }
  if ((param_1 != *(int *)(in_ECX + 0x2f8)) || (param_2 != *(int *)(in_ECX + 0x2fc))) {
    FUN_1004c720();
  }
  *(int *)(in_ECX + 0x2f8) = param_1;
  *(int *)(in_ECX + 0x2fc) = param_2;
  *(undefined4 *)(in_ECX + 0x2f0) = param_3;
  *(undefined4 *)(in_ECX + 0x2f4) = param_4;
  if ((param_2 < 1) && ((param_2 < 0 || (param_1 == 0)))) {
    FUN_1004c510();
  }
  return;
}


// ==== 1004ce20 FUN_1004ce20

void FUN_1004ce20(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    FUN_1004ccb0(param_1,param_2,*(undefined4 *)(L"NCNameCtrl" + param_3 * 4 + 8),
                 *(undefined4 *)(L"NCNameCtrl" + param_3 * 4 + 10),
                 *(undefined4 *)(&DAT_10240f28 + param_3 * 8),
                 *(undefined4 *)(&DAT_10240f2c + param_3 * 8));
  }
  return;
}


// ==== 1004ce60 FUN_1004ce60

void FUN_1004ce60(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e0177;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = NCStatusBarCtrl::vftable;
  FString::FString((FString *)(in_ECX + 0xd4));
  ExceptionList = local_c;
  return;
}


// ==== 1004ced0 FUN_1004ced0

void FUN_1004ced0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101e01b7;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCStatusBarCtrl::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x350));
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1004cf40 FUN_1004cf40

void FUN_1004cf40(byte param_1)

{
  void *in_ECX;
  
  FUN_1004ced0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x360);
  }
  return;
}


// ==== 1004cf70 FUN_1004cf70

void FUN_1004cf70(ushort *param_1,undefined4 param_2,undefined4 param_3,ushort *param_4,
                 ushort *param_5,ushort *param_6,ushort *param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e01f7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  *in_ECX = NCStatusBarCtrl::vftable;
  FString::FString((FString *)(in_ECX + 0xd4));
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = appStrcmp(param_1,(ushort *)L"undefined");
  if (iVar1 == 0) {
    param_1 = (ushort *)0x0;
  }
  iVar1 = appStrcmp(param_4,(ushort *)L"undefined");
  if (iVar1 == 0) {
    param_4 = (ushort *)0x0;
  }
  iVar1 = appStrcmp(param_5,(ushort *)L"undefined");
  if (iVar1 == 0) {
    param_5 = (ushort *)0x0;
  }
  iVar1 = appStrcmp(param_6,(ushort *)L"undefined");
  if (iVar1 == 0) {
    param_6 = (ushort *)0x0;
  }
  iVar1 = appStrcmp(param_7,(ushort *)L"undefined");
  if (iVar1 == 0) {
    param_7 = (ushort *)0x0;
  }
  uVar2 = FUN_1003f630(param_4,1);
  in_ECX[0xb6] = uVar2;
  uVar2 = FUN_1003f630(param_5,1);
  in_ECX[0xb7] = uVar2;
  if (param_6 == (ushort *)0x0) {
    in_ECX[0xcf] = 0;
  }
  else {
    uVar2 = FUN_1003f630(param_6,1);
    in_ECX[0xb8] = uVar2;
    in_ECX[0xcf] = 1;
  }
  if (param_7 == (ushort *)0x0) {
    in_ECX[0xce] = 0;
  }
  else {
    uVar2 = FUN_1003f630(param_7,1);
    in_ECX[0xb9] = uVar2;
    in_ECX[0xce] = 1;
  }
  in_ECX[0xbb] = param_3;
  in_ECX[0xba] = param_2;
  in_ECX[0xbc] = 0;
  in_ECX[0xbd] = 0;
  in_ECX[0xbe] = 0;
  in_ECX[0xbf] = 0;
  in_ECX[0xcb] = 0;
  in_ECX[0xd2] = 0;
  in_ECX[0xd3] = 0;
  FString::operator=((FString *)(in_ECX + 0xd4),param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1004d130 FUN_1004d130

undefined4 FUN_1004d130(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 1004d177 Catch@1004d177

void Catch_1004d177(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004d18b Catch@1004d18b

void Catch_1004d18b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconTable::GetRowCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004d1b0 FUN_1004d1b0

undefined4 FUN_1004d1b0(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061b40();
  uVar1 = FUN_1003f600(0x1f9,1000,0);
  *(undefined4 *)(in_ECX + 0x308) = uVar1;
  uVar1 = FUN_1003f600(0x1e9,100,0);
  *(undefined4 *)(in_ECX + 0x30c) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.PlayerStatusWnd.debuff",1);
  *(undefined4 *)(in_ECX + 0x310) = uVar1;
  ExceptionList = local_10;
  return 1;
}


// ==== 1004d243 Catch@1004d243

void Catch_1004d243(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004d257 Catch@1004d257

void Catch_1004d257(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004d280 FUN_1004d280

undefined4 FUN_1004d280(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0260;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[0xc2] != 0) {
    FUN_1003f610(in_ECX[0xc2]);
    in_ECX[0xc2] = 0;
  }
  if (in_ECX[0xc3] != 0) {
    FUN_1003f610(in_ECX[0xc3]);
    in_ECX[0xc3] = 0;
  }
  (**(code **)(*in_ECX + 0x174))();
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1004d30a Catch@1004d30a

void Catch_1004d30a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004d31e Catch@1004d31e

void Catch_1004d31e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004d340 FUN_1004d340

undefined4 FUN_1004d340(undefined4 param_1,uint param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d5d0(param_1,param_2);
  *(uint *)(in_ECX + 0x300) = (param_2 & 0xffff) - *(int *)(in_ECX + 0x80);
  *(uint *)(in_ECX + 0x304) = (param_2 >> 0x10) - *(int *)(in_ECX + 0x84);
  ExceptionList = local_10;
  return 1;
}


// ==== 1004d3be Catch@1004d3be

void Catch_1004d3be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004d3d2 Catch@1004d3d2

void Catch_1004d3d2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004d3f0 FUN_1004d3f0

void FUN_1004d3f0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e02a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1004d130();
  ExceptionList = local_10;
  return;
}


// ==== 1004d43f Catch@1004d43f

void Catch_1004d43f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004d453 Catch@1004d453

void Catch_1004d453(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::GetRowCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004d470 FUN_1004d470

void FUN_1004d470(int param_1,FString *param_2)

{
  FString *this;
  ushort *puVar1;
  int iVar2;
  FL2MagicSkillData *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e02c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = FString::operator*(param_2);
  appStrcpy((ushort *)(param_1 + 0x4c),puVar1);
  this = param_2 + 0xc;
  puVar1 = FString::operator*(this);
  appStrcpy((ushort *)(param_1 + 0x44c),puVar1);
  puVar1 = FString::operator*(param_2 + 0x1c);
  appStrcpy((ushort *)(param_1 + 0xa4c),puVar1);
  iVar2 = FString::operator_int(this);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    uVar5 = 1;
    puVar1 = FString::operator*(this);
    uVar5 = FUN_1003f630(puVar1,uVar5);
    *(undefined4 *)(param_1 + 0x34) = uVar5;
  }
  iVar2 = FString::operator_int(param_2 + 0x28);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1f90) = 0;
  }
  else {
    uVar5 = 1;
    puVar1 = FString::operator*(param_2 + 0x28);
    uVar5 = FUN_1003f630(puVar1,uVar5);
    *(undefined4 *)(param_1 + 0x1f90) = uVar5;
  }
  *(undefined4 *)(param_1 + 0x1e60) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x1e5c) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x1f64) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x1e7c) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x1f5c) = *(undefined4 *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x1f90) == 0) {
    *(undefined4 *)(param_1 + 0x1f60) = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    *(int *)(param_1 + 0x1f60) = *(int *)(param_2 + 0x18) + 2;
  }
  *(uint *)(param_1 + 0x1f6c) = *(uint *)(param_2 + 0x40) & 1;
  *(uint *)(param_1 + 0x1f74) = *(uint *)(param_2 + 0x40) >> 1 & 1;
  *(uint *)(param_1 + 0x1f78) = *(uint *)(param_2 + 0x40) >> 2 & 1;
  uVar5 = FUN_10164a20(*(undefined4 *)(param_1 + 0x1e5c),*(undefined4 *)(param_1 + 0x1e60));
  *(undefined4 *)(param_1 + 0x1f7c) = uVar5;
  pFVar3 = FL2GameData::GetMSData
                     ((FL2GameData *)GL2GameData_exref,*(int *)(param_1 + 0x1e5c),
                      *(int *)(param_1 + 0x1e60));
  pcVar4 = appStrcpy_exref;
  if ((pFVar3 != (FL2MagicSkillData *)0x0) && (*(int *)(pFVar3 + 0x68) != 0)) {
    puVar1 = FString::operator*((FString *)(pFVar3 + 0x50));
    pcVar4 = appStrcpy_exref;
    appStrcpy((ushort *)(param_1 + 0x24c),puVar1);
  }
  iVar2 = FUN_10164900(*(undefined4 *)(param_1 + 0x1e5c),*(undefined4 *)(param_1 + 0x1e60));
  if (iVar2 != 0) {
    uVar5 = FUN_10164900(*(undefined4 *)(param_1 + 0x1e5c),*(undefined4 *)(param_1 + 0x1e60));
    (*pcVar4)(param_1 + 0x4c,uVar5);
  }
  iVar2 = FUN_10164990(*(undefined4 *)(param_1 + 0x1e5c),*(undefined4 *)(param_1 + 0x1e60));
  if (iVar2 != 0) {
    uVar5 = FUN_10164990(*(undefined4 *)(param_1 + 0x1e5c),*(undefined4 *)(param_1 + 0x1e60));
    (*pcVar4)((ushort *)(param_1 + 0xa4c),uVar5);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004d6d4 Catch@1004d6d4

void Catch_1004d6d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1004d6e8 Catch@1004d6e8

void Catch_1004d6e8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::CopyStatusIconInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004d710 FUN_1004d710

void FUN_1004d710(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e02e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1004d760 UStatusIconHandle::StaticClass

/* public: static class UClass * __cdecl UStatusIconHandle::StaticClass(void) */

UClass * __cdecl UStatusIconHandle::StaticClass(void)

{
                    /* 0x4d760  953  ?StaticClass@UStatusIconHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1004d770 FUN_1004d770

void FUN_1004d770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1036a220,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1004d7a0 FUN_1004d7a0

void FUN_1004d7a0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e0318;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_1002ddc0();
  *in_ECX = NCStatusIconItem::vftable;
  in_ECX[0x7e1] = 0;
  in_ECX[0x7e0] = 0;
  in_ECX[0x7e2] = 0;
  in_ECX[0x7e3] = 0;
  in_ECX[0x7d7] = 0x18;
  in_ECX[0x7d8] = 0x1a;
  in_ECX[0x7d9] = 0;
  in_ECX[0x7db] = 1;
  in_ECX[0x7da] = 0xff;
  in_ECX[0x7dc] = 1;
  in_ECX[0x7dd] = 0;
  in_ECX[0x7de] = 0;
  in_ECX[0x7df] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1004d85f Catch@1004d85f

void Catch_1004d85f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004d873 Catch@1004d873

void Catch_1004d873(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconItem::NCStatusIconItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004d890 FUN_1004d890

void FUN_1004d890(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e0348;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCStatusIconItem::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_1002de40(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1004d8f0 FUN_1004d8f0

void FUN_1004d8f0(byte param_1)

{
  void *in_ECX;
  
  FUN_1004d890();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1f94);
  }
  return;
}


// ==== 1004d920 FUN_1004d920

undefined4 FUN_1004d920(int param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0370;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (-1 < param_1) {
    iVar1 = FUN_1004d130();
    if (param_1 + 1 <= iVar1) {
      ExceptionList = local_10;
      return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 8) + param_1 * 4) + 4);
    }
  }
  ExceptionList = local_10;
  return 0xffffffff;
}


// ==== 1004d99d Catch@1004d99d

void Catch_1004d99d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004d9b1 Catch@1004d9b1

void Catch_1004d9b1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconTable::GetColCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004d9d0 FUN_1004d9d0

void FUN_1004d9d0(int param_1,int param_2,undefined4 param_3)

{
  FArray *this;
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0390;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (-1 < param_1) {
    iVar1 = FUN_1004d130();
    if ((param_1 + 1 <= iVar1) && (-1 < param_2)) {
      iVar1 = FUN_1004d130();
      if (param_2 <= iVar1) {
        this = *(FArray **)(*(int *)(in_ECX + 8) + param_1 * 4);
        FArray::Insert(this,param_2,1,4);
        *(undefined4 *)(*(int *)this + param_2 * 4) = param_3;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004da5f Catch@1004da5f

void Catch_1004da5f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004da73 Catch@1004da73

void Catch_1004da73(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconTable::AddCol");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004da90 FUN_1004da90

undefined4 FUN_1004da90(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e03b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  if (-1 < param_1) {
    iVar1 = FUN_1004d130();
    if ((param_1 < iVar1) && (-1 < param_2)) {
      iVar1 = FUN_1004d920(param_1);
      if (param_2 < iVar1) {
        local_18 = *(undefined4 *)(**(int **)(*(int *)(in_ECX + 8) + param_1 * 4) + param_2 * 4);
      }
    }
  }
  ExceptionList = local_10;
  return local_18;
}


// ==== 1004db15 Catch@1004db15

void Catch_1004db15(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1004db29 Catch@1004db29

void Catch_1004db29(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconTable::GetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004db50 FUN_1004db50

void FUN_1004db50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
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
  local_24 = param_1;
  iVar4 = 0;
  local_8 = 0;
  local_18 = uStack_60;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  *(undefined4 *)(in_ECX + 0x2fc) = 0;
  local_38 = FUN_1004d130();
  do {
    local_30 = iVar4;
    if (local_38 <= iVar4) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
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
                       0xff,*(int *)(in_ECX + 0x2d8) == 0);
        }
        local_44 = local_2c + local_28;
        local_28 = local_28 + iVar5;
        FUN_100218f0(local_28,local_44,*(undefined4 *)(iVar4 + 0x1f5c),
                     *(undefined4 *)(iVar4 + 0x1f5c),*(undefined4 *)(iVar4 + 0x34),
                     *(int *)(in_ECX + 0x2d8) == 0,*(undefined1 *)(iVar4 + 0x1f68));
        if (((*(int *)(in_ECX + 0x2d8) == 0) && (iVar3 = *(int *)(iVar4 + 0x1f64), iVar3 < 0x3c)) &&
           (-1 < iVar3)) {
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
                         *(undefined4 *)(in_ECX + 0x310),*(undefined1 *)(iVar4 + 0x1f68),
                         *(int *)(in_ECX + 0x2d8) == 0);
          }
        }
        else {
LAB_1004dd97:
          if (*(int *)(iVar4 + 0x1f7c) != 0) goto LAB_1004dda0;
        }
        if (*(int *)(in_ECX + 0x2dc) == 0) {
          iVar5 = FUN_100053e0(*(undefined4 *)(in_ECX + 0x300),*(undefined4 *)(in_ECX + 0x304));
          if (iVar5 != 0) {
            *(int *)(in_ECX + 0x2fc) = iVar4;
          }
        }
      }
      iVar4 = local_30;
      param_1 = local_24;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


// ==== 1004de5e Catch@1004de5e

void Catch_1004de5e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 1004de72 Catch@1004de72

void Catch_1004de72(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004de90 FUN_1004de90

void FUN_1004de90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  int local_34;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0400;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  local_20 = 0;
  iVar1 = FUN_1004d130();
  for (iVar4 = 0; iVar5 = 0, iVar4 < iVar1; iVar4 = iVar4 + 1) {
    local_1c = 0;
    iVar2 = FUN_1004d920(iVar4);
    if (0 < iVar2) {
      for (local_34 = 0; local_34 < iVar2; local_34 = local_34 + 1) {
        iVar3 = FUN_1004da90(iVar4,local_34);
        if (iVar3 != 0) {
          if ((*(int *)(iVar3 + 0x1f6c) != 0) && (*(int *)(iVar3 + 0x34) != 0)) {
            *(float *)(iVar3 + 0x1f88) = (float)*(int *)(iVar3 + 0x1f60);
            *(float *)(iVar3 + 0x1f8c) = (float)*(int *)(iVar3 + 0x1f60);
            *(int *)(iVar3 + 0x1f80) = iVar5;
            *(int *)(iVar3 + 0x1f84) = local_18;
          }
          iVar3 = *(int *)(iVar3 + 0x1f60);
          iVar5 = iVar5 + iVar3;
          if (local_1c < iVar3) {
            local_1c = iVar3;
          }
        }
      }
      if (local_20 < iVar5) {
        local_20 = iVar5;
      }
      local_18 = local_18 + local_1c;
    }
  }
  iVar1 = in_ECX[0xbd];
  if (iVar1 != local_18) {
    in_ECX[0xbd] = local_18;
  }
  if (in_ECX[0xbe] == local_20) {
    if (iVar1 == local_18) {
      ExceptionList = local_10;
      return;
    }
  }
  else {
    in_ECX[0xbe] = local_20;
  }
  (**(code **)(*in_ECX + 0x128))((float)in_ECX[0xbe],(float)in_ECX[0xbd]);
  ExceptionList = local_10;
  return;
}


// ==== 1004e006 Catch@1004e006

void Catch_1004e006(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_102a47f0);
}


// ==== 1004e01a Catch@1004e01a

void Catch_1004e01a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::CalculateSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004e040 FUN_1004e040

undefined4 FUN_1004e040(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uStack_74;
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [20];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101e044c;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  iVar3 = 0;
  local_18 = in_ECX;
  do {
    local_20 = iVar3;
    iVar1 = FUN_1004d130();
    if (iVar1 <= iVar3) {
      ExceptionList = local_10;
      return 1;
    }
    local_1c = 0;
    while (iVar1 = FUN_1004d920(iVar3), local_1c < iVar1) {
      iVar1 = FUN_1004da90(iVar3,local_1c);
      if (iVar1 == 0) {
LAB_1004e1db:
        local_1c = local_1c + 1;
      }
      else {
        if (param_1 == 0x1f9) {
          if (0 < *(int *)(iVar1 + 0x1f64)) {
            *(int *)(iVar1 + 0x1f64) = *(int *)(iVar1 + 0x1f64) + -1;
            *(undefined4 *)(iVar1 + 0x1e7c) = *(undefined4 *)(iVar1 + 0x1f64);
            if (*(int *)(iVar1 + 0x1f7c) != 0) {
              *(undefined4 *)(iVar1 + 0x1e7c) = 0xffffffff;
            }
            FString::FString(local_40,(ushort *)L"RemainTime");
            local_8 = 1;
            iVar2 = FUN_10054530(local_40);
            local_8 = 0;
            FString::~FString(local_40);
            iVar3 = local_20;
            if (iVar2 != 0) {
              FUN_1003f970();
              local_8 = 2;
              FString::FString(local_58,(ushort *)L"RemainTime");
              local_8 = 3;
              FString::FString(local_4c,(ushort *)L"Type");
              local_8 = 4;
              FUN_10040230(local_4c,local_58);
              local_8 = 3;
              FString::~FString(local_4c);
              local_8 = 2;
              FString::~FString(local_58);
              FString::FString(local_64,(ushort *)L"Value");
              local_8 = 5;
              FUN_10040090(local_64,*(undefined4 *)(iVar1 + 0x1e7c));
              local_8 = 2;
              FString::~FString(local_64);
              FString::operator=((FString *)(iVar2 + 0x4c),local_34);
              local_8 = 0;
              FUN_1003fff0();
              iVar3 = local_20;
            }
          }
          goto LAB_1004e1db;
        }
        if ((((param_1 != 0x1e9) || (*(int *)(iVar1 + 0x1f64) < 0)) ||
            (0x1e < *(int *)(iVar1 + 0x1f64))) || (*(int *)(local_18 + 0x2d8) != 0))
        goto LAB_1004e1db;
        if (*(int *)(iVar1 + 0x1f74) == 0) {
          if (*(int *)(iVar1 + 0x1f68) < 0) {
            *(undefined4 *)(iVar1 + 0x1f68) = 0;
            *(undefined4 *)(iVar1 + 0x1f70) = 0;
          }
          else if (0xff < *(int *)(iVar1 + 0x1f68)) {
            *(undefined4 *)(iVar1 + 0x1f68) = 0xff;
            *(undefined4 *)(iVar1 + 0x1f70) = 1;
          }
          if (*(int *)(iVar1 + 0x1f70) == 0) {
            *(int *)(iVar1 + 0x1f68) = *(int *)(iVar1 + 0x1f68) + 0x19;
          }
          else {
            *(int *)(iVar1 + 0x1f68) = *(int *)(iVar1 + 0x1f68) + -0x19;
          }
          if (*(int *)(iVar1 + 0x1f68) < 0) {
            *(undefined4 *)(iVar1 + 0x1f68) = 0;
            *(undefined4 *)(iVar1 + 0x1f70) = 0;
            local_1c = local_1c + 1;
          }
          else {
            if (*(int *)(iVar1 + 0x1f68) < 0x100) goto LAB_1004e1db;
            *(undefined4 *)(iVar1 + 0x1f68) = 0xff;
            *(undefined4 *)(iVar1 + 0x1f70) = 1;
            local_1c = local_1c + 1;
          }
        }
        else {
          if (*(int *)(iVar1 + 0x1f68) == 0) {
            *(undefined4 *)(iVar1 + 0x1f70) = 0;
          }
          if (*(int *)(iVar1 + 0x1f68) == 0xff) {
            *(undefined4 *)(iVar1 + 0x1f70) = 1;
          }
          if (*(int *)(iVar1 + 0x1f70) == 0) {
            *(int *)(iVar1 + 0x1f68) = *(int *)(iVar1 + 0x1f68) + 0x19;
          }
          else {
            *(int *)(iVar1 + 0x1f68) = *(int *)(iVar1 + 0x1f68) + -0x19;
          }
          if (*(int *)(iVar1 + 0x1f68) < 0) {
            *(undefined4 *)(iVar1 + 0x1f68) = 0;
            *(undefined4 *)(iVar1 + 0x1f70) = 0;
            local_1c = local_1c + 1;
          }
          else {
            if (*(int *)(iVar1 + 0x1f68) < 0x100) goto LAB_1004e1db;
            *(undefined4 *)(iVar1 + 0x1f68) = 0xff;
            *(undefined4 *)(iVar1 + 0x1f70) = 1;
            local_1c = local_1c + 1;
          }
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== 1004e33d Catch@1004e33d

void Catch_1004e33d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1004e351 Catch@1004e351

void Catch_1004e351(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::OnTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004e370 FUN_1004e370

void FUN_1004e370(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  UPackage *pUVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0470;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_34 = 0;
  FName::FName((FName *)&uStack_38,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_1004d770(0x1f94,pUVar1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uStack_34 = 0x1004e3d3;
    uVar3 = FUN_1004d7a0();
  }
  uStack_34 = param_3;
  uStack_38 = uVar3;
  FUN_1004d470();
  uStack_38 = param_2;
  uStack_34 = uVar3;
  FUN_1004d9d0(param_1);
  uStack_34 = 0x1004e400;
  FUN_1004de90();
  ExceptionList = local_10;
  return;
}


// ==== 1004e41b Catch@1004e41b

void Catch_1004e41b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004e42f Catch@1004e42f

void Catch_1004e42f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::AddCol");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004e450 FUN_1004e450

void FUN_1004e450(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0490;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1004d920(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1004e4a5 Catch@1004e4a5

void Catch_1004e4a5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004e4b9 Catch@1004e4b9

void Catch_1004e4b9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::GetColCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004e4e0 FUN_1004e4e0

void FUN_1004e4e0(undefined4 param_1,undefined4 param_2,FStringNoInit *param_3)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e04b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1004da90(param_1,param_2);
  if (iVar1 != 0) {
    FStringNoInit::operator=(param_3,(ushort *)(iVar1 + 0x4c));
    FStringNoInit::operator=(param_3 + 0xc,(ushort *)(iVar1 + 0x44c));
    FStringNoInit::operator=(param_3 + 0x1c,(ushort *)(iVar1 + 0xa4c));
    if (*(int *)(iVar1 + 0x1f90) != 0) {
      puVar2 = UObject::GetName(*(UObject **)(iVar1 + 0x1f90));
      FStringNoInit::operator=(param_3 + 0x28,puVar2);
    }
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(iVar1 + 0x1f5c);
    *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(iVar1 + 0x1f64);
    *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(iVar1 + 0x1e5c);
    *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(iVar1 + 0x1e60);
    *(uint *)(param_3 + 0x40) =
         *(uint *)(param_3 + 0x40) ^ (*(uint *)(iVar1 + 0x1f6c) ^ *(uint *)(param_3 + 0x40)) & 1;
    uVar3 = (*(int *)(iVar1 + 0x1f74) * 2 ^ *(uint *)(param_3 + 0x40)) & 2 ^
            *(uint *)(param_3 + 0x40);
    *(uint *)(param_3 + 0x40) = uVar3;
    uVar3 = (*(int *)(iVar1 + 0x1f78) * 4 ^ uVar3) & 4 ^ uVar3;
    *(uint *)(param_3 + 0x40) = uVar3;
    *(uint *)(param_3 + 0x40) = (*(int *)(iVar1 + 0x1f7c) * 8 ^ uVar3) & 8 ^ uVar3;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004e60a Catch@1004e60a

void Catch_1004e60a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004e61e Catch@1004e61e

void Catch_1004e61e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::GetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004e640 FUN_1004e640

void FUN_1004e640(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e04d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1004da90(param_1,param_2);
  if (iVar1 != 0) {
    FUN_1004d470(iVar1,param_3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004e6b2 Catch@1004e6b2

void Catch_1004e6b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004e6c6 Catch@1004e6c6

void Catch_1004e6c6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::SetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004e6f0 FUN_1004e6f0

void FUN_1004e6f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e04f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1004d130();
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar2 = FUN_1004d920(iVar5);
    if (0 < iVar2) {
      for (local_1c = 0; local_1c < iVar2; local_1c = local_1c + 1) {
        iVar3 = FUN_1004da90(iVar5,local_1c);
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x1f5c) = param_1;
          iVar4 = param_1;
          if (*(int *)(iVar3 + 0x1f90) != 0) {
            iVar4 = param_1 + 2;
          }
          *(int *)(iVar3 + 0x1f60) = iVar4;
        }
      }
    }
  }
  FUN_1004de90();
  ExceptionList = local_10;
  return;
}


// ==== 1004e7af Catch@1004e7af

void Catch_1004e7af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1004e7c3 Catch@1004e7c3

void Catch_1004e7c3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::SetIconSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004e7e0 FUN_1004e7e0

UObject * FUN_1004e7e0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UStatusIconHandle::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1004e820 FUN_1004e820

undefined4 FUN_1004e820(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e051b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = 0;
  local_8 = 0;
  iVar2 = FUN_1004d130();
  iVar1 = param_1;
  if (iVar2 < param_1) {
    ExceptionList = local_10;
    return 0;
  }
  param_1 = FUN_10004ed0(0xc);
  local_8._0_1_ = 1;
  if (param_1 != 0) {
    uVar3 = FUN_1004d710();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1 = uVar3;
  if (-1 < iVar1) {
    FArray::Insert((FArray *)(in_ECX + 8),iVar1,1,4);
    *(undefined4 *)(*(int *)(in_ECX + 8) + iVar1 * 4) = uVar3;
    ExceptionList = local_10;
    return uVar3;
  }
  FUN_100d9a30(&param_1);
  ExceptionList = local_10;
  return uVar3;
}


// ==== 1004e8eb Catch@1004e8eb

void Catch_1004e8eb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004e8ff Catch@1004e8ff

void Catch_1004e8ff(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconTable::AddRow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004e920 FUN_1004e920

void FUN_1004e920(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0540;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (-1 < param_1) {
    iVar1 = FUN_1004d130();
    if (param_1 + 1 <= iVar1) {
      FUN_100d9a30(&stack0x00000008);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004e991 Catch@1004e991

void Catch_1004e991(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004e9a5 Catch@1004e9a5

void Catch_1004e9a5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconTable::AddCol");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004e9d0 FUN_1004e9d0

undefined4 FUN_1004e9d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0560;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  iVar1 = *(int *)(in_ECX + 0x2fc);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x1f6c) != 0)) && (*(int *)(iVar1 + 0x34) != 0)) {
    uVar3 = 0;
    iVar4 = in_ECX + 0x164;
    uVar2 = FUN_10047f40(iVar1,iVar4,0);
    FUN_101b8f10(uVar2,iVar4,uVar3);
    if (*(int *)(in_ECX + 0xd4) != 0) {
      iVar1 = *(int *)(in_ECX + 0x2fc);
      FUN_10054680(param_1,iVar1 + 0x1f1c,*(int *)(iVar1 + 0x1f80) + 1,*(int *)(iVar1 + 0x1f84) + 1,
                   *(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),
                   *(undefined4 *)(in_ECX + 0x88),*(undefined4 *)(in_ECX + 0x8c));
    }
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1004eb0c Catch@1004eb0c

void Catch_1004eb0c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004eb20 Catch@1004eb20

void Catch_1004eb20(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::OnPostPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004eb40 FUN_1004eb40

void FUN_1004eb40(void)

{
  UPackage *pUVar1;
  UObject *pUVar2;
  int iVar3;
  NCWnd *in_ECX;
  undefined4 uStack_44;
  undefined4 uStack_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0580;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UStatusIconHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_1004e7e0(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x1004ebca;
    appFailAssert("m_pScriptHandle",".\\Src\\NStatusIconCtrl.cpp",0x1fc);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1004ebfe Catch@1004ebfe

void Catch_1004ebfe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004ec12 Catch@1004ec12

void Catch_1004ec12(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004ec30 FUN_1004ec30

void FUN_1004ec30(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e05a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1004e820(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1004ec8c Catch@1004ec8c

void Catch_1004ec8c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004eca0 Catch@1004eca0

void Catch_1004eca0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::AddRow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004ecc0 FUN_1004ecc0

void FUN_1004ecc0(undefined4 param_1,undefined4 param_2)

{
  UPackage *pUVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e05c0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_34 = 0;
  FName::FName((FName *)&uStack_38,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_1004d770(0x1f94,pUVar1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uStack_34 = 0x1004ed23;
    uVar3 = FUN_1004d7a0();
  }
  uStack_34 = param_2;
  uStack_38 = uVar3;
  FUN_1004d470();
  uStack_38 = param_1;
  uStack_34 = uVar3;
  FUN_1004e920();
  uStack_34 = 0x1004ed4c;
  FUN_1004de90();
  ExceptionList = local_10;
  return;
}


// ==== 1004ed67 Catch@1004ed67

void Catch_1004ed67(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004ed7b Catch@1004ed7b

void Catch_1004ed7b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::AddCol");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004eda0 FUN_1004eda0

void FUN_1004eda0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e05e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 < 0) {
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


// ==== 1004ee40 FUN_1004ee40

void FUN_1004ee40(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e0619;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 < 0) {
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


// ==== 1004eee0 FUN_1004eee0

void FUN_1004eee0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e0654;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FArray::FArray((FArray *)(in_ECX + 2));
  *in_ECX = 0;
  in_ECX[1] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1004ef4f Catch@1004ef4f

void Catch_1004ef4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004ef63 Catch@1004ef63

void Catch_1004ef63(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconTable::NCStatusIconTable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004ef80 FUN_1004ef80

void FUN_1004ef80(byte param_1)

{
  FUN_1004ee40();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1004efb0 FUN_1004efb0

void FUN_1004efb0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e067b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1004eda0(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1004f000 FUN_1004f000

void FUN_1004f000(int param_1)

{
  int *piVar1;
  FArray *this;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e06a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  if (-1 < param_1) {
    iVar2 = FUN_1004d130();
    if (param_1 + 1 <= iVar2) {
      iVar2 = FUN_1004d920(param_1);
      for (; iVar3 < iVar2; iVar3 = iVar3 + 1) {
        FUN_1002cd30();
        piVar1 = *(int **)(**(int **)(*(int *)(in_ECX + 8) + param_1 * 4) + iVar3 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))(1);
        }
      }
      this = *(FArray **)(*(int *)(in_ECX + 8) + param_1 * 4);
      for (iVar3 = 0; iVar3 < *(int *)(this + 4); iVar3 = iVar3 + 1) {
      }
      FArray::Empty(this,4,0);
      if (*(int *)(*(int *)(in_ECX + 8) + param_1 * 4) != 0) {
        FUN_1004ef80(1);
      }
      FUN_1013d680(param_1,1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004f0ed Catch@1004f0ed

void Catch_1004f0ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1004f101 Catch@1004f101

void Catch_1004f101(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconTable::DeleteRow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004f120 FUN_1004f120

void FUN_1004f120(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e06c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (-1 < param_1) {
    iVar3 = FUN_1004d130();
    if ((param_1 < iVar3) && (-1 < param_2)) {
      iVar3 = FUN_1004d920(param_1);
      if (param_2 < iVar3) {
        piVar1 = *(int **)(*(int *)(in_ECX + 8) + param_1 * 4);
        piVar2 = *(int **)(*piVar1 + param_2 * 4);
        if (piVar2 != (int *)0x0) {
          FUN_1002cd30();
          (**(code **)(*piVar2 + 0xc))(1);
        }
        FUN_1013d680(param_2,1);
        if (piVar1[1] < 1) {
          FUN_1004f000(param_1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004f1d4 Catch@1004f1d4

void Catch_1004f1d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1004f1e8 Catch@1004f1e8

void Catch_1004f1e8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconTable::DelItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004f210 FUN_1004f210

void FUN_1004f210(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e06e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1004f120(param_1,param_2);
  iVar1 = FUN_1004d920(param_1);
  if (iVar1 < 1) {
    FUN_1004f000(param_1);
  }
  FUN_1004de90();
  ExceptionList = local_10;
  return;
}


// ==== 1004f290 Catch@1004f290

void Catch_1004f290(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004f2a4 Catch@1004f2a4

void Catch_1004f2a4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::DelItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004f2d0 FUN_1004f2d0

void FUN_1004f2d0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0700;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1004d130();
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    FUN_1004f000(0);
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0xc); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 8),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 1004f353 Catch@1004f353

void Catch_1004f353(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1004f367 Catch@1004f367

void Catch_1004f367(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconTable::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004f390 FUN_1004f390

void FUN_1004f390(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0720;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1004f2d0();
  *(undefined4 *)(in_ECX + 0x2f4) = 0;
  *(undefined4 *)(in_ECX + 0x2f8) = 0;
  *(undefined4 *)(in_ECX + 0x2fc) = 0;
  FUN_1004de90();
  ExceptionList = local_10;
  return;
}


// ==== 1004f3ff Catch@1004f3ff

void Catch_1004f3ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004f413 Catch@1004f413

void Catch_1004f413(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCStatusIconCtrl::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004f430 FUN_1004f430

void FUN_1004f430(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e0756;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = NCStatusIconCtrl::vftable;
  FUN_1004eee0();
  in_ECX[0xc1] = 0;
  in_ECX[0xc0] = 0;
  in_ECX[0xc2] = 0;
  in_ECX[0xb6] = param_1;
  in_ECX[0xb7] = param_2;
  ExceptionList = local_c;
  return;
}


// ==== 1004f4c0 FUN_1004f4c0

void FUN_1004f4c0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101e07a1;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCStatusIconCtrl::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_1004eda0(uVar1);
  local_4 = 0xffffffff;
  FUN_10002a70();
  ExceptionList = local_c;
  return;
}


// ==== 1004f540 FUN_1004f540

void FUN_1004f540(byte param_1)

{
  void *in_ECX;
  
  FUN_1004f4c0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x314);
  }
  return;
}


// ==== 1004f590 FUN_1004f590

void FUN_1004f590(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}


// ==== 1004f5b0 FUN_1004f5b0

undefined4 FUN_1004f5b0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 8);
}


// ==== 1004f5c0 FUN_1004f5c0

int FUN_1004f5c0(uint param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 8) < param_1) {
    return 0;
  }
  return *(int *)(in_ECX + 4) + param_1 * 2;
}


// ==== 1004f5e0 FUN_1004f5e0

void FUN_1004f5e0(uint param_1)

{
  (**(code **)**(undefined4 **)GMalloc_exref)
            (-(uint)((int)((ulonglong)param_1 * 2 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 2),
             &DAT_1022f8a0);
  return;
}


// ==== 1004f610 FUN_1004f610

uint FUN_1004f610(short *param_1,uint param_2)

{
  short sVar1;
  void *_Src;
  size_t _Size;
  uint uVar2;
  void *_Dst;
  uint *in_ECX;
  short *psVar3;
  uint uVar4;
  
  if (param_1 != (short *)0x0) {
    psVar3 = param_1;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    uVar4 = (int)psVar3 - (int)(param_1 + 1) >> 1;
    if (uVar4 != 0) {
      if (in_ECX[2] < param_2) {
        return 0;
      }
      if (in_ECX[1] == 0) {
        uVar2 = FUN_1004f5e0(0x100);
        in_ECX[1] = uVar2;
        *in_ECX = 0x100;
      }
      uVar2 = *in_ECX;
      if (in_ECX[2] + uVar4 < uVar2) {
        appMemmove((void *)(in_ECX[1] + (uVar4 + param_2) * 2),(void *)(in_ECX[1] + param_2 * 2),
                   in_ECX[2] * 2 - param_2);
        in_ECX[2] = in_ECX[2] + uVar4;
        _memcpy((void *)(in_ECX[1] + param_2 * 2),param_1,uVar4 * 2);
      }
      else {
        _Src = (void *)in_ECX[1];
        if (uVar4 < 0x101) {
          uVar2 = uVar2 + 0x100;
        }
        else {
          uVar2 = uVar2 + uVar4;
        }
        *in_ECX = uVar2;
        _Dst = (void *)FUN_1004f5e0(uVar2);
        _Size = param_2 * 2;
        in_ECX[1] = (uint)_Dst;
        _memcpy(_Dst,_Src,_Size);
        _memcpy((void *)(in_ECX[1] + _Size),param_1,uVar4 * 2);
        _memcpy((void *)(in_ECX[1] + (uVar4 + param_2) * 2),(void *)(_Size + (int)_Src),
                in_ECX[2] * 2 - param_2);
        in_ECX[2] = in_ECX[2] + uVar4;
        FUN_10146550(_Src);
      }
      *(undefined2 *)(in_ECX[1] + in_ECX[2] * 2) = 0;
      return uVar4;
    }
  }
  return 0;
}


// ==== 1004f740 FUN_1004f740

void FUN_1004f740(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1004f5b0();
  FUN_1004f610(param_1,uVar1);
  return;
}


// ==== 1004f760 FUN_1004f760

void FUN_1004f760(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_10146550(*(int *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}


// ==== 1004f780 FUN_1004f780

void FUN_1004f780(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  FUN_1004f610(param_1,0);
  return;
}


// ==== 1004f7b0 FUN_1004f7b0

void FUN_1004f7b0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_10146550(*(int *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}


// ==== 1004f7c0 FUN_1004f7c0

bool FUN_1004f7c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100b1c70(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x50e) {
    iVar1 = (**(code **)(*in_ECX + 0xa0))();
    return iVar1 != 0;
  }
  return false;
}


// ==== 1004f810 FUN_1004f810

void FUN_1004f810(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e07e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0x10));
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString((FString *)(in_ECX + 0x1c));
  ExceptionList = local_c;
  return;
}


// ==== 1004f880 FUN_1004f880

void FUN_1004f880(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0800;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005fe50();
  ExceptionList = local_10;
  return;
}


// ==== 1004f8d0 Catch@1004f8d0

void Catch_1004f8d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004f8e4 Catch@1004f8e4

void Catch_1004f8e4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004f910 FUN_1004f910

void FUN_1004f910(void)

{
  int in_ECX;
  
  FUN_10061b40();
  *(int *)(in_ECX + 0x2e8) = DAT_1034c934;
  DAT_1034c934 = DAT_1034c934 + 1;
  return;
}


// ==== 1004f930 FUN_1004f930

void FUN_1004f930(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101e0844;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  FString::~FString((FString *)(in_ECX + 0x1c));
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x10));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1004f9a0 FUN_1004f9a0

FString * FUN_1004f9a0(FString *param_1,int param_2)

{
  ushort *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e087a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10057590(param_1);
  local_4 = 0;
  puVar1 = appItoa(param_2);
  FString::operator+=(param_1,puVar1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 1004fa20 UTabHandle::StaticClass

/* public: static class UClass * __cdecl UTabHandle::StaticClass(void) */

UClass * __cdecl UTabHandle::StaticClass(void)

{
                    /* 0x4fa20  954  ?StaticClass@UTabHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1004fa30 FUN_1004fa30

void FUN_1004fa30(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e08a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1004fa80 FUN_1004fa80

void FUN_1004fa80(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e08d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1004fad0 FUN_1004fad0

undefined4 FUN_1004fad0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0900;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_100053e0(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = FUN_101c19e0();
    iVar1 = FUN_100053e0(uVar2,param_2);
    if (iVar1 == 0) {
      uVar3 = FUN_101c19e0();
      iVar1 = FUN_100053e0(param_1,uVar3);
      if ((iVar1 == 0) && (iVar1 = FUN_100053e0(uVar2,uVar3), iVar1 == 0)) {
        ExceptionList = local_10;
        return 0;
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1004fb82 Catch@1004fb82

void Catch_1004fb82(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004fb96 Catch@1004fb96

void Catch_1004fb96(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRect::Intersects");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004fbc0 FUN_1004fbc0

void FUN_1004fbc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10358d30,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1004fbf0 FUN_1004fbf0

void FUN_1004fbf0(byte param_1)

{
  FUN_1004f930();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1004fc20 FUN_1004fc20

void FUN_1004fc20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 0x2e0)) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x2dc) + param_1 * 4);
    if (param_2 == 0) {
      (**(code **)(*piVar1 + 0x118))(1);
      if ((*(byte *)(in_ECX + 0x30c) & 1) != 0) {
        iVar2 = *piVar1;
        uVar3 = FUN_1005a540();
        (**(code **)(iVar2 + 0x80))(uVar3 | 0x400000);
      }
    }
    else {
      (**(code **)(*piVar1 + 0x118))(0);
      if ((*(byte *)(in_ECX + 0x30c) & 1) != 0) {
        iVar2 = *piVar1;
        uVar3 = FUN_1005a540();
        (**(code **)(iVar2 + 0x80))(uVar3 & 0xffbfffff);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1004fcea Catch@1004fcea

void Catch_1004fcea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004fcfe Catch@1004fcfe

void Catch_1004fcfe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::SetDisable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004fd20 FUN_1004fd20

undefined4 FUN_1004fd20(int param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0940;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(in_ECX + 0x2e0))) {
    iVar1 = FUN_10004b60();
    if (iVar1 != 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1004fda4 Catch@1004fda4

void Catch_1004fda4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1004fdb8 Catch@1004fdb8

void Catch_1004fdb8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::IsSplit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1004fde0 FUN_1004fde0

UObject * FUN_1004fde0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UTabHandle::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1004fe10 UUIScript::eventOnTabMerge

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnTabMerge(class FString const &) */

void __thiscall UUIScript::eventOnTabMerge(UUIScript *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void *unaff_EDI;
  undefined4 *puStack_2c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4fe10  1051  ?eventOnTabMerge@UUIScript@@QAEXABVFString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e097a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_2c = (undefined4 *)0x1004fe58;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *(int *)this;
  puStack_2c = local_18;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnTabMerge,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&puStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 1004fea0 UUIScript::eventOnTabSplit

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnTabSplit(class FString const &) */

void __thiscall UUIScript::eventOnTabSplit(UUIScript *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void *unaff_EDI;
  undefined4 *puStack_2c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4fea0  1052  ?eventOnTabSplit@UUIScript@@QAEXABVFString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e09ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_2c = (undefined4 *)0x1004fee8;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *(int *)this;
  puStack_2c = local_18;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnTabSplit,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&puStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 1004ff30 FUN_1004ff30

int FUN_1004ff30(int param_1,int *param_2,FString *param_3,int param_4,ushort *param_5,
                FString *param_6,int param_7,undefined4 param_8,int param_9,FString **param_10)

{
  ushort *puVar1;
  UPackage *pUVar2;
  FString *pFVar3;
  int in_ECX;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FString *local_64;
  uint uStack_5c;
  FString local_4c [4];
  undefined4 local_48;
  FString local_40 [4];
  undefined4 local_3c;
  undefined4 local_34;
  int local_2c;
  int local_28;
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0a48;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_18 = 0;
  local_8 = 0;
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 * 0xc + 0x6a8dc));
  if (puVar1 == (ushort *)0x0) {
    ExceptionList = local_10;
    return -1;
  }
  if (*(int *)(in_ECX + 0x2e0) == 0) {
    *(int **)(in_ECX + 0x2ec) = param_2;
  }
  if ((param_3 == (FString *)0x0) || (param_4 == 0)) {
    local_64 = (FString *)0x0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 * 0xc + 0x6a8dc));
    FUN_10020bb0(&local_2c,puVar1,uVar6,uVar7,uVar8,uVar9);
    param_3 = (FString *)(local_2c + 10);
    param_4 = local_28 + 5;
  }
  local_1c = 1;
  if (param_10 != (FString **)0x0) {
    local_1c = 3;
  }
  local_64 = param_3;
  if ((param_5 == (ushort *)0x0) || (param_6 == (FString *)0x0)) {
    param_6 = (FString *)&local_64;
    FName::FName((FName *)&local_64,0);
    pUVar2 = UObject::GetTransientPackage();
    param_6 = (FString *)FUN_1004fbc0(0x350,pUVar2);
    if (param_6 == (FString *)0x0) {
      pFVar3 = (FString *)0x0;
    }
    else {
      local_64 = (FString *)0x10050110;
      FString::FString(local_40,(ushort *)L"Default.Darkyellow");
      local_8 = CONCAT31(local_8._1_3_,3);
      local_18 = 4;
      local_64 = (FString *)0x1005012a;
      FString::FString(local_4c,(ushort *)L"Default.BlackTexture");
      local_8 = 4;
      uVar4 = 0xc;
      local_18 = 0xc;
      local_64 = local_40;
      pFVar3 = (FString *)FUN_100073a0(local_4c);
    }
    local_8 = 3;
    param_6 = pFVar3;
    if ((uVar4 & 8) != 0) {
      uVar4 = uVar4 & 0xfffffff7;
      local_18 = uVar4;
      FString::~FString(local_4c);
    }
    local_8 = 0;
    if ((uVar4 & 4) == 0) goto LAB_10050185;
    local_18 = uVar4 & 0xfffffffb;
  }
  else {
    param_10 = &local_64;
    FName::FName((FName *)&local_64,0);
    pUVar2 = UObject::GetTransientPackage();
    param_10 = (FString **)FUN_1004fbc0(0x350,pUVar2);
    if (param_10 == (FString **)0x0) {
      pFVar3 = (FString *)0x0;
    }
    else {
      local_64 = (FString *)0x10050063;
      FString::FString(local_40,(ushort *)param_6);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = 1;
      local_64 = (FString *)0x1005007b;
      FString::FString(local_4c,param_5);
      local_8 = 2;
      uVar4 = 3;
      local_18 = 3;
      local_64 = local_40;
      pFVar3 = (FString *)FUN_100073a0(local_4c);
    }
    local_8 = 1;
    param_6 = pFVar3;
    if ((uVar4 & 2) != 0) {
      uVar4 = uVar4 & 0xfffffffd;
      local_18 = uVar4;
      FString::~FString(local_4c);
    }
    local_8 = 0;
    if ((uVar4 & 1) == 0) goto LAB_10050185;
    local_18 = uVar4 & 0xfffffffe;
  }
  local_8 = 0;
  FString::~FString(local_40);
LAB_10050185:
  *(int *)(pFVar3 + 0x1cc) = *(int *)(in_ECX + 0x2e8);
  if (param_9 != 0) {
    *(uint *)(in_ECX + 0x30c) = *(uint *)(in_ECX + 0x30c) | 1;
  }
  local_64 = pFVar3;
  FUN_10060d40();
  local_64 = (FString *)0x100501b7;
  FUN_1005c1e0();
  local_64 = (FString *)(float)(int)param_3;
  (**(code **)(*(int *)pFVar3 + 0x128))();
  local_34 = *(undefined4 *)(in_ECX + 0x2d8);
  (**(code **)(*(int *)pFVar3 + 0xd4))(1,1,0,local_34,0,0);
  local_3c = 0;
  (**(code **)(*(int *)pFVar3 + 0xd0))(0,0,0);
  local_48 = *(undefined4 *)(in_ECX + 0x2d8);
  FUN_10005960(local_48,0);
  FUN_10004c70(*(undefined4 *)(in_ECX + 0x2e0));
  FUN_10003cf0(param_1);
  *(int *)(pFVar3 + 0x31c) = 2;
  *(int *)(pFVar3 + 800) = 1;
  FUN_100040d0(param_8,1);
  piVar5 = param_2;
  if (*(int *)(in_ECX + 0x2e0) == 0) {
    *(int **)(in_ECX + 0x2ec) = param_2;
    FUN_10004d00(0);
  }
  else {
    FUN_10004d00(1);
    piVar5 = param_2;
  }
  *(int *)(in_ECX + 0x2d8) = (int)(param_3 + *(int *)(in_ECX + 0x2d8) + param_7);
  FUN_100d9a30(&param_6);
  FUN_100d9a30(&param_2);
  (**(code **)(*piVar5 + 0x120))(0x10000000);
  ExceptionList = local_10;
  return *(int *)(in_ECX + 0x2e0) + -1;
}


// ==== 100502cd Catch@100502cd

void Catch_100502cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100502e1 Catch@100502e1

void Catch_100502e1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::AddTabControl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10050300 FUN_10050300

void FUN_10050300(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  uint uStack_30;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e0a96;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  local_18 = (undefined4 *)FUN_10004ed0(0x40);
  local_8._0_1_ = 4;
  if (local_18 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_1004f810();
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  *puVar1 = param_1;
  local_18 = puVar1;
  FString::operator=((FString *)(puVar1 + 1),(FString *)&stack0x00000008);
  puVar1[10] = in_stack_00000014;
  puVar1[0xb] = in_stack_00000018;
  FString::operator=((FString *)(puVar1 + 4),(FString *)&stack0x0000001c);
  FString::operator=((FString *)(puVar1 + 7),(FString *)&stack0x00000028);
  puVar1[0xc] = in_stack_00000034;
  puVar1[0xd] = in_stack_00000038;
  puVar1[0xe] = in_stack_0000003c;
  puVar1[0xf] = in_stack_00000040;
  FUN_100d9a30(&local_18);
  local_8 = 1;
  FString::~FString((FString *)&stack0x00000008);
  local_8 = local_8 & 0xffffff00;
  FString::~FString((FString *)&stack0x0000001c);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000028);
  ExceptionList = local_10;
  return;
}


// ==== 10050401 Catch@10050401

void Catch_10050401(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10050415 Catch@10050415

void Catch_10050415(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::AddTabControl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10050440 FUN_10050440

int FUN_10050440(int param_1,undefined4 param_2,int param_3,int param_4,ushort *param_5,
                ushort *param_6)

{
  code *pcVar1;
  ushort *puVar2;
  uint uVar3;
  UPackage *pUVar4;
  UObject *pUVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  FString *this;
  bool bVar9;
  int unaff_retaddr;
  int local_50;
  int local_4c;
  FString local_48 [12];
  FString local_3c [8];
  FString aFStack_34 [4];
  FString local_30 [12];
  FString local_24 [4];
  undefined4 uStack_20;
  ushort *puStack_18;
  int *piStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar8 = param_4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e0b31;
  local_c = ExceptionList;
  uVar3 = DAT_103554c4 ^ (uint)&stack0xffffff9c;
  if (param_1 == 0) {
    return -1;
  }
  ExceptionList = &local_c;
  if (*(int *)(in_ECX + 0x2e0) == 0) {
    *(undefined4 *)(in_ECX + 0x2ec) = param_2;
  }
  if ((param_3 == 0) || (param_4 == 0)) {
    FUN_10020bb0(&local_50,param_1,0,0,0,0,0,0,uVar3);
    param_4 = local_50 + 10;
    iVar8 = local_4c + 5;
  }
  else {
    param_4 = param_3;
  }
  puVar2 = param_5;
  if ((param_5 == (ushort *)0x0) || (param_6 == (ushort *)0x0)) {
    FName::FName((FName *)&param_6,0);
    pUVar4 = UObject::GetTransientPackage();
    pUVar5 = UObject::StaticAllocateObject
                       (&DAT_10358d30,pUVar4,param_6,0,0,*(undefined4 *)GError_exref,0,0);
    bVar9 = pUVar5 == (UObject *)0x0;
    if (bVar9) {
      piVar6 = (int *)0x0;
    }
    else {
      FString::FString(local_24,(ushort *)L"Default.Darkyellow");
      local_4 = 2;
      FString::FString(local_30,(ushort *)L"Default.BlackTexture");
      local_4 = 3;
      piVar6 = (int *)FUN_100073a0(local_30,local_24,0);
    }
    local_4 = 2;
    if (!bVar9) {
      FString::~FString(local_30);
    }
    local_4 = 0xffffffff;
    if (bVar9) goto LAB_10050694;
    this = local_24;
  }
  else {
    FName::FName((FName *)&param_5,0);
    pUVar4 = UObject::GetTransientPackage();
    pUVar5 = UObject::StaticAllocateObject
                       (&DAT_10358d30,pUVar4,param_5,0,0,*(undefined4 *)GError_exref,0,0);
    bVar9 = pUVar5 == (UObject *)0x0;
    if (bVar9) {
      piVar6 = (int *)0x0;
    }
    else {
      FString::FString(local_3c,param_6);
      local_4 = 0;
      FString::FString(local_48,puVar2);
      local_4 = 1;
      piVar6 = (int *)FUN_100073a0(local_48,local_3c,0);
    }
    local_4 = 0;
    if (!bVar9) {
      FString::~FString(local_48);
    }
    local_4 = 0xffffffff;
    if (bVar9) goto LAB_10050694;
    this = local_3c;
  }
  local_4 = 0xffffffff;
  FString::~FString(this);
LAB_10050694:
  pcVar1 = *(code **)(*piVar6 + 0xc0);
  piVar6[0x73] = *(int *)(in_ECX + 0x2e8);
  (*pcVar1)(*(undefined4 *)(in_ECX + 0x2d8),0,param_4,iVar8,0,0,3);
  uVar7 = FUN_10060d40(piVar6,0x22);
  FUN_1005c1e0(uVar7);
  FUN_10004c70(*(undefined4 *)(in_ECX + 0x2e0));
  FString::FString(aFStack_34,puStack_18);
  uStack_20 = 4;
  FUN_10003dc0(aFStack_34);
  uStack_20 = 0xffffffff;
  FString::~FString(aFStack_34);
  piVar6[199] = 2;
  piVar6[200] = 1;
  FUN_100040d0(param_1,1);
  bVar9 = *(int *)(in_ECX + 0x2e0) != 0;
  if (!bVar9) {
    *(int **)(in_ECX + 0x2ec) = piStack_14;
  }
  FUN_10004d00(bVar9);
  *(int *)(in_ECX + 0x2d8) = *(int *)(in_ECX + 0x2d8) + param_4 + unaff_retaddr;
  iVar8 = FArray::Add((FArray *)(in_ECX + 0x2dc),1,4);
  *(int **)(*(int *)(in_ECX + 0x2dc) + iVar8 * 4) = piVar6;
  iVar8 = FArray::Add((FArray *)(in_ECX + 0x2f0),1,4);
  *(int **)(*(int *)(in_ECX + 0x2f0) + iVar8 * 4) = piStack_14;
  (**(code **)(*piStack_14 + 0x120))(0x10000000);
  ExceptionList = local_c;
  return *(int *)(in_ECX + 0x2e0) + -1;
}


// ==== 100507d0 FUN_100507d0

void FUN_100507d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int in_ECX;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x2f4)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x2f0) + iVar5 * 4);
      if (piVar1 != (int *)0x0) {
        iVar3 = FUN_1004fd20(iVar5);
        iVar2 = *piVar1;
        if (iVar3 == 0) {
          pcVar4 = *(code **)(iVar2 + 0x13c);
        }
        else {
          pcVar4 = *(code **)(iVar2 + 0x138);
        }
        (*pcVar4)();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x2f4));
  }
  if (*(int *)(in_ECX + 0x2ec) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10050832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x2ec) + 0x138))();
  return;
}


// ==== 10050840 FUN_10050840

undefined4 FUN_10050840(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0b50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x2e0); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x2dc),4,0);
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x2f4); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x2f0),4,0);
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 100508d0 Catch@100508d0

void Catch_100508d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100508e4 Catch@100508e4

void Catch_100508e4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10050910 FUN_10050910

undefined4 FUN_10050910(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0b70;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x2f4) <= iVar1) {
      return 0;
    }
    if (param_1 == *(int *)(*(int *)(in_ECX + 0x2f0) + iVar1 * 4)) break;
    iVar1 = iVar1 + 1;
  }
  ExceptionList = &local_10;
  uVar2 = FUN_1004fd20(iVar1);
  ExceptionList = local_10;
  return uVar2;
}


// ==== 10050992 Catch@10050992

void Catch_10050992(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100509a6 Catch@100509a6

void Catch_100509a6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::IsSplit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100509d0 FUN_100509d0

undefined4 FUN_100509d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  int *in_ECX;
  uint uStack_40;
  FString local_30 [20];
  UUIScript *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e0b99;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((-1 < in_ECX[0xb8]) && (param_1 < in_ECX[0xb8])) {
    iVar3 = param_1 * 4;
    iVar2 = (**(code **)(**(int **)(iVar3 + in_ECX[0xb7]) + 0x6c))();
    if (iVar2 != 0) {
      if (in_ECX[0xbb] != *(int *)(iVar3 + in_ECX[0xbc])) {
        FUN_1014ed50(5);
      }
      iVar3 = FUN_10050910(*(undefined4 *)(in_ECX[0xbc] + iVar3));
      if (iVar3 == 0) {
        for (iVar3 = 0; local_18 = iVar3, iVar3 < in_ECX[0xbd]; iVar3 = iVar3 + 1) {
          iVar2 = FUN_1004fd20(iVar3);
          if (iVar2 == 0) {
            piVar1 = *(int **)(in_ECX[0xbc] + iVar3 * 4);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 0x13c))();
            }
            FUN_10004d00(1);
          }
        }
        in_ECX[0xbb] = *(int *)(param_1 * 4 + in_ECX[0xbc]);
      }
      in_ECX[0xc2] = param_1;
      piVar1 = *(int **)(param_1 * 4 + in_ECX[0xbc]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))();
        local_1c = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
        if (local_1c != (UUIScript *)0x0) {
          pFVar4 = (FString *)FUN_1004f9a0(local_30,param_1);
          local_8._0_1_ = 1;
          UUIScript::eventOnClickButton(local_1c,pFVar4);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_30);
        }
        FUN_10004d00(0);
        (**(code **)(*piVar1 + 0x78))();
        if ((*(byte *)(in_ECX + 0xc3) & 1) != 0) {
          (**(code **)(**(int **)(param_1 * 4 + in_ECX[0xb7]) + 0x78))();
          iVar3 = FUN_10058020();
          if (*(int *)(iVar3 + 0xc) != 0) {
            FUN_10058970(iVar3);
          }
        }
      }
      if (param_2 != 0) {
        FUN_1000cb20(param_1);
      }
      FUN_1014ed50(5);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10050baf Catch@10050baf

void Catch_10050baf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10050bc3 Catch@10050bc3

void Catch_10050bc3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::OnTabClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10050be0 FUN_10050be0

undefined4 FUN_10050be0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  UUIScript *this;
  FString *pFVar2;
  int iVar3;
  int *in_ECX;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e0bc9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((in_ECX[0xb8] < 0) || (in_ECX[0xb8] <= param_1)) ||
     (iVar1 = (**(code **)(**(int **)(in_ECX[0xb7] + param_1 * 4) + 0x6c))(), iVar1 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if ((*(byte *)(in_ECX + 0xc3) & 1) != 0) {
    iVar1 = FUN_10004b60();
    if (iVar1 == 0) {
      FUN_10004be0(1);
      this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
      if (this != (UUIScript *)0x0) {
        pFVar2 = (FString *)FUN_1004f9a0(local_2c,param_1);
        local_8._0_1_ = 1;
        UUIScript::eventOnTabSplit(this,pFVar2);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_2c);
      }
      for (iVar1 = 0; local_18 = iVar1, iVar1 < in_ECX[0xbd]; iVar1 = iVar1 + 1) {
        iVar3 = FUN_1004fd20(iVar1);
        if (iVar3 == 0) {
          (**(code **)(*in_ECX + 0x1fc))(iVar1,1);
          break;
        }
      }
      (**(code **)(*in_ECX + 0x1fc))(param_1,1);
    }
    (**(code **)(**(int **)(in_ECX[0xbc] + param_1 * 4) + 0x148))(param_2,param_3,0);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10050d1b Catch@10050d1b

void Catch_10050d1b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10050d2f Catch@10050d2f

void Catch_10050d2f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::OnTabMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10050d50 FUN_10050d50

void FUN_10050d50(int param_1)

{
  int iVar1;
  int iVar2;
  UUIScript *this;
  FString *pFVar3;
  int *in_ECX;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = param_1;
  puStack_c = &LAB_101e0bf9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((-1 < in_ECX[0xb8]) && (param_1 < in_ECX[0xb8])) {
    iVar2 = (**(code **)(**(int **)(in_ECX[0xb7] + param_1 * 4) + 0x6c))();
    if (iVar2 != 0) {
      iVar2 = FUN_1004fd20(iVar1);
      if (iVar2 != 0) {
        local_18 = 0;
        param_1 = 0;
        FUN_10004be0(0);
        FUN_10005820(&local_18,&param_1);
        (**(code **)(**(int **)(in_ECX[0xbc] + iVar1 * 4) + 0x148))(local_18,param_1,0);
        FUN_1000cb20(in_ECX[0xb8] + iVar1);
        (**(code **)(*in_ECX + 0x1fc))(iVar1,1);
        this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
        if (this != (UUIScript *)0x0) {
          pFVar3 = (FString *)FUN_1004f9a0(local_2c,iVar1);
          local_8._0_1_ = 1;
          UUIScript::eventOnTabMerge(this,pFVar3);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_2c);
        }
      }
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10050e8f Catch@10050e8f

void Catch_10050e8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10050ea3 Catch@10050ea3

void Catch_10050ea3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::MergeTab");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10050ec0 FUN_10050ec0

void FUN_10050ec0(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0c20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((-1 < *(int *)(in_ECX + 0x2e0)) && (param_1 < *(int *)(in_ECX + 0x2e0))) {
    iVar2 = (**(code **)(**(int **)(param_1 * 4 + *(int *)(in_ECX + 0x2dc)) + 0x6c))();
    if (iVar2 != 0) {
      iVar2 = FUN_10050910(*(undefined4 *)(*(int *)(in_ECX + 0x2f0) + param_1 * 4));
      if (iVar2 == 0) {
        for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x2f4); iVar2 = iVar2 + 1) {
          iVar3 = FUN_1004fd20(iVar2);
          if (iVar3 == 0) {
            piVar1 = *(int **)(*(int *)(in_ECX + 0x2f0) + iVar2 * 4);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 0x13c))();
            }
            FUN_10004d00(1);
          }
        }
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x2f0) + param_1 * 4);
      *(int **)(in_ECX + 0x2ec) = piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))();
      }
      FUN_10004d00(0);
      if (param_2 != '\0') {
        FUN_1000cb20(param_1);
      }
      *(int *)(in_ECX + 0x308) = param_1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10050fe3 Catch@10050fe3

void Catch_10050fe3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10050ff7 Catch@10050ff7

void Catch_10050ff7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::SetTopOrder");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10051020 FUN_10051020

void FUN_10051020(void)

{
  UPackage *pUVar1;
  UObject *pUVar2;
  int iVar3;
  NCWnd *in_ECX;
  undefined4 uStack_44;
  undefined4 uStack_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0c40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UTabHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_1004fde0(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x100510aa;
    appFailAssert("m_pScriptHandle",".\\Src\\NTabControl.cpp",0x243);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 100510de Catch@100510de

void Catch_100510de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100510f2 Catch@100510f2

void Catch_100510f2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10051110 FUN_10051110

void FUN_10051110(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e0c69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 < 0) {
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


// ==== 100511b0 FUN_100511b0

void FUN_100511b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e0c99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 < 0) {
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


// ==== 10051250 FUN_10051250

undefined4 FUN_10051250(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  ushort *puVar5;
  ushort *puVar6;
  int in_ECX;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0cc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x300); iVar2 = iVar2 + 1) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x2fc) + iVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      uVar3 = FUN_10058f70();
      puVar9 = puVar1 + 1;
      FUN_10005c30(puVar9,uVar3);
      piVar4 = (int *)FUN_100d0cb0(puVar9,uVar3);
      if (piVar4 != (int *)0x0) {
        uVar3 = puVar1[0xf];
        uVar10 = puVar1[0xe];
        uVar8 = puVar1[0xd];
        uVar7 = puVar1[0xc];
        puVar5 = FString::operator*((FString *)(puVar1 + 7));
        puVar6 = FString::operator*((FString *)(puVar1 + 4));
        FUN_1004ff30(*puVar1,piVar4,puVar1[10],puVar1[0xb],puVar6,puVar5,uVar7,uVar8,uVar10,uVar3);
        (**(code **)(*piVar4 + 0x120))(0x10000000);
      }
      FUN_1004fbf0(1);
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x300); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x2fc),4,0);
  FUN_10050ec0(0,1);
  ExceptionList = local_10;
  return 1;
}


// ==== 10051359 Catch@10051359

void Catch_10051359(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1005136d Catch@1005136d

void Catch_1005136d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::OnLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10051390 FUN_10051390

undefined4 FUN_10051390(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uStack_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0ce0;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((-1 < *(int *)(in_ECX + 0x2e0)) && (param_1 < *(int *)(in_ECX + 0x2e0))) {
    iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x2dc) + param_1 * 4) + 0x6c))();
    if (iVar1 != 0) {
      local_38 = 0;
      local_3c = 0;
      local_34 = 0;
      local_30 = 0;
      FUN_10058770(&local_3c);
      iVar1 = FUN_1004fd20(param_1);
      if (iVar1 != 0) {
        local_28 = 0;
        local_2c = 0;
        local_24 = 0;
        local_20 = 0;
        iVar1 = FUN_10006230(&local_2c);
        if (iVar1 != 0) {
          iVar1 = FUN_1004fad0(local_2c,local_28,local_24,local_20);
          if (iVar1 != 0) {
            FUN_10050d50(param_1);
          }
        }
      }
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1005149c Catch@1005149c

void Catch_1005149c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100514b0 Catch@100514b0

void Catch_100514b0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabControl::OnTabRelease");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100514d0 FUN_100514d0

void FUN_100514d0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e0d4d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = NCTabControl::vftable;
  in_ECX[0xb6] = 0;
  FArray::FArray((FArray *)(in_ECX + 0xb7));
  local_4._0_1_ = 2;
  in_ECX[0xbb] = 0;
  FArray::FArray((FArray *)(in_ECX + 0xbc));
  local_4 = CONCAT31(local_4._1_3_,4);
  FArray::FArray((FArray *)(in_ECX + 0xbf));
  in_ECX[0xc2] = 0;
  in_ECX[0xc3] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10051580 FUN_10051580

void FUN_10051580(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101e0da2;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCTabControl::vftable;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 2;
  FUN_100511b0(uVar1);
  local_4._0_1_ = 1;
  FUN_10002520();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10051110();
  local_4 = 0xffffffff;
  FUN_10002a70();
  ExceptionList = local_c;
  return;
}


// ==== 10051610 FUN_10051610

void FUN_10051610(byte param_1)

{
  void *in_ECX;
  
  FUN_10051580();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x310);
  }
  return;
}


// ==== 10051650 FUN_10051650

undefined4 FUN_10051650(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x348);
}


// ==== 1005169a Catch@1005169a

void Catch_1005169a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100516ae Catch@100516ae

void Catch_100516ae(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::GetTextColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100516d0 FUN_100516d0

void FUN_100516d0(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0de0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005ee10(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 10051734 Catch@10051734

void Catch_10051734(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10051748 Catch@10051748

void Catch_10051748(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::SetWindowSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10051770 FUN_10051770

void FUN_10051770(undefined4 param_1)

{
  ushort *puVar1;
  int in_ECX;
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
  if (*(int *)(in_ECX + 0x2ec) == 4) {
    puVar1 = FString::operator*((FString *)(in_ECX + 0x2e0));
    FUN_10064790(param_1,0,0,*(undefined4 *)(in_ECX + 0x348),puVar1);
  }
  else {
    iVar5 = *(int *)(in_ECX + 0x2f0);
    if (iVar5 < 8) {
      uVar12 = 0xffffffff;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar2 = *(undefined4 *)(in_ECX + 0x34c);
      uVar4 = 1;
      uVar3 = 0;
      local_20 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x88));
      puVar1 = FString::operator*((FString *)(in_ECX + 0x2e0));
      FUN_100217a0(*(undefined4 *)(in_ECX + 0x2fc),0,*(undefined4 *)(in_ECX + 0x348),puVar1,local_20
                   ,uVar3,uVar4,iVar5,uVar2,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
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
          uVar2 = param_1;
        }
      }
      uVar3 = 0xff;
      puVar1 = FString::operator*((FString *)(in_ECX + 0x2e0));
      FUN_100212f0(uVar2,*(undefined4 *)(in_ECX + 0x2fc),*(undefined4 *)(in_ECX + 0x2f8),
                   *(undefined4 *)(in_ECX + 0x348),puVar1,uVar3);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100518b2 Catch@100518b2

void Catch_100518b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100518c6 Catch@100518c6

void Catch_100518c6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::PaintSingleLine");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100518f0 FUN_100518f0

undefined4 FUN_100518f0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *in_ECX;
  code *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0e20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x108))(param_2 & 0xffff,param_2 >> 0x10);
  if (iVar1 == 0) {
    in_ECX[0xc2] = 0;
    pcVar2 = *(code **)(*in_ECX + 0x170);
  }
  else {
    in_ECX[0xc2] = 1;
    pcVar2 = *(code **)(*in_ECX + 0x16c);
  }
  (*pcVar2)();
  ExceptionList = local_10;
  return 1;
}


// ==== 10051988 Catch@10051988

void Catch_10051988(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005199c Catch@1005199c

void Catch_1005199c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100519c0 FUN_100519c0

void FUN_100519c0(ushort *param_1)

{
  int in_ECX;
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
  if (param_1 != (ushort *)0x0) {
    FString::FString(local_28,param_1);
    local_8._0_1_ = 1;
    FUN_101b8ab0(local_28,in_ECX + 0x30c,0);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10051a54 Catch@10051a54

void Catch_10051a54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10051a68 Catch@10051a68

void Catch_10051a68(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::SetToolTipText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10051a90 UTextBoxHandle::StaticClass

/* public: static class UClass * __cdecl UTextBoxHandle::StaticClass(void) */

UClass * __cdecl UTextBoxHandle::StaticClass(void)

{
                    /* 0x51a90  955  ?StaticClass@UTextBoxHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10051aa0 FUN_10051aa0

void FUN_10051aa0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e0e79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10051af0 FUN_10051af0

void FUN_10051af0(void)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
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
  piVar1 = in_ECX + 0xc0;
  uVar11 = 0;
  uVar10 = 0;
  iVar9 = in_ECX[0xbc];
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  piVar5 = piVar1;
  puVar2 = FString::operator*((FString *)(in_ECX + 0xb8));
  (**(code **)(iVar3 + 0xd0))(puVar2,piVar5,uVar6,uVar7,uVar8,iVar9,uVar10,uVar11);
  in_ECX[0xbf] = 0;
  *piVar1 = *piVar1 + 1;
  iVar3 = *piVar1;
  iVar9 = in_ECX[0xbb];
  if (in_ECX[0xd4] == 0) {
    if (iVar9 != 1) {
      if (iVar9 == 2) {
        uVar4 = FUN_101c19e0();
        in_ECX[0xbf] = uVar4 & ((int)uVar4 < 1) - 1;
        ExceptionList = local_10;
        return;
      }
      if (iVar9 != 3) {
        ExceptionList = local_10;
        return;
      }
      uVar4 = FUN_101c19e0();
      in_ECX[0xbf] = uVar4 & ((int)uVar4 < 1) - 1;
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
    (**(code **)(*in_ECX + 0x144))(in_ECX[0x20] + iVar3,in_ECX[0x21],0);
    FUN_1005ee10((float)*piVar1,(float)in_ECX[0xc1]);
  }
  in_ECX[0xbf] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10051c81 Catch@10051c81

void Catch_10051c81(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10051c95 Catch@10051c95

void Catch_10051c95(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::RefreshTextCoords");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10051cc0 FUN_10051cc0

undefined4 FUN_10051cc0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0ec0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10060350();
  FUN_10051af0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10051d17 Catch@10051d17

void Catch_10051d17(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10051d2b Catch@10051d2b

void Catch_10051d2b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::OnLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10051d50 FUN_10051d50

void FUN_10051d50(void)

{
  ushort *puVar1;
  int *in_ECX;
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
  for (iVar2 = 0; iVar2 < in_ECX[0xd6]; iVar2 = iVar2 + 1) {
    iVar5 = in_ECX[0xbb];
    if (iVar5 == 1) {
      local_1c = 0;
    }
    else if (iVar5 == 2) {
      local_1c = FUN_101c19e0();
    }
    else if (iVar5 == 3) {
      local_1c = FUN_101c19e0();
    }
    iVar5 = in_ECX[0xbc];
    if (iVar5 < 8) {
      uVar13 = 0xffffffff;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      iVar6 = in_ECX[0xd3];
      uVar4 = 1;
      uVar3 = 0;
      local_2c = (undefined4)(longlong)ROUND((float)in_ECX[0x22]);
      puVar1 = FString::operator*((FString *)(in_ECX[0xd8] + iVar2 * 0xc));
      FUN_100217a0(local_1c,in_ECX[0xd7] * iVar2,in_ECX[0xd2],puVar1,local_2c,uVar3,uVar4,iVar5,
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
      puVar1 = FString::operator*((FString *)(in_ECX[0xd8] + iVar2 * 0xc));
      FUN_100212f0(local_20,local_1c,in_ECX[0xbe],in_ECX[0xd2],puVar1,uVar3);
    }
    if (local_1c < local_24) {
      local_24 = local_1c;
    }
  }
  if ((in_ECX[0xd4] != 0) && (in_ECX[0xd5] != 0)) {
    in_ECX[0xd5] = 0;
    (**(code **)(*in_ECX + 0x148))(local_24,0,0);
    (**(code **)(*in_ECX + 0x128))((float)in_ECX[0xc0],(float)in_ECX[0xc1]);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10051f4a Catch@10051f4a

void Catch_10051f4a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_102a47f0);
}


// ==== 10051f5e Catch@10051f5e

void Catch_10051f5e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::PaintMultiLine");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10051f80 FUN_10051f80

undefined4 FUN_10051f80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0f00;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x308) != 0) {
    local_28 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_1005d0a0(&local_2c);
    if (*(int *)(in_ECX + 0xd4) != 0) {
      FUN_100549b0(param_1,in_ECX + 0x30c,0,0,*(undefined4 *)(in_ECX + 0x80),
                   *(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x88),
                   *(undefined4 *)(in_ECX + 0x8c));
    }
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1005208b Catch@1005208b

void Catch_1005208b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005209f Catch@1005209f

void Catch_1005209f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::OnPostPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100520c0 FUN_100520c0

void FUN_100520c0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      FString::~FString((FString *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0xc,param_1);
  return;
}


// ==== 10052100 FUN_10052100

UObject * FUN_10052100(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UTextBoxHandle::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10052130 FUN_10052130

void FUN_10052130(int param_1,int param_2)

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
    iVar1 = param_1 * 0xc;
    iVar2 = iVar2 - param_1;
    do {
      FString::~FString((FString *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0xc);
  return;
}


// ==== 100521d0 FUN_100521d0

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


// ==== 10052426 Catch@10052426

void Catch_10052426(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1005243a Catch@1005243a

void Catch_1005243a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::ParseNewLineCharacter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10052460 FUN_10052460

void FUN_10052460(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0f70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x358) = 0;
  FUN_100520c0(0);
  FArray::Empty((FArray *)(in_ECX + 0x36c),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 100524d4 Catch@100524d4

void Catch_100524d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100524e8 Catch@100524e8

void Catch_100524e8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::InitMultiLine");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10052510 FUN_10052510

void FUN_10052510(void)

{
  UPackage *pUVar1;
  UObject *pUVar2;
  int iVar3;
  NCWnd *in_ECX;
  undefined4 uStack_44;
  undefined4 uStack_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0f90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UTextBoxHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_10052100(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x1005259a;
    appFailAssert("m_pScriptHandle",".\\Src\\NTextBox.cpp",0xf3);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 100525ce Catch@100525ce

void Catch_100525ce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100525e2 Catch@100525e2

void Catch_100525e2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10052600 FUN_10052600

undefined4 FUN_10052600(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e0fb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0();
  FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(in_ECX + 0x2f4),0xff,1);
  iVar3 = FString::operator_int((FString *)(in_ECX + 0x2e0));
  if (iVar3 != 0) {
    if (*(int *)(in_ECX + 0x358) < 2) {
      FUN_10051770(param_1);
    }
    else {
      FUN_10051d50(param_1);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10052704 Catch@10052704

void Catch_10052704(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10052718 Catch@10052718

void Catch_10052718(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10052740 FUN_10052740

void FUN_10052740(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e0fd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10052130(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100527a0 FUN_100527a0

void FUN_100527a0(void)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
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
  if (*(int *)(in_ECX + 0x2d8) == -1) {
    if (*(int *)(in_ECX + 0x2dc) == -1) {
      FString::operator=(local_28,(FString *)(in_ECX + 0x2e0));
      goto LAB_10052840;
    }
    iVar2 = *(int *)(in_ECX + 0x2dc) * 0x5c + 0x240ec;
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x2d8) * 0xc + 0x6a8dc;
  }
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + iVar2));
  FString::operator=(local_28,puVar1);
LAB_10052840:
  FUN_10052460();
  FUN_100521d0(local_28,local_28);
  FString::operator=((FString *)(in_ECX + 0x2e0),local_28);
  *(undefined4 *)(in_ECX + 0x354) = *(undefined4 *)(in_ECX + 0x350);
  iVar2 = FString::operator_int((FString *)(in_ECX + 0x2e0));
  if (iVar2 != 0) {
    FUN_10051af0();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100528ac Catch@100528ac

void Catch_100528ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100528c0 Catch@100528c0

void Catch_100528c0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::SetProperText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100528e0 FUN_100528e0

undefined4 FUN_100528e0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1030;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100597e0();
  FUN_100527a0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10052937 Catch@10052937

void Catch_10052937(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005294b Catch@1005294b

void Catch_1005294b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::OnLanguageChanged");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10052970 FUN_10052970

void FUN_10052970(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1059;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)(in_ECX + 0x2d8) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x2dc) = 0xffffffff;
  FString::operator=((FString *)(in_ECX + 0x2e0),(FString *)&stack0x00000004);
  FUN_100527a0();
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100529ee Catch@100529ee

void Catch_100529ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10052a02 Catch@10052a02

void Catch_10052a02(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::SetText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10052a20 FUN_10052a20

void FUN_10052a20(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e10d3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100031f0();
  local_8 = 0;
  *in_ECX = NCTextBox::vftable;
  FString::FString((FString *)(in_ECX + 0xb8));
  local_8._0_1_ = 1;
  FUN_10054da0();
  local_8._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0xd8));
  local_8._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 0xdb));
  local_8 = CONCAT31(local_8._1_3_,7);
  FString::operator=((FString *)(in_ECX + 0xb8),(ushort *)&DAT_1022f9f8);
  in_ECX[0xbd] = 0;
  in_ECX[0xbe] = 0;
  in_ECX[0xc2] = 0;
  in_ECX[0xd2] = 0xffdcdcdc;
  in_ECX[0xb6] = 0xffffffff;
  in_ECX[0xb7] = 0xffffffff;
  in_ECX[0xd3] = 0;
  in_ECX[0xd4] = 0;
  in_ECX[0xd5] = 0;
  FUN_10052460();
  ExceptionList = local_10;
  return;
}


// ==== 10052b13 Catch@10052b13

void Catch_10052b13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10052b27 Catch@10052b27

void Catch_10052b27(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::NCTextBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10052b50 FUN_10052b50

void FUN_10052b50(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101e1131;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCTextBox::vftable;
  local_4 = 4;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 3;
  FUN_10039be0(uVar1);
  local_4._0_1_ = 2;
  FUN_10052740();
  local_4._0_1_ = 1;
  FUN_10054e80();
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x2e0));
  local_4 = 0xffffffff;
  FUN_10002a70();
  ExceptionList = local_c;
  return;
}


// ==== 10052bf0 FUN_10052bf0

void FUN_10052bf0(byte param_1)

{
  void *in_ECX;
  
  FUN_10052b50();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x378);
  }
  return;
}


// ==== 10052c20 FUN_10052c20

void FUN_10052c20(void)

{
  int iVar1;
  ushort *puVar2;
  undefined4 *in_ECX;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e11b5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_100031f0();
  local_8._0_1_ = 2;
  *in_ECX = NCTextBox::vftable;
  FString::FString((FString *)(in_ECX + 0xb8));
  local_8._0_1_ = 3;
  FUN_10054da0();
  local_8._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 0xd8));
  local_8._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0xdb));
  local_8 = CONCAT31(local_8._1_3_,9);
  FString::operator=((FString *)(in_ECX + 0xb8),(FString *)&stack0x00000004);
  in_ECX[0xbb] = in_stack_00000010;
  in_ECX[0xbc] = in_stack_00000014;
  iVar1 = FString::Len((FString *)&stack0x00000018);
  if (0 < iVar1) {
    uVar3 = 1;
    puVar2 = FString::operator*((FString *)&stack0x00000018);
    uVar3 = FUN_1003f630(puVar2,uVar3);
    in_ECX[0xbd] = uVar3;
  }
  in_ECX[0xbe] = in_stack_00000024;
  in_ECX[0xc2] = 0;
  in_ECX[0xd3] = in_stack_00000034;
  in_ECX[0xd4] = in_stack_00000038;
  in_ECX[0xb6] = in_stack_00000028;
  in_ECX[0xb7] = in_stack_0000002c;
  in_ECX[0xd2] = in_stack_00000030;
  FUN_100527a0();
  local_8 = 0;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000018);
  ExceptionList = local_10;
  return;
}


// ==== 10052d72 Catch@10052d72

void Catch_10052d72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10052d86 Catch@10052d86

void Catch_10052d86(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextBox::NCTextBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10052dc0 FUN_10052dc0

void FUN_10052dc0(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e11d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10058dc0(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10052e16 Catch@10052e16

void Catch_10052e16(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10052e2a Catch@10052e2a

void Catch_10052e2a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::SetWindowStyle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10052e50 FUN_10052e50

undefined4 FUN_10052e50(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e11f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  (**(code **)(*in_ECX + 0x1fc))(&stack0x00000004);
  if (in_ECX[0xbf] == 0) {
    local_8 = 0xffffffff;
    FString::~FString((FString *)&stack0x00000004);
    ExceptionList = local_10;
    return 0;
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return 1;
}


// ==== 10052ef0 Catch@10052ef0

void Catch_10052ef0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10052f04 Catch@10052f04

void Catch_10052f04(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::SetTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10052f30 FUN_10052f30

undefined4 FUN_10052f30(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2fc) = param_1;
  return 1;
}


// ==== 10052f84 Catch@10052f84

void Catch_10052f84(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10052f98 Catch@10052f98

void Catch_10052f98(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::SetTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10052fc0 FUN_10052fc0

void FUN_10052fc0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2ec) = param_1;
  return;
}


// ==== 10053016 Catch@10053016

void Catch_10053016(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005302a Catch@1005302a

void Catch_1005302a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::SetTextureWithPledgeCrest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10053050 FUN_10053050

undefined4 FUN_10053050(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x2fc);
}


// ==== 1005309a Catch@1005309a

void Catch_1005309a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100530ae Catch@100530ae

void Catch_100530ae(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::GetTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100530d0 FUN_100530d0

void FUN_100530d0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2ec) = param_1;
  return;
}


// ==== 10053126 Catch@10053126

void Catch_10053126(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005313a Catch@1005313a

void Catch_1005313a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::SetPledgeID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10053160 FUN_10053160

undefined4 FUN_10053160(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x2ec);
}


// ==== 100531aa Catch@100531aa

void Catch_100531aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100531be Catch@100531be

void Catch_100531be(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::GetPledgeID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100531e0 FUN_100531e0

void FUN_100531e0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2d8) = param_1;
  return;
}


// ==== 10053236 Catch@10053236

void Catch_10053236(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005324a Catch@1005324a

void Catch_1005324a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::SetTextureCtrlType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10053270 FUN_10053270

undefined4 FUN_10053270(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x2d8);
}


// ==== 100532ba Catch@100532ba

void Catch_100532ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100532ce Catch@100532ce

void Catch_100532ce(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::GetTextureCtrlType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100532f0 FUN_100532f0

void FUN_100532f0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2dc) = param_1;
  return;
}


// ==== 10053346 Catch@10053346

void Catch_10053346(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005335a Catch@1005335a

void Catch_1005335a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::SetU");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10053380 FUN_10053380

void FUN_10053380(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2e0) = param_1;
  return;
}


// ==== 100533d6 Catch@100533d6

void Catch_100533d6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100533ea Catch@100533ea

void Catch_100533ea(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::SetV");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10053410 FUN_10053410

void FUN_10053410(int param_1)

{
  int in_ECX;
  
  *(float *)(in_ECX + 0x2e4) = (float)param_1;
  *(float *)(in_ECX + 0x2e8) = (float)param_1;
  return;
}


// ==== 10053474 Catch@10053474

void Catch_10053474(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10053488 Catch@10053488

void Catch_10053488(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::SetTextureSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100534b0 FUN_100534b0

undefined4 FUN_100534b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1360;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d800(param_1,param_2);
  iVar1 = FUN_10053270();
  if (iVar1 == 3) {
    FUN_10145690();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10053523 Catch@10053523

void Catch_10053523(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10053537 Catch@10053537

void Catch_10053537(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10053560 FUN_10053560

undefined4 FUN_10053560(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1380;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(in_ECX + 0x2f4) = (int)(short)param_2;
  *(int *)(in_ECX + 0x2f8) = (int)(short)((uint)param_2 >> 0x10);
  FUN_1005d6f0(param_1,param_2);
  ExceptionList = local_10;
  return 1;
}


// ==== 100535cf Catch@100535cf

void Catch_100535cf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100535e3 Catch@100535e3

void Catch_100535e3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10053600 FUN_10053600

void FUN_10053600(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e13a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::operator_int(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x2fc) = 0;
  }
  else {
    uVar3 = 1;
    puVar2 = FString::operator*(param_1);
    uVar3 = FUN_1003f630(puVar2,uVar3);
    *(undefined4 *)(in_ECX + 0x2fc) = uVar3;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10053682 Catch@10053682

void Catch_10053682(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10053696 Catch@10053696

void Catch_10053696(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::CreateTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100536c0 UTextureHandle::StaticClass

/* public: static class UClass * __cdecl UTextureHandle::StaticClass(void) */

UClass * __cdecl UTextureHandle::StaticClass(void)

{
                    /* 0x536c0  957  ?StaticClass@UTextureHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 100536d0 FUN_100536d0

int FUN_100536d0(int param_1,int param_2,int param_3)

{
  if ((param_2 <= param_1) && (param_2 = param_3, param_1 < param_3)) {
    param_2 = param_1;
  }
  return param_2;
}


// ==== 100536f0 FUN_100536f0

void FUN_100536f0(int param_1)

{
  int in_ECX;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0xfe < param_1) {
    param_1 = 0xff;
  }
  *(int *)(in_ECX + 0x2f0) = param_1;
  return;
}


// ==== 1005375a Catch@1005375a

void Catch_1005375a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005376e Catch@1005376e

void Catch_1005376e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::SetTextureAlpha");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10053790 FUN_10053790

undefined4 FUN_10053790(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
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
  iVar6 = in_ECX[0x20];
  local_18 = local_48;
  if (local_48 < iVar6) {
    local_18 = iVar6;
  }
  local_28 = (float)in_ECX[0x21];
  fVar3 = local_44;
  if ((int)local_44 < (int)local_28) {
    fVar3 = local_28;
  }
  local_2c = (float)iVar6;
  if ((float)local_48 + local_40 <= local_2c + (float)in_ECX[0x22]) {
    uVar1 = FUN_101c19e0();
  }
  else {
    uVar1 = FUN_101c19e0();
  }
  local_2c = (float)(int)local_28;
  if ((float)(int)local_44 + local_3c <= local_2c + (float)in_ECX[0x23]) {
    uVar2 = FUN_101c19e0();
  }
  else {
    uVar2 = FUN_101c19e0();
  }
  FUN_10021df0(local_18,fVar3,uVar1,uVar2);
  FUN_10002f40(in_ECX[0x20],in_ECX[0x21]);
  local_18 = (**(code **)(*in_ECX + 0x1f8))();
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
      uVar7 = (uint)*(byte *)(in_ECX + 0xbc);
      iVar6 = in_ECX[0xb8];
      iVar5 = in_ECX[0xb7];
      iVar8 = local_18;
      uVar1 = FUN_101c19e0(iVar5,iVar6,fVar3,fVar4,local_18,uVar7,1);
      uVar2 = FUN_101c19e0(uVar1);
      FUN_10021a00(0,0,uVar2,uVar1,iVar5,iVar6,fVar3,fVar4,iVar8,uVar7,uVar9);
      break;
    case 1:
    case 4:
      FUN_10021a00(0,0,fVar3,fVar4,in_ECX[0xb7],in_ECX[0xb8],fVar3,fVar4,local_18,(char)in_ECX[0xbc]
                   ,1);
      break;
    case 2:
      local_28 = (float)in_ECX[0x22] / (float)(int)local_28;
      local_2c = (float)in_ECX[0x23] / (float)(int)local_2c;
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
          FUN_10021a00(local_24 * (int)fVar3,local_30 * (int)fVar4,fVar3,fVar4,in_ECX[0xb7],
                       in_ECX[0xb8],fVar3,fVar4,local_18,(char)in_ECX[0xbc],1);
        }
      }
      break;
    case 3:
      uVar1 = FUN_101c19e0();
      iVar6 = FUN_100536d0(in_ECX[0xb7],0,uVar1);
      in_ECX[0xb7] = iVar6;
      uVar1 = FUN_101c19e0();
      iVar5 = FUN_100536d0(in_ECX[0xb8],0,uVar1);
      in_ECX[0xb8] = iVar5;
      local_2c = (float)FUN_101c19e0();
      uVar1 = FUN_101c19e0();
      FUN_10021a00(0,0,uVar1,local_2c,iVar6,iVar5,uVar1,local_2c,local_18,(char)in_ECX[0xbc],1);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10053b40 Catch@10053b40

void Catch_10053b40(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_102a47f0);
}


// ==== 10053b54 Catch@10053b54

void Catch_10053b54(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10053b90 FUN_10053b90

undefined4 FUN_10053b90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1400;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0xd4) != 0) {
    FUN_10054680(param_1,*(int *)(in_ECX + 0xd4) + 0x24,0,0,*(undefined4 *)(in_ECX + 0x80),
                 *(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x88),
                 *(undefined4 *)(in_ECX + 0x8c));
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 0;
}


// ==== 10053c6e Catch@10053c6e

void Catch_10053c6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10053c82 Catch@10053c82

void Catch_10053c82(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::OnPostPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10053ca0 FUN_10053ca0

undefined4 FUN_10053ca0(uint param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uStack_40;
  int local_30;
  int local_2c;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1420;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d5d0(param_1,param_2);
  if ((param_1 & 1) != 0) {
    iVar3 = FUN_10053270();
    if (iVar3 == 3) {
      iVar4 = (int)(short)((uint)param_2 >> 0x10);
      iVar3 = *(int *)(in_ECX + 0x2dc);
      iVar1 = *(int *)(in_ECX + 0x2e0);
      local_20 = (int)(short)param_2;
      local_18 = iVar3;
      uVar5 = FUN_101c19e0();
      uVar5 = FUN_100536d0((*(int *)(in_ECX + 0x2f4) - (int)(short)param_2) + iVar3,0,uVar5);
      *(undefined4 *)(in_ECX + 0x2dc) = uVar5;
      uVar5 = FUN_101c19e0();
      uVar5 = FUN_100536d0((*(int *)(in_ECX + 0x2f8) - iVar4) + iVar1,0,uVar5);
      *(undefined4 *)(in_ECX + 0x2e0) = uVar5;
      for (iVar3 = 0; local_1c = iVar3, iVar3 < *(int *)(in_ECX + 0x198); iVar3 = iVar3 + 1) {
        piVar2 = *(int **)(*(int *)(in_ECX + 0x194) + iVar3 * 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xe0))(&local_30);
          local_30 = local_30 + (local_18 - *(int *)(in_ECX + 0x2dc));
          local_2c = local_2c + (iVar1 - *(int *)(in_ECX + 0x2e0));
          (**(code **)(*piVar2 + 0xdc))(local_30,local_2c);
          FUN_1005a5c0();
        }
      }
      *(int *)(in_ECX + 0x2f4) = local_20;
      *(int *)(in_ECX + 0x2f8) = iVar4;
      FUN_1003f8b0(3,0,0);
      FUN_10145680();
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10053e1f Catch@10053e1f

void Catch_10053e1f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10053e33 Catch@10053e33

void Catch_10053e33(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10053e50 FUN_10053e50

void FUN_10053e50(void)

{
  UPackage *pUVar1;
  UObject *pUVar2;
  int iVar3;
  NCWnd *in_ECX;
  undefined4 uStack_44;
  undefined4 uStack_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1440;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UTextureHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_10002070(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x10053eda;
    appFailAssert("m_pScriptHandle",".\\Src\\NTextureCtrl.cpp",0x162);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10053f0e Catch@10053f0e

void Catch_10053f0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10053f22 Catch@10053f22

void Catch_10053f22(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10053f40 FUN_10053f40

void FUN_10053f40(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e1468;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100031f0();
  *in_ECX = NCTextureCtrl::vftable;
  in_ECX[0xb8] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0xba] = 0;
  local_8 = 1;
  in_ECX[0xbf] = 0;
  FUN_100531e0(0);
  FUN_100530d0(0);
  in_ECX[0xbd] = 0;
  in_ECX[0xbe] = 0;
  in_ECX[0xbc] = 0xff;
  ExceptionList = local_10;
  return;
}


// ==== 10053fe5 Catch@10053fe5

void Catch_10053fe5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10053ff9 Catch@10053ff9

void Catch_10053ff9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::NCTextureCtrl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10054020 FUN_10054020

void FUN_10054020(void)

{
  undefined4 *in_ECX;
  undefined4 in_stack_00000010;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e14a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100031f0();
  *in_ECX = NCTextureCtrl::vftable;
  in_ECX[0xb8] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0xba] = 0;
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
  FUN_100531e0(in_stack_00000010);
  FUN_10053600(&stack0x00000004);
  in_ECX[0xbc] = 0xff;
  FUN_1001d9e0(&stack0x00000014);
  FUN_100530d0(0);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100540df Catch@100540df

void Catch_100540df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100540f3 Catch@100540f3

void Catch_100540f3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTextureCtrl::NCTextureCtrl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10054120 FUN_10054120

void FUN_10054120(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e14c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10065570(in_ECX + 0x2c,in_ECX + 4,in_ECX + 0x14,*(undefined4 *)(in_ECX + 0x24),
               *(undefined4 *)(in_ECX + 0x28));
  ExceptionList = local_10;
  return;
}


// ==== 10054187 Catch@10054187

void Catch_10054187(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005419b Catch@1005419b

void Catch_1005419b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"TooltipInfo::CalculateSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100541c0 FUN_100541c0

undefined4 FUN_100541c0(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


// ==== 10054206 Catch@10054206

void Catch_10054206(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005421a Catch@1005421a

void Catch_1005421a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"TooltipInfo::IsExistTooltipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10054240 FUN_10054240

undefined4 FUN_10054240(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}


// ==== 10054287 Catch@10054287

void Catch_10054287(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005429b Catch@1005429b

void Catch_1005429b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"TooltipInfo::GetLanguageVer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100542c0 FUN_100542c0

void FUN_100542c0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  return;
}


// ==== 10054313 Catch@10054313

void Catch_10054313(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10054327 Catch@10054327

void Catch_10054327(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"TooltipInfo::SetLanguageVer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10054350 FDrawItemInfo::~FDrawItemInfo

/* public: __thiscall FDrawItemInfo::~FDrawItemInfo(void) */

void __thiscall FDrawItemInfo::~FDrawItemInfo(FDrawItemInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x54350  218  ??1FDrawItemInfo@@QAE@XZ */
  puStack_8 = &LAB_101e1564;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x48));
  local_4 = local_4 & 0xffffff00;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x3c));
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x18));
  ExceptionList = local_c;
  return;
}


// ==== 100543c0 FDrawItemInfo::operator=

/* public: struct FDrawItemInfo & __thiscall FDrawItemInfo::operator=(struct FDrawItemInfo const &)
    */

FDrawItemInfo * __thiscall FDrawItemInfo::operator=(FDrawItemInfo *this,FDrawItemInfo *param_1)

{
                    /* 0x543c0  498  ??4FDrawItemInfo@@QAEAAU0@ABU0@@Z */
  *this = *param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(uint *)(this + 0xc) =
       *(uint *)(this + 0xc) ^ (*(uint *)(param_1 + 0xc) ^ *(uint *)(this + 0xc)) & 1;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  FStringNoInit::operator=((FStringNoInit *)(this + 0x18),(FStringNoInit *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(uint *)(this + 0x28) =
       *(uint *)(this + 0x28) ^ (*(uint *)(param_1 + 0x28) ^ *(uint *)(this + 0x28)) & 1;
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FStringNoInit::operator=((FStringNoInit *)(this + 0x3c),(FStringNoInit *)(param_1 + 0x3c));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x48),(FStringNoInit *)(param_1 + 0x48));
  return this;
}


// ==== 10054450 FUN_10054450

void FUN_10054450(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  uint uStack_88;
  FDrawItemInfo local_78 [92];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e1588;
  local_10 = ExceptionList;
  uStack_88 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_88;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = in_ECX;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x30); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x2c) + iVar2 * 4);
    if (iVar1 != 0) {
      local_1c = iVar2;
      FArray::AddZeroed((FArray *)(param_1 + 8),0x54,1);
      FDrawItemInfo::FDrawItemInfo(local_78);
      local_8._0_1_ = 1;
      FUN_100633a0(iVar1,local_78);
      FDrawItemInfo::operator=((FDrawItemInfo *)(iVar2 * 0x54 + *(int *)(param_1 + 8)),local_78);
      local_8 = (uint)local_8._1_3_ << 8;
      FDrawItemInfo::~FDrawItemInfo(local_78);
      in_ECX = local_18;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100544ff Catch@100544ff

void Catch_100544ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10054513 Catch@10054513

void Catch_10054513(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"TooltipInfo::GetCustomTooltipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10054530 FUN_10054530

int FUN_10054530(FString *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uStack_58;
  FString local_48 [24];
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e15ca;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  local_18 = in_ECX;
  do {
    if (*(int *)(in_ECX + 0x30) <= iVar3) {
      ExceptionList = local_10;
      return 0;
    }
    iVar1 = *(int *)(*(int *)(in_ECX + 0x2c) + iVar3 * 4);
    if (iVar1 != 0) {
      local_1c = iVar3;
      FUN_1003fa00(iVar1 + 0x4c);
      local_8._0_1_ = 1;
      FString::FString(local_30);
      local_8._0_1_ = 2;
      FString::FString(local_48,(ushort *)L"Type");
      local_8._0_1_ = 3;
      iVar2 = FUN_100406e0(local_48,local_30);
      local_8._0_1_ = 2;
      FString::~FString(local_48);
      if (iVar2 != 0) {
        iVar2 = FString::operator==(local_30,param_1);
        if (iVar2 != 0) {
          local_8._0_1_ = 1;
          FString::~FString(local_30);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_1003fff0();
          ExceptionList = local_10;
          return iVar1;
        }
      }
      local_8._0_1_ = 1;
      FString::~FString(local_30);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
      in_ECX = local_18;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== 10054649 Catch@10054649

void Catch_10054649(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1005465d Catch@1005465d

void Catch_1005465d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"TooltipInfo::GetDrawItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10054680 FUN_10054680

void FUN_10054680(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  float10 extraout_ST0;
  float10 fVar3;
  uint uStack_48;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e15f0;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  local_34 = 0;
  local_38 = 0;
  local_30 = 0.0;
  local_2c = 0.0;
  if (*(int *)(DAT_103663bc + 0x50ac) == 0) {
    local_38 = 0;
    local_34 = 0;
    local_30 = (float)*(int *)GSEKScreenX_exref;
    local_2c = (float)*(int *)GSEKScreenY_exref;
    local_14 = (undefined1 *)&uStack_48;
  }
  else {
    FUN_1005d0a0(&local_38);
  }
  fVar3 = (float10)0;
  local_20 = 0;
  local_1c = 0;
  if (fVar3 < (float10)*(float *)(param_2 + 0xc)) {
    local_1c = FUN_101c19e0();
    fVar3 = extraout_ST0;
  }
  if (fVar3 < (float10)*(float *)(param_2 + 0x10)) {
    local_20 = FUN_101c19e0();
  }
  iVar2 = param_5 + local_1c;
  iVar1 = FUN_101c19e0();
  if (iVar1 < iVar2 + param_3) {
    iVar2 = FUN_101c19e0();
    param_3 = param_3 - iVar2;
  }
  else if (param_5 + param_3 < 0) {
    param_3 = -param_5;
  }
  param_4 = param_4 - local_20;
  if (param_6 + param_4 < 0) {
    param_4 = param_4 + 0x20 + local_20;
  }
  FUN_10021df0(param_5 + param_3,param_6 + param_4,local_1c,local_20);
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
  FUN_10068be0(param_1,param_2 + 0x2c,param_3 + 5,param_4 + 5,*(undefined4 *)(param_2 + 0x24),0);
  FUN_100212e0();
  ExceptionList = local_10;
  return;
}


// ==== 10054973 Catch@10054973

void Catch_10054973(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10054987 Catch@10054987

void Catch_10054987(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTooltip::DrawTooltip");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100549b0 FUN_100549b0

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


// ==== 10054c87 Catch@10054c87

void Catch_10054c87(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10054c9b Catch@10054c9b

void Catch_10054c9b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTooltip::DrawSimpleTooltip");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10054cc0 FUN_10054cc0

void FUN_10054cc0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *in_ECX = 0;
  in_ECX[4] = 0;
  in_ECX[3] = 0;
  in_ECX[8] = 0;
  in_ECX[7] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 1;
  in_ECX[0xe] = 0;
  for (iVar1 = 0; iVar1 < (int)in_ECX[0xc]; iVar1 = iVar1 + 1) {
    if (*(int *)(in_ECX[0xb] + iVar1 * 4) != 0) {
      FUN_10012830(1);
    }
  }
  for (iVar1 = 0; iVar1 < (int)in_ECX[0xc]; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0xb),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 10054d65 Catch@10054d65

void Catch_10054d65(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10054d79 Catch@10054d79

void Catch_10054d79(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"TooltipInfo::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10054da0 FUN_10054da0

void FUN_10054da0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e1664;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  in_ECX[5] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  FArray::FArray((FArray *)(in_ECX + 0xb));
  local_8 = 2;
  *in_ECX = 0;
  for (iVar1 = 0; iVar1 < (int)in_ECX[0xc]; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0xb),4,0);
  in_ECX[9] = 0;
  in_ECX[10] = 1;
  in_ECX[0xe] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10054e49 Catch@10054e49

void Catch_10054e49(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10054e5d Catch@10054e5d

void Catch_10054e5d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"TooltipInfo::TooltipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10054e80 FUN_10054e80

void FUN_10054e80(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e168b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_10054cc0();
  local_8 = 0xffffffff;
  FUN_10012cb0();
  ExceptionList = local_10;
  return;
}


// ==== 10054ee1 Catch@10054ee1

void Catch_10054ee1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10054ef5 Catch@10054ef5

void Catch_10054ef5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"TooltipInfo::~TooltipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10054f20 FUN_10054f20

void FUN_10054f20(int *param_1)

{
  int iVar1;
  undefined4 *in_ECX;
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
  *in_ECX = 1;
  while( true ) {
    if (param_1[3] <= iVar3) break;
    iVar2 = iVar3 * 0x54 + param_1[2];
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
  if (0 < *param_1) {
    in_ECX[9] = *param_1;
  }
  if (0 < param_1[1]) {
    in_ECX[10] = param_1[1];
  }
  FUN_10054120();
  ExceptionList = local_10;
  return;
}


// ==== 10054fe9 Catch@10054fe9

void Catch_10054fe9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10054ffd Catch@10054ffd

void Catch_10054ffd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"TooltipInfo::SetTooltipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10055020 FUN_10055020

void FUN_10055020(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  uint uStack_78;
  ushort local_58 [32];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e16eb;
  local_10 = ExceptionList;
  uStack_78 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_78;
  ExceptionList = &local_10;
  local_18 = uStack_78;
  FUN_10054da0();
  local_8 = 1;
  for (iVar2 = 1; iVar2 < 10; iVar2 = iVar2 + 1) {
    appSprintf(local_58,(ushort *)L"L2UI_ch3.Tooltip.Tooltip%d",iVar2);
    uVar1 = FUN_1003f630(local_58,1);
    *(undefined4 *)(in_ECX + -4 + iVar2 * 4) = uVar1;
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100550d0 Catch@100550d0

void Catch_100550d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -100);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x58,&DAT_102a47f0);
}


// ==== 100550e4 Catch@100550e4

void Catch_100550e4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTooltip::NCTooltip");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10055110 FUN_10055110

void FUN_10055110(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e171b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_10054cc0();
  local_8 = 0xffffffff;
  FUN_10054e80();
  ExceptionList = local_10;
  return;
}


// ==== 10055173 Catch@10055173

void Catch_10055173(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10055187 Catch@10055187

void Catch_10055187(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTooltip::~NCTooltip");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100551b0 FUN_100551b0

undefined4 FUN_100551b0(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1740;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  (**(code **)(*in_ECX + 0x1fc))();
  ExceptionList = local_10;
  return 1;
}


// ==== 1005520c Catch@1005520c

void Catch_1005520c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10055220 Catch@10055220

void Catch_10055220(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTree::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10055240 FUN_10055240

void FUN_10055240(void)

{
  undefined4 *in_ECX;
  
  in_ECX[0xa06] = 0;
  in_ECX[0xa07] = 0;
  in_ECX[0xa05] = 0;
  in_ECX[0xa04] = 0;
  in_ECX[0xa0a] = 0;
  in_ECX[0xa0b] = 0;
  in_ECX[0xa09] = 0;
  in_ECX[0xa08] = 0;
  in_ECX[0xa0e] = 0;
  in_ECX[0xa0f] = 0;
  in_ECX[0xa0d] = 0;
  in_ECX[0xa0c] = 0;
  *in_ECX = 0xffffffff;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  *(undefined2 *)(in_ECX + 0x204) = 0;
  *(undefined2 *)(in_ECX + 0x604) = 0;
  *(undefined2 *)(in_ECX + 0x804) = 0;
  in_ECX[0xa14] = 0;
  in_ECX[0xa15] = 0;
  in_ECX[0xa16] = 0;
  in_ECX[0xa10] = 0;
  in_ECX[0xa11] = 0;
  in_ECX[0xa13] = 1;
  return;
}


// ==== 100552e0 FUN_100552e0

void FUN_100552e0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  puVar3 = in_ECX + 4;
  iVar2 = (int)param_1 - (int)in_ECX;
  iVar4 = 0x400;
  do {
    *(undefined2 *)puVar3 = *(undefined2 *)(iVar2 + (int)puVar3);
    puVar3 = (undefined4 *)((int)puVar3 + 2);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = in_ECX + 0x204;
  iVar4 = 0x800;
  do {
    *(undefined2 *)puVar3 = *(undefined2 *)((int)puVar3 + iVar2);
    puVar3 = (undefined4 *)((int)puVar3 + 2);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = in_ECX + 0x604;
  iVar4 = 0x400;
  do {
    *(undefined2 *)puVar3 = *(undefined2 *)((int)puVar3 + iVar2);
    puVar3 = (undefined4 *)((int)puVar3 + 2);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = in_ECX + 0x804;
  iVar4 = 0x400;
  do {
    *(undefined2 *)puVar3 = *(undefined2 *)((int)puVar3 + iVar2);
    puVar3 = (undefined4 *)((int)puVar3 + 2);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar1 = param_1[0xa04];
  in_ECX[0xa05] = param_1[0xa05];
  in_ECX[0xa04] = uVar1;
  in_ECX[0xa06] = param_1[0xa06];
  in_ECX[0xa07] = param_1[0xa07];
  uVar1 = param_1[0xa08];
  in_ECX[0xa09] = param_1[0xa09];
  in_ECX[0xa08] = uVar1;
  in_ECX[0xa0a] = param_1[0xa0a];
  in_ECX[0xa0b] = param_1[0xa0b];
  uVar1 = param_1[0xa0c];
  in_ECX[0xa0d] = param_1[0xa0d];
  in_ECX[0xa0c] = uVar1;
  in_ECX[0xa0e] = param_1[0xa0e];
  in_ECX[0xa0f] = param_1[0xa0f];
  in_ECX[0xa10] = param_1[0xa10];
  in_ECX[0xa11] = param_1[0xa11];
  in_ECX[0xa12] = param_1[0xa12];
  in_ECX[0xa13] = param_1[0xa13];
  in_ECX[0xa14] = param_1[0xa14];
  in_ECX[0xa15] = param_1[0xa15];
  in_ECX[0xa16] = param_1[0xa16];
  return;
}


// ==== 10055470 FUN_10055470

void FUN_10055470(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = 0;
  *(undefined4 *)(in_ECX + 0x2870) = 1;
  if (0 < *(int *)(in_ECX + 0x2864)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x2860) + iVar2 * 4);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x2878) = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x2864));
  }
  return;
}


// ==== 100554b0 FUN_100554b0

void FUN_100554b0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = 0;
  *(undefined4 *)(in_ECX + 0x2870) = 0;
  if (0 < *(int *)(in_ECX + 0x2864)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x2860) + iVar2 * 4);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x2878) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x2864));
  }
  return;
}


// ==== 100554f0 FUN_100554f0

int FUN_100554f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x285c), iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 0x2864);
    iVar3 = 0;
    if (0 < iVar2) {
      piVar4 = *(int **)(iVar1 + 0x2860);
      do {
        if ((param_1 == *piVar4) && (iVar3 + 1 < iVar2)) {
          return (*(int **)(iVar1 + 0x2860))[iVar3 + 1];
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar2);
    }
  }
  return 0;
}


// ==== 10055550 FUN_10055550

undefined4 FUN_10055550(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (0 < *(int *)(param_1 + 0x2864))) {
    return **(undefined4 **)(param_1 + 0x2860);
  }
  uVar1 = FUN_100554f0();
  return uVar1;
}


// ==== 10055580 FUN_10055580

undefined4 FUN_10055580(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
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
  FUN_10002f40(in_ECX[0x20],in_ECX[0x21]);
  if (*(int *)(*(int *)(in_ECX[0x2e] + 0xc) + 4) != 0) {
    local_28 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_10058770(&local_2c);
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021df0(in_ECX[0x20],in_ECX[0xbd] + in_ECX[0x21],uVar2,uVar1);
    iVar3 = (**(code **)(*in_ECX + 0x200))(param_1,in_ECX[0xb6],0,0);
    in_ECX[0xbc] = iVar3;
    (**(code **)(*in_ECX + 0x128))(in_ECX[0x22],(float)iVar3);
    FUN_100212e0();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1005568b Catch@1005568b

void Catch_1005568b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005569f Catch@1005569f

void Catch_1005569f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTree::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100556c0 FUN_100556c0

int FUN_100556c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 != 0) && (*(int *)(param_3 + 0x2878) != 0)) {
    iVar3 = *(int *)(param_3 + 0x2830);
    iVar2 = param_3;
    if (((((param_1 < iVar3) || (iVar1 = FUN_101c19e0(), iVar1 + iVar3 <= param_1)) ||
         (iVar3 = *(int *)(param_3 + 0x2834), param_2 < iVar3)) ||
        (iVar1 = FUN_101c19e0(), iVar1 + iVar3 <= param_2)) &&
       (((iVar3 = *(int *)(param_3 + 0x2810), param_1 < iVar3 ||
         (iVar1 = FUN_101c19e0(), iVar1 + iVar3 <= param_1)) ||
        ((iVar3 = *(int *)(param_3 + 0x2814), param_2 < iVar3 ||
         (iVar1 = FUN_101c19e0(), iVar1 + iVar3 <= param_2)))))) {
      iVar3 = 0;
      iVar2 = 0;
      if (0 < *(int *)(param_3 + 0x2864)) {
        while (iVar2 = FUN_100556c0(param_1,param_2,
                                    *(undefined4 *)(*(int *)(param_3 + 0x2860) + iVar3 * 4)),
              iVar2 == 0) {
          iVar3 = iVar3 + 1;
          if (*(int *)(param_3 + 0x2864) <= iVar3) {
            return 0;
          }
        }
      }
    }
    return iVar2;
  }
  return 0;
}


// ==== 100557b0 FUN_100557b0

undefined4 FUN_100557b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = FUN_100556c0((short)param_2 - *(short *)(in_ECX + 0x80),
                       (short)((uint)param_2 >> 0x10) - *(short *)(in_ECX + 0x84),
                       *(undefined4 *)(in_ECX + 0x2d8));
  if (iVar2 != 0) {
    iVar1 = *(int *)(in_ECX + 0x2e8);
    if (iVar2 != iVar1) {
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x287c) = 0;
      }
      *(undefined4 *)(iVar2 + 0x287c) = 1;
      *(int *)(in_ECX + 0x2e8) = iVar2;
    }
    if (*(int *)(iVar2 + 0x2870) != 0) {
      FUN_100554b0();
      return 1;
    }
    FUN_10055470();
  }
  return 1;
}


// ==== 10055840 FUN_10055840

undefined4 FUN_10055840(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4) != 0) {
    local_8 = 0.0;
    local_4 = 0.0;
    local_c = 0;
    local_10 = 0;
    FUN_10058770(&local_10);
    if ((*(int *)(in_ECX + 0x80) < (int)(param_2 & 0xffff)) &&
       ((float)(param_2 & 0xffff) <= (float)*(int *)(in_ECX + 0x80) + local_8)) {
      iVar1 = *(int *)(in_ECX + 0x2f4) + *(int *)(in_ECX + 0x84);
      if ((iVar1 < (int)(param_2 >> 0x10)) && ((float)(param_2 >> 0x10) < (float)iVar1 + local_4)) {
        uVar2 = FUN_100556c0((short)param_2 - *(short *)(in_ECX + 0x80),
                             (short)(param_2 >> 0x10) - *(short *)(in_ECX + 0x84),
                             *(undefined4 *)(in_ECX + 0x2d8));
        *(undefined4 *)(in_ECX + 0x2ec) = uVar2;
        return 1;
      }
    }
  }
  *(undefined4 *)(in_ECX + 0x2ec) = 0;
  return 1;
}


// ==== 10055930 FUN_10055930

undefined4 FUN_10055930(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1780;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10043dd0(*(int *)(*(int *)(in_ECX + 0x214) + 0x2f0) + 0x15);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 100559e4 Catch@100559e4

void Catch_100559e4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100559f8 Catch@100559f8

void Catch_100559f8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTreeCtrl::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10055a20 FUN_10055a20

undefined4 FUN_10055a20(void)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1d0) < 0) {
    *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
    *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
    *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1d0) + *(int *)(in_ECX + 0x1e0);
    if (0 < *(int *)(in_ECX + 0x1d0)) {
      *(undefined4 *)(in_ECX + 0x1d0) = 0;
    }
    thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
    *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
    *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
    (**(code **)(**(int **)(in_ECX + 0x214) + 0x148))(0,*(undefined4 *)(in_ECX + 0x1e0),0);
    piVar1 = (int *)(*(int *)(in_ECX + 0x214) + 0x2f4);
    *piVar1 = *piVar1 - *(int *)(in_ECX + 0x1e0);
  }
  return 1;
}


// ==== 10055ad0 FUN_10055ad0

undefined4 FUN_10055ad0(void)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1e4) < *(int *)(in_ECX + 0x1d0)) {
    *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
    *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
    *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1d0) - *(int *)(in_ECX + 0x1e0);
    if (*(int *)(in_ECX + 0x1d0) < *(int *)(in_ECX + 0x1e4)) {
      *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1e4);
    }
    thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
    *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
    *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
    (**(code **)(**(int **)(in_ECX + 0x214) + 0x148))(0,-*(int *)(in_ECX + 0x1e0),0);
    piVar1 = (int *)(*(int *)(in_ECX + 0x214) + 0x2f4);
    *piVar1 = *piVar1 + *(int *)(in_ECX + 0x1e0);
  }
  return 1;
}


// ==== 10055b90 FUN_10055b90

undefined4 FUN_10055b90(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
  *(int *)(in_ECX + 0x1d0) = -param_1;
  *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
  *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
  (**(code **)(**(int **)(in_ECX + 0x214) + 0x148))(0,-*(int *)(in_ECX + 0x1d8),0);
  piVar1 = (int *)(*(int *)(in_ECX + 0x214) + 0x2f4);
  *piVar1 = *piVar1 + *(int *)(in_ECX + 0x1d8);
  return 1;
}


// ==== 10055c10 FUN_10055c10

undefined4 FUN_10055c10(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int in_ECX;
  
  sVar4 = (short)((uint)param_1 >> 0x10) / 0x78;
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
  if (sVar4 < 1) {
    iVar2 = *(int *)(in_ECX + 0x1e4);
    if (*(int *)(in_ECX + 0x1d0) <= iVar2) goto LAB_10055cc2;
    iVar3 = *(int *)(in_ECX + 0x1d0) + (int)sVar4 * *(int *)(in_ECX + 0x1e0) * 3;
    *(int *)(in_ECX + 0x1d0) = iVar3;
    if (iVar3 < iVar2) {
      *(int *)(in_ECX + 0x1d0) = iVar2;
    }
  }
  else {
    if (-1 < *(int *)(in_ECX + 0x1d0)) goto LAB_10055cc2;
    iVar2 = *(int *)(in_ECX + 0x1d0) + (int)sVar4 * *(int *)(in_ECX + 0x1e0) * 3;
    *(int *)(in_ECX + 0x1d0) = iVar2;
    if (0 < iVar2) {
      *(undefined4 *)(in_ECX + 0x1d0) = 0;
    }
  }
  thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
LAB_10055cc2:
  *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
  *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
  (**(code **)(**(int **)(in_ECX + 0x214) + 0x148))(0,-*(int *)(in_ECX + 0x1d8),0);
  piVar1 = (int *)(*(int *)(in_ECX + 0x214) + 0x2f4);
  *piVar1 = *piVar1 + *(int *)(in_ECX + 0x1d8);
  return 1;
}


// ==== 10055d20 FUN_10055d20

void FUN_10055d20(void)

{
  int in_ECX;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(**(int **)(in_ECX + 0x214) + 0x1fc))();
  uStack_8 = 0;
  uStack_4 = 0;
  iStack_c = 0;
  iStack_10 = 0;
  FUN_1005d0a0(&iStack_10);
  (**(code **)(**(int **)(in_ECX + 0x214) + 0x148))(-iStack_10,-iStack_c,0);
  *(undefined4 *)(*(int *)(in_ECX + 0x214) + 0x2f4) = 0;
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  *(undefined4 *)(in_ECX + 0x1cc) = 0;
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  *(undefined4 *)(in_ECX + 0x1d4) = 0;
  *(undefined4 *)(in_ECX + 0x1e4) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x1fc) + 0x2dc) = 0;
  return;
}


// ==== 10055dc0 FUN_10055dc0

int FUN_10055dc0(int param_1,int param_2)

{
  FArray *this;
  int iVar1;
  int in_ECX;
  
  if (param_1 == 0) {
    return 0;
  }
  this = (FArray *)(in_ECX + 0x2860);
  if (param_2 == -1) {
    iVar1 = FArray::Add(this,1,4);
    *(int *)(*(int *)this + iVar1 * 4) = param_1;
    return param_1;
  }
  FArray::Insert(this,param_2,1,4);
  *(int *)(*(int *)this + param_2 * 4) = param_1;
  return param_1;
}


// ==== 10055e10 FUN_10055e10

int FUN_10055e10(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *in_ECX;
  int iVar10;
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
  undefined1 local_8 [4];
  int local_4;
  
  iVar10 = param_2;
  uVar2 = param_1;
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x2870) == 0) {
LAB_10055e81:
    if (*(int *)(param_2 + 0x2858) == 0) goto LAB_10055ef7;
    uVar3 = FUN_101c19e0();
    uVar4 = FUN_101c19e0();
    uVar5 = *(undefined4 *)(param_2 + 0x2858);
    iVar9 = *(int *)(param_2 + 0x2844) + param_4;
  }
  else {
    if (*(int *)(param_2 + 0x2854) == 0) {
      if (*(int *)(param_2 + 0x2870) != 0) goto LAB_10055ef7;
      goto LAB_10055e81;
    }
    uVar3 = FUN_101c19e0();
    uVar4 = FUN_101c19e0();
    uVar5 = *(undefined4 *)(param_2 + 0x2854);
    iVar9 = param_4;
  }
  FUN_10021a00(param_3,iVar9,uVar4,uVar3,0,0,uVar4,uVar3,uVar5,0xff,1);
  *(int *)(param_2 + 0x2830) = param_3;
  *(int *)(param_2 + 0x2834) = param_4;
  *(undefined4 *)(param_2 + 0x2838) = *(undefined4 *)(param_2 + 0x2838);
  *(undefined4 *)(param_2 + 0x283c) = *(undefined4 *)(param_2 + 0x283c);
LAB_10055ef7:
  if (*(int *)(param_2 + 0x287c) != 0) {
    iVar9 = in_ECX[0xbe];
    uVar17 = 0xff;
    uVar13 = 0xd;
    uVar11 = 0x10;
    uVar4 = 0;
    uVar3 = 0;
    uVar5 = FUN_101c19e0(0,0,0x10,0xd,iVar9,0xff);
    iVar6 = FUN_101c19e0(uVar5);
    iVar6 = iVar6 + -0x31;
    iVar8 = param_4;
    iVar7 = FUN_101c19e0(param_4,iVar6);
    FUN_10021970(iVar7 + *(int *)(param_2 + 0x2840) + param_3,iVar8,iVar6,uVar5,uVar3,uVar4,uVar11,
                 uVar13,iVar9,uVar17);
    iVar9 = in_ECX[0xbf];
    uVar18 = 0xff;
    uVar17 = 0xd;
    uVar13 = 0x20;
    uVar11 = 0;
    uVar4 = 0;
    uVar5 = FUN_101c19e0(0,0,0x20,0xd,iVar9,0xff);
    uVar3 = 0x20;
    iVar8 = param_4;
    iVar6 = FUN_101c19e0(param_4,0x20,uVar5);
    iVar7 = FUN_101c19e0();
    FUN_10021970(param_3 + -0x31 + iVar6 + iVar7 + *(int *)(param_2 + 0x2840),iVar8,uVar3,uVar5,
                 uVar4,uVar11,uVar13,uVar17,iVar9,uVar18);
  }
  if (*(int *)(param_2 + 0x2850) != 0) {
    uVar11 = FUN_101c19e0();
    uVar13 = FUN_101c19e0();
    uVar5 = *(undefined4 *)(param_2 + 0x2850);
    uVar19 = 1;
    uVar15 = 0xff;
    uVar18 = 0;
    uVar17 = 0;
    iVar9 = param_4;
    uVar3 = uVar13;
    uVar4 = uVar11;
    iVar8 = FUN_101c19e0(param_4,uVar13,uVar11,0,0,uVar13,uVar11,uVar5,0xff,1);
    FUN_10021a00(iVar8 + *(int *)(param_2 + 0x2840) + param_3,iVar9,uVar13,uVar11,uVar17,uVar18,
                 uVar3,uVar4,uVar5,uVar15,uVar19);
    iVar9 = FUN_101c19e0();
    *(int *)(param_2 + 0x2820) = iVar9 + *(int *)(param_2 + 0x2840) + param_3;
    *(int *)(param_2 + 0x2824) = param_4;
    *(undefined4 *)(param_2 + 0x2828) = *(undefined4 *)(param_2 + 0x2828);
    *(undefined4 *)(param_2 + 0x282c) = *(undefined4 *)(param_2 + 0x282c);
  }
  iVar9 = FUN_101c19e0();
  *(int *)(param_2 + 0x2810) = iVar9 + *(int *)(param_2 + 0x2840) + param_3;
  *(int *)(param_2 + 0x2814) = param_4;
  *(undefined4 *)(param_2 + 0x2818) = *(undefined4 *)(param_2 + 0x2818);
  *(undefined4 *)(param_2 + 0x281c) = *(undefined4 *)(param_2 + 0x281c);
  if (param_2 != -0x10) {
    FUN_100216e0(local_8,0x41,0);
    uVar20 = 0xffffffff;
    uVar16 = 0;
    uVar14 = 0;
    uVar12 = 0;
    uVar19 = 0;
    uVar15 = 0;
    uVar18 = 0;
    uVar17 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar4 = 0;
    uVar3 = 0;
    iVar9 = param_2 + 0x10;
    uVar5 = 0xffdcdcdc;
    if (*(int *)(param_2 + 0x284c) == 0) {
      iVar8 = FUN_101c19e0(0xffdcdcdc,iVar9,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      iVar8 = (iVar8 - local_4) / 2 + 1 + param_4;
      iVar6 = FUN_101c19e0(iVar8);
      iVar7 = FUN_101c19e0();
      iVar6 = param_3 + 3 + iVar6 + iVar7 + *(int *)(param_2 + 0x2840);
    }
    else {
      iVar8 = FUN_101c19e0(0xffdcdcdc,iVar9,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      iVar8 = (iVar8 - local_4) / 2 + 1 + param_4;
      iVar6 = FUN_101c19e0(iVar8);
      iVar7 = FUN_101c19e0();
      iVar6 = param_3 + 3 + iVar6 + iVar7 + *(int *)(param_2 + 0x2840);
    }
    FUN_100217a0(iVar6,iVar8,uVar5,iVar9,uVar3,uVar4,uVar11,uVar13,uVar17,uVar18,uVar15,uVar19,
                 uVar12,uVar14,uVar16,uVar20);
  }
  param_1 = FUN_101c19e0();
  param_1 = param_1 + 4;
  if (*(int *)(param_2 + 0x2870) == 0) {
    iVar10 = 0;
    if (0 < *(int *)(param_2 + 0x2864)) {
      do {
        iVar9 = iVar10 * 4;
        iVar10 = iVar10 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x2860) + iVar9) + 0x2878) = 0;
      } while (iVar10 < *(int *)(param_2 + 0x2864));
    }
  }
  else {
    piVar1 = (int *)(param_2 + 0x2864);
    param_2 = 0;
    if (0 < *piVar1) {
      do {
        iVar9 = FUN_101c19e0();
        iVar9 = (**(code **)(*in_ECX + 0x200))
                          (uVar2,*(undefined4 *)(*(int *)(iVar10 + 0x2860) + param_2 * 4),
                           param_3 + 3 + iVar9,param_1 + param_4);
        param_1 = param_1 + iVar9;
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(iVar10 + 0x2864));
      return param_1;
    }
  }
  return param_1;
}


// ==== 10056220 FUN_10056220

void FUN_10056220(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e17a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 < 0) {
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


// ==== 100562c0 FUN_100562c0

int FUN_100562c0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[1];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*in_ECX + iVar2 * 4) == *param_1) {
        FUN_1013d680(iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  return iVar1 - in_ECX[1];
}


// ==== 10056300 FUN_10056300

void FUN_10056300(undefined4 param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e17e7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10055240(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  FArray::FArray((FArray *)(in_ECX + 0x2860));
  *(undefined4 *)(in_ECX + 0x285c) = 0;
  *(undefined4 *)(in_ECX + 0x286c) = param_1;
  *(undefined4 *)(in_ECX + 0x2870) = 0;
  *(undefined4 *)(in_ECX + 0x2874) = 0;
  *(undefined4 *)(in_ECX + 0x2878) = 1;
  *(undefined4 *)(in_ECX + 0x287c) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10056390 FUN_10056390

void FUN_10056390(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e181e;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 0x285c) = 0;
  if (0 < *(int *)(in_ECX + 0x2864)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x2860) + iVar3 * 4);
      if (iVar1 != 0) {
        FUN_10056390(uVar2);
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x2864));
  }
  FArray::Empty((FArray *)(in_ECX + 0x2860),4,0);
  local_4 = 0xffffffff;
  FUN_10056220();
  ExceptionList = local_c;
  return;
}


// ==== 10056450 FUN_10056450

void FUN_10056450(byte param_1)

{
  FUN_10056390();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10056480 FUN_10056480

void FUN_10056480(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x2864)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x2860) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_10056390();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x2864));
  }
  FArray::Empty((FArray *)(in_ECX + 0x2860),4,0);
  return;
}


// ==== 100564e0 FUN_100564e0

void FUN_100564e0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1840;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100562c0(&param_1);
  if (param_1 != 0) {
    FUN_10056450(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10056551 Catch@10056551

void Catch_10056551(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10056565 Catch@10056565

void Catch_10056565(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTVItem::DeleteChildItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10056590 FUN_10056590

undefined4 FUN_10056590(int param_1,void *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_101e1876;
  local_c = ExceptionList;
  if (param_1 != 0) {
    if (param_2 != (void *)0x0) {
      ExceptionList = &local_c;
      iStack_4 = (**(code **)**(undefined4 **)GMalloc_exref)
                           (0x2880,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffe8);
      local_c = (void *)0x1;
      if (iStack_4 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_10056300(0xffffffff);
      }
      local_c = (void *)0xffffffff;
      FUN_100552e0(param_1);
      *(void **)(iVar2 + 0x285c) = param_2;
      uVar1 = FUN_10055dc0(iVar2,0xffffffff);
      ExceptionList = unaff_ESI;
      return uVar1;
    }
    if (*(int *)(in_ECX + 0x2d8) == 0) {
      ExceptionList = &local_c;
      iStack_4 = (**(code **)**(undefined4 **)GMalloc_exref)(0x2880,&DAT_1022f8a0);
      local_c = param_2;
      if (iStack_4 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_10056300(0xffffffff);
      }
      local_c = (void *)0xffffffff;
      *(undefined4 *)(in_ECX + 0x2d8) = uVar1;
      FUN_100552e0(param_1);
      ExceptionList = unaff_ESI;
      return *(undefined4 *)(in_ECX + 0x2d8);
    }
  }
  return 0;
}


// ==== 100566c0 FUN_100566c0

void FUN_100566c0(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*param_1 != 0) {
    if (*(int *)(in_ECX + 0x2e0) == *param_1) {
      *(undefined4 *)(in_ECX + 0x2e0) = 0;
    }
    if (*(int *)(in_ECX + 0x2e4) == *param_1) {
      *(undefined4 *)(in_ECX + 0x2e4) = 0;
    }
    if (*(int *)(in_ECX + 0x2e8) == *param_1) {
      *(undefined4 *)(in_ECX + 0x2e8) = 0;
    }
    if (*(int *)(in_ECX + 0x2ec) == *param_1) {
      *(undefined4 *)(in_ECX + 0x2ec) = 0;
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x285c) != 0) {
      FUN_100564e0(iVar1);
      return;
    }
    if (iVar1 != 0) {
      FUN_10056390();
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
    }
    *param_1 = 0;
  }
  return;
}


// ==== 10056750 FUN_10056750

void FUN_10056750(void)

{
  int in_ECX;
  
  FUN_100566c0(in_ECX + 0x2d8);
  *(undefined4 *)(in_ECX + 0x2e0) = 0;
  *(undefined4 *)(in_ECX + 0x2e4) = 0;
  *(undefined4 *)(in_ECX + 0x2e8) = 0;
  *(undefined4 *)(in_ECX + 0x2ec) = 0;
  return;
}


// ==== 10056780 FUN_10056780

void FUN_10056780(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e18a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = NCTree::vftable;
  in_ECX[0xb6] = 0;
  in_ECX[0xb8] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0xba] = 0;
  in_ECX[0xbb] = 0;
  in_ECX[0xbc] = 0;
  in_ECX[0xbd] = 0;
  uVar1 = FUN_1003f630(L"L2UI_CH3.ListCtrl.TextSelect",1);
  in_ECX[0xbe] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.ListCtrl.TextSelect2",1);
  in_ECX[0xbf] = uVar1;
  ExceptionList = local_c;
  return;
}


// ==== 10056830 FUN_10056830

void FUN_10056830(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e18d8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCTree::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10056890 FUN_10056890

void FUN_10056890(byte param_1)

{
  void *in_ECX;
  
  FUN_10056830();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x300);
  }
  return;
}


// ==== 100568c0 FUN_100568c0

void FUN_100568c0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e1908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10044de0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCTreeCtrl::vftable;
  in_ECX[0x81] = 0x10;
  ExceptionList = local_c;
  return;
}


// ==== 10056920 FUN_10056920

void FUN_10056920(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e1938;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCTreeCtrl::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10031a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10056980 FUN_10056980

void FUN_10056980(byte param_1)

{
  void *in_ECX;
  
  FUN_10056920();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x228);
  }
  return;
}


// ==== 100569b0 FUN_100569b0

undefined4 FUN_100569b0(void)

{
  UPackage *pUVar1;
  UObject *pUVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined2 in_FPUControlWord;
  undefined4 local_c;
  longlong local_8;
  
  FUN_100440c0();
  FName::FName((FName *)&local_c,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_1036bc10,pUVar1,local_c,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_10056780();
  }
  *(int *)(in_ECX + 0x214) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa00001;
  local_8._0_4_ = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c));
  uVar4 = (undefined4)local_8;
  local_c = CONCAT22(local_c._2_2_,in_FPUControlWord);
  local_8 = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 16.0);
  (**(code **)(**(int **)(in_ECX + 0x214) + 0xc0))(0,0,(undefined4)local_8,uVar4,0,0,3);
  uVar4 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x214),2);
  FUN_1005c1e0(uVar4);
  return 1;
}


// ==== 10056ad0 FUN_10056ad0

void FUN_10056ad0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  return;
}


// ==== 10056b23 Catch@10056b23

void Catch_10056b23(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10056b37 Catch@10056b37

void Catch_10056b37(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPositionInfo::SetRelativePoint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10056b60 FUN_10056b60

void FUN_10056b60(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  return;
}


// ==== 10056bb3 Catch@10056bb3

void Catch_10056bb3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10056bc7 Catch@10056bc7

void Catch_10056bc7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPositionInfo::SetAnchored");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10056bf0 FUN_10056bf0

void FUN_10056bf0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x44) = param_1;
  return;
}


// ==== 10056c43 Catch@10056c43

void Catch_10056c43(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10056c57 Catch@10056c57

void Catch_10056c57(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPositionInfo::SetWidth");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10056c80 FUN_10056c80

void FUN_10056c80(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x48) = param_1;
  return;
}


// ==== 10056cd3 Catch@10056cd3

void Catch_10056cd3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10056ce7 Catch@10056ce7

void Catch_10056ce7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPositionInfo::SetHeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10056d10 FUN_10056d10

undefined4 FUN_10056d10(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x34);
}


// ==== 10056d57 Catch@10056d57

void Catch_10056d57(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10056d6b Catch@10056d6b

void Catch_10056d6b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPositionInfo::GetRelativePoint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10056d90 FUN_10056d90

undefined4 FUN_10056d90(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}


// ==== 10056dd7 Catch@10056dd7

void Catch_10056dd7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10056deb Catch@10056deb

void Catch_10056deb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPositionInfo::GetAnchored");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10056e10 FUN_10056e10

void FUN_10056e10(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x3c);
  param_1[1] = *(undefined4 *)(in_ECX + 0x40);
  return;
}


// ==== 10056e64 Catch@10056e64

void Catch_10056e64(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10056e78 Catch@10056e78

void Catch_10056e78(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPositionInfo::GetOffset");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10056ea0 FUN_10056ea0

undefined4 FUN_10056ea0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44);
}


// ==== 10056ee7 Catch@10056ee7

void Catch_10056ee7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10056efb Catch@10056efb

void Catch_10056efb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPositionInfo::GetWidth");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10056f20 FUN_10056f20

undefined4 FUN_10056f20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x48);
}


// ==== 10056f67 Catch@10056f67

void Catch_10056f67(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10056f7b Catch@10056f7b

void Catch_10056f7b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPositionInfo::GetHeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10056fa0 FUN_10056fa0

void FUN_10056fa0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}


