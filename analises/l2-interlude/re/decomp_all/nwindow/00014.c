// ==== 101a20a0 FUN_101a20a0

void FUN_101a20a0(void)

{
  FName *this;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int in_ECX;
  int iVar7;
  uint uStack_58;
  int local_48;
  int local_44;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10216b58;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  iVar7 = 0;
  local_8 = 0;
  FUN_10038f80();
  local_8._0_1_ = 1;
  iVar4 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c
                           ) + 0x3bc);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x104) != 0)) {
    piVar1 = *(int **)(iVar4 + 0x104);
    uVar3 = (**(code **)(*piVar1 + 0x98))(iVar4);
    FUN_1018ccd0(uVar3);
    iVar4 = piVar1[0x92];
    local_2c = iVar4;
    if (iVar4 != 0) {
      FName::FName((FName *)&local_18,0);
      local_24 = *(int *)(iVar4 + 0x70);
      (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x174))();
      if (*(int *)(*(int *)(in_ECX + 0x1d4) + 0x2fc) == 0) {
        for (local_28 = 0; local_28 < local_24; local_28 = local_28 + 1) {
          this = (FName *)(local_28 * 0x74 + *(int *)(iVar4 + 0x6c));
          iVar4 = **(int **)(in_ECX + 0x1d0);
          puVar6 = FName::operator*(this);
          uVar3 = 0xffdcdcdc;
          puVar5 = FName::operator*(this);
          (**(code **)(iVar4 + 0x1fc))(puVar5,uVar3,puVar6);
          iVar4 = local_2c;
        }
      }
      else {
        for (; local_30 = iVar7, iVar7 < local_24; iVar7 = iVar7 + 1) {
          FUN_100d9a30(&local_30);
        }
        for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
          local_34 = 0;
          while (iVar7 = local_34, local_34 < local_24) {
            local_18 = *(undefined4 *)(local_34 * 0x74 + *(int *)(iVar4 + 0x6c));
            iVar4 = FUN_100ac320(&local_34);
            if (iVar4 != -1) {
              puVar6 = (ushort *)(&DAT_10292858 + local_1c * 0x14);
              puVar5 = FName::operator*((FName *)&local_18);
              puVar6 = appStristr(puVar5,puVar6);
              if ((puVar6 != (ushort *)0x0) && (*(int *)(in_ECX + 0x1d0) != 0)) {
                FUN_1013d680(iVar4,1);
                iVar4 = **(int **)(in_ECX + 0x1d0);
                puVar6 = FName::operator*((FName *)&local_18);
                uVar3 = 0xffdcdcdc;
                puVar5 = FName::operator*((FName *)&local_18);
                (**(code **)(iVar4 + 0x1fc))(puVar5,uVar3,puVar6);
              }
            }
            iVar4 = local_2c;
            local_34 = iVar7 + 1;
          }
        }
        for (local_20 = 0; local_20 < local_44; local_20 = local_20 + 1) {
          iVar4 = *(int *)(local_2c + 0x6c);
          iVar7 = *(int *)(local_48 + local_20 * 4);
          iVar2 = **(int **)(in_ECX + 0x1d0);
          puVar6 = FName::operator*((FName *)(*(int *)(local_48 + local_20 * 4) * 0x74 + iVar4));
          uVar3 = 0xffdcdcdc;
          puVar5 = FName::operator*((FName *)(iVar7 * 0x74 + iVar4));
          (**(code **)(iVar2 + 0x1fc))(puVar5,uVar3,puVar6);
        }
      }
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10039be0();
  ExceptionList = local_10;
  return;
}


// ==== 101a231e Catch@101a231e

void Catch_101a231e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_102a47f0);
}


// ==== 101a2332 Catch@101a2332

void Catch_101a2332(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_CharacterSelectWnd::AddAnimations");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a2350 FUN_101a2350

undefined4 FUN_101a2350(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  FName *pFVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  uint uStack_38;
  undefined1 local_24 [8];
  int local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216b80;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014a730();
  FUN_1014a730(param_1);
  iVar4 = FUN_10032ee0(param_1);
  iVar5 = FUN_1014a730();
  uVar2 = *(uint *)(*(int *)(iVar5 + 0x80c) + 0x200);
  if (uVar2 < 0x15) {
    iVar11 = uVar2 * 0x314;
    iVar5 = FUN_1014a730();
    iVar5 = iVar5 + 0x87c + iVar11;
    if (*(int *)(iVar4 + 0x1e6c) == 0xe) {
      *(undefined4 *)(iVar5 + 0xb4) = 0;
      *(undefined4 *)(iVar5 + 0xb8) = 0;
    }
    else if ((*(int *)(iVar4 + 0x1e6c) == 7) || (*(int *)(iVar4 + 0x1e6c) == 8)) {
      *(undefined4 *)(iVar5 + 0xd0) = 0;
    }
    puVar1 = (uint *)(iVar5 + 0x98 + *(int *)(iVar4 + 0x1e6c) * 4);
    uVar12 = *(uint *)(iVar4 + 0x1e5c);
    *puVar1 = -(uint)(*puVar1 != uVar12) & uVar12;
    iVar5 = *(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c);
    iVar6 = FUN_1014a730();
    *(undefined4 *)(iVar6 + 0xa80 + iVar11) = *(undefined4 *)(iVar5 + 0x3bc);
    iVar5 = FUN_1014a730();
    User::SetPawnResource((User *)(iVar5 + 0x87c + iVar11));
    puVar7 = (undefined4 *)FUN_10187a60((uint *)(iVar4 + 0x1e5c));
    puVar3 = (undefined4 *)*puVar7;
    uVar12 = uVar2;
    FUN_1014a730(uVar2,0);
    uVar8 = FUN_1000ac70(uVar12);
    pFVar9 = (FName *)(*(code *)*puVar3)(&local_18,uVar8);
    puVar10 = FName::operator*(pFVar9);
    iVar4 = FUN_1014a730();
    appStrcpy((ushort *)(iVar4 + 0x1cc),puVar10);
    for (iVar4 = 0; iVar4 < 2; iVar4 = iVar4 + 1) {
      local_18 = (undefined4 *)*puVar7;
      uVar12 = uVar2;
      local_1c = iVar4;
      FUN_1014a730(uVar2,iVar4);
      uVar8 = FUN_1000ac70(uVar12);
      pFVar9 = (FName *)(*(code *)*local_18)(local_24,uVar8);
      puVar10 = FName::operator*(pFVar9);
      iVar5 = FUN_1014a730();
      appStrcpy((ushort *)(iVar5 + 0x3cc + iVar4 * 0x200),puVar10);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 101a256e Catch@101a256e

void Catch_101a256e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101a2582 Catch@101a2582

void Catch_101a2582(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_InvenTextWnd::OnInvenItemList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a25a0 FUN_101a25a0

undefined4 FUN_101a25a0(void)

{
  int *piVar1;
  APawn *this;
  int iVar2;
  wchar_t *_Str;
  undefined4 *puVar3;
  ushort *puVar4;
  int in_ECX;
  int iVar5;
  double dVar6;
  EFindName EVar7;
  float fStack_14;
  int iStack_10;
  FRotator aFStack_c [12];
  
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x1f8))();
  if (iVar2 != 0) {
    _Str = (wchar_t *)(**(code **)(**(int **)(in_ECX + 0x1ec) + 0x1f8))();
    dVar6 = __wtof(_Str);
    fStack_14 = (float)dVar6;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x1e0) + 0x1f8))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)(in_ECX + 0x1e4) + 0x1f8))();
      if ((iVar2 != 0) && (0.0 < fStack_14)) {
        iVar2 = (**(code **)(**(int **)(in_ECX + 0x1e8) + 0x1f8))();
        piVar1 = *(int **)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c)
        ;
        this = (APawn *)piVar1[0xef];
        iVar5 = (iVar2 != 0) + 2;
        iVar2 = (**(code **)(*piVar1 + 0x35c))();
        iStack_10 = iVar2;
        (**(code **)(**(int **)(this + 0x14d8) + 800))();
        if ((*(byte *)(iVar2 + 0x14ec) & 0x40) != 0) {
          return 0;
        }
        FNMagicInfo::Clear((FNMagicInfo *)(this + 0x4f0),1);
        FArray::Empty((FArray *)(this + 0x370),4,0);
        *(float *)(this + 0x510) = fStack_14;
        *(undefined4 *)(this + 0x524) = 0x3f800000;
        *(undefined4 *)(this + 0x538) = *(undefined4 *)(this + 0x304);
        *(undefined4 *)(this + 0x51c) = 0;
        *(undefined4 *)(this + 0x53c) = *(undefined4 *)(this + 0x308);
        *(undefined4 *)(this + 0x52c) = 9;
        *(int *)(this + 0x520) = iVar2;
        *(undefined4 *)(this + 0x540) = *(undefined4 *)(this + 0x30c);
        puVar3 = (undefined4 *)FRotator::FRotator(aFStack_c,0,0x50000,0);
        *(undefined4 *)(this + 0x544) = *puVar3;
        *(undefined4 *)(this + 0x548) = puVar3[1];
        *(undefined4 *)(this + 0x54c) = puVar3[2];
        *(int *)(this + 0x534) = iVar5;
        EVar7 = 1;
        puVar4 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1e0) + 0x1f8))();
        FName::FName((FName *)&fStack_14,puVar4,EVar7);
        *(float *)(this + 0x580) = fStack_14;
        EVar7 = 1;
        puVar4 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1e4) + 0x1f8))();
        FName::FName((FName *)&fStack_14,puVar4,EVar7);
        *(float *)(this + 0x584) = fStack_14;
        if (iVar5 == 3) {
          EVar7 = 1;
          puVar4 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1e8) + 0x1f8))();
          FName::FName((FName *)&fStack_14,puVar4,EVar7);
          *(float *)(this + 0x588) = fStack_14;
        }
        iVar2 = APawn::InitSkillProcess(this);
        if (iVar2 != 0) {
          *(undefined4 *)(this + 0x62c) = 5;
          *(int *)(this + 0x63c) = iStack_10;
        }
        return 1;
      }
    }
  }
  return 1;
}


// ==== 101a27d0 FUN_101a27d0

void FUN_101a27d0(void)

{
  FUN_1019ee60(1);
  return;
}


// ==== 101a27e0 FUN_101a27e0

void FUN_101a27e0(void)

{
  FUN_1019ee60(0);
  return;
}


// ==== 101a27f0 FUN_101a27f0

void FUN_101a27f0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = FUN_1014a730();
  iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x80c) + 0x1cc) + 0x324);
  in_ECX[0x83] = 0;
  FUN_10009f70(0);
  iVar1 = iVar1 * 0x314;
  iVar2 = FUN_1014a730();
  iVar2 = *(int *)(iVar2 + 0xac0 + iVar1);
  in_ECX[0x81] = iVar2;
  FUN_10009f70(iVar2);
  FUN_1019f9d0();
  iVar2 = FUN_1014a730();
  iVar2 = *(int *)(iVar2 + 0xabc + iVar1);
  in_ECX[0x82] = iVar2;
  FUN_10009f70(iVar2);
  (**(code **)(*in_ECX + 0x200))(in_ECX[0x82]);
  FUN_10009f70(in_ECX[0x82]);
  (**(code **)(*in_ECX + 0x204))(in_ECX[0x82]);
  FUN_1019f840();
  iVar2 = FUN_1014a730();
  iVar1 = *(int *)(iVar2 + 0xac4 + iVar1);
  in_ECX[0x84] = iVar1;
  FUN_10009f70(iVar1);
  (**(code **)(*in_ECX + 0x208))(in_ECX[0x84]);
  return;
}


// ==== 101a2900 FUN_101a2900

undefined4 FUN_101a2900(AActor *param_1)

{
  APawn *pAVar1;
  undefined4 uVar2;
  AActor *pAVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  FL2MagicSkillData *pFVar8;
  int in_ECX;
  float fVar9;
  int local_1c;
  int local_18 [6];
  
  uVar4 = (uint)param_1;
  local_18[0] = 0x38;
  local_18[1] = 0x13;
  local_18[2] = 0x18;
  local_18[3] = 0x65;
  local_18[4] = 0;
  local_18[5] = 0;
  local_1c = -1;
  if ((*(int *)(in_ECX + 0x210) == 0) ||
     ((uint)(*(int *)(in_ECX + 0x214) - *(int *)(in_ECX + 0x210) >> 3) <= param_1)) {
    FUN_101c238d();
  }
  fVar9 = appFrand();
  if (fVar9 * 100.0 <= *(float *)(in_ECX + 0x1ec) * (float)*(double *)(in_ECX + 0x204)) {
    if ((*(int *)(in_ECX + 0x210) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x214) - *(int *)(in_ECX + 0x210) >> 3) <= uVar4)) {
      FUN_101c238d();
    }
    iVar5 = *(int *)(in_ECX + 0x210);
    if (*(int *)(iVar5 + 4 + uVar4 * 8) != 0) {
      if ((iVar5 == 0) || ((uint)(*(int *)(in_ECX + 0x214) - iVar5 >> 3) <= uVar4)) {
        FUN_101c238d();
      }
      if (*(int *)(*(int *)(*(int *)(in_ECX + 0x210) + uVar4 * 8) + 0x62c) != 5) {
        iVar5 = FUN_101a17c0(uVar4);
        if (*(int *)(iVar5 + 4) == 1) {
          appFrand();
          iVar5 = FUN_101c19e0();
          local_1c = *(int *)(in_ECX + (0x87 - iVar5) * 4);
        }
        else if (*(int *)(iVar5 + 4) == 2) {
          appFrand();
          iVar5 = FUN_101c19e0();
          local_1c = local_18[-iVar5];
        }
        do {
          do {
            appFrand();
            uVar6 = FUN_101c19e0();
          } while (uVar6 == uVar4);
          if ((*(int *)(in_ECX + 0x210) == 0) ||
             ((uint)(*(int *)(in_ECX + 0x214) - *(int *)(in_ECX + 0x210) >> 3) <= uVar6)) {
            FUN_101c238d();
          }
        } while ((*(int *)(*(int *)(in_ECX + 0x210) + 4 + uVar6 * 8) == 0) ||
                (*(int *)(in_ECX + 0x1e8) <= (int)uVar6));
        if (local_1c == 0) {
          puVar7 = (undefined4 *)FUN_101a17c0(uVar4);
          pAVar1 = (APawn *)*puVar7;
          puVar7 = (undefined4 *)FUN_101a17c0(uVar6);
          uVar2 = *puVar7;
          *(uint *)(*(int *)(pAVar1 + 0x14d8) + 0x41c) =
               *(uint *)(*(int *)(pAVar1 + 0x14d8) + 0x41c) | 2;
          *(uint *)(*(int *)(pAVar1 + 0x14d8) + 0x41c) =
               *(uint *)(*(int *)(pAVar1 + 0x14d8) + 0x41c) | 4;
          (**(code **)(**(int **)(pAVar1 + 0x14d8) + 800))();
          APawn::NActionStop(pAVar1);
          *(uint *)(pAVar1 + 0x62c) = (pAVar1[0x71d] == (APawn)0x5) + 1;
          *(undefined4 *)(pAVar1 + 0x63c) = uVar2;
          *(uint *)(pAVar1 + 0x634) =
               ((uint)((int)uVar6 % 3 == 0) * 4 | uVar6 & 1) * 2 |
               *(uint *)(pAVar1 + 0x634) & 0xfffffff0;
          *(undefined4 *)(pAVar1 + 0x630) = 1;
          FArray::Empty((FArray *)(pAVar1 + 0x64c),0x10,0);
          *(undefined4 *)(pAVar1 + 0x640) = 0;
          *(undefined4 *)(pAVar1 + 0x644) = 0;
          pAVar1[0x394] = (APawn)0x1;
          return 1;
        }
        if (local_1c != -1) {
          puVar7 = (undefined4 *)FUN_101a17c0(uVar4);
          pAVar1 = (APawn *)*puVar7;
          puVar7 = (undefined4 *)FUN_101a17c0(uVar6);
          pAVar3 = (AActor *)*puVar7;
          param_1 = pAVar3;
          (**(code **)(**(int **)(pAVar1 + 0x14d8) + 800))();
          pFVar8 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,local_1c,1);
          if (pFVar8 == (FL2MagicSkillData *)0x0) {
            return 0;
          }
          APawn::SetMagicInfo(pAVar1,local_1c,1,*(float *)(pFVar8 + 0x34),*(float *)(pFVar8 + 0x34),
                              pAVar3,1.0,(FL2MagicSkillData *)0x0);
          FUN_100d9a30(&param_1);
          iVar5 = APawn::InitSkillProcess(pAVar1);
          if ((iVar5 != 0) && (((byte)pAVar3[0x14ec] & 0x40) == 0)) {
            *(AActor **)(pAVar1 + 0x63c) = pAVar3;
            *(undefined4 *)(pAVar1 + 0x62c) = 5;
            return 1;
          }
          *(undefined4 *)(pAVar1 + 0x62c) = 0;
        }
        return 1;
      }
    }
  }
  return 0;
}


// ==== 101a2c40 FUN_101a2c40

undefined4 FUN_101a2c40(uint param_1)

{
  int in_ECX;
  float fVar1;
  
  fVar1 = appFrand();
  if (fVar1 * 100.0 < *(float *)(in_ECX + 0x1f0) * (float)*(double *)(in_ECX + 0x204)) {
    if ((*(int *)(in_ECX + 0x210) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x214) - *(int *)(in_ECX + 0x210) >> 3) <= param_1)) {
      FUN_101c238d();
    }
    APawn::MagicCancel(*(APawn **)(*(int *)(in_ECX + 0x210) + param_1 * 8));
    return 1;
  }
  return 0;
}


// ==== 101a2cb0 FUN_101a2cb0

undefined4 FUN_101a2cb0(uint param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  float fVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  fVar6 = appFrand();
  if (fVar6 * 100.0 < (float)in_ECX[0x7d] * (float)*(double *)(in_ECX + 0x81)) {
    iVar3 = **(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
    if ((in_ECX[0x84] == 0) || ((uint)(in_ECX[0x85] - in_ECX[0x84] >> 3) <= param_1)) {
      FUN_101c238d();
    }
    iVar2 = param_1 * 8;
    iVar4 = *(int *)(*(int *)(iVar2 + in_ECX[0x84]) + 0x14d8);
    if (iVar4 != *(int *)(iVar3 + 0x3c)) {
      puVar1 = (uint *)(iVar4 + 100);
      *puVar1 = *puVar1 | 4;
    }
    if ((in_ECX[0x84] == 0) || ((uint)(in_ECX[0x85] - in_ECX[0x84] >> 3) <= param_1)) {
      FUN_101c238d();
    }
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x19c) + 0xac))
              (*(undefined4 *)(iVar2 + in_ECX[0x84]),0);
    if ((in_ECX[0x84] == 0) || ((uint)(in_ECX[0x85] - in_ECX[0x84] >> 3) <= param_1)) {
      FUN_101c238d();
    }
    iVar3 = in_ECX[0x84];
    puVar5 = (undefined4 *)(**(code **)(*in_ECX + 0x1f8))(&stack0xfffffff0);
    *(undefined4 *)(iVar3 + iVar2) = *puVar5;
    ((undefined4 *)(iVar3 + iVar2))[1] = puVar5[1];
  }
  return 1;
}


// ==== 101a2dd0 FUN_101a2dd0

int FUN_101a2dd0(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216ba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    FUN_101a17f0(param_3,param_1);
    param_3 = param_3 + 8;
  }
  ExceptionList = local_10;
  return param_3;
}


// ==== 101a2e47 Catch@101a2e47

void Catch_101a2e47(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a2e60 FUN_101a2e60

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_101a2e60(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_1cf8;
  undefined1 *puStack_1cf4;
  int local_1cf0;
  undefined1 local_1cec [7396];
  uint local_8;
  
  puStack_1cf4 = &LAB_10216bc8;
  local_1cf8 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_1cec;
  ExceptionList = &local_1cf8;
  iVar3 = 0;
  local_1cf0 = 0;
  if (*(int *)(in_ECX + 0x4614) == 0) {
    piVar1 = *(int **)(GL2GameData_exref + 0x1834);
    local_1cf0._0_1_ = 1;
    local_1cf0._1_3_ = 0;
    for (; iVar3 < piVar1[1]; iVar3 = iVar3 + 1) {
      iVar2 = *(int *)(*piVar1 + 8 + iVar3 * 0xc);
      if (iVar2 != 0) {
        FUN_1002be90();
        FUN_1019b810(iVar2,local_1cec);
        iVar2 = FUN_1019b760(iVar2);
        FUN_1019dbf0(iVar2,local_1cec);
        iVar2 = *(int *)(in_ECX + 0x7cc + iVar2 * 4);
        *(int *)(iVar2 + 0x268) = *(int *)(iVar2 + 0x268) + 1;
      }
    }
    local_1cf0 = (uint)local_1cf0._1_3_ << 8;
    FUN_100d10a0();
    *(undefined4 *)(in_ECX + 0x4614) = 1;
    local_1cf0 = 0xffffffff;
  }
  ExceptionList = local_1cf8;
  __security_check_cookie(local_8 ^ (uint)local_1cec);
  return;
}


// ==== 101a2f6f Catch@101a2f6f

void Catch_101a2f6f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101a2f83 Catch@101a2f83

void Catch_101a2f83(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewerWnd::AddAllItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a2fa0 FUN_101a2fa0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_101a2fa0(void)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  ushort *puStack_1d10;
  int *piStack_1d0c;
  FName aFStack_1d08 [4];
  int *piStack_1d04;
  int *piStack_1d00;
  int iStack_1cfc;
  undefined4 uStack_1cf8;
  undefined1 auStack_1cf4 [7396];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10216bfb;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&puStack_1d10;
  ExceptionList = &local_c;
  puVar2 = (ushort *)
           (**(code **)(**(int **)(in_ECX + 0x828) + 0x1f8))(DAT_103554c4 ^ (uint)&stack0xffffe2e0);
  puStack_1d10 = puVar2;
  FUN_1019af70();
  if (*(int *)(*(int *)(in_ECX + 0x86c) + 0x2fc) == 0) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x7ec + *(int *)(in_ECX + 0x4610) * 4) + 0x1cc) +
                0x138))();
    piVar6 = *(int **)(in_ECX + 0x7ec + *(int *)(in_ECX + 0x4610) * 4);
  }
  else {
    piVar6 = *(int **)(in_ECX + 0x7cc + *(int *)(in_ECX + 0x4610) * 4);
  }
  (**(code **)(*piVar6 + 0x138))();
  (**(code **)(**(int **)(in_ECX + 0x7cc + *(int *)(in_ECX + 0x4610) * 4) + 0x174))();
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x7ec + *(int *)(in_ECX + 0x4610) * 4) + 0x1cc) + 0x174)
  )();
  (**(code **)(**(int **)(in_ECX + 0x7e8) + 0x174))();
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x808) + 0x1cc) + 0x174))();
  if (puVar2 != (ushort *)0x0) {
    piStack_1d0c = *(int **)(GL2GameData_exref + 0x1834);
    iStack_1cfc = 0;
    uStack_1cf8 = 0;
    uStack_4 = 0;
    piStack_1d04 = piStack_1d0c;
    piStack_1d00 = piStack_1d0c;
    if (0 < piStack_1d0c[1]) {
      do {
        iVar1 = iStack_1cfc;
        iVar5 = *(int *)(*piStack_1d0c + 8 + iStack_1cfc * 0xc);
        if (iVar5 == 0) break;
        FUN_1002be90();
        FName::FName(aFStack_1d08,0);
        iVar3 = FName::operator!=((FName *)(iVar5 + 0x50),aFStack_1d08);
        if (iVar3 != 0) {
          puVar2 = puStack_1d10;
          puVar4 = L2FName::operator*((L2FName *)(iVar5 + 0x50));
          puVar2 = appStrstr(puVar4,puVar2);
          if ((puVar2 != (ushort *)0x0) ||
             (iVar3 = appAtoi(puStack_1d10), *(int *)(iVar5 + 0xc) == iVar3)) {
            FUN_1019b810(iVar5,auStack_1cf4);
            FUN_1019dbf0(7,auStack_1cf4);
            *(int *)(*(int *)(in_ECX + 0x7e8) + 0x268) =
                 *(int *)(*(int *)(in_ECX + 0x7e8) + 0x268) + 1;
            iVar5 = FUN_1019b760(iVar5);
            if (*(int *)(in_ECX + 0x4610) == iVar5) {
              FUN_1019dbf0(iVar5,auStack_1cf4);
              iVar5 = *(int *)(in_ECX + 0x7cc + iVar5 * 4);
              *(int *)(iVar5 + 0x268) = *(int *)(iVar5 + 0x268) + 1;
            }
          }
        }
        iStack_1cfc = iVar1 + 1;
      } while (iStack_1cfc < piStack_1d0c[1]);
    }
    uStack_4 = 0xffffffff;
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&puStack_1d10);
  return;
}


// ==== 101a3210 FUN_101a3210

undefined4 FUN_101a3210(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x174))();
  (**(code **)(**(int **)(in_ECX[0x1fb] + 0x1cc) + 0x174))();
  (**(code **)(**(int **)(in_ECX[0x1fc] + 0x1cc) + 0x174))();
  (**(code **)(**(int **)(in_ECX[0x1fd] + 0x1cc) + 0x174))();
  (**(code **)(**(int **)(in_ECX[0x1fe] + 0x1cc) + 0x174))();
  (**(code **)(**(int **)(in_ECX[0x1ff] + 0x1cc) + 0x174))();
  (**(code **)(**(int **)(in_ECX[0x200] + 0x1cc) + 0x174))();
  (**(code **)(**(int **)(in_ECX[0x201] + 0x1cc) + 0x174))();
  FUN_101a2e60();
  return 1;
}


// ==== 101a32d0 FUN_101a32d0

undefined4 FUN_101a32d0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(int **)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38)
                                 + 0x3c) + 0x35c))();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_1014b8c0();
    iVar1 = (**(code **)(**(int **)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38
                                              ) + 0x3c) + 0x35c))();
    (**(code **)(*piVar2 + 0x390))(iVar1);
    piVar2[0xef] = iVar1;
    iVar3 = FUN_1014a730();
    *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x80c) + 0x1cc) + 0x324) =
         *(undefined4 *)(iVar1 + 0x698);
    iVar1 = piVar2[0xef];
    iVar3 = FUN_1014a730();
    *(undefined4 *)(*(int *)(iVar3 + 0x80c) + 0x200) = *(undefined4 *)(iVar1 + 0x698);
    FUN_1014a730();
    FUN_101a20a0();
    FUN_1014a730();
    FUN_101a27f0();
  }
  return 1;
}


// ==== 101a33c0 FUN_101a33c0

void FUN_101a33c0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 *puVar6;
  uint *puVar7;
  ushort *puVar8;
  UClass *pUVar9;
  undefined4 *puVar10;
  int iVar11;
  APawn *this;
  int in_ECX;
  int iVar12;
  User *pUVar13;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  float fStack_3a0;
  undefined1 **ppuStack_39c;
  undefined4 uStack_398;
  UObject *pUVar14;
  ushort *puVar15;
  ulong uVar16;
  UPackageMap *pUVar17;
  uint uStack_37c;
  undefined1 *puStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  int iStack_334;
  undefined1 *puStack_330;
  undefined1 *puStack_32c;
  void *pvStack_328;
  undefined1 *puStack_324;
  undefined4 uStack_320;
  User aUStack_31c [788];
  uint uStack_8;
  
  puStack_324 = &LAB_10216c30;
  pvStack_328 = ExceptionList;
  uStack_37c = DAT_103554c4 ^ (uint)aUStack_31c;
  puStack_32c = (undefined1 *)&uStack_37c;
  ExceptionList = &pvStack_328;
  uStack_320 = 0;
  puVar7 = &uStack_37c;
  uStack_8 = uStack_37c;
  if (0x14 < param_1) goto LAB_101a3418;
  puVar7 = &uStack_37c;
  if (param_1 != *(int *)(in_ECX + 0x200)) {
    FName::FName((FName *)&iStack_334,0);
    piVar1 = *(int **)(*(int *)(DAT_103663bc + 0x50) + 0x19c);
    uVar2 = *(undefined4 *)
             (**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c);
    FName::FName((FName *)&puStack_330,(ushort *)L"Engine.PlayerController",1);
    iStack_334 = (int)puStack_330;
    pUVar17 = (UPackageMap *)0x0;
    uVar16 = 1;
    puVar15 = (ushort *)0x0;
    puVar8 = FName::operator*((FName *)&iStack_334);
    pUVar14 = (UObject *)0x0;
    pUVar9 = AController::StaticClass();
    uStack_398 = 0x101a34a7;
    pUVar9 = UObject::StaticLoadClass(pUVar9,pUVar14,puVar8,puVar15,uVar16,pUVar17);
    iVar11 = *piVar1;
    puVar10 = (undefined4 *)FRotator::FRotator((FRotator *)&uStack_340,0,0,0);
    ppuStack_39c = (undefined1 **)*puVar10;
    uStack_398 = puVar10[1];
    uStack_3a8 = 0;
    uStack_3a4 = 0;
    fStack_3a0 = 0.0;
    puStack_330 = (undefined1 *)&uStack_3ac;
    uStack_3ac = 0;
    FName::FName((FName *)&uStack_3ac,0);
    puStack_330 = (undefined1 *)(**(code **)(iVar11 + 0xc0))(pUVar9);
    if (puStack_330 == (undefined1 *)0x0) {
      appFailAssert("pController",".\\Src\\NPawnViewerWnd.cpp",0x6e5);
    }
    iVar11 = FUN_1014a730();
    puVar10 = (undefined4 *)(iVar11 + 0x87c + param_1 * 0x314);
    pUVar13 = aUStack_31c;
    for (iVar12 = 0xc5; iVar12 != 0; iVar12 = iVar12 + -1) {
      *(undefined4 *)pUVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      pUVar13 = pUVar13 + 4;
    }
    pUVar17 = (UPackageMap *)0x0;
    uVar16 = 0;
    puVar15 = (ushort *)0x0;
    puVar8 = User::GetClassNamePointer(aUStack_31c);
    pUVar14 = (UObject *)0x0;
    pUVar9 = APawn::StaticClass();
    uStack_398 = 0x101a357c;
    pUVar9 = UObject::StaticLoadClass(pUVar9,pUVar14,puVar8,puVar15,uVar16,pUVar17);
    puVar6 = puStack_330;
    *(UClass **)((int)puStack_330 + 0x4f8) = pUVar9;
    puVar7 = (uint *)puStack_32c;
    if (pUVar9 == (UClass *)0x0) goto LAB_101a3418;
    iVar11 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                              0x3c) + 0x3bc);
    uVar3 = *(undefined4 *)(iVar11 + 0x1bc);
    uVar4 = *(undefined4 *)(iVar11 + 0x1c0);
    fVar5 = *(float *)(iVar11 + 0x1c4);
    puStack_330 = (undefined1 *)*piVar1;
    puVar10 = (undefined4 *)FRotator::FRotator((FRotator *)&uStack_340,0,0,0);
    ppuStack_39c = (undefined1 **)*puVar10;
    uStack_398 = puVar10[1];
    puStack_344 = (undefined1 *)&uStack_3ac;
    uStack_3ac = uVar4;
    uStack_3a8 = uVar3;
    uStack_3a4 = uVar4;
    fStack_3a0 = fVar5 + 30.0;
    FName::FName((FName *)&uStack_3ac,0);
    this = (APawn *)(**(code **)((int)puStack_330 + 0xc0))(*(undefined4 *)((int)puVar6 + 0x4f8));
    puVar7 = (uint *)puStack_32c;
    if (this == (APawn *)0x0) goto LAB_101a3418;
    (**(code **)(*piVar1 + 0xac))();
    *(APawn **)
     (*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c) + 0x3bc) =
         this;
    *(undefined4 *)(this + 0x14d8) = uVar2;
    this[0xc2] = (APawn)0x4;
    uStack_340 = 0;
    uStack_33c = 0;
    uStack_338 = 0x3f800000;
    uStack_398 = 1;
    ppuStack_39c = (undefined1 **)0x101a36be;
    (**(code **)(*(int *)this + 0x1c8))();
    *(int *)(in_ECX + 0x200) = param_1;
    ppuStack_39c = (undefined1 **)0x101a36d8;
    iVar11 = FUN_1014a730();
    *(APawn **)(iVar11 + 0xa80 + *(int *)(in_ECX + 0x200) * 0x314) = this;
    ppuStack_39c = (undefined1 **)0x101a36f6;
    iVar11 = FUN_1014a730();
    ppuStack_39c = (undefined1 **)0x101a370f;
    User::SetPawnResource((User *)(iVar11 + 0x87c + *(int *)(in_ECX + 0x200) * 0x314));
    ppuStack_39c = (undefined1 **)0x101a371b;
    (**(code **)(*(int *)this + 0x1c0))();
    ppuStack_39c = *(undefined1 ***)(in_ECX + 0x200);
    fStack_3a0 = 3.041365e-29;
    FUN_10009f70();
    iVar11 = *(int *)this;
    ppuStack_39c = &puStack_344;
    fStack_3a0 = 3.0413693e-29;
    puVar10 = (undefined4 *)APawn::GetCurWaitAnimName(this);
    ppuStack_39c = (undefined1 **)0x0;
    fStack_3a0 = 1.4013e-45;
    uStack_3a4 = 0;
    uStack_3a8 = 0x3f800000;
    uStack_3ac = *puVar10;
    (**(code **)(iVar11 + 0x328))(0);
    FUN_101a20a0();
    FUN_1014a730();
    FUN_101a27f0();
    puVar7 = (uint *)puStack_32c;
  }
  puStack_32c = (undefined1 *)puVar7;
  uStack_320 = 0xffffffff;
  puVar7 = (uint *)puStack_32c;
LAB_101a3418:
  puStack_32c = (undefined1 *)puVar7;
  ExceptionList = pvStack_328;
  __security_check_cookie(uStack_8 ^ (uint)aUStack_31c);
  return;
}


// ==== 101a378b Catch@101a378b

void Catch_101a378b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_102a47f0);
}


// ==== 101a379f Catch@101a379f

void Catch_101a379f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_CharacterSelectWnd::OnNameComboBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a37c0 FUN_101a37c0

undefined4 FUN_101a37c0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216c60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101a20a0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101a380e Catch@101a380e

void Catch_101a380e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101a3822 Catch@101a3822

void Catch_101a3822(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_CharacterSelectWnd::OnSortByActionCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a3840 FUN_101a3840

undefined4 FUN_101a3840(void)

{
  int iVar1;
  UObject *pUVar2;
  int *piVar3;
  UPackage *pUVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  UPackage *pUStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uVar7;
  FName local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10216cbc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar6 = 0;
  FUN_10061b40();
  FName::FName(local_2c,0);
  UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_1001a820();
  }
  *(int **)(in_ECX + 0x1cc) = piVar3;
  (**(code **)(*piVar3 + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffffb8,0);
  UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_1001a820();
  }
  *(int **)(in_ECX + 0x1d0) = piVar3;
  (**(code **)(*piVar3 + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffff9c,0);
  UObject::GetTransientPackage();
  uStack_a0 = 0x101a399d;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_1001a820();
  }
  uVar7 = 3;
  *(int **)(in_ECX + 0x1d4) = piVar3;
  (**(code **)(*piVar3 + 0xc0))();
  uStack_a0 = *(undefined4 *)(in_ECX + 0x1d4);
  uStack_a4 = 0x101a39e5;
  FUN_10060d40();
  uStack_a0 = 0x101a39f1;
  FUN_1005c1e0();
  uStack_a0 = 0x101a39fc;
  FName::FName((FName *)&stack0xffffff80,0);
  uStack_b0 = uVar7;
  pUStack_b4 = UObject::GetTransientPackage();
  uStack_a4 = *(undefined4 *)GError_exref;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_a0 = 0;
    uStack_a4 = 0x40;
    uStack_a8 = 1;
    uStack_ac = 0;
    uStack_b0 = 0;
    pUStack_b4 = (UPackage *)0x101a3a2e;
    piVar3 = (int *)FUN_1001a820();
  }
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0x10;
  uStack_ac = 0x3c;
  *(int **)(in_ECX + 0x1d8) = piVar3;
  uStack_b0 = 0x78;
  pUStack_b4 = (UPackage *)0x64;
  (**(code **)(*piVar3 + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffff64,0);
  UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_1001a820();
  }
  uVar7 = 3;
  *(int **)(in_ECX + 0x1dc) = piVar3;
  (**(code **)(*piVar3 + 0xc0))();
  FUN_10060d40(*(undefined4 *)(in_ECX + 0x1dc));
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffff48,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,uVar7,0,0,*(undefined4 *)GError_exref,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar7 = 0;
  }
  else {
    FString::FString((FString *)&uStack_a8,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    FString::FString((FString *)&pUStack_b4,(ushort *)L"L2UI_ch3.button.SmallButton2");
    uVar7 = FUN_10006980(&pUStack_b4,&uStack_a8);
  }
  *(undefined4 *)(in_ECX + 0x1e0) = uVar7;
  if (pUVar2 != (UObject *)0x0) {
    FString::~FString((FString *)&pUStack_b4);
    FString::~FString((FString *)&uStack_a8);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1e0) + 0x1cc) = 0x113;
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0xc0))(100,0xb4,0x23,0x10,0,0);
  uVar7 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1e0),2);
  FUN_1005c1e0(uVar7);
  FUN_10003cf0(0x1ac);
  *(undefined4 *)(in_ECX + 0x215c) = 0;
  piVar3 = *(int **)(GL2GameData_exref + 0x3d08);
  uStack_ac = 2;
  if (0 < piVar3[1]) {
    do {
      iVar1 = *(int *)(*piVar3 + 8 + iVar6 * 0xc);
      if (iVar1 != 0) {
        FName::FName((FName *)&stack0xffffff2c,(ushort *)L"None",1);
        iVar5 = FName::operator!=((FName *)(iVar1 + 0x40),(FName *)&stack0xffffff2c);
        if (((iVar5 != 0) && (*(int *)(iVar1 + 0x1c) == 1)) && (*(int *)(iVar1 + 0x20) != 2)) {
          *(undefined4 *)(in_ECX + 0x21c + *(int *)(in_ECX + 0x215c) * 4) =
               *(undefined4 *)(iVar1 + 0x18);
          *(int *)(in_ECX + 0x215c) = *(int *)(in_ECX + 0x215c) + 1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < piVar3[1]);
  }
  ExceptionList = pUStack_b4;
  return 1;
}


// ==== 101a3cc0 FUN_101a3cc0

int * FUN_101a3cc0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = *(uint *)(in_ECX + 4);
  uVar1 = *(uint *)(in_ECX + 8);
  *param_1 = 0;
  if (uVar1 < uVar2) {
    FUN_101c238d();
  }
  *param_1 = in_ECX;
  param_1[1] = uVar2;
  return param_1;
}


// ==== 101a3cf0 FUN_101a3cf0

int * FUN_101a3cf0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 8);
  uVar2 = *(uint *)(in_ECX + 4);
  *param_1 = 0;
  if (uVar1 < uVar2) {
    FUN_101c238d();
  }
  *param_1 = in_ECX;
  param_1[1] = uVar1;
  return param_1;
}


// ==== 101a3d20 FUN_101a3d20

void FUN_101a3d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_101a2dd0(param_2,param_4,param_5);
  return;
}


// ==== 101a3d50 FUN_101a3d50

void FUN_101a3d50(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216ce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCPawnView_InvenTextWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 101a3db0 FUN_101a3db0

void FUN_101a3db0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10216d18;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnView_InvenTextWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101a3e10 FUN_101a3e10

void FUN_101a3e10(byte param_1)

{
  void *in_ECX;
  
  FUN_101a3db0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d0);
  }
  return;
}


// ==== 101a3e40 FUN_101a3e40

void FUN_101a3e40(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1017bd60(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCPawnView_InvenItemWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 101a3ea0 FUN_101a3ea0

void FUN_101a3ea0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10216d78;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnView_InvenItemWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_1017bdc0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101a3f00 FUN_101a3f00

void FUN_101a3f00(byte param_1)

{
  void *in_ECX;
  
  FUN_101a3ea0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2fc);
  }
  return;
}


// ==== 101a3f30 FUN_101a3f30

void FUN_101a3f30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10216da8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_1017be50(param_1,param_2,param_3,param_4,1,1);
  *in_ECX = NCPawnView_InvenItemWnd::vftable;
  local_8 = 1;
  in_ECX[0x9d] = 5;
  in_ECX[0x9e] = 3;
  FString::operator=((FString *)(in_ECX + 0x59),(ushort *)L"Inventory");
  ExceptionList = local_10;
  return;
}


// ==== 101a3fce Catch@101a3fce

void Catch_101a3fce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101a3fe2 Catch@101a3fe2

void Catch_101a3fe2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_InvenItemWnd::NCPawnView_InvenItemWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a4000 FUN_101a4000

void FUN_101a4000(void)

{
  undefined4 *in_ECX;
  User *this;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10216dd8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10061fa0();
  local_8 = 0;
  *in_ECX = NCPawnViewerWnd::vftable;
  in_ECX[0x208] = 0;
  in_ECX[0x219] = 0;
  this = (User *)(in_ECX + 0x21f);
  local_18 = 0x13;
  do {
    User::User(this);
    this = this + 0x314;
    local_18 = local_18 + -1;
  } while (-1 < local_18);
  in_ECX[499] = 0;
  in_ECX[500] = 0;
  in_ECX[0x1f5] = 0;
  in_ECX[0x1f6] = 0;
  in_ECX[0x1f7] = 0;
  in_ECX[0x1f8] = 0;
  in_ECX[0x1f9] = 0;
  in_ECX[0x1fa] = 0;
  in_ECX[0x1183] = 0;
  in_ECX[0x1185] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 101a40cf Catch@101a40cf

void Catch_101a40cf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101a40e3 Catch@101a40e3

void Catch_101a40e3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewerWnd::NCPawnViewerWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a4100 FUN_101a4100

void FUN_101a4100(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10216e08;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnViewerWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101a4160 FUN_101a4160

void FUN_101a4160(byte param_1)

{
  void *in_ECX;
  
  FUN_101a4100();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4640);
  }
  return;
}


// ==== 101a4190 FUN_101a4190

void FUN_101a4190(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  in_ECX[0x7a] = 0;
  in_ECX[0x7b] = 0;
  in_ECX[0x7c] = 0;
  in_ECX[0x7d] = 0;
  in_ECX[0x7e] = 0;
  in_ECX[0x7f] = 0;
  *in_ECX = NCPawnView_CharacterSelectWnd::vftable;
  in_ECX[0x80] = 0xffffffff;
  ExceptionList = local_c;
  return;
}


// ==== 101a4210 FUN_101a4210

void FUN_101a4210(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10216e68;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnView_CharacterSelectWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101a4270 FUN_101a4270

void FUN_101a4270(byte param_1)

{
  void *in_ECX;
  
  FUN_101a4210();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x204);
  }
  return;
}


// ==== 101a42a0 FUN_101a42a0

void FUN_101a42a0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCPawnViewer_MixAnimWnd::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x7b] = 0;
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101a4330 FUN_101a4330

void FUN_101a4330(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10216ec8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnViewer_MixAnimWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101a4390 FUN_101a4390

void FUN_101a4390(byte param_1)

{
  void *in_ECX;
  
  FUN_101a4330();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x20c);
  }
  return;
}


// ==== 101a43c0 FUN_101a43c0

void FUN_101a43c0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216ef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10175910(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCPawnView_CharacterSelect_List::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 101a4420 FUN_101a4420

void FUN_101a4420(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10216f28;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnView_CharacterSelect_List::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10175970(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101a4480 FUN_101a4480

void FUN_101a4480(byte param_1)

{
  void *in_ECX;
  
  FUN_101a4420();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x328);
  }
  return;
}


// ==== 101a44b0 FUN_101a44b0

void FUN_101a44b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216f58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10175910(DAT_103554c4 ^ (uint)&stack0xffffffec);
  in_ECX[0xc1] = param_1;
  *in_ECX = NCPawnView_CharacterSelect_List::vftable;
  in_ECX[0xc0] = param_2;
  in_ECX[0xc9] = 0xffffffff;
  ExceptionList = local_c;
  return;
}


// ==== 101a4530 FUN_101a4530

void FUN_101a4530(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216f88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe0);
  *in_ECX = NCPawnViewer_HairChangeWnd::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0;
  puVar2 = in_ECX + 0xa3;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  puVar2 = in_ECX + 0x123;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  in_ECX[0x7b] = 0;
  in_ECX[0x7c] = 0;
  in_ECX[0x7d] = 0;
  in_ECX[0x7e] = 0;
  in_ECX[0x7f] = 0;
  in_ECX[0x80] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101a4620 FUN_101a4620

void FUN_101a4620(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10216fb8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnViewer_HairChangeWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101a4680 FUN_101a4680

void FUN_101a4680(byte param_1)

{
  void *in_ECX;
  
  FUN_101a4620();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x68c);
  }
  return;
}


// ==== 101a46b0 FUN_101a46b0

void FUN_101a46b0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216fe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe0);
  in_ECX[0x73] = 0;
  *in_ECX = NCPawnView_ShortCutWnd::vftable;
  puVar2 = in_ECX + 0x74;
  for (iVar1 = 0x280; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  puVar2 = in_ECX + 0x2f4;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  ExceptionList = local_c;
  return;
}


// ==== 101a4760 FUN_101a4760

void FUN_101a4760(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10217018;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnView_ShortCutWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101a47c0 FUN_101a47c0

void FUN_101a47c0(byte param_1)

{
  void *in_ECX;
  
  FUN_101a4760();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xd10);
  }
  return;
}


// ==== 101a47f0 FUN_101a47f0

void FUN_101a47f0(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10217048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  FUN_10022f70("vector<T> too long",0x12);
  local_4 = 0;
  FUN_10023220(local_50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_102ae3b8);
}


// ==== 101a48e0 FUN_101a48e0

undefined4 FUN_101a48e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  UPackage *pUVar4;
  int in_ECX;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  uint uVar5;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  wchar_t *pwStack_104;
  undefined4 uStack_fc;
  FString *pFStack_e0;
  FString *pFStack_c4;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  wchar_t *pwStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  FString local_3c [20];
  FString local_28 [4];
  undefined8 local_24;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102170ea;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_1c = 0;
  local_8 = 0;
  uStack_50 = 0x101a491b;
  FUN_10061b40();
  uStack_50 = 0;
  local_24 = CONCAT44(&uStack_54,(undefined4)local_24);
  uStack_5c = 0x101a4929;
  FName::FName((FName *)&uStack_54,0);
  UObject::GetTransientPackage();
  uStack_5c = 0x350;
  uStack_60 = 0x101a493c;
  iVar1 = FUN_1005b950();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_5c = 0x101a494d;
    iVar1 = FUN_1001c510();
  }
  *(int *)(in_ECX + 0xc0) = iVar1;
  *(undefined4 *)(in_ECX + 200) = 0xaff12011;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xaff12011;
  uStack_50 = 3;
  uStack_54 = 0;
  uStack_5c = 0x14;
  local_24 = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 6.0);
  uStack_60 = (undefined4)local_24;
  uStack_64 = 3;
  uStack_68 = 2;
  uStack_6c = 0x101a49aa;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))();
  uStack_6c = 2;
  pwStack_70 = *(wchar_t **)(in_ECX + 0xc0);
  uStack_6c = FUN_10060d40();
  pwStack_70 = L"Ū챨⣯謐\xe8ce걜￩蚉Ǩ";
  FUN_1005c1e0();
  uStack_6c = 1;
  pwStack_70 = L"sek.cbui168";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1e8) = uVar2;
  uStack_6c = 1;
  pwStack_70 = L"sek.cbui144";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1ec) = uVar2;
  uStack_6c = 1;
  pwStack_70 = L"sek.cbui67";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1f0) = uVar2;
  uStack_6c = 1;
  pwStack_70 = L"sek.cbui68";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 500) = uVar2;
  uStack_6c = 1;
  pwStack_70 = L"sek.cbui69";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1f8) = uVar2;
  uStack_6c = 0;
  local_24 = CONCAT44(&pwStack_70,(undefined4)local_24);
  uStack_78 = 0x101a4a38;
  FName::FName((FName *)&pwStack_70,0);
  UObject::GetTransientPackage();
  uStack_78 = 0x330;
  uStack_7c = 0x101a4a45;
  iVar1 = FUN_1008b6f0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_6c = 0x101a4a53;
    iVar1 = FUN_1000b680();
  }
  *(int *)(in_ECX + 0x1cc) = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x1f04;
  uStack_6c = 3;
  pwStack_70 = (wchar_t *)0x0;
  uStack_78 = 0x11;
  uStack_7c = 0x81;
  uStack_80 = 0x1c;
  uStack_84 = 10;
  uStack_88 = 0x101a4a86;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0xc0))();
  uStack_88 = 2;
  uStack_8c = *(undefined4 *)(in_ECX + 0x1cc);
  uStack_88 = FUN_10060d40();
  uStack_8c = 0x101a4aa2;
  FUN_1005c1e0();
  uStack_88 = 0;
  local_24 = CONCAT44(&uStack_8c,(undefined4)local_24);
  uStack_94 = 0x101a4ab0;
  FName::FName((FName *)&uStack_8c,0);
  UObject::GetTransientPackage();
  uStack_94 = 0x328;
  uStack_98 = 0x101a4abd;
  iVar1 = FUN_1019c9f0();
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_88 = 0x12;
    uStack_8c = 500;
    piVar3 = (int *)FUN_101a44b0();
  }
  *(int **)(in_ECX + 0x1d0) = piVar3;
  uStack_88 = 3;
  uStack_8c = 0;
  uStack_94 = 0xda;
  uStack_98 = 0xb9;
  uStack_9c = 0x32;
  uStack_a0 = 10;
  uStack_a4 = 0x101a4afa;
  (**(code **)(*piVar3 + 0xc0))();
  uStack_a4 = 2;
  uStack_a8 = *(undefined4 *)(in_ECX + 0x1d0);
  uStack_a4 = FUN_10060d40();
  uStack_a8 = 0x101a4b16;
  FUN_1005c1e0();
  uStack_a4 = 0;
  local_24 = CONCAT44(&uStack_a8,(undefined4)local_24);
  FName::FName((FName *)&uStack_a8,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_a4 = 0;
    uStack_a8 = 0;
    iVar1 = FUN_100097b0();
  }
  *(int *)(in_ECX + 0x1d4) = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x101;
  uStack_a4 = 3;
  uStack_a8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc0))();
  pFStack_c4 = *(FString **)(in_ECX + 0x1d4);
  FUN_10060d40();
  pFStack_c4 = (FString *)0x101a4b96;
  FUN_1005c1e0();
  *(undefined4 *)(*(int *)(in_ECX + 0x1d4) + 0x2fc) = 0;
  local_24 = CONCAT44(&pFStack_c4,(undefined4)local_24);
  pFStack_c4 = extraout_ECX;
  FName::FName((FName *)&pFStack_c4,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    pFStack_c4 = (FString *)0x101a4bd4;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = 1;
    pFStack_c4 = (FString *)0x101a4bed;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 2;
    local_1c = 3;
    pFStack_c4 = local_3c;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d8) = uVar2;
  local_8 = 1;
  uVar5 = local_1c;
  if ((local_1c & 2) != 0) {
    uVar5 = local_1c & 0xfffffffd;
    local_1c = uVar5;
    FString::~FString(local_28);
  }
  local_8 = 0;
  if ((uVar5 & 1) != 0) {
    local_1c = uVar5 & 0xfffffffe;
    FString::~FString(local_3c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d8) + 0x1cc) = 0x129;
  pFStack_c4 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xc0))();
  pFStack_e0 = *(FString **)(in_ECX + 0x1d8);
  FUN_10060d40();
  pFStack_e0 = (FString *)0x101a4c9c;
  FUN_1005c1e0();
  pFStack_e0 = (FString *)0x101a4caa;
  FString::FString(local_3c,(ushort *)&DAT_10293508);
  local_8._0_1_ = 3;
  pFStack_e0 = (FString *)0x101a4cbd;
  FUN_10003dc0();
  local_8._0_1_ = 0;
  FString::~FString(local_3c);
  local_24 = CONCAT44(&pFStack_e0,(undefined4)local_24);
  pFStack_e0 = extraout_ECX_00;
  FName::FName((FName *)&pFStack_e0,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    pFStack_e0 = (FString *)0x101a4cfe;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,4);
    local_1c = local_1c | 4;
    pFStack_e0 = (FString *)0x101a4d14;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 5;
    local_1c = local_1c | 8;
    pFStack_e0 = local_28;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1dc) = uVar2;
  local_8 = 4;
  uVar5 = local_1c;
  if ((local_1c & 8) != 0) {
    uVar5 = local_1c & 0xfffffff7;
    local_1c = uVar5;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar5 & 4) != 0) {
    local_1c = uVar5 & 0xfffffffb;
    FString::~FString(local_28);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1dc) + 0x1cc) = 0x12a;
  pFStack_e0 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0xc0))();
  uStack_fc = *(undefined4 *)(in_ECX + 0x1dc);
  FUN_10060d40();
  uStack_fc = 0x101a4dc0;
  FUN_1005c1e0();
  uStack_fc = 0x101a4dce;
  FString::FString(local_3c,(ushort *)&DAT_10294dac);
  local_8._0_1_ = 6;
  uStack_fc = 0x101a4de1;
  FUN_10003dc0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  local_24 = CONCAT44(&uStack_fc,(undefined4)local_24);
  pwStack_104 = L"\xd7ff桐̔";
  FName::FName((FName *)&uStack_fc,0);
  UObject::GetTransientPackage();
  pwStack_104 = (wchar_t *)0x314;
  uStack_108 = 0x101a4e0b;
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_fc = 0;
    pwStack_104 = L"LOOP";
    uStack_108 = 0x101a4e24;
    iVar1 = FUN_100097b0();
  }
  *(int *)(in_ECX + 0x1e0) = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 300;
  uStack_fc = 0;
  pwStack_104 = (wchar_t *)0x10;
  uStack_108 = 0x32;
  uStack_10c = 0x113;
  uStack_110 = 0x5e;
  uStack_114 = 0x101a4e59;
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0xc0))();
  uStack_114 = 2;
  uStack_118 = *(undefined4 *)(in_ECX + 0x1e0);
  uStack_114 = FUN_10060d40();
  uStack_118 = 0x101a4e75;
  FUN_1005c1e0();
  *(undefined4 *)(*(int *)(in_ECX + 0x1e0) + 0x2fc) = 0;
  uStack_114 = 0;
  local_24 = CONCAT44(&uStack_118,(undefined4)local_24);
  FName::FName((FName *)&uStack_118,0);
  pUVar4 = UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10(0x400,pUVar4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_114 = 0;
    uStack_118 = 0;
    iVar1 = FUN_1001a820(0,0,1,0x40);
  }
  *(int *)(in_ECX + 0x1e4) = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 299;
  uStack_114 = 3;
  uStack_118 = 0;
  (**(code **)(**(int **)(in_ECX + 0x1e4) + 0xc0))(0x28,0x127,0x28,0x10,0);
  uVar2 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1e4),2);
  FUN_1005c1e0(uVar2);
  ExceptionList = local_10;
  return 1;
}


// ==== 101a4f2c Catch@101a4f2c

void Catch_101a4f2c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 101a4f40 Catch@101a4f40

void Catch_101a4f40(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_CharacterSelectWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a4f60 FUN_101a4f60

void FUN_101a4f60(uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_ECX;
  uint extraout_EDX;
  uint uVar7;
  int iVar8;
  uint uStack_3c;
  undefined1 local_2c [8];
  undefined1 local_24 [12];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10217110;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  uVar7 = param_1;
  puVar2 = &uStack_3c;
  if (0x1fffffff < param_1) {
    FUN_101a47f0();
    uVar7 = extraout_EDX;
    puVar2 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar2;
  if (*(int *)(in_ECX + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4) >> 3;
  }
  if (uVar3 < uVar7) {
    iVar4 = FUN_1019c990(uVar7,0);
    local_8 = 0;
    local_18 = iVar4;
    puVar5 = (undefined4 *)FUN_101a3cf0(local_24);
    puVar6 = (undefined4 *)FUN_101a3cc0(local_2c);
    FUN_101a3d20(*puVar6,puVar6[1],*puVar5,puVar5[1],iVar4);
    local_8 = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 4);
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(in_ECX + 8) - iVar1 >> 3;
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
    }
    *(uint *)(in_ECX + 0xc) = iVar4 + param_1 * 8;
    *(int *)(in_ECX + 8) = iVar4 + iVar8 * 8;
    *(int *)(in_ECX + 4) = iVar4;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101a5054 Catch@101a5054

void Catch_101a5054(void)

{
  int unaff_EBP;
  
  FUN_1008cfa0(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a5070 FUN_101a5070

undefined4 FUN_101a5070(void)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_10 [12];
  
  iVar2 = (**(code **)(*(int *)in_ECX[0x73] + 0x1f8))();
  if ((((iVar2 != 0) && (iVar2 = (**(code **)(*(int *)in_ECX[0x74] + 0x1f8))(), iVar2 != 0)) &&
      (iVar2 = (**(code **)(*(int *)in_ECX[0x75] + 0x1f8))(), iVar2 != 0)) &&
     ((iVar2 = (**(code **)(*(int *)in_ECX[0x76] + 0x1f8))(), iVar2 != 0 &&
      (iVar2 = (**(code **)(*(int *)in_ECX[0x77] + 0x1f8))(), iVar2 != 0)))) {
    puVar3 = (ushort *)(**(code **)(*(int *)in_ECX[0x73] + 0x1f8))();
    iVar2 = appAtoi(puVar3);
    puVar3 = (ushort *)(**(code **)(*(int *)in_ECX[0x74] + 0x1f8))();
    fVar9 = appAtof(puVar3);
    in_ECX[0x7b] = (int)fVar9;
    puVar3 = (ushort *)(**(code **)(*(int *)in_ECX[0x75] + 0x1f8))();
    fVar9 = appAtof(puVar3);
    in_ECX[0x7c] = (int)fVar9;
    puVar3 = (ushort *)(**(code **)(*(int *)in_ECX[0x76] + 0x1f8))();
    fVar9 = appAtof(puVar3);
    in_ECX[0x7d] = (int)fVar9;
    puVar3 = (ushort *)(**(code **)(*(int *)in_ECX[0x77] + 0x1f8))();
    fVar9 = appAtof(puVar3);
    in_ECX[0x7e] = (int)fVar9;
    if (in_ECX[0x79] == 0) {
      in_ECX[0x7a] = iVar2;
      puVar3 = (ushort *)(**(code **)(*(int *)in_ECX[0x74] + 0x1f8))();
      fVar9 = appAtof(puVar3);
      in_ECX[0x7b] = (int)fVar9;
      puVar3 = (ushort *)(**(code **)(*(int *)in_ECX[0x75] + 0x1f8))();
      fVar9 = appAtof(puVar3);
      in_ECX[0x7c] = (int)fVar9;
      puVar3 = (ushort *)(**(code **)(*(int *)in_ECX[0x76] + 0x1f8))();
      fVar9 = appAtof(puVar3);
      in_ECX[0x7d] = (int)fVar9;
      puVar3 = (ushort *)(**(code **)(*(int *)in_ECX[0x77] + 0x1f8))();
      fVar9 = appAtof(puVar3);
      in_ECX[0x7e] = (int)fVar9;
      dVar8 = appSecondsQPC();
      *(double *)(in_ECX + 0x7f) = dVar8;
      FUN_101a4f60(in_ECX[0x7a]);
      iVar2 = 0;
      if (0 < in_ECX[0x7a]) {
        do {
          puVar4 = (undefined4 *)(**(code **)(*in_ECX + 0x1f8))(auStack_10);
          puVar5 = (undefined4 *)FUN_101a17c0(iVar2);
          uVar1 = puVar4[1];
          *puVar5 = *puVar4;
          iVar2 = iVar2 + 1;
          puVar5[1] = uVar1;
        } while (iVar2 < in_ECX[0x7a]);
      }
      in_ECX[0x79] = 1;
      return 1;
    }
    dVar8 = appSecondsQPC();
    *(double *)(in_ECX + 0x7f) = dVar8;
    iVar7 = in_ECX[0x7a];
    if (iVar7 < iVar2) {
      do {
        puVar4 = (undefined4 *)(**(code **)(*in_ECX + 0x1f8))(auStack_10);
        puVar5 = (undefined4 *)FUN_101a17c0(iVar7);
        uVar1 = puVar4[1];
        iVar7 = iVar7 + 1;
        *puVar5 = *puVar4;
        puVar5[1] = uVar1;
      } while (iVar7 < iVar2);
      in_ECX[0x7a] = iVar2;
      return 1;
    }
    iVar6 = iVar2;
    if (iVar2 < iVar7) {
      do {
        iVar7 = **(int **)(*(int *)(DAT_103663bc + 0x50) + 0x19c);
        puVar4 = (undefined4 *)FUN_101a17c0(iVar6);
        (**(code **)(iVar7 + 0xac))(*puVar4,0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < in_ECX[0x7a]);
    }
    in_ECX[0x7a] = iVar2;
  }
  return 1;
}


// ==== 101a5370 FUN_101a5370

void FUN_101a5370(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10217146;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCPawnViewer_Simulator::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x78] = 0;
  in_ECX[0x84] = 0;
  in_ECX[0x85] = 0;
  in_ECX[0x86] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101a5400 FUN_101a5400

void FUN_101a5400(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10217186;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnViewer_Simulator::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  if (*(int *)(in_ECX + 0x210) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0x210),uVar1);
  }
  *(undefined4 *)(in_ECX + 0x210) = 0;
  *(undefined4 *)(in_ECX + 0x214) = 0;
  *(undefined4 *)(in_ECX + 0x218) = 0;
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 101a5490 FUN_101a5490

void FUN_101a5490(byte param_1)

{
  void *in_ECX;
  
  FUN_101a5400();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2160);
  }
  return;
}


// ==== 101a54d0 FUN_101a54d0

undefined4 FUN_101a54d0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  UPackage *pUVar4;
  undefined4 uVar5;
  int *in_ECX;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  FString *extraout_ECX_01;
  FString *extraout_ECX_02;
  FString *extraout_ECX_03;
  FString *extraout_ECX_04;
  FString *extraout_ECX_05;
  FString *extraout_ECX_06;
  FString *extraout_ECX_07;
  FString *extraout_ECX_08;
  FString *extraout_ECX_09;
  uint uVar6;
  FString *pFStack_398;
  int iStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined *puStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  int iStack_358;
  FString *pFStack_33c;
  int iStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  int iStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined *puStack_2f0;
  int iStack_2e8;
  FString *pFStack_2cc;
  FString *pFStack_2b0;
  FString *pFStack_294;
  FString *pFStack_278;
  int iStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  FString *pFStack_240;
  FString *pFStack_224;
  int iStack_208;
  FString *pFStack_1ec;
  FString *pFStack_1d0;
  FString *pFStack_1b4;
  int iStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int iStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int iStack_160;
  undefined *puStack_15c;
  int iStack_158;
  wchar_t *pwStack_154;
  wchar_t *pwStack_150;
  wchar_t *pwStack_14c;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_10c;
  undefined *puStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  wchar_t *pwStack_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  wchar_t *pwStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  FString local_4c [12];
  FString local_40 [20];
  int local_2c;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10217488;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_1c = 0;
  local_8 = 0;
  for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
    in_ECX[local_20 + 0x1188] = -1;
  }
  uStack_60 = 0;
  uStack_64 = 0xffffffff;
  local_28 = CONCAT44(&uStack_64,(undefined4)local_28);
  uStack_6c = 0x101a552d;
  FName::FName((FName *)&uStack_64,0);
  UObject::GetTransientPackage();
  uStack_6c = 0x350;
  uStack_70 = 0x101a5540;
  iVar1 = FUN_1005b950();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_60 = 0;
    uStack_64 = 0;
    uStack_6c = 0x101a5552;
    iVar1 = FUN_1001c510();
  }
  in_ECX[0x30] = iVar1;
  in_ECX[0x32] = 0xf2;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf2;
  uStack_60 = 3;
  uStack_64 = 0;
  uStack_6c = 0x19;
  local_28 = (longlong)ROUND((float)in_ECX[0x22]);
  uStack_70 = (undefined4)local_28;
  uStack_74 = 0x13;
  uStack_78 = 0;
  uStack_7c = 0x101a55a8;
  (**(code **)(*(int *)in_ECX[0x30] + 0xc0))();
  uStack_7c = 2;
  pwStack_80 = (wchar_t *)in_ECX[0x30];
  uStack_7c = FUN_10060d40();
  pwStack_80 = L"Ūh⤖謐\xe8ceꁞ￩蚉ࠠ";
  FUN_1005c1e0();
  uStack_7c = 1;
  pwStack_80 = L"L2UI.QuestWnd.questBack3";
  iVar1 = FUN_1003f630();
  in_ECX[0x208] = iVar1;
  uStack_7c = 1;
  pwStack_80 = L"L2UI.etcWnd.OptionBack";
  iVar1 = FUN_1003f630();
  in_ECX[0x209] = iVar1;
  uStack_7c = 0;
  local_28 = CONCAT44(&pwStack_80,(undefined4)local_28);
  uStack_88 = 0x101a55fa;
  FName::FName((FName *)&pwStack_80,0);
  UObject::GetTransientPackage();
  uStack_88 = 0x20c;
  uStack_8c = 0x101a5607;
  iVar1 = FUN_1019cae0();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_7c = 0x101a5615;
    piVar2 = (int *)FUN_101a42a0();
  }
  in_ECX[0x205] = (int)piVar2;
  uStack_7c = 3;
  pwStack_80 = (wchar_t *)0x0;
  uStack_88 = 0xec;
  uStack_8c = 0x122;
  uStack_90 = 0x35;
  uStack_94 = 0;
  uStack_98 = 0x101a563c;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_98 = 2;
  iStack_9c = in_ECX[0x205];
  uStack_98 = FUN_10060d40();
  iStack_9c = 0x101a5658;
  FUN_1005c1e0();
  uStack_98 = 0;
  local_28 = CONCAT44(&iStack_9c,(undefined4)local_28);
  uStack_a4 = 0x101a5666;
  FName::FName((FName *)&iStack_9c,0);
  UObject::GetTransientPackage();
  uStack_a4 = 0x68c;
  uStack_a8 = 0x101a5673;
  iVar1 = FUN_1019cb10();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_98 = 0x101a5681;
    piVar2 = (int *)FUN_101a4530();
  }
  in_ECX[0x206] = (int)piVar2;
  uStack_98 = 3;
  iStack_9c = 0;
  uStack_a4 = 0xec;
  uStack_a8 = 0x122;
  uStack_ac = 0x35;
  uStack_b0 = 0;
  uStack_b4 = 0x101a56a8;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_b4 = 2;
  iStack_b8 = in_ECX[0x206];
  uStack_b4 = FUN_10060d40();
  iStack_b8 = 0x101a56c4;
  FUN_1005c1e0();
  uStack_b4 = 0;
  local_28 = CONCAT44(&iStack_b8,(undefined4)local_28);
  uStack_c0 = 0x101a56d2;
  FName::FName((FName *)&iStack_b8,0);
  UObject::GetTransientPackage();
  uStack_c0 = 0x2160;
  uStack_c4 = 0x101a56df;
  iVar1 = FUN_1019cb40();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_b4 = 0x101a56ed;
    piVar2 = (int *)FUN_101a5370();
  }
  in_ECX[0x207] = (int)piVar2;
  uStack_b4 = 3;
  iStack_b8 = 0;
  uStack_c0 = 0xec;
  uStack_c4 = 0x122;
  uStack_c8 = 0x35;
  uStack_cc = 0;
  uStack_d0 = 0x101a5714;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_d0 = 2;
  iStack_d4 = in_ECX[0x207];
  uStack_d0 = FUN_10060d40();
  iStack_d4 = 0x101a5730;
  FUN_1005c1e0();
  uStack_d0 = 0;
  local_28 = CONCAT44(&iStack_d4,(undefined4)local_28);
  uStack_dc = 0x101a573e;
  FName::FName((FName *)&iStack_d4,0);
  UObject::GetTransientPackage();
  uStack_dc = 0x310;
  uStack_e0 = 0x101a574b;
  iVar1 = FUN_100b1e60();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_d0 = 0x101a5759;
    iVar1 = FUN_100514d0();
  }
  in_ECX[0x21a] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xfe002a;
  uStack_d0 = 3;
  iStack_d4 = 0;
  uStack_dc = 0x10;
  uStack_e0 = 0xdc;
  uStack_e4 = 0x2a;
  uStack_e8 = 0x14;
  uStack_ec = 0x101a578e;
  (**(code **)(*(int *)in_ECX[0x21a] + 0xc0))();
  uStack_ec = 2;
  iStack_f0 = in_ECX[0x21a];
  uStack_ec = FUN_10060d40();
  iStack_f0 = 0x101a57aa;
  FUN_1005c1e0();
  uStack_ec = 0xffffffff;
  iStack_f0 = 0;
  pwStack_f8 = L"l2ui_ch3.tabbutton.normal_tab_on";
  uStack_fc = 0x10;
  uStack_100 = 0x46;
  iStack_104 = in_ECX[0x205];
  puStack_108 = &DAT_10295124;
  iStack_10c = 0x101a57d3;
  FUN_10050440();
  uStack_ec = 0xffffffff;
  iStack_f0 = 0;
  pwStack_f8 = L"l2ui_ch3.tabbutton.normal_tab_on";
  uStack_fc = 0x10;
  uStack_100 = 0x46;
  iStack_104 = in_ECX[0x206];
  puStack_108 = &DAT_10295118;
  iStack_10c = 0x101a57fc;
  FUN_10050440();
  uStack_ec = 0xffffffff;
  iStack_f0 = 0;
  pwStack_f8 = L"l2ui_ch3.tabbutton.normal_tab_on";
  uStack_fc = 0x10;
  uStack_100 = 0x46;
  iStack_104 = in_ECX[0x207];
  puStack_108 = &DAT_1029510c;
  iStack_10c = 0x101a5825;
  FUN_10050440();
  for (iVar1 = 0; local_20 = iVar1, iVar1 < 7; iVar1 = iVar1 + 1) {
    uStack_ec = 0;
    local_28 = CONCAT44(&iStack_f0,(undefined4)local_28);
    pwStack_f8 = L"\xd7ff桐˼";
    FName::FName((FName *)&iStack_f0,0);
    UObject::GetTransientPackage();
    pwStack_f8 = (wchar_t *)0x2fc;
    uStack_fc = 0x101a5850;
    iVar3 = FUN_1019ca80();
    if (iVar3 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      uStack_ec = 0x20;
      iStack_f0 = 0x50;
      pwStack_f8 = (wchar_t *)0x7;
      uStack_fc = 0x101a5866;
      piVar2 = (int *)FUN_101a3f30();
    }
    in_ECX[iVar1 + 499] = (int)piVar2;
    uStack_ec = 3;
    iStack_f0 = 0;
    pwStack_f8 = (wchar_t *)0x8c;
    uStack_fc = 0x111;
    uStack_100 = 0x13f;
    iStack_104 = 0x10;
    puStack_108 = (undefined *)0x101a5894;
    (**(code **)(*piVar2 + 0xc0))();
    puStack_108 = (undefined *)0x31;
    iStack_10c = in_ECX[iVar1 + 499];
    puStack_108 = (undefined *)FUN_10060d40();
    iStack_10c = 0x101a58b2;
    FUN_1005c1e0();
    puStack_108 = (undefined *)0x0;
    local_28 = CONCAT44(&iStack_10c,(undefined4)local_28);
    uStack_114 = 0x101a58c2;
    FName::FName((FName *)&iStack_10c,0);
    UObject::GetTransientPackage();
    uStack_114 = 0x1d0;
    uStack_118 = 0x101a58cf;
    iVar3 = FUN_1019ca50();
    if (iVar3 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      puStack_108 = (undefined *)0x101a58dd;
      piVar2 = (int *)FUN_101a3d50();
    }
    in_ECX[iVar1 + 0x1fb] = (int)piVar2;
    puStack_108 = (undefined *)0x3;
    iStack_10c = 0;
    uStack_114 = 0x8c;
    uStack_118 = 0x111;
    uStack_11c = 0x13f;
    uStack_120 = 0x10;
    uStack_124 = 0x101a590b;
    (**(code **)(*piVar2 + 0xc0))();
    uStack_ec = 0x11;
    iStack_f0 = in_ECX[iVar1 + 0x1fb];
    uStack_ec = FUN_10060d40();
    iStack_f0 = 0x101a5929;
    FUN_1005c1e0();
  }
  uStack_ec = 0;
  local_28 = CONCAT44(&iStack_f0,(undefined4)local_28);
  pwStack_f8 = L"\xd7ff桐˼";
  FName::FName((FName *)&iStack_f0,0);
  UObject::GetTransientPackage();
  pwStack_f8 = (wchar_t *)0x2fc;
  uStack_fc = 0x101a594e;
  iVar1 = FUN_1019ca80();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_ec = 0x20;
    iStack_f0 = 0x50;
    pwStack_f8 = (wchar_t *)0x7;
    uStack_fc = 0x101a5964;
    piVar2 = (int *)FUN_101a3f30();
  }
  in_ECX[0x1fa] = (int)piVar2;
  uStack_ec = 3;
  iStack_f0 = 0;
  pwStack_f8 = (wchar_t *)0x8c;
  uStack_fc = 0x104;
  uStack_100 = 0x13f;
  iStack_104 = 0x10;
  puStack_108 = (undefined *)0x101a598f;
  (**(code **)(*piVar2 + 0xc0))();
  puStack_108 = (undefined *)0x31;
  iStack_10c = in_ECX[0x1fa];
  puStack_108 = (undefined *)FUN_10060d40();
  iStack_10c = 0x101a59ab;
  FUN_1005c1e0();
  puStack_108 = (undefined *)0x0;
  local_28 = CONCAT44(&iStack_10c,(undefined4)local_28);
  uStack_114 = 0x101a59b9;
  FName::FName((FName *)&iStack_10c,0);
  UObject::GetTransientPackage();
  uStack_114 = 0x1d0;
  uStack_118 = 0x101a59c6;
  iVar1 = FUN_1019ca50();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    puStack_108 = (undefined *)0x101a59d4;
    piVar2 = (int *)FUN_101a3d50();
  }
  in_ECX[0x202] = (int)piVar2;
  puStack_108 = (undefined *)0x3;
  iStack_10c = 0;
  uStack_114 = 0x8c;
  uStack_118 = 0x118;
  uStack_11c = 0x13f;
  uStack_120 = 0x10;
  uStack_124 = 0x101a59ff;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_124 = 0x11;
  iStack_128 = in_ECX[0x202];
  uStack_124 = FUN_10060d40();
  iStack_128 = 0x101a5a1b;
  FUN_1005c1e0();
  uStack_124 = 0;
  local_28 = CONCAT44(&iStack_128,(undefined4)local_28);
  uStack_130 = 0x101a5a29;
  FName::FName((FName *)&iStack_128,0);
  UObject::GetTransientPackage();
  uStack_130 = 0x310;
  uStack_134 = 0x101a5a36;
  iVar1 = FUN_100b1e60();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_124 = 0x101a5a44;
    iVar1 = FUN_100514d0();
  }
  in_ECX[0x219] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xfe001a;
  uStack_124 = 3;
  iStack_128 = 0;
  uStack_130 = 0x10;
  uStack_134 = 0xd8;
  uStack_138 = 0x122;
  uStack_13c = 0x14;
  uStack_140 = 0x101a5a7a;
  (**(code **)(*(int *)in_ECX[0x219] + 0xc0))();
  uStack_140 = 2;
  iStack_144 = in_ECX[0x219];
  uStack_140 = FUN_10060d40();
  iStack_144 = 0x101a5a96;
  FUN_1005c1e0();
  uStack_140 = 0;
  iStack_144 = 0;
  pwStack_14c = (wchar_t *)0x0;
  pwStack_150 = L"l2ui_ch3.tabbutton.normal_tab";
  pwStack_154 = L"l2ui_ch3.tabbutton.normal_tab_on";
  iStack_158 = 0x10;
  puStack_15c = (undefined *)0x1b;
  iStack_160 = in_ECX[499];
  uStack_168 = 0x101a5abd;
  FUN_1004ff30();
  uStack_140 = 0;
  iStack_144 = 0;
  pwStack_14c = (wchar_t *)0x0;
  pwStack_150 = L"l2ui_ch3.tabbutton.normal_tab";
  pwStack_154 = L"l2ui_ch3.tabbutton.normal_tab_on";
  iStack_158 = 0x10;
  puStack_15c = (undefined *)0x1b;
  iStack_160 = in_ECX[500];
  uStack_168 = 0x101a5ae4;
  FUN_1004ff30();
  uStack_140 = 0;
  iStack_144 = 0;
  pwStack_14c = (wchar_t *)0x0;
  pwStack_150 = L"l2ui_ch3.tabbutton.normal_tab";
  pwStack_154 = L"l2ui_ch3.tabbutton.normal_tab_on";
  iStack_158 = 0x10;
  puStack_15c = (undefined *)0x1b;
  iStack_160 = in_ECX[0x1f5];
  uStack_168 = 0x101a5b0b;
  FUN_1004ff30();
  uStack_140 = 0;
  iStack_144 = 0;
  pwStack_14c = (wchar_t *)0x0;
  pwStack_150 = L"l2ui_ch3.tabbutton.normal_tab";
  pwStack_154 = L"l2ui_ch3.tabbutton.normal_tab_on";
  iStack_158 = 0x10;
  puStack_15c = (undefined *)0x1b;
  iStack_160 = in_ECX[0x1f6];
  uStack_168 = 0x101a5b32;
  FUN_1004ff30();
  uStack_140 = 0;
  iStack_144 = 0;
  pwStack_14c = (wchar_t *)0x0;
  pwStack_150 = L"l2ui_ch3.tabbutton.normal_tab";
  pwStack_154 = L"l2ui_ch3.tabbutton.normal_tab_on";
  iStack_158 = 0x10;
  puStack_15c = (undefined *)0x1b;
  iStack_160 = in_ECX[0x1f7];
  uStack_168 = 0x101a5b5c;
  FUN_1004ff30();
  uStack_140 = 0xffffffff;
  iStack_144 = 0;
  pwStack_14c = L"l2ui_ch3.tabbutton.normal_tab_on";
  pwStack_150 = (wchar_t *)0x10;
  pwStack_154 = (wchar_t *)0x1b;
  iStack_158 = in_ECX[0x1f8];
  puStack_15c = &DAT_10295104;
  iStack_160 = 0x101a5b84;
  FUN_10050440();
  uStack_140 = 0;
  iStack_144 = 0;
  pwStack_14c = (wchar_t *)0x0;
  pwStack_150 = L"l2ui_ch3.tabbutton.normal_tab";
  pwStack_154 = L"l2ui_ch3.tabbutton.normal_tab_on";
  iStack_158 = 0x10;
  puStack_15c = (undefined *)0x1b;
  iStack_160 = in_ECX[0x1f9];
  uStack_168 = 0x101a5bab;
  FUN_1004ff30();
  uStack_140 = 0xffffffff;
  iStack_144 = 0;
  pwStack_14c = L"l2ui_ch3.tabbutton.normal_tab_on";
  pwStack_150 = (wchar_t *)0x10;
  pwStack_154 = (wchar_t *)0x1b;
  iStack_158 = in_ECX[0x1fa];
  puStack_15c = &DAT_102950fc;
  iStack_160 = 0x101a5bd3;
  FUN_10050440();
  uStack_140 = 0;
  local_28 = CONCAT44(&iStack_144,(undefined4)local_28);
  pwStack_14c = L"\xd7ff桐̔";
  FName::FName((FName *)&iStack_144,0);
  UObject::GetTransientPackage();
  pwStack_14c = (wchar_t *)0x314;
  pwStack_150 = L"쒃㬐瓃匑卓\xf468⥐謐\xe8c8㮬￦˫쀳蚉࡬";
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_140 = 0;
    iStack_144 = 0;
    pwStack_14c = L"GUI";
    pwStack_150 = L"˫쀳蚉࡬";
    iVar1 = FUN_100097b0();
  }
  in_ECX[0x21b] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf4;
  uStack_140 = 3;
  iStack_144 = 0;
  pwStack_14c = (wchar_t *)0x10;
  pwStack_150 = (wchar_t *)0x27;
  pwStack_154 = (wchar_t *)0x124;
  iStack_158 = 0xf8;
  puStack_15c = (undefined *)0x101a5c3a;
  (**(code **)(*(int *)in_ECX[0x21b] + 0xc0))();
  puStack_15c = (undefined *)0x2;
  iStack_160 = in_ECX[0x21b];
  puStack_15c = (undefined *)FUN_10060d40();
  iStack_160 = 0x101a5c56;
  FUN_1005c1e0();
  *(undefined4 *)(in_ECX[0x21b] + 0x2fc) = 1;
  for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1) {
    in_ECX[local_2c * 0xc5 + 0x2a0] = 0;
  }
  puStack_15c = (undefined *)0x0;
  local_28 = CONCAT44(&iStack_160,(undefined4)local_28);
  uStack_168 = 0x101a5c92;
  FName::FName((FName *)&iStack_160,0);
  UObject::GetTransientPackage();
  uStack_168 = 0x204;
  uStack_16c = 0x101a5c9f;
  iVar1 = FUN_1019ca20();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    puStack_15c = (undefined *)0x101a5cad;
    piVar2 = (int *)FUN_101a4190();
  }
  in_ECX[0x203] = (int)piVar2;
  puStack_15c = (undefined *)0x3;
  iStack_160 = 0;
  uStack_168 = 0x226;
  uStack_16c = 0xeb;
  uStack_170 = 0x36;
  uStack_174 = 10;
  uStack_178 = 0x101a5cd5;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_178 = 8;
  iStack_17c = in_ECX[0x203];
  uStack_178 = FUN_10060d40();
  iStack_17c = 0x101a5cfb;
  FUN_1005c1e0();
  uStack_178 = 0;
  local_28 = CONCAT44(&iStack_17c,(undefined4)local_28);
  uStack_184 = 0x101a5d09;
  FName::FName((FName *)&iStack_17c,0);
  UObject::GetTransientPackage();
  uStack_184 = 0xd10;
  uStack_188 = 0x101a5d16;
  iVar1 = FUN_1019cab0();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_178 = 0x101a5d24;
    piVar2 = (int *)FUN_101a46b0();
  }
  in_ECX[0x204] = (int)piVar2;
  uStack_178 = 3;
  iStack_17c = 0;
  uStack_184 = 0x2c;
  uStack_188 = 0x1b5;
  uStack_18c = 0;
  uStack_190 = 0;
  uStack_194 = 0x101a5d47;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_194 = 0x4000;
  iStack_198 = in_ECX[0x204];
  uStack_194 = FUN_10060d40();
  iStack_198 = 0x101a5d70;
  FUN_1005c1e0();
  uStack_194 = 0;
  local_28 = CONCAT44(&iStack_198,(undefined4)local_28);
  FName::FName((FName *)&iStack_198,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1008b6f0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_194 = 0x101a5d99;
    iVar1 = FUN_1000b680();
  }
  in_ECX[0x1186] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x114;
  uStack_194 = 3;
  iStack_198 = 0;
  (**(code **)(*(int *)in_ECX[0x1186] + 0xc0))();
  pFStack_1b4 = (FString *)in_ECX[0x1186];
  FUN_10060d40();
  pFStack_1b4 = (FString *)0x101a5de8;
  FUN_1005c1e0();
  pFStack_1b4 = (FString *)0x101a5df8;
  FUN_1000b3d0();
  pFStack_1b4 = (FString *)0x101a5e08;
  FUN_1000b3d0();
  pFStack_1b4 = (FString *)0x101a5e18;
  FUN_1000b3d0();
  pFStack_1b4 = (FString *)0x101a5e28;
  FUN_1000b3d0();
  pFStack_1b4 = (FString *)0x101a5e38;
  FUN_1000b3d0();
  pFStack_1b4 = (FString *)0x101a5e48;
  FUN_1000b3d0();
  pFStack_1b4 = (FString *)0x101a5e58;
  FUN_1000b3d0();
  local_28 = CONCAT44(&pFStack_1b4,(undefined4)local_28);
  pFStack_1b4 = extraout_ECX;
  FName::FName((FName *)&pFStack_1b4,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  local_28 = CONCAT44(iVar1,(undefined4)local_28);
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar6 = local_1c;
  }
  else {
    pFStack_1b4 = (FString *)0x101a5e8b;
    FString::FString(local_4c,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    uVar6 = local_1c;
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = local_1c | 1;
    pFStack_1b4 = (FString *)0x101a5ea6;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 2;
    pFStack_1b4 = local_4c;
    local_1c = uVar6 | 3;
    iVar1 = FUN_10006980();
    uVar6 = uVar6 | 3;
  }
  in_ECX[0x1187] = iVar1;
  local_8 = 1;
  if ((uVar6 & 2) != 0) {
    uVar6 = uVar6 & 0xfffffffd;
    local_1c = uVar6;
    FString::~FString(local_40);
  }
  local_8 = 0;
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffe;
    local_1c = uVar6;
    FString::~FString(local_4c);
  }
  *(undefined4 *)(in_ECX[0x1187] + 0x1cc) = 0x115;
  pFStack_1b4 = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x1187] + 0xc0))();
  pFStack_1d0 = (FString *)in_ECX[0x1187];
  FUN_10060d40();
  pFStack_1d0 = (FString *)0x101a5f55;
  FUN_1005c1e0();
  pFStack_1d0 = (FString *)0x101a5f65;
  FUN_10003cf0();
  local_28 = CONCAT44(&pFStack_1d0,(undefined4)local_28);
  pFStack_1d0 = extraout_ECX_00;
  FName::FName((FName *)&pFStack_1d0,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  local_28 = CONCAT44(iVar1,(undefined4)local_28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_1d0 = (FString *)0x101a5f9a;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,3);
    local_1c = uVar6 | 4;
    pFStack_1d0 = (FString *)0x101a5fb2;
    FString::FString(local_4c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 4;
    uVar6 = uVar6 | 0xc;
    pFStack_1d0 = local_40;
    local_1c = uVar6;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x215] = iVar1;
  local_8 = 3;
  if ((uVar6 & 8) != 0) {
    uVar6 = uVar6 & 0xfffffff7;
    local_1c = uVar6;
    FString::~FString(local_4c);
  }
  local_8 = 0;
  if ((uVar6 & 4) != 0) {
    uVar6 = uVar6 & 0xfffffffb;
    local_1c = uVar6;
    FString::~FString(local_40);
  }
  *(undefined4 *)(in_ECX[0x215] + 0x1cc) = 0x11e;
  pFStack_1d0 = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x215] + 0xc0))();
  pFStack_1ec = (FString *)in_ECX[0x215];
  FUN_10060d40();
  pFStack_1ec = (FString *)0x101a605e;
  FUN_1005c1e0();
  pFStack_1ec = (FString *)0x101a606c;
  FString::FString(local_4c,(ushort *)&DAT_10295074);
  local_8._0_1_ = 5;
  pFStack_1ec = (FString *)0x101a607f;
  FUN_10003dc0();
  local_8._0_1_ = 0;
  FString::~FString(local_4c);
  local_28 = CONCAT44(&pFStack_1ec,(undefined4)local_28);
  pFStack_1ec = extraout_ECX_01;
  FName::FName((FName *)&pFStack_1ec,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  local_28 = CONCAT44(iVar1,(undefined4)local_28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_1ec = (FString *)0x101a60c1;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,6);
    local_1c = uVar6 | 0x10;
    pFStack_1ec = (FString *)0x101a60d9;
    FString::FString(local_4c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 7;
    uVar6 = uVar6 | 0x30;
    pFStack_1ec = local_40;
    local_1c = uVar6;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x216] = iVar1;
  local_8 = 6;
  if ((uVar6 & 0x20) != 0) {
    uVar6 = uVar6 & 0xffffffdf;
    local_1c = uVar6;
    FString::~FString(local_4c);
  }
  local_8 = 0;
  if ((uVar6 & 0x10) != 0) {
    uVar6 = uVar6 & 0xffffffef;
    local_1c = uVar6;
    FString::~FString(local_40);
  }
  *(undefined4 *)(in_ECX[0x216] + 0x1cc) = 0x11f;
  pFStack_1ec = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x216] + 0xc0))();
  iStack_208 = in_ECX[0x216];
  FUN_10060d40();
  iStack_208 = 0x101a6188;
  FUN_1005c1e0();
  iStack_208 = 0x101a6196;
  FString::FString(local_4c,(ushort *)&DAT_10295068);
  local_8._0_1_ = 8;
  iStack_208 = 0x101a61a9;
  FUN_10003dc0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_4c);
  local_28 = CONCAT44(&iStack_208,(undefined4)local_28);
  FName::FName((FName *)&iStack_208,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iStack_208 = 0;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x20a] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x116;
  iStack_208 = 0;
  (**(code **)(*(int *)in_ECX[0x20a] + 0xc0))();
  pFStack_224 = (FString *)in_ECX[0x20a];
  FUN_10060d40();
  pFStack_224 = (FString *)0x101a623e;
  FUN_1005c1e0();
  local_28 = CONCAT44(&pFStack_224,(undefined4)local_28);
  pFStack_224 = extraout_ECX_02;
  FName::FName((FName *)&pFStack_224,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  local_28 = CONCAT44(iVar1,(undefined4)local_28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_224 = (FString *)0x101a6273;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,9);
    local_1c = uVar6 | 0x40;
    pFStack_224 = (FString *)0x101a628b;
    FString::FString(local_4c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 10;
    uVar6 = uVar6 | 0xc0;
    pFStack_224 = local_40;
    local_1c = uVar6;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x20f] = iVar1;
  local_8 = 9;
  if ((char)uVar6 < '\0') {
    uVar6 = uVar6 & 0xffffff7f;
    local_1c = uVar6;
    FString::~FString(local_4c);
  }
  local_8 = 0;
  if ((uVar6 & 0x40) != 0) {
    uVar6 = uVar6 & 0xffffffbf;
    local_1c = uVar6;
    FString::~FString(local_40);
  }
  *(undefined4 *)(in_ECX[0x20f] + 0x1cc) = 0x102;
  pFStack_224 = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x20f] + 0xc0))();
  pFStack_240 = (FString *)in_ECX[0x20f];
  FUN_10060d40();
  pFStack_240 = (FString *)0x101a633c;
  FUN_1005c1e0();
  pFStack_240 = (FString *)0x101a634a;
  FString::FString(local_4c,(ushort *)&DAT_10295060);
  local_8._0_1_ = 0xb;
  pFStack_240 = (FString *)0x101a635d;
  FUN_10003dc0();
  local_8._0_1_ = 0;
  FString::~FString(local_4c);
  local_28 = CONCAT44(&pFStack_240,(undefined4)local_28);
  uStack_248 = 0x101a637a;
  pFStack_240 = extraout_ECX_03;
  FName::FName((FName *)&pFStack_240,0);
  UObject::GetTransientPackage();
  uStack_248 = 0x33c;
  uStack_24c = 0x101a6387;
  iVar1 = FUN_1000a130();
  local_28 = CONCAT44(iVar1,(undefined4)local_28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_240 = (FString *)0x101a639f;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,0xc);
    local_1c = uVar6 | 0x100;
    pFStack_240 = (FString *)0x101a63ba;
    FString::FString(local_4c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 0xd;
    uVar6 = uVar6 | 0x300;
    pFStack_240 = local_40;
    uStack_248 = 0x101a63dc;
    local_1c = uVar6;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x210] = iVar1;
  local_8 = 0xc;
  if ((uVar6 & 0x200) != 0) {
    uVar6 = uVar6 & 0xfffffdff;
    local_1c = uVar6;
    FString::~FString(local_4c);
  }
  local_8 = 0;
  if ((uVar6 & 0x100) != 0) {
    uVar6 = uVar6 & 0xfffffeff;
    local_1c = uVar6;
    FString::~FString(local_40);
  }
  *(undefined4 *)(in_ECX[0x210] + 0x1cc) = 0x103;
  pFStack_240 = (FString *)0x0;
  uStack_248 = 0x10;
  uStack_24c = 0x32;
  uStack_250 = 0x217;
  uStack_254 = 0x7a;
  uStack_258 = 0x101a6459;
  (**(code **)(*(int *)in_ECX[0x210] + 0xc0))();
  uStack_258 = 2;
  iStack_25c = in_ECX[0x210];
  uStack_258 = FUN_10060d40();
  iStack_25c = 0x101a6475;
  FUN_1005c1e0();
  uStack_258 = 0x1a6;
  iStack_25c = 0x101a6485;
  FUN_10003cf0();
  uStack_258 = 0;
  local_28 = CONCAT44(&iStack_25c,(undefined4)local_28);
  FName::FName((FName *)&iStack_25c,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_258 = 0;
    iStack_25c = 0;
    iVar1 = FUN_100097b0();
  }
  in_ECX[0x21e] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xfe0108;
  uStack_258 = 3;
  iStack_25c = 0;
  (**(code **)(*(int *)in_ECX[0x21e] + 0xc0))();
  pFStack_278 = (FString *)in_ECX[0x21e];
  FUN_10060d40();
  pFStack_278 = (FString *)0x101a650f;
  FUN_1005c1e0();
  *(undefined4 *)(in_ECX[0x21e] + 0x2fc) = 0;
  local_28 = CONCAT44(&pFStack_278,(undefined4)local_28);
  pFStack_278 = extraout_ECX_04;
  FName::FName((FName *)&pFStack_278,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  local_28 = CONCAT44(iVar1,(undefined4)local_28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_278 = (FString *)0x101a6554;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,0xe);
    local_1c = uVar6 | 0x400;
    pFStack_278 = (FString *)0x101a656f;
    FString::FString(local_4c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 0xf;
    uVar6 = uVar6 | 0xc00;
    pFStack_278 = local_40;
    local_1c = uVar6;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x211] = iVar1;
  local_8 = 0xe;
  if ((uVar6 & 0x800) != 0) {
    uVar6 = uVar6 & 0xfffff7ff;
    local_1c = uVar6;
    FString::~FString(local_4c);
  }
  local_8 = 0;
  if ((uVar6 & 0x400) != 0) {
    uVar6 = uVar6 & 0xfffffbff;
    local_1c = uVar6;
    FString::~FString(local_40);
  }
  *(undefined4 *)(in_ECX[0x211] + 0x1cc) = 0x117;
  pFStack_278 = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x211] + 0xc0))();
  pFStack_294 = (FString *)in_ECX[0x211];
  FUN_10060d40();
  pFStack_294 = (FString *)0x101a662a;
  FUN_1005c1e0();
  pFStack_294 = (FString *)0x101a6638;
  FString::FString(local_4c,(ushort *)&DAT_1029504c);
  local_8._0_1_ = 0x10;
  pFStack_294 = (FString *)0x101a664b;
  FUN_10003dc0();
  local_8._0_1_ = 0;
  FString::~FString(local_4c);
  local_28 = CONCAT44(&pFStack_294,(undefined4)local_28);
  pFStack_294 = extraout_ECX_05;
  FName::FName((FName *)&pFStack_294,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  local_28 = CONCAT44(iVar1,(undefined4)local_28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_294 = (FString *)0x101a668d;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,0x11);
    local_1c = uVar6 | 0x1000;
    pFStack_294 = (FString *)0x101a66a8;
    FString::FString(local_4c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 0x12;
    uVar6 = uVar6 | 0x3000;
    pFStack_294 = local_40;
    local_1c = uVar6;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x212] = iVar1;
  local_8 = 0x11;
  if ((uVar6 & 0x2000) != 0) {
    uVar6 = uVar6 & 0xffffdfff;
    local_1c = uVar6;
    FString::~FString(local_4c);
  }
  local_8 = 0;
  if ((uVar6 & 0x1000) != 0) {
    uVar6 = uVar6 & 0xffffefff;
    local_1c = uVar6;
    FString::~FString(local_40);
  }
  *(undefined4 *)(in_ECX[0x212] + 0x1cc) = 0x118;
  pFStack_294 = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x212] + 0xc0))();
  pFStack_2b0 = (FString *)in_ECX[0x212];
  FUN_10060d40();
  pFStack_2b0 = (FString *)0x101a6763;
  FUN_1005c1e0();
  pFStack_2b0 = (FString *)0x101a6771;
  FString::FString(local_4c,(ushort *)&DAT_10295040);
  local_8._0_1_ = 0x13;
  pFStack_2b0 = (FString *)0x101a6784;
  FUN_10003dc0();
  local_8._0_1_ = 0;
  FString::~FString(local_4c);
  local_28 = CONCAT44(&pFStack_2b0,(undefined4)local_28);
  pFStack_2b0 = extraout_ECX_06;
  FName::FName((FName *)&pFStack_2b0,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  local_28 = CONCAT44(iVar1,(undefined4)local_28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_2b0 = (FString *)0x101a67c6;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,0x14);
    local_1c = uVar6 | 0x4000;
    pFStack_2b0 = (FString *)0x101a67e1;
    FString::FString(local_4c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 0x15;
    uVar6 = uVar6 | 0xc000;
    pFStack_2b0 = local_40;
    local_1c = uVar6;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x214] = iVar1;
  local_8 = 0x14;
  if ((uVar6 & 0x8000) != 0) {
    uVar6 = uVar6 & 0xffff7fff;
    local_1c = uVar6;
    FString::~FString(local_4c);
  }
  local_8 = 0;
  if ((uVar6 & 0x4000) != 0) {
    uVar6 = uVar6 & 0xffffbfff;
    local_1c = uVar6;
    FString::~FString(local_40);
  }
  *(undefined4 *)(in_ECX[0x214] + 0x1cc) = 0x11d;
  pFStack_2b0 = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x214] + 0xc0))();
  pFStack_2cc = (FString *)in_ECX[0x214];
  FUN_10060d40();
  pFStack_2cc = (FString *)0x101a689c;
  FUN_1005c1e0();
  pFStack_2cc = (FString *)0x101a68aa;
  FString::FString(local_4c,(ushort *)&DAT_10295034);
  local_8._0_1_ = 0x16;
  pFStack_2cc = (FString *)0x101a68bd;
  FUN_10003dc0();
  local_8._0_1_ = 0;
  FString::~FString(local_4c);
  local_28 = CONCAT44(&pFStack_2cc,(undefined4)local_28);
  pFStack_2cc = extraout_ECX_07;
  FName::FName((FName *)&pFStack_2cc,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  local_28 = CONCAT44(iVar1,(undefined4)local_28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_2cc = (FString *)0x101a68ff;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,0x17);
    local_1c = uVar6 | 0x10000;
    pFStack_2cc = (FString *)0x101a691a;
    FString::FString(local_4c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 0x18;
    uVar6 = uVar6 | 0x30000;
    pFStack_2cc = local_40;
    local_1c = uVar6;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x217] = iVar1;
  local_8 = 0x17;
  if ((uVar6 & 0x20000) != 0) {
    uVar6 = uVar6 & 0xfffdffff;
    local_1c = uVar6;
    FString::~FString(local_4c);
  }
  local_8 = 0;
  if ((uVar6 & 0x10000) != 0) {
    uVar6 = uVar6 & 0xfffeffff;
    local_1c = uVar6;
    FString::~FString(local_40);
  }
  *(undefined4 *)(in_ECX[0x217] + 0x1cc) = 0xfe0107;
  pFStack_2cc = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x217] + 0xc0))();
  iStack_2e8 = in_ECX[0x217];
  FUN_10060d40();
  iStack_2e8 = 0x101a69d8;
  FUN_1005c1e0();
  iStack_2e8 = 0x101a69e6;
  FString::FString(local_4c,(ushort *)&DAT_10295028);
  local_8._0_1_ = 0x19;
  iStack_2e8 = 0x101a69f9;
  FUN_10003dc0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_4c);
  local_28 = CONCAT44(&iStack_2e8,(undefined4)local_28);
  puStack_2f0 = (undefined *)0x101a6a16;
  FName::FName((FName *)&iStack_2e8,0);
  UObject::GetTransientPackage();
  puStack_2f0 = (undefined *)0x314;
  uStack_2f4 = 0x101a6a23;
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iStack_2e8 = 0;
    puStack_2f0 = &DAT_1029501c;
    uStack_2f4 = 0x101a6a3c;
    iVar1 = FUN_100097b0();
  }
  in_ECX[0x21c] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x11c;
  iStack_2e8 = 0;
  puStack_2f0 = (undefined *)0x10;
  uStack_2f4 = 0x41;
  uStack_2f8 = 0x205;
  uStack_2fc = 0xe0;
  uStack_300 = 0x101a6a74;
  (**(code **)(*(int *)in_ECX[0x21c] + 0xc0))();
  uStack_300 = 2;
  iStack_304 = in_ECX[0x21c];
  uStack_300 = FUN_10060d40();
  iStack_304 = 0x101a6a90;
  FUN_1005c1e0();
  *(undefined4 *)(in_ECX[0x21c] + 0x2fc) = 0;
  uStack_300 = 0;
  local_28 = CONCAT44(&iStack_304,(undefined4)local_28);
  uStack_30c = 0x101a6ab0;
  FName::FName((FName *)&iStack_304,0);
  UObject::GetTransientPackage();
  uStack_30c = 0x400;
  uStack_310 = 0x101a6abd;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_300 = 0;
    iStack_304 = 0;
    uStack_30c = 1;
    uStack_310 = 0;
    uStack_314 = 3;
    uStack_318 = 0x101a6ad7;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x20b] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x11a;
  uStack_300 = 3;
  iStack_304 = 0;
  uStack_30c = 0x10;
  uStack_310 = 0x17;
  uStack_314 = 0x23f;
  uStack_318 = 10;
  uStack_31c = 0x101a6b0c;
  (**(code **)(*(int *)in_ECX[0x20b] + 0xc0))();
  uStack_31c = 2;
  iStack_320 = in_ECX[0x20b];
  uStack_31c = FUN_10060d40();
  iStack_320 = 0x101a6b28;
  FUN_1005c1e0();
  uStack_31c = 0;
  local_28 = CONCAT44(&iStack_320,(undefined4)local_28);
  FName::FName((FName *)&iStack_320,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_31c = 0;
    iStack_320 = 0;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x20c] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x11b;
  uStack_31c = 3;
  iStack_320 = 0;
  (**(code **)(*(int *)in_ECX[0x20c] + 0xc0))();
  pFStack_33c = (FString *)in_ECX[0x20c];
  FUN_10060d40();
  pFStack_33c = (FString *)0x101a6bb0;
  FUN_1005c1e0();
  local_28 = CONCAT44(&pFStack_33c,(undefined4)local_28);
  pFStack_33c = extraout_ECX_08;
  FName::FName((FName *)&pFStack_33c,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  local_28 = CONCAT44(iVar1,(undefined4)local_28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_33c = (FString *)0x101a6be5;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,0x1a);
    local_1c = uVar6 | 0x40000;
    pFStack_33c = (FString *)0x101a6c00;
    FString::FString(local_4c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 0x1b;
    uVar6 = uVar6 | 0xc0000;
    pFStack_33c = local_40;
    local_1c = uVar6;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x213] = iVar1;
  local_8 = 0x1a;
  if ((uVar6 & 0x80000) != 0) {
    uVar6 = uVar6 & 0xfff7ffff;
    local_1c = uVar6;
    FString::~FString(local_4c);
  }
  local_8 = 0;
  if ((uVar6 & 0x40000) != 0) {
    uVar6 = uVar6 & 0xfffbffff;
    local_1c = uVar6;
    FString::~FString(local_40);
  }
  *(undefined4 *)(in_ECX[0x213] + 0x1cc) = 0x119;
  pFStack_33c = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x213] + 0xc0))();
  iStack_358 = in_ECX[0x213];
  uStack_35c = 0x101a6caf;
  FUN_10060d40();
  iStack_358 = 0x101a6cbb;
  FUN_1005c1e0();
  iStack_358 = 0x101a6cc9;
  FString::FString(local_4c,(ushort *)&DAT_10295014);
  local_8._0_1_ = 0x1c;
  iStack_358 = 0x101a6cdc;
  FUN_10003dc0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_4c);
  iStack_358 = 0x101a6d06;
  local_28._4_4_ = (undefined4 *)(*(int *)in_ECX[0x20b] + 0x10c);
  iStack_358 = FUN_10058020();
  uStack_35c = 0x101a6d14;
  (*(code *)*local_28._4_4_)();
  uStack_35c = 0;
  local_28 = CONCAT44(&uStack_360,(undefined4)local_28);
  puStack_368 = (undefined *)0x101a6d24;
  FName::FName((FName *)&uStack_360,0);
  UObject::GetTransientPackage();
  puStack_368 = (undefined *)0x314;
  uStack_36c = 0x101a6d31;
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_35c = 0;
    uStack_360 = 0;
    puStack_368 = &DAT_1029500c;
    uStack_36c = 0x101a6d4a;
    iVar1 = FUN_100097b0();
  }
  in_ECX[0x21d] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x12d;
  uStack_35c = 3;
  uStack_360 = 0;
  puStack_368 = (undefined *)0x10;
  uStack_36c = 0x32;
  uStack_370 = 0x23f;
  uStack_374 = 0xeb;
  uStack_378 = 0x101a6d82;
  (**(code **)(*(int *)in_ECX[0x21d] + 0xc0))();
  uStack_378 = 2;
  iStack_37c = in_ECX[0x21d];
  uStack_378 = FUN_10060d40();
  iStack_37c = 0x101a6d9e;
  FUN_1005c1e0();
  *(undefined4 *)(in_ECX[0x21d] + 0x2fc) = 1;
  uStack_378 = 0;
  local_28 = CONCAT44(&iStack_37c,(undefined4)local_28);
  FName::FName((FName *)&iStack_37c,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_378 = 0;
    iStack_37c = 0;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x20d] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xfe0109;
  uStack_378 = 3;
  iStack_37c = 0;
  (**(code **)(*(int *)in_ECX[0x20d] + 0xc0))();
  pFStack_398 = (FString *)in_ECX[0x20d];
  FUN_10060d40();
  pFStack_398 = (FString *)0x101a6e39;
  FUN_1005c1e0();
  local_28 = CONCAT44(&pFStack_398,(undefined4)local_28);
  pFStack_398 = extraout_ECX_09;
  FName::FName((FName *)&pFStack_398,0);
  pUVar4 = UObject::GetTransientPackage();
  iVar1 = FUN_1000a130(0x33c,pUVar4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_398 = (FString *)0x101a6e6d;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,0x1d);
    local_1c = uVar6 | 0x100000;
    pFStack_398 = (FString *)0x101a6e88;
    FString::FString(local_4c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 0x1e;
    uVar6 = uVar6 | 0x300000;
    pFStack_398 = local_40;
    local_1c = uVar6;
    iVar1 = FUN_10006980(local_4c);
  }
  in_ECX[0x218] = iVar1;
  local_8 = 0x1d;
  if ((uVar6 & 0x200000) != 0) {
    uVar6 = uVar6 & 0xffdfffff;
    local_1c = uVar6;
    FString::~FString(local_4c);
  }
  local_8 = 0;
  if ((uVar6 & 0x100000) != 0) {
    local_1c = uVar6 & 0xffefffff;
    FString::~FString(local_40);
  }
  *(undefined4 *)(in_ECX[0x218] + 0x1cc) = 0xfe010a;
  pFStack_398 = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x218] + 0xc0))(0xaa,0x23f,0x37,0x10,0);
  uVar5 = FUN_10060d40(in_ECX[0x218],2);
  FUN_1005c1e0(uVar5);
  FString::FString(local_4c,(ushort *)&DAT_10295000);
  local_8._0_1_ = 0x1f;
  FUN_10003dc0(local_4c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_4c);
  (**(code **)(*in_ECX + 0x230))();
  FUN_1019afc0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101a6fa5 Catch@101a6fa5

void Catch_101a6fa5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 101a6fb9 Catch@101a6fb9

void Catch_101a6fb9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewerWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a6fe0 FUN_101a6fe0

bool FUN_101a6fe0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xf0a0c3) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf0a0c4) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf0a0c2) {
      iVar1 = (**(code **)(*in_ECX + 500))(param_3);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 101a7080 FUN_101a7080

undefined4 FUN_101a7080(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102174b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    *(undefined4 *)(in_ECX + 0x1d4) = 0;
  }
  if (*(int *)(in_ECX + 0x1d0) != 0) {
    *(undefined4 *)(in_ECX + 0x1d0) = 0;
  }
  if (*(int *)(in_ECX + 0x1d8) != 0) {
    *(undefined4 *)(in_ECX + 0x1d8) = 0;
  }
  if (*(int *)(in_ECX + 0x1dc) != 0) {
    *(undefined4 *)(in_ECX + 0x1dc) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 101a7104 Catch@101a7104

void Catch_101a7104(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101a7118 Catch@101a7118

void Catch_101a7118(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCGMPetitionWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a7140 FUN_101a7140

void FUN_101a7140(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  L2ParamStack aLStack_c38 [1064];
  ushort auStack_810 [2];
  undefined1 auStack_80c [2044];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_102174e7;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)aLStack_c38;
  ExceptionList = &local_c;
  if (param_1 == 1) {
    puVar1 = (ushort *)
             (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x1f8))
                       (DAT_103554c4 ^ (uint)&stack0xfffff3c0);
    if (puVar1 != (ushort *)0x0) {
      appStrcpy(auStack_810,puVar1);
      FUN_10135770();
      iStack_4 = 0;
      iVar2 = FUN_101358a0(auStack_810);
      if (iVar2 == 0x10000000) {
        L2ParamStack::L2ParamStack(aLStack_c38,10);
        iStack_4._0_1_ = 1;
        L2ParamStack::PushBack(aLStack_c38,auStack_80c);
        (**(code **)(*DAT_103663bc + 0x360))(aLStack_c38);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        L2ParamStack::~L2ParamStack(aLStack_c38);
      }
      else if (iVar2 == 0x20000000) {
        FUN_10141990(7,puVar1,0);
      }
      (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x174))();
      iStack_4 = 0xffffffff;
      FUN_10135810();
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)aLStack_c38);
  return;
}


// ==== 101a72a0 FUN_101a72a0

void FUN_101a72a0(ushort *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10217529;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    FString::FString(local_18);
    local_4 = 0;
    FUN_10146040(param_1,local_18);
    if (param_3 == 6) {
      pcVar3 = *(code **)(**(int **)(in_ECX + 0x1d4) + 0x210);
      uVar5 = 0xc;
      uVar4 = 0xffffffff;
      param_2 = 0xffdcdcdc;
    }
    else {
      iVar1 = **(int **)(in_ECX + 0x1d4);
      uVar5 = 0;
      uVar4 = 0xffffffff;
      param_1 = FString::operator*(local_18);
      pcVar3 = *(code **)(iVar1 + 0x210);
    }
    (*pcVar3)(param_1,param_2,uVar4,uVar5,uVar2);
    local_4 = 0xffffffff;
    FString::~FString(local_18);
  }
  ExceptionList = local_c;
  return;
}


// ==== 101a7370 FUN_101a7370

void FUN_101a7370(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x174))();
                    /* WARNING: Could not recover jumptable at 0x101a7392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x174))();
  return;
}


// ==== 101a73a0 FUN_101a73a0

undefined4 FUN_101a73a0(void)

{
  uint uStack_20;
  L2ParamStack local_1c [12];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10217559;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)local_1c;
  ExceptionList = &local_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,L"startpet");
  (**(code **)(*DAT_103663bc + 0x360))(local_1c);
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&uStack_20);
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 101a7430 FUN_101a7430

undefined4 FUN_101a7430(void)

{
  uint uStack_20;
  L2ParamStack local_1c [12];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10217589;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)local_1c;
  ExceptionList = &local_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,L"endpet");
  (**(code **)(*DAT_103663bc + 0x360))(local_1c);
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&uStack_20);
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 101a74c0 FUN_101a74c0

undefined4 FUN_101a74c0(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  UPackage *pUVar4;
  int in_ECX;
  undefined2 in_FPUControlWord;
  UPackage *pUStack_9c;
  void *pvStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uVar5;
  UPackage *pUStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  UPackage *pUStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  wchar_t *pwStack_50;
  uint uStack_48;
  undefined4 local_34;
  undefined4 local_30;
  longlong local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10217618;
  local_c = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  local_30 = 0;
  FUN_10061b40();
  pwStack_50 = L"L2UI_ch3.PetitionWnd.petition2_back";
  uStack_54 = 0x101a7504;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  pwStack_50 = (wchar_t *)0x101a7516;
  FName::FName((FName *)&local_34,0);
  pUStack_64 = UObject::GetTransientPackage();
  uStack_54 = *(undefined4 *)GError_exref;
  pwStack_50 = (wchar_t *)0x0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = local_34;
  uStack_6c = 0x101a7542;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    pwStack_50 = (wchar_t *)0x0;
    uStack_54 = 1;
    uStack_58 = 0x101a7556;
    iVar3 = FUN_1001c510();
  }
  *(int *)(in_ECX + 0xc0) = iVar3;
  local_34 = CONCAT22(local_34._2_2_,in_FPUControlWord);
  *(undefined4 *)(iVar3 + 0x1cc) = 0xf0a0c5;
  pwStack_50 = (wchar_t *)0x0;
  uStack_54 = 0;
  uStack_58 = 0x14;
  local_2c = (longlong)ROUND(*(float *)(in_ECX + 0x88));
  uStack_5c = (undefined4)local_2c;
  uStack_60 = 0;
  pUStack_64 = (UPackage *)0x0;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))();
  uStack_6c = *(undefined4 *)(in_ECX + 0xc0);
  uStack_70 = 0x101a75bf;
  FUN_10060d40();
  uStack_6c = 0x101a75cb;
  FUN_1005c1e0();
  uStack_6c = 0x101a75d7;
  FName::FName((FName *)&uStack_48,0);
  pUStack_80 = UObject::GetTransientPackage();
  uStack_70 = *(undefined4 *)GError_exref;
  uStack_6c = 0;
  uStack_74 = 0;
  uStack_78 = 0;
  uStack_7c = uStack_48;
  uStack_88 = 0x101a75f7;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    uStack_6c = 1;
    uStack_70 = 0x11;
    uStack_74 = 200;
    uStack_78 = 0x101a7610;
    iVar3 = FUN_10034230();
  }
  uStack_6c = 0;
  uStack_70 = 0;
  *(int *)(in_ECX + 0x1d4) = iVar3;
  uStack_74 = 0x138;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xf0a0c1;
  uStack_78 = 0x126;
  uStack_7c = 0x25;
  pUStack_80 = (UPackage *)0x8;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc0))();
  uStack_88 = *(undefined4 *)(in_ECX + 0x1d4);
  uStack_8c = 0x101a7658;
  FUN_10060d40();
  uStack_88 = 0x101a7664;
  FUN_1005c1e0();
  *(undefined4 *)(*(int *)(in_ECX + 0x1d4) + 800) = 1;
  uStack_88 = 0x101a7680;
  FName::FName((FName *)&pUStack_64,0);
  pUStack_9c = UObject::GetTransientPackage();
  uStack_8c = *(undefined4 *)GError_exref;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  pvStack_98 = pUStack_64;
  pUVar2 = UObject::StaticAllocateObject(&DAT_1035d5e0);
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    uStack_88 = 0;
    uStack_8c = 0;
    uStack_90 = 1;
    uStack_94 = 0;
    pvStack_98 = (void *)0x1;
    pUStack_9c = (UPackage *)0x101a76ba;
    iVar3 = FUN_1001a820();
  }
  uVar5 = 3;
  uStack_88 = 0;
  uStack_8c = 0;
  *(int *)(in_ECX + 0x1d0) = iVar3;
  uStack_90 = 0x11;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xf0a0c2;
  uStack_94 = 0x128;
  pvStack_98 = (void *)0x165;
  pUStack_9c = (UPackage *)0x7;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xc0))();
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d0),2);
  FUN_1005c1e0(uVar1);
  FUN_100131e0(0x400);
  FName::FName((FName *)&pUStack_80,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,pUStack_80,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&uStack_6c,(ushort *)L"L2UI_ch3.button.btn1_normalon");
    uStack_58 = 0;
    FString::FString((FString *)&uStack_78,(ushort *)L"L2UI_ch3.button.btn1_normal");
    uStack_58 = 1;
    uVar5 = 3;
    uVar1 = FUN_10006980(&uStack_78,&uStack_6c,0);
  }
  *(undefined4 *)(in_ECX + 0x1d8) = uVar1;
  uStack_58 = 0;
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    FString::~FString((FString *)&uStack_78);
  }
  uStack_58 = 0xffffffff;
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffe;
    FString::~FString((FString *)&uStack_6c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d8) + 0x1cc) = 0xf0a0c3;
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xc0))(0x50,0x17f,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d8),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x1da);
  FName::FName((FName *)&pUStack_9c,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,pUStack_9c,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&uStack_94,(ushort *)L"L2UI_ch3.button.btn1_normalon");
    uStack_74 = 2;
    FString::FString((FString *)&uStack_88,(ushort *)L"L2UI_ch3.button.btn1_normal");
    uStack_74 = 3;
    uVar5 = uVar5 | 0xc;
    uVar1 = FUN_10006980(&uStack_88,&uStack_94,0);
  }
  *(undefined4 *)(in_ECX + 0x1dc) = uVar1;
  uStack_74 = 2;
  if ((uVar5 & 8) != 0) {
    uVar5 = uVar5 & 0xfffffff7;
    FString::~FString((FString *)&uStack_88);
  }
  uStack_74 = 0xffffffff;
  if ((uVar5 & 4) != 0) {
    FString::~FString((FString *)&uStack_94);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1dc) + 0x1cc) = 0xf0a0c4;
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0xc0))(0xa0,0x17f,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1dc),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x1db);
  ExceptionList = pvStack_98;
  return 1;
}


// ==== 101a7990 FUN_101a7990

undefined4 FUN_101a7990(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
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
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0();
  FUN_10021a00(0,0x14,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(in_ECX + 0x1cc),0xff,1);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 101a7a50 FUN_101a7a50

void FUN_101a7a50(void)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_1005fe50();
  if (in_ECX[0x14] != 0) {
    local_8 = 0;
    local_4 = 0;
    local_c = 0;
    local_10 = 0;
    FUN_10058770(&local_10);
    local_18 = (undefined4)(longlong)ROUND((float)in_ECX[0x23]);
    uVar1 = local_18;
    local_18 = (undefined4)(longlong)ROUND((float)in_ECX[0x22]);
    (**(code **)(*in_ECX + 0xc0))(local_10,local_c,local_18,uVar1,0,0,3);
    (**(code **)(*(int *)in_ECX[0x14] + 0xc0))(0,0,0,0,0,0,3);
    (**(code **)(*(int *)in_ECX[0x14] + 0x13c))();
  }
  return;
}


// ==== 101a7b40 FUN_101a7b40

bool FUN_101a7b40(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == -0x500ddfeb)) {
    iVar1 = (**(code **)(*in_ECX + 500))();
    return iVar1 != 0;
  }
  return false;
}


// ==== 101a7ba0 FUN_101a7ba0

undefined4 FUN_101a7ba0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217640;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    *(undefined4 *)(in_ECX + 0x1d4) = 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 101a7c03 Catch@101a7c03

void Catch_101a7c03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101a7c17 Catch@101a7c17

void Catch_101a7c17(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCReplayPlayWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a7c40 FUN_101a7c40

void FUN_101a7c40(void)

{
  FL2ReplayManager *this;
  ushort *puVar1;
  int in_ECX;
  
  this = *(FL2ReplayManager **)(*(int *)(DAT_103663bc + 0x50) + 0x198);
  if (this != (FL2ReplayManager *)0x0) {
    puVar1 = FL2ReplayManager::GetBMScore(this);
    FString::operator=((FString *)(in_ECX + 0x1d8),puVar1);
  }
  FUN_1005fe50();
  return;
}


// ==== 101a7c70 FUN_101a7c70

undefined4 FUN_101a7c70(void)

{
  *(undefined4 *)GIsBenchmarking_exref = 0;
  FL2ReplayManager::ResetBMData(*(FL2ReplayManager **)(DAT_103663bc[0x14] + 0x198));
  FL2ReplayManager::SetState(*(FL2ReplayManager **)(DAT_103663bc[0x14] + 0x198),1);
  (**(code **)(*DAT_103663bc + 0x744))();
  return 1;
}


// ==== 101a7cc0 FUN_101a7cc0

void FUN_101a7cc0(void)

{
  undefined4 uVar1;
  int iVar2;
  UPackage *pUVar3;
  UObject *pUVar4;
  int in_ECX;
  undefined4 unaff_EDI;
  bool bVar5;
  FString *pFStack_268;
  FString *pFStack_264;
  undefined4 local_23c;
  FString aFStack_238 [4];
  FString local_234 [8];
  FString aFStack_22c [28];
  ushort local_210 [234];
  uint uStack_3c;
  void *pvStack_38;
  undefined4 uStack_30;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102176b2;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_23c;
  ExceptionList = &local_c;
  local_23c = 0;
  FUN_10061b40();
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  FString::FString(local_234);
  local_4 = 0;
  appSprintf(local_210,(ushort *)L"%s_MiniLogoTexture");
  iVar2 = (**(code **)(**(int **)GConfig_exref + 0xc))();
  if (iVar2 == 0) {
    pFStack_264 = (FString *)0x101a7d7d;
    FString::operator=((FString *)&stack0xfffffdbc,(ushort *)L"L2Font.start_minilogo-k");
  }
  pFStack_264 = (FString *)0x101a7d89;
  pFStack_264 = (FString *)FString::operator*((FString *)&stack0xfffffdbc);
  pFStack_268 = (FString *)0x101a7d91;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1d0) = uVar1;
  pFStack_264 = (FString *)0x101a7da2;
  FName::FName((FName *)&stack0xfffffdb8,0);
  pUVar3 = UObject::GetTransientPackage();
  pFStack_268 = *(FString **)GError_exref;
  pFStack_264 = (FString *)0x0;
  pUVar4 = UObject::StaticAllocateObject(&DAT_10357870,pUVar3,unaff_EDI,0,0);
  bVar5 = pUVar4 == (UObject *)0x0;
  if (bVar5) {
    uVar1 = 0;
  }
  else {
    pFStack_264 = (FString *)0x101a7dde;
    FString::FString(aFStack_238,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    pFStack_264 = (FString *)0x101a7dfd;
    FString::FString(aFStack_22c,(ushort *)L"L2UI_CH3.Button.BigButton");
    uStack_14 = 2;
    pFStack_264 = aFStack_238;
    pFStack_268 = aFStack_22c;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d4) = uVar1;
  uStack_14 = 1;
  if (!bVar5) {
    FString::~FString(aFStack_22c);
  }
  uStack_14 = 0;
  if (!bVar5) {
    FString::~FString(aFStack_238);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d4) + 0x1cc) = 0xaff22015;
  pFStack_264 = (FString *)0x0;
  pFStack_268 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc0))
            (*(int *)GSEKScreenX_exref + -0x92,*(int *)GSEKScreenY_exref + -0x7b,0x60,0x17);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d4),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  uStack_30 = 0xffffffff;
  FString::~FString((FString *)&stack0xfffffda0);
  ExceptionList = pvStack_38;
  __security_check_cookie(uStack_3c ^ (uint)&pFStack_268);
  return;
}


// ==== 101a7f20 FUN_101a7f20

void FUN_101a7f20(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int in_ECX;
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
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar12 = *(int *)(in_ECX + 0x1cc);
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
  FUN_10021a00(0,0,0xe8,0x78,0,0,0xe8,0x78,*(undefined4 *)(in_ECX + 0x1d0),0xff,1);
  puVar3 = FString::operator*((FString *)(in_ECX + 0x1d8));
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
  puVar3 = FString::operator*((FString *)(in_ECX + 0x1d8));
  puVar3 = appStrstr(puVar3,(ushort *)pwVar4);
  FUN_100217a0(0xaa,0xb4,0xffffffff,puVar3,uVar1,uVar2,uVar5,uVar6,uVar8,uVar10,uVar14,uVar7,uVar9,
               uVar11,uVar13,uVar15);
  FUN_100217a0(100,0xe6,0xffffffff,GMachineOS_exref,0,0,0,5,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(100,0x104,0xffffffff,GMachineCPU_exref,0,0,0,5,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(100,0x122,0xffffffff,GMachineVideo_exref,0,0,0,5,0,0,0,0,0,0,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101a816d Catch@101a816d

void Catch_101a816d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x218) = *(undefined4 *)(unaff_EBP + -0x21c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x218,&DAT_102a47f0);
}


// ==== 101a818a Catch@101a818a

void Catch_101a818a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBenchMarkResultWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a81b0 FUN_101a81b0

void FUN_101a81b0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10217727;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = NCBenchMarkResultWnd::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  FString::FString((FString *)(in_ECX + 0x76),(ushort *)&DAT_1022f9f8);
  ExceptionList = local_c;
  return;
}


// ==== 101a8230 FUN_101a8230

void FUN_101a8230(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10217767;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCBenchMarkResultWnd::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x1d8));
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101a82a0 FUN_101a82a0

void FUN_101a82a0(byte param_1)

{
  void *in_ECX;
  
  FUN_101a8230();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e4);
  }
  return;
}


// ==== 101a82e0 FUN_101a82e0

bool FUN_101a82e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_10034b20(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == 0xf021)) {
    iVar1 = (**(code **)(*in_ECX + 0x208))(param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 101a8340 FUN_101a8340

bool FUN_101a8340(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xf007) {
      iVar1 = (**(code **)(*in_ECX + 500))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf017) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf020) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf018) {
      iVar1 = (**(code **)(*in_ECX + 0x200))(param_3);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 101a8410 FUN_101a8410

undefined4 FUN_101a8410(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1d0) != 0) {
    *(undefined4 *)(in_ECX + 0x1d0) = 0;
  }
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    *(undefined4 *)(in_ECX + 0x1d4) = 0;
  }
  if (*(int *)(in_ECX + 0x1d8) != 0) {
    *(undefined4 *)(in_ECX + 0x1d8) = 0;
  }
  if (*(int *)(in_ECX + 0x1dc) != 0) {
    *(undefined4 *)(in_ECX + 0x1dc) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 101a8494 Catch@101a8494

void Catch_101a8494(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101a84a8 Catch@101a84a8

void Catch_101a84a8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCServerSelectWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a84d0 FUN_101a84d0

void FUN_101a84d0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1e0) = param_1;
  return;
}


// ==== 101a84e0 FUN_101a84e0

void FUN_101a84e0(int param_1,uint param_2,int param_3,ushort *param_4,ushort *param_5)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  FString *this;
  wchar_t *pwVar4;
  ushort local_104 [128];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_104;
  if ((param_2 & 8) == 0) {
    if ((param_2 & 4) == 0) {
      iVar2 = param_1;
      if (param_1 < 10) {
        pwVar4 = L"0%d";
        goto LAB_101a8530;
      }
    }
    else {
      iVar2 = 1;
    }
    pwVar4 = L"%d";
  }
  else {
    pwVar4 = L"%03d";
    iVar2 = 0x7f;
  }
LAB_101a8530:
  appSprintf(param_5,(ushort *)pwVar4,iVar2);
  if ((param_2 & 8) == 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 < 0x29) {
        pwVar4 = L"L2Server";
        puVar1 = (ushort *)
                 (**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_10252b00,L"ServerAddr",0);
        iVar2 = appStricmp(puVar1,(ushort *)pwVar4);
        if (iVar2 != 0) {
          pwVar4 = L"l2server.ncsoft.co.kr";
          puVar1 = (ushort *)
                   (**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_10252b00,L"ServerAddr",0);
          iVar2 = appStricmp(puVar1,(ushort *)pwVar4);
          if (iVar2 != 0) goto LAB_101a85de;
        }
        puVar1 = *(ushort **)(&DAT_10352a64 + param_1 * 4);
        goto LAB_101a85fa;
      }
LAB_101a85de:
      this = (FString *)(GL2GameData_exref + param_1 * 0x1c + 0x676f0);
    }
    else {
      this = (FString *)(GL2GameData_exref + 0x684b8);
    }
  }
  else {
    this = (FString *)(GL2GameData_exref + 0x684d4);
  }
  puVar1 = FString::operator*(this);
LAB_101a85fa:
  appSprintf(param_4,(ushort *)&DAT_1022dde0,puVar1);
  if (0 < param_3) {
    iVar2 = appStrlen(param_4);
    appStrncpy(local_104,param_4,iVar2 + 1);
    puVar1 = local_104;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + param_3 * 0x1c + 0x68cec));
    appSprintf(param_4,(ushort *)L"[%s]%s",puVar3,puVar1);
  }
  __security_check_cookie(local_4 ^ (uint)local_104);
  return;
}


// ==== 101a8680 FUN_101a8680

void FUN_101a8680(void)

{
  int *in_ECX;
  
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0x458))();
  if (in_ECX[0x7e] != 0) {
    in_ECX[0x7f] = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x101a86b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x1fc))();
  return;
}


// ==== 101a86c0 FUN_101a86c0

void FUN_101a86c0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102177b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100364c0();
  *(undefined4 *)(in_ECX + 0x1e0) = 0;
  *(undefined4 *)(in_ECX + 0x1e4) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1e8) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 101a8727 Catch@101a8727

void Catch_101a8727(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101a873b Catch@101a873b

void Catch_101a873b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCServerSelectWnd::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a8760 FUN_101a8760

undefined4 FUN_101a8760(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 500))();
  return 1;
}


// ==== 101a8780 FUN_101a8780

undefined4 FUN_101a8780(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0xf019) {
    *(undefined4 *)(in_ECX + 0x1f0) = 0;
  }
  return 1;
}


// ==== 101a87a0 FUN_101a87a0

undefined4 FUN_101a87a0(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1 & 0x80000003;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
  }
  if (((!bVar2) || (param_1 == ((int)param_1 / 100) * 100)) &&
     (param_1 != ((int)param_1 / 400) * 400)) {
    return 0;
  }
  return 1;
}


// ==== 101a8800 FUN_101a8800

int FUN_101a8800(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  if (0 < param_1) {
    do {
      iVar1 = FUN_101a87a0(iVar2);
      if (iVar1 == 0) {
        iVar3 = iVar3 + 0x16d;
      }
      else {
        iVar3 = iVar3 + 0x16e;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= param_1);
  }
  return iVar3;
}


// ==== 101a8840 FUN_101a8840

int FUN_101a8840(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_101a87a0(param_1);
  iVar2 = 1;
  if (1 < param_2) {
    do {
      if ((((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 5)) ||
         (((iVar2 == 7 || (iVar2 == 8)) || ((iVar2 == 10 || (iVar2 == 0xc)))))) {
        iVar3 = iVar3 + 0x1f;
      }
      else if (iVar2 == 2) {
        iVar3 = iVar3 + (iVar1 != 0) + 0x1c;
      }
      else {
        iVar3 = iVar3 + 0x1e;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return iVar3;
}


// ==== 101a88b0 FUN_101a88b0

int FUN_101a88b0(int param_1,int param_2)

{
  if (1 < param_1) {
    return param_1 * 0x18 + -0x18 + param_2;
  }
  return param_2;
}


// ==== 101a88e0 FUN_101a88e0

int FUN_101a88e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  appLocalTime(&local_10,&local_14,&local_8,&local_c,&local_4);
  iVar1 = FUN_101a8840(local_10,local_14 + -1);
  iVar2 = FUN_101a8800(local_10 + -1);
  iVar3 = FUN_101a88b0(local_8,local_c);
  return iVar3 + iVar1 + iVar2;
}


// ==== 101a8940 FUN_101a8940

bool FUN_101a8940(void)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 local_4 [4];
  
  pwVar2 = L"Date";
  iVar1 = (**(code **)(**(int **)GConfig_exref + 4))(L"Date",L"Time",local_4,L"s_info.ini");
  if (iVar1 != 0) {
    iVar1 = FUN_101a88e0();
    return (int)(pwVar2 + 6) < iVar1;
  }
  return true;
}


// ==== 101a8990 FUN_101a8990

bool FUN_101a8990(int param_1)

{
  ushort *puVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  undefined4 local_4;
  
  pwVar5 = L"s_info.ini";
  puVar4 = &local_4;
  local_4 = 0;
  iVar2 = **(int **)GConfig_exref;
  pwVar3 = L"Time";
  puVar1 = appItoa(param_1);
  iVar2 = (**(code **)(iVar2 + 4))(puVar1,pwVar3,puVar4,pwVar5);
  if (iVar2 != 0) {
    return pwVar3 == (wchar_t *)0x270f;
  }
  return true;
}


// ==== 101a89f0 FUN_101a89f0

void FUN_101a89f0(void)

{
  int in_ECX;
  uint local_14 [4];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_14;
  appSprintf((ushort *)local_14,(ushort *)&DAT_10233718);
  (**(code **)(**(int **)GConfig_exref + 0x28))(local_14);
  *(undefined4 *)(in_ECX + 0x1f8) = 1;
  __security_check_cookie(local_14[0] ^ (uint)&stack0xffffffdc);
  return;
}


// ==== 101a8a60 FUN_101a8a60

void FUN_101a8a60(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 500) != 0) {
    uVar1 = FUN_101a88e0();
    (**(code **)(**(int **)GConfig_exref + 0x28))(L"Date",L"Time",uVar1,L"s_info.ini");
    *(undefined4 *)(in_ECX + 500) = 0;
  }
  return;
}


// ==== 101a8aa0 FUN_101a8aa0

undefined4 FUN_101a8aa0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102177d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1d0) != 0) {
    *(undefined4 *)(in_ECX + 0x1d0) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 101a8b01 Catch@101a8b01

void Catch_101a8b01(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101a8b15 Catch@101a8b15

void Catch_101a8b15(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCServerInfoWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a8b40 FUN_101a8b40

undefined4 FUN_101a8b40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102177f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar1 = *(int *)(in_ECX + 0x1cc);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101a8c2b Catch@101a8c2b

void Catch_101a8c2b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101a8c3f Catch@101a8c3f

void Catch_101a8c3f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCServerSelectWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a8c60 FUN_101a8c60

void FUN_101a8c60(int param_1,int param_2)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  ushort local_44 [32];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_44;
  if ((in_ECX[0x74] != 0) && (iVar2 = 0, 0 < *(int *)(in_ECX[0x74] + 0x300))) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX[0x74] + 0x2fc) + iVar2 * 4);
      if ((piVar1[0x202] == param_1) && (*piVar1 != 0)) {
        if (param_2 == 9999) {
          appSprintf(local_44,(ushort *)L"9999");
        }
        else {
          appSprintf(local_44,(ushort *)&DAT_10233718,param_2);
        }
        FUN_100342d0(local_44);
        FUN_101a89f0(piVar1[0x201],param_2);
        piVar1 = in_ECX + 0x7a;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*in_ECX + 0x1fc))();
          in_ECX[0x7a] = 0;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX[0x74] + 0x300));
  }
  __security_check_cookie(local_4 ^ (uint)local_44);
  return;
}


// ==== 101a8d60 FUN_101a8d60

undefined4 FUN_101a8d60(void)

{
  void *pvVar1;
  int *piVar2;
  int in_ECX;
  FString aFStack_50 [4];
  undefined4 uStack_4c;
  uint uStack_44;
  L2ParamStack local_34 [24];
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10217822;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar2 = (int *)FUN_10035c90();
  if (piVar2 == (int *)0x0) {
    uStack_4c = 0x101a8e70;
    FUN_1014ed50();
  }
  else {
    local_1c = aFStack_50;
    FString::FString(aFStack_50,(ushort *)(*piVar2 + 0x6174));
    local_8 = local_8 & 0xffffff00;
    FUN_1014fc30();
    uStack_4c = 0x101a8ddd;
    L2ParamStack::L2ParamStack(local_34,10);
    local_8 = CONCAT31(local_8._1_3_,2);
    pvVar1 = (void *)piVar2[0x201];
    local_18 = (void *)piVar2[0x202];
    uStack_4c = 0x101a8dfa;
    local_1c = (undefined1 *)appAtoi((ushort *)(piVar2 + 1));
    uStack_4c = 0x101a8e0c;
    L2ParamStack::PushBack(local_34,pvVar1);
    uStack_4c = 0x101a8e15;
    L2ParamStack::PushBack(local_34,local_18);
    uStack_4c = 0x101a8e1e;
    L2ParamStack::PushBack(local_34,local_1c);
    if (*(int *)(in_ECX + 0x1f0) == 0) {
      uStack_4c = 0x101a8e36;
      FUN_10142250();
      FUN_101a8a60();
      *(undefined4 *)(in_ECX + 0x1f0) = 1;
    }
    uStack_4c = 0x101a8e54;
    FUN_1014ed50();
    local_8 = local_8 & 0xffffff00;
    L2ParamStack::~L2ParamStack(local_34);
  }
  *(undefined4 *)(in_ECX + 0x1e8) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 101a8e91 Catch@101a8e91

void Catch_101a8e91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101a8ea5 Catch@101a8ea5

void Catch_101a8ea5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCServerSelectWnd::OnLoginBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a8ed0 FUN_101a8ed0

undefined4 FUN_101a8ed0(void)

{
  int in_ECX;
  FString aFStack_3c [4];
  undefined4 uStack_38;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10217849;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0x308))();
  FString::FString(aFStack_3c,(ushort *)L"LoginState");
  local_8 = local_8 & 0xffffff00;
  FUN_10070110();
  uStack_38 = 0x101a8f50;
  UL2ConsoleWnd::SetState((UL2ConsoleWnd *)DAT_103663bc,2);
  *(undefined4 *)(in_ECX + 0x1e8) = 0;
  FUN_101a8a60();
  ExceptionList = local_10;
  return 1;
}


// ==== 101a8f72 Catch@101a8f72

void Catch_101a8f72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101a8f86 Catch@101a8f86

void Catch_101a8f86(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCServerSelectWnd::OnCancelBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a8fb0 FUN_101a8fb0

undefined4 FUN_101a8fb0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217870;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = 0;
  local_8 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  while ((iVar4 = FUN_10034fa0(), iVar6 = -1, iVar7 < iVar4 &&
         (iVar6 = iVar7,
         *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar7 * 4) + 0x804) !=
         *(int *)(in_ECX + 0x1e4)))) {
    iVar7 = iVar7 + 1;
  }
  local_1c = 0;
  if ((-1 < iVar6) && (iVar7 = FUN_10034fa0(), iVar6 < iVar7)) {
    puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x1d0) + 0x2fc);
    uVar3 = *puVar2;
    *puVar2 = puVar2[iVar6];
    *(undefined4 *)(iVar6 * 4 + *(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc)) = uVar3;
    FUN_10034fb0(0,0);
    local_1c = 1;
  }
  iVar7 = local_1c;
  iVar6 = local_1c;
  if (*(int *)GLanguageType_exref == 0) {
    for (; iVar7 = local_1c, iVar6 < *(int *)(*(int *)(in_ECX + 0x1d0) + 0x300); iVar6 = iVar6 + 1)
    {
      puVar2 = *(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar6 * 4);
      iVar7 = appAtoi((ushort *)*puVar2);
      if ((iVar7 == 0x22) || (iVar7 = appAtoi((ushort *)*puVar2), iVar7 == 0x23)) {
        puVar1 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + local_1c * 4);
        uVar3 = *puVar1;
        *puVar1 = puVar2;
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar6 * 4) = uVar3;
        local_1c = local_1c + 1;
      }
    }
  }
  for (; iVar6 = local_1c, iVar7 < *(int *)(*(int *)(in_ECX + 0x1d0) + 0x300); iVar7 = iVar7 + 1) {
    for (; (iVar4 = *(int *)(*(int *)(in_ECX + 0x1d0) + 0x300), iVar6 < iVar4 - iVar7 &&
           (iVar6 < iVar4 + -1)); iVar6 = iVar6 + 1) {
      puVar2 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar6 * 4);
      iVar4 = appAtoi((ushort *)(*(int *)*puVar2 + 0x4f2c));
      iVar5 = appAtoi((ushort *)(*(int *)puVar2[1] + 0x4f2c));
      if (iVar5 < iVar4) {
        puVar2 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar6 * 4);
        uVar3 = *puVar2;
        *puVar2 = puVar2[1];
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + 4 + iVar6 * 4) = uVar3;
      }
    }
  }
  local_18 = local_1c;
  while (local_18 < *(int *)(*(int *)(in_ECX + 0x1d0) + 0x300)) {
    iVar7 = local_18 * 4;
    iVar6 = appAtoi((ushort *)
                    (**(int **)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar7) + 0x4f2c));
    if (iVar6 < 10) {
      local_24 = local_24 + 1;
      local_18 = local_18 + 1;
    }
    else {
      iVar6 = appAtoi((ushort *)
                      (**(int **)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar7) + 0x4f2c));
      if ((iVar6 < 0x33) ||
         (iVar6 = appAtoi((ushort *)
                          (**(int **)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar7) + 0x4f2c))
         , 0x270e < iVar6)) {
        iVar7 = appAtoi((ushort *)
                        (**(int **)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar7) + 0x4f2c));
        if (iVar7 < 9999) {
          local_28 = local_28 + 1;
        }
        local_18 = local_18 + 1;
      }
      else {
        local_2c = local_2c + 1;
        local_18 = local_18 + 1;
      }
    }
  }
  for (local_18 = local_1c; iVar7 = local_1c, local_18 < local_1c + local_24;
      local_18 = local_18 + 1) {
    for (; (iVar7 < local_1c + local_24 + -1 && (iVar7 < local_24)); iVar7 = iVar7 + 1) {
      puVar2 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar7 * 4);
      if (*(uint *)(*(int *)puVar2[1] + 0x34ac) < *(uint *)(*(int *)*puVar2 + 0x34ac)) {
        puVar2 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar7 * 4);
        uVar3 = *puVar2;
        *puVar2 = puVar2[1];
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + 4 + iVar7 * 4) = uVar3;
      }
    }
  }
  local_1c = local_1c + local_24;
  local_18 = local_1c;
  while( true ) {
    local_18 = local_18 + 1;
    iVar7 = local_1c;
    if (local_1c + local_28 <= local_18) break;
    while ((iVar7 = iVar7 + 1, iVar7 < local_1c + local_28 + -1 && (iVar7 < local_24 + local_28))) {
      puVar2 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar7 * 4);
      if (*(uint *)(*(int *)puVar2[1] + 0x34ac) < *(uint *)(*(int *)*puVar2 + 0x34ac)) {
        puVar2 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar7 * 4);
        uVar3 = *puVar2;
        *puVar2 = puVar2[1];
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + 4 + iVar7 * 4) = uVar3;
      }
    }
  }
  local_1c = local_1c + local_28;
  local_18 = local_1c;
  while( true ) {
    local_18 = local_18 + 1;
    iVar7 = local_1c;
    if (local_1c + local_2c <= local_18) break;
    while ((iVar7 = iVar7 + 1, iVar7 < local_1c + local_2c + -1 &&
           (iVar7 < local_2c + local_28 + local_24))) {
      puVar2 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar7 * 4);
      if (*(uint *)(*(int *)puVar2[1] + 0x34ac) < *(uint *)(*(int *)*puVar2 + 0x34ac)) {
        puVar2 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar7 * 4);
        uVar3 = *puVar2;
        *puVar2 = puVar2[1];
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + 4 + iVar7 * 4) = uVar3;
      }
    }
  }
  for (iVar7 = 0; iVar7 < *(int *)(*(int *)(in_ECX + 0x1d0) + 0x300) + -1; iVar7 = iVar7 + 1) {
    if ((*(byte *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar7 * 4) + 0x4f10) & 8)
        != 0) {
      puVar2 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + iVar7 * 4);
      uVar3 = *puVar2;
      *puVar2 = puVar2[1];
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2fc) + 4 + iVar7 * 4) = uVar3;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 101a94aa Catch@101a94aa

void Catch_101a94aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_102a47f0);
}


// ==== 101a94be Catch@101a94be

void Catch_101a94be(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCServerSelectWnd::OnSortBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a94e0 FUN_101a94e0

void FUN_101a94e0(undefined4 *param_1)

{
  int in_ECX;
  
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x200) = *param_1;
    *(undefined4 *)(in_ECX + 0x204) = param_1[1];
    *(undefined4 *)(in_ECX + 0x208) = param_1[2];
    *(undefined4 *)(in_ECX + 0x20c) = param_1[3];
    return;
  }
  appMemset((void *)(in_ECX + 0x200),0,0x10);
  return;
}


// ==== 101a9530 FUN_101a9530

undefined4 FUN_101a9530(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int *piVar4;
  int in_ECX;
  undefined2 in_FPUControlWord;
  undefined4 local_c;
  longlong local_8;
  
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"L2UI_CH3.Serverselectwnd.Serverinfo_back",1);
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  FName::FName((FName *)&local_c,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_1036eff0,pUVar2,local_c,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10089a10();
  }
  *(int **)(in_ECX + 0x1d0) = piVar4;
  local_8._0_4_ = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c) - 14.0);
  uVar1 = (undefined4)local_8;
  local_c = CONCAT22(local_c._2_2_,in_FPUControlWord);
  local_8 = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 14.0);
  (**(code **)(*piVar4 + 0xc0))(7,7,(undefined4)local_8,uVar1,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d0),2);
  FUN_1005c1e0(uVar1);
  if (*(int *)GL2ThaiHtmlMode_exref == 0) {
    FUN_10088300(L"..\\l2text\\server_help.htm");
  }
  return 1;
}


// ==== 101a9650 FUN_101a9650

undefined4 FUN_101a9650(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217890;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar1 = *(int *)(in_ECX + 0x1cc);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101a973b Catch@101a973b

void Catch_101a973b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101a974f Catch@101a974f

void Catch_101a974f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCServerInfoWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a9770 FUN_101a9770

undefined4 FUN_101a9770(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  iVar6 = *(int *)(in_ECX + 0x334);
  local_8 = 0;
  if ((-1 < iVar6) && (iVar6 < *(int *)(in_ECX + 0x300))) {
    local_8 = *(int *)(*(int *)(in_ECX + 0x2fc) + iVar6 * 4);
  }
  iVar6 = *(int *)(in_ECX + 0x300);
  local_c = 0;
  if (0 < iVar6) {
    do {
      if (iVar6 != local_c && -1 < iVar6 - local_c) {
        iVar7 = 0;
        do {
          if (iVar6 + -1 <= iVar7) break;
          iVar6 = param_1 * 0x1a64;
          if ((*(short *)(iVar6 + **(int **)(*(int *)(in_ECX + 0x2fc) + iVar7 * 4)) == 0) ||
             (*(short *)(iVar6 + **(int **)(*(int *)(in_ECX + 0x2fc) + iVar7 * 4 + 4)) == 0))
          goto LAB_101a98e2;
          iVar4 = *(int *)(*(int *)(in_ECX + 0x308) + param_1 * 4);
          iVar1 = *(int *)(in_ECX + 0x2fc);
          if (*(int *)(iVar4 + 0x314) == 0) {
            iVar2 = **(int **)(iVar1 + 4 + iVar7 * 4);
            iVar1 = **(int **)(iVar1 + iVar7 * 4);
            if (*(int *)(iVar4 + 0x318) == 0) {
              iVar6 = __wcsicmp((wchar_t *)(iVar1 + iVar6),(wchar_t *)(iVar2 + iVar6));
              if (iVar6 < 0) goto LAB_101a98c8;
            }
            else {
              iVar6 = __wcsicmp((wchar_t *)(iVar1 + iVar6),(wchar_t *)(iVar2 + iVar6));
              if (0 < iVar6) {
LAB_101a98c8:
                puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x2fc) + iVar7 * 4);
                goto LAB_101a98d1;
              }
            }
          }
          else {
            iVar2 = **(int **)(iVar1 + 4 + iVar7 * 4);
            puVar5 = (undefined4 *)(iVar1 + iVar7 * 4);
            if (*(int *)(iVar4 + 0x318) == 0) {
              iVar4 = thunk_FUN_101c1b01(iVar2 + iVar6);
              iVar6 = thunk_FUN_101c1b01(*(int *)*puVar5 + iVar6);
              if (iVar6 < iVar4) {
                puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x2fc) + iVar7 * 4);
                goto LAB_101a98d1;
              }
            }
            else {
              iVar4 = thunk_FUN_101c1b01(iVar2 + iVar6);
              iVar6 = thunk_FUN_101c1b01(*(int *)*puVar5 + iVar6);
              if (iVar4 < iVar6) {
                puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x2fc) + iVar7 * 4);
LAB_101a98d1:
                uVar3 = *puVar5;
                *puVar5 = puVar5[1];
                *(undefined4 *)(*(int *)(in_ECX + 0x2fc) + 4 + iVar7 * 4) = uVar3;
              }
            }
          }
LAB_101a98e2:
          iVar6 = *(int *)(in_ECX + 0x300);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar6 - local_c);
      }
      iVar6 = *(int *)(in_ECX + 0x300);
      local_c = local_c + 1;
    } while (local_c < iVar6);
  }
  iVar6 = 0;
  if (0 < *(int *)(in_ECX + 0x300)) {
    puVar5 = *(undefined4 **)(in_ECX + 0x2fc);
    do {
      if ((*(byte *)(*(int *)*puVar5 + 0x4f10) & 8) != 0) {
        iVar7 = *(int *)(in_ECX + 0x2fc);
        uVar3 = *(undefined4 *)(iVar7 + iVar6 * 4);
        *(undefined4 *)(iVar7 + iVar6 * 4) =
             *(undefined4 *)(iVar7 + -4 + *(int *)(in_ECX + 0x300) * 4);
        *(undefined4 *)(*(int *)(in_ECX + 0x2fc) + -4 + *(int *)(in_ECX + 0x300) * 4) = uVar3;
        break;
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x300));
  }
  iVar6 = *(int *)(*(int *)(in_ECX + 0x308) + param_1 * 4);
  *(uint *)(iVar6 + 0x318) = (uint)(*(int *)(iVar6 + 0x318) == 0);
  if ((local_8 != 0) && (*(undefined4 *)(in_ECX + 0x334) = 0, 0 < *(int *)(in_ECX + 0x300))) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x2fc) + *(int *)(in_ECX + 0x334) * 4) == local_8) {
        return 1;
      }
      iVar6 = *(int *)(in_ECX + 0x334) + 1;
      *(int *)(in_ECX + 0x334) = iVar6;
    } while (iVar6 < *(int *)(in_ECX + 0x300));
  }
  return 1;
}


// ==== 101a99d0 FUN_101a99d0

/* WARNING: Removing unreachable block (ram,0x101a9d59) */

void FUN_101a99d0(L2ParamStack *param_1)

{
  double dVar1;
  byte bVar2;
  void *pvVar3;
  void *pvVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int in_ECX;
  uint uVar7;
  uint unaff_EBX;
  int unaff_EBP;
  undefined4 uVar8;
  int iVar9;
  wchar_t *pwVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  wchar_t *pwVar13;
  undefined4 uVar14;
  void *local_2b4;
  void *local_2b0;
  void *local_2ac;
  uint local_2a8;
  uint local_2a4;
  void *local_2a0;
  int iStack_29c;
  void *local_298;
  void *local_294;
  ushort auStack_218 [32];
  FOutputDevice aFStack_1d8 [64];
  ushort auStack_198 [64];
  ushort auStack_118 [64];
  undefined1 auStack_98 [128];
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_102178be;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_2b4;
  ExceptionList = &local_c;
  pvVar3 = L2ParamStack::Top(param_1);
  local_2a0 = L2ParamStack::Top(param_1);
  local_2ac = L2ParamStack::Top(param_1);
  local_294 = L2ParamStack::Top(param_1);
  local_298 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  local_2a4 = (uint)pvVar4 & 0xffff;
  pvVar4 = L2ParamStack::Top(param_1);
  local_2a8 = (uint)pvVar4 & 0xffff;
  local_2b4 = L2ParamStack::Top(param_1);
  local_2b0 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  local_2a4 = (**(code **)**(undefined4 **)GMalloc_exref)(0x850,&DAT_1022f8a0);
  uVar8 = 0;
  local_c = (void *)0x0;
  if (local_2a4 != 0) {
    uVar8 = FUN_100351f0(5);
  }
  local_c = (void *)0xffffffff;
  if (*(void **)(in_ECX + 0x1e0) == pvVar3) {
    *(void **)(in_ECX + 0x1e4) = pvVar3;
  }
  FUN_101a84e0(pvVar3,unaff_EBX,pvVar4,aFStack_1d8,auStack_98);
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(aFStack_1d8,*(ushort **)GLog_exref);
  }
  uVar7 = (int)pvVar3 - 1;
  iVar9 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 7U)) >> 3;
  if (iVar9 < 0x10) {
    uVar7 = uVar7 & 0x80000007;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
    }
    FUN_10071050(0x40000000,uVar7);
    bVar2 = FUN_101c19e0();
    if ((*(byte *)(iVar9 + 0x200 + in_ECX) & bVar2) != 0) {
      FUN_10034500(0xffff0000);
    }
  }
  if (((unaff_EBX & 8) == 0) && (*(int *)GLanguageType_exref != 2)) {
    FUN_100342d0(auStack_98);
  }
  FUN_100342d0(aFStack_1d8);
  FUN_100342d0(L"9999");
  if (unaff_EBP == 0) {
    puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6be3c));
    appSprintf((ushort *)&local_298,(ushort *)&DAT_1022dde0,puVar5);
    FUN_10034500(0xffff0000);
    goto LAB_101a9dbd;
  }
  if (unaff_EBP != 1) goto LAB_101a9dbd;
  if ((short)local_2b0 < 1) {
    puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6be48));
LAB_101a9cc6:
    appSprintf((ushort *)&local_298,(ushort *)&DAT_1022dde0,puVar5);
    uVar6 = 0xffbfae64;
  }
  else {
    dVar1 = ((double)(int)(short)local_2ac / (double)(int)(short)local_2b0) * 100.0;
    if ((NAN(dVar1) || 80.0 < dVar1 == (dVar1 == 80.0)) && ((short)local_2ac < 0xe74)) {
      if (dVar1 < 50.0 == (dVar1 == 50.0)) {
        puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6be48));
        goto LAB_101a9cc6;
      }
      puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6beb4));
      appSprintf((ushort *)&local_298,(ushort *)&DAT_1022dde0,puVar5);
      uVar6 = 0xff64a3d9;
    }
    else {
      puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6be54));
      appSprintf((ushort *)&local_298,(ushort *)&DAT_1022dde0,puVar5);
      uVar6 = 0xffff8080;
    }
  }
  FUN_10034500(uVar6);
  if ((*(int *)(in_ECX + 500) == 0) && (iVar9 = FUN_101a8990(pvVar3), iVar9 == 0)) {
    local_2a4 = **(int **)GConfig_exref;
    pwVar13 = L"s_info.ini";
    puVar11 = &stack0xfffffd44;
    pwVar10 = L"Time";
    puVar5 = appItoa((int)pvVar3);
    (**(code **)(local_2a4 + 4))(puVar5,pwVar10,puVar11,pwVar13);
    appSprintf(auStack_218,(ushort *)L"9999");
    FUN_100342d0(auStack_218);
  }
  else {
    FUN_100342d0(L"9999");
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0x454))
              (pvVar3,local_2a8,local_2b4);
    *(int *)(in_ECX + 0x1e8) = *(int *)(in_ECX + 0x1e8) + 1;
  }
LAB_101a9dbd:
  FUN_100342d0(&local_298);
  if (local_2a0 == (void *)0x1) {
    puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6be60));
  }
  else {
    puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6be6c));
  }
  appSprintf(auStack_118,(ushort *)&DAT_1022dde0,puVar5);
  if (iStack_29c == 0x12) {
    puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6be78));
  }
  else if (iStack_29c == 0xf) {
    puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6be84));
  }
  else {
    puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6c220));
  }
  appSprintf(auStack_198,(ushort *)&DAT_1022dde0,puVar5);
  if ((unaff_EBX & 2) != 0) {
    uVar14 = 0xc;
    uVar12 = 10;
    uVar6 = FUN_1003f630(L"symbol.sandglass",1);
    FUN_10034300(uVar6,uVar12,uVar14);
  }
  FUN_10034700(pvVar3,local_2a8,0xffffffff);
  puVar5 = appItoa((int)local_2b4);
  FUN_100346d0(puVar5);
  FUN_100344d0((int)(short)local_2ac,(int)(short)local_2b0,0xffffffff);
  FUN_100344a0(auStack_118);
  FUN_100344d0(unaff_EBX,0xffffffff,0xffffffff);
  FUN_100344a0(auStack_198);
  FUN_10036450(uVar8);
  ExceptionList = pvStack_14;
  __security_check_cookie(uStack_18 ^ (uint)&stack0xfffffd44);
  return;
}


// ==== 101a9f60 FUN_101a9f60

void FUN_101a9f60(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102178f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100376c0(0);
  *in_ECX = NCServerSelectListCtrl::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 101a9fc0 FUN_101a9fc0

void FUN_101a9fc0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10217928;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCServerSelectListCtrl::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_100377f0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101aa020 FUN_101aa020

void FUN_101aa020(byte param_1)

{
  void *in_ECX;
  
  FUN_101a9fc0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x35c);
  }
  return;
}


// ==== 101aa050 FUN_101aa050

void FUN_101aa050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10217958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100378a0(param_1,param_2,param_3,param_4,0,0x11);
  *in_ECX = NCServerSelectListCtrl::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 101aa0d0 FUN_101aa0d0

void FUN_101aa0d0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10217988;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCServerSelectWnd::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0xffffffff;
  in_ECX[0x7c] = 0;
  in_ECX[0x7a] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101aa150 FUN_101aa150

void FUN_101aa150(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102179b8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCServerSelectWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101aa1b0 FUN_101aa1b0

void FUN_101aa1b0(byte param_1)

{
  void *in_ECX;
  
  FUN_101aa150();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x210);
  }
  return;
}


// ==== 101aa1e0 FUN_101aa1e0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_101aa1e0(void)

{
  bool bVar1;
  undefined4 uVar2;
  UObject *pUVar3;
  int iVar4;
  UPackage *pUVar5;
  int in_ECX;
  uint uVar6;
  UPackage **ppUStack_14124;
  UPackage *pUStack_14100;
  undefined4 uStack_140fc;
  undefined4 uStack_140f8;
  undefined4 uStack_140f4;
  undefined4 *puStack_140f0;
  uint *puStack_140ec;
  UPackage *pUStack_140e4;
  undefined4 uStack_140e0;
  undefined4 uStack_140dc;
  undefined4 uStack_140d8;
  undefined4 uStack_140d4;
  uint uStack_140d0;
  undefined4 uStack_140c8;
  wchar_t *pwStack_140c4;
  undefined4 uStack_140c0;
  uint uStack_140bc;
  uint uStack_8c;
  void *pvStack_88;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10217ab2;
  local_c = ExceptionList;
  uStack_140bc = DAT_103554c4 ^ (uint)&stack0xfffebf48;
  ExceptionList = &local_c;
  uVar6 = 0;
  uStack_140c0 = 0x101aa22c;
  FUN_10061b40();
  uStack_140c0 = 1;
  pwStack_140c4 = L"L2UI_CH3.Serverselectwnd.Serverselect_back";
  uStack_140c8 = 0x101aa23a;
  uVar2 = FUN_1003f630();
  uStack_140c0 = 0;
  pwStack_140c4 = (wchar_t *)0xbb8;
  uStack_140c8 = 0xf019;
  *(undefined4 *)(in_ECX + 0x1cc) = uVar2;
  uVar2 = FUN_1003f600();
  *(undefined4 *)(in_ECX + 0x1ec) = uVar2;
  uStack_140d0 = 0x101aa263;
  FName::FName((FName *)&stack0xfffebf50,0);
  pUStack_140e4 = UObject::GetTransientPackage();
  uStack_140d4 = *(undefined4 *)GError_exref;
  uStack_140d0 = 0;
  uStack_140d8 = 0;
  uStack_140dc = 0;
  puStack_140ec = (uint *)0x101aa287;
  pUVar3 = UObject::StaticAllocateObject();
  if (pUVar3 == (UObject *)0x0) {
    iVar4 = 0;
  }
  else {
    uStack_140d0 = 5;
    uStack_140d4 = 0xf;
    uStack_140d8 = 100;
    uStack_140dc = 0x101aa29d;
    iVar4 = FUN_101aa050();
  }
  uVar2 = 3;
  uStack_140d0 = 0;
  uStack_140d4 = 0;
  *(int *)(in_ECX + 0x1d0) = iVar4;
  uStack_140d8 = 0x112;
  *(undefined4 *)(iVar4 + 0x1cc) = 0xf018;
  uStack_140dc = 300;
  uStack_140e0 = 10;
  pUStack_140e4 = (UPackage *)0x8;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xc0))();
  puStack_140ec = *(uint **)(in_ECX + 0x1d0);
  puStack_140f0 = (undefined4 *)0x101aa2e3;
  FUN_10060d40();
  puStack_140ec = (uint *)0x101aa2ef;
  FUN_1005c1e0();
  puStack_140ec = (uint *)0x0;
  puStack_140f0 = (undefined4 *)0x101aa2fd;
  FUN_10034ff0();
  FUN_100e03d0();
  iVar4 = *(int *)GLanguageType_exref;
  if (((iVar4 == 2) || (iVar4 == 6)) || (iVar4 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    puStack_140ec = (uint *)0x101aa34d;
    FUN_10034510();
  }
  puStack_140ec = (uint *)0x101aa35d;
  FUN_100379e0();
  FUN_100e03d0();
  puStack_140ec = (uint *)0x101aa392;
  FUN_10034510();
  puStack_140ec = (uint *)0x101aa3a5;
  FUN_100379e0();
  FUN_100e03d0();
  puStack_140ec = (uint *)0x101aa3d4;
  FUN_10034510();
  puStack_140ec = (uint *)0x101aa3e7;
  FUN_100379e0();
  FUN_100e03d0();
  puStack_140ec = (uint *)0x101aa422;
  FUN_10034510();
  puStack_140ec = (uint *)0x101aa435;
  FUN_100379e0();
  FUN_100e03d0();
  puStack_140ec = (uint *)0x101aa460;
  FUN_10034510();
  puStack_140ec = (uint *)0x101aa473;
  FUN_100379e0();
  puStack_140ec = (uint *)0x101aa47f;
  FName::FName((FName *)&stack0xfffebf34,0);
  uStack_140fc = uVar2;
  pUStack_14100 = UObject::GetTransientPackage();
  puStack_140f0 = *(undefined4 **)GError_exref;
  puStack_140ec = (uint *)0x0;
  uStack_140f4 = 0;
  uStack_140f8 = 0;
  pUVar3 = UObject::StaticAllocateObject();
  if (pUVar3 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    puStack_140ec = (uint *)0x101aa4c1;
    FString::FString((FString *)&uStack_140bc,(ushort *)L"L2UI_CH3.Button.Btn1_normalOn");
    uStack_140d0 = 1;
    puStack_140ec = (uint *)0x101aa4e4;
    FString::FString((FString *)&uStack_140c8,(ushort *)L"L2UI_CH3.Button.Btn1_normal");
    puStack_140ec = &uStack_140bc;
    puStack_140f0 = &uStack_140c8;
    uVar6 = 3;
    uStack_140d0 = 3;
    uStack_140f4 = 0x101aa507;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d4) = uVar2;
  if ((uVar6 & 2) != 0) {
    uVar6 = uVar6 & 0xfffffffd;
    uStack_140d0 = uVar6;
    FString::~FString((FString *)&uStack_140c8);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffe;
    uStack_140d0 = uVar6;
    FString::~FString((FString *)&uStack_140bc);
  }
  puStack_140ec = (uint *)0x0;
  puStack_140f0 = (undefined4 *)0x0;
  uStack_140f4 = 0x17;
  *(undefined4 *)(*(int *)(in_ECX + 0x1d4) + 0x1cc) = 0xf007;
  uStack_140f8 = 0x4c;
  uStack_140fc = 0x129;
  pUStack_14100 = (UPackage *)0x79;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FUN_10003cf0();
  FName::FName((FName *)&stack0xfffebf18,0);
  UObject::GetTransientPackage();
  ppUStack_14124 = (UPackage **)0x101aa5ee;
  pUVar3 = UObject::StaticAllocateObject();
  if (pUVar3 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_140e4,(ushort *)L"L2UI_CH3.Button.Btn1_normalOn");
    puStack_140ec = (uint *)(uVar6 | 4);
    FString::FString((FString *)&uStack_140d8,(ushort *)L"L2UI_CH3.Button.Btn1_normal");
    uVar6 = uVar6 | 0xc;
    puStack_140ec = (uint *)uVar6;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d8) = uVar2;
  if ((uVar6 & 8) != 0) {
    uVar6 = uVar6 & 0xfffffff7;
    puStack_140ec = (uint *)uVar6;
    FString::~FString((FString *)&uStack_140d8);
  }
  if ((uVar6 & 4) != 0) {
    puStack_140ec = (uint *)(uVar6 & 0xfffffffb);
    FString::~FString((FString *)&pUStack_140e4);
  }
  uVar2 = 3;
  *(undefined4 *)(*(int *)(in_ECX + 0x1d8) + 0x1cc) = 0xf017;
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xc0))();
  ppUStack_14124 = *(UPackage ***)(in_ECX + 0x1d8);
  FUN_10060d40();
  ppUStack_14124 = (UPackage **)0x101aa6e8;
  FUN_1005c1e0();
  ppUStack_14124 = (UPackage **)0x101aa6f8;
  FUN_10003cf0();
  ppUStack_14124 = (UPackage **)0x101aa704;
  FName::FName((FName *)&stack0xfffebefc,0);
  pUVar5 = UObject::GetTransientPackage();
  ppUStack_14124 = (UPackage **)0x0;
  pUVar3 = UObject::StaticAllocateObject(&DAT_10357870,pUVar5,uVar2,0,0,*(undefined4 *)GError_exref)
  ;
  if (pUVar3 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    ppUStack_14124 = (UPackage **)0x101aa742;
    FString::FString((FString *)&pUStack_14100,(ushort *)L"L2UI_CH3.Button.Btn1_normalOn");
    ppUStack_14124 = (UPackage **)0x101aa763;
    FString::FString((FString *)&uStack_140f4,(ushort *)L"L2UI_CH3.Button.Btn1_normal");
    ppUStack_14124 = &pUStack_14100;
    uVar2 = FUN_10006980(&uStack_140f4);
  }
  *(undefined4 *)(in_ECX + 0x1dc) = uVar2;
  if (pUVar3 != (UObject *)0x0) {
    FString::~FString((FString *)&uStack_140f4);
    FString::~FString((FString *)&pUStack_14100);
  }
  ppUStack_14124 = (UPackage **)0x0;
  *(undefined4 *)(*(int *)(in_ECX + 0x1dc) + 0x1cc) = 0xf020;
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0xc0))(0x29,0x129,0x4c,0x17,0);
  uVar2 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1dc),2);
  FUN_1005c1e0(uVar2);
  FUN_10003cf0(0x25b);
  uVar2 = FUN_101a8940();
  *(undefined4 *)(in_ECX + 500) = uVar2;
  *(undefined4 *)(in_ECX + 0x1f8) = 0;
  *(undefined4 *)(in_ECX + 0x1fc) = 0;
  ExceptionList = pvStack_88;
  __security_check_cookie(uStack_8c ^ (uint)&ppUStack_14124);
  return;
}


// ==== 101aa8b0 FUN_101aa8b0

undefined4 FUN_101aa8b0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217ae0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 101aa8fe Catch@101aa8fe

void Catch_101aa8fe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aa912 Catch@101aa912

void Catch_101aa912(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCViewportWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aa930 FUN_101aa930

undefined4 FUN_101aa930(void)

{
  return 1;
}


// ==== 101aa97b Catch@101aa97b

void Catch_101aa97b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aa98f Catch@101aa98f

void Catch_101aa98f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCViewportWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aa9b0 FUN_101aa9b0

void FUN_101aa9b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_2;
  in_ECX[2] = (float)param_4;
  in_ECX[1] = param_3;
  in_ECX[4] = param_1;
  in_ECX[3] = (float)param_5;
  return;
}


// ==== 101aa9e0 FUN_101aa9e0

void FUN_101aa9e0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021640(in_ECX[4],*in_ECX,in_ECX[1],uVar2,uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 101aaa56 Catch@101aaa56

void Catch_101aaa56(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aaa6a Catch@101aaa6a

void Catch_101aaa6a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCViewport::DrawViewport");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aaa90 FUN_101aaa90

undefined4 FUN_101aaa90(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217b40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061b40();
  if (*(int *)(in_ECX + 0x1cc) == 0) {
    uVar1 = FUN_1003f630(L"L2UI_CH3.FishingWnd.fishing_back",1);
    *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  }
  if (*(int *)(in_ECX + 0x1d0) == 0) {
    uVar1 = FUN_1003f630(L"L2UI_CH3.FishingWnd.fishing_clockicon",1);
    *(undefined4 *)(in_ECX + 0x1d0) = uVar1;
  }
  if (*(int *)(in_ECX + 0x1d4) == 0) {
    uVar1 = FUN_1003f630(L"L2UI_CH3.FishingWnd.fishing_bar1",1);
    *(undefined4 *)(in_ECX + 0x1d4) = uVar1;
  }
  if (*(int *)(in_ECX + 0x1d8) == 0) {
    uVar1 = FUN_1003f630(L"L2UI_CH3.FishingWnd.fishing_bar2",1);
    *(undefined4 *)(in_ECX + 0x1d8) = uVar1;
  }
  if (*(int *)(in_ECX + 0x1dc) == 0) {
    uVar1 = FUN_1003f630(L"L2UI_CH3.PlayerStatusWnd.ps_hpbarwarn1",1);
    *(undefined4 *)(in_ECX + 0x1dc) = uVar1;
  }
  if (*(int *)(in_ECX + 0x1e0) == 0) {
    uVar1 = FUN_1003f630(L"L2UI_CH3.FishingWnd.fishing_effect",1);
    *(undefined4 *)(in_ECX + 0x1e0) = uVar1;
  }
  if (*(int *)(in_ECX + 0x1e4) == 0) {
    uVar1 = FUN_1003f630(L"Icon.skill_i.skill1313",1);
    *(undefined4 *)(in_ECX + 0x1e4) = uVar1;
  }
  if (*(int *)(in_ECX + 0x1e8) == 0) {
    uVar1 = FUN_1003f630(L"Icon.skill_i.skill1314",1);
    *(undefined4 *)(in_ECX + 0x1e8) = uVar1;
  }
  *(undefined4 *)(in_ECX + 0x254) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 101aabd2 Catch@101aabd2

void Catch_101aabd2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aabe6 Catch@101aabe6

void Catch_101aabe6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFishViewportWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aac10 FUN_101aac10

void FUN_101aac10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217b60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005ee10(param_1,param_2);
  if (*(int *)(in_ECX + 0x254) == 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0(uVar1);
    FUN_101aa9b0(0,2,0x14,uVar2,uVar1);
    *(undefined4 *)(in_ECX + 0x254) = 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101aacc4 Catch@101aacc4

void Catch_101aacc4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aacd8 Catch@101aacd8

void Catch_101aacd8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFishViewportWnd::SetWindowSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aad00 FUN_101aad00

undefined4 FUN_101aad00(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217b80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 101aad4e Catch@101aad4e

void Catch_101aad4e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aad62 Catch@101aad62

void Catch_101aad62(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFishViewportWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aad80 FUN_101aad80

void FUN_101aad80(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217ba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x1ec) = param_1;
  *(undefined4 *)(in_ECX + 0x1f0) = param_1;
  *(undefined4 *)(in_ECX + 0x1f8) = param_2;
  *(undefined4 *)(in_ECX + 500) = param_2;
  *(undefined4 *)(in_ECX + 0x1fc) = 0;
  *(undefined4 *)(in_ECX + 0x22c) = 0;
  *(undefined4 *)(in_ECX + 0x21c) = 0;
  FString::operator=((FString *)(in_ECX + 0x210),(ushort *)&DAT_1022f9f8);
  *(undefined4 *)(in_ECX + 0x234) = 0;
  *(undefined4 *)(in_ECX + 0x238) = 0;
  *(undefined1 *)(in_ECX + 0x23c) = param_3;
  *(undefined1 *)(in_ECX + 0x23d) = 0;
  *(undefined4 *)(in_ECX + 0x230) = 0;
  *(undefined1 *)(in_ECX + 0x23e) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 101aae3b Catch@101aae3b

void Catch_101aae3b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aae4f Catch@101aae4f

void Catch_101aae4f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFishViewportWnd::InitFishStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aae70 FUN_101aae70

void FUN_101aae70(int param_1,int param_2)

{
  ushort *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217bc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 * 0xc + 0x6a8dc));
  FString::operator=((FString *)(in_ECX + 0x210),puVar1);
  *(int *)(in_ECX + 0x21c) = param_2;
  puVar1 = appItoa(param_2);
  FString::operator=((FString *)(in_ECX + 0x220),puVar1);
  *(undefined4 *)(in_ECX + 0x22c) = 0x40000000;
  *(uint *)(in_ECX + 0x230) = (uint)(0 < param_2);
  ExceptionList = local_10;
  return;
}


// ==== 101aaf20 Catch@101aaf20

void Catch_101aaf20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aaf34 Catch@101aaf34

void Catch_101aaf34(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFishViewportWnd::ShowFishString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aaf60 FUN_101aaf60

void FUN_101aaf60(undefined4 param_1,int param_2,undefined4 param_3)

{
  ushort *puVar1;
  int in_ECX;
  uint uStack_230;
  ushort local_218 [256];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217be0;
  local_10 = ExceptionList;
  uStack_230 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_230;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_230;
  FUN_10164030(param_1,param_3,local_218);
  FString::operator=((FString *)(in_ECX + 0x210),local_218);
  *(int *)(in_ECX + 0x21c) = param_2;
  puVar1 = appItoa(param_2);
  FString::operator=((FString *)(in_ECX + 0x220),puVar1);
  *(undefined4 *)(in_ECX + 0x22c) = 0x40000000;
  *(undefined4 *)(in_ECX + 0x230) = 1;
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101ab024 Catch@101ab024

void Catch_101ab024(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x218) = *(undefined4 *)(unaff_EBP + -0x21c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x218,&DAT_102a47f0);
}


// ==== 101ab041 Catch@101ab041

void Catch_101ab041(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFishViewportWnd::ShowFishStringWithPenalty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ab060 FUN_101ab060

void FUN_101ab060(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x204) = 1;
  *(undefined4 *)(in_ECX + 0x200) = 0xff;
  *(undefined4 *)(in_ECX + 0x208) = 0;
  return;
}


// ==== 101ab0c9 Catch@101ab0c9

void Catch_101ab0c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ab0dd Catch@101ab0dd

void Catch_101ab0dd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFishViewportWnd::ShowEffect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ab100 FUN_101ab100

void FUN_101ab100(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217c30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x20c) = 0x40000000;
  if (*(int *)(in_ECX + 0x1fc) != 0) {
    FUN_101ab060();
  }
  ExceptionList = local_10;
  return;
}


// ==== 101ab167 Catch@101ab167

void Catch_101ab167(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ab17b Catch@101ab17b

void Catch_101ab17b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFishViewportWnd::SetFinalAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ab1a0 FUN_101ab1a0

void FUN_101ab1a0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  *in_ECX = 0;
  return;
}


// ==== 101ab1c0 FUN_101ab1c0

void FUN_101ab1c0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  int in_ECX;
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
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  if (*(int *)(in_ECX + 0x1cc) != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0x14,uVar3,uVar2,0,0,uVar3,uVar2,*(undefined4 *)(in_ECX + 0x1cc),0xff,1);
  }
  FUN_101aa9e0(param_1);
  uVar16 = 0;
  uVar14 = 0;
  uVar12 = 0;
  uVar10 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(in_ECX + 0x220));
  FUN_10020bb0(local_50,puVar4,uVar2,uVar3,uVar10,uVar12,uVar14,uVar16);
  if (0.0 < *(float *)(in_ECX + 0x22c)) {
    uVar7 = 0xff;
    local_3b = 0xff;
    if ((1.0 < *(float *)(in_ECX + 0x22c)) || (*(float *)(in_ECX + 0x22c) <= 0.0)) {
      local_3b = 0xff;
      uVar7 = 0xff;
    }
    else if (*(float *)(in_ECX + 0x22c) <= 1.0) {
      uVar2 = (undefined4)local_44;
      uVar6 = (uint)ROUND(*(float *)(in_ECX + 0x22c) * 255.0);
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
    if (*(int *)(in_ECX + 0x230) == 0) {
      puVar4 = FString::operator*((FString *)(in_ECX + 0x210));
      uVar6 = uVar7 | 0xdcdcdc;
    }
    else {
      puVar4 = FString::operator*((FString *)(in_ECX + 0x210));
      uVar6 = uVar7 | 0xff0000;
    }
    FUN_100217a0(0xd,0x100,uVar6,puVar4,uVar2,uVar3,uVar10,uVar12,uVar14,uVar16,uVar8,uVar9,uVar11,
                 uVar13,uVar15,uVar17);
    if (*(int *)(in_ECX + 0x21c) < 1) {
      if (*(int *)(in_ECX + 0x21c) < 0) {
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
        puVar4 = FString::operator*((FString *)(in_ECX + 0x220));
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
      puVar4 = FString::operator*((FString *)(in_ECX + 0x220));
      FUN_100217a0(0xf2 - local_50[0],0x100,uVar7 | 0xff0000,puVar4,uVar2,uVar3,uVar10,uVar12,uVar14
                   ,uVar16,uVar8,uVar9,uVar11,uVar13,uVar15,uVar17);
    }
  }
  if (*(int *)(in_ECX + 0x1fc) != 0) {
    if (*(int *)(in_ECX + 0x1d0) != 0) {
      FUN_10021a00(0x6e,0xd7,0xc,0x10,0,0,0xc,0x10,*(int *)(in_ECX + 0x1d0),0xff,1);
      appSprintf(local_38,(ushort *)&DAT_10233718,*(undefined4 *)(in_ECX + 0x1f8));
      FUN_100212f0(2,0x7d,0xd8,0xffdcdcdc,local_38,0xff);
    }
    if (*(int *)(in_ECX + 0x1ec) != 0) {
      iVar5 = (*(int *)(in_ECX + 0x1f0) * 0x73) / *(int *)(in_ECX + 0x1ec);
      if (*(char *)(in_ECX + 0x23e) == '\0') {
        uVar2 = *(undefined4 *)(in_ECX + 0x1d4);
      }
      else {
        uVar2 = *(undefined4 *)(in_ECX + 0x1dc);
      }
      FUN_10021a00(0xd,0xec,iVar5,0xb,0,0,8,0xb,uVar2,0xff,1);
      FUN_10021a00(iVar5 + 0xd,0xec,0xe6 - iVar5,0xb,0,0,8,0xb,*(undefined4 *)(in_ECX + 0x1d8),0xff,
                   1);
    }
    if (*(int *)(in_ECX + 0x204) != 0) {
      FUN_10021a00(0xffffffea,0xdd,0x129,0x29,0,0,0x129,0x29,*(undefined4 *)(in_ECX + 0x1e0),
                   *(undefined1 *)(in_ECX + 0x200),1);
    }
  }
  if ((*(int *)(in_ECX + 0x234) != 0) &&
     ((((fVar1 = *(float *)(in_ECX + 0x238), !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0) &&
        (*(float *)(in_ECX + 0x238) < 0.1)) ||
       ((0.2 <= *(float *)(in_ECX + 0x238) && (*(float *)(in_ECX + 0x238) < 0.3)))) ||
      (0.4 <= *(float *)(in_ECX + 0x238))))) {
    if (*(char *)(in_ECX + 0x23d) == '\0') {
      FUN_10021a00(0xd,0x21,0x20,0x20,0,0,0x20,0x20,*(undefined4 *)(in_ECX + 0x1e4),0xff,1);
      local_44 = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 63.0);
      this = (FString *)(GL2GameData_exref + 0x49748);
      uVar2 = (undefined4)local_44;
    }
    else {
      FUN_10021a00(0xd,0x21,0x20,0x20,0,0,0x20,0x20,*(undefined4 *)(in_ECX + 0x1e8),0xff,1);
      local_44 = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 63.0);
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
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101ab6ea Catch@101ab6ea

void Catch_101ab6ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_102a47f0);
}


// ==== 101ab6fe Catch@101ab6fe

void Catch_101ab6fe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFishViewportWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ab720 FUN_101ab720

void FUN_101ab720(int param_1,undefined4 param_2,char param_3,char param_4,char param_5,int param_6,
                 undefined1 param_7)

{
  int in_ECX;
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217c80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = param_1 - *(int *)(in_ECX + 0x1f0);
  if (*(char *)(in_ECX + 0x23d) != param_4) {
    *(char *)(in_ECX + 0x23d) = param_4;
    *(undefined4 *)(in_ECX + 0x238) = 0;
  }
  if (param_5 != '\x04') {
    *(int *)(in_ECX + 0x1f0) = param_1;
    *(undefined4 *)(in_ECX + 0x1f8) = param_2;
  }
  if (((*(int *)(in_ECX + 0x1fc) == 0) && (*(int *)(in_ECX + 500) - *(int *)(in_ECX + 0x1f8) == 3))
     && (*(undefined4 *)(in_ECX + 0x1fc) = 1, *(char *)(in_ECX + 0x23c) == '\0')) {
    *(undefined4 *)(in_ECX + 0x234) = 1;
  }
  if (param_5 == '\x03') {
    uVar2 = 0x4ed;
LAB_101ab7de:
    FUN_101aae70(uVar2,0);
  }
  else if (param_5 == '\x04') {
    *(undefined4 *)(in_ECX + 0x234) = 0;
    uVar2 = 0x4f0;
    goto LAB_101ab7de;
  }
  if (*(int *)(in_ECX + 0x1fc) != 0) {
    if (param_3 != '\0') {
      FUN_101ab060();
    }
    if (param_5 == '\x01') {
      if (iVar1 < 0) {
        if (0 < param_6) {
          FUN_101aaf60(0x688,iVar1,param_6);
          goto LAB_101ab860;
        }
        uVar2 = 0x4e8;
      }
      else {
        uVar2 = 0x4ea;
      }
    }
    else {
      if (param_5 != '\x02') goto LAB_101ab860;
      if (iVar1 < 0) {
        if (0 < param_6) {
          FUN_101aaf60(0x687,iVar1,param_6);
          goto LAB_101ab860;
        }
        uVar2 = 0x4e9;
      }
      else {
        uVar2 = 0x4eb;
      }
    }
    FUN_101aae70(uVar2,iVar1);
  }
LAB_101ab860:
  *(undefined1 *)(in_ECX + 0x23e) = param_7;
  ExceptionList = local_10;
  return;
}


// ==== 101ab885 Catch@101ab885

void Catch_101ab885(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ab899 Catch@101ab899

void Catch_101ab899(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFishViewportWnd::SetFishStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ab8c0 FUN_101ab8c0

void FUN_101ab8c0(int param_1)

{
  int in_ECX;
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10217cb2;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x1ec) = 0;
  *(undefined4 *)(in_ECX + 0x1f0) = 0;
  *(undefined4 *)(in_ECX + 500) = 0;
  *(undefined4 *)(in_ECX + 0x1f8) = 0;
  *(undefined4 *)(in_ECX + 0x1fc) = 0;
  *(undefined4 *)(in_ECX + 0x20c) = 0;
  *(undefined4 *)(in_ECX + 0x22c) = 0;
  *(undefined4 *)(in_ECX + 0x21c) = 0;
  FString::operator=((FString *)(in_ECX + 0x210),(ushort *)&DAT_1022f9f8);
  *(undefined4 *)(in_ECX + 0x234) = 0;
  *(undefined4 *)(in_ECX + 0x238) = 0;
  *(undefined1 *)(in_ECX + 0x23c) = 0;
  *(undefined1 *)(in_ECX + 0x23d) = 0;
  *(undefined4 *)(in_ECX + 0x230) = 0;
  *(undefined1 *)(in_ECX + 0x23e) = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  if (param_1 == 0) {
    local_8._0_1_ = 2;
    uVar1 = 0x9d8;
  }
  else {
    local_8._0_1_ = 1;
    uVar1 = 0x9ce;
  }
  pFVar2 = local_28;
  FUN_10005c30(uVar1,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101ab9bf Catch@101ab9bf

void Catch_101ab9bf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ab9d3 Catch@101ab9d3

void Catch_101ab9d3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFishViewportWnd::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ab9f0 FUN_101ab9f0

void FUN_101ab9f0(float param_1)

{
  float fVar1;
  uint *puVar2;
  int in_ECX;
  float10 fVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 uVar4;
  FString *pFVar5;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10217cd9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  fVar3 = (float10)param_1;
  puVar2 = &uStack_38;
  if (*(int *)(in_ECX + 0x204) != 0) {
    fVar1 = (float)(fVar3 + (float10)*(float *)(in_ECX + 0x208));
    *(float *)(in_ECX + 0x208) = fVar1;
    if (0.04 < fVar1) {
      if (0.08 < fVar1) {
        if (0.095 < fVar1) {
          if (fVar1 < 0.2 == (fVar1 == 0.2)) {
            *(undefined4 *)(in_ECX + 0x204) = 0;
            *(undefined4 *)(in_ECX + 0x200) = 0;
            *(undefined4 *)(in_ECX + 0x208) = 0;
            puVar2 = &uStack_38;
          }
          else {
            uVar4 = FUN_101c19e0();
            *(undefined4 *)(in_ECX + 0x200) = uVar4;
            fVar3 = extraout_ST0_00;
            puVar2 = (uint *)local_14;
          }
        }
        else {
          local_14 = (undefined1 *)&uStack_38;
          uVar4 = FUN_101c19e0();
          *(undefined4 *)(in_ECX + 0x200) = uVar4;
          fVar3 = extraout_ST0;
          puVar2 = (uint *)local_14;
        }
      }
      else {
        *(undefined4 *)(in_ECX + 0x200) = 0;
        puVar2 = &uStack_38;
      }
    }
    else {
      *(undefined4 *)(in_ECX + 0x200) = 0xff;
      puVar2 = &uStack_38;
    }
  }
  local_14 = (undefined1 *)puVar2;
  if (*(int *)(in_ECX + 0x234) != 0) {
    *(float *)(in_ECX + 0x238) = (float)((float10)*(float *)(in_ECX + 0x238) + fVar3);
  }
  if ((0.0 < *(float *)(in_ECX + 0x22c)) &&
     (fVar1 = (float)((float10)*(float *)(in_ECX + 0x22c) - fVar3),
     *(float *)(in_ECX + 0x22c) = fVar1, fVar1 < 0.0)) {
    *(undefined4 *)(in_ECX + 0x22c) = 0;
  }
  if (0.0 < *(float *)(in_ECX + 0x20c)) {
    fVar1 = (float)((float10)*(float *)(in_ECX + 0x20c) - fVar3);
    *(float *)(in_ECX + 0x20c) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      FString::FString(local_28,(ushort *)&DAT_1022f9f8);
      local_8._0_1_ = 1;
      pFVar5 = local_28;
      uVar4 = 0x9b0;
      FUN_10005c30(0x9b0,pFVar5);
      FUN_100d1790(uVar4,pFVar5);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101abbb8 Catch@101abbb8

void Catch_101abbb8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101abbcc Catch@101abbcc

void Catch_101abbcc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFishViewportWnd::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101abbf0 FUN_101abbf0

void FUN_101abbf0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10217d08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCViewportWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 101abc50 FUN_101abc50

void FUN_101abc50(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10217d38;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCViewportWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101abcb0 FUN_101abcb0

void FUN_101abcb0(byte param_1)

{
  void *in_ECX;
  
  FUN_101abc50();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1cc);
  }
  return;
}


// ==== 101abce0 FUN_101abce0

void FUN_101abce0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10217d86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  *in_ECX = NCFishViewportWnd::vftable;
  FString::FString((FString *)(in_ECX + 0x84));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x88));
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_101ab1a0();
  in_ECX[0x82] = 0;
  in_ECX[0x83] = 0;
  in_ECX[0x8b] = 0;
  in_ECX[0x7b] = 0;
  in_ECX[0x7c] = 0;
  in_ECX[0x7d] = 0;
  in_ECX[0x7e] = 0;
  in_ECX[0x7f] = 0;
  in_ECX[0x80] = 0;
  in_ECX[0x81] = 0;
  FString::operator=((FString *)(in_ECX + 0x84),(ushort *)&DAT_1022f9f8);
  in_ECX[0x87] = 0;
  FString::operator=((FString *)(in_ECX + 0x88),(ushort *)&DAT_1022f9f8);
  in_ECX[0x8e] = 0;
  in_ECX[0x8d] = 0;
  *(undefined1 *)(in_ECX + 0x8f) = 0;
  *(undefined1 *)((int)in_ECX + 0x23d) = 0;
  in_ECX[0x8c] = 0;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101abe20 FUN_101abe20

void FUN_101abe20(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10217dd6;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCFishViewportWnd::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x220));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x210));
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101abea0 FUN_101abea0

void FUN_101abea0(byte param_1)

{
  void *in_ECX;
  
  FUN_101abe20();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,600);
  }
  return;
}


// ==== 101abed0 FUN_101abed0

void FUN_101abed0(void)

{
  ushort *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10217e6e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 7;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe0);
  local_4._0_1_ = 8;
  *in_ECX = NCFishViewportWnd::vftable;
  FString::FString((FString *)(in_ECX + 0x84));
  local_4._0_1_ = 9;
  FString::FString((FString *)(in_ECX + 0x88));
  local_4._0_1_ = 10;
  FUN_101ab1a0();
  in_ECX[0x82] = 0;
  in_ECX[0x83] = 0;
  in_ECX[0x8b] = 0;
  in_ECX[0x7b] = 0;
  in_ECX[0x7c] = 0;
  in_ECX[0x7d] = 0;
  in_ECX[0x7e] = 0;
  in_ECX[0x7f] = 0;
  in_ECX[0x80] = 0;
  in_ECX[0x81] = 0;
  FString::operator=((FString *)(in_ECX + 0x84),(ushort *)&DAT_1022f9f8);
  in_ECX[0x87] = 0;
  FString::operator=((FString *)(in_ECX + 0x88),(ushort *)&DAT_1022f9f8);
  uVar2 = 1;
  in_ECX[0x8e] = 0;
  in_ECX[0x8d] = 0;
  *(undefined1 *)(in_ECX + 0x8f) = 0;
  *(undefined1 *)((int)in_ECX + 0x23d) = 0;
  in_ECX[0x8c] = 0;
  puVar1 = FString::operator*((FString *)&stack0x00000004);
  uVar2 = FUN_1003f630(puVar1,uVar2);
  uVar3 = 1;
  in_ECX[0x73] = uVar2;
  puVar1 = FString::operator*((FString *)&stack0x00000010);
  uVar2 = FUN_1003f630(puVar1,uVar3);
  uVar3 = 1;
  in_ECX[0x74] = uVar2;
  puVar1 = FString::operator*((FString *)&stack0x0000001c);
  uVar2 = FUN_1003f630(puVar1,uVar3);
  uVar3 = 1;
  in_ECX[0x75] = uVar2;
  puVar1 = FString::operator*((FString *)&stack0x00000028);
  uVar2 = FUN_1003f630(puVar1,uVar3);
  uVar3 = 1;
  in_ECX[0x76] = uVar2;
  puVar1 = FString::operator*((FString *)&stack0x00000034);
  uVar2 = FUN_1003f630(puVar1,uVar3);
  uVar3 = 1;
  in_ECX[0x77] = uVar2;
  puVar1 = FString::operator*((FString *)&stack0x00000040);
  uVar2 = FUN_1003f630(puVar1,uVar3);
  uVar3 = 1;
  in_ECX[0x78] = uVar2;
  puVar1 = FString::operator*((FString *)&stack0x0000004c);
  uVar2 = FUN_1003f630(puVar1,uVar3);
  uVar3 = 1;
  in_ECX[0x79] = uVar2;
  puVar1 = FString::operator*((FString *)&stack0x00000058);
  uVar2 = FUN_1003f630(puVar1,uVar3);
  in_ECX[0x7a] = uVar2;
  local_4._0_1_ = 6;
  FString::~FString((FString *)&stack0x00000004);
  local_4._0_1_ = 5;
  FString::~FString((FString *)&stack0x00000010);
  local_4._0_1_ = 4;
  FString::~FString((FString *)&stack0x0000001c);
  local_4._0_1_ = 3;
  FString::~FString((FString *)&stack0x00000028);
  local_4._0_1_ = 2;
  FString::~FString((FString *)&stack0x00000034);
  local_4._0_1_ = 1;
  FString::~FString((FString *)&stack0x00000040);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)&stack0x0000004c);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000058);
  ExceptionList = local_c;
  return;
}


// ==== 101ac150 FUN_101ac150

undefined4 FUN_101ac150(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217e90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 101ac19e Catch@101ac19e

void Catch_101ac19e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ac1b2 Catch@101ac1b2

void Catch_101ac1b2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMasSealWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ac1d0 FUN_101ac1d0

undefined4 FUN_101ac1d0(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int iVar4;
  int in_ECX;
  int local_4;
  
  local_4 = in_ECX;
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"L2UI.MinimapWnd.MinimapBack",1);
  *(undefined4 *)(in_ECX + 0x1d0) = uVar1;
  FName::FName((FName *)&local_4,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_1035db10,pUVar2,local_4,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_1001c510(1,0,0);
  }
  *(int *)(in_ECX + 0xc0) = iVar4;
  *(undefined4 *)(iVar4 + 0x1cc) = 0xb000fa;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))(0,0,0x14e,0x14,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0xc0),2);
  FUN_1005c1e0(uVar1);
  return 1;
}


// ==== 101ac290 FUN_101ac290

undefined4 FUN_101ac290(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  if (*(int *)(in_ECX + 0x1d0) != 0) {
    FUN_10021a00(0,0x14,0x14e,0x14d,0,0,0x14e,0x14d,*(int *)(in_ECX + 0x1d0),0xff,1);
  }
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    FUN_10021a00(3,0x15,0x148,0x149,0,0,0x148,0x149,*(int *)(in_ECX + 0x1d4),0xff,1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  return 1;
}


// ==== 101ac370 FUN_101ac370

void FUN_101ac370(undefined4 param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  undefined4 uVar3;
  
  *(undefined4 *)(in_ECX + 0x1cc) = param_1;
  iVar1 = FUN_10187a60((undefined4 *)(in_ECX + 0x1cc));
  uVar3 = 1;
  puVar2 = L2FName::operator*((L2FName *)(iVar1 + 0xec));
  uVar3 = FUN_1003f630(puVar2,uVar3);
  *(undefined4 *)(in_ECX + 0x1d4) = uVar3;
  return;
}


// ==== 101ac3c0 FUN_101ac3c0

void FUN_101ac3c0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10217eb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCXMasSealWnd::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x75] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101ac420 FUN_101ac420

void FUN_101ac420(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10217ee8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCXMasSealWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101ac480 FUN_101ac480

void FUN_101ac480(byte param_1)

{
  void *in_ECX;
  
  FUN_101ac420();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d8);
  }
  return;
}


// ==== 101ac4c0 FUN_101ac4c0

int FUN_101ac4c0(int param_1)

{
  int in_ECX;
  
  if (param_1 == 1) {
    return in_ECX + 0x48;
  }
  if (param_1 != 2) {
    return 0;
  }
  return in_ECX + 0x34;
}


// ==== 101ac543 Catch@101ac543

void Catch_101ac543(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ac557 Catch@101ac557

void Catch_101ac557(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCooltimeManager::GetCoolTimeMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ac580 FUN_101ac580

undefined4 FUN_101ac580(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10217f30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ac4c0(param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_10187a60(&param_1);
    if (iVar1 != 0) {
      *param_3 = iVar1;
      ExceptionList = local_10;
      return 1;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101ac60f Catch@101ac60f

void Catch_101ac60f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ac623 Catch@101ac623

void Catch_101ac623(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCooltimeManager::CoolTimeFindItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ac640 FUN_101ac640

void FUN_101ac640(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10217f59;
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


// ==== 101ac6e0 FUN_101ac6e0

void FUN_101ac6e0(int param_1)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10217f90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x38); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x34) + 8 + iVar1 * 0xc) != 0) {
      FUN_101855f0(1);
    }
  }
  local_8._0_1_ = 0;
  FUN_100d10a0();
  FUN_1000be70();
  if (param_1 == 0) {
    local_8._0_1_ = 2;
    for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x4c); iVar1 = iVar1 + 1) {
      if (*(int *)(*(int *)(in_ECX + 0x48) + 8 + iVar1 * 0xc) != 0) {
        FUN_101855f0(1);
      }
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100d10a0();
    FUN_1000be70();
  }
  ExceptionList = local_10;
  return;
}


// ==== 101ac7d5 Catch@101ac7d5

void Catch_101ac7d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101ac7e9 Catch@101ac7e9

void Catch_101ac7e9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCooltimeManager::CoolTimeClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ac810 FUN_101ac810

void FUN_101ac810(int param_1)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10217fc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x38); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x34) + 8 + iVar1 * 0xc) != 0) {
      FUN_1002da10();
    }
  }
  local_8._0_1_ = 0;
  FUN_100d10a0();
  iVar1 = 0;
  if (param_1 == 0) {
    local_8._0_1_ = 2;
    for (; iVar1 < *(int *)(in_ECX + 0x4c); iVar1 = iVar1 + 1) {
      if (*(int *)(*(int *)(in_ECX + 0x48) + 8 + iVar1 * 0xc) != 0) {
        FUN_1002da10();
      }
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100d10a0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 101ac8e6 Catch@101ac8e6

void Catch_101ac8e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ac8fa Catch@101ac8fa

void Catch_101ac8fa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCooltimeManager::CoolTimeReset");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ac920 FUN_101ac920

void FUN_101ac920(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10217fe8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((0 < param_3) && (param_4 <= param_3)) {
    piVar2 = (int *)FUN_101ac4c0();
    if (piVar2 != (int *)0x0) {
      iVar3 = FUN_10187a60();
      if (iVar3 != 0) {
        FUN_1002ee00((double)param_3,(double)param_4);
        if (*(int *)(iVar3 + 0x48) != -1) {
          local_8._0_1_ = 1;
          for (iVar4 = 0; iVar4 < piVar2[1]; iVar4 = iVar4 + 1) {
            iVar1 = *(int *)(*piVar2 + 8 + iVar4 * 0xc);
            if (((iVar1 != 0) && (*(int *)(iVar1 + 0x40) != param_1)) &&
               (*(int *)(iVar1 + 0x48) == *(int *)(iVar3 + 0x48))) {
              FUN_1002ee00((double)param_3,(double)param_4);
            }
          }
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_100d10a0();
        }
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101aca2c Catch@101aca2c

void Catch_101aca2c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aca40 Catch@101aca40

void Catch_101aca40(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCooltimeManager::CoolTimeStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aca60 FUN_101aca60

void FUN_101aca60(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10218021;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1000b930(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101acad0 FUN_101acad0

void FUN_101acad0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10218048;
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
  FUN_101ac640();
  ExceptionList = local_c;
  return;
}


// ==== 101acb50 FUN_101acb50

int FUN_101acb50(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1021807b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ac4c0(param_2);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  param_2 = 0;
  iVar1 = FUN_10187a60(&param_1);
  if (iVar1 == 0) {
    param_2 = iVar1;
    iVar1 = FUN_10004ed0(100);
    local_8._0_1_ = 1;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_10030930();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    param_2 = iVar1;
    FUN_10087320(&param_1,&param_2);
  }
  *(undefined4 *)(iVar1 + 0x40) = param_1;
  *(undefined4 *)(iVar1 + 0x48) = param_3;
  ExceptionList = local_10;
  return iVar1;
}


// ==== 101acc15 Catch@101acc15

void Catch_101acc15(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101acc29 Catch@101acc29

void Catch_101acc29(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCooltimeManager::CoolTimeAddItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101acc50 FUN_101acc50

void FUN_101acc50(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102180a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_101acad0(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 101acca0 FUN_101acca0

void FUN_101acca0(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_102180ff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UObject::UObject(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = NCCooltimeManager::vftable;
  FUN_101aca60();
  local_8._0_1_ = 2;
  FUN_101aca60();
  local_8 = CONCAT31(local_8._1_3_,5);
  UObject::SetFlags(in_ECX,0x4000000);
  ExceptionList = local_10;
  return;
}


// ==== 101acd2d Catch@101acd2d

void Catch_101acd2d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101acd41 Catch@101acd41

void Catch_101acd41(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCooltimeManager::NCCooltimeManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101acd60 FUN_101acd60

void FUN_101acd60(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1021814f;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCCooltimeManager::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_101acad0(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_101acad0();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 101ace00 FUN_101ace00

void FUN_101ace00(byte param_1)

{
  void *in_ECX;
  
  FUN_101acd60();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x5c);
  }
  return;
}


// ==== 101ace30 FUN_101ace30

undefined4 FUN_101ace30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}


// ==== 101ace77 Catch@101ace77

void Catch_101ace77(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ace8b Catch@101ace8b

void Catch_101ace8b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::GetPartyMemberCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aceb0 FUN_101aceb0

undefined4 FUN_101aceb0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44);
}


// ==== 101acef7 Catch@101acef7

void Catch_101acef7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101acf0b Catch@101acf0b

void Catch_101acf0b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::BuffGetCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101acf30 FUN_101acf30

void FUN_101acf30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x78) = param_1;
  *(undefined4 *)(in_ECX + 0x7c) = param_2;
  *(undefined4 *)(in_ECX + 0x80) = param_3;
  return;
}


// ==== 101acf50 FUN_101acf50

void FUN_101acf50(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x78);
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  param_1[1] = *(undefined4 *)(in_ECX + 0x7c);
  param_1[2] = uVar1;
  return;
}


// ==== 101acf70 FUN_101acf70

undefined4 FUN_101acf70(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x98);
}


// ==== 101acfba Catch@101acfba

void Catch_101acfba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101acfce Catch@101acfce

void Catch_101acfce(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroGetCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101acff0 FUN_101acff0

int FUN_101acff0(void)

{
  int in_ECX;
  
  return in_ECX + 0x6040;
}


// ==== 101ad03a Catch@101ad03a

void Catch_101ad03a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ad04e Catch@101ad04e

void Catch_101ad04e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroGetCmdParser");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ad070 FUN_101ad070

undefined4 FUN_101ad070(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x84);
}


// ==== 101ad0ba Catch@101ad0ba

void Catch_101ad0ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ad0ce Catch@101ad0ce

void Catch_101ad0ce(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::GetEventMatchData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ad0f0 FUN_101ad0f0

undefined4 FUN_101ad0f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x88);
}


// ==== 101ad13a Catch@101ad13a

void Catch_101ad13a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ad14e Catch@101ad14e

void Catch_101ad14e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::GetGMData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ad170 FUN_101ad170

undefined4 FUN_101ad170(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x90);
}


// ==== 101ad1ba Catch@101ad1ba

void Catch_101ad1ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ad1ce Catch@101ad1ce

void Catch_101ad1ce(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::GetHennaData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ad1f0 FUN_101ad1f0

undefined4 FUN_101ad1f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218250;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x8c) == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  uVar1 = FUN_101acb50(param_1,param_2,param_3);
  ExceptionList = local_10;
  return uVar1;
}


// ==== 101ad267 Catch@101ad267

void Catch_101ad267(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ad27b Catch@101ad27b

void Catch_101ad27b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::CoolTimeAddItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ad2a0 FUN_101ad2a0

void FUN_101ad2a0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218270;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x8c) != 0) {
    FUN_101ac6e0(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101ad300 Catch@101ad300

void Catch_101ad300(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ad314 Catch@101ad314

void Catch_101ad314(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::CoolTimeClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ad340 FUN_101ad340

void FUN_101ad340(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218290;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x8c) != 0) {
    FUN_101ac810(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101ad3a0 Catch@101ad3a0

void Catch_101ad3a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ad3b4 Catch@101ad3b4

void Catch_101ad3b4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::CoolTimeReset");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ad3e0 FUN_101ad3e0

void FUN_101ad3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102182b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x8c) != 0) {
    FUN_101ac920(param_1,param_2,param_3,param_4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101ad44c Catch@101ad44c

void Catch_101ad44c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ad460 Catch@101ad460

void Catch_101ad460(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::CoolTimeStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ad480 FUN_101ad480

undefined4 FUN_101ad480(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102182d0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x8c) == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  uVar1 = FUN_101ac580(param_1,param_2,param_3);
  ExceptionList = local_10;
  return uVar1;
}


// ==== 101ad4f7 Catch@101ad4f7

void Catch_101ad4f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ad50b Catch@101ad50b

void Catch_101ad50b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::CoolTimeFindItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ad530 FUN_101ad530

undefined4 FUN_101ad530(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x645c);
}


// ==== 101ad57a Catch@101ad57a

void Catch_101ad57a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ad58e Catch@101ad58e

void Catch_101ad58e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::PetInventoryGetCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ad5b0 FUN_101ad5b0

void FUN_101ad5b0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021831c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 101ad600 FUN_101ad600

void FUN_101ad600(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021834c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  ExceptionList = local_c;
  return;
}


// ==== 101ad660 FUN_101ad660

undefined4 FUN_101ad660(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x6474);
}


// ==== 101ad6aa Catch@101ad6aa

void Catch_101ad6aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ad6be Catch@101ad6be

void Catch_101ad6be(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::GetManorCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ad6e0 FUN_101ad6e0

void FUN_101ad6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103b1240,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 101ad710 FUN_101ad710

void FUN_101ad710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103b21d0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 101ad740 FUN_101ad740

void FUN_101ad740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103b2700,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 101ad770 FUN_101ad770

void FUN_101ad770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103b1ca0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 101ad7a0 FUN_101ad7a0

void FUN_101ad7a0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1021839c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 101ad7f0 FUN_101ad7f0

undefined4 FUN_101ad7f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102183c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x38) <= iVar3) {
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = FUN_101b5d20();
    iVar2 = FUN_101b5d20();
    if (iVar1 == iVar2) break;
    iVar3 = iVar3 + 1;
  }
  FUN_101b6740(param_1);
  ExceptionList = local_10;
  return 1;
}


// ==== 101ad884 Catch@101ad884

void Catch_101ad884(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 101ad898 Catch@101ad898

void Catch_101ad898(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::UpdatePartyMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ad8c0 FUN_101ad8c0

void FUN_101ad8c0(byte param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102183e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 101ad930 FUN_101ad930

int FUN_101ad930(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218410;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x38) <= iVar2) {
      ExceptionList = local_10;
      return -1;
    }
    iVar1 = FUN_101b5d20();
    if (param_1 == iVar1) break;
    iVar2 = iVar2 + 1;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 101ad9b4 Catch@101ad9b4

void Catch_101ad9b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101ad9c8 Catch@101ad9c8

void Catch_101ad9c8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::GetPartyMemberIndexWithCreatureID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ad9f0 FUN_101ad9f0

FString * FUN_101ad9f0(FString *param_1,int param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1021844a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  if (((-1 < param_2) && (iVar1 = FUN_101ace30(), param_2 < iVar1)) &&
     (iVar1 = FUN_101b5d20(), 0 < iVar1)) {
    FUN_101b5c90(param_1);
    ExceptionList = local_10;
    return param_1;
  }
  FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  ExceptionList = local_10;
  return param_1;
}


// ==== 101ada8c Catch@101ada8c

void Catch_101ada8c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101adaa0 Catch@101adaa0

void Catch_101adaa0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::GetPartyMemberName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101adac0 FUN_101adac0

undefined4 FUN_101adac0(int param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218470;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101aceb0();
  if (param_1 < iVar1) {
    ExceptionList = local_10;
    return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x40) + param_1 * 4) + 0x1e5c);
  }
  ExceptionList = local_10;
  return 0xffffffff;
}


// ==== 101adb37 Catch@101adb37

void Catch_101adb37(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101adb4b Catch@101adb4b

void Catch_101adb4b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::BuffGetClassID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101adb70 FUN_101adb70

undefined4 FUN_101adb70(int param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218490;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101acf70();
  if ((param_1 <= iVar1 + -1) && (-1 < param_1)) {
    ExceptionList = local_10;
    return *(undefined4 *)(*(int *)(in_ECX + 0x94) + param_1 * 4);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101adbec Catch@101adbec

void Catch_101adbec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101adc00 Catch@101adc00

void Catch_101adc00(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroGetNth");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101adc20 FUN_101adc20

void FUN_101adc20(byte param_1)

{
  FUN_101b4520();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 101adc50 FUN_101adc50

undefined4 FUN_101adc50(void)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102184b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = 0;
  while( true ) {
    iVar1 = FUN_101acf70();
    if (iVar1 <= iVar2) {
      ExceptionList = local_10;
      return 0;
    }
    iVar1 = FUN_101adb70(iVar2);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x998) != 0)) break;
    iVar2 = iVar2 + 1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 101adcd9 Catch@101adcd9

void Catch_101adcd9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101adced Catch@101adced

void Catch_101adced(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroIsAnyOn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101add10 FUN_101add10

void FUN_101add10(void)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102184d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = 0;
  while( true ) {
    iVar1 = FUN_101acf70();
    if (iVar1 <= iVar2) break;
    iVar1 = FUN_101adb70(iVar2);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x998) != 0)) {
      FUN_101b42b0();
    }
    iVar2 = iVar2 + 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101add8e Catch@101add8e

void Catch_101add8e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101adda2 Catch@101adda2

void Catch_101adda2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroStopAllExecution");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101addc0 FUN_101addc0

void FUN_101addc0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102184f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = 0;
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_101acf70();
    if (iVar1 <= iVar2) break;
    iVar1 = FUN_101adb70(iVar2);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x998) = param_1;
    }
    iVar2 = iVar2 + 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101ade35 Catch@101ade35

void Catch_101ade35(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101ade49 Catch@101ade49

void Catch_101ade49(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroSetUsedAll");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ade70 FUN_101ade70

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


// ==== 101adee2 Catch@101adee2

void Catch_101adee2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101adef6 Catch@101adef6

void Catch_101adef6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroGetByMacroID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101adf20 FUN_101adf20

void FUN_101adf20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ushort *puVar10;
  FL2MagicSkillCommandData *pFVar11;
  int in_ECX;
  int iVar12;
  int local_690;
  void *local_684;
  undefined1 *puStack_680;
  uint local_67c;
  undefined1 local_678 [1048];
  ushort local_260 [300];
  uint local_8;
  
  puStack_680 = &LAB_10218538;
  local_684 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_678;
  ExceptionList = &local_684;
  local_67c = 0;
  local_690 = 0;
  iVar12 = 0;
  do {
    if (*(int *)(in_ECX + 0x98) <= iVar12) {
code_r0x101ae212:
      local_67c = 0xffffffff;
      ExceptionList = local_684;
      __security_check_cookie(local_8 ^ (uint)local_678);
      return;
    }
    piVar1 = (int *)(*(int *)(in_ECX + 0x94) + iVar12 * 4);
    if ((*piVar1 != 0) && (iVar7 = *piVar1, *(int *)(iVar7 + 0x998) != 0)) {
      iVar8 = *(int *)(*(int *)(in_ECX + 0x94) + iVar12 * 4);
      iVar2 = *(int *)(iVar8 + 0x9ac);
      iVar6 = iVar2 * 0x70;
      if (*(int *)(iVar6 + 0x3c + iVar8) == 1) {
        local_690 = *(int *)(iVar6 + 0x44 + iVar7);
        goto LAB_101ae1b0;
      }
      iVar7 = *(int *)(iVar6 + 0x3c + iVar7);
      if (iVar7 == 4) {
        iVar6 = *(int *)(*(int *)(in_ECX + 0x94) + iVar12 * 4) + iVar6;
        uVar3 = *(uint *)(iVar6 + 0x48);
        uVar4 = *(uint *)(iVar6 + 0x44);
        if ((uVar3 < 10) && (uVar4 < 0xc)) {
          iVar7 = FUN_10141370(uVar4 + uVar3 * 0xc);
          if (iVar7 != 0) {
            local_690 = *(int *)(iVar7 + 0x1e5c);
          }
          goto LAB_101ae1b0;
        }
      }
      else if (iVar7 == 3) {
        iVar7 = *piVar1;
        FUN_10135770();
        local_67c = CONCAT31(local_67c._1_3_,1);
        iVar7 = FUN_101358a0(iVar6 + 0x68 + iVar7);
        if ((iVar7 == 0x19) || (iVar7 == 0x1a)) {
          appMemset(local_260,0,600);
          uVar9 = FUN_10135980();
          FUN_10135a20(uVar9);
          appSprintf(local_260,(ushort *)&DAT_1022dde0,uVar9);
          puVar10 = (ushort *)FUN_10135980();
          FUN_10135a20(puVar10);
          while (puVar10 != (ushort *)0x0) {
            appStrcat(local_260,&DAT_1023d5d0);
            appStrcat(local_260,puVar10);
            puVar10 = (ushort *)FUN_10135980();
            FUN_10135a20(puVar10);
          }
          pFVar11 = FL2GameData::GetMSCommandData((FL2GameData *)GL2GameData_exref,local_260);
          local_690 = *(int *)pFVar11;
LAB_101ae1a4:
          local_67c = local_67c & 0xffffff00;
          FUN_10135810();
LAB_101ae1b0:
          if ((param_1 == 0) || (local_690 == param_1)) {
            if ((param_2 == (param_2 / 1000) * 1000 || param_2 % 1000 < 0) && (param_2 == 0)) {
              iVar12 = *(int *)(*(int *)(in_ECX + 0x94) + iVar12 * 4);
              fVar5 = 1.0;
            }
            else {
              fVar5 = (float)(param_2 / 1000 + 1);
              iVar12 = *(int *)(*(int *)(in_ECX + 0x94) + iVar12 * 4);
            }
            *(float *)(iVar12 + 0x58 + iVar2 * 0x70) = fVar5;
          }
        }
        else {
          if ((iVar7 != 0x1c) && (iVar7 != 0x1d)) goto LAB_101ae1a4;
          iVar7 = FUN_10135980();
          FUN_10135a20(iVar7);
          if ((iVar7 != 0) && (iVar7 = thunk_FUN_101c1b01(iVar7), iVar7 - 1U < 10)) {
            iVar8 = FUN_10135980();
            FUN_10135a20(iVar8);
            if ((iVar8 != 0) && (iVar8 = thunk_FUN_101c1b01(iVar8), iVar8 - 1U < 0xc)) {
              iVar7 = FUN_10141370(iVar8 + -0xd + iVar7 * 0xc);
              if ((iVar7 != 0) && (*(int *)(iVar7 + 0x1e54) == 2)) {
                local_690 = *(int *)(iVar7 + 0x1e5c);
              }
              goto LAB_101ae1a4;
            }
          }
          local_67c = local_67c & 0xffffff00;
          FUN_10135810();
        }
      }
      goto code_r0x101ae212;
    }
    iVar12 = iVar12 + 1;
  } while( true );
}


// ==== 101ae25b Catch@101ae25b

void Catch_101ae25b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 101ae26f Catch@101ae26f

void Catch_101ae26f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroSetUpHitTime");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ae290 FUN_101ae290

void FUN_101ae290(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218560;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x98) <= iVar3) {
      return;
    }
    piVar1 = (int *)(*(int *)(in_ECX + 0x94) + iVar3 * 4);
    if ((*piVar1 != 0) && (*(int *)(*piVar1 + 0x998) != 0)) break;
    iVar3 = iVar3 + 1;
  }
  iVar2 = *(int *)(*(int *)(in_ECX + 0x94) + iVar3 * 4);
  iVar4 = *(int *)(iVar2 + 0x9ac) * 0x70;
  if (*(int *)(iVar4 + 0x3c + iVar2) != 3) {
    return;
  }
  ExceptionList = &local_10;
  iVar2 = FUN_101358a0(iVar4 + 0x68 + *(int *)(*(int *)(in_ECX + 0x94) + iVar3 * 4));
  if (iVar2 != 0xe) {
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x94) + iVar3 * 4) + 0x58 + iVar4) = 0x3f800000;
  ExceptionList = local_10;
  return;
}


// ==== 101ae351 Catch@101ae351

void Catch_101ae351(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101ae365 Catch@101ae365

void Catch_101ae365(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroNotifyToPickUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ae390 FUN_101ae390

void FUN_101ae390(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218580;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x98) <= iVar3) {
      return;
    }
    piVar1 = (int *)(*(int *)(in_ECX + 0x94) + iVar3 * 4);
    if ((*piVar1 != 0) && (*(int *)(*piVar1 + 0x998) != 0)) break;
    iVar3 = iVar3 + 1;
  }
  iVar2 = *(int *)(*(int *)(in_ECX + 0x94) + iVar3 * 4);
  iVar4 = *(int *)(iVar2 + 0x9ac) * 0x70;
  if (*(int *)(iVar4 + 0x3c + iVar2) != 3) {
    return;
  }
  ExceptionList = &local_10;
  iVar2 = FUN_101358a0(iVar4 + 0x68 + *(int *)(*(int *)(in_ECX + 0x94) + iVar3 * 4));
  if (((iVar2 != 0xc) && (iVar2 != 0xd)) && (iVar2 != 0xf)) {
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x94) + iVar3 * 4) + 0x58 + iVar4) = 0x3a83126f;
  ExceptionList = local_10;
  return;
}


// ==== 101ae45f Catch@101ae45f

void Catch_101ae45f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101ae473 Catch@101ae473

void Catch_101ae473(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroSetUpTarget");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ae490 FUN_101ae490

int FUN_101ae490(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  if (0 < param_1) {
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x645c); iVar2 = iVar2 + 1) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x6458) + iVar2 * 4);
      if (param_1 == *(int *)(iVar1 + 0x1e58)) {
        return iVar1;
      }
    }
  }
  return 0;
}


// ==== 101ae503 Catch@101ae503

void Catch_101ae503(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101ae517 Catch@101ae517

void Catch_101ae517(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::PetInventoryFindItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ae540 FUN_101ae540

undefined4 FUN_101ae540(int param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102185c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad530();
  if ((param_1 <= iVar1 + -1) && (-1 < param_1)) {
    ExceptionList = local_10;
    return *(undefined4 *)(*(int *)(in_ECX + 0x6458) + param_1 * 4);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101ae5bc Catch@101ae5bc

void Catch_101ae5bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ae5d0 Catch@101ae5d0

void Catch_101ae5d0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::PetInventoryGetNth");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ae5f0 FUN_101ae5f0

undefined4 FUN_101ae5f0(int param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102185e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FArray::IsValidIndex((FArray *)(in_ECX + 0x6470),param_1);
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return *(undefined4 *)(param_1 * 0x10 + *(int *)(in_ECX + 0x6470));
  }
  ExceptionList = local_10;
  return 0xffffffff;
}


// ==== 101ae66b Catch@101ae66b

void Catch_101ae66b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ae67f Catch@101ae67f

void Catch_101ae67f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::GetManorID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ae6a0 FUN_101ae6a0

FString * FUN_101ae6a0(FString *param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1021861a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  iVar1 = FArray::IsValidIndex((FArray *)(in_ECX + 0x6470),param_2);
  if (iVar1 == 0) {
    FString::FString(param_1,(ushort *)L"Invalid");
  }
  else {
    FString::FString(param_1,(FString *)(param_2 * 0x10 + *(int *)(in_ECX + 0x6470) + 4));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 101ae72f Catch@101ae72f

void Catch_101ae72f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101ae743 Catch@101ae743

void Catch_101ae743(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::GetManorName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ae760 FUN_101ae760

int FUN_101ae760(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 101ae780 FUN_101ae780

undefined4 FUN_101ae780(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218640;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x38) <= iVar2) {
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = FUN_101b5d20();
    if (param_1 == iVar1) break;
    iVar2 = iVar2 + 1;
  }
  FUN_1013d680(iVar2,1);
  ExceptionList = local_10;
  return 1;
}


// ==== 101ae7fa Catch@101ae7fa

void Catch_101ae7fa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101ae80e Catch@101ae80e

void Catch_101ae80e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::DeletePartyMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ae830 FUN_101ae830

undefined4 FUN_101ae830(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218660;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x38); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x34) + iVar1 * 4) != 0) {
      FUN_101b5be0();
      FUN_101ad8c0(1);
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x38); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x34),4,0);
  ExceptionList = local_10;
  return 1;
}


// ==== 101ae8bc Catch@101ae8bc

void Catch_101ae8bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101ae8d0 Catch@101ae8d0

void Catch_101ae8d0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::DeleteAllPartyMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ae8f0 FUN_101ae8f0

undefined4 FUN_101ae8f0(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218680;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad930(param_1);
  if (iVar1 == -1) {
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 101ae95f Catch@101ae95f

void Catch_101ae95f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101ae973 Catch@101ae973

void Catch_101ae973(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::IsPartyMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101ae990 FUN_101ae990

undefined4 FUN_101ae990(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102186a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad930(param_1);
  if (iVar1 == -1) {
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return *(undefined4 *)(*(int *)(in_ECX + 0x34) + iVar1 * 4);
}


// ==== 101aea02 Catch@101aea02

void Catch_101aea02(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aea16 Catch@101aea16

void Catch_101aea16(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::GetPartyMemberInfoWithCreatureID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aea40 FUN_101aea40

void FUN_101aea40(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102186c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100d9a30(&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 101aea99 Catch@101aea99

void Catch_101aea99(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aeaad Catch@101aeaad

void Catch_101aeaad(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::BuffAddList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aead0 FUN_101aead0

void FUN_101aead0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102186e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x44); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x40) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      FUN_1002cd30();
      (**(code **)(*piVar1 + 0xc))(1);
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x44); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x40),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 101aeb60 Catch@101aeb60

void Catch_101aeb60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101aeb74 Catch@101aeb74

void Catch_101aeb74(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::BuffClearList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aeba0 FUN_101aeba0

void FUN_101aeba0(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStackY_894 [248];
  undefined4 uStackY_4b4;
  void *local_474;
  undefined1 *puStack_470;
  int local_46c;
  undefined4 local_468 [255];
  ushort local_6c [50];
  uint local_8;
  
  puStack_470 = &LAB_1021870b;
  local_474 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_468;
  ExceptionList = &local_474;
  puVar5 = local_468;
  puVar4 = (undefined4 *)register0x00000010;
  for (iVar2 = 0xff; puVar4 = puVar4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar5 = puVar5 + 1;
  }
  iVar3 = 0;
  local_46c = 0;
  iVar2 = FUN_10004ed0();
  local_46c._0_1_ = 1;
  if (iVar2 != 0) {
    iVar3 = FUN_101b4400();
  }
  local_46c = (uint)local_46c._1_3_ << 8;
  puVar4 = local_468;
  puVar5 = auStackY_894;
  for (iVar2 = 0xff; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_101b40c0();
  if ((-1 < *(int *)(iVar3 + 0x9a4)) && (*(int *)(iVar3 + 0x9a4) < 7)) {
    appSprintf(local_6c,(ushort *)L"%s%d");
    uStackY_4b4 = 0x101aec73;
    appStrcpy((ushort *)(iVar3 + 0xa16),local_6c);
    uVar1 = FUN_1003f630();
    *(undefined4 *)(iVar3 + 0x57c) = uVar1;
  }
  iVar2 = FUN_101acf70();
  puVar4 = local_468;
  puVar5 = (undefined4 *)(iVar2 * 0x3fc + 0xa0 + in_ECX);
  for (iVar3 = 0xff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_100d9a30();
  ExceptionList = local_474;
  __security_check_cookie(local_8 ^ (uint)local_468);
  return;
}


// ==== 101aecf2 Catch@101aecf2

void Catch_101aecf2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101aed06 Catch@101aed06

void Catch_101aed06(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroAdd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aed30 FUN_101aed30

void FUN_101aed30(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218740;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101acf70();
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    iVar2 = FUN_101adb70(iVar3);
    if (iVar2 != 0) {
      FUN_101adc20(1);
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x98); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x94),4,0);
  for (local_1c = 0; local_1c < 0x18; local_1c = local_1c + 1) {
    iVar1 = local_1c * 0x3fc;
    appMemset((void *)(iVar1 + 0x100 + in_ECX),0,10);
    appMemset((void *)(iVar1 + 0xa4 + in_ECX),0,0x1a);
    appMemset((void *)(iVar1 + 0xbe + in_ECX),0,0x42);
    for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
      appMemset((void *)(local_18 * 0x4c + iVar1 + 0x116 + in_ECX),0,0x42);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101aee37 Catch@101aee37

void Catch_101aee37(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 101aee4b Catch@101aee4b

void Catch_101aee4b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aee70 FUN_101aee70

undefined4 FUN_101aee70(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218760;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ade70(param_1);
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return *(undefined4 *)(iVar1 + 0x9a4);
  }
  ExceptionList = local_10;
  return 0xffffffff;
}


// ==== 101aeee0 Catch@101aeee0

void Catch_101aeee0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aeef4 Catch@101aeef4

void Catch_101aeef4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroGetIconNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aef20 FUN_101aef20

int FUN_101aef20(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218780;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ade70(param_1);
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return iVar1 + 0x9b0;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101aef8e Catch@101aef8e

void Catch_101aef8e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aefa2 Catch@101aefa2

void Catch_101aefa2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroGetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aefc0 FUN_101aefc0

void FUN_101aefc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102187a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ade70(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x998) = param_2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101af023 Catch@101af023

void Catch_101af023(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101af037 Catch@101af037

void Catch_101af037(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::MacroSetUsed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101af060 FUN_101af060

void FUN_101af060(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102187c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x645c); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x6458) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(1);
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x645c); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x6458),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 101af0f4 Catch@101af0f4

void Catch_101af0f4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101af108 Catch@101af108

void Catch_101af108(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::PetInventoryClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101af130 FUN_101af130

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_101af130(short *param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  void *local_1cf8;
  undefined1 *puStack_1cf4;
  undefined4 local_1cf0;
  undefined1 local_1cec [7396];
  uint local_8;
  
  puStack_1cf4 = &LAB_102187e0;
  local_1cf8 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_1cec;
  ExceptionList = &local_1cf8;
  local_1cf0 = 0;
  FUN_1002be90();
  _memcpy(param_2,local_1cec,0x1ce4);
  iVar2 = FUN_10187a60(param_1 + 4);
  if ((-1 < *(int *)(param_1 + 4)) && (iVar2 != 0)) {
    iVar1 = *(int *)(iVar2 + 4);
    puVar3 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,*(int *)(param_1 + 4));
    appStrcpy(param_2,puVar3);
    puVar3 = FL2GameData::GetItemAdditionalName
                       ((FL2GameData *)GL2GameData_exref,*(int *)(param_1 + 4));
    appStrcpy(param_2 + 0x100,puVar3);
    puVar3 = L2FName::operator*((L2FName *)(iVar2 + 0x3c));
    appStrcpy(param_2 + 0x200,puVar3);
    puVar3 = FL2GameData::GetItemDescription((FL2GameData *)GL2GameData_exref,*(int *)(param_1 + 4))
    ;
    appStrcpy(param_2 + 0x500,puVar3);
    *(int *)(param_2 + 0xe0e) = (int)*param_1;
    *(undefined4 *)(param_2 + 0xe12) = *(undefined4 *)(param_1 + 2);
    *(undefined4 *)(param_2 + 0xe14) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 0xe16) = *(undefined4 *)(param_1 + 6);
    *(undefined4 *)(param_2 + 0xe1c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_2 + 0xe44) = *(undefined4 *)(param_1 + 0x10);
    param_2[0xe56] = param_1[0xe];
    *(undefined4 *)(param_2 + 0xe42) = *(undefined4 *)(param_1 + 0x12);
    *(int *)(param_2 + 0xe5a) = (int)param_1[0xf];
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0xe1e) = *(undefined4 *)(iVar2 + 0xc4);
      *(undefined4 *)(param_2 + 0xe20) = *(undefined4 *)(iVar2 + 200);
      *(undefined4 *)(param_2 + 0xe22) = *(undefined4 *)(iVar2 + 0x130);
      *(undefined4 *)(param_2 + 0xe24) = *(undefined4 *)(iVar2 + 0x128);
      *(undefined4 *)(param_2 + 0xe26) = *(undefined4 *)(iVar2 + 300);
      *(undefined4 *)(param_2 + 0xe2c) = *(undefined4 *)(iVar2 + 0x144);
      *(undefined4 *)(param_2 + 0xe2e) = *(undefined4 *)(iVar2 + 0x148);
      *(undefined4 *)(param_2 + 0xe32) = *(undefined4 *)(iVar2 + 0x134);
      *(undefined4 *)(param_2 + 0xe34) = *(undefined4 *)(iVar2 + 0x124);
      *(undefined4 *)(param_2 + 0xe36) = *(undefined4 *)(iVar2 + 0x138);
      *(undefined4 *)(param_2 + 0xe38) = *(undefined4 *)(iVar2 + 0x13c);
      *(undefined4 *)(param_2 + 0xe3a) = *(undefined4 *)(iVar2 + 0x14c);
      *(undefined4 *)(param_2 + 0xe3c) = *(undefined4 *)(iVar2 + 0x150);
      *(undefined4 *)(param_2 + 0xe40) = *(undefined4 *)(iVar2 + 0x140);
      *(undefined4 *)(param_2 + 0xe48) = *(undefined4 *)(iVar2 + 0x154);
      *(undefined4 *)(param_2 + 0xe4a) = *(undefined4 *)(iVar2 + 0x158);
    }
    else if (iVar1 == 1) {
      *(undefined4 *)(param_2 + 0xe1e) = *(undefined4 *)(iVar2 + 0xc4);
      *(undefined4 *)(param_2 + 0xe20) = *(undefined4 *)(iVar2 + 200);
      *(undefined4 *)(param_2 + 0xe30) = *(undefined4 *)(iVar2 + 0xc0);
      *(undefined4 *)(param_2 + 0xe32) = *(undefined4 *)(iVar2 + 0x5e8);
      *(undefined4 *)(param_2 + 0xe3e) = *(undefined4 *)(iVar2 + 0x5e4);
      *(undefined4 *)(param_2 + 0xe40) = *(undefined4 *)(iVar2 + 0x5ec);
      *(undefined4 *)(param_2 + 0xe28) = *(undefined4 *)(iVar2 + 0x5f0);
      *(undefined4 *)(param_2 + 0xe2a) = *(undefined4 *)(iVar2 + 0x5f4);
      *(undefined4 *)(param_2 + 0xe46) = *(undefined4 *)(iVar2 + 0x5f8);
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(param_2 + 0xe1e) = *(undefined4 *)(iVar2 + 0xc4);
      *(undefined4 *)(param_2 + 0xe20) = *(undefined4 *)(iVar2 + 200);
      *(undefined4 *)(param_2 + 0xe30) = *(undefined4 *)(iVar2 + 0xc0);
      *(undefined4 *)(param_2 + 0xe32) = *(undefined4 *)(iVar2 + 0x104);
      *(undefined4 *)(param_2 + 0xe58) = *(undefined4 *)(iVar2 + 0xfc);
      *(undefined4 *)(param_2 + 0xe10) = *(undefined4 *)(iVar2 + 0x100);
      if ((*(int *)(iVar2 + 0x100) == 2) || (*(int *)(iVar2 + 0x100) == 0x10)) {
        param_2[0xe60] = 1;
        param_2[0xe61] = 0;
      }
    }
    local_1cf0 = 0xffffffff;
  }
  ExceptionList = local_1cf8;
  __security_check_cookie(local_8 ^ (uint)local_1cec);
  return;
}


// ==== 101af46f Catch@101af46f

void Catch_101af46f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101af483 Catch@101af483

void Catch_101af483(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::PetInventoryInfo2ItemInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101af4a0 FUN_101af4a0

undefined4 FUN_101af4a0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1021881b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x6464) == 0) {
    puVar3 = (undefined4 *)FUN_10004ed0(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(GL2GameData_exref + 0x1838);
      *puVar3 = uVar1;
      puVar3[1] = uVar1;
      puVar3[2] = 0;
      puVar3[3] = 0;
    }
    local_8 = local_8 & 0xffffff00;
    *(undefined4 **)(in_ECX + 0x6464) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      appFailAssert("m_pNPCDataIterator",".\\Src\\NDataManager.cpp",0x3b8);
    }
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x6464) + 8) = 0;
  iVar2 = *(int *)(in_ECX + 0x6464);
  if (*(int *)(iVar2 + 8) < (*(int **)(iVar2 + 4))[1]) {
    ExceptionList = local_10;
    return *(undefined4 *)(**(int **)(iVar2 + 4) + 4 + *(int *)(iVar2 + 8) * 0xc);
  }
  ExceptionList = local_10;
  return 0xffffffff;
}


// ==== 101af57e Catch@101af57e

void Catch_101af57e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101af592 Catch@101af592

void Catch_101af592(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::NPCDataGetFirstID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101af5b0 FUN_101af5b0

undefined4 FUN_101af5b0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x6464) != 0) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x6464) + 8);
    *piVar1 = *piVar1 + 1;
    iVar2 = *(int *)(in_ECX + 0x6464);
    if (*(int *)(iVar2 + 8) < *(int *)(*(int *)(iVar2 + 4) + 4)) {
      return *(undefined4 *)(**(int **)(iVar2 + 4) + 4 + *(int *)(iVar2 + 8) * 0xc);
    }
  }
  return 0xffffffff;
}


// ==== 101af63e Catch@101af63e

void Catch_101af63e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101af652 Catch@101af652

void Catch_101af652(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::NPCDataGetNextID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101af670 FUN_101af670

undefined4 FUN_101af670(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1021886b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x6468) == 0) {
    puVar3 = (undefined4 *)FUN_10004ed0(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(GL2GameData_exref + 0x3d08);
      *puVar3 = uVar1;
      puVar3[1] = uVar1;
      puVar3[2] = 0;
      puVar3[3] = 0;
    }
    local_8 = local_8 & 0xffffff00;
    *(undefined4 **)(in_ECX + 0x6468) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      appFailAssert("m_pSkillDataIterator",".\\Src\\NDataManager.cpp",0x3dd);
    }
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x6468) + 8) = 0;
  iVar2 = *(int *)(in_ECX + 0x6468);
  if (*(int *)(iVar2 + 8) < (*(int **)(iVar2 + 4))[1]) {
    ExceptionList = local_10;
    return *(undefined4 *)(**(int **)(iVar2 + 4) + 4 + *(int *)(iVar2 + 8) * 0xc);
  }
  ExceptionList = local_10;
  return 0xffffffff;
}


// ==== 101af74e Catch@101af74e

void Catch_101af74e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101af762 Catch@101af762

void Catch_101af762(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::SkillDataGetFirstID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101af780 FUN_101af780

undefined4 FUN_101af780(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x6468) != 0) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x6468) + 8);
    *piVar1 = *piVar1 + 1;
    iVar2 = *(int *)(in_ECX + 0x6468);
    if (*(int *)(iVar2 + 8) < *(int *)(*(int *)(iVar2 + 4) + 4)) {
      return *(undefined4 *)(**(int **)(iVar2 + 4) + 4 + *(int *)(iVar2 + 8) * 0xc);
    }
  }
  return 0xffffffff;
}


// ==== 101af80e Catch@101af80e

void Catch_101af80e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101af822 Catch@101af822

void Catch_101af822(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::SkillDataGetNextID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101af840 FUN_101af840

undefined4 FUN_101af840(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_102188bb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x646c) == 0) {
    puVar3 = (undefined4 *)FUN_10004ed0(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(GL2GameData_exref + 0x1834);
      *puVar3 = uVar1;
      puVar3[1] = uVar1;
      puVar3[2] = 0;
      puVar3[3] = 0;
    }
    local_8 = local_8 & 0xffffff00;
    *(undefined4 **)(in_ECX + 0x646c) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      appFailAssert("m_pItemDataIterator",".\\Src\\NDataManager.cpp",0x402);
    }
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x646c) + 8) = 0;
  iVar2 = *(int *)(in_ECX + 0x646c);
  if (*(int *)(iVar2 + 8) < (*(int **)(iVar2 + 4))[1]) {
    ExceptionList = local_10;
    return *(undefined4 *)(**(int **)(iVar2 + 4) + 4 + *(int *)(iVar2 + 8) * 0xc);
  }
  ExceptionList = local_10;
  return 0xffffffff;
}


// ==== 101af91e Catch@101af91e

void Catch_101af91e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101af932 Catch@101af932

void Catch_101af932(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::ItemDataGetFirstID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101af950 FUN_101af950

undefined4 FUN_101af950(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x646c) != 0) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x646c) + 8);
    *piVar1 = *piVar1 + 1;
    iVar2 = *(int *)(in_ECX + 0x646c);
    if (*(int *)(iVar2 + 8) < *(int *)(*(int *)(iVar2 + 4) + 4)) {
      return *(undefined4 *)(**(int **)(iVar2 + 4) + 4 + *(int *)(iVar2 + 8) * 0xc);
    }
  }
  return 0xffffffff;
}


// ==== 101af9de Catch@101af9de

void Catch_101af9de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101af9f2 Catch@101af9f2

void Catch_101af9f2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::ItemDataGetNextID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101afa10 FUN_101afa10

void FUN_101afa10(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  uint uStack_3c;
  undefined4 local_2c;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218911;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_101ad5b0();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_2c = param_1;
  FString::operator=(local_28,(FString *)&stack0x00000008);
  iVar1 = FUN_101ae760(0x10,in_ECX + 0x6470);
  if (iVar1 != 0) {
    FUN_101ad600(&local_2c);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_101ad7a0();
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 101afab7 Catch@101afab7

void Catch_101afab7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101afacb Catch@101afacb

void Catch_101afacb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::AddManorInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101afaf0 FUN_101afaf0

void FUN_101afaf0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021893c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x10,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 101afb70 FUN_101afb70

void FUN_101afb70(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10218969;
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


// ==== 101afc10 FUN_101afc10

void FUN_101afc10(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10218999;
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


// ==== 101afcb0 FUN_101afcb0

void FUN_101afcb0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102189cc;
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
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 << 4;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar1 = iVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x10);
  ExceptionList = local_c;
  return;
}


// ==== 101afd90 FUN_101afd90

undefined4 FUN_101afd90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  uVar1 = param_1;
  puStack_c = &LAB_102189fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101b5d20();
  iVar3 = FUN_101ae8f0(uVar2);
  if (iVar3 != 0) {
    ExceptionList = local_10;
    return 0;
  }
  param_1 = FUN_10004ed0(0x30);
  local_8._0_1_ = 1;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = FUN_101b6870();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_101b6740(uVar1);
  FUN_100d9a30(&param_1);
  ExceptionList = local_10;
  return 1;
}


// ==== 101afe44 Catch@101afe44

void Catch_101afe44(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101afe58 Catch@101afe58

void Catch_101afe58(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::AddPartyMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101afe80 FUN_101afe80

void FUN_101afe80(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218a20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101ae830();
  FUN_101aead0();
  FUN_101aed30();
  FUN_101ad2a0(0);
  FUN_101af060();
  ExceptionList = local_10;
  return;
}


// ==== 101afef0 Catch@101afef0

void Catch_101afef0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101aff04 Catch@101aff04

void Catch_101aff04(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101aff30 FUN_101aff30

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_101aff30(undefined4 param_1)

{
  uint *puVar1;
  UPackage *pUVar2;
  int iVar3;
  int in_ECX;
  undefined4 uStack_1d20;
  undefined1 **ppuStack_1d1c;
  uint uStack_1d18;
  undefined1 *local_1d00;
  undefined1 *local_1cfc;
  void *local_1cf8;
  undefined1 *puStack_1cf4;
  undefined4 local_1cf0;
  undefined1 local_1cec [7396];
  uint local_8;
  
  puStack_1cf4 = &LAB_10218a40;
  local_1cf8 = ExceptionList;
  uStack_1d18 = DAT_103554c4 ^ (uint)local_1cec;
  local_1cfc = (undefined1 *)&uStack_1d18;
  ExceptionList = &local_1cf8;
  local_1cf0 = 0;
  puVar1 = &uStack_1d18;
  local_8 = uStack_1d18;
  if (*(int *)(in_ECX + 0x645c) < 0xa0) {
    ppuStack_1d1c = (undefined1 **)0x101aff93;
    FUN_1002be90();
    uStack_1d20 = param_1;
    ppuStack_1d1c = (undefined1 **)local_1cec;
    FUN_101af130();
    ppuStack_1d1c = (undefined1 **)0x0;
    local_1d00 = (undefined1 *)&uStack_1d20;
    FName::FName((FName *)&uStack_1d20,0);
    pUVar2 = UObject::GetTransientPackage();
    iVar3 = FUN_1002dd90(0x1f5c,pUVar2);
    if (iVar3 == 0) {
      local_1d00 = (undefined1 *)0x0;
    }
    else {
      uStack_1d20 = 0x101affd2;
      ppuStack_1d1c = (undefined1 **)local_1cec;
      local_1d00 = (undefined1 *)FUN_1002f5d0();
    }
    ppuStack_1d1c = &local_1d00;
    uStack_1d20 = 0x101affe8;
    FUN_100d9a30();
    local_1cf0 = 0xffffffff;
    puVar1 = (uint *)local_1cfc;
  }
  local_1cfc = (undefined1 *)puVar1;
  ExceptionList = local_1cf8;
  __security_check_cookie(local_8 ^ (uint)local_1cec);
  return;
}


// ==== 101b0016 Catch@101b0016

void Catch_101b0016(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b002a Catch@101b002a

void Catch_101b002a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::PetInventoryAddItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0050 FUN_101b0050

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_101b0050(int param_1,int param_2)

{
  UPackage *pUVar1;
  int iVar2;
  int *piVar3;
  int iStack_1d24;
  int **ppiStack_1d20;
  uint uStack_1d1c;
  int local_1d08 [2];
  int *local_1d00;
  undefined1 *local_1cfc;
  void *local_1cf8;
  undefined1 *puStack_1cf4;
  undefined4 local_1cf0;
  undefined1 local_1cec [7204];
  int *local_c8;
  uint local_8;
  
  puStack_1cf4 = &LAB_10218a70;
  local_1cf8 = ExceptionList;
  uStack_1d1c = DAT_103554c4 ^ (uint)local_1cec;
  local_1cfc = (undefined1 *)&uStack_1d1c;
  ExceptionList = &local_1cf8;
  local_1cf0 = 0;
  ppiStack_1d20 = (int **)0x101b00a7;
  local_8 = uStack_1d1c;
  FUN_1002be90();
  iStack_1d24 = param_2;
  ppiStack_1d20 = (int **)local_1cec;
  FUN_101af130();
  if (param_1 == 1) {
    ppiStack_1d20 = (int **)0x0;
    local_1d00 = &iStack_1d24;
    FName::FName((FName *)&iStack_1d24,0);
    pUVar1 = UObject::GetTransientPackage();
    iVar2 = FUN_1002dd90(0x1f5c,pUVar1);
    if (iVar2 == 0) {
      local_1d08[0] = 0;
    }
    else {
      iStack_1d24 = 0x101b00f1;
      ppiStack_1d20 = (int **)local_1cec;
      local_1d08[0] = FUN_1002f5d0();
    }
    ppiStack_1d20 = (int **)local_1d08;
    iStack_1d24 = 0x101b0107;
    FUN_100d9a30();
  }
  else {
    ppiStack_1d20 = (int **)local_c8;
    iStack_1d24 = 0x101b0117;
    piVar3 = (int *)FUN_101ae490();
    local_1d00 = piVar3;
    if (piVar3 != (int *)0x0) {
      if (param_1 == 2) {
        ppiStack_1d20 = (int **)0x0;
        local_1d00 = &iStack_1d24;
        FName::FName((FName *)&iStack_1d24,0);
        pUVar1 = UObject::GetTransientPackage();
        iVar2 = FUN_1002dd90(0x1f5c,pUVar1);
        if (iVar2 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          iStack_1d24 = 0x101b015c;
          ppiStack_1d20 = (int **)local_1cec;
          piVar3 = (int *)FUN_1002f5d0();
        }
        iStack_1d24 = 0x101b016a;
        ppiStack_1d20 = (int **)piVar3;
        FUN_10031550();
        if (piVar3 == (int *)0x0) goto LAB_101b017e;
        iVar2 = *piVar3;
      }
      else {
        if (param_1 != 3) goto LAB_101b017e;
        ppiStack_1d20 = &local_1d00;
        iStack_1d24 = 0x101b01b9;
        FUN_100562c0();
        iVar2 = *piVar3;
      }
      ppiStack_1d20 = (int **)0x1;
      iStack_1d24 = 0x101b0179;
      (**(code **)(iVar2 + 0xc))();
    }
  }
LAB_101b017e:
  ExceptionList = local_1cf8;
  __security_check_cookie(local_8 ^ (uint)local_1cec);
  return;
}


// ==== 101b01c5 Catch@101b01c5

void Catch_101b01c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b01d9 Catch@101b01d9

void Catch_101b01d9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::PetInventoryUpdateItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0200 FUN_101b0200

void FUN_101b0200(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218aa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101afaf0(0);
  ExceptionList = local_10;
  return;
}


// ==== 101b0258 Catch@101b0258

void Catch_101b0258(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b026c Catch@101b026c

void Catch_101b026c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::ClearManorInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0290 FUN_101b0290

void FUN_101b0290(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10218ac9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_101afcb0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 101b02f0 FUN_101b02f0

void FUN_101b02f0(void)

{
  UPackage *pUVar1;
  int iVar2;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10218b80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UObject::UObject(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = NCDataManager::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x34));
  local_8._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0x40));
  local_8._0_1_ = 4;
  FString::FString((FString *)(in_ECX + 0x58));
  local_8._0_1_ = 5;
  FArray::FArray((FArray *)(in_ECX + 0x94));
  local_8._0_1_ = 7;
  FUN_10135770();
  local_8._0_1_ = 8;
  FArray::FArray((FArray *)(in_ECX + 0x6458));
  local_8._0_1_ = 10;
  FArray::FArray((FArray *)(in_ECX + 0x6470));
  local_8 = CONCAT31(local_8._1_3_,0xd);
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  FString::operator=((FString *)(in_ECX + 0x58),(ushort *)&DAT_1022f9f8);
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x6464) = 0;
  FName::FName((FName *)&stack0xffffffb8,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_101ad770(0x614,pUVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_101b1800();
  }
  *(int *)(in_ECX + 0x84) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("m_pEventMatchData",".\\Src\\NDataManager.cpp",0x19);
  }
  FName::FName((FName *)&stack0xffffffb8,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_101ad740(0x40,pUVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_101b1fe0();
  }
  *(int *)(in_ECX + 0x90) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("m_pHennaData",".\\Src\\NDataManager.cpp",0x1c);
  }
  FName::FName((FName *)&stack0xffffffb8,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_101ad710(0x348,pUVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_101b1970();
  }
  *(int *)(in_ECX + 0x88) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("m_pGMData",".\\Src\\NDataManager.cpp",0x1f);
  }
  FName::FName((FName *)&stack0xffffffb8,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_101ad6e0(0x5c,pUVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_101acca0();
  }
  *(int *)(in_ECX + 0x8c) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("m_pCooltimeManager",".\\Src\\NDataManager.cpp",0x22);
  }
  FUN_101afaf0();
  ExceptionList = local_10;
  return;
}


// ==== 101b0547 Catch@101b0547

void Catch_101b0547(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b055b Catch@101b055b

void Catch_101b055b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::NCDataManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0580 FUN_101b0580

void FUN_101b0580(byte param_1)

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
    FUN_1000b930();
  }
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 101b05d0 FUN_101b05d0

void FUN_101b05d0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10218c03;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCDataManager::vftable;
  local_4 = 7;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 6;
  FUN_101b0290(uVar1);
  local_4._0_1_ = 5;
  FUN_10030c80();
  local_4._0_1_ = 4;
  FUN_10135810();
  local_4._0_1_ = 3;
  FUN_101afc10();
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x58));
  local_4._0_1_ = 1;
  FUN_1004ee40();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_101afb70();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 101b06b0 FUN_101b06b0

void FUN_101b06b0(byte param_1)

{
  void *in_ECX;
  
  FUN_101b05d0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x647c);
  }
  return;
}


// ==== 101b06e0 FUN_101b06e0

void FUN_101b06e0(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218c20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  UObject::Destroy(in_ECX);
  FUN_101afe80();
  if (*(int *)(in_ECX + 0x6464) != 0) {
    FUN_101b0580(1);
    *(undefined4 *)(in_ECX + 0x6464) = 0;
  }
  if (*(int **)(in_ECX + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x84) + 0xc))(1);
    *(undefined4 *)(in_ECX + 0x84) = 0;
  }
  if (*(int **)(in_ECX + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x88) + 0xc))(1);
    *(undefined4 *)(in_ECX + 0x88) = 0;
  }
  if (*(int **)(in_ECX + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x8c) + 0xc))(1);
    *(undefined4 *)(in_ECX + 0x8c) = 0;
  }
  if (*(int **)(in_ECX + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x90) + 0xc))(1);
    *(undefined4 *)(in_ECX + 0x90) = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b07b3 Catch@101b07b3

void Catch_101b07b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b07c7 Catch@101b07c7

void Catch_101b07c7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDataManager::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b07f0 FUN_101b07f0

void FUN_101b07f0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  return;
}


// ==== 101b0843 Catch@101b0843

void Catch_101b0843(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b0857 Catch@101b0857

void Catch_101b0857(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::SetMatchID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0880 FUN_101b0880

undefined4 FUN_101b0880(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}


// ==== 101b08c7 Catch@101b08c7

void Catch_101b08c7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b08db Catch@101b08db

void Catch_101b08db(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::GetUpdatingTeamID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0900 FUN_101b0900

undefined4 FUN_101b0900(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x40);
}


// ==== 101b0947 Catch@101b0947

void Catch_101b0947(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b095b Catch@101b095b

void Catch_101b095b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::GetUpdatingBuffTeamID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0980 FUN_101b0980

undefined4 FUN_101b0980(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44);
}


// ==== 101b09c7 Catch@101b09c7

void Catch_101b09c7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b09db Catch@101b09db

void Catch_101b09db(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::GetUpdatingBuffUserID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0a00 FUN_101b0a00

undefined4 FUN_101b0a00(int param_1)

{
  if ((param_1 != 0) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}


// ==== 101b0a6d Catch@101b0a6d

void Catch_101b0a6d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b0a81 Catch@101b0a81

void Catch_101b0a81(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::IsValidTeamID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0aa0 FUN_101b0aa0

undefined4 FUN_101b0aa0(int param_1)

{
  if ((-1 < param_1) && (param_1 < 9)) {
    return 1;
  }
  return 0;
}


// ==== 101b0b0d Catch@101b0b0d

void Catch_101b0b0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b0b21 Catch@101b0b21

void Catch_101b0b21(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::IsValidUserID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0b40 FUN_101b0b40

void FUN_101b0b40(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218d00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x34) == param_1) && (iVar2 = FUN_101b0a00(param_2), iVar2 != 0)) {
    *(int *)(in_ECX + 0x38) = param_2;
    *(undefined4 *)(param_2 * 0x2e4 + 0x5c + in_ECX) = param_3;
    *(undefined4 *)(in_ECX + 0x3c) = param_3;
    for (local_18 = 0; local_18 < 9; local_18 = local_18 + 1) {
      puVar1 = (undefined4 *)(local_18 * 0x50 + 0x60 + *(int *)(in_ECX + 0x38) * 0x2e4 + in_ECX);
      *puVar1 = 0xffffffff;
      FStringNoInit::operator=((FStringNoInit *)(puVar1 + 1),(ushort *)&DAT_1022f9f8);
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b0c13 Catch@101b0c13

void Catch_101b0c13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b0c27 Catch@101b0c27

void Catch_101b0c27(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::UpdateTeamInfoStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0c50 FUN_101b0c50

void FUN_101b0c50(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x38) = 0xffffffff;
  return;
}


// ==== 101b0c9d Catch@101b0c9d

void Catch_101b0c9d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b0cb1 Catch@101b0cb1

void Catch_101b0cb1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::UpdateTeamInfoEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0cd0 FUN_101b0cd0

void FUN_101b0cd0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x40) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x44) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  return;
}


// ==== 101b0d27 Catch@101b0d27

void Catch_101b0d27(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b0d3b Catch@101b0d3b

void Catch_101b0d3b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::UpdateBuffInfoEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0d60 FUN_101b0d60

undefined4 FUN_101b0d60(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x38) != -1) && (0 < *(int *)(in_ECX + 0x3c))) {
    return 1;
  }
  return 0;
}


// ==== 101b0dc9 Catch@101b0dc9

void Catch_101b0dc9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b0ddd Catch@101b0ddd

void Catch_101b0ddd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::IsUpdatingTeamInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0e00 FUN_101b0e00

undefined4 FUN_101b0e00(void)

{
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x40) != -1) && (*(int *)(in_ECX + 0x44) != -1)) &&
     (0 < *(int *)(in_ECX + 0x48))) {
    return 1;
  }
  return 0;
}


// ==== 101b0e70 Catch@101b0e70

void Catch_101b0e70(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b0e84 Catch@101b0e84

void Catch_101b0e84(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::IsUpdatingBuffInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0eb0 FUN_101b0eb0

int * FUN_101b0eb0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (1 < iVar3) {
      if (param_2 != (int *)0x0) {
        *param_2 = -1;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = -1;
      }
      return (int *)0x0;
    }
    for (iVar2 = 0; iVar2 < 9; iVar2 = iVar2 + 1) {
      piVar1 = (int *)(iVar2 * 0x50 + 0x60 + iVar3 * 0x2e4 + in_ECX);
      if (*piVar1 == param_1) {
        if (param_2 != (int *)0x0) {
          *param_2 = iVar3;
        }
        if (param_3 != (int *)0x0) {
          *param_3 = iVar2;
        }
        return piVar1;
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== 101b0f6d Catch@101b0f6d

void Catch_101b0f6d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101b0f81 Catch@101b0f81

void Catch_101b0f81(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::GetUserDataWithClassID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b0fa0 FUN_101b0fa0

int FUN_101b0fa0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218dc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b0a00(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_101b0aa0(param_2);
    if (iVar1 != 0) {
      ExceptionList = local_10;
      return param_2 * 0x50 + 0x60 + param_1 * 0x2e4 + in_ECX;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101b102c Catch@101b102c

void Catch_101b102c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b1040 Catch@101b1040

void Catch_101b1040(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::GetUserData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1060 FUN_101b1060

int FUN_101b1060(void)

{
  int in_ECX;
  
  return in_ECX + 0x4c;
}


// ==== 101b10a7 Catch@101b10a7

void Catch_101b10a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b10bb Catch@101b10bb

void Catch_101b10bb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::GetEventMatchData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b10e0 FUN_101b10e0

void FUN_101b10e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218e00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b0a00(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 * 0x2e4 + 0x4c + in_ECX) = param_2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b1149 Catch@101b1149

void Catch_101b1149(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b115d Catch@101b115d

void Catch_101b115d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::SetScore");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1180 FUN_101b1180

undefined4 FUN_101b1180(int param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218e20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b0a00(param_1);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return *(undefined4 *)(param_1 * 0x2e4 + 0x4c + in_ECX);
}


// ==== 101b11f3 Catch@101b11f3

void Catch_101b11f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b1207 Catch@101b1207

void Catch_101b1207(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::GetScore");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1230 FUN_101b1230

void FUN_101b1230(int param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218e49;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  iVar1 = FUN_101b0a00(param_1);
  if (iVar1 != 0) {
    FStringNoInit::operator=
              ((FStringNoInit *)(param_1 * 0x2e4 + 0x50 + in_ECX),(FString *)&stack0x00000008);
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 101b12ad Catch@101b12ad

void Catch_101b12ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b12c1 Catch@101b12c1

void Catch_101b12c1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::SetTeamName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b12e0 FUN_101b12e0

FString * FUN_101b12e0(FString *param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218e8a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  iVar1 = FUN_101b0a00(param_2);
  if (iVar1 == 0) {
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::FString(param_1,(FString *)(param_2 * 0x2e4 + 0x50 + in_ECX));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 101b136a Catch@101b136a

void Catch_101b136a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b137e Catch@101b137e

void Catch_101b137e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::GetTeamName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b13a0 FUN_101b13a0

undefined4 FUN_101b13a0(int param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218eb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b0a00(param_1);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return *(undefined4 *)(param_1 * 0x2e4 + 0x5c + in_ECX);
}


// ==== 101b1413 Catch@101b1413

void Catch_101b1413(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b1427 Catch@101b1427

void Catch_101b1427(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::GetPartyMemberCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1450 FUN_101b1450

void FUN_101b1450(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218ed9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  iVar2 = FUN_101b0d60();
  if ((iVar2 != 0) && (iVar2 = FUN_101b0aa0(param_1), iVar2 != 0)) {
    puVar1 = (undefined4 *)(param_1 * 0x50 + 0x60 + *(int *)(in_ECX + 0x38) * 0x2e4 + in_ECX);
    *puVar1 = param_2;
    FStringNoInit::operator=((FStringNoInit *)(puVar1 + 1),(FString *)&stack0x0000000c);
    puVar1[4] = in_stack_00000018;
    puVar1[5] = in_stack_0000001c;
    puVar1[6] = in_stack_00000020;
    puVar1[7] = in_stack_00000024;
    puVar1[8] = in_stack_00000028;
    puVar1[9] = in_stack_0000002c;
    puVar1[10] = in_stack_00000030;
    puVar1[0xb] = in_stack_00000034;
    puVar1[0xc] = in_stack_00000038;
    puVar1[0xd] = in_stack_0000003c;
    *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + -1;
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x0000000c);
  ExceptionList = local_10;
  return;
}


// ==== 101b1535 Catch@101b1535

void Catch_101b1535(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b1549 Catch@101b1549

void Catch_101b1549(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::UpdateTeamInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1570 FUN_101b1570

void FUN_101b1570(undefined4 param_1)

{
  int iVar1;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218f09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  iVar1 = FUN_101b0eb0(param_1,in_stack_00000034,in_stack_00000038);
  if (iVar1 != 0) {
    FStringNoInit::operator=((FStringNoInit *)(iVar1 + 4),(FString *)&stack0x00000008);
    *(undefined4 *)(iVar1 + 0x10) = in_stack_00000014;
    *(undefined4 *)(iVar1 + 0x14) = in_stack_00000018;
    *(undefined4 *)(iVar1 + 0x18) = in_stack_0000001c;
    *(undefined4 *)(iVar1 + 0x1c) = in_stack_00000020;
    *(undefined4 *)(iVar1 + 0x20) = in_stack_00000024;
    *(undefined4 *)(iVar1 + 0x24) = in_stack_00000028;
    *(undefined4 *)(iVar1 + 0x28) = in_stack_0000002c;
    *(undefined4 *)(iVar1 + 0x2c) = in_stack_00000030;
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 101b161e Catch@101b161e

void Catch_101b161e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b1632 Catch@101b1632

void Catch_101b1632(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::UpdateUserInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1650 FUN_101b1650

void FUN_101b1650(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218f30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x34) == param_1) &&
     (iVar1 = FUN_101b0eb0(param_2,in_ECX + 0x40,in_ECX + 0x44), iVar1 != 0)) {
    FArray::Empty((FArray *)(iVar1 + 0x38),4,0);
    FArray::Empty((FArray *)(iVar1 + 0x44),4,0);
    *(undefined4 *)(in_ECX + 0x48) = param_3;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b16e0 Catch@101b16e0

void Catch_101b16e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b16f4 Catch@101b16f4

void Catch_101b16f4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::UpdateBuffInfoStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1720 FUN_101b1720

void FUN_101b1720(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10218f50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b0e00();
  if (iVar1 != 0) {
    FUN_100d9a30(&stack0x00000008);
    FUN_100d9a30(&stack0x00000010);
    *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + -1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b17c2 Catch@101b17c2

void Catch_101b17c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b17d6 Catch@101b17d6

void Catch_101b17d6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::UpdateBuffInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1800 FUN_101b1800

void FUN_101b1800(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10218f84;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UObject::UObject(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = NCEventMatchData::vftable;
  FEventMatchData::FEventMatchData((FEventMatchData *)(in_ECX + 0x4c));
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
  UObject::SetFlags(in_ECX,0x4000000);
  *(undefined4 *)(in_ECX + 0x38) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x3c) = 0xffffffff;
  ExceptionList = local_10;
  return;
}


// ==== 101b1880 Catch@101b1880

void Catch_101b1880(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b1894 Catch@101b1894

void Catch_101b1894(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEventMatchData::NCEventMatchData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b18c0 FUN_101b18c0

void FUN_101b18c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10218fb4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCEventMatchData::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FEventMatchData::~FEventMatchData((FEventMatchData *)(in_ECX + 0x4c));
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 101b1930 FUN_101b1930

void FUN_101b1930(byte param_1)

{
  void *in_ECX;
  
  FUN_101b18c0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x614);
  }
  return;
}


// ==== 101b1970 FUN_101b1970

void FUN_101b1970(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10218fd9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UObject::UObject(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = NCGMData::vftable;
  User::User((User *)(in_ECX + 0x34));
  local_8 = CONCAT31(local_8._1_3_,1);
  UObject::SetFlags(in_ECX,0x4000000);
  ExceptionList = local_10;
  return;
}


// ==== 101b19e8 Catch@101b19e8

void Catch_101b19e8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b19fc Catch@101b19fc

void Catch_101b19fc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCGMData::NCGMData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1a20 FUN_101b1a20

void FUN_101b1a20(undefined4 *param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(in_ECX + 0x34);
  for (iVar1 = 0xc5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 101b1a75 Catch@101b1a75

void Catch_101b1a75(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b1a89 Catch@101b1a89

void Catch_101b1a89(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCGMData::GetObservingUser");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1ab0 FUN_101b1ab0

void FUN_101b1ab0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10219029;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCGMData::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 101b1b20 FUN_101b1b20

void FUN_101b1b20(byte param_1)

{
  void *in_ECX;
  
  FUN_101b1ab0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x348);
  }
  return;
}


// ==== 101b1b50 FUN_101b1b50

void FUN_101b1b50(undefined4 *param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  FString *pFVar4;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10219059;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar2 = (undefined4 *)(in_ECX + 0x34);
  for (iVar1 = 0xc5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar4 = local_28;
  uVar3 = 0x8f2;
  FUN_10005c30(0x8f2,pFVar4);
  FUN_100d1790(uVar3,pFVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101b1bde Catch@101b1bde

void Catch_101b1bde(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b1bf2 Catch@101b1bf2

void Catch_101b1bf2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCGMData::SetObservingUser");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1c10 FUN_101b1c10

undefined4 FUN_101b1c10(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}


// ==== 101b1c57 Catch@101b1c57

void Catch_101b1c57(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b1c6b Catch@101b1c6b

void Catch_101b1c6b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHennaData::GetHennaInfoCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1c90 FUN_101b1c90

undefined4 FUN_101b1c90(int param_1)

{
  int in_ECX;
  
  if ((-1 < param_1) && (param_1 < *(int *)(in_ECX + 0x38))) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x34) + param_1 * 4);
  }
  return 0;
}


// ==== 101b1cfe Catch@101b1cfe

void Catch_101b1cfe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b1d12 Catch@101b1d12

void Catch_101b1d12(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHennaData::GetHennaInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1d30 FUN_101b1d30

void FUN_101b1d30(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102190c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x38); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x34) + iVar2 * 4);
    if (iVar1 == 0) {
      appFailAssert("pHennaInfo",".\\Src\\NHennaData.cpp",0x13);
    }
    FUN_10024ca0(iVar1);
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x38); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x34),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 101b1dcc Catch@101b1dcc

void Catch_101b1dcc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101b1de0 Catch@101b1de0

void Catch_101b1de0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHennaData::ClearHennaInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1e00 FUN_101b1e00

void FUN_101b1e00(undefined4 param_1,int param_2)

{
  uint uStack_30;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102190e0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (undefined4 *)FUN_10004ed0(8);
  *local_18 = param_1;
  local_18[1] = (uint)(param_2 != 0);
  FUN_100d9a30(&local_18);
  ExceptionList = local_10;
  return;
}


// ==== 101b1e78 Catch@101b1e78

void Catch_101b1e78(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b1e8c Catch@101b1e8c

void Catch_101b1e8c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHennaData::AddHennaInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1eb0 FUN_101b1eb0

void FUN_101b1eb0(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219100;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101b1d30();
  UObject::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 101b1f0a Catch@101b1f0a

void Catch_101b1f0a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b1f1e Catch@101b1f1e

void Catch_101b1f1e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHennaData::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b1f40 FUN_101b1f40

void FUN_101b1f40(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10219129;
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


// ==== 101b1fe0 FUN_101b1fe0

void FUN_101b1fe0(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1021916d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UObject::UObject(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = NCHennaData::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x34));
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),3);
  UObject::SetFlags(in_ECX,0x4000000);
  ExceptionList = local_10;
  return;
}


// ==== 101b205f Catch@101b205f

void Catch_101b205f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b2073 Catch@101b2073

void Catch_101b2073(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHennaData::NCHennaData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b2090 FUN_101b2090

void FUN_101b2090(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_102191a4;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCHennaData::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_101b1f40(uVar1);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 101b2110 FUN_101b2110

void FUN_101b2110(byte param_1)

{
  void *in_ECX;
  
  FUN_101b2090();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x40);
  }
  return;
}


// ==== 101b2140 FUN_101b2140

int FUN_101b2140(int param_1)

{
  return (int)*(short *)(param_1 + 0x1e);
}


// ==== 101b2150 FUN_101b2150

bool FUN_101b2150(short *param_1)

{
  return *param_1 == 3;
}


// ==== 101b2160 FUN_101b2160

int FUN_101b2160(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = 0;
  if (param_1 == 0) {
    return in_ECX;
  }
  if (param_1 != 1) {
    if (param_1 == 2) {
      iVar1 = in_ECX + 0x18;
    }
    return iVar1;
  }
  return in_ECX + 0xc;
}


// ==== 101b21e9 Catch@101b21e9

void Catch_101b21e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b21fd Catch@101b21fd

void Catch_101b21fd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::GetItemList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b2220 FUN_101b2220

undefined4 FUN_101b2220(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 101b2267 Catch@101b2267

void Catch_101b2267(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b227b Catch@101b227b

void Catch_101b227b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::GetInvenItemCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b22a0 FUN_101b22a0

undefined4 FUN_101b22a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


// ==== 101b22e7 Catch@101b22e7

void Catch_101b22e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b22fb Catch@101b22fb

void Catch_101b22fb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::GetQuestItemCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b2320 FUN_101b2320

undefined4 FUN_101b2320(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1c);
}


// ==== 101b2367 Catch@101b2367

void Catch_101b2367(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b237b Catch@101b237b

void Catch_101b237b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::GetEquipItemCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b23a0 FUN_101b23a0

int FUN_101b23a0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_101b2160(param_1);
  if (piVar1 != (int *)0x0) {
    for (iVar2 = 0; iVar2 < piVar1[1]; iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(*piVar1 + iVar2 * 4) + 4) == param_2) {
        ExceptionList = local_10;
        return iVar2;
      }
    }
  }
  ExceptionList = local_10;
  return -1;
}


// ==== 101b2414 Catch@101b2414

void Catch_101b2414(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b2428 Catch@101b2428

void Catch_101b2428(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::FindItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b2450 FUN_101b2450

int FUN_101b2450(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219260;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_101b2160(param_1);
  if (piVar1 != (int *)0x0) {
    for (iVar2 = 0; iVar2 < piVar1[1]; iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(*piVar1 + iVar2 * 4) + 8) == param_2) {
        ExceptionList = local_10;
        return iVar2;
      }
    }
  }
  ExceptionList = local_10;
  return -1;
}


// ==== 101b24c4 Catch@101b24c4

void Catch_101b24c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b24d8 Catch@101b24d8

void Catch_101b24d8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::FindItemByClassID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b2500 FUN_101b2500

void FUN_101b2500(void)

{
  int in_ECX;
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 4); iVar1 = iVar1 + 1) {
  }
  return;
}


// ==== 101b255b Catch@101b255b

void Catch_101b255b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101b256f Catch@101b256f

void Catch_101b256f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::GetAdena");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b25a0 FUN_101b25a0

undefined4 FUN_101b25a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *in_ECX;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102192a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (-1 < param_1) {
    iVar1 = FUN_101b2220();
    if (param_1 < iVar1) {
      puVar2 = *(undefined4 **)(*in_ECX + param_1 * 4);
      for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *puVar2;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      }
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101b2622 Catch@101b2622

void Catch_101b2622(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b2636 Catch@101b2636

void Catch_101b2636(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::GetInvenItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b2660 FUN_101b2660

undefined4 FUN_101b2660(int param_1,undefined4 *param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102192c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (-1 < param_1) {
    iVar1 = FUN_101b22a0();
    if (param_1 < iVar1) {
      puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0xc) + param_1 * 4);
      for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *puVar2;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      }
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101b26e3 Catch@101b26e3

void Catch_101b26e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b26f7 Catch@101b26f7

void Catch_101b26f7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::GetQuestItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b2720 FUN_101b2720

undefined4 FUN_101b2720(int param_1,undefined4 *param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102192e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (-1 < param_1) {
    iVar1 = FUN_101b2320();
    if (param_1 < iVar1) {
      puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x18) + param_1 * 4);
      for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *puVar2;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      }
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101b27a3 Catch@101b27a3

void Catch_101b27a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b27b7 Catch@101b27b7

void Catch_101b27b7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::GetEquipItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b27e0 FUN_101b27e0

undefined4 FUN_101b27e0(int param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219300;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = 0;
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_101b2220();
    if (iVar1 <= iVar2) break;
    iVar1 = *(int *)(*in_ECX + iVar2 * 4);
    if (*(int *)(iVar1 + 8) == param_1) goto LAB_101b282d;
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  while( true ) {
    iVar1 = FUN_101b2320();
    if (iVar1 <= iVar2) break;
    iVar1 = *(int *)(in_ECX[6] + iVar2 * 4);
    if (*(int *)(iVar1 + 8) == param_1) goto LAB_101b282d;
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  while( true ) {
    iVar1 = FUN_101b22a0();
    if (iVar1 <= iVar2) {
      ExceptionList = local_10;
      return 0;
    }
    iVar1 = *(int *)(in_ECX[3] + iVar2 * 4);
    if (*(int *)(iVar1 + 8) == param_1) break;
    iVar2 = iVar2 + 1;
  }
LAB_101b282d:
  ExceptionList = local_10;
  return *(undefined4 *)(iVar1 + 4);
}


// ==== 101b289f Catch@101b289f

void Catch_101b289f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 101b28b3 Catch@101b28b3

void Catch_101b28b3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::GetServerID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b28d0 FUN_101b28d0

int FUN_101b28d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uStack_74;
  undefined1 local_64 [8];
  int local_5c;
  int local_58;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219320;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  ExceptionList = &local_10;
  iVar2 = 0;
  local_8 = 0;
  iVar3 = 0;
  local_18 = 0;
  FUN_1000eea0();
  while( true ) {
    local_1c = iVar2;
    iVar1 = FUN_101b22a0();
    if (iVar1 <= iVar2) break;
    iVar1 = FUN_101b2660(iVar2,local_64);
    if ((iVar1 != 0) && (param_1 == local_5c)) {
      iVar3 = iVar3 + local_58;
      local_18 = iVar3;
    }
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  while( true ) {
    local_20 = iVar2;
    iVar1 = FUN_101b2220();
    if (iVar1 <= iVar2) break;
    iVar1 = FUN_101b25a0(iVar2,local_64);
    if ((iVar1 != 0) && (param_1 == local_5c)) {
      iVar3 = iVar3 + local_58;
      local_18 = iVar3;
    }
    iVar2 = iVar2 + 1;
  }
  ExceptionList = local_10;
  return iVar3;
}


// ==== 101b29aa Catch@101b29aa

void Catch_101b29aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 101b29be Catch@101b29be

void Catch_101b29be(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::GetItemCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b29e0 FUN_101b29e0

void FUN_101b29e0(void)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219340;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 4); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)in_ECX + iVar2 * 4);
    if (iVar1 != 0) {
      FUN_10024ca0(iVar1);
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 4); iVar2 = iVar2 + 1) {
  }
  FArray::Empty(in_ECX,4,0);
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x10); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + iVar2 * 4);
    if (iVar1 != 0) {
      FUN_10024ca0(iVar1);
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x10); iVar2 = iVar2 + 1) {
  }
  FArray::Empty(in_ECX + 0xc,4,0);
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x1c); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x18) + iVar2 * 4);
    if (iVar1 != 0) {
      FUN_10024ca0(iVar1);
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x1c); iVar2 = iVar2 + 1) {
  }
  FArray::Empty(in_ECX + 0x18,4,0);
  ExceptionList = local_10;
  return;
}


// ==== 101b2ae5 Catch@101b2ae5

void Catch_101b2ae5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 101b2af9 Catch@101b2af9

void Catch_101b2af9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b2b20 FUN_101b2b20

void FUN_101b2b20(undefined4 param_1)

{
  FUN_101b23a0(0,param_1);
  return;
}


// ==== 101b2b30 FUN_101b2b30

void FUN_101b2b30(undefined4 param_1)

{
  FUN_101b23a0(2,param_1);
  return;
}


// ==== 101b2b40 FUN_101b2b40

void FUN_101b2b40(undefined4 param_1)

{
  FUN_101b23a0(1,param_1);
  return;
}


// ==== 101b2b50 FUN_101b2b50

void FUN_101b2b50(undefined4 param_1)

{
  FUN_101b2450(2,param_1);
  return;
}


// ==== 101b2b60 FUN_101b2b60

void FUN_101b2b60(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uStack_30;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1021936b;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (undefined4 *)FUN_10004ed0(0x3c);
  local_8._0_1_ = 1;
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_1000eea0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  puVar2 = local_18;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_100d9a30(&local_18);
  ExceptionList = local_10;
  return;
}


// ==== 101b2bed Catch@101b2bed

void Catch_101b2bed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b2c01 Catch@101b2c01

void Catch_101b2c01(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::AddInvenItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b2c20 FUN_101b2c20

void FUN_101b2c20(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uStack_30;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1021939b;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (undefined4 *)FUN_10004ed0(0x3c);
  local_8._0_1_ = 1;
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_1000eea0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  puVar2 = local_18;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_100d9a30(&local_18);
  ExceptionList = local_10;
  return;
}


// ==== 101b2cae Catch@101b2cae

void Catch_101b2cae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b2cc2 Catch@101b2cc2

void Catch_101b2cc2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::AddEquipItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b2ce0 FUN_101b2ce0

void FUN_101b2ce0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uStack_30;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102193cb;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (undefined4 *)FUN_10004ed0(0x3c);
  local_8._0_1_ = 1;
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_1000eea0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  puVar2 = local_18;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_100d9a30(&local_18);
  ExceptionList = local_10;
  return;
}


// ==== 101b2d6e Catch@101b2d6e

void Catch_101b2d6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b2d82 Catch@101b2d82

void Catch_101b2d82(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::AddQuestItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b2da0 FUN_101b2da0

void FUN_101b2da0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102193f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = FUN_101b23a0(param_1,param_2);
  piVar3 = (int *)FUN_101b2160(param_1);
  if ((piVar3 != (int *)0x0) && (iVar2 != -1)) {
    iVar1 = *(int *)(*piVar3 + iVar2 * 4);
    if (iVar1 != 0) {
      FUN_10024ca0(iVar1);
    }
    FUN_1013d680(iVar2,1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b2e2d Catch@101b2e2d

void Catch_101b2e2d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b2e41 Catch@101b2e41

void Catch_101b2e41(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::DeleteItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b2e60 FUN_101b2e60

void FUN_101b2e60(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10219419;
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


// ==== 101b2f00 FUN_101b2f00

void FUN_101b2f00(void)

{
  FArray *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10219479;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FArray::FArray(in_ECX);
  local_8 = 1;
  FArray::FArray(in_ECX + 0xc);
  local_8 = CONCAT31(local_8._1_3_,3);
  FArray::FArray(in_ECX + 0x18);
  ExceptionList = local_10;
  return;
}


// ==== 101b2f7c Catch@101b2f7c

void Catch_101b2f7c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b2f90 Catch@101b2f90

void Catch_101b2f90(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::NCInventoryManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b2fb0 FUN_101b2fb0

void FUN_101b2fb0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_102194be;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 3;
  FUN_101b29e0();
  local_8 = 1;
  FUN_101b2e60();
  local_8 = local_8 & 0xffffff00;
  FUN_101b2e60();
  local_8 = 0xffffffff;
  FUN_101b2e60();
  ExceptionList = local_10;
  return;
}


// ==== 101b302b Catch@101b302b

void Catch_101b302b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b303f Catch@101b303f

void Catch_101b303f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::~NCInventoryManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3060 FUN_101b3060

void FUN_101b3060(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102194e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b2140(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_101b2150(param_1);
    if (iVar1 == 0) {
      FUN_101b2b60(param_1);
    }
    else {
      FUN_101b2ce0(param_1);
    }
  }
  else {
    FUN_101b2c20(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b30dc Catch@101b30dc

void Catch_101b30dc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b30f0 Catch@101b30f0

void Catch_101b30f0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::AddItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3110 FUN_101b3110

void FUN_101b3110(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219500;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101b2da0(0,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101b3168 Catch@101b3168

void Catch_101b3168(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b317c Catch@101b317c

void Catch_101b317c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::DeleteInvenItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b31a0 FUN_101b31a0

void FUN_101b31a0(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219520;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101b2da0(2,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101b31f8 Catch@101b31f8

void Catch_101b31f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b320c Catch@101b320c

void Catch_101b320c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::DeleteEquipItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3230 FUN_101b3230

void FUN_101b3230(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219540;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101b2da0(1,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101b3288 Catch@101b3288

void Catch_101b3288(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b329c Catch@101b329c

void Catch_101b329c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::DeleteQuestItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b32c0 FUN_101b32c0

void FUN_101b32c0(undefined4 *param_1)

{
  int iVar1;
  int *in_ECX;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219560;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b2b20(param_1[1]);
  if (iVar1 == -1) {
    FUN_101b31a0(param_1[1]);
    FUN_101b2b60(param_1);
  }
  else {
    puVar2 = *(undefined4 **)(*in_ECX + iVar1 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *param_1;
        param_1 = param_1 + 1;
        puVar2 = puVar2 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b3347 Catch@101b3347

void Catch_101b3347(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b335b Catch@101b335b

void Catch_101b335b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::UpdateInvenItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3380 FUN_101b3380

void FUN_101b3380(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219580;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b2b30(param_1[1]);
  if (iVar1 == -1) {
    FUN_101b3110(param_1[1]);
    FUN_101b2c20(param_1);
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x18) + iVar1 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *param_1;
        param_1 = param_1 + 1;
        puVar2 = puVar2 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b3408 Catch@101b3408

void Catch_101b3408(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b341c Catch@101b341c

void Catch_101b341c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::UpdateEquipItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3440 FUN_101b3440

void FUN_101b3440(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102195a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b2b40(param_1[1]);
  if (iVar1 == -1) {
    FUN_101b31a0(param_1[1]);
    FUN_101b2ce0(param_1);
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0xc) + iVar1 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *param_1;
        param_1 = param_1 + 1;
        puVar2 = puVar2 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b34c8 Catch@101b34c8

void Catch_101b34c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b34dc Catch@101b34dc

void Catch_101b34dc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::UpdateQuestItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3500 FUN_101b3500

void FUN_101b3500(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102195c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b2140(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_101b2150(param_1);
    if (iVar1 == 0) {
      FUN_101b3110(*(undefined4 *)(param_1 + 4));
    }
    else {
      FUN_101b3230(*(undefined4 *)(param_1 + 4));
    }
  }
  else {
    FUN_101b31a0(*(undefined4 *)(param_1 + 4));
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b3589 Catch@101b3589

void Catch_101b3589(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b359d Catch@101b359d

void Catch_101b359d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::DeleteItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b35c0 FUN_101b35c0

void FUN_101b35c0(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102195e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b2140(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_101b2150(param_1);
    if (iVar1 == 0) {
      FUN_101b32c0(param_1);
    }
    else {
      FUN_101b3440(param_1);
    }
  }
  else {
    FUN_101b3380(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b363c Catch@101b363c

void Catch_101b363c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b3650 Catch@101b3650

void Catch_101b3650(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::UpdateItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3670 FUN_101b3670

void FUN_101b3670(int param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219600;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 1) {
    FUN_101b3060(param_2);
  }
  else if (param_1 == 2) {
    FUN_101b35c0(param_2);
  }
  else if (param_1 == 3) {
    FUN_101b3500(param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b36ee Catch@101b36ee

void Catch_101b36ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b3702 Catch@101b3702

void Catch_101b3702(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryManager::UpdateItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3720 FUN_101b3720

void FUN_101b3720(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = TSingleton<NItemDataManager>::vftable;
  DAT_10392424 = 0;
  return;
}


// ==== 101b3740 FUN_101b3740

void FUN_101b3740(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = TSingleton<NItemDataManager>::vftable;
  DAT_10392424 = 0;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 101b3770 FUN_101b3770

void FUN_101b3770(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = TSingleton<NItemDataManager>::vftable;
  DAT_10392424 = in_ECX;
  *in_ECX = NItemDataManager::vftable;
  return;
}


// ==== 101b37d5 Catch@101b37d5

void Catch_101b37d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b37e9 Catch@101b37e9

void Catch_101b37e9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NItemDataManager::NItemDataManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3810 FUN_101b3810

void FUN_101b3810(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10219658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  *in_ECX = TSingleton<NItemDataManager>::vftable;
  DAT_10392424 = 0;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 101b3880 FUN_101b3880

FString * FUN_101b3880(FString *param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1021969a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  if (param_2 < 0) {
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    iVar1 = FUN_10187a60(&param_2);
    if (iVar1 == 0) {
      FString::FString(param_1,(ushort *)&DAT_1022f9f8);
    }
    else {
      puVar2 = L2FName::operator*((L2FName *)(iVar1 + 0x50));
      FString::FString(param_1,puVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 101b392b Catch@101b392b

void Catch_101b392b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b393f Catch@101b393f

void Catch_101b393f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NItemDataManager::GetItemName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3960 FUN_101b3960

FString * FUN_101b3960(FString *param_1,int param_2,int param_3)

{
  code *this;
  int iVar1;
  int iVar2;
  FL2VariationEffectData *pFVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = GL2GameData_exref;
  puStack_c = &LAB_102196da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  if ((param_2 == 0) || (param_3 == 0)) {
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    iVar1 = FUN_10187a60(&param_2);
    if (((iVar1 == 0) || (iVar2 = FUN_10187a60(&param_3), iVar2 == 0)) ||
       (pFVar3 = FL2GameData::GetVariationEffectData
                           ((FL2GameData *)this,*(int *)(iVar1 + 4),*(int *)(iVar2 + 4),0,0),
       pFVar3 == (FL2VariationEffectData *)0x0)) {
      FString::FString(param_1,(ushort *)&DAT_1022f9f8);
    }
    else {
      FString::FString(param_1,(FString *)(pFVar3 + 0x18));
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 101b3a4c Catch@101b3a4c

void Catch_101b3a4c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b3a60 Catch@101b3a60

void Catch_101b3a60(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NItemDataManager::GetRefineryPrefix");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3a80 FUN_101b3a80

FString * FUN_101b3a80(FString *param_1,FString *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort *puVar2;
  FString *pFVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString *pFVar6;
  uint uStack_60;
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1021973e;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  FUN_101b3960(local_2c,param_3,param_4);
  local_8._0_1_ = 2;
  iVar1 = FString::operator_int(local_2c);
  if (iVar1 == 0) {
    FString::FString(param_1,param_2);
    local_18 = 1;
  }
  else {
    FString::FString(local_38);
    local_8._0_1_ = 3;
    FString::FString(local_50,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 4;
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x51344));
    FString::FString(local_44,puVar2);
    local_8._0_1_ = 5;
    pFVar6 = local_50;
    pFVar5 = local_2c;
    pFVar4 = local_44;
    pFVar3 = local_38;
    FUN_1014f960(pFVar3,pFVar4,param_2,pFVar5,pFVar6);
    FUN_101b70f0(pFVar3,pFVar4,param_2,pFVar5,pFVar6);
    local_8._0_1_ = 4;
    FString::~FString(local_44);
    local_8._0_1_ = 3;
    FString::~FString(local_50);
    FString::FString(param_1,local_38);
    local_18 = 1;
    local_8._0_1_ = 2;
    FString::~FString(local_38);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return param_1;
}


// ==== 101b3bad Catch@101b3bad

void Catch_101b3bad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b3bc1 Catch@101b3bc1

void Catch_101b3bc1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NItemDataManager::GetRefineryItemName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3be0 FUN_101b3be0

FString * FUN_101b3be0(FString *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219783;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  FUN_101b3880(local_2c,param_2);
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar1 = FString::operator_int(local_2c);
  if (iVar1 == 0) {
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FUN_101b3a80(param_1,local_2c,param_3,param_4);
  }
  local_18 = 1;
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return param_1;
}


// ==== 101b3c87 Catch@101b3c87

void Catch_101b3c87(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b3c9b Catch@101b3c9b

void Catch_101b3c9b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NItemDataManager::GetRefineryItemName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3cc0 FUN_101b3cc0

void FUN_101b3cc0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  return;
}


// ==== 101b3d1f Catch@101b3d1f

void Catch_101b3d1f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b3d33 Catch@101b3d33

void Catch_101b3d33(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacroItem::~NCMacroItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3d50 FUN_101b3d50

void FUN_101b3d50(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102197c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[10] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  appMemset(in_ECX + 0xb,0,0x42);
  ExceptionList = local_10;
  return;
}


// ==== 101b3dcd Catch@101b3dcd

void Catch_101b3dcd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b3de1 Catch@101b3de1

void Catch_101b3de1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacroItem::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3e00 FUN_101b3e00

undefined4 FUN_101b3e00(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x9a0);
}


// ==== 101b3e4a Catch@101b3e4a

void Catch_101b3e4a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b3e5e Catch@101b3e5e

void Catch_101b3e5e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacro::GetMacroID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3e80 FUN_101b3e80

short * FUN_101b3e80(void)

{
  short *psVar1;
  int in_ECX;
  
  psVar1 = (short *)(in_ECX + 0x9b0);
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    psVar1 = (short *)0x0;
  }
  return psVar1;
}


// ==== 101b3ed6 Catch@101b3ed6

void Catch_101b3ed6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b3eea Catch@101b3eea

void Catch_101b3eea(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacro::GetMacroName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3f10 FUN_101b3f10

short * FUN_101b3f10(void)

{
  short *psVar1;
  int in_ECX;
  
  psVar1 = (short *)(in_ECX + 0xa0c);
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    psVar1 = (short *)0x0;
  }
  return psVar1;
}


// ==== 101b3f66 Catch@101b3f66

void Catch_101b3f66(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b3f7a Catch@101b3f7a

void Catch_101b3f7a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacro::GetIconName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b3fa0 FUN_101b3fa0

short * FUN_101b3fa0(void)

{
  short *psVar1;
  int in_ECX;
  
  psVar1 = (short *)(in_ECX + 0xa16);
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    psVar1 = (short *)0x0;
  }
  return psVar1;
}


// ==== 101b3ff6 Catch@101b3ff6

void Catch_101b3ff6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b400a Catch@101b400a

void Catch_101b400a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacro::GetIconTextureName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b4030 FUN_101b4030

short * FUN_101b4030(void)

{
  short *psVar1;
  int in_ECX;
  
  psVar1 = (short *)(in_ECX + 0x9ca);
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    psVar1 = (short *)0x0;
  }
  return psVar1;
}


// ==== 101b4086 Catch@101b4086

void Catch_101b4086(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b409a Catch@101b409a

void Catch_101b409a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacro::GetMacroDescription");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b40c0 FUN_101b40c0

void FUN_101b40c0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_410;
  undefined1 *puStack_40c;
  undefined4 local_408;
  undefined4 local_404;
  ushort local_400 [13];
  ushort local_3e6 [33];
  undefined1 local_3a4 [10];
  char local_39a;
  char local_399;
  char acStack_398 [8];
  char acStack_390 [904];
  uint local_8;
  
  puStack_40c = &LAB_10219880;
  local_410 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)&local_404;
  ExceptionList = &local_410;
  puVar6 = &local_404;
  puVar5 = (undefined4 *)register0x00000010;
  for (iVar3 = 0xff; puVar5 = puVar5 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar6 = puVar6 + 1;
  }
  local_408 = 0;
  *(undefined4 *)(in_ECX + 0x9a0) = local_404;
  appStrcpy((ushort *)(in_ECX + 0x9b0),local_400);
  appStrcpy((ushort *)(in_ECX + 0x9ca),local_3e6);
  appSprintf((ushort *)(in_ECX + 0xa0c),(ushort *)&DAT_1022dde0,local_3a4);
  *(int *)(in_ECX + 0x9a4) = (int)local_39a;
  *(int *)(in_ECX + 0x9a8) = (int)local_399;
  for (iVar3 = 0; iVar3 < 0xc; iVar3 = iVar3 + 1) {
    FUN_101b3d50();
  }
  iVar3 = 0;
  do {
    if (*(int *)(in_ECX + 0x9a8) <= iVar3) {
      local_408 = 0xffffffff;
      ExceptionList = local_410;
      __security_check_cookie(local_8 ^ (uint)&local_404);
      return;
    }
    iVar2 = iVar3 * 0x4c;
    iVar4 = (int)acStack_398[iVar2];
    if (0 < iVar4) {
      iVar4 = iVar4 + -1;
    }
    cVar1 = acStack_398[iVar2 + 1];
    iVar4 = iVar4 * 0x70 + in_ECX;
    *(int *)(iVar4 + 0x3c) = (int)cVar1;
    switch((int)cVar1) {
    case 1:
      *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(acStack_398 + iVar2 + 4);
      *(int *)(iVar4 + 0x4c) = (int)acStack_390[iVar2];
      iVar3 = iVar3 + 1;
      break;
    case 2:
      *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(acStack_398 + iVar2 + 4);
      iVar3 = iVar3 + 1;
      break;
    case 3:
      appSprintf((ushort *)(iVar4 + 0x68),(ushort *)&DAT_1022dde0,acStack_390 + iVar2 + 2);
      iVar3 = iVar3 + 1;
      break;
    case 4:
      *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(acStack_398 + iVar2 + 4);
      *(int *)(iVar4 + 0x44) = (int)acStack_390[iVar2];
      iVar3 = iVar3 + 1;
      break;
    case 6:
      *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(acStack_398 + iVar2 + 4);
    default:
      iVar3 = iVar3 + 1;
    }
  } while( true );
}


// ==== 101b425a Catch@101b425a

void Catch_101b425a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b426e Catch@101b426e

void Catch_101b426e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacro::SetMacro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b42b0 FUN_101b42b0

void FUN_101b42b0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x9a8); iVar2 = iVar2 + 1) {
    iVar1 = iVar2 * 0x70 + in_ECX;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 0x58) = 0;
  }
  *(undefined4 *)(in_ECX + 0x9ac) = 0;
  *(undefined4 *)(in_ECX + 0x998) = 0;
  return;
}


// ==== 101b4330 Catch@101b4330

void Catch_101b4330(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b4344 Catch@101b4344

void Catch_101b4344(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacro::StopMacroExecution");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b4370 FUN_101b4370

void FUN_101b4370(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102198d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101b3d50();
  ExceptionList = local_10;
  return;
}


// ==== 101b43c4 Catch@101b43c4

void Catch_101b43c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b43d8 Catch@101b43d8

void Catch_101b43d8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacroItem::NCMacroItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b4400 FUN_101b4400

void FUN_101b4400(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1021991c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10054da0();
  local_8 = 0;
  _eh_vector_constructor_iterator_((void *)(in_ECX + 0x3c),0x70,0xc,FUN_101b4370,FUN_101b3cc0);
  local_8._0_1_ = 1;
  FUN_10135770();
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)(in_ECX + 0x998) = 0;
  *(undefined4 *)(in_ECX + 0x9a4) = 0;
  *(undefined4 *)(in_ECX + 0x9a8) = 0;
  *(undefined4 *)(in_ECX + 0x9ac) = 0;
  *(undefined4 *)(in_ECX + 0x9a0) = 0;
  *(undefined4 *)(in_ECX + 0x99c) = 0;
  *(undefined4 *)(in_ECX + 0x57c) = 0;
  appMemset((void *)(in_ECX + 0x9ca),0,0x42);
  appMemset((void *)(in_ECX + 0x9b0),0,0x1a);
  appMemset((void *)(in_ECX + 0xa0c),0,10);
  appMemset((void *)(in_ECX + 0xa16),0,100);
  ExceptionList = local_10;
  return;
}


// ==== 101b44e6 Catch@101b44e6

void Catch_101b44e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b44fa Catch@101b44fa

void Catch_101b44fa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacro::NCMacro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b4520 FUN_101b4520

void FUN_101b4520(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1021996c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 3;
  *(undefined4 *)(in_ECX + 0x57c) = 0;
  FUN_101b42b0();
  *(undefined4 *)(in_ECX + 0x9a8) = 0;
  *(undefined4 *)(in_ECX + 0x99c) = 0;
  local_8 = 1;
  FUN_10135810();
  local_8 = local_8 & 0xffffff00;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 0x3c),0x70,0xc,FUN_101b3cc0);
  local_8 = 0xffffffff;
  FUN_10054e80();
  ExceptionList = local_10;
  return;
}


// ==== 101b45bb Catch@101b45bb

void Catch_101b45bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b45cf Catch@101b45cf

void Catch_101b45cf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacro::~NCMacro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b45f0 FUN_101b45f0

undefined4 FUN_101b45f0(int param_1)

{
  byte bVar1;
  void *pvVar2;
  APawn *pAVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  ushort *puVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint uStack_6c;
  L2ParamStack local_5c [4];
  FString local_58 [12];
  FString local_4c [12];
  undefined1 local_40 [20];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_102199b3;
  local_10 = ExceptionList;
  uStack_6c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_6c;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x9a8) <= param_1) {
    return 0xffffffff;
  }
  iVar5 = param_1 * 0x70 + in_ECX;
  iVar6 = *(int *)(iVar5 + 0x3c);
  local_28 = iVar5;
  if (iVar6 == 1) {
    ExceptionList = &local_10;
    local_14 = (undefined1 *)&uStack_6c;
    L2ParamStack::L2ParamStack(local_5c,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_5c,*(void **)(iVar5 + 0x44));
    pvVar2 = (void *)(**(code **)(*DAT_103663bc + 0x590))();
    L2ParamStack::PushBack(local_5c,pvVar2);
    bVar1 = UInput::KeyDown(*(UInput **)
                             (**(int **)(*(int *)(DAT_103663bc[0x14] + 0x54) + 0x38) + 0x78),0x10);
    L2ParamStack::PushBack(local_5c,(void *)(uint)bVar1);
    FUN_10143b50(local_5c);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_5c);
    ExceptionList = local_10;
    return 1;
  }
  if (iVar6 == 2) {
    ExceptionList = &local_10;
    local_14 = (undefined1 *)&uStack_6c;
    pAVar3 = (APawn *)FUN_1014ddb0();
    if (pAVar3 == (APawn *)0x0) {
      ExceptionList = local_10;
      return 0xffffffff;
    }
    local_1c = -1;
    switch(*(undefined4 *)(iVar5 + 0x44)) {
    case 0:
      if (*(char *)(*(int *)(pAVar3 + 0x14d8) + 0x435) == '\0') {
        local_1c = 1;
      }
      else if (*(char *)(*(int *)(pAVar3 + 0x14d8) + 0x435) == '\x01') {
        local_1c = 0;
      }
      break;
    case 0xc:
      local_1c = 2;
      break;
    case 0xd:
      local_1c = 3;
      break;
    case 0xe:
      local_1c = 4;
      break;
    case 0x18:
      local_1c = 6;
      break;
    case 0x19:
      local_1c = 5;
      break;
    case 0x1a:
      local_1c = 7;
      break;
    case 0x1d:
      local_1c = 8;
      break;
    case 0x1e:
      local_1c = 9;
      break;
    case 0x1f:
      local_1c = 10;
      break;
    case 0x21:
      local_1c = 0xb;
      break;
    case 0x22:
      local_1c = 0xc;
      break;
    case 0x23:
      local_1c = 0xd;
    }
    fVar9 = APawn::GetSocialAnimDuration(pAVar3,local_1c);
    if (fVar9 <= 0.0) {
      ExceptionList = local_10;
      return 1;
    }
    *(float *)(iVar5 + 0x58) = fVar9;
    ExceptionList = local_10;
    return 1;
  }
  if (iVar6 == 5) {
    ExceptionList = &local_10;
    local_14 = (undefined1 *)&uStack_6c;
    FUN_10142ea0(*(undefined4 *)(iVar5 + 0x40));
    ExceptionList = local_10;
    return 1;
  }
  if (iVar6 == 4) {
    iVar6 = *(int *)(iVar5 + 0x44) + *(int *)(iVar5 + 0x48) * 0xc;
    ExceptionList = &local_10;
    local_14 = (undefined1 *)&uStack_6c;
    iVar4 = FUN_10141370(iVar6);
    if (*(int *)(iVar4 + 0x1e54) == 4) {
      FUN_1016eb50(0x53b);
      ExceptionList = local_10;
      return 0xffffffff;
    }
    if ((*(int *)(iVar4 + 0x1e54) == 3) && (DAT_103663bc != (int *)0x0)) {
      pAVar3 = (APawn *)FUN_1014ddb0();
      if (pAVar3 == (APawn *)0x0) {
        ExceptionList = local_10;
        return 0xffffffff;
      }
      iVar4 = FUN_10141370(iVar6);
      local_20 = -1;
      switch(*(undefined4 *)(iVar4 + 0x1e5c)) {
      case 0:
        if (*(char *)(*(int *)(pAVar3 + 0x14d8) + 0x435) == '\0') {
          local_20 = 1;
        }
        else if (*(char *)(*(int *)(pAVar3 + 0x14d8) + 0x435) == '\x01') {
          local_20 = 0;
        }
        break;
      case 0xc:
        local_20 = 2;
        break;
      case 0xd:
        local_20 = 3;
        break;
      case 0xe:
        local_20 = 4;
        break;
      case 0x18:
        local_20 = 6;
        break;
      case 0x19:
        local_20 = 5;
        break;
      case 0x1a:
        local_20 = 7;
        break;
      case 0x1d:
        local_20 = 8;
        break;
      case 0x1e:
        local_20 = 9;
        break;
      case 0x1f:
        local_20 = 10;
        break;
      case 0x21:
        local_20 = 0xb;
        break;
      case 0x22:
        local_20 = 0xc;
        break;
      case 0x23:
        local_20 = 0xd;
      }
      fVar9 = APawn::GetSocialAnimDuration(pAVar3,local_20);
      if (0.0 < fVar9) {
        *(float *)(iVar5 + 0x58) = fVar9;
      }
    }
    FUN_10171680(iVar6,0,0);
    ExceptionList = local_10;
    return 1;
  }
  if (iVar6 != 3) {
    if (iVar6 != 6) {
      return 1;
    }
    *(float *)(iVar5 + 0x58) = (float)*(int *)(iVar5 + 0x48);
    return 1;
  }
  puVar8 = (ushort *)(iVar5 + 0x68);
  if (puVar8 == (ushort *)0x0) {
    return 1;
  }
  ExceptionList = &local_10;
  local_2c = in_ECX;
  FUN_1003f970();
  local_8._0_1_ = 2;
  FString::FString(local_58,puVar8);
  local_8._0_1_ = 3;
  FString::FString(local_4c,(ushort *)L"Command");
  local_8._0_1_ = 4;
  FUN_10040230(local_4c,local_58);
  local_8._0_1_ = 3;
  FString::~FString(local_4c);
  local_8 = CONCAT31(local_8._1_3_,2);
  FString::~FString(local_58);
  puVar11 = local_40;
  uVar10 = 0x23c;
  FUN_10005c30(0x23c,puVar11);
  FUN_100d1790(uVar10,puVar11);
  local_24 = in_ECX + 0x580;
  iVar5 = FUN_101358a0(puVar8);
  if ((iVar5 == 0x1d) || (iVar5 == 0x1c)) {
    iVar4 = 0;
    iVar7 = 0;
    iVar6 = FUN_10135980();
    if (iVar6 != 0) {
      iVar4 = thunk_FUN_101c1b01(iVar6);
    }
    iVar6 = FUN_10135980();
    if (iVar6 != 0) {
      iVar7 = thunk_FUN_101c1b01(iVar6);
    }
    if ((((iVar4 - 1U < 10) && (iVar7 - 1U < 0xc)) &&
        (iVar6 = iVar7 + -0xd + iVar4 * 0xc, iVar6 < 0x78)) &&
       ((iVar6 = FUN_10141370(iVar6), iVar6 != 0 && (*(int *)(iVar6 + 0x1e54) == 4)))) {
      FUN_101addc0(0);
      FUN_1016eb50(0x53b);
      local_8 = local_8 & 0xffffff00;
      FUN_1003fff0();
      ExceptionList = local_10;
      return 1;
    }
  }
  iVar6 = local_28;
  if (((((((iVar5 != 4) && (iVar5 != 5)) &&
         ((iVar5 != 0xe && (((iVar5 != 0x13 && (iVar5 != 0x15)) && (iVar5 != 0x16)))))) &&
        ((iVar5 != 0x17 && (iVar5 != 0x27)))) && (iVar5 != 0x2e)) &&
      (((iVar5 != 0x2f && (iVar5 != 0x30)) &&
       ((iVar5 != 0x31 && (((iVar5 != 0x32 && (iVar5 != 0x33)) && (iVar5 != 0x36)))))))) &&
     (((iVar5 != 0x37 && (iVar5 != 0x38)) && (iVar5 != 0x39)))) {
    if (((iVar5 == 0x20000000) && (param_1 + 1 < *(int *)(local_2c + 0x9a8))) &&
       ((*(int *)(local_28 + 0xac) == 3 &&
        (iVar5 = FUN_101358a0(local_28 + 0xd8), iVar5 == 0x20000000)))) {
      iVar5 = appStrlen((ushort *)(iVar6 + 0x68));
      *(float *)(iVar6 + 0x58) = (float)iVar5 / 5.0;
      local_8 = local_8 & 0xffffff00;
      FUN_1003fff0();
      ExceptionList = local_10;
      return 1;
    }
    goto LAB_101b4c58;
  }
  pAVar3 = (APawn *)FUN_1014ddb0();
  if (pAVar3 == (APawn *)0x0) {
    local_8 = local_8 & 0xffffff00;
    FUN_1003fff0();
    ExceptionList = local_10;
    return 0xffffffff;
  }
  local_18 = -1;
  switch(iVar5) {
  case 4:
switchD_101b4ba2_caseD_4:
    local_18 = 0;
    break;
  case 5:
switchD_101b4ba2_caseD_5:
    local_18 = 1;
    break;
  case 0x15:
    local_18 = 2;
    break;
  case 0x16:
    local_18 = 3;
    break;
  case 0x17:
    local_18 = 4;
    break;
  case 0x2e:
    local_18 = 5;
    break;
  case 0x2f:
    local_18 = 6;
    break;
  case 0x30:
    local_18 = 7;
    break;
  case 0x31:
    local_18 = 8;
    break;
  case 0x32:
    local_18 = 9;
    break;
  case 0x33:
    local_18 = 10;
    break;
  case 0x36:
    local_18 = 0xb;
    break;
  case 0x37:
    local_18 = 0xc;
    break;
  case 0x38:
    local_18 = 0xd;
    break;
  case 0x39:
    if (*(char *)(*(int *)(pAVar3 + 0x14d8) + 0x435) == '\0') goto switchD_101b4ba2_caseD_5;
    if (*(char *)(*(int *)(pAVar3 + 0x14d8) + 0x435) == '\x01') goto switchD_101b4ba2_caseD_4;
  }
  fVar9 = APawn::GetSocialAnimDuration(pAVar3,local_18);
  if (0.0 < fVar9) {
    *(float *)(local_28 + 0x58) = fVar9;
    local_8 = local_8 & 0xffffff00;
    FUN_1003fff0();
    ExceptionList = local_10;
    return 1;
  }
LAB_101b4c58:
  local_8 = local_8 & 0xffffff00;
  FUN_1003fff0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101b4c8f Catch@101b4c8f

void Catch_101b4c8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 101b4ca3 Catch@101b4ca3

void Catch_101b4ca3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacro::ExecuteMacro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b4df0 FUN_101b4df0

void FUN_101b4df0(float param_1)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int local_278;
  void *local_26c;
  undefined1 *puStack_268;
  undefined4 local_264;
  ushort local_260 [300];
  uint local_8;
  
  puStack_268 = &LAB_102199d0;
  local_26c = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_260;
  ExceptionList = &local_26c;
  iVar6 = 0;
  local_264 = 0;
  appMemset(local_260,0,600);
  iVar3 = *(int *)(in_ECX + 0x9ac);
  if ((*(int *)(in_ECX + 0x9a8) <= iVar3) || (*(int *)(in_ECX + 0x998) == 0)) {
    *(undefined4 *)(in_ECX + 0x998) = 0;
    *(undefined4 *)(in_ECX + 0x9ac) = 0;
    local_264 = 0xffffffff;
    goto LAB_101b507c;
  }
  if ((iVar3 == 0) && (*(float *)(in_ECX + 0x5c) == 0.0)) {
    *(float *)(in_ECX + 0x5c) = param_1;
    *(float *)(*(int *)(in_ECX + 0x9ac) * 0x70 + 0x60 + in_ECX) = param_1;
    FUN_101b45f0(0);
    local_264 = 0xffffffff;
    goto LAB_101b507c;
  }
  bVar2 = true;
  pfVar1 = (float *)(iVar3 * 0x70 + 0x60 + in_ECX);
  *pfVar1 = *pfVar1 + param_1;
  iVar3 = *(int *)(in_ECX + 0x9ac) * 0x70 + in_ECX;
  iVar5 = *(int *)(iVar3 + 0x3c);
  if (iVar5 == 1) {
    bVar2 = false;
  }
  else if (iVar5 == 3) {
    iVar3 = FUN_101358a0(iVar3 + 0x68);
    if (((iVar3 == 0x18) || (iVar3 == 0x19)) || ((iVar3 == 0x1a || (iVar3 == 0xe)))) {
LAB_101b52d5:
      bVar2 = false;
    }
    else if (((iVar3 == 0xc) || (iVar3 == 0xd)) || (iVar3 == 0xf)) {
      iVar6 = FUN_1014ddd0();
      local_278 = 0;
      if (iVar3 == 0xc) {
        uVar4 = FUN_10135980();
        FUN_10135a20(uVar4);
        appSprintf(local_260,(ushort *)&DAT_1022dde0,uVar4);
        while( true ) {
          iVar3 = FUN_10135980();
          FUN_10135a20(iVar3);
          if (iVar3 == 0) break;
          appSprintf(local_260,(ushort *)L"%s %s",local_260,iVar3);
        }
        iVar3 = FUN_10145900(local_260);
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0x204) != 0)) {
          local_278 = *(int *)(iVar3 + 0x18);
        }
LAB_101b513a:
        if (((iVar6 != 0) && (*(int *)(iVar6 + 0x204) != 0)) &&
           (*(int *)(iVar6 + 0x18) == local_278)) {
          FUN_101ae390();
          goto LAB_101b4fac;
        }
      }
      else if (iVar3 == 0xd) {
        if (iVar6 != 0) {
          iVar3 = (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0x420))
                            (0x43480000,*(undefined4 *)(*(int *)(iVar6 + 0x204) + 0x60));
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x204) != 0)) {
            local_278 = *(int *)(iVar3 + 0x18);
          }
          goto LAB_101b513a;
        }
      }
      else if (iVar6 != 0) {
        if (((*(int *)(iVar6 + 0x204) != 0) && (*(int *)(*(int *)(iVar6 + 0x204) + 0x14d8) != 0)) &&
           (iVar3 = (**(code **)(**(int **)(*(int *)(iVar6 + 0x204) + 0x14d8) + 0x35c))(),
           iVar3 != 0)) {
          iVar3 = (**(code **)(**(int **)(*(int *)(iVar6 + 0x204) + 0x14d8) + 0x35c))();
          iVar3 = FUN_10145910(*(undefined4 *)(iVar3 + 0x60));
          if (iVar3 == 0) {
            iVar3 = **(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60);
            iVar5 = (**(code **)(**(int **)(*(int *)(iVar6 + 0x204) + 0x14d8) + 0x35c))();
            iVar3 = (**(code **)(iVar3 + 0x9c))(*(undefined4 *)(iVar5 + 0x60));
            if (iVar3 != 0) {
              local_278 = *(int *)(iVar3 + 8);
            }
          }
          else {
            local_278 = *(int *)(iVar3 + 0x18);
          }
        }
        goto LAB_101b513a;
      }
      bVar2 = false;
    }
    else if ((iVar3 == 0x1d) || (iVar3 == 0x1c)) {
      iVar3 = FUN_10135980();
      if (iVar3 != 0) {
        iVar6 = thunk_FUN_101c1b01(iVar3);
      }
      iVar3 = FUN_10135980();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = thunk_FUN_101c1b01(iVar3);
      }
      if (((iVar6 - 1U < 10) && (iVar3 - 1U < 0xc)) &&
         (iVar3 = iVar3 + -0xd + iVar6 * 0xc, iVar3 < 0x78)) {
        iVar3 = FUN_10141370(iVar3);
        if (*(int *)(iVar3 + 0x1e54) == 2) {
          bVar2 = false;
        }
        else if (*(int *)(iVar3 + 0x1e54) == 4) {
          *(undefined4 *)(in_ECX + 0x998) = 0;
          *(undefined4 *)(in_ECX + 0x9ac) = 0;
          goto LAB_101b506b;
        }
      }
    }
  }
  else if ((((iVar5 == 4) &&
            (iVar3 = *(int *)(iVar3 + 0x44) + *(int *)(iVar3 + 0x48) * 0xc, DAT_103663bc != 0)) &&
           (*(int *)(DAT_103663bc + 0x50ac) != 0)) && (iVar3 < 0x78)) {
    iVar3 = FUN_10141370(iVar3);
    if (*(int *)(iVar3 + 0x1e54) == 2) goto LAB_101b52d5;
    if (*(int *)(iVar3 + 0x1e54) == 4) {
      *(undefined4 *)(in_ECX + 0x998) = 0;
      *(undefined4 *)(in_ECX + 0x9ac) = 0;
LAB_101b506b:
      FUN_1016eb50(0x53b);
      goto LAB_101b507c;
    }
  }
LAB_101b4fac:
  iVar3 = *(int *)(in_ECX + 0x9ac) * 0x70 + in_ECX;
  if (((0.0 < *(float *)(iVar3 + 0x58)) &&
      (*(float *)(iVar3 + 0x58) < *(float *)(iVar3 + 0x60) - *(float *)(iVar3 + 0x5c))) ||
     ((bVar2 && (*(float *)(iVar3 + 0x58) == 0.0)))) {
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x9ac) * 0x70 + 0x60 + in_ECX) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x9ac) * 0x70 + 0x58 + in_ECX) = 0;
    *(int *)(in_ECX + 0x9ac) = *(int *)(in_ECX + 0x9ac) + 1;
    if (*(int *)(in_ECX + 0x9ac) < *(int *)(in_ECX + 0x9a8)) {
      *(float *)(*(int *)(in_ECX + 0x9ac) * 0x70 + 0x5c + in_ECX) = param_1;
      *(float *)(*(int *)(in_ECX + 0x9ac) * 0x70 + 0x60 + in_ECX) = param_1;
      FUN_101b45f0(*(undefined4 *)(in_ECX + 0x9ac));
      local_264 = 0xffffffff;
    }
  }
  else {
    local_264 = 0xffffffff;
  }
LAB_101b507c:
  ExceptionList = local_26c;
  __security_check_cookie(local_8 ^ (uint)local_260);
  return;
}


// ==== 101b5322 Catch@101b5322

void Catch_101b5322(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 101b5336 Catch@101b5336

void Catch_101b5336(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMacro::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5360 FUN_101b5360

void FUN_101b5360(int param_1,int param_2)

{
  int iVar1;
  FL2MagicSkillData *pFVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219a00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x18) != param_1)) || (*(int *)(iVar1 + 0x1c) != param_2))
  {
    pFVar2 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,param_1,param_2);
    if (pFVar2 != (FL2MagicSkillData *)0x0) {
      *(FL2MagicSkillData **)(in_ECX + 4) = pFVar2;
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b53ee Catch@101b53ee

void Catch_101b53ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b5402 Catch@101b5402

void Catch_101b5402(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NMagicSkillDataManager::GetMagicSkillData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5420 FUN_101b5420

void FUN_101b5420(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = TSingleton<NMagicSkillDataManager>::vftable;
  DAT_10363f48 = 0;
  return;
}


// ==== 101b5440 FUN_101b5440

void FUN_101b5440(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = TSingleton<NMagicSkillDataManager>::vftable;
  DAT_10363f48 = 0;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 101b5470 FUN_101b5470

void FUN_101b5470(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = TSingleton<NMagicSkillDataManager>::vftable;
  DAT_10363f48 = in_ECX;
  *in_ECX = NMagicSkillDataManager::vftable;
  in_ECX[1] = 0;
  return;
}


// ==== 101b54dc Catch@101b54dc

void Catch_101b54dc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b54f0 Catch@101b54f0

void Catch_101b54f0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NMagicSkillDataManager::NMagicSkillDataManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5510 FUN_101b5510

ushort * FUN_101b5510(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219a50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b5360(param_1,param_2);
  if (iVar1 != 0) {
    puVar2 = L2FName::operator*((L2FName *)(iVar1 + 0x48));
    ExceptionList = local_10;
    return puVar2;
  }
  ExceptionList = local_10;
  return (ushort *)0x0;
}


// ==== 101b5586 Catch@101b5586

void Catch_101b5586(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b559a Catch@101b559a

void Catch_101b559a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NMagicSkillDataManager::GetMSIcon");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b55c0 FUN_101b55c0

ushort * FUN_101b55c0(undefined4 param_1,undefined4 param_2)

{
  FString *this;
  ushort *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219a70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (FString *)FUN_101b5360(param_1,param_2);
  if (this != (FString *)0x0) {
    puVar1 = FString::operator*(this);
    ExceptionList = local_10;
    return puVar1;
  }
  ExceptionList = local_10;
  return (ushort *)0x0;
}


// ==== 101b5635 Catch@101b5635

void Catch_101b5635(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b5649 Catch@101b5649

void Catch_101b5649(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NMagicSkillDataManager::GetMSName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5670 FUN_101b5670

ushort * FUN_101b5670(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219a90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b5360(param_1,param_2);
  if (iVar1 != 0) {
    puVar2 = FString::operator*((FString *)(iVar1 + 0xc));
    ExceptionList = local_10;
    return puVar2;
  }
  ExceptionList = local_10;
  return (ushort *)0x0;
}


// ==== 101b56e6 Catch@101b56e6

void Catch_101b56e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b56fa Catch@101b56fa

void Catch_101b56fa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NMagicSkillDataManager::GetMSItemDescription");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5720 FUN_101b5720

undefined4 FUN_101b5720(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219ab0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b5360(param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4c) != 0)) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101b5798 Catch@101b5798

void Catch_101b5798(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b57ac Catch@101b57ac

void Catch_101b57ac(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NMagicSkillDataManager::IsDeBuff");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b57d0 FUN_101b57d0

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


// ==== 101b5848 Catch@101b5848

void Catch_101b5848(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b585c Catch@101b585c

void Catch_101b585c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NMagicSkillDataManager::IsToggleSkill");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5880 FUN_101b5880

ushort * FUN_101b5880(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  ushort *puVar2;
  FString *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219af0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b5360(param_1,param_2);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x3c) == 0) {
      if (*(int *)(iVar1 + 0x20) == 2) {
        this = (FString *)(GL2GameData_exref + 0x6b77c);
      }
      else {
        this = (FString *)(GL2GameData_exref + 0x6b770);
      }
    }
    else if (*(int *)(iVar1 + 0x3c) == 3) {
      this = (FString *)(GL2GameData_exref + 0x6ef2c);
    }
    else {
      this = (FString *)(GL2GameData_exref + 0x6b788);
    }
    puVar2 = FString::operator*(this);
    ExceptionList = local_10;
    return puVar2;
  }
  ExceptionList = local_10;
  return (ushort *)0x0;
}


// ==== 101b592f Catch@101b592f

void Catch_101b592f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b5943 Catch@101b5943

void Catch_101b5943(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NMagicSkillDataManager::GetMSOperateType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5960 FUN_101b5960

undefined4 FUN_101b5960(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219b10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b5360(param_1,param_2);
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return *(undefined4 *)(iVar1 + 0x28);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101b59d0 Catch@101b59d0

void Catch_101b59d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b59e4 Catch@101b59e4

void Catch_101b59e4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NMagicSkillDataManager::GetMSHpConsume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5a10 FUN_101b5a10

undefined4 FUN_101b5a10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219b30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b5360(param_1,param_2);
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return *(undefined4 *)(iVar1 + 0x24);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101b5a80 Catch@101b5a80

void Catch_101b5a80(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b5a94 Catch@101b5a94

void Catch_101b5a94(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NMagicSkillDataManager::GetMSMpConsume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5ac0 FUN_101b5ac0

undefined4 FUN_101b5ac0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219b50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b5360(param_1,param_2);
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return *(undefined4 *)(iVar1 + 0x2c);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101b5b30 Catch@101b5b30

void Catch_101b5b30(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b5b44 Catch@101b5b44

void Catch_101b5b44(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NMagicSkillDataManager::GetMSCastRange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5b70 FUN_101b5b70

void FUN_101b5b70(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10219b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  *in_ECX = TSingleton<NMagicSkillDataManager>::vftable;
  DAT_10363f48 = 0;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 101b5be0 FUN_101b5be0

void FUN_101b5be0(void)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219ba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=(in_ECX,(ushort *)&DAT_1022f9f8);
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 101b5c51 Catch@101b5c51

void Catch_101b5c51(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b5c65 Catch@101b5c65

void Catch_101b5c65(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5c90 FUN_101b5c90

FString * FUN_101b5c90(FString *param_1)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219bda;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_1,in_ECX);
  ExceptionList = local_10;
  return param_1;
}


// ==== 101b5cef Catch@101b5cef

void Catch_101b5cef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b5d03 Catch@101b5d03

void Catch_101b5d03(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::GetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5d20 FUN_101b5d20

undefined4 FUN_101b5d20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 101b5d67 Catch@101b5d67

void Catch_101b5d67(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b5d7b Catch@101b5d7b

void Catch_101b5d7b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::GetCreatureID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5da0 FUN_101b5da0

undefined4 FUN_101b5da0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


// ==== 101b5de7 Catch@101b5de7

void Catch_101b5de7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b5dfb Catch@101b5dfb

void Catch_101b5dfb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::GetCurHP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5e20 FUN_101b5e20

undefined4 FUN_101b5e20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x14);
}


// ==== 101b5e67 Catch@101b5e67

void Catch_101b5e67(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b5e7b Catch@101b5e7b

void Catch_101b5e7b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::GetMaxHP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5ea0 FUN_101b5ea0

undefined4 FUN_101b5ea0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 101b5ee7 Catch@101b5ee7

void Catch_101b5ee7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b5efb Catch@101b5efb

void Catch_101b5efb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::GetCurMP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5f20 FUN_101b5f20

undefined4 FUN_101b5f20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1c);
}


// ==== 101b5f67 Catch@101b5f67

void Catch_101b5f67(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b5f7b Catch@101b5f7b

void Catch_101b5f7b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::GetMaxMP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b5fa0 FUN_101b5fa0

undefined4 FUN_101b5fa0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x20);
}


// ==== 101b5fe7 Catch@101b5fe7

void Catch_101b5fe7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b5ffb Catch@101b5ffb

void Catch_101b5ffb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::GetCurCP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6020 FUN_101b6020

undefined4 FUN_101b6020(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x24);
}


// ==== 101b6067 Catch@101b6067

void Catch_101b6067(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b607b Catch@101b607b

void Catch_101b607b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::GetMaxCP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b60a0 FUN_101b60a0

undefined4 FUN_101b60a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x28);
}


// ==== 101b60e7 Catch@101b60e7

void Catch_101b60e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b60fb Catch@101b60fb

void Catch_101b60fb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::GetClassID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6120 FUN_101b6120

undefined4 FUN_101b6120(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x2c);
}


// ==== 101b6167 Catch@101b6167

void Catch_101b6167(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b617b Catch@101b617b

void Catch_101b617b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::GetLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b61a0 FUN_101b61a0

void FUN_101b61a0(FString *param_1)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219d20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=(in_ECX,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101b61f7 Catch@101b61f7

void Catch_101b61f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b620b Catch@101b620b

void Catch_101b620b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::SetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6230 FUN_101b6230

void FUN_101b6230(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  return;
}


// ==== 101b6283 Catch@101b6283

void Catch_101b6283(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b6297 Catch@101b6297

void Catch_101b6297(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::SetCreatureID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b62c0 FUN_101b62c0

void FUN_101b62c0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  return;
}


// ==== 101b6313 Catch@101b6313

void Catch_101b6313(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b6327 Catch@101b6327

void Catch_101b6327(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::SetCurHP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6350 FUN_101b6350

void FUN_101b6350(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = param_1;
  return;
}


// ==== 101b63a3 Catch@101b63a3

void Catch_101b63a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b63b7 Catch@101b63b7

void Catch_101b63b7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::SetMaxHP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b63e0 FUN_101b63e0

void FUN_101b63e0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  return;
}


// ==== 101b6433 Catch@101b6433

void Catch_101b6433(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b6447 Catch@101b6447

void Catch_101b6447(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::SetCurMP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6470 FUN_101b6470

void FUN_101b6470(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c) = param_1;
  return;
}


// ==== 101b64c3 Catch@101b64c3

void Catch_101b64c3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b64d7 Catch@101b64d7

void Catch_101b64d7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::SetMaxMP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6500 FUN_101b6500

void FUN_101b6500(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x20) = param_1;
  return;
}


// ==== 101b6553 Catch@101b6553

void Catch_101b6553(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b6567 Catch@101b6567

void Catch_101b6567(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::SetCurCP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6590 FUN_101b6590

void FUN_101b6590(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x24) = param_1;
  return;
}


// ==== 101b65e3 Catch@101b65e3

void Catch_101b65e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b65f7 Catch@101b65f7

void Catch_101b65f7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::SetMaxCP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6620 FUN_101b6620

void FUN_101b6620(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x28) = param_1;
  return;
}


// ==== 101b6673 Catch@101b6673

void Catch_101b6673(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b6687 Catch@101b6687

void Catch_101b6687(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::SetClassID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b66b0 FUN_101b66b0

void FUN_101b66b0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2c) = param_1;
  return;
}


// ==== 101b6703 Catch@101b6703

void Catch_101b6703(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b6717 Catch@101b6717

void Catch_101b6717(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::SetLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6740 FUN_101b6740

void FUN_101b6740(void)

{
  undefined4 uVar1;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10219e69;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101b5c90(local_28);
  local_8._0_1_ = 1;
  FUN_101b61a0(uVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  uVar1 = FUN_101b5d20();
  FUN_101b6230(uVar1);
  uVar1 = FUN_101b5da0();
  FUN_101b62c0(uVar1);
  uVar1 = FUN_101b5e20();
  FUN_101b6350(uVar1);
  uVar1 = FUN_101b5ea0();
  FUN_101b63e0(uVar1);
  uVar1 = FUN_101b5f20();
  FUN_101b6470(uVar1);
  uVar1 = FUN_101b5fa0();
  FUN_101b6500(uVar1);
  uVar1 = FUN_101b6020();
  FUN_101b6590(uVar1);
  uVar1 = FUN_101b60a0();
  FUN_101b6620(uVar1);
  uVar1 = FUN_101b6120();
  FUN_101b66b0(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 101b6838 Catch@101b6838

void Catch_101b6838(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b684c Catch@101b684c

void Catch_101b684c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::operator =");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6870 FUN_101b6870

void FUN_101b6870(void)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10219e99;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FString::FString(in_ECX);
  local_8 = 1;
  FUN_101b5be0();
  ExceptionList = local_10;
  return;
}


// ==== 101b68d3 Catch@101b68d3

void Catch_101b68d3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b68e7 Catch@101b68e7

void Catch_101b68e7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPartyMemberInfo::NCPartyMemberInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6910 FUN_101b6910

void FUN_101b6910(int param_1,int param_2)

{
  int iVar1;
  FL2QuestData *pFVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219ec0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 4) != param_1)) || (*(int *)(iVar1 + 8) != param_2)) {
    pFVar2 = FL2GameData::GetQuestData((FL2GameData *)GL2GameData_exref,param_1,param_2);
    if (pFVar2 != (FL2QuestData *)0x0) {
      *(FL2QuestData **)(in_ECX + 4) = pFVar2;
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b699e Catch@101b699e

void Catch_101b699e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b69b2 Catch@101b69b2

void Catch_101b69b2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NQuestDataManager::GetQuestData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b69d0 FUN_101b69d0

void FUN_101b69d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = TSingleton<NQuestDataManager>::vftable;
  DAT_10394344 = 0;
  return;
}


// ==== 101b69f0 FUN_101b69f0

void FUN_101b69f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = TSingleton<NQuestDataManager>::vftable;
  DAT_10394344 = 0;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 101b6a20 FUN_101b6a20

void FUN_101b6a20(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = TSingleton<NQuestDataManager>::vftable;
  DAT_10394344 = in_ECX;
  *in_ECX = NQuestDataManager::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 101b6a89 Catch@101b6a89

void Catch_101b6a89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b6a9d Catch@101b6a9d

void Catch_101b6a9d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NQuestDataManager::NQuestDataManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6ac0 FUN_101b6ac0

void FUN_101b6ac0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10219f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  *in_ECX = TSingleton<NQuestDataManager>::vftable;
  DAT_10394344 = 0;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 101b6b30 FUN_101b6b30

undefined4 FUN_101b6b30(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10219f4b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 8) == 0) {
    puVar3 = (undefined4 *)FUN_10004ed0(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(GL2GameData_exref + 0x3d44);
      *puVar3 = uVar1;
      puVar3[1] = uVar1;
      puVar3[2] = 0;
      puVar3[3] = 0;
    }
    local_8 = local_8 & 0xffffff00;
    *(undefined4 **)(in_ECX + 8) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      appFailAssert("m_pIterator",".\\Src\\NQuestDataManager.cpp",0x26);
    }
  }
  *(undefined4 *)(*(int *)(in_ECX + 8) + 8) = 0;
  iVar2 = *(int *)(in_ECX + 8);
  if (*(int *)(iVar2 + 8) < (*(int **)(iVar2 + 4))[1]) {
    ExceptionList = local_10;
    return *(undefined4 *)(**(int **)(iVar2 + 4) + 4 + *(int *)(iVar2 + 8) * 0xc);
  }
  ExceptionList = local_10;
  return 0xffffffff;
}


// ==== 101b6bff Catch@101b6bff

void Catch_101b6bff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b6c13 Catch@101b6c13

void Catch_101b6c13(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NQuestDataManager::GetFirstID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6c30 FUN_101b6c30

int FUN_101b6c30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 8);
  if (iVar2 != 0) {
    iVar2 = *(int *)(**(int **)(iVar2 + 4) + 4 + *(int *)(iVar2 + 8) * 0xc);
    iVar4 = iVar2;
    while (iVar2 == iVar4) {
      piVar1 = (int *)(*(int *)(in_ECX + 8) + 8);
      *piVar1 = *piVar1 + 1;
      iVar3 = *(int *)(in_ECX + 8);
      if (*(int *)(*(int *)(iVar3 + 4) + 4) <= *(int *)(iVar3 + 8)) break;
      iVar4 = *(int *)(**(int **)(iVar3 + 4) + 4 + *(int *)(iVar3 + 8) * 0xc);
    }
    if (*(int *)(*(int *)(in_ECX + 8) + 8) < *(int *)(*(int *)(*(int *)(in_ECX + 8) + 4) + 4)) {
      return iVar4;
    }
  }
  return -1;
}


// ==== 101b6cce Catch@101b6cce

void Catch_101b6cce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b6ce2 Catch@101b6ce2

void Catch_101b6ce2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NQuestDataManager::GetNextID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b6d00 FUN_101b6d00

void FUN_101b6d00(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10219fcc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  local_4 = 0;
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  FString::FString((FString *)(in_ECX + 6),(FString *)(param_1 + 6));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 9),(FString *)(param_1 + 9));
  local_4._0_1_ = 2;
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  FString::FString((FString *)(in_ECX + 0x11),(FString *)(param_1 + 0x11));
  local_4 = CONCAT31(local_4._1_3_,3);
  FString::FString((FString *)(in_ECX + 0x14),(FString *)(param_1 + 0x14));
  ExceptionList = local_c;
  return;
}


// ==== 101b6de0 FUN_101b6de0

void FUN_101b6de0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1021a02c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 3;
  FString::~FString((FString *)(in_ECX + 0x50));
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x44));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x24));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x18));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 101b6e70 FUN_101b6e70

void FUN_101b6e70(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1021a050;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar5 = 0; (param_2 != 0 && (*(short *)(param_2 + iVar5 * 2) != 0)); iVar5 = iVar5 + 1) {
  }
  iVar8 = 0;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  iVar7 = 0;
LAB_101b6ed0:
  do {
    while( true ) {
      if (iVar5 <= iVar7) {
        *(undefined2 *)(param_1 + iVar8 * 2) = 0;
        ExceptionList = local_10;
        return;
      }
      sVar1 = *(short *)(param_2 + iVar7 * 2);
      if (sVar1 == 0x24) break;
      if (sVar1 == 0x25) {
        iVar6 = FUN_100650f0(*(undefined2 *)(param_1 + -2 + iVar8 * 2));
        sVar1 = *(short *)(param_2 + 2 + iVar7 * 2);
        if (sVar1 == -0x388c) {
          if (iVar6 == 0) {
            *(undefined2 *)(param_1 + iVar8 * 2) = 0xc774;
          }
          else {
            *(undefined2 *)(param_1 + iVar8 * 2) = 0xac00;
          }
LAB_101b7079:
          iVar8 = iVar8 + 1;
        }
        else {
          if (sVar1 == -0x38bc) {
            if (iVar6 == 0) {
              *(undefined2 *)(param_1 + iVar8 * 2) = 0xc744;
            }
            else {
              *(undefined2 *)(param_1 + iVar8 * 2) = 0xb97c;
            }
            goto LAB_101b7079;
          }
          if (sVar1 == -0x38c0) {
            if (iVar6 == 0) {
              *(undefined2 *)(param_1 + iVar8 * 2) = 0xc740;
            }
            else {
              *(undefined2 *)(param_1 + iVar8 * 2) = 0xb294;
            }
            goto LAB_101b7079;
          }
          if (sVar1 == -0x39c0) {
            if (iVar6 == 0) {
              *(undefined2 *)(param_1 + iVar8 * 2) = 0xacfc;
            }
            else {
              *(undefined2 *)(param_1 + iVar8 * 2) = 0xc640;
            }
            goto LAB_101b7079;
          }
        }
        iVar7 = iVar7 + 1;
LAB_101b7085:
        iVar7 = iVar7 + 1;
      }
      else {
        *(short *)(param_1 + iVar8 * 2) = sVar1;
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 1;
      }
    }
    if ((bVar2) || (param_3 == 0)) {
      if ((bVar3) || (param_4 == 0)) {
        if ((bVar4) || (param_5 == 0)) goto LAB_101b7085;
        for (iVar6 = 0; sVar1 = *(short *)(param_5 + iVar6 * 2), sVar1 != 0; iVar6 = iVar6 + 1) {
          *(short *)(param_1 + iVar8 * 2) = sVar1;
          iVar8 = iVar8 + 1;
        }
        bVar4 = true;
        iVar7 = iVar7 + 3;
      }
      else {
        for (iVar6 = 0; sVar1 = *(short *)(param_4 + iVar6 * 2), sVar1 != 0; iVar6 = iVar6 + 1) {
          *(short *)(param_1 + iVar8 * 2) = sVar1;
          iVar8 = iVar8 + 1;
        }
        bVar3 = true;
        iVar7 = iVar7 + 3;
      }
      goto LAB_101b6ed0;
    }
    for (iVar6 = 0; sVar1 = *(short *)(param_3 + iVar6 * 2), sVar1 != 0; iVar6 = iVar6 + 1) {
      *(short *)(param_1 + iVar8 * 2) = sVar1;
      iVar8 = iVar8 + 1;
    }
    bVar2 = true;
    iVar7 = iVar7 + 3;
  } while( true );
}


// ==== 101b70b7 Catch@101b70b7

void Catch_101b70b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 101b70cb Catch@101b70cb

void Catch_101b70cb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NSystemMessageManager::MakeFullSystemMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b70f0 FUN_101b70f0

void FUN_101b70f0(FString *param_1,FString *param_2,FString *param_3,FString *param_4,
                 FString *param_5)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  FString *this;
  int iVar5;
  undefined4 uVar6;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1021a079;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  iVar5 = 0;
  local_8 = 0;
LAB_101b7123:
  do {
    local_18 = iVar5;
    iVar2 = FString::Len(param_2);
    if (iVar2 <= iVar5) {
      ExceptionList = local_10;
      return;
    }
    puVar3 = FString::operator[](param_2,iVar5);
    if (*puVar3 == 0x24) {
      iVar2 = iVar5 + 2;
      iVar4 = FString::Len(param_2);
      if (iVar4 <= iVar2) goto LAB_101b723d;
      puVar3 = FString::operator[](param_2,iVar5 + 1);
      if (*puVar3 == 0x73) {
        puVar3 = FString::operator[](param_2,iVar2);
        if (*puVar3 == 0x31) {
          iVar4 = FString::operator_int(param_3);
          if (iVar4 != 0) {
            FString::operator+=(param_1,param_3);
            iVar5 = iVar5 + 3;
            goto LAB_101b7123;
          }
        }
      }
      puVar3 = FString::operator[](param_2,iVar5 + 1);
      if (*puVar3 == 0x73) {
        puVar3 = FString::operator[](param_2,iVar2);
        if (*puVar3 == 0x32) {
          iVar4 = FString::operator_int(param_4);
          if (iVar4 != 0) {
            FString::operator+=(param_1,param_4);
            iVar5 = iVar5 + 3;
            goto LAB_101b7123;
          }
        }
      }
      puVar3 = FString::operator[](param_2,iVar5 + 1);
      if (*puVar3 == 0x73) {
        puVar3 = FString::operator[](param_2,iVar2);
        if (*puVar3 == 0x33) {
          iVar2 = FString::operator_int(param_5);
          if (iVar2 != 0) {
            FString::operator+=(param_1,param_5);
            iVar5 = iVar5 + 3;
            goto LAB_101b7123;
          }
        }
      }
LAB_101b73cd:
      iVar5 = iVar5 + 1;
      goto LAB_101b7123;
    }
LAB_101b723d:
    puVar3 = FString::operator[](param_2,iVar5);
    if (*puVar3 != 0x25) {
LAB_101b73b7:
      puVar3 = FString::operator[](param_2,iVar5);
      FString::operator+=(param_1,*puVar3);
      goto LAB_101b73cd;
    }
    iVar2 = iVar5 + 1;
    iVar4 = FString::Len(param_2);
    if (iVar4 <= iVar2) goto LAB_101b73b7;
    uVar6 = 1;
    this = (FString *)FString::Right(param_1,(int)local_2c);
    local_8._0_1_ = 1;
    puVar3 = FString::operator[](this,0);
    uVar1 = *puVar3;
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_2c);
    iVar4 = FUN_100650f0(uVar1,uVar6);
    puVar3 = FString::operator[](param_2,iVar2);
    if (*puVar3 == 0xc774) {
      if (iVar4 == 0) {
        FString::operator+=(param_1,0xc774);
        iVar5 = iVar5 + 2;
      }
      else {
        FString::operator+=(param_1,0xac00);
        iVar5 = iVar5 + 2;
      }
      goto LAB_101b7123;
    }
    puVar3 = FString::operator[](param_2,iVar2);
    if (*puVar3 == 0xc744) {
      if (iVar4 == 0) {
        FString::operator+=(param_1,0xc744);
        iVar5 = iVar5 + 2;
      }
      else {
        FString::operator+=(param_1,0xb97c);
        iVar5 = iVar5 + 2;
      }
      goto LAB_101b7123;
    }
    puVar3 = FString::operator[](param_2,iVar2);
    if (*puVar3 == 0xc740) {
      if (iVar4 == 0) {
        FString::operator+=(param_1,0xc740);
        iVar5 = iVar5 + 2;
      }
      else {
        FString::operator+=(param_1,0xb294);
        iVar5 = iVar5 + 2;
      }
      goto LAB_101b7123;
    }
    puVar3 = FString::operator[](param_2,iVar2);
    if (*puVar3 == 0xc640) {
      if (iVar4 != 0) {
        FString::operator+=(param_1,0xc640);
        iVar5 = iVar5 + 2;
        goto LAB_101b7123;
      }
      FString::operator+=(param_1,0xacfc);
    }
    iVar5 = iVar5 + 2;
  } while( true );
}


// ==== 101b73f0 Catch@101b73f0

void Catch_101b73f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b7404 Catch@101b7404

void Catch_101b7404(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NSystemMessageManager::MakeFullSystemMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b7430 FUN_101b7430

void FUN_101b7430(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*in_ECX);
    *in_ECX = 0;
  }
  in_ECX[1] = 0;
  return;
}


// ==== 101b7460 FUN_101b7460

void FUN_101b7460(ushort *param_1)

{
  longlong lVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 *in_ECX;
  
  if (param_1 != (ushort *)0x0) {
    iVar2 = appStrlen(param_1);
    lVar1 = (ulonglong)(iVar2 + 1) * 2;
    puVar3 = (ushort *)
             (**(code **)**(undefined4 **)GMalloc_exref)
                       ((uint)lVar1 | -(uint)((int)((ulonglong)lVar1 >> 0x20) != 0),&DAT_1022f8a0);
    *in_ECX = puVar3;
    appStrcpy(puVar3,param_1);
    iVar2 = appStrlen((ushort *)*in_ECX);
    in_ECX[1] = iVar2;
  }
  return;
}


// ==== 101b74c0 FUN_101b74c0

void FUN_101b74c0(undefined4 param_1)

{
  ushort local_804 [1024];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_804;
  appSprintf(local_804,(ushort *)&DAT_10233718,param_1);
  FUN_101b7460(local_804);
  __security_check_cookie(local_4 ^ (uint)local_804);
  return;
}


// ==== 101b7520 FUN_101b7520

void FUN_101b7520(undefined4 param_1,undefined4 param_2)

{
  ushort local_804 [1024];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_804;
  appSprintf(local_804,(ushort *)L"%I64d",param_1,param_2);
  FUN_101b7460(local_804);
  __security_check_cookie(local_4 ^ (uint)local_804);
  return;
}


// ==== 101b7580 FUN_101b7580

void FUN_101b7580(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = TSingleton<NSystemMessageManager>::vftable;
  DAT_1039ea64 = 0;
  return;
}


// ==== 101b75a0 FUN_101b75a0

void FUN_101b75a0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = TSingleton<NSystemMessageManager>::vftable;
  DAT_1039ea64 = 0;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 101b75d0 FUN_101b75d0

void FUN_101b75d0(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uStack_c0;
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
  FString local_58 [16];
  FString local_48 [12];
  FString local_3c [16];
  int local_2c;
  FString local_28 [4];
  undefined4 local_24;
  undefined4 local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_78 = &LAB_1021a102;
  local_7c = ExceptionList;
  uStack_c0 = DAT_103554c4 ^ (uint)local_70;
  local_80 = (undefined1 *)&uStack_c0;
  ExceptionList = &local_7c;
  local_74 = 0;
  FUN_1003fa00(param_1);
  local_74._0_1_ = 1;
  FString::FString(local_3c);
  local_74._0_1_ = 2;
  local_10 = 0;
  local_c = 0;
  FString::FString(local_28,(ushort *)L"Type");
  local_74._0_1_ = 3;
  FUN_100404d0(local_28,&param_1);
  local_74._0_1_ = 2;
  FString::~FString(local_28);
  switch(param_1) {
  case 0:
  case 7:
    FString::FString(local_8c,(ushort *)L"param1");
    local_74._0_1_ = 4;
    FUN_100406e0(local_8c,local_3c);
    local_74._0_1_ = 2;
    FString::~FString(local_8c);
    puVar1 = FString::operator*(local_3c);
    FUN_101b7460(puVar1);
    break;
  case 1:
    FString::FString(local_64,(ushort *)L"param1");
    local_74._0_1_ = 5;
    FUN_100404d0(local_64,&local_8);
    local_74._0_1_ = 2;
    FString::~FString(local_64);
    FUN_101b74c0(local_8);
    break;
  case 2:
    FString::FString(local_a4,(ushort *)L"param1");
    local_74._0_1_ = 6;
    FUN_100404d0(local_a4,&local_2c);
    local_74._0_1_ = 2;
    FString::~FString(local_a4);
    puVar1 = FL2GameData::GetNpcName((FL2GameData *)GL2GameData_exref,local_2c + -1000000);
    FUN_101b7460(puVar1);
    break;
  case 3:
    FString::FString(local_48,(ushort *)L"param1");
    local_74._0_1_ = 7;
    FUN_100404d0(local_48,&local_8);
    local_74._0_1_ = 2;
    FString::~FString(local_48);
    uVar2 = FUN_101647b0(local_8);
    FUN_101b7460(uVar2);
    break;
  case 4:
    FString::FString(local_58,(ushort *)L"param1");
    local_74._0_1_ = 8;
    FUN_100404d0(local_58,local_20);
    local_74._0_1_ = 2;
    FString::~FString(local_58);
    FString::FString(local_70,(ushort *)L"param2");
    local_74._0_1_ = 9;
    FUN_100404d0(local_70,&local_8);
    local_74._0_1_ = 2;
    FString::~FString(local_70);
    uVar2 = FUN_10164900(local_20[0],local_8);
    FUN_101b7460(uVar2);
    break;
  case 5:
    FString::FString(local_98,(ushort *)L"param1");
    local_74._0_1_ = 10;
    FUN_100404d0(local_98,local_20);
    local_74._0_1_ = 2;
    FString::~FString(local_98);
    uVar2 = FUN_10145f50(local_20[0]);
    FUN_101b7460(uVar2);
    break;
  case 6:
    FString::FString(local_b0,(ushort *)L"param1");
    local_74._0_1_ = 0xb;
    FUN_100407b0(local_b0,&local_24);
    local_74._0_1_ = 2;
    FString::~FString(local_b0);
    uVar3 = FUN_10063120(local_24,local_20[0]);
    FUN_101b7520(uVar3);
  }
  FUN_101384d0(&local_10);
  local_74._0_1_ = 1;
  FString::~FString(local_3c);
  local_74 = (uint)local_74._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_7c;
  return;
}


// ==== 101b78dc Catch@101b78dc

void Catch_101b78dc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x40) = *(undefined4 *)(unaff_EBP + 0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x40,&DAT_102a47f0);
}


// ==== 101b78f0 Catch@101b78f0

void Catch_101b78f0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NSystemMessageManager::AddSystemMessageParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b7930 FUN_101b7930

void FUN_101b7930(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1021a129;
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
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 101b79d0 FUN_101b79d0

void FUN_101b79d0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1021a16c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = TSingleton<NSystemMessageManager>::vftable;
  local_8 = 0;
  DAT_1039ea64 = in_ECX;
  *in_ECX = NSystemMessageManager::vftable;
  FArray::FArray((FArray *)(in_ECX + 1));
  ExceptionList = local_10;
  return;
}


// ==== 101b7a48 Catch@101b7a48

void Catch_101b7a48(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b7a5c Catch@101b7a5c

void Catch_101b7a5c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NSystemMessageManager::NSystemMessageManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b7a80 FUN_101b7a80

void FUN_101b7a80(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1021a1a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_101b7930(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = TSingleton<NSystemMessageManager>::vftable;
  DAT_1039ea64 = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101b7af0 FUN_101b7af0

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


// ==== 101b7c6d Catch@101b7c6d

void Catch_101b7c6d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101b7c81 Catch@101b7c81

void Catch_101b7c81(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NSystemMessageManager::AddSystemMessageParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b7cd0 FUN_101b7cd0

void FUN_101b7cd0(L2ParamStack *param_1,int param_2,ushort *param_3,int param_4)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  L2ParamStack *this;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  ushort *puVar7;
  int in_ECX;
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
  local_a3c = param_1;
  local_a38 = param_3;
  iVar9 = 0;
  local_a00 = 0;
  local_a14 = in_ECX;
  local_8 = uStack_c38;
  pvVar4 = L2ParamStack::Top(param_1);
  local_808 = 0;
  local_a20 = pvVar4;
  _memset(local_806,0,0x7fe);
  local_a10 = 0;
  local_a1c = -1;
  local_a24 = *(int *)(in_ECX + 8);
  if ((param_4 != 0) && (pvVar4 == (void *)0x0)) {
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
    if (param_4 == 0) {
      if (param_2 != 0) goto LAB_101b81cf;
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
        in_ECX = local_a14;
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
        in_ECX = local_a14;
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
      if (param_2 != 0) {
LAB_101b81cf:
        if (local_a38 != (ushort *)0x0) {
          appStrcpy(local_a38,&local_808);
        }
      }
      local_a00._0_1_ = 1;
      FUN_101b6de0();
      in_ECX = local_a14;
    }
  }
  for (iVar9 = 0; local_a40 = iVar9, iVar9 < local_a24; iVar9 = iVar9 + 1) {
    FUN_101b7430();
  }
  for (local_a28 = 0; local_a28 < *(int *)(in_ECX + 8); local_a28 = local_a28 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 4),8,0);
  local_a00 = (uint)local_a00._1_3_ << 8;
  FUN_1003fff0();
  local_a00 = 0xffffffff;
LAB_101b7d89:
  ExceptionList = local_a08;
  __security_check_cookie(local_8 ^ (uint)local_9fc);
  return;
}


// ==== 101b839e Catch@101b839e

void Catch_101b839e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_102a47f0);
}


// ==== 101b83b2 Catch@101b83b2

void Catch_101b83b2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NSystemMessageManager::EndSystemMessageParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b83d0 FUN_101b83d0

void FUN_101b83d0(L2ParamStack *param_1,ushort *param_2)

{
  int *piVar1;
  ushort uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  uint uStack_8bc;
  FString local_8a8 [92];
  int local_84c;
  int local_844;
  ushort *local_840;
  ushort *local_83c;
  int local_838;
  int local_834;
  undefined4 local_830;
  undefined4 local_82c;
  void *local_828;
  int local_824;
  int local_820;
  int local_81c;
  undefined1 *local_818;
  void *local_814;
  undefined1 *puStack_810;
  uint local_80c;
  ushort local_808;
  undefined1 local_806 [2046];
  uint local_8;
  
  puStack_810 = &LAB_1021a26b;
  local_814 = ExceptionList;
  uStack_8bc = DAT_103554c4 ^ (uint)&local_808;
  local_818 = (undefined1 *)&uStack_8bc;
  ExceptionList = &local_814;
  local_840 = param_2;
  local_80c = 0;
  local_820 = in_ECX;
  local_8 = uStack_8bc;
  local_83c = L2ParamStack::Top(param_1);
  local_828 = L2ParamStack::Top(param_1);
  for (local_838 = 0; local_838 < (int)local_828; local_838 = local_838 + 1) {
    local_830 = 0;
    local_82c = 0;
    pvVar3 = L2ParamStack::Top(param_1);
    switch(pvVar3) {
    case (void *)0x0:
      puVar6 = L2ParamStack::Top(param_1);
      break;
    case (void *)0x1:
      pvVar3 = L2ParamStack::Top(param_1);
      FUN_101b74c0(pvVar3);
      goto switchD_101b8462_default;
    case (void *)0x2:
      pvVar3 = L2ParamStack::Top(param_1);
      puVar6 = FL2GameData::GetNpcName((FL2GameData *)GL2GameData_exref,(int)pvVar3 + -1000000);
      break;
    case (void *)0x3:
      pvVar3 = L2ParamStack::Top(param_1);
      puVar6 = (ushort *)FUN_101647b0(pvVar3);
      break;
    case (void *)0x4:
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      uVar5 = FUN_10164900(pvVar3,pvVar4);
      FUN_101b7460(uVar5);
      in_ECX = local_820;
      goto switchD_101b8462_default;
    case (void *)0x5:
      pvVar3 = L2ParamStack::Top(param_1);
      puVar6 = (ushort *)FUN_10145f50(pvVar3);
      break;
    default:
      goto switchD_101b8462_default;
    }
    FUN_101b7460(puVar6);
switchD_101b8462_default:
    FUN_101384d0(&local_830);
  }
  local_808 = 0;
  _memset(local_806,0,0x7fe);
  iVar9 = 0;
  local_81c = 0;
  local_834 = -1;
  local_828 = *(void **)(in_ECX + 8);
  if ((*(int *)(GL2GameData_exref + (int)local_83c * 0x5c + 0x240e8) != 0) &&
     (local_83c < (ushort *)0xbb8)) {
    FUN_101b6d00(GL2GameData_exref + (int)local_83c * 0x5c + 0x240e8);
    local_80c = CONCAT31(local_80c._1_3_,1);
    local_83c = FString::operator*(local_8a8);
    iVar8 = 0;
    puVar6 = local_83c;
LAB_101b8570:
    do {
      local_824 = iVar8;
      iVar7 = FString::Len(local_8a8);
      if (iVar7 <= iVar8) goto LAB_101b8798;
      uVar2 = puVar6[iVar8];
      if (uVar2 != 0x24) {
        if (uVar2 != 0x25) {
          (&local_808)[iVar9] = uVar2;
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + 1;
          local_81c = iVar9;
          goto LAB_101b8570;
        }
        piVar1 = (int *)(*(int *)(local_820 + 4) + local_834 * 8);
        if (*piVar1 == 0) {
          uVar2 = puVar6[iVar8 + 1];
          if (uVar2 == 0xc774) {
LAB_101b871a:
            (&local_808)[iVar9] = 0xc774;
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 2;
            local_81c = iVar9;
            goto LAB_101b8570;
          }
          if (uVar2 == 0xc744) {
            (&local_808)[iVar9] = 0xb97c;
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 2;
            local_81c = iVar9;
            goto LAB_101b8570;
          }
          if (uVar2 == 0xc740) {
            (&local_808)[iVar9] = 0xb294;
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 2;
            local_81c = iVar9;
            goto LAB_101b8570;
          }
          if (uVar2 == 0xc640) {
LAB_101b877d:
            (&local_808)[iVar9] = 0xc640;
            iVar9 = iVar9 + 1;
            local_81c = iVar9;
          }
        }
        else {
          iVar7 = FUN_100650f0(*(undefined2 *)
                                (*(int *)(*(int *)(local_820 + 4) + local_834 * 8) + -2 +
                                piVar1[1] * 2));
          uVar2 = puVar6[iVar8 + 1];
          if (uVar2 == 0xc774) {
            if (iVar7 == 0) goto LAB_101b871a;
            (&local_808)[iVar9] = 0xac00;
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 2;
            local_81c = iVar9;
            goto LAB_101b8570;
          }
          if (uVar2 == 0xc744) {
            if (iVar7 == 0) {
              (&local_808)[iVar9] = 0xc744;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 2;
              local_81c = iVar9;
            }
            else {
              (&local_808)[iVar9] = 0xb97c;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 2;
              local_81c = iVar9;
            }
            goto LAB_101b8570;
          }
          if (uVar2 == 0xc740) {
            if (iVar7 == 0) {
              (&local_808)[iVar9] = 0xc740;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 2;
              local_81c = iVar9;
            }
            else {
              (&local_808)[iVar9] = 0xb294;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 2;
              local_81c = iVar9;
            }
            goto LAB_101b8570;
          }
          if (uVar2 == 0xc640) {
            if (iVar7 != 0) goto LAB_101b877d;
            (&local_808)[iVar9] = 0xacfc;
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 2;
            local_81c = iVar9;
            goto LAB_101b8570;
          }
        }
        iVar8 = iVar8 + 2;
        goto LAB_101b8570;
      }
      iVar7 = puVar6[iVar8 + 2] - 0x31;
      local_824 = iVar8 + 2;
      if ((iVar7 < (int)local_828) &&
         (puVar6 = *(ushort **)(*(int *)(local_820 + 4) + iVar7 * 8), puVar6 != (ushort *)0x0)) {
        appStrcpy(&local_808 + iVar9,puVar6);
        iVar9 = iVar9 + *(int *)(*(int *)(local_820 + 4) + 4 + iVar7 * 8);
        local_81c = iVar9;
      }
      iVar8 = iVar8 + 3;
      puVar6 = local_83c;
      local_834 = iVar7;
    } while( true );
  }
LAB_101b87c5:
  pvVar3 = local_828;
  for (iVar9 = 0; local_844 = iVar9, iVar9 < (int)pvVar3; iVar9 = iVar9 + 1) {
    FUN_101b7430();
  }
  for (local_84c = 0; local_84c < *(int *)(in_ECX + 8); local_84c = local_84c + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 4),8,0);
  local_80c = 0xffffffff;
  ExceptionList = local_814;
  __security_check_cookie(local_8 ^ (uint)&local_808);
  return;
LAB_101b8798:
  (&local_808)[iVar9] = 0;
  appStrcpy(local_840,&local_808);
  local_80c = local_80c & 0xffffff00;
  FUN_101b6de0();
  in_ECX = local_820;
  goto LAB_101b87c5;
}


// ==== 101b8828 Catch@101b8828

void Catch_101b8828(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_102a47f0);
}


// ==== 101b883c Catch@101b883c

void Catch_101b883c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NSystemMessageManager::SetSystemMessageParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b8870 FUN_101b8870

void FUN_101b8870(byte param_1)

{
  FUN_101b7a80();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 101b88a0 FUN_101b88a0

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


// ==== 101b8960 Catch@101b8960

void Catch_101b8960(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b8974 Catch@101b8974

void Catch_101b8974(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NSystemMessageManager::GetSystemMsgWithParamNumber");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b89a0 FUN_101b89a0

void FUN_101b89a0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = 0;
  return;
}


// ==== 101b89f2 Catch@101b89f2

void Catch_101b89f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b8a06 Catch@101b8a06

void Catch_101b8a06(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTooltipManager::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b8a30 FUN_101b8a30

void FUN_101b8a30(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
  return;
}


// ==== 101b8a7f Catch@101b8a7f

void Catch_101b8a7f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b8a93 Catch@101b8a93

void Catch_101b8a93(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTooltipManager::ResetItemLanguage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b8ab0 FUN_101b8ab0

undefined4 FUN_101b8ab0(FString *param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  int *in_ECX;
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
  if (in_ECX[6] != iVar1) {
    FUN_10054cc0();
  }
  iVar1 = FUN_100541c0();
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (param_2 != 0) {
    puVar2 = FString::operator*(param_1);
    if (puVar2 != (ushort *)0x0) {
      iVar1 = FString::Len(param_1);
      if (0 < iVar1) {
        FUN_1003f970();
        local_8._0_1_ = 1;
        FString::FString(local_34,(ushort *)L"SourceType");
        local_8._0_1_ = 2;
        FUN_10040090(local_34,0);
        local_8._0_1_ = 1;
        FString::~FString(local_34);
        if (param_3 == 0) {
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
        puVar2 = FString::operator*(param_1);
        FString::FString(local_34,puVar2);
        local_8._0_1_ = 7;
        FString::FString(local_40,(ushort *)L"Text");
        local_8._0_1_ = 8;
        FUN_10040230(local_40,local_34);
        local_8._0_1_ = 7;
        FString::~FString(local_40);
        local_8._0_1_ = 1;
        FString::~FString(local_34);
        *in_ECX = 0;
        puVar4 = local_28;
        uVar3 = 0xb68;
        FUN_10005c30(0xb68,puVar4);
        FUN_100d1790(uVar3,puVar4);
        if (*in_ECX != 0) {
          FUN_10054f20(in_ECX + 1);
          FUN_100542c0(in_ECX[6]);
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


// ==== 101b8ced Catch@101b8ced

void Catch_101b8ced(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b8d01 Catch@101b8d01

void Catch_101b8d01(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTooltipManager::MakeTooltipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b8d20 FUN_101b8d20

undefined4 FUN_101b8d20(int param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1021a3ac;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10054240();
  if (in_ECX[6] != iVar1) {
    FUN_10054cc0();
  }
  iVar1 = FUN_100541c0();
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if ((param_2 != 0) && (0 < param_1)) {
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,(ushort *)L"SourceType");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,0);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_40,(ushort *)L"Text");
    local_8._0_1_ = 3;
    FString::FString(local_34,(ushort *)L"TooltipType");
    local_8._0_1_ = 4;
    FUN_10040230(local_34,local_40);
    local_8._0_1_ = 3;
    FString::~FString(local_34);
    local_8._0_1_ = 1;
    FString::~FString(local_40);
    FString::FString(local_40,(ushort *)&DAT_1025ae84);
    local_8._0_1_ = 5;
    FUN_10040090(local_40,param_1);
    local_8._0_1_ = 1;
    FString::~FString(local_40);
    *in_ECX = 0;
    puVar3 = local_28;
    uVar2 = 0xb68;
    FUN_10005c30(0xb68,puVar3);
    FUN_100d1790(uVar2,puVar3);
    if (*in_ECX != 0) {
      FUN_10054f20(in_ECX + 1);
      FUN_100542c0(in_ECX[6]);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
      ExceptionList = local_10;
      return 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101b8ed0 Catch@101b8ed0

void Catch_101b8ed0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b8ee4 Catch@101b8ee4

void Catch_101b8ee4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTooltipManager::MakeTooltipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b8f10 FUN_101b8f10

undefined4 FUN_101b8f10(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *in_ECX;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1021a3ea;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10054240();
  if (in_ECX[6] != iVar1) {
    FUN_10054cc0();
  }
  if ((param_3 != 0) && (iVar1 = FUN_10054240(), in_ECX[6] != iVar1)) {
    FUN_10054cc0();
  }
  iVar1 = FUN_100541c0();
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if ((param_3 != 0) && (iVar1 = FUN_100541c0(), iVar1 != 0)) {
    ExceptionList = local_10;
    return 1;
  }
  if (param_1 != 0) {
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,(ushort *)L"SourceType");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,1);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"TooltipType");
    local_8._0_1_ = 3;
    FUN_10040230(local_34,param_2);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    FUN_100634e0(param_1,local_28);
    *in_ECX = 0;
    puVar3 = local_28;
    uVar2 = 0xb68;
    FUN_10005c30(0xb68,puVar3);
    FUN_100d1790(uVar2,puVar3);
    if (*in_ECX != 0) {
      if (param_3 == 0) {
        FUN_10054f20(in_ECX + 1);
        iVar1 = in_ECX[6];
      }
      else {
        FUN_10054f20(in_ECX + 1);
        iVar1 = in_ECX[6];
      }
      FUN_100542c0(iVar1);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
      ExceptionList = local_10;
      return 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101b90b2 Catch@101b90b2

void Catch_101b90b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b90c6 Catch@101b90c6

void Catch_101b90c6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTooltipManager::MakeTooltipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b90f0 FUN_101b90f0

undefined4 FUN_101b90f0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  undefined1 *puVar4;
  uint uStack_94;
  FString local_84 [12];
  FString local_78 [12];
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [12];
  undefined1 local_30 [20];
  int *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1021a49f;
  local_10 = ExceptionList;
  uStack_94 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_94;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = in_ECX;
  iVar1 = FUN_10054240();
  if (in_ECX[6] != iVar1) {
    FUN_10054cc0();
  }
  iVar1 = FUN_100541c0();
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (param_1 != (int *)0x0) {
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_3c,(ushort *)L"SourceType");
    local_8._0_1_ = 2;
    FUN_10040090(local_3c,2);
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    FString::FString(local_3c,(ushort *)L"TooltipType");
    local_8._0_1_ = 3;
    FUN_10040230(local_3c,param_2);
    local_8._0_1_ = 1;
    FString::~FString(local_3c);
    FString::FString(local_48,(ushort *)(param_1 + 1));
    local_8._0_1_ = 4;
    FString::FString(local_3c,(ushort *)L"szReserved");
    local_8._0_1_ = 5;
    FUN_10040230(local_3c,local_48);
    local_8._0_1_ = 4;
    FString::~FString(local_3c);
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"nReserved1");
    local_8._0_1_ = 6;
    FUN_10040090(local_48,param_1[0x201]);
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"nReserved2");
    local_8._0_1_ = 7;
    FUN_10040090(local_48,param_1[0x202]);
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"nReserved3");
    local_8._0_1_ = 8;
    FUN_10040090(local_48,param_1[0x203]);
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"MaxColumn");
    local_8._0_1_ = 9;
    FUN_10040090(local_48,param_1[0x213]);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_48);
    for (iVar1 = 0; local_18 = iVar1, iVar1 < param_1[0x213]; iVar1 = iVar1 + 1) {
      iVar3 = iVar1 * 0x1a64;
      FString::FString(local_48,(ushort *)(*param_1 + iVar3));
      local_8._0_1_ = 10;
      uVar2 = FString::Printf((ushort *)local_54,L"szData_%d",iVar1);
      local_8._0_1_ = 0xb;
      FUN_10040230(uVar2,local_48);
      local_8._0_1_ = 10;
      FString::~FString(local_54);
      local_8._0_1_ = 1;
      FString::~FString(local_48);
      FString::FString(local_3c,(ushort *)(*param_1 + 0x1248 + iVar3));
      local_8._0_1_ = 0xc;
      uVar2 = FString::Printf((ushort *)local_60,L"szReserved_%d",iVar1);
      local_8._0_1_ = 0xd;
      FUN_10040230(uVar2,local_3c);
      local_8._0_1_ = 0xc;
      FString::~FString(local_60);
      local_8._0_1_ = 1;
      FString::~FString(local_3c);
      uVar2 = FString::Printf((ushort *)local_6c,L"nReserved1_%d",iVar1);
      local_8._0_1_ = 0xe;
      FUN_10040090(uVar2,*(undefined4 *)(*param_1 + 0x1a48 + iVar3));
      local_8._0_1_ = 1;
      FString::~FString(local_6c);
      uVar2 = FString::Printf((ushort *)local_78,L"nReserved2_%d",iVar1);
      local_8._0_1_ = 0xf;
      FUN_10040090(uVar2,*(undefined4 *)(*param_1 + 0x1a4c + iVar3));
      local_8._0_1_ = 1;
      FString::~FString(local_78);
      uVar2 = FString::Printf((ushort *)local_84,L"nReserved3_%d",iVar1);
      local_8._0_1_ = 0x10;
      FUN_10040090(uVar2,*(undefined4 *)(*param_1 + 0x1a50 + iVar3));
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_84);
      in_ECX = local_1c;
    }
    *in_ECX = 0;
    puVar4 = local_30;
    uVar2 = 0xb68;
    FUN_10005c30(0xb68,puVar4);
    FUN_100d1790(uVar2,puVar4);
    if (*in_ECX != 0) {
      FUN_10054f20(in_ECX + 1);
      FUN_100542c0(in_ECX[6]);
      local_8 = local_8 & 0xffffff00;
      FUN_1003fff0();
      ExceptionList = local_10;
      return 1;
    }
    local_8 = local_8 & 0xffffff00;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101b94c8 Catch@101b94c8

void Catch_101b94c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101b94dc Catch@101b94dc

void Catch_101b94dc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTooltipManager::MakeTooltipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b9500 FUN_101b9500

void FUN_101b9500(FCustomTooltip *param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1021a4c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *in_ECX = 1;
  FCustomTooltip::operator=((FCustomTooltip *)(in_ECX + 1),param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101b955f Catch@101b955f

void Catch_101b955f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b9573 Catch@101b9573

void Catch_101b9573(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTooltipManager::ReturnTooltipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b9590 FUN_101b9590

void FUN_101b9590(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1021a4eb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FCustomTooltip::FCustomTooltip((FCustomTooltip *)(in_ECX + 4));
  local_8 = 1;
  FUN_101b89a0();
  ExceptionList = local_10;
  return;
}


// ==== 101b95f5 Catch@101b95f5

void Catch_101b95f5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101b9609 Catch@101b9609

void Catch_101b9609(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTooltipManager::NCTooltipManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101b9626 ENGINE.DLL::UTexture::PostLoad thunk -> EXTERNAL:000000c3

// ==== 101b962c ENGINE.DLL::UTexture::Destroy thunk -> EXTERNAL:000000c2

// ==== 101b9632 ENGINE.DLL::UTexture::Serialize thunk -> EXTERNAL:000000c1

// ==== 101b9638 ENGINE.DLL::UTexture::PostEditChange thunk -> EXTERNAL:000000c0

// ==== 101b963e ENGINE.DLL::UMaterial::IsLoaded thunk -> EXTERNAL:000000bf

// ==== 101b9644 ENGINE.DLL::UMaterial::CheckCircularReferences thunk -> EXTERNAL:000000be

// ==== 101b964a ENGINE.DLL::UMaterial::GetValidated thunk -> EXTERNAL:000000bd

// ==== 101b9650 ENGINE.DLL::UMaterial::SetValidated thunk -> EXTERNAL:000000bc

// ==== 101b9656 ENGINE.DLL::UMaterial::PreSetMaterial thunk -> EXTERNAL:000000bb

// ==== 101b965c ENGINE.DLL::UBitmapMaterial::MaterialUSize thunk -> EXTERNAL:000000ba

// ==== 101b9662 ENGINE.DLL::UBitmapMaterial::MaterialVSize thunk -> EXTERNAL:000000b9

// ==== 101b9668 ENGINE.DLL::UBitmapMaterial::MaterialMappingUSize thunk -> EXTERNAL:000000b8

// ==== 101b966e ENGINE.DLL::UBitmapMaterial::MaterialMappingVSize thunk -> EXTERNAL:000000b7

// ==== 101b9674 ENGINE.DLL::UTexture::RequiresSorting thunk -> EXTERNAL:000000b6

// ==== 101b967a ENGINE.DLL::UMaterial::RequiresSortingEx thunk -> EXTERNAL:000000b5

// ==== 101b9680 ENGINE.DLL::UTexture::GetSortingLevel thunk -> EXTERNAL:000000b4

// ==== 101b9686 ENGINE.DLL::UTexture::IsTransparent thunk -> EXTERNAL:000000b3

// ==== 101b968c ENGINE.DLL::UMaterial::RequiredUVStreams thunk -> EXTERNAL:000000b2

// ==== 101b9692 ENGINE.DLL::UMaterial::RequiresNormal thunk -> EXTERNAL:000000b1

// ==== 101b9698 ENGINE.DLL::UMaterial::CheckFallback thunk -> EXTERNAL:000000b0

// ==== 101b969e ENGINE.DLL::UMaterial::HasFallback thunk -> EXTERNAL:000000af

// ==== 101b96a4 ENGINE.DLL::UTexture::GetRenderInterface thunk -> EXTERNAL:000000ae

// ==== 101b96aa ENGINE.DLL::UTexture::Get thunk -> EXTERNAL:000000ad

// ==== 101b96b0 ENGINE.DLL::UTexture::Clear thunk -> EXTERNAL:000000ac

// ==== 101b96b6 ENGINE.DLL::UTexture::Clear thunk -> EXTERNAL:000000ab

// ==== 101b96bc ENGINE.DLL::UTexture::Init thunk -> EXTERNAL:000000aa

// ==== 101b96c2 ENGINE.DLL::UTexture::Tick thunk -> EXTERNAL:000000a9

// ==== 101b96c8 ENGINE.DLL::UTexture::MousePosition thunk -> EXTERNAL:000000a8

// ==== 101b96ce ENGINE.DLL::UTexture::Click thunk -> EXTERNAL:000000a7

// ==== 101b96d4 ENGINE.DLL::UTexture::Update thunk -> EXTERNAL:000000a6

// ==== 101b96da ENGINE.DLL::UTexture::Prime thunk -> EXTERNAL:000000a5

// ==== 101b96e0 ENGINE.DLL::UTexture::ArithOp thunk -> EXTERNAL:000000a4

// ==== 101b96e6 ENGINE.DLL::UTexture::TimeReset thunk -> EXTERNAL:000000a3

// ==== 101b96ec ENGINE.DLL::UL2ConsoleWnd::SetCurrentMakingRace thunk -> EXTERNAL:00000037

// ==== 101b96f2 ENGINE.DLL::UL2ConsoleWnd::L2KeyRemapping thunk -> EXTERNAL:00000036

// ==== 101b96f8 ENGINE.DLL::UL2ConsoleWnd::ExecLobbyEvent thunk -> EXTERNAL:00000035

// ==== 101b96fe ENGINE.DLL::UL2ConsoleWnd::ShowOnlyOneDefaultCharacter thunk -> EXTERNAL:00000034

// ==== 101b9704 ENGINE.DLL::UL2ConsoleWnd::ShowAllDefaultCharacter thunk -> EXTERNAL:00000033

// ==== 101b970a ENGINE.DLL::UL2ConsoleWnd::MoveCameraByState thunk -> EXTERNAL:00000032

// ==== 101b9710 ENGINE.DLL::UL2ConsoleWnd::MoveCameraByCharacter thunk -> EXTERNAL:00000031

// ==== 101b9716 ENGINE.DLL::UL2ConsoleWnd::LoadDefaultCharacterInfo thunk -> EXTERNAL:00000030

// ==== 101b971c ENGINE.DLL::UL2ConsoleWnd::SpawnDefaultCharacter thunk -> EXTERNAL:0000002f

// ==== 101b9722 ENGINE.DLL::UL2ConsoleWnd::SpawnDefaultCharacter thunk -> EXTERNAL:0000002e

// ==== 101b9728 ENGINE.DLL::UL2ConsoleWnd::DestroyDefaultCharacter thunk -> EXTERNAL:0000002d

// ==== 101b972e ENGINE.DLL::UL2ConsoleWnd::InsertSelectCharacterInfo thunk -> EXTERNAL:0000002c

// ==== 101b9734 ENGINE.DLL::UL2ConsoleWnd::ResetSelectCharacterInfo thunk -> EXTERNAL:0000002b

// ==== 101b973a ENGINE.DLL::UL2ConsoleWnd::SelectedCharacterNum thunk -> EXTERNAL:0000002a

// ==== 101b9740 ENGINE.DLL::UL2ConsoleWnd::DefaultCharacterTurn thunk -> EXTERNAL:00000029

// ==== 101b9746 ENGINE.DLL::UL2ConsoleWnd::DefaultCharacterStop thunk -> EXTERNAL:00000028

// ==== 101b974c ENGINE.DLL::UL2ConsoleWnd::ResetDefaultCharacterYaw thunk -> EXTERNAL:00000027

// ==== 101b9752 ENGINE.DLL::UL2ConsoleWnd::PlayIntroMusic thunk -> EXTERNAL:00000026

// ==== 101b9758 ENGINE.DLL::UL2ConsoleWnd::StopIntroMusic thunk -> EXTERNAL:00000025

// ==== 101b975e ENGINE.DLL::UL2ConsoleWnd::RestoreLobbyMusic thunk -> EXTERNAL:00000024

// ==== 101b9764 CORE.DLL::UObject::QueryInterface thunk -> EXTERNAL:0000016f

// ==== 101b976a CORE.DLL::UObject::AddRef thunk -> EXTERNAL:00000170

// ==== 101b9770 CORE.DLL::UObject::Release thunk -> EXTERNAL:00000171

// ==== 101b9776 CORE.DLL::UObject::ProcessEvent thunk -> EXTERNAL:00000172

// ==== 101b977c CORE.DLL::UObject::ProcessDelegate thunk -> EXTERNAL:00000173

// ==== 101b9782 CORE.DLL::UObject::ProcessState thunk -> EXTERNAL:00000174

// ==== 101b9788 CORE.DLL::UObject::ProcessRemoteFunction thunk -> EXTERNAL:00000175

// ==== 101b978e CORE.DLL::UObject::Modify thunk -> EXTERNAL:00000176

// ==== 101b9794 CORE.DLL::UObject::IsPendingKill thunk -> EXTERNAL:00000177

// ==== 101b979a CORE.DLL::UObject::GotoState thunk -> EXTERNAL:00000178

// ==== 101b97a0 CORE.DLL::UObject::GotoLabel thunk -> EXTERNAL:00000179

// ==== 101b97a6 CORE.DLL::UObject::InitExecution thunk -> EXTERNAL:0000017a

// ==== 101b97ac CORE.DLL::UObject::ShutdownAfterError thunk -> EXTERNAL:0000017b

// ==== 101b97b2 CORE.DLL::UObject::CallFunction thunk -> EXTERNAL:0000017c

// ==== 101b97b8 CORE.DLL::UObject::ScriptConsoleExec thunk -> EXTERNAL:0000017d

// ==== 101b97be CORE.DLL::UObject::Register thunk -> EXTERNAL:0000017e

// ==== 101b97c4 CORE.DLL::UObject::LanguageChange thunk -> EXTERNAL:0000017f

// ==== 101b97ca CORE.DLL::UObject::ClearL2Game thunk -> EXTERNAL:00000180

// ==== 101b97d0 CORE.DLL::UObject::Rename thunk -> EXTERNAL:00000181

// ==== 101b97d6 CORE.DLL::UObject::NetDirty thunk -> EXTERNAL:00000182

// ==== 101b97dc CORE.DLL::UObject::PostLoad thunk -> EXTERNAL:00000193

// ==== 101b97e2 CORE.DLL::UObject::Serialize thunk -> EXTERNAL:00000194

// ==== 101b97e8 CORE.DLL::UObject::PostEditChange thunk -> EXTERNAL:00000195

// ==== 101b97ee CORE.DLL::UObject::IsLoaded thunk -> EXTERNAL:00000196

// ==== 101b97f4 CORE.DLL::UObject::Destroy thunk -> EXTERNAL:000001d2

// ==== 101b97fa CORE.DLL::FOutputDevice::Flush thunk -> EXTERNAL:00000132

// ==== 101b9800 CORE.DLL::FOutputDevice::Release thunk -> EXTERNAL:00000131

// ==== 101b9806 CORE.DLL::USubsystem::Tick thunk -> EXTERNAL:000000d4

// ==== 101b9820 FUN_101b9820

void FUN_101b9820(void)

{
  FUN_101bedc0();
  return;
}


// ==== 101b9830 FUN_101b9830

void FUN_101b9830(void)

{
  _atexit((_func_4879 *)&LAB_101b9840);
  return;
}


// ==== 101b9850 FUN_101b9850

undefined4 FUN_101b9850(void)

{
  undefined4 uVar1;
  
  if (DAT_103b2f94 == 0) {
    return 0;
  }
  uVar1 = FUN_101b9c40();
  return uVar1;
}


// ==== 101b9870 FUN_101b9870

void FUN_101b9870(undefined4 param_1)

{
  if (DAT_103b2f94 != 0) {
    FUN_101bb8f0(param_1);
  }
  return;
}


// ==== 101b9890 FUN_101b9890

void FUN_101b9890(LPCWSTR param_1)

{
  int iVar1;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  CHAR local_20 [32];
  
  lpMultiByteStr = local_20;
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 0x20;
  iVar1 = FUN_101c4794(param_1);
  WideCharToMultiByte(0,0,param_1,iVar1 + 1,lpMultiByteStr,cbMultiByte,lpDefaultChar,
                      lpUsedDefaultChar);
  FUN_101b98d0(local_20);
  return;
}


// ==== 101b98d0 FUN_101b98d0

undefined4 FUN_101b98d0(undefined4 param_1)

{
  LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter;
  undefined1 *puVar1;
  undefined4 uVar2;
  
  if (DAT_103b2f94 != (undefined1 *)0x0) {
    return 0;
  }
  lpTopLevelExceptionFilter =
       SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_101bd140);
  puVar1 = (undefined1 *)FUN_10004ed0(0x1288);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0xffffffff;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0x24));
    *(undefined4 *)(puVar1 + 0x1058) = 0;
    FUN_101c0110();
    FUN_101bf000();
    *(undefined4 *)(puVar1 + 0x11fc) = 0;
    *(undefined4 *)(puVar1 + 0x1220) = 0;
    *(undefined4 *)(puVar1 + 0x1224) = 0;
    puVar1[0x1268] = 0;
    puVar1[0x1269] = 0;
    *(undefined4 *)(puVar1 + 0x126c) = 1000;
    *(undefined4 *)(puVar1 + 0x1270) = 0;
    *(undefined4 *)(puVar1 + 0x1274) = 0;
    *(undefined4 *)(puVar1 + 0x1278) = 0;
    puVar1[0x127c] = 0;
    *(undefined4 *)(puVar1 + 0x1280) = 0;
    *(undefined4 *)(puVar1 + 0x1284) = 0;
    puVar1[0x1228] = 0;
  }
  DAT_103b2f94 = puVar1;
  uVar2 = FUN_101b9c90(param_1);
  *(undefined4 *)(DAT_103b2f94 + 0x10) = uVar2;
  if (*(HANDLE *)(DAT_103b2f94 + 0x18) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(DAT_103b2f94 + 0x18));
  }
  if (lpTopLevelExceptionFilter != (LPTOP_LEVEL_EXCEPTION_FILTER)0x0) {
    SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  }
  return *(undefined4 *)(DAT_103b2f94 + 0x10);
}


// ==== 101b9a00 FUN_101b9a00

undefined4 FUN_101b9a00(void)

{
  undefined4 uVar1;
  
  if (DAT_103b2f94 == 0) {
    return 0;
  }
  uVar1 = FUN_101bbb50();
  return uVar1;
}


// ==== 101b9a20 FUN_101b9a20

undefined1 FUN_101b9a20(undefined4 param_1)

{
  undefined1 uVar1;
  
  if (DAT_103b2f94 == 0) {
    return 0;
  }
  uVar1 = FUN_101bbd10(param_1);
  return uVar1;
}


// ==== 101b9a40 FUN_101b9a40

undefined1 FUN_101b9a40(void)

{
  int iVar1;
  undefined1 uVar2;
  
  if (DAT_103b2f94 == 0) {
    return 0;
  }
  uVar2 = FUN_101bbd40();
  iVar1 = DAT_103b2f94;
  if (DAT_103b2f94 != 0) {
    FUN_101b9a90();
    FUN_10024ca0(iVar1);
  }
  DAT_103b2f94 = 0;
  return uVar2;
}


// ==== 101b9a90 FUN_101b9a90

void FUN_101b9a90(void)

{
  byte *_Dest;
  byte bVar1;
  undefined *puVar2;
  char *_Format;
  byte *pbVar3;
  int in_ECX;
  uint uVar4;
  DWORD nNumberOfBytesToWrite;
  int iVar5;
  int *piVar6;
  DWORD local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1021a534;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_101bf050();
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_101c0350();
  piVar6 = (int *)(in_ECX + 0x20);
  local_4 = 2;
  if (*piVar6 != -1) {
    GetLocalTime((LPSYSTEMTIME)(in_ECX + 0x103c));
    if ((*(uint *)(in_ECX + 0x1054) == 0) ||
       (puVar2 = &DAT_10352e38, *(uint *)(in_ECX + 0x1058) <= *(uint *)(in_ECX + 0x1054))) {
      puVar2 = &DAT_103b2fcc;
    }
    _Dest = (byte *)(in_ECX + 0x3c);
    _Format = (char *)FUN_101c0820(&DAT_10352de0,((LPSYSTEMTIME)(in_ECX + 0x103c))->wYear,
                                   *(undefined2 *)(in_ECX + 0x103e),*(undefined2 *)(in_ECX + 0x1042)
                                   ,*(undefined2 *)(in_ECX + 0x1044),
                                   *(undefined2 *)(in_ECX + 0x1046),*(undefined2 *)(in_ECX + 0x1048)
                                   ,*(undefined2 *)(in_ECX + 0x104a),puVar2);
    _sprintf((char *)_Dest,_Format);
    uVar4 = 0xffffffff;
    pbVar3 = _Dest;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    nNumberOfBytesToWrite = ~uVar4 - 1;
    if (*(int *)(in_ECX + 0x1050) == 0) {
      if (0 < (int)nNumberOfBytesToWrite) {
        pbVar3 = _Dest;
        do {
          iVar5 = *(int *)(in_ECX + 0x104c) * 3 + 1;
          *(int *)(in_ECX + 0x104c) = iVar5;
          *pbVar3 = *pbVar3 ^ (char)iVar5 + 0x65U;
          pbVar3 = pbVar3 + 1;
        } while ((int)(pbVar3 + (-0x1c - (int)piVar6)) < (int)nNumberOfBytesToWrite);
      }
    }
    else if (0 < (int)nNumberOfBytesToWrite) {
      pbVar3 = _Dest;
      do {
        iVar5 = *(int *)(in_ECX + 0x1050) + 2;
        *(int *)(in_ECX + 0x1050) = iVar5;
        *pbVar3 = *pbVar3 ^ (char)iVar5 + 0x43U;
        pbVar3 = pbVar3 + 1;
      } while ((int)(pbVar3 + (-0x1c - (int)piVar6)) < (int)nNumberOfBytesToWrite);
    }
    if (*(int *)(in_ECX + 0x1054) != 999) {
      WriteFile((HANDLE)*piVar6,_Dest,nNumberOfBytesToWrite,&local_10,(LPOVERLAPPED)0x0);
    }
    SetEndOfFile((HANDLE)*piVar6);
    CloseHandle((HANDLE)*piVar6);
    *piVar6 = -1;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x24));
  ExceptionList = local_c;
  return;
}


// ==== 101b9c40 FUN_101b9c40

undefined4 FUN_101b9c40(void)

{
  undefined4 uVar1;
  char *in_ECX;
  
  if (*in_ECX == '\0') {
    uVar1 = FUN_101c0890(&DAT_10352e58,*(undefined4 *)(in_ECX + 0x10));
    FUN_101bb760(in_ECX + 0x20,uVar1);
    return *(undefined4 *)(in_ECX + 0x10);
  }
  uVar1 = FUN_101c0890(&DAT_10352e3c);
  FUN_101bb760(in_ECX + 0x20,uVar1);
  return *(undefined4 *)(in_ECX + 0x10);
}


// ==== 101b9c90 FUN_101b9c90

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_101b9c90(uchar *param_1)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  wchar_t wVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  BOOL BVar8;
  undefined4 uVar9;
  LPCSTR pCVar10;
  uchar *puVar11;
  HANDLE pvVar12;
  char *pcVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  wchar_t *pwVar17;
  char *in_ECX;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  char **lpNumberOfBytesWritten;
  int *piVar21;
  CHAR *pCVar22;
  wchar_t *pwVar23;
  char *pcVar24;
  _STARTUPINFOA *p_Var25;
  char *pcVar26;
  bool bVar27;
  undefined *puVar28;
  byte *local_10b4;
  char *local_10b0;
  char local_10aa;
  char local_10a9;
  uchar *local_10a8;
  _PROCESS_INFORMATION local_10a4;
  DWORD local_1094;
  char *local_1090;
  HANDLE local_108c;
  _SECURITY_ATTRIBUTES local_1088;
  HANDLE local_107c;
  HANDLE local_1078;
  _STARTUPINFOA local_1074;
  uchar local_1030 [32];
  int local_1010 [3];
  char local_1004 [252];
  wchar_t local_f08 [130];
  CHAR local_e04 [256];
  char local_d04 [260];
  CHAR local_c00 [1024];
  undefined4 local_800 [511];
  undefined4 uStack_4;
  
  uStack_4 = 0x101b9c9a;
  if (*in_ECX != '\0') {
    return 0x755;
  }
  cVar5 = FUN_101bb9a0();
  in_ECX[0x1269] = cVar5;
  DVar6 = GetCurrentProcessId();
  *(DWORD *)(in_ECX + 0x11fc) = DVar6;
  DAT_103b2f64 = GetCurrentThreadId();
  __mbsnbcpy((uchar *)(in_ECX + 0x1200),param_1,0x20);
  in_ECX[0x121f] = '\0';
  FUN_101bba70(&DAT_103b2c3c,0x104);
  iVar7 = FID_conflict___access((wchar_t *)&DAT_103b2c3c,0);
  if ((iVar7 == -1) &&
     (BVar8 = CreateDirectoryA(&DAT_103b2c3c,(LPSECURITY_ATTRIBUTES)0x0), BVar8 == 0)) {
    GetLastError();
    DVar6 = GetLastError();
    uVar9 = FUN_101c0890(&DAT_10353530,DVar6);
    FUN_101bb760(in_ECX + 0x20,uVar9);
    return 0x6f;
  }
  lstrcatA(&DAT_103b2c3c,&DAT_1035352c);
  pCVar10 = (LPCSTR)FUN_101c0890(&DAT_1035351c);
  lstrcatA(&DAT_103b2c3c,pCVar10);
  piVar1 = (int *)(in_ECX + 0x20);
  if (*(int *)(in_ECX + 0x20) == -1) {
    uVar18 = 0xffffffff;
    in_ECX[0x1050] = '\0';
    in_ECX[0x1051] = '\0';
    in_ECX[0x1052] = '\0';
    in_ECX[0x1053] = '\0';
    in_ECX[0x1054] = -0x18;
    in_ECX[0x1055] = '\x03';
    in_ECX[0x1056] = '\0';
    in_ECX[0x1057] = '\0';
    pcVar13 = &DAT_103b2c3c;
    do {
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      cVar5 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar5 != '\0');
    if ((~uVar18 - 1 < 4) || (DAT_103b2c3d == ':')) {
LAB_101b9dee:
      piVar20 = local_1010;
    }
    else {
      GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1010,0x104);
      puVar11 = __mbsrchr((uchar *)local_1010,0x5c);
      piVar20 = (int *)(puVar11 + 1);
      if (puVar11 == (uchar *)0x0) goto LAB_101b9dee;
    }
    uVar18 = 0xffffffff;
    pcVar13 = &DAT_103b2c3c;
    do {
      pcVar26 = pcVar13;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar26 = pcVar13 + 1;
      cVar5 = *pcVar13;
      pcVar13 = pcVar26;
    } while (cVar5 != '\0');
    uVar18 = ~uVar18;
    piVar21 = (int *)(pcVar26 + -uVar18);
    for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
      *piVar20 = *piVar21;
      piVar21 = piVar21 + 1;
      piVar20 = piVar20 + 1;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(uchar *)piVar20 = (uchar)*piVar21;
      piVar21 = (int *)((int)piVar21 + 1);
      piVar20 = (int *)((int)piVar20 + 1);
    }
    pvVar12 = CreateFileA((LPCSTR)local_1010,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80000080,
                          (HANDLE)0x0);
    *piVar1 = (int)pvVar12;
    if (pvVar12 != (HANDLE)0xffffffff) {
      GetLocalTime((LPSYSTEMTIME)(in_ECX + 0x103c));
      pcVar13 = (char *)FUN_101c0820(&DAT_103534cc,((LPSYSTEMTIME)(in_ECX + 0x103c))->wYear,
                                     *(undefined2 *)(in_ECX + 0x103e),
                                     *(undefined2 *)(in_ECX + 0x1042),
                                     *(undefined2 *)(in_ECX + 0x1044),
                                     *(undefined2 *)(in_ECX + 0x1046),
                                     *(undefined2 *)(in_ECX + 0x1048),
                                     *(undefined2 *)(in_ECX + 0x104a));
      _sprintf(in_ECX + 0x3c,pcVar13);
      uVar18 = 0xffffffff;
      pcVar13 = in_ECX + 0x3c;
      do {
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        cVar5 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar5 != '\0');
      local_10b4 = (byte *)(~uVar18 - 1);
      if (*(int *)(in_ECX + 0x1054) == 999) {
        local_10b4 = (byte *)0x0;
      }
      if (*(int *)(in_ECX + 0x1050) == 0) {
        puVar2 = (uint *)(in_ECX + 0x104c);
        puVar11 = (uchar *)(uint)*(ushort *)(in_ECX + 0x104a);
        local_10a8 = puVar11;
        DVar6 = GetTickCount();
        *puVar2 = (int)(puVar11 +
                       (uint)*(ushort *)(in_ECX + 0x1046) + DVar6 + *(ushort *)(in_ECX + 0x1048)) *
                  ((uint)*(ushort *)(in_ECX + 0x1042) * (uint)*(ushort *)(in_ECX + 0x103e) *
                   (uint)*(ushort *)(in_ECX + 0x103c) * (int)puVar11 + 1) & 0xffffff | 0x1a000000;
        WriteFile((HANDLE)*piVar1,puVar2,4,(LPDWORD)&local_10b0,(LPOVERLAPPED)0x0);
        if (0 < (int)local_10b4) {
          pbVar14 = (byte *)(in_ECX + 0x3c);
          do {
            uVar18 = *puVar2 * 3 + 1;
            *puVar2 = uVar18;
            *pbVar14 = *pbVar14 ^ (char)uVar18 + 0x65U;
            pbVar14 = pbVar14 + 1;
          } while ((int)(pbVar14 + (-0x1c - (int)piVar1)) < (int)local_10b4);
        }
      }
      else if (0 < (int)local_10b4) {
        pbVar14 = (byte *)(in_ECX + 0x3c);
        do {
          iVar7 = *(int *)(in_ECX + 0x1050);
          *(int *)(in_ECX + 0x1050) = iVar7 + 2;
          *pbVar14 = *pbVar14 ^ (char)(iVar7 + 2) + 0x43U;
          pbVar14 = pbVar14 + 1;
        } while ((int)(pbVar14 + (-0x1c - (int)piVar1)) < (int)local_10b4);
        lpNumberOfBytesWritten = &local_1090;
        goto LAB_101ba24d;
      }
      lpNumberOfBytesWritten = &local_1090;
      goto LAB_101ba24d;
    }
  }
  local_10a8 = __mbsrchr(&DAT_103b2c3c,0x2e);
  if (local_10a8 != (uchar *)0x0) {
    local_10b4 = (byte *)0x1;
    do {
      puVar11 = local_10a8;
      pcVar13 = (char *)FUN_101c0890(&DAT_103534c0,local_10b4);
      _sprintf((char *)puVar11,pcVar13);
      if (*piVar1 == -1) {
        uVar18 = 0xffffffff;
        in_ECX[0x1050] = '\0';
        in_ECX[0x1051] = '\0';
        in_ECX[0x1052] = '\0';
        in_ECX[0x1053] = '\0';
        in_ECX[0x1054] = -0x18;
        in_ECX[0x1055] = '\x03';
        in_ECX[0x1056] = '\0';
        in_ECX[0x1057] = '\0';
        pcVar13 = &DAT_103b2c3c;
        do {
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          cVar5 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar5 != '\0');
        if ((~uVar18 - 1 < 4) || (DAT_103b2c3d == ':')) {
LAB_101ba06c:
          piVar20 = local_1010;
        }
        else {
          GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1010,0x104);
          puVar11 = __mbsrchr((uchar *)local_1010,0x5c);
          piVar20 = (int *)(puVar11 + 1);
          if (puVar11 == (uchar *)0x0) goto LAB_101ba06c;
        }
        uVar18 = 0xffffffff;
        pcVar13 = &DAT_103b2c3c;
        do {
          pcVar26 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar26 = pcVar13 + 1;
          cVar5 = *pcVar13;
          pcVar13 = pcVar26;
        } while (cVar5 != '\0');
        uVar18 = ~uVar18;
        piVar21 = (int *)(pcVar26 + -uVar18);
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *piVar20 = *piVar21;
          piVar21 = piVar21 + 1;
          piVar20 = piVar20 + 1;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(uchar *)piVar20 = (uchar)*piVar21;
          piVar21 = (int *)((int)piVar21 + 1);
          piVar20 = (int *)((int)piVar20 + 1);
        }
        pvVar12 = CreateFileA((LPCSTR)local_1010,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,
                              0x80000080,(HANDLE)0x0);
        *piVar1 = (int)pvVar12;
        if (pvVar12 != (HANDLE)0xffffffff) {
          GetLocalTime((LPSYSTEMTIME)(in_ECX + 0x103c));
          pcVar13 = (char *)FUN_101c0820(&DAT_103534cc,((LPSYSTEMTIME)(in_ECX + 0x103c))->wYear,
                                         *(undefined2 *)(in_ECX + 0x103e),
                                         *(undefined2 *)(in_ECX + 0x1042),
                                         *(undefined2 *)(in_ECX + 0x1044),
                                         *(undefined2 *)(in_ECX + 0x1046),
                                         *(undefined2 *)(in_ECX + 0x1048),
                                         *(undefined2 *)(in_ECX + 0x104a));
          _sprintf(in_ECX + 0x3c,pcVar13);
          uVar18 = 0xffffffff;
          pcVar13 = in_ECX + 0x3c;
          goto code_r0x101ba146;
        }
      }
      local_10b4 = local_10b4 + 1;
    } while ((int)local_10b4 < 10);
  }
  goto LAB_101ba25d;
  while( true ) {
    uVar18 = uVar18 - 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    if (cVar5 == '\0') break;
code_r0x101ba146:
    if (uVar18 == 0) break;
  }
  local_10b4 = (byte *)(~uVar18 - 1);
  if (*(int *)(in_ECX + 0x1054) == 999) {
    local_10b4 = (byte *)0x0;
  }
  if (*(int *)(in_ECX + 0x1050) == 0) {
    puVar2 = (uint *)(in_ECX + 0x104c);
    puVar11 = (uchar *)(uint)*(ushort *)(in_ECX + 0x104a);
    local_10a8 = puVar11;
    DVar6 = GetTickCount();
    *puVar2 = (int)(puVar11 +
                   (uint)*(ushort *)(in_ECX + 0x1046) + DVar6 + *(ushort *)(in_ECX + 0x1048)) *
              ((uint)*(ushort *)(in_ECX + 0x1042) * (uint)*(ushort *)(in_ECX + 0x103e) *
               (uint)*(ushort *)(in_ECX + 0x103c) * (int)puVar11 + 1) & 0xffffff | 0x1a000000;
    WriteFile((HANDLE)*piVar1,puVar2,4,(LPDWORD)&local_1090,(LPOVERLAPPED)0x0);
    if (0 < (int)local_10b4) {
      pbVar14 = (byte *)(in_ECX + 0x3c);
      do {
        uVar18 = *puVar2 * 3 + 1;
        *puVar2 = uVar18;
        *pbVar14 = *pbVar14 ^ (char)uVar18 + 0x65U;
        pbVar14 = pbVar14 + 1;
      } while ((int)(pbVar14 + (-0x1c - (int)piVar1)) < (int)local_10b4);
    }
  }
  else if (0 < (int)local_10b4) {
    pbVar14 = (byte *)(in_ECX + 0x3c);
    do {
      iVar7 = *(int *)(in_ECX + 0x1050);
      *(int *)(in_ECX + 0x1050) = iVar7 + 2;
      *pbVar14 = *pbVar14 ^ (char)(iVar7 + 2) + 0x43U;
      pbVar14 = pbVar14 + 1;
    } while ((int)(pbVar14 + (-0x1c - (int)piVar1)) < (int)local_10b4);
  }
  lpNumberOfBytesWritten = &local_10b0;
LAB_101ba24d:
  WriteFile((HANDLE)*piVar1,in_ECX + 0x3c,(DWORD)local_10b4,(LPDWORD)lpNumberOfBytesWritten,
            (LPOVERLAPPED)0x0);
LAB_101ba25d:
  uVar9 = FUN_101c0820(&DAT_10353474,0x2f,s_Mon_Dec_12_20_30_42_2005_103534a4);
  FUN_101bb760(piVar1,uVar9);
  uVar9 = FUN_101c0890(&DAT_10353434,*(undefined4 *)(in_ECX + 0x11fc),param_1,FUN_101b9850);
  FUN_101bb760(piVar1,uVar9);
  FUN_101bcf70();
  FUN_101bd050();
  if (in_ECX[0x127c] != '\0') {
    FUN_101beb80(1);
  }
  iVar7 = FUN_101bc260(0x251c);
  if (iVar7 == 0) {
    uVar9 = FUN_101c0890(&DAT_10353418);
    FUN_101bb760(piVar1,uVar9);
  }
  iVar7 = FUN_101bc370(0);
  if (iVar7 == 0) {
    DAT_103b2f80 = DAT_103b2f80 + 1;
    pCVar10 = (LPCSTR)FUN_101c0890(&DAT_10353404);
    pvVar12 = OpenEventA(0x100000,0,pCVar10);
    if (pvVar12 != (HANDLE)0x0) {
      DVar6 = WaitForSingleObject(pvVar12,0);
      if (DVar6 != 0x102) {
        iVar7 = FUN_101bc370(0x251c);
        if (iVar7 == 0) {
          return 0x6e;
        }
        DAT_103b2f80 = 0;
      }
      CloseHandle(pvVar12);
    }
  }
  DVar6 = GetTickCount();
  local_10a8 = (uchar *)(DVar6 & 0xfff00000);
  local_1088.nLength = 0xc;
  local_1088.lpSecurityDescriptor = (LPVOID)0x0;
  local_1088.bInheritHandle = 1;
  pvVar12 = CreateEventA(&local_1088,0,0,(LPCSTR)0x0);
  *(HANDLE *)(in_ECX + 0x1278) = pvVar12;
  if (pvVar12 == (HANDLE)0x0) {
    GetLastError();
    DVar6 = GetLastError();
    puVar28 = &DAT_103533e0;
LAB_101ba40c:
    uVar9 = FUN_101c0890(puVar28,DVar6);
    FUN_101bb760(piVar1,uVar9);
    return 0xab;
  }
  pvVar12 = CreateEventA(&local_1088,1,0,(LPCSTR)0x0);
  *(HANDLE *)(in_ECX + 0x18) = pvVar12;
  if (pvVar12 == (HANDLE)0x0) {
    GetLastError();
    DVar6 = GetLastError();
    puVar28 = &DAT_103533bc;
    goto LAB_101ba40c;
  }
  pvVar12 = CreateEventA(&local_1088,0,0,(LPCSTR)0x0);
  *(HANDLE *)(in_ECX + 0x1274) = pvVar12;
  if (pvVar12 == (HANDLE)0x0) {
    GetLastError();
    DVar6 = GetLastError();
    puVar28 = &DAT_10353398;
    goto LAB_101ba40c;
  }
  uVar9 = FUN_101c0890(&DAT_10353390);
  FUN_101bb760(piVar1,uVar9);
  FUN_101bbac0(local_f08,0x104);
  uVar18 = 0xffffffff;
  pcVar13 = &DAT_1035352c;
  do {
    pcVar26 = pcVar13;
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    pcVar26 = pcVar13 + 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar26;
  } while (cVar5 != '\0');
  uVar18 = ~uVar18;
  iVar7 = -1;
  pwVar17 = local_f08;
  do {
    pwVar23 = pwVar17;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pwVar23 = (wchar_t *)((int)pwVar17 + 1);
    wVar4 = *pwVar17;
    pwVar17 = pwVar23;
  } while ((char)wVar4 != '\0');
  pcVar13 = pcVar26 + -uVar18;
  pcVar26 = (char *)((int)pwVar23 + -1);
  for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *pcVar26 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar26 = pcVar26 + 1;
  }
  pcVar13 = (char *)FUN_101c0890(&DAT_1035337c);
  uVar18 = 0xffffffff;
  do {
    pcVar26 = pcVar13;
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    pcVar26 = pcVar13 + 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar26;
  } while (cVar5 != '\0');
  uVar18 = ~uVar18;
  iVar7 = -1;
  pwVar17 = local_f08;
  do {
    pwVar23 = pwVar17;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pwVar23 = (wchar_t *)((int)pwVar17 + 1);
    wVar4 = *pwVar17;
    pwVar17 = pwVar23;
  } while ((char)wVar4 != '\0');
  pcVar13 = pcVar26 + -uVar18;
  pcVar26 = (char *)((int)pwVar23 + -1);
  for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *pcVar26 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar26 = pcVar26 + 1;
  }
  iVar7 = FID_conflict___access(local_f08,0);
  if (iVar7 == -1) {
    uVar9 = FUN_101c0890(&DAT_10353368,local_f08);
    FUN_101bb760(piVar1,uVar9);
    return 0x99;
  }
  local_10aa = '\0';
  cVar5 = FUN_101bf0c0(local_f08,1);
  if (cVar5 == '\0') {
    local_10a9 = '\0';
    if ((*(int *)(in_ECX + 0x11f8) == 8) && (DVar6 = GetLastError(), DVar6 == 0x80090006)) {
      local_10a9 = '\x01';
    }
    GetLastError();
    uVar9 = *(undefined4 *)(in_ECX + 0x11f8);
    pwVar17 = local_f08;
    DVar6 = GetLastError();
    uVar9 = FUN_101c0890(&DAT_1035334c,uVar9,DVar6,pwVar17);
    FUN_101bb760(piVar1,uVar9);
    pvVar12 = CreateFileA((LPCSTR)local_f08,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                          (HANDLE)0x0);
    if (pvVar12 == (HANDLE)0xffffffff) {
      pwVar17 = local_f08;
      DVar6 = GetLastError();
      uVar9 = FUN_101c0890(&DAT_10353334,DVar6,pwVar17);
      FUN_101bb760(piVar1,uVar9);
    }
    else {
      DVar6 = GetFileSize(pvVar12,(LPDWORD)0x0);
      uVar9 = FUN_101c0890(&DAT_10353324,DVar6);
      FUN_101bb760(piVar1,uVar9);
      SetFilePointer(pvVar12,-4,(PLONG)0x0,2);
      local_10b4 = (byte *)0x0;
      ReadFile(pvVar12,&local_10b4,4,(LPDWORD)&local_1090,(LPOVERLAPPED)0x0);
      uVar9 = FUN_101c0890(&DAT_10353314,local_10b4);
      FUN_101bb760(piVar1,uVar9);
      CloseHandle(pvVar12);
    }
    if (local_10a9 == '\0') {
LAB_101ba6b1:
      uVar9 = FUN_101c0890(&DAT_103532d8);
      FUN_101bb760(piVar1,uVar9);
      return 0x7c;
    }
    if ((in_ECX[0x1269] != '\0') || (cVar5 = FUN_101bded0(), cVar5 == '\0')) {
      return 0x9b;
    }
    cVar5 = FUN_101bf0c0(local_f08,1);
    if (cVar5 == '\0') {
      if ((*(int *)(in_ECX + 0x11f8) == 8) && (DVar6 = GetLastError(), DVar6 == 0x80090006)) {
        return 0x9b;
      }
      local_10aa = '\x01';
    }
    uVar9 = FUN_101c0890(&DAT_103532fc);
    FUN_101bb760(piVar1,uVar9);
    if (local_10aa != '\0') goto LAB_101ba6b1;
  }
  uVar9 = FUN_101c0890(&DAT_103532d0);
  FUN_101bb760(piVar1,uVar9);
  p_Var25 = &local_1074;
  for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
    p_Var25->cb = 0;
    p_Var25 = (_STARTUPINFOA *)&p_Var25->lpReserved;
  }
  local_10a4.hProcess = (HANDLE)0x0;
  local_10a4.hThread = (HANDLE)0x0;
  local_1074.cb = 0x44;
  local_10a4.dwProcessId = 0;
  local_10a4.dwThreadId = 0;
  pCVar10 = (LPCSTR)FUN_101c0890(&DAT_103532b8,local_10a8,in_ECX + 0x1200,
                                 *(undefined4 *)(in_ECX + 0x1278),*(undefined4 *)(in_ECX + 0x18),
                                 *(undefined4 *)(in_ECX + 0x11fc),DAT_103b2f80);
  wsprintfA(local_e04,pCVar10);
  FUN_101bb760(piVar1,s_cmd___s_103532b0,local_e04);
  local_10b4 = (byte *)FUN_101c0780(local_e04);
  uVar18 = 0xffffffff;
  pCVar22 = local_c00;
  pcVar13 = local_e04;
  do {
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar5 != '\0');
  FUN_101bb760(piVar1,s_len___d_103532a8,~uVar18 - 1);
  pcVar13 = (char *)(~uVar18 + 3);
  pbVar14 = local_10b4;
  if (0 < (int)pcVar13) {
    do {
      local_10b0 = pcVar13;
      iVar7 = wsprintfA(pCVar22,s__x_02x_103532a0,(uint)*pbVar14);
      pCVar22 = pCVar22 + iVar7;
      local_10b0 = local_10b0 + -1;
      pbVar14 = pbVar14 + 1;
      pcVar13 = local_10b0;
    } while (local_10b0 != (char *)0x0);
  }
  *pCVar22 = '\0';
  FUN_101bb760(piVar1,s_enc___s_10353298,local_c00);
  BVar8 = CreateProcessA((LPCSTR)local_f08,local_c00,(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,1,0,(LPVOID)0x0,(LPCSTR)0x0,&local_1074,
                         &local_10a4);
  if (BVar8 == 0) {
    pCVar22 = local_e04;
    puVar15 = (undefined4 *)GetLastError();
    pwVar17 = local_f08;
LAB_101bb1db:
    puVar28 = &DAT_10352fe0;
LAB_101bb1e0:
    uVar9 = FUN_101c0890(puVar28,pwVar17,puVar15,pCVar22);
    FUN_101bb760(piVar1,uVar9);
    return 0xaa;
  }
  uVar9 = FUN_101c0890(&DAT_10353290);
  FUN_101bb760(piVar1,uVar9);
  local_107c = *(HANDLE *)(in_ECX + 0x1278);
  local_1094 = 0;
  local_1078 = local_10a4.hProcess;
  DVar6 = WaitForMultipleObjects(2,&local_107c,0,0xffffffff);
  if (DVar6 != 0) {
    BVar8 = GetExitCodeProcess(local_10a4.hProcess,&local_1094);
    if (BVar8 == 0) {
      DVar6 = GetLastError();
      uVar9 = FUN_101c0890(&DAT_1035326c,DVar6);
      FUN_101bb760(piVar1,uVar9);
    }
    uVar9 = FUN_101c0890(&DAT_10353248,local_1094);
    FUN_101bb760(piVar1,uVar9);
    CloseHandle(local_10a4.hProcess);
    CloseHandle(local_10a4.hThread);
    return local_1094;
  }
  uVar9 = FUN_101c0890(&DAT_10353240);
  FUN_101bb760(piVar1,uVar9);
  local_10a8 = (uchar *)FUN_101bd9b0(&local_10a4);
  CloseHandle(local_10a4.hProcess);
  CloseHandle(local_10a4.hThread);
  FUN_101bba70(local_d04,0x104);
  uVar18 = 0xffffffff;
  pcVar13 = &DAT_1035352c;
  do {
    pcVar26 = pcVar13;
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    pcVar26 = pcVar13 + 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar26;
  } while (cVar5 != '\0');
  uVar18 = ~uVar18;
  iVar7 = -1;
  pcVar13 = local_d04;
  do {
    pcVar24 = pcVar13;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar24 = pcVar13 + 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar24;
  } while (cVar5 != '\0');
  pcVar13 = pcVar26 + -uVar18;
  pcVar26 = pcVar24 + -1;
  for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *pcVar26 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar26 = pcVar26 + 1;
  }
  uVar18 = 0xffffffff;
  pcVar13 = in_ECX + 0x1200;
  do {
    pcVar26 = pcVar13;
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    pcVar26 = pcVar13 + 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar26;
  } while (cVar5 != '\0');
  uVar18 = ~uVar18;
  iVar7 = -1;
  pcVar13 = local_d04;
  do {
    pcVar24 = pcVar13;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar24 = pcVar13 + 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar24;
  } while (cVar5 != '\0');
  pcVar13 = pcVar26 + -uVar18;
  pcVar26 = pcVar24 + -1;
  for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *pcVar26 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar26 = pcVar26 + 1;
  }
  pcVar13 = (char *)FUN_101c0890(&DAT_10353234);
  uVar18 = 0xffffffff;
  do {
    pcVar26 = pcVar13;
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    pcVar26 = pcVar13 + 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar26;
  } while (cVar5 != '\0');
  uVar18 = ~uVar18;
  iVar7 = -1;
  pcVar13 = local_d04;
  do {
    pcVar24 = pcVar13;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar24 = pcVar13 + 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar24;
  } while (cVar5 != '\0');
  pcVar13 = pcVar26 + -uVar18;
  pcVar26 = pcVar24 + -1;
  for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *pcVar26 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar26 = pcVar26 + 1;
  }
  cVar5 = FUN_101bf0c0(local_d04,1);
  if (cVar5 == '\0') {
    GetLastError();
    pcVar13 = *(char **)(in_ECX + 0x11f8);
    DVar6 = GetLastError();
    puVar28 = &DAT_1035321c;
LAB_101baf39:
    uVar9 = FUN_101c0890(puVar28,pcVar13,DVar6);
    FUN_101bb760(piVar1,uVar9);
    return 0x78;
  }
  iVar7 = FUN_101c0890(PTR_DAT_10352dbc);
  cVar5 = FUN_101bf4d0(local_d04,local_800,0x7ff,iVar7 + 5);
  if (cVar5 == '\0') {
    GetLastError();
    uVar9 = *(undefined4 *)(in_ECX + 0x11f8);
    DVar6 = GetLastError();
    uVar9 = FUN_101c0890(&DAT_103531fc,uVar9,DVar6);
    FUN_101bb760(piVar1,uVar9);
    return 0x82;
  }
  uVar9 = FUN_101c0820(&DAT_103531f0);
  uVar16 = FUN_101c0820(&DAT_103531e4,local_1030,0x20,local_800);
  uVar16 = FUN_101c0890(&DAT_103531d4,uVar16);
  FUN_101c0ae0(uVar9,uVar16);
  iVar7 = __mbsicmp(local_1030,(uchar *)(in_ECX + 0x1200));
  if (iVar7 != 0) {
    uVar9 = FUN_101c0890(&DAT_103531bc);
    FUN_101bb760(piVar1,uVar9);
    return 0x8e;
  }
  uVar16 = FUN_101c0890(&DAT_103531b0,1,local_800);
  DAT_10352dc0 = FUN_101c0a70(uVar9,uVar16);
  uVar16 = FUN_101c0890(&DAT_103531a0,100000,local_800);
  DAT_103b2f68 = FUN_101c0a70(uVar9,uVar16);
  uVar16 = FUN_101c0890(&DAT_10353190,0,local_800);
  DAT_103b2f6c = FUN_101c0a70(uVar9,uVar16);
  uVar16 = FUN_101c0890(&DAT_10353180,0,local_800);
  local_10b0 = (char *)FUN_101c0a70(uVar9,uVar16);
  uVar16 = FUN_101c0890(&DAT_10353174,0,local_800);
  local_10b4 = (byte *)FUN_101c0a70(uVar9,uVar16);
  uVar16 = FUN_101c0890(&DAT_10353160,0,local_800);
  uVar18 = FUN_101c0a70(uVar9,uVar16);
  in_ECX[0x1e] = ~(byte)(uVar18 >> 1) & 1;
  uVar16 = FUN_101c0890(&DAT_10353148,1000,local_800);
  uVar16 = FUN_101c0a70(uVar9,uVar16);
  *(undefined4 *)(in_ECX + 0x126c) = uVar16;
  uVar16 = FUN_101c0890(&DAT_10353134,0,local_800);
  uVar9 = FUN_101c0a70(uVar9,uVar16);
  *(undefined4 *)(in_ECX + 0x1270) = uVar9;
  puVar15 = local_800;
  for (iVar7 = 0x200; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  uVar9 = FUN_101c0890(&DAT_1035312c);
  FUN_101bb760(piVar1,uVar9);
  FUN_101bba70(&DAT_103b2e50,0x104);
  uVar18 = 0xffffffff;
  pcVar13 = &DAT_1035352c;
  do {
    pcVar26 = pcVar13;
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    pcVar26 = pcVar13 + 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar26;
  } while (cVar5 != '\0');
  uVar18 = ~uVar18;
  iVar7 = -1;
  pcVar13 = (char *)&DAT_103b2e50;
  do {
    pcVar24 = pcVar13;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar24 = pcVar13 + 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar24;
  } while (cVar5 != '\0');
  pcVar13 = pcVar26 + -uVar18;
  pcVar26 = pcVar24 + -1;
  for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *pcVar26 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar26 = pcVar26 + 1;
  }
  pcVar13 = (char *)FUN_101c0890(&DAT_1035311c);
  uVar18 = 0xffffffff;
  do {
    pcVar26 = pcVar13;
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    pcVar26 = pcVar13 + 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar26;
  } while (cVar5 != '\0');
  uVar18 = ~uVar18;
  iVar7 = -1;
  pcVar13 = (char *)&DAT_103b2e50;
  do {
    pcVar24 = pcVar13;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar24 = pcVar13 + 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar24;
  } while (cVar5 != '\0');
  pcVar13 = pcVar26 + -uVar18;
  pcVar26 = pcVar24 + -1;
  for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar26 = pcVar26 + 4;
  }
  bVar27 = DAT_103b2f94 != 0;
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *pcVar26 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar26 = pcVar26 + 1;
  }
  if (bVar27) {
    uVar9 = FUN_101c0890(&DAT_103530f8,*GetProcAddress_exref,GetProcAddress_exref[1],
                         GetProcAddress_exref[2],GetProcAddress_exref[3],GetProcAddress_exref[4]);
    FUN_101bb760(DAT_103b2f94 + 0x20,uVar9);
    if (DAT_103b2f94 != 0) {
      uVar9 = FUN_101c0890(&DAT_103530d4,*GetModuleHandleA_exref,GetModuleHandleA_exref[1],
                           GetModuleHandleA_exref[2],GetModuleHandleA_exref[3],
                           GetModuleHandleA_exref[4]);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar9);
    }
  }
  uVar9 = FUN_101c0890(&DAT_103530cc);
  FUN_101bb760(piVar1,uVar9);
  iVar7 = FID_conflict___access((wchar_t *)&DAT_103b2e50,0);
  if (iVar7 == -1) {
    FUN_101bba70(&DAT_103b2e50,0x104);
    uVar18 = 0xffffffff;
    pcVar13 = &DAT_1035352c;
    do {
      pcVar26 = pcVar13;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar26 = pcVar13 + 1;
      cVar5 = *pcVar13;
      pcVar13 = pcVar26;
    } while (cVar5 != '\0');
    uVar18 = ~uVar18;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_103b2e50;
    do {
      pcVar24 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar24 = pcVar13 + 1;
      cVar5 = *pcVar13;
      pcVar13 = pcVar24;
    } while (cVar5 != '\0');
    pcVar13 = pcVar26 + -uVar18;
    pcVar26 = pcVar24 + -1;
    for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar26 = pcVar26 + 4;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *pcVar26 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar26 = pcVar26 + 1;
    }
    pcVar13 = (char *)FUN_101c0890(&DAT_103530bc);
    uVar18 = 0xffffffff;
    do {
      pcVar26 = pcVar13;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar26 = pcVar13 + 1;
      cVar5 = *pcVar13;
      pcVar13 = pcVar26;
    } while (cVar5 != '\0');
    uVar18 = ~uVar18;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_103b2e50;
    do {
      pcVar24 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar24 = pcVar13 + 1;
      cVar5 = *pcVar13;
      pcVar13 = pcVar24;
    } while (cVar5 != '\0');
    pcVar13 = pcVar26 + -uVar18;
    pcVar26 = pcVar24 + -1;
    for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar26 = pcVar26 + 4;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *pcVar26 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar26 = pcVar26 + 1;
    }
    iVar7 = FID_conflict___access((wchar_t *)&DAT_103b2e50,0);
    if (iVar7 == -1) {
      uVar9 = FUN_101c0890(&DAT_103530a0,&DAT_103b2e50);
      FUN_101bb760(piVar1,uVar9);
      return 0x9a;
    }
  }
  cVar5 = FUN_101bf0c0(&DAT_103b2e50,1);
  if (cVar5 == '\0') {
    GetLastError();
    uVar9 = *(undefined4 *)(in_ECX + 0x11f8);
    puVar15 = &DAT_103b2e50;
    DVar6 = GetLastError();
    uVar9 = FUN_101c0890(&DAT_1035334c,uVar9,DVar6,puVar15);
    FUN_101bb760(piVar1,uVar9);
    return 0x7a;
  }
  uVar9 = FUN_101c0890(&DAT_10353098);
  FUN_101bb760(piVar1,uVar9);
  cVar5 = FUN_101c0180();
  if (cVar5 == '\0') {
    uVar9 = FUN_101c0890(&DAT_10353084);
    FUN_101bb760(piVar1,uVar9);
    return 0xa0;
  }
  uVar9 = FUN_101c0890(&DAT_1035307c);
  FUN_101bb760(piVar1,uVar9);
  DVar6 = GetTickCount();
  if (local_10b0 < (char *)0x2f) {
    DVar6 = 0x2f;
    puVar28 = &DAT_1035305c;
    pcVar13 = local_10b0;
    goto LAB_101baf39;
  }
  p_Var25 = &local_1074;
  for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
    p_Var25->cb = 0;
    p_Var25 = (_STARTUPINFOA *)&p_Var25->lpReserved;
  }
  local_10a4.hProcess = (HANDLE)0x0;
  local_10a4.hThread = (HANDLE)0x0;
  local_10a4.dwProcessId = 0;
  local_1074.cb = 0x44;
  local_10a4.dwThreadId = 0;
  ResetEvent(*(HANDLE *)(in_ECX + 0x1278));
  uVar9 = FUN_101bff10(in_ECX + 0x1200,*(undefined4 *)(in_ECX + 0x1274),
                       *(undefined4 *)(in_ECX + 0x1278),local_10b4);
  uVar9 = FUN_101bff00(uVar9);
  pCVar10 = (LPCSTR)FUN_101c0890(&DAT_10353034,DVar6 & 0xfff00000,*(undefined4 *)(in_ECX + 0x11fc),
                                 in_ECX[0x1269],uVar9);
  wsprintfA(local_e04,pCVar10);
  pbVar14 = (byte *)FUN_101c0780(local_e04);
  uVar18 = 0xffffffff;
  pCVar22 = local_c00;
  pcVar13 = local_e04;
  do {
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    cVar5 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar5 != '\0');
  local_10b4 = pbVar14;
  pcVar13 = (char *)(~uVar18 + 3);
  if (0 < (int)(~uVar18 + 3)) {
    do {
      local_10b0 = pcVar13;
      bVar3 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      iVar7 = wsprintfA(pCVar22,s__x_02x_103532a0,(uint)bVar3);
      pCVar22 = pCVar22 + iVar7;
      local_10b0 = local_10b0 + -1;
      pcVar13 = local_10b0;
    } while (local_10b0 != (char *)0x0);
  }
  *pCVar22 = '\0';
  uVar9 = FUN_101c0890(&DAT_1035302c);
  FUN_101bb760(piVar1,uVar9);
  if (DAT_103b2f80 == 0) {
LAB_101bb18d:
    if (DAT_103b2f84 == 0) {
      BVar8 = CreateProcessA((LPCSTR)&DAT_103b2e50,local_c00,(LPSECURITY_ATTRIBUTES)0x0,
                             (LPSECURITY_ATTRIBUTES)0x0,0,4,(LPVOID)0x0,(LPCSTR)0x0,&local_1074,
                             &local_10a4);
      if (BVar8 == 0) {
        pCVar22 = local_e04;
        puVar15 = (undefined4 *)GetLastError();
        pwVar17 = (wchar_t *)&DAT_103b2e50;
        goto LAB_101bb1db;
      }
      uVar9 = FUN_101c0890(&DAT_10352fd4,local_10a4.dwProcessId);
      FUN_101bb760(piVar1,uVar9);
    }
  }
  else {
    iVar7 = FUN_101bc370(0);
    if (iVar7 == 0) {
      pCVar10 = (LPCSTR)FUN_101c0890(&DAT_10353404);
      pvVar12 = OpenEventA(0x100000,0,pCVar10);
      if (pvVar12 != (HANDLE)0x0) {
        DVar6 = WaitForSingleObject(pvVar12,0);
        if (DVar6 != 0x102) {
          iVar7 = FUN_101bc370(0x251c);
          if (iVar7 == 0) {
            return 0x6e;
          }
          DAT_103b2f80 = 0;
        }
        CloseHandle(pvVar12);
      }
    }
    if (DAT_103b2f80 == 0) goto LAB_101bb18d;
    uVar18 = 0xffffffff;
    local_10b0 = local_1004;
    pcVar13 = local_c00;
    do {
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      cVar5 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar5 != '\0');
    local_1010[2] = *(int *)(in_ECX + 0x11fc);
    local_1010[1] = 0x7eb;
    uVar19 = 0xffffffff;
    local_1010[0] = ~uVar18 + 0xc;
    pcVar13 = local_c00;
    do {
      pcVar26 = pcVar13;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar13 + 1;
      cVar5 = *pcVar13;
      pcVar13 = pcVar26;
    } while (cVar5 != '\0');
    uVar19 = ~uVar19;
    pcVar13 = pcVar26 + -uVar19;
    pcVar26 = local_10b0;
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar26 = pcVar26 + 4;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *pcVar26 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar26 = pcVar26 + 1;
    }
    iVar7 = FUN_101bec60(local_1010,local_1010[0]);
    if (iVar7 == 0) {
      GetLastError();
      pCVar22 = local_e04;
      puVar15 = &DAT_103b2e50;
      pwVar17 = (wchar_t *)GetLastError();
      puVar28 = &DAT_10353008;
      goto LAB_101bb1e0;
    }
  }
  DAT_103b2f7c = DAT_103b2f6c;
  if (DAT_103b2f6c == 0) {
    uVar18 = FUN_101bd7a0(&DAT_103b2e50,&DAT_10352fc0,local_10a8);
    DAT_103b2f7c = uVar18 & 0xff;
  }
  uVar9 = FUN_101c0890(&DAT_10352fb8);
  FUN_101bb760(piVar1,uVar9);
  iVar7 = FUN_101c02d0();
  if (iVar7 == 0) {
    GetLastError();
    DVar6 = GetLastError();
    uVar9 = FUN_101c0890(&DAT_10352fa4,DVar6);
    FUN_101bb760(piVar1,uVar9);
    return 0xa0;
  }
  uVar9 = FUN_101c0890(&DAT_10352f74,iVar7);
  FUN_101bb760(piVar1,uVar9);
  if (DAT_103b2f80 == 0) {
    ResumeThread(local_10a4.hThread);
    local_1090 = *(char **)(in_ECX + 0x1274);
    local_108c = local_10a4.hProcess;
    DVar6 = WaitForMultipleObjects(2,&local_1090,0,DAT_103b2f68);
    if (DVar6 == 0) {
LAB_101bb39d:
      uVar9 = FUN_101c0890(&DAT_10352f1c);
      FUN_101bb760(piVar1,uVar9);
      DVar6 = WaitForSingleObject(*(HANDLE *)(in_ECX + 0x1278),0);
      if (DVar6 != 0) {
        uVar9 = FUN_101c0890(&DAT_10352f04);
        FUN_101bb760(piVar1,uVar9);
        return 0x72;
      }
      pCVar10 = (LPCSTR)FUN_101c0890(&DAT_10352f60);
      pvVar12 = OpenEventA(0x100000,0,pCVar10);
      if (pvVar12 == (HANDLE)0x0) {
        DAT_103b2f88 = local_10a4.dwProcessId;
        DAT_103b2f8c = local_10a4.hProcess;
      }
      else {
        CloseHandle(pvVar12);
        uVar9 = FUN_101c0890(&DAT_10352ef8);
        FUN_101bb760(piVar1,uVar9);
      }
      uVar9 = FUN_101c0890(&DAT_10352ef0);
      FUN_101bb760(piVar1,uVar9);
      if (DAT_103b2f80 != 0) {
        uVar9 = FUN_101c0890(&DAT_10352ee4);
        FUN_101bb760(piVar1,uVar9);
        DAT_103b2f88 = 0;
        DAT_103b2f8c = (HANDLE)0x0;
      }
      if (DAT_103b2f7c != 0) {
        FUN_101bebf0();
        iVar7 = FUN_101bd250();
        if (iVar7 == 0) {
          FUN_101bc540(in_ECX + 0x105c,0x62d,0xb);
        }
        uVar9 = FUN_101c0890(&DAT_10352ecc,iVar7);
        FUN_101bb760(piVar1,uVar9);
        iVar7 = FUN_101bd5b0();
        if (iVar7 == 0) {
          FUN_101c0090(0x8b1,0x630,0xd);
        }
        uVar9 = FUN_101c0890(&DAT_10352eb4,iVar7);
        FUN_101bb760(piVar1,uVar9);
        if ((in_ECX[0x1e] != '\0') && (cVar5 = FUN_101bbe20(), cVar5 == '\0')) {
          uVar9 = FUN_101c0890(&DAT_10352e98);
          FUN_101bb760(piVar1,uVar9);
          return 0xdc;
        }
        uVar9 = FUN_101c0890(&DAT_10352e90);
        FUN_101bb760(piVar1,uVar9);
        FUN_101c0090(0x8b1,0x611,*(undefined4 *)(in_ECX + 0x11fc));
        FUN_101c0090(0x8b1,0x617,local_10a8);
        uVar9 = FUN_101c0890(&DAT_10352e70);
        FUN_101bb760(piVar1,uVar9);
        *in_ECX = '\x01';
        return 0x755;
      }
      return 0x7a;
    }
    pCVar10 = (LPCSTR)FUN_101c0890(&DAT_10352f60);
    pvVar12 = OpenEventA(0x100000,0,pCVar10);
    if (pvVar12 != (HANDLE)0x0) {
      CloseHandle(pvVar12);
      DVar6 = WaitForSingleObject(*(HANDLE *)(in_ECX + 0x1274),DAT_103b2f68);
      if (DVar6 == 0) goto LAB_101bb39d;
      puVar28 = &DAT_10352f44;
      goto LAB_101bb379;
    }
  }
  else {
    DVar6 = WaitForSingleObject(*(HANDLE *)(in_ECX + 0x1274),DAT_103b2f68);
    if (DVar6 == 0) goto LAB_101bb39d;
  }
  puVar28 = &DAT_10352f2c;
LAB_101bb379:
  uVar9 = FUN_101c0890(puVar28,DAT_103b2f68);
  FUN_101bb760(piVar1,uVar9);
  return 0x72;
}


// ==== 101bb5c0 FUN_101bb5c0

void FUN_101bb5c0(void)

{
  LPCRITICAL_SECTION in_ECX;
  
  DeleteCriticalSection(in_ECX);
  return;
}


// ==== 101bb5d0 FUN_101bb5d0

void FUN_101bb5d0(void)

{
  byte *_Dest;
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  char *_Format;
  byte *pbVar4;
  int *in_ECX;
  uint uVar5;
  DWORD nNumberOfBytesToWrite;
  DWORD local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1021a54b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*in_ECX != -1) {
    ExceptionList = &local_c;
    GetLocalTime((LPSYSTEMTIME)(in_ECX + 0x407));
    if ((in_ECX[0x40d] == 0) || (puVar3 = &DAT_10352e38, (uint)in_ECX[0x40e] <= (uint)in_ECX[0x40d])
       ) {
      puVar3 = &DAT_103b2fcc;
    }
    _Dest = (byte *)(in_ECX + 7);
    _Format = (char *)FUN_101c0820(&DAT_10352de0,((LPSYSTEMTIME)(in_ECX + 0x407))->wYear,
                                   *(undefined2 *)((int)in_ECX + 0x101e),
                                   *(undefined2 *)((int)in_ECX + 0x1022),(short)in_ECX[0x409],
                                   *(undefined2 *)((int)in_ECX + 0x1026),(short)in_ECX[0x40a],
                                   *(undefined2 *)((int)in_ECX + 0x102a),puVar3);
    _sprintf((char *)_Dest,_Format);
    uVar5 = 0xffffffff;
    pbVar4 = _Dest;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    nNumberOfBytesToWrite = ~uVar5 - 1;
    if (in_ECX[0x40c] == 0) {
      if (0 < (int)nNumberOfBytesToWrite) {
        pbVar4 = _Dest;
        do {
          iVar2 = in_ECX[0x40b] * 3 + 1;
          in_ECX[0x40b] = iVar2;
          *pbVar4 = *pbVar4 ^ (char)iVar2 + 0x65U;
          pbVar4 = pbVar4 + 1;
        } while ((int)(pbVar4 + (-0x1c - (int)in_ECX)) < (int)nNumberOfBytesToWrite);
      }
    }
    else if (0 < (int)nNumberOfBytesToWrite) {
      pbVar4 = _Dest;
      do {
        iVar2 = in_ECX[0x40c];
        in_ECX[0x40c] = iVar2 + 2;
        *pbVar4 = *pbVar4 ^ (char)(iVar2 + 2) + 0x43U;
        pbVar4 = pbVar4 + 1;
      } while ((int)(pbVar4 + (-0x1c - (int)in_ECX)) < (int)nNumberOfBytesToWrite);
    }
    if (in_ECX[0x40d] != 999) {
      WriteFile((HANDLE)*in_ECX,_Dest,nNumberOfBytesToWrite,&local_10,(LPOVERLAPPED)0x0);
    }
    SetEndOfFile((HANDLE)*in_ECX);
    CloseHandle((HANDLE)*in_ECX);
    *in_ECX = -1;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 1));
  ExceptionList = local_c;
  return;
}


// ==== 101bb760 FUN_101bb760

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_101bb760(int *param_1,char *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte *_Dest;
  byte bVar1;
  int iVar2;
  char *_Format;
  byte *pbVar3;
  uint uVar4;
  DWORD nNumberOfBytesToWrite;
  DWORD local_1004;
  char local_1000 [4092];
  undefined4 uStack_4;
  
  uStack_4 = 0x101bb76a;
  if (*param_1 != -1) {
    if ((param_1[0x40d] != 0) && (*param_2 != '!')) {
      if ((uint)param_1[0x40d] < (uint)param_1[0x40e]) {
        return 0;
      }
      param_1[0x40e] = param_1[0x40e] + 1;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
    EnterCriticalSection(lpCriticalSection);
    _vsprintf(local_1000,param_2,&stack0x0000000c);
    GetLocalTime((LPSYSTEMTIME)(param_1 + 0x407));
    if ((_sprintf != (code)0xcc) && (*WriteFile_exref != (code)0xcc)) {
      _Dest = (byte *)(param_1 + 7);
      _Format = (char *)FUN_101c0820(&DAT_1035354c,(short)param_1[0x409],
                                     *(undefined2 *)((int)param_1 + 0x1026),(short)param_1[0x40a],
                                     *(undefined2 *)((int)param_1 + 0x102a),local_1000);
      _sprintf((char *)_Dest,_Format);
      uVar4 = 0xffffffff;
      pbVar3 = _Dest;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (bVar1 != 0);
      nNumberOfBytesToWrite = ~uVar4 - 1;
      if (param_1[0x40c] == 0) {
        if (0 < (int)nNumberOfBytesToWrite) {
          pbVar3 = _Dest;
          do {
            iVar2 = param_1[0x40b] * 3 + 1;
            param_1[0x40b] = iVar2;
            *pbVar3 = *pbVar3 ^ (char)iVar2 + 0x65U;
            pbVar3 = pbVar3 + 1;
          } while ((int)(pbVar3 + (-0x1c - (int)param_1)) < (int)nNumberOfBytesToWrite);
        }
      }
      else if (0 < (int)nNumberOfBytesToWrite) {
        pbVar3 = _Dest;
        do {
          iVar2 = param_1[0x40c];
          param_1[0x40c] = iVar2 + 2;
          *pbVar3 = *pbVar3 ^ (char)(iVar2 + 2) + 0x43U;
          pbVar3 = pbVar3 + 1;
        } while ((int)(pbVar3 + (-0x1c - (int)param_1)) < (int)nNumberOfBytesToWrite);
      }
      WriteFile((HANDLE)*param_1,_Dest,nNumberOfBytesToWrite,&local_1004,(LPOVERLAPPED)0x0);
      LeaveCriticalSection(lpCriticalSection);
      return 1;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}


// ==== 101bb8f0 FUN_101bb8f0

void FUN_101bb8f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  iVar1 = in_ECX + 0x20;
  uVar2 = FUN_101c0890(&DAT_103535c8);
  FUN_101bb760(iVar1,uVar2);
  FUN_101bcf70();
  FUN_101bd050();
  *(undefined4 *)(in_ECX + 4) = param_1;
  FUN_101c0090(0x8b1,0x612,param_1);
  if (*(int *)(in_ECX + 8) != 0) {
    uVar2 = FUN_101c0890(&DAT_103535a8,*(int *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc));
    FUN_101bb760(iVar1,uVar2);
    iVar3 = FUN_1014a910(*(undefined4 *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc));
    if (iVar3 == 0) {
      uVar2 = FUN_101c0890(&DAT_1035358c);
      FUN_101bb760(iVar1,uVar2);
    }
  }
  uVar2 = FUN_101c0890(&DAT_1035356c);
  FUN_101bb760(iVar1,uVar2);
  return;
}


// ==== 101bb9a0 FUN_101bb9a0

undefined4 FUN_101bb9a0(void)

{
  LPCSTR pCVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int in_ECX;
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_94);
  pCVar1 = (LPCSTR)FUN_101c0890(&DAT_1035360c);
  hModule = GetModuleHandleA(pCVar1);
  pCVar1 = (LPCSTR)FUN_101c0890(&DAT_103535f8);
  pFVar2 = GetProcAddress(hModule,pCVar1);
  if (pFVar2 != (FARPROC)0x0) {
    pCVar1 = (LPCSTR)FUN_101c0890(&DAT_103535e0);
    pFVar2 = GetProcAddress(hModule,pCVar1);
    if ((pFVar2 != (FARPROC)0x0) &&
       ((local_94.dwMajorVersion < 5 ||
        ((local_94.dwMajorVersion == 5 && (local_94.dwMinorVersion == 0)))))) {
      *(undefined1 *)(in_ECX + 0x127c) = 1;
      return 1;
    }
  }
  if (local_94.dwPlatformId != 2) {
    return 0;
  }
  DAT_103b2f92 = 1;
  if ((local_94.dwMajorVersion == 5) && (local_94.dwMinorVersion == 0)) {
    DAT_10352dc4 = DAT_10352dc4 * 2;
  }
  return 1;
}


// ==== 101bba70 FUN_101bba70

undefined4 FUN_101bba70(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  
  FUN_101bbac0(param_1,param_2);
  pcVar2 = (char *)FUN_101c0890(&DAT_10353620);
  uVar3 = 0xffffffff;
  do {
    pcVar6 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  do {
    pcVar2 = param_1;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar2 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar2;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -uVar3;
  pcVar2 = pcVar2 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return 1;
}


// ==== 101bbac0 FUN_101bbac0

undefined4 FUN_101bbac0(uchar *param_1,DWORD param_2)

{
  char cVar1;
  DWORD DVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)param_1,param_2);
  if (DVar2 != 0) {
    puVar3 = __mbsrchr(param_1,0x5c);
    if (puVar3 != (uchar *)0x0) {
      *puVar3 = '\0';
      return 1;
    }
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_10353630;
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    puVar3 = (uchar *)(pcVar7 + -uVar4);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)puVar3;
      puVar3 = puVar3 + 4;
      param_1 = param_1 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    }
    return 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_10353630;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  puVar3 = (uchar *)(pcVar7 + -uVar4);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)puVar3;
    puVar3 = puVar3 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}


// ==== 101bbb50 FUN_101bbb50

undefined4 FUN_101bbb50(void)

{
  undefined4 uVar1;
  BOOL BVar2;
  LPCSTR pCVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  char *in_ECX;
  char *local_4;
  
  DAT_103b2f98 = DAT_103b2f98 + 1;
  if (in_ECX[1] != '\0') {
    return 0x755;
  }
  if (*in_ECX == '\0') {
    if (DAT_103b2f98 < 3) {
      return 0x755;
    }
    uVar1 = FUN_101c0890(&DAT_103536f4);
    FUN_101bb760(in_ECX + 0x20,uVar1);
    return 0x262;
  }
  if (DAT_103b2f7c == 0) {
    uVar1 = FUN_101c0890(&DAT_103536d8);
    FUN_101bb760(in_ECX + 0x20,uVar1);
    return 0x28a;
  }
  local_4 = in_ECX;
  if (DAT_103b2f8c != (HANDLE)0x0) {
    local_4 = (char *)0x0;
    BVar2 = GetExitCodeProcess(DAT_103b2f8c,(LPDWORD)&local_4);
    if ((BVar2 != 0) && (local_4 != (char *)0x103)) {
      uVar1 = FUN_101c0890(&DAT_103536bc);
      FUN_101bb760(in_ECX + 0x20,uVar1);
      return 0x26c;
    }
  }
  pCVar3 = (LPCSTR)FUN_101c0890(&DAT_103536a8);
  pvVar4 = OpenMutexA(0x100000,0,pCVar3);
  if (pvVar4 == (HANDLE)0x0) {
    pCVar3 = (LPCSTR)FUN_101c0890(&DAT_1035369c);
    pvVar4 = OpenMutexA(0x100000,0,pCVar3);
    if (pvVar4 == (HANDLE)0x0) {
      DVar5 = GetLastError();
      uVar1 = FUN_101c0890(&DAT_10353634,DVar5);
      FUN_101bb760(in_ECX + 0x20,uVar1);
      return 0x294;
    }
  }
  CloseHandle(pvVar4);
  pCVar3 = (LPCSTR)FUN_101c0890(&DAT_10353688);
  pvVar4 = OpenMutexA(0x100000,0,pCVar3);
  if (pvVar4 == (HANDLE)0x0) {
    pCVar3 = (LPCSTR)FUN_101c0890(&DAT_1035367c);
    pvVar4 = OpenMutexA(0x100000,0,pCVar3);
    if (pvVar4 == (HANDLE)0x0) {
      DVar5 = GetLastError();
      uVar1 = FUN_101c0890(&DAT_10353658,DVar5);
      FUN_101bb760(in_ECX + 0x20,uVar1);
      return 0x276;
    }
  }
  CloseHandle(pvVar4);
  return 0x755;
}


// ==== 101bbd10 FUN_101bbd10

uint FUN_101bbd10(undefined4 param_1)

{
  uint in_EAX;
  uint uVar1;
  char *in_ECX;
  
  if (*in_ECX != '\0') {
    uVar1 = FUN_101c0090(0x8b1,0x619,param_1);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}


// ==== 101bbd40 FUN_101bbd40

undefined4 FUN_101bbd40(void)

{
  undefined4 uVar1;
  undefined1 *in_ECX;
  
  if (in_ECX[1] != '\0') {
    return 1;
  }
  uVar1 = FUN_101c0890(&DAT_10353728);
  FUN_101bb760(in_ECX + 0x20,uVar1);
  in_ECX[1] = 1;
  if (in_ECX[0x1c] != '\0') {
    FUN_101bc090();
    in_ECX[0x1c] = 0;
  }
  if (*(HANDLE *)(in_ECX + 0x1274) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(in_ECX + 0x1274));
    *(undefined4 *)(in_ECX + 0x1274) = 0;
  }
  if (*(HANDLE *)(in_ECX + 0x18) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(in_ECX + 0x18));
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  if (*(HANDLE *)(in_ECX + 0x1278) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(in_ECX + 0x1278));
    *(undefined4 *)(in_ECX + 0x1278) = 0;
  }
  if (in_ECX[0x127c] != '\0') {
    FUN_101beb80(0);
    FUN_101be960();
  }
  if ((DAT_10352dc0 != 0) && (DAT_103b2f5c != 0)) {
    FUN_101bc890();
  }
  uVar1 = FUN_101c0890(&DAT_10353710);
  FUN_101bb760(in_ECX + 0x20,uVar1);
  *in_ECX = 0;
  uVar1 = FUN_101c0350();
  return uVar1;
}


// ==== 101bbe20 FUN_101bbe20

undefined4 FUN_101bbe20(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  DWORD DVar5;
  HMODULE hModule;
  FARPROC pFVar6;
  HANDLE pvVar7;
  LPVOID in_ECX;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined *puVar13;
  DWORD local_108;
  char local_104 [260];
  
  if (*(char *)((int)in_ECX + 0x1c) != '\0') {
    return 1;
  }
  iVar1 = (int)in_ECX + 0x20;
  uVar3 = FUN_101c0890(&DAT_10353854);
  FUN_101bb760(iVar1,uVar3);
  FUN_101bba70(local_104,0x104);
  uVar8 = 0xffffffff;
  pcVar4 = &DAT_1035352c;
  do {
    pcVar12 = pcVar4;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar12;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  iVar9 = -1;
  pcVar4 = local_104;
  do {
    pcVar11 = pcVar4;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar11 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar11;
  } while (cVar2 != '\0');
  pcVar4 = pcVar12 + -uVar8;
  pcVar12 = pcVar11 + -1;
  for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar12 = pcVar12 + 1;
  }
  pcVar4 = (char *)FUN_101c0890(&DAT_10353844);
  uVar8 = 0xffffffff;
  do {
    pcVar12 = pcVar4;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar12;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  iVar9 = -1;
  pcVar4 = local_104;
  do {
    pcVar11 = pcVar4;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar11 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar11;
  } while (cVar2 != '\0');
  pcVar4 = pcVar12 + -uVar8;
  pcVar12 = pcVar11 + -1;
  for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar3 = FUN_101c0890(&DAT_10353838,local_104);
  FUN_101bb760(iVar1,uVar3);
  cVar2 = FUN_101bf0c0(local_104,1);
  if (cVar2 == '\0') {
    GetLastError();
    uVar3 = *(undefined4 *)((int)in_ECX + 0x11f8);
    DVar5 = GetLastError();
    uVar3 = FUN_101c0890(&DAT_10353818,uVar3,DVar5);
    FUN_101bb760(iVar1,uVar3);
    return 0;
  }
  hModule = LoadLibraryA(local_104);
  *(HMODULE *)((int)in_ECX + 0x1220) = hModule;
  if (hModule == (HMODULE)0x0) {
    DVar5 = GetLastError();
    puVar13 = &DAT_103537fc;
  }
  else {
    pFVar6 = GetProcAddress(hModule,(LPCSTR)0x2);
    *(FARPROC *)((int)in_ECX + 0x1280) = pFVar6;
    pFVar6 = GetProcAddress(*(HMODULE *)((int)in_ECX + 0x1220),(LPCSTR)0x1);
    *(FARPROC *)((int)in_ECX + 0x1284) = pFVar6;
    if ((*(int *)((int)in_ECX + 0x1280) == 0) || (pFVar6 == (FARPROC)0x0)) {
      DVar5 = GetLastError();
      puVar13 = &DAT_10353744;
    }
    else {
      pvVar7 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
      *(HANDLE *)((int)in_ECX + 0x14) = pvVar7;
      if (pvVar7 == (HANDLE)0x0) {
        DVar5 = GetLastError();
        puVar13 = &DAT_103537d4;
      }
      else {
        *(undefined1 *)((int)in_ECX + 0x1c) = 1;
        pvVar7 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_101bc170,in_ECX,0,&local_108);
        *(HANDLE *)((int)in_ECX + 0x1224) = pvVar7;
        if (pvVar7 == (HANDLE)0x0) {
          DVar5 = GetLastError();
          puVar13 = &DAT_103537b0;
        }
        else {
          uVar3 = FUN_101c0890(&DAT_1035378c,local_108);
          FUN_101bb760(iVar1,uVar3);
          DVar5 = (**(code **)((int)in_ECX + 0x1280))
                            (*(undefined4 *)((int)in_ECX + 0x11fc),
                             *(undefined4 *)((int)in_ECX + 0x1270),
                             *(undefined4 *)((int)in_ECX + 0x126c),
                             *(undefined4 *)((int)in_ECX + 0x14));
          if (DVar5 == 0x6b) {
            uVar3 = FUN_101c0890(&DAT_1035375c);
            FUN_101bb760(iVar1,uVar3);
            return 1;
          }
          puVar13 = &DAT_10353770;
        }
      }
    }
  }
  uVar3 = FUN_101c0890(puVar13,DVar5);
  FUN_101bb760(iVar1,uVar3);
  return 0;
}


// ==== 101bc090 FUN_101bc090

undefined4 FUN_101bc090(void)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    return 1;
  }
  iVar1 = in_ECX + 0x20;
  uVar2 = FUN_101c0890(&DAT_10353894);
  FUN_101bb760(iVar1,uVar2);
  (**(code **)(in_ECX + 0x1284))(*(undefined4 *)(in_ECX + 0x11fc),in_ECX + 0x1228);
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  if (*(HANDLE *)(in_ECX + 0x14) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(in_ECX + 0x14));
  }
  DVar3 = WaitForSingleObject(*(HANDLE *)(in_ECX + 0x1224),2000);
  if (DVar3 == 0x102) {
    uVar2 = FUN_101c0890(&DAT_1035387c);
    FUN_101bb760(iVar1,uVar2);
    TerminateThread(*(HANDLE *)(in_ECX + 0x1224),0);
  }
  CloseHandle(*(HANDLE *)(in_ECX + 0x1224));
  if (*(HMODULE *)(in_ECX + 0x1220) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(in_ECX + 0x1220));
  }
  *(undefined4 *)(in_ECX + 0x1280) = 0;
  *(undefined4 *)(in_ECX + 0x1284) = 0;
  uVar2 = FUN_101c0890(&DAT_10353868);
  FUN_101bb760(iVar1,uVar2);
  return 1;
}


// ==== 101bc170 FUN_101bc170

undefined4 FUN_101bc170(int param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  
  while( true ) {
    while( true ) {
      DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x14),0xde3);
      if (DVar1 == 0) break;
      iVar2 = FUN_101bd4d0();
      if (iVar2 == 0) {
        FUN_101bc540(param_1 + 0x105c,0x62d,10);
      }
      else {
        iVar2 = FUN_101bd700();
        if (iVar2 == 0) {
          FUN_101c0090(0x8b1,0x630,0xc);
        }
        else {
          iVar2 = FUN_101bc490();
          if ((iVar2 != 0) || (*(char *)(param_1 + 0x1d) != '\0')) {
            if (DAT_103b2f94 != 0) {
              uVar3 = FUN_101bc490(*(undefined1 *)(param_1 + 0x1d));
              uVar3 = FUN_101c0890(&DAT_103538a8,uVar3);
              FUN_101bb760(DAT_103b2f94 + 0x20,uVar3);
            }
            FUN_101bc540(param_1 + 0x105c,500,0);
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x1c) == '\0') break;
    FUN_101bc540(param_1 + 0x105c,0x62d,0);
  }
  return 0;
}


// ==== 101bc260 FUN_101bc260

undefined4 FUN_101bc260(DWORD param_1)

{
  BOOL BVar1;
  LPCSTR pCVar2;
  HANDLE hHandle;
  DWORD DVar3;
  undefined4 uVar4;
  int in_ECX;
  _SECURITY_ATTRIBUTES *lpMutexAttributes;
  _SECURITY_ATTRIBUTES local_20;
  undefined1 local_14 [20];
  
  local_20.lpSecurityDescriptor = local_14;
  local_20.nLength = 0xc;
  local_20.bInheritHandle = 0;
  lpMutexAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  BVar1 = InitializeSecurityDescriptor(local_14,1);
  if (BVar1 != 0) {
    BVar1 = SetSecurityDescriptorDacl(local_14,1,(PACL)0x0,0);
    if (BVar1 != 0) {
      lpMutexAttributes = &local_20;
    }
  }
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_103538ec);
  hHandle = CreateMutexA(lpMutexAttributes,0,pCVar2);
  if (hHandle == (HANDLE)0x0) {
    pCVar2 = (LPCSTR)FUN_101c0890(&DAT_103538e0);
    hHandle = CreateMutexA(lpMutexAttributes,0,pCVar2);
    if (hHandle == (HANDLE)0x0) {
      GetLastError();
      DVar3 = GetLastError();
      uVar4 = FUN_101c0890(&DAT_103538bc,DVar3);
      FUN_101bb760(in_ECX + 0x20,uVar4);
      return 0;
    }
  }
  DVar3 = GetLastError();
  if (DVar3 == 0xb7) {
    CloseHandle(hHandle);
    return 0;
  }
  DVar3 = WaitForSingleObject(hHandle,param_1);
  if (DVar3 == 0x102) {
    CloseHandle(hHandle);
    return 0;
  }
  return 1;
}


// ==== 101bc370 FUN_101bc370

undefined4 FUN_101bc370(DWORD param_1)

{
  BOOL BVar1;
  LPCSTR pCVar2;
  HANDLE hHandle;
  DWORD DVar3;
  undefined4 uVar4;
  int in_ECX;
  _SECURITY_ATTRIBUTES *lpMutexAttributes;
  _SECURITY_ATTRIBUTES local_20;
  undefined1 local_14 [20];
  
  local_20.lpSecurityDescriptor = local_14;
  local_20.nLength = 0xc;
  local_20.bInheritHandle = 0;
  lpMutexAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  BVar1 = InitializeSecurityDescriptor(local_14,1);
  if (BVar1 != 0) {
    BVar1 = SetSecurityDescriptorDacl(local_14,1,(PACL)0x0,0);
    if (BVar1 != 0) {
      lpMutexAttributes = &local_20;
    }
  }
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_10353688);
  hHandle = CreateMutexA(lpMutexAttributes,0,pCVar2);
  if (hHandle == (HANDLE)0x0) {
    pCVar2 = (LPCSTR)FUN_101c0890(&DAT_1035367c);
    hHandle = CreateMutexA(lpMutexAttributes,0,pCVar2);
    if (hHandle == (HANDLE)0x0) {
      GetLastError();
      DVar3 = GetLastError();
      uVar4 = FUN_101c0890(&DAT_1035391c,DVar3);
      FUN_101bb760(in_ECX + 0x20,uVar4);
      return 0;
    }
  }
  DVar3 = GetLastError();
  if (DVar3 == 0xb7) {
    DVar3 = WaitForSingleObject(hHandle,param_1);
    if (DVar3 == 0x102) {
      uVar4 = FUN_101c0890(&DAT_10353900);
      FUN_101bb760(in_ECX + 0x20,uVar4);
      CloseHandle(hHandle);
      return 0;
    }
  }
  ReleaseMutex(hHandle);
  CloseHandle(hHandle);
  return 1;
}


// ==== 101bc490 FUN_101bc490

bool FUN_101bc490(void)

{
  undefined1 uVar1;
  int in_ECX;
  
  if (DAT_103b2f91 != '\0') {
    return false;
  }
  if (*(char *)(in_ECX + 0x1269) == '\0') {
    return (bool)ClientId.UniqueProcess._0_1_;
  }
  if (DAT_103b2f92 != '\0') {
    return (bool)*(undefined1 *)((int)ProcessEnvironmentBlock + 2);
  }
  if (DAT_10352dc8 != '\0') {
    DAT_10352dc8 = 0;
    uVar1 = *(undefined1 *)((int)ProcessEnvironmentBlock + 2);
    *(undefined1 *)((int)ProcessEnvironmentBlock + 2) = 0xff;
    return (bool)uVar1;
  }
  return *(char *)((int)ProcessEnvironmentBlock + 2) != -1;
}


// ==== 101bc540 FUN_101bc540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101bc540(undefined4 param_1,int param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  if (DAT_103b2f94 != (char *)0x0) {
    uVar3 = FUN_101c0890(&DAT_103539c8,param_2,param_3);
    FUN_101bb760(DAT_103b2f94 + 0x20,uVar3);
  }
  switch(param_2) {
  case 0x60f:
    uVar3 = 0x3e9;
    bVar5 = *DAT_103b2f94 == '\0';
    goto LAB_101bc5a0;
  case 0x610:
    uVar3 = 0x3ea;
    bVar5 = *DAT_103b2f94 == '\0';
    goto LAB_101bc5bd;
  default:
    if (param_2 == 500) {
      uVar3 = 0x3f6;
      param_3 = 500;
      bVar5 = *(int *)(DAT_103b2f94 + 4) == 0;
    }
    else {
      uVar3 = 1000;
      bVar5 = *(int *)(DAT_103b2f94 + 4) == 0;
    }
    goto LAB_101bc5bd;
  case 0x615:
    _DAT_103b2f78 = param_3;
    if (DAT_103b2f88 == 0) {
      DAT_103b2f88 = param_3;
    }
    else if (param_3 != DAT_103b2f88) {
      if (DAT_103b2f94 != (char *)0x0) {
        uVar3 = FUN_101c0890(&DAT_10353940,param_3,DAT_103b2f88);
        FUN_101bb760(DAT_103b2f94 + 0x20,uVar3);
      }
      DAT_103b2f5c = 2;
      uVar3 = 0x3f6;
      param_3 = 0xe6;
      bVar5 = *(int *)(DAT_103b2f94 + 4) == 0;
      goto LAB_101bc5bd;
    }
    cVar2 = FUN_101bda50(&DAT_103b2e50,0x7d5,10,1,1);
    if (cVar2 != '\0') {
      return 1;
    }
    if (DAT_103b2f94 != (char *)0x0) {
      uVar3 = FUN_101c0890(&DAT_10353968);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar3);
    }
    uVar3 = 0x3f6;
    param_3 = 0xe6;
    bVar5 = *(int *)(DAT_103b2f94 + 4) == 0;
    goto LAB_101bc5a0;
  case 0x618:
    if (param_3 < (uint)(DAT_10352dc4 * 800)) {
      return 1;
    }
    FUN_101bcf70();
    FUN_101bd050();
    if (DAT_103b2f94 != (char *)0x0) {
      uVar3 = FUN_101c0890(&DAT_103539b0,param_3);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar3);
    }
    uVar3 = 0x3e9;
    break;
  case 0x619:
    param_3 = FUN_101bff20();
    uVar3 = 0x3f9;
    break;
  case 0x62d:
    uVar3 = 0x3f3;
    goto LAB_101bc697;
  case 0x62e:
    uVar3 = 0x3f4;
    bVar5 = *(int *)(DAT_103b2f94 + 4) == 0;
    goto LAB_101bc5a0;
  case 0x62f:
    uVar3 = 0x3f5;
    bVar5 = *(int *)(DAT_103b2f94 + 4) == 0;
    goto LAB_101bc5bd;
  case 0x630:
    uVar3 = 0x3f7;
LAB_101bc697:
    if (*(int *)(DAT_103b2f94 + 4) == 0) {
      *(undefined4 *)(DAT_103b2f94 + 8) = uVar3;
      *(uint *)(DAT_103b2f94 + 0xc) = param_3;
      return 1;
    }
    break;
  case 0x637:
    uVar3 = 0x3f6;
    param_3 = 0xd2;
    bVar5 = *(int *)(DAT_103b2f94 + 4) == 0;
LAB_101bc5a0:
    if (bVar5) {
      *(undefined4 *)(DAT_103b2f94 + 8) = uVar3;
      *(uint *)(DAT_103b2f94 + 0xc) = param_3;
      return 1;
    }
    break;
  case 0x638:
    uVar3 = 0x3f6;
    param_3 = 0xdc;
    bVar5 = *(int *)(DAT_103b2f94 + 4) == 0;
LAB_101bc5bd:
    if (bVar5) {
      *(undefined4 *)(DAT_103b2f94 + 8) = uVar3;
      *(uint *)(DAT_103b2f94 + 0xc) = param_3;
      return 1;
    }
    break;
  case 0x639:
    uVar3 = 0x3f6;
    param_3 = 0xe6;
    if (*(int *)(DAT_103b2f94 + 4) == 0) {
      pcVar1 = DAT_103b2f94;
      pcVar1[8] = -10;
      pcVar1[9] = '\x03';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1 = DAT_103b2f94;
      pcVar1[0xc] = -0x1a;
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      return 1;
    }
    break;
  case 0x63a:
    if (DAT_103b2f94 != (char *)0x0) {
      uVar3 = FUN_101c0890(&DAT_1035397c,param_3);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar3);
    }
    uVar3 = 0x3f8;
  }
  iVar4 = FUN_1014a910(uVar3,param_3);
  if (iVar4 != 0) {
    return 1;
  }
  if (DAT_103b2f94 != (char *)0x0) {
    uVar3 = FUN_101c0890(&DAT_10353990,uVar3,param_3);
    FUN_101bb760(DAT_103b2f94 + 0x20,uVar3);
  }
  DAT_103b2f94[0x1f] = '\x01';
  return 0;
}


// ==== 101bc890 FUN_101bc890

void FUN_101bc890(void)

{
  int *piVar1;
  byte *_Dest;
  byte bVar2;
  bool bVar3;
  LPCSTR pCVar4;
  LSTATUS LVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  undefined4 uVar13;
  int iVar14;
  int in_ECX;
  uint uVar15;
  uint unaff_ESI;
  uint unaff_EDI;
  undefined *puVar16;
  DWORD DVar17;
  LPSTR lpClass;
  DWORD DVar18;
  REGSAM samDesired;
  LPDWORD pDVar19;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  LPDWORD pDVar20;
  DWORD dwType;
  int iVar21;
  WORD WVar22;
  HKEY *phkResult;
  BYTE *pBVar23;
  uint *puVar24;
  WORD WVar25;
  DWORD *pDVar26;
  WORD WVar27;
  uint local_2b4;
  DWORD local_2b0;
  HKEY local_2ac [2];
  DWORD local_2a4;
  DWORD local_2a0 [7];
  BYTE local_284 [64];
  CHAR local_244 [12];
  CHAR aCStack_238 [128];
  CHAR aCStack_1b8 [128];
  char acStack_138 [312];
  
  piVar1 = (int *)(in_ECX + 0x20);
  FUN_101c0890();
  FUN_101bb760();
  pDVar26 = local_2a0;
  phkResult = local_2ac;
  local_2b4 = 0;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  samDesired = 0xf003f;
  DVar18 = 0;
  lpClass = (LPSTR)0x0;
  DVar17 = 0;
  bVar3 = false;
  pCVar4 = (LPCSTR)FUN_101c0890(&DAT_10353bc8);
  LVar5 = RegCreateKeyExA((HKEY)0x80000001,pCVar4,DVar17,lpClass,DVar18,samDesired,
                          lpSecurityAttributes,phkResult,pDVar26);
  if (LVar5 == 0) {
    if (local_2a0[0] == 2) {
      pDVar26 = &local_2b0;
      pBVar23 = local_284;
      pDVar20 = (LPDWORD)0x0;
      pDVar19 = (LPDWORD)0x0;
      local_2b0 = 0x40;
      pCVar4 = (LPCSTR)FUN_101c0890();
      RegQueryValueExA(local_2ac[0],pCVar4,pDVar19,pDVar20,pBVar23,pDVar26);
      wsprintfA(local_244,&DAT_10353bb0);
      if ((local_2b0 != 0) && (iVar6 = lstrcmpA((LPCSTR)local_284,local_244), iVar6 == 0)) {
        bVar3 = true;
      }
      pDVar26 = &local_2b0;
      puVar24 = &local_2b4;
      pDVar20 = (LPDWORD)0x0;
      pDVar19 = (LPDWORD)0x0;
      local_2b0 = 4;
      pCVar4 = (LPCSTR)FUN_101c0890();
      RegQueryValueExA(local_2ac[0],pCVar4,pDVar19,pDVar20,(LPBYTE)puVar24,pDVar26);
    }
    wsprintfA((LPSTR)local_284,&DAT_10353bb0);
    iVar6 = lstrlenA((LPCSTR)local_284);
    local_2b0 = iVar6 + 1;
    pBVar23 = local_284;
    dwType = 1;
    DVar18 = 0;
    DVar17 = local_2b0;
    pCVar4 = (LPCSTR)FUN_101c0890();
    RegSetValueExA(local_2ac[0],pCVar4,DVar18,dwType,pBVar23,DVar17);
    local_2b0 = 4;
    if (bVar3) {
      local_2b4 = local_2b4 + 1;
    }
    else {
      local_2b4 = 0;
    }
    puVar24 = &local_2b4;
    WVar22 = 4;
    WVar25 = 0;
    DVar18 = 4;
    DVar17 = 0;
    pCVar4 = (LPCSTR)FUN_101c0890();
    RegSetValueExA(local_2ac[0],pCVar4,DVar17,DVar18,(BYTE *)puVar24,CONCAT22(WVar25,WVar22));
    RegCloseKey(local_2ac[0]);
  }
  if (((local_2b4 != 1) && (local_2b4 < 6)) && ((!bVar3 || (DAT_103b2f5c < 9)))) {
    FUN_101c0890();
    FUN_101bb760();
    if (*piVar1 != -1) {
      GetLocalTime((LPSYSTEMTIME)(in_ECX + 0x103c));
      _Dest = (byte *)(in_ECX + 0x3c);
      pcVar7 = (char *)FUN_101c0820(&DAT_10352de0,((LPSYSTEMTIME)(in_ECX + 0x103c))->wYear,
                                    *(undefined2 *)(in_ECX + 0x103e));
      _sprintf((char *)_Dest,pcVar7);
      uVar15 = 0xffffffff;
      pbVar8 = _Dest;
      do {
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar2 != 0);
      DVar17 = ~uVar15 - 1;
      if (*(int *)(in_ECX + 0x1050) == 0) {
        if (0 < (int)DVar17) {
          pbVar8 = _Dest;
          do {
            iVar6 = *(int *)(in_ECX + 0x104c) * 3 + 1;
            *(int *)(in_ECX + 0x104c) = iVar6;
            *pbVar8 = *pbVar8 ^ (char)iVar6 + 0x65U;
            pbVar8 = pbVar8 + 1;
          } while ((int)(pbVar8 + (-0x1c - (int)piVar1)) < (int)DVar17);
        }
      }
      else if (0 < (int)DVar17) {
        pbVar8 = _Dest;
        do {
          iVar6 = *(int *)(in_ECX + 0x1050) + 2;
          *(int *)(in_ECX + 0x1050) = iVar6;
          *pbVar8 = *pbVar8 ^ (char)iVar6 + 0x43U;
          pbVar8 = pbVar8 + 1;
        } while ((int)(pbVar8 + (-0x1c - (int)piVar1)) < (int)DVar17);
      }
      if (*(int *)(in_ECX + 0x1054) != 999) {
        WriteFile((HANDLE)*piVar1,_Dest,DVar17,&local_2a4,(LPOVERLAPPED)0x0);
      }
      SetEndOfFile((HANDLE)*piVar1);
      CloseHandle((HANDLE)*piVar1);
      *piVar1 = -1;
    }
    iVar6 = FUN_101beff0();
    if (iVar6 == 0) {
      FUN_101c0890();
      iVar6 = FUN_101bede0();
      if (iVar6 == 0) {
        return;
      }
    }
    FUN_101c0890();
    FUN_101beff0();
    pcVar9 = (code *)FUN_101bdc10();
    FUN_101c0890();
    FUN_101beff0();
    pcVar10 = (code *)FUN_101bdc10();
    FUN_101c0890();
    FUN_101beff0();
    pcVar11 = (code *)FUN_101bdc10();
    FUN_101c0890();
    FUN_101beff0();
    local_2a4 = FUN_101bdc10();
    if ((((pcVar9 != (code *)0x0) && (pcVar10 != (code *)0x0)) && (pcVar11 != (code *)0x0)) &&
       (local_2a4 != 0)) {
      WVar27 = 0;
      WVar22 = 0;
      WVar25 = 0;
      iVar21 = 0;
      pcVar12 = (code *)FUN_101c0820();
      iVar6 = (*pcVar9)();
      if (iVar6 != 0) {
        uVar13 = FUN_101c0890(&DAT_10353ad8,1,0x8000000);
        uVar13 = FUN_101c0820(&DAT_10353acc,uVar13);
        uVar13 = FUN_101c0820(&DAT_10353ab8,0x17ac,uVar13);
        iVar14 = (*pcVar10)(iVar6,uVar13);
        if (iVar14 == 0) {
          (*pcVar11)(iVar6);
          return;
        }
        aCStack_1b8[0] = '\0';
        GetComputerNameA(aCStack_1b8,(LPDWORD)&stack0xfffffd24);
        aCStack_238[0] = '\0';
        GetUserNameA(aCStack_238,(LPDWORD)&stack0xfffffd24);
        GetLocalTime((LPSYSTEMTIME)&stack0xfffffd34);
        if (DAT_103b2f5c == 1) {
          puVar16 = &DAT_10353aac;
        }
        else if (DAT_103b2f5c == 2) {
          puVar16 = &DAT_10353aa0;
        }
        else if (DAT_103b2f5c == 3) {
          puVar16 = &DAT_10353a98;
        }
        else if (DAT_103b2f5c == 4) {
          puVar16 = &DAT_10353a8c;
        }
        else if (DAT_103b2f5c == 5) {
          puVar16 = &DAT_10353a80;
        }
        else if (DAT_103b2f5c == 6) {
          puVar16 = &DAT_10353a70;
        }
        else if (DAT_103b2f5c == 7) {
          puVar16 = &DAT_10353a64;
        }
        else if (DAT_103b2f5c == 8) {
          puVar16 = &DAT_10353a58;
        }
        else if (DAT_103b2f5c == 9) {
          puVar16 = &DAT_10353a4c;
        }
        else {
          puVar16 = &DAT_10353a44;
        }
        uVar13 = FUN_101c0820(puVar16);
        pcVar7 = (char *)FUN_101c0890(&DAT_103539e8,iVar21 + 0x1200,0x2f,uVar13,
                                      *(undefined4 *)(DAT_103b2f94 + 0x10),aCStack_1b8,aCStack_238,
                                      iVar21 + 0x1228,WVar22,WVar25,WVar27,unaff_EDI & 0xffff,
                                      unaff_EDI >> 0x10,unaff_ESI & 0xffff,unaff_ESI >> 0x10);
        __snprintf(acStack_138,0x104,pcVar7);
        (*pcVar12)(iVar14,&DAT_103b2c3c,acStack_138,0x4000002,0);
        GetLastError();
        (*pcVar11)(iVar6);
        (*pcVar11)(iVar14);
      }
    }
  }
  return;
}


// ==== 101bce90 FUN_101bce90

undefined4 FUN_101bce90(void)

{
  LPCSTR lpModuleName;
  HMODULE pHVar1;
  undefined4 uVar2;
  
  if (DAT_103b2f9c != '\0') {
    return 1;
  }
  lpModuleName = (LPCSTR)FUN_101c0890(&DAT_10353c80);
  pHVar1 = GetModuleHandleA(lpModuleName);
  if (pHVar1 == (HMODULE)0x0) {
    return 0;
  }
  uVar2 = FUN_101c0890(&DAT_10353c60);
  DAT_103b2d40 = FUN_101bdc10(pHVar1,uVar2);
  if (DAT_103b2d40 == 0) {
    return 0;
  }
  uVar2 = FUN_101c0890(&DAT_10353c4c);
  DAT_103b2c30 = FUN_101bdc10(pHVar1,uVar2);
  if (DAT_103b2c30 == 0) {
    return 0;
  }
  uVar2 = FUN_101c0890(&DAT_10353c38);
  DAT_103b2f58 = FUN_101bdc10(pHVar1,uVar2);
  if (DAT_103b2f58 == 0) {
    return 0;
  }
  uVar2 = FUN_101c0890(&DAT_10353c24);
  DAT_103b2f54 = FUN_101bdc10(pHVar1,uVar2);
  if (DAT_103b2f54 == 0) {
    return 0;
  }
  uVar2 = FUN_101c0890(&DAT_10353c10);
  DAT_103b2c34 = FUN_101bdc10(pHVar1,uVar2);
  if (DAT_103b2c34 == 0) {
    return 0;
  }
  DAT_103b2f9c = 1;
  return 1;
}


// ==== 101bcf70 FUN_101bcf70

void FUN_101bcf70(void)

{
  char cVar1;
  HANDLE hObject;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puStack_138;
  undefined4 uStack_134;
  undefined4 local_124 [4];
  undefined1 auStack_114 [276];
  
  cVar1 = FUN_101bce90();
  if (cVar1 != '\0') {
    uStack_134 = 0;
    puVar4 = local_124;
    for (iVar3 = 0x49; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puStack_138 = (undefined1 *)0x2;
    hObject = (HANDLE)(*DAT_103b2d40)();
    if (hObject != (HANDLE)0xffffffff) {
      puStack_138 = &stack0xfffffed0;
      iVar3 = (*DAT_103b2c30)(hObject);
      if (iVar3 != 0) {
        if (DAT_103b2f94 == 0) goto LAB_101bd02c;
        uVar2 = FUN_101c0890(&DAT_10353cb8);
        FUN_101bb760(DAT_103b2f94 + 0x20,uVar2);
        do {
          if (DAT_103b2f94 != 0) {
            uVar2 = FUN_101c0890(&DAT_10353c94,auStack_114,0x128,local_124[0],local_124[2]);
            FUN_101bb760(DAT_103b2f94 + 0x20,uVar2);
          }
LAB_101bd02c:
          iVar3 = (*DAT_103b2f58)(hObject,&puStack_138);
        } while (iVar3 != 0);
      }
      CloseHandle(hObject);
    }
  }
  return;
}


// ==== 101bd050 FUN_101bd050

void FUN_101bd050(void)

{
  char cVar1;
  HANDLE hObject;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puStack_234;
  DWORD DStack_230;
  undefined4 local_220 [3];
  undefined1 auStack_214 [256];
  undefined1 auStack_114 [276];
  
  cVar1 = FUN_101bce90();
  if (cVar1 != '\0') {
    puVar4 = local_220;
    for (iVar3 = 0x88; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    DStack_230 = 0x101bd080;
    DStack_230 = GetCurrentProcessId();
    puStack_234 = (undefined1 *)0x8;
    hObject = (HANDLE)(*DAT_103b2d40)();
    if (hObject != (HANDLE)0xffffffff) {
      puStack_234 = &stack0xfffffdd4;
      iVar3 = (*DAT_103b2f54)(hObject);
      if (iVar3 != 0) {
        if (DAT_103b2f94 == 0) goto LAB_101bd115;
        uVar2 = FUN_101c0890(&DAT_10353d0c);
        FUN_101bb760(DAT_103b2f94 + 0x20,uVar2);
        do {
          if (DAT_103b2f94 != 0) {
            uVar2 = FUN_101c0890(&DAT_10353cec,auStack_214,local_220[0],local_220[1],auStack_114);
            FUN_101bb760(DAT_103b2f94 + 0x20,uVar2);
          }
LAB_101bd115:
          iVar3 = (*DAT_103b2c34)(hObject,&puStack_234);
        } while (iVar3 != 0);
      }
      CloseHandle(hObject);
    }
  }
  return;
}


// ==== 101bd250 FUN_101bd250

undefined1 FUN_101bd250(void)

{
  code *pcVar1;
  LPCSTR pCVar2;
  HMODULE pHVar3;
  HMODULE pHVar4;
  HMODULE pHVar5;
  undefined4 uVar6;
  int local_8;
  
  local_8 = 0;
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_10353e94);
  pHVar3 = GetModuleHandleA(pCVar2);
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_10353e84);
  pHVar4 = GetModuleHandleA(pCVar2);
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_10353e70);
  pHVar5 = GetModuleHandleA(pCVar2);
  if (pHVar5 == (HMODULE)0x0) {
    return 2;
  }
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_10353e54);
  DAT_103b2fa4 = (HMODULE)GetProcAddress(pHVar5,pCVar2);
  if (DAT_103b2fa4 != (HMODULE)0x0) {
    DAT_103b2fb8 = QueryPerformanceCounter_exref;
    if (DAT_103b2f94 != 0) {
      uVar6 = FUN_101c0890(&DAT_10353e40,DAT_103b2fa4,QueryPerformanceCounter_exref);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar6);
    }
    if (((DAT_103b2fa4 < pHVar5) && (pHVar4 == (HMODULE)0x0)) &&
       ((pHVar3 == (HMODULE)0x0 || (DAT_103b2fa4 < pHVar3)))) {
      if (DAT_103b2f94 != 0) {
        uVar6 = FUN_101c0890(&DAT_10353e28,pHVar5);
        FUN_101bb760(DAT_103b2f94 + 0x20,uVar6);
      }
      local_8 = 1;
    }
  }
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_10353e14);
  DAT_103b2fa0 = (HMODULE)GetProcAddress(pHVar5,pCVar2);
  if (DAT_103b2fa0 != (HMODULE)0x0) {
    DAT_103b2fb4 = GetTickCount_exref;
    if (DAT_103b2f94 != 0) {
      uVar6 = FUN_101c0890(&DAT_10353e00,DAT_103b2fa0,GetTickCount_exref);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar6);
    }
    if (((DAT_103b2fa0 < pHVar5) && (pHVar4 == (HMODULE)0x0)) &&
       ((pHVar3 == (HMODULE)0x0 || (DAT_103b2fa4 < pHVar3)))) {
      if (DAT_103b2f94 != 0) {
        uVar6 = FUN_101c0890(&DAT_10353de8,pHVar5);
        FUN_101bb760(DAT_103b2f94 + 0x20,uVar6);
      }
      local_8 = local_8 + 1;
    }
  }
  pcVar1 = timeGetTime_exref;
  timeGetTime();
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_10353dd8);
  pHVar5 = GetModuleHandleA(pCVar2);
  if (pHVar5 != (HMODULE)0x0) {
    pCVar2 = (LPCSTR)FUN_101c0890(&DAT_10353dc8);
    DAT_103b2fa8 = (HMODULE)GetProcAddress(pHVar5,pCVar2);
    if (DAT_103b2fa8 != (HMODULE)0x0) {
      DAT_103b2fbc = pcVar1;
      if (DAT_103b2f94 != 0) {
        uVar6 = FUN_101c0890(&DAT_10353db4,DAT_103b2fa8,pcVar1);
        FUN_101bb760(DAT_103b2f94 + 0x20,uVar6);
      }
      if (((DAT_103b2fa8 < pHVar5) && (pHVar4 == (HMODULE)0x0)) &&
         ((pHVar3 == (HMODULE)0x0 || (DAT_103b2fa4 < pHVar3)))) {
        if (DAT_103b2f94 != 0) {
          uVar6 = FUN_101c0890(&DAT_10353d9c,pHVar5);
          FUN_101bb760(DAT_103b2f94 + 0x20,uVar6);
        }
        local_8 = local_8 + 1;
      }
    }
  }
  DAT_103b2fc8 = 1;
  return local_8 == 0;
}


// ==== 101bd4d0 FUN_101bd4d0

bool FUN_101bd4d0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_103b2f90 != '\0') {
    return true;
  }
  if (DAT_103b2fc8 == '\0') {
    return (bool)2;
  }
  iVar2 = 0;
  if (DAT_103b2fb8 != QueryPerformanceCounter_exref) {
    if (DAT_103b2f94 != 0) {
      uVar1 = FUN_101c0890(&DAT_10353ed0,QueryPerformanceCounter_exref);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar1);
    }
    iVar2 = 1;
  }
  if (DAT_103b2fb4 != GetTickCount_exref) {
    if (DAT_103b2f94 != 0) {
      uVar1 = FUN_101c0890(&DAT_10353ebc,GetTickCount_exref);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar1);
    }
    iVar2 = iVar2 + 1;
  }
  if (DAT_103b2fbc != timeGetTime_exref) {
    if (DAT_103b2f94 != 0) {
      uVar1 = FUN_101c0890(&DAT_10353ea8,timeGetTime_exref);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar1);
    }
    iVar2 = iVar2 + 1;
  }
  return iVar2 == 0;
}


// ==== 101bd5b0 FUN_101bd5b0

undefined1 FUN_101bd5b0(void)

{
  LPCSTR pCVar1;
  HMODULE hModule;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar1 = (LPCSTR)FUN_101c0890(&DAT_10353f64);
  hModule = GetModuleHandleA(pCVar1);
  if (hModule == (HMODULE)0x0) {
    return 2;
  }
  pCVar1 = (LPCSTR)FUN_101c0890(&DAT_10353f58);
  DAT_103b2fac = (HMODULE)GetProcAddress(hModule,pCVar1);
  if (DAT_103b2fac != (HMODULE)0x0) {
    DAT_103b2fc0 = WSASend_exref;
    if (DAT_103b2f94 != 0) {
      uVar2 = FUN_101c0890(&DAT_10353f40,DAT_103b2fac,WSASend_exref);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar2);
    }
    if (DAT_103b2fac < hModule) {
      if (DAT_103b2f94 != 0) {
        uVar2 = FUN_101c0890(&DAT_10353f24,hModule);
        FUN_101bb760(DAT_103b2f94 + 0x20,uVar2);
      }
      iVar3 = 1;
    }
  }
  pCVar1 = (LPCSTR)FUN_101c0890(&DAT_10353f18);
  DAT_103b2fb0 = (HMODULE)GetProcAddress(hModule,pCVar1);
  if (DAT_103b2fb0 != (HMODULE)0x0) {
    DAT_103b2fc4 = send_exref;
    if (DAT_103b2f94 != 0) {
      uVar2 = FUN_101c0890(&DAT_10353f00,DAT_103b2fb0,send_exref);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar2);
    }
    if (DAT_103b2fb0 < hModule) {
      if (DAT_103b2f94 != 0) {
        uVar2 = FUN_101c0890(&DAT_10353ee4,hModule);
        FUN_101bb760(DAT_103b2f94 + 0x20,uVar2);
      }
      iVar3 = iVar3 + 1;
    }
  }
  DAT_103b2fc9 = 1;
  return iVar3 == 0;
}


// ==== 101bd700 FUN_101bd700

undefined1 FUN_101bd700(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_103b2fc9 == '\0') {
    return 2;
  }
  iVar2 = 0;
  if (DAT_103b2fc0 != WSASend_exref) {
    if (DAT_103b2f94 != 0) {
      uVar1 = FUN_101c0890(&DAT_10353f88,WSASend_exref);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar1);
    }
    iVar2 = 1;
  }
  if (DAT_103b2fc4 != send_exref) {
    if (DAT_103b2f94 != 0) {
      uVar1 = FUN_101c0890(&DAT_10353f74,send_exref);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar1);
    }
    iVar2 = iVar2 + 1;
  }
  return iVar2 == 0;
}


// ==== 101bd7a0 FUN_101bd7a0

undefined4 FUN_101bd7a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  DWORD DVar2;
  undefined4 uVar3;
  LPCSTR pCVar4;
  LSTATUS LVar5;
  LPSTR lpClass;
  DWORD dwOptions;
  REGSAM samDesired;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  HKEY *phkResult;
  LPDWORD lpReserved;
  DWORD *pDVar6;
  LPDWORD lpType;
  int *lpData;
  int local_424;
  int local_420;
  HKEY local_41c;
  DWORD local_418 [258];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021a56b;
  local_c = ExceptionList;
  local_418[1] = 4;
  local_420 = 0;
  local_424 = 1;
  ExceptionList = &local_c;
  FUN_101c0cf0();
  local_4 = 0;
  cVar1 = FUN_101c0d30(param_1,&local_424);
  if ((cVar1 == '\0') && (GetLastError(), DAT_103b2f94 != 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_101c0890(&DAT_1035401c,param_1,local_10,DVar2);
    FUN_101bb760(DAT_103b2f94 + 0x20,uVar3);
  }
  pDVar6 = local_418;
  phkResult = &local_41c;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  samDesired = 0xf003f;
  dwOptions = 0;
  lpClass = (LPSTR)0x0;
  DVar2 = 0;
  pCVar4 = (LPCSTR)FUN_101c0890(&DAT_10353fe8);
  LVar5 = RegCreateKeyExA((HKEY)0x80000001,pCVar4,DVar2,lpClass,dwOptions,samDesired,
                          lpSecurityAttributes,phkResult,pDVar6);
  if (LVar5 == 0) {
    if (local_418[0] == 2) {
      pDVar6 = local_418 + 1;
      lpData = &local_420;
      lpType = (LPDWORD)0x0;
      lpReserved = (LPDWORD)0x0;
      pCVar4 = (LPCSTR)FUN_101c0890(param_2);
      RegQueryValueExA(local_41c,pCVar4,lpReserved,lpType,(LPBYTE)lpData,pDVar6);
    }
    RegCloseKey(local_41c);
    if (local_424 == local_420) goto LAB_101bd918;
    if (DAT_103b2f94 == 0) goto LAB_101bd94f;
    uVar3 = FUN_101c0890(&DAT_10353fd0,local_424,local_420);
  }
  else {
    if (DAT_103b2f94 != 0) {
      uVar3 = FUN_101c0890(&DAT_10353fb8,LVar5);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar3);
    }
LAB_101bd918:
    if (local_424 == param_3) {
      local_4 = 0xffffffff;
      FUN_101bedd0();
      ExceptionList = local_c;
      return 1;
    }
    if (DAT_103b2f94 == 0) goto LAB_101bd94f;
    uVar3 = FUN_101c0890(&DAT_10353fa0,local_424,param_3);
  }
  FUN_101bb760(DAT_103b2f94 + 0x20,uVar3);
LAB_101bd94f:
  local_4 = 0xffffffff;
  FUN_101bedd0();
  ExceptionList = local_c;
  return 0;
}


// ==== 101bd9b0 FUN_101bd9b0

uint FUN_101bd9b0(undefined4 *param_1)

{
  LPCSTR lpModuleName;
  HMODULE pHVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined1 local_40 [36];
  uint uStack_1c;
  
  lpModuleName = (LPCSTR)FUN_101c0890(&DAT_10354074);
  pHVar1 = GetModuleHandleA(lpModuleName);
  uVar2 = FUN_101c0890(&DAT_10354054);
  pcVar3 = (code *)FUN_101bdc10(pHVar1,uVar2);
  uVar2 = FUN_101c0890(&DAT_1035403c);
  pcVar4 = (code *)FUN_101bdc10(pHVar1,uVar2);
  iVar5 = 0;
  if (pcVar4 != (code *)0x0) {
    iVar5 = (*pcVar4)(*param_1,0x400000,local_40,0x40,0);
  }
  if (pcVar3 != (code *)0x0) {
    if (iVar5 != 0) goto LAB_101bda35;
    iVar5 = (*pcVar3)(param_1[2],0x400000,local_40,0x40,0);
  }
  if (iVar5 == 0) {
    return 0;
  }
LAB_101bda35:
  return ~uStack_1c;
}


// ==== 101bda50 FUN_101bda50

undefined1 FUN_101bda50(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  LPCSTR lpLibFileName;
  HMODULE hLibModule;
  undefined4 uVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 local_11;
  undefined4 local_c;
  int *piStack_8;
  undefined1 auStack_4 [4];
  
  local_11 = 1;
  lpLibFileName = (LPCSTR)FUN_101c0890(&DAT_103540ec);
  hLibModule = LoadLibraryA(lpLibFileName);
  if (hLibModule != (HMODULE)0x0) {
    uVar3 = FUN_101c0890(&DAT_103540d0);
    pcVar4 = (code *)FUN_101bdc10(hLibModule,uVar3);
    uVar3 = FUN_101c0890(&DAT_103540b8);
    pcVar5 = (code *)FUN_101bdc10(hLibModule,uVar3);
    uVar3 = FUN_101c0890(&DAT_103540a4);
    pcVar6 = (code *)FUN_101bdc10(hLibModule,uVar3);
    if (((pcVar4 != (code *)0x0) && (pcVar5 != (code *)0x0)) && (pcVar6 != (code *)0x0)) {
      iVar7 = (*pcVar4)(param_1,&local_c);
      if (iVar7 != 0) {
        uVar3 = FUN_10004ed0(iVar7);
        iVar7 = (*pcVar5)(param_1,local_c,iVar7,uVar3);
        if (iVar7 != 0) {
          (*pcVar6)(uVar3,&DAT_1035352c,&piStack_8,auStack_4);
          if (*piStack_8 == -0x110fb43) {
            uVar1 = (uint)*(ushort *)(piStack_8 + 3) +
                    (((uint)piStack_8[3] >> 0x10) +
                    ((uint)*(ushort *)(piStack_8 + 2) + ((uint)piStack_8[2] >> 0x10) * 100) * 100) *
                    100;
            uVar2 = (param_5 & 0xffff) +
                    ((param_4 & 0xffff) + ((param_3 & 0xffff) + (param_2 & 0xffff) * 100) * 100) *
                    100;
            if (DAT_103b2f94 != 0) {
              uVar8 = FUN_101c0890(&DAT_10354088,param_1,uVar1,uVar2);
              FUN_101bb760(DAT_103b2f94 + 0x20,uVar8);
            }
            if (uVar1 < uVar2) {
              local_11 = 0;
            }
          }
        }
        FUN_10024ca0(uVar3);
      }
    }
    FreeLibrary(hLibModule);
    return local_11;
  }
  return 1;
}


// ==== 101bdc10 FUN_101bdc10

int FUN_101bdc10(short *param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  BOOL BVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  byte *lp;
  uint local_44;
  uint local_3c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1029a820;
  puStack_10 = &LAB_101c4e90;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  BVar3 = IsBadReadPtr(param_1,4);
  if (BVar3 != 0) {
    ExceptionList = local_14;
    return 0;
  }
  local_8 = 0;
  if (*param_1 != 0x5a4d) {
    ExceptionList = local_14;
    return 0;
  }
  piVar4 = (int *)(*(int *)(param_1 + 0x1e) + (int)param_1);
  if (*piVar4 != 0x4550) {
    ExceptionList = local_14;
    return 0;
  }
  if ((short)piVar4[6] == 0x20b) {
    iVar5 = piVar4[0x22];
  }
  else {
    iVar5 = piVar4[0x1e];
  }
  if (iVar5 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  local_3c = 0;
  pcVar7 = param_2;
  while (*pcVar7 != '\0') {
    pcVar7 = pcVar7 + 1;
    local_3c = local_3c + 1;
    if (0xff < local_3c) {
      ExceptionList = local_14;
      return 0;
    }
  }
  piVar4 = (int *)(*(int *)((int)param_1 + iVar5 + 0x20) + (int)param_1);
  BVar3 = IsBadReadPtr(piVar4,4);
  if (BVar3 != 0) {
    ExceptionList = local_14;
    return 0;
  }
  bVar2 = false;
  local_44 = 0;
  do {
    if (*(uint *)((int)param_1 + iVar5 + 0x18) <= local_44) {
LAB_101bde01:
      if (!bVar2) {
        ExceptionList = local_14;
        return 0;
      }
      ExceptionList = local_14;
      return *(int *)((int)param_1 +
                     (uint)*(ushort *)
                            ((int)param_1 + local_44 * 2 + *(int *)((int)param_1 + iVar5 + 0x24)) *
                     4 + *(int *)((int)param_1 + iVar5 + 0x1c)) + (int)param_1;
    }
    lp = (byte *)(*piVar4 + (int)param_1);
    BVar3 = IsBadReadPtr(lp,4);
    if (BVar3 != 0) {
      ExceptionList = local_14;
      return 0;
    }
    bVar1 = true;
    pcVar7 = param_2;
    for (uVar6 = 0; uVar6 < local_3c; uVar6 = uVar6 + 1) {
      if ((uint)*lp != (int)*pcVar7) {
        bVar1 = false;
        break;
      }
      lp = lp + 1;
      pcVar7 = pcVar7 + 1;
    }
    if (bVar1) {
      bVar2 = true;
      goto LAB_101bde01;
    }
    piVar4 = piVar4 + 1;
    local_44 = local_44 + 1;
  } while( true );
}


// ==== 101bded0 FUN_101bded0

undefined4 FUN_101bded0(void)

{
  char cVar1;
  LPCSTR pCVar2;
  LSTATUS LVar3;
  undefined4 uVar4;
  char *pcVar5;
  HANDLE hFile;
  HMODULE hLibModule;
  code *pcVar6;
  code *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined *puVar15;
  LPDWORD pDVar16;
  DWORD DVar17;
  LPDWORD pDVar18;
  DWORD dwType;
  REGSAM RVar19;
  BYTE *pBVar20;
  HKEY *ppHVar21;
  DWORD *pDVar22;
  CHAR *pCVar23;
  DWORD cbData;
  BYTE aBStack_2b0 [132];
  code *pcStack_22c;
  HKEY local_228;
  DWORD local_224;
  DWORD local_220;
  int local_21c;
  int *piStack_218;
  code *local_214;
  undefined4 local_210 [2];
  BYTE local_208;
  undefined1 uStack_207;
  undefined1 uStack_206;
  undefined1 uStack_205;
  CHAR local_104 [260];
  
  ppHVar21 = &local_228;
  uVar12 = 0;
  RVar19 = 1;
  DVar17 = 0;
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_10354268);
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,pCVar2,DVar17,RVar19,ppHVar21);
  if (LVar3 == 0) {
    pDVar22 = &local_224;
    pBVar20 = &local_208;
    pDVar18 = (LPDWORD)0x0;
    pDVar16 = (LPDWORD)0x0;
    local_224 = 0x104;
    pCVar2 = (LPCSTR)FUN_101c0890(&DAT_1035425c);
    LVar3 = RegQueryValueExA(local_228,pCVar2,pDVar16,pDVar18,pBVar20,pDVar22);
    if ((LVar3 == 0) && (DAT_103b2f94 != 0)) {
      uVar4 = FUN_101c0890(&DAT_10354248,&local_208);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar4);
    }
    RegCloseKey(local_228);
  }
  ppHVar21 = &local_228;
  RVar19 = 3;
  DVar17 = 0;
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_103541e4);
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,pCVar2,DVar17,RVar19,ppHVar21);
  if (LVar3 != 0) {
    return 0;
  }
  pDVar22 = &local_224;
  pBVar20 = &local_208;
  pDVar18 = (LPDWORD)0x0;
  pDVar16 = (LPDWORD)0x0;
  local_224 = 0x104;
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_103541d4);
  LVar3 = RegQueryValueExA(local_228,pCVar2,pDVar16,pDVar18,pBVar20,pDVar22);
  if ((LVar3 == 0) && (DAT_103b2f94 != 0)) {
    uVar4 = FUN_101c0890(&DAT_103541b0,local_208,uStack_207,uStack_206,uStack_205);
    FUN_101bb760(DAT_103b2f94 + 0x20,uVar4);
  }
  GetSystemDirectoryA(local_104,0x104);
  pcVar5 = (char *)FUN_101c0890(&DAT_1035419c);
  uVar9 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar10 = -1;
  pcVar5 = local_104;
  do {
    pcVar13 = pcVar5;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  pcVar5 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  local_220 = 0;
  hFile = CreateFileA(local_104,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    if (DAT_103b2f94 != 0) {
      pCVar23 = local_104;
      DVar17 = GetLastError();
      uVar4 = FUN_101c0890(&DAT_10353334,DVar17,pCVar23);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar4);
    }
  }
  else {
    local_220 = GetFileSize(hFile,(LPDWORD)0x0);
    if (DAT_103b2f94 != 0) {
      uVar4 = FUN_101c0890(&DAT_10353324,local_220);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar4);
    }
    CloseHandle(hFile);
  }
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_103540ec);
  hLibModule = LoadLibraryA(pCVar2);
  if (hLibModule != (HMODULE)0x0) {
    uVar4 = FUN_101c0890(&DAT_103540d0);
    pcVar6 = (code *)FUN_101bdc10(hLibModule,uVar4);
    uVar4 = FUN_101c0890(&DAT_103540b8);
    pcVar7 = (code *)FUN_101bdc10(hLibModule,uVar4);
    local_214 = pcVar7;
    uVar4 = FUN_101c0890(&DAT_103540a4);
    local_21c = FUN_101bdc10(hLibModule,uVar4);
    if ((((pcVar6 != (code *)0x0) && (pcVar7 != (code *)0x0)) && (local_21c != 0)) &&
       (iVar10 = (*pcVar6)(local_104,local_210), iVar10 != 0)) {
      uVar4 = FUN_10004ed0(iVar10);
      (*local_214)(local_104,local_210[0],iVar10,uVar4);
      (*pcStack_22c)(uVar4,&DAT_1035352c,&local_228,&local_21c);
      if ((*piStack_218 == -0x110fb43) && (DAT_103b2f94 != 0)) {
        uVar8 = FUN_101c0890(&DAT_10354184,(uint)piStack_218[2] >> 0x10,(short)piStack_218[2],
                             (uint)piStack_218[3] >> 0x10,(short)piStack_218[3]);
        FUN_101bb760(DAT_103b2f94 + 0x20,uVar8);
      }
      FUN_10024ca0(uVar4);
    }
    FreeLibrary(hLibModule);
  }
  if (local_220 == 0x18d10) {
    if (DAT_103b2f94 != 0) {
      uVar12 = FUN_101c0890(&DAT_10354168);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar12);
    }
    aBStack_2b0[1] = 199;
    aBStack_2b0[0x11] = 199;
    aBStack_2b0[0x33] = 0xf2;
    aBStack_2b0[0x26] = 0x16;
    aBStack_2b0[0x37] = 0xf2;
    aBStack_2b0[0x44] = 0x16;
    aBStack_2b0[0] = '*';
    aBStack_2b0[2] = 0xe;
    aBStack_2b0[3] = 0x10;
    aBStack_2b0[4] = 6;
    aBStack_2b0[5] = 0xbe;
    aBStack_2b0[6] = 0xa7;
    aBStack_2b0[7] = 0xcd;
    aBStack_2b0[8] = 0xf5;
    aBStack_2b0[9] = 0xfa;
    aBStack_2b0[10] = 0x66;
    aBStack_2b0[0xb] = 0xf;
    aBStack_2b0[0xc] = 0x86;
    aBStack_2b0[0xd] = 0xa3;
    aBStack_2b0[0xe] = 0x8a;
    aBStack_2b0[0xf] = 0x41;
    aBStack_2b0[0x10] = 0x58;
    aBStack_2b0[0x12] = 0xaf;
    aBStack_2b0[0x13] = 0x6e;
    aBStack_2b0[0x14] = 0xf5;
    aBStack_2b0[0x15] = 0xc1;
    aBStack_2b0[0x16] = 0x92;
    aBStack_2b0[0x17] = 0x3d;
    aBStack_2b0[0x18] = 0xf5;
    aBStack_2b0[0x19] = 0x56;
    aBStack_2b0[0x1a] = 0xa8;
    aBStack_2b0[0x1b] = 0x81;
    aBStack_2b0[0x1c] = 0x48;
    aBStack_2b0[0x1d] = 0x2e;
    aBStack_2b0[0x1e] = 0x89;
    aBStack_2b0[0x1f] = 0x7c;
    aBStack_2b0[0x20] = 4;
    aBStack_2b0[0x21] = 0x36;
    aBStack_2b0[0x22] = 0x53;
    aBStack_2b0[0x23] = 0xe3;
    aBStack_2b0[0x24] = 100;
    aBStack_2b0[0x25] = 0x79;
    aBStack_2b0[0x27] = 0x34;
    aBStack_2b0[0x28] = 0x7d;
    aBStack_2b0[0x29] = 0xe8;
    aBStack_2b0[0x2a] = 0xb0;
    aBStack_2b0[0x2b] = 0xae;
    aBStack_2b0[0x2c] = 0xd7;
    aBStack_2b0[0x2d] = 0x3c;
    aBStack_2b0[0x2e] = 0xc5;
    aBStack_2b0[0x2f] = 0xeb;
    aBStack_2b0[0x30] = 0x7a;
    aBStack_2b0[0x31] = 0x25;
    aBStack_2b0[0x32] = 0x2d;
    aBStack_2b0[0x34] = 0xb8;
    aBStack_2b0[0x35] = 0xe4;
    aBStack_2b0[0x36] = 0xf4;
    aBStack_2b0[0x38] = 0xcd;
    aBStack_2b0[0x39] = 0x95;
    aBStack_2b0[0x3a] = 0xb;
    aBStack_2b0[0x3b] = 0xdd;
    aBStack_2b0[0x3c] = 0x4f;
    aBStack_2b0[0x3d] = 10;
    aBStack_2b0[0x3e] = 0x9f;
    aBStack_2b0[0x3f] = 0x27;
    aBStack_2b0[0x40] = 0x19;
    aBStack_2b0[0x41] = 0xb5;
    aBStack_2b0[0x42] = 0xf6;
    aBStack_2b0[0x43] = 0x52;
    aBStack_2b0[0x45] = 0x77;
    aBStack_2b0[0x46] = 1;
    aBStack_2b0[0x47] = 0x2c;
    aBStack_2b0[0x48] = 0xf6;
    aBStack_2b0[0x49] = 0xae;
    aBStack_2b0[0x4a] = 0x9a;
    aBStack_2b0[0x65] = 0xf5;
    aBStack_2b0[0x4b] = 0xd3;
    aBStack_2b0[0x4c] = 0x7f;
    aBStack_2b0[0x4d] = 0xbf;
    aBStack_2b0[0x4e] = 0x6a;
    aBStack_2b0[0x4f] = 0x22;
    aBStack_2b0[0x50] = 0x91;
    aBStack_2b0[0x51] = 0x6b;
    aBStack_2b0[0x52] = 0xf3;
    aBStack_2b0[0x53] = 0xdb;
    aBStack_2b0[0x54] = 0x93;
    aBStack_2b0[0x55] = 0xd;
    aBStack_2b0[0x56] = 0x1c;
    aBStack_2b0[0x57] = 0xd2;
    aBStack_2b0[0x58] = 0;
    aBStack_2b0[0x59] = 0xb5;
    aBStack_2b0[0x5a] = 0xb8;
    aBStack_2b0[0x5b] = 0x14;
    aBStack_2b0[0x5c] = 0x1c;
    aBStack_2b0[0x5d] = 0x3e;
    aBStack_2b0[0x5e] = 0x9e;
    aBStack_2b0[0x5f] = 0x94;
    aBStack_2b0[0x60] = 0x7b;
    aBStack_2b0[0x61] = 0xa9;
    aBStack_2b0[0x62] = 0x8e;
    aBStack_2b0[99] = 0xc6;
    aBStack_2b0[100] = 0x84;
    aBStack_2b0[0x66] = 0x2b;
    aBStack_2b0[0x67] = 0xfa;
    aBStack_2b0[0x68] = 0xb5;
    aBStack_2b0[0x69] = 0x95;
    aBStack_2b0[0x6a] = 0;
    aBStack_2b0[0x6b] = 0xa5;
    aBStack_2b0[0x6c] = 0x95;
    aBStack_2b0[0x6d] = 0xb2;
    aBStack_2b0[0x6e] = 0x65;
    aBStack_2b0[0x6f] = 0x8c;
    aBStack_2b0[0x70] = 0x31;
    aBStack_2b0[0x71] = 0x19;
    aBStack_2b0[0x72] = 0x77;
    aBStack_2b0[0x73] = 0;
    aBStack_2b0[0x74] = 0xcd;
    aBStack_2b0[0x75] = 0x5b;
    aBStack_2b0[0x76] = 0x4e;
    aBStack_2b0[0x77] = 0x92;
    aBStack_2b0[0x78] = 0x68;
    aBStack_2b0[0x79] = 0xe4;
    aBStack_2b0[0x7a] = 0x42;
    aBStack_2b0[0x7b] = 0x66;
    aBStack_2b0[0x7c] = 0x17;
    aBStack_2b0[0x7d] = 0xb5;
    aBStack_2b0[0x7e] = 0xd4;
    aBStack_2b0[0x7f] = 0x93;
    puVar15 = &DAT_10354158;
  }
  else {
    if (local_220 != 0x17110) goto LAB_101be941;
    if (DAT_103b2f94 != 0) {
      uVar12 = FUN_101c0890(&DAT_1035413c);
      FUN_101bb760(DAT_103b2f94 + 0x20,uVar12);
    }
    aBStack_2b0[0x13] = 7;
    aBStack_2b0[0x28] = 7;
    aBStack_2b0[0x2f] = 7;
    aBStack_2b0[0] = '_';
    aBStack_2b0[1] = 0x71;
    aBStack_2b0[2] = 0x69;
    aBStack_2b0[3] = 0x53;
    aBStack_2b0[4] = 0x8a;
    aBStack_2b0[5] = 0x8e;
    aBStack_2b0[6] = 0x54;
    aBStack_2b0[7] = 0xac;
    aBStack_2b0[8] = 9;
    aBStack_2b0[9] = 0x3f;
    aBStack_2b0[10] = 0x65;
    aBStack_2b0[0xb] = 0x5a;
    aBStack_2b0[0xc] = 0x26;
    aBStack_2b0[0xd] = 0x8d;
    aBStack_2b0[0xe] = 0x77;
    aBStack_2b0[0xf] = 0x15;
    aBStack_2b0[0x10] = 0x9e;
    aBStack_2b0[0x11] = 0x68;
    aBStack_2b0[0x12] = 0xbb;
    aBStack_2b0[0x14] = 0xed;
    aBStack_2b0[0x15] = 0x8f;
    aBStack_2b0[0x16] = 0xf0;
    aBStack_2b0[0x17] = 0xb7;
    aBStack_2b0[0x18] = 0xf1;
    aBStack_2b0[0x19] = 0x99;
    aBStack_2b0[0x1a] = 5;
    aBStack_2b0[0x1b] = 0x15;
    aBStack_2b0[0x1c] = 0x80;
    aBStack_2b0[0x1d] = 100;
    aBStack_2b0[0x1e] = 0xa8;
    aBStack_2b0[0x1f] = 0xd8;
    aBStack_2b0[0x20] = 0x87;
    aBStack_2b0[0x21] = 0xc3;
    aBStack_2b0[0x22] = 0x58;
    aBStack_2b0[0x23] = 0xa9;
    aBStack_2b0[0x24] = 0xce;
    aBStack_2b0[0x25] = 0x26;
    aBStack_2b0[0x26] = 0xfe;
    aBStack_2b0[0x27] = 0xb3;
    aBStack_2b0[0x29] = 0xd7;
    aBStack_2b0[0x2a] = 0xa3;
    aBStack_2b0[0x2b] = 0x81;
    aBStack_2b0[0x2c] = 0xbe;
    aBStack_2b0[0x2d] = 0xb8;
    aBStack_2b0[0x2e] = 0x6e;
    aBStack_2b0[0x30] = 0x15;
    aBStack_2b0[0x31] = 0x68;
    aBStack_2b0[0x32] = 0x44;
    aBStack_2b0[0x33] = 0x17;
    aBStack_2b0[0x34] = 0xbe;
    aBStack_2b0[0x35] = 0x81;
    aBStack_2b0[0x36] = 0x80;
    aBStack_2b0[0x37] = 0x75;
    aBStack_2b0[0x38] = 0xa1;
    aBStack_2b0[0x39] = 0xdb;
    aBStack_2b0[0x3a] = 0xab;
    aBStack_2b0[0x3b] = 0x21;
    aBStack_2b0[0x3c] = 0xd1;
    aBStack_2b0[0x3d] = 0x1f;
    aBStack_2b0[0x3e] = 0xbc;
    aBStack_2b0[0x3f] = 0x9c;
    aBStack_2b0[0x40] = 0x1d;
    aBStack_2b0[0x41] = 0x49;
    aBStack_2b0[0x42] = 0xf0;
    aBStack_2b0[0x43] = 0xe5;
    aBStack_2b0[0x44] = 0xdd;
    aBStack_2b0[0x45] = 0x49;
    aBStack_2b0[0x46] = 0x7f;
    aBStack_2b0[0x47] = 0xb5;
    aBStack_2b0[0x48] = 0xe4;
    aBStack_2b0[0x49] = 9;
    aBStack_2b0[0x4a] = 0xf0;
    aBStack_2b0[0x4b] = 0x39;
    aBStack_2b0[0x4c] = 0x94;
    aBStack_2b0[0x5a] = 0x20;
    aBStack_2b0[0x7c] = 0x20;
    aBStack_2b0[0x4d] = 0x2a;
    aBStack_2b0[0x66] = 0x2a;
    aBStack_2b0[0x4e] = 0x6b;
    aBStack_2b0[0x4f] = 0x83;
    aBStack_2b0[0x50] = 0xf;
    aBStack_2b0[0x51] = 0xdb;
    aBStack_2b0[0x52] = 0x56;
    aBStack_2b0[0x53] = 0xe;
    aBStack_2b0[0x54] = 0xa3;
    aBStack_2b0[0x55] = 0x61;
    aBStack_2b0[0x56] = 0x9f;
    aBStack_2b0[0x57] = 0x12;
    aBStack_2b0[0x58] = 0xd4;
    aBStack_2b0[0x59] = 0xd7;
    aBStack_2b0[0x5b] = 0x90;
    aBStack_2b0[0x5c] = 0x54;
    aBStack_2b0[0x5d] = 0x9b;
    aBStack_2b0[0x5e] = 0xc6;
    aBStack_2b0[0x5f] = 0x99;
    aBStack_2b0[0x60] = 0xc;
    aBStack_2b0[0x61] = 0x44;
    aBStack_2b0[0x62] = 3;
    aBStack_2b0[99] = 0xd5;
    aBStack_2b0[100] = 0x1b;
    aBStack_2b0[0x65] = 0x9a;
    aBStack_2b0[0x67] = 0xa0;
    aBStack_2b0[0x68] = 0xa2;
    aBStack_2b0[0x69] = 0x8c;
    aBStack_2b0[0x6a] = 0x1c;
    aBStack_2b0[0x6b] = 0xf6;
    aBStack_2b0[0x6c] = 0x68;
    aBStack_2b0[0x6d] = 0xa5;
    aBStack_2b0[0x6e] = 0x57;
    aBStack_2b0[0x6f] = 0x2e;
    aBStack_2b0[0x70] = 0x11;
    aBStack_2b0[0x71] = 0x40;
    aBStack_2b0[0x72] = 0xa5;
    aBStack_2b0[0x73] = 0x8f;
    aBStack_2b0[0x74] = 0x77;
    aBStack_2b0[0x75] = 0x71;
    aBStack_2b0[0x76] = 0xec;
    aBStack_2b0[0x77] = 0x6a;
    aBStack_2b0[0x78] = 0x69;
    aBStack_2b0[0x79] = 0xa0;
    aBStack_2b0[0x7a] = 0xcb;
    aBStack_2b0[0x7b] = 0x1e;
    aBStack_2b0[0x7d] = 0x8e;
    aBStack_2b0[0x7e] = 0xe0;
    aBStack_2b0[0x7f] = 5;
    puVar15 = &DAT_1035412c;
  }
  pBVar20 = aBStack_2b0;
  pcStack_22c = (code *)0x0;
  aBStack_2b0[0x83] = 0;
  aBStack_2b0[0x82] = 0;
  aBStack_2b0[0x81] = 0;
  aBStack_2b0[0x80] = 0;
  cbData = 0x88;
  dwType = 3;
  DVar17 = 0;
  pCVar2 = (LPCSTR)FUN_101c0890(puVar15);
  RegSetValueExA(local_228,pCVar2,DVar17,dwType,pBVar20,cbData);
  uVar12 = 1;
LAB_101be941:
  RegCloseKey(local_228);
  return uVar12;
}


// ==== 101be960 FUN_101be960

undefined1 FUN_101be960(void)

{
  char cVar1;
  LPCSTR pCVar2;
  HMODULE hModule;
  uchar *puVar3;
  LSTATUS LVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  HKEY unaff_ESI;
  FARPROC pFVar9;
  undefined4 unaff_EDI;
  undefined1 uVar13;
  char *pcVar10;
  char *pcVar11;
  uchar *puVar12;
  DWORD DVar14;
  REGSAM samDesired;
  PHKEY phkResult;
  BYTE aBStack_43c [3];
  undefined1 local_439;
  CHAR aCStack_41c [272];
  CHAR local_30c [248];
  uchar auStack_214 [12];
  undefined1 local_208 [248];
  uchar auStack_110 [272];
  
  uVar13 = (undefined1)((uint)unaff_EDI >> 0x18);
  pFVar9 = (FARPROC)0x0;
  local_439 = 0;
  GetModuleFileNameA((HMODULE)0x0,local_30c,0x104);
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_1035430c);
  hModule = GetModuleHandleA(pCVar2);
  if (hModule != (HMODULE)0x0) {
    pCVar2 = (LPCSTR)FUN_101c0890(&DAT_103542f4);
    pFVar9 = GetProcAddress(hModule,pCVar2);
    if (pFVar9 == (FARPROC)0x0) {
      return 0;
    }
  }
  GetModuleFileNameA((HMODULE)0x0,local_30c,0x104);
  (*pFVar9)(local_30c,local_208,0x104);
  puVar3 = __mbsrchr(auStack_214,0x5c);
  if (puVar3 != (uchar *)0x0) {
    *puVar3 = '\0';
  }
  phkResult = (PHKEY)&stack0xfffffbbc;
  samDesired = 3;
  DVar14 = 0;
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_103542ac);
  LVar4 = RegOpenKeyExA((HKEY)0x80000001,pCVar2,DVar14,samDesired,phkResult);
  if (LVar4 == 0) {
    iVar5 = RegEnumValueA(unaff_ESI,0,aCStack_41c,(LPDWORD)&stack0xfffffbc0,(LPDWORD)0x0,
                          (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
    DVar14 = 1;
    while (iVar5 != 0x103) {
      if (iVar5 == 0) {
        uVar7 = 0xffffffff;
        pcVar10 = aCStack_41c;
        do {
          pcVar11 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        puVar3 = (uchar *)(pcVar11 + -uVar7);
        puVar12 = auStack_110;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)puVar12 = *(undefined4 *)puVar3;
          puVar3 = puVar3 + 4;
          puVar12 = puVar12 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar3 = __mbsrchr(auStack_110,0x5c);
        if (puVar3 != (uchar *)0x0) {
          *puVar3 = '\0';
        }
        iVar5 = __mbsicmp(auStack_110,auStack_214);
        if ((iVar5 == 0) &&
           (LVar4 = RegQueryValueExA(unaff_ESI,aCStack_41c,(LPDWORD)0x0,(LPDWORD)0x0,aBStack_43c,
                                     (LPDWORD)&stack0xfffffbc0), LVar4 == 0)) {
          if (DAT_103b2f94 != 0) {
            uVar6 = FUN_101c0890(&DAT_10354294,aBStack_43c);
            FUN_101bb760(DAT_103b2f94 + 0x20,uVar6);
          }
          LVar4 = RegDeleteValueA(unaff_ESI,aCStack_41c);
          if (LVar4 == 0) {
            unaff_EDI = 0x1000000;
          }
        }
      }
      iVar5 = RegEnumValueA(unaff_ESI,DVar14,aCStack_41c,(LPDWORD)&stack0xfffffbc0,(LPDWORD)0x0,
                            (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
      DVar14 = DVar14 + 1;
    }
    uVar13 = (undefined1)((uint)unaff_EDI >> 0x18);
    RegCloseKey(unaff_ESI);
  }
  return uVar13;
}


// ==== 101beb80 FUN_101beb80

bool FUN_101beb80(void)

{
  LPCSTR pCVar1;
  LSTATUS LVar2;
  bool bVar3;
  DWORD DVar4;
  DWORD dwType;
  REGSAM samDesired;
  BYTE *lpData;
  HKEY *phkResult;
  DWORD cbData;
  HKEY local_4;
  
  phkResult = &local_4;
  samDesired = 0xf003f;
  DVar4 = 0;
  bVar3 = false;
  pCVar1 = (LPCSTR)FUN_101c0890(&DAT_10354338);
  DVar4 = RegOpenKeyExA((HKEY)0x80000002,pCVar1,DVar4,samDesired,phkResult);
  if (DVar4 == 0) {
    lpData = &stack0x00000004;
    cbData = 4;
    dwType = 4;
    pCVar1 = (LPCSTR)FUN_101c0890(&DAT_10354320);
    LVar2 = RegSetValueExA(local_4,pCVar1,DVar4,dwType,lpData,cbData);
    bVar3 = LVar2 == 0;
    RegCloseKey(local_4);
  }
  return bVar3;
}


// ==== 101bebf0 FUN_101bebf0

void FUN_101bebf0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  HMODULE pHVar4;
  uint uVar5;
  
  pHVar4 = GetModuleHandleA((LPCSTR)0x0);
  if ((short)pHVar4->unused == 0x5a4d) {
    if (((pHVar4[0xd].unused != 0) && (pHVar4[0xe].unused != 0)) &&
       (DAT_103b2f90 = 1, pHVar4[0xc].unused == 0)) {
      DAT_103b2f91 = 1;
    }
    uVar1 = pHVar4[0xe].unused;
    if (((uVar1 != 0) && (uVar2 = pHVar4[0xd].unused, uVar2 != 0)) &&
       (uVar3 = pHVar4[0xc].unused, uVar3 != 0)) {
      if (uVar1 < uVar2) {
        uVar5 = uVar2 - uVar1;
      }
      else {
        uVar5 = uVar1 - uVar2;
      }
      if ((uVar3 == uVar5) || ((uVar2 == uVar1 && (uVar3 == uVar2)))) {
        DAT_103b2f91 = 1;
      }
    }
  }
  return;
}


// ==== 101bec60 FUN_101bec60

undefined4 FUN_101bec60(int *param_1,uint param_2)

{
  int iVar1;
  LPCSTR pCVar2;
  HANDLE hFileMappingObject;
  int *lpBaseAddress;
  HANDLE hHandle;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  pCVar2 = (LPCSTR)FUN_101c0890(&DAT_103543ac);
  hFileMappingObject = OpenFileMappingA(0xf001f,0,pCVar2);
  if (hFileMappingObject == (HANDLE)0x0) {
    pCVar2 = (LPCSTR)FUN_101c0890(&DAT_103543a0);
    hFileMappingObject = OpenFileMappingA(0xf001f,0,pCVar2);
    if (hFileMappingObject == (HANDLE)0x0) {
      return 0;
    }
  }
  lpBaseAddress = MapViewOfFile(hFileMappingObject,0xf001f,0,0,0x1000);
  if (lpBaseAddress != (int *)0x0) {
    pCVar2 = (LPCSTR)FUN_101c0890(&DAT_1035438c);
    hHandle = OpenMutexA(0x100000,0,pCVar2);
    if (hHandle == (HANDLE)0x0) {
      pCVar2 = (LPCSTR)FUN_101c0890(&DAT_10354380);
      hHandle = OpenMutexA(0x100000,0,pCVar2);
      if (hHandle == (HANDLE)0x0) {
        UnmapViewOfFile(lpBaseAddress);
        CloseHandle(hFileMappingObject);
        return 0;
      }
    }
    WaitForSingleObject(hHandle,0xffffffff);
    iVar1 = *lpBaseAddress;
    piVar3 = lpBaseAddress;
    while ((piVar4 = piVar3, iVar1 != 0 &&
           (piVar3 = (int *)((int)piVar3 + iVar1), piVar4 = lpBaseAddress,
           (uint)((int)piVar3 - (int)lpBaseAddress) < 0xffc))) {
      iVar1 = *piVar3;
    }
    piVar3 = lpBaseAddress;
    if ((uint)((int)piVar4 - (int)lpBaseAddress) < 0xffc - param_2) {
      piVar3 = piVar4;
      for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *piVar3 = *param_1;
        param_1 = param_1 + 1;
        piVar3 = piVar3 + 1;
      }
      for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)piVar3 = (char)*param_1;
        param_1 = (int *)((int)param_1 + 1);
        piVar3 = (int *)((int)piVar3 + 1);
      }
      piVar3 = (int *)((int)piVar4 + param_2);
    }
    *piVar3 = 0;
    UnmapViewOfFile(lpBaseAddress);
    CloseHandle(hFileMappingObject);
    ReleaseMutex(hHandle);
    CloseHandle(hHandle);
    return 1;
  }
  CloseHandle(hFileMappingObject);
  return 0;
}


// ==== 101bedc0 FUN_101bedc0

void FUN_101bedc0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  return;
}


